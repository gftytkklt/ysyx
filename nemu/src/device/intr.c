#include <isa.h>

void dev_raise_intr() {
  printf("dev raise intr\n");
  cpu.INTR = 1;
}
