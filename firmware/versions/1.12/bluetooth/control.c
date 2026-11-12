/* NanoCore 1.12 analysis module: bluetooth/control.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4002be82.
 * REA evidence: ev_f72d4f4b146b3156ad55637d9c34483ef90306575b5ab6069f6c292490c2c4db
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


/* NanoCore 1.12, address 0x4002d90a.
 * REA evidence: ev_e1b17a9c2fa0e41674ac4e3b5071c27d841e3ca8bebb775864fc3d6a597911a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void nc_radio_set_enabled(undefined4 param_1)

{
  FUN_ram_400002f4();
  DAT_ram_30079de8 = '\x01' - (char)param_1;
  DAT_ram_30079de6 = 0;
  DAT_ram_30079de7 = 0;
  DAT_ram_30079de5 = 0;
  FUN_ram_400002fa();
  nc_radio_send_enable_command(param_1);
  return;
}


/* NanoCore 1.12, address 0x4002d990.
 * REA evidence: ev_d8487881f640672c20232c5e041a16ebac283197dd20d1358ded9126abf69bb4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4002d9d2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_radio_retry_disable_during_shutdown(void)

{
  int iVar1;
  
  if (DAT_ram_30079df0 != '\0') {
    return;
  }
  iVar1 = nc_radio_uart5_init();
  if (((iVar1 == 0) && (iVar1 = FUN_ram_4002b390(), iVar1 != 0)) &&
     ((iVar1 = FUN_ram_40004346(), _DAT_ram_30079dec == 0 || (_DAT_ram_30079dec - iVar1 < 1)))) {
    nc_radio_set_enabled(0);
    _DAT_ram_30079dec = FUN_ram_400043ae(500);
    _DAT_ram_30079dec = iVar1 + _DAT_ram_30079dec;
  }
  return;
}


