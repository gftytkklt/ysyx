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
    VlWide<3>/*95:0*/ __Vtemp125;
    VlWide<3>/*95:0*/ __Vtemp126;
    VlWide<3>/*95:0*/ __Vtemp127;
    VlWide<3>/*95:0*/ __Vtemp128;
    VlWide<3>/*95:0*/ __Vtemp129;
    VlWide<4>/*127:0*/ __Vtemp131;
    VlWide<4>/*127:0*/ __Vtemp132;
    VlWide<4>/*127:0*/ __Vtemp133;
    VlWide<4>/*127:0*/ __Vtemp134;
    VlWide<4>/*127:0*/ __Vtemp135;
    VlWide<4>/*127:0*/ __Vtemp136;
    VlWide<3>/*95:0*/ __Vtemp138;
    VlWide<3>/*95:0*/ __Vtemp141;
    VlWide<3>/*95:0*/ __Vtemp144;
    VlWide<3>/*95:0*/ __Vtemp147;
    VlWide<3>/*95:0*/ __Vtemp150;
    VlWide<3>/*95:0*/ __Vtemp151;
    VlWide<3>/*95:0*/ __Vtemp152;
    VlWide<3>/*95:0*/ __Vtemp153;
    VlWide<3>/*95:0*/ __Vtemp154;
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
            tracep->chgQData(oldp+44,(vlSelf->cpu_top__DOT__ID_EX_imm),64);
            tracep->chgQData(oldp+46,(vlSelf->cpu_top__DOT__ID_EX_pc),64);
            tracep->chgQData(oldp+48,(vlSelf->cpu_top__DOT__ID_EX_rs1),64);
            tracep->chgQData(oldp+50,(vlSelf->cpu_top__DOT__ID_EX_rs2),64);
            tracep->chgCData(oldp+52,(vlSelf->cpu_top__DOT__ID_EX_rd_addr),5);
            tracep->chgCData(oldp+53,(vlSelf->cpu_top__DOT__ID_EX_wstrb),8);
            tracep->chgSData(oldp+54,(vlSelf->cpu_top__DOT__ID_EX_rstrb),9);
            tracep->chgCData(oldp+55,(vlSelf->cpu_top__DOT__ID_EX_regin_sel),3);
            tracep->chgCData(oldp+56,(vlSelf->cpu_top__DOT__ID_EX_op1_sel),3);
            tracep->chgCData(oldp+57,(vlSelf->cpu_top__DOT__ID_EX_op2_sel),2);
            tracep->chgCData(oldp+58,(vlSelf->cpu_top__DOT__ID_EX_alu_sext),2);
            tracep->chgSData(oldp+59,(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel),15);
            tracep->chgBit(oldp+60,(vlSelf->cpu_top__DOT__ID_EX_reg_wen));
            tracep->chgBit(oldp+61,(vlSelf->cpu_top__DOT__ID_EX_mem_wen));
            tracep->chgBit(oldp+62,(vlSelf->cpu_top__DOT__ID_EX_word_op_mask));
            tracep->chgBit(oldp+63,(vlSelf->cpu_top__DOT__ID_EX_valid));
            tracep->chgBit(oldp+64,(vlSelf->cpu_top__DOT__EX_MEM_valid));
            tracep->chgSData(oldp+65,(vlSelf->cpu_top__DOT__EX_MEM_rstrb),9);
            tracep->chgCData(oldp+66,(vlSelf->cpu_top__DOT__EX_MEM_wstrb),8);
            tracep->chgQData(oldp+67,(vlSelf->cpu_top__DOT__EX_MEM_alu_out),64);
            tracep->chgQData(oldp+69,(vlSelf->cpu_top__DOT__EX_MEM_mem_addr),64);
            tracep->chgBit(oldp+71,(vlSelf->cpu_top__DOT__EX_MEM_mem_wen));
            tracep->chgQData(oldp+72,(vlSelf->cpu_top__DOT__EX_MEM_pc),64);
            tracep->chgBit(oldp+74,(vlSelf->cpu_top__DOT__EX_MEM_reg_wen));
            tracep->chgCData(oldp+75,(vlSelf->cpu_top__DOT__EX_MEM_rd_addr),5);
            tracep->chgCData(oldp+76,(vlSelf->cpu_top__DOT__EX_MEM_regin_sel),3);
            tracep->chgCData(oldp+77,((7U & (IData)(vlSelf->cpu_top__DOT__EX_MEM_mem_addr))),3);
            tracep->chgQData(oldp+78,(vlSelf->cpu_top__DOT__MEM_WB_pc),64);
            tracep->chgBit(oldp+80,(vlSelf->cpu_top__DOT__MEM_WB_valid));
            tracep->chgQData(oldp+81,(vlSelf->cpu_top__DOT__MEM_WB_mem_data),64);
            tracep->chgSData(oldp+83,(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb),9);
            tracep->chgQData(oldp+84,(vlSelf->cpu_top__DOT__MEM_WB_alu_out),64);
            tracep->chgBit(oldp+86,(vlSelf->cpu_top__DOT__MEM_WB_reg_wen));
            tracep->chgCData(oldp+87,(vlSelf->cpu_top__DOT__MEM_WB_rd_addr),5);
            tracep->chgCData(oldp+88,(vlSelf->cpu_top__DOT__MEM_WB_regin_sel),3);
            tracep->chgCData(oldp+89,(vlSelf->cpu_top__DOT__MEM_WB_shamt),3);
            tracep->chgQData(oldp+90,(((8U & (IData)(vlSelf->cpu_top__DOT__dnpc_sel))
                                        ? vlSelf->cpu_top__DOT__rs1_data
                                        : vlSelf->cpu_top__DOT__current_pc)),64);
            tracep->chgQData(oldp+92,((vlSelf->cpu_top__DOT__imm 
                                       + ((8U & (IData)(vlSelf->cpu_top__DOT__dnpc_sel))
                                           ? vlSelf->cpu_top__DOT__rs1_data
                                           : vlSelf->cpu_top__DOT__current_pc))),64);
            tracep->chgQData(oldp+94,(vlSelf->cpu_top__DOT__npc_e__DOT__dnpc),64);
            tracep->chgBit(oldp+96,((1U & (~ (IData)(vlSelf->cpu_top__DOT__dnpc_sel)))));
            tracep->chgWData(oldp+97,(vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel_data),128);
            tracep->chgCData(oldp+101,(vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel),2);
            tracep->chgQData(oldp+102,(vlSelf->cpu_top__DOT__npc_e__DOT__nextpc_64bit_2sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+104,(vlSelf->cpu_top__DOT__npc_e__DOT__nextpc_64bit_2sel__DOT__sel_data[1]),64);
            tracep->chgCData(oldp+106,((vlSelf->cpu_top__DOT__IF_ID_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+107,((0x7fU & vlSelf->cpu_top__DOT__IF_ID_inst)),7);
            tracep->chgCData(oldp+108,((7U & (vlSelf->cpu_top__DOT__IF_ID_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+109,((vlSelf->cpu_top__DOT__IF_ID_inst 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+110,(vlSelf->cpu_top__DOT__decoder_e__DOT__immS),12);
            tracep->chgSData(oldp+111,(vlSelf->cpu_top__DOT__decoder_e__DOT__immB),13);
            tracep->chgIData(oldp+112,((0xfffff000U 
                                        & vlSelf->cpu_top__DOT__IF_ID_inst)),32);
            tracep->chgIData(oldp+113,(vlSelf->cpu_top__DOT__decoder_e__DOT__immJ),21);
            tracep->chgBit(oldp+114,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI));
            tracep->chgBit(oldp+115,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR));
            tracep->chgBit(oldp+116,((0x63U == (0x7fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+117,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU));
            tracep->chgBit(oldp+118,((0x6fU == (0x7fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+119,((0x37U == (0x7fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+120,((0x17U == (0x7fU 
                                                & vlSelf->cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+121,(vlSelf->cpu_top__DOT__decoder_e__DOT__JALR));
            tracep->chgBit(oldp+122,(vlSelf->cpu_top__DOT__decoder_e__DOT__LD));
            tracep->chgBit(oldp+123,(vlSelf->cpu_top__DOT__decoder_e__DOT__LW));
            tracep->chgBit(oldp+124,(vlSelf->cpu_top__DOT__decoder_e__DOT__LWU));
            tracep->chgBit(oldp+125,(vlSelf->cpu_top__DOT__decoder_e__DOT__LH));
            tracep->chgBit(oldp+126,(vlSelf->cpu_top__DOT__decoder_e__DOT__LHU));
            tracep->chgBit(oldp+127,(vlSelf->cpu_top__DOT__decoder_e__DOT__LB));
            tracep->chgBit(oldp+128,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+129,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+130,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+131,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+132,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+133,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+134,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+135,((IData)(((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+136,((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+137,((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0x10U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+138,((IData)((0x1bU 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+139,((IData)(((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+140,((IData)(((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+141,((IData)(((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+142,((IData)(((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+143,((IData)(((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+144,((IData)(((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+145,((IData)(((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+146,((IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+147,((IData)(((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+148,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+149,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+150,((IData)(((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+151,((IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+152,(vlSelf->cpu_top__DOT__decoder_e__DOT__MUL));
            tracep->chgBit(oldp+153,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULH));
            tracep->chgBit(oldp+154,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULHSU));
            tracep->chgBit(oldp+155,((IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+156,(vlSelf->cpu_top__DOT__decoder_e__DOT__DIV));
            tracep->chgBit(oldp+157,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+158,(vlSelf->cpu_top__DOT__decoder_e__DOT__REM));
            tracep->chgBit(oldp+159,((IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+160,((IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+161,((IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+162,((IData)(((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+163,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+164,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+165,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULW));
            tracep->chgBit(oldp+166,(vlSelf->cpu_top__DOT__decoder_e__DOT__DIVW));
            tracep->chgBit(oldp+167,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+168,(vlSelf->cpu_top__DOT__decoder_e__DOT__REMW));
            tracep->chgBit(oldp+169,((IData)(((0x703bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+170,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+171,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+172,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+173,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+174,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+175,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+176,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+177,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+178,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+179,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+180,((0x73U == vlSelf->cpu_top__DOT__IF_ID_inst)));
            tracep->chgBit(oldp+181,((0x100073U == vlSelf->cpu_top__DOT__IF_ID_inst)));
            tracep->chgBit(oldp+182,((3U == (0x7fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+183,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeB_jr));
            tracep->chgBit(oldp+184,(vlSelf->cpu_top__DOT__decoder_e__DOT__eq));
            tracep->chgBit(oldp+185,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__eq)))));
            tracep->chgBit(oldp+186,(vlSelf->cpu_top__DOT__decoder_e__DOT__lt));
            tracep->chgBit(oldp+187,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__lt)))));
            tracep->chgBit(oldp+188,(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu));
            tracep->chgBit(oldp+189,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu)))));
            tracep->chgBit(oldp+190,(vlSelf->cpu_top__DOT__decoder_e__DOT__add_flag));
            tracep->chgBit(oldp+191,(((IData)(((0x33U 
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
            tracep->chgBit(oldp+192,(((IData)((0x2013U 
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
            tracep->chgBit(oldp+193,(((IData)((0x3013U 
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
            tracep->chgBit(oldp+194,(((IData)((0x4013U 
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
            tracep->chgBit(oldp+195,(((IData)((0x6013U 
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
            tracep->chgBit(oldp+196,(((IData)((0x7013U 
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
            tracep->chgBit(oldp+197,(((((IData)(((0x1013U 
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
            tracep->chgBit(oldp+198,(((((IData)(((0x5013U 
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
            tracep->chgBit(oldp+199,(((((IData)(((0x5013U 
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
            tracep->chgBit(oldp+200,(((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MUL) 
                                      | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULW))));
            tracep->chgBit(oldp+201,((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULH) 
                                       | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                      | (IData)(((0x3033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                                 & (1U 
                                                    == 
                                                    (vlSelf->cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+202,(((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIV) 
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
            tracep->chgBit(oldp+203,(((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REM) 
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
            tracep->chgBit(oldp+204,((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR) 
                                       | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI)) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+205,((((0x63U == (0x7fU 
                                                  & vlSelf->cpu_top__DOT__IF_ID_inst)) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+206,((((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI) 
                                         | (0x23U == 
                                            (0x7fU 
                                             & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                        | (0x63U == 
                                           (0x7fU & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->cpu_top__DOT__IF_ID_inst))) 
                                      | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU))));
            tracep->chgWData(oldp+207,(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+213,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+215,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+217,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgWData(oldp+219,(vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data),128);
            tracep->chgQData(oldp+223,(vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+225,(vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[1]),64);
            tracep->chgBit(oldp+227,((1U & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel))));
            tracep->chgBit(oldp+228,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+229,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+230,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+231,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 4U))));
            tracep->chgBit(oldp+232,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 5U))));
            tracep->chgBit(oldp+233,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 6U))));
            tracep->chgBit(oldp+234,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 7U))));
            tracep->chgBit(oldp+235,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 8U))));
            tracep->chgBit(oldp+236,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 9U))));
            tracep->chgBit(oldp+237,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+238,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+239,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+240,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xdU))));
            tracep->chgQData(oldp+241,(vlSelf->cpu_top__DOT__alu_e__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp125, vlSelf->cpu_top__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp126, vlSelf->cpu_top__DOT__alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp127, __Vtemp125, __Vtemp126);
            VL_EXTEND_WQ(65,64, __Vtemp128, vlSelf->cpu_top__DOT__alu_e__DOT__cin);
            VL_ADD_W(3, __Vtemp129, __Vtemp127, __Vtemp128);
            tracep->chgQData(oldp+243,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp129[2U])))))),64);
            tracep->chgQData(oldp+245,((vlSelf->cpu_top__DOT__alu_op1 
                                        ^ vlSelf->cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+247,((vlSelf->cpu_top__DOT__alu_op1 
                                        | vlSelf->cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+249,((vlSelf->cpu_top__DOT__alu_op1 
                                        & vlSelf->cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+251,(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
                                                               >> 0x20U))))
                                         : vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result)),64);
            tracep->chgQData(oldp+253,(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result),64);
            tracep->chgQData(oldp+255,((((- (QData)((IData)(
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
            VL_EXTENDS_WW(128,65, __Vtemp131, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext);
            VL_EXTENDS_WW(128,65, __Vtemp132, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
            VL_MULS_WWW(128,128,128, __Vtemp133, __Vtemp131, __Vtemp132);
            tracep->chgQData(oldp+257,((((QData)((IData)(
                                                         __Vtemp133[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp133[0U])))),64);
            VL_EXTENDS_WW(128,65, __Vtemp134, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext);
            VL_EXTENDS_WW(128,65, __Vtemp135, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
            VL_MULS_WWW(128,128,128, __Vtemp136, __Vtemp134, __Vtemp135);
            tracep->chgQData(oldp+259,((((QData)((IData)(
                                                         __Vtemp136[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp136[2U])))),64);
            VL_DIVS_WWW(65, __Vtemp138, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
            tracep->chgQData(oldp+261,((((QData)((IData)(
                                                         __Vtemp138[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp138[0U])))),64);
            VL_MODDIVS_WWW(65, __Vtemp141, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
            tracep->chgQData(oldp+263,((((QData)((IData)(
                                                         __Vtemp141[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp141[0U])))),64);
            tracep->chgWData(oldp+265,(vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext),65);
            tracep->chgWData(oldp+268,(vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext),65);
            tracep->chgBit(oldp+271,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                             ? (IData)(
                                                       (vlSelf->cpu_top__DOT__alu_op1 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->cpu_top__DOT__alu_op1 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+272,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                             ? (IData)(
                                                       (vlSelf->cpu_top__DOT__alu_op2 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->cpu_top__DOT__alu_op2 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+273,(vlSelf->cpu_top__DOT__alu_e__DOT__sext1));
            tracep->chgBit(oldp+274,(vlSelf->cpu_top__DOT__alu_e__DOT__sext2));
            VL_DIVS_WWW(65, __Vtemp144, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
            tracep->chgBit(oldp+275,((1U & __Vtemp144[2U])));
            VL_MODDIVS_WWW(65, __Vtemp147, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
            tracep->chgBit(oldp+276,((1U & __Vtemp147[2U])));
            tracep->chgQData(oldp+277,(vlSelf->cpu_top__DOT__alu_e__DOT__adder2),64);
            tracep->chgQData(oldp+279,(vlSelf->cpu_top__DOT__alu_e__DOT__cin),64);
            VL_EXTEND_WQ(65,64, __Vtemp150, vlSelf->cpu_top__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp151, vlSelf->cpu_top__DOT__alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp152, __Vtemp150, __Vtemp151);
            VL_EXTEND_WQ(65,64, __Vtemp153, vlSelf->cpu_top__DOT__alu_e__DOT__cin);
            VL_ADD_W(3, __Vtemp154, __Vtemp152, __Vtemp153);
            tracep->chgBit(oldp+281,((1U & __Vtemp154[2U])));
            tracep->chgQData(oldp+282,(vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1),64);
            tracep->chgQData(oldp+284,(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op),64);
            tracep->chgCData(oldp+286,(vlSelf->cpu_top__DOT__alu_e__DOT__shamt),6);
            tracep->chgQData(oldp+287,(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                         ? (~ (0xffffffffULL 
                                               >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt)))
                                         : (~ (0xffffffffffffffffULL 
                                               >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt))))),64);
            tracep->chgIData(oldp+289,(((0x80U & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel))
                                         ? (IData)(
                                                   (vlSelf->cpu_top__DOT__alu_e__DOT__shift_op 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op))),32);
            tracep->chgQData(oldp+290,(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                         ? (QData)((IData)(
                                                           ((0x80U 
                                                             & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel))
                                                             ? (IData)(
                                                                       (vlSelf->cpu_top__DOT__alu_e__DOT__shift_op 
                                                                        >> 0x20U))
                                                             : (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op))))
                                         : vlSelf->cpu_top__DOT__alu_e__DOT__shift_op)),64);
            tracep->chgQData(oldp+292,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
                                                           >> 0x20U))))),64);
            tracep->chgQData(oldp+294,(vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result),64);
            tracep->chgQData(oldp+296,(vlSelf->cpu_top__DOT__alu_e__DOT__dword_result),64);
            tracep->chgQData(oldp+298,((((QData)((IData)(
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
            tracep->chgBit(oldp+300,(((1U & ((IData)(
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
            tracep->chgBit(oldp+301,((1U & ((IData)(vlSelf->cpu_top__DOT__EX_MEM_regin_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+302,((1U & ((IData)(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb) 
                                            >> 8U))));
            tracep->chgBit(oldp+303,((1U & (((IData)(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb) 
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
            tracep->chgCData(oldp+304,((0xffU & (~ (IData)(vlSelf->cpu_top__DOT__MEM_WB_mem_rstrb)))),8);
            tracep->chgQData(oldp+305,(vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data),64);
            tracep->chgWData(oldp+307,(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+313,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+315,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+317,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgQData(oldp+319,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0]),64);
            tracep->chgQData(oldp+321,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[1]),64);
            tracep->chgQData(oldp+323,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[2]),64);
            tracep->chgQData(oldp+325,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[3]),64);
            tracep->chgQData(oldp+327,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[4]),64);
            tracep->chgQData(oldp+329,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[5]),64);
            tracep->chgQData(oldp+331,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[6]),64);
            tracep->chgQData(oldp+333,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[7]),64);
            tracep->chgQData(oldp+335,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[8]),64);
            tracep->chgQData(oldp+337,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[9]),64);
            tracep->chgQData(oldp+339,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[10]),64);
            tracep->chgQData(oldp+341,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[11]),64);
            tracep->chgQData(oldp+343,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[12]),64);
            tracep->chgQData(oldp+345,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[13]),64);
            tracep->chgQData(oldp+347,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[14]),64);
            tracep->chgQData(oldp+349,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[15]),64);
            tracep->chgQData(oldp+351,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[16]),64);
            tracep->chgQData(oldp+353,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[17]),64);
            tracep->chgQData(oldp+355,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[18]),64);
            tracep->chgQData(oldp+357,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[19]),64);
            tracep->chgQData(oldp+359,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[20]),64);
            tracep->chgQData(oldp+361,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[21]),64);
            tracep->chgQData(oldp+363,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[22]),64);
            tracep->chgQData(oldp+365,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[23]),64);
            tracep->chgQData(oldp+367,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[24]),64);
            tracep->chgQData(oldp+369,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[25]),64);
            tracep->chgQData(oldp+371,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[26]),64);
            tracep->chgQData(oldp+373,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[27]),64);
            tracep->chgQData(oldp+375,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[28]),64);
            tracep->chgQData(oldp+377,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[29]),64);
            tracep->chgQData(oldp+379,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[30]),64);
            tracep->chgQData(oldp+381,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[31]),64);
            tracep->chgBit(oldp+383,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0]));
            tracep->chgBit(oldp+384,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[1]));
            tracep->chgBit(oldp+385,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[2]));
            tracep->chgBit(oldp+386,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[3]));
            tracep->chgBit(oldp+387,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[4]));
            tracep->chgBit(oldp+388,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[5]));
            tracep->chgBit(oldp+389,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[6]));
            tracep->chgBit(oldp+390,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[7]));
            tracep->chgBit(oldp+391,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[8]));
            tracep->chgBit(oldp+392,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[9]));
            tracep->chgBit(oldp+393,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[10]));
            tracep->chgBit(oldp+394,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[11]));
            tracep->chgBit(oldp+395,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[12]));
            tracep->chgBit(oldp+396,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[13]));
            tracep->chgBit(oldp+397,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[14]));
            tracep->chgBit(oldp+398,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[15]));
            tracep->chgBit(oldp+399,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[16]));
            tracep->chgBit(oldp+400,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[17]));
            tracep->chgBit(oldp+401,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[18]));
            tracep->chgBit(oldp+402,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[19]));
            tracep->chgBit(oldp+403,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[20]));
            tracep->chgBit(oldp+404,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[21]));
            tracep->chgBit(oldp+405,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[22]));
            tracep->chgBit(oldp+406,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[23]));
            tracep->chgBit(oldp+407,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[24]));
            tracep->chgBit(oldp+408,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[25]));
            tracep->chgBit(oldp+409,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[26]));
            tracep->chgBit(oldp+410,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[27]));
            tracep->chgBit(oldp+411,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[28]));
            tracep->chgBit(oldp+412,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[29]));
            tracep->chgBit(oldp+413,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[30]));
            tracep->chgBit(oldp+414,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[31]));
        }
        tracep->chgBit(oldp+415,(vlSelf->I_sys_clk));
        tracep->chgBit(oldp+416,(vlSelf->I_rst));
        tracep->chgIData(oldp+417,(vlSelf->I_inst),32);
        tracep->chgBit(oldp+418,(vlSelf->I_inst_valid));
        tracep->chgBit(oldp+419,(vlSelf->I_inst_addr_ready));
        tracep->chgQData(oldp+420,(vlSelf->O_pc),64);
        tracep->chgBit(oldp+422,(vlSelf->O_pc_valid));
        tracep->chgQData(oldp+423,(vlSelf->O_mem_addr),64);
        tracep->chgBit(oldp+425,(vlSelf->O_mem_rd_en));
        tracep->chgBit(oldp+426,(vlSelf->O_mem_wen));
        tracep->chgQData(oldp+427,(vlSelf->I_mem_rd_data),64);
        tracep->chgBit(oldp+429,(vlSelf->I_mem_rd_data_valid));
        tracep->chgQData(oldp+430,(vlSelf->O_mem_wr_data),64);
        tracep->chgCData(oldp+432,(vlSelf->O_mem_wr_strb),8);
        tracep->chgBit(oldp+433,(vlSelf->cpu_top__DOT__MEM_WB_reg_e__DOT__WB_data_valid));
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
    }
}
