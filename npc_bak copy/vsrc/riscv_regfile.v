module riscv_id_reg (
    input                           clk,

    input                           rs1_en,
    input         [REG_WIDTH-1:0]   rs1_addr,
    output  reg   [DATA_WIDTH-1:0]  rs1_data,

    input                           rs2_en,
    input         [REG_WIDTH-1:0]   rs2_addr,
    output  reg   [DATA_WIDTH-1:0]  rs2_data,

    input                           rd_en,
    input         [REG_WIDTH-1:0]   rd_addr,
    output  reg   [DATA_WIDTH-1:0]  rd_data
);

reg [DATA_WIDTH-1:0] memory [2**(REG_WIDTH)-1:0];

integer i;
initial begin
    for(i=0; i<32; i=i+1)   memory[i] <= 0;
end

// read rs1
always @(posedge clk) begin
    if (rs1_en)begin
        rs1_data <= memory[rs1_addr];
    end 
end

// read rs2
always @(posedge clk) begin
    if (rs2_en)begin
        rs2_data <= memory[rs2_addr];
    end 
end

// write rd
always @(posedge clk) begin
    if (rd_en)begin
        memory[rd_addr] <= rd_data;
    end 
end

endmodule