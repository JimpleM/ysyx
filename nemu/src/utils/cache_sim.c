#include <cache_sim.h>

static FILE *cache_fp;
static uint32_t lst_pc = 0;
static uint32_t lst_pc_start = 0;
static uint32_t pc_count = 0;

void init_cache_sim(const char *cahce_file){
  if(cahce_file == NULL){
    Assert(0,"no cache_file!\n");
  }
  FILE *fpt = fopen(cahce_file, "wb");
	Assert(fpt, "Can not open log %s",cahce_file);
	cache_fp = fpt;
}


void cache_sim_txt(vaddr_t pc){
  if(lst_pc + 4 != pc){
    if(pc_count != 0){
      fprintf(cache_fp,"n %10d\n",pc_count);
      pc_count = 0;
    }
    fprintf(cache_fp,"l 0x%8x\n",pc);
    lst_pc_start = pc;
  }else{
    pc_count++;
  }
  lst_pc = pc;
}