# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vysyx_22040750.mk

default: /home/gftyt/ysyx-workbench/npc/build/ysyx_22040750

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /home/gftyt/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= /home/gftyt/systemc/systemc-2.3.3/include
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= /home/gftyt/systemc/systemc-2.3.3/lib-linux64

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vysyx_22040750
# Module prefix (from --prefix)
VM_MODPREFIX = Vysyx_22040750
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-MMD \
	-O3 \
	-I/home/gftyt/ysyx-workbench/npc/csrc/include \
	-I/usr/lib/llvm-12/include \
	-std=c++14 \
	-fno-exceptions \
	-D_GNU_SOURCE \
	-D__STDC_CONSTANT_MACROS \
	-D__STDC_LIMIT_MACROS \
	-fPIE \
	-DTOP_NAME="Vysyx_22040750" \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	/home/gftyt/ysyx-workbench/npc/csrc/util/build/util.a \
	-lLLVM-12 \
	-ldl \
	-lSDL2 \
	-lSDL2_image \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	cputest_axi \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/gftyt/ysyx-workbench/npc/csrc \


### Default rules...
# Include list of all generated classes
include Vysyx_22040750_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

cputest_axi.o: /home/gftyt/ysyx-workbench/npc/csrc/cputest_axi.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/gftyt/ysyx-workbench/npc/build/ysyx_22040750: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
