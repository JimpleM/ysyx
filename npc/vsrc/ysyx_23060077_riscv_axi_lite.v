`include"ysyx_23060077_riscv_axi_define.v"

module ysyx_23060077_riscv_axi_lite(
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
    input   [`AXI_STRB_WIDTH-1:0]       cpu_w_strb_i
);

wire                                axi_aw_ready_i;
wire                                axi_aw_valid_o;
wire [`AXI_PORT_WIDTH-1:0]          axi_aw_port_o;
wire [`AXI_ADDR_WIDTH-1:0]          axi_aw_addr_o;

wire                                axi_w_ready_i;
wire                                axi_w_valid_o;
wire [`AXI_STRB_WIDTH-1:0]          axi_w_strb_o;
wire [`AXI_DATA_WIDTH-1:0]          axi_w_data_o;

wire [`AXI_RESP_WIDTH-1:0]          axi_b_resp_i;
wire                                axi_b_valid_i;
wire                                axi_b_ready_o;

wire                                axi_ar_ready_i;
wire                                axi_ar_valid_o;
wire [`AXI_PORT_WIDTH-1:0]          axi_ar_port_o;
wire [`AXI_ADDR_WIDTH-1:0]          axi_ar_addr_o;

wire                                axi_r_ready_o;
wire                                axi_r_valid_i;
wire [`AXI_RESP_WIDTH-1:0]          axi_r_resp_i;
wire [`AXI_DATA_WIDTH-1:0]          axi_r_data_i;


ysyx_23060077_riscv_axi u_ysyx_23060077_riscv_axi (
    .aclk                   ( aclk           ),
    .areset_n               ( areset_n       ),

    .cpu_r_valid_i          ( cpu_r_valid_i  ),
    .cpu_r_addr_i           ( cpu_r_addr_i   ),
    .cpu_r_ready_o          ( cpu_r_ready_o  ),
    .cpu_r_data_o           ( cpu_r_data_o   ),

    .cpu_w_valid_i          ( cpu_w_valid_i  ),
    .cpu_w_addr_i           ( cpu_w_addr_i   ),
    .cpu_w_data_i           ( cpu_w_data_i   ),
    .cpu_w_strb_i           ( cpu_w_strb_i   ),
    .cpu_w_ready_o          ( cpu_w_ready_o  ),

    .axi_aw_ready_i         ( axi_aw_ready_i ),
    .axi_aw_valid_o         ( axi_aw_valid_o ),
    .axi_aw_port_o          ( axi_aw_port_o  ),
    .axi_aw_addr_o          ( axi_aw_addr_o  ),

    .axi_w_ready_i          ( axi_w_ready_i  ),
    .axi_w_valid_o          ( axi_w_valid_o  ),
    .axi_w_strb_o           ( axi_w_strb_o   ),
    .axi_w_data_o           ( axi_w_data_o   ),

    .axi_b_resp_i           ( axi_b_resp_i   ),
    .axi_b_valid_i          ( axi_b_valid_i  ),
    .axi_b_ready_o          ( axi_b_ready_o  ),

    .axi_ar_ready_i         ( axi_ar_ready_i ),
    .axi_ar_valid_o         ( axi_ar_valid_o ),
    .axi_ar_port_o          ( axi_ar_port_o  ),
    .axi_ar_addr_o          ( axi_ar_addr_o  ),

    .axi_r_ready_o          ( axi_r_ready_o  ),
    .axi_r_valid_i          ( axi_r_valid_i  ),
    .axi_r_resp_i           ( axi_r_resp_i   ),
    .axi_r_data_i           ( axi_r_data_i   )
);

ysyx_23060077_riscv_axi_sram u_ysyx_23060077_riscv_axi_sram(
    .aclk                     ( aclk           ),
    .areset_n                 ( areset_n       ),

    .axi_aw_ready_o           ( axi_aw_ready_i ),
    .axi_aw_valid_i           ( axi_aw_valid_o ),
    .axi_aw_port_i            ( axi_aw_port_o  ),
    .axi_aw_addr_i            ( axi_aw_addr_o  ),

    .axi_w_ready_o            ( axi_w_ready_i  ),
    .axi_w_valid_i            ( axi_w_valid_o  ),
    .axi_w_strb_i             ( axi_w_strb_o   ),
    .axi_w_data_i             ( axi_w_data_o   ),

    .axi_b_resp_o             ( axi_b_resp_i   ),
    .axi_b_valid_o            ( axi_b_valid_i  ),
    .axi_b_ready_i            ( axi_b_ready_o  ),

    .axi_ar_ready_o           ( axi_ar_ready_i ),
    .axi_ar_valid_i           ( axi_ar_valid_o ),
    .axi_ar_port_i            ( axi_ar_port_o  ),
    .axi_ar_addr_i            ( axi_ar_addr_o  ),
    
    .axi_r_ready_i            ( axi_r_ready_o  ),
    .axi_r_valid_o            ( axi_r_valid_i  ),
    .axi_r_resp_o             ( axi_r_resp_i   ),
    .axi_r_data_o             ( axi_r_data_i   )
);


endmodule