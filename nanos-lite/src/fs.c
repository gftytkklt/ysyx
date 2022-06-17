#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENT, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}
size_t serial_write(const void *buf, size_t offset, size_t len);
size_t events_read(void *buf, size_t offset, size_t len);

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
  [FD_EVENT] = {"/dev/events", 0, 0, events_read, invalid_write},
#include "files.h"
};
//alternative if static int error: 
//static int filenum(){
//  return sizeof(file_table) / sizeof(Finfo);
//}

static int filenum = sizeof(file_table) / sizeof(Finfo);
const char* get_filename(int fd){
  return (fd < filenum) ? file_table[fd].name : "undef file!";
}
static long *fp_offt;

int fs_open(const char *pathname, int flags, int mode){
  for(int i=0;i<=filenum;i++){
    if(i==filenum){assert(0);}
    if(!strcmp(file_table[i].name, pathname)){return i;}
  }
  return -1;
}

long fs_read(int fd, void *buf, size_t len){
  long rd_offt = fp_offt[fd] + file_table[fd].disk_offset;
  long offt_incr = 0;
  //printf("read %ld bytes data from addr %ld\n", len, rd_offt);
  //long offt_incr = ramdisk_read(buf, rd_offt, len);
  if (file_table[fd].read == NULL){
    offt_incr = ramdisk_read(buf, rd_offt, len);
  }
  else{
    offt_incr = file_table[fd].read(buf, rd_offt, len);
  }
  fp_offt[fd] += offt_incr;
  return offt_incr;
}

long fs_write(int fd, const void *buf, size_t len){
  long wr_offt = fp_offt[fd] + file_table[fd].disk_offset;
  long offt_incr = 0;
  if (file_table[fd].write == NULL){
    offt_incr = ramdisk_write(buf, wr_offt, len);
  }
  else{
    offt_incr = file_table[fd].write(buf, wr_offt, len);
  }
  fp_offt[fd] += offt_incr;
  return offt_incr;
}

long fs_lseek(int fd, size_t offset, int whence){
  switch(whence){
    case SEEK_SET: fp_offt[fd] = offset;break;
    case SEEK_CUR: fp_offt[fd] += offset;break;
    case SEEK_END: fp_offt[fd] = file_table[fd].size + offset;break;
    default: return -1;
  }
  return fp_offt[fd];
}

int fs_close(int fd){
  fp_offt[fd] = 0;
  return 0;
}

void init_fs() {
  fp_offt=(long*)malloc(filenum*sizeof(long));
  // TODO: initialize the size of /dev/fb
}
