#include <time.h>
#include <stdio.h>
#include <sys/time.h>

static struct timeval boot_time = {};

int main() {
  long half_sec = 1;
  gettimeofday(&boot_time, NULL);
  struct timeval cur_time = {};
  while(1){
    gettimeofday(&cur_time, NULL);
    if((cur_time.tv_usec-boot_time.tv_usec) / 500000 < half_sec){continue;}
    printf("%ld half sec(s)\n", half_sec);
    half_sec++;
  }
  return 0;
}
