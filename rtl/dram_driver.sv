`timescale 1ns/1ps
// DRAM driver: wraps the Vivado-generated DRAM IP.
// Handles read-modify-write for sub-word (byte, halfword) stores.
// The Vivado DRAM IP has a single-bit write enable, so sub-word writes
// require reading the current word, merging the new bytes, then writing back.
//
// DRAM IP ports assumed:
//   DRAM(.clk(clk), .a(addr[13:0]), .d(wdata[31:0]), .we(wen), .spo(rdata[31:0]))
// spo is the asynchronous (combinatorial) output — no output register.
module dram_driver (
    input  wire        clk,
    // From perip_bridge (18 low bits of the peripheral address)
    input  wire [17:0] perip_addr,
    input  wire [31:0] perip_wdata,
    input  wire [1:0]  perip_mask,   // 00=byte, 01=halfword, 10=word
    input  wire        dram_wen,
    output wire [31:0] perip_rdata
);
    wire [13:0] word_addr = perip_addr[15:2];  // 14-bit word address
    wire [1:0]  offset    = perip_addr[1:0];   // byte offset within word

    wire [31:0] raw;   // current word from DRAM (combinatorial)
    reg  [31:0] wdata; // merged write word

    DRAM Mem_DRAM (
        .clk (clk),
        .a   (word_addr),
        .spo (raw),
        .we  (dram_wen),
        .d   (wdata)
    );

    // Read path: extract byte / halfword into lowest bits (zero-extended).
    // The CPU sign-extends in stage_mem based on funct3.
    reg [31:0] rout;
    always @(*) begin
        rout = 32'b0;
        case (perip_mask)
            2'b00: // byte
                case (offset)
                    2'b00: rout = {24'b0, raw[7:0]};
                    2'b01: rout = {24'b0, raw[15:8]};
                    2'b10: rout = {24'b0, raw[23:16]};
                    2'b11: rout = {24'b0, raw[31:24]};
                endcase
            2'b01: // halfword
                case (offset[1])
                    1'b0: rout = {16'b0, raw[15:0]};
                    1'b1: rout = {16'b0, raw[31:16]};
                endcase
            default: rout = raw; // word
        endcase
    end
    assign perip_rdata = rout;

    // Write path: merge new bytes into the current word.
    // perip_wdata always carries the value in the lowest bits.
    always @(*) begin
        wdata = perip_wdata; // default (word write)
        case (perip_mask)
            2'b00: // SB
                case (offset)
                    2'b00: wdata = {raw[31:8],  perip_wdata[7:0]};
                    2'b01: wdata = {raw[31:16], perip_wdata[7:0], raw[7:0]};
                    2'b10: wdata = {raw[31:24], perip_wdata[7:0], raw[15:0]};
                    2'b11: wdata = {perip_wdata[7:0], raw[23:0]};
                endcase
            2'b01: // SH
                case (offset[1])
                    1'b0: wdata = {raw[31:16], perip_wdata[15:0]};
                    1'b1: wdata = {perip_wdata[15:0], raw[15:0]};
                endcase
            default: wdata = perip_wdata; // SW
        endcase
    end

endmodule
