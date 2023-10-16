#ifndef __SDB_H__
#define __SDB_H__


#include "common.h"
#include "reg.h"
#include "pmem.h"


//sdb
void sdb_set_batch_mode();
void init_sdb();
void sdb_mainloop();


//reg
void init_regex();
word_t expr(char *e, bool *success);


//watchpoint
void init_wp_pool();
void add_wp(char *exp);
void del_wp(int num);
void wp_display();
bool check_diff();

//ftrace
void init_ftrace(const char *elf_file);
void ftrace_print(uint32_t pc, uint32_t npc,uint32_t inst);

#endif