// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_top.h for the primary calling header

#include "Vcpu_top___024root.h"
#include "Vcpu_top__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_pc_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vcpu_top___024root____Vdpiimwrap_cpu_top__DOT__pc_e__DOT__set_pc_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root____Vdpiimwrap_cpu_top__DOT__pc_e__DOT__set_pc_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_pc_ptr(&a__Vopenarray);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vcpu_top___024root____Vdpiimwrap_cpu_top__DOT__gpr_e__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root____Vdpiimwrap_cpu_top__DOT__gpr_e__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

void Vcpu_top___024unit____Vdpiimwrap_sim_end_TOP____024unit();

VL_INLINE_OPT void Vcpu_top___024root___sequent__TOP__1(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___sequent__TOP__1\n"); );
    // Variables
    IData/*31:0*/ __Vdly__cpu_top__DOT__inst_IF_ID;
    SData/*31:0*/ __Vtemp8;
    VlWide<4>/*127:0*/ __Vtemp16;
    VlWide<3>/*95:0*/ __Vtemp28;
    VlWide<3>/*95:0*/ __Vtemp29;
    VlWide<3>/*95:0*/ __Vtemp30;
    VlWide<3>/*95:0*/ __Vtemp31;
    VlWide<3>/*95:0*/ __Vtemp32;
    VlWide<4>/*127:0*/ __Vtemp34;
    VlWide<4>/*127:0*/ __Vtemp35;
    VlWide<4>/*127:0*/ __Vtemp36;
    VlWide<4>/*127:0*/ __Vtemp37;
    VlWide<4>/*127:0*/ __Vtemp38;
    VlWide<4>/*127:0*/ __Vtemp39;
    VlWide<3>/*95:0*/ __Vtemp41;
    VlWide<3>/*95:0*/ __Vtemp44;
    QData/*63:0*/ __Vdly__cpu_top__DOT__pc_IF_ID;
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
    __Vdly__cpu_top__DOT__pc_IF_ID = vlSelf->cpu_top__DOT__pc_IF_ID;
    __Vdly__cpu_top__DOT__inst_IF_ID = vlSelf->cpu_top__DOT__inst_IF_ID;
    if (((0x100073U == vlSelf->cpu_top__DOT__inst_IF_ID) 
         & (~ (IData)(vlSelf->I_rst)))) {
        Vcpu_top___024unit____Vdpiimwrap_sim_end_TOP____024unit();
    }
    vlSelf->O_pc_valid = (1U & (~ (IData)(vlSelf->I_rst)));
    __Vdly__cpu_top__DOT__pc_IF_ID = ((IData)(vlSelf->I_rst)
                                       ? 0x7ffffffcULL
                                       : ((IData)(vlSelf->I_inst_valid)
                                           ? vlSelf->cpu_top__DOT__dnpc
                                           : vlSelf->cpu_top__DOT__pc_IF_ID));
    vlSelf->cpu_top__DOT__ID_EX_valid = ((~ (IData)(vlSelf->I_rst)) 
                                         & (IData)(vlSelf->cpu_top__DOT__IF_ID_valid));
    if (vlSelf->I_rst) {
        vlSelf->cpu_top__DOT__ID_EX_regin_sel = 0U;
        vlSelf->cpu_top__DOT__ID_EX_wstrb = 0U;
        vlSelf->cpu_top__DOT__ID_EX_rstrb = 0U;
        vlSelf->cpu_top__DOT__current_pc = 0x7ffffffcULL;
        vlSelf->cpu_top__DOT__ID_EX_alu_sext = 0U;
        vlSelf->cpu_top__DOT__ID_EX_rd_addr = 0U;
        __Vdly__cpu_top__DOT__inst_IF_ID = 0U;
    } else {
        vlSelf->cpu_top__DOT__ID_EX_regin_sel = ((IData)(vlSelf->cpu_top__DOT__IF_ID_valid)
                                                  ? (IData)(vlSelf->cpu_top__DOT__regin_sel)
                                                  : (IData)(vlSelf->cpu_top__DOT__ID_EX_regin_sel));
        vlSelf->cpu_top__DOT__ID_EX_wstrb = ((IData)(vlSelf->cpu_top__DOT__IF_ID_valid)
                                              ? (IData)(vlSelf->cpu_top__DOT__mem_wstrb)
                                              : (IData)(vlSelf->cpu_top__DOT__ID_EX_wstrb));
        vlSelf->cpu_top__DOT__ID_EX_rstrb = ((IData)(vlSelf->cpu_top__DOT__IF_ID_valid)
                                              ? (IData)(vlSelf->cpu_top__DOT__mem_rstrb)
                                              : (IData)(vlSelf->cpu_top__DOT__ID_EX_rstrb));
        vlSelf->cpu_top__DOT__current_pc = ((IData)(vlSelf->I_inst_valid)
                                             ? vlSelf->cpu_top__DOT__dnpc
                                             : vlSelf->cpu_top__DOT__current_pc);
        vlSelf->cpu_top__DOT__ID_EX_alu_sext = ((IData)(vlSelf->cpu_top__DOT__IF_ID_valid)
                                                 ? (IData)(vlSelf->cpu_top__DOT__alu_op_sext)
                                                 : (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_sext));
        vlSelf->cpu_top__DOT__ID_EX_rd_addr = (0x1fU 
                                               & ((IData)(vlSelf->cpu_top__DOT__IF_ID_valid)
                                                   ? 
                                                  (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                   >> 7U)
                                                   : (IData)(vlSelf->cpu_top__DOT__ID_EX_rd_addr)));
        __Vdly__cpu_top__DOT__inst_IF_ID = ((IData)(vlSelf->I_inst_valid)
                                             ? vlSelf->I_inst
                                             : vlSelf->cpu_top__DOT__inst_IF_ID);
    }
    vlSelf->cpu_top__DOT__ID_EX_word_op_mask = ((~ (IData)(vlSelf->I_rst)) 
                                                & ((IData)(vlSelf->cpu_top__DOT__IF_ID_valid)
                                                    ? 
                                                   ((0x1bU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                    | (0x3bU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->cpu_top__DOT__inst_IF_ID)))
                                                    : (IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)));
    __Vtemp8 = ((IData)(vlSelf->I_rst) ? 0U : ((IData)(vlSelf->cpu_top__DOT__IF_ID_valid)
                                                ? (
                                                   (((((((((((((1U 
                                                                & (- (IData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__add_flag)))) 
                                                               | (2U 
                                                                  & (- (IData)(
                                                                               ((IData)(
                                                                                ((0x33U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (0x20U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U)))) 
                                                                                | (IData)(
                                                                                ((0x3bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (0x20U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U))))))))) 
                                                              | (4U 
                                                                 & (- (IData)(
                                                                              ((IData)(
                                                                                (0x2013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                                               | (IData)(
                                                                                ((0x2033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U))))))))) 
                                                             | (8U 
                                                                & (- (IData)(
                                                                             ((IData)(
                                                                                (0x3013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                                              | (IData)(
                                                                                ((0x3033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U))))))))) 
                                                            | (0x10U 
                                                               & (- (IData)(
                                                                            ((IData)(
                                                                                (0x4013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                                             | (IData)(
                                                                                ((0x4033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U))))))))) 
                                                           | (0x20U 
                                                              & (- (IData)(
                                                                           ((IData)(
                                                                                (0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                                            | (IData)(
                                                                                ((0x6033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U))))))))) 
                                                          | (0x40U 
                                                             & (- (IData)(
                                                                          ((IData)(
                                                                                (0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                                           | (IData)(
                                                                                ((0x7033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U))))))))) 
                                                         | (0x80U 
                                                            & (- (IData)(
                                                                         ((((IData)(
                                                                                ((0x1013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x1aU)))) 
                                                                            | (IData)(
                                                                                ((0x1033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U))))) 
                                                                           | (IData)(
                                                                                ((0x101bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U))))) 
                                                                          | (IData)(
                                                                                ((0x103bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U))))))))) 
                                                        | (0x100U 
                                                           & (- (IData)(
                                                                        ((((IData)(
                                                                                ((0x5013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x1aU)))) 
                                                                           | (IData)(
                                                                                ((0x5033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U))))) 
                                                                          | (IData)(
                                                                                ((0x501bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U))))) 
                                                                         | (IData)(
                                                                                ((0x503bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (0U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U))))))))) 
                                                       | (0x200U 
                                                          & (- (IData)(
                                                                       ((((IData)(
                                                                                ((0x5013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (0x10U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x1aU)))) 
                                                                          | (IData)(
                                                                                ((0x5033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (0x20U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U))))) 
                                                                         | (IData)(
                                                                                ((0x501bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (0x20U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U))))) 
                                                                        | (IData)(
                                                                                ((0x503bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (0x20U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U))))))))) 
                                                      | (0x400U 
                                                         & (- (IData)(
                                                                      ((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MUL) 
                                                                       | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULW)))))) 
                                                     | (0x800U 
                                                        & (- (IData)(
                                                                     (((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULH) 
                                                                       | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                                                      | (IData)(
                                                                                ((0x3033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (1U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U))))))))) 
                                                    | (0x1000U 
                                                       & (- (IData)(
                                                                    ((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIV) 
                                                                       | (IData)(
                                                                                ((0x5033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (1U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U))))) 
                                                                      | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIVW)) 
                                                                     | (IData)(
                                                                               ((0x503bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (1U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U))))))))) 
                                                   | (0x2000U 
                                                      & (- (IData)(
                                                                   ((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REM) 
                                                                      | (IData)(
                                                                                ((0x7033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                                & (1U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U))))) 
                                                                     | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REMW)) 
                                                                    | (IData)(
                                                                              ((0x703bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                               & (1U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U)))))))))
                                                : (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel)));
    vlSelf->cpu_top__DOT__ID_EX_alu_op_sel = __Vtemp8;
    if (vlSelf->I_rst) {
        vlSelf->cpu_top__DOT__ID_EX_op2_sel = 0U;
        vlSelf->cpu_top__DOT__ID_EX_imm = 0ULL;
        vlSelf->cpu_top__DOT__ID_EX_rs2 = 0ULL;
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
        vlSelf->cpu_top__DOT__ID_EX_op1_sel = 0U;
        vlSelf->cpu_top__DOT__ID_EX_pc = 0ULL;
        vlSelf->cpu_top__DOT__ID_EX_rs1 = 0ULL;
    } else {
        vlSelf->cpu_top__DOT__ID_EX_op2_sel = ((IData)(vlSelf->cpu_top__DOT__IF_ID_valid)
                                                ? (
                                                   (1U 
                                                    & (- (IData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR)))) 
                                                   | (2U 
                                                      & (- (IData)(
                                                                   (((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI) 
                                                                       | (0x23U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                                      | (0x63U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                                     | (0x6fU 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                                    | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU))))))
                                                : (IData)(vlSelf->cpu_top__DOT__ID_EX_op2_sel));
        vlSelf->cpu_top__DOT__ID_EX_imm = ((IData)(vlSelf->cpu_top__DOT__IF_ID_valid)
                                            ? vlSelf->cpu_top__DOT__imm
                                            : vlSelf->cpu_top__DOT__ID_EX_imm);
        vlSelf->cpu_top__DOT__ID_EX_rs2 = ((IData)(vlSelf->cpu_top__DOT__IF_ID_valid)
                                            ? vlSelf->cpu_top__DOT__rs2_data
                                            : vlSelf->cpu_top__DOT__ID_EX_rs2);
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
        vlSelf->cpu_top__DOT__ID_EX_op1_sel = ((IData)(vlSelf->cpu_top__DOT__IF_ID_valid)
                                                ? (
                                                   ((1U 
                                                     & (- (IData)(
                                                                  (((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR) 
                                                                    | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI)) 
                                                                   | (0x23U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->cpu_top__DOT__inst_IF_ID)))))) 
                                                    | (2U 
                                                       & (- (IData)(
                                                                    (((0x63U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                      | (0x6fU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                                     | (0x17U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->cpu_top__DOT__inst_IF_ID))))))) 
                                                   | (4U 
                                                      & (- (IData)(
                                                                   (0x37U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->cpu_top__DOT__inst_IF_ID))))))
                                                : (IData)(vlSelf->cpu_top__DOT__ID_EX_op1_sel));
        vlSelf->cpu_top__DOT__ID_EX_pc = ((IData)(vlSelf->cpu_top__DOT__IF_ID_valid)
                                           ? vlSelf->cpu_top__DOT__pc_IF_ID
                                           : vlSelf->cpu_top__DOT__ID_EX_pc);
        vlSelf->cpu_top__DOT__ID_EX_rs1 = ((IData)(vlSelf->cpu_top__DOT__IF_ID_valid)
                                            ? vlSelf->cpu_top__DOT__rs1_data
                                            : vlSelf->cpu_top__DOT__ID_EX_rs1);
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
    vlSelf->cpu_top__DOT__inst_IF_ID = __Vdly__cpu_top__DOT__inst_IF_ID;
    vlSelf->cpu_top__DOT__pc_IF_ID = __Vdly__cpu_top__DOT__pc_IF_ID;
    vlSelf->cpu_top__DOT__alu_e__DOT__cin = ((IData)(
                                                     (0U 
                                                      != 
                                                      (0xeU 
                                                       & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel))))
                                              ? 1ULL
                                              : 0ULL);
    vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data[0U] 
        = (IData)(vlSelf->cpu_top__DOT__ID_EX_rs2);
    vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data[1U] 
        = (IData)((vlSelf->cpu_top__DOT__ID_EX_rs2 
                   >> 0x20U));
    vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data[2U] 
        = (IData)(vlSelf->cpu_top__DOT__ID_EX_imm);
    vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data[3U] 
        = (IData)((vlSelf->cpu_top__DOT__ID_EX_imm 
                   >> 0x20U));
    vlSelf->O_mem_wen = (0x23U == (0x7fU & vlSelf->cpu_top__DOT__inst_IF_ID));
    vlSelf->cpu_top__DOT__mem_wstrb = (0xffU & ((((- (IData)((IData)(
                                                                     (0x3023U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->cpu_top__DOT__inst_IF_ID))))) 
                                                  | (0xfU 
                                                     & (- (IData)((IData)(
                                                                          (0x2023U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->cpu_top__DOT__inst_IF_ID))))))) 
                                                 | (3U 
                                                    & (- (IData)((IData)(
                                                                         (0x1023U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->cpu_top__DOT__inst_IF_ID))))))) 
                                                | (1U 
                                                   & (- (IData)((IData)(
                                                                        (0x23U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->cpu_top__DOT__inst_IF_ID))))))));
    vlSelf->cpu_top__DOT__decoder_e__DOT__MUL = (IData)(
                                                        ((0x33U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                         & (1U 
                                                            == 
                                                            (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                             >> 0x19U))));
    vlSelf->cpu_top__DOT__decoder_e__DOT__MULH = (IData)(
                                                         ((0x1033U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                          & (1U 
                                                             == 
                                                             (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                              >> 0x19U))));
    vlSelf->cpu_top__DOT__decoder_e__DOT__MULHSU = (IData)(
                                                           ((0x2033U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                            & (1U 
                                                               == 
                                                               (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                >> 0x19U))));
    vlSelf->cpu_top__DOT__decoder_e__DOT__DIV = (IData)(
                                                        ((0x4033U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                         & (1U 
                                                            == 
                                                            (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                             >> 0x19U))));
    vlSelf->cpu_top__DOT__decoder_e__DOT__REM = (IData)(
                                                        ((0x6033U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                         & (1U 
                                                            == 
                                                            (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                             >> 0x19U))));
    vlSelf->cpu_top__DOT__decoder_e__DOT__MULW = (IData)(
                                                         ((0x3bU 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                          & (1U 
                                                             == 
                                                             (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                              >> 0x19U))));
    vlSelf->cpu_top__DOT__decoder_e__DOT__DIVW = (IData)(
                                                         ((0x403bU 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                          & (1U 
                                                             == 
                                                             (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                              >> 0x19U))));
    vlSelf->cpu_top__DOT__decoder_e__DOT__REMW = (IData)(
                                                         ((0x603bU 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                          & (1U 
                                                             == 
                                                             (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                              >> 0x19U))));
    vlSelf->cpu_top__DOT__decoder_e__DOT__LD = (IData)(
                                                       (0x3003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->cpu_top__DOT__inst_IF_ID)));
    vlSelf->cpu_top__DOT__decoder_e__DOT__LW = (IData)(
                                                       (0x2003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->cpu_top__DOT__inst_IF_ID)));
    vlSelf->cpu_top__DOT__decoder_e__DOT__LWU = (IData)(
                                                        (0x6003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->cpu_top__DOT__inst_IF_ID)));
    vlSelf->cpu_top__DOT__decoder_e__DOT__LH = (IData)(
                                                       (0x1003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->cpu_top__DOT__inst_IF_ID)));
    vlSelf->cpu_top__DOT__decoder_e__DOT__LHU = (IData)(
                                                        (0x5003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->cpu_top__DOT__inst_IF_ID)));
    vlSelf->cpu_top__DOT__decoder_e__DOT__LB = (IData)(
                                                       (3U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->cpu_top__DOT__inst_IF_ID)));
    vlSelf->cpu_top__DOT__decoder_e__DOT__immS = ((0xfe0U 
                                                   & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                        >> 7U)));
    vlSelf->cpu_top__DOT__decoder_e__DOT__immB = ((0x1000U 
                                                   & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                      >> 0x13U)) 
                                                  | ((0x800U 
                                                      & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                              >> 7U)))));
    vlSelf->cpu_top__DOT__decoder_e__DOT__immJ = ((0x100000U 
                                                   & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                      >> 0xbU)) 
                                                  | ((0xff000U 
                                                      & vlSelf->cpu_top__DOT__inst_IF_ID) 
                                                     | ((0x800U 
                                                         & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                              >> 0x14U)))));
    vlSelf->cpu_top__DOT__decoder_e__DOT__JALR = (IData)(
                                                         (0x67U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->cpu_top__DOT__inst_IF_ID)));
    vlSelf->cpu_top__DOT__decoder_e__DOT__typeR = (
                                                   (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                   | (0x3bU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->cpu_top__DOT__inst_IF_ID)));
    vlSelf->cpu_top__DOT__decoder_e__DOT__typeI = (
                                                   (((0x67U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                     | (3U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                    | (0x13U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                   | (0x1bU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->cpu_top__DOT__inst_IF_ID)));
    vlSelf->cpu_top__DOT__decoder_e__DOT__typeU = (
                                                   (0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                   | (0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->cpu_top__DOT__inst_IF_ID)));
    vlSelf->cpu_top__DOT__rs1_data = vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
        [(0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                   >> 0xfU))];
    vlSelf->cpu_top__DOT__rs2_data = vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
        [(0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                   >> 0x14U))];
    vlSelf->cpu_top__DOT__IF_ID_valid = ((~ (IData)(vlSelf->I_rst)) 
                                         & (IData)(vlSelf->I_inst_valid));
    VL_EXTEND_WQ(128,64, __Vtemp16, vlSelf->cpu_top__DOT__ID_EX_pc);
    vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[0U] 
        = (IData)(vlSelf->cpu_top__DOT__ID_EX_rs1);
    vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[1U] 
        = (IData)((vlSelf->cpu_top__DOT__ID_EX_rs1 
                   >> 0x20U));
    vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[2U] 
        = __Vtemp16[0U];
    vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[3U] 
        = __Vtemp16[1U];
    vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[4U] 
        = __Vtemp16[2U];
    vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[5U] 
        = __Vtemp16[3U];
    vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[0U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data[0U])));
    vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[1U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data[2U])));
    vlSelf->cpu_top__DOT__alu_op_sext = ((((((((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MUL) 
                                                 | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULH)) 
                                                | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                               | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIV)) 
                                              | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REM)) 
                                             | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULW)) 
                                            | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIVW)) 
                                           | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REMW)) 
                                          << 1U) | 
                                         (((((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MUL) 
                                               | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULH)) 
                                              | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIV)) 
                                             | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REM)) 
                                            | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULW)) 
                                           | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIVW)) 
                                          | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REMW)));
    vlSelf->cpu_top__DOT__mem_rstrb = (((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__LW) 
                                          | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__LH)) 
                                         | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__LB)) 
                                        << 8U) | ((0xf0U 
                                                   & ((- (IData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__LD))) 
                                                      << 4U)) 
                                                  | ((0xcU 
                                                      & ((- (IData)(
                                                                    (((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__LD) 
                                                                      | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__LW)) 
                                                                     | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__LWU)))) 
                                                         << 2U)) 
                                                     | (((((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__LD) 
                                                             | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__LW)) 
                                                            | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__LWU)) 
                                                           | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__LH)) 
                                                          | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__LHU)) 
                                                         << 1U) 
                                                        | (((((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__LD) 
                                                                | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__LW)) 
                                                               | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__LWU)) 
                                                              | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__LH)) 
                                                             | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__LHU)) 
                                                            | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__LB)) 
                                                           | (IData)(
                                                                     (0x4003U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->cpu_top__DOT__inst_IF_ID))))))));
    vlSelf->cpu_top__DOT__decoder_e__DOT__add_flag 
        = ((((((((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU) 
                   | (0x63U == (0x7fU & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                  | (0x23U == (0x7fU & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                 | (3U == (0x7fU & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                | (0x6fU == (0x7fU & vlSelf->cpu_top__DOT__inst_IF_ID))) 
               | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__JALR)) 
              | (IData)((0x13U == (0x707fU & vlSelf->cpu_top__DOT__inst_IF_ID)))) 
             | (IData)((0x1bU == (0x707fU & vlSelf->cpu_top__DOT__inst_IF_ID)))) 
            | (IData)(((0x33U == (0x707fU & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                       & (0U == (vlSelf->cpu_top__DOT__inst_IF_ID 
                                 >> 0x19U))))) | (IData)(
                                                         ((0x3bU 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                              >> 0x19U)))));
    vlSelf->cpu_top__DOT__imm = ((((((- (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI))) 
                                     & (((- (QData)((IData)(
                                                            (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                     >> 0x14U))))) 
                                    | ((- (QData)((IData)(
                                                          (0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->cpu_top__DOT__inst_IF_ID))))) 
                                       & (((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__immS) 
                                                                  >> 0xbU))))) 
                                           << 0xcU) 
                                          | (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__immS))))) 
                                   | ((- (QData)((IData)(
                                                         (0x63U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->cpu_top__DOT__inst_IF_ID))))) 
                                      & (((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__immB) 
                                                                 >> 0xcU))))) 
                                          << 0xdU) 
                                         | (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__immB))))) 
                                  | ((- (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU))) 
                                     & (((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->cpu_top__DOT__inst_IF_ID)))))) 
                                 | ((- (QData)((IData)(
                                                       (0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->cpu_top__DOT__inst_IF_ID))))) 
                                    & (((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->cpu_top__DOT__decoder_e__DOT__immJ 
                                                               >> 0x14U))))) 
                                        << 0x15U) | (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__immJ)))));
    vlSelf->cpu_top__DOT__reg_wen = ((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR) 
                                       | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI)) 
                                      | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU)) 
                                     | (0x6fU == (0x7fU 
                                                  & vlSelf->cpu_top__DOT__inst_IF_ID)));
    vlSelf->O_mem_wr_data = ((0x80U & (IData)(vlSelf->cpu_top__DOT__mem_wstrb))
                              ? vlSelf->cpu_top__DOT__rs2_data
                              : ((8U & (IData)(vlSelf->cpu_top__DOT__mem_wstrb))
                                  ? (((QData)((IData)(vlSelf->cpu_top__DOT__rs2_data)) 
                                      << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__rs2_data)))
                                  : ((2U & (IData)(vlSelf->cpu_top__DOT__mem_wstrb))
                                      ? (((QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->cpu_top__DOT__rs2_data)))) 
                                          << 0x30U) 
                                         | (((QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->cpu_top__DOT__rs2_data)))) 
                                             << 0x20U) 
                                            | (((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->cpu_top__DOT__rs2_data)))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->cpu_top__DOT__rs2_data)))))))
                                      : (((QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->cpu_top__DOT__rs2_data)))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->cpu_top__DOT__rs2_data)))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->cpu_top__DOT__rs2_data)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->cpu_top__DOT__rs2_data)))) 
                                                   << 0x20U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->cpu_top__DOT__rs2_data)))) 
                                                      << 0x18U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->cpu_top__DOT__rs2_data)))) 
                                                         << 0x10U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->cpu_top__DOT__rs2_data)))) 
                                                            << 8U) 
                                                           | (QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->cpu_top__DOT__rs2_data))))))))))))));
    vlSelf->cpu_top__DOT__decoder_e__DOT__eq = (vlSelf->cpu_top__DOT__rs1_data 
                                                == vlSelf->cpu_top__DOT__rs2_data);
    vlSelf->cpu_top__DOT__decoder_e__DOT__ltu = (vlSelf->cpu_top__DOT__rs1_data 
                                                 < vlSelf->cpu_top__DOT__rs2_data);
    vlSelf->cpu_top__DOT__decoder_e__DOT__lt = VL_LTS_IQQ(1,64,64, vlSelf->cpu_top__DOT__rs1_data, vlSelf->cpu_top__DOT__rs2_data);
    vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[0U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[0U])));
    vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[1U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[2U])));
    vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[2U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[4U])));
    vlSelf->cpu_top__DOT__alu_op2 = ((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->cpu_top__DOT__ID_EX_op2_sel))))) 
                                     & vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data
                                     [0U]);
    vlSelf->cpu_top__DOT__alu_op2 = (vlSelf->cpu_top__DOT__alu_op2 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->cpu_top__DOT__ID_EX_op2_sel) 
                                                               >> 1U))))) 
                                        & vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data
                                        [1U]));
    vlSelf->cpu_top__DOT__regin_sel = ((((IData)(vlSelf->cpu_top__DOT__reg_wen) 
                                         & ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                            | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__JALR))) 
                                        << 2U) | ((
                                                   ((IData)(vlSelf->cpu_top__DOT__reg_wen) 
                                                    & (3U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelf->cpu_top__DOT__reg_wen) 
                                                     & (~ 
                                                        (((3U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                          | (0x6fU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                         | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__JALR))))));
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[1U] = ((1U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                      >> 7U)))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[2U] = ((2U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                      >> 7U)))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[3U] = ((3U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                      >> 7U)))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[4U] = ((4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                      >> 7U)))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[5U] = ((5U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                      >> 7U)))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[6U] = ((6U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                      >> 7U)))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[7U] = ((7U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                      >> 7U)))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[8U] = ((8U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                      >> 7U)))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[9U] = ((9U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                      >> 7U)))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0xaU] = (
                                                   (0xaU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                        >> 7U)))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                    : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0xbU] = (
                                                   (0xbU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                        >> 7U)))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                    : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0xcU] = (
                                                   (0xcU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                        >> 7U)))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                    : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0xdU] = (
                                                   (0xdU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                        >> 7U)))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                    : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0xeU] = (
                                                   (0xeU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                        >> 7U)))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                    : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0xfU] = (
                                                   (0xfU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                        >> 7U)))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                    : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x10U] = 
        ((0x10U == (0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                             >> 7U))) ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x11U] = 
        ((0x11U == (0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                             >> 7U))) ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x12U] = 
        ((0x12U == (0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                             >> 7U))) ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x13U] = 
        ((0x13U == (0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                             >> 7U))) ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x14U] = 
        ((0x14U == (0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                             >> 7U))) ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x15U] = 
        ((0x15U == (0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                             >> 7U))) ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x16U] = 
        ((0x16U == (0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                             >> 7U))) ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x17U] = 
        ((0x17U == (0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                             >> 7U))) ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x18U] = 
        ((0x18U == (0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                             >> 7U))) ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x19U] = 
        ((0x19U == (0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                             >> 7U))) ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x1aU] = 
        ((0x1aU == (0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                             >> 7U))) ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x1bU] = 
        ((0x1bU == (0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                             >> 7U))) ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x1cU] = 
        ((0x1cU == (0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                             >> 7U))) ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x1dU] = 
        ((0x1dU == (0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                             >> 7U))) ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x1eU] = 
        ((0x1eU == (0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                             >> 7U))) ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x1fU] = 
        ((0x1fU == (0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                             >> 7U))) ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__decoder_e__DOT__typeB_jr 
        = (((((((IData)((0x63U == (0x707fU & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                & (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__eq)) 
               | ((IData)((0x1063U == (0x707fU & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                  & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__eq)))) 
              | ((IData)((0x4063U == (0x707fU & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                 & (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__lt))) 
             | ((IData)((0x5063U == (0x707fU & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__lt)))) 
            | ((IData)((0x6063U == (0x707fU & vlSelf->cpu_top__DOT__inst_IF_ID))) 
               & (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu))) 
           | ((IData)((0x7063U == (0x707fU & vlSelf->cpu_top__DOT__inst_IF_ID))) 
              & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu))));
    vlSelf->cpu_top__DOT__alu_op1 = ((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->cpu_top__DOT__ID_EX_op1_sel))))) 
                                     & vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data
                                     [0U]);
    vlSelf->cpu_top__DOT__alu_op1 = (vlSelf->cpu_top__DOT__alu_op1 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->cpu_top__DOT__ID_EX_op1_sel) 
                                                               >> 1U))))) 
                                        & vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data
                                        [1U]));
    vlSelf->cpu_top__DOT__alu_op1 = (vlSelf->cpu_top__DOT__alu_op1 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->cpu_top__DOT__ID_EX_op1_sel) 
                                                               >> 2U))))) 
                                        & vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data
                                        [2U]));
    vlSelf->cpu_top__DOT__alu_e__DOT__sext2 = ((1U 
                                                & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_sext))
                                                ? (1U 
                                                   & ((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                                       ? (IData)(
                                                                 (vlSelf->cpu_top__DOT__alu_op2 
                                                                  >> 0x1fU))
                                                       : (IData)(
                                                                 (vlSelf->cpu_top__DOT__alu_op2 
                                                                  >> 0x3fU))))
                                                : 0U);
    vlSelf->cpu_top__DOT__alu_e__DOT__adder2 = ((IData)(
                                                        (0U 
                                                         != 
                                                         (0xeU 
                                                          & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel))))
                                                 ? 
                                                (~ vlSelf->cpu_top__DOT__alu_op2)
                                                 : vlSelf->cpu_top__DOT__alu_op2);
    vlSelf->cpu_top__DOT__alu_e__DOT__shamt = (0x3fU 
                                               & ((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                                   ? 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->cpu_top__DOT__alu_op2))
                                                   : (IData)(vlSelf->cpu_top__DOT__alu_op2)));
    vlSelf->O_mem_rd_en = (1U & ((IData)(vlSelf->cpu_top__DOT__regin_sel) 
                                 >> 1U));
    vlSelf->cpu_top__DOT__dnpc_sel = (((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__JALR) 
                                       << 3U) | (((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeB_jr) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ 
                                                          (((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__JALR) 
                                                            | (0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                           | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeB_jr)))))));
    vlSelf->cpu_top__DOT__alu_e__DOT__sext1 = ((2U 
                                                & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_sext))
                                                ? (1U 
                                                   & ((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                                       ? (IData)(
                                                                 (vlSelf->cpu_top__DOT__alu_op1 
                                                                  >> 0x1fU))
                                                       : (IData)(
                                                                 (vlSelf->cpu_top__DOT__alu_op1 
                                                                  >> 0x3fU))))
                                                : 0U);
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0xfffffffffffffff8ULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | (IData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                            >> 0x3dU)) 
                                   << 2U)) | ((2U & 
                                               ((IData)(
                                                        (vlSelf->cpu_top__DOT__alu_op1 
                                                         >> 0x3eU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 0x3fU))))))));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0xffffffffffffffc7ULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                             >> 0x3aU)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 0x3bU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_op1 
                                                             >> 0x3cU))))))) 
            << 3U));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0xfffffffffffffe3fULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                             >> 0x37U)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 0x38U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_op1 
                                                             >> 0x39U))))))) 
            << 6U));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0xfffffffffffff1ffULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                             >> 0x34U)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 0x35U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_op1 
                                                             >> 0x36U))))))) 
            << 9U));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0xffffffffffff8fffULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                             >> 0x31U)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 0x32U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_op1 
                                                             >> 0x33U))))))) 
            << 0xcU));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0xfffffffffffc7fffULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                             >> 0x2eU)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 0x2fU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_op1 
                                                             >> 0x30U))))))) 
            << 0xfU));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0xffffffffffe3ffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                             >> 0x2bU)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 0x2cU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_op1 
                                                             >> 0x2dU))))))) 
            << 0x12U));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0xffffffffff1fffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                             >> 0x28U)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 0x29U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_op1 
                                                             >> 0x2aU))))))) 
            << 0x15U));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0xfffffffff8ffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                             >> 0x25U)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 0x26U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_op1 
                                                             >> 0x27U))))))) 
            << 0x18U));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0xffffffffc7ffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                             >> 0x22U)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 0x23U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_op1 
                                                             >> 0x24U))))))) 
            << 0x1bU));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0xfffffffe3fffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                             >> 0x1fU)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 0x20U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_op1 
                                                             >> 0x21U))))))) 
            << 0x1eU));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0xfffffff1ffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                             >> 0x1cU)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 0x1dU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_op1 
                                                             >> 0x1eU))))))) 
            << 0x21U));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0xffffff8fffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                             >> 0x19U)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 0x1aU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_op1 
                                                             >> 0x1bU))))))) 
            << 0x24U));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0xfffffc7fffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                             >> 0x16U)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 0x17U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_op1 
                                                             >> 0x18U))))))) 
            << 0x27U));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0xffffe3ffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                             >> 0x13U)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 0x14U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_op1 
                                                             >> 0x15U))))))) 
            << 0x2aU));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0xffff1fffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                             >> 0x10U)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 0x11U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_op1 
                                                             >> 0x12U))))))) 
            << 0x2dU));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0xfff8ffffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                             >> 0xdU)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 0xeU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_op1 
                                                             >> 0xfU))))))) 
            << 0x30U));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0xffc7ffffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                             >> 0xaU)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 0xbU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_op1 
                                                             >> 0xcU))))))) 
            << 0x33U));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0xfe3fffffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                             >> 7U)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 8U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_op1 
                                                             >> 9U))))))) 
            << 0x36U));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0xf1ffffffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                             >> 4U)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 5U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_op1 
                                                             >> 6U))))))) 
            << 0x39U));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0x8fffffffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_op1 
                                             >> 1U)) 
                                    << 2U)) | ((2U 
                                                & ((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 2U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_op1 
                                                             >> 3U))))))) 
            << 0x3cU));
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 
        ((0x7fffffffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1) 
         | ((QData)((IData)((1U & (IData)(vlSelf->cpu_top__DOT__alu_op1)))) 
            << 0x3fU));
    vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext[0U] 
        = (IData)(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                    ? (((QData)((IData)((- (IData)((IData)(vlSelf->cpu_top__DOT__alu_e__DOT__sext2))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__alu_op2)))
                    : vlSelf->cpu_top__DOT__alu_op2));
    vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext[1U] 
        = (IData)((((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                     ? (((QData)((IData)((- (IData)((IData)(vlSelf->cpu_top__DOT__alu_e__DOT__sext2))))) 
                         << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__alu_op2)))
                     : vlSelf->cpu_top__DOT__alu_op2) 
                   >> 0x20U));
    vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext[2U] 
        = vlSelf->cpu_top__DOT__alu_e__DOT__sext2;
    vlSelf->cpu_top__DOT__alu_e__DOT__result = ((vlSelf->cpu_top__DOT__alu_op1 
                                                 + vlSelf->cpu_top__DOT__alu_e__DOT__adder2) 
                                                + vlSelf->cpu_top__DOT__alu_e__DOT__cin);
    vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel 
        = ((4U & ((IData)(vlSelf->cpu_top__DOT__dnpc_sel) 
                  >> 1U)) | (((IData)((0U != (6U & (IData)(vlSelf->cpu_top__DOT__dnpc_sel)))) 
                              << 1U) | (1U & (IData)(vlSelf->cpu_top__DOT__dnpc_sel))));
    vlSelf->cpu_top__DOT__npc_e__DOT__dnpc_sum = ((
                                                   (2U 
                                                    & (IData)(vlSelf->cpu_top__DOT__dnpc_sel))
                                                    ? vlSelf->cpu_top__DOT__imm
                                                    : vlSelf->cpu_top__DOT__rs1_data) 
                                                  + 
                                                  ((8U 
                                                    & (IData)(vlSelf->cpu_top__DOT__dnpc_sel))
                                                    ? vlSelf->cpu_top__DOT__rs2_data
                                                    : vlSelf->cpu_top__DOT__current_pc));
    vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext[0U] 
        = (IData)(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                    ? (((QData)((IData)((- (IData)((IData)(vlSelf->cpu_top__DOT__alu_e__DOT__sext1))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__alu_op1)))
                    : vlSelf->cpu_top__DOT__alu_op1));
    vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext[1U] 
        = (IData)((((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                     ? (((QData)((IData)((- (IData)((IData)(vlSelf->cpu_top__DOT__alu_e__DOT__sext1))))) 
                         << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__alu_op1)))
                     : vlSelf->cpu_top__DOT__alu_op1) 
                   >> 0x20U));
    vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext[2U] 
        = vlSelf->cpu_top__DOT__alu_e__DOT__sext1;
    vlSelf->cpu_top__DOT__alu_e__DOT__shift_op = ((0x80U 
                                                   & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel))
                                                   ? vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1
                                                   : vlSelf->cpu_top__DOT__alu_op1);
    vlSelf->O_mem_addr = vlSelf->cpu_top__DOT__alu_e__DOT__result;
    vlSelf->O_mem_wr_strb = (0xffU & ((IData)(vlSelf->cpu_top__DOT__mem_wstrb) 
                                      << (7U & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__result))));
    vlSelf->cpu_top__DOT__alu_e__DOT__slt_result = (QData)((IData)(
                                                                   (1U 
                                                                    & (((IData)(
                                                                                (vlSelf->cpu_top__DOT__alu_op1 
                                                                                >> 0x3fU)) 
                                                                        & (~ (IData)(
                                                                                (vlSelf->cpu_top__DOT__alu_op2 
                                                                                >> 0x3fU)))) 
                                                                       | ((~ 
                                                                           ((IData)(
                                                                                (vlSelf->cpu_top__DOT__alu_op1 
                                                                                >> 0x3fU)) 
                                                                            ^ (IData)(
                                                                                (vlSelf->cpu_top__DOT__alu_op2 
                                                                                >> 0x3fU)))) 
                                                                          & (IData)(
                                                                                (vlSelf->cpu_top__DOT__alu_e__DOT__result 
                                                                                >> 0x3fU)))))));
    vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[0U] 
        = (IData)((4ULL + vlSelf->cpu_top__DOT__current_pc));
    vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[1U] 
        = (IData)(((4ULL + vlSelf->cpu_top__DOT__current_pc) 
                   >> 0x20U));
    vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[2U] 
        = (IData)(vlSelf->cpu_top__DOT__npc_e__DOT__dnpc_sum);
    vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[3U] 
        = (IData)((vlSelf->cpu_top__DOT__npc_e__DOT__dnpc_sum 
                   >> 0x20U));
    vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[4U] 
        = (IData)((0xfffffffffffffffeULL & vlSelf->cpu_top__DOT__npc_e__DOT__dnpc_sum));
    vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[5U] 
        = (IData)(((0xfffffffffffffffeULL & vlSelf->cpu_top__DOT__npc_e__DOT__dnpc_sum) 
                   >> 0x20U));
    vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
        = (((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
             ? (QData)((IData)(((0x80U & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel))
                                 ? (IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_op 
                                            >> 0x20U))
                                 : (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op))))
             : vlSelf->cpu_top__DOT__alu_e__DOT__shift_op) 
           >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt));
    vlSelf->cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[0U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[0U])));
    vlSelf->cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[1U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[2U])));
    vlSelf->cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[2U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[4U])));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xfffffffffffffff8ULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | (IData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                              >> 0x3dU)) 
                                     << 2U)) | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                             >> 0x3eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x3fU))))))));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xffffffffffffffc7ULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x3aU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x3bU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x3cU))))))) 
              << 3U));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xfffffffffffffe3fULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x37U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x38U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x39U))))))) 
              << 6U));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xfffffffffffff1ffULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x34U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x35U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x36U))))))) 
              << 9U));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xffffffffffff8fffULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x31U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x32U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x33U))))))) 
              << 0xcU));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xfffffffffffc7fffULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x2eU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x2fU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x30U))))))) 
              << 0xfU));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xffffffffffe3ffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x2bU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x2cU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x2dU))))))) 
              << 0x12U));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xffffffffff1fffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x28U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x29U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x2aU))))))) 
              << 0x15U));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xfffffffff8ffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x25U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x26U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x27U))))))) 
              << 0x18U));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xffffffffc7ffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x22U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x23U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x24U))))))) 
              << 0x1bU));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xfffffffe3fffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x1fU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x20U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x21U))))))) 
              << 0x1eU));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xfffffff1ffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x1cU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x1dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x1eU))))))) 
              << 0x21U));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xffffff8fffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x19U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x1aU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x1bU))))))) 
              << 0x24U));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xfffffc7fffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x16U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x17U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x18U))))))) 
              << 0x27U));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xffffe3ffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x13U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x14U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x15U))))))) 
              << 0x2aU));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xffff1fffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0x10U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0x11U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0x12U))))))) 
              << 0x2dU));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xfff8ffffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0xdU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0xeU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0xfU))))))) 
              << 0x30U));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xffc7ffffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 0xaU)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 0xbU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 0xcU))))))) 
              << 0x33U));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xfe3fffffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 7U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 8U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 9U))))))) 
              << 0x36U));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0xf1ffffffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 4U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 5U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 6U))))))) 
              << 0x39U));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0x8fffffffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                               >> 1U)) 
                                      << 2U)) | ((2U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                              >> 2U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                               >> 3U))))))) 
              << 0x3cU));
    vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
        = ((0x7fffffffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result) 
           | ((QData)((IData)((1U & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)))) 
              << 0x3fU));
    vlSelf->cpu_top__DOT__dnpc = ((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel))))) 
                                  & vlSelf->cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data
                                  [0U]);
    vlSelf->cpu_top__DOT__dnpc = (vlSelf->cpu_top__DOT__dnpc 
                                  | ((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel) 
                                                            >> 1U))))) 
                                     & vlSelf->cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data
                                     [1U]));
    vlSelf->cpu_top__DOT__dnpc = (vlSelf->cpu_top__DOT__dnpc 
                                  | ((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel) 
                                                            >> 2U))))) 
                                     & vlSelf->cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data
                                     [2U]));
    VL_EXTEND_WQ(65,64, __Vtemp28, vlSelf->cpu_top__DOT__alu_op1);
    VL_EXTEND_WQ(65,64, __Vtemp29, vlSelf->cpu_top__DOT__alu_e__DOT__adder2);
    VL_ADD_W(3, __Vtemp30, __Vtemp28, __Vtemp29);
    VL_EXTEND_WQ(65,64, __Vtemp31, vlSelf->cpu_top__DOT__alu_e__DOT__cin);
    VL_ADD_W(3, __Vtemp32, __Vtemp30, __Vtemp31);
    VL_EXTENDS_WW(128,65, __Vtemp34, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext);
    VL_EXTENDS_WW(128,65, __Vtemp35, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
    VL_MULS_WWW(128,128,128, __Vtemp36, __Vtemp34, __Vtemp35);
    VL_EXTENDS_WW(128,65, __Vtemp37, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext);
    VL_EXTENDS_WW(128,65, __Vtemp38, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
    VL_MULS_WWW(128,128,128, __Vtemp39, __Vtemp37, __Vtemp38);
    VL_DIVS_WWW(65, __Vtemp41, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
    VL_MODDIVS_WWW(65, __Vtemp44, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
    vlSelf->cpu_top__DOT__alu_e__DOT__dword_result 
        = ((((((((((((((- (QData)((IData)((0U != (3U 
                                                  & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel)))))) 
                       & vlSelf->cpu_top__DOT__alu_e__DOT__result) 
                      | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                                   >> 2U))))) 
                         & vlSelf->cpu_top__DOT__alu_e__DOT__slt_result)) 
                     | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                                  >> 3U))))) 
                        & (QData)((IData)((1U & (~ 
                                                 (1U 
                                                  & __Vtemp32[2U]))))))) 
                    | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                                 >> 4U))))) 
                       & (vlSelf->cpu_top__DOT__alu_op1 
                          ^ vlSelf->cpu_top__DOT__alu_op2))) 
                   | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                                >> 5U))))) 
                      & (vlSelf->cpu_top__DOT__alu_op1 
                         | vlSelf->cpu_top__DOT__alu_op2))) 
                  | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                               >> 6U))))) 
                     & (vlSelf->cpu_top__DOT__alu_op1 
                        & vlSelf->cpu_top__DOT__alu_op2))) 
                 | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                              >> 7U))))) 
                    & ((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
                                                         >> 0x20U))))
                        : vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result))) 
                | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                             >> 8U))))) 
                   & vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)) 
               | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 9U))))) 
                  & (((- (QData)((IData)((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                                 ? (IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 0x1fU))
                                                 : (IData)(
                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                            >> 0x3fU))))))) 
                      & ((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                          ? (~ (0xffffffffULL >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt)))
                          : (~ (0xffffffffffffffffULL 
                                >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt))))) 
                     | vlSelf->cpu_top__DOT__alu_e__DOT__shift_result))) 
              | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                           >> 0xaU))))) 
                 & (((QData)((IData)(__Vtemp36[1U])) 
                     << 0x20U) | (QData)((IData)(__Vtemp36[0U]))))) 
             | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                          >> 0xbU))))) 
                & (((QData)((IData)(__Vtemp39[3U])) 
                    << 0x20U) | (QData)((IData)(__Vtemp39[2U]))))) 
            | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xcU))))) 
               & (((QData)((IData)(__Vtemp41[1U])) 
                   << 0x20U) | (QData)((IData)(__Vtemp41[0U]))))) 
           | ((- (QData)((IData)((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                        >> 0xdU))))) 
              & (((QData)((IData)(__Vtemp44[1U])) << 0x20U) 
                 | (QData)((IData)(__Vtemp44[0U])))));
    vlSelf->O_pc = vlSelf->cpu_top__DOT__dnpc;
}

VL_INLINE_OPT void Vcpu_top___024root___combo__TOP__4(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___combo__TOP__4\n"); );
    // Body
    vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data = 
        (vlSelf->I_mem_rd_data >> (0x38U & ((IData)(vlSelf->cpu_top__DOT__alu_e__DOT__result) 
                                            << 3U)));
    vlSelf->cpu_top__DOT__mem_in = ((vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                     & (((QData)((IData)(
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                                                          >> 7U)))) 
                                                           << 0x18U) 
                                                          | ((0xff0000U 
                                                              & ((- (IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                                                                >> 6U)))) 
                                                                 << 0x10U)) 
                                                             | ((0xff00U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                                                                >> 5U)))) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                                                                >> 4U)))))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                                                           >> 3U)))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                                                                >> 2U)))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                                                                >> 1U)))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->cpu_top__DOT__mem_rstrb)))))))))))) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & (((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                                               >> 8U) 
                                                              & ((0xfU 
                                                                  == 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->cpu_top__DOT__mem_rstrb)))
                                                                  ? (IData)(
                                                                            (vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                                             >> 0x1fU))
                                                                  : 
                                                                 ((3U 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->cpu_top__DOT__mem_rstrb)))
                                                                   ? (IData)(
                                                                             (vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                                              >> 0xfU))
                                                                   : 
                                                                  ((1U 
                                                                    == 
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->cpu_top__DOT__mem_rstrb))) 
                                                                   & (IData)(
                                                                             (vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                                              >> 7U)))))))))) 
                                       & (((QData)((IData)(
                                                           (((- (IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            ((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                                                             >> 7U))))) 
                                                             << 0x18U) 
                                                            | ((0xff0000U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (~ 
                                                                                ((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                                                                >> 6U))))) 
                                                                   << 0x10U)) 
                                                               | ((0xff00U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                                                                >> 5U))))) 
                                                                      << 8U)) 
                                                                  | (0xffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                                                                >> 4U))))))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (((- (IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             ((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                                                              >> 3U))))) 
                                                              << 0x18U) 
                                                             | ((0xff0000U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                                                                >> 2U))))) 
                                                                    << 0x10U)) 
                                                                | ((0xff00U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                                                                >> 1U))))) 
                                                                       << 8U)) 
                                                                   | (0xffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->cpu_top__DOT__mem_rstrb))))))))))))));
    vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[0U] 
        = (IData)(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                    ? (((QData)((IData)((- (IData)(
                                                   ((1U 
                                                     & ((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3000U 
                                                                  & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel)))) 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_sext))))))
                                                     ? 0U
                                                     : 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->cpu_top__DOT__alu_e__DOT__dword_result 
                                                                >> 0x1fU)))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__alu_e__DOT__dword_result)))
                    : vlSelf->cpu_top__DOT__alu_e__DOT__dword_result));
    vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[1U] 
        = (IData)((((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                     ? (((QData)((IData)((- (IData)(
                                                    ((1U 
                                                      & ((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3000U 
                                                                   & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel)))) 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_sext))))))
                                                      ? 0U
                                                      : 
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->cpu_top__DOT__alu_e__DOT__dword_result 
                                                                 >> 0x1fU)))))))) 
                         << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__alu_e__DOT__dword_result)))
                     : vlSelf->cpu_top__DOT__alu_e__DOT__dword_result) 
                   >> 0x20U));
    vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[2U] 
        = (IData)(vlSelf->cpu_top__DOT__mem_in);
    vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[3U] 
        = (IData)((vlSelf->cpu_top__DOT__mem_in >> 0x20U));
    vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[4U] 
        = (IData)((4ULL + vlSelf->cpu_top__DOT__current_pc));
    vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[5U] 
        = (IData)(((4ULL + vlSelf->cpu_top__DOT__current_pc) 
                   >> 0x20U));
    vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[0U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[0U])));
    vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[1U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[2U])));
    vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[2U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[4U])));
    vlSelf->cpu_top__DOT__wr_data = ((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->cpu_top__DOT__regin_sel))))) 
                                     & vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data
                                     [0U]);
    vlSelf->cpu_top__DOT__wr_data = (vlSelf->cpu_top__DOT__wr_data 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->cpu_top__DOT__regin_sel) 
                                                               >> 1U))))) 
                                        & vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data
                                        [1U]));
    vlSelf->cpu_top__DOT__wr_data = (vlSelf->cpu_top__DOT__wr_data 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->cpu_top__DOT__regin_sel) 
                                                               >> 2U))))) 
                                        & vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data
                                        [2U]));
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
    Vcpu_top___024root___combo__TOP__4(vlSelf);
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
    if (VL_UNLIKELY((vlSelf->I_inst_valid & 0xfeU))) {
        Verilated::overWidthError("I_inst_valid");}
}
#endif  // VL_DEBUG
