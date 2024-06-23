#include <Vtop.h>
#include <stdio.h>
#include <stdlib.h>

static TOP_NAME dut;

int cnt = 0;
static void single_cycle() {
  dut.clk = 0; dut.eval();
  dut.clk = 1; dut.eval();
}

int main() {
  int32_t a,b;
  long long result;
  while(1) {
    a = -1 * rand()&0xFFFFFFFF;
    b = -1 * rand()&0xFFFFFFFF;
    // a = 10;
    // b = 2;
    result = (long long )a*b;
    dut.a = a;
    dut.b = b;
    single_cycle();
    
    if(result!= (long long)dut.result){
      printf("%d %d %lld really result%lld\n",a,b,dut.result,result);
      return 0;
    }
    cnt++;
    if(cnt == 1000){
      return 0;
    }
  }
}
