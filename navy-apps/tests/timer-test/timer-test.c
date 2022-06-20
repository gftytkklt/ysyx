#include <stdio.h>
#include <NDL.h>

//static struct timeval boot_time = {};

int main() {
  NDL_Init(0);
  uint32_t half_sec = 1;
  //gettimeofday(&boot_time, NULL);
  //struct timeval cur_time = {};
  while(1){
    //gettimeofday(&cur_time, NULL);
    while(NDL_GetTicks() / 500 < half_sec);
    uint32_t x = NDL_GetTicks();
    //printf("%d\n", x);
    printf("%d half sec(s)\n", half_sec);
    half_sec++;
  }
  return 0;
}
