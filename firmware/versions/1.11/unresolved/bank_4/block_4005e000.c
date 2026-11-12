/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4005e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4005e298.
 * REA evidence: ev_57166d8d8328638ec9b05c64c6daae63ffefec69fecc1f6e4cc0502bd2fcbc22
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4005e298(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
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
  byte bVar24;
  uint uVar25;
  uint uVar26;
  byte *pbVar27;
  undefined4 uVar28;
  float *pfVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  int iVar36;
  float *pfVar37;
  undefined8 *puVar38;
  int iVar39;
  uint uVar40;
  char cVar41;
  int iVar42;
  undefined8 *puVar43;
  uint uVar44;
  code *pcVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
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
  
  fVar22 = DAT_ram_40099ff0;
  fVar21 = DAT_ram_40099fec;
  fVar20 = _DAT_ram_40095590;
  fVar19 = DAT_ram_400954c0;
  fVar18 = DAT_ram_40094ebc;
  fVar17 = DAT_ram_40094ea8;
  fVar16 = DAT_ram_40094634;
  fVar15 = DAT_ram_40094620;
  fVar14 = DAT_ram_40094604;
  uVar44 = (uint)*(byte *)(param_1 + 0x858);
  iVar39 = uVar44 * 0x304;
  pbVar27 = (byte *)(param_1 + iVar39);
  iVar36 = param_6 * 4;
  uVar40 = (uint)pbVar27 & 0xff;
  bVar24 = 0;
LAB_ram_4005e35c:
  do {
    if ((((param_8 != (byte *)0x0) && (pfVar37 = *(float **)(param_8 + 4), pfVar37 != (float *)0x0))
        && (iVar31 = *(int *)(param_8 + 8), iVar31 != 0)) &&
       ((uint)*param_8 == ((int)pbVar27 - uVar40 & 0xff))) {
      if (param_6 == 0) {
LAB_ram_4005e522:
        FUN_ram_4000304c(param_2,iVar31,iVar36);
      }
      else {
        if (bVar24 == 0) {
          puVar34 = param_2;
          do {
            uVar50 = *puVar34;
            puVar34 = (undefined8 *)((int)puVar34 + 4);
            *pfVar37 = (float)uVar50;
            pfVar37 = pfVar37 + 1;
          } while ((undefined8 *)(iVar36 + (int)param_2) != puVar34);
          goto LAB_ram_4005e522;
        }
        if (param_3 == (undefined8 *)0x0) {
          puVar34 = param_2;
          do {
            uVar50 = *puVar34;
            puVar34 = (undefined8 *)((int)puVar34 + 4);
            *pfVar37 = (float)uVar50;
            pfVar37 = pfVar37 + 1;
          } while ((undefined8 *)(iVar36 + (int)param_2) != puVar34);
          goto LAB_ram_4005e522;
        }
        puVar34 = param_3;
        puVar35 = param_2;
        do {
          uVar53 = *puVar34;
          uVar50 = *puVar35;
          puVar35 = (undefined8 *)((int)puVar35 + 4);
          puVar34 = (undefined8 *)((int)puVar34 + 4);
          *pfVar37 = ((float)uVar53 + (float)uVar50) * fVar16;
          pfVar37 = pfVar37 + 1;
        } while (puVar35 != (undefined8 *)(iVar36 + (int)param_2));
        FUN_ram_4000304c(param_2,iVar31,iVar36);
      }
      bVar24 = 0;
    }
    if (pbVar27 == (byte *)(param_1 + 10 + iVar39)) {
      if (param_9 != (int *)0x0) {
        *param_9 = (int)param_2;
        param_9[1] = (uint)param_3 & -(uint)(bVar24 != 0);
        *(byte *)(param_9 + 2) = bVar24;
      }
      return;
    }
    uVar26 = (uint)*pbVar27;
    puVar34 = param_4;
    puVar35 = param_5;
    if (9 < uVar26) {
LAB_ram_4005e4fe:
      pbVar27 = pbVar27 + 1;
      param_4 = puVar34;
      param_5 = puVar35;
      goto LAB_ram_4005e35c;
    }
    iVar31 = uVar44 * 0x304 + uVar26 * 0x4c + param_1;
    if ((*(char *)(iVar31 + 0x11) != '\0') && (iVar33 = *(int *)(iVar31 + 0xc), iVar33 - 1U < 0xb))
    {
      pcVar45 = *(code **)(&DAT_ram_4009a048 + iVar33 * 8);
      if (pcVar45 == (code *)0x0) goto LAB_ram_4005e4fe;
      bVar1 = (&DAT_ram_4009a04c)[iVar33 * 8];
      puVar43 = param_4;
      if (bVar24 == 0) {
        if ((*(char *)(param_1 + 0x859) != '\0') &&
           ((((bVar1 & 2) != 0 || ((iVar33 == 10 && (*(char *)(iVar31 + 0x10) == '\x01')))) &&
            (param_3 != (undefined8 *)0x0)))) {
          bVar24 = bVar1 & 1;
          FUN_ram_4000304c(param_3,param_2,iVar36);
          puVar38 = param_3;
          puVar43 = param_2;
          if ((bVar1 & 1) == 0) {
            bVar24 = 1;
            puVar38 = param_5;
            puVar43 = param_4;
          }
          goto LAB_ram_4005e5b2;
        }
        if ((bVar1 & 1) != 0) {
          puVar38 = (undefined8 *)0x0;
          puVar43 = param_2;
          goto LAB_ram_4005e5b2;
        }
        bVar24 = 0;
        puVar38 = (undefined8 *)0x0;
        if (*(char *)(param_1 + uVar26 + 0x824) != '\0') goto LAB_ram_4005e5c6;
LAB_ram_4005e408:
        iVar31 = param_1 + uVar26;
        pfVar37 = &fStack_c0;
        iVar32 = iVar39 + 0x14 + uVar26 * 0x4c + param_1;
        FUN_ram_4000304c(uVar26 * 0x30 + 0x608 + param_1,iVar32,0x30);
        iVar42 = param_1 + uVar26 * 4;
        iVar23 = param_1 + uVar26 * 0x4c + uVar44 * 0x304;
        iVar33 = *(int *)(iVar23 + 0xc);
        *(int *)(iVar42 + 0x7e8) = iVar33;
        cVar41 = *(char *)(iVar23 + 0x10);
        *(char *)(iVar31 + 0x810) = cVar41;
        uVar2 = *(undefined1 *)(iVar23 + 0x11);
        *(undefined1 *)(iVar31 + 0x824) = 1;
        *(undefined1 *)(iVar31 + 0x81a) = uVar2;
        *(undefined4 *)(iVar42 + 0x830) = *(undefined4 *)(iVar23 + 0x54);
        FUN_ram_4000304c(&fStack_c0,iVar32,0x30);
      }
      else {
        puVar38 = param_5;
        if ((bVar1 & 1) != 0) {
          puVar38 = param_3;
        }
        if ((bVar1 & 1) != 0) {
          puVar43 = param_2;
        }
LAB_ram_4005e5b2:
        if (*(char *)(param_1 + uVar26 + 0x824) == '\0') goto LAB_ram_4005e408;
LAB_ram_4005e5c6:
        iVar31 = param_1 + uVar26;
        iVar23 = param_1 + uVar26 * 4;
        iVar32 = uVar26 * 0x4c + uVar44 * 0x304 + param_1;
        iVar33 = *(int *)(iVar32 + 0xc);
        if ((*(int *)(iVar23 + 0x7e8) != iVar33) ||
           (cVar41 = *(char *)(iVar32 + 0x10), *(char *)(iVar31 + 0x810) != cVar41))
        goto LAB_ram_4005e408;
        if ((*(char *)(iVar31 + 0x81a) == *(char *)(iVar32 + 0x11)) &&
           (*(int *)(iVar23 + 0x830) == *(int *)(iVar32 + 0x54))) {
          pfVar37 = (float *)(iVar39 + 0x14 + uVar26 * 0x4c + param_1);
        }
        else {
          iVar32 = uVar26 * 0x4c + uVar44 * 0x304 + param_1;
          if (*(char *)(iVar31 + 0x81a) != *(char *)(iVar32 + 0x11)) goto LAB_ram_4005e408;
          if (*(int *)(iVar23 + 0x830) == *(int *)(iVar32 + 0x54)) {
            pfVar37 = (float *)(param_1 + uVar26 * 0x4c + iVar39 + 0x14);
          }
          else {
            if (param_6 == _DAT_ram_30080f2c) {
              fVar49 = (float)_DAT_ram_30080f28;
              fVar52 = *(float *)(gp + -0x24);
              fVar51 = DAT_ram_40094620;
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
              fVar51 = (float)param_6 / fVar22;
              fVar52 = fVar15;
              if ((fVar15 <= fVar51) && (fVar52 = fVar51, fVar14 < fVar51)) {
                fVar52 = fVar14;
              }
              _DAT_ram_30080f28 = CONCAT44(param_6,fVar49);
              *(float *)(gp + -0x24) = fVar52;
              iVar33 = *(int *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0xc);
              fVar51 = fVar15;
            }
            if ((iVar33 == 1) ||
               ((iVar33 == 8 && (*(byte *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x10) < 8))))
            {
              iVar31 = uVar26 * 2;
              iVar32 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar32 + 0x60c);
              iVar33 = uVar44 * 0x304 + uVar26 * 0x4c + param_1;
              fStack_c0 = (float)*(undefined8 *)(iVar33 + 0x14);
              *(float *)(iVar32 + 0x608) = fStack_c0;
              fVar47 = (float)*(undefined8 *)(iVar33 + 0x18);
              fVar48 = fVar47 - fVar46;
              fStack_bc = fVar47;
              if (fVar51 < ABS(fVar48)) {
                fVar48 = fVar49 * fVar48;
                fStack_bc = fVar52;
                if ((fVar48 <= fVar52) && (fStack_bc = fVar48, fVar48 < -fVar52)) {
                  fStack_bc = -fVar52;
                }
                fStack_bc = fVar46 + fStack_bc;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar33 + 0x610);
              *(float *)(iVar33 + 0x60c) = fStack_bc;
              fVar48 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x1c);
              fVar3 = fVar48 - fVar46;
              fStack_b8 = fVar48;
              if (fVar51 < ABS(fVar3)) {
                fVar3 = fVar49 * fVar3;
                fStack_b8 = fVar52;
                if ((fVar3 <= fVar52) && (fStack_b8 = fVar3, fVar3 < -fVar52)) {
                  fStack_b8 = -fVar52;
                }
                fStack_b8 = fVar46 + fStack_b8;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar33 + 0x614);
              *(float *)(iVar33 + 0x610) = fStack_b8;
              fVar3 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x20);
              fVar4 = fVar3 - fVar46;
              fStack_b4 = fVar3;
              if (fVar51 < ABS(fVar4)) {
                fVar4 = fVar49 * fVar4;
                fStack_b4 = fVar52;
                if ((fVar4 <= fVar52) && (fStack_b4 = fVar4, fVar4 < -fVar52)) {
                  fStack_b4 = -fVar52;
                }
                fStack_b4 = fVar46 + fStack_b4;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar33 + 0x618);
              *(float *)(iVar33 + 0x614) = fStack_b4;
              fVar4 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x24);
              fVar5 = fVar4 - fVar46;
              fStack_b0 = fVar4;
              if (fVar51 < ABS(fVar5)) {
                fVar5 = fVar49 * fVar5;
                fStack_b0 = fVar52;
                if ((fVar5 <= fVar52) && (fStack_b0 = fVar5, fVar5 < -fVar52)) {
                  fStack_b0 = -fVar52;
                }
                fStack_b0 = fVar46 + fStack_b0;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar33 + 0x61c);
              *(float *)(iVar33 + 0x618) = fStack_b0;
              fVar5 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x28);
              fVar6 = fVar5 - fVar46;
              fStack_ac = fVar5;
              if (fVar51 < ABS(fVar6)) {
                fVar6 = fVar49 * fVar6;
                fStack_ac = fVar52;
                if ((fVar6 <= fVar52) && (fStack_ac = fVar6, fVar6 < -fVar52)) {
                  fStack_ac = -fVar52;
                }
                fStack_ac = fVar46 + fStack_ac;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar33 + 0x620);
              *(float *)(iVar33 + 0x61c) = fStack_ac;
              fVar6 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x2c);
              fVar7 = fVar6 - fVar46;
              fStack_a8 = fVar6;
              if (fVar51 < ABS(fVar7)) {
                fVar7 = fVar49 * fVar7;
                fStack_a8 = fVar52;
                if ((fVar7 <= fVar52) && (fStack_a8 = fVar7, fVar7 < -fVar52)) {
                  fStack_a8 = -fVar52;
                }
                fStack_a8 = fVar46 + fStack_a8;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar33 + 0x624);
              *(float *)(iVar33 + 0x620) = fStack_a8;
              fVar7 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x30);
              fVar8 = fVar7 - fVar46;
              fStack_a4 = fVar7;
              if (fVar51 < ABS(fVar8)) {
                fVar8 = fVar49 * fVar8;
                fStack_a4 = fVar52;
                if ((fVar8 <= fVar52) && (fStack_a4 = fVar8, fVar8 < -fVar52)) {
                  fStack_a4 = -fVar52;
                }
                fStack_a4 = fVar46 + fStack_a4;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar33 + 0x628);
              *(float *)(iVar33 + 0x624) = fStack_a4;
              fVar8 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x34);
              fVar9 = fVar8 - fVar46;
              fStack_a0 = fVar8;
              if (fVar51 < ABS(fVar9)) {
                fVar9 = fVar49 * fVar9;
                fStack_a0 = fVar52;
                if ((fVar9 <= fVar52) && (fStack_a0 = fVar9, fVar9 < -fVar52)) {
                  fStack_a0 = -fVar52;
                }
                fStack_a0 = fVar46 + fStack_a0;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar33 + 0x62c);
              *(float *)(iVar33 + 0x628) = fStack_a0;
              fVar9 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x38);
              fVar10 = fVar9 - fVar46;
              fStack_9c = fVar9;
              if (fVar51 < ABS(fVar10)) {
                fVar10 = fVar49 * fVar10;
                fStack_9c = fVar52;
                if ((fVar10 <= fVar52) && (fStack_9c = fVar10, fVar10 < -fVar52)) {
                  fStack_9c = -fVar52;
                }
                fStack_9c = fVar46 + fStack_9c;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar33 + 0x630);
              *(float *)(iVar33 + 0x62c) = fStack_9c;
              fVar10 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x3c);
              fVar11 = fVar10 - fVar46;
              fStack_98 = fVar10;
              if (fVar51 < ABS(fVar11)) {
                fVar11 = fVar49 * fVar11;
                fStack_98 = fVar52;
                if ((fVar11 <= fVar52) && (fStack_98 = fVar11, fVar11 < -fVar52)) {
                  fStack_98 = -fVar52;
                }
                fStack_98 = fVar46 + fStack_98;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar33 + 0x634);
              *(float *)(iVar33 + 0x630) = fStack_98;
              bVar13 = ((((((((fVar47 == fStack_bc && fVar48 == fStack_b8) && fVar3 == fStack_b4) &&
                            fVar4 == fStack_b0) && fVar5 == fStack_ac) && fVar6 == fStack_a8) &&
                         fVar7 == fStack_a4) && fVar8 == fStack_a0) && fVar9 == fStack_9c) &&
                       fVar10 == fStack_98;
              fVar48 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x40);
              fStack_94 = fVar48;
              if (fVar51 < ABS(fVar48 - fVar46)) {
                fVar49 = (fVar48 - fVar46) * fVar49;
                if ((fVar49 <= fVar52) && (fVar52 = -fVar52, fVar52 <= fVar49))
                goto LAB_ram_4005f232;
                goto LAB_ram_4005eb60;
              }
            }
            else {
              iVar31 = uVar26 * 2;
              fVar46 = *(float *)(uVar26 * 0x30 + param_1 + 0x608);
              fVar47 = (float)*(undefined8 *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x14);
              fVar48 = fVar47 - fVar46;
              fStack_c0 = fVar47;
              if (fVar51 < ABS(fVar48)) {
                fVar48 = fVar48 * fVar49;
                fStack_c0 = fVar52;
                if ((fVar48 <= fVar52) && (fStack_c0 = -fVar52, -fVar52 <= fVar48)) {
                  fStack_c0 = fVar48;
                }
                fStack_c0 = fVar46 + fStack_c0;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              *(float *)(iVar33 + 0x608) = fStack_c0;
              fVar46 = *(float *)(iVar33 + 0x60c);
              fVar48 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x18);
              fVar3 = fVar48 - fVar46;
              fStack_bc = fVar48;
              if (fVar51 < ABS(fVar3)) {
                fVar3 = fVar3 * fVar49;
                fStack_bc = fVar52;
                if ((fVar3 <= fVar52) && (fStack_bc = -fVar52, -fVar52 <= fVar3)) {
                  fStack_bc = fVar3;
                }
                fStack_bc = fVar46 + fStack_bc;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar33 + 0x610);
              *(float *)(iVar33 + 0x60c) = fStack_bc;
              fVar3 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x1c);
              fVar4 = fVar3 - fVar46;
              fStack_b8 = fVar3;
              if (fVar51 < ABS(fVar4)) {
                fVar4 = fVar49 * fVar4;
                fStack_b8 = fVar52;
                if ((fVar4 <= fVar52) && (fStack_b8 = -fVar52, -fVar52 <= fVar4)) {
                  fStack_b8 = fVar4;
                }
                fStack_b8 = fVar46 + fStack_b8;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar33 + 0x614);
              *(float *)(iVar33 + 0x610) = fStack_b8;
              fVar4 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x20);
              fVar5 = fVar4 - fVar46;
              fStack_b4 = fVar4;
              if (fVar51 < ABS(fVar5)) {
                fVar5 = fVar49 * fVar5;
                fStack_b4 = fVar52;
                if ((fVar5 <= fVar52) && (fStack_b4 = -fVar52, -fVar52 <= fVar5)) {
                  fStack_b4 = fVar5;
                }
                fStack_b4 = fVar46 + fStack_b4;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar33 + 0x618);
              *(float *)(iVar33 + 0x614) = fStack_b4;
              fVar5 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x24);
              fVar6 = fVar5 - fVar46;
              fStack_b0 = fVar5;
              if (fVar51 < ABS(fVar6)) {
                fVar6 = fVar49 * fVar6;
                fStack_b0 = fVar52;
                if ((fVar6 <= fVar52) && (fStack_b0 = -fVar52, -fVar52 <= fVar6)) {
                  fStack_b0 = fVar6;
                }
                fStack_b0 = fVar46 + fStack_b0;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar33 + 0x61c);
              *(float *)(iVar33 + 0x618) = fStack_b0;
              fVar6 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x28);
              fVar7 = fVar6 - fVar46;
              fStack_ac = fVar6;
              if (fVar51 < ABS(fVar7)) {
                fVar7 = fVar49 * fVar7;
                fStack_ac = fVar52;
                if ((fVar7 <= fVar52) && (fStack_ac = -fVar52, -fVar52 <= fVar7)) {
                  fStack_ac = fVar7;
                }
                fStack_ac = fVar46 + fStack_ac;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar33 + 0x620);
              *(float *)(iVar33 + 0x61c) = fStack_ac;
              fVar7 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x2c);
              fVar8 = fVar7 - fVar46;
              fStack_a8 = fVar7;
              if (fVar51 < ABS(fVar8)) {
                fVar8 = fVar49 * fVar8;
                fStack_a8 = fVar52;
                if ((fVar8 <= fVar52) && (fStack_a8 = -fVar52, -fVar52 <= fVar8)) {
                  fStack_a8 = fVar8;
                }
                fStack_a8 = fVar46 + fStack_a8;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar33 + 0x624);
              *(float *)(iVar33 + 0x620) = fStack_a8;
              fVar8 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x30);
              fVar9 = fVar8 - fVar46;
              fStack_a4 = fVar8;
              if (fVar51 < ABS(fVar9)) {
                fVar9 = fVar49 * fVar9;
                fStack_a4 = fVar52;
                if ((fVar9 <= fVar52) && (fStack_a4 = -fVar52, -fVar52 <= fVar9)) {
                  fStack_a4 = fVar9;
                }
                fStack_a4 = fVar46 + fStack_a4;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar33 + 0x628);
              *(float *)(iVar33 + 0x624) = fStack_a4;
              fVar9 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x34);
              fVar10 = fVar9 - fVar46;
              fStack_a0 = fVar9;
              if (fVar51 < ABS(fVar10)) {
                fVar10 = fVar49 * fVar10;
                fStack_a0 = fVar52;
                if ((fVar10 <= fVar52) && (fStack_a0 = -fVar52, -fVar52 <= fVar10)) {
                  fStack_a0 = fVar10;
                }
                fStack_a0 = fVar46 + fStack_a0;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar33 + 0x62c);
              *(float *)(iVar33 + 0x628) = fStack_a0;
              fVar10 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x38);
              fVar11 = fVar10 - fVar46;
              fStack_9c = fVar10;
              if (fVar51 < ABS(fVar11)) {
                fVar11 = fVar49 * fVar11;
                fStack_9c = fVar52;
                if ((fVar11 <= fVar52) && (fStack_9c = -fVar52, -fVar52 <= fVar11)) {
                  fStack_9c = fVar11;
                }
                fStack_9c = fVar46 + fStack_9c;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar33 + 0x630);
              *(float *)(iVar33 + 0x62c) = fStack_9c;
              fVar11 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x3c);
              fVar12 = fVar11 - fVar46;
              fStack_98 = fVar11;
              if (fVar51 < ABS(fVar12)) {
                fVar12 = fVar49 * fVar12;
                fStack_98 = fVar52;
                if ((fVar12 <= fVar52) && (fStack_98 = -fVar52, -fVar52 <= fVar12)) {
                  fStack_98 = fVar12;
                }
                fStack_98 = fVar46 + fStack_98;
              }
              iVar33 = uVar26 * 0x30 + param_1;
              fVar46 = *(float *)(iVar33 + 0x634);
              *(float *)(iVar33 + 0x630) = fStack_98;
              bVar13 = (((((((((fVar47 == fStack_c0 && fStack_bc == fVar48) && fVar3 == fStack_b8)
                             && fVar4 == fStack_b4) && fVar5 == fStack_b0) && fVar6 == fStack_ac) &&
                          fVar7 == fStack_a8) && fVar8 == fStack_a4) && fVar9 == fStack_a0) &&
                       fVar10 == fStack_9c) && fVar11 == fStack_98;
              fVar48 = *(float *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x40);
              fStack_94 = fVar48;
              if (fVar51 < ABS(fVar48 - fVar46)) {
                fVar49 = (fVar48 - fVar46) * fVar49;
                if ((fVar49 <= fVar52) && (fVar52 = -fVar52, fVar52 <= fVar49)) {
LAB_ram_4005f232:
                  fVar52 = fVar49;
                  iVar31 = uVar26 << 1;
                }
LAB_ram_4005eb60:
                fStack_94 = fVar46 + fVar52;
              }
            }
            *(float *)((iVar31 + uVar26) * 0x10 + param_1 + 0x634) = fStack_94;
            if ((fVar48 == fStack_94) && (bVar13)) {
              pfVar37 = &fStack_c0;
              iVar31 = uVar44 * 0x304 + uVar26 * 0x4c + param_1;
              *(undefined4 *)(iVar23 + 0x830) = *(undefined4 *)(iVar31 + 0x54);
              iVar33 = *(int *)(iVar31 + 0xc);
              cVar41 = *(char *)(iVar31 + 0x10);
            }
            else {
              pfVar37 = &fStack_c0;
              iVar31 = uVar44 * 0x304 + uVar26 * 0x4c + param_1;
              iVar33 = *(int *)(iVar31 + 0xc);
              cVar41 = *(char *)(iVar31 + 0x10);
            }
          }
        }
      }
      if (iVar33 - 4U < 2) {
        iVar31 = uVar44 * 0x304 + uVar26 * 0x4c + param_1;
        if (iVar33 == 4) {
          uVar30 = FUN_ram_40070cb4(cVar41);
          if (uVar30 < 0xc) {
            iVar33 = *(int *)(iVar31 + 0xc);
            cVar41 = *(char *)(iVar31 + 0x10);
            if (*(char *)(uVar30 + iVar31 + 0x44) == '\0') goto LAB_ram_4005edb6;
            if (iVar33 == 5) {
              if ((cVar41 != '\a') || (*(char *)(iVar31 + 0x47) == '\0')) goto joined_r0x4005ede4;
              goto LAB_ram_4005eddc;
            }
            pfVar29 = &fStack_c0;
            if (pfVar37 != pfVar29) goto LAB_ram_4005ec22;
            goto LAB_ram_4005ec48;
          }
          iVar33 = *(int *)(iVar31 + 0xc);
          cVar41 = *(char *)(iVar31 + 0x10);
LAB_ram_4005edb6:
          if (((iVar33 == 5) && (cVar41 == '\a')) &&
             (*(char *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x47) != '\0'))
          goto LAB_ram_4005eddc;
        }
        else {
          if ((cVar41 == '\a') && (*(char *)(iVar31 + 0x47) != '\0')) {
LAB_ram_4005eddc:
            cVar41 = '\a';
          }
          else if (*(char *)(iVar31 + 0x44) == '\0') goto LAB_ram_4005e4ac;
joined_r0x4005ede4:
          iVar33 = 5;
          pfVar29 = &fStack_c0;
          if (pfVar37 != pfVar29) {
LAB_ram_4005ec22:
            pfVar29 = (float *)FUN_ram_4000304c(&fStack_c0,pfVar37,0x30);
LAB_ram_4005ec48:
            if (1 < iVar33 - 4U) goto LAB_ram_4005e4ac;
          }
          if (((param_7 != (char *)0x0) && (*param_7 != '\0')) &&
             ((fVar49 = (float)*(undefined8 *)(param_7 + 4), fVar17 <= fVar49 && (fVar49 <= fVar18))
             )) {
            if (iVar33 == 5) {
              iVar31 = uVar44 * 0x304 + uVar26 * 0x4c + param_1;
              uVar30 = *(byte *)(iVar31 + 0x44) - 1 & 0xff;
              if ((10 < uVar30) || ((float)*(undefined8 *)(&DAT_ram_4009a01c + uVar30 * 4) <= 0.0))
              {
                if ((cVar41 == '\a') &&
                   ((uVar30 = *(byte *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x47) - 1 & 0xff,
                    uVar30 < 0xb &&
                    (fVar51 = (float)*(undefined8 *)(&DAT_ram_4009a01c + uVar30 * 4), 0.0 < fVar51))
                   )) goto LAB_ram_4005f2b8;
              }
              else {
                fStack_c0 = (float)FUN_ram_40065848(((float)*(undefined8 *)
                                                             (&DAT_ram_4009a01c + uVar30 * 4) *
                                                    fVar20) / fVar49,cVar41);
                cVar41 = *(char *)(iVar31 + 0x10);
                pfVar37 = pfVar29;
                if ((cVar41 == '\a') &&
                   ((uVar30 = *(byte *)(iVar31 + 0x47) - 1 & 0xff, uVar30 < 0xb &&
                    (fVar51 = (float)*(undefined8 *)(&DAT_ram_4009a01c + uVar30 * 4), 0.0 < fVar51))
                   )) {
                  fVar49 = (float)*(undefined8 *)(param_7 + 4);
LAB_ram_4005f2b8:
                  fStack_b4 = (float)FUN_ram_400658ce(fVar49 / (fVar51 * fVar19));
                  cVar41 = *(char *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x10);
                  pfVar37 = pfVar29;
                }
              }
            }
            else {
              uVar30 = FUN_ram_40070cb4(cVar41);
              if (uVar30 < 0xc) {
                iVar31 = uVar44 * 0x304 + uVar26 * 0x4c + param_1;
                cVar41 = *(char *)(iVar31 + 0x10);
                uVar25 = *(byte *)(iVar31 + uVar30 + 0x44) - 1 & 0xff;
                if ((uVar25 < 0xb) && (0.0 < *(float *)(&DAT_ram_4009a01c + uVar25 * 4))) {
                  uVar50 = FUN_ram_40070d20((float)*(undefined8 *)(param_7 + 4) /
                                            (*(float *)(&DAT_ram_4009a01c + uVar25 * 4) * fVar19),
                                            cVar41);
                  cVar41 = *(char *)(iVar31 + 0x10);
                  *(undefined8 *)(pfVar29 + uVar30) = uVar50;
                  pfVar37 = pfVar29;
                }
              }
              else {
                cVar41 = *(char *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x10);
              }
            }
          }
        }
      }
LAB_ram_4005e4ac:
      uVar28 = *(undefined4 *)(uVar44 * 0x304 + uVar26 * 0x4c + param_1 + 0x50);
      bStack_c1 = bVar24;
      if (bVar24 == 0) {
        (*pcVar45)(uVar28,param_2,0,puVar43,puVar38,param_6,pfVar37,cVar41,0,&bStack_c1);
        bVar24 = bStack_c1;
      }
      else {
        (*pcVar45)(uVar28,param_2,param_3,puVar43,puVar38,param_6,pfVar37,cVar41,bVar24,&bStack_c1);
        bVar24 = 1;
        if (1 < bStack_c1) {
          bVar24 = bStack_c1;
        }
      }
      if (param_2 != puVar43) {
        puVar34 = param_2;
        puVar35 = param_3;
        param_2 = param_4;
        param_3 = param_5;
      }
      goto LAB_ram_4005e4fe;
    }
    *(undefined1 *)(uVar26 + param_1 + 0x824) = 0;
    pbVar27 = pbVar27 + 1;
  } while( true );
}


