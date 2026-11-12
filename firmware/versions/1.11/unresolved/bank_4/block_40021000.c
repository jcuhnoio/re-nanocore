/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40021000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4002100c.
 * REA evidence: ev_29963cb1bce64883334100f0bcab08f1e6b0b718faec5c8e322f8ab6741de30b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002100c(undefined4 param_1)

{
  undefined4 uVar1;
  
  DAT_ram_3006b628 = 0;
  DAT_ram_3006b674 = 0;
  DAT_ram_30049e00 = 1;
  _DAT_ram_3006b7a8 = 0;
  _DAT_ram_3006b678 = 0;
  _DAT_ram_3006b62c = 0;
  _DAT_ram_3006b838 = 0x91;
  _DAT_ram_3006b6c4 = 0x8e;
  _DAT_ram_3006b6c0 = 0x56;
  _DAT_ram_3006b6d0 = 0x38;
  _DAT_ram_3006b6c8 = (ulonglong)_DAT_ram_40095458;
  _DAT_ram_3006b6d4 = _DAT_ram_3006b6c8;
  FUN_ram_40016c5e(0x3006b630,0x40,s_bg_tuner_ram_40095408);
  FUN_ram_40016c5e(0x3006b680,0x40,s_tuner_ram_4009504c);
  FUN_ram_40016c5e(0x3006b73c,0x40,s_distortion_ram_4009565c + 8);
  FUN_ram_40016c5e(0x3006b6fc,0x40,s_bat_off_ram_4009728c + 4);
  FUN_ram_40016c5e(0x3006b7b4,0x40,s_tuner_slot1_ram_40095414);
  FUN_ram_40016c5e(0x3006b7f8,0x40,s_tuner_slot2_ram_40095420);
  _DAT_ram_3006b670 = FUN_ram_40043a8c(param_1);
  FUN_ram_40044faa(_DAT_ram_3006b670,0x140,0xf0);
  FUN_ram_400488f8(_DAT_ram_3006b670,0xff,0);
  FUN_ram_40048936(_DAT_ram_3006b670,0,0);
  FUN_ram_40043fd6(_DAT_ram_3006b670,1);
  _DAT_ram_3006b62c = FUN_ram_40056f7e(_DAT_ram_3006b670);
  FUN_ram_40057550(_DAT_ram_3006b62c,0xb);
  FUN_ram_40044f1c(_DAT_ram_3006b62c,0,0);
  FUN_ram_40044faa(_DAT_ram_3006b62c,0x140,0xf0);
  FUN_ram_40043fd6(_DAT_ram_3006b62c,1);
  FUN_ram_40043aac(_DAT_ram_3006b62c,0x10);
  FUN_ram_40043aac(_DAT_ram_3006b62c,2);
  _DAT_ram_3006b67c = FUN_ram_40056f7e(_DAT_ram_3006b670);
  FUN_ram_40057550(_DAT_ram_3006b67c,0xb);
  FUN_ram_40044f1c(_DAT_ram_3006b67c,8,8);
  FUN_ram_40044faa(_DAT_ram_3006b67c,0x26,0x26);
  _DAT_ram_3006b7ac = FUN_ram_40056f7e(_DAT_ram_3006b670);
  FUN_ram_40057550(_DAT_ram_3006b7ac,0xb);
  FUN_ram_40044f1c(_DAT_ram_3006b7ac,0x10b,0xf);
  FUN_ram_40044faa(_DAT_ram_3006b7ac,0x2d,0x17);
  _DAT_ram_3006b77c = FUN_ram_40057bac(_DAT_ram_3006b670);
  FUN_ram_4005826c(_DAT_ram_3006b77c,1);
  FUN_ram_40044faa(_DAT_ram_3006b77c,0x200007d1);
  FUN_ram_40045fc6(_DAT_ram_3006b77c,_DAT_ram_3006b67c,0x14,8,0);
  FUN_ram_4001761e(_DAT_ram_3006b670,_DAT_ram_3006b77c,0x3006b780,1);
  _DAT_ram_3006b7b0 = FUN_ram_40056f7e(_DAT_ram_3006b670);
  FUN_ram_40057550(_DAT_ram_3006b7b0,0xb);
  FUN_ram_40044f1c(_DAT_ram_3006b7b0,0x32,0x3c);
  FUN_ram_40044faa(_DAT_ram_3006b7b0,0xdc,0x50);
  _DAT_ram_3006b7f4 = FUN_ram_40056f7e(_DAT_ram_3006b670);
  FUN_ram_40057550(_DAT_ram_3006b7f4,0xb);
  FUN_ram_40044f1c(_DAT_ram_3006b7f4,0x8e,0x91);
  FUN_ram_40044faa(_DAT_ram_3006b7f4,0x23,0x23);
  uVar1 = FUN_ram_40057bac(_DAT_ram_3006b670);
  _DAT_ram_3006b6d8 = uVar1;
  FUN_ram_4005826c(uVar1,1);
  FUN_ram_40044faa(_DAT_ram_3006b6d8,0x28,0x1c);
  FUN_ram_40045fc6(_DAT_ram_3006b6d8,_DAT_ram_3006b7f4,0xe,0,6);
  FUN_ram_4001761e(_DAT_ram_3006b670,_DAT_ram_3006b6d8,0x3006b6dc,2);
  FUN_ram_400177a6(_DAT_ram_3006b6d8,0x3006b6dc,s_ep__02x_clear_halt_ram_40094730 + 0x14);
  FUN_ram_40020dfe();
  FUN_ram_40020e6a();
  FUN_ram_40020fe6();
  if (_DAT_ram_3006b83c == 0) {
    _DAT_ram_3006b83c = FUN_ram_4004c5b4(FUN_ram_40020b10,0x21,0);
  }
  return;
}


/* NanoCore 1.11, address 0x40021358.
 * REA evidence: ev_18fa5d128bdc351597d471ff8676b56e1dcb191a5c8d96fa1f1bd29b70f8915e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40021358(void)

{
  if (_DAT_ram_3006b670 != 0) {
    DAT_ram_3006b628 = 1;
    DAT_ram_3006b674 = 0;
    _DAT_ram_3006b7a8 = 0;
    DAT_ram_30049df8 = 0xffffffff;
    FUN_ram_40020c22();
    FUN_ram_40020e6a();
    FUN_ram_40020fe6();
    if (_DAT_ram_3006b670 != 0) {
      FUN_ram_40043aac(_DAT_ram_3006b670,1);
    }
    FUN_ram_40020f1e();
    FUN_ram_4000ded4(1);
    FUN_ram_4000df06(DAT_ram_30049e00);
    FUN_ram_40029806(1);
    FUN_ram_40020a4e();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400213d2.
 * REA evidence: ev_9c5e7e56fc0536358b0155b612f70b080cb217ad5f7f96be6f2b201fa18b32f4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400213d2(void)

{
  FUN_ram_40029806(0);
  FUN_ram_4000ded4(0);
  DAT_ram_3006b628 = 0;
  FUN_ram_40020fe6();
  if (_DAT_ram_3006b670 != 0) {
    FUN_ram_40043fd6(_DAT_ram_3006b670,1);
  }
  FUN_ram_40017d52(0);
  return;
}


/* NanoCore 1.11, address 0x40021408.
 * REA evidence: ev_c583495638abb081335c5661dd0574ca973ccef4eeb42c9b5f43d69989076bd0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40021408(void)

{
  return DAT_ram_3006b628;
}


/* NanoCore 1.11, address 0x40021412.
 * REA evidence: ev_0e353b5836fb4c19fcbeab8a01091e197ae9b1e46cb227103ebf834c0620a4bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40021412(int param_1)

{
  if ((DAT_ram_3006b628 != '\0') && (param_1 != 0)) {
    if (DAT_ram_3006b674 != '\0') {
      if (_DAT_ram_3006b7a8 == 0) {
        param_1 = param_1 + DAT_ram_30049dfc;
        if (0x1e0 < param_1) {
          param_1 = 0x1e0;
        }
        if (param_1 < 400) {
          param_1 = 400;
        }
        if (DAT_ram_30049dfc != param_1) {
          DAT_ram_30049dfc = param_1;
          FUN_ram_40020c22();
          FUN_ram_40020a4e();
          return;
        }
      }
      else if (_DAT_ram_3006b7a8 == 1) {
        if ((bool)DAT_ram_30049e00 != 0 < param_1) {
          DAT_ram_30049e00 = 0 < param_1;
          FUN_ram_4000df06();
          FUN_ram_40020e44();
          return;
        }
      }
      return;
    }
    param_1 = param_1 + _DAT_ram_3006b7a8;
    if (param_1 < 1) {
      if (param_1 < 0) {
        param_1 = 0;
      }
    }
    else {
      param_1 = 1;
    }
    if (param_1 != _DAT_ram_3006b7a8) {
      _DAT_ram_3006b7a8 = param_1;
      FUN_ram_40020f1e();
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x400214ba.
 * REA evidence: ev_a167896ae54e9c9ab663dbadea1c269782a5b5b254ebe1d446feff34dc3e1384
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400214ba(void)

{
  if (DAT_ram_3006b628 != '\0') {
    DAT_ram_3006b674 = DAT_ram_3006b674 == '\0';
    FUN_ram_40020f1e();
    return 0;
  }
  return 0;
}


/* NanoCore 1.11, address 0x400214f6.
 * REA evidence: ev_4eddb4908eb177351dd4385747ef4338c437ba6c1a8ae6c09b9a3fce7f8f4ecf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400214f6(void)

{
  if (_DAT_ram_3006b670 == 0) {
    return;
  }
  FUN_ram_4004cfba(0x3006b680);
  FUN_ram_4004cfba(0x3006b73c);
  FUN_ram_4004cfba(0x3006b6fc);
  FUN_ram_4004cfba(0x3006b7b4);
  FUN_ram_4004cfba(0x3006b7f8);
  FUN_ram_4004cfba(0x3006b630);
  FUN_ram_40020dfe();
  FUN_ram_40020e6a();
  if (DAT_ram_3006b628 != '\0') {
    FUN_ram_40020f1e();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002156e.
 * REA evidence: ev_8864081bc4c8284c4d764387128675f645430ae28ce1acb51b98e5175c2d70d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002156e(undefined4 *param_1)

{
  return *param_1;
}


/* NanoCore 1.11, address 0x4002158c.
 * REA evidence: ev_807c12f11a550a647aa0e6277669f6a0eabcffd14387eec7946877aaf73aab42
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002158c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iStack_3c;
  uint uStack_38;
  undefined1 auStack_30 [4];
  short sStack_2c;
  ushort uStack_2a;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  
  DAT_ram_30049e04 = 0xffffff;
  _DAT_ram_3006b840 = 0;
  iVar1 = FUN_ram_4002bf80(s_style_ram_4009548c,&iStack_3c);
  if ((((iVar1 == 0) && (0xf < uStack_38)) &&
      (iVar1 = FUN_ram_4002bf02(iStack_3c + 0x10,auStack_30,0x10), iVar1 == 0)) &&
     ((iVar1 = FUN_ram_4002156e(auStack_30), iVar1 == 0x31595453 && (sStack_2c == 1)))) {
    uVar2 = FUN_ram_4002156e(auStack_24);
    if ((uStack_2a & 1) != 0) {
      uVar3 = FUN_ram_4002156e(auStack_28);
      DAT_ram_30049e04 = uVar3 & 0xffffff;
    }
    if ((uStack_2a & 2) != 0) {
      _DAT_ram_3006b840 = uVar2 & 0xffffff;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40021636.
 * REA evidence: ev_426a8cc0165861f7daaacbe0a761f037e55abf5c214df93253fac67e3d72e7f9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40021636(void)

{
  return DAT_ram_30049e04;
}


/* NanoCore 1.11, address 0x40021640.
 * REA evidence: ev_f6af503dc32f28849389fef7995752bd78fb127872ea1b30fd0490fe36116a95
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40021640(void)

{
  return _DAT_ram_3006b840;
}


/* NanoCore 1.11, address 0x4002164a.
 * REA evidence: ev_1d10bd6b80956ab697b7d56daa89fc2aac19066743f97ffb764ede324e92bb90
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_40022516(void)

{
  return (int)DAT_ram_3006b848;
}


/* NanoCore 1.11, address 0x4002164e.
 * REA evidence: ev_80bc04aea8901b8d8210527b5fb228fb58a8d6c33d66bc50db7f2d97c9e7122b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_ram_40022520(void)

{
  return _DAT_ram_3006b84c;
}


/* NanoCore 1.11, address 0x40021652.
 * REA evidence: ev_a7c1a5b035ab9d6a7095b98c8baf039fa10c0d887517d5baf4c58665fd7e3ca4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_ram_4002252a(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (0x14 < param_1) {
    param_1 = 0x14;
  }
  if (param_1 < -0x14) {
    param_1 = -0x14;
  }
  uVar2 = FUN_ram_40000d44(DAT_ram_40094e90,(float)param_1 / DAT_ram_40094ea8);
  iVar1 = 0;
  if (DAT_ram_3006b848 != (char)param_1) {
    DAT_ram_3006b848 = (char)param_1;
    _DAT_ram_3006b84c = uVar2;
    iVar1 = FUN_ram_4002226e(2);
    iVar1 = -(uint)(iVar1 != 0);
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40021656.
 * REA evidence: ev_d7161e6e9cd7fa70421de3bc000813bb7ad5b837873fe7cb6d328d77329534a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool thunk_FUN_ram_40022428(void)

{
  return DAT_ram_3006b850 != '\0';
}


/* NanoCore 1.11, address 0x4002165a.
 * REA evidence: ev_6e0e8ef869a7086a820c6deb99781686fb842c7f0abdec1d78e57718d7c4c14e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_40022436(int param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = param_1 != 0;
  iVar2 = 0;
  if ((bool)DAT_ram_3006b850 != bVar1) {
    DAT_ram_3006b850 = bVar1;
    iVar2 = FUN_ram_4002226e(1,bVar1);
    thunk_FUN_ram_4002b120(bVar1);
    iVar2 = -(uint)(iVar2 != 0);
  }
  return iVar2;
}


/* NanoCore 1.11, address 0x4002165e.
 * REA evidence: ev_b319f6ad6b7c8630b255d772931625bf63f0fa61dade781c36de82a27dd6466d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4002165e(void)

{
  int iVar1;
  uint uVar2;
  int aiStack_14 [3];
  
  iVar1 = FUN_ram_40006c6e();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40006c3a(), iVar1 < 1)) {
    return 0;
  }
  if (_DAT_ram_3006b854 != 0) {
    aiStack_14[0] = 0;
    uVar2 = FUN_ram_40006f3e(aiStack_14);
    if (((uVar2 != 0) && (uVar2 <= _DAT_ram_3006b854)) &&
       (_DAT_ram_3006b854 < uVar2 + aiStack_14[0] * 0x40)) {
      return _DAT_ram_3006b854;
    }
  }
  _DAT_ram_3006b854 = FUN_ram_40006eee(&DAT_ram_40095494);
  return _DAT_ram_3006b854;
}


/* NanoCore 1.11, address 0x400216b8.
 * REA evidence: ev_839eba128dcfd12f4c8b435bedfe4cbf8b5be1ebe4b809af0c7310d8a025a1f0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400216b8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_4002165e();
  iVar2 = -1;
  if (iVar1 != 0) {
    iVar2 = -1;
    if (param_1 + 0x10U <= *(uint *)(iVar1 + 0x38)) {
      iVar1 = FUN_ram_40006f52(iVar1,param_1,param_2,0x10);
      iVar2 = -(uint)(iVar1 != 0x10);
    }
  }
  return iVar2;
}


/* NanoCore 1.11, address 0x400216f6.
 * REA evidence: ev_923d8855e41fc629ee60715d4f17f824257e5e5214e70e61c397a803ac593104
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400216f6(int param_1)

{
  int iVar1;
  float fVar2;
  
  if (param_1 != 0) {
    if (100 < param_1) {
      param_1 = 100;
    }
    fVar2 = (float)FUN_ram_40000d44(DAT_ram_40094e90,
                                    (((float)(param_1 + -1) / DAT_ram_400954bc) * DAT_ram_400954c0 +
                                    DAT_ram_400954c4) / DAT_ram_40094ea8);
    iVar1 = (int)(fVar2 * DAT_ram_400954c8 + DAT_ram_40094634);
    if (iVar1 < 0x8000) {
      if (iVar1 < 0) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0x7fff;
    }
    return (int)(short)iVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4002177e.
 * REA evidence: ev_1f2c19951e738b365f7b7fc4d2587101fafb76baaea71060e5f2f17435663332
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002177e(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_4002165e();
  iVar2 = -1;
  if ((iVar1 != 0) && (0x1fff < *(uint *)(iVar1 + 0x38))) {
    iVar2 = FUN_ram_40006fe6(iVar1,0x1000,0x1000);
    iVar2 = iVar2 >> 0x1f;
  }
  return iVar2;
}


/* NanoCore 1.11, address 0x400217a6.
 * REA evidence: ev_6685e2cbbc44c0c97402bb62453b252e3249049b8bbc6a117a9528709de08ead
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400217a6(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_ram_4000504c(&uStack_20,0,0x10);
  uStack_20 = 0x32544553;
  uStack_1c = 1;
  uStack_1a = param_3;
  uStack_19 = param_4;
  uStack_18 = param_2;
  uStack_14 = FUN_ram_40007554(0,&uStack_20,0xc);
  iVar1 = FUN_ram_4002165e();
  iVar2 = -1;
  if (iVar1 != 0) {
    iVar2 = -1;
    if (param_1 + 0x10U <= *(uint *)(iVar1 + 0x38)) {
      iVar1 = FUN_ram_40006f9c(iVar1,param_1,&uStack_20,0x10);
      iVar2 = -(uint)(iVar1 != 0x10);
    }
  }
  return iVar2;
}


/* NanoCore 1.11, address 0x40021822.
 * REA evidence: ev_10a805c87d8d7c2788e745748dbbdfc142943147b816a058b443c54f5763db86
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40021822(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_2;
  *param_2 = iVar2 + 1;
  iVar2 = FUN_ram_400217a6(*param_1,iVar2 + 1);
  if (iVar2 == 0) {
    *param_1 = *param_1 + 0x10;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4002184c.
 * REA evidence: ev_b2a67095d41588c3e5116ac0755b9652988f1e176dde08839494e2d461c968bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4002184c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40021822(param_1,param_2,1,DAT_ram_3006b850 != '\0');
  if (((((iVar1 == 0) &&
        (iVar1 = FUN_ram_40021822(param_1,param_2,0x39,DAT_ram_30049e30 != '\0'), iVar1 == 0)) &&
       (iVar1 = FUN_ram_40021822(param_1,param_2,0x3a,DAT_ram_30049e08 != '\0'), iVar1 == 0)) &&
      (((iVar1 = FUN_ram_40021822(param_1,param_2,5,DAT_ram_3006b874 != '\0'), iVar1 == 0 &&
        (iVar1 = FUN_ram_40021822(param_1,param_2,0xf,(int)DAT_ram_3006b852), iVar1 == 0)) &&
       ((iVar1 = FUN_ram_40021822(param_1,param_2,2,(int)DAT_ram_3006b848), iVar1 == 0 &&
        ((iVar1 = FUN_ram_40021822(param_1,param_2,3,(int)DAT_ram_3006b871), iVar1 == 0 &&
         (iVar1 = FUN_ram_40021822(param_1,param_2,4,(int)DAT_ram_3006b844), iVar1 == 0)))))))) &&
     ((iVar2 = FUN_ram_40021822(param_1,param_2,0x10,(int)DAT_ram_3006b851),
      iVar1 = _DAT_ram_3006b86c, iVar2 == 0 &&
      (((DAT_ram_3006b870 == '\0' ||
        (((((iVar2 = FUN_ram_40021822(param_1,param_2,6,(int)(char)_DAT_ram_3006b86c), iVar2 == 0 &&
            (iVar2 = FUN_ram_40021822(param_1,param_2,7,(int)(char)((uint)iVar1 >> 8)), iVar2 == 0))
           && (iVar2 = FUN_ram_40021822(param_1,param_2,8,(int)(char)((uint)iVar1 >> 0x10)),
              iVar2 == 0)) &&
          ((iVar2 = FUN_ram_40021822(param_1,param_2,9,iVar1 >> 0x18), iVar1 = _DAT_ram_3006b868,
           iVar2 == 0 &&
           (iVar2 = FUN_ram_40021822(param_1,param_2,10,(int)(char)_DAT_ram_3006b868), iVar2 == 0)))
          ) && ((iVar2 = FUN_ram_40021822(param_1,param_2,0xb,(int)(char)((uint)iVar1 >> 8)),
                iVar2 == 0 &&
                ((iVar2 = FUN_ram_40021822(param_1,param_2,0xc,(int)(char)((uint)iVar1 >> 0x10)),
                 iVar2 == 0 &&
                 (iVar1 = FUN_ram_40021822(param_1,param_2,0xd,iVar1 >> 0x18), iVar1 == 0)))))))) &&
       (iVar1 = FUN_ram_40021822(param_1,param_2,0xe,DAT_ram_3006b870 != '\0'), iVar1 == 0)))))) {
    iVar1 = 0;
    do {
      if ((-1 < (char)(&DAT_ram_30049e0c)[iVar1]) &&
         (iVar2 = FUN_ram_40021822(param_1,param_2,iVar1 + 0x11U & 0xff,
                                   (int)(char)(&DAT_ram_30049e0c)[iVar1]), iVar2 != 0)) {
        return -1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
    iVar1 = 0;
    do {
      if ((-1 < (char)(&DAT_ram_30049e10)[iVar1]) &&
         (iVar2 = FUN_ram_40021822(param_1,param_2,iVar1 + 0x15U & 0xff,
                                   (int)(char)(&DAT_ram_30049e10)[iVar1]), iVar2 != 0)) {
        return -1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x20);
    if (((DAT_ram_3006b858 == '\0') ||
        ((((iVar1 = FUN_ram_40021822(param_1,param_2,0x35,(int)(char)_DAT_ram_3006b85a), iVar1 == 0
           && (iVar1 = FUN_ram_40021822(param_1,param_2,0x36,
                                        (int)(char)((ushort)_DAT_ram_3006b85a >> 8)), iVar1 == 0))
          && (iVar1 = FUN_ram_40021822(param_1,param_2,0x37,(int)(char)_DAT_ram_3006b85e),
             iVar1 == 0)) &&
         (iVar1 = FUN_ram_40021822(param_1,param_2,0x38,(int)(char)((ushort)_DAT_ram_3006b85e >> 8))
         , iVar1 == 0)))) &&
       (((iVar1 = FUN_ram_40021822(param_1,param_2,0x3b,(int)(char)DAT_ram_3006b85c), iVar1 == 0 &&
         (iVar1 = FUN_ram_40021822(param_1,param_2,0x3c,(int)DAT_ram_30049e31), iVar1 == 0)) &&
        (iVar1 = FUN_ram_40021822(param_1,param_2,0x3d,
                                  (int)(char)(DAT_ram_3006b85c ^ DAT_ram_30049e31 * '!' ^ 0xa7)),
        iVar1 == 0)))) {
      iVar1 = FUN_ram_40021822(param_1,param_2,0x3e,1);
      return -(uint)(iVar1 != 0);
    }
  }
  return -1;
}


/* NanoCore 1.11, address 0x40021b90.
 * REA evidence: ev_0d7f62e4c8b50aa92e676f9942bc27d60f373e73a41937daba4cfb89f3b8d5e6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40021b90(int *param_1,uint *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  undefined1 uVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  byte bVar36;
  char *pcVar37;
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
  ushort uVar41;
  int iVar42;
  uint uVar43;
  int iVar44;
  uint uVar45;
  bool bVar46;
  bool bVar47;
  int iVar48;
  byte bVar49;
  byte bVar50;
  uint uVar51;
  uint uStack_15c;
  uint uStack_150;
  uint uStack_144;
  uint uStack_138;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_110;
  uint uStack_10c;
  undefined4 uStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined4 uStack_98;
  char acStack_94 [4];
  int iStack_90;
  short sStack_8c;
  byte bStack_8a;
  byte bStack_89;
  uint uStack_88;
  int iStack_84;
  undefined1 local_80 [32];
  char acStack_60 [44];
  
  uStack_98 = 0xffffffff;
  acStack_94[0] = '\0';
  acStack_94[1] = '\0';
  acStack_94[2] = '\0';
  acStack_94[3] = '\0';
  uStack_ac = param_3;
  FUN_ram_4000304c(local_80,&DAT_ram_40095498,0x20);
  acStack_60[0] = '\0';
  acStack_60[1] = '\0';
  acStack_60[2] = '\0';
  acStack_60[3] = '\0';
  memset(acStack_60 + 4,0,0x1c);
  bVar6 = 100;
  uStack_124 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_138 = 0;
  uStack_144 = 0;
  uStack_150 = 0;
  uStack_15c = 0;
  bVar21 = false;
  bVar20 = false;
  bVar19 = false;
  bVar18 = false;
  uVar41 = 0;
  uVar40 = 0;
  uVar39 = 0;
  uVar38 = 0;
  bVar31 = false;
  bVar30 = false;
  bVar29 = false;
  bVar28 = false;
  bVar27 = false;
  bVar26 = false;
  bVar25 = false;
  bVar24 = false;
  uVar22 = 0;
  bVar8 = false;
  bVar5 = 0;
  bVar23 = false;
  bVar3 = false;
  bVar17 = false;
  bVar16 = false;
  bVar15 = false;
  bVar14 = false;
  uStack_10c = 100;
  bVar2 = true;
  bVar1 = true;
  iStack_a8 = 0x2010;
  uVar51 = 0;
  bVar7 = false;
  bVar4 = false;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  uVar32 = 100;
  uVar33 = 100;
  iVar48 = 0;
  uStack_110 = 0;
  bVar46 = true;
  bVar47 = false;
  uVar45 = 0;
  iStack_a4 = 0x32544553;
  iVar44 = 0x1000;
  bVar49 = 0;
  bVar50 = 100;
LAB_ram_40021c7a:
  do {
    iVar42 = iVar44 + 0x10;
    if (iVar42 == iStack_a8) {
      iVar44 = 0x2000;
LAB_ram_40021c94:
      if (uStack_ac != 0) {
        if (bVar9) {
          _DAT_ram_3006b84c = CONCAT14(bVar47,_DAT_ram_3006b84c);
        }
        if (bVar10) {
          DAT_ram_30049e30 = bVar46;
        }
        if (bVar11) {
          DAT_ram_30049e08 = bVar1;
        }
        if (bVar12) {
          DAT_ram_3006b874 = bVar2;
        }
        if (bVar13) {
          _DAT_ram_3006b84c = CONCAT16((char)uStack_110,_DAT_ram_3006b84c);
        }
        if (bVar14) {
          DAT_ram_3006b848 = (undefined1)iVar48;
          _DAT_ram_3006b84c = FUN_ram_40000d44(DAT_ram_40094e90,(float)iVar48 / DAT_ram_40094ea8);
        }
        if (bVar15) {
          DAT_ram_3006b871 = (undefined1)uVar33;
          _DAT_ram_3006b872 = FUN_ram_400216f6(uVar33);
        }
        if (bVar16) {
          DAT_ram_3006b844 = (undefined1)uVar32;
          _DAT_ram_3006b846 = FUN_ram_400216f6(uVar32);
        }
        if (bVar17) {
          _DAT_ram_3006b84c = CONCAT15((char)uStack_10c,_DAT_ram_3006b84c);
        }
        iVar48 = 0;
        do {
          if (acStack_94[iVar48] != '\0') {
            (&DAT_ram_30049e0c)[iVar48] = *(undefined1 *)((int)&uStack_98 + iVar48);
          }
          iVar48 = iVar48 + 1;
        } while (iVar48 != 4);
        iVar48 = 0;
        do {
          if (acStack_60[iVar48] != '\0') {
            (&DAT_ram_30049e10)[iVar48] = local_80[iVar48];
          }
          iVar48 = iVar48 + 1;
        } while (iVar48 != 0x20);
        if ((((bVar18) && (bVar19)) && (bVar20)) && (bVar21)) {
          _DAT_ram_3006b85a = uVar39 << 8 | uVar38;
          _DAT_ram_3006b85e = uVar41 << 8 | uVar40;
          DAT_ram_3006b858 = 1;
        }
        if (bVar8) {
          DAT_ram_30049e31 = bVar6;
          DAT_ram_3006b85c = bVar5;
        }
        DAT_ram_3006b864 = uVar22;
        if (bVar23) {
          if (bVar3) {
            if (((((bVar24) && (bVar25)) && ((bVar26 && ((bVar27 && (bVar28)))))) && (bVar29)) &&
               ((bVar30 && (bVar31)))) {
              _DAT_ram_3006b86c =
                   uStack_150 << 8 | uStack_144 << 0x10 | uStack_15c | uStack_138 << 0x18;
              _DAT_ram_3006b868 = uStack_128 << 8 | uStack_12c << 0x10 | uVar51 | uStack_124 << 0x18
              ;
              DAT_ram_3006b870 = 1;
            }
          }
          else {
            DAT_ram_3006b870 = 0;
            _DAT_ram_3006b86c = 0;
            _DAT_ram_3006b868 = 0;
          }
        }
      }
      if (param_1 != (int *)0x0) {
        *param_1 = iVar44;
      }
      *param_2 = uVar45;
      return;
    }
    iVar34 = FUN_ram_400216b8(iVar44,&iStack_90);
    if ((iVar34 != 0) || (iStack_90 == -1)) goto LAB_ram_40021c94;
    iVar44 = iVar42;
  } while (((iStack_90 != iStack_a4) || (sStack_8c != 1)) ||
          (iVar42 = FUN_ram_40007554(0,&iStack_90,0xc), iStack_84 != iVar42));
  if (uVar45 < uStack_88) {
    uVar45 = uStack_88;
  }
  uVar43 = (uint)bStack_8a;
  if (uVar43 == 1) {
    bVar9 = true;
    bVar47 = bStack_89 != 0;
    goto LAB_ram_40021c7a;
  }
  if (uVar43 == 0x39) {
    bVar10 = true;
    bVar46 = bStack_89 != 0;
    goto LAB_ram_40021c7a;
  }
  if (uVar43 == 0x3a) {
    bVar1 = bStack_89 != 0;
    bVar11 = true;
    goto LAB_ram_40021c7a;
  }
  if (uVar43 == 5) {
    bVar2 = bStack_89 != 0;
    bVar12 = true;
    goto LAB_ram_40021c7a;
  }
  if (uVar43 == 0xf) {
    uStack_110 = (uint)(char)bStack_89;
    if ((int)uStack_110 < 0x11) {
      if ((int)uStack_110 < 0) {
        uStack_110 = 0;
      }
    }
    else {
      uStack_110 = 0x10;
    }
    uStack_110 = uStack_110 & 0xff;
    bVar13 = true;
    goto LAB_ram_40021c7a;
  }
  if (uVar43 == 2) {
    bVar36 = bStack_89;
    if ('\x14' < (char)bStack_89) {
      bVar36 = 0x14;
    }
    if ((char)bVar36 < -0x14) {
      bVar36 = 0xec;
    }
    iVar48 = (int)(char)bVar36;
    bVar14 = true;
    goto LAB_ram_40021c7a;
  }
  if (uVar43 == 3) {
    uVar33 = (uint)(char)bStack_89;
    if ((int)uVar33 < 0x65) {
      if ((int)uVar33 < 0) {
        uVar33 = 0;
      }
    }
    else {
      uVar33 = 100;
    }
    uVar33 = uVar33 & 0xff;
    bVar15 = true;
    goto LAB_ram_40021c7a;
  }
  if (uVar43 == 4) {
    uVar32 = (uint)(char)bStack_89;
    if ((int)uVar32 < 0x65) {
      if ((int)uVar32 < 0) {
        uVar32 = 0;
      }
    }
    else {
      uVar32 = 100;
    }
    uVar32 = uVar32 & 0xff;
    bVar16 = true;
    goto LAB_ram_40021c7a;
  }
  if (uVar43 == 0x10) {
    uStack_10c = (uint)(char)bStack_89;
    if ((int)uStack_10c < 0x65) {
      if ((int)uStack_10c < 0) {
        uStack_10c = 0;
      }
    }
    else {
      uStack_10c = 100;
    }
    uStack_10c = uStack_10c & 0xff;
    bVar17 = true;
    goto LAB_ram_40021c7a;
  }
  if (uVar43 == 6) {
    uStack_15c = (uint)bStack_89;
    bVar24 = true;
    goto LAB_ram_40021c7a;
  }
  if (uVar43 == 7) {
    uStack_150 = (uint)bStack_89;
    bVar25 = true;
    goto LAB_ram_40021c7a;
  }
  if (uVar43 == 8) {
    uStack_144 = (uint)bStack_89;
    bVar26 = true;
    goto LAB_ram_40021c7a;
  }
  if (uVar43 == 9) {
    uStack_138 = (uint)bStack_89;
    bVar27 = true;
    goto LAB_ram_40021c7a;
  }
  if (uVar43 == 10) {
    uVar51 = (uint)bStack_89;
    bVar28 = true;
    goto LAB_ram_40021c7a;
  }
  if (uVar43 == 0xb) {
    uStack_128 = (uint)bStack_89;
    bVar29 = true;
    goto LAB_ram_40021c7a;
  }
  if (uVar43 == 0xc) {
    uStack_12c = (uint)bStack_89;
    bVar30 = true;
    goto LAB_ram_40021c7a;
  }
  if (uVar43 == 0xd) {
    uStack_124 = (uint)bStack_89;
    bVar31 = true;
    goto LAB_ram_40021c7a;
  }
  if (uVar43 == 0xe) {
    bVar3 = bStack_89 != 0;
    bVar23 = true;
    goto LAB_ram_40021c7a;
  }
  uVar35 = uVar43 - 0x11;
  if ((uVar35 & 0xff) < 4) {
    *(byte *)((int)&uStack_ac + uVar43 + 3) = bStack_89;
    pcVar37 = acStack_94;
  }
  else {
    uVar35 = uVar43 - 0x15;
    if (0x1f < (uVar35 & 0xff)) {
      if (uVar43 == 0x35) {
        uVar38 = (ushort)bStack_89;
        bVar18 = true;
        goto LAB_ram_40021c7a;
      }
      if (uVar43 == 0x36) {
        uVar39 = (ushort)bStack_89;
        bVar19 = true;
        goto LAB_ram_40021c7a;
      }
      if (uVar43 == 0x37) {
        uVar40 = (ushort)bStack_89;
        bVar20 = true;
        goto LAB_ram_40021c7a;
      }
      if (uVar43 == 0x38) {
        uVar41 = (ushort)bStack_89;
        bVar21 = true;
        goto LAB_ram_40021c7a;
      }
      if (uVar43 == 0x3b) {
        bVar4 = true;
        bVar49 = bStack_89;
        goto LAB_ram_40021c7a;
      }
      if (uVar43 == 0x3c) {
        bVar7 = true;
        bVar50 = bStack_89;
        goto LAB_ram_40021c7a;
      }
      if (uVar43 == 0x3d) {
        if (bVar4) {
          bVar4 = false;
          if (!bVar7) goto LAB_ram_40021c7a;
          if (((bVar49 < bVar50) && (bVar50 < 0x65)) &&
             (bStack_89 == (byte)(bVar49 ^ bVar50 * '!' ^ 0xa7))) {
            bVar5 = bVar49;
            bVar6 = bVar50;
            bVar8 = bVar7;
          }
        }
        bVar7 = false;
        goto LAB_ram_40021c7a;
      }
      if ((uVar43 == 0x3e) && (bStack_89 == 1)) {
        uVar22 = 1;
      }
      goto LAB_ram_40021c7a;
    }
    *(byte *)((int)&uStack_98 + uVar43 + 3) = bStack_89;
    pcVar37 = acStack_60;
  }
  pcVar37[uVar35] = '\x01';
  goto LAB_ram_40021c7a;
}


