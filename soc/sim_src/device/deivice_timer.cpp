#include "device.h"
#include "device_lib.h"
#include "utils.h"

static uint64_t now_time = 0;

void timer_init(){
    get_time();
}

uint32_t timer_read(uint32_t addr){
    if(addr == RTC_ADDR){
        now_time = get_time();
        return (uint32_t)now_time;
    }else if(addr == RTC_ADDR+4){
        return (uint32_t)(now_time >> 32);
    }
    return 0;
}