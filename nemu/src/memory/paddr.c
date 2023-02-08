#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

//#ifdef CONFIG_CTRACE
//void print_ctrace(bool is_itrace, char type, uint64_t addr);
//#endif

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR ") at pc = " FMT_WORD,
      addr, CONFIG_MBASE, CONFIG_MBASE + CONFIG_MSIZE, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
#endif
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]",
      (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE);
}

word_t paddr_read(paddr_t addr, int len) {
  //if(addr == 0x82172000 || (addr >= 0x8217a000 && addr <= 0x8217a040)){Log("Get data 0x%lx from addr "FMT_PADDR"", pmem_read(addr, len), addr);}
  if (likely(in_pmem(addr))) {
    IFDEF(CONFIG_MTRACE, Log("Get data 0x%lx from addr "FMT_PADDR"", pmem_read(addr, len), addr));
    //#ifdef CONFIG_CTRACE
    //  print_ctrace(false, 'r', addr);
    //#endif
    return pmem_read(addr, len);
  }
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { 
  IFDEF(CONFIG_MTRACE, Log("Write data 0x%lx to addr "FMT_PADDR"", data, addr));
  //#ifdef CONFIG_CTRACE
  //  print_ctrace(false, 'w', addr);
  //#endif
  pmem_write(addr, len, data);
  //if((addr >= 0x82172000 && addr <= 0x82172040) || (addr >= 0x8217a000 && addr <= 0x8217a040)){
  /*if(cpu.pc >= 0x80000a5c && cpu.pc <= 0x80000a7c){
    Log("Write data 0x%lx to addr "FMT_PADDR",pc = %lx", data, addr, cpu.pc);
    //if (data == 0){isa_reg_display();}
  }*/
  return; }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}
