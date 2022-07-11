#include <am.h>
#include <NDL.h>

void __am_audio_config(AM_AUDIO_CONFIG_T *cfg) {
  cfg->present = false;// modify it to false to disable audio
  cfg->bufsize = 0;// 64K
}

void __am_audio_ctrl(AM_AUDIO_CTRL_T *ctrl) { }

void __am_audio_status(AM_AUDIO_STATUS_T *stat) { }

void __am_audio_play(AM_AUDIO_PLAY_T *ctl) { }
