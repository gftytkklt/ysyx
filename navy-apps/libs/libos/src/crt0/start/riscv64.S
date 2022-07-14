.globl  _start
_start:
  move s0, zero
  lw s0, 0(s0)
  #move sp, a0
  jal call_main
