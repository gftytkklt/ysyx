#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <malloc.h>
#include <stdint.h>
#include <time.h>
#include <sys/time.h>
#include "verilated.h"
#include "verilated_dpi.h"
#include "verilated_vcd_c.h"
#include "Vysyx_22040750_cpu_top.h"
#include "svdpi.h"
#include "Vysyx_22040750_cpu_top__Dpi.h"
//#define N 32
//#define CONFIG_FTRACE
//#define CONFIG_ITRACE
#define CONFIG_DIFFTEST
//#define CONFIG_WAVEFORM
#define ASNI_FG_RED     "\33[1;31m"
#define ASNI_FG_GREEN   "\33[1;32m"
#define ASNI_NONE       "\33[0m"
#define ASNI_FMT(str, fmt) fmt str ASNI_NONE
static Vysyx_22040750_cpu_top* cpu;
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
struct cpu_context {
  uint64_t gpr[32];
  uint64_t *pc;
};
static struct cpu_context context = {};
static uint64_t *cpu_gpr = NULL;
static uint64_t *cpu_pc = NULL;
static uint64_t *wb_pc = NULL;
static uint64_t *skip_pc = NULL;
static uint32_t *inst = NULL;
static uint32_t *wb_inst = NULL;
static bool *wb_valid = NULL;
static bool *wb_bubble = NULL;
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
void difftest_step(uint64_t pc, uint64_t* dut, uint64_t sim_time, bool* error);
void difftest_skip_ref(uint64_t pc);
#endif
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
  //cpu_context->gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_pc_ptr(const svOpenArrayHandle r) {
  cpu_pc = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
  //cpu_context->pc = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_wb_ptr(const svOpenArrayHandle r) {
  wb_valid = (bool *)(((VerilatedDpiOpenVar*)r)->datap());
  //cpu_context->pc = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_wb_pc_ptr(const svOpenArrayHandle r) {
  wb_pc = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
  //cpu_context->pc = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_skip_pc_ptr(const svOpenArrayHandle r) {
  skip_pc = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
  //cpu_context->pc = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_inst_ptr(const svOpenArrayHandle r) {
  inst = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_wb_inst_ptr(const svOpenArrayHandle r) {
  wb_inst = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_wb_bubble_ptr(const svOpenArrayHandle r) {
  wb_bubble = (bool *)(((VerilatedDpiOpenVar*)r)->datap());
}
double sc_time_stamp(){
	return sim_time;
}

void sim_end(){
  //set_gpr_ptr(10);
  //printf("%ld\n", cpu_gpr[10]);
  if(cpu_gpr[10]){
    printf("%s at pc = 0x%016lx\n", ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED), *wb_pc);
  }
  else{
    printf("%s at pc = 0x%016lx\n", ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN), *wb_pc);
  }
  //printf(" C: Im called fronm Scope :: %s \n\n ",svGetNameFromScope(svGetScope() ));
  //Vcpu_top::check();
  finish = true;
}

static void pmem_read(unsigned long raddr, unsigned long* rdata) {
	if (raddr == 0xa0000048) {
		#ifdef CONFIG_DIFFTEST
		//printf("pc=%lx, mmio rd\n",*skip_pc);
		difftest_skip_ref(*skip_pc);
		#endif
	        struct timeval now;
  		gettimeofday(&now, NULL);
  		*rdata = now.tv_sec * 1000000 + now.tv_usec;
		//*rdata = get_time();
		//time((time_t*)rdata);
		//printf("rtc read: %lu\n", *rdata);
	}
	else if(raddr >= 0x80000000 && raddr <= 0x88000000) {
		//printf("pmem read\n");
		unsigned index = (raddr-(unsigned long)0x80000000) & ~(0x7ul);
		*rdata = index > mem_size ? 0 : *((unsigned long*)&mem[index]);
	}
	else {
		//printf("invalid raddr %lx\n", raddr);
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
				#ifdef CONFIG_DIFFTEST
				//printf("pc=%lx, mmio wr\n",*skip_pc);
				difftest_skip_ref(*skip_pc);
				#endif
				//printf("serial write\n");
				//printf("%c", *data_pt);
				putchar(*(char*)data_pt);
			}
			else if(waddr >= 0x80000000 && waddr <= 0x88000000) {
				//printf("pmem write\n");
				mem[index] = *data_pt;
			}
			else {
				//printf("invalid waddr %lx\n", waddr);
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
  cpu = new Vysyx_22040750_cpu_top;
  //const svScope scope = svGetScopeFromName("TOP.cpu_top");
  //const svScope scope = svGetScope();
  //assert(scope);
  //svSetScope(scope);
  
  #ifdef CONFIG_WAVEFORM
  // waveform file pointer
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  // waveform gen
  cpu->trace(tfp,99);
  tfp->open("cpu_sim.vcd");
  #endif
  
  // init imgfile
  img_file=argv[1];
  img_size = load_img();
  #ifdef CONFIG_ITRACE
  FILE* logfp = fopen("npc-log.txt","w");
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
  unsigned long pc, dnpc, raddr;
  bool pc_valid, rd_en, wr_en;
  unsigned long *inst64 = (unsigned long*)malloc(sizeof(unsigned long));
  bool wb_valid_difftest;
  uint64_t wb_pc_difftest;
  uint32_t wb_inst_difftest;
  bool difftest_error = false;
  while (!finish){
	  if(sim_time == 1){
	  #ifdef CONFIG_DIFFTEST
	  //printf("%lu\n", sim_time);
	  printf("difftest: %s\n",ASNI_FMT("ON", ASNI_FG_GREEN));
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
	  pc = cpu->O_pc;
	  pc_valid = cpu->O_pc_valid;
	  rd_en = cpu->O_mem_rd_en;
	  raddr = cpu->O_mem_addr;
	  //wr_en = cpu->O_mem_wen;
	  
	  //pmem_read(pc, inst64);
	  //printf("%016lx\n", *inst64);
	  //printf("t2\n");
	  //cpu->I_inst = (pc % 8) ? *((unsigned*)(inst64)+1) : *((unsigned*)inst64);
	  if(wb_valid){
	  	wb_valid_difftest = *wb_valid & ~*wb_bubble;
	  	wb_pc_difftest = *wb_pc;
	  	wb_inst_difftest = *wb_inst;
	  }
	  
	  //bool wb_valid_difftest = 0;
	  //uint64_t wb_pc_difftest = 0;
	  cpu->eval();
	  if(valid_posedge){
	  		// IF: inst_valid must be high AFTER posedge clk, 1 clk delay after pc_valid
	  		if(pc_valid){
	  			pmem_read(pc, inst64);
	  			cpu->I_inst = (pc % 8) ? *((unsigned*)(inst64)+1) : *((unsigned*)inst64);
	  			cpu->I_inst_valid = 1;
	  		}
	  		else{cpu->I_inst_valid = 0;}
	  		//if(cpu->O_mem_rd_en){
	  		// MEM RD: valid must be high AFTER posedge clk, 1 clk delay after rd_valid
	  		if(rd_en){
	  			//pmem_read(cpu->O_mem_addr, &(cpu->I_mem_rd_data));
	  			pmem_read(raddr, &(cpu->I_mem_rd_data));
	  			cpu->I_mem_rd_data_valid = 1;
	  			#ifdef CONFIG_ITRACE
	  			//fprintf(logfp,"rd data %lx from %lx\n", cpu->I_mem_rd_data, cpu->O_mem_addr);
	  			fprintf(logfp,"time: %lu\nrd data %lx from %lx\n",sim_time, cpu->I_mem_rd_data, raddr);
	  			//printf("time: %lu\nrd data %lx from %lx\n",sim_time, cpu->I_mem_rd_data, raddr);
	  			#endif
	  		}
	  		else{cpu->I_mem_rd_data_valid = 0;}
	  		// MEM WR: simple wr simulation
	  		if(cpu->O_mem_wen){
	  		//if(wr_en){
	  			pmem_write(cpu->O_mem_addr, cpu->O_mem_wr_data, cpu->O_mem_wr_strb);
	  			#ifdef CONFIG_ITRACE
	  			fprintf(logfp,"time: %lu\nwr data %lx to %lx\n",sim_time, cpu->O_mem_wr_data, cpu->O_mem_addr);
	  			//printf("time: %lu\nwr data %lx to %lx\n",sim_time, cpu->O_mem_wr_data, cpu->O_mem_addr);
	  			#endif
	  		}
	  }
	  //cpu->eval();
	  dnpc = cpu->O_pc;
	  if(valid_posedge){
	  //printf("dut exec\n");
	  	/*if(pc_valid){
	  		pmem_read(pc, inst64);
	  		cpu->I_inst = (pc % 8) ? *((unsigned*)(inst64)+1) : *((unsigned*)inst64);
	  		cpu->I_inst_valid = 1;
	  	}
	  	else{cpu->I_inst_valid = 0;}*/
	  /*if(cpu->O_mem_rd_en){
	  	#ifdef CONFIG_ITRACE
	  	fprintf(logfp,"rd data %lx from %lx\n", cpu->I_mem_rd_data, cpu->O_mem_addr);
	  	#endif
	  	pmem_read(cpu->O_mem_addr, &(cpu->I_mem_rd_data));
	  }
	  if(cpu->O_mem_wen){
	  	#ifdef CONFIG_ITRACE
	  	fprintf(logfp,"wr data %lx to %lx\n", cpu->O_mem_wr_data, cpu->O_mem_addr);
	  	#endif
	  	pmem_write(cpu->O_mem_addr, cpu->O_mem_wr_data, cpu->O_mem_wr_strb);
	  }*/
	  
	  #ifdef CONFIG_ITRACE
	  //printf("start disasm\n");
	  if(wb_valid_difftest){
	  fprintf(logfp,"time: %lu\n", sim_time);
	  fprintf(logfp, "%lx: %08x ",wb_pc_difftest, wb_inst_difftest);
	  disassemble(logbuf, 128, wb_pc_difftest, (uint8_t *)&wb_inst_difftest, 4);
	  fprintf(logfp, "%s\n",logbuf);
	  }
	  #endif
	  #ifdef CONFIG_FTRACE
	  print_ftrace(pc, dnpc, cpu->I_inst, logfp);
	  #endif
	  #ifdef CONFIG_DIFFTEST
	  if(wb_valid_difftest) {
	  	//printf("exec difftest at %lu(pc = %lx)\n",sim_time, wb_pc_difftest);
	  	difftest_step(wb_pc_difftest, cpu_gpr, sim_time, &difftest_error);
	  	if(difftest_error){printf("error pc at %lx!\n\n", wb_pc_difftest);break;}
	  }
	  #endif
	  }
	  #ifdef CONFIG_WAVEFORM
	  tfp->dump(sim_time);
	  #endif
	  sim_time++;
	  // test dummy
	  // if(sim_time == 50000){printf("timeout!\n");break;}
  }
  //printf("a\n");
  cpu->final();
  //printf("b\n");
  #ifdef CONFIG_WAVEFORM
  tfp->close();
  #endif
  delete cpu;
  //delete contextp;
  return 0;
}
