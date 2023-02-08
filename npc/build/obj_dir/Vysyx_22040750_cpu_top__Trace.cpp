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
    VlWide<3>/*95:0*/ __Vtemp298;
    VlWide<3>/*95:0*/ __Vtemp299;
    VlWide<3>/*95:0*/ __Vtemp300;
    VlWide<3>/*95:0*/ __Vtemp301;
    VlWide<3>/*95:0*/ __Vtemp302;
    VlWide<3>/*95:0*/ __Vtemp317;
    VlWide<3>/*95:0*/ __Vtemp318;
    VlWide<3>/*95:0*/ __Vtemp319;
    VlWide<3>/*95:0*/ __Vtemp320;
    VlWide<3>/*95:0*/ __Vtemp321;
    VlWide<4>/*127:0*/ __Vtemp323;
    VlWide<5>/*159:0*/ __Vtemp349;
    VlWide<5>/*159:0*/ __Vtemp351;
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
            tracep->chgQData(oldp+24,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__result),64);
            tracep->chgQData(oldp+26,(((2U == (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_intr) 
                                                << 1U) 
                                               | (0x30200073U 
                                                  == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))
                                        ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mtvec
                                        : ((1U == (
                                                   ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_intr) 
                                                    << 1U) 
                                                   | (0x30200073U 
                                                      == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))
                                            ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mepc
                                            : ((0U 
                                                == 
                                                (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_intr) 
                                                  << 1U) 
                                                 | (0x30200073U 
                                                    == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))
                                                ? (
                                                   (0x341U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mepc
                                                    : 
                                                   ((0x300U 
                                                     == 
                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus
                                                     : 
                                                    ((0x305U 
                                                      == 
                                                      (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                       >> 0x14U))
                                                      ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mtvec
                                                      : 
                                                     ((0x342U 
                                                       == 
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                        >> 0x14U))
                                                       ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mcause
                                                       : 
                                                      ((0x340U 
                                                        == 
                                                        (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                         >> 0x14U))
                                                        ? vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mscratch
                                                        : 0ULL)))))
                                                : 0ULL)))),64);
            tracep->chgQData(oldp+28,((((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__csr_alu_e__DOT__op 
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
                                                                 & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel))))))))),64);
            tracep->chgCData(oldp+30,((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+31,((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+32,((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                >> 7U))),5);
            tracep->chgCData(oldp+33,(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel),5);
            tracep->chgCData(oldp+34,(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__reg_wen) 
                                         & (3U == (0x7fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                        << 1U) | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__reg_wen) 
                                                  & (3U 
                                                     != 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))),3);
            tracep->chgCData(oldp+35,((((1U & (- (IData)(
                                                         ((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR) 
                                                            | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI) 
                                                               & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR)))) 
                                                           | (0x23U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                                          | (0x73U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))))) 
                                        | (2U & (- (IData)(
                                                           ((((0x63U 
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
                                       | (4U & (- (IData)(
                                                          (0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))))))),3);
            tracep->chgCData(oldp+36,((((1U & (- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR)))) 
                                        | (2U & (- (IData)(
                                                           (((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI) 
                                                               & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR))) 
                                                              | (0x23U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                                             | (0x63U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                                            | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU)))))) 
                                       | (4U & (- (IData)(
                                                          ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR) 
                                                           | (0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))))))),3);
            tracep->chgSData(oldp+37,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op_sel),15);
            tracep->chgCData(oldp+38,((0xffU & ((((- (IData)((IData)(
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
            tracep->chgSData(oldp+39,(vlSelf->ysyx_22040750_cpu_top__DOT__mem_rstrb),9);
            tracep->chgBit(oldp+40,(vlSelf->ysyx_22040750_cpu_top__DOT__reg_wen));
            tracep->chgBit(oldp+41,((0x23U == (0x7fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+42,(((0x1bU == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                     | (0x3bU == (0x7fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgCData(oldp+43,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op_sext),2);
            tracep->chgSData(oldp+44,((vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                       >> 0x14U)),12);
            tracep->chgBit(oldp+45,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_wen));
            tracep->chgBit(oldp+46,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_intr));
            tracep->chgBit(oldp+47,((0x30200073U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
            tracep->chgCData(oldp+48,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_op_sel),7);
            tracep->chgQData(oldp+49,(((0x73U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)
                                        ? 0xbULL : 
                                       ((0x100073U 
                                         == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)
                                         ? 4ULL : 0ULL))),64);
            tracep->chgQData(oldp+51,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc),64);
            tracep->chgIData(oldp+53,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst),32);
            tracep->chgBit(oldp+54,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid));
            tracep->chgBit(oldp+55,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_stall));
            tracep->chgBit(oldp+56,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_bubble));
            tracep->chgBit(oldp+57,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_reg_e__DOT__input_valid));
            tracep->chgQData(oldp+58,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_imm),64);
            tracep->chgQData(oldp+60,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_pc),64);
            tracep->chgQData(oldp+62,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs1),64);
            tracep->chgQData(oldp+64,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs2),64);
            tracep->chgQData(oldp+66,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr),64);
            tracep->chgCData(oldp+68,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rd_addr),5);
            tracep->chgCData(oldp+69,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_wstrb),8);
            tracep->chgSData(oldp+70,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rstrb),9);
            tracep->chgCData(oldp+71,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op2_sel),3);
            tracep->chgCData(oldp+72,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op1_sel),3);
            tracep->chgCData(oldp+73,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel),3);
            tracep->chgCData(oldp+74,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_sext),2);
            tracep->chgSData(oldp+75,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel),15);
            tracep->chgBit(oldp+76,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_wen));
            tracep->chgBit(oldp+77,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_mem_wen));
            tracep->chgBit(oldp+78,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask));
            tracep->chgBit(oldp+79,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid));
            tracep->chgCData(oldp+80,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall),2);
            tracep->chgIData(oldp+81,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_inst),32);
            tracep->chgBit(oldp+82,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_bubble));
            tracep->chgBit(oldp+83,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__input_valid));
            tracep->chgBit(oldp+84,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_multicycle));
            tracep->chgBit(oldp+85,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_out_valid));
            tracep->chgSData(oldp+86,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_addr),12);
            tracep->chgBit(oldp+87,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_wen));
            tracep->chgBit(oldp+88,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_intr));
            tracep->chgBit(oldp+89,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_mret));
            tracep->chgCData(oldp+90,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel),7);
            tracep->chgCData(oldp+91,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_uimm),5);
            tracep->chgQData(oldp+92,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_intr_no),64);
            tracep->chgSData(oldp+94,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rstrb),9);
            tracep->chgCData(oldp+95,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_wstrb),8);
            tracep->chgQData(oldp+96,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_alu_out),64);
            tracep->chgQData(oldp+98,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr),64);
            tracep->chgBit(oldp+102,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_wen));
            tracep->chgBit(oldp+103,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__mem_rd_en));
            tracep->chgBit(oldp+104,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__mem_wr_en));
            tracep->chgQData(oldp+105,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_pc),64);
            tracep->chgBit(oldp+107,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen));
            tracep->chgCData(oldp+108,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr),5);
            tracep->chgCData(oldp+109,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel),3);
            tracep->chgCData(oldp+110,((7U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr))),3);
            tracep->chgCData(oldp+111,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall),2);
            tracep->chgIData(oldp+112,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_inst),32);
            tracep->chgBit(oldp+113,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_bubble));
            tracep->chgBit(oldp+114,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid));
            tracep->chgSData(oldp+115,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_addr),12);
            tracep->chgBit(oldp+116,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_wen));
            tracep->chgBit(oldp+117,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_intr));
            tracep->chgBit(oldp+118,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_mret));
            tracep->chgQData(oldp+119,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_intr_no),64);
            tracep->chgQData(oldp+121,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_pc),64);
            tracep->chgBit(oldp+123,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid));
            tracep->chgQData(oldp+124,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_data),64);
            tracep->chgSData(oldp+126,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb),9);
            tracep->chgQData(oldp+127,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_alu_out),64);
            tracep->chgQData(oldp+129,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr),64);
            tracep->chgBit(oldp+131,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_wen));
            tracep->chgCData(oldp+132,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr),5);
            tracep->chgCData(oldp+133,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_regin_sel),3);
            tracep->chgCData(oldp+134,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_shamt),3);
            tracep->chgBit(oldp+135,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin));
            tracep->chgIData(oldp+136,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_inst),32);
            tracep->chgBit(oldp+137,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_bubble));
            tracep->chgCData(oldp+138,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_stall),2);
            tracep->chgSData(oldp+139,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr),12);
            tracep->chgBit(oldp+140,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_wen));
            tracep->chgBit(oldp+141,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr));
            tracep->chgBit(oldp+142,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_mret));
            tracep->chgQData(oldp+143,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr_no),64);
            tracep->chgCData(oldp+145,(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en),2);
            tracep->chgQData(oldp+146,(vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data),64);
            tracep->chgQData(oldp+148,(vlSelf->ysyx_22040750_cpu_top__DOT__rs2_forward_data),64);
            tracep->chgQData(oldp+150,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_forward_data),64);
            tracep->chgBit(oldp+152,((1U & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel) 
                                             >> 1U) 
                                            | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_wen)))));
            tracep->chgBit(oldp+153,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_op));
            tracep->chgQData(oldp+154,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_addr),64);
            tracep->chgQData(oldp+156,(((8U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))
                                         ? vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data
                                         : vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc)),64);
            tracep->chgQData(oldp+158,((vlSelf->ysyx_22040750_cpu_top__DOT__imm 
                                        + ((8U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))
                                            ? vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data
                                            : vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc))),64);
            tracep->chgQData(oldp+160,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__dnpc),64);
            tracep->chgBit(oldp+162,((1U & (~ ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel) 
                                               | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel) 
                                                  >> 4U))))));
            tracep->chgBit(oldp+163,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel) 
                                            >> 4U))));
            tracep->chgWData(oldp+164,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data),192);
            tracep->chgCData(oldp+170,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel),3);
            tracep->chgQData(oldp+171,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+173,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+175,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgBit(oldp+177,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_valid));
            tracep->chgBit(oldp+178,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_en));
            tracep->chgIData(oldp+179,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__inst_cache),32);
            tracep->chgBit(oldp+180,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__cache_valid));
            tracep->chgBit(oldp+181,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel)))));
            tracep->chgBit(oldp+182,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_stall)))));
            tracep->chgBit(oldp+183,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+184,((0U != (0xfU & 
                                             ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                              >> 0xaU)))));
            tracep->chgBit(oldp+185,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel) 
                                            >> 1U))));
            tracep->chgCData(oldp+186,(((0xfffffffeU 
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
            tracep->chgCData(oldp+187,(((0xfffffffeU 
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
            tracep->chgCData(oldp+188,(((0xfffffffeU 
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
            tracep->chgBit(oldp+189,((((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall)) 
                                       & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel) 
                                          >> 1U)) | 
                                      ((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall)) 
                                       & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel) 
                                          >> 1U)))));
            tracep->chgBit(oldp+190,(((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall)) 
                                      & (0U != (0xfU 
                                                & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+191,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__forward_unit_e__I_WB_reg_wen));
            tracep->chgBit(oldp+192,((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_wen) 
                                       & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_wen)) 
                                      & ((vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                          >> 0x14U) 
                                         == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_addr)))));
            tracep->chgBit(oldp+193,((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_wen) 
                                       & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_wen)) 
                                      & ((vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                          >> 0x14U) 
                                         == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_addr)))));
            tracep->chgBit(oldp+194,((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_wen) 
                                       & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_wen)) 
                                      & ((vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                          >> 0x14U) 
                                         == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr)))));
            tracep->chgCData(oldp+195,((vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+196,((0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)),7);
            tracep->chgCData(oldp+197,((7U & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+198,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immS),12);
            tracep->chgSData(oldp+199,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immB),13);
            tracep->chgIData(oldp+200,((0xfffff000U 
                                        & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)),32);
            tracep->chgIData(oldp+201,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immJ),21);
            tracep->chgBit(oldp+202,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI));
            tracep->chgBit(oldp+203,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR));
            tracep->chgBit(oldp+204,((0x63U == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+205,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU));
            tracep->chgBit(oldp+206,((0x6fU == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+207,((0x73U == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+208,((0x37U == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+209,((0x17U == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+210,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR));
            tracep->chgBit(oldp+211,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LD));
            tracep->chgBit(oldp+212,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LW));
            tracep->chgBit(oldp+213,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LWU));
            tracep->chgBit(oldp+214,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LH));
            tracep->chgBit(oldp+215,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LHU));
            tracep->chgBit(oldp+216,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LB));
            tracep->chgBit(oldp+217,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+218,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+219,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+220,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+221,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+222,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+223,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+224,((IData)(((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+225,((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+226,((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x10U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+227,((IData)((0x1bU 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+228,((IData)(((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+229,((IData)(((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+230,((IData)(((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+231,((IData)(((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+232,((IData)(((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+233,((IData)(((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+234,((IData)(((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+235,((IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+236,((IData)(((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+237,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+238,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+239,((IData)(((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+240,((IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+241,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL));
            tracep->chgBit(oldp+242,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH));
            tracep->chgBit(oldp+243,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU));
            tracep->chgBit(oldp+244,((IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+245,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV));
            tracep->chgBit(oldp+246,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+247,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM));
            tracep->chgBit(oldp+248,((IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+249,((IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+250,((IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+251,((IData)(((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+252,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+253,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+254,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW));
            tracep->chgBit(oldp+255,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIVW));
            tracep->chgBit(oldp+256,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+257,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REMW));
            tracep->chgBit(oldp+258,((IData)(((0x703bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+259,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+260,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+261,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+262,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+263,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+264,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+265,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+266,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+267,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+268,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+269,((0x73U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
            tracep->chgBit(oldp+270,((0x100073U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
            tracep->chgBit(oldp+271,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRW));
            tracep->chgBit(oldp+272,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRS));
            tracep->chgBit(oldp+273,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRC));
            tracep->chgBit(oldp+274,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRWI));
            tracep->chgBit(oldp+275,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRSI));
            tracep->chgBit(oldp+276,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRCI));
            tracep->chgBit(oldp+277,((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRW) 
                                       | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRS)) 
                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRC))));
            tracep->chgBit(oldp+278,((3U == (0x7fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+279,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeB_jr));
            tracep->chgBit(oldp+280,((((0x73U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst) 
                                       | (0x100073U 
                                          == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                      | (0x30200073U 
                                         == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+281,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__eq));
            tracep->chgBit(oldp+282,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__eq)))));
            tracep->chgBit(oldp+283,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__lt));
            tracep->chgBit(oldp+284,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__lt)))));
            tracep->chgBit(oldp+285,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__ltu));
            tracep->chgBit(oldp+286,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__ltu)))));
            tracep->chgBit(oldp+287,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__add_flag));
            tracep->chgBit(oldp+288,(((IData)(((0x33U 
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
            tracep->chgBit(oldp+289,(((IData)((0x2013U 
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
            tracep->chgBit(oldp+290,(((IData)((0x3013U 
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
            tracep->chgBit(oldp+291,(((IData)((0x4013U 
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
            tracep->chgBit(oldp+292,(((IData)((0x6013U 
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
            tracep->chgBit(oldp+293,(((IData)((0x7013U 
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
            tracep->chgBit(oldp+294,(((((IData)(((0x1013U 
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
            tracep->chgBit(oldp+295,(((((IData)(((0x5013U 
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
            tracep->chgBit(oldp+296,(((((IData)(((0x5013U 
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
            tracep->chgBit(oldp+297,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL) 
                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW))));
            tracep->chgBit(oldp+298,((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH) 
                                       | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                      | (IData)(((0x3033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                 & (1U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+299,(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV) 
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
            tracep->chgBit(oldp+300,(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM) 
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
            tracep->chgBit(oldp+301,(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR) 
                                        | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI) 
                                           & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR)))) 
                                       | (0x23U == 
                                          (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                      | (0x73U == (0x7fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+302,(((((0x63U == (0x7fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                        | (0x6fU == 
                                           (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                       | (0x17U == 
                                          (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR))));
            tracep->chgBit(oldp+303,((((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI) 
                                         & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR))) 
                                        | (0x23U == 
                                           (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                       | (0x63U == 
                                          (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU))));
            tracep->chgBit(oldp+304,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgWData(oldp+305,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+311,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+313,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+315,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgWData(oldp+317,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+323,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+325,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+327,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgBit(oldp+329,((1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))));
            tracep->chgBit(oldp+330,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+331,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+332,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+333,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 4U))));
            tracep->chgBit(oldp+334,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 5U))));
            tracep->chgBit(oldp+335,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 6U))));
            tracep->chgBit(oldp+336,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 7U))));
            tracep->chgBit(oldp+337,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 8U))));
            tracep->chgBit(oldp+338,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 9U))));
            tracep->chgBit(oldp+339,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+340,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+341,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+342,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+343,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xeU))));
            tracep->chgQData(oldp+344,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp298, vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp299, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp300, __Vtemp298, __Vtemp299);
            VL_EXTEND_WQ(65,64, __Vtemp301, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__cin);
            VL_ADD_W(3, __Vtemp302, __Vtemp300, __Vtemp301);
            tracep->chgQData(oldp+346,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp302[2U])))))),64);
            tracep->chgQData(oldp+348,((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                        ^ vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+350,((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                        | vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+352,((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                        & vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+354,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
                                                               >> 0x20U))))
                                         : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result)),64);
            tracep->chgQData(oldp+356,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result),64);
            tracep->chgQData(oldp+358,((((- (QData)((IData)(
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
                                                   >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt)))
                                             : (~ (0xffffffffffffffffULL 
                                                   >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt))))) 
                                        | vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)),64);
            tracep->chgQData(oldp+360,((((QData)((IData)(
                                                         vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U])))),64);
            tracep->chgQData(oldp+362,((((QData)((IData)(
                                                         vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U])))),64);
            tracep->chgQData(oldp+364,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result),64);
            tracep->chgQData(oldp+366,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result),64);
            tracep->chgWData(oldp+368,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext),65);
            tracep->chgWData(oldp+371,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext),65);
            tracep->chgBit(oldp+374,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                             ? (IData)(
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+375,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                             ? (IData)(
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+376,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1));
            tracep->chgBit(oldp+377,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext2));
            tracep->chgBit(oldp+378,((IData)((0U != 
                                              (0xc00U 
                                               & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))))));
            tracep->chgBit(oldp+379,((IData)((0U != 
                                              (0x3000U 
                                               & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))))));
            tracep->chgBit(oldp+380,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid));
            tracep->chgBit(oldp+381,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid));
            tracep->chgBit(oldp+382,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid));
            tracep->chgBit(oldp+383,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_out_valid));
            tracep->chgQData(oldp+384,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg),64);
            tracep->chgQData(oldp+386,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg),64);
            tracep->chgQData(oldp+388,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg),64);
            tracep->chgQData(oldp+390,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg),64);
            tracep->chgBit(oldp+392,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid));
            tracep->chgBit(oldp+393,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid));
            tracep->chgQData(oldp+394,((((QData)((IData)(
                                                         ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                           ? (IData)(
                                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg 
                                                                      >> 0x20U))
                                                           : 
                                                          vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                            ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg)
                                                            : 
                                                           vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U]))))),64);
            tracep->chgQData(oldp+396,((((QData)((IData)(
                                                         ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                           ? (IData)(
                                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg 
                                                                      >> 0x20U))
                                                           : 
                                                          vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                            ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg)
                                                            : 
                                                           vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U]))))),64);
            tracep->chgQData(oldp+398,((((QData)((IData)(
                                                         ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                           ? (IData)(
                                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg 
                                                                      >> 0x20U))
                                                           : (IData)(
                                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result 
                                                                      >> 0x20U))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                            ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg)
                                                            : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result)))))),64);
            tracep->chgQData(oldp+400,((((QData)((IData)(
                                                         ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                           ? (IData)(
                                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg 
                                                                      >> 0x20U))
                                                           : (IData)(
                                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result 
                                                                      >> 0x20U))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                            ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg)
                                                            : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result)))))),64);
            tracep->chgQData(oldp+402,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2),64);
            tracep->chgQData(oldp+404,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__cin),64);
            VL_EXTEND_WQ(65,64, __Vtemp317, vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp318, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp319, __Vtemp317, __Vtemp318);
            VL_EXTEND_WQ(65,64, __Vtemp320, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__cin);
            VL_ADD_W(3, __Vtemp321, __Vtemp319, __Vtemp320);
            tracep->chgBit(oldp+406,((1U & __Vtemp321[2U])));
            tracep->chgQData(oldp+407,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1),64);
            tracep->chgQData(oldp+409,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op),64);
            tracep->chgCData(oldp+411,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt),6);
            tracep->chgQData(oldp+412,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                         ? (~ (0xffffffffULL 
                                               >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt)))
                                         : (~ (0xffffffffffffffffULL 
                                               >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt))))),64);
            tracep->chgIData(oldp+414,(((0x80U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))
                                         ? (IData)(
                                                   (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op))),32);
            tracep->chgQData(oldp+415,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                         ? (QData)((IData)(
                                                           ((0x80U 
                                                             & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))
                                                             ? (IData)(
                                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op 
                                                                        >> 0x20U))
                                                             : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op))))
                                         : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op)),64);
            tracep->chgQData(oldp+417,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
                                                           >> 0x20U))))),64);
            tracep->chgQData(oldp+419,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result),64);
            tracep->chgQData(oldp+421,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result),64);
            tracep->chgQData(oldp+423,((((QData)((IData)(
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
                                        | (QData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result)))),64);
            tracep->chgBit(oldp+425,(((1U & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x3000U 
                                                       & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel)))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_sext))))))
                                       ? 0U : (1U & (IData)(
                                                            (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result 
                                                             >> 0x1fU))))));
            tracep->chgQData(oldp+426,((((QData)((IData)(
                                                         vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U])))),64);
            tracep->chgQData(oldp+428,((((QData)((IData)(
                                                         vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[0U])))),64);
            __Vtemp323[0U] = vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U];
            __Vtemp323[1U] = vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U];
            __Vtemp323[2U] = vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U];
            __Vtemp323[3U] = vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U];
            tracep->chgWData(oldp+430,(__Vtemp323),128);
            tracep->chgBit(oldp+434,(((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U] 
                                       >> 0x1fU) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))));
            tracep->chgBit(oldp+435,(((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U] 
                                       >> 0x1fU) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))));
            tracep->chgWData(oldp+436,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1),67);
            tracep->chgWData(oldp+439,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2),132);
            __Vtemp349[0U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                    & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]))) 
                                & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                      & (1U | ((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]) 
                                               << 1U))))) 
                               & (~ ((- (IData)((1U 
                                                 & ((~ 
                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
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
                              & (~ ((- (IData)((1U 
                                                & (((~ 
                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 2U)) 
                                                    & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                    & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] 
                                       << 1U))));
            __Vtemp349[1U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                    & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]))) 
                                & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                      & (((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]) 
                                          >> 0x1fU) 
                                         | ((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]) 
                                            << 1U))))) 
                               & (~ ((- (IData)((1U 
                                                 & ((~ 
                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
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
                              & (~ ((- (IData)((1U 
                                                & (((~ 
                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 2U)) 
                                                    & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                    & ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] 
                                        >> 0x1fU) | 
                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U] 
                                        << 1U)))));
            __Vtemp349[2U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                    & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]))) 
                                & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                      & (((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]) 
                                          >> 0x1fU) 
                                         | ((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]) 
                                            << 1U))))) 
                               & (~ ((- (IData)((1U 
                                                 & ((~ 
                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
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
                              & (~ ((- (IData)((1U 
                                                & (((~ 
                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 2U)) 
                                                    & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                    & ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U] 
                                        >> 0x1fU) | 
                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U] 
                                        << 1U)))));
            __Vtemp349[3U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                    & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]))) 
                                & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                      & (((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]) 
                                          >> 0x1fU) 
                                         | ((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]) 
                                            << 1U))))) 
                               & (~ ((- (IData)((1U 
                                                 & ((~ 
                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
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
                              & (~ ((- (IData)((1U 
                                                & (((~ 
                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 2U)) 
                                                    & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                    & ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U] 
                                        >> 0x1fU) | 
                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U] 
                                        << 1U)))));
            __Vtemp349[4U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                    & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U]))) 
                                & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                      & (((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]) 
                                          >> 0x1fU) 
                                         | (0xeU & 
                                            ((~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U]) 
                                             << 1U)))))) 
                               & (~ ((- (IData)((1U 
                                                 & ((~ 
                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
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
                              & (~ ((- (IData)((1U 
                                                & (((~ 
                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 2U)) 
                                                    & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                    & ((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U] 
                                        >> 0x1fU) | 
                                       (0xeU & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U] 
                                                << 1U))))));
            __Vtemp351[0U] = (~ __Vtemp349[0U]);
            __Vtemp351[1U] = (~ __Vtemp349[1U]);
            __Vtemp351[2U] = (~ __Vtemp349[2U]);
            __Vtemp351[3U] = (~ __Vtemp349[3U]);
            __Vtemp351[4U] = (0xfU & (~ __Vtemp349[4U]));
            tracep->chgWData(oldp+444,(__Vtemp351),132);
            tracep->chgBit(oldp+449,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative) 
                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))));
            tracep->chgWData(oldp+450,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result),132);
            tracep->chgCData(oldp+455,((7U & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])),3);
            tracep->chgWData(oldp+456,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S),132);
            tracep->chgBit(oldp+461,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process));
            tracep->chgCData(oldp+462,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__iter_cnt),6);
            tracep->chgBit(oldp+463,((1U & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+464,((1U & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+465,((1U & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])));
            tracep->chgBit(oldp+466,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative));
            tracep->chgBit(oldp+467,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative));
            tracep->chgBit(oldp+468,((1U & ((~ (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                >> 2U)) 
                                            & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                               | ((~ 
                                                   (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U]))))));
            tracep->chgBit(oldp+469,((1U & (((~ (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                 >> 2U)) 
                                             & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                >> 1U)) 
                                            & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U]))));
            tracep->chgWData(oldp+470,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend),128);
            tracep->chgWData(oldp+474,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor),128);
            tracep->chgWData(oldp+478,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result),128);
            tracep->chgBit(oldp+482,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q));
            tracep->chgBit(oldp+483,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag));
            tracep->chgBit(oldp+484,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag));
            tracep->chgBit(oldp+485,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag) 
                                      ^ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag))));
            tracep->chgQData(oldp+486,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_quotient),64);
            tracep->chgBit(oldp+488,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process));
            tracep->chgCData(oldp+489,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt),6);
            tracep->chgBit(oldp+490,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel) 
                                            >> 5U))));
            tracep->chgBit(oldp+491,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+492,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel) 
                                            >> 4U))));
            tracep->chgBit(oldp+493,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+494,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+495,((1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel))));
            tracep->chgBit(oldp+496,((IData)((0U != 
                                              (0x24U 
                                               & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel))))));
            tracep->chgBit(oldp+497,((IData)((0U != 
                                              (0x12U 
                                               & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel))))));
            tracep->chgBit(oldp+498,((IData)((0U != 
                                              (9U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel))))));
            tracep->chgBit(oldp+499,((0U != (7U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel) 
                                                   >> 3U)))));
            tracep->chgBit(oldp+500,((0U != (7U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel)))));
            tracep->chgQData(oldp+501,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__csr_alu_e__DOT__op),64);
            tracep->chgQData(oldp+503,((vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr 
                                        | vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__csr_alu_e__DOT__op)),64);
            tracep->chgQData(oldp+505,((vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr 
                                        & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__csr_alu_e__DOT__op))),64);
            tracep->chgBit(oldp+507,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                            >> 8U))));
            tracep->chgBit(oldp+508,((1U & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
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
            tracep->chgCData(oldp+509,((0xffU & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb)))),8);
            tracep->chgQData(oldp+510,(vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data),64);
            tracep->chgWData(oldp+512,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_2sel__I_sel_data),128);
            tracep->chgCData(oldp+516,((3U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_regin_sel))),2);
            tracep->chgQData(oldp+517,(vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_2sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+519,(vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_2sel__DOT__sel_data[1]),64);
            tracep->chgBit(oldp+521,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen));
            tracep->chgQData(oldp+522,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0]),64);
            tracep->chgQData(oldp+524,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[1]),64);
            tracep->chgQData(oldp+526,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[2]),64);
            tracep->chgQData(oldp+528,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[3]),64);
            tracep->chgQData(oldp+530,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[4]),64);
            tracep->chgQData(oldp+532,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[5]),64);
            tracep->chgQData(oldp+534,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[6]),64);
            tracep->chgQData(oldp+536,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[7]),64);
            tracep->chgQData(oldp+538,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[8]),64);
            tracep->chgQData(oldp+540,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[9]),64);
            tracep->chgQData(oldp+542,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[10]),64);
            tracep->chgQData(oldp+544,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[11]),64);
            tracep->chgQData(oldp+546,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[12]),64);
            tracep->chgQData(oldp+548,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[13]),64);
            tracep->chgQData(oldp+550,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[14]),64);
            tracep->chgQData(oldp+552,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[15]),64);
            tracep->chgQData(oldp+554,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[16]),64);
            tracep->chgQData(oldp+556,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[17]),64);
            tracep->chgQData(oldp+558,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[18]),64);
            tracep->chgQData(oldp+560,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[19]),64);
            tracep->chgQData(oldp+562,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[20]),64);
            tracep->chgQData(oldp+564,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[21]),64);
            tracep->chgQData(oldp+566,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[22]),64);
            tracep->chgQData(oldp+568,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[23]),64);
            tracep->chgQData(oldp+570,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[24]),64);
            tracep->chgQData(oldp+572,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[25]),64);
            tracep->chgQData(oldp+574,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[26]),64);
            tracep->chgQData(oldp+576,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[27]),64);
            tracep->chgQData(oldp+578,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[28]),64);
            tracep->chgQData(oldp+580,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[29]),64);
            tracep->chgQData(oldp+582,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[30]),64);
            tracep->chgQData(oldp+584,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[31]),64);
            tracep->chgBit(oldp+586,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0]));
            tracep->chgBit(oldp+587,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[1]));
            tracep->chgBit(oldp+588,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[2]));
            tracep->chgBit(oldp+589,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[3]));
            tracep->chgBit(oldp+590,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[4]));
            tracep->chgBit(oldp+591,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[5]));
            tracep->chgBit(oldp+592,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[6]));
            tracep->chgBit(oldp+593,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[7]));
            tracep->chgBit(oldp+594,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[8]));
            tracep->chgBit(oldp+595,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[9]));
            tracep->chgBit(oldp+596,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[10]));
            tracep->chgBit(oldp+597,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[11]));
            tracep->chgBit(oldp+598,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[12]));
            tracep->chgBit(oldp+599,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[13]));
            tracep->chgBit(oldp+600,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[14]));
            tracep->chgBit(oldp+601,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[15]));
            tracep->chgBit(oldp+602,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[16]));
            tracep->chgBit(oldp+603,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[17]));
            tracep->chgBit(oldp+604,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[18]));
            tracep->chgBit(oldp+605,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[19]));
            tracep->chgBit(oldp+606,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[20]));
            tracep->chgBit(oldp+607,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[21]));
            tracep->chgBit(oldp+608,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[22]));
            tracep->chgBit(oldp+609,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[23]));
            tracep->chgBit(oldp+610,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[24]));
            tracep->chgBit(oldp+611,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[25]));
            tracep->chgBit(oldp+612,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[26]));
            tracep->chgBit(oldp+613,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[27]));
            tracep->chgBit(oldp+614,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[28]));
            tracep->chgBit(oldp+615,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[29]));
            tracep->chgBit(oldp+616,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[30]));
            tracep->chgBit(oldp+617,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[31]));
            tracep->chgQData(oldp+618,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mepc),64);
            tracep->chgQData(oldp+620,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus),64);
            tracep->chgQData(oldp+622,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mtvec),64);
            tracep->chgQData(oldp+624,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mcause),64);
            tracep->chgQData(oldp+626,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mscratch),64);
            tracep->chgBit(oldp+628,((1U & (IData)(
                                                   (vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus 
                                                    >> 3U)))));
            tracep->chgBit(oldp+629,((1U & (IData)(
                                                   (vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus 
                                                    >> 7U)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+630,(vlSelf->ysyx_22040750_cpu_top__DOT__current_inst),32);
            tracep->chgBit(oldp+631,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_valid));
            tracep->chgBit(oldp+632,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin));
            tracep->chgBit(oldp+633,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin));
            tracep->chgBit(oldp+634,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid));
            tracep->chgBit(oldp+635,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin));
            tracep->chgBit(oldp+636,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_ready_go));
            tracep->chgBit(oldp+637,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__output_valid));
        }
        tracep->chgBit(oldp+638,(vlSelf->I_sys_clk));
        tracep->chgBit(oldp+639,(vlSelf->I_rst));
        tracep->chgIData(oldp+640,(vlSelf->I_inst),32);
        tracep->chgBit(oldp+641,(vlSelf->I_inst_valid));
        tracep->chgBit(oldp+642,(vlSelf->I_inst_addr_ready));
        tracep->chgQData(oldp+643,(vlSelf->O_pc),64);
        tracep->chgBit(oldp+645,(vlSelf->O_pc_valid));
        tracep->chgQData(oldp+646,(vlSelf->O_mem_addr),64);
        tracep->chgBit(oldp+648,(vlSelf->O_mem_rd_en));
        tracep->chgBit(oldp+649,(vlSelf->O_mem_wen));
        tracep->chgQData(oldp+650,(vlSelf->I_mem_rd_data),64);
        tracep->chgBit(oldp+652,(vlSelf->I_mem_rd_data_valid));
        tracep->chgBit(oldp+653,(vlSelf->I_mem_wr_data_valid));
        tracep->chgQData(oldp+654,(vlSelf->O_mem_wr_data),64);
        tracep->chgCData(oldp+656,(vlSelf->O_mem_wr_strb),8);
        tracep->chgBit(oldp+657,((1U & ((~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_valid)) 
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
