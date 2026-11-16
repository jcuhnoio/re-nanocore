/* Firmware 1.2: preserve compiler save/restore helper calling convention.
 * Entry hooks run before stack allocation; fallbacks recreate jal t0 exactly.
 */
.option norelax
.section .text
.macro native_entry resume, helper
 li t0,\resume
 li t1,\helper
 jr t1
.endm
.macro octave_only fallback
 li t0,1
 bne a0,t0,\fallback
 li t0,8
 bne a1,t0,\fallback
.endm
.global nc_octave_name_gate
nc_octave_name_gate:
 octave_only 1f
 la a0,nc_octave_name
 ret
1: native_entry 0x4002a562,0x4000c3d4
.global nc_octave_label_gate
nc_octave_label_gate:
 octave_only 1f
 j nc_octave_label
1: native_entry 0x4002a8c0,0x4000c3ba
.global nc_octave_count_gate
nc_octave_count_gate:
 octave_only 1f
 li a0,11
 ret
1: native_entry 0x4002b93e,0x4000c3d4
.global nc_octave_format_gate
nc_octave_format_gate:
 octave_only 1f
 j nc_octave_format
1: native_entry 0x4002bc24,0x4000c3a4
.global nc_octave_defaults_gate
nc_octave_defaults_gate:
 beqz a0,3f
 li t0,8
 bne a2,t0,4f
 mv t0,a0
 li t1,0
 la t2,nc_octave_defaults_values
1: bgeu t1,a1,3f
 li t3,11
 li t4,0
 bgeu t1,t3,2f
 lw t4,0(t2)
 addi t2,t2,4
2: sw t4,0(t0)
 addi t0,t0,4
 addi t1,t1,1
 j 1b
3: ret
4: native_entry 0x4006ae12,0x4000c3d4
.global nc_octave_enum_gate
nc_octave_enum_gate:
 li t0,8
 beq s1,t0,1f
 li t0,9
 beq s1,t0,1f
 li t0,0x40021594
 jr t0
1: li t0,1
 sw t0,0(s0)
 sw zero,4(s0)
 lui t0,0x40400
 sw t0,8(s0)
 li t0,0x400216dc
 jr t0
/* DSP-bank setter asks this count before accepting an index. */
.global nc_octave_native_count_gate
nc_octave_native_count_gate:
 li t0,8
 bne a0,t0,1f
 li a0,11
 ret
1: addi a4,a0,-12
 li t0,0x4006adbe
 jr t0
