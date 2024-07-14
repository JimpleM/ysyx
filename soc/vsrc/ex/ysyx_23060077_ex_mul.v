// `include"ysyx_23060077_define.v"
module ysyx_23060077_ex_mul(
	input 	                                          clock       				,
	input 	                                          reset       				,

  input       [1:0]                                 mul_signed 				  ,
  input       [`YSYX_23060077_DATA_WIDTH-1:0]       multiplicand     		,
	input       [`YSYX_23060077_DATA_WIDTH-1:0]       multiplier				  ,

  input 	                                          flush       				,
  input 	                                          mul_valid       		,
	output 	reg                                       mul_ready       	  ,
  output 	reg                                       out_valid       	  ,
  output  reg [`YSYX_23060077_DATA_WIDTH-1:0]       result_hi				    ,
  output  reg [`YSYX_23060077_DATA_WIDTH-1:0]       result_ho				    

);
localparam PP_LEN = 68;
localparam PP_NUM = 17;
localparam MUL_STATE_WITDH = 2;
reg [MUL_STATE_WITDH-1:0] 			mul_state;
localparam [MUL_STATE_WITDH-1:0] MUL_IDLE   		= 'd0;
localparam [MUL_STATE_WITDH-1:0] MUL_STAGE1     = 'd1;
localparam [MUL_STATE_WITDH-1:0] MUL_STAGE2 	  = 'd2;
localparam [MUL_STATE_WITDH-1:0] MUL_STAGE3  		= 'd3;

wire [PP_LEN-1:0] result = pipe6_s[0] + {pipe6_c[0][PP_LEN-2:0],1'b0};

reg   [1:0]             booth_signed;
reg   [`YSYX_23060077_DATA_WIDTH-1:0] booth_src1  ;
reg   [`YSYX_23060077_DATA_WIDTH-1:0] booth_src2  ;

always @(posedge clock) begin
  if(reset)begin
    booth_signed<= 'd0;
    booth_src1  <= 'd0;
    booth_src2  <= 'd0;
  end
  else begin
    if(mul_valid && mul_state == MUL_IDLE)begin
      booth_signed<= mul_signed;
      booth_src1  <= multiplicand;
      booth_src2  <= multiplier;
    end
  end
end
always @(posedge clock) begin
  if(reset)begin
    mul_state   <= MUL_IDLE;
    result_ho   <= 'd0;
    result_hi   <= 'd0;
    mul_ready   <= 'd0;
    out_valid   <= 'd0;
  end
  else begin
    case(mul_state)
      MUL_IDLE:begin
        mul_ready <= 'd1;
        out_valid   <= 'd0;
        if(mul_valid)begin
          mul_state <= MUL_STAGE1;
          mul_ready <= 'd0;
        end
      end
      MUL_STAGE1:begin
        mul_state <= MUL_STAGE2;
      end
      MUL_STAGE2:begin
        mul_state <= MUL_STAGE3;
      end
      MUL_STAGE3:begin
        mul_state <= MUL_IDLE;
        {result_hi,result_ho} <= result[63:0];
        out_valid   <= 'd1;
      end
      default:begin
        mul_state <= MUL_IDLE;
      end
    endcase
  end
end

// booth4生成部分积
wire [PP_LEN-1:0]partial_product[0:PP_NUM-1];
ysyx_23060077_booth_code booth_code_u0(
  .booth_signed 			(booth_signed),
  .booth_src1     		(booth_src1),
  .booth_src2				  (booth_src2),
  .partial_product0   (partial_product[0 ]),
  .partial_product1   (partial_product[1 ]),
  .partial_product2   (partial_product[2 ]),
  .partial_product3   (partial_product[3 ]),
  .partial_product4   (partial_product[4 ]),
  .partial_product5   (partial_product[5 ]),
  .partial_product6   (partial_product[6 ]),
  .partial_product7   (partial_product[7 ]),
  .partial_product8   (partial_product[8 ]),
  .partial_product9   (partial_product[9 ]),
  .partial_product10  (partial_product[10]),
  .partial_product11  (partial_product[11]),
  .partial_product12  (partial_product[12]),
  .partial_product13  (partial_product[13]),
  .partial_product14  (partial_product[14]),
  .partial_product15  (partial_product[15]),
  .partial_product16  (partial_product[16])
);


localparam PIPE1_CSA_NUM = 5;
wire [PP_LEN-1:0] pipe1_s [0:PIPE1_CSA_NUM-1];
wire [PP_LEN-1:0] pipe1_c [0:PIPE1_CSA_NUM-1];
genvar pp1_i;
genvar csa1_i;
generate
  for(pp1_i=0; pp1_i < PP_LEN; pp1_i=pp1_i+1)begin
    for(csa1_i=0; csa1_i<PIPE1_CSA_NUM; csa1_i=csa1_i+1)begin
      ysyx_23060077_wallace_csa wallace_csa(
        .in     ({partial_product[3*csa1_i+4][pp1_i],partial_product[3*csa1_i+3][pp1_i],partial_product[3*csa1_i+2][pp1_i]}),
        .cout   (pipe1_c[csa1_i][pp1_i]),
        .s      (pipe1_s[csa1_i][pp1_i])
      );
    end
  end
endgenerate

// pipe2
localparam PIPE2_CSA_NUM = 4; // 第二级有4个加法器
wire [PP_LEN-1:0]pipe2_pp[0:3*PIPE2_CSA_NUM-1];  // 第二级有12条输入线
genvar pipe2_pp_i;
generate
  for(pipe2_pp_i=0; pipe2_pp_i<PIPE1_CSA_NUM; pipe2_pp_i=pipe2_pp_i+1)begin
    assign pipe2_pp[pipe2_pp_i+0] = {pipe1_c[pipe2_pp_i][PP_LEN-2:0],1'b0};  // 当前位需要取上一级的进位
    assign pipe2_pp[pipe2_pp_i+7] = pipe1_s[pipe2_pp_i];
  end
  // 还有两个来自于17bit的0和1位
  assign pipe2_pp[5] = partial_product[0];
  assign pipe2_pp[6] = partial_product[1];
endgenerate

wire [PP_LEN-1:0] pipe2_s [0:PIPE2_CSA_NUM-1];
wire [PP_LEN-1:0] pipe2_c [0:PIPE2_CSA_NUM-1];
genvar pp2_i;
genvar csa2_i;
generate
  for(pp2_i=0; pp2_i < PP_LEN; pp2_i=pp2_i+1)begin
    for(csa2_i=0; csa2_i<PIPE2_CSA_NUM; csa2_i=csa2_i+1)begin
      ysyx_23060077_wallace_csa wallace_csa(
        .in     ({pipe2_pp[csa2_i*3+2][pp2_i],pipe2_pp[csa2_i*3+1][pp2_i],pipe2_pp[csa2_i*3+0][pp2_i]}),
        .cout   (pipe2_c[csa2_i][pp2_i]),
        .s      (pipe2_s[csa2_i][pp2_i])
      );
    end
  end
endgenerate


// pipe3
localparam PIPE3_CSA_NUM = 2; // 第三级有2个加法器
wire [PP_LEN-1:0]pipe3_pp[0:3*PIPE3_CSA_NUM-1];  // 第三级有6条输入线
genvar pipe3_pp_i;
generate
  for(pipe3_pp_i=0; pipe3_pp_i<PIPE2_CSA_NUM; pipe3_pp_i=pipe3_pp_i+1)begin
    assign pipe3_pp[pipe3_pp_i+2] = pipe2_s[pipe3_pp_i]; 
  end
  // 还有两个来自pipe2的5和6位进位，对应pipe2_c的0和1
  assign pipe3_pp[0] = {pipe2_c[0][PP_LEN-2:0],1'b0};
  assign pipe3_pp[1] = {pipe2_c[1][PP_LEN-2:0],1'b0};
endgenerate

wire [PP_LEN-1:0] pipe3_s [0:PIPE3_CSA_NUM-1];
wire [PP_LEN-1:0] pipe3_c [0:PIPE3_CSA_NUM-1];
genvar pp3_i;
genvar csa3_i;
generate
  for(pp3_i=0; pp3_i < PP_LEN; pp3_i=pp3_i+1)begin
    for(csa3_i=0; csa3_i<PIPE3_CSA_NUM; csa3_i=csa3_i+1)begin
      ysyx_23060077_wallace_csa wallace_csa(
        .in     ({pipe3_pp[csa3_i*3+2][pp3_i],pipe3_pp[csa3_i*3+1][pp3_i],pipe3_pp[csa3_i*3+0][pp3_i]}),
        .cout   (pipe3_c[csa3_i][pp3_i]),
        .s      (pipe3_s[csa3_i][pp3_i])
      );
    end
  end
endgenerate

// pipe4
localparam PIPE4_CSA_NUM = 2; // 第四级有2个加法器
wire [PP_LEN-1:0]pipe4_pp[0:3*PIPE4_CSA_NUM-1];
generate
  // 还有两个来自第二级的7和8位进位，对应pipe2_c的2和3
  assign pipe4_pp[0] = {pipe2_c[2][PP_LEN-2:0],1'b0};
  assign pipe4_pp[1] = {pipe2_c[3][PP_LEN-2:0],1'b0};
  // 自第三级的9和10位进位，对应pipe3_c的0和1
  assign pipe4_pp[2] = {pipe3_c[0][PP_LEN-2:0],1'b0};
  assign pipe4_pp[3] = {pipe3_c[1][PP_LEN-2:0],1'b0};
  // 自第三级的的pipe3_s
  assign pipe4_pp[4] = pipe3_s[0];
  assign pipe4_pp[5] = pipe3_s[1];
endgenerate

wire [PP_LEN-1:0] pipe4_s [0:PIPE4_CSA_NUM-1];
wire [PP_LEN-1:0] pipe4_c [0:PIPE4_CSA_NUM-1];
genvar pp4_i;
genvar csa4_i;
generate
  for(pp4_i=0; pp4_i < PP_LEN; pp4_i=pp4_i+1)begin
    for(csa4_i=0; csa4_i<PIPE4_CSA_NUM; csa4_i=csa4_i+1)begin
      ysyx_23060077_wallace_csa wallace_csa(
        .in     ({pipe4_pp[csa4_i*3+2][pp4_i],pipe4_pp[csa4_i*3+1][pp4_i],pipe4_pp[csa4_i*3+0][pp4_i]}),
        .cout   (pipe4_c[csa4_i][pp4_i]),
        .s      (pipe4_s[csa4_i][pp4_i])
      );
    end
  end
endgenerate

// pipe5
localparam PIPE5_CSA_NUM = 1; // 第五级有1个加法器
wire [PP_LEN-1:0]pipe5_pp[0:3*PIPE5_CSA_NUM-1];
generate
  // 来自第四级的11位进位，对应pipe4_c的0
  assign pipe5_pp[0] = {pipe4_c[0][PP_LEN-2:0],1'b0};
  // 自第四级的的pipe4_s
  assign pipe5_pp[1] = pipe4_s[0];
  assign pipe5_pp[2] = pipe4_s[1];
endgenerate

wire [PP_LEN-1:0] pipe5_s [0:PIPE5_CSA_NUM-1];
wire [PP_LEN-1:0] pipe5_c [0:PIPE5_CSA_NUM-1];
genvar pp5_i;
generate
  for(pp5_i=0; pp5_i < PP_LEN; pp5_i=pp5_i+1)begin
    ysyx_23060077_wallace_csa wallace_csa(
      .in     ({pipe5_pp[2][pp5_i],pipe5_pp[1][pp5_i],pipe5_pp[0][pp5_i]}),
      .cout   (pipe5_c[0][pp5_i]),
      .s      (pipe5_s[0][pp5_i])
    );
  end
endgenerate

// pipe6
localparam PIPE6_CSA_NUM = 1; // 第六级有1个加法器
wire [PP_LEN-1:0]pipe6_pp[0:3*PIPE6_CSA_NUM-1];
generate
  // 来自第四级的12位进位，对应pipe4_c的1
  assign pipe6_pp[0] = {pipe4_c[1][PP_LEN-2:0],1'b0};
  // 来自第五级的13位进位，对应pipe5_c的0
  assign pipe6_pp[1] = {pipe5_c[0][PP_LEN-2:0],1'b0};
  // 自第五级的的pipe4_s
  assign pipe6_pp[2] = pipe5_s[0];
endgenerate

wire [PP_LEN-1:0] pipe6_s [0:PIPE6_CSA_NUM-1];
wire [PP_LEN-1:0] pipe6_c [0:PIPE6_CSA_NUM-1];
genvar pp6_i;
generate
  for(pp6_i=0; pp6_i < PP_LEN; pp6_i=pp6_i+1)begin
    ysyx_23060077_wallace_csa wallace_csa(
      .in     ({pipe6_pp[2][pp6_i],pipe6_pp[1][pp6_i],pipe6_pp[0][pp6_i]}),
      .cout   (pipe6_c[0][pp6_i]),
      .s      (pipe6_s[0][pp6_i])
    );
  end
endgenerate


// integer i;
// always @(posedge clock) begin
//     for(i=0; i<17; i++)begin
//       $display("%b",partial_product[i]);
//     end
//     $display("pipe1_s");
//     for(i=0; i<PIPE1_CSA_NUM; i++)begin
//       $display("%b",pipe1_s[i]);
//     end
//     $display("pipe1_c");
//     for(i=0; i<PIPE1_CSA_NUM; i++)begin
//       $display("%b",pipe1_c[i]);
//     end
//     $display("pipe2_s");
//     for(i=0; i<PIPE2_CSA_NUM; i++)begin
//       $display("%b",pipe2_s[i]);
//     end
//     $display("pipe2_c");
//     for(i=0; i<PIPE2_CSA_NUM; i++)begin
//       $display("%b",pipe2_c[i]);
//     end
//     $display("pipe3_s");
//     for(i=0; i<PIPE3_CSA_NUM; i++)begin
//       $display("%b",pipe3_s[i]);
//     end
//     $display("pipe3_c");
//     for(i=0; i<PIPE3_CSA_NUM; i++)begin
//       $display("%b",pipe3_c[i]);
//     end
//     $display("pipe4_s");
//     for(i=0; i<PIPE4_CSA_NUM; i++)begin
//       $display("%b",pipe4_s[i]);
//     end
//     $display("pipe4_c");
//     for(i=0; i<PIPE4_CSA_NUM; i++)begin
//       $display("%b",pipe4_c[i]);
//     end
//     $display("pipe5_s");
//     for(i=0; i<PIPE5_CSA_NUM; i++)begin
//       $display("%b",pipe5_s[i]);
//     end
//     $display("pipe5_c");
//     for(i=0; i<PIPE5_CSA_NUM; i++)begin
//       $display("%b",pipe5_c[i]);
//     end
//     $display("pipe6_s");
//     for(i=0; i<PIPE6_CSA_NUM; i++)begin
//       $display("%b",pipe6_s[i]);
//     end
//     $display("pipe6_c");
//     for(i=0; i<PIPE6_CSA_NUM; i++)begin
//       $display("%b",pipe6_c[i]);
//     end
// end

endmodule

