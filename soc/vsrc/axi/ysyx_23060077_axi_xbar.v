// `include"ysyx_23060077_define.v"
module ysyx_23060077_axi_xbar(
	input  	                            							aclk								,
	input  	                            							areset_n						,	

	input  	                            							axi_aw_ready_i  		,
	output 	reg                         							axi_aw_valid_o  		,
	output 	reg [`YSYX_23060077_AXI_ADDR_WIDTH-1:0]   axi_aw_addr_o   		,
	output 	reg [4-1:0]     													axi_aw_id_o     		,
	output 	reg [8-1:0]    														axi_aw_len_o    		,
	output 	reg [3-1:0]   														axi_aw_size_o   		,
	output 	reg [2-1:0]  															axi_aw_burst_o  		,
	input  	                            							axi_w_ready_i   		,
	output 	reg                         							axi_w_valid_o   		,
	output 	reg [`YSYX_23060077_AXI_DATA_WIDTH-1:0]   axi_w_data_o    		,
	output 	reg [8-1:0]   														axi_w_strb_o    		,
	output 	reg                         							axi_w_last_o    		,
	output 	reg                         							axi_b_ready_o   		,
	input  	                            							axi_b_valid_i   		,
	input  	 		[2-1:0]   														axi_b_resp_i    		,
	input  	 		[4-1:0]     													axi_b_id_i      		,
	input  	                            							axi_ar_ready_i  		,
	output 	reg                         							axi_ar_valid_o  		,
	output 	reg [`YSYX_23060077_AXI_ADDR_WIDTH-1:0]   axi_ar_addr_o   		,
	output 	reg [4-1:0]     													axi_ar_id_o     		,
	output 	reg [8-1:0]    														axi_ar_len_o    		,
	output 	reg [3-1:0]   														axi_ar_size_o   		,
	output 	reg [2-1:0]  															axi_ar_burst_o  		,
	output 	reg                        								axi_r_ready_o   		,
	input  	                            							axi_r_valid_i   		,
	input  	 		[2-1:0]   														axi_r_resp_i    		,
	input  	 		[`YSYX_23060077_AXI_DATA_WIDTH-1:0]   axi_r_data_i    		,
	input  	 		                        							axi_r_last_i    		,
	input  	 		[4-1:0]     													axi_r_id_i      		,
	output 	reg                         							arb_axi_aw_ready_o  ,
	input  	                            							arb_axi_aw_valid_i  ,
	input  	 		[`YSYX_23060077_AXI_ADDR_WIDTH-1:0]   arb_axi_aw_addr_i   ,
	input  	 		[4-1:0]     													arb_axi_aw_id_i     ,
	input  	 		[8-1:0]    														arb_axi_aw_len_i    ,
	input  	 		[3-1:0]   														arb_axi_aw_size_i   ,
	input  	 		[2-1:0]  															arb_axi_aw_burst_i  ,
	output 	reg                         							arb_axi_w_ready_o   ,
	input  	                            							arb_axi_w_valid_i   ,
	input  	 		[`YSYX_23060077_AXI_DATA_WIDTH-1:0]   arb_axi_w_data_i    ,
	input  	 		[8-1:0]   														arb_axi_w_strb_i    ,
	input  	                            							arb_axi_w_last_i    ,
	input  	                            							arb_axi_b_ready_i   ,
	output 	reg                         							arb_axi_b_valid_o   ,
	output 	reg [2-1:0]   														arb_axi_b_resp_o    ,
	output 	reg [4-1:0]     													arb_axi_b_id_o      ,
	output 	reg                         							arb_axi_ar_ready_o  ,
	input  	                            							arb_axi_ar_valid_i  ,
	input  	 		[`YSYX_23060077_AXI_ADDR_WIDTH-1:0]   arb_axi_ar_addr_i   ,
	input  	 		[4-1:0]     													arb_axi_ar_id_i     ,
	input  	 		[8-1:0]    														arb_axi_ar_len_i    ,
	input  	 		[3-1:0]   														arb_axi_ar_size_i   ,
	input  	 		[2-1:0]  															arb_axi_ar_burst_i  ,
	input  	                            							arb_axi_r_ready_i   ,
	output 	reg                         							arb_axi_r_valid_o   ,
	output 	reg [2-1:0]   														arb_axi_r_resp_o    ,
	output 	reg [`YSYX_23060077_AXI_DATA_WIDTH-1:0]   arb_axi_r_data_o    ,
	output 	reg                         							arb_axi_r_last_o    ,
	output 	reg [4-1:0]     													arb_axi_r_id_o      
		
);


`define AXI_CLINT_ADDR          32'h0200_????

always @(*) begin
		casez(arb_axi_aw_addr_i)
				// `AXI_CLINT_ADDR:begin
				// 		axi_clint_aw_valid_o    =   arb_axi_aw_valid_i  ;
				// 		axi_clint_aw_addr_o     =   arb_axi_aw_addr_i   ;
				// 		axi_clint_aw_id_o       =   arb_axi_aw_id_i     ;
				// 		axi_clint_aw_len_o      =   arb_axi_aw_len_i    ;
				// 		axi_clint_aw_size_o     =   arb_axi_aw_size_i   ;
				// 		axi_clint_aw_burst_o    =   arb_axi_aw_burst_i  ;
				// 		axi_clint_w_valid_o     =   arb_axi_w_valid_i   ;
				// 		axi_clint_w_data_o      =   arb_axi_w_data_i    ;
				// 		axi_clint_w_strb_o      =   arb_axi_w_strb_i    ;
				// 		axi_clint_w_last_o      =   arb_axi_w_last_i    ;
				// 		axi_clint_b_ready_o     =   arb_axi_b_ready_i   ;

				// 		arb_axi_aw_ready_o      =   axi_clint_aw_ready_i;
				// 		arb_axi_w_ready_o       =   axi_clint_w_ready_i ;
				// 		arb_axi_b_valid_o       =   axi_clint_b_valid_i ;
				// 		arb_axi_b_resp_o        =   axi_clint_b_resp_i  ;
				// 		arb_axi_b_id_o          =   axi_clint_b_id_i    ;

				// 		axi_aw_valid_o          =   'd0;
				// 		axi_aw_addr_o           =   'd0;
				// 		axi_aw_id_o             =   'd0;
				// 		axi_aw_len_o            =   'd0;
				// 		axi_aw_size_o           =   'd0;
				// 		axi_aw_burst_o          =   'd0;
				// 		axi_w_valid_o           =   'd0;
				// 		axi_w_data_o            =   'd0;
				// 		axi_w_strb_o            =   'd0;
				// 		axi_w_last_o            =   'd0;
				// 		axi_b_ready_o           =   'd0;
				// end
				default:begin
						axi_aw_valid_o          =   arb_axi_aw_valid_i ;
						axi_aw_addr_o           =   arb_axi_aw_addr_i  ;
						axi_aw_id_o             =   arb_axi_aw_id_i    ;
						axi_aw_len_o            =   arb_axi_aw_len_i   ;
						axi_aw_size_o           =   arb_axi_aw_size_i  ;
						axi_aw_burst_o          =   arb_axi_aw_burst_i ;
						axi_w_valid_o           =   arb_axi_w_valid_i  ;
						axi_w_data_o            =   arb_axi_w_data_i   ;
						axi_w_strb_o            =   arb_axi_w_strb_i   ;
						axi_w_last_o            =   arb_axi_w_last_i   ;
						axi_b_ready_o           =   arb_axi_b_ready_i  ;

						arb_axi_aw_ready_o      =   axi_aw_ready_i     ;
						arb_axi_w_ready_o       =   axi_w_ready_i      ;
						arb_axi_b_valid_o       =   axi_b_valid_i      ;
						arb_axi_b_resp_o        =   axi_b_resp_i       ;
						arb_axi_b_id_o          =   axi_b_id_i         ;

						axi_clint_aw_valid_o    =   'd0;
						axi_clint_aw_addr_o     =   'd0;
						axi_clint_aw_id_o       =   'd0;
						axi_clint_aw_len_o      =   'd0;
						axi_clint_aw_size_o     =   'd0;
						axi_clint_aw_burst_o    =   'd0;
						axi_clint_w_valid_o     =   'd0;
						axi_clint_w_data_o      =   'd0;
						axi_clint_w_strb_o      =   'd0;
						axi_clint_w_last_o      =   'd0;
						axi_clint_b_ready_o     =   'd0;
				end
		endcase
end

always @(*) begin
		casez(arb_axi_ar_addr_i)
				// `AXI_CLINT_ADDR:begin
				// 		axi_clint_ar_valid_o    =   arb_axi_ar_valid_i  ;
				// 		axi_clint_ar_addr_o     =   arb_axi_ar_addr_i   ;
				// 		axi_clint_ar_id_o       =   arb_axi_ar_id_i     ;
				// 		axi_clint_ar_len_o      =   arb_axi_ar_len_i    ;
				// 		axi_clint_ar_size_o     =   arb_axi_ar_size_i   ;
				// 		axi_clint_ar_burst_o    =   arb_axi_ar_burst_i  ;
				// 		axi_clint_r_ready_o     =   arb_axi_r_ready_i   ;

				// 		arb_axi_ar_ready_o      =   axi_clint_ar_ready_i;
				// 		arb_axi_r_valid_o       =   axi_clint_r_valid_i ;
				// 		arb_axi_r_resp_o        =   axi_clint_r_resp_i  ;
				// 		arb_axi_r_data_o        =   axi_clint_r_data_i  ;
				// 		arb_axi_r_last_o        =   axi_clint_r_last_i  ;
				// 		arb_axi_r_id_o          =   axi_clint_r_id_i    ;

				// 		axi_ar_valid_o          =   'd0;
				// 		axi_ar_addr_o           =   'd0;
				// 		axi_ar_id_o             =   'd0;
				// 		axi_ar_len_o            =   'd0;
				// 		axi_ar_size_o           =   'd0;
				// 		axi_ar_burst_o          =   'd0;
				// 		axi_r_ready_o           =   'd0;
				// end
				default:begin
						axi_ar_valid_o          =   arb_axi_ar_valid_i  ;
						axi_ar_addr_o           =   arb_axi_ar_addr_i   ;
						axi_ar_id_o             =   arb_axi_ar_id_i     ;
						axi_ar_len_o            =   arb_axi_ar_len_i    ;
						axi_ar_size_o           =   arb_axi_ar_size_i   ;
						axi_ar_burst_o          =   arb_axi_ar_burst_i  ;
						axi_r_ready_o           =   arb_axi_r_ready_i   ;

						arb_axi_ar_ready_o      =   axi_ar_ready_i      ;
						arb_axi_r_valid_o       =   axi_r_valid_i       ;
						arb_axi_r_resp_o        =   axi_r_resp_i        ;
						arb_axi_r_data_o        =   axi_r_data_i        ;
						arb_axi_r_last_o        =   axi_r_last_i        ;
						arb_axi_r_id_o          =   axi_r_id_i          ;

						axi_clint_ar_valid_o    =   'd0;
						axi_clint_ar_addr_o     =   'd0;
						axi_clint_ar_id_o       =   'd0;
						axi_clint_ar_len_o      =   'd0;
						axi_clint_ar_size_o     =   'd0;
						axi_clint_ar_burst_o    =   'd0;
						axi_clint_r_ready_o     =   'd0;
				end
		endcase
end

wire                             axi_clint_aw_ready_i   ;
reg                              axi_clint_aw_valid_o   ;
reg  [`YSYX_23060077_AXI_ADDR_WIDTH-1:0]       axi_clint_aw_addr_o    ;
reg  [4-1:0]         axi_clint_aw_id_o      ;
reg  [8-1:0]        axi_clint_aw_len_o     ;
reg  [3-1:0]       axi_clint_aw_size_o    ;
reg  [2-1:0]      axi_clint_aw_burst_o   ;
wire                             axi_clint_w_ready_i    ;
reg                              axi_clint_w_valid_o    ;
reg  [`YSYX_23060077_AXI_DATA_WIDTH-1:0]       axi_clint_w_data_o     ;
reg  [8-1:0]       axi_clint_w_strb_o     ;
reg                              axi_clint_w_last_o     ;
reg                              axi_clint_b_ready_o    ;
wire                             axi_clint_b_valid_i    ;
wire [2-1:0]       axi_clint_b_resp_i     ;
wire [4-1:0]         axi_clint_b_id_i       ;
wire                             axi_clint_ar_ready_i   ;
reg                              axi_clint_ar_valid_o   ;
reg  [`YSYX_23060077_AXI_ADDR_WIDTH-1:0]       axi_clint_ar_addr_o    ;
reg  [4-1:0]         axi_clint_ar_id_o      ;
reg  [8-1:0]        axi_clint_ar_len_o     ;
reg  [3-1:0]       axi_clint_ar_size_o    ;
reg  [2-1:0]      axi_clint_ar_burst_o   ;
reg                              axi_clint_r_ready_o    ;
wire                             axi_clint_r_valid_i    ;
wire [2-1:0]       axi_clint_r_resp_i     ;
wire [`YSYX_23060077_AXI_DATA_WIDTH-1:0]       axi_clint_r_data_i     ;
wire                             axi_clint_r_last_i     ;
wire [4-1:0]         axi_clint_r_id_i       ;

ysyx_23060077_axi_clint u_ysyx_23060077_axi_clint(
		.aclk                       (aclk                       ),
		.areset_n                   (areset_n                   ),
		.axi_clint_aw_ready_o       (axi_clint_aw_ready_i       ),
		.axi_clint_aw_valid_i       (axi_clint_aw_valid_o       ),
		.axi_clint_aw_addr_i        (axi_clint_aw_addr_o        ),
		.axi_clint_aw_id_i          (axi_clint_aw_id_o          ),
		.axi_clint_aw_len_i         (axi_clint_aw_len_o         ),
		.axi_clint_aw_size_i        (axi_clint_aw_size_o        ),
		.axi_clint_aw_burst_i       (axi_clint_aw_burst_o       ),
		.axi_clint_w_ready_o        (axi_clint_w_ready_i        ),
		.axi_clint_w_valid_i        (axi_clint_w_valid_o        ),
		.axi_clint_w_data_i         (axi_clint_w_data_o         ),
		.axi_clint_w_strb_i         (axi_clint_w_strb_o         ),
		.axi_clint_w_last_i         (axi_clint_w_last_o         ),
		.axi_clint_b_ready_i        (axi_clint_b_ready_o        ),
		.axi_clint_b_valid_o        (axi_clint_b_valid_i        ),
		.axi_clint_b_resp_o         (axi_clint_b_resp_i         ),
		.axi_clint_b_id_o           (axi_clint_b_id_i           ),
		.axi_clint_ar_ready_o       (axi_clint_ar_ready_i       ),
		.axi_clint_ar_valid_i       (axi_clint_ar_valid_o       ),
		.axi_clint_ar_addr_i        (axi_clint_ar_addr_o        ),
		.axi_clint_ar_id_i          (axi_clint_ar_id_o          ),
		.axi_clint_ar_len_i         (axi_clint_ar_len_o         ),
		.axi_clint_ar_size_i        (axi_clint_ar_size_o        ),
		.axi_clint_ar_burst_i       (axi_clint_ar_burst_o       ),
		.axi_clint_r_ready_i        (axi_clint_r_ready_o        ),
		.axi_clint_r_valid_o        (axi_clint_r_valid_i        ),
		.axi_clint_r_resp_o         (axi_clint_r_resp_i         ),
		.axi_clint_r_data_o         (axi_clint_r_data_i         ),
		.axi_clint_r_last_o         (axi_clint_r_last_i         ),
		.axi_clint_r_id_o           (axi_clint_r_id_i           )
);



endmodule