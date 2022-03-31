#include "sdb.h"

#define NR_WP 32

//typedef struct watchpoint {
//  int NO;
//  struct watchpoint *next;
//  unsigned long expr_value;
//  char[128] expr;

  /* TODO: Add more members if necessary */

//} WP;

static WP wp_pool[NR_WP] = {};
static WP dummy_head = {}, dummy_free = {};
static WP *head = &dummy_head, *free_ = &dummy_free;
//static int wp_num = 0;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    //printf("%d\n",i);
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
    wp_pool[i].expr_value = 0;
    wp_pool[i].triggered_time = 0;
    //wp_pool[i].expr_str = [];
  }

  // head = NULL;
  // free_ = wp_pool;
  // use virtual head node
  head->NO = -1;
  head->next = NULL;
  free_->NO = -1;
  free_->next = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
// fetch head of free WP list, insert it to head of occupied WP list
WP* new_wp() {
  WP *new_node;
  if (free_->next == NULL) {
    printf("no more watchpoints!\n");
    return NULL;
  }
  else {
    new_node = free_->next;
    free_->next = free_->next->next;
    new_node->next = head->next;
    head->next = new_node;
  }
  //new_node = free_;
  //free_ = free_->next;
  //new_node->next = NULL;
  //wp_num ++;
  return new_node;
}

// add new free WP to head of free WP list
void free_wp(int n) {
  if (head->next == NULL){printf("no used watchpoint!\n");return;}
  for (WP *wp_pt = head;wp_pt->next != NULL;wp_pt = wp_pt->next) {
    if (wp_pt->next->NO == n) {
      WP *wp = wp_pt->next;
      wp_pt->next = wp_pt->next->next;
      wp->next = free_->next;
      free_->next = wp;
      return;
    }
  }
  printf("NO.%d WP not found!\n", n);
  return;
}
