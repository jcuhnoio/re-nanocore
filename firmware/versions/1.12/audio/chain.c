/* NanoCore 1.12 analysis module: audio/chain.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4005e044.
 * REA evidence: ev_f37a576475c22c9fd635a3889eb353dd8d38f9a12f980a6270ba9fb3d3ee3b9b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_dsp_process_chain(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                     undefined8 *param_5,uint param_6,char *param_7,byte *param_8,int *param_9)

{
  byte bVar1;
  undefined1 uVar2;
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
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  int iVar27;
  float *pfVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  float *pfVar36;
  undefined8 *puVar37;
  int iVar38;
  int iVar39;
  char cVar40;
  int iVar41;
  uint uVar42;
  byte bVar43;
  byte bVar44;
  code *pcVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  byte bStack_c1;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  
  fVar22 = DAT_ram_4009f110;
  fVar21 = DAT_ram_4009f10c;
  fVar20 = DAT_ram_4009a63c;
  fVar19 = DAT_ram_4009a564;
  fVar18 = DAT_ram_40099f64;
  fVar17 = DAT_ram_40099f50;
  fVar16 = DAT_ram_4009675c;
  fVar15 = DAT_ram_40096748;
  fVar14 = DAT_ram_4009672c;
  uVar42 = (uint)*(byte *)(param_1 + 0x860);
  iVar38 = uVar42 * 0x308;
  bVar43 = *(byte *)(param_1 + 0x862);
  iVar39 = param_6 * 4;
  uVar25 = 0;
LAB_ram_4005e0f8:
  do {
    if ((((param_8 != (byte *)0x0) && (pfVar36 = *(float **)(param_8 + 4), pfVar36 != (float *)0x0))
        && (iVar30 = *(int *)(param_8 + 8), iVar30 != 0)) && ((uint)*param_8 == (uVar25 & 0xff))) {
      if (param_6 != 0) {
        if (bVar43 == 0) {
          puVar34 = param_2;
          do {
            uVar52 = *puVar34;
            puVar34 = (undefined8 *)((int)puVar34 + 4);
            *pfVar36 = (float)uVar52;
            pfVar36 = pfVar36 + 1;
          } while ((undefined8 *)(iVar39 + (int)param_2) != puVar34);
        }
        else {
          if (param_3 != (undefined8 *)0x0) {
            puVar34 = param_3;
            puVar35 = param_2;
            do {
              uVar53 = *puVar34;
              uVar52 = *puVar35;
              puVar35 = (undefined8 *)((int)puVar35 + 4);
              puVar34 = (undefined8 *)((int)puVar34 + 4);
              *pfVar36 = ((float)uVar53 + (float)uVar52) * fVar16;
              pfVar36 = pfVar36 + 1;
            } while (puVar35 != (undefined8 *)(iVar39 + (int)param_2));
            FUN_ram_4000303c(param_2,iVar30,iVar39);
            bVar43 = 0;
            goto LAB_ram_4005e114;
          }
          puVar34 = param_2;
          do {
            uVar52 = *puVar34;
            puVar34 = (undefined8 *)((int)puVar34 + 4);
            *pfVar36 = (float)uVar52;
            pfVar36 = pfVar36 + 1;
          } while ((undefined8 *)(iVar39 + (int)param_2) != puVar34);
        }
      }
      FUN_ram_4000303c(param_2,iVar30,iVar39);
      bVar43 = 0;
    }
LAB_ram_4005e114:
    if (uVar25 == 10) {
      if (param_9 != (int *)0x0) {
        *param_9 = (int)param_2;
        param_9[1] = (uint)param_3 & -(uint)(bVar43 != 0);
        *(byte *)(param_9 + 2) = bVar43;
      }
      return;
    }
    uVar24 = (uint)*(byte *)(param_1 + iVar38 + uVar25);
    puVar34 = param_2;
    puVar35 = param_5;
    if (uVar24 < 10) {
      if ((((*(ushort *)(param_1 + uVar42 * 0x308 + 0x304) >> (uVar24 & 0x1f) & 1) != 0) ||
          (iVar30 = uVar42 * 0x308 + uVar24 * 0x4c + param_1, *(char *)(iVar30 + 0x11) == '\0')) ||
         (iVar30 = *(int *)(iVar30 + 0xc), 10 < iVar30 - 1U)) {
        *(undefined1 *)(uVar24 + param_1 + 0x82c) = 0;
        uVar25 = uVar25 + 1;
        goto LAB_ram_4005e0f8;
      }
      pcVar45 = *(code **)(&DAT_ram_4009f168 + iVar30 * 8);
      if (pcVar45 == (code *)0x0) goto LAB_ram_4005e2c4;
      bVar1 = (&DAT_ram_4009f16c)[iVar30 * 8];
      bVar44 = bVar1 & 1;
      puVar33 = param_2;
      if (bVar43 == 0) {
        if ((*(char *)(param_1 + 0x861) != '\0') &&
           ((((bVar1 & 2) != 0 ||
             ((iVar30 == 10 &&
              (*(char *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x10) == '\x01')))) &&
            (param_3 != (undefined8 *)0x0)))) {
          FUN_ram_4000303c(param_3,param_2,iVar39);
          puVar37 = param_3;
          if ((bVar1 & 1) == 0) {
            puVar33 = param_4;
            puVar37 = param_5;
            bVar44 = 1;
          }
          goto LAB_ram_4005e36a;
        }
        if ((bVar1 & 1) != 0) {
          puVar37 = (undefined8 *)0x0;
          bVar44 = bVar43;
          goto LAB_ram_4005e36a;
        }
        bVar44 = 0;
        puVar37 = (undefined8 *)0x0;
        puVar33 = param_4;
        if (*(char *)(param_1 + uVar24 + 0x82c) != '\0') goto LAB_ram_4005e37e;
LAB_ram_4005e1c8:
        iVar27 = param_1 + uVar24;
        pfVar36 = &fStack_c0;
        iVar31 = iVar38 + 0x14 + uVar24 * 0x4c + param_1;
        FUN_ram_4000303c(uVar24 * 0x30 + 0x610 + param_1,iVar31,0x30);
        iVar30 = uVar24 * 0x4c + uVar42 * 0x308 + param_1;
        iVar23 = *(int *)(iVar30 + 0xc);
        iVar41 = param_1 + uVar24 * 4;
        *(int *)(iVar41 + 0x7f0) = iVar23;
        cVar40 = *(char *)(iVar30 + 0x10);
        *(char *)(iVar27 + 0x818) = cVar40;
        uVar2 = *(undefined1 *)(iVar30 + 0x11);
        *(undefined1 *)(iVar27 + 0x82c) = 1;
        *(undefined1 *)(iVar27 + 0x822) = uVar2;
        *(undefined4 *)(iVar41 + 0x838) = *(undefined4 *)(iVar30 + 0x54);
        FUN_ram_4000303c(&fStack_c0,iVar31,0x30);
      }
      else {
        puVar37 = param_5;
        if ((bVar1 & 1) != 0) {
          puVar37 = param_3;
        }
        puVar33 = param_4;
        bVar44 = bVar43;
        if ((bVar1 & 1) != 0) {
          puVar33 = param_2;
        }
LAB_ram_4005e36a:
        if (*(char *)(param_1 + uVar24 + 0x82c) == '\0') goto LAB_ram_4005e1c8;
LAB_ram_4005e37e:
        iVar30 = param_1 + uVar24;
        iVar27 = param_1 + uVar24 * 4;
        iVar31 = uVar24 * 0x4c + uVar42 * 0x308 + param_1;
        iVar23 = *(int *)(iVar31 + 0xc);
        if ((*(int *)(iVar27 + 0x7f0) != iVar23) ||
           (cVar40 = *(char *)(iVar31 + 0x10), *(char *)(iVar30 + 0x818) != cVar40))
        goto LAB_ram_4005e1c8;
        if ((*(char *)(iVar30 + 0x822) == *(char *)(iVar31 + 0x11)) &&
           (*(int *)(iVar27 + 0x838) == *(int *)(iVar31 + 0x54))) {
          pfVar36 = (float *)(iVar38 + 0x14 + uVar24 * 0x4c + param_1);
        }
        else {
          iVar31 = uVar24 * 0x4c + uVar42 * 0x308 + param_1;
          if (*(char *)(iVar30 + 0x822) != *(char *)(iVar31 + 0x11)) goto LAB_ram_4005e1c8;
          if (*(int *)(iVar27 + 0x838) == *(int *)(iVar31 + 0x54)) {
            pfVar36 = (float *)(param_1 + uVar24 * 0x4c + iVar38 + 0x14);
          }
          else {
            if (param_6 == _DAT_ram_30080fac) {
              fVar49 = (float)_DAT_ram_30080fa8;
              fVar51 = *(float *)(gp + -0x24);
              fVar50 = DAT_ram_40096748;
            }
            else {
              fVar49 = (float)FUN_ram_40000bd8(-(float)param_6 / fVar21);
              fVar49 = fVar14 - fVar49;
              if (fVar49 < 0.0) {
                fVar49 = 0.0;
              }
              else if (fVar14 < fVar49) {
                fVar49 = fVar14;
              }
              fVar50 = (float)param_6 / fVar22;
              fVar51 = fVar15;
              if ((fVar15 <= fVar50) && (fVar51 = fVar50, fVar14 < fVar50)) {
                fVar51 = fVar14;
              }
              _DAT_ram_30080fa8 = CONCAT44(param_6,fVar49);
              *(float *)(gp + -0x24) = fVar51;
              iVar23 = *(int *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0xc);
              fVar50 = fVar15;
            }
            if ((iVar23 == 1) ||
               ((iVar23 == 8 && (*(byte *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x10) < 8))))
            {
              iVar30 = uVar24 * 2;
              iVar31 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar31 + 0x614);
              iVar23 = uVar42 * 0x308 + uVar24 * 0x4c + param_1;
              fStack_c0 = (float)*(undefined8 *)(iVar23 + 0x14);
              *(float *)(iVar31 + 0x610) = fStack_c0;
              fVar47 = (float)*(undefined8 *)(iVar23 + 0x18);
              fVar48 = fVar47 - fVar46;
              fStack_bc = fVar47;
              if (fVar50 < ABS(fVar48)) {
                fVar48 = fVar49 * fVar48;
                fStack_bc = fVar51;
                if ((fVar48 <= fVar51) && (fStack_bc = fVar48, fVar48 < -fVar51)) {
                  fStack_bc = -fVar51;
                }
                fStack_bc = fVar46 + fStack_bc;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar23 + 0x618);
              *(float *)(iVar23 + 0x614) = fStack_bc;
              fVar48 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x1c);
              fVar3 = fVar48 - fVar46;
              fStack_b8 = fVar48;
              if (fVar50 < ABS(fVar3)) {
                fVar3 = fVar49 * fVar3;
                fStack_b8 = fVar51;
                if ((fVar3 <= fVar51) && (fStack_b8 = fVar3, fVar3 < -fVar51)) {
                  fStack_b8 = -fVar51;
                }
                fStack_b8 = fVar46 + fStack_b8;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar23 + 0x61c);
              *(float *)(iVar23 + 0x618) = fStack_b8;
              fVar3 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x20);
              fVar4 = fVar3 - fVar46;
              fStack_b4 = fVar3;
              if (fVar50 < ABS(fVar4)) {
                fVar4 = fVar49 * fVar4;
                fStack_b4 = fVar51;
                if ((fVar4 <= fVar51) && (fStack_b4 = fVar4, fVar4 < -fVar51)) {
                  fStack_b4 = -fVar51;
                }
                fStack_b4 = fVar46 + fStack_b4;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar23 + 0x620);
              *(float *)(iVar23 + 0x61c) = fStack_b4;
              fVar4 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x24);
              fVar5 = fVar4 - fVar46;
              fStack_b0 = fVar4;
              if (fVar50 < ABS(fVar5)) {
                fVar5 = fVar49 * fVar5;
                fStack_b0 = fVar51;
                if ((fVar5 <= fVar51) && (fStack_b0 = fVar5, fVar5 < -fVar51)) {
                  fStack_b0 = -fVar51;
                }
                fStack_b0 = fVar46 + fStack_b0;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar23 + 0x624);
              *(float *)(iVar23 + 0x620) = fStack_b0;
              fVar5 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x28);
              fVar6 = fVar5 - fVar46;
              fStack_ac = fVar5;
              if (fVar50 < ABS(fVar6)) {
                fVar6 = fVar49 * fVar6;
                fStack_ac = fVar51;
                if ((fVar6 <= fVar51) && (fStack_ac = fVar6, fVar6 < -fVar51)) {
                  fStack_ac = -fVar51;
                }
                fStack_ac = fVar46 + fStack_ac;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar23 + 0x628);
              *(float *)(iVar23 + 0x624) = fStack_ac;
              fVar6 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x2c);
              fVar7 = fVar6 - fVar46;
              fStack_a8 = fVar6;
              if (fVar50 < ABS(fVar7)) {
                fVar7 = fVar49 * fVar7;
                fStack_a8 = fVar51;
                if ((fVar7 <= fVar51) && (fStack_a8 = fVar7, fVar7 < -fVar51)) {
                  fStack_a8 = -fVar51;
                }
                fStack_a8 = fVar46 + fStack_a8;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar23 + 0x62c);
              *(float *)(iVar23 + 0x628) = fStack_a8;
              fVar7 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x30);
              fVar8 = fVar7 - fVar46;
              fStack_a4 = fVar7;
              if (fVar50 < ABS(fVar8)) {
                fVar8 = fVar49 * fVar8;
                fStack_a4 = fVar51;
                if ((fVar8 <= fVar51) && (fStack_a4 = fVar8, fVar8 < -fVar51)) {
                  fStack_a4 = -fVar51;
                }
                fStack_a4 = fVar46 + fStack_a4;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar23 + 0x630);
              *(float *)(iVar23 + 0x62c) = fStack_a4;
              fVar8 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x34);
              fVar9 = fVar8 - fVar46;
              fStack_a0 = fVar8;
              if (fVar50 < ABS(fVar9)) {
                fVar9 = fVar49 * fVar9;
                fStack_a0 = fVar51;
                if ((fVar9 <= fVar51) && (fStack_a0 = fVar9, fVar9 < -fVar51)) {
                  fStack_a0 = -fVar51;
                }
                fStack_a0 = fVar46 + fStack_a0;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar23 + 0x634);
              *(float *)(iVar23 + 0x630) = fStack_a0;
              fVar9 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x38);
              fVar10 = fVar9 - fVar46;
              fStack_9c = fVar9;
              if (fVar50 < ABS(fVar10)) {
                fVar10 = fVar49 * fVar10;
                fStack_9c = fVar51;
                if ((fVar10 <= fVar51) && (fStack_9c = fVar10, fVar10 < -fVar51)) {
                  fStack_9c = -fVar51;
                }
                fStack_9c = fVar46 + fStack_9c;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar23 + 0x638);
              *(float *)(iVar23 + 0x634) = fStack_9c;
              fVar10 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x3c);
              fVar11 = fVar10 - fVar46;
              fStack_98 = fVar10;
              if (fVar50 < ABS(fVar11)) {
                fVar11 = fVar49 * fVar11;
                fStack_98 = fVar51;
                if ((fVar11 <= fVar51) && (fStack_98 = fVar11, fVar11 < -fVar51)) {
                  fStack_98 = -fVar51;
                }
                fStack_98 = fVar46 + fStack_98;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar23 + 0x63c);
              *(float *)(iVar23 + 0x638) = fStack_98;
              bVar13 = ((((((((fVar47 == fStack_bc && fVar48 == fStack_b8) && fVar3 == fStack_b4) &&
                            fVar4 == fStack_b0) && fVar5 == fStack_ac) && fVar6 == fStack_a8) &&
                         fVar7 == fStack_a4) && fVar8 == fStack_a0) && fVar9 == fStack_9c) &&
                       fVar10 == fStack_98;
              fVar48 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x40);
              fStack_94 = fVar48;
              if (fVar50 < ABS(fVar48 - fVar46)) {
                fVar49 = (fVar48 - fVar46) * fVar49;
                if ((fVar49 <= fVar51) && (fVar51 = -fVar51, fVar51 <= fVar49))
                goto LAB_ram_4005efd6;
                goto LAB_ram_4005e918;
              }
            }
            else {
              iVar30 = uVar24 * 2;
              fVar46 = *(float *)(uVar24 * 0x30 + param_1 + 0x610);
              fVar47 = (float)*(undefined8 *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x14);
              fVar48 = fVar47 - fVar46;
              fStack_c0 = fVar47;
              if (fVar50 < ABS(fVar48)) {
                fVar48 = fVar48 * fVar49;
                fStack_c0 = fVar51;
                if ((fVar48 <= fVar51) && (fStack_c0 = -fVar51, -fVar51 <= fVar48)) {
                  fStack_c0 = fVar48;
                }
                fStack_c0 = fStack_c0 + fVar46;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              *(float *)(iVar23 + 0x610) = fStack_c0;
              fVar46 = *(float *)(iVar23 + 0x614);
              fVar48 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x18);
              fVar3 = fVar48 - fVar46;
              fStack_bc = fVar48;
              if (fVar50 < ABS(fVar3)) {
                fVar3 = fVar3 * fVar49;
                fStack_bc = fVar51;
                if ((fVar3 <= fVar51) && (fStack_bc = -fVar51, -fVar51 <= fVar3)) {
                  fStack_bc = fVar3;
                }
                fStack_bc = fVar46 + fStack_bc;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar23 + 0x618);
              *(float *)(iVar23 + 0x614) = fStack_bc;
              fVar3 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x1c);
              fVar4 = fVar3 - fVar46;
              fStack_b8 = fVar3;
              if (fVar50 < ABS(fVar4)) {
                fVar4 = fVar4 * fVar49;
                fStack_b8 = fVar51;
                if ((fVar4 <= fVar51) && (fStack_b8 = -fVar51, -fVar51 <= fVar4)) {
                  fStack_b8 = fVar4;
                }
                fStack_b8 = fVar46 + fStack_b8;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar23 + 0x61c);
              *(float *)(iVar23 + 0x618) = fStack_b8;
              fVar4 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x20);
              fVar5 = fVar4 - fVar46;
              fStack_b4 = fVar4;
              if (fVar50 < ABS(fVar5)) {
                fVar5 = fVar49 * fVar5;
                fStack_b4 = fVar51;
                if ((fVar5 <= fVar51) && (fStack_b4 = -fVar51, -fVar51 <= fVar5)) {
                  fStack_b4 = fVar5;
                }
                fStack_b4 = fVar46 + fStack_b4;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar23 + 0x620);
              *(float *)(iVar23 + 0x61c) = fStack_b4;
              fVar5 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x24);
              fVar6 = fVar5 - fVar46;
              fStack_b0 = fVar5;
              if (fVar50 < ABS(fVar6)) {
                fVar6 = fVar49 * fVar6;
                fStack_b0 = fVar51;
                if ((fVar6 <= fVar51) && (fStack_b0 = -fVar51, -fVar51 <= fVar6)) {
                  fStack_b0 = fVar6;
                }
                fStack_b0 = fVar46 + fStack_b0;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar23 + 0x624);
              *(float *)(iVar23 + 0x620) = fStack_b0;
              fVar6 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x28);
              fVar7 = fVar6 - fVar46;
              fStack_ac = fVar6;
              if (fVar50 < ABS(fVar7)) {
                fVar7 = fVar49 * fVar7;
                fStack_ac = fVar51;
                if ((fVar7 <= fVar51) && (fStack_ac = -fVar51, -fVar51 <= fVar7)) {
                  fStack_ac = fVar7;
                }
                fStack_ac = fVar46 + fStack_ac;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar23 + 0x628);
              *(float *)(iVar23 + 0x624) = fStack_ac;
              fVar7 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x2c);
              fVar8 = fVar7 - fVar46;
              fStack_a8 = fVar7;
              if (fVar50 < ABS(fVar8)) {
                fVar8 = fVar49 * fVar8;
                fStack_a8 = fVar51;
                if ((fVar8 <= fVar51) && (fStack_a8 = -fVar51, -fVar51 <= fVar8)) {
                  fStack_a8 = fVar8;
                }
                fStack_a8 = fVar46 + fStack_a8;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar23 + 0x62c);
              *(float *)(iVar23 + 0x628) = fStack_a8;
              fVar8 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x30);
              fVar9 = fVar8 - fVar46;
              fStack_a4 = fVar8;
              if (fVar50 < ABS(fVar9)) {
                fVar9 = fVar49 * fVar9;
                fStack_a4 = fVar51;
                if ((fVar9 <= fVar51) && (fStack_a4 = -fVar51, -fVar51 <= fVar9)) {
                  fStack_a4 = fVar9;
                }
                fStack_a4 = fVar46 + fStack_a4;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar23 + 0x630);
              *(float *)(iVar23 + 0x62c) = fStack_a4;
              fVar9 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x34);
              fVar10 = fVar9 - fVar46;
              fStack_a0 = fVar9;
              if (fVar50 < ABS(fVar10)) {
                fVar10 = fVar49 * fVar10;
                fStack_a0 = fVar51;
                if ((fVar10 <= fVar51) && (fStack_a0 = -fVar51, -fVar51 <= fVar10)) {
                  fStack_a0 = fVar10;
                }
                fStack_a0 = fVar46 + fStack_a0;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar23 + 0x634);
              *(float *)(iVar23 + 0x630) = fStack_a0;
              fVar10 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x38);
              fVar11 = fVar10 - fVar46;
              fStack_9c = fVar10;
              if (fVar50 < ABS(fVar11)) {
                fVar11 = fVar49 * fVar11;
                fStack_9c = fVar51;
                if ((fVar11 <= fVar51) && (fStack_9c = -fVar51, -fVar51 <= fVar11)) {
                  fStack_9c = fVar11;
                }
                fStack_9c = fVar46 + fStack_9c;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar23 + 0x638);
              *(float *)(iVar23 + 0x634) = fStack_9c;
              fVar11 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x3c);
              fVar12 = fVar11 - fVar46;
              fStack_98 = fVar11;
              if (fVar50 < ABS(fVar12)) {
                fVar12 = fVar49 * fVar12;
                fStack_98 = fVar51;
                if ((fVar12 <= fVar51) && (fStack_98 = -fVar51, -fVar51 <= fVar12)) {
                  fStack_98 = fVar12;
                }
                fStack_98 = fVar46 + fStack_98;
              }
              iVar23 = uVar24 * 0x30 + param_1;
              fVar46 = *(float *)(iVar23 + 0x63c);
              *(float *)(iVar23 + 0x638) = fStack_98;
              bVar13 = (((((((((fStack_c0 == fVar47 && fVar48 == fStack_bc) && fVar3 == fStack_b8)
                             && fVar4 == fStack_b4) && fVar5 == fStack_b0) && fVar6 == fStack_ac) &&
                          fVar7 == fStack_a8) && fVar8 == fStack_a4) && fVar9 == fStack_a0) &&
                       fVar10 == fStack_9c) && fVar11 == fStack_98;
              fVar48 = *(float *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x40);
              fStack_94 = fVar48;
              if (fVar50 < ABS(fVar48 - fVar46)) {
                fVar49 = (fVar48 - fVar46) * fVar49;
                if ((fVar49 <= fVar51) && (fVar51 = -fVar51, fVar51 <= fVar49)) {
LAB_ram_4005efd6:
                  fVar51 = fVar49;
                  iVar30 = uVar24 << 1;
                }
LAB_ram_4005e918:
                fStack_94 = fVar46 + fVar51;
              }
            }
            *(float *)((iVar30 + uVar24) * 0x10 + param_1 + 0x63c) = fStack_94;
            if ((fVar48 == fStack_94) && (bVar13)) {
              pfVar36 = &fStack_c0;
              iVar30 = uVar42 * 0x308 + uVar24 * 0x4c + param_1;
              *(undefined4 *)(iVar27 + 0x838) = *(undefined4 *)(iVar30 + 0x54);
              iVar23 = *(int *)(iVar30 + 0xc);
              cVar40 = *(char *)(iVar30 + 0x10);
            }
            else {
              pfVar36 = &fStack_c0;
              iVar30 = uVar42 * 0x308 + uVar24 * 0x4c + param_1;
              iVar23 = *(int *)(iVar30 + 0xc);
              cVar40 = *(char *)(iVar30 + 0x10);
            }
          }
        }
      }
      if (iVar23 - 4U < 2) {
        iVar30 = uVar42 * 0x308 + uVar24 * 0x4c + param_1;
        if (iVar23 == 4) {
          uVar29 = FUN_ram_40070e4c(cVar40);
          if (uVar29 < 0xc) {
            iVar23 = *(int *)(iVar30 + 0xc);
            cVar40 = *(char *)(iVar30 + 0x10);
            if (*(char *)(uVar29 + iVar30 + 0x44) == '\0') goto LAB_ram_4005eb2a;
            if (iVar23 == 5) {
              if ((cVar40 != '\a') || (*(char *)(iVar30 + 0x47) == '\0')) goto joined_r0x4005e9f2;
              goto LAB_ram_4005eb50;
            }
            pfVar28 = &fStack_c0;
            if (pfVar36 != pfVar28) goto LAB_ram_4005e9f6;
            goto LAB_ram_4005ea20;
          }
          iVar23 = *(int *)(iVar30 + 0xc);
          cVar40 = *(char *)(iVar30 + 0x10);
LAB_ram_4005eb2a:
          if (((iVar23 == 5) && (cVar40 == '\a')) &&
             (*(char *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x47) != '\0'))
          goto LAB_ram_4005eb50;
        }
        else {
          if ((cVar40 == '\a') && (*(char *)(iVar30 + 0x47) != '\0')) {
LAB_ram_4005eb50:
            cVar40 = '\a';
          }
          else if (*(char *)(iVar30 + 0x44) == '\0') goto LAB_ram_4005e270;
joined_r0x4005e9f2:
          iVar23 = 5;
          pfVar28 = &fStack_c0;
          if (pfVar36 != pfVar28) {
LAB_ram_4005e9f6:
            pfVar28 = (float *)FUN_ram_4000303c(&fStack_c0,pfVar36,0x30);
LAB_ram_4005ea20:
            if (1 < iVar23 - 4U) goto LAB_ram_4005e270;
          }
          if (((param_7 != (char *)0x0) && (*param_7 != '\0')) &&
             ((fVar49 = (float)*(undefined8 *)(param_7 + 4), fVar17 <= fVar49 && (fVar49 <= fVar18))
             )) {
            if (iVar23 == 5) {
              iVar30 = uVar42 * 0x308 + uVar24 * 0x4c + param_1;
              uVar29 = *(byte *)(iVar30 + 0x44) - 1 & 0xff;
              if ((10 < uVar29) || ((float)*(undefined8 *)(&DAT_ram_4009f13c + uVar29 * 4) <= 0.0))
              {
                if (cVar40 == '\a') {
                  iVar30 = uVar42 * 0x308 + uVar24 * 0x4c + param_1;
                  uVar29 = *(byte *)(iVar30 + 0x47) - 1 & 0xff;
                  if (uVar29 < 0xb) {
                    fVar50 = (float)*(undefined8 *)(&DAT_ram_4009f13c + uVar29 * 4);
                    if (0.0 < fVar50) goto LAB_ram_4005f0d6;
                    cVar40 = *(char *)(iVar30 + 0x10);
                  }
                }
              }
              else {
                fStack_c0 = (float)FUN_ram_40065832(((float)*(undefined8 *)
                                                             (&DAT_ram_4009f13c + uVar29 * 4) *
                                                    fVar20) / fVar49,cVar40);
                cVar40 = *(char *)(iVar30 + 0x10);
                pfVar36 = pfVar28;
                if (((cVar40 == '\a') &&
                    (uVar29 = *(byte *)(iVar30 + 0x47) - 1 & 0xff, uVar29 < 0xb)) &&
                   (fVar50 = (float)*(undefined8 *)(&DAT_ram_4009f13c + uVar29 * 4), 0.0 < fVar50))
                {
                  fVar49 = (float)*(undefined8 *)(param_7 + 4);
LAB_ram_4005f0d6:
                  fStack_b4 = (float)FUN_ram_400658b8(fVar49 / (fVar50 * fVar19));
                  cVar40 = *(char *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x10);
                  pfVar36 = pfVar28;
                }
              }
            }
            else {
              uVar29 = FUN_ram_40070e4c(cVar40);
              if (uVar29 < 0xc) {
                iVar30 = uVar42 * 0x308 + uVar24 * 0x4c + param_1;
                cVar40 = *(char *)(iVar30 + 0x10);
                uVar32 = *(byte *)(iVar30 + uVar29 + 0x44) - 1 & 0xff;
                if ((uVar32 < 0xb) && (0.0 < (float)*(undefined8 *)(&DAT_ram_4009f13c + uVar32 * 4))
                   ) {
                  fVar49 = (float)FUN_ram_40070eb8((float)*(undefined8 *)(param_7 + 4) /
                                                   ((float)*(undefined8 *)
                                                            (&DAT_ram_4009f13c + uVar32 * 4) *
                                                   fVar19),cVar40);
                  cVar40 = *(char *)(iVar30 + 0x10);
                  pfVar28[uVar29] = fVar49;
                  pfVar36 = pfVar28;
                }
              }
              else {
                cVar40 = *(char *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x10);
              }
            }
          }
        }
      }
LAB_ram_4005e270:
      uVar26 = *(undefined4 *)(uVar42 * 0x308 + uVar24 * 0x4c + param_1 + 0x50);
      bStack_c1 = bVar44;
      if (bVar44 == 0) {
        (*pcVar45)(uVar26,param_2,0,puVar33,puVar37,param_6,pfVar36,cVar40,0,&bStack_c1);
        bVar43 = bStack_c1;
      }
      else {
        (*pcVar45)(uVar26,param_2,param_3,puVar33,puVar37,param_6,pfVar36,cVar40,bVar44,&bStack_c1);
        bVar43 = 1;
        if (1 < bStack_c1) {
          bVar43 = bStack_c1;
        }
      }
      if (param_2 != puVar33) {
        puVar34 = param_4;
        param_4 = param_2;
        puVar35 = param_3;
        param_3 = param_5;
      }
    }
LAB_ram_4005e2c4:
    uVar25 = uVar25 + 1;
    param_2 = puVar34;
    param_5 = puVar35;
  } while( true );
}


/* NanoCore 1.12, address 0x4005fa8e.
 * REA evidence: ev_ad4160a4be1e3d89104c298c71e46da014b3085e1d220b8e631418ef4d77800f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int nc_dsp_inactive_bank(int param_1)

{
  if (param_1 != 0) {
    return param_1 + (*(byte *)(param_1 + 0x860) ^ 1) * 0x308;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4005faaa.
 * REA evidence: ev_a9854f40ef093c8f82a2ecc4714b93252e9a8aa0c6012ce67a511052ea392096
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int nc_dsp_active_bank(int param_1)

{
  if (param_1 != 0) {
    return param_1 + (uint)*(byte *)(param_1 + 0x860) * 0x308;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4005fac2.
 * REA evidence: ev_6b17ac636d16a0adc77473a2a0dd60949d86f7c59e1539a7b7e9dd558b40cec9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void nc_dsp_publish_bank(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 != 0) {
    uVar6 = (uint)*(byte *)(param_1 + 0x860);
    uVar1 = uVar6 ^ 1;
    iVar8 = uVar6 * 0x308;
    uVar5 = 1;
    iVar7 = uVar1 * 0x308;
    iVar4 = param_1 + iVar8;
    iVar3 = param_1 + iVar7;
    if ((*(int *)(iVar3 + 0xc) == *(int *)(iVar4 + 0xc)) &&
       ((*(uint *)(iVar3 + 0x10) & 0xffff) == (*(uint *)(iVar4 + 0x10) & 0xffff))) {
      if (*(int *)(iVar3 + 0x50) == *(int *)(iVar4 + 0x50)) {
        iVar3 = FUN_ram_40002fdc(iVar8 + 0x14 + param_1,iVar7 + 0x14 + param_1,0x30);
        uVar5 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x308;
    uVar2 = 1;
    iVar4 = param_1 + uVar1 * 0x308;
    *(uint *)(iVar4 + 0x54) = *(int *)(iVar3 + 0x54) + uVar5;
    if ((*(int *)(iVar3 + 0x58) == *(int *)(iVar4 + 0x58)) &&
       ((*(uint *)(iVar3 + 0x5c) & 0xffff) == (*(uint *)(iVar4 + 0x5c) & 0xffff))) {
      if (*(int *)(iVar3 + 0x9c) == *(int *)(iVar4 + 0x9c)) {
        iVar3 = FUN_ram_40002fdc(iVar8 + 0x60 + param_1,iVar7 + 0x60 + param_1,0x30);
        uVar2 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x308;
    uVar5 = 1;
    iVar4 = param_1 + uVar1 * 0x308;
    *(uint *)(iVar4 + 0xa0) = *(int *)(iVar3 + 0xa0) + uVar2;
    if ((*(int *)(iVar3 + 0xa4) == *(int *)(iVar4 + 0xa4)) &&
       ((*(uint *)(iVar3 + 0xa8) & 0xffff) == (*(uint *)(iVar4 + 0xa8) & 0xffff))) {
      if (*(int *)(iVar3 + 0xe8) == *(int *)(iVar4 + 0xe8)) {
        iVar3 = FUN_ram_40002fdc(iVar8 + 0xac + param_1,iVar7 + 0xac + param_1,0x30);
        uVar5 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x308;
    uVar2 = 1;
    iVar4 = param_1 + uVar1 * 0x308;
    *(uint *)(iVar4 + 0xec) = *(int *)(iVar3 + 0xec) + uVar5;
    if ((*(int *)(iVar3 + 0xf0) == *(int *)(iVar4 + 0xf0)) &&
       ((*(uint *)(iVar3 + 0xf4) & 0xffff) == (*(uint *)(iVar4 + 0xf4) & 0xffff))) {
      if (*(int *)(iVar3 + 0x134) == *(int *)(iVar4 + 0x134)) {
        iVar3 = FUN_ram_40002fdc(iVar8 + 0xf8 + param_1,iVar7 + 0xf8 + param_1,0x30);
        uVar2 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x308;
    uVar5 = 1;
    iVar4 = param_1 + uVar1 * 0x308;
    *(uint *)(iVar4 + 0x138) = *(int *)(iVar3 + 0x138) + uVar2;
    if ((*(int *)(iVar3 + 0x13c) == *(int *)(iVar4 + 0x13c)) &&
       ((*(uint *)(iVar3 + 0x140) & 0xffff) == (*(uint *)(iVar4 + 0x140) & 0xffff))) {
      if (*(int *)(iVar3 + 0x180) == *(int *)(iVar4 + 0x180)) {
        iVar3 = FUN_ram_40002fdc(iVar8 + 0x144 + param_1,iVar7 + 0x144 + param_1,0x30);
        uVar5 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x308;
    uVar2 = 1;
    iVar4 = param_1 + uVar1 * 0x308;
    *(uint *)(iVar4 + 0x184) = *(int *)(iVar3 + 0x184) + uVar5;
    if ((*(int *)(iVar3 + 0x188) == *(int *)(iVar4 + 0x188)) &&
       ((*(uint *)(iVar3 + 0x18c) & 0xffff) == (*(uint *)(iVar4 + 0x18c) & 0xffff))) {
      if (*(int *)(iVar3 + 0x1cc) == *(int *)(iVar4 + 0x1cc)) {
        iVar3 = FUN_ram_40002fdc(iVar8 + 400 + param_1,iVar7 + 400 + param_1,0x30);
        uVar2 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x308;
    uVar5 = 1;
    iVar4 = param_1 + uVar1 * 0x308;
    *(uint *)(iVar4 + 0x1d0) = *(int *)(iVar3 + 0x1d0) + uVar2;
    if ((*(int *)(iVar3 + 0x1d4) == *(int *)(iVar4 + 0x1d4)) &&
       ((*(uint *)(iVar3 + 0x1d8) & 0xffff) == (*(uint *)(iVar4 + 0x1d8) & 0xffff))) {
      if (*(int *)(iVar3 + 0x218) == *(int *)(iVar4 + 0x218)) {
        iVar3 = FUN_ram_40002fdc(iVar8 + 0x1dc + param_1,iVar7 + 0x1dc + param_1,0x30);
        uVar5 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x308;
    uVar2 = 1;
    iVar4 = param_1 + uVar1 * 0x308;
    *(uint *)(iVar4 + 0x21c) = *(int *)(iVar3 + 0x21c) + uVar5;
    if ((*(int *)(iVar3 + 0x220) == *(int *)(iVar4 + 0x220)) &&
       ((*(uint *)(iVar3 + 0x224) & 0xffff) == (*(uint *)(iVar4 + 0x224) & 0xffff))) {
      if (*(int *)(iVar3 + 0x264) == *(int *)(iVar4 + 0x264)) {
        iVar3 = FUN_ram_40002fdc(iVar8 + 0x228 + param_1,iVar7 + 0x228 + param_1,0x30);
        uVar2 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x308;
    uVar5 = 1;
    iVar4 = param_1 + uVar1 * 0x308;
    *(uint *)(iVar4 + 0x268) = *(int *)(iVar3 + 0x268) + uVar2;
    if ((*(int *)(iVar3 + 0x26c) == *(int *)(iVar4 + 0x26c)) &&
       ((*(uint *)(iVar3 + 0x270) & 0xffff) == (*(uint *)(iVar4 + 0x270) & 0xffff))) {
      if (*(int *)(iVar3 + 0x2b0) == *(int *)(iVar4 + 0x2b0)) {
        iVar3 = FUN_ram_40002fdc(iVar8 + 0x274 + param_1,iVar7 + 0x274 + param_1,0x30);
        uVar5 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x308;
    uVar2 = 1;
    iVar4 = param_1 + uVar1 * 0x308;
    *(uint *)(iVar4 + 0x2b4) = *(int *)(iVar3 + 0x2b4) + uVar5;
    if ((*(int *)(iVar3 + 0x2b8) == *(int *)(iVar4 + 0x2b8)) &&
       ((*(uint *)(iVar3 + 700) & 0xffff) == (*(uint *)(iVar4 + 700) & 0xffff))) {
      if (*(int *)(iVar3 + 0x2fc) == *(int *)(iVar4 + 0x2fc)) {
        iVar3 = FUN_ram_40002fdc(iVar8 + 0x2c0 + param_1,iVar7 + 0x2c0 + param_1,0x30);
        uVar2 = (uint)(iVar3 != 0);
      }
    }
    *(uint *)(param_1 + uVar1 * 0x308 + 0x300) = *(int *)(param_1 + uVar6 * 0x308 + 0x300) + uVar2;
    *(char *)(param_1 + 0x860) = (char)uVar1;
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4005feca.
 * REA evidence: ev_f3791a0a87a71a3e80880607356d575acc517c306316aa22c4c6e28d69a410c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void nc_dsp_node_configure(int param_1,uint param_2,undefined4 param_3,undefined1 param_4,
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


/* NanoCore 1.12, address 0x4005ff2c.
 * REA evidence: ev_440965c6dfaef894f4b3cbea1b6180f36d0cdff24f7a9c17c178c172f6b9d82d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void nc_dsp_process_chain_checked(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                     int param_6)

{
  if ((((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) && (param_6 != 0)) {
    nc_dsp_process_chain();
    return;
  }
  return;
}


