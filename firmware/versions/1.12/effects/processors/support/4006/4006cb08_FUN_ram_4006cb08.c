/* NanoCore 1.12: FUN_ram_4006cb08 at 0x4006cb08.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_65a8aba2121a73fcd4f1e18394ef4aa534078edf87f1d94795da4914e7d1bb3e
 * Source: analysis/rea-1.12-effects/results/03524-export-0x4006cb08.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4006cb08(float param_1,float param_2,undefined8 param_3,float param_4,float param_5,
                     int param_6,int param_7,uint param_8,int param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_register_00000100;
  int iVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar10 = DAT_ram_4009f66c;
  fVar9 = DAT_ram_4009f668;
  fVar8 = DAT_ram_4009f65c;
  fVar7 = DAT_ram_4009f600;
  fVar6 = DAT_ram_4009f5dc;
  fVar5 = DAT_ram_4009f2a0;
  fVar4 = DAT_ram_4009f090;
  fVar3 = DAT_ram_40099f7c;
  fVar2 = (float)DAT_ram_4009675c;
  fVar1 = DAT_ram_4009672c;
  if (param_8 == 0) {
    return;
  }
  uVar13 = 0;
  fVar18 = DAT_ram_4009f670;
  fVar17 = DAT_ram_4009f674;
  fVar16 = DAT_ram_4009f678;
  fVar15 = DAT_ram_4009f67c;
  fVar20 = (float)DAT_ram_4009f680;
  fVar24 = DAT_ram_4009f680._4_4_;
  fVar21 = (float)DAT_ram_4009f688;
  do {
    fVar23 = DAT_ram_4009f5e8;
    if (uVar13 != 0) {
      fVar23 = fVar2;
    }
    for (fVar23 = param_4 * fVar23 + param_1; fVar4 <= fVar23; fVar23 = fVar23 - fVar4) {
    }
    for (; fVar22 = fVar23, fVar23 < 0.0; fVar23 = fVar23 + fVar4) {
    }
    for (; fVar4 <= fVar22; fVar22 = fVar22 - fVar4) {
    }
    for (; fVar22 < 0.0; fVar22 = fVar22 + fVar4) {
    }
    if (in_register_00000100 < fVar22) {
      fVar22 = fVar22 - fVar4;
    }
    if (fVar22 <= DAT_ram_4009f5ec) {
      if (fVar22 < DAT_ram_4009f5f0) {
        fVar22 = DAT_ram_4009f5f4 - fVar22;
      }
    }
    else {
      fVar22 = in_register_00000100 - fVar22;
    }
    fVar14 = fVar22 * fVar22;
    for (fVar23 = param_5 * fVar22 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * DAT_ram_4009f5f8 +
                                                                   DAT_ram_4009f5fc) + fVar7) +
                                               DAT_ram_4009f604) + fVar1) + fVar23; fVar4 <= fVar23;
        fVar23 = fVar23 - fVar4) {
    }
    for (; fVar23 < 0.0; fVar23 = fVar23 + fVar4) {
    }
    if (in_register_00000100 < fVar23) {
      fVar23 = fVar23 - fVar4;
    }
    if (fVar23 <= DAT_ram_4009f5ec) {
      if (fVar23 < DAT_ram_4009f5f0) {
        fVar23 = DAT_ram_4009f5f4 - fVar23;
      }
    }
    else {
      fVar23 = in_register_00000100 - fVar23;
    }
    fVar22 = fVar23 * fVar23;
    fVar23 = (fVar23 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * DAT_ram_4009f5f8 + DAT_ram_4009f5fc)
                                           + fVar7) + DAT_ram_4009f604) + fVar1) + fVar1) * fVar2;
    if (fVar23 < 0.0) {
      fVar22 = DAT_ram_4009f5e0;
      if (0.0 <= DAT_ram_4009f5e0) goto LAB_ram_4006ce1c;
LAB_ram_4006d02a:
      fVar22 = 0.0;
    }
    else {
      fVar22 = DAT_ram_4009f5e4;
      if (fVar23 <= fVar1) {
        fVar23 = fVar23 * (float)PTR_entry_ram_40096740 + DAT_ram_40096728;
        fVar22 = fVar23 * fVar23;
        if (_DAT_ram_4009f608 < fVar22) {
          fVar22 = fVar22 * DAT_ram_4009f630 + DAT_ram_4009f634;
          fVar22 = (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * 
                                                  DAT_ram_4009f638 + DAT_ram_4009f63c) +
                                                  DAT_ram_4009f640) + DAT_ram_4009f644) +
                                                 DAT_ram_4009f648) + DAT_ram_4009f64c) +
                             DAT_ram_4009f650) + DAT_ram_4009f654) * fVar23 * fVar2 + fVar2;
        }
        else {
          fVar22 = fVar22 * DAT_ram_4009f60c + DAT_ram_40096728;
          fVar22 = (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * 
                                                  DAT_ram_4009f610 + DAT_ram_4009f614) +
                                                  DAT_ram_4009f618) + DAT_ram_4009f61c) +
                                                 DAT_ram_4009f620) + DAT_ram_4009f624) +
                             DAT_ram_4009f628) + DAT_ram_4009f62c) * fVar23 * fVar2 + fVar2;
        }
      }
      if (fVar22 < 0.0) goto LAB_ram_4006d02a;
LAB_ram_4006ce1c:
      if (fVar1 < fVar22) {
        fVar22 = fVar1;
      }
    }
    iVar11 = 0;
    do {
      fVar23 = fVar22 * *(float *)(param_7 + iVar11);
      iVar12 = (int)(fVar23 * in_register_00000100);
      fVar14 = (float)iVar12 * fVar8;
      if (fVar23 < fVar14) {
        iVar12 = iVar12 + -1;
        fVar14 = (float)iVar12 * fVar8;
      }
      fVar23 = fVar23 - fVar14;
      fVar14 = fVar1;
      if (iVar12 < 1) {
        for (; iVar12 != 0; iVar12 = iVar12 + 1) {
          fVar14 = fVar14 * fVar2;
        }
      }
      else {
        do {
          iVar12 = iVar12 + -1;
          fVar14 = fVar14 + fVar14;
        } while (iVar12 != 0);
      }
      fVar23 = (fVar23 * (fVar23 * (fVar23 * (fVar23 * (fVar23 * (fVar23 * (fVar23 * 
                                                  in_register_00000100 + in_register_00000100) +
                                                  fVar7) + fVar9) + fVar10) + fVar2) + fVar1) +
               fVar1) * fVar14 * *(float *)(param_6 + iVar11);
      fVar14 = fVar3;
      if ((fVar3 <= fVar23) && (fVar14 = fVar23, in_register_00000100 < fVar23)) {
        fVar14 = in_register_00000100;
      }
      fVar14 = fVar14 * param_2;
      if (fVar5 < fVar14) {
        fVar18 = (float)FUN_ram_40000a4e();
        fVar23 = (fVar1 - fVar18) / (fVar18 + fVar1);
        fVar18 = DAT_ram_4009f670;
        fVar17 = DAT_ram_4009f674;
        fVar16 = DAT_ram_4009f678;
        fVar15 = DAT_ram_4009f67c;
        fVar20 = (float)DAT_ram_4009f680;
        fVar24 = DAT_ram_4009f680._4_4_;
        fVar21 = (float)DAT_ram_4009f688;
        if (fVar6 <= fVar23) goto LAB_ram_4006cee6;
LAB_ram_4006cfb4:
        uVar19 = (ulonglong)(uint)fVar6;
      }
      else {
        fVar23 = fVar14 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * fVar18 +
                                                                            fVar17) + fVar16) +
                                                        fVar15) + fVar20) + fVar24) + fVar21) +
                 fVar1;
        if (fVar23 < fVar6) goto LAB_ram_4006cfb4;
LAB_ram_4006cee6:
        uVar19 = (ulonglong)(uint)fVar23;
        if (in_register_00000100 < fVar23) {
          uVar19 = (ulonglong)(uint)in_register_00000100;
        }
      }
      *(ulonglong *)(param_9 + iVar11) = uVar19;
      iVar11 = iVar11 + 4;
    } while (iVar11 != 0x10);
    uVar13 = uVar13 + 1 & 0xff;
    param_9 = param_9 + 0x10;
    if (param_8 == uVar13) {
      return;
    }
  } while( true );
}

