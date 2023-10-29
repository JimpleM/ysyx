#include "device_lib.h"
#include "device.h"
#include <SDL2/SDL.h>

static int count = 0;

void device_init(){
    timer_init();
    keyboard_init();
}


uint32_t device_read(uint32_t addr){
    if(addr == RTC_ADDR || addr == RTC_ADDR + 4){
        // printf("timer\n");
        return timer_read(addr);
    }else if(addr == KBD_ADDR){
        return keyboard_read();
    }
    //Assert(0,"no device addr %8x",addr);
    return 0;
}
extern Vriscv32* top;
void device_write(uint32_t addr, uint32_t data){
    count++;
    if(addr == SERIAL_PORT && top->clk == 0){
        count = 0;
        uart_write(data);
    }else if(addr == SYNC_ADDR+4 && count >=3){
        count = 0;

    }
    //Assert(0,"no device addr %8x",addr);
}