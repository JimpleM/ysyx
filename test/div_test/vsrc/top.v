module top(
  input       clock,
  input       reset,
  input signed [31:0] a,
  input signed [31:0] b,
  output signed [31:0] quotient,
  output signed [31:0] remainder
);
wire [67:0]partial_product[0:16];

ysyx_23060077_div div_u0(
	.clock       		(clock)		,
	.reset       		(reset)	,
  .div_signed 		(1'b1) ,
  .dividend     	(a)			,
	.divisor				(b)     ,
  .flush            (),
  .div_valid      ( div_valid),
  .div_ready      ( ),
  .out_valid      ( ),
  .quotient       ( quotient),
  .remainder      ( remainder)
);
wire div_valid = 1'b1;
wire div_ready;

integer i;
// always @(posedge clk) begin
//   if(a*b == result)begin
    
//     $display("true %d*%d=%d",a,b,result);
//   end
//   else begin
//     $display("false %d*%d=%d",a,b,result);
//     $finish();
//   end
  
// end

endmodule