/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40072000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40072280.
 * REA evidence: ev_e591d52d5e0f7e9db8b94a15cdd57e9257490fc61014d89f2b61a0ff00178d1b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40072280(int param_1)

{
  if (param_1 != 0) {
    memset(param_1 + 4,0,0x2000);
    *(undefined1 *)(param_1 + 0x200c) = 0;
    *(undefined1 *)(param_1 + 0x200d) = 0;
    *(undefined1 *)(param_1 + 0x200e) = 0;
    *(undefined1 *)(param_1 + 0x200f) = 0;
    *(undefined1 *)(param_1 + 0x2010) = 0;
    *(undefined1 *)(param_1 + 0x2011) = 0;
    *(undefined1 *)(param_1 + 0x2012) = 0;
    *(undefined1 *)(param_1 + 0x2013) = 0;
    *(undefined4 *)(param_1 + 0x2004) = 0;
    *(undefined4 *)(param_1 + 0x2008) = 0;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400722d4.
 * REA evidence: ev_63a1b5f26f504d5ff67861fe937f0d121905690d9f2dd5b8d8f565c01f408279
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400722d4(float param_1,ulonglong *param_2)

{
  if (param_2 != (ulonglong *)0x0) {
    memset(param_2,0,0x2018);
    if (param_1 <= DAT_ram_40094e80) {
      param_1 = DAT_ram_40094664;
    }
    *param_2 = (ulonglong)(uint)param_1;
    *(undefined1 *)((int)param_2 + 0x2014) = 0xff;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4007231e.
 * REA evidence: ev_a5f5ca85919d9c51810e3a34905afbf37422b2e4d7fad63ee6fb06294e3566e7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007231e(ulonglong *param_1,int param_2,int param_3)

{
  if (param_1 != (ulonglong *)0x0) {
    memset(param_1,0,param_2 << 2);
    if (param_3 == 0x11) {
      if ((((param_2 != 0) && (*param_1 = (ulonglong)DAT_ram_4009a7c0, param_2 != 1)) &&
          (*(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40096018, param_2 != 2)) &&
         (((param_1[1] = (ulonglong)DAT_ram_4009a7c4, param_2 != 3 &&
           (*(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_4009a7c8, param_2 != 4)) &&
          ((*(undefined4 *)(param_1 + 2) = 0, param_2 != 5 &&
           ((*(ulonglong *)((int)param_1 + 0x14) = (ulonglong)DAT_ram_4009a110, param_2 != 6 &&
            (param_1[3] = (ulonglong)DAT_ram_4009a7cc, param_2 != 7)))))))) {
        *(ulonglong *)((int)param_1 + 0x1c) = (ulonglong)DAT_ram_4009a7d0;
      }
    }
    else if ((((param_3 == 0xb) && (param_2 != 0)) &&
             (*param_1 = (ulonglong)DAT_ram_40099f8c, param_2 != 1)) &&
            ((*(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009605c, param_2 != 2 &&
             (param_1[1] = (ulonglong)DAT_ram_40094ee8, param_2 != 3)))) {
      *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_40094634;
    }
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4007240c.
 * REA evidence: ev_5e362dd8eb968386afcae7f0bb44ec3b4c735f14bf82a434fef5b0541f9d5b79
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007240c(float *param_1,float *param_2,undefined8 *param_3,float *param_4,
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
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  char cVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
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
    memset(param_1 + 1,0,0x2000);
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
    cVar13 = '\x01';
    if (param_5 == (float *)0x0) {
      cVar13 = param_9;
    }
    *param_10 = cVar13;
  }
  fVar32 = DAT_ram_4009a81c;
  fVar3 = DAT_ram_4009a818;
  fVar22 = DAT_ram_40094e88;
  fVar28 = DAT_ram_40094634;
  fVar16 = DAT_ram_40094604;
  if (param_8 != 0xb) {
    if (param_8 != 0x11) {
      return;
    }
    fVar33 = param_1[0x802];
    fVar14 = param_1[0x801];
    if (param_7 == (float *)0x0) {
      fVar27 = DAT_ram_4009a828 / (float)*(undefined8 *)param_1;
      fVar21 = DAT_ram_4009a808;
      fVar19 = DAT_ram_4009a804;
      fVar31 = DAT_ram_4009a110;
      fVar30 = DAT_ram_4009a7d0;
    }
    else {
      fVar31 = *param_7;
      fVar27 = DAT_ram_40094ec4;
      if ((0.0 <= fVar31) && (fVar27 = DAT_ram_40094e90, fVar31 <= DAT_ram_40094604)) {
        fVar27 = fVar31 * DAT_ram_40096030 + DAT_ram_40094ec4;
      }
      fVar31 = param_7[1];
      fVar21 = 0.0;
      if ((0.0 <= fVar31) && (fVar21 = DAT_ram_4009a7ac, fVar31 <= DAT_ram_40094604)) {
        fVar21 = fVar31 * DAT_ram_4009a7ac + 0.0;
      }
      fVar31 = param_7[3];
      fVar19 = DAT_ram_4009a61c;
      if ((0.0 <= fVar31) && (fVar19 = DAT_ram_40094608, fVar31 <= DAT_ram_40094604)) {
        fVar19 = fVar31 * DAT_ram_4009a64c + DAT_ram_4009a61c;
      }
      fVar31 = param_7[5];
      if (fVar31 < 0.0) {
        fVar31 = 0.0;
      }
      else if (DAT_ram_40094604 < fVar31) {
        fVar31 = DAT_ram_40094604;
      }
      fVar27 = fVar27 / (float)*(undefined8 *)param_1;
      fVar30 = param_7[7];
      if ((fVar30 < 0.0) || (DAT_ram_40094604 < fVar30)) {
        fVar30 = 0.0;
      }
      else if (DAT_ram_40094604 <= fVar30) {
        fVar30 = 0.0;
      }
    }
    bVar1 = param_5 != (float *)0x0;
    iVar10 = 0;
    puVar12 = param_3;
    do {
      fVar15 = (float)iVar10 * fVar27 + fVar30 + fVar33;
      if (fVar16 <= fVar15) {
        fVar15 = fVar15 - fVar16;
      }
      if (fVar16 <= fVar15) {
        fVar15 = fVar15 - fVar16;
      }
      fVar23 = (float)(uint)fVar14;
      fVar15 = fVar3 / ((-(ABS(fVar15 - fVar28) * fVar22) + fVar16) * fVar21 + fVar16);
      if (param_3 == (undefined8 *)0x0) {
        if (param_9 == '\0') {
          fVar23 = fVar23 - fVar15;
          uVar29 = *(undefined8 *)param_2;
          uVar17 = (int)fVar23 - (uint)(fVar23 < (float)(int)fVar23);
          uVar9 = uVar17 & 0x3ff;
          uVar11 = uVar9 + 1 & 0x3ff;
          fVar23 = fVar23 - (float)(int)uVar17;
          fVar15 = (param_1[uVar11 + 1] - param_1[uVar9 + 1]) * fVar23 + param_1[uVar9 + 1];
          param_1[(int)fVar14 + 1] = fVar19 * fVar15 + (float)uVar29;
          *param_4 = ((fVar16 - fVar31) * (float)uVar29 + fVar31 * fVar15) * fVar32;
          if (bVar1) {
            uVar29 = *(undefined8 *)param_2;
            fVar15 = ((float)*(undefined8 *)(param_1 + uVar11 + 0x401) - param_1[uVar9 + 0x401]) *
                     fVar23 + param_1[uVar9 + 0x401];
            param_1[(int)fVar14 + 0x401] = fVar15 * fVar19 + (float)uVar29;
            *param_5 = ((float)uVar29 * (fVar16 - fVar31) + fVar31 * fVar15) * fVar32;
          }
        }
        else {
          fVar23 = fVar23 - fVar15;
          uVar29 = *(undefined8 *)param_2;
          uVar17 = (int)fVar23 - (uint)(fVar23 < (float)(int)fVar23);
          uVar9 = uVar17 & 0x3ff;
          uVar11 = uVar9 + 1 & 0x3ff;
          fVar23 = fVar23 - (float)(int)uVar17;
          fVar15 = (param_1[uVar11 + 1] - param_1[uVar9 + 1]) * fVar23 + param_1[uVar9 + 1];
          (param_1 + (int)fVar14)[1] = fVar19 * fVar15 + (float)uVar29;
          *param_4 = ((fVar16 - fVar31) * (float)uVar29 + fVar31 * fVar15) * fVar32;
          if (bVar1) {
            fVar15 = param_1[uVar9 + 0x401];
            fVar25 = (float)*(undefined8 *)(param_1 + uVar11 + 0x401);
            fVar24 = (float)*(undefined8 *)param_2;
            goto LAB_ram_400729d0;
          }
        }
      }
      else if (param_9 == '\0') {
        fVar23 = fVar23 - fVar15;
        uVar29 = *(undefined8 *)param_2;
        uVar17 = (int)fVar23 - (uint)(fVar23 < (float)(int)fVar23);
        uVar9 = uVar17 & 0x3ff;
        uVar11 = uVar9 + 1 & 0x3ff;
        fVar23 = fVar23 - (float)(int)uVar17;
        fVar15 = (param_1[uVar11 + 1] - param_1[uVar9 + 1]) * fVar23 + param_1[uVar9 + 1];
        param_1[(int)fVar14 + 1] = fVar19 * fVar15 + (float)uVar29;
        *param_4 = ((fVar16 - fVar31) * (float)uVar29 + fVar31 * fVar15) * fVar32;
        if (bVar1) {
          uVar29 = *(undefined8 *)param_2;
          fVar15 = fVar23 * ((float)*(undefined8 *)(param_1 + uVar11 + 0x401) -
                            param_1[uVar9 + 0x401]) + param_1[uVar9 + 0x401];
          param_1[(int)fVar14 + 0x401] = fVar19 * fVar15 + (float)uVar29;
          *param_5 = ((float)uVar29 * (fVar16 - fVar31) + fVar31 * fVar15) * fVar32;
        }
      }
      else {
        fVar23 = fVar23 - fVar15;
        uVar29 = *(undefined8 *)param_2;
        uVar17 = (int)fVar23 - (uint)(fVar23 < (float)(int)fVar23);
        uVar9 = uVar17 & 0x3ff;
        uVar11 = uVar9 + 1 & 0x3ff;
        fVar23 = fVar23 - (float)(int)uVar17;
        fVar15 = (param_1[uVar11 + 1] - param_1[uVar9 + 1]) * fVar23 + param_1[uVar9 + 1];
        (param_1 + (int)fVar14)[1] = fVar19 * fVar15 + (float)uVar29;
        *param_4 = ((fVar16 - fVar31) * (float)uVar29 + fVar31 * fVar15) * fVar32;
        if (bVar1) {
          fVar15 = param_1[uVar9 + 0x401];
          fVar25 = (float)*(undefined8 *)(param_1 + uVar11 + 0x401);
          fVar24 = (float)*puVar12;
LAB_ram_400729d0:
          fVar15 = fVar23 * (fVar25 - fVar15) + fVar15;
          (param_1 + (int)fVar14)[0x401] = fVar19 * fVar15 + fVar24;
          *param_5 = ((fVar16 - fVar31) * fVar24 + fVar31 * fVar15) * fVar32;
        }
      }
      iVar10 = iVar10 + 1;
      fVar14 = (float)((int)fVar14 + 1U & 0x3ff);
      param_2 = param_2 + 1;
      param_5 = param_5 + 1;
      puVar12 = (undefined8 *)((int)puVar12 + 4);
      param_4 = param_4 + 1;
      if (param_6 == iVar10) {
        for (fVar33 = (float)param_6 * fVar27 + fVar33; fVar16 <= fVar33; fVar33 = fVar33 - fVar16)
        {
        }
        param_1[0x801] = fVar14;
        *(ulonglong *)(param_1 + 0x802) = (ulonglong)(uint)fVar33;
        return;
      }
    } while( true );
  }
  fVar3 = *param_1;
  fVar27 = DAT_ram_4009a7ec;
  fVar33 = DAT_ram_40094ed4;
  fVar22 = DAT_ram_4009a7e8;
  fVar14 = DAT_ram_40099f94;
  fVar31 = DAT_ram_4009a7dc;
  fVar30 = DAT_ram_4009a7d8;
  fVar21 = DAT_ram_40099f64;
  fVar32 = DAT_ram_4009a7f0;
  fVar19 = DAT_ram_4009a7e4;
  fVar28 = in_register_00000100;
  if (param_7 != (float *)0x0) {
    fVar28 = *param_7;
    fVar22 = DAT_ram_4009a7d4;
    fVar32 = DAT_ram_40094ec4;
    if ((0.0 <= fVar28) &&
       (fVar22 = DAT_ram_4009a814, fVar32 = DAT_ram_40094ed4, fVar28 <= DAT_ram_40094604)) {
      fVar32 = fVar28 * DAT_ram_4009602c + DAT_ram_40094ec4;
      fVar28 = (float)FUN_ram_40000844(DAT_ram_400952c0,fVar32 * DAT_ram_4009a820 + DAT_ram_4009a824
                                      );
      fVar22 = fVar28 * DAT_ram_40099f94;
    }
    fVar14 = DAT_ram_40099f94;
    fVar33 = DAT_ram_40094ed4;
    fVar28 = param_7[1];
    if (fVar28 < 0.0) {
      fVar31 = 0.0;
      fVar19 = 0.0;
    }
    else {
      fVar31 = DAT_ram_40094e84;
      fVar19 = DAT_ram_40094ed4;
      if (fVar28 <= fVar16) {
        fVar31 = fVar28 * DAT_ram_40094e84;
        fVar19 = fVar28 * DAT_ram_40094ed4;
      }
    }
    fVar28 = param_7[2];
    if (fVar28 < 0.0) {
      fVar30 = 0.0;
    }
    else {
      fVar30 = DAT_ram_4009a80c;
      if (fVar28 <= fVar16) {
        fVar30 = fVar28 * DAT_ram_4009a80c;
      }
    }
    fVar15 = param_7[3];
    fVar27 = fVar16;
    fVar21 = 0.0;
    fVar28 = in_register_00000100;
    if ((0.0 <= fVar15) && (fVar27 = DAT_ram_4009a7f4, fVar21 = DAT_ram_40094634, fVar15 <= fVar16))
    {
      fVar15 = fVar15 * DAT_ram_4009a4bc._4_4_;
      fVar27 = (float)FUN_ram_40000712(fVar15);
      fVar16 = (float)FUN_ram_400009d2(fVar15);
      fVar21 = fVar16 * DAT_ram_40094634;
    }
  }
  fVar16 = param_1[0x802];
  fVar15 = param_1[0x801];
  fVar22 = fVar22 / fVar3;
  if ((fVar16 == 0.0) && (fVar15 == 0.0)) {
    fVar23 = DAT_ram_4009a7fc;
    fVar24 = DAT_ram_4009a7f8;
    if (fVar32 <= DAT_ram_4009a7ac) goto LAB_ram_400726dc;
    if (fVar32 < (float)PTR_entry_ram_40094618) {
      fVar16 = fVar28;
    }
  }
  fVar23 = (float)FUN_ram_400009d2(fVar16);
  fVar24 = (float)FUN_ram_40000712(fVar16);
  fVar28 = fVar16;
LAB_ram_400726dc:
  fVar25 = (float)FUN_ram_400009d2(fVar22);
  fVar26 = (float)FUN_ram_40000712(fVar22);
  fVar32 = DAT_ram_40099fa4;
  fVar16 = DAT_ram_40094e90;
  iVar10 = 0;
  do {
    fVar2 = (float)(uint)fVar15;
    uVar29 = *(undefined8 *)param_2;
    fVar7 = -(fVar3 * (fVar23 * fVar19 + fVar16) * fVar32) + fVar2;
    fVar8 = -(fVar3 * (fVar24 * fVar19 + fVar16) * fVar32) + fVar2;
    uVar9 = (int)fVar7 - (uint)(fVar7 < (float)(int)fVar7);
    uVar11 = (int)fVar8 - (uint)(fVar8 < (float)(int)fVar8);
    uVar18 = uVar9 & 0x3ff;
    uVar17 = uVar11 & 0x3ff;
    fVar20 = param_1[uVar18 + 1];
    fVar4 = param_1[uVar17 + 1];
    fVar5 = param_1[(uVar18 + 1 & 0x3ff) + 1];
    fVar6 = param_1[(uVar17 + 1 & 0x3ff) + 1];
    param_1[(int)fVar15 + 1] = param_1[0x803] * in_register_00000100 + (float)uVar29;
    fVar20 = (fVar7 - (float)(int)uVar9) * (fVar5 - fVar20) + fVar20;
    *(ulonglong *)(param_1 + 0x803) = (ulonglong)(uint)fVar20;
    *(float *)((int)param_4 + iVar10) =
         (float)uVar29 * fVar27 +
         (fVar20 + (fVar8 - (float)(int)uVar11) * (fVar6 - fVar4) + fVar4) * fVar21;
    if ((param_9 == '\0') || (param_3 == (undefined8 *)0x0)) {
      fVar20 = *param_2;
    }
    else {
      fVar20 = *(float *)((int)param_3 + iVar10);
    }
    fVar4 = -(fVar3 * (fVar24 * fVar31 + fVar33) * fVar32) + fVar2;
    fVar2 = -(fVar3 * (fVar23 * fVar31 + fVar33) * fVar32) + fVar2;
    uVar17 = (int)fVar4 - (uint)(fVar4 < (float)(int)fVar4);
    uVar18 = uVar17 & 0x3ff;
    uVar9 = (int)fVar2 - (uint)(fVar2 < (float)(int)fVar2);
    uVar11 = uVar9 & 0x3ff;
    fVar5 = (fVar4 - (float)(int)uVar17) *
            ((float)*(undefined8 *)(param_1 + (uVar18 + 1 & 0x3ff) + 0x401) -
            param_1[uVar18 + 0x401]) + param_1[uVar18 + 0x401];
    fVar4 = param_1[uVar11 + 0x401];
    uVar29 = *(undefined8 *)(param_1 + (uVar11 + 1 & 0x3ff) + 0x401);
    param_1[(int)fVar15 + 0x401] = (float)*(undefined8 *)(param_1 + 0x804) * fVar30 + fVar20;
    *(ulonglong *)(param_1 + 0x804) = (ulonglong)(uint)fVar5;
    if (param_5 != (float *)0x0) {
      *(ulonglong *)((int)param_5 + iVar10) =
           (ulonglong)
           (uint)(fVar20 * fVar27 +
                 ((fVar2 - (float)(int)uVar9) * ((float)uVar29 - fVar4) + fVar4 + fVar5) * fVar21);
    }
    fVar2 = fVar25 * fVar23;
    iVar10 = iVar10 + 4;
    fVar15 = (float)((int)fVar15 + 1U & 0x3ff);
    fVar23 = fVar26 * fVar23 + fVar25 * fVar24;
    fVar24 = fVar26 * fVar24 - fVar2;
    param_2 = param_2 + 1;
  } while (iVar10 != param_6 << 2);
  for (fVar28 = fVar22 * (float)param_6 + fVar28; fVar14 <= fVar28; fVar28 = fVar28 - fVar14) {
  }
  for (; fVar28 < 0.0; fVar28 = fVar28 + fVar14) {
  }
  param_1[0x801] = fVar15;
  *(ulonglong *)(param_1 + 0x802) = (ulonglong)(uint)fVar28;
  return;
}


/* NanoCore 1.11, address 0x40072df0.
 * REA evidence: ev_9f88c27d9bc5f6734fc110e11c3db3043c5feaa83efdd5c8d8ac6916f1252e7e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40073514) */
/* WARNING: Removing unreachable block (ram,0x40073528) */
/* WARNING: Removing unreachable block (ram,0x4007351e) */

void FUN_ram_40072df0(int param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_80 [2];
  undefined *puStack_78;
  float afStack_74 [2];
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (param_1 != 0) {
    fVar10 = (float)param_3[1];
    fVar3 = 0.0;
    if ((0.0 <= fVar10) && (fVar3 = DAT_ram_40094604, fVar10 <= DAT_ram_40094604)) {
      fVar3 = fVar10;
    }
    fVar2 = (float)*(undefined8 *)((int)param_3 + 0xc);
    fVar7 = 0.0;
    if ((0.0 <= fVar2) && (fVar7 = DAT_ram_40094604, fVar2 <= DAT_ram_40094604)) {
      fVar7 = fVar2;
    }
    fVar6 = (float)*param_3;
    local_80[1] = DAT_ram_40094634;
    if ((0.0 <= fVar6) && (local_80[1] = DAT_ram_40095280, fVar6 <= DAT_ram_40094604)) {
      local_80[1] = fVar6 * DAT_ram_40096064 + DAT_ram_40094634;
    }
    fVar8 = (float)*(undefined8 *)((int)param_3 + 4);
    local_80[0] = 0.0;
    if ((0.0 <= fVar8) && (local_80[0] = DAT_ram_400952d4, fVar8 <= DAT_ram_40094604)) {
      local_80[0] = fVar8 * DAT_ram_400952d4 + 0.0;
    }
    iVar1 = param_1 + 0x43c;
    puStack_78 = (undefined *)fVar3;
    if (param_2 == 5) {
      fVar3 = 0.0;
      if ((0.0 <= fVar6) && (fVar3 = DAT_ram_40095280, fVar6 <= DAT_ram_40094604)) {
        fVar3 = fVar6 * DAT_ram_40095280 + 0.0;
      }
      fVar10 = 0.0;
      if ((0.0 <= fVar8) && (fVar10 = DAT_ram_400952c8, fVar8 <= DAT_ram_40094604)) {
        fVar10 = fVar8 * DAT_ram_400952c8 + 0.0;
      }
      pfVar4 = local_80;
      pfVar5 = (float *)(param_1 + 0x440);
      do {
        fVar8 = pfVar5[2];
        fVar2 = pfVar5[3];
        fVar6 = *pfVar5;
        pfVar4[1] = pfVar5[1];
        pfVar4[2] = fVar8;
        *pfVar4 = fVar6;
        pfVar4[3] = fVar2;
        pfVar5 = pfVar5 + 4;
        pfVar4 = pfVar4 + 4;
      } while (pfVar5 != (float *)(param_1 + 0x480));
      fStack_6c = (float)CONCAT31(fStack_6c._1_3_,1);
      afStack_74[0] = DAT_ram_40094658;
      afStack_74[1] = (float)DAT_ram_4009a89c;
      fStack_68 = DAT_ram_40094604;
      uStack_64 = 0;
      fStack_60 = (float)CONCAT22(fStack_60._2_2_,0x100);
      fStack_5c = DAT_ram_400952d0;
      if ((0.0 <= fVar7) && (fStack_5c = DAT_ram_400952cc, fVar7 <= DAT_ram_40094604)) {
        fStack_5c = fVar7 * DAT_ram_40096010 + DAT_ram_400952d0;
      }
      uStack_58 = DAT_ram_40094ef4;
      uStack_54 = DAT_ram_40094e90;
      uStack_50 = DAT_ram_4009a8ac;
      fStack_4c = DAT_ram_400952d8;
      fStack_48 = (float)DAT_ram_4009a1fc;
      fStack_44 = DAT_ram_400952c8;
      local_80[0] = fVar3;
      local_80[1] = fVar10;
      FUN_ram_40083120();
    }
    else {
      switch(param_2) {
      case 0:
        FUN_ram_400819a2();
        FUN_ram_40081a2a(local_80[0],iVar1);
        FUN_ram_400819ce(fVar3,iVar1);
        FUN_ram_40081a54(fVar7 * (float)DAT_ram_40099f5c,DAT_ram_4009a8a0,iVar1);
        return;
      case 1:
        afStack_74[0] = fVar7 * DAT_ram_40094658;
        afStack_74[1] = (float)DAT_ram_4009a89c;
        fStack_6c._1_3_ = (undefined3)((uint)*(undefined4 *)(param_1 + 0x454) >> 8);
        fStack_6c = (float)CONCAT31(fStack_6c._1_3_,1);
        fStack_68 = DAT_ram_40094604;
        uStack_64 = *(uint *)(param_1 + 0x45c) & 0xffffff00;
        puStack_78 = (undefined *)local_80[0];
        local_80[0] = local_80[1];
        local_80[1] = fVar3;
        FUN_ram_4007f0f8(iVar1,local_80);
        break;
      case 2:
        afStack_74[1] = *(float *)(param_1 + 0x450);
        fStack_6c = *(float *)(param_1 + 0x454);
        fVar10 = DAT_ram_40094608;
        if ((((0.0 <= fVar3) && (fVar10 = DAT_ram_4009a804, fVar3 <= DAT_ram_40094604)) &&
            (fVar3 = -(fVar3 * DAT_ram_4009a7ac) + DAT_ram_40094608, fVar10 = DAT_ram_40094ec4,
            DAT_ram_40094ec4 <= fVar3)) && (fVar10 = fVar3, DAT_ram_40094608 < fVar3)) {
          fVar10 = DAT_ram_40094608;
        }
        puStack_78 = (undefined *)DAT_ram_4009a8a4;
        afStack_74[0] = 0.0;
        if ((0.0 <= fVar7) && (afStack_74[0] = DAT_ram_40094608, fVar7 <= DAT_ram_40094604)) {
          afStack_74[0] = fVar7 * DAT_ram_40094608;
        }
        fStack_68 = (float)DAT_ram_40096018;
        uStack_64 = DAT_ram_4009a8a8;
        fStack_60 = DAT_ram_40094604;
        uStack_58 = *(uint *)(param_1 + 0x468) & 0xffffff00;
        fStack_5c = local_80[0];
        local_80[0] = local_80[1];
        local_80[1] = fVar10;
        FUN_ram_4007cbb6(iVar1,local_80);
        break;
      case 3:
        afStack_74[0] = DAT_ram_40094604;
        if (fVar7 < 0.0) {
          afStack_74[1] = 0.0;
          fStack_6c = DAT_ram_40094ec4;
        }
        else if (DAT_ram_40094604 < fVar7) {
          afStack_74[1] = (float)DAT_ram_40099f5c;
          fStack_6c = DAT_ram_40099f88;
        }
        else {
          afStack_74[1] = fVar7 * (float)DAT_ram_40099f5c;
          fStack_6c = fVar7 * DAT_ram_4009a110 + DAT_ram_40094ec4;
        }
        fStack_68 = (float)(*(uint *)(param_1 + 0x458) & 0xffffff00);
        FUN_ram_4007a8ae(iVar1,local_80);
        break;
      default:
        local_80[0] = DAT_ram_40094604;
        if ((0.0 <= fVar6) && (local_80[0] = DAT_ram_40094658, fVar6 <= DAT_ram_40094604)) {
          local_80[0] = fVar6 * DAT_ram_400954bc + DAT_ram_40094604;
        }
        if (fVar8 < 0.0) {
          local_80[1] = 0.0;
        }
        else {
          local_80[1] = fVar8;
          if (DAT_ram_40094604 < fVar8) {
            local_80[1] = DAT_ram_40094604;
          }
        }
        if (fVar10 < 0.0) {
          puStack_78 = (undefined *)0x0;
        }
        else {
          puStack_78 = (undefined *)fVar10;
          if (DAT_ram_40094604 < fVar10) {
            puStack_78 = (undefined *)DAT_ram_40094604;
          }
        }
        afStack_74[0] = DAT_ram_40094e8c;
        if ((0.0 <= fVar2) && (afStack_74[0] = DAT_ram_400952c4, fVar2 <= DAT_ram_40094604)) {
          afStack_74[0] = fVar2 * DAT_ram_40096068 + DAT_ram_40094e8c;
        }
        FUN_ram_4005df08(iVar1,local_80);
        break;
      case 7:
        pfVar4 = local_80;
        pfVar5 = (float *)(param_1 + 0x440);
        do {
          fVar9 = pfVar5[2];
          fVar3 = pfVar5[3];
          fVar7 = *pfVar5;
          pfVar4[1] = pfVar5[1];
          pfVar4[2] = fVar9;
          *pfVar4 = fVar7;
          pfVar4[3] = fVar3;
          pfVar5 = pfVar5 + 4;
          pfVar4 = pfVar4 + 4;
        } while (pfVar5 != (float *)(param_1 + 0x490));
        if (fVar6 < 0.0) {
          fVar6 = 0.0;
        }
        else if (DAT_ram_40094604 < fVar6) {
          fVar6 = DAT_ram_40094604;
        }
        if (fVar8 < 0.0) {
          fVar8 = 0.0;
        }
        else if (DAT_ram_40094604 < fVar8) {
          fVar8 = DAT_ram_40094604;
        }
        if (fVar10 < 0.0) {
          fVar10 = 0.0;
        }
        else if (DAT_ram_40094604 < fVar10) {
          fVar10 = DAT_ram_40094604;
        }
        if (fVar2 < 0.0) {
          fVar2 = 0.0;
        }
        else if (DAT_ram_40094604 < fVar2) {
          fVar2 = DAT_ram_40094604;
        }
        if (fVar8 < 0.0) {
          local_80[1] = DAT_ram_40094ed4;
          puStack_78 = PTR_entry_ram_40094618;
        }
        else if (DAT_ram_40094604 < fVar8) {
          local_80[1] = DAT_ram_400952d4;
          puStack_78 = DAT_ram_40094ec8;
        }
        else {
          local_80[1] = fVar8 * DAT_ram_4009606c + DAT_ram_40094ed4;
          puStack_78 = (undefined *)(fVar8 * DAT_ram_4009a8b0 + (float)PTR_entry_ram_40094618);
        }
        fStack_6c = 0.0;
        if ((0.0 <= fVar6) && (fStack_6c = DAT_ram_40095280, fVar6 <= DAT_ram_40094604)) {
          fStack_6c = fVar6 * DAT_ram_40095280 + 0.0;
        }
        local_80[0] = DAT_ram_400952dc;
        if ((0.0 <= fVar10) && (local_80[0] = DAT_ram_400952d8, fVar10 <= DAT_ram_40094604)) {
          local_80[0] = fVar10 * DAT_ram_40096070 + DAT_ram_400952dc;
        }
        fStack_68 = (float)DAT_ram_4009a8b4;
        if (fVar2 < 0.0) {
          fStack_44 = 0.0;
          fStack_48 = 0.0;
        }
        else if (DAT_ram_40094604 < fVar2) {
          fStack_48 = DAT_ram_400952c4;
          fStack_44 = DAT_ram_40099f88;
        }
        else {
          fStack_48 = fVar2 * DAT_ram_400952c4 + 0.0;
          fStack_44 = fVar2 * DAT_ram_40099f88 + 0.0;
        }
        uStack_40 = DAT_ram_4009a8b8;
        fStack_3c = DAT_ram_40094604;
        uStack_38 = 0;
        uStack_34 = DAT_ram_40094ee8;
        FUN_ram_40083d12();
      }
    }
    return;
  }
  return;
}


