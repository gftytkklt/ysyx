#include <common.h>
#include <device/map.h>
#include <SDL2/SDL.h>

enum {
  reg_freq,
  reg_channels,
  reg_samples,
  reg_sbuf_size,
  reg_init,
  reg_count,
  nr_reg
};
static volatile int count = 0;
static uint8_t *sbuf = NULL;
static uint32_t *audio_base = NULL;
SDL_AudioSpec s = {};
static uint32_t audio_freq() {
  return MUXDEF(CONFIG_TARGET_AM, io_read(AM_AUDIO_CTRL).freq, audio_base[0]);
}

static uint32_t audio_channels() {
  return MUXDEF(CONFIG_TARGET_AM, io_read(AM_AUDIO_CTRL).channels, audio_base[1]);
}

static uint32_t audio_samples() {
  return MUXDEF(CONFIG_TARGET_AM, io_read(AM_AUDIO_CTRL).samples, audio_base[2]);
}

static void audio_play(void *userdata, uint8_t *stream, int len){
  int nread = len;
  if (count < len) nread = count;
  //int b = 0;
  //while (b < nread) {
  //  int n = read(rfd, stream, nread);
  //  if (n > 0) b += n;
  //}

  count -= nread;
  if (len > nread) {
    memset(stream + nread, 0, len - nread);
  }
}

static void SDL_audio_init(){
  SDL_AudioSpec s = {};
  s.freq = audio_freq();
  s.format = AUDIO_S16SYS;
  s.channels = audio_channels();
  s.samples = audio_samples();
  s.callback = audio_play;
  s.userdata = NULL;

  count = 0;
  int ret = SDL_InitSubSystem(SDL_INIT_AUDIO);
  if (ret == 0) {
    SDL_OpenAudio(&s, NULL);
    SDL_PauseAudio(0);
  }
}

static void audio_io_handler(uint32_t offset, int len, bool is_write) {
  
}

void init_audio() {
  uint32_t space_size = sizeof(uint32_t) * nr_reg;
  audio_base = (uint32_t *)new_space(space_size);
#ifdef CONFIG_HAS_PORT_IO
  add_pio_map ("audio", CONFIG_AUDIO_CTL_PORT, audio_base, space_size, audio_io_handler);
#else
  add_mmio_map("audio", CONFIG_AUDIO_CTL_MMIO, audio_base, space_size, audio_io_handler);
#endif

  sbuf = (uint8_t *)new_space(CONFIG_SB_SIZE);
  add_mmio_map("audio-sbuf", CONFIG_SB_ADDR, sbuf, CONFIG_SB_SIZE, NULL);
  while(!audio_base[4]);// wait until __am_audio_init done
  SDL_audio_init();
  //memset(audio_base, 0, CONFIG_SB_SIZE);
}
