.option norelax
.section .text.nc_octave_count_gate,"ax",@progbits
.global nc_octave_count_gate
nc_octave_count_gate:
 bne a4,a3,1f
 li a0,11
 li t0,0x40026f60
 jr t0
1: li t0,0x40026f02
 jr t0

/* Native defaults has already saved registers; s0=count, s1=destination. */
.section .text.nc_octave_defaults_gate,"ax",@progbits
.global nc_octave_defaults_gate
nc_octave_defaults_gate:
 bne a2,a6,4f
 mv t0,s1
 li t1,0
 la t2,nc_octave_defaults_values
1: bgeu t1,s0,3f
 li t3,0
 li t4,11
 bgeu t1,t4,2f
 lw t3,0(t2)
 addi t2,t2,4
2: sw t3,0(t0)
 addi t0,t0,4
 addi t1,t1,1
 j 1b
3: li t0,0x4006c998
 jr t0
4: li t0,0x4006c94e
 jr t0

/* Entry trampolines preserve every native argument on non-target paths. */
.section .text.nc_octave_label_gate,"ax",@progbits
.global nc_octave_label_gate
nc_octave_label_gate:
 li t0,1
 bne a0,t0,1f
 li t0,8
 bne a1,t0,1f
 j nc_octave_label
1: addi sp,sp,-32
 sw s0,24(sp)
 li t0,0x40026082
 jr t0
.section .text.nc_octave_format_gate,"ax",@progbits
.global nc_octave_format_gate
nc_octave_format_gate:
 li t0,1
 bne a0,t0,1f
 li t0,8
 bne a1,t0,1f
 j nc_octave_format
1: addi sp,sp,-80
 sw s0,72(sp)
 li t0,0x40027196
 jr t0

/* Called only after the native FX2/subtype8 tests and descriptor clear.
 * This internal hook leaves the separate UniVibe entry hook untouched.
 */
.section .text.nc_octave_enum_gate,"ax",@progbits
.global nc_octave_enum_gate
nc_octave_enum_gate:
 li t0,8
 beq s1,t0,1f
 li t0,9
 beq s1,t0,1f
 li t0,0x4001b3da
 jr t0
1: li t0,1
 sw t0,0(s0)
 sw zero,4(s0)
 lui t0,0x40400 /* 3.0: native integer range 0..3 normalizes to 0..1000 */
 sw t0,8(s0)
 li t0,0x4001b48c
 jr t0

/* Native FX2 bank writer has a separate five-value cap. Expand only subtype8;
 * preserve its lock, bank copy, defaults, publication and all other subtypes.
 */
.section .text.nc_octave_setter_gate,"ax",@progbits
.global nc_octave_setter_gate
nc_octave_setter_gate:
 li a5,4
 li t0,0x3004f730
 lbu t0,0(t0)
 li t1,8
 bne t0,t1,1f
 li a5,10
1: bltu a5,s3,2f
 li t0,0x4000beec
 jr t0
2: li t0,0x4000bf4e
 jr t0
