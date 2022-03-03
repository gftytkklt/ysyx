export VSRC=example
export CSRC=main

all: sim
	#@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	#@echo "Write this Makefile by your self."
	verilator -Wall --cc --exe --build csrc/$(CSRC).cpp vsrc/$(VSRC).v
	./obj_dir/V$(VSRC)
	gtkwave wave.vcd	
include ../Makefile
