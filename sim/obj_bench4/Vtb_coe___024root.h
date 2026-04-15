// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_coe.h for the primary calling header

#ifndef VERILATED_VTB_COE___024ROOT_H_
#define VERILATED_VTB_COE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_timing.h"


class Vtb_coe__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_coe___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc;
        IData/*31:0*/ __Vdly__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__if_pc;
        CData/*1:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_wb_sel;
        CData/*1:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_wb_sel;
        CData/*1:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_wb_sel;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_reg_write;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_reg_write;
        VlUnpacked<IData/*31:0*/, 4096> tb_coe__DOT__u_soc__DOT__imem;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_reg_write;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_ecall;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_csr_op;
        IData/*31:0*/ tb_coe__DOT__prev_pc;
        IData/*31:0*/ tb_coe__DOT__prev2_pc;
        IData/*31:0*/ tb_coe__DOT__prev3_pc;
        IData/*31:0*/ tb_coe__DOT__dump_registers__Vstatic__rv;
        IData/*31:0*/ tb_coe__DOT__stable_count;
        IData/*31:0*/ __Vdly__tb_coe__DOT__stable_count;
        IData/*31:0*/ tb_coe__DOT__cycle_count;
        IData/*31:0*/ __Vdly__tb_coe__DOT__cycle_count;
        VlUnpacked<IData/*31:0*/, 31> tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile;
        CData/*4:0*/ __VdlyDim0__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0;
        CData/*0:0*/ __VdlySet__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0;
        CData/*0:0*/ __VdlySet__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v1;
        IData/*31:0*/ __VdlyVal__tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT__regfile__v0;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_stage_id__DOT____Vlvbound_h5af0bf87__0;
        CData/*4:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs2_addr;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs2_data;
        CData/*2:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_funct3;
        CData/*4:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs1_addr;
        CData/*4:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_rd_addr;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__wb_write_data;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_reg_write;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_mem_data;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mstatus;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_src;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_src;
        CData/*4:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rd_addr;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_fwd__DOT____VdfgRegularize_h796461b2_0_0;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_fwd__DOT____VdfgRegularize_h796461b2_0_1;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__exmem_fwd;
        CData/*4:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rd_addr;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_b;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__csr_wd;
        SData/*11:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_addr;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_op;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_instruction;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_csr_rdata;
        CData/*2:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_mem_funct3;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mcause;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__csr_mepc;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__csr_mtvec;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mtval;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_csr__DOT__mscratch;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_rs1_data;
        CData/*2:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_funct3;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_read;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__dram_rdata;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_mem_write;
        VlUnpacked<IData/*31:0*/, 65536> tb_coe__DOT__u_soc__DOT__dmem;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_mem_read;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_mem_write;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_mem_read;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__dram_sel;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_mem_write;
    };
    struct {
        CData/*0:0*/ __VdlySet__tb_coe__DOT__u_soc__DOT__dmem__v0;
        SData/*15:0*/ __VdlyDim0__tb_coe__DOT__u_soc__DOT__dmem__v0;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__dram_wdata;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_rs2_data;
        IData/*31:0*/ __VdlyVal__tb_coe__DOT__u_soc__DOT__dmem__v0;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_alu_result;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ex_alu_result;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__exmem_pc_plus4;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_pc_plus4;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__memwb_alu_result;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_pc_plus4;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_jal;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_auipc;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_pc;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_ecall;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_jalr;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_mret;
        CData/*1:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_wb_sel;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_imm;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_jalr;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_mret;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_imm;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__fwd_a;
        CData/*4:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_alu_op;
        CData/*4:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_alu_op;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__u_ex__DOT__alu_b;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_auipc;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_pc;
        IData/*31:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ifid_pc_plus4;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__id_branch;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_branch;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__idex_jal;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__ex_branch_taken;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT__stall;
        CData/*0:0*/ tb_coe__DOT__u_soc__DOT__u_cpu__DOT____Vcellinp__u_pipe_idex__flush;
        CData/*0:0*/ tb_coe__DOT__rst_n;
        CData/*0:0*/ tb_coe__DOT__clk;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_coe__DOT__clk__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ __VactIterCount;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc3524d36__0;
    VlTriggerScheduler __VtrigSched_hc3524bf7__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;
    VlMTaskVertex __Vm_mtaskstate_16;
    VlMTaskVertex __Vm_mtaskstate_19;
    VlMTaskVertex __Vm_mtaskstate_21;
    VlMTaskVertex __Vm_mtaskstate_26;
    VlMTaskVertex __Vm_mtaskstate_17;
    VlMTaskVertex __Vm_mtaskstate_25;
    VlMTaskVertex __Vm_mtaskstate_15;
    VlMTaskVertex __Vm_mtaskstate_8;
    VlMTaskVertex __Vm_mtaskstate_20;
    VlMTaskVertex __Vm_mtaskstate_27;
    VlMTaskVertex __Vm_mtaskstate_13;
    VlMTaskVertex __Vm_mtaskstate_24;
    VlMTaskVertex __Vm_mtaskstate_22;
    VlMTaskVertex __Vm_mtaskstate_final__0nba;

    // INTERNAL VARIABLES
    Vtb_coe__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_coe___024root(Vtb_coe__Syms* symsp, const char* v__name);
    ~Vtb_coe___024root();
    VL_UNCOPYABLE(Vtb_coe___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
