// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_coe.h for the primary calling header

#include "Vtb_coe__pch.h"
#include "Vtb_coe__Syms.h"
#include "Vtb_coe___024root.h"

void Vtb_coe___024root___ctor_var_reset(Vtb_coe___024root* vlSelf);

Vtb_coe___024root::Vtb_coe___024root(Vtb_coe__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , __Vm_mtaskstate_16(1U)
    , __Vm_mtaskstate_19(1U)
    , __Vm_mtaskstate_21(1U)
    , __Vm_mtaskstate_26(1U)
    , __Vm_mtaskstate_17(2U)
    , __Vm_mtaskstate_25(3U)
    , __Vm_mtaskstate_15(1U)
    , __Vm_mtaskstate_8(1U)
    , __Vm_mtaskstate_20(2U)
    , __Vm_mtaskstate_27(1U)
    , __Vm_mtaskstate_13(2U)
    , __Vm_mtaskstate_24(2U)
    , __Vm_mtaskstate_22(2U)
    , __Vm_mtaskstate_final__0nba(4U)
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_coe___024root___ctor_var_reset(this);
}

void Vtb_coe___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_coe___024root::~Vtb_coe___024root() {
}
