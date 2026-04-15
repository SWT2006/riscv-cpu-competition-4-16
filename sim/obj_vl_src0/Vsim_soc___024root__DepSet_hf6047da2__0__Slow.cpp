// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_soc.h for the primary calling header

#include "Vsim_soc__pch.h"
#include "Vsim_soc__Syms.h"
#include "Vsim_soc___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_soc___024root___dump_triggers__stl(Vsim_soc___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsim_soc___024root___eval_triggers__stl(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_triggers__stl\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsim_soc___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
