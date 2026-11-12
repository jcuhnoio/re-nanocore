/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40095000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40095044.
 * REA evidence: ev_2679f2a7bcd64c6fb3fd785beec8a7e089547aa751879ef05255721c28dfe2f2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40095044(float param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float in_register_00000100;
  float *pfVar8;
  ulonglong *puVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar18 = DAT_ram_400a1480;
  fVar15 = DAT_ram_400a147c;
  fVar14 = DAT_ram_400a1478;
  fVar16 = DAT_ram_400a0a00;
  fVar7 = DAT_ram_4009f090;
  uVar6 = DAT_ram_40099f38;
  fVar5 = DAT_ram_4009675c;
  fVar4 = DAT_ram_40096744;
  fVar2 = DAT_ram_4009672c;
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  if (param_1 < 0.0) {
    fVar19 = 0.0;
    fVar20 = DAT_ram_4009b12c;
  }
  else {
    fVar20 = DAT_ram_40099f60;
    fVar19 = DAT_ram_4009672c;
    if (param_1 <= DAT_ram_4009672c) {
      fVar20 = (param_1 - DAT_ram_4009675c) * DAT_ram_4009a330;
      fVar19 = param_1;
    }
  }
  fVar1 = (float)*param_2 * DAT_ram_4009675c;
  *(float *)(param_2 + 1) = fVar19;
  pfVar12 = (float *)0x400a1510;
  pfVar8 = (float *)(param_2 + 0xbf7);
  pfVar10 = (float *)&DAT_ram_400a14c0;
  iVar11 = 0x400a1490;
  while( true ) {
    pfVar12 = pfVar12 + 1;
    fVar13 = (float)FUN_ram_40000d44(uVar6,(fVar16 * fVar20 + fVar14) / in_register_00000100);
    fVar18 = (fVar18 * fVar7) / fVar1;
    fVar14 = (float)FUN_ram_400009d2(fVar18);
    fVar14 = fVar14 / (fVar15 + fVar15);
    fVar15 = (float)FUN_ram_40000712(fVar18);
    fVar18 = fVar14 / fVar13 + fVar2;
    fVar15 = (fVar15 * fVar4) / fVar18;
    pfVar8[1] = fVar15;
    pfVar8[3] = fVar15;
    pfVar8[2] = (-(fVar13 * fVar14) + fVar2) / fVar18;
    pfVar8[4] = (fVar2 - fVar14 / fVar13) / fVar18;
    *pfVar8 = (fVar13 * fVar14 + fVar2) / fVar18;
    fVar18 = pfVar10[3];
    fVar14 = pfVar10[4];
    fVar16 = (float)FUN_ram_40000d44(uVar6,(fVar16 * fVar20 + pfVar10[5]) / in_register_00000100);
    fVar18 = (fVar18 * fVar7) / fVar1;
    fVar15 = (float)FUN_ram_400009d2(fVar18);
    fVar15 = fVar15 / (fVar14 + fVar14);
    fVar14 = (float)FUN_ram_40000712(fVar18);
    fVar18 = fVar15 / fVar16 + fVar2;
    uVar17 = (ulonglong)(uint)((fVar14 * fVar4) / fVar18);
    *(ulonglong *)(pfVar8 + 0x1d) = uVar17;
    *(ulonglong *)(pfVar8 + 0x1f) = uVar17;
    *(ulonglong *)(pfVar8 + 0x1c) = (ulonglong)(uint)((fVar16 * fVar15 + fVar2) / fVar18);
    *(ulonglong *)(pfVar8 + 0x1e) = (ulonglong)(uint)((-(fVar16 * fVar15) + fVar2) / fVar18);
    *(ulonglong *)(pfVar8 + 0x20) = (ulonglong)(uint)((fVar2 - fVar15 / fVar16) / fVar18);
    fVar18 = DAT_ram_4009a644;
    puVar3 = PTR_entry_ram_40096740;
    if (pfVar8 + 7 == (float *)((int)param_2 + 0x600c)) break;
    fVar18 = *(float *)(iVar11 + 0x18);
    fVar15 = *(float *)(iVar11 + 0x1c);
    fVar14 = *(float *)(iVar11 + 0x20);
    fVar16 = *pfVar12;
    pfVar8 = pfVar8 + 7;
    pfVar10 = pfVar10 + 3;
    iVar11 = iVar11 + 0xc;
  }
  uVar17 = (ulonglong)(uint)DAT_ram_400a1484;
  puVar9 = (ulonglong *)0x400a14f0;
  pfVar8 = (float *)(param_2 + 0x2648);
  fVar15 = DAT_ram_400a1484;
  if (fVar19 >= fVar5) goto LAB_ram_400952b8;
  do {
    *pfVar8 = fVar2 - (((fVar5 - fVar19) + (fVar5 - fVar19)) * (fVar18 - (float)uVar17) +
                      (float)uVar17);
    while( true ) {
      puVar9 = (ulonglong *)((int)puVar9 + 4);
      if (puVar9 == (ulonglong *)0x400a1510) {
        return;
      }
      pfVar8 = pfVar8 + 1;
      uVar17 = *puVar9;
      fVar15 = (float)uVar17;
      if (fVar19 < fVar5) break;
LAB_ram_400952b8:
      *pfVar8 = fVar2 - (-(in_register_00000100 * (float)puVar3) + fVar2) * fVar15;
    }
  } while( true );
}


/* NanoCore 1.12, address 0x4009531a.
 * REA evidence: ev_087498dddf9fbf208224e4882c07dbf918aed3aa73c487961dd10317a32922de
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4009531a(float param_1,float *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  float *pfVar7;
  ulonglong *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  
  memset(param_2,0,0x16f74);
  uVar2 = DAT_ram_400a148c;
  uVar3 = DAT_ram_400a1488;
  fVar5 = DAT_ram_4009675c;
  if (param_1 <= DAT_ram_40099f28) {
    param_1 = DAT_ram_4009f078;
  }
  uVar11 = 0;
  *param_2 = param_1;
  pfVar7 = param_2 + 0x17e7;
  iVar10 = 0;
  puVar6 = &DAT_ram_400a14c0;
  puVar9 = (undefined4 *)0x400a1490;
  while( true ) {
    param_1 = param_1 * fVar5;
    bVar1 = iVar10 == 0;
    iVar10 = iVar10 + 1;
    FUN_ram_40094cda(uVar2,uVar3,uVar11,param_1,pfVar7,bVar1);
    FUN_ram_40094cda(*puVar6,puVar6[1],puVar6[2],param_1,pfVar7 + 0x1c,bVar1);
    fVar4 = DAT_ram_4009672c;
    pfVar7 = pfVar7 + 7;
    if (iVar10 == 4) break;
    param_1 = *param_2;
    uVar2 = puVar9[3];
    uVar3 = puVar9[4];
    uVar11 = puVar9[5];
    puVar6 = puVar6 + 3;
    puVar9 = puVar9 + 3;
  }
  uVar12 = (ulonglong)DAT_ram_400a1484;
  puVar8 = (ulonglong *)0x400a14f0;
  pfVar7 = param_2 + 0x4c90;
  while( true ) {
    puVar8 = (ulonglong *)((int)puVar8 + 4);
    *pfVar7 = fVar4 - (float)uVar12;
    if (pfVar7 + 1 == param_2 + 0x4c98) break;
    uVar12 = *puVar8;
    pfVar7 = pfVar7 + 1;
  }
  FUN_ram_40094dda(DAT_ram_4009fa04,param_2);
  FUN_ram_40094f12(fVar4,param_2);
  FUN_ram_40095044(fVar5,param_2);
  return;
}


/* NanoCore 1.12, address 0x40095452.
 * REA evidence: ev_8d3c45dd9163895d000655d6c6b28c8c3bf058811141b177827f3368e3b46f8d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4009546a) */
/* WARNING: Removing unreachable block (ram,0x40095470) */

void FUN_ram_40095452(void)

{
  return;
}


/* NanoCore 1.12, address 0x40095476.
 * REA evidence: ev_245333a5fe756c28cfa37ed85d65c35cce2e370d36a75f396b35bd8f81f198ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40095476(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_4009531a();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4009547e.
 * REA evidence: ev_1206854b6bbb370c1c1e1758581e7df99a9655b04719f8827a52e25673bcadfa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400954cc) */
/* WARNING: Removing unreachable block (ram,0x400954d2) */

void FUN_ram_4009547e(undefined8 *param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)((int)param_1 + 4);
    uVar2 = param_1[1];
    FUN_ram_4009531a(*param_1);
    FUN_ram_40094f12(uVar1,param_1);
    FUN_ram_40095044(uVar2 & 0xffffffff,param_1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400954f8.
 * REA evidence: ev_c2d674be22154079e77c3c43a5a8db6518fa90c814ddce12cd0f018ac9b8ebdd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400954f8(undefined8 *param_1,undefined8 *param_2,float *param_3,uint param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float *pfVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_4 >> 2;
  puVar2 = param_2;
  puVar3 = param_1;
  pfVar4 = param_3;
  uVar5 = uVar1;
  if (uVar1 != 0) {
    do {
      uVar5 = uVar5 - 1;
      *pfVar4 = (float)*puVar3 + (float)*puVar2;
      pfVar4[1] = *(float *)((int)puVar3 + 4) + *(float *)((int)puVar2 + 4);
      pfVar4[2] = *(float *)(puVar3 + 1) + *(float *)(puVar2 + 1);
      pfVar4[3] = *(float *)((int)puVar3 + 0xc) + *(float *)((int)puVar2 + 0xc);
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 2;
      pfVar4 = pfVar4 + 4;
    } while (uVar5 != 0);
    param_1 = param_1 + uVar1 * 2;
    param_2 = param_2 + uVar1 * 2;
    param_3 = param_3 + uVar1 * 4;
  }
  if ((param_4 & 3) != 0) {
    puVar2 = (undefined8 *)((int)param_1 + (param_4 & 3) * 4);
    do {
      uVar7 = *param_1;
      uVar6 = *param_2;
      param_1 = (undefined8 *)((int)param_1 + 4);
      param_2 = (undefined8 *)((int)param_2 + 4);
      *param_3 = (float)uVar7 + (float)uVar6;
      param_3 = param_3 + 1;
    } while (param_1 != puVar2);
  }
  return;
}


/* NanoCore 1.12, address 0x4009557c.
 * REA evidence: ev_f45657f604b085eacb481d78c1aa1a7ffbbd59a36b7abfe4a983549400a13311
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4009557c(undefined8 *param_1,undefined8 *param_2,uint param_3,ulonglong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
  uVar4 = param_3 >> 2;
  uVar7 = 0;
  puVar1 = param_2;
  puVar2 = param_1;
  uVar3 = uVar4;
  if (uVar4 != 0) {
    do {
      uVar3 = uVar3 - 1;
      uVar7 = (ulonglong)
              (uint)((float)*(undefined8 *)((int)puVar2 + 0xc) *
                     (float)*(undefined8 *)((int)puVar1 + 0xc) +
                    (float)puVar2[1] * (float)puVar1[1] +
                    (float)*(undefined8 *)((int)puVar2 + 4) *
                    (float)*(undefined8 *)((int)puVar1 + 4) +
                    (float)*puVar2 * (float)*puVar1 + (float)uVar7);
      puVar1 = puVar1 + 2;
      puVar2 = puVar2 + 2;
    } while (uVar3 != 0);
    param_1 = param_1 + uVar4 * 2;
    param_2 = param_2 + uVar4 * 2;
  }
  if ((param_3 & 3) != 0) {
    puVar1 = (undefined8 *)((int)param_1 + (param_3 & 3) * 4);
    do {
      uVar5 = *param_1;
      uVar6 = *param_2;
      param_1 = (undefined8 *)((int)param_1 + 4);
      param_2 = (undefined8 *)((int)param_2 + 4);
      uVar7 = (ulonglong)(uint)((float)uVar5 * (float)uVar6 + (float)uVar7);
    } while (param_1 != puVar1);
  }
  *param_4 = uVar7;
  return;
}


/* NanoCore 1.12, address 0x400955dc.
 * REA evidence: ev_7be4c6f3647322b417678306aa2875db67ddc8f2f49d6e085d92c28812a7b6db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400955dc(byte *param_1,float *param_2,float *param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  float *pfVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  
  uVar14 = param_4 >> 4;
  puVar11 = *(undefined8 **)(param_1 + 8);
  puVar10 = *(ulonglong **)(param_1 + 4);
  uVar9 = (uint)*param_1;
  do {
    uVar19 = *puVar11;
    puVar7 = (undefined8 *)((int)puVar11 + 4);
    puVar8 = puVar11 + 1;
    fVar1 = *(float *)((int)puVar11 + 0xc);
    fVar2 = *(float *)(puVar11 + 2);
    uVar22 = *puVar10;
    uVar21 = *(ulonglong *)((int)puVar10 + 4);
    puVar11 = (undefined8 *)((int)puVar11 + 0x14);
    fVar18 = (float)uVar19;
    fVar17 = (float)*puVar7;
    fVar16 = (float)*puVar8;
    pfVar13 = param_3;
    pfVar12 = param_2;
    uVar15 = uVar14;
    if (uVar14 != 0) {
      do {
        fVar3 = *pfVar12;
        fVar5 = fVar18 * fVar3 + (float)uVar22;
        uVar15 = uVar15 - 1;
        *pfVar13 = fVar5;
        fVar20 = pfVar12[1];
        fVar6 = fVar18 * fVar20 + fVar1 * fVar5 + fVar17 * fVar3 + (float)uVar21;
        pfVar13[1] = fVar6;
        fVar4 = pfVar12[2];
        fVar5 = fVar18 * fVar4 + fVar1 * fVar6 + fVar17 * fVar20 + fVar16 * fVar3 + fVar2 * fVar5;
        pfVar13[2] = fVar5;
        fVar3 = pfVar12[3];
        fVar6 = fVar18 * fVar3 + fVar1 * fVar5 + fVar17 * fVar4 + fVar16 * fVar20 + fVar2 * fVar6;
        pfVar13[3] = fVar6;
        fVar20 = pfVar12[4];
        fVar5 = fVar18 * fVar20 + fVar1 * fVar6 + fVar17 * fVar3 + fVar16 * fVar4 + fVar2 * fVar5;
        pfVar13[4] = fVar5;
        fVar4 = pfVar12[5];
        fVar6 = fVar18 * fVar4 + fVar1 * fVar5 + fVar17 * fVar20 + fVar16 * fVar3 + fVar2 * fVar6;
        pfVar13[5] = fVar6;
        fVar3 = pfVar12[6];
        fVar5 = fVar18 * fVar3 + fVar1 * fVar6 + fVar17 * fVar4 + fVar16 * fVar20 + fVar2 * fVar5;
        pfVar13[6] = fVar5;
        fVar20 = pfVar12[7];
        fVar6 = fVar18 * fVar20 + fVar1 * fVar5 + fVar17 * fVar3 + fVar16 * fVar4 + fVar2 * fVar6;
        pfVar13[7] = fVar6;
        fVar4 = pfVar12[8];
        fVar5 = fVar18 * fVar4 + fVar1 * fVar6 + fVar17 * fVar20 + fVar16 * fVar3 + fVar2 * fVar5;
        pfVar13[8] = fVar5;
        fVar3 = pfVar12[9];
        fVar6 = fVar18 * fVar3 + fVar1 * fVar5 + fVar17 * fVar4 + fVar16 * fVar20 + fVar2 * fVar6;
        pfVar13[9] = fVar6;
        fVar20 = pfVar12[10];
        fVar5 = fVar18 * fVar20 + fVar1 * fVar6 + fVar17 * fVar3 + fVar16 * fVar4 + fVar2 * fVar5;
        pfVar13[10] = fVar5;
        fVar4 = pfVar12[0xb];
        fVar6 = fVar18 * fVar4 + fVar1 * fVar5 + fVar17 * fVar20 + fVar16 * fVar3 + fVar2 * fVar6;
        pfVar13[0xb] = fVar6;
        fVar3 = pfVar12[0xc];
        fVar5 = fVar18 * fVar3 + fVar1 * fVar6 + fVar17 * fVar4 + fVar16 * fVar20 + fVar2 * fVar5;
        pfVar13[0xc] = fVar5;
        fVar20 = pfVar12[0xd];
        fVar6 = fVar18 * fVar20 + fVar1 * fVar5 + fVar17 * fVar3 + fVar16 * fVar4 + fVar2 * fVar6;
        pfVar13[0xd] = fVar6;
        fVar4 = pfVar12[0xe];
        fVar5 = fVar18 * fVar4 + fVar1 * fVar6 + fVar17 * fVar20 + fVar16 * fVar3 + fVar2 * fVar5;
        pfVar13[0xe] = fVar5;
        fVar3 = pfVar12[0xf];
        fVar20 = fVar18 * fVar3 + fVar1 * fVar5 + fVar17 * fVar4 + fVar16 * fVar20 + fVar2 * fVar6;
        pfVar13[0xf] = fVar20;
        uVar22 = (ulonglong)(uint)(fVar1 * fVar20 + fVar17 * fVar3 + fVar16 * fVar4 + fVar2 * fVar5)
        ;
        uVar21 = (ulonglong)(uint)(fVar16 * fVar3 + fVar2 * fVar20);
        pfVar12 = pfVar12 + 0x10;
        pfVar13 = pfVar13 + 0x10;
      } while (uVar15 != 0);
      param_2 = param_2 + uVar14 * 0x10;
      pfVar13 = param_3 + uVar14 * 0x10;
    }
    if ((param_4 & 0xf) != 0) {
      pfVar12 = param_2 + (param_4 & 0xf);
      do {
        uVar19 = *(undefined8 *)param_2;
        param_2 = param_2 + 1;
        fVar20 = (float)uVar19;
        fVar3 = fVar18 * fVar20 + (float)uVar22;
        *pfVar13 = fVar3;
        uVar22 = (ulonglong)(uint)(fVar1 * fVar3 + fVar17 * fVar20 + (float)uVar21);
        uVar21 = (ulonglong)(uint)(fVar16 * fVar20 + fVar2 * fVar3);
        pfVar13 = pfVar13 + 1;
      } while (param_2 != pfVar12);
    }
    *puVar10 = uVar22;
    *(ulonglong *)((int)puVar10 + 4) = uVar21;
    uVar9 = uVar9 - 1;
    puVar10 = puVar10 + 1;
    param_2 = param_3;
  } while (uVar9 != 0);
  return;
}


/* NanoCore 1.12, address 0x4009582a.
 * REA evidence: ev_f55971b5296f6aebf5c30ee73369d0631f8937418c364d9274efd5784b986830
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4009582a(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *param_1 = (char)param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  uVar1 = memset(param_4,0,param_2 << 3);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}


