/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40020000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4002032c.
 * REA evidence: ev_c5681a9515ee31692dd3742bb3baf371fdd4fc94a606db085bb1d848a3f3b7b2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002032c(void)

{
  DAT_ram_3006b21c = 0;
  if (_DAT_ram_3006b2b4 != 0) {
    FUN_ram_40043fd6(_DAT_ram_3006b2b4,1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40020346.
 * REA evidence: ev_4181637b6dfb3c8dce77e0d349c52c6192621c45d6753408575e4eddf082557e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40020346(void)

{
  return DAT_ram_3006b21c;
}


/* NanoCore 1.11, address 0x40020350.
 * REA evidence: ev_edc9af6844ce082f7f8c519c644e69f1883b809c653f4da71bf6dbdd13e2f4a2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020350(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = _DAT_ram_3006b4b0;
  if ((DAT_ram_3006b21c == '\0') || (param_1 == 0)) {
    return;
  }
  if (DAT_ram_3006b2b8 == '\0') {
    _DAT_ram_3006b4b0 = param_1 + _DAT_ram_3006b4b0;
    if (_DAT_ram_3006b4b0 < 0) {
      _DAT_ram_3006b4b0 = 0;
    }
    else if (5 < _DAT_ram_3006b4b0) {
      _DAT_ram_3006b4b0 = 5;
    }
    if (_DAT_ram_3006b4b0 == iVar1) {
      return;
    }
  }
  else {
    if (_DAT_ram_3006b2bc == 0) {
      iVar1 = FUN_ram_40022428();
      thunk_FUN_ram_40022436(0 < param_1);
      FUN_ram_4001f1a8();
      iVar2 = FUN_ram_40022428();
      if ((iVar1 != 0) == (iVar2 != 0)) goto LAB_ram_400203ce;
    }
    else {
      if (_DAT_ram_3006b2bc == 1) {
        iVar1 = FUN_ram_40022516();
        iVar2 = thunk_FUN_ram_40022516();
        thunk_FUN_ram_4002252a(iVar2 + param_1);
        FUN_ram_4001f1d2();
        iVar2 = FUN_ram_40022516();
      }
      else if (_DAT_ram_3006b2bc == 2) {
        iVar1 = FUN_ram_40022596();
        iVar2 = thunk_FUN_ram_40024d06(0x3006b528,2,param_1);
        FUN_ram_400225aa(iVar2 + iVar1);
        FUN_ram_4001f254();
        iVar2 = FUN_ram_40022596();
      }
      else if (_DAT_ram_3006b2bc == 3) {
        iVar1 = FUN_ram_4002260c();
        iVar2 = thunk_FUN_ram_40024d06(0x3006b528,3,param_1);
        FUN_ram_40022620(iVar2 + iVar1);
        FUN_ram_4001f294();
        iVar2 = FUN_ram_4002260c();
      }
      else {
        if (_DAT_ram_3006b2bc != 4) goto LAB_ram_400203ce;
        iVar1 = FUN_ram_400224bc();
        uVar3 = FUN_ram_400224bc();
        if (0x10 < uVar3) {
          uVar3 = 0;
        }
        param_1 = uVar3 + param_1;
        if (param_1 < 0x11) {
          if (param_1 < 0) {
            param_1 = 0;
          }
        }
        else {
          param_1 = 0x10;
        }
        FUN_ram_400224ce(param_1);
        FUN_ram_4001f2d4();
        iVar2 = FUN_ram_400224bc();
      }
      if (iVar2 == iVar1) goto LAB_ram_400203ce;
    }
    FUN_ram_40013fa2();
  }
LAB_ram_400203ce:
  FUN_ram_4001fd72();
  return;
}


/* NanoCore 1.11, address 0x400204a2.
 * REA evidence: ev_959fb31a1b605ac3ceedc6515dcc089ad3933c2336351f242dbf71f56f81abcc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400204a2(void)

{
  if (DAT_ram_3006b21c == '\0') {
    return 0;
  }
  if (DAT_ram_3006b2b8 == '\0') {
    if (_DAT_ram_3006b4b0 == 0) {
      DAT_ram_3006b2b8 = 1;
      _DAT_ram_3006b2bc = 0;
    }
    else {
      if (3 < _DAT_ram_3006b4b0 - 1U) {
        return 0;
      }
      DAT_ram_3006b2b8 = 1;
      _DAT_ram_3006b2bc = _DAT_ram_3006b4b0;
    }
  }
  else {
    DAT_ram_3006b2b8 = 0;
  }
  FUN_ram_4001fd72();
  return 0;
}


/* NanoCore 1.11, address 0x4002050a.
 * REA evidence: ev_3d157e8b40f8c5cee97b021735161b567899994fa78c52b035b358bbf0d7be92
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002050a(void)

{
  if (_DAT_ram_3006b2b4 != 0) {
    FUN_ram_4004cfba(0x3006b224);
    FUN_ram_4001fb40();
    FUN_ram_4001fd72();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40020532.
 * REA evidence: ev_92846315820e0cd6fd3f3077a79f5def54b161da64f635ba9cc86501d041591a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020532(void)

{
  if (_DAT_ram_3006b2b4 == 0) {
    return;
  }
  FUN_ram_4001f1a8();
  FUN_ram_4001f1d2();
  FUN_ram_4001f254();
  FUN_ram_4001f294();
  FUN_ram_4001f2d4();
  FUN_ram_4001f212();
  if (DAT_ram_3006b21c != '\0') {
    FUN_ram_4001fd72();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40020572.
 * REA evidence: ev_61e630fc96603dc59580607915ec1986dd99cc623cce17eb23eca3e93c6cf84d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020572(void)

{
  if (_DAT_ram_3006b2b4 != 0) {
    _DAT_ram_3006b4b0 = 0;
    DAT_ram_3006b2b8 = 0;
    thunk_FUN_ram_40024cf8(0x3006b528);
    DAT_ram_3006b21c = 1;
    if (_DAT_ram_3006b2b4 != 0) {
      FUN_ram_40043aac(_DAT_ram_3006b2b4,1);
    }
    FUN_ram_40020532();
    FUN_ram_4001fd72();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400205ca.
 * REA evidence: ev_f94f99cbf5ee6018a5290affaa59d71b522c6ec5e06a3422039945ad8ad99a44
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400205ca(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = _DAT_ram_3006b538;
  if (_DAT_ram_3006b5d8 != 0) {
    FUN_ram_40017936(_DAT_ram_3006b5d8,0x3006b608,_DAT_ram_3006b538 != 0);
    if (iVar1 != 0) {
      FUN_ram_400489e6(_DAT_ram_3006b5d8,iVar1,0);
      iVar3 = 0;
      do {
        iVar2 = *(int *)(iVar3 * 4 + 0x3006b608);
        if (iVar2 != 0) {
          FUN_ram_400489e6(iVar2,iVar1,0);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 8);
      FUN_ram_40044f70(_DAT_ram_3006b5d8,*(undefined4 *)(iVar1 + 0xc));
      FUN_ram_40045fc6(_DAT_ram_3006b5d8,_DAT_ram_3006b580,0x14,8,0);
      FUN_ram_40017732(_DAT_ram_3006b5d8,0x3006b608);
      FUN_ram_400177a6(_DAT_ram_3006b5d8,0x3006b608,&DAT_ram_3006b5dc);
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40020686.
 * REA evidence: ev_2214bce95726ce215b0b4cccd46a19d8fa59daf3a0d8c5f52b06fc8e89a140fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020686(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  FUN_ram_4002c970(&DAT_ram_3006b5dc,0x29,pcVar1,10);
  FUN_ram_400177a6(_DAT_ram_3006b5d8,0x3006b608,&DAT_ram_3006b5dc);
  return;
}


/* NanoCore 1.11, address 0x400206c8.
 * REA evidence: ev_86dc802c9ec4764963c79003ddcf79d5d915d1599509c51456babdc5123d437c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400206c8(void)

{
  if (DAT_ram_3006b584 == '\0') {
    DAT_ram_3006b594 = 0;
  }
  else {
    FUN_ram_40016c5e(&DAT_ram_3006b594,0x40);
  }
  FUN_ram_40016e8a(_DAT_ram_3006b580,&DAT_ram_3006b594);
  FUN_ram_40016e8a(_DAT_ram_3006b53c,&DAT_ram_3006b540);
  return;
}


/* NanoCore 1.11, address 0x40020720.
 * REA evidence: ev_f9bca9cfcbc97b5dc9f86f68ebb8395c533624ffe421578ff55c0c4ad3c36ee7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40020720(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_ram_3006b580;
  if ((((param_1 != 0) && (iVar1 = _DAT_ram_3006b53c, param_1 != 1)) || (iVar1 == 0)) ||
     (iVar2 = FUN_ram_40043b92(iVar1,1), iVar2 != 0)) {
    iVar1 = 0;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4002075a.
 * REA evidence: ev_422406180f319cbd023d5acc152db8762d6006619feaccfbd3b21fc6181bff9f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002075a(void)

{
  bool bVar1;
  undefined3 uVar2;
  int iVar3;
  
  iVar3 = FUN_ram_40020720(_DAT_ram_3006b5d4);
  if (iVar3 == 0) {
    bVar1 = _DAT_ram_3006b5d4 == 0;
    iVar3 = FUN_ram_40020720((uint)bVar1);
    if (iVar3 != 0) {
      _DAT_ram_3006b5d4 = (uint)bVar1;
    }
  }
  FUN_ram_40017d52();
  uVar2 = FUN_ram_40016cb8(0);
  FUN_ram_40017ede(uVar2);
  return;
}


/* NanoCore 1.11, address 0x400207ae.
 * REA evidence: ev_b51025b3b5e66ee1e5def02c45141afaae1453af759cdca5dbcd376bf3b06da2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400207ae(undefined4 param_1)

{
  _DAT_ram_3006b538 = 0;
  DAT_ram_3006b530 = 0;
  _DAT_ram_3006b5d4 = 0;
  DAT_ram_3006b584 = 0;
  DAT_ram_3006b5dc = 0;
  _DAT_ram_3006b606 = 0;
  FUN_ram_40016c5e(&DAT_ram_3006b540,0x40,&DAT_ram_40095400);
  _DAT_ram_3006b534 = FUN_ram_40043a8c(param_1);
  FUN_ram_40044faa(_DAT_ram_3006b534,0x140,0xf0);
  FUN_ram_400488f8(_DAT_ram_3006b534,0,0);
  FUN_ram_40048936(_DAT_ram_3006b534,0,0);
  FUN_ram_40043fd6(_DAT_ram_3006b534,1);
  _DAT_ram_3006b580 = FUN_ram_40056f7e(_DAT_ram_3006b534);
  FUN_ram_40057550(_DAT_ram_3006b580,0xb);
  FUN_ram_40044f1c(_DAT_ram_3006b580,8,8);
  FUN_ram_40044faa(_DAT_ram_3006b580,0x26,0x26);
  _DAT_ram_3006b5d8 = FUN_ram_40057bac(_DAT_ram_3006b534);
  FUN_ram_4005826c(_DAT_ram_3006b5d8,1);
  FUN_ram_40044faa(_DAT_ram_3006b5d8,0xb4,0x1c);
  FUN_ram_40045fc6(_DAT_ram_3006b5d8,_DAT_ram_3006b580,0x14,8,0);
  FUN_ram_4001761e(_DAT_ram_3006b534,_DAT_ram_3006b5d8,0x3006b608,1);
  _DAT_ram_3006b53c = FUN_ram_40056f7e(_DAT_ram_3006b534);
  FUN_ram_40057550(_DAT_ram_3006b53c,0xb);
  FUN_ram_40044faa(_DAT_ram_3006b53c,0x46,0x1e);
  FUN_ram_40044f1c(_DAT_ram_3006b53c,0xf2,0xf);
  _DAT_ram_3006b538 = FUN_ram_4001e4a6();
  FUN_ram_400205ca();
  return;
}


/* NanoCore 1.11, address 0x400208fe.
 * REA evidence: ev_5caced94a6f8f55f0e2bce603d760e61630f5edafae0a5b5608b5849346c8efd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400208fe(void)

{
  DAT_ram_3006b530 = 0;
  if (_DAT_ram_3006b534 != 0) {
    FUN_ram_40043fd6(_DAT_ram_3006b534,1);
  }
  FUN_ram_40017d52(0);
  return;
}


/* NanoCore 1.11, address 0x40020928.
 * REA evidence: ev_02f28fac4e506e4458680664522ee97930f6421cbf855b4e37ada12635242086
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40020928(void)

{
  return DAT_ram_3006b530;
}


/* NanoCore 1.11, address 0x40020932.
 * REA evidence: ev_c985d1ea7d31510eb9467ae8eaf8acddcc875209bb4cd65ee041f37f6795b0b1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020932(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if ((DAT_ram_3006b530 == '\0') || (param_1 == 0)) {
    return;
  }
  bVar1 = 0;
  if (_DAT_ram_3006b580 != 0) {
    bVar1 = FUN_ram_40043b92(_DAT_ram_3006b580,1);
    bVar1 = bVar1 ^ 1;
  }
  if (((_DAT_ram_3006b53c != 0) && (iVar2 = FUN_ram_40043b92(_DAT_ram_3006b53c,1), bVar1 != 0)) &&
     (iVar2 == 0)) {
    _DAT_ram_3006b5d4 = _DAT_ram_3006b5d4 + param_1;
    if (_DAT_ram_3006b5d4 < 1) {
      if (_DAT_ram_3006b5d4 < 0) {
        _DAT_ram_3006b5d4 = 0;
      }
    }
    else {
      _DAT_ram_3006b5d4 = 1;
    }
    FUN_ram_4002075a();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400209aa.
 * REA evidence: ev_5813b5ce3aad7db25c8a072c5aebf2a0d3f0e5ed3a80722b7bf9d1319679c3de
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_400209aa(void)

{
  return DAT_ram_3006b530 != '\0' && _DAT_ram_3006b5d4 == 1;
}


/* NanoCore 1.11, address 0x400209c4.
 * REA evidence: ev_c25937608e2b2b8e6d97475844c0a54ff1a6ab9eb284cfd7a2de71d75c983884
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400209c4(void)

{
  if (_DAT_ram_3006b534 == 0) {
    return;
  }
  if (DAT_ram_3006b540 == '\0') {
    FUN_ram_40016c5e(&DAT_ram_3006b540,0x40,&DAT_ram_40095400);
  }
  if (DAT_ram_3006b594 != '\0') {
    FUN_ram_4004cfba();
  }
  FUN_ram_4004cfba(&DAT_ram_3006b540);
  _DAT_ram_3006b538 = FUN_ram_4001e4a6();
  FUN_ram_400205ca();
  if (DAT_ram_3006b530 != '\0') {
    if (_DAT_ram_3006b606 != 0) {
      FUN_ram_4002c834();
      FUN_ram_40020686();
    }
    FUN_ram_400206c8();
    FUN_ram_4002075a();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40020a4e.
 * REA evidence: ev_a459157037e42b9c38e31ee5607fa83de098f2dd4c99ebcf18fce84438cae6e2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40020a4e(void)

{
  if (DAT_ram_30049dfc != DAT_ram_30049df8) {
    FUN_ram_40029836(DAT_ram_30049dfc & 0xffff);
    DAT_ram_30049df8 = DAT_ram_30049dfc;
  }
  return;
}


/* NanoCore 1.11, address 0x40020a84.
 * REA evidence: ev_8e21c416676b2bcd38bd9f27d2e1a3bec6db363ec26d7268459c6a6638d84951
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020a84(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (_DAT_ram_3006b7f4 == 0) {
    return;
  }
  if (_DAT_ram_3006b6c8 < 0.0) {
    fVar1 = _DAT_ram_3006b6c8 - DAT_ram_40094634;
  }
  else {
    fVar1 = _DAT_ram_3006b6c8 + DAT_ram_40094634;
  }
  iVar4 = (int)fVar1;
  iVar2 = _DAT_ram_3006b6d0;
  if ((_DAT_ram_3006b6d0 <= iVar4) && (iVar2 = iVar4, _DAT_ram_3006b6cc <= iVar4)) {
    iVar2 = _DAT_ram_3006b6cc;
  }
  FUN_ram_40044f1c(_DAT_ram_3006b7f4,iVar2,_DAT_ram_3006b838);
  uVar3 = 0xff;
  if (param_1 == 0) {
    uVar3 = 0x4c;
  }
  FUN_ram_400489a6(_DAT_ram_3006b7f4,uVar3,0);
  return;
}


/* NanoCore 1.11, address 0x40020b10.
 * REA evidence: ev_415eb50c81f06896133826e4aa904e1f1e18819244244d528b59cbc37b8dfb07
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020b10(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  
  cVar1 = DAT_ram_3006b628;
  if (DAT_ram_3006b628 == '\0') {
    return;
  }
  if (_DAT_ram_3006b6d8 == 0) {
    return;
  }
  FUN_ram_40020a4e();
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_ram_40029870(&uStack_1c);
  if ((char)uStack_14 == '\0') {
    cVar1 = '\0';
    _DAT_ram_3006b6d4 = (ulonglong)(uint)(float)_DAT_ram_3006b6c4;
  }
  else {
    uVar3 = (uint)uStack_18._2_2_;
    _DAT_ram_3006b6d4 = (ulonglong)(uint)(float)_DAT_ram_3006b6c4;
    if (5 < ((uVar3 ^ (int)uVar3 >> 0xf) - ((int)uVar3 >> 0xf) & 0xffff)) {
      if ((int)uVar3 < -0x32) {
        uVar3 = 0xffffffce;
      }
      if (0x32 < (int)uVar3) {
        uVar3 = 0x32;
      }
      _DAT_ram_3006b6d4 =
           (ulonglong)
           (uint)(((float)(int)uVar3 / DAT_ram_40095450) * (float)_DAT_ram_3006b6c0 +
                 (float)_DAT_ram_3006b6c4);
    }
  }
  _DAT_ram_3006b6c8 =
       (ulonglong)
       (uint)(((float)_DAT_ram_3006b6d4 - (float)_DAT_ram_3006b6c8) * DAT_ram_40095454 +
             (float)_DAT_ram_3006b6c8);
  FUN_ram_40020a84(cVar1);
  if ((uStack_14 & 0xff) != 0) {
    if ((byte)uStack_18 < 0xc) {
      pcVar2 = (&PTR_DAT_ram_4009542c_ram_4009545c)[(char)(byte)uStack_18];
      goto LAB_ram_40020b9e;
    }
  }
  pcVar2 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
LAB_ram_40020b9e:
  FUN_ram_400177a6(_DAT_ram_3006b6d8,0x3006b6dc,pcVar2);
  return;
}


/* NanoCore 1.11, address 0x40020c22.
 * REA evidence: ev_098f2e76e1c0969f836e7ba7b6ecc6a894a3e411803dffa17031b1a5640733c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020c22(void)

{
  FUN_ram_400055da(0x3006b7a0,8,&DAT_ram_4009516c,DAT_ram_30049dfc);
  FUN_ram_400177a6(_DAT_ram_3006b77c,0x3006b780,0x3006b7a0);
  if (_DAT_ram_3006b77c != 0) {
    FUN_ram_40044f36(_DAT_ram_3006b77c,0x200007d1);
    FUN_ram_40017732(_DAT_ram_3006b77c,0x3006b780);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40020c90.
 * REA evidence: ev_fd73f1cfbd0c09b31f4472df46aa7e0c06f013fe64b30a71af9472791b0698f1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020c90(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar2 = _DAT_ram_3006b678;
  bVar1 = _DAT_ram_3006b678 != 0;
  uVar3 = 0;
  if (_DAT_ram_3006b678 != 0) {
    uVar3 = FUN_ram_4002c386();
  }
  FUN_ram_40017936(_DAT_ram_3006b77c,0x3006b780,bVar1);
  FUN_ram_40017936(_DAT_ram_3006b6d8,0x3006b6dc,bVar1);
  FUN_ram_4001792e(0x3006b780,uVar3 & 1);
  FUN_ram_4001792e(0x3006b6dc,uVar3 & 1);
  if (((iVar2 != 0) && (_DAT_ram_3006b77c != 0)) && (_DAT_ram_3006b6d8 != 0)) {
    FUN_ram_400489e6(_DAT_ram_3006b77c,iVar2,0);
    iVar5 = 0;
    do {
      iVar4 = *(int *)(iVar5 * 4 + 0x3006b780);
      if (iVar4 != 0) {
        FUN_ram_400489e6(iVar4,iVar2,0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    FUN_ram_40044f36(_DAT_ram_3006b77c,0x200007d1);
    FUN_ram_40044f70(_DAT_ram_3006b77c,uVar6);
    FUN_ram_40045fc6(_DAT_ram_3006b77c,_DAT_ram_3006b67c,0x14,8,0);
    iVar5 = 0;
    FUN_ram_40017732(_DAT_ram_3006b77c,0x3006b780);
    FUN_ram_400489e6(_DAT_ram_3006b6d8,iVar2,0);
    do {
      iVar4 = *(int *)(iVar5 * 4 + 0x3006b6dc);
      if (iVar4 != 0) {
        FUN_ram_400489e6(iVar4,iVar2,0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 8);
    FUN_ram_40044f70(_DAT_ram_3006b6d8,uVar6);
    FUN_ram_40045fc6(_DAT_ram_3006b6d8,_DAT_ram_3006b7f4,0xe,0,6);
    FUN_ram_40017732(_DAT_ram_3006b6d8,0x3006b6dc);
    FUN_ram_40020c22();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40020dfe.
 * REA evidence: ev_0a972a678372524db09844405cad6c7918e897576879299d07dfab2b4cc911ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020dfe(void)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3006b678;
  if (_DAT_ram_3006b678 != 0) {
    _DAT_ram_3006b678 = 0;
    FUN_ram_40020c90();
    FUN_ram_4005a1be(iVar1);
  }
  _DAT_ram_3006b678 = FUN_ram_40017ac2(s_font_tuner_ram_40094fe0,s_font_default_ram_40094fc4);
  FUN_ram_40020c90();
  return;
}


/* NanoCore 1.11, address 0x40020e44.
 * REA evidence: ev_e51380a3d32f38bff69df8093b150c602a269e25d9cf1e9794dbd02a3001f512
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020e44(void)

{
  undefined4 uVar1;
  
  uVar1 = 0x3006b73c;
  if (DAT_ram_30049e00 == '\0') {
    uVar1 = 0x3006b6fc;
  }
  FUN_ram_40016e8a(_DAT_ram_3006b7ac,uVar1);
  return;
}


/* NanoCore 1.11, address 0x40020e6a.
 * REA evidence: ev_11a2b9467b2438001539273beff4d678bddbf152f071a0ff18771a7e964e3724
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020e6a(void)

{
  int iVar1;
  int iVar2;
  uint uStack_18;
  uint auStack_14 [2];
  
  uStack_18 = FUN_ram_40014984();
  iVar1 = FUN_ram_4002c4e4(1);
  iVar2 = FUN_ram_4002c502(1,auStack_14);
  if (iVar2 != 0) {
    uStack_18 = auStack_14[0];
  }
  uStack_18 = uStack_18 & 0xffffff;
  if (_DAT_ram_3006b670 != 0) {
    FUN_ram_400488da(_DAT_ram_3006b670,uStack_18,0);
    FUN_ram_400488f8(_DAT_ram_3006b670,0xff,0);
  }
  if (_DAT_ram_3006b62c != 0) {
    if (iVar1 == 0) {
      FUN_ram_40043fd6(_DAT_ram_3006b62c,1);
    }
    else {
      FUN_ram_40016e8a(_DAT_ram_3006b62c,0x3006b630);
    }
  }
  FUN_ram_40016e8a(_DAT_ram_3006b67c,0x3006b680);
  FUN_ram_40020e44();
  FUN_ram_40016e8a(_DAT_ram_3006b7b0,0x3006b7b4);
  FUN_ram_40016e8a(_DAT_ram_3006b7f4,0x3006b7f8);
  return;
}


/* NanoCore 1.11, address 0x40020f1e.
 * REA evidence: ev_3395266ed8506980c15e8e6c4466d58ecb23e8899fd70f59b23b2cbbfcead106
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020f1e(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined3 uVar3;
  int iVar4;
  undefined4 uStack_24;
  
  if ((((_DAT_ram_3006b7a8 != 1) || (_DAT_ram_3006b7ac == 0)) ||
      (iVar4 = FUN_ram_40043b92(_DAT_ram_3006b7ac,1), iVar2 = _DAT_ram_3006b7ac, iVar4 != 0)) &&
     ((_DAT_ram_3006b77c == 0 ||
      (iVar4 = FUN_ram_40043b92(_DAT_ram_3006b77c,1), iVar2 = _DAT_ram_3006b77c, iVar4 != 0)))) {
    iVar2 = 0;
  }
  uVar1 = (undefined1)((uint)uStack_24 >> 0x18);
  if ((DAT_ram_3006b674 == '\0') || (_DAT_ram_3006b7a8 != 0)) {
    uVar3 = FUN_ram_40016c6c();
    uStack_24 = CONCAT13(uVar1,uVar3);
  }
  else {
    uStack_24 = CONCAT13(uVar1,0xff0000);
  }
  if (_DAT_ram_3006b77c != 0) {
    FUN_ram_400489b6(_DAT_ram_3006b77c,uStack_24,0);
  }
  FUN_ram_40017d52(iVar2);
  uVar3 = FUN_ram_40016cb8(DAT_ram_3006b674);
  uStack_24 = CONCAT13(uStack_24._3_1_,uVar3);
  FUN_ram_40017ede(uStack_24);
  return;
}


/* NanoCore 1.11, address 0x40020fe6.
 * REA evidence: ev_90b45eee8543b8badbc700b3753cad1629b59c4df4a644a498a522106a8f8ab4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020fe6(void)

{
  _DAT_ram_3006b6c8 = (ulonglong)(uint)(float)_DAT_ram_3006b6c4;
  _DAT_ram_3006b6d4 = _DAT_ram_3006b6c8;
  FUN_ram_40020a84(0);
  return;
}


