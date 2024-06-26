#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  char *ch = (char *)buf;
  for(int i=0; i<len; i++){
    putch(ch[i]);
  }
  return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  assert(len>6);
  if(ev.keycode == 0){
    return 0;
  }
  int ret;
  if(ev.keydown){
    ret = sprintf((char *)buf,"kd %s",keyname[ev.keycode]);
  }else{
    ret = sprintf((char *)buf,"ku %s",keyname[ev.keycode]);
  }

  return ret;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  AM_GPU_CONFIG_T cfg = io_read(AM_GPU_CONFIG);
  return sprintf((char *)buf,"Width:%d,Height:%d\n",cfg.width,cfg.height);
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  AM_GPU_FBDRAW_T fbctl;
  fbctl.pixels = (void *)buf;
  fbctl.x      = offset >> 16;
  fbctl.y      = offset & 0x0000FFFF;
  fbctl.w      = len >> 16;
  fbctl.h      = len & 0x0000FFFF;
  ioe_write(AM_GPU_FBDRAW,&fbctl);
  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
