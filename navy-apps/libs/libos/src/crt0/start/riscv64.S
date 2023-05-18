.globl  _start
_start:
  move s0, zero
  #move sp, a0
  #ld a0, 0(zero) # breakpoint for debug
  #jal __libc_init_array
  jal call_main
