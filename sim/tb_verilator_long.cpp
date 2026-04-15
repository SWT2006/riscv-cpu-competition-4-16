// tb_verilator_long.cpp — Long-running sim, minimal output, check final result
#include "Vsim_soc.h"
#include "Vsim_soc___024root.h"
#include "verilated.h"
#include <cstdio>
#include <cstdint>

double sc_time_stamp() { return 0; }

#define PRINT(...) do { printf(__VA_ARGS__); fflush(stdout); } while(0)

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
    const uint64_t MAX_CYCLES = 2000000000ULL; // 2 billion cycles
    uint32_t prev_pc = 0xFFFFFFFF;
    uint32_t prev2_pc = 0xFFFFFFFF;
    uint32_t prev3_pc = 0xFFFFFFFF;
    uint32_t stable_count = 0;

    const uint32_t LED_ADDR = 0x80200040;
    const uint32_t SEG_ADDR = 0x80200020;
    const uint32_t CNT_ADDR = 0x80200050;
    const uint32_t PC_FAIL  = 0x80000F30;
    const uint32_t PC_PASS  = 0x80000F70;
    const uint32_t PC_END   = 0x80000010;
    const uint32_t PC_CMP_ENTRY = 0x800007FC;

    // Track compare calls (only print when compare is actually entered at EX stage)
    // Use the return address to detect real calls
    int compare_calls = 0;

    while (cycle < MAX_CYCLES && !Verilated::gotFinish()) {
        soc->clk = 1;
        soc->eval();

        uint32_t pc   = root->sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out;
        uint32_t pa   = root->sim_soc__DOT__perip_addr;
        uint32_t pw   = root->sim_soc__DOT__perip_wdata;
        uint8_t  pwen = root->sim_soc__DOT__perip_wen;

        // Monitor MMIO writes (LED/SEG/CNT only)
        if (pwen) {
            if (pa == LED_ADDR)
                PRINT("[LED] cycle=%llu PC=0x%08X  val=0x%08X\n", (unsigned long long)cycle, pc, pw);
            if (pa == SEG_ADDR)
                PRINT("[SEG] cycle=%llu PC=0x%08X  val=0x%08X\n", (unsigned long long)cycle, pc, pw);
            if (pa == CNT_ADDR && (pw == 0x80000000 || pw == 0xFFFFFFFF))
                PRINT("[CNT] cycle=%llu PC=0x%08X  val=0x%08X %s\n",
                       (unsigned long long)cycle, pc, pw,
                       pw == 0x80000000 ? "(START)" : "(STOP)");
        }

        // Track compare calls (simple: detect when PC=0x80001044 after being in compare range)
        if (pc == PC_CMP_ENTRY && prev_pc != PC_CMP_ENTRY) {
            compare_calls++;
            PRINT("[CMP] cycle=%llu  compare() entered (#%d)\n", (unsigned long long)cycle, compare_calls);
        }

        // Key function entries
        if (pc == PC_FAIL && prev_pc != PC_FAIL)
            PRINT("[FAIL] cycle=%llu  FAIL handler entered!\n", (unsigned long long)cycle);
        if (pc == PC_PASS && prev_pc != PC_PASS)
            PRINT("[PASS] cycle=%llu  PASS handler entered!\n", (unsigned long long)cycle);

        // Self-loop detection (period-3 for 5-stage pipeline)
        if (pc == prev3_pc && pc != 0xFFFFFFFF) {
            stable_count++;
            if (stable_count >= 20) {
                uint32_t pass_count = root->sim_soc__DOT__dmem[0];
                PRINT("\n=== TEST COMPLETE at cycle %llu ===\n", (unsigned long long)cycle);
                PRINT("  Self-loop at PC=0x%08X\n", pc);
                PRINT("  DRAM pass_count = %u\n", pass_count);
                PRINT("  Register dump:\n");
                for (int r = 0; r < 31; r++) {
                    uint32_t rv = root->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[r];
                    if (rv != 0)
                        PRINT("    x%d = 0x%08X\n", r+1, rv);
                }
                if (pc == PC_END)
                    PRINT("  RESULT: *** PASS *** (normal termination)\n");
                else
                    PRINT("  RESULT: *** STUCK *** (unexpected address)\n");
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

        if (cycle % 100000000 == 0)
            PRINT("[PROGRESS] %lluM cycles, PC=0x%08X\n", (unsigned long long)(cycle/1000000), pc);
    }

    if (cycle >= MAX_CYCLES) {
        uint32_t pc = root->sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out;
        uint32_t pass_count = root->sim_soc__DOT__dmem[0];
        PRINT("\n=== TIMEOUT after %llu cycles ===\n", (unsigned long long)cycle);
        PRINT("  PC = 0x%08X\n", pc);
        PRINT("  DRAM pass_count = %u\n", pass_count);
    }

    soc->final();
    delete soc;
    return 0;
}
