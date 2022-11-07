#include <dlfcn.h>
#include <stdint.h>
#include <stdio.h>
#include <cassert>

#define PC_START 0x80000000
//extern uint8_t* mem;
//extern uint64_t* cpu_gpr;
const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
static bool is_skip_ref = false;
static uint64_t skip_pc = 0;
static uint64_t cpu_context[33];
void (*nemu_difftest_memcpy)(uint64_t addr, void* buf, size_t n, bool direction) = NULL;
void (*nemu_difftest_regcpy)(void* dut, bool direction) = NULL;
void (*nemu_difftest_exec)(uint64_t n) = NULL;
void (*nemu_difftest_raise_intr)(uint64_t NO) = NULL;

void init_difftest(char *ref_so_file, long img_size, uint8_t* mem, uint64_t *cpu_gpr){
	assert(ref_so_file != NULL);
	void *handle;
	handle = dlopen(ref_so_file, RTLD_LAZY);
	assert(handle);
	nemu_difftest_memcpy = (void (*)(uint64_t, void*, size_t, bool))dlsym(handle, "difftest_memcpy");
	assert(nemu_difftest_memcpy);
	nemu_difftest_regcpy = (void (*)(void*, bool))dlsym(handle, "difftest_regcpy");
	assert(nemu_difftest_regcpy);
	nemu_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
	assert(nemu_difftest_exec);
	nemu_difftest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
	assert(nemu_difftest_raise_intr);
	void(*nemu_difftest_init)(void) = (void (*)())dlsym(handle, "difftest_init");
	assert(nemu_difftest_init);
	//printf("difftest link end\n");
	nemu_difftest_init();
	nemu_difftest_memcpy(PC_START, mem, img_size, DIFFTEST_TO_REF);
	for(int i = 0;i<32;i++){
	  cpu_context[i] = cpu_gpr[i];
	}
	cpu_context[32] = PC_START;
	nemu_difftest_regcpy(cpu_context, DIFFTEST_TO_REF);
	//printf("test2\n");
}

void difftest_skip_ref(uint64_t pc) {
	is_skip_ref = true;
	skip_pc = pc;
}

void difftest_step(uint64_t pc, uint64_t* dut, uint64_t sim_time, bool* error){
	//for(int i=0;i<32;i++){dut_context.gpr[i] = dut[i];}
	//dut_context.pc = pc;
	uint64_t ref_data[32];
	//printf("exec nemu at pc = %lx\n",pc);
	if (is_skip_ref && (skip_pc == pc)) {
        	// to skip the checking of an instruction, just copy the reg state to reference design
        	//printf("skip ref at pc = %lx\n", pc);
        	//nemu_difftest_regcpy(dut, DIFFTEST_TO_REF);
        	for(int i = 0;i<32;i++){
	  		cpu_context[i] = dut[i];
		}
		cpu_context[32] = pc+4;
        	nemu_difftest_regcpy(cpu_context, DIFFTEST_TO_REF);
        	is_skip_ref = false;
        	return;
        }
	nemu_difftest_exec(1);
	//printf("ref exec\n");
	nemu_difftest_regcpy(ref_data, DIFFTEST_TO_DUT);
	for(int i=0;i<32;i++){
		if(dut[i] != ref_data[i]){printf("time: %ld, pc: %lx, reg %s does not match! ref: %lx, dut: %lx\n", sim_time, pc, regs[i], ref_data[i], dut[i]);*error = true;}
	}
}
