/* NanoCore 1.12: nc_effect_parameter_name at 0x4002607e.
 * Role: Reviewed Spring subtype7, Duck subtype2 and CAB parameter tables.
 * REA: ev_8bd57d13f00c718c23aadf36acfdbcdcacbaacbfb692a225d1df02096cee5252
 * Source: analysis/rea-1.12-effects/results/01977-export-0x4002607e.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
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

