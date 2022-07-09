#include <NDL.h>
#include <sdl-video.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  //printf("\ncall SDL_BlitSurface\n");
  // ignore clip currently
  assert(dst && src);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  int srcrect_w = (srcrect == NULL) ? src->w : srcrect->w;
  int srcrect_h = (srcrect == NULL) ? src->h : srcrect->h;
  int srcrect_x = (srcrect == NULL) ? 0 : srcrect->x;
  int srcrect_y = (srcrect == NULL) ? 0 : srcrect->y;
  int dstrect_x = (dstrect == NULL) ? 0 : dstrect->x;
  int dstrect_y = (dstrect == NULL) ? 0 : dstrect->y;
  //printf("\n%d %d %d %d %d %d\n", srcrect_w, srcrect_h, srcrect_x, srcrect_y, dstrect_x, dstrect_y);
  //int dstrect_w = (dstrect == NULL) ? dst->w : dstrect->w;
  //int dstrect_h = (dstrect == NULL) ? dst->h : dstrect->h;
  // offt by pixels
  //printf("srcrect at(%d, %d)")
  int src_offt = srcrect_x+srcrect_y*src->w;
  int dst_offt = dstrect_x+dstrect_y*dst->w;
  //printf("\nsrc offt=%d dst offt=%d\n", src_offt, dst_offt);
  //int rect_buf[srcrect_w*srcrect_h];
  //int *buf_pt = rect_buf;
  //src_offt = (srcrect == NULL) ? 0 : (srcrect->x + srcrect->y*src->w);
  //dst_offt = (dstrect == NULL) ? 0 : (dstrect->x + dstrect->y*dst->w);
  // clip 
  // int delta_w = dstrect_x + srcrect_w - dst->w;
  // int cp_w = (delta_w < 0) ? srcrect_w : srcrect_w + delta_w;
  uint8_t* src_pt;
  uint8_t* dst_pt;
  // true color pixel
  if(src->format->palette == NULL){
    //printf("\ntrue color: %d %d\n", srcrect_w, srcrect_h);
    // cp data
    src_pt = src->pixels + src_offt*4;
    dst_pt = dst->pixels + dst_offt*4;
    //void* dst_pt = malloc(srcrect_w*srcrect_h*4);
    //assert(src_pt && dst_pt);
    for (int i=0;i<srcrect_h;i++){
      //src_pt = src->pixels + src_offt*4;
      //printf("i=%d\n", i);
      memcpy(dst_pt, src_pt, srcrect_w*4);
      //printf("1 \n");
      //memcpy(buf_pt, src_pt, srcrect_w*4);
      //printf("2 \n");
      src_pt += src->w*4;
      //printf("3 \n");
      dst_pt += dst->w*4;
      //printf("4 \n");
      //buf_pt += srcrect_w;
      //printf("5 \n");
    }
    //NDL_DrawRect(dst_pt, 0, 0, dstrect_w, dstrect_h);
  }
  // palette index pixel
  else{
    //printf("\npalette color\n");
    //SDL_Color* color_pt = src->format->palette->colors;
    src_pt = src->pixels + src_offt;
    dst_pt = dst->pixels + dst_offt;
    //uint32_t r, g, b;// pixel colors
    //int index = 0;
    //for (int j=0;j<srcrect_h;j++){
      //for (int k=0;k<srcrect_w;k++){
        //r = color_pt[*(src_pt+k)].r;
        //g = color_pt[*(src_pt+k)].g;
        //b = color_pt[*(src_pt+k)].b;
        //rect_buf[index] = (r << 16) + (g << 8) + b;
        //*(dst_pt+k) = *(src_pt+k);
        //index++;
      //}
    //}
    for(int j=0;j<srcrect_h;j++){
      memcpy(dst_pt, src_pt, srcrect_w);
      src_pt += src->w;
      dst_pt += dst->w;
    }
  }
  //printf("\ncall drawrect: %d %d %d %d\n", dstrect_x, dstrect_y, srcrect_w, srcrect_h);
  //assert(rect_buf != NULL);
  //NDL_DrawRect(rect_buf, dstrect_x, dstrect_y, srcrect_w, srcrect_h);
  //printf("\nExit SDL_BlitSurface\n");
  //NDL_DrawRect(dst_pt, 0, 0, dstrect_w, dstrect_h);
  /*else{
    // cp data
    //void* dst_pixels = malloc(srcrect_w*4);
    uint32_t dst_pixels[srcrect_w];// storage true pixel
    SDL_Color* color_pt = src->format->palette->colors;
    src_pt = src->pixels + src_offt;
    dst_pt = dst->pixels + dst_offt;
    uint32_t r, g, b;// pixel colors
    for (int i=0;i<srcrect_h;i++){
      //src_pt = src->pixels + src_offt*4;
      //printf("%d\n", i);
      memcpy(dst_pt, src_pt, srcrect_w);
      // index to pixel
      for (int j=0;j<srcrect_w;j++){
        r = color_pt[src_pt[j]].r;
        g = color_pt[src_pt[j]].g;
        b = color_pt[src_pt[j]].b;
        dst_pixels[j] = (r << 16) + (g << 8) + b;
      }
      NDL_DrawRect(dst_pixels, 0, 0, dstrect_w, 1);
      src_pt += src->w;
      dst_pt += dst->w;
    }
    //free(dst_pixels);
  }*/
}

void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color) {
  //printf("\ncall SDL_FillRect\n");
  // orig
  /*int x,y,w,h;
  //uint32_t *true_pixel_pt = NULL;
  if(dstrect == NULL){
    x=0;y=0;w=dst->w;h=dst->h;
    //memset(dst->pixels, color, (dst->w)*(dst->h)*4);
  }
  else{
    x=dstrect->x; y=dstrect->y; w=dstrect->w; h=dstrect->h;
  }
  memset(dst->pixels, color, w*h*4);
  //printf("fill parameters: %d %d %d %d\n",x,y,w,h);
  NDL_DrawRect(dst->pixels, x, y, w, h);*/
  // revised
  /*int x,y,w,h;
  int r,g,b;
  uint32_t *true_pixel_pt = NULL;
  SDL_Color* palette = NULL;
  // full screen
  if(dstrect == NULL){
    x=0;y=0;w=dst->w;h=dst->h;
    //uint32_t *true_pixel_pt = NULL;
    if(dst->format->palette == NULL){
      true_pixel_pt = dst->pixels;
      for(int i=0;i<w*h;i++){
        true_pixel_pt[i] = color;
      }
      //memset(dst->pixels, color, w*h*4);
    }
    // if have palette, color is uint8 index in fact
    else{
      palette = dst->format->palette->colors;
      r = palette[color].r; g = palette[color].g; b = palette[color].b;
      uint32_t true_color = (r << 16) + (g << 8) + b;
      uint32_t padding[w*h];
      for(int i=0;i<w*h;i++){
        padding[i] = true_color;
      }
      //memset(padding, color, w*h*4);
      memset(dst->pixels, color, w*h);
      true_pixel_pt = padding;
    }
  }
  else{
    uint32_t padding1[w*h];
    //memset(padding1, color, w*h*4);
    true_pixel_pt = padding1;
    int offset = (x+y*dst->w);
    if(dst->format->palette == NULL){
      //memset(dst->pixels+offset, color, w*h*4);
      //offset = (x+y*dst->w)*4;
      uint32_t *current_dst = (uint32_t*)dst->pixels + offset;
      for(int i=0;i<w*h;i++){
        true_pixel_pt[i] = color;
      }
      for(int j=0;j<h;j++){
        memcpy(current_dst, true_pixel_pt, w*4);
        current_dst += dst->w;
      }
    }
    else{
      //offset = (x+y*dst->w);
      palette = dst->format->palette->colors;
      r = palette[color].r; g = palette[color].g; b = palette[color].b;
      void *current_dst = dst->pixels + offset;
      uint32_t true_color = (r << 16) + (g << 8) + b;
      for(int i=0;i<w*h;i++){
        true_pixel_pt[i] = true_color;
      }
      for(int j=0;j<h;j++){
        memcpy(current_dst, color, w);
        current_dst += dst->w;
      }
      //memset(dst->pixels+offset, color, w*h);
    }
  }
  assert(true_pixel_pt != NULL);
  NDL_DrawRect(true_pixel_pt, x, y, w, h);
  printf("\nExit SDL_FillRect\n");*/
  // revise2
  // rect parameter
  int x,y,w,h;
  if(dstrect == NULL){
    x=0;y=0;w=dst->w;h=dst->h;
    //memset(dst->pixels, color, (dst->w)*(dst->h)*4);
  }
  else{
    x=dstrect->x; y=dstrect->y; w=dstrect->w; h=dstrect->h;
  }
  int offset = x+y*w;
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
  // orig
  /*//printf("in SDL_UpdateRect\n");
  int full_screen = (x == 0) && (y == 0) && (w==0) && (h==0);
  int w_in = full_screen ? s->w : w;
  int h_in = full_screen ? s->h : h;
  
  NDL_DrawRect(s->pixels, x, y, w_in, h_in);*/
  //printf("\nin SDL_UpdateRect\n");
  // revised
  int full_screen = (x == 0) && (y == 0) && (w == 0) && (h == 0);
  int draw_w = 0, draw_h = 0;
  uint32_t *true_pixel_pt = NULL;
  SDL_Color* palette = NULL;
  int r, g, b;
  if(full_screen){
    draw_w = s->w;
    draw_h = s->h;
    if(s->format->palette == NULL){
      true_pixel_pt = s->pixels;
      //NDL_DrawRect(s->pixels, 0, 0, s->w, s->h);
    }
    else{
      // palette
      palette = s->format->palette->colors;
      assert(palette != NULL);
      uint32_t true_pixel[draw_w*draw_h];
      for(int i=0;i<draw_w*draw_h;i++){
        r = palette[s->pixels[i]].r;
        g = palette[s->pixels[i]].g;
        b = palette[s->pixels[i]].b;
        true_pixel[i] = (r << 16) + (g << 8) + b;
      }
      true_pixel_pt = true_pixel;
    }
  }
  else{
    draw_w = w;
    draw_h = h;
    int offset = x+y*s->w;
    uint32_t true_pixel1[draw_w*draw_h];
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
      char *current_src = s->pixels+offset;
      int index = 0;
      for(int i=0;i<draw_h;i++){
        for(int j=0;j<draw_w;j++){
          //r = palette[s->pixels[i]].r;
          //g = palette[s->pixels[i]].g;
          //b = palette[s->pixels[i]].b;
          r = palette[*(current_src+j)].r;
          g = palette[*(current_src+j)].g;
          b = palette[*(current_src+j)].b;
          true_pixel1[index] = (r << 16) + (g << 8) + b;
          index++;
        }
        current_src += s->w;
      }
    }
    true_pixel_pt = true_pixel1;
  }
  assert(true_pixel_pt != NULL);
  NDL_DrawRect(true_pixel_pt, x, y, draw_w, draw_h);
  //printf("\nexit SDL_UpdateRect\n");
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
    SDL_UpdateRect(s, 0, 0, 0, 0);
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
