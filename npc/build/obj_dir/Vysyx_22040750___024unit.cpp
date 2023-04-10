// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040750.h for the primary calling header

#include "Vysyx_22040750___024unit.h"
#include "Vysyx_22040750__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_inst_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040750___024unit____Vdpiimwrap_set_inst_ptr__Vdpioc2_TOP____024unit(const IData/*31:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040750___024unit____Vdpiimwrap_set_inst_ptr__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_inst_ptr(&a__Vopenarray);
}
