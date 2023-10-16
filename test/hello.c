#include <stdio.h>
#include <inttypes.h>
int main(){
    uint32_t a = 0x80000000;
    printf("%x\n",a-1);
    printf("%x\n",-1);
    return 0;
}