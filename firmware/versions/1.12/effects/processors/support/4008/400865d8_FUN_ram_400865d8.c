/* NanoCore 1.12: FUN_ram_400865d8 at 0x400865d8.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_105445090ae5d5196d7ab5b97173ce22e18ca9e3ce2f624a0c90d3c7dbeea846
 * Source: analysis/rea-1.12-effects/results/03626-export-0x400865d8.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_ram_400865d8(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 *puVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  code *pcVar17;
  int iVar18;
  uint uVar19;
  float *pfVar20;
  undefined4 *puVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  
  puVar21 = (undefined4 *)0x0;
  if (param_2 != (undefined4 *)0x0) {
    puVar21 = (undefined4 *)*param_2;
  }
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar11 = *param_1;
  if (iVar11 != 0) {
    (**(code **)(iVar11 + -0x10))(*(undefined4 *)(iVar11 + -0xc),iVar11 + -0x10);
    *param_1 = 0;
  }
  param_1[7] = 0;
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  uVar19 = (uint)*(ushort *)(param_2 + 1);
  if (uVar19 < 4) {
    return 0;
  }
  pfVar20 = (float *)param_2[3];
  if (pfVar20 == (float *)0x0) {
    return 0;
  }
  iVar11 = uVar19 - 1;
  iVar18 = iVar11 * 0x10;
  if (puVar21 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)FUN_ram_40002f1a(iVar18);
    if (puVar10 == (undefined4 *)0x0) goto LAB_ram_400867da;
    pcVar17 = FUN_ram_4008561e;
    *puVar10 = FUN_ram_4008561e;
    uVar22 = 0;
    goto LAB_ram_40086662;
  }
  if ((code *)puVar21[1] == (code *)0x0) {
    puVar10 = (undefined4 *)FUN_ram_40002f1a(iVar18);
    if (puVar10 == (undefined4 *)0x0) goto LAB_ram_400867da;
LAB_ram_400867e2:
    pcVar17 = FUN_ram_4008561e;
  }
  else {
    puVar10 = (undefined4 *)(*(code *)puVar21[1])(*puVar21,iVar18);
    if (puVar10 == (undefined4 *)0x0) {
LAB_ram_400867da:
      *param_1 = 0;
      return 0xfffffffd;
    }
    pfVar20 = (float *)param_2[3];
    if (puVar21[1] == 0) goto LAB_ram_400867e2;
    pcVar17 = (code *)puVar21[2];
  }
  uVar22 = *puVar21;
  *puVar10 = pcVar17;
LAB_ram_40086662:
  fVar9 = DAT_ram_4009f66c;
  fVar7 = DAT_ram_40099f30;
  fVar26 = (float)DAT_ram_4009675c;
  puVar6 = PTR_entry_ram_40096740;
  fVar2 = DAT_ram_4009673c;
  pfVar12 = (float *)(puVar10 + 4);
  puVar10[1] = uVar22;
  *param_1 = (int)pfVar12;
  pfVar13 = pfVar20 + (uVar19 - 3);
  pfVar14 = pfVar12;
  pfVar15 = pfVar20;
  do {
    pfVar16 = pfVar15 + 1;
    *pfVar14 = ((float)*(undefined8 *)(pfVar15 + 1) * fVar7 + (float)*(undefined8 *)pfVar15 +
               (float)*(undefined8 *)(pfVar15 + 2)) * fVar9;
    pfVar14[1] = ((float)*(undefined8 *)(pfVar15 + 2) - *pfVar15) * fVar26;
    pfVar14[2] = (-((float)*(undefined8 *)pfVar16 * (float)puVar6) + *pfVar15 +
                 (float)*(undefined8 *)(pfVar15 + 2)) * fVar26;
    pfVar14[3] = (-((float)*(undefined8 *)(pfVar15 + 2) * fVar2) +
                  ((float)*(undefined8 *)pfVar16 * fVar2 - *pfVar15) +
                 (float)*(undefined8 *)(pfVar15 + 3)) * fVar9;
    pfVar14 = pfVar14 + 4;
    pfVar15 = pfVar16;
  } while (pfVar13 != pfVar16);
  pfVar20 = pfVar20 + (uVar19 - 3);
  fVar26 = pfVar20[1];
  fVar3 = *pfVar20;
  fVar4 = pfVar20[2];
  pfVar12 = pfVar12 + iVar11 * 4 + -8;
  pfVar12[1] = 0.0;
  pfVar12[2] = 0.0;
  pfVar12[3] = 0.0;
  fVar8 = DAT_ram_4009a60c;
  fVar2 = (float)(int)(uVar19 - 3);
  *(ulonglong *)pfVar12 = (ulonglong)(uint)((fVar26 * fVar7 + fVar3 + fVar4) * fVar9);
  uVar24 = *(undefined8 *)(param_2 + 4);
  iVar18 = param_2[5];
  fVar26 = (float)*(undefined8 *)(param_2 + 2);
  uVar23 = *(undefined8 *)(param_2 + 6);
  uVar25 = *(undefined8 *)(param_2 + 7);
  *(ulonglong *)(param_1 + 3) = (ulonglong)(uint)fVar2;
  fVar2 = fVar2 / (fVar26 + fVar26);
  param_1[4] = iVar18;
  *(undefined8 *)(param_1 + 5) = uVar23;
  *(undefined8 *)(param_1 + 6) = uVar25;
  param_1[7] = 0;
  fVar26 = (fVar26 + (float)uVar24) * fVar2;
  *(ulonglong *)(param_1 + 1) = (ulonglong)(uint)fVar2;
  *(ulonglong *)(param_1 + 2) = (ulonglong)(uint)fVar26;
  if (((int)pfVar12 < 0x100 && ABS(fVar2) <= fVar8) && (ABS(fVar26) <= fVar8)) {
    puVar21 = puVar10;
    while( true ) {
      puVar5 = (undefined8 *)(puVar21 + 4);
      puVar21 = puVar21 + 1;
      bVar1 = (int)pfVar13 < 0x100;
      pfVar13 = (float *)0x0;
      if (bVar1) {
        pfVar13 = (float *)(uint)(ABS((float)*puVar5) <= fVar8);
      }
      if (pfVar13 == (float *)0x0) break;
      if (puVar21 == puVar10 + iVar11 * 4 + -4) {
        return 0;
      }
    }
  }
  (*pcVar17)(uVar22,puVar10);
  *param_1 = 0;
  param_1[7] = 0;
  return 0xfffffffe;
}

