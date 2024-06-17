#include "cpu.h"

#include "reg.h"
#include "difftest.h"
#include "pmem.h"
#include "trace.h"
#include "sdb.h"
#include <nvboard.h>
#include "utils.h"
#include "riscv_lib.h"

#define MAX_INST_TO_PRINT 1000

extern VerilatedContext* contextp;
extern TOP_NAME* top;
extern VerilatedVcdC* tfp;

// from dpic
extern uint32_t cpu_pc;
extern uint32_t cpu_inst;
extern uint32_t *cpu_gpr;
#ifdef NPC_SIM
uint32_t cpu_lpc = 0;
#else
uint32_t cpu_lpc = 0x30000000;
#endif

NPCState npc_state = { .state = NPC_STOP };
CPU_state cpu = {};

uint32_t stall_pc_cnt=0;

uint64_t total_clock_cnt = 0;
uint64_t total_inst_cnt = 0;
extern uint64_t inst_type_counter[64][2];
extern uint64_t ifu_inst_counter;
extern uint64_t lsu_read_clock;
extern uint64_t lsu_write_clock;
extern uint64_t exu_data_counter;
extern uint64_t Icache_access_counter[2];	// 0 store times, 1 clock
extern uint64_t Icache_miss_counter[2];

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
uint32_t wave_pc_count = 0;
static void dump_wave(){
#ifdef CONFIG_WAVE
  if(cpu_pc == CONFIG_WAVE_PC_BEGIN | CONFIG_WAVE_PC_BEGIN == 0){
    wave_flag = true;
  }
  if(cpu_pc == CONFIG_WAVE_PC_END){
    wave_flag = false;
  }
  if(wave_pc_count> CONFIG_WAVE_PC_COUNT){
    wave_flag = false;
  }
  if(wave_flag){
    wave_pc_count ++ ;
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

}

void reset(){
  for(int i=0; i<10; i++){
    top->reset = 1;
    exec_once();
  }
  top->reset = 0;
}

// static void statistic() {
//   printf(ANSI_FMT("Total clock amount = %u\n",ANSI_FG_BLUE), total_clock_cnt);
//   printf(ANSI_FMT("Total instructions amout= %u\n",ANSI_FG_BLUE), total_inst_cnt);
//   printf(ANSI_FMT("Average cycles of each instruction= %f\n",ANSI_FG_GREEN), (float)total_clock_cnt/total_inst_cnt);
//   uint32_t sum_clock = 0,sum_inst=0;
//   uint32_t idx;
//   for(int i=0; i<11; i++){
//     idx = opcodeArray[i].opcode;
//     printf(ANSI_FMT("Inst %s ",ANSI_FG_YELLOW),opcodeArray[i].name);
//     printf(ANSI_FMT("amount = %7u cycles = %8u Average cycles of each inst = %2.3f\n",ANSI_FG_BLUE),
//     inst_type_counter[idx][0],inst_type_counter[idx][1],
//     inst_type_counter[idx][0] == 0 ? 0 : (float)inst_type_counter[idx][1]/inst_type_counter[idx][0]);
//     sum_inst  += inst_type_counter[idx][0];
//     sum_clock += inst_type_counter[idx][1];
//   };
//   printf("\n");
//   printf(ANSI_FMT("SUM clock        = ",ANSI_FG_YELLOW)ANSI_FMT("%u\n",ANSI_FG_GREEN),sum_clock);
//   printf(ANSI_FMT("SUM inst         = ",ANSI_FG_YELLOW)ANSI_FMT("%u\n",ANSI_FG_GREEN),sum_inst);
//   printf("\n");
//   printf(ANSI_FMT("IFU inst counter = ",ANSI_FG_YELLOW)ANSI_FMT("%u\n",ANSI_FG_GREEN),ifu_inst_counter);
//   printf(ANSI_FMT("LSU read  clock  = ",ANSI_FG_YELLOW)ANSI_FMT("%u\n",ANSI_FG_GREEN),lsu_read_clock);
//   printf(ANSI_FMT("LSU r_avr clock  = ",ANSI_FG_YELLOW)ANSI_FMT("%2.3f\n",ANSI_FG_GREEN),(float)lsu_read_clock/inst_type_counter[opcodeArray[5].opcode][0]);
//   printf(ANSI_FMT("LSU write clock  = ",ANSI_FG_YELLOW)ANSI_FMT("%u\n",ANSI_FG_GREEN),lsu_write_clock);
//   printf(ANSI_FMT("LSU w_avr clock  = ",ANSI_FG_YELLOW)ANSI_FMT("%2.3f\n",ANSI_FG_GREEN),(float)lsu_write_clock/inst_type_counter[opcodeArray[6].opcode][0]);
//   printf(ANSI_FMT("EXU data counter = ",ANSI_FG_YELLOW)ANSI_FMT("%u\n",ANSI_FG_GREEN),exu_data_counter);
// }

static void statistic() {
  printf("----------------------------------------------------------\n");
  printf("| Total clock amount                   |%16lld |\n", total_clock_cnt);
  printf("| Total instructions amount            |%16lld |\n", total_inst_cnt);
  printf("| Average cycles of each instruction   |%16.3f |\n", (float)total_clock_cnt/total_inst_cnt);
  printf("----------------------------------------------------------\n");
  uint64_t sum_clock = 0,sum_inst=0;
  uint32_t idx;
  printf("----------------------------------------------------------\n");
  printf("|  Inst  |    Amount    |    cycles    |  AVG  | percent |\n");
  printf("----------------------------------------------------------\n");
  for(int i=0; i<11; i++){
    idx = opcodeArray[i].opcode;
    printf("|%7s |%13u |%13u |%6.2f |%7.2f% |\n", opcodeArray[i].name,inst_type_counter[idx][0],inst_type_counter[idx][1],
    inst_type_counter[idx][0] == 0 ? 0 : (float)inst_type_counter[idx][1]/inst_type_counter[idx][0],(float)inst_type_counter[idx][0]*100/total_inst_cnt);
    sum_inst  += inst_type_counter[idx][0];
    sum_clock += inst_type_counter[idx][1];
  };
  printf("----------------------------------------------------------\n");
  printf("|                         Summary                        |\n");
  printf("----------------------------------------------------------\n");
  printf("|   SUM clock              |        %16lld     |\n", sum_clock);
  printf("|   SUM inst               |        %16lld     |\n", sum_inst);
  printf("----------------------------------------------------------\n");
  printf("|   IFU inst counter       |        %16lld     |\n", ifu_inst_counter);
  printf("|   LSU read  clock        |        %16lld     |\n", lsu_read_clock);
  printf("|   LSU r_avr clock        |        %16.3f     |\n", (float)lsu_read_clock/inst_type_counter[opcodeArray[5].opcode][0]);
  printf("|   LSU write clock        |        %16lld     |\n", lsu_write_clock);
  printf("|   LSU w_avr clock        |        %16.3f     |\n", (float)lsu_write_clock/inst_type_counter[opcodeArray[6].opcode][0]);
  printf("|   EXU data counter       |        %16lld     |\n", exu_data_counter);
  printf("----------------------------------------------------------\n");
  printf("|   Icache access times    |        %16lld     |\n", Icache_access_counter[0]);
  printf("|   Icache access clock    |        %16lld     |\n", Icache_access_counter[1]);
  printf("|   Icache miss times      |        %16lld     |\n", Icache_miss_counter[0]);
  printf("|   Icache miss clock      |        %16lld     |\n", Icache_miss_counter[1]);
  printf("|   Icache hit percent     |      %17.3f%%     |\n", (float)Icache_access_counter[0]*100/(Icache_access_counter[0]+Icache_miss_counter[0]));
  printf("----------------------------------------------------------\n");
  // check
  if(sum_inst != total_inst_cnt){
    printf(ANSI_FMT("total_inst_cnt is not equal to sum_inst\n",ANSI_FG_RED));
  }
  if(Icache_access_counter[0] + Icache_miss_counter[0] != sum_inst){
    printf(ANSI_FMT("total_inst_cnt is not equal to Icache axi read times\n",ANSI_FG_RED));
  }
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
      total_clock_cnt++;
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
        if(stall_pc_cnt >60000){    // 长时间同一pc，判断为被阻塞了，停止npc
          printf("%8x repeats %d times,stop!\n",cpu_pc,stall_pc_cnt);
          npc_state.halt_pc = cpu_pc;
          npc_state.state = NPC_ABORT;
        }
      }
      
      cpu_lpc  = cpu_pc;
      
      if (cpu_inst == 0x00100073){
          total_inst_cnt++;
          npc_state.halt_pc = cpu_pc;
          npc_state.state = NPC_END;
          npc_state.halt_ret = cpu_gpr[10];
          break;
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