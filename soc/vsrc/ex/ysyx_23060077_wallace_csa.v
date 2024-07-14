module ysyx_23060077_wallace_csa(
  input       [2:0]                   in 				          ,
  output                              cout     				    ,
  output                              s     				      
);

wire a = in[2];
wire b = in[1];
wire cin = in[0];
assign s = a ^ b ^ cin;
assign cout = a & b | b & cin | a & cin;

endmodule