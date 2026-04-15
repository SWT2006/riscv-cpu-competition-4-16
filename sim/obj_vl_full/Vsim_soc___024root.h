// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim_soc.h for the primary calling header

#ifndef VERILATED_VSIM_SOC___024ROOT_H_
#define VERILATED_VSIM_SOC___024ROOT_H_  // guard

#include "verilated.h"


class Vsim_soc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_soc___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 4096> sim_soc__DOT__imem;
    VlUnpacked<IData/*31:0*/, 65536> sim_soc__DOT__dmem;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsim_soc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_soc___024root(Vsim_soc__Syms* symsp, const char* v__name);
    ~Vsim_soc___024root();
    VL_UNCOPYABLE(Vsim_soc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
