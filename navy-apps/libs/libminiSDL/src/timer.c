#include <NDL.h>
#include <sdl-timer.h>
#include <stdio.h>

SDL_TimerID SDL_AddTimer(uint32_t interval, SDL_NewTimerCallback callback, void *param) {
  printf("SDL_AddTimer\n");
  assert(0);
  return NULL;
}

int SDL_RemoveTimer(SDL_TimerID id) {
  printf("SDL_RemoveTimer\n");
  assert(0);
  return 1;
}
// Note that this value wraps if the program runs for more than ~49 days.
uint32_t SDL_GetTicks() {
  return NDL_GetTicks();
}

void SDL_Delay(uint32_t ms) {
  printf("SDL_Delay\n");
  assert(0);
}
