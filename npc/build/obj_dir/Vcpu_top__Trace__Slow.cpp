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
        tracep->declBit(c+232,"I_sys_clk", false,-1);
        tracep->declBit(c+233,"I_rst", false,-1);
        tracep->declBus(c+234,"I_inst", false,-1, 31,0);
        tracep->declQuad(c+235,"O_pc", false,-1, 63,0);
        tracep->declQuad(c+237,"I_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+239,"O_mem_rd_en", false,-1);
        tracep->declQuad(c+240,"O_mem_wr_data", false,-1, 63,0);
        tracep->declQuad(c+242,"O_mem_wr_addr", false,-1, 63,0);
        tracep->declBit(c+244,"O_mem_wen", false,-1);
        tracep->declBit(c+232,"cpu_top I_sys_clk", false,-1);
        tracep->declBit(c+233,"cpu_top I_rst", false,-1);
        tracep->declBus(c+234,"cpu_top I_inst", false,-1, 31,0);
        tracep->declQuad(c+235,"cpu_top O_pc", false,-1, 63,0);
        tracep->declQuad(c+237,"cpu_top I_mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+239,"cpu_top O_mem_rd_en", false,-1);
        tracep->declQuad(c+240,"cpu_top O_mem_wr_data", false,-1, 63,0);
        tracep->declQuad(c+242,"cpu_top O_mem_wr_addr", false,-1, 63,0);
        tracep->declBit(c+244,"cpu_top O_mem_wen", false,-1);
        tracep->declQuad(c+164,"cpu_top current_pc", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu_top dnpc", false,-1, 63,0);
        tracep->declQuad(c+166,"cpu_top snpc", false,-1, 63,0);
        tracep->declQuad(c+245,"cpu_top imm", false,-1, 63,0);
        tracep->declQuad(c+3,"cpu_top wr_data", false,-1, 63,0);
        tracep->declQuad(c+5,"cpu_top rs1_data", false,-1, 63,0);
        tracep->declQuad(c+7,"cpu_top rs2_data", false,-1, 63,0);
        tracep->declQuad(c+9,"cpu_top alu_op1", false,-1, 63,0);
        tracep->declQuad(c+11,"cpu_top alu_op2", false,-1, 63,0);
        tracep->declQuad(c+13,"cpu_top alu_out", false,-1, 63,0);
        tracep->declQuad(c+237,"cpu_top mem_in", false,-1, 63,0);
        tracep->declQuad(c+7,"cpu_top mem_out", false,-1, 63,0);
        tracep->declQuad(c+15,"cpu_top mem_addr", false,-1, 63,0);
        tracep->declBus(c+247,"cpu_top rs1_addr", false,-1, 4,0);
        tracep->declBus(c+248,"cpu_top rs2_addr", false,-1, 4,0);
        tracep->declBus(c+249,"cpu_top rd_addr", false,-1, 4,0);
        tracep->declBus(c+250,"cpu_top funct3", false,-1, 2,0);
        tracep->declBus(c+17,"cpu_top dnpc_sel", false,-1, 2,0);
        tracep->declBus(c+18,"cpu_top regin_sel", false,-1, 2,0);
        tracep->declBus(c+19,"cpu_top opnum1_sel", false,-1, 2,0);
        tracep->declBus(c+20,"cpu_top opnum2_sel", false,-1, 1,0);
        tracep->declBus(c+21,"cpu_top alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+22,"cpu_top reg_wen", false,-1);
        tracep->declBit(c+251,"cpu_top mem_wen", false,-1);
        tracep->declBus(c+272,"cpu_top nextpc_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+273,"cpu_top nextpc_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+23,"cpu_top nextpc_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+17,"cpu_top nextpc_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+1,"cpu_top nextpc_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+29+i*2,"cpu_top nextpc_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+274,"cpu_top nextpc_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+232,"cpu_top pc_e I_sys_clk", false,-1);
        tracep->declBit(c+233,"cpu_top pc_e I_rst", false,-1);
        tracep->declQuad(c+1,"cpu_top pc_e I_dnpc", false,-1, 63,0);
        tracep->declQuad(c+164,"cpu_top pc_e O_pc", false,-1, 63,0);
        tracep->declQuad(c+275,"cpu_top pc_e PC_RESET", false,-1, 63,0);
        tracep->declBus(c+272,"cpu_top regin_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+273,"cpu_top regin_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+35,"cpu_top regin_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+18,"cpu_top regin_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+3,"cpu_top regin_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+41+i*2,"cpu_top regin_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+274,"cpu_top regin_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+232,"cpu_top gpr_e I_sys_clk", false,-1);
        tracep->declBit(c+233,"cpu_top gpr_e I_rst", false,-1);
        tracep->declQuad(c+3,"cpu_top gpr_e I_wr_data", false,-1, 63,0);
        tracep->declBit(c+22,"cpu_top gpr_e I_wen", false,-1);
        tracep->declBus(c+249,"cpu_top gpr_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+247,"cpu_top gpr_e I_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+5,"cpu_top gpr_e O_rs1_data", false,-1, 63,0);
        tracep->declBus(c+248,"cpu_top gpr_e I_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+7,"cpu_top gpr_e O_rs2_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+168+i*2,"cpu_top gpr_e gpr", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBit(c+47+i*1,"cpu_top gpr_e wen", true,(i+0));}}
        tracep->declBit(c+232,"cpu_top decoder_e I_sys_clk", false,-1);
        tracep->declBit(c+233,"cpu_top decoder_e I_rst", false,-1);
        tracep->declBus(c+234,"cpu_top decoder_e I_inst", false,-1, 31,0);
        tracep->declQuad(c+245,"cpu_top decoder_e O_imm", false,-1, 63,0);
        tracep->declQuad(c+5,"cpu_top decoder_e I_rs1_data", false,-1, 63,0);
        tracep->declBus(c+247,"cpu_top decoder_e O_rs1", false,-1, 4,0);
        tracep->declQuad(c+7,"cpu_top decoder_e I_rs2_data", false,-1, 63,0);
        tracep->declBus(c+248,"cpu_top decoder_e O_rs2", false,-1, 4,0);
        tracep->declBus(c+249,"cpu_top decoder_e O_rd", false,-1, 4,0);
        tracep->declBit(c+22,"cpu_top decoder_e O_reg_wen", false,-1);
        tracep->declBit(c+251,"cpu_top decoder_e O_mem_wen", false,-1);
        tracep->declBus(c+250,"cpu_top decoder_e O_funct3", false,-1, 2,0);
        tracep->declBus(c+17,"cpu_top decoder_e O_dnpc_sel", false,-1, 2,0);
        tracep->declBus(c+18,"cpu_top decoder_e O_regin_sel", false,-1, 2,0);
        tracep->declBus(c+19,"cpu_top decoder_e O_opnum1_sel", false,-1, 2,0);
        tracep->declBus(c+20,"cpu_top decoder_e O_opnum2_sel", false,-1, 1,0);
        tracep->declBus(c+21,"cpu_top decoder_e O_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+252,"cpu_top decoder_e funct7", false,-1, 6,0);
        tracep->declBus(c+253,"cpu_top decoder_e opcode", false,-1, 6,0);
        tracep->declBus(c+248,"cpu_top decoder_e rs2", false,-1, 4,0);
        tracep->declBus(c+247,"cpu_top decoder_e rs1", false,-1, 4,0);
        tracep->declBus(c+249,"cpu_top decoder_e rd", false,-1, 4,0);
        tracep->declBus(c+250,"cpu_top decoder_e funct3", false,-1, 2,0);
        tracep->declBus(c+254,"cpu_top decoder_e immI", false,-1, 11,0);
        tracep->declBus(c+79,"cpu_top decoder_e immS", false,-1, 11,0);
        tracep->declBus(c+80,"cpu_top decoder_e immB", false,-1, 12,0);
        tracep->declBus(c+255,"cpu_top decoder_e immU", false,-1, 31,0);
        tracep->declBus(c+81,"cpu_top decoder_e immJ", false,-1, 20,0);
        tracep->declBit(c+82,"cpu_top decoder_e typeI", false,-1);
        tracep->declBit(c+251,"cpu_top decoder_e typeS", false,-1);
        tracep->declBit(c+83,"cpu_top decoder_e typeR", false,-1);
        tracep->declBit(c+256,"cpu_top decoder_e typeB", false,-1);
        tracep->declBit(c+84,"cpu_top decoder_e typeU", false,-1);
        tracep->declBit(c+257,"cpu_top decoder_e typeJ", false,-1);
        tracep->declBit(c+258,"cpu_top decoder_e LUI", false,-1);
        tracep->declBit(c+259,"cpu_top decoder_e AUIPC", false,-1);
        tracep->declBit(c+260,"cpu_top decoder_e ADDI", false,-1);
        tracep->declBit(c+257,"cpu_top decoder_e JAL", false,-1);
        tracep->declBit(c+85,"cpu_top decoder_e JALR", false,-1);
        tracep->declBit(c+261,"cpu_top decoder_e SD", false,-1);
        tracep->declBit(c+262,"cpu_top decoder_e BEQ", false,-1);
        tracep->declBit(c+263,"cpu_top decoder_e BNE", false,-1);
        tracep->declBit(c+264,"cpu_top decoder_e BLT", false,-1);
        tracep->declBit(c+265,"cpu_top decoder_e BGE", false,-1);
        tracep->declBit(c+266,"cpu_top decoder_e BLTU", false,-1);
        tracep->declBit(c+267,"cpu_top decoder_e BGEU", false,-1);
        tracep->declBit(c+268,"cpu_top decoder_e regin_from_mem", false,-1);
        tracep->declBus(c+277,"cpu_top decoder_e SNPC", false,-1, 2,0);
        tracep->declBus(c+278,"cpu_top decoder_e DNPC", false,-1, 2,0);
        tracep->declBus(c+279,"cpu_top decoder_e JALR_DNPC", false,-1, 2,0);
        tracep->declBit(c+86,"cpu_top decoder_e typeB_jr", false,-1);
        tracep->declBit(c+87,"cpu_top decoder_e eq", false,-1);
        tracep->declBit(c+88,"cpu_top decoder_e neq", false,-1);
        tracep->declBit(c+89,"cpu_top decoder_e lt", false,-1);
        tracep->declBit(c+90,"cpu_top decoder_e ge", false,-1);
        tracep->declBit(c+91,"cpu_top decoder_e ltu", false,-1);
        tracep->declBit(c+92,"cpu_top decoder_e geu", false,-1);
        tracep->declBus(c+280,"cpu_top decoder_e OP_ADD", false,-1, 14,0);
        tracep->declBus(c+281,"cpu_top decoder_e OP_SUB", false,-1, 14,0);
        tracep->declBus(c+282,"cpu_top decoder_e OP_SLT", false,-1, 14,0);
        tracep->declBus(c+283,"cpu_top decoder_e OP_SLTU", false,-1, 14,0);
        tracep->declBus(c+284,"cpu_top decoder_e OP_XOR", false,-1, 14,0);
        tracep->declBus(c+285,"cpu_top decoder_e OP_OR", false,-1, 14,0);
        tracep->declBus(c+286,"cpu_top decoder_e OP_AND", false,-1, 14,0);
        tracep->declBus(c+287,"cpu_top decoder_e OP_SLL", false,-1, 14,0);
        tracep->declBus(c+288,"cpu_top decoder_e OP_SRL", false,-1, 14,0);
        tracep->declBus(c+289,"cpu_top decoder_e OP_SRA", false,-1, 14,0);
        tracep->declBus(c+290,"cpu_top decoder_e OP_MUL", false,-1, 14,0);
        tracep->declBus(c+291,"cpu_top decoder_e OP_DIV", false,-1, 14,0);
        tracep->declBus(c+292,"cpu_top decoder_e OP_DIVU", false,-1, 14,0);
        tracep->declBus(c+293,"cpu_top decoder_e OP_REM", false,-1, 14,0);
        tracep->declBus(c+294,"cpu_top decoder_e OP_REMU", false,-1, 14,0);
        tracep->declBit(c+93,"cpu_top decoder_e add_flag", false,-1);
        tracep->declBus(c+277,"cpu_top decoder_e OP1_RS1", false,-1, 2,0);
        tracep->declBus(c+278,"cpu_top decoder_e OP1_PC", false,-1, 2,0);
        tracep->declBus(c+279,"cpu_top decoder_e OP1_ZERO", false,-1, 2,0);
        tracep->declBit(c+269,"cpu_top decoder_e rs1_flag", false,-1);
        tracep->declBit(c+270,"cpu_top decoder_e pc_flag", false,-1);
        tracep->declBit(c+258,"cpu_top decoder_e zero_flag", false,-1);
        tracep->declBus(c+295,"cpu_top decoder_e OP2_RS2", false,-1, 1,0);
        tracep->declBus(c+296,"cpu_top decoder_e OP2_IMM", false,-1, 1,0);
        tracep->declBit(c+83,"cpu_top decoder_e rs2_flag", false,-1);
        tracep->declBit(c+271,"cpu_top decoder_e imm_flag", false,-1);
        tracep->declBus(c+272,"cpu_top alu_op1_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+273,"cpu_top alu_op1_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+94,"cpu_top alu_op1_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+19,"cpu_top alu_op1_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+9,"cpu_top alu_op1_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+100+i*2,"cpu_top alu_op1_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+274,"cpu_top alu_op1_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+272,"cpu_top alu_op2_64bit_2sel N", false,-1, 31,0);
        tracep->declBus(c+297,"cpu_top alu_op2_64bit_2sel M", false,-1, 31,0);
        tracep->declArray(c+106,"cpu_top alu_op2_64bit_2sel I_sel_data", false,-1, 127,0);
        tracep->declBus(c+20,"cpu_top alu_op2_64bit_2sel I_sel", false,-1, 1,0);
        tracep->declQuad(c+11,"cpu_top alu_op2_64bit_2sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+110+i*2,"cpu_top alu_op2_64bit_2sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+298,"cpu_top alu_op2_64bit_2sel unnamedblk1 i", false,-1, 31,0);
        tracep->declQuad(c+9,"cpu_top alu_e I_op1", false,-1, 63,0);
        tracep->declQuad(c+11,"cpu_top alu_e I_op2", false,-1, 63,0);
        tracep->declBus(c+21,"cpu_top alu_e I_alu_op_sel", false,-1, 14,0);
        tracep->declQuad(c+15,"cpu_top alu_e O_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+13,"cpu_top alu_e O_result", false,-1, 63,0);
        tracep->declBit(c+93,"cpu_top alu_e op_add", false,-1);
        tracep->declBit(c+114,"cpu_top alu_e op_sub", false,-1);
        tracep->declBit(c+115,"cpu_top alu_e op_slt", false,-1);
        tracep->declBit(c+116,"cpu_top alu_e op_sltu", false,-1);
        tracep->declBit(c+117,"cpu_top alu_e op_xor", false,-1);
        tracep->declBit(c+118,"cpu_top alu_e op_or", false,-1);
        tracep->declBit(c+119,"cpu_top alu_e op_and", false,-1);
        tracep->declBit(c+120,"cpu_top alu_e op_sll", false,-1);
        tracep->declBit(c+121,"cpu_top alu_e op_srl", false,-1);
        tracep->declBit(c+122,"cpu_top alu_e op_sra", false,-1);
        tracep->declBit(c+123,"cpu_top alu_e op_mul", false,-1);
        tracep->declBit(c+124,"cpu_top alu_e op_div", false,-1);
        tracep->declBit(c+125,"cpu_top alu_e op_divu", false,-1);
        tracep->declBit(c+126,"cpu_top alu_e op_rem", false,-1);
        tracep->declBit(c+127,"cpu_top alu_e op_remu", false,-1);
        tracep->declQuad(c+15,"cpu_top alu_e add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+128,"cpu_top alu_e slt_result", false,-1, 63,0);
        tracep->declQuad(c+130,"cpu_top alu_e sltu_result", false,-1, 63,0);
        tracep->declQuad(c+132,"cpu_top alu_e xor_result", false,-1, 63,0);
        tracep->declQuad(c+134,"cpu_top alu_e or_result", false,-1, 63,0);
        tracep->declQuad(c+136,"cpu_top alu_e and_result", false,-1, 63,0);
        tracep->declQuad(c+138,"cpu_top alu_e sll_result", false,-1, 63,0);
        tracep->declQuad(c+140,"cpu_top alu_e srl_result", false,-1, 63,0);
        tracep->declQuad(c+142,"cpu_top alu_e sra_result", false,-1, 63,0);
        tracep->declQuad(c+144,"cpu_top alu_e mul_result", false,-1, 63,0);
        tracep->declQuad(c+146,"cpu_top alu_e div_result", false,-1, 63,0);
        tracep->declQuad(c+148,"cpu_top alu_e divu_result", false,-1, 63,0);
        tracep->declQuad(c+150,"cpu_top alu_e rem_result", false,-1, 63,0);
        tracep->declQuad(c+152,"cpu_top alu_e remu_result", false,-1, 63,0);
        tracep->declQuad(c+9,"cpu_top alu_e adder1", false,-1, 63,0);
        tracep->declQuad(c+154,"cpu_top alu_e adder2", false,-1, 63,0);
        tracep->declQuad(c+15,"cpu_top alu_e result", false,-1, 63,0);
        tracep->declBit(c+156,"cpu_top alu_e cout", false,-1);
        tracep->declQuad(c+157,"cpu_top alu_e reverse_op1", false,-1, 63,0);
        tracep->declQuad(c+159,"cpu_top alu_e shift_op", false,-1, 63,0);
        tracep->declBus(c+161,"cpu_top alu_e shamt", false,-1, 5,0);
        tracep->declQuad(c+162,"cpu_top alu_e sra_mask", false,-1, 63,0);
        tracep->declQuad(c+140,"cpu_top alu_e shift_result", false,-1, 63,0);
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
    VlWide<3>/*95:0*/ __Vtemp40;
    VlWide<3>/*95:0*/ __Vtemp41;
    VlWide<3>/*95:0*/ __Vtemp42;
    VlWide<3>/*95:0*/ __Vtemp45;
    VlWide<3>/*95:0*/ __Vtemp46;
    VlWide<3>/*95:0*/ __Vtemp47;
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
        tracep->fullQData(oldp+15,(vlSelf->cpu_top__DOT__alu_e__DOT__result),64);
        tracep->fullCData(oldp+17,(vlSelf->cpu_top__DOT__dnpc_sel),3);
        tracep->fullCData(oldp+18,(vlSelf->cpu_top__DOT__regin_sel),3);
        tracep->fullCData(oldp+19,(vlSelf->cpu_top__DOT__opnum1_sel),3);
        tracep->fullCData(oldp+20,(vlSelf->cpu_top__DOT__opnum2_sel),2);
        tracep->fullSData(oldp+21,((1U & (- (IData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__add_flag))))),15);
        tracep->fullBit(oldp+22,(vlSelf->cpu_top__DOT__reg_wen));
        tracep->fullWData(oldp+23,(vlSelf->cpu_top__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+29,(vlSelf->cpu_top__DOT__nextpc_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+31,(vlSelf->cpu_top__DOT__nextpc_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+33,(vlSelf->cpu_top__DOT__nextpc_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullWData(oldp+35,(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+41,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+43,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+45,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullBit(oldp+47,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0]));
        tracep->fullBit(oldp+48,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[1]));
        tracep->fullBit(oldp+49,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[2]));
        tracep->fullBit(oldp+50,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[3]));
        tracep->fullBit(oldp+51,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[4]));
        tracep->fullBit(oldp+52,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[5]));
        tracep->fullBit(oldp+53,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[6]));
        tracep->fullBit(oldp+54,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[7]));
        tracep->fullBit(oldp+55,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[8]));
        tracep->fullBit(oldp+56,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[9]));
        tracep->fullBit(oldp+57,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[10]));
        tracep->fullBit(oldp+58,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[11]));
        tracep->fullBit(oldp+59,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[12]));
        tracep->fullBit(oldp+60,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[13]));
        tracep->fullBit(oldp+61,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[14]));
        tracep->fullBit(oldp+62,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[15]));
        tracep->fullBit(oldp+63,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[16]));
        tracep->fullBit(oldp+64,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[17]));
        tracep->fullBit(oldp+65,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[18]));
        tracep->fullBit(oldp+66,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[19]));
        tracep->fullBit(oldp+67,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[20]));
        tracep->fullBit(oldp+68,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[21]));
        tracep->fullBit(oldp+69,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[22]));
        tracep->fullBit(oldp+70,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[23]));
        tracep->fullBit(oldp+71,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[24]));
        tracep->fullBit(oldp+72,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[25]));
        tracep->fullBit(oldp+73,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[26]));
        tracep->fullBit(oldp+74,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[27]));
        tracep->fullBit(oldp+75,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[28]));
        tracep->fullBit(oldp+76,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[29]));
        tracep->fullBit(oldp+77,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[30]));
        tracep->fullBit(oldp+78,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[31]));
        tracep->fullSData(oldp+79,(vlSelf->cpu_top__DOT__decoder_e__DOT__immS),12);
        tracep->fullSData(oldp+80,(vlSelf->cpu_top__DOT__decoder_e__DOT__immB),13);
        tracep->fullIData(oldp+81,(vlSelf->cpu_top__DOT__decoder_e__DOT__immJ),21);
        tracep->fullBit(oldp+82,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI));
        tracep->fullBit(oldp+83,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR));
        tracep->fullBit(oldp+84,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU));
        tracep->fullBit(oldp+85,(vlSelf->cpu_top__DOT__decoder_e__DOT__JALR));
        tracep->fullBit(oldp+86,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeB_jr));
        tracep->fullBit(oldp+87,(vlSelf->cpu_top__DOT__decoder_e__DOT__eq));
        tracep->fullBit(oldp+88,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__eq)))));
        tracep->fullBit(oldp+89,(vlSelf->cpu_top__DOT__decoder_e__DOT__lt));
        tracep->fullBit(oldp+90,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__lt)))));
        tracep->fullBit(oldp+91,(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu));
        tracep->fullBit(oldp+92,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu)))));
        tracep->fullBit(oldp+93,(vlSelf->cpu_top__DOT__decoder_e__DOT__add_flag));
        tracep->fullWData(oldp+94,(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+100,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+102,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+104,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullWData(oldp+106,(vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data),128);
        tracep->fullQData(oldp+110,(vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+112,(vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[1]),64);
        tracep->fullBit(oldp+114,(0U));
        tracep->fullBit(oldp+115,(0U));
        tracep->fullBit(oldp+116,(0U));
        tracep->fullBit(oldp+117,(0U));
        tracep->fullBit(oldp+118,(0U));
        tracep->fullBit(oldp+119,(0U));
        tracep->fullBit(oldp+120,(0U));
        tracep->fullBit(oldp+121,(0U));
        tracep->fullBit(oldp+122,(0U));
        tracep->fullBit(oldp+123,(0U));
        tracep->fullBit(oldp+124,(0U));
        tracep->fullBit(oldp+125,(0U));
        tracep->fullBit(oldp+126,(0U));
        tracep->fullBit(oldp+127,(0U));
        tracep->fullQData(oldp+128,(vlSelf->cpu_top__DOT__alu_e__DOT__slt_result),64);
        VL_EXTEND_WQ(65,64, __Vtemp40, vlSelf->cpu_top__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp41, vlSelf->cpu_top__DOT__alu_e__DOT__adder2);
        VL_ADD_W(3, __Vtemp42, __Vtemp40, __Vtemp41);
        tracep->fullQData(oldp+130,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp42[2U])))))),64);
        tracep->fullQData(oldp+132,((vlSelf->cpu_top__DOT__alu_op1 
                                     ^ vlSelf->cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+134,((vlSelf->cpu_top__DOT__alu_op1 
                                     | vlSelf->cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+136,((vlSelf->cpu_top__DOT__alu_op1 
                                     & vlSelf->cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+138,(vlSelf->cpu_top__DOT__alu_e__DOT__sll_result),64);
        tracep->fullQData(oldp+140,(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result),64);
        tracep->fullQData(oldp+142,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->cpu_top__DOT__alu_e__DOT__shift_op 
                                                                     >> 0x3fU)))))) 
                                      & (~ (0xffffffffffffffffULL 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->cpu_top__DOT__alu_op2))))) 
                                     | vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)),64);
        tracep->fullQData(oldp+144,(VL_MULS_QQQ(64,64,64, vlSelf->cpu_top__DOT__alu_op1, vlSelf->cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+146,(VL_DIVS_QQQ(64, vlSelf->cpu_top__DOT__alu_op1, vlSelf->cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+148,(VL_DIV_QQQ(64, vlSelf->cpu_top__DOT__alu_op1, vlSelf->cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+150,(VL_MODDIVS_QQQ(64, vlSelf->cpu_top__DOT__alu_op1, vlSelf->cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+152,(VL_MODDIV_QQQ(64, vlSelf->cpu_top__DOT__alu_op1, vlSelf->cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+154,(vlSelf->cpu_top__DOT__alu_e__DOT__adder2),64);
        VL_EXTEND_WQ(65,64, __Vtemp45, vlSelf->cpu_top__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp46, vlSelf->cpu_top__DOT__alu_e__DOT__adder2);
        VL_ADD_W(3, __Vtemp47, __Vtemp45, __Vtemp46);
        tracep->fullBit(oldp+156,((1U & __Vtemp47[2U])));
        tracep->fullQData(oldp+157,(vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1),64);
        tracep->fullQData(oldp+159,(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op),64);
        tracep->fullCData(oldp+161,((0x3fU & (IData)(vlSelf->cpu_top__DOT__alu_op2))),6);
        tracep->fullQData(oldp+162,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->cpu_top__DOT__alu_op2))))),64);
        tracep->fullQData(oldp+164,(vlSelf->cpu_top__DOT__current_pc),64);
        tracep->fullQData(oldp+166,((4ULL + vlSelf->cpu_top__DOT__current_pc)),64);
        tracep->fullQData(oldp+168,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0]),64);
        tracep->fullQData(oldp+170,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[1]),64);
        tracep->fullQData(oldp+172,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[2]),64);
        tracep->fullQData(oldp+174,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[3]),64);
        tracep->fullQData(oldp+176,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[4]),64);
        tracep->fullQData(oldp+178,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[5]),64);
        tracep->fullQData(oldp+180,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[6]),64);
        tracep->fullQData(oldp+182,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[7]),64);
        tracep->fullQData(oldp+184,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[8]),64);
        tracep->fullQData(oldp+186,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[9]),64);
        tracep->fullQData(oldp+188,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[10]),64);
        tracep->fullQData(oldp+190,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[11]),64);
        tracep->fullQData(oldp+192,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[12]),64);
        tracep->fullQData(oldp+194,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[13]),64);
        tracep->fullQData(oldp+196,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[14]),64);
        tracep->fullQData(oldp+198,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[15]),64);
        tracep->fullQData(oldp+200,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[16]),64);
        tracep->fullQData(oldp+202,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[17]),64);
        tracep->fullQData(oldp+204,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[18]),64);
        tracep->fullQData(oldp+206,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[19]),64);
        tracep->fullQData(oldp+208,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[20]),64);
        tracep->fullQData(oldp+210,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[21]),64);
        tracep->fullQData(oldp+212,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[22]),64);
        tracep->fullQData(oldp+214,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[23]),64);
        tracep->fullQData(oldp+216,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[24]),64);
        tracep->fullQData(oldp+218,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[25]),64);
        tracep->fullQData(oldp+220,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[26]),64);
        tracep->fullQData(oldp+222,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[27]),64);
        tracep->fullQData(oldp+224,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[28]),64);
        tracep->fullQData(oldp+226,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[29]),64);
        tracep->fullQData(oldp+228,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[30]),64);
        tracep->fullQData(oldp+230,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[31]),64);
        tracep->fullBit(oldp+232,(vlSelf->I_sys_clk));
        tracep->fullBit(oldp+233,(vlSelf->I_rst));
        tracep->fullIData(oldp+234,(vlSelf->I_inst),32);
        tracep->fullQData(oldp+235,(vlSelf->O_pc),64);
        tracep->fullQData(oldp+237,(vlSelf->I_mem_rd_data),64);
        tracep->fullBit(oldp+239,(vlSelf->O_mem_rd_en));
        tracep->fullQData(oldp+240,(vlSelf->O_mem_wr_data),64);
        tracep->fullQData(oldp+242,(vlSelf->O_mem_wr_addr),64);
        tracep->fullBit(oldp+244,(vlSelf->O_mem_wen));
        tracep->fullQData(oldp+245,(((((((- (QData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI))) 
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
        tracep->fullCData(oldp+247,((0x1fU & (vlSelf->I_inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+248,((0x1fU & (vlSelf->I_inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+249,((0x1fU & (vlSelf->I_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+250,((7U & (vlSelf->I_inst 
                                           >> 0xcU))),3);
        tracep->fullBit(oldp+251,((0x23U == (0x7fU 
                                             & vlSelf->I_inst))));
        tracep->fullCData(oldp+252,((vlSelf->I_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+253,((0x7fU & vlSelf->I_inst)),7);
        tracep->fullSData(oldp+254,((vlSelf->I_inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+255,((0xfffff000U & vlSelf->I_inst)),32);
        tracep->fullBit(oldp+256,((0x63U == (0x7fU 
                                             & vlSelf->I_inst))));
        tracep->fullBit(oldp+257,((0x6fU == (0x7fU 
                                             & vlSelf->I_inst))));
        tracep->fullBit(oldp+258,((0x37U == (0x7fU 
                                             & vlSelf->I_inst))));
        tracep->fullBit(oldp+259,((0x17U == (0x7fU 
                                             & vlSelf->I_inst))));
        tracep->fullBit(oldp+260,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->I_inst)))));
        tracep->fullBit(oldp+261,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)))));
        tracep->fullBit(oldp+262,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->I_inst)))));
        tracep->fullBit(oldp+263,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)))));
        tracep->fullBit(oldp+264,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)))));
        tracep->fullBit(oldp+265,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)))));
        tracep->fullBit(oldp+266,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)))));
        tracep->fullBit(oldp+267,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->I_inst)))));
        tracep->fullBit(oldp+268,((3U == (0x7fU & vlSelf->I_inst))));
        tracep->fullBit(oldp+269,((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR) 
                                    | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI)) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->I_inst)))));
        tracep->fullBit(oldp+270,((((0x63U == (0x7fU 
                                               & vlSelf->I_inst)) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->I_inst))) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->I_inst)))));
        tracep->fullBit(oldp+271,((((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->I_inst))) 
                                     | (0x63U == (0x7fU 
                                                  & vlSelf->I_inst))) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->I_inst))) 
                                   | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU))));
        tracep->fullIData(oldp+272,(0x40U),32);
        tracep->fullIData(oldp+273,(3U),32);
        tracep->fullIData(oldp+274,(3U),32);
        tracep->fullQData(oldp+275,(0x80000000ULL),64);
        tracep->fullCData(oldp+277,(1U),3);
        tracep->fullCData(oldp+278,(2U),3);
        tracep->fullCData(oldp+279,(4U),3);
        tracep->fullSData(oldp+280,(1U),15);
        tracep->fullSData(oldp+281,(2U),15);
        tracep->fullSData(oldp+282,(4U),15);
        tracep->fullSData(oldp+283,(8U),15);
        tracep->fullSData(oldp+284,(0x10U),15);
        tracep->fullSData(oldp+285,(0x20U),15);
        tracep->fullSData(oldp+286,(0x40U),15);
        tracep->fullSData(oldp+287,(0x80U),15);
        tracep->fullSData(oldp+288,(0x100U),15);
        tracep->fullSData(oldp+289,(0x200U),15);
        tracep->fullSData(oldp+290,(0x400U),15);
        tracep->fullSData(oldp+291,(0x800U),15);
        tracep->fullSData(oldp+292,(0x1000U),15);
        tracep->fullSData(oldp+293,(0x2000U),15);
        tracep->fullSData(oldp+294,(0x4000U),15);
        tracep->fullCData(oldp+295,(1U),2);
        tracep->fullCData(oldp+296,(2U),2);
        tracep->fullIData(oldp+297,(2U),32);
        tracep->fullIData(oldp+298,(2U),32);
    }
}
