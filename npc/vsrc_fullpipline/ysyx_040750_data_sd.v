module ysyx_040750_data_sd(
    input [63:0] I_data_in,
    input [7:0] I_wr_strb,
    output [63:0] O_sd_data
    );
    // assign O_sd_data = I_wr_strb[7] ? I_data_in : I_wr_strb[3] ? {2{I_data_in[31:0]}} : I_wr_strb[1] ? {4{I_data_in[15:0]}} : {8{I_data_in[7:0]}};
    assign O_sd_data = &I_wr_strb[7:0] ? I_data_in : &I_wr_strb[3:0] ? {2{I_data_in[31:0]}} : &I_wr_strb[1:0] ? {4{I_data_in[15:0]}} : {8{I_data_in[7:0]}};
endmodule
