#include "device_lib.h"
#include "device.h"

static int count = 0;

void device_init(){
    timer_init();
}

uint32_t device_read(uint32_t addr){
    if(addr == RTC_ADDR || addr == RTC_ADDR + 4){
        // printf("timer\n");
        return timer_read(addr);
    }
    //Assert(0,"no device addr %8x",addr);
    return 0;
}

void device_write(uint32_t addr, uint32_t data){
    if(addr == SERIAL_PORT){
        count++;
        printf("%d\n",count);
        uart_write(data);
        return ;
    }
    //Assert(0,"no device addr %8x",addr);
}