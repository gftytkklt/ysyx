#include <nvboard.h>
#include "Vexample.h"

void nvboard_bind_all_pins(Vexample* top){
	nvboard_bind_pin(&top->a, false, false, 1, SW0);
	nvboard_bind_pin(&top->b, false, false, 1, SW1);
	nvboard_bind_pin(&top->z, false, true, 1, LD0);
}