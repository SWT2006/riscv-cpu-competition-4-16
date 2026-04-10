`timescale 1ns/1ps
// WB stage: select write-back data source.
module stage_wb (
    input  wire [31:0] memwb_alu_result,
    input  wire [31:0] memwb_mem_data,
    input  wire [31:0] memwb_pc_plus4,
    input  wire [1:0]  memwb_wb_sel,    // 00=ALU, 01=MEM, 10=PC+4
    output reg  [31:0] wb_write_data
);
    always @(*) begin
        case (memwb_wb_sel)
            2'b01:   wb_write_data = memwb_mem_data;
            2'b10:   wb_write_data = memwb_pc_plus4;
            default: wb_write_data = memwb_alu_result;
        endcase
    end
endmodule
