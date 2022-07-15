.globl  _start
_start:
  move s0, a0
  move sp, a0
  #lw  s0, 2(s0) # breakpoint for debug
  jal call_main
