/* NanoCore 1.12: nc_effect_name at 0x40025d92.
 * Role: Block/subtype effect names, including new block10 dispatch; availability of block10 not established.
 * REA: ev_981f6326b0aa263fbb50149952133da2043ce6eb0c086c5d2c306f16ed8185cb
 * Source: analysis/rea-1.12-effects/results/01976-export-0x40025d92.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

char * nc_effect_name(int param_1,byte param_2,int param_3)

{
  char *pcVar1;
  undefined **ppuVar2;
  uint uVar3;
  byte bStack_15;
  int aiStack_14 [4];
  
  bStack_15 = param_2;
  aiStack_14[0] = param_1;
  if (param_1 == 10) {
    pcVar1 = (char *)FUN_ram_40074a46(param_2);
    return pcVar1;
  }
  FUN_ram_40025be8(aiStack_14,&bStack_15);
  if (param_3 != 2) {
    switch(aiStack_14[0]) {
    case 0:
      if (bStack_15 == 2) {
        return &DAT_ram_4009a71c;
      }
      if (bStack_15 == 3) {
        return s_compressor_ram_4009a754;
      }
      if (bStack_15 == 1) {
        return s_auto_gate_ram_4009a760;
      }
      return &DAT_ram_4009a6ec;
    case 1:
      if (bStack_15 == 8) {
        return s_pitch_ram_4009a6f4;
      }
      if (bStack_15 == 9) {
        return s_env_wah_ram_4009a708;
      }
      if (bStack_15 == 10) {
        return s_auto_wah_ram_4009a6fc;
      }
      if (bStack_15 != 0xb) {
        return s_distortion_ram_4009a710;
      }
      return s_motion_wah_ram_4009a6e0;
    default:
      pcVar1 = (char *)FUN_ram_40025c64();
      return pcVar1;
    case 4:
      if (7 < bStack_15) {
        return &DAT_ram_4009a734;
      }
      uVar3 = (uint)(byte)(bStack_15 - 1);
      if (6 < uVar3) {
        return &DAT_ram_4009a734;
      }
      ppuVar2 = &PTR_s_digital_ram_4009aa54_ram_4009b26c;
      break;
    case 5:
      uVar3 = bStack_15 - 1 & 0xff;
      if (0x11 < uVar3) {
        return s_chorus_ram_4009a690;
      }
      ppuVar2 = &PTR_s_phaser_ram_4009a9cc_ram_4009b288;
      break;
    case 6:
      uVar3 = (uint)bStack_15;
      if (uVar3 < 8) {
        if (uVar3 == 4) {
          uVar3 = 2;
        }
      }
      else {
        uVar3 = 6;
      }
      ppuVar2 = &PTR_DAT_ram_4009a97c_ram_4009b2d0;
      break;
    case 7:
      if (bStack_15 == 0) {
        return &DAT_ram_4009a738;
      }
      if (bStack_15 != 1) {
        return &DAT_ram_4009a73c;
      }
      return &DAT_ram_4009a748;
    case 9:
      uVar3 = bStack_15 - 1 & 0xff;
      if (10 < uVar3) {
        return s_usb_volume_ram_4009c0d0 + 4;
      }
      ppuVar2 = (undefined **)&DAT_ram_4009b2f8;
    }
    goto LAB_ram_40025e8a;
  }
  switch(aiStack_14[0]) {
  case 0:
    pcVar1 = &DAT_ram_4009a6d8;
    if (((bStack_15 != 2) && (pcVar1 = &DAT_ram_4009a6ac, bStack_15 != 3)) &&
       (pcVar1 = s_AUTO_GATE_ram_4009a6b4, bStack_15 != 1)) {
      pcVar1 = &DAT_ram_4009a6c0;
    }
    break;
  case 1:
    pcVar1 = s_PITCH_ram_4009a6c8;
    if ((((bStack_15 != 8) && (pcVar1 = &DAT_ram_4009a6d0, bStack_15 != 9)) &&
        (pcVar1 = &DAT_ram_4009a6d4, bStack_15 != 10)) &&
       (pcVar1 = s_MOTION_WAH_ram_4009a264, bStack_15 != 0xb)) {
      pcVar1 = &DAT_ram_4009a76c;
    }
    break;
  case 2:
    pcVar1 = s_NO_PROFILE_ram_4009a698;
    break;
  case 3:
    pcVar1 = s_NO_IR_ram_4009a6a4;
    break;
  case 4:
    if (7 < bStack_15) {
      return &DAT_ram_4009a730;
    }
    uVar3 = (uint)(byte)(bStack_15 - 1);
    if (6 < uVar3) {
      return &DAT_ram_4009a730;
    }
    ppuVar2 = &PTR_s_DIGITAL_ram_4009ab90_ram_4009b1b4;
    goto LAB_ram_40025e8a;
  case 5:
    uVar3 = bStack_15 - 1 & 0xff;
    if (0x11 < uVar3) {
      return s_CHORUS_ram_4009a724;
    }
    ppuVar2 = &PTR_s_PHASER_ram_4009ab08_ram_4009b1d0;
    goto LAB_ram_40025e8a;
  case 6:
    uVar3 = (uint)bStack_15;
    if (uVar3 < 8) {
      if (uVar3 == 4) {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 6;
    }
    ppuVar2 = &PTR_DAT_ram_4009aab8_ram_4009b218;
    goto LAB_ram_40025e8a;
  case 7:
    pcVar1 = &DAT_ram_4009a740;
    if ((bStack_15 != 0) && (pcVar1 = &DAT_ram_4009a744, bStack_15 == 1)) {
      pcVar1 = &DAT_ram_4009a72c;
    }
    break;
  default:
    pcVar1 = s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
    break;
  case 9:
    uVar3 = bStack_15 - 1 & 0xff;
    if (10 < uVar3) {
      return s_VOLUME_ram_4009a74c;
    }
    ppuVar2 = &PTR_DAT_ram_4009aa80_ram_4009b240;
LAB_ram_40025e8a:
    pcVar1 = ppuVar2[uVar3];
  }
  return pcVar1;
}

