/* NanoCore 1.12: nc_reverb_room_process at 0x300445ac.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_fa52e96b383bc19554695a6cacfec0bbac5a3ea57862f5ead17587e1fb890b3a
 * Source: analysis/rea-1.12-effects/results/01014-export-0x300445ac.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_room_process(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_register_00000100;
  ushort uVar12;
  float *pfVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  ulonglong *puVar17;
  ushort uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  uint uVar26;
  float *pfVar27;
  int iVar28;
  float *pfVar29;
  float *pfVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
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
  float fStack_11c;
  uint uStack_cc;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (param_4 != 0)) {
    if (*(char *)(param_1 + 0x54) != '\0') {
      nc_reverb_room_helper_40080f38();
    }
    fVar11 = DAT_ram_4009672c;
    fVar31 = *(float *)(param_1 + 0x4c);
    fVar46 = (float)*(undefined8 *)(param_1 + 0x50);
    if (param_5 != 0) {
      uStack_cc = 0;
      puVar14 = (undefined8 *)(param_1 + 0x13000);
      do {
        uVar26 = param_5 - uStack_cc;
        if (0x80 < uVar26) {
          uVar26 = 0x80;
        }
        nc_reverb_room_helper_4008076c(param_1,uVar26);
        iVar28 = uStack_cc * 4;
        puVar15 = (undefined8 *)(param_2 + iVar28);
        pfVar27 = (float *)(param_1 + 0x32a8);
        pfVar13 = pfVar27 + uVar26;
        uVar22 = (uint)*(ushort *)(param_1 + 0x12f70);
        pfVar29 = (float *)(iVar28 + param_4);
        pfVar30 = (float *)(param_3 + iVar28);
        fVar32 = DAT_ram_4009f068;
        do {
          uVar38 = *puVar15;
          uVar21 = (uint)*(ushort *)(param_1 + 0x329c);
          fVar3 = *pfVar27;
          fVar34 = (float)uVar38;
          *pfVar27 = fVar34;
          if (uVar21 < 0x2581) {
            uVar19 = uVar21 + 1 & 0xffff;
          }
          else {
            uVar21 = 0;
            uVar19 = 1;
          }
          fVar36 = fVar3;
          if (*(ushort *)(param_1 + 0x329e) != 0) {
            iVar16 = uVar21 - *(ushort *)(param_1 + 0x329e);
            iVar28 = iVar16;
            if ((((iVar16 < 0) && (iVar28 = iVar16 + 0x2581, iVar28 < 0)) &&
                ((iVar28 = iVar16 + 0x4b02, iVar28 < 0 &&
                 ((iVar28 = iVar16 + 0x7083, iVar28 < 0 && (iVar28 = iVar16 + 0x9604, iVar28 < 0))))
                )) && ((iVar28 = iVar16 + 0xbb85, iVar28 < 0 &&
                       (iVar28 = iVar16 + 0xe106, iVar28 < 0)))) {
              iVar28 = iVar16 + 0x10687;
            }
            fVar36 = (float)*(undefined8 *)(param_1 + 0x34a8 + iVar28 * 4);
          }
          uVar18 = *(ushort *)(param_1 + 0x32a2);
          if (uVar18 != 0) {
            fVar39 = fVar3;
            if (*(ushort *)(param_1 + 0x32a0) != 0) {
              iVar16 = uVar21 - *(ushort *)(param_1 + 0x32a0);
              iVar28 = iVar16;
              if (((((iVar16 < 0) && (iVar28 = iVar16 + 0x2581, iVar28 < 0)) &&
                   (iVar28 = iVar16 + 0x4b02, iVar28 < 0)) &&
                  ((iVar28 = iVar16 + 0x7083, iVar28 < 0 && (iVar28 = iVar16 + 0x9604, iVar28 < 0)))
                  ) && ((iVar28 = iVar16 + 0xbb85, iVar28 < 0 &&
                        (iVar28 = iVar16 + 0xe106, iVar28 < 0)))) {
                iVar28 = iVar16 + 0x10687;
              }
              fVar39 = (float)*(undefined8 *)(param_1 + 0x34a8 + iVar28 * 4);
            }
            fVar37 = fVar11;
            if (*(ushort *)(param_1 + 0x32a4) != 0) {
              fVar37 = (float)*(ushort *)(param_1 + 0x32a4);
            }
            *(ushort *)(param_1 + 0x32a2) = uVar18 - 1;
            fVar36 = (fVar11 - (float)uVar18 / fVar37) * (fVar36 - fVar39) + fVar39;
          }
          uVar18 = *(ushort *)(param_1 + 0xcab4);
          *(float *)(param_1 + uVar21 * 4 + 0x34a8) = fVar3;
          pfVar23 = (float *)(param_1 + 0xcacc + (uint)uVar18 * 4);
          fVar3 = -(*(float *)(param_1 + 0xcabc) * fVar36) + *pfVar23;
          uVar12 = *(ushort *)(param_1 + 0xcab6);
          *(ushort *)(param_1 + 0x329c) = (ushort)uVar19 & -(ushort)(uVar19 != 0x2581);
          uVar1 = *(ushort *)(param_1 + 0xcaac);
          puVar17 = (ulonglong *)(param_1 + 0xd74c + (uint)uVar12 * 4);
          uVar21 = uVar18 + 1;
          *pfVar23 = *(float *)(param_1 + 0xcabc) * fVar3 + fVar36;
          fVar39 = -(*(float *)(param_1 + 0xcac0) * fVar3) + (float)*puVar17;
          uVar18 = *(ushort *)(param_1 + 0xcab8);
          *(ushort *)(param_1 + 0xcab4) =
               (ushort)(uVar21 * 0x10000 >> 0x10) & -(ushort)((uVar21 & 0xffff) < (uint)uVar1);
          uVar1 = *(ushort *)(param_1 + 0xcaae);
          pfVar23 = (float *)(param_1 + 0xe3cc + (uint)uVar18 * 4);
          uVar21 = uVar12 + 1;
          *puVar17 = (ulonglong)(uint)(*(float *)(param_1 + 0xcac0) * fVar39 + fVar3);
          fVar3 = -(*(float *)(param_1 + 0xcac4) * fVar39) + *pfVar23;
          uVar12 = *(ushort *)(param_1 + 0xcaba);
          *(ushort *)(param_1 + 0xcab6) =
               (ushort)(uVar21 * 0x10000 >> 0x10) & -(ushort)((uVar21 & 0xffff) < (uint)uVar1);
          uVar1 = *(ushort *)(param_1 + 0xcab0);
          pfVar24 = (float *)(param_1 + 0xf04c + (uint)uVar12 * 4);
          uVar2 = *(ushort *)(param_1 + 0xfcd4);
          uVar21 = uVar18 + 1;
          *pfVar23 = *(float *)(param_1 + 0xcac4) * fVar3 + fVar39;
          fVar39 = -(*(float *)(param_1 + 0xcac8) * fVar3) + *pfVar24;
          *(ushort *)(param_1 + 0xcab8) =
               (ushort)(uVar21 * 0x10000 >> 0x10) & -(ushort)((uVar21 & 0xffff) < (uint)uVar1);
          uVar18 = *(ushort *)(param_1 + 0xcab2);
          puVar17 = (ulonglong *)(param_1 + 0xfcec + (uint)uVar2 * 4);
          uVar1 = *(ushort *)(param_1 + 0xfccc);
          uVar21 = uVar12 + 1;
          *pfVar24 = *(float *)(param_1 + 0xcac8) * fVar39 + fVar3;
          fVar3 = -(*(float *)(param_1 + 0xfcdc) * fVar36) + (float)*puVar17;
          uVar19 = uVar2 + 1;
          *(ushort *)(param_1 + 0xcaba) =
               (ushort)(uVar21 * 0x10000 >> 0x10) & -(ushort)((uVar21 & 0xffff) < (uint)uVar18);
          *puVar17 = (ulonglong)(uint)(*(float *)(param_1 + 0xfcdc) * fVar3 + fVar36);
          *(ushort *)(param_1 + 0xfcd4) =
               (ushort)(uVar19 * 0x10000 >> 0x10) & -(ushort)((uVar19 & 0xffff) < (uint)uVar1);
          uVar18 = *(ushort *)(param_1 + 0xfcce);
          pfVar23 = (float *)(param_1 + 0x1096c + (uint)*(ushort *)(param_1 + 0xfcd6) * 4);
          uVar21 = *(ushort *)(param_1 + 0xfcd6) + 1;
          uVar12 = *(ushort *)(param_1 + 0xfcd8);
          fVar36 = -(*(float *)(param_1 + 0xfce0) * fVar3) + *pfVar23;
          pfVar24 = (float *)(param_1 + 0x115ec + (uint)uVar12 * 4);
          uVar1 = *(ushort *)(param_1 + 0xfcda);
          uVar2 = *(ushort *)(param_1 + 0xfcd0);
          *pfVar23 = *(float *)(param_1 + 0xfce0) * fVar36 + fVar3;
          uVar19 = uVar12 + 1;
          fVar37 = -(*(float *)(param_1 + 0xfce4) * fVar36) + *pfVar24;
          *(ushort *)(param_1 + 0xfcd6) =
               (ushort)(uVar21 * 0x10000 >> 0x10) & -(ushort)((uVar21 & 0xffff) < (uint)uVar18);
          uVar18 = *(ushort *)(param_1 + 0x84);
          pfVar23 = (float *)(param_1 + 0x1226c + (uint)uVar1 * 4);
          uVar12 = *(ushort *)(param_1 + 0xfcd2);
          *pfVar24 = *(float *)(param_1 + 0xfce4) * fVar37 + fVar36;
          fVar3 = *pfVar23;
          uVar20 = uVar1 + 1;
          *(ushort *)(param_1 + 0xfcd8) =
               (ushort)(uVar19 * 0x10000 >> 0x10) & -(ushort)((uVar19 & 0xffff) < (uint)uVar2);
          fVar3 = -(*(float *)(param_1 + 0xfce8) * fVar37) + fVar3;
          puVar17 = (ulonglong *)(param_1 + 0x9c + (uint)uVar18 * 4);
          uVar1 = *(ushort *)(param_1 + 0x7c);
          uVar21 = uVar18 + 1;
          *pfVar23 = *(float *)(param_1 + 0xfce8) * fVar3 + fVar37;
          uVar42 = *(undefined8 *)(param_1 + 0x70);
          fVar37 = (float)*(undefined8 *)(param_1 + 0x74);
          *(ushort *)(param_1 + 0xfcda) =
               (ushort)(uVar20 * 0x10000 >> 0x10) & -(ushort)((uVar20 & 0xffff) < (uint)uVar12);
          *(undefined8 *)(param_1 + 0x70) = uVar38;
          fVar36 = ((fVar34 + (float)*(undefined8 *)(param_1 + 0x6c)) - (float)uVar42) *
                   (float)*(undefined8 *)(param_1 + 0x68);
          fVar34 = (fVar11 - fVar37) * fVar36 + fVar37 * *(float *)(param_1 + 0x78);
          *(ulonglong *)(param_1 + 0x6c) = (ulonglong)(uint)fVar36;
          uVar18 = *(ushort *)(param_1 + 0x88);
          *(ulonglong *)(param_1 + 0x78) = (ulonglong)(uint)fVar34;
          fVar36 = -(*(float *)(param_1 + 0x8c) * fVar34) + (float)*puVar17;
          *puVar17 = (ulonglong)(uint)(*(float *)(param_1 + 0x8c) * fVar36 + fVar34);
          *(ushort *)(param_1 + 0x84) =
               (ushort)(uVar21 * 0x10000 >> 0x10) & -(ushort)((uVar21 & 0xffff) < (uint)uVar1);
          uVar12 = *(ushort *)(param_1 + 0x7e);
          pfVar23 = (float *)(param_1 + 0xd1c + (uint)*(ushort *)(param_1 + 0x86) * 4);
          uVar21 = *(ushort *)(param_1 + 0x86) + 1;
          fVar37 = -(*(float *)(param_1 + 0x90) * fVar36) + *pfVar23;
          pfVar25 = (float *)(param_1 + 0x199c + (uint)uVar18 * 4);
          uVar1 = *(ushort *)(param_1 + 0x8a);
          uVar2 = *(ushort *)(param_1 + 0x80);
          pfVar24 = (float *)(param_1 + 0x261c + (uint)uVar1 * 4);
          *pfVar23 = *(float *)(param_1 + 0x90) * fVar37 + fVar36;
          fVar34 = *pfVar25;
          *(ushort *)(param_1 + 0x86) =
               (ushort)(uVar21 * 0x10000 >> 0x10) & -(ushort)((uVar21 & 0xffff) < (uint)uVar12);
          uVar12 = *(ushort *)(param_1 + 0x82);
          fVar34 = -(*(float *)(param_1 + 0x94) * fVar37) + fVar34;
          uVar21 = uVar18 + 1;
          uVar19 = uVar1 + 1;
          *pfVar25 = *(float *)(param_1 + 0x94) * fVar34 + fVar37;
          fVar36 = *pfVar24;
          *(ushort *)(param_1 + 0x88) =
               (ushort)(uVar21 * 0x10000 >> 0x10) & -(ushort)((uVar21 & 0xffff) < (uint)uVar2);
          fVar36 = -(*(float *)(param_1 + 0x98) * fVar34) + fVar36;
          uVar21 = (uint)*(ushort *)(param_1 + 0x13084);
          *pfVar24 = *(float *)(param_1 + 0x98) * fVar36 + fVar34;
          *(ushort *)(param_1 + 0x8a) =
               (ushort)(uVar19 * 0x10000 >> 0x10) & -(ushort)((uVar19 & 0xffff) < (uint)uVar12);
          if (uVar21 < 0x2581) {
            uVar19 = uVar21 + 1 & 0xffff;
          }
          else {
            uVar21 = 0;
            uVar19 = 1;
          }
          fVar34 = fVar36;
          if (*(ushort *)(param_1 + 0x13086) != 0) {
            iVar16 = uVar21 - *(ushort *)(param_1 + 0x13086);
            iVar28 = iVar16;
            if ((((iVar16 < 0) && (iVar28 = iVar16 + 0x2581, iVar28 < 0)) &&
                ((iVar28 = iVar16 + 0x4b02, iVar28 < 0 &&
                 (((iVar28 = iVar16 + 0x7083, iVar28 < 0 && (iVar28 = iVar16 + 0x9604, iVar28 < 0))
                  && (iVar28 = iVar16 + 0xbb85, iVar28 < 0)))))) &&
               (iVar28 = iVar16 + 0xe106, iVar28 < 0)) {
              iVar28 = iVar16 + 0x10687;
            }
            fVar34 = (float)*(undefined8 *)(param_1 + 0x3e2ac + iVar28 * 4);
          }
          uVar18 = *(ushort *)(param_1 + 0x1308a);
          if (uVar18 != 0) {
            fVar37 = fVar36;
            if (*(ushort *)(param_1 + 0x13088) != 0) {
              iVar16 = uVar21 - *(ushort *)(param_1 + 0x13088);
              iVar28 = iVar16;
              if ((((iVar16 < 0) && (iVar28 = iVar16 + 0x2581, iVar28 < 0)) &&
                  (((iVar28 = iVar16 + 0x4b02, iVar28 < 0 &&
                    ((iVar28 = iVar16 + 0x7083, iVar28 < 0 && (iVar28 = iVar16 + 0x9604, iVar28 < 0)
                     ))) && (iVar28 = iVar16 + 0xbb85, iVar28 < 0)))) &&
                 (iVar28 = iVar16 + 0xe106, iVar28 < 0)) {
                iVar28 = iVar16 + 0x10687;
              }
              fVar37 = (float)*(undefined8 *)(param_1 + 0x3e2ac + iVar28 * 4);
            }
            fVar35 = fVar11;
            if (*(ushort *)(param_1 + 0x1308c) != 0) {
              fVar35 = (float)*(ushort *)(param_1 + 0x1308c);
            }
            *(ushort *)(param_1 + 0x1308a) = uVar18 - 1;
            fVar34 = (fVar11 - (float)uVar18 / fVar35) * (fVar34 - fVar37) + fVar37;
          }
          uVar18 = *(ushort *)(param_1 + 0x3b0a0);
          *(float *)((int)puVar14 + (uVar21 + 0xacf0) * 4 + -0x114) = fVar36;
          uVar12 = *(ushort *)(param_1 + 0x3b0a2);
          pfVar23 = (float *)(param_1 + 0x3b0ac + (uint)uVar18 * 4);
          fVar36 = -(*(float *)(param_1 + 0x3b0a8) * fVar34) + *pfVar23;
          *(ushort *)(param_1 + 0x13084) = (ushort)uVar19 & -(ushort)(uVar19 != 0x2581);
          uVar1 = *(ushort *)(param_1 + 0x3b098);
          puVar17 = (ulonglong *)(param_1 + 0x3bd2c + (uint)uVar12 * 4);
          uVar21 = uVar18 + 1;
          *pfVar23 = *(float *)(param_1 + 0x3b0a8) * fVar36 + fVar34;
          fVar34 = -(*(float *)(param_1 + 0x3b0a8) * fVar36) + (float)*puVar17;
          uVar18 = *(ushort *)(param_1 + 0x3b0a4);
          *(ushort *)(param_1 + 0x3b0a0) =
               (ushort)(uVar21 * 0x10000 >> 0x10) & -(ushort)((uVar21 & 0xffff) < (uint)uVar1);
          uVar1 = *(ushort *)(param_1 + 0x3b09a);
          pfVar24 = (float *)(param_1 + 0x3c9ac + (uint)uVar18 * 4);
          uVar21 = uVar12 + 1;
          *puVar17 = (ulonglong)(uint)(*(float *)(param_1 + 0x3b0a8) * fVar34 + fVar36);
          fVar36 = -(*(float *)(param_1 + 0x3b0a8) * fVar34) + *pfVar24;
          uVar12 = *(ushort *)(param_1 + 0x3b0a6);
          *(ushort *)(param_1 + 0x3b0a2) =
               (ushort)(uVar21 * 0x10000 >> 0x10) & -(ushort)((uVar21 & 0xffff) < (uint)uVar1);
          uVar1 = *(ushort *)(param_1 + 0x3b09c);
          pfVar23 = (float *)(param_1 + 0x3d62c + (uint)uVar12 * 4);
          uVar2 = *(ushort *)(param_1 + 0x3b09e);
          uVar21 = uVar18 + 1;
          *pfVar24 = *(float *)(param_1 + 0x3b0a8) * fVar36 + fVar34;
          fVar34 = -(*(float *)(param_1 + 0x3b0a8) * fVar36) + *pfVar23;
          uVar19 = uVar12 + 1;
          *(ushort *)(param_1 + 0x3b0a4) =
               (ushort)(uVar21 * 0x10000 >> 0x10) & -(ushort)((uVar21 & 0xffff) < (uint)uVar1);
          *pfVar23 = *(float *)(param_1 + 0x3b0a8) * fVar34 + fVar36;
          *(ushort *)(param_1 + 0x3b0a6) =
               (ushort)(uVar19 * 0x10000 >> 0x10) & -(ushort)((uVar19 & 0xffff) < (uint)uVar2);
          if (*(char *)(param_1 + 0x12ff8) == '\0') {
            uVar21 = uVar22 - *(ushort *)(param_1 + 0x12f40);
            if ((int)uVar21 < 0) {
              uVar21 = uVar21 + 0x1400;
            }
            uVar19 = uVar22 - *(ushort *)(param_1 + 0x12f42);
            fVar55 = *(float *)((int)puVar14 + (uVar21 & 0xffff) * 4 + 0x98);
            if ((int)uVar19 < 0) {
              uVar19 = uVar19 + 0x1400;
            }
            fStack_11c = *(float *)((int)puVar14 + ((uVar19 & 0xffff) + 0x1468) * 4 + -0x108);
            uVar21 = uVar22 - *(ushort *)(param_1 + 0x12f44);
            if ((int)uVar21 < 0) {
              uVar21 = uVar21 + 0x1400;
            }
            uVar19 = uVar22 - *(ushort *)(param_1 + 0x12f46);
            fVar54 = *(float *)((int)puVar14 + ((uVar21 & 0xffff) + 0x2868) * 4 + -0x108);
            if ((int)uVar19 < 0) {
              uVar19 = uVar19 + 0x1400;
            }
            uVar21 = uVar22 - *(ushort *)(param_1 + 0x12f48);
            fVar52 = *(float *)((int)puVar14 + ((uVar19 & 0xffff) + 0x3c68) * 4 + -0x108);
            if ((int)uVar21 < 0) {
              uVar21 = uVar21 + 0x1400;
            }
            uVar19 = uVar22 - *(ushort *)(param_1 + 0x12f4a);
            fVar53 = *(float *)((int)puVar14 + ((uVar21 & 0xffff) + 0x5068) * 4 + -0x108);
            if ((int)uVar19 < 0) {
              uVar19 = uVar19 + 0x1400;
            }
            uVar21 = uVar22 - *(ushort *)(param_1 + 0x12f4c);
            fVar33 = *(float *)((int)puVar14 + ((uVar19 & 0xffff) + 0x6468) * 4 + -0x108);
            if ((int)uVar21 < 0) {
              uVar21 = uVar21 + 0x1400;
            }
            uVar19 = uVar22 - *(ushort *)(param_1 + 0x12f4e);
            fVar51 = *(float *)((int)puVar14 + ((uVar21 & 0xffff) + 0x7868) * 4 + -0x108);
            if ((int)uVar19 < 0) {
              uVar19 = uVar19 + 0x1400;
            }
            fVar50 = *(float *)((int)puVar14 + ((uVar19 & 0xffff) + 0x8c68) * 4 + -0x108);
          }
          else {
            uVar18 = *(short *)(param_1 + 0x12ffa) + 1;
            if (0x3ff < uVar18) {
              *(undefined2 *)(param_1 + 0x12ffa) = 0;
              uVar12 = 0;
            }
            else {
              *(ushort *)(param_1 + 0x12ffa) = uVar18;
              uVar12 = uVar18 & 0xf;
            }
            fVar37 = (float)uVar22;
            fVar35 = *(float *)(param_1 + 0x12f74);
            fVar50 = *(float *)(param_1 + 0x12ff4);
            fVar36 = -(fVar35 * fVar50) + (fVar37 - *(float *)(param_1 + 0x12f50));
            fVar47 = (float)DAT_ram_400a1048;
            if (fVar36 < 0.0) {
              fVar36 = fVar36 + fVar47;
            }
            else if (fVar47 <= fVar36) {
              fVar36 = fVar36 - fVar47;
            }
            uVar19 = (uint)fVar36;
            fVar43 = *(float *)(param_1 + 0x12f78);
            uVar21 = 0;
            if ((int)(uVar19 + 1) < 0x1400) {
              uVar21 = uVar19 + 1 & 0xffff;
            }
            fVar55 = *(float *)((int)puVar14 + (uVar19 & 0xffff) * 4 + 0x98);
            fVar48 = -(fVar50 * fVar43) + (fVar37 - *(float *)(param_1 + 0x12f54));
            fVar55 = (fVar36 - (float)(int)uVar19) *
                     (*(float *)((int)puVar14 + uVar21 * 4 + 0x98) - fVar55) + fVar55;
            if (fVar48 < 0.0) {
              fVar48 = fVar48 + fVar47;
            }
            else if (fVar47 <= fVar48) {
              fVar48 = fVar48 - fVar47;
            }
            uVar19 = (uint)fVar48;
            fVar36 = *(float *)(param_1 + 0x12f7c);
            uVar21 = 0;
            if ((int)(uVar19 + 1) < 0x1400) {
              uVar21 = uVar19 + 1 & 0xffff;
            }
            fStack_11c = *(float *)((int)puVar14 + ((uVar19 & 0xffff) + 0x1468) * 4 + -0x108);
            fVar40 = -(fVar50 * fVar36) + (fVar37 - *(float *)(param_1 + 0x12f58));
            fStack_11c = (fVar48 - (float)(int)uVar19) *
                         (*(float *)((int)puVar14 + (uVar21 + 0x1468) * 4 + -0x108) - fStack_11c) +
                         fStack_11c;
            if (fVar40 < 0.0) {
              fVar40 = fVar40 + fVar47;
            }
            else if (fVar47 <= fVar40) {
              fVar40 = fVar40 - fVar47;
            }
            uVar19 = (uint)fVar40;
            fVar48 = *(float *)(param_1 + 0x12f80);
            uVar21 = 0;
            if ((int)(uVar19 + 1) < 0x1400) {
              uVar21 = uVar19 + 1 & 0xffff;
            }
            fVar54 = *(float *)((int)puVar14 + ((uVar19 & 0xffff) + 0x2868) * 4 + -0x108);
            fVar44 = -(fVar50 * fVar48) + (fVar37 - *(float *)(param_1 + 0x12f5c));
            fVar54 = (fVar40 - (float)(int)uVar19) *
                     (*(float *)((int)puVar14 + (uVar21 + 0x2868) * 4 + -0x108) - fVar54) + fVar54;
            if (fVar44 < 0.0) {
              fVar44 = fVar44 + fVar47;
            }
            else if (fVar47 <= fVar44) {
              fVar44 = fVar44 - fVar47;
            }
            uVar19 = (uint)fVar44;
            fVar40 = *(float *)(param_1 + 0x12f84);
            uVar21 = 0;
            if ((int)(uVar19 + 1) < 0x1400) {
              uVar21 = uVar19 + 1 & 0xffff;
            }
            fVar52 = *(float *)((int)puVar14 + ((uVar19 & 0xffff) + 0x3c68) * 4 + -0x108);
            fVar41 = -(fVar50 * fVar40) + (fVar37 - *(float *)(param_1 + 0x12f60));
            fVar52 = (fVar44 - (float)(int)uVar19) *
                     (*(float *)((int)puVar14 + (uVar21 + 0x3c68) * 4 + -0x108) - fVar52) + fVar52;
            if (fVar41 < 0.0) {
              fVar41 = fVar41 + fVar47;
            }
            else if (fVar47 <= fVar41) {
              fVar41 = fVar41 - fVar47;
            }
            uVar19 = (uint)fVar41;
            fVar44 = *(float *)(param_1 + 0x12f88);
            uVar21 = 0;
            if ((int)(uVar19 + 1) < 0x1400) {
              uVar21 = uVar19 + 1 & 0xffff;
            }
            fVar53 = *(float *)((int)puVar14 + ((uVar19 & 0xffff) + 0x5068) * 4 + -0x108);
            fVar49 = -(fVar50 * fVar44) + (fVar37 - *(float *)(param_1 + 0x12f64));
            fVar53 = (fVar41 - (float)(int)uVar19) *
                     (*(float *)((int)puVar14 + (uVar21 + 0x5068) * 4 + -0x108) - fVar53) + fVar53;
            if (fVar49 < 0.0) {
              fVar49 = fVar49 + fVar47;
            }
            else if (fVar47 <= fVar49) {
              fVar49 = fVar49 - fVar47;
            }
            uVar19 = (uint)fVar49;
            fVar41 = *(float *)(param_1 + 0x12f8c);
            uVar21 = 0;
            if ((int)(uVar19 + 1) < 0x1400) {
              uVar21 = uVar19 + 1 & 0xffff;
            }
            fVar33 = *(float *)((int)puVar14 + ((uVar19 & 0xffff) + 0x6468) * 4 + -0x108);
            fVar45 = -(fVar50 * fVar41) + (fVar37 - *(float *)(param_1 + 0x12f68));
            fVar33 = (fVar49 - (float)(int)uVar19) *
                     (*(float *)((int)puVar14 + (uVar21 + 0x6468) * 4 + -0x108) - fVar33) + fVar33;
            if (fVar45 < 0.0) {
              fVar45 = fVar45 + fVar47;
            }
            else if (fVar47 <= fVar45) {
              fVar45 = fVar45 - fVar47;
            }
            uVar19 = (uint)fVar45;
            fVar49 = *(float *)(param_1 + 0x12f90);
            uVar21 = 0;
            if ((int)(uVar19 + 1) < 0x1400) {
              uVar21 = uVar19 + 1 & 0xffff;
            }
            fVar51 = *(float *)((int)puVar14 + ((uVar19 & 0xffff) + 0x7868) * 4 + -0x108);
            fVar37 = -(fVar50 * fVar49) + (fVar37 - *(float *)(param_1 + 0x12f6c));
            fVar51 = (fVar45 - (float)(int)uVar19) *
                     (*(float *)((int)puVar14 + (uVar21 + 0x7868) * 4 + -0x108) - fVar51) + fVar51;
            if (fVar37 < 0.0) {
              fVar37 = fVar37 + fVar47;
            }
            else if (fVar47 <= fVar37) {
              fVar37 = fVar37 - fVar47;
            }
            uVar19 = (uint)fVar37;
            uVar21 = 0;
            if ((int)(uVar19 + 1) < 0x1400) {
              uVar21 = uVar19 + 1 & 0xffff;
            }
            fVar50 = *(float *)((int)puVar14 + ((uVar19 & 0xffff) + 0x8c68) * 4 + -0x108);
            fVar50 = (fVar37 - (float)(int)uVar19) *
                     (*(float *)((int)puVar14 + (uVar21 + 0x8c68) * 4 + -0x108) - fVar50) + fVar50;
            if (uVar12 == 0) {
              fVar37 = *(float *)(param_1 + 0x12fd4) * fVar35 +
                       *(float *)(param_1 + 0x12fb4) * *(float *)(param_1 + 0x12f94);
              fVar35 = *(float *)(param_1 + 0x12fd4) * *(float *)(param_1 + 0x12f94) -
                       *(float *)(param_1 + 0x12fb4) * fVar35;
              if (0x3ff < uVar18) {
                fVar36 = fVar37 * fVar37 + fVar35 * fVar35;
                if (0.0 < fVar36 != 0) {
                  if ((0.0 < fVar36) < 0x100 && fVar36 < 0.0) {
                    fVar36 = (float)FUN_ram_40000e74();
                    fVar43 = *(float *)(param_1 + 0x12f78);
                    fVar32 = DAT_ram_4009f068;
                  }
                  else {
                    fVar36 = SQRT(fVar36);
                  }
                  fVar37 = fVar37 * (fVar11 / fVar36);
                  fVar35 = fVar35 * (fVar11 / fVar36);
                }
                *(float *)(param_1 + 0x12f74) = fVar37;
                *(float *)(param_1 + 0x12f94) = fVar35;
                fVar35 = *(float *)(param_1 + 0x12f98) * *(float *)(param_1 + 0x12fd8) -
                         *(float *)(param_1 + 0x12fb8) * fVar43;
                fVar36 = *(float *)(param_1 + 0x12fd8) * fVar43 +
                         *(float *)(param_1 + 0x12f98) * *(float *)(param_1 + 0x12fb8);
                fVar37 = fVar36 * fVar36 + fVar35 * fVar35;
                if (0.0 < fVar37 != 0) {
                  if ((0.0 < fVar37) < 0x100 && fVar37 < 0.0) {
                    fVar37 = (float)FUN_ram_40000e74();
                    fVar32 = DAT_ram_4009f068;
                  }
                  else {
                    fVar37 = SQRT(fVar37);
                  }
                  fVar36 = fVar36 * (fVar11 / fVar37);
                  fVar35 = fVar35 * (fVar11 / fVar37);
                }
                *(float *)(param_1 + 0x12f78) = fVar36;
                *(float *)(param_1 + 0x12f98) = fVar35;
                fVar35 = *(float *)(param_1 + 0x12f9c) * *(float *)(param_1 + 0x12fdc) -
                         *(float *)(param_1 + 0x12f7c) * *(float *)(param_1 + 0x12fbc);
                fVar36 = *(float *)(param_1 + 0x12f7c) * *(float *)(param_1 + 0x12fdc) +
                         *(float *)(param_1 + 0x12f9c) * *(float *)(param_1 + 0x12fbc);
                fVar37 = fVar36 * fVar36 + fVar35 * fVar35;
                if (0.0 < fVar37 != 0) {
                  if ((0.0 < fVar37) < 0x100 && fVar37 < 0.0) {
                    fVar37 = (float)FUN_ram_40000e74();
                    fVar32 = DAT_ram_4009f068;
                  }
                  else {
                    fVar37 = SQRT(fVar37);
                  }
                  fVar36 = fVar36 * (fVar11 / fVar37);
                  fVar35 = fVar35 * (fVar11 / fVar37);
                }
                *(float *)(param_1 + 0x12f7c) = fVar36;
                *(float *)(param_1 + 0x12f9c) = fVar35;
                fVar35 = *(float *)(param_1 + 0x12fa0) * *(float *)(param_1 + 0x12fe0) -
                         *(float *)(param_1 + 0x12f80) * *(float *)(param_1 + 0x12fc0);
                fVar36 = *(float *)(param_1 + 0x12f80) * *(float *)(param_1 + 0x12fe0) +
                         *(float *)(param_1 + 0x12fa0) * *(float *)(param_1 + 0x12fc0);
                fVar37 = fVar36 * fVar36 + fVar35 * fVar35;
                if (0.0 < fVar37 != 0) {
                  if ((0.0 < fVar37) < 0x100 && fVar37 < 0.0) {
                    fVar37 = (float)FUN_ram_40000e74();
                    fVar32 = DAT_ram_4009f068;
                  }
                  else {
                    fVar37 = SQRT(fVar37);
                  }
                  fVar36 = fVar36 * (fVar11 / fVar37);
                  fVar35 = fVar35 * (fVar11 / fVar37);
                }
                *(float *)(param_1 + 0x12f80) = fVar36;
                *(float *)(param_1 + 0x12fa0) = fVar35;
                fVar35 = *(float *)(param_1 + 0x12fa4) * *(float *)(param_1 + 0x12fe4) -
                         *(float *)(param_1 + 0x12f84) * *(float *)(param_1 + 0x12fc4);
                fVar36 = *(float *)(param_1 + 0x12f84) * *(float *)(param_1 + 0x12fe4) +
                         *(float *)(param_1 + 0x12fa4) * *(float *)(param_1 + 0x12fc4);
                fVar37 = fVar36 * fVar36 + fVar35 * fVar35;
                if (0.0 < fVar37 != 0) {
                  if ((0.0 < fVar37) < 0x100 && fVar37 < 0.0) {
                    fVar37 = (float)FUN_ram_40000e74();
                    fVar32 = DAT_ram_4009f068;
                  }
                  else {
                    fVar37 = SQRT(fVar37);
                  }
                  fVar36 = fVar36 * (fVar11 / fVar37);
                  fVar35 = fVar35 * (fVar11 / fVar37);
                }
                *(float *)(param_1 + 0x12f84) = fVar36;
                *(float *)(param_1 + 0x12fa4) = fVar35;
                fVar35 = *(float *)(param_1 + 0x12fa8) * *(float *)(param_1 + 0x12fe8) -
                         *(float *)(param_1 + 0x12f88) * *(float *)(param_1 + 0x12fc8);
                fVar36 = *(float *)(param_1 + 0x12f88) * *(float *)(param_1 + 0x12fe8) +
                         *(float *)(param_1 + 0x12fa8) * *(float *)(param_1 + 0x12fc8);
                fVar37 = fVar36 * fVar36 + fVar35 * fVar35;
                if (0.0 < fVar37 != 0) {
                  if ((0.0 < fVar37) < 0x100 && fVar37 < 0.0) {
                    fVar37 = (float)FUN_ram_40000e74();
                    fVar32 = DAT_ram_4009f068;
                  }
                  else {
                    fVar37 = SQRT(fVar37);
                  }
                  fVar36 = fVar36 * (fVar11 / fVar37);
                  fVar35 = fVar35 * (fVar11 / fVar37);
                }
                *(float *)(param_1 + 0x12f88) = fVar36;
                *(float *)(param_1 + 0x12fa8) = fVar35;
                fVar35 = *(float *)(param_1 + 0x12fec) * *(float *)(param_1 + 0x12fac) -
                         *(float *)(param_1 + 0x12f8c) * *(float *)(param_1 + 0x12fcc);
                fVar36 = *(float *)(param_1 + 0x12fec) * *(float *)(param_1 + 0x12f8c) +
                         *(float *)(param_1 + 0x12fac) * *(float *)(param_1 + 0x12fcc);
                fVar37 = fVar36 * fVar36 + fVar35 * fVar35;
                if (0.0 < fVar37 != 0) {
                  if ((0.0 < fVar37) < 0x100 && fVar37 < 0.0) {
                    fVar37 = (float)FUN_ram_40000e74();
                    fVar32 = DAT_ram_4009f068;
                  }
                  else {
                    fVar37 = SQRT(fVar37);
                  }
                  fVar36 = fVar36 * (fVar11 / fVar37);
                  fVar35 = fVar35 * (fVar11 / fVar37);
                }
                *(float *)(param_1 + 0x12f8c) = fVar36;
                *(float *)(param_1 + 0x12fac) = fVar35;
                fVar37 = *(float *)(param_1 + 0x12fb0) * *(float *)(param_1 + 0x12ff0) -
                         *(float *)(param_1 + 0x12f90) * *(float *)(param_1 + 0x12fd0);
                fVar36 = *(float *)(param_1 + 0x12f90) * *(float *)(param_1 + 0x12ff0) +
                         *(float *)(param_1 + 0x12fb0) * *(float *)(param_1 + 0x12fd0);
                fVar35 = fVar36 * fVar36 + fVar37 * fVar37;
                if (0.0 < fVar35 == 0) {
                  uVar22 = (uint)*(ushort *)(param_1 + 0x12f70);
                }
                else {
                  if ((0.0 < fVar35) < 0x100 && fVar35 < 0.0) {
                    fVar35 = (float)FUN_ram_40000e74();
                    fVar32 = DAT_ram_4009f068;
                  }
                  else {
                    fVar35 = SQRT(fVar35);
                  }
                  uVar22 = (uint)*(ushort *)(param_1 + 0x12f70);
                  fVar36 = fVar36 * (fVar11 / fVar35);
                  fVar37 = fVar37 * (fVar11 / fVar35);
                }
              }
              else {
                *(float *)(param_1 + 0x12f74) = fVar37;
                *(float *)(param_1 + 0x12f94) = fVar35;
                *(float *)(param_1 + 0x12f78) =
                     fVar43 * *(float *)(param_1 + 0x12fd8) + in_register_00000100;
                *(float *)(param_1 + 0x12f98) =
                     *(float *)(param_1 + 0x12f98) * *(float *)(param_1 + 0x12fd8) -
                     in_register_00000100;
                *(float *)(param_1 + 0x12f7c) =
                     fVar36 * *(float *)(param_1 + 0x12fdc) + in_register_00000100;
                *(float *)(param_1 + 0x12f9c) =
                     *(float *)(param_1 + 0x12f9c) * *(float *)(param_1 + 0x12fdc) -
                     fVar36 * *(float *)(param_1 + 0x12fbc);
                *(float *)(param_1 + 0x12f80) =
                     fVar48 * *(float *)(param_1 + 0x12fe0) + in_register_00000100;
                *(float *)(param_1 + 0x12fa0) =
                     *(float *)(param_1 + 0x12fa0) * *(float *)(param_1 + 0x12fe0) -
                     fVar48 * *(float *)(param_1 + 0x12fc0);
                *(float *)(param_1 + 0x12f84) =
                     fVar40 * *(float *)(param_1 + 0x12fe4) + in_register_00000100;
                *(float *)(param_1 + 0x12fa4) =
                     *(float *)(param_1 + 0x12fa4) * *(float *)(param_1 + 0x12fe4) -
                     fVar40 * *(float *)(param_1 + 0x12fc4);
                *(float *)(param_1 + 0x12f88) =
                     fVar44 * *(float *)(param_1 + 0x12fe8) + in_register_00000100;
                *(float *)(param_1 + 0x12fa8) =
                     *(float *)(param_1 + 0x12fa8) * *(float *)(param_1 + 0x12fe8) -
                     fVar44 * *(float *)(param_1 + 0x12fc8);
                *(float *)(param_1 + 0x12fac) =
                     *(float *)(param_1 + 0x12fac) * *(float *)(param_1 + 0x12fec) -
                     *(float *)(param_1 + 0x12fcc) * fVar41;
                *(float *)(param_1 + 0x12f8c) =
                     *(float *)(param_1 + 0x12fec) * fVar41 + in_register_00000100;
                fVar36 = *(float *)(param_1 + 0x12ff0) * fVar49 +
                         *(float *)(param_1 + 0x12fd0) * *(float *)(param_1 + 0x12fb0);
                fVar37 = *(float *)(param_1 + 0x12fb0) * *(float *)(param_1 + 0x12ff0) -
                         *(float *)(param_1 + 0x12fd0) * fVar49;
              }
              *(float *)(param_1 + 0x12f90) = fVar36;
              *(float *)(param_1 + 0x12fb0) = fVar37;
            }
          }
          fVar9 = fVar11 - (float)*(undefined8 *)(param_1 + 0x1303c);
          fVar37 = (float)*(undefined8 *)(param_1 + 0x13054);
          fVar43 = (float)*(undefined8 *)(param_1 + 0x13050);
          fVar36 = fVar9 * (fVar55 - *(float *)(param_1 + 0x13044)) + *(float *)(param_1 + 0x13044);
          fVar37 = fVar9 * (fVar53 - fVar37) + fVar37;
          fVar35 = fVar9 * (fVar54 - *(float *)(param_1 + 0x1304c)) + *(float *)(param_1 + 0x1304c);
          fVar47 = fVar9 * (fStack_11c - *(float *)(param_1 + 0x13048)) +
                   *(float *)(param_1 + 0x13048);
          fVar43 = fVar9 * (fVar52 - fVar43) + fVar43;
          fVar10 = fVar11 - (float)*(undefined8 *)(param_1 + 0x13040);
          fVar44 = (float)*(undefined8 *)(param_1 + 0x13068);
          fVar48 = fVar10 * (fVar36 - *(float *)(param_1 + 0x13064)) + *(float *)(param_1 + 0x13064)
          ;
          fVar40 = fVar10 * (fVar37 - *(float *)(param_1 + 0x13074)) + *(float *)(param_1 + 0x13074)
          ;
          fVar44 = fVar10 * (fVar47 - fVar44) + fVar44;
          fVar41 = fVar10 * (fVar35 - *(float *)(param_1 + 0x1306c)) + *(float *)(param_1 + 0x1306c)
          ;
          fVar49 = fVar10 * (fVar43 - *(float *)(param_1 + 0x13070)) + *(float *)(param_1 + 0x13070)
          ;
          *(float *)(param_1 + 0x13064) = fVar48;
          fVar45 = fVar9 * (fVar33 - *(float *)(param_1 + 0x13058)) + *(float *)(param_1 + 0x13058);
          fVar4 = fVar9 * (fVar51 - *(float *)(param_1 + 0x1305c)) + *(float *)(param_1 + 0x1305c);
          fVar9 = fVar9 * (fVar50 - *(float *)(param_1 + 0x13060)) + *(float *)(param_1 + 0x13060);
          *(ulonglong *)(param_1 + 0x13044) = (ulonglong)(uint)fVar36;
          *(float *)(param_1 + 0x13048) = fVar47;
          *(float *)(param_1 + 0x13068) = fVar44;
          fVar5 = fVar10 * (fVar45 - *(float *)(param_1 + 0x13078)) + *(float *)(param_1 + 0x13078);
          fVar6 = fVar10 * (fVar4 - *(float *)(param_1 + 0x1307c)) + *(float *)(param_1 + 0x1307c);
          fVar10 = fVar10 * (fVar9 - *(float *)(param_1 + 0x13080)) + *(float *)(param_1 + 0x13080);
          *(float *)(param_1 + 0x1304c) = fVar35;
          *(float *)(param_1 + 0x1306c) = fVar41;
          *(ulonglong *)(param_1 + 0x13050) = (ulonglong)(uint)fVar43;
          *(float *)(param_1 + 0x13070) = fVar49;
          *(ulonglong *)(param_1 + 0x13054) = (ulonglong)(uint)fVar37;
          *(float *)(param_1 + 0x13074) = fVar40;
          fVar7 = fVar36 * *(float *)(param_1 + 0x12ffc) +
                  fVar48 * (float)*(undefined8 *)(param_1 + 0x1301c);
          fVar47 = fVar47 * (float)*puVar14 + fVar44 * (float)*(undefined8 *)(param_1 + 0x13020);
          fVar41 = fVar35 * (float)*(undefined8 *)(param_1 + 0x13004) +
                   fVar41 * *(float *)(param_1 + 0x13024);
          fVar43 = fVar43 * (float)*(undefined8 *)(param_1 + 0x13008) +
                   fVar49 * *(float *)(param_1 + 0x13028);
          fVar49 = fVar37 * (float)*(undefined8 *)(param_1 + 0x1300c) +
                   fVar40 * *(float *)(param_1 + 0x1302c);
          fVar36 = fVar7 + fVar47;
          fVar35 = fVar45 * (float)*(undefined8 *)(param_1 + 0x13010) +
                   fVar5 * *(float *)(param_1 + 0x13030);
          fVar48 = fVar9 * *(float *)(param_1 + 0x13018) + fVar10 * *(float *)(param_1 + 0x13038);
          fVar7 = fVar7 - fVar47;
          fVar8 = fVar4 * (float)*(undefined8 *)(param_1 + 0x13014) +
                  fVar6 * *(float *)(param_1 + 0x13034);
          fVar37 = fVar49 + fVar35;
          fVar49 = fVar49 - fVar35;
          fVar35 = fVar8 + fVar48;
          fVar47 = fVar41 + fVar43;
          fVar8 = fVar8 - fVar48;
          fVar41 = fVar41 - fVar43;
          fVar43 = fVar36 + fVar47;
          fVar48 = fVar37 + fVar35;
          fVar40 = fVar7 + fVar41;
          fVar44 = fVar49 + fVar8;
          fVar37 = fVar37 - fVar35;
          fVar36 = fVar36 - fVar47;
          fVar7 = fVar7 - fVar41;
          fVar49 = fVar49 - fVar8;
          fVar35 = *(float *)(param_1 + 0x12f14);
          iVar28 = param_1 + uVar22 * 4;
          *(float *)(param_1 + 0x13058) = fVar45;
          *(float *)(param_1 + 0x13078) = fVar5;
          *(float *)(param_1 + 0x1305c) = fVar4;
          *(float *)(param_1 + 0x1307c) = fVar6;
          *(ulonglong *)(param_1 + 0x13060) = (ulonglong)(uint)fVar9;
          *(float *)(param_1 + 0x13080) = fVar10;
          *(float *)(iVar28 + 0x13098) = fVar35 * fVar34 + fVar43 + fVar48;
          *(float *)(iVar28 + 0x18098) = -(fVar35 * fVar34) + fVar40 + fVar44;
          *(float *)(iVar28 + 0x1d098) = fVar35 * fVar34 + fVar36 + fVar37;
          *(float *)(iVar28 + 0x22098) = -(fVar35 * fVar34) + fVar7 + fVar49;
          *(float *)(iVar28 + 0x27098) = fVar35 * fVar34 + (fVar43 - fVar48);
          *(float *)(iVar28 + 0x2c098) = -(fVar35 * fVar34) + (fVar40 - fVar44);
          *(float *)(iVar28 + 0x31098) = fVar35 * fVar34 + (fVar36 - fVar37);
          uVar22 = uVar22 + 1 & 0xffff;
          *(float *)(iVar28 + 0x36098) = -(fVar35 * fVar34) + (fVar7 - fVar49);
          uVar18 = *(ushort *)(param_1 + 0x13090);
          uVar22 = uVar22 & (0x13ff < uVar22) - 1;
          *(short *)(param_1 + 0x12f70) = (short)uVar22;
          fVar34 = (((((fStack_11c + fVar55 + fVar54 + fVar52) - fVar53) - fVar33) - fVar51) -
                   fVar50) * fVar32;
          fVar36 = (((fVar33 + (((fStack_11c + fVar55) - fVar54) - fVar52) + fVar53) - fVar51) -
                   fVar50) * fVar32;
          if (uVar18 < *(ushort *)(param_1 + 0x1308e)) {
            *(ushort *)(param_1 + 0x13090) = uVar18 + 1;
            fVar37 = (float)uVar18 / (float)*(ushort *)(param_1 + 0x1308e);
            fVar34 = fVar34 * fVar37;
            fVar36 = fVar36 * fVar37;
          }
          pfVar27 = pfVar27 + 1;
          puVar15 = (undefined8 *)((int)puVar15 + 4);
          *pfVar30 = fVar31 * fVar39 + fVar46 * fVar34;
          *pfVar29 = fVar31 * fVar3 + fVar46 * fVar36;
          pfVar29 = pfVar29 + 1;
          pfVar30 = pfVar30 + 1;
        } while (pfVar13 != pfVar27);
        uStack_cc = uStack_cc + uVar26;
      } while (uStack_cc < param_5);
    }
    return;
  }
  return;
}

