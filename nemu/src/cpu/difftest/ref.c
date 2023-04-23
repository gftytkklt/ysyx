#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>
uint64_t cur_pc;
void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  //assert(0);
  uint8_t* addr_pt = guest_to_host(addr);
  uint8_t* tmp = (uint8_t*) buf;
  if(direction == DIFFTEST_TO_DUT){
    for (int i=0;i<n;i++){
      tmp[i] = addr_pt[i];
    }
    //tmp[32] = cpu.pc;
  }
  else{
    for (int i=0;i<n;i++){
      addr_pt[i] = tmp[i];
    }
    //cpu.pc = tmp[32];
  }
}
// here, *dut must be dut reg
// TODO: add pc cp, set pc to correct value
void difftest_regcpy(void *dut, bool direction, bool iscpreg) {
  //assert(0);
  unsigned long* tmp = (unsigned long*) dut;
  if(direction == DIFFTEST_TO_DUT){
    if(iscpreg){
      for (int i=0;i<32;i++){
        tmp[i] = cpu.gpr[i];
      }
    }
    else{
      tmp[32] = cpu.pc;
    }
  }
  else{
    //printf("dut to ref\n");
    for (int i=0;i<32;i++){
      
      cpu.gpr[i] = tmp[i];
      //printf("%d: %lx\n",i, cpu.gpr[i]);
    }
    //cpu.pc = pc;
    //printf("end\n");
    cpu.pc = tmp[32];
  }
}

void difftest_exec(uint64_t n) {
  //assert(0);
  cpu_exec(n);
}

void difftest_raise_intr(word_t NO) {
  //assert(0);
  isa_raise_intr(NO, cpu.pc);
}

void difftest_ref_display() {
  isa_reg_display();
}

void difftest_init() {
  /* Perform ISA dependent initialization. */
  init_isa();
}
