// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsim_soc__pch.h"

//============================================================
// Constructors

Vsim_soc::Vsim_soc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsim_soc__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsim_soc::Vsim_soc(const char* _vcname__)
    : Vsim_soc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsim_soc::~Vsim_soc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsim_soc___024root___eval_debug_assertions(Vsim_soc___024root* vlSelf);
#endif  // VL_DEBUG
void Vsim_soc___024root___eval_static(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___eval_initial(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___eval_settle(Vsim_soc___024root* vlSelf);
void Vsim_soc___024root___eval(Vsim_soc___024root* vlSelf);

void Vsim_soc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsim_soc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsim_soc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsim_soc___024root___eval_static(&(vlSymsp->TOP));
        Vsim_soc___024root___eval_initial(&(vlSymsp->TOP));
        Vsim_soc___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsim_soc___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsim_soc::eventsPending() { return false; }

uint64_t Vsim_soc::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsim_soc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsim_soc___024root___eval_final(Vsim_soc___024root* vlSelf);

VL_ATTR_COLD void Vsim_soc::final() {
    Vsim_soc___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsim_soc::hierName() const { return vlSymsp->name(); }
const char* Vsim_soc::modelName() const { return "Vsim_soc"; }
unsigned Vsim_soc::threads() const { return 1; }
void Vsim_soc::prepareClone() const { contextp()->prepareClone(); }
void Vsim_soc::atClone() const {
    contextp()->threadPoolpOnClone();
}
