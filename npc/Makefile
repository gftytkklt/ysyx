export VSRC=example
export CSRC=main
export WAVEFILE=switch_sim
all: sim

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall --cc --exe --build --trace csrc/$(CSRC).cpp vsrc/$(VSRC).v
	./obj_dir/V$(VSRC)
	gtkwave $(switch_sim).vcd	
include ../Makefile
