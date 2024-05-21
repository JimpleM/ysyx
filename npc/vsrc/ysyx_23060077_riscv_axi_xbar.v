`include"ysyx_23060077_riscv_axi_define.v"

module ysyx_23060077_riscv_axi_xbar(
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




ysyx_23060077_riscv_axi_sram u_ysyx_23060077_riscv_axi_sram(
    .aclk                     ( aclk           ),
    .areset_n                 ( areset_n       ),

    .axi_sram_aw_ready_o      ( axi_aw_ready_o ),
    .axi_sram_aw_valid_i      ( axi_aw_valid_i ),
    .axi_sram_aw_port_i       ( axi_aw_port_i  ),
    .axi_sram_aw_addr_i       ( axi_aw_addr_i  ),

    .axi_sram_w_ready_o       ( axi_w_ready_o  ),
    .axi_sram_w_valid_i       ( axi_w_valid_i  ),
    .axi_sram_w_strb_i        ( axi_w_strb_i   ),
    .axi_sram_w_data_i        ( axi_w_data_i   ),

    .axi_sram_b_resp_o        ( axi_b_resp_o   ),
    .axi_sram_b_valid_o       ( axi_b_valid_o  ),
    .axi_sram_b_ready_i       ( axi_b_ready_i  ),

    .axi_sram_ar_ready_o      ( axi_ar_ready_o ),
    .axi_sram_ar_valid_i      ( axi_ar_valid_i ),
    .axi_sram_ar_port_i       ( axi_ar_port_i  ),
    .axi_sram_ar_addr_i       ( axi_ar_addr_i  ),

    .axi_sram_r_ready_i       ( axi_r_ready_i  ),
    .axi_sram_r_valid_o       ( axi_r_valid_o  ),
    .axi_sram_r_resp_o        ( axi_r_resp_o   ),
    .axi_sram_r_data_o        ( axi_r_data_o   )
);


endmodule