/* NanoCore 1.10 analysis module: unresolved/bank_3/block_30042000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x30042dc8.
 * REA evidence: ev_b4db17198711748fb7dbf30564b736a7243dd6ca65ad4ce520908defc51d65a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_30042dc8(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  float fVar4;
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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float *pfVar25;
  int iVar26;
  uint uVar27;
  float fVar28;
  undefined8 *puVar29;
  int iVar30;
  float *pfVar31;
  int iVar32;
  ulonglong *puVar33;
  ushort uVar34;
  ulonglong *puVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  undefined4 *puVar44;
  int iVar45;
  float *pfVar46;
  float *pfVar47;
  float fVar48;
  int unaff_s2;
  float *pfVar49;
  float fVar50;
  float *pfVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  ulonglong uVar59;
  float fVar60;
  ulonglong uVar61;
  undefined8 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fStack00000004;
  uint uStack00000008;
  uint uStack0000000c;
  int iStack00000010;
  int iStack00000014;
  int iStack00000018;
  int iStack0000001c;
  int iStack00000020;
  int iStack00000024;
  int iStack00000028;
  int iStack0000002c;
  int iStack00000030;
  int iStack00000034;
  int iStack00000038;
  int iStack0000003c;
  int iStack00000040;
  int iStack00000044;
  int iStack00000048;
  int iStack0000004c;
  int iStack00000050;
  int iStack00000054;
  uint uStack00000058;
  uint in_stack_0000005c;
  uint uStack00000060;
  float *pfStack00000064;
  int in_stack_00000068;
  int in_stack_0000006c;
  int in_stack_00000070;
  float in_stack_00000090;
  float in_stack_00000094;
  float in_stack_00000098;
  float in_stack_0000009c;
  float in_stack_000000a0;
  float in_stack_000000a4;
  float in_stack_000000a8;
  float in_stack_000000ac;
  undefined4 in_stack_000000b0;
  
  fVar24 = DAT_ram_40098fc8;
  fVar23 = DAT_ram_400937a8;
  fVar22 = DAT_ram_4009281c;
  uStack00000008 = (uint)*(byte *)(unaff_s2 + 0x84);
  fVar54 = *(float *)(unaff_s2 + 0x4c);
  fVar52 = *(float *)(unaff_s2 + 0x50);
  uStack0000000c = (uint)*(byte *)(unaff_s2 + 0x85);
  fVar4 = *(float *)(unaff_s2 + 0x5c);
  if (in_stack_0000005c != 0) {
    iStack00000050 = unaff_s2 + 0x34b4;
    iStack00000054 = unaff_s2 + 0x3e2bc;
    iStack00000010 = unaff_s2 + 0x3b0bc;
    iStack00000014 = unaff_s2 + 0x3bd3c;
    iStack00000018 = unaff_s2 + 0x3c9bc;
    iStack0000001c = unaff_s2 + 0x3d63c;
    iStack00000020 = unaff_s2 + 0xa8;
    iStack0000002c = unaff_s2 + 0x2628;
    iStack00000030 = unaff_s2 + 0xfcf8;
    iStack00000034 = unaff_s2 + 0x10978;
    iStack00000038 = unaff_s2 + 0x115f8;
    iStack0000003c = unaff_s2 + 0x12278;
    iStack00000040 = unaff_s2 + 0xcad8;
    iStack00000024 = unaff_s2 + 0xd28;
    iStack00000044 = unaff_s2 + 0xd758;
    iStack00000028 = unaff_s2 + 0x19a8;
    iStack00000048 = unaff_s2 + 0xe3d8;
    iStack0000004c = unaff_s2 + 0xf058;
    uStack00000058 = 0;
    iVar26 = unaff_s2 + 0x13000;
    do {
      uVar43 = uStack00000058;
      uVar27 = in_stack_0000005c - uStack00000058;
      if (0x80 < uVar27) {
        uVar27 = 0x80;
      }
      fStack00000004 = fVar54;
      uStack00000060 = uVar27;
      pfStack00000064 = (float *)fVar52;
      FUN_ram_4007af78();
      fVar52 = (float)pfStack00000064;
      fVar54 = fStack00000004;
      iVar30 = uVar43 * 4;
      pfVar46 = (float *)(in_stack_00000068 + iVar30);
      pfVar51 = (float *)(unaff_s2 + 0x32b4);
      pfVar25 = pfVar51 + uVar27;
      pfStack00000064 = (float *)(in_stack_0000006c + iVar30);
      pfVar31 = (float *)(iVar30 + in_stack_00000070);
      fVar53 = DAT_ram_400980c8;
      do {
        fVar28 = *pfVar46;
        uVar43 = (uint)*(ushort *)(unaff_s2 + 0x32a8);
        fVar57 = *pfVar51;
        *pfVar51 = fVar28;
        if (uVar43 < 0x2581) {
          uVar27 = uVar43 + 1 & 0xffff;
        }
        else {
          uVar43 = 0;
          uVar27 = 1;
        }
        fVar58 = fVar57;
        if (*(ushort *)(unaff_s2 + 0x32aa) != 0) {
          iVar32 = uVar43 - *(ushort *)(unaff_s2 + 0x32aa);
          iVar30 = iVar32;
          if ((((((iVar32 < 0) && (iVar30 = iVar32 + 0x2581, iVar30 < 0)) &&
                (iVar30 = iVar32 + 0x4b02, iVar30 < 0)) &&
               ((iVar30 = iVar32 + 0x7083, iVar30 < 0 && (iVar30 = iVar32 + 0x9604, iVar30 < 0))))
              && (iVar30 = iVar32 + 0xbb85, iVar30 < 0)) && (iVar30 = iVar32 + 0xe106, iVar30 < 0))
          {
            iVar30 = iVar32 + 0x10687;
          }
          fVar58 = (float)*(undefined8 *)(iStack00000050 + iVar30 * 4);
        }
        uVar34 = *(ushort *)(unaff_s2 + 0x32ae);
        if (uVar34 != 0) {
          fVar56 = fVar57;
          if (*(ushort *)(unaff_s2 + 0x32ac) != 0) {
            iVar32 = uVar43 - *(ushort *)(unaff_s2 + 0x32ac);
            iVar30 = iVar32;
            if ((((iVar32 < 0) && (iVar30 = iVar32 + 0x2581, iVar30 < 0)) &&
                ((iVar30 = iVar32 + 0x4b02, iVar30 < 0 &&
                 (((iVar30 = iVar32 + 0x7083, iVar30 < 0 && (iVar30 = iVar32 + 0x9604, iVar30 < 0))
                  && (iVar30 = iVar32 + 0xbb85, iVar30 < 0)))))) &&
               (iVar30 = iVar32 + 0xe106, iVar30 < 0)) {
              iVar30 = iVar32 + 0x10687;
            }
            fVar56 = (float)*(undefined8 *)(iStack00000050 + iVar30 * 4);
          }
          fVar48 = fVar22;
          if (*(ushort *)(unaff_s2 + 0x32b0) != 0) {
            fVar48 = (float)*(ushort *)(unaff_s2 + 0x32b0);
          }
          *(ushort *)(unaff_s2 + 0x32ae) = uVar34 - 1;
          fVar58 = (fVar22 - (float)uVar34 / fVar48) * (fVar58 - fVar56) + fVar56;
        }
        uVar34 = *(ushort *)(unaff_s2 + 0xcac0);
        *(float *)(unaff_s2 + uVar43 * 4 + 0x34b4) = fVar57;
        pfVar47 = (float *)(iStack00000040 + (uint)uVar34 * 4);
        fVar57 = -(*(float *)(unaff_s2 + 0xcac8) * fVar58) + *pfVar47;
        uVar1 = *(ushort *)(unaff_s2 + 0xcac2);
        *(ushort *)(unaff_s2 + 0x32a8) = (ushort)uVar27 & -(ushort)(uVar27 != 0x2581);
        uVar2 = *(ushort *)(unaff_s2 + 0xcab8);
        puVar33 = (ulonglong *)(iStack00000044 + (uint)uVar1 * 4);
        uVar43 = uVar34 + 1;
        *pfVar47 = *(float *)(unaff_s2 + 0xcac8) * fVar57 + fVar58;
        fVar56 = -(*(float *)(unaff_s2 + 0xcacc) * fVar57) + (float)*puVar33;
        uVar34 = *(ushort *)(unaff_s2 + 0xcac4);
        *(ushort *)(unaff_s2 + 0xcac0) =
             (ushort)(uVar43 * 0x10000 >> 0x10) & -(ushort)((uVar43 & 0xffff) < (uint)uVar2);
        uVar2 = *(ushort *)(unaff_s2 + 0xcaba);
        pfVar47 = (float *)(iStack00000048 + (uint)uVar34 * 4);
        uVar43 = uVar1 + 1;
        *puVar33 = (ulonglong)(uint)(*(float *)(unaff_s2 + 0xcacc) * fVar56 + fVar57);
        fVar57 = -(*(float *)(unaff_s2 + 0xcad0) * fVar56) + *pfVar47;
        uVar1 = *(ushort *)(unaff_s2 + 0xcac6);
        *(ushort *)(unaff_s2 + 0xcac2) =
             (ushort)(uVar43 * 0x10000 >> 0x10) & -(ushort)((uVar43 & 0xffff) < (uint)uVar2);
        uVar2 = *(ushort *)(unaff_s2 + 0xcabc);
        puVar33 = (ulonglong *)(iStack0000004c + (uint)uVar1 * 4);
        uVar3 = *(ushort *)(unaff_s2 + 0xfce0);
        uVar43 = uVar34 + 1;
        *pfVar47 = *(float *)(unaff_s2 + 0xcad0) * fVar57 + fVar56;
        fVar56 = -(*(float *)(unaff_s2 + 0xcad4) * fVar57) + (float)*puVar33;
        *(ushort *)(unaff_s2 + 0xcac4) =
             (ushort)(uVar43 * 0x10000 >> 0x10) & -(ushort)((uVar43 & 0xffff) < (uint)uVar2);
        uVar34 = *(ushort *)(unaff_s2 + 0xcabe);
        pfVar47 = (float *)(iStack00000030 + (uint)uVar3 * 4);
        uVar2 = *(ushort *)(unaff_s2 + 0xfcd8);
        uVar43 = uVar1 + 1;
        *puVar33 = (ulonglong)(uint)(*(float *)(unaff_s2 + 0xcad4) * fVar56 + fVar57);
        fVar57 = -(*(float *)(unaff_s2 + 0xfce8) * fVar58) + *pfVar47;
        uVar27 = uVar3 + 1;
        *(ushort *)(unaff_s2 + 0xcac6) =
             (ushort)(uVar43 * 0x10000 >> 0x10) & -(ushort)((uVar43 & 0xffff) < (uint)uVar34);
        *pfVar47 = *(float *)(unaff_s2 + 0xfce8) * fVar57 + fVar58;
        *(ushort *)(unaff_s2 + 0xfce0) =
             (ushort)(uVar27 * 0x10000 >> 0x10) & -(ushort)((uVar27 & 0xffff) < (uint)uVar2);
        uVar34 = *(ushort *)(unaff_s2 + 0xfcda);
        pfVar47 = (float *)(iStack00000034 + (uint)*(ushort *)(unaff_s2 + 0xfce2) * 4);
        uVar43 = *(ushort *)(unaff_s2 + 0xfce2) + 1;
        uVar1 = *(ushort *)(unaff_s2 + 0xfce4);
        fVar58 = -(*(float *)(unaff_s2 + 0xfcec) * fVar57) + *pfVar47;
        puVar33 = (ulonglong *)(iStack00000038 + (uint)uVar1 * 4);
        uVar2 = *(ushort *)(unaff_s2 + 0xfce6);
        uVar3 = *(ushort *)(unaff_s2 + 0xfcdc);
        *pfVar47 = *(float *)(unaff_s2 + 0xfcec) * fVar58 + fVar57;
        uVar61 = *puVar33;
        *(ushort *)(unaff_s2 + 0xfce2) =
             (ushort)(uVar43 * 0x10000 >> 0x10) & -(ushort)((uVar43 & 0xffff) < (uint)uVar34);
        fVar57 = -(*(float *)(unaff_s2 + 0xfcf0) * fVar58) + (float)uVar61;
        uVar34 = *(ushort *)(unaff_s2 + 0xfcde);
        pfVar47 = (float *)(iStack0000003c + (uint)uVar2 * 4);
        uVar43 = uVar1 + 1;
        uVar27 = uVar2 + 1;
        *puVar33 = (ulonglong)(uint)(*(float *)(unaff_s2 + 0xfcf0) * fVar57 + fVar58);
        fVar58 = -(*(float *)(unaff_s2 + 0xfcf4) * fVar57) + *pfVar47;
        *(ushort *)(unaff_s2 + 0xfce4) =
             (ushort)(uVar43 * 0x10000 >> 0x10) & -(ushort)((uVar43 & 0xffff) < (uint)uVar3);
        *pfVar47 = *(float *)(unaff_s2 + 0xfcf4) * fVar58 + fVar57;
        *(ushort *)(unaff_s2 + 0xfce6) =
             (ushort)(uVar27 * 0x10000 >> 0x10) & -(ushort)((uVar27 & 0xffff) < (uint)uVar34);
        if (uStack00000008 != 0) {
          fVar57 = *(float *)(unaff_s2 + 0x78);
          *(float *)(unaff_s2 + 0x78) = fVar28;
          fVar28 = ((fVar28 + *(float *)(unaff_s2 + 0x74)) - fVar57) * *(float *)(unaff_s2 + 0x70);
          *(float *)(unaff_s2 + 0x74) = fVar28;
        }
        if (uStack0000000c != 0) {
          fVar28 = fVar28 * (fVar22 - *(float *)(unaff_s2 + 0x7c)) +
                   *(float *)(unaff_s2 + 0x7c) * *(float *)(unaff_s2 + 0x80);
          *(float *)(unaff_s2 + 0x80) = fVar28;
        }
        uVar34 = *(ushort *)(unaff_s2 + 0x88);
        pfVar47 = (float *)(iStack00000020 + (uint)*(ushort *)(unaff_s2 + 0x90) * 4);
        uVar27 = *(ushort *)(unaff_s2 + 0x90) + 1;
        uVar1 = *(ushort *)(unaff_s2 + 0x92);
        fVar57 = -(*(float *)(unaff_s2 + 0x98) * fVar28) + *pfVar47;
        pfVar49 = (float *)(iStack00000024 + (uint)uVar1 * 4);
        uVar2 = *(ushort *)(unaff_s2 + 0x94);
        uVar3 = *(ushort *)(unaff_s2 + 0x8a);
        *pfVar47 = *(float *)(unaff_s2 + 0x98) * fVar57 + fVar28;
        uVar43 = uVar1 + 1;
        fVar28 = -(*(float *)(unaff_s2 + 0x9c) * fVar57) + *pfVar49;
        *(ushort *)(unaff_s2 + 0x90) =
             (ushort)(uVar27 * 0x10000 >> 0x10) & -(ushort)((uVar27 & 0xffff) < (uint)uVar34);
        uVar34 = *(ushort *)(unaff_s2 + 0x96);
        puVar33 = (ulonglong *)(iStack00000028 + (uint)uVar2 * 4);
        uVar1 = *(ushort *)(unaff_s2 + 0x8c);
        *pfVar49 = *(float *)(unaff_s2 + 0x9c) * fVar28 + fVar57;
        uVar61 = *puVar33;
        *(ushort *)(unaff_s2 + 0x92) =
             (ushort)(uVar43 * 0x10000 >> 0x10) & -(ushort)((uVar43 & 0xffff) < (uint)uVar3);
        fVar57 = -(*(float *)(unaff_s2 + 0xa0) * fVar28) + (float)uVar61;
        uVar3 = *(ushort *)(unaff_s2 + 0x8e);
        pfVar47 = (float *)(iStack0000002c + (uint)uVar34 * 4);
        uVar43 = uVar2 + 1;
        uVar27 = uVar34 + 1;
        *puVar33 = (ulonglong)(uint)(*(float *)(unaff_s2 + 0xa0) * fVar57 + fVar28);
        fVar28 = -(*(float *)(unaff_s2 + 0xa4) * fVar57) + *pfVar47;
        *(ushort *)(unaff_s2 + 0x94) =
             (ushort)(uVar43 * 0x10000 >> 0x10) & -(ushort)((uVar43 & 0xffff) < (uint)uVar1);
        uVar43 = (uint)*(ushort *)(unaff_s2 + 0x13094);
        *pfVar47 = *(float *)(unaff_s2 + 0xa4) * fVar28 + fVar57;
        *(ushort *)(unaff_s2 + 0x96) =
             (ushort)(uVar27 * 0x10000 >> 0x10) & -(ushort)((uVar27 & 0xffff) < (uint)uVar3);
        if (uVar43 < 0x2581) {
          uVar27 = uVar43 + 1 & 0xffff;
        }
        else {
          uVar43 = 0;
          uVar27 = 1;
        }
        fVar57 = fVar28;
        if (*(ushort *)(unaff_s2 + 0x13096) != 0) {
          iVar32 = uVar43 - *(ushort *)(unaff_s2 + 0x13096);
          iVar30 = iVar32;
          if (((iVar32 < 0) && (iVar30 = iVar32 + 0x2581, iVar30 < 0)) &&
             ((((iVar30 = iVar32 + 0x4b02, iVar30 < 0 &&
                ((iVar30 = iVar32 + 0x7083, iVar30 < 0 && (iVar30 = iVar32 + 0x9604, iVar30 < 0))))
               && (iVar30 = iVar32 + 0xbb85, iVar30 < 0)) && (iVar30 = iVar32 + 0xe106, iVar30 < 0))
             )) {
            iVar30 = iVar32 + 0x10687;
          }
          fVar57 = (float)*(undefined8 *)(iStack00000054 + iVar30 * 4);
        }
        uVar34 = *(ushort *)(unaff_s2 + 0x1309a);
        if (uVar34 != 0) {
          fVar48 = fVar28;
          if (*(ushort *)(unaff_s2 + 0x13098) != 0) {
            iVar32 = uVar43 - *(ushort *)(unaff_s2 + 0x13098);
            iVar30 = iVar32;
            if ((((iVar32 < 0) && (iVar30 = iVar32 + 0x2581, iVar30 < 0)) &&
                (iVar30 = iVar32 + 0x4b02, iVar30 < 0)) &&
               (((iVar30 = iVar32 + 0x7083, iVar30 < 0 && (iVar30 = iVar32 + 0x9604, iVar30 < 0)) &&
                ((iVar30 = iVar32 + 0xbb85, iVar30 < 0 && (iVar30 = iVar32 + 0xe106, iVar30 < 0)))))
               ) {
              iVar30 = iVar32 + 0x10687;
            }
            fVar48 = (float)*(undefined8 *)(iStack00000054 + iVar30 * 4);
          }
          fVar55 = fVar22;
          if (*(ushort *)(unaff_s2 + 0x1309c) != 0) {
            fVar55 = (float)*(ushort *)(unaff_s2 + 0x1309c);
          }
          *(ushort *)(unaff_s2 + 0x1309a) = uVar34 - 1;
          fVar57 = (fVar22 - (float)uVar34 / fVar55) * (fVar57 - fVar48) + fVar48;
        }
        uVar34 = *(ushort *)(unaff_s2 + 0x3b0b0);
        *(float *)(iVar26 + (uVar43 + 0xacf0) * 4 + -0x104) = fVar28;
        puVar33 = (ulonglong *)(iStack00000010 + (uint)uVar34 * 4);
        fVar28 = -(*(float *)(unaff_s2 + 0x3b0b8) * fVar57) + (float)*puVar33;
        uVar1 = *(ushort *)(unaff_s2 + 0x3b0b2);
        *(ushort *)(unaff_s2 + 0x13094) = (ushort)uVar27 & -(ushort)(uVar27 != 0x2581);
        puVar35 = (ulonglong *)(iStack00000014 + (uint)uVar1 * 4);
        uVar2 = *(ushort *)(unaff_s2 + 0x3b0a8);
        uVar43 = uVar34 + 1;
        *puVar33 = (ulonglong)(uint)(*(float *)(unaff_s2 + 0x3b0b8) * fVar28 + fVar57);
        fVar57 = -(*(float *)(unaff_s2 + 0x3b0b8) * fVar28) + (float)*puVar35;
        uVar34 = *(ushort *)(unaff_s2 + 0x3b0b4);
        *(ushort *)(unaff_s2 + 0x3b0b0) =
             (ushort)(uVar43 * 0x10000 >> 0x10) & -(ushort)((uVar43 & 0xffff) < (uint)uVar2);
        puVar33 = (ulonglong *)(iStack00000018 + (uint)uVar34 * 4);
        uVar2 = *(ushort *)(unaff_s2 + 0x3b0aa);
        uVar43 = uVar1 + 1;
        *puVar35 = (ulonglong)(uint)(*(float *)(unaff_s2 + 0x3b0b8) * fVar57 + fVar28);
        fVar28 = -(*(float *)(unaff_s2 + 0x3b0b8) * fVar57) + (float)*puVar33;
        uVar1 = *(ushort *)(unaff_s2 + 0x3b0b6);
        *(ushort *)(unaff_s2 + 0x3b0b2) =
             (ushort)(uVar43 * 0x10000 >> 0x10) & -(ushort)((uVar43 & 0xffff) < (uint)uVar2);
        uVar2 = *(ushort *)(unaff_s2 + 0x3b0ac);
        uVar43 = uVar34 + 1;
        pfVar47 = (float *)(iStack0000001c + (uint)uVar1 * 4);
        uVar34 = *(ushort *)(unaff_s2 + 0x3b0ae);
        *puVar33 = (ulonglong)(uint)(*(float *)(unaff_s2 + 0x3b0b8) * fVar28 + fVar57);
        fVar57 = -(*(float *)(unaff_s2 + 0x3b0b8) * fVar28) + *pfVar47;
        uVar27 = uVar1 + 1;
        *(ushort *)(unaff_s2 + 0x3b0b4) =
             (ushort)(uVar43 * 0x10000 >> 0x10) & -(ushort)((uVar43 & 0xffff) < (uint)uVar2);
        *pfVar47 = *(float *)(unaff_s2 + 0x3b0b8) * fVar57 + fVar28;
        *(ushort *)(unaff_s2 + 0x3b0b6) =
             (ushort)(uVar27 * 0x10000 >> 0x10) & -(ushort)((uVar27 & 0xffff) < (uint)uVar34);
        if (*(char *)(unaff_s2 + 0x13008) == '\0') {
          uVar43 = (uint)*(ushort *)(unaff_s2 + 0x12f80);
          uVar27 = uVar43 - *(ushort *)(unaff_s2 + 0x12f50);
          if ((int)uVar27 < 0) {
            uVar27 = uVar27 + 0x1400;
          }
          uVar36 = uVar43 - *(ushort *)(unaff_s2 + 0x12f52);
          if ((int)uVar36 < 0) {
            uVar36 = uVar36 + 0x1400;
          }
          uVar37 = uVar43 - *(ushort *)(unaff_s2 + 0x12f54);
          if ((int)uVar37 < 0) {
            uVar37 = uVar37 + 0x1400;
          }
          uVar38 = uVar43 - *(ushort *)(unaff_s2 + 0x12f56);
          if ((int)uVar38 < 0) {
            uVar38 = uVar38 + 0x1400;
          }
          uVar39 = uVar43 - *(ushort *)(unaff_s2 + 0x12f58);
          if ((int)uVar39 < 0) {
            uVar39 = uVar39 + 0x1400;
          }
          uVar40 = uVar43 - *(ushort *)(unaff_s2 + 0x12f5a);
          if ((int)uVar40 < 0) {
            uVar40 = uVar40 + 0x1400;
          }
          uVar41 = uVar43 - *(ushort *)(unaff_s2 + 0x12f5c);
          if ((int)uVar41 < 0) {
            uVar41 = uVar41 + 0x1400;
          }
          uVar42 = uVar43 - *(ushort *)(unaff_s2 + 0x12f5e);
          if ((int)uVar42 < 0) {
            uVar42 = uVar42 + 0x1400;
          }
          fVar28 = *(float *)(iVar26 + ((uVar38 & 0xffff) + 0x3c6c) * 4 + -0x108);
          fVar48 = *(float *)(iVar26 + ((uVar39 & 0xffff) + 0x506c) * 4 + -0x108);
          fVar55 = *(float *)(iVar26 + ((uVar37 & 0xffff) + 0x286c) * 4 + -0x108);
          fVar50 = *(float *)(iVar26 + ((uVar36 & 0xffff) + 0x146c) * 4 + -0x108);
          fVar60 = *(float *)(iVar26 + (uVar27 & 0xffff) * 4 + 0xa8);
          fVar65 = *(float *)(iVar26 + ((uVar40 & 0xffff) + 0x646c) * 4 + -0x108);
          fVar64 = *(float *)(iVar26 + ((uVar41 & 0xffff) + 0x786c) * 4 + -0x108);
          fVar63 = *(float *)(iVar26 + ((uVar42 & 0xffff) + 0x8c6c) * 4 + -0x108);
        }
        else {
          uVar34 = *(short *)(unaff_s2 + 0x1300a) + 1;
          if (0x3ff < uVar34) {
            *(undefined2 *)(unaff_s2 + 0x1300a) = 0;
          }
          else {
            *(ushort *)(unaff_s2 + 0x1300a) = uVar34;
          }
          puVar44 = (undefined4 *)0x1400;
          puVar29 = (undefined8 *)(unaff_s2 + 0x12f60);
          iVar30 = 0;
          fStack00000004 = 7.17465e-42;
          pfVar47 = &stack0x00000090;
          do {
            uVar62 = *(undefined8 *)(unaff_s2 + 0x13004);
            fVar48 = (float)*(undefined8 *)((int)puVar29 + 100);
            fVar55 = (float)*(undefined8 *)((int)puVar29 + 0x44);
            fVar50 = (float)*(undefined8 *)((int)puVar29 + 0x24);
            fVar28 = fVar50 * *(float *)((int)puVar29 + 0x84) + fVar55 * fVar48;
            uVar59 = (ulonglong)(uint)fVar28;
            fVar48 = fVar55 * *(float *)((int)puVar29 + 0x84) - fVar50 * fVar48;
            uVar61 = (ulonglong)(uint)fVar48;
            if (0x3ff < uVar34) {
              fVar55 = fVar28 * fVar28 + fVar48 * fVar48;
              puVar44 = (undefined4 *)0x0;
              if (0.0 < fVar55 != 0) {
                if ((0.0 < fVar55) < 0x100 && fVar55 < 0.0) {
                  fVar55 = (float)FUN_ram_40000e84();
                  puVar44 = &DAT_ram_400980c8;
                  fVar53 = DAT_ram_400980c8;
                }
                else {
                  fVar55 = SQRT(fVar55);
                  puVar44 = (undefined4 *)0x0;
                }
                uVar59 = (ulonglong)(uint)(fVar28 * (fVar22 / fVar55));
                uVar61 = (ulonglong)(uint)(fVar48 * (fVar22 / fVar55));
              }
            }
            uVar43 = (uint)*(ushort *)(unaff_s2 + 0x12f80);
            *(ulonglong *)((int)puVar29 + 0x24) = uVar59;
            *(ulonglong *)((int)puVar29 + 0x44) = uVar61;
            fVar28 = ((float)uVar43 - (float)*puVar29) - fVar50 * (float)uVar62;
            if (puVar44 < (undefined4 *)0x100 && ABS(fVar28) <= fVar23) {
              if (0.0 <= fVar28) {
                if ((fVar28 < fVar24) || (fVar28 = fVar28 - fVar24, fVar28 < fVar24))
                goto LAB_ram_30043a0e;
                fVar28 = 0.0;
                iVar32 = 0;
                uVar27 = 0x13ff;
              }
              else {
                fVar28 = fVar28 + fVar24;
                if (fVar28 < 0.0) goto LAB_ram_30043aac;
LAB_ram_30043a0e:
                uVar27 = (uint)fVar28;
                if (uVar27 < 0x1400) {
                  iVar32 = uVar27 + 1;
                  fVar28 = fVar28 - (float)(int)uVar27;
                  if ((float)iVar32 == fStack00000004) {
                    iVar32 = 0;
                    uVar27 = 0x13ff;
                  }
                }
                else {
                  fVar28 = 0.0;
                  iVar32 = 1;
                  uVar27 = 0;
                }
              }
            }
            else {
LAB_ram_30043aac:
              fVar28 = 0.0;
              iVar32 = 1;
              uVar27 = 0;
            }
            iVar45 = iVar30 * 0x1400;
            fVar48 = *(float *)(iVar26 + (uVar27 + iVar45) * 4 + 0xa8);
            iVar30 = iVar30 + 1;
            puVar44 = (undefined4 *)0x8;
            puVar29 = (undefined8 *)((int)puVar29 + 4);
            *pfVar47 = (*(float *)(iVar26 + (iVar45 + iVar32) * 4 + 0xa8) - fVar48) * fVar28 +
                       fVar48;
            fVar28 = in_stack_0000009c;
            fVar48 = in_stack_000000a0;
            fVar55 = in_stack_00000098;
            fVar50 = in_stack_00000094;
            pfVar47 = pfVar47 + 1;
            fVar60 = in_stack_00000090;
            fVar65 = in_stack_000000a4;
            fVar64 = in_stack_000000a8;
            fVar63 = in_stack_000000ac;
          } while (iVar30 != 8);
        }
        fVar5 = *(float *)(unaff_s2 + 0x1304c);
        fVar20 = fVar22 - fVar5;
        fVar7 = fVar20 * fVar50 + fVar5 * *(float *)(unaff_s2 + 0x13058);
        fVar8 = fVar20 * fVar55 + fVar5 * (float)*(undefined8 *)(unaff_s2 + 0x1305c);
        fVar6 = *(float *)(unaff_s2 + 0x13050);
        fVar9 = fVar20 * fVar28 + fVar5 * (float)*(undefined8 *)(unaff_s2 + 0x13060);
        fVar21 = fVar22 - fVar6;
        fVar10 = fVar20 * fVar60 + fVar5 * (float)*(undefined8 *)(unaff_s2 + 0x13054);
        fVar11 = fVar20 * fVar48 + fVar5 * (float)*(undefined8 *)(unaff_s2 + 0x13064);
        fVar12 = fVar21 * fVar9 + fVar6 * *(float *)(unaff_s2 + 0x13080);
        fVar13 = fVar10 * fVar21 + fVar6 * *(float *)(unaff_s2 + 0x13074);
        fVar14 = fVar21 * fVar7 + fVar6 * *(float *)(unaff_s2 + 0x13078);
        fVar15 = fVar21 * fVar8 + fVar6 * *(float *)(unaff_s2 + 0x1307c);
        fVar16 = fVar21 * fVar11 + fVar6 * *(float *)(unaff_s2 + 0x13084);
        fVar17 = fVar20 * fVar65 + fVar5 * *(float *)(unaff_s2 + 0x13068);
        fVar18 = fVar20 * fVar64 + fVar5 * *(float *)(unaff_s2 + 0x1306c);
        fVar5 = fVar20 * fVar63 + fVar5 * *(float *)(unaff_s2 + 0x13070);
        fVar20 = fVar21 * fVar17 + fVar6 * *(float *)(unaff_s2 + 0x13088);
        fVar19 = fVar21 * fVar18 + fVar6 * *(float *)(unaff_s2 + 0x1308c);
        fVar6 = fVar21 * fVar5 + fVar6 * *(float *)(unaff_s2 + 0x13090);
        *(ulonglong *)(unaff_s2 + 0x13054) = (ulonglong)(uint)fVar10;
        *(float *)(unaff_s2 + 0x13074) = fVar13;
        *(float *)(unaff_s2 + 0x13058) = fVar7;
        *(float *)(unaff_s2 + 0x13078) = fVar14;
        *(ulonglong *)(unaff_s2 + 0x1305c) = (ulonglong)(uint)fVar8;
        *(float *)(unaff_s2 + 0x1307c) = fVar15;
        *(float *)(unaff_s2 + 0x13060) = fVar9;
        *(float *)(unaff_s2 + 0x13080) = fVar12;
        *(ulonglong *)(unaff_s2 + 0x13064) = (ulonglong)(uint)fVar11;
        *(float *)(unaff_s2 + 0x13084) = fVar16;
        iVar30 = unaff_s2 + uVar43 * 4;
        fVar21 = fVar5 * *(float *)(unaff_s2 + 0x13028) + fVar6 * *(float *)(unaff_s2 + 0x13048);
        *(float *)(unaff_s2 + 0x13068) = fVar17;
        *(float *)(unaff_s2 + 0x13088) = fVar20;
        *(float *)(unaff_s2 + 0x1306c) = fVar18;
        *(float *)(unaff_s2 + 0x1308c) = fVar19;
        *(ulonglong *)(unaff_s2 + 0x13070) = (ulonglong)(uint)fVar5;
        fVar13 = fVar10 * *(float *)(unaff_s2 + 0x1300c) + fVar13 * *(float *)(unaff_s2 + 0x1302c);
        *(float *)(unaff_s2 + 0x13090) = fVar6;
        fVar10 = fVar7 * *(float *)(unaff_s2 + 0x13010) + fVar14 * *(float *)(unaff_s2 + 0x13030);
        fVar14 = fVar8 * *(float *)(unaff_s2 + 0x13014) + fVar15 * *(float *)(unaff_s2 + 0x13034);
        fVar6 = fVar9 * *(float *)(unaff_s2 + 0x13018) +
                fVar12 * (float)*(undefined8 *)(unaff_s2 + 0x13038);
        fVar15 = fVar11 * *(float *)(unaff_s2 + 0x1301c) + fVar16 * *(float *)(unaff_s2 + 0x1303c);
        fVar5 = fVar14 + fVar6;
        fVar14 = fVar14 - fVar6;
        fVar7 = fVar17 * *(float *)(unaff_s2 + 0x13020) +
                fVar20 * (float)*(undefined8 *)(unaff_s2 + 0x13040);
        fVar16 = fVar18 * *(float *)(unaff_s2 + 0x13024) + fVar19 * *(float *)(unaff_s2 + 0x13044);
        fVar6 = fVar15 + fVar7;
        fVar15 = fVar15 - fVar7;
        fVar7 = fVar16 + fVar21;
        fVar8 = fVar13 + fVar10;
        fVar16 = fVar16 - fVar21;
        fVar13 = fVar13 - fVar10;
        fVar9 = fVar6 + fVar7;
        fVar10 = fVar8 + fVar5;
        fVar11 = fVar13 + fVar14;
        fVar12 = fVar15 + fVar16;
        fVar8 = fVar8 - fVar5;
        fVar6 = fVar6 - fVar7;
        fVar13 = fVar13 - fVar14;
        fVar15 = fVar15 - fVar16;
        fVar5 = *(float *)(unaff_s2 + 0x12f20);
        *(float *)(iVar30 + 0x130a8) = fVar5 * fVar57 + fVar10 + fVar9;
        *(float *)(iVar30 + 0x180a8) = -(fVar5 * fVar57) + fVar11 + fVar12;
        *(float *)(iVar30 + 0x1d0a8) = fVar5 * fVar57 + fVar8 + fVar6;
        *(float *)(iVar30 + 0x220a8) = -(fVar5 * fVar57) + fVar13 + fVar15;
        *(float *)(iVar30 + 0x270a8) = fVar5 * fVar57 + (fVar10 - fVar9);
        *(float *)(iVar30 + 0x2c0a8) = -(fVar5 * fVar57) + (fVar11 - fVar12);
        *(float *)(iVar30 + 0x310a8) = fVar5 * fVar57 + (fVar8 - fVar6);
        *(float *)(iVar30 + 0x360a8) = -(fVar5 * fVar57) + (fVar13 - fVar15);
        uVar34 = *(ushort *)(unaff_s2 + 0x130a0);
        *(ushort *)(unaff_s2 + 0x12f80) =
             (ushort)(uVar43 + 1) & (0x13ff < (uVar43 + 1 & 0xffff)) - 1;
        fVar57 = (((((fVar60 + fVar50 + fVar55 + fVar28) - fVar48) - fVar65) - fVar64) - fVar63) *
                 fVar53;
        fVar48 = ((((((fVar60 + fVar50) - fVar55) - fVar28) + fVar48 + fVar65) - fVar64) - fVar63) *
                 fVar53;
        fVar28 = fVar22;
        if (uVar34 < *(ushort *)(unaff_s2 + 0x1309e)) {
          *(ushort *)(unaff_s2 + 0x130a0) = uVar34 + 1;
          fVar28 = (float)uVar34 / (float)*(ushort *)(unaff_s2 + 0x1309e);
        }
        if (*(float *)(unaff_s2 + 0x130a4) != fVar22) {
          fVar55 = fVar57 + fVar48;
          fVar50 = (float)_DAT_ram_40092864;
          fVar48 = (fVar57 - fVar48) * fVar50 * *(float *)(unaff_s2 + 0x130a4);
          fVar57 = fVar55 * fVar50 + fVar48;
          fVar48 = fVar55 * fVar50 - fVar48;
        }
        pfVar51 = pfVar51 + 1;
        pfVar46 = pfVar46 + 1;
        *pfStack00000064 = fVar4 * (fVar54 * fVar56 + fVar52 * fVar28 * fVar57);
        *pfVar31 = fVar4 * (fVar54 * fVar58 + fVar52 * fVar28 * fVar48);
        pfStack00000064 = pfStack00000064 + 1;
        pfVar31 = pfVar31 + 1;
      } while (pfVar25 != pfVar51);
      uStack00000058 = uStack00000058 + uStack00000060;
    } while (uStack00000058 < in_stack_0000005c);
  }
  return;
}


