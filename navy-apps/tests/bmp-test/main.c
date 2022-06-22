#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <NDL.h>
#include <BMP.h>
//#include <SDL.h>
//#include <SDL_bmp.h>

int main() {
  printf("main start\n");
  NDL_Init(0);
  int w, h;
  //static SDL_Surface *slide = NULL;
  void *bmp = BMP_Load("/share/pictures/projectn.bmp", &w, &h);
  //slide = SDL_LoadBMP("/share/pictures/projectn.bmp");
  assert(bmp);
  int a=0;int b=0;
  NDL_OpenCanvas(&a, &b);
  //SDL_UpdateRect(slide, 0, 0, 0, 0);
  NDL_DrawRect(bmp, 0, 0, w, h);
  //int i = 0;
  //while(i++ < 100000);
  void *bmp1 = BMP_Load("/share/slides/slides-0.bmp", &w, &h);
  assert(bmp1);
  //NDL_OpenCanvas(&a, &b);
  NDL_DrawRect(bmp1, 0, 0, w, h);
  free(bmp);free(bmp1);
  NDL_Quit();
  printf("Test ends! Spinning...\n");
  while (1);
  return 0;
}
