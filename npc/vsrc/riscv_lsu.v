`include"riscv_define.v"
module riscv_lsu(
    input 	                            clk,
    input 	                            rst_n,    

    input       [`DATA_WIDTH-1:0]       exu_result,

    input  	    [`DATA_WIDTH-1:0]       src2,
    input       [`LSU_OPT_WIDTH-1:0]    lsu_opt,
    input       [2:0]                   funct3,

    output  	  [`DATA_WIDTH-1:0]       lsu_result
);
wire ren;
wire [`DATA_WIDTH-1:0] raddr;
wire [`DATA_WIDTH-1:0] rdata;
wire [`DATA_WIDTH-1:0] waddr;
wire [`DATA_WIDTH-1:0] wdata;
wire [`DATA_WIDTH-1:0] wmask;
wire [`DATA_WIDTH-1:0]  mask;

assign ren = (|lsu_opt);
assign raddr = exu_result;


riscv_mux#(
    .NR_KEY      (5), 
    .KEY_LEN     (`LSU_OPT_WIDTH+3), 
    .DATA_LEN    (`DATA_WIDTH)
)riscv_mux_ls_lsu_opt(
  .key              ({lsu_opt,funct3}),
  .default_out      (0),
  .out              ({lsu_result}),
  .lut({{`LSU_OPT_LOAD,3'b000}, {{(`DATA_WIDTH-8){rdata[7]}}    ,rdata[7:0]},       //lb
        {`LSU_OPT_LOAD,3'b001}, {{(`DATA_WIDTH-16){rdata[15]}}  ,rdata[15:0]},      //lh
        {`LSU_OPT_LOAD,3'b010}, {{(`DATA_WIDTH-32){rdata[31]}}  ,rdata[31:0]},      //lw
        {`LSU_OPT_LOAD,3'b100}, {{(`DATA_WIDTH-8){1'b0}}        ,rdata[7:0]},       //lbu
        {`LSU_OPT_LOAD,3'b101}, {{(`DATA_WIDTH-16){1'b0}}       ,rdata[15:0]}       //lhu
  })
);


riscv_mux#(
    .NR_KEY      (3), 
    .KEY_LEN     (`LSU_OPT_WIDTH+3), 
    .DATA_LEN    (`DATA_WIDTH)
)riscv_mux_ls_wmask(
  .key              ({lsu_opt,funct3}),
  .default_out      (0),
  .out              ({mask}),
  .lut({{`LSU_OPT_STORE,3'b000}, {32'd1},         //sb
        {`LSU_OPT_STORE,3'b001}, {32'd2},         //sh
        {`LSU_OPT_STORE,3'b010}, {32'd4}          //sw
  })
);

riscv_dff #(
  .WIDTH(`DATA_WIDTH*3), 
  .RESET_VAL(0)
)riscv_dff_pc(
    .clk    (clk),
    .rst_n  (rst_n),
    .wen    (1'b1),
    .din    ({exu_result,src2,mask}),
    .dout   ({waddr,wdata,wmask})
  
);



// sim
import "DPI-C" function void riscv_pmem_read(input int raddr, output int rdata, input ren);
import "DPI-C" function void riscv_pmem_write(input int waddr, input int wdata,  input int wmask);

always @(*)begin
    riscv_pmem_read(raddr,rdata,ren);
    riscv_pmem_write(waddr,wdata,wmask);
end

endmodule
