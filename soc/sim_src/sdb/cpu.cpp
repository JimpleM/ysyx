#include "cpu.h"

#include "reg.h"
#include "difftest.h"
#include "pmem.h"
#include "trace.h"
#include "sdb.h"
#include <nvboard.h>
#include "utils.h"

#define MAX_INST_TO_PRINT 1000

extern VerilatedContext* contextp;
extern TOP_NAME* top;
extern VerilatedVcdC* tfp;

// from dpic
extern uint32_t cpu_pc;
extern uint32_t cpu_inst;
extern uint32_t *cpu_gpr;
uint32_t cpu_lpc = 0x30000000;

NPCState npc_state = { .state = NPC_STOP };
CPU_state cpu = {};

uint32_t stall_pc_cnt=0;

uint32_t total_clock_cnt = 0;
uint32_t total_inst_cnt = 0;


// static bool g_print_step = false;
#ifdef CONFIG_ITRACE
  static bool itrace_print = false;
#endif
#ifdef CONFIG_WAVE
  static bool wave_flag = false;
#endif



int is_exit_status_bad() {
  int good = (npc_state.state == NPC_END && npc_state.halt_ret == 0) ||
    (npc_state.state == NPC_QUIT);
  return !good;
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
    top->clock = 1;
    top->eval();
    dump_wave();

    top->clock = 0;
    top->eval();
    dump_wave();

    total_clock_cnt++;
}

void reset(){
  for(int i=0; i<10; i++){
    top->reset = 1;
    exec_once();
  }
  top->reset = 0;
}

static void statistic() {
  printf(ANSI_FMT("Total clock amount = %u\n",ANSI_FG_BLUE), total_clock_cnt);
  printf(ANSI_FMT("Total instructions amout= %u\n",ANSI_FG_BLUE), total_inst_cnt);
  printf(ANSI_FMT("Average cycles of each instruction= %f\n",ANSI_FG_RED), (float)total_clock_cnt/total_inst_cnt);
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
// #ifdef CONFIG_ITRACE_COND
//   if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
// #endif
//   if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(cpu_pc)); }
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
      // if (!in_pmem(cpu_pc)){
      //   npc_state.state = NPC_ABORT;
      //   printf("pc is not in pmem!\n");
      // }
      // cpu_inst = paddr_read((uint32_t)cpu_pc,4);

        //反汇编结果
      #ifdef CONFIG_ITRACE
        if(cpu_pc == CONFIG_ITRACE_PC_BEGIN){
          itrace_print = true;
        }
      #endif
      #ifdef CONFIG_NVBOARD
        nvboard_update();
      #endif
      exec_once();
      if(cpu_lpc != cpu_pc){
        total_inst_cnt++;
        trace_and_difftest();
        #ifdef CONFIG_FTRACE
          ftrace_print(cpu_lpc,cpu_pc,cpu_inst);
        #endif
        #ifdef CONFIG_ITRACE
          if(itrace_print){
            disassemble(p, sizeof(p),cpu_pc, (uint8_t *)&cpu_inst, 4);
            printf("%08x   %08x %s\n",cpu_pc,cpu_inst,p);
          }
        #else
          p[0] = '\0';
        #endif
        // printf("%8x\n",cpu_pc);
        stall_pc_cnt = 0;
      }else{
        stall_pc_cnt = stall_pc_cnt + 1;
        if(stall_pc_cnt >20000){    // 长时间同一pc，判断为被阻塞了，停止npc
          printf("%8x repeats %d times,stop!\n",cpu_pc,stall_pc_cnt);
          npc_state.halt_pc = cpu_pc;
          npc_state.state = NPC_ABORT;
        }
      }
      
      cpu_lpc  = cpu_pc;
      
      if (cpu_inst == 0x00100073){
          npc_state.halt_pc = cpu_pc;
          npc_state.state = NPC_END;
          npc_state.halt_ret = cpu_gpr[10];
      } 

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


  execute(n);


  switch (npc_state.state) {
    case NPC_RUNNING: npc_state.state = NPC_STOP; break;

    case NPC_END: case NPC_ABORT:
      nvboard_quit();
      Log("NPC: %s at pc = " FMT_WORD,
          (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED):
           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          npc_state.halt_pc);
      // fall through
    case NPC_QUIT: statistic();
  }
}