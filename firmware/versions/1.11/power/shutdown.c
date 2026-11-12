/* NanoCore 1.11 analysis module: power/shutdown.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4003f7fe.
 * REA evidence: ev_3ddd7391e9ca0c91886f3f05f1019fd7af5d4011a9de111ad3c7feb66e68b9f5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_poweroff_wait_loop(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  FUN_ram_4003f00c(s_PD_16_ram_4009456c,0);
  FUN_ram_4003f00c(s_PD_10_ram_400945a4,0);
  FUN_ram_4003f5f4(0);
  FUN_ram_4003f640(0);
  if (param_1 != 0) {
    FUN_ram_400419f2(*(undefined4 *)(gp + -0x1dc),0);
  }
  *(undefined1 *)(gp + -0x1d4) = 0;
  DAT_ram_3007fe52 = 1;
  _DAT_ram_3007fe48 = 0;
  _DAT_ram_3007fe4c = 0;
  DAT_ram_3007fe50 = 0;
  DAT_ram_3007fe51 = 0;
  FUN_ram_400065c6(300);
  iVar2 = FUN_ram_4003f5b0();
  if (iVar2 == 0) {
    return;
  }
  FUN_ram_4000f036();
  while (iVar2 = FUN_ram_40041a06(*(undefined4 *)(gp + -0x1d8)), iVar2 == 1) {
    FUN_ram_40029028(3);
    nc_radio_retry_disable_during_shutdown();
    FUN_ram_400065c6(0x14);
  }
  do {
    FUN_ram_40029028(3);
    uVar1 = 0;
    nc_radio_retry_disable_during_shutdown();
    while (iVar2 = FUN_ram_40041a06(*(undefined4 *)(gp + -0x1d8)), iVar2 == 1) {
      nc_radio_retry_disable_during_shutdown();
      uVar1 = uVar1 + 10;
      FUN_ram_400065c6(10);
      if (99 < uVar1) {
        FUN_ram_40029160();
      }
    }
    FUN_ram_400065c6(0x14);
  } while( true );
}


