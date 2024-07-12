module ysyx_23060077_agu(
  input                                             agu_en 		  ,
  input       [`YSYX_23060077_DATA_WIDTH-1:0]       adder_sum   ,
  output      [`YSYX_23060077_DATA_WIDTH-1:0]       lsu_address     	
);
// 后面这里要进行虚拟地址到物理地址的转换
assign lsu_address = agu_en ? adder_sum : 'd0;

endmodule