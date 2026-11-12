/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4000d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4000d0ba.
 * REA evidence: ev_3110683af02a3b8aae1ec1b8f4c0dedee368b337505362c58a3ffacacfff0f8e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000d0ba(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_400086ec();
  iVar2 = nc_dsp_active_bank(0x3004ee20);
  iVar3 = nc_dsp_inactive_bank(0x3004ee20);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000303c(iVar3,iVar2,0x308);
    if (*(int *)(iVar2 + 0x2b8) != 9) {
      *(undefined1 *)(iVar3 + 700) = 0;
      FUN_ram_40069600(iVar3 + 0x2c0,0xc,0);
    }
    *(undefined4 *)(iVar3 + 0x2b8) = 9;
    *(undefined4 *)(iVar3 + 0x2fc) = _DAT_ram_3004f734;
    FUN_ram_40007e94(iVar3,9);
    *(undefined4 *)(iVar3 + param_2 * 4 + 0x2c0) = param_1;
    nc_dsp_publish_bank(0x3004ee20);
    uVar1 = 0;
  }
  FUN_ram_40007bb6();
  return uVar1;
}


/* NanoCore 1.12, address 0x4000d168.
 * REA evidence: ev_4351fef96353b33a359e9cde675f6527f366048ce89eeb21e8535312344f9da3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000d168(undefined4 param_1)

{
  FUN_ram_40008838(FUN_ram_40007fea,param_1);
  return;
}


/* NanoCore 1.12, address 0x4000d176.
 * REA evidence: ev_192bd67b0abf31218a0f2ebceb9a0d9a1012150676955a5e664d2d885ebe96d6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000d176(uint param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_400086ec();
  iVar2 = nc_dsp_active_bank(0x3004ee20);
  iVar3 = nc_dsp_inactive_bank(0x3004ee20);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000303c(iVar3,iVar2,0x308);
    if (*(int *)(iVar2 + 0xc) != 1) {
      *(undefined1 *)(iVar3 + 0x10) = 0;
      FUN_ram_40008d30(iVar3 + 0x14);
    }
    *(undefined4 *)(iVar3 + 0xc) = 1;
    *(undefined4 *)(iVar3 + 0x50) = 0x300518dc;
    *(undefined1 *)(iVar3 + 0x10) = 0;
    FUN_ram_40007e94(iVar3,0);
    *(ulonglong *)(iVar3 + param_2 * 4 + 0x14) = (ulonglong)param_1;
    nc_dsp_publish_bank(0x3004ee20);
    uVar1 = 0;
  }
  FUN_ram_40007bb6();
  return uVar1;
}


/* NanoCore 1.12, address 0x4000d21e.
 * REA evidence: ev_48c643e100b1b555b0dffec4ae291f821c8c59a3e6a2b0ab25368f143754184a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000d21e(uint param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = _DAT_ram_300517e0;
  FUN_ram_400086ec();
  iVar3 = nc_dsp_active_bank(0x3004ee20);
  iVar4 = nc_dsp_inactive_bank(0x3004ee20);
  uVar2 = 0xffffffff;
  if (((iVar3 != 0) && (uVar2 = 0xffffffff, iVar4 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000303c(iVar4,iVar3,0x308);
    *(undefined4 *)(iVar4 + 0x58) = 2;
    *(undefined4 *)(iVar4 + 0x9c) = uVar1;
    FUN_ram_40007e94(iVar4,1);
    *(ulonglong *)(iVar4 + param_2 * 4 + 0x60) = (ulonglong)param_1;
    nc_dsp_publish_bank(0x3004ee20);
    uVar2 = 0;
  }
  FUN_ram_40007bb6();
  return uVar2;
}


/* NanoCore 1.12, address 0x4000d2ac.
 * REA evidence: ev_e785f34fed31573ddc35dc6096b127b55878d749b49f7459f62e979eb1bf701a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000d2ac(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_400086ec();
  iVar2 = nc_dsp_active_bank(0x3004ee20);
  iVar3 = nc_dsp_inactive_bank(0x3004ee20);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000303c(iVar3,iVar2,0x308);
    if (*(int *)(iVar2 + 0xa4) != 3) {
      *(undefined1 *)(iVar3 + 0xa8) = 6;
      FUN_ram_40073e58(iVar3 + 0xac,0xc,6);
    }
    *(undefined4 *)(iVar3 + 0xa4) = 3;
    *(undefined4 *)(iVar3 + 0xe8) = _DAT_ram_3005181c;
    FUN_ram_40007e94(iVar3,2);
    *(undefined4 *)(iVar3 + param_2 * 4 + 0xac) = param_1;
    nc_dsp_publish_bank(0x3004ee20);
    uVar1 = 0;
  }
  FUN_ram_40007bb6();
  return uVar1;
}


/* NanoCore 1.12, address 0x4000d35c.
 * REA evidence: ev_6ec89c10dfd6ed5a7865c046ac113a2589ee33d1ecc064a870078f4e6b55af41
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000d35c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char local_1c [12];
  
  FUN_ram_400086ec();
  iVar1 = nc_dsp_active_bank(0x3004ee20);
  iVar2 = nc_dsp_inactive_bank(0x3004ee20);
  local_1c[0] = '\0';
  local_1c[1] = '\0';
  local_1c[2] = '\0';
  local_1c[3] = '\0';
  local_1c[4] = '\0';
  local_1c[5] = '\0';
  local_1c[6] = '\0';
  local_1c[7] = '\0';
  local_1c[8] = '\0';
  local_1c[9] = '\0';
  if ((((param_1 == 0) || (9 < (param_2 - 1 & 0xff))) || (iVar1 == 0)) || (iVar2 == 0)) {
LAB_ram_4000d396:
    uVar3 = 0xffffffff;
  }
  else {
    uVar5 = 0;
    do {
      uVar4 = (uint)*(byte *)(param_1 + uVar5);
      if ((9 < uVar4) || (local_1c[uVar4] != '\0')) goto LAB_ram_4000d396;
      uVar5 = uVar5 + 1;
      local_1c[uVar4] = '\x01';
    } while ((uVar5 & 0xff) < param_2);
    iVar1 = FUN_ram_4000303c(iVar2,iVar1,0x308);
    uVar5 = 0;
    do {
      *(undefined1 *)(iVar1 + uVar5) = *(undefined1 *)(param_1 + uVar5);
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xff) < param_2);
    iVar2 = 0;
    do {
      if (local_1c[iVar2] == '\0') {
        *(char *)(iVar1 + param_2) = (char)iVar2;
        param_2 = param_2 + 1 & 0xff;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 10);
    nc_dsp_publish_bank(0x3004ee20);
    uVar3 = 0;
  }
  FUN_ram_40007bb6();
  return uVar3;
}


/* NanoCore 1.12, address 0x4000d436.
 * REA evidence: ev_6c7a27b3b91ed702f86b249b0c7019e027fa0714714592dfefa3078009ebbe30
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000d436(void)

{
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4000d43a.
 * REA evidence: ev_dfef946a080fe4664bff9464c9d4f557b008ad4cbd6d98abe03a96ca56211f81
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000d43a(void)

{
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4000d43e.
 * REA evidence: ev_d39db72131a2d616e151fa2952d09b570d323cbfe8e0bb9b91f37ee901a97fb4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000d43e(void)

{
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4000d442.
 * REA evidence: ev_a188244b4927a7e03fe727e77ff077c11ec400c7f8d3044c45f8729ed875da62
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000d442(int param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  byte bVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined2 uVar20;
  uint uVar21;
  int *piVar22;
  char cVar23;
  undefined4 uVar24;
  int *piVar25;
  undefined1 uStack_69;
  char acStack_68 [12];
  byte local_5c [12];
  
  uStack_69 = 0;
  iVar16 = FUN_ram_40008728(&uStack_69);
  if (iVar16 != 0) {
    return 0xffffffff;
  }
  FUN_ram_400086ec();
  iVar16 = 0;
  if (param_1 != 0) {
    do {
      if (*(int *)(param_1 + 0xc + iVar16 * 0x4c) == 3) {
        iVar16 = FUN_ram_40008b28(*(undefined1 *)(iVar16 * 0x4c + param_1 + 0x10));
        if (iVar16 != 0) goto LAB_ram_4000d4a2;
        break;
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != 10);
    iVar16 = nc_dsp_active_bank(0x3004ee20);
    iVar17 = nc_dsp_inactive_bank(0x3004ee20);
    if (iVar17 != 0) {
      FUN_ram_4000303c(iVar17,param_1,0x308);
      uVar20 = 0x13;
      if (DAT_ram_30051d6c == '\0') {
        uVar20 = 0;
      }
      *(undefined2 *)(iVar17 + 0x304) = uVar20;
      acStack_68[0] = '\0';
      acStack_68[1] = '\0';
      acStack_68[2] = '\0';
      acStack_68[3] = '\0';
      acStack_68[4] = '\0';
      acStack_68[5] = '\0';
      acStack_68[6] = '\0';
      acStack_68[7] = '\0';
      acStack_68[8] = '\0';
      acStack_68[9] = '\0';
      iVar19 = 0;
      uVar21 = 0;
      do {
        uVar18 = (uint)*(byte *)(iVar17 + iVar19);
        if ((uVar18 < 10) && (acStack_68[uVar18] == '\0')) {
          local_5c[uVar21] = *(byte *)(iVar17 + iVar19);
          acStack_68[uVar18] = '\x01';
          uVar21 = uVar21 + 1 & 0xff;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 != 10);
      iVar19 = 0;
      do {
        if (acStack_68[iVar19] == '\0') {
          local_5c[uVar21] = (byte)iVar19;
          uVar21 = uVar21 + 1 & 0xff;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 != 10);
      FUN_ram_4000303c(iVar17,local_5c,10);
      FUN_ram_4000771a(0);
      FUN_ram_40007780(0);
      FUN_ram_40007dac(0);
      FUN_ram_40007918(0);
      FUN_ram_400078dc(0);
      FUN_ram_400078fa(0);
      FUN_ram_400078be(0);
      FUN_ram_40007936(0);
      FUN_ram_40007954(0);
      FUN_ram_40007972(0);
      fVar13 = DAT_ram_4009676c;
      uVar24 = DAT_ram_4009672c;
      piVar25 = (int *)(iVar17 + 0xc);
      piVar22 = (int *)(iVar16 + 0xc);
      bVar7 = false;
      bVar12 = false;
      bVar11 = false;
      bVar6 = false;
      bVar10 = false;
      bVar9 = false;
      bVar8 = false;
      bVar5 = false;
      bVar15 = false;
      bVar4 = false;
      bVar3 = false;
      cVar23 = '\0';
      do {
        switch(*piVar25) {
        case 1:
          if ((bVar3) || (iVar19 = nc_model_is_ready(0x30051880), iVar19 == 0))
          goto switchD_ram_4000d606_default;
          piVar25[0x11] = 0x300518dc;
          *(undefined1 *)(piVar25 + 1) = 0;
          FUN_ram_4000771a(*(char *)((int)piVar25 + 5) != '\0');
          if (*(char *)((int)piVar25 + 5) == '\0') {
            nc_amp_drive_set_crossfade(uVar24,0x300518dc);
          }
          else {
            nc_amp_drive_invalidate_parameter_cache(0x300518dc);
            if ((_DAT_ram_30051968 != 0) || (_DAT_ram_30051960 < DAT_ram_4009676c)) {
              nc_amp_drive_schedule_crossfade(uVar24,0x300518dc,0x10);
            }
          }
          bVar3 = true;
          break;
        case 2:
          if (bVar5) goto switchD_ram_4000d606_default;
          piVar25[0x11] = _DAT_ram_300517e0;
          FUN_ram_40007dac(*(char *)((int)piVar25 + 5) != '\0');
          if (*(char *)((int)piVar25 + 5) == '\0') {
            FUN_ram_40007876(uVar24);
          }
          else if ((*(int *)(_DAT_ram_300517e0 + 0x34) != 0) ||
                  ((float)*(undefined8 *)(_DAT_ram_300517e0 + 0x2c) < fVar13)) {
            FUN_ram_400077a2(uVar24,0x10);
          }
          bVar5 = true;
          break;
        case 3:
          if (bVar8) goto switchD_ram_4000d606_default;
          if (7 < *(byte *)(piVar25 + 1)) {
            *(undefined1 *)(piVar25 + 1) = 6;
          }
          piVar25[0x11] = _DAT_ram_3005181c;
          FUN_ram_40007918(*(char *)((int)piVar25 + 5) != '\0');
          bVar8 = true;
          if ((*(char *)((int)piVar25 + 5) != '\0') &&
             (((iVar16 == 0 || (*piVar22 != 3)) ||
              ((*(char *)((int)piVar22 + 5) == '\0' || ((char)piVar22[1] != (char)piVar25[1])))))) {
            FUN_ram_40073d9e(_DAT_ram_3005181c);
            bVar8 = true;
          }
          break;
        case 4:
          if (bVar10) goto switchD_ram_4000d606_default;
          piVar25[0x11] = _DAT_ram_30051814;
          FUN_ram_400078fa(*(char *)((int)piVar25 + 5) != '\0');
          bVar10 = true;
          if (*(char *)((int)piVar25 + 5) != '\0') {
            FUN_ram_40070fd8(_DAT_ram_30051814);
          }
          break;
        case 5:
          if (bVar9) goto switchD_ram_4000d606_default;
          piVar25[0x11] = _DAT_ram_3004e524;
          FUN_ram_400078dc(*(char *)((int)piVar25 + 5) != '\0');
          bVar9 = true;
          if (*(char *)((int)piVar25 + 5) != '\0') {
            FUN_ram_40065c3e(_DAT_ram_3004e524,FUN_ram_40007dde);
            *(char *)(_DAT_ram_3004e524 + 0x20) = (char)piVar25[1];
          }
          break;
        case 6:
          if (bVar11) goto switchD_ram_4000d606_default;
          piVar25[0x11] = _DAT_ram_3004f714;
          FUN_ram_40007936(*(char *)((int)piVar25 + 5) != '\0');
          bVar11 = true;
          if (*(char *)((int)piVar25 + 5) != '\0') {
            FUN_ram_40066d64(_DAT_ram_3004f714);
          }
          break;
        case 7:
          if (bVar6) goto switchD_ram_4000d606_default;
          piVar25[0x11] = _DAT_ram_3004f724;
          FUN_ram_400078be(*(char *)((int)piVar25 + 5) != '\0');
          bVar6 = true;
          if ((*(char *)((int)piVar25 + 5) != '\0') &&
             ((((iVar16 == 0 || (*(char *)((int)piVar22 + 5) == '\0')) || (*piVar22 != *piVar25)) ||
              (bVar6 = true, (char)piVar22[1] != (char)piVar25[1])))) {
            bVar6 = true;
            FUN_ram_40068da0(_DAT_ram_3004f724);
          }
          break;
        case 8:
          if (cVar23 == '\x06') {
            if ((bVar4) || (cVar1 = *(char *)(iVar17 + 0x1d8), 3 < (byte)(cVar1 - 8U))) {
              *(undefined4 *)(iVar17 + 0x1d4) = 0;
              *(undefined1 *)(iVar17 + 0x1d9) = 0;
              *(undefined4 *)(iVar17 + 0x218) = 0;
            }
            else {
              *(undefined4 *)(iVar17 + 0x218) = _DAT_ram_3005180c;
              FUN_ram_400078fa(*(char *)(iVar17 + 0x1d9) != '\0');
              if (*(char *)(iVar17 + 0x1d9) != '\0') {
                FUN_ram_40008706(cVar1);
              }
              bVar4 = true;
            }
          }
          else {
            if (bVar15) goto switchD_ram_4000d606_default;
            bVar2 = *(byte *)(piVar25 + 1);
            bVar14 = 0;
            if (((bVar2 < 0xc) && (bVar14 = bVar2, 7 < bVar2)) ||
               ((((DAT_ram_3004ab1e == (byte)(bVar14 + 0x1e) &&
                  (iVar19 = nc_model_is_ready(0x3004e9bc), iVar19 != 0)) ||
                 (iVar19 = nc_fx2_load_drive_slot(bVar14 + 0x1e), iVar19 == 0)) &&
                (iVar19 = nc_model_is_ready(0x3004e9bc), iVar19 != 0)))) {
              bVar15 = *(char *)((int)piVar25 + 5) != '\0';
            }
            else {
              *(undefined1 *)((int)piVar25 + 5) = 0;
              bVar15 = false;
            }
            FUN_ram_40007780(bVar15);
            DAT_ram_3004f730 = bVar14;
            piVar25[0x11] = _DAT_ram_3004f72c;
            *(byte *)(piVar25 + 1) = bVar14;
            if (*(char *)((int)piVar25 + 5) == '\0') {
              nc_amp_drive_set_crossfade(uVar24,0x3004e52c);
            }
            else if (bVar14 == 8) {
              FUN_ram_4006c7ca();
            }
            else if (bVar14 == 9) {
              FUN_ram_4006c7d4();
            }
            else if (bVar14 == 10) {
              FUN_ram_4006c878();
            }
            else if (bVar14 == 0xb) {
              FUN_ram_4006c8d8();
            }
            else {
              nc_amp_drive_invalidate_parameter_cache(0x3004e52c);
              if ((_DAT_ram_3004e5b8 != 0) || (_DAT_ram_3004e5b0 < fVar13)) {
                nc_amp_drive_schedule_crossfade(uVar24,0x3004e52c,0x10);
              }
            }
            bVar15 = true;
          }
          break;
        case 9:
          if (bVar7) goto switchD_ram_4000d606_default;
          piVar25[0x11] = _DAT_ram_3004f734;
          FUN_ram_40007972(*(char *)((int)piVar25 + 5) != '\0');
          bVar7 = true;
          if ((*(char *)((int)piVar25 + 5) != '\0') &&
             ((((iVar16 == 0 || (*(char *)((int)piVar22 + 5) == '\0')) || (*piVar22 != *piVar25)) ||
              (bVar7 = true, (char)piVar22[1] != (char)piVar25[1])))) {
            bVar7 = true;
            FUN_ram_40068da0(_DAT_ram_3004f734);
          }
          break;
        case 10:
          if (bVar12) goto switchD_ram_4000d606_default;
          piVar25[0x11] = _DAT_ram_3004f71c;
          FUN_ram_40007954(*(char *)((int)piVar25 + 5) != '\0');
          bVar12 = true;
          if (*(char *)((int)piVar25 + 5) != '\0') {
            FUN_ram_40068c92(_DAT_ram_3004f71c);
          }
          break;
        default:
switchD_ram_4000d606_default:
          *piVar25 = 0;
          *(undefined1 *)((int)piVar25 + 5) = 0;
          piVar25[0x11] = 0;
        }
        FUN_ram_400088e4(piVar25);
        cVar23 = cVar23 + '\x01';
        piVar25 = piVar25 + 0x13;
        piVar22 = piVar22 + 0x13;
      } while (cVar23 != '\n');
      nc_dsp_publish_bank(0x3004ee20);
      uVar24 = 0;
      goto LAB_ram_4000d4a4;
    }
  }
LAB_ram_4000d4a2:
  uVar24 = 0xffffffff;
LAB_ram_4000d4a4:
  FUN_ram_40007bb6();
  FUN_ram_4000886c(uStack_69);
  return uVar24;
}


/* NanoCore 1.12, address 0x4000da86.
 * REA evidence: ev_58e12ce4c3956693266e4108c5aff072d026564fcc3f454c0627212abd1bf326
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000da86(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_ram_400086ec();
  iVar1 = nc_dsp_active_bank(0x3004ee20);
  iVar2 = nc_dsp_inactive_bank(0x3004ee20);
  uVar3 = 0xffffffff;
  if (((param_1 != 0) && (iVar1 != 0)) && (iVar2 != 0)) {
    FUN_ram_4000303c(iVar2,iVar1,0x308);
    param_1 = param_1 + 0x44;
    iVar1 = iVar2 + 0x44;
    do {
      FUN_ram_4000303c(iVar1 + -0x30,param_1 + -0x30,0x30);
      iVar4 = iVar1 + 0x4c;
      FUN_ram_4000303c(iVar1,param_1,0xc);
      param_1 = param_1 + 0x4c;
      iVar1 = iVar4;
    } while (iVar4 != iVar2 + 0x33c);
    nc_dsp_publish_bank(0x3004ee20);
    uVar3 = 0;
  }
  FUN_ram_40007bb6();
  return uVar3;
}


/* NanoCore 1.12, address 0x4000db16.
 * REA evidence: ev_eadcbdd1d2034b0931ddec1aab261a77acd39432ee8d8bdbbaf1b8fb7fb41cd7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000db16(void)

{
  int iVar1;
  
  if (DAT_ram_3004f6e4 == '\0') {
    return -1;
  }
  iVar1 = FUN_ram_40006382();
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_ram_40004a22(0x3004f6b4,0xffffffff);
    iVar1 = -(uint)(iVar1 != 0);
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4000db2c.
 * REA evidence: ev_77b28548f78d4c871c6413bf0eb00057312e8cae3cbe23a8a429d8fa1cbc0d89
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000db2c(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40006382();
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_ram_40004a22(0x3004f6b4,0xffffffff);
    iVar1 = -(uint)(iVar1 != 0);
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4000db4e.
 * REA evidence: ev_f907ad44a1bbb12c29b17d50e8e7ebdd13809d6fa48de38b1f7c215ee1c7cff4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000db4e(void)

{
  FUN_ram_40004b14(0x3004f6b4);
  return;
}


/* NanoCore 1.12, address 0x4000db5a.
 * REA evidence: ev_c704b8f0d03aa600124b42384cd45c1ad786179bb68debef0ff44bcb541a0779
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000db5a(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40006382();
  if ((((DAT_ram_3004f6e4 != '\0') && (iVar1 != 0)) && (_DAT_ram_3004ea18 != iVar1)) &&
     (iVar2 = FUN_ram_40004a22(0x3004f6b4,0xffffffff), iVar2 == 0)) {
    _DAT_ram_3004ea18 = iVar1;
    FUN_ram_400098bc();
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4000dbaa.
 * REA evidence: ev_803e6d5e6446522f2d2bc28723558656769315b4eac2854a64d83e3574f9b104
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000dbaa(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40006382();
  if (iVar1 == _DAT_ram_3004ea18) {
    _DAT_ram_3004ea18 = 0;
    FUN_ram_40004b14(0x3004f6b4);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4000dbdc.
 * REA evidence: ev_5a646db51f3adb9456189b96155c86f224a1d696c8a09974e3b366e81379af3f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000dbdc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40007c9a();
  if (iVar1 == 0) {
    FUN_ram_400098bc();
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4000dbfc.
 * REA evidence: ev_1ab6ffcddbac17466647aa55fa5ce0e4123a27dc70ec6c6669744232bde7497a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000dbfc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    FUN_ram_400086ec();
    iVar1 = nc_dsp_active_bank(0x3004ee20);
    if (iVar1 == 0) {
      FUN_ram_40007bb6();
      uVar2 = 0xffffffff;
    }
    else {
      FUN_ram_4000303c(param_1,iVar1,0x308);
      FUN_ram_40007bb6();
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4000dc3e.
 * REA evidence: ev_2735241f38bc415d706da34be41f3d3f762fbf0abf3c4cf25a657a40873471d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000dc3e(void)

{
  DAT_ram_30058c84 = 0;
  _DAT_ram_3004f798 = 0;
  return;
}


/* NanoCore 1.12, address 0x4000dc50.
 * REA evidence: ev_db4922fd802910c8967cd016884a1127a5f1ca0f2f367b434256329535d5f28a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4000de7e) */
/* WARNING: Removing unreachable block (ram,0x4000de2a) */
/* WARNING: Removing unreachable block (ram,0x4000dc80) */
/* WARNING: Removing unreachable block (ram,0x4000dc9e) */
/* WARNING: Removing unreachable block (ram,0x4000de66) */
/* WARNING: Removing unreachable block (ram,0x4000deac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4000dc50(int param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  undefined2 uVar27;
  uint uVar28;
  uint uVar29;
  undefined2 uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  
  uVar31 = _DAT_ram_3004f690;
  if (_DAT_ram_3004f690 == 0) {
    uVar31 = 0xac44;
  }
  uVar32 = uVar31 / 1000;
  _DAT_ram_3004f78c = _DAT_ram_3004f78c + 1;
  _DAT_ram_3004f798 = uVar31 % 1000 + _DAT_ram_3004f798;
  if (999 < _DAT_ram_3004f798) {
    _DAT_ram_3004f798 = _DAT_ram_3004f798 - 1000;
    uVar32 = uVar32 + 1;
  }
  if (param_2 >> 2 < uVar32) {
    uVar32 = param_2 >> 2;
  }
  if (uVar32 == 0) {
    return 0;
  }
  iVar25 = (uVar32 & 0x3fff) << 2;
  if (DAT_ram_30058c84 == '\0') {
    uVar28 = 0x1770000;
    if (uVar31 == 0xac44) {
      uVar28 = 0x1588800;
    }
    uVar31 = FUN_ram_40038d2c(_DAT_ram_3004f740);
    if (uVar31 == 0) {
      uVar31 = uVar28;
    }
    DAT_ram_3004ac7c = FUN_ram_40003bf8(uVar31 << 0x18,uVar31 >> 8,uVar28,0);
    _DAT_ram_3004f790 = 0;
    _DAT_ram_3004f77c = 0x20000;
    _DAT_ram_3004f79c = 0x20000;
    _DAT_ram_3004f780 = 0;
    DAT_ram_3004ac84 = DAT_ram_3004ac7c;
    memset(0x30054c80,0,0x2c);
    _DAT_ram_30058c80 = 0;
    _DAT_ram_30058c82 = 0x16;
    DAT_ram_30058c84 = '\x01';
LAB_ram_4000dd74:
    _DAT_ram_3004f794 = _DAT_ram_3004f794 + 1;
  }
  else {
    uVar26 = (uint)_DAT_ram_30058c80;
    uVar28 = (_DAT_ram_30058c82 - uVar26 & 0x1fff) >> 1;
    if (DAT_ram_30058c84 == '\x01') {
      if ((_DAT_ram_30058c82 - uVar26 & 0x1c00) == 0) goto LAB_ram_4000dd74;
      _DAT_ram_3004f77c = uVar28 << 8;
      DAT_ram_30058c84 = '\x02';
    }
    if (uVar28 < DAT_ram_3004ac80) {
      DAT_ram_3004ac80 = uVar28;
    }
    if (_DAT_ram_3004f784 < uVar28) {
      _DAT_ram_3004f784 = uVar28;
    }
    _DAT_ram_3004f77c = (int)(uVar28 * 0x100 - _DAT_ram_3004f77c) / 0x100 + _DAT_ram_3004f77c;
    if (_DAT_ram_3004f780 < 0x400) {
      _DAT_ram_3004f780 = _DAT_ram_3004f780 + 1;
      _DAT_ram_3004f79c = _DAT_ram_3004f77c;
    }
    if (uVar31 << 4 == 0) {
      uVar31 = 0xffffffff;
    }
    else {
      uVar31 = 0x1000000 / (uVar31 << 4);
    }
    uVar31 = ((_DAT_ram_3004f77c - _DAT_ram_3004f79c) / 0x100) * uVar31;
    uVar29 = DAT_ram_3004ac7c / 500;
    if ((int)uVar29 < (int)uVar31) {
      uVar31 = uVar29;
    }
    uVar35 = -uVar29;
    if ((int)-uVar29 < (int)uVar31) {
      uVar35 = uVar31;
    }
    uVar31 = (int)((uVar35 + DAT_ram_3004ac7c) - DAT_ram_3004ac84) / 0x40 + DAT_ram_3004ac84;
    DAT_ram_3004ac84 = uVar31;
    if ((int)((ulonglong)(uVar32 - 1) * (ulonglong)uVar31 + (ulonglong)_DAT_ram_3004f790 >> 0x18) +
        0x18U <= uVar28) {
      uVar28 = 0;
      do {
        iVar4 = (_DAT_ram_3004f790 >> 0x11) * 0x60;
        uVar29 = _DAT_ram_3004f790 & 0x1ffff;
        if (uVar26 + 0x30 < 0x2001) {
          iVar37 = uVar26 * 2;
          iVar5 = ((int)((*(int *)(&DAT_ram_400968a8 + iVar4) - *(int *)(&DAT_ram_40096848 + iVar4))
                         * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_40096848 + iVar4);
          iVar33 = ((int)((*(int *)(&DAT_ram_400968ac + iVar4) - *(int *)(&DAT_ram_4009684c + iVar4)
                          ) * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_4009684c + iVar4);
          iVar6 = ((int)((*(int *)(&DAT_ram_400968b0 + iVar4) - *(int *)(&DAT_ram_40096850 + iVar4))
                         * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_40096850 + iVar4);
          iVar7 = ((int)((*(int *)(&DAT_ram_400968b4 + iVar4) - *(int *)(&DAT_ram_40096854 + iVar4))
                         * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_40096854 + iVar4);
          iVar8 = ((int)((*(int *)(&DAT_ram_400968b8 + iVar4) - *(int *)(&DAT_ram_40096858 + iVar4))
                         * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_40096858 + iVar4);
          iVar9 = ((int)((*(int *)(&DAT_ram_400968bc + iVar4) - *(int *)(&DAT_ram_4009685c + iVar4))
                         * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_4009685c + iVar4);
          iVar10 = ((int)((*(int *)(&DAT_ram_400968c0 + iVar4) - *(int *)(&DAT_ram_40096860 + iVar4)
                          ) * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_40096860 + iVar4);
          iVar11 = ((int)((*(int *)(&DAT_ram_400968c4 + iVar4) - *(int *)(&DAT_ram_40096864 + iVar4)
                          ) * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_40096864 + iVar4);
          iVar12 = ((int)((*(int *)(&DAT_ram_400968c8 + iVar4) - *(int *)(&DAT_ram_40096868 + iVar4)
                          ) * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_40096868 + iVar4);
          iVar13 = ((int)((*(int *)(&DAT_ram_400968cc + iVar4) - *(int *)(&DAT_ram_4009686c + iVar4)
                          ) * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_4009686c + iVar4);
          iVar14 = ((int)((*(int *)(&DAT_ram_400968d0 + iVar4) - *(int *)(&DAT_ram_40096870 + iVar4)
                          ) * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_40096870 + iVar4);
          iVar15 = ((int)((*(int *)(&DAT_ram_400968d8 + iVar4) - *(int *)(&DAT_ram_40096878 + iVar4)
                          ) * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_40096878 + iVar4);
          iVar34 = ((int)((*(int *)(&DAT_ram_400968dc + iVar4) - *(int *)(&DAT_ram_4009687c + iVar4)
                          ) * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_4009687c + iVar4);
          iVar16 = ((int)((*(int *)(&DAT_ram_400968e0 + iVar4) - *(int *)(&DAT_ram_40096880 + iVar4)
                          ) * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_40096880 + iVar4);
          iVar17 = ((int)((*(int *)(&DAT_ram_400968e4 + iVar4) - *(int *)(&DAT_ram_40096884 + iVar4)
                          ) * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_40096884 + iVar4);
          iVar18 = ((int)((*(int *)(&DAT_ram_400968e8 + iVar4) - *(int *)(&DAT_ram_40096888 + iVar4)
                          ) * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_40096888 + iVar4);
          iVar19 = ((int)((*(int *)(&DAT_ram_400968ec + iVar4) - *(int *)(&DAT_ram_4009688c + iVar4)
                          ) * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_4009688c + iVar4);
          iVar20 = ((int)((*(int *)(&DAT_ram_400968f0 + iVar4) - *(int *)(&DAT_ram_40096890 + iVar4)
                          ) * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_40096890 + iVar4);
          iVar21 = ((int)((*(int *)(&DAT_ram_400968f4 + iVar4) - *(int *)(&DAT_ram_40096894 + iVar4)
                          ) * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_40096894 + iVar4);
          iVar22 = ((int)((*(int *)(&DAT_ram_400968f8 + iVar4) - *(int *)(&DAT_ram_40096898 + iVar4)
                          ) * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_40096898 + iVar4);
          iVar23 = ((int)((*(int *)(&DAT_ram_400968fc + iVar4) - *(int *)(&DAT_ram_4009689c + iVar4)
                          ) * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_4009689c + iVar4);
          iVar24 = ((int)((*(int *)(&DAT_ram_40096900 + iVar4) - *(int *)(&DAT_ram_400968a0 + iVar4)
                          ) * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_400968a0 + iVar4);
          iVar4 = ((int)((*(int *)(&DAT_ram_40096904 + iVar4) - *(int *)(&DAT_ram_400968a4 + iVar4))
                         * uVar29 + 0x10000) >> 0x11) + *(int *)(&DAT_ram_400968a4 + iVar4);
          iVar38 = *(short *)(iVar37 + 0x30054cb4) * iVar34 +
                   *(short *)(iVar37 + 0x30054cb0) * iVar15 +
                   *(short *)(iVar37 + 0x30054cb8) * iVar16 +
                   *(short *)(iVar37 + 0x30054cbc) * iVar17 +
                   *(short *)(iVar37 + 0x30054cc0) * iVar18 +
                   *(short *)(iVar37 + 0x30054cc4) * iVar19 +
                   *(short *)(iVar37 + 0x30054cc8) * iVar20 +
                   *(short *)(iVar37 + 0x30054ccc) * iVar21 +
                   *(short *)(iVar37 + 0x30054cd0) * iVar22 +
                   *(short *)(iVar37 + 0x30054cd4) * iVar23 +
                   *(short *)(iVar37 + 0x30054cd8) * iVar24 +
                   *(short *)(iVar37 + 0x30054cdc) * iVar4;
          iVar36 = *(short *)(iVar37 + 0x30054cb6) * iVar34 +
                   *(short *)(iVar37 + 0x30054cb2) * iVar15 +
                   *(short *)(iVar37 + 0x30054cba) * iVar16 +
                   *(short *)(iVar37 + 0x30054cbe) * iVar17 +
                   *(short *)(iVar37 + 0x30054cc2) * iVar18 +
                   *(short *)(iVar37 + 0x30054cc6) * iVar19 +
                   *(short *)(iVar37 + 0x30054cca) * iVar20 +
                   *(short *)(iVar37 + 0x30054cce) * iVar21 +
                   *(short *)(iVar37 + 0x30054cd2) * iVar22 +
                   *(short *)(iVar37 + 0x30054cd6) * iVar23 +
                   *(short *)(iVar37 + 0x30054cda) * iVar24 +
                   *(short *)(iVar37 + 0x30054cde) * iVar4;
          iVar4 = 0x8000 - (iVar33 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
                            iVar12 + iVar13 + iVar14 + iVar15 + iVar34 + iVar16 + iVar17 + iVar18 +
                            iVar19 + iVar20 + iVar21 + iVar22 + iVar23 + iVar24 + iVar4);
          iVar15 = *(short *)(iVar37 + 0x30054c84) * iVar33 +
                   *(short *)(uVar26 * 2 + 0x30054c80) * iVar5 +
                   *(short *)(iVar37 + 0x30054c88) * iVar6 + *(short *)(iVar37 + 0x30054c8c) * iVar7
                   + *(short *)(iVar37 + 0x30054c90) * iVar8 +
                   *(short *)(iVar37 + 0x30054c94) * iVar9 +
                   *(short *)(iVar37 + 0x30054c98) * iVar10 +
                   *(short *)(iVar37 + 0x30054c9c) * iVar11 +
                   *(short *)(iVar37 + 0x30054ca0) * iVar12 +
                   *(short *)(iVar37 + 0x30054ca4) * iVar13 +
                   *(short *)(iVar37 + 0x30054ca8) * iVar14 +
                   *(short *)(iVar37 + 0x30054cac) * iVar4;
          iVar37 = *(short *)(iVar37 + 0x30054c86) * iVar33 +
                   *(short *)(iVar37 + 0x30054c82) * iVar5 + *(short *)(iVar37 + 0x30054c8a) * iVar6
                   + *(short *)(iVar37 + 0x30054c8e) * iVar7 +
                   *(short *)(iVar37 + 0x30054c92) * iVar8 + *(short *)(iVar37 + 0x30054c96) * iVar9
                   + *(short *)(iVar37 + 0x30054c9a) * iVar10 +
                   *(short *)(iVar37 + 0x30054c9e) * iVar11 +
                   *(short *)(iVar37 + 0x30054ca2) * iVar12 +
                   *(short *)(iVar37 + 0x30054ca6) * iVar13 +
                   *(short *)(iVar37 + 0x30054caa) * iVar14 +
                   *(short *)(iVar37 + 0x30054cae) * iVar4;
        }
        else {
          iVar37 = 0;
          iVar15 = 0;
          iVar5 = 0;
          iVar36 = 0;
          do {
            iVar6 = *(int *)(&DAT_ram_40096848 + iVar36 * 4 + iVar4);
            iVar38 = iVar36 * 4;
            uVar35 = uVar26 + iVar36 * 2 & 0x1fff;
            iVar36 = iVar36 + 1;
            iVar6 = ((int)((*(int *)(&DAT_ram_400968a8 + iVar38 + iVar4) - iVar6) * uVar29 + 0x10000
                          ) >> 0x11) + iVar6;
            iVar15 = iVar15 + *(short *)(uVar35 * 2 + 0x30054c80) * iVar6;
            iVar5 = iVar5 + iVar6;
            iVar37 = iVar37 + *(short *)((uVar35 + 1 & 0x1fff) * 2 + 0x30054c80) * iVar6;
          } while (iVar36 != 0xb);
          iVar36 = 0;
          iVar38 = 0;
          iVar6 = 0xc;
          do {
            iVar8 = *(int *)(&DAT_ram_40096848 + iVar6 * 4 + iVar4);
            iVar7 = iVar6 * 4;
            uVar35 = uVar26 + iVar6 * 2 & 0x1fff;
            iVar6 = iVar6 + 1;
            iVar8 = ((int)((*(int *)(&DAT_ram_400968a8 + iVar7 + iVar4) - iVar8) * uVar29 + 0x10000)
                    >> 0x11) + iVar8;
            iVar38 = iVar38 + *(short *)(uVar35 * 2 + 0x30054c80) * iVar8;
            iVar5 = iVar5 + iVar8;
            iVar36 = iVar36 + *(short *)((uVar35 + 1 & 0x1fff) * 2 + 0x30054c80) * iVar8;
          } while (iVar6 != 0x18);
          uVar29 = uVar26 + 0x16 & 0x1fff;
          iVar15 = iVar15 + (int)*(short *)(uVar29 * 2 + 0x30054c80) * (0x8000 - iVar5);
          iVar37 = iVar37 + (int)*(short *)((uVar29 + 1 & 0x1fff) * 2 + 0x30054c80) *
                            (0x8000 - iVar5);
        }
        uVar1 = (longlong)iVar15 + (longlong)iVar38 + 0x4000;
        uVar29 = (uint)(uVar1 >> 0x20);
        uVar3 = ((ulonglong)uVar29 << 0x20 | uVar1 & 0xffffffff) >> 0xf;
        uVar35 = (uint)uVar3;
        iVar4 = (int)uVar29 >> 0xf;
        uVar1 = (longlong)iVar37 + (longlong)iVar36 + 0x4000;
        uVar29 = (uint)(uVar1 >> 0x20);
        uVar1 = ((ulonglong)uVar29 << 0x20 | uVar1 & 0xffffffff) >> 0xf;
        uVar2 = (uint)uVar1;
        iVar15 = (int)uVar29 >> 0xf;
        uVar27 = 0x7fff;
        uVar30 = uVar27;
        if ((iVar4 < 1) && ((iVar4 != 0 || (uVar35 < 0x8000)))) {
          if ((iVar4 < -1) || ((iVar4 == -1 && (uVar35 < 0xffff8000)))) {
            uVar30 = 0x8000;
          }
          else {
            uVar30 = (short)uVar3;
          }
        }
        *(undefined2 *)(param_1 + uVar28 * 4) = uVar30;
        if ((iVar15 < 1) && ((iVar15 != 0 || (uVar2 < 0x8000)))) {
          if ((iVar15 < -1) || ((iVar15 == -1 && (uVar2 < 0xffff8000)))) {
            uVar27 = 0x8000;
          }
          else {
            uVar27 = (undefined2)uVar1;
          }
        }
        *(undefined2 *)(param_1 + 2 + uVar28 * 4) = uVar27;
        uVar28 = uVar28 + 1;
        uVar26 = uVar26 + (_DAT_ram_3004f790 + uVar31 >> 0x18) * 2 & 0x1fff;
        _DAT_ram_3004f790 = _DAT_ram_3004f790 + uVar31 & 0xffffff;
      } while (uVar32 != uVar28);
      _DAT_ram_30058c80 = (short)uVar26;
      return iVar25;
    }
    _DAT_ram_3004f7a0 = _DAT_ram_3004f7a0 + 1;
    DAT_ram_30058c84 = '\0';
  }
  memset(param_1,0,uVar32 << 2);
  return iVar25;
}


