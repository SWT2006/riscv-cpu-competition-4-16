`timescale 1ns/1ps
// ID/EX pipeline register.
// flush: insert NOP bubble (branch taken OR load-use stall).
// hold:  keep current values (multi-cycle EX operation, e.g. divide).
// Priority: reset > flush > hold > normal latch.
// All control bits — including ecall — are explicitly zeroed on flush.
module pipe_idex (
    input  wire        clk,
    input  wire        cpu_rst,
    input  wire        flush,   // stall | branch_taken
    input  wire        hold,    // div_stall — keep current contents
    // Inputs from ID
    input  wire [31:0] id_pc,
    input  wire [31:0] id_pc_plus4,
    input  wire [31:0] id_rs1_data,
    input  wire [31:0] id_rs2_data,
    input  wire [31:0] id_imm,
    input  wire [4:0]  id_rs1_addr,
    input  wire [4:0]  id_rs2_addr,
    input  wire [4:0]  id_rd_addr,
    input  wire [4:0]  id_alu_op,
    input  wire        id_alu_src,
    input  wire        id_mem_read,
    input  wire        id_mem_write,
    input  wire [2:0]  id_mem_funct3,
    input  wire        id_reg_write,
    input  wire [1:0]  id_wb_sel,
    input  wire        id_branch,
    input  wire        id_jal,
    input  wire        id_jalr,
    input  wire        id_auipc,
    input  wire [2:0]  id_funct3,
    input  wire        id_ecall,
    input  wire        id_mret,
    input  wire        id_csr_op,
    input  wire [31:0] id_csr_rdata,
    input  wire [11:0] id_csr_addr,
    // Outputs to EX
    output reg  [31:0] idex_pc,
    output reg  [31:0] idex_pc_plus4,
    output reg  [31:0] idex_rs1_data,
    output reg  [31:0] idex_rs2_data,
    output reg  [31:0] idex_imm,
    output reg  [4:0]  idex_rs1_addr,
    output reg  [4:0]  idex_rs2_addr,
    output reg  [4:0]  idex_rd_addr,
    output reg  [4:0]  idex_alu_op,
    output reg         idex_alu_src,
    output reg         idex_mem_read,
    output reg         idex_mem_write,
    output reg  [2:0]  idex_mem_funct3,
    output reg         idex_reg_write,
    output reg  [1:0]  idex_wb_sel,
    output reg         idex_branch,
    output reg         idex_jal,
    output reg         idex_jalr,
    output reg         idex_auipc,
    output reg  [2:0]  idex_funct3,
    output reg         idex_ecall,
    output reg         idex_mret,
    output reg         idex_csr_op,
    output reg  [31:0] idex_csr_rdata,
    output reg  [11:0] idex_csr_addr
);
    always @(posedge clk) begin
        if (cpu_rst || flush) begin
            idex_pc         <= 32'b0;
            idex_pc_plus4   <= 32'b0;
            idex_rs1_data   <= 32'b0;
            idex_rs2_data   <= 32'b0;
            idex_imm        <= 32'b0;
            idex_rs1_addr   <= 5'b0;
            idex_rs2_addr   <= 5'b0;
            idex_rd_addr    <= 5'b0;
            idex_alu_op     <= 5'b0;
            idex_alu_src    <= 1'b0;
            idex_mem_read   <= 1'b0;
            idex_mem_write  <= 1'b0;
            idex_mem_funct3 <= 3'b0;
            idex_reg_write  <= 1'b0;
            idex_wb_sel     <= 2'b0;
            idex_branch     <= 1'b0;
            idex_jal        <= 1'b0;
            idex_jalr       <= 1'b0;
            idex_auipc      <= 1'b0;
            idex_funct3     <= 3'b0;
            idex_ecall      <= 1'b0;  // must be explicitly cleared
            idex_mret       <= 1'b0;
            idex_csr_op     <= 1'b0;
            idex_csr_rdata  <= 32'b0;
            idex_csr_addr   <= 12'b0;
        end else if (!hold) begin
            idex_pc         <= id_pc;
            idex_pc_plus4   <= id_pc_plus4;
            idex_rs1_data   <= id_rs1_data;
            idex_rs2_data   <= id_rs2_data;
            idex_imm        <= id_imm;
            idex_rs1_addr   <= id_rs1_addr;
            idex_rs2_addr   <= id_rs2_addr;
            idex_rd_addr    <= id_rd_addr;
            idex_alu_op     <= id_alu_op;
            idex_alu_src    <= id_alu_src;
            idex_mem_read   <= id_mem_read;
            idex_mem_write  <= id_mem_write;
            idex_mem_funct3 <= id_mem_funct3;
            idex_reg_write  <= id_reg_write;
            idex_wb_sel     <= id_wb_sel;
            idex_branch     <= id_branch;
            idex_jal        <= id_jal;
            idex_jalr       <= id_jalr;
            idex_auipc      <= id_auipc;
            idex_funct3     <= id_funct3;
            idex_ecall      <= id_ecall;
            idex_mret       <= id_mret;
            idex_csr_op     <= id_csr_op;
            idex_csr_rdata  <= id_csr_rdata;
            idex_csr_addr   <= id_csr_addr;
        end
        // hold && !cpu_rst && !flush: retain current values (div stall)
    end
endmodule
