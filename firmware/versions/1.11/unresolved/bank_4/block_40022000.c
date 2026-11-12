/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40022000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x400221d2.
 * REA evidence: ev_a1b1f3e614e6070c06cfd2652a168bb685380f086d802e7f5975fa8c02033245
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400221d2(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iStack_28;
  int aiStack_24 [2];
  
  iStack_28 = 0x1000;
  aiStack_24[0] = 0;
  iVar1 = FUN_ram_4002165e();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  FUN_ram_40021b90(&iStack_28,aiStack_24,0);
  if (0x2000 < (uint)(iStack_28 + param_3 * 0x10)) {
    iVar1 = FUN_ram_4002177e();
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    aiStack_24[0] = 0;
    iStack_28 = 0x1000;
    iVar1 = FUN_ram_4002184c(&iStack_28,aiStack_24);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    if (0x2000 < (uint)(param_3 * 0x10 + iStack_28)) {
      return 0xffffffff;
    }
  }
  iVar1 = 0;
  do {
    aiStack_24[0] = aiStack_24[0] + 1;
    iVar2 = FUN_ram_400217a6(iStack_28,aiStack_24[0],*(undefined1 *)(param_1 + iVar1),
                             (int)*(char *)(param_2 + iVar1));
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    iVar1 = iVar1 + 1;
    iStack_28 = iStack_28 + 0x10;
  } while (param_3 != iVar1);
  _DAT_ram_3006b860 = aiStack_24[0];
  return 0;
}


/* NanoCore 1.11, address 0x4002226e.
 * REA evidence: ev_686e22a49df40db281f89649c92b7b34688ba54befb6c6e3549258e5ceb7b34d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002226e(undefined1 param_1,undefined1 param_2)

{
  undefined1 uStack_12;
  undefined1 auStack_11 [13];
  
  uStack_12 = param_2;
  auStack_11[0] = param_1;
  FUN_ram_400221d2(auStack_11,&uStack_12,1);
  return;
}


/* NanoCore 1.11, address 0x4002228e.
 * REA evidence: ev_6d80788f1dcdc2aee36d2909866600ae30ad2c973a90cc9b78e0a418a17bb0c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002228e(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined4 uStack_44;
  int iStack_40;
  short sStack_3c;
  char cStack_3a;
  uint uStack_38;
  int iStack_34;
  
  DAT_ram_3006b874 = 1;
  DAT_ram_3006b848 = 0;
  DAT_ram_3006b871 = 100;
  DAT_ram_3006b844 = 100;
  _DAT_ram_3006b84c = (uint5)DAT_ram_40094604;
  _DAT_ram_3006b84c = (ulonglong)CONCAT15(100,_DAT_ram_3006b84c);
  _DAT_ram_3006b872 = FUN_ram_400216f6(100);
  _DAT_ram_3006b846 = FUN_ram_400216f6(100);
  _DAT_ram_3006b86c = 0;
  _DAT_ram_3006b868 = 0;
  DAT_ram_3006b870 = 0;
  DAT_ram_3006b85c = 0;
  DAT_ram_30049e31 = 100;
  DAT_ram_3006b864 = '\0';
  _DAT_ram_3006b860 = 0;
  _DAT_ram_3006b854 = 0;
  FUN_ram_40021b90(0,&DAT_ram_3006b860,1);
  if (_DAT_ram_3006b860 == 0) {
    bVar1 = false;
    iVar2 = 0x1000;
    uVar3 = 0;
    bVar4 = false;
    while (((iVar5 = iVar2 + 0x10, iVar5 != 0x2010 &&
            (iVar2 = FUN_ram_400216b8(iVar2,&iStack_40), iVar2 == 0)) && (iStack_40 != -1))) {
      iVar2 = iVar5;
      if (((iStack_40 == 0x4c50424b) && (sStack_3c == 1)) &&
         ((iVar5 = FUN_ram_40007554(0,&iStack_40,0xc), iStack_34 == iVar5 &&
          ((!bVar1 || (uVar3 <= uStack_38)))))) {
        bVar1 = true;
        uVar3 = uStack_38;
        bVar4 = cStack_3a != '\0';
      }
    }
    if (bVar1) {
      _DAT_ram_3006b84c = CONCAT14(bVar4,_DAT_ram_3006b84c);
    }
  }
  uStack_44 = 0x1000;
  iStack_40 = 0;
  iVar2 = FUN_ram_4002165e();
  if ((((iVar2 != 0) && (DAT_ram_3006b864 == '\0')) && (iVar2 = FUN_ram_4002177e(), iVar2 == 0)) &&
     (iVar2 = FUN_ram_4002184c(&uStack_44,&iStack_40), iVar2 == 0)) {
    _DAT_ram_3006b860 = iStack_40;
    DAT_ram_3006b864 = '\x01';
  }
  return 0;
}


/* NanoCore 1.11, address 0x40022428.
 * REA evidence: ev_8e1446c3ccc24b508de5d8b126d387d0ba53509db3acce02ce16e14f6f9dc5a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40022428(void)

{
  return DAT_ram_3006b850 != '\0';
}


/* NanoCore 1.11, address 0x40022436.
 * REA evidence: ev_6da5ae465fd13c7f6cd0e7e9cef254fcafb194b07f6a4c07f18ac5133b9b92bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40022436(int param_1)

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


/* NanoCore 1.11, address 0x4002247a.
 * REA evidence: ev_547663edde842dec4af3f16f23102667e9ea899c5f47e971607ca1ce24ca6853
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002247a(void)

{
  return DAT_ram_3006b874 != '\0';
}


/* NanoCore 1.11, address 0x40022488.
 * REA evidence: ev_377e831425d3897c57830494c6a1219ccfd2f10e45415d5a3dbb3d630554243d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40022488(int param_1)

{
  int iVar1;
  
  if ((bool)DAT_ram_3006b874 != (param_1 != 0)) {
    DAT_ram_3006b874 = param_1 != 0;
    iVar1 = FUN_ram_4002226e(5);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


/* NanoCore 1.11, address 0x400224bc.
 * REA evidence: ev_7cc1c1370f6790e0349645f2ff1b2b64a34b3ea501990fbd58721e601ee1ec15
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_400224bc(void)

{
  byte bVar1;
  
  bVar1 = DAT_ram_3006b852;
  if (0x10 < DAT_ram_3006b852) {
    bVar1 = 0x10;
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x400224ce.
 * REA evidence: ev_faeaa732aa4543f8ec124baabf73f6a54e853e9d3e6d45aa2259f6511e585f9b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400224ce(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0x10;
  if (((int)param_1 < 0x11) && (uVar2 = param_1, (int)param_1 < 0)) {
    uVar2 = 0;
  }
  if ((uint)DAT_ram_3006b852 != (uVar2 & 0xff)) {
    DAT_ram_3006b852 = (byte)uVar2;
    iVar1 = FUN_ram_4002226e(0xf,(int)(char)DAT_ram_3006b852);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


/* NanoCore 1.11, address 0x40022516.
 * REA evidence: ev_2d13d1c0cb5b46c4b394ee9469ed65711b31b033718b3c55b2057d84a94ad9d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40022516(void)

{
  return (int)DAT_ram_3006b848;
}


/* NanoCore 1.11, address 0x40022520.
 * REA evidence: ev_110bd404d59d919219ae59f4b40deaba92f59072b6989b09c64b1fec8faaf061
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40022520(void)

{
  return _DAT_ram_3006b84c;
}


/* NanoCore 1.11, address 0x4002252a.
 * REA evidence: ev_990bafd54537668f636159a2129183b3115ab93d563524e9baa51c13cc0465cc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4002252a(int param_1)

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


/* NanoCore 1.11, address 0x40022596.
 * REA evidence: ev_c4a65441d447ded7ffd67ffc1816982bdf026cc58d3fa734421d005e4542d6ba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40022596(void)

{
  return DAT_ram_3006b871;
}


/* NanoCore 1.11, address 0x400225a0.
 * REA evidence: ev_72f4b787fa69c9ca4e3d4afa871e51a240cb5111a0be574aaf265a6fd3706f1b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_400225a0(void)

{
  return (int)_DAT_ram_3006b872;
}


/* NanoCore 1.11, address 0x400225aa.
 * REA evidence: ev_0e40dcec05444b4444ad4948ff57e2336b4288c7446daccb29d124c0e1cfc7ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_400225aa(uint param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar1 = 100;
  if (((int)param_1 < 0x65) && (uVar1 = param_1, (int)param_1 < 0)) {
    uVar1 = 0;
  }
  uVar2 = FUN_ram_400216f6(uVar1);
  iVar3 = 0;
  if ((uint)DAT_ram_3006b871 != (uVar1 & 0xff)) {
    DAT_ram_3006b871 = (byte)uVar1;
    _DAT_ram_3006b872 = uVar2;
    iVar3 = FUN_ram_4002226e(3,(int)(char)DAT_ram_3006b871);
    iVar3 = -(uint)(iVar3 != 0);
  }
  return iVar3;
}


/* NanoCore 1.11, address 0x4002260c.
 * REA evidence: ev_7c89bdba124e22e13daf627433f9d36e11aa5296ed97c1a5736b219484fac20b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4002260c(void)

{
  return DAT_ram_3006b844;
}


/* NanoCore 1.11, address 0x40022616.
 * REA evidence: ev_c4f183a0c1121e69d279b7f2d89852df441146782cd9cd63292287c7d744eabe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40022616(void)

{
  return (int)_DAT_ram_3006b846;
}


/* NanoCore 1.11, address 0x40022620.
 * REA evidence: ev_ff7e7c374b6167f7d4524af1670111c3bdac0a92c36c4e011996e154a6680ae3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40022620(uint param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar1 = 100;
  if (((int)param_1 < 0x65) && (uVar1 = param_1, (int)param_1 < 0)) {
    uVar1 = 0;
  }
  uVar2 = FUN_ram_400216f6(uVar1);
  iVar3 = 0;
  if ((uint)DAT_ram_3006b844 != (uVar1 & 0xff)) {
    DAT_ram_3006b844 = (byte)uVar1;
    _DAT_ram_3006b846 = uVar2;
    iVar3 = FUN_ram_4002226e(4,(int)(char)DAT_ram_3006b844);
    iVar3 = -(uint)(iVar3 != 0);
  }
  return iVar3;
}


/* NanoCore 1.11, address 0x40022682.
 * REA evidence: ev_44e3a550113f5d33a8cc7c1b82b18b7e6604e163f5d9e1aaabb14b3914b24adb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40022682(void)

{
  return DAT_ram_3006b851;
}


/* NanoCore 1.11, address 0x4002268c.
 * REA evidence: ev_cac182e4de9d1aa5af4e0f870e76fcad6ee9632da27c66c23d99416619f25f75
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002268c(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 100;
  if (((int)param_1 < 0x65) && (uVar2 = param_1, (int)param_1 < 0)) {
    uVar2 = 0;
  }
  if ((uint)DAT_ram_3006b851 != (uVar2 & 0xff)) {
    DAT_ram_3006b851 = (byte)uVar2;
    iVar1 = FUN_ram_4002226e(0x10,(int)(char)DAT_ram_3006b851);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


/* NanoCore 1.11, address 0x400226d8.
 * REA evidence: ev_02021ee70a703ef697c85bc992913bd1befaa8720f931bc79152366e217132b1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400226d8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1 != (undefined4 *)0x0) && (uVar1 = 0xffffffff, DAT_ram_3006b870 != '\0')) {
    *param_1 = _DAT_ram_3006b86c;
    param_1[1] = _DAT_ram_3006b868;
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40022702.
 * REA evidence: ev_d18189c59f6f41e1f041458c334bfb50ae5842b61b9c6b517238c81f783e46b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40022702(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar2 = *param_1;
  iVar3 = param_1[1];
  if (((DAT_ram_3006b870 == '\0') || (_DAT_ram_3006b86c != iVar2)) ||
     (uVar1 = 0, _DAT_ram_3006b868 != iVar3)) {
    uStack_1a = (undefined1)((uint)iVar2 >> 8);
    uStack_19 = (undefined1)((uint)iVar2 >> 0x10);
    uStack_16 = (undefined1)((uint)iVar3 >> 8);
    uStack_15 = (undefined1)((uint)iVar3 >> 0x10);
    uStack_28 = 0x807060e;
    uStack_24 = 0xc0b0a09;
    uStack_1b = (undefined1)iVar2;
    uStack_17 = (undefined1)iVar3;
    uStack_1c = 0;
    uStack_18 = (undefined1)((uint)iVar2 >> 0x18);
    uStack_14 = (undefined1)((uint)iVar3 >> 0x18);
    uStack_20 = 0xe0d;
    uStack_13 = 1;
    iVar2 = FUN_ram_400221d2(&uStack_28,&uStack_1c,10);
    if (iVar2 == 0) {
      _DAT_ram_3006b86c = *param_1;
      _DAT_ram_3006b868 = param_1[1];
      DAT_ram_3006b870 = '\x01';
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x400227cc.
 * REA evidence: ev_0a094b33fb5b10af29e257a03055980d8f69ec135d2fdcba522c09efc93073ee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400227cc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_ram_3006b870 == '\0') {
    _DAT_ram_3006b86c = 0;
    _DAT_ram_3006b868 = 0;
    return 0;
  }
  iVar1 = FUN_ram_4002226e(0xe,0);
  if (iVar1 == 0) {
    DAT_ram_3006b870 = '\0';
    _DAT_ram_3006b86c = 0;
    _DAT_ram_3006b868 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x400227ea.
 * REA evidence: ev_7661b05c455a5d09e98c710fc336708b0c5f43162985572ed04550cac15830d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400227ea(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4002226e(0xe,0);
  if (iVar1 == 0) {
    DAT_ram_3006b870 = 0;
    _DAT_ram_3006b86c = 0;
    _DAT_ram_3006b868 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4002281a.
 * REA evidence: ev_0e514cb2fc6870fc597b775e03013fa93b8231af672824967db53fed6fadfb35
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002281a(undefined4 *param_1,uint param_2,uint param_3,uint param_4)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  ulonglong uVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    uVar4 = (ulonglong)(uint)DAT_ram_40094604;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    *(ulonglong *)(param_1 + 4) = uVar4;
    fVar1 = DAT_ram_40094604;
    if (param_2 == 0) {
      param_2 = 0xac44;
    }
    fVar3 = DAT_ram_40094604;
    if (param_3 != 0) {
      lVar2 = (ulonglong)param_2 * (ulonglong)param_3 + 999;
      FUN_ram_40003b9c((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),1000,0);
      fVar3 = (float)FUN_ram_4000375c();
      fVar3 = fVar1 / fVar3;
    }
    *(ulonglong *)(param_1 + 5) = (ulonglong)(uint)fVar3;
    if (param_4 != 0) {
      lVar2 = (ulonglong)param_2 * (ulonglong)param_4 + 999;
      FUN_ram_40003b9c((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),1000,0);
      fVar3 = (float)FUN_ram_4000375c();
      fVar1 = fVar1 / fVar3;
    }
    *(ulonglong *)(param_1 + 6) = (ulonglong)(uint)fVar1;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400228b8.
 * REA evidence: ev_9ca460ee901f3e82fe6b4a7c3b86ee49a5ef3aaa9d62e1db634469303a5e7c50
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400228b8(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1 + 1;
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    *param_1 = iVar1;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x400228d0.
 * REA evidence: ev_88883a5146af1d96afd53a4bfea941efe5f84e98e9ebb84eb16f6657d22eb800
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400228d0(int *param_1,int param_2)

{
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (*param_1 == param_2)) {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x400228e0.
 * REA evidence: ev_76d24fab3263c7f62e44933ec4dd37cd99503e578b9c65925605faecd57583bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400228e0(int *param_1,int param_2)

{
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 3) = 1;
    *(undefined1 *)((int)param_1 + 0xd) = 2;
    param_1[4] = 0;
    param_1[1] = param_2;
  }
  return;
}


/* NanoCore 1.11, address 0x400228fa.
 * REA evidence: ev_71d351a1831c5d32fe2b8e38bf95d6ec126529f784384ec526f2f04c017eaabf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400228fa(undefined4 *param_1)

{
  ulonglong uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = (ulonglong)DAT_ram_40094604;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    *(ulonglong *)(param_1 + 4) = uVar1;
    param_1[2] = *param_1;
  }
  return;
}


/* NanoCore 1.11, address 0x40022914.
 * REA evidence: ev_2c391944e0b9a5184b4321f7d430237765a3202930d2580319507a6713062c8e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40022914(int param_1)

{
  bool bVar1;
  
  if (param_1 != 0) {
    bVar1 = true;
    if (*(char *)(param_1 + 0xd) == '\x02') {
      bVar1 = *(char *)(param_1 + 0xc) == '\0';
    }
    return bVar1;
  }
  return true;
}


/* NanoCore 1.11, address 0x40022938.
 * REA evidence: ev_50e5a4326d5e348d164899c25de12f71f2ea2657cefc6acd86a6315fa03bf008
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40022938(int *param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  char cVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  ulonglong uVar9;
  
  fVar1 = DAT_ram_40094604;
  if ((param_1 == (int *)0x0) || (param_4 == 0)) {
    return 0;
  }
  iVar7 = *param_1;
  cVar5 = *(char *)((int)param_1 + 0xd);
  if ((char)param_1[3] == '\0') {
    if (cVar5 == '\0') {
      if (param_1[2] == iVar7) {
        return 0;
      }
      param_1[2] = iVar7;
      return 2;
    }
LAB_ram_400229ba:
    uVar9 = *(ulonglong *)(param_1 + 4);
    if ((char)param_1[3] == '\0') {
      if ((byte)(cVar5 - 1U) < 2) {
        cVar5 = '\x03';
      }
    }
    else if ((cVar5 == '\0') || (cVar5 == '\x03')) {
      cVar5 = '\x01';
    }
    iVar2 = 0;
    uVar4 = 0;
    pfVar3 = param_3;
    pfVar6 = param_2;
    do {
      fVar8 = (float)uVar9;
      if (param_2 == (float *)0x0) {
        if (param_3 != (float *)0x0) goto LAB_ram_40022a06;
      }
      else {
        *pfVar6 = *pfVar6 * fVar8;
        if ((param_3 != (float *)0x0) && (param_2 != param_3)) {
LAB_ram_40022a06:
          *pfVar3 = *pfVar3 * fVar8;
        }
      }
      if (cVar5 == '\x01') {
        fVar8 = fVar8 - (float)*(undefined8 *)(param_1 + 5);
        uVar9 = (ulonglong)(uint)fVar8;
        if (fVar8 <= 0.0) {
          uVar9 = 0;
          param_1[1] = iVar7;
          cVar5 = '\x02';
          uVar4 = 1;
        }
      }
      else if ((cVar5 == '\x03') &&
              (fVar8 = fVar8 + (float)*(undefined8 *)(param_1 + 6), uVar9 = (ulonglong)(uint)fVar8,
              fVar1 <= fVar8)) {
        uVar9 = (ulonglong)(uint)fVar1;
        param_1[2] = iVar7;
        cVar5 = '\0';
        uVar4 = 2;
      }
      iVar2 = iVar2 + 1;
      pfVar3 = pfVar3 + 1;
      pfVar6 = pfVar6 + 1;
      if (param_4 == iVar2) {
        *(ulonglong *)(param_1 + 4) = uVar9;
        *(char *)((int)param_1 + 0xd) = cVar5;
        return uVar4;
      }
    } while( true );
  }
  if (cVar5 != '\x02') goto LAB_ram_400229ba;
  if (param_2 == (float *)0x0) {
    if (param_3 == (float *)0x0) goto LAB_ram_400229ac;
  }
  else {
    pfVar3 = (float *)memset(param_2,0,param_4 << 2);
    if ((param_3 == (float *)0x0) || (pfVar3 == param_3)) goto LAB_ram_400229ac;
  }
  memset(param_3,0,param_4 << 2);
LAB_ram_400229ac:
  if (param_1[1] == iVar7) {
    return 0;
  }
  param_1[1] = iVar7;
  return 1;
}


/* NanoCore 1.11, address 0x40022a6a.
 * REA evidence: ev_f4619a1ede536257097ce500e9e04027ea538a88dfb9598610ff76c715d3aa63
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40022a6a(int param_1,uint param_2,undefined4 *param_3)

{
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 8;
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    if (8 < param_2) {
      param_2 = 8;
    }
    FUN_ram_4000304c(param_1,&DAT_ram_30049e34,param_2);
    return 0;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40022a9a.
 * REA evidence: ev_d4433dfd2e142bb3dbccae12eb7db9cfc88794fb2c11a46d5cb9fbd9d30e6d0e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40022a9a(int param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte local_18 [8];
  char acStack_10 [8];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar4 = 0;
  do {
    bVar2 = 0xff;
    if ((uVar4 < param_2) && (param_1 != 0)) {
      bVar2 = *(byte *)(param_1 + uVar4);
    }
    local_18[uVar4] = bVar2;
    uVar4 = uVar4 + 1;
  } while (uVar4 != 8);
  acStack_10[0] = '\0';
  acStack_10[1] = '\0';
  acStack_10[2] = '\0';
  acStack_10[3] = '\0';
  acStack_10[4] = '\0';
  acStack_10[5] = '\0';
  acStack_10[6] = '\0';
  acStack_10[7] = '\0';
  iVar3 = 0;
  uVar4 = 0;
  do {
    uVar1 = (uint)local_18[iVar3];
    if ((uVar1 < 8) && (acStack_10[uVar1] == '\0')) {
      *(byte *)((int)&local_8 + uVar4) = local_18[iVar3];
      acStack_10[uVar1] = '\x01';
      uVar4 = uVar4 + 1 & 0xff;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  iVar3 = 0;
  do {
    if (7 < uVar4) {
      DAT_ram_30049e34 = local_8;
      DAT_ram_30049e38 = uStack_4;
      return 0;
    }
    bVar2 = (&DAT_ram_400954cc)[iVar3];
    if (acStack_10[bVar2] == '\0') {
      *(byte *)((int)&local_8 + uVar4) = bVar2;
      acStack_10[bVar2] = '\x01';
      uVar4 = uVar4 + 1 & 0xff;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  DAT_ram_30049e34 = local_8;
  DAT_ram_30049e38 = uStack_4;
  return 0;
}


/* NanoCore 1.11, address 0x40022b4c.
 * REA evidence: ev_8e6aea35254a0bbff4722774cea3dbd0c17d2c5721197b28d933819259461819
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40022b4c(undefined1 param_1)

{
  undefined1 auStack_14 [16];
  
  auStack_14[0] = param_1;
  FUN_ram_40013eec(0x60,auStack_14,1);
  return;
}


/* NanoCore 1.11, address 0x40022b66.
 * REA evidence: ev_a587b335cb792cabd8bd1621a7e88a9d0535849999ecedeb3da8426141823eac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40022b66(int param_1,uint param_2)

{
  uint uVar1;
  undefined1 auStack_1c [24];
  uint uVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (10 < param_2) {
      param_2 = 10;
    }
    auStack_1c[0] = (undefined1)param_2;
    uVar1 = 0;
    do {
      uVar2 = uVar1;
      uVar1 = uVar2 + 1;
      auStack_1c[uVar1] = *(undefined1 *)(param_1 + -1 + uVar1);
    } while (uVar1 != param_2);
    FUN_ram_40013eec(0x6a,auStack_1c,uVar2 + 2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40022ba2.
 * REA evidence: ev_9b863e92d70549fde781ba09d2f8669d6e4784ac14ae71ade20fbf0a0517473e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40022cbc) */
/* WARNING: Removing unreachable block (ram,0x40022ca2) */
/* WARNING: Removing unreachable block (ram,0x40022cb6) */
/* WARNING: Removing unreachable block (ram,0x40022cc6) */

undefined4 FUN_ram_40022ba2(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    return 0xfffffffe;
  }
  memset(param_1,0,0x80);
  iVar1 = FUN_ram_40006eee(s_device_info_ram_400954d4);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (*(uint *)(iVar1 + 0x38) < 0x1000) {
    return 0xffffffff;
  }
  iVar1 = FUN_ram_40006f52(iVar1,0,param_1,0x80);
  iVar3 = 0;
  if (iVar1 != 0x80) {
    memset(param_1,0,0x80);
    return 0xfffffffd;
  }
  while (*(char *)((int)param_1 + iVar3) == -1) {
    iVar3 = iVar3 + 1;
    if (iVar3 == 0x80) {
      memset(param_1,0,0x80);
      return 0xffffffff;
    }
  }
  if ((((((*param_1 == 0x49333747) && ((short)param_1[1] == 1)) &&
        (*(short *)((int)param_1 + 6) == 0x80)) &&
       ((uVar2 = (uint)*(byte *)(param_1 + 2), (uVar2 - 1 & 0xff) < 2 || (uVar2 == 6)))) &&
      (((param_2 == 0 || (uVar2 == (param_2 & 0xff))) &&
       (((*(byte *)((int)param_1 + 0xb) < 0x31 &&
         (uVar2 = param_1[3], uVar2 / 10000 - 0x7e4 < 0x1f2c)) && ((uVar2 / 100) % 100 - 1 < 0xc))))
      )) && ((uVar2 % 100 - 1 < 0x1f && ((*(byte *)((int)param_1 + 10) - 1 & 0xff) < 0x20)))) {
    uVar2 = 0;
    do {
      if (0x5d < (byte)(*(char *)((int)param_1 + uVar2 + 0x10) - 0x21U)) goto LAB_ram_40022d66;
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xff) < (uint)*(byte *)((int)param_1 + 10));
    iVar1 = FUN_ram_40007554(0,param_1,0x7c);
    if (param_1[0x1f] == iVar1) {
      return 0;
    }
  }
LAB_ram_40022d66:
  memset(param_1,0,0x80);
  return 0xfffffffe;
}


/* NanoCore 1.11, address 0x40022d76.
 * REA evidence: ev_10c98440626f143f564c9433058ec67e7fc8ea978b29bb8916eabb9b2ad68b5e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40022d76(void)

{
  undefined1 uVar1;
  
  memset(0x3006b884,0,0x1e0);
  memset(0x3006ba64,0,0x78);
  _DAT_ram_3006b878 = 0x1010101;
  _DAT_ram_3006b87c = 0x1010101;
  _DAT_ram_3006b880 = &sedeleg;
  _DAT_ram_3006badc = 0;
  _DAT_ram_3006bae0 = 0;
  _DAT_ram_3006bae4 = 0;
  uVar1 = FUN_ram_4002523e(6,6);
  _DAT_ram_3006ba38 = 0;
  _DAT_ram_3006ba34 = DAT_ram_40094604;
  _DAT_ram_3006ba3c = DAT_ram_40094604;
  _DAT_ram_3006ba40 = DAT_ram_40094604;
  _DAT_ram_3006bae0 = CONCAT12(uVar1,_DAT_ram_3006bae0);
  _DAT_ram_3006ba04 = DAT_ram_40094eec;
  _DAT_ram_3006ba08 = DAT_ram_400954e0;
  return;
}


/* NanoCore 1.11, address 0x40022e1a.
 * REA evidence: ev_89b48388ad92eba9c75d20b39c9f16ca10017d9ee2b099f20579b8e679e5defc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40022e1a(uint param_1,undefined1 param_2)

{
  if (param_1 < 10) {
    (&DAT_ram_3006b878)[param_1] = param_2;
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40022e34.
 * REA evidence: ev_9f851d41a1be302b72d1dd59446ffb50bf8b2d178c7c8e4e06eceae3182d672a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40022e34(uint param_1)

{
  if (param_1 < 10) {
    return (&DAT_ram_3006b878)[param_1] != '\0';
  }
  return false;
}


/* NanoCore 1.11, address 0x40022e50.
 * REA evidence: ev_a3529a0f83054445cae9b385157d5bc62631e219becc4e4d14946f188ee1e17d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40022e50(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (9 < param_1) {
    return 0xffffffff;
  }
  uVar2 = FUN_ram_4002523e();
  uVar3 = _DAT_ram_3006ba3c;
  uVar1 = _DAT_ram_3006ba40;
  if ((param_1 == 9) && (DAT_ram_3006bae5 != uVar2)) {
    memset(&DAT_ram_3006ba34,0,0x30);
    uVar3 = (undefined4)_DAT_ram_40094604;
    _DAT_ram_3006ba34 = uVar3;
    uVar1 = uVar3;
    if (uVar2 < 5) {
      if (uVar2 < 3) {
        if (uVar2 == 1) {
          _DAT_ram_3006ba34 = DAT_ram_40094634;
        }
        else if (uVar2 != 2) goto LAB_ram_40022ed8;
        _DAT_ram_3006ba38 = uVar3;
        uVar3 = _DAT_ram_3006ba3c;
        uVar1 = _DAT_ram_3006ba40;
      }
      else {
        _DAT_ram_3006ba34 = DAT_ram_40094634;
        _DAT_ram_3006ba38 = DAT_ram_40094634;
        uVar1 = _DAT_ram_3006ba40;
      }
    }
  }
LAB_ram_40022ed8:
  _DAT_ram_3006ba40 = uVar1;
  _DAT_ram_3006ba3c = uVar3;
  (&DAT_ram_3006badc)[param_1] = (char)uVar2;
  return 0;
}


/* NanoCore 1.11, address 0x40022f10.
 * REA evidence: ev_519c6210462effcd109678bcb50a32f234d4de8eade4462e26dfba5d932f784b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40022f10(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 10) {
    uVar1 = FUN_ram_4002523e(param_1,(&DAT_ram_3006badc)[param_1]);
    (&DAT_ram_3006badc)[param_1] = (char)uVar1;
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40022f42.
 * REA evidence: ev_5e542933c9c9ab24e4a7dd702f8b0207a5c80cde99b9eefcab19284e6050fedd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40022f42(ulonglong param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_2 < 10) {
    uVar1 = 0xffffffff;
    if (param_3 < 0xc) {
      if ((float)param_1 < 0.0) {
        param_1 = 0;
      }
      else if (DAT_ram_40094604 < (float)param_1) {
        param_1 = (ulonglong)(uint)DAT_ram_40094604;
      }
      *(ulonglong *)((param_3 + param_2 * 0xc) * 4 + 0x3006b884) = param_1;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40022f90.
 * REA evidence: ev_c4afbc796c4b5a9f17bbb4a46a137661c41ad2c2f8fef754ddd219b8351067f2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined8 FUN_ram_40022f90(uint param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 < 10) && (param_2 < 0xc)) {
    uVar1 = *(undefined8 *)((param_2 + param_1 * 0xc) * 4 + 0x3006b884);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40022fb6.
 * REA evidence: ev_c40a67f578f8da06d4957b4e0387025202a19d06e195a2c12669356f7e239af9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40022fb6(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  switch(param_1) {
  case 0:
    iVar2 = FUN_ram_4000c1d8();
    return iVar2;
  case 1:
    break;
  case 2:
    iVar2 = FUN_ram_4000bb30();
    return iVar2;
  case 3:
    iVar2 = FUN_ram_4000c10c();
    return iVar2;
  case 4:
    iVar2 = FUN_ram_4000c36e();
    return iVar2;
  case 5:
    iVar2 = FUN_ram_4000c932();
    return iVar2;
  case 6:
    iVar2 = FUN_ram_4000cbb6();
    return iVar2;
  case 7:
    iVar2 = FUN_ram_4000cd9c();
    return iVar2;
  case 8:
    iVar2 = FUN_ram_4000d084();
    return iVar2;
  case 9:
    iVar2 = FUN_ram_4000cf12(param_2);
    return iVar2;
  default:
    return -1;
  }
  if (param_2 != 0) {
    iVar2 = FUN_ram_4000be78();
    iVar1 = FUN_ram_40022f10(1);
    if (iVar2 != iVar1) {
      iVar2 = FUN_ram_4000dbf8();
      iVar1 = -1;
      if (iVar2 == 0) {
        FUN_ram_40022f10(1);
        iVar1 = FUN_ram_4000bd16();
        if (iVar1 == 0) {
          iVar1 = FUN_ram_4000be0a(1);
        }
        FUN_ram_4000dc48();
      }
      return iVar1;
    }
  }
  iVar2 = FUN_ram_4000be0a(param_2);
  return iVar2;
}


