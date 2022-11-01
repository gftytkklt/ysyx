// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_top__Syms.h"


void Vcpu_top___024root__traceChgSub0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep);

void Vcpu_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vcpu_top___024root* const __restrict vlSelf = static_cast<Vcpu_top___024root*>(voidSelf);
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vcpu_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vcpu_top___024root__traceChgSub0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp142;
    VlWide<3>/*95:0*/ __Vtemp143;
    VlWide<3>/*95:0*/ __Vtemp144;
    VlWide<3>/*95:0*/ __Vtemp145;
    VlWide<3>/*95:0*/ __Vtemp146;
    VlWide<4>/*127:0*/ __Vtemp148;
    VlWide<4>/*127:0*/ __Vtemp149;
    VlWide<4>/*127:0*/ __Vtemp150;
    VlWide<4>/*127:0*/ __Vtemp151;
    VlWide<4>/*127:0*/ __Vtemp152;
    VlWide<4>/*127:0*/ __Vtemp153;
    VlWide<3>/*95:0*/ __Vtemp155;
    VlWide<3>/*95:0*/ __Vtemp158;
    VlWide<3>/*95:0*/ __Vtemp161;
    VlWide<3>/*95:0*/ __Vtemp164;
    VlWide<3>/*95:0*/ __Vtemp167;
    VlWide<3>/*95:0*/ __Vtemp168;
    VlWide<3>/*95:0*/ __Vtemp169;
    VlWide<3>/*95:0*/ __Vtemp170;
    VlWide<3>/*95:0*/ __Vtemp171;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->cpu_top__DOT__current_pc),64);
            tracep->chgQData(oldp+2,(vlSelf->cpu_top__DOT__dnpc),64);
            tracep->chgQData(oldp+4,((4ULL + vlSelf->cpu_top__DOT__current_pc)),64);
            tracep->chgQData(oldp+6,(vlSelf->cpu_top__DOT__imm),64);
            tracep->chgQData(oldp+8,(vlSelf->cpu_top__DOT__wr_data),64);
            tracep->chgQData(oldp+10,(vlSelf->cpu_top__DOT__rs1_data),64);
            tracep->chgQData(oldp+12,(vlSelf->cpu_top__DOT__rs2_data),64);
            tracep->chgQData(oldp+14,(vlSelf->cpu_top__DOT__alu_op1),64);
            tracep->chgQData(oldp+16,(vlSelf->cpu_top__DOT__alu_op2),64);
            tracep->chgQData(oldp+18,(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                        ? (((QData)((IData)(
                                                            (- (IData)(
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
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->cpu_top__DOT__alu_e__DOT__dword_result)))
                                        : vlSelf->cpu_top__DOT__alu_e__DOT__dword_result)),64);
            tracep->chgQData(oldp+20,(vlSelf->cpu_top__DOT__mem_in),64);
            tracep->chgQData(oldp+22,(vlSelf->cpu_top__DOT__EX_MEM_rs2),64);
            tracep->chgQData(oldp+24,(vlSelf->cpu_top__DOT__alu_e__DOT__result),64);
            tracep->chgCData(oldp+26,((0x1fU & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+27,((0x1fU & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+28,((0x1fU & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                >> 7U))),5);
            tracep->chgCData(oldp+29,(vlSelf->cpu_top__DOT__dnpc_sel),4);
            tracep->chgCData(oldp+30,(vlSelf->cpu_top__DOT__regin_sel),3);
            tracep->chgCData(oldp+31,((((1U & (- (IData)(
                                                         (((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR) 
                                                           | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI)) 
                                                          | (0x23U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->cpu_top__DOT__IF_ID_inst)))))) 
                                        | (2U & (- (IData)(
                                                           (((0x63U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                             | (0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                                            | (0x17U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->cpu_top__DOT__IF_ID_inst))))))) 
                                       | (4U & (- (IData)(
                                                          (0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->cpu_top__DOT__IF_ID_inst))))))),3);
            tracep->chgCData(oldp+32,(((1U & (- (IData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR)))) 
                                       | (2U & (- (IData)(
                                                          (((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI) 
                                                              | (0x23U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                                             | (0x63U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                                            | (0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                                           | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU))))))),2);
            tracep->chgSData(oldp+33,((((((((((((((
                                                   (1U 
                                                    & (- (IData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__add_flag)))) 
                                                   | (2U 
                                                      & (- (IData)(
                                                                   ((IData)(
                                                                            ((0x33U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                             & (0x20U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                                >> 0x19U)))) 
                                                                    | (IData)(
                                                                              ((0x3bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                               & (0x20U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                                >> 0x19U))))))))) 
                                                  | (4U 
                                                     & (- (IData)(
                                                                  ((IData)(
                                                                           (0x2013U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                                                   | (IData)(
                                                                             ((0x2033U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                              & (0U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                                >> 0x19U))))))))) 
                                                 | (8U 
                                                    & (- (IData)(
                                                                 ((IData)(
                                                                          (0x3013U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                                                  | (IData)(
                                                                            ((0x3033U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                             & (0U 
                                                                                == 
                                                                                (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                                >> 0x19U))))))))) 
                                                | (0x10U 
                                                   & (- (IData)(
                                                                ((IData)(
                                                                         (0x4013U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                                                 | (IData)(
                                                                           ((0x4033U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                            & (0U 
                                                                               == 
                                                                               (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                                >> 0x19U))))))))) 
                                               | (0x20U 
                                                  & (- (IData)(
                                                               ((IData)(
                                                                        (0x6013U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                                                | (IData)(
                                                                          ((0x6033U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                           & (0U 
                                                                              == 
                                                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                               >> 0x19U))))))))) 
                                              | (0x40U 
                                                 & (- (IData)(
                                                              ((IData)(
                                                                       (0x7013U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                                               | (IData)(
                                                                         ((0x7033U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                          & (0U 
                                                                             == 
                                                                             (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                              >> 0x19U))))))))) 
                                             | (0x80U 
                                                & (- (IData)(
                                                             ((((IData)(
                                                                        ((0x1013U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                         & (0U 
                                                                            == 
                                                                            (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                             >> 0x1aU)))) 
                                                                | (IData)(
                                                                          ((0x1033U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                           & (0U 
                                                                              == 
                                                                              (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                               >> 0x19U))))) 
                                                               | (IData)(
                                                                         ((0x101bU 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                          & (0U 
                                                                             == 
                                                                             (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                              >> 0x19U))))) 
                                                              | (IData)(
                                                                        ((0x103bU 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                         & (0U 
                                                                            == 
                                                                            (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                             >> 0x19U))))))))) 
                                            | (0x100U 
                                               & (- (IData)(
                                                            ((((IData)(
                                                                       ((0x5013U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                        & (0U 
                                                                           == 
                                                                           (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                            >> 0x1aU)))) 
                                                               | (IData)(
                                                                         ((0x5033U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                          & (0U 
                                                                             == 
                                                                             (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                              >> 0x19U))))) 
                                                              | (IData)(
                                                                        ((0x501bU 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                         & (0U 
                                                                            == 
                                                                            (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                             >> 0x19U))))) 
                                                             | (IData)(
                                                                       ((0x503bU 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                        & (0U 
                                                                           == 
                                                                           (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                            >> 0x19U))))))))) 
                                           | (0x200U 
                                              & (- (IData)(
                                                           ((((IData)(
                                                                      ((0x5013U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                       & (0x10U 
                                                                          == 
                                                                          (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                           >> 0x1aU)))) 
                                                              | (IData)(
                                                                        ((0x5033U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                         & (0x20U 
                                                                            == 
                                                                            (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                             >> 0x19U))))) 
                                                             | (IData)(
                                                                       ((0x501bU 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                        & (0x20U 
                                                                           == 
                                                                           (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                            >> 0x19U))))) 
                                                            | (IData)(
                                                                      ((0x503bU 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                       & (0x20U 
                                                                          == 
                                                                          (vlSelf->cpu_top__DOT__IF_ID_inst 
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
                                                                       & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                     & (1U 
                                                                        == 
                                                                        (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                         >> 0x19U))))))))) 
                                        | (0x1000U 
                                           & (- (IData)(
                                                        ((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIV) 
                                                           | (IData)(
                                                                     ((0x5033U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                      & (1U 
                                                                         == 
                                                                         (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                          >> 0x19U))))) 
                                                          | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIVW)) 
                                                         | (IData)(
                                                                   ((0x503bU 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                    & (1U 
                                                                       == 
                                                                       (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                        >> 0x19U))))))))) 
                                       | (0x2000U & 
                                          (- (IData)(
                                                     ((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REM) 
                                                        | (IData)(
                                                                  ((0x7033U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                   & (1U 
                                                                      == 
                                                                      (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                       >> 0x19U))))) 
                                                       | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REMW)) 
                                                      | (IData)(
                                                                ((0x703bU 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                                 & (1U 
                                                                    == 
                                                                    (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                                     >> 0x19U)))))))))),15);
            tracep->chgCData(oldp+34,((0xffU & ((((- (IData)((IData)(
                                                                     (0x3023U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->cpu_top__DOT__IF_ID_inst))))) 
                                                  | (0xfU 
                                                     & (- (IData)((IData)(
                                                                          (0x2023U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->cpu_top__DOT__IF_ID_inst))))))) 
                                                 | (3U 
                                                    & (- (IData)((IData)(
                                                                         (0x1023U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->cpu_top__DOT__IF_ID_inst))))))) 
                                                | (1U 
                                                   & (- (IData)((IData)(
                                                                        (0x23U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->cpu_top__DOT__IF_ID_inst))))))))),8);
            tracep->chgSData(oldp+35,(vlSelf->cpu_top__DOT__mem_rstrb),9);
            tracep->chgBit(oldp+36,(vlSelf->cpu_top__DOT__reg_wen));
            tracep->chgBit(oldp+37,((0x23U == (0x7fU 
                                               & vlSelf->cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+38,(((0x1bU == (0x7fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                     | (0x3bU == (0x7fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgCData(oldp+39,(vlSelf->cpu_top__DOT__alu_op_sext),2);
            tracep->chgQData(oldp+40,(vlSelf->cpu_top__DOT__IF_ID_pc),64);
            tracep->chgIData(oldp+42,(vlSelf->cpu_top__DOT__IF_ID_inst),32);
            tracep->chgBit(oldp+43,(vlSelf->cpu_top__DOT__IF_ID_valid));
            tracep->chgBit(oldp+44,(vlSelf->cpu_top__DOT__IF_ID_block));
            tracep->chgBit(oldp+45,(vlSelf->cpu_top__DOT__IF_ID_bubble));
            tracep->chgBit(oldp+46,(vlSelf->cpu_top__DOT__IF_ID_reg_e__DOT__input_valid));
            tracep->chgQData(oldp+47,(vlSelf->cpu_top__DOT__ID_EX_imm),64);
            tracep->chgQData(oldp+49,(vlSelf->cpu_top__DOT__ID_EX_pc),64);
            tracep->chgQData(oldp+51,(vlSelf->cpu_top__DOT__ID_EX_rs1),64);
            tracep->chgQData(oldp+53,(vlSelf->cpu_top__DOT__ID_EX_rs2),64);
            tracep->chgCData(oldp+55,(vlSelf->cpu_top__DOT__ID_EX_rd_addr),5);
            tracep->chgCData(oldp+56,(vlSelf->cpu_top__DOT__ID_EX_wstrb),8);
            tracep->chgSData(oldp+57,(vlSelf->cpu_top__DOT__ID_EX_rstrb),9);
            tracep->chgCData(oldp+58,(vlSelf->cpu_top__DOT__ID_EX_regin_sel),3);
            tracep->chgCData(oldp+59,(vlSelf->cpu_top__DOT__ID_EX_op1_sel),3);
            tracep->chgCData(oldp+60,(vlSelf->cpu_top__DOT__ID_EX_op2_sel),2);
            tracep->chgCData(oldp+61,(vlSelf->cpu_top__DOT__ID_EX_alu_sext),2);
            tracep->chgSData(oldp+62,(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel),15);
            tracep->chgBit(oldp+63,(vlSelf->cpu_top__DOT__ID_EX_reg_wen));
            tracep->chgBit(oldp+64,(vlSelf->cpu_top__DOT__ID_EX_mem_wen));
            tracep->chgBit(oldp+65,(vlSelf->cpu_top__DOT__ID_EX_word_op_mask));
            tracep->chgBit(oldp+66,(vlSelf->cpu_top__DOT__ID_EX_reg_e__DOT__input_valid));
            tracep->chgIData(oldp+67,(vlSelf->cpu_top__DOT__ID_EX_inst),32);
            tracep->chgBit(oldp+68,(vlSelf->cpu_top__DOT__ID_EX_bubble));
            tracep->chgSData(oldp+69,(vlSelf->cpu_top__DOT__EX_MEM_rstrb),9);
            tracep->chgCData(oldp+70,(vlSelf->cpu_top__DOT__EX_MEM_wstrb),8);
            tracep->chgQData(oldp+71,(vlSelf->cpu_top__DOT__EX_MEM_alu_out),64);
            tracep->chgQData(oldp+73,(vlSelf->cpu_top__DOT__EX_MEM_mem_addr),64);
            tracep->chgBit(oldp+75,(vlSelf->cpu_top__DOT__EX_MEM_mem_wen));
            tracep->chgQData(oldp+76,(vlSelf->cpu_top__DOT__EX_MEM_pc),64);
            tracep->chgBit(oldp+78,(vlSelf->cpu_top__DOT__EX_MEM_reg_wen));
            tracep->chgCData(oldp+79,(vlSelf->cpu_top__DOT__EX_MEM_rd_addr),5);
            tracep->chgCData(oldp+80,(vlSelf->cpu_top__DOT__EX_MEM_regin_sel),3);
            tracep->chgCData(oldp+81,((7U & (IData)(vlSelf->cpu_top__DOT__EX_MEM_mem_addr))),3);
            tracep->chgIData(oldp+82,(vlSelf->cpu_top__DOT__EX_MEM_inst),32);
            tracep->chgBit(oldp+83,(vlSelf->cpu_top__DOT__EX_MEM_bubble));
            tracep->chgBit(oldp+84,(vlSelf->cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid));
            tracep->chgQData(oldp+85,(vlSelf->cpu_top__DOT__MEM_WB_pc),64);
            tracep->chgBit(oldp+87,(vlSelf->cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid));
            tracep->chgQData(oldp+88,(vlSelf->cpu_top__DOT__MEM_WB_mem_data),64);
            tracep->chgSData(oldp+90,(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb),9);
            tracep->chgQData(oldp+91,(vlSelf->cpu_top__DOT__MEM_WB_alu_out),64);
            tracep->chgBit(oldp+93,(vlSelf->cpu_top__DOT__MEM_WB_reg_wen));
            tracep->chgCData(oldp+94,(vlSelf->cpu_top__DOT__MEM_WB_rd_addr),5);
            tracep->chgCData(oldp+95,(vlSelf->cpu_top__DOT__MEM_WB_regin_sel),3);
            tracep->chgCData(oldp+96,(vlSelf->cpu_top__DOT__MEM_WB_shamt),3);
            tracep->chgBit(oldp+97,(vlSelf->cpu_top__DOT__MEM_WB_allowin));
            tracep->chgIData(oldp+98,(vlSelf->cpu_top__DOT__MEM_WB_inst),32);
            tracep->chgBit(oldp+99,(vlSelf->cpu_top__DOT__MEM_WB_bubble));
            tracep->chgQData(oldp+100,(((8U & (IData)(vlSelf->cpu_top__DOT__dnpc_sel))
                                         ? vlSelf->cpu_top__DOT__rs1_data
                                         : vlSelf->cpu_top__DOT__IF_ID_pc)),64);
            tracep->chgQData(oldp+102,((vlSelf->cpu_top__DOT__imm 
                                        + ((8U & (IData)(vlSelf->cpu_top__DOT__dnpc_sel))
                                            ? vlSelf->cpu_top__DOT__rs1_data
                                            : vlSelf->cpu_top__DOT__IF_ID_pc))),64);
            tracep->chgQData(oldp+104,(vlSelf->cpu_top__DOT__npc_e__DOT__dnpc),64);
            tracep->chgBit(oldp+106,((1U & (~ (IData)(vlSelf->cpu_top__DOT__dnpc_sel)))));
            tracep->chgWData(oldp+107,(vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel_data),128);
            tracep->chgCData(oldp+111,(vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel),2);
            tracep->chgQData(oldp+112,(vlSelf->cpu_top__DOT__npc_e__DOT__nextpc_64bit_2sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+114,(vlSelf->cpu_top__DOT__npc_e__DOT__nextpc_64bit_2sel__DOT__sel_data[1]),64);
            tracep->chgBit(oldp+116,(vlSelf->cpu_top__DOT__pc_e__DOT__IF_valid));
            tracep->chgBit(oldp+117,(vlSelf->cpu_top__DOT__pc_e__DOT__IF_en));
            tracep->chgIData(oldp+118,(vlSelf->cpu_top__DOT__pc_e__DOT__inst_cache),32);
            tracep->chgBit(oldp+119,(vlSelf->cpu_top__DOT__pc_e__DOT__cache_valid));
            tracep->chgBit(oldp+120,((1U & (~ (IData)(vlSelf->cpu_top__DOT__IF_ID_block)))));
            tracep->chgBit(oldp+121,((((0x1fU & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                 >> 0xfU)) 
                                       == (IData)(vlSelf->cpu_top__DOT__ID_EX_rd_addr)) 
                                      | ((0x1fU & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->cpu_top__DOT__ID_EX_rd_addr)))));
            tracep->chgBit(oldp+122,((((0x1fU & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                 >> 0xfU)) 
                                       == (IData)(vlSelf->cpu_top__DOT__EX_MEM_rd_addr)) 
                                      | ((0x1fU & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->cpu_top__DOT__EX_MEM_rd_addr)))));
            tracep->chgBit(oldp+123,((((0x1fU & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                 >> 0xfU)) 
                                       == (IData)(vlSelf->cpu_top__DOT__MEM_WB_rd_addr)) 
                                      | ((0x1fU & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->cpu_top__DOT__MEM_WB_rd_addr)))));
            tracep->chgBit(oldp+124,(((IData)(vlSelf->cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid)
                                       ? (1U & (((0x1fU 
                                                  & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                     >> 0xfU)) 
                                                 == (IData)(vlSelf->cpu_top__DOT__MEM_WB_rd_addr)) 
                                                | ((0x1fU 
                                                    & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                       >> 0x14U)) 
                                                   == (IData)(vlSelf->cpu_top__DOT__MEM_WB_rd_addr))))
                                       : 0U)));
            tracep->chgBit(oldp+125,(((IData)(vlSelf->cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid)
                                       ? (1U & (((0x1fU 
                                                  & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                     >> 0xfU)) 
                                                 == (IData)(vlSelf->cpu_top__DOT__EX_MEM_rd_addr)) 
                                                | ((0x1fU 
                                                    & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                       >> 0x14U)) 
                                                   == (IData)(vlSelf->cpu_top__DOT__EX_MEM_rd_addr))))
                                       : 0U)));
            tracep->chgBit(oldp+126,(((IData)(vlSelf->cpu_top__DOT__ID_EX_reg_e__DOT__input_valid)
                                       ? (1U & (((0x1fU 
                                                  & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                     >> 0xfU)) 
                                                 == (IData)(vlSelf->cpu_top__DOT__ID_EX_rd_addr)) 
                                                | ((0x1fU 
                                                    & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                       >> 0x14U)) 
                                                   == (IData)(vlSelf->cpu_top__DOT__ID_EX_rd_addr))))
                                       : 0U)));
            tracep->chgCData(oldp+127,((vlSelf->cpu_top__DOT__IF_ID_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+128,((0x7fU & vlSelf->cpu_top__DOT__IF_ID_inst)),7);
            tracep->chgCData(oldp+129,((7U & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+130,((vlSelf->cpu_top__DOT__IF_ID_inst 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+131,(vlSelf->cpu_top__DOT__decoder_e__DOT__immS),12);
            tracep->chgSData(oldp+132,(vlSelf->cpu_top__DOT__decoder_e__DOT__immB),13);
            tracep->chgIData(oldp+133,((0xfffff000U 
                                        & vlSelf->cpu_top__DOT__IF_ID_inst)),32);
            tracep->chgIData(oldp+134,(vlSelf->cpu_top__DOT__decoder_e__DOT__immJ),21);
            tracep->chgBit(oldp+135,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI));
            tracep->chgBit(oldp+136,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR));
            tracep->chgBit(oldp+137,((0x63U == (0x7fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+138,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU));
            tracep->chgBit(oldp+139,((0x6fU == (0x7fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+140,((0x37U == (0x7fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+141,((0x17U == (0x7fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+142,(vlSelf->cpu_top__DOT__decoder_e__DOT__JALR));
            tracep->chgBit(oldp+143,(vlSelf->cpu_top__DOT__decoder_e__DOT__LD));
            tracep->chgBit(oldp+144,(vlSelf->cpu_top__DOT__decoder_e__DOT__LW));
            tracep->chgBit(oldp+145,(vlSelf->cpu_top__DOT__decoder_e__DOT__LWU));
            tracep->chgBit(oldp+146,(vlSelf->cpu_top__DOT__decoder_e__DOT__LH));
            tracep->chgBit(oldp+147,(vlSelf->cpu_top__DOT__decoder_e__DOT__LHU));
            tracep->chgBit(oldp+148,(vlSelf->cpu_top__DOT__decoder_e__DOT__LB));
            tracep->chgBit(oldp+149,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+150,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+151,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+152,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+153,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+154,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+155,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+156,((IData)(((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+157,((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+158,((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0x10U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+159,((IData)((0x1bU 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+160,((IData)(((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+161,((IData)(((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+162,((IData)(((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+163,((IData)(((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+164,((IData)(((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+165,((IData)(((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+166,((IData)(((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+167,((IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+168,((IData)(((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+169,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+170,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+171,((IData)(((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+172,((IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+173,(vlSelf->cpu_top__DOT__decoder_e__DOT__MUL));
            tracep->chgBit(oldp+174,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULH));
            tracep->chgBit(oldp+175,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULHSU));
            tracep->chgBit(oldp+176,((IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+177,(vlSelf->cpu_top__DOT__decoder_e__DOT__DIV));
            tracep->chgBit(oldp+178,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+179,(vlSelf->cpu_top__DOT__decoder_e__DOT__REM));
            tracep->chgBit(oldp+180,((IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+181,((IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+182,((IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+183,((IData)(((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+184,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+185,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+186,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULW));
            tracep->chgBit(oldp+187,(vlSelf->cpu_top__DOT__decoder_e__DOT__DIVW));
            tracep->chgBit(oldp+188,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+189,(vlSelf->cpu_top__DOT__decoder_e__DOT__REMW));
            tracep->chgBit(oldp+190,((IData)(((0x703bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+191,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+192,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+193,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+194,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+195,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+196,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+197,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+198,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+199,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+200,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+201,((0x73U == vlSelf->cpu_top__DOT__IF_ID_inst)));
            tracep->chgBit(oldp+202,((0x100073U == vlSelf->cpu_top__DOT__IF_ID_inst)));
            tracep->chgBit(oldp+203,((3U == (0x7fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+204,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeB_jr));
            tracep->chgBit(oldp+205,(vlSelf->cpu_top__DOT__decoder_e__DOT__eq));
            tracep->chgBit(oldp+206,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__eq)))));
            tracep->chgBit(oldp+207,(vlSelf->cpu_top__DOT__decoder_e__DOT__lt));
            tracep->chgBit(oldp+208,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__lt)))));
            tracep->chgBit(oldp+209,(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu));
            tracep->chgBit(oldp+210,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu)))));
            tracep->chgBit(oldp+211,(vlSelf->cpu_top__DOT__decoder_e__DOT__add_flag));
            tracep->chgBit(oldp+212,(((IData)(((0x33U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                               & (0x20U 
                                                  == 
                                                  (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                   >> 0x19U)))) 
                                      | (IData)(((0x3bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                 & (0x20U 
                                                    == 
                                                    (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+213,(((IData)((0x2013U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                      | (IData)(((0x2033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+214,(((IData)((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                      | (IData)(((0x3033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+215,(((IData)((0x4013U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                      | (IData)(((0x4033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+216,(((IData)((0x6013U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                      | (IData)(((0x6033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+217,(((IData)((0x7013U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                      | (IData)(((0x7033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+218,(((((IData)(((0x1013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                     >> 0x1aU)))) 
                                        | (IData)((
                                                   (0x1033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                   & (0U 
                                                      == 
                                                      (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                       >> 0x19U))))) 
                                       | (IData)(((0x101bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                  & (0U 
                                                     == 
                                                     (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                      >> 0x19U))))) 
                                      | (IData)(((0x103bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+219,(((((IData)(((0x5013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                     >> 0x1aU)))) 
                                        | (IData)((
                                                   (0x5033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                   & (0U 
                                                      == 
                                                      (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                       >> 0x19U))))) 
                                       | (IData)(((0x501bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                  & (0U 
                                                     == 
                                                     (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                      >> 0x19U))))) 
                                      | (IData)(((0x503bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+220,(((((IData)(((0x5013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                 & (0x10U 
                                                    == 
                                                    (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                     >> 0x1aU)))) 
                                        | (IData)((
                                                   (0x5033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                   & (0x20U 
                                                      == 
                                                      (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                       >> 0x19U))))) 
                                       | (IData)(((0x501bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                  & (0x20U 
                                                     == 
                                                     (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                      >> 0x19U))))) 
                                      | (IData)(((0x503bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                 & (0x20U 
                                                    == 
                                                    (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+221,(((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MUL) 
                                      | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULW))));
            tracep->chgBit(oldp+222,((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULH) 
                                       | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                      | (IData)(((0x3033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                 & (1U 
                                                    == 
                                                    (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+223,(((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIV) 
                                        | (IData)((
                                                   (0x5033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                   & (1U 
                                                      == 
                                                      (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                       >> 0x19U))))) 
                                       | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIVW)) 
                                      | (IData)(((0x503bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                 & (1U 
                                                    == 
                                                    (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+224,(((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REM) 
                                        | (IData)((
                                                   (0x7033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                   & (1U 
                                                      == 
                                                      (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                       >> 0x19U))))) 
                                       | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REMW)) 
                                      | (IData)(((0x703bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                 & (1U 
                                                    == 
                                                    (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+225,((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR) 
                                       | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI)) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+226,((((0x63U == (0x7fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+227,((((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI) 
                                         | (0x23U == 
                                            (0x7fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                        | (0x63U == 
                                           (0x7fU & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                      | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU))));
            tracep->chgWData(oldp+228,(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+234,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+236,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+238,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgWData(oldp+240,(vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data),128);
            tracep->chgQData(oldp+244,(vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+246,(vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[1]),64);
            tracep->chgBit(oldp+248,((1U & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel))));
            tracep->chgBit(oldp+249,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+250,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+251,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+252,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 4U))));
            tracep->chgBit(oldp+253,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 5U))));
            tracep->chgBit(oldp+254,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 6U))));
            tracep->chgBit(oldp+255,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 7U))));
            tracep->chgBit(oldp+256,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 8U))));
            tracep->chgBit(oldp+257,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 9U))));
            tracep->chgBit(oldp+258,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+259,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+260,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+261,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xdU))));
            tracep->chgQData(oldp+262,(vlSelf->cpu_top__DOT__alu_e__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp142, vlSelf->cpu_top__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp143, vlSelf->cpu_top__DOT__alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp144, __Vtemp142, __Vtemp143);
            VL_EXTEND_WQ(65,64, __Vtemp145, vlSelf->cpu_top__DOT__alu_e__DOT__cin);
            VL_ADD_W(3, __Vtemp146, __Vtemp144, __Vtemp145);
            tracep->chgQData(oldp+264,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp146[2U])))))),64);
            tracep->chgQData(oldp+266,((vlSelf->cpu_top__DOT__alu_op1 
                                        ^ vlSelf->cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+268,((vlSelf->cpu_top__DOT__alu_op1 
                                        | vlSelf->cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+270,((vlSelf->cpu_top__DOT__alu_op1 
                                        & vlSelf->cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+272,(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
                                                               >> 0x20U))))
                                         : vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result)),64);
            tracep->chgQData(oldp+274,(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result),64);
            tracep->chgQData(oldp+276,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                                                 ? (IData)(
                                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                                            >> 0x1fU))
                                                                 : (IData)(
                                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                                            >> 0x3fU))))))) 
                                         & ((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                             ? (~ (0xffffffffULL 
                                                   >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt)))
                                             : (~ (0xffffffffffffffffULL 
                                                   >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt))))) 
                                        | vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)),64);
            VL_EXTENDS_WW(128,65, __Vtemp148, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext);
            VL_EXTENDS_WW(128,65, __Vtemp149, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
            VL_MULS_WWW(128,128,128, __Vtemp150, __Vtemp148, __Vtemp149);
            tracep->chgQData(oldp+278,((((QData)((IData)(
                                                         __Vtemp150[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp150[0U])))),64);
            VL_EXTENDS_WW(128,65, __Vtemp151, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext);
            VL_EXTENDS_WW(128,65, __Vtemp152, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
            VL_MULS_WWW(128,128,128, __Vtemp153, __Vtemp151, __Vtemp152);
            tracep->chgQData(oldp+280,((((QData)((IData)(
                                                         __Vtemp153[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp153[2U])))),64);
            VL_DIVS_WWW(65, __Vtemp155, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
            tracep->chgQData(oldp+282,((((QData)((IData)(
                                                         __Vtemp155[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp155[0U])))),64);
            VL_MODDIVS_WWW(65, __Vtemp158, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
            tracep->chgQData(oldp+284,((((QData)((IData)(
                                                         __Vtemp158[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp158[0U])))),64);
            tracep->chgWData(oldp+286,(vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext),65);
            tracep->chgWData(oldp+289,(vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext),65);
            tracep->chgBit(oldp+292,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                             ? (IData)(
                                                       (vlSelf->cpu_top__DOT__alu_op1 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->cpu_top__DOT__alu_op1 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+293,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                             ? (IData)(
                                                       (vlSelf->cpu_top__DOT__alu_op2 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->cpu_top__DOT__alu_op2 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+294,(vlSelf->cpu_top__DOT__alu_e__DOT__sext1));
            tracep->chgBit(oldp+295,(vlSelf->cpu_top__DOT__alu_e__DOT__sext2));
            VL_DIVS_WWW(65, __Vtemp161, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
            tracep->chgBit(oldp+296,((1U & __Vtemp161[2U])));
            VL_MODDIVS_WWW(65, __Vtemp164, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
            tracep->chgBit(oldp+297,((1U & __Vtemp164[2U])));
            tracep->chgQData(oldp+298,(vlSelf->cpu_top__DOT__alu_e__DOT__adder2),64);
            tracep->chgQData(oldp+300,(vlSelf->cpu_top__DOT__alu_e__DOT__cin),64);
            VL_EXTEND_WQ(65,64, __Vtemp167, vlSelf->cpu_top__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp168, vlSelf->cpu_top__DOT__alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp169, __Vtemp167, __Vtemp168);
            VL_EXTEND_WQ(65,64, __Vtemp170, vlSelf->cpu_top__DOT__alu_e__DOT__cin);
            VL_ADD_W(3, __Vtemp171, __Vtemp169, __Vtemp170);
            tracep->chgBit(oldp+302,((1U & __Vtemp171[2U])));
            tracep->chgQData(oldp+303,(vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1),64);
            tracep->chgQData(oldp+305,(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op),64);
            tracep->chgCData(oldp+307,(vlSelf->cpu_top__DOT__alu_e__DOT__shamt),6);
            tracep->chgQData(oldp+308,(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                         ? (~ (0xffffffffULL 
                                               >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt)))
                                         : (~ (0xffffffffffffffffULL 
                                               >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt))))),64);
            tracep->chgIData(oldp+310,(((0x80U & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel))
                                         ? (IData)(
                                                   (vlSelf->cpu_top__DOT__alu_e__DOT__shift_op 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op))),32);
            tracep->chgQData(oldp+311,(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                         ? (QData)((IData)(
                                                           ((0x80U 
                                                             & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel))
                                                             ? (IData)(
                                                                       (vlSelf->cpu_top__DOT__alu_e__DOT__shift_op 
                                                                        >> 0x20U))
                                                             : (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op))))
                                         : vlSelf->cpu_top__DOT__alu_e__DOT__shift_op)),64);
            tracep->chgQData(oldp+313,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
                                                           >> 0x20U))))),64);
            tracep->chgQData(oldp+315,(vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result),64);
            tracep->chgQData(oldp+317,(vlSelf->cpu_top__DOT__alu_e__DOT__dword_result),64);
            tracep->chgQData(oldp+319,((((QData)((IData)(
                                                         (- (IData)(
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
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->cpu_top__DOT__alu_e__DOT__dword_result)))),64);
            tracep->chgBit(oldp+321,(((1U & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x3000U 
                                                       & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel)))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_sext))))))
                                       ? 0U : (1U & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_e__DOT__dword_result 
                                                             >> 0x1fU))))));
            tracep->chgBit(oldp+322,(vlSelf->cpu_top__DOT__EX_MEM_reg_e__DOT__mem_rd_en));
            tracep->chgBit(oldp+323,((1U & ((IData)(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb) 
                                            >> 8U))));
            tracep->chgBit(oldp+324,((1U & (((IData)(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb) 
                                             >> 8U) 
                                            & ((0xfU 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb)))
                                                ? (IData)(
                                                          (vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                           >> 0x1fU))
                                                : (
                                                   (3U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb)))
                                                    ? (IData)(
                                                              (vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                               >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb))) 
                                                    & (IData)(
                                                              (vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                               >> 7U)))))))));
            tracep->chgCData(oldp+325,((0xffU & (~ (IData)(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb)))),8);
            tracep->chgQData(oldp+326,(vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data),64);
            tracep->chgWData(oldp+328,(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+334,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+336,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+338,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgBit(oldp+340,(vlSelf->cpu_top__DOT____Vcellinp__gpr_e__I_wen));
            tracep->chgQData(oldp+341,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0]),64);
            tracep->chgQData(oldp+343,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[1]),64);
            tracep->chgQData(oldp+345,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[2]),64);
            tracep->chgQData(oldp+347,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[3]),64);
            tracep->chgQData(oldp+349,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[4]),64);
            tracep->chgQData(oldp+351,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[5]),64);
            tracep->chgQData(oldp+353,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[6]),64);
            tracep->chgQData(oldp+355,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[7]),64);
            tracep->chgQData(oldp+357,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[8]),64);
            tracep->chgQData(oldp+359,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[9]),64);
            tracep->chgQData(oldp+361,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[10]),64);
            tracep->chgQData(oldp+363,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[11]),64);
            tracep->chgQData(oldp+365,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[12]),64);
            tracep->chgQData(oldp+367,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[13]),64);
            tracep->chgQData(oldp+369,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[14]),64);
            tracep->chgQData(oldp+371,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[15]),64);
            tracep->chgQData(oldp+373,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[16]),64);
            tracep->chgQData(oldp+375,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[17]),64);
            tracep->chgQData(oldp+377,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[18]),64);
            tracep->chgQData(oldp+379,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[19]),64);
            tracep->chgQData(oldp+381,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[20]),64);
            tracep->chgQData(oldp+383,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[21]),64);
            tracep->chgQData(oldp+385,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[22]),64);
            tracep->chgQData(oldp+387,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[23]),64);
            tracep->chgQData(oldp+389,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[24]),64);
            tracep->chgQData(oldp+391,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[25]),64);
            tracep->chgQData(oldp+393,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[26]),64);
            tracep->chgQData(oldp+395,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[27]),64);
            tracep->chgQData(oldp+397,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[28]),64);
            tracep->chgQData(oldp+399,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[29]),64);
            tracep->chgQData(oldp+401,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[30]),64);
            tracep->chgQData(oldp+403,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[31]),64);
            tracep->chgBit(oldp+405,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0]));
            tracep->chgBit(oldp+406,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[1]));
            tracep->chgBit(oldp+407,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[2]));
            tracep->chgBit(oldp+408,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[3]));
            tracep->chgBit(oldp+409,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[4]));
            tracep->chgBit(oldp+410,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[5]));
            tracep->chgBit(oldp+411,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[6]));
            tracep->chgBit(oldp+412,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[7]));
            tracep->chgBit(oldp+413,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[8]));
            tracep->chgBit(oldp+414,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[9]));
            tracep->chgBit(oldp+415,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[10]));
            tracep->chgBit(oldp+416,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[11]));
            tracep->chgBit(oldp+417,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[12]));
            tracep->chgBit(oldp+418,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[13]));
            tracep->chgBit(oldp+419,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[14]));
            tracep->chgBit(oldp+420,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[15]));
            tracep->chgBit(oldp+421,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[16]));
            tracep->chgBit(oldp+422,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[17]));
            tracep->chgBit(oldp+423,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[18]));
            tracep->chgBit(oldp+424,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[19]));
            tracep->chgBit(oldp+425,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[20]));
            tracep->chgBit(oldp+426,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[21]));
            tracep->chgBit(oldp+427,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[22]));
            tracep->chgBit(oldp+428,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[23]));
            tracep->chgBit(oldp+429,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[24]));
            tracep->chgBit(oldp+430,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[25]));
            tracep->chgBit(oldp+431,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[26]));
            tracep->chgBit(oldp+432,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[27]));
            tracep->chgBit(oldp+433,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[28]));
            tracep->chgBit(oldp+434,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[29]));
            tracep->chgBit(oldp+435,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[30]));
            tracep->chgBit(oldp+436,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[31]));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+437,(vlSelf->cpu_top__DOT__current_inst),32);
            tracep->chgBit(oldp+438,(vlSelf->cpu_top__DOT__IF_valid));
            tracep->chgBit(oldp+439,(vlSelf->cpu_top__DOT__IF_ID_allowin));
            tracep->chgBit(oldp+440,(vlSelf->cpu_top__DOT__ID_EX_allowin));
            tracep->chgBit(oldp+441,(vlSelf->cpu_top__DOT__EX_MEM_valid));
            tracep->chgBit(oldp+442,(vlSelf->cpu_top__DOT__EX_MEM_allowin));
            tracep->chgBit(oldp+443,(vlSelf->cpu_top__DOT__pc_e__DOT__IF_ready_go));
            tracep->chgBit(oldp+444,(vlSelf->cpu_top__DOT__EX_MEM_reg_e__DOT__output_valid));
        }
        tracep->chgBit(oldp+445,(vlSelf->I_sys_clk));
        tracep->chgBit(oldp+446,(vlSelf->I_rst));
        tracep->chgIData(oldp+447,(vlSelf->I_inst),32);
        tracep->chgBit(oldp+448,(vlSelf->I_inst_valid));
        tracep->chgBit(oldp+449,(vlSelf->I_inst_addr_ready));
        tracep->chgQData(oldp+450,(vlSelf->O_pc),64);
        tracep->chgBit(oldp+452,(vlSelf->O_pc_valid));
        tracep->chgQData(oldp+453,(vlSelf->O_mem_addr),64);
        tracep->chgBit(oldp+455,(vlSelf->O_mem_rd_en));
        tracep->chgBit(oldp+456,(vlSelf->O_mem_wen));
        tracep->chgQData(oldp+457,(vlSelf->I_mem_rd_data),64);
        tracep->chgBit(oldp+459,(vlSelf->I_mem_rd_data_valid));
        tracep->chgQData(oldp+460,(vlSelf->O_mem_wr_data),64);
        tracep->chgCData(oldp+462,(vlSelf->O_mem_wr_strb),8);
        tracep->chgBit(oldp+463,((1U & ((~ (IData)(vlSelf->cpu_top__DOT__pc_e__DOT__IF_valid)) 
                                        | ((IData)(vlSelf->cpu_top__DOT__pc_e__DOT__IF_ready_go) 
                                           & (IData)(vlSelf->cpu_top__DOT__IF_ID_allowin))))));
    }
}

void Vcpu_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vcpu_top___024root* const __restrict vlSelf = static_cast<Vcpu_top___024root*>(voidSelf);
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
