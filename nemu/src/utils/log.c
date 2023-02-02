#include <common.h>

extern uint64_t g_nr_guest_inst;
FILE *log_fp = NULL;
#ifdef CONFIG_CTRACE
FILE *itrace = NULL;
FILE *dtrace = NULL;
#endif

void init_log(const char *log_file) {
  log_fp = stdout;
  if (log_file != NULL) {
    FILE *fp = fopen(log_file, "w");
    Assert(fp, "Can not open '%s'", log_file);
    log_fp = fp;
  }
  Log("Log is written to %s", log_file ? log_file : "stdout");
  #ifdef CONFIG_CTRACE
    Log("mem trace data will be logged to corresponding .txt");
    itrace = fopen("/home/gftyt/ysyx-workbench/nemu/tools/cache-profiler/itrace.txt","w");
    dtrace = fopen("/home/gftyt/ysyx-workbench/nemu/tools/cache-profiler/dtrace.txt","w");
  #endif
}

bool log_enable() {
  return MUXDEF(CONFIG_TRACE, (g_nr_guest_inst >= CONFIG_TRACE_START) &&
         (g_nr_guest_inst <= CONFIG_TRACE_END), false);
}

#ifdef CONFIG_CTRACE
// is itrace: true for print inst fetch, false for print data
// char type: 'w' for write, 'r' for read
// addr: mem addr
void print_ctrace(bool is_itrace, char type, uint64_t addr){
  FILE *trace = is_itrace ? itrace : dtrace;
  fprintf(trace, "%c %lx\n",type, addr);
}
#endif
