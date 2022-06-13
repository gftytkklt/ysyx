#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.csr[0] = epc;// mepc = epc
  cpu.csr[2] = NO;// mcause = NO
  
  return cpu.csr[3];// dnpc = mtvec
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
