.globl  _start
_start:
  move s0, zero
  sub  a7, a7, a7
  lw a7, 0(a7)
  #move sp, a0
  jal call_main
