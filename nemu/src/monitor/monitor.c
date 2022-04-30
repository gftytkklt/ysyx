#include <isa.h>
#include <memory/paddr.h>

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm(const char *triple);

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ASNI_FMT("ON", ASNI_FG_GREEN), ASNI_FMT("OFF", ASNI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ASNI_FMT(str(__GUEST_ISA__), ASNI_FG_YELLOW ASNI_BG_RED));
  printf("For help, type \"help\"\n");
  //Log("Exercise: Please remove me in the source code and compile NEMU again.");
  //assert(0);
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;
static char *elf_file = NULL;

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"elf"	, required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhe:l:d:p:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 'e': elf_file = optarg; break;
      case 1: img_file = optarg; return optind - 1;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\t-e,--elf=ELF_FILE_SRC	  run with elf file for ftrace\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}
#ifdef CONFIG_FTRACE
#define BUF_SIZE 128
#define FUNC_NUM 32
static int func_idx = 0;
typedef struct elf_func{
  char func_name[BUF_SIZE];
  unsigned long entry_addr;
  unsigned long func_size;
}func;
static func func_pool[FUNC_NUM] = {};

void buf_assignment(FILE *fp, unsigned long offset, int base, char* buf, unsigned len) {
  fseek(fp,offset,base);
  if(fgets(buf, len+1, fp)==NULL){printf("null pointer\n");return;}
  
}

static void init_elf() {
  #define SHINFO_OFFT 40 // section header info offset
  #define SHLEN_OFFT 58 // section header len offset
  #define SHNUM_OFFT 60 // section header num offset
  #define SHSTRNEX_OFFT 62
  #define SHTYPE_OFFT 4// section type addr relative to each section header
  #define SHOFFT_OFFT 24// section offset addr relative to each section header
  #define SHSIZE_OFFT 32// section size addr relative to each section header
  #define SHENTSIZE_OFFT 56// section entsize addr relative to each section header
  #define SYMTAB 0x00000002// indicate sh_type SYMTAB
  #define STRTAB 0x00000003
  #define STNAME_OFFT 0// symtable name offt relative to strtab/symtab
  #define STINFO_OFFT 4// symtable type offt relative to strtab/symtab
  #define STADDR_OFFT 8// symtable addr offt relative to strtab/symtab
  #define STSIZE_OFFT 16// // symtable size offt relative to strtab/symtab
  #define FUNC 0x12// type FUNC
  
  FILE* elf_fp = fopen(elf_file,"rb");
  Assert(elf_fp, "Can not open %s", elf_file);
  char buf[BUF_SIZE] = {'\0'};
  unsigned long shofft = 0;// section header offt
  uint16_t shlen = 0;// each section header len
  uint16_t shnum = 0;// section header num
  uint16_t shstrndx = 0;// index of section head strtab
  //unsigned long shstrofft = 0;// section head strtab offt
  unsigned long strofft = 0;// strtab offt
  unsigned long symofft = 0;// symtable offt
  unsigned long symsize = 0;// symtable size
  unsigned long symentsize = 0;// symtable entity size
  
  // get section header offset
  buf_assignment(elf_fp, SHINFO_OFFT, SEEK_SET, buf, sizeof(unsigned long));
  shofft = *((unsigned long*) buf);
  // get section header size
  buf_assignment(elf_fp, SHLEN_OFFT, SEEK_SET, buf, sizeof(uint16_t));
  shlen = *((uint16_t*) buf);
  // get section head num
  buf_assignment(elf_fp, SHNUM_OFFT, SEEK_SET, buf, sizeof(uint16_t));
  shnum = *((uint16_t*) buf);
  // get section head strtab index
  buf_assignment(elf_fp, SHSTRNEX_OFFT, SEEK_SET, buf, sizeof(uint16_t));
  shstrndx = *((uint16_t*) buf);
  
  // find symtab offt and extract parameters
  int i;
  for (i=0;i<shnum;i++){
    // get each section head type
    buf_assignment(elf_fp, (shofft+i*shlen+SHTYPE_OFFT), SEEK_SET, buf, sizeof(uint32_t));
    uint32_t shtype = *((uint32_t*) buf);
    if (shtype == SYMTAB) {
      // get symtab offset
      buf_assignment(elf_fp, (shofft+i*shlen+SHOFFT_OFFT), SEEK_SET, buf, sizeof(unsigned long));
      symofft = *((unsigned long*) buf);
      // get symtab size
      buf_assignment(elf_fp, (shofft+i*shlen+SHSIZE_OFFT), SEEK_SET, buf, sizeof(unsigned long));
      symsize = *((unsigned long*) buf);
      // get symtab entity size
      buf_assignment(elf_fp, (shofft+i*shlen+SHENTSIZE_OFFT), SEEK_SET, buf, sizeof(unsigned long));
      symentsize = *((unsigned long*) buf);
      //break;
    }
    // find section head strtable
    else if(shtype == STRTAB){
      // get strtab offset
      buf_assignment(elf_fp, (shofft+i*shlen+SHOFFT_OFFT), SEEK_SET, buf, sizeof(unsigned long));
      // set value to section head strtab offt or strtab offt
      if (i == shstrndx){
        //shstrofft = *((unsigned long*) buf);
        continue;
      }
      else {
        strofft = *((unsigned long*) buf);
      }
    }
  }
  // extract func name and entry addr
  unsigned long symnum = symsize / symentsize;
  unsigned symname_offt = 0;
  unsigned char symtype = 0;
  for (i=0;i<symnum;i++){
    // get symtype
    buf_assignment(elf_fp, (symofft+i*symentsize+STINFO_OFFT), SEEK_SET, buf, sizeof(unsigned char));
    symtype = *((unsigned char*) buf);
    if (symtype == FUNC) {
      // get func entry addr
      buf_assignment(elf_fp, (symofft+i*symentsize+STADDR_OFFT), SEEK_SET, buf, sizeof(unsigned long));
      func_pool[func_idx].entry_addr = *((unsigned long*) buf);
      // get func size
      buf_assignment(elf_fp, (symofft+i*symentsize+STSIZE_OFFT), SEEK_SET, buf, sizeof(unsigned long));
      func_pool[func_idx].func_size = *((unsigned long*) buf);
      
      // get func symname
      buf_assignment(elf_fp, (symofft+i*symentsize+STNAME_OFFT), SEEK_SET, buf, sizeof(unsigned));
      symname_offt = *((unsigned*) buf);
      if(symname_offt != 0) {
        buf_assignment(elf_fp, (strofft+symname_offt), SEEK_SET, buf, BUF_SIZE-1);
        // add name to func list
        strcpy(func_pool[func_idx].func_name, buf);
      }
      //printf("%d %s %lx\n",func_idx, func_pool[func_idx].func_name, func_pool[func_idx].entry_addr);
      func_idx++;
      if(func_idx >= FUNC_NUM) {printf("func stack overflow, add FUNC_NUM\n");break;}
    }
  }
}
static int func_depth = 0;
void print_ftrace(unsigned long pc, unsigned long dnpc, unsigned inst) {
  //unsigned long func_addr=0;
  //char func_name[128] = {'\0'};
  for(int i=0;i<func_idx;i++){  
    //printf("%s %lx\n", func_pool[func_idx].func_name, func_pool[func_idx].entry_addr);
    if(dnpc == func_pool[i].entry_addr){
      printf("%lx%*s",pc,func_depth*2," ");
      // print info & depth update
      printf("call [%s@0x%lx]\n",func_pool[i].func_name,func_pool[i].entry_addr);func_depth++;
    }
    else if((dnpc > func_pool[i].entry_addr) && (dnpc < func_pool[i].entry_addr + func_pool[i].func_size) && (inst==0x00008067)){
      printf("ret [%s]\n",func_pool[i].func_name);func_depth--;
    }
  }
}
#endif

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());
  
  /* Initialize elf*/
  IFDEF(CONFIG_FTRACE, init_elf());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

  IFDEF(CONFIG_ITRACE, init_disasm(
    MUXDEF(CONFIG_ISA_x86,     "i686",
    MUXDEF(CONFIG_ISA_mips32,  "mipsel",
    MUXDEF(CONFIG_ISA_riscv32, "riscv32",
    MUXDEF(CONFIG_ISA_riscv64, "riscv64", "bad")))) "-pc-linux-gnu"
  ));

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
