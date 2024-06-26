#include <stdio.h>
#include <stdint.h>
#include <NDL.h>
int main(){
  // NDL_Init(0);
  printf("start\n");
  uint32_t boot_time = NDL_GetTicks();

  printf("boot_time:%d\n",boot_time);
  uint32_t time;
  while(1){
    time  = NDL_GetTicks();
    if(time - boot_time > 500){
      printf("Hello World!\n");
      boot_time = time;
    }
  }
}