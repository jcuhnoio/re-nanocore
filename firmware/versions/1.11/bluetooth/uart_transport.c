/* NanoCore 1.11 analysis module: bluetooth/uart_transport.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40029d8e.
 * REA evidence: ev_37da18bde8581ef5115b7df0bdf1e8a0a10c3ba2051681a06d4a1d0c1275f1e8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint nc_radio_uart_write(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  
  uVar1 = 0;
  if (((_DAT_ram_30079554 != 0) && (param_1 != 0)) && (param_2 != 0)) {
    if (_DAT_ram_30079564 != 0) {
      FUN_ram_400049c6(_DAT_ram_30079564,0xffffffff);
    }
    cVar3 = '\0';
    uVar1 = 0;
    do {
      iVar2 = FUN_ram_400045ce(_DAT_ram_30079554,0,param_1 + uVar1,param_2 - uVar1);
      if (iVar2 == 0) {
        cVar3 = cVar3 + '\x01';
        FUN_ram_400065c6(1);
      }
      else {
        uVar1 = uVar1 + iVar2;
      }
    } while ((uVar1 < param_2) && (cVar3 != '\x05'));
    if (_DAT_ram_30079564 != 0) {
      FUN_ram_40004ab8();
    }
    _DAT_ram_300794d8 = _DAT_ram_300794d8 + uVar1;
    if (param_2 != uVar1) {
      _DAT_ram_300794ec = _DAT_ram_300794ec + 1;
    }
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40029e36.
 * REA evidence: ev_364d82b15f960a0033edfe8ce0c2b15530a0f39c7451d4d3e7fa93635ea536ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void nc_radio_send_control_frame(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined1 auStack_118 [276];
  
  if (0x100 < param_2) {
    param_2 = 0x100;
  }
  iVar1 = FUN_ram_4002b4b0(auStack_118,0x108,3,0,param_1,param_2 & 0xffff);
  if (iVar1 != 0) {
    nc_radio_uart_write(auStack_118,iVar1);
  }
  return;
}


/* NanoCore 1.11, address 0x4002a45c.
 * REA evidence: ev_d0eea1cd08bfab86128a4b61452ed6a39811524085d32bbf44c44efc8e9670f1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 nc_radio_uart5_init(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (_DAT_ram_3006f398 == 0) {
    _DAT_ram_3006f394 = FUN_ram_40004352(1000);
    if (_DAT_ram_3006f394 == 0) {
      _DAT_ram_3006f394 = 1;
    }
    if ((((_DAT_ram_30079560 != 0) ||
         (_DAT_ram_30079560 = FUN_ram_400047d8(s_u5_rx_ram_40096d78,0,0), _DAT_ram_30079560 != 0))
        && ((_DAT_ram_30079564 != 0 ||
            (_DAT_ram_30079564 = FUN_ram_4000497c(s_u5_tx_ram_40096d80,1), _DAT_ram_30079564 != 0)))
        ) && ((_DAT_ram_3007955c != 0 ||
              (_DAT_ram_3007955c = FUN_ram_4000497c(s_u5_rxm_ram_40096d94,1), _DAT_ram_3007955c != 0
              )))) {
      FUN_ram_4002b21c(0x3006f6b0);
      iVar2 = memset(&DAT_ram_300794d4,0,0x80);
      *(undefined4 *)(iVar2 + 0x70) = 0xffffffff;
      DAT_ram_30049e41 = 2;
      DAT_ram_30049e40 = 2;
      DAT_ram_300794d0 = 0;
      _DAT_ram_3006f390 = 0;
      _DAT_ram_300794cc = 0;
      _DAT_ram_3007808c = 0;
      FUN_ram_4002b53e(0x30078094,FUN_ram_4002a26c,0);
      iVar2 = FUN_ram_400064b8(s_uart5_rx_ram_40096d88,FUN_ram_4002b19c,0,0x2000,0x12,10);
      if (iVar2 != 0) {
        FUN_ram_40006632();
        _DAT_ram_3006f398 = 1;
        return 0;
      }
      FUN_ram_40004806(_DAT_ram_30079560);
      _DAT_ram_30079560 = 0;
      FUN_ram_400049aa(_DAT_ram_3007955c);
      _DAT_ram_3007955c = 0;
    }
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4002ab6c.
 * REA evidence: ev_8d79ffdebe9ef37e6fc37af90707ed59eec53896a6c87fbf49f3cc7354e567e0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_radio_send_control_if_ready(void)

{
  if (_DAT_ram_30079554 != 0) {
    nc_radio_send_control_frame();
    return;
  }
  return;
}


