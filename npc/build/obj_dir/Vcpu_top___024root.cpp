// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_top.h for the primary calling header

#include "Vcpu_top___024root.h"
#include "Vcpu_top__Syms.h"

#include "verilated_dpi.h"

//==========

void Vcpu_top___024unit____Vdpiimwrap_sim_end_TOP____024unit();

VL_INLINE_OPT void Vcpu_top___024root___sequent__TOP__1(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___sequent__TOP__1\n"); );
    // Variables
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v0;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v1;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v2;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v3;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v4;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v5;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v6;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v7;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v8;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v9;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v10;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v11;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v12;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v13;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v14;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v15;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v16;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v17;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v18;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v19;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v20;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v21;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v22;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v23;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v24;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v25;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v26;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v27;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v28;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v29;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v30;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v31;
    // Body
    if (((0x100073U == vlSelf->I_inst) & (~ (IData)(vlSelf->I_rst)))) {
        Vcpu_top___024unit____Vdpiimwrap_sim_end_TOP____024unit();
    }
    if (vlSelf->I_rst) {
        vlSelf->O_pc = 0x80000000ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v0 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v1 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v2 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v3 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v4 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v5 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v6 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v7 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v8 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v9 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v10 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v11 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v12 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v13 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v14 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v15 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v16 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v17 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v18 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v19 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v20 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v21 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v22 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v23 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v24 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v25 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v26 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v27 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v28 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v29 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v30 = 0ULL;
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v31 = 0ULL;
    } else {
        vlSelf->O_pc = (4ULL + vlSelf->O_pc);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v0 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0U] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0U]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v1 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [1U] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [1U]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v2 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [2U] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [2U]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v3 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [3U] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [3U]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v4 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [4U] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [4U]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v5 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [5U] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [5U]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v6 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [6U] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [6U]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v7 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [7U] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [7U]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v8 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [8U] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [8U]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v9 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [9U] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [9U]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v10 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0xaU] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0xaU]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v11 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0xbU] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0xbU]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v12 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0xcU] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0xcU]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v13 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0xdU] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0xdU]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v14 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0xeU] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0xeU]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v15 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0xfU] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0xfU]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v16 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0x10U] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0x10U]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v17 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0x11U] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0x11U]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v18 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0x12U] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0x12U]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v19 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0x13U] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0x13U]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v20 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0x14U] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0x14U]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v21 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0x15U] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0x15U]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v22 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0x16U] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0x16U]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v23 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0x17U] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0x17U]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v24 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0x18U] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0x18U]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v25 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0x19U] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0x19U]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v26 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0x1aU] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0x1aU]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v27 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0x1bU] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0x1bU]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v28 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0x1cU] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0x1cU]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v29 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0x1dU] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0x1dU]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v30 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0x1eU] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0x1eU]);
        __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v31 
            = (vlSelf->cpu_top__DOT__gpr_e__DOT__wen
               [0x1fU] ? vlSelf->cpu_top__DOT__wr_data
                : vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
               [0x1fU]);
    }
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0U] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v0;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[1U] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v1;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[2U] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v2;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[3U] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v3;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[4U] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v4;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[5U] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v5;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[6U] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v6;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[7U] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v7;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[8U] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v8;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[9U] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v9;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0xaU] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v10;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0xbU] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v11;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0xcU] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v12;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0xdU] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v13;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0xeU] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v14;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0xfU] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v15;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0x10U] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v16;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0x11U] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v17;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0x12U] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v18;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0x13U] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v19;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0x14U] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v20;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0x15U] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v21;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0x16U] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v22;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0x17U] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v23;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0x18U] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v24;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0x19U] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v25;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0x1aU] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v26;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0x1bU] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v27;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0x1cU] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v28;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0x1dU] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v29;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0x1eU] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v30;
    vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0x1fU] = __Vdlyvval__cpu_top__DOT__gpr_e__DOT__gpr__v31;
}

VL_INLINE_OPT void Vcpu_top___024root___combo__TOP__3(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___combo__TOP__3\n"); );
    // Body
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[1U] = ((1U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->I_inst 
                                                      >> 7U)))
                                                  ? 1U
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[2U] = ((2U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->I_inst 
                                                      >> 7U)))
                                                  ? 1U
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[3U] = ((3U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->I_inst 
                                                      >> 7U)))
                                                  ? 1U
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[4U] = ((4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->I_inst 
                                                      >> 7U)))
                                                  ? 1U
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[5U] = ((5U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->I_inst 
                                                      >> 7U)))
                                                  ? 1U
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[6U] = ((6U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->I_inst 
                                                      >> 7U)))
                                                  ? 1U
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[7U] = ((7U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->I_inst 
                                                      >> 7U)))
                                                  ? 1U
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[8U] = ((8U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->I_inst 
                                                      >> 7U)))
                                                  ? 1U
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[9U] = ((9U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->I_inst 
                                                      >> 7U)))
                                                  ? 1U
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0xaU] = (
                                                   (0xaU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->I_inst 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0xbU] = (
                                                   (0xbU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->I_inst 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0xcU] = (
                                                   (0xcU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->I_inst 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0xdU] = (
                                                   (0xdU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->I_inst 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0xeU] = (
                                                   (0xeU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->I_inst 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0xfU] = (
                                                   (0xfU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->I_inst 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x10U] = 
        ((0x10U == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? 1U : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x11U] = 
        ((0x11U == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? 1U : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x12U] = 
        ((0x12U == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? 1U : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x13U] = 
        ((0x13U == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? 1U : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x14U] = 
        ((0x14U == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? 1U : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x15U] = 
        ((0x15U == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? 1U : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x16U] = 
        ((0x16U == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? 1U : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x17U] = 
        ((0x17U == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? 1U : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x18U] = 
        ((0x18U == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? 1U : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x19U] = 
        ((0x19U == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? 1U : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x1aU] = 
        ((0x1aU == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? 1U : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x1bU] = 
        ((0x1bU == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? 1U : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x1cU] = 
        ((0x1cU == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? 1U : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x1dU] = 
        ((0x1dU == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? 1U : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x1eU] = 
        ((0x1eU == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? 1U : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x1fU] = 
        ((0x1fU == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? 1U : 0U);
    vlSelf->cpu_top__DOT__wr_data = ((0U == (7U & (vlSelf->I_inst 
                                                   >> 0xcU)))
                                      ? (vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
                                         [(0x1fU & 
                                           (vlSelf->I_inst 
                                            >> 0xfU))] 
                                         + (QData)((IData)(
                                                           (vlSelf->I_inst 
                                                            >> 0x14U))))
                                      : 0ULL);
}

void Vcpu_top___024root___eval(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->I_sys_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__I_sys_clk)))) {
        Vcpu_top___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vcpu_top___024root___combo__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__I_sys_clk = vlSelf->I_sys_clk;
}

QData Vcpu_top___024root___change_request_1(Vcpu_top___024root* vlSelf);

VL_INLINE_OPT QData Vcpu_top___024root___change_request(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___change_request\n"); );
    // Body
    return (Vcpu_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcpu_top___024root___change_request_1(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcpu_top___024root___eval_debug_assertions(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->I_sys_clk & 0xfeU))) {
        Verilated::overWidthError("I_sys_clk");}
    if (VL_UNLIKELY((vlSelf->I_rst & 0xfeU))) {
        Verilated::overWidthError("I_rst");}
}
#endif  // VL_DEBUG
