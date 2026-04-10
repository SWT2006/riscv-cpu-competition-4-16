`timescale 1ns/1ps
// ID stage: register file, immediate generation, and instruction decode.
module stage_id (
    input  wire        clk,
    input  wire        cpu_rst,
    input  wire [31:0] instruction,
    // Write-back port (from WB stage)
    input  wire        wb_reg_write,
    input  wire [4:0]  wb_rd_addr,
    input  wire [31:0] wb_write_data,
    // CSR read (combinatorial, from csr_unit)
    input  wire [31:0] csr_rdata,
    // Outputs
    output wire [31:0] rs1_data,
    output wire [31:0] rs2_data,
    output wire [31:0] imm,
    output wire [4:0]  rs1_addr,
    output wire [4:0]  rs2_addr,
    output wire [4:0]  rd_addr,
    output wire [11:0] csr_addr,      // instruction[31:20]
    output wire [31:0] csr_rdata_out, // pass-through for pipe_idex
    output wire [4:0]  alu_op,
    output wire        alu_src,
    output wire        mem_read,
    output wire        mem_write,
    output wire [2:0]  mem_funct3,
    output wire        reg_write,
    output wire [1:0]  wb_sel,
    output wire        branch,
    output wire        jal,
    output wire        jalr,
    output wire        lui,
    output wire        auipc,
    output wire        ecall,
    output wire        mret,
    output wire        csr_op
);
    wire [6:0] opcode  = instruction[6:0];
    wire [2:0] f3      = instruction[14:12];
    wire [6:0] funct7  = instruction[31:25];
    wire [11:0] funct12 = instruction[31:20];

    assign rs1_addr      = instruction[19:15];
    assign rs2_addr      = instruction[24:20];
    assign rd_addr       = instruction[11:7];
    assign mem_funct3    = f3;
    assign csr_addr      = funct12;
    assign csr_rdata_out = csr_rdata;

    // ---------------------------------------------------------------
    // Register file (x0 hardwired to 0)
    // ---------------------------------------------------------------
    reg [31:0] regfile [1:31];
    integer i;

    always @(posedge clk) begin
        if (cpu_rst) begin
            for (i = 1; i < 32; i = i + 1)
                regfile[i] <= 32'b0;
        end else if (wb_reg_write && wb_rd_addr != 5'b0) begin
            regfile[wb_rd_addr] <= wb_write_data;
        end
    end

    // Read ports: WB-to-ID bypass for same-cycle write
    wire [31:0] rf_rs1 = (rs1_addr == 5'b0) ? 32'b0 :
                         (wb_reg_write && wb_rd_addr == rs1_addr) ? wb_write_data :
                         regfile[rs1_addr];
    wire [31:0] rf_rs2 = (rs2_addr == 5'b0) ? 32'b0 :
                         (wb_reg_write && wb_rd_addr == rs2_addr) ? wb_write_data :
                         regfile[rs2_addr];

    assign rs1_data = rf_rs1;
    assign rs2_data = rf_rs2;

    // ---------------------------------------------------------------
    // Immediate generator
    // ---------------------------------------------------------------
    imm_gen u_imm_gen (
        .instruction (instruction),
        .imm         (imm)
    );

    // ---------------------------------------------------------------
    // Control unit — funct12 is passed so ECALL/EBREAK/MRET are distinct
    // ---------------------------------------------------------------
    control_unit u_ctrl (
        .opcode    (opcode),
        .funct3    (f3),
        .funct7    (funct7),
        .funct12   (funct12),
        .alu_op    (alu_op),
        .alu_src   (alu_src),
        .mem_read  (mem_read),
        .mem_write (mem_write),
        .reg_write (reg_write),
        .wb_sel    (wb_sel),
        .branch    (branch),
        .jal       (jal),
        .jalr      (jalr),
        .lui       (lui),
        .auipc     (auipc),
        .ecall     (ecall),
        .mret      (mret),
        .csr_op    (csr_op)
    );

endmodule
