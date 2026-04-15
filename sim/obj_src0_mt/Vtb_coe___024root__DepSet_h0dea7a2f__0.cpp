// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_coe.h for the primary calling header

#include "Vtb_coe__pch.h"
#include "Vtb_coe__Syms.h"
#include "Vtb_coe___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_coe___024root___eval_initial__TOP__Vtiming__1(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_coe.v", 
                                             44);
        vlSelfRef.tb_coe__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_coe__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_coe___024root___dump_triggers__act(Vtb_coe___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_coe___024root___eval_triggers__act(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___eval_triggers__act\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_coe__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_coe__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_coe__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_coe__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_coe__DOT__clk__0 
        = vlSelfRef.tb_coe__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_coe___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtb_coe___024root____Vthread__nba__s0__t0(void* voidSelf, bool even_cycle);
void Vtb_coe___024root____Vthread__nba__s0__t1(void* voidSelf, bool even_cycle);
void Vtb_coe___024root____Vthread__nba__s0__t2(void* voidSelf, bool even_cycle);
void Vtb_coe___024root____Vthread__nba__s0__t3(void* voidSelf, bool even_cycle);

void Vtb_coe___024root___eval_nba(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root___eval_nba\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->__Vm_even_cycle__nba = !vlSymsp->__Vm_even_cycle__nba;
    vlSymsp->__Vm_threadPoolp->workerp(0)->addTask(&Vtb_coe___024root____Vthread__nba__s0__t0, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(1)->addTask(&Vtb_coe___024root____Vthread__nba__s0__t1, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(2)->addTask(&Vtb_coe___024root____Vthread__nba__s0__t2, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    Vtb_coe___024root____Vthread__nba__s0__t3(vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSelf->__Vm_mtaskstate_final__0nba.waitUntilUpstreamDone(vlSymsp->__Vm_even_cycle__nba);
    Verilated::mtaskId(0);
}

void Vtb_coe___024root___nba_sequent__TOP__0(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask0(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask0\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 0;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__0(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__1(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask1(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask1\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 1;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__1(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__5(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask5(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask5\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 5;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__5(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__6(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask6(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask6\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 6;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__6(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__7(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask7(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask7\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 7;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__7(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__8(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask8(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask8\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 8;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__8(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__9(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask9(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask9\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 9;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__9(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__13(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask13(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask13\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 13;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__13(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__14(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask14(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask14\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 14;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__14(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__15(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask15(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask15\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 15;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__15(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__16(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask16(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask16\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 16;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__16(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__17(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask17(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask17\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 17;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__17(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__18(Vtb_coe___024root* vlSelf);
void Vtb_coe___024root___act_comb__TOP__0(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask18(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask18\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 18;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__18(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___act_comb__TOP__0(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__19(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask19(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask19\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 19;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__19(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__20(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask20(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask20\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 20;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__20(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__21(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask21(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask21\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 21;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__21(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__22(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask22(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask22\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 22;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__22(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__23(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask23(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask23\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 23;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__23(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__24(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask24(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask24\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 24;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__24(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__25(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask25(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask25\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 25;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__25(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__26(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask26(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask26\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 26;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__26(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root___nba_sequent__TOP__27(Vtb_coe___024root* vlSelf);

void Vtb_coe___024root__nba_mtask27(Vtb_coe___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root__nba_mtask27\n"); );
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    static constexpr unsigned taskId = 27;
    Verilated::mtaskId(taskId);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_coe___024root___nba_sequent__TOP__27(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_coe___024root____Vthread__nba__s0__t0(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root____Vthread__nba__s0__t0\n"); );
    // Body
    Vtb_coe___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_coe___024root*>(voidSelf);
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_coe___024root__nba_mtask7(vlSelf);
    vlSelf->__Vm_mtaskstate_13.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_17.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_16.waitUntilUpstreamDone(even_cycle);
    Vtb_coe___024root__nba_mtask16(vlSelf);
    vlSelf->__Vm_mtaskstate_20.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_19.waitUntilUpstreamDone(even_cycle);
    Vtb_coe___024root__nba_mtask19(vlSelf);
    vlSelf->__Vm_mtaskstate_22.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_24.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_25.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_27.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_21.waitUntilUpstreamDone(even_cycle);
    Vtb_coe___024root__nba_mtask21(vlSelf);
    vlSelf->__Vm_mtaskstate_25.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_26.waitUntilUpstreamDone(even_cycle);
    Vtb_coe___024root__nba_mtask26(vlSelf);
    vlSelf->__Vm_mtaskstate_final__0nba.signalUpstreamDone(even_cycle);
}

void Vtb_coe___024root____Vthread__nba__s0__t1(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root____Vthread__nba__s0__t1\n"); );
    // Body
    Vtb_coe___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_coe___024root*>(voidSelf);
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_coe___024root__nba_mtask6(vlSelf);
    vlSelf->__Vm_mtaskstate_13.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_19.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_17.waitUntilUpstreamDone(even_cycle);
    Vtb_coe___024root__nba_mtask17(vlSelf);
    vlSelf->__Vm_mtaskstate_20.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_21.signalUpstreamDone(even_cycle);
    Vtb_coe___024root__nba_mtask18(vlSelf);
    vlSelf->__Vm_mtaskstate_25.waitUntilUpstreamDone(even_cycle);
    Vtb_coe___024root__nba_mtask25(vlSelf);
    vlSelf->__Vm_mtaskstate_final__0nba.signalUpstreamDone(even_cycle);
}

void Vtb_coe___024root____Vthread__nba__s0__t2(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root____Vthread__nba__s0__t2\n"); );
    // Body
    Vtb_coe___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_coe___024root*>(voidSelf);
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_coe___024root__nba_mtask14(vlSelf);
    vlSelf->__Vm_mtaskstate_16.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_17.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_15.waitUntilUpstreamDone(even_cycle);
    Vtb_coe___024root__nba_mtask15(vlSelf);
    vlSelf->__Vm_mtaskstate_8.waitUntilUpstreamDone(even_cycle);
    Vtb_coe___024root__nba_mtask8(vlSelf);
    vlSelf->__Vm_mtaskstate_20.waitUntilUpstreamDone(even_cycle);
    Vtb_coe___024root__nba_mtask20(vlSelf);
    vlSelf->__Vm_mtaskstate_22.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_24.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_25.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_26.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_27.waitUntilUpstreamDone(even_cycle);
    Vtb_coe___024root__nba_mtask27(vlSelf);
    Vtb_coe___024root__nba_mtask23(vlSelf);
    vlSelf->__Vm_mtaskstate_final__0nba.signalUpstreamDone(even_cycle);
}

void Vtb_coe___024root____Vthread__nba__s0__t3(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_coe___024root____Vthread__nba__s0__t3\n"); );
    // Body
    Vtb_coe___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_coe___024root*>(voidSelf);
    Vtb_coe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_coe___024root__nba_mtask0(vlSelf);
    Vtb_coe___024root__nba_mtask1(vlSelf);
    Vtb_coe___024root__nba_mtask5(vlSelf);
    vlSelf->__Vm_mtaskstate_8.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_13.waitUntilUpstreamDone(even_cycle);
    Vtb_coe___024root__nba_mtask13(vlSelf);
    Vtb_coe___024root__nba_mtask9(vlSelf);
    vlSelf->__Vm_mtaskstate_24.waitUntilUpstreamDone(even_cycle);
    Vtb_coe___024root__nba_mtask24(vlSelf);
    vlSelf->__Vm_mtaskstate_22.waitUntilUpstreamDone(even_cycle);
    Vtb_coe___024root__nba_mtask22(vlSelf);
    vlSelf->__Vm_mtaskstate_final__0nba.signalUpstreamDone(even_cycle);
}
