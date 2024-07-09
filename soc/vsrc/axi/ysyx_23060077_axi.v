// `include"ysyx_23060077_define.v"

module ysyx_23060077_axi(
	input                                           aclk            		,
	input                                           areset_n        		,

	// CPU Interface
	input                                           cpu_r_valid_i   		,
	input       [`YSYX_23060077_AXI_ADDR_WIDTH-1:0] cpu_r_addr_i    		,
	output                                          cpu_r_ready_o   		,
	output      [`YSYX_23060077_DATA_WIDTH-1:0]     cpu_r_data_o    		,
	input       [3-1:0]                             cpu_r_size_i    		,
	input       [8-1:0]                             cpu_r_len_i     		,
	output                                          cpu_r_last_o    		,

	input                                           cpu_w_valid_i   		,
	input       [`YSYX_23060077_AXI_ADDR_WIDTH-1:0] cpu_w_addr_i    		,
	output                                          cpu_w_ready_o   		,
	input       [`YSYX_23060077_DATA_WIDTH-1:0]     cpu_w_data_i    		,
	input       [3-1:0]   cpu_w_size_i    		,
	input       [8-1:0]    cpu_w_len_i     		,
	output                              cpu_w_last_o    		,
	
	input                               axi_aw_ready_i  		,
	output                              axi_aw_valid_o  		,
	output      [`YSYX_23060077_AXI_ADDR_WIDTH-1:0]   axi_aw_addr_o   		,
	output      [4-1:0]     axi_aw_id_o     		,
	output      [8-1:0]    axi_aw_len_o    		,
	output      [3-1:0]   axi_aw_size_o   		,
	output      [2-1:0]  axi_aw_burst_o  		,
	input                               axi_w_ready_i   		,
	output                              axi_w_valid_o   		,
	output      [`YSYX_23060077_AXI_DATA_WIDTH-1:0]   axi_w_data_o    		,
	output      [8-1:0]   axi_w_strb_o    		,
	output                              axi_w_last_o    		,
	output                              axi_b_ready_o   		,
	input                               axi_b_valid_i   		,
	input       [2-1:0]   axi_b_resp_i    		,
	input       [4-1:0]     axi_b_id_i      		,
	input                               axi_ar_ready_i  		,
	output                              axi_ar_valid_o  		,
	output      [`YSYX_23060077_AXI_ADDR_WIDTH-1:0]   axi_ar_addr_o   		,
	output      [4-1:0]     axi_ar_id_o     		,
	output      [8-1:0]    axi_ar_len_o    		,
	output      [3-1:0]   axi_ar_size_o   		,
	output      [2-1:0]  axi_ar_burst_o  		,
	output                              axi_r_ready_o   		,
	input                               axi_r_valid_i   		,
	input       [2-1:0]   axi_r_resp_i    		,
	input       [`YSYX_23060077_AXI_DATA_WIDTH-1:0]   axi_r_data_i    		,
	input                               axi_r_last_i    		,
	input       [4-1:0]     axi_r_id_i      	
);

localparam AXI_BURST_FIXED  = 2'b00;
localparam AXI_BURST_INCR   = 2'b01;
localparam AXI_BURST_WRAP   = 2'b10;

localparam AXI_SIZE_1       = 3'b000;
localparam AXI_SIZE_2       = 3'b001;
localparam AXI_SIZE_4       = 3'b010;
localparam AXI_SIZE_8       = 3'b011;


localparam  AXI_W_STATE_WIDTH= 2;
// 写逻辑
reg [AXI_W_STATE_WIDTH-1:0] axi_w_state;
localparam [AXI_W_STATE_WIDTH-1:0] AXI_W_IDLE   = 'd0;
localparam [AXI_W_STATE_WIDTH-1:0] AXI_W_ADDR   = 'd1;
localparam [AXI_W_STATE_WIDTH-1:0] AXI_W_DATA   = 'd2;
localparam [AXI_W_STATE_WIDTH-1:0] AXI_W_RESP   = 'd3;

assign axi_aw_valid_o   = (axi_w_state == AXI_W_ADDR) ? 'b1 : 'b0;
assign axi_aw_addr_o    = cpu_w_addr_i;
assign axi_aw_id_o      = 'd0;
assign axi_aw_len_o     = cpu_w_len_i;
assign axi_aw_size_o    = cpu_w_size_i;
assign axi_aw_burst_o   = AXI_BURST_INCR;
// sdram控制器需要aw_valid和w_walid都给到才能工作
assign axi_w_valid_o    = (axi_w_state == AXI_W_ADDR |axi_w_state == AXI_W_DATA) ? 'b1 : 'b0;
// 先这么弄
wire[`YSYX_23060077_AXI_DATA_WIDTH-1:0]  axi_w_data_t = {32'd0,cpu_w_data_i};
assign axi_w_data_o     = axi_w_data_t << {cpu_w_addr_i[2:0],3'd0};
wire [8-1:0] axi_w_strb_t = (cpu_w_size_i == AXI_SIZE_1) ? 8'b0000_0001 : (cpu_w_size_i == AXI_SIZE_2) ? 8'b0000_0011 : 8'b0000_1111;
assign axi_w_strb_o     = axi_w_strb_t << cpu_w_addr_i[2:0];

assign axi_w_last_o     = axi_w_valid_o & axi_w_ready_i & (axi_w_cnt == cpu_w_len_i) ? 1'b1 : 1'b0;
// 新加axi_w_state == AXI_W_DATA 能让从机早一个周期回复写完成
assign axi_b_ready_o    = (axi_w_state == AXI_W_RESP | axi_w_state == AXI_W_DATA) ? 'b1 : 'b0;

assign cpu_w_ready_o    = axi_w_ready_i;
assign cpu_w_last_o     = axi_b_valid_i; //考虑用axi_b_valid_i还是axi_w_last_o，
// 因为lsu要ready和last同步，所以这里用axi_w_last_o


reg [8-1:0]    axi_w_cnt;
always @(posedge aclk ) begin
    if(areset_n)begin
        axi_w_state <= AXI_W_IDLE;
        axi_w_cnt       <= 'd0;
    end
    else begin
        case(axi_w_state)
            AXI_W_IDLE:begin
                axi_w_cnt       <= 'd0;
                if(cpu_w_valid_i)begin
                    axi_w_state     <= AXI_W_ADDR;
                end
            end
            AXI_W_ADDR:begin
                if(axi_aw_ready_i)begin
                    if(axi_w_ready_i)begin
                        axi_w_state     <= AXI_W_RESP;
                    end
                    else begin
                        axi_w_state     <= AXI_W_DATA;
                    end
                end
            end
            AXI_W_DATA:begin
                if(axi_w_ready_i)begin
                    axi_w_cnt       <= axi_w_cnt + 1;
                    if(axi_w_cnt == cpu_w_len_i)begin
                        axi_w_cnt       <= 'd0;
                        axi_w_state     <= AXI_W_RESP;
                    end
                end
            end
            AXI_W_RESP:begin
                if(axi_b_valid_i)begin
                    axi_w_state <= AXI_W_IDLE;
                end
            end
            default:begin
                axi_w_state <= AXI_W_IDLE;
            end
        endcase
    end
end

localparam AXI_R_STATE_WIDTH = 2;
//读逻辑
reg [AXI_R_STATE_WIDTH-1:0] axi_r_state;
localparam [AXI_R_STATE_WIDTH-1:0] AXI_R_IDLE   = 'd0;
localparam [AXI_R_STATE_WIDTH-1:0] AXI_R_ADDR   = 'd1;
localparam [AXI_R_STATE_WIDTH-1:0] AXI_R_DATA   = 'd2;

assign axi_ar_valid_o   = (axi_r_state == AXI_R_ADDR) ? 'b1 : 'b0;
assign axi_ar_addr_o    = cpu_r_addr_i;
assign axi_ar_id_o      = 'd0;
assign axi_ar_len_o     = cpu_r_len_i;
assign axi_ar_size_o    = cpu_r_size_i;
assign axi_ar_burst_o   = AXI_BURST_INCR;

assign axi_r_ready_o    = (axi_r_state == AXI_R_DATA) ? 'b1 : 'b0;

assign cpu_r_ready_o    = axi_r_valid_i;
assign cpu_r_last_o     = axi_r_last_i;
`ifdef USING_DPI_C
assign cpu_r_data_o     = {axi_r_data_i >> {cpu_r_addr_i[2:0],3'd0}}[`YSYX_23060077_DATA_WIDTH-1:0];
`else
assign cpu_r_data_o     = {axi_r_data_i >> {cpu_r_addr_i[2:0],3'd0}};
`endif
     
reg [8-1:0]    axi_r_cnt;
always @(posedge aclk ) begin
    if(areset_n)begin
        axi_r_state <= AXI_R_IDLE;
    end
    else begin
        case(axi_r_state)
            AXI_R_IDLE:begin
                if(cpu_r_valid_i)begin
                    axi_r_state     <= AXI_R_ADDR;
                end
            end
            AXI_R_ADDR:begin
                if(axi_ar_ready_i)begin
                    axi_r_state     <= AXI_R_DATA;
                end
            end
            AXI_R_DATA:begin
                if(axi_r_valid_i & axi_r_last_i)begin
                    axi_r_state     <= AXI_R_IDLE;
                end
            end
            default:begin
                axi_r_state <= AXI_R_IDLE;
            end
        endcase
    end
end

endmodule