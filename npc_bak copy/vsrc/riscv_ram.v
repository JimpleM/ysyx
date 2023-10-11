module riscv_ram #(
    ADDR_WIDTH = 1, 
    DATA_WIDTH = 1
) (
    input                           clk,
    input                           en,
    input                           wen,
    input         [ADDR_WIDTH-1:0]  addr,
    input         [DATA_WIDTH-1:0]  wdata,
    output  reg   [DATA_WIDTH-1:0]  rdata
);

reg [DATA_WIDTH-1:0] memory [2**(ADDR_WIDTH)-1:0];
// write
always @(posedge clk) begin
    if (en && wen)begin
        memory[addr] <= wdata;
    end 
end
// read
always @(posedge clk) begin
    if (en && !wen)begin
        rdata <= memory[addr];
    end 
end

#initial

endmodule