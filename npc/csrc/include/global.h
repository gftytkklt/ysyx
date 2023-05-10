#ifndef COMMON_H
#define COMMON_H
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <malloc.h>
#include <stdint.h>
#include <time.h>
#include <sys/time.h>
#define CONFIG_FTRACE
#define CONFIG_MTRACE
#define CONFIG_ITRACE
#define CONFIG_DIFFTEST
#define CONFIG_WAVEFORM
#define CONFIG_GUI
//#define CONFIG_AUDIO
#define ASNI_FG_RED     "\33[1;31m"
#define ASNI_FG_GREEN   "\33[1;32m"
#define ASNI_NONE       "\33[0m"
#define ASNI_FMT(str, fmt) fmt str ASNI_NONE
#define MEM_BASE 0x80000000
#define MEM_SIZE 0x8000000
#endif
