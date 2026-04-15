// tb_verilator2.cpp — Focused testbench: dump array data at compare() call
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

    const uint32_t PC_CMP_ENTRY    = 0x800007FC;
    const uint32_t PC_CMP_MISMATCH = 0x80000898;
    const uint32_t PC_CMP_BEQ      = 0x80000894; // beq a3, a5
    const uint32_t PC_FAIL         = 0x80000F30;
    const uint32_t PC_PASS         = 0x80000F70;
    const uint32_t PC_END          = 0x80000010;
    const uint32_t PC_POST_MAIN    = 0x80000FB0;

    // Array addresses in DRAM
    const uint32_t ARR1_DRAM_WORD = 0x8D79;  // (0x801235E4 - 0x80100000) / 4
    const uint32_t ARR2_DRAM_WORD = 0xAD1D;  // (0x8012B474 - 0x80100000) / 4

    int compare_calls = 0;
    int mismatches_printed = 0;
    int first_mismatch_found = 0;
    uint32_t stable_count = 0;
    uint32_t prev2_pc = 0xFFFFFFFF;
    uint32_t prev3_pc = 0xFFFFFFFF;

    while (cycle < MAX_CYCLES && !Verilated::gotFinish()) {
        soc->clk = 1;
        soc->eval();

        uint32_t pc = root->sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out;

        // Detect compare() entry
        if (pc == PC_CMP_ENTRY && prev_pc != PC_CMP_ENTRY) {
            compare_calls++;
            printf("\n[CMP] cycle=%llu  compare() called (#%d)\n", (unsigned long long)cycle, compare_calls);

            // Dump first 20 elements of each array
            printf("  Array1 (DRAM[0x%X..]):", ARR1_DRAM_WORD);
            for (int i = 0; i < 20; i++)
                printf(" %08X", root->sim_soc__DOT__dmem[ARR1_DRAM_WORD + i]);
            printf("\n");
            printf("  Array2 (DRAM[0x%X..]):", ARR2_DRAM_WORD);
            for (int i = 0; i < 20; i++)
                printf(" %08X", root->sim_soc__DOT__dmem[ARR2_DRAM_WORD + i]);
            printf("\n");

            // Find first difference
            int found_diff = 0;
            for (int i = 0; i < 8100; i++) {
                uint32_t v1 = root->sim_soc__DOT__dmem[ARR1_DRAM_WORD + i];
                uint32_t v2 = root->sim_soc__DOT__dmem[ARR2_DRAM_WORD + i];
                if (v1 != v2) {
                    if (!found_diff) {
                        printf("  FIRST DIFF at element %d (row %d, col %d):\n", i, i/90, i%90);
                        printf("    arr1[%d] = 0x%08X\n", i, v1);
                        printf("    arr2[%d] = 0x%08X\n", i, v2);
                    }
                    found_diff++;
                }
            }
            if (found_diff)
                printf("  Total different elements: %d / 8100\n", found_diff);
            else
                printf("  Arrays are IDENTICAL!\n");
        }

        // At mismatch detection point (first time only)
        if (pc == PC_CMP_MISMATCH && !first_mismatch_found) {
            first_mismatch_found = 1;
            printf("\n[MISMATCH] cycle=%llu  First compare mismatch detected\n", (unsigned long long)cycle);
            // Dump all registers
            printf("  Register file:\n");
            for (int r = 0; r < 31; r++) {
                uint32_t rv = root->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[r];
                if (rv != 0)
                    printf("    x%d = 0x%08X\n", r+1, rv);
            }
        }

        // Key function entries
        if (pc == PC_POST_MAIN && prev_pc != PC_POST_MAIN)
            printf("[FUNC] cycle=%llu  === ENTERING post_main ===\n", (unsigned long long)cycle);
        if (pc == PC_FAIL && prev_pc != PC_FAIL)
            printf("[FUNC] cycle=%llu  !!! ENTERING FAIL handler !!!\n", (unsigned long long)cycle);
        if (pc == PC_PASS && prev_pc != PC_PASS)
            printf("[FUNC] cycle=%llu  === ENTERING PASS handler ===\n", (unsigned long long)cycle);

        // Self-loop detection
        if (pc == prev3_pc && pc != 0xFFFFFFFF) {
            stable_count++;
            if (stable_count >= 20) {
                uint32_t pass_count = root->sim_soc__DOT__dmem[0];
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

        if (cycle % 50000000 == 0)
            printf("[PROGRESS] %lluM cycles, PC=0x%08X\n", (unsigned long long)(cycle/1000000), pc);
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
