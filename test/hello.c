#include <stdio.h>
#include <inttypes.h>
#include <string.h>
static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; }
# define DEVICE_BASE 0x0
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
int main(){
    
    uint64_t t =  ((uint64_t)inl(RTC_ADDR) + (uint64_t)inl(RTC_ADDR+4)<<32);
    printf("%ld",t);
    return 0;
}