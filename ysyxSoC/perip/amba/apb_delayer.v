module apb_delayer(
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

  output [31:0] out_paddr,
  output        out_psel,
  output        out_penable,
  output [2:0]  out_pprot,
  output        out_pwrite,
  output [31:0] out_pwdata,
  output [3:0]  out_pstrb,
  input         out_pready,
  input  [31:0] out_prdata,
  input         out_pslverr
);

  assign out_paddr   = in_paddr;
  assign out_psel    = psel_flag ? 1'b1 : 'd0;
  assign out_penable = penable_flag ? 1'b1 : 'd0;
  assign out_pprot   = in_pprot;
  assign out_pwrite  = in_pwrite;
  assign out_pwdata  = in_pwdata;
  assign out_pstrb   = in_pstrb;
  assign in_pready   = pready_flag ? 1'b1 : 'd0;
  assign in_prdata   = pready_flag ? prdata_r : 'd0;
  assign in_pslverr  = out_pslverr;

  wire [15:0] r;            // r = 3.625, s = 2^4 = 16
  assign r[15:4] = 'd2;     // 设置成2，意味着传输每一个周期要多2个delay
  assign r[3:0]  = 4'b1010; // 定点数0.5+0.125 = 0.625
  
  localparam DELAY_STATE_WIDTH = 3;
  
  reg [DELAY_STATE_WIDTH-1:0] delay_state;
  reg [DELAY_STATE_WIDTH-1:0] delay_next_state;
  localparam [DELAY_STATE_WIDTH-1:0] DELAY_IDLE   = 'd0;
  localparam [DELAY_STATE_WIDTH-1:0] DELAY_SEL    = 'd1;
  localparam [DELAY_STATE_WIDTH-1:0] DELAY_EANBLE = 'd2;
  localparam [DELAY_STATE_WIDTH-1:0] DELAY_READY  = 'd3;
  localparam [DELAY_STATE_WIDTH-1:0] DELAY_DELAY  = 'd4;
  reg  [15:0] delay_cnt;
  reg 	      psel_flag;
  reg         penable_flag;
  reg         pready_flag;
  reg  [31:0] prdata_r;
  
  // assign in_pready   = pready_r;
  // assign in_prdata   = prdata_r;
  
  always @(posedge clock ) begin
    if(reset)begin
      delay_state       <= DELAY_IDLE;
      delay_next_state  <= DELAY_IDLE;
      delay_cnt         <= 'd0;
      psel_flag		      <= 'd0;
      penable_flag		  <= 'd0;
      pready_flag       <= 'd0;
      prdata_r          <= 'd0;
    end
    else begin
      case(delay_state)
        DELAY_IDLE:begin
          psel_flag		      <= 'd0;
          penable_flag		  <= 'd0;
          pready_flag       <= 'd0;
          prdata_r          <= 'd0;
          if(in_psel)begin
            delay_state     <= DELAY_DELAY;
            delay_next_state<= DELAY_SEL;
            delay_cnt				<= delay_cnt + r;
          end
        end
        DELAY_SEL:begin
          psel_flag		        <= 'd1;
          delay_cnt						<= delay_cnt + r;
          if(in_penable)begin
            delay_state       <= DELAY_EANBLE;    // 串口会用in_psel & ~in_penable产生写入信号
          end
        end
        DELAY_EANBLE:begin
          penable_flag		    <= 'd1;
          delay_cnt						<= delay_cnt + r;
          if(out_pready)begin
            delay_state       <= DELAY_DELAY;
            delay_next_state  <= DELAY_READY;

            prdata_r          <= out_prdata;
            psel_flag		      <= 'd0;       //此时已经算是从机传输完成，不能在访问了
            penable_flag		  <= 'd0;
          end
        end
        DELAY_READY:begin
          pready_flag		      <= 'd1;           //给主机回复数据

          delay_cnt						<= delay_cnt + r;
          delay_state         <= DELAY_DELAY;
          delay_next_state    <= DELAY_IDLE;
        end
        DELAY_DELAY:begin
          pready_flag		      <= 'd0;
          if(delay_cnt[15:4] == 'd0)begin
            delay_state <= delay_next_state;
          end
          else begin
            delay_cnt[15:4] <= delay_cnt[15:4] - 12'd1;
          end
        end
        default:begin
          delay_state       <= DELAY_IDLE;
          delay_next_state  <= DELAY_IDLE;
        end
      endcase
    end
  end
endmodule
