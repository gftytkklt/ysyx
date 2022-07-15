#include <stdint.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char *argv[], char *envp[]);
extern char **environ;
void call_main(uintptr_t *args) {
  //printf("in callmain, main = %p\n", (void*)main);
  int argc = *((int*)args);
  char **argv = (char **)((int*)args + 1);
  char **envp = (char **)((char **)argv + argc + 1);
  //char *empty[] =  {NULL };
  environ = envp;
  exit(main(argc, argv, envp));
  assert(0);
}
