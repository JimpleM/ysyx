#include "device_lib.h"
#include "device.h"
#include <SDL2/SDL.h>


void device_init(){
    timer_init();
    keyboard_init();
    screen_init();
}

extern Vriscv32* top;
int flag = 0;
uint32_t device_read(uint32_t addr){
    if(addr == RTC_ADDR || addr == RTC_ADDR + 4){
        // printf("timer\n");
        return timer_read(addr);
    }else if(addr == KBD_ADDR &top->clk == 1 && flag == 1){
        return keyboard_read();
    }else if(top->clk == 1){
        flag = 1;
    }
    //Assert(0,"no device addr %8x",addr);
    return 0;
}
void device_write(uint32_t addr, uint32_t data){
    if(addr == SERIAL_PORT && top->clk == 0){
        uart_write(data);
    }else if(addr == SYNC_ADDR && top->clk == 0){
        // screen_write(data);
    }
    //Assert(0,"no device addr %8x",addr);
}