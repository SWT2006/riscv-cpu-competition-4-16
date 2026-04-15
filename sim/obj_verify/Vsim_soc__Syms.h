// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSIM_SOC__SYMS_H_
#define VERILATED_VSIM_SOC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsim_soc.h"

// INCLUDE MODULE CLASSES
#include "Vsim_soc___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vsim_soc__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsim_soc* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsim_soc___024root             TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_sim_soc;
    VerilatedScope __Vscope_sim_soc__u_cpu;
    VerilatedScope __Vscope_sim_soc__u_cpu__u_csr;
    VerilatedScope __Vscope_sim_soc__u_cpu__u_ex;
    VerilatedScope __Vscope_sim_soc__u_cpu__u_ex__u_div;
    VerilatedScope __Vscope_sim_soc__u_cpu__u_fwd;
    VerilatedScope __Vscope_sim_soc__u_cpu__u_hazard;
    VerilatedScope __Vscope_sim_soc__u_cpu__u_if;
    VerilatedScope __Vscope_sim_soc__u_cpu__u_mem;
    VerilatedScope __Vscope_sim_soc__u_cpu__u_pipe_exmem;
    VerilatedScope __Vscope_sim_soc__u_cpu__u_pipe_idex;
    VerilatedScope __Vscope_sim_soc__u_cpu__u_pipe_ifid;
    VerilatedScope __Vscope_sim_soc__u_cpu__u_pipe_memwb;
    VerilatedScope __Vscope_sim_soc__u_cpu__u_stage_id;
    VerilatedScope __Vscope_sim_soc__u_cpu__u_stage_id__u_ctrl;
    VerilatedScope __Vscope_sim_soc__u_cpu__u_stage_id__u_imm_gen;

    // CONSTRUCTORS
    Vsim_soc__Syms(VerilatedContext* contextp, const char* namep, Vsim_soc* modelp);
    ~Vsim_soc__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
