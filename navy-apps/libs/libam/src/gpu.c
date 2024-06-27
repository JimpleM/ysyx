#include <am.h>
#include <SDL.h>

static uint32_t W = 400;
static uint32_t H = 300;
static SDL_Surface *surface = NULL;

#define RMASK 0x00ff0000
#define GMASK 0x0000ff00
#define BMASK 0x000000ff
#define AMASK 0x00000000

void __am_gpu_init() {
  SDL_Init(0);
  surface = SDL_CreateRGBSurface(SDL_SWSURFACE, W, H, 32,
      RMASK, GMASK, BMASK, AMASK);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = W, .height = H,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  if (ctl->sync) {
    SDL_UpdateRect(surface,0,0,0,0);
  }
  int x = ctl->x, y = ctl->y, w = ctl->w, h = ctl->h;
  if (w == 0 || h == 0) return;

  SDL_Surface *s = SDL_CreateRGBSurfaceFrom(ctl->pixels, w, h, 32, w * sizeof(uint32_t),
      RMASK, GMASK, BMASK, AMASK);
  SDL_Rect rect = { .x = x, .y = y };
  SDL_BlitSurface(s, NULL, surface, &rect);
  SDL_FreeSurface(s);
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
