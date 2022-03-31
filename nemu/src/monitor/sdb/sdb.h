#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

word_t expr(char *e, bool *success);
//struct watchpoint;
typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  unsigned long expr_value;
  char expr_str[128];
  int triggered_time;
  /* TODO: Add more members if necessary */

} WP;
#endif
