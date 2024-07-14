module ysyx_23060077_adder(
  input       [`YSYX_23060077_DATA_WIDTH-1:0]       a     		    ,
	input       [`YSYX_23060077_DATA_WIDTH-1:0]       b				      ,
  input                                             is_sub 		    ,
  output      [`YSYX_23060077_DATA_WIDTH-1:0]       sum     	    ,
  output                                            zero_flag     ,
  output                                            signed_flag   ,
  output                                            unsigned_flag 
);

wire [`YSYX_23060077_DATA_WIDTH-1:0]  b_comp;
wire carry;
wire overflow;

assign b_comp = (is_sub) ? ~b : b;
assign {carry, sum} = a + b_comp + {{(`YSYX_23060077_DATA_WIDTH-1){1'b0}},is_sub};

wire top_a = a[`YSYX_23060077_DATA_WIDTH-1];
wire top_b = b_comp[`YSYX_23060077_DATA_WIDTH-1];
wire top_s = sum[`YSYX_23060077_DATA_WIDTH-1];
assign overflow = (top_a == top_b) & (top_a ^ top_s);

assign zero_flag      = ~(|sum);
assign signed_flag    = sum[`YSYX_23060077_DATA_WIDTH-1] ^ overflow;
assign unsigned_flag  = ~carry;

endmodule