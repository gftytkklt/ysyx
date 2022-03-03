#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "verilated.h"
#include "Vexample.h"
vluint64_t sim_time = 0;
int main(int argc, char** argv) {
  printf("Hello, ysyx!\n");
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  Vexample* switches = new Vexample{contextp};
  while (!contextp->gotFinish() && sim_time < 50){
	  int a = rand() & 1;
	  int b = rand() & 1;
	  switches->a = a;
	  switches->b = b;
	  switches->eval();
	  printf("a=%d, b=%d, z=%d\n", a, b, switches->z);
	  assert(switches->z == (a^b));
	  sim_time++;
  }
  delete switches;
  delete contextp;
  return 0;
}
