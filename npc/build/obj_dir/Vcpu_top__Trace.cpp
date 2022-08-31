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
    VlWide<3>/*95:0*/ __Vtemp107;
    VlWide<3>/*95:0*/ __Vtemp108;
    VlWide<3>/*95:0*/ __Vtemp109;
    VlWide<3>/*95:0*/ __Vtemp110;
    VlWide<3>/*95:0*/ __Vtemp111;
    VlWide<4>/*127:0*/ __Vtemp113;
    VlWide<4>/*127:0*/ __Vtemp114;
    VlWide<4>/*127:0*/ __Vtemp115;
    VlWide<4>/*127:0*/ __Vtemp116;
    VlWide<4>/*127:0*/ __Vtemp117;
    VlWide<4>/*127:0*/ __Vtemp118;
    VlWide<3>/*95:0*/ __Vtemp120;
    VlWide<3>/*95:0*/ __Vtemp123;
    VlWide<3>/*95:0*/ __Vtemp126;
    VlWide<3>/*95:0*/ __Vtemp129;
    VlWide<3>/*95:0*/ __Vtemp132;
    VlWide<3>/*95:0*/ __Vtemp133;
    VlWide<3>/*95:0*/ __Vtemp134;
    VlWide<3>/*95:0*/ __Vtemp135;
    VlWide<3>/*95:0*/ __Vtemp136;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->cpu_top__DOT__dnpc),64);
            tracep->chgQData(oldp+2,(vlSelf->cpu_top__DOT__wr_data),64);
            tracep->chgQData(oldp+4,(vlSelf->cpu_top__DOT__rs1_data),64);
            tracep->chgQData(oldp+6,(vlSelf->cpu_top__DOT__rs2_data),64);
            tracep->chgQData(oldp+8,(vlSelf->cpu_top__DOT__alu_op1),64);
            tracep->chgQData(oldp+10,(vlSelf->cpu_top__DOT__alu_op2),64);
            tracep->chgQData(oldp+12,(vlSelf->cpu_top__DOT__alu_out),64);
            tracep->chgQData(oldp+14,(vlSelf->cpu_top__DOT__mem_in),64);
            tracep->chgQData(oldp+16,(vlSelf->cpu_top__DOT__alu_e__DOT__result),64);
            tracep->chgCData(oldp+18,(vlSelf->cpu_top__DOT__dnpc_sel),3);
            tracep->chgCData(oldp+19,(vlSelf->cpu_top__DOT__regin_sel),3);
            tracep->chgCData(oldp+20,(vlSelf->cpu_top__DOT__opnum1_sel),3);
            tracep->chgCData(oldp+21,(vlSelf->cpu_top__DOT__opnum2_sel),2);
            tracep->chgSData(oldp+22,(vlSelf->cpu_top__DOT__alu_op_sel),15);
            tracep->chgCData(oldp+23,(vlSelf->cpu_top__DOT__mem_wstrb),8);
            tracep->chgSData(oldp+24,(vlSelf->cpu_top__DOT__mem_rstrb),9);
            tracep->chgBit(oldp+25,(vlSelf->cpu_top__DOT__reg_wen));
            tracep->chgBit(oldp+26,(vlSelf->cpu_top__DOT__word_op_mask));
            tracep->chgCData(oldp+27,(vlSelf->cpu_top__DOT__alu_op_sext),2);
            tracep->chgWData(oldp+28,(vlSelf->cpu_top__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+34,(vlSelf->cpu_top__DOT__nextpc_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+36,(vlSelf->cpu_top__DOT__nextpc_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+38,(vlSelf->cpu_top__DOT__nextpc_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgCData(oldp+40,((7U & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__result))),3);
            tracep->chgBit(oldp+41,((1U & ((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                           >> 8U))));
            tracep->chgBit(oldp+42,((1U & (((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                            >> 8U) 
                                           & ((0xfU 
                                               == (0xffU 
                                                   & (IData)(vlSelf->cpu_top__DOT__mem_rstrb)))
                                               ? (IData)(
                                                         (vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                          >> 0x1fU))
                                               : ((3U 
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
                                                              >> 7U)))))))));
            tracep->chgCData(oldp+43,((0xffU & (~ (IData)(vlSelf->cpu_top__DOT__mem_rstrb)))),8);
            tracep->chgQData(oldp+44,(vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data),64);
            tracep->chgWData(oldp+46,(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+52,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+54,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+56,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgBit(oldp+58,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0]));
            tracep->chgBit(oldp+59,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[1]));
            tracep->chgBit(oldp+60,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[2]));
            tracep->chgBit(oldp+61,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[3]));
            tracep->chgBit(oldp+62,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[4]));
            tracep->chgBit(oldp+63,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[5]));
            tracep->chgBit(oldp+64,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[6]));
            tracep->chgBit(oldp+65,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[7]));
            tracep->chgBit(oldp+66,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[8]));
            tracep->chgBit(oldp+67,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[9]));
            tracep->chgBit(oldp+68,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[10]));
            tracep->chgBit(oldp+69,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[11]));
            tracep->chgBit(oldp+70,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[12]));
            tracep->chgBit(oldp+71,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[13]));
            tracep->chgBit(oldp+72,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[14]));
            tracep->chgBit(oldp+73,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[15]));
            tracep->chgBit(oldp+74,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[16]));
            tracep->chgBit(oldp+75,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[17]));
            tracep->chgBit(oldp+76,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[18]));
            tracep->chgBit(oldp+77,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[19]));
            tracep->chgBit(oldp+78,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[20]));
            tracep->chgBit(oldp+79,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[21]));
            tracep->chgBit(oldp+80,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[22]));
            tracep->chgBit(oldp+81,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[23]));
            tracep->chgBit(oldp+82,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[24]));
            tracep->chgBit(oldp+83,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[25]));
            tracep->chgBit(oldp+84,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[26]));
            tracep->chgBit(oldp+85,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[27]));
            tracep->chgBit(oldp+86,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[28]));
            tracep->chgBit(oldp+87,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[29]));
            tracep->chgBit(oldp+88,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[30]));
            tracep->chgBit(oldp+89,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[31]));
            tracep->chgSData(oldp+90,(vlSelf->cpu_top__DOT__decoder_e__DOT__immS),12);
            tracep->chgSData(oldp+91,(vlSelf->cpu_top__DOT__decoder_e__DOT__immB),13);
            tracep->chgIData(oldp+92,(vlSelf->cpu_top__DOT__decoder_e__DOT__immJ),21);
            tracep->chgBit(oldp+93,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI));
            tracep->chgBit(oldp+94,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR));
            tracep->chgBit(oldp+95,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU));
            tracep->chgBit(oldp+96,(vlSelf->cpu_top__DOT__decoder_e__DOT__JALR));
            tracep->chgBit(oldp+97,(vlSelf->cpu_top__DOT__decoder_e__DOT__LD));
            tracep->chgBit(oldp+98,(vlSelf->cpu_top__DOT__decoder_e__DOT__LW));
            tracep->chgBit(oldp+99,(vlSelf->cpu_top__DOT__decoder_e__DOT__LWU));
            tracep->chgBit(oldp+100,(vlSelf->cpu_top__DOT__decoder_e__DOT__LH));
            tracep->chgBit(oldp+101,(vlSelf->cpu_top__DOT__decoder_e__DOT__LHU));
            tracep->chgBit(oldp+102,(vlSelf->cpu_top__DOT__decoder_e__DOT__LB));
            tracep->chgBit(oldp+103,(vlSelf->cpu_top__DOT__decoder_e__DOT__MUL));
            tracep->chgBit(oldp+104,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULH));
            tracep->chgBit(oldp+105,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULHSU));
            tracep->chgBit(oldp+106,(vlSelf->cpu_top__DOT__decoder_e__DOT__DIV));
            tracep->chgBit(oldp+107,(vlSelf->cpu_top__DOT__decoder_e__DOT__REM));
            tracep->chgBit(oldp+108,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULW));
            tracep->chgBit(oldp+109,(vlSelf->cpu_top__DOT__decoder_e__DOT__DIVW));
            tracep->chgBit(oldp+110,(vlSelf->cpu_top__DOT__decoder_e__DOT__REMW));
            tracep->chgBit(oldp+111,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeB_jr));
            tracep->chgBit(oldp+112,(vlSelf->cpu_top__DOT__decoder_e__DOT__eq));
            tracep->chgBit(oldp+113,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__eq)))));
            tracep->chgBit(oldp+114,(vlSelf->cpu_top__DOT__decoder_e__DOT__lt));
            tracep->chgBit(oldp+115,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__lt)))));
            tracep->chgBit(oldp+116,(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu));
            tracep->chgBit(oldp+117,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu)))));
            tracep->chgBit(oldp+118,(vlSelf->cpu_top__DOT__decoder_e__DOT__add_flag));
            tracep->chgBit(oldp+119,(((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MUL) 
                                      | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULW))));
            tracep->chgWData(oldp+120,(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+126,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+128,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+130,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgWData(oldp+132,(vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data),128);
            tracep->chgQData(oldp+136,(vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+138,(vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[1]),64);
            tracep->chgBit(oldp+140,((1U & (IData)(vlSelf->cpu_top__DOT__alu_op_sel))));
            tracep->chgBit(oldp+141,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+142,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+143,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+144,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                            >> 4U))));
            tracep->chgBit(oldp+145,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                            >> 5U))));
            tracep->chgBit(oldp+146,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                            >> 6U))));
            tracep->chgBit(oldp+147,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                            >> 7U))));
            tracep->chgBit(oldp+148,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                            >> 8U))));
            tracep->chgBit(oldp+149,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                            >> 9U))));
            tracep->chgBit(oldp+150,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+151,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+152,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+153,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                            >> 0xdU))));
            tracep->chgQData(oldp+154,(vlSelf->cpu_top__DOT__alu_e__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp107, vlSelf->cpu_top__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp108, vlSelf->cpu_top__DOT__alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp109, __Vtemp107, __Vtemp108);
            VL_EXTEND_WQ(65,64, __Vtemp110, vlSelf->cpu_top__DOT__alu_e__DOT__cin);
            VL_ADD_W(3, __Vtemp111, __Vtemp109, __Vtemp110);
            tracep->chgQData(oldp+156,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp111[2U])))))),64);
            tracep->chgQData(oldp+158,((vlSelf->cpu_top__DOT__alu_op1 
                                        ^ vlSelf->cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+160,((vlSelf->cpu_top__DOT__alu_op1 
                                        | vlSelf->cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+162,((vlSelf->cpu_top__DOT__alu_op1 
                                        & vlSelf->cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+164,(((IData)(vlSelf->cpu_top__DOT__word_op_mask)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
                                                               >> 0x20U))))
                                         : vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result)),64);
            tracep->chgQData(oldp+166,(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result),64);
            tracep->chgQData(oldp+168,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->cpu_top__DOT__word_op_mask)
                                                                 ? (IData)(
                                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                                            >> 0x1fU))
                                                                 : (IData)(
                                                                           (vlSelf->cpu_top__DOT__alu_op1 
                                                                            >> 0x3fU))))))) 
                                         & ((IData)(vlSelf->cpu_top__DOT__word_op_mask)
                                             ? (~ (0xffffffffULL 
                                                   >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt)))
                                             : (~ (0xffffffffffffffffULL 
                                                   >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt))))) 
                                        | vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)),64);
            VL_EXTENDS_WW(128,65, __Vtemp113, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext);
            VL_EXTENDS_WW(128,65, __Vtemp114, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
            VL_MULS_WWW(128,128,128, __Vtemp115, __Vtemp113, __Vtemp114);
            tracep->chgQData(oldp+170,((((QData)((IData)(
                                                         __Vtemp115[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp115[0U])))),64);
            VL_EXTENDS_WW(128,65, __Vtemp116, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext);
            VL_EXTENDS_WW(128,65, __Vtemp117, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
            VL_MULS_WWW(128,128,128, __Vtemp118, __Vtemp116, __Vtemp117);
            tracep->chgQData(oldp+172,((((QData)((IData)(
                                                         __Vtemp118[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp118[2U])))),64);
            VL_DIVS_WWW(65, __Vtemp120, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
            tracep->chgQData(oldp+174,((((QData)((IData)(
                                                         __Vtemp120[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp120[0U])))),64);
            VL_MODDIVS_WWW(65, __Vtemp123, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
            tracep->chgQData(oldp+176,((((QData)((IData)(
                                                         __Vtemp123[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp123[0U])))),64);
            tracep->chgWData(oldp+178,(vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext),65);
            tracep->chgWData(oldp+181,(vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext),65);
            tracep->chgBit(oldp+184,((1U & ((IData)(vlSelf->cpu_top__DOT__word_op_mask)
                                             ? (IData)(
                                                       (vlSelf->cpu_top__DOT__alu_op1 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->cpu_top__DOT__alu_op1 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+185,((1U & ((IData)(vlSelf->cpu_top__DOT__word_op_mask)
                                             ? (IData)(
                                                       (vlSelf->cpu_top__DOT__alu_op2 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->cpu_top__DOT__alu_op2 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+186,(vlSelf->cpu_top__DOT__alu_e__DOT__sext1));
            tracep->chgBit(oldp+187,(vlSelf->cpu_top__DOT__alu_e__DOT__sext2));
            VL_DIVS_WWW(65, __Vtemp126, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
            tracep->chgBit(oldp+188,((1U & __Vtemp126[2U])));
            VL_MODDIVS_WWW(65, __Vtemp129, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
            tracep->chgBit(oldp+189,((1U & __Vtemp129[2U])));
            tracep->chgQData(oldp+190,(vlSelf->cpu_top__DOT__alu_e__DOT__adder2),64);
            tracep->chgQData(oldp+192,(vlSelf->cpu_top__DOT__alu_e__DOT__cin),64);
            VL_EXTEND_WQ(65,64, __Vtemp132, vlSelf->cpu_top__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp133, vlSelf->cpu_top__DOT__alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp134, __Vtemp132, __Vtemp133);
            VL_EXTEND_WQ(65,64, __Vtemp135, vlSelf->cpu_top__DOT__alu_e__DOT__cin);
            VL_ADD_W(3, __Vtemp136, __Vtemp134, __Vtemp135);
            tracep->chgBit(oldp+194,((1U & __Vtemp136[2U])));
            tracep->chgQData(oldp+195,(vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1),64);
            tracep->chgQData(oldp+197,(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op),64);
            tracep->chgCData(oldp+199,(vlSelf->cpu_top__DOT__alu_e__DOT__shamt),6);
            tracep->chgQData(oldp+200,(((IData)(vlSelf->cpu_top__DOT__word_op_mask)
                                         ? (~ (0xffffffffULL 
                                               >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt)))
                                         : (~ (0xffffffffffffffffULL 
                                               >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt))))),64);
            tracep->chgIData(oldp+202,(((0x80U & (IData)(vlSelf->cpu_top__DOT__alu_op_sel))
                                         ? (IData)(
                                                   (vlSelf->cpu_top__DOT__alu_e__DOT__shift_op 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op))),32);
            tracep->chgQData(oldp+203,(((IData)(vlSelf->cpu_top__DOT__word_op_mask)
                                         ? (QData)((IData)(
                                                           ((0x80U 
                                                             & (IData)(vlSelf->cpu_top__DOT__alu_op_sel))
                                                             ? (IData)(
                                                                       (vlSelf->cpu_top__DOT__alu_e__DOT__shift_op 
                                                                        >> 0x20U))
                                                             : (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op))))
                                         : vlSelf->cpu_top__DOT__alu_e__DOT__shift_op)),64);
            tracep->chgQData(oldp+205,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
                                                           >> 0x20U))))),64);
            tracep->chgQData(oldp+207,(vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result),64);
            tracep->chgQData(oldp+209,(vlSelf->cpu_top__DOT__alu_e__DOT__dword_result),64);
            tracep->chgQData(oldp+211,((((QData)((IData)(
                                                         (- (IData)(
                                                                    ((1U 
                                                                      & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSelf->cpu_top__DOT__alu_op_sel)))) 
                                                                         & (~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->cpu_top__DOT__alu_op_sext))))))
                                                                      ? 0U
                                                                      : 
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->cpu_top__DOT__alu_e__DOT__dword_result 
                                                                                >> 0x1fU)))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->cpu_top__DOT__alu_e__DOT__dword_result)))),64);
            tracep->chgBit(oldp+213,(((1U & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x3000U 
                                                       & (IData)(vlSelf->cpu_top__DOT__alu_op_sel)))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->cpu_top__DOT__alu_op_sext))))))
                                       ? 0U : (1U & (IData)(
                                                            (vlSelf->cpu_top__DOT__alu_e__DOT__dword_result 
                                                             >> 0x1fU))))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+214,(vlSelf->cpu_top__DOT__current_pc),64);
            tracep->chgQData(oldp+216,((4ULL + vlSelf->cpu_top__DOT__current_pc)),64);
            tracep->chgQData(oldp+218,(vlSelf->cpu_top__DOT__pc_IF_ID),64);
            tracep->chgIData(oldp+220,(vlSelf->cpu_top__DOT__inst_IF_ID),32);
            tracep->chgBit(oldp+221,(vlSelf->cpu_top__DOT__IF_ID_valid));
            tracep->chgQData(oldp+222,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0]),64);
            tracep->chgQData(oldp+224,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[1]),64);
            tracep->chgQData(oldp+226,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[2]),64);
            tracep->chgQData(oldp+228,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[3]),64);
            tracep->chgQData(oldp+230,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[4]),64);
            tracep->chgQData(oldp+232,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[5]),64);
            tracep->chgQData(oldp+234,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[6]),64);
            tracep->chgQData(oldp+236,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[7]),64);
            tracep->chgQData(oldp+238,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[8]),64);
            tracep->chgQData(oldp+240,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[9]),64);
            tracep->chgQData(oldp+242,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[10]),64);
            tracep->chgQData(oldp+244,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[11]),64);
            tracep->chgQData(oldp+246,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[12]),64);
            tracep->chgQData(oldp+248,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[13]),64);
            tracep->chgQData(oldp+250,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[14]),64);
            tracep->chgQData(oldp+252,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[15]),64);
            tracep->chgQData(oldp+254,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[16]),64);
            tracep->chgQData(oldp+256,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[17]),64);
            tracep->chgQData(oldp+258,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[18]),64);
            tracep->chgQData(oldp+260,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[19]),64);
            tracep->chgQData(oldp+262,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[20]),64);
            tracep->chgQData(oldp+264,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[21]),64);
            tracep->chgQData(oldp+266,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[22]),64);
            tracep->chgQData(oldp+268,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[23]),64);
            tracep->chgQData(oldp+270,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[24]),64);
            tracep->chgQData(oldp+272,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[25]),64);
            tracep->chgQData(oldp+274,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[26]),64);
            tracep->chgQData(oldp+276,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[27]),64);
            tracep->chgQData(oldp+278,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[28]),64);
            tracep->chgQData(oldp+280,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[29]),64);
            tracep->chgQData(oldp+282,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[30]),64);
            tracep->chgQData(oldp+284,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[31]),64);
        }
        tracep->chgBit(oldp+286,(vlSelf->I_sys_clk));
        tracep->chgBit(oldp+287,(vlSelf->I_rst));
        tracep->chgIData(oldp+288,(vlSelf->I_inst),32);
        tracep->chgBit(oldp+289,(vlSelf->I_inst_valid));
        tracep->chgQData(oldp+290,(vlSelf->O_pc),64);
        tracep->chgBit(oldp+292,(vlSelf->O_pc_valid));
        tracep->chgQData(oldp+293,(vlSelf->O_mem_addr),64);
        tracep->chgBit(oldp+295,(vlSelf->O_mem_rd_en));
        tracep->chgBit(oldp+296,(vlSelf->O_mem_wen));
        tracep->chgQData(oldp+297,(vlSelf->I_mem_rd_data),64);
        tracep->chgQData(oldp+299,(vlSelf->O_mem_wr_data),64);
        tracep->chgCData(oldp+301,(vlSelf->O_mem_wr_strb),8);
        tracep->chgQData(oldp+302,(((((((- (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI))) 
                                        & (((- (QData)((IData)(
                                                               (vlSelf->I_inst 
                                                                >> 0x1fU)))) 
                                            << 0xcU) 
                                           | (QData)((IData)(
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
                                              << 0xcU) 
                                             | (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__immS))))) 
                                      | ((- (QData)((IData)(
                                                            (0x63U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->I_inst))))) 
                                         & (((- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__immB) 
                                                                    >> 0xcU))))) 
                                             << 0xdU) 
                                            | (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__immB))))) 
                                     | ((- (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU))) 
                                        & (((QData)((IData)(
                                                            (- (IData)(
                                                                       (vlSelf->I_inst 
                                                                        >> 0x1fU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
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
                                           << 0x15U) 
                                          | (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__immJ)))))),64);
        tracep->chgCData(oldp+304,((0x1fU & (vlSelf->I_inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+305,((0x1fU & (vlSelf->I_inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+306,((0x1fU & (vlSelf->I_inst 
                                             >> 7U))),5);
        tracep->chgBit(oldp+307,((0x23U == (0x7fU & vlSelf->I_inst))));
        tracep->chgCData(oldp+308,((vlSelf->I_inst 
                                    >> 0x19U)),7);
        tracep->chgCData(oldp+309,((0x7fU & vlSelf->I_inst)),7);
        tracep->chgCData(oldp+310,((7U & (vlSelf->I_inst 
                                          >> 0xcU))),3);
        tracep->chgSData(oldp+311,((vlSelf->I_inst 
                                    >> 0x14U)),12);
        tracep->chgIData(oldp+312,((0xfffff000U & vlSelf->I_inst)),32);
        tracep->chgBit(oldp+313,((0x63U == (0x7fU & vlSelf->I_inst))));
        tracep->chgBit(oldp+314,((0x6fU == (0x7fU & vlSelf->I_inst))));
        tracep->chgBit(oldp+315,((0x37U == (0x7fU & vlSelf->I_inst))));
        tracep->chgBit(oldp+316,((0x17U == (0x7fU & vlSelf->I_inst))));
        tracep->chgBit(oldp+317,((IData)((0x4003U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+318,((IData)((0x13U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+319,((IData)((0x2013U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+320,((IData)((0x3013U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+321,((IData)((0x4013U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+322,((IData)((0x6013U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+323,((IData)((0x7013U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+324,((IData)(((0x1013U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (0U == 
                                             (vlSelf->I_inst 
                                              >> 0x1aU))))));
        tracep->chgBit(oldp+325,((IData)(((0x5013U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (0U == 
                                             (vlSelf->I_inst 
                                              >> 0x1aU))))));
        tracep->chgBit(oldp+326,((IData)(((0x5013U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (0x10U 
                                             == (vlSelf->I_inst 
                                                 >> 0x1aU))))));
        tracep->chgBit(oldp+327,((IData)((0x1bU == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+328,((IData)(((0x101bU 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (0U == 
                                             (vlSelf->I_inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+329,((IData)(((0x501bU 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (0U == 
                                             (vlSelf->I_inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+330,((IData)(((0x501bU 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (0x20U 
                                             == (vlSelf->I_inst 
                                                 >> 0x19U))))));
        tracep->chgBit(oldp+331,((IData)(((0x33U == 
                                           (0x707fU 
                                            & vlSelf->I_inst)) 
                                          & (0U == 
                                             (vlSelf->I_inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+332,((IData)(((0x33U == 
                                           (0x707fU 
                                            & vlSelf->I_inst)) 
                                          & (0x20U 
                                             == (vlSelf->I_inst 
                                                 >> 0x19U))))));
        tracep->chgBit(oldp+333,((IData)(((0x1033U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (0U == 
                                             (vlSelf->I_inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+334,((IData)(((0x2033U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (0U == 
                                             (vlSelf->I_inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+335,((IData)(((0x3033U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (0U == 
                                             (vlSelf->I_inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+336,((IData)(((0x4033U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (0U == 
                                             (vlSelf->I_inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+337,((IData)(((0x5033U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (0U == 
                                             (vlSelf->I_inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+338,((IData)(((0x5033U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (0x20U 
                                             == (vlSelf->I_inst 
                                                 >> 0x19U))))));
        tracep->chgBit(oldp+339,((IData)(((0x6033U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (0U == 
                                             (vlSelf->I_inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+340,((IData)(((0x7033U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (0U == 
                                             (vlSelf->I_inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+341,((IData)(((0x3033U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (1U == 
                                             (vlSelf->I_inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+342,((IData)(((0x5033U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (1U == 
                                             (vlSelf->I_inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+343,((IData)(((0x7033U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (1U == 
                                             (vlSelf->I_inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+344,((IData)(((0x3bU == 
                                           (0x707fU 
                                            & vlSelf->I_inst)) 
                                          & (0U == 
                                             (vlSelf->I_inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+345,((IData)(((0x3bU == 
                                           (0x707fU 
                                            & vlSelf->I_inst)) 
                                          & (0x20U 
                                             == (vlSelf->I_inst 
                                                 >> 0x19U))))));
        tracep->chgBit(oldp+346,((IData)(((0x103bU 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (0U == 
                                             (vlSelf->I_inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+347,((IData)(((0x503bU 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (0U == 
                                             (vlSelf->I_inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+348,((IData)(((0x503bU 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (0x20U 
                                             == (vlSelf->I_inst 
                                                 >> 0x19U))))));
        tracep->chgBit(oldp+349,((IData)(((0x503bU 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (1U == 
                                             (vlSelf->I_inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+350,((IData)(((0x703bU 
                                           == (0x707fU 
                                               & vlSelf->I_inst)) 
                                          & (1U == 
                                             (vlSelf->I_inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+351,((IData)((0x3023U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+352,((IData)((0x2023U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+353,((IData)((0x1023U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+354,((IData)((0x23U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+355,((IData)((0x63U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+356,((IData)((0x1063U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+357,((IData)((0x4063U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+358,((IData)((0x5063U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+359,((IData)((0x6063U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+360,((IData)((0x7063U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+361,((0x73U == vlSelf->I_inst)));
        tracep->chgBit(oldp+362,((0x100073U == vlSelf->I_inst)));
        tracep->chgBit(oldp+363,((3U == (0x7fU & vlSelf->I_inst))));
        tracep->chgBit(oldp+364,(((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->I_inst)) 
                                           & (0x20U 
                                              == (vlSelf->I_inst 
                                                  >> 0x19U)))) 
                                  | (IData)(((0x3bU 
                                              == (0x707fU 
                                                  & vlSelf->I_inst)) 
                                             & (0x20U 
                                                == 
                                                (vlSelf->I_inst 
                                                 >> 0x19U)))))));
        tracep->chgBit(oldp+365,(((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->I_inst))) 
                                  | (IData)(((0x2033U 
                                              == (0x707fU 
                                                  & vlSelf->I_inst)) 
                                             & (0U 
                                                == 
                                                (vlSelf->I_inst 
                                                 >> 0x19U)))))));
        tracep->chgBit(oldp+366,(((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->I_inst))) 
                                  | (IData)(((0x3033U 
                                              == (0x707fU 
                                                  & vlSelf->I_inst)) 
                                             & (0U 
                                                == 
                                                (vlSelf->I_inst 
                                                 >> 0x19U)))))));
        tracep->chgBit(oldp+367,(((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->I_inst))) 
                                  | (IData)(((0x4033U 
                                              == (0x707fU 
                                                  & vlSelf->I_inst)) 
                                             & (0U 
                                                == 
                                                (vlSelf->I_inst 
                                                 >> 0x19U)))))));
        tracep->chgBit(oldp+368,(((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->I_inst))) 
                                  | (IData)(((0x6033U 
                                              == (0x707fU 
                                                  & vlSelf->I_inst)) 
                                             & (0U 
                                                == 
                                                (vlSelf->I_inst 
                                                 >> 0x19U)))))));
        tracep->chgBit(oldp+369,(((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->I_inst))) 
                                  | (IData)(((0x7033U 
                                              == (0x707fU 
                                                  & vlSelf->I_inst)) 
                                             & (0U 
                                                == 
                                                (vlSelf->I_inst 
                                                 >> 0x19U)))))));
        tracep->chgBit(oldp+370,(((((IData)(((0x1013U 
                                              == (0x707fU 
                                                  & vlSelf->I_inst)) 
                                             & (0U 
                                                == 
                                                (vlSelf->I_inst 
                                                 >> 0x1aU)))) 
                                    | (IData)(((0x1033U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->I_inst)) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->I_inst 
                                                   >> 0x19U))))) 
                                   | (IData)(((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->I_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->I_inst 
                                                  >> 0x19U))))) 
                                  | (IData)(((0x103bU 
                                              == (0x707fU 
                                                  & vlSelf->I_inst)) 
                                             & (0U 
                                                == 
                                                (vlSelf->I_inst 
                                                 >> 0x19U)))))));
        tracep->chgBit(oldp+371,(((((IData)(((0x5013U 
                                              == (0x707fU 
                                                  & vlSelf->I_inst)) 
                                             & (0U 
                                                == 
                                                (vlSelf->I_inst 
                                                 >> 0x1aU)))) 
                                    | (IData)(((0x5033U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->I_inst)) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->I_inst 
                                                   >> 0x19U))))) 
                                   | (IData)(((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->I_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->I_inst 
                                                  >> 0x19U))))) 
                                  | (IData)(((0x503bU 
                                              == (0x707fU 
                                                  & vlSelf->I_inst)) 
                                             & (0U 
                                                == 
                                                (vlSelf->I_inst 
                                                 >> 0x19U)))))));
        tracep->chgBit(oldp+372,(((((IData)(((0x5013U 
                                              == (0x707fU 
                                                  & vlSelf->I_inst)) 
                                             & (0x10U 
                                                == 
                                                (vlSelf->I_inst 
                                                 >> 0x1aU)))) 
                                    | (IData)(((0x5033U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->I_inst)) 
                                               & (0x20U 
                                                  == 
                                                  (vlSelf->I_inst 
                                                   >> 0x19U))))) 
                                   | (IData)(((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->I_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->I_inst 
                                                  >> 0x19U))))) 
                                  | (IData)(((0x503bU 
                                              == (0x707fU 
                                                  & vlSelf->I_inst)) 
                                             & (0x20U 
                                                == 
                                                (vlSelf->I_inst 
                                                 >> 0x19U)))))));
        tracep->chgBit(oldp+373,((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULH) 
                                   | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                  | (IData)(((0x3033U 
                                              == (0x707fU 
                                                  & vlSelf->I_inst)) 
                                             & (1U 
                                                == 
                                                (vlSelf->I_inst 
                                                 >> 0x19U)))))));
        tracep->chgBit(oldp+374,(((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIV) 
                                    | (IData)(((0x5033U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->I_inst)) 
                                               & (1U 
                                                  == 
                                                  (vlSelf->I_inst 
                                                   >> 0x19U))))) 
                                   | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIVW)) 
                                  | (IData)(((0x503bU 
                                              == (0x707fU 
                                                  & vlSelf->I_inst)) 
                                             & (1U 
                                                == 
                                                (vlSelf->I_inst 
                                                 >> 0x19U)))))));
        tracep->chgBit(oldp+375,(((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REM) 
                                    | (IData)(((0x7033U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->I_inst)) 
                                               & (1U 
                                                  == 
                                                  (vlSelf->I_inst 
                                                   >> 0x19U))))) 
                                   | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REMW)) 
                                  | (IData)(((0x703bU 
                                              == (0x707fU 
                                                  & vlSelf->I_inst)) 
                                             & (1U 
                                                == 
                                                (vlSelf->I_inst 
                                                 >> 0x19U)))))));
        tracep->chgBit(oldp+376,((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR) 
                                   | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI)) 
                                  | (0x23U == (0x7fU 
                                               & vlSelf->I_inst)))));
        tracep->chgBit(oldp+377,((((0x63U == (0x7fU 
                                              & vlSelf->I_inst)) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelf->I_inst))) 
                                  | (0x17U == (0x7fU 
                                               & vlSelf->I_inst)))));
        tracep->chgBit(oldp+378,((((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI) 
                                     | (0x23U == (0x7fU 
                                                  & vlSelf->I_inst))) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelf->I_inst))) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelf->I_inst))) 
                                  | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU))));
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
