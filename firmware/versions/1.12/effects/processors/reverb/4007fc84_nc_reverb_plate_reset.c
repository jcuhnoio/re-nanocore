/* NanoCore 1.12: nc_reverb_plate_reset at 0x4007fc84.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_9e07437f15da02d761c42220b51f54e67e2f41c9190082c94c657d8250224a3a
 * Source: analysis/rea-1.12-effects/results/03599-export-0x4007fc84.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_plate_reset(int param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  puVar7 = (ushort *)(param_1 + 0x48);
  puVar6 = (ushort *)(param_1 + 0x2048);
  do {
    if (*puVar6 != 0) {
      uVar4 = (uint)*puVar6 * 4;
      puVar3 = puVar7;
      if (0x80 < uVar4) {
        uVar9 = uVar4 - 0x81 >> 7;
        do {
          iVar1 = memset(puVar3,0,0x80);
          fence();
          puVar3 = (ushort *)(iVar1 + 0x80);
        } while (puVar3 != puVar7 + (uVar9 + 1) * 0x40);
        uVar4 = (uVar4 - 0x80) + uVar9 * -0x80;
        puVar3 = puVar7 + (uVar9 + 1) * 0x40;
      }
      memset(puVar3,0,uVar4);
      fence();
    }
    puVar6[4] = 0;
    puVar7 = puVar7 + 0x400;
    puVar6 = puVar6 + 1;
  } while (puVar7 != (ushort *)(param_1 + 0x2048));
  puVar7 = (ushort *)(param_1 + 0x2058);
  puVar6 = (ushort *)(param_1 + 0x5058);
  do {
    if (*puVar6 != 0) {
      uVar4 = (uint)*puVar6 * 4;
      puVar3 = puVar7;
      if (0x80 < uVar4) {
        uVar9 = uVar4 - 0x81 >> 7;
        do {
          iVar1 = memset(puVar3,0,0x80);
          fence();
          puVar3 = (ushort *)(iVar1 + 0x80);
        } while (puVar3 != puVar7 + (uVar9 + 1) * 0x40);
        uVar4 = (uVar4 - 0x80) + uVar9 * -0x80;
        puVar3 = puVar7 + (uVar9 + 1) * 0x40;
      }
      memset(puVar3,0,uVar4);
      fence();
    }
    puVar6[3] = 0;
    puVar7 = puVar7 + 0x800;
    puVar6 = puVar6 + 1;
  } while (puVar7 != (ushort *)(param_1 + 0x5058));
  puVar8 = (undefined4 *)(param_1 + 0x30ca8);
  iVar10 = param_1 + 0x5064;
  iVar1 = 0;
  while (*(ushort *)(param_1 + 0x30c64) != 0) {
    uVar4 = (uint)*(ushort *)(param_1 + 0x30c64) * 4;
    iVar5 = iVar10;
    if (0x80 < uVar4) {
      uVar9 = uVar4 - 0x81 >> 7;
      iVar5 = (uVar9 + 1) * 0x80 + iVar10;
      iVar2 = iVar10;
      do {
        iVar2 = memset(iVar2,0,0x80);
        fence();
        iVar2 = iVar2 + 0x80;
      } while (iVar2 != iVar5);
      uVar4 = (uVar4 - 0x80) + uVar9 * -0x80;
    }
    memset(iVar5,0,uVar4);
    fence();
    *puVar8 = 0;
    iVar1 = iVar1 + 1;
    if (iVar1 == 8) goto LAB_ram_4007fde2;
    puVar8 = puVar8 + 1;
    iVar10 = iVar10 + 0x5780;
  }
  *puVar8 = 0;
  if (iVar1 + 1 != 8) {
    memset(param_1 + (iVar1 + 0xc32b) * 4,0,(8 - (iVar1 + 1)) * 4);
  }
LAB_ram_4007fde2:
  *(undefined2 *)(param_1 + 0x30c66) = 0;
  iVar1 = param_1 + 0x30db8;
  do {
    iVar1 = memset(iVar1,0,0x80);
    fence();
    iVar1 = iVar1 + 0x80;
  } while (iVar1 != param_1 + 0x34d38);
  memset(param_1 + 0x34d38,0,0x80);
  fence();
  *(undefined2 *)(param_1 + 0x34db8) = 0;
  *(undefined2 *)(param_1 + 0x30daa) = 0;
  return;
}

