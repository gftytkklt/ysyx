#include <NDL.h>
#include <sdl-video.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  // ignore clip currently
  //if(src->pixels == dst->pixels){printf("overlap\n");}
  //printf("call SDL_BlitSurface\n");
  assert(dst && src);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  int srcrect_w = (srcrect == NULL) ? src->w : srcrect->w;
  int srcrect_h = (srcrect == NULL) ? src->h : srcrect->h;
  int srcrect_x = (srcrect == NULL) ? 0 : srcrect->x;
  int srcrect_y = (srcrect == NULL) ? 0 : srcrect->y;
  int dstrect_x = (dstrect == NULL) ? 0 : dstrect->x;
  int dstrect_y = (dstrect == NULL) ? 0 : dstrect->y;
  int src_offx = srcrect_x;
  int src_offy = srcrect_y;
  int dst_offx = dstrect_x;
  int dst_offy = dstrect_y;
  int draw_w;
  int draw_h;
  // clip rect if negative dest_x, dest_y
  if(dstrect_x < 0){
    src_offx -= dstrect_x;
    draw_w = ((srcrect_w+dstrect_x)>dst->w) ? dst->w : (srcrect_w+dstrect_x);
  }
  else{
    draw_w = ((srcrect_w+dstrect_x)>dst->w) ? (dst->w-dstrect_x) : srcrect_w;
  }
  if(dstrect_y < 0){
    src_offy -= dstrect_y;
    draw_h = ((srcrect_h+dstrect_y)>dst->h) ? dst->h : (srcrect_h+dstrect_y);
  }
  else{
    draw_h = ((srcrect_h+dstrect_y)>dst->h) ? (dst->h-dstrect_y) : srcrect_h;
  }
  //draw_h = (draw_h + )
  //int src_offt = srcrect_x+srcrect_y*src->w;
  //int dst_offt = dstrect_x+dstrect_y*dst->w;
  int src_offt = src_offx + src_offy*src->w;
  int dst_offt = dst_offx + dst_offy*dst->w;
  uint8_t* src_pt;
  uint8_t* dst_pt;
  assert(draw_w >= 0 && draw_h >= 0);
  // true color pixel
  if(src->format->palette == NULL){
    src_pt = src->pixels + src_offt*4;
    dst_pt = dst->pixels + dst_offt*4;
    for (int i=0;i<draw_h;i++){
      memcpy(dst_pt, src_pt, draw_w*4);
      src_pt += src->w*4;
      dst_pt += dst->w*4;
    }
  }
  // palette index pixel
  else{
    src_pt = src->pixels + src_offt;
    dst_pt = dst->pixels + dst_offt;
    for(int j=0;j<draw_h;j++){
      memcpy(dst_pt, src_pt, draw_w);
      src_pt += src->w;
      dst_pt += dst->w;
    }
  }
}

void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color) {
  // rect parameter
  //printf("call SDL_FillRect\n");
  int x,y,w,h;
  if(dstrect == NULL){
    x=0;y=0;w=dst->w;h=dst->h;
  }
  else{
    x=dstrect->x; y=dstrect->y; w=dstrect->w; h=dstrect->h;
  }
  int offset = x+y*dst->w;
  if(dst->format->palette == NULL){
    int *current_pt = (int*)dst->pixels + offset;
    for (int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        current_pt[j] = color;
      }
      current_pt += dst->w;
    }
  }
  else{
    uint8_t *current_pt = (uint8_t*)dst->pixels + offset;
    for (int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        current_pt[j] = color;
      }
      current_pt += dst->w;
    }
  }
}

void SDL_UpdateRect(SDL_Surface *s, int x, int y, int w, int h) {
  //printf("call SDL_UpdateRect\n");
  int full_screen = (x == 0) && (y == 0) && (w == 0) && (h == 0);
  int draw_w = 0, draw_h = 0;
  uint32_t *true_pixel_pt = NULL;
  SDL_Color* palette = NULL;
  int r, g, b;
  if(full_screen){
    draw_w = s->w;
    draw_h = s->h;
    //printf("full screen: %d %d\n", draw_w, draw_h);
    if(s->format->palette == NULL){
      true_pixel_pt = (uint32_t *)s->pixels;
    }
    else{
      // palette
      //printf("palette\n");
      palette = s->format->palette->colors;
      assert(palette != NULL);
      true_pixel_pt = (uint32_t*)malloc(draw_w*draw_h*4);
      //printf("maprgb begin\n");
      for(int i=0;i<draw_w*draw_h;i++){
        //if(i>60000){printf("%d ", i);}
        r = palette[s->pixels[i]].r;
        g = palette[s->pixels[i]].g;
        b = palette[s->pixels[i]].b;
        true_pixel_pt[i] = ((r << 16) + (g << 8) + b);
      }
      //printf("maprgb end\n");
      //true_pixel_pt = true_pixel;
      //free(true_pixel);
      //uint32_t true_pixel[draw_w*draw_h];
      /*uint32_t *true_pixel = (uint32_t*)malloc(draw_w*draw_h*4);
      //printf("maprgb begin\n");
      for(int i=0;i<draw_w*draw_h;i++){
        //if(i>60000){printf("%d ", i);}
        r = palette[s->pixels[i]].r;
        g = palette[s->pixels[i]].g;
        b = palette[s->pixels[i]].b;
        true_pixel[i] = ((r << 16) + (g << 8) + b);
      }
      //printf("maprgb end\n");
      true_pixel_pt = true_pixel;
      free(true_pixel);*/
    }
  }
  else{
    //printf("partial screen\n");
    draw_w = w;
    draw_h = h;
    int offset = x+y*s->w-4;
    //printf("offset = %d\n", offset);
    //uint32_t true_pixel1[draw_w*draw_h];
    uint32_t *true_pixel1 = (uint32_t*)malloc(draw_w*draw_h*4);
    uint32_t *current_dst = true_pixel1;
    if(s->format->palette == NULL){
      uint32_t *current_src = (uint32_t *)s->pixels;
      current_src += offset;
      for(int i=0;i<draw_h;i++){
        memcpy(current_dst, current_src, draw_w*4);
        current_dst += draw_w;
        current_src += s->w;
      }
    }
    else{
      // palette
      palette = s->format->palette->colors;
      assert(palette != NULL);
      unsigned char *current_src = s->pixels+offset;
      int index = 0;
      for(int i=0;i<draw_h;i++){
        for(int j=0;j<draw_w;j++){
          r = palette[*(current_src+j)].r;
          g = palette[*(current_src+j)].g;
          b = palette[*(current_src+j)].b;
          true_pixel1[index] = ((r << 16) + (g << 8) + b);
          index++;
        }
        current_src += s->w;
      }
    }
    true_pixel_pt = true_pixel1;
    free(true_pixel1);
  }
  assert(true_pixel_pt != NULL);
  //printf("draw begin\n");
  NDL_DrawRect(true_pixel_pt, x, y, draw_w, draw_h);
  //free(true_pixel_pt);
  //printf("draw end\n");
}

// APIs below are already implemented.

static inline int maskToShift(uint32_t mask) {
  switch (mask) {
    case 0x000000ff: return 0;
    case 0x0000ff00: return 8;
    case 0x00ff0000: return 16;
    case 0xff000000: return 24;
    case 0x00000000: return 24; // hack
    default: assert(0);
  }
}

SDL_Surface* SDL_CreateRGBSurface(uint32_t flags, int width, int height, int depth,
    uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  assert(depth == 8 || depth == 32);
  SDL_Surface *s = malloc(sizeof(SDL_Surface));
  assert(s);
  s->flags = flags;
  s->format = malloc(sizeof(SDL_PixelFormat));
  assert(s->format);
  if (depth == 8) {
    s->format->palette = malloc(sizeof(SDL_Palette));
    assert(s->format->palette);
    s->format->palette->colors = malloc(sizeof(SDL_Color) * 256);
    assert(s->format->palette->colors);
    memset(s->format->palette->colors, 0, sizeof(SDL_Color) * 256);
    s->format->palette->ncolors = 256;
  } else {
    s->format->palette = NULL;
    s->format->Rmask = Rmask; s->format->Rshift = maskToShift(Rmask); s->format->Rloss = 0;
    s->format->Gmask = Gmask; s->format->Gshift = maskToShift(Gmask); s->format->Gloss = 0;
    s->format->Bmask = Bmask; s->format->Bshift = maskToShift(Bmask); s->format->Bloss = 0;
    s->format->Amask = Amask; s->format->Ashift = maskToShift(Amask); s->format->Aloss = 0;
  }

  s->format->BitsPerPixel = depth;
  s->format->BytesPerPixel = depth / 8;

  s->w = width;
  s->h = height;
  s->pitch = width * depth / 8;
  assert(s->pitch == width * s->format->BytesPerPixel);

  if (!(flags & SDL_PREALLOC)) {
    s->pixels = malloc(s->pitch * height);
    assert(s->pixels);
  }

  return s;
}

SDL_Surface* SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth,
    int pitch, uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  SDL_Surface *s = SDL_CreateRGBSurface(SDL_PREALLOC, width, height, depth,
      Rmask, Gmask, Bmask, Amask);
  assert(pitch == s->pitch);
  s->pixels = pixels;
  return s;
}

void SDL_FreeSurface(SDL_Surface *s) {
  if (s != NULL) {
    if (s->format != NULL) {
      if (s->format->palette != NULL) {
        if (s->format->palette->colors != NULL) free(s->format->palette->colors);
        free(s->format->palette);
      }
      free(s->format);
    }
    if (s->pixels != NULL && !(s->flags & SDL_PREALLOC)) free(s->pixels);
    free(s);
  }
}

SDL_Surface* SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags) {
  if (flags & SDL_HWSURFACE) NDL_OpenCanvas(&width, &height);
  //printf("surface created:%d %d\n", width, height);
  return SDL_CreateRGBSurface(flags, width, height, bpp,
      DEFAULT_RMASK, DEFAULT_GMASK, DEFAULT_BMASK, DEFAULT_AMASK);
}

void SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  assert(src && dst);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  assert(dst->format->BitsPerPixel == 8);

  int x = (srcrect == NULL ? 0 : srcrect->x);
  int y = (srcrect == NULL ? 0 : srcrect->y);
  int w = (srcrect == NULL ? src->w : srcrect->w);
  int h = (srcrect == NULL ? src->h : srcrect->h);

  assert(dstrect);
  if(w == dstrect->w && h == dstrect->h) {
    /* The source rectangle and the destination rectangle
     * are of the same size. If that is the case, there
     * is no need to stretch, just copy. */
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    SDL_BlitSurface(src, &rect, dst, dstrect);
  }
  else {
    assert(0);
  }
}

void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors, int firstcolor, int ncolors) {
  assert(s);
  assert(s->format);
  assert(s->format->palette);
  assert(firstcolor == 0);

  s->format->palette->ncolors = ncolors;
  memcpy(s->format->palette->colors, colors, sizeof(SDL_Color) * ncolors);

  if(s->flags & SDL_HWSURFACE) {
    assert(ncolors == 256);
    for (int i = 0; i < ncolors; i ++) {
      uint8_t r = colors[i].r;
      uint8_t g = colors[i].g;
      uint8_t b = colors[i].b;
    }
    //printf("uprect start\n");
    SDL_UpdateRect(s, 0, 0, 0, 0);
    //printf("uprect end\n");
  }
}

static void ConvertPixelsARGB_ABGR(void *dst, void *src, int len) {
  int i;
  uint8_t (*pdst)[4] = dst;
  uint8_t (*psrc)[4] = src;
  union {
    uint8_t val8[4];
    uint32_t val32;
  } tmp;
  int first = len & ~0xf;
  for (i = 0; i < first; i += 16) {
#define macro(i) \
    tmp.val32 = *((uint32_t *)psrc[i]); \
    *((uint32_t *)pdst[i]) = tmp.val32; \
    pdst[i][0] = tmp.val8[2]; \
    pdst[i][2] = tmp.val8[0];

    macro(i + 0); macro(i + 1); macro(i + 2); macro(i + 3);
    macro(i + 4); macro(i + 5); macro(i + 6); macro(i + 7);
    macro(i + 8); macro(i + 9); macro(i +10); macro(i +11);
    macro(i +12); macro(i +13); macro(i +14); macro(i +15);
  }

  for (; i < len; i ++) {
    macro(i);
  }
}

SDL_Surface *SDL_ConvertSurface(SDL_Surface *src, SDL_PixelFormat *fmt, uint32_t flags) {
  assert(src->format->BitsPerPixel == 32);
  assert(src->w * src->format->BytesPerPixel == src->pitch);
  assert(src->format->BitsPerPixel == fmt->BitsPerPixel);

  SDL_Surface* ret = SDL_CreateRGBSurface(flags, src->w, src->h, fmt->BitsPerPixel,
    fmt->Rmask, fmt->Gmask, fmt->Bmask, fmt->Amask);

  assert(fmt->Gmask == src->format->Gmask);
  assert(fmt->Amask == 0 || src->format->Amask == 0 || (fmt->Amask == src->format->Amask));
  ConvertPixelsARGB_ABGR(ret->pixels, src->pixels, src->w * src->h);

  return ret;
}

uint32_t SDL_MapRGBA(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
  assert(fmt->BytesPerPixel == 4);
  uint32_t p = (r << fmt->Rshift) | (g << fmt->Gshift) | (b << fmt->Bshift);
  if (fmt->Amask) p |= (a << fmt->Ashift);
  return p;
}

int SDL_LockSurface(SDL_Surface *s) {
  return 0;
}

void SDL_UnlockSurface(SDL_Surface *s) {
}
