/* NanoCore 1.12: compressor_process_linked_stereo at 0x40060284.
 * Role: Linked detector, soft knee gain reduction, attack/release and makeup application.
 * REA: ev_87fc1711410667759a6c66cbc2bdc8ca7301c84ab28057cdc281f2f8131baf71
 * Source: analysis/rea-1.12/results/03486-export-0x40060284.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compressor_process_linked_stereo(undefined8 *param_1,int param_2,int param_3,int param_4,int param_5,
                     int param_6,int param_7,int param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float in_register_00000100;
  float fVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  if (param_6 == 0) {
    return;
  }
  if (param_7 == 0) {
    param_5 = 0;
    bVar8 = false;
    param_3 = param_2;
  }
  else {
    if (param_3 == 0) {
      param_5 = 0;
    }
    else {
      bVar8 = true;
      if (param_5 != 0) goto LAB_ram_400602e2;
    }
    bVar8 = false;
    param_3 = param_2;
  }
LAB_ram_400602e2:
  if (param_8 != 0) {
    *(bool *)param_8 = bVar8;
  }
  fVar13 = DAT_ram_4009f1f0;
  fVar12 = DAT_ram_4009f1e8;
  fVar11 = DAT_ram_4009f1d4;
  fVar10 = DAT_ram_4009f098;
  fVar9 = DAT_ram_4009672c;
  if (*(char *)((int)param_1 + 5) == '\0') {
    if (param_2 != param_4) {
      FUN_ram_4000303c(param_4,param_2,param_6 << 2);
    }
    if ((param_5 != 0) && (param_5 != param_3)) {
      FUN_ram_4000303c(param_5,param_3,param_6 << 2);
      return;
    }
  }
  else {
    fVar1 = DAT_ram_4009672c / (float)*(undefined8 *)((int)param_1 + 0xc);
    fVar2 = *(float *)(param_1 + 2);
    fVar6 = DAT_ram_4009672c - (float)*(undefined8 *)((int)param_1 + 0x2c);
    fVar5 = fVar2 * DAT_ram_4009675c;
    fVar3 = *(float *)((int)param_1 + 0x24);
    iVar15 = 0;
    fVar7 = DAT_ram_4009672c - (float)param_1[5];
    fVar22 = DAT_ram_4009f1d8;
    fVar19 = DAT_ram_4009f1dc;
    fVar18 = DAT_ram_4009f1e0;
    fVar17 = DAT_ram_4009f1e4;
    fVar14 = in_register_00000100;
    do {
      uVar20 = param_1[9];
      fVar21 = (float)*(undefined8 *)(param_2 + iVar15);
      fVar4 = *(float *)(param_3 + iVar15);
      param_1[9] = *(undefined8 *)(param_2 + iVar15);
      fVar23 = (float)*(undefined8 *)((int)param_1 + 0x44);
      fVar27 = fVar23 * (float)param_1[10] + (fVar21 - (float)uVar20) * fVar23;
      param_1[10] = (ulonglong)(uint)fVar27;
      fVar25 = fVar27;
      if (bVar8) {
        uVar20 = *(undefined8 *)((int)param_1 + 0x4c);
        *(float *)((int)param_1 + 0x4c) = fVar4;
        fVar25 = fVar23 * (float)*(undefined8 *)((int)param_1 + 0x54) +
                 (fVar4 - (float)uVar20) * fVar23;
        *(ulonglong *)((int)param_1 + 0x54) = (ulonglong)(uint)fVar25;
      }
      fVar23 = (float)*(undefined8 *)((int)param_1 + 0x34);
      fVar27 = ABS(fVar23 * fVar27 + fVar21);
      fVar25 = ABS(fVar23 * fVar25 + fVar4);
      if (fVar27 < fVar25) {
        fVar27 = fVar25;
      }
      if ((*(char *)(param_1 + 7) == '\0') || (fVar27 <= fVar3)) {
        iVar16 = *(int *)((int)param_1 + 0x3c);
        fVar25 = (float)param_1[8];
        if (fVar27 <= fVar25) goto LAB_ram_400605cc;
LAB_ram_4006045c:
        if (iVar16 == 0) {
          fVar27 = (fVar27 - fVar25) * fVar7 + fVar25;
          param_1[8] = (ulonglong)(uint)fVar27;
        }
        else {
          param_1[8] = (ulonglong)(uint)fVar27;
LAB_ram_40060462:
          *(int *)((int)param_1 + 0x3c) = iVar16 + -1;
        }
      }
      else {
        fVar22 = (float)*(undefined8 *)((int)param_1 + 0x14);
        if (fVar22 <= (float)param_1[3]) {
          fVar22 = (float)param_1[3];
        }
        fVar23 = (float)FUN_ram_40000658(fVar22 * (float)_DAT_ram_4009f0ac * (float)*param_1);
        fVar17 = DAT_ram_4009f1e4;
        fVar18 = DAT_ram_4009f1e0;
        fVar19 = DAT_ram_4009f1dc;
        fVar22 = DAT_ram_4009f1d8;
        fVar25 = (float)param_1[8];
        iVar16 = (uint)(-1 < (int)fVar23) * (int)fVar23;
        *(undefined1 *)(param_1 + 7) = 0;
        *(int *)((int)param_1 + 0x3c) = iVar16;
        if (fVar25 < fVar27) goto LAB_ram_4006045c;
LAB_ram_400605cc:
        fVar27 = (fVar27 - fVar25) * fVar6 + fVar25;
        param_1[8] = (ulonglong)(uint)fVar27;
        if (iVar16 != 0) goto LAB_ram_40060462;
      }
      fVar25 = (float)param_1[4];
      if (fVar3 < fVar27 + fVar10) {
        fVar23 = (float)((uint)fVar14 & 0x7fffff | 0x3f800000);
        fVar24 = (float)param_1[1];
        fVar27 = fVar5 + fVar24;
        fVar23 = ((float)(int)(((uint)ABS(fVar14) >> 0x17) - 0x7f) +
                 ((fVar22 * fVar23 + fVar19) * fVar23 + fVar18) * fVar23 + fVar17) * fVar12;
        if (((fVar2 <= 0.0) || (fVar26 = fVar24 - fVar5, fVar23 <= fVar26)) || (fVar27 <= fVar23)) {
          fVar26 = fVar23;
          if (fVar27 <= fVar23) {
            fVar26 = (fVar23 - fVar24) * fVar1 + fVar24;
          }
        }
        else {
          fVar26 = fVar23 - fVar26;
          fVar26 = ((fVar1 - fVar9) * fVar26 * fVar26) / ((float)param_1[2] + (float)param_1[2]) +
                   fVar23;
        }
        fVar27 = (fVar26 - fVar23) * in_register_00000100;
        fVar23 = fVar11;
        if (fVar13 <= fVar27) {
          iVar16 = (int)fVar27;
          fVar23 = (float)iVar16;
          if (fVar23 <= fVar27) {
            iVar16 = iVar16 + 0x7f;
          }
          else {
            fVar23 = (float)(iVar16 + -1);
            iVar16 = iVar16 + 0x7e;
          }
          fVar27 = fVar27 - fVar23;
          fVar23 = (fVar27 * (fVar27 * (fVar27 * (float)DAT_ram_4009f1f4 + DAT_ram_4009f1f4._4_4_) +
                             (float)DAT_ram_4009f1fc) + fVar9) * (float)(iVar16 * 0x800000);
        }
        fVar25 = fVar25 * fVar23;
      }
      *(ulonglong *)(param_4 + iVar15) = (ulonglong)(uint)(fVar25 * fVar21);
      if (param_5 != 0) {
        *(ulonglong *)(param_5 + iVar15) = (ulonglong)(uint)(fVar25 * fVar4);
      }
      iVar15 = iVar15 + 4;
    } while (iVar15 != param_6 << 2);
  }
  return;
}

