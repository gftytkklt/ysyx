// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040750.h for the primary calling header

#include "Vysyx_22040750___024root.h"
#include "Vysyx_22040750__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_wb_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_wb_ptr__Vdpioc2_TOP(const CData/*0:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_wb_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT8, VLVD_IN, VerilatedVarProps::Packed(), 0, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_wb_ptr(&a__Vopenarray);
}

extern "C" void set_wb_bubble_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_wb_bubble_ptr__Vdpioc2_TOP(const CData/*0:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_wb_bubble_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT8, VLVD_IN, VerilatedVarProps::Packed(), 0, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_wb_bubble_ptr(&a__Vopenarray);
}

extern "C" void set_wb_pc_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_wb_pc_ptr__Vdpioc2_TOP(const IData/*31:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_wb_pc_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_wb_pc_ptr(&a__Vopenarray);
}

extern "C" void set_wb_inst_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_wb_inst_ptr__Vdpioc2_TOP(const IData/*31:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_wb_inst_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_wb_inst_ptr(&a__Vopenarray);
}

extern "C" void set_wb_memop_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_wb_memop_ptr__Vdpioc2_TOP(const CData/*0:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_wb_memop_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT8, VLVD_IN, VerilatedVarProps::Packed(), 0, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_wb_memop_ptr(&a__Vopenarray);
}

extern "C" void set_wb_memaddr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_wb_memaddr_ptr__Vdpioc2_TOP(const IData/*31:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_wb_memaddr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_wb_memaddr_ptr(&a__Vopenarray);
}

extern "C" void set_cpu_mem_addr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_cpu_mem_addr__Vdpioc2_TOP(const IData/*31:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_cpu_mem_addr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_cpu_mem_addr(&a__Vopenarray);
}

extern "C" void set_cpu_rd_data(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_cpu_rd_data__Vdpioc2_TOP(const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_cpu_rd_data__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_cpu_rd_data(&a__Vopenarray);
}

extern "C" void set_cpu_wr_data(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_cpu_wr_data__Vdpioc2_TOP(const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_cpu_wr_data__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_cpu_wr_data(&a__Vopenarray);
}

extern "C" void set_cpu_rd_valid(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_cpu_rd_valid__Vdpioc2_TOP(const CData/*0:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_cpu_rd_valid__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT8, VLVD_IN, VerilatedVarProps::Packed(), 0, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_cpu_rd_valid(&a__Vopenarray);
}

extern "C" void set_cpu_wr_valid(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_cpu_wr_valid__Vdpioc2_TOP(const CData/*0:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__set_cpu_wr_valid__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT8, VLVD_IN, VerilatedVarProps::Packed(), 0, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_cpu_wr_valid(&a__Vopenarray);
}

extern "C" void sim_end();

VL_INLINE_OPT void Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__sim_end_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__sim_end_TOP\n"); );
    // Body
    sim_end();
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern const VlWide<8>/*255:0*/ Vysyx_22040750__ConstPool__CONST_9e67c271_0;
extern const VlWide<8>/*255:0*/ Vysyx_22040750__ConstPool__CONST_5b979007_0;

VL_INLINE_OPT void Vysyx_22040750___024root___sequent__TOP__3(Vysyx_22040750___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040750___024root___sequent__TOP__3\n"); );
    // Variables
    VlWide<8>/*255:0*/ __Vtemp205;
    // Body
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram7__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram6__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram5__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram4__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt;
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_reg 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_reg;
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rstrb 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rstrb;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_bubble 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_bubble;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_mret 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_mret;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr_no 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr_no;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rstrb 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rstrb;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_inst 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_inst;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_bubble 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_bubble;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_wstrb 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_wstrb;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr_no 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr_no;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_pc 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_pc;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram3__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram0__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__current_pc 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_pc;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_wen 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_wen;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_addr 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_addr;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mtvec 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mtvec;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mscratch 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mscratch;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mcause 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mcause;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mepc 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mepc;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus;
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op;
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr;
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[0U] 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[0U];
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[1U] 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[1U];
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U] 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U];
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U] 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U];
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U] 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U];
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U] 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U];
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U] 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U];
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U] 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U];
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U];
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U];
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U];
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U];
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_reg_wen 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_reg_wen;
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U];
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U];
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U];
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U];
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v1 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v2 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v3 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v4 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v5 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v6 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v7 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v8 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v9 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v10 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v11 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v12 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v13 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v14 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v15 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v16 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v17 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v18 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v19 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v20 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v21 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v22 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v23 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v24 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v25 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v26 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v27 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v28 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v29 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v30 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v31 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v32 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v33 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v34 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v35 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v36 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v37 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v38 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v39 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v40 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v41 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v42 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v43 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v44 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v45 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v46 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v47 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v48 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v49 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v50 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v51 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v52 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v53 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v54 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v55 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v56 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v57 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v58 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v59 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v60 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v61 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v62 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v63 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v64 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v65 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v66 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v67 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v68 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v69 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v70 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v71 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v72 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v73 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v74 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v75 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v76 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v77 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v78 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v79 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v80 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v81 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v82 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v83 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v84 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v85 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v86 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v87 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v88 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v89 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v90 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v91 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v92 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v93 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v94 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v95 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v96 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v97 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v98 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v99 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v100 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v101 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v102 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v103 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v104 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v105 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v106 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v107 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v108 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v109 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v110 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v111 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v112 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v113 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v114 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v115 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v116 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v117 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v118 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v119 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v120 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v121 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v122 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v123 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v124 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v125 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v126 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v127 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v128 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v129 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v130 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v131 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v132 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v133 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v134 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v135 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v136 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v137 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v138 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v139 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v140 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v141 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v142 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v143 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v144 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v145 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v146 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v147 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v148 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v149 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v150 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v151 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v152 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v153 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v154 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v155 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v156 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v157 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v158 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v159 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v160 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v161 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v162 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v163 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v164 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v165 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v166 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v167 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v168 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v169 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v170 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v171 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v172 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v173 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v174 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v175 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v176 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v177 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v178 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v179 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v180 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v181 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v182 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v183 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v184 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v185 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v186 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v187 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v188 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v189 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v190 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v191 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v192 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v193 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v194 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v195 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v196 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v197 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v198 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v199 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v200 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v201 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v202 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v203 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v204 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v205 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v206 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v207 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v208 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v209 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v210 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v211 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v212 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v213 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v214 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v215 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v216 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v217 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v218 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v219 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v220 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v221 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v222 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v223 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v224 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v225 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v226 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v227 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v228 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v229 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v230 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v231 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v232 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v233 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v234 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v235 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v236 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v237 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v238 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v239 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v240 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v241 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v242 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v243 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v244 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v245 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v246 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v247 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v248 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v249 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v250 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v251 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v252 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v253 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v254 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v255 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v256 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v257 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v258 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v259 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v260 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v261 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v262 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v263 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v264 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v265 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v266 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v267 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v268 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v269 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v270 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v271 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v272 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v273 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v274 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v275 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v276 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v277 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v278 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v279 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v280 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v281 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v282 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v283 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v284 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v285 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v286 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v287 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v288 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v289 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v290 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v291 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v292 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v293 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v294 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v295 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v296 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v297 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v298 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v299 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v300 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v301 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v302 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v303 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v304 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v305 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v306 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v307 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v308 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v309 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v310 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v311 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v312 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v313 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v314 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v315 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v316 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v317 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v318 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v319 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v320 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v321 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v322 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v323 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v324 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v325 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v326 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v327 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v328 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v329 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v330 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v331 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v332 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v333 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v334 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v335 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v336 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v337 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v338 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v339 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v340 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v341 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v342 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v343 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v344 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v345 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v346 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v347 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v348 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v349 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v350 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v351 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v352 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v353 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v354 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v355 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v356 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v357 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v358 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v359 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v360 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v361 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v362 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v363 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v364 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v365 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v366 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v367 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v368 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v369 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v370 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v371 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v372 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v373 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v374 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v375 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v376 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v377 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v378 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v379 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v380 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v381 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v382 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v383 = 0U;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_wen 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_wen;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v1 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v2 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v3 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v4 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v5 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v6 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v7 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v8 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v9 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v10 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v11 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v12 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v13 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v14 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v15 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v16 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v17 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v18 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v19 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v20 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v21 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v22 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v23 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v24 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v25 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v26 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v27 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v28 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v29 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v30 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v31 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v32 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v33 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v34 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v35 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v36 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v37 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v38 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v39 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v40 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v41 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v42 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v43 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v44 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v45 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v46 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v47 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v48 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v49 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v50 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v51 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v52 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v53 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v54 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v55 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v56 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v57 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v58 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v59 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v60 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v61 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v62 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v63 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v64 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v65 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v66 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v67 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v68 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v69 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v70 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v71 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v72 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v73 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v74 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v75 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v76 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v77 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v78 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v79 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v80 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v81 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v82 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v83 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v84 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v85 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v86 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v87 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v88 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v89 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v90 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v91 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v92 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v93 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v94 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v95 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v96 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v97 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v98 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v99 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v100 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v101 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v102 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v103 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v104 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v105 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v106 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v107 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v108 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v109 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v110 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v111 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v112 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v113 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v114 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v115 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v116 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v117 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v118 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v119 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v120 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v121 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v122 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v123 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v124 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v125 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v126 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v127 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v128 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v129 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v130 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v131 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v132 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v133 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v134 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v135 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v136 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v137 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v138 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v139 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v140 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v141 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v142 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v143 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v144 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v145 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v146 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v147 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v148 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v149 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v150 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v151 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v152 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v153 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v154 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v155 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v156 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v157 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v158 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v159 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v160 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v161 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v162 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v163 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v164 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v165 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v166 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v167 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v168 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v169 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v170 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v171 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v172 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v173 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v174 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v175 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v176 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v177 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v178 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v179 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v180 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v181 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v182 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v183 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v184 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v185 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v186 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v187 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v188 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v189 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v190 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v191 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v192 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v193 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v194 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v195 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v196 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v197 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v198 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v199 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v200 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v201 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v202 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v203 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v204 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v205 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v206 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v207 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v208 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v209 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v210 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v211 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v212 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v213 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v214 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v215 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v216 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v217 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v218 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v219 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v220 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v221 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v222 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v223 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v224 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v225 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v226 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v227 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v228 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v229 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v230 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v231 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v232 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v233 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v234 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v235 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v236 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v237 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v238 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v239 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v240 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v241 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v242 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v243 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v244 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v245 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v246 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v247 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v248 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v249 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v250 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v251 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v252 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v253 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v254 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v255 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v256 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v257 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v258 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v259 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v260 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v261 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v262 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v263 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v264 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v265 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v266 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v267 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v268 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v269 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v270 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v271 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v272 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v273 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v274 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v275 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v276 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v277 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v278 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v279 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v280 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v281 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v282 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v283 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v284 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v285 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v286 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v287 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v288 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v289 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v290 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v291 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v292 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v293 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v294 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v295 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v296 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v297 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v298 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v299 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v300 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v301 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v302 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v303 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v304 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v305 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v306 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v307 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v308 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v309 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v310 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v311 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v312 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v313 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v314 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v315 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v316 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v317 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v318 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v319 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v320 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v321 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v322 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v323 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v324 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v325 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v326 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v327 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v328 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v329 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v330 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v331 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v332 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v333 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v334 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v335 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v336 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v337 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v338 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v339 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v340 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v341 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v342 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v343 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v344 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v345 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v346 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v347 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v348 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v349 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v350 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v351 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v352 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v353 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v354 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v355 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v356 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v357 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v358 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v359 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v360 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v361 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v362 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v363 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v364 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v365 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v366 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v367 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v368 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v369 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v370 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v371 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v372 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v373 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v374 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v375 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v376 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v377 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v378 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v379 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v380 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v381 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v382 = 0U;
    vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table__v383 = 0U;
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U] 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[0U];
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U] 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[1U];
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U] 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[2U];
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U] 
        = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[3U];
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc;
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst;
    if (((0x100073U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_inst) 
         & (~ (IData)(vlSelf->reset)))) {
        Vysyx_22040750___024root____Vdpiimwrap_ysyx_22040750__DOT__cpu_core_e__DOT__sim_end_TOP();
    }
    if ((IData)(((0U == (0x80U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen))) 
                 & (0U == (0x80U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen)))))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram7__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U] 
                & (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[4U])) 
               | (vlSelf->ysyx_22040750__DOT__sram7__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__daddr][0U] 
                  & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[4U]));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram7__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U] 
                & (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[5U])) 
               | (vlSelf->ysyx_22040750__DOT__sram7__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__daddr][1U] 
                  & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[5U]));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram7__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U] 
                & (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[6U])) 
               | (vlSelf->ysyx_22040750__DOT__sram7__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__daddr][2U] 
                  & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[6U]));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram7__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U] 
                & (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[7U])) 
               | (vlSelf->ysyx_22040750__DOT__sram7__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__daddr][3U] 
                  & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[7U]));
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram7__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram7__DOT__ram__v0 
            = vlSelf->ysyx_22040750__DOT__daddr;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                   >> 7U)) & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                              >> 7U)))) {
        vlSelf->ysyx_22040750__DOT__io_sram7_rdata[0U] 
            = vlSelf->ysyx_22040750__DOT__sram7__DOT__ram
            [vlSelf->ysyx_22040750__DOT__daddr][0U];
        vlSelf->ysyx_22040750__DOT__io_sram7_rdata[1U] 
            = vlSelf->ysyx_22040750__DOT__sram7__DOT__ram
            [vlSelf->ysyx_22040750__DOT__daddr][1U];
        vlSelf->ysyx_22040750__DOT__io_sram7_rdata[2U] 
            = vlSelf->ysyx_22040750__DOT__sram7__DOT__ram
            [vlSelf->ysyx_22040750__DOT__daddr][2U];
        vlSelf->ysyx_22040750__DOT__io_sram7_rdata[3U] 
            = vlSelf->ysyx_22040750__DOT__sram7__DOT__ram
            [vlSelf->ysyx_22040750__DOT__daddr][3U];
    } else {
        vlSelf->ysyx_22040750__DOT__io_sram7_rdata[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram7_rdata[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram7_rdata[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram7_rdata[3U] 
            = VL_RANDOM_I(32);
    }
    if ((IData)(((0U == (0x40U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen))) 
                 & (0U == (0x40U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen)))))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram6__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[0U] 
                & (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[0U])) 
               | (vlSelf->ysyx_22040750__DOT__sram6__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__daddr][0U] 
                  & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[0U]));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram6__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[1U] 
                & (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[1U])) 
               | (vlSelf->ysyx_22040750__DOT__sram6__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__daddr][1U] 
                  & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[1U]));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram6__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U] 
                & (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[2U])) 
               | (vlSelf->ysyx_22040750__DOT__sram6__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__daddr][2U] 
                  & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[2U]));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram6__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U] 
                & (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[3U])) 
               | (vlSelf->ysyx_22040750__DOT__sram6__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__daddr][3U] 
                  & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[3U]));
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram6__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram6__DOT__ram__v0 
            = vlSelf->ysyx_22040750__DOT__daddr;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                   >> 6U)) & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                              >> 6U)))) {
        vlSelf->ysyx_22040750__DOT__io_sram6_rdata[0U] 
            = vlSelf->ysyx_22040750__DOT__sram6__DOT__ram
            [vlSelf->ysyx_22040750__DOT__daddr][0U];
        vlSelf->ysyx_22040750__DOT__io_sram6_rdata[1U] 
            = vlSelf->ysyx_22040750__DOT__sram6__DOT__ram
            [vlSelf->ysyx_22040750__DOT__daddr][1U];
        vlSelf->ysyx_22040750__DOT__io_sram6_rdata[2U] 
            = vlSelf->ysyx_22040750__DOT__sram6__DOT__ram
            [vlSelf->ysyx_22040750__DOT__daddr][2U];
        vlSelf->ysyx_22040750__DOT__io_sram6_rdata[3U] 
            = vlSelf->ysyx_22040750__DOT__sram6__DOT__ram
            [vlSelf->ysyx_22040750__DOT__daddr][3U];
    } else {
        vlSelf->ysyx_22040750__DOT__io_sram6_rdata[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram6_rdata[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram6_rdata[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram6_rdata[3U] 
            = VL_RANDOM_I(32);
    }
    if ((IData)(((0U == (0x20U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen))) 
                 & (0U == (0x20U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen)))))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram5__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U] 
                & (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[4U])) 
               | (vlSelf->ysyx_22040750__DOT__sram5__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__daddr][0U] 
                  & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[4U]));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram5__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U] 
                & (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[5U])) 
               | (vlSelf->ysyx_22040750__DOT__sram5__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__daddr][1U] 
                  & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[5U]));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram5__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U] 
                & (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[6U])) 
               | (vlSelf->ysyx_22040750__DOT__sram5__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__daddr][2U] 
                  & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[6U]));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram5__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U] 
                & (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[7U])) 
               | (vlSelf->ysyx_22040750__DOT__sram5__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__daddr][3U] 
                  & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[7U]));
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram5__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram5__DOT__ram__v0 
            = vlSelf->ysyx_22040750__DOT__daddr;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                   >> 5U)) & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                              >> 5U)))) {
        vlSelf->ysyx_22040750__DOT__io_sram5_rdata[0U] 
            = vlSelf->ysyx_22040750__DOT__sram5__DOT__ram
            [vlSelf->ysyx_22040750__DOT__daddr][0U];
        vlSelf->ysyx_22040750__DOT__io_sram5_rdata[1U] 
            = vlSelf->ysyx_22040750__DOT__sram5__DOT__ram
            [vlSelf->ysyx_22040750__DOT__daddr][1U];
        vlSelf->ysyx_22040750__DOT__io_sram5_rdata[2U] 
            = vlSelf->ysyx_22040750__DOT__sram5__DOT__ram
            [vlSelf->ysyx_22040750__DOT__daddr][2U];
        vlSelf->ysyx_22040750__DOT__io_sram5_rdata[3U] 
            = vlSelf->ysyx_22040750__DOT__sram5__DOT__ram
            [vlSelf->ysyx_22040750__DOT__daddr][3U];
    } else {
        vlSelf->ysyx_22040750__DOT__io_sram5_rdata[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram5_rdata[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram5_rdata[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram5_rdata[3U] 
            = VL_RANDOM_I(32);
    }
    if ((IData)(((0U == (0x10U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen))) 
                 & (0U == (0x10U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen)))))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram4__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[0U] 
                & (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[0U])) 
               | (vlSelf->ysyx_22040750__DOT__sram4__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__daddr][0U] 
                  & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[0U]));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram4__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[1U] 
                & (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[1U])) 
               | (vlSelf->ysyx_22040750__DOT__sram4__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__daddr][1U] 
                  & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[1U]));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram4__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U] 
                & (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[2U])) 
               | (vlSelf->ysyx_22040750__DOT__sram4__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__daddr][2U] 
                  & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[2U]));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram4__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U] 
                & (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[3U])) 
               | (vlSelf->ysyx_22040750__DOT__sram4__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__daddr][3U] 
                  & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[3U]));
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram4__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram4__DOT__ram__v0 
            = vlSelf->ysyx_22040750__DOT__daddr;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                   >> 4U)) & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                              >> 4U)))) {
        vlSelf->ysyx_22040750__DOT__io_sram4_rdata[0U] 
            = vlSelf->ysyx_22040750__DOT__sram4__DOT__ram
            [vlSelf->ysyx_22040750__DOT__daddr][0U];
        vlSelf->ysyx_22040750__DOT__io_sram4_rdata[1U] 
            = vlSelf->ysyx_22040750__DOT__sram4__DOT__ram
            [vlSelf->ysyx_22040750__DOT__daddr][1U];
        vlSelf->ysyx_22040750__DOT__io_sram4_rdata[2U] 
            = vlSelf->ysyx_22040750__DOT__sram4__DOT__ram
            [vlSelf->ysyx_22040750__DOT__daddr][2U];
        vlSelf->ysyx_22040750__DOT__io_sram4_rdata[3U] 
            = vlSelf->ysyx_22040750__DOT__sram4__DOT__ram
            [vlSelf->ysyx_22040750__DOT__daddr][3U];
    } else {
        vlSelf->ysyx_22040750__DOT__io_sram4_rdata[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram4_rdata[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram4_rdata[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram4_rdata[3U] 
            = VL_RANDOM_I(32);
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt = 0U;
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt = 0U;
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_reg = 0ULL;
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag = 0U;
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state = 1U;
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process)
                ? (0x3fU & ((IData)(1U) + (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt)))
                : 0U);
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt 
            = (3U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_handshake)
                      ? ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_wlast)
                          ? 0U : ((IData)(1U) + (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt)))
                      : (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt)));
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_reg 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en)
                ? vlSelf->ysyx_22040750__DOT__mem_wdata
                : vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_reg);
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__rd_hit)
                ? ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit)
                    ? 1U : 2U) : 0U);
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_next_state;
    }
    vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__priority_flag 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__resp0) 
                                          & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__priority_flag))) 
                                         | ((~ ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__resp1) 
                                                & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__priority_flag))) 
                                            & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__priority_flag))));
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_handshake)
                                           ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc
                                           : vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr));
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__dnpc_reg_valid 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__store_dnpc) 
                                         | ((~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__pc_handshake)) 
                                            & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__dnpc_reg_valid))));
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__dnpc_reg 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__store_dnpc)
                                           ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc
                                           : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__dnpc_reg));
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_en 
        = (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rstrb 
        = ((IData)(vlSelf->reset) ? 0U : (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                                           & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                                           ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_rstrb)
                                           : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rstrb)));
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_bubble 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                                          ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_bubble)
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_bubble)));
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel 
        = ((IData)(vlSelf->reset) ? 0U : (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                                           & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                                           ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_op_sel)
                                           : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel)));
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_multicycle 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin)) 
                                         & (0U != (0xfU 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op_sel) 
                                                      >> 0xaU)))));
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__inst_cache 
        = ((IData)(vlSelf->reset) ? 0U : (((IData)(vlSelf->ysyx_22040750__DOT__cpu_inst_valid) 
                                           & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_allowin)))
                                           ? vlSelf->ysyx_22040750__DOT__cpu_inst
                                           : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__inst_cache));
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_valid 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_handshake) 
                                         | ((~ ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_valid) 
                                                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_allowin))) 
                                            & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_valid))));
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_mret 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid) 
                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin))
                                          ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_mret)
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_mret)));
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr_no 
        = ((IData)(vlSelf->reset) ? 0ULL : (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid) 
                                             & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin))
                                             ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_intr_no
                                             : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr_no));
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid) 
                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin))
                                          ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_intr)
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr)));
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rstrb = 0U;
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_inst = 0U;
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rstrb 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin))
                ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rstrb)
                : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rstrb));
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_inst 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin))
                ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_inst
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_inst);
    }
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_bubble 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid) 
                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin))
                                          ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_bubble)
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_bubble)));
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_wstrb 
        = ((IData)(vlSelf->reset) ? 0U : (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid) 
                                           & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin))
                                           ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_wstrb)
                                           : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_wstrb)));
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__wr_handshake)) 
                                         & ((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid) 
                                              & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin)) 
                                             & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_mem_wen)) 
                                            | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en))));
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__cache_valid 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_ready_go) 
                                          & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_allowin))) 
                                         | ((~ ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__cache_valid) 
                                                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_allowin))) 
                                            & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__cache_valid))));
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__rd_handshake)) 
                                         & ((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid) 
                                              & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin)) 
                                             & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel) 
                                                >> 1U)) 
                                            | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en))));
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr_no 
        = ((IData)(vlSelf->reset) ? 0ULL : (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin) 
                                             & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid))
                                             ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr_no
                                             : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr_no));
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_bubble 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin) 
                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid))
                                          ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_bubble)
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_bubble)));
    if (vlSelf->reset) {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_inst = 0U;
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_pc = 0U;
    } else {
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_inst 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid))
                ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_inst
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_inst);
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_pc 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid))
                ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_pc
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_pc);
    }
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin) 
                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid))
                                          ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr)
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr)));
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_mret 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin) 
                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid))
                                          ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_mret)
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_mret)));
    if ((IData)(((0U == (8U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen))) 
                 & (0U == (8U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen)))))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram3__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[4U] 
                & (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                        ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U]
                       : Vysyx_22040750__ConstPool__CONST_5b979007_0[4U]))) 
               | (vlSelf->ysyx_22040750__DOT__sram3__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__iaddr][0U] 
                  & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                       ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U]
                      : Vysyx_22040750__ConstPool__CONST_5b979007_0[4U])));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram3__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[5U] 
                & (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                        ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U]
                       : Vysyx_22040750__ConstPool__CONST_5b979007_0[5U]))) 
               | (vlSelf->ysyx_22040750__DOT__sram3__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__iaddr][1U] 
                  & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                       ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U]
                      : Vysyx_22040750__ConstPool__CONST_5b979007_0[5U])));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram3__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[6U] 
                & (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                        ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U]
                       : Vysyx_22040750__ConstPool__CONST_5b979007_0[6U]))) 
               | (vlSelf->ysyx_22040750__DOT__sram3__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__iaddr][2U] 
                  & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                       ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U]
                      : Vysyx_22040750__ConstPool__CONST_5b979007_0[6U])));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram3__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[7U] 
                & (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                        ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U]
                       : Vysyx_22040750__ConstPool__CONST_5b979007_0[7U]))) 
               | (vlSelf->ysyx_22040750__DOT__sram3__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__iaddr][3U] 
                  & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                       ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U]
                      : Vysyx_22040750__ConstPool__CONST_5b979007_0[7U])));
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram3__DOT__ram__v0 
            = vlSelf->ysyx_22040750__DOT__iaddr;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                   >> 3U)) & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                              >> 3U)))) {
        vlSelf->ysyx_22040750__DOT__io_sram3_rdata[0U] 
            = vlSelf->ysyx_22040750__DOT__sram3__DOT__ram
            [vlSelf->ysyx_22040750__DOT__iaddr][0U];
        vlSelf->ysyx_22040750__DOT__io_sram3_rdata[1U] 
            = vlSelf->ysyx_22040750__DOT__sram3__DOT__ram
            [vlSelf->ysyx_22040750__DOT__iaddr][1U];
        vlSelf->ysyx_22040750__DOT__io_sram3_rdata[2U] 
            = vlSelf->ysyx_22040750__DOT__sram3__DOT__ram
            [vlSelf->ysyx_22040750__DOT__iaddr][2U];
        vlSelf->ysyx_22040750__DOT__io_sram3_rdata[3U] 
            = vlSelf->ysyx_22040750__DOT__sram3__DOT__ram
            [vlSelf->ysyx_22040750__DOT__iaddr][3U];
    } else {
        vlSelf->ysyx_22040750__DOT__io_sram3_rdata[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram3_rdata[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram3_rdata[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram3_rdata[3U] 
            = VL_RANDOM_I(32);
    }
    if ((IData)(((0U == (4U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen))) 
                 & (0U == (4U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen)))))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram2__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[0U] 
                & (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                        ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U]
                       : Vysyx_22040750__ConstPool__CONST_5b979007_0[0U]))) 
               | (vlSelf->ysyx_22040750__DOT__sram2__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__iaddr][0U] 
                  & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                       ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U]
                      : Vysyx_22040750__ConstPool__CONST_5b979007_0[0U])));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram2__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[1U] 
                & (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                        ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U]
                       : Vysyx_22040750__ConstPool__CONST_5b979007_0[1U]))) 
               | (vlSelf->ysyx_22040750__DOT__sram2__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__iaddr][1U] 
                  & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                       ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U]
                      : Vysyx_22040750__ConstPool__CONST_5b979007_0[1U])));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram2__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[2U] 
                & (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                        ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U]
                       : Vysyx_22040750__ConstPool__CONST_5b979007_0[2U]))) 
               | (vlSelf->ysyx_22040750__DOT__sram2__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__iaddr][2U] 
                  & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                       ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U]
                      : Vysyx_22040750__ConstPool__CONST_5b979007_0[2U])));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram2__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[3U] 
                & (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                        ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U]
                       : Vysyx_22040750__ConstPool__CONST_5b979007_0[3U]))) 
               | (vlSelf->ysyx_22040750__DOT__sram2__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__iaddr][3U] 
                  & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                       ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U]
                      : Vysyx_22040750__ConstPool__CONST_5b979007_0[3U])));
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram2__DOT__ram__v0 
            = vlSelf->ysyx_22040750__DOT__iaddr;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                   >> 2U)) & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                              >> 2U)))) {
        vlSelf->ysyx_22040750__DOT__io_sram2_rdata[0U] 
            = vlSelf->ysyx_22040750__DOT__sram2__DOT__ram
            [vlSelf->ysyx_22040750__DOT__iaddr][0U];
        vlSelf->ysyx_22040750__DOT__io_sram2_rdata[1U] 
            = vlSelf->ysyx_22040750__DOT__sram2__DOT__ram
            [vlSelf->ysyx_22040750__DOT__iaddr][1U];
        vlSelf->ysyx_22040750__DOT__io_sram2_rdata[2U] 
            = vlSelf->ysyx_22040750__DOT__sram2__DOT__ram
            [vlSelf->ysyx_22040750__DOT__iaddr][2U];
        vlSelf->ysyx_22040750__DOT__io_sram2_rdata[3U] 
            = vlSelf->ysyx_22040750__DOT__sram2__DOT__ram
            [vlSelf->ysyx_22040750__DOT__iaddr][3U];
    } else {
        vlSelf->ysyx_22040750__DOT__io_sram2_rdata[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram2_rdata[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram2_rdata[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram2_rdata[3U] 
            = VL_RANDOM_I(32);
    }
    if ((IData)(((0U == (2U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen))) 
                 & (0U == (2U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen)))))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram1__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[4U] 
                & (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                        ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U]
                       : Vysyx_22040750__ConstPool__CONST_5b979007_0[4U]))) 
               | (vlSelf->ysyx_22040750__DOT__sram1__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__iaddr][0U] 
                  & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                       ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U]
                      : Vysyx_22040750__ConstPool__CONST_5b979007_0[4U])));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram1__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[5U] 
                & (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                        ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U]
                       : Vysyx_22040750__ConstPool__CONST_5b979007_0[5U]))) 
               | (vlSelf->ysyx_22040750__DOT__sram1__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__iaddr][1U] 
                  & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                       ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U]
                      : Vysyx_22040750__ConstPool__CONST_5b979007_0[5U])));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram1__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[6U] 
                & (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                        ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U]
                       : Vysyx_22040750__ConstPool__CONST_5b979007_0[6U]))) 
               | (vlSelf->ysyx_22040750__DOT__sram1__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__iaddr][2U] 
                  & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                       ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U]
                      : Vysyx_22040750__ConstPool__CONST_5b979007_0[6U])));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram1__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[7U] 
                & (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                        ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U]
                       : Vysyx_22040750__ConstPool__CONST_5b979007_0[7U]))) 
               | (vlSelf->ysyx_22040750__DOT__sram1__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__iaddr][3U] 
                  & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                       ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U]
                      : Vysyx_22040750__ConstPool__CONST_5b979007_0[7U])));
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram1__DOT__ram__v0 
            = vlSelf->ysyx_22040750__DOT__iaddr;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                   >> 1U)) & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                              >> 1U)))) {
        vlSelf->ysyx_22040750__DOT__io_sram1_rdata[0U] 
            = vlSelf->ysyx_22040750__DOT__sram1__DOT__ram
            [vlSelf->ysyx_22040750__DOT__iaddr][0U];
        vlSelf->ysyx_22040750__DOT__io_sram1_rdata[1U] 
            = vlSelf->ysyx_22040750__DOT__sram1__DOT__ram
            [vlSelf->ysyx_22040750__DOT__iaddr][1U];
        vlSelf->ysyx_22040750__DOT__io_sram1_rdata[2U] 
            = vlSelf->ysyx_22040750__DOT__sram1__DOT__ram
            [vlSelf->ysyx_22040750__DOT__iaddr][2U];
        vlSelf->ysyx_22040750__DOT__io_sram1_rdata[3U] 
            = vlSelf->ysyx_22040750__DOT__sram1__DOT__ram
            [vlSelf->ysyx_22040750__DOT__iaddr][3U];
    } else {
        vlSelf->ysyx_22040750__DOT__io_sram1_rdata[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram1_rdata[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram1_rdata[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram1_rdata[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen)) 
               & (~ (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen))))) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram0__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[0U] 
                & (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                        ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U]
                       : Vysyx_22040750__ConstPool__CONST_5b979007_0[0U]))) 
               | (vlSelf->ysyx_22040750__DOT__sram0__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__iaddr][0U] 
                  & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                       ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U]
                      : Vysyx_22040750__ConstPool__CONST_5b979007_0[0U])));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram0__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[1U] 
                & (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                        ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U]
                       : Vysyx_22040750__ConstPool__CONST_5b979007_0[1U]))) 
               | (vlSelf->ysyx_22040750__DOT__sram0__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__iaddr][1U] 
                  & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                       ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U]
                      : Vysyx_22040750__ConstPool__CONST_5b979007_0[1U])));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram0__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[2U] 
                & (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                        ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U]
                       : Vysyx_22040750__ConstPool__CONST_5b979007_0[2U]))) 
               | (vlSelf->ysyx_22040750__DOT__sram0__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__iaddr][2U] 
                  & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                       ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U]
                      : Vysyx_22040750__ConstPool__CONST_5b979007_0[2U])));
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__sram0__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[3U] 
                & (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                        ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U]
                       : Vysyx_22040750__ConstPool__CONST_5b979007_0[3U]))) 
               | (vlSelf->ysyx_22040750__DOT__sram0__DOT__ram
                  [vlSelf->ysyx_22040750__DOT__iaddr][3U] 
                  & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                       ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U]
                      : Vysyx_22040750__ConstPool__CONST_5b979007_0[3U])));
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__sram0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__sram0__DOT__ram__v0 
            = vlSelf->ysyx_22040750__DOT__iaddr;
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen)) 
               & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen)))) {
        vlSelf->ysyx_22040750__DOT__io_sram0_rdata[0U] 
            = vlSelf->ysyx_22040750__DOT__sram0__DOT__ram
            [vlSelf->ysyx_22040750__DOT__iaddr][0U];
        vlSelf->ysyx_22040750__DOT__io_sram0_rdata[1U] 
            = vlSelf->ysyx_22040750__DOT__sram0__DOT__ram
            [vlSelf->ysyx_22040750__DOT__iaddr][1U];
        vlSelf->ysyx_22040750__DOT__io_sram0_rdata[2U] 
            = vlSelf->ysyx_22040750__DOT__sram0__DOT__ram
            [vlSelf->ysyx_22040750__DOT__iaddr][2U];
        vlSelf->ysyx_22040750__DOT__io_sram0_rdata[3U] 
            = vlSelf->ysyx_22040750__DOT__sram0__DOT__ram
            [vlSelf->ysyx_22040750__DOT__iaddr][3U];
    } else {
        vlSelf->ysyx_22040750__DOT__io_sram0_rdata[0U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram0_rdata[1U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram0_rdata[2U] 
            = VL_RANDOM_I(32);
        vlSelf->ysyx_22040750__DOT__io_sram0_rdata[3U] 
            = VL_RANDOM_I(32);
    }
    if (vlSelf->reset) {
        __Vtemp205[1U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U];
        __Vtemp205[2U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U];
        __Vtemp205[3U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U];
        __Vtemp205[4U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U];
        __Vtemp205[5U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U];
        __Vtemp205[6U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U];
        __Vtemp205[7U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[0U] 
            = Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U];
    } else {
        __Vtemp205[1U] = (((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state)) 
                           & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid))
                           ? vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[3U]
                           : vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[1U]);
        __Vtemp205[2U] = (((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state)) 
                           & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid))
                           ? vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[4U]
                           : vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[2U]);
        __Vtemp205[3U] = (((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state)) 
                           & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid))
                           ? vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[5U]
                           : vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[3U]);
        __Vtemp205[4U] = (((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state)) 
                           & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid))
                           ? vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[6U]
                           : vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[4U]);
        __Vtemp205[5U] = (((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state)) 
                           & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid))
                           ? vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[7U]
                           : vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[5U]);
        __Vtemp205[6U] = (((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state)) 
                           & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid))
                           ? (IData)(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch0_process)
                                       ? vlSelf->io_master_rdata
                                       : 0ULL)) : vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[6U]);
        __Vtemp205[7U] = (((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state)) 
                           & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid))
                           ? (IData)((((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch0_process)
                                        ? vlSelf->io_master_rdata
                                        : 0ULL) >> 0x20U))
                           : vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[7U]);
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[0U] 
            = (((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state)) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid))
                ? vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[2U]
                : vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[0U]);
    }
    vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[1U] 
        = __Vtemp205[1U];
    vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[2U] 
        = __Vtemp205[2U];
    vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[3U] 
        = __Vtemp205[3U];
    vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[4U] 
        = __Vtemp205[4U];
    vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[5U] 
        = __Vtemp205[5U];
    vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[6U] 
        = __Vtemp205[6U];
    vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[7U] 
        = __Vtemp205[7U];
    vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch0_process 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__resp0) 
                                          & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_arready) 
                                             & ((2U 
                                                 == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                                 ? 1U
                                                 : 0U))) 
                                         | ((~ ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid) 
                                                & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rlast))) 
                                            & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch0_process))));
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid) 
                                         | ((~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_out_valid)) 
                                            & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process))));
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_reg_e__DOT__input_valid 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_allowin)
                                          ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_valid)
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_reg_e__DOT__input_valid)));
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_bubble 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_valid) 
                                                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_allowin))
                                                ? (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel))
                                                : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_bubble))));
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__current_pc 
        = ((IData)(vlSelf->reset) ? 0x7ffffffcU : ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_handshake)
                                                    ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc
                                                    : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_pc));
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_intr 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                                          ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_intr)
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_intr)));
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_op 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin) 
                                                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid))
                                                ? (
                                                   ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel) 
                                                    >> 1U) 
                                                   | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_wen))
                                                : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_op))));
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_wen 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid) 
                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin))
                                          ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_mem_wen)
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_wen)));
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid) 
                                         | ((~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid)) 
                                            & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process))));
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__iter_cnt = 0U;
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin))
                ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel)
                : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel));
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__iter_cnt 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid)
                ? 0U : ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process)
                         ? (0x3fU & ((IData)(1U) + (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__iter_cnt)))
                         : 0U));
    }
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_wen 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid) 
                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin))
                                          ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_wen)
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_wen)));
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_addr = 0U;
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr = 0ULL;
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr = 0U;
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_addr 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin))
                ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_addr)
                : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_addr));
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid))
                ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr);
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid))
                ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_addr)
                : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr));
    }
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_wen 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin) 
                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid))
                                          ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_wen)
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_wen)));
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mtvec = 0ULL;
    } else if (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__csr_wen) {
        if ((0x341U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr))) {
            if ((0x300U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr))) {
                if ((0x305U == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr))) {
                    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mtvec 
                        = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr;
                }
            }
        }
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mtvec 
            = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mtvec;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mscratch = 0ULL;
    } else if (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__csr_wen) {
        if ((0x341U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr))) {
            if ((0x300U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr))) {
                if ((0x305U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr))) {
                    if ((0x342U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr))) {
                        if ((0x340U == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr))) {
                            vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mscratch 
                                = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr;
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mscratch 
            = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mscratch;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mcause = 0ULL;
    } else if (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__csr_wen) {
        if ((0x341U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr))) {
            if ((0x300U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr))) {
                if ((0x305U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr))) {
                    if ((0x342U == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr))) {
                        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mcause 
                            = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr;
                    }
                }
            }
        }
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mcause 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__csr_intr_wr)
                ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr_no
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mcause);
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mepc = 0ULL;
    } else if (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__csr_wen) {
        if ((0x341U == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr))) {
            vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mepc 
                = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr;
        }
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mepc 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__csr_intr_wr)
                ? (QData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_pc))
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mepc);
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus = 0xa00001800ULL;
    } else if (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__csr_wen) {
        if ((0x341U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr))) {
            if ((0x300U == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr))) {
                vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus 
                    = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr;
            }
        }
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus 
            = ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__csr_intr_wr)
                ? ((0xffffffffffffff00ULL & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus) 
                   | (QData)((IData)((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mie) 
                                       << 7U) | ((0x70U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus 
                                                              >> 4U)) 
                                                     << 4U)) 
                                                 | (7U 
                                                    & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus)))))))
                : ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__csr_mret_wr)
                    ? ((0xffffffffffffff00ULL & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus) 
                       | (QData)((IData)((0x80U | (
                                                   (0x70U 
                                                    & ((IData)(
                                                               (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus 
                                                                >> 4U)) 
                                                       << 4U)) 
                                                   | (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mpie) 
                                                       << 3U) 
                                                      | (7U 
                                                         & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus))))))))
                    : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus));
    }
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_wen 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                                          ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen)
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_wen)));
    vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch1_process 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__resp1) 
                                          & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arready) 
                                             & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_ar_req)
                                                 ? 1U
                                                 : 0U))) 
                                         | ((~ ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rvalid) 
                                                & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast))) 
                                            & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch1_process))));
    vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en) 
                                                | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en))
                                                ? (
                                                   (1U 
                                                    & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                                       | (((~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit)) 
                                                           & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
                                                              (3U 
                                                               & ((IData)(
                                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                           >> 5U)) 
                                                                  >> 4U))] 
                                                              >> 
                                                              (0x1eU 
                                                               & ((IData)(
                                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                           >> 5U)) 
                                                                  << 1U)))) 
                                                          & (~ 
                                                             (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
                                                              (3U 
                                                               & ((IData)(
                                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                           >> 5U)) 
                                                                  >> 4U))] 
                                                              >> 
                                                              (0x1fU 
                                                               & (1U 
                                                                  | (0x7eU 
                                                                     & ((IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                                >> 5U)) 
                                                                        << 1U)))))))))
                                                    ? 0U
                                                    : 1U)
                                                : (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op))));
    if (vlSelf->reset) {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_mask_reg = 0U;
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr = 0U;
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_addr = 0U;
    } else {
        vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_mask_reg 
            = (0xffU & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en)
                         ? ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_wstrb) 
                            << (7U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out)))
                         : (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_mask_reg)));
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en) 
                | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en))
                ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out)
                : vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr);
        vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_addr 
            = (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin) 
                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid))
                ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out)
                : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_addr);
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[0U] = 0U;
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[1U] = 0U;
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U] = 0U;
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U] = 0U;
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U] = 0U;
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U] = 0U;
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U] = 0U;
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U] = 0U;
    } else if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit) {
        VL_ASSIGNSEL_WIIQ(256,64,(0xc0U & ((IData)(
                                                   (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                    >> 3U)) 
                                           << 6U)), vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg, vlSelf->ysyx_22040750__DOT__mem_wdata);
    } else if (((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                 ? 1U : 0U)) {
        VL_ASSIGNSEL_WIIQ(256,64,(0xc0U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                           << 3U)), vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg, vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_reg);
    } else if (((((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                   ? 1U : 0U) | ((0x100U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                  ? 1U : 0U)) & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rvalid))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[0U] 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U];
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[1U] 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U];
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U] 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U];
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U] 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U];
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U] 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U];
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U] 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U];
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U] 
            = (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rdata);
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U] 
            = (IData)((vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rdata 
                       >> 0x20U));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[0U] 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[0U];
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[1U] 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[1U];
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U] 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U];
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U] 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U];
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U] 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U];
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U] 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U];
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U] 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U];
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U] 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U];
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (1U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (2U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (4U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (8U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x10U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x20U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x40U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x80U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x100U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x200U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x400U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x800U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x1000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x2000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x4000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x8000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x10000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x20000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x40000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x80000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x100000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x200000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x400000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x800000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x1000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x2000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x4000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x8000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x10000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x20000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x40000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = (0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U] 
            = ((0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]) 
               | (0x80000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (1U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (2U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (4U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (8U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x10U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x20U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x40U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x80U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x100U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x200U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x400U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x800U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x1000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x2000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x4000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x8000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x10000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x20000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x40000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x80000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x100000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x200000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x400000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x800000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x1000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x2000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x4000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x8000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x10000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x20000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x40000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = (0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U] 
            = ((0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]) 
               | (0x80000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (1U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (2U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (4U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (8U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x10U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x20U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x40U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x80U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x100U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x200U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x400U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x800U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x1000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x2000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x4000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x8000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x10000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x20000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x40000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x80000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x100000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x200000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x400000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x800000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x1000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x2000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x4000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x8000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x10000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x20000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x40000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = (0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U] 
            = ((0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]) 
               | (0x80000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (1U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (2U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (4U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (8U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x10U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x20U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x40U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x80U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x100U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x200U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x400U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x800U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x1000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x2000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x4000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x8000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x10000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x20000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x40000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x80000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x100000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x200000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x400000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x800000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x1000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x2000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x4000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x8000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x10000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x20000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x40000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = (0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]);
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[(
                                                                                (3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                                                >> 9U)) 
                                                                                | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                                                                >> 5U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
               ((3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                       >> 9U)) | ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace) 
                                  >> 5U))] | ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace)))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U] 
            = ((0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]) 
               | (0x80000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[3U]));
    }
    vlSelf->__Vdly__ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_reg_wen 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid) 
                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin))
                                          ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen)
                                          : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_reg_wen)));
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (1U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (2U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (4U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (8U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x10U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x20U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x40U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x80U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x100U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x200U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x400U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x800U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x1000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x2000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x4000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x8000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x10000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x20000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x40000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x80000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x100000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x200000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x400000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x800000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x1000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x2000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x4000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x8000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x10000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x20000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x40000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = (0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U] 
            = ((0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]) 
               | (0x80000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[0U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (1U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (2U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (4U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (8U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x10U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x20U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x40U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x80U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x100U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x200U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x400U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x800U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x1000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x2000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x4000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x8000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x10000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x20000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x40000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x80000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x100000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x200000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x400000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x800000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x1000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x2000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x4000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x8000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x10000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x20000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x40000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = (0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U] 
            = ((0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]) 
               | (0x80000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[1U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (1U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (2U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (4U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (8U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x10U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x20U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x40U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x80U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x100U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x200U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x400U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x800U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x1000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x2000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x4000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x8000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x10000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x20000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x40000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x80000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x100000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x200000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x400000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x800000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x1000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x2000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x4000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x8000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x10000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x20000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x40000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = (0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U] 
            = ((0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]) 
               | (0x80000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[2U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xfffffffeU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (1U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xfffffffdU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (2U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xfffffffbU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (4U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xfffffff7U & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (8U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xffffffefU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x10U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xffffffdfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x20U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xffffffbfU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x40U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xffffff7fU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x80U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xfffffeffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x100U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xfffffdffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x200U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xfffffbffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x400U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xfffff7ffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x800U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xffffefffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x1000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xffffdfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x2000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xffffbfffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x4000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xffff7fffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x8000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xfffeffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x10000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xfffdffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x20000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xfffbffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x40000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xfff7ffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x80000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xffefffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x100000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xffdfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x200000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xffbfffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x400000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xff7fffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x800000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xfeffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x1000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xfdffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x2000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xfbffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x4000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xf7ffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x8000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xefffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x10000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xdfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x20000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0xbfffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x40000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = (0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]);
    } else if ((1U & (((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                        ? 1U : 0U) | ((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)))) {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[(3U 
                                                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                                >> 9U))] 
            = (vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
               (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                      >> 9U))] | ((IData)(1U) << (0x1fU 
                                                  & ((0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)))))));
    } else {
        vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U] 
            = ((0x7fffffffU & vlSelf->__Vdly__ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]) 
               | (0x80000000U & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[3U]));
    }
    vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr 
        = ((IData)(vlSelf->reset) ? 0ULL : (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid) 
                                             & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin))
                                             ? (((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op 
                                                  & (- (QData)((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0x24U 
                                                                         & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))))) 
                                                 | ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr 
                                                     | vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op) 
                                                    & (- (QData)((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x12U 
                                                                           & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel)))))))) 
                                                | ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr 
                                                    & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op)) 
                                                   & (- (QData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (9U 
                                                                          & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))))))
                                             : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr));
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v0 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v1 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v1 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v1 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v2 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v2 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v3 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v4 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v4 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v4 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v5 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [1U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v5 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v6 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v7 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v7 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v7 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v8 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [2U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v8 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v9 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v10 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v10 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v10 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v11 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [3U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v11 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v12 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v13 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v13 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v13 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v14 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [4U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v14 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v15 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v16 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v16 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v16 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v17 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [5U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v17 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v18 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v19 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v19 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v19 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v20 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [6U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v20 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v21 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v22 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v22 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v22 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v23 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [7U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v23 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v24 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v25 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v25 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v25 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v26 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [8U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v26 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v27 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v28 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v28 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v28 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v29 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [9U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v29 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v30 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v31 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v31 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v31 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v32 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0xaU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v32 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v33 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v34 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v34 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v34 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v35 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0xbU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v35 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v36 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v37 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v37 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v37 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v38 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0xcU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v38 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v39 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v40 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v40 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v40 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v41 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0xdU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v41 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v42 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v43 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v43 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v43 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v44 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0xeU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v44 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v45 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v46 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v46 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v46 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v47 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0xfU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v47 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v48 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v49 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v49 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v49 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v50 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x10U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v50 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v51 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v52 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v52 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v52 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v53 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x11U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v53 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v54 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v55 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v55 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v55 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v56 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x12U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v56 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v57 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v58 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v58 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v58 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v59 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x13U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v59 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v60 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v61 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v61 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v61 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v62 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x14U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v62 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v63 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v64 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v64 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v64 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v65 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x15U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v65 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v66 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v67 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v67 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v67 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v68 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x16U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v68 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v69 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v70 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v70 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v70 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v71 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x17U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v71 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v72 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v73 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v73 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v73 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v74 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x18U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v74 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v75 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v76 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v76 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v76 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v77 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x19U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v77 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v78 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v79 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v79 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v79 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v80 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x1aU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v80 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v81 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v82 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v82 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v82 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v83 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x1bU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v83 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v84 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v85 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v85 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v85 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v86 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x1cU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v86 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v87 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v88 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v88 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v88 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v89 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x1dU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v89 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v90 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v91 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v91 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v91 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v92 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x1eU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v92 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v93 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v94 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v94 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v94 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v95 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x1fU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v95 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v96 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v97 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v97 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v97 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v98 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x20U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v98 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v99 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v100 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v100 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v100 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v101 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x21U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v101 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v102 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v103 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v103 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v103 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v104 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x22U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v104 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v105 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v106 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v106 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v106 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v107 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x23U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v107 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v108 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v109 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v109 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v109 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v110 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x24U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v110 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v111 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v112 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v112 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v112 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v113 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x25U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v113 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v114 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v115 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v115 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v115 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v116 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x26U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v116 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v117 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v118 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v118 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v118 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v119 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x27U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v119 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v120 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v121 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v121 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v121 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v122 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x28U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v122 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v123 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v124 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v124 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v124 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v125 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x29U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v125 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v126 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v127 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v127 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v127 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v128 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x2aU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v128 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v129 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v130 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v130 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v130 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v131 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x2bU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v131 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v132 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v133 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v133 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v133 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v134 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x2cU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v134 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v135 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v136 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v136 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v136 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v137 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x2dU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v137 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v138 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v139 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v139 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v139 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v140 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x2eU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v140 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v141 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v142 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v142 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v142 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v143 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x2fU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v143 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v144 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v145 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v145 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v145 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v146 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x30U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v146 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v147 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v148 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v148 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v148 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v149 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x31U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v149 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v150 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v151 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v151 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v151 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v152 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x32U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v152 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v153 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v154 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v154 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v154 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v155 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x33U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v155 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v156 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v157 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v157 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v157 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v158 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x34U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v158 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v159 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v160 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v160 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v160 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v161 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x35U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v161 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v162 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v163 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v163 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v163 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v164 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x36U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v164 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v165 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v166 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v166 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v166 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v167 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x37U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v167 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v168 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v169 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v169 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v169 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v170 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x38U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v170 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v171 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v172 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v172 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v172 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v173 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x39U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v173 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v174 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v175 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v175 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v175 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v176 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x3aU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v176 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v177 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v178 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v178 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v178 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v179 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x3bU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v179 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v180 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v181 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v181 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v181 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v182 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x3cU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v182 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v183 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v184 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v184 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v184 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v185 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x3dU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v185 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v186 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v187 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v187 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v187 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v188 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x3eU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v188 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v189 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v190 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v190 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v190 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v191 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x3fU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v191 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v192 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v193 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v193 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v193 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v194 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x40U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v194 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v195 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v196 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v196 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v196 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v197 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x41U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v197 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v198 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v199 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v199 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v199 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v200 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x42U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v200 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v201 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v202 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v202 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v202 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v203 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x43U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v203 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v204 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v205 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v205 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v205 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v206 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x44U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v206 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v207 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v208 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v208 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v208 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v209 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x45U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v209 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v210 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v211 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v211 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v211 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v212 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x46U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v212 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v213 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v214 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v214 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v214 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v215 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x47U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v215 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v216 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v217 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v217 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v217 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v218 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x48U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v218 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v219 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v220 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v220 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v220 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v221 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x49U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v221 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v222 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v223 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v223 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v223 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v224 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x4aU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v224 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v225 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v226 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v226 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v226 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v227 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x4bU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v227 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v228 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v229 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v229 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v229 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v230 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x4cU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v230 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v231 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v232 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v232 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v232 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v233 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x4dU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v233 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v234 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v235 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v235 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v235 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v236 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x4eU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v236 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v237 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v238 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v238 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v238 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v239 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x4fU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v239 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v240 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v241 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v241 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v241 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v242 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x50U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v242 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v243 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v244 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v244 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v244 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v245 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x51U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v245 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v246 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v247 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v247 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v247 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v248 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x52U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v248 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v249 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v250 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v250 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v250 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v251 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x53U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v251 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v252 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v253 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v253 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v253 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v254 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x54U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v254 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v255 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v256 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v256 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v256 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v257 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x55U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v257 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v258 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v259 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v259 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v259 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v260 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x56U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v260 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v261 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v262 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v262 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v262 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v263 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x57U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v263 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v264 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v265 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v265 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v265 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v266 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x58U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v266 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v267 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v268 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v268 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v268 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v269 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x59U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v269 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v270 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v271 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v271 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v271 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v272 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x5aU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v272 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v273 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v274 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v274 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v274 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v275 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x5bU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v275 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v276 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v277 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v277 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v277 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v278 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x5cU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v278 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v279 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v280 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v280 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v280 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v281 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x5dU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v281 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v282 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v283 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v283 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v283 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v284 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x5eU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v284 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v285 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v286 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v286 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v286 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v287 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x5fU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v287 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v288 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v289 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v289 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v289 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v290 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x60U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v290 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v291 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v292 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v292 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v292 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v293 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x61U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v293 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v294 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v295 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v295 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v295 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v296 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x62U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v296 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v297 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v298 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v298 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v298 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v299 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x63U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v299 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v300 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v301 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v301 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v301 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v302 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x64U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v302 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v303 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v304 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v304 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v304 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v305 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x65U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v305 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v306 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v307 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v307 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v307 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v308 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x66U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v308 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v309 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v310 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v310 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v310 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v311 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x67U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v311 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v312 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v313 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v313 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v313 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v314 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x68U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v314 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v315 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v316 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v316 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v316 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v317 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x69U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v317 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v318 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v319 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v319 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v319 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v320 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x6aU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v320 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v321 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v322 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v322 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v322 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v323 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x6bU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v323 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v324 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v325 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v325 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v325 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v326 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x6cU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v326 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v327 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v328 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v328 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v328 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v329 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x6dU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v329 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v330 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v331 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v331 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v331 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v332 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x6eU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v332 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v333 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v334 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v334 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v334 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v335 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x6fU];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v335 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v336 = 1U;
    } else if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                 ? 1U : 0U)) {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v337 
            = (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
               >> 0xbU);
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v337 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v337 
            = ((0x7eU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                         >> 4U)) | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
    } else {
        vlSelf->__Vdlyvval__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v338 
            = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
            [0x70U];
        vlSelf->__Vdlyvset__ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table__v338 = 1U;
    }
}
