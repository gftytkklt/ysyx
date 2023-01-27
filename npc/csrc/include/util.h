#ifndef UTIL_H
#define UTIL_H
#include <global.h>
#include <SDL2/SDL.h>
#include <fenv.h>

#define W    400
#define H    300

#define FPS   60

#define RMASK 0x00ff0000
#define GMASK 0x0000ff00
#define BMASK 0x000000ff
#define AMASK 0x00000000

SDL_Window *window;
SDL_Surface *surface;

Uint32 texture_sync(Uint32 interval, void *param);
void init_screen();
void update_screen();
#endif