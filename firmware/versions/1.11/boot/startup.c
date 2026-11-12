/* NanoCore 1.11 analysis module: boot/startup.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40000000.
 * REA evidence: ev_8d255943a2a3a4f9f37033827faf1826d9febd14c3fa9c8733f8e3d8eb0032ed
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
  
  DAT_ram_300493d0 = param_1;
  DAT_ram_300493d4 = param_2;
  DAT_ram_300493d8 = param_3;
  DAT_ram_300493dc = param_4;
  DAT_ram_300493e0 = param_5;
  DAT_ram_300493e4 = param_6;
  DAT_ram_300493e8 = param_7;
  DAT_ram_300493ec = param_8;
  DAT_ram_300493f0 = unaff_s0;
  DAT_ram_300493f4 = unaff_s1;
  DAT_ram_300493f8 = unaff_s2;
  DAT_ram_300493fc = unaff_s3;
  DAT_ram_30049400 = unaff_s4;
  DAT_ram_30049404 = unaff_s5;
  DAT_ram_30049408 = unaff_s6;
  DAT_ram_3004940c = unaff_s7;
  DAT_ram_30049410 = unaff_s8;
  DAT_ram_30049414 = unaff_s9;
  DAT_ram_30049418 = unaff_s10;
  DAT_ram_3004941c = unaff_s11;
  DAT_ram_30049420 = (undefined1 *)register0x00002008;
  DAT_ram_30049424 = unaff_retaddr;
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = &DAT_ram_30049428;
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


