/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40080000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40080d8c.
 * REA evidence: ev_fefb0f9a9c38b420396f4a91397a230070cbb681525c5eace6a240cdd01d6583
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40080d8c(float *param_1,uint param_2)

{
  char cVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float in_register_00000100;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  char cVar12;
  undefined2 uVar13;
  uint uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  
  if (param_1 == (float *)0x0) {
    return;
  }
  fVar31 = *param_1;
  if (fVar31 <= DAT_ram_40094e80) {
    uVar29 = *(undefined8 *)(param_1 + 2);
    fVar20 = param_1[3];
    uVar25 = *(undefined8 *)(param_1 + 0xc);
    fVar21 = param_1[0xd];
    fVar31 = DAT_ram_40099f80;
    if (*(char *)((int)param_1 + 0x56) == '\0') goto LAB_ram_40080f50;
LAB_ram_40080de4:
    fVar28 = param_1[0x16];
    fVar19 = param_1[0x18];
    fVar16 = param_1[0x17];
    fVar22 = param_1[0x19];
  }
  else {
    uVar29 = *(undefined8 *)(param_1 + 2);
    fVar20 = param_1[3];
    uVar25 = *(undefined8 *)(param_1 + 0xc);
    fVar21 = param_1[0xd];
    if (*(char *)((int)param_1 + 0x56) != '\0') goto LAB_ram_40080de4;
LAB_ram_40080f50:
    fVar19 = (float)uVar25;
    fVar28 = (float)uVar29;
    *(undefined1 *)((int)param_1 + 0x56) = 1;
    fVar16 = fVar20;
    fVar22 = fVar21;
  }
  fVar23 = DAT_ram_40094ee0;
  fVar7 = DAT_ram_40094634;
  fVar6 = DAT_ram_40094604;
  fVar24 = (float)param_2 / fVar31;
  if (fVar24 <= 0.0) {
    fVar24 = DAT_ram_40094604 / fVar31;
  }
  fVar27 = (float)uVar29;
  fVar3 = fVar24 + DAT_ram_40094634;
  fVar17 = (float)uVar25;
  fVar30 = fVar21 - fVar22;
  fVar4 = fVar24 / (fVar24 + DAT_ram_40095454);
  fVar28 = fVar4 * (fVar27 - fVar28) + fVar28;
  fVar16 = fVar4 * (fVar20 - fVar16) + fVar16;
  fVar19 = fVar4 * (fVar17 - fVar19) + fVar19;
  *(ulonglong *)(param_1 + 0x16) = (ulonglong)(uint)fVar28;
  *(ulonglong *)(param_1 + 0x17) = (ulonglong)(uint)fVar16;
  *(ulonglong *)(param_1 + 0x18) = (ulonglong)(uint)fVar19;
  fVar24 = (fVar24 / fVar3) * fVar30 + fVar22;
  *(ulonglong *)(param_1 + 0x19) = (ulonglong)(uint)fVar24;
  if (ABS(fVar27 - fVar28) < fVar23) {
    *(undefined8 *)(param_1 + 0x16) = uVar29;
    fVar28 = fVar27;
  }
  fVar3 = DAT_ram_40094e90;
  if (ABS(fVar20 - fVar16) < DAT_ram_40094e90) {
    param_1[0x17] = fVar20;
    fVar16 = fVar20;
  }
  fVar20 = DAT_ram_40094e8c;
  if (ABS(fVar17 - fVar19) < DAT_ram_40094e8c) {
    *(undefined8 *)(param_1 + 0x18) = uVar25;
    fVar19 = fVar17;
  }
  if (ABS(fVar21 - fVar24) < fVar6) {
    param_1[0x19] = fVar21;
  }
  else {
    fVar30 = fVar24 - fVar22;
  }
  uVar8 = DAT_ram_40094ec4;
  fVar21 = param_1[0x4bbe];
  bVar5 = true;
  if (ABS(param_1[0x4bc7] - fVar19) < fVar20) {
    bVar5 = fVar20 <= ABS(param_1[0x4bc6] - (float)*(undefined8 *)(param_1 + 0xb));
  }
  if (fVar23 <= ABS(param_1[0x4bbd] - fVar28)) {
    param_1[0x4bbd] = fVar28;
    fVar19 = (float)FUN_ram_40000844(uVar8);
    fVar20 = (float)FUN_ram_40000844(fVar23,param_1[0x4bc3]);
    fVar22 = (float)FUN_ram_40000844(uVar8,fVar19 * fVar20);
    fVar28 = DAT_ram_40099fa8;
    fVar20 = DAT_ram_40099f64;
    pfVar9 = param_1 + 0x4bd4;
    do {
      pfVar10 = pfVar9 + 1;
      fVar24 = ((float)*(undefined8 *)pfVar9 / param_1[0x4bbb]) * fVar28;
      fVar23 = (float)FUN_ram_40000d44(fVar3,fVar24 / fVar19);
      fVar24 = (float)FUN_ram_40000d44(fVar3,fVar24 / fVar22);
      pfVar9[0x2b] = fVar23 * fVar20;
      pfVar9[0x33] = (fVar24 - fVar23) * fVar20;
      pfVar9 = pfVar10;
    } while (param_1 + 0x4bdc != pfVar10);
  }
  uVar8 = DAT_ram_40095450;
  if (fVar3 <= ABS(fVar21 - fVar16)) {
    param_1[0x4bbe] = (float)*(undefined8 *)(param_1 + 0x17);
    fVar21 = (float)FUN_ram_40000844(uVar8);
    fVar20 = DAT_ram_40099fac;
    uVar26 = FUN_ram_40000bd8((fVar21 * DAT_ram_40099fac) / param_1[0x4bbb]);
    uVar8 = DAT_ram_40094ea8;
    *(ulonglong *)(param_1 + 0x4c0f) = uVar26 & 0xffffffff;
    fVar21 = (float)FUN_ram_40000844(uVar8,param_1[0x4bc2]);
    uVar25 = FUN_ram_40000bd8((fVar21 * fVar20) / param_1[0x4bbb]);
    *(undefined8 *)(param_1 + 0x4c10) = uVar25;
  }
  if (bVar5) {
    fVar21 = (float)*(undefined8 *)(param_1 + 0x18);
    param_1[0x4bc7] = fVar21;
    param_1[0x4bc6] = (float)*(undefined8 *)(param_1 + 0xb);
    cVar1 = *(char *)(param_1 + 0x4bfe);
    fVar20 = 0.0;
    if ((0.0 <= fVar21) && (fVar20 = DAT_ram_4009afa4, fVar21 <= DAT_ram_40094e88)) {
      fVar20 = fVar21 * DAT_ram_40099fa4;
    }
    fVar21 = param_1[0x4bbb];
    param_1[0x4bfd] = fVar21 * fVar20;
    fVar18 = (float)FUN_ram_40000844(0);
    fVar27 = DAT_ram_4009ab2c;
    fVar17 = DAT_ram_4009ab28;
    fVar4 = DAT_ram_4009ab24;
    fVar3 = DAT_ram_4009ab20;
    fVar23 = DAT_ram_4009ab1c;
    fVar24 = DAT_ram_4009ab18;
    fVar22 = DAT_ram_4009ab14;
    fVar16 = DAT_ram_4009a7f4;
    fVar19 = DAT_ram_4009a7ec;
    fVar28 = DAT_ram_40094604;
    fVar20 = DAT_ram_40094600;
    if (fVar18 <= 0.0) {
      if (cVar1 != '\0') {
        memset(param_1 + 0x4bdd,0,0x20);
        fVar20 = DAT_ram_40094604;
        param_1[0x4be5] = DAT_ram_40094604;
        param_1[0x4be6] = fVar20;
        param_1[0x4be7] = fVar20;
        param_1[0x4be8] = fVar20;
        param_1[0x4be9] = fVar20;
        param_1[0x4bea] = fVar20;
        param_1[0x4beb] = fVar20;
        param_1[0x4bec] = fVar20;
        memset(param_1 + 0x4bed,0,0x20);
        param_1[0x4bf5] = fVar20;
        param_1[0x4bf6] = fVar20;
        param_1[0x4bf7] = fVar20;
        param_1[0x4bf8] = fVar20;
        param_1[0x4bf9] = fVar20;
        param_1[0x4bfa] = fVar20;
        param_1[0x4bfb] = fVar20;
        param_1[0x4bfc] = fVar20;
      }
      *(undefined1 *)(param_1 + 0x4bfe) = 0;
      cVar12 = '\0';
    }
    else {
      fVar21 = (fVar18 * DAT_ram_40099f94) / fVar21;
      if (cVar1 == '\0') {
        param_1[0x4bdd] = 0.0;
        param_1[0x4be5] = fVar28;
        param_1[0x4bde] = fVar19;
        param_1[0x4be6] = fVar19;
        param_1[0x4bdf] = fVar28;
        param_1[0x4be7] = fVar16;
        param_1[0x4be0] = fVar19;
        param_1[0x4be8] = fVar22;
        param_1[0x4be1] = fVar24;
        param_1[0x4be9] = fVar20;
        param_1[0x4be2] = fVar23;
        param_1[0x4bea] = fVar3;
        param_1[0x4be3] = fVar20;
        param_1[0x4beb] = fVar4;
        param_1[0x4be4] = fVar17;
        param_1[0x4bec] = fVar27;
      }
      fVar28 = DAT_ram_40094eb0;
      fVar20 = fVar21 * DAT_ram_40094eb0;
      fVar19 = (float)FUN_ram_400009d2(fVar20);
      param_1[0x4bed] = fVar19;
      fVar19 = (float)FUN_ram_40000712(fVar20);
      fVar20 = DAT_ram_4009ab30;
      param_1[0x4bf5] = fVar19;
      fVar20 = fVar21 * fVar20 * fVar28;
      fVar19 = (float)FUN_ram_400009d2(fVar20);
      param_1[0x4bee] = fVar19;
      fVar19 = (float)FUN_ram_40000712(fVar20);
      fVar20 = DAT_ram_4009ab34;
      param_1[0x4bf6] = fVar19;
      fVar20 = fVar21 * fVar20 * fVar28;
      fVar19 = (float)FUN_ram_400009d2(fVar20);
      param_1[0x4bef] = fVar19;
      fVar19 = (float)FUN_ram_40000712(fVar20);
      fVar20 = DAT_ram_4009ab38;
      param_1[0x4bf7] = fVar19;
      fVar20 = fVar21 * fVar20 * fVar28;
      fVar19 = (float)FUN_ram_400009d2(fVar20);
      param_1[0x4bf0] = fVar19;
      fVar19 = (float)FUN_ram_40000712(fVar20);
      fVar20 = DAT_ram_4009a3dc;
      param_1[0x4bf8] = fVar19;
      fVar20 = fVar21 * fVar20 * fVar28;
      fVar19 = (float)FUN_ram_400009d2(fVar20);
      param_1[0x4bf1] = fVar19;
      fVar19 = (float)FUN_ram_40000712(fVar20);
      fVar20 = DAT_ram_4009460c;
      param_1[0x4bf9] = fVar19;
      fVar20 = fVar21 * fVar20 * fVar28;
      fVar19 = (float)FUN_ram_400009d2(fVar20);
      param_1[0x4bf2] = fVar19;
      fVar19 = (float)FUN_ram_40000712(fVar20);
      fVar20 = DAT_ram_4009ab3c;
      param_1[0x4bfa] = fVar19;
      fVar20 = fVar21 * fVar20 * fVar28;
      fVar19 = (float)FUN_ram_400009d2(fVar20);
      param_1[0x4bf3] = fVar19;
      fVar19 = (float)FUN_ram_40000712(fVar20);
      fVar20 = DAT_ram_4009ab40;
      param_1[0x4bfb] = fVar19;
      fVar28 = fVar21 * fVar20 * fVar28;
      fVar20 = (float)FUN_ram_400009d2(fVar28);
      param_1[0x4bf4] = fVar20;
      fVar20 = (float)FUN_ram_40000712(fVar28);
      cVar12 = '\x01';
      *(undefined1 *)(param_1 + 0x4bfe) = 1;
      param_1[0x4bfc] = fVar20;
    }
    if (cVar1 != cVar12) {
      *(undefined2 *)((int)param_1 + 0x12ffa) = 0;
    }
    fVar20 = (float)*(undefined8 *)(param_1 + 4);
    if (fVar20 < 0.0) {
      fVar20 = 0.0;
    }
    else if (fVar6 < fVar20) {
      fVar20 = fVar6;
    }
    param_1[0x4c25] = fVar20;
  }
  if (ABS(fVar30) < fVar6) {
    return;
  }
  if (fVar31 <= in_register_00000100) {
    fVar31 = DAT_ram_40099f80;
  }
  fVar21 = (float)FUN_ram_40000844(0,*(undefined8 *)(param_1 + 0x19));
  fVar21 = fVar21 * DAT_ram_40099fa4;
  fVar20 = fVar21 * fVar31;
  if (0.0 <= fVar20) {
    fVar20 = fVar20 + fVar7;
  }
  else {
    fVar20 = fVar20 - fVar7;
  }
  uVar11 = (uint)fVar20;
  uVar14 = (int)~uVar11 >> 0x1f & uVar11;
  if (0x2580 < (int)uVar11) {
    uVar14 = 0x2580;
  }
  if ((uint)*(ushort *)((int)param_1 + 0x329e) != (uVar14 & 0xffff)) {
    *(ushort *)(param_1 + 0xca8) = *(ushort *)((int)param_1 + 0x329e);
    *(short *)((int)param_1 + 0x329e) = (short)uVar14;
    if (in_register_00000100 < fVar31) {
      fVar31 = fVar31 * DAT_ram_40099f74;
      if (0.0 <= fVar31) {
        fVar31 = fVar31 + fVar7;
      }
      else {
        fVar31 = fVar31 - fVar7;
      }
      iVar15 = (int)fVar31;
      if (iVar15 < 0x10000) {
        if (iVar15 < 1) {
          uVar13 = 1;
        }
        else {
          uVar13 = (undefined2)iVar15;
        }
      }
      else {
        uVar13 = 0xffff;
      }
    }
    else {
      uVar13 = 0x2d0;
    }
    *(undefined2 *)(param_1 + 0xca9) = uVar13;
    *(undefined2 *)((int)param_1 + 0x32a2) = uVar13;
  }
  fVar31 = param_1[0x4bbb];
  fVar21 = fVar31 * fVar21;
  if (0.0 <= fVar21) {
    fVar21 = fVar21 + fVar7;
  }
  else {
    fVar21 = fVar21 - fVar7;
  }
  uVar11 = (uint)fVar21;
  uVar2 = *(ushort *)((int)param_1 + 0x13086);
  uVar14 = (int)~uVar11 >> 0x1f & uVar11;
  if (0x2580 < (int)uVar11) {
    uVar14 = 0x2580;
  }
  if ((uint)uVar2 == (uVar14 & 0xffff)) {
    return;
  }
  *(short *)((int)param_1 + 0x13086) = (short)uVar14;
  *(ushort *)(param_1 + 0x4c22) = uVar2;
  uVar13 = 0x2d0;
  if (fVar31 <= in_register_00000100) goto LAB_ram_40081392;
  fVar31 = fVar31 * DAT_ram_40099f74;
  if (0.0 <= fVar31) {
    iVar15 = (int)(fVar31 + fVar7);
    if (0xffff < iVar15) goto LAB_ram_400814e0;
LAB_ram_4008138a:
    if (iVar15 < 1) {
      iVar15 = 1;
    }
  }
  else {
    iVar15 = (int)(fVar31 - fVar7);
    if (iVar15 < 0x10000) goto LAB_ram_4008138a;
LAB_ram_400814e0:
    iVar15 = 0xffff;
  }
  uVar13 = (undefined2)iVar15;
LAB_ram_40081392:
  *(undefined2 *)(param_1 + 0x4c23) = uVar13;
  *(undefined2 *)((int)param_1 + 0x1308a) = uVar13;
  return;
}


