// tb_debug_mmio.v — Instrumented testbench for MMIO + pipeline debug
// Monitors LED/SEG/CNT writes and tracks pass-count at DRAM[0x80100000]
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
  `define MAX_CYCLES 200000000
`endif
`ifndef STABLE_CYCLES
  `define STABLE_CYCLES 20
`endif

module tb_debug_mmio;

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

    // -------------------------------------------------------------------
    // Cycle counter and self-loop detection (same as tb_coe.v)
    // -------------------------------------------------------------------
    reg [63:0] cycle_count  = 64'h0;
    reg [63:0] stable_count = 64'h0;
    reg [31:0] prev_pc      = 32'hFFFF_FFFF;
    reg [31:0] prev2_pc     = 32'hFFFF_FFFF;
    reg [31:0] prev3_pc     = 32'hFFFF_FFFF;

    wire [31:0] cpu_pc     = u_soc.u_cpu.u_if.pc_out;
    wire [31:0] perip_addr = u_soc.u_cpu.perip_addr;
    wire        perip_wen  = u_soc.u_cpu.perip_wen;
    wire [31:0] perip_wdata= u_soc.u_cpu.perip_wdata;
    wire [31:0] perip_rdata= u_soc.u_cpu.perip_rdata;
    wire [1:0]  perip_mask = u_soc.u_cpu.perip_mask;

    // Pipeline internals
    wire        stall      = u_soc.u_cpu.stall;
    wire        flush      = u_soc.u_cpu.flush;
    wire [1:0]  fwd_a      = u_soc.u_cpu.forward_a;
    wire [1:0]  fwd_b      = u_soc.u_cpu.forward_b;
    wire [31:0] ex_alu_res = u_soc.u_cpu.ex_alu_result;
    wire        wb_wen     = u_soc.u_cpu.memwb_reg_write;
    wire [4:0]  wb_rd      = u_soc.u_cpu.memwb_rd_addr;
    wire [31:0] wb_data    = u_soc.u_cpu.wb_write_data;

    // MMIO addresses
    localparam LED_ADDR = 32'h8020_0040;
    localparam SEG_ADDR = 32'h8020_0020;
    localparam CNT_ADDR = 32'h8020_0050;
    localparam PASS_CNT_ADDR = 32'h8010_0000; // DRAM word 0

    // Track the DRAM pass counter (word 0 at 0x80100000)
    wire [31:0] dram_pass_count = u_soc.dmem[0]; // DRAM[0x80100000] = dmem[0]

    reg [31:0] last_pass_count = 0;
    reg        seen_led_write  = 0;
    reg        seen_seg_write  = 0;
    reg [31:0] led_value       = 0;
    reg [31:0] seg_value       = 0;

    always @(posedge clk) begin
        if (!rst_n) begin
            cycle_count  <= 0;
            stable_count <= 0;
            prev_pc      <= 32'hFFFF_FFFF;
            prev2_pc     <= 32'hFFFF_FFFF;
            prev3_pc     <= 32'hFFFF_FFFF;
            last_pass_count <= 0;
        end else begin
            cycle_count <= cycle_count + 1;

            // -------------------------------------------------------
            // MMIO write monitoring
            // -------------------------------------------------------
            if (perip_wen) begin
                if (perip_addr == LED_ADDR) begin
                    $display("[MMIO] cycle=%0d PC=0x%08h  LED write: 0x%08h",
                             cycle_count, cpu_pc, perip_wdata);
                    led_value <= perip_wdata;
                    seen_led_write <= 1;
                end
                if (perip_addr == SEG_ADDR) begin
                    $display("[MMIO] cycle=%0d PC=0x%08h  SEG write: 0x%08h",
                             cycle_count, cpu_pc, perip_wdata);
                    seg_value <= perip_wdata;
                    seen_seg_write <= 1;
                end
                if (perip_addr == CNT_ADDR) begin
                    $display("[MMIO] cycle=%0d PC=0x%08h  CNT write: 0x%08h %s",
                             cycle_count, cpu_pc, perip_wdata,
                             (perip_wdata == 32'h8000_0000) ? "(START)" :
                             (perip_wdata == 32'hFFFF_FFFF) ? "(STOP)" : "");
                end
            end

            // -------------------------------------------------------
            // DRAM pass-count change detection
            // -------------------------------------------------------
            if (dram_pass_count != last_pass_count) begin
                $display("[PASS_CNT] cycle=%0d  pass_count: %0d -> %0d  PC=0x%08h",
                         cycle_count, last_pass_count, dram_pass_count, cpu_pc);
                last_pass_count <= dram_pass_count;
            end

            // -------------------------------------------------------
            // Self-loop detection (period-3 for 5-stage pipeline)
            // -------------------------------------------------------
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
                $display("  DRAM pass_count = %0d", dram_pass_count);
                $display("  LED = 0x%08h  SEG = 0x%08h", led_value, seg_value);
                dump_registers;
                $display("  RESULT: PASS");
                $finish;
            end

            if (cycle_count >= `MAX_CYCLES) begin
                $display("");
                $display("=== TEST: %s ===", `TEST_NAME);
                $display("  TIMEOUT after %0d cycles, PC = 0x%08h", cycle_count, cpu_pc);
                $display("  DRAM pass_count = %0d", dram_pass_count);
                $display("  LED = 0x%08h  SEG = 0x%08h", led_value, seg_value);
                dump_registers;
                $display("  RESULT: FAIL (timeout)");
                $finish;
            end
        end
    end

    task dump_registers;
        integer k;
        reg [31:0] rv;
        begin
            $display("  Register file:");
            for (k = 0; k < 32; k = k + 1) begin
                if (k == 0) rv = 32'h0;
                else rv = u_soc.u_cpu.u_stage_id.regfile[k];
                if (rv !== 32'h0)
                    $display("    x%0d = 0x%08h", k, rv);
            end
        end
    endtask

endmodule
