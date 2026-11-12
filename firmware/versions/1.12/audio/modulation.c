/* NanoCore 1.12 analysis module: audio/modulation.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40071208.
 * REA evidence: ev_a49612872583bd0069b95e14d1c70571889353576bd2198c4ed25612ecb9a842
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40071a50) */

void nc_mod_init(float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  float fVar22;
  
  if (param_2 == (float *)0x0) {
    return;
  }
  pfVar9 = param_2;
  do {
    iVar8 = memset(pfVar9,0,0x80);
    fence();
    pfVar9 = (float *)(iVar8 + 0x80);
  } while (pfVar9 != param_2 + 0x64a0);
  memset(pfVar9,0,0x6c);
  fVar13 = DAT_ram_4009f7f8;
  fVar1 = DAT_ram_4009f7d4;
  fVar22 = DAT_ram_4009f7d0;
  fVar12 = DAT_ram_4009f7a8;
  fVar10 = DAT_ram_4009f7a4;
  fVar5 = DAT_ram_40099f28;
  fVar2 = DAT_ram_4009672c;
  fence();
  if (DAT_ram_40099f28 < param_1) {
    fVar12 = (param_1 * DAT_ram_4009f7cc) / DAT_ram_40099f28;
    fVar10 = param_1 * DAT_ram_4009675c * DAT_ram_4009b174;
    *param_2 = param_1;
    param_2[0xb] = fVar12;
    fVar12 = fVar22 / param_1;
    param_1 = fVar2 / param_1;
    if (fVar1 <= fVar10) {
      fVar10 = param_1 / (param_1 + DAT_ram_4009f7d8);
    }
    else if (fVar2 <= fVar10) {
      fVar10 = param_1 / (fVar2 / (fVar10 * DAT_ram_4009f090) + param_1);
    }
    else {
      fVar10 = param_1 / (param_1 + DAT_ram_4009f790);
    }
  }
  else {
    *param_2 = DAT_ram_4009f078;
    param_2[0xb] = fVar13;
  }
  fVar14 = DAT_ram_4009f7e0;
  fVar4 = DAT_ram_4009f7dc;
  fVar13 = DAT_ram_40099f94;
  fVar1 = DAT_ram_4009672c;
  fVar22 = DAT_ram_40096728;
  uVar21 = (ulonglong)(uint)DAT_ram_40096728;
  uVar17 = (ulonglong)DAT_ram_4009f0bc;
  uVar19 = (ulonglong)DAT_ram_4009f780;
  uVar20 = (ulonglong)DAT_ram_4009f7e4;
  uVar18 = (ulonglong)(uint)DAT_ram_40096760;
  param_2[8] = DAT_ram_40096728;
  param_2[9] = fVar22;
  param_2[10] = fVar22;
  param_2[0xd] = fVar10;
  param_2[0xe] = fVar1;
  param_2[0xf] = fVar4;
  param_2[0x10] = fVar14;
  *(ulonglong *)(param_2 + 0x819) = uVar21;
  *(ulonglong *)(param_2 + 0x81a) = uVar21;
  *(ulonglong *)(param_2 + 0x81b) = uVar21;
  *(ulonglong *)(param_2 + 0x81c) = uVar21;
  *(ulonglong *)(param_2 + 0x81d) = uVar21;
  *(undefined1 *)(param_2 + 0x811) = 0;
  param_2[0x816] = fVar13;
  *(ulonglong *)(param_2 + 0x817) = uVar17;
  *(ulonglong *)(param_2 + 0x818) = uVar18;
  *(ulonglong *)(param_2 + 0x81e) = uVar19;
  *(ulonglong *)(param_2 + 0x81f) = uVar20;
  fVar12 = (float)FUN_ram_40000bd8(fVar12);
  fVar12 = fVar1 - fVar12;
  if (fVar12 < 0.0) {
    fVar12 = 0.0;
  }
  else if (fVar1 < fVar12) {
    fVar12 = fVar1;
  }
  fVar10 = *param_2;
  param_2[0x820] = fVar12;
  if (fVar10 < fVar2) {
    uVar18 = (ulonglong)(uint)fVar2;
    uVar17 = (ulonglong)DAT_ram_4009f7ac;
  }
  else {
    fVar12 = DAT_ram_4009f7e8 / fVar10;
    uVar17 = FUN_ram_400009d2(fVar12);
    uVar17 = uVar17 & 0xffffffff;
    uVar18 = FUN_ram_40000712(fVar12);
  }
  fVar13 = DAT_ram_4009f230;
  fVar1 = DAT_ram_4009a4f8;
  fVar22 = DAT_ram_40096760;
  fVar12 = DAT_ram_40096728;
  *(ulonglong *)(param_2 + 0x814) = uVar17;
  *(ulonglong *)(param_2 + 0x815) = uVar18;
  param_2[0x83a] = fVar13;
  param_2[0x83b] = fVar1;
  param_2[0x83c] = fVar22;
  param_2[0x83d] = fVar12;
  param_2[0x83e] = fVar12;
  param_2[0x83f] = fVar12;
  param_2[0x840] = fVar12;
  param_2[0x838] = (float)uVar17;
  param_2[0x839] = (float)uVar18;
  param_2[0x835] = fVar2 / fVar10;
  fVar12 = DAT_ram_4009f7b0;
  fVar13 = DAT_ram_4009f580;
  fVar1 = DAT_ram_4009675c;
  fVar22 = DAT_ram_40096728;
  if (0.0 < fVar10) {
    iVar8 = 0;
    param_2[0x841] = DAT_ram_4009f7b0;
    fVar10 = DAT_ram_4009f7b8;
    fVar11 = DAT_ram_4009f7b4;
    fVar15 = DAT_ram_4009f768;
    fVar16 = DAT_ram_4009f724;
    fVar14 = DAT_ram_4009f720;
    fVar4 = DAT_ram_4009f54c;
    fVar1 = DAT_ram_4009f098;
    puVar3 = PTR_entry_ram_40096740;
    fVar22 = DAT_ram_40096728;
    pfVar9 = param_2 + 0x848;
    param_2[0x843] = DAT_ram_4009f7b4;
    param_2[0x842] = fVar10;
    *(undefined2 *)(param_2 + 0x847) = 1;
    fVar10 = ((0.0 / fVar13) * (float)puVar3 + fVar22) * fVar11 + fVar10;
    if (fVar10 < fVar2) goto LAB_ram_4007197e;
LAB_ram_40071920:
    fVar11 = fVar15;
    fVar10 = fVar14;
    if (fVar12 <= fVar4) goto LAB_ram_4007194c;
LAB_ram_4007192e:
    fVar11 = -fVar12;
LAB_ram_40071932:
    do {
      fVar12 = (float)FUN_ram_40000c5e(fVar10);
      fVar11 = fVar11 * fVar12 + fVar11 * fVar12;
      if (fVar1 <= fVar11) goto LAB_ram_4007194c;
      do {
        fVar11 = fVar1;
LAB_ram_4007194c:
        *pfVar9 = fVar11;
        iVar8 = iVar8 + 1;
        pfVar9 = pfVar9 + 1;
        if (iVar8 == 0x400) {
          *(undefined1 *)((int)param_2 + 0x211d) = 1;
          fVar10 = *param_2;
          goto LAB_ram_40071412;
        }
        fVar12 = param_2[0x841];
        fVar10 = (((float)iVar8 / fVar13) * (float)puVar3 + fVar22) * param_2[0x843] +
                 param_2[0x842];
        if (fVar2 <= fVar10) goto LAB_ram_40071920;
LAB_ram_4007197e:
        if (0.0 < fVar10) {
          fVar10 = fVar2 - fVar10;
          fVar11 = fVar16;
          if (fVar12 <= fVar4) goto LAB_ram_40071932;
          goto LAB_ram_4007192e;
        }
      } while (fVar12 <= fVar4);
      fVar11 = -fVar12;
      fVar10 = fVar2;
    } while( true );
  }
  param_2[0x843] = 0.0;
  param_2[0x842] = fVar1;
  param_2[0x841] = fVar12;
  *(undefined2 *)(param_2 + 0x847) = 0;
LAB_ram_40071412:
  fVar4 = DAT_ram_40096760;
  fVar13 = DAT_ram_4009672c;
  fVar1 = DAT_ram_40096728;
  param_2[0x1054] = DAT_ram_4009f080;
  param_2[0x1055] = fVar13;
  param_2[0x1056] = fVar4;
  *(undefined2 *)(param_2 + 0x105f) = 0;
  param_2[0x1057] = 0.0;
  param_2[0x1058] = fVar1;
  param_2[0x1059] = fVar1;
  param_2[0x105a] = fVar1;
  param_2[0x105b] = fVar1;
  param_2[0x105c] = fVar1;
  param_2[0x105d] = fVar1;
  fVar7 = DAT_ram_4009f7f4;
  fVar6 = DAT_ram_4009f7c8;
  fVar11 = DAT_ram_4009f7c4;
  fVar14 = DAT_ram_4009f7c0;
  fVar12 = DAT_ram_4009f7bc;
  fVar15 = DAT_ram_4009f754;
  fVar16 = DAT_ram_4009f750;
  if (fVar10 <= fVar5) {
    param_2[0x104f] = DAT_ram_4009f7f0;
    param_2[0x1052] = fVar15;
    param_2[0x1053] = fVar16;
    param_2[0x106d] = fVar4;
    param_2[0x106e] = fVar4;
    *(undefined1 *)(param_2 + 0x1074) = 0;
    param_2[0x106f] = fVar1;
    param_2[0x1070] = fVar1;
    param_2[0x1071] = fVar1;
    param_2[0x1072] = fVar1;
    param_2[0x1073] = fVar1;
    param_2[0x1063] = fVar7;
    param_2[0x1066] = fVar11;
    param_2[0x1067] = fVar6;
  }
  else {
    fVar12 = DAT_ram_4009f758 / fVar10;
    param_2[0x104f] = fVar12;
    fVar15 = DAT_ram_4009f7c8;
    fVar16 = DAT_ram_4009f7c4;
    fVar14 = DAT_ram_4009f750;
    if (fVar13 <= fVar10) {
      fVar13 = (float)FUN_ram_40000712(fVar12);
      fVar14 = (float)FUN_ram_400009d2(fVar12);
      fVar12 = DAT_ram_4009f800;
      param_2[0x1053] = fVar13;
      param_2[0x1052] = fVar14;
      fVar12 = fVar12 / fVar10;
      param_2[0x106d] = fVar4;
      param_2[0x106e] = fVar4;
      *(undefined1 *)(param_2 + 0x1074) = 0;
      param_2[0x106f] = fVar1;
      param_2[0x1070] = fVar1;
      param_2[0x1071] = fVar1;
      param_2[0x1072] = fVar1;
      param_2[0x1073] = fVar1;
      param_2[0x1063] = fVar12;
      fVar15 = (float)FUN_ram_40000712(fVar12);
      fVar16 = (float)FUN_ram_400009d2(fVar12);
    }
    else {
      fVar12 = DAT_ram_4009f800 / fVar10;
      param_2[0x1052] = DAT_ram_4009f754;
      param_2[0x1053] = fVar14;
      param_2[0x106d] = fVar4;
      param_2[0x106e] = fVar4;
      *(undefined1 *)(param_2 + 0x1074) = 0;
      param_2[0x106f] = fVar1;
      param_2[0x1070] = fVar1;
      param_2[0x1071] = fVar1;
      param_2[0x1072] = fVar1;
      param_2[0x1073] = fVar1;
      param_2[0x1063] = fVar12;
    }
    fVar14 = DAT_ram_4009f734;
    fVar1 = fVar10 * DAT_ram_4009f7fc;
    param_2[0x1066] = fVar16;
    param_2[0x1067] = fVar15;
    fVar1 = fVar1 / fVar5;
    fVar12 = DAT_ram_4009f730;
    if (fVar1 <= fVar14) {
      if (0.0 <= fVar1) {
        fVar12 = fVar1 * (float)PTR_entry_ram_40096740 + DAT_ram_40099f38;
        fVar14 = fVar1;
      }
      else {
        fVar14 = 0.0;
        fVar12 = DAT_ram_40099f38;
      }
    }
  }
  fVar10 = fVar10 * DAT_ram_4009f7ec;
  param_2[0x106b] = fVar12;
  param_2[0x1069] = fVar12;
  param_2[0x106a] = fVar14;
  param_2[0x1068] = fVar14;
  pfVar9 = param_2 + 0x11;
  fVar12 = (float)FUN_ram_40000bd8(fVar22 / fVar10);
  param_2[0x106c] = fVar2 - fVar12;
  FUN_ram_40074cf0(*param_2,param_2 + 0x50b2);
  FUN_ram_40071d8a(*param_2,param_2 + 0x50ab);
  FUN_ram_400725f4(*param_2,param_2 + 0x5cb5);
  do {
    memset(pfVar9,0,0x80);
    fence();
    pfVar9 = pfVar9 + 0x20;
  } while (param_2 + 0x7f1 != pfVar9);
  memset(param_2 + 0x7f1,0,0x80);
  fVar12 = DAT_ram_4009f76c;
  fence();
  param_2[5] = DAT_ram_4009f770;
  param_2[4] = fVar12;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  memset(param_2 + 0x823,0,0x20);
  memset(param_2 + 0x82b,0,0x20);
  uVar17 = (ulonglong)(uint)DAT_ram_4009672c;
  param_2[0x833] = 0.0;
  param_2[0x821] = 0.0;
  param_2[0x834] = 0.0;
  param_2[0x822] = 0.0;
  param_2[0x812] = 0.0;
  *(ulonglong *)(param_2 + 0x813) = uVar17;
  pfVar9 = param_2 + 0xc48;
  do {
    iVar8 = memset(pfVar9,0,0x80);
    fence();
    pfVar9 = (float *)(iVar8 + 0x80);
  } while (pfVar9 != param_2 + 0x1028);
  memset(param_2 + 0x1028,0,0x80);
  fVar12 = DAT_ram_4009672c;
  fence();
  param_2[0x1048] = 0.0;
  param_2[0x104a] = 0.0;
  param_2[0x104c] = 0.0;
  param_2[0x1049] = 0.0;
  param_2[0x104b] = 0.0;
  param_2[0x104d] = 0.0;
  param_2[0x846] = 0.0;
  param_2[0x836] = 0.0;
  param_2[0x837] = fVar12;
  param_2[0x844] = 0.0;
  param_2[0x845] = 0.0;
  param_2[0x104e] = 0.0;
  param_2[0x105e] = fVar12;
  param_2[0x1050] = 0.0;
  param_2[0x1051] = fVar12;
  pfVar9 = param_2 + 0x1077;
  do {
    iVar8 = memset(pfVar9,0,0x80);
    fence();
    pfVar9 = (float *)(iVar8 + 0x80);
  } while (pfVar9 != param_2 + 0x5057);
  memset(param_2 + 0x5057,0,0x80);
  fVar12 = DAT_ram_4009f774;
  fence();
  param_2[0x1065] = DAT_ram_4009672c;
  param_2[0x1060] = 0.0;
  *(undefined1 *)(param_2 + 0x1061) = 0;
  *(undefined2 *)((int)param_2 + 0x4186) = 0;
  param_2[0x1062] = 0.0;
  param_2[0x1064] = 0.0;
  param_2[0x5077] = fVar12;
  memset(param_2 + 0x5078,0,0x20);
  memset(param_2 + 0x5080,0,0x20);
  *(undefined1 *)(param_2 + 0x5088) = 0;
  *(undefined1 *)((int)param_2 + 0x14221) = 0;
  *(undefined1 *)((int)param_2 + 0x14222) = 0;
  *(undefined1 *)((int)param_2 + 0x14223) = 0;
  *(undefined1 *)(param_2 + 0x5089) = 0;
  *(undefined1 *)((int)param_2 + 0x14225) = 0;
  *(undefined1 *)((int)param_2 + 0x14226) = 0;
  *(undefined1 *)((int)param_2 + 0x14227) = 0;
  memset(param_2 + 0x508a,0,0x20);
  *(undefined2 *)(param_2 + 0x50aa) = 0;
  *(undefined1 *)((int)param_2 + 0x142aa) = 0;
  FUN_ram_40071d38(param_2 + 0x50ab);
  FUN_ram_40074d8c(param_2 + 0x50b2);
  FUN_ram_40072570(param_2 + 0x5cb5);
  return;
}


/* NanoCore 1.12, address 0x40071aa4.
 * REA evidence: ev_ec6051a0751d7b3fac3ea0c9250a8fc902ffea0ae30e39958f36890a919fac65
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void nc_mod_default_parameters(ulonglong *param_1,uint param_2,uint param_3)

{
  if ((param_1 == (ulonglong *)0x0) || (param_2 == 0)) {
    return;
  }
  memset(param_1,0,param_2 << 2);
  if (param_3 < 5) {
    if (param_3 == 1) {
      *param_1 = (ulonglong)DAT_ram_4009f710;
      if (param_2 == 1) {
        return;
      }
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009f70c;
      if (param_2 == 2) {
        return;
      }
      param_1[1] = (ulonglong)DAT_ram_4009f0bc;
      return;
    }
    if (param_3 == 2) {
      *param_1 = (ulonglong)DAT_ram_4009f710;
      if (param_2 == 1) {
        return;
      }
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009f718;
      if (param_2 == 2) {
        return;
      }
      param_1[1] = (ulonglong)DAT_ram_4009a4f8;
      return;
    }
    if (param_3 != 3) {
      if (param_3 != 4) {
        *param_1 = (ulonglong)DAT_ram_4009f73c;
        if (param_2 == 1) {
          return;
        }
        *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009672c;
        return;
      }
      *param_1 = (ulonglong)DAT_ram_4009f72c;
      if (param_2 == 1) {
        return;
      }
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40099f34;
      if (param_2 != 2) {
        *(undefined4 *)(param_1 + 1) = 0;
      }
      if (param_2 < 4) {
        return;
      }
      *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_40096760;
      return;
    }
    *param_1 = (ulonglong)DAT_ram_4009f728;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009f080;
      if (param_2 != 2) {
        *(undefined4 *)(param_1 + 1) = 0;
      }
      if (3 < param_2) {
        *(undefined4 *)((int)param_1 + 0xc) = 0;
      }
    }
  }
  else {
    if (param_3 != 8) {
      if (param_3 == 9) {
        FUN_ram_40071e10(param_1,param_2);
        return;
      }
      if (param_3 != 10) {
        if (param_3 != 0xb) {
          if (param_3 == 0xc) {
            *param_1 = CONCAT44(DAT_ram_40096760,DAT_ram_4009675c);
            if (param_2 != 1) {
              *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009b18c;
              if (param_2 != 2) {
                param_1[1] = (ulonglong)DAT_ram_4009f230;
              }
              if (3 < param_2) {
                *(ulonglong *)((int)param_1 + 0xc) = CONCAT44(DAT_ram_40096760,DAT_ram_4009675c);
              }
            }
            if (param_2 < 5) {
              return;
            }
            param_1[2] = (ulonglong)DAT_ram_4009b144;
            return;
          }
          if (param_3 != 0x11) {
            return;
          }
        }
        FUN_ram_40072666(param_1,param_2,param_3);
        return;
      }
      FUN_ram_40074de6(param_1,param_2);
      return;
    }
    *param_1 = (ulonglong)DAT_ram_4009f804;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009675c;
      if (param_2 != 2) {
        param_1[1] = (ulonglong)DAT_ram_4009672c;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_4009672c;
      }
    }
  }
  if (4 < param_2) {
    param_1[2] = (ulonglong)DAT_ram_4009672c;
  }
  return;
}


/* NanoCore 1.12, address 0x40071ca6.
 * REA evidence: ev_6efb42c209dec934bbde1a49d8678967be3e1ad2d11f71c599a1567cf800158a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void nc_chorus_default_parameters(ulonglong *param_1,int param_2)

{
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_4009f73c;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009672c;
    }
    return;
  }
  return;
}


