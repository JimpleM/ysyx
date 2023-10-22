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

#include <common.h>
#include </home/jimple/Documents/ysyx/ysyx-workbench/nemu/src/monitor/sdb/sdb.h>

// #ifdef CONFIG_TEST_EXPR
// void test_expr(){
//   FILE *fp = fopen("/home/jimple/Documents/ysyx/ysyx-workbench/nemu/tools/gen-expr/input", "rb");
//   assert(fp != NULL);

//   char str[2048];
//   int num,result;
//   int count = 0;
//   int wrong_count = 0;

//   while(fscanf(fp,"%d %s",&num,str) != EOF){
//     bool success = true;
//     // printf("%s\n",str);
//     result = (int)expr(str,&success);
//     count++;
//     if(result != num){
//       wrong_count++;
//       printf("%s\n",str);
//       printf("result: %d  ans:%d\n",result, num);
//     }
//   }
//   printf("test example count: %d  wrong ans count:%d\n",count, wrong_count);
//   fclose(fp);
// }
// #endif

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();



int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

#ifdef CONFIG_TEST_EXPR
  // test_expr();
#else
  /* Start engine. */
  engine_start();
  

  return is_exit_status_bad();
#endif
}
