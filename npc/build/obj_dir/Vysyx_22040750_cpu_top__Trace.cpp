// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040750_cpu_top__Syms.h"


void Vysyx_22040750_cpu_top___024root__traceChgSub0(Vysyx_22040750_cpu_top___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22040750_cpu_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22040750_cpu_top___024root* const __restrict vlSelf = static_cast<Vysyx_22040750_cpu_top___024root*>(voidSelf);
    Vysyx_22040750_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22040750_cpu_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22040750_cpu_top___024root__traceChgSub0(Vysyx_22040750_cpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp145;
    VlWide<3>/*95:0*/ __Vtemp146;
    VlWide<3>/*95:0*/ __Vtemp147;
    VlWide<3>/*95:0*/ __Vtemp148;
    VlWide<3>/*95:0*/ __Vtemp149;
    VlWide<4>/*127:0*/ __Vtemp151;
    VlWide<4>/*127:0*/ __Vtemp152;
    VlWide<4>/*127:0*/ __Vtemp153;
    VlWide<4>/*127:0*/ __Vtemp154;
    VlWide<4>/*127:0*/ __Vtemp155;
    VlWide<4>/*127:0*/ __Vtemp156;
    VlWide<3>/*95:0*/ __Vtemp158;
    VlWide<3>/*95:0*/ __Vtemp161;
    VlWide<3>/*95:0*/ __Vtemp164;
    VlWide<3>/*95:0*/ __Vtemp167;
    VlWide<3>/*95:0*/ __Vtemp170;
    VlWide<3>/*95:0*/ __Vtemp171;
    VlWide<3>/*95:0*/ __Vtemp172;
    VlWide<3>/*95:0*/ __Vtemp173;
    VlWide<3>/*95:0*/ __Vtemp174;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->ysyx_22040750_cpu_top__DOT__current_pc),64);
            tracep->chgQData(oldp+2,(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc),64);
            tracep->chgQData(oldp+4,((4ULL + vlSelf->ysyx_22040750_cpu_top__DOT__current_pc)),64);
            tracep->chgQData(oldp+6,(vlSelf->ysyx_22040750_cpu_top__DOT__imm),64);
            tracep->chgQData(oldp+8,(vlSelf->ysyx_22040750_cpu_top__DOT__wr_data),64);
            tracep->chgQData(oldp+10,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
                                      [(0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                 >> 0xfU))]),64);
            tracep->chgQData(oldp+12,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr
                                      [(0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                 >> 0x14U))]),64);
            tracep->chgQData(oldp+14,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1),64);
            tracep->chgQData(oldp+16,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2),64);
            tracep->chgQData(oldp+18,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_out),64);
            tracep->chgQData(oldp+20,(vlSelf->ysyx_22040750_cpu_top__DOT__mem_in),64);
            tracep->chgQData(oldp+22,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rs2),64);
            tracep->chgQData(oldp+24,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__result),64);
            tracep->chgCData(oldp+26,((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+27,((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+28,((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                >> 7U))),5);
            tracep->chgCData(oldp+29,(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel),4);
            tracep->chgCData(oldp+30,(vlSelf->ysyx_22040750_cpu_top__DOT__regin_sel),3);
            tracep->chgCData(oldp+31,((((1U & (- (IData)(
                                                         (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR) 
                                                           | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI)) 
                                                          | (0x23U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))))) 
                                        | (2U & (- (IData)(
                                                           (((0x63U 
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
                                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))))) 
                                       | (4U & (- (IData)(
                                                          (0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))))),3);
            tracep->chgCData(oldp+32,(((1U & (- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR)))) 
                                       | (2U & (- (IData)(
                                                          (((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI) 
                                                              | (0x23U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                                             | (0x63U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                                            | (0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                                           | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU))))))),2);
            tracep->chgSData(oldp+33,((((((((((((((
                                                   (1U 
                                                    & (- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__add_flag)))) 
                                                   | (2U 
                                                      & (- (IData)(
                                                                   ((IData)(
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
                                                  | (4U 
                                                     & (- (IData)(
                                                                  ((IData)(
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
                                                 | (8U 
                                                    & (- (IData)(
                                                                 ((IData)(
                                                                          (0x3013U 
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
                                                | (0x10U 
                                                   & (- (IData)(
                                                                ((IData)(
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
                                               | (0x20U 
                                                  & (- (IData)(
                                                               ((IData)(
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
                                              | (0x40U 
                                                 & (- (IData)(
                                                              ((IData)(
                                                                       (0x7013U 
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
                                             | (0x80U 
                                                & (- (IData)(
                                                             ((((IData)(
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
                                            | (0x100U 
                                               & (- (IData)(
                                                            ((((IData)(
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
                                           | (0x200U 
                                              & (- (IData)(
                                                           ((((IData)(
                                                                      ((0x5013U 
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
                                                            | (IData)(
                                                                      ((0x503bU 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                                       & (0x20U 
                                                                          == 
                                                                          (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                           >> 0x19U))))))))) 
                                          | (0x400U 
                                             & (- (IData)(
                                                          ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL) 
                                                           | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW)))))) 
                                         | (0x800U 
                                            & (- (IData)(
                                                         (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH) 
                                                           | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                                          | (IData)(
                                                                    ((0x3033U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                                     & (1U 
                                                                        == 
                                                                        (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                         >> 0x19U))))))))) 
                                        | (0x1000U 
                                           & (- (IData)(
                                                        ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV) 
                                                           | (IData)(
                                                                     ((0x5033U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                                      & (1U 
                                                                         == 
                                                                         (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                          >> 0x19U))))) 
                                                          | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIVW)) 
                                                         | (IData)(
                                                                   ((0x503bU 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                                    & (1U 
                                                                       == 
                                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                        >> 0x19U))))))))) 
                                       | (0x2000U & 
                                          (- (IData)(
                                                     ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM) 
                                                        | (IData)(
                                                                  ((0x7033U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                                   & (1U 
                                                                      == 
                                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                       >> 0x19U))))) 
                                                       | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REMW)) 
                                                      | (IData)(
                                                                ((0x703bU 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                                 & (1U 
                                                                    == 
                                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                                     >> 0x19U)))))))))),15);
            tracep->chgCData(oldp+34,((0xffU & ((((- (IData)((IData)(
                                                                     (0x3023U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))) 
                                                  | (0xfU 
                                                     & (- (IData)((IData)(
                                                                          (0x2023U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))))) 
                                                 | (3U 
                                                    & (- (IData)((IData)(
                                                                         (0x1023U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))))) 
                                                | (1U 
                                                   & (- (IData)((IData)(
                                                                        (0x23U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))))))),8);
            tracep->chgSData(oldp+35,(vlSelf->ysyx_22040750_cpu_top__DOT__mem_rstrb),9);
            tracep->chgBit(oldp+36,(vlSelf->ysyx_22040750_cpu_top__DOT__reg_wen));
            tracep->chgBit(oldp+37,((0x23U == (0x7fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+38,(((0x1bU == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                     | (0x3bU == (0x7fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgCData(oldp+39,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op_sext),2);
            tracep->chgQData(oldp+40,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc),64);
            tracep->chgIData(oldp+42,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst),32);
            tracep->chgBit(oldp+43,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid));
            tracep->chgBit(oldp+44,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_stall));
            tracep->chgBit(oldp+45,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_bubble));
            tracep->chgBit(oldp+46,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_reg_e__DOT__input_valid));
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_imm),64);
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_pc),64);
            tracep->chgQData(oldp+51,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs1),64);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs2),64);
            tracep->chgCData(oldp+55,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rd_addr),5);
            tracep->chgCData(oldp+56,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_wstrb),8);
            tracep->chgSData(oldp+57,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rstrb),9);
            tracep->chgCData(oldp+58,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel),3);
            tracep->chgCData(oldp+59,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op1_sel),3);
            tracep->chgCData(oldp+60,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op2_sel),2);
            tracep->chgCData(oldp+61,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_sext),2);
            tracep->chgSData(oldp+62,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel),15);
            tracep->chgBit(oldp+63,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_wen));
            tracep->chgBit(oldp+64,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_mem_wen));
            tracep->chgBit(oldp+65,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask));
            tracep->chgBit(oldp+66,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__input_valid));
            tracep->chgCData(oldp+67,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall),2);
            tracep->chgIData(oldp+68,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_inst),32);
            tracep->chgBit(oldp+69,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_bubble));
            tracep->chgSData(oldp+70,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rstrb),9);
            tracep->chgCData(oldp+71,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_wstrb),8);
            tracep->chgQData(oldp+72,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_alu_out),64);
            tracep->chgQData(oldp+74,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr),64);
            tracep->chgBit(oldp+76,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_wen));
            tracep->chgQData(oldp+77,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_pc),64);
            tracep->chgBit(oldp+79,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen));
            tracep->chgCData(oldp+80,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr),5);
            tracep->chgCData(oldp+81,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel),3);
            tracep->chgCData(oldp+82,((7U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr))),3);
            tracep->chgCData(oldp+83,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall),2);
            tracep->chgIData(oldp+84,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_inst),32);
            tracep->chgBit(oldp+85,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_bubble));
            tracep->chgBit(oldp+86,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid));
            tracep->chgQData(oldp+87,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_pc),64);
            tracep->chgBit(oldp+89,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid));
            tracep->chgQData(oldp+90,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_data),64);
            tracep->chgSData(oldp+92,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb),9);
            tracep->chgQData(oldp+93,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_alu_out),64);
            tracep->chgBit(oldp+95,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_wen));
            tracep->chgCData(oldp+96,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr),5);
            tracep->chgCData(oldp+97,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_regin_sel),3);
            tracep->chgCData(oldp+98,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_shamt),3);
            tracep->chgBit(oldp+99,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin));
            tracep->chgIData(oldp+100,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_inst),32);
            tracep->chgBit(oldp+101,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_bubble));
            tracep->chgCData(oldp+102,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_stall),2);
            tracep->chgCData(oldp+103,(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en),2);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data),64);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_22040750_cpu_top__DOT__rs2_forward_data),64);
            tracep->chgQData(oldp+108,(((8U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))
                                         ? vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data
                                         : vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc)),64);
            tracep->chgQData(oldp+110,((vlSelf->ysyx_22040750_cpu_top__DOT__imm 
                                        + ((8U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))
                                            ? vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data
                                            : vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc))),64);
            tracep->chgQData(oldp+112,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__dnpc),64);
            tracep->chgBit(oldp+114,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel)))));
            tracep->chgWData(oldp+115,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel_data),128);
            tracep->chgCData(oldp+119,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel),2);
            tracep->chgQData(oldp+120,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_2sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+122,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_2sel__DOT__sel_data[1]),64);
            tracep->chgBit(oldp+124,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_valid));
            tracep->chgBit(oldp+125,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_en));
            tracep->chgIData(oldp+126,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__inst_cache),32);
            tracep->chgBit(oldp+127,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__cache_valid));
            tracep->chgBit(oldp+128,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_stall)))));
            tracep->chgBit(oldp+129,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+130,((0U != (0xfU & 
                                             ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                              >> 0xaU)))));
            tracep->chgBit(oldp+131,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel) 
                                            >> 1U))));
            tracep->chgCData(oldp+132,(((0xfffffffeU 
                                         & ((((0x1fU 
                                               & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0xfU)) 
                                              == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rd_addr)) 
                                             << 1U) 
                                            & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))) 
                                        | (((0x1fU 
                                             & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rd_addr)) 
                                           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en)))),2);
            tracep->chgCData(oldp+133,(((0xfffffffeU 
                                         & ((((0x1fU 
                                               & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0xfU)) 
                                              == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr)) 
                                             << 1U) 
                                            & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))) 
                                        | (((0x1fU 
                                             & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr)) 
                                           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en)))),2);
            tracep->chgCData(oldp+134,(((0xfffffffeU 
                                         & ((((0x1fU 
                                               & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0xfU)) 
                                              == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr)) 
                                             << 1U) 
                                            & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en))) 
                                        | (((0x1fU 
                                             & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr)) 
                                           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en)))),2);
            tracep->chgBit(oldp+135,((((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall)) 
                                       & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel) 
                                          >> 1U)) | 
                                      ((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall)) 
                                       & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel) 
                                          >> 1U)))));
            tracep->chgBit(oldp+136,(((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall)) 
                                      & (0U != (0xfU 
                                                & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+137,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__forward_unit_e__I_WB_reg_wen));
            tracep->chgCData(oldp+138,((vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+139,((0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)),7);
            tracep->chgCData(oldp+140,((7U & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+141,((vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+142,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immS),12);
            tracep->chgSData(oldp+143,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immB),13);
            tracep->chgIData(oldp+144,((0xfffff000U 
                                        & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)),32);
            tracep->chgIData(oldp+145,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immJ),21);
            tracep->chgBit(oldp+146,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI));
            tracep->chgBit(oldp+147,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR));
            tracep->chgBit(oldp+148,((0x63U == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+149,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU));
            tracep->chgBit(oldp+150,((0x6fU == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+151,((0x37U == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+152,((0x17U == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+153,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR));
            tracep->chgBit(oldp+154,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LD));
            tracep->chgBit(oldp+155,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LW));
            tracep->chgBit(oldp+156,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LWU));
            tracep->chgBit(oldp+157,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LH));
            tracep->chgBit(oldp+158,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LHU));
            tracep->chgBit(oldp+159,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LB));
            tracep->chgBit(oldp+160,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+161,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+162,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+163,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+164,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+165,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+166,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+167,((IData)(((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+168,((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+169,((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x10U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+170,((IData)((0x1bU 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+171,((IData)(((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+172,((IData)(((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+173,((IData)(((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+174,((IData)(((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+175,((IData)(((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+176,((IData)(((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+177,((IData)(((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+178,((IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+179,((IData)(((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+180,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+181,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+182,((IData)(((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+183,((IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+184,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL));
            tracep->chgBit(oldp+185,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH));
            tracep->chgBit(oldp+186,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU));
            tracep->chgBit(oldp+187,((IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+188,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV));
            tracep->chgBit(oldp+189,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+190,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM));
            tracep->chgBit(oldp+191,((IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+192,((IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+193,((IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+194,((IData)(((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+195,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+196,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+197,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW));
            tracep->chgBit(oldp+198,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIVW));
            tracep->chgBit(oldp+199,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+200,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REMW));
            tracep->chgBit(oldp+201,((IData)(((0x703bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+202,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+203,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+204,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+205,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+206,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+207,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+208,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+209,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+210,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+211,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+212,((0x73U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
            tracep->chgBit(oldp+213,((0x100073U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
            tracep->chgBit(oldp+214,((3U == (0x7fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+215,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeB_jr));
            tracep->chgBit(oldp+216,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__eq));
            tracep->chgBit(oldp+217,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__eq)))));
            tracep->chgBit(oldp+218,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__lt));
            tracep->chgBit(oldp+219,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__lt)))));
            tracep->chgBit(oldp+220,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__ltu));
            tracep->chgBit(oldp+221,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__ltu)))));
            tracep->chgBit(oldp+222,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__add_flag));
            tracep->chgBit(oldp+223,(((IData)(((0x33U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                               & (0x20U 
                                                  == 
                                                  (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                   >> 0x19U)))) 
                                      | (IData)(((0x3bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                 & (0x20U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+224,(((IData)((0x2013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                      | (IData)(((0x2033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+225,(((IData)((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                      | (IData)(((0x3033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+226,(((IData)((0x4013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                      | (IData)(((0x4033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+227,(((IData)((0x6013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                      | (IData)(((0x6033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+228,(((IData)((0x7013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                      | (IData)(((0x7033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+229,(((((IData)(((0x1013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x1aU)))) 
                                        | (IData)((
                                                   (0x1033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                   & (0U 
                                                      == 
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                       >> 0x19U))))) 
                                       | (IData)(((0x101bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                  & (0U 
                                                     == 
                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                      >> 0x19U))))) 
                                      | (IData)(((0x103bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+230,(((((IData)(((0x5013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x1aU)))) 
                                        | (IData)((
                                                   (0x5033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                   & (0U 
                                                      == 
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                       >> 0x19U))))) 
                                       | (IData)(((0x501bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                  & (0U 
                                                     == 
                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                      >> 0x19U))))) 
                                      | (IData)(((0x503bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+231,(((((IData)(((0x5013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                 & (0x10U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x1aU)))) 
                                        | (IData)((
                                                   (0x5033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                   & (0x20U 
                                                      == 
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                       >> 0x19U))))) 
                                       | (IData)(((0x501bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                  & (0x20U 
                                                     == 
                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                      >> 0x19U))))) 
                                      | (IData)(((0x503bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                 & (0x20U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+232,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL) 
                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW))));
            tracep->chgBit(oldp+233,((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH) 
                                       | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                      | (IData)(((0x3033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                 & (1U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+234,(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV) 
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
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+235,(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM) 
                                        | (IData)((
                                                   (0x7033U 
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
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+236,((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR) 
                                       | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI)) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+237,((((0x63U == (0x7fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+238,((((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI) 
                                         | (0x23U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                        | (0x63U == 
                                           (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU))));
            tracep->chgWData(oldp+239,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+245,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+247,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+249,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgWData(oldp+251,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data),128);
            tracep->chgQData(oldp+255,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+257,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[1]),64);
            tracep->chgBit(oldp+259,((1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))));
            tracep->chgBit(oldp+260,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+261,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+262,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+263,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 4U))));
            tracep->chgBit(oldp+264,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 5U))));
            tracep->chgBit(oldp+265,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 6U))));
            tracep->chgBit(oldp+266,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 7U))));
            tracep->chgBit(oldp+267,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 8U))));
            tracep->chgBit(oldp+268,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 9U))));
            tracep->chgBit(oldp+269,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+270,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+271,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+272,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xdU))));
            tracep->chgQData(oldp+273,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp145, vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp146, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp147, __Vtemp145, __Vtemp146);
            VL_EXTEND_WQ(65,64, __Vtemp148, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__cin);
            VL_ADD_W(3, __Vtemp149, __Vtemp147, __Vtemp148);
            tracep->chgQData(oldp+275,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp149[2U])))))),64);
            tracep->chgQData(oldp+277,((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                        ^ vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+279,((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                        | vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+281,((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                        & vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+283,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
                                                               >> 0x20U))))
                                         : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result)),64);
            tracep->chgQData(oldp+285,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result),64);
            tracep->chgQData(oldp+287,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                                                 ? (IData)(
                                                                           (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                                            >> 0x1fU))
                                                                 : (IData)(
                                                                           (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                                            >> 0x3fU))))))) 
                                         & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                             ? (~ (0xffffffffULL 
                                                   >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shamt)))
                                             : (~ (0xffffffffffffffffULL 
                                                   >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shamt))))) 
                                        | vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result)),64);
            VL_EXTENDS_WW(128,65, __Vtemp151, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext);
            VL_EXTENDS_WW(128,65, __Vtemp152, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext);
            VL_MULS_WWW(128,128,128, __Vtemp153, __Vtemp151, __Vtemp152);
            tracep->chgQData(oldp+289,((((QData)((IData)(
                                                         __Vtemp153[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp153[0U])))),64);
            VL_EXTENDS_WW(128,65, __Vtemp154, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext);
            VL_EXTENDS_WW(128,65, __Vtemp155, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext);
            VL_MULS_WWW(128,128,128, __Vtemp156, __Vtemp154, __Vtemp155);
            tracep->chgQData(oldp+291,((((QData)((IData)(
                                                         __Vtemp156[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp156[2U])))),64);
            VL_DIVS_WWW(65, __Vtemp158, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext);
            tracep->chgQData(oldp+293,((((QData)((IData)(
                                                         __Vtemp158[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp158[0U])))),64);
            VL_MODDIVS_WWW(65, __Vtemp161, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext);
            tracep->chgQData(oldp+295,((((QData)((IData)(
                                                         __Vtemp161[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp161[0U])))),64);
            tracep->chgWData(oldp+297,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext),65);
            tracep->chgWData(oldp+300,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext),65);
            tracep->chgBit(oldp+303,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                             ? (IData)(
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+304,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                             ? (IData)(
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+305,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__sext1));
            tracep->chgBit(oldp+306,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__sext2));
            VL_DIVS_WWW(65, __Vtemp164, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext);
            tracep->chgBit(oldp+307,((1U & __Vtemp164[2U])));
            VL_MODDIVS_WWW(65, __Vtemp167, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext);
            tracep->chgBit(oldp+308,((1U & __Vtemp167[2U])));
            tracep->chgQData(oldp+309,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__adder2),64);
            tracep->chgQData(oldp+311,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__cin),64);
            VL_EXTEND_WQ(65,64, __Vtemp170, vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp171, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp172, __Vtemp170, __Vtemp171);
            VL_EXTEND_WQ(65,64, __Vtemp173, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__cin);
            VL_ADD_W(3, __Vtemp174, __Vtemp172, __Vtemp173);
            tracep->chgBit(oldp+313,((1U & __Vtemp174[2U])));
            tracep->chgQData(oldp+314,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1),64);
            tracep->chgQData(oldp+316,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op),64);
            tracep->chgCData(oldp+318,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shamt),6);
            tracep->chgQData(oldp+319,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                         ? (~ (0xffffffffULL 
                                               >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shamt)))
                                         : (~ (0xffffffffffffffffULL 
                                               >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shamt))))),64);
            tracep->chgIData(oldp+321,(((0x80U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))
                                         ? (IData)(
                                                   (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op))),32);
            tracep->chgQData(oldp+322,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                         ? (QData)((IData)(
                                                           ((0x80U 
                                                             & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))
                                                             ? (IData)(
                                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op 
                                                                        >> 0x20U))
                                                             : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op))))
                                         : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op)),64);
            tracep->chgQData(oldp+324,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
                                                           >> 0x20U))))),64);
            tracep->chgQData(oldp+326,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result),64);
            tracep->chgQData(oldp+328,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__dword_result),64);
            tracep->chgQData(oldp+330,((((QData)((IData)(
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
                                                                                (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__dword_result 
                                                                                >> 0x1fU)))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__dword_result)))),64);
            tracep->chgBit(oldp+332,(((1U & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x3000U 
                                                       & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel)))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_sext))))))
                                       ? 0U : (1U & (IData)(
                                                            (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__dword_result 
                                                             >> 0x1fU))))));
            tracep->chgBit(oldp+333,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__mem_rd_en));
            tracep->chgBit(oldp+334,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                            >> 8U))));
            tracep->chgBit(oldp+335,((1U & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                             >> 8U) 
                                            & ((0xfU 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb)))
                                                ? (IData)(
                                                          (vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                           >> 0x1fU))
                                                : (
                                                   (3U 
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
                                                               >> 7U)))))))));
            tracep->chgCData(oldp+336,((0xffU & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb)))),8);
            tracep->chgQData(oldp+337,(vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data),64);
            tracep->chgWData(oldp+339,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+345,(vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+347,(vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+349,(vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgBit(oldp+351,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen));
            tracep->chgQData(oldp+352,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0]),64);
            tracep->chgQData(oldp+354,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[1]),64);
            tracep->chgQData(oldp+356,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[2]),64);
            tracep->chgQData(oldp+358,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[3]),64);
            tracep->chgQData(oldp+360,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[4]),64);
            tracep->chgQData(oldp+362,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[5]),64);
            tracep->chgQData(oldp+364,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[6]),64);
            tracep->chgQData(oldp+366,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[7]),64);
            tracep->chgQData(oldp+368,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[8]),64);
            tracep->chgQData(oldp+370,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[9]),64);
            tracep->chgQData(oldp+372,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[10]),64);
            tracep->chgQData(oldp+374,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[11]),64);
            tracep->chgQData(oldp+376,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[12]),64);
            tracep->chgQData(oldp+378,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[13]),64);
            tracep->chgQData(oldp+380,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[14]),64);
            tracep->chgQData(oldp+382,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[15]),64);
            tracep->chgQData(oldp+384,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[16]),64);
            tracep->chgQData(oldp+386,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[17]),64);
            tracep->chgQData(oldp+388,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[18]),64);
            tracep->chgQData(oldp+390,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[19]),64);
            tracep->chgQData(oldp+392,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[20]),64);
            tracep->chgQData(oldp+394,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[21]),64);
            tracep->chgQData(oldp+396,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[22]),64);
            tracep->chgQData(oldp+398,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[23]),64);
            tracep->chgQData(oldp+400,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[24]),64);
            tracep->chgQData(oldp+402,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[25]),64);
            tracep->chgQData(oldp+404,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[26]),64);
            tracep->chgQData(oldp+406,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[27]),64);
            tracep->chgQData(oldp+408,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[28]),64);
            tracep->chgQData(oldp+410,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[29]),64);
            tracep->chgQData(oldp+412,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[30]),64);
            tracep->chgQData(oldp+414,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[31]),64);
            tracep->chgBit(oldp+416,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0]));
            tracep->chgBit(oldp+417,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[1]));
            tracep->chgBit(oldp+418,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[2]));
            tracep->chgBit(oldp+419,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[3]));
            tracep->chgBit(oldp+420,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[4]));
            tracep->chgBit(oldp+421,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[5]));
            tracep->chgBit(oldp+422,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[6]));
            tracep->chgBit(oldp+423,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[7]));
            tracep->chgBit(oldp+424,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[8]));
            tracep->chgBit(oldp+425,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[9]));
            tracep->chgBit(oldp+426,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[10]));
            tracep->chgBit(oldp+427,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[11]));
            tracep->chgBit(oldp+428,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[12]));
            tracep->chgBit(oldp+429,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[13]));
            tracep->chgBit(oldp+430,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[14]));
            tracep->chgBit(oldp+431,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[15]));
            tracep->chgBit(oldp+432,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[16]));
            tracep->chgBit(oldp+433,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[17]));
            tracep->chgBit(oldp+434,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[18]));
            tracep->chgBit(oldp+435,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[19]));
            tracep->chgBit(oldp+436,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[20]));
            tracep->chgBit(oldp+437,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[21]));
            tracep->chgBit(oldp+438,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[22]));
            tracep->chgBit(oldp+439,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[23]));
            tracep->chgBit(oldp+440,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[24]));
            tracep->chgBit(oldp+441,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[25]));
            tracep->chgBit(oldp+442,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[26]));
            tracep->chgBit(oldp+443,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[27]));
            tracep->chgBit(oldp+444,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[28]));
            tracep->chgBit(oldp+445,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[29]));
            tracep->chgBit(oldp+446,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[30]));
            tracep->chgBit(oldp+447,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[31]));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+448,(vlSelf->ysyx_22040750_cpu_top__DOT__current_inst),32);
            tracep->chgBit(oldp+449,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_valid));
            tracep->chgBit(oldp+450,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin));
            tracep->chgBit(oldp+451,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin));
            tracep->chgBit(oldp+452,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid));
            tracep->chgBit(oldp+453,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin));
            tracep->chgBit(oldp+454,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_ready_go));
            tracep->chgBit(oldp+455,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__output_valid));
        }
        tracep->chgBit(oldp+456,(vlSelf->I_sys_clk));
        tracep->chgBit(oldp+457,(vlSelf->I_rst));
        tracep->chgIData(oldp+458,(vlSelf->I_inst),32);
        tracep->chgBit(oldp+459,(vlSelf->I_inst_valid));
        tracep->chgBit(oldp+460,(vlSelf->I_inst_addr_ready));
        tracep->chgQData(oldp+461,(vlSelf->O_pc),64);
        tracep->chgBit(oldp+463,(vlSelf->O_pc_valid));
        tracep->chgQData(oldp+464,(vlSelf->O_mem_addr),64);
        tracep->chgBit(oldp+466,(vlSelf->O_mem_rd_en));
        tracep->chgBit(oldp+467,(vlSelf->O_mem_wen));
        tracep->chgQData(oldp+468,(vlSelf->I_mem_rd_data),64);
        tracep->chgBit(oldp+470,(vlSelf->I_mem_rd_data_valid));
        tracep->chgQData(oldp+471,(vlSelf->O_mem_wr_data),64);
        tracep->chgCData(oldp+473,(vlSelf->O_mem_wr_strb),8);
        tracep->chgBit(oldp+474,((1U & ((~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_valid)) 
                                        | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_ready_go) 
                                           & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin))))));
    }
}

void Vysyx_22040750_cpu_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22040750_cpu_top___024root* const __restrict vlSelf = static_cast<Vysyx_22040750_cpu_top___024root*>(voidSelf);
    Vysyx_22040750_cpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
