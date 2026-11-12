/* NanoCore1.11/1.12 MOD10-only UI helpers. All external branches are fixed native addresses. */
.option norelax
.section .vibe_defaults,"ax",@progbits
.global vibe_defaults, vibe_count, vibe_speed_label, vibe_mode_label
vibe_defaults:
 beqz a0, 3f
 li t0, 0
 la t1, defaults
1:
 bgeu t0, a1, 3f
 li t2, 0
 li t3, 4
 bgeu t0, t3, 2f
 lw t2, 0(t1)
 addi t1,t1,4
2:
 sw t2, 0(a0)
 addi a0,a0,4
 addi t0,t0,1
 j 1b
3:
 ret
vibe_count:
 #if V112
 bne a3,a2,count_continue
#else
 bne a4,a3,count_continue
#endif
 li a3,10
 bne a0,a3,count_five
 li a0,4
 j count_return
count_five:
 li a0,5
 j count_return
.balign 4
.short 0 /* section starts at2mod4; align actual float table */
defaults:
 .float 0.35,0.8,0.5,0.0
vibe_speed_label: .asciz "SPEED"
vibe_mode_label: .asciz "MODE"

.section .vibe_format,"ax",@progbits
.global vibe_format
vibe_format:
#if V112
 fmv.s fa0,fs0
#endif
 mv a0,s1
 mv a1,s2
 li a5,3
 bne s0,a5,percentage
 lui a5,0x3f000
 fmv.w.x fa5,a5
 flt.s a5,fa0,fa5
 li a3,CHORUS_LABEL /* CHORUS */
 bnez a5,4f
 li a3,VIBRATO_LABEL /* VIBRATO */
4:
 li a2,FORMAT_STRING /* %s */
 jal ra,native_snprintf
 j done
percentage:
 jal ra,native_percentage
done:
 li a0,0
 j format_return

.section .vibe_enum,"ax",@progbits
.global vibe_enum
vibe_enum:
 li t0,5
 bne a0,t0,original_enum
 li t0,3
 bne a1,t0,original_enum
 li t0,MOD_SUBTYPE
 lbu t0,0(t0)
 li t1,10
 bne t0,t1,original_enum
 li t0,1
 sw t0,0(a2)
 sw zero,4(a2)
 lui t0,0x3f800
 sw t0,8(a2)
 sw zero,12(a2)
 sw zero,16(a2)
 li a0,1
 ret
original_enum:
 addi sp,sp,-32
 sw s0,24(sp)
 j enum_continue
