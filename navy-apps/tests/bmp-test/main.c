#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <NDL.h>
#include <BMP.h>

int main() {
  NDL_Init(0);
  int w, h;
  void *bmp = BMP_Load("/share/pictures/projectn.bmp", &w, &h);
  assert(bmp);
  NDL_OpenCanvas(0, 0);
  NDL_DrawRect(bmp, 0, 0, w, h);
  //int i = 0;
  //while(i++ < 100000);
  void *bmp1 = BMP_Load("/share/slides/slides-0.bmp", &w, &h);
  assert(bmp1);
  //NDL_OpenCanvas(&w, &h);
  NDL_DrawRect(bmp1, 0, 0, w, h);
  free(bmp);free(bmp1);
  NDL_Quit();
  printf("Test ends! Spinning...\n");
  while (1);
  return 0;
}
