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
    VL_OUT8(O_mem_rd_en,0,0);
    VL_OUT8(O_mem_wen,0,0);
    VL_IN(I_inst,31,0);
    VL_OUT64(O_pc,63,0);
    VL_IN64(I_mem_rd_data,63,0);
    VL_OUT64(O_mem_wr_data,63,0);
    VL_OUT64(O_mem_wr_addr,63,0);

    // LOCAL SIGNALS
    CData/*2:0*/ cpu_top__DOT__dnpc_sel;
    CData/*2:0*/ cpu_top__DOT__regin_sel;
    CData/*2:0*/ cpu_top__DOT__opnum1_sel;
    CData/*1:0*/ cpu_top__DOT__opnum2_sel;
    CData/*0:0*/ cpu_top__DOT__reg_wen;
    CData/*0:0*/ cpu_top__DOT__decoder_e__DOT__typeI;
    CData/*0:0*/ cpu_top__DOT__decoder_e__DOT__typeR;
    CData/*0:0*/ cpu_top__DOT__decoder_e__DOT__typeU;
    CData/*0:0*/ cpu_top__DOT__decoder_e__DOT__JALR;
    CData/*0:0*/ cpu_top__DOT__decoder_e__DOT__typeB_jr;
    CData/*0:0*/ cpu_top__DOT__decoder_e__DOT__eq;
    CData/*0:0*/ cpu_top__DOT__decoder_e__DOT__lt;
    CData/*0:0*/ cpu_top__DOT__decoder_e__DOT__ltu;
    CData/*0:0*/ cpu_top__DOT__decoder_e__DOT__add_flag;
    SData/*11:0*/ cpu_top__DOT__decoder_e__DOT__immS;
    SData/*12:0*/ cpu_top__DOT__decoder_e__DOT__immB;
    IData/*20:0*/ cpu_top__DOT__decoder_e__DOT__immJ;
    QData/*63:0*/ cpu_top__DOT__current_pc;
    QData/*63:0*/ cpu_top__DOT__dnpc;
    QData/*63:0*/ cpu_top__DOT__wr_data;
    QData/*63:0*/ cpu_top__DOT__rs1_data;
    QData/*63:0*/ cpu_top__DOT__rs2_data;
    QData/*63:0*/ cpu_top__DOT__alu_op1;
    QData/*63:0*/ cpu_top__DOT__alu_op2;
    QData/*63:0*/ cpu_top__DOT__alu_out;
    QData/*63:0*/ cpu_top__DOT__alu_e__DOT__slt_result;
    QData/*63:0*/ cpu_top__DOT__alu_e__DOT__sll_result;
    QData/*63:0*/ cpu_top__DOT__alu_e__DOT__adder2;
    QData/*63:0*/ cpu_top__DOT__alu_e__DOT__result;
    QData/*63:0*/ cpu_top__DOT__alu_e__DOT__reverse_op1;
    QData/*63:0*/ cpu_top__DOT__alu_e__DOT__shift_op;
    QData/*63:0*/ cpu_top__DOT__alu_e__DOT__shift_result;
    VlUnpacked<QData/*63:0*/, 3> cpu_top__DOT__nextpc_64bit_3sel__DOT__sel_data;
    VlUnpacked<QData/*63:0*/, 3> cpu_top__DOT__regin_64bit_3sel__DOT__sel_data;
    VlUnpacked<QData/*63:0*/, 32> cpu_top__DOT__gpr_e__DOT__gpr;
    VlUnpacked<CData/*0:0*/, 32> cpu_top__DOT__gpr_e__DOT__wen;
    VlUnpacked<QData/*63:0*/, 3> cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data;
    VlUnpacked<QData/*63:0*/, 2> cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__I_sys_clk;
    VlWide<6>/*191:0*/ cpu_top__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data;
    VlWide<6>/*191:0*/ cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data;
    VlWide<6>/*191:0*/ cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data;
    VlWide<4>/*127:0*/ cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data;
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
