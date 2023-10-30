#include "device_lib.h"
#include "device.h"
#include <SDL2/SDL.h>


void device_init(){
    timer_init();
    keyboard_init();
    screen_init();
}

extern Vriscv32* top;
//@Attention device_read和device_write会触发三次，这个问题还没有解决，这里通过一些特殊手段暂时度过
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
void device_write(uint32_t addr, uint32_t data){
    if(addr == SERIAL_PORT && top->clk == 0){
        uart_write(data);
    }else if(addr == SYNC_ADDR && top->clk == 0){
        screen_sync_write(data);
    }else if(addr >= FB_ADDR && addr < AUDIO_SBUF_ADDR && top->clk == 0){
        screen_write(addr,data);
    }
    //Assert(0,"no device addr %8x",addr);
}