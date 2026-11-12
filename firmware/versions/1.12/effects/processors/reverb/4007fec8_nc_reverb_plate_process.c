/* NanoCore 1.12: nc_reverb_plate_process at 0x4007fec8.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_e0edb7347ebb7c34868e0c165e6bb50dc10d3e7ce1db0c976043b7a3c59b10c4
 * Source: analysis/rea-1.12-effects/results/03600-export-0x4007fec8.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_plate_process(int param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined2 uVar8;
  float *pfVar9;
  ulonglong *puVar10;
  uint uVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 unaff_fs11;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float afStack_c0 [4];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  if ((((param_1 != 0) && (param_2 != (float *)0x0)) && (param_3 != (float *)0x0)) &&
     (param_4 != (float *)0x0)) {
    uStack_a0 = (undefined4)unaff_fs11;
    uStack_9c = (undefined4)((ulonglong)unaff_fs11 >> 0x20);
    if (*(char *)(param_1 + 0x24) != '\0') {
      nc_reverb_plate_helper_4007eae0();
    }
    fVar5 = DAT_ram_400a0fe0;
    fVar4 = DAT_ram_4009f95c;
    fVar3 = DAT_ram_4009a644;
    fVar2 = DAT_ram_4009a374;
    fVar1 = DAT_ram_4009672c;
    if (param_5 != 0) {
      pfVar17 = param_2 + param_5;
      fVar34 = DAT_ram_40099f6c;
      fVar33 = DAT_ram_40099f40;
      fVar36 = DAT_ram_400a0fd8;
      fVar35 = DAT_ram_400a0fdc;
      fVar30 = DAT_ram_40099f34;
      fVar29 = DAT_ram_400a0fd4;
      do {
        uVar14 = (uint)*(ushort *)(param_1 + 0x34dba);
        fVar23 = *param_2;
        if (uVar14 != 0) {
          uVar11 = (uint)*(ushort *)(param_1 + 0x34db8);
          if (uVar11 < 0x1000) {
            uVar14 = uVar11 - uVar14;
            uVar8 = (undefined2)(uVar11 + 1);
            if ((int)uVar14 < 0) {
              uVar14 = uVar14 + 0x1000;
            }
            uVar28 = *(undefined8 *)(param_1 + ((uVar14 & 0xffff) + 0xc36c) * 4 + 8);
            *(ulonglong *)(param_1 + (uVar11 + 0xc36c) * 4 + 8) = (ulonglong)(uint)fVar23;
            fVar23 = (float)uVar28;
            if ((uVar11 + 1 & 0xffff) == 0x1000) {
              uVar8 = 0;
            }
          }
          else {
            uVar28 = *(undefined8 *)(param_1 + ((0x1000 - uVar14 & 0xffff) + 0xc36c) * 4 + 8);
            *(float *)(param_1 + 0x30db8) = fVar23;
            uVar8 = 1;
            fVar23 = (float)uVar28;
          }
          *(undefined2 *)(param_1 + 0x34db8) = uVar8;
        }
        fVar32 = *(float *)(param_1 + 0x3c);
        uVar14 = (uint)*(ushort *)(param_1 + 0x2048);
        *(float *)(param_1 + 0x3c) = fVar23;
        fVar32 = ((fVar23 + *(float *)(param_1 + 0x38)) - fVar32) * *(float *)(param_1 + 0x34);
        fVar23 = fVar32 * (fVar1 - *(float *)(param_1 + 0x40)) +
                 *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x44);
        *(float *)(param_1 + 0x38) = fVar32;
        *(float *)(param_1 + 0x44) = fVar23;
        fVar32 = fVar23;
        if (uVar14 != 0) {
          uVar11 = (uint)*(ushort *)(param_1 + 0x2050);
          if (uVar11 < uVar14) {
            uVar12 = uVar11 + 1 & 0xffff;
            puVar10 = (ulonglong *)(param_1 + 0x48 + uVar11 * 4);
          }
          else {
            uVar12 = 1;
            puVar10 = (ulonglong *)(param_1 + 0x48);
          }
          fVar32 = fVar23 * fVar29 + (float)*puVar10;
          *puVar10 = (ulonglong)(uint)(fVar32 * fVar3 + fVar23);
          *(ushort *)(param_1 + 0x2050) = (ushort)uVar12 & -(ushort)(uVar12 < uVar14);
        }
        uVar14 = (uint)*(ushort *)(param_1 + 0x204a);
        fVar23 = fVar32;
        if (uVar14 != 0) {
          uVar11 = (uint)*(ushort *)(param_1 + 0x2052);
          if (uVar11 < uVar14) {
            uVar12 = uVar11 + 1 & 0xffff;
            puVar10 = (ulonglong *)(param_1 + 0x848 + uVar11 * 4);
          }
          else {
            uVar12 = 1;
            puVar10 = (ulonglong *)(param_1 + 0x848);
          }
          fVar23 = fVar32 * fVar29 + (float)*puVar10;
          *puVar10 = (ulonglong)(uint)(fVar23 * fVar3 + fVar32);
          *(ushort *)(param_1 + 0x2052) = (ushort)uVar12 & -(ushort)(uVar12 < uVar14);
        }
        uVar14 = (uint)*(ushort *)(param_1 + 0x204c);
        fVar32 = fVar23;
        if (uVar14 != 0) {
          uVar11 = (uint)*(ushort *)(param_1 + 0x2054);
          if (uVar11 < uVar14) {
            uVar12 = uVar11 + 1 & 0xffff;
            puVar10 = (ulonglong *)(param_1 + 0x1048 + uVar11 * 4);
          }
          else {
            uVar12 = 1;
            puVar10 = (ulonglong *)(param_1 + 0x1048);
          }
          fVar32 = fVar23 * fVar36 + (float)*puVar10;
          *puVar10 = (ulonglong)(uint)(fVar32 * fVar35 + fVar23);
          *(ushort *)(param_1 + 0x2054) = (ushort)uVar12 & -(ushort)(uVar12 < uVar14);
        }
        uVar14 = (uint)*(ushort *)(param_1 + 0x204e);
        fVar23 = fVar32;
        if (uVar14 != 0) {
          uVar11 = (uint)*(ushort *)(param_1 + 0x2056);
          if (uVar11 < uVar14) {
            uVar12 = uVar11 + 1 & 0xffff;
            puVar10 = (ulonglong *)(param_1 + 0x1848 + uVar11 * 4);
          }
          else {
            uVar12 = 1;
            puVar10 = (ulonglong *)(param_1 + 0x1848);
          }
          fVar23 = fVar32 * DAT_ram_400a0fd8 + (float)*puVar10;
          *puVar10 = (ulonglong)(uint)(fVar23 * DAT_ram_400a0fdc + fVar32);
          *(ushort *)(param_1 + 0x2056) = (ushort)uVar12 & -(ushort)(uVar12 < uVar14);
        }
        uVar21 = (ulonglong)(uint)fVar23;
        uVar14 = (uint)*(ushort *)(param_1 + 0x5058);
        fVar32 = fVar23;
        if (uVar14 != 0) {
          uVar11 = (uint)*(ushort *)(param_1 + 0x505e);
          if (uVar11 < uVar14) {
            uVar12 = uVar11 + 1 & 0xffff;
            pfVar9 = (float *)(param_1 + 0x2058) + uVar11;
          }
          else {
            uVar12 = 1;
            pfVar9 = (float *)(param_1 + 0x2058);
          }
          fVar32 = *pfVar9;
          *(ulonglong *)pfVar9 = uVar21;
          *(ushort *)(param_1 + 0x505e) = (ushort)uVar12 & -(ushort)(uVar12 < uVar14);
        }
        uVar14 = (uint)*(ushort *)(param_1 + 0x505a);
        fVar26 = fVar23;
        if (uVar14 != 0) {
          uVar11 = (uint)*(ushort *)(param_1 + 0x5060);
          if (uVar11 < uVar14) {
            uVar12 = uVar11 + 1 & 0xffff;
            puVar10 = (ulonglong *)(param_1 + 0x3058 + uVar11 * 4);
          }
          else {
            uVar12 = 1;
            puVar10 = (ulonglong *)(param_1 + 0x3058);
          }
          fVar26 = (float)*puVar10;
          *puVar10 = uVar21;
          *(ushort *)(param_1 + 0x5060) = (ushort)uVar12 & -(ushort)(uVar12 < uVar14);
        }
        uVar14 = (uint)*(ushort *)(param_1 + 0x505c);
        fVar27 = fVar23;
        if (uVar14 != 0) {
          uVar11 = (uint)*(ushort *)(param_1 + 0x5062);
          if (uVar11 < uVar14) {
            uVar12 = uVar11 + 1 & 0xffff;
            puVar10 = (ulonglong *)(param_1 + 0x4058 + uVar11 * 4);
          }
          else {
            uVar12 = 1;
            puVar10 = (ulonglong *)(param_1 + 0x4058);
          }
          fVar27 = (float)*puVar10;
          *puVar10 = uVar21;
          *(ushort *)(param_1 + 0x5062) = (ushort)uVar12 & -(ushort)(uVar12 < uVar14);
        }
        fVar32 = fVar27 * fVar30 + fVar26 * fVar33 + fVar32 * fVar34 + 0.0;
        if (*(char *)(param_1 + 0x30da8) == '\0') {
          uVar11 = (uint)*(ushort *)(param_1 + 0x30c66);
          uVar14 = (uint)*(ushort *)(param_1 + 0x30c64);
          uVar12 = uVar11 - (int)*(float *)(param_1 + 0x30c68);
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 + uVar14;
          }
          fVar26 = *(float *)(param_1 + 0x30dac);
          fVar24 = fVar1 - fVar26;
          fVar27 = (float)*(undefined8 *)(param_1 + ((uVar12 & 0xffff) + 0x1418) * 4 + 4) * fVar24 +
                   fVar26 * *(float *)(param_1 + 0x30ca8);
          uVar12 = uVar11 - (int)*(float *)(param_1 + 0x30c6c);
          *(float *)(param_1 + 0x30ca8) = fVar27;
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 + uVar14;
          }
          fVar31 = fVar24 * (float)*(undefined8 *)(param_1 + ((uVar12 & 0xffff) + 0x29f8) * 4 + 4) +
                   fVar26 * *(float *)(param_1 + 0x30cac);
          uVar12 = uVar11 - (int)*(float *)(param_1 + 0x30c70);
          *(float *)(param_1 + 0x30cac) = fVar31;
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 + uVar14;
          }
          fVar25 = fVar24 * *(float *)(param_1 + ((uVar12 & 0xffff) + 0x3fd8) * 4 + 4) +
                   fVar26 * *(float *)(param_1 + 0x30cb0);
          uVar12 = uVar11 - (int)*(float *)(param_1 + 0x30c74);
          *(float *)(param_1 + 0x30cb0) = fVar25;
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 + uVar14;
          }
          fVar22 = fVar24 * *(float *)(param_1 + ((uVar12 & 0xffff) + 0x55b8) * 4 + 4) +
                   fVar26 * *(float *)(param_1 + 0x30cb4);
          uVar12 = uVar11 - (int)*(float *)(param_1 + 0x30c78);
          *(float *)(param_1 + 0x30cb4) = fVar22;
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 + uVar14;
          }
          fVar20 = fVar24 * *(float *)(param_1 + ((uVar12 & 0xffff) + 0x6b98) * 4 + 4) +
                   fVar26 * *(float *)(param_1 + 0x30cb8);
          uVar12 = uVar11 - (int)*(float *)(param_1 + 0x30c7c);
          *(float *)(param_1 + 0x30cb8) = fVar20;
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 + uVar14;
          }
          fVar19 = fVar24 * *(float *)(param_1 + ((uVar12 & 0xffff) + 0x8178) * 4 + 4) +
                   fVar26 * *(float *)(param_1 + 0x30cbc);
          uVar12 = uVar11 - (int)*(float *)(param_1 + 0x30c80);
          *(float *)(param_1 + 0x30cbc) = fVar19;
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 + uVar14;
          }
          fVar18 = fVar24 * *(float *)(param_1 + ((uVar12 & 0xffff) + 0x9758) * 4 + 4) +
                   fVar26 * *(float *)(param_1 + 0x30cc0);
          uVar12 = uVar11 - (int)*(float *)(param_1 + 0x30c84);
          *(float *)(param_1 + 0x30cc0) = fVar18;
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 + uVar14;
          }
          fVar24 = fVar24 * (float)*(undefined8 *)(param_1 + ((uVar12 & 0xffff) + 0xad38) * 4 + 4) +
                   fVar26 * *(float *)(param_1 + 0x30cc4);
          fVar26 = fVar27 + 0.0 + fVar31 + fVar25 + fVar22 + fVar20 + fVar19 + fVar18 + fVar24;
          *(float *)(param_1 + 0x30cc4) = fVar24;
        }
        else {
          uVar13 = *(short *)(param_1 + 0x30daa) + 1;
          if (0x3ff < uVar13) {
            *(undefined2 *)(param_1 + 0x30daa) = 0;
          }
          else {
            *(ushort *)(param_1 + 0x30daa) = uVar13;
          }
          fVar26 = 0.0;
          puVar16 = (undefined8 *)(param_1 + 0x5064);
          puVar7 = (undefined8 *)(param_1 + 0x30c68);
          pfVar9 = afStack_c0;
          do {
            fVar27 = *(float *)(puVar7 + 0x18);
            fVar24 = *(float *)(param_1 + 0x30db0);
            fVar31 = fVar27 * *(float *)(puVar7 + 0x24) +
                     *(float *)(puVar7 + 0x1c) * *(float *)(puVar7 + 0x20);
            fVar25 = *(float *)(puVar7 + 0x1c) * *(float *)(puVar7 + 0x24) -
                     fVar27 * *(float *)(puVar7 + 0x20);
            if (0x3ff < uVar13) {
              fVar22 = fVar31 * fVar31 + fVar25 * fVar25;
              if (0.0 < fVar22 != 0) {
                if ((0.0 < fVar22) < 0x100 && fVar22 < 0.0) {
                  fVar22 = (float)FUN_ram_40000e74();
                  fVar34 = DAT_ram_40099f6c;
                  fVar33 = DAT_ram_40099f40;
                  fVar36 = DAT_ram_400a0fd8;
                  fVar35 = DAT_ram_400a0fdc;
                  fVar30 = DAT_ram_40099f34;
                  fVar29 = DAT_ram_400a0fd4;
                }
                else {
                  fVar22 = SQRT(fVar22);
                }
                fVar31 = fVar31 * (fVar1 / fVar22);
                fVar25 = fVar25 * (fVar1 / fVar22);
              }
            }
            uVar14 = (uint)*(ushort *)(param_1 + 0x30c64);
            *(float *)(puVar7 + 0x18) = fVar31;
            *(float *)(puVar7 + 0x1c) = fVar25;
            uVar11 = (uint)*(ushort *)(param_1 + 0x30c66);
            fVar31 = 0.0;
            if (1 < uVar14) {
              fVar31 = (float)uVar14;
              fVar27 = (float)uVar11 - (fVar27 * fVar24 + (float)*puVar7);
              if (fVar27 < 0.0) {
                fVar27 = fVar27 + fVar31;
              }
              if (fVar31 <= fVar27) {
                fVar27 = fVar27 - fVar31;
              }
              uVar12 = (uint)fVar27;
              puVar6 = (undefined8 *)((int)puVar16 + (uVar12 + 1 & 0xffff) * 4);
              if ((int)uVar14 <= (int)(uVar12 + 1)) {
                puVar6 = puVar16;
              }
              fVar31 = (float)*(undefined8 *)((int)puVar16 + (uVar12 & 0xffff) * 4) *
                       (fVar1 - (fVar27 - (float)(int)uVar12)) +
                       (fVar27 - (float)(int)uVar12) * (float)*puVar6;
            }
            puVar6 = (undefined8 *)((int)puVar7 + 4);
            puVar16 = puVar16 + 0xaf0;
            fVar27 = (fVar1 - *(float *)(param_1 + 0x30dac)) * fVar31 +
                     *(float *)(param_1 + 0x30dac) * (float)puVar7[8];
            puVar7[8] = (ulonglong)(uint)fVar27;
            *pfVar9 = fVar27;
            fVar26 = fVar26 + fVar27;
            puVar7 = puVar6;
            pfVar9 = pfVar9 + 1;
            fVar27 = afStack_c0[0];
            fVar31 = afStack_c0[1];
            fVar25 = afStack_c0[2];
            fVar22 = afStack_c0[3];
            fVar20 = fStack_b0;
            fVar19 = fStack_ac;
            fVar18 = fStack_a8;
            fVar24 = fStack_a4;
          } while (puVar6 != (undefined8 *)(param_1 + 0x30c88));
        }
        iVar15 = param_1 + uVar11 * 4;
        *(ulonglong *)(iVar15 + 0x5064) =
             (ulonglong)
             (uint)(fVar23 * fVar5 + (-(fVar26 * fVar2) + fVar27) * *(float *)(param_1 + 0x30c88));
        *(float *)(iVar15 + 0xa7e4) =
             -(fVar23 * fVar5) + (-(fVar26 * fVar2) + fVar31) * *(float *)(param_1 + 0x30c8c);
        *(float *)(iVar15 + 0xff64) =
             fVar23 * fVar5 + (-(fVar26 * fVar2) + fVar25) * *(float *)(param_1 + 0x30c90);
        *(float *)(iVar15 + 0x156e4) =
             -(fVar23 * fVar5) + (-(fVar26 * fVar2) + fVar22) * *(float *)(param_1 + 0x30c94);
        *(float *)(iVar15 + 0x1ae64) =
             fVar23 * fVar5 + (-(fVar26 * fVar2) + fVar20) * *(float *)(param_1 + 0x30c98);
        *(float *)(iVar15 + 0x205e4) =
             -(fVar23 * fVar5) + (-(fVar26 * fVar2) + fVar19) * *(float *)(param_1 + 0x30c9c);
        *(float *)(iVar15 + 0x25d64) =
             fVar23 * fVar5 + (-(fVar26 * fVar2) + fVar18) * *(float *)(param_1 + 0x30ca0);
        *(float *)(iVar15 + 0x2b4e4) =
             -(fVar23 * fVar5) + (-(fVar26 * fVar2) + fVar24) * *(float *)(param_1 + 0x30ca4);
        fVar23 = *(float *)(param_1 + 0x30db4);
        if ((uVar11 + 1 & 0xffff) < uVar14) {
          *(short *)(param_1 + 0x30c66) = (short)((uVar11 + 1) * 0x10000 >> 0x10);
        }
        else {
          *(undefined2 *)(param_1 + 0x30c66) = 0;
        }
        param_2 = param_2 + 1;
        *param_3 = (((((((fVar27 + fVar31) - fVar25) - fVar22) + fVar20 + fVar19) - fVar18) - fVar24
                    ) * fVar4 + fVar32) * fVar23;
        *param_4 = ((((((((fVar27 - fVar31) + fVar25) - fVar22) - fVar20) + fVar19) - fVar18) +
                    fVar24) * fVar4 + fVar32) * fVar23;
        param_4 = param_4 + 1;
        param_3 = param_3 + 1;
      } while (param_2 != pfVar17);
    }
    return;
  }
  return;
}

