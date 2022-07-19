#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

int main(int argc, char *argv[], char *envp[]);
extern char **environ;
void call_main(uintptr_t *args) {
  //printf("in callmain, main = %p\n", (void*)main);
  //int argc = *((int*)args);
  //printf("argc = %d, addr = %p\n", argc, args);
  //char **argv = (char **)((int*)args + 1);
  //printf("argv addr = %p\n", argv);
  //for (int i=0;i<argc;i++){
  //  printf("argv%p: %s\n", argv[i], argv[i]);
  //}
  //char **envp = (char **)((char **)argv + argc + 1);
  //printf("envp addr = %p\n", envp);
  //environ = envp;
  //printf("main start\n");
  //exit(main(argc, argv, envp));
  char *empty[] =  {NULL };
  environ = empty;
  //assert(1==2);
  //assert(0);
  exit(main(0, empty, empty));
  assert(0);
}
