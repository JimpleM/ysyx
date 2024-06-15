// 触发器模板
module ysyx_23060077_pipeline #(
  WIDTH = 1, 
  RESET_VAL = 0
) (
  input clock,
  input reset,
  input wen,
  input stall,
  input flush,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout
  
);
initial begin
  dout = RESET_VAL;
end
  always @(posedge clock) begin
    if (reset)begin
      dout <= RESET_VAL;
    end
    else if (wen)begin
      dout <= din;
    end
    else if(flush)begin // flush要在stall前面
      dout <= RESET_VAL;
    end
    else if(stall)begin
      dout <= dout;
    end
    else begin
      dout <= RESET_VAL;
    end
  end
endmodule