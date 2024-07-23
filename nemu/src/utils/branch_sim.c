#include <branch_sim.h>
#ifdef CONFIG_BRANCH_SIM
static FILE *branch_fp;

static uint64_t jal_hit_count = 0;
static uint64_t jal_miss_count = 0;
static uint64_t jalr_hit_count = 0;
static uint64_t jalr_miss_count = 0;
static uint64_t branch_hit_count = 0;
static uint64_t branch_miss_count = 0;

void init_branch_sim(const char *branch_file){
  if(branch_file == NULL){
    Assert(0,"no branch_file!\n");
  }
  FILE *fpt = fopen(branch_file, "wb");
	Assert(fpt, "Can not open log %s",branch_file);
	branch_fp = fpt;
}

static vaddr_t always_no_jump(vaddr_t pc){
  return pc + 4;
}

static void jal_predict(vaddr_t pc,vaddr_t dnpc){
  if(dnpc == always_no_jump(pc)){
    jal_hit_count++;
  }else{
    jal_miss_count++;
  }
}

static void jalr_predict(vaddr_t pc,vaddr_t dnpc){
  if(dnpc == always_no_jump(pc)){
    jalr_hit_count++;
  }else{
    jalr_miss_count++;
  }
}

static void branch_predict(vaddr_t pc,vaddr_t dnpc){
  if(dnpc == always_no_jump(pc)){
    branch_hit_count++;
  }else{
    branch_miss_count++;
  }
}

void branch_sim_txt(JumpType type, vaddr_t pc ,vaddr_t dnpc){
  if(type == BRANCH){
    branch_predict(pc,dnpc);
  }else if(type == JAL){
    jal_predict(pc,dnpc);
  }else{
    jalr_predict(pc,dnpc);
  }
}

void branch_sim_result(){
  printf("---------------------------------------------------------------\n");
  printf("|  Module  |      jal       |      jalr      |    branch      |\n");
  printf("---------------------------------------------------------------\n");
  printf("|     hit  |  %13ld |  %13ld |  %13ld |\n", jal_hit_count ,jalr_hit_count ,branch_hit_count );
  printf("|    miss  |  %13ld |  %13ld |  %13ld |\n", jal_miss_count,jalr_miss_count,branch_miss_count);
  printf("|  percent |%15.3f%%|%15.3f%%|%15.3f%%|\n", 
  (double)jal_hit_count/(jal_hit_count+jal_miss_count),
  (double)jalr_hit_count/(jalr_hit_count+jalr_miss_count),
  (double)branch_hit_count/(branch_hit_count+branch_miss_count));
  printf("---------------------------------------------------------------\n");
}


#else

void init_branch_sim(const char *branch_file){}
void branch_sim_txt(JumpType type, vaddr_t pc ,vaddr_t dnpc){}
void branch_sim_result(){}
#endif