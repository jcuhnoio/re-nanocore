/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40070000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40070cb4.
 * REA evidence: ev_94571da6ec6dfd9bfe7049a4b8d1362069a88f0987534081fe77275f3c419dec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char FUN_ram_40070cb4(uint param_1)

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


/* NanoCore 1.11, address 0x40070cea.
 * REA evidence: ev_c6e277925e08d88290b0c960db6867e20aed653dfb6af487be9092034a295b2d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40070cea(uint param_1,uint param_2)

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


/* NanoCore 1.11, address 0x40070d20.
 * REA evidence: ev_ff4827e459d702f473ae1b80688c07048a85c336f4d7acc19391aa6e565982bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_40070d20(float param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_2 < 5) {
    uVar1 = param_2 - 1 & 0xff;
    fVar5 = DAT_ram_40094ee0;
    fVar3 = DAT_ram_400952b8;
    if (uVar1 < 0x11) {
      iVar2 = uVar1 * 4;
      fVar5 = *(float *)(&DAT_ram_4009a6dc + iVar2);
      fVar3 = (float)*(undefined8 *)(&DAT_ram_4009a720 + iVar2);
      if ((float)*(undefined8 *)(&DAT_ram_4009a720 + iVar2) <= *(float *)(&DAT_ram_4009a6dc + iVar2)
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
    fVar5 = *(float *)(&DAT_ram_4009a6dc + iVar2);
    fVar3 = (float)*(undefined8 *)(&DAT_ram_4009a720 + iVar2);
    if (fVar3 <= fVar5) {
      return 0.0;
    }
    if (param_2 == 10) {
      fVar4 = fVar5;
      if ((fVar5 <= param_1) && (fVar4 = param_1, fVar3 < param_1)) {
        fVar4 = fVar3;
      }
      fVar4 = (float)FUN_ram_40000c5e(fVar4 / fVar5);
      fVar5 = (float)FUN_ram_40000c5e(fVar3 / fVar5);
      fVar4 = fVar4 / fVar5;
      if (fVar4 < 0.0) {
        return 0.0;
      }
      goto LAB_ram_40070d62;
    }
  }
  fVar4 = (param_1 - fVar5) / (fVar3 - fVar5);
  if (fVar4 < 0.0) {
    return 0.0;
  }
LAB_ram_40070d62:
  if (DAT_ram_40094604 < fVar4) {
    fVar4 = DAT_ram_40094604;
  }
  return fVar4;
}


/* NanoCore 1.11, address 0x40070e40.
 * REA evidence: ev_a3190f53c9c45667310e15b7d26dbb09aba41e6d8bdea2318558ce52ae660e85
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40070e40(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  if (param_1 != 0) {
    memset(param_1 + 0x44,0,0x2000);
    uVar3 = (ulonglong)DAT_ram_4009a644;
    *(ulonglong *)(param_1 + 0x10) = (ulonglong)DAT_ram_4009a640;
    *(ulonglong *)(param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    memset(param_1 + 0x208c,0,0x20);
    memset(param_1 + 0x20ac,0,0x20);
    uVar1 = DAT_ram_40094604;
    *(undefined4 *)(param_1 + 0x204c) = DAT_ram_40094604;
    *(undefined4 *)(param_1 + 0x20cc) = 0;
    *(undefined4 *)(param_1 + 0x2084) = 0;
    *(undefined4 *)(param_1 + 0x20d0) = 0;
    *(undefined4 *)(param_1 + 0x2088) = 0;
    *(undefined4 *)(param_1 + 0x2048) = 0;
    memset(param_1 + 0x3120,0,0x1000);
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
    memset(param_1 + 0x41d4,0,0x10000);
    uVar2 = DAT_ram_4009a648;
    *(undefined4 *)(param_1 + 0x4194) = uVar1;
    *(undefined4 *)(param_1 + 0x4180) = 0;
    *(undefined1 *)(param_1 + 0x4184) = 0;
    *(undefined4 *)(param_1 + 0x4188) = 0;
    *(undefined4 *)(param_1 + 0x4190) = 0;
    *(undefined4 *)(param_1 + 0x141d4) = uVar2;
    memset(param_1 + 0x141d8,0,0x20);
    memset(param_1 + 0x141f8,0,0x20);
    *(undefined1 *)(param_1 + 0x14218) = 0;
    *(undefined1 *)(param_1 + 0x14219) = 0;
    *(undefined1 *)(param_1 + 0x1421a) = 0;
    *(undefined1 *)(param_1 + 0x1421b) = 0;
    *(undefined1 *)(param_1 + 0x1421c) = 0;
    *(undefined1 *)(param_1 + 0x1421d) = 0;
    *(undefined1 *)(param_1 + 0x1421e) = 0;
    *(undefined1 *)(param_1 + 0x1421f) = 0;
    memset(param_1 + 0x14220,0,0x20);
    *(undefined2 *)(param_1 + 0x142a0) = 0;
    *(undefined1 *)(param_1 + 0x142a2) = 0;
    FUN_ram_40071a48(param_1 + 0x142a4);
    FUN_ram_40074760(param_1 + 0x142c0);
    FUN_ram_40072280(param_1 + 0x172cc);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40070fdc.
 * REA evidence: ev_8d8598d57370fe94426d3b9f9934f2a683cf88a4b9f4c2685cafeb3f35326e7a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40071760) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40070fdc(float param_1,float *param_2)

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
  fVar15 = DAT_ram_4009a6cc;
  fVar1 = DAT_ram_4009a6a8;
  fVar24 = DAT_ram_4009a6a4;
  fVar14 = DAT_ram_4009a67c;
  fVar12 = DAT_ram_4009a678;
  fVar5 = DAT_ram_40094e80;
  fVar2 = DAT_ram_40094604;
  if (DAT_ram_40094e80 < param_1) {
    fVar14 = (param_1 * DAT_ram_4009a6a0) / DAT_ram_40094e80;
    fVar12 = param_1 * DAT_ram_40094634 * DAT_ram_40096044;
    *param_2 = param_1;
    param_2[0xb] = fVar14;
    fVar14 = fVar24 / param_1;
    param_1 = fVar2 / param_1;
    if (fVar1 <= fVar12) {
      fVar12 = param_1 / (param_1 + DAT_ram_4009a6ac);
    }
    else if (fVar2 <= fVar12) {
      fVar12 = param_1 / (fVar2 / (fVar12 * DAT_ram_40099f94) + param_1);
    }
    else {
      fVar12 = param_1 / (param_1 + DAT_ram_4009a664);
    }
  }
  else {
    *param_2 = DAT_ram_40099f80;
    param_2[0xb] = fVar15;
  }
  fVar16 = DAT_ram_4009a6b4;
  fVar4 = DAT_ram_4009a6b0;
  fVar15 = DAT_ram_40094eec;
  fVar1 = DAT_ram_40094604;
  fVar24 = DAT_ram_40094600;
  uVar13 = (ulonglong)(uint)fVar2;
  uVar23 = (ulonglong)(uint)DAT_ram_40094600;
  uVar19 = (ulonglong)DAT_ram_40099fb8;
  uVar21 = (ulonglong)DAT_ram_4009a654;
  uVar22 = (ulonglong)DAT_ram_4009a6b8;
  uVar20 = (ulonglong)(uint)_DAT_ram_40094638;
  param_2[8] = DAT_ram_40094600;
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
  fVar14 = (float)FUN_ram_40000bd8(fVar14);
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
    uVar20 = (ulonglong)DAT_ram_4009a680;
    uVar19 = uVar13;
  }
  else {
    fVar14 = DAT_ram_4009a6bc / fVar12;
    uVar20 = FUN_ram_400009d2(fVar14);
    uVar20 = uVar20 & 0xffffffff;
    uVar19 = FUN_ram_40000712(fVar14);
  }
  fVar15 = DAT_ram_4009a110;
  fVar1 = DAT_ram_40095454;
  fVar24 = _DAT_ram_40094638;
  fVar14 = DAT_ram_40094600;
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
  fVar14 = DAT_ram_4009a68c;
  fVar15 = DAT_ram_4009a454;
  fVar1 = DAT_ram_40094634;
  fVar24 = DAT_ram_40094600;
  if (0.0 < fVar12) {
    iVar10 = 0;
    param_2[0x841] = DAT_ram_4009a68c;
    fVar12 = DAT_ram_4009a688;
    fVar17 = DAT_ram_4009a684;
    fVar18 = DAT_ram_4009a63c;
    fVar16 = DAT_ram_4009a5f8;
    uVar6 = DAT_ram_4009a5f4;
    fVar4 = DAT_ram_4009a430;
    fVar1 = DAT_ram_40099f9c;
    puVar3 = PTR_entry_ram_40094618;
    fVar24 = DAT_ram_40094600;
    pfVar11 = param_2 + 0x848;
    param_2[0x843] = DAT_ram_4009a684;
    param_2[0x842] = fVar12;
    *(undefined2 *)(param_2 + 0x847) = 1;
    fVar12 = ((0.0 / fVar15) * (float)puVar3 + fVar24) * fVar17 + fVar12;
    if (fVar12 < fVar2) goto LAB_ram_4007168e;
LAB_ram_40071630:
    fVar12 = fVar18;
    if (fVar14 <= fVar4) goto LAB_ram_4007165c;
    uVar19 = (ulonglong)uVar6;
LAB_ram_4007163e:
    fVar12 = -fVar14;
LAB_ram_40071642:
    do {
      fVar14 = (float)FUN_ram_40000c5e(uVar19);
      fVar12 = fVar14 * fVar12 + fVar14 * fVar12;
      if (fVar1 <= fVar12) goto LAB_ram_4007165c;
      do {
        fVar12 = fVar1;
LAB_ram_4007165c:
        *pfVar11 = fVar12;
        iVar10 = iVar10 + 1;
        pfVar11 = pfVar11 + 1;
        if (iVar10 == 0x400) {
          *(undefined1 *)((int)param_2 + 0x211d) = 1;
          fVar12 = *param_2;
          goto LAB_ram_400711c0;
        }
        fVar14 = param_2[0x841];
        fVar12 = (((float)iVar10 / fVar15) * (float)puVar3 + fVar24) * param_2[0x843] +
                 param_2[0x842];
        if (fVar2 <= fVar12) goto LAB_ram_40071630;
LAB_ram_4007168e:
        if (0.0 < fVar12) {
          uVar19 = (ulonglong)(uint)(fVar2 - fVar12);
          fVar12 = fVar16;
          if (fVar14 <= fVar4) goto LAB_ram_40071642;
          goto LAB_ram_4007163e;
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
LAB_ram_400711c0:
  fVar4 = _DAT_ram_40094638;
  fVar15 = DAT_ram_40094604;
  fVar1 = DAT_ram_40094600;
  param_2[0x1054] = DAT_ram_40099f88;
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
  fVar9 = DAT_ram_4009a6c8;
  fVar8 = DAT_ram_4009a69c;
  fVar7 = DAT_ram_4009a698;
  fVar16 = DAT_ram_4009a694;
  fVar14 = DAT_ram_4009a690;
  fVar17 = DAT_ram_4009a628;
  fVar18 = DAT_ram_4009a624;
  if (fVar12 <= fVar5) {
    param_2[0x104f] = DAT_ram_4009a6c4;
    param_2[0x1052] = fVar17;
    param_2[0x1053] = fVar18;
    param_2[0x106d] = fVar4;
    param_2[0x106e] = fVar4;
    *(undefined1 *)(param_2 + 0x1074) = 0;
    param_2[0x106f] = fVar1;
    param_2[0x1070] = fVar1;
    param_2[0x1071] = fVar1;
    param_2[0x1072] = fVar1;
    param_2[0x1073] = fVar1;
    param_2[0x1063] = fVar9;
    param_2[0x1066] = fVar7;
    param_2[0x1067] = fVar8;
  }
  else {
    fVar14 = DAT_ram_4009a62c / fVar12;
    param_2[0x104f] = fVar14;
    fVar17 = DAT_ram_4009a69c;
    fVar18 = DAT_ram_4009a698;
    fVar16 = DAT_ram_4009a624;
    if (fVar15 <= fVar12) {
      fVar15 = (float)FUN_ram_400009d2(fVar14);
      fVar16 = (float)FUN_ram_40000712(fVar14);
      fVar14 = DAT_ram_4009a6d4;
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
      fVar17 = (float)FUN_ram_40000712(fVar14);
      fVar18 = (float)FUN_ram_400009d2(fVar14);
    }
    else {
      fVar14 = DAT_ram_4009a6d4 / fVar12;
      param_2[0x1052] = DAT_ram_4009a628;
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
    fVar16 = DAT_ram_4009a608;
    fVar1 = fVar12 * DAT_ram_4009a6d0;
    param_2[0x1066] = fVar18;
    param_2[0x1067] = fVar17;
    fVar1 = fVar1 / fVar5;
    fVar14 = DAT_ram_4009a604;
    if (fVar1 <= fVar16) {
      if (0.0 <= fVar1) {
        fVar14 = fVar1 * (float)PTR_entry_ram_40094618 + DAT_ram_40094e90;
        fVar16 = fVar1;
      }
      else {
        fVar16 = 0.0;
        fVar14 = DAT_ram_40094e90;
      }
    }
  }
  fVar12 = fVar12 * DAT_ram_4009a6c0;
  param_2[0x106b] = fVar14;
  param_2[0x1069] = fVar14;
  param_2[0x106a] = fVar16;
  param_2[0x1068] = fVar16;
  fVar14 = (float)FUN_ram_40000bd8(fVar24 / fVar12);
  param_2[0x106c] = fVar2 - fVar14;
  FUN_ram_40074716(*param_2,param_2 + 0x50b0);
  FUN_ram_40071a9a(*param_2,param_2 + 0x50a9);
  FUN_ram_400722d4(*param_2,param_2 + 0x5cb3);
  memset(param_2 + 0x11,0,0x2000);
  fVar14 = DAT_ram_4009a644;
  param_2[4] = DAT_ram_4009a640;
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
  fVar14 = DAT_ram_4009a648;
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
  FUN_ram_40071a48(param_2 + 0x50a9);
  FUN_ram_40074760(param_2 + 0x50b0);
  FUN_ram_40072280(param_2 + 0x5cb3);
  return;
}


