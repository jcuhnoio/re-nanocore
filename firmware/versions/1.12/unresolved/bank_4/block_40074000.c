/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40074000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4007404a.
 * REA evidence: ev_42298bc5d4a9100b2a576f2070e3bd352b9ad4eba53023b81a0a83aaae88bc93
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4007404a(void)

{
  return 5;
}


/* NanoCore 1.12, address 0x40074098.
 * REA evidence: ev_294d2149062099b8e3bafa8b7b3a81ef0f5f3ce8cb2abf294856d6598165d942
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40074098(ulonglong *param_1,uint param_2)

{
  ulonglong uVar1;
  
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_4009675c;
    uVar1 = _DAT_ram_4009f080;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = _DAT_ram_4009f080;
      if (param_2 != 2) {
        param_1[1] = uVar1;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = _DAT_ram_4009f080;
      }
    }
    if (4 < param_2) {
      param_1[2] = (ulonglong)DAT_ram_40096760;
    }
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400740fc.
 * REA evidence: ev_520e85db85a48ffe5b222ee4c33ea08c50cef104f0c8ac4445aefae18a8119bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400740fc(ulonglong *param_1,uint param_2)

{
  ulonglong uVar1;
  
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_4009672c;
    if (param_2 != 1) {
      uVar1 = CONCAT44(DAT_ram_40096760,DAT_ram_4009675c);
      *(ulonglong *)((int)param_1 + 4) = uVar1;
      if (param_2 != 2) {
        param_1[1] = uVar1;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = CONCAT44(DAT_ram_40096760,DAT_ram_4009675c);
      }
    }
    if (4 < param_2) {
      param_1[2] = (ulonglong)DAT_ram_40096760;
    }
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400741a8.
 * REA evidence: ev_ff337167ce5bc046d65cedea3d21615aaec17cd6988421e204f780e5eac1e738
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400741a8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (param_1 == 1) {
    uVar1 = 3;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x400749e2.
 * REA evidence: ev_37aa9dad4aa1439ccd2c81a55bfc5e437ef98f8db57cd29f7bb06bd695d6af2e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_400749e2(uint param_1)

{
  if (param_1 < 0x3c) {
    return (&DAT_ram_4009fe90)[*(int *)(&DAT_ram_4009ff40 + param_1 * 0x2c)];
  }
  return 0;
}


/* NanoCore 1.12, address 0x40074a0e.
 * REA evidence: ev_11807b855bfde032c5a78d6165a12222f1a4732cb89f0569a22046381b8b291a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40074a0e(uint param_1,uint param_2)

{
  if ((param_1 < 0x3c) && (param_2 < 9)) {
    return (int)(char)(&DAT_ram_4009feac)
                      [param_2 + *(int *)(&DAT_ram_4009ff40 + param_1 * 0x2c) * 9];
  }
  return -1;
}


/* NanoCore 1.12, address 0x40074a46.
 * REA evidence: ev_697ab05e99c271b791a724089a44ea23924c9c8c0ca506523c3205e6a857f86d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_40074a46(uint param_1)

{
  if (param_1 < 0x3c) {
    return (&PTR_s_Analog_Synth_ram_4009fb40_ram_4009ff38)[param_1 * 0xb];
  }
  return s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
}


/* NanoCore 1.12, address 0x40074a6e.
 * REA evidence: ev_1a6f51edbb81f60aecf98a1174924ed8a2ff2d55752cd3b8af1e2af7aae92dd9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_40074a6e(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 < 0x3c) {
    iVar1 = param_1 * 0x2c;
    iVar4 = *(int *)(&DAT_ram_4009ff40 + iVar1);
    if (param_2 < (byte)(&DAT_ram_4009fe90)[iVar4]) {
      iVar2 = iVar4 * 9;
      iVar3 = 0;
      if (param_2 != (int)(char)(&DAT_ram_4009feac)[iVar2]) {
        if (param_2 == (int)(char)(&DAT_ram_4009fead)[iVar2]) {
          if (iVar4 - 1U < 2) {
            return s_Release_ram_4009b0b4;
          }
          return PTR_s_Decay_ram_4009ac88_ram_4009ff04;
        }
        iVar3 = 2;
        if ((param_2 != (int)(char)(&DAT_ram_4009feae)[iVar2]) &&
           (iVar3 = 3, param_2 != (int)(char)(&DAT_ram_4009feaf)[iVar2])) {
          if (param_2 == (int)(char)(&DAT_ram_4009feb0)[iVar2]) {
            if (*(char **)(&DAT_ram_4009ff60 + iVar1) != (char *)0x0) {
              return *(char **)(&DAT_ram_4009ff60 + iVar1);
            }
            return (&PTR_s_Detune_ram_4009fae0_ram_4009fe74)[*(int *)(&DAT_ram_4009ff3c + iVar1)];
          }
          iVar3 = 5;
          if (((param_2 != (int)(char)(&DAT_ram_4009feb1)[iVar2]) &&
              (iVar3 = 6, param_2 != (int)(char)(&DAT_ram_4009feb2)[iVar2])) &&
             (iVar3 = 7, param_2 != (int)(char)(&DAT_ram_4009feb3)[iVar2])) {
            if ((int)(char)(&DAT_ram_4009feb4)[iVar4 * 9] != param_2) {
              return s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
            }
            if (*(int *)(&DAT_ram_4009ff5c + param_1 * 0x2c) == 0x22) {
              return &DAT_ram_4009ae10;
            }
            return PTR_s_Pattern_ram_4009faf0_ram_4009ff20;
          }
        }
      }
      return (&PTR_DAT_ram_4009ac9c_ram_4009ff00)[iVar3];
    }
  }
  return s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
}


/* NanoCore 1.12, address 0x40074b8c.
 * REA evidence: ev_e0ca0fccce3a3313f96ed8a27f0afff9b65de8e309a30cca787f67c9c73bc5aa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40074b8c(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 < 0x3c) &&
     (param_2 < (byte)(&DAT_ram_4009fe90)[*(int *)(&DAT_ram_4009ff40 + param_1 * 0x2c)])) {
    uVar2 = 5;
    if (param_1 != 0 || param_2 != 0) {
      iVar1 = *(int *)(&DAT_ram_4009ff40 + param_1 * 0x2c) * 9;
      if (param_2 != (int)(char)(&DAT_ram_4009feb3)[iVar1]) {
        uVar2 = 6;
        if (param_2 != (int)(char)(&DAT_ram_4009feb4)[iVar1]) {
          uVar2 = 0;
        }
        return uVar2;
      }
      uVar2 = 6;
    }
    return uVar2;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40074bec.
 * REA evidence: ev_b404370c26d9a292f24a4cd597f74eb23ce458b1197b5a33eaa28f5e3d59759f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_40074bec(uint param_1,int param_2,uint param_3)

{
  if (param_1 == 0) {
    if (param_2 == 0) {
      if (4 < param_3) {
        return s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
      }
      return (&PTR_DAT_ram_4009a65c_ram_4009ff24)[param_3];
    }
  }
  else if (0x3b < param_1) {
    return s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
  }
  if ((char)(&DAT_ram_4009feb3)[*(int *)(&DAT_ram_4009ff40 + param_1 * 0x2c) * 9] == param_2) {
    if (param_3 < 6) {
      return (&PTR_DAT_ram_4009fa80_ram_4009fee8)[param_3];
    }
  }
  else if ((char)(&DAT_ram_4009feb4)[*(int *)(&DAT_ram_4009ff40 + param_1 * 0x2c) * 9] == param_2) {
    if (*(int *)(&DAT_ram_4009ff5c + param_1 * 0x2c) == 0x22) {
      if (param_3 < 6) {
        return (&PTR_s_Trance_ram_4009faa8_ram_4009fe94)[param_3];
      }
    }
    else if (param_3 < 6) {
      return (&PTR_DAT_ram_4009fa5c_ram_4009fed0)[param_3];
    }
  }
  return s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
}


/* NanoCore 1.12, address 0x40074ca6.
 * REA evidence: ev_ca92afcbac115798195eafef58454c3b5c3bc3fb0f8a9ac5e1d5da22cb0dcc81
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_40074ca6(float param_1)

{
  if (param_1 < 0.0) {
    return DAT_ram_40099f70;
  }
  if (param_1 <= DAT_ram_4009672c) {
    return param_1 * DAT_ram_4009b128 + DAT_ram_40099f70;
  }
  return DAT_ram_40099f8c;
}


/* NanoCore 1.12, address 0x40074cf0.
 * REA evidence: ev_729cd630258cf70339d5a3a5f13e117dec8943fc934395800b88c750ab375d0f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40074cf0(float param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong *puVar2;
  
  if (param_2 == (ulonglong *)0x0) {
    return;
  }
  puVar2 = param_2;
  do {
    iVar1 = memset(puVar2,0,0x80);
    fence();
    puVar2 = (ulonglong *)(iVar1 + 0x80);
  } while (puVar2 != param_2 + 0x600);
  *(undefined1 *)puVar2 = 0;
  *(undefined1 *)(iVar1 + 0x81) = 0;
  *(undefined1 *)(iVar1 + 0x82) = 0;
  *(undefined1 *)(iVar1 + 0x83) = 0;
  *(undefined1 *)(iVar1 + 0x84) = 0;
  *(undefined1 *)(iVar1 + 0x85) = 0;
  *(undefined1 *)(iVar1 + 0x86) = 0;
  *(undefined1 *)(iVar1 + 0x87) = 0;
  *(undefined1 *)(iVar1 + 0x88) = 0;
  *(undefined1 *)(iVar1 + 0x89) = 0;
  *(undefined1 *)(iVar1 + 0x8a) = 0;
  *(undefined1 *)(iVar1 + 0x8b) = 0;
  fence();
  if (DAT_ram_40099f28 < param_1) {
    *param_2 = (ulonglong)(uint)param_1;
    return;
  }
  *param_2 = (ulonglong)DAT_ram_4009f078;
  return;
}


/* NanoCore 1.12, address 0x40074d8c.
 * REA evidence: ev_db749e753947dd871b12fb821fbf5eb5aacf4ee34c87daac64d69aea5fab311b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40074d8c(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    iVar1 = param_1 + 0xc;
    do {
      iVar1 = memset(iVar1,0,0x80);
      fence();
      iVar1 = iVar1 + 0x80;
    } while (iVar1 != param_1 + 0x2f8c);
    memset(param_1 + 0x2f8c,0,0x80);
    fence();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40074de6.
 * REA evidence: ev_38a68ad1be502c9fc282b88da8c4e06010a8bf26e9bc9b2e448066014183c8ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40074de6(ulonglong *param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    *param_1 = (ulonglong)DAT_ram_400a0988;
    if (param_2 == 1) {
      uVar1 = 1;
    }
    else {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009a644;
      if (param_2 == 2) {
        uVar1 = 2;
      }
      else {
        param_1[1] = (ulonglong)DAT_ram_4009b18c;
        if (param_2 == 3) {
          uVar1 = 3;
        }
        else {
          *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_4009f0bc;
          if (param_2 - 1 < 4) {
            uVar1 = 4;
          }
          else {
            uVar1 = 5;
            param_1[2] = (ulonglong)DAT_ram_4009672c;
          }
        }
      }
    }
    if (uVar1 < param_2) {
      memset((int)param_1 + uVar1 * 4,0,(param_2 - uVar1) * 4);
      return;
    }
  }
  return;
}


