#include <stdint.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char *argv[], char *envp[]);
extern char **environ;
void call_main(uintptr_t *args) {
  printf("in callmain, main = %p\n", (void*)main);
  int argc = *((int*)args);
  printf("argc = %d, addr = %p\n", argc, args);
  char **argv = (char **)((int*)args + 1);
  printf("argv addr = %p\n", argv);
  char **envp = (char **)((char **)argv + argc + 1);
  printf("envp addr = %p\n", envp);
  environ = envp;
  exit(main(argc, argv, envp));
  //char *empty[] =  {NULL };
  //environ = empty;
  //exit(main(0, empty, empty));
  assert(0);
}
