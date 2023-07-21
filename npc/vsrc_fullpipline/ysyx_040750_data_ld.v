module ysyx_040750_data_ld(
    input [63:0] I_data_in,
    input [8:0] I_rd_strb,
    input [2:0] I_rd_shamt,
    output [63:0] O_load_data
    );
    wire sext_flag;
    reg sext_bit;
    wire [7:0] sext_mask;
    wire [63:0] ld_data;
    assign ld_data = I_data_in >> {I_rd_shamt, 3'b0};
    assign sext_mask = ~I_rd_strb[7:0];
    assign sext_flag = I_rd_strb[8];
    always @(*)
    	if(sext_flag)
    	    case(I_rd_strb[7:0])
    	        //8'hff: sext_bit = I_mem_in[63];
    	        8'h0f: sext_bit = ld_data[31];
    	        8'h03: sext_bit = ld_data[15];
    	        8'h01: sext_bit = ld_data[7];
    	        default: sext_bit = 0;
    	    endcase
    	else
    	    sext_bit = 0;
    assign O_load_data = (ld_data & {{8{I_rd_strb[7]}}, {8{I_rd_strb[6]}}, {8{I_rd_strb[5]}}, {8{I_rd_strb[4]}}, {8{I_rd_strb[3]}}, {8{I_rd_strb[2]}}, {8{I_rd_strb[1]}}, {8{I_rd_strb[0]}}}) | ({64{sext_bit}} & {{8{sext_mask[7]}}, {8{sext_mask[6]}}, {8{sext_mask[5]}}, {8{sext_mask[4]}}, {8{sext_mask[3]}}, {8{sext_mask[2]}}, {8{sext_mask[1]}}, {8{sext_mask[0]}}});
endmodule
