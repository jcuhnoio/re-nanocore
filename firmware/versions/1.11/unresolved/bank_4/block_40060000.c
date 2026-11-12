/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40060000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x400600de.
 * REA evidence: ev_f36226eca45ff4a33e261bb7961f1e312d0ce1529d3b59d4b2186bc9a18693af
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400600de(int param_1,uint param_2,undefined4 param_3,undefined1 param_4,
                     undefined4 param_5,int param_6)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 < 10)) {
    iVar1 = param_1 + param_2 * 0x4c;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    *(undefined1 *)(iVar1 + 0x10) = param_4;
    *(undefined4 *)(iVar1 + 0x50) = param_5;
    *(bool *)(iVar1 + 0x11) = param_6 != 0;
    memset(param_1 + param_2 * 0x4c + 0x14,0,0x3c);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40060118.
 * REA evidence: ev_d5b19ee2014610a8de265fecd16cb93d182541e0c0c09457f55b65bf85250bde
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40060118(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 0xc) {
    if (param_1 == 4) {
      uVar1 = FUN_ram_40070cea(param_2,param_3);
      return uVar1;
    }
    if (param_1 == 5) {
      uVar1 = FUN_ram_40065826(param_2,param_3);
      return uVar1;
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x40060140.
 * REA evidence: ev_6e9bbd66787a14d076bccf721b2b39a701537248d66fd721d76688e2c0549337
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40060140(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                     int param_6)

{
  if ((((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) && (param_6 != 0)) {
    FUN_ram_4005e298();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4006015c.
 * REA evidence: ev_26a26f13dcff7f541705e3eb8f6b2e41ed757e96a33a7b9d5497c52e11865516
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006015c(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x40060180.
 * REA evidence: ev_9a8016859c2cb44dfc830da0d512c696529fcab31b31600ebde1f7a8bca5b2ae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40060180(undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  float fVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = DAT_ram_40094ea8;
  uVar1 = DAT_ram_40094e90;
  fVar6 = DAT_ram_40094604;
  if (param_7 == (undefined8 *)0x0) {
    return;
  }
  fVar5 = DAT_ram_40094604;
  if (DAT_ram_40094604 <= param_2) {
    fVar5 = param_2;
  }
  if ((float)param_3 < 0.0) {
    param_3 = 0;
  }
  if ((float)param_4 < 0.0) {
    param_4 = 0;
  }
  if ((float)param_5 < 0.0) {
    param_5 = 0;
  }
  if (((((float)param_7[1] == (float)param_1) &&
       ((float)*(undefined8 *)((int)param_7 + 0xc) == fVar5)) &&
      ((float)param_7[2] == (float)param_3)) &&
     ((((float)*(undefined8 *)((int)param_7 + 0x14) == (float)param_4 &&
       ((float)param_7[3] == (float)param_5)) &&
      ((float)*(undefined8 *)((int)param_7 + 0x1c) == (float)param_6)))) {
    return;
  }
  param_7[1] = param_1;
  *(float *)((int)param_7 + 0xc) = fVar5;
  param_7[2] = param_3;
  *(undefined8 *)((int)param_7 + 0x14) = param_4;
  param_7[3] = param_5;
  *(undefined8 *)((int)param_7 + 0x1c) = param_6;
  uVar3 = FUN_ram_40000d44(uVar1,(float)param_6 / fVar2);
  fVar5 = (float)param_7[2] * DAT_ram_40094634;
  param_7[4] = uVar3 & 0xffffffff;
  uVar4 = FUN_ram_40000d44(uVar1,(-fVar5 + (float)param_7[1]) / fVar2);
  *(undefined8 *)((int)param_7 + 0x24) = uVar4;
  fVar2 = (float)*param_7;
  if (fVar2 <= fVar6) {
    fVar5 = (float)*(undefined8 *)((int)param_7 + 0x14);
    fVar2 = fVar6;
  }
  else {
    fVar5 = (float)*(undefined8 *)((int)param_7 + 0x14);
  }
  if (fVar5 <= 0.0) {
    *(undefined4 *)(param_7 + 5) = 0;
    fVar6 = (float)param_7[3];
  }
  else {
    uVar4 = FUN_ram_40000bd8(DAT_ram_40094600 / (fVar5 * DAT_ram_40099fa4 * fVar2));
    param_7[5] = uVar4;
    fVar6 = (float)param_7[3];
  }
  if (0.0 < fVar6) {
    uVar4 = FUN_ram_40000bd8(DAT_ram_40094600 / (fVar6 * DAT_ram_40099fa4 * fVar2));
    *(undefined8 *)((int)param_7 + 0x2c) = uVar4;
    return;
  }
  *(undefined4 *)((int)param_7 + 0x2c) = 0;
  return;
}


/* NanoCore 1.11, address 0x40060322.
 * REA evidence: ev_afff4598b8f480b3682a8f1268dae6761596c549fc30dbff9b280111bb535218
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40060322(float param_1,ulonglong *param_2,uint param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  ulonglong uVar13;
  
  fVar3 = DAT_ram_40094604;
  if (param_2 == (ulonglong *)0x0) {
    return;
  }
  fVar2 = param_1;
  if (param_1 < DAT_ram_40094604) {
    fVar2 = DAT_ram_40094664;
  }
  memset((int)param_2 + 4,0,0x54);
  *param_2 = (ulonglong)(uint)fVar2;
  if (param_3 == 0) {
    *(undefined1 *)((int)param_2 + 4) = 1;
  }
  else if (param_3 < 3) {
    *(char *)((int)param_2 + 4) = (char)param_3;
  }
  else {
    *(undefined1 *)((int)param_2 + 4) = 2;
  }
  uVar5 = DAT_ram_40094eb4;
  fVar4 = DAT_ram_40094604;
  uVar13 = (ulonglong)(uint)DAT_ram_40094604;
  uVar11 = (ulonglong)DAT_ram_40094634;
  uVar6 = (ulonglong)DAT_ram_40094e88;
  uVar8 = (ulonglong)DAT_ram_40094e90;
  uVar9 = (ulonglong)DAT_ram_40094658;
  uVar10 = (ulonglong)DAT_ram_40094ee0;
  bVar1 = fVar2 <= DAT_ram_40094604;
  param_2[6] = uVar11;
  *(ulonglong *)((int)param_2 + 0x34) = uVar11;
  *(undefined4 *)(param_2 + 1) = uVar5;
  *(ulonglong *)((int)param_2 + 0xc) = uVar6;
  *(ulonglong *)((int)param_2 + 0x14) = uVar8;
  param_2[3] = uVar9;
  param_2[4] = uVar13;
  *(ulonglong *)((int)param_2 + 0x24) = uVar10;
  if (bVar1) {
    uVar6 = FUN_ram_40000bd8(DAT_ram_4009a0ac);
    param_2[5] = uVar6;
    fVar12 = (float)param_2[3];
    fVar2 = fVar4;
  }
  else {
    uVar6 = FUN_ram_40000bd8(DAT_ram_40094600 / (fVar2 * DAT_ram_4009a0b0));
    param_2[5] = uVar6;
    fVar12 = (float)param_2[3];
  }
  if (0.0 < fVar12) {
    uVar7 = FUN_ram_40000bd8(DAT_ram_40094600 / (fVar12 * DAT_ram_40099fa4 * fVar2));
    *(undefined8 *)((int)param_2 + 0x2c) = uVar7;
  }
  else {
    *(undefined4 *)((int)param_2 + 0x2c) = 0;
  }
  fVar2 = DAT_ram_4009a0a8;
  if (fVar3 < (float)*param_2) {
    fVar2 = DAT_ram_4009a0a8 / (float)*param_2;
  }
  uVar7 = FUN_ram_40000bd8(fVar2);
  *(undefined1 *)(param_2 + 7) = 1;
  *(undefined8 *)((int)param_2 + 0x44) = uVar7;
  param_2[8] = 0;
  *(bool *)((int)param_2 + 5) = 0.0 < param_1;
  *(undefined4 *)((int)param_2 + 0x3c) = 0;
  param_2[9] = 0;
  *(undefined8 *)((int)param_2 + 0x4c) = 0;
  param_2[10] = 0;
  *(undefined8 *)((int)param_2 + 0x54) = 0;
  return;
}


/* NanoCore 1.11, address 0x40060498.
 * REA evidence: ev_3bcd180442a6ce6661d40a17e2abfaddc333e18eb0965a8f013e86715fbdf172
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40060498(undefined8 *param_1,int param_2,int param_3,int param_4,int param_5,
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
      if (param_5 != 0) goto LAB_ram_400604f6;
    }
    bVar8 = false;
    param_3 = param_2;
  }
LAB_ram_400604f6:
  if (param_8 != 0) {
    *(bool *)param_8 = bVar8;
  }
  fVar13 = DAT_ram_4009a0d0;
  fVar12 = DAT_ram_4009a0c8;
  fVar11 = DAT_ram_4009a0b4;
  fVar10 = DAT_ram_40099f9c;
  fVar9 = DAT_ram_40094604;
  if (*(char *)((int)param_1 + 5) == '\0') {
    if (param_2 != param_4) {
      FUN_ram_4000304c(param_4,param_2,param_6 << 2);
    }
    if ((param_5 != 0) && (param_5 != param_3)) {
      FUN_ram_4000304c(param_5,param_3,param_6 << 2);
      return;
    }
  }
  else {
    fVar1 = DAT_ram_40094604 / (float)*(undefined8 *)((int)param_1 + 0xc);
    fVar2 = *(float *)(param_1 + 2);
    fVar6 = DAT_ram_40094604 - (float)*(undefined8 *)((int)param_1 + 0x2c);
    fVar5 = fVar2 * DAT_ram_40094634;
    fVar3 = *(float *)((int)param_1 + 0x24);
    iVar15 = 0;
    fVar7 = DAT_ram_40094604 - (float)param_1[5];
    fVar22 = DAT_ram_4009a0b8;
    fVar19 = DAT_ram_4009a0bc;
    fVar18 = DAT_ram_4009a0c0;
    fVar17 = DAT_ram_4009a0c4;
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
        if (fVar27 <= fVar25) goto LAB_ram_400607e0;
LAB_ram_40060670:
        if (iVar16 == 0) {
          fVar27 = (fVar27 - fVar25) * fVar7 + fVar25;
          param_1[8] = (ulonglong)(uint)fVar27;
        }
        else {
          param_1[8] = (ulonglong)(uint)fVar27;
LAB_ram_40060676:
          *(int *)((int)param_1 + 0x3c) = iVar16 + -1;
        }
      }
      else {
        fVar22 = (float)*(undefined8 *)((int)param_1 + 0x14);
        if (fVar22 <= (float)param_1[3]) {
          fVar22 = (float)param_1[3];
        }
        fVar23 = (float)FUN_ram_40000658(fVar22 * (float)_DAT_ram_40099fa4 * (float)*param_1);
        fVar17 = DAT_ram_4009a0c4;
        fVar18 = DAT_ram_4009a0c0;
        fVar19 = DAT_ram_4009a0bc;
        fVar22 = DAT_ram_4009a0b8;
        fVar25 = (float)param_1[8];
        iVar16 = (uint)(-1 < (int)fVar23) * (int)fVar23;
        *(undefined1 *)(param_1 + 7) = 0;
        *(int *)((int)param_1 + 0x3c) = iVar16;
        if (fVar25 < fVar27) goto LAB_ram_40060670;
LAB_ram_400607e0:
        fVar27 = (fVar27 - fVar25) * fVar6 + fVar25;
        param_1[8] = (ulonglong)(uint)fVar27;
        if (iVar16 != 0) goto LAB_ram_40060676;
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
          fVar23 = (fVar27 * (fVar27 * (fVar27 * (float)DAT_ram_4009a0d4 + DAT_ram_4009a0d4._4_4_) +
                             (float)DAT_ram_4009a0dc) + fVar9) * (float)(iVar16 * 0x800000);
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


/* NanoCore 1.11, address 0x40060880.
 * REA evidence: ev_449cf63da94c092f602bca404117a50902fb7da4656d226516e1119af86d2de1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40060880(float param_1,float *param_2)

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
  float fVar11;
  float fVar12;
  
  fVar7 = DAT_ram_4009a0f8;
  fVar6 = DAT_ram_4009a0f4;
  fVar9 = DAT_ram_4009a0ec;
  fVar1 = DAT_ram_40094604;
  if (param_2 == (float *)0x0) {
    return;
  }
  fVar3 = *param_2;
  fVar4 = DAT_ram_40094ea8;
  if (fVar3 < DAT_ram_40094e80) {
    fVar3 = DAT_ram_40094664;
    fVar11 = DAT_ram_4009a0dc._4_4_;
    fVar2 = DAT_ram_40095288;
    if (0.0 <= param_1) goto LAB_ram_400608c4;
LAB_ram_40060976:
    if (fVar11 < fVar4) {
      fVar4 = fVar11;
    }
    fVar5 = fVar2;
    fVar12 = fVar3;
    if (DAT_ram_40094604 <= fVar3) {
      fVar9 = DAT_ram_40094604;
      fVar8 = fVar11;
      if (DAT_ram_40094604 <= fVar4) goto LAB_ram_40060a24;
LAB_ram_40060a2e:
      fVar9 = (fVar9 / fVar3) * DAT_ram_40099f94;
      fVar3 = (float)FUN_ram_40000712(fVar9);
      fVar4 = (float)FUN_ram_400009d2(fVar9);
      fVar7 = (fVar3 + fVar1) * DAT_ram_40094634;
      fVar6 = fVar3 * DAT_ram_4009461c;
      fVar2 = -(fVar3 + fVar1);
      fVar9 = fVar4 / DAT_ram_40099f4c + fVar1;
      fVar10 = fVar1 - fVar4 / DAT_ram_40099f4c;
      if (fVar9 != 0.0) goto LAB_ram_40060bdc;
      goto LAB_ram_40060a92;
    }
    fVar3 = DAT_ram_40094664;
    fVar8 = DAT_ram_4009a0dc._4_4_;
    if (DAT_ram_40094604 <= fVar4) {
LAB_ram_40060a24:
      fVar9 = fVar4;
      if (fVar8 < fVar4) {
        fVar9 = fVar8;
      }
      goto LAB_ram_40060a2e;
    }
    param_2[0x4b] = DAT_ram_4009a0ec;
    param_2[0x4c] = fVar7;
    param_2[0x4d] = fVar9;
    param_2[0x4e] = fVar7;
    param_2[0x4f] = fVar6;
LAB_ram_40060b8e:
    if (fVar2 < fVar1) {
      fVar7 = 0.0;
      fVar3 = DAT_ram_4009a0f8;
      fVar4 = 0.0;
      fVar6 = DAT_ram_4009a0f4;
      goto LAB_ram_40060b2a;
    }
    fVar9 = DAT_ram_4009461c;
    fVar12 = DAT_ram_40094664;
    fVar7 = DAT_ram_4009a104;
    fVar3 = DAT_ram_4009a100;
    fVar4 = DAT_ram_4009a108;
    fVar6 = DAT_ram_4009a0fc;
    if (DAT_ram_4009a0dc._4_4_ < fVar2) goto LAB_ram_40060b2a;
  }
  else {
    fVar11 = fVar3 * DAT_ram_4009a10c;
    fVar5 = DAT_ram_40095288;
    if (param_1 < 0.0) {
LAB_ram_400609de:
      fVar2 = fVar5;
      if (fVar11 < fVar5) {
LAB_ram_400609e4:
        fVar2 = fVar11;
      }
      goto LAB_ram_40060976;
    }
LAB_ram_400608c4:
    if (DAT_ram_40094604 < param_1) {
      fVar5 = DAT_ram_4009a0e8;
      fVar2 = fVar11;
      fVar4 = DAT_ram_4009a0e4;
      if (DAT_ram_4009a0e8 <= fVar11) goto LAB_ram_40060a0a;
      goto LAB_ram_40060976;
    }
    fVar2 = DAT_ram_40095450;
    if (param_1 <= DAT_ram_4009a110) {
      fVar5 = (DAT_ram_40094604 - param_1 / DAT_ram_4009a110) * DAT_ram_40095288 +
              (param_1 / DAT_ram_4009a110) * DAT_ram_4009a114;
      if (DAT_ram_40095450 <= fVar5) goto LAB_ram_400609de;
      goto LAB_ram_40060976;
    }
    if (DAT_ram_4009a118 < param_1) {
      fVar4 = (param_1 - DAT_ram_4009a118) / DAT_ram_4009a11c;
      fVar2 = (DAT_ram_40094604 - fVar4) * DAT_ram_4009a120 + fVar4 * DAT_ram_4009a0e8;
      fVar4 = (DAT_ram_40094604 - fVar4) * DAT_ram_40094ea8 + fVar4 * DAT_ram_4009a0e4;
      fVar5 = DAT_ram_40095450;
      if ((DAT_ram_40095450 <= fVar2) && (fVar5 = fVar2, fVar11 < fVar2)) {
        fVar5 = fVar11;
      }
    }
    else {
      fVar5 = (param_1 - DAT_ram_4009a110) / DAT_ram_4009a124;
      fVar5 = (DAT_ram_40094604 - fVar5) * DAT_ram_4009a114 + fVar5 * DAT_ram_4009a120;
      if (fVar5 < DAT_ram_40095450) goto LAB_ram_40060976;
      if (fVar11 < fVar5) goto LAB_ram_400609e4;
    }
LAB_ram_40060a0a:
    fVar2 = fVar5;
    if (DAT_ram_40094604 <= fVar4) goto LAB_ram_40060976;
    fVar4 = DAT_ram_40094604;
    fVar6 = DAT_ram_4009461c;
    fVar9 = DAT_ram_4009a0f0;
    fVar7 = DAT_ram_40094604;
    fVar2 = DAT_ram_4009461c;
    fVar10 = DAT_ram_4009a0ec;
    fVar12 = fVar3;
    fVar8 = fVar11;
    if (DAT_ram_40094604 <= fVar3) goto LAB_ram_40060a24;
LAB_ram_40060bdc:
    fVar9 = fVar1 / fVar9;
    fVar7 = fVar7 * fVar9;
    fVar2 = fVar2 * fVar9;
    fVar6 = fVar6 * fVar9;
    fVar10 = fVar10 * fVar9;
LAB_ram_40060a92:
    fVar9 = DAT_ram_4009461c;
    param_2[0x4b] = fVar7;
    param_2[0x4c] = fVar2;
    param_2[0x4d] = fVar7;
    param_2[0x4e] = fVar6;
    param_2[0x4f] = fVar10;
    fVar2 = fVar5;
    if (fVar12 < fVar1) goto LAB_ram_40060b8e;
    fVar2 = fVar1;
    if ((fVar1 <= fVar5) && (fVar2 = fVar5, fVar11 < fVar5)) {
      fVar2 = fVar11;
    }
  }
  fVar6 = (fVar2 / fVar12) * DAT_ram_40099f94;
  fVar5 = (float)FUN_ram_40000712(fVar6);
  fVar6 = (float)FUN_ram_400009d2(fVar6);
  fVar2 = fVar1 - fVar5;
  fVar11 = fVar6 / DAT_ram_40099f4c + fVar1;
  fVar6 = fVar1 - fVar6 / DAT_ram_40099f4c;
  fVar7 = fVar2;
  fVar3 = fVar5 * fVar9;
  fVar4 = fVar2 * DAT_ram_40094634;
  if (fVar11 != 0.0) {
    fVar1 = fVar1 / fVar11;
    fVar7 = fVar2 * fVar1;
    fVar3 = fVar5 * fVar9 * fVar1;
    fVar4 = fVar2 * DAT_ram_40094634 * fVar1;
    fVar6 = fVar6 * fVar1;
  }
LAB_ram_40060b2a:
  param_2[0x55] = fVar3;
  param_2[0x52] = fVar4;
  param_2[0x53] = fVar7;
  param_2[0x54] = fVar4;
  param_2[0x56] = fVar6;
  return;
}


/* NanoCore 1.11, address 0x40060cc0.
 * REA evidence: ev_5f21704197a0d0d8da770c9e7b8a74496190bd458f3c50413d2bee49919251d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40060cc0(undefined8 *param_1,undefined8 *param_2,float *param_3,ulonglong *param_4,
                     float *param_5,uint param_6,float *param_7,int param_8)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
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
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float in_register_00000100;
  float fVar19;
  float *pfVar20;
  uint uVar21;
  undefined8 *puVar22;
  float *pfVar23;
  int iVar24;
  uint uVar25;
  float fVar26;
  int iVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  float *pfVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  float *pfVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  ulonglong uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  ulonglong uVar56;
  float fVar57;
  float fVar58;
  ulonglong uVar59;
  undefined8 uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fStack_e0;
  float fStack_dc;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  
  fVar61 = DAT_ram_40094e80;
  fVar13 = DAT_ram_40094604;
  if (param_1 == (undefined8 *)0x0) {
    fStack_d4 = _DAT_ram_00000200;
    uVar25 = (uint)_DAT_ram_0000020e;
    uVar31 = (uint)_DAT_ram_00000210;
    fStack_c8 = (float)_DAT_ram_0000020c;
    fStack_e0 = _DAT_ram_00000150;
    fStack_d0 = _DAT_ram_00000204;
    fStack_cc = _DAT_ram_00000208;
    fVar19 = _DAT_ram_0000014c;
    pfVar30 = _DAT_ram_00000214;
    fVar35 = _DAT_ram_00000148;
    fVar37 = _DAT_ram_00000158;
    fVar38 = _DAT_ram_00000154;
    fVar63 = _DAT_ram_00000190;
    fVar49 = _DAT_ram_0000019c;
    fVar50 = _DAT_ram_000001fc;
    fVar53 = _DAT_ram_000001f8;
    fVar57 = _DAT_ram_00000194;
    fVar46 = fRam00000000;
  }
  else {
    if (param_7 == (float *)0x0) {
      bVar3 = (float)*(undefined8 *)((int)param_1 + 0x44) != DAT_ram_40094604;
      fVar49 = (float)*(undefined8 *)((int)param_1 + 0x3c);
      bVar4 = fVar49 != DAT_ram_4009a128;
      uVar59 = (ulonglong)DAT_ram_4009a12c;
      fVar50 = DAT_ram_4009a128;
      fVar57 = DAT_ram_40094604;
      fVar63 = DAT_ram_4009a130;
LAB_ram_40060d7c:
      uVar56 = (ulonglong)(uint)DAT_ram_40094604;
      if (fVar50 <= DAT_ram_40094604) {
        uVar56 = (ulonglong)(uint)fVar50;
      }
    }
    else {
      fVar50 = *param_7;
      uVar59 = (ulonglong)(uint)param_7[1];
      fVar57 = param_7[2];
      fVar63 = param_7[3];
      if (fVar50 < 0.0) {
        fVar50 = 0.0;
LAB_ram_40061326:
        if (fVar57 < 0.0) goto LAB_ram_40060d44;
LAB_ram_40061332:
        if (fVar57 <= DAT_ram_40094604) goto LAB_ram_40060d48;
        fVar57 = DAT_ram_40094604;
        if (0.0 <= fVar63) goto LAB_ram_40060d54;
LAB_ram_4006134a:
        fVar63 = 0.0;
      }
      else {
        if (fVar50 <= DAT_ram_40094604) goto LAB_ram_40061326;
        fVar50 = DAT_ram_40094604;
        if (0.0 <= fVar57) goto LAB_ram_40061332;
LAB_ram_40060d44:
        fVar57 = 0.0;
LAB_ram_40060d48:
        if (fVar63 < 0.0) goto LAB_ram_4006134a;
LAB_ram_40060d54:
        if (DAT_ram_40094604 < fVar63) {
          fVar63 = DAT_ram_40094604;
        }
      }
      bVar3 = (float)*(undefined8 *)((int)param_1 + 0x44) != fVar57;
      uVar56 = 0;
      fVar49 = (float)*(undefined8 *)((int)param_1 + 0x3c);
      bVar4 = fVar49 != fVar50;
      if (0.0 <= fVar50) goto LAB_ram_40060d7c;
    }
    uVar45 = (ulonglong)(uint)DAT_ram_40094604;
    if ((float)uVar59 < 0.0) {
      uVar59 = 0;
    }
    else if (DAT_ram_40094604 < (float)uVar59) {
      uVar59 = uVar45;
    }
    fVar53 = (float)uVar56;
    fVar19 = (float)uVar59;
    if (fVar53 == fVar49) {
      if ((float)param_1[8] == fVar19) goto LAB_ram_40060e26;
LAB_ram_40061362:
      fVar49 = 0.0;
      if ((0.0 <= fVar19) && (fVar49 = DAT_ram_40094608, fVar19 <= fVar13)) {
        fVar49 = fVar19 * DAT_ram_40094608 + 0.0;
        if (0.0 <= fVar49) {
          if (DAT_ram_40094608 < fVar49) {
            fVar49 = DAT_ram_40094608;
          }
        }
        else {
          fVar49 = 0.0;
        }
      }
      *(float *)((int)param_1 + 0x18c) = fVar49;
      param_1[8] = uVar59;
      if (bVar4) goto LAB_ram_4006139a;
LAB_ram_40060e2a:
      if (bVar3) goto LAB_ram_4006139a;
      fStack_d4 = *(float *)(param_1 + 0x40);
      fVar49 = *(float *)((int)param_1 + 0x19c);
      fStack_c8 = (float)*(ushort *)((int)param_1 + 0x20c);
      uVar25 = (uint)*(ushort *)((int)param_1 + 0x20e);
      uVar31 = (uint)*(ushort *)(param_1 + 0x42);
      fStack_e0 = *(float *)(param_1 + 0x2a);
      fVar50 = *(float *)((int)param_1 + 0x1fc);
      fVar53 = *(float *)(param_1 + 0x3f);
      fStack_d0 = *(float *)((int)param_1 + 0x204);
      pfVar30 = *(float **)((int)param_1 + 0x214);
      fVar35 = *(float *)(param_1 + 0x29);
      fStack_cc = *(float *)(param_1 + 0x41);
      fVar19 = *(float *)((int)param_1 + 0x14c);
      fVar38 = *(float *)((int)param_1 + 0x154);
      fVar37 = *(float *)(param_1 + 0x2b);
      fVar46 = (float)*param_1;
LAB_ram_40060e7a:
      if ((float)param_1[9] == fVar63) goto LAB_ram_40060e84;
LAB_ram_4006179c:
      *(float *)(param_1 + 0x32) = fVar63;
      *(float *)(param_1 + 9) = fVar63;
      fVar57 = (float)*(undefined8 *)((int)param_1 + 0x4c);
    }
    else {
      uVar25 = *(uint *)(param_1 + 1);
      fVar49 = (float)*param_1;
      fVar35 = DAT_ram_40094604;
      if (fVar49 < DAT_ram_40094e80) {
        fVar49 = DAT_ram_4009a13c;
        if ((0.0 <= fVar53) && (fVar49 = DAT_ram_4009a140, fVar53 <= DAT_ram_40094604)) {
          fVar37 = (fVar53 * DAT_ram_40096020 + DAT_ram_40094ee0) * DAT_ram_40099fa4;
          fVar49 = DAT_ram_40094664;
          goto LAB_ram_40060df0;
        }
        if (1 < uVar25) goto LAB_ram_40060e06;
      }
      else {
        fVar37 = DAT_ram_4009a134;
        if ((0.0 <= fVar53) && (fVar37 = DAT_ram_4009a138, fVar53 <= DAT_ram_40094604)) {
          fVar37 = (fVar53 * DAT_ram_40096020 + DAT_ram_40094ee0) * DAT_ram_40099fa4;
        }
LAB_ram_40060df0:
        fVar49 = fVar49 * fVar37;
        if (DAT_ram_40094604 <= fVar49) {
          fVar53 = DAT_ram_40094604;
          if (1 < uVar25) goto LAB_ram_40060e06;
        }
        else {
          fVar49 = DAT_ram_40094604;
          if (uVar25 < 2) goto LAB_ram_40060e16;
LAB_ram_40060e06:
          fVar53 = (float)(uVar25 - 2);
        }
        fVar35 = fVar49;
        if (fVar53 < fVar49) {
          fVar35 = fVar53;
        }
      }
LAB_ram_40060e16:
      *(ulonglong *)((int)param_1 + 0x3c) = uVar56;
      *(float *)(param_1 + 0x31) = fVar35;
      if ((float)param_1[8] != fVar19) goto LAB_ram_40061362;
LAB_ram_40060e26:
      if (!bVar4) goto LAB_ram_40060e2a;
LAB_ram_4006139a:
      if (fVar57 < 0.0) {
        fVar49 = DAT_ram_4009527c;
        fVar53 = 0.0;
      }
      else {
        fVar49 = DAT_ram_40095280;
        fVar53 = DAT_ram_400952cc;
        if (fVar57 <= fVar13) {
          fVar49 = fVar57 * DAT_ram_400952cc + DAT_ram_4009527c;
          fVar53 = ABS(fVar49 + DAT_ram_40095280);
        }
      }
      puVar29 = &DAT_ram_4009a284;
      iVar24 = 0;
      iVar27 = 1;
      do {
        uVar60 = *puVar29;
        puVar29 = (undefined8 *)((int)puVar29 + 4);
        fVar19 = ABS(fVar49 - (float)uVar60);
        if (fVar19 < fVar53) {
          iVar24 = iVar27;
          fVar53 = fVar19;
        }
        iVar27 = iVar27 + 1;
      } while (iVar27 != 0x1e);
      fVar49 = (float)FUN_ram_40000d44(PTR_entry_ram_40094618,
                                       (float)*(undefined8 *)(&DAT_ram_4009a280 + iVar24 * 4) /
                                       DAT_ram_40095280);
      fVar58 = DAT_ram_40094ec4;
      if ((fVar49 < DAT_ram_40094ec4) || (fVar58 = DAT_ram_4009463c, DAT_ram_4009463c < fVar49)) {
        fVar53 = (float)*param_1;
        if (0.0 <= fVar50) goto LAB_ram_40061452;
LAB_ram_40061ab6:
        fVar50 = DAT_ram_40099fec;
        if (fVar61 <= fVar53) {
          fVar50 = fVar53 * DAT_ram_4009a148;
        }
      }
      else {
        fVar53 = (float)*param_1;
        fVar58 = fVar49;
        if (fVar50 < 0.0) goto LAB_ram_40061ab6;
LAB_ram_40061452:
        if (fVar13 < fVar50) {
          fVar50 = DAT_ram_4009a144;
          if (fVar61 <= fVar53) {
LAB_ram_40061bc4:
            fVar50 = fVar53 * DAT_ram_4009a168;
          }
        }
        else {
          fVar50 = (fVar50 * DAT_ram_40096020 + DAT_ram_40094ee0) * DAT_ram_4009a164;
          if (fVar53 < fVar61) {
            fVar53 = DAT_ram_40094664;
          }
          if (fVar50 < DAT_ram_40094ea8) {
            fVar50 = fVar53 * DAT_ram_4009a148;
          }
          else {
            if (DAT_ram_4009a0e4 < fVar50) goto LAB_ram_40061bc4;
            fVar50 = fVar50 * DAT_ram_40099fa4 * fVar53;
          }
        }
      }
      fVar37 = in_register_00000100;
      iVar24 = FUN_ram_40000902(fVar50);
      uVar18 = DAT_ram_4009a0f8;
      uVar17 = DAT_ram_4009a0f4;
      uVar16 = DAT_ram_4009a0ec;
      fVar46 = (float)*param_1;
      if (iVar24 < 0x20) {
        iVar24 = 0x20;
      }
      fVar50 = in_register_00000100;
      fVar49 = DAT_ram_40094664;
      fVar53 = fVar37;
      if (fVar46 < fVar61) {
        fVar38 = ((float)iVar24 * fVar61) / DAT_ram_40094664;
        fVar19 = DAT_ram_40095288;
        fVar66 = DAT_ram_40094664;
LAB_ram_400619dc:
        fVar50 = (fVar50 / fVar49) * DAT_ram_40099f94;
        fVar35 = (float)FUN_ram_40000712(fVar50);
        fVar51 = (float)FUN_ram_400009d2(fVar50);
        fVar49 = fVar35 * DAT_ram_4009461c;
        fVar62 = (fVar35 + fVar13) * DAT_ram_40094634;
        fVar35 = -(fVar35 + fVar13);
        fVar50 = fVar51 / fVar53 + fVar13;
        fVar51 = fVar13 - fVar51 / fVar53;
        if (fVar50 != 0.0) {
          fVar50 = fVar13 / fVar50;
          fVar62 = fVar62 * fVar50;
          fVar35 = fVar35 * fVar50;
          fVar49 = fVar49 * fVar50;
          fVar51 = fVar51 * fVar50;
        }
        *(float *)((int)param_1 + 300) = fVar62;
        *(float *)(param_1 + 0x26) = fVar35;
        *(float *)((int)param_1 + 0x134) = fVar62;
        *(float *)(param_1 + 0x27) = fVar49;
        *(float *)((int)param_1 + 0x13c) = fVar51;
        fVar50 = fVar19;
        if (fVar66 < fVar13) goto LAB_ram_40061554;
        fVar50 = fVar13;
        fVar49 = fVar66;
        if ((fVar13 <= fVar19) && (fVar50 = fVar19, fVar66 * DAT_ram_4009a10c < fVar19)) {
          fVar50 = fVar66 * DAT_ram_4009a10c;
        }
LAB_ram_400615a0:
        fVar50 = (fVar50 / fVar49) * fVar37;
        fVar37 = fVar53;
        fVar49 = (float)FUN_ram_40000712(fVar50);
        fVar50 = (float)FUN_ram_400009d2(fVar50);
        fVar19 = fVar13 - fVar49;
        fVar35 = fVar37;
        if (fVar50 / fVar53 + fVar13 != 0.0) {
          fVar19 = fVar37;
        }
      }
      else {
        fVar35 = fVar46 * DAT_ram_4009a10c;
        fVar19 = fVar35;
        if (DAT_ram_40095288 <= fVar35) {
          fVar19 = DAT_ram_40095288;
        }
        fVar38 = ((float)iVar24 * fVar61) / fVar46;
        fVar51 = fVar35;
        fVar62 = fVar46;
        fVar66 = fVar46;
        if (in_register_00000100 <= fVar35) {
          fVar35 = in_register_00000100;
          if (fVar13 <= fVar46) goto LAB_ram_40061c48;
          goto LAB_ram_400619dc;
        }
        if (fVar13 <= fVar46) {
          fVar50 = fVar13;
          fVar49 = fVar46;
          if (fVar35 < fVar13) goto LAB_ram_400619dc;
LAB_ram_40061c48:
          fVar50 = fVar51;
          fVar49 = fVar62;
          if (fVar35 <= fVar51) {
            fVar50 = fVar35;
          }
          goto LAB_ram_400619dc;
        }
        fVar51 = DAT_ram_4009a0dc._4_4_;
        fVar62 = DAT_ram_40094664;
        if (fVar13 <= fVar35) goto LAB_ram_40061c48;
        *(undefined4 *)((int)param_1 + 300) = DAT_ram_4009a0ec;
        *(undefined4 *)(param_1 + 0x26) = uVar18;
        *(undefined4 *)((int)param_1 + 0x134) = uVar16;
        *(undefined4 *)(param_1 + 0x27) = uVar18;
        *(undefined4 *)((int)param_1 + 0x13c) = uVar17;
        fVar50 = fVar19;
LAB_ram_40061554:
        fVar37 = fVar53;
        if (fVar50 < fVar13) {
          fVar19 = 0.0;
          fVar35 = 0.0;
        }
        else {
          fVar19 = fVar37;
          fVar35 = fVar37;
          fVar49 = DAT_ram_40094664;
          fVar53 = fVar37;
          if (fVar50 <= DAT_ram_4009a0dc._4_4_) goto LAB_ram_400615a0;
        }
      }
      pfVar30 = *(float **)((int)param_1 + 0x214);
      *(float *)(param_1 + 0x29) = fVar35;
      *(float *)((int)param_1 + 0x14c) = fVar19;
      *(float *)(param_1 + 0x2a) = fVar35;
      *(float *)((int)param_1 + 0x154) = fVar37;
      *(float *)(param_1 + 0x2b) = fVar37;
      if ((pfVar30 == (float *)0x0) || (*(ushort *)(param_1 + 0x43) < 0x44)) {
        uVar31 = (uint)*(ushort *)(param_1 + 0x42);
        fVar50 = *(float *)((int)param_1 + 0x1fc);
        fVar53 = *(float *)(param_1 + 0x3f);
        fStack_c8 = 0.0;
        fStack_cc = fVar13;
        fStack_d0 = 0.0;
        fStack_d4 = 0.0;
        *(undefined4 *)((int)param_1 + 0x20c) = DAT_ram_4009a170;
        uVar25 = 0;
        fVar38 = fVar37;
        in_register_00000100 = fVar37;
        fStack_e0 = fVar35;
      }
      else {
        fVar50 = DAT_ram_4009a148;
        if ((in_register_00000100 <= fVar38) &&
           (fVar50 = DAT_ram_4009a14c, fVar38 <= DAT_ram_400952c8)) {
          fVar50 = fVar38 * DAT_ram_40099fa4;
        }
        in_register_00000100 = fVar37;
        uVar31 = FUN_ram_40000902(fVar66 * fVar50);
        uVar21 = (uint)*(ushort *)(param_1 + 0x43);
        if ((int)uVar31 < 0x40) {
          uVar31 = 0x40;
        }
        if ((int)uVar31 < (int)(uVar21 - 3)) {
          uVar25 = uVar31 + 4;
          if ((int)uVar21 < (int)(uVar31 + 4)) {
            uVar25 = uVar21;
          }
          uVar25 = uVar25 & 0xffff;
        }
        else {
          uVar31 = uVar21 - 4;
          uVar25 = uVar21;
        }
        uVar33 = uVar31 & 0xffff;
        pfVar30 = *(float **)((int)param_1 + 0x214);
        if ((uVar33 == *(ushort *)((int)param_1 + 0x20c)) &&
           (*(ushort *)((int)param_1 + 0x20e) == uVar25)) {
          uVar31 = (uint)*(ushort *)(param_1 + 0x42);
          fVar50 = *(float *)((int)param_1 + 0x1fc);
          fStack_e0 = *(float *)(param_1 + 0x2a);
          fVar53 = *(float *)(param_1 + 0x3f);
          fVar35 = *(float *)(param_1 + 0x29);
          fVar19 = *(float *)((int)param_1 + 0x14c);
          fVar38 = *(float *)((int)param_1 + 0x154);
          fVar37 = *(float *)(param_1 + 0x2b);
        }
        else {
          *(uint *)((int)param_1 + 0x20c) = uVar25 << 0x10 | uVar31 & 0xffff;
          if ((pfVar30 != (float *)0x0) && (uVar21 != 0)) {
            memset(pfVar30,0,uVar21 << 2);
            uVar33 = (uint)*(ushort *)((int)param_1 + 0x20c);
            uVar25 = (uint)*(ushort *)((int)param_1 + 0x20e);
            pfVar30 = *(float **)((int)param_1 + 0x214);
          }
          fVar53 = 0.0;
          fVar35 = *(float *)(param_1 + 0x29);
          fStack_e0 = *(float *)(param_1 + 0x2a);
          fVar19 = *(float *)((int)param_1 + 0x14c);
          fVar38 = *(float *)((int)param_1 + 0x154);
          fVar37 = *(float *)(param_1 + 0x2b);
          *(undefined2 *)(param_1 + 0x42) = 0;
          *(undefined4 *)((int)param_1 + 0x1fc) = 0;
          *(undefined4 *)(param_1 + 0x3f) = 0;
          uVar31 = 0;
          fVar50 = fVar53;
        }
        fStack_c8 = (float)uVar33;
        fVar49 = fVar13;
        if (0.0 < fVar58) {
          fVar49 = fVar58;
        }
        if (uVar33 == 0) {
          fVar46 = (float)*param_1;
          fStack_cc = fVar13;
          fStack_d0 = 0.0;
          fStack_d4 = 0.0;
        }
        else {
          fStack_d4 = (fVar49 - fVar13) / fStack_c8;
          if (DAT_ram_4009a158 <= fStack_d4) {
            if (fStack_d4 <= DAT_ram_4009a10c) {
              fVar49 = fStack_d4 * DAT_ram_40099f94;
              fStack_d0 = (float)FUN_ram_400009d2(fVar49);
              fStack_cc = (float)FUN_ram_40000712(fVar49);
              fVar46 = (float)*param_1;
            }
            else {
              fStack_cc = DAT_ram_4009a150;
              fVar46 = (float)*param_1;
              fStack_d0 = DAT_ram_4009a15c;
              fStack_d4 = DAT_ram_4009a10c;
            }
          }
          else {
            fVar46 = (float)*param_1;
            fStack_d4 = DAT_ram_4009a158;
            fStack_cc = DAT_ram_4009a150;
            fStack_d0 = DAT_ram_4009a154;
          }
        }
      }
      fVar49 = DAT_ram_40094604;
      *(float *)(param_1 + 0x33) = fVar58;
      *(float *)(param_1 + 0x40) = fStack_d4;
      *(float *)((int)param_1 + 0x19c) = fVar49;
      *(float *)((int)param_1 + 0x204) = fStack_d0;
      *(float *)(param_1 + 0x41) = fStack_cc;
      if (!bVar3) goto LAB_ram_40060e7a;
      *(float *)((int)param_1 + 0x44) = fVar57;
      if ((float)param_1[9] != fVar63) goto LAB_ram_4006179c;
LAB_ram_40060e84:
      fVar63 = *(float *)(param_1 + 0x32);
      fVar57 = (float)*(undefined8 *)((int)param_1 + 0x4c);
    }
    if (fVar57 != fVar13) {
      fVar58 = *(float *)((int)param_1 + 0x18c);
      *(float *)((int)param_1 + 0x194) = fVar13;
      *(ulonglong *)((int)param_1 + 0x4c) = uVar45;
      fVar57 = fVar13;
      goto joined_r0x40060ea2;
    }
    fVar57 = *(float *)((int)param_1 + 0x194);
  }
  fVar58 = *(float *)((int)param_1 + 0x18c);
joined_r0x40060ea2:
  if (0.0 <= fVar58) {
    if (DAT_ram_40094608 < fVar58) {
      fVar58 = DAT_ram_40094608;
    }
  }
  else {
    fVar58 = 0.0;
  }
  if (fVar63 < 0.0) {
    fVar63 = 0.0;
  }
  else if (fVar13 < fVar63) {
    fVar63 = fVar13;
  }
  if (0.0 <= fVar57) {
    if (fVar13 < fVar57) {
      fVar57 = fVar13;
    }
    fVar66 = *(float *)(param_1 + 0x31);
  }
  else {
    fVar57 = 0.0;
    fVar66 = *(float *)(param_1 + 0x31);
  }
  if (0.0 <= fVar49) {
    if (fVar13 < fVar49) {
      fVar49 = fVar13;
    }
  }
  else {
    fVar49 = 0.0;
  }
  fStack_dc = DAT_ram_4009a160;
  if (fVar61 <= fVar46) {
    fStack_dc = fVar46 * DAT_ram_4009a16c;
  }
  fVar62 = *(float *)((int)param_1 + 300);
  fVar5 = *(float *)((int)param_1 + 500);
  fVar6 = *(float *)(param_1 + 0x26);
  fVar7 = *(float *)((int)param_1 + 0x134);
  fVar51 = fVar13 / (float)param_6;
  puVar29 = *(undefined8 **)((int)param_1 + 4);
  fVar8 = *(float *)((int)param_1 + 0x13c);
  uVar33 = *(uint *)(param_1 + 1);
  uVar21 = *(uint *)((int)param_1 + 0xc);
  fVar34 = *(float *)(param_1 + 0x27);
  fVar61 = *(float *)(param_1 + 0x28);
  fVar65 = *(float *)((int)param_1 + 0x144);
  fVar46 = *(float *)((int)param_1 + 0x15c);
  fVar64 = *(float *)(param_1 + 0x2c);
  if (uVar25 < 2) {
    fVar47 = 0.0;
    fVar48 = fVar13;
  }
  else {
    fVar48 = fVar50 * DAT_ram_40099f94;
    fVar47 = (float)FUN_ram_400009d2(fVar48);
    fVar48 = (float)FUN_ram_40000712(fVar48);
  }
  if (*(char *)((int)param_1 + 0x236) == '\0') {
    *(float *)(param_1 + 0x34) = fVar66;
    *(float *)((int)param_1 + 0x1a4) = fVar58;
    *(float *)(param_1 + 0x35) = fVar63;
    *(float *)((int)param_1 + 0x1ac) = fVar57;
    *(undefined1 *)((int)param_1 + 0x236) = 1;
    fVar40 = fVar63;
    fVar41 = fVar57;
    fVar42 = fVar58;
    fVar43 = fVar66;
  }
  else {
    fVar40 = *(float *)(param_1 + 0x35);
    fVar41 = *(float *)((int)param_1 + 0x1ac);
    fVar42 = *(float *)((int)param_1 + 0x1a4);
    fVar43 = *(float *)(param_1 + 0x34);
  }
  fVar15 = DAT_ram_40094634;
  fVar14 = DAT_ram_4009461c;
  fVar63 = fVar63 - fVar40;
  fVar66 = fVar66 - fVar43;
  fVar58 = fVar58 - fVar42;
  fVar57 = fVar57 - fVar41;
  fVar52 = *(float *)(param_1 + 0x37);
  fVar44 = *(float *)((int)param_1 + 0x1bc);
  fVar9 = *(float *)(param_1 + 0x38);
  fVar10 = *(float *)((int)param_1 + 0x1c4);
  if (param_6 != 0) {
    fVar12 = (float)uVar33 - (float)PTR_entry_ram_40094618;
    puVar28 = (undefined8 *)((int)param_2 + param_6 * 4);
    pfVar20 = param_5;
    pfVar36 = param_3;
    do {
      fVar55 = (float)*param_2;
      if ((param_8 != 0) && (param_3 != (float *)0x0)) {
        fVar55 = (fVar55 + *pfVar36) * fVar15;
      }
      fVar54 = fVar52 * fStack_dc + fVar43;
      if (fVar54 < fVar13) {
        fVar54 = fVar13;
      }
      if (fVar12 < fVar54) {
        fVar54 = fVar12;
      }
      fVar54 = (float)uVar21 - fVar54;
      if (fVar54 < 0.0) {
        fVar54 = fVar54 + (float)uVar33;
      }
      uVar2 = (uint)(-1 < (int)fVar54) * (int)fVar54;
      puVar22 = (undefined8 *)((int)puVar29 + (uVar2 + 1) * 4);
      if (uVar33 <= uVar2 + 1) {
        puVar22 = puVar29;
      }
      fVar54 = (float)*(undefined8 *)((int)puVar29 + uVar2 * 4) * (fVar13 - (fVar54 - (float)uVar2))
               + (fVar54 - (float)uVar2) * (float)*puVar22;
      fVar39 = fVar54;
      if ((pfVar30 != (float *)0x0) && (1 < uVar25)) {
        fVar39 = fVar50 + fVar15;
        if (fVar13 <= fVar39) {
          fVar39 = fVar39 - fVar13;
        }
        fVar1 = (float)uVar25;
        fVar39 = (float)uVar31 - (fVar13 - fVar39) * fStack_c8;
        if (fVar39 < 0.0) {
          fVar39 = fVar39 + fVar1;
        }
        else if (fVar1 <= fVar39) {
          fVar39 = fVar39 - fVar1;
        }
        uVar2 = (uint)(-1 < (int)fVar39) * (int)fVar39;
        pfVar23 = pfVar30 + uVar2 + 1;
        if (uVar25 <= uVar2 + 1) {
          pfVar23 = pfVar30;
        }
        fVar1 = *pfVar23;
        fVar26 = pfVar30[uVar2];
        fVar11 = -(fVar48 * fVar15) + fVar15;
        fVar50 = fVar50 + fStack_d4;
        uVar32 = uVar31 + 1 & 0xffff;
        *(ulonglong *)(pfVar30 + uVar31) = (ulonglong)(uint)fVar54;
        uVar31 = uVar32 & -(uint)(uVar32 < uVar25);
        fVar53 = (fVar11 * in_register_00000100 +
                 (fVar13 - fVar11) *
                 ((fVar13 - (fVar39 - (float)uVar2)) * fVar26 + (fVar39 - (float)uVar2) * fVar1)) *
                 (fVar13 - fVar5) + fVar5 * fVar53;
        if (fVar50 < fVar13) {
          if (fVar50 < 0.0) {
            fVar50 = fVar50 + fVar13;
          }
        }
        else {
          fVar50 = fVar50 - fVar13;
        }
        fVar48 = fVar48 * fStack_cc - fVar47 * fStack_d0;
        fVar47 = in_register_00000100;
        fVar39 = fVar53;
      }
      fVar54 = fVar54 * (fVar13 - fVar49) + fVar49 * fVar39;
      fVar39 = fVar62 * fVar54 + fVar61;
      fVar1 = fVar39 * fVar35 + fVar46;
      fVar55 = fVar1 * fVar42 + fVar55;
      uVar59 = (ulonglong)(uint)fVar55;
      fVar61 = (fVar6 * fVar54 - fVar34 * fVar39) + fVar65;
      fVar65 = fVar7 * fVar54 - fVar8 * fVar39;
      fVar46 = (fVar39 * fVar19 - fVar1 * fVar38) + fVar64;
      fVar64 = fVar39 * fStack_e0 - fVar1 * fVar37;
      if (fVar55 < fVar14) {
        uVar59 = (ulonglong)(uint)fVar14;
      }
      else if (in_register_00000100 < fVar55) {
        uVar59 = (ulonglong)(uint)in_register_00000100;
      }
      *(ulonglong *)((int)puVar29 + uVar21 * 4) = uVar59;
      uVar21 = uVar21 + 1 & -(uint)(uVar21 + 1 < uVar33);
      if (fVar40 < 0.0) {
        fVar54 = fVar54 * 0.0;
        fVar55 = fVar13;
      }
      else {
        fVar55 = 0.0;
        if (fVar40 <= fVar13) {
          fVar54 = fVar54 * fVar40;
          if (fVar40 <= (float)_DAT_ram_4009558c) {
LAB_ram_4006182e:
            fVar55 = fVar13;
          }
          else {
            fVar55 = -((fVar40 - (float)_DAT_ram_4009558c) * (float)_DAT_ram_40094e88) + fVar13;
            if (0.0 <= fVar55) {
              if (fVar13 < fVar55) goto LAB_ram_4006182e;
            }
            else {
              fVar55 = 0.0;
            }
          }
        }
      }
      fVar39 = (float)*param_2;
      if ((param_8 == 0) || (param_3 == (float *)0x0)) {
        fVar55 = fVar41 * (fVar39 * fVar55 + fVar54);
        *param_4 = (ulonglong)(uint)fVar55;
        if (param_5 != (float *)0x0) {
          *pfVar20 = fVar55;
        }
      }
      else {
        fVar54 = fVar41 * (fVar55 * (fVar39 + *pfVar36) * fVar15 + fVar54);
        if (param_5 == (float *)0x0) {
          *param_4 = (ulonglong)(uint)fVar54;
        }
        else {
          fVar39 = fVar39 - *pfVar36;
          fVar55 = fVar55 * fVar41 * fVar15;
          *param_4 = (ulonglong)(uint)(fVar55 * fVar39 + fVar54);
          *pfVar20 = -(fVar55 * fVar39) + fVar54;
        }
      }
      fVar55 = fVar9 * fVar52;
      param_2 = (undefined8 *)((int)param_2 + 4);
      fVar43 = fVar43 + fVar66 * fVar51;
      fVar42 = fVar42 + fVar58 * fVar51;
      fVar52 = fVar10 * fVar52 + fVar9 * fVar44;
      fVar44 = fVar10 * fVar44 - fVar55;
      fVar40 = fVar40 + fVar63 * fVar51;
      fVar41 = fVar41 + fVar57 * fVar51;
      param_4 = (ulonglong *)((int)param_4 + 4);
      pfVar20 = pfVar20 + 1;
      pfVar36 = pfVar36 + 1;
    } while (param_2 != puVar28);
  }
  *(uint *)((int)param_1 + 0xc) = uVar21;
  *(float *)(param_1 + 0x27) = fVar34;
  *(float *)((int)param_1 + 300) = fVar62;
  *(float *)(param_1 + 0x28) = fVar61;
  *(float *)((int)param_1 + 0x144) = fVar65;
  *(float *)(param_1 + 0x26) = fVar6;
  *(float *)(param_1 + 0x29) = fVar35;
  *(float *)((int)param_1 + 0x15c) = fVar46;
  *(float *)((int)param_1 + 0x134) = fVar7;
  *(float *)(param_1 + 0x2c) = fVar64;
  *(short *)(param_1 + 0x42) = (short)uVar31;
  *(float *)((int)param_1 + 0x13c) = fVar8;
  *(float *)((int)param_1 + 0x1fc) = fVar50;
  *(float *)(param_1 + 0x3f) = fVar53;
  *(float *)(param_1 + 0x34) = fVar43;
  *(float *)((int)param_1 + 0x1a4) = fVar42;
  *(float *)(param_1 + 0x35) = fVar40;
  *(float *)((int)param_1 + 0x1ac) = fVar41;
  *(float *)(param_1 + 0x37) = fVar52;
  *(float *)((int)param_1 + 0x1bc) = fVar44;
  *(float *)((int)param_1 + 0x14c) = fVar19;
  *(float *)(param_1 + 0x2a) = fStack_e0;
  *(float *)((int)param_1 + 0x154) = fVar38;
  *(float *)(param_1 + 0x2b) = fVar37;
  return;
}


