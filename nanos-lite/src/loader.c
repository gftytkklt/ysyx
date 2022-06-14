#include <proc.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif
size_t ramdisk_read(void *buf, size_t offset, size_t len);

static uintptr_t loader(PCB *pcb, const char *filename) {
  Elf_Ehdr ehdr  = {};
  //Elf_Phdr phdr  = {};
  ramdisk_read(&ehdr, 0, 64);
  assert(*(uint32_t *)&ehdr.e_ident == 0x464c457f);
  int phoff = ehdr.e_phoff;
  int phnum = ehdr.e_phnum;
  int phentsize = ehdr.e_phentsize;
  printf("%d %d %d\n", phoff, phnum, phentsize);
  //ramdisk_read(&phdr, ehdr.e_phoff, 64);
  //TODO();
  return ehdr.e_entry;
    
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

