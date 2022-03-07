#include <stdlib.h>
#include <nvboard.h>
#include <Vexample.h>

static TOP_NAME xor_gate;
void nvboard_bind_all_pins(Vexample* example);
static void single_cycle(){
	xor_gate.eval();
}

int main(){
	nvboard_bind_all_pins(&xor_gate);
	nvboard_init();
	
	while(1){
		nvboard_update();
		single_cycle();
	}
}
