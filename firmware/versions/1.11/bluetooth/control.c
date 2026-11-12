/* NanoCore 1.11 analysis module: bluetooth/control.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4002b100.
 * REA evidence: ev_4f6cbf9b4052e56c9c41b4a09b4217954fc114306fcf78200ca3efa0f201e995
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void nc_radio_send_enable_command(int param_1)

{
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  uStack_13 = param_1 != 0;
  uStack_14 = 2;
  nc_radio_send_control_if_ready(&uStack_14,2);
  return;
}


/* NanoCore 1.11, address 0x4002ca46.
 * REA evidence: ev_934b2a68135f079e314a334d5af51139af462512fcb5f8d314fff4070144f6b5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void nc_radio_set_enabled(undefined4 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3007ada0 = '\x01' - (char)param_1;
  DAT_ram_3007ad9e = 0;
  DAT_ram_3007ad9f = 0;
  DAT_ram_3007ad9d = 0;
  FUN_ram_400002fa();
  nc_radio_send_enable_command(param_1);
  return;
}


/* NanoCore 1.11, address 0x4002cacc.
 * REA evidence: ev_272b3270e4fd9a5ba504a5b0c678d12d977ca21a6a9ff69502cd9e80aa4dc95d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4002cb0e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_radio_retry_disable_during_shutdown(void)

{
  int iVar1;
  
  if (DAT_ram_3007ada8 != '\0') {
    return;
  }
  iVar1 = nc_radio_uart5_init();
  if (((iVar1 == 0) && (iVar1 = FUN_ram_4002a6a0(), iVar1 != 0)) &&
     ((iVar1 = FUN_ram_400042ea(), _DAT_ram_3007ada4 == 0 || (_DAT_ram_3007ada4 - iVar1 < 1)))) {
    nc_radio_set_enabled(0);
    _DAT_ram_3007ada4 = FUN_ram_40004352(500);
    _DAT_ram_3007ada4 = iVar1 + _DAT_ram_3007ada4;
  }
  return;
}


