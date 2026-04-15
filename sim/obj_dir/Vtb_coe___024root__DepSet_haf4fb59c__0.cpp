// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_coe.h for the primary calling header

#include "Vtb_coe__pch.h"
#include "Vtb_coe___024root.h"

VlCoroutine Vtb_coe___024root___eval_initial__TOP__Vtiming__0(Vtb_coe___024root* vlSelf);
VlCoroutine Vtb_coe___024root___eval_initial__TOP__Vtiming__1(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root___eval_initial(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___eval_initial\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_coe___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_coe___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_coe___024root___eval_initial__TOP__Vtiming__0(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_coe__DOT__i;
    tb_coe__DOT__i = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    tb_coe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x1000U, tb_coe__DOT__i)) {
        vlSelfRef.tb_coe__DOT__u_soc__DOT__imem[(0xfffU 
                                                 & tb_coe__DOT__i)] = 0x13U;
        tb_coe__DOT__i = ((IData)(1U) + tb_coe__DOT__i);
    }
    tb_coe__DOT__i = 0U;
    while (VL_GTS_III(32, 0x10000U, tb_coe__DOT__i)) {
        vlSelfRef.tb_coe__DOT__u_soc__DOT__dmem[(0xffffU 
                                                 & tb_coe__DOT__i)] = 0U;
        tb_coe__DOT__i = ((IData)(1U) + tb_coe__DOT__i);
    }
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x69726f6dU;
    __Vtemp_1[2U] = 0x7263305fU;
    __Vtemp_1[3U] = 0x73U;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelfRef.tb_coe__DOT__u_soc__DOT__imem)
                 , 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x6472616dU;
    __Vtemp_2[2U] = 0x7263305fU;
    __Vtemp_2[3U] = 0x73U;
    VL_READMEM_N(true, 32, 65536, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_2)
                 ,  &(vlSelfRef.tb_coe__DOT__u_soc__DOT__dmem)
                 , 0, ~0ULL);
    vlSelfRef.tb_coe__DOT__rst_n = 0U;
    co_await vlSelfRef.__VtrigSched_hc3524d36__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_coe.clk)", 
                                                         "tb_coe.v", 
                                                         73);
    co_await vlSelfRef.__VtrigSched_hc3524d36__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_coe.clk)", 
                                                         "tb_coe.v", 
                                                         73);
    co_await vlSelfRef.__VtrigSched_hc3524d36__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_coe.clk)", 
                                                         "tb_coe.v", 
                                                         73);
    co_await vlSelfRef.__VtrigSched_hc3524d36__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_coe.clk)", 
                                                         "tb_coe.v", 
                                                         73);
    co_await vlSelfRef.__VtrigSched_hc3524d36__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_coe.clk)", 
                                                         "tb_coe.v", 
                                                         73);
    co_await vlSelfRef.__VtrigSched_hc3524d36__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_coe.clk)", 
                                                         "tb_coe.v", 
                                                         73);
    co_await vlSelfRef.__VtrigSched_hc3524d36__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_coe.clk)", 
                                                         "tb_coe.v", 
                                                         73);
    co_await vlSelfRef.__VtrigSched_hc3524d36__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_coe.clk)", 
                                                         "tb_coe.v", 
                                                         73);
    co_await vlSelfRef.__VtrigSched_hc3524d36__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_coe.clk)", 
                                                         "tb_coe.v", 
                                                         73);
    co_await vlSelfRef.__VtrigSched_hc3524d36__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_coe.clk)", 
                                                         "tb_coe.v", 
                                                         73);
    co_await vlSelfRef.__VtrigSched_hc3524bf7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_coe.clk)", 
                                                         "tb_coe.v", 
                                                         74);
    vlSelfRef.tb_coe__DOT__rst_n = 1U;
}

void Vtb_coe___024root___act_comb__TOP__0(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root___eval_act(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___eval_act\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_coe___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_coe___024root___act_comb__TOP__0(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___act_comb__TOP__0\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_coe__DOT__u_soc__DOT__dram_cur;
    tb_coe__DOT__u_soc__DOT__dram_cur = 0;
    // Body
    tb_coe__DOT__u_soc__DOT__dram_cur = vlSelfRef.tb_coe__DOT__u_soc__DOT__dmem
        [(0xffffU & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result 
                     >> 2U))];
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
}

void Vtb_coe___024root___nba_sequent__TOP__0(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root___eval_nba(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___eval_nba\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_coe___024root___nba_sequent__TOP__0(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___nba_sequent__TOP__0\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
    IData/*31:0*/ __Vdly__tb_coe__DOT__cycle_count;
    __Vdly__tb_coe__DOT__cycle_count = 0;
    IData/*31:0*/ __Vdly__tb_coe__DOT__stable_count;
    __Vdly__tb_coe__DOT__stable_count = 0;
    IData/*31:0*/ __Vdly__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc;
    __Vdly__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc = 0;
    IData/*31:0*/ __VdlyVal__tb_coe__DOT__u_soc__DOT__dmem__v0;
    __VdlyVal__tb_coe__DOT__u_soc__DOT__dmem__v0 = 0;
    SData/*15:0*/ __VdlyDim0__tb_coe__DOT__u_soc__DOT__dmem__v0;
    __VdlyDim0__tb_coe__DOT__u_soc__DOT__dmem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_coe__DOT__u_soc__DOT__dmem__v0;
    __VdlySet__tb_coe__DOT__u_soc__DOT__dmem__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0;
    __VdlyVal__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0;
    __VdlyDim0__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0;
    __VdlySet__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v1;
    __VdlySet__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v1 = 0;
    // Body
    __Vdly__tb_coe__DOT__cycle_count = vlSelfRef.tb_coe__DOT__cycle_count;
    __Vdly__tb_coe__DOT__stable_count = vlSelfRef.tb_coe__DOT__stable_count;
    __VdlySet__tb_coe__DOT__u_soc__DOT__dmem__v0 = 0U;
    __VdlySet__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0 = 0U;
    __VdlySet__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v1 = 0U;
    __Vdly__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc 
        = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc;
    if (vlSelfRef.tb_coe__DOT__rst_n) {
        __Vdly__tb_coe__DOT__cycle_count = ((IData)(1U) 
                                            + vlSelfRef.tb_coe__DOT__cycle_count);
        __Vdly__tb_coe__DOT__stable_count = (((vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc 
                                               == vlSelfRef.tb_coe__DOT__prev3_pc) 
                                              & (0xffffffffU 
                                                 != vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc))
                                              ? ((IData)(1U) 
                                                 + vlSelfRef.tb_coe__DOT__stable_count)
                                              : 0U);
        if (VL_UNLIKELY((VL_LTES_III(32, 0x14U, vlSelfRef.tb_coe__DOT__stable_count)))) {
            VL_WRITEF_NX("\n=== TEST: src0 ===\n  Terminated: self-loop at PC = 0x%08x after %0d cycles\n  Register file:\n",0,
                         32,vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc,
                         32,vlSelfRef.tb_coe__DOT__cycle_count);
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x1 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [1U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x2 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [2U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x3 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [3U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x4 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [4U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x5 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [5U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x6 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [6U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x7 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [7U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x8 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [8U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x9 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [9U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x10 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0xaU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x11 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0xbU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x12 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0xcU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x13 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0xdU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x14 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0xeU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x15 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0xfU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x16 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x10U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x17 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x11U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x18 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x12U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x19 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x13U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x20 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x14U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x21 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x15U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x22 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x16U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x23 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x17U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x24 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x18U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x25 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x19U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x26 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x1aU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x27 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x1bU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x28 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x1cU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x29 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x1dU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x30 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x1eU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x31 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            VL_WRITEF_NX("  RESULT: PASS\n",0);
            VL_FINISH_MT("tb_coe.v", 122, "");
        }
        vlSelfRef.tb_coe__DOT__prev3_pc = vlSelfRef.tb_coe__DOT__prev2_pc;
        if (VL_UNLIKELY((VL_LTES_III(32, 0x77359400U, vlSelfRef.tb_coe__DOT__cycle_count)))) {
            VL_WRITEF_NX("\n=== TEST: src0 ===\n  TIMEOUT after %0d cycles, PC = 0x%08x\n  Register file:\n",0,
                         32,vlSelfRef.tb_coe__DOT__cycle_count,
                         32,vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc);
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x1 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [1U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x2 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [2U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x3 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [3U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x4 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [4U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x5 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [5U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x6 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [6U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x7 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [7U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x8 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [8U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x9 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [9U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x10 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0xaU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x11 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0xbU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x12 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0xcU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x13 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0xdU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x14 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0xeU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x15 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0xfU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x16 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x10U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x17 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x11U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x18 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x12U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x19 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x13U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x20 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x14U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x21 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x15U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x22 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x16U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x23 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x17U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x24 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x18U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x25 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x19U];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x26 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x1aU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x27 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x1bU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x28 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x1cU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x29 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x1dU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x30 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                [0x1eU];
            if (VL_UNLIKELY(((0U != vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv)))) {
                VL_WRITEF_NX("    x31 = 0x%08x\n",0,
                             32,vlSelfRef.tb_coe__DOT__dump_registers__Vstatic__rv);
            }
            VL_WRITEF_NX("  RESULT: FAIL (timeout)\n",0);
            VL_FINISH_MT("tb_coe.v", 131, "");
        }
        vlSelfRef.tb_coe__DOT__prev2_pc = vlSelfRef.tb_coe__DOT__prev_pc;
        vlSelfRef.tb_coe__DOT__prev_pc = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc;
    } else {
        __Vdly__tb_coe__DOT__cycle_count = 0U;
        __Vdly__tb_coe__DOT__stable_count = 0U;
        vlSelfRef.tb_coe__DOT__prev_pc = 0xffffffffU;
        vlSelfRef.tb_coe__DOT__prev2_pc = 0xffffffffU;
        vlSelfRef.tb_coe__DOT__prev3_pc = 0xffffffffU;
    }
    if (((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_write) 
         & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_sel))) {
        __VdlyVal__tb_coe__DOT__u_soc__DOT__dmem__v0 
            = vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_wdata;
        __VdlyDim0__tb_coe__DOT__u_soc__DOT__dmem__v0 
            = (0xffffU & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result 
                          >> 2U));
        __VdlySet__tb_coe__DOT__u_soc__DOT__dmem__v0 = 1U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_coe__DOT__rst_n)) 
               | (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT____Vcellinp__u_pipe_idex__flush)))) {
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_funct3 = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs2_addr = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs1_addr = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs2_data = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs1_data = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_rdata = 0U;
    } else {
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op 
            = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_op;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_funct3 
            = (7U & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                     >> 0xcU));
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs2_addr 
            = (0x1fU & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                        >> 0x14U));
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs1_addr 
            = (0x1fU & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                        >> 0xfU));
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs2_data 
            = ((0U == (0x1fU & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                >> 0x14U))) ? 0U : 
               (((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_reg_write) 
                 & ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_rd_addr) 
                    == (0x1fU & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                 >> 0x14U)))) ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__wb_write_data
                 : ((0x1eU >= (0x1fU & ((vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                         >> 0x14U) 
                                        - (IData)(1U))))
                     ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                    [(0x1fU & ((vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                >> 0x14U) - (IData)(1U)))]
                     : 0U)));
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs1_data 
            = ((0U == (0x1fU & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                >> 0xfU))) ? 0U : (
                                                   ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_reg_write) 
                                                    & ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_rd_addr) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                           >> 0xfU))))
                                                    ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__wb_write_data
                                                    : 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & ((vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                          >> 0xfU) 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile
                                                    [
                                                    (0x1fU 
                                                     & ((vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                         >> 0xfU) 
                                                        - (IData)(1U)))]
                                                     : 0U)));
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_rdata 
            = (((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_op) 
                & ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_addr) 
                   == (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                       >> 0x14U))) ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd
                : ((0x300U == (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                               >> 0x14U)) ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mstatus
                    : ((0x305U == (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                   >> 0x14U)) ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__csr_mtvec
                        : ((0x340U == (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                       >> 0x14U)) ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mscratch
                            : ((0x341U == (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                           >> 0x14U))
                                ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__csr_mepc
                                : ((0x342U == (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                               >> 0x14U))
                                    ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mcause
                                    : ((0x343U == (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                                                   >> 0x14U))
                                        ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mtval
                                        : 0U)))))));
    }
    if (vlSelfRef.tb_coe__DOT__rst_n) {
        if (((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_reg_write) 
             & (0U != (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_rd_addr)))) {
            vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT____Vlvbound_h5af0bf87__0 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__wb_write_data;
            if ((0x1eU >= (0x1fU & ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_rd_addr) 
                                    - (IData)(1U))))) {
                __VdlyVal__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0 
                    = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT____Vlvbound_h5af0bf87__0;
                __VdlyDim0__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0 
                    = (0x1fU & ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_rd_addr) 
                                - (IData)(1U)));
                __VdlySet__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0 = 1U;
            }
        }
        if (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ex_branch_taken) {
            __Vdly__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc 
                = ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_mret)
                    ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__csr_mepc
                    : ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_ecall)
                        ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__csr_mtvec
                        : ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_jalr)
                            ? (0xfffffffeU & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_imm 
                                              + vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a))
                            : (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_imm 
                               + vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_pc))));
        } else if ((1U & (~ (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__stall)))) {
            __Vdly__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc 
                = ((IData)(4U) + vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc);
        }
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rs2_data 
            = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_alu_result 
            = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_wb_sel 
            = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_wb_sel;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_pc_plus4 
            = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_pc_plus4;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_mem_data 
            = ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_read)
                ? ((4U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_funct3))
                    ? ((2U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_funct3))
                        ? vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_rdata
                        : ((1U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_funct3))
                            ? (0xffffU & vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_rdata)
                            : (0xffU & vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_rdata)))
                    : ((2U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_funct3))
                        ? vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_rdata
                        : ((1U & (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_funct3))
                            ? (((- (IData)((1U & (vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_rdata 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_rdata))
                            : (((- (IData)((1U & (vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_rdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_rdata)))))
                : 0U);
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result 
            = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ex_alu_result;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_wb_sel 
            = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_wb_sel;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_pc_plus4 
            = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_pc_plus4;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_funct3 
            = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_mem_funct3;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_rd_addr 
            = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rd_addr;
        if (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_ecall) {
            vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mcause 
                = ((1U == (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_addr))
                    ? 3U : 0xbU);
            vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__csr_mepc 
                = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_pc;
        }
        if (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_op) {
            if ((0x300U == (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_addr))) {
                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mstatus 
                    = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd;
            }
            if ((0x300U != (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_addr))) {
                if ((0x305U != (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_addr))) {
                    if ((0x340U == (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_addr))) {
                        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mscratch 
                            = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd;
                    }
                    if ((0x340U != (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_addr))) {
                        if ((0x341U != (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_addr))) {
                            if ((0x342U == (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_addr))) {
                                if ((1U & (~ (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_ecall)))) {
                                    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mcause 
                                        = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd;
                                }
                            }
                            if ((0x342U != (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_addr))) {
                                if ((0x343U == (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_addr))) {
                                    if ((1U & (~ (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_ecall)))) {
                                        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mtval 
                                            = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd;
                                    }
                                }
                            }
                        }
                        if ((0x341U == (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_addr))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_ecall)))) {
                                vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__csr_mepc 
                                    = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd;
                            }
                        }
                    }
                }
                if ((0x305U == (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_addr))) {
                    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__csr_mtvec 
                        = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd;
                }
            }
        }
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rd_addr 
            = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rd_addr;
    } else {
        __VdlySet__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v1 = 1U;
        __Vdly__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc = 0x80000000U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rs2_data = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_alu_result = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_wb_sel = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_pc_plus4 = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_mem_data = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_wb_sel = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_pc_plus4 = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_funct3 = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_rd_addr = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mstatus = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mscratch = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__csr_mtvec = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mcause = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mtval = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__csr_mepc = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rd_addr = 0U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_coe__DOT__rst_n)) 
               | (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT____Vcellinp__u_pipe_idex__flush)))) {
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_imm = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_wb_sel = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_pc_plus4 = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_mem_funct3 = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_pc = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_addr = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rd_addr = 0U;
    } else {
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_imm 
            = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_imm;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_wb_sel 
            = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_wb_sel;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_pc_plus4 
            = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_pc_plus4;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_mem_funct3 
            = (7U & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                     >> 0xcU));
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_pc 
            = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_pc;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_addr 
            = (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
               >> 0x14U);
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rd_addr 
            = (0x1fU & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
                        >> 7U));
    }
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_branch 
        = ((1U & (~ ((~ (IData)(vlSelfRef.tb_coe__DOT__rst_n)) 
                     | (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT____Vcellinp__u_pipe_idex__flush)))) 
           && (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_branch));
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_jal 
        = ((1U & (~ ((~ (IData)(vlSelfRef.tb_coe__DOT__rst_n)) 
                     | (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT____Vcellinp__u_pipe_idex__flush)))) 
           && (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_jal));
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_src 
        = ((1U & (~ ((~ (IData)(vlSelfRef.tb_coe__DOT__rst_n)) 
                     | (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT____Vcellinp__u_pipe_idex__flush)))) 
           && (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_src));
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_auipc 
        = ((1U & (~ ((~ (IData)(vlSelfRef.tb_coe__DOT__rst_n)) 
                     | (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT____Vcellinp__u_pipe_idex__flush)))) 
           && (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_auipc));
    vlSelfRef.tb_coe__DOT__cycle_count = __Vdly__tb_coe__DOT__cycle_count;
    vlSelfRef.tb_coe__DOT__stable_count = __Vdly__tb_coe__DOT__stable_count;
    if (__VdlySet__tb_coe__DOT__u_soc__DOT__dmem__v0) {
        vlSelfRef.tb_coe__DOT__u_soc__DOT__dmem[__VdlyDim0__tb_coe__DOT__u_soc__DOT__dmem__v0] 
            = __VdlyVal__tb_coe__DOT__u_soc__DOT__dmem__v0;
    }
    if (__VdlySet__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0) {
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[__VdlyDim0__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0] 
            = __VdlyVal__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0;
    }
    if (__VdlySet__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v1) {
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0U] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[1U] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[2U] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[3U] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[4U] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[5U] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[6U] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[7U] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[8U] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[9U] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0xaU] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0xbU] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0xcU] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0xdU] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0xeU] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0xfU] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x10U] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x11U] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x12U] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x13U] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x14U] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x15U] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x16U] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x17U] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x18U] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x19U] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x1aU] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x1bU] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x1cU] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x1dU] = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[0x1eU] = 0U;
    }
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_write 
        = ((IData)(vlSelfRef.tb_coe__DOT__rst_n) && (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_mem_write));
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_mret 
        = ((1U & (~ ((~ (IData)(vlSelfRef.tb_coe__DOT__rst_n)) 
                     | (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT____Vcellinp__u_pipe_idex__flush)))) 
           && (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_mret));
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_jalr 
        = ((1U & (~ ((~ (IData)(vlSelfRef.tb_coe__DOT__rst_n)) 
                     | (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT____Vcellinp__u_pipe_idex__flush)))) 
           && (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_jalr));
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__wb_write_data 
        = ((1U == (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_wb_sel))
            ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_mem_data
            : ((2U == (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_wb_sel))
                ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_pc_plus4
                : vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_alu_result));
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_read 
        = ((IData)(vlSelfRef.tb_coe__DOT__rst_n) && (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_mem_read));
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_reg_write 
        = ((IData)(vlSelfRef.tb_coe__DOT__rst_n) && (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_reg_write));
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_mem_write 
        = ((1U & (~ ((~ (IData)(vlSelfRef.tb_coe__DOT__rst_n)) 
                     | (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT____Vcellinp__u_pipe_idex__flush)))) 
           && (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_mem_write));
    vlSelfRef.tb_coe__DOT__u_soc__DOT__dram_sel = (
                                                   (0x80100000U 
                                                    <= vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result) 
                                                   & (0x80140000U 
                                                      > vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result));
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__exmem_fwd 
        = ((2U == (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_wb_sel))
            ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_pc_plus4
            : vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result);
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_mem_read 
        = ((1U & (~ ((~ (IData)(vlSelfRef.tb_coe__DOT__rst_n)) 
                     | (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT____Vcellinp__u_pipe_idex__flush)))) 
           && (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_mem_read));
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_reg_write 
        = ((IData)(vlSelfRef.tb_coe__DOT__rst_n) && (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_reg_write));
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_fwd__DOT____VdfgRegularize_h796461b2_0_1 
        = ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_reg_write) 
           & (0U != (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_rd_addr)));
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_op 
        = ((1U & (~ ((~ (IData)(vlSelfRef.tb_coe__DOT__rst_n)) 
                     | (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT____Vcellinp__u_pipe_idex__flush)))) 
           && (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_csr_op));
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_ecall 
        = ((1U & (~ ((~ (IData)(vlSelfRef.tb_coe__DOT__rst_n)) 
                     | (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT____Vcellinp__u_pipe_idex__flush)))) 
           && (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_ecall));
    if ((1U & ((~ (IData)(vlSelfRef.tb_coe__DOT__rst_n)) 
               | (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ex_branch_taken)))) {
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_pc_plus4 = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_pc = 0U;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction = 0x13U;
    } else if ((1U & (~ (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__stall)))) {
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_pc_plus4 
            = ((IData)(4U) + vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc);
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_pc 
            = vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc;
        vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction 
            = vlSelfRef.tb_coe__DOT__u_soc__DOT__imem
            [(0xfffU & (vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc 
                        >> 2U))];
    }
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_reg_write 
        = ((1U & (~ ((~ (IData)(vlSelfRef.tb_coe__DOT__rst_n)) 
                     | (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT____Vcellinp__u_pipe_idex__flush)))) 
           && (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_reg_write));
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_fwd__DOT____VdfgRegularize_h796461b2_0_0 
        = ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_reg_write) 
           & (0U != (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rd_addr)));
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
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a 
        = ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_auipc)
            ? vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_pc
            : vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a);
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc 
        = __Vdly__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc;
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
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_ss 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a), 
                      VL_EXTENDS_QI(64,32, tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b));
    tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT____VdfgRegularize_h19f1c447_0_3 
        = ((0x80000000U == tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a) 
           & (0xffffffffU == tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b));
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
    vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT____Vcellinp__u_pipe_idex__flush 
        = ((IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ex_branch_taken) 
           | (IData)(vlSelfRef.tb_coe__DOT__u_soc__DOT__u_cpu__DOT__stall));
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
}

void Vtb_coe___024root___timing_resume(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___timing_resume\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hc3524d36__0.resume(
                                                   "@(posedge tb_coe.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hc3524bf7__0.resume(
                                                   "@(negedge tb_coe.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_coe___024root___timing_commit(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___timing_commit\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hc3524d36__0.commit(
                                                   "@(posedge tb_coe.clk)");
    }
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hc3524bf7__0.commit(
                                                   "@(negedge tb_coe.clk)");
    }
}

void Vtb_coe___024root___eval_triggers__act(Vtb_coe___024root* vlSelf);

bool Vtb_coe___024root___eval_phase__act(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___eval_phase__act\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_coe___024root___eval_triggers__act(vlSelf);
    Vtb_coe___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_coe___024root___timing_resume(vlSelf);
        Vtb_coe___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_coe___024root___eval_phase__nba(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___eval_phase__nba\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_coe___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_coe___024root___dump_triggers__nba(Vtb_coe___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_coe___024root___dump_triggers__act(Vtb_coe___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_coe___024root___eval(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___eval\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_coe___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_coe.v", 36, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_coe___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_coe.v", 36, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_coe___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_coe___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_coe___024root___eval_debug_assertions(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___eval_debug_assertions\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
