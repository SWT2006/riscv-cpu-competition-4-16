// tb_verilator3.cpp — Trace register writes & key events in compare()
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

    const uint32_t PC_CMP_START = 0x800007FC;
    const uint32_t PC_CMP_END   = 0x800008E4; // ret instruction
    const uint32_t PC_BEQ_CHECK = 0x80000894; // beq a3, a5, +12

    int in_compare = 0;
    int compare_count = 0;
    uint32_t stable_count = 0;

    while (cycle < MAX_CYCLES && !Verilated::gotFinish()) {
        soc->clk = 1;
        soc->eval();

        uint32_t pc    = root->sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out;
        uint32_t instr = root->sim_soc__DOT__irom_data;
        uint32_t stall = root->sim_soc__DOT__u_cpu__DOT__stall;
        uint32_t flush = root->sim_soc__DOT__u_cpu__DOT__flush;
        uint32_t fwd_a = root->sim_soc__DOT__u_cpu__DOT__forward_a;
        uint32_t fwd_b = root->sim_soc__DOT__u_cpu__DOT__forward_b;
        uint8_t  wb_wen = root->sim_soc__DOT__u_cpu__DOT__memwb_reg_write;
        uint8_t  wb_rd  = root->sim_soc__DOT__u_cpu__DOT__memwb_rd_addr;
        uint32_t wb_val = root->sim_soc__DOT__u_cpu__DOT__wb_write_data;
        uint32_t idex_pc = root->sim_soc__DOT__u_cpu__DOT__idex_pc;
        uint32_t branch_taken = root->sim_soc__DOT__u_cpu__DOT__ex_branch_taken;

        // Detect entry into compare
        if (pc == PC_CMP_START && prev_pc != PC_CMP_START && !in_compare) {
            compare_count++;
            if (compare_count <= 2) {
                in_compare = 1;
                printf("\n=== compare() call #%d at cycle %llu ===\n",
                       compare_count, (unsigned long long)cycle);
                // Print all registers
                printf("  Registers at entry:\n");
                for (int r = 0; r < 31; r++) {
                    uint32_t rv = root->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[r];
                    if (rv != 0)
                        printf("    x%d = 0x%08X\n", r+1, rv);
                }
            }
        }

        // Inside compare: trace every cycle
        if (in_compare) {
            // Print every instruction with pipeline state
            printf("C%-10llu PC=0x%08X inst=0x%08X s=%d f=%d fa=%d fb=%d",
                   (unsigned long long)cycle, pc, instr, stall, flush, fwd_a, fwd_b);

            // Show EX stage info (what's in EX right now)
            printf(" EX_PC=0x%08X bt=%d", idex_pc, branch_taken);

            // Show WB writes
            if (wb_wen && wb_rd != 0)
                printf(" WB:x%d<=0x%08X", wb_rd, wb_val);

            printf("\n");

            // Check if returned from compare
            if (pc >= 0x80001040 && pc <= 0x80001050 && prev_pc >= PC_CMP_START && prev_pc <= PC_CMP_END + 4) {
                uint32_t retval = root->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[9]; // a0=x10
                printf("=== compare() returned: a0 = 0x%08X (%s) ===\n\n",
                       retval, retval ? "MATCH" : "MISMATCH");
                in_compare = 0;
            }

            // Safety: stop tracing after 600 lines
            static int trace_count = 0;
            trace_count++;
            if (trace_count > 600) {
                printf("... trace truncated ...\n");
                in_compare = 0;
            }
        }

        // Progress
        if (cycle % 50000000 == 0 && cycle > 0)
            printf("[PROGRESS] %lluM cycles, PC=0x%08X\n", (unsigned long long)(cycle/1000000), pc);

        // Self-loop detection
        if (pc == prev3_pc && pc != 0xFFFFFFFF) {
            stable_count++;
            if (stable_count >= 20) {
                printf("\n=== SELF-LOOP at PC=0x%08X after %llu cycles ===\n",
                       pc, (unsigned long long)cycle);
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
    }

    if (cycle >= MAX_CYCLES)
        printf("\n=== TIMEOUT after %llu cycles ===\n", (unsigned long long)cycle);

    soc->final();
    delete soc;
    return 0;
}
