// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_soc.h for the primary calling header

#include "Vsim_soc__pch.h"
#include "Vsim_soc___024root.h"

void Vsim_soc___024root___ico_sequent__TOP__0(Vsim_soc___024root* vlSelf);

void Vsim_soc___024root___eval_ico(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_ico\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vsim_soc___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsim_soc___024root___ico_sequent__TOP__0(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___ico_sequent__TOP__0\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_pc_plus4 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_pc_plus4;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_alu_result 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_alu_result;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_mem_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_mem_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_wb_sel 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_wb_sel;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__if_pc = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ifid_pc = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__ifid_pc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ifid_pc_plus4 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__ifid_pc_plus4;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_mem_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_mem_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_mem_funct3 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_mem_funct3;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_wb_sel 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_wb_sel;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_pc_plus4 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_pc_plus4;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_wb_sel 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_wb_sel;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__trial 
        = (0x1ffffffffULL & ((((QData)((IData)((0x7fffffffU 
                                                & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rem))) 
                               << 1U) | (QData)((IData)(
                                                        (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo 
                                                         >> 0x1fU)))) 
                             - (QData)((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__div_reg))));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_plus4 
        = ((IData)(4U) + vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_pc_plus4 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_pc_plus4;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__busy 
        = (1U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__state));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_mem_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_mem_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_mem_read 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_mem_read;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_rs2_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_rs2_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__csr_mtvec = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mtvec;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__csr_mepc = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mepc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__irom_word_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_branch 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_branch;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_jal = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_jal;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__r_out 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__sign_r)
            ? ((IData)(1U) + (~ vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rem))
            : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rem);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__q_out 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__sign_q)
            ? ((IData)(1U) + (~ vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo))
            : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_mem_read 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_mem_read;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rd_addr;
    vlSelfRef.sim_soc__DOT__clk = vlSelfRef.clk;
    vlSelfRef.sim_soc__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_alu_src 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_alu_src;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_auipc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_auipc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__done 
        = (2U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__state));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_csr_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_csr_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_jalr = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_jalr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_mret = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_mret;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_csr_op 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_csr_op;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_csr_rdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_csr_rdata;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_ecall 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_ecall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_mem_funct3 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_mem_funct3;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_pc = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_pc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_funct3 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_funct3;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_imm = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_imm;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rs2_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rs2_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rs2_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rs2_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_alu_result 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_alu_result;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rs1_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rs1_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rs1_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rs1_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_alu_op 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_alu_op;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_fwd_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_fwd_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_write_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_write_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ifid_instruction 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__ifid_instruction;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__if_pc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__if_pc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_pc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ifid_pc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_pc_plus4 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ifid_pc_plus4;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_mem_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_mem_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_mem_funct3 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_mem_funct3;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_wb_sel 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_wb_sel;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_pc_plus4 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_pc_plus4;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_wb_sel 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_wb_sel;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__can_sub 
        = (1U & (~ (IData)((vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__trial 
                            >> 0x20U))));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__if_pc_plus4 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_plus4;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_pc_plus4 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_pc_plus4;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_pc_plus4 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_pc_plus4;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_busy 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__busy;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_mem_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_read 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_mem_read;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_rs2_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_rs2_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_mtvec 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__csr_mtvec;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_mepc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__csr_mepc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__irom_addr = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__irom_word_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_branch 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_branch;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_jal 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_jal;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__result 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__is_rem)
            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__r_out
            : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__q_out);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_mem_read 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_mem_read;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__idex_mem_read 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_mem_read;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__idex_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__cpu_clk = vlSelfRef.sim_soc__DOT__clk;
    vlSelfRef.sim_soc__DOT__cpu_rst = (1U & (~ (IData)(vlSelfRef.sim_soc__DOT__rst_n)));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_src 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_alu_src;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_auipc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_auipc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_done 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__done;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_csr_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_jalr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_jalr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_mret 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_mret;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_op 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_csr_op;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_rdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_csr_rdata;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_ecall 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_ecall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_funct3 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_mem_funct3;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_pc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_pc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_funct3 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_funct3;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_imm 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_imm;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_rs2_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rs2_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_rs2_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rs2_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__idex_rs2_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rs2_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_alu_result 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_alu_result;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_alu_result 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_alu_result;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_rs1_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rs1_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_rs1_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rs1_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__idex_rs1_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rs1_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_alu_op;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__exmem_fwd_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_fwd_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__exmem_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__exmem_reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__wb_write_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_write_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__memwb_reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__memwb_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_funct3 
        = (7U & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__ifid_instruction 
                 >> 0xcU));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__ifid_rs1_addr 
        = (0x1fU & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__ifid_instruction 
                    >> 0xfU));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__ifid_rs2_addr 
        = (0x1fU & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__ifid_instruction 
                    >> 0x14U));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_raddr 
        = (vlSelfRef.sim_soc__DOT__u_cpu__DOT__ifid_instruction 
           >> 0x14U);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__instruction 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ifid_instruction;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__if_pc_plus4 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__if_pc_plus4;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_wen 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_wdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_rs2_data;
    vlSelfRef.sim_soc__DOT__irom_addr = vlSelfRef.sim_soc__DOT__u_cpu__DOT__irom_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_result 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__result;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__clk 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__cpu_clk;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__clk 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__cpu_clk;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__clk 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__cpu_clk;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__clk 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__cpu_clk;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__clk 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__cpu_clk;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__clk 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__cpu_clk;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__clk 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__cpu_clk;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__clk 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__cpu_clk;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__cpu_rst = vlSelfRef.sim_soc__DOT__cpu_rst;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__trap_mcause 
        = ((1U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_addr))
            ? 3U : 0xbU);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_waddr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wen 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_op;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__trap_valid 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_ecall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_mask 
        = (3U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_funct3));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__trap_epc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_pc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__pc_branch 
        = (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_imm 
           + vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_pc);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_alu_result;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__zimm 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_rs1_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_op_signed 
        = ((0xfU == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op)) 
           | (0x11U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op)));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_a_sign 
        = (0xeU != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_b_sign 
        = ((0xbU == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op)) 
           | (0xcU == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op)));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_op_rem 
        = ((0x11U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op)) 
           | (0x12U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op)));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_write_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__wb_write_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__wb_write_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__wb_write_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__forward_b 
        = ((((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__exmem_reg_write) 
             & (0U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__exmem_rd_addr))) 
            & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__exmem_rd_addr) 
               == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__idex_rs2_addr)))
            ? 2U : ((((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__memwb_reg_write) 
                      & (0U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__memwb_rd_addr))) 
                     & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__memwb_rd_addr) 
                        == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__idex_rs2_addr)))
                     ? 1U : 0U));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__forward_a 
        = ((((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__exmem_reg_write) 
             & (0U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__exmem_rd_addr))) 
            & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__exmem_rd_addr) 
               == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__idex_rs1_addr)))
            ? 2U : ((((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__memwb_reg_write) 
                      & (0U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__memwb_rd_addr))) 
                     & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__memwb_rd_addr) 
                        == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__idex_rs1_addr)))
                     ? 1U : 0U));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__stall 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__idex_mem_read) 
           & ((0U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__idex_rd_addr)) 
              & (((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__idex_rd_addr) 
                  == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__ifid_rs1_addr)) 
                 | ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__idex_rd_addr) 
                    == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__ifid_rs2_addr)))));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_rdata 
        = ((0x300U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_raddr))
            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mstatus
            : ((0x305U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_raddr))
                ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mtvec
                : ((0x340U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_raddr))
                    ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mscratch
                    : ((0x341U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_raddr))
                        ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mepc
                        : ((0x342U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_raddr))
                            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mcause
                            : ((0x343U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_raddr))
                                ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mtval
                                : 0U))))));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rd_addr 
        = (0x1fU & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__instruction 
                    >> 7U));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__funct7 
        = (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__instruction 
           >> 0x19U);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs1_addr 
        = (0x1fU & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__instruction 
                    >> 0xfU));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs2_addr 
        = (0x1fU & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__instruction 
                    >> 0x14U));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__instruction;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__funct12 
        = (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__instruction 
           >> 0x14U);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__f3 
        = (7U & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__instruction 
                 >> 0xcU));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__opcode 
        = (0x7fU & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__instruction);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__perip_wen = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_wen;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__perip_wdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_wdata;
    vlSelfRef.sim_soc__DOT__irom_data = vlSelfRef.sim_soc__DOT__imem
        [(0xfffU & (vlSelfRef.sim_soc__DOT__irom_addr 
                    >> 2U))];
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__clk 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__clk;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__cpu_rst 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__cpu_rst;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__cpu_rst 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__cpu_rst;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__cpu_rst 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__cpu_rst;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__cpu_rst 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__cpu_rst;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__cpu_rst 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__cpu_rst;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__cpu_rst 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__cpu_rst;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__cpu_rst 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__cpu_rst;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__cpu_rst 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__cpu_rst;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_trap_mcause 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__trap_mcause;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_csr_waddr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_waddr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_csr_wen 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wen;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_trap_valid 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__trap_valid;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__perip_mask 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_mask;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_trap_epc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__trap_epc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__perip_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__op_signed 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_op_signed;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__is_mul_op 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_b_sign) 
           | ((0xdU == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op)) 
              | (0xeU == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__op_rem 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_op_rem;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__is_div_op 
        = ((0xfU == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op)) 
           | ((0x10U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op)) 
              | (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_op_rem)));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__forward_b = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__forward_b;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__forward_a = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__forward_a;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__hz_stall = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__stall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_csr_rdata_raw 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_rdata;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct7 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__funct7;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_rs1_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs1_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rf_rs1 
        = ((0U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs1_addr))
            ? 0U : (((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_reg_write) 
                     & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs1_addr) 
                        == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_rd_addr)))
                     ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_write_data
                     : ((0x1eU >= (0x1fU & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs1_addr) 
                                            - (IData)(1U))))
                         ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                        [(0x1fU & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs1_addr) 
                                   - (IData)(1U)))]
                         : 0U)));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_rs2_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs2_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rf_rs2 
        = ((0U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs2_addr))
            ? 0U : (((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_reg_write) 
                     & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs2_addr) 
                        == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_rd_addr)))
                     ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_write_data
                     : ((0x1eU >= (0x1fU & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs2_addr) 
                                            - (IData)(1U))))
                         ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                        [(0x1fU & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs2_addr) 
                                   - (IData)(1U)))]
                         : 0U)));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode 
        = (0x7fU & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__csr_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__funct12;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct12 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__funct12;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__mem_funct3 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__f3;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__f3;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__opcode;
    vlSelfRef.sim_soc__DOT__perip_wen = vlSelfRef.sim_soc__DOT__u_cpu__DOT__perip_wen;
    vlSelfRef.sim_soc__DOT__perip_wdata = vlSelfRef.sim_soc__DOT__u_cpu__DOT__perip_wdata;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__irom_data = vlSelfRef.sim_soc__DOT__irom_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rst 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__cpu_rst;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__trap_mcause 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_trap_mcause;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_waddr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_csr_waddr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_wen 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_csr_wen;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__trap_valid 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_trap_valid;
    vlSelfRef.sim_soc__DOT__perip_mask = vlSelfRef.sim_soc__DOT__u_cpu__DOT__perip_mask;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__trap_epc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_trap_epc;
    vlSelfRef.sim_soc__DOT__perip_addr = vlSelfRef.sim_soc__DOT__u_cpu__DOT__perip_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_stall 
        = ((~ (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_valid)) 
           & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__is_mul_op));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_start 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__is_div_op) 
           & ((~ (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_busy)) 
              & (~ (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_done))));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_stall 
        = ((~ (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_done)) 
           & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__is_div_op));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__forward_b 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__forward_b;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__forward_a 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__forward_a;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_rs1_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_rs1_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs1_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rf_rs1;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_rs2_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_rs2_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs2_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rf_rs2;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__imm 
        = ((0x40U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
            ? ((0x20U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                ? ((0x10U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                    ? ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                        ? 0U : ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                 ? 0U : ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                          ? ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                              ? (((- (IData)(
                                                             (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                    >> 0x14U))
                                              : 0U)
                                          : 0U))) : 
                   ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                     ? ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                         ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                             ? ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                 ? ((((- (IData)((vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                  >> 0x1fU))) 
                                      << 0x15U) | (0x100000U 
                                                   & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                      >> 0xbU))) 
                                    | (((0xff000U & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction) 
                                        | (0x800U & 
                                           (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                            >> 9U))) 
                                       | (0x7feU & 
                                          (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                           >> 0x14U))))
                                 : 0U) : 0U) : 0U) : 
                    ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                      ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                          ? ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                              ? (((- (IData)((vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                              >> 0x14U))
                              : 0U) : 0U) : ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                               >> 0x1fU))) 
                                                   << 0xdU) 
                                                  | (((0x1000U 
                                                       & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                          >> 0x13U)) 
                                                      | (0x800U 
                                                         & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                            << 4U))) 
                                                     | ((0x7e0U 
                                                         & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                              >> 7U)))))
                                                  : 0U)
                                              : 0U))))
                : 0U) : ((0x20U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                          ? ((0x10U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction)
                                                   : 0U)
                                               : 0U)
                                           : 0U)) : 
                             ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                               ? 0U : ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                           >> 7U))))
                                                  : 0U)
                                                 : 0U))))
                          : ((0x10U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction)
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U)))
                              : ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                  ? ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                      ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                          ? ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                              ? 4U : 0U)
                                          : 0U) : 0U)
                                  : ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                      ? 0U : ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U))))));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_csr_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__csr_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_mem_funct3 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__mem_funct3;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__lui = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__auipc = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__jalr = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__jal = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__branch = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__wb_sel = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mem_write = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mem_read = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__lui = 1U;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mem_write = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__auipc = 1U;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mem_read = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_src = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__csr_op = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mret = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ecall = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op = 0U;
    if ((0x40U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__jalr = 1U;
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_src = 1U;
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op = 0U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op = 1U;
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__branch = 1U;
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                    if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__jal = 1U;
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__wb_sel = 2U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__wb_sel = 2U;
                        }
                    }
                }
            }
            if ((0x10U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                if ((0U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))) {
                                    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write = 1U;
                                    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__csr_op = 1U;
                                }
                                if ((0U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))) {
                                    if ((0U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct12))) {
                                        if ((1U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct12))) {
                                            if ((0x302U 
                                                 == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct12))) {
                                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mret = 1U;
                                            }
                                        }
                                    }
                                    if ((0U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct12))) {
                                        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ecall = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct12))) {
                                        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ecall = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                    if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__jal = 1U;
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__wb_sel = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_src = 1U;
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write = 1U;
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op = 0xaU;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write = 1U;
                            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op 
                                = ((1U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct7))
                                    ? ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                        ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                ? 0x12U
                                                : 0x11U)
                                            : ((1U 
                                                & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                ? 0x10U
                                                : 0xfU))
                                        : ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                ? 0xeU
                                                : 0xdU)
                                            : ((1U 
                                                & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                ? 0xcU
                                                : 0xbU)))
                                    : ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                        ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                ? 9U
                                                : 8U)
                                            : ((1U 
                                                & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                ? (
                                                   (0x20U 
                                                    & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct7))
                                                    ? 7U
                                                    : 6U)
                                                : 5U))
                                        : ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                ? 4U
                                                : 3U)
                                            : ((1U 
                                                & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                ? 2U
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct7))
                                                    ? 1U
                                                    : 0U)))));
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                                 >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_src = 1U;
                            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op = 0U;
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_src = 1U;
                            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write = 1U;
                            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_src = 1U;
                        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write = 1U;
                        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op 
                            = ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                    ? ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                        ? 9U : 8U) : 
                                   ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                     ? ((0x20U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct7))
                                         ? 7U : 6U)
                                     : 5U)) : ((2U 
                                                & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                    ? 4U
                                                    : 3U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                    ? 2U
                                                    : 0U)));
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_src = 1U;
                        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write = 1U;
                        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op = 0U;
                    }
                }
            }
        }
    }
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__irom_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__irom_data;
    vlSelfRef.sim_soc__DOT__dram_sel = ((0x80100000U 
                                         <= vlSelfRef.sim_soc__DOT__perip_addr) 
                                        & (0x80140000U 
                                           > vlSelfRef.sim_soc__DOT__perip_addr));
    vlSelfRef.sim_soc__DOT__dram_offset = (3U & vlSelfRef.sim_soc__DOT__perip_addr);
    vlSelfRef.sim_soc__DOT__dram_word_addr = (0xffffU 
                                              & (vlSelfRef.sim_soc__DOT__perip_addr 
                                                 >> 2U));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__mul_stall = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_stall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__start 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_start;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__div_stall = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_stall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b 
        = ((2U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__forward_b))
            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__exmem_fwd_data
            : ((1U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__forward_b))
                ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__wb_write_data
                : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_rs2_data));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a 
        = ((2U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__forward_a))
            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__exmem_fwd_data
            : ((1U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__forward_a))
                ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__wb_write_data
                : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_rs1_data));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_rs1_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs1_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_rs2_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs2_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__imm 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__imm;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_csr_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_csr_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_mem_funct3 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_mem_funct3;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__lui 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__lui;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__auipc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__auipc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__jalr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__jalr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__jal 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__jal;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__branch 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__branch;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_sel 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__wb_sel;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__mem_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mem_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__mem_read 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mem_read;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__alu_src 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_src;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__csr_op 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__csr_op;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__mret 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mret;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__ecall 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ecall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__alu_op 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__instruction 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__irom_data;
    vlSelfRef.sim_soc__DOT__dram_cur = vlSelfRef.sim_soc__DOT__dmem
        [vlSelfRef.sim_soc__DOT__dram_word_addr];
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_stall = 
        ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__div_stall) 
         | (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__mul_stall));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__rs2_data_fwd 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_src)
            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_imm
            : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__jalr_tgt 
        = (0xfffffffeU & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a 
                          + vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_imm));
    if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_funct3))) {
        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_funct3))) {
            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_funct3))) {
                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_cond 
                    = (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a 
                       >= vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b);
                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd 
                    = (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_rdata 
                       & (~ vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__zimm));
            } else {
                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_cond 
                    = (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a 
                       < vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b);
                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd 
                    = (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_rdata 
                       | vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__zimm);
            }
        } else if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_funct3))) {
            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_cond 
                = VL_GTES_III(32, vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a, vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b);
            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd 
                = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__zimm;
        } else {
            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_cond 
                = VL_LTS_III(32, vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a, vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b);
            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd 
                = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a;
        }
    } else {
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_cond 
            = ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_funct3) 
                         >> 1U))) && ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_funct3))
                                       ? (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a 
                                          != vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b)
                                       : (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a 
                                          == vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b)));
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd 
            = ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_funct3))
                ? ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_funct3))
                    ? (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_rdata 
                       & (~ vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a))
                    : (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_rdata 
                       | vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a))
                : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a);
    }
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_auipc)
            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_pc
            : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_rs1_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_rs1_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_rs2_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_rs2_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_imm = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__imm;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_auipc = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__auipc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_jalr = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__jalr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_jal = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__jal;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_branch = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__branch;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_wb_sel = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_sel;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_mem_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__mem_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_mem_read 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__mem_read;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_alu_src 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__alu_src;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_csr_op = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__csr_op;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_mret = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__mret;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_ecall = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__ecall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_alu_op = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__alu_op;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__if_instruction 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__instruction;
    vlSelfRef.sim_soc__DOT__dram_wdata = vlSelfRef.sim_soc__DOT__perip_wdata;
    if ((0U == (IData)(vlSelfRef.sim_soc__DOT__perip_mask))) {
        vlSelfRef.sim_soc__DOT__dram_wdata = ((2U & (IData)(vlSelfRef.sim_soc__DOT__dram_offset))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.sim_soc__DOT__dram_offset))
                                                   ? 
                                                  ((vlSelfRef.sim_soc__DOT__perip_wdata 
                                                    << 0x18U) 
                                                   | (0xffffffU 
                                                      & vlSelfRef.sim_soc__DOT__dram_cur))
                                                   : 
                                                  ((0xff000000U 
                                                    & vlSelfRef.sim_soc__DOT__dram_cur) 
                                                   | ((0xff0000U 
                                                       & (vlSelfRef.sim_soc__DOT__perip_wdata 
                                                          << 0x10U)) 
                                                      | (0xffffU 
                                                         & vlSelfRef.sim_soc__DOT__dram_cur))))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.sim_soc__DOT__dram_offset))
                                                   ? 
                                                  ((0xffff0000U 
                                                    & vlSelfRef.sim_soc__DOT__dram_cur) 
                                                   | ((0xff00U 
                                                       & (vlSelfRef.sim_soc__DOT__perip_wdata 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & vlSelfRef.sim_soc__DOT__dram_cur)))
                                                   : 
                                                  ((0xffffff00U 
                                                    & vlSelfRef.sim_soc__DOT__dram_cur) 
                                                   | (0xffU 
                                                      & vlSelfRef.sim_soc__DOT__perip_wdata))));
    } else if ((1U == (IData)(vlSelfRef.sim_soc__DOT__perip_mask))) {
        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__dram_offset))) {
            if ((2U & (IData)(vlSelfRef.sim_soc__DOT__dram_offset))) {
                vlSelfRef.sim_soc__DOT__dram_wdata 
                    = ((vlSelfRef.sim_soc__DOT__perip_wdata 
                        << 0x10U) | (0xffffU & vlSelfRef.sim_soc__DOT__dram_cur));
            }
        } else {
            vlSelfRef.sim_soc__DOT__dram_wdata = ((0xffff0000U 
                                                   & vlSelfRef.sim_soc__DOT__dram_cur) 
                                                  | (0xffffU 
                                                     & vlSelfRef.sim_soc__DOT__perip_wdata));
        }
    } else {
        vlSelfRef.sim_soc__DOT__dram_wdata = vlSelfRef.sim_soc__DOT__perip_wdata;
    }
    vlSelfRef.sim_soc__DOT__dram_rdata = 0U;
    if (vlSelfRef.sim_soc__DOT__dram_sel) {
        if ((0U == (IData)(vlSelfRef.sim_soc__DOT__perip_mask))) {
            vlSelfRef.sim_soc__DOT__dram_rdata = ((2U 
                                                   & (IData)(vlSelfRef.sim_soc__DOT__dram_offset))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.sim_soc__DOT__dram_offset))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.sim_soc__DOT__dram_cur, 0x18U)
                                                    : 
                                                   (0xffU 
                                                    & (vlSelfRef.sim_soc__DOT__dram_cur 
                                                       >> 0x10U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.sim_soc__DOT__dram_offset))
                                                    ? 
                                                   (0xffU 
                                                    & (vlSelfRef.sim_soc__DOT__dram_cur 
                                                       >> 8U))
                                                    : 
                                                   (0xffU 
                                                    & vlSelfRef.sim_soc__DOT__dram_cur)));
        } else if ((1U == (IData)(vlSelfRef.sim_soc__DOT__perip_mask))) {
            if ((2U & (IData)(vlSelfRef.sim_soc__DOT__dram_offset))) {
                if ((2U & (IData)(vlSelfRef.sim_soc__DOT__dram_offset))) {
                    vlSelfRef.sim_soc__DOT__dram_rdata 
                        = VL_SHIFTR_III(32,32,32, vlSelfRef.sim_soc__DOT__dram_cur, 0x10U);
                }
            } else {
                vlSelfRef.sim_soc__DOT__dram_rdata 
                    = (0xffffU & vlSelfRef.sim_soc__DOT__dram_cur);
            }
        } else {
            vlSelfRef.sim_soc__DOT__dram_rdata = vlSelfRef.sim_soc__DOT__dram_cur;
        }
    }
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__hold 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_stall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__flush 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_stall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__pipeline_stall 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_stall) 
           | (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__hz_stall));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_rs2_data_fwd 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__rs2_data_fwd;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__divisor 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_op_b 
        = (((QData)((IData)(((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_b_sign) 
                             & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b 
                                >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_target 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_mret)
            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_mepc
            : ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_ecall)
                ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_mtvec
                : ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_jalr)
                    ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__jalr_tgt
                    : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__pc_branch)));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_taken 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_jal) 
           | ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_jalr) 
              | (((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_cond) 
                  & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_branch)) 
                 | ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_ecall) 
                    | (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_mret)))));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__dividend 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_op_a 
        = (((QData)((IData)(((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_a_sign) 
                             & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                                >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a)));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_out 
        = ((0x10U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
            ? ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                ? 0U : ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                         ? 0U : ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                                  ? ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                                      ? 0U : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_result)
                                  : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_result)))
            : ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                ? ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                    ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                        ? ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_result
                            : (IData)((vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_result_r 
                                       >> 0x20U))) : 
                       ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                         ? (IData)((vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_result_r 
                                    >> 0x20U)) : (IData)(
                                                         (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_result_r 
                                                          >> 0x20U))))
                    : ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                        ? ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                            ? (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_result_r)
                            : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                        : ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                            ? (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                               & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                            : (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                               | vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b))))
                : ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                    ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                        ? ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                            ? VL_SHIFTRS_III(32,32,5, vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a, 
                                             (0x1fU 
                                              & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b))
                            : (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                               >> (0x1fU & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)))
                        : ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                            ? (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                               ^ vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                            : ((vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                                < vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                                ? 1U : 0U))) : ((2U 
                                                 & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                                                  ? 
                                                 (VL_LTS_III(32, vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a, vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                                                  ? 
                                                 (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                                                  - vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                                                  : 
                                                 (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                                                  + vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b))))));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_imm 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_imm;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_auipc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_auipc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_jalr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_jalr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_jal 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_jal;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_branch 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_branch;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_wb_sel 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_wb_sel;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_mem_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_mem_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_mem_read 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_mem_read;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_alu_src 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_alu_src;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_csr_op 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_csr_op;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_mret 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_mret;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_ecall 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_ecall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_alu_op 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_alu_op;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__if_instruction 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__if_instruction;
    vlSelfRef.sim_soc__DOT__perip_rdata = vlSelfRef.sim_soc__DOT__dram_rdata;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__stall 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__pipeline_stall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__stall 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__pipeline_stall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_rs2_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_rs2_data_fwd;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_branch_target 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_target;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_branch_taken 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_taken;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_csr_wdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wdata;
    VL_EXTENDS_WQ(66,33, __Vtemp_3, vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_op_a);
    __Vtemp_4[0U] = __Vtemp_3[0U];
    __Vtemp_4[1U] = __Vtemp_3[1U];
    __Vtemp_4[2U] = (3U & __Vtemp_3[2U]);
    VL_EXTENDS_WQ(66,33, __Vtemp_6, vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_op_b);
    __Vtemp_7[0U] = __Vtemp_6[0U];
    __Vtemp_7[1U] = __Vtemp_6[1U];
    __Vtemp_7[2U] = (3U & __Vtemp_6[2U]);
    VL_MULS_WWW(66, __Vtemp_8, __Vtemp_4, __Vtemp_7);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_full[0U] 
        = __Vtemp_8[0U];
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_full[1U] 
        = __Vtemp_8[1U];
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_full[2U] 
        = (3U & __Vtemp_8[2U]);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_result 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_op)
            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_rdata
            : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_out);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__perip_rdata 
        = vlSelfRef.sim_soc__DOT__perip_rdata;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__branch_target 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_branch_target;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__branch_taken 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_branch_taken;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__flush = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_branch_taken;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_wdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_csr_wdata;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_csr_rdata_fwd 
        = (((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_csr_wen) 
            & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_csr_waddr) 
               == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_raddr)))
            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_csr_wdata
            : vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_csr_rdata_raw);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_alu_result 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_result;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_rdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__perip_rdata;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__flush 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__flush;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__flush 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__flush) 
           | (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__hz_stall));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__csr_rdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_csr_rdata_fwd;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_alu_result 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_alu_result;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__mem_read_data 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_read)
            ? ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_funct3))
                ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_funct3))
                    ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_rdata
                    : ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_funct3))
                        ? (0xffffU & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_rdata)
                        : (0xffU & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_rdata)))
                : ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_funct3))
                    ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_rdata
                    : ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_funct3))
                        ? (((- (IData)((1U & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_rdata 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_rdata))
                        : (((- (IData)((1U & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_rdata 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_rdata)))))
            : 0U);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__csr_rdata_out 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__csr_rdata;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__mem_read_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__mem_read_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_csr_rdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__csr_rdata_out;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_read_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__mem_read_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_csr_rdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_csr_rdata;
}

void Vsim_soc___024root___eval_triggers__ico(Vsim_soc___024root* vlSelf);

bool Vsim_soc___024root___eval_phase__ico(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_phase__ico\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vsim_soc___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vsim_soc___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vsim_soc___024root___eval_act(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_act\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsim_soc___024root___nba_sequent__TOP__0(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_sequent__TOP__1(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_sequent__TOP__2(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_sequent__TOP__3(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_sequent__TOP__4(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_sequent__TOP__5(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_sequent__TOP__6(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_sequent__TOP__7(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_sequent__TOP__8(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_sequent__TOP__9(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_sequent__TOP__10(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_comb__TOP__0(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_comb__TOP__1(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_comb__TOP__2(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_sequent__TOP__11(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_comb__TOP__3(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_comb__TOP__4(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_comb__TOP__5(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_comb__TOP__6(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_comb__TOP__7(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_comb__TOP__8(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_comb__TOP__9(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_comb__TOP__10(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_comb__TOP__11(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___nba_comb__TOP__12(Vsim_soc___024root* vlSelf);

void Vsim_soc___024root___eval_nba(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_nba\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x214ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x101ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x24ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x320ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x60ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0xa0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x328ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0x3e0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x32cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((0x324ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((0xe0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_comb__TOP__11(vlSelf);
    }
    if ((0xe4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsim_soc___024root___nba_comb__TOP__12(vlSelf);
    }
}

VL_INLINE_OPT void Vsim_soc___024root___nba_sequent__TOP__0(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_sequent__TOP__0\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_valid 
        = ((~ (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__cpu_rst)) 
           & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__is_mul_op) 
              & (~ (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_valid))));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_result_r 
        = (((QData)((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_full[1U])) 
            << 0x20U) | (QData)((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_full[0U])));
}

VL_INLINE_OPT void Vsim_soc___024root___nba_sequent__TOP__1(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_sequent__TOP__1\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out;
    __Vdly__sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out = 0;
    // Body
    __Vdly__sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out;
    if (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__cpu_rst) {
        __Vdly__sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out = 0x80000000U;
    } else if (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__branch_taken) {
        __Vdly__sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__branch_target;
    } else if ((1U & (~ (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__stall)))) {
        __Vdly__sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out 
            = ((IData)(4U) + vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out);
    }
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out 
        = __Vdly__sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__if_pc = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_plus4 
        = ((IData)(4U) + vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__irom_word_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__if_pc_plus4 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_plus4;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__irom_addr = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__irom_word_addr;
    vlSelfRef.sim_soc__DOT__irom_addr = vlSelfRef.sim_soc__DOT__u_cpu__DOT__irom_addr;
    vlSelfRef.sim_soc__DOT__irom_data = vlSelfRef.sim_soc__DOT__imem
        [(0xfffU & (vlSelfRef.sim_soc__DOT__irom_addr 
                    >> 2U))];
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__irom_data = vlSelfRef.sim_soc__DOT__irom_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__irom_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__irom_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__instruction 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__irom_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__if_instruction 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__instruction;
}

VL_INLINE_OPT void Vsim_soc___024root___nba_sequent__TOP__2(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_sequent__TOP__2\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__sim_soc__DOT__dmem__v0;
    __VdlyVal__sim_soc__DOT__dmem__v0 = 0;
    SData/*15:0*/ __VdlyDim0__sim_soc__DOT__dmem__v0;
    __VdlyDim0__sim_soc__DOT__dmem__v0 = 0;
    CData/*0:0*/ __VdlySet__sim_soc__DOT__dmem__v0;
    __VdlySet__sim_soc__DOT__dmem__v0 = 0;
    // Body
    __VdlySet__sim_soc__DOT__dmem__v0 = 0U;
    if (((IData)(vlSelfRef.sim_soc__DOT__perip_wen) 
         & (IData)(vlSelfRef.sim_soc__DOT__dram_sel))) {
        __VdlyVal__sim_soc__DOT__dmem__v0 = vlSelfRef.sim_soc__DOT__dram_wdata;
        __VdlyDim0__sim_soc__DOT__dmem__v0 = vlSelfRef.sim_soc__DOT__dram_word_addr;
        __VdlySet__sim_soc__DOT__dmem__v0 = 1U;
    }
    if (__VdlySet__sim_soc__DOT__dmem__v0) {
        vlSelfRef.sim_soc__DOT__dmem[__VdlyDim0__sim_soc__DOT__dmem__v0] 
            = __VdlyVal__sim_soc__DOT__dmem__v0;
    }
}

VL_INLINE_OPT void Vsim_soc___024root___nba_sequent__TOP__3(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_sequent__TOP__3\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0;
    __VdlySet__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0 = 0;
    IData/*31:0*/ __VdlyVal__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v31;
    __VdlyVal__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v31 = 0;
    CData/*4:0*/ __VdlyDim0__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v31;
    __VdlyDim0__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v31 = 0;
    CData/*0:0*/ __VdlySet__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v31;
    __VdlySet__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v31 = 0;
    // Body
    __VdlySet__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0 = 0U;
    __VdlySet__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v31 = 0U;
    if (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__cpu_rst) {
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 1U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 2U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 3U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 4U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 5U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 6U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 7U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 8U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 9U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0xaU;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0xbU;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0xcU;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0xdU;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0xeU;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0xfU;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0x10U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0x11U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0x12U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0x13U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0x14U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0x15U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0x16U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0x17U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0x18U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0x19U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0x1aU;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0x1bU;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0x1cU;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0x1dU;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0x1eU;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0x1fU;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = 0x20U;
        __VdlySet__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0 = 1U;
    } else if (((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_reg_write) 
                & (0U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_rd_addr)))) {
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT____Vlvbound_h5af0bf87__0 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_write_data;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_rd_addr) 
                                - (IData)(1U))))) {
            __VdlyVal__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v31 
                = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT____Vlvbound_h5af0bf87__0;
            __VdlyDim0__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v31 
                = (0x1fU & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_rd_addr) 
                            - (IData)(1U)));
            __VdlySet__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v31 = 1U;
        }
    }
    if (__VdlySet__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0) {
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0U] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[1U] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[2U] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[3U] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[4U] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[5U] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[6U] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[7U] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[8U] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[9U] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0xaU] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0xbU] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0xcU] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0xdU] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0xeU] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0xfU] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x10U] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x11U] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x12U] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x13U] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x14U] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x15U] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x16U] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x17U] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x18U] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x19U] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x1aU] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x1bU] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x1cU] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x1dU] = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x1eU] = 0U;
    }
    if (__VdlySet__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v31) {
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[__VdlyDim0__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v31] 
            = __VdlyVal__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v31;
    }
}

VL_INLINE_OPT void Vsim_soc___024root___nba_sequent__TOP__4(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_sequent__TOP__4\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__state;
    __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__state = 0;
    CData/*4:0*/ __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__count;
    __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__count = 0;
    IData/*31:0*/ __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo;
    __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo = 0;
    IData/*31:0*/ __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rem;
    __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rem = 0;
    // Body
    __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__count 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__count;
    __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo;
    __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rem 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rem;
    __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__state 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__state;
    if (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rst) {
        __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__state = 0U;
        __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__count = 0U;
        __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo = 0U;
        __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rem = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__div_reg = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__sign_q = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__sign_r = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__is_rem = 0U;
    } else if ((0U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__state))) {
        if (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__start) {
            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__is_rem 
                = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__op_rem;
            if ((0U == vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__divisor)) {
                __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo = 0xffffffffU;
                __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rem 
                    = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__dividend;
                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__sign_q = 0U;
                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__sign_r = 0U;
                __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__state = 2U;
            } else if ((((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__op_signed) 
                         & (0x80000000U == vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__dividend)) 
                        & (0xffffffffU == vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__divisor))) {
                __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo = 0x80000000U;
                __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rem = 0U;
                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__sign_q = 0U;
                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__sign_r = 0U;
                __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__state = 2U;
            } else {
                __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo 
                    = (((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__op_signed) 
                        & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__dividend 
                           >> 0x1fU)) ? ((IData)(1U) 
                                         + (~ vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__dividend))
                        : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__dividend);
                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__div_reg 
                    = (((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__op_signed) 
                        & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__divisor 
                           >> 0x1fU)) ? ((IData)(1U) 
                                         + (~ vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__divisor))
                        : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__divisor);
                __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rem = 0U;
                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__sign_q 
                    = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__op_signed) 
                       & ((vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__dividend 
                           ^ vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__divisor) 
                          >> 0x1fU));
                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__sign_r 
                    = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__op_signed) 
                       & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__dividend 
                          >> 0x1fU));
                __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__count = 0x1fU;
                __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__state = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__state))) {
        if (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__can_sub) {
            __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo 
                = (1U | (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo 
                         << 1U));
            __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rem 
                = (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__trial);
        } else {
            __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rem 
                = ((vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rem 
                    << 1U) | (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo 
                              >> 0x1fU));
            __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo 
                = (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo 
                   << 1U);
        }
        if ((0U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__count))) {
            __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__state = 2U;
        } else {
            __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__count 
                = (0x1fU & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__count) 
                            - (IData)(1U)));
        }
    } else {
        __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__state = 0U;
    }
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__count 
        = __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__count;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo 
        = __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rem 
        = __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rem;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__state 
        = __Vdly__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__state;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__q_out 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__sign_q)
            ? ((IData)(1U) + (~ vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo))
            : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__trial 
        = (0x1ffffffffULL & ((((QData)((IData)((0x7fffffffU 
                                                & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rem))) 
                               << 1U) | (QData)((IData)(
                                                        (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo 
                                                         >> 0x1fU)))) 
                             - (QData)((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__div_reg))));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__r_out 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__sign_r)
            ? ((IData)(1U) + (~ vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rem))
            : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rem);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__busy 
        = (1U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__state));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__done 
        = (2U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__state));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__can_sub 
        = (1U & (~ (IData)((vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__trial 
                            >> 0x20U))));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__result 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__is_rem)
            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__r_out
            : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__q_out);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_busy 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__busy;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_done 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__done;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_result 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__result;
}

VL_INLINE_OPT void Vsim_soc___024root___nba_sequent__TOP__5(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_sequent__TOP__5\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__cpu_rst) {
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_pc_plus4 = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_alu_result = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_mem_data = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_wb_sel = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_write_data = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_rd_addr = 0U;
    } else {
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_pc_plus4 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_pc_plus4;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_alu_result 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_alu_result;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_mem_data 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_read_data;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_wb_sel 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_wb_sel;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_write_data 
            = ((1U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_wb_sel))
                ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_read_data
                : ((2U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_wb_sel))
                    ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_pc_plus4
                    : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_alu_result));
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_rd_addr 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_rd_addr;
    }
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_reg_write 
        = ((1U & (~ (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__cpu_rst))) 
           && (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_reg_write));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_pc_plus4 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_pc_plus4;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_alu_result 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_alu_result;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_mem_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_mem_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_wb_sel 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_wb_sel;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_write_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_write_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__wb_write_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_write_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__memwb_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__memwb_reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__memwb_reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_write_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__wb_write_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__wb_write_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__wb_write_data;
}

VL_INLINE_OPT void Vsim_soc___024root___nba_sequent__TOP__6(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_sequent__TOP__6\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__cpu_rst) 
         | (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__flush))) {
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__ifid_pc = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__ifid_pc_plus4 = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__ifid_instruction = 0x13U;
    } else if ((1U & (~ (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__stall)))) {
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__ifid_pc 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__if_pc;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__ifid_pc_plus4 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__if_pc_plus4;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__ifid_instruction 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__if_instruction;
    }
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ifid_pc = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__ifid_pc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ifid_pc_plus4 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__ifid_pc_plus4;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ifid_instruction 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__ifid_instruction;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__ifid_rs1_addr 
        = (0x1fU & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__ifid_instruction 
                    >> 0xfU));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__ifid_rs2_addr 
        = (0x1fU & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__ifid_instruction 
                    >> 0x14U));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_raddr 
        = (vlSelfRef.sim_soc__DOT__u_cpu__DOT__ifid_instruction 
           >> 0x14U);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__instruction 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ifid_instruction;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rd_addr 
        = (0x1fU & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__instruction 
                    >> 7U));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__funct7 
        = (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__instruction 
           >> 0x19U);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs1_addr 
        = (0x1fU & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__instruction 
                    >> 0xfU));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs2_addr 
        = (0x1fU & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__instruction 
                    >> 0x14U));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__instruction;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__funct12 
        = (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__instruction 
           >> 0x14U);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__f3 
        = (7U & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__instruction 
                 >> 0xcU));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__opcode 
        = (0x7fU & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__instruction);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct7 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__funct7;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_rs1_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs1_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_rs2_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs2_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode 
        = (0x7fU & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__csr_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__funct12;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct12 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__funct12;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__mem_funct3 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__f3;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__f3;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__opcode;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__imm 
        = ((0x40U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
            ? ((0x20U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                ? ((0x10U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                    ? ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                        ? 0U : ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                 ? 0U : ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                          ? ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                              ? (((- (IData)(
                                                             (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                    >> 0x14U))
                                              : 0U)
                                          : 0U))) : 
                   ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                     ? ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                         ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                             ? ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                 ? ((((- (IData)((vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                  >> 0x1fU))) 
                                      << 0x15U) | (0x100000U 
                                                   & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                      >> 0xbU))) 
                                    | (((0xff000U & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction) 
                                        | (0x800U & 
                                           (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                            >> 9U))) 
                                       | (0x7feU & 
                                          (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                           >> 0x14U))))
                                 : 0U) : 0U) : 0U) : 
                    ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                      ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                          ? ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                              ? (((- (IData)((vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                              >> 0x14U))
                              : 0U) : 0U) : ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                               >> 0x1fU))) 
                                                   << 0xdU) 
                                                  | (((0x1000U 
                                                       & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                          >> 0x13U)) 
                                                      | (0x800U 
                                                         & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                            << 4U))) 
                                                     | ((0x7e0U 
                                                         & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                              >> 7U)))))
                                                  : 0U)
                                              : 0U))))
                : 0U) : ((0x20U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                          ? ((0x10U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction)
                                                   : 0U)
                                               : 0U)
                                           : 0U)) : 
                             ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                               ? 0U : ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                           >> 7U))))
                                                  : 0U)
                                                 : 0U))))
                          : ((0x10U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction)
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U)))
                              : ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                  ? ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                      ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                          ? ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                              ? 4U : 0U)
                                          : 0U) : 0U)
                                  : ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                      ? 0U : ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U))))));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_csr_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__csr_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_mem_funct3 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__mem_funct3;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__lui = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__auipc = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__jalr = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__jal = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__branch = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__wb_sel = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mem_write = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mem_read = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__lui = 1U;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mem_write = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__auipc = 1U;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mem_read = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_src = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__csr_op = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mret = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ecall = 0U;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op = 0U;
    if ((0x40U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__jalr = 1U;
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_src = 1U;
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op = 0U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op = 1U;
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__branch = 1U;
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                    if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__jal = 1U;
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__wb_sel = 2U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__wb_sel = 2U;
                        }
                    }
                }
            }
            if ((0x10U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                if ((0U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))) {
                                    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write = 1U;
                                    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__csr_op = 1U;
                                }
                                if ((0U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))) {
                                    if ((0U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct12))) {
                                        if ((1U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct12))) {
                                            if ((0x302U 
                                                 == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct12))) {
                                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mret = 1U;
                                            }
                                        }
                                    }
                                    if ((0U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct12))) {
                                        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ecall = 1U;
                                    } else if ((1U 
                                                == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct12))) {
                                        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ecall = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                    if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__jal = 1U;
                            }
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__wb_sel = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_src = 1U;
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write = 1U;
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op = 0xaU;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write = 1U;
                            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op 
                                = ((1U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct7))
                                    ? ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                        ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                ? 0x12U
                                                : 0x11U)
                                            : ((1U 
                                                & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                ? 0x10U
                                                : 0xfU))
                                        : ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                ? 0xeU
                                                : 0xdU)
                                            : ((1U 
                                                & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                ? 0xcU
                                                : 0xbU)))
                                    : ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                        ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                ? 9U
                                                : 8U)
                                            : ((1U 
                                                & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                ? (
                                                   (0x20U 
                                                    & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct7))
                                                    ? 7U
                                                    : 6U)
                                                : 5U))
                                        : ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                ? 4U
                                                : 3U)
                                            : ((1U 
                                                & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                ? 2U
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct7))
                                                    ? 1U
                                                    : 0U)))));
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                                 >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_src = 1U;
                            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op = 0U;
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_src = 1U;
                            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write = 1U;
                            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_src = 1U;
                        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write = 1U;
                        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op 
                            = ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                    ? ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                        ? 9U : 8U) : 
                                   ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                     ? ((0x20U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct7))
                                         ? 7U : 6U)
                                     : 5U)) : ((2U 
                                                & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                    ? 4U
                                                    : 3U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3))
                                                    ? 2U
                                                    : 0U)));
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode))) {
                        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_src = 1U;
                        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write = 1U;
                        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op = 0U;
                    }
                }
            }
        }
    }
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__imm 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__imm;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__lui 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__lui;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__auipc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__auipc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__jalr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__jalr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__jal 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__jal;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__branch 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__branch;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_sel 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__wb_sel;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__mem_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mem_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__mem_read 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mem_read;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__alu_src 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_src;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__csr_op 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__csr_op;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__mret 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mret;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__ecall 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ecall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__alu_op 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_imm = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__imm;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_auipc = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__auipc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_jalr = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__jalr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_jal = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__jal;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_branch = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__branch;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_wb_sel = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_sel;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_mem_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__mem_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_mem_read 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__mem_read;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_alu_src 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__alu_src;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_csr_op = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__csr_op;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_mret = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__mret;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_ecall = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__ecall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_alu_op = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__alu_op;
}

VL_INLINE_OPT void Vsim_soc___024root___nba_sequent__TOP__7(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_sequent__TOP__7\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__cpu_rst) 
         | (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__flush))) {
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_pc_plus4 = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_wb_sel = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_rs2_data = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_mem_funct3 = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_alu_result = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_fwd_data = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_rd_addr = 0U;
    } else {
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_pc_plus4 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_pc_plus4;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_wb_sel 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_wb_sel;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_rs2_data 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_rs2_data;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_mem_funct3 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_mem_funct3;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_alu_result 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_alu_result;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_fwd_data 
            = ((2U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_wb_sel))
                ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_pc_plus4
                : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_alu_result);
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_rd_addr 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_rd_addr;
    }
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_mem_write 
        = ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__cpu_rst) 
                     | (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__flush)))) 
           && (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_mem_write));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_mem_read 
        = ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__cpu_rst) 
                     | (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__flush)))) 
           && (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_mem_read));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_reg_write 
        = ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__cpu_rst) 
                     | (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__flush)))) 
           && (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_reg_write));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_pc_plus4 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_pc_plus4;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_wb_sel 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_wb_sel;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_mem_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_mem_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_mem_read 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_mem_read;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_rs2_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_rs2_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_mem_funct3 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_mem_funct3;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_alu_result 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_alu_result;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_fwd_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_fwd_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_pc_plus4 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_pc_plus4;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_wb_sel 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_wb_sel;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_mem_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_read 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_mem_read;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_rs2_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_rs2_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_funct3 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_mem_funct3;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_alu_result 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_alu_result;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_alu_result 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_alu_result;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__exmem_fwd_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_fwd_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__exmem_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__exmem_reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__exmem_reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_wen 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_wdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_rs2_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_mask 
        = (3U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_funct3));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_alu_result;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__perip_wen = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_wen;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__perip_wdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_wdata;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__perip_mask 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_mask;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__perip_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_addr;
    vlSelfRef.sim_soc__DOT__perip_wen = vlSelfRef.sim_soc__DOT__u_cpu__DOT__perip_wen;
    vlSelfRef.sim_soc__DOT__perip_wdata = vlSelfRef.sim_soc__DOT__u_cpu__DOT__perip_wdata;
    vlSelfRef.sim_soc__DOT__perip_mask = vlSelfRef.sim_soc__DOT__u_cpu__DOT__perip_mask;
    vlSelfRef.sim_soc__DOT__perip_addr = vlSelfRef.sim_soc__DOT__u_cpu__DOT__perip_addr;
    vlSelfRef.sim_soc__DOT__dram_sel = ((0x80100000U 
                                         <= vlSelfRef.sim_soc__DOT__perip_addr) 
                                        & (0x80140000U 
                                           > vlSelfRef.sim_soc__DOT__perip_addr));
    vlSelfRef.sim_soc__DOT__dram_offset = (3U & vlSelfRef.sim_soc__DOT__perip_addr);
    vlSelfRef.sim_soc__DOT__dram_word_addr = (0xffffU 
                                              & (vlSelfRef.sim_soc__DOT__perip_addr 
                                                 >> 2U));
}

VL_INLINE_OPT void Vsim_soc___024root___nba_sequent__TOP__8(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_sequent__TOP__8\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__cpu_rst) {
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mscratch = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mstatus = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mtval = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mcause = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mtvec = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mepc = 0U;
    } else {
        if (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__trap_valid) {
            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mcause 
                = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__trap_mcause;
            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mepc 
                = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__trap_epc;
        }
        if (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_wen) {
            if ((0x300U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_waddr))) {
                if ((0x305U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_waddr))) {
                    if ((0x340U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_waddr))) {
                        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mscratch 
                            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_wdata;
                    }
                    if ((0x340U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_waddr))) {
                        if ((0x341U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_waddr))) {
                            if ((0x342U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_waddr))) {
                                if ((0x343U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_waddr))) {
                                    if ((1U & (~ (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__trap_valid)))) {
                                        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mtval 
                                            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_wdata;
                                    }
                                }
                            }
                            if ((0x342U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_waddr))) {
                                if ((1U & (~ (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__trap_valid)))) {
                                    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mcause 
                                        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_wdata;
                                }
                            }
                        }
                        if ((0x341U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_waddr))) {
                            if ((1U & (~ (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__trap_valid)))) {
                                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mepc 
                                    = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_wdata;
                            }
                        }
                    }
                }
                if ((0x305U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_waddr))) {
                    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mtvec 
                        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_wdata;
                }
            }
            if ((0x300U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_waddr))) {
                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mstatus 
                    = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_wdata;
            }
        }
    }
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__csr_mtvec = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mtvec;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__csr_mepc = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mepc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_mtvec 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__csr_mtvec;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_mepc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__csr_mepc;
}

VL_INLINE_OPT void Vsim_soc___024root___nba_sequent__TOP__9(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_sequent__TOP__9\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__cpu_rst) 
         | (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__flush))) {
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_mem_write = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_mem_funct3 = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_reg_write = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_wb_sel = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_pc_plus4 = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_branch = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_jal = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_mem_read = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rd_addr = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_alu_src = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_auipc = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_csr_addr = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_jalr = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_mret = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_csr_op = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_csr_rdata = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_ecall = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_pc = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_funct3 = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_imm = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rs2_data = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rs2_addr = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rs1_data = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rs1_addr = 0U;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_alu_op = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__hold)))) {
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_mem_write 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_mem_write;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_mem_funct3 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_mem_funct3;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_reg_write 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_reg_write;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_wb_sel 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_wb_sel;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_pc_plus4 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_pc_plus4;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_branch 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_branch;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_jal 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_jal;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_mem_read 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_mem_read;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rd_addr 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_rd_addr;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_alu_src 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_alu_src;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_auipc 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_auipc;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_csr_addr 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_csr_addr;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_jalr 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_jalr;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_mret 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_mret;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_csr_op 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_csr_op;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_csr_rdata 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_csr_rdata;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_ecall 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_ecall;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_pc 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_pc;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_funct3 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_funct3;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_imm 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_imm;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rs2_data 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_rs2_data;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rs2_addr 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_rs2_addr;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rs1_data 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_rs1_data;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rs1_addr 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_rs1_addr;
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_alu_op 
            = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_alu_op;
    }
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_mem_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_mem_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_mem_funct3 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_mem_funct3;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_wb_sel 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_wb_sel;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_pc_plus4 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_pc_plus4;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_branch 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_branch;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_jal = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_jal;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_mem_read 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_mem_read;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_alu_src 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_alu_src;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_auipc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_auipc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_csr_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_csr_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_jalr = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_jalr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_mret = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_mret;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_csr_op 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_csr_op;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_csr_rdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_csr_rdata;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_ecall 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_ecall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_pc = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_pc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_funct3 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_funct3;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_imm = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_imm;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rs2_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rs2_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rs2_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rs2_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rs1_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rs1_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rs1_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rs1_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_alu_op 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_alu_op;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_mem_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_mem_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_mem_funct3 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_mem_funct3;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_wb_sel 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_wb_sel;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_pc_plus4 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_pc_plus4;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_pc_plus4 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_pc_plus4;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_branch 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_branch;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_jal 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_jal;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_mem_read 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_mem_read;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__idex_mem_read 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_mem_read;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__idex_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_src 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_alu_src;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_auipc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_auipc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_csr_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_jalr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_jalr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_mret 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_mret;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_op 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_csr_op;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_rdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_csr_rdata;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_ecall 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_ecall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_pc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_pc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_funct3 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_funct3;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_imm 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_imm;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_rs2_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rs2_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_rs2_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rs2_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__idex_rs2_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rs2_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_rs1_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rs1_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_rs1_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rs1_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__idex_rs1_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_rs1_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__idex_alu_op;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__trap_mcause 
        = ((1U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_addr))
            ? 3U : 0xbU);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_waddr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wen 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_op;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__trap_valid 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_ecall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__trap_epc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_pc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__pc_branch 
        = (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_imm 
           + vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_pc);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__zimm 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_rs1_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_op_signed 
        = ((0xfU == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op)) 
           | (0x11U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op)));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_a_sign 
        = (0xeU != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_b_sign 
        = ((0xbU == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op)) 
           | (0xcU == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op)));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_op_rem 
        = ((0x11U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op)) 
           | (0x12U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op)));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_trap_mcause 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__trap_mcause;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_csr_waddr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_waddr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_csr_wen 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wen;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_trap_valid 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__trap_valid;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_trap_epc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__trap_epc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__op_signed 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_op_signed;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__is_mul_op 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_b_sign) 
           | ((0xdU == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op)) 
              | (0xeU == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__op_rem 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_op_rem;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__is_div_op 
        = ((0xfU == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op)) 
           | ((0x10U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op)) 
              | (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_op_rem)));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__trap_mcause 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_trap_mcause;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_waddr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_csr_waddr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_wen 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_csr_wen;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__trap_valid 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_trap_valid;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__trap_epc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_trap_epc;
}

VL_INLINE_OPT void Vsim_soc___024root___nba_sequent__TOP__10(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_sequent__TOP__10\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__if_pc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__if_pc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__if_pc_plus4 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__if_pc_plus4;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__if_instruction 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__if_instruction;
}

VL_INLINE_OPT void Vsim_soc___024root___nba_comb__TOP__0(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_comb__TOP__0\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rf_rs1 
        = ((0U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs1_addr))
            ? 0U : (((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_reg_write) 
                     & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs1_addr) 
                        == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_rd_addr)))
                     ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_write_data
                     : ((0x1eU >= (0x1fU & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs1_addr) 
                                            - (IData)(1U))))
                         ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                        [(0x1fU & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs1_addr) 
                                   - (IData)(1U)))]
                         : 0U)));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rf_rs2 
        = ((0U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs2_addr))
            ? 0U : (((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_reg_write) 
                     & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs2_addr) 
                        == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_rd_addr)))
                     ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_write_data
                     : ((0x1eU >= (0x1fU & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs2_addr) 
                                            - (IData)(1U))))
                         ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                        [(0x1fU & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs2_addr) 
                                   - (IData)(1U)))]
                         : 0U)));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs1_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rf_rs1;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs2_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rf_rs2;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_rs1_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs1_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_rs2_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs2_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_rs1_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_rs1_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_rs2_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_rs2_data;
}

VL_INLINE_OPT void Vsim_soc___024root___nba_comb__TOP__1(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_comb__TOP__1\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim_soc__DOT__dram_cur = vlSelfRef.sim_soc__DOT__dmem
        [vlSelfRef.sim_soc__DOT__dram_word_addr];
    vlSelfRef.sim_soc__DOT__dram_wdata = vlSelfRef.sim_soc__DOT__perip_wdata;
    if ((0U == (IData)(vlSelfRef.sim_soc__DOT__perip_mask))) {
        vlSelfRef.sim_soc__DOT__dram_wdata = ((2U & (IData)(vlSelfRef.sim_soc__DOT__dram_offset))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.sim_soc__DOT__dram_offset))
                                                   ? 
                                                  ((vlSelfRef.sim_soc__DOT__perip_wdata 
                                                    << 0x18U) 
                                                   | (0xffffffU 
                                                      & vlSelfRef.sim_soc__DOT__dram_cur))
                                                   : 
                                                  ((0xff000000U 
                                                    & vlSelfRef.sim_soc__DOT__dram_cur) 
                                                   | ((0xff0000U 
                                                       & (vlSelfRef.sim_soc__DOT__perip_wdata 
                                                          << 0x10U)) 
                                                      | (0xffffU 
                                                         & vlSelfRef.sim_soc__DOT__dram_cur))))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.sim_soc__DOT__dram_offset))
                                                   ? 
                                                  ((0xffff0000U 
                                                    & vlSelfRef.sim_soc__DOT__dram_cur) 
                                                   | ((0xff00U 
                                                       & (vlSelfRef.sim_soc__DOT__perip_wdata 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & vlSelfRef.sim_soc__DOT__dram_cur)))
                                                   : 
                                                  ((0xffffff00U 
                                                    & vlSelfRef.sim_soc__DOT__dram_cur) 
                                                   | (0xffU 
                                                      & vlSelfRef.sim_soc__DOT__perip_wdata))));
    } else if ((1U == (IData)(vlSelfRef.sim_soc__DOT__perip_mask))) {
        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__dram_offset))) {
            if ((2U & (IData)(vlSelfRef.sim_soc__DOT__dram_offset))) {
                vlSelfRef.sim_soc__DOT__dram_wdata 
                    = ((vlSelfRef.sim_soc__DOT__perip_wdata 
                        << 0x10U) | (0xffffU & vlSelfRef.sim_soc__DOT__dram_cur));
            }
        } else {
            vlSelfRef.sim_soc__DOT__dram_wdata = ((0xffff0000U 
                                                   & vlSelfRef.sim_soc__DOT__dram_cur) 
                                                  | (0xffffU 
                                                     & vlSelfRef.sim_soc__DOT__perip_wdata));
        }
    } else {
        vlSelfRef.sim_soc__DOT__dram_wdata = vlSelfRef.sim_soc__DOT__perip_wdata;
    }
    vlSelfRef.sim_soc__DOT__dram_rdata = 0U;
    if (vlSelfRef.sim_soc__DOT__dram_sel) {
        if ((0U == (IData)(vlSelfRef.sim_soc__DOT__perip_mask))) {
            vlSelfRef.sim_soc__DOT__dram_rdata = ((2U 
                                                   & (IData)(vlSelfRef.sim_soc__DOT__dram_offset))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.sim_soc__DOT__dram_offset))
                                                    ? 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.sim_soc__DOT__dram_cur, 0x18U)
                                                    : 
                                                   (0xffU 
                                                    & (vlSelfRef.sim_soc__DOT__dram_cur 
                                                       >> 0x10U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.sim_soc__DOT__dram_offset))
                                                    ? 
                                                   (0xffU 
                                                    & (vlSelfRef.sim_soc__DOT__dram_cur 
                                                       >> 8U))
                                                    : 
                                                   (0xffU 
                                                    & vlSelfRef.sim_soc__DOT__dram_cur)));
        } else if ((1U == (IData)(vlSelfRef.sim_soc__DOT__perip_mask))) {
            if ((2U & (IData)(vlSelfRef.sim_soc__DOT__dram_offset))) {
                if ((2U & (IData)(vlSelfRef.sim_soc__DOT__dram_offset))) {
                    vlSelfRef.sim_soc__DOT__dram_rdata 
                        = VL_SHIFTR_III(32,32,32, vlSelfRef.sim_soc__DOT__dram_cur, 0x10U);
                }
            } else {
                vlSelfRef.sim_soc__DOT__dram_rdata 
                    = (0xffffU & vlSelfRef.sim_soc__DOT__dram_cur);
            }
        } else {
            vlSelfRef.sim_soc__DOT__dram_rdata = vlSelfRef.sim_soc__DOT__dram_cur;
        }
    }
    vlSelfRef.sim_soc__DOT__perip_rdata = vlSelfRef.sim_soc__DOT__dram_rdata;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__perip_rdata 
        = vlSelfRef.sim_soc__DOT__perip_rdata;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_rdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__perip_rdata;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__mem_read_data 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_read)
            ? ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_funct3))
                ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_funct3))
                    ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_rdata
                    : ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_funct3))
                        ? (0xffffU & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_rdata)
                        : (0xffU & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_rdata)))
                : ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_funct3))
                    ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_rdata
                    : ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_funct3))
                        ? (((- (IData)((1U & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_rdata 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_rdata))
                        : (((- (IData)((1U & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_rdata 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_rdata)))))
            : 0U);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__mem_read_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_mem__DOT__mem_read_data;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_read_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__mem_read_data;
}

VL_INLINE_OPT void Vsim_soc___024root___nba_comb__TOP__2(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_comb__TOP__2\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_rdata 
        = ((0x300U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_raddr))
            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mstatus
            : ((0x305U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_raddr))
                ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mtvec
                : ((0x340U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_raddr))
                    ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mscratch
                    : ((0x341U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_raddr))
                        ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mepc
                        : ((0x342U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_raddr))
                            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mcause
                            : ((0x343U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_raddr))
                                ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mtval
                                : 0U))))));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_csr_rdata_raw 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_rdata;
}

VL_INLINE_OPT void Vsim_soc___024root___nba_sequent__TOP__11(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_sequent__TOP__11\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_mem_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_mem_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_mem_funct3 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_mem_funct3;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_reg_write 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_reg_write;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_wb_sel 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_wb_sel;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_pc_plus4 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ifid_pc_plus4;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_branch 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_branch;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_jal 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_jal;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_mem_read 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_mem_read;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_rd_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_rd_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_alu_src 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_alu_src;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_auipc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_auipc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_csr_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_csr_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_jalr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_jalr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_mret 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_mret;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_csr_op 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_csr_op;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_ecall 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_ecall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_pc 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ifid_pc;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_funct3 
        = (7U & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__ifid_instruction 
                 >> 0xcU));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_imm 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_imm;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_rs2_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_rs2_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_rs1_addr 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_rs1_addr;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_alu_op 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_alu_op;
}

VL_INLINE_OPT void Vsim_soc___024root___nba_comb__TOP__3(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_comb__TOP__3\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__stall 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__idex_mem_read) 
           & ((0U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__idex_rd_addr)) 
              & (((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__idex_rd_addr) 
                  == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__ifid_rs1_addr)) 
                 | ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__idex_rd_addr) 
                    == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__ifid_rs2_addr)))));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__hz_stall = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__stall;
}

VL_INLINE_OPT void Vsim_soc___024root___nba_comb__TOP__4(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_comb__TOP__4\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__forward_b 
        = ((((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__exmem_reg_write) 
             & (0U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__exmem_rd_addr))) 
            & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__exmem_rd_addr) 
               == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__idex_rs2_addr)))
            ? 2U : ((((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__memwb_reg_write) 
                      & (0U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__memwb_rd_addr))) 
                     & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__memwb_rd_addr) 
                        == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__idex_rs2_addr)))
                     ? 1U : 0U));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__forward_a 
        = ((((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__exmem_reg_write) 
             & (0U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__exmem_rd_addr))) 
            & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__exmem_rd_addr) 
               == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__idex_rs1_addr)))
            ? 2U : ((((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__memwb_reg_write) 
                      & (0U != (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__memwb_rd_addr))) 
                     & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__memwb_rd_addr) 
                        == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__idex_rs1_addr)))
                     ? 1U : 0U));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__forward_b = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__forward_b;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__forward_a = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__forward_a;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__forward_b 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__forward_b;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__forward_a 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__forward_a;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b 
        = ((2U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__forward_b))
            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__exmem_fwd_data
            : ((1U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__forward_b))
                ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__wb_write_data
                : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_rs2_data));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a 
        = ((2U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__forward_a))
            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__exmem_fwd_data
            : ((1U == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__forward_a))
                ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__wb_write_data
                : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_rs1_data));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__rs2_data_fwd 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_src)
            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_imm
            : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__jalr_tgt 
        = (0xfffffffeU & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a 
                          + vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_imm));
    if ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_funct3))) {
        if ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_funct3))) {
            if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_funct3))) {
                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_cond 
                    = (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a 
                       >= vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b);
                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd 
                    = (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_rdata 
                       & (~ vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__zimm));
            } else {
                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_cond 
                    = (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a 
                       < vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b);
                vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd 
                    = (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_rdata 
                       | vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__zimm);
            }
        } else if ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_funct3))) {
            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_cond 
                = VL_GTES_III(32, vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a, vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b);
            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd 
                = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__zimm;
        } else {
            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_cond 
                = VL_LTS_III(32, vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a, vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b);
            vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd 
                = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a;
        }
    } else {
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_cond 
            = ((1U & (~ ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_funct3) 
                         >> 1U))) && ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_funct3))
                                       ? (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a 
                                          != vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b)
                                       : (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a 
                                          == vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b)));
        vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd 
            = ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_funct3))
                ? ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_funct3))
                    ? (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_rdata 
                       & (~ vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a))
                    : (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_rdata 
                       | vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a))
                : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a);
    }
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_auipc)
            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_pc
            : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_rs2_data_fwd 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__rs2_data_fwd;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__divisor 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_op_b 
        = (((QData)((IData)(((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_b_sign) 
                             & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b 
                                >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_taken 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_jal) 
           | ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_jalr) 
              | (((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_cond) 
                  & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_branch)) 
                 | ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_ecall) 
                    | (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_mret)))));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__dividend 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_op_a 
        = (((QData)((IData)(((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_a_sign) 
                             & (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                                >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a)));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_rs2_data 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_rs2_data_fwd;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_branch_taken 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_taken;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_csr_wdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wdata;
    VL_EXTENDS_WQ(66,33, __Vtemp_3, vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_op_a);
    __Vtemp_4[0U] = __Vtemp_3[0U];
    __Vtemp_4[1U] = __Vtemp_3[1U];
    __Vtemp_4[2U] = (3U & __Vtemp_3[2U]);
    VL_EXTENDS_WQ(66,33, __Vtemp_6, vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_op_b);
    __Vtemp_7[0U] = __Vtemp_6[0U];
    __Vtemp_7[1U] = __Vtemp_6[1U];
    __Vtemp_7[2U] = (3U & __Vtemp_6[2U]);
    VL_MULS_WWW(66, __Vtemp_8, __Vtemp_4, __Vtemp_7);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_full[0U] 
        = __Vtemp_8[0U];
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_full[1U] 
        = __Vtemp_8[1U];
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_full[2U] 
        = (3U & __Vtemp_8[2U]);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__branch_taken 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_branch_taken;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__flush = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_branch_taken;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_wdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_csr_wdata;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__flush 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__flush;
}

VL_INLINE_OPT void Vsim_soc___024root___nba_comb__TOP__5(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_comb__TOP__5\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_stall 
        = ((~ (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_valid)) 
           & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__is_mul_op));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__mul_stall = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_stall;
}

VL_INLINE_OPT void Vsim_soc___024root___nba_comb__TOP__6(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_comb__TOP__6\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_start 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__is_div_op) 
           & ((~ (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_busy)) 
              & (~ (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_done))));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_stall 
        = ((~ (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_done)) 
           & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__is_div_op));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__start 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_start;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__div_stall = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_stall;
}

VL_INLINE_OPT void Vsim_soc___024root___nba_comb__TOP__7(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_comb__TOP__7\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_target 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_mret)
            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_mepc
            : ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_ecall)
                ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_mtvec
                : ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_jalr)
                    ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__jalr_tgt
                    : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__pc_branch)));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_branch_target 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_target;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__branch_target 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_branch_target;
}

VL_INLINE_OPT void Vsim_soc___024root___nba_comb__TOP__8(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_comb__TOP__8\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_out 
        = ((0x10U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
            ? ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                ? 0U : ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                         ? 0U : ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                                  ? ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                                      ? 0U : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_result)
                                  : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_result)))
            : ((8U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                ? ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                    ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                        ? ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_result
                            : (IData)((vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_result_r 
                                       >> 0x20U))) : 
                       ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                         ? (IData)((vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_result_r 
                                    >> 0x20U)) : (IData)(
                                                         (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_result_r 
                                                          >> 0x20U))))
                    : ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                        ? ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                            ? (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_result_r)
                            : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                        : ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                            ? (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                               & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                            : (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                               | vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b))))
                : ((4U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                    ? ((2U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                        ? ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                            ? VL_SHIFTRS_III(32,32,5, vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a, 
                                             (0x1fU 
                                              & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b))
                            : (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                               >> (0x1fU & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)))
                        : ((1U & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                            ? (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                               ^ vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                            : ((vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                                < vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                                ? 1U : 0U))) : ((2U 
                                                 & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                                                  ? 
                                                 (VL_LTS_III(32, vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a, vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op))
                                                  ? 
                                                 (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                                                  - vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                                                  : 
                                                 (vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                                                  + vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b))))));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_result 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_op)
            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_rdata
            : vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_out);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_alu_result 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_result;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_alu_result 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_alu_result;
}

VL_INLINE_OPT void Vsim_soc___024root___nba_comb__TOP__9(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_comb__TOP__9\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_csr_rdata_fwd 
        = (((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_csr_wen) 
            & ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_csr_waddr) 
               == (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_raddr)))
            ? vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_csr_wdata
            : vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_csr_rdata_raw);
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__csr_rdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_csr_rdata_fwd;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__csr_rdata_out 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__csr_rdata;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_csr_rdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__csr_rdata_out;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_csr_rdata 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__id_csr_rdata;
}

VL_INLINE_OPT void Vsim_soc___024root___nba_comb__TOP__10(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_comb__TOP__10\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__flush 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__flush) 
           | (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__hz_stall));
}

VL_INLINE_OPT void Vsim_soc___024root___nba_comb__TOP__11(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_comb__TOP__11\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_stall = 
        ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__div_stall) 
         | (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__mul_stall));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__hold 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_stall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__flush 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_stall;
}

VL_INLINE_OPT void Vsim_soc___024root___nba_comb__TOP__12(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___nba_comb__TOP__12\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__pipeline_stall 
        = ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__ex_stall) 
           | (IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__hz_stall));
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__stall 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__pipeline_stall;
    vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__stall 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__pipeline_stall;
}

void Vsim_soc___024root___eval_triggers__act(Vsim_soc___024root* vlSelf);

bool Vsim_soc___024root___eval_phase__act(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_phase__act\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<10> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsim_soc___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsim_soc___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsim_soc___024root___eval_phase__nba(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_phase__nba\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsim_soc___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_soc___024root___dump_triggers__ico(Vsim_soc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_soc___024root___dump_triggers__nba(Vsim_soc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_soc___024root___dump_triggers__act(Vsim_soc___024root* vlSelf);
#endif  // VL_DEBUG

void Vsim_soc___024root___eval(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vsim_soc___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("sim_soc_verilator.v", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vsim_soc___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsim_soc___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim_soc_verilator.v", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsim_soc___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim_soc_verilator.v", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsim_soc___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsim_soc___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsim_soc___024root___eval_debug_assertions(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_debug_assertions\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
