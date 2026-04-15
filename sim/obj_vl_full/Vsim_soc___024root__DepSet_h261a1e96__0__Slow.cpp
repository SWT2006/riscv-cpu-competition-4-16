// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_soc.h for the primary calling header

#include "Vsim_soc__pch.h"
#include "Vsim_soc___024root.h"

VL_ATTR_COLD void Vsim_soc___024root___eval_static(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_static\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsim_soc___024root___eval_initial__TOP(Vsim_soc___024root* vlSelf);

VL_ATTR_COLD void Vsim_soc___024root___eval_initial(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_initial\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsim_soc___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vsim_soc___024root___eval_initial__TOP(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_initial__TOP\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ sim_soc__DOT__ii;
    sim_soc__DOT__ii = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    sim_soc__DOT__ii = 0U;
    while (VL_GTS_III(32, 0x1000U, sim_soc__DOT__ii)) {
        vlSelfRef.sim_soc__DOT__imem[(0xfffU & sim_soc__DOT__ii)] = 0x13U;
        sim_soc__DOT__ii = ((IData)(1U) + sim_soc__DOT__ii);
    }
    sim_soc__DOT__ii = 0U;
    while (VL_GTS_III(32, 0x10000U, sim_soc__DOT__ii)) {
        vlSelfRef.sim_soc__DOT__dmem[(0xffffU & sim_soc__DOT__ii)] = 0U;
        sim_soc__DOT__ii = ((IData)(1U) + sim_soc__DOT__ii);
    }
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x69726f6dU;
    __Vtemp_1[2U] = 0x7263305fU;
    __Vtemp_1[3U] = 0x73U;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelfRef.sim_soc__DOT__imem)
                 , 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x6472616dU;
    __Vtemp_2[2U] = 0x7263305fU;
    __Vtemp_2[3U] = 0x73U;
    VL_READMEM_N(true, 32, 65536, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_2)
                 ,  &(vlSelfRef.sim_soc__DOT__dmem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vsim_soc___024root___eval_final(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_final\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsim_soc___024root___eval_settle(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_settle\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_soc___024root___dump_triggers__act(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___dump_triggers__act\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_soc___024root___dump_triggers__nba(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___dump_triggers__nba\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsim_soc___024root___ctor_var_reset(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___ctor_var_reset\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = 0;
    vlSelf->rst_n = 0;
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->sim_soc__DOT__imem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->sim_soc__DOT__dmem[__Vi0] = 0;
    }
}
