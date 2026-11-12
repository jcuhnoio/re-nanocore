/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40020000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4002013c.
 * REA evidence: ev_9329a36648b13e60463940d370374eb852fc75f818f1ce11a7bc816a9aaf3171
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002013c(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  switch(param_1) {
  case 0:
    piVar1 = (int *)&DAT_ram_3006b384;
    break;
  case 1:
    piVar1 = (int *)&DAT_ram_3006b33c;
    break;
  case 2:
    piVar1 = (int *)&DAT_ram_3006b4ac;
    break;
  case 3:
    piVar1 = (int *)&DAT_ram_3006b238;
    break;
  case 4:
    piVar1 = (int *)&DAT_ram_3006b3b4;
    break;
  case 5:
    piVar1 = (int *)&DAT_ram_3006b2a0;
    break;
  default:
    return 0;
  }
  if ((*piVar1 == 0) || (iVar2 = FUN_ram_40043c8a(*piVar1,1), iVar2 != 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  return iVar2;
}


/* NanoCore 1.12, address 0x400201b0.
 * REA evidence: ev_f08231ae78934e09b515ce822a57eeb105026e19228ea886b9cbb012b306827b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400201b0(void)

{
  int iVar1;
  int iVar2;
  undefined3 uVar3;
  int iVar4;
  
  iVar4 = FUN_ram_4002013c(_DAT_ram_3006b458);
  if ((iVar4 == 0) || (iVar2 = FUN_ram_40043c8a(iVar4,1), iVar1 = _DAT_ram_3006b458, iVar2 != 0)) {
    iVar2 = 0;
    do {
      iVar4 = FUN_ram_4002013c(iVar2);
      iVar1 = iVar2;
      if (iVar4 != 0) break;
      iVar2 = iVar2 + 1;
      iVar1 = _DAT_ram_3006b458;
    } while (iVar2 != 6);
  }
  _DAT_ram_3006b458 = iVar1;
  if (_DAT_ram_3006b25c != 0) {
    FUN_ram_40046078();
  }
  FUN_ram_40018184(iVar4);
  uVar3 = FUN_ram_400170ea(DAT_ram_3006b260);
  FUN_ram_40018310(uVar3);
  FUN_ram_4001fe50();
  return;
}


/* NanoCore 1.12, address 0x4002023e.
 * REA evidence: ev_fd3ff4df2e61aaffd82bd95ddde78085e79bf664943c54489d7c921fd72a5e00
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002023e(undefined4 param_1)

{
  DAT_ram_3006b1c4 = 0;
  _DAT_ram_3006b458 = 0;
  DAT_ram_3006b260 = 0;
  _DAT_ram_3006b264 = 1;
  _DAT_ram_3006b1c8 = 0;
  _DAT_ram_3006b268 = 0;
  FUN_ram_40017090(0x3006b1cc,0x40,s_bg_settings_ram_4009a498);
  FUN_ram_40017090(0x3006b2c8,0x40,s_settings_ram_4009a0e0);
  FUN_ram_40017090(0x3006b418,0x40,s_distortion_ram_4009a710 + 8);
  FUN_ram_40017090(0x3006b3d8,0x40,s_bat_off_ram_4009c534 + 4);
  _DAT_ram_3006b25c = FUN_ram_40043b84(param_1);
  FUN_ram_400450a2(_DAT_ram_3006b25c,0x140,0xf0);
  FUN_ram_400489f0(_DAT_ram_3006b25c,0xff,0);
  FUN_ram_40048a2e(_DAT_ram_3006b25c,0,0);
  FUN_ram_400440ce(_DAT_ram_3006b25c,1);
  _DAT_ram_3006b1c8 = FUN_ram_40056db0(_DAT_ram_3006b25c);
  FUN_ram_40057382(_DAT_ram_3006b1c8,0xb);
  FUN_ram_40045014(_DAT_ram_3006b1c8,0,0);
  FUN_ram_400450a2(_DAT_ram_3006b1c8,0x140,0xf0);
  FUN_ram_400440ce(_DAT_ram_3006b1c8,1);
  FUN_ram_40043ba4(_DAT_ram_3006b1c8,0x10);
  FUN_ram_40043ba4(_DAT_ram_3006b1c8,2);
  _DAT_ram_3006b2c4 = FUN_ram_40056db0(_DAT_ram_3006b25c);
  FUN_ram_40057382(_DAT_ram_3006b2c4,0xb);
  FUN_ram_40045014(_DAT_ram_3006b2c4,8,8);
  FUN_ram_400450a2(_DAT_ram_3006b2c4,0x26,0x26);
  _DAT_ram_3006b45c = FUN_ram_400579de(_DAT_ram_3006b25c);
  FUN_ram_4005809e(_DAT_ram_3006b45c,1);
  FUN_ram_400450a2(_DAT_ram_3006b45c,0x200007d1);
  FUN_ram_400460be(_DAT_ram_3006b45c,_DAT_ram_3006b2c4,0x14,8,0);
  FUN_ram_40017a50(_DAT_ram_3006b25c,_DAT_ram_3006b45c,0x3006b460,1);
  _DAT_ram_3006b384 = FUN_ram_40056db0(_DAT_ram_3006b25c);
  FUN_ram_40057382(_DAT_ram_3006b384,0xb);
  FUN_ram_400450a2(_DAT_ram_3006b384,0x2d,0x17);
  FUN_ram_40045014(_DAT_ram_3006b384,0xfb,0x3c);
  _DAT_ram_3006b360 = FUN_ram_400579de(_DAT_ram_3006b25c);
  FUN_ram_4005809e(_DAT_ram_3006b360,1);
  FUN_ram_400450a2(_DAT_ram_3006b360,0xeb,0x200007d1);
  FUN_ram_400460be(_DAT_ram_3006b360,_DAT_ram_3006b384,0x11,0xfffffff8,0);
  FUN_ram_40017a50(_DAT_ram_3006b25c,_DAT_ram_3006b360,0x3006b364,1);
  _DAT_ram_3006b33c = FUN_ram_400579de(_DAT_ram_3006b25c);
  FUN_ram_4005809e(_DAT_ram_3006b33c,1);
  FUN_ram_400450a2(_DAT_ram_3006b33c,0x2d,0x17);
  FUN_ram_40045014(_DAT_ram_3006b33c,0xfb,0x5b);
  FUN_ram_40017a50(_DAT_ram_3006b25c,_DAT_ram_3006b33c,0x3006b340,2);
  _DAT_ram_3006b308 = FUN_ram_400579de(_DAT_ram_3006b25c);
  FUN_ram_4005809e(_DAT_ram_3006b308,1);
  FUN_ram_400450a2(_DAT_ram_3006b308,0xeb,0x200007d1);
  FUN_ram_400460be(_DAT_ram_3006b308,_DAT_ram_3006b33c,0x11,0xfffffff8,0);
  FUN_ram_40017a50(_DAT_ram_3006b25c,_DAT_ram_3006b308,0x3006b30c,1);
  _DAT_ram_3006b4ac = FUN_ram_400579de(_DAT_ram_3006b25c);
  FUN_ram_4005809e(_DAT_ram_3006b4ac,1);
  FUN_ram_400450a2(_DAT_ram_3006b4ac,0x2d,0x17);
  FUN_ram_40045014(_DAT_ram_3006b4ac,0xfb,0x7a);
  FUN_ram_40017a50(_DAT_ram_3006b25c,_DAT_ram_3006b4ac,0x3006b4b0,2);
  _DAT_ram_3006b480 = FUN_ram_400579de(_DAT_ram_3006b25c);
  FUN_ram_4005809e(_DAT_ram_3006b480,1);
  FUN_ram_400450a2(_DAT_ram_3006b480,0xeb,0x200007d1);
  FUN_ram_400460be(_DAT_ram_3006b480,_DAT_ram_3006b4ac,0x11,0xfffffff8,0);
  FUN_ram_40017a50(_DAT_ram_3006b25c,_DAT_ram_3006b480,0x3006b484,1);
  _DAT_ram_3006b238 = FUN_ram_400579de(_DAT_ram_3006b25c);
  FUN_ram_4005809e(_DAT_ram_3006b238,1);
  FUN_ram_400450a2(_DAT_ram_3006b238,0x2d,0x17);
  FUN_ram_40045014(_DAT_ram_3006b238,0xfb,0x99);
  FUN_ram_40017a50(_DAT_ram_3006b25c,_DAT_ram_3006b238,0x3006b23c,2);
  _DAT_ram_3006b20c = FUN_ram_400579de(_DAT_ram_3006b25c);
  FUN_ram_4005809e(_DAT_ram_3006b20c,1);
  FUN_ram_400450a2(_DAT_ram_3006b20c,0xeb,0x200007d1);
  FUN_ram_400460be(_DAT_ram_3006b20c,_DAT_ram_3006b238,0x11,0xfffffff8,0);
  FUN_ram_40017a50(_DAT_ram_3006b25c,_DAT_ram_3006b20c,0x3006b210,1);
  _DAT_ram_3006b3b4 = FUN_ram_400579de(_DAT_ram_3006b25c);
  FUN_ram_4005809e(_DAT_ram_3006b3b4,1);
  FUN_ram_400450a2(_DAT_ram_3006b3b4,0x2d,0x17);
  FUN_ram_40045014(_DAT_ram_3006b3b4,0xfb,0xb8);
  FUN_ram_40017a50(_DAT_ram_3006b25c,_DAT_ram_3006b3b4,0x3006b3b8,2);
  _DAT_ram_3006b388 = FUN_ram_400579de(_DAT_ram_3006b25c);
  FUN_ram_4005809e(_DAT_ram_3006b388,1);
  FUN_ram_400450a2(_DAT_ram_3006b388,0xeb,0x200007d1);
  FUN_ram_400460be(_DAT_ram_3006b388,_DAT_ram_3006b3b4,0x11,0xfffffff8,0);
  FUN_ram_40017a50(_DAT_ram_3006b25c,_DAT_ram_3006b388,0x3006b38c,1);
  _DAT_ram_3006b2a0 = FUN_ram_400579de(_DAT_ram_3006b25c);
  FUN_ram_4005809e(_DAT_ram_3006b2a0,1);
  FUN_ram_400450a2(_DAT_ram_3006b2a0,0x2d,0x17);
  FUN_ram_40045014(_DAT_ram_3006b2a0,0xfb,0xd7);
  FUN_ram_40017a50(_DAT_ram_3006b25c,_DAT_ram_3006b2a0,0x3006b2a4,2);
  _DAT_ram_3006b26c = FUN_ram_400579de(_DAT_ram_3006b25c);
  FUN_ram_4005809e(_DAT_ram_3006b26c,1);
  FUN_ram_400450a2(_DAT_ram_3006b26c,0xeb,0x200007d1);
  FUN_ram_400460be(_DAT_ram_3006b26c,_DAT_ram_3006b2a0,0x11,0xfffffff8,0);
  FUN_ram_40017a50(_DAT_ram_3006b25c,_DAT_ram_3006b26c,0x3006b270,1);
  FUN_ram_4001ff7e();
  return;
}


/* NanoCore 1.12, address 0x4002076a.
 * REA evidence: ev_bb95cd5c030c5f7d467b6b32c2572542f9690f53670933ef644462ac432f57ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002076a(void)

{
  DAT_ram_3006b1c4 = 0;
  if (_DAT_ram_3006b25c != 0) {
    FUN_ram_400440ce(_DAT_ram_3006b25c,1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40020784.
 * REA evidence: ev_d3094a2ecab27a5cc908be3fac5b6de1de5945c1bb8e4fdb245d0cca4c4ea6b6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40020784(void)

{
  return DAT_ram_3006b1c4;
}


/* NanoCore 1.12, address 0x4002078e.
 * REA evidence: ev_71c084db3c11024753d3e688fe338b674238655dacd9d5fd854e8824a5bccfad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002078e(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = _DAT_ram_3006b458;
  if ((DAT_ram_3006b1c4 == '\0') || (param_1 == 0)) {
    return;
  }
  if (DAT_ram_3006b260 == '\0') {
    _DAT_ram_3006b458 = param_1 + _DAT_ram_3006b458;
    if (_DAT_ram_3006b458 < 0) {
      _DAT_ram_3006b458 = 0;
    }
    else if (5 < _DAT_ram_3006b458) {
      _DAT_ram_3006b458 = 5;
    }
    if (_DAT_ram_3006b458 == iVar1) {
      return;
    }
  }
  else {
    if (_DAT_ram_3006b264 == 0) {
      iVar1 = FUN_ram_40022920();
      thunk_FUN_ram_4002292e(0 < param_1);
      FUN_ram_4001f5e6();
      iVar2 = FUN_ram_40022920();
      if ((iVar1 != 0) == (iVar2 != 0)) goto LAB_ram_4002080c;
    }
    else {
      if (_DAT_ram_3006b264 == 1) {
        iVar1 = FUN_ram_40022a0e();
        iVar2 = thunk_FUN_ram_40022a0e();
        thunk_FUN_ram_40022a22(iVar2 + param_1);
        FUN_ram_4001f610();
        iVar2 = FUN_ram_40022a0e();
      }
      else if (_DAT_ram_3006b264 == 2) {
        iVar1 = FUN_ram_40022a8e();
        iVar2 = thunk_FUN_ram_400256ca(0x3006b4d0,2,param_1);
        FUN_ram_40022aa2(iVar2 + iVar1);
        FUN_ram_4001f692();
        iVar2 = FUN_ram_40022a8e();
      }
      else if (_DAT_ram_3006b264 == 3) {
        iVar1 = FUN_ram_40022b04();
        iVar2 = thunk_FUN_ram_400256ca(0x3006b4d0,3,param_1);
        FUN_ram_40022b18(iVar2 + iVar1);
        FUN_ram_4001f6d2();
        iVar2 = FUN_ram_40022b04();
      }
      else {
        if (_DAT_ram_3006b264 != 4) goto LAB_ram_4002080c;
        iVar1 = FUN_ram_400229b4();
        uVar3 = FUN_ram_400229b4();
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
        FUN_ram_400229c6(param_1);
        FUN_ram_4001f712();
        iVar2 = FUN_ram_400229b4();
      }
      if (iVar2 == iVar1) goto LAB_ram_4002080c;
    }
    FUN_ram_40014528();
  }
LAB_ram_4002080c:
  FUN_ram_400201b0();
  return;
}


/* NanoCore 1.12, address 0x400208e0.
 * REA evidence: ev_0a44b0317c66231fae0c89c33164fbc654bad4c0ac81b52900a6af20a4b8857d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400208e0(void)

{
  if (DAT_ram_3006b1c4 == '\0') {
    return 0;
  }
  if (DAT_ram_3006b260 == '\0') {
    if (_DAT_ram_3006b458 == 0) {
      DAT_ram_3006b260 = 1;
      _DAT_ram_3006b264 = 0;
    }
    else {
      if (3 < _DAT_ram_3006b458 - 1U) {
        return 0;
      }
      DAT_ram_3006b260 = 1;
      _DAT_ram_3006b264 = _DAT_ram_3006b458;
    }
  }
  else {
    DAT_ram_3006b260 = 0;
  }
  FUN_ram_400201b0();
  return 0;
}


/* NanoCore 1.12, address 0x40020948.
 * REA evidence: ev_52cac85d1a303ef64065aefa49aaaacbbae68a500f20a9bde314b3def494577f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020948(void)

{
  if (_DAT_ram_3006b25c != 0) {
    FUN_ram_4004d0b2(0x3006b1cc);
    FUN_ram_4001ff7e();
    FUN_ram_400201b0();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40020970.
 * REA evidence: ev_be9ab9bd7ecd45a28ca2644f5fa0b0adb7e988fb10332e0979a2d9b031fb1fc1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020970(void)

{
  if (_DAT_ram_3006b25c == 0) {
    return;
  }
  FUN_ram_4001f5e6();
  FUN_ram_4001f610();
  FUN_ram_4001f692();
  FUN_ram_4001f6d2();
  FUN_ram_4001f712();
  FUN_ram_4001f650();
  if (DAT_ram_3006b1c4 != '\0') {
    FUN_ram_400201b0();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400209b0.
 * REA evidence: ev_c32d8494f444cddc4dfc38252c74f289e39379d9c652b32e8dc514d16d619c2c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400209b0(void)

{
  if (_DAT_ram_3006b25c != 0) {
    _DAT_ram_3006b458 = 0;
    DAT_ram_3006b260 = 0;
    thunk_FUN_ram_400256bc(0x3006b4d0);
    DAT_ram_3006b1c4 = 1;
    if (_DAT_ram_3006b25c != 0) {
      FUN_ram_40043ba4(_DAT_ram_3006b25c,1);
    }
    FUN_ram_40020970();
    FUN_ram_400201b0();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40020a08.
 * REA evidence: ev_ade10653b1fc488b969379d70822488ef2832426053862b44f3aaa90a0694d5e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020a08(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = _DAT_ram_3006b4e0;
  if (_DAT_ram_3006b580 != 0) {
    FUN_ram_40017d68(_DAT_ram_3006b580,0x3006b5b0,_DAT_ram_3006b4e0 != 0);
    if (iVar1 != 0) {
      FUN_ram_40048ade(_DAT_ram_3006b580,iVar1,0);
      iVar3 = 0;
      do {
        iVar2 = *(int *)(iVar3 * 4 + 0x3006b5b0);
        if (iVar2 != 0) {
          FUN_ram_40048ade(iVar2,iVar1,0);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 8);
      FUN_ram_40045068(_DAT_ram_3006b580,*(undefined4 *)(iVar1 + 0xc));
      FUN_ram_400460be(_DAT_ram_3006b580,_DAT_ram_3006b528,0x14,8,0);
      FUN_ram_40017b64(_DAT_ram_3006b580,0x3006b5b0);
      FUN_ram_40017bd8(_DAT_ram_3006b580,0x3006b5b0,&DAT_ram_3006b584);
      return;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40020ac4.
 * REA evidence: ev_ae34208d918d519bc402c4af3fa1d3767c686d0e7188c1bc89b79fa51f1b37a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020ac4(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  FUN_ram_4002d834(&DAT_ram_3006b584,0x29,pcVar1,10);
  FUN_ram_40017bd8(_DAT_ram_3006b580,0x3006b5b0,&DAT_ram_3006b584);
  return;
}


/* NanoCore 1.12, address 0x40020b06.
 * REA evidence: ev_7c122b260174f642ed4dce502be983bd00c5b19a605e5807ed4520f7525f7432
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020b06(void)

{
  if (DAT_ram_3006b52c == '\0') {
    DAT_ram_3006b53c = 0;
  }
  else {
    FUN_ram_40017090(&DAT_ram_3006b53c,0x40);
  }
  FUN_ram_400172bc(_DAT_ram_3006b528,&DAT_ram_3006b53c);
  FUN_ram_400172bc(_DAT_ram_3006b4e4,&DAT_ram_3006b4e8);
  return;
}


/* NanoCore 1.12, address 0x40020b5e.
 * REA evidence: ev_3ec88471099adcc381a3e872634a5bdeae25d5323de559af0d1ae71fa8557d45
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40020b5e(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_ram_3006b528;
  if ((((param_1 != 0) && (iVar1 = _DAT_ram_3006b4e4, param_1 != 1)) || (iVar1 == 0)) ||
     (iVar2 = FUN_ram_40043c8a(iVar1,1), iVar2 != 0)) {
    iVar1 = 0;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40020b98.
 * REA evidence: ev_f1bb8b21514b87373c11cf03f581e3b418db57c69bab546eb229b687d0861e1e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020b98(void)

{
  bool bVar1;
  undefined3 uVar2;
  int iVar3;
  
  iVar3 = FUN_ram_40020b5e(_DAT_ram_3006b57c);
  if (iVar3 == 0) {
    bVar1 = _DAT_ram_3006b57c == 0;
    iVar3 = FUN_ram_40020b5e((uint)bVar1);
    if (iVar3 != 0) {
      _DAT_ram_3006b57c = (uint)bVar1;
    }
  }
  FUN_ram_40018184();
  uVar2 = FUN_ram_400170ea(0);
  FUN_ram_40018310(uVar2);
  return;
}


/* NanoCore 1.12, address 0x40020bec.
 * REA evidence: ev_2d1d603e199da57b031101f567b4da33beec70ebf1ac030298f1e01181c8ffaf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020bec(undefined4 param_1)

{
  _DAT_ram_3006b4e0 = 0;
  DAT_ram_3006b4d8 = 0;
  _DAT_ram_3006b57c = 0;
  DAT_ram_3006b52c = 0;
  DAT_ram_3006b584 = 0;
  _DAT_ram_3006b5ae = 0;
  FUN_ram_40017090(&DAT_ram_3006b4e8,0x40,&DAT_ram_4009a4a4);
  _DAT_ram_3006b4dc = FUN_ram_40043b84(param_1);
  FUN_ram_400450a2(_DAT_ram_3006b4dc,0x140,0xf0);
  FUN_ram_400489f0(_DAT_ram_3006b4dc,0,0);
  FUN_ram_40048a2e(_DAT_ram_3006b4dc,0,0);
  FUN_ram_400440ce(_DAT_ram_3006b4dc,1);
  _DAT_ram_3006b528 = FUN_ram_40056db0(_DAT_ram_3006b4dc);
  FUN_ram_40057382(_DAT_ram_3006b528,0xb);
  FUN_ram_40045014(_DAT_ram_3006b528,8,8);
  FUN_ram_400450a2(_DAT_ram_3006b528,0x26,0x26);
  _DAT_ram_3006b580 = FUN_ram_400579de(_DAT_ram_3006b4dc);
  FUN_ram_4005809e(_DAT_ram_3006b580,1);
  FUN_ram_400450a2(_DAT_ram_3006b580,0xb4,0x1c);
  FUN_ram_400460be(_DAT_ram_3006b580,_DAT_ram_3006b528,0x14,8,0);
  FUN_ram_40017a50(_DAT_ram_3006b4dc,_DAT_ram_3006b580,0x3006b5b0,1);
  _DAT_ram_3006b4e4 = FUN_ram_40056db0(_DAT_ram_3006b4dc);
  FUN_ram_40057382(_DAT_ram_3006b4e4,0xb);
  FUN_ram_400450a2(_DAT_ram_3006b4e4,0x46,0x1e);
  FUN_ram_40045014(_DAT_ram_3006b4e4,0xf2,0xf);
  _DAT_ram_3006b4e0 = FUN_ram_4001e8e4();
  FUN_ram_40020a08();
  return;
}


/* NanoCore 1.12, address 0x40020d3c.
 * REA evidence: ev_e1b7437335c51fc4a147fc84a3a489c98d65f3ab05981f27ba48bf1faba26d56
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020d3c(void)

{
  DAT_ram_3006b4d8 = 0;
  if (_DAT_ram_3006b4dc != 0) {
    FUN_ram_400440ce(_DAT_ram_3006b4dc,1);
  }
  FUN_ram_40018184(0);
  return;
}


/* NanoCore 1.12, address 0x40020d66.
 * REA evidence: ev_4c2af3beba6faac27a9f62b1675ef7105278dba1e71451e3455ad779b2ce685e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40020d66(void)

{
  return DAT_ram_3006b4d8;
}


/* NanoCore 1.12, address 0x40020d70.
 * REA evidence: ev_dffef0fab93367f442432ed2bc28313774e6839144040aa4a8ed839025913f88
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020d70(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if ((DAT_ram_3006b4d8 == '\0') || (param_1 == 0)) {
    return;
  }
  bVar1 = 0;
  if (_DAT_ram_3006b528 != 0) {
    bVar1 = FUN_ram_40043c8a(_DAT_ram_3006b528,1);
    bVar1 = bVar1 ^ 1;
  }
  if (((_DAT_ram_3006b4e4 != 0) && (iVar2 = FUN_ram_40043c8a(_DAT_ram_3006b4e4,1), bVar1 != 0)) &&
     (iVar2 == 0)) {
    _DAT_ram_3006b57c = _DAT_ram_3006b57c + param_1;
    if (_DAT_ram_3006b57c < 1) {
      if (_DAT_ram_3006b57c < 0) {
        _DAT_ram_3006b57c = 0;
      }
    }
    else {
      _DAT_ram_3006b57c = 1;
    }
    FUN_ram_40020b98();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40020de8.
 * REA evidence: ev_22e73f69cbdcc7a6ac3591c798457090cfd303c658a7db9a8ce24de0c70b5612
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_40020de8(void)

{
  return DAT_ram_3006b4d8 != '\0' && _DAT_ram_3006b57c == 1;
}


/* NanoCore 1.12, address 0x40020e02.
 * REA evidence: ev_e0ae9bb2b8e5d6b2b228c990a41655a27b5d42a0869f665f026d1d968728c067
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020e02(void)

{
  if (_DAT_ram_3006b4dc == 0) {
    return;
  }
  if (DAT_ram_3006b4e8 == '\0') {
    FUN_ram_40017090(&DAT_ram_3006b4e8,0x40,&DAT_ram_4009a4a4);
  }
  if (DAT_ram_3006b53c != '\0') {
    FUN_ram_4004d0b2();
  }
  FUN_ram_4004d0b2(&DAT_ram_3006b4e8);
  _DAT_ram_3006b4e0 = FUN_ram_4001e8e4();
  FUN_ram_40020a08();
  if (DAT_ram_3006b4d8 != '\0') {
    if (_DAT_ram_3006b5ae != 0) {
      FUN_ram_4002d6f8();
      FUN_ram_40020ac4();
    }
    FUN_ram_40020b06();
    FUN_ram_40020b98();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40020e8c.
 * REA evidence: ev_3668880c7dccc2eb6de2a519a5be75576571a3a185951129b1b7fdc7a88b82ec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40020e8c(void)

{
  if (DAT_ram_3004ad40 != DAT_ram_3004ad3c) {
    FUN_ram_4002a526(DAT_ram_3004ad40 & 0xffff);
    DAT_ram_3004ad3c = DAT_ram_3004ad40;
  }
  return;
}


/* NanoCore 1.12, address 0x40020ec2.
 * REA evidence: ev_21266acfa4edec8bebb1db61966f789cdeb55b1de9613f7402b612996fdeaca8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020ec2(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (_DAT_ram_3006b79c == 0) {
    return;
  }
  if (_DAT_ram_3006b670 < 0.0) {
    fVar1 = _DAT_ram_3006b670 - DAT_ram_4009675c;
  }
  else {
    fVar1 = _DAT_ram_3006b670 + DAT_ram_4009675c;
  }
  iVar4 = (int)fVar1;
  iVar2 = _DAT_ram_3006b678;
  if ((_DAT_ram_3006b678 <= iVar4) && (iVar2 = iVar4, _DAT_ram_3006b674 <= iVar4)) {
    iVar2 = _DAT_ram_3006b674;
  }
  FUN_ram_40045014(_DAT_ram_3006b79c,iVar2,_DAT_ram_3006b7e0);
  uVar3 = 0xff;
  if (param_1 == 0) {
    uVar3 = 0x4c;
  }
  FUN_ram_40048a9e(_DAT_ram_3006b79c,uVar3,0);
  return;
}


/* NanoCore 1.12, address 0x40020f4e.
 * REA evidence: ev_e5ba1b2d07ae9ca2bf08710f7a029b744ced4a85c3e33736afa0f99a9560f01b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40020f4e(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  
  cVar1 = DAT_ram_3006b5d0;
  if (DAT_ram_3006b5d0 == '\0') {
    return;
  }
  if (_DAT_ram_3006b680 == 0) {
    return;
  }
  FUN_ram_40020e8c();
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_ram_4002a560(&uStack_1c);
  if ((char)uStack_14 == '\0') {
    cVar1 = '\0';
    _DAT_ram_3006b67c = (ulonglong)(uint)(float)_DAT_ram_3006b66c;
  }
  else {
    uVar3 = (uint)uStack_18._2_2_;
    _DAT_ram_3006b67c = (ulonglong)(uint)(float)_DAT_ram_3006b66c;
    if (5 < ((uVar3 ^ (int)uVar3 >> 0xf) - ((int)uVar3 >> 0xf) & 0xffff)) {
      if ((int)uVar3 < -0x32) {
        uVar3 = 0xffffffce;
      }
      if (0x32 < (int)uVar3) {
        uVar3 = 0x32;
      }
      _DAT_ram_3006b67c =
           (ulonglong)
           (uint)(((float)(int)uVar3 / DAT_ram_4009a4f4) * (float)_DAT_ram_3006b668 +
                 (float)_DAT_ram_3006b66c);
    }
  }
  _DAT_ram_3006b670 =
       (ulonglong)
       (uint)(((float)_DAT_ram_3006b67c - (float)_DAT_ram_3006b670) * DAT_ram_4009a4f8 +
             (float)_DAT_ram_3006b670);
  FUN_ram_40020ec2(cVar1);
  if ((uStack_14 & 0xff) != 0) {
    if ((byte)uStack_18 < 0xc) {
      pcVar2 = (&PTR_DAT_ram_4009a4d0_ram_4009a500)[(char)(byte)uStack_18];
      goto LAB_ram_40020fdc;
    }
  }
  pcVar2 = s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
LAB_ram_40020fdc:
  FUN_ram_40017bd8(_DAT_ram_3006b680,0x3006b684,pcVar2);
  return;
}


