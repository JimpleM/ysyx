module axi4_delayer(
  input         clock,
  input         reset,

  output        in_arready,
  input         in_arvalid,
  input  [3:0]  in_arid,
  input  [31:0] in_araddr,
  input  [7:0]  in_arlen,
  input  [2:0]  in_arsize,
  input  [1:0]  in_arburst,
  input         in_rready,
  output        in_rvalid,
  output [3:0]  in_rid,
  output [63:0] in_rdata,
  output [1:0]  in_rresp,
  output        in_rlast,
  output        in_awready,
  input         in_awvalid,
  input  [3:0]  in_awid,
  input  [31:0] in_awaddr,
  input  [7:0]  in_awlen,
  input  [2:0]  in_awsize,
  input  [1:0]  in_awburst,
  output        in_wready,
  input         in_wvalid,
  input  [63:0] in_wdata,
  input  [7:0]  in_wstrb,
  input         in_wlast,
                in_bready,
  output        in_bvalid,
  output [3:0]  in_bid,
  output [1:0]  in_bresp,

  input         out_arready,
  output        out_arvalid,
  output [3:0]  out_arid,
  output [31:0] out_araddr,
  output [7:0]  out_arlen,
  output [2:0]  out_arsize,
  output [1:0]  out_arburst,
  output        out_rready,
  input         out_rvalid,
  input  [3:0]  out_rid,
  input  [63:0] out_rdata,
  input  [1:0]  out_rresp,
  input         out_rlast,
  input         out_awready,
  output        out_awvalid,
  output [3:0]  out_awid,
  output [31:0] out_awaddr,
  output [7:0]  out_awlen,
  output [2:0]  out_awsize,
  output [1:0]  out_awburst,
  input         out_wready,
  output        out_wvalid,
  output [63:0] out_wdata,
  output [7:0]  out_wstrb,
  output        out_wlast,
                out_bready,
  input         out_bvalid,
  input  [3:0]  out_bid,
  input  [1:0]  out_bresp
);

  assign in_arready = out_arready;
  assign out_arvalid = in_arvalid;
  assign out_arid = in_arid;
  assign out_araddr = in_araddr;
  assign out_arlen = in_arlen;
  assign out_arsize = in_arsize;
  assign out_arburst = in_arburst;

  assign out_rready = rready_flag ? in_rready : 'd0;
  assign in_rvalid = rready_flag ? out_rvalid : 'd0;  // 需要控制valid信号避免主机收到valid自己握手成功了
  
  assign in_rid = out_rid;
  assign in_rdata = out_rdata;
  assign in_rresp = out_rresp;
  assign in_rlast = out_rlast;

  assign in_awready = out_awready;
  assign out_awvalid = in_awvalid;
  assign out_awid = in_awid;
  assign out_awaddr = in_awaddr;
  assign out_awlen = in_awlen;
  assign out_awsize = in_awsize;
  assign out_awburst = in_awburst;
  
  assign in_wready = wvalid_flag ? out_wready : 1'b0;
  assign out_wvalid = wvalid_flag ? in_wvalid : 1'b0;

  assign out_wdata = in_wdata;
  assign out_wstrb = in_wstrb;
  assign out_wlast = in_wlast;

  assign out_bready = bready_flag ? in_bready : 1'b0;
  
  assign in_bvalid = bready_flag ? out_bvalid : 1'b0;;
  assign in_bid = out_bid;
  assign in_bresp = out_bresp;

  wire [15:0] r;            // r = 3.625, s = 2^4 = 16
  assign r[15:4] = 'd2;     // 设置成2，意味着传输每一个周期要多2个delay
  assign r[3:0]  = 4'b1010; // 定点数0.5+0.125 = 0.625

  localparam DELAY_STATE_WIDTH = 2;
  
  reg [DELAY_STATE_WIDTH-1:0] delay_r_state;
  reg [DELAY_STATE_WIDTH-1:0] delay_r_state_next;
  localparam [DELAY_STATE_WIDTH-1:0] DELAY_R_IDLE   = 'd0;
  localparam [DELAY_STATE_WIDTH-1:0] DELAY_R_AR     = 'd1;
  localparam [DELAY_STATE_WIDTH-1:0] DELAY_R_R      = 'd2;
  localparam [DELAY_STATE_WIDTH-1:0] DELAY_R_DELAY  = 'd3;
  wire rready_flag = (delay_r_state == DELAY_R_R) ? 1'b1 : 1'b0;
  reg  [15:0] delay_r_cnt;

  always @(posedge clock) begin
    if(reset)begin
      delay_r_state       <= DELAY_R_IDLE;
      delay_r_state_next  <= DELAY_R_IDLE;
      delay_r_cnt         <= 'd0;
    end
    else begin
      case(delay_r_state)
        DELAY_R_IDLE:begin
          if(in_arvalid)begin
            delay_r_state   <= DELAY_R_AR;
            delay_r_cnt			<= delay_r_cnt + r;
          end
        end
        DELAY_R_AR:begin  //地址握手不管，后面补上延时
          delay_r_cnt				<= delay_r_cnt + r;
          if(out_arready)begin
            delay_r_state       <= DELAY_R_DELAY;
            delay_r_state_next  <= DELAY_R_R;
          end
        end
        DELAY_R_R:begin   //接收到valid时，把rready拉下进入延时状态
          delay_r_cnt				<= delay_r_cnt + r;
          if(out_rvalid)begin
            delay_r_state       <= out_rlast ? DELAY_R_IDLE : DELAY_R_DELAY;  //有last就直接结束了，如果进入延时会影响下一次传输
            delay_r_state_next  <= DELAY_R_R;
          end
        end
        DELAY_R_DELAY:begin
          if(delay_r_cnt[15:4] == 'd0)begin
            delay_r_state       <= delay_r_state_next;
          end
          else begin
            delay_r_cnt[15:4]   <= delay_r_cnt[15:4] - 12'd1;
          end
        end
        default:begin
          delay_r_state       <= DELAY_R_IDLE;
          delay_r_state_next  <= DELAY_R_IDLE;
        end
      endcase
    end
  end



  reg [DELAY_STATE_WIDTH-1:0] delay_w_state;
  reg [DELAY_STATE_WIDTH-1:0] delay_w_state_next;
  localparam [DELAY_STATE_WIDTH-1:0] DELAY_W_IDLE   = 'd0;
  localparam [DELAY_STATE_WIDTH-1:0] DELAY_W_W      = 'd1;
  localparam [DELAY_STATE_WIDTH-1:0] DELAY_W_B      = 'd2;
  localparam [DELAY_STATE_WIDTH-1:0] DELAY_W_DELAY  = 'd3;
  wire wvalid_flag = (delay_w_state == DELAY_W_W) ? 1'b1 : 1'b0;
  wire bready_flag = (delay_w_state == DELAY_W_B) ? 1'b1 : 1'b0;
  reg  [15:0] delay_w_cnt;

  always @(posedge clock) begin
    if(reset)begin
      delay_w_state       <= DELAY_W_IDLE;
      delay_w_state_next  <= DELAY_W_IDLE;
      delay_w_cnt         <= 'd0;
    end
    else begin
      case(delay_w_state)
        DELAY_W_IDLE:begin
          if(in_awvalid)begin     // 写的时候sdram_core需要awvalid和walid给到才会回复awready
            delay_w_cnt			<= delay_w_cnt + r;
            delay_w_state   <= DELAY_W_W;
          end
        end
        DELAY_W_W:begin   //地址握手不管，后面补上延时
          delay_w_cnt				<= delay_w_cnt + r;
          if(in_wvalid & out_wready)begin
            delay_w_state       <= DELAY_W_DELAY;
            delay_w_state_next  <= in_wlast ? DELAY_W_B : DELAY_W_W; // 有last用b状态延时
          end
        end
        DELAY_W_B:begin
          if(out_bvalid)begin
            delay_w_state       <= DELAY_W_IDLE;
          end
        end
        DELAY_W_DELAY:begin
          if(delay_w_cnt[15:4] == 'd0)begin
            delay_w_state       <= delay_w_state_next;
          end
          else begin
            delay_w_cnt[15:4]   <= delay_w_cnt[15:4] - 12'd1;
          end
        end
        default:begin
          delay_w_state       <= DELAY_W_IDLE;
          delay_w_state_next  <= DELAY_W_IDLE;
        end
      endcase
    end
  end

endmodule
