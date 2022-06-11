// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_top__Syms.h"


void Vcpu_top___024root__traceInitSub0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vcpu_top___024root__traceInitTop(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vcpu_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vcpu_top___024root__traceInitSub0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+283,"I_sys_clk", false,-1);
        tracep->declBit(c+284,"I_rst", false,-1);
        tracep->declBus(c+285,"I_inst", false,-1, 31,0);
        tracep->declQuad(c+286,"O_pc", false,-1, 63,0);
        tracep->declQuad(c+288,"O_mem_addr", false,-1, 63,0);
        tracep->declBit(c+290,"O_mem_rd_en", false,-1);
        tracep->declBit(c+291,"O_mem_wen", false,-1);
        tracep->declQuad(c+292,"I_mem_rd_data", false,-1, 63,0);
        tracep->declQuad(c+294,"O_mem_wr_data", false,-1, 63,0);
        tracep->declBus(c+296,"O_mem_wr_strb", false,-1, 7,0);
        tracep->declBit(c+283,"cpu_top I_sys_clk", false,-1);
        tracep->declBit(c+284,"cpu_top I_rst", false,-1);
        tracep->declBus(c+285,"cpu_top I_inst", false,-1, 31,0);
        tracep->declQuad(c+286,"cpu_top O_pc", false,-1, 63,0);
        tracep->declQuad(c+288,"cpu_top O_mem_addr", false,-1, 63,0);
        tracep->declBit(c+290,"cpu_top O_mem_rd_en", false,-1);
        tracep->declBit(c+291,"cpu_top O_mem_wen", false,-1);
        tracep->declQuad(c+292,"cpu_top I_mem_rd_data", false,-1, 63,0);
        tracep->declQuad(c+294,"cpu_top O_mem_wr_data", false,-1, 63,0);
        tracep->declBus(c+296,"cpu_top O_mem_wr_strb", false,-1, 7,0);
        tracep->declQuad(c+215,"cpu_top current_pc", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu_top dnpc", false,-1, 63,0);
        tracep->declQuad(c+217,"cpu_top snpc", false,-1, 63,0);
        tracep->declQuad(c+297,"cpu_top imm", false,-1, 63,0);
        tracep->declQuad(c+3,"cpu_top wr_data", false,-1, 63,0);
        tracep->declQuad(c+5,"cpu_top rs1_data", false,-1, 63,0);
        tracep->declQuad(c+7,"cpu_top rs2_data", false,-1, 63,0);
        tracep->declQuad(c+9,"cpu_top alu_op1", false,-1, 63,0);
        tracep->declQuad(c+11,"cpu_top alu_op2", false,-1, 63,0);
        tracep->declQuad(c+13,"cpu_top alu_out", false,-1, 63,0);
        tracep->declQuad(c+15,"cpu_top mem_in", false,-1, 63,0);
        tracep->declQuad(c+7,"cpu_top mem_out", false,-1, 63,0);
        tracep->declQuad(c+17,"cpu_top mem_addr", false,-1, 63,0);
        tracep->declBus(c+299,"cpu_top rs1_addr", false,-1, 4,0);
        tracep->declBus(c+300,"cpu_top rs2_addr", false,-1, 4,0);
        tracep->declBus(c+301,"cpu_top rd_addr", false,-1, 4,0);
        tracep->declBus(c+19,"cpu_top dnpc_sel", false,-1, 2,0);
        tracep->declBus(c+20,"cpu_top regin_sel", false,-1, 2,0);
        tracep->declBus(c+21,"cpu_top opnum1_sel", false,-1, 2,0);
        tracep->declBus(c+22,"cpu_top opnum2_sel", false,-1, 1,0);
        tracep->declBus(c+23,"cpu_top alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+24,"cpu_top mem_wstrb", false,-1, 7,0);
        tracep->declBus(c+25,"cpu_top mem_rstrb", false,-1, 8,0);
        tracep->declBit(c+26,"cpu_top reg_wen", false,-1);
        tracep->declBit(c+302,"cpu_top mem_wen", false,-1);
        tracep->declBit(c+27,"cpu_top word_op_mask", false,-1);
        tracep->declBus(c+28,"cpu_top alu_op_sext", false,-1, 1,0);
        tracep->declBus(c+374,"cpu_top nextpc_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+375,"cpu_top nextpc_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+29,"cpu_top nextpc_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+19,"cpu_top nextpc_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+1,"cpu_top nextpc_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+35+i*2,"cpu_top nextpc_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+376,"cpu_top nextpc_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+283,"cpu_top pc_e I_sys_clk", false,-1);
        tracep->declBit(c+284,"cpu_top pc_e I_rst", false,-1);
        tracep->declQuad(c+1,"cpu_top pc_e I_dnpc", false,-1, 63,0);
        tracep->declQuad(c+215,"cpu_top pc_e O_pc", false,-1, 63,0);
        tracep->declQuad(c+377,"cpu_top pc_e PC_RESET", false,-1, 63,0);
        tracep->declQuad(c+292,"cpu_top mem_ld_e I_data_in", false,-1, 63,0);
        tracep->declBus(c+25,"cpu_top mem_ld_e I_rd_strb", false,-1, 8,0);
        tracep->declBus(c+41,"cpu_top mem_ld_e I_rd_shamt", false,-1, 2,0);
        tracep->declQuad(c+15,"cpu_top mem_ld_e O_load_data", false,-1, 63,0);
        tracep->declBit(c+42,"cpu_top mem_ld_e sext_flag", false,-1);
        tracep->declBit(c+43,"cpu_top mem_ld_e sext_bit", false,-1);
        tracep->declBus(c+44,"cpu_top mem_ld_e sext_mask", false,-1, 7,0);
        tracep->declQuad(c+45,"cpu_top mem_ld_e ld_data", false,-1, 63,0);
        tracep->declQuad(c+7,"cpu_top mem_sd_e I_data_in", false,-1, 63,0);
        tracep->declBus(c+24,"cpu_top mem_sd_e I_wr_strb", false,-1, 7,0);
        tracep->declQuad(c+294,"cpu_top mem_sd_e O_sd_data", false,-1, 63,0);
        tracep->declBus(c+374,"cpu_top regin_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+375,"cpu_top regin_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+47,"cpu_top regin_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+20,"cpu_top regin_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+3,"cpu_top regin_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+53+i*2,"cpu_top regin_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+376,"cpu_top regin_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+283,"cpu_top gpr_e I_sys_clk", false,-1);
        tracep->declBit(c+284,"cpu_top gpr_e I_rst", false,-1);
        tracep->declQuad(c+3,"cpu_top gpr_e I_wr_data", false,-1, 63,0);
        tracep->declBit(c+26,"cpu_top gpr_e I_wen", false,-1);
        tracep->declBus(c+301,"cpu_top gpr_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+299,"cpu_top gpr_e I_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+5,"cpu_top gpr_e O_rs1_data", false,-1, 63,0);
        tracep->declBus(c+300,"cpu_top gpr_e I_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+7,"cpu_top gpr_e O_rs2_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+219+i*2,"cpu_top gpr_e gpr", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBit(c+59+i*1,"cpu_top gpr_e wen", true,(i+0));}}
        tracep->declBit(c+283,"cpu_top decoder_e I_sys_clk", false,-1);
        tracep->declBit(c+284,"cpu_top decoder_e I_rst", false,-1);
        tracep->declBus(c+285,"cpu_top decoder_e I_inst", false,-1, 31,0);
        tracep->declQuad(c+297,"cpu_top decoder_e O_imm", false,-1, 63,0);
        tracep->declQuad(c+5,"cpu_top decoder_e I_rs1_data", false,-1, 63,0);
        tracep->declBus(c+299,"cpu_top decoder_e O_rs1", false,-1, 4,0);
        tracep->declQuad(c+7,"cpu_top decoder_e I_rs2_data", false,-1, 63,0);
        tracep->declBus(c+300,"cpu_top decoder_e O_rs2", false,-1, 4,0);
        tracep->declBus(c+301,"cpu_top decoder_e O_rd", false,-1, 4,0);
        tracep->declBit(c+26,"cpu_top decoder_e O_reg_wen", false,-1);
        tracep->declBit(c+302,"cpu_top decoder_e O_mem_wen", false,-1);
        tracep->declBus(c+24,"cpu_top decoder_e O_mem_wstrb", false,-1, 7,0);
        tracep->declBus(c+25,"cpu_top decoder_e O_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+19,"cpu_top decoder_e O_dnpc_sel", false,-1, 2,0);
        tracep->declBus(c+20,"cpu_top decoder_e O_regin_sel", false,-1, 2,0);
        tracep->declBus(c+21,"cpu_top decoder_e O_opnum1_sel", false,-1, 2,0);
        tracep->declBus(c+22,"cpu_top decoder_e O_opnum2_sel", false,-1, 1,0);
        tracep->declBus(c+23,"cpu_top decoder_e O_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+28,"cpu_top decoder_e O_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+27,"cpu_top decoder_e O_word_op_mask", false,-1);
        tracep->declBus(c+303,"cpu_top decoder_e funct7", false,-1, 6,0);
        tracep->declBus(c+304,"cpu_top decoder_e opcode", false,-1, 6,0);
        tracep->declBus(c+300,"cpu_top decoder_e rs2", false,-1, 4,0);
        tracep->declBus(c+299,"cpu_top decoder_e rs1", false,-1, 4,0);
        tracep->declBus(c+301,"cpu_top decoder_e rd", false,-1, 4,0);
        tracep->declBus(c+305,"cpu_top decoder_e funct3", false,-1, 2,0);
        tracep->declBus(c+306,"cpu_top decoder_e immI", false,-1, 11,0);
        tracep->declBus(c+91,"cpu_top decoder_e immS", false,-1, 11,0);
        tracep->declBus(c+92,"cpu_top decoder_e immB", false,-1, 12,0);
        tracep->declBus(c+307,"cpu_top decoder_e immU", false,-1, 31,0);
        tracep->declBus(c+93,"cpu_top decoder_e immJ", false,-1, 20,0);
        tracep->declBit(c+94,"cpu_top decoder_e typeI", false,-1);
        tracep->declBit(c+302,"cpu_top decoder_e typeS", false,-1);
        tracep->declBit(c+95,"cpu_top decoder_e typeR", false,-1);
        tracep->declBit(c+308,"cpu_top decoder_e typeB", false,-1);
        tracep->declBit(c+96,"cpu_top decoder_e typeU", false,-1);
        tracep->declBit(c+309,"cpu_top decoder_e typeJ", false,-1);
        tracep->declBit(c+310,"cpu_top decoder_e LUI", false,-1);
        tracep->declBit(c+311,"cpu_top decoder_e AUIPC", false,-1);
        tracep->declBit(c+309,"cpu_top decoder_e JAL", false,-1);
        tracep->declBit(c+97,"cpu_top decoder_e JALR", false,-1);
        tracep->declBit(c+98,"cpu_top decoder_e LD", false,-1);
        tracep->declBit(c+99,"cpu_top decoder_e LW", false,-1);
        tracep->declBit(c+100,"cpu_top decoder_e LWU", false,-1);
        tracep->declBit(c+101,"cpu_top decoder_e LH", false,-1);
        tracep->declBit(c+102,"cpu_top decoder_e LHU", false,-1);
        tracep->declBit(c+103,"cpu_top decoder_e LB", false,-1);
        tracep->declBit(c+312,"cpu_top decoder_e LBU", false,-1);
        tracep->declBit(c+313,"cpu_top decoder_e ADDI", false,-1);
        tracep->declBit(c+314,"cpu_top decoder_e SLTI", false,-1);
        tracep->declBit(c+315,"cpu_top decoder_e SLTIU", false,-1);
        tracep->declBit(c+316,"cpu_top decoder_e XORI", false,-1);
        tracep->declBit(c+317,"cpu_top decoder_e ORI", false,-1);
        tracep->declBit(c+318,"cpu_top decoder_e ANDI", false,-1);
        tracep->declBit(c+319,"cpu_top decoder_e SLLI", false,-1);
        tracep->declBit(c+320,"cpu_top decoder_e SRLI", false,-1);
        tracep->declBit(c+321,"cpu_top decoder_e SRAI", false,-1);
        tracep->declBit(c+322,"cpu_top decoder_e ADDIW", false,-1);
        tracep->declBit(c+323,"cpu_top decoder_e SLLIW", false,-1);
        tracep->declBit(c+324,"cpu_top decoder_e SRLIW", false,-1);
        tracep->declBit(c+325,"cpu_top decoder_e SRAIW", false,-1);
        tracep->declBit(c+326,"cpu_top decoder_e ADD", false,-1);
        tracep->declBit(c+327,"cpu_top decoder_e SUB", false,-1);
        tracep->declBit(c+328,"cpu_top decoder_e SLL", false,-1);
        tracep->declBit(c+329,"cpu_top decoder_e SLT", false,-1);
        tracep->declBit(c+330,"cpu_top decoder_e SLTU", false,-1);
        tracep->declBit(c+331,"cpu_top decoder_e XOR", false,-1);
        tracep->declBit(c+332,"cpu_top decoder_e SRL", false,-1);
        tracep->declBit(c+333,"cpu_top decoder_e SRA", false,-1);
        tracep->declBit(c+334,"cpu_top decoder_e OR", false,-1);
        tracep->declBit(c+335,"cpu_top decoder_e AND", false,-1);
        tracep->declBit(c+104,"cpu_top decoder_e MUL", false,-1);
        tracep->declBit(c+105,"cpu_top decoder_e MULH", false,-1);
        tracep->declBit(c+106,"cpu_top decoder_e MULHSU", false,-1);
        tracep->declBit(c+336,"cpu_top decoder_e MULHU", false,-1);
        tracep->declBit(c+107,"cpu_top decoder_e DIV", false,-1);
        tracep->declBit(c+337,"cpu_top decoder_e DIVU", false,-1);
        tracep->declBit(c+108,"cpu_top decoder_e REM", false,-1);
        tracep->declBit(c+338,"cpu_top decoder_e REMU", false,-1);
        tracep->declBit(c+339,"cpu_top decoder_e ADDW", false,-1);
        tracep->declBit(c+340,"cpu_top decoder_e SUBW", false,-1);
        tracep->declBit(c+341,"cpu_top decoder_e SLLW", false,-1);
        tracep->declBit(c+342,"cpu_top decoder_e SRLW", false,-1);
        tracep->declBit(c+343,"cpu_top decoder_e SRAW", false,-1);
        tracep->declBit(c+109,"cpu_top decoder_e MULW", false,-1);
        tracep->declBit(c+110,"cpu_top decoder_e DIVW", false,-1);
        tracep->declBit(c+344,"cpu_top decoder_e DIVUW", false,-1);
        tracep->declBit(c+111,"cpu_top decoder_e REMW", false,-1);
        tracep->declBit(c+345,"cpu_top decoder_e REMUW", false,-1);
        tracep->declBit(c+346,"cpu_top decoder_e SD", false,-1);
        tracep->declBit(c+347,"cpu_top decoder_e SW", false,-1);
        tracep->declBit(c+348,"cpu_top decoder_e SH", false,-1);
        tracep->declBit(c+349,"cpu_top decoder_e SB", false,-1);
        tracep->declBit(c+350,"cpu_top decoder_e BEQ", false,-1);
        tracep->declBit(c+351,"cpu_top decoder_e BNE", false,-1);
        tracep->declBit(c+352,"cpu_top decoder_e BLT", false,-1);
        tracep->declBit(c+353,"cpu_top decoder_e BGE", false,-1);
        tracep->declBit(c+354,"cpu_top decoder_e BLTU", false,-1);
        tracep->declBit(c+355,"cpu_top decoder_e BGEU", false,-1);
        tracep->declBit(c+356,"cpu_top decoder_e ECALL", false,-1);
        tracep->declBit(c+357,"cpu_top decoder_e EBREAK", false,-1);
        tracep->declBit(c+358,"cpu_top decoder_e regin_from_mem", false,-1);
        tracep->declBus(c+379,"cpu_top decoder_e SNPC", false,-1, 2,0);
        tracep->declBus(c+380,"cpu_top decoder_e DNPC", false,-1, 2,0);
        tracep->declBus(c+381,"cpu_top decoder_e JALR_DNPC", false,-1, 2,0);
        tracep->declBit(c+112,"cpu_top decoder_e typeB_jr", false,-1);
        tracep->declBit(c+113,"cpu_top decoder_e eq", false,-1);
        tracep->declBit(c+114,"cpu_top decoder_e neq", false,-1);
        tracep->declBit(c+115,"cpu_top decoder_e lt", false,-1);
        tracep->declBit(c+116,"cpu_top decoder_e ge", false,-1);
        tracep->declBit(c+117,"cpu_top decoder_e ltu", false,-1);
        tracep->declBit(c+118,"cpu_top decoder_e geu", false,-1);
        tracep->declBus(c+382,"cpu_top decoder_e OP_ADD", false,-1, 14,0);
        tracep->declBus(c+383,"cpu_top decoder_e OP_SUB", false,-1, 14,0);
        tracep->declBus(c+384,"cpu_top decoder_e OP_SLT", false,-1, 14,0);
        tracep->declBus(c+385,"cpu_top decoder_e OP_SLTU", false,-1, 14,0);
        tracep->declBus(c+386,"cpu_top decoder_e OP_XOR", false,-1, 14,0);
        tracep->declBus(c+387,"cpu_top decoder_e OP_OR", false,-1, 14,0);
        tracep->declBus(c+388,"cpu_top decoder_e OP_AND", false,-1, 14,0);
        tracep->declBus(c+389,"cpu_top decoder_e OP_SLL", false,-1, 14,0);
        tracep->declBus(c+390,"cpu_top decoder_e OP_SRL", false,-1, 14,0);
        tracep->declBus(c+391,"cpu_top decoder_e OP_SRA", false,-1, 14,0);
        tracep->declBus(c+392,"cpu_top decoder_e OP_MUL", false,-1, 14,0);
        tracep->declBus(c+393,"cpu_top decoder_e OP_MULH", false,-1, 14,0);
        tracep->declBus(c+394,"cpu_top decoder_e OP_DIV", false,-1, 14,0);
        tracep->declBus(c+395,"cpu_top decoder_e OP_REM", false,-1, 14,0);
        tracep->declBit(c+119,"cpu_top decoder_e add_flag", false,-1);
        tracep->declBit(c+358,"cpu_top decoder_e ld_flag", false,-1);
        tracep->declBit(c+359,"cpu_top decoder_e sub_flag", false,-1);
        tracep->declBit(c+360,"cpu_top decoder_e slt_flag", false,-1);
        tracep->declBit(c+361,"cpu_top decoder_e sltu_flag", false,-1);
        tracep->declBit(c+362,"cpu_top decoder_e xor_flag", false,-1);
        tracep->declBit(c+363,"cpu_top decoder_e or_flag", false,-1);
        tracep->declBit(c+364,"cpu_top decoder_e and_flag", false,-1);
        tracep->declBit(c+365,"cpu_top decoder_e sll_flag", false,-1);
        tracep->declBit(c+366,"cpu_top decoder_e srl_flag", false,-1);
        tracep->declBit(c+367,"cpu_top decoder_e sra_flag", false,-1);
        tracep->declBit(c+120,"cpu_top decoder_e mul_flag", false,-1);
        tracep->declBit(c+368,"cpu_top decoder_e mulh_flag", false,-1);
        tracep->declBit(c+369,"cpu_top decoder_e div_flag", false,-1);
        tracep->declBit(c+370,"cpu_top decoder_e rem_flag", false,-1);
        tracep->declBus(c+379,"cpu_top decoder_e OP1_RS1", false,-1, 2,0);
        tracep->declBus(c+380,"cpu_top decoder_e OP1_PC", false,-1, 2,0);
        tracep->declBus(c+381,"cpu_top decoder_e OP1_ZERO", false,-1, 2,0);
        tracep->declBit(c+371,"cpu_top decoder_e rs1_flag", false,-1);
        tracep->declBit(c+372,"cpu_top decoder_e pc_flag", false,-1);
        tracep->declBit(c+310,"cpu_top decoder_e zero_flag", false,-1);
        tracep->declBus(c+396,"cpu_top decoder_e OP2_RS2", false,-1, 1,0);
        tracep->declBus(c+397,"cpu_top decoder_e OP2_IMM", false,-1, 1,0);
        tracep->declBit(c+95,"cpu_top decoder_e rs2_flag", false,-1);
        tracep->declBit(c+373,"cpu_top decoder_e imm_flag", false,-1);
        tracep->declBus(c+374,"cpu_top alu_op1_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+375,"cpu_top alu_op1_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+121,"cpu_top alu_op1_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+21,"cpu_top alu_op1_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+9,"cpu_top alu_op1_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+127+i*2,"cpu_top alu_op1_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+376,"cpu_top alu_op1_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+374,"cpu_top alu_op2_64bit_2sel N", false,-1, 31,0);
        tracep->declBus(c+398,"cpu_top alu_op2_64bit_2sel M", false,-1, 31,0);
        tracep->declArray(c+133,"cpu_top alu_op2_64bit_2sel I_sel_data", false,-1, 127,0);
        tracep->declBus(c+22,"cpu_top alu_op2_64bit_2sel I_sel", false,-1, 1,0);
        tracep->declQuad(c+11,"cpu_top alu_op2_64bit_2sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+137+i*2,"cpu_top alu_op2_64bit_2sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+399,"cpu_top alu_op2_64bit_2sel unnamedblk1 i", false,-1, 31,0);
        tracep->declQuad(c+9,"cpu_top alu_e I_op1", false,-1, 63,0);
        tracep->declQuad(c+11,"cpu_top alu_e I_op2", false,-1, 63,0);
        tracep->declBus(c+23,"cpu_top alu_e I_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+28,"cpu_top alu_e I_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+27,"cpu_top alu_e I_word_op_mask", false,-1);
        tracep->declQuad(c+17,"cpu_top alu_e O_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+13,"cpu_top alu_e O_result", false,-1, 63,0);
        tracep->declBit(c+141,"cpu_top alu_e op_add", false,-1);
        tracep->declBit(c+142,"cpu_top alu_e op_sub", false,-1);
        tracep->declBit(c+143,"cpu_top alu_e op_slt", false,-1);
        tracep->declBit(c+144,"cpu_top alu_e op_sltu", false,-1);
        tracep->declBit(c+145,"cpu_top alu_e op_xor", false,-1);
        tracep->declBit(c+146,"cpu_top alu_e op_or", false,-1);
        tracep->declBit(c+147,"cpu_top alu_e op_and", false,-1);
        tracep->declBit(c+148,"cpu_top alu_e op_sll", false,-1);
        tracep->declBit(c+149,"cpu_top alu_e op_srl", false,-1);
        tracep->declBit(c+150,"cpu_top alu_e op_sra", false,-1);
        tracep->declBit(c+151,"cpu_top alu_e op_mul", false,-1);
        tracep->declBit(c+152,"cpu_top alu_e op_mulh", false,-1);
        tracep->declBit(c+153,"cpu_top alu_e op_div", false,-1);
        tracep->declBit(c+154,"cpu_top alu_e op_rem", false,-1);
        tracep->declQuad(c+17,"cpu_top alu_e add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+155,"cpu_top alu_e slt_result", false,-1, 63,0);
        tracep->declQuad(c+157,"cpu_top alu_e sltu_result", false,-1, 63,0);
        tracep->declQuad(c+159,"cpu_top alu_e xor_result", false,-1, 63,0);
        tracep->declQuad(c+161,"cpu_top alu_e or_result", false,-1, 63,0);
        tracep->declQuad(c+163,"cpu_top alu_e and_result", false,-1, 63,0);
        tracep->declQuad(c+165,"cpu_top alu_e sll_result", false,-1, 63,0);
        tracep->declQuad(c+167,"cpu_top alu_e srl_result", false,-1, 63,0);
        tracep->declQuad(c+169,"cpu_top alu_e sra_result", false,-1, 63,0);
        tracep->declQuad(c+171,"cpu_top alu_e mul_result", false,-1, 63,0);
        tracep->declQuad(c+173,"cpu_top alu_e mulh_result", false,-1, 63,0);
        tracep->declQuad(c+175,"cpu_top alu_e div_result", false,-1, 63,0);
        tracep->declQuad(c+177,"cpu_top alu_e rem_result", false,-1, 63,0);
        tracep->declArray(c+179,"cpu_top alu_e op1_sext", false,-1, 64,0);
        tracep->declArray(c+182,"cpu_top alu_e op2_sext", false,-1, 64,0);
        tracep->declBit(c+185,"cpu_top alu_e sign_bit1", false,-1);
        tracep->declBit(c+186,"cpu_top alu_e sign_bit2", false,-1);
        tracep->declBit(c+187,"cpu_top alu_e sext1", false,-1);
        tracep->declBit(c+188,"cpu_top alu_e sext2", false,-1);
        tracep->declBit(c+189,"cpu_top alu_e div_sink", false,-1);
        tracep->declBit(c+190,"cpu_top alu_e rem_sink", false,-1);
        tracep->declQuad(c+9,"cpu_top alu_e adder1", false,-1, 63,0);
        tracep->declQuad(c+191,"cpu_top alu_e adder2", false,-1, 63,0);
        tracep->declQuad(c+17,"cpu_top alu_e result", false,-1, 63,0);
        tracep->declQuad(c+193,"cpu_top alu_e cin", false,-1, 63,0);
        tracep->declBit(c+195,"cpu_top alu_e cout", false,-1);
        tracep->declQuad(c+196,"cpu_top alu_e reverse_op1", false,-1, 63,0);
        tracep->declBit(c+185,"cpu_top alu_e shift_sign", false,-1);
        tracep->declQuad(c+198,"cpu_top alu_e shift_op", false,-1, 63,0);
        tracep->declBus(c+200,"cpu_top alu_e shamt", false,-1, 5,0);
        tracep->declQuad(c+201,"cpu_top alu_e sra_mask", false,-1, 63,0);
        tracep->declQuad(c+167,"cpu_top alu_e shift_result", false,-1, 63,0);
        tracep->declBus(c+203,"cpu_top alu_e shift_opW", false,-1, 31,0);
        tracep->declQuad(c+204,"cpu_top alu_e srl_op", false,-1, 63,0);
        tracep->declQuad(c+206,"cpu_top alu_e sllw_result", false,-1, 63,0);
        tracep->declQuad(c+208,"cpu_top alu_e slldw_result", false,-1, 63,0);
        tracep->declQuad(c+210,"cpu_top alu_e dword_result", false,-1, 63,0);
        tracep->declQuad(c+212,"cpu_top alu_e word_sext_result", false,-1, 63,0);
        tracep->declBit(c+214,"cpu_top alu_e word_sext", false,-1);
    }
}

void Vcpu_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vcpu_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vcpu_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vcpu_top___024root__traceRegister(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vcpu_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vcpu_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vcpu_top___024root__traceCleanup, vlSelf);
    }
}

void Vcpu_top___024root__traceFullSub0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vcpu_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vcpu_top___024root* const __restrict vlSelf = static_cast<Vcpu_top___024root*>(voidSelf);
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vcpu_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vcpu_top___024root__traceFullSub0(Vcpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp71;
    VlWide<4>/*127:0*/ __Vtemp72;
    VlWide<4>/*127:0*/ __Vtemp73;
    VlWide<4>/*127:0*/ __Vtemp74;
    VlWide<4>/*127:0*/ __Vtemp75;
    VlWide<4>/*127:0*/ __Vtemp76;
    VlWide<3>/*95:0*/ __Vtemp78;
    VlWide<3>/*95:0*/ __Vtemp81;
    VlWide<3>/*95:0*/ __Vtemp84;
    VlWide<3>/*95:0*/ __Vtemp87;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->cpu_top__DOT__dnpc),64);
        tracep->fullQData(oldp+3,(vlSelf->cpu_top__DOT__wr_data),64);
        tracep->fullQData(oldp+5,(vlSelf->cpu_top__DOT__rs1_data),64);
        tracep->fullQData(oldp+7,(vlSelf->cpu_top__DOT__rs2_data),64);
        tracep->fullQData(oldp+9,(vlSelf->cpu_top__DOT__alu_op1),64);
        tracep->fullQData(oldp+11,(vlSelf->cpu_top__DOT__alu_op2),64);
        tracep->fullQData(oldp+13,(vlSelf->cpu_top__DOT__alu_out),64);
        tracep->fullQData(oldp+15,(vlSelf->cpu_top__DOT__mem_in),64);
        tracep->fullQData(oldp+17,(vlSelf->cpu_top__DOT__alu_e__DOT__result),64);
        tracep->fullCData(oldp+19,(vlSelf->cpu_top__DOT__dnpc_sel),3);
        tracep->fullCData(oldp+20,(vlSelf->cpu_top__DOT__regin_sel),3);
        tracep->fullCData(oldp+21,(vlSelf->cpu_top__DOT__opnum1_sel),3);
        tracep->fullCData(oldp+22,(vlSelf->cpu_top__DOT__opnum2_sel),2);
        tracep->fullSData(oldp+23,(vlSelf->cpu_top__DOT__alu_op_sel),15);
        tracep->fullCData(oldp+24,(vlSelf->cpu_top__DOT__mem_wstrb),8);
        tracep->fullSData(oldp+25,(vlSelf->cpu_top__DOT__mem_rstrb),9);
        tracep->fullBit(oldp+26,(vlSelf->cpu_top__DOT__reg_wen));
        tracep->fullBit(oldp+27,(vlSelf->cpu_top__DOT__word_op_mask));
        tracep->fullCData(oldp+28,(vlSelf->cpu_top__DOT__alu_op_sext),2);
        tracep->fullWData(oldp+29,(vlSelf->cpu_top__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+35,(vlSelf->cpu_top__DOT__nextpc_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+37,(vlSelf->cpu_top__DOT__nextpc_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+39,(vlSelf->cpu_top__DOT__nextpc_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullCData(oldp+41,((7U & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__result))),3);
        tracep->fullBit(oldp+42,((1U & ((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                        >> 8U))));
        tracep->fullBit(oldp+43,((1U & (((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                         >> 8U) & (
                                                   (0xfU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->cpu_top__DOT__mem_rstrb)))
                                                    ? (IData)(
                                                              (vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                               >> 0x1fU))
                                                    : 
                                                   ((3U 
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
        tracep->fullCData(oldp+44,((0xffU & (~ (IData)(vlSelf->cpu_top__DOT__mem_rstrb)))),8);
        tracep->fullQData(oldp+45,(vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data),64);
        tracep->fullWData(oldp+47,(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+53,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+55,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+57,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullBit(oldp+59,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0]));
        tracep->fullBit(oldp+60,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[1]));
        tracep->fullBit(oldp+61,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[2]));
        tracep->fullBit(oldp+62,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[3]));
        tracep->fullBit(oldp+63,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[4]));
        tracep->fullBit(oldp+64,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[5]));
        tracep->fullBit(oldp+65,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[6]));
        tracep->fullBit(oldp+66,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[7]));
        tracep->fullBit(oldp+67,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[8]));
        tracep->fullBit(oldp+68,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[9]));
        tracep->fullBit(oldp+69,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[10]));
        tracep->fullBit(oldp+70,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[11]));
        tracep->fullBit(oldp+71,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[12]));
        tracep->fullBit(oldp+72,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[13]));
        tracep->fullBit(oldp+73,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[14]));
        tracep->fullBit(oldp+74,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[15]));
        tracep->fullBit(oldp+75,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[16]));
        tracep->fullBit(oldp+76,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[17]));
        tracep->fullBit(oldp+77,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[18]));
        tracep->fullBit(oldp+78,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[19]));
        tracep->fullBit(oldp+79,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[20]));
        tracep->fullBit(oldp+80,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[21]));
        tracep->fullBit(oldp+81,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[22]));
        tracep->fullBit(oldp+82,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[23]));
        tracep->fullBit(oldp+83,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[24]));
        tracep->fullBit(oldp+84,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[25]));
        tracep->fullBit(oldp+85,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[26]));
        tracep->fullBit(oldp+86,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[27]));
        tracep->fullBit(oldp+87,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[28]));
        tracep->fullBit(oldp+88,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[29]));
        tracep->fullBit(oldp+89,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[30]));
        tracep->fullBit(oldp+90,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[31]));
        tracep->fullSData(oldp+91,(vlSelf->cpu_top__DOT__decoder_e__DOT__immS),12);
        tracep->fullSData(oldp+92,(vlSelf->cpu_top__DOT__decoder_e__DOT__immB),13);
        tracep->fullIData(oldp+93,(vlSelf->cpu_top__DOT__decoder_e__DOT__immJ),21);
        tracep->fullBit(oldp+94,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI));
        tracep->fullBit(oldp+95,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR));
        tracep->fullBit(oldp+96,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU));
        tracep->fullBit(oldp+97,(vlSelf->cpu_top__DOT__decoder_e__DOT__JALR));
        tracep->fullBit(oldp+98,(vlSelf->cpu_top__DOT__decoder_e__DOT__LD));
        tracep->fullBit(oldp+99,(vlSelf->cpu_top__DOT__decoder_e__DOT__LW));
        tracep->fullBit(oldp+100,(vlSelf->cpu_top__DOT__decoder_e__DOT__LWU));
        tracep->fullBit(oldp+101,(vlSelf->cpu_top__DOT__decoder_e__DOT__LH));
        tracep->fullBit(oldp+102,(vlSelf->cpu_top__DOT__decoder_e__DOT__LHU));
        tracep->fullBit(oldp+103,(vlSelf->cpu_top__DOT__decoder_e__DOT__LB));
        tracep->fullBit(oldp+104,(vlSelf->cpu_top__DOT__decoder_e__DOT__MUL));
        tracep->fullBit(oldp+105,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULH));
        tracep->fullBit(oldp+106,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULHSU));
        tracep->fullBit(oldp+107,(vlSelf->cpu_top__DOT__decoder_e__DOT__DIV));
        tracep->fullBit(oldp+108,(vlSelf->cpu_top__DOT__decoder_e__DOT__REM));
        tracep->fullBit(oldp+109,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULW));
        tracep->fullBit(oldp+110,(vlSelf->cpu_top__DOT__decoder_e__DOT__DIVW));
        tracep->fullBit(oldp+111,(vlSelf->cpu_top__DOT__decoder_e__DOT__REMW));
        tracep->fullBit(oldp+112,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeB_jr));
        tracep->fullBit(oldp+113,(vlSelf->cpu_top__DOT__decoder_e__DOT__eq));
        tracep->fullBit(oldp+114,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__eq)))));
        tracep->fullBit(oldp+115,(vlSelf->cpu_top__DOT__decoder_e__DOT__lt));
        tracep->fullBit(oldp+116,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__lt)))));
        tracep->fullBit(oldp+117,(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu));
        tracep->fullBit(oldp+118,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu)))));
        tracep->fullBit(oldp+119,(vlSelf->cpu_top__DOT__decoder_e__DOT__add_flag));
        tracep->fullBit(oldp+120,(((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MUL) 
                                   | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULW))));
        tracep->fullWData(oldp+121,(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+127,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+129,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+131,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullWData(oldp+133,(vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data),128);
        tracep->fullQData(oldp+137,(vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+139,(vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[1]),64);
        tracep->fullBit(oldp+141,((1U & (IData)(vlSelf->cpu_top__DOT__alu_op_sel))));
        tracep->fullBit(oldp+142,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+143,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                         >> 2U))));
        tracep->fullBit(oldp+144,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                         >> 3U))));
        tracep->fullBit(oldp+145,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                         >> 4U))));
        tracep->fullBit(oldp+146,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                         >> 5U))));
        tracep->fullBit(oldp+147,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                         >> 6U))));
        tracep->fullBit(oldp+148,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                         >> 7U))));
        tracep->fullBit(oldp+149,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                         >> 8U))));
        tracep->fullBit(oldp+150,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                         >> 9U))));
        tracep->fullBit(oldp+151,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+152,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+153,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+154,((1U & ((IData)(vlSelf->cpu_top__DOT__alu_op_sel) 
                                         >> 0xdU))));
        tracep->fullQData(oldp+155,(vlSelf->cpu_top__DOT__alu_e__DOT__slt_result),64);
        tracep->fullQData(oldp+157,((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__cout)))))),64);
        tracep->fullQData(oldp+159,((vlSelf->cpu_top__DOT__alu_op1 
                                     ^ vlSelf->cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+161,((vlSelf->cpu_top__DOT__alu_op1 
                                     | vlSelf->cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+163,((vlSelf->cpu_top__DOT__alu_op1 
                                     & vlSelf->cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+165,(((IData)(vlSelf->cpu_top__DOT__word_op_mask)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
                                                            >> 0x20U))))
                                      : vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result)),64);
        tracep->fullQData(oldp+167,(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result),64);
        tracep->fullQData(oldp+169,((((- (QData)((IData)(
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
        VL_EXTENDS_WW(128,65, __Vtemp71, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext);
        VL_EXTENDS_WW(128,65, __Vtemp72, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        VL_MULS_WWW(128,128,128, __Vtemp73, __Vtemp71, __Vtemp72);
        tracep->fullQData(oldp+171,((((QData)((IData)(
                                                      __Vtemp73[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp73[0U])))),64);
        VL_EXTENDS_WW(128,65, __Vtemp74, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext);
        VL_EXTENDS_WW(128,65, __Vtemp75, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        VL_MULS_WWW(128,128,128, __Vtemp76, __Vtemp74, __Vtemp75);
        tracep->fullQData(oldp+173,((((QData)((IData)(
                                                      __Vtemp76[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp76[2U])))),64);
        VL_DIVS_WWW(65, __Vtemp78, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        tracep->fullQData(oldp+175,((((QData)((IData)(
                                                      __Vtemp78[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp78[0U])))),64);
        VL_MODDIVS_WWW(65, __Vtemp81, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        tracep->fullQData(oldp+177,((((QData)((IData)(
                                                      __Vtemp81[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp81[0U])))),64);
        tracep->fullWData(oldp+179,(vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext),65);
        tracep->fullWData(oldp+182,(vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext),65);
        tracep->fullBit(oldp+185,((1U & ((IData)(vlSelf->cpu_top__DOT__word_op_mask)
                                          ? (IData)(
                                                    (vlSelf->cpu_top__DOT__alu_op1 
                                                     >> 0x1fU))
                                          : (IData)(
                                                    (vlSelf->cpu_top__DOT__alu_op1 
                                                     >> 0x3fU))))));
        tracep->fullBit(oldp+186,((1U & ((IData)(vlSelf->cpu_top__DOT__word_op_mask)
                                          ? (IData)(
                                                    (vlSelf->cpu_top__DOT__alu_op2 
                                                     >> 0x1fU))
                                          : (IData)(
                                                    (vlSelf->cpu_top__DOT__alu_op2 
                                                     >> 0x3fU))))));
        tracep->fullBit(oldp+187,(vlSelf->cpu_top__DOT__alu_e__DOT__sext1));
        tracep->fullBit(oldp+188,(vlSelf->cpu_top__DOT__alu_e__DOT__sext2));
        VL_DIVS_WWW(65, __Vtemp84, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        tracep->fullBit(oldp+189,((1U & __Vtemp84[2U])));
        VL_MODDIVS_WWW(65, __Vtemp87, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        tracep->fullBit(oldp+190,((1U & __Vtemp87[2U])));
        tracep->fullQData(oldp+191,(vlSelf->cpu_top__DOT__alu_e__DOT__adder2),64);
        tracep->fullQData(oldp+193,(vlSelf->cpu_top__DOT__alu_e__DOT__cin),64);
        tracep->fullBit(oldp+195,(vlSelf->cpu_top__DOT__alu_e__DOT__cout));
        tracep->fullQData(oldp+196,(vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1),64);
        tracep->fullQData(oldp+198,(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op),64);
        tracep->fullCData(oldp+200,(vlSelf->cpu_top__DOT__alu_e__DOT__shamt),6);
        tracep->fullQData(oldp+201,(((IData)(vlSelf->cpu_top__DOT__word_op_mask)
                                      ? (~ (0xffffffffULL 
                                            >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt)))
                                      : (~ (0xffffffffffffffffULL 
                                            >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt))))),64);
        tracep->fullIData(oldp+203,(((0x80U & (IData)(vlSelf->cpu_top__DOT__alu_op_sel))
                                      ? (IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_op 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op))),32);
        tracep->fullQData(oldp+204,(((IData)(vlSelf->cpu_top__DOT__word_op_mask)
                                      ? (QData)((IData)(
                                                        ((0x80U 
                                                          & (IData)(vlSelf->cpu_top__DOT__alu_op_sel))
                                                          ? (IData)(
                                                                    (vlSelf->cpu_top__DOT__alu_e__DOT__shift_op 
                                                                     >> 0x20U))
                                                          : (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op))))
                                      : vlSelf->cpu_top__DOT__alu_e__DOT__shift_op)),64);
        tracep->fullQData(oldp+206,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
                                                                   >> 0x20U))))),64);
        tracep->fullQData(oldp+208,(vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result),64);
        tracep->fullQData(oldp+210,(vlSelf->cpu_top__DOT__alu_e__DOT__dword_result),64);
        tracep->fullQData(oldp+212,((((QData)((IData)(
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
                                      << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__alu_e__DOT__dword_result)))),64);
        tracep->fullBit(oldp+214,(((1U & ((IData)((0U 
                                                   != 
                                                   (0x3000U 
                                                    & (IData)(vlSelf->cpu_top__DOT__alu_op_sel)))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->cpu_top__DOT__alu_op_sext))))))
                                    ? 0U : (1U & (IData)(
                                                         (vlSelf->cpu_top__DOT__alu_e__DOT__dword_result 
                                                          >> 0x1fU))))));
        tracep->fullQData(oldp+215,(vlSelf->cpu_top__DOT__current_pc),64);
        tracep->fullQData(oldp+217,((4ULL + vlSelf->cpu_top__DOT__current_pc)),64);
        tracep->fullQData(oldp+219,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0]),64);
        tracep->fullQData(oldp+221,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[1]),64);
        tracep->fullQData(oldp+223,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[2]),64);
        tracep->fullQData(oldp+225,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[3]),64);
        tracep->fullQData(oldp+227,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[4]),64);
        tracep->fullQData(oldp+229,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[5]),64);
        tracep->fullQData(oldp+231,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[6]),64);
        tracep->fullQData(oldp+233,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[7]),64);
        tracep->fullQData(oldp+235,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[8]),64);
        tracep->fullQData(oldp+237,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[9]),64);
        tracep->fullQData(oldp+239,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[10]),64);
        tracep->fullQData(oldp+241,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[11]),64);
        tracep->fullQData(oldp+243,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[12]),64);
        tracep->fullQData(oldp+245,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[13]),64);
        tracep->fullQData(oldp+247,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[14]),64);
        tracep->fullQData(oldp+249,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[15]),64);
        tracep->fullQData(oldp+251,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[16]),64);
        tracep->fullQData(oldp+253,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[17]),64);
        tracep->fullQData(oldp+255,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[18]),64);
        tracep->fullQData(oldp+257,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[19]),64);
        tracep->fullQData(oldp+259,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[20]),64);
        tracep->fullQData(oldp+261,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[21]),64);
        tracep->fullQData(oldp+263,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[22]),64);
        tracep->fullQData(oldp+265,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[23]),64);
        tracep->fullQData(oldp+267,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[24]),64);
        tracep->fullQData(oldp+269,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[25]),64);
        tracep->fullQData(oldp+271,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[26]),64);
        tracep->fullQData(oldp+273,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[27]),64);
        tracep->fullQData(oldp+275,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[28]),64);
        tracep->fullQData(oldp+277,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[29]),64);
        tracep->fullQData(oldp+279,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[30]),64);
        tracep->fullQData(oldp+281,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[31]),64);
        tracep->fullBit(oldp+283,(vlSelf->I_sys_clk));
        tracep->fullBit(oldp+284,(vlSelf->I_rst));
        tracep->fullIData(oldp+285,(vlSelf->I_inst),32);
        tracep->fullQData(oldp+286,(vlSelf->O_pc),64);
        tracep->fullQData(oldp+288,(vlSelf->O_mem_addr),64);
        tracep->fullBit(oldp+290,(vlSelf->O_mem_rd_en));
        tracep->fullBit(oldp+291,(vlSelf->O_mem_wen));
        tracep->fullQData(oldp+292,(vlSelf->I_mem_rd_data),64);
        tracep->fullQData(oldp+294,(vlSelf->O_mem_wr_data),64);
        tracep->fullCData(oldp+296,(vlSelf->O_mem_wr_strb),8);
        tracep->fullQData(oldp+297,(((((((- (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI))) 
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
        tracep->fullCData(oldp+299,((0x1fU & (vlSelf->I_inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+300,((0x1fU & (vlSelf->I_inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+301,((0x1fU & (vlSelf->I_inst 
                                              >> 7U))),5);
        tracep->fullBit(oldp+302,((0x23U == (0x7fU 
                                             & vlSelf->I_inst))));
        tracep->fullCData(oldp+303,((vlSelf->I_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+304,((0x7fU & vlSelf->I_inst)),7);
        tracep->fullCData(oldp+305,((7U & (vlSelf->I_inst 
                                           >> 0xcU))),3);
        tracep->fullSData(oldp+306,((vlSelf->I_inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+307,((0xfffff000U & vlSelf->I_inst)),32);
        tracep->fullBit(oldp+308,((0x63U == (0x7fU 
                                             & vlSelf->I_inst))));
        tracep->fullBit(oldp+309,((0x6fU == (0x7fU 
                                             & vlSelf->I_inst))));
        tracep->fullBit(oldp+310,((0x37U == (0x7fU 
                                             & vlSelf->I_inst))));
        tracep->fullBit(oldp+311,((0x17U == (0x7fU 
                                             & vlSelf->I_inst))));
        tracep->fullBit(oldp+312,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)))));
        tracep->fullBit(oldp+313,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->I_inst)))));
        tracep->fullBit(oldp+314,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)))));
        tracep->fullBit(oldp+315,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)))));
        tracep->fullBit(oldp+316,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)))));
        tracep->fullBit(oldp+317,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)))));
        tracep->fullBit(oldp+318,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)))));
        tracep->fullBit(oldp+319,((IData)(((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (0U == 
                                              (vlSelf->I_inst 
                                               >> 0x1aU))))));
        tracep->fullBit(oldp+320,((IData)(((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (0U == 
                                              (vlSelf->I_inst 
                                               >> 0x1aU))))));
        tracep->fullBit(oldp+321,((IData)(((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (0x10U 
                                              == (vlSelf->I_inst 
                                                  >> 0x1aU))))));
        tracep->fullBit(oldp+322,((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlSelf->I_inst)))));
        tracep->fullBit(oldp+323,((IData)(((0x101bU 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (0U == 
                                              (vlSelf->I_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+324,((IData)(((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (0U == 
                                              (vlSelf->I_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+325,((IData)(((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (0x20U 
                                              == (vlSelf->I_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+326,((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->I_inst)) 
                                           & (0U == 
                                              (vlSelf->I_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+327,((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->I_inst)) 
                                           & (0x20U 
                                              == (vlSelf->I_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+328,((IData)(((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (0U == 
                                              (vlSelf->I_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+329,((IData)(((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (0U == 
                                              (vlSelf->I_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+330,((IData)(((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (0U == 
                                              (vlSelf->I_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+331,((IData)(((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (0U == 
                                              (vlSelf->I_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+332,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (0U == 
                                              (vlSelf->I_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+333,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (0x20U 
                                              == (vlSelf->I_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+334,((IData)(((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (0U == 
                                              (vlSelf->I_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+335,((IData)(((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (0U == 
                                              (vlSelf->I_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+336,((IData)(((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (1U == 
                                              (vlSelf->I_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+337,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (1U == 
                                              (vlSelf->I_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+338,((IData)(((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (1U == 
                                              (vlSelf->I_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+339,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->I_inst)) 
                                           & (0U == 
                                              (vlSelf->I_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+340,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->I_inst)) 
                                           & (0x20U 
                                              == (vlSelf->I_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+341,((IData)(((0x103bU 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (0U == 
                                              (vlSelf->I_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+342,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (0U == 
                                              (vlSelf->I_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+343,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (0x20U 
                                              == (vlSelf->I_inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+344,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (1U == 
                                              (vlSelf->I_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+345,((IData)(((0x703bU 
                                            == (0x707fU 
                                                & vlSelf->I_inst)) 
                                           & (1U == 
                                              (vlSelf->I_inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+346,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)))));
        tracep->fullBit(oldp+347,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)))));
        tracep->fullBit(oldp+348,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)))));
        tracep->fullBit(oldp+349,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->I_inst)))));
        tracep->fullBit(oldp+350,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->I_inst)))));
        tracep->fullBit(oldp+351,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)))));
        tracep->fullBit(oldp+352,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)))));
        tracep->fullBit(oldp+353,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)))));
        tracep->fullBit(oldp+354,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)))));
        tracep->fullBit(oldp+355,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)))));
        tracep->fullBit(oldp+356,((0x73U == vlSelf->I_inst)));
        tracep->fullBit(oldp+357,((0x100073U == vlSelf->I_inst)));
        tracep->fullBit(oldp+358,((3U == (0x7fU & vlSelf->I_inst))));
        tracep->fullBit(oldp+359,(((IData)(((0x33U 
                                             == (0x707fU 
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
        tracep->fullBit(oldp+360,(((IData)((0x2013U 
                                            == (0x707fU 
                                                & vlSelf->I_inst))) 
                                   | (IData)(((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->I_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->I_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+361,(((IData)((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->I_inst))) 
                                   | (IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->I_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->I_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+362,(((IData)((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->I_inst))) 
                                   | (IData)(((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->I_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->I_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+363,(((IData)((0x6013U 
                                            == (0x707fU 
                                                & vlSelf->I_inst))) 
                                   | (IData)(((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->I_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->I_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+364,(((IData)((0x7013U 
                                            == (0x707fU 
                                                & vlSelf->I_inst))) 
                                   | (IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->I_inst)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->I_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+365,(((((IData)(((0x1013U 
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
                                                == 
                                                (0x707fU 
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
        tracep->fullBit(oldp+366,(((((IData)(((0x5013U 
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
                                                == 
                                                (0x707fU 
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
        tracep->fullBit(oldp+367,(((((IData)(((0x5013U 
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
                                                == 
                                                (0x707fU 
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
        tracep->fullBit(oldp+368,((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULH) 
                                    | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                   | (IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->I_inst)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->I_inst 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+369,(((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIV) 
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
        tracep->fullBit(oldp+370,(((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REM) 
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
        tracep->fullBit(oldp+371,((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR) 
                                    | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI)) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->I_inst)))));
        tracep->fullBit(oldp+372,((((0x63U == (0x7fU 
                                               & vlSelf->I_inst)) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->I_inst))) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->I_inst)))));
        tracep->fullBit(oldp+373,((((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->I_inst))) 
                                     | (0x63U == (0x7fU 
                                                  & vlSelf->I_inst))) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->I_inst))) 
                                   | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU))));
        tracep->fullIData(oldp+374,(0x40U),32);
        tracep->fullIData(oldp+375,(3U),32);
        tracep->fullIData(oldp+376,(3U),32);
        tracep->fullQData(oldp+377,(0x80000000ULL),64);
        tracep->fullCData(oldp+379,(1U),3);
        tracep->fullCData(oldp+380,(2U),3);
        tracep->fullCData(oldp+381,(4U),3);
        tracep->fullSData(oldp+382,(1U),15);
        tracep->fullSData(oldp+383,(2U),15);
        tracep->fullSData(oldp+384,(4U),15);
        tracep->fullSData(oldp+385,(8U),15);
        tracep->fullSData(oldp+386,(0x10U),15);
        tracep->fullSData(oldp+387,(0x20U),15);
        tracep->fullSData(oldp+388,(0x40U),15);
        tracep->fullSData(oldp+389,(0x80U),15);
        tracep->fullSData(oldp+390,(0x100U),15);
        tracep->fullSData(oldp+391,(0x200U),15);
        tracep->fullSData(oldp+392,(0x400U),15);
        tracep->fullSData(oldp+393,(0x800U),15);
        tracep->fullSData(oldp+394,(0x1000U),15);
        tracep->fullSData(oldp+395,(0x2000U),15);
        tracep->fullCData(oldp+396,(1U),2);
        tracep->fullCData(oldp+397,(2U),2);
        tracep->fullIData(oldp+398,(2U),32);
        tracep->fullIData(oldp+399,(2U),32);
    }
}
