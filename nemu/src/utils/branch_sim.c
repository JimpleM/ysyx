#include <branch_sim.h>

static FILE *branch_fp;

void init_branch_sim(const char *branch_file){
  if(branch_file == NULL){
    Assert(0,"no branch_file!\n");
  }
  FILE *fpt = fopen(branch_file, "wb");
	Assert(fpt, "Can not open log %s",branch_file);
	branch_fp = fpt;
}


void branch_sim_txt(JumpType type, vaddr_t pc ,vaddr_t dnpc){
#ifdef CONFIG_BRANCH_SIM
  if(type == BRANCH){
    fprintf(branch_fp,"b 0x%8x 0x%8x\n",pc,dnpc);
  }else{
    fprintf(branch_fp,"j 0x%8x 0x%8x\n",pc,dnpc);
  }
#endif
  // if(lst_pc + 4 != pc){
  //   if(pc_count != 0){
  //     fprintf(branch_fp,"n %10d\n",pc_count);
  //     pc_count = 0;
  //   }
  //   fprintf(branch_fp,"l 0x%8x\n",pc);
  //   lst_pc_start = pc;
  // }else{
  //   pc_count++;
  // }
  // lst_pc = pc;
}