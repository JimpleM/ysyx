#include "device_lib.h"
#include "device.h"
#include <SDL2/SDL.h>

static int count = 0;

static void device_update(){
    keyboard_update();
}

void device_init(){
    timer_init();
    keyboard_init();
    //device_update();
    SDL_CreateThread(device_update,"device_update",NULL);
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

void device_write(uint32_t addr, uint32_t data){
    count++;
    if(addr == SERIAL_PORT && count >=3){
        count = 0;
        uart_write(data);
        return ;
    }
    //Assert(0,"no device addr %8x",addr);
}