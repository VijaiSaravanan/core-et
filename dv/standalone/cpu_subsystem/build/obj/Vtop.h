// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtop__Syms;
class Vtop___024root;
class Vtop___024unit;
class Vtop_arch_state_monitor;
class Vtop_core_top;
class Vtop_cpu_etl2axi_trans_table_bank;
class Vtop_icache_tlb_array__E10_N4;
class Vtop_neigh_evict_ff;
class Vtop_neigh_fill_ff;
class Vtop_vpu_top;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&tb_clk,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtop___024unit* const __PVT____024unit;
    Vtop_cpu_etl2axi_trans_table_bank* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__0__KET____DOT__bank;
    Vtop_cpu_etl2axi_trans_table_bank* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__1__KET____DOT__bank;
    Vtop_cpu_etl2axi_trans_table_bank* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__2__KET____DOT__bank;
    Vtop_cpu_etl2axi_trans_table_bank* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__3__KET____DOT__bank;
    Vtop_cpu_etl2axi_trans_table_bank* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__4__KET____DOT__bank;
    Vtop_cpu_etl2axi_trans_table_bank* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__5__KET____DOT__bank;
    Vtop_cpu_etl2axi_trans_table_bank* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__6__KET____DOT__bank;
    Vtop_cpu_etl2axi_trans_table_bank* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__7__KET____DOT__bank;
    Vtop_neigh_evict_ff* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__0__KET____DOT__evict_ff;
    Vtop_neigh_fill_ff* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__0__KET____DOT__fill_ff;
    Vtop_neigh_evict_ff* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__1__KET____DOT__evict_ff;
    Vtop_neigh_fill_ff* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__1__KET____DOT__fill_ff;
    Vtop_neigh_evict_ff* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__2__KET____DOT__evict_ff;
    Vtop_neigh_fill_ff* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__2__KET____DOT__fill_ff;
    Vtop_neigh_evict_ff* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__3__KET____DOT__evict_ff;
    Vtop_neigh_fill_ff* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__3__KET____DOT__fill_ff;
    Vtop_neigh_evict_ff* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__4__KET____DOT__evict_ff;
    Vtop_neigh_fill_ff* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__4__KET____DOT__fill_ff;
    Vtop_neigh_evict_ff* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__5__KET____DOT__evict_ff;
    Vtop_neigh_fill_ff* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__5__KET____DOT__fill_ff;
    Vtop_neigh_evict_ff* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__6__KET____DOT__evict_ff;
    Vtop_neigh_fill_ff* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__6__KET____DOT__fill_ff;
    Vtop_neigh_evict_ff* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__7__KET____DOT__evict_ff;
    Vtop_neigh_fill_ff* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__7__KET____DOT__fill_ff;
    Vtop_icache_tlb_array__E10_N4* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__shared_icache__DOT__icache__DOT__UCACHE__BRA__0__KET____DOT__micro_cache__DOT__tlb_array;
    Vtop_icache_tlb_array__E10_N4* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__shared_icache__DOT__icache__DOT__UCACHE__BRA__1__KET____DOT__micro_cache__DOT__tlb_array;
    Vtop_core_top* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__0__KET____DOT__min_inst__DOT__minion__DOT__core;
    Vtop_vpu_top* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__0__KET____DOT__min_inst__DOT__minion__DOT__vpu;
    Vtop_arch_state_monitor* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__0__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon;
    Vtop_core_top* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__1__KET____DOT__min_inst__DOT__minion__DOT__core;
    Vtop_vpu_top* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__1__KET____DOT__min_inst__DOT__minion__DOT__vpu;
    Vtop_arch_state_monitor* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__1__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon;
    Vtop_core_top* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__2__KET____DOT__min_inst__DOT__minion__DOT__core;
    Vtop_vpu_top* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__2__KET____DOT__min_inst__DOT__minion__DOT__vpu;
    Vtop_arch_state_monitor* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__2__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon;
    Vtop_core_top* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__3__KET____DOT__min_inst__DOT__minion__DOT__core;
    Vtop_vpu_top* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__3__KET____DOT__min_inst__DOT__minion__DOT__vpu;
    Vtop_arch_state_monitor* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__3__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon;
    Vtop_core_top* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__4__KET____DOT__min_inst__DOT__minion__DOT__core;
    Vtop_vpu_top* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__4__KET____DOT__min_inst__DOT__minion__DOT__vpu;
    Vtop_arch_state_monitor* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__4__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon;
    Vtop_core_top* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__5__KET____DOT__min_inst__DOT__minion__DOT__core;
    Vtop_vpu_top* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__5__KET____DOT__min_inst__DOT__minion__DOT__vpu;
    Vtop_arch_state_monitor* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__5__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon;
    Vtop_core_top* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__6__KET____DOT__min_inst__DOT__minion__DOT__core;
    Vtop_vpu_top* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__6__KET____DOT__min_inst__DOT__minion__DOT__vpu;
    Vtop_arch_state_monitor* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__6__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon;
    Vtop_core_top* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__7__KET____DOT__min_inst__DOT__minion__DOT__core;
    Vtop_vpu_top* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__7__KET____DOT__min_inst__DOT__minion__DOT__vpu;
    Vtop_arch_state_monitor* const __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__7__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop();
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    /// DPI Export functions
    static void CoSim_agent_drop_objection(int result, int minion_id, int thread_id);
    static void CoSim_agent_initialized();
    static void CoSim_agent_print(const char* type_in, const char* message_in);
    static void CoSim_dut_error(const char* message_in);
    static void CoSim_dut_warning(const char* message_in);

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
