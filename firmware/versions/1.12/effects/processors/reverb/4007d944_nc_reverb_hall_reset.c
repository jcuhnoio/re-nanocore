/* NanoCore 1.12: nc_reverb_hall_reset at 0x4007d944.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_03c355d216e5fc087d0b20f9a95ac912f0b2267c9c72056e8e13e5a6a95631bf
 * Source: analysis/rea-1.12-effects/results/03594-export-0x4007d944.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_hall_reset(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  ushort *puVar8;
  uint uVar9;
  
  if (param_1 == 0) {
    return;
  }
  puVar8 = (ushort *)(param_1 + 0x3e);
  iVar6 = param_1 + 0x1a70;
  do {
    if (*puVar8 != 0) {
      uVar3 = (uint)*puVar8 * 4;
      iVar2 = iVar6;
      if (0x80 < uVar3) {
        uVar9 = uVar3 - 0x81 >> 7;
        iVar2 = (uVar9 + 1) * 0x80 + iVar6;
        iVar5 = iVar6;
        do {
          iVar5 = memset(iVar5,0,0x80);
          fence();
          iVar5 = iVar5 + 0x80;
        } while (iVar5 != iVar2);
        uVar3 = (uVar3 - 0x80) + uVar9 * -0x80;
      }
      memset(iVar2,0,uVar3);
      fence();
    }
    puVar8[4] = 0;
    iVar6 = iVar6 + 0x800;
    puVar8 = puVar8 + 1;
  } while (iVar6 != param_1 + 0x3a70);
  puVar8 = (ushort *)(param_1 + 0x32);
  iVar6 = param_1 + 0x270;
  do {
    if (*puVar8 != 0) {
      uVar3 = (uint)*puVar8 * 4;
      iVar2 = iVar6;
      if (0x80 < uVar3) {
        uVar9 = uVar3 - 0x81 >> 7;
        iVar2 = (uVar9 + 1) * 0x80 + iVar6;
        iVar5 = iVar6;
        do {
          iVar5 = memset(iVar5,0,0x80);
          fence();
          iVar5 = iVar5 + 0x80;
        } while (iVar5 != iVar2);
        uVar3 = (uVar3 - 0x80) + uVar9 * -0x80;
      }
      memset(iVar2,0,uVar3);
      fence();
    }
    puVar8[3] = 0;
    iVar6 = iVar6 + 0x800;
    puVar8 = puVar8 + 1;
  } while (iVar6 != param_1 + 0x1a70);
  psVar7 = (short *)(param_1 + 0x4e);
  puVar4 = (undefined4 *)(param_1 + 0xb0);
  iVar6 = param_1 + 0x6df0;
  do {
    while (*psVar7 == 0) {
      *puVar4 = 0;
      puVar4[0x10] = 0;
      puVar4 = puVar4 + 1;
      psVar7 = psVar7 + 1;
      iVar6 = iVar6 + 0x3390;
      if ((undefined4 *)(param_1 + 0xf0) == puVar4) goto LAB_ram_4007dac4;
    }
    iVar2 = iVar6 + -0x3380;
    do {
      iVar2 = memset(iVar2,0,0x80);
      fence();
      iVar2 = iVar2 + 0x80;
    } while (iVar2 != iVar6);
    memset(iVar6,0,0x10);
    fence();
    *puVar4 = 0;
    puVar4[0x10] = 0;
    puVar4 = puVar4 + 1;
    psVar7 = psVar7 + 1;
    iVar6 = iVar6 + 0x3390;
  } while ((undefined4 *)(param_1 + 0xf0) != puVar4);
LAB_ram_4007dac4:
  *(undefined2 *)(param_1 + 0x6e) = 0;
  iVar6 = param_1 + 0x37370;
  do {
    iVar6 = memset(iVar6,0,0x80);
    fence();
    iVar6 = iVar6 + 0x80;
  } while (param_1 + 0x37ff0 != iVar6);
  *(undefined1 *)(param_1 + 0x37ff0) = 0;
  *(undefined1 *)(param_1 + 0x37ff1) = 0;
  *(undefined1 *)(param_1 + 0x37ff2) = 0;
  *(undefined1 *)(param_1 + 0x37ff3) = 0;
  fence();
  *(undefined2 *)(param_1 + 0x130) = 0;
  iVar6 = param_1 + 0x37ff4;
  do {
    iVar6 = memset(iVar6,0,0x80);
    fence();
    iVar6 = iVar6 + 0x80;
  } while (iVar6 != param_1 + 0x41574);
  memset(param_1 + 0x41574,0,0x80);
  uVar1 = DAT_ram_4009672c;
  fence();
  *(undefined2 *)(param_1 + 0x136) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x268) = uVar1;
  return;
}

