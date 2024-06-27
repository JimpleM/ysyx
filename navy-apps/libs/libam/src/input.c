#include <am.h>
#include <SDL.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  SDL_Event ev;
  if (SDL_PollEvent(&ev)) {
    kbd->keydown = (ev.type == SDL_KEYDOWN);
    kbd->keycode = ev.key.keysym.sym;
  }else{
    kbd->keydown = 0;
    kbd->keycode = 0;
  }
}
