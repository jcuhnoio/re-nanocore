/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4001a000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4001a06e.
 * REA evidence: ev_67ca439bc146f5fc88fbddce889fd759fbef5751cfa0a25061781be60f355a5c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001a06e(uint *param_1,char *param_2,code *param_3,uint param_4,int param_5,
                     code *UNRECOVERED_JUMPTABLE)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0xffffffff;
  if (*param_2 == '\0') {
    (*param_3)();
  }
  if ((uVar1 < param_4) && (*(char *)(param_5 + uVar1) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x4001a0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001a0ae.
 * REA evidence: ev_f932682d942df4313352884750d44e394c7d65f78c47268e6daaf435966d076c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001a0ae(void)

{
  FUN_ram_4001a06e(&DAT_ram_30046700,&DAT_ram_3006941c,FUN_ram_4001b2e0,0x1e,0x30069684,
                   FUN_ram_4001bba2);
  return;
}


/* NanoCore 1.10, address 0x4001a0e8.
 * REA evidence: ev_b9f8717674df645f3c0d106121ecd60b97ad43d92f070ea4db7a2362dd26aa34
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001a0e8(void)

{
  FUN_ram_4001a06e(&DAT_ram_30046714,&DAT_ram_30069a3c,FUN_ram_4001a576,8,0x30069ac4,
                   FUN_ram_4001d19a);
  return;
}


/* NanoCore 1.10, address 0x4001a116.
 * REA evidence: ev_1d9482adf9923f70c3f76c5657a745f03dafc08f18507068a32c4008632c80ec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001a116(void)

{
  FUN_ram_4001a06e(&DAT_ram_30046724,&DAT_ram_30069ba0,FUN_ram_4001a6e0,0x1e,0x30069d88,
                   FUN_ram_4001bc60);
  return;
}


/* NanoCore 1.10, address 0x4001a150.
 * REA evidence: ev_c082b81707b1a9ce1b00a7cc71be3d3d6d63f83097db0facbd24bc4355d875da
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4001a150(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if ((DAT_ram_300696f4 != '\0') && (_DAT_ram_300696f8 == 100)) {
    iVar2 = 1;
    if (DAT_ram_30069a2c == '\0') {
      iVar2 = -1;
    }
    bVar1 = _DAT_ram_30069a00 == iVar2;
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x4001a18a.
 * REA evidence: ev_62698a0d96f94e882ae3526eaf8a8d98322c8d3604e3387cf9dccf5070c20755
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char FUN_ram_4001a18a(void)

{
  return (DAT_ram_30069a2c != '\0') + '\x02';
}


/* NanoCore 1.10, address 0x4001a19a.
 * REA evidence: ev_f9548adb1fd50eeba21907287573875bbf6390a823c54af1a008e43256c120e1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4001a19a(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = FUN_ram_40005208(param_1,&DAT_ram_40093228,0x10);
    if ((((iVar2 == 0) || (iVar2 = FUN_ram_40005208(param_1,&DAT_ram_4009322c,0x10), iVar2 == 0)) ||
        (iVar2 = FUN_ram_40005208(param_1,&DAT_ram_4009323c,0x10), iVar2 == 0)) ||
       (((iVar2 = FUN_ram_40005208(param_1,s_delay_ram_40093234,0x10), iVar2 == 0 ||
         (iVar2 = FUN_ram_40005208(param_1,s_reverb_ram_40093240,0x10), iVar2 == 0)) ||
        ((iVar2 = FUN_ram_40005208(param_1,&DAT_ram_40093248,0x10), iVar2 == 0 ||
         (iVar2 = FUN_ram_40005208(param_1,&DAT_ram_40093dc4,0x10), iVar2 == 0)))))) {
      bVar1 = true;
    }
    else {
      iVar2 = FUN_ram_40005208(param_1,&DAT_ram_40093230,0x10);
      bVar1 = iVar2 == 0;
    }
    return bVar1;
  }
  return false;
}


/* NanoCore 1.10, address 0x4001a244.
 * REA evidence: ev_b98b57bf09d546d546bd2952bc4069c4953bc4b0dea5209269391ba5645e5fe8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001a244(undefined4 *param_1,int *param_2)

{
  *param_1 = 0xffffffff;
  if (*param_2 != 0) {
    FUN_ram_4004b6a8();
    *param_2 = 0;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001a266.
 * REA evidence: ev_c5b8064a375faddc7befcd2ff495d70a0aa5276284ca253396f1d2a710895575
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001a266(void)

{
  FUN_ram_4001a244(&DAT_ram_30046700,&DAT_ram_30069418);
  return;
}


/* NanoCore 1.10, address 0x4001a27a.
 * REA evidence: ev_980d5b04d7290ac4bcb0f3ccd0f348ffb4b6cfbcbcb4259927f2054b80f2d1f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001a27a(void)

{
  FUN_ram_4001a244(&DAT_ram_30046724,&DAT_ram_30069b9c);
  return;
}


/* NanoCore 1.10, address 0x4001a28e.
 * REA evidence: ev_23a0f666e142ceed9de3023c00b1213118be9a940bd80ae49d7e59a75e631121
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001a28e(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_400165d6();
  if (7 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4001a2a4.
 * REA evidence: ev_104052b9b958fb463cae2bbdc91bc4add3c5c2767a09af2b42400f6bbb753ee5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4001a2a4(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = FUN_ram_4001a28e();
  if (uVar2 < 8) {
    uVar1 = *(undefined1 *)(uVar2 + 0x30069b94);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4001a2ce.
 * REA evidence: ev_452ca6aca75ace088df0a35e181a8f795b01cb1b042c0031e04066ba547c2aa8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a2ce(void)

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
  
  _DAT_ram_30069e80 = 0;
  pcVar6 = &DAT_ram_30069e20;
  iVar2 = 0;
  do {
    uVar3 = 0;
    pcVar5 = pcVar6;
    do {
      if (*pcVar5 != '\0') {
        uVar1 = *(undefined1 *)(iVar2 + 0x30069b94);
        *pcVar5 = '\0';
        iVar4 = FUN_ram_400264e8(iVar2,uVar1,uVar3 & 0xff,1);
        if (iVar4 != 0xff) {
          uStack_47 = (undefined1)iVar4;
          uStack_48 = (undefined1)iVar2;
          uStack_46 = (undefined1)in_register_00000100;
          uStack_45 = (undefined1)((uint)in_register_00000100 >> 8);
          uStack_44 = (undefined1)((uint)in_register_00000100 >> 0x10);
          uStack_43 = (undefined1)((uint)in_register_00000100 >> 0x18);
          FUN_ram_400137c6(0x62,&uStack_48,6);
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


/* NanoCore 1.10, address 0x4001a3a2.
 * REA evidence: ev_78f63563cc8a3284e48a19b1c6becbfa0c70ecabd0eed39a1bb236acc326cd6c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_4001a3a2(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  
  fVar1 = 0.0;
  if ((0.0 <= param_1) && (fVar1 = param_1, DAT_ram_4009281c < param_1)) {
    fVar1 = DAT_ram_4009281c;
  }
  if ((0.0 < param_2) && (0.0 < param_3)) {
    if (param_2 != param_3) {
      fVar2 = (float)FUN_ram_40000c86(param_2);
      fVar3 = (float)FUN_ram_40000c86(param_3);
      fVar4 = (float)FUN_ram_40000c86(param_2);
      uVar5 = FUN_ram_40000c0e((fVar3 - fVar4) * fVar1 + fVar2);
      return uVar5;
    }
  }
  return (ulonglong)(uint)param_2;
}


/* NanoCore 1.10, address 0x4001a434.
 * REA evidence: ev_f5c6171585087a8ed0fe9d478fc6738171c254412ea50f95565f8e5f1bc78da7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001a452) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a434(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_1c [20];
  
  if (_DAT_ram_300699d0 != 0) {
    uVar2 = (DAT_ram_300699f4 + 4) / 5;
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    uVar1 = DAT_ram_300699cc + 1;
    if (uVar2 < uVar1) {
      uVar1 = 1;
    }
    FUN_ram_400055ea(auStack_1c,0xc,s__u__u_ram_40093378,uVar1);
    FUN_ram_40017026(_DAT_ram_300699d0,0x300699d4,auStack_1c);
    FUN_ram_40044038(_DAT_ram_300699d0,0x200007d1);
    FUN_ram_4004500e(_DAT_ram_300699d0);
    FUN_ram_400440bc(_DAT_ram_300699d0,5,0,0xfffffff8);
    FUN_ram_40016fb2(_DAT_ram_300699d0,0x300699d4);
  }
  return;
}


/* NanoCore 1.10, address 0x4001a4c6.
 * REA evidence: ev_6445e10d322ed10c81e8a9183e445ef6083268f6b93ed4123153defae41d35b9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001a4c6(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xff;
  if (param_2 == 0) {
    uVar1 = 0x59;
  }
  if (param_1 != 0) {
    FUN_ram_40047a34(param_1,uVar1,0);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001a4dc.
 * REA evidence: ev_079ba56a1ff9badc7e184d17b140584b6fd4568baa4729d90b99e9c28d52fe25
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a4dc(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_ram_4001a28e(_DAT_ram_300696fc);
  uVar2 = 0x3006998c;
  if ((uVar1 < 8) && (*(char *)(uVar1 + 0x30069acc) == '\0')) {
    uVar2 = 0x3006994c;
  }
  FUN_ram_4001670a(_DAT_ram_30069744,uVar2);
  return;
}


/* NanoCore 1.10, address 0x4001a520.
 * REA evidence: ev_20404c04b01303b3023730809b8bf0a03a151e8af14740f2ca1967bd3227cbbc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4001a520(uint *param_1,uint param_2)

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


/* NanoCore 1.10, address 0x4001a576.
 * REA evidence: ev_a7bf56d8fe78cc82397804c2cce4f2d79babd4d47a6aa976ac0ca45ee64cef39
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a576(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *__dest;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [20];
  
  FUN_ram_4001a244(&DAT_ram_30046714,&DAT_ram_30069a38);
  DAT_ram_30069a3c = 0;
  DAT_ram_30046710 = 0xffffffff;
  DAT_ram_30046718 = 0xffffffff;
  FUN_ram_4000505c(0x30069ac4,0,8);
  FUN_ram_4000505c(0x30069a40,0,0x80);
  __dest = (void *)0x30069a40;
  iVar1 = 0;
  do {
    iVar2 = FUN_ram_4008e8b0(iVar1 + 0x1eU & 0xff,auStack_40);
    if ((iVar2 != 0) && (iVar2 = FUN_ram_4001a520(auStack_40,0x3000), iVar2 != 0)) {
      *(undefined1 *)(iVar1 + 0x30069ac4) = 1;
      memcpy(__dest,auStack_34,0x10);
      *(undefined1 *)((int)__dest + 0xf) = 0;
    }
    iVar1 = iVar1 + 1;
    __dest = (void *)((int)__dest + 0x10);
  } while (iVar1 != 8);
  iVar1 = FUN_ram_4000ba6a();
  if (((7 < (iVar1 - 0x1eU & 0xff)) ||
      (uVar3 = iVar1 - 0x1eU, *(char *)(iVar1 + 0x30069aa6) == '\0')) &&
     (uVar3 = DAT_ram_30046710, (int)DAT_ram_30046710 < 0)) {
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      if (*(char *)(uVar4 + 0x30069ac4) != '\0') break;
      uVar4 = uVar4 + 1;
      uVar3 = DAT_ram_30046710;
    } while (uVar4 != 8);
  }
  DAT_ram_30046710 = uVar3;
  DAT_ram_30046718 = DAT_ram_30046710;
  DAT_ram_30069a3c = 1;
  _DAT_ram_30069ac0 = FUN_ram_4008e8a2();
  iVar1 = FUN_ram_4001a28e(&DAT_ram_4009322c);
  if (iVar1 < 0) {
    return;
  }
  uVar3 = FUN_ram_4000ba86();
  if (0xb < uVar3) {
    uVar3 = 0;
  }
  *(char *)(iVar1 + 0x30069b94) = (char)uVar3;
  FUN_ram_400230be(1);
  return;
}


/* NanoCore 1.10, address 0x4001a6e0.
 * REA evidence: ev_ea9c8226d27061062e206530b1918f6e9d3b7fa5d3ffe47271fc7a091a732bf0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a6e0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  void *__dest;
  undefined1 auStack_54 [16];
  ushort uStack_44;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [20];
  
  FUN_ram_4001a27a();
  DAT_ram_30069ba0 = 0;
  DAT_ram_30046720 = 0xffffffff;
  DAT_ram_30046728 = 0xffffffff;
  FUN_ram_4000505c(0x30069d88,0,0x1e);
  FUN_ram_4000505c(0x30069ba4,0,0x1e0);
  FUN_ram_40089208(auStack_54);
  __dest = (void *)0x30069ba4;
  uVar1 = 0;
  do {
    iVar2 = FUN_ram_4008deac(uVar1 & 0xff,auStack_40);
    if ((iVar2 != 0) && (iVar2 = FUN_ram_4001a520(auStack_40,0x1000), iVar2 != 0)) {
      *(undefined1 *)(uVar1 + 0x30069d88) = 1;
      memcpy(__dest,auStack_34,0x10);
      *(undefined1 *)((int)__dest + 0xf) = 0;
    }
    uVar1 = uVar1 + 1;
    __dest = (void *)((int)__dest + 0x10);
  } while (uVar1 != 0x1e);
  uVar1 = (uint)uStack_44;
  if ((0x1d < uVar1) || (*(char *)(uVar1 + 0x30069d88) == '\0')) {
    uVar3 = 0;
    do {
      uVar1 = uVar3;
      if (*(char *)(uVar3 + 0x30069d88) != '\0') break;
      uVar3 = uVar3 + 1;
      uVar1 = DAT_ram_30046720;
    } while (uVar3 != 0x1e);
  }
  DAT_ram_30046720 = uVar1;
  DAT_ram_30046728 = DAT_ram_30046720;
  DAT_ram_30069ba0 = 1;
  _DAT_ram_30069d84 = FUN_ram_4008e8a8();
  return;
}


/* NanoCore 1.10, address 0x4001a7e0.
 * REA evidence: ev_3beabccb4be56880c40a851b4b7aac2838379e40247eeee236186ea0828cf470
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001a7e0(int param_1)

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
  FUN_ram_4002c7dc(uVar1);
  return;
}


/* NanoCore 1.10, address 0x4001a80c.
 * REA evidence: ev_5b905af4eab90ff49182a35f8d5db5c32e2d2978d9db8b7c1dd0962fda482b17
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a80c(void)

{
  int iVar1;
  int iVar2;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  if (_DAT_ram_30069a28 != 0) {
    if (((_DAT_ram_300696f0 == 0) || (_DAT_ram_30069a04 == 0)) ||
       (iVar2 = FUN_ram_40042c20(_DAT_ram_30069a04,1), iVar2 != 0)) {
      FUN_ram_40043064(_DAT_ram_30069a28,1);
      return;
    }
    FUN_ram_400440e0(_DAT_ram_30069a04,&local_30);
    FUN_ram_400440e0(_DAT_ram_300696f0,&iStack_20);
    iVar1 = (iStack_24 - iStack_2c) + 5;
    iVar2 = (iStack_28 - local_30) + 5;
    FUN_ram_40043faa(_DAT_ram_30069a28,(local_30 - iStack_20) + -2,(iStack_2c - iStack_1c) + -2);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    FUN_ram_40044038(_DAT_ram_30069a28,iVar2,iVar1);
    FUN_ram_40042b3a(_DAT_ram_30069a28,1);
  }
  return;
}


/* NanoCore 1.10, address 0x4001a8c2.
 * REA evidence: ev_51278649c5b5aaaf8b2b8172145ac94159d2623bae700db576ab644c081fae4b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001a8c2(void)

{
  int iVar1;
  
  if ((_DAT_ram_30069a04 != 0) && (_DAT_ram_30069748 != 0)) {
    FUN_ram_4004788a(_DAT_ram_30069a04,0xc1,0);
    FUN_ram_40044038(_DAT_ram_30069a04,0x200007d1);
    FUN_ram_4004500e(_DAT_ram_30069a04);
    FUN_ram_40045054(_DAT_ram_30069a04,_DAT_ram_30069748,0x14,8,0);
    iVar1 = 0;
    do {
      if (*(int *)(&DAT_ram_30069a08 + iVar1 * 4) != 0) {
        FUN_ram_4004788a(*(int *)(&DAT_ram_30069a08 + iVar1 * 4),0xc1,0);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 8);
    FUN_ram_40016fb2(_DAT_ram_30069a04,&DAT_ram_30069a08);
  }
  FUN_ram_4001a80c();
  return;
}


/* NanoCore 1.10, address 0x4001a956.
 * REA evidence: ev_f07dc5e857ae1c3e7595e0b31c92694ae761127f1c43feb26aacdf600f78916f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001a956(uint param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  
  FUN_ram_4000505c(param_3,0,0x14);
  *param_3 = 0;
  if ((7 < param_1) ||
     (puVar5 = (&PTR_DAT_ram_40093228_ram_400935ac)[param_1], puVar5 == (undefined *)0x0)) {
    return 0;
  }
  iVar3 = FUN_ram_4000522c(puVar5,&DAT_ram_4009322c);
  if (iVar3 == 0) {
    if (*(char *)(param_1 + 0x30069b94) != '\b') {
      return 0;
    }
    if (param_2 != 0) {
      return 0;
    }
    *param_3 = 1;
    *(ulonglong *)(param_3 + 1) = (ulonglong)DAT_ram_40093490;
    uVar1 = DAT_ram_40093494;
  }
  else {
    iVar3 = FUN_ram_4000522c(puVar5,s_delay_ram_40093234);
    if (iVar3 == 0) {
      bVar2 = *(byte *)(param_1 + 0x30069b94);
      if (7 < bVar2) {
        return 0;
      }
      if (bVar2 == 3) {
        if (param_2 != 2) {
          return 0;
        }
        uVar6 = (ulonglong)DAT_ram_40093490;
        *param_3 = 2;
        *(ulonglong *)(param_3 + 1) = uVar6;
        uVar6 = (ulonglong)DAT_ram_40093494;
        param_3[3] = &DAT_ram_400934f8;
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
        uVar6 = (ulonglong)DAT_ram_4009309c;
        *param_3 = 2;
        *(ulonglong *)(param_3 + 1) = uVar6;
        uVar6 = (ulonglong)DAT_ram_400930c4;
        param_3[3] = &DAT_ram_40093568;
        *(ulonglong *)(param_3 + 2) = uVar6;
        uVar4 = 0x11;
      }
      *(undefined1 *)(param_3 + 4) = uVar4;
      return 1;
    }
    iVar3 = FUN_ram_4000522c(puVar5,&DAT_ram_4009323c);
    uVar1 = DAT_ram_4009282c;
    if (iVar3 != 0) {
      return 0;
    }
    if (1 < (byte)(*(char *)(param_1 + 0x30069b94) - 3U)) {
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


/* NanoCore 1.10, address 0x4001aaa2.
 * REA evidence: ev_fae2c2192eebe8509bb145eb1a49741f9947887f467629abf777f5f9b7639a67
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001aaa2(float param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_24 [28];
  
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_4009281c < param_1) {
    param_1 = DAT_ram_4009281c;
  }
  iVar1 = (int)(param_1 * DAT_ram_40093094 + DAT_ram_40092864);
  if (iVar1 < 0x3e9) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 1000;
  }
  iVar2 = FUN_ram_4001a956(param_2,param_3,auStack_24);
  if (iVar2 != 0) {
    uVar3 = FUN_ram_40019eee(auStack_24,iVar1);
    iVar1 = FUN_ram_40019fb0(auStack_24,uVar3);
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4001ab1a.
 * REA evidence: ev_a098f2c99e9fdd3146927357f986ea2f174dba3a638548cb98d1057381459e6d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ab1a(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _DAT_ram_30069e80;
  if ((7 < param_1) || (param_2 == 0xc)) {
    return;
  }
  (&DAT_ram_30069e20)[param_2 + param_1 * 0xc] = 1;
  if (iVar1 != 0) {
    FUN_ram_4004b8a8(iVar1,0x78);
    FUN_ram_4004b8ca(_DAT_ram_30069e80,1);
    FUN_ram_4004b8ce(_DAT_ram_30069e80);
    return;
  }
  _DAT_ram_30069e80 = FUN_ram_4004b642(FUN_ram_4001a2ce,0x78,0);
  if (_DAT_ram_30069e80 != 0) {
    FUN_ram_4004b8ca(_DAT_ram_30069e80,1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001ab92.
 * REA evidence: ev_16172ca8bc3fe83c383894d00814c00081537d24c72f01a228c6ecf739b88319
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4001ab92(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 < 0) {
    return 0;
  }
  uVar1 = param_1 + (uint)DAT_ram_300699cc * 5 & 0xffff;
  iVar2 = FUN_ram_40024ec6(_DAT_ram_300696fc);
  if (0xb < uVar1) {
    uVar1 = 0xb;
  }
  if (iVar2 != 0xff) {
    uVar3 = FUN_ram_4001a2a4(_DAT_ram_300696fc);
    uVar1 = FUN_ram_40026450(iVar2,uVar3,uVar1 & 0xff,1);
    return uVar1;
  }
  return uVar1 & 0xff;
}


/* NanoCore 1.10, address 0x4001ac0e.
 * REA evidence: ev_af0199d375a8011150734de9c41299eb14d0f94cec9796f71b58b3637bbde670
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001ac74) */

void FUN_ram_4001ac0e(uint param_1,uint param_2)

{
  int iVar1;
  
  if (((param_1 < 8) && (param_2 < 5)) && ((param_2 & 0xff) < (uint)DAT_ram_30069a34)) {
    iVar1 = FUN_ram_4001ab92(param_2);
    if (*(int *)(&DAT_ram_30069938 + param_2 * 4) == 0) {
      return;
    }
    FUN_ram_400561e6(*(int *)(&DAT_ram_30069938 + param_2 * 4),
                     ((uint)*(ushort *)((iVar1 + param_1 * 0xc) * 2 + 0x30069ad4) * 0xa8c) / 1000);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001ac88.
 * REA evidence: ev_e219dbcac0e180fc7324b65e7fe5e1993e510454b49ae67f1cd93ba7018441ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ac88(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = _DAT_ram_300696fc;
  if (_DAT_ram_300696fc == (undefined *)0x0) {
    puVar2 = &DAT_ram_40093dc4;
  }
  iVar3 = FUN_ram_4001a28e(puVar2);
  iVar1 = 0;
  if (-1 < iVar3) {
    for (; iVar1 < (int)(uint)DAT_ram_30069a34; iVar1 = iVar1 + 1) {
      FUN_ram_4001ac0e(iVar3,iVar1);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4001acd4.
 * REA evidence: ev_e53f3d057fcfa60f42b5f7a9419399fa30b7743ba9210d7e75da7e11d696161f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001acd4(uint param_1)

{
  uint uVar1;
  
  if (7 < param_1) {
    return;
  }
  if ((_DAT_ram_30069e1c != 0) && ((int)param_1 < _DAT_ram_30069e18)) {
    FUN_ram_4001a4c6(*(undefined4 *)(_DAT_ram_30069e1c + param_1 * 4),
                     *(undefined1 *)(param_1 + 0x30069acc));
  }
  uVar1 = FUN_ram_4001a28e(_DAT_ram_300696fc);
  if (param_1 == uVar1) {
    FUN_ram_4001a4c6(_DAT_ram_30069748,*(undefined1 *)(param_1 + 0x30069acc));
    FUN_ram_4001a4dc();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001ad48.
 * REA evidence: ev_451e7101507cfd723242bfc0a25359ad25cd971a6f8b9df104564d58ab67c7d7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ad48(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_ram_30069e18;
  if (8 < _DAT_ram_30069e18) {
    iVar2 = 8;
  }
  for (iVar1 = 0; iVar1 < iVar2; iVar1 = iVar1 + 1) {
    FUN_ram_4001acd4(iVar1);
  }
  return;
}


/* NanoCore 1.10, address 0x4001ad7a.
 * REA evidence: ev_b0676fd290d34be10842b0d4243591487ddf1cdb9638a6792d20585cfe2d22d6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001ad7a(uint param_1,undefined1 param_2)

{
  if (param_1 < 8) {
    *(undefined1 *)(param_1 + 0x30069acc) = param_2;
    FUN_ram_40023088();
    FUN_ram_4001acd4(param_1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001adfc.
 * REA evidence: ev_65e10566cf939deaeeb0c970f34299e9e708d58f81ff0222520908ab1435672d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001adfc(uint param_1)

{
  if (0x1d < param_1) {
    return;
  }
  DAT_ram_30046724 = param_1;
  if (_DAT_ram_30069b9c != 0) {
    FUN_ram_4004b8a8(_DAT_ram_30069b9c,0x4b);
    FUN_ram_4004b8ca(_DAT_ram_30069b9c,1);
    FUN_ram_4004b8ce(_DAT_ram_30069b9c);
    return;
  }
  _DAT_ram_30069b9c = FUN_ram_4004b642(&LAB_ram_4001a144,0x4b,0);
  if (_DAT_ram_30069b9c != 0) {
    FUN_ram_4004b8ca(_DAT_ram_30069b9c,1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001ae34.
 * REA evidence: ev_7d00b5a5411d25607ed58fbea76bf521b197c647e251626f6cecbec6aeec27ee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001aed0) */
/* WARNING: Removing unreachable block (ram,0x4001af10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ae34(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_4c [4];
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  iVar6 = *(int *)(param_1 * 4 + 0x3006974c);
  iVar10 = *(int *)(param_1 * 4 + 0x30069760);
  iVar11 = iVar6 + 0x14;
  iVar3 = DAT_ram_30046730;
  if (DAT_ram_30046730 < 1) {
    iVar3 = 0x28;
  }
  if (*(int *)(&DAT_ram_30069938 + param_1 * 4) != 0) {
    FUN_ram_40043faa(*(int *)(&DAT_ram_30069938 + param_1 * 4),iVar6,iVar10);
    FUN_ram_40044038(*(undefined4 *)(&DAT_ram_30069938 + param_1 * 4),0x28,0x28);
    if (iVar3 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = 0x2800 / iVar3;
    }
    FUN_ram_400561c0(*(undefined4 *)(&DAT_ram_30069938 + param_1 * 4),iVar3);
  }
  if (*(int *)(&DAT_ram_30069814 + param_1 * 4) != 0) {
    iVar3 = FUN_ram_400440f2();
    iVar6 = FUN_ram_400440fe(*(undefined4 *)(&DAT_ram_30069814 + param_1 * 4));
    FUN_ram_40043faa(*(undefined4 *)(&DAT_ram_30069814 + param_1 * 4),iVar11 - iVar3 / 2,
                     (iVar10 - iVar6) + -2);
    FUN_ram_40016fb2(*(undefined4 *)(&DAT_ram_30069814 + param_1 * 4),param_1 * 0x20 + 0x30069774);
  }
  if (*(int *)(&DAT_ram_30069924 + param_1 * 4) != 0) {
    iVar3 = FUN_ram_400440f2();
    FUN_ram_40043faa(*(undefined4 *)(&DAT_ram_30069924 + param_1 * 4),iVar11 - iVar3 / 2,
                     iVar10 + 0x2c);
    FUN_ram_40016fb2(*(undefined4 *)(&DAT_ram_30069924 + param_1 * 4),param_1 * 0x20 + 0x30069884);
  }
  if (((param_1 < 5) && (_DAT_ram_300696f0 != 0)) &&
     (iVar3 = *(int *)(&DAT_ram_30069828 + param_1 * 4), iVar3 != 0)) {
    bVar1 = false;
    local_4c[0] = *(int *)(&DAT_ram_30069938 + param_1 * 4);
    iVar12 = 0;
    local_4c[1] = *(undefined4 *)(&DAT_ram_30069814 + param_1 * 4);
    local_4c[2] = *(undefined4 *)(&DAT_ram_30069924 + param_1 * 4);
    iVar6 = 0;
    iVar10 = 0;
    iVar11 = 0;
    iVar9 = 0;
    do {
      iVar13 = local_4c[iVar12];
      iVar2 = iVar6;
      iVar4 = iVar10;
      iVar7 = iVar11;
      iVar8 = iVar9;
      if ((iVar13 != 0) && (iVar5 = FUN_ram_40042c20(iVar13,1), iVar5 == 0)) {
        FUN_ram_400440e0(iVar13,local_4c + 3);
        iVar2 = iStack_38;
        iVar4 = iStack_34;
        iVar7 = local_4c[3];
        iVar8 = iStack_3c;
        if (bVar1) {
          if (local_4c[3] < iVar11) {
            iVar11 = local_4c[3];
          }
          if (iStack_3c < iVar9) {
            iVar9 = iStack_3c;
          }
          if (iVar6 < iStack_38) {
            iVar6 = iStack_38;
          }
          iVar2 = iVar6;
          iVar4 = iVar10;
          iVar7 = iVar11;
          iVar8 = iVar9;
          if (iVar10 < iStack_34) {
            iVar4 = iStack_34;
          }
        }
        bVar1 = true;
      }
      iVar12 = iVar12 + 1;
      iVar6 = iVar2;
      iVar10 = iVar4;
      iVar11 = iVar7;
      iVar9 = iVar8;
    } while (iVar12 != 3);
    if (!bVar1) {
      FUN_ram_40043064(iVar3,1);
      return;
    }
    FUN_ram_400440e0(_DAT_ram_300696f0,local_4c + 3);
    FUN_ram_40043faa(iVar3,iVar7 - local_4c[3],iVar8 - iStack_3c);
    FUN_ram_40044038(iVar3,(iVar2 - iVar7) + 1,(iVar4 - iVar8) + 1);
    FUN_ram_40042b3a(iVar3,1);
  }
  return;
}


