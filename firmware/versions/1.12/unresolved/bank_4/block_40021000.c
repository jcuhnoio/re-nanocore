/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40021000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40021060.
 * REA evidence: ev_eccb193b992ba961c3b636b64f3945fba3a3ddc54e8b32574f06620d1ee462ec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40021060(void)

{
  FUN_ram_40005520(0x3006b748,8,&DAT_ram_4009a214,DAT_ram_3004ad40);
  FUN_ram_40017bd8(_DAT_ram_3006b724,0x3006b728,0x3006b748);
  if (_DAT_ram_3006b724 != 0) {
    FUN_ram_4004502e(_DAT_ram_3006b724,0x200007d1);
    FUN_ram_40017b64(_DAT_ram_3006b724,0x3006b728);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400210ce.
 * REA evidence: ev_a609ea0f0c6b3a735ad67ce6a8fd0ebb9888554c55b406707ba146f78e022467
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400210ce(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar2 = _DAT_ram_3006b620;
  bVar1 = _DAT_ram_3006b620 != 0;
  uVar3 = 0;
  if (_DAT_ram_3006b620 != 0) {
    uVar3 = FUN_ram_4002d24a();
  }
  FUN_ram_40017d68(_DAT_ram_3006b724,0x3006b728,bVar1);
  FUN_ram_40017d68(_DAT_ram_3006b680,0x3006b684,bVar1);
  FUN_ram_40017d60(0x3006b728,uVar3 & 1);
  FUN_ram_40017d60(0x3006b684,uVar3 & 1);
  if (((iVar2 != 0) && (_DAT_ram_3006b724 != 0)) && (_DAT_ram_3006b680 != 0)) {
    FUN_ram_40048ade(_DAT_ram_3006b724,iVar2,0);
    iVar5 = 0;
    do {
      iVar4 = *(int *)(iVar5 * 4 + 0x3006b728);
      if (iVar4 != 0) {
        FUN_ram_40048ade(iVar4,iVar2,0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    FUN_ram_4004502e(_DAT_ram_3006b724,0x200007d1);
    FUN_ram_40045068(_DAT_ram_3006b724,uVar6);
    FUN_ram_400460be(_DAT_ram_3006b724,_DAT_ram_3006b624,0x14,8,0);
    iVar5 = 0;
    FUN_ram_40017b64(_DAT_ram_3006b724,0x3006b728);
    FUN_ram_40048ade(_DAT_ram_3006b680,iVar2,0);
    do {
      iVar4 = *(int *)(iVar5 * 4 + 0x3006b684);
      if (iVar4 != 0) {
        FUN_ram_40048ade(iVar4,iVar2,0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 8);
    FUN_ram_40045068(_DAT_ram_3006b680,uVar6);
    FUN_ram_400460be(_DAT_ram_3006b680,_DAT_ram_3006b79c,0xe,0,6);
    FUN_ram_40017b64(_DAT_ram_3006b680,0x3006b684);
    FUN_ram_40021060();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002123c.
 * REA evidence: ev_6997215e132dea5b77fcf30863f4338758db4e3785fe15dbde3e9c0d8ded3fb1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002123c(void)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3006b620;
  if (_DAT_ram_3006b620 != 0) {
    _DAT_ram_3006b620 = 0;
    FUN_ram_400210ce();
    FUN_ram_40059ff0(iVar1);
  }
  _DAT_ram_3006b620 = FUN_ram_40017ef4(s_font_tuner_ram_4009a088,s_font_default_ram_4009a06c);
  FUN_ram_400210ce();
  return;
}


/* NanoCore 1.12, address 0x40021282.
 * REA evidence: ev_15665de2e073f14601b0bd43ef3b5dae73b1e2edf115a08ffddf2954b4e7ed30
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40021282(void)

{
  undefined4 uVar1;
  
  uVar1 = 0x3006b6e4;
  if (DAT_ram_3004ad44 == '\0') {
    uVar1 = 0x3006b6a4;
  }
  FUN_ram_400172bc(_DAT_ram_3006b754,uVar1);
  return;
}


/* NanoCore 1.12, address 0x400212a8.
 * REA evidence: ev_b1826220b80dfc20cb64e7f5daa1acbe9c26b503fb13994e139a6d71b5a020e2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400212a8(void)

{
  int iVar1;
  int iVar2;
  uint uStack_18;
  uint auStack_14 [2];
  
  uStack_18 = FUN_ram_40014c88();
  iVar1 = FUN_ram_4002d3a8(1);
  iVar2 = FUN_ram_4002d3c6(1,auStack_14);
  if (iVar2 != 0) {
    uStack_18 = auStack_14[0];
  }
  uStack_18 = uStack_18 & 0xffffff;
  if (_DAT_ram_3006b618 != 0) {
    FUN_ram_400489d2(_DAT_ram_3006b618,uStack_18,0);
    FUN_ram_400489f0(_DAT_ram_3006b618,0xff,0);
  }
  if (_DAT_ram_3006b5d4 != 0) {
    if (iVar1 == 0) {
      FUN_ram_400440ce(_DAT_ram_3006b5d4,1);
    }
    else {
      FUN_ram_400172bc(_DAT_ram_3006b5d4,0x3006b5d8);
    }
  }
  FUN_ram_400172bc(_DAT_ram_3006b624,0x3006b628);
  FUN_ram_40021282();
  FUN_ram_400172bc(_DAT_ram_3006b758,0x3006b75c);
  FUN_ram_400172bc(_DAT_ram_3006b79c,0x3006b7a0);
  return;
}


/* NanoCore 1.12, address 0x4002135c.
 * REA evidence: ev_b9e2b39fecb3ed5624ac16b07763fb58026c3b602413fa60fce9c000bd8eddb8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002135c(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined3 uVar3;
  int iVar4;
  undefined4 uStack_24;
  
  if ((((_DAT_ram_3006b750 != 1) || (_DAT_ram_3006b754 == 0)) ||
      (iVar4 = FUN_ram_40043c8a(_DAT_ram_3006b754,1), iVar2 = _DAT_ram_3006b754, iVar4 != 0)) &&
     ((_DAT_ram_3006b724 == 0 ||
      (iVar4 = FUN_ram_40043c8a(_DAT_ram_3006b724,1), iVar2 = _DAT_ram_3006b724, iVar4 != 0)))) {
    iVar2 = 0;
  }
  uVar1 = (undefined1)((uint)uStack_24 >> 0x18);
  if ((DAT_ram_3006b61c == '\0') || (_DAT_ram_3006b750 != 0)) {
    uVar3 = FUN_ram_4001709e();
    uStack_24 = CONCAT13(uVar1,uVar3);
  }
  else {
    uStack_24 = CONCAT13(uVar1,0xff0000);
  }
  if (_DAT_ram_3006b724 != 0) {
    FUN_ram_40048aae(_DAT_ram_3006b724,uStack_24,0);
  }
  FUN_ram_40018184(iVar2);
  uVar3 = FUN_ram_400170ea(DAT_ram_3006b61c);
  uStack_24 = CONCAT13(uStack_24._3_1_,uVar3);
  FUN_ram_40018310(uStack_24);
  return;
}


/* NanoCore 1.12, address 0x40021424.
 * REA evidence: ev_cd15059c62e07c2dbe3e9ef9e1e3bc862a62f835c30bdfb59bc5b82f8b6835e4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40021424(void)

{
  _DAT_ram_3006b670 = (ulonglong)(uint)(float)_DAT_ram_3006b66c;
  _DAT_ram_3006b67c = _DAT_ram_3006b670;
  FUN_ram_40020ec2(0);
  return;
}


/* NanoCore 1.12, address 0x4002144a.
 * REA evidence: ev_979512faeab5e325563383529e81d920a3e64d1201f43831981adfc11adc8818
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002144a(undefined4 param_1)

{
  undefined4 uVar1;
  
  DAT_ram_3006b5d0 = 0;
  DAT_ram_3006b61c = 0;
  DAT_ram_3004ad44 = 1;
  _DAT_ram_3006b750 = 0;
  _DAT_ram_3006b620 = 0;
  _DAT_ram_3006b5d4 = 0;
  _DAT_ram_3006b7e0 = 0x91;
  _DAT_ram_3006b66c = 0x8e;
  _DAT_ram_3006b668 = 0x56;
  _DAT_ram_3006b678 = 0x38;
  _DAT_ram_3006b670 = (ulonglong)DAT_ram_4009a4fc;
  _DAT_ram_3006b67c = _DAT_ram_3006b670;
  FUN_ram_40017090(0x3006b5d8,0x40,s_bg_tuner_ram_4009a4ac);
  FUN_ram_40017090(0x3006b628,0x40,s_tuner_ram_4009a0f4);
  FUN_ram_40017090(0x3006b6e4,0x40,s_distortion_ram_4009a710 + 8);
  FUN_ram_40017090(0x3006b6a4,0x40,s_bat_off_ram_4009c534 + 4);
  FUN_ram_40017090(0x3006b75c,0x40,s_tuner_slot1_ram_4009a4b8);
  FUN_ram_40017090(0x3006b7a0,0x40,s_tuner_slot2_ram_4009a4c4);
  _DAT_ram_3006b618 = FUN_ram_40043b84(param_1);
  FUN_ram_400450a2(_DAT_ram_3006b618,0x140,0xf0);
  FUN_ram_400489f0(_DAT_ram_3006b618,0xff,0);
  FUN_ram_40048a2e(_DAT_ram_3006b618,0,0);
  FUN_ram_400440ce(_DAT_ram_3006b618,1);
  _DAT_ram_3006b5d4 = FUN_ram_40056db0(_DAT_ram_3006b618);
  FUN_ram_40057382(_DAT_ram_3006b5d4,0xb);
  FUN_ram_40045014(_DAT_ram_3006b5d4,0,0);
  FUN_ram_400450a2(_DAT_ram_3006b5d4,0x140,0xf0);
  FUN_ram_400440ce(_DAT_ram_3006b5d4,1);
  FUN_ram_40043ba4(_DAT_ram_3006b5d4,0x10);
  FUN_ram_40043ba4(_DAT_ram_3006b5d4,2);
  _DAT_ram_3006b624 = FUN_ram_40056db0(_DAT_ram_3006b618);
  FUN_ram_40057382(_DAT_ram_3006b624,0xb);
  FUN_ram_40045014(_DAT_ram_3006b624,8,8);
  FUN_ram_400450a2(_DAT_ram_3006b624,0x26,0x26);
  _DAT_ram_3006b754 = FUN_ram_40056db0(_DAT_ram_3006b618);
  FUN_ram_40057382(_DAT_ram_3006b754,0xb);
  FUN_ram_40045014(_DAT_ram_3006b754,0x10b,0xf);
  FUN_ram_400450a2(_DAT_ram_3006b754,0x2d,0x17);
  _DAT_ram_3006b724 = FUN_ram_400579de(_DAT_ram_3006b618);
  FUN_ram_4005809e(_DAT_ram_3006b724,1);
  FUN_ram_400450a2(_DAT_ram_3006b724,0x200007d1);
  FUN_ram_400460be(_DAT_ram_3006b724,_DAT_ram_3006b624,0x14,8,0);
  FUN_ram_40017a50(_DAT_ram_3006b618,_DAT_ram_3006b724,0x3006b728,1);
  _DAT_ram_3006b758 = FUN_ram_40056db0(_DAT_ram_3006b618);
  FUN_ram_40057382(_DAT_ram_3006b758,0xb);
  FUN_ram_40045014(_DAT_ram_3006b758,0x32,0x3c);
  FUN_ram_400450a2(_DAT_ram_3006b758,0xdc,0x50);
  _DAT_ram_3006b79c = FUN_ram_40056db0(_DAT_ram_3006b618);
  FUN_ram_40057382(_DAT_ram_3006b79c,0xb);
  FUN_ram_40045014(_DAT_ram_3006b79c,0x8e,0x91);
  FUN_ram_400450a2(_DAT_ram_3006b79c,0x23,0x23);
  uVar1 = FUN_ram_400579de(_DAT_ram_3006b618);
  _DAT_ram_3006b680 = uVar1;
  FUN_ram_4005809e(uVar1,1);
  FUN_ram_400450a2(_DAT_ram_3006b680,0x28,0x1c);
  FUN_ram_400460be(_DAT_ram_3006b680,_DAT_ram_3006b79c,0xe,0,6);
  FUN_ram_40017a50(_DAT_ram_3006b618,_DAT_ram_3006b680,0x3006b684,2);
  FUN_ram_40017bd8(_DAT_ram_3006b680,0x3006b684,s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20
                  );
  FUN_ram_4002123c();
  FUN_ram_400212a8();
  FUN_ram_40021424();
  if (_DAT_ram_3006b7e4 == 0) {
    _DAT_ram_3006b7e4 = FUN_ram_4004c6ac(FUN_ram_40020f4e,0x21,0);
  }
  return;
}


/* NanoCore 1.12, address 0x40021796.
 * REA evidence: ev_e51e9e31c713a8830d4e8a6e7a509f46981af52f6b708e5eacbb38a3990d1f72
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40021796(void)

{
  if (_DAT_ram_3006b618 != 0) {
    DAT_ram_3006b5d0 = 1;
    DAT_ram_3006b61c = 0;
    _DAT_ram_3006b750 = 0;
    DAT_ram_3004ad3c = 0xffffffff;
    FUN_ram_40021060();
    FUN_ram_400212a8();
    FUN_ram_40021424();
    if (_DAT_ram_3006b618 != 0) {
      FUN_ram_40043ba4(_DAT_ram_3006b618,1);
    }
    FUN_ram_4002135c();
    FUN_ram_4000e58c(1);
    FUN_ram_4000e5be(DAT_ram_3004ad44);
    FUN_ram_4002a4f6(1);
    FUN_ram_40020e8c();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40021810.
 * REA evidence: ev_46b25f3d8ee2e310a22631de20ad1383f764f56d3ad57da6a5041808cdf09133
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40021810(void)

{
  FUN_ram_4002a4f6(0);
  FUN_ram_4000e58c(0);
  DAT_ram_3006b5d0 = 0;
  FUN_ram_40021424();
  if (_DAT_ram_3006b618 != 0) {
    FUN_ram_400440ce(_DAT_ram_3006b618,1);
  }
  FUN_ram_40018184(0);
  return;
}


/* NanoCore 1.12, address 0x40021846.
 * REA evidence: ev_8c990f69123f4154c67977e58780bbf5e23841aef860149f0566764a64feed46
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40021846(void)

{
  return DAT_ram_3006b5d0;
}


/* NanoCore 1.12, address 0x40021850.
 * REA evidence: ev_f8a748b1502e073105a82a92e5fc3aaa5990c2af68598e4b38516065bd3081c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40021850(int param_1)

{
  if ((DAT_ram_3006b5d0 != '\0') && (param_1 != 0)) {
    if (DAT_ram_3006b61c != '\0') {
      if (_DAT_ram_3006b750 == 0) {
        param_1 = param_1 + DAT_ram_3004ad40;
        if (0x1e0 < param_1) {
          param_1 = 0x1e0;
        }
        if (param_1 < 400) {
          param_1 = 400;
        }
        if (DAT_ram_3004ad40 != param_1) {
          DAT_ram_3004ad40 = param_1;
          FUN_ram_40021060();
          FUN_ram_40020e8c();
          return;
        }
      }
      else if (_DAT_ram_3006b750 == 1) {
        if ((bool)DAT_ram_3004ad44 != 0 < param_1) {
          DAT_ram_3004ad44 = 0 < param_1;
          FUN_ram_4000e5be();
          FUN_ram_40021282();
          return;
        }
      }
      return;
    }
    param_1 = param_1 + _DAT_ram_3006b750;
    if (param_1 < 1) {
      if (param_1 < 0) {
        param_1 = 0;
      }
    }
    else {
      param_1 = 1;
    }
    if (param_1 != _DAT_ram_3006b750) {
      _DAT_ram_3006b750 = param_1;
      FUN_ram_4002135c();
      return;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x400218f8.
 * REA evidence: ev_75fe17ed1bef86974dde882ee952c2405ef2ef221eae10581ad5a394e8fc64a0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400218f8(void)

{
  if (DAT_ram_3006b5d0 != '\0') {
    DAT_ram_3006b61c = DAT_ram_3006b61c == '\0';
    FUN_ram_4002135c();
    return 0;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40021934.
 * REA evidence: ev_1935a589e75f0c4fdc5b0c787da0e545074e4dfd21559e93c465c8d86d3be62c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40021934(void)

{
  if (_DAT_ram_3006b618 == 0) {
    return;
  }
  FUN_ram_4004d0b2(0x3006b628);
  FUN_ram_4004d0b2(0x3006b6e4);
  FUN_ram_4004d0b2(0x3006b6a4);
  FUN_ram_4004d0b2(0x3006b75c);
  FUN_ram_4004d0b2(0x3006b7a0);
  FUN_ram_4004d0b2(0x3006b5d8);
  FUN_ram_4002123c();
  FUN_ram_400212a8();
  if (DAT_ram_3006b5d0 != '\0') {
    FUN_ram_4002135c();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400219ac.
 * REA evidence: ev_3fff33f515a475c09dc2d98b180abfd7dacaeeffc136d23ed546b36072a4643c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400219ac(undefined4 *param_1)

{
  return *param_1;
}


/* NanoCore 1.12, address 0x400219ca.
 * REA evidence: ev_bf48ec568b89463f151988f8c3230f8a0c427606f063c670b38b799e75cf2d6d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400219ca(void)

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
  
  DAT_ram_3004ad48 = 0xffffff;
  _DAT_ram_3006b7e8 = 0;
  iVar1 = FUN_ram_4002ce1e(s__style_ram_4009a52e + 2,&iStack_3c);
  if ((((iVar1 == 0) && (0xf < uStack_38)) &&
      (iVar1 = FUN_ram_4002cd84(iStack_3c + 0x10,auStack_30,0x10), iVar1 == 0)) &&
     ((iVar1 = FUN_ram_400219ac(auStack_30), iVar1 == 0x31595453 && (sStack_2c == 1)))) {
    uVar2 = FUN_ram_400219ac(auStack_24);
    if ((uStack_2a & 1) != 0) {
      uVar3 = FUN_ram_400219ac(auStack_28);
      DAT_ram_3004ad48 = uVar3 & 0xffffff;
    }
    if ((uStack_2a & 2) != 0) {
      _DAT_ram_3006b7e8 = uVar2 & 0xffffff;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40021a74.
 * REA evidence: ev_0dc5db0fd7c7994bb2bc80b130db750a6e873dde95b7434417d7f5e8586573f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40021a74(void)

{
  return DAT_ram_3004ad48;
}


/* NanoCore 1.12, address 0x40021a7e.
 * REA evidence: ev_9cffa1a779affeace65d7f546369cd087136d1f73be45da4cb0e76017f7f8ae3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40021a7e(void)

{
  return _DAT_ram_3006b7e8;
}


/* NanoCore 1.12, address 0x40021a88.
 * REA evidence: ev_962a1949b07bdd1cef082f9635a503d22e6465f8380175615f743d033a2da89f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_40022a0e(void)

{
  return (int)DAT_ram_3006b7f0;
}


/* NanoCore 1.12, address 0x40021a8c.
 * REA evidence: ev_5fda0eb183672b9b1fab30dd04f3f9ad2bd74752b1943dc1266aaa649efe155d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_ram_40022a18(void)

{
  return _DAT_ram_3006b7f4;
}


/* NanoCore 1.12, address 0x40021a90.
 * REA evidence: ev_fa89295ad6fccbccb1271d3772468837a57c637b2e36e295f17f51911efd7014
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_ram_40022a22(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (0x14 < param_1) {
    param_1 = 0x14;
  }
  if (param_1 < -0x14) {
    param_1 = -0x14;
  }
  uVar2 = FUN_ram_40000d44(DAT_ram_40099f38,(float)param_1 / DAT_ram_40099f50);
  iVar1 = 0;
  if (DAT_ram_3006b7f0 != (char)param_1) {
    DAT_ram_3006b7f0 = (char)param_1;
    _DAT_ram_3006b7f4 = uVar2;
    iVar1 = FUN_ram_4002275e(2);
    iVar1 = -(uint)(iVar1 != 0);
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40021a94.
 * REA evidence: ev_e78c78af3e46e20098d232ef0abba45a31108dea4961cdbee331afa79d9ebb9a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool thunk_FUN_ram_40022920(void)

{
  return DAT_ram_3006b7f8 != '\0';
}


/* NanoCore 1.12, address 0x40021a98.
 * REA evidence: ev_97e35c2c4086ecb837983f1b46727f9a83addd3e1be0172deeb78f15558abb35
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_4002292e(int param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = param_1 != 0;
  iVar2 = 0;
  if ((bool)DAT_ram_3006b7f8 != bVar1) {
    DAT_ram_3006b7f8 = bVar1;
    iVar2 = FUN_ram_4002275e(1,bVar1);
    thunk_FUN_ram_4002bea2(bVar1);
    iVar2 = -(uint)(iVar2 != 0);
  }
  return iVar2;
}


/* NanoCore 1.12, address 0x40021a9c.
 * REA evidence: ev_d3e38b1b4a71007aa04929a304ac8ddecff00c2a3dcf7ecbada167c21cc4a788
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_40021a9c(void)

{
  int iVar1;
  uint uVar2;
  int aiStack_14 [3];
  
  iVar1 = FUN_ram_40006b6e();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40006b3a(), iVar1 < 1)) {
    return 0;
  }
  if (_DAT_ram_3006b7fc != 0) {
    aiStack_14[0] = 0;
    uVar2 = FUN_ram_40006e3c(aiStack_14);
    if (((uVar2 != 0) && (uVar2 <= _DAT_ram_3006b7fc)) &&
       (_DAT_ram_3006b7fc < uVar2 + aiStack_14[0] * 0x40)) {
      return _DAT_ram_3006b7fc;
    }
  }
  _DAT_ram_3006b7fc = FUN_ram_40006dec(&DAT_ram_4009a538);
  return _DAT_ram_3006b7fc;
}


/* NanoCore 1.12, address 0x40021af6.
 * REA evidence: ev_33830717d47151de30faf8d28d7138fb94d4d7a1c1e386974f77e33cf388e676
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40021af6(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40021a9c();
  iVar2 = -1;
  if (iVar1 != 0) {
    iVar2 = -1;
    if (param_1 + 0x10U <= *(uint *)(iVar1 + 0x38)) {
      iVar1 = fal_partition_read(iVar1,param_1,param_2,0x10);
      iVar2 = -(uint)(iVar1 != 0x10);
    }
  }
  return iVar2;
}


/* NanoCore 1.12, address 0x40021b34.
 * REA evidence: ev_cb1a4a285dcdeaa46166f51de8b7208ecc9befe64bb044e8ede26d10d149202b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40021b34(int param_1)

{
  int iVar1;
  float fVar2;
  
  if (param_1 != 0) {
    if (100 < param_1) {
      param_1 = 100;
    }
    fVar2 = (float)FUN_ram_40000d44(DAT_ram_40099f38,
                                    (((float)(param_1 + -1) / DAT_ram_4009a560) * DAT_ram_4009a564 +
                                    DAT_ram_4009a568) / DAT_ram_40099f50);
    iVar1 = (int)(fVar2 * DAT_ram_4009a56c + DAT_ram_4009675c);
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


/* NanoCore 1.12, address 0x40021bbc.
 * REA evidence: ev_c9372413dd4ff34afc2a899515fea0e0940704908f74b9f48abd489fec0f7fb0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40021bbc(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40021a9c();
  iVar2 = -1;
  if ((iVar1 != 0) && (0x1fff < *(uint *)(iVar1 + 0x38))) {
    iVar2 = FUN_ram_40006ee4(iVar1,0x1000,0x1000);
    iVar2 = iVar2 >> 0x1f;
  }
  return iVar2;
}


/* NanoCore 1.12, address 0x40021be4.
 * REA evidence: ev_382aafa73df9e4e6c871cd845567f0983f67e9ac23d66acccc5432215960ede6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40021be4(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_ram_40004f92(&uStack_20,0,0x10);
  uStack_20 = 0x32544553;
  uStack_1c = 1;
  uStack_1a = param_3;
  uStack_19 = param_4;
  uStack_18 = param_2;
  uStack_14 = FUN_ram_40007450(0,&uStack_20,0xc);
  iVar1 = FUN_ram_40021a9c();
  iVar2 = -1;
  if (iVar1 != 0) {
    iVar2 = -1;
    if (param_1 + 0x10U <= *(uint *)(iVar1 + 0x38)) {
      iVar1 = FUN_ram_40006e9a(iVar1,param_1,&uStack_20,0x10);
      iVar2 = -(uint)(iVar1 != 0x10);
    }
  }
  return iVar2;
}


/* NanoCore 1.12, address 0x40021c60.
 * REA evidence: ev_14f99e6cd5f4cab548ccbafab222107f9dfd51a9a06d9eb03d0e567f70add250
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40021c60(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_2;
  *param_2 = iVar2 + 1;
  iVar2 = FUN_ram_40021be4(*param_1,iVar2 + 1);
  if (iVar2 == 0) {
    *param_1 = *param_1 + 0x10;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40021c8a.
 * REA evidence: ev_2f24b2d8d3b472aa5dc721ae1728190118d34876068a758e5b129f10110ccc6e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40021c8a(void)

{
  return;
}


/* NanoCore 1.12, address 0x40021c8c.
 * REA evidence: ev_653a69312b35f9f92c702850c41db26927ea55f3360d9524b9e968ed4ef164fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40021c8c(int *param_1,uint *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
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
  bool bVar22;
  bool bVar23;
  bool bVar24;
  undefined1 uVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  uint uVar38;
  char *pcVar39;
  ushort uVar40;
  ushort uVar41;
  ushort uVar42;
  ushort uVar43;
  uint uVar44;
  byte bVar45;
  int iVar46;
  int iVar47;
  uint uVar48;
  byte bVar49;
  byte bVar50;
  int iVar51;
  uint uVar52;
  uint uStack_160;
  uint uStack_154;
  uint uStack_148;
  uint uStack_13c;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_108;
  uint uStack_104;
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
  uStack_ac = param_2;
  FUN_ram_4000303c(local_80,&DAT_ram_4009a53c,0x20);
  acStack_60[0] = '\0';
  acStack_60[1] = '\0';
  acStack_60[2] = '\0';
  acStack_60[3] = '\0';
  memset(acStack_60 + 4,0,0x1c);
  bVar9 = 100;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_13c = 0;
  uStack_148 = 0;
  uStack_154 = 0;
  uStack_160 = 0;
  bVar24 = false;
  bVar23 = false;
  bVar22 = false;
  bVar21 = false;
  uVar43 = 0;
  uVar42 = 0;
  uVar41 = 0;
  uVar40 = 0;
  bVar34 = false;
  bVar33 = false;
  bVar32 = false;
  bVar31 = false;
  bVar30 = false;
  bVar29 = false;
  bVar28 = false;
  bVar27 = false;
  uVar25 = 0;
  bVar11 = false;
  bVar8 = 0;
  bVar26 = false;
  bVar6 = false;
  bVar20 = false;
  bVar19 = false;
  bVar18 = false;
  bVar17 = false;
  uStack_104 = 100;
  bVar5 = true;
  bVar4 = true;
  bVar3 = true;
  iStack_a8 = 0x2010;
  uVar52 = 0;
  bVar10 = false;
  bVar7 = false;
  bVar16 = false;
  bVar15 = false;
  bVar14 = false;
  bVar13 = false;
  bVar12 = false;
  uVar35 = 100;
  uVar36 = 100;
  iVar46 = 0;
  uStack_108 = 0;
  bVar1 = false;
  bVar2 = false;
  uVar48 = 0;
  iStack_a4 = 0x32544553;
  iVar47 = 0x1000;
  bVar49 = 0;
  bVar50 = 100;
LAB_ram_40021d78:
  do {
    iVar51 = iVar47 + 0x10;
    if (iVar51 == iStack_a8) {
      iVar47 = 0x2000;
LAB_ram_40021d90:
      if (param_3 != 0) {
        if (bVar12) {
          _DAT_ram_3006b7f4 = CONCAT14(bVar2,_DAT_ram_3006b7f4);
        }
        if (bVar13) {
          DAT_ram_3004ad74 = bVar3;
        }
        if (bVar14) {
          DAT_ram_3004ad4c = bVar4;
        }
        if (bVar15) {
          DAT_ram_3006b820 = bVar5;
        }
        if (bVar16) {
          _DAT_ram_3006b7f4 = CONCAT16((char)uStack_108,_DAT_ram_3006b7f4);
        }
        DAT_ram_3006b808 = bVar1;
        if (bVar17) {
          DAT_ram_3006b7f0 = (undefined1)iVar46;
          _DAT_ram_3006b7f4 = FUN_ram_40000d44(DAT_ram_40099f38,(float)iVar46 / DAT_ram_40099f50);
        }
        if (bVar18) {
          DAT_ram_3006b81d = (undefined1)uVar36;
          _DAT_ram_3006b81e = FUN_ram_40021b34(uVar36);
        }
        if (bVar19) {
          DAT_ram_3006b7ec = (undefined1)uVar35;
          _DAT_ram_3006b7ee = FUN_ram_40021b34(uVar35);
        }
        if (bVar20) {
          _DAT_ram_3006b7f4 = CONCAT15((char)uStack_104,_DAT_ram_3006b7f4);
        }
        iVar46 = 0;
        do {
          if (acStack_94[iVar46] != '\0') {
            (&DAT_ram_3004ad50)[iVar46] = *(undefined1 *)((int)&uStack_98 + iVar46);
          }
          iVar46 = iVar46 + 1;
        } while (iVar46 != 4);
        iVar46 = 0;
        do {
          if (acStack_60[iVar46] != '\0') {
            (&DAT_ram_3004ad54)[iVar46] = local_80[iVar46];
          }
          iVar46 = iVar46 + 1;
        } while (iVar46 != 0x20);
        if ((((bVar21) && (bVar22)) && (bVar23)) && (bVar24)) {
          _DAT_ram_3006b802 = uVar41 << 8 | uVar40;
          _DAT_ram_3006b806 = uVar43 << 8 | uVar42;
          DAT_ram_3006b800 = 1;
        }
        if (bVar11) {
          DAT_ram_3004ad75 = bVar9;
          DAT_ram_3006b804 = bVar8;
        }
        DAT_ram_3006b810 = uVar25;
        if (bVar26) {
          if (bVar6) {
            if (((((bVar27) && (bVar28)) && ((bVar29 && ((bVar30 && (bVar31)))))) && (bVar32)) &&
               ((bVar33 && (bVar34)))) {
              _DAT_ram_3006b818 =
                   uStack_154 << 8 | uStack_148 << 0x10 | uStack_160 | uStack_13c << 0x18;
              _DAT_ram_3006b814 = uStack_128 << 8 | uStack_12c << 0x10 | uStack_130 | uVar52 << 0x18
              ;
              DAT_ram_3006b81c = 1;
            }
          }
          else {
            DAT_ram_3006b81c = 0;
            _DAT_ram_3006b818 = 0;
            _DAT_ram_3006b814 = 0;
          }
        }
      }
      if (param_1 != (int *)0x0) {
        *param_1 = iVar47;
      }
      *uStack_ac = uVar48;
      return;
    }
    iVar37 = FUN_ram_40021af6(iVar47,&iStack_90);
    if ((iVar37 != 0) || (iStack_90 == -1)) goto LAB_ram_40021d90;
    iVar47 = iVar51;
  } while (((iStack_90 != iStack_a4) || (sStack_8c != 1)) ||
          (iVar51 = FUN_ram_40007450(0,&iStack_90,0xc), iStack_84 != iVar51));
  uVar38 = (uint)bStack_8a;
  if (uVar48 < uStack_88) {
    uVar48 = uStack_88;
  }
  if (uVar38 == 1) {
    bVar2 = bStack_89 != 0;
    bVar12 = true;
    goto LAB_ram_40021d78;
  }
  if (uVar38 == 0x48) {
    bVar1 = bStack_89 == 1;
    goto LAB_ram_40021d78;
  }
  if (uVar38 == 0x39) {
    bVar3 = bStack_89 != 0;
    bVar13 = true;
    goto LAB_ram_40021d78;
  }
  if (uVar38 == 0x3a) {
    bVar4 = bStack_89 != 0;
    bVar14 = true;
    goto LAB_ram_40021d78;
  }
  if (uVar38 == 5) {
    bVar5 = bStack_89 != 0;
    bVar15 = true;
    goto LAB_ram_40021d78;
  }
  if (uVar38 == 0xf) {
    uStack_108 = (uint)(char)bStack_89;
    if ((int)uStack_108 < 0x11) {
      if ((int)uStack_108 < 0) {
        uStack_108 = 0;
      }
    }
    else {
      uStack_108 = 0x10;
    }
    uStack_108 = uStack_108 & 0xff;
    bVar16 = true;
    goto LAB_ram_40021d78;
  }
  if (uVar38 == 2) {
    bVar45 = bStack_89;
    if ('\x14' < (char)bStack_89) {
      bVar45 = 0x14;
    }
    if ((char)bVar45 < -0x14) {
      bVar45 = 0xec;
    }
    iVar46 = (int)(char)bVar45;
    bVar17 = true;
    goto LAB_ram_40021d78;
  }
  if (uVar38 == 3) {
    uVar36 = (uint)(char)bStack_89;
    if ((int)uVar36 < 0x65) {
      if ((int)uVar36 < 0) {
        uVar36 = 0;
      }
    }
    else {
      uVar36 = 100;
    }
    uVar36 = uVar36 & 0xff;
    bVar18 = true;
    goto LAB_ram_40021d78;
  }
  if (uVar38 == 4) {
    uVar35 = (uint)(char)bStack_89;
    if ((int)uVar35 < 0x65) {
      if ((int)uVar35 < 0) {
        uVar35 = 0;
      }
    }
    else {
      uVar35 = 100;
    }
    uVar35 = uVar35 & 0xff;
    bVar19 = true;
    goto LAB_ram_40021d78;
  }
  if (uVar38 == 0x10) {
    uStack_104 = (uint)(char)bStack_89;
    if ((int)uStack_104 < 0x65) {
      if ((int)uStack_104 < 0) {
        uStack_104 = 0;
      }
    }
    else {
      uStack_104 = 100;
    }
    uStack_104 = uStack_104 & 0xff;
    bVar20 = true;
    goto LAB_ram_40021d78;
  }
  if (uVar38 == 6) {
    uStack_160 = (uint)bStack_89;
    bVar27 = true;
    goto LAB_ram_40021d78;
  }
  if (uVar38 == 7) {
    uStack_154 = (uint)bStack_89;
    bVar28 = true;
    goto LAB_ram_40021d78;
  }
  if (uVar38 == 8) {
    uStack_148 = (uint)bStack_89;
    bVar29 = true;
    goto LAB_ram_40021d78;
  }
  if (uVar38 == 9) {
    uStack_13c = (uint)bStack_89;
    bVar30 = true;
    goto LAB_ram_40021d78;
  }
  if (uVar38 == 10) {
    uStack_130 = (uint)bStack_89;
    bVar31 = true;
    goto LAB_ram_40021d78;
  }
  if (uVar38 == 0xb) {
    uStack_128 = (uint)bStack_89;
    bVar32 = true;
    goto LAB_ram_40021d78;
  }
  if (uVar38 == 0xc) {
    uStack_12c = (uint)bStack_89;
    bVar33 = true;
    goto LAB_ram_40021d78;
  }
  if (uVar38 == 0xd) {
    uVar52 = (uint)bStack_89;
    bVar34 = true;
    goto LAB_ram_40021d78;
  }
  if (uVar38 == 0xe) {
    bVar6 = bStack_89 != 0;
    bVar26 = true;
    goto LAB_ram_40021d78;
  }
  uVar44 = uVar38 - 0x11;
  if ((uVar44 & 0xff) < 4) {
    *(byte *)((int)&uStack_ac + uVar38 + 3) = bStack_89;
    pcVar39 = acStack_94;
  }
  else {
    uVar44 = uVar38 - 0x15;
    if (0x1f < (uVar44 & 0xff)) {
      if (uVar38 == 0x35) {
        uVar40 = (ushort)bStack_89;
        bVar21 = true;
        goto LAB_ram_40021d78;
      }
      if (uVar38 == 0x36) {
        uVar41 = (ushort)bStack_89;
        bVar22 = true;
        goto LAB_ram_40021d78;
      }
      if (uVar38 == 0x37) {
        uVar42 = (ushort)bStack_89;
        bVar23 = true;
        goto LAB_ram_40021d78;
      }
      if (uVar38 == 0x38) {
        uVar43 = (ushort)bStack_89;
        bVar24 = true;
        goto LAB_ram_40021d78;
      }
      if (uVar38 == 0x3b) {
        bVar7 = true;
        bVar49 = bStack_89;
        goto LAB_ram_40021d78;
      }
      if (uVar38 == 0x3c) {
        bVar10 = true;
        bVar50 = bStack_89;
        goto LAB_ram_40021d78;
      }
      if (uVar38 == 0x3d) {
        if (bVar7) {
          bVar7 = false;
          if (!bVar10) goto LAB_ram_40021d78;
          if (((bVar49 < bVar50) && (bVar50 < 0x65)) &&
             (bStack_89 == (byte)(bVar49 ^ bVar50 * '!' ^ 0xa7))) {
            bVar8 = bVar49;
            bVar9 = bVar50;
            bVar11 = bVar10;
          }
        }
        bVar10 = false;
        goto LAB_ram_40021d78;
      }
      if (uVar38 == 0x3e) {
        if (bStack_89 == 1) {
          uVar25 = 1;
        }
      }
      else if ((param_3 != 0) && (0x48 < uVar38)) {
        FUN_ram_40021c8a(uVar38,(int)(char)bStack_89);
      }
      goto LAB_ram_40021d78;
    }
    *(byte *)((int)&uStack_98 + uVar38 + 3) = bStack_89;
    pcVar39 = acStack_60;
  }
  pcVar39[uVar44] = '\x01';
  goto LAB_ram_40021d78;
}


