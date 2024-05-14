// 触发器模板
module ysyx_23060077_riscv_dff_stall #(
  WIDTH = 1
) (
  input clk,
  input rst_n,
  input wen,
  input stall,
  input flush,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout
  
);
initial begin
  dout = 'd0;
end
  always @(posedge clk) begin
    if (!rst_n) dout <= 'd0;
    else if (flush) dout <= 'd0;
    else if (stall) dout <= dout;
    else if (wen) dout <= din;
    else dout <= 'd0;
  end
endmodule