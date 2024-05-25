#include <stdio.h>
#include <stdint.h>

int main(){
    uint32_t mem[64];
    unsigned i;
    uint8_t *temp = (uint8_t *)mem;
    for(i = 0; i< 16; i++){
        temp[i] = i;
    }
    for(i = 0; i< 16; i++){
        if(temp[i] != i){
            printf("SAfsaf\n");
        }
    }
}