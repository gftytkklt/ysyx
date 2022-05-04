#include "sdb.h"
#define RINGBUF_LEN 32
static ringbuf ring[RINGBUF_LEN] = {};
static ringbuf* current_buf;
void init_ringbuf() {
  for (int i=0;i<(RINGBUF_LEN-1);i++) {
  strcpy(ring[i].instlog, "empty");
  ring[i].next = &ring[i+1];
  }
  strcpy(ring[RINGBUF_LEN-1].instlog, "empty");
  ring[RINGBUF_LEN-1].next = &ring[0];
  current_buf = ring;
}

void write_ringbuf(char *str){
  snprintf(current_buf->instlog, 128, "%s", str);
  current_buf = current_buf->next;
}
void inst_hist_display() {
  for (int i=0;i<RINGBUF_LEN;i++){
    if (current_buf == ring[i].next) {printf("--> ");}
    else {printf("    ");}
    printf("%s\n", ring[i].instlog);
  }
}
