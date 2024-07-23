#ifndef __CACHE_SIM_H__
#define __CACHE_SIM_H__

#include <common.h>


void init_cache_sim(const char *cahce_file);
void Icache_sim_txt(vaddr_t pc);
void Dcache_sim_txt(int type, vaddr_t addr);


#endif