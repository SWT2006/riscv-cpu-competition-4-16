// =============================================================================
// tb_debug.v  –  Debug testbench with periodic PC trace.
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
  `define MAX_CYCLES 30000000
`endif
`ifndef STABLE_CYCLES
  `define STABLE_CYCLES 20
`endif
`ifndef TRACE_INTERVAL
  `define TRACE_INTERVAL 1000000
`endif

module tb_coe;

    reg clk  = 1'b0;
    reg rst_n = 1'b0;

    always #5 clk = ~clk;

    sim_soc u_soc (
        .clk   (clk),
        .rst_n (rst_n)
    );

    integer i;
    initial begin
        for (i = 0; i < 4096; i = i + 1)
            u_soc.imem[i] = 32'h0000_0013;
        for (i = 0; i < 65536; i = i + 1)
            u_soc.dmem[i] = 32'h0;
        $readmemh(`IROM_HEX, u_soc.imem);
        $readmemh(`DRAM_HEX, u_soc.dmem);
        rst_n = 1'b0;
        repeat (10) @(posedge clk);
        @(negedge clk);
        rst_n = 1'b1;
    end

    reg [63:0] cycle_count  = 64'h0;
    reg [63:0] stable_count = 64'h0;
    // In a 5-stage pipeline, a JAL-to-self causes pc_out to cycle with period 3.
    // Detect by checking whether pc_out repeats every 3 cycles.
    reg [31:0] prev_pc     = 32'hFFFF_FFFF;
    reg [31:0] prev2_pc    = 32'hFFFF_FFFF;
    reg [31:0] prev3_pc    = 32'hFFFF_FFFF;
    reg [63:0] next_trace  = `TRACE_INTERVAL;

    wire [31:0] cpu_pc = u_soc.u_cpu.u_if.pc_out;

    always @(posedge clk) begin
        if (!rst_n) begin
            cycle_count  <= 0;
            stable_count <= 0;
            prev_pc      <= 32'hFFFF_FFFF;
            prev2_pc     <= 32'hFFFF_FFFF;
            prev3_pc     <= 32'hFFFF_FFFF;
        end else begin
            cycle_count <= cycle_count + 1;

            if (cpu_pc == prev3_pc && cpu_pc != 32'hFFFF_FFFF)
                stable_count <= stable_count + 1;
            else
                stable_count <= 0;

            prev3_pc <= prev2_pc;
            prev2_pc <= prev_pc;
            prev_pc  <= cpu_pc;

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

    // Periodic PC trace
    always @(posedge clk) begin
        if (rst_n && cycle_count > 0 && (cycle_count % `TRACE_INTERVAL == 0)) begin
            $display("[%0d] PC=0x%08h  x1=0x%08h x2=0x%08h x10=0x%08h x11=0x%08h",
                     cycle_count, cpu_pc,
                     u_soc.u_cpu.u_stage_id.regfile[1],
                     u_soc.u_cpu.u_stage_id.regfile[2],
                     u_soc.u_cpu.u_stage_id.regfile[10],
                     u_soc.u_cpu.u_stage_id.regfile[11]);
        end
    end

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

endmodule
