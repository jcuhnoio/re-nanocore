/* NanoCore 1.12 analysis module: unresolved/bank_3/block_30045000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x30045b78.
 * REA evidence: ev_2ef5ed12e2ed7dca823def8d8b2b023cfaf3e20b2e69728c362099403558912e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_30045b78(int param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  float *pfVar13;
  uint uVar14;
  int iVar15;
  undefined2 uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ushort uVar20;
  float *pfVar21;
  uint uVar22;
  uint uVar23;
  float *pfVar24;
  undefined8 *puVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  ulonglong uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 unaff_fs11;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float afStack_c0 [4];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  if ((((param_1 == 0) || (param_2 == (float *)0x0)) || (param_3 == (float *)0x0)) ||
     (param_4 == (float *)0x0)) {
    return;
  }
  uStack_a0 = (undefined4)unaff_fs11;
  uStack_9c = (undefined4)((ulonglong)unaff_fs11 >> 0x20);
  if (*(char *)(param_1 + 0x44) != '\0') {
    FUN_ram_4008281c();
  }
  fVar8 = DAT_ram_400a0fdc;
  fVar7 = DAT_ram_4009f95c;
  fVar6 = DAT_ram_4009a374;
  fVar5 = DAT_ram_4009672c;
  if (param_5 == 0) {
    return;
  }
  pfVar21 = param_2 + param_5;
  fVar42 = DAT_ram_400a0fd4;
  fVar43 = DAT_ram_40099f40;
  fVar45 = DAT_ram_40099f34;
  fVar44 = DAT_ram_400a0fe0;
  fVar40 = DAT_ram_4009a644;
  fVar39 = DAT_ram_400a0fd8;
  do {
    fVar33 = *param_2;
    fVar41 = 0.0;
    if ((*(char *)(param_1 + 0x25) != '\0') && (*(char *)(param_1 + 0x48800) != '\0')) {
      uVar22 = (uint)*(ushort *)(param_1 + 0x487e8);
      fVar41 = 0.0;
      if (1 < uVar22) {
        fVar36 = *(float *)(param_1 + 0x487f0);
        fVar41 = fVar36 + (float)_DAT_ram_4009675c;
        if (fVar5 <= fVar41) {
          fVar41 = fVar41 - fVar5;
        }
        uVar17 = (uint)*(ushort *)(param_1 + 0x487ea);
        fVar34 = (float)uVar22;
        fVar27 = -((fVar5 - fVar36) * (float)*(ushort *)(param_1 + 0x487ec)) + (float)uVar17;
        if (fVar27 < 0.0) {
          fVar27 = fVar27 + fVar34;
        }
        if (fVar34 <= fVar27) {
          fVar27 = fVar27 - fVar34;
        }
        uVar23 = (uint)fVar27;
        uVar18 = uVar23 + 1 & 0xffff;
        if ((int)uVar22 <= (int)(uVar23 + 1)) {
          uVar18 = 0;
        }
        fVar31 = *(float *)(param_1 + ((uVar23 & 0xffff) + 0xfae8) * 4 + 8);
        fVar32 = (float)uVar17 - (fVar5 - fVar41) * (float)*(ushort *)(param_1 + 0x487ec);
        uVar37 = *(undefined8 *)(param_1 + (uVar18 + 0xfae8) * 4 + 8);
        if (fVar32 < 0.0) {
          fVar32 = fVar32 + fVar34;
        }
        if (fVar34 <= fVar32) {
          fVar32 = fVar32 - fVar34;
        }
        uVar18 = (uint)fVar32;
        uVar14 = uVar18 + 1 & 0xffff;
        if ((int)uVar22 <= (int)(uVar18 + 1)) {
          uVar14 = 0;
        }
        fVar29 = fVar36 * (float)DAT_ram_4009f79c;
        fVar41 = *(float *)(param_1 + ((uVar18 & 0xffff) + 0xfae8) * 4 + 8);
        iVar19 = (int)fVar29;
        iVar15 = param_1 + iVar19 * 4;
        fVar34 = *(float *)(iVar15 + 0x48824);
        fVar35 = *(float *)(iVar15 + 0x48828);
        fVar41 = (fVar32 - (float)(int)uVar18) *
                 (*(float *)(param_1 + (uVar14 + 0xfae8) * 4 + 8) - fVar41) + fVar41;
        *(undefined4 *)(param_1 + (uVar17 + 0xfae8) * 4 + 8) = *(undefined4 *)(param_1 + 0x48820);
        fVar41 = ((fVar29 - (float)iVar19) * (fVar35 - fVar34) + fVar34) *
                 (((fVar27 - (float)(int)uVar23) * ((float)uVar37 - fVar31) + fVar31) - fVar41) +
                 fVar41;
        if ((uVar17 + 1 & 0xffff) < uVar22) {
          *(short *)(param_1 + 0x487ea) = (short)((uVar17 + 1) * 0x10000 >> 0x10);
          fVar36 = fVar36 + *(float *)(param_1 + 0x487f4);
          if (fVar36 < fVar5) goto LAB_ram_30046696;
LAB_ram_30046540:
          fVar36 = fVar36 - fVar5;
        }
        else {
          *(undefined2 *)(param_1 + 0x487ea) = 0;
          fVar36 = fVar36 + *(float *)(param_1 + 0x487f4);
          if (fVar5 <= fVar36) goto LAB_ram_30046540;
LAB_ram_30046696:
          if (fVar36 < 0.0) {
            fVar36 = fVar36 + fVar5;
          }
        }
        *(float *)(param_1 + 0x487f0) = fVar36;
      }
      uVar37 = DAT_ram_400a1094;
      fVar41 = (fVar5 - *(float *)(param_1 + 0x48818)) * fVar41 +
               *(float *)(param_1 + 0x48818) * *(float *)(param_1 + 0x4881c);
      uVar20 = *(ushort *)(param_1 + 0xd082);
      puVar12 = (ulonglong *)(param_1 + 0x5078 + (uint)*(ushort *)(param_1 + 0xd080) * 4);
      *(float *)(param_1 + 0x4881c) = fVar41;
      fVar36 = fVar41 * (float)uVar37 + (float)*puVar12;
      uVar1 = *(ushort *)(param_1 + 0xd084);
      uVar2 = *(ushort *)(param_1 + 0xd078);
      puVar9 = (ulonglong *)(param_1 + 0x7078 + (uint)uVar20 * 4);
      uVar22 = *(ushort *)(param_1 + 0xd080) + 1;
      *puVar12 = (ulonglong)(uint)(fVar36 * DAT_ram_4009b140 + fVar41);
      fVar27 = fVar36 * (float)DAT_ram_400a1094 + (float)*puVar9;
      fVar41 = fVar27 * DAT_ram_4009b140;
      *(ushort *)(param_1 + 0xd080) =
           (ushort)(uVar22 * 0x10000 >> 0x10) & -(ushort)((uVar22 & 0xffff) < (uint)uVar2);
      uVar2 = *(ushort *)(param_1 + 0xd086);
      uVar3 = *(ushort *)(param_1 + 0xd07a);
      puVar12 = (ulonglong *)(param_1 + 0x9078 + (uint)uVar1 * 4);
      *puVar9 = (ulonglong)(uint)(fVar41 + fVar36);
      uVar22 = uVar20 + 1;
      fVar34 = fVar27 * (float)DAT_ram_400a1094 + (float)*puVar12;
      fVar41 = fVar34 * DAT_ram_4009b140;
      *(ushort *)(param_1 + 0xd082) =
           (ushort)(uVar22 * 0x10000 >> 0x10) & -(ushort)((uVar22 & 0xffff) < (uint)uVar3);
      uVar20 = *(ushort *)(param_1 + 0xd07c);
      puVar9 = (ulonglong *)(param_1 + 0xb078 + (uint)uVar2 * 4);
      *puVar12 = (ulonglong)(uint)(fVar41 + fVar27);
      uVar22 = uVar1 + 1;
      fVar41 = fVar34 * (float)DAT_ram_400a1094 + (float)*puVar9;
      fVar36 = fVar41 * DAT_ram_4009b140;
      *(ushort *)(param_1 + 0xd084) =
           (ushort)(uVar22 * 0x10000 >> 0x10) & -(ushort)((uVar22 & 0xffff) < (uint)uVar20);
      uVar20 = *(ushort *)(param_1 + 0xd07e);
      uVar22 = uVar2 + 1;
      *puVar9 = (ulonglong)(uint)(fVar36 + fVar34);
      fVar41 = fVar41 * *(float *)(param_1 + 0x38ddc);
      *(ushort *)(param_1 + 0xd086) =
           (ushort)(uVar22 * 0x10000 >> 0x10) & -(ushort)((uVar22 & 0xffff) < (uint)uVar20);
    }
    uVar22 = (uint)*(ushort *)(param_1 + 0x3eba6);
    if (uVar22 != 0) {
      uVar17 = (uint)*(ushort *)(param_1 + 0x3eba4);
      if (uVar17 < 6000) {
        uVar22 = uVar17 - uVar22;
        uVar16 = (undefined2)(uVar17 + 1);
        if ((int)uVar22 < 0) {
          uVar22 = uVar22 + 6000;
        }
        uVar37 = *(undefined8 *)(param_1 + ((uVar22 & 0xffff) + 0xe378) * 4 + 4);
        *(ulonglong *)(param_1 + (uVar17 + 0xe378) * 4 + 4) = (ulonglong)(uint)fVar33;
        fVar33 = (float)uVar37;
        if ((uVar17 + 1 & 0xffff) == 6000) {
          uVar16 = 0;
        }
      }
      else {
        uVar37 = *(undefined8 *)(param_1 + ((6000 - uVar22 & 0xffff) + 0xe378) * 4 + 4);
        *(float *)(param_1 + 0x38de4) = fVar33;
        uVar16 = 1;
        fVar33 = (float)uVar37;
      }
      *(undefined2 *)(param_1 + 0x3eba4) = uVar16;
    }
    fVar36 = ((fVar33 + *(float *)(param_1 + 0x4c)) - *(float *)(param_1 + 0x50)) *
             *(float *)(param_1 + 0x48);
    *(float *)(param_1 + 0x50) = fVar33;
    puVar9 = (ulonglong *)(param_1 + 0x5c + (uint)*(ushort *)(param_1 + 0x2064) * 4);
    pfVar24 = (float *)(param_1 + 0x85c + (uint)*(ushort *)(param_1 + 0x2066) * 4);
    uVar20 = *(ushort *)(param_1 + 0x205c);
    fVar33 = fVar36 * (fVar5 - *(float *)(param_1 + 0x54)) +
             *(float *)(param_1 + 0x54) * *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x4c) = fVar36;
    uVar1 = *(ushort *)(param_1 + 0x2068);
    uVar22 = *(ushort *)(param_1 + 0x2064) + 1;
    *(float *)(param_1 + 0x58) = fVar33;
    fVar36 = fVar33 * fVar42 + (float)*puVar9;
    uVar2 = *(ushort *)(param_1 + 0x205e);
    uVar3 = *(ushort *)(param_1 + 0x2060);
    puVar12 = (ulonglong *)(param_1 + 0x105c + (uint)uVar1 * 4);
    uVar4 = *(ushort *)(param_1 + 0x206a);
    uVar17 = *(ushort *)(param_1 + 0x2066) + 1;
    *puVar9 = (ulonglong)(uint)(fVar36 * fVar40 + fVar33);
    fVar33 = *pfVar24;
    *(ushort *)(param_1 + 0x2064) =
         (ushort)(uVar22 * 0x10000 >> 0x10) & -(ushort)((uVar22 & 0xffff) < (uint)uVar20);
    fVar33 = fVar36 * fVar42 + fVar33;
    pfVar13 = (float *)(param_1 + 0x185c + (uint)uVar4 * 4);
    uVar20 = *(ushort *)(param_1 + 0x2062);
    uVar22 = uVar1 + 1;
    *pfVar24 = fVar33 * fVar40 + fVar36;
    uVar38 = *puVar12;
    *(ushort *)(param_1 + 0x2066) =
         (ushort)(uVar17 * 0x10000 >> 0x10) & -(ushort)((uVar17 & 0xffff) < (uint)uVar2);
    uVar17 = uVar4 + 1;
    fVar36 = fVar33 * fVar39 + (float)uVar38;
    *puVar12 = (ulonglong)(uint)(fVar36 * fVar8 + fVar33);
    fVar33 = *pfVar13;
    *(ushort *)(param_1 + 0x2068) =
         (ushort)(uVar22 * 0x10000 >> 0x10) & -(ushort)((uVar22 & 0xffff) < (uint)uVar3);
    fVar33 = fVar36 * fVar39 + fVar33;
    *(ulonglong *)pfVar13 = (ulonglong)(uint)(fVar33 * fVar8 + fVar36);
    *(ushort *)(param_1 + 0x206a) =
         (ushort)(uVar17 * 0x10000 >> 0x10) & -(ushort)((uVar17 & 0xffff) < (uint)uVar20);
    uVar20 = *(ushort *)(param_1 + 0x506c);
    uVar1 = *(ushort *)(param_1 + 0x5074);
    uVar22 = *(ushort *)(param_1 + 0x5072) + 1;
    pfVar13 = (float *)(param_1 + 0x206c + (uint)*(ushort *)(param_1 + 0x5072) * 4);
    fVar36 = *pfVar13;
    uVar2 = *(ushort *)(param_1 + 0x506e);
    *pfVar13 = fVar33;
    *(ushort *)(param_1 + 0x5072) =
         (ushort)(uVar22 * 0x10000 >> 0x10) & -(ushort)((uVar22 & 0xffff) < (uint)uVar20);
    uVar22 = uVar1 + 1;
    uVar20 = *(ushort *)(param_1 + 0x5076);
    pfVar13 = (float *)(param_1 + 0x306c + (uint)uVar1 * 4);
    fVar34 = (float)_DAT_ram_40099f6c;
    uVar1 = *(ushort *)(param_1 + 0x5070);
    fVar27 = *pfVar13;
    *pfVar13 = fVar33;
    *(ushort *)(param_1 + 0x5074) =
         (ushort)(uVar22 * 0x10000 >> 0x10) & -(ushort)((uVar22 & 0xffff) < (uint)uVar2);
    uVar22 = uVar20 + 1;
    pfVar13 = (float *)(param_1 + 0x406c + (uint)uVar20 * 4);
    uVar37 = *(undefined8 *)pfVar13;
    *pfVar13 = fVar33;
    *(ushort *)(param_1 + 0x5076) =
         (ushort)(uVar22 * 0x10000 >> 0x10) & -(ushort)((uVar22 & 0xffff) < (uint)uVar1);
    fVar36 = (float)uVar37 * fVar45 + fVar27 * fVar43 + fVar36 * fVar34 + 0.0;
    if (*(char *)(param_1 + 0x38dcc) == '\0') {
      uVar23 = (uint)*(ushort *)(param_1 + 0x38c8a);
      uVar22 = (uint)*(ushort *)(param_1 + 0x38c88);
      uVar17 = uVar23 - (int)*(float *)(param_1 + 0x38c8c);
      if ((int)uVar17 < 0) {
        uVar17 = uVar17 + uVar22;
      }
      fVar27 = *(float *)(param_1 + 0x38dd0);
      fVar32 = fVar5 - fVar27;
      fVar34 = (float)*(undefined8 *)(param_1 + ((uVar17 & 0xffff) + 0x3420) * 4 + 8) * fVar32 +
               fVar27 * *(float *)(param_1 + 0x38ccc);
      uVar17 = uVar23 - (int)*(float *)(param_1 + 0x38c90);
      *(float *)(param_1 + 0x38ccc) = fVar34;
      if ((int)uVar17 < 0) {
        uVar17 = uVar17 + uVar22;
      }
      fVar31 = fVar32 * *(float *)(param_1 + ((uVar17 & 0xffff) + 0x4a00) * 4 + 8) +
               fVar27 * *(float *)(param_1 + 0x38cd0);
      uVar17 = uVar23 - (int)*(float *)(param_1 + 0x38c94);
      *(float *)(param_1 + 0x38cd0) = fVar31;
      if ((int)uVar17 < 0) {
        uVar17 = uVar17 + uVar22;
      }
      fVar35 = fVar32 * *(float *)(param_1 + ((uVar17 & 0xffff) + 0x5fe0) * 4 + 8) +
               fVar27 * *(float *)(param_1 + 0x38cd4);
      uVar17 = uVar23 - (int)*(float *)(param_1 + 0x38c98);
      *(float *)(param_1 + 0x38cd4) = fVar35;
      if ((int)uVar17 < 0) {
        uVar17 = uVar17 + uVar22;
      }
      fVar29 = fVar32 * *(float *)(param_1 + ((uVar17 & 0xffff) + 0x75c0) * 4 + 8) +
               fVar27 * *(float *)(param_1 + 0x38cd8);
      uVar17 = uVar23 - (int)*(float *)(param_1 + 0x38c9c);
      *(float *)(param_1 + 0x38cd8) = fVar29;
      if ((int)uVar17 < 0) {
        uVar17 = uVar17 + uVar22;
      }
      fVar26 = fVar32 * *(float *)(param_1 + ((uVar17 & 0xffff) + 0x8ba0) * 4 + 8) +
               fVar27 * *(float *)(param_1 + 0x38cdc);
      uVar17 = uVar23 - (int)*(float *)(param_1 + 0x38ca0);
      *(float *)(param_1 + 0x38cdc) = fVar26;
      if ((int)uVar17 < 0) {
        uVar17 = uVar17 + uVar22;
      }
      fVar28 = fVar32 * (float)*(undefined8 *)(param_1 + ((uVar17 & 0xffff) + 0xa180) * 4 + 8) +
               fVar27 * *(float *)(param_1 + 0x38ce0);
      uVar17 = uVar23 - (int)*(float *)(param_1 + 0x38ca4);
      *(float *)(param_1 + 0x38ce0) = fVar28;
      if ((int)uVar17 < 0) {
        uVar17 = uVar17 + uVar22;
      }
      fVar30 = fVar32 * (float)*(undefined8 *)(param_1 + ((uVar17 & 0xffff) + 0xb760) * 4 + 8) +
               fVar27 * *(float *)(param_1 + 0x38ce4);
      uVar17 = uVar23 - (int)*(float *)(param_1 + 0x38ca8);
      *(float *)(param_1 + 0x38ce4) = fVar30;
      if ((int)uVar17 < 0) {
        uVar17 = uVar17 + uVar22;
      }
      fVar32 = fVar32 * (float)*(undefined8 *)(param_1 + ((uVar17 & 0xffff) + 0xcd40) * 4 + 8) +
               fVar27 * *(float *)(param_1 + 0x38ce8);
      fVar27 = fVar34 + 0.0 + fVar31 + fVar35 + fVar29 + fVar26 + fVar28 + fVar30 + fVar32;
      *(float *)(param_1 + 0x38ce8) = fVar32;
    }
    else {
      uVar20 = *(short *)(param_1 + 0x38dce) + 1;
      if (0x3ff < uVar20) {
        *(undefined2 *)(param_1 + 0x38dce) = 0;
      }
      else {
        *(ushort *)(param_1 + 0x38dce) = uVar20;
      }
      fVar27 = 0.0;
      puVar25 = (undefined8 *)(param_1 + 0xd088);
      puVar11 = (undefined8 *)(param_1 + 0x38c8c);
      pfVar13 = afStack_c0;
      do {
        fVar34 = *(float *)(puVar11 + 0x18);
        fVar32 = *(float *)(param_1 + 0x38dd4);
        fVar31 = fVar34 * *(float *)(puVar11 + 0x24) +
                 *(float *)(puVar11 + 0x1c) * *(float *)(puVar11 + 0x20);
        fVar35 = *(float *)(puVar11 + 0x1c) * *(float *)(puVar11 + 0x24) -
                 fVar34 * *(float *)(puVar11 + 0x20);
        if (0x3ff < uVar20) {
          fVar29 = fVar31 * fVar31 + fVar35 * fVar35;
          if (0.0 < fVar29 != 0) {
            if ((0.0 < fVar29) < 0x100 && fVar29 < 0.0) {
              fVar29 = (float)FUN_ram_40000e74();
              fVar42 = DAT_ram_400a0fd4;
              fVar43 = DAT_ram_40099f40;
              fVar45 = DAT_ram_40099f34;
              fVar44 = DAT_ram_400a0fe0;
              fVar40 = DAT_ram_4009a644;
              fVar39 = DAT_ram_400a0fd8;
            }
            else {
              fVar29 = SQRT(fVar29);
            }
            fVar31 = fVar31 * (fVar5 / fVar29);
            fVar35 = fVar35 * (fVar5 / fVar29);
          }
        }
        uVar22 = (uint)*(ushort *)(param_1 + 0x38c88);
        *(float *)(puVar11 + 0x1c) = fVar35;
        *(float *)(puVar11 + 0x18) = fVar31;
        uVar23 = (uint)*(ushort *)(param_1 + 0x38c8a);
        fVar31 = 0.0;
        if (1 < uVar22) {
          fVar31 = (float)uVar22;
          fVar34 = (float)uVar23 - (fVar34 * fVar32 + (float)*puVar11);
          if (fVar34 < 0.0) {
            fVar34 = fVar34 + fVar31;
          }
          if (fVar31 <= fVar34) {
            fVar34 = fVar34 - fVar31;
          }
          uVar17 = (uint)fVar34;
          puVar10 = (undefined8 *)((int)puVar25 + (uVar17 + 1 & 0xffff) * 4);
          if ((int)uVar22 <= (int)(uVar17 + 1)) {
            puVar10 = puVar25;
          }
          fVar31 = (float)*(undefined8 *)((int)puVar25 + (uVar17 & 0xffff) * 4);
          fVar31 = (fVar34 - (float)(int)uVar17) * ((float)*puVar10 - fVar31) + fVar31;
        }
        puVar10 = (undefined8 *)((int)puVar11 + 4);
        puVar25 = puVar25 + 0xaf0;
        fVar34 = (fVar5 - *(float *)(param_1 + 0x38dd0)) * fVar31 +
                 *(float *)(param_1 + 0x38dd0) * (float)puVar11[8];
        puVar11[8] = (ulonglong)(uint)fVar34;
        *pfVar13 = fVar34;
        fVar27 = fVar27 + fVar34;
        puVar11 = puVar10;
        pfVar13 = pfVar13 + 1;
        fVar34 = afStack_c0[0];
        fVar31 = afStack_c0[1];
        fVar35 = afStack_c0[2];
        fVar29 = afStack_c0[3];
        fVar26 = fStack_b0;
        fVar28 = fStack_ac;
        fVar30 = fStack_a8;
        fVar32 = fStack_a4;
      } while (puVar10 != (undefined8 *)(param_1 + 0x38cac));
    }
    iVar19 = param_1 + uVar23 * 4;
    fVar33 = fVar33 * fVar44 + fVar41 * *(float *)(param_1 + 0x38de0);
    *(float *)(iVar19 + 0xd088) =
         *(float *)(param_1 + 0x38cac) * (-(fVar27 * fVar6) + fVar34) + fVar33;
    *(float *)(iVar19 + 0x12808) =
         (-(fVar27 * fVar6) + fVar31) * *(float *)(param_1 + 0x38cb0) - fVar33;
    *(float *)(iVar19 + 0x17f88) =
         (-(fVar27 * fVar6) + fVar35) * *(float *)(param_1 + 0x38cb4) + fVar33;
    *(float *)(iVar19 + 0x1d708) =
         (-(fVar27 * fVar6) + fVar29) * *(float *)(param_1 + 0x38cb8) - fVar33;
    *(float *)(iVar19 + 0x22e88) =
         (-(fVar27 * fVar6) + fVar26) * *(float *)(param_1 + 0x38cbc) + fVar33;
    fVar41 = (((((((fVar34 - fVar31) + fVar35) - fVar29) - fVar26) + fVar28) - fVar30) + fVar32) *
             fVar7 + fVar36;
    fVar36 = ((((((fVar34 + fVar31) - fVar35) - fVar29) + fVar26 + fVar28) - fVar30) - fVar32) *
             fVar7 + fVar36;
    *(float *)(iVar19 + 0x28608) =
         (-(fVar27 * fVar6) + fVar28) * *(float *)(param_1 + 0x38cc0) - fVar33;
    *(float *)(iVar19 + 0x2dd88) =
         (-(fVar27 * fVar6) + fVar30) * *(float *)(param_1 + 0x38cc4) + fVar33;
    *(float *)(iVar19 + 0x33508) =
         (-(fVar27 * fVar6) + fVar32) * *(float *)(param_1 + 0x38cc8) - fVar33;
    if ((uVar23 + 1 & 0xffff) < uVar22) {
      *(short *)(param_1 + 0x38c8a) = (short)((uVar23 + 1) * 0x10000 >> 0x10);
    }
    else {
      *(undefined2 *)(param_1 + 0x38c8a) = 0;
    }
    if (*(char *)(param_1 + 0x25) == '\0') {
      fVar33 = *(float *)(param_1 + 0x38dd8);
      param_2 = param_2 + 1;
      *param_3 = fVar36 * fVar33;
      *param_4 = fVar41 * fVar33;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      if (pfVar21 == param_2) {
        return;
      }
    }
    else {
      fVar27 = (fVar36 + fVar41) * (float)_DAT_ram_4009675c;
      fVar33 = *(float *)(param_1 + 0x4880c);
      *(float *)(param_1 + 0x4880c) = fVar27;
      param_2 = param_2 + 1;
      fVar33 = ((fVar27 + *(float *)(param_1 + 0x48808)) - fVar33) * *(float *)(param_1 + 0x48804);
      fVar27 = fVar33 * (fVar5 - *(float *)(param_1 + 0x48810)) +
               *(float *)(param_1 + 0x48810) * *(float *)(param_1 + 0x48814);
      *(float *)(param_1 + 0x48808) = fVar33;
      *(float *)(param_1 + 0x48814) = fVar27;
      fVar33 = *(float *)(param_1 + 0x38dd8);
      *(float *)(param_1 + 0x48820) = fVar27;
      *param_3 = fVar36 * fVar33;
      *param_4 = fVar41 * fVar33;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      if (param_2 == pfVar21) {
        return;
      }
    }
  } while( true );
}


