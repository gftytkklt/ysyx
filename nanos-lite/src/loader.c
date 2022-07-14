#include <proc.h>
#include <fs.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif
//size_t ramdisk_read(void *buf, size_t offset, size_t len);

static uintptr_t loader(PCB *pcb, const char *filename) {
  Elf_Ehdr ehdr  = {};
  Elf_Phdr phdr  = {};
  //printf("in loader\n");
  int fd = fs_open(filename, 0, 0);
  //printf("begin read\n");
  fs_read(fd, &ehdr, 64);
  //printf("%d\n", fd);
  //fs_lseek(fd, 64, )
  //ramdisk_read(&ehdr, 0, 64);
  assert(*(uint32_t *)&ehdr.e_ident == 0x464c457f);
  uint64_t phoff = ehdr.e_phoff;
  uint16_t phnum = ehdr.e_phnum;
  uint16_t phentsize = ehdr.e_phentsize;
  //printf("%d %d %d\n", phoff, phnum, phentsize);
  //ramdisk_read(&phdr, ehdr.e_phoff, 64);
  uint64_t current_phoff = phoff;
  uint64_t ldofft; // for load offset
  uint64_t ldvaddr;
  uint64_t filesz, memsz;
  
  for (int i=0;i<phnum;i++){
    fs_lseek(fd, current_phoff, SEEK_SET);
    fs_read(fd, &phdr, phentsize);
    //printf()
    //ramdisk_read(&phdr, current_phoff, phentsize);
    if (phdr.p_type == PT_LOAD){
      ldofft = phdr.p_offset;
      ldvaddr = phdr.p_vaddr;
      //printf("%d: %ld, %lx\n",i, ldofft, ldvaddr);
      filesz = phdr.p_filesz;
      memsz = phdr.p_memsz;
      fs_lseek(fd, ldofft, SEEK_SET);
      fs_read(fd, (void *)ldvaddr, filesz);
      //ramdisk_read((void *)ldvaddr, ldofft, filesz);
      memset((void *)(ldvaddr + filesz), 0, (memsz-filesz));
    }
    current_phoff += phentsize;
  }
  fs_close(fd);
  return ehdr.e_entry;
    
}

void context_uload(PCB *pcb, const char *filename){
  Area kstack;
  kstack.start = (void*)pcb->stack;
  kstack.end = (void*)pcb->stack + STACK_SIZE;
  uintptr_t entry = loader(pcb, filename);
  //printf("entry = %p\n",entry);
  printf("user kstack: %p, %p\n",kstack.start,kstack.end);
  pcb->cp = ucontext(&pcb->as, kstack, (void*)entry);
  //printf("cp = %p, cp->%p\n",&pcb->cp,pcb->cp->gpr[10]);
}

void naive_uload(PCB *pcb, const char *filename) {
  //printf("in uload\n");
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

