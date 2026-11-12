/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4006c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4006c46e.
 * REA evidence: ev_4ce6de219a0c6102d76e37311ec228fe866fd22fab51a1aec3ee0fa064f78c4e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006c46e(float param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = DAT_ram_40094e80;
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  puVar2 = param_2 + 2;
  if (param_1 < DAT_ram_40094e80) {
    memset(param_2,0,0x880);
    param_1 = DAT_ram_40094664;
    *param_2 = param_3;
    param_2[1] = param_4;
    iVar3 = FUN_ram_40076cf4(param_1,puVar2,param_5,param_6);
    if (iVar3 == 0) goto LAB_ram_4006c6f8;
    param_2[0x1f6] = param_1;
    fVar6 = DAT_ram_4009a4a4;
LAB_ram_4006c692:
    fVar5 = (float)FUN_ram_400009d2(fVar6 / param_1);
    fVar6 = (float)FUN_ram_40000712(fVar6 / param_1);
    fVar5 = fVar5 / DAT_ram_4009a4a8;
  }
  else {
    memset(param_2,0,0x880);
    *param_2 = param_3;
    param_2[1] = param_4;
    iVar3 = FUN_ram_40076cf4(param_1,puVar2,param_5,param_6);
    if (iVar3 == 0) {
LAB_ram_4006c6f8:
      FUN_ram_40077030(0,0,DAT_ram_40094604,puVar2);
    }
    param_2[0x1f6] = param_1;
    fVar4 = DAT_ram_4009a494;
    fVar7 = DAT_ram_4009a4a0;
    fVar5 = DAT_ram_4009a49c;
    fVar1 = DAT_ram_4009a498;
    if (param_1 < fVar6) goto LAB_ram_4006c4fc;
    fVar5 = param_1 * DAT_ram_4009a10c;
    fVar6 = DAT_ram_4009a4a4;
    if ((DAT_ram_40094ea8 <= fVar5) || (fVar6 = DAT_ram_4009a4ac, fVar5 < DAT_ram_40094ee0))
    goto LAB_ram_4006c692;
    fVar6 = (fVar5 * DAT_ram_40099f94) / param_1;
    fVar5 = (float)FUN_ram_400009d2(fVar6);
    fVar6 = (float)FUN_ram_40000712(fVar6);
    fVar5 = fVar5 / DAT_ram_4009a4a8;
  }
  fVar1 = fVar5 + DAT_ram_40094604;
  fVar4 = (DAT_ram_40094604 - fVar5) / fVar1;
  fVar7 = ((DAT_ram_40094604 - fVar6) * DAT_ram_40094634) / fVar1;
  fVar5 = (DAT_ram_40094604 - fVar6) / fVar1;
  fVar1 = (fVar6 * DAT_ram_4009461c) / fVar1;
LAB_ram_4006c4fc:
  param_2[0x1f7] = fVar7;
  param_2[0x1f9] = fVar7;
  param_2[0x1fb] = fVar4;
  param_2[0x1f8] = fVar5;
  param_2[0x1fa] = fVar1;
  param_2[0x1fc] = 0;
  param_2[0x1fd] = 0;
  param_2[0x1fe] = 0;
  param_2[0x1ff] = 0;
  *(undefined1 *)(param_2 + 0x200) = 0;
  *(undefined1 *)(param_2 + 0x201) = 0;
  *(undefined1 *)((int)param_2 + 0x805) = 0;
  *(undefined1 *)((int)param_2 + 0x806) = 0;
  *(undefined1 *)((int)param_2 + 0x807) = 0;
  *(undefined1 *)(param_2 + 0x202) = 0;
  *(undefined1 *)((int)param_2 + 0x809) = 0;
  *(undefined1 *)((int)param_2 + 0x80a) = 0;
  *(undefined1 *)((int)param_2 + 0x80b) = 0;
  *(undefined1 *)(param_2 + 0x203) = 0;
  *(undefined1 *)((int)param_2 + 0x80d) = 0;
  *(undefined1 *)((int)param_2 + 0x80e) = 0;
  *(undefined1 *)((int)param_2 + 0x80f) = 0;
  *(undefined1 *)(param_2 + 0x204) = 0;
  *(undefined1 *)((int)param_2 + 0x811) = 0;
  *(undefined1 *)((int)param_2 + 0x812) = 0;
  *(undefined1 *)((int)param_2 + 0x813) = 0;
  *(undefined1 *)(param_2 + 0x205) = 0;
  *(undefined1 *)((int)param_2 + 0x815) = 0;
  *(undefined1 *)((int)param_2 + 0x816) = 0;
  *(undefined1 *)((int)param_2 + 0x817) = 0;
  *(undefined1 *)(param_2 + 0x206) = 0;
  *(undefined1 *)((int)param_2 + 0x819) = 0;
  *(undefined1 *)((int)param_2 + 0x81a) = 0;
  fVar6 = DAT_ram_40094634;
  *(undefined1 *)((int)param_2 + 0x81b) = 0;
  *(undefined1 *)(param_2 + 0x207) = 0;
  *(undefined1 *)((int)param_2 + 0x81d) = 0;
  *(undefined1 *)((int)param_2 + 0x81e) = 0;
  *(undefined1 *)((int)param_2 + 0x81f) = 0;
  *(undefined1 *)(param_2 + 0x208) = 0;
  *(undefined1 *)((int)param_2 + 0x821) = 0;
  *(undefined1 *)((int)param_2 + 0x822) = 0;
  *(undefined1 *)((int)param_2 + 0x823) = 0;
  param_2[0x210] = param_1;
  param_2[0x211] = 0;
  param_2[0x212] = fVar6;
  *(undefined1 *)(param_2 + 0x213) = 0;
  *(undefined1 *)((int)param_2 + 0x84d) = 0;
  *(undefined1 *)((int)param_2 + 0x84e) = 0;
  *(undefined1 *)((int)param_2 + 0x84f) = 0;
  *(undefined1 *)(param_2 + 0x214) = 0;
  *(undefined1 *)((int)param_2 + 0x851) = 0;
  *(undefined1 *)((int)param_2 + 0x852) = 0;
  *(undefined1 *)((int)param_2 + 0x853) = 0;
  *(undefined1 *)(param_2 + 0x215) = 0;
  *(undefined1 *)((int)param_2 + 0x855) = 0;
  *(undefined1 *)((int)param_2 + 0x856) = 0;
  *(undefined1 *)((int)param_2 + 0x857) = 0;
  *(undefined1 *)(param_2 + 0x216) = 0;
  *(undefined1 *)((int)param_2 + 0x859) = 0;
  *(undefined1 *)((int)param_2 + 0x85a) = 0;
  *(undefined1 *)((int)param_2 + 0x85b) = 0;
  FUN_ram_40071a9a(param_1,param_2 + 0x217);
  return;
}


/* NanoCore 1.11, address 0x4006c754.
 * REA evidence: ev_2dfda4bf2fdee64d9e50782807950ee1b3d9054815bcd5a33ef2d19bf1534af0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006c754(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40077b08(param_1 + 8);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4006c75e.
 * REA evidence: ev_f06d608101129b00724ffc63b030a913de51d7ad088aafa5f64afd53ed64861b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006c75e(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x7f0) = 0;
    *(undefined4 *)(param_1 + 0x7f4) = 0;
    *(undefined4 *)(param_1 + 0x7f8) = 0;
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    *(undefined1 *)(param_1 + 0x800) = 0;
    *(undefined1 *)(param_1 + 0x804) = 0;
    *(undefined1 *)(param_1 + 0x805) = 0;
    *(undefined1 *)(param_1 + 0x806) = 0;
    *(undefined1 *)(param_1 + 0x807) = 0;
    *(undefined1 *)(param_1 + 0x808) = 0;
    *(undefined1 *)(param_1 + 0x809) = 0;
    *(undefined1 *)(param_1 + 0x80a) = 0;
    *(undefined1 *)(param_1 + 0x80b) = 0;
    *(undefined1 *)(param_1 + 0x80c) = 0;
    *(undefined1 *)(param_1 + 0x80d) = 0;
    *(undefined1 *)(param_1 + 0x80e) = 0;
    *(undefined1 *)(param_1 + 0x80f) = 0;
    *(undefined1 *)(param_1 + 0x810) = 0;
    *(undefined1 *)(param_1 + 0x811) = 0;
    *(undefined1 *)(param_1 + 0x812) = 0;
    *(undefined1 *)(param_1 + 0x813) = 0;
    *(undefined1 *)(param_1 + 0x814) = 0;
    *(undefined1 *)(param_1 + 0x815) = 0;
    *(undefined1 *)(param_1 + 0x816) = 0;
    *(undefined1 *)(param_1 + 0x817) = 0;
    *(undefined1 *)(param_1 + 0x818) = 0;
    *(undefined1 *)(param_1 + 0x819) = 0;
    *(undefined1 *)(param_1 + 0x81a) = 0;
    *(undefined1 *)(param_1 + 0x81b) = 0;
    *(undefined1 *)(param_1 + 0x81c) = 0;
    *(undefined1 *)(param_1 + 0x81d) = 0;
    *(undefined1 *)(param_1 + 0x81e) = 0;
    *(undefined1 *)(param_1 + 0x81f) = 0;
    *(undefined1 *)(param_1 + 0x820) = 0;
    *(undefined1 *)(param_1 + 0x821) = 0;
    *(undefined1 *)(param_1 + 0x822) = 0;
    *(undefined1 *)(param_1 + 0x823) = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x4006c7fe.
 * REA evidence: ev_cdb2a073d0a9c1040705aef1ff1a0e640ac56ac1605c1cbc9995e9e327166c02
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006c7fe(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_ram_40094634;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x844) = 0;
    *(undefined4 *)(param_1 + 0x848) = uVar1;
    *(undefined1 *)(param_1 + 0x84c) = 0;
    *(undefined1 *)(param_1 + 0x84d) = 0;
    *(undefined1 *)(param_1 + 0x84e) = 0;
    *(undefined1 *)(param_1 + 0x84f) = 0;
    *(undefined1 *)(param_1 + 0x850) = 0;
    *(undefined1 *)(param_1 + 0x851) = 0;
    *(undefined1 *)(param_1 + 0x852) = 0;
    *(undefined1 *)(param_1 + 0x853) = 0;
    *(undefined1 *)(param_1 + 0x854) = 0;
    *(undefined1 *)(param_1 + 0x855) = 0;
    *(undefined1 *)(param_1 + 0x856) = 0;
    *(undefined1 *)(param_1 + 0x857) = 0;
    *(undefined1 *)(param_1 + 0x858) = 0;
    *(undefined1 *)(param_1 + 0x859) = 0;
    *(undefined1 *)(param_1 + 0x85a) = 0;
    *(undefined1 *)(param_1 + 0x85b) = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x4006c85e.
 * REA evidence: ev_5e3ca0a45e27c243e597f09b7cb18532d859f747fe91edd8dc7e1deb4bcb8d28
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006c85e(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40071a48(param_1 + 0x85c);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4006c86e.
 * REA evidence: ev_f63ab50a246049f81833ef3e8d124e8e498e25746a5ff9e6e979fcafb751199e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4006c86e(uint param_1)

{
  return param_1 & -(uint)(param_1 < 0xc);
}


/* NanoCore 1.11, address 0x4006c87a.
 * REA evidence: ev_5ce6fed0e7b3648b344f2355cf87bb405f3848520395951d3c8156a56a1212eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4006c87a(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0xc) && (param_1 != 8)) {
    uVar1 = 4;
    if ((param_1 != 9) && (uVar1 = 5, 1 < (param_1 - 10 & 0xff))) {
      uVar1 = 3;
      if ((param_1 - 5 & 0xff) < 3) {
        uVar1 = 1;
      }
      return uVar1;
    }
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4006c8b8.
 * REA evidence: ev_be16415791ef6b54b2ab6978ed45dc81e77f3f5d0b658eaa22b20925a747d63e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4006c8b8(ulonglong *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  if ((param_1 == (ulonglong *)0x0) || (param_2 == 0)) {
    return;
  }
  if (0xb < param_3) {
    FUN_ram_40073e96();
    return;
  }
  if (param_3 != 8) {
    if (param_3 == 9) {
      memset(param_1,0,param_2 << 2);
      *param_1 = (ulonglong)DAT_ram_4009a470;
      if (param_2 == 1) {
        return;
      }
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40094ec4;
      if (param_2 != 2) {
        param_1[1] = (ulonglong)DAT_ram_4009a46c;
      }
      if (param_2 < 4) {
        return;
      }
      *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)_DAT_ram_40094638;
      return;
    }
    if (param_3 == 10) {
      memset(param_1,0,param_2 << 2);
      uVar1 = (ulonglong)DAT_ram_40094634;
      *param_1 = uVar1;
      if (param_2 != 1) {
        *(ulonglong *)((int)param_1 + 4) = uVar1;
        if (param_2 != 2) {
          param_1[1] = (ulonglong)DAT_ram_4009a47c;
        }
        if (3 < param_2) {
          *(undefined4 *)((int)param_1 + 0xc) = 0;
        }
      }
      if (param_2 < 5) {
        return;
      }
      param_1[2] = (ulonglong)_DAT_ram_40094638;
      return;
    }
    if (param_3 == 0xb) {
      FUN_ram_40071b20();
      return;
    }
    if (2 < (param_3 - 5 & 0xff)) {
      FUN_ram_40073e96();
      return;
    }
  }
  memset(param_1,0,param_2 << 2);
  *param_1 = CONCAT44(_DAT_ram_40094638,DAT_ram_40094634);
  if ((param_2 != 1) &&
     (*(ulonglong *)((int)param_1 + 4) = CONCAT44(_DAT_ram_40094638,DAT_ram_40094634), param_2 != 2)
     ) {
    param_1[1] = (ulonglong)DAT_ram_40094604;
  }
  return;
}


/* NanoCore 1.11, address 0x4006c9d6.
 * REA evidence: ev_6669c14b6879dc8d2d77a60aef140100373733e34599522adb0e23e574243413
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006c9d6(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                     undefined4 param_7,uint param_8,char param_9,int param_10)

{
  if (((param_2 != 0) && (param_4 != 0)) && (param_6 != 0)) {
    if (param_10 != 0) {
      *(bool *)param_10 = param_9 != '\0';
    }
    if (((param_1 != (int *)0x0) && ((char *)param_1[1] != (char *)0x0)) &&
       (*(char *)param_1[1] != '\0')) {
      if (7 < param_8) {
        FUN_ram_4006b144(param_1,param_2,param_3);
        return;
      }
      *(char *)(param_1 + 0x21e) = (char)param_8;
      if (*param_1 != 0) {
        FUN_ram_40073eec(*param_1,param_2,param_3);
        return;
      }
    }
    if (param_2 != param_4) {
      FUN_ram_4000304c(param_4,param_2,param_6 << 2);
    }
    if (((param_9 != '\0') && (param_3 != 0)) && ((param_5 != 0 && (param_3 != param_5)))) {
      FUN_ram_4000304c(param_5,param_3,param_6 << 2);
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4006ca8c.
 * REA evidence: ev_cd05828b37092cbcf8f74f212ec8b8d2a4717945ea9e52e410b2081070c079e6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4006ca8c(float param_1,float param_2,undefined8 param_3,float param_4,float param_5,
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
  
  fVar10 = DAT_ram_4009a540;
  fVar9 = DAT_ram_4009a53c;
  fVar8 = DAT_ram_4009a530;
  fVar7 = DAT_ram_4009a4d4;
  fVar6 = DAT_ram_4009a4b0;
  fVar5 = DAT_ram_4009a180;
  fVar4 = DAT_ram_40099f94;
  fVar3 = DAT_ram_40094ed4;
  fVar2 = DAT_ram_40094634;
  fVar1 = DAT_ram_40094604;
  if (param_8 == 0) {
    return;
  }
  uVar13 = 0;
  fVar18 = DAT_ram_4009a544;
  fVar17 = DAT_ram_4009a548;
  fVar16 = DAT_ram_4009a54c;
  fVar15 = DAT_ram_4009a550;
  fVar20 = (float)DAT_ram_4009a554;
  fVar24 = DAT_ram_4009a554._4_4_;
  fVar21 = (float)DAT_ram_4009a55c;
  do {
    fVar23 = (float)DAT_ram_4009a4bc;
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
    if (fVar22 <= DAT_ram_4009a4bc._4_4_) {
      if (fVar22 < (float)DAT_ram_4009a4c4) {
        fVar22 = DAT_ram_4009a4c4._4_4_ - fVar22;
      }
    }
    else {
      fVar22 = in_register_00000100 - fVar22;
    }
    fVar14 = fVar22 * fVar22;
    for (fVar23 = param_5 * fVar22 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * (float)DAT_ram_4009a4cc
                                                                   + DAT_ram_4009a4cc._4_4_) + fVar7
                                                         ) + DAT_ram_4009a4d8) + fVar1) + fVar23;
        fVar4 <= fVar23; fVar23 = fVar23 - fVar4) {
    }
    for (; fVar23 < 0.0; fVar23 = fVar23 + fVar4) {
    }
    if (in_register_00000100 < fVar23) {
      fVar23 = fVar23 - fVar4;
    }
    if (fVar23 <= DAT_ram_4009a4bc._4_4_) {
      if (fVar23 < (float)DAT_ram_4009a4c4) {
        fVar23 = DAT_ram_4009a4c4._4_4_ - fVar23;
      }
    }
    else {
      fVar23 = in_register_00000100 - fVar23;
    }
    fVar22 = fVar23 * fVar23;
    fVar23 = (fVar23 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * (float)DAT_ram_4009a4cc +
                                                     DAT_ram_4009a4cc._4_4_) + fVar7) +
                                 DAT_ram_4009a4d8) + fVar1) + fVar1) * fVar2;
    if (fVar23 < 0.0) {
      fVar22 = DAT_ram_4009a4b4;
      if (0.0 <= DAT_ram_4009a4b4) goto LAB_ram_4006cda0;
LAB_ram_4006cfae:
      fVar22 = 0.0;
    }
    else {
      fVar22 = DAT_ram_4009a4b8;
      if (fVar23 <= fVar1) {
        fVar23 = fVar23 * (float)PTR_entry_ram_40094618 + DAT_ram_40094600;
        fVar22 = fVar23 * fVar23;
        if (_DAT_ram_4009a4dc < fVar22) {
          fVar22 = fVar22 * DAT_ram_4009a504 + DAT_ram_4009a508;
          fVar22 = (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * 
                                                  DAT_ram_4009a50c + DAT_ram_4009a510) +
                                                  DAT_ram_4009a514) + DAT_ram_4009a518) +
                                                 DAT_ram_4009a51c) + DAT_ram_4009a520) +
                             DAT_ram_4009a524) + DAT_ram_4009a528) * fVar23 * fVar2 + fVar2;
        }
        else {
          fVar22 = fVar22 * DAT_ram_4009a4e0 + DAT_ram_40094600;
          fVar22 = (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * 
                                                  DAT_ram_4009a4e4 + DAT_ram_4009a4e8) +
                                                  DAT_ram_4009a4ec) + DAT_ram_4009a4f0) +
                                                 DAT_ram_4009a4f4) + DAT_ram_4009a4f8) +
                             DAT_ram_4009a4fc) + DAT_ram_4009a500) * fVar23 * fVar2 + fVar2;
        }
      }
      if (fVar22 < 0.0) goto LAB_ram_4006cfae;
LAB_ram_4006cda0:
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
        fVar18 = (float)FUN_ram_40000a4e();
        fVar23 = (fVar1 - fVar18) / (fVar18 + fVar1);
        fVar18 = DAT_ram_4009a544;
        fVar17 = DAT_ram_4009a548;
        fVar16 = DAT_ram_4009a54c;
        fVar15 = DAT_ram_4009a550;
        fVar20 = (float)DAT_ram_4009a554;
        fVar24 = DAT_ram_4009a554._4_4_;
        fVar21 = (float)DAT_ram_4009a55c;
        if (fVar6 <= fVar23) goto LAB_ram_4006ce6a;
LAB_ram_4006cf38:
        uVar19 = (ulonglong)(uint)fVar6;
      }
      else {
        fVar23 = fVar14 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * fVar18 +
                                                                            fVar17) + fVar16) +
                                                        fVar15) + fVar20) + fVar24) + fVar21) +
                 fVar1;
        if (fVar23 < fVar6) goto LAB_ram_4006cf38;
LAB_ram_4006ce6a:
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


