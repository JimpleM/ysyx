#include "device_lib.h"
#include "device.h"

void device_init(){
    timer_init();
}

uint32_t device_read(uint32_t addr){
    if(addr == RTC_ADDR || addr == RTC_ADDR + 4){
        return timer_read(addr);
    }
    //Assert(0,"no device addr %8x",addr);
    return 0;
}

void device_write(uint32_t addr, uint32_t data){
    if(addr == SERIAL_PORT){
        uart_write(data);
    }
    //Assert(0,"no device addr %8x",addr);
}