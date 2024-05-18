`include"ysyx_23060077_riscv_define.v"
`include"ysyx_23060077_riscv_axi_define.v"


module ysyx_23060077_riscv_axi(
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

// 写逻辑
reg [`AXI_W_STATE_WIDTH-1:0] axi_w_state;
parameter [`AXI_W_STATE_WIDTH-1:0] AXI_W_IDLE   = 'd0;
parameter [`AXI_W_STATE_WIDTH-1:0] AXI_W_ADDR   = 'd1;
parameter [`AXI_W_STATE_WIDTH-1:0] AXI_W_DATA   = 'd2;
parameter [`AXI_W_STATE_WIDTH-1:0] AXI_W_RESP   = 'd3;

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
    end
    else begin
        case(axi_w_state)
            AXI_W_IDLE:begin
                if(cpu_w_valid_i)begin
                    axi_w_state <= AXI_W_ADDR;
                end
            end
            AXI_W_ADDR:begin
                if(axi_aw_valid_o & axi_aw_ready_i)begin
                    axi_w_state <= AXI_W_DATA;
                end
            end
            AXI_W_DATA:begin
                if(axi_w_valid_o & axi_w_ready_i)begin
                    axi_w_state <= AXI_W_RESP;
                end
            end
            AXI_W_RESP:begin
                if(axi_b_ready_o & axi_b_valid_i)begin
                    axi_w_state <= AXI_W_IDLE;
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
parameter [`AXI_R_STATE_WIDTH-1:0] AXI_R_IDLE   = 'd0;
parameter [`AXI_R_STATE_WIDTH-1:0] AXI_R_ADDR   = 'd1;
parameter [`AXI_R_STATE_WIDTH-1:0] AXI_R_DATA   = 'd2;

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
                    axi_r_state <= AXI_R_ADDR;
                end
            end
            AXI_R_ADDR:begin
                if(axi_ar_valid_o & axi_ar_ready_i)begin
                    axi_r_state <= AXI_R_DATA;
                end
            end
            AXI_R_DATA:begin
                if(axi_r_ready_o & axi_r_valid_i)begin
                    axi_r_state <= AXI_R_IDLE;
                end
            end
            default:begin
                axi_r_state <= AXI_R_IDLE;
            end
        endcase
    end
end


endmodule