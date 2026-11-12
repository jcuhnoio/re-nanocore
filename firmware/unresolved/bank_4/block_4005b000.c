/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4005b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4005b120.
 * REA evidence: ev_b59cadc76899c98d604afd8f61829b1f0d3610da189557cc4cee6c0a489190df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005b120(int param_1,uint param_2,uint param_3)

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


/* NanoCore 1.10, address 0x4005b14a.
 * REA evidence: ev_d8b3ef656a7e913b7aae4a921f40135b422318e8f948328d083c01b392ec1aca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005b14a(ulonglong param_1,ulonglong *param_2)

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
  
  fVar12 = DAT_ram_4009808c;
  fVar11 = DAT_ram_40098088;
  fVar14 = DAT_ram_40098084;
  fVar13 = DAT_ram_40098080;
  fVar23 = DAT_ram_4009281c;
  if (param_2 != (ulonglong *)0x0) {
    fVar15 = (float)param_1;
    fVar21 = fVar23;
    if (fVar15 <= 0.0) {
      uVar10 = (ulonglong)DAT_ram_40098074;
      uVar17 = (ulonglong)DAT_ram_40098078;
      uVar20 = (ulonglong)DAT_ram_4009807c;
      *param_2 = (ulonglong)DAT_ram_40092878;
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
        fVar12 = DAT_ram_400980a8 / fVar15;
        fVar11 = (float)FUN_ram_40000a08(fVar12);
        fVar12 = (float)FUN_ram_40000786(fVar12);
        puVar8 = PTR_firmware_entry_ram_40092830;
        fVar11 = fVar11 / DAT_ram_400980ac;
        fVar14 = fVar12 * 0.0 + (float)PTR_firmware_entry_ram_40092830;
        fVar4 = -(fVar12 * 0.0) + (float)PTR_firmware_entry_ram_40092830;
        fVar5 = -(fVar12 * (float)PTR_firmware_entry_ram_40092830) + 0.0;
        fVar15 = DAT_ram_400980b0 / fVar15;
        fVar2 = fVar11 * (float)PTR_firmware_entry_ram_40092830;
        fVar3 = fVar11 * (float)PTR_firmware_entry_ram_40092830;
        fVar22 = fVar23 / (fVar11 * (float)PTR_firmware_entry_ram_40092830 + fVar14);
        fVar12 = (fVar12 * (float)PTR_firmware_entry_ram_40092830 + 0.0) * DAT_ram_40092834 * fVar22
        ;
        fVar11 = (-(fVar11 * (float)PTR_firmware_entry_ram_40092830) + fVar14) * fVar22;
        fVar9 = in_register_00000100;
        fVar13 = (float)FUN_ram_40000a08(fVar15);
        fVar14 = (float)FUN_ram_40000786(fVar15);
        fVar21 = fVar13 / DAT_ram_400980b4 + fVar23;
        fVar1 = fVar23 / fVar21;
        fVar14 = fVar14 * in_register_00000100 * fVar1;
        fVar13 = (fVar23 - fVar13 / DAT_ram_400980b4) * fVar1;
        fVar15 = (float)FUN_ram_40000a08(fVar9);
        fVar16 = (float)FUN_ram_40000786(fVar9);
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
        uVar17 = (ulonglong)DAT_ram_40098094;
        uVar10 = (ulonglong)DAT_ram_40098090;
        uVar18 = uVar17;
        uVar19 = uVar10;
        fVar11 = DAT_ram_400980a0;
        fVar12 = DAT_ram_400980a4;
        fVar13 = DAT_ram_40098098;
        fVar14 = DAT_ram_4009809c;
        fVar15 = DAT_ram_400980a4;
        fVar22 = DAT_ram_400980a0;
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


/* NanoCore 1.10, address 0x4005b422.
 * REA evidence: ev_ef6b86e3f9cdd3fbf09784440713c78a9444e12c9f091b9b047a4391972eedee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4005b4a4) */
/* WARNING: Removing unreachable block (ram,0x4005b536) */

void FUN_ram_4005b422(undefined8 param_1,float *param_2)

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
  
  fVar2 = DAT_ram_4009281c;
  if (param_2 != (float *)0x0) {
    bVar3 = *param_2 < DAT_ram_4009281c;
    *(undefined8 *)(param_2 + 0x16) = param_1;
    fVar11 = *param_2;
    if (bVar3) {
      fVar11 = fVar2;
    }
    fVar8 = (float)FUN_ram_40000d54(DAT_ram_400930a4,(float)param_1 / DAT_ram_400930dc);
    fVar11 = DAT_ram_400980a8 / fVar11;
    fVar9 = (float)FUN_ram_40000a08(fVar11);
    fVar10 = (float)FUN_ram_40000786(fVar11);
    fVar9 = fVar9 / DAT_ram_400980ac;
    fVar11 = fVar8 + fVar2;
    fVar7 = fVar8 - fVar2;
    fVar1 = SQRT(fVar8) + SQRT(fVar8);
    fVar4 = fVar10 * fVar7 + fVar11;
    fVar6 = -(fVar10 * fVar7) + fVar11;
    fVar5 = (fVar10 * fVar11 + fVar7) * DAT_ram_40092834;
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


/* NanoCore 1.10, address 0x4005b544.
 * REA evidence: ev_3e12e83c6be02eca56481da1e32cc32ae9b89d55d6ff9227e17afd5d45016c82
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005b544(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  float fVar6;
  
  fVar1 = DAT_ram_4009281c;
  if (param_2 == (float *)0x0) {
    return;
  }
  fVar6 = DAT_ram_400980bc;
  if (0.0 <= (float)param_1) {
    fVar6 = DAT_ram_400941ec;
  }
  *(undefined8 *)(param_2 + 0x17) = param_1;
  fVar4 = *param_2;
  if (*param_2 < fVar1) {
    fVar4 = fVar1;
  }
  fVar2 = (float)FUN_ram_40000d54(DAT_ram_400930a4,(float)param_1 / DAT_ram_400930dc);
  fVar4 = DAT_ram_400980b0 / fVar4;
  fVar3 = (float)FUN_ram_40000a08(fVar4);
  fVar3 = fVar3 / (fVar6 + fVar6);
  fVar4 = (float)FUN_ram_40000786(fVar4);
  fVar6 = fVar1 / (fVar3 / fVar2 + fVar1);
  uVar5 = (ulonglong)(uint)(fVar4 * DAT_ram_40092834 * fVar6);
  *(ulonglong *)(param_2 + 9) = uVar5;
  *(ulonglong *)(param_2 + 10) = (ulonglong)(uint)((-(fVar2 * fVar3) + fVar1) * fVar6);
  *(ulonglong *)(param_2 + 8) = (ulonglong)(uint)((fVar2 * fVar3 + fVar1) * fVar6);
  *(ulonglong *)(param_2 + 0xc) = (ulonglong)(uint)((fVar1 - fVar3 / fVar2) * fVar6);
  *(ulonglong *)(param_2 + 0xb) = uVar5;
  return;
}


/* NanoCore 1.10, address 0x4005b626.
 * REA evidence: ev_88301188faff6c890b8aa321d489806424e7eff7121d81b49ddac45f7e795edf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4005b6a8) */
/* WARNING: Removing unreachable block (ram,0x4005b738) */

void FUN_ram_4005b626(undefined8 param_1,float *param_2)

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
  
  fVar2 = DAT_ram_4009281c;
  if (param_2 != (float *)0x0) {
    bVar3 = *param_2 < DAT_ram_4009281c;
    *(undefined8 *)(param_2 + 0x18) = param_1;
    fVar12 = *param_2;
    if (bVar3) {
      fVar12 = fVar2;
    }
    fVar9 = (float)FUN_ram_40000d54(DAT_ram_400930a4,(float)param_1 / DAT_ram_400930dc);
    fVar12 = DAT_ram_400980b8 / fVar12;
    fVar10 = (float)FUN_ram_40000a08(fVar12);
    fVar11 = (float)FUN_ram_40000786(fVar12);
    fVar10 = fVar10 / DAT_ram_400980ac;
    fVar12 = fVar9 + fVar2;
    fVar8 = fVar9 - fVar2;
    fVar1 = SQRT(fVar9) + SQRT(fVar9);
    fVar6 = -(fVar11 * fVar8) + fVar12;
    fVar4 = fVar11 * fVar8 + fVar12;
    fVar7 = -(fVar11 * fVar12) + fVar8;
    fVar5 = fVar9 * DAT_ram_40092834;
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


/* NanoCore 1.10, address 0x4005b746.
 * REA evidence: ev_7425b2bfa3d20a037731c03d002132a7e046039751e25f2a84ea8b30a443226e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_4005b746(float param_1,int param_2)

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


/* NanoCore 1.10, address 0x4005b7e8.
 * REA evidence: ev_f2f66c25b33103a8747d6c6e9b6363357f62d1e27f9af03ec3317c98d37c031b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4005d208) */
/* WARNING: Removing unreachable block (ram,0x4005d2b4) */
/* WARNING: Removing unreachable block (ram,0x4005d318) */
/* WARNING: Removing unreachable block (ram,0x4005d26a) */
/* WARNING: Removing unreachable block (ram,0x4005d0fa) */
/* WARNING: Removing unreachable block (ram,0x4005d346) */
/* WARNING: Removing unreachable block (ram,0x4005d2e6) */
/* WARNING: Removing unreachable block (ram,0x4005d238) */
/* WARNING: Removing unreachable block (ram,0x4005cb6c) */
/* WARNING: Removing unreachable block (ram,0x4005d210) */
/* WARNING: Removing unreachable block (ram,0x4005d2bc) */
/* WARNING: Removing unreachable block (ram,0x4005d320) */
/* WARNING: Removing unreachable block (ram,0x4005d272) */
/* WARNING: Removing unreachable block (ram,0x4005d102) */
/* WARNING: Removing unreachable block (ram,0x4005d34e) */
/* WARNING: Removing unreachable block (ram,0x4005d2ee) */
/* WARNING: Removing unreachable block (ram,0x4005d240) */
/* WARNING: Removing unreachable block (ram,0x4005d35a) */
/* WARNING: Removing unreachable block (ram,0x4005d0c8) */
/* WARNING: Removing unreachable block (ram,0x4005d0d0) */
/* WARNING: Removing unreachable block (ram,0x4005d096) */
/* WARNING: Removing unreachable block (ram,0x4005d09e) */

void FUN_ram_4005b7e8(float *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  float *pfVar13;
  int iVar14;
  uint uVar15;
  float *extraout_a5;
  float *pfVar16;
  int extraout_a5_00;
  int extraout_a5_01;
  int extraout_a5_02;
  int extraout_a5_03;
  int extraout_a5_04;
  int *piVar17;
  float fVar18;
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
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  float fVar36;
  uint local_b0 [4];
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  
  fVar24 = DAT_ram_400980e0;
  fVar3 = DAT_ram_40092864;
  if (param_1 == (float *)0x0) {
    return;
  }
  fVar2 = *param_1;
  if (fVar2 <= DAT_ram_40093094) {
    cVar1 = *(char *)((int)param_1 + 0x15);
    fVar2 = DAT_ram_40092878;
  }
  else {
    cVar1 = *(char *)((int)param_1 + 0x15);
  }
  fVar22 = DAT_ram_400980f4;
  fVar23 = DAT_ram_4009281c;
  if (cVar1 != '\0') {
    uVar32 = (ulonglong)DAT_ram_400980e4;
    fVar23 = fVar2 * DAT_ram_400980d8 + DAT_ram_40092864;
    uVar12 = (uint)(-1 < (int)fVar23) * (int)fVar23;
    if (0x42a < uVar12) {
      uVar12 = 0x42a;
    }
    *(short *)(param_1 + 6) = (short)uVar12;
    *(undefined2 *)((int)param_1 + 0x1a) = 0;
    param_1[0x431] = DAT_ram_400980dc;
    piVar17 = &DAT_ram_40098120;
    pfVar6 = param_1 + 0x4532;
    pfVar13 = param_1 + 0x454a;
    do {
      fVar23 = (float)FUN_ram_40000800(((float)*piVar17 * fVar2) / fVar24 + fVar3);
      iVar14 = (int)fVar23;
      iVar10 = 0x342;
      if ((iVar14 < 0x343) && (iVar10 = iVar14, iVar14 < 1)) {
        iVar10 = 1;
      }
      *pfVar6 = (float)pfVar13;
      *(short *)(pfVar6 + 1) = (short)iVar10;
      *(undefined2 *)((int)pfVar6 + 6) = 0;
      *(ulonglong *)(pfVar6 + 2) = uVar32;
      pfVar7 = pfVar13 + 0x342;
      memset(pfVar13,0,iVar10 << 2);
      piVar17 = piVar17 + 1;
      pfVar6 = pfVar6 + 3;
      pfVar13 = pfVar7;
    } while (param_1 + 0x5f5a != pfVar7);
    uVar32 = (ulonglong)(uint)DAT_ram_400980e8;
    piVar17 = &DAT_ram_40098140;
    pfVar6 = param_1 + 0x5f5a;
    pfVar13 = param_1 + 0x5f63;
    do {
      fVar23 = (float)FUN_ram_40000800(((float)*piVar17 * fVar2) / fVar24 + fVar3);
      iVar14 = (int)fVar23;
      iVar10 = 0x183;
      if ((iVar14 < 0x184) && (iVar10 = iVar14, iVar14 < 1)) {
        iVar10 = 1;
      }
      *pfVar6 = (float)pfVar13;
      *(short *)(pfVar6 + 1) = (short)iVar10;
      *(undefined2 *)((int)pfVar6 + 6) = 0;
      *(ulonglong *)(pfVar6 + 2) = uVar32;
      pfVar7 = pfVar13 + 0x183;
      memset(pfVar13,0,iVar10 << 2);
      piVar17 = piVar17 + 1;
      pfVar6 = pfVar6 + 3;
      pfVar13 = pfVar7;
    } while (pfVar7 != param_1 + 0x63ec);
    uVar12 = 2;
    fVar24 = (float)FUN_ram_40000800(fVar2 * DAT_ram_400980ec);
    uVar5 = (uint)fVar24;
    fVar23 = (float)FUN_ram_40000800(fVar2 * DAT_ram_400934d8);
    fVar24 = DAT_ram_400980f0;
    iVar10 = (int)fVar23;
    if ((int)fVar23 <= (int)(uVar5 + 1)) {
      iVar10 = uVar5 + 2;
    }
    uVar9 = iVar10 - 1;
    iVar14 = 0;
joined_r0x4005bda4:
    do {
      if ((int)uVar5 < iVar10) {
        uVar12 = uVar12 * 0x19660d + 0x3c6ef35f;
        uVar15 = (int)((float)(uVar12 >> 8) * DAT_ram_400980f0 * (float)(int)(iVar10 - uVar5)) +
                 uVar5;
        if (iVar10 <= (int)uVar15) {
          uVar15 = uVar9;
        }
        uVar15 = uVar15 + ((uVar15 & 1) == 0);
joined_r0x4005be3e:
        if (iVar10 <= (int)uVar15) goto LAB_ram_4005be44;
      }
      else {
        uVar15 = uVar5 + 1;
        if ((uVar5 & 1) == 0) goto joined_r0x4005be3e;
LAB_ram_4005be44:
        uVar15 = uVar9;
        if ((uVar9 & 1) == 0) {
          uVar15 = iVar10 - 2;
        }
      }
      if (iVar14 == 0) {
LAB_ram_4005be2c:
        local_b0[iVar14] = uVar15;
        iVar14 = iVar14 + 1;
        goto joined_r0x4005bda4;
      }
      if (uVar15 == local_b0[0]) goto joined_r0x4005bda4;
      if (iVar14 != 1) {
        if (uVar15 == local_b0[1]) goto joined_r0x4005bda4;
        if (iVar14 != 2) {
          if (uVar15 == local_b0[2]) goto joined_r0x4005bda4;
          if (iVar14 != 3) {
            if (uVar15 == local_b0[3]) goto joined_r0x4005bda4;
            if (iVar14 != 4) {
              if (uVar15 == uStack_a0) goto joined_r0x4005bda4;
              if (iVar14 != 5) {
                if (uVar15 == uStack_9c) goto joined_r0x4005bda4;
                if (iVar14 != 6) {
                  if (uVar15 == uStack_98) goto joined_r0x4005bda4;
                  if (iVar14 == 8) {
                    if (uStack_94 != uVar15) goto LAB_ram_4005be2c;
                    goto joined_r0x4005bda4;
                  }
                }
              }
            }
          }
        }
      }
      iVar11 = iVar14 + 1;
      local_b0[iVar14] = uVar15;
      iVar14 = iVar11;
    } while (iVar11 != 8);
    param_1[0x1d174] = (float)(int)local_b0[0];
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
    fVar23 = fVar2 * DAT_ram_400980d4;
    if ((int)local_b0[0] < (int)uStack_98) {
      local_b0[0] = uStack_98;
    }
    uVar5 = local_b0[0];
    if ((int)local_b0[0] <= (int)uStack_94) {
      uVar5 = uStack_94;
    }
    param_1[0x1d175] = (float)(int)local_b0[1];
    param_1[0x1d176] = (float)(int)local_b0[2];
    param_1[0x1d177] = (float)(int)local_b0[3];
    param_1[0x1d178] = (float)(int)uStack_a0;
    param_1[0x1d179] = (float)(int)uStack_9c;
    param_1[0x1d17a] = (float)(int)uStack_98;
    param_1[0x1d17b] = (float)(int)uStack_94;
    fVar23 = (float)FUN_ram_40000800(fVar23 + fVar3);
    uVar5 = (int)fVar23 + 4 + uVar5;
    if (0x2dab < (int)uVar5) {
      uVar5 = 0x2dab;
    }
    if ((uVar5 & 0xffff) == 0) {
      uVar5 = 1;
    }
    if (0x2dad < (uVar5 & 0xffff) + 2) {
      uVar5 = 0x2dab;
    }
    uVar9 = (uVar5 & 0xffff) + 2;
    pfVar6 = param_1 + 0x63ec;
    pfVar13 = param_1 + 0x640c;
    do {
      *pfVar6 = (float)pfVar13;
      *(short *)((int)pfVar6 + 6) = (short)uVar5;
      *(short *)(pfVar6 + 1) = (short)(uVar9 * 0x10000 >> 0x10);
      *(undefined2 *)(pfVar6 + 2) = 0;
      pfVar6[3] = 0.0;
      pvVar8 = memset(pfVar13,0,(uVar9 & 0xffff) << 2);
      fVar22 = DAT_ram_400980f4;
      fVar36 = DAT_ram_400980e8;
      fVar23 = DAT_ram_4009287c;
      pfVar6 = pfVar6 + 4;
      pfVar13 = (float *)((int)pvVar8 + 0xb6b4);
    } while (param_1 + 0x640c != pfVar6);
    uVar12 = uVar12 * 0x19660d + 0x3c6ef35f;
    pfVar6 = param_1 + 0x1d1b8;
    uVar9 = 2;
    uVar5 = uVar12 * 0x19660d + 0x3c6ef35f;
    iVar10 = 0;
    fVar18 = (float)(uVar12 >> 8) * fVar24 * DAT_ram_400980f4;
    param_1[0x1d187] = (float)(uVar5 >> 8) * fVar24 * DAT_ram_4009287c + DAT_ram_400980e8;
    fVar25 = (float)FUN_ram_40000a08(fVar18);
    param_1[0x1d18f] = fVar25;
    fVar18 = (float)FUN_ram_40000786(fVar18);
    uVar12 = uVar5 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d197] = fVar18;
    uVar5 = uVar12 * 0x19660d + 0x3c6ef35f;
    fVar18 = (float)(uVar12 >> 8) * fVar24 * fVar22;
    param_1[0x1d188] = (float)(uVar5 >> 8) * fVar24 * fVar23 + fVar36;
    fVar25 = (float)FUN_ram_40000a08(fVar18);
    param_1[0x1d190] = fVar25;
    fVar18 = (float)FUN_ram_40000786(fVar18);
    uVar12 = uVar5 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d198] = fVar18;
    uVar5 = uVar12 * 0x19660d + 0x3c6ef35f;
    fVar18 = (float)(uVar12 >> 8) * fVar24 * fVar22;
    param_1[0x1d189] = (float)(uVar5 >> 8) * fVar24 * fVar23 + fVar36;
    fVar25 = (float)FUN_ram_40000a08(fVar18);
    param_1[0x1d191] = fVar25;
    fVar18 = (float)FUN_ram_40000786(fVar18);
    uVar12 = uVar5 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d199] = fVar18;
    uVar5 = uVar12 * 0x19660d + 0x3c6ef35f;
    fVar18 = (float)(uVar12 >> 8) * fVar24 * fVar22;
    param_1[0x1d18a] = (float)(uVar5 >> 8) * fVar24 * fVar23 + fVar36;
    fVar25 = (float)FUN_ram_40000a08(fVar18);
    param_1[0x1d192] = fVar25;
    fVar18 = (float)FUN_ram_40000786(fVar18);
    uVar12 = uVar5 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d19a] = fVar18;
    uVar5 = uVar12 * 0x19660d + 0x3c6ef35f;
    fVar18 = (float)(uVar12 >> 8) * fVar24 * fVar22;
    param_1[0x1d18b] = (float)(uVar5 >> 8) * fVar24 * fVar23 + fVar36;
    fVar25 = (float)FUN_ram_40000a08(fVar18);
    param_1[0x1d193] = fVar25;
    fVar18 = (float)FUN_ram_40000786(fVar18);
    uVar12 = uVar5 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d19b] = fVar18;
    uVar5 = uVar12 * 0x19660d + 0x3c6ef35f;
    fVar18 = (float)(uVar12 >> 8) * fVar24 * fVar22;
    param_1[0x1d18c] = (float)(uVar5 >> 8) * fVar24 * fVar23 + fVar36;
    fVar25 = (float)FUN_ram_40000a08(fVar18);
    param_1[0x1d194] = fVar25;
    fVar18 = (float)FUN_ram_40000786(fVar18);
    uVar12 = uVar5 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d19c] = fVar18;
    uVar5 = uVar12 * 0x19660d + 0x3c6ef35f;
    fVar18 = (float)(uVar12 >> 8) * fVar24 * fVar22;
    param_1[0x1d18d] = (float)(uVar5 >> 8) * fVar24 * fVar23 + fVar36;
    fVar25 = (float)FUN_ram_40000a08(fVar18);
    param_1[0x1d195] = fVar25;
    fVar18 = (float)FUN_ram_40000786(fVar18);
    uVar12 = uVar5 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d19d] = fVar18;
    uVar5 = uVar12 * 0x19660d + 0x3c6ef35f;
    fVar18 = (float)(uVar12 >> 8) * fVar24 * fVar22;
    param_1[0x1d18e] = (float)(uVar5 >> 8) * fVar24 * fVar23 + fVar36;
    fVar23 = (float)FUN_ram_40000a08(fVar18);
    param_1[0x1d196] = fVar23;
    fVar21 = (float)FUN_ram_40000786(fVar18);
    fVar25 = DAT_ram_400980fc;
    fVar18 = DAT_ram_400980f8;
    fVar36 = DAT_ram_400980c0;
    fVar23 = DAT_ram_40092834;
    param_1[0x1d19e] = fVar21;
    pfVar13 = pfVar6;
    do {
      uVar12 = uVar9 * 0x19660d + 0x3c6ef35f;
      uVar9 = uVar12 * 0x19660d + 0x3c6ef35f;
      fVar21 = fVar36;
      if (fVar25 <= (float)(uVar12 >> 8) * fVar24) {
        fVar26 = (float)FUN_ram_40000c86();
        fVar21 = fVar26 * fVar23;
        if (0xff < extraout_a5_04 || 0.0 <= fVar26 * fVar23) goto LAB_ram_4005c386;
        fVar21 = (float)FUN_ram_40000e84();
      }
      else {
LAB_ram_4005c386:
        fVar21 = SQRT(fVar21);
      }
      fVar26 = (float)FUN_ram_40000786((float)(uVar9 >> 8) * fVar24 * fVar22);
      uVar12 = uVar9 * 0x19660d + 0x3c6ef35f;
      *(ulonglong *)pfVar13 = (ulonglong)(uint)(fVar21 * fVar26);
      uVar9 = uVar12 * 0x19660d + 0x3c6ef35f;
      fVar21 = fVar36;
      if (fVar25 <= (float)(uVar12 >> 8) * fVar24) {
        fVar26 = (float)FUN_ram_40000c86();
        fVar21 = fVar26 * fVar23;
        if (0xff < extraout_a5_03 || 0.0 <= fVar26 * fVar23) goto LAB_ram_4005c3c6;
        fVar21 = (float)FUN_ram_40000e84();
      }
      else {
LAB_ram_4005c3c6:
        fVar21 = SQRT(fVar21);
      }
      fVar26 = (float)FUN_ram_40000786((float)(uVar9 >> 8) * fVar24 * fVar22);
      uVar12 = uVar9 * 0x19660d + 0x3c6ef35f;
      *(ulonglong *)(pfVar13 + 1) = (ulonglong)(uint)(fVar21 * fVar26);
      uVar9 = uVar12 * 0x19660d + 0x3c6ef35f;
      fVar21 = fVar36;
      if (fVar25 <= (float)(uVar12 >> 8) * fVar24) {
        fVar26 = (float)FUN_ram_40000c86();
        fVar21 = fVar26 * fVar23;
        if (0xff < extraout_a5_02 || 0.0 <= fVar26 * fVar23) goto LAB_ram_4005c406;
        fVar21 = (float)FUN_ram_40000e84();
      }
      else {
LAB_ram_4005c406:
        fVar21 = SQRT(fVar21);
      }
      fVar26 = (float)FUN_ram_40000786((float)(uVar9 >> 8) * fVar24 * fVar22);
      uVar12 = uVar9 * 0x19660d + 0x3c6ef35f;
      *(ulonglong *)(pfVar13 + 2) = (ulonglong)(uint)(fVar21 * fVar26);
      uVar9 = uVar12 * 0x19660d + 0x3c6ef35f;
      fVar21 = fVar36;
      if (fVar25 <= (float)(uVar12 >> 8) * fVar24) {
        fVar26 = (float)FUN_ram_40000c86();
        fVar21 = fVar26 * fVar23;
        if (0xff < extraout_a5_01 || 0.0 <= fVar26 * fVar23) goto LAB_ram_4005c446;
        fVar21 = (float)FUN_ram_40000e84();
      }
      else {
LAB_ram_4005c446:
        fVar21 = SQRT(fVar21);
      }
      fVar26 = (float)FUN_ram_40000786((float)(uVar9 >> 8) * fVar24 * fVar22);
      uVar12 = uVar9 * 0x19660d + 0x3c6ef35f;
      *(ulonglong *)(pfVar13 + 3) = (ulonglong)(uint)(fVar21 * fVar26);
      uVar9 = uVar12 * 0x19660d + 0x3c6ef35f;
      fVar21 = DAT_ram_400980c0;
      if (fVar25 <= (float)(uVar12 >> 8) * fVar24) {
        fVar26 = (float)FUN_ram_40000c86();
        fVar21 = fVar26 * fVar23;
        if (0xff < extraout_a5_00 || 0.0 <= fVar26 * fVar23) goto LAB_ram_4005c48a;
        fVar21 = (float)FUN_ram_40000e84();
      }
      else {
LAB_ram_4005c48a:
        fVar21 = SQRT(fVar21);
      }
      fVar26 = (float)FUN_ram_40000786((float)(uVar9 >> 8) * fVar24 * fVar22);
      uVar12 = uVar9 * 0x19660d + 0x3c6ef35f;
      *(ulonglong *)(pfVar13 + 4) = (ulonglong)(uint)(fVar21 * fVar26);
      uVar9 = uVar12 * 0x19660d + 0x3c6ef35f;
      fVar21 = DAT_ram_400980c0;
      if (fVar25 <= (float)(uVar12 >> 8) * fVar24) {
        fVar21 = (float)FUN_ram_40000c86();
        fVar21 = fVar21 * DAT_ram_40092834;
      }
      fVar26 = (float)FUN_ram_40000786((float)(uVar9 >> 8) * fVar24 * fVar22);
      uVar12 = uVar9 * 0x19660d + 0x3c6ef35f;
      *(ulonglong *)(pfVar13 + 5) = (ulonglong)(uint)(SQRT(fVar21) * fVar26);
      uVar9 = uVar12 * 0x19660d + 0x3c6ef35f;
      fVar21 = DAT_ram_400980c0;
      if (fVar25 <= (float)(uVar12 >> 8) * fVar24) {
        fVar21 = (float)FUN_ram_40000c86();
        fVar21 = fVar21 * DAT_ram_40092834;
      }
      fVar26 = (float)FUN_ram_40000786((float)(uVar9 >> 8) * fVar24 * fVar22);
      uVar12 = uVar9 * 0x19660d + 0x3c6ef35f;
      *(ulonglong *)(pfVar13 + 6) = (ulonglong)(uint)(SQRT(fVar21) * fVar26);
      uVar9 = uVar12 * 0x19660d + 0x3c6ef35f;
      fVar21 = DAT_ram_400980c0;
      if (fVar25 <= (float)(uVar12 >> 8) * fVar24) {
        fVar21 = (float)FUN_ram_40000c86();
        fVar21 = fVar21 * DAT_ram_40092834;
      }
      fVar26 = (float)FUN_ram_40000786((float)(uVar9 >> 8) * fVar24 * fVar22);
      uVar32 = (ulonglong)(uint)(SQRT(fVar21) * fVar26);
      fVar20 = *pfVar13;
      fVar21 = pfVar13[1];
      fVar26 = pfVar13[2];
      fVar19 = pfVar13[3];
      *(ulonglong *)(pfVar13 + 7) = uVar32;
      uVar33 = *(ulonglong *)(pfVar13 + 4);
      uVar34 = *(ulonglong *)(pfVar13 + 5);
      uVar35 = *(ulonglong *)(pfVar13 + 6);
      pfVar7 = extraout_a5;
      pfVar16 = pfVar6;
      if (iVar10 != 0) {
        do {
          pfVar7 = pfVar16 + 8;
          fVar27 = (float)*(undefined8 *)(pfVar16 + 7) * (float)uVar32 +
                   (float)*(undefined8 *)(pfVar16 + 6) * (float)uVar35 +
                   pfVar16[5] * (float)uVar34 +
                   pfVar16[4] * (float)uVar33 +
                   pfVar16[3] * fVar19 +
                   pfVar16[2] * fVar26 +
                   (float)*(undefined8 *)(pfVar16 + 1) * fVar21 + *pfVar16 * fVar20 + 0.0;
          fVar20 = -(*pfVar16 * fVar27) + fVar20;
          *pfVar13 = fVar20;
          fVar21 = -(pfVar16[1] * fVar27) + fVar21;
          pfVar13[1] = fVar21;
          fVar26 = -(pfVar16[2] * fVar27) + fVar26;
          pfVar13[2] = fVar26;
          fVar19 = -(pfVar16[3] * fVar27) + fVar19;
          pfVar13[3] = fVar19;
          uVar33 = (ulonglong)(uint)(-(pfVar16[4] * fVar27) + (float)uVar33);
          *(ulonglong *)(pfVar13 + 4) = uVar33;
          uVar34 = (ulonglong)(uint)(-(pfVar16[5] * fVar27) + (float)uVar34);
          *(ulonglong *)(pfVar13 + 5) = uVar34;
          uVar35 = (ulonglong)(uint)(-(pfVar16[6] * fVar27) + (float)uVar35);
          *(ulonglong *)(pfVar13 + 6) = uVar35;
          uVar32 = (ulonglong)(uint)(-(pfVar16[7] * fVar27) + (float)uVar32);
          *(ulonglong *)(pfVar13 + 7) = uVar32;
          pfVar16 = pfVar7;
        } while (pfVar7 != pfVar13);
      }
      fVar27 = (float)uVar32 * (float)uVar32 +
               (float)uVar35 * (float)uVar35 +
               (float)uVar34 * (float)uVar34 +
               (float)uVar33 * (float)uVar33 +
               fVar19 * fVar19 + fVar26 * fVar26 + fVar21 * fVar21 + fVar20 * fVar20 + 0.0;
      if ((int)pfVar7 < 0x100 && fVar27 < 0.0) {
        fVar27 = (float)FUN_ram_40000e84();
        fVar20 = *pfVar13;
        fVar26 = pfVar13[2];
        fVar21 = pfVar13[1];
        fVar19 = pfVar13[3];
        uVar33 = *(ulonglong *)(pfVar13 + 4);
        uVar34 = *(ulonglong *)(pfVar13 + 5);
        uVar35 = *(ulonglong *)(pfVar13 + 6);
        uVar32 = *(ulonglong *)(pfVar13 + 7);
      }
      else {
        fVar27 = SQRT(fVar27);
      }
      if (fVar18 <= fVar27) {
        fVar21 = fVar21 / fVar27;
        fVar26 = fVar26 / fVar27;
        fVar20 = fVar20 / fVar27;
        fVar19 = fVar19 / fVar27;
        uVar33 = (ulonglong)(uint)((float)uVar33 / fVar27);
        uVar34 = (ulonglong)(uint)((float)uVar34 / fVar27);
        uVar35 = (ulonglong)(uint)((float)uVar35 / fVar27);
        uVar32 = (ulonglong)(uint)((float)uVar32 / fVar27);
      }
      *pfVar13 = fVar20;
      pfVar13[1] = fVar21;
      pfVar13[2] = fVar26;
      pfVar13[3] = fVar19;
      *(ulonglong *)(pfVar13 + 4) = uVar33;
      *(ulonglong *)(pfVar13 + 5) = uVar34;
      *(ulonglong *)(pfVar13 + 6) = uVar35;
      *(ulonglong *)(pfVar13 + 7) = uVar32;
      iVar10 = iVar10 + 1;
      pfVar13 = pfVar13 + 8;
    } while (iVar10 != 8);
    FUN_ram_4000305c(&DAT_ram_300401b0,pfVar6,0x100);
    fVar36 = DAT_ram_400980c8;
    fVar21 = DAT_ram_400980c4;
    uVar12 = uVar5 * 0x19660d + 0x3c6ef35f;
    fVar23 = DAT_ram_400980c4;
    if (fVar3 <= (float)(uVar12 >> 8) * fVar24) {
      fVar23 = DAT_ram_400980c8;
    }
    uVar12 = uVar12 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d1f8] = fVar23;
    fVar23 = fVar21;
    if (fVar3 <= (float)(uVar12 >> 8) * fVar24) {
      fVar23 = fVar36;
    }
    uVar12 = uVar12 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d1f9] = fVar23;
    fVar23 = fVar21;
    if (fVar3 <= (float)(uVar12 >> 8) * fVar24) {
      fVar23 = fVar36;
    }
    uVar12 = uVar12 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d1fa] = fVar23;
    fVar23 = fVar21;
    if (fVar3 <= (float)(uVar12 >> 8) * fVar24) {
      fVar23 = fVar36;
    }
    uVar12 = uVar12 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d1fb] = fVar23;
    fVar23 = fVar21;
    if (fVar3 <= (float)(uVar12 >> 8) * fVar24) {
      fVar23 = fVar36;
    }
    uVar12 = uVar12 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d1fc] = fVar23;
    fVar23 = fVar21;
    if (fVar3 <= (float)(uVar12 >> 8) * fVar24) {
      fVar23 = fVar36;
    }
    uVar12 = uVar12 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d1fd] = fVar23;
    fVar23 = fVar21;
    if (fVar3 <= (float)(uVar12 >> 8) * fVar24) {
      fVar23 = fVar36;
    }
    uVar12 = uVar12 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d1fe] = fVar23;
    fVar23 = fVar21;
    if (fVar3 <= (float)(uVar12 >> 8) * fVar24) {
      fVar23 = fVar36;
    }
    uVar5 = uVar12 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d1ff] = fVar23;
    uVar12 = uVar5 * 0x19660d + 0x3c6ef35f;
    fVar23 = DAT_ram_400980c0;
    if (fVar25 <= (float)(uVar5 >> 8) * fVar24) {
      fVar23 = (float)FUN_ram_40000c86();
      fVar23 = fVar23 * DAT_ram_40092834;
    }
    fVar26 = (float)FUN_ram_40000786((float)(uVar12 >> 8) * fVar24 * fVar22);
    uVar5 = uVar12 * 0x19660d + 0x3c6ef35f;
    fVar26 = SQRT(fVar23) * fVar26;
    param_1[0x1d200] = fVar26;
    uVar12 = uVar5 * 0x19660d + 0x3c6ef35f;
    fVar23 = DAT_ram_400980c0;
    if (fVar25 <= (float)(uVar5 >> 8) * fVar24) {
      fVar23 = (float)FUN_ram_40000c86();
      fVar23 = fVar23 * DAT_ram_40092834;
    }
    fVar20 = (float)FUN_ram_40000786((float)(uVar12 >> 8) * fVar24 * fVar22);
    uVar5 = uVar12 * 0x19660d + 0x3c6ef35f;
    fVar20 = SQRT(fVar23) * fVar20;
    param_1[0x1d201] = fVar20;
    uVar12 = uVar5 * 0x19660d + 0x3c6ef35f;
    fVar23 = DAT_ram_400980c0;
    if (fVar25 <= (float)(uVar5 >> 8) * fVar24) {
      fVar23 = (float)FUN_ram_40000c86();
      fVar23 = fVar23 * DAT_ram_40092834;
    }
    fVar19 = (float)FUN_ram_40000786((float)(uVar12 >> 8) * fVar24 * fVar22);
    uVar5 = uVar12 * 0x19660d + 0x3c6ef35f;
    fVar19 = SQRT(fVar23) * fVar19;
    param_1[0x1d202] = fVar19;
    uVar12 = uVar5 * 0x19660d + 0x3c6ef35f;
    fVar23 = DAT_ram_400980c0;
    if (fVar25 <= (float)(uVar5 >> 8) * fVar24) {
      fVar23 = (float)FUN_ram_40000c86();
      fVar23 = fVar23 * DAT_ram_40092834;
    }
    fVar27 = (float)FUN_ram_40000786((float)(uVar12 >> 8) * fVar24 * fVar22);
    uVar5 = uVar12 * 0x19660d + 0x3c6ef35f;
    fVar27 = SQRT(fVar23) * fVar27;
    param_1[0x1d203] = fVar27;
    uVar12 = uVar5 * 0x19660d + 0x3c6ef35f;
    fVar23 = DAT_ram_400980c0;
    if (fVar25 <= (float)(uVar5 >> 8) * fVar24) {
      fVar23 = (float)FUN_ram_40000c86();
      fVar23 = fVar23 * DAT_ram_40092834;
    }
    fVar28 = (float)FUN_ram_40000786((float)(uVar12 >> 8) * fVar24 * fVar22);
    uVar5 = uVar12 * 0x19660d + 0x3c6ef35f;
    fVar28 = SQRT(fVar23) * fVar28;
    param_1[0x1d204] = fVar28;
    uVar12 = uVar5 * 0x19660d + 0x3c6ef35f;
    fVar23 = DAT_ram_400980c0;
    if (fVar25 <= (float)(uVar5 >> 8) * fVar24) {
      fVar23 = (float)FUN_ram_40000c86();
      fVar23 = fVar23 * DAT_ram_40092834;
    }
    fVar29 = (float)FUN_ram_40000786((float)(uVar12 >> 8) * fVar24 * fVar22);
    uVar5 = uVar12 * 0x19660d + 0x3c6ef35f;
    fVar29 = SQRT(fVar23) * fVar29;
    param_1[0x1d205] = fVar29;
    uVar12 = uVar5 * 0x19660d + 0x3c6ef35f;
    fVar23 = DAT_ram_400980c0;
    if (fVar25 <= (float)(uVar5 >> 8) * fVar24) {
      fVar23 = (float)FUN_ram_40000c86();
      fVar23 = fVar23 * DAT_ram_40092834;
    }
    fVar30 = (float)FUN_ram_40000786((float)(uVar12 >> 8) * fVar24 * fVar22);
    uVar12 = uVar12 * 0x19660d + 0x3c6ef35f;
    fVar30 = SQRT(fVar23) * fVar30;
    param_1[0x1d206] = fVar30;
    fVar23 = DAT_ram_400980c0;
    if (fVar25 <= (float)(uVar12 >> 8) * fVar24) {
      fVar23 = (float)FUN_ram_40000c86();
      fVar23 = fVar23 * DAT_ram_40092834;
    }
    fVar25 = (float)FUN_ram_40000786((float)(uVar12 * 0x19660d + 0x3c6ef35f >> 8) * fVar24 * fVar22)
    ;
    fVar25 = fVar25 * SQRT(fVar23);
    fVar24 = fVar25 * fVar25 +
             fVar30 * fVar30 +
             fVar29 * fVar29 +
             fVar28 * fVar28 +
             fVar27 * fVar27 + fVar19 * fVar19 + fVar20 * fVar20 + fVar26 * fVar26 + 0.0;
    param_1[0x1d207] = fVar25;
    if ((int)(param_1 + 0x1d400) < 0x100 && fVar24 < 0.0) {
      fVar24 = (float)FUN_ram_40000e84();
    }
    else {
      fVar24 = SQRT(fVar24);
    }
    fVar23 = DAT_ram_4009281c;
    if (fVar24 < fVar18) {
      fVar24 = DAT_ram_4009281c;
    }
    fVar25 = param_1[0x1d200] / fVar24;
    fVar26 = param_1[0x1d201] / fVar24;
    param_1[0x1d200] = fVar25;
    fVar20 = param_1[0x1d202] / fVar24;
    param_1[0x1d201] = fVar26;
    fVar19 = param_1[0x1d203] / fVar24;
    param_1[0x1d202] = fVar20;
    fVar27 = param_1[0x1d204] / fVar24;
    param_1[0x1d203] = fVar19;
    fVar28 = param_1[0x1d205] / fVar24;
    param_1[0x1d204] = fVar27;
    fVar29 = param_1[0x1d206] / fVar24;
    param_1[0x1d205] = fVar28;
    fVar24 = param_1[0x1d207] / fVar24;
    param_1[0x1d206] = fVar29;
    fVar30 = fVar24 * fVar21 +
             fVar29 * fVar36 +
             fVar28 * fVar21 +
             fVar27 * fVar36 +
             fVar19 * fVar21 + fVar20 * fVar36 + fVar26 * fVar21 + fVar25 * fVar36 + 0.0;
    param_1[0x1d207] = fVar24;
    fVar25 = -(fVar30 * fVar25) + fVar36;
    fVar26 = -(fVar30 * fVar26) + fVar21;
    fVar20 = -(fVar30 * fVar20) + fVar36;
    fVar19 = -(fVar30 * fVar19) + fVar21;
    fVar27 = -(fVar30 * fVar27) + fVar36;
    fVar28 = -(fVar30 * fVar28) + fVar21;
    param_1[0x1d20a] = fVar20;
    param_1[0x1d20b] = fVar19;
    param_1[0x1d20c] = fVar27;
    fVar36 = -(fVar30 * fVar29) + fVar36;
    param_1[0x1d20d] = fVar28;
    fVar21 = -(fVar24 * fVar30) + fVar21;
    param_1[0x1d208] = fVar25;
    param_1[0x1d20e] = fVar36;
    param_1[0x1d209] = fVar26;
    param_1[0x1d20f] = fVar21;
    fVar24 = fVar21 * fVar21 +
             fVar36 * fVar36 +
             fVar28 * fVar28 +
             fVar27 * fVar27 +
             fVar19 * fVar19 + fVar20 * fVar20 + fVar26 * fVar26 + fVar25 * fVar25 + 0.0;
    if ((int)(param_1 + 0x1d400) < 0x100 && fVar24 < 0.0) {
      fVar24 = (float)FUN_ram_40000e84();
    }
    else {
      fVar24 = SQRT(fVar24);
    }
    if (fVar24 < fVar18) {
      fVar24 = fVar23;
    }
    param_1[0x1d208] = param_1[0x1d208] / fVar24;
    param_1[0x1d209] = param_1[0x1d209] / fVar24;
    param_1[0x1d20a] = param_1[0x1d20a] / fVar24;
    param_1[0x1d20b] = param_1[0x1d20b] / fVar24;
    param_1[0x1d20c] = param_1[0x1d20c] / fVar24;
    param_1[0x1d20d] = param_1[0x1d20d] / fVar24;
    param_1[0x1d20e] = param_1[0x1d20e] / fVar24;
    param_1[0x1d20f] = param_1[0x1d20f] / fVar24;
    *(undefined1 *)((int)param_1 + 0x15) = 0;
    memset(param_1 + 7,0,0x10a8);
    *(undefined2 *)((int)param_1 + 0x1a) = 0;
    memset(param_1 + 0x532,0,0x10000);
    *(undefined2 *)((int)param_1 + 0x10c6) = 0;
    if (((void *)param_1[0x4532] != (void *)0x0) && (*(ushort *)(param_1 + 0x4533) != 0)) {
      memset((void *)param_1[0x4532],0,(uint)*(ushort *)(param_1 + 0x4533) << 2);
      *(undefined2 *)((int)param_1 + 0x114ce) = 0;
    }
    if (((void *)param_1[0x4535] != (void *)0x0) && (*(ushort *)(param_1 + 0x4536) != 0)) {
      memset((void *)param_1[0x4535],0,(uint)*(ushort *)(param_1 + 0x4536) << 2);
      *(undefined2 *)((int)param_1 + 0x114da) = 0;
    }
    if (((void *)param_1[0x4538] != (void *)0x0) && (*(ushort *)(param_1 + 0x4539) != 0)) {
      memset((void *)param_1[0x4538],0,(uint)*(ushort *)(param_1 + 0x4539) << 2);
      *(undefined2 *)((int)param_1 + 0x114e6) = 0;
    }
    if (((void *)param_1[0x453b] != (void *)0x0) && (*(ushort *)(param_1 + 0x453c) != 0)) {
      memset((void *)param_1[0x453b],0,(uint)*(ushort *)(param_1 + 0x453c) << 2);
      *(undefined2 *)((int)param_1 + 0x114f2) = 0;
    }
    if (((void *)param_1[0x453e] != (void *)0x0) && (*(ushort *)(param_1 + 0x453f) != 0)) {
      memset((void *)param_1[0x453e],0,(uint)*(ushort *)(param_1 + 0x453f) << 2);
      *(undefined2 *)((int)param_1 + 0x114fe) = 0;
    }
    if (((void *)param_1[0x4541] != (void *)0x0) && (*(ushort *)(param_1 + 0x4542) != 0)) {
      memset((void *)param_1[0x4541],0,(uint)*(ushort *)(param_1 + 0x4542) << 2);
      *(undefined2 *)((int)param_1 + 0x1150a) = 0;
    }
    if (((void *)param_1[0x4544] != (void *)0x0) && (*(ushort *)(param_1 + 0x4545) != 0)) {
      memset((void *)param_1[0x4544],0,(uint)*(ushort *)(param_1 + 0x4545) << 2);
      *(undefined2 *)((int)param_1 + 0x11516) = 0;
    }
    if (((void *)param_1[0x4547] != (void *)0x0) && (*(ushort *)(param_1 + 0x4548) != 0)) {
      memset((void *)param_1[0x4547],0,(uint)*(ushort *)(param_1 + 0x4548) << 2);
      *(undefined2 *)((int)param_1 + 0x11522) = 0;
    }
    if (((void *)param_1[0x5f5a] != (void *)0x0) && (*(ushort *)(param_1 + 0x5f5b) != 0)) {
      memset((void *)param_1[0x5f5a],0,(uint)*(ushort *)(param_1 + 0x5f5b) << 2);
      *(undefined2 *)((int)param_1 + 0x17d6e) = 0;
    }
    if (((void *)param_1[0x5f5d] != (void *)0x0) && (*(ushort *)(param_1 + 0x5f5e) != 0)) {
      memset((void *)param_1[0x5f5d],0,(uint)*(ushort *)(param_1 + 0x5f5e) << 2);
      *(undefined2 *)((int)param_1 + 0x17d7a) = 0;
    }
    if (((void *)param_1[0x5f60] != (void *)0x0) && (*(ushort *)(param_1 + 0x5f61) != 0)) {
      memset((void *)param_1[0x5f60],0,(uint)*(ushort *)(param_1 + 0x5f61) << 2);
      *(undefined2 *)((int)param_1 + 0x17d86) = 0;
    }
    if (((void *)param_1[0x63ec] != (void *)0x0) && (*(ushort *)(param_1 + 0x63ed) != 0)) {
      memset((void *)param_1[0x63ec],0,(uint)*(ushort *)(param_1 + 0x63ed) << 2);
      *(undefined2 *)(param_1 + 0x63ee) = 0;
      param_1[0x63ef] = 0.0;
    }
    param_1[0x1d211] = 0.0;
    param_1[0x1d221] = 0.0;
    param_1[0x1d222] = 0.0;
    param_1[0x1d1af] = 0.0;
    if (((void *)param_1[0x63f0] != (void *)0x0) && (*(ushort *)(param_1 + 0x63f1) != 0)) {
      memset((void *)param_1[0x63f0],0,(uint)*(ushort *)(param_1 + 0x63f1) << 2);
      *(undefined2 *)(param_1 + 0x63f2) = 0;
      param_1[0x63f3] = 0.0;
    }
    param_1[0x1d213] = 0.0;
    param_1[0x1d224] = 0.0;
    param_1[0x1d225] = 0.0;
    param_1[0x1d1b0] = 0.0;
    if (((void *)param_1[0x63f4] != (void *)0x0) && (*(ushort *)(param_1 + 0x63f5) != 0)) {
      memset((void *)param_1[0x63f4],0,(uint)*(ushort *)(param_1 + 0x63f5) << 2);
      *(undefined2 *)(param_1 + 0x63f6) = 0;
      param_1[0x63f7] = 0.0;
    }
    param_1[0x1d215] = 0.0;
    param_1[0x1d227] = 0.0;
    param_1[0x1d228] = 0.0;
    param_1[0x1d1b1] = 0.0;
    if (((void *)param_1[0x63f8] != (void *)0x0) && (*(ushort *)(param_1 + 0x63f9) != 0)) {
      memset((void *)param_1[0x63f8],0,(uint)*(ushort *)(param_1 + 0x63f9) << 2);
      *(undefined2 *)(param_1 + 0x63fa) = 0;
      param_1[0x63fb] = 0.0;
    }
    param_1[0x1d217] = 0.0;
    param_1[0x1d22a] = 0.0;
    param_1[0x1d22b] = 0.0;
    param_1[0x1d1b2] = 0.0;
    if (((void *)param_1[0x63fc] != (void *)0x0) && (*(ushort *)(param_1 + 0x63fd) != 0)) {
      memset((void *)param_1[0x63fc],0,(uint)*(ushort *)(param_1 + 0x63fd) << 2);
      *(undefined2 *)(param_1 + 0x63fe) = 0;
      param_1[0x63ff] = 0.0;
    }
    param_1[0x1d219] = 0.0;
    param_1[0x1d22d] = 0.0;
    param_1[0x1d22e] = 0.0;
    param_1[0x1d1b3] = 0.0;
    if (((void *)param_1[0x6400] != (void *)0x0) && (*(ushort *)(param_1 + 0x6401) != 0)) {
      memset((void *)param_1[0x6400],0,(uint)*(ushort *)(param_1 + 0x6401) << 2);
      *(undefined2 *)(param_1 + 0x6402) = 0;
      param_1[0x6403] = 0.0;
    }
    param_1[0x1d21b] = 0.0;
    param_1[0x1d230] = 0.0;
    param_1[0x1d231] = 0.0;
    param_1[0x1d1b4] = 0.0;
    if (((void *)param_1[0x6404] != (void *)0x0) && (*(ushort *)(param_1 + 0x6405) != 0)) {
      memset((void *)param_1[0x6404],0,(uint)*(ushort *)(param_1 + 0x6405) << 2);
      *(undefined2 *)(param_1 + 0x6406) = 0;
      param_1[0x6407] = 0.0;
    }
    param_1[0x1d21d] = 0.0;
    param_1[0x1d233] = 0.0;
    param_1[0x1d234] = 0.0;
    param_1[0x1d1b5] = 0.0;
    if (((void *)param_1[0x6408] != (void *)0x0) && (*(ushort *)(param_1 + 0x6409) != 0)) {
      memset((void *)param_1[0x6408],0,(uint)*(ushort *)(param_1 + 0x6409) << 2);
      *(undefined2 *)(param_1 + 0x640a) = 0;
      param_1[0x640b] = 0.0;
    }
    param_1[0x1d21f] = 0.0;
    param_1[0x1d236] = 0.0;
    param_1[0x1d237] = 0.0;
    param_1[0x1d1b6] = 0.0;
    *(undefined1 *)(param_1 + 0x1d1b7) = 0;
    *(undefined1 *)((int)param_1 + 0x16) = 0;
  }
  fVar24 = DAT_ram_40092818;
  fVar36 = param_1[1];
  if (param_1[1] < DAT_ram_400930f4) {
    fVar36 = DAT_ram_400930f4;
  }
  fVar18 = param_1[2];
  fVar25 = DAT_ram_400980cc;
  if ((0.0 <= fVar18) && (fVar25 = DAT_ram_400980d0, fVar18 <= fVar23)) {
    fVar25 = fVar18 * DAT_ram_40098100 + DAT_ram_400980cc;
  }
  fVar18 = param_1[3];
  fVar21 = 0.0;
  if ((0.0 <= fVar18) && (fVar21 = DAT_ram_400980d4, fVar18 <= fVar23)) {
    fVar21 = fVar18 * DAT_ram_400930b0 * DAT_ram_40098104;
  }
  fVar18 = DAT_ram_40092818 / (fVar2 * DAT_ram_400930f4);
  param_1[0x1d184] = fVar2 * fVar21;
  fVar18 = (float)FUN_ram_40000c0e(fVar18);
  param_1[0x1d186] = fVar23 - fVar18;
  if (cVar1 == '\0') {
    fVar18 = param_1[0x1d185];
  }
  else {
    fVar18 = param_1[0x1d184];
    param_1[0x1d185] = fVar18;
  }
  fVar21 = DAT_ram_4009284c;
  fVar26 = param_1[4];
  if (param_1[4] < DAT_ram_400934d4) {
    fVar26 = DAT_ram_400934d4;
  }
  fVar20 = (fVar26 * param_1[0x1d187] * fVar22 * DAT_ram_4009284c) / fVar2;
  fVar19 = (float)FUN_ram_40000a08(fVar20);
  param_1[0x1d19f] = fVar19;
  fVar20 = (float)FUN_ram_40000786(fVar20);
  param_1[0x1d1a7] = fVar20;
  param_1[0x1d1af] = param_1[0x1d18f] * fVar18;
  fVar20 = (fVar26 * param_1[0x1d188] * fVar22 * fVar21) / fVar2;
  fVar19 = (float)FUN_ram_40000a08(fVar20);
  param_1[0x1d1a0] = fVar19;
  fVar20 = (float)FUN_ram_40000786(fVar20);
  param_1[0x1d1a8] = fVar20;
  param_1[0x1d1b0] = param_1[0x1d190] * fVar18;
  fVar20 = (fVar26 * param_1[0x1d189] * fVar22 * fVar21) / fVar2;
  fVar19 = (float)FUN_ram_40000a08(fVar20);
  param_1[0x1d1a1] = fVar19;
  fVar20 = (float)FUN_ram_40000786(fVar20);
  param_1[0x1d1a9] = fVar20;
  param_1[0x1d1b1] = param_1[0x1d191] * fVar18;
  fVar20 = (fVar26 * param_1[0x1d18a] * fVar22 * fVar21) / fVar2;
  fVar19 = (float)FUN_ram_40000a08(fVar20);
  param_1[0x1d1a2] = fVar19;
  fVar20 = (float)FUN_ram_40000786(fVar20);
  param_1[0x1d1aa] = fVar20;
  param_1[0x1d1b2] = param_1[0x1d192] * fVar18;
  fVar20 = (fVar26 * param_1[0x1d18b] * fVar22 * fVar21) / fVar2;
  fVar19 = (float)FUN_ram_40000a08(fVar20);
  param_1[0x1d1a3] = fVar19;
  fVar20 = (float)FUN_ram_40000786(fVar20);
  param_1[0x1d1ab] = fVar20;
  param_1[0x1d1b3] = param_1[0x1d193] * fVar18;
  fVar20 = (fVar26 * param_1[0x1d18c] * fVar22 * fVar21) / fVar2;
  fVar19 = (float)FUN_ram_40000a08(fVar20);
  param_1[0x1d1a4] = fVar19;
  fVar20 = (float)FUN_ram_40000786(fVar20);
  param_1[0x1d1ac] = fVar20;
  param_1[0x1d1b4] = param_1[0x1d194] * fVar18;
  fVar20 = (fVar26 * param_1[0x1d18d] * fVar22 * fVar21) / fVar2;
  fVar19 = (float)FUN_ram_40000a08(fVar20);
  param_1[0x1d1a5] = fVar19;
  fVar20 = (float)FUN_ram_40000786(fVar20);
  param_1[0x1d1ad] = fVar20;
  param_1[0x1d1b5] = param_1[0x1d195] * fVar18;
  fVar22 = (fVar26 * param_1[0x1d18e] * fVar22 * fVar21) / fVar2;
  fVar21 = (float)FUN_ram_40000a08(fVar22);
  param_1[0x1d1a6] = fVar21;
  fVar22 = (float)FUN_ram_40000786(fVar22);
  param_1[0x1d1ae] = fVar22;
  *(undefined1 *)(param_1 + 0x1d1b7) = 0;
  param_1[0x1d1b6] = param_1[0x1d196] * fVar18;
  fVar26 = DAT_ram_40098110;
  fVar21 = DAT_ram_4009810c;
  fVar18 = DAT_ram_40098108;
  fVar22 = DAT_ram_40093664;
  uVar4 = DAT_ram_400930a4;
  if (fVar25 < fVar23) {
    pfVar6 = param_1 + 0x1d174;
    pfVar7 = param_1 + 0x1d210;
    pfVar13 = param_1 + 0x1d220;
    do {
      while( true ) {
        uVar32 = FUN_ram_40000d54(uVar4,(((float)*(undefined8 *)pfVar6 / fVar2) * fVar18) / fVar36);
        fVar25 = fVar2 * fVar3 + fVar24;
        *(ulonglong *)(pfVar6 + 8) = uVar32 & 0xffffffff;
        fVar20 = (float)FUN_ram_40000c0e(fVar21 / fVar2);
        *pfVar7 = fVar23 - fVar20;
        if (fVar25 < fVar22) break;
        pfVar6 = pfVar6 + 1;
        pfVar7 = pfVar7 + 2;
        fVar25 = (float)FUN_ram_40000c0e(fVar26 / fVar2);
        *pfVar13 = fVar23 - fVar25;
        pfVar13 = pfVar13 + 3;
        if (param_1 + 0x1d17c == pfVar6) goto LAB_ram_4005bba4;
      }
      pfVar6 = pfVar6 + 1;
      pfVar7 = pfVar7 + 2;
      fVar25 = (float)FUN_ram_40000c0e((fVar25 * fVar21) / fVar2);
      *pfVar13 = fVar23 - fVar25;
      pfVar13 = pfVar13 + 3;
    } while (param_1 + 0x1d17c != pfVar6);
  }
  else {
    pfVar6 = param_1 + 0x1d174;
    pfVar7 = param_1 + 0x1d210;
    pfVar13 = param_1 + 0x1d220;
    do {
      while( true ) {
        uVar31 = FUN_ram_40000d54(uVar4,(((float)*(undefined8 *)pfVar6 / fVar2) * fVar18) / fVar36);
        fVar20 = fVar2 * fVar3 + fVar24;
        *(undefined8 *)(pfVar6 + 8) = uVar31;
        fVar19 = fVar20;
        if (fVar25 <= fVar20) {
          fVar19 = fVar25;
        }
        fVar19 = (float)FUN_ram_40000c0e((fVar19 * fVar21) / fVar2);
        *(ulonglong *)pfVar7 = (ulonglong)(uint)(fVar23 - fVar19);
        if (fVar20 < fVar22) break;
        pfVar6 = pfVar6 + 1;
        pfVar7 = pfVar7 + 2;
        fVar20 = (float)FUN_ram_40000c0e(fVar26 / fVar2);
        *pfVar13 = fVar23 - fVar20;
        pfVar13 = pfVar13 + 3;
        if (pfVar6 == param_1 + 0x1d17c) goto LAB_ram_4005bba4;
      }
      pfVar6 = pfVar6 + 1;
      pfVar7 = pfVar7 + 2;
      fVar20 = (float)FUN_ram_40000c0e((fVar20 * fVar21) / fVar2);
      *pfVar13 = fVar23 - fVar20;
      pfVar13 = pfVar13 + 3;
    } while (param_1 + 0x1d17c != pfVar6);
  }
LAB_ram_4005bba4:
  param_1[0x1d238] = DAT_ram_4009281c;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  return;
}


