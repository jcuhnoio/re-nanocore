/* NanoCore 1.12: nc_reverb_cloud_reset at 0x4005dde4.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_d61975cd9fa073e48f809d39f9f7958fc2a275934cc96c48d2c1ba2b35c60afe
 * Source: analysis/rea-1.12-effects/results/03466-export-0x4005dde4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_cloud_reset(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (param_1 == 0) {
    return;
  }
  iVar3 = param_1 + 0x1c;
  do {
    iVar3 = memset(iVar3,0,0x80);
    fence();
    iVar3 = iVar3 + 0x80;
  } while (iVar3 != param_1 + 0x109c);
  memset(param_1 + 0x109c,0,0x28);
  fence();
  *(undefined2 *)(param_1 + 0x1a) = 0;
  iVar3 = param_1 + 0x14c8;
  do {
    iVar3 = memset(iVar3,0,0x80);
    fence();
    iVar3 = iVar3 + 0x80;
  } while (iVar3 != param_1 + 0x11448);
  memset(param_1 + 0x11448,0,0x80);
  fence();
  *(undefined2 *)(param_1 + 0x10c6) = 0;
  piVar1 = (int *)(param_1 + 0x114c8);
  do {
    iVar3 = *piVar1;
    if ((iVar3 != 0) && (*(ushort *)(piVar1 + 1) != 0)) {
      uVar4 = (uint)*(ushort *)(piVar1 + 1) * 4;
      if (0x80 < uVar4) {
        uVar6 = uVar4 - 0x81 >> 7;
        iVar2 = (uVar6 + 1) * 0x80 + iVar3;
        do {
          iVar3 = memset(iVar3,0,0x80);
          fence();
          iVar3 = iVar3 + 0x80;
        } while (iVar3 != iVar2);
        uVar4 = (uVar4 - 0x80) + uVar6 * -0x80;
        iVar3 = iVar2;
      }
      memset(iVar3,0,uVar4);
      fence();
      *(undefined2 *)((int)piVar1 + 6) = 0;
    }
    piVar1 = piVar1 + 3;
  } while (piVar1 != (int *)(param_1 + 0x11528));
  piVar1 = (int *)(param_1 + 0x17d68);
  do {
    iVar3 = *piVar1;
    if ((iVar3 != 0) && (*(ushort *)(piVar1 + 1) != 0)) {
      uVar4 = (uint)*(ushort *)(piVar1 + 1) * 4;
      if (0x80 < uVar4) {
        uVar6 = uVar4 - 0x81 >> 7;
        iVar2 = (uVar6 + 1) * 0x80 + iVar3;
        do {
          iVar3 = memset(iVar3,0,0x80);
          fence();
          iVar3 = iVar3 + 0x80;
        } while (iVar3 != iVar2);
        uVar4 = (uVar4 - 0x80) + uVar6 * -0x80;
        iVar3 = iVar2;
      }
      memset(iVar3,0,uVar4);
      fence();
      *(undefined2 *)((int)piVar1 + 6) = 0;
    }
    piVar1 = piVar1 + 3;
  } while (piVar1 != (int *)(param_1 + 0x17d8c));
  piVar1 = (int *)(param_1 + 0x18fb0);
  puVar8 = (undefined4 *)(param_1 + 0x74744);
  puVar7 = (undefined4 *)(param_1 + 0x74784);
  puVar5 = (undefined4 *)(param_1 + 0x746bc);
  do {
    iVar3 = *piVar1;
    if ((iVar3 != 0) && (*(ushort *)(piVar1 + 1) != 0)) {
      uVar4 = (uint)*(ushort *)(piVar1 + 1) * 4;
      if (0x80 < uVar4) {
        uVar6 = uVar4 - 0x81 >> 7;
        iVar2 = (uVar6 + 1) * 0x80 + iVar3;
        do {
          iVar3 = memset(iVar3,0,0x80);
          fence();
          iVar3 = iVar3 + 0x80;
        } while (iVar3 != iVar2);
        uVar4 = (uVar4 - 0x80) + uVar6 * -0x80;
        iVar3 = iVar2;
      }
      memset(iVar3,0,uVar4);
      fence();
      *(undefined2 *)(piVar1 + 2) = 0;
      piVar1[3] = 0;
    }
    *puVar8 = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
    piVar1 = piVar1 + 4;
    puVar8 = puVar8 + 2;
    puVar7 = puVar7 + 3;
  } while (puVar5 != (undefined4 *)(param_1 + 0x746dc));
  *(undefined1 *)(param_1 + 0x746dc) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  return;
}

