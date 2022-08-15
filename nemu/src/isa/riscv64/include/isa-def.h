#ifndef __ISA_RISCV64_H__
#define __ISA_RISCV64_H__

#include <common.h>

typedef struct {
  word_t gpr[32];
  //word_t mepc, mstatus, mcause, mtvec;
  vaddr_t pc;
  word_t csr[5]; //mepc, mstatus, mcause, mtvec, satp;
  bool INTR; // clock interrupter
} riscv64_CPU_state;

// decode
typedef struct {
  union {
    uint32_t val;
  } inst;
} riscv64_ISADecodeInfo;

#define isa_mmu_check(vaddr, len, type) (BITS(cpu.csr[4],63,63) ? (MMU_TRANSLATE) : (MMU_DIRECT))

#endif
