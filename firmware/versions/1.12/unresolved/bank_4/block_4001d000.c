/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4001d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4001d562.
 * REA evidence: ev_503cfc4368684f664fd7c79e1ca7750912918bd32a6f8b9cc29ee9fb9539d9d7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001d562(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined1 uVar17;
  int iVar18;
  float fVar19;
  char local_88 [8];
  char acStack_80 [24];
  undefined1 auStack_68 [24];
  
  uVar12 = (uint)DAT_ram_3006acf4 * 0x50000 >> 0x10;
  if (DAT_ram_3006ad1c <= uVar12) {
    DAT_ram_3006acf4 = 0;
    uVar12 = 0;
  }
  uVar12 = DAT_ram_3006ad1c - uVar12;
  if (5 < (uVar12 & 0xffff)) {
    uVar12 = 5;
  }
  DAT_ram_3006ad5c = (byte)uVar12;
  uVar13 = (uVar12 & 0xff) + 1 & 0xff;
  iVar4 = 0;
  if (uVar13 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)((uVar12 & 0xffff) * -0x28 + 0x140) / (int)uVar13;
  }
  iVar14 = iVar2 + 0x28;
  do {
    iVar5 = *(int *)(&DAT_ram_3006ac60 + iVar4 * 4);
    if (iVar4 < (int)(uint)DAT_ram_3006ad5c) {
      *(int *)(iVar4 * 4 + 0x3006aa74) = iVar2;
      *(undefined4 *)(iVar4 * 4 + 0x3006aa88) = 0x74;
      if (iVar5 != 0) {
        FUN_ram_40043ba4(iVar5,1);
      }
    }
    else {
      if (iVar5 != 0) {
        FUN_ram_400440ce(iVar5,1);
      }
      if (*(int *)(&DAT_ram_3006ab50 + iVar4 * 4) != 0) {
        FUN_ram_400440ce(*(int *)(&DAT_ram_3006ab50 + iVar4 * 4),1);
      }
    }
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + iVar14;
  } while (iVar4 != 5);
  FUN_ram_40004f92(0x3006aba4,0xff,5);
  iVar4 = _DAT_ram_3006aa24;
  if (_DAT_ram_3006aa24 == 0) {
    uVar17 = 0;
    iVar2 = -1;
    iVar14 = 0xff;
  }
  else {
    iVar2 = FUN_ram_4001ad02(_DAT_ram_3006aa24);
    uVar17 = 0;
    if (-1 < iVar2) {
      uVar17 = *(undefined1 *)(iVar2 + 0x3006aebc);
    }
    iVar14 = FUN_ram_40025c22(iVar4);
  }
  uVar6 = FUN_ram_4002d266();
  uVar7 = FUN_ram_4002d274();
  fVar1 = DAT_ram_40099f28;
  puVar16 = (undefined4 *)&DAT_ram_3006ab3c;
  puVar15 = (undefined4 *)&DAT_ram_3006ac4c;
  iVar5 = 0;
  do {
    iVar8 = FUN_ram_4001b5ee(iVar5);
    iVar18 = iVar5 * 0x20 + 0x3006aa9c;
    iVar3 = iVar5 * 0x20 + 0x3006abac;
    if (iVar5 < (int)(uint)DAT_ram_3006ad5c) {
      fVar19 = 0.0;
      if (-1 < iVar2) {
        fVar19 = (float)*(ushort *)((iVar2 * 0xc + iVar8) * 2 + 0x3006adfc) / fVar1;
      }
      if (((iVar14 == 0xff) ||
          (pcVar9 = (char *)nc_effect_parameter_name(iVar14,uVar17,iVar8,1), pcVar9 == (char *)0x0)) ||
         (pcVar11 = pcVar9, *pcVar9 == '\0')) {
        pcVar9 = (char *)FUN_ram_4002d6f8(0x74);
        if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) {
          pcVar9 = &DAT_ram_4009a310;
        }
        FUN_ram_40005520(local_88,8,pcVar9,iVar8 + 1);
        pcVar9 = local_88;
        pcVar11 = pcVar9;
      }
      for (; *pcVar9 != '\0'; pcVar9 = pcVar9 + 1) {
        if (*pcVar9 == '\n') goto LAB_ram_4001d80a;
      }
      if (*pcVar11 != '\0') {
        FUN_ram_40005520(acStack_80,0x18,&DAT_ram_4009a314);
        pcVar11 = acStack_80;
      }
LAB_ram_4001d80a:
      FUN_ram_40017d68(*puVar16,0,1);
      FUN_ram_40017bd8(*puVar16,iVar18,pcVar11);
      FUN_ram_40017d60(iVar18,uVar6);
      FUN_ram_40017d68(*puVar15,0,1);
      FUN_ram_4001cc7c(fVar19,iVar4,uVar17,iVar8,auStack_68);
      FUN_ram_40017bd8(*puVar15,iVar3,auStack_68);
      uVar10 = uVar7;
    }
    else {
      FUN_ram_40017d68(*puVar16,0,0);
      FUN_ram_40017d68(*puVar15,0,0);
      FUN_ram_40017d60(iVar18,0);
      uVar10 = 0;
    }
    FUN_ram_40017d60(iVar3,uVar10);
    iVar5 = iVar5 + 1;
    puVar16 = puVar16 + 1;
    puVar15 = puVar15 + 1;
    if (iVar5 == 5) {
      FUN_ram_4001b6e4();
      for (iVar4 = 0; iVar4 < (int)(uint)DAT_ram_3006ad5c; iVar4 = iVar4 + 1) {
        if (iVar4 < 5) {
          FUN_ram_4001b802(iVar4);
        }
      }
      FUN_ram_4001aea8();
      iVar4 = FUN_ram_4001ac48();
      if ((iVar4 <= _DAT_ram_3006ad28) && ((int)(uint)DAT_ram_3006ad5c <= _DAT_ram_3006ad28 - iVar4)
         ) {
        FUN_ram_4001c8b0(iVar4 + (uint)DAT_ram_3006ad5c + -1);
        return;
      }
      FUN_ram_4001bf0a();
      return;
    }
  } while( true );
}


/* NanoCore 1.12, address 0x4001d88c.
 * REA evidence: ev_951d941ee939cb44495a2f7f096fe202ed0c07956cb3354e3242ab0a5d75d7ae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001d88c(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [36];
  
  if (param_1 < 5) {
    if ((((int)param_1 < (int)(uint)DAT_ram_3006ad5c) && (_DAT_ram_3006aa24 != 0)) &&
       (iVar1 = FUN_ram_4001ad02(), -1 < iVar1)) {
      iVar2 = FUN_ram_4001b5ee(param_1);
      FUN_ram_4001cc7c((float)*(ushort *)((iVar2 + iVar1 * 0xc) * 2 + 0x3006adfc) / DAT_ram_40099f28
                       ,_DAT_ram_3006aa24,*(undefined1 *)(iVar1 + 0x3006aebc),iVar2,auStack_38);
      FUN_ram_40017bd8(*(undefined4 *)(&DAT_ram_3006ac4c + param_1 * 4),param_1 * 0x20 + 0x3006abac,
                       auStack_38);
      if (param_2 != 0) {
        iVar1 = FUN_ram_4001ac48();
        *(bool *)(param_1 + 0x3006aba4) = iVar1 + param_1 == _DAT_ram_3006ad28;
      }
    }
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001d95a.
 * REA evidence: ev_f352b3ef81dd676a905a4d8513020dba11ef1e1e037c717583cfc557efd387d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001d95a(void)

{
  ushort uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  
  if (_DAT_ram_3006b0d8 != 0) {
    FUN_ram_4004c712();
    _DAT_ram_3006b0d8 = 0;
  }
  fVar2 = DAT_ram_40099f28;
  iVar9 = 0x3006adfc;
  pcVar8 = &DAT_ram_3006b0dc;
  iVar5 = 0;
  do {
    uVar3 = 0;
    pcVar7 = pcVar8;
    do {
      if (*pcVar7 != '\0') {
        uVar1 = *(ushort *)(iVar9 + uVar3 * 2);
        *pcVar7 = '\0';
        FUN_ram_40023784((float)uVar1 / fVar2,iVar5);
        FUN_ram_4001b576(iVar5,uVar3 & 0xff);
      }
      uVar3 = uVar3 + 1;
      pcVar7 = pcVar7 + 1;
    } while (uVar3 != 0xc);
    iVar5 = iVar5 + 1;
    iVar9 = iVar9 + 0x18;
    pcVar8 = pcVar8 + 0xc;
  } while (iVar5 != 8);
  uVar3 = (uint)DAT_ram_3006b13c;
  if ((uVar3 != 0) && (DAT_ram_3006b13c = 0, DAT_ram_3006a9d2 != '\0')) {
    puVar6 = _DAT_ram_3006aa24;
    if (_DAT_ram_3006aa24 == (undefined *)0x0) {
      puVar6 = &DAT_ram_4009acc0;
    }
    iVar5 = FUN_ram_4001ad02(puVar6);
    uVar4 = 0;
    if (-1 < iVar5) {
      for (; (int)uVar4 < (int)(uint)DAT_ram_3006ad5c; uVar4 = uVar4 + 1) {
        if ((1 << (uVar4 & 0x1f) & uVar3) != 0) {
          FUN_ram_4001d88c(uVar4,0);
        }
      }
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4001da56.
 * REA evidence: ev_de4b6e2468f0f2cf805d6236e3ebcfd6c4b3a99d46f0429acbd1cb883e1b502e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001da56(uint param_1,int param_2)

{
  if (param_1 == 0) {
    param_2 = -1;
  }
  if ((DAT_ram_3006aa1c == param_1) && (_DAT_ram_3006aa20 == param_2)) {
    return;
  }
  if (param_1 == 0) {
    FUN_ram_4001d95a();
  }
  DAT_ram_3006aa1c = (byte)param_1;
  _DAT_ram_3006aa20 = param_2;
  FUN_ram_4001bf0a();
  return;
}


/* NanoCore 1.12, address 0x4001daaa.
 * REA evidence: ev_2f28542dffac40e532e941b2ee7e5ccdb277b946f8808ddef7a1841bdaa2042a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001daaa(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (DAT_ram_3006b13c == '\0') {
    puVar1 = &DAT_ram_3006b0dc;
    do {
      iVar2 = 0;
      do {
        if (puVar1[iVar2] != '\0') goto LAB_ram_4001dafc;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0xc);
      puVar1 = puVar1 + 0xc;
      if (puVar1 == &DAT_ram_3006b13c) {
        if (_DAT_ram_3006b0d8 == 0) {
          return;
        }
        FUN_ram_4004c712();
        _DAT_ram_3006b0d8 = 0;
        return;
      }
    } while( true );
  }
LAB_ram_4001dafc:
  FUN_ram_4001d95a();
  return;
}


/* NanoCore 1.12, address 0x4001dae6.
 * REA evidence: ev_fd1b2a544484780eb7c943f3c01c79e2202e58765d0e8526b151ca8a272d0300
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001dae6(void)

{
  FUN_ram_4004c712();
  _DAT_ram_3006b0d8 = 0;
  return;
}


/* NanoCore 1.12, address 0x4001db00.
 * REA evidence: ev_a5bfc6975bd211e64a5ca5680ee08c208e25da72807d209a3f6b93939da3891e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001db00(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iStack_50;
  byte bStack_4c;
  int iStack_48;
  undefined4 local_44 [7];
  
  iVar3 = FUN_ram_4000c91c(0,&iStack_50);
  uVar2 = DAT_ram_3004ad04;
  if (iVar3 == 0) {
    if (iStack_50 != _DAT_ram_3006a740) {
      _DAT_ram_3006a740 = iStack_50;
      FUN_ram_4001bd36();
      uVar6 = (uint)bStack_4c;
      if ((iStack_48 == 0) && (uVar6 == DAT_ram_3004acfc)) {
        DAT_ram_3004acf8 = uVar6;
      }
      if (uVar6 == uVar2) {
        DAT_ram_3004ad04 = 0xffffffff;
      }
      else if ((uVar2 < 0x1e) && (*(char *)(uVar2 + 0x3006a9ac) != '\0')) {
        DAT_ram_3004ad00 = uVar2;
      }
    }
  }
  iVar3 = FUN_ram_4000c91c(2,&iStack_50);
  uVar2 = DAT_ram_3004ad18;
  if (iVar3 == 0) {
    if (iStack_50 != _DAT_ram_3006ad60) {
      _DAT_ram_3006ad60 = iStack_50;
      FUN_ram_4001afea();
      uVar6 = (uint)bStack_4c;
      if ((iStack_48 == 0) && (uVar6 - 0x1e == DAT_ram_3004ad10)) {
        DAT_ram_3004ad0c = uVar6;
      }
      if (uVar6 == uVar2) {
        DAT_ram_3004ad18 = 0xffffffff;
        iVar3 = FUN_ram_4001ad02(&DAT_ram_4009a0c0);
        fVar1 = DAT_ram_40099f28;
        local_44[3] = 0;
        local_44[4] = 0;
        if (-1 < iVar3) {
          puVar7 = local_44;
          local_44[0] = DAT_ram_4009675c;
          local_44[1] = DAT_ram_4009675c;
          local_44[2] = DAT_ram_40096760;
          uVar2 = 0;
          do {
            uVar6 = uVar2 & 0xff;
            if (iVar3 < 8) {
              iVar4 = FUN_ram_4001b4fe(*puVar7,iVar3);
              *(short *)(iVar3 * 0x18 + 0x3006adfc + uVar2 * 2) = (short)iVar4;
              FUN_ram_40023434((float)iVar4 / fVar1,iVar3,uVar6);
            }
            uVar2 = uVar2 + 1;
            FUN_ram_4001b576(iVar3,uVar6);
            puVar7 = puVar7 + 1;
          } while (uVar2 != 3);
          if (((DAT_ram_3006a9d2 != '\0') && (_DAT_ram_3006aa24 != 0)) &&
             (iVar3 = FUN_ram_4000513e(_DAT_ram_3006aa24,&DAT_ram_4009a0c0,0x10), iVar3 == 0)) {
            FUN_ram_4001b6e4();
            for (iVar3 = 0; iVar3 < (int)(uint)DAT_ram_3006ad5c; iVar3 = iVar3 + 1) {
              FUN_ram_4001d88c(iVar3,1);
            }
          }
        }
      }
      else if ((uVar2 - 0x1e < 8) && (*(char *)(uVar2 + 0x3006adce) != '\0')) {
        DAT_ram_3004ad14 = uVar2 - 0x1e;
      }
    }
  }
  iVar3 = FUN_ram_4000c91c(1,&iStack_50);
  uVar2 = DAT_ram_3004ad28;
  if (iVar3 == 0) {
    if (iStack_50 != _DAT_ram_3006aec4) {
      _DAT_ram_3006aec4 = iStack_50;
      FUN_ram_4001b140();
      uVar6 = (uint)bStack_4c;
      if ((iStack_48 == 0) && (uVar6 == DAT_ram_3004ad20)) {
        DAT_ram_3004ad1c = uVar6;
      }
      if (uVar6 == uVar2) {
        DAT_ram_3004ad28 = 0xffffffff;
      }
      else if ((uVar2 < 0x1e) && (*(char *)(uVar2 + 0x3006b0b0) != '\0')) {
        DAT_ram_3004ad24 = uVar2;
      }
    }
  }
  uVar2 = DAT_ram_3004acfc;
  uVar5 = FUN_ram_40093102();
  iVar3 = FUN_ram_4001c84c(uVar5,_DAT_ram_3006a9a8,&DAT_ram_3004ad00,0x1e,0x3006a9ac,
                           FUN_ram_4001bd36);
  if ((iVar3 != 0) && (DAT_ram_3004acfc != uVar2)) {
    uVar2 = FUN_ram_4000bb70();
    if (uVar2 == (DAT_ram_3004acfc & 0xff)) {
      DAT_ram_3004acf8 = DAT_ram_3004acfc;
    }
  }
  uVar5 = FUN_ram_40093102();
  FUN_ram_4001c84c(uVar5,_DAT_ram_3006ade8,&DAT_ram_3004ad14,8,0x3006adec,FUN_ram_4001afea);
  uVar2 = DAT_ram_3004ad20;
  uVar5 = FUN_ram_40093108();
  iVar3 = FUN_ram_4001c84c(uVar5,_DAT_ram_3006b0ac,&DAT_ram_3004ad24,0x1e,0x3006b0b0,
                           FUN_ram_4001b140);
  if ((iVar3 != 0) && (DAT_ram_3004ad20 != uVar2)) {
    DAT_ram_3004ad1c = DAT_ram_3004ad20;
  }
  if ((DAT_ram_3006a9d2 != '\0') && (_DAT_ram_3006aa24 != 0)) {
    FUN_ram_4001c1cc();
  }
  return;
}


/* NanoCore 1.12, address 0x4001de20.
 * REA evidence: ev_ac6a631d4f9a9222820453b9362ae8598135192db6b3444628322ae8c7f6ecd1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001de20(undefined4 param_1)

{
  FUN_ram_4001c600(param_1,0);
  return;
}


/* NanoCore 1.12, address 0x4001de26.
 * REA evidence: ev_4b5ec85cfe594537920d9f1bcccad8f612f2a2c7557058d8d2df83a065fc6bc7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001de26(int param_1)

{
  int iVar1;
  
  if ((param_1 - 0x1eU & 0xff) < 8) {
    if (DAT_ram_3006ad64 == '\0') {
      FUN_ram_4001afea();
    }
    if (*(char *)(param_1 + 0x3006adce) == '\0') {
      iVar1 = FUN_ram_40093102();
      if (iVar1 != _DAT_ram_3006ade8) {
        FUN_ram_4001afea();
      }
      if (*(char *)(param_1 + 0x3006adce) == '\0') {
        return 0xffffffff;
      }
    }
    iVar1 = FUN_ram_4000be4a(param_1);
    if (iVar1 == 0) {
      DAT_ram_3004ad14 = param_1 - 0x1eU;
      DAT_ram_3004ad18 = param_1;
      return 0;
    }
    FUN_ram_4001afea();
    DAT_ram_3004ad14 = DAT_ram_3004ad10;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4001debc.
 * REA evidence: ev_c7180fe0b79cd6168c0498b2ce844bfa42ef90f24ea2c93c3b1b34b600df8c44
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001debc(void)

{
  uint uVar1;
  
  uVar1 = DAT_ram_3004acf8;
  if (0x1d < DAT_ram_3004acf8) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4001dece.
 * REA evidence: ev_51ccd33287baea85cadedc59cd42ab7a6dd38393eba24f8ce1c040a8d5fa0d7a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001dece(void)

{
  uint uVar1;
  
  uVar1 = DAT_ram_3004ad1c;
  if (0x1d < DAT_ram_3004ad1c) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4001dee0.
 * REA evidence: ev_c2777e263d605cc351cd59d01cfef6428278052418cde1ce74ddda76456f24c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001dee0(void)

{
  int iVar1;
  
  iVar1 = DAT_ram_3004ad0c;
  if (7 < DAT_ram_3004ad0c - 0x1eU) {
    iVar1 = -1;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4001def6.
 * REA evidence: ev_b7fd06146da60959b6c259879ede3f6b05eccfba67e311af81f4e2a64e9ce557
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001def6(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_4000bb70();
  if (0x1d < uVar1) {
    if (DAT_ram_3006a744 == '\0') {
      FUN_ram_4001bd36();
    }
    uVar1 = DAT_ram_3004acfc;
    if (0x1d < DAT_ram_3004acfc) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4001df28.
 * REA evidence: ev_fa286964ad23b668eb25f1933c2be2735142d2c32681a17625c7c5c14e683560
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001df28(void)

{
  uint uVar1;
  undefined1 auStack_24 [16];
  ushort uStack_14;
  
  FUN_ram_4008dbe0(auStack_24);
  uVar1 = (uint)uStack_14;
  if (0x1d < uStack_14) {
    if (DAT_ram_3006aec8 == '\0') {
      FUN_ram_4001b140();
    }
    uVar1 = DAT_ram_3004ad20;
    if (0x1d < DAT_ram_3004ad20) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4001df60.
 * REA evidence: ev_5f231019b22a86c0b206174bd90ec6fb22680e8fac86f71d5e13f8127708526c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001df60(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4000be82();
  if (7 < (iVar1 - 0x1eU & 0xff)) {
    if (DAT_ram_3006ad64 == '\0') {
      FUN_ram_4001afea();
    }
    iVar1 = -1;
    if (DAT_ram_3004ad10 < 8) {
      iVar1 = DAT_ram_3004ad10 + 0x1e;
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4001df9e.
 * REA evidence: ev_325365c740e353afae16b6f774002bb8f9daafc69f224d7353c4d9ed13948855
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001df9e(uint param_1,uint param_2,int param_3)

{
  DAT_ram_3004acf8 = 0xffffffff;
  if (param_1 < 0x1e) {
    DAT_ram_3004acf8 = param_1;
  }
  DAT_ram_3004ad1c = 0xffffffff;
  if (param_2 < 0x1e) {
    DAT_ram_3004ad1c = param_2;
  }
  DAT_ram_3004ad0c = -1;
  if ((param_3 - 0x1eU & 0xff) < 8) {
    DAT_ram_3004ad0c = param_3;
  }
  DAT_ram_3004ad18 = 0xffffffff;
  return;
}


/* NanoCore 1.12, address 0x4001dfee.
 * REA evidence: ev_ab56314a9981f8c499d3ea08292f225a1e110c830a1cab7b7ef1abf14007f249
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001dfee(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined3 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int aiStack_4c [6];
  
  DAT_ram_3006a9d2 = 0;
  _DAT_ram_3006aa18 = 0;
  _DAT_ram_3006a9d4 = 0;
  _DAT_ram_3006ad50 = 0;
  _DAT_ram_3006aa24 = 0;
  _DAT_ram_3006ad28 = 0;
  DAT_ram_3006aa1c = 0;
  _DAT_ram_3006aa20 = 0xffffffff;
  DAT_ram_3004ad08 = 0xff;
  _DAT_ram_3006aa68 = 0;
  _DAT_ram_3006ad20 = 0;
  _DAT_ram_3006ad58 = 0;
  _DAT_ram_3006b144 = 0;
  _DAT_ram_3006b140 = 0;
  FUN_ram_40004f92(&DAT_ram_3006ab50,0,0x14);
  FUN_ram_40004f92(0x3006adfc,0,0xc0);
  FUN_ram_40004f92(0x3006adf4,1,8);
  FUN_ram_40004f92(0x3006aebc,0,8);
  DAT_ram_3006aec2 = 6;
  FUN_ram_4002326e();
  if (_DAT_ram_3006b1a8 != 0) {
    FUN_ram_4004c712();
    _DAT_ram_3006b1a8 = 0;
  }
  if (_DAT_ram_3006b1ac != 0) {
    FUN_ram_4004c712();
    _DAT_ram_3006b1ac = 0;
  }
  if (_DAT_ram_3006b0d8 != 0) {
    FUN_ram_4004c712();
    _DAT_ram_3006b0d8 = 0;
  }
  DAT_ram_3004ad04 = 0xffffffff;
  DAT_ram_3004ad18 = 0xffffffff;
  DAT_ram_3004ad28 = 0xffffffff;
  iVar4 = FUN_ram_4000c91c(0,aiStack_4c);
  if (iVar4 == 0) {
    _DAT_ram_3006a740 = aiStack_4c[0];
  }
  iVar4 = FUN_ram_4000c91c(2,aiStack_4c);
  if (iVar4 == 0) {
    _DAT_ram_3006ad60 = aiStack_4c[0];
  }
  iVar4 = FUN_ram_4000c91c(1,aiStack_4c);
  if (iVar4 == 0) {
    _DAT_ram_3006aec4 = aiStack_4c[0];
  }
  FUN_ram_40004f92(&DAT_ram_3006b148,0,0x60);
  FUN_ram_40004f92(&DAT_ram_3006b0dc,0,0x60);
  DAT_ram_3006b13c = 0;
  thunk_FUN_ram_400256bc(0x3006b0d0);
  FUN_ram_40004f92(0x3006aba4,0xff,5);
  DAT_ram_3006acf4 = 0;
  DAT_ram_3006ad1c = 5;
  DAT_ram_3006ad5c = 5;
  DAT_ram_3006ad24 = 0;
  FUN_ram_40017090(0x3006a9d8,0x40,s_bg_params_ram_4009a318);
  FUN_ram_40017090(0x3006acb4,0x40,s_distortion_ram_4009a710 + 8);
  FUN_ram_40017090(0x3006ac74,0x40,s_bat_off_ram_4009c534 + 4);
  FUN_ram_40017090(0x3006ab64,0x40,&DAT_ram_4009a03c);
  _DAT_ram_3006aa18 = FUN_ram_40043b84(param_1);
  FUN_ram_400450a2(_DAT_ram_3006aa18,0x140,0xf0);
  FUN_ram_400489f0(_DAT_ram_3006aa18,0xff,0);
  FUN_ram_40048a2e(_DAT_ram_3006aa18,0,0);
  FUN_ram_400440ce(_DAT_ram_3006aa18,1);
  _DAT_ram_3006a9d4 = FUN_ram_40056db0(_DAT_ram_3006aa18);
  FUN_ram_40057382(_DAT_ram_3006a9d4,0xb);
  FUN_ram_40045014(_DAT_ram_3006a9d4,0,0);
  FUN_ram_400450a2(_DAT_ram_3006a9d4,0x140,0xf0);
  FUN_ram_400440ce(_DAT_ram_3006a9d4,1);
  FUN_ram_40043ba4(_DAT_ram_3006a9d4,0x10);
  FUN_ram_40043ba4(_DAT_ram_3006a9d4,2);
  _DAT_ram_3006aa70 = FUN_ram_40056db0(_DAT_ram_3006aa18);
  FUN_ram_40057382(_DAT_ram_3006aa70,0xb);
  FUN_ram_40045014(_DAT_ram_3006aa70,8,8);
  FUN_ram_400450a2(_DAT_ram_3006aa70,0x32,0x32);
  _DAT_ram_3006ad2c = FUN_ram_400579de(_DAT_ram_3006aa18);
  FUN_ram_4005809e(_DAT_ram_3006ad2c,0);
  FUN_ram_40048aee(_DAT_ram_3006ad2c,1,0);
  FUN_ram_400488f4(_DAT_ram_3006ad2c,0xc1,0);
  FUN_ram_400450a2(_DAT_ram_3006ad2c,0x200007d1);
  FUN_ram_400460be(_DAT_ram_3006ad2c,_DAT_ram_3006aa70,0x14,8,0);
  FUN_ram_40017a50(_DAT_ram_3006aa18,_DAT_ram_3006ad2c,&DAT_ram_3006ad30,1);
  piVar1 = (int *)&DAT_ram_3006ad30;
  do {
    if (*piVar1 != 0) {
      FUN_ram_4005809e(*piVar1,0);
      FUN_ram_400488f4(*piVar1,0xc1,0);
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != (int *)&DAT_ram_3006ad50);
  _DAT_ram_3006ad50 = FUN_ram_40043b84(_DAT_ram_3006aa18);
  FUN_ram_400489f0(_DAT_ram_3006ad50,0,0);
  FUN_ram_40048a2e(_DAT_ram_3006ad50,0,0);
  FUN_ram_40048a3e(_DAT_ram_3006ad50,0,0);
  FUN_ram_40048afe(_DAT_ram_3006ad50,0,0);
  FUN_ram_40043ba4(_DAT_ram_3006ad50,0x10);
  iVar10 = 0x3006aa9c;
  FUN_ram_40043ba4(_DAT_ram_3006ad50,2);
  FUN_ram_400440ce(_DAT_ram_3006ad50,1);
  FUN_ram_4001b31e();
  iVar12 = 0x3006abac;
  _DAT_ram_3006aa6c = FUN_ram_40056db0(_DAT_ram_3006aa18);
  FUN_ram_40057382(_DAT_ram_3006aa6c,0xb);
  FUN_ram_400450a2(_DAT_ram_3006aa6c,0x2d,0x17);
  FUN_ram_40045014(_DAT_ram_3006aa6c,0x10b,0x15);
  iVar4 = 0;
  _DAT_ram_3006acf8 = FUN_ram_400579de(_DAT_ram_3006aa18);
  FUN_ram_4005809e(_DAT_ram_3006acf8,1);
  FUN_ram_400450a2(_DAT_ram_3006acf8,0x200007d1);
  FUN_ram_40045126(_DAT_ram_3006acf8,5,0,0xfffffff8);
  FUN_ram_40017a50(_DAT_ram_3006aa18,_DAT_ram_3006acf8,0x3006acfc,2);
  puVar2 = (undefined4 *)&DAT_ram_3006ab50;
  puVar6 = (undefined4 *)&DAT_ram_3006ab3c;
  puVar7 = (undefined4 *)&DAT_ram_3006ac4c;
  puVar8 = (undefined4 *)&DAT_ram_3006ac60;
  do {
    uVar5 = FUN_ram_40056db0(_DAT_ram_3006aa18);
    *puVar8 = uVar5;
    FUN_ram_40057382(uVar5,9);
    FUN_ram_40056dd0(*puVar8,1);
    iVar9 = iVar4 * 0x3c + 0x14;
    FUN_ram_40045014(*puVar8,iVar9,0x74);
    FUN_ram_400450a2(*puVar8,0x28,0x28);
    uVar5 = _DAT_ram_3006aa18;
    *(undefined4 *)(iVar4 * 4 + 0x3006aa88) = 0x74;
    *(int *)(iVar4 * 4 + 0x3006aa74) = iVar9;
    uVar5 = FUN_ram_400579de(uVar5);
    *puVar6 = uVar5;
    FUN_ram_4005809e(uVar5,0);
    FUN_ram_40048aee(*puVar6,2,0);
    uVar5 = *puVar6;
    uVar3 = FUN_ram_4001709e();
    FUN_ram_40048aae(uVar5,uVar3,0);
    aiStack_4c[0] = FUN_ram_40047b68(*puVar6,0,0x5a);
    iVar11 = *(int *)(aiStack_4c[0] + 0xc) << 1;
    FUN_ram_400450a2(*puVar6,0x3c,iVar11);
    FUN_ram_400460be(*puVar6,*puVar8,0xb,0,0xfffffffe);
    FUN_ram_40017a50(_DAT_ram_3006aa18,*puVar6,iVar10,2);
    iVar4 = iVar4 + 1;
    iVar10 = iVar10 + 0x20;
    uVar5 = FUN_ram_400579de(_DAT_ram_3006aa18);
    *puVar7 = uVar5;
    FUN_ram_4005809e(uVar5,4);
    FUN_ram_40048aee(*puVar7,2,0);
    uVar5 = *puVar7;
    uVar3 = FUN_ram_4001709e();
    FUN_ram_40048aae(uVar5,uVar3,0);
    FUN_ram_400450a2(*puVar7,0x48,iVar11);
    FUN_ram_400460be(*puVar7,*puVar8,0xe,0,4);
    FUN_ram_40017a50(_DAT_ram_3006aa18,*puVar7,iVar12,2);
    iVar12 = iVar12 + 0x20;
    uVar5 = FUN_ram_40043b84(_DAT_ram_3006aa18);
    *puVar2 = uVar5;
    FUN_ram_400489f0(uVar5,0,0);
    FUN_ram_40048a2e(*puVar2,0,0);
    FUN_ram_40048a3e(*puVar2,0,0);
    FUN_ram_40048afe(*puVar2,0,0);
    FUN_ram_40045014(*puVar2,iVar9,0x74);
    FUN_ram_400450a2(*puVar2,0x28,0x28);
    FUN_ram_40043ba4(*puVar2,0x10);
    FUN_ram_40043ba4(*puVar2,2);
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  } while (iVar4 != 5);
  FUN_ram_4001aea8();
  FUN_ram_4001cb90();
  _DAT_ram_3006b1ac = FUN_ram_4004c6ac(FUN_ram_4001db00,0xfa,0);
  return;
}


