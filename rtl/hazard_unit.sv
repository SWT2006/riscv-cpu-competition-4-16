`timescale 1ns/1ps
// Load-use hazard detection.
// When a load is in EX and the immediately following instruction reads its result,
// stall the IF and ID stages for one cycle and inject a NOP bubble into EX.
module hazard_unit (
    input  wire        idex_mem_read,
    input  wire [4:0]  idex_rd_addr,
    input  wire [4:0]  ifid_rs1_addr,
    input  wire [4:0]  ifid_rs2_addr,
    output wire        stall
);
    assign stall = idex_mem_read
                && (idex_rd_addr != 5'b0)
                && ((idex_rd_addr == ifid_rs1_addr) || (idex_rd_addr == ifid_rs2_addr));
endmodule
