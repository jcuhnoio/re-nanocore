/* NanoCore 1.12: nc_chorus2_jet_flanger_process at 0x40072754.
 * Role: Distinct MOD11 dual-tap and MOD17 triangle-swept delay branches
 * REA: ev_78bf5f95d430f2ded9bb14f1237bcd816ff688518199d646a3171eaccbdb4741
 * Source: analysis/rea-1.12-effects/results/03544-export-0x40072754.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_chorus2_jet_flanger_process(float *param_1,float *param_2,undefined8 *param_3,float *param_4,
                     float *param_5,int param_6,float *param_7,uint param_8,char param_9,
                     char *param_10)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_register_00000100;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  char cVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  if (param_1 == (float *)0x0) {
    return;
  }
  if (param_2 == (float *)0x0) {
    return;
  }
  if (param_4 == (float *)0x0) {
    return;
  }
  if (param_6 == 0) {
    return;
  }
  if (*(byte *)(param_1 + 0x805) != param_8) {
    pfVar9 = param_1 + 1;
    do {
      iVar11 = memset(pfVar9,0,0x80);
      fence();
      pfVar9 = (float *)(iVar11 + 0x80);
    } while (pfVar9 != param_1 + 0x7e1);
    memset(param_1 + 0x7e1,0,0x80);
    fence();
    *(undefined1 *)(param_1 + 0x803) = 0;
    *(undefined1 *)((int)param_1 + 0x200d) = 0;
    *(undefined1 *)((int)param_1 + 0x200e) = 0;
    *(undefined1 *)((int)param_1 + 0x200f) = 0;
    *(undefined1 *)(param_1 + 0x804) = 0;
    *(undefined1 *)((int)param_1 + 0x2011) = 0;
    *(undefined1 *)((int)param_1 + 0x2012) = 0;
    *(undefined1 *)((int)param_1 + 0x2013) = 0;
    param_1[0x801] = 0.0;
    param_1[0x802] = 0.0;
    *(char *)(param_1 + 0x805) = (char)param_8;
  }
  if (param_10 != (char *)0x0) {
    cVar14 = '\x01';
    if (param_5 == (float *)0x0) {
      cVar14 = param_9;
    }
    *param_10 = cVar14;
  }
  fVar33 = DAT_ram_4009f948;
  fVar3 = DAT_ram_4009f944;
  fVar23 = DAT_ram_40099f30;
  fVar29 = (float)DAT_ram_4009675c;
  fVar17 = DAT_ram_4009672c;
  if (param_8 != 0xb) {
    if (param_8 != 0x11) {
      return;
    }
    fVar34 = param_1[0x802];
    fVar15 = param_1[0x801];
    if (param_7 == (float *)0x0) {
      fVar28 = DAT_ram_4009f954 / (float)*(undefined8 *)param_1;
      fVar22 = DAT_ram_4009f934;
      fVar20 = DAT_ram_4009f930;
      fVar32 = DAT_ram_4009f230;
      fVar31 = DAT_ram_4009f8fc;
    }
    else {
      fVar32 = *param_7;
      fVar28 = DAT_ram_40099f6c;
      if ((0.0 <= fVar32) && (fVar28 = DAT_ram_40099f38, fVar32 <= DAT_ram_4009672c)) {
        fVar28 = fVar32 * DAT_ram_4009b160 + DAT_ram_40099f6c;
      }
      fVar32 = param_7[1];
      fVar22 = 0.0;
      if ((0.0 <= fVar32) && (fVar22 = DAT_ram_4009f8d8, fVar32 <= DAT_ram_4009672c)) {
        fVar22 = fVar32 * DAT_ram_4009f8d8 + 0.0;
      }
      fVar32 = param_7[3];
      fVar20 = DAT_ram_4009f748;
      if ((0.0 <= fVar32) && (fVar20 = DAT_ram_40096730, fVar32 <= DAT_ram_4009672c)) {
        fVar20 = fVar32 * DAT_ram_4009f778 + DAT_ram_4009f748;
      }
      fVar32 = param_7[5];
      if (fVar32 < 0.0) {
        fVar32 = 0.0;
      }
      else if (DAT_ram_4009672c < fVar32) {
        fVar32 = DAT_ram_4009672c;
      }
      fVar28 = fVar28 / (float)*(undefined8 *)param_1;
      fVar31 = param_7[7];
      if ((fVar31 < 0.0) || (DAT_ram_4009672c < fVar31)) {
        fVar31 = 0.0;
      }
      else if (DAT_ram_4009672c <= fVar31) {
        fVar31 = 0.0;
      }
    }
    bVar1 = param_5 != (float *)0x0;
    iVar11 = 0;
    puVar13 = param_3;
    do {
      fVar16 = (float)iVar11 * fVar28 + fVar31 + fVar34;
      if (fVar17 <= fVar16) {
        fVar16 = fVar16 - fVar17;
      }
      if (fVar17 <= fVar16) {
        fVar16 = fVar16 - fVar17;
      }
      fVar24 = (float)(uint)fVar15;
      fVar16 = fVar3 / (fVar22 * (-(ABS(fVar16 - fVar29) * fVar23) + fVar17) + fVar17);
      if (param_3 == (undefined8 *)0x0) {
        if (param_9 == '\0') {
          fVar24 = fVar24 - fVar16;
          uVar30 = *(undefined8 *)param_2;
          uVar18 = (int)fVar24 - (uint)(fVar24 < (float)(int)fVar24);
          uVar10 = uVar18 & 0x3ff;
          uVar12 = uVar10 + 1 & 0x3ff;
          fVar24 = fVar24 - (float)(int)uVar18;
          fVar16 = (param_1[uVar12 + 1] - param_1[uVar10 + 1]) * fVar24 + param_1[uVar10 + 1];
          param_1[(int)fVar15 + 1] = fVar20 * fVar16 + (float)uVar30;
          *param_4 = ((fVar17 - fVar32) * (float)uVar30 + fVar32 * fVar16) * fVar33;
          if (bVar1) {
            uVar30 = *(undefined8 *)param_2;
            fVar16 = ((float)*(undefined8 *)(param_1 + uVar12 + 0x401) - param_1[uVar10 + 0x401]) *
                     fVar24 + param_1[uVar10 + 0x401];
            param_1[(int)fVar15 + 0x401] = fVar20 * fVar16 + (float)uVar30;
            *param_5 = ((float)uVar30 * (fVar17 - fVar32) + fVar32 * fVar16) * fVar33;
          }
        }
        else {
          fVar24 = fVar24 - fVar16;
          uVar30 = *(undefined8 *)param_2;
          uVar18 = (int)fVar24 - (uint)(fVar24 < (float)(int)fVar24);
          uVar10 = uVar18 & 0x3ff;
          uVar12 = uVar10 + 1 & 0x3ff;
          fVar24 = fVar24 - (float)(int)uVar18;
          fVar16 = (param_1[uVar12 + 1] - param_1[uVar10 + 1]) * fVar24 + param_1[uVar10 + 1];
          (param_1 + (int)fVar15)[1] = fVar20 * fVar16 + (float)uVar30;
          *param_4 = ((fVar17 - fVar32) * (float)uVar30 + fVar32 * fVar16) * fVar33;
          if (bVar1) {
            fVar16 = param_1[uVar10 + 0x401];
            fVar26 = (float)*(undefined8 *)(param_1 + uVar12 + 0x401);
            fVar25 = (float)*(undefined8 *)param_2;
            goto LAB_ram_40072d4e;
          }
        }
      }
      else if (param_9 == '\0') {
        fVar24 = fVar24 - fVar16;
        uVar30 = *(undefined8 *)param_2;
        uVar18 = (int)fVar24 - (uint)(fVar24 < (float)(int)fVar24);
        uVar10 = uVar18 & 0x3ff;
        uVar12 = uVar10 + 1 & 0x3ff;
        fVar24 = fVar24 - (float)(int)uVar18;
        fVar16 = (param_1[uVar12 + 1] - param_1[uVar10 + 1]) * fVar24 + param_1[uVar10 + 1];
        param_1[(int)fVar15 + 1] = fVar20 * fVar16 + (float)uVar30;
        *param_4 = ((fVar17 - fVar32) * (float)uVar30 + fVar32 * fVar16) * fVar33;
        if (bVar1) {
          uVar30 = *(undefined8 *)param_2;
          fVar16 = fVar24 * ((float)*(undefined8 *)(param_1 + uVar12 + 0x401) -
                            param_1[uVar10 + 0x401]) + param_1[uVar10 + 0x401];
          param_1[(int)fVar15 + 0x401] = fVar20 * fVar16 + (float)uVar30;
          *param_5 = ((float)uVar30 * (fVar17 - fVar32) + fVar32 * fVar16) * fVar33;
        }
      }
      else {
        fVar24 = fVar24 - fVar16;
        uVar30 = *(undefined8 *)param_2;
        uVar18 = (int)fVar24 - (uint)(fVar24 < (float)(int)fVar24);
        uVar10 = uVar18 & 0x3ff;
        uVar12 = uVar10 + 1 & 0x3ff;
        fVar24 = fVar24 - (float)(int)uVar18;
        fVar16 = (param_1[uVar12 + 1] - param_1[uVar10 + 1]) * fVar24 + param_1[uVar10 + 1];
        (param_1 + (int)fVar15)[1] = fVar20 * fVar16 + (float)uVar30;
        *param_4 = ((float)uVar30 * (fVar17 - fVar32) + fVar32 * fVar16) * fVar33;
        if (bVar1) {
          fVar16 = param_1[uVar10 + 0x401];
          fVar26 = (float)*(undefined8 *)(param_1 + uVar12 + 0x401);
          fVar25 = (float)*puVar13;
LAB_ram_40072d4e:
          fVar16 = fVar24 * (fVar26 - fVar16) + fVar16;
          (param_1 + (int)fVar15)[0x401] = fVar20 * fVar16 + fVar25;
          *param_5 = ((fVar17 - fVar32) * fVar25 + fVar32 * fVar16) * fVar33;
        }
      }
      iVar11 = iVar11 + 1;
      fVar15 = (float)((int)fVar15 + 1U & 0x3ff);
      param_2 = param_2 + 1;
      param_5 = param_5 + 1;
      puVar13 = (undefined8 *)((int)puVar13 + 4);
      param_4 = param_4 + 1;
      if (param_6 == iVar11) {
        for (fVar34 = (float)param_6 * fVar28 + fVar34; fVar17 <= fVar34; fVar34 = fVar34 - fVar17)
        {
        }
        param_1[0x801] = fVar15;
        *(ulonglong *)(param_1 + 0x802) = (ulonglong)(uint)fVar34;
        return;
      }
    } while( true );
  }
  fVar3 = *param_1;
  fVar28 = DAT_ram_4009f918;
  fVar34 = DAT_ram_40099f7c;
  fVar23 = DAT_ram_4009f914;
  fVar15 = DAT_ram_4009f090;
  fVar32 = DAT_ram_4009f908;
  fVar31 = DAT_ram_4009f904;
  fVar22 = DAT_ram_4009f068;
  fVar33 = DAT_ram_4009f91c;
  fVar20 = DAT_ram_4009f910;
  fVar29 = in_register_00000100;
  if (param_7 != (float *)0x0) {
    fVar29 = *param_7;
    fVar23 = DAT_ram_4009f900;
    fVar33 = DAT_ram_40099f6c;
    if ((0.0 <= fVar29) &&
       (fVar23 = DAT_ram_4009f940, fVar33 = DAT_ram_40099f7c, fVar29 <= DAT_ram_4009672c)) {
      fVar33 = fVar29 * DAT_ram_4009b154 + DAT_ram_40099f6c;
      fVar29 = (float)FUN_ram_40000844(DAT_ram_4009a370,fVar33 * DAT_ram_4009f94c + DAT_ram_4009f950
                                      );
      fVar23 = fVar29 * DAT_ram_4009f090;
    }
    fVar15 = DAT_ram_4009f090;
    fVar34 = DAT_ram_40099f7c;
    fVar29 = param_7[1];
    if (fVar29 < 0.0) {
      fVar32 = 0.0;
      fVar20 = 0.0;
    }
    else {
      fVar32 = DAT_ram_40099f2c;
      fVar20 = DAT_ram_40099f7c;
      if (fVar29 <= fVar17) {
        fVar32 = fVar29 * DAT_ram_40099f2c;
        fVar20 = fVar29 * DAT_ram_40099f7c;
      }
    }
    fVar29 = param_7[2];
    if (fVar29 < 0.0) {
      fVar31 = 0.0;
    }
    else {
      fVar31 = DAT_ram_4009f938;
      if (fVar29 <= fVar17) {
        fVar31 = fVar29 * DAT_ram_4009f938;
      }
    }
    fVar16 = param_7[3];
    fVar28 = fVar17;
    fVar22 = 0.0;
    fVar29 = in_register_00000100;
    if ((0.0 <= fVar16) &&
       (fVar28 = DAT_ram_4009f920, fVar22 = (float)DAT_ram_4009675c, fVar16 <= fVar17)) {
      fVar16 = fVar16 * DAT_ram_4009f5ec;
      fVar28 = (float)FUN_ram_40000712(fVar16);
      fVar17 = (float)FUN_ram_400009d2(fVar16);
      fVar22 = fVar17 * (float)DAT_ram_4009675c;
    }
  }
  fVar17 = param_1[0x802];
  fVar16 = param_1[0x801];
  fVar23 = fVar23 / fVar3;
  if ((fVar17 == 0.0) && (fVar16 == 0.0)) {
    fVar24 = DAT_ram_4009f928;
    fVar25 = DAT_ram_4009f924;
    if (fVar33 <= DAT_ram_4009f8d8) goto LAB_ram_40072a54;
    if (fVar33 < (float)PTR_entry_ram_40096740) {
      fVar17 = fVar29;
    }
  }
  fVar24 = (float)FUN_ram_400009d2(fVar17);
  fVar25 = (float)FUN_ram_40000712(fVar17);
  fVar29 = fVar17;
LAB_ram_40072a54:
  fVar26 = (float)FUN_ram_400009d2(fVar23);
  fVar27 = (float)FUN_ram_40000712(fVar23);
  fVar33 = DAT_ram_4009f0ac;
  fVar17 = DAT_ram_40099f38;
  iVar11 = 0;
  do {
    fVar2 = (float)(uint)fVar16;
    uVar30 = *(undefined8 *)param_2;
    fVar7 = -(fVar3 * (fVar24 * fVar20 + fVar17) * fVar33) + fVar2;
    fVar8 = -(fVar3 * (fVar25 * fVar20 + fVar17) * fVar33) + fVar2;
    uVar10 = (int)fVar7 - (uint)(fVar7 < (float)(int)fVar7);
    uVar12 = (int)fVar8 - (uint)(fVar8 < (float)(int)fVar8);
    uVar19 = uVar10 & 0x3ff;
    uVar18 = uVar12 & 0x3ff;
    fVar21 = param_1[uVar19 + 1];
    fVar4 = param_1[uVar18 + 1];
    fVar5 = param_1[(uVar19 + 1 & 0x3ff) + 1];
    fVar6 = param_1[(uVar18 + 1 & 0x3ff) + 1];
    param_1[(int)fVar16 + 1] = param_1[0x803] * in_register_00000100 + (float)uVar30;
    fVar21 = (fVar7 - (float)(int)uVar10) * (fVar5 - fVar21) + fVar21;
    param_1[0x803] = fVar21;
    *(float *)((int)param_4 + iVar11) =
         (float)uVar30 * fVar28 +
         (fVar21 + (fVar8 - (float)(int)uVar12) * (fVar6 - fVar4) + fVar4) * fVar22;
    if ((param_9 == '\0') || (param_3 == (undefined8 *)0x0)) {
      fVar21 = *param_2;
    }
    else {
      fVar21 = *(float *)((int)param_3 + iVar11);
    }
    fVar4 = -(fVar3 * (fVar25 * fVar32 + fVar34) * fVar33) + fVar2;
    fVar2 = -(fVar3 * (fVar24 * fVar32 + fVar34) * fVar33) + fVar2;
    uVar12 = (int)fVar4 - (uint)(fVar4 < (float)(int)fVar4);
    uVar19 = uVar12 & 0x3ff;
    uVar10 = (int)fVar2 - (uint)(fVar2 < (float)(int)fVar2);
    uVar18 = uVar10 & 0x3ff;
    fVar5 = (fVar4 - (float)(int)uVar12) *
            ((float)*(undefined8 *)(param_1 + (uVar19 + 1 & 0x3ff) + 0x401) -
            param_1[uVar19 + 0x401]) + param_1[uVar19 + 0x401];
    fVar4 = param_1[uVar18 + 0x401];
    uVar30 = *(undefined8 *)(param_1 + (uVar18 + 1 & 0x3ff) + 0x401);
    param_1[(int)fVar16 + 0x401] = param_1[0x804] * fVar31 + fVar21;
    param_1[0x804] = fVar5;
    if (param_5 != (float *)0x0) {
      *(ulonglong *)((int)param_5 + iVar11) =
           (ulonglong)
           (uint)(fVar21 * fVar28 +
                 ((fVar2 - (float)(int)uVar10) * ((float)uVar30 - fVar4) + fVar4 + fVar5) * fVar22);
    }
    fVar2 = fVar26 * fVar24;
    iVar11 = iVar11 + 4;
    fVar16 = (float)((int)fVar16 + 1U & 0x3ff);
    fVar24 = fVar27 * fVar24 + fVar26 * fVar25;
    fVar25 = fVar27 * fVar25 - fVar2;
    param_2 = param_2 + 1;
  } while (iVar11 != param_6 << 2);
  for (fVar29 = fVar23 * (float)param_6 + fVar29; fVar15 <= fVar29; fVar29 = fVar29 - fVar15) {
  }
  for (; fVar29 < 0.0; fVar29 = fVar29 + fVar15) {
  }
  param_1[0x801] = fVar16;
  *(ulonglong *)(param_1 + 0x802) = (ulonglong)(uint)fVar29;
  return;
}

