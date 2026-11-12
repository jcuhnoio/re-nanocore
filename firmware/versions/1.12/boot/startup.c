/* NanoCore 1.12 analysis module: boot/startup.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40000000.
 * REA evidence: ev_e5901b7e89f498270f5a57b2a235608e0e1c7b85decbc238da0134f384655f32
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void entry(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 unaff_retaddr;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  
  DAT_ram_3004a310 = param_1;
  DAT_ram_3004a314 = param_2;
  DAT_ram_3004a318 = param_3;
  DAT_ram_3004a31c = param_4;
  DAT_ram_3004a320 = param_5;
  DAT_ram_3004a324 = param_6;
  DAT_ram_3004a328 = param_7;
  DAT_ram_3004a32c = param_8;
  DAT_ram_3004a330 = unaff_s0;
  DAT_ram_3004a334 = unaff_s1;
  DAT_ram_3004a338 = unaff_s2;
  DAT_ram_3004a33c = unaff_s3;
  DAT_ram_3004a340 = unaff_s4;
  DAT_ram_3004a344 = unaff_s5;
  DAT_ram_3004a348 = unaff_s6;
  DAT_ram_3004a34c = unaff_s7;
  DAT_ram_3004a350 = unaff_s8;
  DAT_ram_3004a354 = unaff_s9;
  DAT_ram_3004a358 = unaff_s10;
  DAT_ram_3004a35c = unaff_s11;
  DAT_ram_3004a360 = (undefined1 *)register0x00002008;
  DAT_ram_3004a364 = unaff_retaddr;
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = &DAT_ram_3004a368;
    puVar2 = (undefined4 *)((int)param_2 + 0xff);
    do {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
    } while (param_2 < puVar2);
  }
  FUN_ram_40000004();
  return;
}


