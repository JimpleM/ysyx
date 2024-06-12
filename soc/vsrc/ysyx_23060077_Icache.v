`include"ysyx_23060077_define.v"
`include"ysyx_23060077_axi_define.v"

module ysyx_23060077_Icache(
    input                           clock               ,
		input                           reset               ,

    input                           ifu_r_valid_i       ,
    input  		[`INST_WIDTH-1:0]   	ifu_r_addr_i        ,
    output reg                      ifu_r_ready_o       ,      
    output reg 	[`DATA_WIDTH-1:0]   ifu_r_data_o        ,  


    // ICache Interface
    output reg                      Icache_r_valid_o    ,
    output reg[`AXI_ADDR_WIDTH-1:0] Icache_r_addr_o     ,
    input                           Icache_r_ready_i    ,
    input   [`DATA_WIDTH-1:0]       Icache_r_data_i     ,
    output  [`AXI_LEN_WIDTH-1:0]    Icache_r_len_o      ,
    input                           Icache_r_last_i     

);

localparam M = 4;  // b = 2 ^m = 4 块大小
localparam N = 4;  // k = 2 ^n = 16 块数
localparam BLOCK_SIZE   = 8*(2**M);
localparam BLOCK_NUM    = 2**N;
localparam TAG_SIZE     = BLOCK_SIZE/32;
integer i,j;
// 31    m+n m+n-1   m m-1    0
// +---------+---------+--------+
// |   tag   |  index  | offset |
// +---------+---------+--------+

wire 	[32-1-M-N:0]   	cache_tag			= ifu_r_addr_i[31:M+N];
wire 	[N-1:0]        	cache_index		= ifu_r_addr_i[M+N-1:M];
wire 	[M-1:0]        	cache_offset	= ifu_r_addr_i[M-1:0];

reg 	[BLOCK_SIZE-1:0]	cache_data   	[0:BLOCK_NUM-1];

reg 	[32-1-M-N:0]      tag_ram       [0:BLOCK_NUM-1][0:TAG_SIZE-1];
reg  		    						tag_valid_ram	[0:BLOCK_NUM-1][0:TAG_SIZE-1];

localparam ICACHE_STATE_WITDH = 3;
reg [ICACHE_STATE_WITDH-1:0] 			icache_state;
localparam [ICACHE_STATE_WITDH-1:0] ICACHE_IDLE   		= 'd0;
localparam [ICACHE_STATE_WITDH-1:0] ICACHE_RD_CACHE   = 'd1;
localparam [ICACHE_STATE_WITDH-1:0] ICACHE_RD_AXI 	  = 'd2;

// wire [TAG_SIZE-1:0] tag_hit = 
// {	(tag_ram[cache_index][2'd0] == cache_tag & tag_valid_ram[cache_index][2'd0] == 1'b1),
// 	(tag_ram[cache_index][2'd1] == cache_tag & tag_valid_ram[cache_index][2'd1] == 1'b1),
// 	(tag_ram[cache_index][2'd2] == cache_tag & tag_valid_ram[cache_index][2'd2] == 1'b1),
// 	(tag_ram[cache_index][2'd3] == cache_tag & tag_valid_ram[cache_index][2'd3] == 1'b1)	};
wire tag_hit = (tag_ram[cache_index][pos] == cache_tag & tag_valid_ram[cache_index][pos] == 1'b1);
wire  [32-1:0] 	cache_read_data = (cache_offset == 'h0) ? cache_data[cache_index][0+:32] :
																	(cache_offset == 'h4) ? cache_data[cache_index][32+:32] :
																	(cache_offset == 'h8) ? cache_data[cache_index][64+:32] :
																	(cache_offset == 'hc) ? cache_data[cache_index][96+:32] : 32'd0;
// 
wire [1:0] pos = cache_offset[M-1:2];

assign Icache_r_len_o 	= 8'd0;

always @(*) begin
	if(reset)begin
		ifu_r_ready_o				= 'd0;
		ifu_r_data_o				= 'd0;
		Icache_r_valid_o		= 'd0;
		Icache_r_addr_o			= 'd0;
	end
	else begin
		case(icache_state)
		ICACHE_IDLE:begin
			ifu_r_ready_o			= 'd0;
			ifu_r_data_o			= 'd0;
			Icache_r_valid_o	= 'd0;
			Icache_r_addr_o		= 'd0;
		end
		ICACHE_RD_CACHE:begin
			ifu_r_ready_o			= 'd1;
			ifu_r_data_o			= cache_read_data;
		end
		ICACHE_RD_AXI:begin
			Icache_r_valid_o	= 'd1;
			Icache_r_addr_o		= ifu_r_addr_i;

			if(Icache_r_last_i)begin
				ifu_r_ready_o		= 'd1;
				ifu_r_data_o		= Icache_r_data_i;
			end
		end
		default:begin
			ifu_r_ready_o			= 'd0;
			ifu_r_data_o			= 'd0;
			Icache_r_valid_o	= 'd0;
			Icache_r_addr_o		= 'd0;
		end
		endcase
	end
end
always @(posedge clock) begin
	if(reset)begin
		for(i=0; i<BLOCK_NUM; i++)begin
			for(j=0; j<4;j++)begin
				tag_ram[i][j]							<= 'd0;
				tag_valid_ram[i][j]				<= 'd0;
			end
			cache_data[i]								<= 'd0;
		end
	end
	else begin
		if(Icache_r_ready_i)begin
			tag_ram[cache_index][pos]				<= cache_tag;
			tag_valid_ram[cache_index][pos]	<= 'd1;
			case(cache_offset)
				4'h0:cache_data[cache_index][0+:32]  <= Icache_r_data_i;
				4'h4:cache_data[cache_index][32+:32] <= Icache_r_data_i;
				4'h8:cache_data[cache_index][64+:32] <= Icache_r_data_i;
				4'hc:cache_data[cache_index][96+:32] <= Icache_r_data_i;
				default : cache_data[cache_index]			<= cache_data[cache_index];
			endcase
		end
	end
end

always @(posedge clock) begin
	if(reset)begin
		icache_state	<= ICACHE_IDLE;
	end
	else begin
		case(icache_state)
		ICACHE_IDLE:begin
			if(ifu_r_valid_i == 1'b1)begin
				if(tag_hit != 'd0)begin
					icache_state	<= ICACHE_RD_CACHE;
				end
				else begin
					icache_state	<= ICACHE_RD_AXI;
				end
			end
		end
		ICACHE_RD_CACHE:begin
			if(ifu_r_ready_o)begin
				icache_state	<= ICACHE_IDLE;
			end
		end
		ICACHE_RD_AXI:begin
			if(ifu_r_ready_o & Icache_r_last_i)begin
				icache_state	<= ICACHE_IDLE;
			end
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
    Icache_access(ifu_r_ready_o);
  end
	if(icache_state == ICACHE_RD_AXI)begin
    Icache_miss(ifu_r_ready_o);
  end
end
`endif


endmodule