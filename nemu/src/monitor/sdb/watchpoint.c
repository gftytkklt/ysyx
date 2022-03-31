#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;
//static int wp_num = 0;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
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
// occupied node from 0-N sequentially
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
void free_wp(WP* wp) {
  if (head->next == NULL){printf("no used watchpoint!\n");return;}
  for (WP* wp_pt = head;wp_pt->next != NULL;wp_pt = wp_pt->next) {
    if (wp_pt->next == wp) {
      wp_pt->next = wp_pt->next->next;
      wp->next = free_->next;
      free_->next = wp;
      return;
    }
  }
  printf("NO.%d WP not found!\n", wp->NO);
  return;
}
