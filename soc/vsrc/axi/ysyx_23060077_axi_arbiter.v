// `include"ysyx_23060077_define.v"

module ysyx_23060077_axi_arbiter(
	input   		                                        aclk            		,
	input   		                                        areset_n        		,

	// IFU Interface
	input   		                                        Icache_r_valid_i		,
	input   		[`YSYX_23060077_AXI_ADDR_WIDTH-1:0]     Icache_r_addr_i 		,
	output  		                                        Icache_r_ready_o		,
	output  		[`YSYX_23060077_DATA_WIDTH-1:0]         Icache_r_data_o 		,
	input   		[8-1:0]                                 Icache_r_len_i  		,
	output  		                                        Icache_r_last_o 		,
	
	// LSU Interface
	input   		                                        lsu_r_valid_i   		,
	input   		[`YSYX_23060077_AXI_ADDR_WIDTH-1:0]     lsu_r_addr_i    		,
	output  		                                        lsu_r_ready_o   		,
	output  		[`YSYX_23060077_DATA_WIDTH-1:0]         lsu_r_data_o    		,
	input   		[3-1:0]                                 lsu_r_size_i    		,
	input   		[8-1:0]                                 lsu_r_len_i     		,
	output  		                                        lsu_r_last_o    		,
	input   		                                        lsu_w_valid_i   		,
	input   		[`YSYX_23060077_AXI_ADDR_WIDTH-1:0]     lsu_w_addr_i    		,
	output  		                                        lsu_w_ready_o   		,
	input   		[`YSYX_23060077_DATA_WIDTH-1:0]         lsu_w_data_i    		,
	input   		[3-1:0]                                 lsu_w_size_i    		,
	input   		[8-1:0]                                 lsu_w_len_i     		,
	output  		                                        lsu_w_last_o    		,

	input   		                                        axi_aw_ready_i  		,
	output  		                                        axi_aw_valid_o  		,
	output  		[`YSYX_23060077_AXI_ADDR_WIDTH-1:0]     axi_aw_addr_o   		,
	output  		[4-1:0]                                 axi_aw_id_o     		,
	output  		[8-1:0]                                 axi_aw_len_o    		,
	output  		[3-1:0]                                 axi_aw_size_o   		,
	output  		[2-1:0]                                 axi_aw_burst_o  		,
	input   		                                        axi_w_ready_i   		,
	output  		                                        axi_w_valid_o   		,
	output  		[`YSYX_23060077_AXI_DATA_WIDTH-1:0]     axi_w_data_o    		,
	output  		[8-1:0]                                 axi_w_strb_o    		,
	output  		                                        axi_w_last_o    		,
	output  		                                        axi_b_ready_o   		,
	input   		                                        axi_b_valid_i   		,
	input   		[2-1:0]                                 axi_b_resp_i    		,
	input   		[4-1:0]                                 axi_b_id_i      		,

	input   		                                        axi_ar_ready_i  		,
	output  		                                        axi_ar_valid_o  		,
	output  		[`YSYX_23060077_AXI_ADDR_WIDTH-1:0]     axi_ar_addr_o   		,
	output  		[4-1:0]                                 axi_ar_id_o     		,
	output  		[8-1:0]                                 axi_ar_len_o    		,
	output  		[3-1:0]                                 axi_ar_size_o   		,
	output  		[2-1:0]                                 axi_ar_burst_o  		,
	output  		                                        axi_r_ready_o   		,
	input   		                                        axi_r_valid_i   		,
	input   		[2-1:0]                                 axi_r_resp_i    		,
	input   		[`YSYX_23060077_AXI_DATA_WIDTH-1:0]     axi_r_data_i    		,
	input   		                                        axi_r_last_i    		,
	input   		[4-1:0]                                 axi_r_id_i      
);

localparam AXI_SIZE_1       = 3'b000;
localparam AXI_SIZE_2       = 3'b001;
localparam AXI_SIZE_4       = 3'b010;
localparam AXI_SIZE_8       = 3'b011;

// CPU Interface
wire                                		    cpu_r_valid_o   ;
wire    [`YSYX_23060077_AXI_ADDR_WIDTH-1:0]     cpu_r_addr_o    ;
wire                                		    cpu_r_ready_i   ;
wire    [`YSYX_23060077_DATA_WIDTH-1:0]         cpu_r_data_i    ;
wire    [3-1:0]       							cpu_r_size_o    ;
wire    [8-1:0]        							cpu_r_len_o     ;
wire                                		    cpu_r_last_i    ;

wire                                		    cpu_w_valid_o   ;
wire    [`YSYX_23060077_AXI_ADDR_WIDTH-1:0]     cpu_w_addr_o    ;
wire                                		    cpu_w_ready_i   ;
wire    [`YSYX_23060077_DATA_WIDTH-1:0]         cpu_w_data_o    ;
wire    [3-1:0]       							cpu_w_size_o    ;
wire    [8-1:0]        							cpu_w_len_o     ;
wire                                		    cpu_w_last_i    ;

localparam AXI_ARB_STATE_WIDTH = 2;
reg [AXI_ARB_STATE_WIDTH-1:0] arbiter_state;
localparam [AXI_ARB_STATE_WIDTH-1:0] ARB_IDLE   = 'd0;
localparam [AXI_ARB_STATE_WIDTH-1:0] ARB_IFU    = 'd1;
localparam [AXI_ARB_STATE_WIDTH-1:0] ARB_LSU    = 'd2;

assign cpu_r_valid_o    = (arbiter_state == ARB_IFU) ? Icache_r_valid_i : (arbiter_state == ARB_LSU) ? lsu_r_valid_i : 'd0;
assign cpu_r_addr_o     = (arbiter_state == ARB_IFU) ? Icache_r_addr_i  : (arbiter_state == ARB_LSU) ? lsu_r_addr_i  : 'd0;
assign cpu_r_size_o     = (arbiter_state == ARB_IFU) ? AXI_SIZE_4       : (arbiter_state == ARB_LSU) ? lsu_r_size_i  : 'd0;
assign cpu_r_len_o      = (arbiter_state == ARB_IFU) ? Icache_r_len_i   : (arbiter_state == ARB_LSU) ? lsu_r_len_i   : 'd0;
assign Icache_r_ready_o = (arbiter_state == ARB_IFU) ? cpu_r_ready_i    : 'd0;
assign Icache_r_data_o  = (arbiter_state == ARB_IFU) ? cpu_r_data_i     : 'd0;
assign Icache_r_last_o  = (arbiter_state == ARB_IFU) ? cpu_r_last_i     : 'd0;
assign lsu_r_ready_o    = (arbiter_state == ARB_LSU) ? cpu_r_ready_i    : 'd0;
assign lsu_r_data_o     = (arbiter_state == ARB_LSU) ? cpu_r_data_i     : 'd0;
assign lsu_r_last_o     = (arbiter_state == ARB_LSU) ? cpu_r_last_i     : 'd0;

assign cpu_w_valid_o    = lsu_w_valid_i ;
assign cpu_w_addr_o     = lsu_w_addr_i  ;
assign cpu_w_data_o     = lsu_w_data_i  ;
assign cpu_w_size_o     = lsu_w_size_i  ;
assign cpu_w_len_o      = lsu_w_len_i   ;
assign lsu_w_ready_o    = cpu_w_ready_i ;
assign lsu_w_last_o     = cpu_w_last_i  ;

always @(posedge aclk ) begin
    if(areset_n)begin
        arbiter_state <= ARB_IDLE;
    end
    else begin
        case(arbiter_state)
            ARB_IDLE:begin
                if(Icache_r_valid_i)begin
                    arbiter_state <= ARB_IFU;
                end
                if(lsu_r_valid_i)begin
                    arbiter_state <= ARB_LSU;
                end
            end
            ARB_IFU:begin
                if(cpu_r_ready_i & cpu_r_last_i)begin
                    // if(lsu_r_valid_i)begin
                    //     arbiter_state <= ARB_LSU;
                    // end
                    // else begin
                        arbiter_state <= ARB_IDLE;
                    // end
                end
            end
            ARB_LSU:begin
                if(cpu_r_ready_i & cpu_r_last_i)begin
                    arbiter_state <= ARB_IDLE;
                end
            end
            default:begin
                arbiter_state <= ARB_IDLE;
            end
                
        endcase
    end
end

wire                                					arb_axi_aw_ready_i;
wire                                					arb_axi_aw_valid_o;
wire    [`YSYX_23060077_AXI_ADDR_WIDTH-1:0]             arb_axi_aw_addr_o ;
wire    [4-1:0]         								arb_axi_aw_id_o   ;
wire    [8-1:0]        									arb_axi_aw_len_o  ;
wire    [3-1:0]       									arb_axi_aw_size_o ;
wire    [2-1:0]      									arb_axi_aw_burst_o;
wire                                					arb_axi_w_ready_i ;
wire                                					arb_axi_w_valid_o ;
wire    [`YSYX_23060077_AXI_DATA_WIDTH-1:0]             arb_axi_w_data_o  ;
wire    [8-1:0]       									arb_axi_w_strb_o  ;
wire                                					arb_axi_w_last_o  ;
wire                                					arb_axi_b_ready_o ;
wire                                					arb_axi_b_valid_i ;
wire    [2-1:0]       									arb_axi_b_resp_i  ;
wire    [4-1:0]         								arb_axi_b_id_i    ;
wire                                					arb_axi_ar_ready_i;
wire                                					arb_axi_ar_valid_o;
wire    [`YSYX_23060077_AXI_ADDR_WIDTH-1:0]             arb_axi_ar_addr_o ;
wire    [4-1:0]         								arb_axi_ar_id_o   ;
wire    [8-1:0]        									arb_axi_ar_len_o  ;
wire    [3-1:0]       									arb_axi_ar_size_o ;
wire    [2-1:0]      									arb_axi_ar_burst_o;
wire                                					arb_axi_r_ready_o ;
wire                                					arb_axi_r_valid_i ;
wire    [2-1:0]       									arb_axi_r_resp_i  ;
wire    [`YSYX_23060077_AXI_DATA_WIDTH-1:0]             arb_axi_r_data_i  ;
wire                                					arb_axi_r_last_i  ;
wire    [4-1:0]         								arb_axi_r_id_i    ;


ysyx_23060077_axi axi_u0 (
    .aclk                   ( aclk              ),
    .areset_n               ( areset_n          ),

    .cpu_r_valid_i          ( cpu_r_valid_o     ),
    .cpu_r_addr_i           ( cpu_r_addr_o      ),
    .cpu_r_ready_o          ( cpu_r_ready_i     ),
    .cpu_r_data_o           ( cpu_r_data_i      ),
    .cpu_r_size_i           ( cpu_r_size_o      ),
    .cpu_r_len_i            ( cpu_r_len_o       ),
    .cpu_r_last_o           ( cpu_r_last_i      ),
 
    .cpu_w_valid_i          ( cpu_w_valid_o     ),
    .cpu_w_addr_i           ( cpu_w_addr_o      ),
    .cpu_w_ready_o          ( cpu_w_ready_i     ),
    .cpu_w_data_i           ( cpu_w_data_o      ),
    .cpu_w_size_i           ( cpu_w_size_o      ),
    .cpu_w_len_i            ( cpu_w_len_o       ),
    .cpu_w_last_o           ( cpu_w_last_i      ),

    .axi_aw_ready_i         ( arb_axi_aw_ready_i    ),
    .axi_aw_valid_o         ( arb_axi_aw_valid_o    ),
    .axi_aw_addr_o          ( arb_axi_aw_addr_o     ),
    .axi_aw_id_o            ( arb_axi_aw_id_o       ),
    .axi_aw_len_o           ( arb_axi_aw_len_o      ),
    .axi_aw_size_o          ( arb_axi_aw_size_o     ),
    .axi_aw_burst_o         ( arb_axi_aw_burst_o    ),
    .axi_w_ready_i          ( arb_axi_w_ready_i     ),
    .axi_w_valid_o          ( arb_axi_w_valid_o     ),
    .axi_w_data_o           ( arb_axi_w_data_o      ),
    .axi_w_strb_o           ( arb_axi_w_strb_o      ),
    .axi_w_last_o           ( arb_axi_w_last_o      ),
    .axi_b_ready_o          ( arb_axi_b_ready_o     ),
    .axi_b_valid_i          ( arb_axi_b_valid_i     ),
    .axi_b_resp_i           ( arb_axi_b_resp_i      ),
    .axi_b_id_i             ( arb_axi_b_id_i        ),
    .axi_ar_ready_i         ( arb_axi_ar_ready_i    ),
    .axi_ar_valid_o         ( arb_axi_ar_valid_o    ),
    .axi_ar_addr_o          ( arb_axi_ar_addr_o     ),
    .axi_ar_id_o            ( arb_axi_ar_id_o       ),
    .axi_ar_len_o           ( arb_axi_ar_len_o      ),
    .axi_ar_size_o          ( arb_axi_ar_size_o     ),
    .axi_ar_burst_o         ( arb_axi_ar_burst_o    ),
    .axi_r_ready_o          ( arb_axi_r_ready_o     ),
    .axi_r_valid_i          ( arb_axi_r_valid_i     ),
    .axi_r_resp_i           ( arb_axi_r_resp_i      ),
    .axi_r_data_i           ( arb_axi_r_data_i      ),
    .axi_r_last_i           ( arb_axi_r_last_i      ),
    .axi_r_id_i             ( arb_axi_r_id_i        )
);

ysyx_23060077_axi_xbar u_ysyx_23060077_axi_xbar(
    .aclk                       ( aclk           ),
    .areset_n                   ( areset_n       ),

    .axi_aw_ready_i             ( axi_aw_ready_i    ),
    .axi_aw_valid_o             ( axi_aw_valid_o    ),
    .axi_aw_addr_o              ( axi_aw_addr_o     ),
    .axi_aw_id_o                ( axi_aw_id_o       ),
    .axi_aw_len_o               ( axi_aw_len_o      ),
    .axi_aw_size_o              ( axi_aw_size_o     ),
    .axi_aw_burst_o             ( axi_aw_burst_o    ),
    .axi_w_ready_i              ( axi_w_ready_i     ),
    .axi_w_valid_o              ( axi_w_valid_o     ),
    .axi_w_data_o               ( axi_w_data_o      ),
    .axi_w_strb_o               ( axi_w_strb_o      ),
    .axi_w_last_o               ( axi_w_last_o      ),
    .axi_b_ready_o              ( axi_b_ready_o     ),
    .axi_b_valid_i              ( axi_b_valid_i     ),
    .axi_b_resp_i               ( axi_b_resp_i      ),
    .axi_b_id_i                 ( axi_b_id_i        ),
    .axi_ar_ready_i             ( axi_ar_ready_i    ),
    .axi_ar_valid_o             ( axi_ar_valid_o    ),
    .axi_ar_addr_o              ( axi_ar_addr_o     ),
    .axi_ar_id_o                ( axi_ar_id_o       ),
    .axi_ar_len_o               ( axi_ar_len_o      ),
    .axi_ar_size_o              ( axi_ar_size_o     ),
    .axi_ar_burst_o             ( axi_ar_burst_o    ),
    .axi_r_ready_o              ( axi_r_ready_o     ),
    .axi_r_valid_i              ( axi_r_valid_i     ),
    .axi_r_resp_i               ( axi_r_resp_i      ),
    .axi_r_data_i               ( axi_r_data_i      ),
    .axi_r_last_i               ( axi_r_last_i      ),
    .axi_r_id_i                 ( axi_r_id_i        ),

    .arb_axi_aw_ready_o         ( arb_axi_aw_ready_i    ),
    .arb_axi_aw_valid_i         ( arb_axi_aw_valid_o    ),
    .arb_axi_aw_addr_i          ( arb_axi_aw_addr_o     ),
    .arb_axi_aw_id_i            ( arb_axi_aw_id_o       ),
    .arb_axi_aw_len_i           ( arb_axi_aw_len_o      ),
    .arb_axi_aw_size_i          ( arb_axi_aw_size_o     ),
    .arb_axi_aw_burst_i         ( arb_axi_aw_burst_o    ),
    .arb_axi_w_ready_o          ( arb_axi_w_ready_i     ),
    .arb_axi_w_valid_i          ( arb_axi_w_valid_o     ),
    .arb_axi_w_data_i           ( arb_axi_w_data_o      ),
    .arb_axi_w_strb_i           ( arb_axi_w_strb_o      ),
    .arb_axi_w_last_i           ( arb_axi_w_last_o      ),
    .arb_axi_b_ready_i          ( arb_axi_b_ready_o     ),
    .arb_axi_b_valid_o          ( arb_axi_b_valid_i     ),
    .arb_axi_b_resp_o           ( arb_axi_b_resp_i      ),
    .arb_axi_b_id_o             ( arb_axi_b_id_i        ),
    .arb_axi_ar_ready_o         ( arb_axi_ar_ready_i    ),
    .arb_axi_ar_valid_i         ( arb_axi_ar_valid_o    ),
    .arb_axi_ar_addr_i          ( arb_axi_ar_addr_o     ),
    .arb_axi_ar_id_i            ( arb_axi_ar_id_o       ),
    .arb_axi_ar_len_i           ( arb_axi_ar_len_o      ),
    .arb_axi_ar_size_i          ( arb_axi_ar_size_o     ),
    .arb_axi_ar_burst_i         ( arb_axi_ar_burst_o    ),
    .arb_axi_r_ready_i          ( arb_axi_r_ready_o     ),
    .arb_axi_r_valid_o          ( arb_axi_r_valid_i     ),
    .arb_axi_r_resp_o           ( arb_axi_r_resp_i      ),
    .arb_axi_r_data_o           ( arb_axi_r_data_i      ),
    .arb_axi_r_last_o           ( arb_axi_r_last_i      ),
    .arb_axi_r_id_o             ( arb_axi_r_id_i        )
);

endmodule