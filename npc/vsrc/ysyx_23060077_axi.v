`include"ysyx_23060077_define.v"
`include"ysyx_23060077_axi_define.v"


module ysyx_23060077_axi(
    input                               aclk,
    input                               areset_n,

    // CPU Interface
    input                               cpu_r_valid_i,
    input   [`AXI_ADDR_WIDTH-1:0]       cpu_r_addr_i,
    output                              cpu_r_ready_o,
    output  [`AXI_DATA_WIDTH-1:0]       cpu_r_data_o,

    input                               cpu_w_valid_i,
    input   [`AXI_ADDR_WIDTH-1:0]       cpu_w_addr_i,
    output                              cpu_w_ready_o,
    input   [`AXI_DATA_WIDTH-1:0]       cpu_w_data_i,
    input   [`AXI_STRB_WIDTH-1:0]       cpu_w_strb_i,
    
    // 写地址通道
    input                               axi_aw_ready_i,
    output                              axi_aw_valid_o,
    output  [`AXI_PORT_WIDTH-1:0]       axi_aw_port_o,
    output  [`AXI_ADDR_WIDTH-1:0]       axi_aw_addr_o,
    
    // 写数据通道
    input                               axi_w_ready_i,
    output                              axi_w_valid_o,
    output  [`AXI_STRB_WIDTH-1:0]       axi_w_strb_o,
    output  [`AXI_DATA_WIDTH-1:0]       axi_w_data_o,

    // 写应答通道
    input   [`AXI_RESP_WIDTH-1:0]       axi_b_resp_i,
    input                               axi_b_valid_i,
    output                              axi_b_ready_o,
    
    // 读地址通道
    input                               axi_ar_ready_i,
    output                              axi_ar_valid_o,
    output  [`AXI_PORT_WIDTH-1:0]       axi_ar_port_o,
    output  [`AXI_ADDR_WIDTH-1:0]       axi_ar_addr_o,

    // 读数据通道
    output                              axi_r_ready_o,
    input                               axi_r_valid_i,
    input   [`AXI_RESP_WIDTH-1:0]       axi_r_resp_i,
    input   [`AXI_DATA_WIDTH-1:0]       axi_r_data_i
);

reg [5:0] lfsr_out;

reg [5:0] r_delay_cnt = 0;
reg [5:0] w_delay_cnt = 0;

always @(posedge aclk ) begin
    if(!areset_n)begin
        lfsr_out <= 'd1;
    end
    else if(axi_w_state == AXI_W_DELAY | axi_r_state == AXI_R_DELAY)begin
        lfsr_out <= lfsr_out;
    end
    else begin
        lfsr_out <= {lfsr_out[4:0], (lfsr_out[4] ^ lfsr_out[3] ^ lfsr_out[0])};
    end
end


// 写逻辑
reg [`AXI_W_STATE_WIDTH-1:0] axi_w_state;
reg [`AXI_W_STATE_WIDTH-1:0] axi_w_state_nxt;
parameter [`AXI_W_STATE_WIDTH-1:0] AXI_W_IDLE   = 'd0;
parameter [`AXI_W_STATE_WIDTH-1:0] AXI_W_ADDR   = 'd1;
parameter [`AXI_W_STATE_WIDTH-1:0] AXI_W_DATA   = 'd2;
parameter [`AXI_W_STATE_WIDTH-1:0] AXI_W_RESP   = 'd3;
parameter [`AXI_W_STATE_WIDTH-1:0] AXI_W_DELAY  = 'd4;

assign axi_aw_addr_o    = cpu_w_addr_i;
assign axi_aw_port_o    = 'd0;
assign axi_aw_valid_o   = (axi_w_state == AXI_W_ADDR) ? 'b1 : 'b0;

assign axi_w_valid_o    = (axi_w_state == AXI_W_DATA) ? 'b1 : 'b0;
assign axi_w_strb_o     = cpu_w_strb_i;
assign axi_w_data_o     = cpu_w_data_i;

assign axi_b_ready_o    = (axi_w_state == AXI_W_RESP) ? 'b1 : 'b0;

assign cpu_w_ready_o    = axi_b_valid_i;

always @(posedge aclk ) begin
    if(!areset_n)begin
        axi_w_state <= AXI_W_IDLE;
        axi_w_state_nxt <= AXI_W_IDLE;
    end
    else begin
        case(axi_w_state)
            AXI_W_IDLE:begin
                if(cpu_w_valid_i)begin
                    axi_w_state_nxt <= AXI_W_ADDR;
                    axi_w_state     <= AXI_W_DELAY;
                end
            end
            AXI_W_ADDR:begin
                if(axi_aw_valid_o & axi_aw_ready_i)begin
                    axi_w_state_nxt <= AXI_W_DATA;
                    axi_w_state     <= AXI_W_DELAY;
                end
            end
            AXI_W_DATA:begin
                if(axi_w_valid_o & axi_w_ready_i)begin
                    axi_w_state_nxt <= AXI_W_RESP;
                    axi_w_state     <= AXI_W_DELAY;
                end
            end
            AXI_W_RESP:begin
                if(axi_b_ready_o & axi_b_valid_i)begin
                    axi_w_state <= AXI_W_IDLE;
                end
            end
            AXI_W_DELAY:begin
                if(w_delay_cnt < lfsr_out)begin
                    w_delay_cnt <= w_delay_cnt + 1;
                end
                else begin
                    w_delay_cnt <= 'd0;

                    axi_w_state    <= axi_w_state_nxt;
                end
            end
            default:begin
                axi_w_state <= AXI_W_IDLE;
            end
        endcase
    end
end


//读逻辑
reg [`AXI_R_STATE_WIDTH-1:0] axi_r_state;
reg [`AXI_R_STATE_WIDTH-1:0] axi_r_state_nxt;
parameter [`AXI_R_STATE_WIDTH-1:0] AXI_R_IDLE   = 'd0;
parameter [`AXI_R_STATE_WIDTH-1:0] AXI_R_ADDR   = 'd1;
parameter [`AXI_R_STATE_WIDTH-1:0] AXI_R_DATA   = 'd2;
parameter [`AXI_R_STATE_WIDTH-1:0] AXI_R_DELAY  = 'd3;

assign axi_ar_addr_o    = cpu_r_addr_i;
assign axi_ar_port_o    = 'd0;
assign axi_ar_valid_o   = (axi_r_state == AXI_R_ADDR) ? 'b1 : 'b0;

assign axi_r_ready_o    = (axi_r_state == AXI_R_DATA) ? 'b1 : 'b0;

assign cpu_r_data_o     = axi_r_data_i;
assign cpu_r_ready_o    = axi_r_valid_i;

always @(posedge aclk ) begin
    if(!areset_n)begin
        axi_r_state <= AXI_R_IDLE;
    end
    else begin
        case(axi_r_state)
            AXI_R_IDLE:begin
                if(cpu_r_valid_i)begin
                    axi_r_state_nxt <= AXI_R_ADDR;
                    axi_r_state     <= AXI_R_DELAY;
                end
            end
            AXI_R_ADDR:begin
                if(axi_ar_valid_o & axi_ar_ready_i)begin
                    axi_r_state_nxt <= AXI_R_DATA;
                    axi_r_state     <= AXI_R_DELAY;
                end
            end
            AXI_R_DATA:begin
                if(axi_r_ready_o & axi_r_valid_i)begin
                    axi_r_state_nxt <= AXI_R_IDLE;
                    axi_r_state     <= AXI_R_DELAY;
                end
            end
            AXI_R_DELAY:begin
                if(r_delay_cnt < lfsr_out)begin
                    r_delay_cnt <= r_delay_cnt + 1;
                end
                else begin
                    r_delay_cnt <= 'd0;

                    axi_r_state <= axi_r_state_nxt;
                end
            end
            default:begin
                axi_r_state <= AXI_R_IDLE;
            end
        endcase
    end
end


endmodule