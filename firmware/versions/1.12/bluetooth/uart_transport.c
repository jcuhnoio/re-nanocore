/* NanoCore 1.12 analysis module: bluetooth/uart_transport.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4002aa7e.
 * REA evidence: ev_34b49a7f7c94d45d4fe1faa3e21858022ef3c4343bc8936f7cbf4528a8dd3a5a
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
  if (((_DAT_ram_30078588 != 0) && (param_1 != 0)) && (param_2 != 0)) {
    if (_DAT_ram_30078598 != 0) {
      FUN_ram_40004a22(_DAT_ram_30078598,0xffffffff);
    }
    cVar3 = '\0';
    uVar1 = 0;
    do {
      iVar2 = FUN_ram_4000462a(_DAT_ram_30078588,0,param_1 + uVar1,param_2 - uVar1);
      if (iVar2 == 0) {
        cVar3 = cVar3 + '\x01';
        FUN_ram_400064e4(1);
      }
      else {
        uVar1 = uVar1 + iVar2;
      }
    } while ((uVar1 < param_2) && (cVar3 != '\x05'));
    if (_DAT_ram_30078598 != 0) {
      FUN_ram_40004b14();
    }
    _DAT_ram_3007850c = _DAT_ram_3007850c + uVar1;
    if (param_2 != uVar1) {
      _DAT_ram_30078520 = _DAT_ram_30078520 + 1;
    }
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4002ab26.
 * REA evidence: ev_6589ce2815dc3ba0dece74cb0842f0346858ef1f72e2dc1dd38d80a6b9ed3fb7
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
  iVar1 = FUN_ram_4002c232(auStack_118,0x108,3,0,param_1,param_2 & 0xffff);
  if (iVar1 != 0) {
    nc_radio_uart_write(auStack_118,iVar1);
  }
  return;
}


/* NanoCore 1.12, address 0x4002b14c.
 * REA evidence: ev_ee6e46a7f20d0f2107217dc7fb98da3623ebc359acac9fa37224298f89576364
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 nc_radio_uart5_init(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (_DAT_ram_3006e3cc == 0) {
    _DAT_ram_3006e3c8 = FUN_ram_400043ae(1000);
    if (_DAT_ram_3006e3c8 == 0) {
      _DAT_ram_3006e3c8 = 1;
    }
    if ((((_DAT_ram_30078594 != 0) ||
         (_DAT_ram_30078594 = FUN_ram_40004834(s_u5_rx_ram_4009c020,0,0), _DAT_ram_30078594 != 0))
        && ((_DAT_ram_30078598 != 0 ||
            (_DAT_ram_30078598 = FUN_ram_400049d8(s_u5_tx_ram_4009c028,1), _DAT_ram_30078598 != 0)))
        ) && ((_DAT_ram_30078590 != 0 ||
              (_DAT_ram_30078590 = FUN_ram_400049d8(s_u5_rxm_ram_4009c03c,1), _DAT_ram_30078590 != 0
              )))) {
      FUN_ram_4002bf9e(0x3006e6e4);
      iVar2 = memset(&DAT_ram_30078508,0,0x80);
      *(undefined4 *)(iVar2 + 0x70) = 0xffffffff;
      DAT_ram_3004ad85 = 2;
      DAT_ram_3004ad84 = 2;
      DAT_ram_30078504 = 0;
      _DAT_ram_3006e3c4 = 0;
      _DAT_ram_30078500 = 0;
      _DAT_ram_300770c0 = 0;
      FUN_ram_4002c2c0(0x300770c8,FUN_ram_4002af5c,0);
      iVar2 = FUN_ram_400063d6(s_uart5_rx_ram_4009c030,FUN_ram_4002bf1e,0,0x2000,0x12,10);
      if (iVar2 != 0) {
        FUN_ram_40006550();
        _DAT_ram_3006e3cc = 1;
        return 0;
      }
      FUN_ram_40004862(_DAT_ram_30078594);
      _DAT_ram_30078594 = 0;
      FUN_ram_40004a06(_DAT_ram_30078590);
      _DAT_ram_30078590 = 0;
    }
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4002b85c.
 * REA evidence: ev_ee1544cd43673a5d3a6a1c6bd903d2ca69d3675ffe3fe72d90aab61d5627a294
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_radio_send_control_if_ready(void)

{
  if (_DAT_ram_30078588 != 0) {
    nc_radio_send_control_frame();
    return;
  }
  return;
}


