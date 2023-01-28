#include <util.h>
SDL_Window *window = NULL;
SDL_Surface *surface = NULL;
uint32_t* fb = NULL;
screeninfo* drawinfo = NULL;

Uint32 texture_sync(Uint32 interval, void *param){
  SDL_BlitScaled(surface, NULL, SDL_GetWindowSurface(window), NULL);
  SDL_UpdateWindowSurface(window);
  return interval;
}
void init_screen(){
  // create gui
  SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER);
  window = SDL_CreateWindow("Native Application",
      SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, W*2, H*2,SDL_WINDOW_SHOWN);
  surface = SDL_CreateRGBSurface(SDL_SWSURFACE, W, H, 32,
      RMASK, GMASK, BMASK, AMASK);
  SDL_AddTimer(1000 / FPS, texture_sync, NULL);
  // init fb
  fb = (uint32_t *)malloc(FB_SIZE);
  drawinfo = (screeninfo *)malloc(32);
  drawinfo->pixels = fb;
}
void update_screen(){
  int x = drawinfo->x, y = drawinfo->y, w = drawinfo->w, h = drawinfo->h;
  //printf("drawing: %d, %d, %d, %d\n",x,y,w,h);
  if (w == 0 || h == 0) return;
  feclearexcept(-1);
  SDL_Surface *s = SDL_CreateRGBSurfaceFrom(drawinfo->pixels, w, h, 32, w * sizeof(uint32_t),
      RMASK, GMASK, BMASK, AMASK);
  SDL_Rect rect = { .x = x, .y = y , .w = w, .h = h};
  SDL_BlitSurface(s, NULL, surface, &rect);
  SDL_FreeSurface(s);
}