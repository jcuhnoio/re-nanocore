/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4006a000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4006a454.
 * REA evidence: ev_a278450d03f3c6903e523543be6c27f1e19927b203bfd0e4286849ea7f2eeaa5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4006a454(float param_1,float param_2,undefined8 param_3,float param_4,float param_5,
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
  
  fVar10 = DAT_ram_40098678;
  fVar9 = DAT_ram_40098674;
  fVar8 = DAT_ram_40098668;
  fVar7 = DAT_ram_4009860c;
  fVar6 = DAT_ram_400985e8;
  fVar5 = DAT_ram_400982a8;
  fVar4 = DAT_ram_400980f4;
  fVar3 = DAT_ram_400930e8;
  fVar2 = DAT_ram_40092864;
  fVar1 = DAT_ram_4009281c;
  if (param_8 == 0) {
    return;
  }
  uVar13 = 0;
  fVar18 = DAT_ram_4009867c;
  fVar17 = DAT_ram_40098680;
  fVar16 = DAT_ram_40098684;
  fVar15 = DAT_ram_40098688;
  fVar20 = (float)DAT_ram_4009868c;
  fVar24 = DAT_ram_4009868c._4_4_;
  fVar21 = (float)DAT_ram_40098694;
  do {
    fVar23 = (float)DAT_ram_400985f4;
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
    if (fVar22 <= DAT_ram_400985f4._4_4_) {
      if (fVar22 < (float)DAT_ram_400985fc) {
        fVar22 = DAT_ram_400985fc._4_4_ - fVar22;
      }
    }
    else {
      fVar22 = in_register_00000100 - fVar22;
    }
    fVar14 = fVar22 * fVar22;
    for (fVar23 = param_5 * fVar22 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * (float)DAT_ram_40098604
                                                                   + DAT_ram_40098604._4_4_) + fVar7
                                                         ) + DAT_ram_40098610) + fVar1) + fVar23;
        fVar4 <= fVar23; fVar23 = fVar23 - fVar4) {
    }
    for (; fVar23 < 0.0; fVar23 = fVar23 + fVar4) {
    }
    if (in_register_00000100 < fVar23) {
      fVar23 = fVar23 - fVar4;
    }
    if (fVar23 <= DAT_ram_400985f4._4_4_) {
      if (fVar23 < (float)DAT_ram_400985fc) {
        fVar23 = DAT_ram_400985fc._4_4_ - fVar23;
      }
    }
    else {
      fVar23 = in_register_00000100 - fVar23;
    }
    fVar22 = fVar23 * fVar23;
    fVar23 = (fVar23 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * (float)DAT_ram_40098604 +
                                                     DAT_ram_40098604._4_4_) + fVar7) +
                                 DAT_ram_40098610) + fVar1) + fVar1) * fVar2;
    if (fVar23 < 0.0) {
      fVar22 = DAT_ram_400985ec;
      if (0.0 <= DAT_ram_400985ec) goto LAB_ram_4006a768;
LAB_ram_4006a976:
      fVar22 = 0.0;
    }
    else {
      fVar22 = DAT_ram_400985f0;
      if (fVar23 <= fVar1) {
        fVar23 = fVar23 * (float)PTR_firmware_entry_ram_40092830 + DAT_ram_40092818;
        fVar22 = fVar23 * fVar23;
        if (_DAT_ram_40098614 < fVar22) {
          fVar22 = fVar22 * DAT_ram_4009863c + DAT_ram_40098640;
          fVar22 = (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * 
                                                  DAT_ram_40098644 + DAT_ram_40098648) +
                                                  DAT_ram_4009864c) + DAT_ram_40098650) +
                                                 DAT_ram_40098654) + DAT_ram_40098658) +
                             DAT_ram_4009865c) + DAT_ram_40098660) * fVar23 * fVar2 + fVar2;
        }
        else {
          fVar22 = fVar22 * DAT_ram_40098618 + DAT_ram_40092818;
          fVar22 = (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * 
                                                  DAT_ram_4009861c + DAT_ram_40098620) +
                                                  DAT_ram_40098624) + DAT_ram_40098628) +
                                                 DAT_ram_4009862c) + DAT_ram_40098630) +
                             DAT_ram_40098634) + DAT_ram_40098638) * fVar23 * fVar2 + fVar2;
        }
      }
      if (fVar22 < 0.0) goto LAB_ram_4006a976;
LAB_ram_4006a768:
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
        fVar18 = (float)FUN_ram_40000a84();
        fVar23 = (fVar1 - fVar18) / (fVar18 + fVar1);
        fVar18 = DAT_ram_4009867c;
        fVar17 = DAT_ram_40098680;
        fVar16 = DAT_ram_40098684;
        fVar15 = DAT_ram_40098688;
        fVar20 = (float)DAT_ram_4009868c;
        fVar24 = DAT_ram_4009868c._4_4_;
        fVar21 = (float)DAT_ram_40098694;
        if (fVar6 <= fVar23) goto LAB_ram_4006a832;
LAB_ram_4006a900:
        uVar19 = (ulonglong)(uint)fVar6;
      }
      else {
        fVar23 = fVar14 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * fVar18 +
                                                                            fVar17) + fVar16) +
                                                        fVar15) + fVar20) + fVar24) + fVar21) +
                 fVar1;
        if (fVar23 < fVar6) goto LAB_ram_4006a900;
LAB_ram_4006a832:
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


/* NanoCore 1.10, address 0x4006aa00.
 * REA evidence: ev_d8d16fea82775e7504282e0edd1bcf6a9362e9890b5d08ddfabb1afc4d2b7ecf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char FUN_ram_4006aa00(uint param_1)

{
  char cVar1;
  
  if (param_1 < 5) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\0';
    if ((3 < (param_1 - 8 & 0xff)) && (cVar1 = '\x02', param_1 != 0xc)) {
      return -(param_1 != 0x11);
    }
  }
  return cVar1;
}


/* NanoCore 1.10, address 0x4006aa36.
 * REA evidence: ev_012cc67651f48a6694e6fef3ccefb2a57f0487c7ccaa6ed6838f7fe56ea4aa37
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4006aa36(uint param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 < 5) || ((param_1 - 8 & 0xff) < 4)) {
    uVar1 = 0;
  }
  else if (param_1 == 0xc) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
    if (param_1 != 0x11) {
      return uVar1;
    }
  }
  return (uint)(param_2 == uVar1);
}


/* NanoCore 1.10, address 0x4006aa6c.
 * REA evidence: ev_3298272df461556f4822d070805f44b11d90802643eff204b8435b90bfa9c15c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_4006aa6c(float param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_2 < 5) {
    uVar1 = param_2 - 1 & 0xff;
    fVar5 = DAT_ram_400930f4;
    fVar3 = DAT_ram_400934cc;
    if (uVar1 < 0x11) {
      iVar2 = uVar1 * 4;
      fVar5 = *(float *)(&DAT_ram_40098814 + iVar2);
      fVar3 = (float)*(undefined8 *)(&DAT_ram_40098858 + iVar2);
      if ((float)*(undefined8 *)(&DAT_ram_40098858 + iVar2) <= *(float *)(&DAT_ram_40098814 + iVar2)
         ) {
        return 0.0;
      }
    }
  }
  else {
    if ((4 < (param_2 - 8 & 0xff)) && (param_2 != 0x11)) {
      return 0.0;
    }
    iVar2 = (param_2 - 1 & 0xff) * 4;
    fVar5 = *(float *)(&DAT_ram_40098814 + iVar2);
    fVar3 = (float)*(undefined8 *)(&DAT_ram_40098858 + iVar2);
    if (fVar3 <= fVar5) {
      return 0.0;
    }
    if (param_2 == 10) {
      fVar4 = fVar5;
      if ((fVar5 <= param_1) && (fVar4 = param_1, fVar3 < param_1)) {
        fVar4 = fVar3;
      }
      fVar4 = (float)FUN_ram_40000c86(fVar4 / fVar5);
      fVar5 = (float)FUN_ram_40000c86(fVar3 / fVar5);
      fVar4 = fVar4 / fVar5;
      if (fVar4 < 0.0) {
        return 0.0;
      }
      goto LAB_ram_4006aaae;
    }
  }
  fVar4 = (param_1 - fVar5) / (fVar3 - fVar5);
  if (fVar4 < 0.0) {
    return 0.0;
  }
LAB_ram_4006aaae:
  if (DAT_ram_4009281c < fVar4) {
    fVar4 = DAT_ram_4009281c;
  }
  return fVar4;
}


/* NanoCore 1.10, address 0x4006ab8c.
 * REA evidence: ev_99b356ea7c3f8c4cd1446cce9461771b2c6eb0fececdf2e0e2f08f5de5728322
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006ab8c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  if (param_1 != 0) {
    memset((void *)(param_1 + 0x44),0,0x2000);
    uVar3 = (ulonglong)DAT_ram_4009869c;
    *(ulonglong *)(param_1 + 0x10) = (ulonglong)DAT_ram_40098694._4_4_;
    *(ulonglong *)(param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    memset((void *)(param_1 + 0x208c),0,0x20);
    memset((void *)(param_1 + 0x20ac),0,0x20);
    uVar1 = DAT_ram_4009281c;
    *(undefined4 *)(param_1 + 0x204c) = DAT_ram_4009281c;
    *(undefined4 *)(param_1 + 0x20cc) = 0;
    *(undefined4 *)(param_1 + 0x2084) = 0;
    *(undefined4 *)(param_1 + 0x20d0) = 0;
    *(undefined4 *)(param_1 + 0x2088) = 0;
    *(undefined4 *)(param_1 + 0x2048) = 0;
    memset((void *)(param_1 + 0x3120),0,0x1000);
    *(undefined4 *)(param_1 + 0x4120) = 0;
    *(undefined4 *)(param_1 + 0x4128) = 0;
    *(undefined4 *)(param_1 + 0x4130) = 0;
    *(undefined4 *)(param_1 + 0x4124) = 0;
    *(undefined4 *)(param_1 + 0x412c) = 0;
    *(undefined4 *)(param_1 + 0x4134) = 0;
    *(undefined4 *)(param_1 + 0x20dc) = uVar1;
    *(undefined4 *)(param_1 + 0x2118) = 0;
    *(undefined4 *)(param_1 + 0x20d8) = 0;
    *(undefined4 *)(param_1 + 0x2110) = 0;
    *(undefined4 *)(param_1 + 0x2114) = 0;
    *(undefined4 *)(param_1 + 0x4178) = uVar1;
    *(undefined4 *)(param_1 + 0x4144) = uVar1;
    *(undefined4 *)(param_1 + 0x4138) = 0;
    *(undefined4 *)(param_1 + 0x4140) = 0;
    memset((void *)(param_1 + 0x41d4),0,0x10000);
    uVar2 = DAT_ram_400986a0;
    *(undefined4 *)(param_1 + 0x4194) = uVar1;
    *(undefined4 *)(param_1 + 0x4180) = 0;
    *(undefined1 *)(param_1 + 0x4184) = 0;
    *(undefined4 *)(param_1 + 0x4188) = 0;
    *(undefined4 *)(param_1 + 0x4190) = 0;
    *(undefined4 *)(param_1 + 0x141d4) = uVar2;
    memset((void *)(param_1 + 0x141d8),0,0x20);
    memset((void *)(param_1 + 0x141f8),0,0x20);
    *(undefined1 *)(param_1 + 0x14218) = 0;
    *(undefined1 *)(param_1 + 0x14219) = 0;
    *(undefined1 *)(param_1 + 0x1421a) = 0;
    *(undefined1 *)(param_1 + 0x1421b) = 0;
    *(undefined1 *)(param_1 + 0x1421c) = 0;
    *(undefined1 *)(param_1 + 0x1421d) = 0;
    *(undefined1 *)(param_1 + 0x1421e) = 0;
    *(undefined1 *)(param_1 + 0x1421f) = 0;
    memset((void *)(param_1 + 0x14220),0,0x20);
    *(undefined2 *)(param_1 + 0x142a0) = 0;
    *(undefined1 *)(param_1 + 0x142a2) = 0;
    FUN_ram_4006f2d6(param_1 + 0x142a4);
    FUN_ram_40072020(param_1 + 0x142c0);
    FUN_ram_4006fb0c(param_1 + 0x172cc);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4006ad28.
 * REA evidence: ev_b9854869f20690b8b4adc5148c88c26d0244ef95d76ac2601f89c9986b24a4b3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4006b4ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4006ad28(float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float *pfVar11;
  float fVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float fVar24;
  
  if (param_2 == (float *)0x0) {
    return;
  }
  memset(param_2,0,0x192e4);
  fVar15 = DAT_ram_40098720;
  fVar1 = DAT_ram_400986e8;
  fVar24 = DAT_ram_400986e4;
  fVar14 = DAT_ram_400986a8;
  fVar12 = DAT_ram_400986a4;
  fVar5 = DAT_ram_40093094;
  fVar2 = DAT_ram_4009281c;
  if (DAT_ram_40093094 < param_1) {
    fVar14 = (param_1 * DAT_ram_400986e0) / DAT_ram_40093094;
    fVar12 = param_1 * DAT_ram_40092864 * DAT_ram_4009421c;
    *param_2 = param_1;
    param_2[0xb] = fVar14;
    fVar14 = fVar24 / param_1;
    param_1 = fVar2 / param_1;
    if (fVar1 <= fVar12) {
      fVar12 = param_1 / (param_1 + DAT_ram_400986ec);
    }
    else if (fVar2 <= fVar12) {
      fVar12 = param_1 / (fVar2 / (fVar12 * DAT_ram_400980f4) + param_1);
    }
    else {
      fVar12 = param_1 / (param_1 + DAT_ram_400986f0);
    }
  }
  else {
    *param_2 = DAT_ram_400980e0;
    param_2[0xb] = fVar15;
  }
  fVar16 = DAT_ram_400986f8;
  fVar4 = _DAT_ram_400986f4;
  fVar15 = DAT_ram_40093100;
  fVar1 = DAT_ram_4009281c;
  fVar24 = DAT_ram_40092818;
  uVar13 = (ulonglong)(uint)fVar2;
  uVar23 = (ulonglong)(uint)DAT_ram_40092818;
  uVar19 = (ulonglong)DAT_ram_40098118;
  uVar21 = (ulonglong)DAT_ram_400986fc;
  uVar22 = (ulonglong)DAT_ram_40098700;
  uVar20 = (ulonglong)(uint)DAT_ram_4009287c;
  param_2[8] = DAT_ram_40092818;
  param_2[9] = fVar24;
  param_2[10] = fVar24;
  param_2[0xd] = fVar12;
  param_2[0xe] = fVar1;
  param_2[0xf] = fVar4;
  param_2[0x10] = fVar16;
  *(ulonglong *)(param_2 + 0x819) = uVar23;
  *(ulonglong *)(param_2 + 0x81a) = uVar23;
  *(ulonglong *)(param_2 + 0x81b) = uVar23;
  *(ulonglong *)(param_2 + 0x81c) = uVar23;
  *(ulonglong *)(param_2 + 0x81d) = uVar23;
  param_2[0x816] = fVar15;
  *(ulonglong *)(param_2 + 0x817) = uVar19;
  *(ulonglong *)(param_2 + 0x818) = uVar20;
  *(ulonglong *)(param_2 + 0x81e) = uVar21;
  *(ulonglong *)(param_2 + 0x81f) = uVar22;
  fVar14 = (float)FUN_ram_40000c0e(fVar14);
  fVar14 = fVar1 - fVar14;
  if (fVar14 < 0.0) {
    fVar14 = 0.0;
  }
  else if (fVar1 < fVar14) {
    fVar14 = fVar1;
  }
  fVar12 = *param_2;
  param_2[0x820] = fVar14;
  if (fVar12 < fVar2) {
    uVar20 = (ulonglong)DAT_ram_400986ac;
    uVar19 = uVar13;
  }
  else {
    fVar14 = DAT_ram_40098704 / fVar12;
    uVar20 = FUN_ram_40000a08(fVar14);
    uVar20 = uVar20 & 0xffffffff;
    uVar19 = FUN_ram_40000786(fVar14);
  }
  fVar15 = DAT_ram_40098288;
  fVar1 = DAT_ram_40093668;
  fVar24 = DAT_ram_4009287c;
  fVar14 = DAT_ram_40092818;
  *(ulonglong *)(param_2 + 0x814) = uVar20;
  *(ulonglong *)(param_2 + 0x815) = uVar19;
  param_2[0x83a] = fVar15;
  param_2[0x83b] = fVar1;
  param_2[0x83c] = fVar24;
  param_2[0x83d] = fVar14;
  param_2[0x83e] = fVar14;
  param_2[0x83f] = fVar14;
  param_2[0x840] = fVar14;
  param_2[0x838] = (float)uVar20;
  param_2[0x839] = (float)uVar19;
  param_2[0x835] = fVar2 / fVar12;
  fVar14 = DAT_ram_400986b8;
  fVar15 = DAT_ram_40098588;
  fVar1 = DAT_ram_40092864;
  fVar24 = DAT_ram_40092818;
  if (0.0 < fVar12) {
    iVar10 = 0;
    param_2[0x841] = DAT_ram_400986b8;
    fVar17 = (float)DAT_ram_400986c4;
    fVar18 = DAT_ram_400986bc._4_4_;
    uVar6 = (uint)DAT_ram_400986bc;
    fVar12 = DAT_ram_400986b4;
    fVar16 = DAT_ram_400986b0;
    fVar4 = (float)DAT_ram_40098564;
    fVar1 = DAT_ram_400980f8;
    puVar3 = PTR_firmware_entry_ram_40092830;
    fVar24 = DAT_ram_40092818;
    pfVar11 = param_2 + 0x848;
    param_2[0x843] = DAT_ram_400986b0;
    param_2[0x842] = fVar12;
    *(undefined2 *)(param_2 + 0x847) = 1;
    fVar12 = ((0.0 / fVar15) * (float)puVar3 + fVar24) * fVar16 + fVar12;
    if (fVar12 < fVar2) goto LAB_ram_4006b3da;
LAB_ram_4006b37c:
    fVar12 = fVar17;
    if (fVar14 <= fVar4) goto LAB_ram_4006b3a8;
    uVar19 = (ulonglong)uVar6;
LAB_ram_4006b38a:
    fVar12 = -fVar14;
LAB_ram_4006b38e:
    do {
      fVar14 = (float)FUN_ram_40000c86(uVar19);
      fVar12 = fVar14 * fVar12 + fVar14 * fVar12;
      if (fVar1 <= fVar12) goto LAB_ram_4006b3a8;
      do {
        fVar12 = fVar1;
LAB_ram_4006b3a8:
        *pfVar11 = fVar12;
        iVar10 = iVar10 + 1;
        pfVar11 = pfVar11 + 1;
        if (iVar10 == 0x400) {
          *(undefined1 *)((int)param_2 + 0x211d) = 1;
          fVar12 = *param_2;
          goto LAB_ram_4006af0c;
        }
        fVar14 = param_2[0x841];
        fVar12 = (((float)iVar10 / fVar15) * (float)puVar3 + fVar24) * param_2[0x843] +
                 param_2[0x842];
        if (fVar2 <= fVar12) goto LAB_ram_4006b37c;
LAB_ram_4006b3da:
        if (0.0 < fVar12) {
          uVar19 = (ulonglong)(uint)(fVar2 - fVar12);
          fVar12 = fVar18;
          if (fVar14 <= fVar4) goto LAB_ram_4006b38e;
          goto LAB_ram_4006b38a;
        }
      } while (fVar14 <= fVar4);
      uVar19 = uVar13;
      fVar12 = -fVar14;
    } while( true );
  }
  param_2[0x843] = 0.0;
  param_2[0x842] = fVar1;
  param_2[0x841] = fVar14;
  *(undefined2 *)(param_2 + 0x847) = 0;
LAB_ram_4006af0c:
  fVar4 = DAT_ram_4009287c;
  fVar15 = DAT_ram_4009281c;
  fVar1 = DAT_ram_40092818;
  param_2[0x1054] = DAT_ram_400980e8;
  param_2[0x1055] = fVar15;
  param_2[0x1056] = fVar4;
  *(undefined2 *)(param_2 + 0x105f) = 0;
  param_2[0x1057] = 0.0;
  param_2[0x1058] = fVar1;
  param_2[0x1059] = fVar1;
  param_2[0x105a] = fVar1;
  param_2[0x105b] = fVar1;
  param_2[0x105c] = fVar1;
  param_2[0x105d] = fVar1;
  fVar9 = DAT_ram_4009871c;
  fVar8 = DAT_ram_40098718;
  fVar7 = DAT_ram_40098714;
  fVar17 = DAT_ram_400986dc;
  fVar18 = DAT_ram_400986d8;
  fVar16 = DAT_ram_400986cc;
  fVar14 = DAT_ram_400986c4._4_4_;
  if (fVar12 <= fVar5) {
    param_2[0x104f] = DAT_ram_40098710;
    param_2[0x1052] = fVar7;
    param_2[0x1053] = fVar8;
    param_2[0x106d] = fVar4;
    param_2[0x106e] = fVar4;
    *(undefined1 *)(param_2 + 0x1074) = 0;
    param_2[0x106f] = fVar1;
    param_2[0x1070] = fVar1;
    param_2[0x1071] = fVar1;
    param_2[0x1072] = fVar1;
    param_2[0x1073] = fVar1;
    param_2[0x1063] = fVar9;
    param_2[0x1066] = fVar18;
    param_2[0x1067] = fVar17;
  }
  else {
    fVar14 = DAT_ram_40098708 / fVar12;
    param_2[0x104f] = fVar14;
    fVar16 = DAT_ram_40098718;
    fVar17 = DAT_ram_400986dc;
    fVar18 = DAT_ram_400986d8;
    if (fVar15 <= fVar12) {
      fVar15 = (float)FUN_ram_40000a08(fVar14);
      fVar16 = (float)FUN_ram_40000786(fVar14);
      fVar14 = DAT_ram_40098728;
      param_2[0x1052] = fVar15;
      param_2[0x1053] = fVar16;
      fVar14 = fVar14 / fVar12;
      param_2[0x106d] = fVar4;
      param_2[0x106e] = fVar4;
      *(undefined1 *)(param_2 + 0x1074) = 0;
      param_2[0x106f] = fVar1;
      param_2[0x1070] = fVar1;
      param_2[0x1071] = fVar1;
      param_2[0x1072] = fVar1;
      param_2[0x1073] = fVar1;
      param_2[0x1063] = fVar14;
      fVar17 = (float)FUN_ram_40000786(fVar14);
      fVar18 = (float)FUN_ram_40000a08(fVar14);
    }
    else {
      fVar14 = DAT_ram_40098728 / fVar12;
      param_2[0x1052] = DAT_ram_40098714;
      param_2[0x1053] = fVar16;
      param_2[0x106d] = fVar4;
      param_2[0x106e] = fVar4;
      *(undefined1 *)(param_2 + 0x1074) = 0;
      param_2[0x106f] = fVar1;
      param_2[0x1070] = fVar1;
      param_2[0x1071] = fVar1;
      param_2[0x1072] = fVar1;
      param_2[0x1073] = fVar1;
      param_2[0x1063] = fVar14;
    }
    fVar16 = DAT_ram_400986d4;
    fVar1 = fVar12 * DAT_ram_40098724;
    param_2[0x1066] = fVar18;
    param_2[0x1067] = fVar17;
    fVar1 = fVar1 / fVar5;
    fVar14 = DAT_ram_400986d0;
    if (fVar1 <= fVar16) {
      if (0.0 <= fVar1) {
        fVar14 = fVar1 * (float)PTR_firmware_entry_ram_40092830 + DAT_ram_400930a4;
        fVar16 = fVar1;
      }
      else {
        fVar16 = 0.0;
        fVar14 = DAT_ram_400930a4;
      }
    }
  }
  fVar12 = fVar12 * DAT_ram_4009870c;
  param_2[0x106b] = fVar14;
  param_2[0x1069] = fVar14;
  param_2[0x106a] = fVar16;
  param_2[0x1068] = fVar16;
  fVar14 = (float)FUN_ram_40000c0e(fVar24 / fVar12);
  param_2[0x106c] = fVar2 - fVar14;
  FUN_ram_40071fd6(*param_2,param_2 + 0x50b0);
  FUN_ram_4006f328(*param_2,param_2 + 0x50a9);
  FUN_ram_4006fb60(*param_2,param_2 + 0x5cb3);
  memset(param_2 + 0x11,0,0x2000);
  fVar14 = DAT_ram_4009869c;
  param_2[4] = DAT_ram_40098694._4_4_;
  param_2[5] = fVar14;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  memset(param_2 + 0x823,0,0x20);
  memset(param_2 + 0x82b,0,0x20);
  *(ulonglong *)(param_2 + 0x813) = uVar13;
  param_2[0x833] = 0.0;
  param_2[0x821] = 0.0;
  param_2[0x834] = 0.0;
  param_2[0x822] = 0.0;
  param_2[0x812] = 0.0;
  memset(param_2 + 0xc48,0,0x1000);
  param_2[0x1048] = 0.0;
  param_2[0x104a] = 0.0;
  param_2[0x104c] = 0.0;
  param_2[0x1049] = 0.0;
  param_2[0x104b] = 0.0;
  param_2[0x104d] = 0.0;
  param_2[0x837] = fVar2;
  param_2[0x846] = 0.0;
  param_2[0x836] = 0.0;
  param_2[0x844] = 0.0;
  param_2[0x845] = 0.0;
  param_2[0x105e] = fVar2;
  param_2[0x1051] = fVar2;
  param_2[0x104e] = 0.0;
  param_2[0x1050] = 0.0;
  memset(param_2 + 0x1075,0,0x10000);
  fVar14 = DAT_ram_400986a0;
  param_2[0x1065] = fVar2;
  param_2[0x1060] = 0.0;
  *(undefined1 *)(param_2 + 0x1061) = 0;
  param_2[0x1062] = 0.0;
  param_2[0x1064] = 0.0;
  param_2[0x5075] = fVar14;
  memset(param_2 + 0x5076,0,0x20);
  memset(param_2 + 0x507e,0,0x20);
  *(undefined1 *)(param_2 + 0x5086) = 0;
  *(undefined1 *)((int)param_2 + 0x14219) = 0;
  *(undefined1 *)((int)param_2 + 0x1421a) = 0;
  *(undefined1 *)((int)param_2 + 0x1421b) = 0;
  *(undefined1 *)(param_2 + 0x5087) = 0;
  *(undefined1 *)((int)param_2 + 0x1421d) = 0;
  *(undefined1 *)((int)param_2 + 0x1421e) = 0;
  *(undefined1 *)((int)param_2 + 0x1421f) = 0;
  memset(param_2 + 0x5088,0,0x20);
  *(undefined2 *)(param_2 + 0x50a8) = 0;
  *(undefined1 *)((int)param_2 + 0x142a2) = 0;
  FUN_ram_4006f2d6(param_2 + 0x50a9);
  FUN_ram_40072020(param_2 + 0x50b0);
  FUN_ram_4006fb0c(param_2 + 0x5cb3);
  return;
}


