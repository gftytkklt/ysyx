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
    VlWide<3>/*95:0*/ __Vtemp173;
    VlWide<3>/*95:0*/ __Vtemp174;
    VlWide<3>/*95:0*/ __Vtemp175;
    VlWide<3>/*95:0*/ __Vtemp176;
    VlWide<3>/*95:0*/ __Vtemp177;
    VlWide<3>/*95:0*/ __Vtemp192;
    VlWide<3>/*95:0*/ __Vtemp195;
    VlWide<3>/*95:0*/ __Vtemp198;
    VlWide<3>/*95:0*/ __Vtemp199;
    VlWide<3>/*95:0*/ __Vtemp200;
    VlWide<3>/*95:0*/ __Vtemp201;
    VlWide<3>/*95:0*/ __Vtemp202;
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
            tracep->chgBit(oldp+26,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_out_valid));
            tracep->chgCData(oldp+27,((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+28,((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+29,((0x1fU & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                >> 7U))),5);
            tracep->chgCData(oldp+30,(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel),4);
            tracep->chgCData(oldp+31,(vlSelf->ysyx_22040750_cpu_top__DOT__regin_sel),3);
            tracep->chgCData(oldp+32,((((1U & (- (IData)(
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
            tracep->chgCData(oldp+33,(((1U & (- (IData)((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR)))) 
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
            tracep->chgSData(oldp+34,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op_sel),15);
            tracep->chgCData(oldp+35,((0xffU & ((((- (IData)((IData)(
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
            tracep->chgSData(oldp+36,(vlSelf->ysyx_22040750_cpu_top__DOT__mem_rstrb),9);
            tracep->chgBit(oldp+37,(vlSelf->ysyx_22040750_cpu_top__DOT__reg_wen));
            tracep->chgBit(oldp+38,((0x23U == (0x7fU 
                                               & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+39,(((0x1bU == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                     | (0x3bU == (0x7fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgCData(oldp+40,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op_sext),2);
            tracep->chgQData(oldp+41,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc),64);
            tracep->chgIData(oldp+43,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst),32);
            tracep->chgBit(oldp+44,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_valid));
            tracep->chgBit(oldp+45,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_stall));
            tracep->chgBit(oldp+46,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_bubble));
            tracep->chgBit(oldp+47,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_reg_e__DOT__input_valid));
            tracep->chgQData(oldp+48,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_imm),64);
            tracep->chgQData(oldp+50,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_pc),64);
            tracep->chgQData(oldp+52,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs1),64);
            tracep->chgQData(oldp+54,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rs2),64);
            tracep->chgCData(oldp+56,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rd_addr),5);
            tracep->chgCData(oldp+57,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_wstrb),8);
            tracep->chgSData(oldp+58,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_rstrb),9);
            tracep->chgCData(oldp+59,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel),3);
            tracep->chgCData(oldp+60,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op1_sel),3);
            tracep->chgCData(oldp+61,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_op2_sel),2);
            tracep->chgCData(oldp+62,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_sext),2);
            tracep->chgSData(oldp+63,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel),15);
            tracep->chgBit(oldp+64,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_wen));
            tracep->chgBit(oldp+65,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_mem_wen));
            tracep->chgBit(oldp+66,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask));
            tracep->chgBit(oldp+67,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_valid));
            tracep->chgCData(oldp+68,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall),2);
            tracep->chgIData(oldp+69,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_inst),32);
            tracep->chgBit(oldp+70,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_bubble));
            tracep->chgBit(oldp+71,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_reg_e__DOT__input_valid));
            tracep->chgBit(oldp+72,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_multicycle));
            tracep->chgSData(oldp+73,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rstrb),9);
            tracep->chgCData(oldp+74,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_wstrb),8);
            tracep->chgQData(oldp+75,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_alu_out),64);
            tracep->chgQData(oldp+77,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr),64);
            tracep->chgBit(oldp+79,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_wen));
            tracep->chgQData(oldp+80,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_pc),64);
            tracep->chgBit(oldp+82,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_wen));
            tracep->chgCData(oldp+83,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_rd_addr),5);
            tracep->chgCData(oldp+84,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel),3);
            tracep->chgCData(oldp+85,((7U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_mem_addr))),3);
            tracep->chgCData(oldp+86,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall),2);
            tracep->chgIData(oldp+87,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_inst),32);
            tracep->chgBit(oldp+88,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_bubble));
            tracep->chgBit(oldp+89,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__input_valid));
            tracep->chgQData(oldp+90,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_pc),64);
            tracep->chgBit(oldp+92,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_e__DOT__input_valid));
            tracep->chgQData(oldp+93,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_data),64);
            tracep->chgSData(oldp+95,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb),9);
            tracep->chgQData(oldp+96,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_alu_out),64);
            tracep->chgBit(oldp+98,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_reg_wen));
            tracep->chgCData(oldp+99,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_rd_addr),5);
            tracep->chgCData(oldp+100,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_regin_sel),3);
            tracep->chgCData(oldp+101,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_shamt),3);
            tracep->chgBit(oldp+102,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_allowin));
            tracep->chgIData(oldp+103,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_inst),32);
            tracep->chgBit(oldp+104,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_bubble));
            tracep->chgCData(oldp+105,(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_stall),2);
            tracep->chgCData(oldp+106,(vlSelf->ysyx_22040750_cpu_top__DOT__stall_en),2);
            tracep->chgQData(oldp+107,(vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data),64);
            tracep->chgQData(oldp+109,(vlSelf->ysyx_22040750_cpu_top__DOT__rs2_forward_data),64);
            tracep->chgQData(oldp+111,(((8U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))
                                         ? vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data
                                         : vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc)),64);
            tracep->chgQData(oldp+113,((vlSelf->ysyx_22040750_cpu_top__DOT__imm 
                                        + ((8U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel))
                                            ? vlSelf->ysyx_22040750_cpu_top__DOT__rs1_forward_data
                                            : vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_pc))),64);
            tracep->chgQData(oldp+115,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__dnpc),64);
            tracep->chgBit(oldp+117,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__dnpc_sel)))));
            tracep->chgWData(oldp+118,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel_data),128);
            tracep->chgCData(oldp+122,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_2sel__I_sel),2);
            tracep->chgQData(oldp+123,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_2sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+125,(vlSelf->ysyx_22040750_cpu_top__DOT__npc_e__DOT__nextpc_64bit_2sel__DOT__sel_data[1]),64);
            tracep->chgBit(oldp+127,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_valid));
            tracep->chgBit(oldp+128,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_en));
            tracep->chgIData(oldp+129,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__inst_cache),32);
            tracep->chgBit(oldp+130,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__cache_valid));
            tracep->chgBit(oldp+131,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_stall)))));
            tracep->chgBit(oldp+132,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+133,((0U != (0xfU & 
                                             ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                              >> 0xaU)))));
            tracep->chgBit(oldp+134,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel) 
                                            >> 1U))));
            tracep->chgCData(oldp+135,(((0xfffffffeU 
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
            tracep->chgCData(oldp+136,(((0xfffffffeU 
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
            tracep->chgCData(oldp+137,(((0xfffffffeU 
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
            tracep->chgBit(oldp+138,((((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall)) 
                                       & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_regin_sel) 
                                          >> 1U)) | 
                                      ((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_stall)) 
                                       & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_regin_sel) 
                                          >> 1U)))));
            tracep->chgBit(oldp+139,(((0U != (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_stall)) 
                                      & (0U != (0xfU 
                                                & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+140,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__forward_unit_e__I_WB_reg_wen));
            tracep->chgCData(oldp+141,((vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+142,((0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)),7);
            tracep->chgCData(oldp+143,((7U & (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+144,((vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+145,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immS),12);
            tracep->chgSData(oldp+146,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immB),13);
            tracep->chgIData(oldp+147,((0xfffff000U 
                                        & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)),32);
            tracep->chgIData(oldp+148,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__immJ),21);
            tracep->chgBit(oldp+149,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI));
            tracep->chgBit(oldp+150,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR));
            tracep->chgBit(oldp+151,((0x63U == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+152,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU));
            tracep->chgBit(oldp+153,((0x6fU == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+154,((0x37U == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+155,((0x17U == (0x7fU 
                                                & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+156,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__JALR));
            tracep->chgBit(oldp+157,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LD));
            tracep->chgBit(oldp+158,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LW));
            tracep->chgBit(oldp+159,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LWU));
            tracep->chgBit(oldp+160,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LH));
            tracep->chgBit(oldp+161,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LHU));
            tracep->chgBit(oldp+162,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__LB));
            tracep->chgBit(oldp+163,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+164,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+165,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+166,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+167,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+168,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+169,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+170,((IData)(((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+171,((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+172,((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x10U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+173,((IData)((0x1bU 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+174,((IData)(((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+175,((IData)(((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+176,((IData)(((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+177,((IData)(((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+178,((IData)(((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+179,((IData)(((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+180,((IData)(((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+181,((IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+182,((IData)(((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+183,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+184,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+185,((IData)(((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+186,((IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+187,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL));
            tracep->chgBit(oldp+188,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH));
            tracep->chgBit(oldp+189,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU));
            tracep->chgBit(oldp+190,((IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+191,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV));
            tracep->chgBit(oldp+192,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+193,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM));
            tracep->chgBit(oldp+194,((IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+195,((IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+196,((IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+197,((IData)(((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+198,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+199,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+200,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW));
            tracep->chgBit(oldp+201,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIVW));
            tracep->chgBit(oldp+202,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+203,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REMW));
            tracep->chgBit(oldp+204,((IData)(((0x703bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+205,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+206,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+207,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+208,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+209,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+210,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+211,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+212,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+213,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+214,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+215,((0x73U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
            tracep->chgBit(oldp+216,((0x100073U == vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)));
            tracep->chgBit(oldp+217,((3U == (0x7fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+218,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeB_jr));
            tracep->chgBit(oldp+219,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__eq));
            tracep->chgBit(oldp+220,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__eq)))));
            tracep->chgBit(oldp+221,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__lt));
            tracep->chgBit(oldp+222,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__lt)))));
            tracep->chgBit(oldp+223,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__ltu));
            tracep->chgBit(oldp+224,((1U & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__ltu)))));
            tracep->chgBit(oldp+225,(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__add_flag));
            tracep->chgBit(oldp+226,(((IData)(((0x33U 
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
            tracep->chgBit(oldp+227,(((IData)((0x2013U 
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
            tracep->chgBit(oldp+228,(((IData)((0x3013U 
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
            tracep->chgBit(oldp+229,(((IData)((0x4013U 
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
            tracep->chgBit(oldp+230,(((IData)((0x6013U 
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
            tracep->chgBit(oldp+231,(((IData)((0x7013U 
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
            tracep->chgBit(oldp+232,(((((IData)(((0x1013U 
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
            tracep->chgBit(oldp+233,(((((IData)(((0x5013U 
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
            tracep->chgBit(oldp+234,(((((IData)(((0x5013U 
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
            tracep->chgBit(oldp+235,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MUL) 
                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULW))));
            tracep->chgBit(oldp+236,((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULH) 
                                       | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                      | (IData)(((0x3033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                                 & (1U 
                                                    == 
                                                    (vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+237,(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__DIV) 
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
            tracep->chgBit(oldp+238,(((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__REM) 
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
            tracep->chgBit(oldp+239,((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeR) 
                                       | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI)) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+240,((((0x63U == (0x7fU 
                                                  & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+241,((((((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeI) 
                                         | (0x23U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                        | (0x63U == 
                                           (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_inst))) 
                                      | (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__decoder_e__DOT__typeU))));
            tracep->chgBit(oldp+242,((0U != (0xfU & 
                                             ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op_sel) 
                                              >> 0xaU)))));
            tracep->chgWData(oldp+243,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+249,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+251,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+253,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgWData(oldp+255,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data),128);
            tracep->chgQData(oldp+259,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+261,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[1]),64);
            tracep->chgBit(oldp+263,((1U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))));
            tracep->chgBit(oldp+264,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+265,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+266,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+267,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 4U))));
            tracep->chgBit(oldp+268,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 5U))));
            tracep->chgBit(oldp+269,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 6U))));
            tracep->chgBit(oldp+270,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 7U))));
            tracep->chgBit(oldp+271,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 8U))));
            tracep->chgBit(oldp+272,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 9U))));
            tracep->chgBit(oldp+273,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+274,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+275,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+276,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                            >> 0xdU))));
            tracep->chgQData(oldp+277,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp173, vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp174, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp175, __Vtemp173, __Vtemp174);
            VL_EXTEND_WQ(65,64, __Vtemp176, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__cin);
            VL_ADD_W(3, __Vtemp177, __Vtemp175, __Vtemp176);
            tracep->chgQData(oldp+279,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp177[2U])))))),64);
            tracep->chgQData(oldp+281,((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                        ^ vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+283,((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                        | vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+285,((vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                        & vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+287,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
                                                               >> 0x20U))))
                                         : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result)),64);
            tracep->chgQData(oldp+289,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result),64);
            tracep->chgQData(oldp+291,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+293,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_result),64);
            tracep->chgQData(oldp+295,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mulh_result),64);
            tracep->chgQData(oldp+297,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_result),64);
            tracep->chgQData(oldp+299,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__rem_result),64);
            tracep->chgWData(oldp+301,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext),65);
            tracep->chgWData(oldp+304,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext),65);
            tracep->chgBit(oldp+307,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                             ? (IData)(
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+308,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                             ? (IData)(
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_op2 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+309,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__sext1));
            tracep->chgBit(oldp+310,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__sext2));
            tracep->chgBit(oldp+311,((0U != (3U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                                   >> 0xaU)))));
            tracep->chgBit(oldp+312,((0U != (3U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel) 
                                                   >> 0xcU)))));
            tracep->chgQData(oldp+313,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mulh_reg),64);
            tracep->chgQData(oldp+315,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_reg),64);
            tracep->chgQData(oldp+317,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_reg),64);
            tracep->chgQData(oldp+319,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__rem_reg),64);
            tracep->chgBit(oldp+321,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_reg_valid));
            tracep->chgBit(oldp+322,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_reg_valid));
            tracep->chgQData(oldp+323,((((QData)((IData)(
                                                         ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_reg_valid)
                                                           ? (IData)(
                                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mulh_reg 
                                                                      >> 0x20U))
                                                           : (IData)(
                                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mulh_result 
                                                                      >> 0x20U))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_reg_valid)
                                                            ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mulh_reg)
                                                            : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mulh_result)))))),64);
            tracep->chgQData(oldp+325,((((QData)((IData)(
                                                         ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_reg_valid)
                                                           ? (IData)(
                                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_reg 
                                                                      >> 0x20U))
                                                           : (IData)(
                                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_result 
                                                                      >> 0x20U))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_reg_valid)
                                                            ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_reg)
                                                            : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__mul_result)))))),64);
            tracep->chgQData(oldp+327,((((QData)((IData)(
                                                         ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_reg_valid)
                                                           ? (IData)(
                                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_reg 
                                                                      >> 0x20U))
                                                           : (IData)(
                                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_result 
                                                                      >> 0x20U))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_reg_valid)
                                                            ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_reg)
                                                            : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_result)))))),64);
            tracep->chgQData(oldp+329,((((QData)((IData)(
                                                         ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_reg_valid)
                                                           ? (IData)(
                                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__rem_reg 
                                                                      >> 0x20U))
                                                           : (IData)(
                                                                     (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__rem_result 
                                                                      >> 0x20U))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__div_reg_valid)
                                                            ? (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__rem_reg)
                                                            : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__rem_result)))))),64);
            VL_DIVS_WWW(65, __Vtemp192, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext);
            tracep->chgBit(oldp+331,((1U & __Vtemp192[2U])));
            VL_MODDIVS_WWW(65, __Vtemp195, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__op2_sext);
            tracep->chgBit(oldp+332,((1U & __Vtemp195[2U])));
            tracep->chgQData(oldp+333,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__adder2),64);
            tracep->chgQData(oldp+335,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__cin),64);
            VL_EXTEND_WQ(65,64, __Vtemp198, vlSelf->ysyx_22040750_cpu_top__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp199, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp200, __Vtemp198, __Vtemp199);
            VL_EXTEND_WQ(65,64, __Vtemp201, vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__cin);
            VL_ADD_W(3, __Vtemp202, __Vtemp200, __Vtemp201);
            tracep->chgBit(oldp+337,((1U & __Vtemp202[2U])));
            tracep->chgQData(oldp+338,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__reverse_op1),64);
            tracep->chgQData(oldp+340,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op),64);
            tracep->chgCData(oldp+342,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shamt),6);
            tracep->chgQData(oldp+343,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                         ? (~ (0xffffffffULL 
                                               >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shamt)))
                                         : (~ (0xffffffffffffffffULL 
                                               >> (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shamt))))),64);
            tracep->chgIData(oldp+345,(((0x80U & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))
                                         ? (IData)(
                                                   (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op))),32);
            tracep->chgQData(oldp+346,(((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_word_op_mask)
                                         ? (QData)((IData)(
                                                           ((0x80U 
                                                             & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_alu_op_sel))
                                                             ? (IData)(
                                                                       (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op 
                                                                        >> 0x20U))
                                                             : (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op))))
                                         : vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_op)),64);
            tracep->chgQData(oldp+348,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result 
                                                           >> 0x20U))))),64);
            tracep->chgQData(oldp+350,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__slldw_result),64);
            tracep->chgQData(oldp+352,(vlSelf->ysyx_22040750_cpu_top__DOT__alu_e__DOT__dword_result),64);
            tracep->chgQData(oldp+354,((((QData)((IData)(
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
            tracep->chgBit(oldp+356,(((1U & ((IData)(
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
            tracep->chgBit(oldp+357,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__mem_rd_en));
            tracep->chgBit(oldp+358,((1U & ((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
                                            >> 8U))));
            tracep->chgBit(oldp+359,((1U & (((IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb) 
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
            tracep->chgCData(oldp+360,((0xffU & (~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__MEM_WB_mem_rstrb)))),8);
            tracep->chgQData(oldp+361,(vlSelf->ysyx_22040750_cpu_top__DOT__mem_ld_e__DOT__ld_data),64);
            tracep->chgWData(oldp+363,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+369,(vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+371,(vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+373,(vlSelf->ysyx_22040750_cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgBit(oldp+375,(vlSelf->ysyx_22040750_cpu_top__DOT____Vcellinp__gpr_e__I_wen));
            tracep->chgQData(oldp+376,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[0]),64);
            tracep->chgQData(oldp+378,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[1]),64);
            tracep->chgQData(oldp+380,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[2]),64);
            tracep->chgQData(oldp+382,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[3]),64);
            tracep->chgQData(oldp+384,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[4]),64);
            tracep->chgQData(oldp+386,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[5]),64);
            tracep->chgQData(oldp+388,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[6]),64);
            tracep->chgQData(oldp+390,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[7]),64);
            tracep->chgQData(oldp+392,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[8]),64);
            tracep->chgQData(oldp+394,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[9]),64);
            tracep->chgQData(oldp+396,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[10]),64);
            tracep->chgQData(oldp+398,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[11]),64);
            tracep->chgQData(oldp+400,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[12]),64);
            tracep->chgQData(oldp+402,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[13]),64);
            tracep->chgQData(oldp+404,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[14]),64);
            tracep->chgQData(oldp+406,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[15]),64);
            tracep->chgQData(oldp+408,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[16]),64);
            tracep->chgQData(oldp+410,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[17]),64);
            tracep->chgQData(oldp+412,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[18]),64);
            tracep->chgQData(oldp+414,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[19]),64);
            tracep->chgQData(oldp+416,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[20]),64);
            tracep->chgQData(oldp+418,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[21]),64);
            tracep->chgQData(oldp+420,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[22]),64);
            tracep->chgQData(oldp+422,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[23]),64);
            tracep->chgQData(oldp+424,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[24]),64);
            tracep->chgQData(oldp+426,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[25]),64);
            tracep->chgQData(oldp+428,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[26]),64);
            tracep->chgQData(oldp+430,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[27]),64);
            tracep->chgQData(oldp+432,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[28]),64);
            tracep->chgQData(oldp+434,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[29]),64);
            tracep->chgQData(oldp+436,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[30]),64);
            tracep->chgQData(oldp+438,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__gpr[31]),64);
            tracep->chgBit(oldp+440,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[0]));
            tracep->chgBit(oldp+441,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[1]));
            tracep->chgBit(oldp+442,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[2]));
            tracep->chgBit(oldp+443,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[3]));
            tracep->chgBit(oldp+444,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[4]));
            tracep->chgBit(oldp+445,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[5]));
            tracep->chgBit(oldp+446,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[6]));
            tracep->chgBit(oldp+447,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[7]));
            tracep->chgBit(oldp+448,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[8]));
            tracep->chgBit(oldp+449,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[9]));
            tracep->chgBit(oldp+450,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[10]));
            tracep->chgBit(oldp+451,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[11]));
            tracep->chgBit(oldp+452,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[12]));
            tracep->chgBit(oldp+453,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[13]));
            tracep->chgBit(oldp+454,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[14]));
            tracep->chgBit(oldp+455,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[15]));
            tracep->chgBit(oldp+456,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[16]));
            tracep->chgBit(oldp+457,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[17]));
            tracep->chgBit(oldp+458,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[18]));
            tracep->chgBit(oldp+459,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[19]));
            tracep->chgBit(oldp+460,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[20]));
            tracep->chgBit(oldp+461,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[21]));
            tracep->chgBit(oldp+462,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[22]));
            tracep->chgBit(oldp+463,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[23]));
            tracep->chgBit(oldp+464,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[24]));
            tracep->chgBit(oldp+465,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[25]));
            tracep->chgBit(oldp+466,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[26]));
            tracep->chgBit(oldp+467,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[27]));
            tracep->chgBit(oldp+468,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[28]));
            tracep->chgBit(oldp+469,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[29]));
            tracep->chgBit(oldp+470,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[30]));
            tracep->chgBit(oldp+471,(vlSelf->ysyx_22040750_cpu_top__DOT__gpr_e__DOT__wen[31]));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+472,(vlSelf->ysyx_22040750_cpu_top__DOT__current_inst),32);
            tracep->chgBit(oldp+473,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_valid));
            tracep->chgBit(oldp+474,(vlSelf->ysyx_22040750_cpu_top__DOT__IF_ID_allowin));
            tracep->chgBit(oldp+475,(vlSelf->ysyx_22040750_cpu_top__DOT__ID_EX_allowin));
            tracep->chgBit(oldp+476,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_valid));
            tracep->chgBit(oldp+477,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_allowin));
            tracep->chgBit(oldp+478,(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_ready_go));
            tracep->chgBit(oldp+479,(vlSelf->ysyx_22040750_cpu_top__DOT__EX_MEM_reg_e__DOT__output_valid));
        }
        tracep->chgBit(oldp+480,(vlSelf->I_sys_clk));
        tracep->chgBit(oldp+481,(vlSelf->I_rst));
        tracep->chgIData(oldp+482,(vlSelf->I_inst),32);
        tracep->chgBit(oldp+483,(vlSelf->I_inst_valid));
        tracep->chgBit(oldp+484,(vlSelf->I_inst_addr_ready));
        tracep->chgQData(oldp+485,(vlSelf->O_pc),64);
        tracep->chgBit(oldp+487,(vlSelf->O_pc_valid));
        tracep->chgQData(oldp+488,(vlSelf->O_mem_addr),64);
        tracep->chgBit(oldp+490,(vlSelf->O_mem_rd_en));
        tracep->chgBit(oldp+491,(vlSelf->O_mem_wen));
        tracep->chgQData(oldp+492,(vlSelf->I_mem_rd_data),64);
        tracep->chgBit(oldp+494,(vlSelf->I_mem_rd_data_valid));
        tracep->chgQData(oldp+495,(vlSelf->O_mem_wr_data),64);
        tracep->chgCData(oldp+497,(vlSelf->O_mem_wr_strb),8);
        tracep->chgBit(oldp+498,((1U & ((~ (IData)(vlSelf->ysyx_22040750_cpu_top__DOT__pc_e__DOT__IF_valid)) 
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
