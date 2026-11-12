/* NanoCore 1.11 analysis module: audio/effect_metadata.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4002532c.
 * REA evidence: ev_1827ad50ae581cc8e72c6359536578baf59d318ad7d10adc59165640cb0ad2d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * nc_effect_name(undefined4 param_1,byte param_2,int param_3)

{
  char *pcVar1;
  undefined **ppuVar2;
  uint uVar3;
  byte bStack_15;
  undefined4 auStack_14 [4];
  
  bStack_15 = param_2;
  auStack_14[0] = param_1;
  FUN_ram_4002518c(auStack_14,&bStack_15);
  if (param_3 != 2) {
    switch(auStack_14[0]) {
    case 0:
      if (bStack_15 == 2) {
        return s_NG_Com_ram_40095668;
      }
      if (bStack_15 == 3) {
        return s_compressor_ram_400956a0;
      }
      if (bStack_15 == 1) {
        return s_auto_gate_ram_400956ac;
      }
      return &DAT_ram_40095638;
    case 1:
      if (bStack_15 == 8) {
        return s_pitch_ram_40095640;
      }
      if (bStack_15 == 9) {
        return s_env_wah_ram_40095654;
      }
      if (bStack_15 == 10) {
        return s_auto_wah_ram_40095648;
      }
      if (bStack_15 != 0xb) {
        return s_distortion_ram_4009565c;
      }
      return s_motion_wah_ram_4009562c;
    default:
      pcVar1 = (char *)FUN_ram_40025208();
      return pcVar1;
    case 4:
      if (7 < bStack_15) {
        return &DAT_ram_40095680;
      }
      uVar3 = (uint)(byte)(bStack_15 - 1);
      if (6 < uVar3) {
        return &DAT_ram_40095680;
      }
      ppuVar2 = &PTR_s_digital_ram_40095990_ram_4009613c;
      break;
    case 5:
      uVar3 = bStack_15 - 1 & 0xff;
      if (0x11 < uVar3) {
        return s_chorus_ram_400955dc;
      }
      ppuVar2 = &PTR_s_phaser_ram_40095908_ram_40096158;
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
      ppuVar2 = &PTR_DAT_ram_400958b8_ram_400961a0;
      break;
    case 7:
      if (bStack_15 == 0) {
        return &DAT_ram_40095684;
      }
      if (bStack_15 != 1) {
        return &DAT_ram_40095688;
      }
      return &DAT_ram_40095694;
    case 9:
      uVar3 = bStack_15 - 1 & 0xff;
      if (10 < uVar3) {
        return s_usb_volume_ram_40096e28 + 4;
      }
      ppuVar2 = (undefined **)&DAT_ram_400961c8;
    }
    goto LAB_ram_40025414;
  }
  switch(auStack_14[0]) {
  case 0:
    pcVar1 = s_NG_COM_ram_40095624;
    if (((bStack_15 != 2) && (pcVar1 = &DAT_ram_400955f8, bStack_15 != 3)) &&
       (pcVar1 = s_AUTO_GATE_ram_40095600, bStack_15 != 1)) {
      pcVar1 = &DAT_ram_4009560c;
    }
    break;
  case 1:
    pcVar1 = s_PITCH_ram_40095614;
    if ((((bStack_15 != 8) && (pcVar1 = &DAT_ram_4009561c, bStack_15 != 9)) &&
        (pcVar1 = &DAT_ram_40095620, bStack_15 != 10)) &&
       (pcVar1 = s_MOTION_WAH_ram_400951bc, bStack_15 != 0xb)) {
      pcVar1 = &DAT_ram_400956b8;
    }
    break;
  case 2:
    pcVar1 = s_NO_PROFILE_ram_400955e4;
    break;
  case 3:
    pcVar1 = s_NO_IR_ram_400955f0;
    break;
  case 4:
    if (7 < bStack_15) {
      return &DAT_ram_4009567c;
    }
    uVar3 = (uint)(byte)(bStack_15 - 1);
    if (6 < uVar3) {
      return &DAT_ram_4009567c;
    }
    ppuVar2 = &PTR_s_DIGITAL_ram_40095acc_ram_40096084;
    goto LAB_ram_40025414;
  case 5:
    uVar3 = bStack_15 - 1 & 0xff;
    if (0x11 < uVar3) {
      return s_CHORUS_ram_40095670;
    }
    ppuVar2 = &PTR_s_PHASER_ram_40095a44_ram_400960a0;
    goto LAB_ram_40025414;
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
    ppuVar2 = &PTR_DAT_ram_400959f4_ram_400960e8;
    goto LAB_ram_40025414;
  case 7:
    pcVar1 = &DAT_ram_4009568c;
    if ((bStack_15 != 0) && (pcVar1 = &DAT_ram_40095690, bStack_15 == 1)) {
      pcVar1 = &DAT_ram_40095678;
    }
    break;
  default:
    pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
    break;
  case 9:
    uVar3 = bStack_15 - 1 & 0xff;
    if (10 < uVar3) {
      return s_VOLUME_ram_40095698;
    }
    ppuVar2 = &PTR_DAT_ram_400959bc_ram_40096110;
LAB_ram_40025414:
    pcVar1 = ppuVar2[uVar3];
  }
  return pcVar1;
}


/* NanoCore 1.11, address 0x40025606.
 * REA evidence: ev_69fc7b80360e837d65660eae7ccc66a9de4002f543b128734616ea683a5ecba5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * nc_effect_parameter_name(undefined4 param_1,byte param_2,uint param_3,int param_4)

{
  char *pcVar1;
  undefined **ppuVar2;
  byte bStack_15;
  undefined4 auStack_14 [4];
  
  bStack_15 = param_2;
  auStack_14[0] = param_1;
  FUN_ram_4002518c(auStack_14,&bStack_15);
  if (param_4 == 2) {
    switch(auStack_14[0]) {
    case 0:
      goto switchD_ram_4002564a_caseD_0;
    case 1:
      if (bStack_15 == 8) {
        if (3 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_s_PITCH_ram_40095614_ram_400969b8)[param_3];
      }
      if (bStack_15 == 9) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_DAT_ram_40095dd8_ram_40096994)[param_3];
      }
      if (bStack_15 == 10) {
        if (5 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_DAT_ram_40095dd8_ram_4009697c)[param_3];
      }
      if (bStack_15 == 0xb) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_DAT_ram_40095da4_ram_40096968)[param_3];
      }
      if (2 < (byte)(bStack_15 - 5)) {
        if (2 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_DAT_ram_40095e58_ram_4009695c)[param_3];
      }
      if (param_3 != 0) {
        return s_ep__02x_clear_halt_ram_40094730 + 0x14;
      }
      return s_BOOST_ram_40095718;
    case 2:
      if (4 < param_3) {
        return s_ep__02x_clear_halt_ram_40094730 + 0x14;
      }
      return (&PTR_DAT_ram_40095e58_ram_40096948)[param_3];
    case 3:
      if (1 < param_3) {
        return s_ep__02x_clear_halt_ram_40094730 + 0x14;
      }
      return (&PTR_s_LOCUT_ram_40095e48_ram_40096940)[param_3];
    case 4:
      if (bStack_15 < 8) {
        switch(bStack_15) {
        case 1:
        case 4:
          if (2 < param_3) {
            return s_ep__02x_clear_halt_ram_40094730 + 0x14;
          }
          return (&PTR_DAT_ram_40095e28_ram_40096930)[param_3];
        case 2:
          if (3 < param_3) {
            return s_ep__02x_clear_halt_ram_40094730 + 0x14;
          }
          return (&PTR_DAT_ram_40095e28_ram_4009691c)[param_3];
        case 3:
          if (3 < param_3) {
            return s_ep__02x_clear_halt_ram_40094730 + 0x14;
          }
          return (&PTR_DAT_ram_40095e28_ram_40096908)[param_3];
        case 5:
          if (4 < param_3) {
            return s_ep__02x_clear_halt_ram_40094730 + 0x14;
          }
          return (&PTR_DAT_ram_40095e28_ram_400968f0)[param_3];
        case 6:
          if (4 < param_3) {
            return s_ep__02x_clear_halt_ram_40094730 + 0x14;
          }
          return (&PTR_DAT_ram_40095e28_ram_400968c4)[param_3];
        case 7:
          if (4 < param_3) {
            return s_ep__02x_clear_halt_ram_40094730 + 0x14;
          }
          return (&PTR_DAT_ram_40095e28_ram_400968ac)[param_3];
        }
      }
      if (3 < param_3) {
        return s_ep__02x_clear_halt_ram_40094730 + 0x14;
      }
      return (&PTR_s_DELAY_ram_40095e00_ram_40096898)[param_3];
    case 5:
      if (bStack_15 == 0xe) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_DAT_ram_40095da4_ram_40096884)[param_3];
      }
      if (bStack_15 == 0x10) {
        if (6 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_DAT_ram_40095da4_ram_40096868)[param_3];
      }
      if (bStack_15 == 0x11) {
        if (7 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_DAT_ram_40095da4_ram_40096848)[param_3];
      }
      if (bStack_15 == 0xb) {
        if (3 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_DAT_ram_40095da4_ram_40096838)[param_3];
      }
      if (bStack_15 == 0xc) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_s__ram_40094730_0x14_ram_40096824)[param_3];
      }
      if (bStack_15 == 0xd) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_s__ram_40094730_0x14_ram_40096824)[param_3];
      }
      if (bStack_15 == 0x12) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_DAT_ram_40095dd8_ram_40096810)[param_3];
      }
      if (bStack_15 == 0) {
        if (1 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_DAT_ram_40095da4_ram_400967fc)[param_3];
      }
      if (bStack_15 == 8) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_DAT_ram_40095da4_ram_400967e8)[param_3];
      }
      if (bStack_15 == 9) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_DAT_ram_40095da4_ram_40096968)[param_3];
      }
      if (bStack_15 == 10) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_DAT_ram_40095da4_ram_400967d4)[param_3];
      }
      if (bStack_15 == 3) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_DAT_ram_40095da4_ram_400967c0)[param_3];
      }
      if (bStack_15 != 4) {
        if (2 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_DAT_ram_40095da4_ram_400967a4)[param_3];
      }
      if (3 < param_3) {
        return s_ep__02x_clear_halt_ram_40094730 + 0x14;
      }
      return (&PTR_DAT_ram_40095da4_ram_400967b0)[param_3];
    case 6:
      if (bStack_15 == 6) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_s_DECAY_ram_40095d64_ram_40096790)[param_3];
      }
      if (bStack_15 == 3) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_s_DECAY_ram_40095d64_ram_4009677c)[param_3];
      }
      if ((bStack_15 - 7 & 0xfd) == 0) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_s_DECAY_ram_40095d64_ram_40096768)[param_3];
      }
      if (bStack_15 == 5) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_s_DECAY_ram_40095d64_ram_40096748)[param_3];
      }
      if (bStack_15 != 2) {
        if (4 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_s_DECAY_ram_40095d64_ram_40096720)[param_3];
      }
      if (4 < param_3) {
        return s_ep__02x_clear_halt_ram_40094730 + 0x14;
      }
      return (&PTR_s_DECAY_ram_40095d64_ram_40096734)[param_3];
    case 7:
      if (bStack_15 == 0) {
        if (3 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_DAT_ram_40095d54_ram_40096710)[param_3];
      }
      if (bStack_15 != 1) {
        if (8 < param_3) {
          return s_ep__02x_clear_halt_ram_40094730 + 0x14;
        }
        return (&PTR_DAT_ram_40095d0c_ram_400966d0)[param_3];
      }
      if (6 < param_3) {
        return s_ep__02x_clear_halt_ram_40094730 + 0x14;
      }
      return (&PTR_s_B_120_ram_40095d14_ram_400966f4)[param_3];
    default:
      return s_ep__02x_clear_halt_ram_40094730 + 0x14;
    }
  }
  if (param_4 == 1) {
    switch(auStack_14[0]) {
    case 0:
      if (bStack_15 == 1) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        ppuVar2 = &PTR_s_Sensi_tivity_ram_40095cfc_ram_400966c8;
        if (1 < param_3) goto LAB_ram_40025bda;
      }
      else if (bStack_15 == 2) {
        if (6 < param_3) goto switchD_ram_40025bbe_caseD_1;
        ppuVar2 = &PTR_DAT_ram_40095cf4_ram_400966ac;
      }
      else if (bStack_15 == 3) {
        if (5 < param_3) goto switchD_ram_40025bbe_caseD_1;
        ppuVar2 = &PTR_s_Thresh_old_ram_40095cc0_ram_40096694;
      }
      else {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if ((bStack_15 != 0) || (1 < param_3)) goto LAB_ram_40025bda;
        ppuVar2 = &PTR_s_Thresh_old_ram_40095cc0_ram_4009668c;
      }
      pcVar1 = ppuVar2[param_3];
      if (pcVar1 != (char *)0x0) goto LAB_ram_40025bda;
      break;
    default:
      goto switchD_ram_40025bbe_caseD_1;
    case 3:
      if (2 < param_3) goto switchD_ram_40025bbe_caseD_1;
      pcVar1 = (&PTR_s_Low_Cut_ram_40095cac_ram_40096680)[param_3];
      if (pcVar1 != (char *)0x0) goto LAB_ram_40025bda;
      goto LAB_ram_40025c78;
    case 4:
      switch(bStack_15) {
      default:
        if (4 < param_3) break;
        ppuVar2 = &PTR_s_Delay_ram_40095b80_4_ram_4009666c;
LAB_ram_40025caa:
        pcVar1 = ppuVar2[param_3];
        if (pcVar1 != (char *)0x0) goto LAB_ram_40025bda;
        goto code_r0x40025cba;
      case 1:
        if (param_3 < 4) {
          ppuVar2 = &PTR_DAT_ram_40095c6c_ram_40096634;
          goto LAB_ram_40025caa;
        }
        break;
      case 2:
        if (param_3 < 5) {
          ppuVar2 = &PTR_DAT_ram_40095c6c_ram_40096658;
          goto LAB_ram_40025caa;
        }
        break;
      case 3:
        if (param_3 < 5) {
          ppuVar2 = &PTR_DAT_ram_40095c6c_ram_40096644;
          goto LAB_ram_40025caa;
        }
        break;
      case 4:
        if (param_3 < 4) {
          ppuVar2 = &PTR_DAT_ram_40095c6c_ram_40096634;
          goto LAB_ram_40025caa;
        }
        break;
      case 5:
        if (param_3 < 6) {
          ppuVar2 = &PTR_DAT_ram_40095c6c_ram_4009661c;
          goto LAB_ram_40025caa;
        }
        break;
      case 6:
        if (param_3 < 6) {
          ppuVar2 = &PTR_DAT_ram_40095c6c_ram_40096604;
          goto LAB_ram_40025caa;
        }
        break;
      case 7:
        if (param_3 < 6) {
          ppuVar2 = &PTR_DAT_ram_40095c6c_ram_400965ec;
          goto LAB_ram_40025caa;
        }
      }
switchD_ram_40025bbe_caseD_1:
      pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
LAB_ram_40025bda:
      if (*pcVar1 != '\0') {
        return pcVar1;
      }
      goto code_r0x40025be8;
    case 5:
      if (bStack_15 == 0xe) {
        if (param_3 < 5) {
          ppuVar2 = &PTR_s_Rate_ram_40095bd0_4_ram_400965d8;
          goto LAB_ram_40025d4e;
        }
        goto switchD_ram_40025bbe_caseD_1;
      }
      if (bStack_15 == 0x10) {
        if (param_3 < 7) {
          ppuVar2 = &PTR_s_Rate_ram_40095bd0_4_ram_400965bc;
          goto LAB_ram_40025d4e;
        }
        goto switchD_ram_40025bbe_caseD_1;
      }
      if (bStack_15 == 0x11) {
        if (param_3 < 8) {
          ppuVar2 = &PTR_s_Rate_ram_40095bd0_4_ram_4009659c;
          goto LAB_ram_40025d4e;
        }
        goto switchD_ram_40025bbe_caseD_1;
      }
      if (bStack_15 == 0xb) {
        if (param_3 < 4) {
          ppuVar2 = &PTR_s_Rate_ram_40095bd0_4_ram_4009658c;
          goto LAB_ram_40025d4e;
        }
        goto switchD_ram_40025bbe_caseD_1;
      }
      if (bStack_15 == 0xc) {
        if (param_3 < 5) {
          ppuVar2 = &PTR_s__ram_40094730_0x14_ram_40096578;
          goto LAB_ram_40025d4e;
        }
        goto switchD_ram_40025bbe_caseD_1;
      }
      if (bStack_15 == 0xd) {
        if (param_3 < 5) {
          ppuVar2 = &PTR_s__ram_40094730_0x14_ram_40096578;
          goto LAB_ram_40025d4e;
        }
        goto switchD_ram_40025bbe_caseD_1;
      }
      if (bStack_15 == 0x12) {
        if (param_3 < 5) {
          ppuVar2 = &PTR_DAT_ram_40095c20_ram_40096564;
          goto LAB_ram_40025d4e;
        }
        goto switchD_ram_40025bbe_caseD_1;
      }
      if (bStack_15 == 0) {
        if (param_3 < 3) {
          ppuVar2 = &PTR_s_Rate_ram_40095bd0_4_ram_40096558;
          goto LAB_ram_40025d4e;
        }
        goto switchD_ram_40025bbe_caseD_1;
      }
      if (bStack_15 == 8) {
        if (param_3 < 5) {
          ppuVar2 = &PTR_s_Rate_ram_40095bd0_4_ram_40096544;
          goto LAB_ram_40025d4e;
        }
        goto switchD_ram_40025bbe_caseD_1;
      }
      if (bStack_15 == 9) {
        if (param_3 < 5) {
          ppuVar2 = &PTR_s_Rate_ram_40095bd0_4_ram_40096530;
          goto LAB_ram_40025d4e;
        }
        goto switchD_ram_40025bbe_caseD_1;
      }
      if (bStack_15 == 10) {
        if (param_3 < 5) {
          ppuVar2 = &PTR_s_Rate_ram_40095bd0_4_ram_4009651c;
          goto LAB_ram_40025d4e;
        }
        goto switchD_ram_40025bbe_caseD_1;
      }
      if (bStack_15 == 3) {
        if (param_3 < 6) {
          ppuVar2 = &PTR_s_Rate_ram_40095bd0_4_ram_40096504;
          goto LAB_ram_40025d4e;
        }
        goto switchD_ram_40025bbe_caseD_1;
      }
      if (bStack_15 != 4) {
        if (param_3 < 4) {
          ppuVar2 = &PTR_s_Rate_ram_40095bd0_4_ram_400964e0;
          goto LAB_ram_40025d4e;
        }
        goto switchD_ram_40025bbe_caseD_1;
      }
      ppuVar2 = &PTR_s_Rate_ram_40095bd0_4_ram_400964f0;
      if (4 < param_3) goto switchD_ram_40025bbe_caseD_1;
LAB_ram_40025d4e:
      pcVar1 = ppuVar2[param_3];
      if (pcVar1 != (char *)0x0) goto LAB_ram_40025bda;
      goto switchD_ram_40025bf6_caseD_5;
    case 6:
      if (bStack_15 == 6) {
        if (param_3 < 6) {
          ppuVar2 = &PTR_s_Decay_ram_40095b78_ram_400964c8;
          goto LAB_ram_40025ea8;
        }
        goto switchD_ram_40025bbe_caseD_1;
      }
      if (bStack_15 == 2) {
        if (param_3 < 6) {
          ppuVar2 = &PTR_s_Decay_ram_40095b78_ram_400964b0;
          goto LAB_ram_40025ea8;
        }
        goto switchD_ram_40025bbe_caseD_1;
      }
      if (bStack_15 == 3) {
        if (param_3 < 6) {
          ppuVar2 = &PTR_s_Decay_ram_40095b78_ram_40096498;
          goto LAB_ram_40025ea8;
        }
        goto switchD_ram_40025bbe_caseD_1;
      }
      if (bStack_15 == 5) {
        ppuVar2 = &PTR_s_Decay_ram_40095b78_ram_40096418;
        if (param_3 < 6) goto LAB_ram_40025ea8;
        goto switchD_ram_40025bbe_caseD_1;
      }
      if ((bStack_15 - 7 & 0xfd) != 0) {
        if (param_3 < 6) {
          ppuVar2 = &PTR_s_Decay_ram_40095b78_ram_400962b8;
          goto LAB_ram_40025ea8;
        }
        goto switchD_ram_40025bbe_caseD_1;
      }
      if (5 < param_3) goto switchD_ram_40025bbe_caseD_1;
      ppuVar2 = &PTR_s_Decay_ram_40095b78_ram_40096358;
LAB_ram_40025ea8:
      pcVar1 = ppuVar2[param_3];
      if (pcVar1 != (char *)0x0) goto LAB_ram_40025bda;
      goto switchD_ram_40025bf6_caseD_6;
    case 9:
      if (bStack_15 == 8) {
        if (3 < param_3) goto switchD_ram_40025bbe_caseD_1;
        ppuVar2 = &PTR_s_Cutoff_ram_40095b5c_ram_40096250;
      }
      else if (bStack_15 == 9) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (1 < param_3) goto LAB_ram_40025bda;
        ppuVar2 = &PTR_s_Delay_ram_40095b80_4_ram_40096a44;
      }
      else if (bStack_15 == 10) {
        if (3 < param_3) goto switchD_ram_40025bbe_caseD_1;
        ppuVar2 = &PTR_DAT_ram_40095b34_ram_400969a8;
      }
      else if (bStack_15 == 0xb) {
        if (4 < param_3) goto switchD_ram_40025bbe_caseD_1;
        ppuVar2 = &PTR_s_Rate_ram_40095bd0_4_ram_400968dc;
      }
      else if (bStack_15 == 4) {
        if (2 < param_3) goto switchD_ram_40025bbe_caseD_1;
        ppuVar2 = &PTR_s_PITCH_ram_40095614_ram_40096804;
      }
      else {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if ((bStack_15 != 0) || (2 < param_3)) goto LAB_ram_40025bda;
        ppuVar2 = &PTR_s_Volume_ram_40095afc_ram_4009675c;
      }
      pcVar1 = ppuVar2[param_3];
      if (pcVar1 != (char *)0x0) goto LAB_ram_40025bda;
      goto switchD_ram_40025bf6_caseD_9;
    }
switchD_ram_40025bf6_caseD_0:
    if (bStack_15 == 1) {
      pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
      if (param_3 < 2) {
        pcVar1 = (&PTR_s_Sensitivity_ram_40095fcc_ram_40096490)[param_3];
      }
    }
    else if (bStack_15 == 2) {
      pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
      if (param_3 < 7) {
        pcVar1 = (&PTR_DAT_ram_40095cf4_ram_40096474)[param_3];
      }
    }
    else if (bStack_15 == 3) {
      pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
      if (param_3 < 6) {
        pcVar1 = (&PTR_s_Threshold_ram_40095fc0_ram_4009645c)[param_3];
      }
    }
    else {
      pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
      if ((bStack_15 == 0) && (param_3 < 2)) {
        pcVar1 = (&PTR_s_Threshold_ram_40095fc0_ram_40096454)[param_3];
      }
    }
  }
  else {
code_r0x40025be8:
    switch(auStack_14[0]) {
    case 0:
      goto switchD_ram_40025bf6_caseD_0;
    case 1:
      if (bStack_15 == 8) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 4) {
          pcVar1 = (&PTR_s_Pitch_ram_40095bac_ram_40096444)[param_3];
        }
      }
      else if (bStack_15 == 9) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_DAT_ram_40095c20_ram_40096430)[param_3];
        }
      }
      else if (bStack_15 == 10) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 6) {
          pcVar1 = (&PTR_DAT_ram_40095c20_ram_40096400)[param_3];
        }
      }
      else if (bStack_15 == 0xb) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_s_Rate_ram_40095bd0_4_ram_40096530)[param_3];
        }
      }
      else {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if ((byte)(bStack_15 - 5) < 3) {
          if (param_3 == 0) {
            pcVar1 = s_Boost_ram_40095710;
          }
        }
        else if (param_3 < 3) {
          pcVar1 = (&PTR_DAT_ram_40095fa4_ram_400963f4)[param_3];
        }
      }
      break;
    case 2:
      pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
      if (param_3 < 5) {
        pcVar1 = (&PTR_DAT_ram_40095fa4_ram_400963e0)[param_3];
      }
      break;
    case 3:
      if (2 < param_3) {
        return s_ep__02x_clear_halt_ram_40094730 + 0x14;
      }
LAB_ram_40025c78:
      pcVar1 = (&PTR_s_Low_Cut_ram_40095f90_ram_400963d4)[param_3];
      break;
    case 4:
code_r0x40025cba:
      switch(bStack_15) {
      default:
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_s_Delay_ram_40095b80_4_ram_400963c0)[param_3];
        }
        break;
      case 1:
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 4) {
          pcVar1 = (&PTR_DAT_ram_40095c6c_ram_40096388)[param_3];
        }
        break;
      case 2:
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_DAT_ram_40095c6c_ram_400963ac)[param_3];
        }
        break;
      case 3:
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_DAT_ram_40095c6c_ram_40096398)[param_3];
        }
        break;
      case 4:
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 4) {
          pcVar1 = (&PTR_DAT_ram_40095c6c_ram_40096388)[param_3];
        }
        break;
      case 5:
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 6) {
          pcVar1 = (&PTR_DAT_ram_40095c6c_ram_40096370)[param_3];
        }
        break;
      case 6:
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 6) {
          pcVar1 = (&PTR_DAT_ram_40095c6c_ram_40096340)[param_3];
        }
        break;
      case 7:
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 6) {
          pcVar1 = (&PTR_DAT_ram_40095c6c_ram_40096328)[param_3];
        }
      }
      break;
    case 5:
switchD_ram_40025bf6_caseD_5:
      if (bStack_15 == 0xe) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_s_Rate_ram_40095bd0_4_ram_400965d8)[param_3];
        }
      }
      else if (bStack_15 == 0x10) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 7) {
          pcVar1 = (&PTR_s_Rate_ram_40095bd0_4_ram_400965bc)[param_3];
        }
      }
      else if (bStack_15 == 0x11) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 8) {
          pcVar1 = (&PTR_s_Rate_ram_40095bd0_4_ram_40096308)[param_3];
        }
      }
      else if (bStack_15 == 0xb) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 4) {
          pcVar1 = (&PTR_s_Rate_ram_40095bd0_4_ram_400962f8)[param_3];
        }
      }
      else if (bStack_15 == 0xc) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_s__ram_40094730_0x14_ram_400962e4)[param_3];
        }
      }
      else if (bStack_15 == 0xd) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_s__ram_40094730_0x14_ram_400962e4)[param_3];
        }
      }
      else if (bStack_15 == 0x12) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_s_Frequency_ram_40095f60_ram_400962d0)[param_3];
        }
      }
      else if (bStack_15 == 0) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 3) {
          pcVar1 = (&PTR_s_Rate_ram_40095bd0_4_ram_40096558)[param_3];
        }
      }
      else if (bStack_15 == 8) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_s_Rate_ram_40095bd0_4_ram_40096544)[param_3];
        }
      }
      else if (bStack_15 == 9) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_s_Rate_ram_40095bd0_4_ram_40096530)[param_3];
        }
      }
      else if (bStack_15 == 10) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_s_Rate_ram_40095bd0_4_ram_4009651c)[param_3];
        }
      }
      else if (bStack_15 == 3) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 6) {
          pcVar1 = (&PTR_s_Rate_ram_40095bd0_4_ram_40096504)[param_3];
        }
      }
      else {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (bStack_15 == 4) {
          if (param_3 < 5) {
            pcVar1 = (&PTR_s_Rate_ram_40095bd0_4_ram_400964f0)[param_3];
          }
        }
        else if (param_3 < 4) {
          pcVar1 = (&PTR_s_Rate_ram_40095bd0_4_ram_400962a8)[param_3];
        }
      }
      break;
    case 6:
switchD_ram_40025bf6_caseD_6:
      if (bStack_15 == 6) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 6) {
          pcVar1 = (&PTR_s_Decay_ram_40095b78_ram_40096290)[param_3];
        }
      }
      else if (bStack_15 == 2) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 6) {
          pcVar1 = (&PTR_s_Decay_ram_40095b78_ram_40096278)[param_3];
        }
      }
      else if (bStack_15 == 3) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 6) {
          pcVar1 = (&PTR_s_Decay_ram_40095b78_ram_40096260)[param_3];
        }
      }
      else if (bStack_15 == 5) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 6) {
          pcVar1 = (&PTR_s_Decay_ram_40095b78_ram_40096acc)[param_3];
        }
      }
      else {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if ((bStack_15 - 7 & 0xfd) == 0) {
          if (param_3 < 6) {
            pcVar1 = (&PTR_s_Decay_ram_40095b78_ram_40096ab4)[param_3];
          }
        }
        else if (param_3 < 6) {
          pcVar1 = (&PTR_s_Decay_ram_40095b78_ram_40096a9c)[param_3];
        }
      }
      break;
    case 7:
      if (bStack_15 == 0) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 4) {
          pcVar1 = (&PTR_DAT_ram_40095f04_ram_40096a8c)[param_3];
        }
      }
      else if (bStack_15 == 1) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 7) {
          pcVar1 = (&PTR_s_B2_120__ram_40095ecc_ram_40096a70)[param_3];
        }
      }
      else {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 9) {
          pcVar1 = (&PTR_s_B1_60__ram_40095ec4_ram_40096a4c)[param_3];
        }
      }
      break;
    default:
      pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
      break;
    case 9:
switchD_ram_40025bf6_caseD_9:
      if (bStack_15 == 8) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 4) {
          pcVar1 = (&PTR_s_Cutoff_ram_40095b5c_ram_40096250)[param_3];
        }
      }
      else if (bStack_15 == 9) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 2) {
          pcVar1 = (&PTR_s_Delay_ram_40095b80_4_ram_40096a44)[param_3];
        }
      }
      else if (bStack_15 == 10) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 4) {
          pcVar1 = (&PTR_DAT_ram_40095b34_ram_400969a8)[param_3];
        }
      }
      else if (bStack_15 == 0xb) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 5) {
          pcVar1 = (&PTR_s_Rate_ram_40095bd0_4_ram_400968dc)[param_3];
        }
      }
      else if (bStack_15 == 4) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 3) {
          pcVar1 = (&PTR_s_Pitch_ram_40095bac_ram_40096a38)[param_3];
        }
      }
      else if (bStack_15 == 1) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 2) {
          pcVar1 = (&PTR_s_Position_ram_40095ea8_ram_40096a30)[param_3];
        }
      }
      else if (bStack_15 == 2) {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (param_3 < 2) {
          pcVar1 = (&PTR_s_Width_ram_40095c18_ram_40096a28)[param_3];
        }
      }
      else {
        pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
        if (bStack_15 == 3) {
          if (param_3 < 3) {
            pcVar1 = (&PTR_s_Position_ram_40095ea8_ram_40096a1c)[param_3];
          }
        }
        else if (param_3 < 4) {
          pcVar1 = (&PTR_s_Position_ram_40095ea8_ram_40096a0c)[param_3];
        }
      }
    }
  }
  return pcVar1;
switchD_ram_4002564a_caseD_0:
  if (bStack_15 == 1) {
    if (1 < param_3) {
      return s_ep__02x_clear_halt_ram_40094730 + 0x14;
    }
    return (&PTR_DAT_ram_40095ea0_ram_40096a04)[param_3];
  }
  if (bStack_15 == 2) {
    if (6 < param_3) {
      return s_ep__02x_clear_halt_ram_40094730 + 0x14;
    }
    return (&PTR_DAT_ram_4009560c_ram_400969e8)[param_3];
  }
  if (bStack_15 == 3) {
    if (5 < param_3) {
      return s_ep__02x_clear_halt_ram_40094730 + 0x14;
    }
    return (&PTR_s_THRESH_ram_40095e78_ram_400969d0)[param_3];
  }
  if (bStack_15 != 0) {
    return s_ep__02x_clear_halt_ram_40094730 + 0x14;
  }
  if (1 < param_3) {
    return s_ep__02x_clear_halt_ram_40094730 + 0x14;
  }
  return (&PTR_s_THRESH_ram_40095e78_ram_400969c8)[param_3];
}


/* NanoCore 1.11, address 0x400268fa.
 * REA evidence: ev_2920bb359d349f14d4c49abccc30e04017bd2d1b879a6fe11852415f84e47098
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40026b50) */
/* WARNING: Removing unreachable block (ram,0x40026b5e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
nc_format_effect_parameter(undefined4 param_1,undefined4 param_2,byte param_3,uint param_4,int param_5,
                int param_6,undefined4 *param_7)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  byte bStack_45;
  undefined4 auStack_44 [3];
  
  uVar2 = 0;
  if (param_7 != (undefined4 *)0x0) {
    uVar2 = *param_7;
  }
  bStack_45 = param_3;
  auStack_44[0] = param_2;
  uVar2 = FUN_ram_40024e60(uVar2,&DAT_ram_400955b8);
  uVar3 = 0;
  if (param_7 != (undefined4 *)0x0) {
    uVar3 = param_7[1];
  }
  uVar3 = FUN_ram_40024e60(uVar3,&DAT_ram_40095840);
  uVar4 = 0;
  if (param_7 != (undefined4 *)0x0) {
    uVar4 = param_7[2];
  }
  uVar4 = FUN_ram_40024e60(uVar4,&DAT_ram_40095844);
  uVar5 = 0;
  if (param_7 != (undefined4 *)0x0) {
    uVar5 = param_7[3];
  }
  uVar5 = FUN_ram_40024e60(uVar5,&DAT_ram_40095848);
  uVar6 = 0;
  if (param_7 != (undefined4 *)0x0) {
    uVar6 = param_7[4];
  }
  uVar6 = FUN_ram_40024e60(uVar6,&DAT_ram_40095174);
  uVar7 = 0;
  if (param_7 != (undefined4 *)0x0) {
    uVar7 = param_7[5];
  }
  uVar7 = FUN_ram_40024e60(uVar7,&DAT_ram_400975d4);
  if (param_5 == 0) {
    return 0xffffffff;
  }
  if (param_6 == 0) {
    return 0xffffffff;
  }
  FUN_ram_4002518c(auStack_44,&bStack_45);
  uVar13 = FUN_ram_40024e6e(param_1);
  fVar12 = (float)uVar13;
  switch(auStack_44[0]) {
  case 0:
    if (bStack_45 == 0) {
      if (param_4 == 0) {
LAB_ram_400269fa:
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_40094658 + DAT_ram_40095284) * DAT_ram_40094e90);
        FUN_ram_400250b0(param_5,param_6,uVar2,uVar3);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_400952b4 + DAT_ram_40094ed4) * DAT_ram_40094e90);
        FUN_ram_400250b0(param_5,param_6,uVar2,uVar4);
        return 0;
      }
    }
    else {
      if (bStack_45 == 2) {
        if (param_4 == 0) goto LAB_ram_400269fa;
      }
      else if (bStack_45 == 1) {
        if (param_4 == 0) {
          fVar12 = (float)FUN_ram_40024e6e();
          uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_40095280 + DAT_ram_40096000) * DAT_ram_40094e90
                                  );
          FUN_ram_400250b0(param_5,param_6,uVar2,uVar3);
          return 0;
        }
        if (param_4 == 1) {
          fVar12 = (float)FUN_ram_40024e6e();
          uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_40096004 + DAT_ram_40094ea8) * DAT_ram_40094e90
                                  );
          FUN_ram_400250b0(param_5,param_6,uVar2,uVar4);
          return 0;
        }
        goto LAB_ram_40026ad4;
      }
      if (bStack_45 == 3) {
        param_4 = param_4 + 1 & 0xff;
      }
    }
LAB_ram_40026ad4:
    if ((byte)(bStack_45 - 2) < 2) {
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_400954c0 + DAT_ram_400954c4) * DAT_ram_40094e90);
        FUN_ram_400250b0(param_5,param_6,uVar2,uVar3);
        return 0;
      }
      if (param_4 == 2) {
        fVar12 = (float)FUN_ram_40024e6e();
        iVar8 = FUN_ram_40024e92((fVar12 * DAT_ram_40096008 + DAT_ram_40094604) * DAT_ram_40094e90);
        FUN_ram_400055da(param_5,param_6,s__ld__ld_1_ram_4009584c,iVar8 / 10,iVar8 % 10);
        return 0;
      }
      if (param_4 == 3) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_400952cc + 0.0) * DAT_ram_40094e90);
        FUN_ram_400250b0(param_5,param_6,uVar2,uVar3);
        return 0;
      }
      if (param_4 == 4) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_4009600c + 0.0) * DAT_ram_40094e90);
        FUN_ram_400250b0(param_5,param_6,uVar2,uVar4);
        return 0;
      }
      if (param_4 == 5) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_40094e80 + 0.0) * DAT_ram_40094e90);
        FUN_ram_400250b0(param_5,param_6,uVar2,uVar4);
        return 0;
      }
      if (param_4 == 6) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_40096010 + DAT_ram_400952d0) * DAT_ram_40094e90);
        FUN_ram_400250b0(param_5,param_6,uVar2,uVar3);
        return 0;
      }
    }
    break;
  case 1:
    if (bStack_45 == 8) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_400952cc + DAT_ram_4009527c);
        FUN_ram_400055da(param_5,param_6,s__ld__s_ram_40095260,uVar2,uVar5);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * (float)PTR_entry_ram_40094618 + DAT_ram_40094600) *
                                 DAT_ram_40094658);
        FUN_ram_400250fc(param_5,param_6,uVar2,uVar5);
        return 0;
      }
      if ((param_4 - 2 & 0xff) < 2) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 9) {
      if (param_4 == 0) {
        FUN_ram_4002514a(uVar13,DAT_ram_40094e90,DAT_ram_40095288);
        FUN_ram_40024f4c(param_5,param_6,uVar2);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40024e6e();
        FUN_ram_40024f4c(fVar12 * DAT_ram_40095288 + 0.0,param_5,param_6,uVar2);
        return 0;
      }
      if (param_4 == 2) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_40096014 + DAT_ram_40094ee0) * DAT_ram_40094e90);
        FUN_ram_400250b0(param_5,param_6,uVar2,0);
        return 0;
      }
      if ((param_4 - 3 & 0xff) < 2) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 10) {
      if (param_4 == 0) {
        uVar13 = FUN_ram_40024e6e();
        fVar10 = (float)uVar13;
        fVar11 = (float)FUN_ram_4002514a(uVar13,DAT_ram_40095290,DAT_ram_40095294);
        fVar12 = DAT_ram_40096018;
        fVar1 = DAT_ram_4009601c;
        if (DAT_ram_40094634 <= fVar10) {
          fVar10 = fVar10 - DAT_ram_40094634;
          fVar12 = DAT_ram_40094edc;
          fVar1 = DAT_ram_40094604;
        }
        FUN_ram_40024f4c(fVar11 * (fVar10 * fVar12 + fVar1),param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 == 1) || ((param_4 - 3 & 0xff) < 3)) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
      if (param_4 == 2) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar3 = FUN_ram_40024e92((fVar12 * DAT_ram_4009463c + 0.0) * DAT_ram_40094658);
        FUN_ram_400250fc(param_5,param_6,uVar3,uVar2);
        return 0;
      }
    }
    else if (bStack_45 == 0xb) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40024e6e();
        FUN_ram_40024f4c(fVar12 * DAT_ram_40094e9c + 0.0,param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 - 1 & 0xff) < 4) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
    }
    else {
      if (param_4 == 0) {
        uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_40094658);
        FUN_ram_400250fc(param_5,param_6,uVar2,0);
        return 0;
      }
      if ((param_4 - 1 & 0xff) < 2) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
    }
    break;
  case 2:
    if (param_4 == 0) {
      uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_40094658);
      FUN_ram_400250fc(param_5,param_6,uVar2,0);
      return 0;
    }
    if ((param_4 - 1 & 0xff) < 3) {
      fVar12 = (float)FUN_ram_40024e6e();
      uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_40094ea8 + DAT_ram_400952a4) * DAT_ram_40094e90);
      FUN_ram_400250b0(param_5,param_6,uVar2,uVar3);
      return 0;
    }
    if (param_4 == 4) {
      FUN_ram_4002507a(param_5,param_6);
      return 0;
    }
    break;
  case 3:
    if (param_4 == 0) {
      FUN_ram_4002514a(uVar13,DAT_ram_40094ea8,DAT_ram_400952a8);
      FUN_ram_40024f4c(param_5,param_6,uVar2);
      return 0;
    }
    if (param_4 == 1) {
      FUN_ram_4002514a(uVar13,DAT_ram_400952ac,DAT_ram_40095288);
      FUN_ram_40024f4c(param_5,param_6,uVar2);
      return 0;
    }
    if (param_4 == 2) {
      FUN_ram_4002507a(param_5,param_6);
      return 0;
    }
    break;
  case 4:
    if (bStack_45 < 8) {
      if (bStack_45 < 5) {
        if (bStack_45 == 0) goto LAB_ram_4002715c;
LAB_ram_4002706c:
        if (param_4 == 0) {
          fVar12 = (float)FUN_ram_40024e6e();
          fVar12 = fVar12 * DAT_ram_40096020 + DAT_ram_40094ee0;
          uVar13 = FUN_ram_40024e92(fVar12 * DAT_ram_40094e90);
          iVar8 = (int)uVar13;
          if (iVar8 < 1000) {
            FUN_ram_400250b0(param_5,param_6,iVar8,uVar4);
            return 0;
          }
          uVar2 = FUN_ram_40024e92(fVar12,iVar8,(int)((ulonglong)uVar13 >> 0x20),iVar8);
          FUN_ram_40024f1e(param_5,param_6,uVar2,uVar4);
          return 0;
        }
        if (param_4 == 1) {
          fVar12 = (float)FUN_ram_40024e6e();
          uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_400952b4 + 0.0);
          FUN_ram_400055da(param_5,param_6,&DAT_ram_40095178,uVar2);
          return 0;
        }
        if (bStack_45 == 0) goto LAB_ram_400271c2;
        if (bStack_45 == 3) {
          if (param_4 == 2) {
            fVar12 = (float)FUN_ram_40024e6e();
            uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_400952cc + DAT_ram_4009527c);
            FUN_ram_400055da(param_5,param_6,s__ld__s_ram_40095260,uVar2,uVar5);
            return 0;
          }
          if ((param_4 - 3 & 0xff) < 2) {
            FUN_ram_4002507a(param_5,param_6);
            return 0;
          }
          break;
        }
      }
      else if ((byte)(bStack_45 - 6) < 2) goto LAB_ram_4002706c;
      if (bStack_45 == 5) {
        if (param_4 == 0) {
          fVar12 = (float)FUN_ram_40024e6e();
          fVar12 = fVar12 * DAT_ram_40096028 + (float)PTR_entry_ram_40094618;
          uVar13 = FUN_ram_40024e92(fVar12 * DAT_ram_40094e90);
          iVar8 = (int)uVar13;
          if (iVar8 < 1000) {
            FUN_ram_400250b0(param_5,param_6,iVar8,uVar4);
            return 0;
          }
          uVar2 = FUN_ram_40024e92(fVar12,iVar8,(int)((ulonglong)uVar13 >> 0x20),iVar8);
          FUN_ram_40024f1e(param_5,param_6,uVar2,uVar4);
          return 0;
        }
        if (param_4 == 1) {
          fVar12 = (float)FUN_ram_40024e6e();
          uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_400952b4 + 0.0);
          FUN_ram_400055da(param_5,param_6,&DAT_ram_40095178,uVar2);
          return 0;
        }
        if (param_4 == 2) {
          fVar12 = (float)FUN_ram_40024e6e();
          uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_40095280 + DAT_ram_40094e88);
          FUN_ram_400055da(param_5,param_6,s__ld__s_ram_40095260,uVar2,uVar7);
          return 0;
        }
        if ((param_4 - 3 & 0xff) < 3) {
          FUN_ram_4002507a(param_5,param_6);
          return 0;
        }
      }
      else if (bStack_45 == 7) {
        if (param_4 == 2) {
          fVar12 = (float)FUN_ram_40024e6e();
          uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_40094ea8 + 0.0) * DAT_ram_40094e90);
          FUN_ram_400250b0(param_5,param_6,uVar2,uVar4);
          return 0;
        }
        if (param_4 == 3) {
          fVar12 = (float)FUN_ram_40024e6e();
          FUN_ram_40024f4c(fVar12 * DAT_ram_4009602c + DAT_ram_40094ec4,param_5,param_6,uVar2);
          return 0;
        }
        if ((param_4 - 4 & 0xff) < 2) {
          FUN_ram_4002507a(param_5,param_6);
          return 0;
        }
      }
      else if ((bStack_45 == 1) || (bStack_45 == 4)) {
        if ((param_4 - 2 & 0xff) < 2) {
          FUN_ram_4002507a(param_5,param_6);
          return 0;
        }
      }
      else if (bStack_45 == 2) {
        if ((param_4 - 2 & 0xff) < 3) {
          FUN_ram_4002507a(param_5,param_6);
          return 0;
        }
      }
      else if ((bStack_45 == 6) && ((param_4 - 2 & 0xff) < 4)) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
    }
    else {
LAB_ram_4002715c:
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_40096024 + DAT_ram_40094604);
        FUN_ram_40024f1e(param_5,param_6,uVar2,uVar4);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_400952b4 + 0.0);
        FUN_ram_400055da(param_5,param_6,&DAT_ram_40095178,uVar2);
        return 0;
      }
LAB_ram_400271c2:
      if ((param_4 - 2 & 0xff) < 3) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
    }
    break;
  case 5:
    if (bStack_45 == 0xe) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40024e6e();
        FUN_ram_40024f4c(fVar12 * DAT_ram_40096030 + DAT_ram_40094ec4,param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 & 0xfd) == 1) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
      if (param_4 == 2) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_40096034 + DAT_ram_40096038) * DAT_ram_4009603c *
                                 DAT_ram_40094658);
        FUN_ram_400250fc(param_5,param_6,uVar2,uVar4);
        return 0;
      }
      if (param_4 == 4) {
        uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_40096040);
        FUN_ram_400055da(param_5,param_6,&DAT_ram_40095178,uVar2);
        return 0;
      }
    }
    else if (bStack_45 == 0x10) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40024e6e();
        FUN_ram_40024f4c(fVar12 * DAT_ram_40096030 + DAT_ram_40094ec4,param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 == 1) || (param_4 == 4)) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
      if (param_4 == 2) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_40096044 + _DAT_ram_40096048) * DAT_ram_40094658)
        ;
        FUN_ram_400250fc(param_5,param_6,uVar2,0);
        return 0;
      }
      if (param_4 == 3) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_40094614 + DAT_ram_40094604);
        FUN_ram_400055da(param_5,param_6,&DAT_ram_40095178,uVar2);
        return 0;
      }
      if (param_4 == 5) {
        uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_4009600c);
        FUN_ram_400055da(param_5,param_6,&DAT_ram_40095178,uVar2);
        return 0;
      }
      if (param_4 == 6) {
        uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_40096040);
        FUN_ram_400055da(param_5,param_6,&DAT_ram_40095178,uVar2);
        return 0;
      }
    }
    else if (bStack_45 == 0x11) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40024e6e();
        FUN_ram_40024f4c(fVar12 * DAT_ram_40096030 + DAT_ram_40094ec4,param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 & 0xfb) == 1) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
      if (param_4 == 2) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_4009604c + DAT_ram_4009463c) * DAT_ram_4009603c *
                                 DAT_ram_40094658);
        FUN_ram_400250fc(param_5,param_6,uVar2,uVar4);
        return 0;
      }
      if (param_4 == 3) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_40094ea0 + DAT_ram_400952bc);
        FUN_ram_400055da(param_5,param_6,&DAT_ram_40095178,uVar2);
        return 0;
      }
      if (param_4 == 4) {
        fVar12 = (float)FUN_ram_40024e6e();
        FUN_ram_40024f4c(fVar12 * DAT_ram_40094e80 + 0.0,param_5,param_6,uVar2);
        return 0;
      }
      if (param_4 == 6) {
        uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_4009600c);
        FUN_ram_400055da(param_5,param_6,&DAT_ram_40095178,uVar2);
        return 0;
      }
      if (param_4 == 7) {
        uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_40096040);
        FUN_ram_400055da(param_5,param_6,&DAT_ram_40095178,uVar2);
        return 0;
      }
    }
    else if (bStack_45 == 0xc) {
      if (param_4 == 2) {
        fVar12 = (float)FUN_ram_40024e6e();
        FUN_ram_40024f4c(fVar12 * DAT_ram_4009602c + DAT_ram_40094ec4,param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 - 1 & 0xff) < 4) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 0xd) {
      if (param_4 == 2) {
        fVar12 = (float)FUN_ram_40024e6e();
        FUN_ram_40024f4c(fVar12 * DAT_ram_4009602c + DAT_ram_40094ec4,param_5,param_6,uVar2);
        return 0;
      }
      if (param_4 == 3) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_4009600c + DAT_ram_40095284);
        FUN_ram_400055da(param_5,param_6,&DAT_ram_40095178,uVar2);
        return 0;
      }
      if ((param_4 == 1) || (param_4 == 4)) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 0x12) {
      if (param_4 == 0) {
        FUN_ram_4002514a(uVar13,DAT_ram_40094e90,DAT_ram_40096050);
        FUN_ram_40024f4c(param_5,param_6,uVar2);
        return 0;
      }
      if (param_4 == 3) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_4009600c + DAT_ram_40095284);
        FUN_ram_400055da(param_5,param_6,&DAT_ram_40095178,uVar2);
        return 0;
      }
      if (((param_4 - 1 & 0xff) < 2) || (param_4 == 4)) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 0) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40024e6e();
        FUN_ram_40024f4c(fVar12 * DAT_ram_40096054 + DAT_ram_40094ee0,param_5,param_6,uVar2);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 + 0.0) * DAT_ram_40094658);
        FUN_ram_400250fc(param_5,param_6,uVar2,uVar4);
        return 0;
      }
      if (param_4 == 2) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
    }
    else if ((byte)(bStack_45 - 1) < 2) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40024e6e();
        FUN_ram_40024f4c(fVar12 * DAT_ram_4009602c + DAT_ram_40094ec4,param_5,param_6,uVar2);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_40094ea0 + DAT_ram_400952bc);
        FUN_ram_400055da(param_5,param_6,&DAT_ram_40095178,uVar2);
        return 0;
      }
      if ((param_4 - 2 & 0xff) < 2) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 8) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40024e6e();
        FUN_ram_40024f4c(fVar12 * DAT_ram_40096058 + DAT_ram_40094ee0,param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 - 1 & 0xff) < 4) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 9) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40024e6e();
        FUN_ram_40024f4c(fVar12 * DAT_ram_40094e9c + 0.0,param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 - 1 & 0xff) < 4) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 10) {
      if (param_4 == 0) {
        FUN_ram_4002514a(uVar13,DAT_ram_4009605c,DAT_ram_40094e90);
        FUN_ram_40024f4c(param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 - 1 & 0xff) < 4) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 3) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40024e6e();
        FUN_ram_40024f4c(fVar12 * DAT_ram_40096060 + DAT_ram_400952c0,param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 == 1) || ((param_4 - 4 & 0xff) < 2)) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
      if (param_4 == 2) {
        uVar2 = FUN_ram_40024eb4(param_7);
        FUN_ram_400055da(param_5,param_6,&DAT_ram_400955b4,uVar2);
        return 0;
      }
      if (param_4 == 3) {
        fVar12 = (float)FUN_ram_40024e6e();
        FUN_ram_40024f4c(fVar12 * DAT_ram_40094ec8 + 0.0,param_5,param_6,uVar2);
        return 0;
      }
    }
    else if (bStack_45 == 4) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40024e6e();
        FUN_ram_40024f4c(fVar12 * DAT_ram_40096060 + DAT_ram_400952c0,param_5,param_6,uVar2);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_40094ea8 + 0.0) * DAT_ram_40094e90);
        FUN_ram_400250b0(param_5,param_6,uVar2,uVar4);
        return 0;
      }
      if (param_4 == 2) {
        uVar2 = FUN_ram_40024eb4(param_7);
        FUN_ram_400055da(param_5,param_6,&DAT_ram_400955b4,uVar2);
        return 0;
      }
      if ((param_4 - 3 & 0xff) < 2) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
    }
    break;
  case 6:
    if (bStack_45 == 6) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_40096064 + DAT_ram_40094634) * DAT_ram_40094e90);
        FUN_ram_400250b0(param_5,param_6,uVar2,uVar6);
        return 0;
      }
      if (param_4 == 3) {
        fVar12 = (float)FUN_ram_40024e6e();
        FUN_ram_40024f4c(fVar12 * DAT_ram_40096068 + DAT_ram_40094e8c,param_5,param_6,uVar2);
        return 0;
      }
      if (((param_4 - 1 & 0xff) < 2) || ((param_4 - 4 & 0xff) < 2)) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
    }
    else if (bStack_45 == 5) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_40096064 + DAT_ram_40094634) * DAT_ram_40094e90);
        FUN_ram_400250b0(param_5,param_6,uVar2,uVar6);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_400952d4 + 0.0) * DAT_ram_40094e90);
        FUN_ram_400250b0(param_5,param_6,uVar2,uVar4);
        return 0;
      }
      if (param_4 == 3) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_40096010 + DAT_ram_400952d0);
        FUN_ram_400055da(param_5,param_6,s__ld__s_ram_40095260,uVar2,uVar5);
        return 0;
      }
      if ((param_4 == 2) || ((param_4 - 4 & 0xff) < 2)) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
    }
    else if ((bStack_45 - 7 & 0xfd) == 0) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_40096064 + DAT_ram_40094634) * DAT_ram_40094e90);
        FUN_ram_400250b0(param_5,param_6,uVar2,uVar6);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_4009606c + DAT_ram_40094ed4) * DAT_ram_40094e90);
        FUN_ram_400250b0(param_5,param_6,uVar2,uVar4);
        return 0;
      }
      if (param_4 == 2) {
        fVar12 = (float)FUN_ram_40024e6e();
        FUN_ram_40024f4c(fVar12 * DAT_ram_40096070 + DAT_ram_400952dc,param_5,param_6,uVar2);
        return 0;
      }
      if ((param_4 - 3 & 0xff) < 3) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
    }
    else {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_40096064 + DAT_ram_40094634) * DAT_ram_40094e90);
        FUN_ram_400250b0(param_5,param_6,uVar2,uVar6);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_400952d4 + 0.0) * DAT_ram_40094e90);
        FUN_ram_400250b0(param_5,param_6,uVar2,uVar4);
        return 0;
      }
      if ((param_4 - 2 & 0xff) < 4) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
    }
    break;
  case 7:
    if (bStack_45 < 2) {
      if (bStack_45 == 1) {
        if (param_4 < 6) {
LAB_ram_40027e08:
          fVar12 = (float)FUN_ram_40024e6e();
          uVar2 = FUN_ram_40024e92((fVar12 * (float)DAT_ram_40096074 + (float)DAT_ram_400952e0) *
                                   DAT_ram_40094e90);
          FUN_ram_400250b0(param_5,param_6,uVar2,uVar3);
          return 0;
        }
        uVar9 = 6;
      }
      else {
        if (param_4 < 3) goto LAB_ram_40027e08;
        uVar9 = 3;
      }
    }
    else {
      if (param_4 < 8) goto LAB_ram_40027e08;
      uVar9 = 8;
    }
    if (param_4 == uVar9) {
      fVar12 = (float)FUN_ram_40024e6e();
      uVar2 = FUN_ram_40024e92((fVar12 * DAT_ram_400952cc + DAT_ram_4009527c) * DAT_ram_40094e90);
      FUN_ram_400250b0(param_5,param_6,uVar2,uVar3);
      return 0;
    }
    break;
  case 9:
    if (bStack_45 == 4) {
      if (param_4 == 0) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_400952cc + DAT_ram_4009527c);
        FUN_ram_400055da(param_5,param_6,s__ld__s_ram_40095260,uVar2,uVar5);
        return 0;
      }
      if (param_4 == 1) {
        fVar12 = (float)FUN_ram_40024e6e();
        uVar2 = FUN_ram_40024e92((fVar12 * (float)PTR_entry_ram_40094618 + DAT_ram_40094600) *
                                 DAT_ram_40094658);
        FUN_ram_400250fc(param_5,param_6,uVar2,uVar5);
        return 0;
      }
      if (param_4 == 2) {
        FUN_ram_4002507a(param_5,param_6);
        return 0;
      }
    }
  }
  uVar2 = FUN_ram_40024e92(fVar12 * DAT_ram_40094658);
  FUN_ram_400250fc(param_5,param_6,uVar2,0);
  return 0;
}


