/* NanoCore 1.10 analysis module: boot/startup.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40000000.
 * REA evidence: ev_3af2f59e7481092c0d3743587435ccc1ae17dfc260717ceab405610944a40d87
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void firmware_entry(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
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
  
  DAT_ram_30045d10 = param_1;
  DAT_ram_30045d14 = param_2;
  DAT_ram_30045d18 = param_3;
  DAT_ram_30045d1c = param_4;
  DAT_ram_30045d20 = param_5;
  DAT_ram_30045d24 = param_6;
  DAT_ram_30045d28 = param_7;
  DAT_ram_30045d2c = param_8;
  DAT_ram_30045d30 = unaff_s0;
  DAT_ram_30045d34 = unaff_s1;
  DAT_ram_30045d38 = unaff_s2;
  DAT_ram_30045d3c = unaff_s3;
  DAT_ram_30045d40 = unaff_s4;
  DAT_ram_30045d44 = unaff_s5;
  DAT_ram_30045d48 = unaff_s6;
  DAT_ram_30045d4c = unaff_s7;
  DAT_ram_30045d50 = unaff_s8;
  DAT_ram_30045d54 = unaff_s9;
  DAT_ram_30045d58 = unaff_s10;
  DAT_ram_30045d5c = unaff_s11;
  DAT_ram_30045d60 = (undefined1 *)register0x00002008;
  DAT_ram_30045d64 = unaff_retaddr;
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = &DAT_ram_30045d68;
    puVar2 = (undefined4 *)((int)param_2 + 0xff);
    do {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
    } while (param_2 < puVar2);
  }
  runtime_startup();
  return;
}


/* NanoCore 1.10, address 0x40000004.
 * REA evidence: ev_b720cbd2323c8f8ae25437b9bbd70fff24d2c90aef66407411d93edfb7656a5c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void runtime_startup(void)

{
  undefined4 *puVar1;
  
  _mtvec = 0x40000583;
  _DAT_csreg_0307 = &PTR_LAB_ram_40000580_ram_30045b80;
  mscratch = 0x30049040;
  thunk_FUN_ram_4003e1ea();
  thunk_FUN_ram_4003ee8c();
  thunk_FUN_ram_4003eec4();
  puVar1 = (undefined4 *)&DAT_ram_30048040;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 < (undefined4 *)0x3008d038);
  FUN_ram_400074ba();
  FUN_ram_4003ef4a();
  FUN_ram_40004468();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


