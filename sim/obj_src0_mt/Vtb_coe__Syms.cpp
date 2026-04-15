// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_coe__pch.h"
#include "Vtb_coe.h"
#include "Vtb_coe___024root.h"

// FUNCTIONS
Vtb_coe__Syms::~Vtb_coe__Syms()
{
}

Vtb_coe__Syms::Vtb_coe__Syms(VerilatedContext* contextp, const char* namep, Vtb_coe* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_threadPoolp{static_cast<VlThreadPool*>(contextp->threadPoolp())}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(155);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
