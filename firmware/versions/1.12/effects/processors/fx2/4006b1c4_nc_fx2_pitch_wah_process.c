/* NanoCore 1.12: nc_fx2_pitch_wah_process at 0x4006b1c4.
 * Role: FX2 Pitch8 EnvWah9 AutoWah10 MotionWah11 dispatch
 * REA: ev_950a5e5405d94b41922bc302d73a351ef0e0a5062353c214bd94a06eda145ba6
 * Source: analysis/rea-1.12-effects/results/03514-export-0x4006b1c4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Removing unreachable block (ram,0x4006c2dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_fx2_pitch_wah_process(int *param_1,float *param_2,int param_3,float *param_4,int param_5,
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
  ulonglong *puVar9;
  undefined8 *puVar10;
  float *pfVar11;
  float *pfVar12;
  undefined8 *puVar13;
  ulonglong *puVar14;
  float *pfVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
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
LAB_ram_4006b300:
    if (param_2 != param_4) {
      FUN_ram_4000303c(param_4,param_2,param_6 << 2);
    }
    if ((((param_9 != '\0') && (param_3 != 0)) && (param_5 != 0)) && (param_3 != param_5)) {
      FUN_ram_4000303c(param_5,param_3,param_6 << 2);
      return;
    }
    return;
  }
  *(char *)(param_1 + 0x390) = (char)param_8;
  fVar36 = DAT_ram_4009f5a4;
  puVar44 = DAT_ram_4009f59c;
  puVar28 = DAT_ram_4009f598;
  puVar45 = DAT_ram_4009f594;
  fVar23 = DAT_ram_4009a324;
  puVar29 = DAT_ram_40099f6c;
  puVar39 = DAT_ram_4009675c._4_4_;
  puVar37 = DAT_ram_4009672c;
  if (param_8 < 8) {
    if (*param_1 != 0) {
      nc_amp_drive_process();
      return;
    }
    goto LAB_ram_4006b300;
  }
  if (param_8 == 0xb) {
    nc_motion_wah_process(param_1 + 0x389);
    return;
  }
  if (param_8 != 9) {
    if (param_8 != 10) {
      if (param_8 != 8) goto LAB_ram_4006b300;
      iVar17 = param_1[0x362];
      puVar28 = DAT_ram_4009672c;
      if (param_7 == (float *)0x0) {
        if (iVar17 == 0) {
          puVar39 = (undefined *)0x0;
          goto LAB_ram_4006b4ae;
        }
        fVar36 = 0.0;
        puVar39 = (undefined *)0x0;
        puVar44 = (undefined *)DAT_ram_4009675c;
        goto LAB_ram_4006c13e;
      }
      puVar28 = (undefined *)param_7[2];
      if ((float)puVar28 < 0.0) {
        puVar28 = (undefined *)0x0;
        puVar39 = DAT_ram_4009672c;
      }
      else if ((float)DAT_ram_4009672c < (float)puVar28) {
        puVar28 = DAT_ram_4009672c;
        puVar39 = (undefined *)0x0;
      }
      else {
        puVar39 = (undefined *)((float)DAT_ram_4009672c - (float)puVar28);
      }
      if (iVar17 == 0) goto LAB_ram_4006b4ae;
      puVar29 = (undefined *)*param_7;
      if ((float)puVar29 < 0.0) {
        puVar29 = (undefined *)0x0;
      }
      else if ((float)DAT_ram_4009672c < (float)puVar29) {
        puVar29 = DAT_ram_4009672c;
      }
      puVar44 = (undefined *)param_7[1];
      fVar36 = DAT_ram_4009a324;
      if ((float)puVar44 < 0.0) {
        puVar45 = (undefined *)0x0;
LAB_ram_4006c1e6:
        puVar44 = puVar45;
        if ((float)puVar29 < 0.0) {
LAB_ram_4006c13e:
          puVar29 = (undefined *)((float)puVar44 * (float)PTR_entry_ram_40096740 + DAT_ram_40096728)
          ;
LAB_ram_4006c152:
          if (fVar23 <= fVar36) {
            if (fVar36 <= DAT_ram_4009a328) goto LAB_ram_4006c20e;
            fVar46 = (float)puVar29 + DAT_ram_4009a328;
          }
          else {
            fVar46 = (float)puVar29 - DAT_ram_4009a328;
          }
        }
        else {
          if ((float)puVar29 <= (float)DAT_ram_4009672c) {
            fVar36 = (float)FUN_ram_40000970((float)puVar29 * DAT_ram_4009b138 + DAT_ram_4009a324);
            goto LAB_ram_4006c432;
          }
          puVar29 = DAT_ram_4009672c;
          fVar36 = DAT_ram_4009a328;
          if ((float)puVar44 <= (float)DAT_ram_4009672c) goto LAB_ram_4006c13e;
LAB_ram_4006c20e:
          fVar46 = (float)puVar29 + fVar36;
        }
      }
      else {
        puVar45 = DAT_ram_4009672c;
        if ((float)DAT_ram_4009672c < (float)puVar44) goto LAB_ram_4006c1e6;
        fVar46 = DAT_ram_4009f5b4;
        if ((0.0 <= (float)puVar29) &&
           (fVar46 = DAT_ram_4009f5b8, fVar36 = DAT_ram_4009a328,
           (float)puVar29 <= (float)DAT_ram_4009672c)) {
          fVar36 = (float)FUN_ram_40000970((float)puVar29 * DAT_ram_4009b138 + DAT_ram_4009a324);
LAB_ram_4006c432:
          puVar29 = puVar37;
          if ((float)puVar44 <= (float)puVar37) goto LAB_ram_4006c13e;
          goto LAB_ram_4006c152;
        }
        if (0.0 <= (float)puVar44) goto LAB_ram_4006c432;
      }
      if ((param_1[0x34d] != 0) || ((float)param_1[800] != fVar46)) {
        nc_pitch_set_shift(fVar46,0,puVar37,param_1 + 2);
        iVar17 = param_1[0x362];
      }
LAB_ram_4006b4ae:
      puVar44 = (undefined *)DAT_ram_4009675c;
      iVar20 = 0;
      uVar21 = 0;
      pfVar19 = param_4;
      pfVar22 = param_2;
      while( true ) {
        uVar18 = param_6 - uVar21;
        if (0x40 < uVar18) {
          uVar18 = 0x40;
        }
        if (param_6 != uVar21) {
          if (param_9 == '\0') {
            FUN_ram_4000303c(afStack_2a0,pfVar22,uVar18 << 2);
          }
          else if (param_3 == 0) {
            uVar16 = 0;
            pfVar11 = afStack_2a0;
            pfVar12 = pfVar22;
            do {
              uVar40 = *(undefined8 *)pfVar12;
              uVar16 = uVar16 + 1;
              pfVar12 = pfVar12 + 1;
              *pfVar11 = ((float)uVar40 + (float)uVar40) * (float)puVar44;
              pfVar11 = pfVar11 + 1;
            } while (uVar16 < uVar18);
          }
          else {
            puVar10 = (undefined8 *)(param_3 + iVar20);
            uVar16 = 0;
            pfVar11 = afStack_2a0;
            pfVar12 = pfVar22;
            do {
              uVar42 = *(undefined8 *)pfVar12;
              uVar40 = *puVar10;
              uVar16 = uVar16 + 1;
              pfVar12 = pfVar12 + 1;
              puVar10 = (undefined8 *)((int)puVar10 + 4);
              *pfVar11 = ((float)uVar42 + (float)uVar40) * (float)puVar44;
              pfVar11 = pfVar11 + 1;
            } while (uVar16 < uVar18);
          }
        }
        if (iVar17 == 0) {
          FUN_ram_4000303c(local_1a0,afStack_2a0,uVar18 << 2);
        }
        else {
          nc_pitch_process(param_1 + 2,afStack_2a0,local_1a0,uVar18,0);
        }
        if (param_6 != uVar21) {
          if (param_9 == '\0') {
            puVar10 = local_1a0;
            uVar16 = 0;
            pfVar11 = pfVar19;
            pfVar12 = pfVar22;
            do {
              uVar40 = *puVar10;
              uVar42 = *(undefined8 *)pfVar12;
              uVar16 = uVar16 + 1;
              pfVar12 = pfVar12 + 1;
              puVar10 = (undefined8 *)((int)puVar10 + 4);
              *pfVar11 = (float)puVar39 * (float)uVar42 + (float)puVar28 * (float)uVar40;
              pfVar11 = pfVar11 + 1;
            } while (uVar16 < uVar18);
          }
          else if (param_5 == 0) {
            puVar10 = local_1a0;
            uVar16 = 0;
            pfVar11 = pfVar19;
            pfVar12 = pfVar22;
            if (param_3 == 0) {
              do {
                uVar40 = *puVar10;
                uVar42 = *(undefined8 *)pfVar12;
                uVar16 = uVar16 + 1;
                pfVar12 = pfVar12 + 1;
                puVar10 = (undefined8 *)((int)puVar10 + 4);
                *pfVar11 = (float)puVar39 * (float)uVar42 + (float)puVar28 * (float)uVar40;
                pfVar11 = pfVar11 + 1;
              } while (uVar16 < uVar18);
            }
            else {
              do {
                uVar40 = *puVar10;
                uVar16 = uVar16 + 1;
                puVar10 = (undefined8 *)((int)puVar10 + 4);
                *pfVar11 = (float)puVar39 * (float)*(undefined8 *)pfVar12 +
                           (float)puVar28 * (float)uVar40;
                pfVar11 = pfVar11 + 1;
                pfVar12 = pfVar12 + 1;
              } while (uVar16 < uVar18);
            }
          }
          else if (param_3 == 0) {
            puVar10 = local_1a0;
            uVar16 = 0;
            pfVar11 = (float *)(param_5 + iVar20);
            pfVar12 = pfVar19;
            pfVar15 = pfVar22;
            do {
              uVar40 = *puVar10;
              uVar42 = *(undefined8 *)pfVar15;
              uVar16 = uVar16 + 1;
              pfVar15 = pfVar15 + 1;
              puVar10 = (undefined8 *)((int)puVar10 + 4);
              fVar36 = (float)puVar39 * (float)uVar42 + (float)puVar28 * (float)uVar40;
              *pfVar12 = fVar36;
              *pfVar11 = fVar36;
              pfVar11 = pfVar11 + 1;
              pfVar12 = pfVar12 + 1;
            } while (uVar16 < uVar18);
          }
          else {
            puVar10 = local_1a0;
            uVar16 = 0;
            iVar17 = iVar20;
            do {
              puVar13 = (undefined8 *)((int)param_2 + iVar17);
              fVar36 = (float)puVar28 * (float)*puVar10;
              uVar40 = *(undefined8 *)(param_3 + iVar17);
              puVar9 = (ulonglong *)((int)param_4 + iVar17);
              puVar14 = (ulonglong *)(param_5 + iVar17);
              uVar16 = uVar16 + 1;
              puVar10 = (undefined8 *)((int)puVar10 + 4);
              iVar17 = iVar17 + 4;
              *puVar9 = (ulonglong)(uint)((float)*puVar13 * (float)puVar39 + fVar36);
              *puVar14 = (ulonglong)(uint)((float)uVar40 * (float)puVar39 + fVar36);
            } while (uVar16 < uVar18);
          }
        }
        uVar21 = uVar21 + 0x40;
        pfVar22 = pfVar22 + 0x40;
        pfVar19 = pfVar19 + 0x40;
        iVar20 = iVar20 + 0x100;
        if (param_6 <= uVar21) break;
        iVar17 = param_1[0x362];
      }
      return;
    }
    if (param_7 == (float *)0x0) {
      fVar36 = (float)param_1[0x382];
      puStack_2ac = (undefined *)DAT_ram_4009675c;
      puVar28 = (undefined *)DAT_ram_4009675c;
      puVar39 = DAT_ram_4009f5a8;
      puVar44 = DAT_ram_4009675c._4_4_;
      puVar29 = DAT_ram_4009f594;
      if (fVar36 <= 0.0) {
        fVar23 = 0.0;
        fVar36 = in_register_00000100;
        goto LAB_ram_4006ba0c;
      }
      fVar23 = 0.0;
LAB_ram_4006ba14:
      fVar46 = (float)puVar39 * DAT_ram_40096764 + 0.0;
    }
    else {
      puVar28 = (undefined *)*param_7;
      if ((float)puVar28 < 0.0) {
        puVar28 = (undefined *)0x0;
      }
      else if ((float)DAT_ram_4009672c < (float)puVar28) {
        puVar28 = DAT_ram_4009672c;
      }
      puStack_2ac = (undefined *)param_7[1];
      if ((float)puStack_2ac < 0.0) {
        puStack_2ac = (undefined *)0x0;
      }
      else if ((float)DAT_ram_4009672c < (float)puStack_2ac) {
        puStack_2ac = DAT_ram_4009672c;
      }
      puVar39 = (undefined *)param_7[2];
      if ((float)puVar39 < 0.0) {
        puVar39 = (undefined *)0x0;
      }
      else if ((float)DAT_ram_4009672c < (float)puVar39) {
        puVar39 = DAT_ram_4009672c;
      }
      fVar23 = param_7[3];
      if (fVar23 < 0.0) {
        fVar23 = 0.0;
      }
      else if ((float)DAT_ram_4009672c < fVar23) {
        fVar23 = in_register_00000100;
      }
      puVar44 = (undefined *)param_7[4];
      if ((float)puVar44 < 0.0) {
        puVar44 = (undefined *)0x0;
        puVar29 = DAT_ram_4009672c;
      }
      else if ((float)DAT_ram_4009672c < (float)puVar44) {
        puVar44 = DAT_ram_4009672c;
        puVar29 = (undefined *)0x0;
      }
      else {
        puVar29 = (undefined *)((float)DAT_ram_4009672c - (float)puVar44);
      }
      fVar36 = (float)param_1[0x382];
      if ((float)param_1[0x382] <= 0.0) {
        fVar36 = in_register_00000100;
      }
      fVar46 = 0.0;
      if (0.0 <= (float)puVar39) {
LAB_ram_4006ba0c:
        fVar46 = DAT_ram_40096764;
        if ((float)puVar39 <= (float)DAT_ram_4009672c) goto LAB_ram_4006ba14;
      }
    }
    fVar47 = (float)param_1[900];
    fVar27 = (float)param_1[899];
    if ((float)puVar28 < 0.0) {
      fVar26 = 0.0;
      fVar31 = DAT_ram_4009a340;
LAB_ram_4006c08e:
      local_2b0 = fVar26 * DAT_ram_4009b1a0 + DAT_ram_4009a348;
    }
    else {
      puVar39 = DAT_ram_4009672c;
      fVar31 = DAT_ram_4009a34c;
      if ((float)DAT_ram_4009672c < (float)puVar28) {
LAB_ram_4006c280:
        local_2b0 = (float)puVar39 * DAT_ram_40099f28 + DAT_ram_4009a344;
      }
      else {
        fVar31 = DAT_ram_4009a33c;
        if ((float)puVar28 <= (float)(undefined *)DAT_ram_4009675c) {
          fVar26 = (float)puVar28 + (float)puVar28;
          if (0.0 <= fVar26) {
            if (fVar26 <= (float)DAT_ram_4009672c) {
              fVar31 = fVar26 * DAT_ram_40096780 + DAT_ram_4009a340;
            }
            if (0.0 <= fVar26) {
              if (fVar26 <= (float)DAT_ram_4009672c) goto LAB_ram_4006c08e;
              goto LAB_ram_4006c3ae;
            }
            local_2b0 = DAT_ram_4009a348;
          }
          else {
            local_2b0 = DAT_ram_4009a348;
            fVar31 = DAT_ram_4009a340;
          }
        }
        else {
          puVar39 = (undefined *)
                    (((float)puVar28 - (float)(undefined *)DAT_ram_4009675c) +
                    ((float)puVar28 - (float)(undefined *)DAT_ram_4009675c));
          if (0.0 <= (float)puVar39) {
            fVar31 = DAT_ram_4009a34c;
            if ((float)puVar39 <= (float)DAT_ram_4009672c) {
              fVar31 = (float)puVar39 * DAT_ram_40096780 + DAT_ram_4009a33c;
            }
            if ((float)puVar39 < 0.0) {
LAB_ram_4006c3ae:
              local_2b0 = DAT_ram_4009a344;
            }
            else {
              if ((float)puVar39 <= (float)DAT_ram_4009672c) goto LAB_ram_4006c280;
              local_2b0 = DAT_ram_4009a350;
            }
          }
          else {
            local_2b0 = DAT_ram_4009a344;
          }
        }
      }
    }
    fVar26 = DAT_ram_4009f5ac;
    if (0.0 < fVar36) {
      fVar26 = fVar36 * DAT_ram_4009b18c;
    }
    if (local_2b0 < DAT_ram_4009a380) {
      local_2b0 = DAT_ram_40099f70;
      puVar28 = PTR_entry_ram_40096740;
      if (fVar31 < DAT_ram_40099f70) goto LAB_ram_4006bb10;
      local_2b0 = DAT_ram_4009a380;
      if (DAT_ram_4009f5b0 < fVar31) {
        local_2b0 = DAT_ram_4009f5b0;
        fVar26 = local_2b0;
        fVar24 = DAT_ram_4009a380;
        goto LAB_ram_4006baf2;
      }
LAB_ram_4006bad4:
      fVar24 = local_2b0;
      if (local_2b0 < fVar31) {
LAB_ram_4006bade:
        fVar31 = local_2b0;
        fVar24 = local_2b0;
      }
      local_2b0 = fVar31;
      fVar31 = DAT_ram_40096748;
      fVar26 = local_2b0;
      if (DAT_ram_40096748 <= local_2b0) goto LAB_ram_4006baf2;
    }
    else {
      if (fVar26 < local_2b0) {
        local_2b0 = fVar26;
      }
      if (DAT_ram_40099f70 <= fVar31) {
        if (local_2b0 - (float)DAT_ram_4009672c < fVar31) {
          fVar31 = local_2b0 - (float)DAT_ram_4009672c;
        }
        goto LAB_ram_4006bad4;
      }
      fVar26 = DAT_ram_40099f70;
      fVar24 = local_2b0;
      if (local_2b0 < DAT_ram_40099f70) goto LAB_ram_4006bade;
LAB_ram_4006baf2:
      local_2b0 = fVar26;
      fVar31 = fVar24;
      if (local_2b0 <= fVar24) {
        fVar31 = local_2b0;
      }
    }
    puVar28 = (undefined *)(fVar24 / fVar31);
    if (fVar24 / fVar31 < (float)DAT_ram_4009672c) {
      puVar28 = DAT_ram_4009672c;
    }
LAB_ram_4006bb10:
    fVar32 = (float)FUN_ram_40000c5e(puVar28);
    fVar43 = DAT_ram_4009f4bc;
    fVar24 = DAT_ram_4009f310;
    fVar31 = DAT_ram_4009f2d4;
    fVar26 = DAT_ram_4009f0b0;
    uVar21 = 0;
    do {
      uVar18 = param_6 - uVar21;
      if (8 < uVar18) {
        uVar18 = 8;
      }
      fVar33 = (float)FUN_ram_40000bd8(((float)(int)uVar18 * DAT_ram_40096744 * fVar43 *
                                       (float)_DAT_ram_4009b1a4) / fVar36);
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
LAB_ram_4006be40:
        fVar35 = (float)FUN_ram_400009d2(fVar27 * DAT_ram_4009f090);
        fVar35 = fVar35 * (float)puVar39 +
                 (-(ABS(fVar27 - (float)(undefined *)DAT_ram_4009675c) * DAT_ram_40099f30) +
                 (float)puVar37) * fVar33;
      }
      else if ((float)puVar37 < fVar23) {
        fVar35 = fVar27 * (float)PTR_entry_ram_40096740 + DAT_ram_40096728;
      }
      else {
        iVar17 = (int)(fVar23 * DAT_ram_4009673c);
        fVar33 = fVar23 * DAT_ram_4009673c - (float)iVar17;
        if (iVar17 < 1) {
          puVar39 = (undefined *)((float)puVar37 - fVar33);
          goto LAB_ram_4006be40;
        }
        if (iVar17 == 1) {
          fVar35 = ABS(fVar27 - (float)(undefined *)DAT_ram_4009675c) * DAT_ram_40099f30;
          fVar34 = (float)FUN_ram_400009d2(fVar27 * DAT_ram_4009f090);
          fVar34 = (float)FUN_ram_40000aa2(fVar34 * DAT_ram_40099f38);
          fVar35 = (-fVar35 + (float)puVar37) * ((float)puVar37 - fVar33) + fVar33 * fVar34;
        }
        else {
          fVar35 = fVar27 * (float)PTR_entry_ram_40096740 + DAT_ram_40096728;
          if (iVar17 == 2) {
            fVar34 = (float)FUN_ram_400009d2(fVar27 * DAT_ram_4009f090);
            fVar34 = (float)FUN_ram_40000aa2(fVar34 * DAT_ram_40099f38);
            fVar35 = fVar34 * ((float)puVar37 - fVar33) + fVar33 * fVar35;
          }
        }
      }
      puVar39 = (undefined *)(fVar35 * (float)_DAT_ram_40099f94 + (float)puStack_2ac);
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
      if (ABS(fVar33) < (float)_DAT_ram_4009a4f8) {
        fVar33 = fVar33 * fVar33 * fVar33 * fVar31 + fVar33;
      }
      else {
        fVar33 = (float)FUN_ram_40000a4e();
      }
      fVar8 = DAT_ram_4009f32c;
      fVar7 = DAT_ram_4009f324._4_4_;
      fVar6 = DAT_ram_4009f314;
      fVar5 = DAT_ram_4009f310;
      fVar4 = DAT_ram_4009f0b0;
      fVar1 = (float)DAT_ram_4009f060;
      puVar28 = PTR_entry_ram_40096740;
      fVar34 = DAT_ram_4009673c;
      fVar35 = (float)puVar37 / ((fVar33 + fVar31) * fVar33 + (float)puVar37);
      if (param_6 != uVar21) {
        iVar17 = uVar21 << 2;
        uVar16 = 0;
        do {
          fVar38 = (float)*(undefined8 *)((int)param_2 + iVar17);
          fVar25 = fVar38;
          if ((param_9 != '\0') && (param_3 != 0)) {
            fVar25 = *(float *)(param_3 + iVar17);
          }
          fVar3 = fVar38 * fVar1;
          fVar41 = fVar5;
          if ((fVar3 <= fVar34) && (fVar41 = fVar6, fVar4 <= fVar3)) {
            fVar41 = ((fVar3 * fVar3 + fVar7) * fVar3) / (fVar3 * fVar3 * fVar8 + fVar7);
          }
          fVar3 = (float)param_1[0x387];
          fVar2 = (float)param_1[0x385];
          fVar41 = (-(fVar2 * fVar31) + (fVar41 - fVar3)) * fVar35 * fVar33 + fVar2;
          param_1[0x385] = (int)(fVar41 * (float)puVar28 - fVar2);
          param_1[0x387] = (int)((fVar41 * fVar33 + fVar3) * (float)puVar28 - fVar3);
          *(ulonglong *)((int)param_4 + iVar17) =
               (ulonglong)(uint)(fVar38 * (float)puVar29 + fVar41 * (float)puVar44);
          if ((param_9 != '\0') && (param_5 != 0)) {
            fVar41 = fVar25 * fVar1;
            fVar38 = fVar24;
            if ((fVar41 <= fVar34) && (fVar38 = DAT_ram_4009f314, fVar26 <= fVar41)) {
              fVar38 = ((fVar41 * fVar41 + in_register_00000100) * fVar41) /
                       (fVar41 * fVar41 * DAT_ram_4009f32c + in_register_00000100);
            }
            fVar41 = (float)param_1[0x388];
            fVar3 = (float)param_1[0x386];
            fVar38 = (-(fVar3 * fVar31) + (fVar38 - fVar41)) * fVar35 * fVar33 + fVar3;
            param_1[0x386] = (int)(fVar38 * (float)puVar28 - fVar3);
            param_1[0x388] = (int)((fVar38 * fVar33 + fVar41) * (float)puVar28 - fVar41);
            *(float *)(param_5 + iVar17) = fVar25 * (float)puVar29 + fVar38 * (float)puVar44;
          }
          fVar27 = fVar27 + fVar46 / fVar36;
          if ((float)puVar37 <= fVar27) {
            fVar27 = fVar27 - (float)puVar37;
          }
          uVar16 = uVar16 + 1;
          iVar17 = iVar17 + 4;
        } while (uVar16 < uVar18);
      }
      uVar21 = uVar21 + uVar18;
      if (param_6 <= uVar21) {
        param_1[900] = (int)fVar47;
        param_1[899] = (int)fVar27;
        return;
      }
    } while( true );
  }
  if (param_7 == (float *)0x0) {
    if ((char)param_1[0x37b] != '\0') {
      puVar44 = (undefined *)param_1[0x37c];
      puVar37 = DAT_ram_4009f59c;
      if ((float)puVar44 == (float)DAT_ram_4009f59c) {
        puVar37 = (undefined *)param_1[0x37d];
        if ((float)puVar37 == (float)DAT_ram_40099f6c) goto LAB_ram_4006b6f2;
        goto LAB_ram_4006bef2;
      }
LAB_ram_4006bf02:
      puVar44 = puVar37;
      fVar36 = (float)puVar37 * DAT_ram_4009f5bc + DAT_ram_4009f5a0;
      goto LAB_ram_4006bf16;
    }
    param_1[0x37f] = (int)DAT_ram_4009f5a4;
LAB_ram_4006bf3c:
    fVar23 = (float)puVar29 * DAT_ram_4009a338 + 0.0;
  }
  else {
    puVar44 = (undefined *)*param_7;
    if ((float)puVar44 < 0.0) {
      puVar44 = (undefined *)0x0;
    }
    else if ((float)DAT_ram_4009672c < (float)puVar44) {
      puVar44 = DAT_ram_4009672c;
    }
    puVar37 = (undefined *)param_7[1];
    if ((float)puVar37 < 0.0) {
      puVar37 = (undefined *)0x0;
    }
    else if ((float)DAT_ram_4009672c < (float)puVar37) {
      puVar37 = DAT_ram_4009672c;
    }
    puVar28 = (undefined *)param_7[2];
    if ((float)puVar28 < 0.0) {
      puVar28 = (undefined *)0x0;
    }
    else if ((float)DAT_ram_4009672c < (float)puVar28) {
      puVar28 = DAT_ram_4009672c;
    }
    puVar39 = (undefined *)param_7[3];
    if ((float)puVar39 < 0.0) {
      puVar39 = (undefined *)0x0;
      puVar45 = DAT_ram_4009672c;
    }
    else if ((float)DAT_ram_4009672c < (float)puVar39) {
      puVar39 = DAT_ram_4009672c;
      puVar45 = (undefined *)0x0;
    }
    else {
      puVar45 = (undefined *)((float)DAT_ram_4009672c - (float)puVar39);
    }
    if ((((char)param_1[0x37b] != '\0') && ((float)param_1[0x37c] == (float)puVar44)) &&
       ((float)param_1[0x37d] == (float)puVar37)) {
LAB_ram_4006b6f2:
      if ((float)param_1[0x37e] == (float)puVar28) {
        fVar36 = (float)param_1[0x37f];
        fVar23 = (float)param_1[0x380];
        fVar46 = (float)param_1[0x381];
        goto LAB_ram_4006b70a;
      }
    }
    puVar29 = puVar37;
    fVar36 = DAT_ram_4009f5a0;
    if (0.0 <= (float)puVar44) {
LAB_ram_4006bef2:
      puVar37 = puVar44;
      fVar36 = DAT_ram_4009f120;
      if ((float)puVar44 <= (float)DAT_ram_4009672c) goto LAB_ram_4006bf02;
    }
LAB_ram_4006bf16:
    fVar36 = (float)FUN_ram_40000bd8(fVar36);
    param_1[0x37f] = (int)fVar36;
    fVar23 = 0.0;
    if ((0.0 <= (float)puVar29) &&
       (fVar23 = DAT_ram_4009a338, (float)puVar29 <= (float)DAT_ram_4009672c))
    goto LAB_ram_4006bf3c;
  }
  param_1[0x380] = (int)fVar23;
  fVar46 = DAT_ram_40099f88;
  if ((0.0 <= (float)puVar28) &&
     (fVar46 = DAT_ram_40099f50, (float)puVar28 <= (float)DAT_ram_4009672c)) {
    fVar46 = (float)puVar28 * DAT_ram_4009b13c + DAT_ram_40099f88;
  }
  param_1[0x381] = (int)fVar46;
  param_1[0x37c] = (int)puVar44;
  param_1[0x37d] = (int)puVar29;
  param_1[0x37e] = (int)puVar28;
  *(undefined1 *)(param_1 + 0x37b) = 1;
LAB_ram_4006b70a:
  fVar47 = DAT_ram_40099f88;
  fVar27 = DAT_ram_40099f50;
  puVar44 = (undefined *)DAT_ram_4009675c;
  puVar28 = DAT_ram_4009672c;
  uVar21 = 0;
  do {
    uVar18 = param_6 - uVar21;
    if (8 < uVar18) {
      uVar18 = 8;
    }
    if (param_6 != uVar21) {
      fVar31 = 0.0;
      iVar17 = uVar21 << 2;
      puVar37 = (undefined *)0x0;
      fVar24 = 0.0;
      fVar26 = 0.0;
      uVar16 = 0;
      puVar29 = puVar28;
      do {
        fVar33 = (float)*(undefined8 *)((int)param_2 + iVar17);
        fVar32 = fVar33;
        fVar43 = fVar33;
        if (param_9 != '\0') {
          if (param_3 != 0) {
            fVar43 = *(float *)(param_3 + iVar17);
          }
          fVar32 = (fVar33 + fVar43) * (float)puVar44;
        }
        fVar32 = ABS(fVar32);
        if ((char)param_1[0x372] == '\0') {
          *(undefined1 *)(param_1 + 0x372) = 1;
          param_1[0x36e] = (int)fVar32;
          param_1[0x36f] = (int)fVar32;
          param_1[0x370] = (int)fVar32;
          param_1[0x371] = (int)fVar32;
        }
        else {
          fVar35 = (float)param_1[0x36e];
          fVar34 = (float)param_1[0x36f];
          fVar1 = (float)param_1[0x371];
          param_1[0x36f] = (int)fVar35;
          param_1[0x36e] = (int)fVar32;
          param_1[0x371] = param_1[0x370];
          fVar32 = -((float)param_1[0x36d] * fVar1) +
                   -((float)param_1[0x36c] * (float)param_1[0x370]) +
                   (float)param_1[0x36b] * fVar34 +
                   fVar32 * (float)param_1[0x369] + fVar35 * (float)param_1[0x36a];
          param_1[0x370] = (int)fVar32;
        }
        if (uVar16 == 0) {
          fVar26 = (float)param_1[0x368];
          puVar37 = (undefined *)(fVar32 * fVar23 + fVar36);
          if (fVar26 < DAT_ram_40099f28) {
            puVar29 = (undefined *)unique0x10000228;
            fVar26 = DAT_ram_4009678c;
          }
          else {
            puVar29 = (undefined *)(fVar26 * (float)_DAT_ram_4009f22c);
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
          fVar35 = (float)FUN_ram_40000a4e(((float)puVar30 / fVar26) * DAT_ram_4009f4bc);
          fVar26 = fVar35 * fVar35;
          fVar31 = (float)puVar28 / (fVar35 / fVar32 + (float)puVar28 + fVar26);
          puVar37 = (undefined *)(fVar26 * fVar31);
          fVar24 = ((fVar26 - (float)puVar28) + (fVar26 - (float)puVar28)) * fVar31;
          fVar31 = (((float)puVar28 - fVar35 / fVar32) + fVar26) * fVar31;
          fVar26 = (float)puVar37 + (float)puVar37;
          puVar29 = puVar37;
        }
        fVar32 = (float)param_1[0x373];
        fVar35 = (float)param_1[0x375];
        fVar34 = (float)param_1[0x379];
        param_1[0x379] = param_1[0x377];
        param_1[0x373] = (int)fVar33;
        param_1[0x375] = (int)fVar32;
        fVar32 = -(fVar34 * fVar31) +
                 -((float)param_1[0x377] * fVar24) +
                 fVar35 * (float)puVar37 + fVar33 * (float)puVar29 + fVar32 * fVar26;
        param_1[0x377] = (int)fVar32;
        *(ulonglong *)((int)param_4 + iVar17) =
             (ulonglong)(uint)((float)puVar45 * fVar33 + (float)puVar39 * fVar32);
        if ((param_9 != '\0') && (param_5 != 0)) {
          fVar32 = (float)param_1[0x374];
          fVar33 = (float)param_1[0x376];
          fVar35 = (float)param_1[0x37a];
          param_1[0x37a] = param_1[0x378];
          param_1[0x374] = (int)fVar43;
          param_1[0x376] = (int)fVar32;
          fVar32 = -(fVar35 * fVar31) +
                   -((float)param_1[0x378] * fVar24) +
                   fVar33 * (float)puVar37 + (float)puVar29 * fVar43 + fVar32 * fVar26;
          param_1[0x378] = (int)fVar32;
          *(float *)(param_5 + iVar17) = (float)puVar45 * fVar43 + (float)puVar39 * fVar32;
        }
        uVar16 = uVar16 + 1;
        iVar17 = iVar17 + 4;
      } while (uVar16 < uVar18);
    }
    uVar21 = uVar21 + uVar18;
  } while (uVar21 < param_6);
  return;
}

