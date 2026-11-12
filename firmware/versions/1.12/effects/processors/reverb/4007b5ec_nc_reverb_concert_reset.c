/* NanoCore 1.12: nc_reverb_concert_reset at 0x4007b5ec.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_d3c006402f4d28c8a4b50465c1df77dd1db52de13413e579187552afde24ae74
 * Source: analysis/rea-1.12-effects/results/03589-export-0x4007b5ec.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_concert_reset(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar2 = param_1 + 0x318;
    do {
      iVar2 = memset(iVar2,0,0x80);
      fence();
      iVar2 = iVar2 + 0x80;
    } while (iVar2 != param_1 + 0x9918);
    *(undefined1 *)(param_1 + 0x9918) = 0;
    *(undefined1 *)(param_1 + 0x9919) = 0;
    *(undefined1 *)(param_1 + 0x991a) = 0;
    *(undefined1 *)(param_1 + 0x991b) = 0;
    fence();
    *(undefined4 *)(param_1 + 0x24) = 0;
    iVar2 = param_1 + 0x991c;
    do {
      iVar2 = memset(iVar2,0,0x80);
      fence();
      iVar2 = iVar2 + 0x80;
    } while (iVar2 != param_1 + 0xc59c);
    memset(param_1 + 0xc59c,0,0x14);
    fence();
    *(undefined4 *)(param_1 + 0x34) = 0;
    iVar2 = param_1 + 0xd1b0;
    do {
      iVar3 = iVar2 + -0xc00;
      do {
        iVar3 = memset(iVar3,0,0x80);
        fence();
        iVar3 = iVar3 + 0x80;
      } while (iVar3 != iVar2);
      iVar2 = memset(iVar3,0,0x80);
      fence();
      *(undefined4 *)(iVar2 + 0x84) = 0;
      iVar2 = iVar2 + 0xc8c;
    } while (iVar2 != param_1 + 0x103e0);
    iVar2 = param_1 + 0x132e0;
    puVar1 = (undefined4 *)(param_1 + 300);
    do {
      iVar3 = iVar2 + -0x3b00;
      do {
        iVar3 = memset(iVar3,0,0x80);
        fence();
        iVar3 = iVar3 + 0x80;
      } while (iVar3 != iVar2);
      iVar2 = memset(iVar3,0,0x60);
      fence();
      *puVar1 = 0;
      puVar1[0x42] = 0;
      puVar1[0x4a] = 0;
      iVar2 = iVar2 + 0x3b60;
      puVar1 = puVar1 + 1;
    } while (param_1 + 0x30de0 != iVar2);
    *(undefined4 *)(param_1 + 0x280) = 0;
    *(undefined1 *)(param_1 + 0x151) = 0;
    memset(param_1 + 0x154,0,0x20);
    fence();
    *(undefined4 *)(param_1 + 0x298) = 0;
    *(undefined4 *)(param_1 + 0x29c) = 0;
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x2a4) = 0;
    *(undefined4 *)(param_1 + 0x2c0) = 0;
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    *(undefined4 *)(param_1 + 0x2cc) = 0;
    *(undefined4 *)(param_1 + 0x2e4) = 0;
    *(undefined4 *)(param_1 + 0x2e8) = 0;
    *(undefined4 *)(param_1 + 0x2ec) = 0;
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    *(undefined4 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x30c) = 0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    *(undefined4 *)(param_1 + 0x314) = 0;
    return;
  }
  return;
}

