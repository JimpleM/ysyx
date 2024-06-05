#include <am.h>
#include "ysyxsoc.h"


void __am_uart_rx(AM_UART_RX_T *cfg) {
    //这里要加东西
    if((inb(SERIAL_PORT+2)&0x04) != 0){
        cfg->data = inb(SERIAL_PORT);
    }else{
        cfg->data = 0xFF;
    }
}