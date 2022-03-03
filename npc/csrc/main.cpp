#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vexample.h"

int main(int argc, char** argv) {
  printf("Hello, ysyx!\n");
  // declear global configuration
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);
  // waveform file pointer
  VerilatedVcdC* tfp = new VerilatedVcdC;
  // parameters(do not really understand)
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  // top module defination
  Vexample* switches = new Vexample{contextp};
  // input initialization
  vluint64_t sim_time = 0;
  switches->a = 0;
  switches->b = 0;
  // waveform gen
  switches->trace(tfp,0);
  tfp->open("switch_sim.vcd");
  // set stop conditions manually by sim time
  while (!contextp->gotFinish() && sim_time < 50){
	  int a = rand() & 1;
	  int b = rand() & 1;
	  switches->a = a;
	  switches->b = b;
	  switches->eval();
	  tfp->dump(sim_time);
	  printf("a=%d, b=%d, z=%d\n", a, b, switches->z);
	  assert(switches->z == (a^b));
	  sim_time++;
  }
  tfp->close();
  delete switches;
  delete contextp;
  return 0;
}
