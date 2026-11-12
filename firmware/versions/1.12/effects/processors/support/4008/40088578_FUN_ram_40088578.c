/* NanoCore 1.12: FUN_ram_40088578 at 0x40088578.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_3399a643c74f69f659ea951a73d8b7fa377541f7df706d524914c07344036d37
 * Source: analysis/rea-1.12-effects/results/03634-export-0x40088578.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Type propagation algorithm not settling */

int FUN_ram_40088578(ulonglong param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  float fVar10;
  float fVar11;
  undefined4 *puVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  code *pcVar16;
  float *pfVar17;
  undefined4 uVar18;
  float *pfVar19;
  float *pfVar20;
  undefined4 *puVar21;
  int iVar22;
  undefined4 *puVar23;
  uint uVar24;
  uint uVar25;
  float *pfVar26;
  undefined4 *puVar27;
  
  if (param_2 == (int *)0x0) {
    return -1;
  }
  iVar13 = *param_2;
  if (iVar13 != 0) {
    (**(code **)(iVar13 + -0x10))(*(undefined4 *)(iVar13 + -0xc),iVar13 + -0x10);
    *param_2 = 0;
  }
  iVar13 = param_2[2];
  param_2[1] = 0;
  if (iVar13 != 0) {
    (**(code **)(iVar13 + -0x10))(*(undefined4 *)(iVar13 + -0xc),iVar13 + -0x10);
    param_2[2] = 0;
  }
  iVar13 = param_2[5];
  param_2[3] = 0;
  if (iVar13 != 0) {
    (**(code **)(iVar13 + -0x10))(*(undefined4 *)(iVar13 + -0xc),iVar13 + -0x10);
    param_2[5] = 0;
  }
  iVar13 = param_2[6];
  if (iVar13 != 0) {
    (**(code **)(iVar13 + -0x10))(*(undefined4 *)(iVar13 + -0xc),iVar13 + -0x10);
    param_2[6] = 0;
  }
  iVar13 = param_2[7];
  if (iVar13 != 0) {
    (**(code **)(iVar13 + -0x10))(*(undefined4 *)(iVar13 + -0xc),iVar13 + -0x10);
    param_2[7] = 0;
  }
  iVar13 = param_2[8];
  if (iVar13 != 0) {
    (**(code **)(iVar13 + -0x10))(*(undefined4 *)(iVar13 + -0xc),iVar13 + -0x10);
    param_2[8] = 0;
  }
  iVar13 = param_2[0xc];
  if (iVar13 != 0) {
    (**(code **)(iVar13 + -0x10))(*(undefined4 *)(iVar13 + -0xc),iVar13 + -0x10);
    param_2[0xc] = 0;
  }
  iVar13 = param_2[0xd];
  if (iVar13 != 0) {
    (**(code **)(iVar13 + -0x10))(*(undefined4 *)(iVar13 + -0xc),iVar13 + -0x10);
    param_2[0xd] = 0;
  }
  iVar13 = param_2[0xe];
  if (iVar13 != 0) {
    (**(code **)(iVar13 + -0x10))(*(undefined4 *)(iVar13 + -0xc),iVar13 + -0x10);
    param_2[0xe] = 0;
  }
  iVar13 = param_2[0xf];
  param_2[4] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  if (iVar13 != 0) {
    (**(code **)(iVar13 + -0x10))(*(undefined4 *)(iVar13 + -0xc),iVar13 + -0x10);
    param_2[0xf] = 0;
  }
  param_2[0x16] = 0;
  if (param_3 == (undefined4 *)0x0) {
    return 0;
  }
  puVar21 = (undefined4 *)*param_3;
  uVar25 = param_3[1];
  if (puVar21 == (undefined4 *)0x0) {
    if (uVar25 == 0) goto LAB_ram_400887f6;
    if ((int)((ulonglong)uVar25 * 0x54 >> 0x20) != 0) {
      return -3;
    }
    if (0xffffffee < uVar25 * 0x54 - 1) {
      return -3;
    }
    iVar13 = uVar25 * 0x54 + 0x10;
LAB_ram_400887e0:
    puVar12 = (undefined4 *)FUN_ram_40002f1a(iVar13);
    if (puVar12 == (undefined4 *)0x0) {
      return -3;
    }
    *puVar12 = FUN_ram_4008561e;
    uVar18 = 0;
LAB_ram_400886da:
    puVar27 = puVar12 + 4;
    puVar12[1] = uVar18;
    memset(puVar27,0,uVar25 * 0x54);
    uVar24 = 0;
    puVar23 = puVar27;
    do {
      uVar24 = uVar24 + 1;
      if (puVar21 != (undefined4 *)0x0) {
        uVar18 = puVar21[1];
        *(ulonglong *)(puVar23 + 1) = (ulonglong)(uint)puVar21[2];
        uVar3 = puVar21[3];
        *puVar23 = uVar18;
        *(ulonglong *)(puVar23 + 2) = (ulonglong)uVar3;
        *(ulonglong *)(puVar23 + 3) = (ulonglong)(uint)puVar21[4];
        uVar3 = puVar21[5];
        *(ulonglong *)(puVar23 + 5) = param_1 & 0xffffffff;
        *(ulonglong *)(puVar23 + 4) = (ulonglong)uVar3;
        FUN_ram_4008566a(puVar23);
        puVar23[0x13] = 0;
        puVar23[0x14] = 0;
        FUN_ram_4009582a(puVar23 + 0xb,1,puVar23 + 0xe,puVar23 + 0x13);
      }
      puVar21 = puVar21 + 6;
      puVar23 = puVar23 + 0x15;
    } while (uVar24 < uVar25);
    iVar13 = *param_2;
    if (iVar13 != 0) {
      (**(code **)(iVar13 + -0x10))(*(undefined4 *)(iVar13 + -0xc),iVar13 + -0x10);
    }
    puVar21 = (undefined4 *)param_3[2];
    param_2[1] = uVar25;
    *param_2 = (int)puVar27;
    uVar25 = param_3[3];
  }
  else {
    if (uVar25 != 0) {
      if ((int)((ulonglong)uVar25 * 0x54 >> 0x20) != 0) {
        return -3;
      }
      if (0xffffffee < uVar25 * 0x54 - 1) {
        return -3;
      }
      puVar23 = (undefined4 *)*puVar21;
      iVar13 = uVar25 * 0x54 + 0x10;
      if (puVar23 == (undefined4 *)0x0) goto LAB_ram_400887e0;
      if ((code *)puVar23[1] == (code *)0x0) {
        puVar12 = (undefined4 *)FUN_ram_40002f1a(iVar13);
        if (puVar12 == (undefined4 *)0x0) {
          return -3;
        }
LAB_ram_40088ad8:
        pcVar16 = FUN_ram_4008561e;
      }
      else {
        puVar12 = (undefined4 *)(*(code *)puVar23[1])(*puVar23);
        if (puVar12 == (undefined4 *)0x0) {
          return -3;
        }
        if (puVar23[1] == 0) goto LAB_ram_40088ad8;
        pcVar16 = (code *)puVar23[2];
      }
      uVar18 = *puVar23;
      *puVar12 = pcVar16;
      goto LAB_ram_400886da;
    }
LAB_ram_400887f6:
    iVar13 = *param_2;
    if (iVar13 != 0) {
      (**(code **)(iVar13 + -0x10))(*(undefined4 *)(iVar13 + -0xc),iVar13 + -0x10);
      *param_2 = 0;
    }
    puVar21 = (undefined4 *)param_3[2];
    param_2[1] = 0;
    uVar25 = param_3[3];
  }
  if (puVar21 == (undefined4 *)0x0) {
    if (uVar25 == 0) goto LAB_ram_40088abe;
    if ((int)((ulonglong)uVar25 * 0x54 >> 0x20) != 0) {
      return -3;
    }
    if (0xffffffee < uVar25 * 0x54 - 1) {
      return -3;
    }
    iVar13 = uVar25 * 0x54 + 0x10;
LAB_ram_40088784:
    puVar12 = (undefined4 *)FUN_ram_40002f1a(iVar13);
    if (puVar12 == (undefined4 *)0x0) {
      return -3;
    }
    *puVar12 = FUN_ram_4008561e;
    uVar18 = 0;
LAB_ram_40088864:
    puVar27 = puVar12 + 4;
    puVar12[1] = uVar18;
    memset(puVar27,0,uVar25 * 0x54);
    uVar24 = 0;
    puVar23 = puVar27;
    do {
      uVar24 = uVar24 + 1;
      if (puVar21 != (undefined4 *)0x0) {
        uVar18 = puVar21[1];
        *(ulonglong *)(puVar23 + 1) = (ulonglong)(uint)puVar21[2];
        uVar3 = puVar21[3];
        *puVar23 = uVar18;
        *(ulonglong *)(puVar23 + 2) = (ulonglong)uVar3;
        *(ulonglong *)(puVar23 + 3) = (ulonglong)(uint)puVar21[4];
        uVar3 = puVar21[5];
        *(ulonglong *)(puVar23 + 5) = param_1 & 0xffffffff;
        *(ulonglong *)(puVar23 + 4) = (ulonglong)uVar3;
        FUN_ram_4008566a(puVar23);
        puVar23[0x13] = 0;
        puVar23[0x14] = 0;
        FUN_ram_4009582a(puVar23 + 0xb,1,puVar23 + 0xe,puVar23 + 0x13);
      }
      puVar21 = puVar21 + 6;
      puVar23 = puVar23 + 0x15;
    } while (uVar24 < uVar25);
    iVar13 = param_2[2];
    if (iVar13 != 0) {
      (**(code **)(iVar13 + -0x10))(*(undefined4 *)(iVar13 + -0xc),iVar13 + -0x10);
    }
    param_2[2] = (int)puVar27;
    param_2[3] = uVar25;
  }
  else {
    if (uVar25 != 0) {
      if ((int)((ulonglong)uVar25 * 0x54 >> 0x20) != 0) {
        return -3;
      }
      if (0xffffffee < uVar25 * 0x54 - 1) {
        return -3;
      }
      puVar23 = (undefined4 *)*puVar21;
      iVar13 = uVar25 * 0x54 + 0x10;
      if (puVar23 == (undefined4 *)0x0) goto LAB_ram_40088784;
      if ((code *)puVar23[1] == (code *)0x0) {
        puVar12 = (undefined4 *)FUN_ram_40002f1a(iVar13);
        if (puVar12 == (undefined4 *)0x0) {
          return -3;
        }
LAB_ram_40088aec:
        pcVar16 = FUN_ram_4008561e;
      }
      else {
        puVar12 = (undefined4 *)(*(code *)puVar23[1])(*puVar23);
        if (puVar12 == (undefined4 *)0x0) {
          return -3;
        }
        if (puVar23[1] == 0) goto LAB_ram_40088aec;
        pcVar16 = (code *)puVar23[2];
      }
      uVar18 = *puVar23;
      *puVar12 = pcVar16;
      goto LAB_ram_40088864;
    }
LAB_ram_40088abe:
    iVar13 = param_2[2];
    if (iVar13 != 0) {
      (**(code **)(iVar13 + -0x10))(*(undefined4 *)(iVar13 + -0xc),iVar13 + -0x10);
      param_2[2] = 0;
    }
    param_2[3] = 0;
  }
  iVar13 = FUN_ram_40088068(param_2 + 4,param_3 + 4);
  if (iVar13 != 0) {
    return iVar13;
  }
  iVar13 = param_2[0xf];
  puVar21 = (undefined4 *)param_3[0xe];
  if (iVar13 != 0) {
    (**(code **)(iVar13 + -0x10))(*(undefined4 *)(iVar13 + -0xc),iVar13 + -0x10);
    param_2[0xf] = 0;
  }
  uVar25 = (uint)*(ushort *)(param_3 + 0xf);
  param_2[0x16] = 0;
  if (uVar25 < 4) {
    return 0;
  }
  pfVar26 = (float *)param_3[0x11];
  if (pfVar26 == (float *)0x0) {
    return 0;
  }
  iVar13 = uVar25 - 1;
  iVar22 = iVar13 * 0x10;
  if (puVar21 == (undefined4 *)0x0) {
    puVar23 = (undefined4 *)FUN_ram_40002f1a(iVar22);
    if (puVar23 == (undefined4 *)0x0) goto LAB_ram_40088b1e;
    pcVar16 = FUN_ram_4008561e;
    *puVar23 = FUN_ram_4008561e;
    uVar18 = 0;
    goto LAB_ram_4008895a;
  }
  if ((code *)puVar21[1] == (code *)0x0) {
    puVar23 = (undefined4 *)FUN_ram_40002f1a(iVar22);
    if (puVar23 == (undefined4 *)0x0) goto LAB_ram_40088b1e;
LAB_ram_40088b14:
    pcVar16 = FUN_ram_4008561e;
  }
  else {
    puVar23 = (undefined4 *)(*(code *)puVar21[1])(*puVar21,iVar22);
    if (puVar23 == (undefined4 *)0x0) {
LAB_ram_40088b1e:
      param_2[0xf] = 0;
      return -3;
    }
    pfVar26 = (float *)param_3[0x11];
    if (puVar21[1] == 0) goto LAB_ram_40088b14;
    pcVar16 = (code *)puVar21[2];
  }
  uVar18 = *puVar21;
  *puVar23 = pcVar16;
LAB_ram_4008895a:
  fVar11 = DAT_ram_4009f66c;
  fVar7 = DAT_ram_40099f30;
  fVar4 = (float)DAT_ram_4009675c;
  puVar9 = PTR_entry_ram_40096740;
  fVar2 = DAT_ram_4009673c;
  pfVar14 = (float *)(puVar23 + 4);
  puVar23[1] = uVar18;
  param_2[0xf] = (int)pfVar14;
  pfVar15 = pfVar26 + (uVar25 - 3);
  pfVar17 = pfVar14;
  pfVar19 = pfVar26;
  do {
    pfVar20 = pfVar19 + 1;
    *pfVar17 = ((float)*(undefined8 *)(pfVar19 + 1) * fVar7 + (float)*(undefined8 *)pfVar19 +
               (float)*(undefined8 *)(pfVar19 + 2)) * fVar11;
    pfVar17[1] = ((float)*(undefined8 *)(pfVar19 + 2) - *pfVar19) * fVar4;
    pfVar17[2] = (-((float)*(undefined8 *)pfVar20 * (float)puVar9) + *pfVar19 +
                 (float)*(undefined8 *)(pfVar19 + 2)) * fVar4;
    pfVar17[3] = (-((float)*(undefined8 *)(pfVar19 + 2) * fVar2) +
                  ((float)*(undefined8 *)pfVar20 * fVar2 - *pfVar19) +
                 (float)*(undefined8 *)(pfVar19 + 3)) * fVar11;
    pfVar17 = pfVar17 + 4;
    pfVar19 = pfVar20;
  } while (pfVar15 != pfVar20);
  pfVar26 = pfVar26 + (uVar25 - 3);
  fVar4 = *pfVar26;
  fVar5 = pfVar26[1];
  fVar6 = pfVar26[2];
  pfVar14 = pfVar14 + iVar13 * 4 + -8;
  pfVar14[1] = 0.0;
  pfVar14[2] = 0.0;
  pfVar14[3] = 0.0;
  fVar10 = DAT_ram_4009a60c;
  fVar2 = (float)(int)(uVar25 - 3);
  *(ulonglong *)pfVar14 = (ulonglong)(uint)((fVar5 * fVar7 + fVar4 + fVar6) * fVar11);
  fVar4 = (float)param_3[0x10];
  fVar7 = (float)param_3[0x12];
  iVar22 = param_3[0x13];
  uVar25 = param_3[0x14];
  uVar24 = param_3[0x15];
  *(ulonglong *)(param_2 + 0x12) = (ulonglong)(uint)fVar2;
  fVar2 = fVar2 / (fVar4 + fVar4);
  param_2[0x13] = iVar22;
  *(ulonglong *)(param_2 + 0x14) = (ulonglong)uVar25;
  *(ulonglong *)(param_2 + 0x15) = (ulonglong)uVar24;
  param_2[0x16] = 0;
  fVar4 = (fVar4 + fVar7) * fVar2;
  *(ulonglong *)(param_2 + 0x10) = (ulonglong)(uint)fVar2;
  *(ulonglong *)(param_2 + 0x11) = (ulonglong)(uint)fVar4;
  if ((0xff < (int)pfVar14 || fVar10 < ABS(fVar2)) || (fVar10 < ABS(fVar4))) {
LAB_ram_40088af6:
    (*pcVar16)(uVar18,puVar23);
    iVar22 = -2;
    param_2[0xf] = 0;
    param_2[0x16] = 0;
  }
  else {
    puVar21 = puVar23;
    do {
      puVar8 = (undefined8 *)(puVar21 + 4);
      puVar21 = puVar21 + 1;
      bVar1 = (int)pfVar15 < 0x100;
      pfVar15 = (float *)0x0;
      if (bVar1) {
        pfVar15 = (float *)(uint)(ABS((float)*puVar8) <= fVar10);
      }
      if (pfVar15 == (float *)0x0) goto LAB_ram_40088af6;
      iVar22 = 0;
    } while (puVar21 != puVar23 + iVar13 * 4 + -4);
  }
  return iVar22;
}

