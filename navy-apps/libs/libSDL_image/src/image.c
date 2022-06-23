#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface* IMG_Load(const char *filename) {
  printf("img load init\n");
  FILE* fp = fopen(filename,"r");
  printf("fp %s open\n", filename);
  if(fp == NULL){printf("invalid fp");}
  else{printf("get fp of %s\n", filename);}
  fseek(fp, 0, SEEK_END);
  size_t len = ftell(fp);
  printf("len=%d\n", len);
  void *buf = SDL_malloc(len);
  fseek(fp, 0, SEEK_SET);
  fread(buf, 1, len, fp);
  SDL_Surface *slide = STBIMG_LoadFromMemory(buf, len);
  fclose(fp);
  SDL_free(buf);
  printf("img load done\n\n");
  return slide;
  //return NULL;
}

int IMG_isPNG(SDL_RWops *src) {
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
