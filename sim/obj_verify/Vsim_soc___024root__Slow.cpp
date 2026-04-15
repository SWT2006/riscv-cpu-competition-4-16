// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_soc.h for the primary calling header

#include "Vsim_soc__pch.h"
#include "Vsim_soc__Syms.h"
#include "Vsim_soc___024root.h"

// Parameter definitions for Vsim_soc___024root
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ALU_ADD;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ALU_SUB;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ALU_SLL;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ALU_SLT;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ALU_SLTU;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ALU_XOR;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ALU_SRL;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ALU_SRA;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ALU_OR;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ALU_AND;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ALU_PASS_B;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ALU_MUL;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ALU_MULH;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ALU_MULHSU;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ALU_MULHU;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ALU_DIV;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ALU_DIVU;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ALU_REM;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_stage_id__DOT__u_ctrl__DOT__ALU_REMU;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__ALU_ADD;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__ALU_SUB;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__ALU_SLL;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__ALU_SLT;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__ALU_SLTU;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__ALU_XOR;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__ALU_SRL;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__ALU_SRA;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__ALU_OR;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__ALU_AND;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__ALU_PASS_B;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__ALU_MUL;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__ALU_MULH;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__ALU_MULHSU;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__ALU_MULHU;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__ALU_DIV;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__ALU_DIVU;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__ALU_REM;
constexpr CData/*4:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__ALU_REMU;
constexpr CData/*1:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__S_IDLE;
constexpr CData/*1:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__S_CALC;
constexpr CData/*1:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_ex__DOT__u_div__DOT__S_DONE;
constexpr IData/*31:0*/ Vsim_soc___024root::sim_soc__DOT__DRAM_BASE;
constexpr IData/*31:0*/ Vsim_soc___024root::sim_soc__DOT__DRAM_END;
constexpr IData/*31:0*/ Vsim_soc___024root::sim_soc__DOT__u_cpu__DOT__u_if__DOT__RESET_PC;


void Vsim_soc___024root___ctor_var_reset(Vsim_soc___024root* vlSelf);

Vsim_soc___024root::Vsim_soc___024root(Vsim_soc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_soc___024root___ctor_var_reset(this);
}

void Vsim_soc___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsim_soc___024root::~Vsim_soc___024root() {
}
