#ifndef ARCH_H__
#define ARCH_H__

struct Context {
  // TODO: fix the order of these members to match trap.S
  //uintptr_t mepc, mcause, gpr[32], mstatus;
  uintptr_t gpr[32], mcause, mstatus, mepc; // addr 0-31, addr 32-34
  void *pdir;// addr 35
};

#define GPR1 gpr[17] // a7
#define GPR2 gpr[0] // a0
#define GPR3 gpr[11] // a1
#define GPR4 gpr[12] // a2
#define GPRx gpr[0] // a0
#endif
