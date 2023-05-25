-include $(NEMU_HOME)/../Makefile
VSRC = $(shell find $(abspath ./vsrc_fullpipline) -name "*.v")
#CSRC = $(abspath ./csrc/cputest.cpp)
CSRC = $(abspath ./csrc/cputest_axi.cpp)
#CSRC += $(shell find $(abspath ./csrc/util) -name "*.cpp")

#sim archrive def
UTIL_SRC = $(NPC_HOME)/csrc/util
UTIL_SRCS = $(shell find $(UTIL_SRC) -name "*.cpp")
UTIL_DIR = $(UTIL_SRC)/build
UTIL_OBJS := $(addprefix $(UTIL_DIR)/, $(addsuffix .o, $(basename $(notdir $(UTIL_SRCS)))))
#sim archive def end

INC_PATH ?= $(NPC_HOME)/csrc/include
INCLUDES = $(addprefix -I, $(INC_PATH))
CFLAGS += -MMD -O3 $(INCLUDES) -I/usr/lib/llvm-12/include -std=c++14   -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_LIMIT_MACROS -fPIE
LDFLAGS += $(shell llvm-config --libs) -ldl

#archive build rules
UTIL_ARCHIVE = $(UTIL_DIR)/util.a
$(UTIL_DIR)/%.o: $(UTIL_SRC)/%.cpp
	@echo + CXX "->" NPC_HOME/$(shell realpath $< --relative-to $(NPC_HOME))
	@mkdir -p $(dir $@)
	@$(CXX) $(CFLAGS) -c -o $@ $<

$(UTIL_ARCHIVE): $(UTIL_OBJS)
	@echo + AR "->" $(shell realpath $< --relative-to $(NPC_HOME))
	@ar rcs $(UTIL_ARCHIVE) $(UTIL_OBJS)

-include $(UTIL_OBJS:.o=.d)

# verilator flag
TOPNAME = ysyx_22040750
VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc \
		    -O3 --x-assign fast --x-initial fast \
		    --noassert --trace --savable
BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

#INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += -DTOP_NAME="\"V$(TOPNAME)\""
LDFLAGS += -lSDL2 -lSDL2_image
#-include *.d
$(BIN): $(VSRC) $(CSRC) $(UTIL_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		-top $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

#-include *.d

RUNARGS := $(BIN) $(IMG).bin $(IMG).elf
DIFF_NEMU = $(NEMU_HOME)/build/riscv64-nemu-interpreter-so
run: $(BIN)
	$(call git_commit, "sim RTL")
	@$(RUNARGS) $(DIFF_NEMU)
#gdb: $(BIN)
#	$(call git_commit, "debug TB")
#	gdb -s $(BIN) --args $(RUNARGS)
#difftest: $(BIN)
#	$(call git_commit, "sim RTL in difftest mode")
#	@$(RUNARGS) $(DIFFTEST_NEMU)
clean:
	rm -rf $(BUILD_DIR)
	rm -rf $(UTIL_DIR)
.PHONY: clean run
