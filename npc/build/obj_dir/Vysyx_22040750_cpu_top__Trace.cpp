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
    VlWide<3>/*95:0*/ __Vtemp296;
    VlWide<3>/*95:0*/ __Vtemp297;
    VlWide<3>/*95:0*/ __Vtemp298;
    VlWide<3>/*95:0*/ __Vtemp299;
    VlWide<3>/*95:0*/ __Vtemp300;
    VlWide<3>/*95:0*/ __Vtemp315;
    VlWide<3>/*95:0*/ __Vtemp316;
    VlWide<3>/*95:0*/ __Vtemp317;
    VlWide<3>/*95:0*/ __Vtemp318;
    VlWide<3>/*95:0*/ __Vtemp319;
    VlWide<4>/*127:0*/ __Vtemp321;
    VlWide<5>/*159:0*/ __Vtemp347;
    VlWide<5>/*159:0*/ __Vtemp349;
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
            tracep->chgQData(oldp+104,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_pc),64);
            tracep->chgBit(oldp+106,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen));
            tracep->chgCData(oldp+107,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr),5);
            tracep->chgCData(oldp+108,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel),3);
            tracep->chgCData(oldp+109,((7U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr))),3);
            tracep->chgCData(oldp+110,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall),2);
            tracep->chgIData(oldp+111,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_inst),32);
            tracep->chgBit(oldp+112,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_bubble));
            tracep->chgBit(oldp+113,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid));
            tracep->chgSData(oldp+114,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_addr),12);
            tracep->chgBit(oldp+115,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_wen));
            tracep->chgBit(oldp+116,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_intr));
            tracep->chgBit(oldp+117,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_mret));
            tracep->chgQData(oldp+118,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_intr_no),64);
            tracep->chgQData(oldp+120,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_pc),64);
            tracep->chgBit(oldp+122,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid));
            tracep->chgQData(oldp+123,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_data),64);
            tracep->chgSData(oldp+125,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb),9);
            tracep->chgQData(oldp+126,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_alu_out),64);
            tracep->chgQData(oldp+128,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr),64);
            tracep->chgBit(oldp+130,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_wen));
            tracep->chgCData(oldp+131,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr),5);
            tracep->chgCData(oldp+132,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_regin_sel),3);
            tracep->chgCData(oldp+133,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_shamt),3);
            tracep->chgBit(oldp+134,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin));
            tracep->chgIData(oldp+135,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_inst),32);
            tracep->chgBit(oldp+136,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_bubble));
            tracep->chgCData(oldp+137,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_stall),2);
            tracep->chgSData(oldp+138,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr),12);
            tracep->chgBit(oldp+139,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_wen));
            tracep->chgBit(oldp+140,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr));
            tracep->chgBit(oldp+141,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_mret));
            tracep->chgQData(oldp+142,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_intr_no),64);
            tracep->chgCData(oldp+144,(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en),2);
            tracep->chgQData(oldp+145,(vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data),64);
            tracep->chgQData(oldp+147,(vlSelf->ysyx_22040750_cpu_top__DOT__rs2_forward_data),64);
            tracep->chgQData(oldp+149,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_forward_data),64);
            tracep->chgBit(oldp+151,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__mem_rd_en) 
                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_wen))));
            tracep->chgBit(oldp+152,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_op));
            tracep->chgQData(oldp+153,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_addr),64);
            tracep->chgQData(oldp+155,(((8U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))
                                         ? vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data
                                         : vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc)),64);
            tracep->chgQData(oldp+157,((vlSelf->ysyx_22040750_cpu_top__DOT__imm 
                                        + ((8U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))
                                            ? vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data
                                            : vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc))),64);
            tracep->chgQData(oldp+159,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__dnpc),64);
            tracep->chgBit(oldp+161,((1U & (~ ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel) 
                                               | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel) 
                                                  >> 4U))))));
            tracep->chgBit(oldp+162,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel) 
                                            >> 4U))));
            tracep->chgWData(oldp+163,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data),192);
            tracep->chgCData(oldp+169,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel),3);
            tracep->chgQData(oldp+170,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+172,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+174,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgBit(oldp+176,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_valid));
            tracep->chgBit(oldp+177,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_en));
            tracep->chgIData(oldp+178,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__inst_cache),32);
            tracep->chgBit(oldp+179,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__cache_valid));
            tracep->chgBit(oldp+180,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel)))));
            tracep->chgBit(oldp+181,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_stall)))));
            tracep->chgBit(oldp+182,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+183,((0U != (0xfU & 
                                             ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                              >> 0xaU)))));
            tracep->chgBit(oldp+184,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel) 
                                            >> 1U))));
            tracep->chgCData(oldp+185,(((0xfffffffeU 
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
            tracep->chgCData(oldp+186,(((0xfffffffeU 
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
            tracep->chgCData(oldp+187,(((0xfffffffeU 
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
            tracep->chgBit(oldp+188,((((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall)) 
                                       & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel) 
                                          >> 1U)) | 
                                      ((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall)) 
                                       & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel) 
                                          >> 1U)))));
            tracep->chgBit(oldp+189,(((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall)) 
                                      & (0U != (0xfU 
                                                & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+190,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__forward_unit_e__I_WB_reg_wen));
            tracep->chgBit(oldp+191,((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_wen) 
                                       & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_wen)) 
                                      & ((vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                          >> 0x14U) 
                                         == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_addr)))));
            tracep->chgBit(oldp+192,((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_wen) 
                                       & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_wen)) 
                                      & ((vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                          >> 0x14U) 
                                         == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_csr_addr)))));
            tracep->chgBit(oldp+193,((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__csr_wen) 
                                       & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_wen)) 
                                      & ((vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                          >> 0x14U) 
                                         == (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_csr_addr)))));
            tracep->chgCData(oldp+194,((vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+195,((0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)),7);
            tracep->chgCData(oldp+196,((7U & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+197,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immS),12);
            tracep->chgSData(oldp+198,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immB),13);
            tracep->chgIData(oldp+199,((0xfffff000U 
                                        & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)),32);
            tracep->chgIData(oldp+200,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immJ),21);
            tracep->chgBit(oldp+201,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI));
            tracep->chgBit(oldp+202,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR));
            tracep->chgBit(oldp+203,((0x63U == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+204,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU));
            tracep->chgBit(oldp+205,((0x6fU == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+206,((0x73U == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+207,((0x37U == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+208,((0x17U == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+209,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR));
            tracep->chgBit(oldp+210,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LD));
            tracep->chgBit(oldp+211,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LW));
            tracep->chgBit(oldp+212,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LWU));
            tracep->chgBit(oldp+213,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LH));
            tracep->chgBit(oldp+214,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LHU));
            tracep->chgBit(oldp+215,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LB));
            tracep->chgBit(oldp+216,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+217,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+218,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+219,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+220,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+221,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+222,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+223,((IData)(((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+224,((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+225,((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x10U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+226,((IData)((0x1bU 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+227,((IData)(((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+228,((IData)(((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+229,((IData)(((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+230,((IData)(((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+231,((IData)(((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+232,((IData)(((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+233,((IData)(((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+234,((IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+235,((IData)(((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+236,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+237,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+238,((IData)(((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+239,((IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+240,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL));
            tracep->chgBit(oldp+241,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH));
            tracep->chgBit(oldp+242,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU));
            tracep->chgBit(oldp+243,((IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+244,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV));
            tracep->chgBit(oldp+245,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+246,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM));
            tracep->chgBit(oldp+247,((IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+248,((IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+249,((IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+250,((IData)(((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+251,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+252,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+253,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW));
            tracep->chgBit(oldp+254,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIVW));
            tracep->chgBit(oldp+255,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+256,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REMW));
            tracep->chgBit(oldp+257,((IData)(((0x703bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+258,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+259,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+260,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+261,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+262,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+263,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+264,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+265,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+266,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+267,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+268,((0x73U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
            tracep->chgBit(oldp+269,((0x100073U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
            tracep->chgBit(oldp+270,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRW));
            tracep->chgBit(oldp+271,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRS));
            tracep->chgBit(oldp+272,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRC));
            tracep->chgBit(oldp+273,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRWI));
            tracep->chgBit(oldp+274,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRSI));
            tracep->chgBit(oldp+275,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRCI));
            tracep->chgBit(oldp+276,((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRW) 
                                       | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRS)) 
                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__CSRRC))));
            tracep->chgBit(oldp+277,((3U == (0x7fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+278,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeB_jr));
            tracep->chgBit(oldp+279,((((0x73U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst) 
                                       | (0x100073U 
                                          == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                      | (0x30200073U 
                                         == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+280,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__eq));
            tracep->chgBit(oldp+281,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__eq)))));
            tracep->chgBit(oldp+282,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__lt));
            tracep->chgBit(oldp+283,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__lt)))));
            tracep->chgBit(oldp+284,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__ltu));
            tracep->chgBit(oldp+285,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__ltu)))));
            tracep->chgBit(oldp+286,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__add_flag));
            tracep->chgBit(oldp+287,(((IData)(((0x33U 
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
            tracep->chgBit(oldp+288,(((IData)((0x2013U 
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
            tracep->chgBit(oldp+289,(((IData)((0x3013U 
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
            tracep->chgBit(oldp+290,(((IData)((0x4013U 
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
            tracep->chgBit(oldp+291,(((IData)((0x6013U 
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
            tracep->chgBit(oldp+292,(((IData)((0x7013U 
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
            tracep->chgBit(oldp+293,(((((IData)(((0x1013U 
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
            tracep->chgBit(oldp+294,(((((IData)(((0x5013U 
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
            tracep->chgBit(oldp+295,(((((IData)(((0x5013U 
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
            tracep->chgBit(oldp+296,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL) 
                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW))));
            tracep->chgBit(oldp+297,((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH) 
                                       | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                      | (IData)(((0x3033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                 & (1U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+298,(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV) 
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
            tracep->chgBit(oldp+299,(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM) 
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
            tracep->chgBit(oldp+300,(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR) 
                                        | ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI) 
                                           & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR)))) 
                                       | (0x23U == 
                                          (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                      | (0x73U == (0x7fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+301,(((((0x63U == (0x7fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                        | (0x6fU == 
                                           (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                       | (0x17U == 
                                          (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR))));
            tracep->chgBit(oldp+302,((((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI) 
                                         & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR))) 
                                        | (0x23U == 
                                           (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                       | (0x63U == 
                                          (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU))));
            tracep->chgBit(oldp+303,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgWData(oldp+304,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+310,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+312,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+314,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgWData(oldp+316,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+322,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+324,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+326,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgBit(oldp+328,((1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))));
            tracep->chgBit(oldp+329,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+330,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+331,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+332,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 4U))));
            tracep->chgBit(oldp+333,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 5U))));
            tracep->chgBit(oldp+334,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 6U))));
            tracep->chgBit(oldp+335,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 7U))));
            tracep->chgBit(oldp+336,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 8U))));
            tracep->chgBit(oldp+337,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 9U))));
            tracep->chgBit(oldp+338,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+339,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+340,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+341,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+342,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xeU))));
            tracep->chgQData(oldp+343,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp296, vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp297, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp298, __Vtemp296, __Vtemp297);
            VL_EXTEND_WQ(65,64, __Vtemp299, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__cin);
            VL_ADD_W(3, __Vtemp300, __Vtemp298, __Vtemp299);
            tracep->chgQData(oldp+345,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp300[2U])))))),64);
            tracep->chgQData(oldp+347,((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                        ^ vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+349,((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                        | vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+351,((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                        & vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+353,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
                                                               >> 0x20U))))
                                         : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result)),64);
            tracep->chgQData(oldp+355,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result),64);
            tracep->chgQData(oldp+357,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+359,((((QData)((IData)(
                                                         vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U])))),64);
            tracep->chgQData(oldp+361,((((QData)((IData)(
                                                         vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U])))),64);
            tracep->chgQData(oldp+363,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result),64);
            tracep->chgQData(oldp+365,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result),64);
            tracep->chgWData(oldp+367,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext),65);
            tracep->chgWData(oldp+370,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext),65);
            tracep->chgBit(oldp+373,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                             ? (IData)(
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+374,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                             ? (IData)(
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+375,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1));
            tracep->chgBit(oldp+376,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext2));
            tracep->chgBit(oldp+377,((IData)((0U != 
                                              (0xc00U 
                                               & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))))));
            tracep->chgBit(oldp+378,((IData)((0U != 
                                              (0x3000U 
                                               & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))))));
            tracep->chgBit(oldp+379,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid));
            tracep->chgBit(oldp+380,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid));
            tracep->chgBit(oldp+381,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid));
            tracep->chgBit(oldp+382,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_out_valid));
            tracep->chgQData(oldp+383,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg),64);
            tracep->chgQData(oldp+385,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg),64);
            tracep->chgQData(oldp+387,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg),64);
            tracep->chgQData(oldp+389,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg),64);
            tracep->chgBit(oldp+391,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid));
            tracep->chgBit(oldp+392,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid));
            tracep->chgQData(oldp+393,((((QData)((IData)(
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
            tracep->chgQData(oldp+395,((((QData)((IData)(
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
            tracep->chgQData(oldp+397,((((QData)((IData)(
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
            tracep->chgQData(oldp+399,((((QData)((IData)(
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
            tracep->chgQData(oldp+401,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2),64);
            tracep->chgQData(oldp+403,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__cin),64);
            VL_EXTEND_WQ(65,64, __Vtemp315, vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp316, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp317, __Vtemp315, __Vtemp316);
            VL_EXTEND_WQ(65,64, __Vtemp318, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__cin);
            VL_ADD_W(3, __Vtemp319, __Vtemp317, __Vtemp318);
            tracep->chgBit(oldp+405,((1U & __Vtemp319[2U])));
            tracep->chgQData(oldp+406,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1),64);
            tracep->chgQData(oldp+408,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op),64);
            tracep->chgCData(oldp+410,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt),6);
            tracep->chgQData(oldp+411,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                         ? (~ (0xffffffffULL 
                                               >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt)))
                                         : (~ (0xffffffffffffffffULL 
                                               >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt))))),64);
            tracep->chgIData(oldp+413,(((0x80U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))
                                         ? (IData)(
                                                   (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op))),32);
            tracep->chgQData(oldp+414,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                         ? (QData)((IData)(
                                                           ((0x80U 
                                                             & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))
                                                             ? (IData)(
                                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op 
                                                                        >> 0x20U))
                                                             : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op))))
                                         : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op)),64);
            tracep->chgQData(oldp+416,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
                                                           >> 0x20U))))),64);
            tracep->chgQData(oldp+418,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result),64);
            tracep->chgQData(oldp+420,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result),64);
            tracep->chgQData(oldp+422,((((QData)((IData)(
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
            tracep->chgBit(oldp+424,(((1U & ((IData)(
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
            tracep->chgQData(oldp+425,((((QData)((IData)(
                                                         vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U])))),64);
            tracep->chgQData(oldp+427,((((QData)((IData)(
                                                         vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[0U])))),64);
            __Vtemp321[0U] = vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U];
            __Vtemp321[1U] = vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U];
            __Vtemp321[2U] = vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U];
            __Vtemp321[3U] = vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U];
            tracep->chgWData(oldp+429,(__Vtemp321),128);
            tracep->chgBit(oldp+433,(((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U] 
                                       >> 0x1fU) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))));
            tracep->chgBit(oldp+434,(((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U] 
                                       >> 0x1fU) & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))));
            tracep->chgWData(oldp+435,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1),67);
            tracep->chgWData(oldp+438,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2),132);
            __Vtemp347[0U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
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
            __Vtemp347[1U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
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
            __Vtemp347[2U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
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
            __Vtemp347[3U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
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
            __Vtemp347[4U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
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
            __Vtemp349[0U] = (~ __Vtemp347[0U]);
            __Vtemp349[1U] = (~ __Vtemp347[1U]);
            __Vtemp349[2U] = (~ __Vtemp347[2U]);
            __Vtemp349[3U] = (~ __Vtemp347[3U]);
            __Vtemp349[4U] = (0xfU & (~ __Vtemp347[4U]));
            tracep->chgWData(oldp+443,(__Vtemp349),132);
            tracep->chgBit(oldp+448,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative) 
                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))));
            tracep->chgWData(oldp+449,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result),132);
            tracep->chgCData(oldp+454,((7U & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])),3);
            tracep->chgWData(oldp+455,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S),132);
            tracep->chgBit(oldp+460,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process));
            tracep->chgCData(oldp+461,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__iter_cnt),6);
            tracep->chgBit(oldp+462,((1U & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+463,((1U & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+464,((1U & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])));
            tracep->chgBit(oldp+465,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative));
            tracep->chgBit(oldp+466,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative));
            tracep->chgBit(oldp+467,((1U & ((~ (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                >> 2U)) 
                                            & (((vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                               | ((~ 
                                                   (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U]))))));
            tracep->chgBit(oldp+468,((1U & (((~ (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                 >> 2U)) 
                                             & (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                >> 1U)) 
                                            & vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U]))));
            tracep->chgWData(oldp+469,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend),128);
            tracep->chgWData(oldp+473,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor),128);
            tracep->chgWData(oldp+477,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result),128);
            tracep->chgBit(oldp+481,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q));
            tracep->chgBit(oldp+482,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag));
            tracep->chgBit(oldp+483,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag));
            tracep->chgBit(oldp+484,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag) 
                                      ^ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag))));
            tracep->chgQData(oldp+485,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_quotient),64);
            tracep->chgBit(oldp+487,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process));
            tracep->chgCData(oldp+488,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt),6);
            tracep->chgBit(oldp+489,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel) 
                                            >> 5U))));
            tracep->chgBit(oldp+490,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+491,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel) 
                                            >> 4U))));
            tracep->chgBit(oldp+492,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+493,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+494,((1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel))));
            tracep->chgBit(oldp+495,((IData)((0U != 
                                              (0x24U 
                                               & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel))))));
            tracep->chgBit(oldp+496,((IData)((0U != 
                                              (0x12U 
                                               & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel))))));
            tracep->chgBit(oldp+497,((IData)((0U != 
                                              (9U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel))))));
            tracep->chgBit(oldp+498,((0U != (7U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel) 
                                                   >> 3U)))));
            tracep->chgBit(oldp+499,((0U != (7U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr_op_sel)))));
            tracep->chgQData(oldp+500,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__csr_alu_e__DOT__op),64);
            tracep->chgQData(oldp+502,((vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr 
                                        | vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__csr_alu_e__DOT__op)),64);
            tracep->chgQData(oldp+504,((vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_csr 
                                        & (~ vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__csr_alu_e__DOT__op))),64);
            tracep->chgBit(oldp+506,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                            >> 8U))));
            tracep->chgBit(oldp+507,((1U & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
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
            tracep->chgCData(oldp+508,((0xffU & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb)))),8);
            tracep->chgQData(oldp+509,(vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data),64);
            tracep->chgWData(oldp+511,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_2sel__I_sel_data),128);
            tracep->chgCData(oldp+515,((3U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_regin_sel))),2);
            tracep->chgQData(oldp+516,(vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_2sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+518,(vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_2sel__DOT__sel_data[1]),64);
            tracep->chgBit(oldp+520,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen));
            tracep->chgQData(oldp+521,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0]),64);
            tracep->chgQData(oldp+523,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[1]),64);
            tracep->chgQData(oldp+525,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[2]),64);
            tracep->chgQData(oldp+527,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[3]),64);
            tracep->chgQData(oldp+529,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[4]),64);
            tracep->chgQData(oldp+531,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[5]),64);
            tracep->chgQData(oldp+533,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[6]),64);
            tracep->chgQData(oldp+535,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[7]),64);
            tracep->chgQData(oldp+537,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[8]),64);
            tracep->chgQData(oldp+539,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[9]),64);
            tracep->chgQData(oldp+541,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[10]),64);
            tracep->chgQData(oldp+543,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[11]),64);
            tracep->chgQData(oldp+545,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[12]),64);
            tracep->chgQData(oldp+547,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[13]),64);
            tracep->chgQData(oldp+549,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[14]),64);
            tracep->chgQData(oldp+551,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[15]),64);
            tracep->chgQData(oldp+553,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[16]),64);
            tracep->chgQData(oldp+555,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[17]),64);
            tracep->chgQData(oldp+557,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[18]),64);
            tracep->chgQData(oldp+559,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[19]),64);
            tracep->chgQData(oldp+561,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[20]),64);
            tracep->chgQData(oldp+563,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[21]),64);
            tracep->chgQData(oldp+565,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[22]),64);
            tracep->chgQData(oldp+567,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[23]),64);
            tracep->chgQData(oldp+569,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[24]),64);
            tracep->chgQData(oldp+571,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[25]),64);
            tracep->chgQData(oldp+573,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[26]),64);
            tracep->chgQData(oldp+575,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[27]),64);
            tracep->chgQData(oldp+577,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[28]),64);
            tracep->chgQData(oldp+579,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[29]),64);
            tracep->chgQData(oldp+581,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[30]),64);
            tracep->chgQData(oldp+583,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[31]),64);
            tracep->chgBit(oldp+585,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0]));
            tracep->chgBit(oldp+586,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[1]));
            tracep->chgBit(oldp+587,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[2]));
            tracep->chgBit(oldp+588,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[3]));
            tracep->chgBit(oldp+589,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[4]));
            tracep->chgBit(oldp+590,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[5]));
            tracep->chgBit(oldp+591,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[6]));
            tracep->chgBit(oldp+592,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[7]));
            tracep->chgBit(oldp+593,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[8]));
            tracep->chgBit(oldp+594,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[9]));
            tracep->chgBit(oldp+595,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[10]));
            tracep->chgBit(oldp+596,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[11]));
            tracep->chgBit(oldp+597,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[12]));
            tracep->chgBit(oldp+598,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[13]));
            tracep->chgBit(oldp+599,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[14]));
            tracep->chgBit(oldp+600,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[15]));
            tracep->chgBit(oldp+601,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[16]));
            tracep->chgBit(oldp+602,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[17]));
            tracep->chgBit(oldp+603,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[18]));
            tracep->chgBit(oldp+604,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[19]));
            tracep->chgBit(oldp+605,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[20]));
            tracep->chgBit(oldp+606,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[21]));
            tracep->chgBit(oldp+607,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[22]));
            tracep->chgBit(oldp+608,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[23]));
            tracep->chgBit(oldp+609,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[24]));
            tracep->chgBit(oldp+610,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[25]));
            tracep->chgBit(oldp+611,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[26]));
            tracep->chgBit(oldp+612,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[27]));
            tracep->chgBit(oldp+613,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[28]));
            tracep->chgBit(oldp+614,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[29]));
            tracep->chgBit(oldp+615,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[30]));
            tracep->chgBit(oldp+616,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[31]));
            tracep->chgQData(oldp+617,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mepc),64);
            tracep->chgQData(oldp+619,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus),64);
            tracep->chgQData(oldp+621,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mtvec),64);
            tracep->chgQData(oldp+623,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mcause),64);
            tracep->chgQData(oldp+625,(vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mscratch),64);
            tracep->chgBit(oldp+627,((1U & (IData)(
                                                   (vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus 
                                                    >> 3U)))));
            tracep->chgBit(oldp+628,((1U & (IData)(
                                                   (vlSelf->ysyx_22040750_cpu_top__DOT__csr_e__DOT__mstatus 
                                                    >> 7U)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+629,(vlSelf->ysyx_22040750_cpu_top__DOT__current_inst),32);
            tracep->chgBit(oldp+630,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_valid));
            tracep->chgBit(oldp+631,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin));
            tracep->chgBit(oldp+632,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin));
            tracep->chgBit(oldp+633,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid));
            tracep->chgBit(oldp+634,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin));
            tracep->chgBit(oldp+635,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_ready_go));
            tracep->chgBit(oldp+636,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__output_valid));
        }
        tracep->chgBit(oldp+637,(vlSelf->I_sys_clk));
        tracep->chgBit(oldp+638,(vlSelf->I_rst));
        tracep->chgIData(oldp+639,(vlSelf->I_inst),32);
        tracep->chgBit(oldp+640,(vlSelf->I_inst_valid));
        tracep->chgBit(oldp+641,(vlSelf->I_inst_addr_ready));
        tracep->chgQData(oldp+642,(vlSelf->O_pc),64);
        tracep->chgBit(oldp+644,(vlSelf->O_pc_valid));
        tracep->chgQData(oldp+645,(vlSelf->O_mem_addr),64);
        tracep->chgBit(oldp+647,(vlSelf->O_mem_rd_en));
        tracep->chgBit(oldp+648,(vlSelf->O_mem_wen));
        tracep->chgQData(oldp+649,(vlSelf->I_mem_rd_data),64);
        tracep->chgBit(oldp+651,(vlSelf->I_mem_rd_data_valid));
        tracep->chgQData(oldp+652,(vlSelf->O_mem_wr_data),64);
        tracep->chgCData(oldp+654,(vlSelf->O_mem_wr_strb),8);
        tracep->chgBit(oldp+655,((1U & ((~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_valid)) 
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
