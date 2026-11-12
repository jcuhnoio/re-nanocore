/* NanoCore 1.12 analysis module: audio/effect_metadata.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40025824.
 * REA evidence: ev_92ec3f2cea39ac9fbbbafa4d16e1bc7a4809ac35e6506b2a33f343d2d86db3fa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 nc_delay_parameter_count(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
    uVar1 = 8;
    if ((((param_1 != 2) && (uVar1 = 3, param_1 != 4)) && (uVar1 = 5, param_1 < 5)) &&
       (uVar1 = 4, param_1 == 1)) {
      uVar1 = 3;
    }
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40025d92.
 * REA evidence: ev_00bac01b392c96c58096128eccdabfffa2cbfe4755aca798500bacec66c2dc26
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
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


/* NanoCore 1.12, address 0x4002607e.
 * REA evidence: ev_12994f388f3ae2b5379d155ecff3958779b61423d034a42fc041153c7b0dbb76
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * nc_effect_parameter_name(int param_1,byte param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined **ppuVar4;
  byte bStack_15;
  int aiStack_14 [2];
  
  bStack_15 = param_2;
  aiStack_14[0] = param_1;
  if (param_1 == 6) {
    if (param_2 == 7) {
      if (param_4 == 2) {
        if (param_3 < 5) {
          return (&PTR_s_DECAY_ram_4009ae70_ram_4009b324)[param_3];
        }
      }
      else if (param_4 == 1) {
        if (param_3 < 5) {
          return (&PTR_s_Decay_ram_4009ac88_ram_4009b338)[param_3];
        }
      }
      else if (param_3 < 5) {
        return (&PTR_s_Decay_ram_4009ac88_ram_4009b728)[param_3];
      }
      goto switchD_ram_40026140_default;
    }
  }
  else if (param_1 == 10) {
    pcVar3 = (char *)FUN_ram_40074a6e(param_2,param_3);
    return pcVar3;
  }
  FUN_ram_40025be8(aiStack_14,&bStack_15);
  iVar1 = aiStack_14[0];
  if (param_4 == 2) {
    switch(aiStack_14[0]) {
    case 0:
      if (bStack_15 == 1) {
        if (param_3 < 2) {
          return (&PTR_DAT_ram_4009af54_ram_4009bcdc)[param_3];
        }
      }
      else if (bStack_15 == 2) {
        if (param_3 < 7) {
          return (&PTR_DAT_ram_4009a6c0_ram_4009bcc0)[param_3];
        }
      }
      else if (bStack_15 == 3) {
        if (param_3 < 6) {
          return (&PTR_s_THRESH_ram_4009af94_ram_4009bca8)[param_3];
        }
      }
      else if ((bStack_15 == 0) && (param_3 < 2)) {
        return (&PTR_s_THRESH_ram_4009af94_ram_4009bca0)[param_3];
      }
      break;
    case 1:
      if (bStack_15 == 8) {
        if (param_3 < 4) {
          return (&PTR_s_PITCH_ram_4009a6c8_ram_4009bc90)[param_3];
        }
        break;
      }
      if (bStack_15 == 9) {
        if (param_3 < 5) {
          return (&PTR_DAT_ram_4009aee4_ram_4009bc7c)[param_3];
        }
        break;
      }
      if (bStack_15 == 10) {
        if (param_3 < 6) {
          return (&PTR_DAT_ram_4009aee4_ram_4009bc64)[param_3];
        }
        break;
      }
      if (bStack_15 == 0xb) {
        if (param_3 < 5) {
          return (&PTR_DAT_ram_4009aeb0_ram_4009bc40)[param_3];
        }
        break;
      }
      pcVar3 = s_BOOST_ram_4009a7c4;
      if (2 < (byte)(bStack_15 - 5)) {
        if (param_3 < 3) {
          return (&PTR_DAT_ram_4009af74_ram_4009bc34)[param_3];
        }
        break;
      }
      goto LAB_ram_40026aac;
    case 2:
      if (param_3 < 5) {
        return (&PTR_DAT_ram_4009af74_ram_4009bc20)[param_3];
      }
      break;
    case 3:
      if (param_3 < 3) {
        return (&PTR_s_LOCUT_ram_4009af64_ram_4009bc14)[param_3];
      }
      break;
    case 4:
      if (bStack_15 < 8) {
        switch(bStack_15) {
        case 1:
        case 4:
          if (param_3 < 3) {
            return (&PTR_DAT_ram_4009af34_ram_4009bc04)[param_3];
          }
          break;
        case 2:
          uVar2 = nc_delay_parameter_count(2);
          if (param_3 < uVar2) {
            return (&PTR_DAT_ram_4009af34_ram_4009bbe4)[param_3];
          }
          break;
        case 3:
          if (param_3 < 4) {
            return (&PTR_DAT_ram_4009af34_ram_4009bbd0)[param_3];
          }
          break;
        case 5:
          if (param_3 < 5) {
            return (&PTR_DAT_ram_4009af34_ram_4009bbb8)[param_3];
          }
          break;
        case 6:
          if (param_3 < 5) {
            return (&PTR_DAT_ram_4009af34_ram_4009bba0)[param_3];
          }
          break;
        case 7:
          if (param_3 < 5) {
            return (&PTR_DAT_ram_4009af34_ram_4009bb88)[param_3];
          }
          break;
        default:
          goto switchD_ram_40026278_default;
        }
      }
      else {
switchD_ram_40026278_default:
        if (param_3 < 4) {
          return (&PTR_s_DELAY_ram_4009af0c_ram_4009bb60)[param_3];
        }
      }
      break;
    case 5:
      if (bStack_15 == 0xe) {
        if (param_3 < 5) {
          return (&PTR_DAT_ram_4009aeb0_ram_4009bb4c)[param_3];
        }
      }
      else if (bStack_15 == 0x10) {
        if (param_3 < 7) {
          return (&PTR_DAT_ram_4009aeb0_ram_4009bb30)[param_3];
        }
      }
      else if (bStack_15 == 0x11) {
        if (param_3 < 8) {
          return (&PTR_DAT_ram_4009aeb0_ram_4009bb10)[param_3];
        }
      }
      else if (bStack_15 == 0xb) {
        if (param_3 < 4) {
          return (&PTR_DAT_ram_4009aeb0_ram_4009bb00)[param_3];
        }
      }
      else if (bStack_15 == 0xc) {
        if (param_3 < 5) {
          return (&PTR_s__ram_400999ac_0x20_ram_4009baec)[param_3];
        }
      }
      else if (bStack_15 == 0xd) {
        if (param_3 < 5) {
          return (&PTR_s__ram_400999ac_0x20_ram_4009baec)[param_3];
        }
      }
      else if (bStack_15 == 0x12) {
        if (param_3 < 5) {
          return (&PTR_DAT_ram_4009aee4_ram_4009bad8)[param_3];
        }
      }
      else if (bStack_15 == 0) {
        if (param_3 < 2) {
          return (&PTR_DAT_ram_4009aeb0_ram_4009bad0)[param_3];
        }
      }
      else if (bStack_15 == 8) {
        if (param_3 < 5) {
          return (&PTR_DAT_ram_4009aeb0_ram_4009babc)[param_3];
        }
      }
      else if (bStack_15 == 9) {
        if (param_3 < 5) {
          return (&PTR_DAT_ram_4009aeb0_ram_4009bc40)[param_3];
        }
      }
      else if (bStack_15 == 10) {
        if (param_3 < 5) {
          return (&PTR_DAT_ram_4009aeb0_ram_4009ba9c)[param_3];
        }
      }
      else if (bStack_15 == 3) {
        if (param_3 < 5) {
          return (&PTR_DAT_ram_4009aeb0_ram_4009ba88)[param_3];
        }
      }
      else if (bStack_15 == 4) {
        if (param_3 < 4) {
          return (&PTR_DAT_ram_4009aeb0_ram_4009ba78)[param_3];
        }
      }
      else if (param_3 < 3) {
        return (&PTR_DAT_ram_4009aeb0_ram_4009ba6c)[param_3];
      }
      break;
    case 6:
      if (bStack_15 == 6) {
        if (param_3 < 5) {
          return (&PTR_s_DECAY_ram_4009ae70_ram_4009ba58)[param_3];
        }
      }
      else if (bStack_15 == 3) {
        if (param_3 < 5) {
          return (&PTR_s_DECAY_ram_4009ae70_ram_4009ba44)[param_3];
        }
      }
      else if ((bStack_15 - 7 & 0xfd) == 0) {
        if (param_3 < 5) {
          return (&PTR_s_DECAY_ram_4009ae70_ram_4009ba30)[param_3];
        }
      }
      else if (bStack_15 == 5) {
        if (param_3 < 5) {
          return (&PTR_s_DECAY_ram_4009ae70_ram_4009ba1c)[param_3];
        }
      }
      else if (bStack_15 == 2) {
        if (param_3 < 5) {
          return (&PTR_s_DECAY_ram_4009ae70_ram_4009ba08)[param_3];
        }
      }
      else if (param_3 < 5) {
        return (&PTR_s_DECAY_ram_4009ae70_ram_4009b9e8)[param_3];
      }
      break;
    case 7:
      if (bStack_15 == 0) {
        if (param_3 < 4) {
          return (&PTR_DAT_ram_4009ae60_ram_4009b9d8)[param_3];
        }
      }
      else if (bStack_15 == 1) {
        if (param_3 < 7) {
          return (&PTR_s_B_120_ram_4009ae20_ram_4009b9bc)[param_3];
        }
      }
      else if (param_3 < 9) {
        return (&PTR_DAT_ram_4009ae18_ram_4009b998)[param_3];
      }
    }
  }
  else {
    if (param_4 == 1) {
      switch(aiStack_14[0]) {
      case 0:
        if (bStack_15 == 1) {
          pcVar3 = s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
          ppuVar4 = &PTR_s_Sensi_tivity_ram_4009adb0_ram_4009b990;
          if (1 < param_3) goto LAB_ram_40026582;
        }
        else if (bStack_15 == 2) {
          if (6 < param_3) break;
          ppuVar4 = &PTR_DAT_ram_4009ae10_ram_4009b974;
        }
        else if (bStack_15 == 3) {
          if (5 < param_3) break;
          ppuVar4 = &PTR_s_Thresh_old_ram_4009adec_ram_4009b95c;
        }
        else {
          pcVar3 = s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
          if ((bStack_15 != 0) || (1 < param_3)) goto LAB_ram_40026582;
          ppuVar4 = &PTR_s_Thresh_old_ram_4009adec_ram_4009b954;
        }
        pcVar3 = ppuVar4[param_3];
        if (pcVar3 != (char *)0x0) goto LAB_ram_40026582;
        goto switchD_ram_4002659e_caseD_0;
      case 3:
        if (param_3 < 3) {
          pcVar3 = (&PTR_s_Low_Cut_ram_4009add8_ram_4009b948)[param_3];
          if (pcVar3 == (char *)0x0) goto LAB_ram_40026618;
          goto LAB_ram_40026582;
        }
        break;
      case 4:
        switch(bStack_15) {
        default:
          if (4 < param_3) break;
          ppuVar4 = &PTR_s_Delay_ram_4009ac90_4_ram_4009b934;
LAB_ram_4002664a:
          pcVar3 = ppuVar4[param_3];
          if (pcVar3 != (char *)0x0) goto LAB_ram_40026582;
          goto switchD_ram_4002659e_caseD_4;
        case 1:
          if (param_3 < 4) {
            ppuVar4 = &PTR_DAT_ram_4009ad74_ram_4009b8f0;
            goto LAB_ram_4002664a;
          }
          break;
        case 2:
          uVar2 = nc_delay_parameter_count(2);
          ppuVar4 = &PTR_DAT_ram_4009ad74_ram_4009b914;
          if (param_3 < uVar2) goto LAB_ram_4002664a;
          break;
        case 3:
          if (param_3 < 5) {
            ppuVar4 = &PTR_DAT_ram_4009ad74_ram_4009b900;
            goto LAB_ram_4002664a;
          }
          break;
        case 4:
          if (param_3 < 4) {
            ppuVar4 = &PTR_DAT_ram_4009ad74_ram_4009b8f0;
            goto LAB_ram_4002664a;
          }
          break;
        case 5:
          if (param_3 < 6) {
            ppuVar4 = &PTR_DAT_ram_4009ad74_ram_4009b8d8;
            goto LAB_ram_4002664a;
          }
          break;
        case 6:
          if (param_3 < 6) {
            ppuVar4 = &PTR_DAT_ram_4009ad74_ram_4009b8c0;
            goto LAB_ram_4002664a;
          }
          break;
        case 7:
          if (param_3 < 6) {
            ppuVar4 = &PTR_DAT_ram_4009ad74_ram_4009b8a8;
            goto LAB_ram_4002664a;
          }
        }
        break;
      case 5:
        if (bStack_15 == 0xe) {
          if (param_3 < 5) {
            ppuVar4 = &PTR_s_Rate_ram_4009acd8_4_ram_4009b894;
            goto LAB_ram_400266fa;
          }
          break;
        }
        if (bStack_15 == 0x10) {
          if (param_3 < 7) {
            ppuVar4 = &PTR_s_Rate_ram_4009acd8_4_ram_4009b878;
            goto LAB_ram_400266fa;
          }
          break;
        }
        if (bStack_15 == 0x11) {
          if (param_3 < 8) {
            ppuVar4 = &PTR_s_Rate_ram_4009acd8_4_ram_4009b858;
            goto LAB_ram_400266fa;
          }
          break;
        }
        if (bStack_15 == 0xb) {
          if (param_3 < 4) {
            ppuVar4 = &PTR_s_Rate_ram_4009acd8_4_ram_4009b848;
            goto LAB_ram_400266fa;
          }
          break;
        }
        if (bStack_15 == 0xc) {
          if (param_3 < 5) {
            ppuVar4 = &PTR_s__ram_400999ac_0x20_ram_4009b834;
            goto LAB_ram_400266fa;
          }
          break;
        }
        if (bStack_15 == 0xd) {
          if (param_3 < 5) {
            ppuVar4 = &PTR_s__ram_400999ac_0x20_ram_4009b834;
            goto LAB_ram_400266fa;
          }
          break;
        }
        if (bStack_15 == 0x12) {
          if (param_3 < 5) {
            ppuVar4 = &PTR_DAT_ram_4009ad28_ram_4009b820;
            goto LAB_ram_400266fa;
          }
          break;
        }
        if (bStack_15 == 0) {
          if (param_3 < 3) {
            ppuVar4 = &PTR_s_Rate_ram_4009acd8_4_ram_4009b814;
            goto LAB_ram_400266fa;
          }
          break;
        }
        if (bStack_15 == 8) {
          if (param_3 < 5) {
            ppuVar4 = &PTR_s_Rate_ram_4009acd8_4_ram_4009b800;
            goto LAB_ram_400266fa;
          }
          break;
        }
        if (bStack_15 == 9) {
          if (param_3 < 5) {
            ppuVar4 = &PTR_s_Rate_ram_4009acd8_4_ram_4009b7ec;
            goto LAB_ram_400266fa;
          }
          break;
        }
        if (bStack_15 == 10) {
          if (param_3 < 5) {
            ppuVar4 = &PTR_s_Rate_ram_4009acd8_4_ram_4009b7d8;
            goto LAB_ram_400266fa;
          }
          break;
        }
        if (bStack_15 == 3) {
          if (param_3 < 6) {
            ppuVar4 = &PTR_s_Rate_ram_4009acd8_4_ram_4009b7c0;
            goto LAB_ram_400266fa;
          }
          break;
        }
        if (bStack_15 != 4) {
          if (param_3 < 4) {
            ppuVar4 = &PTR_s_Rate_ram_4009acd8_4_ram_4009b79c;
            goto LAB_ram_400266fa;
          }
          break;
        }
        ppuVar4 = &PTR_s_Rate_ram_4009acd8_4_ram_4009b7ac;
        if (4 < param_3) break;
LAB_ram_400266fa:
        pcVar3 = ppuVar4[param_3];
        if (pcVar3 != (char *)0x0) goto LAB_ram_40026582;
        goto switchD_ram_4002659e_caseD_5;
      case 6:
        if (bStack_15 == 6) {
          if (param_3 < 6) {
            ppuVar4 = &PTR_s_Decay_ram_4009ac88_ram_4009b784;
            goto LAB_ram_40026844;
          }
          break;
        }
        if (bStack_15 == 2) {
          if (param_3 < 6) {
            ppuVar4 = &PTR_s_Decay_ram_4009ac88_ram_4009b76c;
            goto LAB_ram_40026844;
          }
          break;
        }
        if (bStack_15 == 3) {
          if (param_3 < 6) {
            ppuVar4 = &PTR_s_Decay_ram_4009ac88_ram_4009b754;
            goto LAB_ram_40026844;
          }
          break;
        }
        if (bStack_15 == 5) {
          ppuVar4 = &PTR_s_Decay_ram_4009ac88_ram_4009b73c;
          if (param_3 < 6) goto LAB_ram_40026844;
          break;
        }
        if ((bStack_15 - 7 & 0xfd) != 0) {
          if (param_3 < 6) {
            ppuVar4 = &PTR_s_Decay_ram_4009ac88_ram_4009b678;
            goto LAB_ram_40026844;
          }
          break;
        }
        if (5 < param_3) break;
        ppuVar4 = &PTR_s_Decay_ram_4009ac88_ram_4009b710;
LAB_ram_40026844:
        pcVar3 = ppuVar4[param_3];
        if (pcVar3 != (char *)0x0) goto LAB_ram_40026582;
        goto switchD_ram_4002659e_caseD_6;
      case 7:
        if (bStack_15 == 0) break;
        if (bStack_15 != 1) {
          if (param_3 < 9) {
            ppuVar4 = &PTR_s_B1__60__ram_4009ac3c_ram_4009b514;
            goto LAB_ram_400268e6;
          }
          break;
        }
        if (6 < param_3) break;
        ppuVar4 = &PTR_s_B2__120__ram_4009ac44_ram_4009b590;
LAB_ram_400268e6:
        pcVar3 = ppuVar4[param_3];
        if (pcVar3 != (char *)0x0) goto LAB_ram_40026582;
        goto switchD_ram_4002659e_caseD_7;
      case 9:
        if (bStack_15 == 8) {
          if (3 < param_3) break;
          ppuVar4 = &PTR_s_Cutoff_ram_4009ac20_ram_4009b47c;
        }
        else if (bStack_15 == 9) {
          pcVar3 = s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
          if (1 < param_3) goto LAB_ram_40026582;
          ppuVar4 = &PTR_s_Delay_ram_4009ac90_4_ram_4009bd08;
        }
        else if (bStack_15 == 10) {
          if (3 < param_3) break;
          ppuVar4 = &PTR_DAT_ram_4009abf8_ram_4009bc54;
        }
        else if (bStack_15 == 0xb) {
          if (4 < param_3) break;
          ppuVar4 = &PTR_s_Rate_ram_4009acd8_4_ram_4009bb74;
        }
        else if (bStack_15 == 4) {
          if (2 < param_3) break;
          ppuVar4 = &PTR_s_PITCH_ram_4009a6c8_ram_4009bab0;
        }
        else {
          pcVar3 = s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
          if ((bStack_15 != 0) || (2 < param_3)) goto LAB_ram_40026582;
          ppuVar4 = &PTR_s_Volume_ram_4009abc0_ram_4009b9fc;
        }
        pcVar3 = ppuVar4[param_3];
        if (pcVar3 != (char *)0x0) goto LAB_ram_40026582;
        goto switchD_ram_4002659e_caseD_9;
      }
      pcVar3 = s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
LAB_ram_40026582:
      if (*pcVar3 != '\0') {
        return pcVar3;
      }
    }
    switch(iVar1) {
    case 0:
switchD_ram_4002659e_caseD_0:
      if (bStack_15 == 1) {
        if (param_3 < 2) {
          return (&PTR_s_Sensitivity_ram_4009b0a8_ram_4009b708)[param_3];
        }
      }
      else if (bStack_15 == 2) {
        if (param_3 < 7) {
          return (&PTR_DAT_ram_4009ae10_ram_4009b6ec)[param_3];
        }
      }
      else if (bStack_15 == 3) {
        if (param_3 < 6) {
          return (&PTR_s_Threshold_ram_4009b0e4_ram_4009b6d4)[param_3];
        }
      }
      else if ((bStack_15 == 0) && (param_3 < 2)) {
        return (&PTR_s_Threshold_ram_4009b0e4_ram_4009b6cc)[param_3];
      }
      break;
    case 1:
      if (bStack_15 == 8) {
        if (param_3 < 4) {
          return (&PTR_s_Pitch_ram_4009acb4_ram_4009b6bc)[param_3];
        }
        break;
      }
      if (bStack_15 == 9) {
        if (param_3 < 5) {
          return (&PTR_DAT_ram_4009ad28_ram_4009b6a8)[param_3];
        }
        break;
      }
      if (bStack_15 == 10) {
        if (param_3 < 6) {
          return (&PTR_DAT_ram_4009ad28_ram_4009b690)[param_3];
        }
        break;
      }
      if (bStack_15 == 0xb) {
        if (param_3 < 5) {
          return (&PTR_s_Rate_ram_4009acd8_4_ram_4009b7ec)[param_3];
        }
        break;
      }
      if (2 < (byte)(bStack_15 - 5)) {
        if (param_3 < 3) {
          return (&PTR_DAT_ram_4009b0d0_ram_4009b66c)[param_3];
        }
        break;
      }
      pcVar3 = s_Boost_ram_4009a7cc;
LAB_ram_40026aac:
      if (param_3 == 0) {
        return pcVar3;
      }
      break;
    case 2:
      if (param_3 < 5) {
        return (&PTR_DAT_ram_4009b0d0_ram_4009b658)[param_3];
      }
      break;
    case 3:
      if (param_3 < 3) {
LAB_ram_40026618:
        return (&PTR_s_Low_Cut_ram_4009b0bc_ram_4009b64c)[param_3];
      }
      break;
    case 4:
switchD_ram_4002659e_caseD_4:
      switch(bStack_15) {
      default:
        if (param_3 < 5) {
          return (&PTR_s_Delay_ram_4009ac90_4_ram_4009b638)[param_3];
        }
        break;
      case 1:
        if (param_3 < 4) {
          return (&PTR_DAT_ram_4009ad74_ram_4009b5f4)[param_3];
        }
        break;
      case 2:
        uVar2 = nc_delay_parameter_count(2);
        if (param_3 < uVar2) {
          return (&PTR_DAT_ram_4009ad74_ram_4009b618)[param_3];
        }
        break;
      case 3:
        if (param_3 < 5) {
          return (&PTR_DAT_ram_4009ad74_ram_4009b604)[param_3];
        }
        break;
      case 4:
        if (param_3 < 4) {
          return (&PTR_DAT_ram_4009ad74_ram_4009b5f4)[param_3];
        }
        break;
      case 5:
        if (param_3 < 6) {
          return (&PTR_DAT_ram_4009ad74_ram_4009b5dc)[param_3];
        }
        break;
      case 6:
        if (param_3 < 6) {
          return (&PTR_DAT_ram_4009ad74_ram_4009b5c4)[param_3];
        }
        break;
      case 7:
        if (param_3 < 6) {
          return (&PTR_DAT_ram_4009ad74_ram_4009b5ac)[param_3];
        }
      }
      break;
    case 5:
switchD_ram_4002659e_caseD_5:
      if (bStack_15 == 0xe) {
        if (param_3 < 5) {
          return (&PTR_s_Rate_ram_4009acd8_4_ram_4009b894)[param_3];
        }
      }
      else if (bStack_15 == 0x10) {
        if (param_3 < 7) {
          return (&PTR_s_Rate_ram_4009acd8_4_ram_4009b878)[param_3];
        }
      }
      else if (bStack_15 == 0x11) {
        if (param_3 < 8) {
          return (&PTR_s_Rate_ram_4009acd8_4_ram_4009b570)[param_3];
        }
      }
      else if (bStack_15 == 0xb) {
        if (param_3 < 4) {
          return (&PTR_s_Rate_ram_4009acd8_4_ram_4009b560)[param_3];
        }
      }
      else if (bStack_15 == 0xc) {
        if (param_3 < 5) {
          return (&PTR_s__ram_400999ac_0x20_ram_4009b54c)[param_3];
        }
      }
      else if (bStack_15 == 0xd) {
        if (param_3 < 5) {
          return (&PTR_s__ram_400999ac_0x20_ram_4009b54c)[param_3];
        }
      }
      else if (bStack_15 == 0x12) {
        if (param_3 < 5) {
          return (&PTR_s_Frequency_ram_4009b06c_ram_4009b538)[param_3];
        }
      }
      else if (bStack_15 == 0) {
        if (param_3 < 3) {
          return (&PTR_s_Rate_ram_4009acd8_4_ram_4009b814)[param_3];
        }
      }
      else if (bStack_15 == 8) {
        if (param_3 < 5) {
          return (&PTR_s_Rate_ram_4009acd8_4_ram_4009b800)[param_3];
        }
      }
      else if (bStack_15 == 9) {
        if (param_3 < 5) {
          return (&PTR_s_Rate_ram_4009acd8_4_ram_4009b7ec)[param_3];
        }
      }
      else if (bStack_15 == 10) {
        if (param_3 < 5) {
          return (&PTR_s_Rate_ram_4009acd8_4_ram_4009b7d8)[param_3];
        }
      }
      else if (bStack_15 == 3) {
        if (param_3 < 6) {
          return (&PTR_s_Rate_ram_4009acd8_4_ram_4009b7c0)[param_3];
        }
      }
      else if (bStack_15 == 4) {
        if (param_3 < 5) {
          return (&PTR_s_Rate_ram_4009acd8_4_ram_4009b7ac)[param_3];
        }
      }
      else if (param_3 < 4) {
        return (&PTR_s_Rate_ram_4009acd8_4_ram_4009b504)[param_3];
      }
      break;
    case 6:
switchD_ram_4002659e_caseD_6:
      if (bStack_15 == 6) {
        if (param_3 < 6) {
          return (&PTR_s_Decay_ram_4009ac88_ram_4009b4ec)[param_3];
        }
      }
      else if (bStack_15 == 2) {
        if (param_3 < 6) {
          return (&PTR_s_Decay_ram_4009ac88_ram_4009b4d4)[param_3];
        }
      }
      else if (bStack_15 == 3) {
        if (param_3 < 6) {
          return (&PTR_s_Decay_ram_4009ac88_ram_4009b4bc)[param_3];
        }
      }
      else if (bStack_15 == 5) {
        if (param_3 < 6) {
          return (&PTR_s_Decay_ram_4009ac88_ram_4009b4a4)[param_3];
        }
      }
      else if ((bStack_15 - 7 & 0xfd) == 0) {
        if (param_3 < 6) {
          return (&PTR_s_Decay_ram_4009ac88_ram_4009b48c)[param_3];
        }
      }
      else if (param_3 < 6) {
        return (&PTR_s_Decay_ram_4009ac88_ram_4009bd74)[param_3];
      }
      break;
    case 7:
switchD_ram_4002659e_caseD_7:
      if (bStack_15 == 0) {
        if (param_3 < 4) {
          return (&PTR_DAT_ram_4009b010_ram_4009bd64)[param_3];
        }
      }
      else if (bStack_15 == 1) {
        if (param_3 < 7) {
          return (&PTR_s_B2_120__ram_4009afd8_ram_4009bd48)[param_3];
        }
      }
      else if (param_3 < 9) {
        return (&PTR_s_B1_60__ram_4009afd0_ram_4009bd24)[param_3];
      }
      break;
    default:
      return s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
    case 9:
switchD_ram_4002659e_caseD_9:
      if (bStack_15 == 8) {
        if (param_3 < 4) {
          return (&PTR_s_Cutoff_ram_4009ac20_ram_4009b47c)[param_3];
        }
      }
      else if (bStack_15 == 9) {
        if (param_3 < 2) {
          return (&PTR_s_Delay_ram_4009ac90_4_ram_4009bd08)[param_3];
        }
      }
      else if (bStack_15 == 10) {
        if (param_3 < 4) {
          return (&PTR_DAT_ram_4009abf8_ram_4009bc54)[param_3];
        }
      }
      else if (bStack_15 == 0xb) {
        if (param_3 < 5) {
          return (&PTR_s_Rate_ram_4009acd8_4_ram_4009bb74)[param_3];
        }
      }
      else if (bStack_15 == 4) {
        if (param_3 < 3) {
          return (&PTR_s_Pitch_ram_4009acb4_ram_4009bd18)[param_3];
        }
      }
      else if (bStack_15 == 1) {
        if (param_3 < 2) {
          return (&PTR_s_Position_ram_4009afb4_ram_4009bd10)[param_3];
        }
      }
      else if (bStack_15 == 2) {
        if (param_3 < 2) {
          return (&PTR_s_Width_ram_4009ad20_ram_4009bd00)[param_3];
        }
      }
      else if (bStack_15 == 3) {
        if (param_3 < 3) {
          return (&PTR_s_Position_ram_4009afb4_ram_4009bcf4)[param_3];
        }
      }
      else if (param_3 < 4) {
        return (&PTR_s_Position_ram_4009afb4_ram_4009bce4)[param_3];
      }
    }
  }
switchD_ram_40026140_default:
  return s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
}


/* NanoCore 1.12, address 0x40026e8a.
 * REA evidence: ev_b61d0aafa3c9f693e8a46acc6bd2bd52abd4acbf101148bf14052edb1a8a9b2d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint nc_effect_parameter_count(int param_1,byte param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  byte bStack_15;
  int aiStack_14 [3];
  
  bStack_15 = param_2;
  aiStack_14[0] = param_1;
  if (param_1 == 10) {
    uVar1 = FUN_ram_400749e2(param_2);
    return uVar1;
  }
  FUN_ram_40025be8(aiStack_14,&bStack_15);
  uVar1 = param_3 - 1;
  switch(aiStack_14[0]) {
  case 0:
    uVar1 = 7;
    if ((bStack_15 == 2) || (uVar1 = 6, bStack_15 == 3)) goto LAB_ram_40026f60;
    goto switchD_ram_40027020_caseD_8;
  case 1:
    if (bStack_15 == 8) {
joined_r0x40027038:
      if (1 < uVar1) {
        return 4;
      }
      goto switchD_ram_40026ed2_caseD_3;
    }
    if (bStack_15 != 9) {
      if (bStack_15 == 10) goto LAB_ram_40026f18;
      if (bStack_15 != 0xb) {
        uVar1 = 3;
        if (2 < (byte)(bStack_15 - 5)) goto LAB_ram_40026f60;
        goto LAB_ram_40026f36;
      }
    }
    goto LAB_ram_40026f0a;
  case 3:
switchD_ram_40026ed2_caseD_3:
    uVar1 = 3;
    goto LAB_ram_40026f60;
  case 4:
    if (bStack_15 < 8) {
      if (bStack_15 != 4) {
        if (4 < bStack_15) goto LAB_ram_40026f18;
        if (bStack_15 != 1) {
          if (bStack_15 == 2) {
            uVar1 = nc_delay_parameter_count(2);
            goto LAB_ram_40026f60;
          }
          goto LAB_ram_40026f0a;
        }
      }
      goto joined_r0x40027038;
    }
LAB_ram_40026f0a:
    if (1 < uVar1) {
      return 5;
    }
switchD_ram_40027020_caseD_7:
    uVar1 = 4;
    goto LAB_ram_40026f60;
  case 5:
    if (bStack_15 != 0xe) {
      if (bStack_15 == 0x10) goto LAB_ram_40026ffc;
      if (bStack_15 == 0x11) {
        uVar2 = 8;
        goto joined_r0x40026f90;
      }
      if (bStack_15 == 0xb) goto switchD_ram_40027020_caseD_7;
      if ((byte)(bStack_15 - 0xc) < 2) goto LAB_ram_40026f0a;
      if (bStack_15 != 0x12) {
        if (bStack_15 == 9) goto LAB_ram_40026f0a;
        if ((bStack_15 & 0xfd) != 8) {
          if (bStack_15 == 0) {
            uVar2 = 3;
            goto joined_r0x4002702e;
          }
          if (bStack_15 != 3) {
            if (bStack_15 == 4) {
              if (1 < uVar1) {
                return 5;
              }
              uVar1 = 4;
              goto LAB_ram_40026f60;
            }
            goto joined_r0x40027038;
          }
          goto LAB_ram_40026f18;
        }
      }
    }
    break;
  case 6:
    if (bStack_15 != 7) {
LAB_ram_40026f18:
      uVar2 = 6;
joined_r0x40026f90:
      if (1 < uVar1) {
        return uVar2;
      }
    }
    break;
  case 7:
    uVar1 = 4;
    if ((bStack_15 == 0) || (uVar1 = 9, bStack_15 != 1)) goto LAB_ram_40026f60;
LAB_ram_40026ffc:
    uVar1 = 7;
    goto LAB_ram_40026f60;
  case 9:
    uVar2 = (uint)bStack_15;
    switch(uVar2 - 1 & 0xff) {
    case 0:
    case 1:
      if (1 < uVar1) {
        return 2;
      }
LAB_ram_40026f36:
      uVar1 = 1;
      break;
    case 2:
joined_r0x4002702e:
      if (1 < uVar1) {
        return uVar2;
      }
    case 8:
switchD_ram_40027020_caseD_8:
      uVar1 = 2;
      break;
    case 3:
      goto switchD_ram_40026ed2_caseD_3;
    default:
      goto joined_r0x40027038;
    case 7:
    case 9:
      goto switchD_ram_40027020_caseD_7;
    case 10:
      goto switchD_ram_40026ed2_caseD_2;
    }
    goto LAB_ram_40026f60;
  }
switchD_ram_40026ed2_caseD_2:
  uVar1 = 5;
LAB_ram_40026f60:
  if (param_3 == 1) {
    if (0xc < uVar1) {
      uVar1 = 0xc;
    }
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40027192.
 * REA evidence: ev_55f8c8ec97c69e5b1f15c7051b30e2cf922e0a95696595b9b84c9ee2361fcd62
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400275d2) */
/* WARNING: Removing unreachable block (ram,0x400275e0) */

undefined4
nc_format_effect_parameter(undefined4 param_1,int param_2,byte param_3,uint param_4,int param_5,int param_6,
                undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  byte bStack_45;
  int aiStack_44 [3];
  
  uVar1 = 0;
  if (param_7 != (undefined4 *)0x0) {
    uVar1 = *param_7;
  }
  bStack_45 = param_3;
  aiStack_44[0] = param_2;
  uVar1 = FUN_ram_40025852(uVar1,&DAT_ram_4009a66c);
  uVar2 = 0;
  if (param_7 != (undefined4 *)0x0) {
    uVar2 = param_7[1];
  }
  uVar2 = FUN_ram_40025852(uVar2,&DAT_ram_4009a8f4);
  uVar3 = 0;
  if (param_7 != (undefined4 *)0x0) {
    uVar3 = param_7[2];
  }
  uVar3 = FUN_ram_40025852(uVar3,&DAT_ram_4009a8f8);
  uVar4 = 0;
  if (param_7 != (undefined4 *)0x0) {
    uVar4 = param_7[3];
  }
  uVar4 = FUN_ram_40025852(uVar4,s_Phase_Dist_ram_4009fe2c + 8);
  uVar5 = 0;
  if (param_7 != (undefined4 *)0x0) {
    uVar5 = param_7[4];
  }
  uVar5 = FUN_ram_40025852(uVar5,&DAT_ram_4009a21c);
  uVar6 = 0;
  if (param_7 != (undefined4 *)0x0) {
    uVar6 = param_7[5];
  }
  uVar6 = FUN_ram_40025852(uVar6,&DAT_ram_4009c944);
  if ((param_5 == 0) || (param_6 == 0)) {
    return 0xffffffff;
  }
  FUN_ram_40025be8(aiStack_44,&bStack_45);
  fVar12 = (float)FUN_ram_40025860(param_1);
  if (aiStack_44[0] == 6) {
    if (bStack_45 == 7) {
      if (param_4 == 0) {
        uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_4009a378);
        FUN_ram_40025aa2(param_5,param_6,uVar1,uVar5);
        return 0;
      }
      if (param_4 != 1) {
        if (param_4 != 2) {
          FUN_ram_40025a6c(param_5,param_6);
          return 0;
        }
        FUN_ram_40073ad6();
        FUN_ram_4002593e(param_5,param_6,uVar1);
        return 0;
      }
      uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009a37c + DAT_ram_40099f7c) * DAT_ram_40099f38);
      FUN_ram_40025aa2(param_5,param_6,uVar1,uVar3);
      return 0;
    }
  }
  else if (aiStack_44[0] == 10) {
    uVar7 = FUN_ram_400749e2();
    if (uVar7 <= param_4) {
      return 0xffffffff;
    }
    iVar8 = FUN_ram_40074b8c(bStack_45,param_4);
    if (iVar8 != 0) {
      fVar12 = (float)(iVar8 + -1) * fVar12 + DAT_ram_4009675c;
      uVar1 = FUN_ram_40074bec(bStack_45,param_4,(uint)(-1 < (int)fVar12) * (int)fVar12);
      FUN_ram_40005520(param_5,param_6,&DAT_ram_4009a668,uVar1);
      return 0;
    }
    uVar7 = FUN_ram_40074a0e(bStack_45,6);
    if (param_4 == uVar7) {
      fVar12 = (float)FUN_ram_40074ca6(fVar12);
      FUN_ram_40005520(param_5,param_6,&DAT_ram_4009a8fc,
                       (uint)(-1 < (int)(fVar12 + DAT_ram_4009675c)) *
                       (int)(fVar12 + DAT_ram_4009675c));
      return 0;
    }
    uVar7 = FUN_ram_40074a0e(bStack_45,3);
    if (param_4 != uVar7) {
      if ((bStack_45 == 0) && (uVar7 = FUN_ram_40074a0e(0,4), param_4 == uVar7)) {
        uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_4009b128);
        FUN_ram_40025aa2(param_5,param_6,uVar1,&DAT_ram_4009a90c);
        return 0;
      }
      FUN_ram_40025a6c(fVar12,param_5,param_6);
      return 0;
    }
    if (fVar12 < 0.0) {
      fVar12 = 0.0;
    }
    else if (DAT_ram_4009672c < fVar12) {
      fVar12 = DAT_ram_4009672c;
    }
    fVar12 = fVar12 * fVar12 * DAT_ram_4009b124 + (float)PTR_entry_ram_40096740 + DAT_ram_4009675c;
    FUN_ram_40005520(param_5,param_6,&DAT_ram_4009a904,(uint)(-1 < (int)fVar12) * (int)fVar12);
    return 0;
  }
  switch(aiStack_44[0]) {
  case 0:
    if (bStack_45 == 0) {
      if (param_4 == 0) {
LAB_ram_40027482:
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_40096780 + DAT_ram_4009a334) * DAT_ram_40099f38);
        FUN_ram_40025aa2(param_5,param_6,uVar1,uVar2);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009a364 + DAT_ram_40099f7c) * DAT_ram_40099f38);
        FUN_ram_40025aa2(param_5,param_6,uVar1,uVar3);
        return 0;
      }
    }
    else {
      if (bStack_45 == 2) {
        if (param_4 == 0) goto LAB_ram_40027482;
      }
      else if (bStack_45 == 1) {
        if (param_4 == 0) {
          fVar12 = (float)FUN_ram_40025860(fVar12);
          uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009a330 + DAT_ram_4009b12c) * DAT_ram_40099f38
                                  );
          FUN_ram_40025aa2(param_5,param_6,uVar1,uVar2);
          return 0;
        }
        if (param_4 == 1) {
          fVar12 = (float)FUN_ram_40025860(fVar12);
          uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009b130 + DAT_ram_40099f50) * DAT_ram_40099f38
                                  );
          FUN_ram_40025aa2(param_5,param_6,uVar1,uVar3);
          return 0;
        }
        goto LAB_ram_4002754e;
      }
      if (bStack_45 == 3) {
        param_4 = param_4 + 1 & 0xff;
      }
    }
LAB_ram_4002754e:
    if ((byte)(bStack_45 - 2) < 2) {
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009a564 + DAT_ram_4009a568) * DAT_ram_40099f38);
        FUN_ram_40025aa2(param_5,param_6,uVar1,uVar2);
        return 0;
      }
      if (param_4 == 2) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        iVar8 = FUN_ram_40025884((fVar12 * DAT_ram_4009b134 + DAT_ram_4009672c) * DAT_ram_40099f38);
        FUN_ram_40005520(param_5,param_6,s__ld__ld_1_ram_4009a910,iVar8 / 10,iVar8 % 10);
        return 0;
      }
      if (param_4 == 3) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009a328 + 0.0) * DAT_ram_40099f38);
        FUN_ram_40025aa2(param_5,param_6,uVar1,uVar2);
        return 0;
      }
      if (param_4 == 4) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009b128 + 0.0) * DAT_ram_40099f38);
        FUN_ram_40025aa2(param_5,param_6,uVar1,uVar3);
        return 0;
      }
      if (param_4 == 5) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_40099f28 + 0.0) * DAT_ram_40099f38);
        FUN_ram_40025aa2(param_5,param_6,uVar1,uVar3);
        return 0;
      }
      if (param_4 == 6) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009b138 + DAT_ram_4009a324) * DAT_ram_40099f38);
        FUN_ram_40025aa2(param_5,param_6,uVar1,uVar2);
        return 0;
      }
    }
    break;
  case 1:
    if (bStack_45 == 8) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_4009b138 + DAT_ram_4009a324);
        FUN_ram_40005520(param_5,param_6,s__ld__s_ram_4009a308,uVar1,uVar4);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * (float)PTR_entry_ram_40096740 + DAT_ram_40096728) *
                                 DAT_ram_40096780);
        FUN_ram_40025aee(param_5,param_6,uVar1,uVar4);
        return 0;
      }
      if ((param_4 - 2 & 0xff) < 2) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 9) {
      if (param_4 == 0) {
        FUN_ram_40025ba6(fVar12,DAT_ram_40099f38,DAT_ram_4009a338);
        FUN_ram_4002593e(param_5,param_6,uVar1);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        FUN_ram_4002593e(fVar12 * DAT_ram_4009a338 + 0.0,param_5,param_6,uVar1);
        return 0;
      }
      if (param_4 == 2) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009b13c + DAT_ram_40099f88) * DAT_ram_40099f38);
        FUN_ram_40025aa2(param_5,param_6,uVar1,0);
        return 0;
      }
      if ((param_4 - 3 & 0xff) < 2) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 10) {
      if (param_4 == 0) {
        uVar15 = FUN_ram_40025860(fVar12);
        fVar11 = (float)uVar15;
        fVar13 = (float)FUN_ram_40025ba6(uVar15,DAT_ram_4009a340,DAT_ram_4009a344);
        fVar14 = DAT_ram_4009b140;
        fVar12 = DAT_ram_4009b144;
        if (DAT_ram_4009675c <= fVar11) {
          fVar11 = fVar11 - DAT_ram_4009675c;
          fVar14 = DAT_ram_40099f84;
          fVar12 = DAT_ram_4009672c;
        }
        FUN_ram_4002593e(fVar13 * (fVar11 * fVar14 + fVar12),param_5,param_6,uVar1);
        return 0;
      }
      if ((param_4 == 1) || ((param_4 - 3 & 0xff) < 3)) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
      if (param_4 == 2) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar2 = FUN_ram_40025884((fVar12 * DAT_ram_40096764 + 0.0) * DAT_ram_40096780);
        FUN_ram_40025aee(param_5,param_6,uVar2,uVar1);
        return 0;
      }
    }
    else if (bStack_45 == 0xb) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        FUN_ram_4002593e(fVar12 * DAT_ram_40099f44 + 0.0,param_5,param_6,uVar1);
        return 0;
      }
      if ((param_4 - 1 & 0xff) < 4) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
    }
    else {
      if (param_4 == 0) {
        uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_40096780);
        FUN_ram_40025aee(param_5,param_6,uVar1,0);
        return 0;
      }
      if ((param_4 - 1 & 0xff) < 2) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
    }
    break;
  case 2:
    if (param_4 == 0) {
      uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_40096780);
      FUN_ram_40025aee(param_5,param_6,uVar1,0);
      return 0;
    }
    if ((param_4 - 1 & 0xff) < 3) {
      fVar12 = (float)FUN_ram_40025860(fVar12);
      uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_40099f50 + DAT_ram_4009a354) * DAT_ram_40099f38);
      FUN_ram_40025aa2(param_5,param_6,uVar1,uVar2);
      return 0;
    }
    if (param_4 == 4) {
      FUN_ram_40025a6c(fVar12,param_5,param_6);
      return 0;
    }
    break;
  case 3:
    if (param_4 == 0) {
      FUN_ram_40025ba6(fVar12,DAT_ram_40099f50,DAT_ram_4009a358);
      FUN_ram_4002593e(param_5,param_6,uVar1);
      return 0;
    }
    if (param_4 == 1) {
      FUN_ram_40025ba6(fVar12,DAT_ram_4009a35c,DAT_ram_4009a338);
      FUN_ram_4002593e(param_5,param_6,uVar1);
      return 0;
    }
    if (param_4 == 2) {
      FUN_ram_40025a6c(fVar12,param_5,param_6);
      return 0;
    }
    break;
  case 4:
    if (bStack_45 < 8) {
      if (bStack_45 < 5) {
        if (bStack_45 == 0) goto LAB_ram_40027c6a;
LAB_ram_40027b6c:
        if (param_4 == 0) {
          fVar12 = (float)FUN_ram_40025860(fVar12);
          fVar12 = fVar12 * DAT_ram_4009b148 + DAT_ram_40099f88;
          uVar15 = FUN_ram_40025884(fVar12 * DAT_ram_40099f38);
          iVar8 = (int)uVar15;
          if (999 < iVar8) {
            uVar1 = FUN_ram_40025884(fVar12,iVar8,(int)((ulonglong)uVar15 >> 0x20),iVar8);
            FUN_ram_40025910(param_5,param_6,uVar1,uVar3);
            return 0;
          }
          FUN_ram_40025aa2(param_5,param_6,iVar8,uVar3);
          return 0;
        }
        if (param_4 == 1) {
          fVar12 = (float)FUN_ram_40025860(fVar12);
          uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_4009a364 + 0.0);
          FUN_ram_40005520(param_5,param_6,&DAT_ram_4009a220,uVar1);
          return 0;
        }
        if (bStack_45 == 0) goto LAB_ram_40027cd8;
        if (bStack_45 == 3) {
          if (param_4 == 2) {
            fVar12 = (float)FUN_ram_40025860(fVar12);
            puVar9 = &DAT_ram_4009b3b0;
            iVar8 = 0;
            fVar12 = fVar12 * DAT_ram_4009a328 + DAT_ram_4009a32c;
            iVar10 = 1;
            fVar14 = ABS(fVar12 + DAT_ram_4009a330);
            do {
              fVar11 = ABS(fVar12 - (float)*(undefined8 *)(puVar9 + 4));
              if (fVar11 < fVar14) {
                iVar8 = iVar10;
                fVar14 = fVar11;
              }
              iVar10 = iVar10 + 1;
              puVar9 = puVar9 + 4;
            } while (iVar10 != 0x1e);
            FUN_ram_40025b3c(*(undefined8 *)(&DAT_ram_4009b3b0 + iVar8 * 4),param_5,param_6,uVar4);
            return 0;
          }
          if ((param_4 - 3 & 0xff) < 2) {
            FUN_ram_40025a6c(fVar12,param_5,param_6);
            return 0;
          }
          break;
        }
      }
      else if ((byte)(bStack_45 - 6) < 2) goto LAB_ram_40027b6c;
      if (bStack_45 == 5) {
        if (param_4 == 0) {
          fVar12 = (float)FUN_ram_40025860(fVar12);
          fVar12 = fVar12 * DAT_ram_4009b150 + (float)PTR_entry_ram_40096740;
          uVar15 = FUN_ram_40025884(fVar12 * DAT_ram_40099f38);
          iVar8 = (int)uVar15;
          if (999 < iVar8) {
            uVar1 = FUN_ram_40025884(fVar12,iVar8,(int)((ulonglong)uVar15 >> 0x20),iVar8);
            FUN_ram_40025910(param_5,param_6,uVar1,uVar3);
            return 0;
          }
          FUN_ram_40025aa2(param_5,param_6,iVar8,uVar3);
          return 0;
        }
        if (param_4 == 1) {
          fVar12 = (float)FUN_ram_40025860(fVar12);
          uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_4009a364 + 0.0);
          FUN_ram_40005520(param_5,param_6,&DAT_ram_4009a220,uVar1);
          return 0;
        }
        if (param_4 == 2) {
          fVar12 = (float)FUN_ram_40025860(fVar12);
          puVar9 = &DAT_ram_4009b428;
          iVar8 = 0;
          fVar12 = fVar12 * DAT_ram_4009a330 + DAT_ram_40099f30;
          iVar10 = 1;
          fVar14 = ABS(fVar12 - DAT_ram_40099f30);
          do {
            fVar11 = ABS(fVar12 - (float)*(undefined8 *)(puVar9 + 4));
            if (fVar11 < fVar14) {
              iVar8 = iVar10;
              fVar14 = fVar11;
            }
            iVar10 = iVar10 + 1;
            puVar9 = puVar9 + 4;
          } while (iVar10 != 0x15);
          FUN_ram_40025b3c(*(undefined8 *)(&DAT_ram_4009b428 + iVar8 * 4),param_5,param_6,uVar6);
          return 0;
        }
        if ((param_4 - 3 & 0xff) < 3) {
          FUN_ram_40025a6c(fVar12,param_5,param_6);
          return 0;
        }
      }
      else if (bStack_45 == 7) {
        if (param_4 == 2) {
          fVar12 = (float)FUN_ram_40025860(fVar12);
          uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_40099f50 + 0.0) * DAT_ram_40099f38);
          FUN_ram_40025aa2(param_5,param_6,uVar1,uVar3);
          return 0;
        }
        if (param_4 == 3) {
          fVar12 = (float)FUN_ram_40025860(fVar12);
          FUN_ram_4002593e(fVar12 * DAT_ram_4009b154 + DAT_ram_40099f6c,param_5,param_6,uVar1);
          return 0;
        }
        if ((param_4 - 4 & 0xff) < 2) {
          FUN_ram_40025a6c(fVar12,param_5,param_6);
          return 0;
        }
      }
      else if ((bStack_45 == 1) || (bStack_45 == 4)) {
        if ((param_4 - 2 & 0xff) < 2) {
          FUN_ram_40025a6c(fVar12,param_5,param_6);
          return 0;
        }
      }
      else if (bStack_45 == 2) {
        if (param_4 == 4) {
          fVar12 = (float)FUN_ram_40025860(fVar12);
          uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009b158 + DAT_ram_40099f88) * DAT_ram_40099f38
                                  );
          FUN_ram_40025aa2(param_5,param_6,uVar1,uVar3);
          return 0;
        }
        if (param_4 == 5) {
          fVar12 = (float)FUN_ram_40025860(fVar12);
          uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_4009b15c + DAT_ram_40099f38);
          FUN_ram_40025910(param_5,param_6,uVar1,uVar3);
          return 0;
        }
        if ((param_4 - 2 & 0xff) < 6) {
          FUN_ram_40025a6c(fVar12,param_5,param_6);
          return 0;
        }
      }
      else if ((bStack_45 == 6) && ((param_4 - 2 & 0xff) < 4)) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
    }
    else {
LAB_ram_40027c6a:
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_4009b14c + DAT_ram_4009672c);
        FUN_ram_40025910(param_5,param_6,uVar1,uVar3);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_4009a364 + 0.0);
        FUN_ram_40005520(param_5,param_6,&DAT_ram_4009a220,uVar1);
        return 0;
      }
LAB_ram_40027cd8:
      if ((param_4 - 2 & 0xff) < 3) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
    }
    break;
  case 5:
    if (bStack_45 == 0xe) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        FUN_ram_4002593e(fVar12 * DAT_ram_4009b160 + DAT_ram_40099f6c,param_5,param_6,uVar1);
        return 0;
      }
      if ((param_4 & 0xfd) == 1) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
      if (param_4 == 2) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009b164 + DAT_ram_4009b168) * DAT_ram_4009b16c *
                                 DAT_ram_40096780);
        FUN_ram_40025aee(param_5,param_6,uVar1,uVar3);
        return 0;
      }
      if (param_4 == 4) {
        uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_4009b170);
        FUN_ram_40005520(param_5,param_6,&DAT_ram_4009a220,uVar1);
        return 0;
      }
    }
    else if (bStack_45 == 0x10) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        FUN_ram_4002593e(fVar12 * DAT_ram_4009b160 + DAT_ram_40099f6c,param_5,param_6,uVar1);
        return 0;
      }
      if ((param_4 == 1) || (param_4 == 4)) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
      if (param_4 == 2) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009b174 + DAT_ram_4009b178) * DAT_ram_40096780);
        FUN_ram_40025aee(param_5,param_6,uVar1,0);
        return 0;
      }
      if (param_4 == 3) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_4009673c + DAT_ram_4009672c);
        FUN_ram_40005520(param_5,param_6,&DAT_ram_4009a220,uVar1);
        return 0;
      }
      if (param_4 == 5) {
        uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_4009b128);
        FUN_ram_40005520(param_5,param_6,&DAT_ram_4009a220,uVar1);
        return 0;
      }
      if (param_4 == 6) {
        uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_4009b170);
        FUN_ram_40005520(param_5,param_6,&DAT_ram_4009a220,uVar1);
        return 0;
      }
    }
    else if (bStack_45 == 0x11) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        FUN_ram_4002593e(fVar12 * DAT_ram_4009b160 + DAT_ram_40099f6c,param_5,param_6,uVar1);
        return 0;
      }
      if ((param_4 & 0xfb) == 1) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
      if (param_4 == 2) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009b17c + DAT_ram_40096764) * DAT_ram_4009b16c *
                                 DAT_ram_40096780);
        FUN_ram_40025aee(param_5,param_6,uVar1,uVar3);
        return 0;
      }
      if (param_4 == 3) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_40099f48 + DAT_ram_4009a36c);
        FUN_ram_40005520(param_5,param_6,&DAT_ram_4009a220,uVar1);
        return 0;
      }
      if (param_4 == 4) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        FUN_ram_4002593e(fVar12 * DAT_ram_40099f28 + 0.0,param_5,param_6,uVar1);
        return 0;
      }
      if (param_4 == 6) {
        uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_4009b128);
        FUN_ram_40005520(param_5,param_6,&DAT_ram_4009a220,uVar1);
        return 0;
      }
      if (param_4 == 7) {
        uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_4009b170);
        FUN_ram_40005520(param_5,param_6,&DAT_ram_4009a220,uVar1);
        return 0;
      }
    }
    else if (bStack_45 == 0xc) {
      if (param_4 == 2) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        FUN_ram_4002593e(fVar12 * DAT_ram_4009b154 + DAT_ram_40099f6c,param_5,param_6,uVar1);
        return 0;
      }
      if ((param_4 - 1 & 0xff) < 4) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 0xd) {
      if (param_4 == 2) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        FUN_ram_4002593e(fVar12 * DAT_ram_4009b154 + DAT_ram_40099f6c,param_5,param_6,uVar1);
        return 0;
      }
      if (param_4 == 3) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_4009b128 + DAT_ram_4009a334);
        FUN_ram_40005520(param_5,param_6,&DAT_ram_4009a220,uVar1);
        return 0;
      }
      if ((param_4 == 1) || (param_4 == 4)) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 0x12) {
      if (param_4 == 0) {
        FUN_ram_40025ba6(fVar12,DAT_ram_40099f38,DAT_ram_4009b180);
        FUN_ram_4002593e(param_5,param_6,uVar1);
        return 0;
      }
      if (param_4 == 3) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_4009b128 + DAT_ram_4009a334);
        FUN_ram_40005520(param_5,param_6,&DAT_ram_4009a220,uVar1);
        return 0;
      }
      if (((param_4 - 1 & 0xff) < 2) || (param_4 == 4)) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 0) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        FUN_ram_4002593e(fVar12 * DAT_ram_4009b184 + DAT_ram_40099f88,param_5,param_6,uVar1);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 + 0.0) * DAT_ram_40096780);
        FUN_ram_40025aee(param_5,param_6,uVar1,uVar3);
        return 0;
      }
      if (param_4 == 2) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
    }
    else if ((byte)(bStack_45 - 1) < 2) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        FUN_ram_4002593e(fVar12 * DAT_ram_4009b154 + DAT_ram_40099f6c,param_5,param_6,uVar1);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_40099f48 + DAT_ram_4009a36c);
        FUN_ram_40005520(param_5,param_6,&DAT_ram_4009a220,uVar1);
        return 0;
      }
      if ((param_4 - 2 & 0xff) < 2) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 8) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        FUN_ram_4002593e(fVar12 * DAT_ram_4009b188 + DAT_ram_40099f88,param_5,param_6,uVar1);
        return 0;
      }
      if ((param_4 - 1 & 0xff) < 4) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 9) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        FUN_ram_4002593e(fVar12 * DAT_ram_40099f44 + 0.0,param_5,param_6,uVar1);
        return 0;
      }
      if ((param_4 - 1 & 0xff) < 4) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 10) {
      if (param_4 == 0) {
        FUN_ram_40025ba6(fVar12,DAT_ram_4009b18c,DAT_ram_40099f38);
        FUN_ram_4002593e(param_5,param_6,uVar1);
        return 0;
      }
      if ((param_4 - 1 & 0xff) < 4) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 3) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        FUN_ram_4002593e(fVar12 * DAT_ram_4009b190 + DAT_ram_4009a370,param_5,param_6,uVar1);
        return 0;
      }
      if ((param_4 == 1) || ((param_4 - 4 & 0xff) < 2)) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
      if (param_4 == 2) {
        uVar1 = FUN_ram_400258a6(fVar12,param_7);
        FUN_ram_40005520(param_5,param_6,&DAT_ram_4009a668,uVar1);
        return 0;
      }
      if (param_4 == 3) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        FUN_ram_4002593e(fVar12 * DAT_ram_40099f70 + 0.0,param_5,param_6,uVar1);
        return 0;
      }
    }
    else if (bStack_45 == 4) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        FUN_ram_4002593e(fVar12 * DAT_ram_4009b190 + DAT_ram_4009a370,param_5,param_6,uVar1);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_40099f50 + 0.0) * DAT_ram_40099f38);
        FUN_ram_40025aa2(param_5,param_6,uVar1,uVar3);
        return 0;
      }
      if (param_4 == 2) {
        uVar1 = FUN_ram_400258a6(fVar12,param_7);
        FUN_ram_40005520(param_5,param_6,&DAT_ram_4009a668,uVar1);
        return 0;
      }
      if ((param_4 - 3 & 0xff) < 2) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
    }
    break;
  case 6:
    if (bStack_45 == 6) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009b194 + DAT_ram_4009675c) * DAT_ram_40099f38);
        FUN_ram_40025aa2(param_5,param_6,uVar1,uVar5);
        return 0;
      }
      if (param_4 == 3) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        FUN_ram_4002593e(fVar12 * DAT_ram_4009b198 + DAT_ram_40099f34,param_5,param_6,uVar1);
        return 0;
      }
      if (((param_4 - 1 & 0xff) < 2) || ((param_4 - 4 & 0xff) < 2)) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 5) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009b194 + DAT_ram_4009675c) * DAT_ram_40099f38);
        FUN_ram_40025aa2(param_5,param_6,uVar1,uVar5);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009a380 + 0.0) * DAT_ram_40099f38);
        FUN_ram_40025aa2(param_5,param_6,uVar1,uVar3);
        return 0;
      }
      if (param_4 == 3) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_4009b138 + DAT_ram_4009a324);
        FUN_ram_40005520(param_5,param_6,s__ld__s_ram_4009a308,uVar1,uVar4);
        return 0;
      }
      if ((param_4 == 2) || ((param_4 - 4 & 0xff) < 2)) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
    }
    else if ((bStack_45 - 7 & 0xfd) == 0) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009b194 + DAT_ram_4009675c) * DAT_ram_40099f38);
        FUN_ram_40025aa2(param_5,param_6,uVar1,uVar5);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009a37c + DAT_ram_40099f7c) * DAT_ram_40099f38);
        FUN_ram_40025aa2(param_5,param_6,uVar1,uVar3);
        return 0;
      }
      if (param_4 == 2) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        FUN_ram_4002593e(fVar12 * DAT_ram_4009b19c + DAT_ram_4009b1a0,param_5,param_6,uVar1);
        return 0;
      }
      if ((param_4 - 3 & 0xff) < 3) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
    }
    else {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009b194 + DAT_ram_4009675c) * DAT_ram_40099f38);
        FUN_ram_40025aa2(param_5,param_6,uVar1,uVar5);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009a380 + 0.0) * DAT_ram_40099f38);
        FUN_ram_40025aa2(param_5,param_6,uVar1,uVar3);
        return 0;
      }
      if ((param_4 - 2 & 0xff) < 4) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
    }
    break;
  case 7:
    if (bStack_45 < 2) {
      if (bStack_45 == 1) {
        if (param_4 < 6) {
LAB_ram_40028ad0:
          fVar12 = (float)FUN_ram_40025860(fVar12);
          uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009b1a4 + DAT_ram_4009a384) * DAT_ram_40099f38
                                  );
          FUN_ram_40025aa2(param_5,param_6,uVar1,uVar2);
          return 0;
        }
        uVar7 = 6;
      }
      else {
        if (param_4 < 3) goto LAB_ram_40028ad0;
        uVar7 = 3;
      }
    }
    else {
      if (param_4 < 8) goto LAB_ram_40028ad0;
      uVar7 = 8;
    }
    if (param_4 == uVar7) {
      fVar12 = (float)FUN_ram_40025860(fVar12);
      uVar1 = FUN_ram_40025884((fVar12 * DAT_ram_4009a328 + DAT_ram_4009a32c) * DAT_ram_40099f38);
      FUN_ram_40025aa2(param_5,param_6,uVar1,uVar2);
      return 0;
    }
    break;
  case 9:
    if (bStack_45 == 4) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_4009b138 + DAT_ram_4009a324);
        FUN_ram_40005520(param_5,param_6,s__ld__s_ram_4009a308,uVar1,uVar4);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40025860(fVar12);
        uVar1 = FUN_ram_40025884((fVar12 * (float)PTR_entry_ram_40096740 + DAT_ram_40096728) *
                                 DAT_ram_40096780);
        FUN_ram_40025aee(param_5,param_6,uVar1,uVar4);
        return 0;
      }
      if (param_4 == 2) {
        FUN_ram_40025a6c(fVar12,param_5,param_6);
        return 0;
      }
    }
  }
  uVar1 = FUN_ram_40025884(fVar12 * DAT_ram_40096780);
  FUN_ram_40025aee(param_5,param_6,uVar1,0);
  return 0;
}


