#include <am.h>
#include <nemu.h>
#include <stdio.h>


#define SYNC_ADDR (VGACTL_ADDR + 4)
#define Width 400
#define Height 300

void __am_gpu_init() {
  // int i;

  // AM_GPU_CONFIG_T info = io_read(AM_GPU_CONFIG);
  // Width = info.width; 
  // Height = info.height;

  // uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  // for (i = 0; i < Width * Height; i ++){
  //   fb[i] = i;
  // } 
  // outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  // uint32_t config = inl(VGACTL_ADDR);
  // int w = (config >> 16) & 0x0000ffff;
  // int h = config & 0x0000ffff;

  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, 
    .has_accel = false,
    .width = Width, 
    .height = Height,
    .vmemsz = Width * Height * sizeof(uint32_t)
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int i,j;
  int x = ctl->x, y = ctl->y;
  int w = ctl->w, h = ctl->h;
  uint32_t *pixels = (uint32_t *)ctl->pixels;
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < h; i ++){
    for(j = 0; j < w; j++){
      fb[(i+y)*Width + x + j] = pixels[i*w + j];
    }
  } 
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
