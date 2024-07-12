// `include"ysyx_23060077_define.v"

module ysyx_23060077_booth_code(
  input       [1:0]                                 booth_signed 				,
  input       [`YSYX_23060077_DATA_WIDTH-1:0]       booth_src1     				,
	input       [`YSYX_23060077_DATA_WIDTH-1:0]       booth_src2				    ,

  output      [2*LEN-1:0]                           partial_product0    ,
  output      [2*LEN-1:0]                           partial_product1    ,
  output      [2*LEN-1:0]                           partial_product2    ,
  output      [2*LEN-1:0]                           partial_product3    ,
  output      [2*LEN-1:0]                           partial_product4    ,
  output      [2*LEN-1:0]                           partial_product5    ,
  output      [2*LEN-1:0]                           partial_product6    ,
  output      [2*LEN-1:0]                           partial_product7    ,
  output      [2*LEN-1:0]                           partial_product8    ,
  output      [2*LEN-1:0]                           partial_product9    ,
  output      [2*LEN-1:0]                           partial_product10   ,
  output      [2*LEN-1:0]                           partial_product11   ,
  output      [2*LEN-1:0]                           partial_product12   ,
  output      [2*LEN-1:0]                           partial_product13   ,
  output      [2*LEN-1:0]                           partial_product14   ,
  output      [2*LEN-1:0]                           partial_product15   ,
  output      [2*LEN-1:0]                           partial_product16   
);
localparam LEN = 34;
localparam CNT = 17;

wire [LEN-1:0] src1 = booth_signed[0] ? {{2{booth_src1[31]}},booth_src1} : {2'b00,booth_src1};
wire [LEN-1:0] src2 = booth_signed[1] ? {{2{booth_src2[31]}},booth_src2} : {2'b00,booth_src2};

wire [LEN-1:0] x = src1;
wire [LEN-1:0] x_sub = {src1[32:0],1'b0};

wire [LEN  :0] y = {src2,1'b0};   // 补充y-1

wire [LEN-1:0] p  [0:CNT-1];
wire [CNT-1:0] c;
genvar i;
generate
  for(i = 0; i < CNT; i++)begin :gen_p // partial_product
    wire y_sub = y[2*i+0];
    wire y_now = y[2*i+1];
    wire y_add = y[2*i+2];

    wire sel_negative =  y_add & (y_now & ~y_sub | ~y_now & y_sub);
    wire sel_positive = ~y_add & (y_now & ~y_sub | ~y_now & y_sub);
    wire sel_double_negative =  y_add & ~y_now & ~y_sub;
    wire sel_double_positive = ~y_add &  y_now &  y_sub;

    assign p[i] = ~(
    ~({LEN{sel_negative}} & ~x) & 
    ~({LEN{sel_double_negative}} & ~x_sub) & 
    ~({LEN{sel_positive}} & x) & 
    ~({LEN{sel_double_positive}} & x_sub));
    
    assign c[i] = sel_double_negative | sel_negative;
  end
endgenerate

assign partial_product0   = {{LEN -  0{p[0 ][LEN-1]}}, p[0 ]}                      ;
assign partial_product1   = {{LEN -  2{p[1 ][LEN-1]}}, p[1 ], 1'b0, c[0 ]}         ;
assign partial_product2   = {{LEN -  4{p[2 ][LEN-1]}}, p[2 ], 1'b0, c[1 ], 2'b0  } ;
assign partial_product3   = {{LEN -  6{p[3 ][LEN-1]}}, p[3 ], 1'b0, c[2 ], 4'b0  } ;
assign partial_product4   = {{LEN -  8{p[4 ][LEN-1]}}, p[4 ], 1'b0, c[3 ], 6'b0  } ;
assign partial_product5   = {{LEN - 10{p[5 ][LEN-1]}}, p[5 ], 1'b0, c[4 ], 8'b0  } ;
assign partial_product6   = {{LEN - 12{p[6 ][LEN-1]}}, p[6 ], 1'b0, c[5 ], 10'b0 } ;
assign partial_product7   = {{LEN - 14{p[7 ][LEN-1]}}, p[7 ], 1'b0, c[6 ], 12'b0 } ;
assign partial_product8   = {{LEN - 16{p[8 ][LEN-1]}}, p[8 ], 1'b0, c[7 ], 14'b0 } ;
assign partial_product9   = {{LEN - 18{p[9 ][LEN-1]}}, p[9 ], 1'b0, c[8 ], 16'b0 } ;
assign partial_product10  = {{LEN - 20{p[10][LEN-1]}}, p[10], 1'b0, c[9 ], 18'b0 } ;
assign partial_product11  = {{LEN - 22{p[11][LEN-1]}}, p[11], 1'b0, c[10], 20'b0 } ;
assign partial_product12  = {{LEN - 24{p[12][LEN-1]}}, p[12], 1'b0, c[11], 22'b0 } ;
assign partial_product13  = {{LEN - 26{p[13][LEN-1]}}, p[13], 1'b0, c[12], 24'b0 } ;
assign partial_product14  = {{LEN - 28{p[14][LEN-1]}}, p[14], 1'b0, c[13], 26'b0 } ;
assign partial_product15  = {{LEN - 30{p[15][LEN-1]}}, p[15], 1'b0, c[14], 28'b0 } ;
assign partial_product16  = {{LEN - 32{p[16][LEN-1]}}, p[16], 1'b0, c[15], 30'b0 } ;

// c[16] 不用管，下面是推导过程
// 计算p[16]时，使用的是y[32],y[33],y[34]，
// 对于有符号数y[33],y[34]是由y[32]得来的，所以要不全1要不全0，得到的结果一定为0，c也是0
// 对于无符号数y[33],y[34]都为0，结果取决于y[32]，而y[32]要不0要不1，c必定是0

// always @(*) begin
//   $display("src=%b\n%b",src1,src2);
// end

endmodule
