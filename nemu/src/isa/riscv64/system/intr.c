#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  //printf("\nisa_raise_intr begin, NO = %lx, epc = %lx, pc=%lx\n",NO,epc,cpu.pc);
  word_t mie = BITS(cpu.csr[1],3,3);
  cpu.csr[0] = (NO == IRQ_TIMER) ? epc : epc + 4;// mepc = epc
  //printf("mstatus before: %lx\n",cpu.csr[1]);
  cpu.csr[1] = (cpu.csr[1] & (~0x88ul)) | (mie << 7);
  //cpu.csr[1] = 
  //printf("mstatus after: %lx\n",cpu.csr[1]);
  cpu.csr[2] = NO;// mcause = NO
  //isa_reg_display();
  //printf("sp: %lx\n",cpu.gpr[2]);
  //printf("isa_raise_intr end, jump to %lx\n",cpu.csr[3]);
  return cpu.csr[3];// dnpc = mtvec
  //assert((BITS(cpu.csr[3],1,0) == 2) || (BITS(cpu.csr[3],1,0) == 0);
  //return (BITS(cpu.csr[3],1,0) == 0) ? cpu.csr[3] : ((cpu.csr[3] & 0xfffffffffffffffc) + NO*4);// dnpc = mtvec
}


// when INTR comes and MIE neq 0, trigger IRQ_TIMER
word_t isa_query_intr() {
  //printf("INTR: %d, matatus: %lx\n",cpu.INTR, cpu.csr[1]);
  if(cpu.INTR && (cpu.csr[1] & 0x8)){
  //if(cpu.INTR){
    //printf("timer irq\n");
    cpu.INTR = 0;
    return IRQ_TIMER;
  }
  return INTR_EMPTY;
}
