/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <memory/paddr.h>
#include <sdb.h>
#include "cpu/difftest.h"
#include "ringbuffer.h"
#include "utils.h"

static int is_batch_mode = false;
int difftest_status = true;  // menu开启difftest后默认开启

extern long img_size;

static char *snapshot_mem_file = "/home/jimple/Documents/ysyx/ysyx-workbench/nemu/snapshot/snapshot_mem.txt";
static char *snapshot_reg_file = "/home/jimple/Documents/ysyx/ysyx-workbench/nemu/snapshot/snapshot_reg.txt";

void init_regex();
void init_wp_pool();


/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}
static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return -1;
}
static int cmd_help(char *args);
static int cmd_si(char *args);
static int cmd_info(char *args);
static int cmd_x(char *args);
static int cmd_p(char *args);
static int cmd_w(char *args);
static int cmd_d(char *args);
static int cmd_i(char *args);
static int cmd_attach(char *args);
static int cmd_detach(char *args);
static int cmd_save(char *args);
static int cmd_load(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },

  /* TODO: Add more commands */
  { "si", "Pause the program after run one step N times. N defaults is 1", cmd_si},
  { "info", "r(print reg status), w(print watchpoint info)", cmd_info },
  { "x", "outpu N consecutive uint32_t in hex format", cmd_x },
  { "p", "find the value of expression", cmd_p },
  { "w", "set watchpoint, If changed, program will stop and print all watchpoint info", cmd_w },
  { "d", "delete watchpoint with the number of N", cmd_d },
  { "i", "show iring_buf", cmd_i },
  { "attach", "open difftest", cmd_attach },
  { "detach", "close difftest", cmd_detach },
  { "save", "save snapshot into path", cmd_save },
  { "load", "load snapshot from path", cmd_load },
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

static int cmd_si(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");

  if (arg == NULL) {
    /* no argument given */
    cpu_exec(1);
  }
  else {
    int num = atoi(arg);
    cpu_exec(num);
  }
  return 0;
}
static int cmd_info(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");

  if (arg == NULL) {
    /* no argument given */
    printf("please give argument\n");
  }
  else {
    if(strcmp(arg,"r") == 0){
      isa_reg_display();
    }
    if(strcmp(arg,"w") == 0){
      wp_display();
    }
  }
  return 0;
}
static int cmd_x(char *args) {
  /* extract the first argument */
  char *arg1 = strtok(NULL, " ");
  if (arg1 == NULL) {
    /* no argument given */
    printf("please give number\n");
    return 0;
  }
  int num1 = atoi(arg1);

  char *arg2 = strtok(NULL, " ");
  if (arg2 == NULL) {
    /* no argument given */
    printf("please give address\n");
    return 0;
  }
  bool success = true;
  uint32_t result = expr(arg2,&success);
  if(success == 0){
    return 0;
  }
  paddr_t addr = (paddr_t)result;

  for(int i=0; i<num1; i++){
    printf("0x%x:%08x\n",addr,paddr_read(addr,4));
    addr -= 4;
  }


  return 0;
}
static int cmd_p(char *args) {
 /* extract the first argument */
  char *arg = strtok(NULL, " ");

  if (arg == NULL) {
    /* no argument given */
    printf("please give argument");
  }
  else {
    bool success = true;
    int result;
    result = expr(arg,&success);
    if(success){
      printf("%u\n",result);
    }else{
      printf("expression is wrong\n");
    }
  }
  return 0;
}
static int cmd_w(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");

  if (arg == NULL) {
    /* no argument given */
    printf("please give argument");
  }
  else {
    add_wp(arg);
  }
  return 0;
}
static int cmd_d(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");

  if (arg == NULL) {
    /* no argument given */
    printf("please give argument");
  }
  else {
    int number = atoi(arg);
    del_wp(number);
  }
  return 0;
}

static int cmd_i(char *args) {
  IFDEF(CONFIG_IRINGBUF, show_all_iringbuf());
  IFDEF(CONFIG_FTRACE, show_all_ftrace());
  return 0;
}

static int cmd_attach(char *args){
  difftest_status = true;
#ifdef CONFIG_DIFFTEST
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), CONFIG_MSIZE, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
#endif
  return 0;
}

static int cmd_detach(char *args){
  difftest_status = false;
  return 0;
}

static int cmd_save(char *args){
  int ret;

  FILE *fp_mem = fopen(snapshot_mem_file,"wb");
  Assert(fp_mem, "Can not open mem_file '%s'", snapshot_mem_file);

  ret = fwrite(guest_to_host(RESET_VECTOR),CONFIG_MSIZE,1,fp_mem);
  assert(ret == 1);
  fclose(fp_mem);

  FILE *fp_reg = fopen(snapshot_reg_file,"wb");
  Assert(fp_reg, "Can not open reg_file '%s'", snapshot_reg_file);

  ret = fwrite(&cpu,sizeof(CPU_state),1,fp_reg);
  assert(ret == 1);
  fclose(fp_reg);

  return 0;
}
static int cmd_load(char *args){
  int ret;

  FILE *fp_mem = fopen(snapshot_mem_file,"rb");
  Assert(fp_mem, "Can not open mem_file '%s'", snapshot_mem_file);

  ret = fread(guest_to_host(RESET_VECTOR),CONFIG_MSIZE,1,fp_mem);
  assert(ret == 1);
  fclose(fp_mem);

  FILE *fp_reg = fopen(snapshot_reg_file,"rb");
  Assert(fp_reg, "Can not open reg_file '%s'", snapshot_reg_file);

  ret = fread(&cpu,sizeof(CPU_state),1,fp_reg);
  assert(ret == 1);
  fclose(fp_reg);
// load完后默认开启difftest并进行拷贝。
  cmd_attach(NULL);

  return 0;
}


void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
