#ifndef __RISCV64_REG_H__
#define __RISCV64_REG_H__

#include <common.h>
#define MEPC 0x341
#define MSTATUS 0x300
#define MCAUSE 0x342
#define MTVEC 0x305
static inline int check_reg_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 32));
  return idx;
}

static inline int check_csr_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 4096));
  int csr_idx;
  switch(idx){
    case MEPC: csr_idx=0;break;
    case MSTATUS: csr_idx=1;break;
    case MCAUSE: csr_idx=2;break;
    case MTVEC: csr_idx=3;break;
    default: assert(0);
  }
  return csr_idx;
}

#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])
#define csr(idx) (cpu.csr[check_csr_idx(idx)])

static inline const char* reg_name(int idx, int width) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}

#endif
