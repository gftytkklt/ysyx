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
  FILE *fp1 = fopen("input","r");
  if (fp1==NULL){puts("fopen error\n");return 0;}
  char line[1024] = {}; 
  while ((fgets (line, 1024, fp1)) != NULL)
 {
  fputs (line, stdout);
 }
  return 0;
}
