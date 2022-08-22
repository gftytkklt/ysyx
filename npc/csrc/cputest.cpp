#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <malloc.h>
#include <stdint.h>
#include <time.h>
#include "verilated.h"
#include "verilated_dpi.h"
#include "verilated_vcd_c.h"
#include "Vcpu_top.h"
#include "svdpi.h"
#include "Vcpu_top__Dpi.h"
//#define N 32
#define CONFIG_FTRACE
#define CONFIG_ITRACE
#define CONFIG_DIFFTEST
#define ASNI_FG_RED     "\33[1;31m"
#define ASNI_FG_GREEN   "\33[1;32m"
#define ASNI_NONE       "\33[0m"
#define ASNI_FMT(str, fmt) fmt str ASNI_NONE
static Vcpu_top* cpu;
static int mem_size = 0x8000000;
static uint8_t* mem = NULL;
static bool finish = false;
static char *img_file = NULL;
static char *elf_file = NULL;
static char *ref_so_file = NULL;
static long img_size = 0;
//static svBit good = false;
//extern void check();
vluint64_t sim_time = 0;
static uint64_t *cpu_gpr = NULL;
static uint64_t *cpu_pc = NULL;
static uint32_t *inst = NULL;
#ifdef CONFIG_ITRACE
void init_disasm(const char *triple);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
#endif
#ifdef CONFIG_FTRACE
void init_elf(char* elf_file);
void print_ftrace(unsigned long pc, unsigned long dnpc, unsigned inst, FILE* fp);
#endif
#ifdef CONFIG_DIFFTEST
void init_difftest(char *ref_so_file, long img_size, uint8_t* mem, uint64_t *cpu_gpr);
void difftest_step(uint64_t pc, uint64_t* dut, uint64_t sim_time);
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
    printf("%s at pc = 0x%016lx\n", ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED), *cpu_pc);
  }
  else{
    printf("%s at pc = 0x%016lx\n", ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN), *cpu_pc);
  }
  //printf(" C: Im called fronm Scope :: %s \n\n ",svGetNameFromScope(svGetScope() ));
  //Vcpu_top::check();
  finish = true;
}

static void pmem_read(unsigned long raddr, unsigned long* rdata) {
	if (raddr == 0xa0000048) {
		//printf("rtc read\n");
		time((time_t*)rdata);
	}
	else if(raddr >= 0x80000000 && raddr <= 0x88000000) {
		//printf("pmem read\n");
		unsigned index = (raddr-(unsigned long)0x80000000) & ~(0x7ul);
		*rdata = index > mem_size ? 0 : *((unsigned long*)&mem[index]);
	}
	else {
		printf("invalid raddr %lx\n", raddr);
		//assert(0);
	}
	//return index > img_size ? 0 : *((unsigned *)&mem[index]);
}

static void pmem_write(unsigned long waddr, unsigned long wdata, unsigned char wmask){
	unsigned index = (waddr-(unsigned long)0x80000000) & ~(0x7ul);
	uint8_t *data_pt = (uint8_t*)&wdata;
	// sim of byte write enable mode
	while(wmask!=0) {
		if(wmask & 0x01){
			if(waddr == 0xa00003f8) {
				//printf("serial write\n");
				//printf("%c", *data_pt);
				putchar(*(char*)data_pt);
			}
			else if(waddr >= 0x80000000 && waddr <= 0x88000000) {
				//printf("pmem write\n");
				mem[index] = *data_pt;
			}
			else {
				printf("invalid waddr %lx\n", waddr);
				//assert(0);
			}
		}
		index++;data_pt++;
		wmask = wmask >> 1;
	}
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
  mem = (uint8_t *)malloc(mem_size);
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
  img_size = load_img();
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
  unsigned long *inst64 = (unsigned long*)malloc(sizeof(unsigned long));
  while (!finish){
	  //int a = rand() & 1;
	  //int b = rand() & 1;
	  //printf("%ld\n", sim_time);
	  //single_cycle();
	  if(sim_time == 1){
	  #ifdef CONFIG_DIFFTEST
	  //printf("%lu\n", sim_time);
  	  ref_so_file = argv[3];
	  init_difftest(ref_so_file, img_size, mem, cpu_gpr);
	  #endif
	  }
	  if(sim_time < 10){cpu->I_rst = 1;}
	  else{cpu->I_rst = 0;}
	  if((sim_time % 6) == 0){cpu->I_sys_clk = 1;}
	  else if((sim_time % 6) == 3){cpu->I_sys_clk = 0;}
	  if(((sim_time % 6) == 0) && (cpu->I_rst == 0)){valid_posedge = true;}
	  else{valid_posedge = false;}
	  //if(((sim_time % 6) == 0)&&(cpu->I_rst==0)){}
	  //pmem_read(cpu->O_pc, inst);
	  //cpu->I_inst = pmem_read(cpu->O_pc);
	  pc = cpu->O_pc;
	  //printf("t1\n");
	  pmem_read(pc, inst64);
	  //printf("%016lx\n", *inst64);
	  //printf("t2\n");
	  cpu->I_inst = (pc % 8) ? *((unsigned*)(inst64)+1) : *((unsigned*)inst64);
	  if(cpu->O_mem_rd_en){
	  	//fprintf(logfp,"rd data %lx from %lx\n", cpu->I_mem_rd_data, cpu->O_mem_addr);
	  	pmem_read(cpu->O_mem_addr, &(cpu->I_mem_rd_data));
	  }
	  //printf("t3\n");
	  cpu->eval();
	  dnpc = cpu->O_pc;
	  if(valid_posedge){
	  fprintf(logfp,"time: %lu\n", sim_time);
	  if(cpu->O_mem_rd_en){
	  	fprintf(logfp,"rd data %lx from %lx\n", cpu->I_mem_rd_data, cpu->O_mem_addr);}
	  if(cpu->O_mem_wen){
	  	fprintf(logfp,"wr data %lx to %lx\n", cpu->O_mem_wr_data, cpu->O_mem_addr);
	  	pmem_write(cpu->O_mem_addr, cpu->O_mem_wr_data, cpu->O_mem_wr_strb);
	  }
	  
	  #ifdef CONFIG_ITRACE
	  //printf("start disasm\n");
	  fprintf(logfp, "%lx: %08x ",pc, cpu->I_inst);
	  disassemble(logbuf, 128, pc, (uint8_t *)&cpu->I_inst, 4);
	  fprintf(logfp, "%s\n",logbuf);
	  #endif
	  #ifdef CONFIG_FTRACE
	  print_ftrace(pc, dnpc, cpu->I_inst, logfp);
	  #endif
	  #ifdef CONFIG_DIFFTEST
	  difftest_step(pc, cpu_gpr, sim_time);
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
