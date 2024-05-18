`include"ysyx_23060077_riscv_axi_define.v"

module ysyx_23060077_riscv_axi_sram(
    input                               aclk,
    input                               areset_n,
    // 写地址通道
    output                              axi_aw_ready_o,
    input                               axi_aw_valid_i,
    input   [`AXI_PORT_WIDTH-1:0]       axi_aw_port_i,
    input   [`AXI_ADDR_WIDTH-1:0]       axi_aw_addr_i,

    // 写数据通道
    output                              axi_w_ready_o,
    input                               axi_w_valid_i,
    input   [`AXI_STRB_WIDTH-1:0]       axi_w_strb_i,
    input   [`AXI_DATA_WIDTH-1:0]       axi_w_data_i,

    // 写应答通道
    output  [`AXI_RESP_WIDTH-1:0]       axi_b_resp_o,
    output                              axi_b_valid_o,
    input                               axi_b_ready_i,

    // 读地址通道
    output                              axi_ar_ready_o,
    input                               axi_ar_valid_i,
    input   [`AXI_PORT_WIDTH-1:0]       axi_ar_port_i,
    input   [`AXI_ADDR_WIDTH-1:0]       axi_ar_addr_i,

    // 读数据通道
    input                               axi_r_ready_i,
    output                              axi_r_valid_o,
    output  [`AXI_RESP_WIDTH-1:0]       axi_r_resp_o,
    output  [`AXI_DATA_WIDTH-1:0]       axi_r_data_o
);

// 写逻辑
reg [`AXI_W_STATE_WIDTH-1:0] sram_w_state;
parameter [`AXI_W_STATE_WIDTH-1:0] SRAM_W_IDLE   = 'd0;
parameter [`AXI_W_STATE_WIDTH-1:0] SRAM_W_ADDR   = 'd1;
parameter [`AXI_W_STATE_WIDTH-1:0] SRAM_W_DATA   = 'd2;
parameter [`AXI_W_STATE_WIDTH-1:0] SRAM_W_RESP   = 'd3;

reg [`AXI_ADDR_WIDTH-1:0] w_addr;
reg [`AXI_DATA_WIDTH-1:0] w_data;
reg [`AXI_STRB_WIDTH-1:0] w_mask;

reg axi_aw_ready_o_r;
reg axi_w_ready_o_r;
reg axi_b_valid_o_r;

assign axi_aw_ready_o = axi_aw_ready_o_r;
assign axi_w_ready_o  = axi_w_ready_o_r;
assign axi_b_valid_o  = axi_b_valid_o_r;

always @(posedge aclk ) begin
    if(!areset_n)begin
        sram_w_state <= SRAM_W_IDLE;
        w_addr       <= 'd0;
        axi_aw_ready_o_r <= 'd0;
        w_data          <= 'd0;
        w_mask          <= 'd0;
        axi_w_ready_o_r <= 'd0;
        axi_b_valid_o_r <= 'd0;
    end
    else begin
        case(sram_w_state)
            SRAM_W_IDLE:begin
                if(axi_aw_valid_i)begin
                    sram_w_state    <= SRAM_W_ADDR;
                    w_addr          <= axi_aw_addr_i;
                    axi_aw_ready_o_r <= 'd1;
                end
            end
            SRAM_W_ADDR:begin
                axi_aw_ready_o_r <= 'd0;
                if(axi_w_valid_i)begin
                    sram_w_state    <= SRAM_W_DATA;
                    w_data          <= axi_w_data_i;
                    w_mask          <= axi_w_strb_i;
                    axi_w_ready_o_r <= 'd1;
                end
            end
            SRAM_W_DATA:begin
                axi_w_ready_o_r <= 'd0;
                if(axi_b_ready_i)begin
                    sram_w_state    <= SRAM_W_RESP;
                    axi_b_valid_o_r <= 'd1;
                end
            end
            SRAM_W_RESP:begin
                axi_b_valid_o_r <= 'd0;
                sram_w_state    <= SRAM_W_IDLE;
            end
        endcase
    end
end



//读逻辑
reg [`AXI_W_STATE_WIDTH-1:0] sram_r_state;
parameter [`AXI_R_STATE_WIDTH-1:0] SRAM_R_IDLE   = 'd0;
parameter [`AXI_R_STATE_WIDTH-1:0] SRAM_R_ADDR   = 'd1;
parameter [`AXI_R_STATE_WIDTH-1:0] SRAM_R_DATA   = 'd2;

reg [`AXI_ADDR_WIDTH-1:0] r_addr;
wire [`AXI_DATA_WIDTH-1:0] r_data;
assign axi_r_data_o  = r_data;

reg axi_ar_ready_o_r;
reg axi_r_valid_o_r;

assign axi_ar_ready_o = axi_ar_ready_o_r;
assign axi_r_valid_o = axi_r_valid_o_r;


always @(posedge aclk ) begin
    if(!areset_n)begin
        sram_r_state <= SRAM_R_IDLE;
        r_addr  <= 'd0;
        axi_ar_ready_o_r <= 'd0;
        r_data  <= 'd0;
    end
    else begin
        case(sram_r_state)
            SRAM_R_IDLE:begin
                if(axi_ar_valid_i)begin
                    sram_r_state <= SRAM_R_ADDR;
                    r_addr  <= axi_ar_addr_i;
                    axi_ar_ready_o_r <= 'd1;
                end
            end
            SRAM_R_ADDR:begin
                axi_ar_ready_o_r <= 'd0;
                if(axi_r_ready_i)begin
                    axi_w_state <= SRAM_R_DATA;
                    axi_r_valid_o_r <= 'd1;
                end
            end
            SRAM_R_DATA:begin
                sram_r_state <= SRAM_R_IDLE;
                axi_r_valid_o_r <= 'd0;
            end
        endcase
    end
end

import "DPI-C" function void riscv_pmem_read(input int raddr, output int rdata, input ren);
import "DPI-C" function void riscv_pmem_write(input int waddr, input int wdata,  input int wmask, input wen);

always @(*)begin
    riscv_pmem_read(r_addr,r_data,axi_ar_ready_o_r);
    riscv_pmem_write(w_addr,w_data,w_mask,axi_w_ready_o_r);
end

endmodule
