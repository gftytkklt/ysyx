#include "verilated.h"
#include "verilated_dpi.h"
#include "verilated_vcd_c.h"
#include "Vysyx_22040750_cpu_top.h"
#include "svdpi.h"
#include "Vysyx_22040750_cpu_top__Dpi.h"
#include <global.h>
#include <memory.h>
#include <util.h>
static Vysyx_22040750_cpu_top* cpu;
//static int mem_size = 0x8000000;
//static uint8_t* mem = NULL;
static bool finish = false;
static char *img_file = NULL;
static char *elf_file = NULL;
static char *ref_so_file = NULL;
static long img_size = 0;
extern const char* regs[];
uint8_t* mem=NULL;
//static svBit good = false;
//extern void check();
vluint64_t sim_time = 0;
uint64_t dump_time = 0;

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
static bool *wb_mem_op = NULL;
static uint64_t *wb_mem_addr = NULL;
#ifdef CONFIG_ITRACE
void init_disasm(const char *triple);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
void init_ringbuf();
void write_ringbuf(char *str);
void inst_hist_display();
#endif
#ifdef CONFIG_FTRACE
void init_elf(char* elf_file);
void print_ftrace(unsigned long pc, unsigned long dnpc, unsigned inst, FILE* fp);
#endif
#ifdef CONFIG_DIFFTEST
void init_difftest(char *ref_so_file, long img_size, uint8_t* mem, uint64_t *cpu_gpr);
void difftest_step(uint64_t pc, uint64_t* dut, uint64_t sim_time, bool* error);
void difftest_skip_ref();
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
extern "C" void set_wb_memop_ptr(const svOpenArrayHandle r) {
  wb_mem_op = (bool *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_wb_memaddr_ptr(const svOpenArrayHandle r) {
  wb_mem_addr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
  //cpu_context->pc = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
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
  mem = (uint8_t *)malloc(MEM_SIZE);
  fseek(fp, 0, SEEK_SET);
  //int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  int ret = fread(mem, size, 1, fp);
  assert(ret == 1);
  fclose(fp);
  return size;
}

void dut_reg_display(uint64_t* dut){
  for(int i=0;i<32;i++){
    printf("%s: %08lx    ", regs[i], dut[i]);
    if((i%4) == 3){printf("\n");}
  }
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
  printf("waveform: %s\n",ASNI_FMT("ON", ASNI_FG_GREEN));
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  // waveform gen
  cpu->trace(tfp,99);
  tfp->open("cpu_sim.vcd");
  #else
  printf("waveform: %s\n",ASNI_FMT("OFF", ASNI_FG_RED));
  #endif
  
  // init imgfile
  img_file=argv[1];
  img_size = load_img();
  #ifdef CONFIG_ITRACE
  printf("itrace: %s\n",ASNI_FMT("ON", ASNI_FG_GREEN));
  FILE* logfp = fopen("npc-log.txt","w");
  init_disasm("riscv64" "-pc-linux-gnu");
  init_ringbuf();
  #else
  printf("itrace: %s\n",ASNI_FMT("OFF", ASNI_FG_RED));
  #endif
  #ifdef CONFIG_FTRACE
  printf("ftrace: %s\n",ASNI_FMT("ON", ASNI_FG_GREEN));
  elf_file = argv[2];
  init_elf(elf_file);
  #else
  printf("ftrace: %s\n",ASNI_FMT("OFF", ASNI_FG_RED));
  #endif
  #ifdef CONFIG_GUI
    init_screen();
    init_input();
  #endif
  //inst_gen(false);
  // sim
  char logbuf[256] = {};
  bool valid_posedge = false;
  unsigned long pc, dnpc, raddr, waddr, wdata;
  unsigned char wmask;
  bool pc_valid, rd_en, wr_en;
  unsigned long *inst64 = (unsigned long*)malloc(sizeof(unsigned long));
  bool wb_valid_difftest;
  bool wb_memop_difftest;
  uint64_t wb_memaddr_difftest;
  uint64_t wb_pc_difftest;
  uint32_t wb_inst_difftest;
  bool mmio_op = false;
  bool difftest_error = false;
  
  while (!finish){
    if(sim_time == 1){
      #ifdef CONFIG_DIFFTEST
      printf("difftest: %s\n",ASNI_FMT("ON", ASNI_FG_GREEN));
      ref_so_file = argv[3];
      init_difftest(ref_so_file, img_size, mem, cpu_gpr);
      #else
      printf("difftest: %s\n",ASNI_FMT("OFF", ASNI_FG_RED));
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
    wr_en = cpu->O_mem_wen;
    waddr = cpu->O_mem_addr;
    wdata = cpu->O_mem_wr_data;
    wmask = cpu->O_mem_wr_strb;
    if(wb_valid){
      wb_valid_difftest = *wb_valid & ~*wb_bubble;
      wb_pc_difftest = *wb_pc;
      wb_inst_difftest = *wb_inst;
      wb_memop_difftest = *wb_mem_op;
      wb_memaddr_difftest = *wb_mem_addr;
      mmio_op = wb_memop_difftest && ((wb_memaddr_difftest<MEM_BASE) || (wb_memaddr_difftest>(MEM_BASE+MEM_SIZE)));
    }
    cpu->eval();
    dnpc = cpu->O_pc;
    if(valid_posedge){
      // IF: inst_valid must be high AFTER posedge clk, 1 clk delay after pc_valid
      if(pc_valid){
        pmem_read(pc, inst64, skip_pc);
        cpu->I_inst = (pc % 8) ? *((unsigned*)(inst64)+1) : *((unsigned*)inst64);
        cpu->I_inst_valid = 1;
      }
      else{cpu->I_inst_valid = 0;}
      // MEM RD: valid must be high AFTER posedge clk, 1 clk delay after rd_valid
      if(rd_en){
        pmem_read(raddr, &(cpu->I_mem_rd_data), skip_pc);
        cpu->I_mem_rd_data_valid = 1;
        #ifdef CONFIG_MTRACE
        if(sim_time > dump_time){fprintf(logfp,"time: %lu\nrd data %lx from %lx\n",sim_time, cpu->I_mem_rd_data, raddr);}
        #endif
      }
      else{cpu->I_mem_rd_data_valid = 0;}
      // MEM WR: simple wr simulation
      //if(cpu->O_mem_wen){
      if(wr_en){    
        //pmem_write(cpu->O_mem_addr, cpu->O_mem_wr_data, cpu->O_mem_wr_strb, skip_pc);
        pmem_write(waddr, wdata, wmask, skip_pc);
        cpu->I_mem_wr_data_valid = 1;
        #ifdef CONFIG_MTRACE
        if(sim_time > dump_time){fprintf(logfp,"time: %lu\nwr data %lx to %lx\n",sim_time, cpu->O_mem_wr_data, cpu->O_mem_addr);}
        #endif
      }
      else{cpu->I_mem_wr_data_valid = 0;}
    //}
    //dnpc = cpu->O_pc;
    //if(valid_posedge){
      #ifdef CONFIG_ITRACE
      if(wb_valid_difftest){
        char *p = logbuf;
        p += sprintf(p, "%lx: %08x ",wb_pc_difftest, wb_inst_difftest);
        disassemble(p, 128, wb_pc_difftest, (uint8_t *)&wb_inst_difftest, 4);
        if(sim_time > dump_time){
          fprintf(logfp, "time: %lu\n%s\n",sim_time,logbuf);
        }
        write_ringbuf(logbuf);
      }
      #endif
      #ifdef CONFIG_FTRACE
      print_ftrace(pc, dnpc, cpu->I_inst, logfp);
      #endif
      #ifdef CONFIG_DIFFTEST
      if(wb_valid_difftest) {
        if(mmio_op){
          //printf("mmio op at addr %lx, pc %lx\n", wb_pc_difftest, wb_memaddr_difftest);
          difftest_skip_ref();
        }
        difftest_step(wb_pc_difftest, cpu_gpr, sim_time, &difftest_error);
        if(difftest_error){
          printf("error pc at %lx!\n\n", wb_pc_difftest);
          #ifdef CONFIG_ITRACE
          inst_hist_display();
          #endif
          dut_reg_display(cpu_gpr);
          break;
        }
      }
      #endif
    }
    #ifdef CONFIG_WAVEFORM
    if(sim_time > dump_time){
      tfp->dump(sim_time);
    }
    #endif
    sim_time++;
    // test dummy
    // if(sim_time == 2000){printf("timeout!\n");break;}
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
