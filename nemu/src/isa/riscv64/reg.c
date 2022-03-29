#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  for (int i=0;i<(sizeof(regs)/sizeof(char*));i++){
    printf("%s: %lx\n", regs[i], cpu.gpr[i]);
  }
}

word_t isa_reg_str2val(const char *s, bool *success) {
  char a[10];
  sscanf(s,"%s",a);
  for (int i=0;i<(sizeof(regs)/sizeof(char*));i++){
    if (!strcmp(a,regs[i])){*success = true;return cpu.gpr[i];}
  }
  printf("invalid reg name\n");
  *success = false;
  return 0;
}
