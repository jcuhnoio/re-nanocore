/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40083000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40083e34.
 * REA evidence: ev_36d4646432a53ff7c7cfb7dc05fd8d8f446d063768f1021b64d14aad62a2ca1e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40083e34(ulonglong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  if (param_2 != (ulonglong *)0x0) {
    puVar8 = param_2;
    do {
      iVar7 = memset(puVar8,0,0x80);
      fence();
      puVar8 = (ulonglong *)(iVar7 + 0x80);
    } while (param_2 + 0x9300 != puVar8);
    memset(param_2 + 0x9300,0,0x2c);
    uVar6 = DAT_ram_400a0fd0;
    uVar5 = DAT_ram_4009f9e4;
    uVar4 = DAT_ram_4009f9d4;
    uVar3 = DAT_ram_4009a330;
    uVar2 = DAT_ram_40096780;
    uVar1 = DAT_ram_4009672c;
    fence();
    uVar9 = (ulonglong)DAT_ram_40099f9c;
    uVar10 = (ulonglong)DAT_ram_40099f38;
    uVar11 = (ulonglong)DAT_ram_4009f9f4;
    uVar12 = (ulonglong)DAT_ram_4009f9f8;
    uVar13 = (ulonglong)DAT_ram_4009f31c;
    uVar14 = (ulonglong)DAT_ram_4009a378;
    *param_2 = param_1 & 0xffffffff;
    *(undefined1 *)(param_2 + 3) = 1;
    *(undefined2 *)((int)param_2 + 0x24) = 0x100;
    *(undefined **)((int)param_2 + 0x44) = &sedeleg;
    *(undefined4 *)((int)param_2 + 4) = uVar6;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined4 *)((int)param_2 + 0xc) = uVar4;
    *(undefined4 *)(param_2 + 2) = uVar2;
    *(undefined4 *)((int)param_2 + 0x14) = uVar5;
    *(undefined4 *)((int)param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 5) = uVar3;
    *(ulonglong *)((int)param_2 + 0x2c) = uVar9;
    param_2[6] = uVar10;
    *(ulonglong *)((int)param_2 + 0x34) = uVar11;
    param_2[7] = uVar12;
    *(ulonglong *)((int)param_2 + 0x3c) = uVar13;
    param_2[8] = uVar14;
    FUN_ram_4008281c(param_2);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40083f32.
 * REA evidence: ev_fe82e4eb79aa90e6d8e792398d525a711f5f636849be5ad4a0aab7f1ed44ebca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40083f32(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    if ((*(char *)(param_1 + 0x18) != *(char *)(param_2 + 5)) ||
       (*(int *)(param_1 + 0x20) != param_2[7])) {
      *(undefined1 *)(param_1 + 0x45) = 1;
    }
    puVar4 = (undefined4 *)(param_1 + 4);
    puVar5 = param_2 + 0x10;
    do {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *puVar4 = *param_2;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      param_2 = param_2 + 4;
      puVar4 = puVar4 + 4;
    } while (param_2 != puVar5);
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  return;
}


/* NanoCore 1.12, address 0x40083f80.
 * REA evidence: ev_868043b3eeee622cc0941011ccb96eff1cfea08e6eadf00dc554f7f89c23a4e3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40083f80(int param_1)

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


