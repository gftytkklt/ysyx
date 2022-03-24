#include <common.h>
#include "monitor/sdb/sdb.h"
void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  /* Start engine. */
  //engine_start();
  
  //return is_exit_status_bad();
  // modified for test expr.c
  FILE *fp1;
  fp1 = fopen("/home/gftyt/ysyx-workbench/nemu/tools/gen-expr/build/input","r");
  if (fp1==NULL){puts("fopen error\n");return 0;}
  char line[1024] = {};
  unsigned result = 0;
  char exprs[1024] = {};
  while ((fgets (line, 1024, fp1)) != NULL)
 {
  //fputs (line, stdout);
  sscanf(line, "%d %s", &result, exprs);
  printf("%d %s\n", result, exprs);
 }
  return 0;
}
