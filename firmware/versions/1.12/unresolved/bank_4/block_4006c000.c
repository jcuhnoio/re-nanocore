/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4006c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4006c4de.
 * REA evidence: ev_cb678330a89b7fa60aa98614f8585fda4340e07de81484d39ca886aee3d6112c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006c4de(float param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = DAT_ram_40099f28;
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  puVar2 = param_2 + 2;
  if (param_1 < DAT_ram_40099f28) {
    memset(param_2,0,0xe48);
    param_1 = DAT_ram_4009678c;
    *param_2 = param_3;
    param_2[1] = param_4;
    iVar3 = FUN_ram_4007876a(param_1,puVar2,param_5,param_6);
    if (iVar3 == 0) goto LAB_ram_4006c76e;
    param_2[0x368] = param_1;
    fVar6 = DAT_ram_4009f5d0;
LAB_ram_4006c708:
    fVar5 = (float)FUN_ram_400009d2(fVar6 / param_1);
    fVar6 = (float)FUN_ram_40000712(fVar6 / param_1);
    fVar5 = fVar5 / DAT_ram_4009f5d4;
  }
  else {
    memset(param_2,0,0xe48);
    *param_2 = param_3;
    param_2[1] = param_4;
    iVar3 = FUN_ram_4007876a(param_1,puVar2,param_5,param_6);
    if (iVar3 == 0) {
LAB_ram_4006c76e:
      FUN_ram_40078aba(0,0,DAT_ram_4009672c,puVar2);
    }
    param_2[0x368] = param_1;
    fVar4 = DAT_ram_4009f5c0;
    fVar7 = DAT_ram_4009f5cc;
    fVar5 = DAT_ram_4009f5c8;
    fVar1 = DAT_ram_4009f5c4;
    if (param_1 < fVar6) goto LAB_ram_4006c570;
    fVar5 = param_1 * DAT_ram_4009f22c;
    fVar6 = DAT_ram_4009f5d0;
    if ((DAT_ram_40099f50 <= fVar5) || (fVar6 = DAT_ram_4009f5d8, fVar5 < DAT_ram_40099f88))
    goto LAB_ram_4006c708;
    fVar6 = (fVar5 * DAT_ram_4009f090) / param_1;
    fVar5 = (float)FUN_ram_400009d2(fVar6);
    fVar6 = (float)FUN_ram_40000712(fVar6);
    fVar5 = fVar5 / DAT_ram_4009f5d4;
  }
  fVar1 = fVar5 + DAT_ram_4009672c;
  fVar4 = (DAT_ram_4009672c - fVar5) / fVar1;
  fVar7 = ((DAT_ram_4009672c - fVar6) * DAT_ram_4009675c) / fVar1;
  fVar5 = (DAT_ram_4009672c - fVar6) / fVar1;
  fVar1 = (fVar6 * DAT_ram_40096744) / fVar1;
LAB_ram_4006c570:
  param_2[0x369] = fVar7;
  param_2[0x36b] = fVar7;
  param_2[0x36d] = fVar4;
  param_2[0x36a] = fVar5;
  param_2[0x36c] = fVar1;
  param_2[0x36e] = 0;
  param_2[0x36f] = 0;
  param_2[0x370] = 0;
  param_2[0x371] = 0;
  *(undefined1 *)(param_2 + 0x372) = 0;
  *(undefined1 *)(param_2 + 0x373) = 0;
  *(undefined1 *)((int)param_2 + 0xdcd) = 0;
  *(undefined1 *)((int)param_2 + 0xdce) = 0;
  *(undefined1 *)((int)param_2 + 0xdcf) = 0;
  *(undefined1 *)(param_2 + 0x374) = 0;
  *(undefined1 *)((int)param_2 + 0xdd1) = 0;
  *(undefined1 *)((int)param_2 + 0xdd2) = 0;
  *(undefined1 *)((int)param_2 + 0xdd3) = 0;
  *(undefined1 *)(param_2 + 0x375) = 0;
  *(undefined1 *)((int)param_2 + 0xdd5) = 0;
  *(undefined1 *)((int)param_2 + 0xdd6) = 0;
  *(undefined1 *)((int)param_2 + 0xdd7) = 0;
  *(undefined1 *)(param_2 + 0x376) = 0;
  *(undefined1 *)((int)param_2 + 0xdd9) = 0;
  *(undefined1 *)((int)param_2 + 0xdda) = 0;
  *(undefined1 *)((int)param_2 + 0xddb) = 0;
  *(undefined1 *)(param_2 + 0x377) = 0;
  *(undefined1 *)((int)param_2 + 0xddd) = 0;
  *(undefined1 *)((int)param_2 + 0xdde) = 0;
  *(undefined1 *)((int)param_2 + 0xddf) = 0;
  *(undefined1 *)(param_2 + 0x378) = 0;
  *(undefined1 *)((int)param_2 + 0xde1) = 0;
  *(undefined1 *)((int)param_2 + 0xde2) = 0;
  fVar6 = DAT_ram_4009675c;
  *(undefined1 *)((int)param_2 + 0xde3) = 0;
  *(undefined1 *)(param_2 + 0x379) = 0;
  *(undefined1 *)((int)param_2 + 0xde5) = 0;
  *(undefined1 *)((int)param_2 + 0xde6) = 0;
  *(undefined1 *)((int)param_2 + 0xde7) = 0;
  *(undefined1 *)(param_2 + 0x37a) = 0;
  *(undefined1 *)((int)param_2 + 0xde9) = 0;
  *(undefined1 *)((int)param_2 + 0xdea) = 0;
  *(undefined1 *)((int)param_2 + 0xdeb) = 0;
  param_2[0x382] = param_1;
  param_2[899] = 0;
  param_2[900] = fVar6;
  *(undefined1 *)(param_2 + 0x385) = 0;
  *(undefined1 *)((int)param_2 + 0xe15) = 0;
  *(undefined1 *)((int)param_2 + 0xe16) = 0;
  *(undefined1 *)((int)param_2 + 0xe17) = 0;
  *(undefined1 *)(param_2 + 0x386) = 0;
  *(undefined1 *)((int)param_2 + 0xe19) = 0;
  *(undefined1 *)((int)param_2 + 0xe1a) = 0;
  *(undefined1 *)((int)param_2 + 0xe1b) = 0;
  *(undefined1 *)(param_2 + 0x387) = 0;
  *(undefined1 *)((int)param_2 + 0xe1d) = 0;
  *(undefined1 *)((int)param_2 + 0xe1e) = 0;
  *(undefined1 *)((int)param_2 + 0xe1f) = 0;
  *(undefined1 *)(param_2 + 0x388) = 0;
  *(undefined1 *)((int)param_2 + 0xe21) = 0;
  *(undefined1 *)((int)param_2 + 0xe22) = 0;
  *(undefined1 *)((int)param_2 + 0xe23) = 0;
  FUN_ram_40071d8a(param_1,param_2 + 0x389);
  return;
}


/* NanoCore 1.12, address 0x4006c7ca.
 * REA evidence: ev_78d7a5e81741fc53bcc5830e757f494e10f127137970c28dfcd88a672e437f22
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006c7ca(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40079596(param_1 + 8);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4006c7d4.
 * REA evidence: ev_bb193955e5c828b7ba5f85d3a3818a09388fafbfd1f230e398fc4773fd65c6c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006c7d4(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xdb8) = 0;
    *(undefined4 *)(param_1 + 0xdbc) = 0;
    *(undefined4 *)(param_1 + 0xdc0) = 0;
    *(undefined4 *)(param_1 + 0xdc4) = 0;
    *(undefined1 *)(param_1 + 0xdc8) = 0;
    *(undefined1 *)(param_1 + 0xdcc) = 0;
    *(undefined1 *)(param_1 + 0xdcd) = 0;
    *(undefined1 *)(param_1 + 0xdce) = 0;
    *(undefined1 *)(param_1 + 0xdcf) = 0;
    *(undefined1 *)(param_1 + 0xdd0) = 0;
    *(undefined1 *)(param_1 + 0xdd1) = 0;
    *(undefined1 *)(param_1 + 0xdd2) = 0;
    *(undefined1 *)(param_1 + 0xdd3) = 0;
    *(undefined1 *)(param_1 + 0xdd4) = 0;
    *(undefined1 *)(param_1 + 0xdd5) = 0;
    *(undefined1 *)(param_1 + 0xdd6) = 0;
    *(undefined1 *)(param_1 + 0xdd7) = 0;
    *(undefined1 *)(param_1 + 0xdd8) = 0;
    *(undefined1 *)(param_1 + 0xdd9) = 0;
    *(undefined1 *)(param_1 + 0xdda) = 0;
    *(undefined1 *)(param_1 + 0xddb) = 0;
    *(undefined1 *)(param_1 + 0xddc) = 0;
    *(undefined1 *)(param_1 + 0xddd) = 0;
    *(undefined1 *)(param_1 + 0xdde) = 0;
    *(undefined1 *)(param_1 + 0xddf) = 0;
    *(undefined1 *)(param_1 + 0xde0) = 0;
    *(undefined1 *)(param_1 + 0xde1) = 0;
    *(undefined1 *)(param_1 + 0xde2) = 0;
    *(undefined1 *)(param_1 + 0xde3) = 0;
    *(undefined1 *)(param_1 + 0xde4) = 0;
    *(undefined1 *)(param_1 + 0xde5) = 0;
    *(undefined1 *)(param_1 + 0xde6) = 0;
    *(undefined1 *)(param_1 + 0xde7) = 0;
    *(undefined1 *)(param_1 + 0xde8) = 0;
    *(undefined1 *)(param_1 + 0xde9) = 0;
    *(undefined1 *)(param_1 + 0xdea) = 0;
    *(undefined1 *)(param_1 + 0xdeb) = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x4006c878.
 * REA evidence: ev_4eefe04fa0413d70a394a5851407f085042e180c01ba1ed42bb02b84fb3d1f5d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006c878(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_ram_4009675c;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xe0c) = 0;
    *(undefined4 *)(param_1 + 0xe10) = uVar1;
    *(undefined1 *)(param_1 + 0xe14) = 0;
    *(undefined1 *)(param_1 + 0xe15) = 0;
    *(undefined1 *)(param_1 + 0xe16) = 0;
    *(undefined1 *)(param_1 + 0xe17) = 0;
    *(undefined1 *)(param_1 + 0xe18) = 0;
    *(undefined1 *)(param_1 + 0xe19) = 0;
    *(undefined1 *)(param_1 + 0xe1a) = 0;
    *(undefined1 *)(param_1 + 0xe1b) = 0;
    *(undefined1 *)(param_1 + 0xe1c) = 0;
    *(undefined1 *)(param_1 + 0xe1d) = 0;
    *(undefined1 *)(param_1 + 0xe1e) = 0;
    *(undefined1 *)(param_1 + 0xe1f) = 0;
    *(undefined1 *)(param_1 + 0xe20) = 0;
    *(undefined1 *)(param_1 + 0xe21) = 0;
    *(undefined1 *)(param_1 + 0xe22) = 0;
    *(undefined1 *)(param_1 + 0xe23) = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x4006c8d8.
 * REA evidence: ev_01cc7ed675c16937f02067a2090f282dbe9fa6e43529ad1054886a01cba181b3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006c8d8(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40071d38(param_1 + 0xe24);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4006c8e8.
 * REA evidence: ev_74b34d5a35d9f3335e5ec7c3b8d3f4fc2f5634406d17a67926e14444eb84ba0d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4006c8e8(uint param_1)

{
  return param_1 & -(uint)(param_1 < 0xc);
}


/* NanoCore 1.12, address 0x4006c8f4.
 * REA evidence: ev_4e2fc8f6c42e052f8992eb9952332c0af02aad6edc9c8c9987e35c111fadbe75
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4006c8f4(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0xc) && (param_1 != 8)) {
    uVar1 = 4;
    if ((param_1 != 9) && (uVar1 = 5, 1 < (param_1 - 10 & 0xff))) {
      uVar1 = 3;
      if ((param_1 - 5 & 0xff) < 3) {
        uVar1 = 1;
      }
      return uVar1;
    }
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4006c932.
 * REA evidence: ev_e89fe1a9a227924b594ae39a7ecc3aebc1eaebbb34010ba4e7b950ae9d771ae0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006c932(ulonglong *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  if ((param_1 == (ulonglong *)0x0) || (param_2 == 0)) {
    return;
  }
  if (0xb < param_3) {
    nc_drive_parameter_defaults();
    return;
  }
  if (param_3 != 8) {
    if (param_3 == 9) {
      memset(param_1,0,param_2 << 2);
      *param_1 = (ulonglong)DAT_ram_4009f59c;
      if (param_2 == 1) {
        return;
      }
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40099f6c;
      if (param_2 != 2) {
        param_1[1] = (ulonglong)DAT_ram_4009f598;
      }
      if (param_2 < 4) {
        return;
      }
      *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_40096760;
      return;
    }
    if (param_3 == 10) {
      memset(param_1,0,param_2 << 2);
      uVar1 = (ulonglong)DAT_ram_4009675c;
      *param_1 = uVar1;
      if (param_2 != 1) {
        *(ulonglong *)((int)param_1 + 4) = uVar1;
        if (param_2 != 2) {
          param_1[1] = (ulonglong)DAT_ram_4009f5a8;
        }
        if (3 < param_2) {
          *(undefined4 *)((int)param_1 + 0xc) = 0;
        }
      }
      if (param_2 < 5) {
        return;
      }
      param_1[2] = (ulonglong)DAT_ram_40096760;
      return;
    }
    if (param_3 == 0xb) {
      FUN_ram_40071e10();
      return;
    }
    if (2 < (param_3 - 5 & 0xff)) {
      nc_drive_parameter_defaults();
      return;
    }
  }
  memset(param_1,0,param_2 << 2);
  *param_1 = CONCAT44(DAT_ram_40096760,DAT_ram_4009675c);
  if ((param_2 != 1) &&
     (*(ulonglong *)((int)param_1 + 4) = CONCAT44(DAT_ram_40096760,DAT_ram_4009675c), param_2 != 2))
  {
    param_1[1] = (ulonglong)DAT_ram_4009672c;
  }
  return;
}


/* NanoCore 1.12, address 0x4006cb08.
 * REA evidence: ev_49e74e9286e4baa72fe196f59e1aff261997518b54cf5865ec56044235713079
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4006cb08(float param_1,float param_2,undefined8 param_3,float param_4,float param_5,
                     int param_6,int param_7,uint param_8,int param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_register_00000100;
  int iVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar10 = DAT_ram_4009f66c;
  fVar9 = DAT_ram_4009f668;
  fVar8 = DAT_ram_4009f65c;
  fVar7 = DAT_ram_4009f600;
  fVar6 = DAT_ram_4009f5dc;
  fVar5 = DAT_ram_4009f2a0;
  fVar4 = DAT_ram_4009f090;
  fVar3 = DAT_ram_40099f7c;
  fVar2 = DAT_ram_4009675c;
  fVar1 = DAT_ram_4009672c;
  if (param_8 == 0) {
    return;
  }
  uVar13 = 0;
  fVar18 = DAT_ram_4009f670;
  fVar17 = DAT_ram_4009f674;
  fVar16 = DAT_ram_4009f678;
  fVar15 = DAT_ram_4009f67c;
  fVar20 = (float)DAT_ram_4009f680;
  fVar24 = DAT_ram_4009f680._4_4_;
  fVar21 = (float)DAT_ram_4009f688;
  do {
    fVar23 = DAT_ram_4009f5e8;
    if (uVar13 != 0) {
      fVar23 = fVar2;
    }
    for (fVar23 = param_4 * fVar23 + param_1; fVar4 <= fVar23; fVar23 = fVar23 - fVar4) {
    }
    for (; fVar22 = fVar23, fVar23 < 0.0; fVar23 = fVar23 + fVar4) {
    }
    for (; fVar4 <= fVar22; fVar22 = fVar22 - fVar4) {
    }
    for (; fVar22 < 0.0; fVar22 = fVar22 + fVar4) {
    }
    if (in_register_00000100 < fVar22) {
      fVar22 = fVar22 - fVar4;
    }
    if (fVar22 <= DAT_ram_4009f5ec) {
      if (fVar22 < (float)DAT_ram_4009f5f0) {
        fVar22 = DAT_ram_4009f5f0._4_4_ - fVar22;
      }
    }
    else {
      fVar22 = in_register_00000100 - fVar22;
    }
    fVar14 = fVar22 * fVar22;
    for (fVar23 = param_5 * fVar22 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * (float)DAT_ram_4009f5f8
                                                                   + DAT_ram_4009f5f8._4_4_) + fVar7
                                                         ) + DAT_ram_4009f604) + fVar1) + fVar23;
        fVar4 <= fVar23; fVar23 = fVar23 - fVar4) {
    }
    for (; fVar23 < 0.0; fVar23 = fVar23 + fVar4) {
    }
    if (in_register_00000100 < fVar23) {
      fVar23 = fVar23 - fVar4;
    }
    if (fVar23 <= DAT_ram_4009f5ec) {
      if (fVar23 < (float)DAT_ram_4009f5f0) {
        fVar23 = DAT_ram_4009f5f0._4_4_ - fVar23;
      }
    }
    else {
      fVar23 = in_register_00000100 - fVar23;
    }
    fVar22 = fVar23 * fVar23;
    fVar23 = (fVar23 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * (float)DAT_ram_4009f5f8 +
                                                     DAT_ram_4009f5f8._4_4_) + fVar7) +
                                 DAT_ram_4009f604) + fVar1) + fVar1) * fVar2;
    if (fVar23 < 0.0) {
      fVar22 = DAT_ram_4009f5e0;
      if (0.0 <= DAT_ram_4009f5e0) goto LAB_ram_4006ce1c;
LAB_ram_4006d02a:
      fVar22 = 0.0;
    }
    else {
      fVar22 = DAT_ram_4009f5e4;
      if (fVar23 <= fVar1) {
        fVar23 = fVar23 * (float)PTR_entry_ram_40096740 + DAT_ram_40096728;
        fVar22 = fVar23 * fVar23;
        if (_DAT_ram_4009f608 < fVar22) {
          fVar22 = fVar22 * DAT_ram_4009f630 + DAT_ram_4009f634;
          fVar22 = (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * 
                                                  DAT_ram_4009f638 + DAT_ram_4009f63c) +
                                                  DAT_ram_4009f640) + DAT_ram_4009f644) +
                                                 DAT_ram_4009f648) + DAT_ram_4009f64c) +
                             DAT_ram_4009f650) + DAT_ram_4009f654) * fVar23 * fVar2 + fVar2;
        }
        else {
          fVar22 = fVar22 * DAT_ram_4009f60c + DAT_ram_40096728;
          fVar22 = (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * 
                                                  DAT_ram_4009f610 + DAT_ram_4009f614) +
                                                  DAT_ram_4009f618) + DAT_ram_4009f61c) +
                                                 DAT_ram_4009f620) + DAT_ram_4009f624) +
                             DAT_ram_4009f628) + DAT_ram_4009f62c) * fVar23 * fVar2 + fVar2;
        }
      }
      if (fVar22 < 0.0) goto LAB_ram_4006d02a;
LAB_ram_4006ce1c:
      if (fVar1 < fVar22) {
        fVar22 = fVar1;
      }
    }
    iVar11 = 0;
    do {
      fVar23 = fVar22 * *(float *)(param_7 + iVar11);
      iVar12 = (int)(fVar23 * in_register_00000100);
      fVar14 = (float)iVar12 * fVar8;
      if (fVar23 < fVar14) {
        iVar12 = iVar12 + -1;
        fVar14 = (float)iVar12 * fVar8;
      }
      fVar23 = fVar23 - fVar14;
      fVar14 = fVar1;
      if (iVar12 < 1) {
        for (; iVar12 != 0; iVar12 = iVar12 + 1) {
          fVar14 = fVar14 * fVar2;
        }
      }
      else {
        do {
          iVar12 = iVar12 + -1;
          fVar14 = fVar14 + fVar14;
        } while (iVar12 != 0);
      }
      fVar23 = (fVar23 * (fVar23 * (fVar23 * (fVar23 * (fVar23 * (fVar23 * (fVar23 * 
                                                  in_register_00000100 + in_register_00000100) +
                                                  fVar7) + fVar9) + fVar10) + fVar2) + fVar1) +
               fVar1) * fVar14 * *(float *)(param_6 + iVar11);
      fVar14 = fVar3;
      if ((fVar3 <= fVar23) && (fVar14 = fVar23, in_register_00000100 < fVar23)) {
        fVar14 = in_register_00000100;
      }
      fVar14 = fVar14 * param_2;
      if (fVar5 < fVar14) {
        fVar18 = (float)FUN_ram_40000a4e();
        fVar23 = (fVar1 - fVar18) / (fVar18 + fVar1);
        fVar18 = DAT_ram_4009f670;
        fVar17 = DAT_ram_4009f674;
        fVar16 = DAT_ram_4009f678;
        fVar15 = DAT_ram_4009f67c;
        fVar20 = (float)DAT_ram_4009f680;
        fVar24 = DAT_ram_4009f680._4_4_;
        fVar21 = (float)DAT_ram_4009f688;
        if (fVar6 <= fVar23) goto LAB_ram_4006cee6;
LAB_ram_4006cfb4:
        uVar19 = (ulonglong)(uint)fVar6;
      }
      else {
        fVar23 = fVar14 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * fVar18 +
                                                                            fVar17) + fVar16) +
                                                        fVar15) + fVar20) + fVar24) + fVar21) +
                 fVar1;
        if (fVar23 < fVar6) goto LAB_ram_4006cfb4;
LAB_ram_4006cee6:
        uVar19 = (ulonglong)(uint)fVar23;
        if (in_register_00000100 < fVar23) {
          uVar19 = (ulonglong)(uint)in_register_00000100;
        }
      }
      *(ulonglong *)(param_9 + iVar11) = uVar19;
      iVar11 = iVar11 + 4;
    } while (iVar11 != 0x10);
    uVar13 = uVar13 + 1 & 0xff;
    param_9 = param_9 + 0x10;
    if (param_8 == uVar13) {
      return;
    }
  } while( true );
}


