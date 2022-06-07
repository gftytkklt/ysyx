VSRC = $(shell find $(abspath ./vsrc) -name "*.v")
CSRC = $(abspath ./csrc/cputest.cpp)
CSRC += $(shell find $(abspath ./csrc/util) -name "*.cpp")
WAVEFILE = addcpu_sim
TOPNAME = cpu_top
#NXDC_FILES = constr/example.nxdc
INC_PATH ?=
# debug config(in place of Kconfig)
#CONFIG_ITRACE=y
#CONFIG_FTRACE=y
#CONFIG_MTRACE=n
#CONFIG_DIFFTEST=n
#ifdef CONFIG_ITRACE
#CXXSRC += $(abspath ./csrc/disasm.cpp)
CFLAGS += -I/usr/lib/llvm-12/include -std=c++14   -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_LIMIT_MACROS -fPIE
LDFLAGS += $(shell llvm-config --libs) -ldl
#endif
#ifdef CONFIG_FTRACE
#CSRC += $(abspath ./csrc/readelf.cpp)
#endif
# verilator flag
VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
		    -O3 --x-assign fast --x-initial fast --noassert --trace
BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

#SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
#$(SRC_AUTO_BIND): $(NXDC_FILES)
#	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

#CSRC += $(SRC_AUTO_BIND)

#include $(NVBOARD_HOME)/scripts/nvboard.mk

INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
LDFLAGS += -lSDL2 -lSDL2_image

$(BIN): $(VSRC) $(CSRC)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		-top $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

RUNARGS := $(BIN) $(IMG).bin $(IMG).elf
DIFF_NEMU = $(NEMU_HOME)/build/riscv64-nemu-interpreter-so
run: $(BIN) $(DIFFTEST_NEMU)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@$(RUNARGS) $(DIFF_NEMU)
#gdb: $(BIN)
#	$(call git_commit, "debug TB")
#	gdb -s $(BIN) --args $(RUNARGS)
#difftest: $(BIN)
#	$(call git_commit, "sim RTL in difftest mode")
#	@$(RUNARGS) $(DIFFTEST_NEMU)
clean:
	rm -rf $(BUILD_DIR)
.PHONY: clean run
