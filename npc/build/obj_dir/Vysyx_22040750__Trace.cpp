// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040750__Syms.h"


void Vysyx_22040750___024root__traceChgSub0(Vysyx_22040750___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22040750___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22040750___024root* const __restrict vlSelf = static_cast<Vysyx_22040750___024root*>(voidSelf);
    Vysyx_22040750__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22040750___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

extern const VlWide<8>/*255:0*/ Vysyx_22040750__ConstPool__CONST_9e67c271_0;
extern const VlWide<8>/*255:0*/ Vysyx_22040750__ConstPool__CONST_5b979007_0;

void Vysyx_22040750___024root__traceChgSub0(Vysyx_22040750___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040750__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp485;
    VlWide<4>/*127:0*/ __Vtemp486;
    VlWide<4>/*127:0*/ __Vtemp489;
    VlWide<4>/*127:0*/ __Vtemp490;
    VlWide<4>/*127:0*/ __Vtemp491;
    VlWide<4>/*127:0*/ __Vtemp492;
    VlWide<4>/*127:0*/ __Vtemp493;
    VlWide<4>/*127:0*/ __Vtemp494;
    VlWide<3>/*95:0*/ __Vtemp496;
    VlWide<3>/*95:0*/ __Vtemp497;
    VlWide<3>/*95:0*/ __Vtemp498;
    VlWide<3>/*95:0*/ __Vtemp499;
    VlWide<3>/*95:0*/ __Vtemp500;
    VlWide<3>/*95:0*/ __Vtemp515;
    VlWide<3>/*95:0*/ __Vtemp516;
    VlWide<3>/*95:0*/ __Vtemp517;
    VlWide<3>/*95:0*/ __Vtemp518;
    VlWide<3>/*95:0*/ __Vtemp519;
    VlWide<4>/*127:0*/ __Vtemp521;
    VlWide<5>/*159:0*/ __Vtemp547;
    VlWide<5>/*159:0*/ __Vtemp549;
    VlWide<8>/*255:0*/ __Vtemp550;
    VlWide<8>/*255:0*/ __Vtemp551;
    VlWide<8>/*255:0*/ __Vtemp553;
    VlWide<8>/*255:0*/ __Vtemp554;
    VlWide<8>/*255:0*/ __Vtemp563;
    VlWide<8>/*255:0*/ __Vtemp570;
    VlWide<8>/*255:0*/ __Vtemp571;
    VlWide<4>/*127:0*/ __Vtemp575;
    VlWide<4>/*127:0*/ __Vtemp579;
    VlWide<4>/*127:0*/ __Vtemp581;
    VlWide<4>/*127:0*/ __Vtemp583;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->ysyx_22040750__DOT__iaddr),6);
            tracep->chgBit(oldp+1,((1U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen))));
            if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                  ? 1U : 0U)) {
                __Vtemp485[0U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U];
                __Vtemp485[1U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U];
                __Vtemp485[2U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U];
                __Vtemp485[3U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U];
            } else {
                __Vtemp485[0U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[0U];
                __Vtemp485[1U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[1U];
                __Vtemp485[2U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[2U];
                __Vtemp485[3U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[3U];
            }
            tracep->chgWData(oldp+2,(__Vtemp485),128);
            __Vtemp486[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[0U];
            __Vtemp486[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[1U];
            __Vtemp486[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[2U];
            __Vtemp486[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[3U];
            tracep->chgWData(oldp+6,(__Vtemp486),128);
            tracep->chgWData(oldp+10,(vlSelf->ysyx_22040750__DOT__io_sram0_rdata),128);
            tracep->chgBit(oldp+14,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 1U))));
            if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                  ? 1U : 0U)) {
                __Vtemp489[0U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U];
                __Vtemp489[1U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U];
                __Vtemp489[2U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U];
                __Vtemp489[3U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U];
            } else {
                __Vtemp489[0U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[4U];
                __Vtemp489[1U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[5U];
                __Vtemp489[2U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[6U];
                __Vtemp489[3U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[7U];
            }
            tracep->chgWData(oldp+15,(__Vtemp489),128);
            __Vtemp490[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[4U];
            __Vtemp490[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[5U];
            __Vtemp490[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[6U];
            __Vtemp490[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[7U];
            tracep->chgWData(oldp+19,(__Vtemp490),128);
            tracep->chgWData(oldp+23,(vlSelf->ysyx_22040750__DOT__io_sram1_rdata),128);
            tracep->chgBit(oldp+27,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 2U))));
            tracep->chgWData(oldp+28,(vlSelf->ysyx_22040750__DOT__io_sram2_rdata),128);
            tracep->chgBit(oldp+32,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 3U))));
            tracep->chgWData(oldp+33,(vlSelf->ysyx_22040750__DOT__io_sram3_rdata),128);
            tracep->chgCData(oldp+37,(vlSelf->ysyx_22040750__DOT__daddr),6);
            tracep->chgBit(oldp+38,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 4U))));
            __Vtemp491[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[0U];
            __Vtemp491[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[1U];
            __Vtemp491[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[2U];
            __Vtemp491[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[3U];
            tracep->chgWData(oldp+39,(__Vtemp491),128);
            __Vtemp492[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[0U];
            __Vtemp492[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[1U];
            __Vtemp492[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[2U];
            __Vtemp492[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[3U];
            tracep->chgWData(oldp+43,(__Vtemp492),128);
            tracep->chgWData(oldp+47,(vlSelf->ysyx_22040750__DOT__io_sram4_rdata),128);
            tracep->chgBit(oldp+51,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 5U))));
            __Vtemp493[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[4U];
            __Vtemp493[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[5U];
            __Vtemp493[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[6U];
            __Vtemp493[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[7U];
            tracep->chgWData(oldp+52,(__Vtemp493),128);
            __Vtemp494[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[4U];
            __Vtemp494[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[5U];
            __Vtemp494[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[6U];
            __Vtemp494[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[7U];
            tracep->chgWData(oldp+56,(__Vtemp494),128);
            tracep->chgWData(oldp+60,(vlSelf->ysyx_22040750__DOT__io_sram5_rdata),128);
            tracep->chgBit(oldp+64,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 6U))));
            tracep->chgWData(oldp+65,(vlSelf->ysyx_22040750__DOT__io_sram6_rdata),128);
            tracep->chgBit(oldp+69,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                           >> 7U))));
            tracep->chgWData(oldp+70,(vlSelf->ysyx_22040750__DOT__io_sram7_rdata),128);
            tracep->chgIData(oldp+74,(vlSelf->ysyx_22040750__DOT__cpu_inst),32);
            tracep->chgIData(oldp+75,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc),32);
            tracep->chgBit(oldp+76,(vlSelf->ysyx_22040750__DOT__cpu_inst_valid));
            tracep->chgBit(oldp+77,(vlSelf->ysyx_22040750__DOT__cpu_pc_valid));
            tracep->chgBit(oldp+78,(vlSelf->ysyx_22040750__DOT__cpu_pc_ready));
            tracep->chgIData(oldp+79,((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out)),32);
            tracep->chgBit(oldp+80,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en));
            tracep->chgBit(oldp+81,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en));
            tracep->chgQData(oldp+82,((((QData)((IData)(
                                                        vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[
                                                        (((IData)(0x3fU) 
                                                          + 
                                                          (0xc0U 
                                                           & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                              >> 2U))) 
                                                         >> 5U)])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg[
                                                                    (6U 
                                                                     & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                                        >> 7U))])))),64);
            tracep->chgQData(oldp+84,(vlSelf->ysyx_22040750__DOT__mem_wdata),64);
            tracep->chgBit(oldp+86,((1U & ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state)) 
                                           | ((0x20U 
                                               == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                               ? 1U
                                               : 0U)))));
            tracep->chgBit(oldp+87,((0x40U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))));
            tracep->chgBit(oldp+88,(vlSelf->ysyx_22040750__DOT__cpu_mem_ready));
            tracep->chgCData(oldp+89,((0xffU & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_wstrb) 
                                                << 
                                                (7U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out))))),8);
            tracep->chgIData(oldp+90,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_pc),32);
            tracep->chgIData(oldp+91,(((IData)(4U) 
                                       + vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_pc)),32);
            tracep->chgIData(oldp+92,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__current_inst),32);
            tracep->chgQData(oldp+93,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__imm),64);
            tracep->chgQData(oldp+95,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__wr_data),64);
            tracep->chgQData(oldp+97,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
                                      [(0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                 >> 0xfU))]),64);
            tracep->chgQData(oldp+99,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr
                                      [(0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                 >> 0x14U))]),64);
            tracep->chgQData(oldp+101,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1),64);
            tracep->chgQData(oldp+103,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2),64);
            tracep->chgQData(oldp+105,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_out),64);
            tracep->chgQData(oldp+107,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_in),64);
            tracep->chgQData(oldp+109,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rs2),64);
            tracep->chgQData(oldp+111,(((2U == (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_intr) 
                                                 << 1U) 
                                                | (0x30200073U 
                                                   == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))
                                         ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mtvec
                                         : ((1U == 
                                             (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_intr) 
                                               << 1U) 
                                              | (0x30200073U 
                                                 == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))
                                             ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mepc
                                             : ((0U 
                                                 == 
                                                 (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_intr) 
                                                   << 1U) 
                                                  | (0x30200073U 
                                                     == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))
                                                 ? 
                                                ((0x341U 
                                                  == 
                                                  (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0x14U))
                                                  ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mepc
                                                  : 
                                                 ((0x300U 
                                                   == 
                                                   (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                    >> 0x14U))
                                                   ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus
                                                   : 
                                                  ((0x305U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mtvec
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                      >> 0x14U))
                                                     ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mcause
                                                     : 
                                                    ((0x340U 
                                                      == 
                                                      (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                       >> 0x14U))
                                                      ? vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mscratch
                                                      : 0ULL)))))
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+113,((((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op 
                                          & (- (QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (0x24U 
                                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))))) 
                                         | ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr 
                                             | vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op) 
                                            & (- (QData)((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x12U 
                                                                   & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel)))))))) 
                                        | ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr 
                                            & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op)) 
                                           & (- (QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (9U 
                                                                  & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))))))),64);
            tracep->chgCData(oldp+115,((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+116,((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+117,((0x1fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+118,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel),5);
            tracep->chgCData(oldp+119,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen) 
                                          & (3U == 
                                             (0x7fU 
                                              & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                         << 1U) | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen) 
                                                   & (3U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))),3);
            tracep->chgCData(oldp+120,((((1U & (- (IData)(
                                                          ((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR) 
                                                             | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI) 
                                                                & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR)))) 
                                                            | (0x23U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                                           | (0x73U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))))) 
                                         | (2U & (- (IData)(
                                                            ((((0x63U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                               | (0x6fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                                              | (0x17U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                                             | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR)))))) 
                                        | (4U & (- (IData)(
                                                           (0x37U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))))),3);
            tracep->chgCData(oldp+121,((((1U & (- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR)))) 
                                         | (2U & (- (IData)(
                                                            (((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI) 
                                                                & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR))) 
                                                               | (0x23U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                                              | (0x63U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                                             | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeU)))))) 
                                        | (4U & (- (IData)(
                                                           ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR) 
                                                            | (0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))))))),3);
            tracep->chgSData(oldp+122,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op_sel),15);
            tracep->chgCData(oldp+123,((0xffU & (((
                                                   (- (IData)((IData)(
                                                                      (0x3023U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))) 
                                                   | (0xfU 
                                                      & (- (IData)((IData)(
                                                                           (0x2023U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))))) 
                                                  | (3U 
                                                     & (- (IData)((IData)(
                                                                          (0x1023U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))))) 
                                                 | (1U 
                                                    & (- (IData)((IData)(
                                                                         (0x23U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))))))))),8);
            tracep->chgSData(oldp+124,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_rstrb),9);
            tracep->chgBit(oldp+125,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__reg_wen));
            tracep->chgBit(oldp+126,((0x23U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+127,(((0x1bU == (0x7fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                      | (0x3bU == (0x7fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgCData(oldp+128,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op_sext),2);
            tracep->chgSData(oldp+129,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                        >> 0x14U)),12);
            tracep->chgBit(oldp+130,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen));
            tracep->chgBit(oldp+131,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_intr));
            tracep->chgBit(oldp+132,((0x30200073U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)));
            tracep->chgCData(oldp+133,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_op_sel),7);
            tracep->chgQData(oldp+134,(((0x73U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)
                                         ? 0xbULL : 
                                        ((0x100073U 
                                          == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)
                                          ? 4ULL : 0ULL))),64);
            tracep->chgBit(oldp+136,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_valid));
            tracep->chgIData(oldp+137,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc),32);
            tracep->chgIData(oldp+138,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst),32);
            tracep->chgBit(oldp+139,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_allowin));
            tracep->chgBit(oldp+140,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_valid));
            tracep->chgBit(oldp+141,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_stall));
            tracep->chgBit(oldp+142,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_bubble));
            tracep->chgBit(oldp+143,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_reg_e__DOT__input_valid));
            tracep->chgQData(oldp+144,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_imm),64);
            tracep->chgQData(oldp+146,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rs1),64);
            tracep->chgQData(oldp+148,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rs2),64);
            tracep->chgQData(oldp+150,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr),64);
            tracep->chgIData(oldp+152,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_pc),32);
            tracep->chgCData(oldp+153,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rd_addr),5);
            tracep->chgCData(oldp+154,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_wstrb),8);
            tracep->chgSData(oldp+155,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rstrb),9);
            tracep->chgCData(oldp+156,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_op2_sel),3);
            tracep->chgCData(oldp+157,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_op1_sel),3);
            tracep->chgCData(oldp+158,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel),3);
            tracep->chgCData(oldp+159,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_sext),2);
            tracep->chgSData(oldp+160,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel),15);
            tracep->chgBit(oldp+161,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_reg_wen));
            tracep->chgBit(oldp+162,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_mem_wen));
            tracep->chgBit(oldp+163,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask));
            tracep->chgBit(oldp+164,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_valid));
            tracep->chgBit(oldp+165,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_allowin));
            tracep->chgCData(oldp+166,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_stall),2);
            tracep->chgIData(oldp+167,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_inst),32);
            tracep->chgBit(oldp+168,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_bubble));
            tracep->chgBit(oldp+169,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_reg_e__DOT__input_valid));
            tracep->chgBit(oldp+170,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_multicycle));
            tracep->chgBit(oldp+171,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_out_valid));
            tracep->chgSData(oldp+172,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_addr),12);
            tracep->chgBit(oldp+173,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_wen));
            tracep->chgBit(oldp+174,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_intr));
            tracep->chgBit(oldp+175,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_mret));
            tracep->chgCData(oldp+176,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel),7);
            tracep->chgCData(oldp+177,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_uimm),5);
            tracep->chgQData(oldp+178,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_intr_no),64);
            tracep->chgBit(oldp+180,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_valid));
            tracep->chgSData(oldp+181,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rstrb),9);
            tracep->chgCData(oldp+182,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_wstrb),8);
            tracep->chgQData(oldp+183,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out),64);
            tracep->chgQData(oldp+185,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr),64);
            tracep->chgBit(oldp+187,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_wen));
            tracep->chgIData(oldp+188,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_pc),32);
            tracep->chgBit(oldp+189,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_wen));
            tracep->chgCData(oldp+190,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rd_addr),5);
            tracep->chgCData(oldp+191,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel),3);
            tracep->chgCData(oldp+192,((7U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out))),3);
            tracep->chgBit(oldp+193,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_allowin));
            tracep->chgCData(oldp+194,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_stall),2);
            tracep->chgIData(oldp+195,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_inst),32);
            tracep->chgBit(oldp+196,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_bubble));
            tracep->chgBit(oldp+197,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__input_valid));
            tracep->chgSData(oldp+198,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_addr),12);
            tracep->chgBit(oldp+199,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_wen));
            tracep->chgBit(oldp+200,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr));
            tracep->chgBit(oldp+201,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_mret));
            tracep->chgQData(oldp+202,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_intr_no),64);
            tracep->chgIData(oldp+204,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_pc),32);
            tracep->chgBit(oldp+205,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_reg_e__DOT__input_valid));
            tracep->chgQData(oldp+206,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_data),64);
            tracep->chgSData(oldp+208,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb),9);
            tracep->chgQData(oldp+209,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_alu_out),64);
            tracep->chgQData(oldp+211,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr),64);
            tracep->chgBit(oldp+213,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_reg_wen));
            tracep->chgCData(oldp+214,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_rd_addr),5);
            tracep->chgCData(oldp+215,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_regin_sel),3);
            tracep->chgCData(oldp+216,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_shamt),3);
            tracep->chgBit(oldp+217,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_allowin));
            tracep->chgIData(oldp+218,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_inst),32);
            tracep->chgBit(oldp+219,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_bubble));
            tracep->chgCData(oldp+220,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_stall),2);
            tracep->chgSData(oldp+221,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr),12);
            tracep->chgBit(oldp+222,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_wen));
            tracep->chgBit(oldp+223,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr));
            tracep->chgBit(oldp+224,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_mret));
            tracep->chgQData(oldp+225,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_intr_no),64);
            tracep->chgCData(oldp+227,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en),2);
            tracep->chgQData(oldp+228,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs1_forward_data),64);
            tracep->chgQData(oldp+230,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs2_forward_data),64);
            tracep->chgQData(oldp+232,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_forward_data),64);
            tracep->chgBit(oldp+234,((1U & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel) 
                                             >> 1U) 
                                            | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_mem_wen)))));
            tracep->chgBit(oldp+235,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_op));
            tracep->chgIData(oldp+236,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_addr),32);
            tracep->chgIData(oldp+237,((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__imm)),32);
            tracep->chgIData(oldp+238,(((8U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel))
                                         ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs1_forward_data)
                                         : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc)),32);
            tracep->chgIData(oldp+239,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__imm) 
                                        + ((8U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel))
                                            ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__rs1_forward_data)
                                            : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_pc))),32);
            tracep->chgIData(oldp+240,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__dnpc),32);
            tracep->chgBit(oldp+241,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel) 
                                               | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel) 
                                                  >> 4U))))));
            tracep->chgBit(oldp+242,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel) 
                                            >> 4U))));
            tracep->chgWData(oldp+243,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data),96);
            tracep->chgCData(oldp+246,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel),3);
            tracep->chgIData(oldp+247,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[0]),32);
            tracep->chgIData(oldp+248,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[1]),32);
            tracep->chgIData(oldp+249,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[2]),32);
            tracep->chgBit(oldp+250,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_ready_go));
            tracep->chgBit(oldp+251,((1U & ((~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_valid)) 
                                            | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_ready_go) 
                                               & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_allowin))))));
            tracep->chgBit(oldp+252,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_handshake));
            tracep->chgBit(oldp+253,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_valid));
            tracep->chgBit(oldp+254,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__IF_en));
            tracep->chgIData(oldp+255,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__inst_cache),32);
            tracep->chgBit(oldp+256,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__pc_e__DOT__cache_valid));
            tracep->chgBit(oldp+257,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc_sel)))));
            tracep->chgBit(oldp+258,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_stall)))));
            tracep->chgBit(oldp+259,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+260,((0U != (0xfU & 
                                             ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                              >> 0xaU)))));
            tracep->chgBit(oldp+261,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel) 
                                            >> 1U))));
            tracep->chgCData(oldp+262,(((0xfffffffeU 
                                         & ((((0x1fU 
                                               & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0xfU)) 
                                              == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rd_addr)) 
                                             << 1U) 
                                            & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en))) 
                                        | (((0x1fU 
                                             & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_rd_addr)) 
                                           & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en)))),2);
            tracep->chgCData(oldp+263,(((0xfffffffeU 
                                         & ((((0x1fU 
                                               & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0xfU)) 
                                              == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rd_addr)) 
                                             << 1U) 
                                            & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en))) 
                                        | (((0x1fU 
                                             & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_rd_addr)) 
                                           & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en)))),2);
            tracep->chgCData(oldp+264,(((0xfffffffeU 
                                         & ((((0x1fU 
                                               & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0xfU)) 
                                              == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_rd_addr)) 
                                             << 1U) 
                                            & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en))) 
                                        | (((0x1fU 
                                             & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_rd_addr)) 
                                           & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__stall_en)))),2);
            tracep->chgBit(oldp+265,((((0U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_stall)) 
                                       & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_regin_sel) 
                                          >> 1U)) | 
                                      ((0U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_stall)) 
                                       & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_regin_sel) 
                                          >> 1U)))));
            tracep->chgBit(oldp+266,(((0U != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_stall)) 
                                      & (0U != (0xfU 
                                                & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+267,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__forward_unit_e__I_WB_reg_wen));
            tracep->chgBit(oldp+268,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen) 
                                       & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_wen)) 
                                      & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                          >> 0x14U) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_addr)))));
            tracep->chgBit(oldp+269,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen) 
                                       & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_wen)) 
                                      & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                          >> 0x14U) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_csr_addr)))));
            tracep->chgBit(oldp+270,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_wen) 
                                       & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_wen)) 
                                      & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                          >> 0x14U) 
                                         == (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_csr_addr)))));
            tracep->chgCData(oldp+271,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+272,((0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)),7);
            tracep->chgCData(oldp+273,((7U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                              >> 0xcU))),3);
            tracep->chgSData(oldp+274,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__immS),12);
            tracep->chgSData(oldp+275,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__immB),13);
            tracep->chgIData(oldp+276,((0xfffff000U 
                                        & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)),32);
            tracep->chgIData(oldp+277,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__immJ),21);
            tracep->chgBit(oldp+278,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI));
            tracep->chgBit(oldp+279,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR));
            tracep->chgBit(oldp+280,((0x63U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+281,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeU));
            tracep->chgBit(oldp+282,((0x6fU == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+283,((0x73U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+284,((0x37U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+285,((0x17U == (0x7fU 
                                                & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+286,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR));
            tracep->chgBit(oldp+287,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LD));
            tracep->chgBit(oldp+288,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LW));
            tracep->chgBit(oldp+289,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LWU));
            tracep->chgBit(oldp+290,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LH));
            tracep->chgBit(oldp+291,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LHU));
            tracep->chgBit(oldp+292,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__LB));
            tracep->chgBit(oldp+293,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+294,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+295,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+296,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+297,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+298,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+299,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+300,((IData)(((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+301,((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+302,((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x10U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x1aU))))));
            tracep->chgBit(oldp+303,((IData)((0x1bU 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+304,((IData)(((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+305,((IData)(((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+306,((IData)(((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+307,((IData)(((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+308,((IData)(((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+309,((IData)(((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+310,((IData)(((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+311,((IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+312,((IData)(((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+313,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+314,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+315,((IData)(((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+316,((IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+317,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MUL));
            tracep->chgBit(oldp+318,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULH));
            tracep->chgBit(oldp+319,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULHSU));
            tracep->chgBit(oldp+320,((IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+321,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIV));
            tracep->chgBit(oldp+322,((IData)(((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+323,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REM));
            tracep->chgBit(oldp+324,((IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+325,((IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+326,((IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+327,((IData)(((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+328,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+329,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+330,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULW));
            tracep->chgBit(oldp+331,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIVW));
            tracep->chgBit(oldp+332,((IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+333,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REMW));
            tracep->chgBit(oldp+334,((IData)(((0x703bU 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                  >> 0x19U))))));
            tracep->chgBit(oldp+335,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+336,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+337,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+338,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+339,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+340,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+341,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+342,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+343,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+344,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+345,((0x73U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)));
            tracep->chgBit(oldp+346,((0x100073U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)));
            tracep->chgBit(oldp+347,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRW));
            tracep->chgBit(oldp+348,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRS));
            tracep->chgBit(oldp+349,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRC));
            tracep->chgBit(oldp+350,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRWI));
            tracep->chgBit(oldp+351,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRSI));
            tracep->chgBit(oldp+352,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRCI));
            tracep->chgBit(oldp+353,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRW) 
                                       | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRS)) 
                                      | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__CSRRC))));
            tracep->chgBit(oldp+354,((3U == (0x7fU 
                                             & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+355,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeB_jr));
            tracep->chgBit(oldp+356,((((0x73U == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst) 
                                       | (0x100073U 
                                          == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                      | (0x30200073U 
                                         == vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))));
            tracep->chgBit(oldp+357,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__eq));
            tracep->chgBit(oldp+358,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__eq)))));
            tracep->chgBit(oldp+359,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__lt));
            tracep->chgBit(oldp+360,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__lt)))));
            tracep->chgBit(oldp+361,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__ltu));
            tracep->chgBit(oldp+362,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__ltu)))));
            tracep->chgBit(oldp+363,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__add_flag));
            tracep->chgBit(oldp+364,(((IData)(((0x33U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                               & (0x20U 
                                                  == 
                                                  (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                   >> 0x19U)))) 
                                      | (IData)(((0x3bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0x20U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+365,(((IData)((0x2013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      | (IData)(((0x2033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+366,(((IData)((0x3013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      | (IData)(((0x3033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+367,(((IData)((0x4013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      | (IData)(((0x4033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+368,(((IData)((0x6013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      | (IData)(((0x6033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+369,(((IData)((0x7013U 
                                               == (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      | (IData)(((0x7033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+370,(((((IData)(((0x1013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x1aU)))) 
                                        | (IData)((
                                                   (0x1033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                   & (0U 
                                                      == 
                                                      (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                       >> 0x19U))))) 
                                       | (IData)(((0x101bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                  & (0U 
                                                     == 
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                      >> 0x19U))))) 
                                      | (IData)(((0x103bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+371,(((((IData)(((0x5013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x1aU)))) 
                                        | (IData)((
                                                   (0x5033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                   & (0U 
                                                      == 
                                                      (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                       >> 0x19U))))) 
                                       | (IData)(((0x501bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                  & (0U 
                                                     == 
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                      >> 0x19U))))) 
                                      | (IData)(((0x503bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+372,(((((IData)(((0x5013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0x10U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x1aU)))) 
                                        | (IData)((
                                                   (0x5033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                   & (0x20U 
                                                      == 
                                                      (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                       >> 0x19U))))) 
                                       | (IData)(((0x501bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                  & (0x20U 
                                                     == 
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                      >> 0x19U))))) 
                                      | (IData)(((0x503bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (0x20U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+373,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MUL) 
                                      | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULW))));
            tracep->chgBit(oldp+374,((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULH) 
                                       | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__MULHSU)) 
                                      | (IData)(((0x3033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (1U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+375,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIV) 
                                        | (IData)((
                                                   (0x5033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                   & (1U 
                                                      == 
                                                      (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                       >> 0x19U))))) 
                                       | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__DIVW)) 
                                      | (IData)(((0x503bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (1U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+376,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REM) 
                                        | (IData)((
                                                   (0x7033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                   & (1U 
                                                      == 
                                                      (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                       >> 0x19U))))) 
                                       | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__REMW)) 
                                      | (IData)(((0x703bU 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                                 & (1U 
                                                    == 
                                                    (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst 
                                                     >> 0x19U)))))));
            tracep->chgBit(oldp+377,(((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeR) 
                                        | ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI) 
                                           & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR)))) 
                                       | (0x23U == 
                                          (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      | (0x73U == (0x7fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgBit(oldp+378,(((((0x63U == (0x7fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)) 
                                        | (0x6fU == 
                                           (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                       | (0x17U == 
                                          (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR))));
            tracep->chgBit(oldp+379,((((((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeI) 
                                         & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR))) 
                                        | (0x23U == 
                                           (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                       | (0x63U == 
                                          (0x7fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst))) 
                                      | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__typeU))));
            tracep->chgBit(oldp+380,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__decoder_e__DOT__JALR) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__IF_ID_inst)))));
            tracep->chgWData(oldp+381,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+387,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+389,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+391,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgWData(oldp+393,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__alu_op2_64bit_3sel__I_sel_data),192);
            tracep->chgQData(oldp+399,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2_64bit_3sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+401,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2_64bit_3sel__DOT__sel_data[1]),64);
            tracep->chgQData(oldp+403,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2_64bit_3sel__DOT__sel_data[2]),64);
            tracep->chgBit(oldp+405,((1U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))));
            tracep->chgBit(oldp+406,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+407,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+408,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+409,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 4U))));
            tracep->chgBit(oldp+410,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 5U))));
            tracep->chgBit(oldp+411,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 6U))));
            tracep->chgBit(oldp+412,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 7U))));
            tracep->chgBit(oldp+413,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 8U))));
            tracep->chgBit(oldp+414,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 9U))));
            tracep->chgBit(oldp+415,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+416,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+417,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+418,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+419,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel) 
                                            >> 0xeU))));
            tracep->chgQData(oldp+420,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__result),64);
            tracep->chgQData(oldp+422,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp496, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp497, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp498, __Vtemp496, __Vtemp497);
            VL_EXTEND_WQ(65,64, __Vtemp499, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__cin);
            VL_ADD_W(3, __Vtemp500, __Vtemp498, __Vtemp499);
            tracep->chgQData(oldp+424,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp500[2U])))))),64);
            tracep->chgQData(oldp+426,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                        ^ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2)),64);
            tracep->chgQData(oldp+428,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                        | vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2)),64);
            tracep->chgQData(oldp+430,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                        & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2)),64);
            tracep->chgQData(oldp+432,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
                                                               >> 0x20U))))
                                         : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result)),64);
            tracep->chgQData(oldp+434,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result),64);
            tracep->chgQData(oldp+436,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                                                 ? (IData)(
                                                                           (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                                                            >> 0x1fU))
                                                                 : (IData)(
                                                                           (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                                                            >> 0x3fU))))))) 
                                         & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                             ? (~ (0xffffffffULL 
                                                   >> (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt)))
                                             : (~ (0xffffffffffffffffULL 
                                                   >> (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt))))) 
                                        | vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)),64);
            tracep->chgQData(oldp+438,((((QData)((IData)(
                                                         vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U])))),64);
            tracep->chgQData(oldp+440,((((QData)((IData)(
                                                         vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U])))),64);
            tracep->chgQData(oldp+442,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result),64);
            tracep->chgQData(oldp+444,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result),64);
            tracep->chgWData(oldp+446,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext),65);
            tracep->chgWData(oldp+449,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext),65);
            tracep->chgBit(oldp+452,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                             ? (IData)(
                                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+453,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                             ? (IData)(
                                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2 
                                                        >> 0x1fU))
                                             : (IData)(
                                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op2 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+454,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1));
            tracep->chgBit(oldp+455,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext2));
            tracep->chgBit(oldp+456,((IData)((0U != 
                                              (0xc00U 
                                               & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))))));
            tracep->chgBit(oldp+457,((IData)((0U != 
                                              (0x3000U 
                                               & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))))));
            tracep->chgBit(oldp+458,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_valid));
            tracep->chgBit(oldp+459,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_valid));
            tracep->chgBit(oldp+460,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_out_valid));
            tracep->chgBit(oldp+461,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_out_valid));
            tracep->chgQData(oldp+462,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg),64);
            tracep->chgQData(oldp+464,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg),64);
            tracep->chgQData(oldp+466,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg),64);
            tracep->chgQData(oldp+468,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg),64);
            tracep->chgBit(oldp+470,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid));
            tracep->chgBit(oldp+471,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid));
            tracep->chgQData(oldp+472,((((QData)((IData)(
                                                         ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                           ? (IData)(
                                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg 
                                                                      >> 0x20U))
                                                           : 
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                            ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mulh_reg)
                                                            : 
                                                           vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U]))))),64);
            tracep->chgQData(oldp+474,((((QData)((IData)(
                                                         ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                           ? (IData)(
                                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg 
                                                                      >> 0x20U))
                                                           : 
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U]))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg_valid)
                                                            ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__mul_reg)
                                                            : 
                                                           vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U]))))),64);
            tracep->chgQData(oldp+476,((((QData)((IData)(
                                                         ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                           ? (IData)(
                                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg 
                                                                      >> 0x20U))
                                                           : (IData)(
                                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result 
                                                                      >> 0x20U))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                            ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg)
                                                            : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_result)))))),64);
            tracep->chgQData(oldp+478,((((QData)((IData)(
                                                         ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                           ? (IData)(
                                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg 
                                                                      >> 0x20U))
                                                           : (IData)(
                                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result 
                                                                      >> 0x20U))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__div_reg_valid)
                                                            ? (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_reg)
                                                            : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__rem_result)))))),64);
            tracep->chgQData(oldp+480,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2),64);
            tracep->chgQData(oldp+482,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__cin),64);
            VL_EXTEND_WQ(65,64, __Vtemp515, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_op1);
            VL_EXTEND_WQ(65,64, __Vtemp516, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__adder2);
            VL_ADD_W(3, __Vtemp517, __Vtemp515, __Vtemp516);
            VL_EXTEND_WQ(65,64, __Vtemp518, vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__cin);
            VL_ADD_W(3, __Vtemp519, __Vtemp517, __Vtemp518);
            tracep->chgBit(oldp+484,((1U & __Vtemp519[2U])));
            tracep->chgQData(oldp+485,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__reverse_op1),64);
            tracep->chgQData(oldp+487,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op),64);
            tracep->chgCData(oldp+489,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt),6);
            tracep->chgQData(oldp+490,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                         ? (~ (0xffffffffULL 
                                               >> (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt)))
                                         : (~ (0xffffffffffffffffULL 
                                               >> (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shamt))))),64);
            tracep->chgIData(oldp+492,(((0x80U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))
                                         ? (IData)(
                                                   (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op))),32);
            tracep->chgQData(oldp+493,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_word_op_mask)
                                         ? (QData)((IData)(
                                                           ((0x80U 
                                                             & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel))
                                                             ? (IData)(
                                                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op 
                                                                        >> 0x20U))
                                                             : (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op))))
                                         : vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_op)),64);
            tracep->chgQData(oldp+495,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__shift_result)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result 
                                                           >> 0x20U))))),64);
            tracep->chgQData(oldp+497,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__slldw_result),64);
            tracep->chgQData(oldp+499,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result),64);
            tracep->chgQData(oldp+501,((((QData)((IData)(
                                                         (- (IData)(
                                                                    ((1U 
                                                                      & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel)))) 
                                                                         & (~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_sext))))))
                                                                      ? 0U
                                                                      : 
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result 
                                                                                >> 0x1fU)))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result)))),64);
            tracep->chgBit(oldp+503,(((1U & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x3000U 
                                                       & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_op_sel)))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_alu_sext))))))
                                       ? 0U : (1U & (IData)(
                                                            (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__dword_result 
                                                             >> 0x1fU))))));
            tracep->chgQData(oldp+504,((((QData)((IData)(
                                                         vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[0U])))),64);
            tracep->chgQData(oldp+506,((((QData)((IData)(
                                                         vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[0U])))),64);
            __Vtemp521[0U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[0U];
            __Vtemp521[1U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[1U];
            __Vtemp521[2U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[2U];
            __Vtemp521[3U] = vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S[3U];
            tracep->chgWData(oldp+508,(__Vtemp521),128);
            tracep->chgBit(oldp+512,(((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op1_sext[1U] 
                                       >> 0x1fU) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))));
            tracep->chgBit(oldp+513,(((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__op2_sext[1U] 
                                       >> 0x1fU) & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__sext1))));
            tracep->chgWData(oldp+514,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1),67);
            tracep->chgWData(oldp+517,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2),132);
            __Vtemp547[0U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                    & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]))) 
                                & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                      & (1U | ((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]) 
                                               << 1U))))) 
                               & (~ ((- (IData)((1U 
                                                 & ((~ 
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 2U)) 
                                                    & (((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                         >> 1U) 
                                                        & (~ 
                                                           vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                       | ((~ 
                                                           (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                            >> 1U)) 
                                                          & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                                     & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]))) 
                              & (~ ((- (IData)((1U 
                                                & (((~ 
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 2U)) 
                                                    & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                    & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] 
                                       << 1U))));
            __Vtemp547[1U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                    & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]))) 
                                & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                      & (((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U]) 
                                          >> 0x1fU) 
                                         | ((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]) 
                                            << 1U))))) 
                               & (~ ((- (IData)((1U 
                                                 & ((~ 
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 2U)) 
                                                    & (((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                         >> 1U) 
                                                        & (~ 
                                                           vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                       | ((~ 
                                                           (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                            >> 1U)) 
                                                          & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                                     & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]))) 
                              & (~ ((- (IData)((1U 
                                                & (((~ 
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 2U)) 
                                                    & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                    & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[0U] 
                                        >> 0x1fU) | 
                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U] 
                                        << 1U)))));
            __Vtemp547[2U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                    & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]))) 
                                & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                      & (((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U]) 
                                          >> 0x1fU) 
                                         | ((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]) 
                                            << 1U))))) 
                               & (~ ((- (IData)((1U 
                                                 & ((~ 
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 2U)) 
                                                    & (((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                         >> 1U) 
                                                        & (~ 
                                                           vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                       | ((~ 
                                                           (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                            >> 1U)) 
                                                          & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                                     & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]))) 
                              & (~ ((- (IData)((1U 
                                                & (((~ 
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 2U)) 
                                                    & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                    & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[1U] 
                                        >> 0x1fU) | 
                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U] 
                                        << 1U)))));
            __Vtemp547[3U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                    & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]))) 
                                & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                      & (((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U]) 
                                          >> 0x1fU) 
                                         | ((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]) 
                                            << 1U))))) 
                               & (~ ((- (IData)((1U 
                                                 & ((~ 
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 2U)) 
                                                    & (((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                         >> 1U) 
                                                        & (~ 
                                                           vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                       | ((~ 
                                                           (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                            >> 1U)) 
                                                          & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                                     & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]))) 
                              & (~ ((- (IData)((1U 
                                                & (((~ 
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 2U)) 
                                                    & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                    & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[2U] 
                                        >> 0x1fU) | 
                                       (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U] 
                                        << 1U)))));
            __Vtemp547[4U] = ((((~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))) 
                                    & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U]))) 
                                & (~ ((- (IData)((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative))) 
                                      & (((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U]) 
                                          >> 0x1fU) 
                                         | (0xeU & 
                                            ((~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U]) 
                                             << 1U)))))) 
                               & (~ ((- (IData)((1U 
                                                 & ((~ 
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 2U)) 
                                                    & (((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                         >> 1U) 
                                                        & (~ 
                                                           vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                                       | ((~ 
                                                           (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                            >> 1U)) 
                                                          & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))))) 
                                     & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U]))) 
                              & (~ ((- (IData)((1U 
                                                & (((~ 
                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                      >> 2U)) 
                                                    & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                       >> 1U)) 
                                                   & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])))) 
                                    & ((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[3U] 
                                        >> 0x1fU) | 
                                       (0xeU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul2[4U] 
                                                << 1U))))));
            __Vtemp549[0U] = (~ __Vtemp547[0U]);
            __Vtemp549[1U] = (~ __Vtemp547[1U]);
            __Vtemp549[2U] = (~ __Vtemp547[2U]);
            __Vtemp549[3U] = (~ __Vtemp547[3U]);
            __Vtemp549[4U] = (0xfU & (~ __Vtemp547[4U]));
            tracep->chgWData(oldp+522,(__Vtemp549),132);
            tracep->chgBit(oldp+527,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative) 
                                      | (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative))));
            tracep->chgWData(oldp+528,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mid_result),132);
            tracep->chgCData(oldp+533,((7U & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])),3);
            tracep->chgWData(oldp+534,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__S),132);
            tracep->chgBit(oldp+539,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__mul_process));
            tracep->chgCData(oldp+540,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__iter_cnt),6);
            tracep->chgBit(oldp+541,((1U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+542,((1U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+543,((1U & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])));
            tracep->chgBit(oldp+544,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_negative));
            tracep->chgBit(oldp+545,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__radix4_unit_e__DOT__sel_double_negative));
            tracep->chgBit(oldp+546,((1U & ((~ (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                >> 2U)) 
                                            & (((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U])) 
                                               | ((~ 
                                                   (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U]))))));
            tracep->chgBit(oldp+547,((1U & (((~ (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                 >> 2U)) 
                                             & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U] 
                                                >> 1U)) 
                                            & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__booth_mul_serial_e__DOT__booth_mul1[0U]))));
            tracep->chgWData(oldp+548,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_dividend),128);
            tracep->chgWData(oldp+552,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_divisor),128);
            tracep->chgWData(oldp+556,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_sub_result),128);
            tracep->chgBit(oldp+560,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__current_q));
            tracep->chgBit(oldp+561,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag));
            tracep->chgBit(oldp+562,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag));
            tracep->chgBit(oldp+563,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__dividend_flag) 
                                      ^ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__divisor_flag))));
            tracep->chgQData(oldp+564,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__abs_quotient),64);
            tracep->chgBit(oldp+566,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__div_process));
            tracep->chgCData(oldp+567,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__gpr_alu_e__DOT__radix2_div_e__DOT__iter_cnt),6);
            tracep->chgBit(oldp+568,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                            >> 5U))));
            tracep->chgBit(oldp+569,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+570,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                            >> 4U))));
            tracep->chgBit(oldp+571,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+572,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+573,((1U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))));
            tracep->chgBit(oldp+574,((IData)((0U != 
                                              (0x24U 
                                               & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))));
            tracep->chgBit(oldp+575,((IData)((0U != 
                                              (0x12U 
                                               & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))));
            tracep->chgBit(oldp+576,((IData)((0U != 
                                              (9U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel))))));
            tracep->chgBit(oldp+577,((0U != (7U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel) 
                                                   >> 3U)))));
            tracep->chgBit(oldp+578,((0U != (7U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr_op_sel)))));
            tracep->chgQData(oldp+579,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op),64);
            tracep->chgQData(oldp+581,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr 
                                        | vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op)),64);
            tracep->chgQData(oldp+583,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__ID_EX_csr 
                                        & (~ vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__alu_e__DOT__csr_alu_e__DOT__op))),64);
            tracep->chgBit(oldp+585,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__output_valid));
            tracep->chgBit(oldp+586,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en) 
                                      & (IData)(vlSelf->ysyx_22040750__DOT__cpu_mem_ready))));
            tracep->chgBit(oldp+587,(((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en) 
                                      & (IData)(vlSelf->ysyx_22040750__DOT__cpu_mem_ready))));
            tracep->chgBit(oldp+588,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb) 
                                            >> 8U))));
            tracep->chgBit(oldp+589,((1U & (((IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb) 
                                             >> 8U) 
                                            & ((0xfU 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb)))
                                                ? (IData)(
                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_ld_e__DOT__ld_data 
                                                           >> 0x1fU))
                                                : (
                                                   (3U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb)))
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_ld_e__DOT__ld_data 
                                                               >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb))) 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_ld_e__DOT__ld_data 
                                                               >> 7U)))))))));
            tracep->chgCData(oldp+590,((0xffU & (~ (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_mem_rstrb)))),8);
            tracep->chgQData(oldp+591,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__mem_ld_e__DOT__ld_data),64);
            tracep->chgWData(oldp+593,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__regin_64bit_2sel__I_sel_data),128);
            tracep->chgCData(oldp+597,((3U & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__MEM_WB_regin_sel))),2);
            tracep->chgQData(oldp+598,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__regin_64bit_2sel__DOT__sel_data[0]),64);
            tracep->chgQData(oldp+600,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__regin_64bit_2sel__DOT__sel_data[1]),64);
            tracep->chgBit(oldp+602,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT____Vcellinp__gpr_e__I_wen));
            tracep->chgQData(oldp+603,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[0]),64);
            tracep->chgQData(oldp+605,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[1]),64);
            tracep->chgQData(oldp+607,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[2]),64);
            tracep->chgQData(oldp+609,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[3]),64);
            tracep->chgQData(oldp+611,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[4]),64);
            tracep->chgQData(oldp+613,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[5]),64);
            tracep->chgQData(oldp+615,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[6]),64);
            tracep->chgQData(oldp+617,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[7]),64);
            tracep->chgQData(oldp+619,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[8]),64);
            tracep->chgQData(oldp+621,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[9]),64);
            tracep->chgQData(oldp+623,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[10]),64);
            tracep->chgQData(oldp+625,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[11]),64);
            tracep->chgQData(oldp+627,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[12]),64);
            tracep->chgQData(oldp+629,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[13]),64);
            tracep->chgQData(oldp+631,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[14]),64);
            tracep->chgQData(oldp+633,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[15]),64);
            tracep->chgQData(oldp+635,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[16]),64);
            tracep->chgQData(oldp+637,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[17]),64);
            tracep->chgQData(oldp+639,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[18]),64);
            tracep->chgQData(oldp+641,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[19]),64);
            tracep->chgQData(oldp+643,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[20]),64);
            tracep->chgQData(oldp+645,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[21]),64);
            tracep->chgQData(oldp+647,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[22]),64);
            tracep->chgQData(oldp+649,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[23]),64);
            tracep->chgQData(oldp+651,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[24]),64);
            tracep->chgQData(oldp+653,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[25]),64);
            tracep->chgQData(oldp+655,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[26]),64);
            tracep->chgQData(oldp+657,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[27]),64);
            tracep->chgQData(oldp+659,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[28]),64);
            tracep->chgQData(oldp+661,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[29]),64);
            tracep->chgQData(oldp+663,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[30]),64);
            tracep->chgQData(oldp+665,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__gpr[31]),64);
            tracep->chgBit(oldp+667,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[0]));
            tracep->chgBit(oldp+668,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[1]));
            tracep->chgBit(oldp+669,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[2]));
            tracep->chgBit(oldp+670,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[3]));
            tracep->chgBit(oldp+671,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[4]));
            tracep->chgBit(oldp+672,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[5]));
            tracep->chgBit(oldp+673,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[6]));
            tracep->chgBit(oldp+674,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[7]));
            tracep->chgBit(oldp+675,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[8]));
            tracep->chgBit(oldp+676,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[9]));
            tracep->chgBit(oldp+677,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[10]));
            tracep->chgBit(oldp+678,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[11]));
            tracep->chgBit(oldp+679,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[12]));
            tracep->chgBit(oldp+680,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[13]));
            tracep->chgBit(oldp+681,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[14]));
            tracep->chgBit(oldp+682,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[15]));
            tracep->chgBit(oldp+683,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[16]));
            tracep->chgBit(oldp+684,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[17]));
            tracep->chgBit(oldp+685,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[18]));
            tracep->chgBit(oldp+686,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[19]));
            tracep->chgBit(oldp+687,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[20]));
            tracep->chgBit(oldp+688,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[21]));
            tracep->chgBit(oldp+689,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[22]));
            tracep->chgBit(oldp+690,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[23]));
            tracep->chgBit(oldp+691,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[24]));
            tracep->chgBit(oldp+692,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[25]));
            tracep->chgBit(oldp+693,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[26]));
            tracep->chgBit(oldp+694,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[27]));
            tracep->chgBit(oldp+695,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[28]));
            tracep->chgBit(oldp+696,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[29]));
            tracep->chgBit(oldp+697,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[30]));
            tracep->chgBit(oldp+698,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__gpr_e__DOT__wen[31]));
            tracep->chgQData(oldp+699,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mepc),64);
            tracep->chgQData(oldp+701,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus),64);
            tracep->chgQData(oldp+703,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mtvec),64);
            tracep->chgQData(oldp+705,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mcause),64);
            tracep->chgQData(oldp+707,(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mscratch),64);
            tracep->chgBit(oldp+709,((1U & (IData)(
                                                   (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus 
                                                    >> 3U)))));
            tracep->chgBit(oldp+710,((1U & (IData)(
                                                   (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__csr_e__DOT__mstatus 
                                                    >> 7U)))));
            tracep->chgCData(oldp+711,(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen),8);
            tracep->chgCData(oldp+712,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cen_icache),4);
            tracep->chgCData(oldp+713,((((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                          ? 1U : 0U)
                                         ? 0U : 0xfU)),4);
            __Vtemp550[0U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[0U];
            __Vtemp550[1U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[1U];
            __Vtemp550[2U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[2U];
            __Vtemp550[3U] = vlSelf->ysyx_22040750__DOT__io_sram0_rdata[3U];
            __Vtemp550[4U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[0U];
            __Vtemp550[5U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[1U];
            __Vtemp550[6U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[2U];
            __Vtemp550[7U] = vlSelf->ysyx_22040750__DOT__io_sram1_rdata[3U];
            tracep->chgWData(oldp+714,(__Vtemp550),256);
            __Vtemp551[0U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[0U];
            __Vtemp551[1U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[1U];
            __Vtemp551[2U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[2U];
            __Vtemp551[3U] = vlSelf->ysyx_22040750__DOT__io_sram2_rdata[3U];
            __Vtemp551[4U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[0U];
            __Vtemp551[5U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[1U];
            __Vtemp551[6U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[2U];
            __Vtemp551[7U] = vlSelf->ysyx_22040750__DOT__io_sram3_rdata[3U];
            tracep->chgWData(oldp+722,(__Vtemp551),256);
            tracep->chgWData(oldp+730,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg),256);
            if (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                  ? 1U : 0U)) {
                __Vtemp553[0U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U];
                __Vtemp553[1U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U];
                __Vtemp553[2U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U];
                __Vtemp553[3U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U];
                __Vtemp553[4U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U];
                __Vtemp553[5U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U];
                __Vtemp553[6U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U];
                __Vtemp553[7U] = Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U];
            } else {
                __Vtemp553[0U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[0U];
                __Vtemp553[1U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[1U];
                __Vtemp553[2U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[2U];
                __Vtemp553[3U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[3U];
                __Vtemp553[4U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[4U];
                __Vtemp553[5U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[5U];
                __Vtemp553[6U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[6U];
                __Vtemp553[7U] = Vysyx_22040750__ConstPool__CONST_5b979007_0[7U];
            }
            tracep->chgWData(oldp+738,(__Vtemp553),256);
            tracep->chgCData(oldp+746,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__sram_wflag)
                                         ? ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)
                                             ? 0xcU
                                             : 3U) : 0xfU)),4);
            tracep->chgWData(oldp+747,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata),256);
            tracep->chgWData(oldp+755,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata),256);
            tracep->chgWData(oldp+763,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cacheline_reg),256);
            tracep->chgWData(oldp+771,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask),256);
            tracep->chgIData(oldp+779,((0xffffffe0U 
                                        & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr)),32);
            tracep->chgIData(oldp+780,((0xffffffe0U 
                                        & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr)),32);
            tracep->chgBit(oldp+781,(((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+782,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arvalid));
            if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op) {
                __Vtemp554[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U];
                __Vtemp554[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U];
                __Vtemp554[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U];
                __Vtemp554[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U];
                __Vtemp554[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U];
                __Vtemp554[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U];
                __Vtemp554[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U];
                __Vtemp554[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U];
            } else {
                __Vtemp554[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U];
                __Vtemp554[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U];
                __Vtemp554[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U];
                __Vtemp554[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U];
                __Vtemp554[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U];
                __Vtemp554[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U];
                __Vtemp554[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U];
                __Vtemp554[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U];
            }
            tracep->chgQData(oldp+783,((((QData)((IData)(
                                                         __Vtemp554[
                                                         (((IData)(0x3fU) 
                                                           + 
                                                           ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                            << 6U)) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                  << 6U)))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                     << 6U))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                 << 6U)))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                __Vtemp554[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                                   << 6U)) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                     << 6U))))) 
                                           | ((QData)((IData)(
                                                              __Vtemp554[
                                                              (0x7fffffeU 
                                                               & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                                  << 1U))])) 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt) 
                                                     << 6U)))))),64);
            tracep->chgBit(oldp+785,(((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+786,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_wlast));
            tracep->chgIData(oldp+787,(((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                         ? (0xffffffe0U 
                                            & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr)
                                         : 0U)),32);
            tracep->chgBit(oldp+788,(((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+789,((1U & (((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                              ? 1U : 0U) 
                                            & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arvalid))))));
            tracep->chgBit(oldp+790,(((~ ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                           ? 1U : 0U)) 
                                      & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arvalid))));
            tracep->chgBit(oldp+791,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__req_both));
            tracep->chgBit(oldp+792,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__resp0));
            tracep->chgBit(oldp+793,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__resp1));
            tracep->chgBit(oldp+794,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch0_process));
            tracep->chgBit(oldp+795,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch1_process));
            tracep->chgBit(oldp+796,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__priority_flag));
            tracep->chgCData(oldp+797,((0x1fU & vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc)),5);
            tracep->chgCData(oldp+798,((0x3fU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                 >> 5U))),6);
            tracep->chgIData(oldp+799,((vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                        >> 0xbU)),21);
            tracep->chgCData(oldp+800,((0x1fU & vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr)),5);
            tracep->chgCData(oldp+801,((0x3fU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                                 >> 5U))),6);
            tracep->chgIData(oldp+802,((vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr 
                                        >> 0xbU)),21);
            tracep->chgIData(oldp+803,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__mem_addr),32);
            tracep->chgWData(oldp+804,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table),128);
            tracep->chgIData(oldp+808,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
                                       [(0x7eU & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                  >> 4U))]),21);
            tracep->chgIData(oldp+809,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__lookup_table
                                       [(1U | (0x7eU 
                                               & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                  >> 4U)))]),21);
            tracep->chgBit(oldp+810,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
                                            (3U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                   >> 9U))] 
                                            >> (0x1eU 
                                                & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                   >> 4U))))));
            tracep->chgBit(oldp+811,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__valid_table[
                                            (3U & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                   >> 9U))] 
                                            >> (0x1fU 
                                                & (1U 
                                                   | (0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__dnpc 
                                                         >> 4U))))))));
            tracep->chgBit(oldp+812,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way0_hit));
            tracep->chgBit(oldp+813,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_hit));
            tracep->chgBit(oldp+814,((1U & (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                              ? 1U : 0U) 
                                            & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace))))));
            tracep->chgBit(oldp+815,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__way1_replace));
            tracep->chgCData(oldp+816,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag),2);
            if ((1U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))) {
                __Vtemp563[0U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[0U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp563[1U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[1U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp563[2U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[2U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp563[3U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[3U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[3U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp563[4U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[0U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp563[5U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[1U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp563[6U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[2U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                      >> 1U))))));
                __Vtemp563[7U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[3U] 
                                   & (- (IData)((1U 
                                                 & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                                  | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[3U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                      >> 1U))))));
            } else {
                __Vtemp563[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[0U];
                __Vtemp563[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[1U];
                __Vtemp563[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[2U];
                __Vtemp563[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[3U];
                __Vtemp563[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[4U];
                __Vtemp563[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[5U];
                __Vtemp563[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[6U];
                __Vtemp563[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__cacheline_reg[7U];
            }
            tracep->chgWData(oldp+817,(__Vtemp563),256);
            __Vtemp570[0U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[0U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[0U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp570[1U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[1U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[1U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp570[2U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[2U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[2U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp570[3U] = ((vlSelf->ysyx_22040750__DOT__io_sram0_rdata[3U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram2_rdata[3U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp570[4U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[0U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[0U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp570[5U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[1U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[1U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp570[6U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[2U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[2U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            __Vtemp570[7U] = ((vlSelf->ysyx_22040750__DOT__io_sram1_rdata[3U] 
                               & (- (IData)((1U & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag))))) 
                              | (vlSelf->ysyx_22040750__DOT__io_sram3_rdata[3U] 
                                 & (- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__hit_flag) 
                                                >> 1U))))));
            tracep->chgWData(oldp+825,(__Vtemp570),256);
            tracep->chgBit(oldp+833,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__rd_hit));
            tracep->chgBit(oldp+834,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__pc_handshake) 
                                      & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__rd_hit)))));
            tracep->chgBit(oldp+835,((4U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))));
            tracep->chgBit(oldp+836,(((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+837,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__pc_handshake));
            tracep->chgCData(oldp+838,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state),4);
            tracep->chgBit(oldp+839,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_flag));
            tracep->chgSData(oldp+840,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state),13);
            tracep->chgBit(oldp+841,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__replace_dirty));
            tracep->chgBit(oldp+842,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__rd_hit));
            tracep->chgBit(oldp+843,((((~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit)) 
                                       & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_rd_en)) 
                                      & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_flag)))));
            tracep->chgBit(oldp+844,(((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+845,(((0x10U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+846,(((0x20U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+847,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_hit));
            tracep->chgBit(oldp+848,((((~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit)) 
                                       & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_reg_e__DOT__mem_wr_en)) 
                                      & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mmio_flag)))));
            tracep->chgBit(oldp+849,(((0x100U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+850,(((0x200U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+851,(((0x400U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                       ? 1U : 0U)));
            tracep->chgCData(oldp+852,((0x1fU & (IData)(vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out))),5);
            tracep->chgCData(oldp+853,((0x1fU & vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr)),5);
            tracep->chgCData(oldp+854,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                         >> 5U)))),6);
            tracep->chgCData(oldp+855,((0x3fU & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                 >> 5U))),6);
            tracep->chgIData(oldp+856,((0x1fffffU & (IData)(
                                                            (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                             >> 0xbU)))),21);
            tracep->chgIData(oldp+857,((vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                        >> 0xbU)),21);
            tracep->chgIData(oldp+858,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr),32);
            tracep->chgCData(oldp+859,((0xffU & (~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_mask_reg)))),8);
            tracep->chgIData(oldp+860,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__sram_wmaskB),32);
            tracep->chgQData(oldp+861,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_reg),64);
            tracep->chgCData(oldp+863,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__cpu_mask_reg),8);
            tracep->chgBit(oldp+864,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__sram_wflag));
            tracep->chgWData(oldp+865,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table),128);
            tracep->chgWData(oldp+869,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table),128);
            tracep->chgIData(oldp+873,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
                                       [(0x7eU & ((IData)(
                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                           >> 5U)) 
                                                  << 1U))]),21);
            tracep->chgIData(oldp+874,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__lookup_table
                                       [(1U | (0x7eU 
                                               & ((IData)(
                                                          (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                           >> 5U)) 
                                                  << 1U)))]),21);
            tracep->chgBit(oldp+875,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
                                            (3U & ((IData)(
                                                           (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                            >> 5U)) 
                                                   >> 4U))] 
                                            >> (0x1eU 
                                                & ((IData)(
                                                           (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                            >> 5U)) 
                                                   << 1U))))));
            tracep->chgBit(oldp+876,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
                                            (3U & ((IData)(
                                                           (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                            >> 5U)) 
                                                   >> 4U))] 
                                            >> (0x1fU 
                                                & (1U 
                                                   | (0x7eU 
                                                      & ((IData)(
                                                                 (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                  >> 5U)) 
                                                         << 1U))))))));
            tracep->chgBit(oldp+877,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way0_hit));
            tracep->chgBit(oldp+878,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit));
            tracep->chgBit(oldp+879,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit));
            tracep->chgBit(oldp+880,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
                                            (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                   >> 9U))] 
                                            >> (0x1eU 
                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                   >> 4U))))));
            tracep->chgBit(oldp+881,((1U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__dirty_table[
                                            (3U & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                   >> 9U))] 
                                            >> (0x1fU 
                                                & (1U 
                                                   | (0x7eU 
                                                      & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__mem_addr 
                                                         >> 4U))))))));
            tracep->chgBit(oldp+882,((1U & ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way1_hit) 
                                            | (((~ (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__hit)) 
                                                & (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
                                                   (3U 
                                                    & ((IData)(
                                                               (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                >> 5U)) 
                                                       >> 4U))] 
                                                   >> 
                                                   (0x1eU 
                                                    & ((IData)(
                                                               (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                >> 5U)) 
                                                       << 1U)))) 
                                               & (~ 
                                                  (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__valid_table[
                                                   (3U 
                                                    & ((IData)(
                                                               (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                >> 5U)) 
                                                       >> 4U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (1U 
                                                       | (0x7eU 
                                                          & ((IData)(
                                                                     (vlSelf->ysyx_22040750__DOT__cpu_core_e__DOT__EX_MEM_alu_out 
                                                                      >> 5U)) 
                                                             << 1U)))))))))));
            tracep->chgBit(oldp+883,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op));
            tracep->chgCData(oldp+884,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state),3);
            tracep->chgCData(oldp+885,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wdata_cnt),2);
            if (vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op) {
                __Vtemp571[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[0U];
                __Vtemp571[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[1U];
                __Vtemp571[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[2U];
                __Vtemp571[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[3U];
                __Vtemp571[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[4U];
                __Vtemp571[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[5U];
                __Vtemp571[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[6U];
                __Vtemp571[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way0_rdata[7U];
            } else {
                __Vtemp571[0U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[0U];
                __Vtemp571[1U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[1U];
                __Vtemp571[2U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[2U];
                __Vtemp571[3U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[3U];
                __Vtemp571[4U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[4U];
                __Vtemp571[5U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[5U];
                __Vtemp571[6U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[6U];
                __Vtemp571[7U] = vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_way1_rdata[7U];
            }
            tracep->chgWData(oldp+886,(__Vtemp571),256);
            tracep->chgBit(oldp+894,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen)))));
            __Vtemp575[0U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[0U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[0U]));
            __Vtemp575[1U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[1U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[1U]));
            __Vtemp575[2U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[2U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[2U]));
            __Vtemp575[3U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[3U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[3U]));
            tracep->chgWData(oldp+895,(__Vtemp575),128);
            tracep->chgBit(oldp+899,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 1U)))));
            __Vtemp579[0U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[4U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[4U]));
            __Vtemp579[1U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[5U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[5U]));
            __Vtemp579[2U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[6U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[6U]));
            __Vtemp579[3U] = (~ (((8U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                   ? 1U : 0U) ? Vysyx_22040750__ConstPool__CONST_9e67c271_0[7U]
                                  : Vysyx_22040750__ConstPool__CONST_5b979007_0[7U]));
            tracep->chgWData(oldp+900,(__Vtemp579),128);
            tracep->chgBit(oldp+904,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 2U)))));
            tracep->chgBit(oldp+905,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 3U)))));
            tracep->chgBit(oldp+906,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 4U)))));
            __Vtemp581[0U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[0U]);
            __Vtemp581[1U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[1U]);
            __Vtemp581[2U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[2U]);
            __Vtemp581[3U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[3U]);
            tracep->chgWData(oldp+907,(__Vtemp581),128);
            tracep->chgBit(oldp+911,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 5U)))));
            __Vtemp583[0U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[4U]);
            __Vtemp583[1U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[5U]);
            __Vtemp583[2U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[6U]);
            __Vtemp583[3U] = (~ vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_wmask[7U]);
            tracep->chgWData(oldp+912,(__Vtemp583),128);
            tracep->chgBit(oldp+916,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 6U)))));
            tracep->chgBit(oldp+917,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_wen) 
                                               >> 7U)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+918,((1U & (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen))));
            tracep->chgBit(oldp+919,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 1U))));
            tracep->chgBit(oldp+920,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 2U))));
            tracep->chgBit(oldp+921,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 3U))));
            tracep->chgBit(oldp+922,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 4U))));
            tracep->chgBit(oldp+923,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 5U))));
            tracep->chgBit(oldp+924,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 6U))));
            tracep->chgBit(oldp+925,((1U & ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                            >> 7U))));
            tracep->chgCData(oldp+926,(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen),8);
            tracep->chgBit(oldp+927,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid));
            tracep->chgBit(oldp+928,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rvalid));
            tracep->chgBit(oldp+929,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rlast));
            tracep->chgBit(oldp+930,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast));
            tracep->chgBit(oldp+931,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_arready));
            tracep->chgBit(oldp+932,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arready));
            tracep->chgBit(oldp+933,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rvalid) 
                                      & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_rlast))));
            tracep->chgBit(oldp+934,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rvalid) 
                                      & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast))));
            tracep->chgCData(oldp+935,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__next_state),4);
            tracep->chgSData(oldp+936,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__next_state),13);
            tracep->chgBit(oldp+937,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__rd_handshake));
            tracep->chgCData(oldp+938,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_next_state),3);
            tracep->chgBit(oldp+939,(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wr_handshake));
            tracep->chgBit(oldp+940,((1U & (~ (IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen)))));
            tracep->chgBit(oldp+941,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 1U)))));
            tracep->chgBit(oldp+942,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 2U)))));
            tracep->chgBit(oldp+943,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 3U)))));
            tracep->chgBit(oldp+944,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 4U)))));
            tracep->chgBit(oldp+945,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 5U)))));
            tracep->chgBit(oldp+946,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 6U)))));
            tracep->chgBit(oldp+947,((1U & (~ ((IData)(vlSelf->ysyx_22040750__DOT____Vcellout__cache_e__O_sram_cen) 
                                               >> 7U)))));
        }
        tracep->chgBit(oldp+948,(vlSelf->clock));
        tracep->chgBit(oldp+949,(vlSelf->reset));
        tracep->chgBit(oldp+950,(vlSelf->io_interrupt));
        tracep->chgBit(oldp+951,(vlSelf->io_master_awready));
        tracep->chgBit(oldp+952,(vlSelf->io_master_awvalid));
        tracep->chgCData(oldp+953,(vlSelf->io_master_awid),4);
        tracep->chgIData(oldp+954,(vlSelf->io_master_awaddr),32);
        tracep->chgCData(oldp+955,(vlSelf->io_master_awlen),8);
        tracep->chgCData(oldp+956,(vlSelf->io_master_awsize),3);
        tracep->chgCData(oldp+957,(vlSelf->io_master_awburst),2);
        tracep->chgBit(oldp+958,(vlSelf->io_master_wready));
        tracep->chgBit(oldp+959,(vlSelf->io_master_wvalid));
        tracep->chgQData(oldp+960,(vlSelf->io_master_wdata),64);
        tracep->chgCData(oldp+962,(vlSelf->io_master_wstrb),8);
        tracep->chgBit(oldp+963,(vlSelf->io_master_wlast));
        tracep->chgBit(oldp+964,(vlSelf->io_master_bready));
        tracep->chgBit(oldp+965,(vlSelf->io_master_bvalid));
        tracep->chgCData(oldp+966,(vlSelf->io_master_bid),4);
        tracep->chgCData(oldp+967,(vlSelf->io_master_bresp),2);
        tracep->chgBit(oldp+968,(vlSelf->io_master_arready));
        tracep->chgBit(oldp+969,(vlSelf->io_master_arvalid));
        tracep->chgCData(oldp+970,(vlSelf->io_master_arid),4);
        tracep->chgIData(oldp+971,(vlSelf->io_master_araddr),32);
        tracep->chgCData(oldp+972,(vlSelf->io_master_arlen),8);
        tracep->chgCData(oldp+973,(vlSelf->io_master_arsize),3);
        tracep->chgCData(oldp+974,(vlSelf->io_master_arburst),2);
        tracep->chgBit(oldp+975,(vlSelf->io_master_rready));
        tracep->chgBit(oldp+976,(vlSelf->io_master_rvalid));
        tracep->chgCData(oldp+977,(vlSelf->io_master_rid),4);
        tracep->chgCData(oldp+978,(vlSelf->io_master_rresp),2);
        tracep->chgQData(oldp+979,(vlSelf->io_master_rdata),64);
        tracep->chgBit(oldp+981,(vlSelf->io_master_rlast));
        tracep->chgBit(oldp+982,(vlSelf->io_slave_awready));
        tracep->chgBit(oldp+983,(vlSelf->io_slave_awvalid));
        tracep->chgCData(oldp+984,(vlSelf->io_slave_awid),4);
        tracep->chgIData(oldp+985,(vlSelf->io_slave_awaddr),32);
        tracep->chgCData(oldp+986,(vlSelf->io_slave_awlen),8);
        tracep->chgCData(oldp+987,(vlSelf->io_slave_awsize),3);
        tracep->chgCData(oldp+988,(vlSelf->io_slave_awburst),2);
        tracep->chgBit(oldp+989,(vlSelf->io_slave_wready));
        tracep->chgBit(oldp+990,(vlSelf->io_slave_wvalid));
        tracep->chgQData(oldp+991,(vlSelf->io_slave_wdata),64);
        tracep->chgCData(oldp+993,(vlSelf->io_slave_wstrb),8);
        tracep->chgBit(oldp+994,(vlSelf->io_slave_wlast));
        tracep->chgBit(oldp+995,(vlSelf->io_slave_bready));
        tracep->chgBit(oldp+996,(vlSelf->io_slave_bvalid));
        tracep->chgCData(oldp+997,(vlSelf->io_slave_bid),4);
        tracep->chgCData(oldp+998,(vlSelf->io_slave_bresp),2);
        tracep->chgBit(oldp+999,(vlSelf->io_slave_arready));
        tracep->chgBit(oldp+1000,(vlSelf->io_slave_arvalid));
        tracep->chgCData(oldp+1001,(vlSelf->io_slave_arid),4);
        tracep->chgIData(oldp+1002,(vlSelf->io_slave_araddr),32);
        tracep->chgCData(oldp+1003,(vlSelf->io_slave_arlen),8);
        tracep->chgCData(oldp+1004,(vlSelf->io_slave_arsize),3);
        tracep->chgCData(oldp+1005,(vlSelf->io_slave_arburst),2);
        tracep->chgBit(oldp+1006,(vlSelf->io_slave_rready));
        tracep->chgBit(oldp+1007,(vlSelf->io_slave_rvalid));
        tracep->chgCData(oldp+1008,(vlSelf->io_slave_rid),4);
        tracep->chgCData(oldp+1009,(vlSelf->io_slave_rresp),2);
        tracep->chgQData(oldp+1010,(vlSelf->io_slave_rdata),64);
        tracep->chgBit(oldp+1012,(vlSelf->io_slave_rlast));
        tracep->chgCData(oldp+1013,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__rd_hit)
                                      ? ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__way0_hit)
                                          ? 0xcU : 3U)
                                      : ((1U & ((((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast) 
                                                  | ((0x10U 
                                                      == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                                      ? 1U
                                                      : 0U)) 
                                                 | ((0x200U 
                                                     == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                                     ? 1U
                                                     : 0U)) 
                                                | (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__sram_wflag)))
                                          ? ((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__isway0_op)
                                              ? 0xcU
                                              : 3U)
                                          : 0xfU))),4);
        tracep->chgQData(oldp+1014,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch0_process)
                                      ? vlSelf->io_master_rdata
                                      : 0ULL)),64);
        tracep->chgQData(oldp+1016,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__crossbar_e__DOT__ch1_process)
                                      ? vlSelf->io_master_rdata
                                      : 0ULL)),64);
        tracep->chgBit(oldp+1018,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_icache_arready) 
                                   & ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__icache_e__DOT__current_state))
                                       ? 1U : 0U))));
        tracep->chgBit(oldp+1019,(((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arready) 
                                   & (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_arvalid))));
        tracep->chgBit(oldp+1020,((1U & (((IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__axi_dcache_rlast) 
                                          | ((0x10U 
                                              == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                              ? 1U : 0U)) 
                                         | ((0x200U 
                                             == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__current_state))
                                             ? 1U : 0U)))));
        tracep->chgBit(oldp+1021,(((IData)(vlSelf->io_master_awready) 
                                   & ((2U == (IData)(vlSelf->ysyx_22040750__DOT__cache_e__DOT__dcache_e__DOT__wb_state))
                                       ? 1U : 0U))));
    }
}

void Vysyx_22040750___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22040750___024root* const __restrict vlSelf = static_cast<Vysyx_22040750___024root*>(voidSelf);
    Vysyx_22040750__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
