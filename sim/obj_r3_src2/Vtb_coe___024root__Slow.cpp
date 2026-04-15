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
