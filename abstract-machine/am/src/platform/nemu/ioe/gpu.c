#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  int i;

  AM_GPU_CONFIG_T info = io_read(AM_GPU_CONFIG);
  int w = info.width, h = info.height;

  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t config = inl(VGACTL_ADDR);

  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, 
    .has_accel = false,
    .width = (config >> 16) & 0x0000ffff, 
    .height = config & 0x0000ffff,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  // if (ctl->sync) {
  //   // ctl->x = 
  //   outl(SYNC_ADDR, 1);
  // }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
