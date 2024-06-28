#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

int main(int argc, char *argv[], char *envp[]);
extern char **environ;
void call_main(uintptr_t *args) {
  int argc = *args;
  char **argv = (char **)(args + 1);
  char **envp = (char **)(args + 1 + argc + 1);
  environ = envp;
  // for(size_t i=0; i<argc;i++){
  //   printf("argv:%d,%s\n",i,argv[i]);
  // }
  // while(*envp != NULL){
  //   printf("envp: %s\n",*(envp));
  //   envp++;
  // }

  // char *empty[] =  {NULL };
  // environ = empty;
  exit(main(argc, argv, envp));
  assert(0);
}
