// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop__pch.h"

//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop__Syms(contextp(), _vcname__, this)}
    , tb_clk{vlSymsp->TOP.tb_clk}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__0__KET____DOT__bank{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__0__KET____DOT__bank}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__1__KET____DOT__bank{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__1__KET____DOT__bank}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__2__KET____DOT__bank{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__2__KET____DOT__bank}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__3__KET____DOT__bank{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__3__KET____DOT__bank}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__4__KET____DOT__bank{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__4__KET____DOT__bank}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__5__KET____DOT__bank{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__5__KET____DOT__bank}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__6__KET____DOT__bank{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__6__KET____DOT__bank}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__7__KET____DOT__bank{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_etl2axi__DOT__trans_table__DOT__Bank__BRA__7__KET____DOT__bank}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__0__KET____DOT__evict_ff{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__0__KET____DOT__evict_ff}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__0__KET____DOT__fill_ff{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__0__KET____DOT__fill_ff}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__1__KET____DOT__evict_ff{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__1__KET____DOT__evict_ff}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__1__KET____DOT__fill_ff{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__1__KET____DOT__fill_ff}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__2__KET____DOT__evict_ff{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__2__KET____DOT__evict_ff}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__2__KET____DOT__fill_ff{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__2__KET____DOT__fill_ff}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__3__KET____DOT__evict_ff{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__3__KET____DOT__evict_ff}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__3__KET____DOT__fill_ff{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__3__KET____DOT__fill_ff}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__4__KET____DOT__evict_ff{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__4__KET____DOT__evict_ff}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__4__KET____DOT__fill_ff{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__4__KET____DOT__fill_ff}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__5__KET____DOT__evict_ff{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__5__KET____DOT__evict_ff}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__5__KET____DOT__fill_ff{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__5__KET____DOT__fill_ff}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__6__KET____DOT__evict_ff{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__6__KET____DOT__evict_ff}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__6__KET____DOT__fill_ff{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__6__KET____DOT__fill_ff}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__7__KET____DOT__evict_ff{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__7__KET____DOT__evict_ff}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__7__KET____DOT__fill_ff{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__MINION_FF__BRA__7__KET____DOT__fill_ff}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__shared_icache__DOT__icache__DOT__UCACHE__BRA__0__KET____DOT__micro_cache__DOT__tlb_array{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__shared_icache__DOT__icache__DOT__UCACHE__BRA__0__KET____DOT__micro_cache__DOT__tlb_array}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__shared_icache__DOT__icache__DOT__UCACHE__BRA__1__KET____DOT__micro_cache__DOT__tlb_array{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__channel__DOT__shared_icache__DOT__icache__DOT__UCACHE__BRA__1__KET____DOT__micro_cache__DOT__tlb_array}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__0__KET____DOT__min_inst__DOT__minion__DOT__core{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__0__KET____DOT__min_inst__DOT__minion__DOT__core}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__0__KET____DOT__min_inst__DOT__minion__DOT__vpu{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__0__KET____DOT__min_inst__DOT__minion__DOT__vpu}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__0__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__0__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__1__KET____DOT__min_inst__DOT__minion__DOT__core{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__1__KET____DOT__min_inst__DOT__minion__DOT__core}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__1__KET____DOT__min_inst__DOT__minion__DOT__vpu{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__1__KET____DOT__min_inst__DOT__minion__DOT__vpu}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__1__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__1__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__2__KET____DOT__min_inst__DOT__minion__DOT__core{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__2__KET____DOT__min_inst__DOT__minion__DOT__core}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__2__KET____DOT__min_inst__DOT__minion__DOT__vpu{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__2__KET____DOT__min_inst__DOT__minion__DOT__vpu}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__2__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__2__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__3__KET____DOT__min_inst__DOT__minion__DOT__core{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__3__KET____DOT__min_inst__DOT__minion__DOT__core}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__3__KET____DOT__min_inst__DOT__minion__DOT__vpu{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__3__KET____DOT__min_inst__DOT__minion__DOT__vpu}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__3__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__3__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__4__KET____DOT__min_inst__DOT__minion__DOT__core{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__4__KET____DOT__min_inst__DOT__minion__DOT__core}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__4__KET____DOT__min_inst__DOT__minion__DOT__vpu{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__4__KET____DOT__min_inst__DOT__minion__DOT__vpu}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__4__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__4__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__5__KET____DOT__min_inst__DOT__minion__DOT__core{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__5__KET____DOT__min_inst__DOT__minion__DOT__core}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__5__KET____DOT__min_inst__DOT__minion__DOT__vpu{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__5__KET____DOT__min_inst__DOT__minion__DOT__vpu}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__5__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__5__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__6__KET____DOT__min_inst__DOT__minion__DOT__core{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__6__KET____DOT__min_inst__DOT__minion__DOT__core}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__6__KET____DOT__min_inst__DOT__minion__DOT__vpu{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__6__KET____DOT__min_inst__DOT__minion__DOT__vpu}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__6__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__6__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__7__KET____DOT__min_inst__DOT__minion__DOT__core{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__7__KET____DOT__min_inst__DOT__minion__DOT__core}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__7__KET____DOT__min_inst__DOT__minion__DOT__vpu{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__7__KET____DOT__min_inst__DOT__minion__DOT__vpu}
    , __PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__7__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon{vlSymsp->TOP.__PVT__top__DOT__cpu_subsystem_top__DOT__i_neigh__DOT__gen_minions__BRA__7__KET____DOT__min_inst__DOT__minion__DOT__arch_state_mon}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_static(Vtop___024root* vlSelf);
void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
void Vtop___024root___eval_settle(Vtop___024root* vlSelf);
void Vtop___024root___eval(Vtop___024root* vlSelf);

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop___024root___eval_static(&(vlSymsp->TOP));
        Vtop___024root___eval_initial(&(vlSymsp->TOP));
        Vtop___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtop::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop___024root___eval_final(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop::final() {
    Vtop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop::hierName() const { return vlSymsp->name(); }
const char* Vtop::modelName() const { return "Vtop"; }
unsigned Vtop::threads() const { return 1; }
void Vtop::prepareClone() const { contextp()->prepareClone(); }
void Vtop::atClone() const {
    contextp()->threadPoolpOnClone();
}
