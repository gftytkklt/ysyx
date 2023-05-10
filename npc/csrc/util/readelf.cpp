#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <cstring>
#include <cassert>
#define BUF_SIZE 128
#define FUNC_NUM 128
#define BITMASK(bits) ((1ull << (bits)) - 1)
#define BITS(x, hi, lo) (((x) >> (lo)) & BITMASK((hi) - (lo) + 1)) 
static int func_idx = 0;
typedef struct elf_func{
  char func_name[BUF_SIZE];
  unsigned long entry_addr;
  unsigned long func_size;
  unsigned int call_depth;
}func;
static func func_pool[FUNC_NUM] = {};

void buf_assignment(FILE *fp, unsigned long offset, int base, char* buf, unsigned len) {
  fseek(fp,offset,base);
  if(fgets(buf, len+1, fp)==NULL){printf("null pointer\n");return;}
  
}

void init_elf(char* elf_file) {
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
  assert(elf_fp);
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
      func_pool[func_idx].call_depth = 0;
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
        //printf("NO.%d func: %s\n", func_idx, buf);
      }
      //printf("%d %s %lx\n",func_idx, func_pool[func_idx].func_name, func_pool[func_idx].entry_addr);
      func_idx++;
      if(func_idx >= FUNC_NUM) {printf("func stack overflow, add FUNC_NUM\n");break;}
    }
  }
}
static int func_depth = 0;
void print_ftrace(unsigned long time, unsigned long dnpc, unsigned long pc, unsigned inst, FILE* fp) {
  //unsigned long func_addr=0;
  //char func_name[128] = {'\0'};
  unsigned dest = BITS(inst,11,7);
  for(int i=0;i<func_idx;i++){  
    //printf("%s %lx\n", func_pool[func_idx].func_name, func_pool[func_idx].entry_addr);
    if(pc == func_pool[i].entry_addr && (dest != 0)){
      func_depth++;
      //fprintf(fp, "%lx:%*s",pc,func_depth," ");
      // print info & depth update
      func_pool[i].call_depth = func_depth;
      fprintf(fp, "[lvl%d]%lx: call [%s@0x%lx](%lu)\n",func_depth, pc, func_pool[i].func_name,func_pool[i].entry_addr, time);
    }
    else if((dnpc > func_pool[i].entry_addr) && (dnpc < func_pool[i].entry_addr + func_pool[i].func_size) && (inst==0x00008067)){
    //else if((pc >= func_pool[i].entry_addr) && (pc < func_pool[i].entry_addr + func_pool[i].func_size) && (inst==0x00008067)){
      //fprintf(fp, "%lx:%*s",pc,func_depth," ");
      fprintf(fp, "[lvl%d]%lx: ret [%s](%lu)\n",func_depth, pc, func_pool[i].func_name, time);
      func_depth = func_pool[i].call_depth;
      //func_depth--;
    }
    else if(inst == 0x00100073){
      fprintf(fp, "%lx:%*s[ebreak](%lu)\n",pc,func_depth," ", time);
      //func_depth--;
      break;
      
    }
  }
}
