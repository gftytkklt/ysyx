module ysyx_040750_axi_crossbar(
    input I_clk,
    input I_rst,
    // to axi bus
    input [63:0] I_axi_rdata,
    input I_axi_rvalid,
    input I_axi_rlast,
    output O_axi_rready,
    output [31:0] O_axi_araddr,
    input I_axi_arready,
    output O_axi_arvalid,
    output [7:0] O_axi_arlen,
    output [2:0] O_axi_arsize,
    output [1:0] O_axi_arburst,
    // ch0
    output [63:0] O_ch0_rdata,
    output O_ch0_rvalid,
    output O_ch0_rlast,
    input I_ch0_rready,
    input [31:0] I_ch0_araddr,
    output O_ch0_arready,
    input I_ch0_arvalid,
    input [7:0] I_ch0_arlen,
    input [2:0] I_ch0_arsize,
    input [1:0] I_ch0_arburst,
    // ch1
    output [63:0] O_ch1_rdata,
    output O_ch1_rvalid,
    output O_ch1_rlast,
    input I_ch1_rready,
    input [31:0] I_ch1_araddr,
    output O_ch1_arready,
    input I_ch1_arvalid,
    input [7:0] I_ch1_arlen,
    input [2:0] I_ch1_arsize,
    input [1:0] I_ch1_arburst
);
    localparam CH0 = 1'b0;
    localparam CH1 = 1'b1;
    localparam IDLE = 'h0;
    localparam CH0_AR = 'h1;
    localparam CH1_AR = 'h2;
    localparam CH0_RD = 'h4;
    localparam CH1_RD = 'h8;
    reg [3:0] current_state, next_state;
    wire req0_only, req1_only, req_both;// current channel req state
    wire resp0, resp1;// channel should be responsed
    wire ch0_arhandshake, ch1_arhandshake;
    wire ch0_last_handshake, ch1_last_handshake;
    // reg ch0_process, ch1_process;
    wire ch0_ar_flag, ch1_ar_flag, ch0_rd_flag, ch1_rd_flag;
    reg priority_flag;
    // FSM
    always @(posedge I_clk)
        if(I_rst)
            current_state <= IDLE;
        else
            current_state <= next_state;
    always @(*) begin
        next_state = IDLE;
        case(current_state)
            IDLE: begin
                if(ch0_arhandshake)
                    next_state = CH0_RD;
                else if(ch1_arhandshake)
                    next_state = CH1_RD;
                else
                    next_state = resp0 ? CH0_AR : resp1 ? CH1_AR : current_state;
            end
            CH0_AR: next_state = ch0_arhandshake ? CH0_RD : current_state;
            CH1_AR: next_state = ch1_arhandshake ? CH1_RD : current_state;
            CH0_RD: next_state = ch0_last_handshake ? IDLE : current_state;
            CH1_RD: next_state = ch1_last_handshake ? IDLE : current_state;
        endcase
    end
    // ar/rd flag
    assign ch0_ar_flag = resp0 | (current_state == CH0_AR);
    assign ch0_rd_flag = (current_state == CH0_RD);
    assign ch1_ar_flag = resp1 | (current_state == CH1_AR);
    assign ch1_rd_flag = (current_state == CH1_RD);
    // req state, imply which channel is requesting memory data
    assign ch0_arhandshake = O_ch0_arready && I_ch0_arvalid;
    assign ch1_arhandshake = O_ch1_arready && I_ch1_arvalid;
    assign req0_only = I_ch0_arvalid && ~I_ch1_arvalid;
    assign req1_only = ~I_ch0_arvalid && I_ch1_arvalid;
    assign req_both = I_ch0_arvalid && I_ch1_arvalid;
    // ar response flag, imply which channel will be responsed at IDLE state
    // if ar handshake, FSM goto RD state, else goto AR state for certain channel
    // assign resp0 = (req0_only || (req_both && (priority_flag == CH0))) && ~(ch0_process || ch1_process);
    // assign resp1 = (req1_only || (req_both && (priority_flag == CH1))) && ~(ch0_process || ch1_process);
    assign resp0 = (req0_only || (req_both && (priority_flag == CH0))) && (current_state == IDLE);
    assign resp1 = (req1_only || (req_both && (priority_flag == CH1))) && (current_state == IDLE);
    // ar channel
    // assign O_ch0_arready = resp0 && I_axi_arready;
    // assign O_ch1_arready = resp1 && I_axi_arready;
    // assign O_axi_arvalid = resp0 ? I_ch0_arvalid : (resp1 ? I_ch1_arvalid : 0);
    // assign O_axi_araddr = resp0 ? I_ch0_araddr : (resp1 ? I_ch1_araddr : 0);
    // assign O_axi_arlen = resp0 ? I_ch0_arlen : (resp1 ? I_ch1_arlen : 0);
    // assign O_axi_arsize = resp0 ? I_ch0_arsize : (resp1 ? I_ch1_arsize : 0);
    // assign O_axi_arburst = resp0 ? I_ch0_arburst : (resp1 ? I_ch1_arburst : 0);
    assign O_ch0_arready = ch0_ar_flag && I_axi_arready;
    assign O_ch1_arready = ch1_ar_flag && I_axi_arready;
    assign O_axi_arvalid = ch0_ar_flag ? I_ch0_arvalid : (ch1_ar_flag ? I_ch1_arvalid : 0);
    assign O_axi_araddr = ch0_ar_flag ? I_ch0_araddr : (ch1_ar_flag ? I_ch1_araddr : 0);
    assign O_axi_arlen = ch0_ar_flag ? I_ch0_arlen : (ch1_ar_flag ? I_ch1_arlen : 0);
    assign O_axi_arsize = ch0_ar_flag ? I_ch0_arsize : (ch1_ar_flag ? I_ch1_arsize : 0);
    assign O_axi_arburst = ch0_ar_flag ? I_ch0_arburst : (ch1_ar_flag ? I_ch1_arburst : 0);
    // r channel
    assign ch0_last_handshake = O_ch0_rvalid && I_ch0_rready && O_ch0_rlast;
    assign ch1_last_handshake = O_ch1_rvalid && I_ch1_rready && O_ch1_rlast;
    assign O_axi_rready = ch0_rd_flag ? I_ch0_rready : (ch1_rd_flag ? I_ch1_rready : 0);
    assign O_ch0_rdata = ch0_rd_flag ? I_axi_rdata : 0;
    assign O_ch0_rvalid = ch0_rd_flag ? I_axi_rvalid : 0;
    assign O_ch0_rlast = ch0_rd_flag ? I_axi_rlast : 0;
    assign O_ch1_rdata = ch1_rd_flag ? I_axi_rdata : 0;
    assign O_ch1_rvalid = ch1_rd_flag ? I_axi_rvalid : 0;
    assign O_ch1_rlast = ch1_rd_flag ? I_axi_rlast : 0;
    // assign O_axi_rready = ch0_process ? I_ch0_rready : (ch1_process ? I_ch1_rready : 0);
    // assign O_ch0_rdata = ch0_process ? I_axi_rdata : 0;
    // assign O_ch0_rvalid = ch0_process ? I_axi_rvalid : 0;
    // assign O_ch0_rlast = ch0_process ? I_axi_rlast : 0;
    // assign O_ch1_rdata = ch1_process ? I_axi_rdata : 0;
    // assign O_ch1_rvalid = ch1_process ? I_axi_rvalid : 0;
    // assign O_ch1_rlast = ch1_process ? I_axi_rlast : 0;
    // always @(posedge I_clk)
    //     if(I_rst)
    //         ch0_process <= 0;
    //     else if(resp0 && ch0_arhandshake)
    //         ch0_process <= 1;
    //     else if(ch0_last_handshake)
    //         ch0_process <= 0;
    //     else
    //         ch0_process <= ch0_process;
    // always @(posedge I_clk)
    //     if(I_rst)
    //         ch1_process <= 0;
    //     else if(resp1 && ch1_arhandshake)
    //         ch1_process <= 1;
    //     else if(ch1_last_handshake)
    //         ch1_process <= 0;
    //     else
    //         ch1_process <= ch1_process;
    // default ch0, change flag when current prior channel is responsed
    always @(posedge I_clk)
        if(I_rst)
            priority_flag <= CH0;
        else if(resp0 && ~priority_flag)
            priority_flag <= CH1;
        else if(resp1 && priority_flag)
            priority_flag <= CH0;
        else
            priority_flag <= priority_flag;
    /*always @(posedge I_clk)
        if(I_rst)
            current_state <= IDLE;
        else
            current_state <= next_state;
    always @(*) begin
        next_state = IDLE;
        case(current_state)
            IDLE: next_state = resp0 ? RESP0 : (resp1 ? RESP1 : IDLE);
            RESP0:
            RESP1:
        endcase
    end*/
    
endmodule
