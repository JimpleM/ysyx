#ifndef __BRANCH_SIM_H__
#define __BRANCH_SIM_H__

#include <common.h>

typedef enum {JAL,JALR,BRANCH}JumpType;

void init_branch_sim(const char *branch_file);
void branch_sim_txt(JumpType type, vaddr_t pc ,vaddr_t dnpc);



#endif