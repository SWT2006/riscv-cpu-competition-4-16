// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_soc.h for the primary calling header

#include "Vsim_soc__pch.h"
#include "Vsim_soc___024root.h"

void Vsim_soc___024root___eval_act(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_act\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsim_soc___024root___eval_nba(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_nba\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsim_soc___024root___eval_triggers__act(Vsim_soc___024root* vlSelf);

bool Vsim_soc___024root___eval_phase__act(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_phase__act\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
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
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
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
