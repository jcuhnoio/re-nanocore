/* NanoCore 1.12: nc_velvet_vibrato_process at 0x40074e5e.
 * Role: MOD10 delegated 1536-sample stereo variable delay
 * REA: ev_b11ac76f726f822bfa07704b5457cf0e54058f258576c7f0e704fdefd7fb5238
 * Source: analysis/rea-1.12-effects/results/03569-export-0x40074e5e.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_velvet_vibrato_process
               (float *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
               float *param_7,int param_8,int param_9)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulonglong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  
  if (((param_1 == (float *)0x0) || (param_2 == 0)) || (param_4 == 0)) {
    return;
  }
  if (param_9 != 0) {
    *(bool *)param_9 = param_5 != 0;
  }
  fVar4 = DAT_ram_4009672c;
  fVar3 = DAT_ram_4009f078;
  if (DAT_ram_40099f28 < *param_1) {
    fVar3 = *param_1;
  }
  fVar38 = DAT_ram_4009a644;
  fVar26 = DAT_ram_4009b18c;
  fVar37 = DAT_ram_4009f0bc;
  fVar36 = DAT_ram_4009672c;
  fVar27 = DAT_ram_4009f020;
  if (param_7 != (float *)0x0) {
    fVar27 = *param_7;
    if (fVar27 < 0.0) {
      fVar38 = param_7[1];
      fVar27 = 0.0;
      if (0.0 <= fVar38) goto LAB_ram_40074ef4;
LAB_ram_4007536a:
      fVar26 = param_7[2];
      fVar38 = 0.0;
      if (0.0 <= fVar26) goto LAB_ram_40074f0c;
LAB_ram_4007537e:
      fVar37 = param_7[3];
      fVar26 = 0.0;
      if (0.0 <= fVar37) goto LAB_ram_40074f24;
LAB_ram_40075392:
      fVar36 = param_7[4];
      fVar37 = 0.0;
      if (0.0 <= fVar36) goto LAB_ram_40074f3c;
LAB_ram_400753a6:
      fVar36 = 0.0;
    }
    else {
      if (DAT_ram_4009672c < fVar27) {
        fVar27 = DAT_ram_4009672c;
      }
      fVar38 = param_7[1];
      if (fVar38 < 0.0) goto LAB_ram_4007536a;
LAB_ram_40074ef4:
      if (DAT_ram_4009672c < fVar38) {
        fVar38 = DAT_ram_4009672c;
      }
      fVar26 = param_7[2];
      if (fVar26 < 0.0) goto LAB_ram_4007537e;
LAB_ram_40074f0c:
      if (DAT_ram_4009672c < fVar26) {
        fVar26 = DAT_ram_4009672c;
      }
      fVar37 = param_7[3];
      if (fVar37 < 0.0) goto LAB_ram_40075392;
LAB_ram_40074f24:
      if (DAT_ram_4009672c < fVar37) {
        fVar37 = DAT_ram_4009672c;
      }
      fVar36 = param_7[4];
      if (fVar36 < 0.0) goto LAB_ram_400753a6;
LAB_ram_40074f3c:
      if (DAT_ram_4009672c < fVar36) {
        fVar36 = DAT_ram_4009672c;
      }
    }
    fVar25 = DAT_ram_400a098c;
    if ((0.0 <= fVar27) && (fVar25 = DAT_ram_4009f5a0, fVar27 <= DAT_ram_4009672c)) {
      fVar25 = fVar27 * DAT_ram_400a0994 + DAT_ram_400a098c;
    }
    fVar27 = (float)FUN_ram_40000bd8(fVar25);
    if (DAT_ram_4009f4dc <= fVar26) {
      fVar37 = fVar37 + DAT_ram_4009a374;
      fVar35 = 0.0;
      bVar2 = true;
      fVar25 = (fVar26 - DAT_ram_4009f4dc) / DAT_ram_4009f284 + DAT_ram_400a0998;
      fVar26 = DAT_ram_400a0990;
      goto LAB_ram_40074faa;
    }
  }
  fVar26 = fVar26 / DAT_ram_4009f4dc;
  fVar37 = fVar37 * DAT_ram_400a09a0 + DAT_ram_4009a374;
  bVar2 = false;
  fVar25 = fVar26 * DAT_ram_4009f0b0 + DAT_ram_400a099c;
  fVar35 = fVar26 * DAT_ram_4009f374 + DAT_ram_400a09a4;
  fVar26 = fVar26 * DAT_ram_400a09a8 + DAT_ram_400a09ac;
LAB_ram_40074faa:
  fVar18 = DAT_ram_400a09b0;
  fVar17 = DAT_ram_4009f604;
  fVar16 = DAT_ram_4009f600;
  fVar15 = DAT_ram_4009f5fc;
  fVar14 = DAT_ram_4009f5f8;
  fVar13 = DAT_ram_4009f5f4;
  fVar12 = DAT_ram_4009f5f0;
  fVar11 = DAT_ram_4009f5ec;
  fVar10 = DAT_ram_4009f4bc;
  fVar9 = DAT_ram_4009f090;
  fVar8 = DAT_ram_4009a644;
  fVar7 = DAT_ram_4009a374;
  fVar6 = DAT_ram_40099f30;
  puVar5 = PTR_entry_ram_40096740;
  fVar25 = fVar3 * fVar25 * DAT_ram_4009f0ac;
  fVar37 = fVar3 * fVar37 * DAT_ram_4009f0ac;
  fVar1 = fVar4 - fVar36;
  if (param_6 != 0) {
    uVar30 = *(ulonglong *)(param_1 + 1);
    uVar23 = (uint)*(ushort *)(param_1 + 2);
    iVar21 = 0;
    do {
      fVar31 = *(float *)(param_2 + iVar21);
      fVar28 = fVar31;
      if ((param_8 != 0) && (param_3 != 0)) {
        fVar28 = (float)*(undefined8 *)(param_3 + iVar21);
      }
      fVar29 = (float)uVar30;
      fVar34 = fVar29 * fVar9;
      if (fVar10 < fVar34) {
        fVar34 = fVar34 - fVar9;
      }
      if (fVar34 <= fVar11) {
        if (fVar34 < fVar12) {
          fVar34 = fVar13 - fVar34;
        }
      }
      else {
        fVar34 = fVar10 - fVar34;
      }
      fVar33 = fVar34 * fVar34;
      fVar32 = fVar29 * fVar6;
      fVar34 = fVar34 * (fVar33 * (fVar33 * (fVar33 * (fVar33 * fVar14 + fVar15) + fVar16) + fVar17)
                        + fVar4);
      if (fVar7 <= fVar29) {
        if (fVar29 < fVar8) {
          fVar32 = (float)puVar5 - fVar32;
        }
        else {
          fVar32 = fVar32 - fVar6;
        }
      }
      fVar29 = 0.0;
      if ((0.0 <= fVar38) && (fVar29 = fVar4, fVar38 <= fVar4)) {
        fVar29 = fVar38;
      }
      fVar33 = (float)uVar23;
      fVar34 = fVar37 * ((fVar32 - fVar34) * fVar29 + fVar34) + fVar25;
      if (uVar23 == 0) {
        uVar19 = 0x5ff;
        uVar20 = 0x5ff;
        if (0.0 <= fVar34) goto LAB_ram_40075174;
        uVar19 = 0;
        uVar24 = 1;
LAB_ram_400752f6:
        uVar22 = uVar24;
      }
      else {
        uVar19 = uVar23 - 1 & 0xffff;
        uVar20 = uVar19;
        if (0.0 <= fVar34) {
LAB_ram_40075174:
          uVar20 = uVar19;
          if (fVar18 < fVar34) {
            fVar33 = fVar33 - fVar18;
          }
          else {
            fVar33 = fVar33 - fVar34;
          }
        }
        uVar19 = (uint)fVar33;
        fVar34 = (float)(int)uVar19;
        if (fVar33 < fVar34) {
          uVar19 = uVar19 - 1;
          fVar34 = (float)(int)uVar19;
        }
        fVar33 = fVar33 - fVar34;
        if ((int)uVar19 < 0) {
          uVar19 = uVar19 + 0x600;
        }
        else if (0x5ff < (int)uVar19) {
          uVar19 = uVar19 - 0x600;
        }
        uVar24 = uVar19 + 1 & 0xffff;
        uVar22 = 0;
        if (uVar24 < 0x600) goto LAB_ram_400752f6;
      }
      param_1[uVar23 + 3] = fVar31;
      param_1[uVar23 + 0x603] = fVar28;
      fVar29 = fVar4 - fVar33;
      uVar19 = uVar19 & 0xffff;
      fVar34 = fVar26 * ((float)*(undefined8 *)(param_1 + uVar19 + 3) * fVar29 +
                        fVar33 * (float)*(undefined8 *)(param_1 + uVar22 + 3));
      if (bVar2) {
        *(float *)(param_4 + iVar21) = fVar1 * fVar31 + fVar36 * fVar34;
        if (param_5 != 0) {
          fVar31 = fVar26 * (param_1[uVar19 + 0x603] * fVar29 + fVar33 * param_1[uVar22 + 0x603]);
LAB_ram_400750a6:
          *(ulonglong *)(param_5 + iVar21) = (ulonglong)(uint)(fVar28 * fVar1 + fVar31 * fVar36);
        }
      }
      else {
        *(float *)(param_4 + iVar21) =
             fVar1 * fVar31 + fVar36 * (fVar35 * param_1[uVar20 + 3] + fVar34);
        if (param_5 != 0) {
          fVar31 = fVar26 * (param_1[uVar19 + 0x603] * fVar29 + fVar33 * param_1[uVar22 + 0x603]) +
                   fVar35 * param_1[uVar20 + 0x603];
          goto LAB_ram_400750a6;
        }
      }
      uVar19 = uVar23 + 1;
      uVar23 = uVar19 & 0xffff;
      if (uVar23 < 0x600) {
        *(short *)(param_1 + 2) = (short)(uVar19 * 0x10000 >> 0x10);
      }
      else {
        *(undefined2 *)(param_1 + 2) = 0;
        uVar23 = 0;
      }
      fVar31 = fVar27 / fVar3 + (float)*(undefined8 *)(param_1 + 1);
      if (fVar4 <= fVar31) {
        fVar31 = fVar31 - fVar4;
      }
      uVar30 = (ulonglong)(uint)fVar31;
      *(ulonglong *)(param_1 + 1) = uVar30;
      iVar21 = iVar21 + 4;
    } while (param_6 << 2 != iVar21);
  }
  return;
}

