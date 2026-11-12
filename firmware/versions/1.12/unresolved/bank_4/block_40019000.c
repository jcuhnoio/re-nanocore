/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40019000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400193e8.
 * REA evidence: ev_132f659a2c3a81149db05640f465b6ddc4fb3399cd32b4d2b248d13340ac1e3c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400193e8(void)

{
  FUN_ram_4004ad3c(FUN_ram_40018942,0);
  return;
}


/* NanoCore 1.12, address 0x400193f6.
 * REA evidence: ev_6d607b07e9bd5f78c025a14de8e264c6b63e92b468a67f12f60d19dbb8ae77b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400193f6(int param_1)

{
  int iVar1;
  
  FUN_ram_4002c904();
  iVar1 = FUN_ram_400169e6();
  if (iVar1 != 0) {
    FUN_ram_400193e8();
    if (param_1 != 0) {
      FUN_ram_4004c712(param_1);
    }
    _DAT_ram_300699f4 = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x40019424.
 * REA evidence: ev_511600d2178c851226bdb6e28db6be9ce22b799a6b2303fcc21beabe3afd9c41
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40019424(void)

{
  if (_DAT_ram_30069f6c != 0) {
    FUN_ram_4004ad3c(&LAB_ram_4001883c,0);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001943e.
 * REA evidence: ev_28c90249ddae754a0fce16522d6e73846d2ff38440023aca25e394e525faa5ed
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001943e(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_400061cc();
    _DAT_ram_3006a24c = _DAT_ram_3006a24c + param_1;
    if (_DAT_ram_3006a24c < -0x80) {
      _DAT_ram_3006a24c = -0x80;
    }
    if (0x80 < _DAT_ram_3006a24c) {
      _DAT_ram_3006a24c = 0x80;
    }
    FUN_ram_400061ee();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001947e.
 * REA evidence: ev_a526ea5603dc35dc710c21db8ed7982209d34358295b477c1c2ff6b0c55bae94
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001947e(void)

{
  FUN_ram_400061cc();
  _DAT_ram_3006a248 = _DAT_ram_3006a248 + 1;
  FUN_ram_400061ee();
  return;
}


/* NanoCore 1.12, address 0x4001949c.
 * REA evidence: ev_da460838ab2d15fff254a93257a8e98a3719b2547ca4fb577e1796a9ed17b885
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001949c(void)

{
  FUN_ram_400061cc();
  _DAT_ram_3006a250 = _DAT_ram_3006a250 + 1;
  FUN_ram_400061ee();
  return;
}


/* NanoCore 1.12, address 0x400194ba.
 * REA evidence: ev_57dc6cb26e30237177901a2bc5ac60cfbc5a6d781171da83dcffc6c302af1dca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400194ba(void)

{
  FUN_ram_400061cc();
  DAT_ram_3006a254 = 1;
  FUN_ram_400061ee();
  return;
}


/* NanoCore 1.12, address 0x400194d4.
 * REA evidence: ev_fead73290990980fcc98b9fb7abdd268832a4ddf34d4743426386d9eb3e2bfe9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400194d4(undefined2 param_1)

{
  FUN_ram_400061cc();
  DAT_ram_3006a25e = 1;
  _DAT_ram_3006a25c = param_1;
  FUN_ram_400061ee();
  return;
}


/* NanoCore 1.12, address 0x400194fa.
 * REA evidence: ev_c5d7ae0acb797997d0749c96ddec670c3aa0f44eee44e0a497dc6f7ce5025893
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400194fa(void)

{
  int iVar1;
  undefined3 uVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_40;
  
  FUN_ram_4004d2b6();
  uVar3 = FUN_ram_4004d43e();
  uVar2 = FUN_ram_40014c88();
  FUN_ram_400489d2(uVar3,uVar2,0);
  FUN_ram_400489f0(uVar3,0xff,0);
  _DAT_ram_3006a390 = 6;
  DAT_ram_30069ad4 = 0xff;
  _DAT_ram_3006a24c = 0;
  _DAT_ram_3006a258 = 0;
  _DAT_ram_3006a248 = 0;
  _DAT_ram_3006a250 = 0;
  DAT_ram_3006a254 = 0;
  DAT_ram_3006a25e = 0;
  _DAT_ram_3006a25c = 0;
  _DAT_ram_3006a26c = 0;
  _DAT_ram_3006a260 = 0;
  _DAT_ram_3006a264 = 0;
  _DAT_ram_3006a444 = 0;
  _DAT_ram_3006a43c = 0;
  _DAT_ram_30069ad8 = 0;
  _DAT_ram_30069ad0 = 0;
  _DAT_ram_3006a274 = 0;
  _DAT_ram_3006a440 = 0;
  _DAT_ram_3006a268 = 0;
  DAT_ram_3006a270 = 0;
  _DAT_ram_30069f6c = uVar3;
  FUN_ram_40028d0e(0x30069fb4);
  _DAT_ram_3006a3b4 = 0;
  _DAT_ram_3006a3a0 = 0;
  DAT_ram_3006a3a4 = 0;
  DAT_ram_3006a39b = 0;
  DAT_ram_3006a342 = 0;
  FUN_ram_40016702();
  DAT_ram_3004acf0 = 0xffffffff;
  _DAT_ram_3006a2f0 = 0;
  DAT_ram_3006a2a4 = 0;
  DAT_ram_3006a326 = 0;
  DAT_ram_3006a325 = 0;
  DAT_ram_3006a340 = 0;
  DAT_ram_3006a448 = 0;
  _DAT_ram_3006a2a0 = 0;
  DAT_ram_3006a29c = 1;
  DAT_ram_3004acec = 0xffffffff;
  DAT_ram_3004ace8 = 0xffffffff;
  DAT_ram_3004ace6 = 0xff;
  DAT_ram_3004ace5 = 0xff;
  _DAT_ram_3006a2a8 = (undefined **)0x0;
  _DAT_ram_3006a438 = 0;
  _DAT_ram_30069f70 = 0;
  _DAT_ram_3006a2ac = 0;
  _DAT_ram_30069a48 = 0;
  _DAT_ram_3006a298 = 0;
  DAT_ram_3006a324 = 0;
  _DAT_ram_3006a320 = 0;
  DAT_ram_3006a338 = 0;
  _DAT_ram_3006a348 = 0;
  _DAT_ram_3006a38c = 0;
  _DAT_ram_30069fc0 = 0;
  _DAT_ram_30069fc8 = 0;
  DAT_ram_30069fc4 = 0;
  DAT_ram_30069fcc = 0;
  _DAT_ram_30069ef0 = 0;
  DAT_ram_300699f9 = 0;
  DAT_ram_30069acc = 0;
  DAT_ram_30069a00 = 0;
  DAT_ram_3004ace4 = 1;
  _DAT_ram_300699fc = 0;
  _DAT_ram_30069a04 = 0;
  DAT_ram_30069adc = 0;
  thunk_FUN_ram_400256bc(0x30069b20);
  FUN_ram_40016c50(0);
  _DAT_ram_30069eec = FUN_ram_40043b84(uVar3);
  FUN_ram_40045014(_DAT_ram_30069eec,0,0);
  FUN_ram_400450a2(_DAT_ram_30069eec,0x140,0xf0);
  FUN_ram_400489d2(_DAT_ram_30069eec,uVar2,0);
  FUN_ram_400489f0(_DAT_ram_30069eec,0xff,0);
  FUN_ram_40048a2e(_DAT_ram_30069eec,0,0);
  FUN_ram_40043ba4(_DAT_ram_30069eec,0x10);
  FUN_ram_40043ba4(_DAT_ram_30069eec,2);
  FUN_ram_40048de6(_DAT_ram_30069eec,0);
  _DAT_ram_30069ef0 = FUN_ram_40056db0(_DAT_ram_30069eec);
  FUN_ram_40057382(_DAT_ram_30069ef0,0xb);
  FUN_ram_40045014(_DAT_ram_30069ef0,0,0);
  FUN_ram_400450a2(_DAT_ram_30069ef0,0x140,0xf0);
  iVar1 = 0;
  FUN_ram_400440ce(_DAT_ram_30069ef0,1);
  FUN_ram_40043ba4(_DAT_ram_30069ef0,0x10);
  FUN_ram_40043ba4(_DAT_ram_30069ef0,2);
  _DAT_ram_30069fc0 = FUN_ram_40056db0(uVar3);
  FUN_ram_40057382(_DAT_ram_30069fc0,0xb);
  FUN_ram_400450a2(_DAT_ram_30069fc0,0x55,0x14);
  FUN_ram_40045014(_DAT_ram_30069fc0,0x15,0xb);
  FUN_ram_400440ce(_DAT_ram_30069fc0,1);
  FUN_ram_40043ba4(_DAT_ram_30069fc0,0x10);
  FUN_ram_40043ba4(_DAT_ram_30069fc0,2);
  _DAT_ram_30069fc8 = FUN_ram_40056db0(uVar3);
  FUN_ram_40057382(_DAT_ram_30069fc8,0xb);
  FUN_ram_400450a2(_DAT_ram_30069fc8,0x55,0x14);
  FUN_ram_40045014(_DAT_ram_30069fc8,0x15,0x23);
  FUN_ram_400440ce(_DAT_ram_30069fc8,1);
  FUN_ram_40043ba4(_DAT_ram_30069fc8,0x10);
  puVar5 = (undefined1 *)0x30069b68;
  FUN_ram_40043ba4(_DAT_ram_30069fc8,2);
  _DAT_ram_30069f70 = FUN_ram_40056db0(uVar3);
  FUN_ram_40057382(_DAT_ram_30069f70,9);
  FUN_ram_40043ba4(_DAT_ram_30069f70,0x10);
  FUN_ram_40043ba4(_DAT_ram_30069f70,2);
  FUN_ram_400440ce(_DAT_ram_30069f70,1);
  FUN_ram_40016a32(_DAT_ram_30069f70);
  _DAT_ram_3006a2ac = FUN_ram_40056db0(uVar3);
  FUN_ram_40057382(_DAT_ram_3006a2ac,9);
  FUN_ram_40043ba4(_DAT_ram_3006a2ac,0x10);
  FUN_ram_40043ba4(_DAT_ram_3006a2ac,2);
  FUN_ram_400440ce(_DAT_ram_3006a2ac,1);
  FUN_ram_40016a5c(_DAT_ram_3006a2ac);
  _DAT_ram_30069a48 = FUN_ram_40056db0(uVar3);
  FUN_ram_40057382(_DAT_ram_30069a48,0xb);
  FUN_ram_40043ba4(_DAT_ram_30069a48,0x10);
  FUN_ram_40043ba4(_DAT_ram_30069a48,2);
  FUN_ram_400440ce(_DAT_ram_30069a48,1);
  FUN_ram_40016a86(_DAT_ram_30069a48);
  FUN_ram_40017090(&DAT_ram_30069ef4,0x40,s_bg_main_ram_4009a094);
  do {
    if (iVar1 - 3U < 2) {
      *puVar5 = 0;
    }
    else {
      FUN_ram_40017090(puVar5,0x40,(&PTR_s_settings_ram_4009a0e0_ram_4009a148)[iVar1]);
    }
    iVar1 = iVar1 + 1;
    puVar5 = puVar5 + 0x40;
  } while (iVar1 != 0xe);
  FUN_ram_40017090(&DAT_ram_3006a34c,0x40,s_saved_flag_ram_4009a09c);
  FUN_ram_40017090(&DAT_ram_3006a3f8,0x40,s_distortion_ram_4009a710 + 8);
  FUN_ram_40017090(&DAT_ram_3006a3b8,0x40,s_bat_off_ram_4009c534 + 4);
  FUN_ram_40017090(&DAT_ram_30069f74,0x40,s_master_knob_ram_4009a044);
  FUN_ram_40017090(&DAT_ram_3006a2b0,0x40,s_preset_knob_ram_4009a050);
  FUN_ram_40017090(&DAT_ram_30069b28,0x40,&DAT_ram_4009a03c);
  FUN_ram_40017090(&DAT_ram_30069a4c,0x40,s_battery_low_ram_4009a014);
  FUN_ram_40017090(&DAT_ram_30069a8c,0x40,s_battery_mid_ram_4009a030);
  FUN_ram_40017090(&DAT_ram_30069a08,0x40,s_battery_full_ram_4009a020);
  puVar5 = &DAT_ram_30069fd0;
  iVar1 = 0;
  do {
    FUN_ram_40005520(&uStack_40,0x10,s_volume_meter__u_ram_4009a0a8,iVar1);
    iVar1 = iVar1 + 1;
    FUN_ram_40017090(puVar5,0x40,&uStack_40);
    puVar5 = puVar5 + 0x40;
  } while (iVar1 != 9);
  _DAT_ram_30069b00 = 0;
  _DAT_ram_30069b04 = 1;
  _DAT_ram_30069b08 = 2;
  _DAT_ram_30069b0c = 3;
  _DAT_ram_30069b10 = 4;
  _DAT_ram_30069b14 = 5;
  _DAT_ram_30069b18 = 6;
  _DAT_ram_30069b1c = 7;
  FUN_ram_400166a0();
  FUN_ram_40016714();
  DAT_ram_300699f8 = FUN_ram_400169e6();
  FUN_ram_4002d1d8();
  FUN_ram_4002d29e();
  FUN_ram_4002d574();
  FUN_ram_400219ca();
  FUN_ram_4002d414();
  FUN_ram_40017f54();
  FUN_ram_40017f9a();
  FUN_ram_400179ac();
  FUN_ram_40004f92(&DAT_ram_30069f34,0,0x38);
  FUN_ram_40004f92(0x30069ae0,0,0x20);
  if (DAT_ram_300699f8 == '\0') {
    if (_DAT_ram_300699f4 == 0) {
      _DAT_ram_300699f4 = FUN_ram_4004c6ac(FUN_ram_400193f6,500,0);
    }
  }
  else {
    FUN_ram_40016c9e();
    FUN_ram_400168dc();
    FUN_ram_40017392(uVar3);
  }
  FUN_ram_400177ee(1);
  FUN_ram_4001792c(1);
  _DAT_ram_3006a394 = FUN_ram_40043b84(uVar3);
  FUN_ram_400188c4();
  FUN_ram_40043ba4(_DAT_ram_3006a394,2);
  FUN_ram_400440ce(_DAT_ram_3006a394,1);
  FUN_ram_4001dfee(uVar3);
  FUN_ram_4001e66a(0x30069ae0,8);
  FUN_ram_40020bec(uVar3);
  FUN_ram_4002144a(uVar3);
  FUN_ram_4001a502(uVar3);
  FUN_ram_4001a706(0x30069ae0,8);
  FUN_ram_4002023e(uVar3);
  _DAT_ram_3006a348 = FUN_ram_40056db0(uVar3);
  FUN_ram_400450a2(_DAT_ram_3006a348,200,0xa0);
  FUN_ram_40045014(_DAT_ram_3006a348,0x3c,0x28);
  FUN_ram_400440ce(_DAT_ram_3006a348,1);
  FUN_ram_40043ba4(_DAT_ram_3006a348,0x10);
  FUN_ram_40043ba4(_DAT_ram_3006a348,2);
  FUN_ram_40016e5c();
  _DAT_ram_3006a2f0 = FUN_ram_400579de(uVar3);
  FUN_ram_4005809e(_DAT_ram_3006a2f0,1);
  FUN_ram_400450a2(_DAT_ram_3006a2f0,0x200007d1);
  FUN_ram_40017a50(uVar3,_DAT_ram_3006a2f0,0x3006a300,2);
  FUN_ram_40017da2();
  FUN_ram_40017118();
  _DAT_ram_3006a26c = FUN_ram_40043b84(uVar3);
  FUN_ram_40045014(_DAT_ram_3006a26c,0,0);
  FUN_ram_400450a2(_DAT_ram_3006a26c,0x140,0xf0);
  uStack_40 = (uint)uStack_40._3_1_ << 0x18;
  FUN_ram_400489d2(_DAT_ram_3006a26c,uStack_40,0);
  FUN_ram_400489f0(_DAT_ram_3006a26c,0xb2,0);
  FUN_ram_40048a2e(_DAT_ram_3006a26c,0,0);
  FUN_ram_40048afe(_DAT_ram_3006a26c,0,0);
  FUN_ram_40043ba4(_DAT_ram_3006a26c,0x10);
  FUN_ram_40043ba4(_DAT_ram_3006a26c,2);
  FUN_ram_400440ce(_DAT_ram_3006a26c,1);
  _DAT_ram_3006a260 = FUN_ram_40043b84(_DAT_ram_3006a26c);
  FUN_ram_400450a2(_DAT_ram_3006a260,0x70,10);
  FUN_ram_40016a04(_DAT_ram_3006a260);
  FUN_ram_400489d2(_DAT_ram_3006a260,0x101010,0);
  FUN_ram_400489f0(_DAT_ram_3006a260,0xff,0);
  FUN_ram_400489fe(_DAT_ram_3006a260,0xececec,0);
  FUN_ram_40048a2e(_DAT_ram_3006a260,1,0);
  FUN_ram_40048afe(_DAT_ram_3006a260,0,0);
  FUN_ram_40043ba4(_DAT_ram_3006a260,0x10);
  FUN_ram_40043ba4(_DAT_ram_3006a260,2);
  _DAT_ram_3006a264 = FUN_ram_40043b84(_DAT_ram_3006a260);
  FUN_ram_40045014(_DAT_ram_3006a264,1,1);
  FUN_ram_400450a2(_DAT_ram_3006a264,0,6);
  FUN_ram_400489d2(_DAT_ram_3006a264,0xececec,0);
  FUN_ram_400489f0(_DAT_ram_3006a264,0xff,0);
  FUN_ram_40048a2e(_DAT_ram_3006a264,0,0);
  FUN_ram_40048afe(_DAT_ram_3006a264,0,0);
  FUN_ram_40043ba4(_DAT_ram_3006a264,0x10);
  FUN_ram_40043ba4(_DAT_ram_3006a264,2);
  uStack_54 = CONCAT13(uStack_54._3_1_,0xffffff);
  _DAT_ram_3006a444 = FUN_ram_40043b84(uVar3);
  FUN_ram_400450a2(_DAT_ram_3006a444,0x96,0x5c);
  FUN_ram_40016a04(_DAT_ram_3006a444);
  FUN_ram_400489d2(_DAT_ram_3006a444,0x121214,0);
  FUN_ram_400489f0(_DAT_ram_3006a444,0,0);
  FUN_ram_400489fe(_DAT_ram_3006a444,0xffffff,0);
  FUN_ram_40048a1e(_DAT_ram_3006a444,0,0);
  FUN_ram_40048a2e(_DAT_ram_3006a444,1,0);
  FUN_ram_40048afe(_DAT_ram_3006a444,0x16,0);
  FUN_ram_4004899a(_DAT_ram_3006a444,0,0);
  FUN_ram_400489a8(_DAT_ram_3006a444,0,0);
  FUN_ram_400489b6(_DAT_ram_3006a444,0,0);
  FUN_ram_400489c4(_DAT_ram_3006a444,0,0);
  FUN_ram_40048a4e(_DAT_ram_3006a444,0xe,0);
  FUN_ram_40048a5e(_DAT_ram_3006a444,5,0);
  uStack_50 = uStack_50 & 0xff000000;
  FUN_ram_40048a6e(_DAT_ram_3006a444,uStack_50,0);
  FUN_ram_40048a8e(_DAT_ram_3006a444,0,0);
  FUN_ram_40043ba4(_DAT_ram_3006a444,0x10);
  FUN_ram_40043ba4(_DAT_ram_3006a444,2);
  FUN_ram_400440ce(_DAT_ram_3006a444,1);
  _DAT_ram_3006a43c = FUN_ram_400579de(_DAT_ram_3006a444);
  FUN_ram_40058020(_DAT_ram_3006a43c,&DAT_ram_4009a0b8);
  FUN_ram_4005809e(_DAT_ram_3006a43c,4);
  FUN_ram_40048aae(_DAT_ram_3006a43c,uStack_54,0);
  FUN_ram_40048ace(_DAT_ram_3006a43c,0,0);
  FUN_ram_40048aee(_DAT_ram_3006a43c,2,0);
  FUN_ram_40016f0e();
  FUN_ram_40043ba4(_DAT_ram_3006a43c,0x10);
  FUN_ram_40043ba4(_DAT_ram_3006a43c,2);
  _DAT_ram_30069ad8 = FUN_ram_40043b84(uVar3);
  FUN_ram_400450a2(_DAT_ram_30069ad8,0xdc,0x50);
  FUN_ram_40016a04(_DAT_ram_30069ad8);
  uStack_54 = CONCAT13(uStack_54._3_1_,0x80000);
  uStack_54 = CONCAT22(uStack_54._2_2_,0x808);
  FUN_ram_400489d2(_DAT_ram_30069ad8,uStack_54,0);
  FUN_ram_400489f0(_DAT_ram_30069ad8,0xe5,0);
  FUN_ram_400489fe(_DAT_ram_30069ad8,0xff4d4d,0);
  FUN_ram_40048a2e(_DAT_ram_30069ad8,2,0);
  FUN_ram_40048afe(_DAT_ram_30069ad8,8,0);
  uVar3 = _DAT_ram_30069ad8;
  FUN_ram_400489b6(_DAT_ram_30069ad8,0,0);
  FUN_ram_400489c4(uVar3,0,0);
  FUN_ram_4004899a(uVar3,0,0);
  FUN_ram_400489a8(uVar3,0,0);
  FUN_ram_40043ba4(_DAT_ram_30069ad8,0x10);
  FUN_ram_40043ba4(_DAT_ram_30069ad8,2);
  FUN_ram_400440ce(_DAT_ram_30069ad8,1);
  _DAT_ram_30069ad0 = FUN_ram_400579de(_DAT_ram_30069ad8);
  FUN_ram_40058020(_DAT_ram_30069ad0,s_NO_BT_ram_40099fe8);
  FUN_ram_4005809e(_DAT_ram_30069ad0,4);
  FUN_ram_400450a2(_DAT_ram_30069ad0,0xd0,0x200007d1);
  FUN_ram_40048aee(_DAT_ram_30069ad0,2,0);
  FUN_ram_40048aae(_DAT_ram_30069ad0,0xff4d4d,0);
  ppuVar4 = _DAT_ram_3006a2a8;
  if (_DAT_ram_3006a2a8 == (undefined **)0x0) {
    ppuVar4 = &PTR_LAB_ram_400136ec_ram_40099ce0;
  }
  FUN_ram_40048ade(_DAT_ram_30069ad0,ppuVar4,0);
  uVar3 = _DAT_ram_30069ad0;
  FUN_ram_4004895a(_DAT_ram_30069ad0,0x180,0);
  FUN_ram_4004896a(uVar3,0x180,0);
  FUN_ram_4004897a(_DAT_ram_30069ad0,0x20000032,0);
  FUN_ram_4004898a(_DAT_ram_30069ad0,0x20000032,0);
  FUN_ram_40016a04(_DAT_ram_30069ad0);
  FUN_ram_40043ba4(_DAT_ram_30069ad0,0x10);
  FUN_ram_40043ba4(_DAT_ram_30069ad0,2);
  FUN_ram_40016b84();
  FUN_ram_4004c6ac(FUN_ram_40018bc2,0x10,0);
  FUN_ram_4004c6ac(FUN_ram_400176ee,0x32,0);
  iVar1 = FUN_ram_40015110();
  if (iVar1 != 0) {
    FUN_ram_400184c6();
  }
  FUN_ram_400183ee();
  FUN_ram_400455dc(_DAT_ram_30069f6c);
  FUN_ram_40049e48(0);
  DAT_ram_30069adc = 1;
  FUN_ram_40029d6c(1);
  FUN_ram_40029e5a();
  return;
}


