`include"ysyx_23060077_define.v"
`include"ysyx_23060077_axi_define.v"

module ysyx_23060077_Icache(
    input                           clock               ,
		input                           reset               ,

    input                           ifu_r_valid_i       ,
    input  			[`INST_WIDTH-1:0]   ifu_r_addr_i        ,
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

localparam M = 2;  // b = 2 ^m = 4 块大小
localparam N = 4;  // k = 2 ^n = 16 块数
localparam BLOCK_SIZE   = 8*(2**M);
localparam BLOCK_NUM    = 2**N;
integer i;
// 31    m+n m+n-1   m m-1    0
// +---------+---------+--------+
// |   tag   |  index  | offset |
// +---------+---------+--------+

wire 	[32-1-M-N:0]   	cache_tag			= ifu_r_addr_i[31:M+N];
wire 	[N-1:0]        	cache_index		= ifu_r_addr_i[M+N-1:M];
wire 	[M-1:0]        	cache_offset	= ifu_r_addr_i[M-1:0];

reg 	[BLOCK_SIZE-1:0]	cache_data    [0:BLOCK_NUM-1];

reg 	[32-1-M-N:0]      tag_ram       [0:BLOCK_NUM-1];
reg          [0:0]    	tag_valid_ram	[0:BLOCK_NUM-1];

localparam ICACHE_STATE_WITDH = 3;
reg [ICACHE_STATE_WITDH-1:0] 			icache_state;
localparam [ICACHE_STATE_WITDH-1:0] ICACHE_IDLE   		= 'd0;
localparam [ICACHE_STATE_WITDH-1:0] ICACHE_RD_CACHE   = 'd1;
localparam [ICACHE_STATE_WITDH-1:0] ICACHE_RD_AXI 	  = 'd2;

wire tag_hit = (tag_ram[cache_index] == cache_tag)&(tag_valid_ram[cache_index] == 1'b1) ? 1'b1 : 1'b0;
reg  [`DATA_WIDTH-1:0] 	cache_read_data;


assign Icache_r_len_o 	= 8'd0;

always @(*) begin
	if(reset)begin
		ifu_r_ready_o				= 'd0;
		ifu_r_data_o				= 'd0;
		Icache_r_valid_o		= 'd0;
		Icache_r_addr_o			= 'd0;
		cache_read_data			= 'd0;
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
			ifu_r_data_o			= cache_data[cache_index];
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
			tag_ram[i]									<= 'd0;
			tag_valid_ram[i]						<= 'd0;
			cache_data[i]								<= 'd0;
		end
	end
	else begin
		if(Icache_r_ready_i)begin
			tag_ram[cache_index]				<= cache_tag;
			tag_valid_ram[cache_index]	<= 'd1;
			cache_data[cache_index]			<= Icache_r_data_i;
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
			if(Icache_r_ready_i & Icache_r_last_i)begin
				icache_state	<= ICACHE_IDLE;
			end
		end
		default:begin
			icache_state	<= ICACHE_IDLE;
		end
		endcase
	end
end

endmodule