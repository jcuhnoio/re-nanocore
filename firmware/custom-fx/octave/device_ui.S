/* Entered after native FX2 defaults prologue; s0=count, s1=destination.
 * Only subtype8 changes. No calls and no callee-saved register mutations.
 */
.option norelax
.section .text.nc_octave_count_gate,"ax",@progbits
.global nc_octave_count_gate
nc_octave_count_gate:
 bne a4,a3,5f
 li t0,0x40026efe
 jr t0
5:
 li t0,0x40026f02
 jr t0
.section .text.nc_octave_defaults_gate,"ax",@progbits
.global nc_octave_defaults_gate
nc_octave_defaults_gate:
 bne a2,a6,4f
 mv t0,s1
 mv t1,s0
1:
 beqz t1,2f
 sw zero,0(t0)
 addi t0,t0,4
 addi t1,t1,-1
 j 1b
2:
 beqz s0,3f
 li t0,0x3f266666 /* .65f */
 sw t0,0(s1)
 li t0,3
 bltu s0,t0,3f
 li t0,0x3f000000 /* .5f */
 sw t0,8(s1)
3:
 li t0,0x4006c998
 jr t0
4:
 li t0,0x4006c94e
 jr t0

.section .rodata.nc_octave_labels,"a",@progbits
.global nc_octave_name, nc_octave_dry_label, nc_octave_swell_label, nc_octave_level_label
nc_octave_name: .asciz "OCTAVE"
nc_octave_dry_label: .asciz "DRY"
nc_octave_swell_label: .asciz "SWELL"
nc_octave_level_label: .asciz "LEVEL"
