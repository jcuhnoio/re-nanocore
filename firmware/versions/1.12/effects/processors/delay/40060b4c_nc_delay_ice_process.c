/* NanoCore 1.12: nc_delay_ice_process at 0x40060b4c.
 * Role: Subtype 3 fast and general paths converge here
 * REA: ev_780c4330f028f9a89cd6c9a7573d423bad6e6e09a8ebf83211cc10d74a909415
 * Source: analysis/rea-1.12-effects/results/03483-export-0x40060b4c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_delay_ice_process(undefined8 *param_1,undefined8 *param_2,float *param_3,ulonglong *param_4,
                     ulonglong *param_5,uint param_6,float *param_7,int param_8)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
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
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float in_register_00000100;
  float fVar21;
  uint uVar22;
  int iVar23;
  float fVar24;
  uint uVar25;
  ulonglong *puVar26;
  float *pfVar27;
  int iVar28;
  float *pfVar29;
  uint uVar30;
  float *pfVar31;
  float *pfVar32;
  float fVar33;
  uint uVar34;
  uint uVar35;
  undefined8 *puVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  ulonglong uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  ulonglong uVar58;
  float fVar59;
  float fVar60;
  ulonglong uVar61;
  undefined8 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fStack_e0;
  float fStack_dc;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  
  fVar63 = DAT_ram_40099f28;
  fVar15 = DAT_ram_4009672c;
  if (param_1 == (undefined8 *)0x0) {
    fStack_d4 = _DAT_ram_00000214;
    uVar25 = (uint)_DAT_ram_00000222;
    uVar34 = (uint)_DAT_ram_00000224;
    fStack_c8 = (float)_DAT_ram_00000220;
    fStack_e0 = _DAT_ram_0000015c;
    fStack_d0 = _DAT_ram_00000218;
    fStack_cc = _DAT_ram_0000021c;
    fVar21 = _DAT_ram_00000158;
    pfVar31 = _DAT_ram_00000228;
    fVar37 = _DAT_ram_00000154;
    fVar38 = _DAT_ram_00000164;
    fVar39 = _DAT_ram_00000160;
    fVar65 = _DAT_ram_0000019c;
    fVar50 = _DAT_ram_000001a8;
    fVar51 = _DAT_ram_00000210;
    fVar55 = _DAT_ram_0000020c;
    fVar59 = _DAT_ram_000001a0;
    fVar47 = fRam00000000;
  }
  else {
    if (param_7 == (float *)0x0) {
      uVar61 = (ulonglong)DAT_ram_4009f248;
      fVar50 = (float)*(undefined8 *)((int)param_1 + 0x3c);
      bVar5 = fVar50 != DAT_ram_4009f250;
      bVar4 = (float)*(undefined8 *)((int)param_1 + 0x44) != DAT_ram_4009672c;
      fVar51 = DAT_ram_4009f250;
      fVar59 = DAT_ram_4009672c;
      fVar65 = DAT_ram_4009f24c;
LAB_ram_40060c0a:
      uVar58 = (ulonglong)(uint)DAT_ram_4009672c;
      if (fVar51 <= DAT_ram_4009672c) {
        uVar58 = (ulonglong)(uint)fVar51;
      }
    }
    else {
      fVar51 = *param_7;
      uVar61 = (ulonglong)(uint)param_7[1];
      fVar59 = param_7[2];
      fVar65 = param_7[3];
      if (fVar51 < 0.0) {
        fVar51 = 0.0;
LAB_ram_40061240:
        if (fVar59 < 0.0) goto LAB_ram_40060bd2;
LAB_ram_4006124c:
        if (fVar59 <= DAT_ram_4009672c) goto LAB_ram_40060bd6;
        fVar59 = DAT_ram_4009672c;
        if (fVar65 < 0.0) goto LAB_ram_40061264;
LAB_ram_40060be2:
        if (DAT_ram_4009672c < fVar65) {
          fVar65 = DAT_ram_4009672c;
        }
      }
      else {
        if (fVar51 <= DAT_ram_4009672c) goto LAB_ram_40061240;
        fVar51 = DAT_ram_4009672c;
        if (0.0 <= fVar59) goto LAB_ram_4006124c;
LAB_ram_40060bd2:
        fVar59 = 0.0;
LAB_ram_40060bd6:
        if (0.0 <= fVar65) goto LAB_ram_40060be2;
LAB_ram_40061264:
        fVar65 = 0.0;
      }
      bVar4 = (float)*(undefined8 *)((int)param_1 + 0x44) != fVar59;
      uVar58 = 0;
      fVar50 = (float)*(undefined8 *)((int)param_1 + 0x3c);
      bVar5 = fVar50 != fVar51;
      if (0.0 <= fVar51) goto LAB_ram_40060c0a;
    }
    uVar46 = (ulonglong)(uint)DAT_ram_4009672c;
    if ((float)uVar61 < 0.0) {
      uVar61 = 0;
    }
    else if (DAT_ram_4009672c < (float)uVar61) {
      uVar61 = uVar46;
    }
    fVar55 = (float)uVar58;
    fVar21 = (float)uVar61;
    if (fVar55 == fVar50) {
      if ((float)param_1[8] != fVar21) goto LAB_ram_4006127c;
LAB_ram_40060cb4:
      if (bVar5) goto LAB_ram_400612b4;
LAB_ram_40060cb8:
      if (bVar4) goto LAB_ram_400612b4;
      fStack_d4 = *(float *)((int)param_1 + 0x214);
      fVar50 = *(float *)(param_1 + 0x35);
      fStack_c8 = (float)*(ushort *)(param_1 + 0x44);
      uVar25 = (uint)*(ushort *)((int)param_1 + 0x222);
      uVar34 = (uint)*(ushort *)((int)param_1 + 0x224);
      fStack_e0 = *(float *)((int)param_1 + 0x15c);
      fVar51 = *(float *)(param_1 + 0x42);
      fVar55 = *(float *)((int)param_1 + 0x20c);
      fStack_d0 = *(float *)(param_1 + 0x43);
      pfVar31 = *(float **)(param_1 + 0x45);
      fVar37 = *(float *)((int)param_1 + 0x154);
      fStack_cc = *(float *)((int)param_1 + 0x21c);
      fVar21 = *(float *)(param_1 + 0x2b);
      fVar39 = *(float *)(param_1 + 0x2c);
      fVar38 = *(float *)((int)param_1 + 0x164);
      fVar47 = (float)*param_1;
LAB_ram_40060d08:
      if ((float)param_1[9] == fVar65) goto LAB_ram_40060d12;
LAB_ram_40061700:
      *(float *)((int)param_1 + 0x19c) = fVar65;
      *(float *)(param_1 + 9) = fVar65;
      fVar59 = (float)*(undefined8 *)((int)param_1 + 0x4c);
    }
    else {
      uVar25 = *(uint *)(param_1 + 1);
      fVar50 = (float)*param_1;
      fVar37 = DAT_ram_4009672c;
      if (fVar50 < DAT_ram_40099f28) {
        fVar50 = DAT_ram_4009f25c;
        if ((0.0 <= fVar55) && (fVar50 = DAT_ram_4009f260, fVar55 <= DAT_ram_4009672c)) {
          fVar38 = (fVar55 * DAT_ram_4009b148 + DAT_ram_40099f88) * DAT_ram_4009f0ac;
          fVar50 = DAT_ram_4009678c;
          goto LAB_ram_40060c7e;
        }
        if (1 < uVar25) goto LAB_ram_40060c94;
      }
      else {
        fVar38 = DAT_ram_4009f254;
        if ((0.0 <= fVar55) && (fVar38 = DAT_ram_4009f258, fVar55 <= DAT_ram_4009672c)) {
          fVar38 = (fVar55 * DAT_ram_4009b148 + DAT_ram_40099f88) * DAT_ram_4009f0ac;
        }
LAB_ram_40060c7e:
        fVar50 = fVar50 * fVar38;
        if (DAT_ram_4009672c <= fVar50) {
          fVar55 = DAT_ram_4009672c;
          if (1 < uVar25) goto LAB_ram_40060c94;
        }
        else {
          fVar50 = DAT_ram_4009672c;
          if (uVar25 < 2) goto LAB_ram_40060ca4;
LAB_ram_40060c94:
          fVar55 = (float)(uVar25 - 2);
        }
        fVar37 = fVar50;
        if (fVar55 < fVar50) {
          fVar37 = fVar55;
        }
      }
LAB_ram_40060ca4:
      *(ulonglong *)((int)param_1 + 0x3c) = uVar58;
      *(float *)((int)param_1 + 0x194) = fVar37;
      if ((float)param_1[8] == fVar21) goto LAB_ram_40060cb4;
LAB_ram_4006127c:
      fVar50 = 0.0;
      if ((0.0 <= fVar21) && (fVar50 = DAT_ram_40096730, fVar21 <= fVar15)) {
        fVar50 = fVar21 * DAT_ram_40096730 + 0.0;
        if (0.0 <= fVar50) {
          if (DAT_ram_40096730 < fVar50) {
            fVar50 = DAT_ram_40096730;
          }
        }
        else {
          fVar50 = 0.0;
        }
      }
      *(float *)(param_1 + 0x33) = fVar50;
      param_1[8] = uVar61;
      if (!bVar5) goto LAB_ram_40060cb8;
LAB_ram_400612b4:
      if (fVar59 < 0.0) {
        fVar50 = DAT_ram_4009a32c;
        fVar55 = 0.0;
      }
      else {
        fVar50 = DAT_ram_4009a330;
        fVar55 = DAT_ram_4009a328;
        if (fVar59 <= fVar15) {
          fVar50 = fVar59 * DAT_ram_4009a328 + DAT_ram_4009a32c;
          fVar55 = ABS(fVar50 + DAT_ram_4009a330);
        }
      }
      puVar36 = &DAT_ram_4009f3a4;
      iVar23 = 0;
      iVar28 = 1;
      do {
        uVar62 = *puVar36;
        puVar36 = (undefined8 *)((int)puVar36 + 4);
        fVar21 = ABS(fVar50 - (float)uVar62);
        if (fVar21 < fVar55) {
          iVar23 = iVar28;
          fVar55 = fVar21;
        }
        iVar28 = iVar28 + 1;
      } while (iVar28 != 0x1e);
      fVar50 = (float)FUN_ram_40000d44(PTR_entry_ram_40096740,
                                       (float)*(undefined8 *)(iVar23 * 4 + 0x4009f3a0) /
                                       DAT_ram_4009a330);
      fVar60 = DAT_ram_40099f6c;
      if ((fVar50 < DAT_ram_40099f6c) || (fVar60 = DAT_ram_40096764, DAT_ram_40096764 < fVar50)) {
        fVar55 = (float)*param_1;
        if (fVar51 < 0.0) goto LAB_ram_4006198a;
LAB_ram_4006136a:
        if (fVar15 < fVar51) {
          fVar51 = DAT_ram_4009f264;
          if (fVar63 <= fVar55) {
LAB_ram_40061a98:
            fVar51 = fVar55 * DAT_ram_4009f288;
          }
        }
        else {
          fVar51 = (fVar51 * DAT_ram_4009b148 + DAT_ram_40099f88) * DAT_ram_4009f284;
          if (fVar55 < fVar63) {
            fVar55 = DAT_ram_4009678c;
          }
          if (fVar51 < DAT_ram_40099f50) {
            fVar51 = fVar55 * DAT_ram_4009f268;
          }
          else {
            if (DAT_ram_4009f204 < fVar51) goto LAB_ram_40061a98;
            fVar51 = fVar51 * DAT_ram_4009f0ac * fVar55;
          }
        }
      }
      else {
        fVar55 = (float)*param_1;
        fVar60 = fVar50;
        if (0.0 <= fVar51) goto LAB_ram_4006136a;
LAB_ram_4006198a:
        fVar51 = DAT_ram_4009f10c;
        if (fVar63 <= fVar55) {
          fVar51 = fVar55 * DAT_ram_4009f268;
        }
      }
      fVar38 = in_register_00000100;
      iVar23 = FUN_ram_40000902(fVar51);
      uVar20 = DAT_ram_4009f218;
      uVar19 = DAT_ram_4009f214;
      uVar18 = DAT_ram_4009f20c;
      fVar47 = (float)*param_1;
      if (iVar23 < 0x20) {
        iVar23 = 0x20;
      }
      fVar51 = in_register_00000100;
      fVar50 = DAT_ram_4009678c;
      fVar55 = fVar38;
      if (fVar47 < fVar63) {
        fVar39 = ((float)iVar23 * fVar63) / DAT_ram_4009678c;
        fVar21 = DAT_ram_4009a338;
        fVar68 = DAT_ram_4009678c;
LAB_ram_400618b4:
        fVar51 = (fVar51 / fVar50) * DAT_ram_4009f090;
        fVar37 = (float)FUN_ram_40000712(fVar51);
        fVar52 = (float)FUN_ram_400009d2(fVar51);
        fVar50 = fVar37 * DAT_ram_40096744;
        fVar64 = (fVar37 + fVar15) * (float)DAT_ram_4009675c;
        fVar37 = -(fVar37 + fVar15);
        fVar51 = fVar52 / fVar55 + fVar15;
        fVar52 = fVar15 - fVar52 / fVar55;
        if (fVar51 != 0.0) {
          fVar51 = fVar15 / fVar51;
          fVar64 = fVar64 * fVar51;
          fVar37 = fVar37 * fVar51;
          fVar50 = fVar50 * fVar51;
          fVar52 = fVar52 * fVar51;
        }
        *(float *)(param_1 + 0x27) = fVar64;
        *(float *)((int)param_1 + 0x13c) = fVar37;
        *(float *)(param_1 + 0x28) = fVar64;
        *(float *)((int)param_1 + 0x144) = fVar50;
        *(float *)(param_1 + 0x29) = fVar52;
        fVar51 = fVar21;
        if (fVar68 < fVar15) goto LAB_ram_40061468;
        fVar51 = fVar15;
        fVar50 = fVar68;
        if ((fVar15 <= fVar21) && (fVar51 = fVar21, fVar68 * DAT_ram_4009f22c < fVar21)) {
          fVar51 = fVar68 * DAT_ram_4009f22c;
        }
LAB_ram_400614b4:
        fVar51 = (fVar51 / fVar50) * fVar38;
        fVar38 = fVar55;
        fVar50 = (float)FUN_ram_40000712(fVar51);
        fVar51 = (float)FUN_ram_400009d2(fVar51);
        fVar21 = fVar15 - fVar50;
        fVar37 = fVar38;
        if (fVar51 / fVar55 + fVar15 != 0.0) {
          fVar21 = fVar38;
        }
      }
      else {
        fVar37 = fVar47 * DAT_ram_4009f22c;
        fVar21 = fVar37;
        if (DAT_ram_4009a338 <= fVar37) {
          fVar21 = DAT_ram_4009a338;
        }
        fVar39 = ((float)iVar23 * fVar63) / fVar47;
        fVar52 = fVar37;
        fVar64 = fVar47;
        fVar68 = fVar47;
        if (in_register_00000100 <= fVar37) {
          fVar37 = in_register_00000100;
          if (fVar15 <= fVar47) goto LAB_ram_40061b1c;
          goto LAB_ram_400618b4;
        }
        if (fVar15 <= fVar47) {
          fVar51 = fVar15;
          fVar50 = fVar47;
          if (fVar37 < fVar15) goto LAB_ram_400618b4;
LAB_ram_40061b1c:
          fVar51 = fVar52;
          fVar50 = fVar64;
          if (fVar37 <= fVar52) {
            fVar51 = fVar37;
          }
          goto LAB_ram_400618b4;
        }
        fVar52 = DAT_ram_4009f1fc._4_4_;
        fVar64 = DAT_ram_4009678c;
        if (fVar15 <= fVar37) goto LAB_ram_40061b1c;
        *(undefined4 *)(param_1 + 0x27) = DAT_ram_4009f20c;
        *(undefined4 *)((int)param_1 + 0x13c) = uVar20;
        *(undefined4 *)(param_1 + 0x28) = uVar18;
        *(undefined4 *)((int)param_1 + 0x144) = uVar20;
        *(undefined4 *)(param_1 + 0x29) = uVar19;
        fVar51 = fVar21;
LAB_ram_40061468:
        fVar38 = fVar55;
        if (fVar51 < fVar15) {
          fVar21 = 0.0;
          fVar37 = 0.0;
        }
        else {
          fVar21 = fVar38;
          fVar37 = fVar38;
          fVar50 = DAT_ram_4009678c;
          fVar55 = fVar38;
          if (fVar51 <= DAT_ram_4009f1fc._4_4_) goto LAB_ram_400614b4;
        }
      }
      pfVar31 = *(float **)(param_1 + 0x45);
      *(float *)((int)param_1 + 0x154) = fVar37;
      *(float *)(param_1 + 0x2b) = fVar21;
      *(float *)((int)param_1 + 0x15c) = fVar37;
      *(float *)(param_1 + 0x2c) = fVar38;
      *(float *)((int)param_1 + 0x164) = fVar38;
      if ((pfVar31 == (float *)0x0) || (*(ushort *)((int)param_1 + 0x22c) < 0x44)) {
        uVar34 = (uint)*(ushort *)((int)param_1 + 0x224);
        fVar51 = *(float *)(param_1 + 0x42);
        fVar55 = *(float *)((int)param_1 + 0x20c);
        fStack_c8 = 0.0;
        fStack_cc = fVar15;
        fStack_d0 = 0.0;
        fStack_d4 = 0.0;
        *(undefined4 *)(param_1 + 0x44) = DAT_ram_4009f290;
        uVar25 = 0;
        fVar39 = fVar38;
        in_register_00000100 = fVar38;
        fStack_e0 = fVar37;
      }
      else {
        fVar51 = DAT_ram_4009f268;
        if ((in_register_00000100 <= fVar39) &&
           (fVar51 = DAT_ram_4009f26c, fVar39 <= DAT_ram_4009a378)) {
          fVar51 = fVar39 * DAT_ram_4009f0ac;
        }
        in_register_00000100 = fVar38;
        uVar34 = FUN_ram_40000902(fVar68 * fVar51);
        uVar22 = (uint)*(ushort *)((int)param_1 + 0x22c);
        if ((int)uVar34 < 0x40) {
          uVar34 = 0x40;
        }
        if ((int)uVar34 < (int)(uVar22 - 3)) {
          uVar25 = uVar34 + 4;
          if ((int)uVar22 < (int)(uVar34 + 4)) {
            uVar25 = uVar22;
          }
          uVar25 = uVar25 & 0xffff;
        }
        else {
          uVar34 = uVar22 - 4;
          uVar25 = uVar22;
        }
        uVar30 = uVar34 & 0xffff;
        pfVar31 = *(float **)(param_1 + 0x45);
        if ((uVar30 == *(ushort *)(param_1 + 0x44)) && (*(ushort *)((int)param_1 + 0x222) == uVar25)
           ) {
          uVar34 = (uint)*(ushort *)((int)param_1 + 0x224);
          fVar51 = *(float *)(param_1 + 0x42);
          fStack_e0 = *(float *)((int)param_1 + 0x15c);
          fVar55 = *(float *)((int)param_1 + 0x20c);
          fVar37 = *(float *)((int)param_1 + 0x154);
          fVar21 = *(float *)(param_1 + 0x2b);
          fVar39 = *(float *)(param_1 + 0x2c);
          fVar38 = *(float *)((int)param_1 + 0x164);
        }
        else {
          *(uint *)(param_1 + 0x44) = uVar25 << 0x10 | uVar34 & 0xffff;
          if ((pfVar31 != (float *)0x0) && (uVar22 != 0)) {
            uVar22 = uVar22 * 4;
            if (0x80 < uVar22) {
              uVar25 = uVar22 - 0x81 >> 7;
              pfVar32 = pfVar31 + (uVar25 + 1) * 0x20;
              do {
                memset(pfVar31,0,0x80);
                fence();
                pfVar31 = pfVar31 + 0x20;
              } while (pfVar31 != pfVar32);
              uVar22 = (uVar22 - 0x80) + uVar25 * -0x80;
              pfVar31 = pfVar32;
            }
            memset(pfVar31,0,uVar22);
            fence();
            uVar30 = (uint)*(ushort *)(param_1 + 0x44);
            uVar25 = (uint)*(ushort *)((int)param_1 + 0x222);
            pfVar31 = *(float **)(param_1 + 0x45);
          }
          fVar55 = 0.0;
          fVar37 = *(float *)((int)param_1 + 0x154);
          fStack_e0 = *(float *)((int)param_1 + 0x15c);
          fVar21 = *(float *)(param_1 + 0x2b);
          fVar39 = *(float *)(param_1 + 0x2c);
          fVar38 = *(float *)((int)param_1 + 0x164);
          *(undefined2 *)((int)param_1 + 0x224) = 0;
          *(undefined4 *)(param_1 + 0x42) = 0;
          *(undefined4 *)((int)param_1 + 0x20c) = 0;
          uVar34 = 0;
          fVar51 = fVar55;
        }
        fStack_c8 = (float)uVar30;
        fVar50 = fVar15;
        if (0.0 < fVar60) {
          fVar50 = fVar60;
        }
        if (uVar30 == 0) {
          fVar47 = (float)*param_1;
          fStack_cc = fVar15;
          fStack_d0 = 0.0;
          fStack_d4 = 0.0;
        }
        else {
          fStack_d4 = (fVar50 - fVar15) / fStack_c8;
          if (DAT_ram_4009f278 <= fStack_d4) {
            if (fStack_d4 <= DAT_ram_4009f22c) {
              fVar50 = fStack_d4 * DAT_ram_4009f090;
              fStack_d0 = (float)FUN_ram_400009d2(fVar50);
              fStack_cc = (float)FUN_ram_40000712(fVar50);
              fVar47 = (float)*param_1;
            }
            else {
              fStack_cc = DAT_ram_4009f270;
              fVar47 = (float)*param_1;
              fStack_d0 = DAT_ram_4009f27c;
              fStack_d4 = DAT_ram_4009f22c;
            }
          }
          else {
            fVar47 = (float)*param_1;
            fStack_d4 = DAT_ram_4009f278;
            fStack_cc = DAT_ram_4009f270;
            fStack_d0 = DAT_ram_4009f274;
          }
        }
      }
      fVar50 = DAT_ram_4009672c;
      *(float *)((int)param_1 + 0x1a4) = fVar60;
      *(float *)((int)param_1 + 0x214) = fStack_d4;
      *(float *)(param_1 + 0x35) = fVar50;
      *(float *)(param_1 + 0x43) = fStack_d0;
      *(float *)((int)param_1 + 0x21c) = fStack_cc;
      if (!bVar4) goto LAB_ram_40060d08;
      *(float *)((int)param_1 + 0x44) = fVar59;
      if ((float)param_1[9] != fVar65) goto LAB_ram_40061700;
LAB_ram_40060d12:
      fVar65 = *(float *)((int)param_1 + 0x19c);
      fVar59 = (float)*(undefined8 *)((int)param_1 + 0x4c);
    }
    if (fVar59 != fVar15) {
      fVar60 = *(float *)(param_1 + 0x33);
      *(float *)(param_1 + 0x34) = fVar15;
      *(ulonglong *)((int)param_1 + 0x4c) = uVar46;
      fVar59 = fVar15;
      goto joined_r0x40060d30;
    }
    fVar59 = *(float *)(param_1 + 0x34);
  }
  fVar60 = *(float *)(param_1 + 0x33);
joined_r0x40060d30:
  if (0.0 <= fVar60) {
    if (DAT_ram_40096730 < fVar60) {
      fVar60 = DAT_ram_40096730;
    }
  }
  else {
    fVar60 = 0.0;
  }
  if (fVar65 < 0.0) {
    fVar65 = 0.0;
  }
  else if (fVar15 < fVar65) {
    fVar65 = fVar15;
  }
  if (0.0 <= fVar59) {
    if (fVar15 < fVar59) {
      fVar59 = fVar15;
    }
    fVar68 = *(float *)((int)param_1 + 0x194);
  }
  else {
    fVar59 = 0.0;
    fVar68 = *(float *)((int)param_1 + 0x194);
  }
  if (0.0 <= fVar50) {
    if (fVar15 < fVar50) {
      fVar50 = fVar15;
    }
  }
  else {
    fVar50 = 0.0;
  }
  fStack_dc = DAT_ram_4009f280;
  if (fVar63 <= fVar47) {
    fStack_dc = fVar47 * DAT_ram_4009f28c;
  }
  fVar64 = *(float *)(param_1 + 0x27);
  fVar6 = *(float *)(param_1 + 0x41);
  fVar7 = *(float *)((int)param_1 + 0x13c);
  fVar8 = *(float *)(param_1 + 0x28);
  fVar52 = fVar15 / (float)param_6;
  pfVar32 = *(float **)((int)param_1 + 4);
  fVar9 = *(float *)(param_1 + 0x29);
  uVar30 = *(uint *)(param_1 + 1);
  uVar22 = *(uint *)((int)param_1 + 0xc);
  fVar33 = *(float *)((int)param_1 + 0x144);
  fVar63 = *(float *)((int)param_1 + 0x14c);
  fVar67 = *(float *)(param_1 + 0x2a);
  fVar47 = *(float *)(param_1 + 0x2d);
  fVar66 = *(float *)((int)param_1 + 0x16c);
  if (uVar25 < 2) {
    fVar48 = 0.0;
    fVar49 = fVar15;
  }
  else {
    fVar49 = fVar51 * DAT_ram_4009f090;
    fVar48 = (float)FUN_ram_400009d2(fVar49);
    fVar49 = (float)FUN_ram_40000712(fVar49);
  }
  if (*(char *)((int)param_1 + 0x24a) == '\0') {
    *(float *)((int)param_1 + 0x1ac) = fVar68;
    *(float *)(param_1 + 0x36) = fVar60;
    *(float *)((int)param_1 + 0x1b4) = fVar65;
    *(float *)(param_1 + 0x37) = fVar59;
    *(undefined1 *)((int)param_1 + 0x24a) = 1;
    fVar41 = fVar65;
    fVar42 = fVar59;
    fVar43 = fVar60;
    fVar44 = fVar68;
  }
  else {
    fVar41 = *(float *)((int)param_1 + 0x1b4);
    fVar42 = *(float *)(param_1 + 0x37);
    fVar43 = *(float *)(param_1 + 0x36);
    fVar44 = *(float *)((int)param_1 + 0x1ac);
  }
  fVar17 = (float)DAT_ram_4009675c;
  fVar16 = DAT_ram_40096744;
  fVar65 = fVar65 - fVar41;
  fVar68 = fVar68 - fVar44;
  fVar60 = fVar60 - fVar43;
  fVar59 = fVar59 - fVar42;
  fVar53 = *(float *)((int)param_1 + 0x1c4);
  fVar45 = *(float *)(param_1 + 0x39);
  fVar10 = *(float *)((int)param_1 + 0x1cc);
  fVar11 = *(float *)(param_1 + 0x3a);
  if (param_6 != 0) {
    puVar36 = (undefined8 *)((int)param_2 + param_6 * 4);
    puVar26 = param_5;
    pfVar27 = param_3;
    do {
      fVar54 = (float)*param_2;
      if ((param_8 != 0) && (param_3 != (float *)0x0)) {
        fVar54 = (fVar54 + (float)*(undefined8 *)pfVar27) * fVar17;
      }
      fVar56 = fVar53 * fStack_dc + fVar44;
      if (fVar56 < fVar15) {
        fVar56 = fVar15;
      }
      if (in_register_00000100 < fVar56) {
        fVar56 = in_register_00000100;
      }
      fVar56 = (float)uVar22 - fVar56;
      if (fVar56 < 0.0) {
        fVar56 = fVar56 + (float)uVar30;
      }
      uVar2 = (uint)(-1 < (int)fVar56) * (int)fVar56;
      pfVar29 = pfVar32 + uVar2 + 1;
      if (uVar30 <= uVar2 + 1) {
        pfVar29 = pfVar32;
      }
      fVar56 = (float)*(undefined8 *)(pfVar32 + uVar2) * (fVar15 - (fVar56 - (float)uVar2)) +
               (fVar56 - (float)uVar2) * *pfVar29;
      fVar40 = fVar56;
      if ((pfVar31 != (float *)0x0) && (1 < uVar25)) {
        fVar40 = fVar51 + fVar17;
        if (fVar15 <= fVar40) {
          fVar40 = fVar40 - fVar15;
        }
        fVar1 = (float)uVar25;
        fVar57 = -((fVar15 - fVar51) * fStack_c8) + (float)uVar34;
        if (fVar57 < 0.0) {
          fVar57 = fVar57 + fVar1;
        }
        else if (fVar1 <= fVar57) {
          fVar57 = fVar57 - fVar1;
        }
        uVar2 = (uint)(-1 < (int)fVar57) * (int)fVar57;
        pfVar29 = pfVar31 + uVar2 + 1;
        if (uVar25 <= uVar2 + 1) {
          pfVar29 = pfVar31;
        }
        fVar12 = *pfVar29;
        fVar40 = (float)uVar34 - (fVar15 - fVar40) * fStack_c8;
        fVar13 = pfVar31[uVar2];
        if (fVar40 < 0.0) {
          fVar40 = fVar40 + fVar1;
        }
        else if (fVar1 <= fVar40) {
          fVar40 = fVar40 - fVar1;
        }
        uVar3 = (uint)(-1 < (int)fVar40) * (int)fVar40;
        pfVar29 = pfVar31 + uVar3 + 1;
        if (uVar25 <= uVar3 + 1) {
          pfVar29 = pfVar31;
        }
        fVar1 = *pfVar29;
        fVar24 = pfVar31[uVar3];
        fVar14 = -(fVar49 * fVar17) + fVar17;
        fVar51 = fVar51 + fStack_d4;
        uVar35 = uVar34 + 1 & 0xffff;
        pfVar31[uVar34] = fVar56;
        uVar34 = uVar35 & -(uint)(uVar35 < uVar25);
        fVar55 = (fVar14 * ((fVar15 - (fVar57 - (float)uVar2)) * fVar13 +
                           (fVar57 - (float)uVar2) * fVar12) +
                 (fVar15 - fVar14) *
                 ((fVar15 - (fVar40 - (float)uVar3)) * fVar24 + (fVar40 - (float)uVar3) * fVar1)) *
                 (fVar15 - fVar6) + fVar6 * fVar55;
        if (fVar51 < fVar15) {
          if (fVar51 < 0.0) {
            fVar51 = fVar51 + fVar15;
          }
        }
        else {
          fVar51 = fVar51 - fVar15;
        }
        fVar49 = fVar49 * fStack_cc - fVar48 * fStack_d0;
        fVar48 = in_register_00000100;
        fVar40 = fVar55;
      }
      fVar56 = fVar56 * (fVar15 - fVar50) + fVar50 * fVar40;
      fVar40 = fVar64 * fVar56 + fVar63;
      fVar57 = fVar40 * fVar37 + fVar47;
      fVar54 = fVar57 * fVar43 + fVar54;
      fVar63 = (fVar7 * fVar56 - fVar33 * fVar40) + fVar67;
      fVar67 = fVar8 * fVar56 - fVar9 * fVar40;
      fVar47 = (fVar40 * fVar21 - fVar57 * fVar39) + fVar66;
      fVar66 = fVar40 * fStack_e0 - fVar57 * fVar38;
      fVar40 = fVar16;
      if ((fVar16 <= fVar54) && (fVar40 = fVar54, in_register_00000100 < fVar54)) {
        fVar40 = in_register_00000100;
      }
      pfVar32[uVar22] = fVar40;
      uVar22 = uVar22 + 1 & -(uint)(uVar22 + 1 < uVar30);
      if (fVar41 < 0.0) {
        fVar56 = fVar56 * 0.0;
        fVar54 = fVar15;
      }
      else {
        fVar54 = 0.0;
        if (fVar41 <= fVar15) {
          fVar56 = fVar56 * fVar41;
          if (fVar41 <= (float)_DAT_ram_4009a644) {
LAB_ram_400617a2:
            fVar54 = fVar15;
          }
          else {
            fVar54 = -((fVar41 - (float)_DAT_ram_4009a644) * (float)_DAT_ram_40099f30) + fVar15;
            if (0.0 <= fVar54) {
              if (fVar15 < fVar54) goto LAB_ram_400617a2;
            }
            else {
              fVar54 = 0.0;
            }
          }
        }
      }
      fVar40 = (float)*param_2;
      if ((param_8 == 0) || (param_3 == (float *)0x0)) {
        uVar61 = (ulonglong)(uint)(fVar42 * (fVar40 * fVar54 + fVar56));
        *param_4 = uVar61;
        if (param_5 != (ulonglong *)0x0) goto LAB_ram_40061168;
      }
      else {
        fVar56 = fVar42 * (fVar54 * (fVar40 + *pfVar27) * fVar17 + fVar56);
        if (param_5 == (ulonglong *)0x0) {
          *param_4 = (ulonglong)(uint)fVar56;
        }
        else {
          fVar40 = fVar40 - *pfVar27;
          fVar54 = fVar54 * fVar42 * fVar17;
          uVar61 = (ulonglong)(uint)(-(fVar54 * fVar40) + fVar56);
          *param_4 = (ulonglong)(uint)(fVar54 * fVar40 + fVar56);
LAB_ram_40061168:
          *puVar26 = uVar61;
        }
      }
      fVar54 = fVar10 * fVar53;
      param_2 = (undefined8 *)((int)param_2 + 4);
      fVar44 = fVar44 + fVar68 * fVar52;
      fVar43 = fVar43 + fVar60 * fVar52;
      fVar53 = fVar11 * fVar53 + fVar10 * fVar45;
      fVar45 = fVar11 * fVar45 - fVar54;
      fVar41 = fVar41 + fVar65 * fVar52;
      fVar42 = fVar42 + fVar59 * fVar52;
      param_4 = (ulonglong *)((int)param_4 + 4);
      puVar26 = (ulonglong *)((int)puVar26 + 4);
      pfVar27 = pfVar27 + 1;
    } while (param_2 != puVar36);
  }
  *(uint *)((int)param_1 + 0xc) = uVar22;
  *(float *)((int)param_1 + 0x144) = fVar33;
  *(float *)(param_1 + 0x27) = fVar64;
  *(float *)((int)param_1 + 0x14c) = fVar63;
  *(float *)(param_1 + 0x2a) = fVar67;
  *(float *)((int)param_1 + 0x13c) = fVar7;
  *(float *)(param_1 + 0x2d) = fVar47;
  *(float *)((int)param_1 + 0x16c) = fVar66;
  *(float *)(param_1 + 0x28) = fVar8;
  *(short *)((int)param_1 + 0x224) = (short)uVar34;
  *(float *)(param_1 + 0x42) = fVar51;
  *(float *)(param_1 + 0x29) = fVar9;
  *(float *)((int)param_1 + 0x20c) = fVar55;
  *(float *)((int)param_1 + 0x1ac) = fVar44;
  *(float *)(param_1 + 0x36) = fVar43;
  *(float *)((int)param_1 + 0x1b4) = fVar41;
  *(float *)(param_1 + 0x37) = fVar42;
  *(float *)((int)param_1 + 0x1c4) = fVar53;
  *(float *)(param_1 + 0x39) = fVar45;
  *(float *)((int)param_1 + 0x154) = fVar37;
  *(float *)(param_1 + 0x2b) = fVar21;
  *(float *)((int)param_1 + 0x15c) = fStack_e0;
  *(float *)(param_1 + 0x2c) = fVar39;
  *(float *)((int)param_1 + 0x164) = fVar38;
  return;
}

