/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4000e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4000e4d2.
 * REA evidence: ev_d827f941d6b321766cb9da5c7bc9097c40321ce01b83c77a425e33446f8e67d2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000e4d2(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_ram_400002f4();
    uVar2 = _DAT_ram_3004e444;
    uVar1 = _DAT_ram_3004e440;
    *param_1 = _DAT_ram_3004e438;
    uVar3 = _DAT_ram_3004e448;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    uVar1 = _DAT_ram_3004e450;
    param_1[4] = uVar3;
    uVar4 = DAT_ram_3004e458;
    uVar2 = _DAT_ram_3004e454;
    param_1[6] = uVar1;
    param_1[7] = uVar2;
    *(undefined1 *)(param_1 + 8) = uVar4;
    *(undefined1 *)((int)param_1 + 0x21) = DAT_ram_3004e459;
    uVar4 = DAT_ram_3004e45b;
    *(undefined1 *)((int)param_1 + 0x22) = DAT_ram_3004e45a;
    *(undefined1 *)((int)param_1 + 0x23) = uVar4;
    FUN_ram_400002fa();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4000e52c.
 * REA evidence: ev_bcad31172ebc98d2f102fcc357c154a650906551e5efb2d8f042932bc69ef691
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000e52c(int param_1)

{
  if (param_1 < 0x65) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 100;
  }
  DAT_ram_3004ac94 = (ulonglong)(uint)((float)param_1 / DAT_ram_40096780);
  return;
}


/* NanoCore 1.12, address 0x4000e564.
 * REA evidence: ev_f38e1cb8875a5238fb6a39efa1cadeb46111a1264bbf1d136088fa6630429503
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4000e564(void)

{
  return DAT_ram_3004ac94._4_1_;
}


/* NanoCore 1.12, address 0x4000e56e.
 * REA evidence: ev_fe6fd5aa87e9c5a737fea7c17e7ee77ef204858568bebab408907f48564b894d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000e56e(int param_1)

{
  if (param_1 < 0x65) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 100;
  }
  DAT_ram_3004ac94._5_1_ = (char)param_1;
  return;
}


/* NanoCore 1.12, address 0x4000e58c.
 * REA evidence: ev_017c837651b42c7ed689372472fe8e9092ed72e3c09d373c2e3bb27e2aa485b2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000e58c(int param_1)

{
  FUN_ram_400002f4();
  DAT_ram_30051d6d = param_1 != 0;
  _DAT_ram_30053d80 = 0;
  _DAT_ram_30051d70 = 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x4000e5be.
 * REA evidence: ev_8dcca892adce31aa463a7c4bec2452aab778426f1d4055c13e2c166a250e5f3d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000e5be(int param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004ac9c = param_1 != 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x4000e5e0.
 * REA evidence: ev_474a2805ec79451b7628264fbaa317d69848d549f3719e37d054e6ccdf5e6597
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4000e5e0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = param_2, param_2 != 0)) {
    FUN_ram_400002f4();
    uVar2 = _DAT_ram_30053d80 - _DAT_ram_30051d70;
    if (0x1000 < uVar2) {
      _DAT_ram_30051d70 = _DAT_ram_30053d80 + -0x1000;
      uVar2 = 0x1000;
    }
    if (uVar2 < param_2) {
      uVar1 = uVar2;
    }
    for (uVar2 = 0; uVar2 != uVar1; uVar2 = uVar2 + 1) {
      *(undefined2 *)(param_1 + uVar2 * 2) =
           *(undefined2 *)((_DAT_ram_30051d70 + uVar2 & 0xfff) * 2 + 0x30051d80);
    }
    _DAT_ram_30051d70 = _DAT_ram_30051d70 + uVar1;
    FUN_ram_400002fa();
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4000e658.
 * REA evidence: ev_3a1dbd82b834f6093f9de34384ee9e00ce07c4e69992a0d0c9e26acb8665b675
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000e658(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_ram_40038d2c(_DAT_ram_3004f740);
  if (uVar1 == 0) {
    uVar2 = 0x2b11;
  }
  else {
    uVar2 = FUN_ram_40003bf8((int)((ulonglong)uVar1 * 0xac44),
                             (int)((ulonglong)uVar1 * 0xac44 >> 0x20),0x5622000,0);
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4000e68c.
 * REA evidence: ev_b4519bc6ec6f7df0a18299bdedb46af8e429a47fd31cc407640ff121fba1d36b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000e68c(void)

{
  FUN_ram_400002f4();
  _DAT_ram_3005cec2 = 0;
  _DAT_ram_3005cec0 = 0;
  DAT_ram_30058c90 = 0;
  DAT_ram_30053d90 = 0;
  DAT_ram_3004aca0 = 0x2000;
  _DAT_ram_30053d84 = 0;
  _DAT_ram_30053d94 = 0;
  _DAT_ram_30053d88 = 0;
  DAT_ram_3004aca4 = 0x10000;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x4000e6e8.
 * REA evidence: ev_13f64bb45c60ce3041199b6f9253ed180f3442dd2cfcc30121e105397ed25af9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000e6e8(int param_1,uint param_2)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return;
  }
  if (DAT_ram_30058c90 == '\0') {
    _DAT_ram_3005cec0 = 0;
    _DAT_ram_3005cec2 = 0;
    DAT_ram_30053d90 = 0;
    DAT_ram_30058c90 = '\x01';
  }
  else if (DAT_ram_30058c90 == '\x01') {
    uVar5 = _DAT_ram_3005cec2;
    if (_DAT_ram_3005cec2 < _DAT_ram_3005cec0) {
      uVar5 = _DAT_ram_3005cec2 + 0x2000;
    }
    if (0x3ff < (ushort)(uVar5 - _DAT_ram_3005cec0)) {
      DAT_ram_30058c90 = '\x02';
    }
  }
  uVar4 = (uint)DAT_ram_30053d90;
  uVar3 = 0;
  if (uVar4 != 0) {
    bVar1 = false;
    while( true ) {
      uVar2 = _DAT_ram_30053d8e;
      uVar7 = uVar4 + uVar3 & 0xff;
      if (3 < uVar7) break;
      if (uVar3 == param_2) goto LAB_ram_4000e896;
      bVar1 = true;
      (&DAT_ram_30053d8c)[uVar3 + uVar4] = *(undefined1 *)(param_1 + uVar3);
      uVar3 = uVar3 + 1;
    }
    if (bVar1) {
      DAT_ram_30053d90 = (byte)(uVar4 + uVar3);
    }
    if (uVar7 != 4) {
      return;
    }
    uVar4 = _DAT_ram_3005cec2 + 1 & 0x1fff;
    if ((_DAT_ram_3005cec0 == uVar4) || ((uint)_DAT_ram_3005cec0 == (uVar4 + 1 & 0x1fff))) {
      _DAT_ram_30053d88 = _DAT_ram_30053d88 + 1;
    }
    else {
      *(undefined2 *)((uint)_DAT_ram_3005cec2 * 2 + 0x30058ec0) = _DAT_ram_30053d8c;
      *(undefined2 *)(uVar4 * 2 + 0x30058ec0) = uVar2;
      _DAT_ram_3005cec2 = (ushort)(uVar4 + 1) & 0x1fff;
    }
    DAT_ram_30053d90 = 0;
  }
  uVar5 = _DAT_ram_3005cec2;
  uVar7 = (uint)_DAT_ram_3005cec2;
  uVar8 = param_2 - uVar3 & 0xfffffffc;
  uVar9 = uVar8 >> 1;
  uVar4 = 0x1ffe - (uVar7 - _DAT_ram_3005cec0 & 0x1fff) & 0xffff;
  if (uVar9 < uVar4) {
    uVar4 = uVar9;
  }
  uVar4 = uVar4 & 0xfffffffe;
  uVar6 = 0x2000 - uVar7;
  if (uVar4 <= 0x2000 - uVar7) {
    uVar6 = uVar4;
  }
  if (uVar6 != 0) {
    FUN_ram_4000303c(uVar7 * 2 + 0x30058ec0,param_1 + uVar3,uVar6 << 1);
  }
  if (uVar6 < uVar4) {
    FUN_ram_4000303c(0x30058ec0,param_1 + uVar3 + uVar6 * 2,(uVar4 - uVar6) * 2);
  }
  _DAT_ram_3005cec2 = uVar5 + (short)uVar4 & 0x1fff;
  _DAT_ram_30053d88 = (uVar9 - uVar4 >> 1) + _DAT_ram_30053d88;
  uVar7 = (uint)DAT_ram_30053d90;
  bVar1 = false;
  for (uVar3 = uVar3 + uVar8; uVar3 < param_2; uVar3 = uVar3 + 1) {
    if (uVar7 < 4) {
      (&DAT_ram_30053d8c)[uVar7] = *(undefined1 *)(param_1 + uVar3);
      uVar7 = uVar7 + 1 & 0xff;
      bVar1 = true;
    }
  }
LAB_ram_4000e896:
  if (bVar1) {
    DAT_ram_30053d90 = (byte)uVar7;
  }
  return;
}


/* NanoCore 1.12, address 0x4000e946.
 * REA evidence: ev_06d486b54aed9cf4f241c550578672ea6a907691e1e1cc24fd951b2e24386a05
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000e946(void)

{
  int iVar1;
  
  FUN_ram_4000b886();
  if ((_DAT_ram_3004e3c8 != 0) && (iVar1 = FUN_ram_40007e28(0x31,0x23,0,4,1), iVar1 == 0)) {
    FUN_ram_400064e4(0x19);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4000e97c.
 * REA evidence: ev_64ef10e7a5f46fb852de7a4eaf326ab63fd61c6b50090d52661ea20ba188d529
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000e97c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  _DAT_ram_3004e3c8 = FUN_ram_40040cec(&DAT_ram_400966c4);
  if ((_DAT_ram_3004e3c8 == 0) || (iVar1 = FUN_ram_40007e28(0,0xff,0xff,0x32,2), iVar1 != 0)) {
LAB_ram_4000e9ec:
    uVar3 = 0xffffffff;
  }
  else {
    FUN_ram_400064e4(10);
    iVar1 = 0x40096790;
    do {
      iVar2 = FUN_ram_40007e28(*(undefined1 *)(iVar1 + 3),*(undefined1 *)(iVar1 + 4),
                               *(undefined1 *)(iVar1 + 5),8,1);
      if (iVar2 != 0) goto LAB_ram_4000e9ec;
      iVar1 = iVar1 + 3;
      uVar3 = 0;
    } while (iVar1 != 0x400967d5);
  }
  return uVar3;
}


