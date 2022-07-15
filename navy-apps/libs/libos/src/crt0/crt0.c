#include <stdint.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char *argv[], char *envp[]);
extern char **environ;
void call_main(uintptr_t *args) {
  //printf("in callmain, main = %p\n", (void*)main);
  argc = *((int*)args);
  argv = (char **)((int*)args + 1);
  envp = (char **)((char **)argv + argc + 1);
  //char *empty[] =  {NULL };
  environ = envp;
  exit(main(argc, empty, envp));
  assert(0);
}
