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
  if(fd<0){return -1;}
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
  uintptr_t proc_end = 0;
  
  for (int i=0;i<phnum;i++){
    fs_lseek(fd, current_phoff, SEEK_SET);
    fs_read(fd, &phdr, phentsize);
    //printf()
    //ramdisk_read(&phdr, current_phoff, phentsize);
    if (phdr.p_type == PT_LOAD){
      //printf("load pts\n");
      ldofft = phdr.p_offset;
      ldvaddr = phdr.p_vaddr;
      //printf("%d: %ld, %lx\n",i, ldofft, ldvaddr);
      filesz = phdr.p_filesz;
      memsz = phdr.p_memsz;
      if((ldvaddr + memsz)>proc_end){proc_end = (ldvaddr + memsz);}
      fs_lseek(fd, ldofft, SEEK_SET);
      // naive version
      //fs_read(fd, (void *)ldvaddr, filesz);
      //memset((void *)(ldvaddr + filesz), 0, (memsz-filesz));
      // pte version
      void *start = (void*)(ldvaddr & ~0xffful);
      uint64_t start_offt = ldvaddr & 0xffful;
      uint64_t file_end = ldvaddr + filesz;
      //uint64_t end_offt = file_end & 0xffful;
      void *end = (void*)(ldvaddr + memsz);
      //int i = 0;
      for(;start < end;start += 4096){
        //printf("%dth mapping\n",++i);
        void *page = new_page(1);
        memset(page, 0, 4096);
        map(&pcb->as,start,page,0);
        //int rd_num = 0;
        // map unaligned first page
        if (start < (void*) file_end){
          if(start_offt != 0){
            int rd_len = (start_offt + filesz > 4096) ? (4096-start_offt) : filesz;
            //rd_num = fs_read(fd, (page + start_offt), rd_len);
            fs_read(fd, (page +2+ start_offt), rd_len);
            //printf("cp %ld bytes to addr %p\n",(4096-start_offt),(page + start_offt));
            start_offt = 0;
          }
          // map last page
          else if(start > (void*) (file_end-4096)){
            //printf("aligned fs op\n");
            //rd_num = fs_read(fd, page, (file_end&0xfff));
            fs_read(fd, page+2, (file_end&0xfff));
          }
          else{
            //rd_num = fs_read(fd, page, 4096);
            fs_read(fd, page, 4096);
          }
        }
        //printf("rd %d\n",rd_num);
        //printf("%dth mapping end\n",i);
      }
      /*// full page num
      int file_pgnum = filesz / 4096;
      // remainder
      int remainder = filesz % 4096;
      for (int j=0;j<memsz;j=j+4096){
        // new page
        void* page = new_page(1);
        // va to pa mapping
        map(&pcb->as,(void*)ldvaddr,page,0);
        // full page memcpy part
        if(file_pgnum != 0){
          fs_read(fd, page, 4096);
          file_pgnum--;
        }
        // remainder memcpy part
        else if(remainder != 0){
          fs_read(fd, page, remainder);
          memset((page+remainder), 0, (4096-remainder));
          remainder = 0;
        }
        // zero padding part
        // all new pages are unused physical addr, so set whole page to zero is okay
        else{
          memset(page, 0, 4096);
        }
        // update mapping vaddr
        ldvaddr += 4096;
      }*/
    }
    current_phoff += phentsize;
  }
  pcb->max_brk = proc_end;
  printf("proc end at %lx\n",pcb->max_brk);
  fs_close(fd);
  return ehdr.e_entry;
}

int context_uload(PCB *pcb, const char *filename, char *const argv[], char *const envp[]){
  protect(&pcb->as);
  printf("ptr = %p\n",pcb->as.ptr);
  Area kstack;
  kstack.start = (void*)pcb->stack;
  kstack.end = (void*)pcb->stack + STACK_SIZE;
  printf("user kstack: %p, %p\n",kstack.start,kstack.end);
  //uintptr_t entry = loader(pcb, filename);
  //pcb->cp = ucontext(&pcb->as, kstack, (void*)entry);
  //push parameters to stack(naive mode)
  //void *stacktop = new_page(8)+8*4096;// 32KB
  //push parameters to stack(pte mode)
  //void *stacktop = pcb->as.area.end;
  //map user stack to physical addr
  void *stacktop = NULL;
  void *page = NULL;
  for (void* stackpt=(pcb->as.area.end)-8*4096; stackpt<pcb->as.area.end; stackpt = stackpt+4096){
    page = new_page(1);
    if(stackpt == (pcb->as.area.end)-4096){stacktop = page+4096;}
    //printf("%p %p\n",stackpt,page);
    map(&pcb->as,stackpt,page,0);
  }
  //printf("ustack: %p\n",stacktop);
  int argc = 0;
  int envc = 0;
  while(argv[argc] != NULL){
    argc++;
  }
  //printf("envp: %p\n",envp);
  while(envp[envc] != NULL){
    envc++;
  }
  char **argv_stack = (char **)malloc(argc*sizeof(char**));
  char **envp_stack = (char **)malloc(envc*sizeof(char**));
  // push envp & argv str to stack
  // larger index at end of stack
  int cplen;
  // push envc str
  for (int i=envc;i>0;i--){
    cplen = strlen(envp[i-1]);
    stacktop -= (cplen+1);
    strcpy(stacktop,envp[i-1]);
    envp_stack[i-1] = (char *)stacktop;
  }
  // push argv str
  for (int i=argc;i>0;i--){
    cplen = strlen(argv[i-1]);
    stacktop -= (cplen+1);
    strcpy(stacktop,argv[i-1]);
    argv_stack[i-1] = (char *)stacktop;
  }
  // align with 8 byte
  stacktop = (void *)((unsigned long)stacktop & 0xfffffffffffffff8);
  //printf("%p\n", stacktop);
  // push envc*
  stacktop -= sizeof(char**);
  //printf("ckpt1: stacktop = %p\n",stacktop);
  memset(stacktop, 0, 8);
  //printf("ckpt2\n");
  for (int i=envc;i>0;i--){
    stacktop -= sizeof(char**);
    *((char**)stacktop) = envp_stack[i-1];
  }
  // push argv*
  stacktop -= sizeof(char**);
  memset(stacktop, 0, 8);
  for (int i=argc;i>0;i--){
    stacktop -= sizeof(char**);
    *((char**)stacktop) = argv_stack[i-1];
  }
  stacktop -= sizeof(int);
  *((int*)stacktop) = argc;
  uintptr_t entry = loader(pcb, filename);
  if (entry == -1){return -1;}
  pcb->cp = ucontext(&pcb->as, kstack, (void*)entry);
  pcb->cp->gpr[10] = (uintptr_t)stacktop;
  printf("uloader end, entry = %p\n",entry);
  //((void(*)())entry) ();
  return 0;
}

void naive_uload(PCB *pcb, const char *filename) {
  //printf("in uload\n");
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

