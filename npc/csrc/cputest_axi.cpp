#include "verilated.h"
#include "verilated_dpi.h"
#include "verilated_vcd_c.h"
#include "Vysyx_22040750.h"
#include "svdpi.h"
#include "Vysyx_22040750__Dpi.h"
#include <global.h>
#include <memory.h>
#include <axi.h>
#include <util.h>
static Vysyx_22040750* cpu;
static bool finish = false;
static char *img_file = NULL;
static char *elf_file = NULL;
static char *ref_so_file = NULL;
static long img_size = 0;
extern const char* regs[];
uint8_t* mem=NULL;
vluint64_t sim_time = 0;
uint64_t dump_inst = -1;
uint32_t dump_pc = 0x83021e14;
bool dump_en = false;

struct cpu_context {
  uint64_t gpr[32];
  uint64_t *pc;
};
// rtl signal watchpoints
static struct cpu_context context = {};
static uint64_t *cpu_gpr = NULL;
//static uint32_t *cpu_pc = NULL;
static uint32_t *wb_pc = NULL;
//static uint32_t *skip_pc = NULL;
// static uint32_t *inst = NULL;
static uint32_t *wb_inst = NULL;
static bool *wb_valid = NULL;
static bool *wb_bubble = NULL;
static bool *wb_mem_op = NULL;
static uint32_t *wb_mem_addr = NULL;
// catch cpu core output, axi_read/write only show 32B bus query, cache query is blocked
static uint32_t *cpu_mem_addr = NULL;
static uint64_t *cpu_rd_data = NULL;
static uint64_t *cpu_wr_data = NULL;
static bool* cpu_rd_valid = NULL;
static bool* cpu_wr_valid = NULL;
#ifdef CONFIG_ITRACE
void init_disasm(const char *triple);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
void init_ringbuf();
void write_ringbuf(char *str);
void inst_hist_display();
#endif
#ifdef CONFIG_FTRACE
void init_elf(char* elf_file);
void print_ftrace(unsigned long time, unsigned long pc, unsigned inst, FILE* fp);
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
// extern "C" void set_pc_ptr(const svOpenArrayHandle r) {
//   cpu_pc = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
//   //cpu_context->pc = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
// }
extern "C" void set_wb_ptr(const svOpenArrayHandle r) {
  wb_valid = (bool *)(((VerilatedDpiOpenVar*)r)->datap());
  //cpu_context->pc = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_wb_pc_ptr(const svOpenArrayHandle r) {
  wb_pc = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
  //cpu_context->pc = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
// extern "C" void set_skip_pc_ptr(const svOpenArrayHandle r) {
//   skip_pc = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
//   //cpu_context->pc = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
// }
// extern "C" void set_inst_ptr(const svOpenArrayHandle r) {
//   inst = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
// }
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
  wb_mem_addr = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
  //cpu_context->pc = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

extern "C" void set_cpu_mem_addr(const svOpenArrayHandle r) {
  cpu_mem_addr = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_cpu_rd_data(const svOpenArrayHandle r) {
  cpu_rd_data = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_cpu_wr_data(const svOpenArrayHandle r) {
  cpu_wr_data = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_cpu_rd_valid(const svOpenArrayHandle r) {
  cpu_rd_valid = (bool *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_cpu_wr_valid(const svOpenArrayHandle r) {
  cpu_wr_valid = (bool *)(((VerilatedDpiOpenVar*)r)->datap());
}

double sc_time_stamp(){
	return sim_time;
}

void sim_end(){
  //set_gpr_ptr(10);
  //printf("%ld\n", cpu_gpr[10]);
  if(cpu_gpr[10]){
    printf("%s at pc = 0x%08x, ret code=0x%lxh\n", ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED), *wb_pc, cpu_gpr[10]);
  }
  else{
    printf("%s at pc = 0x%08x\n", ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN), *wb_pc);
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

void save_model(const char* filenamep) {
    VerilatedSave os;
    os.open(filenamep);
    os << sim_time;  // user code must save the timestamp
    os << *cpu;
    printf("save model at %lu\n", sim_time);
}
void restore_model(const char* filenamep) {
    VerilatedRestore os;
    os.open(filenamep);
    os >> sim_time;
    os >> *cpu;
    printf("load model at %lu\n", sim_time);
}

int main(int argc, char** argv, char** env) {
  printf("Hello, ysyx!\n");
  Verilated::commandArgs(argc, argv);
  cpu = new Vysyx_22040750;
  //const svScope scope = svGetScopeFromName("TOP.cpu_top");
  //const svScope scope = svGetScope();
  //assert(scope);
  //svSetScope(scope);
  // init imgfile
  img_file=argv[1];
  img_size = load_img();
  
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
  
  #ifdef CONFIG_ITRACE
  printf("itrace: %s\n",ASNI_FMT("ON", ASNI_FG_GREEN));
  FILE* itrace = fopen("npc-itrace.txt","w");
  init_disasm("riscv64" "-pc-linux-gnu");
  init_ringbuf();
  #else
  printf("itrace: %s\n",ASNI_FMT("OFF", ASNI_FG_RED));
  #endif

  #ifdef CONFIG_FTRACE
  printf("ftrace: %s\n",ASNI_FMT("ON", ASNI_FG_GREEN));
  FILE* ftrace = fopen("npc-ftrace.txt","w");
  elf_file = argv[2];
  init_elf(elf_file);
  #else
  printf("ftrace: %s\n",ASNI_FMT("OFF", ASNI_FG_RED));
  #endif

  #ifdef CONFIG_MTRACE
  printf("mtrace: %s\n",ASNI_FMT("ON", ASNI_FG_GREEN));
  FILE* mtrace = fopen("npc-mtrace.txt","w");
  #else
  printf("mtrace: %s\n",ASNI_FMT("OFF", ASNI_FG_RED));
  FILE* mtrace = NULL;
  #endif

  #ifdef CONFIG_AXITRACE
  printf("axitrace: %s\n",ASNI_FMT("ON", ASNI_FG_GREEN));
  FILE* axitrace = fopen("npc-axitrace.txt","w");
  #else
  printf("axitrace: %s\n",ASNI_FMT("OFF", ASNI_FG_RED));
  FILE* axitrace = NULL;
  #endif

  #ifdef CONFIG_GUI
    init_screen();
    init_input();
  #endif

  char logbuf[256] = {};
  bool valid_posedge = false;
  bool wb_valid_difftest;
  bool wb_memop_difftest;
  uint32_t wb_memaddr_difftest;
  uint32_t wb_pc_difftest;
  uint32_t wb_inst_difftest;
  // uint32_t wb_pc_new;
  //uint32_t same_pc_cnt = 0;
  uint64_t inst_cnt = 0;
  // uint32_t max_same_cnt = 0;
  // uint64_t max_cnt_time = 0;
  bool mmio_op = false;
  bool difftest_error = false;
  // axi op
  unsigned long wdata;
  unsigned int araddr, awaddr;
  unsigned char wstrb, arlen, awlen;
  bool rd_process = false;
  bool wr_process = false;
  bool arvalid, awvalid, rready, wvalid, wlast;

  uint32_t cpu_waddr, cpu_raddr;
  uint64_t cpu_wdata, cpu_rdata;
  bool cpu_wvalid, cpu_rvalid;
  //restore_model("5000ckpt");
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
    if(sim_time < 10){
      cpu->reset = 1;
      cpu->io_master_awready = 0;
      cpu->io_master_arready = 0;
      cpu->io_master_wready = 0;
    }
    else{
      cpu->reset = 0;
      cpu->io_master_awready = 1;
      cpu->io_master_arready = 1;
      cpu->io_master_wready = 1;
    }
    if((sim_time % 2) == 0){cpu->clock = 1;}
    else if((sim_time % 2) == 1){cpu->clock = 0;}
    if(((sim_time % 2) == 0) && (cpu->reset == 0)){valid_posedge = true;}
    else{valid_posedge = false;}

    // rd wr data & req
    arvalid = cpu->io_master_arvalid;
    awvalid = cpu->io_master_awvalid;
    rready = cpu->io_master_rready;
    
    // axi rd
    if(arvalid){
      rd_process = true;
      araddr = cpu->io_master_araddr;
      arlen = cpu->io_master_arlen;
    }
    // axi wr
    if(awvalid){
      wr_process = true;
      awaddr = cpu->io_master_awaddr;
      awlen = cpu->io_master_awlen;
      //printf("awaddr: %x, awlen: %d\n",awaddr, (uint32_t)awlen);
    }
    if(wr_process){
      wvalid = cpu->io_master_wvalid;
      wdata = cpu->io_master_wdata;
      wlast = cpu->io_master_wlast;
      wstrb = cpu->io_master_wstrb;
    }
    if(wb_valid){
      wb_valid_difftest = *wb_valid & ~*wb_bubble;
      wb_pc_difftest = *wb_pc;
      wb_inst_difftest = *wb_inst;
      wb_memop_difftest = *wb_mem_op;
      wb_memaddr_difftest = *wb_mem_addr;
      mmio_op = wb_memop_difftest && ((wb_memaddr_difftest<MEM_BASE) || (wb_memaddr_difftest>=(MEM_BASE+MEM_SIZE)));
    }
    if(cpu_rd_valid){
      cpu_raddr = *cpu_mem_addr;
      cpu_rvalid = *cpu_rd_valid;
      cpu_rdata = *cpu_rd_data;
    }
    if(cpu_wr_valid){
      cpu_waddr = *cpu_mem_addr;
      cpu_wvalid = *cpu_wr_valid;
      cpu_wdata = *cpu_wr_data;
    }
    cpu->eval();
    //dnpc = cpu->O_pc;
    
    if(valid_posedge){
      if((inst_cnt >= dump_inst) || (dump_pc == wb_pc_difftest)){dump_en = true;}
      // wb_pc_new = *wb_pc;
      // if(wb_pc_new == wb_pc_difftest) {
      //   same_pc_cnt++;
      //   if(same_pc_cnt > max_same_cnt){max_same_cnt = same_pc_cnt;max_cnt_time = sim_time;}
      // }
      // else{
      //   same_pc_cnt = 0;
      // }
      
      if(rd_process){
        cpu->io_master_rvalid = 1;
        if(arlen == 0){cpu->io_master_rlast = 1;}
        axi_read(&araddr, &arlen, &(cpu->io_master_rdata), &rd_process, axitrace, sim_time);
      }
      else{
        cpu->io_master_rvalid = 0;
        cpu->io_master_rlast = 0;
      }
      if(wr_process && wvalid){
        axi_write(&awaddr, &awlen, wdata, wstrb, &wr_process, axitrace, sim_time);
        if(wlast){
          cpu->io_master_bvalid = 1;
        }
        else{
          cpu->io_master_bvalid = 0;
        }
      }
      else{
        cpu->io_master_bvalid = 0;
      }
      
    //dnpc = cpu->O_pc;
    //if(valid_posedge){
      if(wb_valid_difftest){
        
        #ifdef CONFIG_ITRACE
        char *p = logbuf;
        p += sprintf(p, "%08x: %08x ",wb_pc_difftest, wb_inst_difftest);
        disassemble(p, 128, (uint64_t)wb_pc_difftest, (uint8_t *)&wb_inst_difftest, 4);
        if(dump_en){
          fprintf(itrace, "time: %lu\n%s\n",sim_time,logbuf);
        }
        write_ringbuf(logbuf);
        #endif
        #ifdef CONFIG_FTRACE
        print_ftrace(sim_time, wb_pc_difftest, wb_inst_difftest, ftrace);
        #endif
      }
      #ifdef CONFIG_MTRACE
      if(cpu_rvalid){
        fprintf(mtrace,"%lu: rd data %lx from addr %x\n", sim_time, cpu_rdata, cpu_raddr);
      }
      if(cpu_wvalid){
        fprintf(mtrace,"%lu: wr data %lx to addr %x\n", sim_time, cpu_wdata, cpu_waddr);
      }
      #endif
      #ifdef CONFIG_DIFFTEST
      if(wb_valid_difftest) {
        inst_cnt++;
        if(mmio_op){
          //printf("mmio op at addr %lx, pc %lx\n", wb_pc_difftest, wb_memaddr_difftest);
          difftest_skip_ref();
        }
        //printf("time: %ld\n", sim_time);
        difftest_step(wb_pc_difftest, cpu_gpr, sim_time, &difftest_error);
        if(difftest_error){
          printf("after %lu inst(s), error dut at %08x: %08x!\n\n",inst_cnt, wb_pc_difftest, wb_inst_difftest);
          // printf("max stuck pc cnt = %u, time: %lu\n", max_same_cnt, max_cnt_time);
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
    //if(inst_cnt >= dump_inst){
    if(dump_en){
      tfp->dump(sim_time);
    }
    #endif
    sim_time++;
    //if(sim_time == 5000){save_model("5000ckpt");break;}
    // breakpoint for dead cycle
    //if(same_pc_cnt == 50){printf("%ld, check dead loop!\n", sim_time);break;}
  }
  printf("sim end at time %lu\n", sim_time);
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
