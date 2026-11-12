/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40064000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400646f6.
 * REA evidence: ev_07e55213df43dbbfe6a402e3252ad2ee461138deb983333d5da1dbaa3e16d763
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400646f6(uint param_1)

{
  if (2 < param_1) {
    param_1 = 2;
  }
  return param_1 & 0xff;
}


/* NanoCore 1.10, address 0x40064706.
 * REA evidence: ev_5a9da454c948605cab9b024aba45eea7cd60bdfb1967acb3035eee1cfb4a0dd7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40064706(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 7;
  if (param_1 != 1) {
    uVar2 = 9;
  }
  uVar1 = 4;
  if (param_1 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4006471c.
 * REA evidence: ev_657296e29b22c4a3ecffe0ef61e24c275849b283ab992a0f71c71da5cdcd74a8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006471c(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x164) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 0x184) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0x19c) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    *(undefined4 *)(param_1 + 0x1d4) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 500) = 0;
    *(undefined4 *)(param_1 + 0x20c) = 0;
    *(undefined4 *)(param_1 + 0x210) = 0;
    *(undefined4 *)(param_1 + 0x228) = 0;
    *(undefined4 *)(param_1 + 0x22c) = 0;
    *(undefined4 *)(param_1 + 0x244) = 0;
    *(undefined4 *)(param_1 + 0x248) = 0;
    *(undefined4 *)(param_1 + 0x260) = 0;
    *(undefined4 *)(param_1 + 0x264) = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x400647c0.
 * REA evidence: ev_9188770f88d8dc776890679c7b6c9d852ca1e8fdda496c8ab72f0d963710efaf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400647c0(float param_1,ulonglong *param_2)

{
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != (ulonglong *)0x0) {
    memset(param_2,0,0x268);
    fVar1 = param_1;
    if (param_1 <= DAT_ram_4009281c) {
      fVar1 = DAT_ram_40092878;
    }
    uVar4 = (ulonglong)DAT_ram_4009847c;
    uVar3 = (ulonglong)DAT_ram_40092818;
    uVar2 = (ulonglong)(uint)DAT_ram_4009281c;
    *param_2 = (ulonglong)(uint)fVar1;
    *(bool *)((int)param_2 + 4) = 0.0 < param_1;
    *(undefined1 *)((int)param_2 + 5) = 0xff;
    param_2[1] = uVar3;
    *(ulonglong *)((int)param_2 + 0xc) = uVar3;
    param_2[2] = uVar4;
    *(ulonglong *)((int)param_2 + 0x14) = uVar4;
    param_2[3] = uVar4;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar4;
    param_2[4] = uVar4;
    *(ulonglong *)((int)param_2 + 0x24) = uVar4;
    param_2[5] = uVar4;
    *(ulonglong *)((int)param_2 + 0x2c) = uVar4;
    param_2[6] = uVar4;
    *(ulonglong *)((int)param_2 + 0x34) = uVar2;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40064846.
 * REA evidence: ev_80e73af8898e0574c1b3716034d45a9bed6b815cc084abf667f100847a13835d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40064846(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 7;
  if (param_3 != 1) {
    iVar1 = 9;
  }
  if (param_3 == 0) {
    iVar1 = 4;
  }
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    uVar2 = (undefined4)_DAT_ram_40092864;
    *param_1 = uVar2;
    if ((((param_2 != 1) &&
         (((param_1[1] = uVar2, param_2 != 2 && (param_1[2] = uVar2, param_2 != 3)) &&
          (param_1[3] = uVar2, iVar1 != 4)))) &&
        ((((param_2 != 4 && (param_1[4] = uVar2, iVar1 != 5)) && (param_2 != 5)) &&
         ((param_1[5] = uVar2, iVar1 != 6 && (param_2 != 6)))))) &&
       ((param_1[6] = uVar2, iVar1 != 7 &&
        (((param_2 != 7 && (param_1[7] = uVar2, iVar1 == 9)) && (param_2 != 8)))))) {
      param_1[8] = uVar2;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x400648fa.
 * REA evidence: ev_9ddd0f3de240aa31a575fa81a1147cd299476d56d9247419642058fd04185567
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400648fa(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    uVar1 = _DAT_ram_40092864;
    *param_1 = _DAT_ram_40092864;
    if (((((param_2 != 1) && (*(undefined8 *)((int)param_1 + 4) = uVar1, param_2 != 2)) &&
         (param_1[1] = uVar1, param_2 != 3)) &&
        ((*(undefined8 *)((int)param_1 + 0xc) = uVar1, param_2 != 4 &&
         (param_1[2] = uVar1, param_2 != 5)))) &&
       ((*(undefined8 *)((int)param_1 + 0x14) = uVar1, param_2 != 6 &&
        ((param_1[3] = uVar1, param_2 != 7 &&
         (*(undefined8 *)((int)param_1 + 0x1c) = uVar1, param_2 != 8)))))) {
      param_1[4] = uVar1;
    }
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4006496c.
 * REA evidence: ev_8ea56d4459ebb0d1a17c816bbda58e04ba637f35e8220f0f0b6507ccd4bd3a2b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4006550c) */
/* WARNING: Removing unreachable block (ram,0x4006586a) */
/* WARNING: Removing unreachable block (ram,0x40065ca4) */
/* WARNING: Removing unreachable block (ram,0x40065c84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4006496c(float *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                     float *param_7,uint param_8,char param_9,int param_10)

{
  float fVar1;
  undefined *puVar2;
  undefined4 uVar3;
  float in_register_00000100;
  int iVar4;
  ulonglong *puVar5;
  int iVar6;
  int extraout_a5;
  int extraout_a5_00;
  int extraout_a5_01;
  int extraout_a5_02;
  int extraout_a5_03;
  int extraout_a5_04;
  float *pfVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  float fVar29;
  
  if (param_1 == (float *)0x0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  if (param_6 == 0) {
    return;
  }
  if (param_10 != 0) {
    *(bool *)param_10 = param_9 != '\0';
  }
  fVar29 = DAT_ram_400930bc;
  uVar3 = DAT_ram_400930a4;
  fVar1 = DAT_ram_4009281c;
  if (*(char *)(param_1 + 1) != '\0') {
    fVar22 = *param_1;
    if (*param_1 <= DAT_ram_4009281c) {
      fVar22 = DAT_ram_40092878;
    }
    uVar8 = param_8 & 0xff;
    if (2 < param_8) {
      uVar8 = 2;
    }
    if (param_8 == 0) {
      iVar6 = 0xc;
      iVar4 = 3;
    }
    else if (param_8 == 1) {
      iVar6 = 0x18;
      iVar4 = 6;
    }
    else {
      iVar6 = 0x20;
      iVar4 = 8;
    }
    uVar27 = 0;
    if (param_7 != (float *)0x0) {
      fVar25 = (float)*(undefined8 *)(iVar6 + (int)param_7);
      if (0.0 <= fVar25) {
        if (fVar25 <= DAT_ram_4009281c) {
          uVar27 = (ulonglong)(uint)(fVar25 * DAT_ram_400934e0 + DAT_ram_40093490);
        }
        else {
          uVar27 = (ulonglong)DAT_ram_40093494;
        }
      }
      else {
        uVar27 = (ulonglong)(uint)DAT_ram_40093490;
      }
    }
    if ((float)*(undefined8 *)(param_1 + 0xc) != (float)uVar27) {
      *(ulonglong *)(param_1 + 0xc) = uVar27;
      uVar24 = FUN_ram_40000d54(uVar3,(float)uVar27 / fVar29);
      *(undefined8 *)(param_1 + 0xd) = uVar24;
    }
    fVar29 = DAT_ram_4009281c;
    if (*(byte *)((int)param_1 + 5) != uVar8) {
      uVar28 = (ulonglong)(uint)DAT_ram_4009281c;
      uVar27 = (ulonglong)DAT_ram_40092818;
      *(char *)((int)param_1 + 5) = (char)uVar8;
      *(ulonglong *)(param_1 + 0xe) = uVar28;
      *(ulonglong *)(param_1 + 2) = uVar27;
      *(ulonglong *)(param_1 + 3) = uVar27;
      param_1[0xf] = 0.0;
      param_1[0x10] = 0.0;
      param_1[0x11] = 0.0;
      param_1[0x12] = 0.0;
      *(ulonglong *)(param_1 + 0x1c) = uVar28;
      param_1[0x1d] = 0.0;
      param_1[0x1e] = 0.0;
      param_1[0x1f] = 0.0;
      param_1[0x20] = 0.0;
      param_1[0x2a] = fVar29;
      param_1[0x2b] = 0.0;
      param_1[0x2c] = 0.0;
      param_1[0x2d] = 0.0;
      param_1[0x2e] = 0.0;
      param_1[0x31] = fVar29;
      param_1[0x32] = 0.0;
      param_1[0x33] = 0.0;
      param_1[0x34] = 0.0;
      param_1[0x35] = 0.0;
      param_1[0x38] = fVar29;
      param_1[0x39] = 0.0;
      param_1[0x3a] = 0.0;
      param_1[0x3b] = 0.0;
      param_1[0x3c] = 0.0;
      param_1[0x3f] = fVar29;
      param_1[0x40] = 0.0;
      param_1[0x41] = 0.0;
      param_1[0x42] = 0.0;
      param_1[0x43] = 0.0;
      param_1[0x46] = fVar29;
      param_1[0x47] = 0.0;
      param_1[0x48] = 0.0;
      param_1[0x49] = 0.0;
      param_1[0x4a] = 0.0;
      param_1[0x4d] = fVar29;
      param_1[0x4e] = 0.0;
      param_1[0x4f] = 0.0;
      param_1[0x50] = 0.0;
      param_1[0x51] = 0.0;
      param_1[0x54] = fVar29;
      param_1[0x55] = 0.0;
      param_1[0x56] = 0.0;
      param_1[0x57] = 0.0;
      param_1[0x58] = 0.0;
      param_1[0x5b] = fVar29;
      param_1[0x5c] = 0.0;
      param_1[0x5d] = 0.0;
      param_1[0x5e] = 0.0;
      param_1[0x5f] = 0.0;
      *(ulonglong *)(param_1 + 0x15) = uVar28;
      param_1[0x16] = 0.0;
      param_1[0x17] = 0.0;
      param_1[0x18] = 0.0;
      param_1[0x19] = 0.0;
      param_1[0x23] = fVar29;
      param_1[0x24] = 0.0;
      param_1[0x25] = 0.0;
      param_1[0x26] = 0.0;
      param_1[0x27] = 0.0;
      param_1[0x62] = fVar29;
      param_1[99] = 0.0;
      param_1[100] = 0.0;
      param_1[0x65] = 0.0;
      param_1[0x66] = 0.0;
      param_1[0x69] = fVar29;
      param_1[0x6a] = 0.0;
      param_1[0x6b] = 0.0;
      param_1[0x6c] = 0.0;
      param_1[0x6d] = 0.0;
      param_1[0x70] = fVar29;
      param_1[0x71] = 0.0;
      param_1[0x72] = 0.0;
      param_1[0x73] = 0.0;
      param_1[0x74] = 0.0;
      param_1[0x77] = fVar29;
      param_1[0x78] = 0.0;
      param_1[0x79] = 0.0;
      param_1[0x7a] = 0.0;
      param_1[0x7b] = 0.0;
      param_1[0x7e] = fVar29;
      param_1[0x7f] = 0.0;
      param_1[0x80] = 0.0;
      param_1[0x81] = 0.0;
      param_1[0x82] = 0.0;
      param_1[0x85] = fVar29;
      param_1[0x86] = 0.0;
      param_1[0x87] = 0.0;
      param_1[0x88] = 0.0;
      param_1[0x89] = 0.0;
      param_1[0x8c] = fVar29;
      param_1[0x8d] = 0.0;
      param_1[0x8e] = 0.0;
      param_1[0x8f] = 0.0;
      uVar27 = (ulonglong)DAT_ram_4009847c;
      param_1[0x90] = 0.0;
      param_1[0x93] = fVar29;
      param_1[0x94] = 0.0;
      param_1[0x95] = 0.0;
      param_1[0x96] = 0.0;
      param_1[0x97] = 0.0;
      *(ulonglong *)(param_1 + 4) = uVar27;
      *(ulonglong *)(param_1 + 5) = uVar27;
      *(ulonglong *)(param_1 + 6) = uVar27;
      *(ulonglong *)(param_1 + 7) = uVar27;
      *(ulonglong *)(param_1 + 8) = uVar27;
      *(ulonglong *)(param_1 + 9) = uVar27;
      *(ulonglong *)(param_1 + 10) = uVar27;
      *(ulonglong *)(param_1 + 0xb) = uVar27;
      param_1[0x13] = 0.0;
      param_1[0x14] = 0.0;
      param_1[0x21] = 0.0;
      param_1[0x22] = 0.0;
      param_1[0x2f] = 0.0;
      param_1[0x30] = 0.0;
      param_1[0x36] = 0.0;
      param_1[0x37] = 0.0;
      param_1[0x3d] = 0.0;
      param_1[0x3e] = 0.0;
      param_1[0x44] = 0.0;
      param_1[0x45] = 0.0;
      param_1[0x4b] = 0.0;
      param_1[0x4c] = 0.0;
      param_1[0x52] = 0.0;
      param_1[0x53] = 0.0;
      param_1[0x59] = 0.0;
      param_1[0x5a] = 0.0;
      param_1[0x60] = 0.0;
      param_1[0x61] = 0.0;
      param_1[0x1a] = 0.0;
      param_1[0x1b] = 0.0;
      param_1[0x28] = 0.0;
      param_1[0x29] = 0.0;
      param_1[0x67] = 0.0;
      param_1[0x68] = 0.0;
      param_1[0x6e] = 0.0;
      param_1[0x6f] = 0.0;
      param_1[0x75] = 0.0;
      param_1[0x76] = 0.0;
      param_1[0x7c] = 0.0;
      param_1[0x7d] = 0.0;
      param_1[0x83] = 0.0;
      param_1[0x84] = 0.0;
      param_1[0x8a] = 0.0;
      param_1[0x8b] = 0.0;
      param_1[0x91] = 0.0;
      param_1[0x92] = 0.0;
      param_1[0x98] = 0.0;
      param_1[0x99] = 0.0;
    }
    fVar25 = DAT_ram_400930bc;
    uVar3 = DAT_ram_400930a4;
    fVar29 = DAT_ram_40092864;
    if (param_8 < 2) {
      if (param_8 == 1) {
        pfVar11 = param_1 + 4;
        pfVar7 = param_1 + 0x2a;
        pfVar10 = (float *)&DAT_ram_40098488;
        pfVar9 = param_7;
        do {
          fVar19 = 0.0;
          if (((param_7 != (float *)0x0) &&
              (fVar17 = *pfVar9, fVar19 = DAT_ram_400934f4, 0.0 <= fVar17)) &&
             (fVar19 = DAT_ram_400930b0, fVar17 <= fVar1)) {
            fVar19 = fVar17 * DAT_ram_4009424c + DAT_ram_400934f4;
          }
          fVar17 = in_register_00000100;
          if (*pfVar11 != fVar19) {
            if (0.0 < fVar22) {
              fVar21 = *pfVar10;
              fVar15 = fVar22 * fVar29 * DAT_ram_4009421c;
              fVar17 = fVar25;
              if ((fVar25 <= fVar21) && (fVar17 = fVar15, fVar21 <= fVar15)) {
                fVar17 = fVar21;
              }
              fVar20 = fVar19 / DAT_ram_400930dc;
              fVar18 = (float)FUN_ram_40000d54(uVar3,fVar20);
              fVar16 = (fVar17 / fVar22) * DAT_ram_400980f4;
              FUN_ram_40000786(fVar16);
              fVar17 = in_register_00000100;
              fVar23 = (float)FUN_ram_40000a08(fVar16);
              fVar12 = DAT_ram_40092834;
              fVar23 = fVar23 * fVar29;
              fVar26 = in_register_00000100 * DAT_ram_40092834;
              fVar14 = fVar18 * fVar23 + fVar1;
              fVar13 = -(fVar18 * fVar23) + fVar1;
              fVar16 = fVar23 / fVar18 + fVar1;
              fVar23 = fVar1 - fVar23 / fVar18;
              if (fVar16 != 0.0) {
                fVar16 = fVar1 / fVar16;
                fVar14 = fVar14 * fVar16;
                fVar26 = fVar26 * fVar16;
                fVar13 = fVar13 * fVar16;
                fVar23 = fVar23 * fVar16;
              }
              *pfVar7 = fVar14;
              pfVar7[1] = fVar26;
              pfVar7[2] = fVar13;
              pfVar7[3] = fVar26;
              pfVar7[4] = fVar23;
              fVar16 = fVar25;
              if ((fVar25 <= fVar21) && (fVar16 = fVar15, fVar21 <= fVar15)) {
                fVar16 = fVar21;
              }
              fVar23 = (float)FUN_ram_40000d54(uVar3,fVar20);
              fVar21 = (fVar16 / fVar22) * DAT_ram_400980f4;
              fVar16 = (float)FUN_ram_40000786(fVar21);
              fVar16 = fVar16 * fVar12;
              fVar20 = (float)FUN_ram_40000a08(fVar21);
              fVar20 = fVar20 * fVar29;
              fVar15 = fVar23 * fVar20 + fVar1;
              fVar14 = -(fVar23 * fVar20) + fVar1;
              fVar21 = fVar20 / fVar23 + fVar1;
              fVar20 = fVar1 - fVar20 / fVar23;
              if (fVar21 != 0.0) {
                fVar21 = fVar1 / fVar21;
                fVar15 = fVar15 * fVar21;
                fVar16 = fVar16 * fVar21;
                fVar14 = fVar14 * fVar21;
                fVar20 = fVar20 * fVar21;
              }
              pfVar7[0x38] = fVar15;
              pfVar7[0x39] = fVar16;
              pfVar7[0x3a] = fVar14;
              pfVar7[0x3b] = fVar16;
              pfVar7[0x3c] = fVar20;
            }
            *pfVar11 = fVar19;
          }
          pfVar9 = pfVar9 + 1;
          pfVar11 = pfVar11 + 1;
          pfVar7 = pfVar7 + 7;
          pfVar10 = pfVar10 + 1;
          in_register_00000100 = fVar17;
        } while (pfVar9 != param_7 + 6);
      }
      else {
        if (param_7 == (float *)0x0) {
          fVar29 = 0.0;
          uVar27 = 0;
          fVar25 = fVar29;
        }
        else {
          fVar29 = *param_7;
          if (fVar29 < 0.0) {
            uVar27 = (ulonglong)(uint)DAT_ram_400934f4;
          }
          else if (fVar1 < fVar29) {
            uVar27 = (ulonglong)(uint)DAT_ram_400930b0;
          }
          else {
            uVar27 = (ulonglong)(uint)(fVar29 * DAT_ram_4009424c + DAT_ram_400934f4);
          }
          fVar25 = param_7[1];
          fVar29 = DAT_ram_400934f4;
          if ((0.0 <= fVar25) && (fVar29 = DAT_ram_400930b0, fVar25 <= fVar1)) {
            fVar29 = fVar25 * DAT_ram_4009424c + DAT_ram_400934f4;
          }
          fVar19 = param_7[2];
          fVar25 = DAT_ram_400934f4;
          if ((0.0 <= fVar19) && (fVar25 = DAT_ram_400930b0, fVar19 <= fVar1)) {
            fVar25 = fVar19 * DAT_ram_4009424c + DAT_ram_400934f4;
          }
        }
        if ((float)*(undefined8 *)(param_1 + 4) != (float)uVar27) {
          if (0.0 < fVar22) {
            fVar19 = fVar22 * DAT_ram_40092864;
            fVar21 = in_register_00000100;
            fVar17 = (float)FUN_ram_40000d54(DAT_ram_400930a4,(float)uVar27 / DAT_ram_400930dc);
            if (extraout_a5 < 0x100 && fVar17 < 0.0) {
              fVar15 = (float)FUN_ram_40000e84();
            }
            else {
              fVar15 = SQRT(fVar17);
            }
            fVar19 = fVar19 * DAT_ram_4009421c;
            if (DAT_ram_4009286c <= fVar19) {
              fVar19 = DAT_ram_4009286c;
            }
            fVar19 = (fVar19 / fVar22) * DAT_ram_400980f4;
            fVar18 = (float)FUN_ram_40000786(fVar19);
            FUN_ram_40000a08(fVar19);
            fVar26 = DAT_ram_40092834;
            puVar2 = PTR_firmware_entry_ram_40092830;
            fVar13 = fVar17 - fVar1;
            fVar19 = fVar17 + fVar1;
            fVar15 = fVar15 + fVar15;
            fVar14 = SQRT((fVar1 / fVar17 + fVar17) * 0.0 + (float)PTR_firmware_entry_ram_40092830)
                     * fVar21;
            fVar20 = fVar18 * fVar13 + fVar19;
            fVar12 = -(fVar18 * fVar13) + fVar19;
            fVar16 = fVar14 * fVar15 + fVar20;
            fVar23 = (fVar17 + fVar17) * (-(fVar18 * fVar19) + fVar13);
            fVar13 = (fVar18 * fVar19 + fVar13) * DAT_ram_40092834;
            fVar20 = -(fVar14 * fVar15) + fVar20;
            fVar19 = fVar17 * (fVar14 * fVar15 + fVar12);
            fVar17 = fVar17 * (-(fVar14 * fVar15) + fVar12);
            if (fVar16 != 0.0) {
              fVar16 = fVar1 / fVar16;
              fVar19 = fVar19 * fVar16;
              fVar23 = fVar23 * fVar16;
              fVar17 = fVar17 * fVar16;
              fVar13 = fVar13 * fVar16;
              fVar20 = fVar20 * fVar16;
            }
            param_1[0x2c] = fVar17;
            param_1[0x2e] = fVar20;
            param_1[0x2a] = fVar19;
            param_1[0x2b] = fVar23;
            param_1[0x2d] = fVar13;
            fVar19 = (float)FUN_ram_40000d54(uVar3,in_register_00000100);
            if (extraout_a5_00 < 0x100 && fVar19 < 0.0) {
              fVar17 = (float)FUN_ram_40000e84();
              iVar6 = extraout_a5_04;
            }
            else {
              fVar17 = SQRT(fVar19);
              iVar6 = 0;
            }
            fVar15 = (fVar1 / fVar19 + fVar19) * 0.0 + (float)puVar2;
            if (iVar6 < 0x100 && fVar15 < 0.0) {
              fVar15 = (float)FUN_ram_40000e84();
            }
            else {
              fVar15 = SQRT(fVar15);
            }
            fVar16 = fVar19 + fVar1;
            fVar13 = fVar19 - fVar1;
            fVar17 = fVar17 + fVar17;
            fVar15 = fVar15 * fVar21;
            fVar20 = fVar18 * fVar13 + fVar16;
            fVar23 = -(fVar18 * fVar13) + fVar16;
            fVar21 = fVar15 * fVar17 + fVar20;
            fVar14 = (fVar19 + fVar19) * (-(fVar18 * fVar16) + fVar13);
            fVar26 = (fVar18 * fVar16 + fVar13) * fVar26;
            fVar20 = -(fVar15 * fVar17) + fVar20;
            fVar16 = fVar19 * (fVar15 * fVar17 + fVar23);
            fVar19 = fVar19 * (-(fVar15 * fVar17) + fVar23);
            if (fVar21 != 0.0) {
              fVar21 = fVar1 / fVar21;
              fVar16 = fVar16 * fVar21;
              fVar14 = fVar14 * fVar21;
              fVar19 = fVar19 * fVar21;
              fVar26 = fVar26 * fVar21;
              fVar20 = fVar20 * fVar21;
            }
            param_1[0x62] = fVar16;
            param_1[99] = fVar14;
            param_1[100] = fVar19;
            param_1[0x65] = fVar26;
            param_1[0x66] = fVar20;
          }
          *(ulonglong *)(param_1 + 4) = uVar27;
        }
        uVar3 = DAT_ram_400930a4;
        fVar19 = DAT_ram_40092864;
        if ((float)*(undefined8 *)(param_1 + 5) != fVar29) {
          if (0.0 < fVar22) {
            fVar17 = fVar22 * DAT_ram_40092864 * DAT_ram_4009421c;
            if (DAT_ram_40098480 <= fVar17) {
              fVar17 = DAT_ram_40098480;
            }
            fVar21 = fVar29 / DAT_ram_400930dc;
            fVar20 = (float)FUN_ram_40000d54(DAT_ram_400930a4,fVar21);
            fVar17 = (fVar17 / fVar22) * DAT_ram_400980f4;
            fVar16 = (float)FUN_ram_40000786(fVar17);
            fVar15 = (float)FUN_ram_40000a08(fVar17);
            fVar15 = fVar15 * fVar19;
            fVar16 = fVar16 * DAT_ram_40092834;
            fVar17 = fVar20 * fVar15 + fVar1;
            fVar14 = -(fVar20 * fVar15) + fVar1;
            fVar19 = fVar15 / fVar20 + fVar1;
            fVar23 = fVar1 - fVar15 / fVar20;
            fVar20 = fVar16;
            if (fVar19 != 0.0) {
              fVar19 = fVar1 / fVar19;
              fVar17 = fVar17 * fVar19;
              fVar20 = fVar16 * fVar19;
              fVar14 = fVar14 * fVar19;
              fVar23 = fVar23 * fVar19;
            }
            param_1[0x31] = fVar17;
            param_1[0x32] = fVar20;
            param_1[0x34] = fVar20;
            param_1[0x35] = fVar23;
            param_1[0x33] = fVar14;
            fVar20 = (float)FUN_ram_40000d54(uVar3,fVar21);
            fVar17 = fVar15 * fVar20 + fVar1;
            fVar21 = -(fVar15 * fVar20) + fVar1;
            fVar19 = fVar15 / fVar20 + fVar1;
            fVar15 = fVar1 - fVar15 / fVar20;
            if (fVar19 != 0.0) {
              fVar19 = fVar1 / fVar19;
              fVar17 = fVar17 * fVar19;
              fVar16 = fVar16 * fVar19;
              fVar21 = fVar21 * fVar19;
              fVar15 = fVar15 * fVar19;
            }
            param_1[0x69] = fVar17;
            param_1[0x6a] = fVar16;
            param_1[0x6b] = fVar21;
            param_1[0x6c] = fVar16;
            param_1[0x6d] = fVar15;
          }
          param_1[5] = fVar29;
        }
        uVar3 = DAT_ram_400930a4;
        fVar29 = DAT_ram_40092864;
        if ((float)*(undefined8 *)(param_1 + 6) != fVar25) {
          if (0.0 < fVar22) {
            fVar19 = fVar25 / DAT_ram_400930dc;
            fVar17 = fVar22 * DAT_ram_40092864;
            fVar21 = (float)FUN_ram_40000d54(DAT_ram_400930a4,fVar19);
            if (extraout_a5_01 < 0x100 && fVar21 < 0.0) {
              fVar15 = (float)FUN_ram_40000e84();
            }
            else {
              fVar15 = SQRT(fVar21);
            }
            fVar17 = fVar17 * DAT_ram_4009421c;
            if (DAT_ram_40098484 <= fVar17) {
              fVar17 = DAT_ram_40098484;
            }
            fVar22 = (fVar17 / fVar22) * DAT_ram_400980f4;
            fVar12 = (float)FUN_ram_40000786(fVar22);
            fVar18 = (float)FUN_ram_40000a08(fVar22);
            fVar26 = DAT_ram_40092834;
            puVar2 = PTR_firmware_entry_ram_40092830;
            fVar23 = fVar21 - fVar1;
            fVar22 = fVar21 + fVar1;
            fVar14 = SQRT((fVar1 / fVar21 + fVar21) * 0.0 + (float)PTR_firmware_entry_ram_40092830)
                     * fVar18 * fVar29;
            fVar15 = fVar15 + fVar15;
            fVar13 = -(fVar12 * fVar23) + fVar22;
            fVar20 = fVar12 * fVar23 + fVar22;
            fVar17 = -(fVar12 * fVar22) + fVar23;
            fVar16 = fVar14 * fVar15 + fVar13;
            fVar22 = fVar21 * DAT_ram_40092834 * (fVar12 * fVar22 + fVar23);
            fVar17 = fVar17 + fVar17;
            fVar13 = -(fVar14 * fVar15) + fVar13;
            fVar23 = fVar21 * (fVar14 * fVar15 + fVar20);
            fVar21 = fVar21 * (-(fVar14 * fVar15) + fVar20);
            if (fVar16 != 0.0) {
              fVar16 = fVar1 / fVar16;
              fVar23 = fVar23 * fVar16;
              fVar22 = fVar22 * fVar16;
              fVar21 = fVar21 * fVar16;
              fVar17 = fVar17 * fVar16;
              fVar13 = fVar13 * fVar16;
            }
            param_1[0x3a] = fVar21;
            param_1[0x3c] = fVar13;
            param_1[0x38] = fVar23;
            param_1[0x39] = fVar22;
            param_1[0x3b] = fVar17;
            fVar22 = (float)FUN_ram_40000d54(uVar3,fVar19);
            if (extraout_a5_02 < 0x100 && fVar22 < 0.0) {
              fVar19 = (float)FUN_ram_40000e84();
              iVar6 = extraout_a5_03;
            }
            else {
              fVar19 = SQRT(fVar22);
              iVar6 = 0;
            }
            fVar17 = (fVar1 / fVar22 + fVar22) * 0.0 + (float)puVar2;
            if (iVar6 < 0x100 && fVar17 < 0.0) {
              fVar17 = (float)FUN_ram_40000e84();
            }
            else {
              fVar17 = SQRT(fVar17);
            }
            fVar21 = fVar22 + fVar1;
            fVar20 = fVar22 - fVar1;
            fVar17 = fVar17 * fVar18 * fVar29;
            fVar19 = fVar19 + fVar19;
            fVar14 = -(fVar12 * fVar20) + fVar21;
            fVar15 = fVar12 * fVar20 + fVar21;
            fVar29 = -(fVar12 * fVar21) + fVar20;
            fVar16 = fVar17 * fVar19 + fVar14;
            fVar21 = fVar22 * fVar26 * (fVar12 * fVar21 + fVar20);
            fVar29 = fVar29 + fVar29;
            fVar20 = fVar22 * (fVar17 * fVar19 + fVar15);
            fVar14 = -(fVar17 * fVar19) + fVar14;
            fVar22 = fVar22 * (-(fVar17 * fVar19) + fVar15);
            if (fVar16 != 0.0) {
              fVar1 = fVar1 / fVar16;
              fVar20 = fVar20 * fVar1;
              fVar21 = fVar21 * fVar1;
              fVar22 = fVar22 * fVar1;
              fVar29 = fVar29 * fVar1;
              fVar14 = fVar14 * fVar1;
            }
            param_1[0x70] = fVar20;
            param_1[0x71] = fVar21;
            param_1[0x72] = fVar22;
            param_1[0x73] = fVar29;
            param_1[0x74] = fVar14;
          }
          param_1[6] = fVar25;
        }
      }
    }
    else {
      pfVar10 = param_1 + 4;
      pfVar7 = param_1 + 0x2a;
      pfVar11 = (float *)&DAT_ram_400984a0;
      pfVar9 = param_7;
      do {
        fVar19 = 0.0;
        if (((param_7 != (float *)0x0) &&
            (fVar17 = *pfVar9, fVar19 = DAT_ram_400934f4, 0.0 <= fVar17)) &&
           (fVar19 = DAT_ram_400930b0, fVar17 <= fVar1)) {
          fVar19 = fVar17 * DAT_ram_4009424c + DAT_ram_400934f4;
        }
        if (*pfVar10 != fVar19) {
          if (0.0 < fVar22) {
            fVar17 = *pfVar11;
            fVar21 = fVar22 * fVar29 * DAT_ram_4009421c;
            fVar15 = fVar25;
            if ((fVar25 <= fVar17) && (fVar15 = fVar21, fVar17 <= fVar21)) {
              fVar15 = fVar17;
            }
            fVar16 = fVar19 / DAT_ram_400930dc;
            fVar12 = (float)FUN_ram_40000d54(uVar3,fVar16);
            fVar15 = (fVar15 / fVar22) * DAT_ram_400980f4;
            fVar13 = (float)FUN_ram_40000786(fVar15);
            fVar14 = (float)FUN_ram_40000a08(fVar15);
            fVar26 = DAT_ram_40092834;
            fVar14 = fVar14 * fVar29;
            fVar13 = fVar13 * DAT_ram_40092834;
            fVar20 = fVar12 * fVar14 + fVar1;
            fVar23 = -(fVar12 * fVar14) + fVar1;
            fVar15 = fVar14 / fVar12 + fVar1;
            fVar14 = fVar1 - fVar14 / fVar12;
            if (fVar15 != 0.0) {
              fVar15 = fVar1 / fVar15;
              fVar20 = fVar20 * fVar15;
              fVar13 = fVar13 * fVar15;
              fVar23 = fVar23 * fVar15;
              fVar14 = fVar14 * fVar15;
            }
            *pfVar7 = fVar20;
            pfVar7[1] = fVar13;
            pfVar7[2] = fVar23;
            pfVar7[3] = fVar13;
            pfVar7[4] = fVar14;
            fVar15 = fVar25;
            if ((fVar25 <= fVar17) && (fVar15 = fVar21, fVar17 <= fVar21)) {
              fVar15 = fVar17;
            }
            fVar14 = (float)FUN_ram_40000d54(uVar3,fVar16);
            fVar17 = (fVar15 / fVar22) * DAT_ram_400980f4;
            fVar15 = (float)FUN_ram_40000786(fVar17);
            fVar15 = fVar15 * fVar26;
            fVar16 = (float)FUN_ram_40000a08(fVar17);
            fVar16 = fVar16 * fVar29;
            fVar21 = fVar14 * fVar16 + fVar1;
            fVar20 = -(fVar14 * fVar16) + fVar1;
            fVar17 = fVar16 / fVar14 + fVar1;
            fVar16 = fVar1 - fVar16 / fVar14;
            if (fVar17 != 0.0) {
              fVar17 = fVar1 / fVar17;
              fVar21 = fVar21 * fVar17;
              fVar15 = fVar15 * fVar17;
              fVar20 = fVar20 * fVar17;
              fVar16 = fVar16 * fVar17;
            }
            pfVar7[0x38] = fVar21;
            pfVar7[0x39] = fVar15;
            pfVar7[0x3a] = fVar20;
            pfVar7[0x3b] = fVar15;
            pfVar7[0x3c] = fVar16;
          }
          *pfVar10 = fVar19;
        }
        pfVar9 = pfVar9 + 1;
        pfVar10 = pfVar10 + 1;
        pfVar7 = pfVar7 + 7;
        pfVar11 = pfVar11 + 1;
      } while (param_7 + 8 != pfVar9);
    }
    iVar6 = 0;
    do {
      while( true ) {
        fVar25 = (float)*(undefined8 *)(param_2 + iVar6);
        fVar1 = fVar25 * param_1[0x2a] + param_1[0x2f];
        fVar29 = fVar1 * param_1[0x31] + param_1[0x36];
        fVar22 = fVar29 * param_1[0x38] + param_1[0x3d];
        param_1[0x2f] = param_1[0x30] + (fVar25 * param_1[0x2b] - fVar1 * param_1[0x2d]);
        param_1[0x30] = fVar25 * param_1[0x2c] - fVar1 * param_1[0x2e];
        param_1[0x36] = param_1[0x37] + (fVar1 * param_1[0x32] - fVar29 * param_1[0x34]);
        param_1[0x37] = fVar1 * param_1[0x33] - fVar29 * param_1[0x35];
        param_1[0x3d] = param_1[0x3e] + (fVar29 * param_1[0x39] - fVar22 * param_1[0x3b]);
        param_1[0x3e] = param_1[0x3a] * fVar29 - fVar22 * param_1[0x3c];
        if (iVar4 != 3) {
          fVar29 = param_1[0x3f] * fVar22 + param_1[0x44];
          fVar1 = param_1[0x45];
          param_1[0x45] = param_1[0x41] * fVar22 - fVar29 * param_1[0x43];
          param_1[0x44] = fVar1 + (param_1[0x40] * fVar22 - fVar29 * param_1[0x42]);
          fVar22 = fVar29;
          if (iVar4 != 4) {
            fVar22 = fVar29 * param_1[0x46] + param_1[0x4b];
            fVar1 = param_1[0x4c];
            param_1[0x4c] = fVar29 * param_1[0x48] - fVar22 * param_1[0x4a];
            param_1[0x4b] = fVar1 + (fVar29 * param_1[0x47] - fVar22 * param_1[0x49]);
            if (iVar4 != 5) {
              fVar29 = fVar22 * param_1[0x4d] + param_1[0x52];
              fVar1 = param_1[0x53];
              param_1[0x53] = fVar22 * param_1[0x4f] - fVar29 * param_1[0x51];
              param_1[0x52] = fVar1 + (fVar22 * param_1[0x4e] - fVar29 * param_1[0x50]);
              fVar22 = fVar29;
              if (iVar4 != 6) {
                fVar22 = fVar29 * param_1[0x54] + param_1[0x59];
                fVar1 = param_1[0x5a];
                param_1[0x5a] = fVar29 * param_1[0x56] - fVar22 * param_1[0x58];
                param_1[0x59] = fVar1 + (fVar29 * param_1[0x55] - fVar22 * param_1[0x57]);
                if (iVar4 == 8) {
                  fVar29 = param_1[0x5b] * fVar22 + param_1[0x60];
                  fVar1 = param_1[0x61];
                  param_1[0x61] = param_1[0x5d] * fVar22 - fVar29 * param_1[0x5f];
                  param_1[0x60] = fVar1 + (param_1[0x5c] * fVar22 - fVar29 * param_1[0x5e]);
                  fVar22 = fVar29;
                }
              }
            }
          }
        }
        *(ulonglong *)(param_4 + iVar6) =
             (ulonglong)(uint)((float)*(undefined8 *)(param_1 + 0xd) * fVar22);
        if (param_9 != '\0' && (param_3 != 0 && param_5 != 0)) break;
        iVar6 = iVar6 + 4;
        if (iVar6 == param_6 << 2) {
          return;
        }
      }
      fVar25 = (float)*(undefined8 *)(param_3 + iVar6);
      fVar1 = fVar25 * param_1[0x62] + param_1[0x67];
      fVar29 = param_1[0x69] * fVar1 + param_1[0x6e];
      fVar22 = param_1[0x70] * fVar29 + param_1[0x75];
      param_1[0x67] = param_1[0x68] + (fVar25 * param_1[99] - fVar1 * param_1[0x65]);
      param_1[0x68] = fVar25 * param_1[100] - fVar1 * param_1[0x66];
      param_1[0x6e] = param_1[0x6f] + (param_1[0x6a] * fVar1 - fVar29 * param_1[0x6c]);
      param_1[0x6f] = param_1[0x6b] * fVar1 - fVar29 * param_1[0x6d];
      param_1[0x75] = param_1[0x76] + (param_1[0x71] * fVar29 - fVar22 * param_1[0x73]);
      param_1[0x76] = param_1[0x72] * fVar29 - fVar22 * param_1[0x74];
      if (iVar4 != 3) {
        fVar29 = param_1[0x77] * fVar22 + param_1[0x7c];
        fVar1 = param_1[0x7d];
        param_1[0x7d] = param_1[0x79] * fVar22 - fVar29 * param_1[0x7b];
        param_1[0x7c] = fVar1 + (param_1[0x78] * fVar22 - fVar29 * param_1[0x7a]);
        fVar22 = fVar29;
        if (iVar4 != 4) {
          fVar22 = param_1[0x7e] * fVar29 + param_1[0x83];
          fVar1 = param_1[0x84];
          param_1[0x84] = param_1[0x80] * fVar29 - fVar22 * param_1[0x82];
          param_1[0x83] = fVar1 + (param_1[0x7f] * fVar29 - fVar22 * param_1[0x81]);
          if (iVar4 != 5) {
            fVar29 = fVar22 * param_1[0x85] + param_1[0x8a];
            fVar1 = param_1[0x8b];
            param_1[0x8b] = fVar22 * param_1[0x87] - fVar29 * param_1[0x89];
            param_1[0x8a] = fVar1 + (fVar22 * param_1[0x86] - fVar29 * param_1[0x88]);
            fVar22 = fVar29;
            if (iVar4 != 6) {
              fVar22 = param_1[0x8c] * fVar29 + param_1[0x91];
              fVar1 = param_1[0x92];
              param_1[0x92] = param_1[0x8e] * fVar29 - fVar22 * param_1[0x90];
              param_1[0x91] = fVar1 + (param_1[0x8d] * fVar29 - fVar22 * param_1[0x8f]);
              if (iVar4 == 8) {
                fVar29 = param_1[0x93] * fVar22 + param_1[0x98];
                fVar1 = param_1[0x99];
                param_1[0x99] = param_1[0x95] * fVar22 - fVar29 * param_1[0x97];
                param_1[0x98] = fVar1 + (param_1[0x94] * fVar22 - fVar29 * param_1[0x96]);
                fVar22 = fVar29;
              }
            }
          }
        }
      }
      puVar5 = (ulonglong *)(param_5 + iVar6);
      iVar6 = iVar6 + 4;
      *puVar5 = (ulonglong)(uint)((float)*(undefined8 *)(param_1 + 0xd) * fVar22);
    } while (iVar6 != param_6 << 2);
    return;
  }
  if (param_2 != param_4) {
    FUN_ram_4000305c(param_4,param_2,param_6 << 2);
  }
  if (param_9 == '\0') {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (param_5 == 0) {
    return;
  }
  if (param_3 == param_5) {
    return;
  }
  FUN_ram_4000305c(param_5,param_3,param_6 << 2);
  return;
}


