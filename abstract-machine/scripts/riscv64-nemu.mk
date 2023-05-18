include $(AM_HOME)/scripts/isa/riscv64.mk
include $(AM_HOME)/scripts/platform/nemu.mk
CFLAGS  += -DISA_H=\"riscv/riscv.h\"
ifeq ($(TEST_NPC),)
	AM_SRCS += riscv/npc/start.S \
		   riscv/npc/cte.c \
		   riscv/npc/trap.S
else
	AM_SRCS += riscv/nemu/start.S \
		   riscv/nemu/cte.c \
		   riscv/nemu/trap.S \
		   riscv/nemu/vme.c
endif
#AM_SRCS += riscv/nemu/start.S \
           riscv/nemu/cte.c \
           riscv/nemu/trap.S \
           riscv/nemu/vme.c
