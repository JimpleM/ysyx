module ysyx_23060077_bpu(
  input       							   									exu_branch      ,
	input       [`YSYX_23060077_DATA_WIDTH-1:0]   adder_pc        ,
	input       [`YSYX_23060077_DATA_WIDTH-1:0]   adder_sum       ,

  input                                         exu_csr_ecall 	,
  input                                         exu_csr_mret 	  ,
	input       [`YSYX_23060077_DATA_WIDTH-1:0]   csr_mtvec       ,
	input       [`YSYX_23060077_DATA_WIDTH-1:0]   csr_mepc        ,

  output      [`YSYX_23060077_DATA_WIDTH-1:0]   jump_pc     	  
);

assign jump_pc = 
exu_csr_mret  ? csr_mepc  :
exu_csr_ecall ? csr_mtvec :
exu_branch    ? adder_pc  : adder_sum;
// ({`YSYX_23060077_DATA_WIDTH{exu_csr_mret}}  & csr_mepc  ) |
// ({`YSYX_23060077_DATA_WIDTH{exu_csr_ecall}} & csr_mtvec ) |
// ({`YSYX_23060077_DATA_WIDTH{exu_branch}}    & adder_pc  ) |
// ({`YSYX_23060077_DATA_WIDTH{~exu_branch}}   & adder_sum );


endmodule