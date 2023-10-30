#include "device.h"

#include <SDL2/SDL.h>

#define SCREEN_W 400
#define SCREEN_H 300


static uint32_t screen_width() {
  return SCREEN_W;
}

static uint32_t screen_height() {
  return SCREEN_H;
}

static uint32_t screen_size() {
  return screen_width() * screen_height() * sizeof(uint32_t);
}


static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

static uint32_t *vmem = NULL;

void screen_init(){
    SDL_Window *window = NULL;
    char title[128];
    sprintf(title, "riscv32e-npc");
    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(
        SCREEN_W * 2,
        SCREEN_H * 2,
        0, &window, &renderer);
    SDL_SetWindowTitle(window, title);
    texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);

    vmem = (uint32_t *)malloc(screen_size());
    memset(vmem,0,screen_size());
}

static inline void update_screen() {
  SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}

void screen_sync_write(uint32_t data) {
  if(data == 1){
    update_screen();
  }
}
void screen_write(uint32_t addr, uint32_t data){
  Assert(addr - FB_ADDR < screen_size(),"screen_addr is overflowed!");
  // 除以4 从8位数据地址转换成32位数据的数组下标
  uint32_t offset = (addr - FB_ADDR) >> 2;
  vmem[offset] = data;
}


