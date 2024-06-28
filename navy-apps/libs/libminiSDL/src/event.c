#include <NDL.h>
#include <SDL.h>
#include <string.h>

#define keyname(k) #k,
static char EventInfo[32];
static char kb_down[4];
static char kb_name[20];

static uint8_t kb_state[SDLK_PAGEDOWN+1] = {};

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  printf("SDL_PushEvent\n");
  assert(0);
  return 0;
}

static int Event_Handle(SDL_Event *event){
  sscanf(EventInfo,"%s %s",kb_down,kb_name);
  event->type = strcmp(kb_down,"kd") == 0 ? SDL_KEYDOWN : SDL_KEYUP;
  event->key.keysym.sym = SDLK_NONE;
  for(size_t i = 0; i<=SDLK_PAGEDOWN; i++){
    if(strcmp(kb_name, keyname[i]) == 0){
      event->key.keysym.sym = i;
      kb_state[i] = event->type;
      break;
    }
  }
  return 1;
}

// 非阻塞
int SDL_PollEvent(SDL_Event *ev) {
  if(NDL_PollEvent(EventInfo,sizeof(EventInfo)) == 0){
    return 0;
  }
  
  return Event_Handle(ev);
}
// 阻塞等待事件
int SDL_WaitEvent(SDL_Event *event) {
  //  printf("SDL_WaitEvent\n");
  // assert(0);
  while(NDL_PollEvent(EventInfo,sizeof(EventInfo)) == 0);

  return Event_Handle(event);
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
   printf("SDL_PeepEvents\n");
  assert(0);
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return kb_state;
}
