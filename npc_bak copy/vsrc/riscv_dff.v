// 触发器模板
module ysyx_23060077_riscv_dff #(
  WIDTH = 1, 
  RESET_VAL = 0
) (
  input clk,
  input rst,
  input wen,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout
  
);
  always @(posedge clk) begin
    if (rst) dout <= RESET_VAL;
    else if (wen) dout <= din;
  end
endmodule
