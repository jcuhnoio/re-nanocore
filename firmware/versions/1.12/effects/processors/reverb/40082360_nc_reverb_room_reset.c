/* NanoCore 1.12: nc_reverb_room_reset at 0x40082360.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_dab1ac45bf01f819b9d6623aa45fd45d7ec7816faa94a65a0cc31cb519aa9e7b
 * Source: analysis/rea-1.12-effects/results/03604-export-0x40082360.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_room_reset(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1 == 0) {
    return;
  }
  iVar2 = param_1 + 0x34a8;
  do {
    iVar2 = memset(iVar2,0,0x80);
    fence();
    iVar2 = iVar2 + 0x80;
  } while (iVar2 != param_1 + 0xcaa8);
  *(undefined1 *)(param_1 + 0xcaa8) = 0;
  *(undefined1 *)(param_1 + 0xcaa9) = 0;
  *(undefined1 *)(param_1 + 0xcaaa) = 0;
  *(undefined1 *)(param_1 + 0xcaab) = 0;
  fence();
  *(undefined2 *)(param_1 + 0x329c) = 0;
  *(undefined2 *)(param_1 + 0x32a0) = *(undefined2 *)(param_1 + 0x329e);
  *(undefined2 *)(param_1 + 0x32a2) = 0;
  *(undefined2 *)(param_1 + 0x32a4) = 0;
  puVar4 = (ushort *)(param_1 + 0xcaac);
  iVar2 = param_1 + 0xcacc;
  do {
    if (*puVar4 != 0) {
      uVar6 = (uint)*puVar4 * 4;
      iVar3 = iVar2;
      if (0x80 < uVar6) {
        uVar7 = uVar6 - 0x81 >> 7;
        iVar3 = (uVar7 + 1) * 0x80 + iVar2;
        iVar1 = iVar2;
        do {
          iVar1 = memset(iVar1,0,0x80);
          fence();
          iVar1 = iVar1 + 0x80;
        } while (iVar1 != iVar3);
        uVar6 = (uVar6 - 0x80) + uVar7 * -0x80;
      }
      memset(iVar3,0,uVar6);
      fence();
    }
    puVar4[4] = 0;
    iVar2 = iVar2 + 0xc80;
    puVar4 = puVar4 + 1;
  } while (iVar2 != param_1 + 0xfccc);
  puVar4 = (ushort *)(param_1 + 0xfccc);
  iVar2 = param_1 + 0xfcec;
  do {
    if (*puVar4 != 0) {
      uVar6 = (uint)*puVar4 * 4;
      iVar3 = iVar2;
      if (0x80 < uVar6) {
        uVar7 = uVar6 - 0x81 >> 7;
        iVar3 = (uVar7 + 1) * 0x80 + iVar2;
        iVar1 = iVar2;
        do {
          iVar1 = memset(iVar1,0,0x80);
          fence();
          iVar1 = iVar1 + 0x80;
        } while (iVar1 != iVar3);
        uVar6 = (uVar6 - 0x80) + uVar7 * -0x80;
      }
      memset(iVar3,0,uVar6);
      fence();
    }
    puVar4[4] = 0;
    iVar2 = iVar2 + 0xc80;
    puVar4 = puVar4 + 1;
  } while (iVar2 != param_1 + 0x12eec);
  iVar2 = param_1 + 0x32a8;
  do {
    iVar2 = memset(iVar2,0,0x80);
    fence();
    iVar2 = iVar2 + 0x80;
  } while (iVar2 != param_1 + 0x3428);
  memset(param_1 + 0x3428,0,0x80);
  fence();
  puVar4 = (ushort *)(param_1 + 0x7c);
  iVar2 = param_1 + 0x9c;
  do {
    if (*puVar4 != 0) {
      uVar6 = (uint)*puVar4 * 4;
      iVar3 = iVar2;
      if (0x80 < uVar6) {
        uVar7 = uVar6 - 0x81 >> 7;
        iVar3 = (uVar7 + 1) * 0x80 + iVar2;
        iVar1 = iVar2;
        do {
          iVar1 = memset(iVar1,0,0x80);
          fence();
          iVar1 = iVar1 + 0x80;
        } while (iVar1 != iVar3);
        uVar6 = (uVar6 - 0x80) + uVar7 * -0x80;
      }
      memset(iVar3,0,uVar6);
      fence();
    }
    puVar4[4] = 0;
    iVar2 = iVar2 + 0xc80;
    puVar4 = puVar4 + 1;
  } while (iVar2 != param_1 + 0x329c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  iVar2 = param_1 + 0x18018;
  puVar5 = (undefined4 *)(param_1 + 0x13044);
  do {
    iVar3 = iVar2 + -0x4f80;
    do {
      iVar3 = memset(iVar3,0,0x80);
      fence();
      iVar3 = iVar3 + 0x80;
    } while (iVar3 != iVar2);
    iVar2 = memset(iVar3,0,0x80);
    fence();
    *puVar5 = 0;
    puVar5[8] = 0;
    iVar2 = iVar2 + 0x5000;
    puVar5 = puVar5 + 1;
  } while (iVar2 != param_1 + 0x40018);
  *(undefined2 *)(param_1 + 0x12f70) = 0;
  puVar4 = (ushort *)(param_1 + 0x3b098);
  iVar2 = param_1 + 0x3b0ac;
  do {
    if (*puVar4 != 0) {
      uVar6 = (uint)*puVar4 * 4;
      iVar3 = iVar2;
      if (0x80 < uVar6) {
        uVar7 = uVar6 - 0x81 >> 7;
        iVar3 = (uVar7 + 1) * 0x80 + iVar2;
        iVar1 = iVar2;
        do {
          iVar1 = memset(iVar1,0,0x80);
          fence();
          iVar1 = iVar1 + 0x80;
        } while (iVar3 != iVar1);
        uVar6 = (uVar6 - 0x80) + uVar7 * -0x80;
      }
      memset(iVar3,0,uVar6);
      fence();
    }
    puVar4[4] = 0;
    iVar2 = iVar2 + 0xc80;
    puVar4 = puVar4 + 1;
  } while (param_1 + 0x3e2ac != iVar2);
  iVar2 = param_1 + 0x3e2ac;
  do {
    iVar2 = memset(iVar2,0,0x80);
    fence();
    iVar2 = iVar2 + 0x80;
  } while (iVar2 != param_1 + 0x478ac);
  *(undefined1 *)(param_1 + 0x478ac) = 0;
  *(undefined1 *)(param_1 + 0x478ad) = 0;
  *(undefined1 *)(param_1 + 0x478ae) = 0;
  *(undefined1 *)(param_1 + 0x478af) = 0;
  fence();
  *(undefined2 *)(param_1 + 0x13084) = 0;
  *(undefined2 *)(param_1 + 0x1308a) = 0;
  *(undefined2 *)(param_1 + 0x13088) = *(undefined2 *)(param_1 + 0x13086);
  *(undefined2 *)(param_1 + 0x1308c) = 0;
  *(undefined2 *)(param_1 + 0x13090) = 0;
  return;
}

