// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_top.h for the primary calling header

#include "Vcpu_top___024unit.h"
#include "Vcpu_top__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void sim_end();

VL_INLINE_OPT void Vcpu_top___024unit____Vdpiimwrap_sim_end_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcpu_top___024unit____Vdpiimwrap_sim_end_TOP____024unit\n"); );
    // Body
    sim_end();
}
