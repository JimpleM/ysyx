#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int offset_x = 0, offset_y = 0;
int event_fd;
int dispinfo_fd;
int fb_fd;

uint32_t NDL_GetTicks() {
  struct timeval now;
  gettimeofday(&now, NULL);
  // us 太大了输出ms
  return (now.tv_sec * 1000) + (now.tv_usec / 1000);
}

int NDL_PollEvent(char *buf, int len) {
  return read(event_fd,(void *)buf,len);
}

void NDL_OpenCanvas(int *w, int *h) {
  char dispinfo[32];
  read(dispinfo_fd,dispinfo,sizeof(dispinfo));
  // printf("%s\n",dispinfo);
  sscanf(dispinfo,"Width:%d,Height:%d\n",&screen_w,&screen_h);
  close(dispinfo_fd);
  printf("%d %d\n", screen_w, screen_h);
  printf("%d %d\n", *w, *h);
  // if(*w ==0 || *h==0){
  //   *w = screen_w;
  //   *h = screen_h;
  // }
  offset_x = (screen_w - *w) >> 1;
  offset_y = (screen_h - *h) >> 1;
  printf("%d %d\n",offset_x,offset_y);

  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  size_t offset = ((x+offset_x) << 16) | (y+offset_y);   // 16bit够用了
  size_t len    = (w << 16) | h;
  // printf("offset:%x len:x\n",offset,len);
  lseek(fb_fd,offset,SEEK_SET);
  write(fb_fd,(void *)pixels,len);
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }

  dispinfo_fd = open("/proc/dispinfo",0);
  printf("Init dispinfo_fd: %d\n",dispinfo_fd);

  fb_fd = open("/dev/fb",0);
  printf("Init fb_fd: %d\n",fb_fd);

  event_fd = open("/dev/events",0);
  printf("Init event_fd: %d\n",event_fd);

  return 0;
}

void NDL_Quit() {
}
