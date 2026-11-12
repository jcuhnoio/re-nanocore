/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40018000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40018040.
 * REA evidence: ev_f040774be7f1d6ff9ab7aa56b69546cede8faa2624df2a7f25b58570e8a7c66c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40018040(int param_1,uint param_2)

{
  int iVar1;
  uint uStack_1c;
  byte local_18 [12];
  
  uStack_1c = 0;
  if ((param_1 != 0) && (7 < param_2)) {
    FUN_ram_40022a9a();
    FUN_ram_40022a6a(local_18,8,&uStack_1c);
    if (7 < uStack_1c) {
      iVar1 = 0;
      do {
        *(uint *)(&DAT_ram_30069b58 + iVar1 * 4) = (uint)local_18[iVar1];
        iVar1 = iVar1 + 1;
      } while (iVar1 != 8);
      FUN_ram_40017fd4();
      FUN_ram_4001a51e();
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40018094.
 * REA evidence: ev_5deae4510791738be1a234a6476ade61227ee400f992aa6b2165f398ba932c37
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018094(void)

{
  int iVar1;
  byte abStack_11 [13];
  
  iVar1 = FUN_ram_40014e48(abStack_11);
  if (iVar1 == 0) {
    _DAT_ram_3006a394 = (uint)abStack_11[0];
    FUN_ram_40017c92();
  }
  FUN_ram_40016ce6();
  FUN_ram_40017fbc();
  return;
}


/* NanoCore 1.11, address 0x400180c0.
 * REA evidence: ev_6f14ee60ed5152d0384dfecc7c1dcd4f46245e6a994e1867626b5255cbaba1dc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400180c0(undefined1 param_1)

{
  int iVar1;
  undefined1 auStack_11 [9];
  
  FUN_ram_40017cda();
  iVar1 = FUN_ram_40014dea(param_1);
  if (iVar1 == 0) {
    auStack_11[0] = param_1;
    FUN_ram_40013eec(0x60,auStack_11,1);
    return;
  }
  FUN_ram_40018094();
  return;
}


/* NanoCore 1.11, address 0x400180fc.
 * REA evidence: ev_87557ed246b8cd1f8411b2098c707e10bce2253fcbc6ece4f8fa45784ecced47
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400180fc(void)

{
  int iVar1;
  
  iVar1 = DAT_ram_30049da8;
  FUN_ram_40016368();
  if (-1 < iVar1) {
    FUN_ram_400180c0();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40018122.
 * REA evidence: ev_38dac07b7dc938b879bfa8178b318387aa43aca9992eb51b46b05ab516d75187
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018122(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = _DAT_ram_3006a3e8;
  if (_DAT_ram_3006a3e8 == 3) {
    piVar2 = (int *)&DAT_ram_3006a348;
LAB_ram_40018140:
    if ((*piVar2 == 0) || (iVar3 = FUN_ram_40043b92(*piVar2,1), iVar3 != 0)) {
LAB_ram_40018144:
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar2;
    }
  }
  else {
    piVar2 = (int *)&DAT_ram_3006a304;
    if (_DAT_ram_3006a3e8 == 4) goto LAB_ram_40018140;
    if (((0xd < _DAT_ram_3006a3e8) || (*(int *)(&DAT_ram_30069f8c + _DAT_ram_3006a3e8 * 4) == 0)) ||
       (iVar3 = FUN_ram_40043b92(*(int *)(&DAT_ram_30069f8c + _DAT_ram_3006a3e8 * 4),1), iVar3 != 0)
       ) goto LAB_ram_40018144;
    iVar3 = *(int *)(&DAT_ram_30069f8c + uVar1 * 4);
  }
  if (_DAT_ram_3006a40c != iVar3) {
    _DAT_ram_3006a40c = iVar3;
  }
  if (uVar1 == 3) {
LAB_ram_4001815c:
    if (DAT_ram_3006a398 != '\0') {
      DAT_ram_3006a398 = '\0';
    }
    if (uVar1 == 5) goto LAB_ram_400181d4;
  }
  else {
    if (DAT_ram_3006a2fc != '\0') {
      FUN_ram_400180fc();
      DAT_ram_3006a2fc = '\0';
      FUN_ram_40016ce6();
    }
    if (uVar1 != 4) goto LAB_ram_4001815c;
  }
  if (DAT_ram_3006a4a0 != '\0') {
    DAT_ram_3006a4a0 = '\0';
  }
LAB_ram_400181d4:
  FUN_ram_40016ce6();
  return;
}


/* NanoCore 1.11, address 0x400181f4.
 * REA evidence: ev_b98735766912b900390442c18df05e630f93164d6bd7aa94e84d3ab657e42887
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400181f4(void)

{
  int iVar1;
  byte abStack_11 [13];
  
  abStack_11[0] = 0;
  FUN_ram_400180fc();
  iVar1 = FUN_ram_4003223a(abStack_11);
  if (iVar1 == 0) {
    if (0x3f < abStack_11[0]) {
      abStack_11[0] = 0x3f;
    }
  }
  else {
    abStack_11[0] = 0;
  }
  iVar1 = FUN_ram_40015022(abStack_11[0]);
  if (iVar1 == 0) {
    FUN_ram_40016a64();
  }
  return;
}


/* NanoCore 1.11, address 0x40018234.
 * REA evidence: ev_122d7a89f03acb95d635a83d48c502eec7cac72134dde8e2e0bca9e01782a98c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018234(void)

{
  int iVar1;
  
  iVar1 = DAT_ram_30049da8;
  DAT_ram_30049da8 = 0xffffffff;
  _DAT_ram_3006a2f0 = 0;
  if (-1 < iVar1) {
    FUN_ram_400180c0();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40018254.
 * REA evidence: ev_dca28b1b44fed66179e9b2e07065cdf11ded6449a1bead65996105d11de3d7d2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018254(void)

{
  if (_DAT_ram_3006a3e4 != 0) {
    FUN_ram_4004c61a();
    _DAT_ram_3006a3e4 = 0;
  }
  if (_DAT_ram_3006a3a0 != 0) {
    FUN_ram_40043fd6(_DAT_ram_3006a3a0,1);
  }
  if (DAT_ram_30049da3 != '\0') {
    FUN_ram_40017fbc();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4001829a.
 * REA evidence: ev_fe38e740862c93cad1fdcc636feac74d65b6226e3da229b74579375167286d8c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001829a(int param_1)

{
  int iVar1;
  int iVar2;
  
  DAT_ram_30049da3 = (undefined1)param_1;
  iVar1 = 0;
  do {
    iVar2 = *(int *)(&DAT_ram_30069f8c + iVar1 * 4);
    if (iVar2 != 0) {
      if ((param_1 == 0) || (DAT_ram_30069a50 == '\0')) {
        FUN_ram_40043fd6(iVar2,1);
      }
      else {
        FUN_ram_40016f46(iVar2,iVar1);
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xe);
  FUN_ram_400173bc(param_1);
  FUN_ram_400174fa(param_1);
  if (param_1 != 0) {
    FUN_ram_4002808e(0x3006a00c);
    if (_DAT_ram_3006a49c != 0) {
      FUN_ram_40043fd6(_DAT_ram_3006a49c,1);
    }
    FUN_ram_40016394();
    FUN_ram_40017970();
    FUN_ram_40016506();
    FUN_ram_40016582();
    FUN_ram_400163d8();
    FUN_ram_40017026();
    FUN_ram_40017fbc();
    return;
  }
  DAT_ram_3006a39a = 0;
  FUN_ram_400162d0();
  DAT_ram_3006a2fc = 0;
  DAT_ram_3006a37c = 0;
  DAT_ram_3006a37e = 0;
  DAT_ram_3006a37d = 0;
  DAT_ram_3006a398 = 0;
  DAT_ram_3006a4a0 = 0;
  FUN_ram_40016ce6();
  FUN_ram_40017a22();
  FUN_ram_40017936(_DAT_ram_3006a348,0x3006a358,0);
  iVar1 = FUN_ram_4001e272();
  if ((((iVar1 == 0) && (iVar1 = FUN_ram_40020928(), iVar1 == 0)) &&
      (iVar1 = FUN_ram_40021408(), iVar1 == 0)) &&
     ((iVar1 = FUN_ram_4001a39a(), iVar1 == 0 && (iVar1 = FUN_ram_40020346(), iVar1 == 0)))) {
    FUN_ram_40017d52();
  }
  FUN_ram_40018254();
  return;
}


/* NanoCore 1.11, address 0x400183ca.
 * REA evidence: ev_7aa4a3ed01ee0e05480fcb6f3c8f911ded2c63bc54f6d20e76ba46ae86c7bda4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400183ca(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4001e272();
  if (iVar1 != 0) {
    FUN_ram_4001e240();
  }
  iVar1 = FUN_ram_40020928();
  if (iVar1 != 0) {
    FUN_ram_400208fe();
  }
  iVar1 = FUN_ram_4001a39a();
  if (iVar1 != 0) {
    FUN_ram_4001a342();
  }
  iVar1 = FUN_ram_40020346();
  if (iVar1 != 0) {
    FUN_ram_4002032c();
  }
  iVar1 = FUN_ram_40021408();
  if (iVar1 == 0) {
    FUN_ram_40021358();
  }
  FUN_ram_4001829a(0);
  return;
}


/* NanoCore 1.11, address 0x4001843a.
 * REA evidence: ev_61cf8b38b8e9f1d9700d3a29a02da98688cd1810b5df468051d0b7359737fc81
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char FUN_ram_4001843a(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = DAT_ram_3006a39a;
  if (DAT_ram_3006a39a == '\0') {
LAB_ram_4001844a:
    cVar1 = '\0';
  }
  else {
    iVar2 = FUN_ram_4001e272();
    if ((((iVar2 == 0) && (iVar2 = FUN_ram_40021408(), iVar2 == 0)) &&
        (iVar2 = FUN_ram_4001a39a(), iVar2 == 0)) &&
       ((iVar2 = FUN_ram_40020346(), iVar2 == 0 && (iVar2 = FUN_ram_40020928(), iVar2 == 0)))) {
      FUN_ram_40017f52();
    }
    else {
      iVar2 = FUN_ram_4001e272();
      if (iVar2 == 0) goto LAB_ram_4001844a;
      FUN_ram_4001e286();
    }
    DAT_ram_3006a39a = '\0';
    FUN_ram_400162d0();
  }
  return cVar1;
}


/* NanoCore 1.11, address 0x40018492.
 * REA evidence: ev_31af1289ebaad17643c03e730c29a2cb425e9cd4cab5d4f05c2e8ef07fa6a8a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018492(void)

{
  int iVar1;
  undefined3 uVar2;
  undefined4 uVar3;
  
  if (_DAT_ram_3006a3ec != 0) {
    FUN_ram_400488f8(_DAT_ram_3006a3ec,0,0);
    iVar1 = _DAT_ram_3006a3ec;
    uVar3 = FUN_ram_4002c654();
    FUN_ram_40048936(iVar1,uVar3,0);
    iVar1 = _DAT_ram_3006a3ec;
    uVar3 = FUN_ram_4002c65e();
    FUN_ram_40048a06(iVar1,uVar3,0);
    DAT_ram_3006a3fc = 0;
    DAT_ram_3006a3f3 = 0;
    uVar2 = FUN_ram_40016cb8(0);
    FUN_ram_40017ede(uVar2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40018510.
 * REA evidence: ev_3b6e248cfecbee0c240959b87da781a341cd8177f5325a4caf022280a7cc5e7e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018510(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  
  FUN_ram_4002bab8();
  FUN_ram_400162e2();
  DAT_ram_30049da4 = 0xffffffff;
  iVar1 = 0;
  FUN_ram_400173bc(0);
  do {
    if (*(int *)(&DAT_ram_30069f8c + iVar1 * 4) != 0) {
      FUN_ram_40043fd6(*(int *)(&DAT_ram_30069f8c + iVar1 * 4),1);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xe);
  iVar1 = 0x30069bc0;
  uVar2 = 0xfffffffd;
  do {
    if (1 < uVar2) {
      FUN_ram_4004cfba(iVar1);
    }
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 0x40;
  } while (uVar2 != 0xb);
  if (DAT_ram_3006a3a4 != '\0') {
    FUN_ram_4004cfba();
  }
  if (DAT_ram_3006a450 != '\0') {
    FUN_ram_4004cfba();
  }
  if (DAT_ram_3006a410 != '\0') {
    FUN_ram_4004cfba();
  }
  if (DAT_ram_30069f4c != '\0') {
    FUN_ram_4004cfba();
  }
  if (DAT_ram_30069fcc != '\0') {
    FUN_ram_4004cfba();
  }
  if (DAT_ram_3006a308 != '\0') {
    FUN_ram_4004cfba();
  }
  if (DAT_ram_30069b80 != '\0') {
    FUN_ram_4004cfba();
  }
  if (DAT_ram_30069aa4 != '\0') {
    FUN_ram_4004cfba();
  }
  if (DAT_ram_30069ae4 != '\0') {
    FUN_ram_4004cfba();
  }
  if (DAT_ram_30069a60 != '\0') {
    FUN_ram_4004cfba();
  }
  pcVar3 = &DAT_ram_3006a028;
  do {
    if (*pcVar3 != '\0') {
      FUN_ram_4004cfba(pcVar3);
    }
    pcVar3 = pcVar3 + 0x40;
  } while (pcVar3 != &DAT_ram_3006a268);
  FUN_ram_4001e46e();
  FUN_ram_4002c264();
  DAT_ram_30069a50 = FUN_ram_400165b4();
  FUN_ram_4002c314();
  FUN_ram_4002c3da();
  FUN_ram_4002c6b0();
  FUN_ram_4002158c();
  FUN_ram_4002c550();
  FUN_ram_40018492();
  FUN_ram_4001757a();
  if (DAT_ram_30069a50 != '\0') {
    FUN_ram_4001686c();
    FUN_ram_400164aa();
    FUN_ram_40018254();
    FUN_ram_40016a2a();
    if ((_DAT_ram_30069f8c == 0) && (_DAT_ram_30069fc4 != 0)) {
      FUN_ram_40016f60();
    }
    piVar4 = (int *)&DAT_ram_30069f8c;
    iVar1 = 0;
    do {
      if (*piVar4 != 0) {
        FUN_ram_40016dc4(*piVar4,iVar1);
        FUN_ram_40016f46(*piVar4,iVar1);
        FUN_ram_40057550(*piVar4,9);
      }
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar1 != 0xe);
    FUN_ram_40016506();
    FUN_ram_4001743a();
    FUN_ram_40016582();
    FUN_ram_400163d8();
    FUN_ram_40017026();
    if (_DAT_ram_30069fc4 != 0) {
      FUN_ram_400454e4();
    }
  }
  FUN_ram_4001e8ea();
  FUN_ram_40017b22();
  FUN_ram_40017b68();
  FUN_ram_40016ce6();
  FUN_ram_400173bc(DAT_ram_30049da3);
  FUN_ram_400209c4();
  FUN_ram_400214f6();
  FUN_ram_4001a54a();
  FUN_ram_4002050a();
  iVar1 = FUN_ram_4001e272();
  if ((((iVar1 == 0) && (iVar1 = FUN_ram_40020928(), iVar1 == 0)) &&
      (iVar1 = FUN_ram_40021408(), iVar1 == 0)) &&
     ((iVar1 = FUN_ram_4001a39a(), iVar1 == 0 && (iVar1 = FUN_ram_40020346(), iVar1 == 0)))) {
    FUN_ram_40017fbc();
    return;
  }
  FUN_ram_4001829a(0);
  return;
}


/* NanoCore 1.11, address 0x4001876c.
 * REA evidence: ev_19b42007a8b3c28fe214a95c871ec8b3f4278e24735db97f2cb010382a2bd26a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001876c(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    FUN_ram_400183ca();
    return;
  }
  iVar1 = FUN_ram_40021408();
  if (iVar1 != 0) {
    FUN_ram_400213d2();
    FUN_ram_4001829a(1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40018790.
 * REA evidence: ev_d4c683d52bc10903bf52935234b5b05761a6a3f65e0e35d32451128b4d86e1c2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018790(void)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char acStack_58 [36];
  
  FUN_ram_40016752();
  FUN_ram_400062ac();
  cVar4 = DAT_ram_3006a2b6;
  uVar3 = _DAT_ram_3006a2b4;
  iVar7 = _DAT_ram_3006a2b0;
  cVar2 = DAT_ram_3006a2ac;
  iVar11 = _DAT_ram_3006a2a8;
  uVar1 = _DAT_ram_3006a2a4;
  iVar9 = _DAT_ram_3006a2a0;
  _DAT_ram_3006a2a4 = 0;
  _DAT_ram_3006a2b0 = 0;
  _DAT_ram_3006a2a0 = 0;
  _DAT_ram_3006a2a8 = 0;
  DAT_ram_3006a2ac = 0;
  DAT_ram_3006a2b6 = 0;
  FUN_ram_400062ce();
  if (uVar1 == 0 && iVar7 == 0) {
    if (cVar4 != '\0') goto LAB_ram_4001883c;
LAB_ram_40018a8c:
    if ((iVar9 < 1) && (iVar11 < 1)) {
LAB_ram_400189ac:
      if (cVar2 == '\0') goto LAB_ram_400189e8;
    }
    if (DAT_ram_3006a39a != '\0') {
LAB_ram_40018a9a:
      FUN_ram_4001843a();
    }
  }
  else {
    _DAT_ram_30069f40 = FUN_ram_400042ea();
    if (cVar4 != '\0') {
LAB_ram_4001883c:
      _DAT_ram_3006a2c0 = uVar3;
      if (uVar3 == 0) {
        if (DAT_ram_3006a2c8 == '\0') {
          FUN_ram_400163b6();
          FUN_ram_40016438(0);
        }
        DAT_ram_3006a2c8 = '\0';
      }
      else {
        FUN_ram_40016236();
        FUN_ram_40016438();
        if ((0x5db < uVar3) && (DAT_ram_3006a2c8 == '\0')) {
          DAT_ram_3006a2c8 = '\x01';
          FUN_ram_40016438(1000);
          FUN_ram_40049d50(0);
          if (_DAT_ram_3006a2cc == 0) {
            _DAT_ram_3006a2cc = FUN_ram_4004c5b4(FUN_ram_400165dc,0x50,0);
          }
        }
      }
    }
    if (iVar7 != 0) {
      uVar6 = FUN_ram_4000deac();
      uVar6 = thunk_FUN_ram_40024e1a(0x30069b78,0,uVar6,iVar7);
      FUN_ram_4000de74();
      FUN_ram_40016582();
      if ((DAT_ram_30049da3 == '\0') && (iVar7 = FUN_ram_40016236(), iVar7 == 0)) {
        FUN_ram_40028010(0x3006a00c,uVar6);
        FUN_ram_40016b6e();
        if (_DAT_ram_3006a498 == 0) {
          _DAT_ram_3006a498 = FUN_ram_4004c5b4(&LAB_ram_40016c5a,0x32,0);
        }
        else {
          FUN_ram_4004c840();
        }
      }
    }
    if (uVar1 == 0) goto LAB_ram_40018a8c;
    uVar8 = FUN_ram_4001e272();
    uVar10 = (int)uVar1 >> 0x1f;
    if (uVar8 == 0) {
      iVar7 = FUN_ram_40021408();
      if (iVar7 == 0) {
        iVar7 = FUN_ram_4001a39a();
        if (iVar7 == 0) {
          iVar7 = FUN_ram_40020346();
          if (iVar7 == 0) {
            iVar7 = FUN_ram_40020928();
            if (iVar7 == 0) {
              if (DAT_ram_3006a4a0 == 0) {
                if (DAT_ram_3006a37e == '\0') {
                  if (DAT_ram_3006a398 != 0) {
                    uVar5 = thunk_FUN_ram_40024e1a(0x30069b78,1,DAT_ram_30049db0,uVar1);
                    FUN_ram_40017bda(uVar5);
                    goto LAB_ram_40018b32;
                  }
                  if (DAT_ram_3006a2fc == 0) {
                    iVar7 = 0;
                    do {
                      if (_DAT_ram_3006a3e8 == *(uint *)(&DAT_ram_3006a268 + iVar7 * 4))
                      goto LAB_ram_40018ca2;
                      iVar7 = iVar7 + 1;
                    } while (iVar7 != 0xe);
                    iVar7 = 0;
LAB_ram_40018ca2:
                    iVar7 = iVar7 + uVar1;
                    if (iVar7 < 0xe) {
                      if (iVar7 < 0) {
                        iVar7 = 0;
                      }
                    }
                    else {
                      iVar7 = 0xd;
                    }
                    uVar8 = *(uint *)(&DAT_ram_3006a268 + iVar7 * 4);
                    if (_DAT_ram_3006a3e8 != uVar8) {
                      _DAT_ram_3006a3e8 = uVar8;
                      if (DAT_ram_30049da3 != '\0') {
                        FUN_ram_40018122();
                      }
                      if ((uVar10 ^ uVar1) - 1 == uVar10) {
                        DAT_ram_3006a399 = '\0';
                      }
                      else {
                        iVar7 = FUN_ram_400166d8();
                        if (iVar7 == 0) goto LAB_ram_40018a8c;
                      }
                      DAT_ram_3006a39a = '\0';
                      FUN_ram_40017f52();
                      if (DAT_ram_3006a399 != '\0') goto LAB_ram_40018918;
                    }
                  }
                  else {
                    _DAT_ram_3006a394 = _DAT_ram_3006a394 + uVar1;
                    if ((int)_DAT_ram_3006a394 < 0) {
                      _DAT_ram_3006a394 = 0;
                    }
                    else if (0x3f < (int)_DAT_ram_3006a394) {
                      _DAT_ram_3006a394 = 0x3f;
                    }
                    if (-1 < (int)_DAT_ram_3006a394) {
                      DAT_ram_30049da8 = _DAT_ram_3006a394;
                      if (_DAT_ram_3006a2f0 == 0) {
                        _DAT_ram_3006a2f0 = FUN_ram_4004c5b4(FUN_ram_40018234,0x4b,0);
                        if (_DAT_ram_3006a2f0 == 0) {
                          FUN_ram_40018234();
                        }
                        else {
                          FUN_ram_4004c83c(_DAT_ram_3006a2f0,1);
                        }
                      }
                      else {
                        FUN_ram_4004c81a(_DAT_ram_3006a2f0,0x4b);
                        FUN_ram_4004c83c(_DAT_ram_3006a2f0,1);
                        FUN_ram_4004c840(_DAT_ram_3006a2f0);
                      }
                    }
                    iVar7 = FUN_ram_400042ea();
                    if (((uVar10 ^ uVar1) - 1 != uVar10) &&
                       (uVar8 = FUN_ram_40004352(0x21), _DAT_ram_3006a378 != 0)) {
                      if (uVar8 == 0) {
                        uVar8 = 1;
                      }
                      if ((uint)(iVar7 - _DAT_ram_3006a378) < uVar8) {
                        DAT_ram_3006a37c = '\x01';
                        goto LAB_ram_40018a8c;
                      }
                    }
                    _DAT_ram_3006a378 = iVar7;
                    FUN_ram_40017c92(_DAT_ram_3006a394);
                    DAT_ram_3006a37c = '\0';
                  }
                }
                else if (DAT_ram_3006a37d == '\0') {
                  _DAT_ram_3006a394 = _DAT_ram_3006a394 + uVar1;
                  FUN_ram_40017c92();
                }
              }
              else {
                iVar7 = thunk_FUN_ram_4002247a();
                if ((iVar7 != 0) != 0 < (int)uVar1) {
                  FUN_ram_4002ccce();
                  iVar7 = thunk_FUN_ram_4002247a();
                  acStack_58[0] = iVar7 != 0;
                  FUN_ram_40013eec(100,acStack_58,1);
                  FUN_ram_40013fa2();
                  FUN_ram_40016506();
LAB_ram_40018b32:
                  FUN_ram_40017fbc();
                }
              }
            }
            else {
              DAT_ram_3006a39a = '\0';
              FUN_ram_400162d0();
              FUN_ram_40020932(uVar1);
            }
          }
          else {
            DAT_ram_3006a39a = '\0';
            FUN_ram_400162d0();
            FUN_ram_40020350(uVar1);
          }
        }
        else {
          DAT_ram_3006a39a = '\0';
          FUN_ram_400162d0();
          FUN_ram_4001a3a4(uVar1);
        }
      }
      else {
        DAT_ram_3006a39a = '\0';
        FUN_ram_400162d0();
        FUN_ram_40021412(uVar1);
      }
      goto LAB_ram_40018a8c;
    }
    if ((uVar10 ^ uVar1) - 1 == uVar10) {
      DAT_ram_3006a399 = '\0';
    }
    else {
      uVar8 = FUN_ram_400166d8();
    }
    FUN_ram_4001e27c((uVar8 ^ 1) & 0xff);
    FUN_ram_4001ea7c(uVar1);
    FUN_ram_4001e27c(0);
    if (uVar8 == 0) goto LAB_ram_40018a8c;
    if (DAT_ram_3006a399 != '\0') {
LAB_ram_40018918:
      DAT_ram_3006a39a = '\x01';
      if ((iVar9 < 1) && (iVar11 < 1)) goto LAB_ram_400189ac;
      goto LAB_ram_40018a9a;
    }
    DAT_ram_3006a39a = '\0';
    if ((iVar9 < 1) && (iVar11 < 1)) goto LAB_ram_400189ac;
  }
  FUN_ram_40017cda();
LAB_ram_400189e8:
  for (; 0 < iVar9; iVar9 = iVar9 + -1) {
    iVar7 = FUN_ram_4001e272();
    if (iVar7 == 0) {
      iVar7 = FUN_ram_40021408();
      if (iVar7 == 0) {
        iVar7 = FUN_ram_4001a39a();
        if (iVar7 == 0) {
          iVar7 = FUN_ram_40020346();
          if (iVar7 == 0) {
            iVar7 = FUN_ram_40020928();
            if (iVar7 == 0) {
              if (DAT_ram_3006a37e != '\0') {
                if ((int)_DAT_ram_3006a394 < 0x40) {
                  uVar8 = _DAT_ram_3006a394;
                  if ((int)_DAT_ram_3006a394 < 0) {
                    uVar8 = 0;
                  }
                }
                else {
                  uVar8 = 0x3f;
                }
                iVar7 = FUN_ram_400323d6(uVar8 & 0xff,acStack_58);
                if (((iVar7 == 0) && (acStack_58[0] != '\0')) && (DAT_ram_3006a37d == '\0')) {
                  DAT_ram_3006a37d = '\x01';
                  FUN_ram_40017844();
                }
                else {
                  iVar7 = FUN_ram_40015022(_DAT_ram_3006a394 & 0xff);
                  if (iVar7 == 0) {
                    FUN_ram_40016a64();
                  }
                  if (DAT_ram_30049dac < 0xe) {
                    _DAT_ram_3006a3e8 = DAT_ram_30049dac;
                  }
                  DAT_ram_30049dac = 0xffffffff;
                  DAT_ram_3006a37e = '\0';
                  FUN_ram_40017a22();
                  DAT_ram_3006a37d = '\0';
                  FUN_ram_40017844();
LAB_ram_40018e04:
                  FUN_ram_40016ce6();
                }
                goto LAB_ram_40018db8;
              }
              if (0xd < _DAT_ram_3006a3e8) goto LAB_ram_40018d30;
              if ((&DAT_ram_400950e8)[_DAT_ram_3006a3e8] == '\0') {
                if (_DAT_ram_3006a3e8 == 0) {
                  FUN_ram_40020572();
                }
                else {
                  if (_DAT_ram_3006a3e8 != 1) {
                    if (_DAT_ram_3006a3e8 == 2) {
                      FUN_ram_400183ca();
                      goto LAB_ram_40018d30;
                    }
                    if (_DAT_ram_3006a3e8 == 5) {
                      DAT_ram_3006a4a0 = DAT_ram_3006a4a0 ^ 1;
                    }
                    else {
                      if (_DAT_ram_3006a3e8 != 4) {
                        if (_DAT_ram_3006a3e8 == 3) {
                          if (DAT_ram_3006a2fc != 0) {
                            FUN_ram_400180fc();
                          }
                          DAT_ram_3006a2fc = DAT_ram_3006a2fc ^ 1;
                          goto LAB_ram_40018e04;
                        }
                        goto LAB_ram_40018e20;
                      }
                      DAT_ram_3006a398 = DAT_ram_3006a398 ^ 1;
                    }
LAB_ram_40018db8:
                    FUN_ram_40017fbc();
                    goto LAB_ram_40018d30;
                  }
                  FUN_ram_4001a2e8();
                }
              }
              else {
                FUN_ram_4001e8ae((&PTR_s_settings_ram_40095038_ram_400950a0)[_DAT_ram_3006a3e8]);
              }
LAB_ram_40018e20:
              uVar6 = 0;
              goto LAB_ram_40018d18;
            }
            iVar7 = FUN_ram_400209aa();
            if (iVar7 != 0) {
              FUN_ram_400208fe();
              goto LAB_ram_40018d16;
            }
          }
          else {
            iVar7 = FUN_ram_400204a2();
            if (iVar7 != 0) {
              FUN_ram_4002032c();
              goto LAB_ram_40018d16;
            }
          }
        }
        else {
          iVar7 = FUN_ram_4001a4dc();
          if (iVar7 != 0) {
            FUN_ram_4001a342();
LAB_ram_40018d16:
            uVar6 = 1;
LAB_ram_40018d18:
            FUN_ram_4001829a(uVar6);
          }
        }
      }
      else {
        iVar7 = FUN_ram_400214ba();
        if (iVar7 != 0) {
          FUN_ram_4001876c(0);
        }
      }
    }
    else {
      iVar7 = FUN_ram_4001e2da();
      if (iVar7 != 0) {
        FUN_ram_4001e240();
        goto LAB_ram_40018d16;
      }
    }
LAB_ram_40018d30:
  }
  do {
    if (iVar11 < 1) {
      if (cVar2 != '\0') {
        iVar9 = FUN_ram_4001e272();
        if (((iVar9 == 0) && (iVar9 = FUN_ram_40021408(), iVar9 == 0)) &&
           ((iVar9 = FUN_ram_4001a39a(), iVar9 == 0 &&
            ((iVar9 = FUN_ram_40020346(), iVar9 == 0 && (iVar9 = FUN_ram_40020928(), iVar9 == 0)))))
           ) {
          if ((DAT_ram_3006a37e == '\0') && (DAT_ram_30049da3 != '\0')) {
            FUN_ram_400180fc();
            DAT_ram_30049dac = _DAT_ram_3006a3e8;
            if (0xd < _DAT_ram_3006a3e8) {
              DAT_ram_30049dac = 6;
            }
            DAT_ram_3006a2fc = 0;
            DAT_ram_3006a398 = 0;
            DAT_ram_3006a4a0 = 0;
            DAT_ram_3006a37e = '\x01';
            DAT_ram_3006a37d = '\0';
            FUN_ram_40017844();
            FUN_ram_40017c92(_DAT_ram_3006a394);
            FUN_ram_40017a22();
            _DAT_ram_3006a2f8 = FUN_ram_4004c5b4(FUN_ram_40017a72,0x15e,0);
            FUN_ram_40016ce6();
            FUN_ram_40017fbc();
          }
        }
        else {
          FUN_ram_400181f4();
        }
      }
      if ((DAT_ram_3006a39a != '\0') && (uVar1 == 0)) {
        FUN_ram_400062ac();
        iVar9 = _DAT_ram_3006a2a4;
        FUN_ram_400062ce();
        if ((iVar9 == 0) && (iVar9 = FUN_ram_4001843a(), iVar9 == 0)) {
          DAT_ram_3006a39a = '\0';
          FUN_ram_400162d0();
        }
      }
      if ((DAT_ram_3006a37c != '\0') && (uVar1 == 0)) {
        FUN_ram_400062ac();
        iVar9 = _DAT_ram_3006a2a4;
        FUN_ram_400062ce();
        if (iVar9 == 0) {
          FUN_ram_40017cda();
          return;
        }
      }
      return;
    }
    iVar9 = FUN_ram_4001e272();
    if (iVar9 == 0) {
      iVar9 = FUN_ram_40021408();
      if (iVar9 == 0) {
        iVar9 = FUN_ram_4001a39a();
        if (iVar9 == 0) {
          iVar9 = FUN_ram_40020346();
          if (iVar9 == 0) {
            iVar9 = FUN_ram_40020928();
            if (iVar9 == 0) {
              if (DAT_ram_30049da3 != '\0') goto LAB_ram_40018eaa;
            }
            else {
              FUN_ram_400208fe();
            }
          }
          else {
            FUN_ram_4002032c();
          }
        }
        else {
          FUN_ram_4001a342();
        }
        goto LAB_ram_40018e96;
      }
      FUN_ram_4001876c(0);
    }
    else {
      FUN_ram_4001e240();
LAB_ram_40018e96:
      FUN_ram_4001829a(1);
    }
LAB_ram_40018eaa:
    iVar11 = iVar11 + -1;
  } while( true );
}


/* NanoCore 1.11, address 0x40018fb6.
 * REA evidence: ev_cb1d06bddde5212a8200229122276bf9c0e33048073a43af47b96160a83c142f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40018fb6(void)

{
  FUN_ram_4004ac44(FUN_ram_40018510,0);
  return;
}


/* NanoCore 1.11, address 0x40018fc4.
 * REA evidence: ev_c6066c2e09ceb046344c939b9117b0cbcf5f571574592f7c292cfbe483bd1a8f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018fc4(int param_1)

{
  int iVar1;
  
  FUN_ram_4002bab8();
  iVar1 = FUN_ram_400165b4();
  if (iVar1 != 0) {
    FUN_ram_40018fb6();
    if (param_1 != 0) {
      FUN_ram_4004c61a(param_1);
    }
    _DAT_ram_30069a4c = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x40018ff2.
 * REA evidence: ev_21669ff57acbce3758a782d7fbaf8358b830204a846f6bd87938d0ea070b2522
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40018ff2(void)

{
  if (_DAT_ram_30069fc4 != 0) {
    FUN_ram_4004ac44(&LAB_ram_4001840a,0);
    return;
  }
  return;
}


