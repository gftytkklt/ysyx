// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040750_cpu_top.h for the primary calling header

#include "Vysyx_22040750_cpu_top___024root.h"
#include "Vysyx_22040750_cpu_top__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_wb_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__set_wb_ptr__Vdpioc2_TOP(const CData/*0:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__set_wb_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT8, VLVD_IN, VerilatedVarProps::Packed(), 0, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_wb_ptr(&a__Vopenarray);
}

extern "C" void set_wb_bubble_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__set_wb_bubble_ptr__Vdpioc2_TOP(const CData/*0:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__set_wb_bubble_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT8, VLVD_IN, VerilatedVarProps::Packed(), 0, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_wb_bubble_ptr(&a__Vopenarray);
}

extern "C" void set_wb_pc_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__set_wb_pc_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__set_wb_pc_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_wb_pc_ptr(&a__Vopenarray);
}

extern "C" void set_skip_pc_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__set_skip_pc_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__set_skip_pc_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_skip_pc_ptr(&a__Vopenarray);
}

extern "C" void set_wb_inst_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__set_wb_inst_ptr__Vdpioc2_TOP(const IData/*31:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__set_wb_inst_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_wb_inst_ptr(&a__Vopenarray);
}

extern "C" void sim_end();

VL_INLINE_OPT void Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__sim_end_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__sim_end_TOP\n"); );
    // Body
    sim_end();
}

extern "C" void set_pc_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__pc_e__DOT__set_pc_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__pc_e__DOT__set_pc_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_pc_ptr(&a__Vopenarray);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__gpr_e__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__gpr_e__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

VL_INLINE_OPT void Vysyx_22040750_cpu_top___024root___sequent__TOP__1(Vysyx_22040750_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750_cpu_top___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__ID_EX_reg_wen;
    CData/*0:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__ID_EX_bubble;
    CData/*6:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel;
    CData/*0:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process;
    CData/*0:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process;
    CData/*5:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt;
    CData/*0:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_bubble;
    CData/*2:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel;
    CData/*4:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr;
    CData/*0:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen;
    CData/*0:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_wen;
    CData/*0:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_intr;
    CData/*0:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_mret;
    CData/*0:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_wen;
    CData/*0:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr;
    CData/*0:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_mret;
    SData/*8:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__ID_EX_rstrb;
    SData/*8:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_rstrb;
    SData/*11:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_addr;
    SData/*11:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr;
    IData/*31:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__IF_ID_inst;
    IData/*31:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_inst;
    VlWide<3>/*95:0*/ __Vtemp38;
    VlWide<3>/*95:0*/ __Vtemp40;
    VlWide<4>/*127:0*/ __Vtemp43;
    VlWide<4>/*127:0*/ __Vtemp47;
    VlWide<4>/*127:0*/ __Vtemp49;
    VlWide<4>/*127:0*/ __Vtemp50;
    VlWide<5>/*159:0*/ __Vtemp65;
    VlWide<3>/*95:0*/ __Vtemp82;
    VlWide<3>/*95:0*/ __Vtemp83;
    CData/*31:0*/ __Vtemp96;
    VlWide<4>/*127:0*/ __Vtemp100;
    VlWide<4>/*127:0*/ __Vtemp106;
    VlWide<5>/*159:0*/ __Vtemp133;
    VlWide<5>/*159:0*/ __Vtemp134;
    VlWide<5>/*159:0*/ __Vtemp135;
    VlWide<5>/*159:0*/ __Vtemp136;
    VlWide<5>/*159:0*/ __Vtemp137;
    VlWide<3>/*95:0*/ __Vtemp148;
    VlWide<3>/*95:0*/ __Vtemp149;
    VlWide<3>/*95:0*/ __Vtemp150;
    VlWide<3>/*95:0*/ __Vtemp151;
    VlWide<3>/*95:0*/ __Vtemp152;
    QData/*63:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__current_pc;
    QData/*63:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__IF_ID_pc;
    QData/*63:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr;
    QData/*63:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_alu_out;
    QData/*63:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_intr_no;
    QData/*63:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_pc;
    QData/*63:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr_no;
    QData/*63:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v1;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v2;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v3;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v4;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v5;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v6;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v7;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v8;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v9;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v10;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v11;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v12;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v13;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v14;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v15;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v16;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v17;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v18;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v19;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v20;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v21;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v22;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v23;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v24;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v25;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v26;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v27;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v28;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v29;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v30;
    QData/*63:0*/ __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v31;
    QData/*63:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus;
    QData/*63:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mscratch;
    QData/*63:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mcause;
    QData/*63:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mepc;
    QData/*63:0*/ __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mtvec;
    // Body
    __Vdly__ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt 
        = vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt;
    __Vdly__ysyx_22040750_cpu_top__DOT__ID_EX_bubble 
        = vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_bubble;
    __Vdly__ysyx_22040750_cpu_top__DOT__ID_EX_rstrb 
        = vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rstrb;
    __Vdly__ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel 
        = vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel;
    __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_mret 
        = vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_mret;
    __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_intr_no 
        = vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_intr_no;
    __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_intr 
        = vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_intr;
    __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_rstrb 
        = vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rstrb;
    __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_inst 
        = vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_inst;
    __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_bubble 
        = vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_bubble;
    __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_mret 
        = vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_mret;
    __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr_no 
        = vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr_no;
    __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr 
        = vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr;
    __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_pc = vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_pc;
    __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel 
        = vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel;
    __Vdly__ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process 
        = vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process;
    __Vdly__ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process 
        = vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process;
    __Vdly__ysyx_22040750_cpu_top__DOT__current_pc 
        = vlSelf->ysyx_22040750_cpu_top__DOT__current_pc;
    __Vdly__ysyx_22040750_cpu_top__DOT__IF_ID_pc = vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc;
    __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_wen 
        = vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_wen;
    __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_addr 
        = vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_addr;
    __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr 
        = vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr;
    __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr 
        = vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr;
    __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_wen 
        = vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_wen;
    __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mtvec 
        = vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mtvec;
    __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mscratch 
        = vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mscratch;
    __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mcause 
        = vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mcause;
    __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mepc 
        = vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mepc;
    __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus 
        = vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus;
    __Vdly__ysyx_22040750_cpu_top__DOT__ID_EX_reg_wen 
        = vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_wen;
    __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen 
        = vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen;
    __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_alu_out 
        = vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_alu_out;
    __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr 
        = vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr;
    __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr 
        = vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr;
    __Vdly__ysyx_22040750_cpu_top__DOT__IF_ID_inst 
        = vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst;
    if (((0x100073U == vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_inst) 
         & (~ (IData)(vlSelf->I_rst)))) {
        Vysyx_22040750_cpu_top___024root____Vdpiimwrap_ysyx_22040750_cpu_top__DOT__sim_end_TOP();
    }
    __Vdly__ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt 
        = ((IData)(vlSelf->I_rst) ? 0U : ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process)
                                           ? (0x3fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt)))
                                           : 0U));
    vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_en 
        = (1U & (~ (IData)(vlSelf->I_rst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__inst_cache 
        = ((IData)(vlSelf->I_rst) ? 0U : (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_ready_go) 
                                           & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin)))
                                           ? vlSelf->I_inst
                                           : vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__inst_cache));
    vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_valid 
        = ((~ (IData)(vlSelf->I_rst)) & ((IData)(vlSelf->O_pc_valid) 
                                         | ((~ ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_valid) 
                                                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin))) 
                                            & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_valid))));
    __Vdly__ysyx_22040750_cpu_top__DOT__ID_EX_bubble 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                                          ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_bubble)
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_bubble)));
    if (vlSelf->I_rst) {
        __Vdly__ysyx_22040750_cpu_top__DOT__ID_EX_rstrb = 0U;
        __Vdly__ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel = 0U;
    } else {
        __Vdly__ysyx_22040750_cpu_top__DOT__ID_EX_rstrb 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__mem_rstrb)
                : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rstrb));
        __Vdly__ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_op_sel)
                : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel));
    }
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_multicycle 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin)) 
                                         & (0U != (0xfU 
                                                   & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op_sel) 
                                                      >> 0xaU)))));
    __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_mret 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid) 
                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))
                                          ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_mret)
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_mret)));
    __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_intr_no 
        = ((IData)(vlSelf->I_rst) ? 0ULL : (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid) 
                                             & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))
                                             ? vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_intr_no
                                             : vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_intr_no));
    __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_intr 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid) 
                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))
                                          ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_intr)
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_intr)));
    if (vlSelf->I_rst) {
        __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_rstrb = 0U;
        __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_inst = 0U;
    } else {
        __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_rstrb 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))
                ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rstrb)
                : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rstrb));
        __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_inst 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_inst
                : vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_inst);
    }
    __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_bubble 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid) 
                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))
                                          ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_bubble)
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_bubble)));
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_wen 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid) 
                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))
                                          ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_mem_wen)
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_wen)));
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_wstrb 
        = ((IData)(vlSelf->I_rst) ? 0U : (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid) 
                                           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))
                                           ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_wstrb)
                                           : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_wstrb)));
    vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__cache_valid 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_ready_go) 
                                          & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin))) 
                                         | ((~ ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__cache_valid) 
                                                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin))) 
                                            & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__cache_valid))));
    __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_mret 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin) 
                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid))
                                          ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_mret)
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_mret)));
    __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr_no 
        = ((IData)(vlSelf->I_rst) ? 0ULL : (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin) 
                                             & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid))
                                             ? vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_intr_no
                                             : vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr_no));
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_bubble 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin) 
                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid))
                                          ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_bubble)
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_bubble)));
    __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin) 
                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid))
                                          ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_intr)
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr)));
    if (vlSelf->I_rst) {
        vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_inst = 0U;
        __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_pc = 0ULL;
    } else {
        vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_inst 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_inst
                : vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_inst);
        __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_pc 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_pc
                : vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_pc);
    }
    vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_reg_e__DOT__input_valid 
        = ((~ (IData)(vlSelf->I_rst)) & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin)
                                          ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_valid)
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_reg_e__DOT__input_valid)));
    __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel 
        = ((IData)(vlSelf->I_rst) ? 0U : (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid) 
                                           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))
                                           ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel)
                                           : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel)));
    __Vdly__ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process 
        = ((~ (IData)(vlSelf->I_rst)) & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid) 
                                         | ((~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_out_valid)) 
                                            & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process))));
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__mem_rd_en 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid) 
                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin)) 
                                         & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel) 
                                            >> 1U)));
    vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_bubble 
        = (1U & ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_valid) 
                                                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin))
                                                ? (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))
                                                : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_bubble))));
    __Vdly__ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process 
        = ((~ (IData)(vlSelf->I_rst)) & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid) 
                                         | ((~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid)) 
                                            & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process))));
    if (vlSelf->I_rst) {
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__iter_cnt = 0U;
        __Vdly__ysyx_22040750_cpu_top__DOT__current_pc = 0x7ffffffcULL;
    } else {
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__iter_cnt 
            = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid)
                ? 0U : ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process)
                         ? (0x3fU & ((IData)(1U) + (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__iter_cnt)))
                         : 0U));
        __Vdly__ysyx_22040750_cpu_top__DOT__current_pc 
            = ((IData)(vlSelf->O_pc_valid) ? vlSelf->ysyx_22040750_cpu_top__DOT__dnpc
                : vlSelf->ysyx_22040750_cpu_top__DOT__current_pc);
    }
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_intr 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                                          ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_intr)
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_intr)));
    __Vdly__ysyx_22040750_cpu_top__DOT__IF_ID_pc = 
        ((IData)(vlSelf->I_rst) ? 0ULL : (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_valid) 
                                           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin))
                                           ? (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))
                                                                 ? (IData)(
                                                                           (vlSelf->ysyx_22040750_cpu_top__DOT__current_pc 
                                                                            >> 0x20U))
                                                                 : (IData)(
                                                                           (vlSelf->ysyx_22040750_cpu_top__DOT__current_pc 
                                                                            >> 0x20U))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))
                                                                  ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__current_pc)
                                                                  : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__current_pc)))))
                                           : vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc));
    __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_wen 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid) 
                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))
                                          ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_wen)
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_wen)));
    if (vlSelf->I_rst) {
        __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_addr = 0U;
        __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr = 0ULL;
        __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr = 0U;
    } else {
        __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_addr 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))
                ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_addr)
                : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_addr));
        __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr
                : vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr);
        __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid))
                ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_addr)
                : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr));
    }
    __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_wen 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin) 
                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid))
                                          ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_wen)
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_wen)));
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_wen 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                                          ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_wen)
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_wen)));
    if (vlSelf->I_rst) {
        __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mtvec = 0ULL;
    } else if (vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_wen) {
        if ((0x341U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr))) {
            if ((0x300U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr))) {
                if ((0x305U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr))) {
                    __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mtvec 
                        = vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr;
                }
            }
        }
    } else {
        __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mtvec 
            = vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mtvec;
    }
    if (vlSelf->I_rst) {
        __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mscratch = 0ULL;
    } else if (vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_wen) {
        if ((0x341U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr))) {
            if ((0x300U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr))) {
                if ((0x305U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr))) {
                    if ((0x342U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr))) {
                        if ((0x340U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr))) {
                            __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mscratch 
                                = vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr;
                        }
                    }
                }
            }
        }
    } else {
        __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mscratch 
            = vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mscratch;
    }
    if (vlSelf->I_rst) {
        __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mcause = 0ULL;
    } else if (vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_wen) {
        if ((0x341U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr))) {
            if ((0x300U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr))) {
                if ((0x305U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr))) {
                    if ((0x342U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr))) {
                        __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mcause 
                            = vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr;
                    }
                }
            }
        }
    } else {
        __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mcause 
            = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr)
                ? vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr_no
                : vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mcause);
    }
    if (vlSelf->I_rst) {
        __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mepc = 0ULL;
    } else if (vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_wen) {
        if ((0x341U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr))) {
            __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mepc 
                = vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr;
        }
    } else {
        __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mepc 
            = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr)
                ? vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_pc
                : vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mepc);
    }
    if (vlSelf->I_rst) {
        __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus = 0xa00001800ULL;
    } else if (vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_wen) {
        if ((0x341U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr))) {
            if ((0x300U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr))) {
                __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus 
                    = vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr;
            }
        }
    } else {
        __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus 
            = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr)
                ? ((0xffffffffffffff00ULL & vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus) 
                   | (QData)((IData)((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mie) 
                                       << 7U) | ((0x70U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus 
                                                              >> 4U)) 
                                                     << 4U)) 
                                                 | (7U 
                                                    & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus)))))))
                : ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_mret)
                    ? ((0xffffffffffffff00ULL & vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus) 
                       | (QData)((IData)((0x80U | (
                                                   (0x70U 
                                                    & ((IData)(
                                                               (vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus 
                                                                >> 4U)) 
                                                       << 4U)) 
                                                   | (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mpie) 
                                                       << 3U) 
                                                      | (7U 
                                                         & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus))))))))
                    : vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus));
    }
    __Vdly__ysyx_22040750_cpu_top__DOT__ID_EX_reg_wen 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                                          ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__reg_wen)
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_wen)));
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr 
        = ((IData)(vlSelf->I_rst) ? 0ULL : (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid) 
                                             & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))
                                             ? (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__csr_alu_e__DOT__op 
                                                  & (- (QData)((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0x24U 
                                                                         & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel))))))) 
                                                 | ((vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr 
                                                     | vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__csr_alu_e__DOT__op) 
                                                    & (- (QData)((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x12U 
                                                                           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel)))))))) 
                                                | ((vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr 
                                                    & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__csr_alu_e__DOT__op)) 
                                                   & (- (QData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (9U 
                                                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel))))))))
                                             : vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr));
    if (vlSelf->I_rst) {
        __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen = 0U;
        __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen = 0U;
    } else if (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))) {
        __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen 
            = vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_wen;
        __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen 
            = vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_wen;
    } else {
        __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen 
            = vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen;
        __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen 
            = vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen;
    }
    if (vlSelf->I_rst) {
        __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_alu_out = 0ULL;
        vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_regin_sel = 0U;
    } else {
        __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_alu_out 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__alu_out
                : vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_alu_out);
        vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_regin_sel 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid))
                ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel)
                : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_regin_sel));
    }
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__input_valid 
        = ((~ (IData)(vlSelf->I_rst)) & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin)
                                          ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid)
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__input_valid)));
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid 
        = ((~ (IData)(vlSelf->I_rst)) & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin)
                                          ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid)
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid)));
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_wen 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin) 
                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid))
                                          ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen)
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_wen)));
    if (vlSelf->I_rst) {
        __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr = 0U;
        vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr = 0U;
    } else {
        __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))
                ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rd_addr)
                : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr));
        vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid))
                ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr)
                : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr));
    }
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid) 
                                          & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))) 
                                         | ((~ ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid) 
                                                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))) 
                                            & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid))));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_out_valid) 
                                          & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))) 
                                         | ((~ ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid) 
                                                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))) 
                                            & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid))));
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr = 
        ((IData)(vlSelf->I_rst) ? 0ULL : (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                                           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                                           ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_forward_data
                                           : vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr));
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid 
        = ((~ (IData)(vlSelf->I_rst)) & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin)
                                          ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid)
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid)));
    if (vlSelf->I_rst) {
        __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr = 0ULL;
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg = 0ULL;
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg = 0ULL;
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg = 0ULL;
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg = 0ULL;
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_quotient = 0ULL;
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result[0U] = 0U;
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result[1U] = 0U;
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result[2U] = 0U;
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result[3U] = 0U;
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result[4U] = 0U;
    } else {
        __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__result
                : vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr);
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid) 
                & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin)))
                ? (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U])))
                : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg);
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid) 
                & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin)))
                ? (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U])))
                : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg);
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_out_valid) 
                & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin)))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result
                : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg);
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_out_valid) 
                & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin)))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result
                : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg);
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_quotient 
            = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process)
                ? ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_quotient 
                    << 1U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q)))
                : 0ULL);
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result[0U] 
            = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                ? 0U : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U]);
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result[1U] 
            = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                ? 0U : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U]);
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result[2U] 
            = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                ? 0U : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U]);
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result[3U] 
            = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                ? 0U : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U]);
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result[4U] 
            = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                ? 0U : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[4U]);
    }
    VL_EXTEND_WQ(65,64, __Vtemp38, (- (((QData)((IData)(
                                                        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp40, (((QData)((IData)(
                                                     vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[0U]))));
    VL_SHIFTR_WWI(128,128,32, __Vtemp43, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor, 1U);
    if (vlSelf->I_rst) {
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor[0U] = 0U;
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor[1U] = 0U;
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor[2U] = 0U;
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor[3U] = 0U;
        vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_alu_out = 0ULL;
        vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb = 0U;
    } else {
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor[0U] 
            = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid)
                ? 0U : __Vtemp43[0U]);
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor[1U] 
            = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid)
                ? ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag)
                    ? (__Vtemp38[0U] << 0x1fU) : (__Vtemp40[0U] 
                                                  << 0x1fU))
                : __Vtemp43[1U]);
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor[2U] 
            = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid)
                ? ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag)
                    ? ((__Vtemp38[0U] >> 1U) | (__Vtemp38[1U] 
                                                << 0x1fU))
                    : ((__Vtemp40[0U] >> 1U) | (__Vtemp40[1U] 
                                                << 0x1fU)))
                : __Vtemp43[2U]);
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor[3U] 
            = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid)
                ? ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag)
                    ? ((__Vtemp38[1U] >> 1U) | (__Vtemp38[2U] 
                                                << 0x1fU))
                    : ((__Vtemp40[1U] >> 1U) | (__Vtemp40[2U] 
                                                << 0x1fU)))
                : __Vtemp43[3U]);
        vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_alu_out 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_alu_out
                : vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_alu_out);
        vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid))
                ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rstrb)
                : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb));
    }
    VL_EXTEND_WQ(128,64, __Vtemp49, (- (((QData)((IData)(
                                                         vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U])))));
    VL_EXTEND_WQ(128,64, __Vtemp50, (((QData)((IData)(
                                                      vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U]))));
    if (vlSelf->I_rst) {
        __Vtemp47[1U] = 0U;
        __Vtemp47[2U] = 0U;
        __Vtemp47[3U] = 0U;
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[0U] = 0U;
    } else {
        __Vtemp47[1U] = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid)
                          ? ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag)
                              ? __Vtemp49[1U] : __Vtemp50[1U])
                          : ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q)
                              ? vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result[1U]
                              : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[1U]));
        __Vtemp47[2U] = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid)
                          ? ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag)
                              ? __Vtemp49[2U] : __Vtemp50[2U])
                          : ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q)
                              ? vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result[2U]
                              : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[2U]));
        __Vtemp47[3U] = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid)
                          ? ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag)
                              ? __Vtemp49[3U] : __Vtemp50[3U])
                          : ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q)
                              ? vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result[3U]
                              : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[3U]));
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[0U] 
            = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid)
                ? ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag)
                    ? __Vtemp49[0U] : __Vtemp50[0U])
                : ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q)
                    ? vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result[0U]
                    : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[0U]));
    }
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[1U] 
        = __Vtemp47[1U];
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[2U] 
        = __Vtemp47[2U];
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[3U] 
        = __Vtemp47[3U];
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_mret 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                                          ? (0x30200073U 
                                             == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_mret)));
    if (vlSelf->I_rst) {
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_intr_no = 0ULL;
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_inst = 0U;
    } else {
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_intr_no 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                ? ((0x73U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)
                    ? 0xbULL : ((0x100073U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)
                                 ? 4ULL : 0ULL)) : vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_intr_no);
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_inst 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst
                : vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_inst);
    }
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_mem_wen 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                                          ? (0x23U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_mem_wen)));
    if (vlSelf->I_rst) {
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_wstrb = 0U;
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_uimm = 0U;
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel = 0U;
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_addr = 0U;
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rd_addr = 0U;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v0 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v1 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v2 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v3 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v4 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v5 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v6 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v7 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v8 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v9 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v10 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v11 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v12 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v13 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v14 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v15 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v16 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v17 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v18 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v19 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v20 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v21 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v22 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v23 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v24 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v25 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v26 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v27 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v28 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v29 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v30 = 0ULL;
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v31 = 0ULL;
        vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_data = 0ULL;
        vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_shamt = 0U;
        __Vtemp65[1U] = 0U;
        __Vtemp65[2U] = 0U;
        __Vtemp65[3U] = 0U;
        __Vtemp65[4U] = 0U;
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] = 0U;
    } else {
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_wstrb 
            = (0xffU & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                         & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                         ? ((((- (IData)((IData)((0x3023U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))) 
                              | (0xfU & (- (IData)((IData)(
                                                           (0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))))) 
                             | (3U & (- (IData)((IData)(
                                                        (0x1023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))))) 
                            | (1U & (- (IData)((IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))))))
                         : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_wstrb)));
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_uimm 
            = (0x1fU & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                         & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                         ? (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                            >> 0xfU) : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_uimm)));
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                ? ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__reg_wen) 
                     & (3U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                    << 1U) | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__reg_wen) 
                              & (3U != (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))
                : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel));
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_addr 
            = (0xfffU & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                          ? (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                             >> 0x14U) : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_addr)));
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rd_addr 
            = (0x1fU & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                         & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                         ? (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                            >> 7U) : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rd_addr)));
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v0 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0U] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0U]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v1 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [1U] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [1U]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v2 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [2U] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [2U]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v3 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [3U] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [3U]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v4 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [4U] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [4U]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v5 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [5U] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [5U]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v6 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [6U] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [6U]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v7 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [7U] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [7U]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v8 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [8U] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [8U]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v9 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [9U] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [9U]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v10 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0xaU] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0xaU]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v11 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0xbU] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0xbU]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v12 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0xcU] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0xcU]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v13 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0xdU] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0xdU]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v14 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0xeU] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0xeU]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v15 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0xfU] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0xfU]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v16 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0x10U] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0x10U]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v17 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0x11U] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0x11U]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v18 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0x12U] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0x12U]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v19 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0x13U] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0x13U]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v20 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0x14U] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0x14U]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v21 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0x15U] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0x15U]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v22 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0x16U] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0x16U]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v23 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0x17U] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0x17U]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v24 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0x18U] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0x18U]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v25 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0x19U] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0x19U]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v26 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0x1aU] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0x1aU]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v27 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0x1bU] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0x1bU]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v28 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0x1cU] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0x1cU]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v29 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0x1dU] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0x1dU]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v30 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0x1eU] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0x1eU]);
        __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v31 
            = (vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen
               [0x1fU] ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
               [0x1fU]);
        vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_data 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid))
                ? vlSelf->I_mem_rd_data : vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_data);
        vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_shamt 
            = (7U & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin) 
                      & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid))
                      ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr)
                      : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_shamt)));
        __Vtemp65[1U] = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                          ? (IData)(((((QData)((IData)(
                                                       vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[0U]))) 
                                     >> 0x20U)) : (
                                                   (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] 
                                                    >> 0x1eU) 
                                                   | (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U] 
                                                      << 2U)));
        __Vtemp65[2U] = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                          ? (- (IData)(((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U] 
                                         >> 0x1fU) 
                                        & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))))
                          : ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U] 
                              >> 0x1eU) | (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U] 
                                           << 2U)));
        __Vtemp65[3U] = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                          ? (- (IData)(((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U] 
                                         >> 0x1fU) 
                                        & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))))
                          : ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U] 
                              >> 0x1eU) | (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U] 
                                           << 2U)));
        __Vtemp65[4U] = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                          ? (0xfU & (- (IData)(((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U] 
                                                 >> 0x1fU) 
                                                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1)))))
                          : ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U] 
                              >> 0x1eU) | (0xcU & (
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U] 
                                                   << 2U))));
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] 
            = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                ? (IData)((((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[0U]))))
                : (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] 
                   << 2U));
    }
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U] 
        = __Vtemp65[1U];
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U] 
        = __Vtemp65[2U];
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U] 
        = __Vtemp65[3U];
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U] 
        = __Vtemp65[4U];
    __Vtemp82[0U] = ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[1U] 
                      << 0x1eU) | (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                   >> 2U));
    __Vtemp82[1U] = ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[2U] 
                      << 0x1eU) | (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[1U] 
                                   >> 2U));
    __Vtemp82[2U] = (1U & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[2U] 
                           >> 2U));
    VL_EXTEND_WW(67,65, __Vtemp83, __Vtemp82);
    if (vlSelf->I_rst) {
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] = 0U;
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[1U] = 0U;
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[2U] = 0U;
        __Vdly__ysyx_22040750_cpu_top__DOT__IF_ID_inst = 0U;
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_sext = 0U;
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel = 0U;
    } else {
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
            = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                ? ((IData)((((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U])))) 
                   << 1U) : __Vtemp83[0U]);
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[1U] 
            = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                ? (((IData)((((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U])))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                            vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U]))) 
                                          >> 0x20U)) 
                                 << 1U)) : __Vtemp83[1U]);
        vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[2U] 
            = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid)
                ? ((6U & ((- (IData)(((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U] 
                                       >> 0x1fU) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1)))) 
                          << 1U)) | ((IData)(((((QData)((IData)(
                                                                vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U]))) 
                                              >> 0x20U)) 
                                     >> 0x1fU)) : __Vtemp83[2U]);
        __Vdly__ysyx_22040750_cpu_top__DOT__IF_ID_inst 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin))
                ? ((1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))
                    ? vlSelf->ysyx_22040750_cpu_top__DOT__current_inst
                    : 0x13U) : vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst);
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_sext 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op_sext)
                : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_sext));
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op_sel)
                : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel));
    }
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask 
        = ((~ (IData)(vlSelf->I_rst)) & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                                          ? ((0x1bU 
                                              == (0x7fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                             | (0x3bU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))
                                          : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)));
    if (vlSelf->I_rst) {
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op2_sel = 0U;
        vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2 = 0ULL;
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_imm = 0ULL;
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs2 = 0ULL;
        __Vtemp96 = 0U;
    } else {
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op2_sel 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                ? (((1U & (- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR)))) 
                    | (2U & (- (IData)((((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI) 
                                           & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR))) 
                                          | (0x23U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                         | (0x63U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                        | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU)))))) 
                   | (4U & (- (IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))))))
                : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op2_sel));
        vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs2
                : vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2);
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_imm 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__imm
                : vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_imm);
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs2 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__rs2_forward_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs2);
        __Vtemp96 = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                      & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                      ? (((1U & (- (IData)(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR) 
                                              | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI) 
                                                 & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR)))) 
                                             | (0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                            | (0x73U 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))))) 
                          | (2U & (- (IData)(((((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                | (0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                               | (0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                              | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR)))))) 
                         | (4U & (- (IData)((0x37U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))))
                      : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op1_sel));
    }
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op1_sel 
        = __Vtemp96;
    if (vlSelf->I_rst) {
        vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_pc = 0ULL;
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_pc = 0ULL;
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs1 = 0ULL;
    } else {
        vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_pc 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_pc
                : vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_pc);
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_pc 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc
                : vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_pc);
        vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs1 
            = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data
                : vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs1);
    }
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rstrb 
        = __Vdly__ysyx_22040750_cpu_top__DOT__ID_EX_rstrb;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_bubble 
        = __Vdly__ysyx_22040750_cpu_top__DOT__ID_EX_bubble;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_mret 
        = __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_mret;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_intr_no 
        = __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_intr_no;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_bubble 
        = __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_bubble;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_intr 
        = __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_intr;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_inst 
        = __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_inst;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process 
        = __Vdly__ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_addr 
        = __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_addr;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_wen 
        = __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_csr_wen;
    vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mtvec 
        = __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mtvec;
    vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mscratch 
        = __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mscratch;
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr_no 
        = __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr_no;
    vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mcause 
        = __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mcause;
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_pc = __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_pc;
    vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mepc 
        = __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mepc;
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_mret 
        = __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_mret;
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr 
        = __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr;
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_wen 
        = __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_wen;
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr 
        = __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr;
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr 
        = __Vdly__ysyx_22040750_cpu_top__DOT__MEM_WB_csr;
    vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus 
        = __Vdly__ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel 
        = __Vdly__ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel;
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_wen 
        = __Vdly__ysyx_22040750_cpu_top__DOT__ID_EX_reg_wen;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel 
        = __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen 
        = __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr 
        = __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process 
        = __Vdly__ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_alu_out 
        = __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_alu_out;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rstrb 
        = __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_rstrb;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0U] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v0;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[1U] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v1;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[2U] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v2;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[3U] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v3;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[4U] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v4;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[5U] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v5;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[6U] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v6;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[7U] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v7;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[8U] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v8;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[9U] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v9;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0xaU] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v10;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0xbU] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v11;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0xcU] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v12;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0xdU] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v13;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0xeU] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v14;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0xfU] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v15;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0x10U] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v16;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0x11U] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v17;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0x12U] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v18;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0x13U] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v19;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0x14U] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v20;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0x15U] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v21;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0x16U] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v22;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0x17U] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v23;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0x18U] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v24;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0x19U] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v25;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0x1aU] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v26;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0x1bU] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v27;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0x1cU] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v28;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0x1dU] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v29;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0x1eU] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v30;
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0x1fU] 
        = __Vdlyvval__ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr__v31;
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr 
        = __Vdly__ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr;
    vlSelf->ysyx_22040750_cpu_top__DOT__current_pc 
        = __Vdly__ysyx_22040750_cpu_top__DOT__current_pc;
    vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
        = __Vdly__ysyx_22040750_cpu_top__DOT__IF_ID_inst;
    vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc = __Vdly__ysyx_22040750_cpu_top__DOT__IF_ID_pc;
    vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mie 
        = (1U & (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus 
                         >> 3U)));
    vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mpie 
        = (1U & (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus 
                         >> 7U)));
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin = 1U;
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_wen) 
           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid));
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__forward_unit_e__I_WB_reg_wen 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_wen) 
           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_out_valid 
        = (1U & ((~ (IData)(vlSelf->I_rst)) & ((0x3fU 
                                                == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt))
                                                ? 1U
                                                : 0U)));
    VL_SUB_W(4, __Vtemp100, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result[0U] 
        = __Vtemp100[0U];
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result[1U] 
        = __Vtemp100[1U];
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result[2U] 
        = __Vtemp100[2U];
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result[3U] 
        = __Vtemp100[3U];
    vlSelf->O_mem_addr = vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr;
    vlSelf->O_mem_wr_strb = (0xffU & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_wstrb) 
                                      << (7U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr))));
    vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data 
        = (vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_data 
           >> ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_shamt) 
               << 3U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid 
        = (1U & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__iter_cnt) 
                  >> 5U) | ((~ (IData)((0U != ((((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[1U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                    >> 1U)) 
                                                | ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[2U] 
                                                    << 0x1fU) 
                                                   | (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[1U] 
                                                      >> 1U))) 
                                               | (3U 
                                                  & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[2U] 
                                                     >> 1U)))))) 
                            & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process))));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                  >> 2U) & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                              >> 1U) & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                            | ((~ (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                   >> 1U)) & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U]))));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                   >> 2U) & (~ (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                >> 1U))) & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid 
        = ((IData)((0U != (0xc00U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel)))) 
           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_multicycle));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid 
        = ((IData)((0U != (0x3000U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel)))) 
           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_multicycle));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__cin 
        = ((IData)((0U != (0xeU & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))))
            ? 1ULL : 0ULL);
    vlSelf->O_mem_wr_data = ((0x80U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_wstrb))
                              ? vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2
                              : ((8U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_wstrb))
                                  ? (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))
                                  : ((2U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_wstrb))
                                      ? (((QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))) 
                                          << 0x30U) 
                                         | (((QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))) 
                                             << 0x20U) 
                                            | (((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))))))
                                      : (((QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))) 
                                                   << 0x20U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))) 
                                                      << 0x18U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))) 
                                                         << 0x10U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2)))) 
                                                            << 8U) 
                                                           | (QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2))))))))))))));
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[0U] 
        = (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs2);
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[1U] 
        = (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs2 
                   >> 0x20U));
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[2U] 
        = (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_imm);
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[3U] 
        = (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_imm 
                   >> 0x20U));
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[4U] = 4U;
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[5U] = 0U;
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LD 
        = (IData)((0x3003U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LW 
        = (IData)((0x2003U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LWU 
        = (IData)((0x6003U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LH 
        = (IData)((0x1003U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LHU 
        = (IData)((0x5003U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LB 
        = (IData)((3U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL 
        = (IData)(((0x33U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                   & (1U == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                             >> 0x19U))));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH 
        = (IData)(((0x1033U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                   & (1U == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                             >> 0x19U))));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU 
        = (IData)(((0x2033U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                   & (1U == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                             >> 0x19U))));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV 
        = (IData)(((0x4033U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                   & (1U == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                             >> 0x19U))));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM 
        = (IData)(((0x6033U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                   & (1U == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                             >> 0x19U))));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW 
        = (IData)(((0x3bU == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                   & (1U == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                             >> 0x19U))));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIVW 
        = (IData)(((0x403bU == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                   & (1U == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                             >> 0x19U))));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REMW 
        = (IData)(((0x603bU == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                   & (1U == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                             >> 0x19U))));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immS 
        = ((0xfe0U & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                      >> 0x14U)) | (0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                             >> 7U)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immB 
        = ((0x1000U & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                       >> 0x13U)) | ((0x800U & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                            >> 7U)))));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immJ 
        = ((0x100000U & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                         >> 0xbU)) | ((0xff000U & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst) 
                                      | ((0x800U & 
                                          (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x14U)))));
    vlSelf->ysyx_22040750_cpu_top__DOT__csr_intr = 
        ((0x73U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst) 
         | (0x100073U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU 
        = ((0x17U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
           | (0x37U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR 
        = (IData)((0x67U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRWI 
        = (IData)((0x5073U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRSI 
        = (IData)((0x6073U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRCI 
        = (IData)((0x7073U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR 
        = ((0x33U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
           | (0x3bU == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI 
        = ((((0x67U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
             | (3U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
            | (0x13U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
           | (0x1bU == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRW 
        = (IData)((0x1073U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRS 
        = (IData)((0x2073U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRC 
        = (IData)((0x3073U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
    VL_EXTEND_WQ(128,64, __Vtemp106, vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_pc);
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[0U] 
        = (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs1);
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[1U] 
        = (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs1 
                   >> 0x20U));
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[2U] 
        = __Vtemp106[0U];
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[3U] 
        = __Vtemp106[1U];
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[4U] 
        = __Vtemp106[2U];
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[5U] 
        = __Vtemp106[3U];
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[1U] 
        = ((1U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[2U] 
        = ((2U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[3U] 
        = ((3U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[4U] 
        = ((4U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[5U] 
        = ((5U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[6U] 
        = ((6U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[7U] 
        = ((7U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[8U] 
        = ((8U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[9U] 
        = ((9U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0xaU] 
        = ((0xaU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0xbU] 
        = ((0xbU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0xcU] 
        = ((0xcU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0xdU] 
        = ((0xdU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0xeU] 
        = ((0xeU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0xfU] 
        = ((0xfU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x10U] 
        = ((0x10U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x11U] 
        = ((0x11U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x12U] 
        = ((0x12U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x13U] 
        = ((0x13U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x14U] 
        = ((0x14U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x15U] 
        = ((0x15U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x16U] 
        = ((0x16U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x17U] 
        = ((0x17U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x18U] 
        = ((0x18U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x19U] 
        = ((0x19U == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x1aU] 
        = ((0x1aU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x1bU] 
        = ((0x1bU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x1cU] 
        = ((0x1cU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x1dU] 
        = ((0x1dU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x1eU] 
        = ((0x1eU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0x1fU] 
        = ((0x1fU == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr))
            ? (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt 
        = __Vdly__ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process)
            ? (1U & (~ (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result[3U] 
                        >> 0x1fU))) : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__mem_in = ((vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                   & (((QData)((IData)(
                                                                       (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 7U)))) 
                                                                         << 0x18U) 
                                                                        | ((0xff0000U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 6U)))) 
                                                                               << 0x10U)) 
                                                                           | ((0xff00U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 5U)))) 
                                                                                << 8U)) 
                                                                              | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 4U)))))))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 3U)))) 
                                                                          << 0x18U) 
                                                                         | ((0xff0000U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 2U)))) 
                                                                                << 0x10U)) 
                                                                            | ((0xff00U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 1U)))) 
                                                                                << 8U)) 
                                                                               | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb)))))))))))) 
                                                  | ((- (QData)((IData)(
                                                                        (1U 
                                                                         & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                             >> 8U) 
                                                                            & ((0xfU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb)))
                                                                                ? (IData)(
                                                                                (vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                                                >> 0x1fU))
                                                                                : 
                                                                               ((3U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb)))
                                                                                 ? (IData)(
                                                                                (vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb))) 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                                                >> 7U)))))))))) 
                                                     & (((QData)((IData)(
                                                                         (((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 7U))))) 
                                                                           << 0x18U) 
                                                                          | ((0xff0000U 
                                                                              & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 6U))))) 
                                                                                << 0x10U)) 
                                                                             | ((0xff00U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 5U))))) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 4U))))))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 3U))))) 
                                                                            << 0x18U) 
                                                                           | ((0xff0000U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 2U))))) 
                                                                                << 0x10U)) 
                                                                              | ((0xff00U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                                                                >> 1U))))) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb))))))))))))));
    __Vtemp133[0U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                            & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]))) 
                        & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                              & (1U | ((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]) 
                                       << 1U))))) & 
                       (~ ((- (IData)((1U & ((~ (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                 >> 2U)) 
                                             & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                  >> 1U) 
                                                 & (~ 
                                                    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                | ((~ 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                     >> 1U)) 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                           & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]))) 
                      & (~ ((- (IData)((1U & (((~ (
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 2U)) 
                                               & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                  >> 1U)) 
                                              & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                            & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] 
                               << 1U))));
    __Vtemp133[1U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                            & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]))) 
                        & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                              & (((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]) 
                                  >> 0x1fU) | ((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]) 
                                               << 1U))))) 
                       & (~ ((- (IData)((1U & ((~ (
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 2U)) 
                                               & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                    >> 1U) 
                                                   & (~ 
                                                      vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                  | ((~ 
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                             & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]))) 
                      & (~ ((- (IData)((1U & (((~ (
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 2U)) 
                                               & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                  >> 1U)) 
                                              & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                            & ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] 
                                >> 0x1fU) | (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U] 
                                             << 1U)))));
    __Vtemp133[2U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                            & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]))) 
                        & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                              & (((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]) 
                                  >> 0x1fU) | ((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]) 
                                               << 1U))))) 
                       & (~ ((- (IData)((1U & ((~ (
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 2U)) 
                                               & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                    >> 1U) 
                                                   & (~ 
                                                      vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                  | ((~ 
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                             & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]))) 
                      & (~ ((- (IData)((1U & (((~ (
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 2U)) 
                                               & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                  >> 1U)) 
                                              & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                            & ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U] 
                                >> 0x1fU) | (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U] 
                                             << 1U)))));
    __Vtemp133[3U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                            & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]))) 
                        & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                              & (((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]) 
                                  >> 0x1fU) | ((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]) 
                                               << 1U))))) 
                       & (~ ((- (IData)((1U & ((~ (
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 2U)) 
                                               & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                    >> 1U) 
                                                   & (~ 
                                                      vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                  | ((~ 
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                             & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]))) 
                      & (~ ((- (IData)((1U & (((~ (
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 2U)) 
                                               & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                  >> 1U)) 
                                              & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                            & ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U] 
                                >> 0x1fU) | (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U] 
                                             << 1U)))));
    __Vtemp133[4U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                            & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U]))) 
                        & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                              & (((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]) 
                                  >> 0x1fU) | (0xeU 
                                               & ((~ 
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U]) 
                                                  << 1U)))))) 
                       & (~ ((- (IData)((1U & ((~ (
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 2U)) 
                                               & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                    >> 1U) 
                                                   & (~ 
                                                      vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                  | ((~ 
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                             & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U]))) 
                      & (~ ((- (IData)((1U & (((~ (
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                   >> 2U)) 
                                               & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                  >> 1U)) 
                                              & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                            & ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U] 
                                >> 0x1fU) | (0xeU & 
                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U] 
                                              << 1U))))));
    __Vtemp134[0U] = (~ __Vtemp133[0U]);
    __Vtemp134[1U] = (~ __Vtemp133[1U]);
    __Vtemp134[2U] = (~ __Vtemp133[2U]);
    __Vtemp134[3U] = (~ __Vtemp133[3U]);
    __Vtemp134[4U] = (~ __Vtemp133[4U]);
    VL_ADD_W(5, __Vtemp135, __Vtemp134, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result);
    VL_EXTEND_WI(132,1, __Vtemp136, ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative) 
                                     | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative)));
    VL_ADD_W(5, __Vtemp137, __Vtemp135, __Vtemp136);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U] 
        = __Vtemp137[0U];
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U] 
        = __Vtemp137[1U];
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U] 
        = __Vtemp137[2U];
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U] 
        = __Vtemp137[3U];
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[4U] 
        = (0xfU & __Vtemp137[4U]);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[0U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[2U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data[4U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__mem_rstrb = 
        (((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LW) 
            | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LH)) 
           | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LB)) 
          << 8U) | ((0xf0U & ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LD))) 
                              << 4U)) | ((0xcU & ((- (IData)(
                                                             (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LD) 
                                                               | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LW)) 
                                                              | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LWU)))) 
                                                  << 2U)) 
                                         | (((((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LD) 
                                                 | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LW)) 
                                                | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LWU)) 
                                               | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LH)) 
                                              | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LHU)) 
                                             << 1U) 
                                            | (((((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LD) 
                                                    | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LW)) 
                                                   | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LWU)) 
                                                  | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LH)) 
                                                 | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LHU)) 
                                                | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LB)) 
                                               | (IData)(
                                                         (0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))))));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op_sext 
        = ((((((((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL) 
                   | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH)) 
                  | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                 | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV)) 
                | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM)) 
               | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW)) 
              | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIVW)) 
             | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REMW)) 
            << 1U) | (((((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL) 
                           | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH)) 
                          | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV)) 
                         | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM)) 
                        | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW)) 
                       | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIVW)) 
                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REMW)));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__add_flag 
        = ((((((((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU) 
                   | (0x63U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                  | (0x23U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                 | (3U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                | (0x6fU == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
               | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR)) 
              | (IData)((0x13U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))) 
             | (IData)((0x1bU == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))) 
            | (IData)(((0x33U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                       & (0U == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                 >> 0x19U))))) | (IData)(
                                                         ((0x3bU 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                              >> 0x19U)))));
    vlSelf->ysyx_22040750_cpu_top__DOT__imm = (((((
                                                   (- (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI))) 
                                                   & (((- (QData)((IData)(
                                                                          (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                         >> 0x14U))))) 
                                                  | ((- (QData)((IData)(
                                                                        (0x23U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))) 
                                                     & (((- (QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immS) 
                                                                                >> 0xbU))))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immS))))) 
                                                 | ((- (QData)((IData)(
                                                                       (0x63U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))) 
                                                    & (((- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immB) 
                                                                               >> 0xcU))))) 
                                                        << 0xdU) 
                                                       | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immB))))) 
                                                | ((- (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU))) 
                                                   & (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (0xfffff000U 
                                                                         & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))))) 
                                               | ((- (QData)((IData)(
                                                                     (0x6fU 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))) 
                                                  & (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immJ 
                                                                             >> 0x14U))))) 
                                                      << 0x15U) 
                                                     | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immJ)))));
    vlSelf->ysyx_22040750_cpu_top__DOT__csr_op_sel 
        = (((((0x73U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst) 
              | (0x100073U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
             | (0x30200073U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
            << 6U) | (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRW) 
                       << 5U) | (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRS) 
                                  << 4U) | (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRC) 
                                             << 3U) 
                                            | (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRWI) 
                                                << 2U) 
                                               | (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRSI) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRCI)))))));
    vlSelf->ysyx_22040750_cpu_top__DOT__csr_wen = (
                                                   (((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRW) 
                                                       | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRS)) 
                                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRC)) 
                                                     | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRWI)) 
                                                    | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRSI)) 
                                                   | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRCI));
    vlSelf->ysyx_22040750_cpu_top__DOT__stall_en = 
        ((((((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI) 
               | (0x23U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
              | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR)) 
             | (0x63U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
            | (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRW) 
                | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRS)) 
               | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRC))) 
           & (0U != (0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                              >> 0xfU)))) << 1U) | 
         ((((0x23U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
            | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR)) 
           | (0x63U == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
          & (0U != (0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                             >> 0x14U)))));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[0U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[2U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[4U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_out_valid 
        = ((0U != (0xfU & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                           >> 0xaU))) ? (1U & ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_out_valid) 
                                                 | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid)) 
                                                | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)) 
                                               | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)))
            : 1U);
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_2sel__I_sel_data[0U] 
        = (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_alu_out);
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_2sel__I_sel_data[1U] 
        = (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_alu_out 
                   >> 0x20U));
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_2sel__I_sel_data[2U] 
        = (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__mem_in);
    vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_2sel__I_sel_data[3U] 
        = (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__mem_in 
                   >> 0x20U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 = (
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op2_sel))))) 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data
                                                   [0U]);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 = (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                   | ((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op2_sel) 
                                                                             >> 1U))))) 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data
                                                      [1U]));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 = (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                   | ((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op2_sel) 
                                                                             >> 2U))))) 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data
                                                      [2U]));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op_sel 
        = (((((((((((((((1U & (- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__add_flag)))) 
                        | (2U & (- (IData)(((IData)(
                                                    ((0x33U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                     & (0x20U 
                                                        == 
                                                        (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                         >> 0x19U)))) 
                                            | (IData)(
                                                      ((0x3bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                       & (0x20U 
                                                          == 
                                                          (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                           >> 0x19U))))))))) 
                       | (4U & (- (IData)(((IData)(
                                                   (0x2013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                           | (IData)(
                                                     ((0x2033U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                      & (0U 
                                                         == 
                                                         (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                          >> 0x19U))))))))) 
                      | (8U & (- (IData)(((IData)((0x3013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                          | (IData)(
                                                    ((0x3033U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                     & (0U 
                                                        == 
                                                        (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                         >> 0x19U))))))))) 
                     | (0x10U & (- (IData)(((IData)(
                                                    (0x4013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                            | (IData)(
                                                      ((0x4033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                       & (0U 
                                                          == 
                                                          (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                           >> 0x19U))))))))) 
                    | (0x20U & (- (IData)(((IData)(
                                                   (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                           | (IData)(
                                                     ((0x6033U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                      & (0U 
                                                         == 
                                                         (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                          >> 0x19U))))))))) 
                   | (0x40U & (- (IData)(((IData)((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                          | (IData)(
                                                    ((0x7033U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                     & (0U 
                                                        == 
                                                        (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                         >> 0x19U))))))))) 
                  | (0x80U & (- (IData)(((((IData)(
                                                   ((0x1013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                    & (0U 
                                                       == 
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                        >> 0x1aU)))) 
                                           | (IData)(
                                                     ((0x1033U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                      & (0U 
                                                         == 
                                                         (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                          >> 0x19U))))) 
                                          | (IData)(
                                                    ((0x101bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                     & (0U 
                                                        == 
                                                        (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                         >> 0x19U))))) 
                                         | (IData)(
                                                   ((0x103bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                    & (0U 
                                                       == 
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                        >> 0x19U))))))))) 
                 | (0x100U & (- (IData)(((((IData)(
                                                   ((0x5013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                    & (0U 
                                                       == 
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                        >> 0x1aU)))) 
                                           | (IData)(
                                                     ((0x5033U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                      & (0U 
                                                         == 
                                                         (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                          >> 0x19U))))) 
                                          | (IData)(
                                                    ((0x501bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                     & (0U 
                                                        == 
                                                        (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                         >> 0x19U))))) 
                                         | (IData)(
                                                   ((0x503bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                    & (0U 
                                                       == 
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                        >> 0x19U))))))))) 
                | (0x200U & (- (IData)(((((IData)((
                                                   (0x5013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                   & (0x10U 
                                                      == 
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                       >> 0x1aU)))) 
                                          | (IData)(
                                                    ((0x5033U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                     & (0x20U 
                                                        == 
                                                        (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                         >> 0x19U))))) 
                                         | (IData)(
                                                   ((0x501bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                    & (0x20U 
                                                       == 
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                        >> 0x19U))))) 
                                        | (IData)((
                                                   (0x503bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                   & (0x20U 
                                                      == 
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                       >> 0x19U))))))))) 
               | (0x400U & (- (IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL) 
                                       | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW)))))) 
              | (0x800U & (- (IData)((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH) 
                                       | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                      | (IData)(((0x3033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                 & (1U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U))))))))) 
             | (0x1000U & (- (IData)(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV) 
                                        | (IData)((
                                                   (0x5033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                   & (1U 
                                                      == 
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                       >> 0x19U))))) 
                                       | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIVW)) 
                                      | (IData)(((0x503bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                 & (1U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U))))))))) 
            | (0x2000U & (- (IData)(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM) 
                                       | (IData)(((0x7033U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                  & (1U 
                                                     == 
                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                      >> 0x19U))))) 
                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REMW)) 
                                     | (IData)(((0x703bU 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                & (1U 
                                                   == 
                                                   (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                    >> 0x19U))))))))) 
           | (0x4000U & (- (IData)((0x73U == (0x7fU 
                                              & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))));
    vlSelf->ysyx_22040750_cpu_top__DOT__reg_wen = (
                                                   ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR) 
                                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI)) 
                                                     | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU)) 
                                                    | (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                                   | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_wen));
    vlSelf->ysyx_22040750_cpu_top__DOT__csr_forward_data 
        = ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_wen) 
             & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_wen)) 
            & ((vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                >> 0x14U) == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_addr)))
            ? vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr
            : ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_wen) 
                 & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_wen)) 
                & ((vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                    >> 0x14U) == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_addr)))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr
                : ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_wen) 
                     & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_wen)) 
                    & ((vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                        >> 0x14U) == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr)))
                    ? vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr
                    : ((2U == (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_intr) 
                                << 1U) | (0x30200073U 
                                          == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))
                        ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mtvec
                        : ((1U == (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_intr) 
                                    << 1U) | (0x30200073U 
                                              == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))
                            ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mepc
                            : ((0U == (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_intr) 
                                        << 1U) | (0x30200073U 
                                                  == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))
                                ? ((0x341U == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                               >> 0x14U))
                                    ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mepc
                                    : ((0x300U == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0x14U))
                                        ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus
                                        : ((0x305U 
                                            == (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                >> 0x14U))
                                            ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mtvec
                                            : ((0x342U 
                                                == 
                                                (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                 >> 0x14U))
                                                ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mcause
                                                : (
                                                   (0x340U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mscratch
                                                    : 0ULL)))))
                                : 0ULL))))));
    vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_stall 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid)
            ? (3U & ((0xfffffffeU & ((((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                 >> 0xfU)) 
                                       == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr)) 
                                      << 1U) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))) 
                     | (((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                   >> 0x14U)) == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr)) 
                        & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid)
            ? (3U & ((0xfffffffeU & ((((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                 >> 0xfU)) 
                                       == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr)) 
                                      << 1U) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))) 
                     | (((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                   >> 0x14U)) == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr)) 
                        & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__input_valid)
            ? (3U & ((0xfffffffeU & ((((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                 >> 0xfU)) 
                                       == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rd_addr)) 
                                      << 1U) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))) 
                     | (((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                   >> 0x14U)) == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rd_addr)) 
                        & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 = (
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op1_sel))))) 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data
                                                   [0U]);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 = (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                   | ((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op1_sel) 
                                                                             >> 1U))))) 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data
                                                      [1U]));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 = (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                   | ((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op1_sel) 
                                                                             >> 2U))))) 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data
                                                      [2U]));
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__input_valid) 
           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_out_valid));
    vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_2sel__DOT__sel_data[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_2sel__I_sel_data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_2sel__I_sel_data[0U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_2sel__DOT__sel_data[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_2sel__I_sel_data[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_2sel__I_sel_data[2U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2 
        = ((IData)((0U != (0xeU & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))))
            ? (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)
            : vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext2 
        = ((1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_sext))
            ? (1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                      ? (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                 >> 0x1fU)) : (IData)(
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                       >> 0x3fU))))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt 
        = (0x3fU & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                     ? (0x1fU & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2))
                     : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)));
    vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_stall 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_reg_e__DOT__input_valid) 
           & ((((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall)) 
                & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel) 
                   >> 1U)) | ((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall)) 
                              & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel) 
                                 >> 1U))) | ((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall)) 
                                             & (0U 
                                                != 
                                                (0xfU 
                                                 & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                                    >> 0xaU))))));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__csr_alu_e__DOT__op 
        = ((0U != (7U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel) 
                         >> 3U))) ? vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1
            : ((0U != (7U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel)))
                ? (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_uimm))
                : 0ULL));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1 
        = ((2U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_sext))
            ? (1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                      ? (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                 >> 0x1fU)) : (IData)(
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                       >> 0x3fU))))
            : 0U);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0xfffffffffffffff8ULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | (IData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                              >> 0x3dU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                             >> 0x3eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x3fU))))))));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0xffffffffffffffc7ULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x3aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x3bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x3cU))))))) 
              << 3U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0xfffffffffffffe3fULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x37U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x38U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x39U))))))) 
              << 6U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0xfffffffffffff1ffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x34U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x35U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x36U))))))) 
              << 9U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0xffffffffffff8fffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x31U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x32U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x33U))))))) 
              << 0xcU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0xfffffffffffc7fffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x30U))))))) 
              << 0xfU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0xffffffffffe3ffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x2dU))))))) 
              << 0x12U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0xffffffffff1fffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x2aU))))))) 
              << 0x15U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0xfffffffff8ffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x27U))))))) 
              << 0x18U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0xffffffffc7ffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x24U))))))) 
              << 0x1bU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0xfffffffe3fffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x21U))))))) 
              << 0x1eU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0xfffffff1ffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x1eU))))))) 
              << 0x21U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0xffffff8fffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x1bU))))))) 
              << 0x24U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0xfffffc7fffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x18U))))))) 
              << 0x27U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0xffffe3ffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x15U))))))) 
              << 0x2aU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0xffff1fffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0x12U))))))) 
              << 0x2dU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0xfff8ffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0xfU))))))) 
              << 0x30U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0xffc7ffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 0xcU))))))) 
              << 0x33U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0xfe3fffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 9U))))))) 
              << 0x36U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0xf1ffffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 6U))))))) 
              << 0x39U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0x8fffffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                               >> 3U))))))) 
              << 0x3cU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1 
        = ((0x7fffffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1) 
           | ((QData)((IData)((1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1)))) 
              << 0x3fU));
    vlSelf->ysyx_22040750_cpu_top__DOT__wr_data = (
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_regin_sel))))) 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_2sel__DOT__sel_data
                                                   [0U]);
    vlSelf->ysyx_22040750_cpu_top__DOT__wr_data = (vlSelf->ysyx_22040750_cpu_top__DOT__wr_data 
                                                   | ((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_regin_sel) 
                                                                             >> 1U))))) 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_2sel__DOT__sel_data
                                                      [1U]));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__result 
        = ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
            + vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2) 
           + vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__cin);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[0U] 
        = (IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                    ? (((QData)((IData)((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext2))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)))
                    : vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U] 
        = (IData)((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                     ? (((QData)((IData)((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext2))))) 
                         << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)))
                     : vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2) 
                   >> 0x20U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[2U] 
        = vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext2;
    vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_reg_e__DOT__input_valid) 
           & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_stall)));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U] 
        = (IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                    ? (((QData)((IData)((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1)))
                    : vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U] 
        = (IData)((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                     ? (((QData)((IData)((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))))) 
                         << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1)))
                     : vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1) 
                   >> 0x20U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[2U] 
        = vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1;
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op 
        = ((0x80U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))
            ? vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1
            : vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slt_result 
        = (QData)((IData)((1U & (((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                           >> 0x3fU)) 
                                  & (~ (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                >> 0x3fU)))) 
                                 | ((~ ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                 >> 0x3fU)) 
                                        ^ (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                   >> 0x3fU)))) 
                                    & (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__result 
                                               >> 0x3fU)))))));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag 
        = ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U] 
            >> 0x1fU) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag 
        = ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U] 
            >> 0x1fU) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
        = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
             ? (QData)((IData)(((0x80U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))
                                 ? (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op 
                                            >> 0x20U))
                                 : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op))))
             : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op) 
           >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag)
            ? (- (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[1U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[0U]))))
            : (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend[0U]))));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result 
        = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag) 
            ^ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag))
            ? (- vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_quotient)
            : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_quotient);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0xfffffffffffffff8ULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | (IData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                              >> 0x3dU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                             >> 0x3eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 0x3fU))))))));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0xffffffffffffffc7ULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                               >> 0x3aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 0x3bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                               >> 0x3cU))))))) 
              << 3U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0xfffffffffffffe3fULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                               >> 0x37U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 0x38U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                               >> 0x39U))))))) 
              << 6U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0xfffffffffffff1ffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                               >> 0x34U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 0x35U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                               >> 0x36U))))))) 
              << 9U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0xffffffffffff8fffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                               >> 0x31U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 0x32U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                               >> 0x33U))))))) 
              << 0xcU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0xfffffffffffc7fffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                               >> 0x30U))))))) 
              << 0xfU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0xffffffffffe3ffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                               >> 0x2dU))))))) 
              << 0x12U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0xffffffffff1fffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                               >> 0x2aU))))))) 
              << 0x15U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0xfffffffff8ffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                               >> 0x27U))))))) 
              << 0x18U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0xffffffffc7ffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                               >> 0x24U))))))) 
              << 0x1bU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0xfffffffe3fffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                               >> 0x21U))))))) 
              << 0x1eU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0xfffffff1ffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                               >> 0x1eU))))))) 
              << 0x21U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0xffffff8fffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                               >> 0x1bU))))))) 
              << 0x24U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0xfffffc7fffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                               >> 0x18U))))))) 
              << 0x27U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0xffffe3ffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                               >> 0x15U))))))) 
              << 0x2aU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0xffff1fffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                               >> 0x12U))))))) 
              << 0x2dU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0xfff8ffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                               >> 0xfU))))))) 
              << 0x30U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0xffc7ffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                               >> 0xcU))))))) 
              << 0x33U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0xfe3fffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                               >> 9U))))))) 
              << 0x36U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0xf1ffffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                               >> 6U))))))) 
              << 0x39U));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0x8fffffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result 
                                                               >> 3U))))))) 
              << 0x3cU));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
        = ((0x7fffffffffffffffULL & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result) 
           | ((QData)((IData)((1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)))) 
              << 0x3fU));
    VL_EXTEND_WQ(65,64, __Vtemp148, vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1);
    VL_EXTEND_WQ(65,64, __Vtemp149, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2);
    VL_ADD_W(3, __Vtemp150, __Vtemp148, __Vtemp149);
    VL_EXTEND_WQ(65,64, __Vtemp151, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__cin);
    VL_ADD_W(3, __Vtemp152, __Vtemp150, __Vtemp151);
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result 
        = (((((((((((((((- (QData)((IData)((0U != (3U 
                                                   & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel)))))) 
                        & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__result) 
                       | ((- (QData)((IData)((1U & 
                                              ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                               >> 2U))))) 
                          & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slt_result)) 
                      | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                                   >> 3U))))) 
                         & (QData)((IData)((1U & (~ 
                                                  (1U 
                                                   & __Vtemp152[2U]))))))) 
                     | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                                  >> 4U))))) 
                        & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                           ^ vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2))) 
                    | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                                 >> 5U))))) 
                       & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                          | vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2))) 
                   | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                                >> 6U))))) 
                      & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                         & vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2))) 
                  | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                               >> 7U))))) 
                     & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                         ? (((QData)((IData)((- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)))))) 
                             << 0x20U) | (QData)((IData)(
                                                         (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
                                                          >> 0x20U))))
                         : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result))) 
                 | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                              >> 8U))))) 
                    & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)) 
                | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                             >> 9U))))) 
                   & (((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                                  ? (IData)(
                                                            (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                             >> 0x1fU))
                                                  : (IData)(
                                                            (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                             >> 0x3fU))))))) 
                       & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                           ? (~ (0xffffffffULL >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt)))
                           : (~ (0xffffffffffffffffULL 
                                 >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt))))) 
                      | vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result))) 
               | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xaU))))) 
                  & (((QData)((IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                        ? (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg 
                                                   >> 0x20U))
                                        : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U]))) 
                      << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                    ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg)
                                                    : 
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U])))))) 
              | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                           >> 0xbU))))) 
                 & (((QData)((IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                       ? (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg 
                                                  >> 0x20U))
                                       : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U]))) 
                     << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                   ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg)
                                                   : 
                                                  vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U])))))) 
             | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                          >> 0xcU))))) 
                & (((QData)((IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                      ? (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg 
                                                 >> 0x20U))
                                      : (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result 
                                                 >> 0x20U))))) 
                    << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                  ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg)
                                                  : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result))))))) 
            | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xdU))))) 
               & (((QData)((IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                     ? (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg 
                                                >> 0x20U))
                                     : (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result 
                                                >> 0x20U))))) 
                   << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                 ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg)
                                                 : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result))))))) 
           | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                        >> 0xeU))))) 
              & vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr));
    vlSelf->ysyx_22040750_cpu_top__DOT__alu_out = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                ((1U 
                                                                                & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel)))) 
                                                                                & (~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_sext))))))
                                                                                 ? 0U
                                                                                 : 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result 
                                                                                >> 0x1fU)))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result)))
                                                    : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result);
    vlSelf->ysyx_22040750_cpu_top__DOT__rs2_forward_data 
        = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall) 
            & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_wen))
            ? vlSelf->ysyx_22040750_cpu_top__DOT__alu_out
            : (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_alu_out
                : (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_stall) 
                    & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__forward_unit_e__I_WB_reg_wen))
                    ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                    : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
                   [(0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                              >> 0x14U))])));
    vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data 
        = ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall) 
             >> 1U) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_wen))
            ? vlSelf->ysyx_22040750_cpu_top__DOT__alu_out
            : ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall) 
                 >> 1U) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen))
                ? vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_alu_out
                : ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_stall) 
                     >> 1U) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__forward_unit_e__I_WB_reg_wen))
                    ? vlSelf->ysyx_22040750_cpu_top__DOT__wr_data
                    : vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
                   [(0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                              >> 0xfU))])));
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__eq 
        = (vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data 
           == vlSelf->ysyx_22040750_cpu_top__DOT__rs2_forward_data);
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__ltu 
        = (vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data 
           < vlSelf->ysyx_22040750_cpu_top__DOT__rs2_forward_data);
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__lt 
        = VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data, vlSelf->ysyx_22040750_cpu_top__DOT__rs2_forward_data);
    vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeB_jr 
        = (((((((IData)((0x63U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__eq)) 
               | ((IData)((0x1063U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                  & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__eq)))) 
              | ((IData)((0x4063U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                 & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__lt))) 
             | ((IData)((0x5063U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__lt)))) 
            | ((IData)((0x6063U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
               & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__ltu))) 
           | ((IData)((0x7063U == (0x707fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
              & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__ltu))));
    vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel = 
        ((((((0x73U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst) 
             | (0x100073U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
            | (0x30200073U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
           << 4U) | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR) 
                     << 3U)) | (((0x6fU == (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                 << 2U) | (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeB_jr) 
                                            << 1U) 
                                           | (1U & 
                                              (~ ((
                                                   ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR) 
                                                    | (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                                   | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeB_jr)) 
                                                  | (((0x73U 
                                                       == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst) 
                                                      | (0x100073U 
                                                         == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                     | (0x30200073U 
                                                        == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))))));
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel 
        = ((4U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel) 
                  >> 2U)) | ((2U & ((~ ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel) 
                                        | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel) 
                                           >> 4U))) 
                                    << 1U)) | (1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))));
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[0U] 
        = (IData)((4ULL + vlSelf->ysyx_22040750_cpu_top__DOT__current_pc));
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[1U] 
        = (IData)(((4ULL + vlSelf->ysyx_22040750_cpu_top__DOT__current_pc) 
                   >> 0x20U));
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[2U] 
        = (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__imm 
                   + ((8U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))
                       ? vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data
                       : vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc)));
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[3U] 
        = (IData)(((vlSelf->ysyx_22040750_cpu_top__DOT__imm 
                    + ((8U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))
                        ? vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data
                        : vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc)) 
                   >> 0x20U));
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[4U] 
        = (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_forward_data);
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[5U] 
        = (IData)((vlSelf->ysyx_22040750_cpu_top__DOT__csr_forward_data 
                   >> 0x20U));
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[0U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[2U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[4U])));
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__dnpc 
        = ((- (QData)((IData)((1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel))))) 
           & vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data
           [0U]);
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__dnpc 
        = (vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__dnpc 
           | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel) 
                                        >> 1U))))) 
              & vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data
              [1U]));
    vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__dnpc 
        = (vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__dnpc 
           | ((- (QData)((IData)((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel) 
                                        >> 2U))))) 
              & vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data
              [2U]));
    vlSelf->ysyx_22040750_cpu_top__DOT__dnpc = ((0xfffffffffffffffeULL 
                                                 & vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__dnpc) 
                                                | (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__dnpc) 
                                                                      & (~ 
                                                                         ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel) 
                                                                          >> 3U)))))));
    vlSelf->O_pc = vlSelf->ysyx_22040750_cpu_top__DOT__dnpc;
}

VL_INLINE_OPT void Vysyx_22040750_cpu_top___024root___combo__TOP__4(Vysyx_22040750_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750_cpu_top___024root___combo__TOP__4\n"); );
    // Body
    vlSelf->ysyx_22040750_cpu_top__DOT__current_inst 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__cache_valid)
            ? vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__inst_cache
            : vlSelf->I_inst);
    vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_ready_go 
        = ((IData)(vlSelf->I_inst_valid) | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__cache_valid));
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__output_valid 
        = (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid) 
            & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__mem_rd_en))) 
           | (IData)(vlSelf->I_mem_rd_data_valid));
    vlSelf->ysyx_22040750_cpu_top__DOT__IF_valid = 
        ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_ready_go) 
         & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_valid));
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid 
        = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid) 
           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__output_valid));
    vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin 
        = (1U & ((~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid)) 
                 | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__output_valid) 
                    & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin))));
    vlSelf->O_mem_wen = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_wen) 
                         & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid));
    vlSelf->O_mem_rd_en = ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__mem_rd_en) 
                           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid));
    vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin 
        = (1U & ((~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__input_valid)) 
                 | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_out_valid) 
                    & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin))));
    vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin 
        = (1U & ((~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_reg_e__DOT__input_valid)) 
                 | ((~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_stall)) 
                    & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin))));
    vlSelf->O_pc_valid = (((~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_valid)) 
                           | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_ready_go) 
                              & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin))) 
                          & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_en));
}

void Vysyx_22040750_cpu_top___024root___eval(Vysyx_22040750_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750_cpu_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->I_sys_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__I_sys_clk)))) {
        Vysyx_22040750_cpu_top___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vysyx_22040750_cpu_top___024root___combo__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__I_sys_clk = vlSelf->I_sys_clk;
}

QData Vysyx_22040750_cpu_top___024root___change_request_1(Vysyx_22040750_cpu_top___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22040750_cpu_top___024root___change_request(Vysyx_22040750_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750_cpu_top___024root___change_request\n"); );
    // Body
    return (Vysyx_22040750_cpu_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22040750_cpu_top___024root___change_request_1(Vysyx_22040750_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750_cpu_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22040750_cpu_top___024root___eval_debug_assertions(Vysyx_22040750_cpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750_cpu_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->I_sys_clk & 0xfeU))) {
        Verilated::overWidthError("I_sys_clk");}
    if (VL_UNLIKELY((vlSelf->I_rst & 0xfeU))) {
        Verilated::overWidthError("I_rst");}
    if (VL_UNLIKELY((vlSelf->I_inst_valid & 0xfeU))) {
        Verilated::overWidthError("I_inst_valid");}
    if (VL_UNLIKELY((vlSelf->I_inst_addr_ready & 0xfeU))) {
        Verilated::overWidthError("I_inst_addr_ready");}
    if (VL_UNLIKELY((vlSelf->I_mem_rd_data_valid & 0xfeU))) {
        Verilated::overWidthError("I_mem_rd_data_valid");}
}
#endif  // VL_DEBUG
