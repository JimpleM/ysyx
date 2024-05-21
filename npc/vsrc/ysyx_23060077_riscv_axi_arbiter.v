`include"ysyx_23060077_riscv_axi_define.v"

module ysyx_23060077_riscv_axi_arbiter(
    input                               aclk,
    input                               areset_n,

    // IFU Interface
    input                               ifu_r_valid_i,
    input   [`AXI_ADDR_WIDTH-1:0]       ifu_r_addr_i,
    output                              ifu_r_ready_o,
    output  [`AXI_DATA_WIDTH-1:0]       ifu_r_data_o,
    
    // LSU Interface
    input                               lsu_r_valid_i,
    input   [`AXI_ADDR_WIDTH-1:0]       lsu_r_addr_i,
    output                              lsu_r_ready_o,
    output  [`AXI_DATA_WIDTH-1:0]       lsu_r_data_o,

    input                               lsu_w_valid_i,
    input   [`AXI_ADDR_WIDTH-1:0]       lsu_w_addr_i,
    output                              lsu_w_ready_o,
    input   [`AXI_DATA_WIDTH-1:0]       lsu_w_data_i,
    input   [`AXI_STRB_WIDTH-1:0]       lsu_w_strb_i
);


// CPU Interface
wire                                cpu_r_valid_o   ;
wire    [`AXI_ADDR_WIDTH-1:0]       cpu_r_addr_o    ;
wire                                cpu_r_ready_i   ;
wire    [`AXI_DATA_WIDTH-1:0]       cpu_r_data_i    ;

wire                                cpu_w_valid_o   ;
wire    [`AXI_ADDR_WIDTH-1:0]       cpu_w_addr_o    ;
wire                                cpu_w_ready_i   ;
wire    [`AXI_DATA_WIDTH-1:0]       cpu_w_data_o    ;
wire    [`AXI_STRB_WIDTH-1:0]       cpu_w_strb_o    ;


reg [`AXI_ARB_STATE_WIDTH-1:0] arbiter_state;
parameter [`AXI_ARB_STATE_WIDTH-1:0] ARB_IDLE   = 'd0;
parameter [`AXI_ARB_STATE_WIDTH-1:0] ARB_IFU    = 'd1;
parameter [`AXI_ARB_STATE_WIDTH-1:0] ARB_LSU    = 'd2;

assign cpu_r_valid_o    = (arbiter_state == ARB_IFU) ? ifu_r_valid_i : (arbiter_state == ARB_LSU) ? lsu_r_valid_i : 'd0;
assign cpu_r_addr_o     = (arbiter_state == ARB_IFU) ? ifu_r_addr_i  : (arbiter_state == ARB_LSU) ? lsu_r_addr_i  : 'd0;
assign ifu_r_ready_o    = (arbiter_state == ARB_IFU) ? cpu_r_ready_i : 'd0;
assign ifu_r_data_o     = (arbiter_state == ARB_IFU) ? cpu_r_data_i  : 'd0;
assign lsu_r_ready_o    = (arbiter_state == ARB_LSU) ? cpu_r_ready_i : 'd0;
assign lsu_r_data_o     = (arbiter_state == ARB_LSU) ? cpu_r_data_i  : 'd0;

assign cpu_w_valid_o    = (arbiter_state == ARB_LSU) ? lsu_w_valid_i : 'd0;
assign cpu_w_addr_o     = (arbiter_state == ARB_LSU) ? lsu_w_addr_i  : 'd0;
assign cpu_w_data_o     = (arbiter_state == ARB_LSU) ? lsu_w_data_i  : 'd0;
assign cpu_w_strb_o     = (arbiter_state == ARB_LSU) ? lsu_w_strb_i  : 'd0;
assign lsu_w_ready_o    = (arbiter_state == ARB_LSU) ? cpu_w_ready_i : 'd0;

always @(posedge aclk ) begin
    if(!areset_n)begin
        arbiter_state <= ARB_IDLE;
    end
    else begin
        case(arbiter_state)
            ARB_IDLE:begin
                if(ifu_r_valid_i)begin
                    arbiter_state <= ARB_IFU;
                end
                if(lsu_r_valid_i |lsu_w_valid_i)begin
                    arbiter_state <= ARB_LSU;
                end
            end
            ARB_IFU:begin
                if(cpu_r_ready_i)begin
                    if(lsu_r_valid_i | lsu_w_valid_i)begin
                        arbiter_state <= ARB_LSU;
                    end
                    else begin
                        arbiter_state <= ARB_IDLE;
                    end
                end
            end
            ARB_LSU:begin
                if(cpu_r_ready_i | cpu_w_ready_i)begin
                    arbiter_state <= ARB_IDLE;
                end
            end
            default:begin
                arbiter_state <= ARB_IDLE;
            end
                
        endcase
    end
end


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

    .cpu_r_valid_i          ( cpu_r_valid_o  ),
    .cpu_r_addr_i           ( cpu_r_addr_o   ),
    .cpu_r_ready_o          ( cpu_r_ready_i  ),
    .cpu_r_data_o           ( cpu_r_data_i   ),
 
    .cpu_w_valid_i          ( cpu_w_valid_o  ),
    .cpu_w_addr_i           ( cpu_w_addr_o   ),
    .cpu_w_ready_o          ( cpu_w_ready_i  ),
    .cpu_w_data_i           ( cpu_w_data_o   ),
    .cpu_w_strb_i           ( cpu_w_strb_o   ),

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

ysyx_23060077_riscv_axi_sram u_ysyx_23060077_riscv_axi_xbar(
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