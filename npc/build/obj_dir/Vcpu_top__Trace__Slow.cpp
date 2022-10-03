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
        tracep->declBit(c+388,"I_sys_clk", false,-1);
        tracep->declBit(c+389,"I_rst", false,-1);
        tracep->declBus(c+390,"I_inst", false,-1, 31,0);
        tracep->declBit(c+391,"I_inst_valid", false,-1);
        tracep->declQuad(c+392,"O_pc", false,-1, 63,0);
        tracep->declBit(c+394,"O_pc_valid", false,-1);
        tracep->declQuad(c+395,"O_mem_addr", false,-1, 63,0);
        tracep->declBit(c+397,"O_mem_rd_en", false,-1);
        tracep->declBit(c+398,"O_mem_wen", false,-1);
        tracep->declQuad(c+399,"I_mem_rd_data", false,-1, 63,0);
        tracep->declQuad(c+401,"O_mem_wr_data", false,-1, 63,0);
        tracep->declBus(c+403,"O_mem_wr_strb", false,-1, 7,0);
        tracep->declBit(c+388,"cpu_top I_sys_clk", false,-1);
        tracep->declBit(c+389,"cpu_top I_rst", false,-1);
        tracep->declBus(c+390,"cpu_top I_inst", false,-1, 31,0);
        tracep->declBit(c+391,"cpu_top I_inst_valid", false,-1);
        tracep->declQuad(c+392,"cpu_top O_pc", false,-1, 63,0);
        tracep->declBit(c+394,"cpu_top O_pc_valid", false,-1);
        tracep->declQuad(c+395,"cpu_top O_mem_addr", false,-1, 63,0);
        tracep->declBit(c+397,"cpu_top O_mem_rd_en", false,-1);
        tracep->declBit(c+398,"cpu_top O_mem_wen", false,-1);
        tracep->declQuad(c+399,"cpu_top I_mem_rd_data", false,-1, 63,0);
        tracep->declQuad(c+401,"cpu_top O_mem_wr_data", false,-1, 63,0);
        tracep->declBus(c+403,"cpu_top O_mem_wr_strb", false,-1, 7,0);
        tracep->declQuad(c+1,"cpu_top current_pc", false,-1, 63,0);
        tracep->declQuad(c+3,"cpu_top dnpc", false,-1, 63,0);
        tracep->declQuad(c+5,"cpu_top snpc", false,-1, 63,0);
        tracep->declQuad(c+7,"cpu_top imm", false,-1, 63,0);
        tracep->declQuad(c+370,"cpu_top wr_data", false,-1, 63,0);
        tracep->declQuad(c+9,"cpu_top rs1_data", false,-1, 63,0);
        tracep->declQuad(c+11,"cpu_top rs2_data", false,-1, 63,0);
        tracep->declQuad(c+13,"cpu_top alu_op1", false,-1, 63,0);
        tracep->declQuad(c+15,"cpu_top alu_op2", false,-1, 63,0);
        tracep->declQuad(c+17,"cpu_top alu_out", false,-1, 63,0);
        tracep->declQuad(c+372,"cpu_top mem_in", false,-1, 63,0);
        tracep->declQuad(c+11,"cpu_top mem_out", false,-1, 63,0);
        tracep->declQuad(c+19,"cpu_top mem_addr", false,-1, 63,0);
        tracep->declBus(c+21,"cpu_top rs1_addr", false,-1, 4,0);
        tracep->declBus(c+22,"cpu_top rs2_addr", false,-1, 4,0);
        tracep->declBus(c+23,"cpu_top rd_addr", false,-1, 4,0);
        tracep->declBus(c+24,"cpu_top dnpc_sel", false,-1, 3,0);
        tracep->declBus(c+25,"cpu_top regin_sel", false,-1, 2,0);
        tracep->declBus(c+26,"cpu_top opnum1_sel", false,-1, 2,0);
        tracep->declBus(c+27,"cpu_top opnum2_sel", false,-1, 1,0);
        tracep->declBus(c+28,"cpu_top alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+29,"cpu_top mem_wstrb", false,-1, 7,0);
        tracep->declBus(c+30,"cpu_top mem_rstrb", false,-1, 8,0);
        tracep->declBit(c+31,"cpu_top reg_wen", false,-1);
        tracep->declBit(c+32,"cpu_top mem_wen", false,-1);
        tracep->declBit(c+33,"cpu_top word_op_mask", false,-1);
        tracep->declBus(c+34,"cpu_top alu_op_sext", false,-1, 1,0);
        tracep->declQuad(c+35,"cpu_top pc_IF_ID", false,-1, 63,0);
        tracep->declBus(c+37,"cpu_top inst_IF_ID", false,-1, 31,0);
        tracep->declBit(c+38,"cpu_top IF_ID_valid", false,-1);
        tracep->declQuad(c+39,"cpu_top ID_EX_imm", false,-1, 63,0);
        tracep->declQuad(c+41,"cpu_top ID_EX_pc", false,-1, 63,0);
        tracep->declQuad(c+43,"cpu_top ID_EX_rs1", false,-1, 63,0);
        tracep->declQuad(c+45,"cpu_top ID_EX_rs2", false,-1, 63,0);
        tracep->declBus(c+47,"cpu_top ID_EX_rd_addr", false,-1, 4,0);
        tracep->declBus(c+48,"cpu_top ID_EX_wstrb", false,-1, 7,0);
        tracep->declBus(c+49,"cpu_top ID_EX_rstrb", false,-1, 8,0);
        tracep->declBus(c+405,"cpu_top ID_EX_dnpc_sel", false,-1, 2,0);
        tracep->declBus(c+50,"cpu_top ID_EX_regin_sel", false,-1, 2,0);
        tracep->declBus(c+51,"cpu_top ID_EX_op1_sel", false,-1, 2,0);
        tracep->declBus(c+52,"cpu_top ID_EX_op2_sel", false,-1, 1,0);
        tracep->declBus(c+53,"cpu_top ID_EX_alu_sext", false,-1, 1,0);
        tracep->declBus(c+54,"cpu_top ID_EX_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+55,"cpu_top ID_EX_word_op_mask", false,-1);
        tracep->declBit(c+56,"cpu_top ID_EX_valid", false,-1);
        tracep->declQuad(c+9,"cpu_top npc_e I_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+11,"cpu_top npc_e I_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+7,"cpu_top npc_e I_imm", false,-1, 63,0);
        tracep->declQuad(c+1,"cpu_top npc_e I_pc", false,-1, 63,0);
        tracep->declQuad(c+5,"cpu_top npc_e I_snpc", false,-1, 63,0);
        tracep->declBus(c+24,"cpu_top npc_e I_dnpc_sel", false,-1, 3,0);
        tracep->declQuad(c+3,"cpu_top npc_e O_dnpc", false,-1, 63,0);
        tracep->declQuad(c+57,"cpu_top npc_e dnpc_src1", false,-1, 63,0);
        tracep->declQuad(c+59,"cpu_top npc_e dnpc_src2", false,-1, 63,0);
        tracep->declQuad(c+61,"cpu_top npc_e dnpc_sum", false,-1, 63,0);
        tracep->declBus(c+406,"cpu_top npc_e nextpc_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+407,"cpu_top npc_e nextpc_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+63,"cpu_top npc_e nextpc_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+69,"cpu_top npc_e nextpc_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+3,"cpu_top npc_e nextpc_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+70+i*2,"cpu_top npc_e nextpc_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+408,"cpu_top npc_e nextpc_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+388,"cpu_top pc_e I_sys_clk", false,-1);
        tracep->declBit(c+389,"cpu_top pc_e I_rst", false,-1);
        tracep->declQuad(c+3,"cpu_top pc_e I_dnpc", false,-1, 63,0);
        tracep->declBit(c+391,"cpu_top pc_e I_dnpc_en", false,-1);
        tracep->declQuad(c+1,"cpu_top pc_e O_pc", false,-1, 63,0);
        tracep->declBit(c+394,"cpu_top pc_e O_pc_valid", false,-1);
        tracep->declQuad(c+409,"cpu_top pc_e PC_RESET", false,-1, 63,0);
        tracep->declBit(c+388,"cpu_top IF_ID_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+389,"cpu_top IF_ID_reg_e I_rst", false,-1);
        tracep->declQuad(c+3,"cpu_top IF_ID_reg_e I_pc", false,-1, 63,0);
        tracep->declBus(c+390,"cpu_top IF_ID_reg_e I_inst", false,-1, 31,0);
        tracep->declBit(c+391,"cpu_top IF_ID_reg_e I_IF_ID_valid", false,-1);
        tracep->declQuad(c+35,"cpu_top IF_ID_reg_e O_pc", false,-1, 63,0);
        tracep->declBus(c+37,"cpu_top IF_ID_reg_e O_inst", false,-1, 31,0);
        tracep->declBit(c+38,"cpu_top IF_ID_reg_e O_IF_ID_valid", false,-1);
        tracep->declQuad(c+399,"cpu_top mem_ld_e I_data_in", false,-1, 63,0);
        tracep->declBus(c+30,"cpu_top mem_ld_e I_rd_strb", false,-1, 8,0);
        tracep->declBus(c+76,"cpu_top mem_ld_e I_rd_shamt", false,-1, 2,0);
        tracep->declQuad(c+372,"cpu_top mem_ld_e O_load_data", false,-1, 63,0);
        tracep->declBit(c+77,"cpu_top mem_ld_e sext_flag", false,-1);
        tracep->declBit(c+404,"cpu_top mem_ld_e sext_bit", false,-1);
        tracep->declBus(c+78,"cpu_top mem_ld_e sext_mask", false,-1, 7,0);
        tracep->declQuad(c+374,"cpu_top mem_ld_e ld_data", false,-1, 63,0);
        tracep->declQuad(c+11,"cpu_top mem_sd_e I_data_in", false,-1, 63,0);
        tracep->declBus(c+29,"cpu_top mem_sd_e I_wr_strb", false,-1, 7,0);
        tracep->declQuad(c+401,"cpu_top mem_sd_e O_sd_data", false,-1, 63,0);
        tracep->declBit(c+388,"cpu_top decoder_e I_sys_clk", false,-1);
        tracep->declBit(c+389,"cpu_top decoder_e I_rst", false,-1);
        tracep->declBus(c+37,"cpu_top decoder_e I_inst", false,-1, 31,0);
        tracep->declQuad(c+7,"cpu_top decoder_e O_imm", false,-1, 63,0);
        tracep->declQuad(c+9,"cpu_top decoder_e I_rs1_data", false,-1, 63,0);
        tracep->declBus(c+21,"cpu_top decoder_e O_rs1", false,-1, 4,0);
        tracep->declQuad(c+11,"cpu_top decoder_e I_rs2_data", false,-1, 63,0);
        tracep->declBus(c+22,"cpu_top decoder_e O_rs2", false,-1, 4,0);
        tracep->declBus(c+23,"cpu_top decoder_e O_rd", false,-1, 4,0);
        tracep->declBit(c+31,"cpu_top decoder_e O_reg_wen", false,-1);
        tracep->declBit(c+32,"cpu_top decoder_e O_mem_wen", false,-1);
        tracep->declBus(c+29,"cpu_top decoder_e O_mem_wstrb", false,-1, 7,0);
        tracep->declBus(c+30,"cpu_top decoder_e O_mem_rstrb", false,-1, 8,0);
        tracep->declBus(c+24,"cpu_top decoder_e O_dnpc_sel", false,-1, 3,0);
        tracep->declBus(c+25,"cpu_top decoder_e O_regin_sel", false,-1, 2,0);
        tracep->declBus(c+26,"cpu_top decoder_e O_opnum1_sel", false,-1, 2,0);
        tracep->declBus(c+27,"cpu_top decoder_e O_opnum2_sel", false,-1, 1,0);
        tracep->declBus(c+28,"cpu_top decoder_e O_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+34,"cpu_top decoder_e O_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+33,"cpu_top decoder_e O_word_op_mask", false,-1);
        tracep->declBus(c+79,"cpu_top decoder_e funct7", false,-1, 6,0);
        tracep->declBus(c+80,"cpu_top decoder_e opcode", false,-1, 6,0);
        tracep->declBus(c+22,"cpu_top decoder_e rs2", false,-1, 4,0);
        tracep->declBus(c+21,"cpu_top decoder_e rs1", false,-1, 4,0);
        tracep->declBus(c+23,"cpu_top decoder_e rd", false,-1, 4,0);
        tracep->declBus(c+81,"cpu_top decoder_e funct3", false,-1, 2,0);
        tracep->declBus(c+82,"cpu_top decoder_e immI", false,-1, 11,0);
        tracep->declBus(c+83,"cpu_top decoder_e immS", false,-1, 11,0);
        tracep->declBus(c+84,"cpu_top decoder_e immB", false,-1, 12,0);
        tracep->declBus(c+85,"cpu_top decoder_e immU", false,-1, 31,0);
        tracep->declBus(c+86,"cpu_top decoder_e immJ", false,-1, 20,0);
        tracep->declBit(c+87,"cpu_top decoder_e typeI", false,-1);
        tracep->declBit(c+32,"cpu_top decoder_e typeS", false,-1);
        tracep->declBit(c+88,"cpu_top decoder_e typeR", false,-1);
        tracep->declBit(c+89,"cpu_top decoder_e typeB", false,-1);
        tracep->declBit(c+90,"cpu_top decoder_e typeU", false,-1);
        tracep->declBit(c+91,"cpu_top decoder_e typeJ", false,-1);
        tracep->declBit(c+92,"cpu_top decoder_e LUI", false,-1);
        tracep->declBit(c+93,"cpu_top decoder_e AUIPC", false,-1);
        tracep->declBit(c+91,"cpu_top decoder_e JAL", false,-1);
        tracep->declBit(c+94,"cpu_top decoder_e JALR", false,-1);
        tracep->declBit(c+95,"cpu_top decoder_e LD", false,-1);
        tracep->declBit(c+96,"cpu_top decoder_e LW", false,-1);
        tracep->declBit(c+97,"cpu_top decoder_e LWU", false,-1);
        tracep->declBit(c+98,"cpu_top decoder_e LH", false,-1);
        tracep->declBit(c+99,"cpu_top decoder_e LHU", false,-1);
        tracep->declBit(c+100,"cpu_top decoder_e LB", false,-1);
        tracep->declBit(c+101,"cpu_top decoder_e LBU", false,-1);
        tracep->declBit(c+102,"cpu_top decoder_e ADDI", false,-1);
        tracep->declBit(c+103,"cpu_top decoder_e SLTI", false,-1);
        tracep->declBit(c+104,"cpu_top decoder_e SLTIU", false,-1);
        tracep->declBit(c+105,"cpu_top decoder_e XORI", false,-1);
        tracep->declBit(c+106,"cpu_top decoder_e ORI", false,-1);
        tracep->declBit(c+107,"cpu_top decoder_e ANDI", false,-1);
        tracep->declBit(c+108,"cpu_top decoder_e SLLI", false,-1);
        tracep->declBit(c+109,"cpu_top decoder_e SRLI", false,-1);
        tracep->declBit(c+110,"cpu_top decoder_e SRAI", false,-1);
        tracep->declBit(c+111,"cpu_top decoder_e ADDIW", false,-1);
        tracep->declBit(c+112,"cpu_top decoder_e SLLIW", false,-1);
        tracep->declBit(c+113,"cpu_top decoder_e SRLIW", false,-1);
        tracep->declBit(c+114,"cpu_top decoder_e SRAIW", false,-1);
        tracep->declBit(c+115,"cpu_top decoder_e ADD", false,-1);
        tracep->declBit(c+116,"cpu_top decoder_e SUB", false,-1);
        tracep->declBit(c+117,"cpu_top decoder_e SLL", false,-1);
        tracep->declBit(c+118,"cpu_top decoder_e SLT", false,-1);
        tracep->declBit(c+119,"cpu_top decoder_e SLTU", false,-1);
        tracep->declBit(c+120,"cpu_top decoder_e XOR", false,-1);
        tracep->declBit(c+121,"cpu_top decoder_e SRL", false,-1);
        tracep->declBit(c+122,"cpu_top decoder_e SRA", false,-1);
        tracep->declBit(c+123,"cpu_top decoder_e OR", false,-1);
        tracep->declBit(c+124,"cpu_top decoder_e AND", false,-1);
        tracep->declBit(c+125,"cpu_top decoder_e MUL", false,-1);
        tracep->declBit(c+126,"cpu_top decoder_e MULH", false,-1);
        tracep->declBit(c+127,"cpu_top decoder_e MULHSU", false,-1);
        tracep->declBit(c+128,"cpu_top decoder_e MULHU", false,-1);
        tracep->declBit(c+129,"cpu_top decoder_e DIV", false,-1);
        tracep->declBit(c+130,"cpu_top decoder_e DIVU", false,-1);
        tracep->declBit(c+131,"cpu_top decoder_e REM", false,-1);
        tracep->declBit(c+132,"cpu_top decoder_e REMU", false,-1);
        tracep->declBit(c+133,"cpu_top decoder_e ADDW", false,-1);
        tracep->declBit(c+134,"cpu_top decoder_e SUBW", false,-1);
        tracep->declBit(c+135,"cpu_top decoder_e SLLW", false,-1);
        tracep->declBit(c+136,"cpu_top decoder_e SRLW", false,-1);
        tracep->declBit(c+137,"cpu_top decoder_e SRAW", false,-1);
        tracep->declBit(c+138,"cpu_top decoder_e MULW", false,-1);
        tracep->declBit(c+139,"cpu_top decoder_e DIVW", false,-1);
        tracep->declBit(c+140,"cpu_top decoder_e DIVUW", false,-1);
        tracep->declBit(c+141,"cpu_top decoder_e REMW", false,-1);
        tracep->declBit(c+142,"cpu_top decoder_e REMUW", false,-1);
        tracep->declBit(c+143,"cpu_top decoder_e SD", false,-1);
        tracep->declBit(c+144,"cpu_top decoder_e SW", false,-1);
        tracep->declBit(c+145,"cpu_top decoder_e SH", false,-1);
        tracep->declBit(c+146,"cpu_top decoder_e SB", false,-1);
        tracep->declBit(c+147,"cpu_top decoder_e BEQ", false,-1);
        tracep->declBit(c+148,"cpu_top decoder_e BNE", false,-1);
        tracep->declBit(c+149,"cpu_top decoder_e BLT", false,-1);
        tracep->declBit(c+150,"cpu_top decoder_e BGE", false,-1);
        tracep->declBit(c+151,"cpu_top decoder_e BLTU", false,-1);
        tracep->declBit(c+152,"cpu_top decoder_e BGEU", false,-1);
        tracep->declBit(c+153,"cpu_top decoder_e ECALL", false,-1);
        tracep->declBit(c+154,"cpu_top decoder_e EBREAK", false,-1);
        tracep->declBit(c+155,"cpu_top decoder_e regin_from_mem", false,-1);
        tracep->declBus(c+411,"cpu_top decoder_e SNPC", false,-1, 2,0);
        tracep->declBus(c+412,"cpu_top decoder_e DNPC", false,-1, 2,0);
        tracep->declBus(c+413,"cpu_top decoder_e JALR_DNPC", false,-1, 2,0);
        tracep->declBit(c+156,"cpu_top decoder_e typeB_jr", false,-1);
        tracep->declBit(c+157,"cpu_top decoder_e eq", false,-1);
        tracep->declBit(c+158,"cpu_top decoder_e neq", false,-1);
        tracep->declBit(c+159,"cpu_top decoder_e lt", false,-1);
        tracep->declBit(c+160,"cpu_top decoder_e ge", false,-1);
        tracep->declBit(c+161,"cpu_top decoder_e ltu", false,-1);
        tracep->declBit(c+162,"cpu_top decoder_e geu", false,-1);
        tracep->declBus(c+414,"cpu_top decoder_e OP_ADD", false,-1, 14,0);
        tracep->declBus(c+415,"cpu_top decoder_e OP_SUB", false,-1, 14,0);
        tracep->declBus(c+416,"cpu_top decoder_e OP_SLT", false,-1, 14,0);
        tracep->declBus(c+417,"cpu_top decoder_e OP_SLTU", false,-1, 14,0);
        tracep->declBus(c+418,"cpu_top decoder_e OP_XOR", false,-1, 14,0);
        tracep->declBus(c+419,"cpu_top decoder_e OP_OR", false,-1, 14,0);
        tracep->declBus(c+420,"cpu_top decoder_e OP_AND", false,-1, 14,0);
        tracep->declBus(c+421,"cpu_top decoder_e OP_SLL", false,-1, 14,0);
        tracep->declBus(c+422,"cpu_top decoder_e OP_SRL", false,-1, 14,0);
        tracep->declBus(c+423,"cpu_top decoder_e OP_SRA", false,-1, 14,0);
        tracep->declBus(c+424,"cpu_top decoder_e OP_MUL", false,-1, 14,0);
        tracep->declBus(c+425,"cpu_top decoder_e OP_MULH", false,-1, 14,0);
        tracep->declBus(c+426,"cpu_top decoder_e OP_DIV", false,-1, 14,0);
        tracep->declBus(c+427,"cpu_top decoder_e OP_REM", false,-1, 14,0);
        tracep->declBit(c+163,"cpu_top decoder_e add_flag", false,-1);
        tracep->declBit(c+155,"cpu_top decoder_e ld_flag", false,-1);
        tracep->declBit(c+164,"cpu_top decoder_e sub_flag", false,-1);
        tracep->declBit(c+165,"cpu_top decoder_e slt_flag", false,-1);
        tracep->declBit(c+166,"cpu_top decoder_e sltu_flag", false,-1);
        tracep->declBit(c+167,"cpu_top decoder_e xor_flag", false,-1);
        tracep->declBit(c+168,"cpu_top decoder_e or_flag", false,-1);
        tracep->declBit(c+169,"cpu_top decoder_e and_flag", false,-1);
        tracep->declBit(c+170,"cpu_top decoder_e sll_flag", false,-1);
        tracep->declBit(c+171,"cpu_top decoder_e srl_flag", false,-1);
        tracep->declBit(c+172,"cpu_top decoder_e sra_flag", false,-1);
        tracep->declBit(c+173,"cpu_top decoder_e mul_flag", false,-1);
        tracep->declBit(c+174,"cpu_top decoder_e mulh_flag", false,-1);
        tracep->declBit(c+175,"cpu_top decoder_e div_flag", false,-1);
        tracep->declBit(c+176,"cpu_top decoder_e rem_flag", false,-1);
        tracep->declBus(c+411,"cpu_top decoder_e OP1_RS1", false,-1, 2,0);
        tracep->declBus(c+412,"cpu_top decoder_e OP1_PC", false,-1, 2,0);
        tracep->declBus(c+413,"cpu_top decoder_e OP1_ZERO", false,-1, 2,0);
        tracep->declBit(c+177,"cpu_top decoder_e rs1_flag", false,-1);
        tracep->declBit(c+178,"cpu_top decoder_e pc_flag", false,-1);
        tracep->declBit(c+92,"cpu_top decoder_e zero_flag", false,-1);
        tracep->declBus(c+428,"cpu_top decoder_e OP2_RS2", false,-1, 1,0);
        tracep->declBus(c+429,"cpu_top decoder_e OP2_IMM", false,-1, 1,0);
        tracep->declBit(c+88,"cpu_top decoder_e rs2_flag", false,-1);
        tracep->declBit(c+179,"cpu_top decoder_e imm_flag", false,-1);
        tracep->declBit(c+388,"cpu_top ID_EX_reg_e I_sys_clk", false,-1);
        tracep->declBit(c+389,"cpu_top ID_EX_reg_e I_rst", false,-1);
        tracep->declBit(c+38,"cpu_top ID_EX_reg_e I_ID_EX_valid", false,-1);
        tracep->declBit(c+56,"cpu_top ID_EX_reg_e O_ID_EX_valid", false,-1);
        tracep->declQuad(c+7,"cpu_top ID_EX_reg_e I_imm", false,-1, 63,0);
        tracep->declQuad(c+9,"cpu_top ID_EX_reg_e I_rs1", false,-1, 63,0);
        tracep->declQuad(c+11,"cpu_top ID_EX_reg_e I_rs2", false,-1, 63,0);
        tracep->declBus(c+23,"cpu_top ID_EX_reg_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+29,"cpu_top ID_EX_reg_e I_wstrb", false,-1, 7,0);
        tracep->declBus(c+30,"cpu_top ID_EX_reg_e I_rstrb", false,-1, 8,0);
        tracep->declBus(c+25,"cpu_top ID_EX_reg_e I_regin_sel", false,-1, 2,0);
        tracep->declBus(c+26,"cpu_top ID_EX_reg_e I_op1_sel", false,-1, 2,0);
        tracep->declBus(c+27,"cpu_top ID_EX_reg_e I_op2_sel", false,-1, 1,0);
        tracep->declBus(c+34,"cpu_top ID_EX_reg_e I_alu_sext", false,-1, 1,0);
        tracep->declBus(c+28,"cpu_top ID_EX_reg_e I_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+33,"cpu_top ID_EX_reg_e I_word_op_mask", false,-1);
        tracep->declQuad(c+39,"cpu_top ID_EX_reg_e O_imm", false,-1, 63,0);
        tracep->declQuad(c+43,"cpu_top ID_EX_reg_e O_rs1", false,-1, 63,0);
        tracep->declQuad(c+45,"cpu_top ID_EX_reg_e O_rs2", false,-1, 63,0);
        tracep->declBus(c+47,"cpu_top ID_EX_reg_e O_rd_addr", false,-1, 4,0);
        tracep->declBus(c+48,"cpu_top ID_EX_reg_e O_wstrb", false,-1, 7,0);
        tracep->declBus(c+49,"cpu_top ID_EX_reg_e O_rstrb", false,-1, 8,0);
        tracep->declBus(c+50,"cpu_top ID_EX_reg_e O_regin_sel", false,-1, 2,0);
        tracep->declBus(c+51,"cpu_top ID_EX_reg_e O_op1_sel", false,-1, 2,0);
        tracep->declBus(c+52,"cpu_top ID_EX_reg_e O_op2_sel", false,-1, 1,0);
        tracep->declBus(c+53,"cpu_top ID_EX_reg_e O_alu_sext", false,-1, 1,0);
        tracep->declBus(c+54,"cpu_top ID_EX_reg_e O_alu_op_sel", false,-1, 14,0);
        tracep->declBit(c+55,"cpu_top ID_EX_reg_e O_word_op_mask", false,-1);
        tracep->declQuad(c+35,"cpu_top ID_EX_reg_e I_pc", false,-1, 63,0);
        tracep->declQuad(c+41,"cpu_top ID_EX_reg_e O_pc", false,-1, 63,0);
        tracep->declBus(c+406,"cpu_top alu_op1_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+407,"cpu_top alu_op1_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+180,"cpu_top alu_op1_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+51,"cpu_top alu_op1_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+13,"cpu_top alu_op1_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+186+i*2,"cpu_top alu_op1_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+408,"cpu_top alu_op1_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+406,"cpu_top alu_op2_64bit_2sel N", false,-1, 31,0);
        tracep->declBus(c+430,"cpu_top alu_op2_64bit_2sel M", false,-1, 31,0);
        tracep->declArray(c+192,"cpu_top alu_op2_64bit_2sel I_sel_data", false,-1, 127,0);
        tracep->declBus(c+52,"cpu_top alu_op2_64bit_2sel I_sel", false,-1, 1,0);
        tracep->declQuad(c+15,"cpu_top alu_op2_64bit_2sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+196+i*2,"cpu_top alu_op2_64bit_2sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+431,"cpu_top alu_op2_64bit_2sel unnamedblk1 i", false,-1, 31,0);
        tracep->declQuad(c+13,"cpu_top alu_e I_op1", false,-1, 63,0);
        tracep->declQuad(c+15,"cpu_top alu_e I_op2", false,-1, 63,0);
        tracep->declBus(c+54,"cpu_top alu_e I_alu_op_sel", false,-1, 14,0);
        tracep->declBus(c+53,"cpu_top alu_e I_alu_op_sext", false,-1, 1,0);
        tracep->declBit(c+55,"cpu_top alu_e I_word_op_mask", false,-1);
        tracep->declQuad(c+19,"cpu_top alu_e O_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+17,"cpu_top alu_e O_result", false,-1, 63,0);
        tracep->declBit(c+200,"cpu_top alu_e op_add", false,-1);
        tracep->declBit(c+201,"cpu_top alu_e op_sub", false,-1);
        tracep->declBit(c+202,"cpu_top alu_e op_slt", false,-1);
        tracep->declBit(c+203,"cpu_top alu_e op_sltu", false,-1);
        tracep->declBit(c+204,"cpu_top alu_e op_xor", false,-1);
        tracep->declBit(c+205,"cpu_top alu_e op_or", false,-1);
        tracep->declBit(c+206,"cpu_top alu_e op_and", false,-1);
        tracep->declBit(c+207,"cpu_top alu_e op_sll", false,-1);
        tracep->declBit(c+208,"cpu_top alu_e op_srl", false,-1);
        tracep->declBit(c+209,"cpu_top alu_e op_sra", false,-1);
        tracep->declBit(c+210,"cpu_top alu_e op_mul", false,-1);
        tracep->declBit(c+211,"cpu_top alu_e op_mulh", false,-1);
        tracep->declBit(c+212,"cpu_top alu_e op_div", false,-1);
        tracep->declBit(c+213,"cpu_top alu_e op_rem", false,-1);
        tracep->declQuad(c+19,"cpu_top alu_e add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+214,"cpu_top alu_e slt_result", false,-1, 63,0);
        tracep->declQuad(c+216,"cpu_top alu_e sltu_result", false,-1, 63,0);
        tracep->declQuad(c+218,"cpu_top alu_e xor_result", false,-1, 63,0);
        tracep->declQuad(c+220,"cpu_top alu_e or_result", false,-1, 63,0);
        tracep->declQuad(c+222,"cpu_top alu_e and_result", false,-1, 63,0);
        tracep->declQuad(c+224,"cpu_top alu_e sll_result", false,-1, 63,0);
        tracep->declQuad(c+226,"cpu_top alu_e srl_result", false,-1, 63,0);
        tracep->declQuad(c+228,"cpu_top alu_e sra_result", false,-1, 63,0);
        tracep->declQuad(c+230,"cpu_top alu_e mul_result", false,-1, 63,0);
        tracep->declQuad(c+232,"cpu_top alu_e mulh_result", false,-1, 63,0);
        tracep->declQuad(c+234,"cpu_top alu_e div_result", false,-1, 63,0);
        tracep->declQuad(c+236,"cpu_top alu_e rem_result", false,-1, 63,0);
        tracep->declArray(c+238,"cpu_top alu_e op1_sext", false,-1, 64,0);
        tracep->declArray(c+241,"cpu_top alu_e op2_sext", false,-1, 64,0);
        tracep->declBit(c+244,"cpu_top alu_e sign_bit1", false,-1);
        tracep->declBit(c+245,"cpu_top alu_e sign_bit2", false,-1);
        tracep->declBit(c+246,"cpu_top alu_e sext1", false,-1);
        tracep->declBit(c+247,"cpu_top alu_e sext2", false,-1);
        tracep->declBit(c+248,"cpu_top alu_e div_sink", false,-1);
        tracep->declBit(c+249,"cpu_top alu_e rem_sink", false,-1);
        tracep->declQuad(c+13,"cpu_top alu_e adder1", false,-1, 63,0);
        tracep->declQuad(c+250,"cpu_top alu_e adder2", false,-1, 63,0);
        tracep->declQuad(c+19,"cpu_top alu_e result", false,-1, 63,0);
        tracep->declQuad(c+252,"cpu_top alu_e cin", false,-1, 63,0);
        tracep->declBit(c+254,"cpu_top alu_e cout", false,-1);
        tracep->declQuad(c+255,"cpu_top alu_e reverse_op1", false,-1, 63,0);
        tracep->declBit(c+244,"cpu_top alu_e shift_sign", false,-1);
        tracep->declQuad(c+257,"cpu_top alu_e shift_op", false,-1, 63,0);
        tracep->declBus(c+259,"cpu_top alu_e shamt", false,-1, 5,0);
        tracep->declQuad(c+260,"cpu_top alu_e sra_mask", false,-1, 63,0);
        tracep->declQuad(c+226,"cpu_top alu_e shift_result", false,-1, 63,0);
        tracep->declBus(c+262,"cpu_top alu_e shift_opW", false,-1, 31,0);
        tracep->declQuad(c+263,"cpu_top alu_e srl_op", false,-1, 63,0);
        tracep->declQuad(c+265,"cpu_top alu_e sllw_result", false,-1, 63,0);
        tracep->declQuad(c+267,"cpu_top alu_e slldw_result", false,-1, 63,0);
        tracep->declQuad(c+269,"cpu_top alu_e dword_result", false,-1, 63,0);
        tracep->declQuad(c+271,"cpu_top alu_e word_sext_result", false,-1, 63,0);
        tracep->declBit(c+273,"cpu_top alu_e word_sext", false,-1);
        tracep->declBus(c+406,"cpu_top regin_64bit_3sel N", false,-1, 31,0);
        tracep->declBus(c+407,"cpu_top regin_64bit_3sel M", false,-1, 31,0);
        tracep->declArray(c+376,"cpu_top regin_64bit_3sel I_sel_data", false,-1, 191,0);
        tracep->declBus(c+25,"cpu_top regin_64bit_3sel I_sel", false,-1, 2,0);
        tracep->declQuad(c+370,"cpu_top regin_64bit_3sel O_sel_data", false,-1, 63,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+382+i*2,"cpu_top regin_64bit_3sel sel_data", true,(i+0), 63,0);}}
        tracep->declBus(c+408,"cpu_top regin_64bit_3sel unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+388,"cpu_top gpr_e I_sys_clk", false,-1);
        tracep->declBit(c+389,"cpu_top gpr_e I_rst", false,-1);
        tracep->declQuad(c+370,"cpu_top gpr_e I_wr_data", false,-1, 63,0);
        tracep->declBit(c+31,"cpu_top gpr_e I_wen", false,-1);
        tracep->declBus(c+23,"cpu_top gpr_e I_rd_addr", false,-1, 4,0);
        tracep->declBus(c+21,"cpu_top gpr_e I_rs1_addr", false,-1, 4,0);
        tracep->declQuad(c+9,"cpu_top gpr_e O_rs1_data", false,-1, 63,0);
        tracep->declBus(c+22,"cpu_top gpr_e I_rs2_addr", false,-1, 4,0);
        tracep->declQuad(c+11,"cpu_top gpr_e O_rs2_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+274+i*2,"cpu_top gpr_e gpr", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBit(c+338+i*1,"cpu_top gpr_e wen", true,(i+0));}}
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
    VlWide<3>/*95:0*/ __Vtemp86;
    VlWide<3>/*95:0*/ __Vtemp87;
    VlWide<3>/*95:0*/ __Vtemp88;
    VlWide<3>/*95:0*/ __Vtemp89;
    VlWide<3>/*95:0*/ __Vtemp90;
    VlWide<4>/*127:0*/ __Vtemp92;
    VlWide<4>/*127:0*/ __Vtemp93;
    VlWide<4>/*127:0*/ __Vtemp94;
    VlWide<4>/*127:0*/ __Vtemp95;
    VlWide<4>/*127:0*/ __Vtemp96;
    VlWide<4>/*127:0*/ __Vtemp97;
    VlWide<3>/*95:0*/ __Vtemp99;
    VlWide<3>/*95:0*/ __Vtemp102;
    VlWide<3>/*95:0*/ __Vtemp105;
    VlWide<3>/*95:0*/ __Vtemp108;
    VlWide<3>/*95:0*/ __Vtemp111;
    VlWide<3>/*95:0*/ __Vtemp112;
    VlWide<3>/*95:0*/ __Vtemp113;
    VlWide<3>/*95:0*/ __Vtemp114;
    VlWide<3>/*95:0*/ __Vtemp115;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->cpu_top__DOT__current_pc),64);
        tracep->fullQData(oldp+3,(vlSelf->cpu_top__DOT__dnpc),64);
        tracep->fullQData(oldp+5,((4ULL + vlSelf->cpu_top__DOT__current_pc)),64);
        tracep->fullQData(oldp+7,(vlSelf->cpu_top__DOT__imm),64);
        tracep->fullQData(oldp+9,(vlSelf->cpu_top__DOT__rs1_data),64);
        tracep->fullQData(oldp+11,(vlSelf->cpu_top__DOT__rs2_data),64);
        tracep->fullQData(oldp+13,(vlSelf->cpu_top__DOT__alu_op1),64);
        tracep->fullQData(oldp+15,(vlSelf->cpu_top__DOT__alu_op2),64);
        tracep->fullQData(oldp+17,(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
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
        tracep->fullQData(oldp+19,(vlSelf->cpu_top__DOT__alu_e__DOT__result),64);
        tracep->fullCData(oldp+21,((0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+22,((0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+23,((0x1fU & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                             >> 7U))),5);
        tracep->fullCData(oldp+24,(vlSelf->cpu_top__DOT__dnpc_sel),4);
        tracep->fullCData(oldp+25,(vlSelf->cpu_top__DOT__regin_sel),3);
        tracep->fullCData(oldp+26,((((1U & (- (IData)(
                                                      (((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR) 
                                                        | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI)) 
                                                       | (0x23U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->cpu_top__DOT__inst_IF_ID)))))) 
                                     | (2U & (- (IData)(
                                                        (((0x63U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                          | (0x6fU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                         | (0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->cpu_top__DOT__inst_IF_ID))))))) 
                                    | (4U & (- (IData)(
                                                       (0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->cpu_top__DOT__inst_IF_ID))))))),3);
        tracep->fullCData(oldp+27,(((1U & (- (IData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR)))) 
                                    | (2U & (- (IData)(
                                                       (((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI) 
                                                           | (0x23U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                          | (0x63U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                         | (0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                        | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU))))))),2);
        tracep->fullSData(oldp+28,(((((((((((((((1U 
                                                 & (- (IData)((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__add_flag)))) 
                                                | (2U 
                                                   & (- (IData)(
                                                                ((IData)(
                                                                         ((0x33U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                          & (0x20U 
                                                                             == 
                                                                             (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                              >> 0x19U)))) 
                                                                 | (IData)(
                                                                           ((0x3bU 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                            & (0x20U 
                                                                               == 
                                                                               (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                                >> 0x19U))))))))) 
                                               | (4U 
                                                  & (- (IData)(
                                                               ((IData)(
                                                                        (0x2013U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                                | (IData)(
                                                                          ((0x2033U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                           & (0U 
                                                                              == 
                                                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                               >> 0x19U))))))))) 
                                              | (8U 
                                                 & (- (IData)(
                                                              ((IData)(
                                                                       (0x3013U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                               | (IData)(
                                                                         ((0x3033U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                          & (0U 
                                                                             == 
                                                                             (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                              >> 0x19U))))))))) 
                                             | (0x10U 
                                                & (- (IData)(
                                                             ((IData)(
                                                                      (0x4013U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                              | (IData)(
                                                                        ((0x4033U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                         & (0U 
                                                                            == 
                                                                            (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                             >> 0x19U))))))))) 
                                            | (0x20U 
                                               & (- (IData)(
                                                            ((IData)(
                                                                     (0x6013U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                             | (IData)(
                                                                       ((0x6033U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                        & (0U 
                                                                           == 
                                                                           (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                            >> 0x19U))))))))) 
                                           | (0x40U 
                                              & (- (IData)(
                                                           ((IData)(
                                                                    (0x7013U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                                            | (IData)(
                                                                      ((0x7033U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                       & (0U 
                                                                          == 
                                                                          (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                           >> 0x19U))))))))) 
                                          | (0x80U 
                                             & (- (IData)(
                                                          ((((IData)(
                                                                     ((0x1013U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                      & (0U 
                                                                         == 
                                                                         (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                          >> 0x1aU)))) 
                                                             | (IData)(
                                                                       ((0x1033U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                        & (0U 
                                                                           == 
                                                                           (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                            >> 0x19U))))) 
                                                            | (IData)(
                                                                      ((0x101bU 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                       & (0U 
                                                                          == 
                                                                          (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                           >> 0x19U))))) 
                                                           | (IData)(
                                                                     ((0x103bU 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                      & (0U 
                                                                         == 
                                                                         (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                          >> 0x19U))))))))) 
                                         | (0x100U 
                                            & (- (IData)(
                                                         ((((IData)(
                                                                    ((0x5013U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                     & (0U 
                                                                        == 
                                                                        (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                         >> 0x1aU)))) 
                                                            | (IData)(
                                                                      ((0x5033U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                       & (0U 
                                                                          == 
                                                                          (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                           >> 0x19U))))) 
                                                           | (IData)(
                                                                     ((0x501bU 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                      & (0U 
                                                                         == 
                                                                         (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                          >> 0x19U))))) 
                                                          | (IData)(
                                                                    ((0x503bU 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                     & (0U 
                                                                        == 
                                                                        (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                         >> 0x19U))))))))) 
                                        | (0x200U & 
                                           (- (IData)(
                                                      ((((IData)(
                                                                 ((0x5013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                  & (0x10U 
                                                                     == 
                                                                     (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                      >> 0x1aU)))) 
                                                         | (IData)(
                                                                   ((0x5033U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                    & (0x20U 
                                                                       == 
                                                                       (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                        >> 0x19U))))) 
                                                        | (IData)(
                                                                  ((0x501bU 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                   & (0x20U 
                                                                      == 
                                                                      (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                       >> 0x19U))))) 
                                                       | (IData)(
                                                                 ((0x503bU 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                  & (0x20U 
                                                                     == 
                                                                     (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                      >> 0x19U))))))))) 
                                       | (0x400U & 
                                          (- (IData)(
                                                     ((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MUL) 
                                                      | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULW)))))) 
                                      | (0x800U & (- (IData)(
                                                             (((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULH) 
                                                               | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                                              | (IData)(
                                                                        ((0x3033U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                         & (1U 
                                                                            == 
                                                                            (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                             >> 0x19U))))))))) 
                                     | (0x1000U & (- (IData)(
                                                             ((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIV) 
                                                                | (IData)(
                                                                          ((0x5033U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                           & (1U 
                                                                              == 
                                                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                               >> 0x19U))))) 
                                                               | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIVW)) 
                                                              | (IData)(
                                                                        ((0x503bU 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                         & (1U 
                                                                            == 
                                                                            (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                             >> 0x19U))))))))) 
                                    | (0x2000U & (- (IData)(
                                                            ((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REM) 
                                                               | (IData)(
                                                                         ((0x7033U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                          & (1U 
                                                                             == 
                                                                             (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                              >> 0x19U))))) 
                                                              | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REMW)) 
                                                             | (IData)(
                                                                       ((0x703bU 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                                        & (1U 
                                                                           == 
                                                                           (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                                            >> 0x19U)))))))))),15);
        tracep->fullCData(oldp+29,(vlSelf->cpu_top__DOT__mem_wstrb),8);
        tracep->fullSData(oldp+30,(vlSelf->cpu_top__DOT__mem_rstrb),9);
        tracep->fullBit(oldp+31,(vlSelf->cpu_top__DOT__reg_wen));
        tracep->fullBit(oldp+32,((0x23U == (0x7fU & vlSelf->cpu_top__DOT__inst_IF_ID))));
        tracep->fullBit(oldp+33,(((0x1bU == (0x7fU 
                                             & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                  | (0x3bU == (0x7fU 
                                               & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullCData(oldp+34,(vlSelf->cpu_top__DOT__alu_op_sext),2);
        tracep->fullQData(oldp+35,(vlSelf->cpu_top__DOT__pc_IF_ID),64);
        tracep->fullIData(oldp+37,(vlSelf->cpu_top__DOT__inst_IF_ID),32);
        tracep->fullBit(oldp+38,(vlSelf->cpu_top__DOT__IF_ID_valid));
        tracep->fullQData(oldp+39,(vlSelf->cpu_top__DOT__ID_EX_imm),64);
        tracep->fullQData(oldp+41,(vlSelf->cpu_top__DOT__ID_EX_pc),64);
        tracep->fullQData(oldp+43,(vlSelf->cpu_top__DOT__ID_EX_rs1),64);
        tracep->fullQData(oldp+45,(vlSelf->cpu_top__DOT__ID_EX_rs2),64);
        tracep->fullCData(oldp+47,(vlSelf->cpu_top__DOT__ID_EX_rd_addr),5);
        tracep->fullCData(oldp+48,(vlSelf->cpu_top__DOT__ID_EX_wstrb),8);
        tracep->fullSData(oldp+49,(vlSelf->cpu_top__DOT__ID_EX_rstrb),9);
        tracep->fullCData(oldp+50,(vlSelf->cpu_top__DOT__ID_EX_regin_sel),3);
        tracep->fullCData(oldp+51,(vlSelf->cpu_top__DOT__ID_EX_op1_sel),3);
        tracep->fullCData(oldp+52,(vlSelf->cpu_top__DOT__ID_EX_op2_sel),2);
        tracep->fullCData(oldp+53,(vlSelf->cpu_top__DOT__ID_EX_alu_sext),2);
        tracep->fullSData(oldp+54,(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel),15);
        tracep->fullBit(oldp+55,(vlSelf->cpu_top__DOT__ID_EX_word_op_mask));
        tracep->fullBit(oldp+56,(vlSelf->cpu_top__DOT__ID_EX_valid));
        tracep->fullQData(oldp+57,(((2U & (IData)(vlSelf->cpu_top__DOT__dnpc_sel))
                                     ? vlSelf->cpu_top__DOT__imm
                                     : vlSelf->cpu_top__DOT__rs1_data)),64);
        tracep->fullQData(oldp+59,(((8U & (IData)(vlSelf->cpu_top__DOT__dnpc_sel))
                                     ? vlSelf->cpu_top__DOT__rs2_data
                                     : vlSelf->cpu_top__DOT__current_pc)),64);
        tracep->fullQData(oldp+61,(vlSelf->cpu_top__DOT__npc_e__DOT__dnpc_sum),64);
        tracep->fullWData(oldp+63,(vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel_data),192);
        tracep->fullCData(oldp+69,(vlSelf->cpu_top__DOT__npc_e__DOT____Vcellinp__nextpc_64bit_3sel__I_sel),3);
        tracep->fullQData(oldp+70,(vlSelf->cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+72,(vlSelf->cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+74,(vlSelf->cpu_top__DOT__npc_e__DOT__nextpc_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullCData(oldp+76,((7U & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__result))),3);
        tracep->fullBit(oldp+77,((1U & ((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                        >> 8U))));
        tracep->fullCData(oldp+78,((0xffU & (~ (IData)(vlSelf->cpu_top__DOT__mem_rstrb)))),8);
        tracep->fullCData(oldp+79,((vlSelf->cpu_top__DOT__inst_IF_ID 
                                    >> 0x19U)),7);
        tracep->fullCData(oldp+80,((0x7fU & vlSelf->cpu_top__DOT__inst_IF_ID)),7);
        tracep->fullCData(oldp+81,((7U & (vlSelf->cpu_top__DOT__inst_IF_ID 
                                          >> 0xcU))),3);
        tracep->fullSData(oldp+82,((vlSelf->cpu_top__DOT__inst_IF_ID 
                                    >> 0x14U)),12);
        tracep->fullSData(oldp+83,(vlSelf->cpu_top__DOT__decoder_e__DOT__immS),12);
        tracep->fullSData(oldp+84,(vlSelf->cpu_top__DOT__decoder_e__DOT__immB),13);
        tracep->fullIData(oldp+85,((0xfffff000U & vlSelf->cpu_top__DOT__inst_IF_ID)),32);
        tracep->fullIData(oldp+86,(vlSelf->cpu_top__DOT__decoder_e__DOT__immJ),21);
        tracep->fullBit(oldp+87,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI));
        tracep->fullBit(oldp+88,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR));
        tracep->fullBit(oldp+89,((0x63U == (0x7fU & vlSelf->cpu_top__DOT__inst_IF_ID))));
        tracep->fullBit(oldp+90,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU));
        tracep->fullBit(oldp+91,((0x6fU == (0x7fU & vlSelf->cpu_top__DOT__inst_IF_ID))));
        tracep->fullBit(oldp+92,((0x37U == (0x7fU & vlSelf->cpu_top__DOT__inst_IF_ID))));
        tracep->fullBit(oldp+93,((0x17U == (0x7fU & vlSelf->cpu_top__DOT__inst_IF_ID))));
        tracep->fullBit(oldp+94,(vlSelf->cpu_top__DOT__decoder_e__DOT__JALR));
        tracep->fullBit(oldp+95,(vlSelf->cpu_top__DOT__decoder_e__DOT__LD));
        tracep->fullBit(oldp+96,(vlSelf->cpu_top__DOT__decoder_e__DOT__LW));
        tracep->fullBit(oldp+97,(vlSelf->cpu_top__DOT__decoder_e__DOT__LWU));
        tracep->fullBit(oldp+98,(vlSelf->cpu_top__DOT__decoder_e__DOT__LH));
        tracep->fullBit(oldp+99,(vlSelf->cpu_top__DOT__decoder_e__DOT__LHU));
        tracep->fullBit(oldp+100,(vlSelf->cpu_top__DOT__decoder_e__DOT__LB));
        tracep->fullBit(oldp+101,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullBit(oldp+102,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullBit(oldp+103,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullBit(oldp+104,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullBit(oldp+105,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullBit(oldp+106,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullBit(oldp+107,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullBit(oldp+108,((IData)(((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                               >> 0x1aU))))));
        tracep->fullBit(oldp+109,((IData)(((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                               >> 0x1aU))))));
        tracep->fullBit(oldp+110,((IData)(((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0x10U 
                                              == (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x1aU))))));
        tracep->fullBit(oldp+111,((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullBit(oldp+112,((IData)(((0x101bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+113,((IData)(((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+114,((IData)(((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0x20U 
                                              == (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+115,((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+116,((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0x20U 
                                              == (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+117,((IData)(((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+118,((IData)(((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+119,((IData)(((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+120,((IData)(((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+121,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+122,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0x20U 
                                              == (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+123,((IData)(((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+124,((IData)(((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+125,(vlSelf->cpu_top__DOT__decoder_e__DOT__MUL));
        tracep->fullBit(oldp+126,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULH));
        tracep->fullBit(oldp+127,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULHSU));
        tracep->fullBit(oldp+128,((IData)(((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (1U == 
                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+129,(vlSelf->cpu_top__DOT__decoder_e__DOT__DIV));
        tracep->fullBit(oldp+130,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (1U == 
                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+131,(vlSelf->cpu_top__DOT__decoder_e__DOT__REM));
        tracep->fullBit(oldp+132,((IData)(((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (1U == 
                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+133,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+134,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0x20U 
                                              == (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+135,((IData)(((0x103bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+136,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0U == 
                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+137,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (0x20U 
                                              == (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+138,(vlSelf->cpu_top__DOT__decoder_e__DOT__MULW));
        tracep->fullBit(oldp+139,(vlSelf->cpu_top__DOT__decoder_e__DOT__DIVW));
        tracep->fullBit(oldp+140,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (1U == 
                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+141,(vlSelf->cpu_top__DOT__decoder_e__DOT__REMW));
        tracep->fullBit(oldp+142,((IData)(((0x703bU 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                           & (1U == 
                                              (vlSelf->cpu_top__DOT__inst_IF_ID 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+143,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullBit(oldp+144,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullBit(oldp+145,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullBit(oldp+146,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullBit(oldp+147,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullBit(oldp+148,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullBit(oldp+149,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullBit(oldp+150,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullBit(oldp+151,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullBit(oldp+152,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullBit(oldp+153,((0x73U == vlSelf->cpu_top__DOT__inst_IF_ID)));
        tracep->fullBit(oldp+154,((0x100073U == vlSelf->cpu_top__DOT__inst_IF_ID)));
        tracep->fullBit(oldp+155,((3U == (0x7fU & vlSelf->cpu_top__DOT__inst_IF_ID))));
        tracep->fullBit(oldp+156,(vlSelf->cpu_top__DOT__decoder_e__DOT__typeB_jr));
        tracep->fullBit(oldp+157,(vlSelf->cpu_top__DOT__decoder_e__DOT__eq));
        tracep->fullBit(oldp+158,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__eq)))));
        tracep->fullBit(oldp+159,(vlSelf->cpu_top__DOT__decoder_e__DOT__lt));
        tracep->fullBit(oldp+160,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__lt)))));
        tracep->fullBit(oldp+161,(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu));
        tracep->fullBit(oldp+162,((1U & (~ (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__ltu)))));
        tracep->fullBit(oldp+163,(vlSelf->cpu_top__DOT__decoder_e__DOT__add_flag));
        tracep->fullBit(oldp+164,(((IData)(((0x33U 
                                             == (0x707fU 
                                                 & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                            & (0x20U 
                                               == (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                   >> 0x19U)))) 
                                   | (IData)(((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+165,(((IData)((0x2013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                   | (IData)(((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+166,(((IData)((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                   | (IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+167,(((IData)((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                   | (IData)(((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+168,(((IData)((0x6013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                   | (IData)(((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+169,(((IData)((0x7013U 
                                            == (0x707fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                   | (IData)(((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+170,(((((IData)(((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x1aU)))) 
                                     | (IData)(((0x1033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                & (0U 
                                                   == 
                                                   (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                    >> 0x19U))))) 
                                    | (IData)(((0x101bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                   >> 0x19U))))) 
                                   | (IData)(((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+171,(((((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x1aU)))) 
                                     | (IData)(((0x5033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                & (0U 
                                                   == 
                                                   (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                    >> 0x19U))))) 
                                    | (IData)(((0x501bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                   >> 0x19U))))) 
                                   | (IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                              & (0U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+172,(((((IData)(((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                              & (0x10U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x1aU)))) 
                                     | (IData)(((0x5033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                & (0x20U 
                                                   == 
                                                   (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                    >> 0x19U))))) 
                                    | (IData)(((0x501bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                               & (0x20U 
                                                  == 
                                                  (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                   >> 0x19U))))) 
                                   | (IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+173,(((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MUL) 
                                   | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULW))));
        tracep->fullBit(oldp+174,((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULH) 
                                    | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__MULHSU)) 
                                   | (IData)(((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+175,(((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIV) 
                                     | (IData)(((0x5033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                & (1U 
                                                   == 
                                                   (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                    >> 0x19U))))) 
                                    | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__DIVW)) 
                                   | (IData)(((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+176,(((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REM) 
                                     | (IData)(((0x7033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                                & (1U 
                                                   == 
                                                   (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                    >> 0x19U))))) 
                                    | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__REMW)) 
                                   | (IData)(((0x703bU 
                                               == (0x707fU 
                                                   & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->cpu_top__DOT__inst_IF_ID 
                                                  >> 0x19U)))))));
        tracep->fullBit(oldp+177,((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeR) 
                                    | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI)) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullBit(oldp+178,((((0x63U == (0x7fU 
                                               & vlSelf->cpu_top__DOT__inst_IF_ID)) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->cpu_top__DOT__inst_IF_ID)))));
        tracep->fullBit(oldp+179,((((((IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeI) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                     | (0x63U == (0x7fU 
                                                  & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->cpu_top__DOT__inst_IF_ID))) 
                                   | (IData)(vlSelf->cpu_top__DOT__decoder_e__DOT__typeU))));
        tracep->fullWData(oldp+180,(vlSelf->cpu_top__DOT____Vcellinp__alu_op1_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+186,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+188,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+190,(vlSelf->cpu_top__DOT__alu_op1_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullWData(oldp+192,(vlSelf->cpu_top__DOT____Vcellinp__alu_op2_64bit_2sel__I_sel_data),128);
        tracep->fullQData(oldp+196,(vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+198,(vlSelf->cpu_top__DOT__alu_op2_64bit_2sel__DOT__sel_data[1]),64);
        tracep->fullBit(oldp+200,((1U & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel))));
        tracep->fullBit(oldp+201,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+202,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 2U))));
        tracep->fullBit(oldp+203,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 3U))));
        tracep->fullBit(oldp+204,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 4U))));
        tracep->fullBit(oldp+205,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 5U))));
        tracep->fullBit(oldp+206,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 6U))));
        tracep->fullBit(oldp+207,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 7U))));
        tracep->fullBit(oldp+208,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 8U))));
        tracep->fullBit(oldp+209,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 9U))));
        tracep->fullBit(oldp+210,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+211,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+212,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+213,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel) 
                                         >> 0xdU))));
        tracep->fullQData(oldp+214,(vlSelf->cpu_top__DOT__alu_e__DOT__slt_result),64);
        VL_EXTEND_WQ(65,64, __Vtemp86, vlSelf->cpu_top__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp87, vlSelf->cpu_top__DOT__alu_e__DOT__adder2);
        VL_ADD_W(3, __Vtemp88, __Vtemp86, __Vtemp87);
        VL_EXTEND_WQ(65,64, __Vtemp89, vlSelf->cpu_top__DOT__alu_e__DOT__cin);
        VL_ADD_W(3, __Vtemp90, __Vtemp88, __Vtemp89);
        tracep->fullQData(oldp+216,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp90[2U])))))),64);
        tracep->fullQData(oldp+218,((vlSelf->cpu_top__DOT__alu_op1 
                                     ^ vlSelf->cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+220,((vlSelf->cpu_top__DOT__alu_op1 
                                     | vlSelf->cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+222,((vlSelf->cpu_top__DOT__alu_op1 
                                     & vlSelf->cpu_top__DOT__alu_op2)),64);
        tracep->fullQData(oldp+224,(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
                                                            >> 0x20U))))
                                      : vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result)),64);
        tracep->fullQData(oldp+226,(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result),64);
        tracep->fullQData(oldp+228,((((- (QData)((IData)(
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
        VL_EXTENDS_WW(128,65, __Vtemp92, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext);
        VL_EXTENDS_WW(128,65, __Vtemp93, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        VL_MULS_WWW(128,128,128, __Vtemp94, __Vtemp92, __Vtemp93);
        tracep->fullQData(oldp+230,((((QData)((IData)(
                                                      __Vtemp94[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp94[0U])))),64);
        VL_EXTENDS_WW(128,65, __Vtemp95, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext);
        VL_EXTENDS_WW(128,65, __Vtemp96, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        VL_MULS_WWW(128,128,128, __Vtemp97, __Vtemp95, __Vtemp96);
        tracep->fullQData(oldp+232,((((QData)((IData)(
                                                      __Vtemp97[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp97[2U])))),64);
        VL_DIVS_WWW(65, __Vtemp99, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        tracep->fullQData(oldp+234,((((QData)((IData)(
                                                      __Vtemp99[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp99[0U])))),64);
        VL_MODDIVS_WWW(65, __Vtemp102, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        tracep->fullQData(oldp+236,((((QData)((IData)(
                                                      __Vtemp102[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp102[0U])))),64);
        tracep->fullWData(oldp+238,(vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext),65);
        tracep->fullWData(oldp+241,(vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext),65);
        tracep->fullBit(oldp+244,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                          ? (IData)(
                                                    (vlSelf->cpu_top__DOT__alu_op1 
                                                     >> 0x1fU))
                                          : (IData)(
                                                    (vlSelf->cpu_top__DOT__alu_op1 
                                                     >> 0x3fU))))));
        tracep->fullBit(oldp+245,((1U & ((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                          ? (IData)(
                                                    (vlSelf->cpu_top__DOT__alu_op2 
                                                     >> 0x1fU))
                                          : (IData)(
                                                    (vlSelf->cpu_top__DOT__alu_op2 
                                                     >> 0x3fU))))));
        tracep->fullBit(oldp+246,(vlSelf->cpu_top__DOT__alu_e__DOT__sext1));
        tracep->fullBit(oldp+247,(vlSelf->cpu_top__DOT__alu_e__DOT__sext2));
        VL_DIVS_WWW(65, __Vtemp105, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        tracep->fullBit(oldp+248,((1U & __Vtemp105[2U])));
        VL_MODDIVS_WWW(65, __Vtemp108, vlSelf->cpu_top__DOT__alu_e__DOT__op1_sext, vlSelf->cpu_top__DOT__alu_e__DOT__op2_sext);
        tracep->fullBit(oldp+249,((1U & __Vtemp108[2U])));
        tracep->fullQData(oldp+250,(vlSelf->cpu_top__DOT__alu_e__DOT__adder2),64);
        tracep->fullQData(oldp+252,(vlSelf->cpu_top__DOT__alu_e__DOT__cin),64);
        VL_EXTEND_WQ(65,64, __Vtemp111, vlSelf->cpu_top__DOT__alu_op1);
        VL_EXTEND_WQ(65,64, __Vtemp112, vlSelf->cpu_top__DOT__alu_e__DOT__adder2);
        VL_ADD_W(3, __Vtemp113, __Vtemp111, __Vtemp112);
        VL_EXTEND_WQ(65,64, __Vtemp114, vlSelf->cpu_top__DOT__alu_e__DOT__cin);
        VL_ADD_W(3, __Vtemp115, __Vtemp113, __Vtemp114);
        tracep->fullBit(oldp+254,((1U & __Vtemp115[2U])));
        tracep->fullQData(oldp+255,(vlSelf->cpu_top__DOT__alu_e__DOT__reverse_op1),64);
        tracep->fullQData(oldp+257,(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op),64);
        tracep->fullCData(oldp+259,(vlSelf->cpu_top__DOT__alu_e__DOT__shamt),6);
        tracep->fullQData(oldp+260,(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                      ? (~ (0xffffffffULL 
                                            >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt)))
                                      : (~ (0xffffffffffffffffULL 
                                            >> (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shamt))))),64);
        tracep->fullIData(oldp+262,(((0x80U & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel))
                                      ? (IData)((vlSelf->cpu_top__DOT__alu_e__DOT__shift_op 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op))),32);
        tracep->fullQData(oldp+263,(((IData)(vlSelf->cpu_top__DOT__ID_EX_word_op_mask)
                                      ? (QData)((IData)(
                                                        ((0x80U 
                                                          & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel))
                                                          ? (IData)(
                                                                    (vlSelf->cpu_top__DOT__alu_e__DOT__shift_op 
                                                                     >> 0x20U))
                                                          : (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_op))))
                                      : vlSelf->cpu_top__DOT__alu_e__DOT__shift_op)),64);
        tracep->fullQData(oldp+265,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->cpu_top__DOT__alu_e__DOT__shift_result)))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result 
                                                                   >> 0x20U))))),64);
        tracep->fullQData(oldp+267,(vlSelf->cpu_top__DOT__alu_e__DOT__slldw_result),64);
        tracep->fullQData(oldp+269,(vlSelf->cpu_top__DOT__alu_e__DOT__dword_result),64);
        tracep->fullQData(oldp+271,((((QData)((IData)(
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
                                      << 0x20U) | (QData)((IData)(vlSelf->cpu_top__DOT__alu_e__DOT__dword_result)))),64);
        tracep->fullBit(oldp+273,(((1U & ((IData)((0U 
                                                   != 
                                                   (0x3000U 
                                                    & (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_op_sel)))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->cpu_top__DOT__ID_EX_alu_sext))))))
                                    ? 0U : (1U & (IData)(
                                                         (vlSelf->cpu_top__DOT__alu_e__DOT__dword_result 
                                                          >> 0x1fU))))));
        tracep->fullQData(oldp+274,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[0]),64);
        tracep->fullQData(oldp+276,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[1]),64);
        tracep->fullQData(oldp+278,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[2]),64);
        tracep->fullQData(oldp+280,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[3]),64);
        tracep->fullQData(oldp+282,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[4]),64);
        tracep->fullQData(oldp+284,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[5]),64);
        tracep->fullQData(oldp+286,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[6]),64);
        tracep->fullQData(oldp+288,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[7]),64);
        tracep->fullQData(oldp+290,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[8]),64);
        tracep->fullQData(oldp+292,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[9]),64);
        tracep->fullQData(oldp+294,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[10]),64);
        tracep->fullQData(oldp+296,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[11]),64);
        tracep->fullQData(oldp+298,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[12]),64);
        tracep->fullQData(oldp+300,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[13]),64);
        tracep->fullQData(oldp+302,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[14]),64);
        tracep->fullQData(oldp+304,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[15]),64);
        tracep->fullQData(oldp+306,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[16]),64);
        tracep->fullQData(oldp+308,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[17]),64);
        tracep->fullQData(oldp+310,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[18]),64);
        tracep->fullQData(oldp+312,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[19]),64);
        tracep->fullQData(oldp+314,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[20]),64);
        tracep->fullQData(oldp+316,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[21]),64);
        tracep->fullQData(oldp+318,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[22]),64);
        tracep->fullQData(oldp+320,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[23]),64);
        tracep->fullQData(oldp+322,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[24]),64);
        tracep->fullQData(oldp+324,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[25]),64);
        tracep->fullQData(oldp+326,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[26]),64);
        tracep->fullQData(oldp+328,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[27]),64);
        tracep->fullQData(oldp+330,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[28]),64);
        tracep->fullQData(oldp+332,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[29]),64);
        tracep->fullQData(oldp+334,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[30]),64);
        tracep->fullQData(oldp+336,(vlSelf->cpu_top__DOT__gpr_e__DOT__gpr[31]),64);
        tracep->fullBit(oldp+338,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[0]));
        tracep->fullBit(oldp+339,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[1]));
        tracep->fullBit(oldp+340,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[2]));
        tracep->fullBit(oldp+341,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[3]));
        tracep->fullBit(oldp+342,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[4]));
        tracep->fullBit(oldp+343,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[5]));
        tracep->fullBit(oldp+344,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[6]));
        tracep->fullBit(oldp+345,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[7]));
        tracep->fullBit(oldp+346,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[8]));
        tracep->fullBit(oldp+347,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[9]));
        tracep->fullBit(oldp+348,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[10]));
        tracep->fullBit(oldp+349,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[11]));
        tracep->fullBit(oldp+350,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[12]));
        tracep->fullBit(oldp+351,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[13]));
        tracep->fullBit(oldp+352,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[14]));
        tracep->fullBit(oldp+353,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[15]));
        tracep->fullBit(oldp+354,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[16]));
        tracep->fullBit(oldp+355,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[17]));
        tracep->fullBit(oldp+356,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[18]));
        tracep->fullBit(oldp+357,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[19]));
        tracep->fullBit(oldp+358,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[20]));
        tracep->fullBit(oldp+359,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[21]));
        tracep->fullBit(oldp+360,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[22]));
        tracep->fullBit(oldp+361,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[23]));
        tracep->fullBit(oldp+362,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[24]));
        tracep->fullBit(oldp+363,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[25]));
        tracep->fullBit(oldp+364,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[26]));
        tracep->fullBit(oldp+365,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[27]));
        tracep->fullBit(oldp+366,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[28]));
        tracep->fullBit(oldp+367,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[29]));
        tracep->fullBit(oldp+368,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[30]));
        tracep->fullBit(oldp+369,(vlSelf->cpu_top__DOT__gpr_e__DOT__wen[31]));
        tracep->fullQData(oldp+370,(vlSelf->cpu_top__DOT__wr_data),64);
        tracep->fullQData(oldp+372,(vlSelf->cpu_top__DOT__mem_in),64);
        tracep->fullQData(oldp+374,(vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data),64);
        tracep->fullWData(oldp+376,(vlSelf->cpu_top__DOT____Vcellinp__regin_64bit_3sel__I_sel_data),192);
        tracep->fullQData(oldp+382,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[0]),64);
        tracep->fullQData(oldp+384,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[1]),64);
        tracep->fullQData(oldp+386,(vlSelf->cpu_top__DOT__regin_64bit_3sel__DOT__sel_data[2]),64);
        tracep->fullBit(oldp+388,(vlSelf->I_sys_clk));
        tracep->fullBit(oldp+389,(vlSelf->I_rst));
        tracep->fullIData(oldp+390,(vlSelf->I_inst),32);
        tracep->fullBit(oldp+391,(vlSelf->I_inst_valid));
        tracep->fullQData(oldp+392,(vlSelf->O_pc),64);
        tracep->fullBit(oldp+394,(vlSelf->O_pc_valid));
        tracep->fullQData(oldp+395,(vlSelf->O_mem_addr),64);
        tracep->fullBit(oldp+397,(vlSelf->O_mem_rd_en));
        tracep->fullBit(oldp+398,(vlSelf->O_mem_wen));
        tracep->fullQData(oldp+399,(vlSelf->I_mem_rd_data),64);
        tracep->fullQData(oldp+401,(vlSelf->O_mem_wr_data),64);
        tracep->fullCData(oldp+403,(vlSelf->O_mem_wr_strb),8);
        tracep->fullBit(oldp+404,((1U & (((IData)(vlSelf->cpu_top__DOT__mem_rstrb) 
                                          >> 8U) & 
                                         ((0xfU == 
                                           (0xffU & (IData)(vlSelf->cpu_top__DOT__mem_rstrb)))
                                           ? (IData)(
                                                     (vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                      >> 0x1fU))
                                           : ((3U == 
                                               (0xffU 
                                                & (IData)(vlSelf->cpu_top__DOT__mem_rstrb)))
                                               ? (IData)(
                                                         (vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                          >> 0xfU))
                                               : ((1U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelf->cpu_top__DOT__mem_rstrb))) 
                                                  & (IData)(
                                                            (vlSelf->cpu_top__DOT__mem_ld_e__DOT__ld_data 
                                                             >> 7U)))))))));
        tracep->fullCData(oldp+405,(vlSelf->cpu_top__DOT__ID_EX_dnpc_sel),3);
        tracep->fullIData(oldp+406,(0x40U),32);
        tracep->fullIData(oldp+407,(3U),32);
        tracep->fullIData(oldp+408,(3U),32);
        tracep->fullQData(oldp+409,(0x7ffffffcULL),64);
        tracep->fullCData(oldp+411,(1U),3);
        tracep->fullCData(oldp+412,(2U),3);
        tracep->fullCData(oldp+413,(4U),3);
        tracep->fullSData(oldp+414,(1U),15);
        tracep->fullSData(oldp+415,(2U),15);
        tracep->fullSData(oldp+416,(4U),15);
        tracep->fullSData(oldp+417,(8U),15);
        tracep->fullSData(oldp+418,(0x10U),15);
        tracep->fullSData(oldp+419,(0x20U),15);
        tracep->fullSData(oldp+420,(0x40U),15);
        tracep->fullSData(oldp+421,(0x80U),15);
        tracep->fullSData(oldp+422,(0x100U),15);
        tracep->fullSData(oldp+423,(0x200U),15);
        tracep->fullSData(oldp+424,(0x400U),15);
        tracep->fullSData(oldp+425,(0x800U),15);
        tracep->fullSData(oldp+426,(0x1000U),15);
        tracep->fullSData(oldp+427,(0x2000U),15);
        tracep->fullCData(oldp+428,(1U),2);
        tracep->fullCData(oldp+429,(2U),2);
        tracep->fullIData(oldp+430,(2U),32);
        tracep->fullIData(oldp+431,(2U),32);
    }
}
