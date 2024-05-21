`include"ysyx_23060077_riscv_axi_define.v"

module ysyx_23060077_riscv_axi_xbar(
    input                                       aclk,
    input                                       areset_n,
    // 写地址通道
    output    reg                               axi_aw_ready_o,
    input                                       axi_aw_valid_i,
    input           [`AXI_PORT_WIDTH-1:0]       axi_aw_port_i,
    input           [`AXI_ADDR_WIDTH-1:0]       axi_aw_addr_i,
    // 写数据通道
    output    reg                               axi_w_ready_o,
    input                                       axi_w_valid_i,
    input           [`AXI_STRB_WIDTH-1:0]       axi_w_strb_i,
    input           [`AXI_DATA_WIDTH-1:0]       axi_w_data_i,
    // 写应答通道
    output    reg   [`AXI_RESP_WIDTH-1:0]       axi_b_resp_o,
    output    reg                               axi_b_valid_o,
    input                                       axi_b_ready_i,
    // 读地址通道
    output    reg                               axi_ar_ready_o,
    input                                       axi_ar_valid_i,
    input           [`AXI_PORT_WIDTH-1:0]       axi_ar_port_i,
    input           [`AXI_ADDR_WIDTH-1:0]       axi_ar_addr_i,
    // 读数据通道
    input                                       axi_r_ready_i,
    output    reg                               axi_r_valid_o,
    output    reg   [`AXI_RESP_WIDTH-1:0]       axi_r_resp_o,
    output    reg   [`AXI_DATA_WIDTH-1:0]       axi_r_data_o
);

wire                              axi_sram_aw_ready_o   ;
reg                               axi_sram_aw_valid_i   ;
reg   [`AXI_PORT_WIDTH-1:0]       axi_sram_aw_port_i    ;
reg   [`AXI_ADDR_WIDTH-1:0]       axi_sram_aw_addr_i    ;
wire                              axi_sram_w_ready_o    ;
reg                               axi_sram_w_valid_i    ;
reg   [`AXI_STRB_WIDTH-1:0]       axi_sram_w_strb_i     ;
reg   [`AXI_DATA_WIDTH-1:0]       axi_sram_w_data_i     ;
wire  [`AXI_RESP_WIDTH-1:0]       axi_sram_b_resp_o     ;
wire                              axi_sram_b_valid_o    ;
reg                               axi_sram_b_ready_i    ;
wire                              axi_sram_ar_ready_o   ;
reg                               axi_sram_ar_valid_i   ;
reg   [`AXI_PORT_WIDTH-1:0]       axi_sram_ar_port_i    ;
reg   [`AXI_ADDR_WIDTH-1:0]       axi_sram_ar_addr_i    ;
reg                               axi_sram_r_ready_i    ;
wire                              axi_sram_r_valid_o    ;
wire  [`AXI_RESP_WIDTH-1:0]       axi_sram_r_resp_o     ;
wire  [`AXI_DATA_WIDTH-1:0]       axi_sram_r_data_o     ;

wire                              axi_uart_aw_ready_o   ;
reg                               axi_uart_aw_valid_i   ;
reg   [`AXI_PORT_WIDTH-1:0]       axi_uart_aw_port_i    ;
reg   [`AXI_ADDR_WIDTH-1:0]       axi_uart_aw_addr_i    ;
wire                              axi_uart_w_ready_o    ;
reg                               axi_uart_w_valid_i    ;
reg   [`AXI_STRB_WIDTH-1:0]       axi_uart_w_strb_i     ;
reg   [`AXI_DATA_WIDTH-1:0]       axi_uart_w_data_i     ;
wire  [`AXI_RESP_WIDTH-1:0]       axi_uart_b_resp_o     ;
wire                              axi_uart_b_valid_o    ;
reg                               axi_uart_b_ready_i    ;

always @(*) begin
    casez(axi_aw_addr_i)
        `AXI_UART_ADDR:begin
            axi_aw_ready_o      = axi_uart_aw_ready_o   ;
            axi_uart_aw_valid_i = axi_aw_valid_i        ;
            axi_uart_aw_port_i  = axi_aw_port_i         ;
            axi_uart_aw_addr_i  = axi_aw_addr_i         ;
            axi_w_ready_o       = axi_uart_w_ready_o    ;
            axi_uart_w_valid_i  = axi_w_valid_i         ;
            axi_uart_w_strb_i   = axi_w_strb_i          ;
            axi_uart_w_data_i   = axi_w_data_i          ;
            axi_b_resp_o        = axi_uart_b_resp_o     ;
            axi_b_valid_o       = axi_uart_b_valid_o    ;
            axi_uart_b_ready_i  = axi_b_ready_i         ;

            axi_sram_aw_valid_i = 'd0;
            axi_sram_aw_port_i  = 'd0;
            axi_sram_aw_addr_i  = 'd0;
            axi_sram_w_valid_i  = 'd0;
            axi_sram_w_strb_i   = 'd0;
            axi_sram_w_data_i   = 'd0;
            axi_sram_b_ready_i  = 'd0;
        end
        `AXI_SRAM_ADDR:begin
            axi_aw_ready_o      = axi_sram_aw_ready_o   ;
            axi_sram_aw_valid_i = axi_aw_valid_i        ;
            axi_sram_aw_port_i  = axi_aw_port_i         ;
            axi_sram_aw_addr_i  = axi_aw_addr_i         ;
            axi_w_ready_o       = axi_sram_w_ready_o    ;
            axi_sram_w_valid_i  = axi_w_valid_i         ;
            axi_sram_w_strb_i   = axi_w_strb_i          ;
            axi_sram_w_data_i   = axi_w_data_i          ;
            axi_b_resp_o        = axi_sram_b_resp_o     ;
            axi_b_valid_o       = axi_sram_b_valid_o    ;
            axi_sram_b_ready_i  = axi_b_ready_i         ;

            axi_uart_aw_valid_i = 'd0;
            axi_uart_aw_port_i  = 'd0;
            axi_uart_aw_addr_i  = 'd0; 
            axi_uart_w_valid_i  = 'd0;
            axi_uart_w_strb_i   = 'd0;
            axi_uart_w_data_i   = 'd0;   
            axi_uart_b_ready_i  = 'd0;
        end
        default:begin
            axi_aw_ready_o      = axi_sram_aw_ready_o   ;
            axi_sram_aw_valid_i = axi_aw_valid_i        ;
            axi_sram_aw_port_i  = axi_aw_port_i         ;
            axi_sram_aw_addr_i  = axi_aw_addr_i         ;
            axi_w_ready_o       = axi_sram_w_ready_o    ;
            axi_sram_w_valid_i  = axi_w_valid_i         ;
            axi_sram_w_strb_i   = axi_w_strb_i          ;
            axi_sram_w_data_i   = axi_w_data_i          ;
            axi_b_resp_o        = axi_sram_b_resp_o     ;
            axi_b_valid_o       = axi_sram_b_valid_o    ;
            axi_sram_b_ready_i  = axi_b_ready_i         ;

            axi_uart_aw_valid_i = 'd0;
            axi_uart_aw_port_i  = 'd0;
            axi_uart_aw_addr_i  = 'd0; 
            axi_uart_w_valid_i  = 'd0;
            axi_uart_w_strb_i   = 'd0;
            axi_uart_w_data_i   = 'd0;   
            axi_uart_b_ready_i  = 'd0;
            // axi_sram_aw_valid_i = 'd0;
            // axi_sram_aw_port_i  = 'd0;
            // axi_sram_aw_addr_i  = 'd0;
            // axi_sram_w_valid_i  = 'd0;
            // axi_sram_w_strb_i   = 'd0;
            // axi_sram_w_data_i   = 'd0;
            // axi_sram_b_ready_i  = 'd0;

            // axi_uart_aw_valid_i = 'd0;
            // axi_uart_aw_port_i  = 'd0;
            // axi_uart_aw_addr_i  = 'd0; 
            // axi_uart_w_valid_i  = 'd0;
            // axi_uart_w_strb_i   = 'd0;
            // axi_uart_w_data_i   = 'd0;   
            // axi_uart_b_ready_i  = 'd0;

            // axi_aw_ready_o      = 'd0;
            // axi_w_ready_o       = 'd0;
            // axi_b_resp_o        = 'd0;
            // axi_b_valid_o       = 'd0;
        end
    endcase
end

always @(*) begin
    casez(axi_ar_addr_i)
        `AXI_UART_ADDR:begin
            axi_ar_ready_o      = 'd0;
            axi_r_valid_o       = 'd0;
            axi_r_resp_o        = 'd0;
            axi_r_data_o        = 'd0;

            axi_sram_ar_valid_i = 'd0;
            axi_sram_ar_port_i  = 'd0;
            axi_sram_ar_addr_i  = 'd0;
            axi_sram_r_ready_i  = 'd0;
        end
        `AXI_SRAM_ADDR:begin
            axi_ar_ready_o      = axi_sram_ar_ready_o   ;
            axi_sram_ar_valid_i = axi_ar_valid_i        ;
            axi_sram_ar_port_i  = axi_ar_port_i         ;
            axi_sram_ar_addr_i  = axi_ar_addr_i         ;
            axi_sram_r_ready_i  = axi_r_ready_i         ;
            axi_r_valid_o       = axi_sram_r_valid_o    ;
            axi_r_resp_o        = axi_sram_r_resp_o     ;
            axi_r_data_o        = axi_sram_r_data_o     ;

        end
        default:begin
            axi_ar_ready_o      = axi_sram_ar_ready_o   ;
            axi_sram_ar_valid_i = axi_ar_valid_i        ;
            axi_sram_ar_port_i  = axi_ar_port_i         ;
            axi_sram_ar_addr_i  = axi_ar_addr_i         ;
            axi_sram_r_ready_i  = axi_r_ready_i         ;
            axi_r_valid_o       = axi_sram_r_valid_o    ;
            axi_r_resp_o        = axi_sram_r_resp_o     ;
            axi_r_data_o        = axi_sram_r_data_o     ;

            // axi_sram_ar_valid_i = 'd0;
            // axi_sram_ar_port_i  = 'd0;
            // axi_sram_ar_addr_i  = 'd0;
            // axi_sram_r_ready_i  = 'd0;

            // axi_ar_ready_o      = 'd0;
            // axi_r_valid_o       = 'd0;
            // axi_r_resp_o        = 'd0;
            // axi_r_data_o        = 'd0;
        end
    endcase
end



ysyx_23060077_riscv_axi_sram u_ysyx_23060077_riscv_axi_sram(
    .aclk                   ( aclk           ),
    .areset_n               ( areset_n       ),

    .axi_sram_aw_ready_o    ( axi_sram_aw_ready_o ),
    .axi_sram_aw_valid_i    ( axi_sram_aw_valid_i ),
    .axi_sram_aw_port_i     ( axi_sram_aw_port_i  ),
    .axi_sram_aw_addr_i     ( axi_sram_aw_addr_i  ),

    .axi_sram_w_ready_o     ( axi_sram_w_ready_o  ),
    .axi_sram_w_valid_i     ( axi_sram_w_valid_i  ),
    .axi_sram_w_strb_i      ( axi_sram_w_strb_i   ),
    .axi_sram_w_data_i      ( axi_sram_w_data_i   ),

    .axi_sram_b_resp_o      ( axi_sram_b_resp_o   ),
    .axi_sram_b_valid_o     ( axi_sram_b_valid_o  ),
    .axi_sram_b_ready_i     ( axi_sram_b_ready_i  ),

    .axi_sram_ar_ready_o    ( axi_sram_ar_ready_o ),
    .axi_sram_ar_valid_i    ( axi_sram_ar_valid_i ),
    .axi_sram_ar_port_i     ( axi_sram_ar_port_i  ),
    .axi_sram_ar_addr_i     ( axi_sram_ar_addr_i  ),

    .axi_sram_r_ready_i     ( axi_sram_r_ready_i  ),
    .axi_sram_r_valid_o     ( axi_sram_r_valid_o  ),
    .axi_sram_r_resp_o      ( axi_sram_r_resp_o   ),
    .axi_sram_r_data_o      ( axi_sram_r_data_o   )
);

ysyx_23060077_riscv_axi_uart u_ysyx_23060077_riscv_axi_uart(
    .aclk                   ( aclk           ),
    .areset_n               ( areset_n       ),

    .axi_uart_aw_ready_o    ( axi_uart_aw_ready_o),
    .axi_uart_aw_valid_i    ( axi_uart_aw_valid_i),
    .axi_uart_aw_port_i     ( axi_uart_aw_port_i ),
    .axi_uart_aw_addr_i     ( axi_uart_aw_addr_i ),

    .axi_uart_w_ready_o     ( axi_uart_w_ready_o ),
    .axi_uart_w_valid_i     ( axi_uart_w_valid_i ),
    .axi_uart_w_strb_i      ( axi_uart_w_strb_i  ),
    .axi_uart_w_data_i      ( axi_uart_w_data_i  ),

    .axi_uart_b_resp_o      ( axi_uart_b_resp_o  ),
    .axi_uart_b_valid_o     ( axi_uart_b_valid_o ),
    .axi_uart_b_ready_i     ( axi_uart_b_ready_i )
);


endmodule