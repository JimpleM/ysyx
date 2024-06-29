#include <Vtop.h>
#include <stdio.h>
#include <stdlib.h>

static TOP_NAME dut;

int cnt = 0;
static void single_cycle() {
  dut.clock = 0; dut.eval();
  dut.clock = 1; dut.eval();
}
static void reset(int n) {
  dut.reset = 1;
  while (n -- > 0) single_cycle();
  dut.reset = 0;
}

int main() {
  int32_t a,b;
  long long result;
  int32_t quot,rema;
  reset(10);
  while(1) {
    // a = -1 * rand()&0xFFFFFFFF;
    // b = -1 *rand()&0xFFFFFFFF;
    a = 0x83000000;
    b = 0x00000010;
    result = (long long )a*b;
    dut.a = a;
    dut.b = b;
    for(int i=0; i<35;i++){
      single_cycle();
    }
    quot = (uint32_t)a/b;
    rema = (uint32_t)a%b;
    if(quot != dut.quotient || rema != dut.remainder){
      printf("%d/%d local:%d %d veri:%d %d\n",a,b,quot,rema,dut.quotient,dut.remainder);
    }
    printf("%x/%x local:%x %x veri:%x %x\n",a,b,quot,rema,dut.quotient,dut.remainder);
    // if(result!= (long long)dut.result){
    //   printf("%d %d %lld really result%lld\n",a,b,dut.result,result);
    //   return 0;
    // }
    cnt++;
    if(cnt == 2){
      return 0;
    }
  }
}
