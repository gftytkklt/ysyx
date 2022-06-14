#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.csr[0] = epc;// mepc = epc
  cpu.csr[2] = NO;// mcause = NO
  return cpu.csr[3];// dnpc = mtvec
  //assert((BITS(cpu.csr[3],1,0) == 2) || (BITS(cpu.csr[3],1,0) == 0);
  //return (BITS(cpu.csr[3],1,0) == 0) ? cpu.csr[3] : ((cpu.csr[3] & 0xfffffffffffffffc) + NO*4);// dnpc = mtvec
}

word_t isa_query_intr() {
  switch(cpu.gpr[17]){
    case -1: return INTR_EMPTY & 0x0b;
    default: return INTR_EMPTY;
  }
  
  //return INTR_EMPTY;
}
