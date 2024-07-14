`include"ysyx_23060077_define.v"
module ysyx_23060077_ex_alu(
  input       [`YSYX_23060077_ALU_OPT_WIDTH-1:0]    alu_opt             ,
  input       [`YSYX_23060077_DATA_WIDTH-1:0]       alu_a_data          ,
  input       [`YSYX_23060077_DATA_WIDTH-1:0]       alu_b_data          ,

  input       [`YSYX_23060077_DATA_WIDTH-1:0]       adder_sum           ,
  input       [`YSYX_23060077_DATA_WIDTH-1:0]       adder_pc            ,
  input                                             signed_flag         ,
  input                                             unsigned_flag       ,
  output      [`YSYX_23060077_DATA_WIDTH-1:0]       alu_out_data
);



// logic
wire [`YSYX_23060077_DATA_WIDTH-1:0] alu_and = alu_a_data & alu_b_data;
wire [`YSYX_23060077_DATA_WIDTH-1:0] alu_or  = alu_a_data | alu_b_data;
wire [`YSYX_23060077_DATA_WIDTH-1:0] alu_xor = alu_a_data ^ alu_b_data;

// shift
function [`YSYX_23060077_DATA_WIDTH-1:0] reverse_bits;
  input [`YSYX_23060077_DATA_WIDTH-1:0] in;
  integer i;
  begin
    for(i=0; i<`YSYX_23060077_DATA_WIDTH; i=i+1)begin
      reverse_bits[`YSYX_23060077_DATA_WIDTH-1-i] = in[i];
    end
  end
endfunction

// wire shift_sll = (alu_opt == `ALU_SLL);
// wire shift_srl = (alu_opt == `ALU_SRL);
// wire shift_sra = (alu_opt == `ALU_SRA);
wire shift_sll = alu_opt[`YSYX_23060077_ALU_SLL ];
wire shift_srl = alu_opt[`YSYX_23060077_ALU_SRL ];
wire shift_sra = alu_opt[`YSYX_23060077_ALU_SRA ];

wire [`YSYX_23060077_DATA_WIDTH-1:0] shift_num = shift_sll ? reverse_bits(alu_a_data) : alu_a_data;

wire [`YSYX_23060077_DATA_WIDTH-1:0] shift_temp = shift_num >> alu_b_data[4:0];

wire [`YSYX_23060077_DATA_WIDTH-1:0] srl_result = shift_temp;
wire [`YSYX_23060077_DATA_WIDTH-1:0] sll_result = reverse_bits(shift_temp);

// 才用掩码方式比64bit右移时序更好
wire [`YSYX_23060077_DATA_WIDTH-1:0] sra_mask   = {(`YSYX_23060077_DATA_WIDTH){1'b1}} >> alu_b_data[4:0];
wire [`YSYX_23060077_DATA_WIDTH-1:0] sra_result = (shift_temp & sra_mask) | ({(`YSYX_23060077_DATA_WIDTH){shift_num[`YSYX_23060077_DATA_WIDTH-1]}} &(~sra_mask));

assign alu_out_data = 
({`YSYX_23060077_DATA_WIDTH{alu_opt[`YSYX_23060077_ALU_ADD ]}}  & adder_sum   ) |
({`YSYX_23060077_DATA_WIDTH{alu_opt[`YSYX_23060077_ALU_SUB ]}}  & adder_sum   ) |
({`YSYX_23060077_DATA_WIDTH{alu_opt[`YSYX_23060077_ALU_SLL ]}}  & sll_result  ) |
({`YSYX_23060077_DATA_WIDTH{alu_opt[`YSYX_23060077_ALU_SLT ]}}  & {{(`YSYX_23060077_DATA_WIDTH-1){1'b0}},signed_flag}    ) |
({`YSYX_23060077_DATA_WIDTH{alu_opt[`YSYX_23060077_ALU_SLTU]}}  & {{(`YSYX_23060077_DATA_WIDTH-1){1'b0}},unsigned_flag}  ) |
({`YSYX_23060077_DATA_WIDTH{alu_opt[`YSYX_23060077_ALU_XOR ]}}  & alu_xor     ) |
({`YSYX_23060077_DATA_WIDTH{alu_opt[`YSYX_23060077_ALU_SRL ]}}  & srl_result  ) |
({`YSYX_23060077_DATA_WIDTH{alu_opt[`YSYX_23060077_ALU_SRA ]}}  & sra_result  ) |
({`YSYX_23060077_DATA_WIDTH{alu_opt[`YSYX_23060077_ALU_OR  ]}}  & alu_or      ) |
({`YSYX_23060077_DATA_WIDTH{alu_opt[`YSYX_23060077_ALU_AND ]}}  & alu_and     ) |
({`YSYX_23060077_DATA_WIDTH{alu_opt[`YSYX_23060077_ALU_PC  ]}}  & adder_pc    ) ;
// always @(*) begin
//   case(alu_opt)
//     `ALU_ADD  : alu_out_data = adder_sum                       ;
//     `ALU_SUB  : alu_out_data = adder_sum                      ;
//     `ALU_SLL  : alu_out_data = sll_result                  ;
//     `ALU_SLT  : alu_out_data = {{(`YSYX_23060077_DATA_WIDTH-1){1'b0}},signed_flag}  ;
//     `ALU_SLTU : alu_out_data = {{(`YSYX_23060077_DATA_WIDTH-1){1'b0}},unsigned_flag}           ;
//     `ALU_XOR  : alu_out_data = alu_xor                        ;
//     `ALU_SRL  : alu_out_data = srl_result                  ;
//     `ALU_SRA  : alu_out_data = sra_result                                     ;
//     `ALU_OR   : alu_out_data = alu_or                        ;
//     `ALU_AND  : alu_out_data = alu_and                        ;
//     `ALU_SUBU : alu_out_data = adder_sum                       ;
//     `ALU_PC   : alu_out_data = adder_pc     ;
//     default:    alu_out_data = 'd0; 
//   endcase
// end


// `ifdef USING_DPI_C
//   wire [`YSYX_23060077_DATA_WIDTH-1:0] sra_result = {{{(`YSYX_23060077_DATA_WIDTH){alu_a_data[`YSYX_23060077_DATA_WIDTH-1]}},alu_a_data} >> alu_b_data[4:0]}[`YSYX_23060077_DATA_WIDTH-1:0] ;
// `else
//   wire [`YSYX_23060077_DATA_WIDTH-1:0]sra_result = {{{(`YSYX_23060077_DATA_WIDTH){alu_a_data[`YSYX_23060077_DATA_WIDTH-1]}},alu_a_data} >> alu_b_data[4:0]};
// `endif

// always @(*) begin
//   case(alu_opt)
//     `ALU_ADD  : alu_out_data = add_out[`YSYX_23060077_DATA_WIDTH-1:0]                       ;
//     `ALU_SUB  : alu_out_data = add_out[`YSYX_23060077_DATA_WIDTH-1:0]                       ;
//     `ALU_SLL  : alu_out_data = alu_a_data << alu_b_data[4:0]                  ;
//     `ALU_SLT  : alu_out_data = {{(`YSYX_23060077_DATA_WIDTH-1){1'b0}},sign_flag^over_flag}  ;
//     `ALU_SLTU : alu_out_data = {{(`YSYX_23060077_DATA_WIDTH-1){1'b0}},carry_flag}           ;
//     `ALU_XOR  : alu_out_data = alu_a_data ^ alu_b_data                        ;
//     `ALU_SRL  : alu_out_data = alu_a_data >> alu_b_data[4:0]                  ;
//     `ALU_SRA  : alu_out_data = sra_result                                     ;
//     `ALU_OR   : alu_out_data = alu_a_data | alu_b_data                        ;
//     `ALU_AND  : alu_out_data = alu_a_data & alu_b_data                        ;
//     `ALU_SUBU : alu_out_data = add_out[`YSYX_23060077_DATA_WIDTH-1:0]                       ;
//     default:    alu_out_data = 'd0; 
//   endcase
// end

endmodule
