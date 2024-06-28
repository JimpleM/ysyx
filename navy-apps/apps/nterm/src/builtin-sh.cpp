#include <nterm.h>
#include <stdarg.h>
#include <unistd.h>
#include <SDL.h>

char handle_key(SDL_Event *ev);

static int cmd_echo(char *args,int i){
  if(args == NULL){
    printf("\n");
    return 0;
  }
  printf("%s\n",args);
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

static char cmd_str[64];
static char* args[8];
static int args_cnt;
static void sh_handle_cmd(const char *cmd) {
  strcpy(cmd_str,cmd);
  // 有一个情况是末尾是\n无法截取，因此将\n换成空格
  cmd_str[strlen(cmd_str)-1] = ' ';
  // printf("%s\n",cmd_str);
  args_cnt = 0;

  char *token = strtok(cmd_str," ");

  while(token != NULL){
    args[args_cnt++] = token;
    token = strtok(NULL," ");
  }
  args[args_cnt] = NULL;

  if(args[0] != NULL){
    int i = 0;
    for(i=0; i<CMD_NUM; i++){
      if(strcmp(args[0],cmd_table[i].name) == 0){
        if(cmd_table[i].handler(args[1],i) < 0 ){
          return ;
        }
        return ;
      }
    }
    execvp(args[0],args);
  }

}

void builtin_sh_run() {
  sh_banner();
  sh_prompt();
// 设置环境变量
  setenv("PATH","/bin",0);

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


