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
void init_wp_pool();
void print_wp_info();
WP* new_wp();
void free_wp(int n);

//#define RINGBUF_LEN 32
typedef struct ringbuf{
  char instlog[128];
  struct ringbuf* next;
} ringbuf;
void init_ringbuf();
void write_ringbuf(char* str);
void inst_hist_display();
#endif
