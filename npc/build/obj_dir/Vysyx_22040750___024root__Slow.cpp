// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040750.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040750__Syms.h"
#include "Vysyx_22040750___024root.h"

void Vysyx_22040750___024root___ctor_var_reset(Vysyx_22040750___024root* vlSelf);

Vysyx_22040750___024root::Vysyx_22040750___024root(Vysyx_22040750__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __Vm_mtaskstate_2(1U)
    , __Vm_mtaskstate_16(3U)
    , __Vm_mtaskstate_28(3U)
    , __Vm_mtaskstate_17(2U)
    , __Vm_mtaskstate_26(6U)
    , __Vm_mtaskstate_23(1U)
    , __Vm_mtaskstate_24(1U)
    , __Vm_mtaskstate_18(2U)
    , __Vm_mtaskstate_27(1U)
    , __Vm_mtaskstate_22(3U)
    , __Vm_mtaskstate_25(1U)
    , __Vm_mtaskstate_19(3U)
    , __Vm_mtaskstate_21(1U)
    , __Vm_mtaskstate_final__nba(4U)
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vysyx_22040750___024root___ctor_var_reset(this);
}

void Vysyx_22040750___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vysyx_22040750___024root::~Vysyx_22040750___024root() {
}
