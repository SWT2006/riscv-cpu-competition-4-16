// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_soc.h for the primary calling header

#include "Vsim_soc__pch.h"
#include "Vsim_soc__Syms.h"
#include "Vsim_soc___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_soc___024root___dump_triggers__ico(Vsim_soc___024root* vlSelf);
#endif  // VL_DEBUG

void Vsim_soc___024root___eval_triggers__ico(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_triggers__ico\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsim_soc___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_soc___024root___dump_triggers__act(Vsim_soc___024root* vlSelf);
#endif  // VL_DEBUG

void Vsim_soc___024root___eval_triggers__act(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_triggers__act\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.sim_soc__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_soc__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_if__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_csr__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(7U, ((IData)(vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__sim_soc__DOT__clk__0 
        = vlSelfRef.sim_soc__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_if__DOT__clk__0 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_if__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__clk__0 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_csr__DOT__clk__0 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_csr__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__clk__0 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__clk__0 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__clk__0 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__clk__0 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsim_soc___024root___dump_triggers__act(vlSelf);
    }
#endif
}
