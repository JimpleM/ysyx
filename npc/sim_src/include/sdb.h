#ifndef __SDB_H__
#define __SDB_H__


#include "common.h"
#include "reg.h"

NPCState npc_state;

//sdb
void sdb_set_batch_mode();

//reg
void init_regex();
word_t expr(char *e, bool *success);


//watchpoint
void init_wp_pool();
void add_wp(char *exp);
void del_wp(int num);
void wp_display();
bool check_diff();

#endif