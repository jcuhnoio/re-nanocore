/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4001a000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4001a048.
 * REA evidence: ev_26bfa8f09a2395e029fc64e513eaa63acc1ec6ce64abed358a58116691e30cfc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a048(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (_DAT_ram_3006a76c != 0) {
    uVar1 = 0;
    do {
      uVar3 = *(uint *)(_DAT_ram_3006a76c + uVar1 * 4);
      if ((uVar3 < 8) && (iVar2 = *(int *)(uVar3 * 4 + 0x3006a744), iVar2 != 0)) {
        FUN_ram_40044f1c(iVar2,(uVar1 & 3) * 0x4a + 0x18,((int)uVar1 >> 2) * 0x3a + 0x42);
        FUN_ram_40044faa(iVar2,0x32,0x32);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != 8);
  }
  return;
}


/* NanoCore 1.11, address 0x4001a0d0.
 * REA evidence: ev_01e228696215f4d29d3085dd4bc07bcda9e699f0eb0dfd2170c234e71dfe5143
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a0d0(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  DAT_ram_3006a4a8 = 0;
  DAT_ram_3006a4f4 = 0;
  _DAT_ram_3006a770 = 0;
  _DAT_ram_3006a768 = 0;
  _DAT_ram_3006a764 = 0;
  _DAT_ram_3006a4fc = 0;
  _DAT_ram_3006a4f8 = 0xffffffff;
  _DAT_ram_3006a4ac = 0;
  _DAT_ram_3006a76c = FUN_ram_40017bae(0);
  FUN_ram_40016c5e(0x3006a4b0,0x40,s_bg_chain_ram_40095138);
  iVar3 = 0x3006a544;
  iVar2 = 0;
  do {
    ppuVar1 = &PTR_DAT_ram_40095014_ram_40095144 + iVar2;
    iVar2 = iVar2 + 1;
    FUN_ram_40016c5e(iVar3,0x40,*ppuVar1);
    iVar3 = iVar3 + 0x40;
  } while (iVar2 != 8);
  FUN_ram_40016c5e(0x3006a504,0x40,s_chain_ram_40095044);
  _DAT_ram_3006a4f0 = FUN_ram_40043a8c(param_1);
  FUN_ram_40044faa(_DAT_ram_3006a4f0,0x140,0xf0);
  FUN_ram_400488f8(_DAT_ram_3006a4f0,0xff,0);
  FUN_ram_40048936(_DAT_ram_3006a4f0,0,0);
  FUN_ram_40043fd6(_DAT_ram_3006a4f0,1);
  _DAT_ram_3006a4ac = FUN_ram_40056f7e(_DAT_ram_3006a4f0);
  FUN_ram_40057550(_DAT_ram_3006a4ac,0xb);
  FUN_ram_40044f1c(_DAT_ram_3006a4ac,0,0);
  FUN_ram_40044faa(_DAT_ram_3006a4ac,0x140,0xf0);
  FUN_ram_40043fd6(_DAT_ram_3006a4ac,1);
  FUN_ram_40043aac(_DAT_ram_3006a4ac,0x10);
  FUN_ram_40043aac(_DAT_ram_3006a4ac,2);
  _DAT_ram_3006a500 = FUN_ram_40056f7e(_DAT_ram_3006a4f0);
  FUN_ram_40057550(_DAT_ram_3006a500,0xb);
  FUN_ram_40044f1c(_DAT_ram_3006a500,8,8);
  FUN_ram_40044faa(_DAT_ram_3006a500,0x26,0x26);
  _DAT_ram_3006a774 = FUN_ram_40057bac(_DAT_ram_3006a4f0);
  FUN_ram_4005826c(_DAT_ram_3006a774,1);
  FUN_ram_40044faa(_DAT_ram_3006a774,0x200007d1);
  FUN_ram_40045fc6(_DAT_ram_3006a774,_DAT_ram_3006a500,0x14,8,0);
  FUN_ram_4001761e(_DAT_ram_3006a4f0,_DAT_ram_3006a774,0x3006a778,1);
  iVar2 = 0;
  FUN_ram_40019d32();
  do {
    uVar4 = FUN_ram_40056f7e(_DAT_ram_3006a4f0);
    *(undefined4 *)(iVar2 * 4 + 0x3006a744) = uVar4;
    iVar2 = iVar2 + 1;
    FUN_ram_40057550(uVar4,0xb);
  } while (iVar2 != 8);
  _DAT_ram_3006a4fc = FUN_ram_4001e4a6();
  FUN_ram_40019d5c();
  FUN_ram_40019e1a();
  FUN_ram_4001a048();
  return;
}


/* NanoCore 1.11, address 0x4001a2d4.
 * REA evidence: ev_3bf4da08b66083158973d2f96b3d35bc3a8de40b38a7f4b15c7a06dd88015b46
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a2d4(undefined4 param_1,undefined4 param_2)

{
  _DAT_ram_3006a764 = param_2;
  _DAT_ram_3006a768 = param_1;
  FUN_ram_40019e1a();
  return;
}


/* NanoCore 1.11, address 0x4001a2e8.
 * REA evidence: ev_b9a3baf9feb27b1f24721f0d40ba439b6756464cbc11b6d9d48f8c9cc3bd325c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a2e8(void)

{
  if (_DAT_ram_3006a4f0 != 0) {
    DAT_ram_3006a4a8 = 1;
    DAT_ram_3006a4f4 = 0;
    _DAT_ram_3006a4f8 = 0xffffffff;
    _DAT_ram_3006a770 = 0;
    FUN_ram_40019e1a();
    FUN_ram_4001a048();
    if (_DAT_ram_3006a4f0 != 0) {
      FUN_ram_40043aac(_DAT_ram_3006a4f0,1);
    }
    FUN_ram_40019f8e();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4001a342.
 * REA evidence: ev_926198bba5eedc3dd0bd33d7fcea11f9aabf6a54f8478f2709022d086a44d965
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a342(void)

{
  undefined3 uVar1;
  
  DAT_ram_3006a4a8 = 0;
  DAT_ram_3006a4f4 = 0;
  _DAT_ram_3006a4f8 = 0xffffffff;
  uVar1 = FUN_ram_40016cb8(0);
  FUN_ram_40017ede(uVar1);
  if (_DAT_ram_3006a4f0 != 0) {
    FUN_ram_40043fd6(_DAT_ram_3006a4f0,1);
  }
  FUN_ram_40017d52(0);
  return;
}


/* NanoCore 1.11, address 0x4001a39a.
 * REA evidence: ev_b72ce2737c4fe8ac572273f1988db73679ca24b58f3d60fac5d6272707a91072
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4001a39a(void)

{
  return DAT_ram_3006a4a8;
}


/* NanoCore 1.11, address 0x4001a3a4.
 * REA evidence: ev_2247f1a4c0e29c9136d749e5abb725547b3c545c91b3069ad8c3d6f4b30b6d4c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a3a4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_28 [16];
  
  iVar8 = _DAT_ram_3006a770;
  cVar1 = DAT_ram_3006a4f4;
  if (DAT_ram_3006a4a8 == '\0') {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (DAT_ram_3006a4f4 == '\0') {
    _DAT_ram_3006a770 = param_1 + _DAT_ram_3006a770;
    if (_DAT_ram_3006a770 < 0) {
      _DAT_ram_3006a770 = 0;
    }
    else if (7 < _DAT_ram_3006a770) {
      _DAT_ram_3006a770 = 7;
    }
  }
  else {
    if (7 < _DAT_ram_3006a4f8) {
      _DAT_ram_3006a4f8 = FUN_ram_40019d0c();
    }
    iVar2 = _DAT_ram_3006a76c;
    uVar6 = _DAT_ram_3006a4f8;
    iVar3 = 1;
    if (param_1 < 1) {
      iVar3 = -1;
    }
    cVar4 = '\0';
    do {
      if ((iVar2 == 0) || (7 < uVar6)) {
LAB_ram_4001a414:
        iVar7 = _DAT_ram_3006a770;
        if (cVar4 != '\0') {
          iVar7 = iVar8;
        }
        break;
      }
      iVar9 = 0;
      do {
        if (uVar6 == *(uint *)(iVar2 + iVar9 * 4)) goto LAB_ram_4001a482;
        iVar9 = iVar9 + 1;
      } while (iVar9 != 8);
      iVar9 = -1;
LAB_ram_4001a482:
      iVar7 = iVar3 + iVar9;
      if (((iVar9 == -1) || (iVar7 < 0)) || (iVar7 == 8)) goto LAB_ram_4001a414;
      uVar5 = *(undefined4 *)(iVar2 + iVar9 * 4);
      param_1 = param_1 - iVar3;
      *(undefined4 *)(iVar2 + iVar9 * 4) = *(undefined4 *)(iVar2 + iVar7 * 4);
      *(undefined4 *)(iVar2 + iVar7 * 4) = uVar5;
      iVar8 = iVar7;
      cVar4 = cVar1;
    } while (param_1 != 0);
    _DAT_ram_3006a770 = iVar7;
    FUN_ram_4001a048();
    FUN_ram_40017fd4();
    if (_DAT_ram_3006a76c != 0) {
      iVar8 = 0;
      do {
        uVar6 = *(uint *)(_DAT_ram_3006a76c + iVar8 * 4);
        if (7 < uVar6) goto LAB_ram_4001a454;
        auStack_28[iVar8] = (char)uVar6;
        iVar8 = iVar8 + 1;
      } while (iVar8 != 8);
      iVar8 = FUN_ram_4002328c(auStack_28,8);
      if (iVar8 == 0) {
        FUN_ram_40022b66(auStack_28,8);
      }
    }
  }
LAB_ram_4001a454:
  FUN_ram_40019f8e();
  return;
}


/* NanoCore 1.11, address 0x4001a4dc.
 * REA evidence: ev_a04f4c84332e9004d744a64670dde567805cf43a9ec400d71e10055b5e0f40d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001a4dc(void)

{
  undefined4 uVar1;
  
  if (DAT_ram_3006a4a8 != '\0') {
    DAT_ram_3006a4f4 = DAT_ram_3006a4f4 ^ 1;
    uVar1 = 0xffffffff;
    if (DAT_ram_3006a4f4 != 0) {
      uVar1 = FUN_ram_40019d0c();
    }
    _DAT_ram_3006a4f8 = uVar1;
    FUN_ram_40019f8e();
    return 0;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4001a51e.
 * REA evidence: ev_c1e9c156d8efd5f6a68135c5b369624521956829d48e4de158017577f27250ed
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a51e(void)

{
  if (_DAT_ram_3006a4f0 == 0) {
    return;
  }
  FUN_ram_4001a048();
  if (DAT_ram_3006a4a8 != '\0') {
    FUN_ram_40019f8e();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4001a54a.
 * REA evidence: ev_08603d4e68ca8965c27a01fa59192ca04ddeecaa52bc0109247d4cd4dd632d4a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a54a(void)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_ram_3006a4f0 == 0) {
    return;
  }
  iVar1 = 0x3006a544;
  do {
    iVar2 = iVar1 + 0x40;
    FUN_ram_4004cfba(iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0x3006a744);
  FUN_ram_4004cfba(0x3006a504);
  FUN_ram_4004cfba(0x3006a4b0);
  _DAT_ram_3006a4fc = FUN_ram_4001e4a6();
  FUN_ram_40019d5c();
  FUN_ram_40019d32();
  FUN_ram_40019e1a();
  FUN_ram_4001a048();
  if (DAT_ram_3006a4a8 != '\0') {
    FUN_ram_40019f8e();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4001a5d0.
 * REA evidence: ev_f21eff8205fd5c9de81780f20ce6b33301516e38d689fa0726cfbf82a647ccec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_4001a5d0(float param_1,float param_2,float param_3)

{
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_40094604 < param_1) {
    param_1 = DAT_ram_40094604;
  }
  return (param_3 - param_2) * param_1 + param_2;
}


/* NanoCore 1.11, address 0x4001a5fc.
 * REA evidence: ev_aa10b018bd2b8b3bfe78fece2530ec5cac6c52fbb65fa4cd0715a5850f65c795
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001a5fc(float param_1)

{
  if (param_1 < 0.0) {
    param_1 = param_1 - DAT_ram_40094634;
  }
  else {
    param_1 = param_1 + DAT_ram_40094634;
  }
  return (int)param_1;
}


/* NanoCore 1.11, address 0x4001a61e.
 * REA evidence: ev_9962da3dff80827f45c7bde975c6f129cd92241ba9d8477b225b7d7b3c39c2b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001a61e(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*param_1 == 2) {
    uVar1 = (uint)*(byte *)(param_1 + 4);
    if (uVar1 == 0) {
      return 1;
    }
  }
  else {
    uVar1 = 1;
    if (*param_1 == 1) {
      iVar2 = FUN_ram_4001a5fc((float)*(undefined8 *)(param_1 + 2) -
                               (float)*(undefined8 *)(param_1 + 1),1);
      uVar1 = iVar2 + 1;
      if ((int)uVar1 < 1) {
        uVar1 = 1;
      }
      return uVar1;
    }
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4001a65c.
 * REA evidence: ev_bea60397e325bb4b99ae54a42187471622031df6838b1830b79f6821923d35ac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001a65c(int *param_1,int param_2)

{
  byte bVar1;
  float fVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  undefined4 uStack_20;
  
  iVar5 = *param_1;
  if (iVar5 != 0) {
    if (1000 < param_2) {
      param_2 = 1000;
    }
    fVar7 = (float)param_2 / DAT_ram_40094e80;
    if (iVar5 == 1) {
      iVar5 = FUN_ram_4001a61e();
      uVar6 = *(ulonglong *)(param_1 + 1);
      fVar7 = (float)FUN_ram_4001a5d0(CONCAT44(uStack_20,fVar7),uVar6 & 0xffffffff,
                                      *(undefined8 *)(param_1 + 2));
      iVar4 = FUN_ram_4001a5fc(fVar7 - (float)uVar6);
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (iVar5 <= iVar4) {
        iVar4 = iVar5 + -1;
      }
    }
    else {
      iVar4 = 0;
      if (((iVar5 == 2) && (puVar3 = (undefined8 *)param_1[3], puVar3 != (undefined8 *)0x0)) &&
         (bVar1 = *(byte *)(param_1 + 4), bVar1 != 0)) {
        fVar8 = (float)FUN_ram_4001a5d0(fVar7,*(undefined8 *)(param_1 + 1),
                                        *(undefined8 *)(param_1 + 2));
        iVar4 = 0;
        fVar7 = ABS(fVar8 - (float)*puVar3);
        for (iVar5 = 1; iVar5 < (int)(uint)bVar1; iVar5 = iVar5 + 1) {
          fVar2 = ABS(fVar8 - (float)*(undefined8 *)((int)puVar3 + iVar5 * 4));
          if (fVar2 < fVar7) {
            iVar4 = iVar5;
            fVar7 = fVar2;
          }
        }
      }
    }
    return iVar4;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4001a71e.
 * REA evidence: ev_5b140d0fc01a78ee21a85c3d0525f76dd47a3b43b7ef0fc7d2d08ee34055e4a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001a71e(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = FUN_ram_4001a61e();
    if (param_2 < 0) {
      param_2 = 0;
    }
    else if (iVar2 <= param_2) {
      param_2 = iVar2 + -1;
    }
    if (iVar1 == 1) {
      fVar4 = (float)param_2 + (float)*(undefined8 *)(param_1 + 1);
    }
    else {
      if (iVar1 != 2) {
        return 0;
      }
      if (param_1[3] == 0) {
        return 0;
      }
      if ((char)param_1[4] == '\0') {
        return 0;
      }
      fVar4 = (float)*(undefined8 *)(param_1[3] + param_2 * 4);
    }
    fVar3 = (float)*(undefined8 *)(param_1 + 1);
    if (((float)*(undefined8 *)(param_1 + 2) <= fVar3) ||
       (fVar4 = (fVar4 - fVar3) / ((float)*(undefined8 *)(param_1 + 2) - fVar3), fVar4 < 0.0)) {
      fVar4 = 0.0;
    }
    else if (DAT_ram_40094604 < fVar4) {
      fVar4 = DAT_ram_40094604;
    }
    iVar1 = (int)(fVar4 * DAT_ram_40094e80 + DAT_ram_40094634);
    if (1000 < iVar1) {
      return 1000;
    }
    if (-1 < iVar1) {
      return iVar1;
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x4001a7dc.
 * REA evidence: ev_7269f2f8e4fda5035e750c9b50b6f13b94676f62d942856260d2fcdc0509b48d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4001a7dc(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if ((DAT_ram_3006aa74 != '\0') && (_DAT_ram_3006aa78 == 100)) {
    iVar2 = 1;
    if (DAT_ram_3006adac == '\0') {
      iVar2 = -1;
    }
    bVar1 = _DAT_ram_3006ad80 == iVar2;
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x4001a816.
 * REA evidence: ev_14540a0cdc68a164be77282ecd5644898cb102348d27175ef82362d69fe1d3b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char FUN_ram_4001a816(void)

{
  return (DAT_ram_3006adac != '\0') + '\x02';
}


/* NanoCore 1.11, address 0x4001a826.
 * REA evidence: ev_ac4d3b409252af8719f1a2f1bd30bfecf9b8d35b357199ce90e53bb5c52d20ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4001a826(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = FUN_ram_400051f8(param_1,&DAT_ram_40095014,0x10);
    if ((((iVar2 == 0) || (iVar2 = FUN_ram_400051f8(param_1,&DAT_ram_40095018,0x10), iVar2 == 0)) ||
        (iVar2 = FUN_ram_400051f8(param_1,&DAT_ram_40095028,0x10), iVar2 == 0)) ||
       (((iVar2 = FUN_ram_400051f8(param_1,s_delay_ram_40095020,0x10), iVar2 == 0 ||
         (iVar2 = FUN_ram_400051f8(param_1,s_reverb_ram_4009502c,0x10), iVar2 == 0)) ||
        ((iVar2 = FUN_ram_400051f8(param_1,&DAT_ram_40095034,0x10), iVar2 == 0 ||
         (iVar2 = FUN_ram_400051f8(param_1,&DAT_ram_40095bb8,0x10), iVar2 == 0)))))) {
      bVar1 = true;
    }
    else {
      iVar2 = FUN_ram_400051f8(param_1,&DAT_ram_4009501c,0x10);
      bVar1 = iVar2 == 0;
    }
    return bVar1;
  }
  return false;
}


/* NanoCore 1.11, address 0x4001a8d0.
 * REA evidence: ev_afba40cb37ce76528bd4e90bd6c74d0730fdc74fdd1e3ea102b30bd49f13c1c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001a8d0(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_40016d56();
  if (7 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4001a8e6.
 * REA evidence: ev_1d0c9d677096f0ebe02d9b75b20a292595635e95c694d534eaf416b77ed6df6d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4001a8e6(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = FUN_ram_4001a8d0();
  if (uVar2 < 8) {
    uVar1 = *(undefined1 *)(uVar2 + 0x3006af14);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4001a8f4.
 * REA evidence: ev_995ea522c28e0400705c31b97c4620f28dda159eb07911acb3e7faa6f6f31ec7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4001a8f4(void)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = FUN_ram_4001a8d0();
  if (uVar2 < 8) {
    uVar1 = *(undefined1 *)(uVar2 + 0x3006af14);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4001a910.
 * REA evidence: ev_b2e71df818b6c5c9cd8f38a2fc46f639742430a9976539e1c0f700196af2d590
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a910(void)

{
  undefined1 uVar1;
  undefined4 in_register_00000100;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  
  _DAT_ram_3006b200 = 0;
  pcVar6 = &DAT_ram_3006b1a0;
  iVar2 = 0;
  do {
    uVar3 = 0;
    pcVar5 = pcVar6;
    do {
      if (*pcVar5 != '\0') {
        uVar1 = *(undefined1 *)(iVar2 + 0x3006af14);
        *pcVar5 = '\0';
        iVar4 = FUN_ram_40026842(iVar2,uVar1,uVar3 & 0xff,1);
        if (iVar4 != 0xff) {
          uStack_47 = (undefined1)iVar4;
          uStack_48 = (undefined1)iVar2;
          uStack_46 = (undefined1)in_register_00000100;
          uStack_45 = (undefined1)((uint)in_register_00000100 >> 8);
          uStack_44 = (undefined1)((uint)in_register_00000100 >> 0x10);
          uStack_43 = (undefined1)((uint)in_register_00000100 >> 0x18);
          FUN_ram_40013eec(0x62,&uStack_48,6);
        }
      }
      uVar3 = uVar3 + 1;
      pcVar5 = pcVar5 + 1;
    } while (uVar3 != 0xc);
    iVar2 = iVar2 + 1;
    pcVar6 = pcVar6 + 0xc;
  } while (iVar2 != 8);
  return;
}


/* NanoCore 1.11, address 0x4001a9e4.
 * REA evidence: ev_a82c64476cf04943cacd98e8f978a2ad69401bc04a02c2faa111baa84f0b18ac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_4001a9e4(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  
  fVar1 = 0.0;
  if ((0.0 <= param_1) && (fVar1 = param_1, DAT_ram_40094604 < param_1)) {
    fVar1 = DAT_ram_40094604;
  }
  if ((0.0 < param_2) && (0.0 < param_3)) {
    if (param_2 != param_3) {
      fVar2 = (float)FUN_ram_40000c5e(param_2);
      fVar3 = (float)FUN_ram_40000c5e(param_3);
      fVar4 = (float)FUN_ram_40000c5e(param_2);
      uVar5 = FUN_ram_40000bd8((fVar3 - fVar4) * fVar1 + fVar2);
      return uVar5;
    }
  }
  return (ulonglong)(uint)param_2;
}


/* NanoCore 1.11, address 0x4001aa76.
 * REA evidence: ev_b7749d580b22e793e085308aeed632bc4c8434e4a7b8bcb652a06706a14a8ff1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001aa94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001aa76(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_1c [20];
  
  if (_DAT_ram_3006ad50 != 0) {
    uVar2 = (DAT_ram_3006ad74 + 4) / 5;
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    uVar1 = DAT_ram_3006ad4c + 1;
    if (uVar2 < uVar1) {
      uVar1 = 1;
    }
    FUN_ram_400055da(auStack_1c,0xc,s__u__u_ram_40095164,uVar1);
    FUN_ram_400177a6(_DAT_ram_3006ad50,0x3006ad54,auStack_1c);
    FUN_ram_40044faa(_DAT_ram_3006ad50,0x200007d1);
    FUN_ram_40045f80(_DAT_ram_3006ad50);
    FUN_ram_4004502e(_DAT_ram_3006ad50,5,0,0xfffffff8);
    FUN_ram_40017732(_DAT_ram_3006ad50,0x3006ad54);
  }
  return;
}


/* NanoCore 1.11, address 0x4001ab08.
 * REA evidence: ev_9c355719fb3ac6cba59851b26783548374cbf83775bb629c61a14d6555059839
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001ab08(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xff;
  if (param_2 == 0) {
    uVar1 = 0x59;
  }
  if (param_1 != 0) {
    FUN_ram_400489a6(param_1,uVar1,0);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4001ab1e.
 * REA evidence: ev_0cd03b1cf1e531fd9892fc192e1f4a460088bfa85ecd61afa965099b4eb3fe7f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ab1e(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_ram_4001a8d0(_DAT_ram_3006aa7c);
  uVar2 = 0x3006ad0c;
  if ((uVar1 < 8) && (*(char *)(uVar1 + 0x3006ae4c) == '\0')) {
    uVar2 = 0x3006accc;
  }
  FUN_ram_40016e8a(_DAT_ram_3006aac4,uVar2);
  return;
}


/* NanoCore 1.11, address 0x4001ab62.
 * REA evidence: ev_0e2859db56acaf83138157fee083f68a8b0d831d25ff277992217a966960c53d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4001ab62(uint *param_1,uint param_2)

{
  bool bVar1;
  
  if ((param_1[2] & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if ((*param_1 != 0) && (*param_1 <= param_2)) {
      bVar1 = param_1[1] - 1 < 0xfffffffe;
    }
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x4001abb8.
 * REA evidence: ev_eaa29822f9a77a66bd0d321a2b914c6edd06112fb8174b6c5cf8680881fc7f8f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001abb8(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [20];
  
  DAT_ram_3006adbc = 0;
  DAT_ram_30049dcc = 0xffffffff;
  DAT_ram_30049dd0 = 0xffffffff;
  FUN_ram_4000504c(0x3006ae44,0,8);
  FUN_ram_4000504c(0x3006adc0,0,0x80);
  iVar5 = 0x3006adc0;
  iVar1 = 0;
  do {
    iVar2 = FUN_ram_40091830(iVar1 + 0x1eU & 0xff,auStack_40);
    if ((iVar2 != 0) && (iVar2 = FUN_ram_4001ab62(auStack_40,0x3000), iVar2 != 0)) {
      *(undefined1 *)(iVar1 + 0x3006ae44) = 1;
      memcpy(iVar5,auStack_34,0x10);
      *(undefined1 *)(iVar5 + 0xf) = 0;
    }
    iVar1 = iVar1 + 1;
    iVar5 = iVar5 + 0x10;
  } while (iVar1 != 8);
  iVar1 = FUN_ram_4000be5c();
  if (((7 < (iVar1 - 0x1eU & 0xff)) ||
      (uVar3 = iVar1 - 0x1eU, *(char *)(iVar1 + 0x3006ae26) == '\0')) &&
     (uVar3 = DAT_ram_30049dcc, (int)DAT_ram_30049dcc < 0)) {
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      if (*(char *)(uVar4 + 0x3006ae44) != '\0') break;
      uVar4 = uVar4 + 1;
      uVar3 = DAT_ram_30049dcc;
    } while (uVar4 != 8);
  }
  DAT_ram_30049dcc = uVar3;
  DAT_ram_30049dd0 = DAT_ram_30049dcc;
  DAT_ram_3006adbc = 1;
  _DAT_ram_3006ae40 = FUN_ram_40091822();
  iVar1 = FUN_ram_4001a8d0(&DAT_ram_40095018);
  if (iVar1 < 0) {
    return;
  }
  uVar3 = FUN_ram_4000be78();
  if (0xb < uVar3) {
    uVar3 = 0;
  }
  *(char *)(iVar1 + 0x3006af14) = (char)uVar3;
  FUN_ram_40022e50(1);
  return;
}


/* NanoCore 1.11, address 0x4001ad0e.
 * REA evidence: ev_f5d7acf07253a4b7e1b45d6b4c9fca0ce1077150a3a7ddcb89415ff7f65b1e12
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ad0e(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_54 [16];
  ushort uStack_44;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [20];
  
  DAT_ram_3006af20 = 0;
  DAT_ram_30049ddc = 0xffffffff;
  DAT_ram_30049de0 = 0xffffffff;
  FUN_ram_4000504c(0x3006b108,0,0x1e);
  FUN_ram_4000504c(0x3006af24,0,0x1e0);
  FUN_ram_4008c328(auStack_54);
  iVar4 = 0x3006af24;
  uVar1 = 0;
  do {
    iVar2 = FUN_ram_40090a4c(uVar1 & 0xff,auStack_40);
    if ((iVar2 != 0) && (iVar2 = FUN_ram_4001ab62(auStack_40,0x1000), iVar2 != 0)) {
      *(undefined1 *)(uVar1 + 0x3006b108) = 1;
      memcpy(iVar4,auStack_34,0x10);
      *(undefined1 *)(iVar4 + 0xf) = 0;
    }
    uVar1 = uVar1 + 1;
    iVar4 = iVar4 + 0x10;
  } while (uVar1 != 0x1e);
  uVar1 = (uint)uStack_44;
  if ((0x1d < uVar1) || (*(char *)(uVar1 + 0x3006b108) == '\0')) {
    uVar3 = 0;
    do {
      uVar1 = uVar3;
      if (*(char *)(uVar3 + 0x3006b108) != '\0') break;
      uVar3 = uVar3 + 1;
      uVar1 = DAT_ram_30049ddc;
    } while (uVar3 != 0x1e);
  }
  DAT_ram_30049ddc = uVar1;
  DAT_ram_30049de0 = DAT_ram_30049ddc;
  DAT_ram_3006af20 = 1;
  _DAT_ram_3006b104 = FUN_ram_40091828();
  return;
}


/* NanoCore 1.11, address 0x4001ae0a.
 * REA evidence: ev_bb565ac94a505eca198d197b3ff33db5a8f617ac3680c2112cdd7e4e65b36d39
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001ae0a(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 2) {
    uVar1 = 0x6b;
  }
  else if (param_1 == 3) {
    uVar1 = 0x6c;
  }
  else if (param_1 == 1) {
    uVar1 = 0x6a;
  }
  else {
    uVar1 = 0x69;
  }
  FUN_ram_4002c834(uVar1);
  return;
}


/* NanoCore 1.11, address 0x4001ae36.
 * REA evidence: ev_90f87226510a42dd7540390cd2ebc07c0eaeb7575b8ead34197dd320040edf16
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ae36(void)

{
  int iVar1;
  int iVar2;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  if (_DAT_ram_3006ada8 != 0) {
    if (((_DAT_ram_3006aa70 == 0) || (_DAT_ram_3006ad84 == 0)) ||
       (iVar2 = FUN_ram_40043b92(_DAT_ram_3006ad84,1), iVar2 != 0)) {
      FUN_ram_40043fd6(_DAT_ram_3006ada8,1);
      return;
    }
    FUN_ram_40045052(_DAT_ram_3006ad84,&local_30);
    FUN_ram_40045052(_DAT_ram_3006aa70,&iStack_20);
    iVar1 = (iStack_24 - iStack_2c) + 5;
    iVar2 = (iStack_28 - local_30) + 5;
    FUN_ram_40044f1c(_DAT_ram_3006ada8,(local_30 - iStack_20) + -2,(iStack_2c - iStack_1c) + -2);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    FUN_ram_40044faa(_DAT_ram_3006ada8,iVar2,iVar1);
    FUN_ram_40043aac(_DAT_ram_3006ada8,1);
  }
  return;
}


/* NanoCore 1.11, address 0x4001aeec.
 * REA evidence: ev_3aa470a5f9b20725da708d934e286309dc5966ead5589d2b63cb2f861a65ec87
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001aeec(void)

{
  int iVar1;
  
  if ((_DAT_ram_3006ad84 != 0) && (_DAT_ram_3006aac8 != 0)) {
    FUN_ram_400487fc(_DAT_ram_3006ad84,0xc1,0);
    FUN_ram_40044faa(_DAT_ram_3006ad84,0x200007d1);
    FUN_ram_40045f80(_DAT_ram_3006ad84);
    FUN_ram_40045fc6(_DAT_ram_3006ad84,_DAT_ram_3006aac8,0x14,8,0);
    iVar1 = 0;
    do {
      if (*(int *)(&DAT_ram_3006ad88 + iVar1 * 4) != 0) {
        FUN_ram_400487fc(*(int *)(&DAT_ram_3006ad88 + iVar1 * 4),0xc1,0);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 8);
    FUN_ram_40017732(_DAT_ram_3006ad84,&DAT_ram_3006ad88);
  }
  FUN_ram_4001ae36();
  return;
}


/* NanoCore 1.11, address 0x4001af80.
 * REA evidence: ev_6f5270a42a4f6f6f6c82efbcd2742a0a5338eb4a941e1475a4d25953f490dda3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001af80(uint param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  ulonglong uVar6;
  
  FUN_ram_4000504c(param_3,0,0x14);
  *param_3 = 0;
  if ((7 < param_1) || (iVar5 = *(int *)(&DAT_ram_40095398 + param_1 * 4), iVar5 == 0)) {
    return 0;
  }
  iVar3 = FUN_ram_4000521c(iVar5,&DAT_ram_40095018);
  if (iVar3 == 0) {
    if (*(char *)(param_1 + 0x3006af14) != '\b') {
      return 0;
    }
    if (param_2 != 0) {
      return 0;
    }
    *param_3 = 1;
    *(ulonglong *)(param_3 + 1) = (ulonglong)DAT_ram_4009527c;
    uVar1 = DAT_ram_40095280;
  }
  else {
    iVar3 = FUN_ram_4000521c(iVar5,s_delay_ram_40095020);
    if (iVar3 == 0) {
      bVar2 = *(byte *)(param_1 + 0x3006af14);
      if (7 < bVar2) {
        return 0;
      }
      if (bVar2 == 3) {
        if (param_2 != 2) {
          return 0;
        }
        uVar6 = (ulonglong)DAT_ram_4009527c;
        *param_3 = 2;
        *(ulonglong *)(param_3 + 1) = uVar6;
        uVar6 = (ulonglong)DAT_ram_40095280;
        param_3[3] = 0x400952e4;
        *(ulonglong *)(param_3 + 2) = uVar6;
        uVar4 = 0x1c;
      }
      else {
        if (bVar2 != 5) {
          return 0;
        }
        if (param_2 != 2) {
          return 0;
        }
        uVar6 = (ulonglong)DAT_ram_40094e88;
        *param_3 = 2;
        *(ulonglong *)(param_3 + 1) = uVar6;
        uVar6 = (ulonglong)DAT_ram_40094eb0;
        param_3[3] = &DAT_ram_40095354;
        *(ulonglong *)(param_3 + 2) = uVar6;
        uVar4 = 0x11;
      }
      *(undefined1 *)(param_3 + 4) = uVar4;
      return 1;
    }
    iVar5 = FUN_ram_4000521c(iVar5,&DAT_ram_40095028);
    uVar1 = DAT_ram_40094614;
    if (iVar5 != 0) {
      return 0;
    }
    if (1 < (byte)(*(char *)(param_1 + 0x3006af14) - 3U)) {
      return 0;
    }
    if (param_2 != 2) {
      return 0;
    }
    *param_3 = 1;
    param_3[1] = 0;
  }
  *(ulonglong *)(param_3 + 2) = (ulonglong)uVar1;
  return 1;
}


