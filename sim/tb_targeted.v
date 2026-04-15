// tb_targeted.v — Targeted testbench monitoring compare/sort FAIL path
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

module tb_targeted;

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
    reg [31:0] prev_pc      = 32'hFFFF_FFFF;
    reg [31:0] prev2_pc     = 32'hFFFF_FFFF;
    reg [31:0] prev3_pc     = 32'hFFFF_FFFF;

    wire [31:0] cpu_pc     = u_soc.u_cpu.u_if.pc_out;
    wire [31:0] perip_addr = u_soc.u_cpu.perip_addr;
    wire        perip_wen  = u_soc.u_cpu.perip_wen;
    wire [31:0] perip_wdata= u_soc.u_cpu.perip_wdata;
    wire [31:0] perip_rdata= u_soc.u_cpu.perip_rdata;
    wire        stall      = u_soc.u_cpu.stall;
    wire        flush      = u_soc.u_cpu.flush;
    wire        wb_wen     = u_soc.u_cpu.memwb_reg_write;
    wire [4:0]  wb_rd      = u_soc.u_cpu.memwb_rd_addr;
    wire [31:0] wb_data    = u_soc.u_cpu.wb_write_data;

    // Key MMIO addresses
    localparam LED_ADDR = 32'h8020_0040;
    localparam SEG_ADDR = 32'h8020_0020;
    localparam CNT_ADDR = 32'h8020_0050;

    // Key program addresses
    localparam PC_FAIL_HANDLER = 32'h8000_0F30;  // fail_indicator function
    localparam PC_PASS_HANDLER = 32'h8000_0F70;  // pass_indicator function
    localparam PC_COMPARE_FAIL = 32'h8000_0898;  // compare returns 0 (mismatch)
    localparam PC_SELFLOOP     = 32'h8000_0010;  // final self-loop (end of program)
    localparam PC_POST_MAIN    = 32'h8000_0FB0;  // post_main entry
    localparam PC_COMPARE_ENTRY = 32'h8000_07FC; // compare function entry
    localparam PC_COMPARE_CHECK = 32'h8000_0894; // beq a3,a5 in compare (mismatch detect)

    wire [31:0] dram_pass_count = u_soc.dmem[0];
    reg [31:0] last_pass_count = 0;
    reg compare_call_count = 0;

    // Track entry to important functions
    reg in_post_main = 0;
    reg [31:0] post_main_iter = 0;

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

            // MMIO write monitoring
            if (perip_wen) begin
                if (perip_addr == LED_ADDR)
                    $display("[LED] cycle=%0d PC=0x%08h  LED_WRITE: 0x%08h", cycle_count, cpu_pc, perip_wdata);
                if (perip_addr == SEG_ADDR)
                    $display("[SEG] cycle=%0d PC=0x%08h  SEG_WRITE: 0x%08h", cycle_count, cpu_pc, perip_wdata);
                if (perip_addr == CNT_ADDR)
                    $display("[CNT] cycle=%0d PC=0x%08h  CNT_WRITE: 0x%08h %s", cycle_count, cpu_pc, perip_wdata,
                             (perip_wdata == 32'h8000_0000) ? "(START)" :
                             (perip_wdata == 32'hFFFF_FFFF) ? "(STOP)" : "");
            end

            // Pass count tracking
            if (dram_pass_count != last_pass_count) begin
                $display("[PASS] cycle=%0d  count: %0d -> %0d", cycle_count, last_pass_count, dram_pass_count);
                last_pass_count <= dram_pass_count;
            end

            // Key PC monitoring
            if (cpu_pc == PC_POST_MAIN)
                $display("[FUNC] cycle=%0d  === ENTERING post_main ===", cycle_count);
            if (cpu_pc == PC_FAIL_HANDLER)
                $display("[FUNC] cycle=%0d  !!! ENTERING FAIL handler !!!", cycle_count);
            if (cpu_pc == PC_PASS_HANDLER)
                $display("[FUNC] cycle=%0d  === ENTERING PASS handler ===", cycle_count);
            if (cpu_pc == PC_COMPARE_ENTRY)
                $display("[CMP]  cycle=%0d  compare() called", cycle_count);

            // At the compare mismatch point (beq a3,a5):
            // a3 is in pipeline — we can check EX stage values
            // Actually monitor when compare returns 0 at 0x80000898
            if (cpu_pc == 32'h8000_0898)
                $display("[CMP]  cycle=%0d  *** COMPARE MISMATCH DETECTED ***", cycle_count);

            // Self-loop detection
            if (cpu_pc == PC_SELFLOOP && prev_pc != PC_SELFLOOP)
                $display("[END]  cycle=%0d  Reached self-loop at 0x80000010", cycle_count);

            // Self-loop detection (period-3)
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
                $display("  Terminated: self-loop at PC = 0x%08h after %0d cycles", cpu_pc, cycle_count);
                $display("  DRAM pass_count = %0d", dram_pass_count);
                dump_registers;
                if (cpu_pc == PC_SELFLOOP)
                    $display("  RESULT: COMPLETED (self-loop at expected end address)");
                else
                    $display("  RESULT: STUCK (self-loop at unexpected address)");
                $finish;
            end

            if (cycle_count >= `MAX_CYCLES) begin
                $display("");
                $display("=== TEST: %s ===", `TEST_NAME);
                $display("  TIMEOUT after %0d cycles, PC = 0x%08h", cycle_count, cpu_pc);
                $display("  DRAM pass_count = %0d", dram_pass_count);
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
