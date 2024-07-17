module ysyx_23060077_Icache_reg#(
  N           = 4   ,
  BLOCK_SIZE  = 128 , 
  BLOCK_NUM   = 16
) (
	input                       clock ,
	input                       reset ,
  input                       wen   ,
  input     [BLOCK_SIZE-1:0]  din   ,
  input     [N-1:0]           addr  ,
  output    [BLOCK_SIZE-1:0]  dout  
);

genvar i;
wire                    icache_reg_wen [BLOCK_NUM-1:0];
wire  [BLOCK_SIZE-1:0]  icache_reg [BLOCK_NUM-1:0];
assign dout = icache_reg[addr];
generate
  for(i=0; i<BLOCK_NUM; i++)begin
    assign icache_reg_wen[i] = wen & (addr == i);
    ysyx_23060077_dff#(
			.WIDTH      (BLOCK_SIZE), 
			.RESET_VAL  ('d0)
    )icache_reg_dff(
      .clock  ( clock             ),
      .reset  ( 1'b0              ),
      .wen    ( icache_reg_wen[i] ),
      .din    ( din               ),
      .dout   ( icache_reg[i]     )
    );
  end
endgenerate

endmodule