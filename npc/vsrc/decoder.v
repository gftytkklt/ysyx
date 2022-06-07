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
import "DPI-C" function void sim_end();
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
    output [2:0] O_funct3,
    //output [6:0] O_funct7,
    output [2:0] O_dnpc_sel,
    output [2:0] O_regin_sel,
    output [2:0] O_opnum1_sel,
    output [1:0] O_opnum2_sel,
    output [14:0] O_alu_op_sel
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
    assign O_funct3 = funct3;
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
    wire LUI;
    assign LUI = (opcode == 7'b0110111);
    wire AUIPC;
    assign AUIPC = (opcode == 7'b0010111);
    wire ADDI;
    assign ADDI = (opcode == 7'b0010011) && (funct3 == 3'b000);
    wire JAL;
    assign JAL = (opcode == 7'b1101111);
    wire JALR;
    assign JALR = (opcode == 7'b1100111) && (funct3 == 3'b000);
    wire SD;
    assign SD = (opcode == 7'b0100011) && (funct3 == 3'b011);
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
    // ctrl signal gen
    // reg wr en
    wire regin_from_mem = (opcode == 7'b0000011);
    // O_regin_sel: 4 for snpc, 2 for memory in, 1 for alu in
    assign O_regin_sel[2] = O_reg_wen & (JAL | JALR);
    assign O_regin_sel[1] = O_reg_wen & regin_from_mem;
    assign O_regin_sel[0] = O_reg_wen & (~(regin_from_mem | JAL | JALR));
    assign O_reg_wen = typeR | typeI | typeU | typeJ;
    assign O_mem_wen = typeS;
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
    assign O_dnpc_sel[2] = JALR;
    assign O_dnpc_sel[1] = JAL | typeB_jr;
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
    localparam OP_DIV = 15'b000_1000_0000_0000;
    localparam OP_DIVU = 15'b001_0000_0000_0000;
    localparam OP_REM = 15'b010_0000_0000_0000;
    localparam OP_REMU = 15'b100_0000_0000_0000;
    wire add_flag;
    assign add_flag = (LUI | AUIPC | JAL | JALR | SD | ADDI);
    assign O_alu_op_sel = (OP_ADD & {15{add_flag}});
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
    always @(posedge I_sys_clk)
    	if ((I_inst == 32'h00100073) && !I_rst)
    	    sim_end();
    //assign O_sim_end = (I_inst == 32'h00100073) ? 1:0;
endmodule
