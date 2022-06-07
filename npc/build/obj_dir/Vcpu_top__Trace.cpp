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
    VlWide<3>/*95:0*/ __Vtemp50;
    VlWide<3>/*95:0*/ __Vtemp51;
    VlWide<3>/*95:0*/ __Vtemp52;
    VlWide<3>/*95:0*/ __Vtemp55;
    VlWide<3>/*95:0*/ __Vtemp56;
    VlWide<3>/*95:0*/ __Vtemp57;
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
            tracep->chgQData(oldp+14,(vlSelf->cpu_top__DOT__alu_e__DOT__result),64);
            tracep->chgCData(oldp+16,(vlSelf->cpu_top__DOT__dnpc_sel),3);
            tracep->chgCData(oldp+17,(vlSelf->cpu_top__DOT__regin_sel),3);
            tracep->chgCData(oldp+18,(vlSelf->cpu_top__DOT__opnum1_sel),3);
            tracep->chgCData(oldp+19,(vlSelf->cpu_top__DOT__opnum2_sel),2);
            tracep->chgSData(oldp+20,((1U & (- (IData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__add_flag))))),15);
            tracep->chgBit(oldp+21,(vlSelf->cpu_top__DOT__reg_wen));
            tracep->chgWData(oldp+22,(vlSelf->cpu_top__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+28,(vlSelf->cpu_top__DOT__nextpc_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+30,(vlSelf->cpu_top__DOT__nextpc_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+32,(vlSelf->cpu_top__DOT__nextpc_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgWData(oldp+34,(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+40,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+42,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+44,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgBit(oldp+46,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0]));
            tracep->chgBit(oldp+47,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[1]));
            tracep->chgBit(oldp+48,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[2]));
            tracep->chgBit(oldp+49,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[3]));
            tracep->chgBit(oldp+50,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[4]));
            tracep->chgBit(oldp+51,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[5]));
            tracep->chgBit(oldp+52,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[6]));
            tracep->chgBit(oldp+53,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[7]));
            tracep->chgBit(oldp+54,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[8]));
            tracep->chgBit(oldp+55,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[9]));
            tracep->chgBit(oldp+56,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[10]));
            tracep->chgBit(oldp+57,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[11]));
            tracep->chgBit(oldp+58,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[12]));
            tracep->chgBit(oldp+59,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[13]));
            tracep->chgBit(oldp+60,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[14]));
            tracep->chgBit(oldp+61,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[15]));
            tracep->chgBit(oldp+62,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[16]));
            tracep->chgBit(oldp+63,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[17]));
            tracep->chgBit(oldp+64,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[18]));
            tracep->chgBit(oldp+65,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[19]));
            tracep->chgBit(oldp+66,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[20]));
            tracep->chgBit(oldp+67,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[21]));
            tracep->chgBit(oldp+68,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[22]));
            tracep->chgBit(oldp+69,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[23]));
            tracep->chgBit(oldp+70,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[24]));
            tracep->chgBit(oldp+71,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[25]));
            tracep->chgBit(oldp+72,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[26]));
            tracep->chgBit(oldp+73,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[27]));
            tracep->chgBit(oldp+74,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[28]));
            tracep->chgBit(oldp+75,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[29]));
            tracep->chgBit(oldp+76,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[30]));
            tracep->chgBit(oldp+77,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[31]));
            tracep->chgSData(oldp+78,(vlSelf->cpu_top__DOT__decoder_e__DOT__immS),12);
            tracep->chgSData(oldp+79,(vlSelf->cpu_top__DOT__decoder_e__DOT__immB),13);
            tracep->chgIData(oldp+80,(vlSelf->cpu_top__DOT__decoder_e__DOT__immJ),21);
            tracep->chgBit(oldp+81,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI));
            tracep->chgBit(oldp+82,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR));
            tracep->chgBit(oldp+83,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU));
            tracep->chgBit(oldp+84,(vlSelf->cpu_top__DOT__decoder_e__DOT__JALR));
            tracep->chgBit(oldp+85,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeB_jr));
            tracep->chgBit(oldp+86,(vlSelf->cpu_top__DOT__decoder_e__DOT__eq));
            tracep->chgBit(oldp+87,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__eq)))));
            tracep->chgBit(oldp+88,(vlSelf->cpu_top__DOT__decoder_e__DOT__lt));
            tracep->chgBit(oldp+89,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__lt)))));
            tracep->chgBit(oldp+90,(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu));
            tracep->chgBit(oldp+91,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu)))));
            tracep->chgBit(oldp+92,(vlSelf->cpu_top__DOT__decoder_e__DOT__add_flag));
            tracep->chgWData(oldp+93,(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+99,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+101,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+103,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgWData(oldp+105,(vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data),128);
            tracep->chgQData(oldp+109,(vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+111,(vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[1]),64);
            tracep->chgBit(oldp+113,(0U));
            tracep->chgBit(oldp+114,(0U));
            tracep->chgBit(oldp+115,(0U));
            tracep->chgBit(oldp+116,(0U));
            tracep->chgBit(oldp+117,(0U));
            tracep->chgBit(oldp+118,(0U));
            tracep->chgBit(oldp+119,(0U));
            tracep->chgBit(oldp+120,(0U));
            tracep->chgBit(oldp+121,(0U));
            tracep->chgBit(oldp+122,(0U));
            tracep->chgBit(oldp+123,(0U));
            tracep->chgBit(oldp+124,(0U));
            tracep->chgBit(oldp+125,(0U));
            tracep->chgBit(oldp+126,(0U));
            tracep->chgQData(oldp+127,(vlSelf->cpu_top__DOT__alu_e__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp50, vlSelf->cpu_top__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp51, vlSelf->cpu_top__DOT__alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp52, __Vtemp50, __Vtemp51);
            tracep->chgQData(oldp+129,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp52[2U])))))),64);
            tracep->chgQData(oldp+131,((vlSelf->cpu_top__DOT__alu_op1 
                                        ^ vlSelf->cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+133,((vlSelf->cpu_top__DOT__alu_op1 
                                        | vlSelf->cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+135,((vlSelf->cpu_top__DOT__alu_op1 
                                        & vlSelf->cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+137,(vlSelf->cpu_top__DOT__alu_e__DOT__sll_result),64);
            tracep->chgQData(oldp+139,(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result),64);
            tracep->chgQData(oldp+141,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->cpu_top__DOT__alu_e__DOT__shift_op 
                                                                        >> 0x3fU)))))) 
                                         & (~ (0xffffffffffffffffULL 
                                               >> (0x3fU 
                                                   & (IData)(vlSelf->cpu_top__DOT__alu_op2))))) 
                                        | vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)),64);
            tracep->chgQData(oldp+143,(VL_MULS_QQQ(64,64,64, vlSelf->cpu_top__DOT__alu_op1, vlSelf->cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+145,(VL_DIVS_QQQ(64, vlSelf->cpu_top__DOT__alu_op1, vlSelf->cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+147,(VL_DIV_QQQ(64, vlSelf->cpu_top__DOT__alu_op1, vlSelf->cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+149,(VL_MODDIVS_QQQ(64, vlSelf->cpu_top__DOT__alu_op1, vlSelf->cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+151,(VL_MODDIV_QQQ(64, vlSelf->cpu_top__DOT__alu_op1, vlSelf->cpu_top__DOT__alu_op2)),64);
            tracep->chgQData(oldp+153,(vlSelf->cpu_top__DOT__alu_e__DOT__adder2),64);
            VL_EXTEND_WQ(65,64, __Vtemp55, vlSelf->cpu_top__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp56, vlSelf->cpu_top__DOT__alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp57, __Vtemp55, __Vtemp56);
            tracep->chgBit(oldp+155,((1U & __Vtemp57[2U])));
            tracep->chgQData(oldp+156,(vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1),64);
            tracep->chgQData(oldp+158,(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op),64);
            tracep->chgCData(oldp+160,((0x3fU & (IData)(vlSelf->cpu_top__DOT__alu_op2))),6);
            tracep->chgQData(oldp+161,((~ (0xffffffffffffffffULL 
                                           >> (0x3fU 
                                               & (IData)(vlSelf->cpu_top__DOT__alu_op2))))),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+163,(vlSelf->cpu_top__DOT__current_pc),64);
            tracep->chgQData(oldp+165,((4ULL + vlSelf->cpu_top__DOT__current_pc)),64);
            tracep->chgQData(oldp+167,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0]),64);
            tracep->chgQData(oldp+169,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[1]),64);
            tracep->chgQData(oldp+171,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[2]),64);
            tracep->chgQData(oldp+173,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[3]),64);
            tracep->chgQData(oldp+175,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[4]),64);
            tracep->chgQData(oldp+177,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[5]),64);
            tracep->chgQData(oldp+179,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[6]),64);
            tracep->chgQData(oldp+181,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[7]),64);
            tracep->chgQData(oldp+183,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[8]),64);
            tracep->chgQData(oldp+185,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[9]),64);
            tracep->chgQData(oldp+187,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[10]),64);
            tracep->chgQData(oldp+189,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[11]),64);
            tracep->chgQData(oldp+191,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[12]),64);
            tracep->chgQData(oldp+193,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[13]),64);
            tracep->chgQData(oldp+195,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[14]),64);
            tracep->chgQData(oldp+197,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[15]),64);
            tracep->chgQData(oldp+199,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[16]),64);
            tracep->chgQData(oldp+201,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[17]),64);
            tracep->chgQData(oldp+203,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[18]),64);
            tracep->chgQData(oldp+205,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[19]),64);
            tracep->chgQData(oldp+207,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[20]),64);
            tracep->chgQData(oldp+209,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[21]),64);
            tracep->chgQData(oldp+211,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[22]),64);
            tracep->chgQData(oldp+213,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[23]),64);
            tracep->chgQData(oldp+215,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[24]),64);
            tracep->chgQData(oldp+217,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[25]),64);
            tracep->chgQData(oldp+219,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[26]),64);
            tracep->chgQData(oldp+221,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[27]),64);
            tracep->chgQData(oldp+223,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[28]),64);
            tracep->chgQData(oldp+225,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[29]),64);
            tracep->chgQData(oldp+227,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[30]),64);
            tracep->chgQData(oldp+229,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[31]),64);
        }
        tracep->chgBit(oldp+231,(vlSelf->I_sys_clk));
        tracep->chgBit(oldp+232,(vlSelf->I_rst));
        tracep->chgIData(oldp+233,(vlSelf->I_inst),32);
        tracep->chgQData(oldp+234,(vlSelf->O_pc),64);
        tracep->chgQData(oldp+236,(vlSelf->I_mem_rd_data),64);
        tracep->chgBit(oldp+238,(vlSelf->O_mem_rd_en));
        tracep->chgQData(oldp+239,(vlSelf->O_mem_wr_data),64);
        tracep->chgQData(oldp+241,(vlSelf->O_mem_wr_addr),64);
        tracep->chgBit(oldp+243,(vlSelf->O_mem_wen));
        tracep->chgQData(oldp+244,(((((((- (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI))) 
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
        tracep->chgCData(oldp+246,((0x1fU & (vlSelf->I_inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+247,((0x1fU & (vlSelf->I_inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+248,((0x1fU & (vlSelf->I_inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+249,((7U & (vlSelf->I_inst 
                                          >> 0xcU))),3);
        tracep->chgBit(oldp+250,((0x23U == (0x7fU & vlSelf->I_inst))));
        tracep->chgCData(oldp+251,((vlSelf->I_inst 
                                    >> 0x19U)),7);
        tracep->chgCData(oldp+252,((0x7fU & vlSelf->I_inst)),7);
        tracep->chgSData(oldp+253,((vlSelf->I_inst 
                                    >> 0x14U)),12);
        tracep->chgIData(oldp+254,((0xfffff000U & vlSelf->I_inst)),32);
        tracep->chgBit(oldp+255,((0x63U == (0x7fU & vlSelf->I_inst))));
        tracep->chgBit(oldp+256,((0x6fU == (0x7fU & vlSelf->I_inst))));
        tracep->chgBit(oldp+257,((0x37U == (0x7fU & vlSelf->I_inst))));
        tracep->chgBit(oldp+258,((0x17U == (0x7fU & vlSelf->I_inst))));
        tracep->chgBit(oldp+259,((IData)((0x13U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+260,((IData)((0x3023U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+261,((IData)((0x63U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+262,((IData)((0x1063U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+263,((IData)((0x4063U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+264,((IData)((0x5063U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+265,((IData)((0x6063U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+266,((IData)((0x7063U == 
                                          (0x707fU 
                                           & vlSelf->I_inst)))));
        tracep->chgBit(oldp+267,((3U == (0x7fU & vlSelf->I_inst))));
        tracep->chgBit(oldp+268,((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR) 
                                   | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI)) 
                                  | (0x23U == (0x7fU 
                                               & vlSelf->I_inst)))));
        tracep->chgBit(oldp+269,((((0x63U == (0x7fU 
                                              & vlSelf->I_inst)) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelf->I_inst))) 
                                  | (0x17U == (0x7fU 
                                               & vlSelf->I_inst)))));
        tracep->chgBit(oldp+270,((((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI) 
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
