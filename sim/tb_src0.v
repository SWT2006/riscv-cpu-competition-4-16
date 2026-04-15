`define IROM_HEX "src0_irom.hex"
`define DRAM_HEX "src0_dram.hex"
`define TEST_NAME "src0"
// =============================================================================
// tb_coe.v  –  COE-based testbench for the 5-stage pipelined RISC-V CPU.
//
// Usage (iverilog):
//   iverilog -g2012 -I ../rtl \
//     -DIROM_HEX=\"srcN_irom.hex\" -DDRAM_HEX=\"srcN_dram.hex\" \
//     -DTEST_NAME=\"srcN\" \
//     tb_coe.v sim_soc.v ../rtl/*.sv ../rtl/*.v -o sim_out
//   vvp sim_out
//
// Termination detection:
//   • Self-loop: PC unchanged for STABLE_CYCLES consecutive clocks after reset
//   • Timeout: MAX_CYCLES clocks reached (program did not terminate)
//
// Pass criterion printed at end:
//   "PASS" if terminated normally (self-loop), "FAIL" if timed out or PC=0.
// =============================================================================
`timescale 1ns/1ps

`ifndef IROM_HEX
  `define IROM_HEX "irom.hex"
`endif
`ifndef DRAM_HEX
  `define DRAM_HEX "dram.hex"
`endif
`ifndef TEST_NAME
  `define TEST_NAME "unknown"
`endif
`ifndef MAX_CYCLES
  `define MAX_CYCLES 3000000
`endif
`ifndef STABLE_CYCLES
  `define STABLE_CYCLES 20
`endif

module tb_coe;

    // -----------------------------------------------------------------------
    // Clock and reset
    // -----------------------------------------------------------------------
    reg clk  = 1'b0;
    reg rst_n = 1'b0;

    always #5 clk = ~clk;   // 100 MHz

    // -----------------------------------------------------------------------
    // DUT
    // -----------------------------------------------------------------------
    sim_soc u_soc (
        .clk   (clk),
        .rst_n (rst_n)
    );

    // -----------------------------------------------------------------------
    // Memory initialisation
    // -----------------------------------------------------------------------
    integer i;
    initial begin
        // 1. Fill instruction ROM with NOP (ADDI x0,x0,0 = 0x00000013)
        for (i = 0; i < 4096; i = i + 1)
            u_soc.imem[i] = 32'h0000_0013;

        // 2. Zero-fill data RAM
        for (i = 0; i < 65536; i = i + 1)
            u_soc.dmem[i] = 32'h0;

        // 3. Load program and data from converted hex files
        $readmemh(`IROM_HEX, u_soc.imem);
        $readmemh(`DRAM_HEX, u_soc.dmem);

        // 4. Apply reset for 10 cycles then release
        rst_n = 1'b0;
        repeat (10) @(posedge clk);
        @(negedge clk);
        rst_n = 1'b1;
    end

    // -----------------------------------------------------------------------
    // Cycle counter and PC monitoring
    // -----------------------------------------------------------------------
    integer  cycle_count   = 0;
    integer  stable_count  = 0;
    reg [31:0] prev_pc     = 32'hFFFF_FFFF;

    // PC is the registered output of stage_if
    wire [31:0] cpu_pc = u_soc.u_cpu.u_if.pc_out;

    always @(posedge clk) begin
        if (!rst_n) begin
            cycle_count  <= 0;
            stable_count <= 0;
            prev_pc      <= 32'hFFFF_FFFF;
        end else begin
            cycle_count <= cycle_count + 1;

            // Self-loop detection: PC == prev_pc for STABLE_CYCLES cycles
            if (cpu_pc == prev_pc)
                stable_count <= stable_count + 1;
            else
                stable_count <= 0;

            prev_pc <= cpu_pc;

            if (stable_count >= `STABLE_CYCLES) begin
                $display("");
                $display("=== TEST: %s ===", `TEST_NAME);
                $display("  Terminated: self-loop at PC = 0x%08h after %0d cycles",
                         cpu_pc, cycle_count);
                dump_registers;
                $display("  RESULT: PASS");
                $finish;
            end

            if (cycle_count >= `MAX_CYCLES) begin
                $display("");
                $display("=== TEST: %s ===", `TEST_NAME);
                $display("  TIMEOUT after %0d cycles, PC = 0x%08h", cycle_count, cpu_pc);
                dump_registers;
                $display("  RESULT: FAIL (timeout)");
                $finish;
            end
        end
    end

    // -----------------------------------------------------------------------
    // Register file dump (x0–x31)
    // -----------------------------------------------------------------------
    task dump_registers;
        integer k;
        reg [31:0] rv;
        begin
            $display("  Register file:");
            for (k = 0; k < 32; k = k + 1) begin
                if (k == 0)
                    rv = 32'h0;
                else
                    rv = u_soc.u_cpu.u_stage_id.regfile[k];
                if (rv !== 32'h0)
                    $display("    x%0d = 0x%08h", k, rv);
            end
        end
    endtask

    // -----------------------------------------------------------------------
    // Optional: waveform dump (uncomment if needed)
    // -----------------------------------------------------------------------
    // initial begin
    //     $dumpfile("tb_coe.vcd");
    //     $dumpvars(0, tb_coe);
    // end

endmodule
