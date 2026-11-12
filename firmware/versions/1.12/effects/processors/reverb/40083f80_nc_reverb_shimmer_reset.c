/* NanoCore 1.12: nc_reverb_shimmer_reset at 0x40083f80.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_1bcc563697994928cdc92a1c3c7afe71bd6dcbe3956e25356c6c5e6326881611
 * Source: analysis/rea-1.12-effects/results/03612-export-0x40083f80.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_shimmer_reset(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  puVar7 = (ushort *)(param_1 + 0x5c);
  puVar6 = (ushort *)(param_1 + 0x205c);
  do {
    if (*puVar6 != 0) {
      uVar5 = (uint)*puVar6 * 4;
      puVar4 = puVar7;
      if (0x80 < uVar5) {
        uVar9 = uVar5 - 0x81 >> 7;
        do {
          iVar2 = memset(puVar4,0,0x80);
          fence();
          puVar4 = (ushort *)(iVar2 + 0x80);
        } while (puVar4 != puVar7 + (uVar9 + 1) * 0x40);
        uVar5 = (uVar5 - 0x80) + uVar9 * -0x80;
        puVar4 = puVar7 + (uVar9 + 1) * 0x40;
      }
      memset(puVar4,0,uVar5);
      fence();
    }
    puVar6[4] = 0;
    puVar7 = puVar7 + 0x400;
    puVar6 = puVar6 + 1;
  } while (puVar7 != (ushort *)(param_1 + 0x205c));
  puVar7 = (ushort *)(param_1 + 0x206c);
  puVar6 = (ushort *)(param_1 + 0x506c);
  do {
    if (*puVar6 != 0) {
      uVar5 = (uint)*puVar6 * 4;
      puVar4 = puVar7;
      if (0x80 < uVar5) {
        uVar9 = uVar5 - 0x81 >> 7;
        do {
          iVar2 = memset(puVar4,0,0x80);
          fence();
          puVar4 = (ushort *)(iVar2 + 0x80);
        } while (puVar4 != puVar7 + (uVar9 + 1) * 0x40);
        uVar5 = (uVar5 - 0x80) + uVar9 * -0x80;
        puVar4 = puVar7 + (uVar9 + 1) * 0x40;
      }
      memset(puVar4,0,uVar5);
      fence();
    }
    puVar6[3] = 0;
    puVar7 = puVar7 + 0x800;
    puVar6 = puVar6 + 1;
  } while (puVar7 != (ushort *)(param_1 + 0x506c));
  puVar7 = (ushort *)(param_1 + 0x5078);
  puVar6 = (ushort *)(param_1 + 0xd078);
  do {
    if (*puVar6 != 0) {
      uVar5 = (uint)*puVar6 * 4;
      puVar4 = puVar7;
      if (0x80 < uVar5) {
        uVar9 = uVar5 - 0x81 >> 7;
        do {
          iVar2 = memset(puVar4,0,0x80);
          fence();
          puVar4 = (ushort *)(iVar2 + 0x80);
        } while (puVar4 != puVar7 + (uVar9 + 1) * 0x40);
        uVar5 = (uVar5 - 0x80) + uVar9 * -0x80;
        puVar4 = puVar7 + (uVar9 + 1) * 0x40;
      }
      memset(puVar4,0,uVar5);
      fence();
    }
    puVar6[4] = 0;
    puVar7 = puVar7 + 0x1000;
    puVar6 = puVar6 + 1;
  } while (puVar7 != (ushort *)(param_1 + 0xd078));
  puVar8 = (undefined4 *)(param_1 + 0x38ccc);
  iVar10 = param_1 + 0xd088;
  iVar2 = 0;
  while (*(ushort *)(param_1 + 0x38c88) != 0) {
    uVar5 = (uint)*(ushort *)(param_1 + 0x38c88) * 4;
    iVar1 = iVar10;
    if (0x80 < uVar5) {
      uVar9 = uVar5 - 0x81 >> 7;
      iVar1 = (uVar9 + 1) * 0x80 + iVar10;
      iVar3 = iVar10;
      do {
        iVar3 = memset(iVar3,0,0x80);
        fence();
        iVar3 = iVar3 + 0x80;
      } while (iVar3 != iVar1);
      uVar5 = (uVar5 - 0x80) + uVar9 * -0x80;
    }
    memset(iVar1,0,uVar5);
    fence();
    *puVar8 = 0;
    iVar2 = iVar2 + 1;
    if (iVar2 == 8) goto LAB_ram_40084154;
    puVar8 = puVar8 + 1;
    iVar10 = iVar10 + 0x5780;
  }
  *puVar8 = 0;
  if (iVar2 + 1 != 8) {
    memset(param_1 + (iVar2 + 0xe334) * 4,0,(8 - (iVar2 + 1)) * 4);
  }
LAB_ram_40084154:
  *(undefined2 *)(param_1 + 0x38c8a) = 0;
  iVar2 = param_1 + 0x38de4;
  do {
    iVar2 = memset(iVar2,0,0x80);
    fence();
    iVar2 = iVar2 + 0x80;
  } while (iVar2 != param_1 + 0x3eb64);
  memset(param_1 + 0x3eb64,0,0x40);
  fence();
  *(undefined2 *)(param_1 + 0x3eba4) = 0;
  if (*(ushort *)(param_1 + 0x487e8) == 0) {
    memset(param_1 + 0x3eba8,0,40000);
  }
  else {
    memset(param_1 + 0x3eba8,0,(uint)*(ushort *)(param_1 + 0x487e8) << 2);
  }
  *(undefined2 *)(param_1 + 0x487ea) = 0;
  *(undefined4 *)(param_1 + 0x487f0) = 0;
  *(undefined4 *)(param_1 + 0x48808) = 0;
  *(undefined4 *)(param_1 + 0x4880c) = 0;
  *(undefined4 *)(param_1 + 0x48814) = 0;
  *(undefined4 *)(param_1 + 0x4881c) = 0;
  *(undefined4 *)(param_1 + 0x48820) = 0;
  *(undefined2 *)(param_1 + 0x38dce) = 0;
  return;
}

