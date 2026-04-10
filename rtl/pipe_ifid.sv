`timescale 1ns/1ps
// IF/ID pipeline register.
// stall: hold outputs (load-use hazard, PC is also stalled)
// flush: inject NOP (branch taken)
module pipe_ifid (
    input  wire        clk,
    input  wire        cpu_rst,
    input  wire        stall,
    input  wire        flush,
    input  wire [31:0] if_pc,
    input  wire [31:0] if_pc_plus4,
    input  wire [31:0] if_instruction,
    output reg  [31:0] ifid_pc,
    output reg  [31:0] ifid_pc_plus4,
    output reg  [31:0] ifid_instruction
);
    always @(posedge clk) begin
        if (cpu_rst || flush) begin
            ifid_pc          <= 32'b0;
            ifid_pc_plus4    <= 32'b0;
            ifid_instruction <= 32'h0000_0013; // NOP = ADDI x0,x0,0
        end else if (!stall) begin
            ifid_pc          <= if_pc;
            ifid_pc_plus4    <= if_pc_plus4;
            ifid_instruction <= if_instruction;
        end
        // stall && !flush: outputs hold (no else branch needed)
    end
endmodule
