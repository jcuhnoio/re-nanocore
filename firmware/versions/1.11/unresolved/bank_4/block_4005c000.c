/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4005c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4005c174.
 * REA evidence: ev_9499602d97de191e873d9c3eba08bb1dd18ccd63d776942ed72935c90e5d2cf5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005c174(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_2;
  if (*(uint *)(param_1 + 0x74) != 0) {
    uVar1 = param_2 % *(uint *)(param_1 + 0x74);
  }
  if (uVar1 != 0) {
    return 0;
  }
  iVar3 = 3;
  do {
    uVar1 = *(uint *)(param_1 + 0x74 + iVar3 * 8);
    if ((uVar1 != 0) && (uVar1 <= param_3)) {
      uVar2 = param_2;
      if (uVar1 != 0) {
        uVar2 = param_2 % uVar1;
      }
      if (uVar2 == 0) {
        return iVar3;
      }
    }
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = iVar3 + -1;
  } while( true );
}


/* NanoCore 1.11, address 0x4005c19e.
 * REA evidence: ev_4b10701137788207cc64d79387c4f5c1d4ec33e63c72b8078df8d23827edd333
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005c19e(ulonglong param_1,ulonglong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined *puVar8;
  float in_register_00000100;
  float fVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar12 = DAT_ram_40099f2c;
  fVar11 = DAT_ram_40099f28;
  fVar14 = DAT_ram_40099f24;
  fVar13 = DAT_ram_40099f20;
  fVar23 = DAT_ram_40094604;
  if (param_2 != (ulonglong *)0x0) {
    fVar15 = (float)param_1;
    fVar21 = fVar23;
    if (fVar15 <= 0.0) {
      uVar10 = (ulonglong)DAT_ram_40099f14;
      uVar17 = (ulonglong)DAT_ram_40099f18;
      uVar20 = (ulonglong)DAT_ram_40099f1c;
      *param_2 = (ulonglong)DAT_ram_40094664;
      *(undefined4 *)(param_2 + 0xb) = 0;
      *(undefined4 *)((int)param_2 + 0x5c) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)((int)param_2 + 0x1c) = 0;
      *(undefined4 *)((int)param_2 + 0x34) = 0;
      *(undefined4 *)(param_2 + 7) = 0;
      *(undefined4 *)(param_2 + 10) = 0;
      *(undefined4 *)((int)param_2 + 0x54) = 0;
      uVar18 = uVar17;
      uVar19 = uVar10;
      fVar15 = fVar12;
      fVar22 = fVar11;
    }
    else {
      *param_2 = param_1;
      *(undefined4 *)(param_2 + 0xb) = 0;
      *(undefined4 *)((int)param_2 + 0x5c) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)((int)param_2 + 0x1c) = 0;
      *(undefined4 *)((int)param_2 + 0x34) = 0;
      *(undefined4 *)(param_2 + 7) = 0;
      *(undefined4 *)(param_2 + 10) = 0;
      *(undefined4 *)((int)param_2 + 0x54) = 0;
      if (fVar23 <= fVar15) {
        fVar12 = DAT_ram_40099f48 / fVar15;
        fVar11 = (float)FUN_ram_400009d2(fVar12);
        fVar12 = (float)FUN_ram_40000712(fVar12);
        puVar8 = PTR_entry_ram_40094618;
        fVar11 = fVar11 / DAT_ram_40099f4c;
        fVar14 = fVar12 * 0.0 + (float)PTR_entry_ram_40094618;
        fVar4 = -(fVar12 * 0.0) + (float)PTR_entry_ram_40094618;
        fVar5 = -(fVar12 * (float)PTR_entry_ram_40094618) + 0.0;
        fVar15 = DAT_ram_40099f50 / fVar15;
        fVar2 = fVar11 * (float)PTR_entry_ram_40094618;
        fVar3 = fVar11 * (float)PTR_entry_ram_40094618;
        fVar22 = fVar23 / (fVar11 * (float)PTR_entry_ram_40094618 + fVar14);
        fVar12 = (fVar12 * (float)PTR_entry_ram_40094618 + 0.0) * DAT_ram_4009461c * fVar22;
        fVar11 = (-(fVar11 * (float)PTR_entry_ram_40094618) + fVar14) * fVar22;
        fVar9 = in_register_00000100;
        fVar13 = (float)FUN_ram_400009d2(fVar15);
        fVar14 = (float)FUN_ram_40000712(fVar15);
        fVar21 = fVar13 / DAT_ram_40099f54 + fVar23;
        fVar1 = fVar23 / fVar21;
        fVar14 = fVar14 * in_register_00000100 * fVar1;
        fVar13 = (fVar23 - fVar13 / DAT_ram_40099f54) * fVar1;
        fVar15 = (float)FUN_ram_400009d2(fVar9);
        fVar16 = (float)FUN_ram_40000712(fVar9);
        fVar6 = -(fVar16 * 0.0) + (float)puVar8;
        fVar9 = fVar16 * 0.0 + (float)puVar8;
        fVar15 = fVar15 / in_register_00000100;
        fVar7 = -(fVar16 * (float)puVar8) + 0.0;
        fVar23 = fVar23 / (fVar15 * (float)puVar8 + fVar6);
        uVar20 = (ulonglong)(uint)((fVar15 * (float)puVar8 + fVar9) * fVar23);
        uVar17 = (ulonglong)(uint)((fVar7 + fVar7) * fVar23);
        uVar10 = (ulonglong)(uint)((-(fVar15 * (float)puVar8) + fVar6) * fVar23);
        uVar18 = (ulonglong)(uint)((fVar16 * (float)puVar8 + 0.0) * in_register_00000100 * fVar23);
        uVar19 = (ulonglong)(uint)((-(fVar15 * (float)puVar8) + fVar9) * fVar23);
        fVar23 = (fVar2 + fVar4) * fVar22;
        fVar15 = (fVar5 + fVar5) * fVar22;
        fVar22 = (-fVar3 + fVar4) * fVar22;
        fVar21 = fVar21 * fVar1;
      }
      else {
        uVar20 = (ulonglong)(uint)fVar23;
        uVar17 = (ulonglong)DAT_ram_40099f34;
        uVar10 = (ulonglong)DAT_ram_40099f30;
        uVar18 = uVar17;
        uVar19 = uVar10;
        fVar11 = DAT_ram_40099f40;
        fVar12 = DAT_ram_40099f44;
        fVar13 = DAT_ram_40099f38;
        fVar14 = DAT_ram_40099f3c;
        fVar15 = DAT_ram_40099f44;
        fVar22 = DAT_ram_40099f40;
      }
    }
    *(float *)((int)param_2 + 4) = fVar23;
    *(float *)(param_2 + 1) = fVar15;
    *(float *)((int)param_2 + 0xc) = fVar22;
    *(float *)(param_2 + 2) = fVar12;
    *(float *)((int)param_2 + 0x14) = fVar11;
    *(float *)(param_2 + 4) = fVar21;
    *(float *)((int)param_2 + 0x24) = fVar14;
    *(float *)(param_2 + 5) = fVar13;
    *(float *)((int)param_2 + 0x2c) = fVar14;
    *(float *)(param_2 + 6) = fVar13;
    *(ulonglong *)((int)param_2 + 0x4c) = uVar10;
    *(ulonglong *)((int)param_2 + 0x3c) = uVar20;
    param_2[8] = uVar18;
    *(ulonglong *)((int)param_2 + 0x44) = uVar19;
    param_2[9] = uVar17;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4005c476.
 * REA evidence: ev_4c39dc7ba5a1c8e0e99ba6ba0129956dd9fdd030684f0ffb0355092dfcc47d5e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4005c4f8) */
/* WARNING: Removing unreachable block (ram,0x4005c58a) */

void FUN_ram_4005c476(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar2 = DAT_ram_40094604;
  if (param_2 != (float *)0x0) {
    bVar3 = *param_2 < DAT_ram_40094604;
    *(undefined8 *)(param_2 + 0x16) = param_1;
    fVar11 = *param_2;
    if (bVar3) {
      fVar11 = fVar2;
    }
    fVar8 = (float)FUN_ram_40000d44(DAT_ram_40094e90,(float)param_1 / DAT_ram_40094ec8);
    fVar11 = DAT_ram_40099f48 / fVar11;
    fVar9 = (float)FUN_ram_400009d2(fVar11);
    fVar10 = (float)FUN_ram_40000712(fVar11);
    fVar9 = fVar9 / DAT_ram_40099f4c;
    fVar11 = fVar8 + fVar2;
    fVar7 = fVar8 - fVar2;
    fVar1 = SQRT(fVar8) + SQRT(fVar8);
    fVar4 = fVar10 * fVar7 + fVar11;
    fVar6 = -(fVar10 * fVar7) + fVar11;
    fVar5 = (fVar10 * fVar11 + fVar7) * DAT_ram_4009461c;
    fVar2 = fVar2 / (fVar9 * fVar1 + fVar4);
    *(ulonglong *)(param_2 + 3) = (ulonglong)(uint)(fVar8 * (-(fVar9 * fVar1) + fVar6) * fVar2);
    param_2[4] = fVar5 * fVar2;
    *(ulonglong *)(param_2 + 1) = (ulonglong)(uint)(fVar8 * (fVar9 * fVar1 + fVar6) * fVar2);
    *(ulonglong *)(param_2 + 2) =
         (ulonglong)(uint)((fVar8 + fVar8) * (-(fVar10 * fVar11) + fVar7) * fVar2);
    *(ulonglong *)(param_2 + 5) = (ulonglong)(uint)((-(fVar9 * fVar1) + fVar4) * fVar2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4005c598.
 * REA evidence: ev_19a0db75fe4468d0585f9e784ec7e2eea218f4169c59789588ee6eeca2a7e7d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005c598(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  float fVar6;
  
  fVar1 = DAT_ram_40094604;
  if (param_2 == (float *)0x0) {
    return;
  }
  fVar6 = (float)DAT_ram_40099f5c;
  if (0.0 <= (float)param_1) {
    fVar6 = DAT_ram_40096018;
  }
  *(undefined8 *)(param_2 + 0x17) = param_1;
  fVar4 = *param_2;
  if (*param_2 < fVar1) {
    fVar4 = fVar1;
  }
  fVar2 = (float)FUN_ram_40000d44(DAT_ram_40094e90,(float)param_1 / DAT_ram_40094ec8);
  fVar4 = DAT_ram_40099f50 / fVar4;
  fVar3 = (float)FUN_ram_400009d2(fVar4);
  fVar3 = fVar3 / (fVar6 + fVar6);
  fVar4 = (float)FUN_ram_40000712(fVar4);
  fVar6 = fVar1 / (fVar3 / fVar2 + fVar1);
  uVar5 = (ulonglong)(uint)(fVar4 * DAT_ram_4009461c * fVar6);
  *(ulonglong *)(param_2 + 9) = uVar5;
  *(ulonglong *)(param_2 + 10) = (ulonglong)(uint)((-(fVar2 * fVar3) + fVar1) * fVar6);
  *(ulonglong *)(param_2 + 8) = (ulonglong)(uint)((fVar2 * fVar3 + fVar1) * fVar6);
  *(ulonglong *)(param_2 + 0xc) = (ulonglong)(uint)((fVar1 - fVar3 / fVar2) * fVar6);
  *(ulonglong *)(param_2 + 0xb) = uVar5;
  return;
}


/* NanoCore 1.11, address 0x4005c67a.
 * REA evidence: ev_7c2bb09b834d2a530003eca6e1426dc94cfd71311ffb25b305e637bd26c26e8c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4005c6fc) */
/* WARNING: Removing unreachable block (ram,0x4005c78c) */

void FUN_ram_4005c67a(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar2 = DAT_ram_40094604;
  if (param_2 != (float *)0x0) {
    bVar3 = *param_2 < DAT_ram_40094604;
    *(undefined8 *)(param_2 + 0x18) = param_1;
    fVar12 = *param_2;
    if (bVar3) {
      fVar12 = fVar2;
    }
    fVar9 = (float)FUN_ram_40000d44(DAT_ram_40094e90,(float)param_1 / DAT_ram_40094ec8);
    fVar12 = DAT_ram_40099f58 / fVar12;
    fVar10 = (float)FUN_ram_400009d2(fVar12);
    fVar11 = (float)FUN_ram_40000712(fVar12);
    fVar10 = fVar10 / DAT_ram_40099f4c;
    fVar12 = fVar9 + fVar2;
    fVar8 = fVar9 - fVar2;
    fVar1 = SQRT(fVar9) + SQRT(fVar9);
    fVar6 = -(fVar11 * fVar8) + fVar12;
    fVar4 = fVar11 * fVar8 + fVar12;
    fVar7 = -(fVar11 * fVar12) + fVar8;
    fVar5 = fVar9 * DAT_ram_4009461c;
    fVar2 = fVar2 / (fVar10 * fVar1 + fVar6);
    *(ulonglong *)(param_2 + 0x11) = (ulonglong)(uint)(fVar9 * (-(fVar10 * fVar1) + fVar4) * fVar2);
    *(ulonglong *)(param_2 + 0x12) = (ulonglong)(uint)((fVar7 + fVar7) * fVar2);
    *(ulonglong *)(param_2 + 0xf) = (ulonglong)(uint)(fVar9 * (fVar10 * fVar1 + fVar4) * fVar2);
    *(ulonglong *)(param_2 + 0x10) = (ulonglong)(uint)(fVar5 * (fVar11 * fVar12 + fVar8) * fVar2);
    *(ulonglong *)(param_2 + 0x13) = (ulonglong)(uint)((-(fVar10 * fVar1) + fVar6) * fVar2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4005c79a.
 * REA evidence: ev_699bf9fae466146d55ffafe9c4f4d51891bd8c96acfa3416263b5146250516bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_4005c79a(float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_2 != 0) {
    fVar2 = param_1 * (float)*(undefined8 *)(param_2 + 4) + (float)*(undefined8 *)(param_2 + 0x18);
    fVar1 = *(float *)(param_2 + 0x1c);
    fVar3 = (float)*(undefined8 *)(param_2 + 0x20) * fVar2 + (float)*(undefined8 *)(param_2 + 0x34);
    fVar4 = (float)*(undefined8 *)(param_2 + 0x3c) * fVar3 + (float)*(undefined8 *)(param_2 + 0x50);
    *(ulonglong *)(param_2 + 0x1c) =
         (ulonglong)(uint)(param_1 * *(float *)(param_2 + 0xc) - fVar2 * *(float *)(param_2 + 0x14))
    ;
    *(float *)(param_2 + 0x18) =
         -(fVar2 * *(float *)(param_2 + 0x10)) + param_1 * *(float *)(param_2 + 8) + fVar1;
    *(float *)(param_2 + 0x34) =
         -(fVar3 * *(float *)(param_2 + 0x2c)) +
         *(float *)(param_2 + 0x24) * fVar2 + *(float *)(param_2 + 0x38);
    *(ulonglong *)(param_2 + 0x38) =
         (ulonglong)(uint)(*(float *)(param_2 + 0x28) * fVar2 - fVar3 * *(float *)(param_2 + 0x30));
    *(ulonglong *)(param_2 + 0x50) =
         (ulonglong)
         (uint)(-(fVar4 * (float)*(undefined8 *)(param_2 + 0x48)) +
               (float)*(undefined8 *)(param_2 + 0x40) * fVar3 + *(float *)(param_2 + 0x54));
    *(ulonglong *)(param_2 + 0x54) =
         (ulonglong)
         (uint)(*(float *)(param_2 + 0x44) * fVar3 - fVar4 * (float)*(undefined8 *)(param_2 + 0x4c))
    ;
    return fVar4;
  }
  return param_1;
}


/* NanoCore 1.11, address 0x4005c83c.
 * REA evidence: ev_0c51b34fdddc296caf8a268aa59ac1d78a204c3a5b86502e4d1d9220e635914b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4005dd1c) */
/* WARNING: Removing unreachable block (ram,0x4005dd7c) */
/* WARNING: Removing unreachable block (ram,0x4005dddc) */
/* WARNING: Removing unreachable block (ram,0x4005de3c) */
/* WARNING: Removing unreachable block (ram,0x4005de0a) */
/* WARNING: Removing unreachable block (ram,0x4005ddac) */
/* WARNING: Removing unreachable block (ram,0x4005dd4c) */
/* WARNING: Removing unreachable block (ram,0x4005d810) */
/* WARNING: Removing unreachable block (ram,0x4005dd24) */
/* WARNING: Removing unreachable block (ram,0x4005dd84) */
/* WARNING: Removing unreachable block (ram,0x4005dde4) */
/* WARNING: Removing unreachable block (ram,0x4005de44) */
/* WARNING: Removing unreachable block (ram,0x4005de12) */
/* WARNING: Removing unreachable block (ram,0x4005ddb4) */
/* WARNING: Removing unreachable block (ram,0x4005dd54) */
/* WARNING: Removing unreachable block (ram,0x4005de68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4005c83c(undefined8 *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  float *pfVar13;
  undefined8 *puVar14;
  uint uVar15;
  int *piVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  uint local_b0 [4];
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  
  iVar7 = DAT_ram_40099f84;
  fVar26 = DAT_ram_40099f80;
  fVar3 = DAT_ram_40094634;
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  fVar18 = (float)*param_1;
  if (fVar18 <= DAT_ram_40094e80) {
    cVar1 = *(char *)((int)param_1 + 0x15);
    fVar18 = DAT_ram_40094664;
  }
  else {
    cVar1 = *(char *)((int)param_1 + 0x15);
  }
  fVar25 = DAT_ram_40099f94;
  fVar24 = DAT_ram_40094604;
  if (cVar1 != '\0') {
    fVar24 = fVar18 * DAT_ram_40099f78 + DAT_ram_40094634;
    uVar8 = (uint)(-1 < (int)fVar24) * (int)fVar24;
    if (0x42a < uVar8) {
      uVar8 = 0x42a;
    }
    *(short *)(param_1 + 3) = (short)uVar8;
    *(undefined2 *)((int)param_1 + 0x1a) = 0;
    *(undefined4 *)((int)param_1 + 0x10c4) = DAT_ram_40099f7c;
    piVar16 = &DAT_ram_40099fc0;
    piVar9 = (int *)(param_1 + 0x2299);
    puVar4 = param_1 + 0x22a5;
    do {
      fVar24 = (float)FUN_ram_4000078c(((float)*piVar16 * fVar18) / fVar26 + fVar3);
      iVar10 = (int)fVar24;
      iVar6 = 0x342;
      if ((iVar10 < 0x343) && (iVar6 = iVar10, iVar10 < 1)) {
        iVar6 = 1;
      }
      *piVar9 = (int)puVar4;
      *(short *)(piVar9 + 1) = (short)iVar6;
      *(undefined2 *)((int)piVar9 + 6) = 0;
      piVar9[2] = iVar7;
      puVar14 = puVar4 + 0x1a1;
      memset(puVar4,0,iVar6 << 2);
      fVar24 = DAT_ram_40099f88;
      piVar16 = piVar16 + 1;
      piVar9 = piVar9 + 3;
      puVar4 = puVar14;
    } while (param_1 + 0x2fad != puVar14);
    piVar16 = &DAT_ram_40099fe0;
    piVar9 = (int *)(param_1 + 0x2fad);
    puVar4 = (undefined8 *)((int)param_1 + 0x17d8c);
    do {
      fVar25 = (float)FUN_ram_4000078c(((float)*piVar16 * fVar18) / fVar26 + fVar3);
      iVar6 = (int)fVar25;
      iVar7 = 0x183;
      if ((iVar6 < 0x184) && (iVar7 = iVar6, iVar6 < 1)) {
        iVar7 = 1;
      }
      *piVar9 = (int)puVar4;
      *(short *)(piVar9 + 1) = (short)iVar7;
      *(undefined2 *)((int)piVar9 + 6) = 0;
      piVar9[2] = (int)fVar24;
      puVar14 = (undefined8 *)((int)puVar4 + 0x60c);
      memset(puVar4,0,iVar7 << 2);
      piVar16 = piVar16 + 1;
      piVar9 = piVar9 + 3;
      puVar4 = puVar14;
    } while (param_1 + 0x31f6 != puVar14);
    uVar15 = 2;
    fVar26 = (float)FUN_ram_4000078c(fVar18 * DAT_ram_40099f8c);
    uVar8 = (uint)fVar26;
    fVar24 = (float)FUN_ram_4000078c(fVar18 * DAT_ram_400952c4);
    fVar26 = DAT_ram_40099f90;
    iVar7 = (int)fVar24;
    if ((int)fVar24 <= (int)(uVar8 + 1)) {
      iVar7 = uVar8 + 2;
    }
    uVar5 = iVar7 - 1;
    iVar6 = 0;
LAB_ram_4005cdf4:
    if (iVar7 <= (int)uVar8) goto LAB_ram_4005ce88;
LAB_ram_4005cdf8:
    uVar15 = uVar15 * 0x19660d + 0x3c6ef35f;
    uVar11 = (int)((float)(uVar15 >> 8) * DAT_ram_40099f90 * (float)(int)(iVar7 - uVar8)) + uVar8;
    if (iVar7 <= (int)uVar11) {
      uVar11 = uVar5;
    }
    uVar11 = uVar11 + ((uVar11 & 1) == 0);
    do {
      iVar10 = iVar6;
      if (iVar7 <= (int)uVar11) goto LAB_ram_4005ce8e;
LAB_ram_4005ce2e:
      if (iVar10 != 0) {
        iVar6 = iVar10;
        if (uVar11 != local_b0[0]) {
          if (iVar10 != 1) {
            if (uVar11 == local_b0[1]) goto LAB_ram_4005cdf4;
            if (iVar10 != 2) {
              if (uVar11 == local_b0[2]) goto LAB_ram_4005cdf4;
              if (iVar10 != 3) {
                if (uVar11 == local_b0[3]) goto LAB_ram_4005cdf4;
                if (iVar10 != 4) {
                  if (uVar11 == uStack_a0) goto LAB_ram_4005cdf4;
                  if (iVar10 != 5) {
                    if (uVar11 == uStack_9c) goto LAB_ram_4005cdf4;
                    if (iVar10 != 6) {
                      if (uVar11 == uStack_98) goto LAB_ram_4005cdf4;
                      if (iVar10 == 8) {
                        if (uStack_94 != uVar11) goto LAB_ram_4005ce7c;
                        goto LAB_ram_4005cdf4;
                      }
                    }
                  }
                }
              }
            }
          }
          iVar6 = iVar10 + 1;
          local_b0[iVar10] = uVar11;
          if (iVar6 == 8) {
            *(float *)(param_1 + 0xe8ba) = (float)(int)local_b0[0];
            if ((int)local_b0[0] < 1) {
              local_b0[0] = 1;
            }
            if ((int)local_b0[0] < (int)local_b0[1]) {
              local_b0[0] = local_b0[1];
            }
            if ((int)local_b0[0] < (int)local_b0[2]) {
              local_b0[0] = local_b0[2];
            }
            if ((int)local_b0[0] < (int)local_b0[3]) {
              local_b0[0] = local_b0[3];
            }
            if ((int)local_b0[0] < (int)uStack_a0) {
              local_b0[0] = uStack_a0;
            }
            if ((int)local_b0[0] < (int)uStack_9c) {
              local_b0[0] = uStack_9c;
            }
            fVar24 = fVar18 * DAT_ram_40099f74;
            if ((int)local_b0[0] < (int)uStack_98) {
              local_b0[0] = uStack_98;
            }
            uVar8 = local_b0[0];
            if ((int)local_b0[0] <= (int)uStack_94) {
              uVar8 = uStack_94;
            }
            *(float *)((int)param_1 + 0x745d4) = (float)(int)local_b0[1];
            *(float *)(param_1 + 0xe8bb) = (float)(int)local_b0[2];
            *(float *)((int)param_1 + 0x745dc) = (float)(int)local_b0[3];
            *(float *)(param_1 + 0xe8bc) = (float)(int)uStack_a0;
            *(float *)((int)param_1 + 0x745e4) = (float)(int)uStack_9c;
            *(float *)(param_1 + 0xe8bd) = (float)(int)uStack_98;
            *(float *)((int)param_1 + 0x745ec) = (float)(int)uStack_94;
            fVar24 = (float)FUN_ram_4000078c(fVar24 + fVar3);
            uVar8 = (int)fVar24 + 4 + uVar8;
            if (0x2dab < (int)uVar8) {
              uVar8 = 0x2dab;
            }
            if ((uVar8 & 0xffff) == 0) {
              uVar8 = 1;
            }
            if (0x2dad < (uVar8 & 0xffff) + 2) {
              uVar8 = 0x2dab;
            }
            uVar5 = (uVar8 & 0xffff) + 2;
            piVar16 = (int *)(param_1 + 0x31f6);
            piVar9 = (int *)(param_1 + 0x3206);
            do {
              *piVar16 = (int)piVar9;
              *(short *)((int)piVar16 + 6) = (short)uVar8;
              *(short *)(piVar16 + 1) = (short)(uVar5 * 0x10000 >> 0x10);
              *(undefined2 *)(piVar16 + 2) = 0;
              piVar16[3] = 0;
              iVar7 = memset(piVar9,0,(uVar5 & 0xffff) << 2);
              fVar25 = DAT_ram_40099f94;
              fVar34 = DAT_ram_40099f88;
              fVar24 = _DAT_ram_40094638;
              piVar16 = piVar16 + 4;
              piVar9 = (int *)(iVar7 + 0xb6b4);
            } while ((int *)(param_1 + 0x3206) != piVar16);
            uVar8 = uVar15 * 0x19660d + 0x3c6ef35f;
            uVar15 = uVar8 * 0x19660d + 0x3c6ef35f;
            fVar19 = (float)(uVar8 >> 8) * fVar26 * DAT_ram_40099f94;
            *(float *)((int)param_1 + 0x7461c) =
                 (float)(uVar15 >> 8) * fVar26 * _DAT_ram_40094638 + DAT_ram_40099f88;
            uVar20 = FUN_ram_400009d2(fVar19);
            *(undefined4 *)((int)param_1 + 0x7463c) = uVar20;
            uVar20 = FUN_ram_40000712(fVar19);
            uVar8 = uVar15 * 0x19660d + 0x3c6ef35f;
            *(undefined4 *)((int)param_1 + 0x7465c) = uVar20;
            uVar15 = uVar8 * 0x19660d + 0x3c6ef35f;
            fVar19 = (float)(uVar8 >> 8) * fVar26 * fVar25;
            *(float *)(param_1 + 0xe8c4) = (float)(uVar15 >> 8) * fVar26 * fVar24 + fVar34;
            uVar20 = FUN_ram_400009d2(fVar19);
            *(undefined4 *)(param_1 + 0xe8c8) = uVar20;
            uVar20 = FUN_ram_40000712(fVar19);
            uVar8 = uVar15 * 0x19660d + 0x3c6ef35f;
            *(undefined4 *)(param_1 + 0xe8cc) = uVar20;
            uVar15 = uVar8 * 0x19660d + 0x3c6ef35f;
            fVar19 = (float)(uVar8 >> 8) * fVar26 * fVar25;
            *(float *)((int)param_1 + 0x74624) = (float)(uVar15 >> 8) * fVar26 * fVar24 + fVar34;
            uVar20 = FUN_ram_400009d2(fVar19);
            *(undefined4 *)((int)param_1 + 0x74644) = uVar20;
            uVar20 = FUN_ram_40000712(fVar19);
            uVar8 = uVar15 * 0x19660d + 0x3c6ef35f;
            *(undefined4 *)((int)param_1 + 0x74664) = uVar20;
            uVar15 = uVar8 * 0x19660d + 0x3c6ef35f;
            fVar19 = (float)(uVar8 >> 8) * fVar26 * fVar25;
            *(float *)(param_1 + 0xe8c5) = (float)(uVar15 >> 8) * fVar26 * fVar24 + fVar34;
            uVar20 = FUN_ram_400009d2(fVar19);
            *(undefined4 *)(param_1 + 0xe8c9) = uVar20;
            uVar20 = FUN_ram_40000712(fVar19);
            uVar8 = uVar15 * 0x19660d + 0x3c6ef35f;
            *(undefined4 *)(param_1 + 0xe8cd) = uVar20;
            uVar15 = uVar8 * 0x19660d + 0x3c6ef35f;
            fVar19 = (float)(uVar8 >> 8) * fVar26 * fVar25;
            *(float *)((int)param_1 + 0x7462c) = (float)(uVar15 >> 8) * fVar26 * fVar24 + fVar34;
            uVar20 = FUN_ram_400009d2(fVar19);
            *(undefined4 *)((int)param_1 + 0x7464c) = uVar20;
            uVar20 = FUN_ram_40000712(fVar19);
            uVar8 = uVar15 * 0x19660d + 0x3c6ef35f;
            *(undefined4 *)((int)param_1 + 0x7466c) = uVar20;
            uVar15 = uVar8 * 0x19660d + 0x3c6ef35f;
            fVar19 = (float)(uVar8 >> 8) * fVar26 * fVar25;
            *(float *)(param_1 + 0xe8c6) = (float)(uVar15 >> 8) * fVar26 * fVar24 + fVar34;
            uVar20 = FUN_ram_400009d2(fVar19);
            *(undefined4 *)(param_1 + 0xe8ca) = uVar20;
            uVar20 = FUN_ram_40000712(fVar19);
            uVar8 = uVar15 * 0x19660d + 0x3c6ef35f;
            *(undefined4 *)(param_1 + 0xe8ce) = uVar20;
            uVar15 = uVar8 * 0x19660d + 0x3c6ef35f;
            fVar19 = (float)(uVar8 >> 8) * fVar26 * fVar25;
            *(float *)((int)param_1 + 0x74634) = (float)(uVar15 >> 8) * fVar26 * fVar24 + fVar34;
            uVar20 = FUN_ram_400009d2(fVar19);
            *(undefined4 *)((int)param_1 + 0x74654) = uVar20;
            uVar20 = FUN_ram_40000712(fVar19);
            uVar8 = uVar15 * 0x19660d + 0x3c6ef35f;
            *(undefined4 *)((int)param_1 + 0x74674) = uVar20;
            uVar15 = uVar8 * 0x19660d + 0x3c6ef35f;
            fVar19 = (float)(uVar8 >> 8) * fVar26 * fVar25;
            uVar8 = uVar15 * 0x19660d + 0x3c6ef35f;
            *(float *)(param_1 + 0xe8c7) = (float)(uVar15 >> 8) * fVar26 * fVar24 + fVar34;
            uVar20 = FUN_ram_400009d2(fVar19);
            *(undefined4 *)(param_1 + 0xe8cb) = uVar20;
            uVar20 = FUN_ram_40000712(fVar19);
            *(undefined4 *)(param_1 + 0xe8cf) = uVar20;
            fVar34 = DAT_ram_40099f64;
            fVar19 = DAT_ram_40099f5c._4_4_;
            fVar24 = DAT_ram_40099f5c._4_4_;
            if (fVar3 <= (float)(uVar8 >> 8) * fVar26) {
              fVar24 = DAT_ram_40099f64;
            }
            uVar8 = uVar8 * 0x19660d + 0x3c6ef35f;
            *(float *)(param_1 + 0xe8dc) = fVar24;
            fVar24 = fVar19;
            if (fVar3 <= (float)(uVar8 >> 8) * fVar26) {
              fVar24 = fVar34;
            }
            uVar8 = uVar8 * 0x19660d + 0x3c6ef35f;
            *(float *)((int)param_1 + 0x746e4) = fVar24;
            fVar24 = fVar19;
            if (fVar3 <= (float)(uVar8 >> 8) * fVar26) {
              fVar24 = fVar34;
            }
            uVar8 = uVar8 * 0x19660d + 0x3c6ef35f;
            *(float *)(param_1 + 0xe8dd) = fVar24;
            fVar24 = fVar19;
            if (fVar3 <= (float)(uVar8 >> 8) * fVar26) {
              fVar24 = fVar34;
            }
            uVar8 = uVar8 * 0x19660d + 0x3c6ef35f;
            *(float *)((int)param_1 + 0x746ec) = fVar24;
            fVar24 = fVar19;
            if (fVar3 <= (float)(uVar8 >> 8) * fVar26) {
              fVar24 = fVar34;
            }
            uVar8 = uVar8 * 0x19660d + 0x3c6ef35f;
            *(float *)(param_1 + 0xe8de) = fVar24;
            fVar24 = fVar19;
            if (fVar3 <= (float)(uVar8 >> 8) * fVar26) {
              fVar24 = fVar34;
            }
            uVar8 = uVar8 * 0x19660d + 0x3c6ef35f;
            *(float *)((int)param_1 + 0x746f4) = fVar24;
            fVar24 = fVar19;
            if (fVar3 <= (float)(uVar8 >> 8) * fVar26) {
              fVar24 = fVar34;
            }
            uVar8 = uVar8 * 0x19660d + 0x3c6ef35f;
            *(float *)(param_1 + 0xe8df) = fVar24;
            fVar27 = DAT_ram_40099f98;
            fVar24 = fVar19;
            if (fVar3 <= (float)(uVar8 >> 8) * fVar26) {
              fVar24 = fVar34;
            }
            uVar15 = uVar8 * 0x19660d + 0x3c6ef35f;
            *(float *)((int)param_1 + 0x746fc) = fVar24;
            uVar8 = uVar15 * 0x19660d + 0x3c6ef35f;
            fVar24 = DAT_ram_40099f68;
            if (fVar27 <= (float)(uVar15 >> 8) * fVar26) {
              fVar24 = (float)FUN_ram_40000c5e();
              fVar24 = fVar24 * DAT_ram_4009461c;
            }
            fVar28 = (float)FUN_ram_40000712((float)(uVar8 >> 8) * fVar26 * fVar25);
            uVar8 = uVar8 * 0x19660d + 0x3c6ef35f;
            fVar28 = SQRT(fVar24) * fVar28;
            *(float *)(param_1 + 0xe8e0) = fVar28;
            uVar15 = uVar8 * 0x19660d + 0x3c6ef35f;
            fVar24 = DAT_ram_40099f68;
            if (fVar27 <= (float)(uVar8 >> 8) * fVar26) {
              fVar24 = (float)FUN_ram_40000c5e();
              fVar24 = fVar24 * DAT_ram_4009461c;
            }
            fVar29 = (float)FUN_ram_40000712((float)(uVar15 >> 8) * fVar26 * fVar25);
            uVar15 = uVar15 * 0x19660d + 0x3c6ef35f;
            fVar29 = SQRT(fVar24) * fVar29;
            *(float *)((int)param_1 + 0x74704) = fVar29;
            uVar8 = uVar15 * 0x19660d + 0x3c6ef35f;
            fVar24 = DAT_ram_40099f68;
            if (fVar27 <= (float)(uVar15 >> 8) * fVar26) {
              fVar24 = (float)FUN_ram_40000c5e();
              fVar24 = fVar24 * DAT_ram_4009461c;
            }
            fVar23 = (float)FUN_ram_40000712((float)(uVar8 >> 8) * fVar26 * fVar25);
            uVar8 = uVar8 * 0x19660d + 0x3c6ef35f;
            fVar23 = SQRT(fVar24) * fVar23;
            *(float *)(param_1 + 0xe8e1) = fVar23;
            uVar15 = uVar8 * 0x19660d + 0x3c6ef35f;
            fVar24 = DAT_ram_40099f68;
            if (fVar27 <= (float)(uVar8 >> 8) * fVar26) {
              fVar24 = (float)FUN_ram_40000c5e();
              fVar24 = fVar24 * DAT_ram_4009461c;
            }
            fVar22 = (float)FUN_ram_40000712((float)(uVar15 >> 8) * fVar26 * fVar25);
            uVar15 = uVar15 * 0x19660d + 0x3c6ef35f;
            fVar22 = SQRT(fVar24) * fVar22;
            *(float *)((int)param_1 + 0x7470c) = fVar22;
            uVar8 = uVar15 * 0x19660d + 0x3c6ef35f;
            fVar24 = DAT_ram_40099f68;
            if (fVar27 <= (float)(uVar15 >> 8) * fVar26) {
              fVar24 = (float)FUN_ram_40000c5e();
              fVar24 = fVar24 * DAT_ram_4009461c;
            }
            fVar30 = (float)FUN_ram_40000712((float)(uVar8 >> 8) * fVar26 * fVar25);
            uVar8 = uVar8 * 0x19660d + 0x3c6ef35f;
            fVar30 = SQRT(fVar24) * fVar30;
            *(float *)(param_1 + 0xe8e2) = fVar30;
            uVar15 = uVar8 * 0x19660d + 0x3c6ef35f;
            fVar24 = DAT_ram_40099f68;
            if (fVar27 <= (float)(uVar8 >> 8) * fVar26) {
              fVar24 = (float)FUN_ram_40000c5e();
              fVar24 = fVar24 * DAT_ram_4009461c;
            }
            fVar31 = (float)FUN_ram_40000712((float)(uVar15 >> 8) * fVar26 * fVar25);
            uVar15 = uVar15 * 0x19660d + 0x3c6ef35f;
            fVar31 = SQRT(fVar24) * fVar31;
            *(float *)((int)param_1 + 0x74714) = fVar31;
            uVar8 = uVar15 * 0x19660d + 0x3c6ef35f;
            fVar24 = DAT_ram_40099f68;
            if (fVar27 <= (float)(uVar15 >> 8) * fVar26) {
              fVar24 = (float)FUN_ram_40000c5e();
              fVar24 = fVar24 * DAT_ram_4009461c;
            }
            fVar32 = (float)FUN_ram_40000712((float)(uVar8 >> 8) * fVar26 * fVar25);
            uVar8 = uVar8 * 0x19660d + 0x3c6ef35f;
            fVar32 = SQRT(fVar24) * fVar32;
            *(float *)(param_1 + 0xe8e3) = fVar32;
            fVar24 = DAT_ram_40099f68;
            if (fVar27 <= (float)(uVar8 >> 8) * fVar26) {
              fVar24 = (float)FUN_ram_40000c5e();
              fVar24 = fVar24 * DAT_ram_4009461c;
            }
            fVar27 = (float)FUN_ram_40000712((float)(uVar8 * 0x19660d + 0x3c6ef35f >> 8) * fVar26 *
                                             fVar25);
            fVar27 = SQRT(fVar24) * fVar27;
            fVar26 = fVar27 * fVar27 +
                     fVar32 * fVar32 +
                     fVar31 * fVar31 +
                     fVar30 * fVar30 +
                     fVar22 * fVar22 + fVar23 * fVar23 + fVar29 * fVar29 + fVar28 * fVar28 + 0.0;
            *(float *)((int)param_1 + 0x7471c) = fVar27;
            if ((int)(param_1 + 0xe800) < 0x100 && fVar26 < 0.0) {
              fVar26 = (float)FUN_ram_40000e74();
            }
            else {
              fVar26 = SQRT(fVar26);
            }
            fVar27 = DAT_ram_40099f9c;
            fVar24 = DAT_ram_40094604;
            if (fVar26 < DAT_ram_40099f9c) {
              fVar26 = DAT_ram_40094604;
            }
            fVar28 = *(float *)(param_1 + 0xe8e0) / fVar26;
            fVar29 = *(float *)((int)param_1 + 0x74704) / fVar26;
            *(float *)(param_1 + 0xe8e0) = fVar28;
            fVar23 = *(float *)(param_1 + 0xe8e1) / fVar26;
            *(float *)((int)param_1 + 0x74704) = fVar29;
            fVar22 = *(float *)((int)param_1 + 0x7470c) / fVar26;
            *(float *)(param_1 + 0xe8e1) = fVar23;
            fVar30 = *(float *)(param_1 + 0xe8e2) / fVar26;
            *(float *)((int)param_1 + 0x7470c) = fVar22;
            fVar31 = *(float *)((int)param_1 + 0x74714) / fVar26;
            *(float *)(param_1 + 0xe8e2) = fVar30;
            fVar32 = *(float *)(param_1 + 0xe8e3) / fVar26;
            *(float *)((int)param_1 + 0x74714) = fVar31;
            fVar26 = *(float *)((int)param_1 + 0x7471c) / fVar26;
            *(float *)(param_1 + 0xe8e3) = fVar32;
            fVar2 = fVar26 * fVar19 +
                    fVar32 * fVar34 +
                    fVar31 * fVar19 +
                    fVar30 * fVar34 +
                    fVar22 * fVar19 + fVar23 * fVar34 + fVar29 * fVar19 + fVar28 * fVar34 + 0.0;
            *(float *)((int)param_1 + 0x7471c) = fVar26;
            fVar28 = -(fVar2 * fVar28) + fVar34;
            fVar29 = -(fVar2 * fVar29) + fVar19;
            fVar23 = -(fVar2 * fVar23) + fVar34;
            fVar22 = -(fVar2 * fVar22) + fVar19;
            fVar30 = -(fVar2 * fVar30) + fVar34;
            fVar31 = -(fVar2 * fVar31) + fVar19;
            *(float *)(param_1 + 0xe8e5) = fVar23;
            *(float *)((int)param_1 + 0x7472c) = fVar22;
            *(float *)(param_1 + 0xe8e6) = fVar30;
            fVar34 = -(fVar2 * fVar32) + fVar34;
            *(float *)((int)param_1 + 0x74734) = fVar31;
            fVar19 = -(fVar26 * fVar2) + fVar19;
            *(float *)(param_1 + 0xe8e4) = fVar28;
            *(float *)(param_1 + 0xe8e7) = fVar34;
            *(float *)((int)param_1 + 0x74724) = fVar29;
            *(float *)((int)param_1 + 0x7473c) = fVar19;
            fVar26 = fVar19 * fVar19 +
                     fVar34 * fVar34 +
                     fVar31 * fVar31 +
                     fVar30 * fVar30 +
                     fVar22 * fVar22 + fVar23 * fVar23 + fVar29 * fVar29 + fVar28 * fVar28 + 0.0;
            if ((int)(param_1 + 0xe800) < 0x100 && fVar26 < 0.0) {
              fVar26 = (float)FUN_ram_40000e74();
            }
            else {
              fVar26 = SQRT(fVar26);
            }
            if (fVar26 < fVar27) {
              fVar26 = fVar24;
            }
            *(float *)(param_1 + 0xe8e4) = *(float *)(param_1 + 0xe8e4) / fVar26;
            *(float *)((int)param_1 + 0x74724) = *(float *)((int)param_1 + 0x74724) / fVar26;
            *(float *)(param_1 + 0xe8e5) = *(float *)(param_1 + 0xe8e5) / fVar26;
            *(float *)((int)param_1 + 0x7472c) = *(float *)((int)param_1 + 0x7472c) / fVar26;
            *(float *)(param_1 + 0xe8e6) = *(float *)(param_1 + 0xe8e6) / fVar26;
            *(float *)((int)param_1 + 0x74734) = *(float *)((int)param_1 + 0x74734) / fVar26;
            *(float *)(param_1 + 0xe8e7) = *(float *)(param_1 + 0xe8e7) / fVar26;
            *(float *)((int)param_1 + 0x7473c) = *(float *)((int)param_1 + 0x7473c) / fVar26;
            *(undefined1 *)((int)param_1 + 0x15) = 0;
            memset((int)param_1 + 0x1c,0,0x10a8);
            *(undefined2 *)((int)param_1 + 0x1a) = 0;
            memset(param_1 + 0x299,0,0x10000);
            *(undefined2 *)((int)param_1 + 0x10c6) = 0;
            if ((*(int *)(param_1 + 0x2299) != 0) && (*(ushort *)((int)param_1 + 0x114cc) != 0)) {
              memset(*(int *)(param_1 + 0x2299),0,
                               (uint)*(ushort *)((int)param_1 + 0x114cc) << 2);
              *(undefined2 *)((int)param_1 + 0x114ce) = 0;
            }
            if ((*(int *)((int)param_1 + 0x114d4) != 0) && (*(ushort *)(param_1 + 0x229b) != 0)) {
              memset(*(int *)((int)param_1 + 0x114d4),0,
                               (uint)*(ushort *)(param_1 + 0x229b) << 2);
              *(undefined2 *)((int)param_1 + 0x114da) = 0;
            }
            if ((*(int *)(param_1 + 0x229c) != 0) && (*(ushort *)((int)param_1 + 0x114e4) != 0)) {
              memset(*(int *)(param_1 + 0x229c),0,
                               (uint)*(ushort *)((int)param_1 + 0x114e4) << 2);
              *(undefined2 *)((int)param_1 + 0x114e6) = 0;
            }
            if ((*(int *)((int)param_1 + 0x114ec) != 0) && (*(ushort *)(param_1 + 0x229e) != 0)) {
              memset(*(int *)((int)param_1 + 0x114ec),0,
                               (uint)*(ushort *)(param_1 + 0x229e) << 2);
              *(undefined2 *)((int)param_1 + 0x114f2) = 0;
            }
            if ((*(int *)(param_1 + 0x229f) != 0) && (*(ushort *)((int)param_1 + 0x114fc) != 0)) {
              memset(*(int *)(param_1 + 0x229f),0,
                               (uint)*(ushort *)((int)param_1 + 0x114fc) << 2);
              *(undefined2 *)((int)param_1 + 0x114fe) = 0;
            }
            if ((*(int *)((int)param_1 + 0x11504) != 0) && (*(ushort *)(param_1 + 0x22a1) != 0)) {
              memset(*(int *)((int)param_1 + 0x11504),0,
                               (uint)*(ushort *)(param_1 + 0x22a1) << 2);
              *(undefined2 *)((int)param_1 + 0x1150a) = 0;
            }
            if ((*(int *)(param_1 + 0x22a2) != 0) && (*(ushort *)((int)param_1 + 0x11514) != 0)) {
              memset(*(int *)(param_1 + 0x22a2),0,
                               (uint)*(ushort *)((int)param_1 + 0x11514) << 2);
              *(undefined2 *)((int)param_1 + 0x11516) = 0;
            }
            if ((*(int *)((int)param_1 + 0x1151c) != 0) && (*(ushort *)(param_1 + 0x22a4) != 0)) {
              memset(*(int *)((int)param_1 + 0x1151c),0,
                               (uint)*(ushort *)(param_1 + 0x22a4) << 2);
              *(undefined2 *)((int)param_1 + 0x11522) = 0;
            }
            if ((*(int *)(param_1 + 0x2fad) != 0) && (*(ushort *)((int)param_1 + 0x17d6c) != 0)) {
              memset(*(int *)(param_1 + 0x2fad),0,
                               (uint)*(ushort *)((int)param_1 + 0x17d6c) << 2);
              *(undefined2 *)((int)param_1 + 0x17d6e) = 0;
            }
            if ((*(int *)((int)param_1 + 0x17d74) != 0) && (*(ushort *)(param_1 + 0x2faf) != 0)) {
              memset(*(int *)((int)param_1 + 0x17d74),0,
                               (uint)*(ushort *)(param_1 + 0x2faf) << 2);
              *(undefined2 *)((int)param_1 + 0x17d7a) = 0;
            }
            if ((*(int *)(param_1 + 0x2fb0) != 0) && (*(ushort *)((int)param_1 + 0x17d84) != 0)) {
              memset(*(int *)(param_1 + 0x2fb0),0,
                               (uint)*(ushort *)((int)param_1 + 0x17d84) << 2);
              *(undefined2 *)((int)param_1 + 0x17d86) = 0;
            }
            if ((*(int *)(param_1 + 0x31f6) != 0) && (*(ushort *)((int)param_1 + 0x18fb4) != 0)) {
              memset(*(int *)(param_1 + 0x31f6),0,
                               (uint)*(ushort *)((int)param_1 + 0x18fb4) << 2);
              *(undefined2 *)(param_1 + 0x31f7) = 0;
              *(undefined4 *)((int)param_1 + 0x18fbc) = 0;
            }
            *(undefined4 *)((int)param_1 + 0x746bc) = 0;
            *(undefined4 *)((int)param_1 + 0x74744) = 0;
            *(undefined4 *)((int)param_1 + 0x74784) = 0;
            *(undefined4 *)(param_1 + 0xe8f1) = 0;
            if ((*(int *)(param_1 + 0x31f8) != 0) && (*(ushort *)((int)param_1 + 0x18fc4) != 0)) {
              memset(*(int *)(param_1 + 0x31f8),0,
                               (uint)*(ushort *)((int)param_1 + 0x18fc4) << 2);
              *(undefined2 *)(param_1 + 0x31f9) = 0;
              *(undefined4 *)((int)param_1 + 0x18fcc) = 0;
            }
            *(undefined4 *)(param_1 + 0xe8d8) = 0;
            *(undefined4 *)((int)param_1 + 0x7474c) = 0;
            *(undefined4 *)(param_1 + 0xe8f2) = 0;
            *(undefined4 *)((int)param_1 + 0x74794) = 0;
            if ((*(int *)(param_1 + 0x31fa) != 0) && (*(ushort *)((int)param_1 + 0x18fd4) != 0)) {
              memset(*(int *)(param_1 + 0x31fa),0,
                               (uint)*(ushort *)((int)param_1 + 0x18fd4) << 2);
              *(undefined2 *)(param_1 + 0x31fb) = 0;
              *(undefined4 *)((int)param_1 + 0x18fdc) = 0;
            }
            *(undefined4 *)((int)param_1 + 0x746c4) = 0;
            *(undefined4 *)((int)param_1 + 0x74754) = 0;
            *(undefined4 *)((int)param_1 + 0x7479c) = 0;
            *(undefined4 *)(param_1 + 0xe8f4) = 0;
            if ((*(int *)(param_1 + 0x31fc) != 0) && (*(ushort *)((int)param_1 + 0x18fe4) != 0)) {
              memset(*(int *)(param_1 + 0x31fc),0,
                               (uint)*(ushort *)((int)param_1 + 0x18fe4) << 2);
              *(undefined2 *)(param_1 + 0x31fd) = 0;
              *(undefined4 *)((int)param_1 + 0x18fec) = 0;
            }
            *(undefined4 *)(param_1 + 0xe8d9) = 0;
            *(undefined4 *)((int)param_1 + 0x7475c) = 0;
            *(undefined4 *)(param_1 + 0xe8f5) = 0;
            *(undefined4 *)((int)param_1 + 0x747ac) = 0;
            if ((*(int *)(param_1 + 0x31fe) != 0) && (*(ushort *)((int)param_1 + 0x18ff4) != 0)) {
              memset(*(int *)(param_1 + 0x31fe),0,
                               (uint)*(ushort *)((int)param_1 + 0x18ff4) << 2);
              *(undefined2 *)(param_1 + 0x31ff) = 0;
              *(undefined4 *)((int)param_1 + 0x18ffc) = 0;
            }
            *(undefined4 *)((int)param_1 + 0x746cc) = 0;
            *(undefined4 *)((int)param_1 + 0x74764) = 0;
            *(undefined4 *)((int)param_1 + 0x747b4) = 0;
            *(undefined4 *)(param_1 + 0xe8f7) = 0;
            if ((*(int *)(param_1 + 0x3200) != 0) && (*(ushort *)((int)param_1 + 0x19004) != 0)) {
              memset(*(int *)(param_1 + 0x3200),0,
                               (uint)*(ushort *)((int)param_1 + 0x19004) << 2);
              *(undefined2 *)(param_1 + 0x3201) = 0;
              *(undefined4 *)((int)param_1 + 0x1900c) = 0;
            }
            *(undefined4 *)(param_1 + 0xe8da) = 0;
            *(undefined4 *)((int)param_1 + 0x7476c) = 0;
            *(undefined4 *)(param_1 + 0xe8f8) = 0;
            *(undefined4 *)((int)param_1 + 0x747c4) = 0;
            if ((*(int *)(param_1 + 0x3202) != 0) && (*(ushort *)((int)param_1 + 0x19014) != 0)) {
              memset(*(int *)(param_1 + 0x3202),0,
                               (uint)*(ushort *)((int)param_1 + 0x19014) << 2);
              *(undefined2 *)(param_1 + 0x3203) = 0;
              *(undefined4 *)((int)param_1 + 0x1901c) = 0;
            }
            *(undefined4 *)((int)param_1 + 0x746d4) = 0;
            *(undefined4 *)((int)param_1 + 0x74774) = 0;
            *(undefined4 *)((int)param_1 + 0x747cc) = 0;
            *(undefined4 *)(param_1 + 0xe8fa) = 0;
            if ((*(int *)(param_1 + 0x3204) != 0) && (*(ushort *)((int)param_1 + 0x19024) != 0)) {
              memset(*(int *)(param_1 + 0x3204),0,
                               (uint)*(ushort *)((int)param_1 + 0x19024) << 2);
              *(undefined2 *)(param_1 + 0x3205) = 0;
              *(undefined4 *)((int)param_1 + 0x1902c) = 0;
            }
            *(undefined4 *)((int)param_1 + 0x7477c) = 0;
            *(undefined4 *)(param_1 + 0xe8fb) = 0;
            *(undefined4 *)((int)param_1 + 0x747dc) = 0;
            *(undefined4 *)(param_1 + 0xe8db) = 0;
            *(undefined1 *)((int)param_1 + 0x746dc) = 0;
            *(undefined1 *)((int)param_1 + 0x16) = 0;
            break;
          }
        }
        goto LAB_ram_4005cdf4;
      }
LAB_ram_4005ce7c:
      local_b0[iVar10] = uVar11;
      iVar6 = iVar10 + 1;
      if ((int)uVar8 < iVar7) goto LAB_ram_4005cdf8;
LAB_ram_4005ce88:
      uVar11 = uVar8 + 1;
      if ((uVar8 & 1) != 0) goto LAB_ram_4005ce8e;
    } while( true );
  }
  fVar26 = DAT_ram_40094600;
  fVar34 = *(float *)((int)param_1 + 4);
  if (*(float *)((int)param_1 + 4) < DAT_ram_40094ee0) {
    fVar34 = DAT_ram_40094ee0;
  }
  fVar19 = *(float *)(param_1 + 1);
  fVar27 = DAT_ram_40099f6c;
  if ((0.0 <= fVar19) && (fVar27 = DAT_ram_40099f70, fVar19 <= fVar24)) {
    fVar27 = fVar19 * DAT_ram_40099fa0 + DAT_ram_40099f6c;
  }
  fVar28 = (float)*(undefined8 *)((int)param_1 + 0xc);
  fVar19 = 0.0;
  if ((0.0 <= fVar28) && (fVar19 = DAT_ram_40099f74, fVar28 <= fVar24)) {
    fVar19 = fVar28 * DAT_ram_40094e9c * DAT_ram_40099fa4;
  }
  fVar28 = DAT_ram_40094600 / (fVar18 * DAT_ram_40094ee0);
  *(float *)(param_1 + 0xe8c2) = fVar18 * fVar19;
  fVar19 = (float)FUN_ram_40000bd8(fVar28);
  *(float *)(param_1 + 0xe8c3) = fVar24 - fVar19;
  if (cVar1 == '\0') {
    fVar19 = *(float *)((int)param_1 + 0x74614);
  }
  else {
    fVar19 = *(float *)(param_1 + 0xe8c2);
    *(float *)((int)param_1 + 0x74614) = fVar19;
  }
  fVar28 = DAT_ram_4009463c;
  fVar29 = (float)param_1[2];
  if ((float)param_1[2] < DAT_ram_400952c0) {
    fVar29 = DAT_ram_400952c0;
  }
  fVar23 = (fVar29 * *(float *)((int)param_1 + 0x7461c) * fVar25 * DAT_ram_4009463c) / fVar18;
  uVar20 = FUN_ram_400009d2(fVar23);
  *(undefined4 *)((int)param_1 + 0x7467c) = uVar20;
  uVar20 = FUN_ram_40000712(fVar23);
  *(undefined4 *)((int)param_1 + 0x7469c) = uVar20;
  *(float *)((int)param_1 + 0x746bc) = *(float *)((int)param_1 + 0x7463c) * fVar19;
  fVar23 = (fVar29 * *(float *)(param_1 + 0xe8c4) * fVar25 * fVar28) / fVar18;
  uVar20 = FUN_ram_400009d2(fVar23);
  *(undefined4 *)(param_1 + 0xe8d0) = uVar20;
  uVar20 = FUN_ram_40000712(fVar23);
  *(undefined4 *)(param_1 + 0xe8d4) = uVar20;
  *(float *)(param_1 + 0xe8d8) = *(float *)(param_1 + 0xe8c8) * fVar19;
  fVar23 = (fVar29 * *(float *)((int)param_1 + 0x74624) * fVar25 * fVar28) / fVar18;
  uVar20 = FUN_ram_400009d2(fVar23);
  *(undefined4 *)((int)param_1 + 0x74684) = uVar20;
  uVar20 = FUN_ram_40000712(fVar23);
  *(undefined4 *)((int)param_1 + 0x746a4) = uVar20;
  *(float *)((int)param_1 + 0x746c4) = *(float *)((int)param_1 + 0x74644) * fVar19;
  fVar23 = (fVar29 * *(float *)(param_1 + 0xe8c5) * fVar25 * fVar28) / fVar18;
  uVar20 = FUN_ram_400009d2(fVar23);
  *(undefined4 *)(param_1 + 0xe8d1) = uVar20;
  uVar20 = FUN_ram_40000712(fVar23);
  *(undefined4 *)(param_1 + 0xe8d5) = uVar20;
  *(float *)(param_1 + 0xe8d9) = *(float *)(param_1 + 0xe8c9) * fVar19;
  fVar23 = (fVar29 * *(float *)((int)param_1 + 0x7462c) * fVar25 * fVar28) / fVar18;
  uVar20 = FUN_ram_400009d2(fVar23);
  *(undefined4 *)((int)param_1 + 0x7468c) = uVar20;
  uVar20 = FUN_ram_40000712(fVar23);
  *(undefined4 *)((int)param_1 + 0x746ac) = uVar20;
  *(float *)((int)param_1 + 0x746cc) = *(float *)((int)param_1 + 0x7464c) * fVar19;
  fVar23 = (fVar29 * *(float *)(param_1 + 0xe8c6) * fVar25 * fVar28) / fVar18;
  uVar20 = FUN_ram_400009d2(fVar23);
  *(undefined4 *)(param_1 + 0xe8d2) = uVar20;
  uVar20 = FUN_ram_40000712(fVar23);
  *(undefined4 *)(param_1 + 0xe8d6) = uVar20;
  *(float *)(param_1 + 0xe8da) = *(float *)(param_1 + 0xe8ca) * fVar19;
  fVar23 = (fVar29 * *(float *)((int)param_1 + 0x74634) * fVar25 * fVar28) / fVar18;
  uVar20 = FUN_ram_400009d2(fVar23);
  *(undefined4 *)((int)param_1 + 0x74694) = uVar20;
  uVar20 = FUN_ram_40000712(fVar23);
  *(undefined4 *)((int)param_1 + 0x746b4) = uVar20;
  *(float *)((int)param_1 + 0x746d4) = *(float *)((int)param_1 + 0x74654) * fVar19;
  fVar25 = (fVar29 * *(float *)(param_1 + 0xe8c7) * fVar25 * fVar28) / fVar18;
  uVar20 = FUN_ram_400009d2(fVar25);
  *(undefined4 *)(param_1 + 0xe8d3) = uVar20;
  uVar21 = FUN_ram_40000712(fVar25);
  fVar28 = DAT_ram_40099fa8;
  uVar20 = DAT_ram_40094e90;
  *(undefined4 *)(param_1 + 0xe8d7) = uVar21;
  *(undefined1 *)((int)param_1 + 0x746dc) = 0;
  *(float *)(param_1 + 0xe8db) = *(float *)(param_1 + 0xe8cb) * fVar19;
  fVar29 = DAT_ram_40099fb0;
  fVar19 = DAT_ram_40099fac;
  fVar25 = DAT_ram_40095450;
  if (fVar27 < fVar24) {
    pfVar13 = (float *)(param_1 + 0xe8ba);
    pfVar17 = (float *)(param_1 + 0xe8e8);
    pfVar12 = (float *)(param_1 + 0xe8f0);
    do {
      while( true ) {
        fVar23 = (float)FUN_ram_40000d44(uVar20,((*pfVar13 / fVar18) * fVar28) / fVar34);
        fVar27 = fVar18 * fVar3 + fVar26;
        pfVar13[8] = fVar23;
        fVar23 = (float)FUN_ram_40000bd8(fVar19 / fVar18);
        *pfVar17 = fVar24 - fVar23;
        if (fVar27 < fVar25) break;
        pfVar13 = pfVar13 + 1;
        pfVar17 = pfVar17 + 2;
        fVar27 = (float)FUN_ram_40000bd8(fVar29 / fVar18);
        *pfVar12 = fVar24 - fVar27;
        pfVar12 = pfVar12 + 3;
        if ((float *)(param_1 + 0xe8be) == pfVar13) goto LAB_ram_4005cbee;
      }
      pfVar13 = pfVar13 + 1;
      pfVar17 = pfVar17 + 2;
      fVar27 = (float)FUN_ram_40000bd8((fVar27 * fVar19) / fVar18);
      *pfVar12 = fVar24 - fVar27;
      pfVar12 = pfVar12 + 3;
    } while ((float *)(param_1 + 0xe8be) != pfVar13);
  }
  else {
    puVar4 = param_1 + 0xe8ba;
    pfVar13 = (float *)(param_1 + 0xe8e8);
    pfVar12 = (float *)(param_1 + 0xe8f0);
    do {
      while( true ) {
        uVar33 = FUN_ram_40000d44(uVar20,(((float)*puVar4 / fVar18) * fVar28) / fVar34);
        fVar23 = fVar18 * fVar3 + fVar26;
        puVar4[4] = uVar33;
        fVar22 = fVar23;
        if (fVar27 <= fVar23) {
          fVar22 = fVar27;
        }
        fVar22 = (float)FUN_ram_40000bd8((fVar22 * fVar19) / fVar18);
        *pfVar13 = fVar24 - fVar22;
        if (fVar23 < fVar25) break;
        puVar4 = (undefined8 *)((int)puVar4 + 4);
        pfVar13 = pfVar13 + 2;
        fVar23 = (float)FUN_ram_40000bd8(fVar29 / fVar18);
        *pfVar12 = fVar24 - fVar23;
        pfVar12 = pfVar12 + 3;
        if (puVar4 == param_1 + 0xe8be) goto LAB_ram_4005cbee;
      }
      puVar4 = (undefined8 *)((int)puVar4 + 4);
      pfVar13 = pfVar13 + 2;
      fVar23 = (float)FUN_ram_40000bd8((fVar23 * fVar19) / fVar18);
      *pfVar12 = fVar24 - fVar23;
      pfVar12 = pfVar12 + 3;
    } while (param_1 + 0xe8be != puVar4);
  }
LAB_ram_4005cbee:
  *(float *)(param_1 + 0xe8fc) = DAT_ram_40094604;
  *(undefined1 *)((int)param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  return;
LAB_ram_4005ce8e:
  iVar10 = iVar6;
  uVar11 = uVar5;
  if ((uVar5 & 1) == 0) {
    uVar11 = iVar7 - 2;
  }
  goto LAB_ram_4005ce2e;
}


