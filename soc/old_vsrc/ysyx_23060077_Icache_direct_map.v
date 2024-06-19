`include"ysyx_23060077_define.v"
`include"ysyx_23060077_axi_define.v"

module ysyx_23060077_Icache(
	input                           		clock             	,
	input                           		reset             	,

	input                           		ifu_valid_i       	,
	input  			[`INST_WIDTH-1:0]   		ifu_addr_i        	,
	output reg                      		ifu_ready_o       	,      
	output reg 	[`DATA_WIDTH-1:0]   		ifu_data_o        	,  

	input																ifu_fence_i					,

	// ICache Interface
	output reg                      		Icache_r_valid_o  	,
	output reg	[`AXI_ADDR_WIDTH-1:0] 	Icache_r_addr_o   	,
	input                           		Icache_r_ready_i  	,
	input   		[`DATA_WIDTH-1:0]     	Icache_r_data_i   	,
	output  		[`AXI_LEN_WIDTH-1:0]  	Icache_r_len_o    	,
	input                           		Icache_r_last_i     

);

localparam M = 4;  // b = 2 ^m = 16 块大小
localparam N = 4;  // k = 2 ^n = 64 块数
localparam CacheLineSize  = 2**M;	// = 2 ^M = 16 Byte 每一行多少个字节，一行为一个块
localparam BLOCK_SIZE   	= 8*(2**M);	// = 8*2 ^M = 128bit
localparam BLOCK_NUM    	= 2**N;			// 有多少行，目前就一个set
integer i,j;
// 31    m+n m+n-1   m m-1    0
// +---------+---------+--------+
// |   tag   |  index  | offset |
// +---------+---------+--------+

wire 	[32-1-M-N:0]   	cache_tag		= ifu_addr_i[31:M+N];
wire 	[N-1:0]        	cache_index		= ifu_addr_i[M+N-1:M];
wire 	[M-1:0]        	cache_offset	= ifu_addr_i[M-1:0];

reg 	[BLOCK_SIZE-1:0]	cache_data   	[0:BLOCK_NUM-1];

reg 	[32-1-M-N:0]      tag_ram       [0:BLOCK_NUM-1];
reg  		    						tag_valid_ram	[0:BLOCK_NUM-1];

localparam ICACHE_STATE_WITDH = 3;
reg [ICACHE_STATE_WITDH-1:0] 			icache_state;
localparam [ICACHE_STATE_WITDH-1:0] ICACHE_IDLE   		= 'd0;
localparam [ICACHE_STATE_WITDH-1:0] ICACHE_RD_CACHE   = 'd1;
localparam [ICACHE_STATE_WITDH-1:0] ICACHE_RD_AXI 	  = 'd2;
localparam [ICACHE_STATE_WITDH-1:0] ICACHE_FENCE  		= 'd3;

wire tag_hit = (tag_ram[cache_index] == cache_tag & tag_valid_ram[cache_index] == 1'b1);
wire  [32-1:0] 	cache_read_data = (cache_offset == 'h0) ? cache_data[cache_index][0+:32] :
																	(cache_offset == 'h4) ? cache_data[cache_index][32+:32] :
																	(cache_offset == 'h8) ? cache_data[cache_index][64+:32] :
																	(cache_offset == 'hc) ? cache_data[cache_index][96+:32] : 32'd0;
// 
reg  [1:0] data_cnt;

assign Icache_r_len_o 	= 8'd3;

always @(*) begin
	case(icache_state)
		ICACHE_IDLE:begin
			ifu_ready_o			= 'd0;
			ifu_data_o			= 'd0;
			Icache_r_valid_o	= 'd0;
			Icache_r_addr_o		= 'd0;
		end
		ICACHE_RD_CACHE:begin
			ifu_ready_o			= 'd1;
			ifu_data_o			= cache_read_data;
		end
		ICACHE_RD_AXI:begin
			Icache_r_valid_o	= 'd1;
			Icache_r_addr_o		= {ifu_addr_i[31:4],4'd0};

			if(Icache_r_last_i)begin
				ifu_ready_o		= 'd1;
				// ifu_data_o			= cache_read_data;
				case(cache_offset[M-1:2])
					2'd0:ifu_data_o = cache_data[cache_index][0+:32] ;
					2'd1:ifu_data_o = cache_data[cache_index][32+:32];
					2'd2:ifu_data_o = cache_data[cache_index][64+:32];
					2'd3:ifu_data_o = Icache_r_data_i;
				endcase
				// ifu_data_o		= Icache_r_data_i;
			end
		end
		default:begin
			ifu_ready_o			= 'd0;
			ifu_data_o			= 'd0;
			Icache_r_valid_o	= 'd0;
			Icache_r_addr_o		= 'd0;
		end
	endcase
end
always @(posedge clock) begin
	if(reset | ifu_fence_i)begin
		for(i=0; i<BLOCK_NUM; i++)begin
			for(j=0; j<4;j++)begin
				tag_valid_ram[i]				<= 'd0;
			end
		end
	end
	else begin
		if(Icache_r_ready_i)begin
			tag_valid_ram[cache_index]	<= 'd1;
		end
	end
end

always @(posedge clock ) begin
	if(reset)begin	
		data_cnt		<= 'd0;
	end
	else if(Icache_r_ready_i)begin
		data_cnt		<= data_cnt + 1;
	end
	else if(Icache_r_last_i)begin
		data_cnt		<= 'd0;
	end
end

always @(posedge clock) begin
	if(Icache_r_ready_i)begin
		tag_ram[cache_index]									<= cache_tag;
		case(data_cnt) // tag_ram 和 cache_data不需要复位，可以优化3000面积，和data_cnt放一起能节省140面积？？
			2'd0:cache_data[cache_index][0+:32]  <= Icache_r_data_i;
			2'd1:cache_data[cache_index][32+:32] <= Icache_r_data_i;
			2'd2:cache_data[cache_index][64+:32] <= Icache_r_data_i;
			2'd3:cache_data[cache_index][96+:32] <= Icache_r_data_i;
			default : cache_data[cache_index]			<= cache_data[cache_index];
		endcase
	end
end


always @(posedge clock) begin
	if(reset)begin
		icache_state	<= ICACHE_IDLE;
	end
	else begin
		case(icache_state)
		ICACHE_IDLE:begin
			if(ifu_valid_i == 1'b1)begin
				if(tag_hit != 'd0)begin
					icache_state	<= ICACHE_RD_CACHE;
				end
				else begin
					icache_state	<= ICACHE_RD_AXI;
				end
			end
			else if(ifu_fence_i)begin				// fence会比valid早一个周期，后续如果修改电路要考虑这里的问题
				icache_state	<= ICACHE_FENCE;
			end
		end
		ICACHE_RD_CACHE:begin
			if(ifu_ready_o)begin
				icache_state	<= ICACHE_IDLE;
			end
		end
		ICACHE_RD_AXI:begin
			if(Icache_r_last_i)begin
				icache_state	<= ICACHE_IDLE;
			end
		end
		ICACHE_FENCE:begin
			icache_state	<= ICACHE_IDLE;
		end
		default:begin
			icache_state	<= ICACHE_IDLE;
		end
		endcase
	end
end

`ifdef USING_DPI_C
import "DPI-C" function void Icache_access(input bit valid);
import "DPI-C" function void Icache_miss(input bit valid);
always @(posedge clock)begin
  if(icache_state == ICACHE_RD_CACHE)begin
    Icache_access(ifu_ready_o);
  end
	if(icache_state == ICACHE_RD_AXI)begin
    Icache_miss(ifu_ready_o);
  end
end
`endif


endmodule