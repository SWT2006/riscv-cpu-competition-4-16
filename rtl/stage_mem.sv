`timescale 1ns/1ps
// MEM stage: drives the peripheral bus and sign-extends load data.
//
// The dram_driver (inside perip_bridge) handles read-modify-write for sub-word
// stores and byte/halfword selection for loads.  This stage simply passes the
// full byte address and unshifted rs2 data; the bridge does the rest.
module stage_mem (
    input  wire [31:0] exmem_alu_result,  // byte address
    input  wire [31:0] exmem_rs2_data,    // store data (unshifted)
    input  wire        exmem_mem_read,
    input  wire        exmem_mem_write,
    input  wire [2:0]  exmem_mem_funct3,
    // Peripheral bus (to/from perip_bridge)
    output wire [31:0] perip_addr,
    output wire        perip_wen,
    output wire [1:0]  perip_mask,        // 00=byte, 01=halfword, 10=word
    output wire [31:0] perip_wdata,
    input  wire [31:0] perip_rdata,
    // Load result (sign/zero-extended)
    output reg  [31:0] mem_read_data
);
    assign perip_addr  = exmem_alu_result;
    assign perip_wen   = exmem_mem_write;
    assign perip_mask  = exmem_mem_funct3[1:0];  // funct3[1:0]: 00=B,01=H,10=W
    assign perip_wdata = exmem_rs2_data;

    // dram_driver already extracts the byte/halfword into perip_rdata[7:0]/[15:0].
    // Apply sign extension here based on funct3.
    always @(*) begin
        if (exmem_mem_read) begin
            case (exmem_mem_funct3)
                3'b000: mem_read_data = {{24{perip_rdata[7]}},  perip_rdata[7:0]};   // LB
                3'b001: mem_read_data = {{16{perip_rdata[15]}}, perip_rdata[15:0]};  // LH
                3'b010: mem_read_data = perip_rdata;                                   // LW
                3'b100: mem_read_data = {24'b0, perip_rdata[7:0]};                    // LBU
                3'b101: mem_read_data = {16'b0, perip_rdata[15:0]};                   // LHU
                default: mem_read_data = perip_rdata;
            endcase
        end else begin
            mem_read_data = 32'b0;
        end
    end

endmodule
