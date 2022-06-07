#include <dlfcn.h>
#include <stdint.h>
#include <stdio.h>
#include <cassert>

#define PC_START 0x80000000
//extern uint8_t* mem;
//extern uint64_t* cpu_gpr;
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
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
	nemu_difftest_regcpy(cpu_gpr, DIFFTEST_TO_REF);
	//printf("test2\n");
}

void difftest_step(uint64_t pc, uint64_t* dut){
	uint64_t ref_data[32];
	nemu_difftest_exec(1);
	nemu_difftest_regcpy(ref_data, DIFFTEST_TO_DUT);
	for(int i=0;i<32;i++){
		if(dut[i] != ref_data[i]){printf("pc: %lx, reg %d does not match! ref: %lx, dut: %lx\n",pc, (i+1), ref_data[i], dut[i]);}
	}
}
