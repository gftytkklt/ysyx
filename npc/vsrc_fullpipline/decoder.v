`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/04/12 20:07:52
// Design Name: 
// Module Name: decoder
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// control signal is generated in this module!
// dnpc: 
//////////////////////////////////////////////////////////////////////////////////
// `include "global_def.v"
//import "DPI-C" function void sim_end();
import "DPI-C" function void set_inst_ptr(input logic [31:0] a []);
module decoder(
    input I_sys_clk,
    input I_rst,
    input [31:0] I_inst,
    output [63:0] O_imm,
    input [63:0] I_rs1_data,
    output [4:0] O_rs1,
    input [63:0] I_rs2_data,
    output [4:0] O_rs2,
    output [4:0] O_rd,
    output O_reg_wen,
    output O_mem_wen,
    output [7:0] O_mem_wstrb,
    output [8:0] O_mem_rstrb,// [8] for signed(1)/unsigned(0), [7:0]for real strb
    //output O_mem_ren,
    //output [2:0] O_funct3,
    //output [6:0] O_funct7,
    output [3:0] O_dnpc_sel,
    output [2:0] O_regin_sel,
    output [2:0] O_opnum1_sel,
    output [1:0] O_opnum2_sel,
    output [14:0] O_alu_op_sel,
    output [1:0] O_alu_op_sext,
    output O_word_op_mask
    //output O_sim_end
    );
    initial set_inst_ptr(I_inst);
    wire [6:0] funct7;
    wire [6:0] opcode;
    wire [4:0] rs2,rs1,rd;
    wire [2:0] funct3;
    wire [11:0] immI,immS;
    wire [12:0] immB;
    wire [31:0] immU;
    wire [20:0] immJ;
    wire typeI, typeS, typeR, typeB, typeU, typeJ;
    // inst var parsing
    assign funct7 = I_inst[31:25];
    assign opcode = I_inst[6:0];
    assign rd = I_inst[11:7];
    assign funct3 = I_inst[14:12];
    assign rs1 = I_inst[19:15];
    assign rs2 = I_inst[24:20];
    assign immI = I_inst[31:20];
    assign immS = {I_inst[31:25], I_inst[11:7]};
    assign immB = {I_inst[31], I_inst[7], I_inst[30:25], I_inst[11:8],1'b0};
    assign immU = {I_inst[31:12],12'b0};
    assign immJ = {I_inst[31],I_inst[19:12],I_inst[20],I_inst[30:21],1'b0};
    // rs1, rs2, rd addr
    assign O_rs1 = rs1;
    assign O_rs2 = rs2;
    assign O_rd = rd;
    //assign O_funct3 = funct3;
    //assign O_funct7 = funct7;
    // inst type
    assign typeI = (opcode == 7'b1100111) || (opcode == 7'b0000011) || (opcode == 7'b0010011) || (opcode == 7'b0011011);
    assign typeS = (opcode == 7'b0100011);
    assign typeB = (opcode == 7'b1100011);
    assign typeU = (opcode == 7'b0010111) || (opcode == 7'b0110111);
    assign typeJ = (opcode == 7'b1101111);
    assign typeR = (opcode == 7'b0110011) || (opcode == 7'b0111011);
    
    // O_imm
    assign O_imm = ({64{typeI}} & {{52{immI[11]}},immI})
                    | ({64{typeS}} & {{52{immS[11]}},immS})
                    | ({64{typeB}} & {{51{immB[12]}},immB})
                    | ({64{typeU}} & {{32{immU[31]}},immU})
                    | ({64{typeJ}} & {{43{immJ[20]}},immJ});
    // inst pattern
    // type U
    wire LUI;
    assign LUI = (opcode == 7'b0110111);
    wire AUIPC;
    assign AUIPC = (opcode == 7'b0010111);
    // type J
    wire JAL;
    assign JAL = (opcode == 7'b1101111);
    // type I
    wire JALR;
    assign JALR = (opcode == 7'b1100111) && (funct3 == 3'b000);
    wire LD;
    assign LD = (opcode == 7'b0000011) && (funct3 == 3'b011);
    wire LW;
    assign LW = (opcode == 7'b0000011) && (funct3 == 3'b010);
    wire LWU;
    assign LWU = (opcode == 7'b0000011) && (funct3 == 3'b110);
    wire LH;
    assign LH = (opcode == 7'b0000011) && (funct3 == 3'b001);
    wire LHU;
    assign LHU = (opcode == 7'b0000011) && (funct3 == 3'b101);
    wire LB;
    assign LB = (opcode == 7'b0000011) && (funct3 == 3'b000);
    wire LBU;
    assign LBU = (opcode == 7'b0000011) && (funct3 == 3'b100);
    wire ADDI;
    assign ADDI = (opcode == 7'b0010011) && (funct3 == 3'b000);
    wire SLTI;
    assign SLTI = (opcode == 7'b0010011) && (funct3 == 3'b010);
    wire SLTIU;
    assign SLTIU = (opcode == 7'b0010011) && (funct3 == 3'b011);
    wire XORI;
    assign XORI = (opcode == 7'b0010011) && (funct3 == 3'b100);
    wire ORI;
    assign ORI = (opcode == 7'b0010011) && (funct3 == 3'b110);
    wire ANDI;
    assign ANDI = (opcode == 7'b0010011) && (funct3 == 3'b111);
    wire SLLI;
    assign SLLI = (funct7[6:1] == 6'b000000) && (opcode == 7'b0010011) && (funct3 == 3'b001);
    wire SRLI;
    assign SRLI = (funct7[6:1] == 6'b000000) && (opcode == 7'b0010011) && (funct3 == 3'b101);
    wire SRAI;
    assign SRAI = (funct7[6:1] == 6'b010000) && (opcode == 7'b0010011) && (funct3 == 3'b101);
    wire ADDIW;
    assign ADDIW = (opcode == 7'b0011011) && (funct3 == 3'b000);
    wire SLLIW;
    assign SLLIW = (funct7 == 7'b0000000) && (opcode == 7'b0011011) && (funct3 == 3'b001);
    wire SRLIW;
    assign SRLIW = (funct7 == 7'b0000000) && (opcode == 7'b0011011) && (funct3 == 3'b101);
    wire SRAIW;
    assign SRAIW = (funct7 == 7'b0100000) && (opcode == 7'b0011011) && (funct3 == 3'b101);
    // type R
    wire ADD;
    assign ADD = (funct7 == 7'b0000000) && (opcode == 7'b0110011) && (funct3 == 3'b000);
    wire SUB;
    assign SUB = (funct7 == 7'b0100000) && (opcode == 7'b0110011) && (funct3 == 3'b000);
    wire SLL;
    assign SLL = (funct7 == 7'b0000000) && (opcode == 7'b0110011) && (funct3 == 3'b001);
    wire SLT;
    assign SLT = (funct7 == 7'b0000000) && (opcode == 7'b0110011) && (funct3 == 3'b010);
    wire SLTU;
    assign SLTU = (funct7 == 7'b0000000) && (opcode == 7'b0110011) && (funct3 == 3'b011);
    wire XOR;
    assign XOR = (funct7 == 7'b0000000) && (opcode == 7'b0110011) && (funct3 == 3'b100);
    wire SRL;
    assign SRL = (funct7 == 7'b0000000) && (opcode == 7'b0110011) && (funct3 == 3'b101);
    wire SRA;
    assign SRA = (funct7 == 7'b0100000) && (opcode == 7'b0110011) && (funct3 == 3'b101);
    wire OR;
    assign OR = (funct7 == 7'b0000000) && (opcode == 7'b0110011) && (funct3 == 3'b110);
    wire AND;
    assign AND = (funct7 == 7'b0000000) && (opcode == 7'b0110011) && (funct3 == 3'b111);
    wire MUL;
    assign MUL = (funct7 == 7'b0000001) && (opcode == 7'b0110011) && (funct3 == 3'b000);
    wire MULH;
    assign MULH = (funct7 == 7'b0000001) && (opcode == 7'b0110011) && (funct3 == 3'b001);
    wire MULHSU;
    assign MULHSU = (funct7 == 7'b0000001) && (opcode == 7'b0110011) && (funct3 == 3'b010);
    wire MULHU;
    assign MULHU = (funct7 == 7'b0000001) && (opcode == 7'b0110011) && (funct3 == 3'b011);
    wire DIV;
    assign DIV = (funct7 == 7'b0000001) && (opcode == 7'b0110011) && (funct3 == 3'b100);
    wire DIVU;
    assign DIVU = (funct7 == 7'b0000001) && (opcode == 7'b0110011) && (funct3 == 3'b101);
    wire REM;
    assign REM = (funct7 == 7'b0000001) && (opcode == 7'b0110011) && (funct3 == 3'b110);
    wire REMU;
    assign REMU = (funct7 == 7'b0000001) && (opcode == 7'b0110011) && (funct3 == 3'b111);
    wire ADDW;
    assign ADDW = (funct7 == 7'b0000000) && (opcode == 7'b0111011) && (funct3 == 3'b000);
    wire SUBW;
    assign SUBW = (funct7 == 7'b0100000) && (opcode == 7'b0111011) && (funct3 == 3'b000);
    wire SLLW;
    assign SLLW = (funct7 == 7'b0000000) && (opcode == 7'b0111011) && (funct3 == 3'b001);
    wire SRLW;
    assign SRLW = (funct7 == 7'b0000000) && (opcode == 7'b0111011) && (funct3 == 3'b101);
    wire SRAW;
    assign SRAW = (funct7 == 7'b0100000) && (opcode == 7'b0111011) && (funct3 == 3'b101);
    wire MULW;
    assign MULW = (funct7 == 7'b0000001) && (opcode == 7'b0111011) && (funct3 == 3'b000);
    wire DIVW;
    assign DIVW = (funct7 == 7'b0000001) && (opcode == 7'b0111011) && (funct3 == 3'b100);
    wire DIVUW;
    assign DIVUW = (funct7 == 7'b0000001) && (opcode == 7'b0111011) && (funct3 == 3'b101);
    wire REMW;
    assign REMW = (funct7 == 7'b0000001) && (opcode == 7'b0111011) && (funct3 == 3'b110);
    wire REMUW;
    assign REMUW = (funct7 == 7'b0000001) && (opcode == 7'b0111011) && (funct3 == 3'b111);
    // type S
    wire SD;
    assign SD = (opcode == 7'b0100011) && (funct3 == 3'b011);
    wire SW;
    assign SW = (opcode == 7'b0100011) && (funct3 == 3'b010);
    wire SH;
    assign SH = (opcode == 7'b0100011) && (funct3 == 3'b001);
    wire SB;
    assign SB = (opcode == 7'b0100011) && (funct3 == 3'b000);
    // type B
    wire BEQ;
    assign BEQ = (opcode == 7'b1100011) && (funct3 == 3'b000);
    wire BNE;
    assign BNE = (opcode == 7'b1100011) && (funct3 == 3'b001);
    wire BLT;
    assign BLT = (opcode == 7'b1100011) && (funct3 == 3'b100);
    wire BGE;
    assign BGE = (opcode == 7'b1100011) && (funct3 == 3'b101);
    wire BLTU;
    assign BLTU = (opcode == 7'b1100011) && (funct3 == 3'b110);
    wire BGEU;
    assign BGEU = (opcode == 7'b1100011) && (funct3 == 3'b111);
    // ecall & ebreak
    wire ECALL;
    assign ECALL = (I_inst == 32'h00000073);
    wire EBREAK;
    assign EBREAK = (I_inst == 32'h00100073);
    // ctrl signal gen
    // reg wr en
    wire regin_from_mem = (opcode == 7'b0000011);
    // O_regin_sel: 4 for snpc, 2 for memory in, 1 for alu in
    assign O_regin_sel[2] = O_reg_wen & (JAL | JALR);
    assign O_regin_sel[1] = O_reg_wen & regin_from_mem;
    assign O_regin_sel[0] = O_reg_wen & (~(regin_from_mem | JAL | JALR));
    assign O_reg_wen = typeR | typeI | typeU | typeJ;
    assign O_mem_wen = typeS;
    assign O_mem_wstrb = ({8{SD}} & 8'b11111111)
    		       | ({8{SW}} & 8'b00001111)
    		       | ({8{SH}} & 8'b00000011)
    		       | ({8{SB}} & 8'b00000001);
    assign O_mem_rstrb[8] = LW | LH | LB; //sext
    assign O_mem_rstrb[7:4] = {4{LD}};
    assign O_mem_rstrb[3:2] = {2{LD | LW | LWU}};
    assign O_mem_rstrb[1] = LD | LW | LWU | LH | LHU;
    assign O_mem_rstrb[0] = LD | LW | LWU | LH | LHU | LB | LBU;
    //assign O_mem_ren = (opcode == 7'b0000011);
    // dnpc
    localparam SNPC = 3'd1;
    localparam DNPC = 3'd2;
    localparam JALR_DNPC = 3'd4;
    wire typeB_jr;
    wire eq, neq, lt, ge, ltu, geu;
    assign eq = I_rs1_data == I_rs2_data;
    assign neq = ~eq;
    assign ltu = I_rs1_data < I_rs2_data;
    assign geu = ~ltu;
    assign lt = ($signed(I_rs1_data)) < ($signed(I_rs2_data));
    assign ge = ~lt;
    assign typeB_jr = (BEQ&eq) | (BNE&neq) | (BLT&lt) | (BGE&ge) | (BLTU&ltu) | (BGEU&geu);
    assign O_dnpc_sel[3] = JALR;
    assign O_dnpc_sel[2] = JAL;
    assign O_dnpc_sel[1] = typeB_jr;
    assign O_dnpc_sel[0] = ~(JALR | JAL | typeB_jr);
    // alu op
    localparam OP_ADD = 15'b000_0000_0000_0001;
    localparam OP_SUB = 15'b000_0000_0000_0010;
    localparam OP_SLT = 15'b000_0000_0000_0100;
    localparam OP_SLTU = 15'b000_0000_0000_1000;
    localparam OP_XOR = 15'b000_0000_0001_0000;
    localparam OP_OR = 15'b000_0000_0010_0000;
    localparam OP_AND = 15'b000_0000_0100_0000;
    localparam OP_SLL = 15'b000_0000_1000_0000;
    localparam OP_SRL = 15'b000_0001_0000_0000;
    localparam OP_SRA = 15'b000_0010_0000_0000;
    localparam OP_MUL = 15'b000_0100_0000_0000;
    localparam OP_MULH = 15'b000_1000_0000_0000;
    localparam OP_DIV = 15'b001_0000_0000_0000;
    //localparam OP_DIVU = 15'b001_0000_0000_0000;
    localparam OP_REM = 15'b010_0000_0000_0000;
    //localparam OP_REMU = 15'b100_0000_0000_0000;
    assign O_word_op_mask = (opcode == 7'b0011011) || (opcode == 7'b0111011);
    assign O_alu_op_sext[1] = MUL | MULH | MULHSU | DIV | REM | MULW | DIVW | REMW;
    assign O_alu_op_sext[0] = MUL | MULH | DIV | REM | MULW | DIVW | REMW;
    wire add_flag;
    wire ld_flag;
    assign ld_flag = (opcode == 7'b0000011);
    assign add_flag = (typeU | typeB | typeS | ld_flag | JAL | JALR | ADDI | ADDIW | ADD | ADDW);
    wire sub_flag;
    assign sub_flag = SUB | SUBW;
    wire slt_flag;
    assign slt_flag = SLTI | SLT;
    wire sltu_flag;
    assign sltu_flag = SLTIU | SLTU;
    wire xor_flag;
    assign xor_flag = XORI | XOR;
    wire or_flag;
    assign or_flag = ORI | OR;
    wire and_flag;
    assign and_flag = ANDI | AND;
    wire sll_flag;
    assign sll_flag = SLLI | SLL | SLLIW | SLLW;
    wire srl_flag;
    assign srl_flag = SRLI | SRL | SRLIW | SRLW;
    wire sra_flag;
    assign sra_flag = SRAI | SRA | SRAIW | SRAW;
    wire mul_flag;
    assign mul_flag = MUL | MULW;
    wire mulh_flag;
    assign mulh_flag = MULH | MULHSU | MULHU;
    wire div_flag;
    assign div_flag = DIV | DIVU | DIVW | DIVUW;
    wire rem_flag;
    assign rem_flag = REM | REMU | REMW | REMUW;
    assign O_alu_op_sel = (OP_ADD & {15{add_flag}})
    			| (OP_SUB & {15{sub_flag}})
    			| (OP_SLT & {15{slt_flag}})
    			| (OP_SLTU & {15{sltu_flag}})
    			| (OP_XOR & {15{xor_flag}})
    			| (OP_OR & {15{or_flag}})
    			| (OP_AND & {15{and_flag}})
    			| (OP_SLL & {15{sll_flag}})
    			| (OP_SRL & {15{srl_flag}})
    			| (OP_SRA & {15{sra_flag}})
    			| (OP_MUL & {15{mul_flag}})
    			| (OP_MULH & {15{mulh_flag}})
    			| (OP_DIV & {15{div_flag}})
    			| (OP_REM & {15{rem_flag}});
    // op_num1
    localparam OP1_RS1 = 3'd1;
    localparam OP1_PC = 3'd2;
    localparam OP1_ZERO = 3'd4;
    wire rs1_flag, pc_flag, zero_flag;
    assign rs1_flag = typeR | typeI | typeS;
    assign pc_flag = typeB | typeJ | AUIPC;
    assign zero_flag = LUI;
    assign O_opnum1_sel = OP1_RS1 & {3{rs1_flag}}
                        | OP1_PC & {3{pc_flag}}
                        | OP1_ZERO & {3{zero_flag}};
    // op_num2
    localparam OP2_RS2 = 2'd1;
    localparam OP2_IMM = 2'd2;
    wire rs2_flag, imm_flag;
    assign rs2_flag = typeR;
    assign imm_flag = typeI | typeS | typeB | typeJ | typeU;
    assign O_opnum2_sel = OP2_RS2 & {2{rs2_flag}}
                        | OP2_IMM & {2{imm_flag}};
    // ebreak signal gen
    //always @(posedge I_sys_clk)
    //	if ((I_inst == 32'h00100073) && !I_rst)
    //	    sim_end();
    //assign O_sim_end = (I_inst == 32'h00100073) ? 1:0;
endmodule
