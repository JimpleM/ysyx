#include "cpu.h"

#include "reg.h"
#include "difftest.h"
#include "pmem.h"
#include "trace.h"
#include "sdb.h"

#include "device_lib.h"

#define MAX_INST_TO_PRINT 1000


extern VerilatedContext* contextp;
extern Vysyx_23060077_top* top;
extern VerilatedVcdC* tfp;

extern int stop_flag;
extern uint32_t cpu_pc;
uint32_t cpu_inst = 0;
uint32_t cpu_lpc = 0x80000000;

NPCState npc_state = { .state = NPC_STOP };

CPU_state cpu = {};
static bool g_print_step = false;

#ifdef CONFIG_WAVE
static bool wave_flag = false;
#endif


int is_exit_status_bad() {
  int good = (npc_state.state == NPC_END && npc_state.halt_ret == 0) ||
    (npc_state.state == NPC_QUIT);
  // Log("%d",!good);
  return !good;
  // return 100;
}

static void dump_wave(){
#ifdef CONFIG_WAVE
  if(cpu_pc == CONFIG_WAVE_PC_BEGIN){
    wave_flag = true;
  }
  if(cpu_pc == CONFIG_WAVE_PC_END){
    wave_flag = false;
  }
  if(wave_flag){
    tfp->dump(contextp->time());  
    contextp->timeInc(1);
  }
#endif
}

static void exec_once() {
    top->clk = 1;
    top->eval();

    dump_wave();

    top->clk = 0;
    top->eval();
    
    dump_wave();

}

void reset(){
  for(int i=0; i<5; i++){
    top->rst_n = 0;
    exec_once();
  }
  top->rst_n = 1;
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
extern uint32_t device_flag;
static void trace_and_difftest() {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(cpu_pc)); }
#ifdef CONFIG_DIFFTEST
  if(device_flag){
    difftest_skip_ref();
    device_flag = 0;
  }
  difftest_step(cpu_pc,cpu_pc);
  if(checkregs()){
    npc_state.halt_pc = cpu_pc;
    npc_state.state = NPC_ABORT;
    return;
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
  static char p[64];

  for (;!contextp->gotFinish() && n > 0; n --) {

      cpu_inst = pmem_read((uint32_t)cpu_pc,4);
      cpu_lpc  = cpu_pc;
        //反汇编结果
      #ifdef CONFIG_ITRACE
        disassemble(p, sizeof(p),cpu_pc, (uint8_t *)&cpu_inst, 4);
        printf("%08x   %08x %s\n",cpu_pc,cpu_inst,p);
      #else
        p[0] = '\0'; // the upstream llvm does not support loongarch32r
      #endif

      exec_once();
      trace_and_difftest();
      
      
      if (npc_state.state != NPC_RUNNING) break;
      if (stop_flag == 1){
          npc_state.halt_pc = cpu_pc;
          npc_state.state = NPC_END;
          break;
      } 

      #ifdef CONFIG_FTRACE
        ftrace_print(cpu_lpc,cpu_pc,cpu_inst);
      #endif

    
  }
}


void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
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