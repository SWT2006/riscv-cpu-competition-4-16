// tb_verilator_full.cpp — Full run: sort loops + count_primes, monitor all phases
#include "Vsim_soc.h"
#include "Vsim_soc___024root.h"
#include "verilated.h"
#include <cstdio>
#include <cstdint>

double sc_time_stamp() { return 0; }

#define PRINT(...) do { fprintf(stdout, __VA_ARGS__); fflush(stdout); } while(0)

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vsim_soc* soc = new Vsim_soc;
    auto* root = soc->rootp;

    // Reset
    soc->rst_n = 0;
    soc->clk = 0;
    for (int i = 0; i < 20; i++) {
        soc->clk = !soc->clk;
        soc->eval();
    }
    soc->rst_n = 1;

    uint64_t cycle = 0;
    const uint64_t MAX_CYCLES = 6000000000ULL; // 6 billion
    uint32_t prev_pc = 0xFFFFFFFF;
    uint32_t prev2_pc = 0xFFFFFFFF;
    uint32_t prev3_pc = 0xFFFFFFFF;
    uint32_t stable_count = 0;

    // Key addresses
    const uint32_t PC_FAIL       = 0x80000F30;
    const uint32_t PC_PASS       = 0x80000F70;
    const uint32_t PC_END        = 0x80000010;
    const uint32_t PC_CMP1       = 0x800007FC; // compare() entry
    const uint32_t PC_CMP2       = 0x80000BF4; // second compare function
    const uint32_t PC_COUNT_PRM  = 0x80000DC8; // count_primes() entry
    const uint32_t PC_IS_PRIME   = 0x80000D34; // is_prime() entry
    const uint32_t PC_POST_MAIN  = 0x80000FB0; // post_main entry
    const uint32_t PC_LOOP2_SORT = 0x80000C7C; // sort called in loop 2
    const uint32_t PC_SORT2A     = 0x800009C8; // first sort in loop2 body
    const uint32_t PC_SORT2B     = 0x80000AD8; // second sort in loop2 body

    const uint32_t LED_ADDR = 0x80200040;
    const uint32_t SEG_ADDR = 0x80200020;
    const uint32_t CNT_ADDR = 0x80200050;

    int compare1_calls = 0;
    int compare2_calls = 0;
    int is_prime_calls = 0;
    int count_primes_entered = 0;
    int loop2_iter = 0;

    while (cycle < MAX_CYCLES && !Verilated::gotFinish()) {
        soc->clk = 1;
        soc->eval();

        uint32_t pc   = root->sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out;
        uint32_t pa   = root->sim_soc__DOT__perip_addr;
        uint32_t pw   = root->sim_soc__DOT__perip_wdata;
        uint8_t  pwen = root->sim_soc__DOT__perip_wen;

        // MMIO writes (LED/SEG/CNT)
        if (pwen) {
            if (pa == LED_ADDR)
                PRINT("[LED] cycle=%llu PC=0x%08X val=0x%08X\n", (unsigned long long)cycle, pc, pw);
            if (pa == SEG_ADDR)
                PRINT("[SEG] cycle=%llu PC=0x%08X val=0x%08X\n", (unsigned long long)cycle, pc, pw);
            if (pa == CNT_ADDR)
                PRINT("[CNT] cycle=%llu PC=0x%08X val=0x%08X %s\n",
                       (unsigned long long)cycle, pc, pw,
                       pw == 0x80000000 ? "(START)" : pw == 0xFFFFFFFF ? "(STOP)" : "");
        }

        // Track compare() in loop 1 (0x800007FC)
        if (pc == PC_CMP1 && prev_pc != PC_CMP1) {
            compare1_calls++;
            PRINT("[CMP1] cycle=%llu  compare() #%d\n", (unsigned long long)cycle, compare1_calls);
        }

        // Track compare() in loop 2 (0x80000BF4)
        if (pc == PC_CMP2 && prev_pc != PC_CMP2) {
            compare2_calls++;
            PRINT("[CMP2] cycle=%llu  compare2() #%d\n", (unsigned long long)cycle, compare2_calls);
        }

        // Track loop 2 sort entry
        if (pc == PC_LOOP2_SORT && prev_pc != PC_LOOP2_SORT) {
            loop2_iter++;
            if (loop2_iter <= 30)
                PRINT("[L2SORT] cycle=%llu  loop2 sort_init #%d\n", (unsigned long long)cycle, loop2_iter);
        }

        // count_primes() entry
        if (pc == PC_COUNT_PRM && prev_pc != PC_COUNT_PRM && !count_primes_entered) {
            count_primes_entered = 1;
            PRINT("[PRIMES] cycle=%llu  count_primes() ENTERED\n", (unsigned long long)cycle);
        }

        // is_prime() entry - track every 1000th call
        if (pc == PC_IS_PRIME && prev_pc != PC_IS_PRIME) {
            is_prime_calls++;
            if (is_prime_calls <= 5 || is_prime_calls % 2000 == 0)
                PRINT("[ISPRIME] cycle=%llu  is_prime() call #%d\n", (unsigned long long)cycle, is_prime_calls);
        }

        // PASS/FAIL handlers
        if (pc == PC_FAIL && prev_pc != PC_FAIL)
            PRINT("[FAIL!] cycle=%llu  FAIL handler entered!\n", (unsigned long long)cycle);
        if (pc == PC_PASS && prev_pc != PC_PASS)
            PRINT("[PASS!] cycle=%llu  PASS handler entered!\n", (unsigned long long)cycle);

        // Self-loop detection (period-3 for 5-stage pipeline)
        if (pc == prev3_pc && pc != 0xFFFFFFFF) {
            stable_count++;
            if (stable_count >= 20) {
                PRINT("\n=== TEST COMPLETE at cycle %llu ===\n", (unsigned long long)cycle);
                PRINT("  Self-loop at PC=0x%08X\n", pc);
                PRINT("  Register dump:\n");
                for (int r = 0; r < 31; r++) {
                    uint32_t rv = root->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[r];
                    if (rv != 0)
                        PRINT("    x%d = 0x%08X (%s)\n", r+1, rv,
                              r+1==10?"a0":r+1==15?"a5":r+1==31?"t6":"");
                }
                if (pc == PC_END)
                    PRINT("  RESULT: *** PROGRAM COMPLETED ***\n");
                else
                    PRINT("  RESULT: *** STUCK at unexpected PC ***\n");
                PRINT("  Stats: cmp1=%d cmp2=%d is_prime=%d\n",
                       compare1_calls, compare2_calls, is_prime_calls);
                break;
            }
        } else {
            stable_count = 0;
        }

        prev3_pc = prev2_pc;
        prev2_pc = prev_pc;
        prev_pc = pc;

        soc->clk = 0;
        soc->eval();
        cycle++;

        if (cycle % 200000000 == 0)
            PRINT("[PROGRESS] %lluM cycles, PC=0x%08X, cmp1=%d cmp2=%d prime_calls=%d\n",
                   (unsigned long long)(cycle/1000000), pc, compare1_calls, compare2_calls, is_prime_calls);
    }

    if (cycle >= MAX_CYCLES) {
        uint32_t pc = root->sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out;
        PRINT("\n=== TIMEOUT after %llu cycles ===\n", (unsigned long long)cycle);
        PRINT("  PC = 0x%08X\n", pc);
        PRINT("  Stats: cmp1=%d cmp2=%d is_prime=%d\n",
               compare1_calls, compare2_calls, is_prime_calls);
    }

    soc->final();
    delete soc;
    return 0;
}
