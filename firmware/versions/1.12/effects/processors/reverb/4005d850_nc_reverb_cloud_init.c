/* NanoCore 1.12: nc_reverb_cloud_init at 0x4005d850.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_d4932f49dffd1cf18d585ddd93326016ca56286c4d5f0ddb227cb812959aec1f
 * Source: analysis/rea-1.12-effects/results/03462-export-0x4005d850.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_cloud_init(ulonglong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  float *pfVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if (param_1 == (ulonglong *)0x0) {
    return;
  }
  puVar10 = param_1;
  do {
    iVar9 = memset(puVar10,0,0x80);
    fence();
    puVar10 = (ulonglong *)(iVar9 + 0x80);
  } while (puVar10 != param_1 + 0xe900);
  memset(puVar10,0,0x24);
  fence();
  uVar16 = (ulonglong)(uint)DAT_ram_4009678c;
  uVar17 = (ulonglong)DAT_ram_40099f80;
  uVar18 = (ulonglong)DAT_ram_4009a644;
  uVar19 = (ulonglong)DAT_ram_4009f0bc;
  param_1[2] = (ulonglong)DAT_ram_4009f0c8;
  *(undefined **)((int)param_1 + 0x14) = &sedeleg;
  *param_1 = uVar16;
  *(ulonglong *)((int)param_1 + 4) = uVar17;
  param_1[1] = uVar18;
  *(ulonglong *)((int)param_1 + 0xc) = uVar19;
  nc_reverb_cloud_helper_4005c670(param_1);
  uVar14 = DAT_ram_4009f0cc;
  fVar4 = DAT_ram_4009678c;
  fVar3 = DAT_ram_4009672c;
  fVar22 = *(float *)((int)param_1 + 4);
  if (*(float *)((int)param_1 + 4) < DAT_ram_40099f88) {
    fVar22 = DAT_ram_40099f88;
  }
  fVar20 = *(float *)(param_1 + 1);
  if (fVar20 < 0.0) {
    fVar20 = (float)*(undefined8 *)((int)param_1 + 0xc);
    fVar2 = DAT_ram_4009f0a0;
  }
  else {
    fVar2 = DAT_ram_4009f0a4;
    if (fVar20 <= DAT_ram_4009672c) {
      fVar2 = fVar20 * DAT_ram_4009f0a8 + DAT_ram_4009f0a0;
    }
    fVar20 = (float)*(undefined8 *)((int)param_1 + 0xc);
  }
  if (fVar20 < 0.0) {
    fVar21 = 0.0;
  }
  else {
    fVar21 = DAT_ram_4009f0c4;
    if (fVar20 <= DAT_ram_4009672c) {
      fVar21 = fVar20 * DAT_ram_40099f44 * DAT_ram_4009f0ac * DAT_ram_4009678c;
    }
  }
  *(float *)(param_1 + 0xe8c2) = fVar21;
  *(undefined4 *)(param_1 + 0xe8c3) = uVar14;
  if (*(char *)((int)param_1 + 0x17) == '\0') {
    fVar21 = *(float *)((int)param_1 + 0x74614);
  }
  else {
    *(float *)((int)param_1 + 0x74614) = fVar21;
    *(undefined1 *)((int)param_1 + 0x17) = 0;
  }
  fVar15 = DAT_ram_4009f090;
  fVar20 = DAT_ram_40096764;
  fVar13 = (float)param_1[2];
  if ((float)param_1[2] < DAT_ram_4009a370) {
    fVar13 = DAT_ram_4009a370;
  }
  fVar1 = (fVar13 * *(float *)((int)param_1 + 0x7461c) * DAT_ram_4009f090 * DAT_ram_40096764) /
          fVar4;
  uVar14 = FUN_ram_400009d2(fVar1);
  *(undefined4 *)((int)param_1 + 0x7467c) = uVar14;
  uVar14 = FUN_ram_40000712(fVar1);
  *(undefined4 *)((int)param_1 + 0x7469c) = uVar14;
  *(float *)((int)param_1 + 0x746bc) = *(float *)((int)param_1 + 0x7463c) * fVar21;
  fVar1 = (fVar13 * *(float *)(param_1 + 0xe8c4) * fVar15 * fVar20) / fVar4;
  uVar14 = FUN_ram_400009d2(fVar1);
  *(undefined4 *)(param_1 + 0xe8d0) = uVar14;
  uVar14 = FUN_ram_40000712(fVar1);
  *(undefined4 *)(param_1 + 0xe8d4) = uVar14;
  *(float *)(param_1 + 0xe8d8) = *(float *)(param_1 + 0xe8c8) * fVar21;
  fVar1 = (fVar13 * *(float *)((int)param_1 + 0x74624) * fVar15 * fVar20) / fVar4;
  uVar14 = FUN_ram_400009d2(fVar1);
  *(undefined4 *)((int)param_1 + 0x74684) = uVar14;
  uVar14 = FUN_ram_40000712(fVar1);
  *(undefined4 *)((int)param_1 + 0x746a4) = uVar14;
  *(float *)((int)param_1 + 0x746c4) = *(float *)((int)param_1 + 0x74644) * fVar21;
  fVar1 = (fVar13 * *(float *)(param_1 + 0xe8c5) * fVar15 * fVar20) / fVar4;
  uVar14 = FUN_ram_400009d2(fVar1);
  *(undefined4 *)(param_1 + 0xe8d1) = uVar14;
  uVar14 = FUN_ram_40000712(fVar1);
  *(undefined4 *)(param_1 + 0xe8d5) = uVar14;
  *(float *)(param_1 + 0xe8d9) = *(float *)(param_1 + 0xe8c9) * fVar21;
  fVar1 = (fVar13 * *(float *)((int)param_1 + 0x7462c) * fVar15 * fVar20) / fVar4;
  uVar14 = FUN_ram_400009d2(fVar1);
  *(undefined4 *)((int)param_1 + 0x7468c) = uVar14;
  uVar14 = FUN_ram_40000712(fVar1);
  *(undefined4 *)((int)param_1 + 0x746ac) = uVar14;
  *(float *)((int)param_1 + 0x746cc) = *(float *)((int)param_1 + 0x7464c) * fVar21;
  fVar1 = (fVar13 * *(float *)(param_1 + 0xe8c6) * fVar15 * fVar20) / fVar4;
  uVar14 = FUN_ram_400009d2(fVar1);
  *(undefined4 *)(param_1 + 0xe8d2) = uVar14;
  uVar14 = FUN_ram_40000712(fVar1);
  *(undefined4 *)(param_1 + 0xe8d6) = uVar14;
  *(float *)(param_1 + 0xe8da) = *(float *)(param_1 + 0xe8ca) * fVar21;
  fVar1 = (fVar13 * *(float *)((int)param_1 + 0x74634) * fVar15 * fVar20) / fVar4;
  uVar14 = FUN_ram_400009d2(fVar1);
  *(undefined4 *)((int)param_1 + 0x74694) = uVar14;
  uVar14 = FUN_ram_40000712(fVar1);
  *(undefined4 *)((int)param_1 + 0x746b4) = uVar14;
  *(float *)((int)param_1 + 0x746d4) = *(float *)((int)param_1 + 0x74654) * fVar21;
  fVar20 = (fVar13 * *(float *)(param_1 + 0xe8c7) * fVar15 * fVar20) / fVar4;
  uVar14 = FUN_ram_400009d2(fVar20);
  *(undefined4 *)(param_1 + 0xe8d3) = uVar14;
  uVar14 = FUN_ram_40000712(fVar20);
  *(undefined4 *)(param_1 + 0xe8d7) = uVar14;
  *(undefined1 *)((int)param_1 + 0x746dc) = 0;
  *(float *)(param_1 + 0xe8db) = *(float *)(param_1 + 0xe8cb) * fVar21;
  fVar21 = DAT_ram_4009f0b4;
  fVar20 = DAT_ram_4009f0b0;
  uVar14 = DAT_ram_40099f38;
  if (fVar2 < fVar3) {
    puVar10 = param_1 + 0xe8ba;
    puVar11 = param_1 + 0xe8f0;
    puVar7 = param_1 + 0xe8e8;
    do {
      puVar8 = (ulonglong *)((int)puVar10 + 4);
      uVar16 = FUN_ram_40000d44(uVar14,(((float)*puVar10 / fVar4) * fVar20) / fVar22);
      uVar6 = DAT_ram_4009f0dc;
      uVar5 = DAT_ram_4009f0d4;
      puVar10[4] = uVar16;
      *(undefined4 *)puVar7 = uVar6;
      *(undefined4 *)puVar11 = uVar5;
      puVar10 = puVar8;
      puVar11 = (ulonglong *)((int)puVar11 + 0xc);
      puVar7 = puVar7 + 1;
    } while (puVar8 != param_1 + 0xe8be);
  }
  else if (DAT_ram_4009f0d0 < fVar2) {
    puVar10 = param_1 + 0xe8ba;
    puVar11 = param_1 + 0xe8f0;
    puVar7 = param_1 + 0xe8e8;
    do {
      puVar8 = (ulonglong *)((int)puVar10 + 4);
      uVar16 = FUN_ram_40000d44(uVar14,(((float)*puVar10 / fVar4) * fVar20) / fVar22);
      uVar6 = DAT_ram_4009f0d8;
      uVar5 = DAT_ram_4009f0d4;
      puVar10[4] = uVar16;
      *(undefined4 *)puVar7 = uVar6;
      *(undefined4 *)puVar11 = uVar5;
      puVar10 = puVar8;
      puVar11 = (ulonglong *)((int)puVar11 + 0xc);
      puVar7 = puVar7 + 1;
    } while (puVar8 != param_1 + 0xe8be);
  }
  else {
    puVar10 = param_1 + 0xe8ba;
    puVar11 = param_1 + 0xe8f0;
    pfVar12 = (float *)(param_1 + 0xe8e8);
    do {
      puVar7 = (ulonglong *)((int)puVar10 + 4);
      uVar16 = FUN_ram_40000d44(uVar14,(((float)*puVar10 / fVar4) * fVar20) / fVar22);
      puVar10[4] = uVar16;
      fVar15 = (float)FUN_ram_40000bd8((fVar2 * fVar21) / fVar4);
      uVar5 = DAT_ram_4009f0d4;
      *pfVar12 = fVar3 - fVar15;
      *(undefined4 *)puVar11 = uVar5;
      puVar10 = puVar7;
      puVar11 = (ulonglong *)((int)puVar11 + 0xc);
      pfVar12 = pfVar12 + 2;
    } while (puVar7 != param_1 + 0xe8be);
  }
  *(float *)(param_1 + 0xe8fc) = DAT_ram_4009672c;
  *(undefined1 *)((int)param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  return;
}

