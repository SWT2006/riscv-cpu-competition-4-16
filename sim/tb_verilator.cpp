// tb_verilator.cpp — Verilator testbench for sim_soc
#include "Vsim_soc.h"
#include "Vsim_soc___024root.h"
#include "verilated.h"
#include <cstdio>
#include <cstdint>

double sc_time_stamp() { return 0; }

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
    const uint64_t MAX_CYCLES = 200000000ULL;
    uint32_t prev_pc = 0xFFFFFFFF;
    uint32_t prev2_pc = 0xFFFFFFFF;
    uint32_t prev3_pc = 0xFFFFFFFF;
    uint32_t stable_count = 0;
    uint32_t last_pass_count = 0;

    const uint32_t LED_ADDR = 0x80200040;
    const uint32_t SEG_ADDR = 0x80200020;
    const uint32_t CNT_ADDR = 0x80200050;
    const uint32_t PC_FAIL  = 0x80000F30;
    const uint32_t PC_PASS  = 0x80000F70;
    const uint32_t PC_END   = 0x80000010;
    const uint32_t PC_CMP_MISMATCH = 0x80000898;
    const uint32_t PC_CMP_ENTRY    = 0x800007FC;
    const uint32_t PC_POST_MAIN    = 0x80000FB0;

    int cnt_start_printed = 0;

    while (cycle < MAX_CYCLES && !Verilated::gotFinish()) {
        soc->clk = 1;
        soc->eval();

        uint32_t pc   = root->sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out;
        uint32_t pa   = root->sim_soc__DOT__perip_addr;
        uint32_t pw   = root->sim_soc__DOT__perip_wdata;
        uint8_t  pwen = root->sim_soc__DOT__perip_wen;
        uint32_t pass_count = root->sim_soc__DOT__dmem[0];

        if (pwen) {
            if (pa == LED_ADDR)
                printf("[LED] cycle=%llu PC=0x%08X  LED_WRITE: 0x%08X\n", (unsigned long long)cycle, pc, pw);
            if (pa == SEG_ADDR)
                printf("[SEG] cycle=%llu PC=0x%08X  SEG_WRITE: 0x%08X\n", (unsigned long long)cycle, pc, pw);
            if (pa == CNT_ADDR) {
                if (cnt_start_printed < 3 || pw == 0xFFFFFFFF) {
                    printf("[CNT] cycle=%llu PC=0x%08X  CNT_WRITE: 0x%08X %s\n",
                           (unsigned long long)cycle, pc, pw,
                           pw == 0x80000000 ? "(START)" :
                           pw == 0xFFFFFFFF ? "(STOP)" : "");
                    cnt_start_printed++;
                }
            }
        }

        if (pass_count != last_pass_count) {
            printf("[PASS] cycle=%llu  count: %u -> %u\n", (unsigned long long)cycle, last_pass_count, pass_count);
            last_pass_count = pass_count;
        }

        if (pc == PC_POST_MAIN && prev_pc != PC_POST_MAIN)
            printf("[FUNC] cycle=%llu  === ENTERING post_main ===\n", (unsigned long long)cycle);
        if (pc == PC_FAIL && prev_pc != PC_FAIL)
            printf("[FUNC] cycle=%llu  !!! ENTERING FAIL handler !!!\n", (unsigned long long)cycle);
        if (pc == PC_PASS && prev_pc != PC_PASS)
            printf("[FUNC] cycle=%llu  === ENTERING PASS handler ===\n", (unsigned long long)cycle);
        if (pc == PC_CMP_MISMATCH && prev_pc != PC_CMP_MISMATCH)
            printf("[CMP]  cycle=%llu  *** COMPARE MISMATCH ***\n", (unsigned long long)cycle);
        if (pc == PC_CMP_ENTRY && prev_pc != PC_CMP_ENTRY)
            printf("[CMP]  cycle=%llu  compare() called\n", (unsigned long long)cycle);
        if (pc == PC_END && prev_pc != PC_END)
            printf("[END]  cycle=%llu  Reached self-loop at 0x80000010\n", (unsigned long long)cycle);

        if (pc == prev3_pc && pc != 0xFFFFFFFF) {
            stable_count++;
            if (stable_count >= 20) {
                printf("\n=== TEST COMPLETE ===\n");
                printf("  Self-loop at PC=0x%08X after %llu cycles\n", pc, (unsigned long long)cycle);
                printf("  DRAM pass_count = %u\n", pass_count);
                printf("  Register dump:\n");
                for (int r = 0; r < 31; r++) {
                    uint32_t rv = root->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[r];
                    if (rv != 0)
                        printf("    x%d = 0x%08X\n", r+1, rv);
                }
                if (pc == PC_END)
                    printf("  RESULT: COMPLETED (normal termination)\n");
                else
                    printf("  RESULT: STUCK at unexpected address\n");
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

        if (cycle % 10000000 == 0)
            printf("[PROGRESS] %lluM cycles, PC=0x%08X, pass_count=%u\n", (unsigned long long)(cycle/1000000), pc, pass_count);
    }

    if (cycle >= MAX_CYCLES) {
        uint32_t pc = root->sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out;
        uint32_t pass_count = root->sim_soc__DOT__dmem[0];
        printf("\n=== TIMEOUT after %llu cycles ===\n", (unsigned long long)cycle);
        printf("  PC = 0x%08X\n", pc);
        printf("  DRAM pass_count = %u\n", pass_count);
    }

    soc->final();
    delete soc;
    return 0;
}
