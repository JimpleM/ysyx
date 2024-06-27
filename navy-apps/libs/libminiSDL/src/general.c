#include <NDL.h>
#include <stdarg.h>

static char errorinfo[1024];

int SDL_Init(uint32_t flags) {
  return NDL_Init(flags);
}

void SDL_Quit() {
  NDL_Quit();
}

char *SDL_GetError() {
  return errorinfo;
}

int SDL_SetError(const char* fmt, ...) {
  assert(fmt != NULL);
  va_list args;
  va_start(args,fmt);

  vsprintf(errorinfo,fmt,args);

  va_end(args);
  return -1;
}

int SDL_ShowCursor(int toggle) {
  printf("SDL_UpdateRect\n");
  assert(0);
  return 0;
}

void SDL_WM_SetCaption(const char *title, const char *icon) {
  printf("SDL_UpdateRect\n");
  // assert(0);
}
