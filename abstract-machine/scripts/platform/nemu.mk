AM_SRCS := platform/nemu/trm.c \
	   platform/nemu/ioe/ioe.c \
           platform/nemu/ioe/timer.c \
           platform/nemu/ioe/input.c \
           platform/nemu/ioe/gpu.c \
           platform/nemu/ioe/audio.c \
           platform/nemu/ioe/disk.c \
           platform/nemu/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld \
             --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
NEMUFLAGS += -l $(shell dirname $(IMAGE).elf)/nemu-log.txt
#NEMUFLAGS += -b
#NEMUFLAGS += $(if CiONFIG_RACE,-e $(IMAGE).elf, )
#ifdef CONFIG_FTRACE
NEMUFLAGS += -e $(IMAGE).elf
#ifdef HAS_RAMDISK
#NEMUFLAGS += /home/gftyt/ysyx-workbench/nanos-lite/$(RAMDISK_FILE)
#endif
#endif
CFLAGS += -DMAINARGS=\"$(mainargs)\"
CFLAGS += -I$(AM_HOME)/am/src/platform/nemu/include
.PHONY: $(AM_HOME)/am/src/platform/nemu/trm.c

image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: image
#	$(NEMU_HOME)/tools/kconfig/build/conf -s --defconfig=configs/riscv64-am_defconfig $(NEMU_HOME)/tools/kconfig
#	$(NEMU_HOME)/tools/kconfig/build/conf $(silent) --syncconfig $(NEMU_HOME)/tools/kconfig
#	$(NEMU_HOME)/tools/kconfig/build/conf -s --syncconfig $(NEMU_HOME)/tools/kconfig
	$(MAKE) -C $(NEMU_HOME) ISA=$(ISA) run ARGS="$(NEMUFLAGS)" IMG=$(IMAGE).bin

gdb: image
	$(MAKE) -C $(NEMU_HOME) ISA=$(ISA) gdb ARGS="$(NEMUFLAGS)" IMG=$(IMAGE).bin
