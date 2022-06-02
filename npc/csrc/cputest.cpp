#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <random>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcpu_top.h"
#include "svdpi.h"
#include "Vcpu_top__Dpi.h"
#define N 32
static Vcpu_top* cpu;
static unsigned mem[N];
static bool finish = false;
vluint64_t sim_time = 0;
double sc_time_stamp(){
	return sim_time;
}

void sim_end(){
  printf("sim end\n");
  finish = true;
}

static unsigned pmem_read(unsigned long pc){
	unsigned index = (pc-(unsigned long)0x80000000)/4;
	return index > 31 ? 0 : mem[index];
}

static unsigned gen_rand(int max){
  std::random_device seed;
  std::ranlux48 engine(seed());
  std::uniform_int_distribution<> distrib(0, max);
  return distrib(engine);
}

static void inst_gen(bool rand){
  if(rand){
  unsigned rs1, rd, imm;
    for (int i=0;i<N-1;i++){
      rs1 = gen_rand(31);
      rd = gen_rand(31);
      imm = gen_rand(16384);
      mem[i] = (imm<<20) | (rs1<<15) | (rd << 7) | 19;
      //printf("%d: %x %x %x\n",i,rs1,rd,mem[i]);
    }
    mem[N-1] = 0x00100073;
  }
  else{
    const unsigned arr[14] = {0x00000413, 0x00009117, 0xffc10113, 0x00c000ef, 0x00000513, 0x00008067, 0xff010113, 0x00000517, 0x01c50513, 0x00113423, 0xfe9ff0ef, 0x00050513, 0x00100073, 0x0000006f};
    for (int i=0;i<14;i++){
      mem[i] = arr[i];
    }
  }
}

int main(int argc, char** argv) {
  printf("Hello, ysyx!\n");
  for (int i = 0;i<argc;i++){printf("%d: %s\n", i+1, argv[i]);}
  // declear global configuration
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);
  // waveform file pointer
  VerilatedVcdC* tfp = new VerilatedVcdC;
  // parameters(do not really understand)
  // this will influence sim time
  // e.g. verilatedvcdc must be called before time 0
  //VerilatedContext* contextp = new VerilatedContext;
  //contextp->commandArgs(argc, argv);
  // top module defination
  //Vexample* switches = new Vexample{contextp};
  cpu = new Vcpu_top;
  // input initialization
  // waveform gen
  cpu->trace(tfp,99);
  tfp->open("cpu_sim.vcd");
  // set stop conditions manually by sim time
  //reset(10);
  inst_gen(false);
  
  while (!finish){
	  //int a = rand() & 1;
	  //int b = rand() & 1;
	  //printf("%ld\n", sim_time);
	  //single_cycle();
	  if(sim_time < 10){cpu->I_rst = 1;}
	  else{cpu->I_rst = 0;}
	  if((sim_time % 6) == 0){cpu->I_sys_clk = 1;}
	  else if((sim_time % 6) == 3){cpu->I_sys_clk = 0;}
	  cpu->I_inst = pmem_read(cpu->O_pc);
	  cpu->eval();
	  tfp->dump(sim_time);
	  sim_time++;
  }
  //printf("a\n");
  cpu->final();
  //printf("b\n");
  tfp->close();
  delete cpu;
  //delete contextp;
  return 0;
}
