// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcpu_top.h"
#include "Vcpu_top__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vcpu_top::Vcpu_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vcpu_top__Syms(_vcontextp__, _vcname__, this)}
    , I_sys_clk{vlSymsp->TOP.I_sys_clk}
    , I_rst{vlSymsp->TOP.I_rst}
    , I_inst{vlSymsp->TOP.I_inst}
    , I_inst_valid{vlSymsp->TOP.I_inst_valid}
    , I_inst_addr_ready{vlSymsp->TOP.I_inst_addr_ready}
    , O_pc{vlSymsp->TOP.O_pc}
    , O_pc_valid{vlSymsp->TOP.O_pc_valid}
    , O_mem_addr{vlSymsp->TOP.O_mem_addr}
    , O_mem_rd_en{vlSymsp->TOP.O_mem_rd_en}
    , O_mem_wen{vlSymsp->TOP.O_mem_wen}
    , I_mem_rd_data{vlSymsp->TOP.I_mem_rd_data}
    , I_mem_rd_data_valid{vlSymsp->TOP.I_mem_rd_data_valid}
    , O_mem_wr_data{vlSymsp->TOP.O_mem_wr_data}
    , O_mem_wr_strb{vlSymsp->TOP.O_mem_wr_strb}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
}

Vcpu_top::Vcpu_top(const char* _vcname__)
    : Vcpu_top(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vcpu_top::~Vcpu_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcpu_top___024root___eval_initial(Vcpu_top___024root* vlSelf);
void Vcpu_top___024root___eval_settle(Vcpu_top___024root* vlSelf);
void Vcpu_top___024root___eval(Vcpu_top___024root* vlSelf);
QData Vcpu_top___024root___change_request(Vcpu_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vcpu_top___024root___eval_debug_assertions(Vcpu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vcpu_top___024root___final(Vcpu_top___024root* vlSelf);

static void _eval_initial_loop(Vcpu_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcpu_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcpu_top___024root___eval_settle(&(vlSymsp->TOP));
        Vcpu_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcpu_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/gftyt/ysyx-workbench/npc/vsrc_pipline/cpu_top.v", 22, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcpu_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcpu_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcpu_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcpu_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcpu_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcpu_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/gftyt/ysyx-workbench/npc/vsrc_pipline/cpu_top.v", 22, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcpu_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vcpu_top::final() {
    Vcpu_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vcpu_top::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vcpu_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vcpu_top___024root__traceInitTop(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_top___024root*>(voidSelf);
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vcpu_top___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vcpu_top___024root__traceRegister(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep);

void Vcpu_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vcpu_top___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
