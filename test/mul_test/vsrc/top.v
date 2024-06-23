module top(
  input       clk,
  input signed [31:0] a,
  input signed [31:0] b,
  output signed [63:0] result
);
wire [67:0]partial_product[0:16];

ysyx_23060077_wallace wallace_u0(
	.clock       		(clk)		,
	.reset       		(1'b0)	,
  .mul_signed 		(2'b11) ,
  .mul_src1     	(a)			,
	.mul_src2				(b)     ,
  .mul_result     (result)

);

// ysyx_23060077_booth_code u0(
//   .mul_signed 			  (2'b11),
//   .mul_src1     		  (a),
//   .mul_src2				    (b),
//   .partial_product0   (partial_product[0 ]),
//   .partial_product1   (partial_product[1 ]),
//   .partial_product2   (partial_product[2 ]),
//   .partial_product3   (partial_product[3 ]),
//   .partial_product4   (partial_product[4 ]),
//   .partial_product5   (partial_product[5 ]),
//   .partial_product6   (partial_product[6 ]),
//   .partial_product7   (partial_product[7 ]),
//   .partial_product8   (partial_product[8 ]),
//   .partial_product9   (partial_product[9 ]),
//   .partial_product10  (partial_product[10]),
//   .partial_product11  (partial_product[11]),
//   .partial_product12  (partial_product[12]),
//   .partial_product13  (partial_product[13]),
//   .partial_product14  (partial_product[14]),
//   .partial_product15  (partial_product[15]),
//   .partial_product16  (partial_product[16])
// );
// wire signed [67:0] sum = 
// partial_product[0 ]
// +partial_product[1 ]
// +partial_product[2 ]
// +partial_product[3 ]
// +partial_product[4 ]
// +partial_product[5 ]
// +partial_product[6 ]
// +partial_product[7 ]
// +partial_product[8 ]
// +partial_product[9 ]
// +partial_product[10]
// +partial_product[11]
// +partial_product[12]
// +partial_product[13]
// +partial_product[14]
// +partial_product[15]
// +partial_product[16];
// assign result = sum[63:0];
integer i;
always @(posedge clk) begin
  // for(i=0; i<17; i++)begin
  //   $display("%b",partial_product[i]);
  // end
  // $display("a=%b\n%b",a,b);
  if(a*b == result)begin
    
    $display("true %d*%d=%d",a,b,result);
  end
  else begin
    $display("false %d*%d=%d",a,b,result);
    $finish();
  end
  
end

endmodule