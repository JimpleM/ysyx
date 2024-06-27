#include <nterm.h>
#include <stdarg.h>
#include <unistd.h>
#include <SDL.h>

char handle_key(SDL_Event *ev);

static int cmd_echo(char *args,int i){
  printf("%s",args);
  return 0;
}
static int cmd_exit(char *args,int i){
  exit(0);
  return 0;
}

static struct {
  const char *name;
  const char *descripion;
  int (*handler) (char *,int);
}cmd_table[] = {
  {"echo","display a line of text",cmd_echo},
  {"exit","sys_exit",cmd_exit},
};

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

static void sh_handle_cmd(const char *cmd) {
  char *cmd_cmd = strtok((char *)cmd," ");
  char *cmd_args = cmd_cmd + strlen(cmd_cmd) + 1;
  int i = 0;
  for(i=0; i<CMD_NUM; i++){
    if(strcmp(cmd_cmd,cmd_table[i].name) == 0){
      if(cmd_table[i].handler(cmd_args,i) < 0 ){
        return ;
      }
      break;
    }
  }
}

void builtin_sh_run() {
  sh_banner();
  sh_prompt();

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


