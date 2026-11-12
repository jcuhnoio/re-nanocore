.option norvc
.text
.globl spl_reader
spl_reader:
 addi sp, sp, -32
 sw ra, 28(sp)
 sw a3, 24(sp)
 sw a4, 20(sp)
 beqz a4, unhandled
 beqz a3, bad
 beqz a1, bad
 li t0, 5
 bne a2, t0, bad
 lbu t0, 0(a1)
 lbu t1, 1(a1)
 slli t1, t1, 8
 or t0, t0, t1
 lbu t1, 2(a1)
 slli t1, t1, 16
 or t0, t0, t1
 lbu t1, 3(a1)
 slli t1, t1, 24
 or t0, t0, t1
 lbu t1, 4(a1)
 beqz t1, bad
 li t2, 200
 bltu t2, t1, bad
 li t2, 0x26000
 sub t2, t2, t1
 bltu t2, t0, bad
 sw t0, 16(sp)
 sw t1, 12(sp)
 li a0, 0x40092e78
 li t0, 0x40006efa
 jalr ra, t0, 0
 beqz a0, failed
 lw a1, 16(sp)
 li a2, 0x3008a56c
 lw a3, 12(sp)
 li t0, 0x40006f5e
 jalr ra, t0, 0
 lw t0, 12(sp)
 bne a0, t0, failed
 lw t0, 24(sp)
 li t1, 0x3008a56c
 sw t1, 0(t0)
 sw a0, 4(t0)
 lw t0, 20(sp)
 sb zero, 0(t0)
 li a0, 1
 j done
bad:
 li t1, 1
 j error
failed:
 li t1, 4
error:
 lw t0, 20(sp)
 sb t1, 0(t0)
 li a0, 1
 j done
unhandled:
 li a0, 0
done:
 lw ra, 28(sp)
 addi sp, sp, 32
 ret
