#include <cache_sim.h>

#ifdef CONFIG_CACHE_SIM
static FILE *Icache_fp;
static FILE *Dcache_fp;
static uint32_t lst_pc = 0;
static uint32_t lst_pc_start = 0;
static uint32_t pc_count = 0;
static char cache_file_name[128];

void init_cache_sim(const char *cache_file){
  if(cache_file == NULL){
    Assert(0,"no cache_file!\n");
  }
  FILE *fpt;
  sprintf(cache_file_name,"%s_Icache",cache_file);
  fpt = fopen(cache_file_name, "wb");
	Assert(fpt, "Can not open log %s",cache_file_name);
	Icache_fp = fpt;

  sprintf(cache_file_name,"%s_Dcache",cache_file);
  fpt = fopen(cache_file_name, "wb");
	Assert(fpt, "Can not open log %s",cache_file_name);
	Dcache_fp = fpt;
}


void Icache_sim_txt(vaddr_t pc){
  if(lst_pc + 4 != pc){
    if(pc_count != 0){
      fprintf(Icache_fp,"n %10d\n",pc_count);
      pc_count = 0;
    }
    fprintf(Icache_fp,"l 0x%8x\n",pc);
    lst_pc_start = pc;
  }else{
    pc_count++;
  }
  lst_pc = pc;
}

void Dcache_sim_txt(int type, vaddr_t addr){
  if(type ==0){
    fprintf(Dcache_fp,"l 0x%8x\n",addr);
  }else{
    fprintf(Dcache_fp,"s 0x%8x\n",addr);
  }
}
#else
void init_cache_sim(const char *cache_file){}
void Icache_sim_txt(vaddr_t pc){}
void Dcache_sim_txt(int type, vaddr_t addr){}
#endif