`timescale 1ns/1ps
// Millisecond counter peripheral.
// Write 0x8000_0000 to start (resets ms count to 0 and begins counting).
// Write 0xFFFF_FFFF to stop (preserves final count).
// Read returns elapsed milliseconds.
// Assumes 50 MHz clock: 50000 cycles = 1 ms.
module counter (
    input  wire        clk,    // 50 MHz
    input  wire        rst,
    input  wire [31:0] perip_wdata,
    input  wire        cnt_wen,
    output wire [31:0] perip_rdata
);
    localparam CYCLES_PER_MS = 16'd49999;

    reg        running;
    reg [15:0] sub_cnt;   // cycle counter within 1 ms
    reg [31:0] ms_cnt;    // millisecond counter

    always @(posedge clk) begin
        if (rst) begin
            running <= 1'b0;
        end else if (cnt_wen && perip_wdata == 32'h8000_0000) begin
            running <= 1'b1;
        end else if (cnt_wen && perip_wdata == 32'hFFFF_FFFF) begin
            running <= 1'b0;
        end
    end

    always @(posedge clk) begin
        if (rst || (cnt_wen && perip_wdata == 32'h8000_0000)) begin
            sub_cnt <= 16'd0;
            ms_cnt  <= 32'd0;
        end else if (running) begin
            if (sub_cnt == CYCLES_PER_MS) begin
                sub_cnt <= 16'd0;
                ms_cnt  <= ms_cnt + 32'd1;
            end else begin
                sub_cnt <= sub_cnt + 16'd1;
            end
        end
    end

    assign perip_rdata = ms_cnt;

endmodule
