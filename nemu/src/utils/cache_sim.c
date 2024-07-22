#include <cache_sim.h>

FILE *itrace_fp;
uint32_t lst_pc = 0;
uint32_t lst_pc_start = 0;
uint32_t pc_count = 0;

void init_cache_sim(const char *cahce_file){
  FILE *fpt = fopen(cahce_file, "wb");
	Assert(fpt, "Can not open log %s",cahce_file);
	itrace_fp = fpt;
}


void cache_sim_txt(vaddr_t pc){
  if(lst_pc + 4 != pc){
    if(pc_count != 0){
      fprintf(itrace_fp,"n %10d\n",pc_count);
      pc_count = 0;
    }
    fprintf(itrace_fp,"l 0x%8x\n",pc);
    lst_pc_start = pc;
  }else{
    pc_count++;
  }
  lst_pc = pc;
}