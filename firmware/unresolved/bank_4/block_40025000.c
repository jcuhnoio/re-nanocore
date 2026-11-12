/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40025000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4002502c.
 * REA evidence: ev_9821702b0c1463c14260fa0b7153fcbec1af060bfaf477046baa4510fd7a63a8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_4002502c(undefined4 param_1,byte param_2,int param_3)

{
  char *pcVar1;
  undefined **ppuVar2;
  uint uVar3;
  byte bStack_15;
  undefined4 auStack_14 [4];
  
  bStack_15 = param_2;
  auStack_14[0] = param_1;
  FUN_ram_40024e8c(auStack_14,&bStack_15);
  if (param_3 != 2) {
    switch(auStack_14[0]) {
    case 0:
      if (bStack_15 == 2) {
        return s_NG_Com_ram_40093868;
      }
      if (bStack_15 == 3) {
        return s_compressor_ram_40093870;
      }
      if (bStack_15 == 1) {
        return s_auto_gate_ram_4009387c;
      }
      return &DAT_ram_40093894;
    case 1:
      if (bStack_15 == 8) {
        return s_pitch_ram_4009389c;
      }
      if (bStack_15 == 9) {
        return s_env_wah_ram_400938b0;
      }
      if (bStack_15 == 10) {
        return s_auto_wah_ram_400938a4;
      }
      if (bStack_15 != 0xb) {
        return s_distortion_ram_4009385c;
      }
      return s_motion_wah_ram_40093844;
    default:
      pcVar1 = (char *)FUN_ram_40024f08();
      return pcVar1;
    case 4:
      if (7 < bStack_15) {
        return &DAT_ram_40093850;
      }
      uVar3 = (uint)(byte)(bStack_15 - 1);
      if (6 < uVar3) {
        return &DAT_ram_40093850;
      }
      ppuVar2 = &PTR_s_digital_ram_40093ba8_ram_40094310;
      break;
    case 5:
      uVar3 = bStack_15 - 1 & 0xff;
      if (0x10 < uVar3) {
        return s_chorus_ram_40093854;
      }
      ppuVar2 = &PTR_s_phaser_ram_40093b2c_ram_4009432c;
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
      ppuVar2 = &PTR_DAT_ram_40093adc_ram_40094370;
      break;
    case 7:
      if (bStack_15 == 0) {
        return &DAT_ram_4009388c;
      }
      if (bStack_15 != 1) {
        return &DAT_ram_40093890;
      }
      return &DAT_ram_400938b8;
    case 9:
      uVar3 = bStack_15 - 1 & 0xff;
      if (10 < uVar3) {
        return s_usb_volume_ram_40094fb4 + 4;
      }
      ppuVar2 = (undefined **)&DAT_ram_40094398;
    }
    goto LAB_ram_40025114;
  }
  switch(auStack_14[0]) {
  case 0:
    pcVar1 = &DAT_ram_400938d4;
    if (((bStack_15 != 2) && (pcVar1 = &DAT_ram_40093814, bStack_15 != 3)) &&
       (pcVar1 = s_AUTO_GATE_ram_4009381c, bStack_15 != 1)) {
      pcVar1 = &DAT_ram_40093828;
    }
    break;
  case 1:
    pcVar1 = s_PITCH_ram_40093830;
    if ((((bStack_15 != 8) && (pcVar1 = &DAT_ram_40093838, bStack_15 != 9)) &&
        (pcVar1 = &DAT_ram_4009383c, bStack_15 != 10)) &&
       (pcVar1 = s_MOTION_WAH_ram_400933d0, bStack_15 != 0xb)) {
      pcVar1 = &DAT_ram_400938dc;
    }
    break;
  case 2:
    pcVar1 = s_NO_PROFILE_ram_40093800;
    break;
  case 3:
    pcVar1 = s_NO_IR_ram_4009380c;
    break;
  case 4:
    if (7 < bStack_15) {
      return &DAT_ram_40093888;
    }
    uVar3 = (uint)(byte)(bStack_15 - 1);
    if (6 < uVar3) {
      return &DAT_ram_40093888;
    }
    ppuVar2 = &PTR_s_DIGITAL_ram_40093cd8_ram_4009425c;
    goto LAB_ram_40025114;
  case 5:
    uVar3 = bStack_15 - 1 & 0xff;
    if (0x10 < uVar3) {
      return s_CHORUS_ram_400938c0;
    }
    ppuVar2 = &PTR_s_PHASER_ram_40093c5c_ram_40094278;
    goto LAB_ram_40025114;
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
    ppuVar2 = &PTR_DAT_ram_40093c0c_ram_400942bc;
    goto LAB_ram_40025114;
  case 7:
    pcVar1 = &DAT_ram_400938bc;
    if ((bStack_15 != 0) && (pcVar1 = &DAT_ram_40093840, bStack_15 == 1)) {
      pcVar1 = &DAT_ram_400938c8;
    }
    break;
  default:
    pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
    break;
  case 9:
    uVar3 = bStack_15 - 1 & 0xff;
    if (10 < uVar3) {
      return s_VOLUME_ram_400938cc;
    }
    ppuVar2 = &PTR_DAT_ram_40093bd4_ram_400942e4;
LAB_ram_40025114:
    pcVar1 = ppuVar2[uVar3];
  }
  return pcVar1;
}


/* NanoCore 1.10, address 0x40025306.
 * REA evidence: ev_4df9a305b2edcbb59949554b7b3e8eaa932e3c80036f1e0c511577b205648496
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_40025306(undefined4 param_1,byte param_2,uint param_3,int param_4)

{
  char *pcVar1;
  undefined **ppuVar2;
  byte bStack_15;
  undefined4 auStack_14 [4];
  
  bStack_15 = param_2;
  auStack_14[0] = param_1;
  FUN_ram_40024e8c(auStack_14,&bStack_15);
  if (param_4 == 2) {
    switch(auStack_14[0]) {
    case 0:
      goto switchD_ram_4002534a_caseD_0;
    case 1:
      if (bStack_15 == 8) {
        if (3 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_s_PITCH_ram_40093830_ram_40094acc)[param_3];
      }
      if (bStack_15 == 9) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_DAT_ram_4009403c_ram_40094ab8)[param_3];
      }
      if (bStack_15 == 10) {
        if (5 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_DAT_ram_4009403c_ram_40094aa0)[param_3];
      }
      if (bStack_15 == 0xb) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_DAT_ram_40093f90_ram_40094a8c)[param_3];
      }
      if (2 < (byte)(bStack_15 - 5)) {
        if (2 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_DAT_ram_40094024_ram_40094a80)[param_3];
      }
      if (param_3 != 0) {
        return s_ep__02x_clear_halt_ram_40092960 + 0x14;
      }
      return s_BOOST_ram_4009393c;
    case 2:
      if (4 < param_3) {
        return s_ep__02x_clear_halt_ram_40092960 + 0x14;
      }
      return (&PTR_DAT_ram_40094024_ram_40094a6c)[param_3];
    case 3:
      if (1 < param_3) {
        return s_ep__02x_clear_halt_ram_40092960 + 0x14;
      }
      return (&PTR_s_LOCUT_ram_40094014_ram_40094a54)[param_3];
    case 4:
      if (bStack_15 < 8) {
        switch(bStack_15) {
        case 1:
        case 4:
          if (2 < param_3) {
            return s_ep__02x_clear_halt_ram_40092960 + 0x14;
          }
          return (&PTR_DAT_ram_40093ff4_ram_40094a44)[param_3];
        case 2:
          if (3 < param_3) {
            return s_ep__02x_clear_halt_ram_40092960 + 0x14;
          }
          return (&PTR_DAT_ram_40093ff4_ram_40094a30)[param_3];
        case 3:
          if (3 < param_3) {
            return s_ep__02x_clear_halt_ram_40092960 + 0x14;
          }
          return (&PTR_DAT_ram_40093ff4_ram_40094a1c)[param_3];
        case 5:
          if (4 < param_3) {
            return s_ep__02x_clear_halt_ram_40092960 + 0x14;
          }
          return (&PTR_DAT_ram_40093ff4_ram_40094a04)[param_3];
        case 6:
          if (4 < param_3) {
            return s_ep__02x_clear_halt_ram_40092960 + 0x14;
          }
          return (&PTR_DAT_ram_40093ff4_ram_400949ec)[param_3];
        case 7:
          if (4 < param_3) {
            return s_ep__02x_clear_halt_ram_40092960 + 0x14;
          }
          return (&PTR_DAT_ram_40093ff4_ram_400949d4)[param_3];
        }
      }
      if (3 < param_3) {
        return s_ep__02x_clear_halt_ram_40092960 + 0x14;
      }
      return (&PTR_s_DELAY_ram_40093fcc_ram_400949c0)[param_3];
    case 5:
      if (bStack_15 == 0xe) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_DAT_ram_40093f90_ram_400949ac)[param_3];
      }
      if (bStack_15 == 0x10) {
        if (6 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_DAT_ram_40093f90_ram_40094990)[param_3];
      }
      if (bStack_15 == 0x11) {
        if (7 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_DAT_ram_40093f90_ram_40094968)[param_3];
      }
      if (bStack_15 == 0xb) {
        if (3 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_DAT_ram_40093f90_ram_40094958)[param_3];
      }
      if (bStack_15 == 0xc) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_s__ram_40092960_0x14_ram_40094944)[param_3];
      }
      if (bStack_15 == 0xd) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_s__ram_40092960_0x14_ram_40094944)[param_3];
      }
      if (bStack_15 == 0) {
        if (1 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_DAT_ram_40093f90_ram_4009493c)[param_3];
      }
      if (bStack_15 == 8) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_DAT_ram_40093f90_ram_40094928)[param_3];
      }
      if (bStack_15 == 9) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_DAT_ram_40093f90_ram_40094a8c)[param_3];
      }
      if (bStack_15 == 10) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_DAT_ram_40093f90_ram_40094914)[param_3];
      }
      if (bStack_15 == 3) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_DAT_ram_40093f90_ram_40094900)[param_3];
      }
      if (bStack_15 != 4) {
        if (2 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_DAT_ram_40093f90_ram_400948d4)[param_3];
      }
      if (3 < param_3) {
        return s_ep__02x_clear_halt_ram_40092960 + 0x14;
      }
      return (&PTR_DAT_ram_40093f90_ram_400948f0)[param_3];
    case 6:
      if (bStack_15 == 6) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_s_DECAY_ram_40093f50_ram_400948c0)[param_3];
      }
      if (bStack_15 == 3) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_s_DECAY_ram_40093f50_ram_400948ac)[param_3];
      }
      if ((bStack_15 - 7 & 0xfd) == 0) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_s_DECAY_ram_40093f50_ram_40094898)[param_3];
      }
      if (bStack_15 == 5) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_s_DECAY_ram_40093f50_ram_40094884)[param_3];
      }
      if ((bStack_15 - 2 & 0xfd) != 0) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_s_DECAY_ram_40093f50_ram_4009485c)[param_3];
      }
      if (4 < param_3) {
        return s_ep__02x_clear_halt_ram_40092960 + 0x14;
      }
      return (&PTR_s_DECAY_ram_40093f50_ram_40094870)[param_3];
    case 7:
      if (bStack_15 == 0) {
        if (3 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_DAT_ram_40093f40_ram_4009484c)[param_3];
      }
      if (bStack_15 != 1) {
        if (8 < param_3) {
          return s_ep__02x_clear_halt_ram_40092960 + 0x14;
        }
        return (&PTR_DAT_ram_40093ef8_ram_4009480c)[param_3];
      }
      if (6 < param_3) {
        return s_ep__02x_clear_halt_ram_40092960 + 0x14;
      }
      return (&PTR_s_B_120_ram_40093f00_ram_40094830)[param_3];
    default:
      return s_ep__02x_clear_halt_ram_40092960 + 0x14;
    }
  }
  if (param_4 == 1) {
    switch(auStack_14[0]) {
    case 0:
      if (bStack_15 == 1) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        ppuVar2 = &PTR_s_Sensi_tivity_ram_40093ee8_ram_400947f0;
        if (1 < param_3) goto LAB_ram_400258ba;
      }
      else if (bStack_15 == 2) {
        if (6 < param_3) goto switchD_ram_4002589e_caseD_1;
        ppuVar2 = &PTR_DAT_ram_40093ee0_ram_400947d4;
      }
      else if (bStack_15 == 3) {
        if (5 < param_3) goto switchD_ram_4002589e_caseD_1;
        ppuVar2 = &PTR_s_Thresh_old_ram_40093eac_ram_400947bc;
      }
      else {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if ((bStack_15 != 0) || (1 < param_3)) goto LAB_ram_400258ba;
        ppuVar2 = &PTR_s_Thresh_old_ram_40093eac_ram_400947b4;
      }
      pcVar1 = ppuVar2[param_3];
      if (pcVar1 != (char *)0x0) goto LAB_ram_400258ba;
      break;
    default:
      goto switchD_ram_4002589e_caseD_1;
    case 3:
      if (2 < param_3) goto switchD_ram_4002589e_caseD_1;
      pcVar1 = (&PTR_s_Low_Cut_ram_40093e98_ram_400947a8)[param_3];
      if (pcVar1 != (char *)0x0) goto LAB_ram_400258ba;
      goto LAB_ram_40025958;
    case 4:
      switch(bStack_15) {
      default:
        if (4 < param_3) break;
        ppuVar2 = &PTR_s_Delay_ram_40093d8c_4_ram_40094794;
LAB_ram_4002598a:
        pcVar1 = ppuVar2[param_3];
        if (pcVar1 != (char *)0x0) goto LAB_ram_400258ba;
        goto code_r0x4002599a;
      case 1:
        if (param_3 < 4) {
          ppuVar2 = &PTR_DAT_ram_40093e58_ram_4009475c;
          goto LAB_ram_4002598a;
        }
        break;
      case 2:
        if (param_3 < 5) {
          ppuVar2 = &PTR_DAT_ram_40093e58_ram_40094780;
          goto LAB_ram_4002598a;
        }
        break;
      case 3:
        if (param_3 < 5) {
          ppuVar2 = &PTR_DAT_ram_40093e58_ram_4009476c;
          goto LAB_ram_4002598a;
        }
        break;
      case 4:
        if (param_3 < 4) {
          ppuVar2 = &PTR_DAT_ram_40093e58_ram_4009475c;
          goto LAB_ram_4002598a;
        }
        break;
      case 5:
        if (param_3 < 6) {
          ppuVar2 = &PTR_DAT_ram_40093e58_ram_40094744;
          goto LAB_ram_4002598a;
        }
        break;
      case 6:
        if (param_3 < 6) {
          ppuVar2 = &PTR_DAT_ram_40093e58_ram_40094720;
          goto LAB_ram_4002598a;
        }
        break;
      case 7:
        if (param_3 < 6) {
          ppuVar2 = &PTR_DAT_ram_40093e58_ram_40094708;
          goto LAB_ram_4002598a;
        }
      }
switchD_ram_4002589e_caseD_1:
      pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
LAB_ram_400258ba:
      if (*pcVar1 != '\0') {
        return pcVar1;
      }
      goto code_r0x400258c8;
    case 5:
      if (bStack_15 == 0xe) {
        if (param_3 < 5) {
          ppuVar2 = &PTR_s_Rate_ram_40093ddc_4_ram_400946f4;
          goto LAB_ram_40025a2e;
        }
        goto switchD_ram_4002589e_caseD_1;
      }
      if (bStack_15 == 0x10) {
        if (param_3 < 7) {
          ppuVar2 = &PTR_s_Rate_ram_40093ddc_4_ram_400946d8;
          goto LAB_ram_40025a2e;
        }
        goto switchD_ram_4002589e_caseD_1;
      }
      if (bStack_15 == 0x11) {
        if (param_3 < 8) {
          ppuVar2 = &PTR_s_Rate_ram_40093ddc_4_ram_400946b8;
          goto LAB_ram_40025a2e;
        }
        goto switchD_ram_4002589e_caseD_1;
      }
      if (bStack_15 == 0xb) {
        if (param_3 < 4) {
          ppuVar2 = &PTR_s_Rate_ram_40093ddc_4_ram_400946a8;
          goto LAB_ram_40025a2e;
        }
        goto switchD_ram_4002589e_caseD_1;
      }
      if (bStack_15 == 0xc) {
        if (param_3 < 5) {
          ppuVar2 = &PTR_s__ram_40092960_0x14_ram_40094694;
          goto LAB_ram_40025a2e;
        }
        goto switchD_ram_4002589e_caseD_1;
      }
      if (bStack_15 == 0xd) {
        if (param_3 < 5) {
          ppuVar2 = &PTR_s__ram_40092960_0x14_ram_40094694;
          goto LAB_ram_40025a2e;
        }
        goto switchD_ram_4002589e_caseD_1;
      }
      if (bStack_15 == 0) {
        if (param_3 < 3) {
          ppuVar2 = &PTR_s_Rate_ram_40093ddc_4_ram_40094688;
          goto LAB_ram_40025a2e;
        }
        goto switchD_ram_4002589e_caseD_1;
      }
      if (bStack_15 == 8) {
        if (param_3 < 5) {
          ppuVar2 = &PTR_s_Rate_ram_40093ddc_4_ram_40094668;
          goto LAB_ram_40025a2e;
        }
        goto switchD_ram_4002589e_caseD_1;
      }
      if (bStack_15 == 9) {
        if (param_3 < 5) {
          ppuVar2 = &PTR_s_Rate_ram_40093ddc_4_ram_40094654;
          goto LAB_ram_40025a2e;
        }
        goto switchD_ram_4002589e_caseD_1;
      }
      if (bStack_15 == 10) {
        if (param_3 < 5) {
          ppuVar2 = &PTR_s_Rate_ram_40093ddc_4_ram_40094640;
          goto LAB_ram_40025a2e;
        }
        goto switchD_ram_4002589e_caseD_1;
      }
      if (bStack_15 == 3) {
        if (param_3 < 6) {
          ppuVar2 = &PTR_s_Rate_ram_40093ddc_4_ram_40094628;
          goto LAB_ram_40025a2e;
        }
        goto switchD_ram_4002589e_caseD_1;
      }
      if (bStack_15 != 4) {
        if (param_3 < 4) {
          ppuVar2 = &PTR_s_Rate_ram_40093ddc_4_ram_40094604;
          goto LAB_ram_40025a2e;
        }
        goto switchD_ram_4002589e_caseD_1;
      }
      ppuVar2 = &PTR_s_Rate_ram_40093ddc_4_ram_40094614;
      if (4 < param_3) goto switchD_ram_4002589e_caseD_1;
LAB_ram_40025a2e:
      pcVar1 = ppuVar2[param_3];
      if (pcVar1 != (char *)0x0) goto LAB_ram_400258ba;
      goto switchD_ram_400258d6_caseD_5;
    case 6:
      if (bStack_15 == 6) {
        if (param_3 < 6) {
          ppuVar2 = &PTR_s_Decay_ram_40093d84_ram_400945ec;
          goto LAB_ram_40025b72;
        }
        goto switchD_ram_4002589e_caseD_1;
      }
      if (bStack_15 == 2) {
        if (param_3 < 6) {
          ppuVar2 = &PTR_s_Decay_ram_40093d84_ram_40094534;
          goto LAB_ram_40025b72;
        }
        goto switchD_ram_4002589e_caseD_1;
      }
      if (bStack_15 == 3) {
        if (param_3 < 6) {
          ppuVar2 = &PTR_s_Decay_ram_40093d84_ram_4009447c;
          goto LAB_ram_40025b72;
        }
        goto switchD_ram_4002589e_caseD_1;
      }
      if (bStack_15 == 5) {
        ppuVar2 = &PTR_s_Decay_ram_40093d84_ram_40094420;
        if (param_3 < 6) goto LAB_ram_40025b72;
        goto switchD_ram_4002589e_caseD_1;
      }
      if ((bStack_15 - 7 & 0xfd) != 0) {
        if (param_3 < 6) {
          ppuVar2 = &PTR_s_Decay_ram_40093d84_ram_40094b20;
          goto LAB_ram_40025b72;
        }
        goto switchD_ram_4002589e_caseD_1;
      }
      if (5 < param_3) goto switchD_ram_4002589e_caseD_1;
      ppuVar2 = &PTR_s_Decay_ram_40093d84_ram_40094b94;
LAB_ram_40025b72:
      pcVar1 = ppuVar2[param_3];
      if (pcVar1 != (char *)0x0) goto LAB_ram_400258ba;
      goto switchD_ram_400258d6_caseD_6;
    case 9:
      if (bStack_15 == 8) {
        if (3 < param_3) goto switchD_ram_4002589e_caseD_1;
        ppuVar2 = &PTR_s_Cutoff_ram_40093d68_ram_40094a5c;
      }
      else if (bStack_15 == 9) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (1 < param_3) goto LAB_ram_400258ba;
        ppuVar2 = &PTR_s_Delay_ram_40093d8c_4_ram_40094988;
      }
      else if (bStack_15 == 10) {
        if (3 < param_3) goto switchD_ram_4002589e_caseD_1;
        ppuVar2 = &PTR_DAT_ram_40093d40_ram_400948e0;
      }
      else if (bStack_15 == 0xb) {
        if (4 < param_3) goto switchD_ram_4002589e_caseD_1;
        ppuVar2 = &PTR_s_Rate_ram_40093ddc_4_ram_400947f8;
      }
      else if (bStack_15 == 4) {
        if (2 < param_3) goto switchD_ram_4002589e_caseD_1;
        ppuVar2 = &PTR_s_PITCH_ram_40093830_ram_40094738;
      }
      else {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if ((bStack_15 != 0) || (2 < param_3)) goto LAB_ram_400258ba;
        ppuVar2 = &PTR_s_Volume_ram_40093d08_ram_4009467c;
      }
      pcVar1 = ppuVar2[param_3];
      if (pcVar1 != (char *)0x0) goto LAB_ram_400258ba;
      goto switchD_ram_400258d6_caseD_9;
    }
switchD_ram_400258d6_caseD_0:
    if (bStack_15 == 1) {
      pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
      if (param_3 < 2) {
        pcVar1 = (&PTR_s_Sensitivity_ram_4009419c_ram_400945e4)[param_3];
      }
    }
    else if (bStack_15 == 2) {
      pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
      if (param_3 < 7) {
        pcVar1 = (&PTR_DAT_ram_40093ee0_ram_400945c8)[param_3];
      }
    }
    else if (bStack_15 == 3) {
      pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
      if (param_3 < 6) {
        pcVar1 = (&PTR_s_Threshold_ram_40094190_ram_400945b0)[param_3];
      }
    }
    else {
      pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
      if ((bStack_15 == 0) && (param_3 < 2)) {
        pcVar1 = (&PTR_s_Threshold_ram_40094190_ram_400945a8)[param_3];
      }
    }
  }
  else {
code_r0x400258c8:
    switch(auStack_14[0]) {
    case 0:
      goto switchD_ram_400258d6_caseD_0;
    case 1:
      if (bStack_15 == 8) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 4) {
          pcVar1 = (&PTR_s_Pitch_ram_40093db8_ram_40094598)[param_3];
        }
      }
      else if (bStack_15 == 9) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_DAT_ram_40094184_ram_40094584)[param_3];
        }
      }
      else if (bStack_15 == 10) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 6) {
          pcVar1 = (&PTR_DAT_ram_40094184_ram_4009456c)[param_3];
        }
      }
      else if (bStack_15 == 0xb) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_s_Rate_ram_40093ddc_4_ram_40094654)[param_3];
        }
      }
      else {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if ((byte)(bStack_15 - 5) < 3) {
          if (param_3 == 0) {
            pcVar1 = s_Boost_ram_40093934;
          }
        }
        else if (param_3 < 3) {
          pcVar1 = (&PTR_DAT_ram_4009416c_ram_40094560)[param_3];
        }
      }
      break;
    case 2:
      pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
      if (param_3 < 5) {
        pcVar1 = (&PTR_DAT_ram_4009416c_ram_4009454c)[param_3];
      }
      break;
    case 3:
      if (2 < param_3) {
        return s_ep__02x_clear_halt_ram_40092960 + 0x14;
      }
LAB_ram_40025958:
      pcVar1 = (&PTR_s_Low_Cut_ram_40094158_ram_40094528)[param_3];
      break;
    case 4:
code_r0x4002599a:
      switch(bStack_15) {
      default:
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_s_Delay_ram_40093d8c_4_ram_40094514)[param_3];
        }
        break;
      case 1:
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 4) {
          pcVar1 = (&PTR_DAT_ram_40093e58_ram_400944dc)[param_3];
        }
        break;
      case 2:
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_DAT_ram_40093e58_ram_40094500)[param_3];
        }
        break;
      case 3:
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_DAT_ram_40093e58_ram_400944ec)[param_3];
        }
        break;
      case 4:
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 4) {
          pcVar1 = (&PTR_DAT_ram_40093e58_ram_400944dc)[param_3];
        }
        break;
      case 5:
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 6) {
          pcVar1 = (&PTR_DAT_ram_40093e58_ram_400944c4)[param_3];
        }
        break;
      case 6:
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 6) {
          pcVar1 = (&PTR_DAT_ram_40093e58_ram_400944ac)[param_3];
        }
        break;
      case 7:
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 6) {
          pcVar1 = (&PTR_DAT_ram_40093e58_ram_40094494)[param_3];
        }
      }
      break;
    case 5:
switchD_ram_400258d6_caseD_5:
      if (bStack_15 == 0xe) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_s_Rate_ram_40093ddc_4_ram_400946f4)[param_3];
        }
      }
      else if (bStack_15 == 0x10) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 7) {
          pcVar1 = (&PTR_s_Rate_ram_40093ddc_4_ram_400946d8)[param_3];
        }
      }
      else if (bStack_15 == 0x11) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 8) {
          pcVar1 = (&PTR_s_Rate_ram_40093ddc_4_ram_4009445c)[param_3];
        }
      }
      else if (bStack_15 == 0xb) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 4) {
          pcVar1 = (&PTR_s_Rate_ram_40093ddc_4_ram_4009444c)[param_3];
        }
      }
      else if (bStack_15 == 0xc) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_s__ram_40092960_0x14_ram_40094438)[param_3];
        }
      }
      else if (bStack_15 == 0xd) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_s__ram_40092960_0x14_ram_40094438)[param_3];
        }
      }
      else if (bStack_15 == 0) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 3) {
          pcVar1 = (&PTR_s_Rate_ram_40093ddc_4_ram_40094688)[param_3];
        }
      }
      else if (bStack_15 == 8) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_s_Rate_ram_40093ddc_4_ram_40094668)[param_3];
        }
      }
      else if (bStack_15 == 9) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_s_Rate_ram_40093ddc_4_ram_40094654)[param_3];
        }
      }
      else if (bStack_15 == 10) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_s_Rate_ram_40093ddc_4_ram_40094640)[param_3];
        }
      }
      else if (bStack_15 == 3) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 6) {
          pcVar1 = (&PTR_s_Rate_ram_40093ddc_4_ram_40094628)[param_3];
        }
      }
      else {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (bStack_15 == 4) {
          if (param_3 < 5) {
            pcVar1 = (&PTR_s_Rate_ram_40093ddc_4_ram_40094614)[param_3];
          }
        }
        else if (param_3 < 4) {
          pcVar1 = (&PTR_s_Rate_ram_40093ddc_4_ram_40094c68)[param_3];
        }
      }
      break;
    case 6:
switchD_ram_400258d6_caseD_6:
      if (bStack_15 == 6) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 6) {
          pcVar1 = (&PTR_s_Decay_ram_40093d84_ram_40094c50)[param_3];
        }
      }
      else if (bStack_15 == 2) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 6) {
          pcVar1 = (&PTR_s_Decay_ram_40093d84_ram_40094c38)[param_3];
        }
      }
      else if (bStack_15 == 3) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 6) {
          pcVar1 = (&PTR_s_Decay_ram_40093d84_ram_40094c20)[param_3];
        }
      }
      else if (bStack_15 == 5) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 6) {
          pcVar1 = (&PTR_s_Decay_ram_40093d84_ram_40094c08)[param_3];
        }
      }
      else {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if ((bStack_15 - 7 & 0xfd) == 0) {
          if (param_3 < 6) {
            pcVar1 = (&PTR_s_Decay_ram_40093d84_ram_40094bf0)[param_3];
          }
        }
        else if (param_3 < 6) {
          pcVar1 = (&PTR_s_Decay_ram_40093d84_ram_40094bd8)[param_3];
        }
      }
      break;
    case 7:
      if (bStack_15 == 0) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 4) {
          pcVar1 = (&PTR_DAT_ram_400940d8_ram_40094bc8)[param_3];
        }
      }
      else if (bStack_15 == 1) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 7) {
          pcVar1 = (&PTR_s_B2_120__ram_400940a0_ram_40094bac)[param_3];
        }
      }
      else {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 9) {
          pcVar1 = (&PTR_s_B1_60__ram_40094098_ram_40094b70)[param_3];
        }
      }
      break;
    default:
      pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
      break;
    case 9:
switchD_ram_400258d6_caseD_9:
      if (bStack_15 == 8) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 4) {
          pcVar1 = (&PTR_s_Cutoff_ram_40093d68_ram_40094a5c)[param_3];
        }
      }
      else if (bStack_15 == 9) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 2) {
          pcVar1 = (&PTR_s_Delay_ram_40093d8c_4_ram_40094988)[param_3];
        }
      }
      else if (bStack_15 == 10) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 4) {
          pcVar1 = (&PTR_DAT_ram_40093d40_ram_400948e0)[param_3];
        }
      }
      else if (bStack_15 == 0xb) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_s_Rate_ram_40093ddc_4_ram_400947f8)[param_3];
        }
      }
      else if (bStack_15 == 4) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 3) {
          pcVar1 = (&PTR_s_Pitch_ram_40093db8_ram_40094b64)[param_3];
        }
      }
      else if (bStack_15 == 1) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 2) {
          pcVar1 = (&PTR_s_Position_ram_4009407c_ram_40094b5c)[param_3];
        }
      }
      else if (bStack_15 == 2) {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (param_3 < 2) {
          pcVar1 = (&PTR_s_Width_ram_40093e24_ram_40094b54)[param_3];
        }
      }
      else {
        pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
        if (bStack_15 == 3) {
          if (param_3 < 3) {
            pcVar1 = (&PTR_s_Position_ram_4009407c_ram_40094b48)[param_3];
          }
        }
        else if (param_3 < 4) {
          pcVar1 = (&PTR_s_Position_ram_4009407c_ram_40094b38)[param_3];
        }
      }
    }
  }
  return pcVar1;
switchD_ram_4002534a_caseD_0:
  if (bStack_15 == 1) {
    if (1 < param_3) {
      return s_ep__02x_clear_halt_ram_40092960 + 0x14;
    }
    return (&PTR_DAT_ram_40094074_ram_40094b18)[param_3];
  }
  if (bStack_15 == 2) {
    if (6 < param_3) {
      return s_ep__02x_clear_halt_ram_40092960 + 0x14;
    }
    return (&PTR_DAT_ram_40093828_ram_40094afc)[param_3];
  }
  if (bStack_15 == 3) {
    if (5 < param_3) {
      return s_ep__02x_clear_halt_ram_40092960 + 0x14;
    }
    return (&PTR_s_THRESH_ram_4009404c_ram_40094ae4)[param_3];
  }
  if (bStack_15 != 0) {
    return s_ep__02x_clear_halt_ram_40092960 + 0x14;
  }
  if (1 < param_3) {
    return s_ep__02x_clear_halt_ram_40092960 + 0x14;
  }
  return (&PTR_s_THRESH_ram_4009404c_ram_40094adc)[param_3];
}


