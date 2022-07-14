.globl  _start
_start:
  move s0, zero
  #move sp, a0
  lw  s0, 2(s0) # breakpoint for debug
  jal call_main
