// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_coe.h for the primary calling header

#include "Vtb_coe__pch.h"
#include "Vtb_coe___024root.h"

VL_ATTR_COLD void Vtb_coe___024root___eval_static__TOP(Vtb_coe___024root* vlSelf);

VL_ATTR_COLD void Vtb_coe___024root___eval_static(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___eval_static\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_coe___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_coe__DOT__clk__0 = 0U;
}

VL_ATTR_COLD void Vtb_coe___024root___eval_static__TOP(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___eval_static__TOP\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_coe__DOT__clk = 0U;
    vlSelfRef.tb_coe__DOT__rst_n = 0U;
    vlSelfRef.tb_coe__DOT__cycle_count = 0U;
    vlSelfRef.tb_coe__DOT__stable_count = 0U;
    vlSelfRef.tb_coe__DOT__prev_pc = 0xffffffffU;
    vlSelfRef.tb_coe__DOT__prev2_pc = 0xffffffffU;
    vlSelfRef.tb_coe__DOT__prev3_pc = 0xffffffffU;
}

VL_ATTR_COLD void Vtb_coe___024root___eval_final(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___eval_final\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_coe___024root___dump_triggers__stl(Vtb_coe___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_coe___024root___eval_phase__stl(Vtb_coe___024root* vlSelf);

VL_ATTR_COLD void Vtb_coe___024root___eval_settle(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___eval_settle\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_coe___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_debug.v", 25, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_coe___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_coe___024root___dump_triggers__stl(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___dump_triggers__stl\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_coe___024root___stl_sequent__TOP__0(Vtb_coe___024root* vlSelf);

VL_ATTR_COLD void Vtb_coe___024root___eval_stl(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___eval_stl\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_coe___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_coe___024root___stl_sequent__TOP__0(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___stl_sequent__TOP__0\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_coe__DOT__u_soc__DOT__dram_cur;
    tb_coe__DOT__u_soc__DOT__dram_cur = 0;
    CData/*1:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__forward_a;
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__forward_a = 0;
    CData/*1:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__forward_b;
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__forward_b = 0;
    CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_fwd__DOT____VdfgRegularize_h796461b2_0_0;
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_fwd__DOT____VdfgRegularize_h796461b2_0_0 = 0;
    CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_fwd__DOT____VdfgRegularize_h796461b2_0_1;
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_fwd__DOT____VdfgRegularize_h796461b2_0_1 = 0;
    IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__exmem_fwd;
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__exmem_fwd = 0;
    IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a;
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a = 0;
    IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b;
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b = 0;
    QData/*63:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_ss;
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_ss = 0;
    CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT____VdfgRegularize_h19f1c447_0_3;
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT____VdfgRegularize_h19f1c447_0_3 = 0;
    IData/*31:0*/ __VdfgRegularize_ha8957302_0_2;
    __VdfgRegularize_ha8957302_0_2 = 0;
    IData/*31:0*/ __VdfgRegularize_ha8957302_0_3;
    __VdfgRegularize_ha8957302_0_3 = 0;
    IData/*31:0*/ __VdfgRegularize_ha8957302_0_4;
    __VdfgRegularize_ha8957302_0_4 = 0;
    // Body
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_mret = 0U;
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_ecall = 0U;
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_auipc = 0U;
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_jalr = 0U;
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_jal = 0U;
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_branch = 0U;
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_wb_sel = 0U;
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_reg_write = 0U;
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_mem_write = 0U;
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_mem_read = 0U;
    if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                  >> 6U)))) {
        if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                      >> 5U)))) {
            if ((0x10U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                        if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                            if ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_auipc = 1U;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                            if ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_mem_read = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
            if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                            if ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_mem_write = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_src = 0U;
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_op = 0U;
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_csr_op = 0U;
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__stall 
        = ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_mem_read) 
           & ((0U != (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rd_addr)) 
              & (((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rd_addr) 
                  == (0x1fU & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                               >> 0xfU))) | ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rd_addr) 
                                             == (0x1fU 
                                                 & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                    >> 0x14U))))));
    if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
        if ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
            __VdfgRegularize_ha8957302_0_4 = (0xfffff000U 
                                              & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction);
            __VdfgRegularize_ha8957302_0_2 = (((- (IData)(
                                                          (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                 >> 0x14U));
        } else {
            __VdfgRegularize_ha8957302_0_4 = 0U;
            __VdfgRegularize_ha8957302_0_2 = 0U;
        }
    } else {
        __VdfgRegularize_ha8957302_0_4 = 0U;
        __VdfgRegularize_ha8957302_0_2 = 0U;
    }
    vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_sel = (
                                                   (0x80100000U 
                                                    <= vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result) 
                                                   & (0x80140000U 
                                                      > vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result));
    tb_coe__DOT__u_soc__DOT__dram_cur = vlSelfRef.tb_coe__DOT__u_soc__DOT__dmem
        [(0xffffU & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result 
                     >> 2U))];
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__exmem_fwd 
        = ((2U == (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_wb_sel))
            ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_pc_plus4
            : vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result);
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__wb_write_data 
        = ((1U == (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_wb_sel))
            ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_mem_data
            : ((2U == (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_wb_sel))
                ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_pc_plus4
                : vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_alu_result));
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_fwd__DOT____VdfgRegularize_h796461b2_0_0 
        = ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_reg_write) 
           & (0U != (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rd_addr)));
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_fwd__DOT____VdfgRegularize_h796461b2_0_1 
        = ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_reg_write) 
           & (0U != (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_rd_addr)));
    vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_wdata = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rs2_data;
    if ((0U == (3U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_funct3)))) {
        vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_wdata 
            = ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result)
                ? ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result)
                    ? ((vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rs2_data 
                        << 0x18U) | (0xffffffU & tb_coe__DOT__u_soc__DOT__dram_cur))
                    : ((0xff000000U & tb_coe__DOT__u_soc__DOT__dram_cur) 
                       | ((0xff0000U & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rs2_data 
                                        << 0x10U)) 
                          | (0xffffU & tb_coe__DOT__u_soc__DOT__dram_cur))))
                : ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result)
                    ? ((0xffff0000U & tb_coe__DOT__u_soc__DOT__dram_cur) 
                       | ((0xff00U & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rs2_data 
                                      << 8U)) | (0xffU 
                                                 & tb_coe__DOT__u_soc__DOT__dram_cur)))
                    : ((0xffffff00U & tb_coe__DOT__u_soc__DOT__dram_cur) 
                       | (0xffU & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rs2_data))));
    } else if ((1U == (3U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_funct3)))) {
        if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result)) {
            if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result)) {
                vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_wdata 
                    = ((vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rs2_data 
                        << 0x10U) | (0xffffU & tb_coe__DOT__u_soc__DOT__dram_cur));
            }
        } else {
            vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_wdata 
                = ((0xffff0000U & tb_coe__DOT__u_soc__DOT__dram_cur) 
                   | (0xffffU & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rs2_data));
        }
    } else {
        vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_wdata 
            = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rs2_data;
    }
    vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_rdata = 0U;
    if (vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_sel) {
        if ((0U == (3U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_funct3)))) {
            vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_rdata 
                = ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result)
                    ? ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result)
                        ? VL_SHIFTR_III(32,32,32, vlSelfRef.tb_coe__DOT__u_soc__DOT__dmem
                                        [(0xffffU & 
                                          (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result 
                                           >> 2U))], 0x18U)
                        : (0xffU & (vlSelfRef.tb_coe__DOT__u_soc__DOT__dmem
                                    [(0xffffU & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result 
                                                 >> 2U))] 
                                    >> 0x10U))) : (
                                                   (1U 
                                                    & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result)
                                                    ? 
                                                   (0xffU 
                                                    & (vlSelfRef.tb_coe__DOT__u_soc__DOT__dmem
                                                       [
                                                       (0xffffU 
                                                        & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result 
                                                           >> 2U))] 
                                                       >> 8U))
                                                    : 
                                                   (0xffU 
                                                    & vlSelfRef.tb_coe__DOT__u_soc__DOT__dmem
                                                    [
                                                    (0xffffU 
                                                     & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result 
                                                        >> 2U))])));
        } else if ((1U == (3U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_funct3)))) {
            if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result)) {
                if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result)) {
                    vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_rdata 
                        = VL_SHIFTR_III(32,32,32, vlSelfRef.tb_coe__DOT__u_soc__DOT__dmem
                                        [(0xffffU & 
                                          (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result 
                                           >> 2U))], 0x10U);
                }
            } else {
                vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_rdata 
                    = (0xffffU & vlSelfRef.tb_coe__DOT__u_soc__DOT__dmem
                       [(0xffffU & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result 
                                    >> 2U))]);
            }
        } else {
            vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_rdata 
                = tb_coe__DOT__u_soc__DOT__dram_cur;
        }
    }
    __VdfgRegularize_ha8957302_0_3 = ((4U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                       ? 0U : __VdfgRegularize_ha8957302_0_2);
    if ((0x40U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
        if ((0x20U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
            if ((0x10U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                            if ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                                if ((0U == (7U & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                  >> 0xcU)))) {
                                    if ((0U != (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                >> 0x14U))) {
                                        if ((1U != 
                                             (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                              >> 0x14U))) {
                                            if ((0x302U 
                                                 == 
                                                 (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                  >> 0x14U))) {
                                                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_mret = 1U;
                                            }
                                        }
                                    }
                                    if ((0U == (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                >> 0x14U))) {
                                        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_ecall = 1U;
                                    } else if ((1U 
                                                == 
                                                (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                 >> 0x14U))) {
                                        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_ecall = 1U;
                                    }
                                }
                                if ((0U != (7U & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                  >> 0xcU)))) {
                                    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_reg_write = 1U;
                                    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_csr_op = 1U;
                                }
                            }
                        }
                    }
                }
                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_imm 
                    = ((8U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                        ? 0U : __VdfgRegularize_ha8957302_0_3);
            } else if ((8U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                if ((4U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                    if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                        if ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                            vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_reg_write = 1U;
                            vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_imm 
                                = ((((- (IData)((vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                 >> 0x1fU))) 
                                     << 0x15U) | (0x100000U 
                                                  & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                     >> 0xbU))) 
                                   | (((0xff000U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction) 
                                       | (0x800U & 
                                          (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                           >> 9U))) 
                                      | (0x7feU & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                   >> 0x14U))));
                        } else {
                            vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_imm = 0U;
                        }
                    } else {
                        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_imm = 0U;
                    }
                } else {
                    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_imm = 0U;
                }
            } else if ((4U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                    if ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_reg_write = 1U;
                    }
                }
                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_imm 
                    = __VdfgRegularize_ha8957302_0_2;
            } else {
                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_imm 
                    = ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                        ? ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                            ? (((- (IData)((vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                            >> 0x1fU))) 
                                << 0xdU) | (((0x1000U 
                                              & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                 >> 0x13U)) 
                                             | (0x800U 
                                                & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                   << 4U))) 
                                            | ((0x7e0U 
                                                & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                     >> 7U)))))
                            : 0U) : 0U);
            }
            if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                        if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                            if ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_jalr = 1U;
                                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_src = 1U;
                                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_op = 0U;
                            }
                        }
                    } else if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                        if ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                            vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_op = 1U;
                        }
                    }
                    if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                            if ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_branch = 1U;
                            }
                        }
                    }
                }
                if ((8U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                    if ((4U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                        if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                            if ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_jal = 1U;
                                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_wb_sel = 2U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                    if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                        if ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                            vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_wb_sel = 2U;
                        }
                    }
                }
            }
        } else {
            vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_imm = 0U;
        }
    } else {
        if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                      >> 5U)))) {
            if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                          >> 4U)))) {
                if ((8U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                    if ((4U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                        if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                            if ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_jal = 1U;
                            }
                        }
                    }
                }
                if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                            if ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_wb_sel = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
            if ((0x10U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                        if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                            if ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_reg_write = 1U;
                                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_src = 1U;
                                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_op = 0xaU;
                            }
                        }
                    } else if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                        if ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                            vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_reg_write = 1U;
                            vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_op 
                                = ((1U == (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                           >> 0x19U))
                                    ? ((0x4000U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                        ? ((0x2000U 
                                            & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                            ? ((0x1000U 
                                                & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                                ? 0x12U
                                                : 0x11U)
                                            : ((0x1000U 
                                                & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                                ? 0x10U
                                                : 0xfU))
                                        : ((0x2000U 
                                            & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                            ? ((0x1000U 
                                                & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                                ? 0xeU
                                                : 0xdU)
                                            : ((0x1000U 
                                                & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                                ? 0xcU
                                                : 0xbU)))
                                    : ((0x4000U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                        ? ((0x2000U 
                                            & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                            ? ((0x1000U 
                                                & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                                ? 9U
                                                : 8U)
                                            : ((0x1000U 
                                                & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                                ? (
                                                   (0x40000000U 
                                                    & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                                    ? 7U
                                                    : 6U)
                                                : 5U))
                                        : ((0x2000U 
                                            & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                            ? ((0x1000U 
                                                & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                                ? 4U
                                                : 3U)
                                            : ((0x1000U 
                                                & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                                ? 2U
                                                : (
                                                   (0x40000000U 
                                                    & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                                    ? 1U
                                                    : 0U)))));
                        }
                    }
                }
                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_imm 
                    = ((8U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                        ? 0U : ((4U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                 ? __VdfgRegularize_ha8957302_0_4
                                 : 0U));
            } else {
                if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                            if ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_src = 1U;
                                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_op = 0U;
                            }
                        }
                    }
                }
                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_imm 
                    = ((8U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                        ? 0U : ((4U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                 ? 0U : ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                          ? ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                              ? (((- (IData)(
                                                             (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0xfe0U 
                                                     & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                          >> 7U))))
                                              : 0U)
                                          : 0U)));
            }
        } else if ((0x10U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
            if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                          >> 3U)))) {
                if ((4U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                    if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                        if ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                            vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_reg_write = 1U;
                            vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_src = 1U;
                            vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_op = 0U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                    if ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_reg_write = 1U;
                        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_src = 1U;
                        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_op 
                            = ((0x4000U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                ? ((0x2000U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                    ? ((0x1000U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                        ? 9U : 8U) : 
                                   ((0x1000U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                     ? ((0x40000000U 
                                         & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                         ? 7U : 6U)
                                     : 5U)) : ((0x2000U 
                                                & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                                    ? 4U
                                                    : 3U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                                    ? 2U
                                                    : 0U)));
                    }
                }
            }
            vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_imm 
                = ((8U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                    ? 0U : ((4U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                             ? __VdfgRegularize_ha8957302_0_4
                             : __VdfgRegularize_ha8957302_0_2));
        } else {
            if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                        if ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)) {
                            vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_reg_write = 1U;
                            vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_src = 1U;
                            vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_op = 0U;
                        }
                    }
                }
            }
            vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_imm 
                = ((8U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                    ? ((4U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                        ? ((2U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                            ? ((1U & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction)
                                ? 4U : 0U) : 0U) : 0U)
                    : __VdfgRegularize_ha8957302_0_3);
        }
    }
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__forward_b 
        = (((IData)(tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_fwd__DOT____VdfgRegularize_h796461b2_0_0) 
            & ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rd_addr) 
               == (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs2_addr)))
            ? 2U : (((IData)(tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_fwd__DOT____VdfgRegularize_h796461b2_0_1) 
                     & ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs2_addr) 
                        == (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_rd_addr)))
                     ? 1U : 0U));
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__forward_a 
        = (((IData)(tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_fwd__DOT____VdfgRegularize_h796461b2_0_0) 
            & ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rd_addr) 
               == (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs1_addr)))
            ? 2U : (((IData)(tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_fwd__DOT____VdfgRegularize_h796461b2_0_1) 
                     & ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs1_addr) 
                        == (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_rd_addr)))
                     ? 1U : 0U));
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b 
        = ((2U == (IData)(tb_coe__DOT__u_soc__DOT__u_cpu__DOT__forward_b))
            ? tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__exmem_fwd
            : ((1U == (IData)(tb_coe__DOT__u_soc__DOT__u_cpu__DOT__forward_b))
                ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__wb_write_data
                : vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs2_data));
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a 
        = ((2U == (IData)(tb_coe__DOT__u_soc__DOT__u_cpu__DOT__forward_a))
            ? tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__exmem_fwd
            : ((1U == (IData)(tb_coe__DOT__u_soc__DOT__u_cpu__DOT__forward_a))
                ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__wb_write_data
                : vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs1_data));
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b 
        = ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_src)
            ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_imm
            : vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b);
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd 
        = ((4U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_funct3))
            ? ((2U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_funct3))
                ? ((1U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_funct3))
                    ? ((~ (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs1_addr)) 
                       & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_rdata)
                    : (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_rdata 
                       | (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs1_addr)))
                : ((1U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_funct3))
                    ? (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs1_addr)
                    : vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a))
            : ((2U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_funct3))
                ? ((1U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_funct3))
                    ? ((~ vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a) 
                       & vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_rdata)
                    : (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_rdata 
                       | vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a))
                : vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a));
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ex_branch_taken 
        = ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_jal) 
           | ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_jalr) 
              | (((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_branch) 
                  & ((4U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_funct3))
                      ? ((2U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_funct3))
                          ? ((1U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_funct3))
                              ? (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a 
                                 >= vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b)
                              : (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a 
                                 < vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b))
                          : ((1U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_funct3))
                              ? VL_GTES_III(32, vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a, vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b)
                              : VL_LTS_III(32, vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a, vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b)))
                      : ((~ ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_funct3) 
                             >> 1U)) & ((1U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_funct3))
                                         ? (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a 
                                            != vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b)
                                         : (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a 
                                            == vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b))))) 
                 | ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_ecall) 
                    | (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_mret)))));
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
        = ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_auipc)
            ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_pc
            : vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a);
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT____Vcellinp__u_pipe_idex__flush 
        = ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ex_branch_taken) 
           | (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__stall));
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_ss 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a), 
                      VL_EXTENDS_QI(64,32, tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b));
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT____VdfgRegularize_h19f1c447_0_3 
        = ((0x80000000U == tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a) 
           & (0xffffffffU == tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b));
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ex_alu_result 
        = ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_op)
            ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_rdata
            : ((0x10U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                ? ((8U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                    ? 0U : ((4U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                             ? 0U : ((2U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                                      ? ((1U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                                          ? 0U : ((0U 
                                                   == tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                                                   ? tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a
                                                   : 
                                                  VL_MODDIV_III(32, tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a, tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)))
                                      : ((1U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                                          ? ((0U == tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                                              ? tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a
                                              : ((IData)(tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT____VdfgRegularize_h19f1c447_0_3)
                                                  ? 0U
                                                  : 
                                                 VL_MODDIVS_III(32, tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a, tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)))
                                          : ((0U == tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                                              ? 0xffffffffU
                                              : VL_DIV_III(32, tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a, tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b))))))
                : ((8U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                    ? ((4U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                        ? ((2U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                            ? ((1U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                                ? ((0U == tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                                    ? 0xffffffffU : 
                                   ((IData)(tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT____VdfgRegularize_h19f1c447_0_3)
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a, tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)))
                                : (IData)((((QData)((IData)(tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a)) 
                                            * (QData)((IData)(tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b))) 
                                           >> 0x20U)))
                            : ((1U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                                ? (IData)((VL_MULS_QQQ(64, 
                                                       VL_EXTENDS_QI(64,32, tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a), 
                                                       VL_EXTENDS_QQ(64,33, (QData)((IData)(tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)))) 
                                           >> 0x20U))
                                : (IData)((tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_ss 
                                           >> 0x20U))))
                        : ((2U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                            ? ((1U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                                ? (IData)(tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_ss)
                                : tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                            : ((1U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                                ? (tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                                   & tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                                : (tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                                   | tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b))))
                    : ((4U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                        ? ((2U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                            ? ((1U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                                ? VL_SHIFTRS_III(32,32,5, tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a, 
                                                 (0x1fU 
                                                  & tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b))
                                : (tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                                   >> (0x1fU & tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)))
                            : ((1U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                                ? (tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                                   ^ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                                : ((tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                                    < tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                                    ? 1U : 0U))) : 
                       ((2U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                         ? ((1U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                             ? (VL_LTS_III(32, tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a, tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                                 ? 1U : 0U) : (tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                                               << (0x1fU 
                                                   & tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)))
                         : ((1U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op))
                             ? (tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                                - tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)
                             : (tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
                                + tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b)))))));
}

VL_ATTR_COLD void Vtb_coe___024root___eval_triggers__stl(Vtb_coe___024root* vlSelf);

VL_ATTR_COLD bool Vtb_coe___024root___eval_phase__stl(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___eval_phase__stl\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_coe___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_coe___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_coe___024root___dump_triggers__act(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___dump_triggers__act\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_coe.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_coe.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_coe___024root___dump_triggers__nba(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___dump_triggers__nba\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_coe.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_coe.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_coe___024root___ctor_var_reset(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___ctor_var_reset\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_coe__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11175323561368790762ull);
    vlSelf->tb_coe__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4875943380913397316ull);
    vlSelf->tb_coe__DOT__cycle_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1449900751340590963ull);
    vlSelf->tb_coe__DOT__stable_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2994521731514809953ull);
    vlSelf->tb_coe__DOT__prev_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7978136103391170824ull);
    vlSelf->tb_coe__DOT__prev2_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6741209962114531344ull);
    vlSelf->tb_coe__DOT__prev3_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2613463129597320045ull);
    vlSelf->tb_coe__DOT__dump_registers__Vstatic__rv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9815199895518162596ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->tb_coe__DOT__u_soc__DOT__imem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18407973728860055415ull);
    }
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->tb_coe__DOT__u_soc__DOT__dmem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16666657210157731879ull);
    }
    vlSelf->tb_coe__DOT__u_soc__DOT__dram_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1094977531419695754ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__dram_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17774258059628903428ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__dram_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1842628558065399113ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12584404026823911495ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12459743712618890078ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8171128084158004305ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11982526246698581818ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2894073420812071599ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_op = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18127057932612261853ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9374921628400859097ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11502121344071690104ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4988141368590544425ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2465365159563407674ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16035360127850035517ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4904866518626362625ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8759978018797422276ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 388076773714827182ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13954737713526603667ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 434690437653991988ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6134533745921121814ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_csr_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9857362532648539440ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7952013259466678132ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17572612678681554578ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13105856577852348357ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2764361939523413501ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2027836917068126773ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13472195922194957737ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4289116796622486003ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4359647297324659076ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2321622046129981106ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2077887729585896799ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4736092161437803192ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5796669386729019809ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14888270671375703041ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8262965490826871710ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 650726289001374480ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13112602821543727920ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5688632411564165774ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17893068741244367761ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4868699606339073470ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16605105443083734102ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2790315402394576053ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18319459113486562379ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6010925236205714710ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 756729046560983008ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2541414920654435360ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ex_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15701215399872085571ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ex_branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6735508655961019978ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 694342285622181673ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5660812662908108957ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10068282306693600361ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15860111541334167012ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1632053304983547969ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12109081481334933899ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 278753246808643903ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3065259040695873084ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16090733886354982439ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12872028807286812517ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3925561462189336323ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_mem_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15572252848183124087ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12046811404030630643ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5818393101912172943ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6001920735993588782ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__wb_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 561836986352864539ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7808726306971928600ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__csr_mtvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4779843921944576046ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__csr_mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11527556279934412023ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT____Vcellinp__u_pipe_idex__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9531237616911479421ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mcause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6053304410276505393ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mstatus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1283061071309479927ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mtval = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18205865894417463877ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mscratch = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2287619501208677789ull);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14203080584636569683ull);
    }
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT____Vlvbound_h5af0bf87__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16019389389250384800ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 606290337993046451ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10569839279843549966ull);
    vlSelf->tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13451543041779923406ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_coe__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15151637909997854142ull);
}
