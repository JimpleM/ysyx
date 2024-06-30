#include <nterm.h>
#include <stdarg.h>
#include <unistd.h>
#include <SDL.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

char handle_key(SDL_Event *ev);

#define CMD_NUM (int)(sizeof(cmd_table)/sizeof(cmd_table[0]))

static void sh_printf(const char *format, ...) {
  static char buf[256] = {};
  va_list ap;
  va_start(ap, format);
  int len = vsnprintf(buf, 256, format, ap);
  va_end(ap);
  term->write(buf, len);
}

static void sh_banner() {
  sh_printf("Built-in Shell in NTerm (NJU Terminal)\n\n");
}

static void sh_prompt() {
  sh_printf("sh> ");
}

char cmd_str[64];
char* args[8];
int args_cnt;
const char split[2] = " ";
static void sh_handle_cmd(const char *cmd) {

  strcpy(cmd_str,cmd);
  // 有一个情况是末尾是\n无法截取，因此将\n换成空格
  cmd_str[strlen(cmd_str)-1] = '\0';
  // printf("%s\n",cmd_str);
  args_cnt = 0;

  char *token = strtok(cmd_str,split);

  while(token != NULL){
    args[args_cnt++] = token;
    token = strtok(NULL,split);
  }
  args[args_cnt] = NULL;

  if(args[0] != NULL){
    // 要将命令也传进到args里面
    // printf("%s\n",cmd_str);
    execvp(args[0],args);
    printf("%s\n", strerror(errno));
  }

}

void builtin_sh_run() {
  sh_banner();
  sh_prompt();
// 设置环境变量
  setenv("PATH","/bin:/usr/bin",0);

  while (1) {
    SDL_Event ev;
    if (SDL_PollEvent(&ev)) {
      if (ev.type == SDL_KEYUP || ev.type == SDL_KEYDOWN) {
        const char *res = term->keypress(handle_key(&ev));
        if (res) {
          sh_handle_cmd(res);
          sh_prompt();
        }
      }
    }
    refresh_terminal();
  }
}


