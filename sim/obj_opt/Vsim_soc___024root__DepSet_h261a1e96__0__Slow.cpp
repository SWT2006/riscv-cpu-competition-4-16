// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_soc.h for the primary calling header

#include "Vsim_soc__pch.h"
#include "Vsim_soc___024root.h"

VL_ATTR_COLD void Vsim_soc___024root___eval_static(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_static\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__clk__0 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__clk__0 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__clk__0 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__clk__0 
        = vlSelfRef.sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__clk;
}

VL_ATTR_COLD void Vsim_soc___024root___eval_initial__TOP(Vsim_soc___024root* vlSelf);

VL_ATTR_COLD void Vsim_soc___024root___eval_initial(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_initial\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsim_soc___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vsim_soc___024root___eval_initial__TOP(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_initial__TOP\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.sim_soc__DOT__ii = 0U;
    while (VL_GTS_III(32, 0x1000U, vlSelfRef.sim_soc__DOT__ii)) {
        vlSelfRef.sim_soc__DOT__imem[(0xfffU & vlSelfRef.sim_soc__DOT__ii)] = 0x13U;
        vlSelfRef.sim_soc__DOT__ii = ((IData)(1U) + vlSelfRef.sim_soc__DOT__ii);
    }
    vlSelfRef.sim_soc__DOT__ii = 0U;
    while (VL_GTS_III(32, 0x10000U, vlSelfRef.sim_soc__DOT__ii)) {
        vlSelfRef.sim_soc__DOT__dmem[(0xffffU & vlSelfRef.sim_soc__DOT__ii)] = 0U;
        vlSelfRef.sim_soc__DOT__ii = ((IData)(1U) + vlSelfRef.sim_soc__DOT__ii);
    }
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x69726f6dU;
    __Vtemp_1[2U] = 0x7263305fU;
    __Vtemp_1[3U] = 0x73U;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelfRef.sim_soc__DOT__imem)
                 , 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x6472616dU;
    __Vtemp_2[2U] = 0x7263305fU;
    __Vtemp_2[3U] = 0x73U;
    VL_READMEM_N(true, 32, 65536, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_2)
                 ,  &(vlSelfRef.sim_soc__DOT__dmem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vsim_soc___024root___eval_final(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_final\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_soc___024root___dump_triggers__stl(Vsim_soc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsim_soc___024root___eval_phase__stl(Vsim_soc___024root* vlSelf);

VL_ATTR_COLD void Vsim_soc___024root___eval_settle(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_settle\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsim_soc___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sim_soc_verilator.v", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsim_soc___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_soc___024root___dump_triggers__stl(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___dump_triggers__stl\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vsim_soc___024root___ico_sequent__TOP__0(Vsim_soc___024root* vlSelf);

VL_ATTR_COLD void Vsim_soc___024root___eval_stl(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_stl\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsim_soc___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vsim_soc___024root___eval_triggers__stl(Vsim_soc___024root* vlSelf);

VL_ATTR_COLD bool Vsim_soc___024root___eval_phase__stl(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___eval_phase__stl\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsim_soc___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsim_soc___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_soc___024root___dump_triggers__ico(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___dump_triggers__ico\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_soc___024root___dump_triggers__act(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___dump_triggers__act\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge sim_soc.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge sim_soc.u_cpu.u_if.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge sim_soc.u_cpu.u_pipe_ifid.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge sim_soc.u_cpu.u_csr.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge sim_soc.u_cpu.u_stage_id.clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge sim_soc.u_cpu.u_pipe_idex.clk)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge sim_soc.u_cpu.u_ex.clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge sim_soc.u_cpu.u_ex.u_div.clk)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge sim_soc.u_cpu.u_pipe_exmem.clk)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge sim_soc.u_cpu.u_pipe_memwb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_soc___024root___dump_triggers__nba(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___dump_triggers__nba\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge sim_soc.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge sim_soc.u_cpu.u_if.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge sim_soc.u_cpu.u_pipe_ifid.clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge sim_soc.u_cpu.u_csr.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge sim_soc.u_cpu.u_stage_id.clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge sim_soc.u_cpu.u_pipe_idex.clk)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge sim_soc.u_cpu.u_ex.clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge sim_soc.u_cpu.u_ex.u_div.clk)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge sim_soc.u_cpu.u_pipe_exmem.clk)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge sim_soc.u_cpu.u_pipe_memwb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsim_soc___024root___ctor_var_reset(Vsim_soc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_soc___024root___ctor_var_reset\n"); );
    Vsim_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->sim_soc__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1497200161043014955ull);
    vlSelf->sim_soc__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14669168822274038710ull);
    vlSelf->sim_soc__DOT__cpu_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9992036684332250456ull);
    vlSelf->sim_soc__DOT__irom_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9222095567526864563ull);
    vlSelf->sim_soc__DOT__irom_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9604886857349361837ull);
    vlSelf->sim_soc__DOT__perip_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10195150564338504326ull);
    vlSelf->sim_soc__DOT__perip_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9467708101442859527ull);
    vlSelf->sim_soc__DOT__perip_mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 743880111656143562ull);
    vlSelf->sim_soc__DOT__perip_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11685831757328107307ull);
    vlSelf->sim_soc__DOT__perip_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 922375664762224600ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->sim_soc__DOT__imem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15981249935299858857ull);
    }
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->sim_soc__DOT__dmem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12140502364163186029ull);
    }
    vlSelf->sim_soc__DOT__dram_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1866425690456543737ull);
    vlSelf->sim_soc__DOT__dram_word_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17421791097840154158ull);
    vlSelf->sim_soc__DOT__dram_offset = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13846406086656302828ull);
    vlSelf->sim_soc__DOT__dram_cur = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3650658897178988213ull);
    vlSelf->sim_soc__DOT__dram_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5567324152186494871ull);
    vlSelf->sim_soc__DOT__dram_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17758022564692506069ull);
    vlSelf->sim_soc__DOT__ii = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 532631934277277846ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__cpu_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5175909558883115382ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__cpu_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18121006475562635801ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__irom_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3950136215768853694ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__irom_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15960743747104521571ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__perip_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 580135453875543935ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__perip_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1513621736842311851ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__perip_mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9633591052674315385ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__perip_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14297783960227090811ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__perip_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2716675545416404245ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__if_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15840587029669350199ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__if_pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7956707723607033639ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__if_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2413527693943478311ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__ifid_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5298331254656131296ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__ifid_pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4114865290973000317ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__ifid_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8080205543812768256ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3733920309705572302ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2415152473571084985ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16471689463715435604ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14965501168885758401ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17984766882848911036ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10503660207261874684ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11341717862164890969ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_alu_op = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11655240502324621286ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12116381502308095880ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16590234033575221513ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5619372078322681729ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9450930860208853242ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2598878512548187758ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13358477314526234539ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11670226664422539650ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12286988535786423830ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9481559061532906451ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3861247489343058405ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15044402359846753774ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6329984623041616072ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14606411153459459312ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_csr_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11809245477532041376ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16633740743622503063ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10395839810235293118ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14795175617829885666ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2376380826331902815ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16983110771446564501ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17520760227827372479ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4286117472069126515ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12406407745298853460ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_alu_op = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2988853712351499654ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11000251575503365500ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7041077514772071307ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8174891301557934661ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8254045981663645067ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17130076912074138839ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12372560353322011152ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1770953614534326464ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2972909025304377368ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12452053794861243160ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9461858120770492079ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10561170581827399935ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14963929143611452945ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11398595134877424789ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15576881820469437930ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16925668761414767358ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__idex_csr_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7785315319175001318ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__ex_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11433594458201979708ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__ex_rs2_data_fwd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11156524815243175809ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__ex_branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14696744002476899167ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__ex_branch_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11537672567236849461ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__ex_trap_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12415170564927510415ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__ex_trap_epc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7800714313150234678ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__ex_trap_mcause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7625337495263969496ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__ex_csr_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15475564849847140336ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__ex_csr_waddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7121513480584102723ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__ex_csr_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10462894543793366687ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__div_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3942439757379525543ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__mul_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10115326459319383537ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__exmem_pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6038680669488616479ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__exmem_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9031113126793785207ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__exmem_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14436694980488524669ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__exmem_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3536535850925251429ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__exmem_mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13241929055513683173ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__exmem_mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4602426701888769930ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__exmem_mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 860628414198618525ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__exmem_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1902861601613743594ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__exmem_wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12851584820545882858ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__exmem_fwd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1548616842941712863ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__mem_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11782379755839383965ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__memwb_pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16978848538597678477ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__memwb_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8863049436171415884ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__memwb_mem_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11123141638493506080ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__memwb_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4397241611470073513ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__memwb_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16894837696148720297ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__memwb_wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3142647184781692705ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__memwb_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2855298968855539001ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__wb_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10161856744082602418ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__hz_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13814409697470065413ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__forward_a = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17037998730206099578ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__forward_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12891615010270245526ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__csr_mtvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4829396062241800068ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__csr_mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1733784969841987215ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_csr_rdata_raw = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10011661184741703109ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__ex_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11473506687942265209ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__pipeline_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12057162425625662445ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12622172334652931959ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__id_csr_rdata_fwd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5559306635586389690ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_if__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4514896154690188756ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_if__DOT__cpu_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14130766115182911830ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_if__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10107267633384205413ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_if__DOT__branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14288515923064810937ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_if__DOT__branch_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5427033060107970354ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_if__DOT__irom_word_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9311560926121542536ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_if__DOT__irom_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12857255700308696753ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4713356326850856225ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_if__DOT__pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8814137639783293506ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_if__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1005610247055407505ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12288905282225574958ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__cpu_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4122239820840472970ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5853673677093273895ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10686125572759102888ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__if_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6738199494612143148ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__if_pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1933565885249958500ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__if_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13184104272344766990ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__ifid_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7509717776012663082ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__ifid_pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1437742365515651383ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__ifid_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2859237735714679214ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_csr__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8289259085932804767ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_csr__DOT__cpu_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16097392833184943667ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_raddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15837683913587397249ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17045336870562920741ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2534421162638682721ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_waddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6442855674244084661ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_csr__DOT__csr_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5937318605339288492ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_csr__DOT__trap_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2528426745344850886ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_csr__DOT__trap_epc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8985193176140989844ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_csr__DOT__trap_mcause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17415332349081386836ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mtvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16533688657620977279ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14407059469913665129ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mcause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6027479477827875685ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mstatus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9581246266841292517ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mtval = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8792841152192761763ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_csr__DOT__mscratch = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3992822066738365971ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7849446722726931031ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__cpu_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16284628162068307607ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11456312952185163628ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9987613957589568864ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12131651963921208000ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4491255555959405077ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17791080716630963922ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9883397121761613069ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8412209461728389697ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17492342127612385740ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2373121196626019362ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16793748689913628504ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6308260430902529925ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12138855006752188579ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__csr_rdata_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8326994601289397569ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__alu_op = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4392472102483242262ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16895117307733287951ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7519597279861437721ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13249343167537830807ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17162172176162170857ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11118530644840266543ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16346350326146138978ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1893920461400985559ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17897782460428453709ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2062771047116153365ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__lui = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5050329145654316390ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13342605877093108445ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7372933776786171651ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16107564733086256255ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__csr_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17825449697809135194ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7873447267448919008ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__f3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2826124551470315595ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__funct7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1541919397656633150ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__funct12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9743637265674086627ull);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2730940156724487508ull);
    }
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3189078685433118012ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rf_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3716285968933491716ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__rf_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8323267306022606215ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT____Vlvbound_h5af0bf87__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2606680809955528424ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5590743108799944723ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6651494253317984211ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_imm_gen__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4664170216813529260ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5633965383416577220ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2302037087641372576ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2048126198951976747ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__funct12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11927736332209116082ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_op = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11008144762034220589ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7633155789835222834ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1617860708785828148ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3170662528607697035ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2354223563385323045ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13829296128983720617ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12218462564973223585ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4478458188077382930ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5039913402198660013ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__lui = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2889247472840857420ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5827126716941103067ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16178642035372618303ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3614950080075847603ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__csr_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 849777029228001972ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__idex_mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6293738854164184549ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__idex_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5587302582508988696ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__ifid_rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13534651092627583994ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__ifid_rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7983434456682031476ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_hazard__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13156817765341700803ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8400774702354443742ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__cpu_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3524100849768731262ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9918219385144197001ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__hold = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3782450809851915173ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11922369382812714672ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7615382714406820563ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4581705364198039052ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11268658765595052041ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 556613485720725279ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1517063861336534217ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7765551358123613050ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14968956278762164748ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_alu_op = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7888723773235025105ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4747464722434134616ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14318214047634843259ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17223862023575543178ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11209360103496725298ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12634861059206651095ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 946979929265948132ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17479758628461930266ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7610415978928977151ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11551206634467879156ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15950546111559426967ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11609236401704000109ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7250549907047775387ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14059742170173831962ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_csr_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1857432739464098661ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2498835405162543643ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__id_csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7550014301126316194ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8396287192782041297ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16626766461633919705ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16368189094286756345ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2229232058482550242ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10828147858300198435ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5278226750274366424ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14865352030177894505ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9449811363309295002ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_alu_op = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3723714534595272789ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4898651942901756503ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14280832235212393866ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1747697220735916224ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17829772479816620676ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13201349383838041077ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8320261276948011339ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 357909498077380769ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8484898373805734751ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9948466301706621167ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 213141385684197984ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10451199619289398178ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9013796514495919653ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9469616028016883582ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_csr_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9402204743261069417ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14602713552148165975ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__idex_csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1035426742681349656ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__idex_rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3735792097801168718ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__idex_rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4786495232796921205ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__exmem_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7693477070901836767ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__exmem_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10570063654855309289ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__memwb_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17507127869022904542ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__memwb_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7840283418972603968ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__forward_a = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17909619023771519845ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_fwd__DOT__forward_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4817582660661647075ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7564985121252439606ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__cpu_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 174401393760362975ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14709007066758332953ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4942420692247257620ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14274913874689151688ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14669739597413761647ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5805800847793445419ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3326730307756985032ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1575801851987137032ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_op = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16871655048621710005ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4930852308196827464ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15954307273936425689ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15530385424674573836ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11411881973694963700ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11505384675711347664ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 907083111493897128ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5357861304275807710ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4393637115157494727ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1624330299191722941ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9081062892417178508ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__idex_csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14350583926475225721ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_mtvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10894181481449576903ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1539922816926416226ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__forward_a = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1124977637134604928ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__forward_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7561666832455525558ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__exmem_fwd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1776307806578974863ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__wb_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3930912614197690615ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16177636925090552449ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__rs2_data_fwd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1874094874459879722ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10030728364294925014ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5952619168393991736ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__trap_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5138181288648683345ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__trap_epc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13335444868685366718ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__trap_mcause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10414345314149511563ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13911233016353508694ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_waddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1542114689016851702ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7071183030112985534ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4439643783301986624ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11433592468145841254ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8339379081976804990ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14175962444769416149ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15359215420832937107ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15336544450298083259ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_a_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9498703098150265462ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_b_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13982096747835131674ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_op_a = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7236298705585650059ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_op_b = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 12515189279555087691ull);
    VL_SCOPED_RAND_RESET_W(66, vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_full, __VscopeHash, 10933697511181004276ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__is_div_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8077322880350678352ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4052788185567233829ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7316181813180094389ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17814184830319648546ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2077653243053207381ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_op_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6111471820319748972ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__div_op_rem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4597390048880804601ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__is_mul_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4332127240271762595ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3615921685446416867ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__mul_result_r = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12685502824658514645ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18102432095684606771ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__branch_cond = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17761798726759900579ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__pc_branch = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3843287393253376972ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__jalr_tgt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1727808253635370032ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__zimm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9983497171480547706ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7326641077737985436ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11309712932803028141ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14741075727325344283ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16882453468088084021ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__dividend = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17476124281036649273ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__divisor = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18126948074264033999ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__op_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1438385678351126609ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__op_rem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17814930472866949248ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15599952458637996143ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5047930689893609146ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17255839700328502153ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16792518600295511655ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7562954780550141495ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__quo = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8601236233547936869ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__rem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 548443600889142004ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__div_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10609275899308360077ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__sign_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1247216977126259653ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__sign_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9292541246183990362ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__is_rem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17582575350862994602ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__trial = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 827272050037630709ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__can_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14857558223361295523ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__q_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10658881227174000652ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__r_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10046308860317546523ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12393349505465551926ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__cpu_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3524518979581247046ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16537132084586828502ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15113389155338240971ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9101434277114125242ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16685044871646838291ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14576514177352378526ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11238707158728248239ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10782576622438938497ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5379651679610808114ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13268262902318518404ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__ex_wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 337082499847585593ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13192051002234820484ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 196966676019162666ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5768604816132433742ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12279283534663743588ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7190018553035298156ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11727996645303711312ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6091573737242100759ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18441949719436378405ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4459984459388378909ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__exmem_fwd_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14450454778516142387ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9370732906092503542ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18019199179134774560ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7476903782945068408ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6019615761515541198ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_mem__DOT__exmem_mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14906293725604803875ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7109165799491488902ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3392210569673443159ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_mask = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8092437010654604827ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 70482536869564907ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_mem__DOT__perip_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9281038581018747757ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_mem__DOT__mem_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6273744034228784782ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8470658673409687201ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__cpu_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4696138379378506279ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7616672107910368844ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3742250162266568966ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5387583079075362172ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1065306866648288386ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16301422534014136363ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__mem_wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7704980959350782090ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_pc_plus4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13475808647460018230ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1796661961764356479ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_mem_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1407408282398211557ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17762116381906494848ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1236383911272549593ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_wb_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4977657914997409916ull);
    vlSelf->sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__memwb_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3916685401656861418ull);
    vlSelf->__Vtrigprevexpr___TOP__sim_soc__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4775547184919695864ull);
    vlSelf->__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_if__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5225795645173845866ull);
    vlSelf->__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_pipe_ifid__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6984962842934794014ull);
    vlSelf->__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_csr__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11642620513332994336ull);
    vlSelf->__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7481514609767995769ull);
    vlSelf->__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_pipe_idex__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15856021319395571664ull);
    vlSelf->__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2135065570067953916ull);
    vlSelf->__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 947497101875510384ull);
    vlSelf->__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_pipe_exmem__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7144605295833493700ull);
    vlSelf->__Vtrigprevexpr___TOP__sim_soc__DOT__u_cpu__DOT__u_pipe_memwb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3295153894185167337ull);
}
