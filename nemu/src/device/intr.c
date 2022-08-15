#include <isa.h>

void dev_raise_intr() {
  printf("dev_raise_intr\n");
  cpu.INTR = 1;
}
