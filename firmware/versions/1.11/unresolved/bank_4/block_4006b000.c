/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4006b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4006b144.
 * REA evidence: ev_62ba4f5d99ecfbc5a8276dec8693b53367e4978cd90ce99ae46d995747ab09c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4006c26c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4006b144(int *param_1,float *param_2,int param_3,float *param_4,int param_5,
                     uint param_6,float *param_7,uint param_8,char param_9,int param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_register_00000100;
  uint uVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  float *pfVar12;
  float *pfVar13;
  undefined8 *puVar14;
  ulonglong *puVar15;
  float *pfVar16;
  uint uVar17;
  int iVar18;
  float *pfVar19;
  int iVar20;
  uint uVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined *puVar37;
  float fVar38;
  undefined *puVar39;
  undefined8 uVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar43;
  undefined *puVar44;
  undefined *puVar45;
  float fVar46;
  float fVar47;
  float local_2b0;
  undefined *puStack_2ac;
  float afStack_2a0 [64];
  undefined8 local_1a0 [32];
  
  if (param_2 == (float *)0x0) {
    return;
  }
  if (param_4 == (float *)0x0) {
    return;
  }
  if (param_6 == 0) {
    return;
  }
  if (param_10 != 0) {
    *(bool *)param_10 = param_9 != '\0';
  }
  if (((param_1 == (int *)0x0) || ((char *)param_1[1] == (char *)0x0)) ||
     (*(char *)param_1[1] == '\0')) {
LAB_ram_4006b280:
    if (param_2 != param_4) {
      FUN_ram_4000304c(param_4,param_2,param_6 << 2);
    }
    if ((((param_9 != '\0') && (param_3 != 0)) && (param_5 != 0)) && (param_3 != param_5)) {
      FUN_ram_4000304c(param_5,param_3,param_6 << 2);
      return;
    }
    return;
  }
  *(char *)(param_1 + 0x21e) = (char)param_8;
  fVar36 = DAT_ram_4009a478;
  puVar44 = DAT_ram_4009a470;
  puVar28 = DAT_ram_4009a46c;
  puVar45 = DAT_ram_4009a468;
  fVar23 = DAT_ram_4009527c;
  puVar29 = DAT_ram_40094ec4;
  puVar39 = _DAT_ram_40094638;
  puVar37 = DAT_ram_40094604;
  if (param_8 < 8) {
    if (*param_1 != 0) {
      FUN_ram_40073eec();
      return;
    }
    goto LAB_ram_4006b280;
  }
  if (param_8 == 0xb) {
    FUN_ram_40071b8c(param_1 + 0x217);
    return;
  }
  if (param_8 != 9) {
    if (param_8 != 10) {
      if (param_8 != 8) goto LAB_ram_4006b280;
      iVar18 = param_1[0x1f0];
      puVar28 = DAT_ram_40094604;
      if (param_7 == (float *)0x0) {
        if (iVar18 == 0) {
          puVar39 = (undefined *)0x0;
          goto LAB_ram_4006b432;
        }
        fVar36 = 0.0;
        puVar39 = (undefined *)0x0;
        puVar44 = DAT_ram_40094634;
        goto LAB_ram_4006c0ce;
      }
      puVar28 = (undefined *)param_7[2];
      if ((float)puVar28 < 0.0) {
        puVar28 = (undefined *)0x0;
        puVar39 = DAT_ram_40094604;
      }
      else if ((float)DAT_ram_40094604 < (float)puVar28) {
        puVar28 = DAT_ram_40094604;
        puVar39 = (undefined *)0x0;
      }
      else {
        puVar39 = (undefined *)((float)DAT_ram_40094604 - (float)puVar28);
      }
      if (iVar18 == 0) goto LAB_ram_4006b432;
      puVar29 = (undefined *)*param_7;
      if ((float)puVar29 < 0.0) {
        puVar29 = (undefined *)0x0;
      }
      else if ((float)DAT_ram_40094604 < (float)puVar29) {
        puVar29 = DAT_ram_40094604;
      }
      puVar44 = (undefined *)param_7[1];
      fVar36 = DAT_ram_4009527c;
      if ((float)puVar44 < 0.0) {
        puVar45 = (undefined *)0x0;
LAB_ram_4006c176:
        puVar44 = puVar45;
        if ((float)puVar29 < 0.0) {
LAB_ram_4006c0ce:
          puVar29 = (undefined *)((float)puVar44 * (float)PTR_entry_ram_40094618 + DAT_ram_40094600)
          ;
LAB_ram_4006c0e2:
          if (fVar23 <= fVar36) {
            if (fVar36 <= DAT_ram_40095280) goto LAB_ram_4006c19e;
            fVar46 = (float)puVar29 + DAT_ram_40095280;
          }
          else {
            fVar46 = (float)puVar29 - DAT_ram_40095280;
          }
        }
        else {
          if ((float)puVar29 <= (float)DAT_ram_40094604) {
            fVar36 = (float)FUN_ram_40000970((float)puVar29 * DAT_ram_400952cc + DAT_ram_4009527c);
            goto LAB_ram_4006c3c2;
          }
          puVar29 = DAT_ram_40094604;
          fVar36 = DAT_ram_40095280;
          if ((float)puVar44 <= (float)DAT_ram_40094604) goto LAB_ram_4006c0ce;
LAB_ram_4006c19e:
          fVar46 = (float)puVar29 + fVar36;
        }
      }
      else {
        puVar45 = DAT_ram_40094604;
        if ((float)DAT_ram_40094604 < (float)puVar44) goto LAB_ram_4006c176;
        fVar46 = DAT_ram_4009a488;
        if ((0.0 <= (float)puVar29) &&
           (fVar46 = DAT_ram_4009a48c, fVar36 = DAT_ram_40095280,
           (float)puVar29 <= (float)DAT_ram_40094604)) {
          fVar36 = (float)FUN_ram_40000970((float)puVar29 * DAT_ram_400952cc + DAT_ram_4009527c);
LAB_ram_4006c3c2:
          puVar29 = puVar37;
          if ((float)puVar44 <= (float)puVar37) goto LAB_ram_4006c0ce;
          goto LAB_ram_4006c0e2;
        }
        if (0.0 <= (float)puVar44) goto LAB_ram_4006c3c2;
      }
      if ((param_1[0x1dd] != 0) || ((float)param_1[0x1b0] != fVar46)) {
        FUN_ram_40077030(fVar46,0,puVar37,param_1 + 2);
        iVar18 = param_1[0x1f0];
      }
LAB_ram_4006b432:
      puVar44 = DAT_ram_40094634;
      iVar20 = 0;
      uVar21 = 0;
      pfVar19 = param_4;
      pfVar22 = param_2;
      while( true ) {
        uVar9 = param_6 - uVar21;
        if (0x40 < uVar9) {
          uVar9 = 0x40;
        }
        if (param_6 != uVar21) {
          if (param_9 == '\0') {
            FUN_ram_4000304c(afStack_2a0,pfVar22,uVar9 << 2);
          }
          else if (param_3 == 0) {
            uVar17 = 0;
            pfVar12 = afStack_2a0;
            pfVar13 = pfVar22;
            do {
              uVar40 = *(undefined8 *)pfVar13;
              uVar17 = uVar17 + 1;
              pfVar13 = pfVar13 + 1;
              *pfVar12 = ((float)uVar40 + (float)uVar40) * (float)puVar44;
              pfVar12 = pfVar12 + 1;
            } while (uVar17 < uVar9);
          }
          else {
            puVar11 = (undefined8 *)(param_3 + iVar20);
            uVar17 = 0;
            pfVar12 = afStack_2a0;
            pfVar13 = pfVar22;
            do {
              uVar42 = *(undefined8 *)pfVar13;
              uVar40 = *puVar11;
              uVar17 = uVar17 + 1;
              pfVar13 = pfVar13 + 1;
              puVar11 = (undefined8 *)((int)puVar11 + 4);
              *pfVar12 = ((float)uVar42 + (float)uVar40) * (float)puVar44;
              pfVar12 = pfVar12 + 1;
            } while (uVar17 < uVar9);
          }
        }
        if (iVar18 == 0) {
          FUN_ram_4000304c(local_1a0,afStack_2a0,uVar9 << 2);
        }
        else {
          FUN_ram_40078134(param_1 + 2,afStack_2a0,local_1a0,uVar9,0);
        }
        if (param_6 != uVar21) {
          if (param_9 == '\0') {
            puVar11 = local_1a0;
            uVar17 = 0;
            pfVar12 = pfVar19;
            pfVar13 = pfVar22;
            do {
              uVar40 = *puVar11;
              uVar42 = *(undefined8 *)pfVar13;
              uVar17 = uVar17 + 1;
              pfVar13 = pfVar13 + 1;
              puVar11 = (undefined8 *)((int)puVar11 + 4);
              *pfVar12 = (float)puVar39 * (float)uVar42 + (float)puVar28 * (float)uVar40;
              pfVar12 = pfVar12 + 1;
            } while (uVar17 < uVar9);
          }
          else if (param_5 == 0) {
            puVar11 = local_1a0;
            uVar17 = 0;
            pfVar12 = pfVar19;
            pfVar13 = pfVar22;
            if (param_3 == 0) {
              do {
                uVar40 = *puVar11;
                uVar42 = *(undefined8 *)pfVar13;
                uVar17 = uVar17 + 1;
                pfVar13 = pfVar13 + 1;
                puVar11 = (undefined8 *)((int)puVar11 + 4);
                *pfVar12 = (float)puVar39 * (float)uVar42 + (float)puVar28 * (float)uVar40;
                pfVar12 = pfVar12 + 1;
              } while (uVar17 < uVar9);
            }
            else {
              do {
                uVar40 = *puVar11;
                uVar17 = uVar17 + 1;
                puVar11 = (undefined8 *)((int)puVar11 + 4);
                *pfVar12 = (float)puVar39 * (float)*(undefined8 *)pfVar13 +
                           (float)puVar28 * (float)uVar40;
                pfVar12 = pfVar12 + 1;
                pfVar13 = pfVar13 + 1;
              } while (uVar17 < uVar9);
            }
          }
          else if (param_3 == 0) {
            puVar11 = local_1a0;
            uVar17 = 0;
            pfVar12 = (float *)(param_5 + iVar20);
            pfVar13 = pfVar19;
            pfVar16 = pfVar22;
            do {
              uVar40 = *puVar11;
              uVar42 = *(undefined8 *)pfVar16;
              uVar17 = uVar17 + 1;
              pfVar16 = pfVar16 + 1;
              puVar11 = (undefined8 *)((int)puVar11 + 4);
              fVar36 = (float)puVar39 * (float)uVar42 + (float)puVar28 * (float)uVar40;
              *pfVar13 = fVar36;
              *pfVar12 = fVar36;
              pfVar12 = pfVar12 + 1;
              pfVar13 = pfVar13 + 1;
            } while (uVar17 < uVar9);
          }
          else {
            puVar11 = local_1a0;
            uVar17 = 0;
            iVar18 = iVar20;
            do {
              puVar14 = (undefined8 *)((int)param_2 + iVar18);
              fVar36 = (float)puVar28 * (float)*puVar11;
              uVar40 = *(undefined8 *)(param_3 + iVar18);
              puVar10 = (ulonglong *)((int)param_4 + iVar18);
              puVar15 = (ulonglong *)(param_5 + iVar18);
              uVar17 = uVar17 + 1;
              puVar11 = (undefined8 *)((int)puVar11 + 4);
              iVar18 = iVar18 + 4;
              *puVar10 = (ulonglong)(uint)((float)*puVar14 * (float)puVar39 + fVar36);
              *puVar15 = (ulonglong)(uint)((float)uVar40 * (float)puVar39 + fVar36);
            } while (uVar17 < uVar9);
          }
        }
        uVar21 = uVar21 + 0x40;
        pfVar22 = pfVar22 + 0x40;
        pfVar19 = pfVar19 + 0x40;
        iVar20 = iVar20 + 0x100;
        if (param_6 <= uVar21) break;
        iVar18 = param_1[0x1f0];
      }
      return;
    }
    if (param_7 == (float *)0x0) {
      fVar36 = (float)param_1[0x210];
      puStack_2ac = DAT_ram_40094634;
      puVar28 = DAT_ram_40094634;
      puVar39 = DAT_ram_4009a47c;
      puVar44 = _DAT_ram_40094638;
      puVar29 = DAT_ram_4009a468;
      if (fVar36 <= 0.0) {
        fVar23 = 0.0;
        fVar36 = in_register_00000100;
        goto LAB_ram_4006b996;
      }
      fVar23 = 0.0;
LAB_ram_4006b99e:
      fVar46 = (float)puVar39 * DAT_ram_4009463c + 0.0;
    }
    else {
      puVar28 = (undefined *)*param_7;
      if ((float)puVar28 < 0.0) {
        puVar28 = (undefined *)0x0;
      }
      else if ((float)DAT_ram_40094604 < (float)puVar28) {
        puVar28 = DAT_ram_40094604;
      }
      puStack_2ac = (undefined *)param_7[1];
      if ((float)puStack_2ac < 0.0) {
        puStack_2ac = (undefined *)0x0;
      }
      else if ((float)DAT_ram_40094604 < (float)puStack_2ac) {
        puStack_2ac = DAT_ram_40094604;
      }
      puVar39 = (undefined *)param_7[2];
      if ((float)puVar39 < 0.0) {
        puVar39 = (undefined *)0x0;
      }
      else if ((float)DAT_ram_40094604 < (float)puVar39) {
        puVar39 = DAT_ram_40094604;
      }
      fVar23 = param_7[3];
      if (fVar23 < 0.0) {
        fVar23 = 0.0;
      }
      else if ((float)DAT_ram_40094604 < fVar23) {
        fVar23 = in_register_00000100;
      }
      puVar44 = (undefined *)param_7[4];
      if ((float)puVar44 < 0.0) {
        puVar44 = (undefined *)0x0;
        puVar29 = DAT_ram_40094604;
      }
      else if ((float)DAT_ram_40094604 < (float)puVar44) {
        puVar44 = DAT_ram_40094604;
        puVar29 = (undefined *)0x0;
      }
      else {
        puVar29 = (undefined *)((float)DAT_ram_40094604 - (float)puVar44);
      }
      fVar36 = (float)param_1[0x210];
      if ((float)param_1[0x210] <= 0.0) {
        fVar36 = in_register_00000100;
      }
      fVar46 = 0.0;
      if (0.0 <= (float)puVar39) {
LAB_ram_4006b996:
        fVar46 = DAT_ram_4009463c;
        if ((float)puVar39 <= (float)DAT_ram_40094604) goto LAB_ram_4006b99e;
      }
    }
    fVar47 = (float)param_1[0x212];
    fVar27 = (float)param_1[0x211];
    if ((float)puVar28 < 0.0) {
      fVar26 = 0.0;
      fVar31 = DAT_ram_40095290;
LAB_ram_4006c01e:
      local_2b0 = fVar26 * DAT_ram_400952dc + DAT_ram_40095298;
    }
    else {
      puVar39 = DAT_ram_40094604;
      fVar31 = DAT_ram_4009529c;
      if ((float)DAT_ram_40094604 < (float)puVar28) {
LAB_ram_4006c210:
        local_2b0 = (float)puVar39 * DAT_ram_40094e80 + DAT_ram_40095294;
      }
      else {
        fVar31 = DAT_ram_4009528c;
        if ((float)puVar28 <= (float)DAT_ram_40094634) {
          fVar26 = (float)puVar28 + (float)puVar28;
          if (0.0 <= fVar26) {
            if (fVar26 <= (float)DAT_ram_40094604) {
              fVar31 = fVar26 * DAT_ram_40094658 + DAT_ram_40095290;
            }
            if (0.0 <= fVar26) {
              if (fVar26 <= (float)DAT_ram_40094604) goto LAB_ram_4006c01e;
              goto LAB_ram_4006c33e;
            }
            local_2b0 = DAT_ram_40095298;
          }
          else {
            local_2b0 = DAT_ram_40095298;
            fVar31 = DAT_ram_40095290;
          }
        }
        else {
          puVar39 = (undefined *)
                    (((float)puVar28 - (float)DAT_ram_40094634) +
                    ((float)puVar28 - (float)DAT_ram_40094634));
          if (0.0 <= (float)puVar39) {
            fVar31 = DAT_ram_4009529c;
            if ((float)puVar39 <= (float)DAT_ram_40094604) {
              fVar31 = (float)puVar39 * DAT_ram_40094658 + DAT_ram_4009528c;
            }
            if ((float)puVar39 < 0.0) {
LAB_ram_4006c33e:
              local_2b0 = DAT_ram_40095294;
            }
            else {
              if ((float)puVar39 <= (float)DAT_ram_40094604) goto LAB_ram_4006c210;
              local_2b0 = DAT_ram_400952a0;
            }
          }
          else {
            local_2b0 = DAT_ram_40095294;
          }
        }
      }
    }
    fVar26 = DAT_ram_4009a480;
    if (0.0 < fVar36) {
      fVar26 = fVar36 * DAT_ram_4009605c;
    }
    if (local_2b0 < DAT_ram_400952d4) {
      local_2b0 = DAT_ram_40094ec8;
      puVar28 = PTR_entry_ram_40094618;
      if (fVar31 < DAT_ram_40094ec8) goto LAB_ram_4006ba9a;
      local_2b0 = DAT_ram_400952d4;
      if (DAT_ram_4009a484 < fVar31) {
        local_2b0 = DAT_ram_4009a484;
        fVar26 = local_2b0;
        fVar24 = DAT_ram_400952d4;
        goto LAB_ram_4006ba7c;
      }
LAB_ram_4006ba5e:
      fVar24 = local_2b0;
      if (local_2b0 < fVar31) {
LAB_ram_4006ba68:
        fVar31 = local_2b0;
        fVar24 = local_2b0;
      }
      local_2b0 = fVar31;
      fVar31 = DAT_ram_40094620;
      fVar26 = local_2b0;
      if (DAT_ram_40094620 <= local_2b0) goto LAB_ram_4006ba7c;
    }
    else {
      if (fVar26 < local_2b0) {
        local_2b0 = fVar26;
      }
      if (DAT_ram_40094ec8 <= fVar31) {
        if (local_2b0 - (float)DAT_ram_40094604 < fVar31) {
          fVar31 = local_2b0 - (float)DAT_ram_40094604;
        }
        goto LAB_ram_4006ba5e;
      }
      fVar26 = DAT_ram_40094ec8;
      fVar24 = local_2b0;
      if (local_2b0 < DAT_ram_40094ec8) goto LAB_ram_4006ba68;
LAB_ram_4006ba7c:
      local_2b0 = fVar26;
      fVar31 = fVar24;
      if (local_2b0 <= fVar24) {
        fVar31 = local_2b0;
      }
    }
    puVar28 = (undefined *)(fVar24 / fVar31);
    if (fVar24 / fVar31 < (float)DAT_ram_40094604) {
      puVar28 = DAT_ram_40094604;
    }
LAB_ram_4006ba9a:
    fVar32 = (float)FUN_ram_40000c5e(puVar28);
    fVar43 = DAT_ram_4009a39c;
    fVar24 = DAT_ram_4009a1e8;
    fVar31 = DAT_ram_4009a1ac;
    fVar26 = DAT_ram_40099fa8;
    uVar21 = 0;
    do {
      uVar9 = param_6 - uVar21;
      if (8 < uVar9) {
        uVar9 = 8;
      }
      fVar33 = (float)FUN_ram_40000bd8(((float)(int)uVar9 * DAT_ram_4009461c * fVar43 *
                                       (float)DAT_ram_40096074) / fVar36);
      puVar28 = (undefined *)((float)puVar37 - fVar33);
      if ((float)puVar28 < 0.0) {
        puVar28 = (undefined *)0x0;
      }
      else if ((float)puVar37 < (float)puVar28) {
        puVar28 = puVar37;
      }
      if (fVar23 < 0.0) {
        fVar33 = 0.0;
        puVar39 = puVar37;
LAB_ram_4006bdd0:
        fVar35 = (float)FUN_ram_400009d2(fVar27 * DAT_ram_40099f94);
        fVar35 = fVar35 * (float)puVar39 +
                 (-(ABS(fVar27 - (float)DAT_ram_40094634) * DAT_ram_40094e88) + (float)puVar37) *
                 fVar33;
      }
      else if ((float)puVar37 < fVar23) {
        fVar35 = fVar27 * (float)PTR_entry_ram_40094618 + DAT_ram_40094600;
      }
      else {
        iVar18 = (int)(fVar23 * DAT_ram_40094614);
        fVar33 = fVar23 * DAT_ram_40094614 - (float)iVar18;
        if (iVar18 < 1) {
          puVar39 = (undefined *)((float)puVar37 - fVar33);
          goto LAB_ram_4006bdd0;
        }
        if (iVar18 == 1) {
          fVar35 = ABS(fVar27 - (float)DAT_ram_40094634) * DAT_ram_40094e88;
          fVar34 = (float)FUN_ram_400009d2(fVar27 * DAT_ram_40099f94);
          fVar34 = (float)FUN_ram_40000aa2(fVar34 * DAT_ram_40094e90);
          fVar35 = (-fVar35 + (float)puVar37) * ((float)puVar37 - fVar33) + fVar33 * fVar34;
        }
        else {
          fVar35 = fVar27 * (float)PTR_entry_ram_40094618 + DAT_ram_40094600;
          if (iVar18 == 2) {
            fVar34 = (float)FUN_ram_400009d2(fVar27 * DAT_ram_40099f94);
            fVar34 = (float)FUN_ram_40000aa2(fVar34 * DAT_ram_40094e90);
            fVar35 = fVar34 * ((float)puVar37 - fVar33) + fVar33 * fVar35;
          }
        }
      }
      puVar39 = (undefined *)(fVar35 * (float)_DAT_ram_40094eec + (float)puStack_2ac);
      if ((float)puVar39 < 0.0) {
        puVar39 = (undefined *)0x0;
      }
      else if ((float)puVar37 < (float)puVar39) {
        puVar39 = puVar37;
      }
      fVar47 = ((float)puVar39 - fVar47) * (float)puVar28 + fVar47;
      if (fVar47 < 0.0) {
        fVar33 = fVar32 * 0.0;
      }
      else {
        fVar33 = fVar32;
        if (fVar47 <= (float)puVar37) {
          fVar33 = fVar32 * fVar47;
        }
      }
      fVar33 = (float)FUN_ram_40000bd8(fVar33);
      fVar33 = (fVar33 * local_2b0 * fVar43) / fVar36;
      if (ABS(fVar33) < (float)_DAT_ram_40095454) {
        fVar33 = fVar33 * fVar33 * fVar33 * fVar31 + fVar33;
      }
      else {
        fVar33 = (float)FUN_ram_40000a4e();
      }
      fVar8 = DAT_ram_4009a20c;
      fVar7 = DAT_ram_4009a204._4_4_;
      fVar6 = DAT_ram_4009a1ec;
      fVar5 = DAT_ram_4009a1e8;
      fVar4 = DAT_ram_40099fa8;
      fVar1 = (float)DAT_ram_40099f5c;
      puVar28 = PTR_entry_ram_40094618;
      fVar34 = DAT_ram_40094614;
      fVar35 = (float)puVar37 / ((fVar33 + fVar31) * fVar33 + (float)puVar37);
      if (param_6 != uVar21) {
        iVar18 = uVar21 << 2;
        uVar17 = 0;
        do {
          fVar38 = (float)*(undefined8 *)((int)param_2 + iVar18);
          fVar25 = fVar38;
          if ((param_9 != '\0') && (param_3 != 0)) {
            fVar25 = *(float *)(param_3 + iVar18);
          }
          fVar3 = fVar38 * fVar1;
          fVar41 = fVar5;
          if ((fVar3 <= fVar34) && (fVar41 = fVar6, fVar4 <= fVar3)) {
            fVar41 = ((fVar3 * fVar3 + fVar7) * fVar3) / (fVar3 * fVar3 * fVar8 + fVar7);
          }
          fVar3 = (float)param_1[0x215];
          fVar2 = (float)param_1[0x213];
          fVar41 = (-(fVar2 * fVar31) + (fVar41 - fVar3)) * fVar35 * fVar33 + fVar2;
          param_1[0x213] = (int)(fVar41 * (float)puVar28 - fVar2);
          param_1[0x215] = (int)((fVar41 * fVar33 + fVar3) * (float)puVar28 - fVar3);
          *(ulonglong *)((int)param_4 + iVar18) =
               (ulonglong)(uint)(fVar38 * (float)puVar29 + fVar41 * (float)puVar44);
          if ((param_9 != '\0') && (param_5 != 0)) {
            fVar41 = fVar25 * fVar1;
            fVar38 = fVar24;
            if ((fVar41 <= fVar34) && (fVar38 = DAT_ram_4009a1ec, fVar26 <= fVar41)) {
              fVar38 = ((fVar41 * fVar41 + in_register_00000100) * fVar41) /
                       (fVar41 * fVar41 * DAT_ram_4009a20c + in_register_00000100);
            }
            fVar41 = (float)param_1[0x216];
            fVar3 = (float)param_1[0x214];
            fVar38 = (-(fVar3 * fVar31) + (fVar38 - fVar41)) * fVar35 * fVar33 + fVar3;
            param_1[0x214] = (int)(fVar38 * (float)puVar28 - fVar3);
            param_1[0x216] = (int)((fVar38 * fVar33 + fVar41) * (float)puVar28 - fVar41);
            *(float *)(param_5 + iVar18) = fVar25 * (float)puVar29 + fVar38 * (float)puVar44;
          }
          fVar27 = fVar27 + fVar46 / fVar36;
          if ((float)puVar37 <= fVar27) {
            fVar27 = fVar27 - (float)puVar37;
          }
          uVar17 = uVar17 + 1;
          iVar18 = iVar18 + 4;
        } while (uVar17 < uVar9);
      }
      uVar21 = uVar21 + uVar9;
      if (param_6 <= uVar21) {
        param_1[0x212] = (int)fVar47;
        param_1[0x211] = (int)fVar27;
        return;
      }
    } while( true );
  }
  if (param_7 == (float *)0x0) {
    if ((char)param_1[0x209] != '\0') {
      puVar44 = (undefined *)param_1[0x20a];
      puVar37 = DAT_ram_4009a470;
      if ((float)puVar44 == (float)DAT_ram_4009a470) {
        puVar37 = (undefined *)param_1[0x20b];
        if ((float)puVar37 == (float)DAT_ram_40094ec4) goto LAB_ram_4006b67a;
        goto LAB_ram_4006be82;
      }
LAB_ram_4006be92:
      puVar44 = puVar37;
      fVar36 = (float)puVar37 * DAT_ram_4009a490 + DAT_ram_4009a474;
      goto LAB_ram_4006bea6;
    }
    param_1[0x20d] = (int)DAT_ram_4009a478;
LAB_ram_4006becc:
    fVar23 = (float)puVar29 * DAT_ram_40095288 + 0.0;
  }
  else {
    puVar44 = (undefined *)*param_7;
    if ((float)puVar44 < 0.0) {
      puVar44 = (undefined *)0x0;
    }
    else if ((float)DAT_ram_40094604 < (float)puVar44) {
      puVar44 = DAT_ram_40094604;
    }
    puVar37 = (undefined *)param_7[1];
    if ((float)puVar37 < 0.0) {
      puVar37 = (undefined *)0x0;
    }
    else if ((float)DAT_ram_40094604 < (float)puVar37) {
      puVar37 = DAT_ram_40094604;
    }
    puVar28 = (undefined *)param_7[2];
    if ((float)puVar28 < 0.0) {
      puVar28 = (undefined *)0x0;
    }
    else if ((float)DAT_ram_40094604 < (float)puVar28) {
      puVar28 = DAT_ram_40094604;
    }
    puVar39 = (undefined *)param_7[3];
    if ((float)puVar39 < 0.0) {
      puVar39 = (undefined *)0x0;
      puVar45 = DAT_ram_40094604;
    }
    else if ((float)DAT_ram_40094604 < (float)puVar39) {
      puVar39 = DAT_ram_40094604;
      puVar45 = (undefined *)0x0;
    }
    else {
      puVar45 = (undefined *)((float)DAT_ram_40094604 - (float)puVar39);
    }
    if ((((char)param_1[0x209] != '\0') && ((float)param_1[0x20a] == (float)puVar44)) &&
       ((float)param_1[0x20b] == (float)puVar37)) {
LAB_ram_4006b67a:
      if ((float)param_1[0x20c] == (float)puVar28) {
        fVar36 = (float)param_1[0x20d];
        fVar23 = (float)param_1[0x20e];
        fVar46 = (float)param_1[0x20f];
        goto LAB_ram_4006b692;
      }
    }
    puVar29 = puVar37;
    fVar36 = DAT_ram_4009a474;
    if (0.0 <= (float)puVar44) {
LAB_ram_4006be82:
      puVar37 = puVar44;
      fVar36 = DAT_ram_4009a000;
      if ((float)puVar44 <= (float)DAT_ram_40094604) goto LAB_ram_4006be92;
    }
LAB_ram_4006bea6:
    fVar36 = (float)FUN_ram_40000bd8(fVar36);
    param_1[0x20d] = (int)fVar36;
    fVar23 = 0.0;
    if ((0.0 <= (float)puVar29) &&
       (fVar23 = DAT_ram_40095288, (float)puVar29 <= (float)DAT_ram_40094604))
    goto LAB_ram_4006becc;
  }
  param_1[0x20e] = (int)fVar23;
  fVar46 = DAT_ram_40094ee0;
  if ((0.0 <= (float)puVar28) &&
     (fVar46 = DAT_ram_40094ea8, (float)puVar28 <= (float)DAT_ram_40094604)) {
    fVar46 = (float)puVar28 * DAT_ram_40096014 + DAT_ram_40094ee0;
  }
  param_1[0x20f] = (int)fVar46;
  param_1[0x20a] = (int)puVar44;
  param_1[0x20b] = (int)puVar29;
  param_1[0x20c] = (int)puVar28;
  *(undefined1 *)(param_1 + 0x209) = 1;
LAB_ram_4006b692:
  fVar47 = DAT_ram_40094ee0;
  fVar27 = DAT_ram_40094ea8;
  puVar44 = DAT_ram_40094634;
  puVar28 = DAT_ram_40094604;
  uVar21 = 0;
  do {
    uVar9 = param_6 - uVar21;
    if (8 < uVar9) {
      uVar9 = 8;
    }
    if (param_6 != uVar21) {
      fVar31 = 0.0;
      iVar18 = uVar21 << 2;
      puVar37 = (undefined *)0x0;
      fVar24 = 0.0;
      fVar26 = 0.0;
      uVar17 = 0;
      puVar29 = puVar28;
      do {
        fVar33 = (float)*(undefined8 *)((int)param_2 + iVar18);
        fVar32 = fVar33;
        fVar43 = fVar33;
        if (param_9 != '\0') {
          if (param_3 != 0) {
            fVar43 = *(float *)(param_3 + iVar18);
          }
          fVar32 = (fVar33 + fVar43) * (float)puVar44;
        }
        fVar32 = ABS(fVar32);
        if ((char)param_1[0x200] == '\0') {
          *(undefined1 *)(param_1 + 0x200) = 1;
          param_1[0x1fc] = (int)fVar32;
          param_1[0x1fd] = (int)fVar32;
          param_1[0x1fe] = (int)fVar32;
          param_1[0x1ff] = (int)fVar32;
        }
        else {
          fVar35 = (float)param_1[0x1fc];
          fVar34 = (float)param_1[0x1fd];
          fVar1 = (float)param_1[0x1ff];
          param_1[0x1fd] = (int)fVar35;
          param_1[0x1fc] = (int)fVar32;
          param_1[0x1ff] = param_1[0x1fe];
          fVar32 = -((float)param_1[0x1fb] * fVar1) +
                   -((float)param_1[0x1fa] * (float)param_1[0x1fe]) +
                   (float)param_1[0x1f9] * fVar34 +
                   fVar32 * (float)param_1[0x1f7] + fVar35 * (float)param_1[0x1f8];
          param_1[0x1fe] = (int)fVar32;
        }
        if (uVar17 == 0) {
          fVar26 = (float)param_1[0x1f6];
          puVar37 = (undefined *)(fVar32 * fVar23 + fVar36);
          if (fVar26 < DAT_ram_40094e80) {
            puVar29 = (undefined *)unique0x10000229;
            fVar26 = DAT_ram_40094664;
          }
          else {
            puVar29 = (undefined *)(fVar26 * (float)_DAT_ram_4009a10c);
          }
          puVar30 = puVar28;
          if (((float)puVar28 <= (float)puVar37) &&
             (puVar30 = puVar29, (float)puVar37 <= (float)puVar29)) {
            puVar30 = puVar37;
          }
          fVar32 = fVar47;
          if ((fVar47 <= fVar46) && (fVar32 = fVar27, fVar46 <= fVar27)) {
            fVar32 = fVar46;
          }
          fVar35 = (float)FUN_ram_40000a4e(((float)puVar30 / fVar26) * DAT_ram_4009a39c);
          fVar26 = fVar35 * fVar35;
          fVar31 = (float)puVar28 / (fVar35 / fVar32 + (float)puVar28 + fVar26);
          puVar37 = (undefined *)(fVar26 * fVar31);
          fVar24 = ((fVar26 - (float)puVar28) + (fVar26 - (float)puVar28)) * fVar31;
          fVar31 = (((float)puVar28 - fVar35 / fVar32) + fVar26) * fVar31;
          fVar26 = (float)puVar37 + (float)puVar37;
          puVar29 = puVar37;
        }
        fVar32 = (float)param_1[0x201];
        fVar35 = (float)param_1[0x203];
        fVar34 = (float)param_1[0x207];
        param_1[0x207] = param_1[0x205];
        param_1[0x201] = (int)fVar33;
        param_1[0x203] = (int)fVar32;
        fVar32 = -(fVar34 * fVar31) +
                 -((float)param_1[0x205] * fVar24) +
                 fVar35 * (float)puVar37 + fVar33 * (float)puVar29 + fVar32 * fVar26;
        param_1[0x205] = (int)fVar32;
        *(ulonglong *)((int)param_4 + iVar18) =
             (ulonglong)(uint)((float)puVar45 * fVar33 + (float)puVar39 * fVar32);
        if ((param_9 != '\0') && (param_5 != 0)) {
          fVar32 = (float)param_1[0x202];
          fVar33 = (float)param_1[0x204];
          fVar35 = (float)param_1[0x208];
          param_1[0x208] = param_1[0x206];
          param_1[0x202] = (int)fVar43;
          param_1[0x204] = (int)fVar32;
          fVar32 = -(fVar35 * fVar31) +
                   -((float)param_1[0x206] * fVar24) +
                   fVar33 * (float)puVar37 + (float)puVar29 * fVar43 + fVar32 * fVar26;
          param_1[0x206] = (int)fVar32;
          *(float *)(param_5 + iVar18) = (float)puVar45 * fVar43 + (float)puVar39 * fVar32;
        }
        uVar17 = uVar17 + 1;
        iVar18 = iVar18 + 4;
      } while (uVar17 < uVar9);
    }
    uVar21 = uVar21 + uVar9;
  } while (uVar21 < param_6);
  return;
}


