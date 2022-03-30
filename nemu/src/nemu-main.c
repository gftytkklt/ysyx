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
  unsigned long ref_result = 0;
  unsigned long result = 0;
  char exprs[1024] = {};
  bool success;
  bool *success_p = &success;
  int row = 0;
  while ((fgets (line, 1024, fp1)) != NULL)
 {
  row++;
  //fputs (line, stdout);
  sscanf(line, "%lu %[^\n]", &ref_result, exprs);
  //exprs = &line[2];
  *success_p = true;
  result = expr(exprs, success_p);
  if (!(*success_p)) {printf("invalid formula %d: %s\n",row,exprs);}
  else if (result != ref_result) {
    printf("error cal at %dth expr %s, ref = %lu, cal = %lu\n",row,exprs,ref_result,result);
  }
  //unsigned long test_64 = 208915691UL/2001039609UL+((104932880UL))*1588245785UL/(1066399769UL);
  //printf("64 bit ref = %lu\n",test_64);
  //else {printf("formula %d passed!\n",row);}
  //printf("%d %s\n", result, exprs);
 }
  printf("comp finish\n");
  return 0;
}
