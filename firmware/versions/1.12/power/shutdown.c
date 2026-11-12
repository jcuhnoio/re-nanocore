/* NanoCore 1.12 analysis module: power/shutdown.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4003f8c0.
 * REA evidence: ev_ae68abc9b41078157293654a9b6e822016178cb193702601fdaf17ea5cbdfa0b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_poweroff_wait_loop(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  FUN_ram_4003f0ce(s_PD_16_ram_40096694,0);
  FUN_ram_4003f0ce(s_PD_10_ram_400966cc,0);
  FUN_ram_4003f6b6(0);
  FUN_ram_4003f702(0);
  if (param_1 != 0) {
    FUN_ram_40041ab4(*(undefined4 *)(gp + -0x1dc),0);
  }
  *(undefined1 *)(gp + -0x1d4) = 0;
  DAT_ram_3007fed2 = 1;
  _DAT_ram_3007fec8 = 0;
  _DAT_ram_3007fecc = 0;
  DAT_ram_3007fed0 = 0;
  DAT_ram_3007fed1 = 0;
  FUN_ram_400064e4(300);
  iVar2 = FUN_ram_4003f672();
  if (iVar2 == 0) {
    return;
  }
  FUN_ram_4000f746();
  while (iVar2 = FUN_ram_40041ac8(*(undefined4 *)(gp + -0x1d8)), iVar2 == 1) {
    FUN_ram_40029d3c(3);
    nc_radio_retry_disable_during_shutdown();
    FUN_ram_400064e4(0x14);
  }
  do {
    FUN_ram_40029d3c(3);
    uVar1 = 0;
    nc_radio_retry_disable_during_shutdown();
    while (iVar2 = FUN_ram_40041ac8(*(undefined4 *)(gp + -0x1d8)), iVar2 == 1) {
      nc_radio_retry_disable_during_shutdown();
      uVar1 = uVar1 + 10;
      FUN_ram_400064e4(10);
      if (99 < uVar1) {
        FUN_ram_40029e74();
      }
    }
    FUN_ram_400064e4(0x14);
  } while( true );
}


