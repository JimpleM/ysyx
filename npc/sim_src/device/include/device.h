#ifndef DEVIDE_H__
#define DEVIDE_H__

#include "common.h"
#include "map.h"

#define DEVICE_BASE 0xb0000000
#define MMIO_BASE 0xb0000000

#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)
#define AUDIO_ADDR      (DEVICE_BASE + 0x0000200)
#define DISK_ADDR       (DEVICE_BASE + 0x0000300)
#define FB_ADDR         (MMIO_BASE   + 0x1000000)
#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000)

// keyboard
void keyboard_init();
uint32_t keyboard_read();



//timer
void timer_init();
uint32_t timer_read(uint32_t addr);

//uart
void uart_write(uint32_t data);

//vga
#define SYNC_ADDR (VGACTL_ADDR + 4)
void init_vga();
void vga_update_screen(uint32_t data);
void write_screen(uint32_t addr, uint32_t data);
#endif