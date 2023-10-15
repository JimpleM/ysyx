#include "cpu.h"

#include "reg.h"

#define MAX_INST_TO_PRINT 1000

#define dump_wave tfp->dump(contextp->time());  contextp->timeInc(1);

extern VerilatedContext* contextp;
extern Vriscv32* top;
extern VerilatedVcdC* tfp;

NPCState npc_state = { .state = NPC_STOP };

CPU_state cpu = {};

static void exec_once() {
    top->clk = 1;
    top->eval();

    dump_wave;

    top->clk = 0;
    top->eval();
    
    dump_wave;
}

void reset(){
  for(int i=0; i<5; i++){
    top->i_rst_n = 0;
    exec_once();
  }
  top->i_rst_n = 1;
}



static void statistic() {
 
}

void assert_fail_msg() {
  isa_reg_display();
#ifdef CONFIG_IRINGBUF
  show_all_buffer();
#endif
  statistic();
}

static void trace_and_difftest() {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  // if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }

#ifdef CONFIG_DIFFTEST
  difftest_step();
  if(checkregs()){
    // npc_state.state = NPC_STOP;
    break;
  }
#endif

#ifdef CONFIG_WATCHPOINT
  if(check_diff()){
    Log("Trigger the watchpoint!");
    wp_display();
    npc_state.state = NPC_STOP;
  }
#endif
}


static void execute(uint64_t n) {
  // uint64_t timer_start = get_time();

  for (;n > 0; n --) {
    exec_once();

    trace_and_difftest();

    if (npc_state.state != NPC_RUNNING) break;
  }
}


void cpu_exec(uint64_t n) {
  // g_print_step = (n < MAX_INST_TO_PRINT);
  switch (npc_state.state) {
    case NPC_END: case NPC_ABORT:
      printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
      return;
    default: npc_state.state = NPC_RUNNING;
  }

  // uint64_t timer_start = get_time();

  execute(n);

  // uint64_t timer_end = get_time();
  // g_timer += timer_end - timer_start;

  switch (npc_state.state) {
    case NPC_RUNNING: npc_state.state = NPC_STOP; break;

    case NPC_END: case NPC_ABORT:
      Log("NPC: %s at pc = " FMT_WORD,
          (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED):
           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          npc_state.halt_pc);
      // fall through
    case NPC_QUIT: statistic();
  }
}