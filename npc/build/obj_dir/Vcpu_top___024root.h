// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_top.h for the primary calling header

#ifndef VERILATED_VCPU_TOP___024ROOT_H_
#define VERILATED_VCPU_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcpu_top__Syms;
class Vcpu_top_VerilatedVcd;
class Vcpu_top___024unit;


//----------

VL_MODULE(Vcpu_top___024root) {
  public:
    // CELLS
    Vcpu_top___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(I_sys_clk,0,0);
    VL_IN8(I_rst,0,0);
    VL_IN(I_inst,31,0);
    VL_OUT64(O_pc,63,0);

    // LOCAL SIGNALS
    QData/*63:0*/ cpu_top__DOT__wr_data;
    VlUnpacked<QData/*63:0*/, 32> cpu_top__DOT__gpr_e__DOT__gpr;
    VlUnpacked<CData/*0:0*/, 32> cpu_top__DOT__gpr_e__DOT__wen;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__I_sys_clk;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcpu_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcpu_top___024root);  ///< Copying not allowed
  public:
    Vcpu_top___024root(const char* name);
    ~Vcpu_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vcpu_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
