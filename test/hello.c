#include <stdio.h>
#include <inttypes.h>
#include <string.h>

int main(){
    extern unsigned char _end;  // _end是什么?
  volatile unsigned char *p = &_end;
  *p = 0;
  while(*p != 0xff);
  *p = 0x33;
  *p = 0x34;
  *p = 0x86;
    return 0;
}