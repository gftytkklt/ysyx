#include <util.h>

//screen
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
  window = SDL_CreateWindow("NPC Application",
      SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, W*2, H*2,SDL_WINDOW_SHOWN);
  surface = SDL_CreateRGBSurface(SDL_SWSURFACE, W, H, 32,
      RMASK, GMASK, BMASK, AMASK);
  SDL_AddTimer(1000 / FPS, texture_sync, NULL);
  // init fb
  fb = (uint32_t *)malloc(FB_SIZE);
  drawinfo = (screeninfo *)malloc(32);
  drawinfo->pixels = fb;
  drawinfo->x = 0;
  drawinfo->y = 0;
  drawinfo->w = 0;
  drawinfo->h = 0;
}
void update_screen(){
  int x = drawinfo->x, y = drawinfo->y, w = drawinfo->w, h = drawinfo->h;
  printf("drawing: %d, %d, %d, %d\n",x,y,w,h);
  if (w == 0 || h == 0) return;
  feclearexcept(-1);
  SDL_Surface *s = SDL_CreateRGBSurfaceFrom(drawinfo->pixels, w, h, 32, w * sizeof(uint32_t),
      RMASK, GMASK, BMASK, AMASK);
  SDL_Rect rect = { .x = x, .y = y , .w = w, .h = h};
  SDL_BlitSurface(s, NULL, surface, &rect);
  SDL_FreeSurface(s);
}

//input
#define KEYDOWN_MASK 0x8000

#define KEY_QUEUE_LEN 1024
static int key_queue[KEY_QUEUE_LEN] = {};
static int key_f = 0, key_r = 0;
static SDL_mutex *key_queue_lock = NULL;

//#define XX(k) [SDL_SCANCODE_##k] = AM_KEY_##k,
static int keymap[256] = {
  0,0,0,0,43,60,58,45,31,46,47,48,36,49,50,51,62,61,37,38,29,32,44,33,35,59,30,57,34,56,15,16,17,18,19,20,21,22,23,24,54,1,27,28,70,25,26,39,40,41,0,52,53,14,63,64,65,42,2,3,4,5,6,7,8,9,10,11,12,13,0,0,0,77,79,81,78,80,82,76,75,74,73,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,68,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,67,55,69,0,72,66,71,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

static int event_thread(void *args) {
  SDL_Event event;
  while (1) {
    SDL_WaitEvent(&event);
    switch (event.type) {
      case SDL_QUIT: return 0;
      case SDL_KEYDOWN:
      case SDL_KEYUP: {
        SDL_Keysym k = event.key.keysym;
        int keydown = event.key.type == SDL_KEYDOWN;
        int scancode = k.scancode;
        if (keymap[scancode] != 0) {
          int am_code = keymap[scancode] | (keydown ? KEYDOWN_MASK : 0);
          SDL_LockMutex(key_queue_lock);
          key_queue[key_r] = am_code;
          key_r = (key_r + 1) % KEY_QUEUE_LEN;
          SDL_UnlockMutex(key_queue_lock);
        }
        break;
      }
    }
  }
}

void init_input() {
  key_queue_lock = SDL_CreateMutex();
  SDL_CreateThread(event_thread, "event thread", NULL);
}

void get_keybrd(unsigned long* keycode) {
  int k = 0;

  SDL_LockMutex(key_queue_lock);
  if (key_f != key_r) {
    k = key_queue[key_f];
    key_f = (key_f + 1) % KEY_QUEUE_LEN;
  }
  SDL_UnlockMutex(key_queue_lock);
  *keycode = (uint64_t)k;
  //kbd->keydown = (k & KEYDOWN_MASK ? true : false);
  //kbd->keycode = k & ~KEYDOWN_MASK;
}