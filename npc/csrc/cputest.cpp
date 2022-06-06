#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <getopt.h>
#include <malloc.h>
#include <random>
#include "verilated.h"
#include "verilated_dpi.h"
#include "verilated_vcd_c.h"
#include "Vcpu_top.h"
#include "svdpi.h"
#include "Vcpu_top__Dpi.h"
#define N 32
#define CONFIG_FTRACE
#define CONFIG_ITRACE
static Vcpu_top* cpu;
static unsigned* mem = NULL;
static bool finish = false;
static char *img_file = NULL;
static char *elf_file = NULL;
static long size = 0;
//static svBit good = false;
//extern void check();
vluint64_t sim_time = 0;
uint64_t *cpu_gpr = NULL;
uint64_t *cpu_pc = NULL;
uint32_t *inst = NULL;
#ifdef CONFIG_ITRACE
void init_disasm(const char *triple);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
#endif
#ifdef CONFIG_FTRACE
void init_elf(char* elf_file);
void print_ftrace(unsigned long pc, unsigned long dnpc, unsigned inst, FILE* fp);
#endif
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_pc_ptr(const svOpenArrayHandle r) {
  cpu_pc = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_inst_ptr(const svOpenArrayHandle r) {
  inst = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
double sc_time_stamp(){
	return sim_time;
}

void sim_end(){
  //set_gpr_ptr(10);
  //printf("%ld\n", cpu_gpr[10]);
  if(cpu_gpr[10]){
    printf("Hit bad trap at pc = 0x%lx\n", *cpu_pc);
  }
  else{
    printf("Hit good trap at pc = 0x%lx\n", *cpu_pc);
  }
  //printf(" C: Im called fronm Scope :: %s \n\n ",svGetNameFromScope(svGetScope() ));
  //Vcpu_top::check();
  finish = true;
}

static unsigned pmem_read(unsigned long pc){
	unsigned index = (pc-(unsigned long)0x80000000)/4;
	return index > size ? 0 : mem[index];
}

static long load_img() {
  if (img_file == NULL) {
    printf("No image is given. Use the default build-in image.\n");
    return 0; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  //Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);
  mem = (unsigned *)malloc(size);
  fseek(fp, 0, SEEK_SET);
  //int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  int ret = fread(mem, size, 1, fp);
  assert(ret == 1);
  fclose(fp);
  return size;
}

int main(int argc, char** argv, char** env) {
  printf("Hello, ysyx!\n");
  Verilated::commandArgs(argc, argv);
  cpu = new Vcpu_top;
  //const svScope scope = svGetScopeFromName("TOP.cpu_top");
  //const svScope scope = svGetScope();
  //assert(scope);
  //svSetScope(scope);
  // waveform file pointer
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  // waveform gen
  cpu->trace(tfp,99);
  tfp->open("cpu_sim.vcd");
  // init imgfile
  img_file=argv[1];
  size = load_img();
  FILE* logfp = fopen("npc-log.txt","w");
  #ifdef CONFIG_ITRACE
  init_disasm("riscv64" "-pc-linux-gnu");
  #endif
  #ifdef CONFIG_FTRACE
  elf_file = argv[2];
  init_elf(elf_file);
  #endif
  
  //inst_gen(false);
  // sim
  char logbuf[256] = {};
  bool valid_posedge = false;
  unsigned long pc, dnpc;
  while (!finish){
	  //int a = rand() & 1;
	  //int b = rand() & 1;
	  //printf("%ld\n", sim_time);
	  //single_cycle();
	  if(sim_time < 10){cpu->I_rst = 1;}
	  else{cpu->I_rst = 0;}
	  if((sim_time % 6) == 0){cpu->I_sys_clk = 1;}
	  else if((sim_time % 6) == 3){cpu->I_sys_clk = 0;}
	  if(((sim_time % 6) == 0) && (cpu->I_rst == 0)){valid_posedge = true;}
	  else{valid_posedge = false;}
	  //if(((sim_time % 6) == 0)&&(cpu->I_rst==0)){}
	  cpu->I_inst = pmem_read(cpu->O_pc);
	  pc = cpu->O_pc;
	  cpu->eval();
	  dnpc = cpu->O_pc;
	  if(valid_posedge){
	  #ifdef CONFIG_ITRACE
	  //printf("start disasm\n");
	  fprintf(logfp, "%lx: %08x ",pc, cpu->I_inst);
	  disassemble(logbuf, 128, pc, (uint8_t *)&cpu->I_inst, 4);
	  fprintf(logfp, "%s\n",logbuf);
	  #endif
	  #ifdef CONFIG_FTRACE
	  print_ftrace(pc, dnpc, cpu->I_inst, logfp);
	  #endif
	  }
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
