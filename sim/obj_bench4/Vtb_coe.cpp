// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_coe__pch.h"

//============================================================
// Constructors

Vtb_coe::Vtb_coe(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_coe__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_coe::Vtb_coe(const char* _vcname__)
    : Vtb_coe(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_coe::~Vtb_coe() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_coe___024root___eval_debug_assertions(Vtb_coe___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_coe___024root___eval_static(Vtb_coe___024root* vlSelf);
void Vtb_coe___024root___eval_initial(Vtb_coe___024root* vlSelf);
void Vtb_coe___024root___eval_settle(Vtb_coe___024root* vlSelf);
void Vtb_coe___024root___eval(Vtb_coe___024root* vlSelf);

void Vtb_coe::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_coe::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_coe___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_coe___024root___eval_static(&(vlSymsp->TOP));
        Vtb_coe___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_coe___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_coe___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_coe::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_coe::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_coe::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_coe___024root___eval_final(Vtb_coe___024root* vlSelf);

VL_ATTR_COLD void Vtb_coe::final() {
    Vtb_coe___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_coe::hierName() const { return vlSymsp->name(); }
const char* Vtb_coe::modelName() const { return "Vtb_coe"; }
unsigned Vtb_coe::threads() const { return 4; }
void Vtb_coe::prepareClone() const { contextp()->prepareClone(); }
void Vtb_coe::atClone() const {
    vlSymsp->__Vm_threadPoolp = static_cast<VlThreadPool*>(contextp()->threadPoolpOnClone());
}
