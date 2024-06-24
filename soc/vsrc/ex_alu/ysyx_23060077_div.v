// `include"ysyx_23060077_define.v"

module ysyx_23060077_div(
	input 	                            clock       				,
	input 	                            reset       				,

  input                               div_signed 				  ,
  input       [`DATA_WIDTH-1:0]       dividend     		    , //被除数
	input       [`DATA_WIDTH-1:0]       divisor				      , //除数

  input 	                            flush       				,
  input 	                            div_valid       		,
	output 	reg                         div_ready       	  ,
  output 	reg                         out_valid       	  ,
  output  reg [`DATA_WIDTH-1:0]       quotient				    ,
  output  reg [`DATA_WIDTH-1:0]       remainder				    

);

localparam DIV_STATE_WITDH = 2;
reg [DIV_STATE_WITDH-1:0] 			  div_state;
localparam [DIV_STATE_WITDH-1:0] DIV_IDLE   		= 'd0;
localparam [DIV_STATE_WITDH-1:0] DIV_COUNT32    = 'd1;
localparam [DIV_STATE_WITDH-1:0] DIV_ANS 	      = 'd2;
localparam [DIV_STATE_WITDH-1:0] DIV_END 		    = 'd3;

wire dividend_signed = div_signed & dividend[31];
wire divisor_signed  = div_signed & divisor[31];

wire [31:0] dividend_abs  = (dividend_signed) ? ~dividend+1'b1 : dividend;
wire [31:0] divisor_abs   = (divisor_signed)  ? ~divisor+1'b1 : divisor;

reg [63:0] d_reg;
reg [31:0] s_reg;
reg [7:0] div_count;
reg [31:0] quot_r;

wire [32:0] dividend_sub;
assign dividend_sub = d_reg[63:31] - {1'b0,s_reg};

// assign div_ready = (div_state == DIV_END);

always @(posedge clock) begin
  if(reset)begin
    div_state   <= DIV_IDLE;
    d_reg       <= 'd0;
    s_reg       <= 'd0;
    div_count   <= 'd0;
    quot_r      <= 'd0;
    quotient    <= 'd0;
    remainder   <= 'd0;

    div_ready   <= 'd0;
    out_valid   <= 'd0;
  end
  else begin
    case(div_state)
      DIV_IDLE:begin
        out_valid   <= 'd0;
        div_ready   <= 'd1;
        if(div_valid)begin
          div_ready   <= 'd0;

          d_reg       <= {32'd0,dividend_abs};
          s_reg       <= divisor_abs;
          div_count   <= 'd31;
          quot_r      <= 'd0;
          quotient    <= 'd0;
          remainder   <= 'd0;
          div_state   <= DIV_COUNT32;
        end
      end
      DIV_COUNT32:begin
        if(d_reg[63:31] >= {1'b0,s_reg})begin
          quot_r        <= {quot_r[30:0],1'b1};
          d_reg[63:32]  <= dividend_sub[31:0];
          d_reg[31:0]   <= {d_reg[30:0],1'b0};
        end
        else begin
          quot_r        <= {quot_r[30:0],1'b0};
          d_reg[63:0]   <= {d_reg[62:0],1'b0};
        end
        div_count   <= div_count -1;
        div_state   <= (div_count==0) ? DIV_ANS : DIV_COUNT32;
      end
      DIV_ANS:begin
        quotient    <= (dividend_signed ^ divisor_signed) ? (~quot_r) + 1'b1 : quot_r;
        remainder   <= dividend_signed ? (~d_reg[63:32]) + 1'b1 : d_reg[63:32];
        div_state   <= DIV_END;
      end
      DIV_END:begin
        out_valid   <= 'd1;
        div_state   <= DIV_IDLE;
      end
    endcase
  end
end

endmodule

