// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_top.h for the primary calling header

#include "Vcpu_top___024root.h"
#include "Vcpu_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vcpu_top___024root___ctor_var_reset(Vcpu_top___024root* vlSelf);

Vcpu_top___024root::Vcpu_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcpu_top___024root___ctor_var_reset(this);
}

void Vcpu_top___024root::__Vconfigure(Vcpu_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcpu_top___024root::~Vcpu_top___024root() {
}

void Vcpu_top___024root___settle__TOP__2(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___settle__TOP__2\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp1;
    VlWide<4>/*127:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp8;
    VlWide<3>/*95:0*/ __Vtemp9;
    VlWide<3>/*95:0*/ __Vtemp10;
    // Body
    vlSelf->O_mem_wen = (0x23U == (0x7fU & vlSelf->I_inst));
    vlSelf->cpu_top__DOT__decoder_e__DOT__JALR = (IData)(
                                                         (0x67U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->I_inst)));
    vlSelf->cpu_top__DOT__decoder_e__DOT__immS = ((0xfe0U 
                                                   & (vlSelf->I_inst 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->I_inst 
                                                        >> 7U)));
    vlSelf->cpu_top__DOT__decoder_e__DOT__immB = ((0x1000U 
                                                   & (vlSelf->I_inst 
                                                      >> 0x13U)) 
                                                  | ((0x800U 
                                                      & (vlSelf->I_inst 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->I_inst 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->I_inst 
                                                              >> 7U)))));
    vlSelf->cpu_top__DOT__decoder_e__DOT__immJ = ((0x100000U 
                                                   & (vlSelf->I_inst 
                                                      >> 0xbU)) 
                                                  | ((0xff000U 
                                                      & vlSelf->I_inst) 
                                                     | ((0x800U 
                                                         & (vlSelf->I_inst 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->I_inst 
                                                              >> 0x14U)))));
    vlSelf->cpu_top__DOT__decoder_e__DOT__typeU = (
                                                   (0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->I_inst)) 
                                                   | (0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->I_inst)));
    vlSelf->cpu_top__DOT__decoder_e__DOT__typeR = (
                                                   (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->I_inst)) 
                                                   | (0x3bU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->I_inst)));
    vlSelf->cpu_top__DOT__decoder_e__DOT__typeI = (
                                                   (((0x67U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->I_inst)) 
                                                     | (3U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->I_inst))) 
                                                    | (0x13U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->I_inst))) 
                                                   | (0x1bU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->I_inst)));
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0U] = 0U;
    vlSelf->O_pc = vlSelf->cpu_top__DOT__current_pc;
    vlSelf->cpu_top__DOT__rs2_data = vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
        [(0x1fU & (vlSelf->I_inst >> 0x14U))];
    vlSelf->cpu_top__DOT__rs1_data = vlSelf->cpu_top__DOT__gpr_e__DOT__gpr
        [(0x1fU & (vlSelf->I_inst >> 0xfU))];
    vlSelf->cpu_top__DOT__decoder_e__DOT__add_flag 
        = (((((0x37U == (0x7fU & vlSelf->I_inst)) | 
              (0x17U == (0x7fU & vlSelf->I_inst))) 
             | (0x6fU == (0x7fU & vlSelf->I_inst))) 
            | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__JALR)) 
           | (IData)((0x3023U == (0x707fU & vlSelf->I_inst))));
    vlSelf->cpu_top__DOT__reg_wen = ((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR) 
                                       | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI)) 
                                      | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU)) 
                                     | (0x6fU == (0x7fU 
                                                  & vlSelf->I_inst)));
    vlSelf->cpu_top__DOT__opnum2_sel = ((1U & (- (IData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR)))) 
                                        | (2U & (- (IData)(
                                                           (((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI) 
                                                               | (0x23U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->I_inst))) 
                                                              | (0x63U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->I_inst))) 
                                                             | (0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->I_inst))) 
                                                            | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU))))));
    vlSelf->cpu_top__DOT__opnum1_sel = (((1U & (- (IData)(
                                                          (((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR) 
                                                            | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI)) 
                                                           | (0x23U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->I_inst)))))) 
                                         | (2U & (- (IData)(
                                                            (((0x63U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->I_inst)) 
                                                              | (0x6fU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->I_inst))) 
                                                             | (0x17U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->I_inst))))))) 
                                        | (4U & (- (IData)(
                                                           (0x37U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->I_inst))))));
    vlSelf->O_mem_wr_data = vlSelf->cpu_top__DOT__rs2_data;
    __Vtemp1[2U] = (IData)(((((((- (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI))) 
                                & (((- (QData)((IData)(
                                                       (vlSelf->I_inst 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (vlSelf->I_inst 
                                                                >> 0x14U))))) 
                               | ((- (QData)((IData)(
                                                     (0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->I_inst))))) 
                                  & (((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__immS) 
                                                             >> 0xbU))))) 
                                      << 0xcU) | (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__immS))))) 
                              | ((- (QData)((IData)(
                                                    (0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->I_inst))))) 
                                 & (((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__immB) 
                                                            >> 0xcU))))) 
                                     << 0xdU) | (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__immB))))) 
                             | ((- (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU))) 
                                & (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->I_inst 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (0xfffff000U 
                                                                 & vlSelf->I_inst)))))) 
                            | ((- (QData)((IData)((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->I_inst))))) 
                               & (((- (QData)((IData)(
                                                      (1U 
                                                       & (vlSelf->cpu_top__DOT__decoder_e__DOT__immJ 
                                                          >> 0x14U))))) 
                                   << 0x15U) | (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__immJ))))));
    __Vtemp1[3U] = (IData)((((((((- (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI))) 
                                 & (((- (QData)((IData)(
                                                        (vlSelf->I_inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->I_inst 
                                                                 >> 0x14U))))) 
                                | ((- (QData)((IData)(
                                                      (0x23U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->I_inst))))) 
                                   & (((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__immS) 
                                                              >> 0xbU))))) 
                                       << 0xcU) | (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__immS))))) 
                               | ((- (QData)((IData)(
                                                     (0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->I_inst))))) 
                                  & (((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__immB) 
                                                             >> 0xcU))))) 
                                      << 0xdU) | (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__immB))))) 
                              | ((- (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU))) 
                                 & (((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->I_inst 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->I_inst)))))) 
                             | ((- (QData)((IData)(
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->I_inst))))) 
                                & (((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->cpu_top__DOT__decoder_e__DOT__immJ 
                                                           >> 0x14U))))) 
                                    << 0x15U) | (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__immJ))))) 
                            >> 0x20U));
    vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data[0U] 
        = (IData)(vlSelf->cpu_top__DOT__rs2_data);
    vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data[1U] 
        = (IData)((vlSelf->cpu_top__DOT__rs2_data >> 0x20U));
    vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data[2U] 
        = __Vtemp1[2U];
    vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data[3U] 
        = __Vtemp1[3U];
    vlSelf->cpu_top__DOT__decoder_e__DOT__eq = (vlSelf->cpu_top__DOT__rs1_data 
                                                == vlSelf->cpu_top__DOT__rs2_data);
    vlSelf->cpu_top__DOT__decoder_e__DOT__ltu = (vlSelf->cpu_top__DOT__rs1_data 
                                                 < vlSelf->cpu_top__DOT__rs2_data);
    vlSelf->cpu_top__DOT__decoder_e__DOT__lt = VL_LTS_IQQ(1,64,64, vlSelf->cpu_top__DOT__rs1_data, vlSelf->cpu_top__DOT__rs2_data);
    VL_EXTEND_WQ(128,64, __Vtemp2, vlSelf->cpu_top__DOT__current_pc);
    vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[0U] 
        = (IData)(vlSelf->cpu_top__DOT__rs1_data);
    vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[1U] 
        = (IData)((vlSelf->cpu_top__DOT__rs1_data >> 0x20U));
    vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[2U] 
        = __Vtemp2[0U];
    vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[3U] 
        = __Vtemp2[1U];
    vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[4U] 
        = __Vtemp2[2U];
    vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[5U] 
        = __Vtemp2[3U];
    vlSelf->cpu_top__DOT__regin_sel = ((((IData)(vlSelf->cpu_top__DOT__reg_wen) 
                                         & ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->I_inst)) 
                                            | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__JALR))) 
                                        << 2U) | ((
                                                   ((IData)(vlSelf->cpu_top__DOT__reg_wen) 
                                                    & (3U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->I_inst))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelf->cpu_top__DOT__reg_wen) 
                                                     & (~ 
                                                        (((3U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->I_inst)) 
                                                          | (0x6fU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->I_inst))) 
                                                         | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__JALR))))));
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[1U] = ((1U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->I_inst 
                                                      >> 7U)))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[2U] = ((2U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->I_inst 
                                                      >> 7U)))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[3U] = ((3U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->I_inst 
                                                      >> 7U)))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[4U] = ((4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->I_inst 
                                                      >> 7U)))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[5U] = ((5U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->I_inst 
                                                      >> 7U)))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[6U] = ((6U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->I_inst 
                                                      >> 7U)))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[7U] = ((7U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->I_inst 
                                                      >> 7U)))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[8U] = ((8U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->I_inst 
                                                      >> 7U)))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[9U] = ((9U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->I_inst 
                                                      >> 7U)))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                  : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0xaU] = (
                                                   (0xaU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->I_inst 
                                                        >> 7U)))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                    : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0xbU] = (
                                                   (0xbU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->I_inst 
                                                        >> 7U)))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                    : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0xcU] = (
                                                   (0xcU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->I_inst 
                                                        >> 7U)))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                    : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0xdU] = (
                                                   (0xdU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->I_inst 
                                                        >> 7U)))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                    : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0xeU] = (
                                                   (0xeU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->I_inst 
                                                        >> 7U)))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                    : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0xfU] = (
                                                   (0xfU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->I_inst 
                                                        >> 7U)))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelf->cpu_top__DOT__reg_wen))
                                                    : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x10U] = 
        ((0x10U == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x11U] = 
        ((0x11U == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x12U] = 
        ((0x12U == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x13U] = 
        ((0x13U == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x14U] = 
        ((0x14U == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x15U] = 
        ((0x15U == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x16U] = 
        ((0x16U == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x17U] = 
        ((0x17U == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x18U] = 
        ((0x18U == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x19U] = 
        ((0x19U == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x1aU] = 
        ((0x1aU == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x1bU] = 
        ((0x1bU == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x1cU] = 
        ((0x1cU == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x1dU] = 
        ((0x1dU == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x1eU] = 
        ((0x1eU == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0x1fU] = 
        ((0x1fU == (0x1fU & (vlSelf->I_inst >> 7U)))
          ? (1U & (IData)(vlSelf->cpu_top__DOT__reg_wen))
          : 0U);
    vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[0U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data[0U])));
    vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[1U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data[2U])));
    vlSelf->cpu_top__DOT__decoder_e__DOT__typeB_jr 
        = (((((((IData)((0x63U == (0x707fU & vlSelf->I_inst))) 
                & (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__eq)) 
               | ((IData)((0x1063U == (0x707fU & vlSelf->I_inst))) 
                  & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__eq)))) 
              | ((IData)((0x4063U == (0x707fU & vlSelf->I_inst))) 
                 & (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__lt))) 
             | ((IData)((0x5063U == (0x707fU & vlSelf->I_inst))) 
                & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__lt)))) 
            | ((IData)((0x6063U == (0x707fU & vlSelf->I_inst))) 
               & (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu))) 
           | ((IData)((0x7063U == (0x707fU & vlSelf->I_inst))) 
              & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu))));
    vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[0U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[0U])));
    vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[1U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[2U])));
    vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[2U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data[4U])));
    vlSelf->O_mem_wen = (1U & ((IData)(vlSelf->cpu_top__DOT__regin_sel) 
                               >> 1U));
    vlSelf->cpu_top__DOT__alu_op2 = ((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->cpu_top__DOT__opnum2_sel))))) 
                                     & vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data
                                     [0U]);
    vlSelf->cpu_top__DOT__alu_op2 = (vlSelf->cpu_top__DOT__alu_op2 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->cpu_top__DOT__opnum2_sel) 
                                                               >> 1U))))) 
                                        & vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data
                                        [1U]));
    vlSelf->cpu_top__DOT__dnpc_sel = (((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__JALR) 
                                       << 2U) | (((
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->I_inst)) 
                                                   | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeB_jr)) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (~ 
                                                       (((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__JALR) 
                                                         | (0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->I_inst))) 
                                                        | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeB_jr))))));
    vlSelf->cpu_top__DOT__alu_op1 = ((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->cpu_top__DOT__opnum1_sel))))) 
                                     & vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data
                                     [0U]);
    vlSelf->cpu_top__DOT__alu_op1 = (vlSelf->cpu_top__DOT__alu_op1 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->cpu_top__DOT__opnum1_sel) 
                                                               >> 1U))))) 
                                        & vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data
                                        [1U]));
    vlSelf->cpu_top__DOT__alu_op1 = (vlSelf->cpu_top__DOT__alu_op1 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->cpu_top__DOT__opnum1_sel) 
                                                               >> 2U))))) 
                                        & vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data
                                        [2U]));
    vlSelf->cpu_top__DOT__alu_e__DOT__adder2 = vlSelf->cpu_top__DOT__alu_op2;
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
    vlSelf->cpu_top__DOT__alu_e__DOT__result = (vlSelf->cpu_top__DOT__alu_op1 
                                                + vlSelf->cpu_top__DOT__alu_e__DOT__adder2);
    vlSelf->cpu_top__DOT__alu_e__DOT__shift_op = vlSelf->cpu_top__DOT__alu_op1;
    vlSelf->O_mem_wr_addr = ((IData)(vlSelf->O_mem_wen)
                              ? vlSelf->cpu_top__DOT__alu_e__DOT__result
                              : 0ULL);
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
    vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
        = (vlSelf->cpu_top__DOT__alu_e__DOT__shift_op 
           >> (0x3fU & (IData)(vlSelf->cpu_top__DOT__alu_op2)));
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0xfffffffffffffff8ULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
         | (IData)((IData)(((4U & ((IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                            >> 0x3dU)) 
                                   << 2U)) | ((2U & 
                                               ((IData)(
                                                        (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                         >> 0x3eU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (IData)(
                                                           (vlSelf->cpu_top__DOT__alu_e__DOT__shift_result 
                                                            >> 0x3fU))))))));
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0xffffffffffffffc7ULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
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
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0xfffffffffffffe3fULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
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
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0xfffffffffffff1ffULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
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
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0xffffffffffff8fffULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
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
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0xfffffffffffc7fffULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
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
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0xffffffffffe3ffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
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
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0xffffffffff1fffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
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
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0xfffffffff8ffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
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
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0xffffffffc7ffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
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
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0xfffffffe3fffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
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
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0xfffffff1ffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
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
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0xffffff8fffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
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
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0xfffffc7fffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
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
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0xffffe3ffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
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
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0xffff1fffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
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
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0xfff8ffffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
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
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0xffc7ffffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
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
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0xfe3fffffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
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
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0xf1ffffffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
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
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0x8fffffffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
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
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 
        ((0x7fffffffffffffffULL & vlSelf->cpu_top__DOT__alu_e__DOT__sll_result) 
         | ((QData)((IData)((1U & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)))) 
            << 0x3fU));
    VL_EXTEND_WQ(65,64, __Vtemp8, vlSelf->cpu_top__DOT__alu_op1);
    VL_EXTEND_WQ(65,64, __Vtemp9, vlSelf->cpu_top__DOT__alu_e__DOT__adder2);
    VL_ADD_W(3, __Vtemp10, __Vtemp8, __Vtemp9);
    vlSelf->cpu_top__DOT__alu_out = ((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__add_flag))))) 
                                     & vlSelf->cpu_top__DOT__alu_e__DOT__result);
    vlSelf->cpu_top__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[0U] 
        = (IData)((4ULL + vlSelf->cpu_top__DOT__current_pc));
    vlSelf->cpu_top__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[1U] 
        = (IData)(((4ULL + vlSelf->cpu_top__DOT__current_pc) 
                   >> 0x20U));
    vlSelf->cpu_top__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[2U] 
        = (IData)(vlSelf->cpu_top__DOT__alu_out);
    vlSelf->cpu_top__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[3U] 
        = (IData)((vlSelf->cpu_top__DOT__alu_out >> 0x20U));
    vlSelf->cpu_top__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[4U] 
        = (IData)((0xfffffffffffffffeULL & vlSelf->cpu_top__DOT__alu_out));
    vlSelf->cpu_top__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[5U] 
        = (IData)(((0xfffffffffffffffeULL & vlSelf->cpu_top__DOT__alu_out) 
                   >> 0x20U));
    vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[0U] 
        = (IData)(vlSelf->cpu_top__DOT__alu_out);
    vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[1U] 
        = (IData)((vlSelf->cpu_top__DOT__alu_out >> 0x20U));
    vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[2U] 
        = (IData)(vlSelf->I_mem_rd_data);
    vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[3U] 
        = (IData)((vlSelf->I_mem_rd_data >> 0x20U));
    vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[4U] 
        = (IData)((4ULL + vlSelf->cpu_top__DOT__current_pc));
    vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[5U] 
        = (IData)(((4ULL + vlSelf->cpu_top__DOT__current_pc) 
                   >> 0x20U));
    vlSelf->cpu_top__DOT__nextpc_64bit_3sel__DOT__sel_data[0U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[0U])));
    vlSelf->cpu_top__DOT__nextpc_64bit_3sel__DOT__sel_data[1U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[2U])));
    vlSelf->cpu_top__DOT__nextpc_64bit_3sel__DOT__sel_data[2U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data[4U])));
    vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[0U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[0U])));
    vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[1U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[2U])));
    vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[2U] 
        = (((QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data[4U])));
    vlSelf->cpu_top__DOT__dnpc = ((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->cpu_top__DOT__dnpc_sel))))) 
                                  & vlSelf->cpu_top__DOT__nextpc_64bit_3sel__DOT__sel_data
                                  [0U]);
    vlSelf->cpu_top__DOT__dnpc = (vlSelf->cpu_top__DOT__dnpc 
                                  | ((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->cpu_top__DOT__dnpc_sel) 
                                                            >> 1U))))) 
                                     & vlSelf->cpu_top__DOT__nextpc_64bit_3sel__DOT__sel_data
                                     [1U]));
    vlSelf->cpu_top__DOT__dnpc = (vlSelf->cpu_top__DOT__dnpc 
                                  | ((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->cpu_top__DOT__dnpc_sel) 
                                                            >> 2U))))) 
                                     & vlSelf->cpu_top__DOT__nextpc_64bit_3sel__DOT__sel_data
                                     [2U]));
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

void Vcpu_top___024root___eval_initial(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__I_sys_clk = vlSelf->I_sys_clk;
}

void Vcpu_top___024root___eval_settle(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_settle\n"); );
    // Body
    Vcpu_top___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vcpu_top___024root___final(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___final\n"); );
}

void Vcpu_top___024root___ctor_var_reset(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->I_sys_clk = 0;
    vlSelf->I_rst = 0;
    vlSelf->I_inst = 0;
    vlSelf->O_pc = 0;
    vlSelf->I_mem_rd_data = 0;
    vlSelf->O_mem_rd_en = 0;
    vlSelf->O_mem_wr_data = 0;
    vlSelf->O_mem_wr_addr = 0;
    vlSelf->O_mem_wen = 0;
    vlSelf->cpu_top__DOT__current_pc = 0;
    vlSelf->cpu_top__DOT__dnpc = 0;
    vlSelf->cpu_top__DOT__wr_data = 0;
    vlSelf->cpu_top__DOT__rs1_data = 0;
    vlSelf->cpu_top__DOT__rs2_data = 0;
    vlSelf->cpu_top__DOT__alu_op1 = 0;
    vlSelf->cpu_top__DOT__alu_op2 = 0;
    vlSelf->cpu_top__DOT__alu_out = 0;
    vlSelf->cpu_top__DOT__dnpc_sel = 0;
    vlSelf->cpu_top__DOT__regin_sel = 0;
    vlSelf->cpu_top__DOT__opnum1_sel = 0;
    vlSelf->cpu_top__DOT__opnum2_sel = 0;
    vlSelf->cpu_top__DOT__reg_wen = 0;
    VL_ZERO_RESET_W(192, vlSelf->cpu_top__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data);
    VL_ZERO_RESET_W(192, vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data);
    VL_ZERO_RESET_W(192, vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data);
    VL_ZERO_RESET_W(128, vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->cpu_top__DOT__nextpc_64bit_3sel__DOT__sel_data[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu_top__DOT__gpr_e__DOT__wen[__Vi0] = 0;
    }
    vlSelf->cpu_top__DOT__decoder_e__DOT__immS = 0;
    vlSelf->cpu_top__DOT__decoder_e__DOT__immB = 0;
    vlSelf->cpu_top__DOT__decoder_e__DOT__immJ = 0;
    vlSelf->cpu_top__DOT__decoder_e__DOT__typeI = 0;
    vlSelf->cpu_top__DOT__decoder_e__DOT__typeR = 0;
    vlSelf->cpu_top__DOT__decoder_e__DOT__typeU = 0;
    vlSelf->cpu_top__DOT__decoder_e__DOT__JALR = 0;
    vlSelf->cpu_top__DOT__decoder_e__DOT__typeB_jr = 0;
    vlSelf->cpu_top__DOT__decoder_e__DOT__eq = 0;
    vlSelf->cpu_top__DOT__decoder_e__DOT__lt = 0;
    vlSelf->cpu_top__DOT__decoder_e__DOT__ltu = 0;
    vlSelf->cpu_top__DOT__decoder_e__DOT__add_flag = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[__Vi0] = 0;
    }
    vlSelf->cpu_top__DOT__alu_e__DOT__slt_result = 0;
    vlSelf->cpu_top__DOT__alu_e__DOT__sll_result = 0;
    vlSelf->cpu_top__DOT__alu_e__DOT__adder2 = 0;
    vlSelf->cpu_top__DOT__alu_e__DOT__result = 0;
    vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1 = 0;
    vlSelf->cpu_top__DOT__alu_e__DOT__shift_op = 0;
    vlSelf->cpu_top__DOT__alu_e__DOT__shift_result = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
