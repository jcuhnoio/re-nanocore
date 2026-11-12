/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40021000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400210dc.
 * REA evidence: ev_bfa2a562eaed3e133f82a2f391ad4057af242b6449b3b5bbcbd171148d2b3595
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400210dc(void)

{
  return DAT_ram_30046748;
}


/* NanoCore 1.10, address 0x400210e6.
 * REA evidence: ev_5d6cf39a96a171aca5c9cb43eefc3b6eab2bec97b20ac6b4fb6ee51335ebaaaf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400210e6(void)

{
  return DAT_ram_3004674c;
}


/* NanoCore 1.10, address 0x400210f0.
 * REA evidence: ev_0adc691b08038f42cbcf08d4b219049a818a914f7bc1cf9dcf0773d77d4ee504
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined2 FUN_ram_400210f0(void)

{
  return DAT_ram_30046754;
}


/* NanoCore 1.10, address 0x400210fa.
 * REA evidence: ev_9701d269b681b28fbd21dd825b246fd53c2d438336c42b14e49d0b4ad69ee33f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined2 FUN_ram_400210fa(void)

{
  return DAT_ram_30046752;
}


/* NanoCore 1.10, address 0x40021104.
 * REA evidence: ev_d61510186f54d03d1afdc90bc88cf23307013637e31d549038c905a582a18a51
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined2 FUN_ram_40021104(void)

{
  return DAT_ram_30046750;
}


/* NanoCore 1.10, address 0x4002110e.
 * REA evidence: ev_b6242af16e4b3e585e8ddc91f2b937db264e1549694c0b89e05a46d6a67c61c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002110e(undefined4 *param_1)

{
  return *param_1;
}


/* NanoCore 1.10, address 0x4002112c.
 * REA evidence: ev_80bfc0b2412c6710afda4363f1a0ce6615d5f1ddaa83d95a8d4b53f2e968f399
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002112c(void)

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
  
  DAT_ram_30046758 = 0xffffff;
  _DAT_ram_3006a4c0 = 0;
  iVar1 = FUN_ram_4002ba66(s_style_ram_400936a4,&iStack_3c);
  if ((((iVar1 == 0) && (0xf < uStack_38)) &&
      (iVar1 = FUN_ram_4002b9e8(iStack_3c + 0x10,auStack_30,0x10), iVar1 == 0)) &&
     ((iVar1 = FUN_ram_4002110e(auStack_30), iVar1 == 0x31595453 && (sStack_2c == 1)))) {
    uVar2 = FUN_ram_4002110e(auStack_24);
    if ((uStack_2a & 1) != 0) {
      uVar3 = FUN_ram_4002110e(auStack_28);
      DAT_ram_30046758 = uVar3 & 0xffffff;
    }
    if ((uStack_2a & 2) != 0) {
      _DAT_ram_3006a4c0 = uVar2 & 0xffffff;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x400211d6.
 * REA evidence: ev_e6409d03df423e9d1e26e8e5954baa1cea9ea92386242795c537526878df3af3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400211d6(void)

{
  return DAT_ram_30046758;
}


/* NanoCore 1.10, address 0x400211e0.
 * REA evidence: ev_190d5c7ef6fd68e8f5416f3eb8a4d839f33fbbb0f83dbb2059fac943d965e320
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400211e0(void)

{
  return _DAT_ram_3006a4c0;
}


/* NanoCore 1.10, address 0x400211ea.
 * REA evidence: ev_08f07c0b454595094a1d47e5cec09db9826792199ce391303efac168acbade80
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_40022106(void)

{
  return (int)DAT_ram_3006a4c8;
}


/* NanoCore 1.10, address 0x400211ee.
 * REA evidence: ev_a32fbeacd6087d7f69cd1e2d904ebe5aaeb2eda9da3a3465936c47bdca8f385d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_ram_40022110(void)

{
  return _DAT_ram_3006a4cc;
}


/* NanoCore 1.10, address 0x400211f2.
 * REA evidence: ev_4abf95893fb294f0b0805da797cb972bbc31c4b584665f81b4dd1bdca9ab2046
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_ram_4002211a(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (0x14 < param_1) {
    param_1 = 0x14;
  }
  if (param_1 < -0x14) {
    param_1 = -0x14;
  }
  uVar2 = FUN_ram_40000d54(DAT_ram_400930a4,(float)param_1 / DAT_ram_400930bc);
  iVar1 = 0;
  if (DAT_ram_3006a4c8 != (char)param_1) {
    DAT_ram_3006a4c8 = (char)param_1;
    _DAT_ram_3006a4cc = uVar2;
    iVar1 = FUN_ram_40021e5e(2);
    iVar1 = -(uint)(iVar1 != 0);
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x400211f6.
 * REA evidence: ev_a112a6f485c8597a93f64848cfc839284465f0bf76d85e4c19c8ce3650afbdca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool thunk_FUN_ram_40022018(void)

{
  return DAT_ram_3006a4d0 != '\0';
}


/* NanoCore 1.10, address 0x400211fa.
 * REA evidence: ev_882660d68c3ca5974d78d5a20a804ee5f72c31f8683ba645bfd211bb4c6ad42f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_40022026(int param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = param_1 != 0;
  iVar2 = 0;
  if ((bool)DAT_ram_3006a4d0 != bVar1) {
    DAT_ram_3006a4d0 = bVar1;
    iVar2 = FUN_ram_40021e5e(1,bVar1);
    thunk_FUN_ram_4002ac46(bVar1);
    iVar2 = -(uint)(iVar2 != 0);
  }
  return iVar2;
}


/* NanoCore 1.10, address 0x400211fe.
 * REA evidence: ev_e9d392b69e369ec6266c9036a932dfe2f157fe534de28a9a814a1d8dc6eba710
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_400211fe(void)

{
  int iVar1;
  uint uVar2;
  int aiStack_14 [3];
  
  iVar1 = FUN_ram_40006c7c();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40006c48(), iVar1 < 1)) {
    return 0;
  }
  if (_DAT_ram_3006a4d4 != 0) {
    aiStack_14[0] = 0;
    uVar2 = FUN_ram_40006f4a(aiStack_14);
    if (((uVar2 != 0) && (uVar2 <= _DAT_ram_3006a4d4)) &&
       (_DAT_ram_3006a4d4 < uVar2 + aiStack_14[0] * 0x40)) {
      return _DAT_ram_3006a4d4;
    }
  }
  _DAT_ram_3006a4d4 = fal_partition_find(&DAT_ram_400936ac);
  return _DAT_ram_3006a4d4;
}


/* NanoCore 1.10, address 0x40021258.
 * REA evidence: ev_8d0d24edfeba998416688c1d9d6087c64035f979686dcc1694218d14545ca5f8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40021258(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_400211fe();
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


/* NanoCore 1.10, address 0x40021296.
 * REA evidence: ev_9074574612a9fb5c9374d5a6a008bfd2fe026f7d7e44054795b3d15f610b96e8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40021296(int param_1)

{
  int iVar1;
  float fVar2;
  
  if (param_1 != 0) {
    if (100 < param_1) {
      param_1 = 100;
    }
    fVar2 = (float)FUN_ram_40000d54(DAT_ram_400930a4,
                                    (((float)(param_1 + -1) / DAT_ram_400936dc) * DAT_ram_400936e0 +
                                    DAT_ram_400936e4) / DAT_ram_400930bc);
    iVar1 = (int)(fVar2 * _DAT_ram_400936e8 + DAT_ram_40092864);
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


/* NanoCore 1.10, address 0x4002131e.
 * REA evidence: ev_349112aa59ccf38dd86f77a05f2e3187888601dfe7ec8a39b81a2d14c6af0fea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002131e(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_400211fe();
  iVar2 = -1;
  if ((iVar1 != 0) && (0x1fff < *(uint *)(iVar1 + 0x38))) {
    iVar2 = FUN_ram_40006ff2(iVar1,0x1000,0x1000);
    iVar2 = iVar2 >> 0x1f;
  }
  return iVar2;
}


/* NanoCore 1.10, address 0x40021346.
 * REA evidence: ev_34c37097067d80eafcd94cb38b6cf904571eb5e7dffc1e8a54491e656ffeb4c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40021346(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_ram_4000505c(&uStack_20,0,0x10);
  uStack_20 = 0x32544553;
  uStack_1c = 1;
  uStack_1a = param_3;
  uStack_19 = param_4;
  uStack_18 = param_2;
  uStack_14 = FUN_ram_4000755e(0,&uStack_20,0xc);
  iVar1 = FUN_ram_400211fe();
  iVar2 = -1;
  if (iVar1 != 0) {
    iVar2 = -1;
    if (param_1 + 0x10U <= *(uint *)(iVar1 + 0x38)) {
      iVar1 = FUN_ram_40006fa8(iVar1,param_1,&uStack_20,0x10);
      iVar2 = -(uint)(iVar1 != 0x10);
    }
  }
  return iVar2;
}


/* NanoCore 1.10, address 0x400213c2.
 * REA evidence: ev_8f18624d87a72d2eb71dc61ce07bd2d1d742c648cd7dd18a9ae7136aa3d0e73b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400213c2(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_2;
  *param_2 = iVar2 + 1;
  iVar2 = FUN_ram_40021346(*param_1,iVar2 + 1);
  if (iVar2 == 0) {
    *param_1 = *param_1 + 0x10;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x400213ec.
 * REA evidence: ev_cb04259c88d9cbe6951c48ffecee60e126e284cbf7a34bf318b82ce2d1ff9f77
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_400213ec(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_400213c2(param_1,param_2,1,DAT_ram_3006a4d0 != '\0');
  if (((((iVar1 == 0) &&
        (iVar1 = FUN_ram_400213c2(param_1,param_2,0x39,DAT_ram_30046784 != '\0'), iVar1 == 0)) &&
       (iVar1 = FUN_ram_400213c2(param_1,param_2,0x3a,DAT_ram_3004675c != '\0'), iVar1 == 0)) &&
      (((iVar1 = FUN_ram_400213c2(param_1,param_2,5,DAT_ram_3006a520 != '\0'), iVar1 == 0 &&
        (iVar1 = FUN_ram_400213c2(param_1,param_2,0xf,(int)DAT_ram_3006a4d2), iVar1 == 0)) &&
       ((iVar1 = FUN_ram_400213c2(param_1,param_2,2,(int)DAT_ram_3006a4c8), iVar1 == 0 &&
        ((iVar1 = FUN_ram_400213c2(param_1,param_2,3,(int)DAT_ram_3006a51d), iVar1 == 0 &&
         (iVar1 = FUN_ram_400213c2(param_1,param_2,4,(int)DAT_ram_3006a4c4), iVar1 == 0)))))))) &&
     ((iVar2 = FUN_ram_400213c2(param_1,param_2,0x10,(int)DAT_ram_3006a4d1),
      iVar1 = _DAT_ram_3006a518, iVar2 == 0 &&
      (((DAT_ram_3006a51c == '\0' ||
        (((((iVar2 = FUN_ram_400213c2(param_1,param_2,6,(int)(char)_DAT_ram_3006a518), iVar2 == 0 &&
            (iVar2 = FUN_ram_400213c2(param_1,param_2,7,(int)(char)((uint)iVar1 >> 8)), iVar2 == 0))
           && (iVar2 = FUN_ram_400213c2(param_1,param_2,8,(int)(char)((uint)iVar1 >> 0x10)),
              iVar2 == 0)) &&
          ((iVar2 = FUN_ram_400213c2(param_1,param_2,9,iVar1 >> 0x18), iVar1 = _DAT_ram_3006a514,
           iVar2 == 0 &&
           (iVar2 = FUN_ram_400213c2(param_1,param_2,10,(int)(char)_DAT_ram_3006a514), iVar2 == 0)))
          ) && ((iVar2 = FUN_ram_400213c2(param_1,param_2,0xb,(int)(char)((uint)iVar1 >> 8)),
                iVar2 == 0 &&
                ((iVar2 = FUN_ram_400213c2(param_1,param_2,0xc,(int)(char)((uint)iVar1 >> 0x10)),
                 iVar2 == 0 &&
                 (iVar1 = FUN_ram_400213c2(param_1,param_2,0xd,iVar1 >> 0x18), iVar1 == 0)))))))) &&
       (iVar1 = FUN_ram_400213c2(param_1,param_2,0xe,DAT_ram_3006a51c != '\0'), iVar1 == 0)))))) {
    iVar1 = 0;
    do {
      if ((-1 < (char)(&DAT_ram_30046760)[iVar1]) &&
         (iVar2 = FUN_ram_400213c2(param_1,param_2,iVar1 + 0x11U & 0xff,
                                   (int)(char)(&DAT_ram_30046760)[iVar1]), iVar2 != 0)) {
        return -1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
    iVar1 = 0;
    do {
      if ((-1 < (char)(&DAT_ram_30046764)[iVar1]) &&
         (iVar2 = FUN_ram_400213c2(param_1,param_2,iVar1 + 0x15U & 0xff,
                                   (int)(char)(&DAT_ram_30046764)[iVar1]), iVar2 != 0)) {
        return -1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x20);
    if (((DAT_ram_3006a4d8 == '\0') ||
        ((((iVar1 = FUN_ram_400213c2(param_1,param_2,0x35,(int)(char)_DAT_ram_3006a4da), iVar1 == 0
           && (iVar1 = FUN_ram_400213c2(param_1,param_2,0x36,
                                        (int)(char)((ushort)_DAT_ram_3006a4da >> 8)), iVar1 == 0))
          && (iVar1 = FUN_ram_400213c2(param_1,param_2,0x37,(int)(char)_DAT_ram_3006a4de),
             iVar1 == 0)) &&
         (iVar1 = FUN_ram_400213c2(param_1,param_2,0x38,(int)(char)((ushort)_DAT_ram_3006a4de >> 8))
         , iVar1 == 0)))) &&
       (((iVar1 = FUN_ram_400213c2(param_1,param_2,0x3b,(int)(char)DAT_ram_3006a4dc), iVar1 == 0 &&
         (iVar1 = FUN_ram_400213c2(param_1,param_2,0x3c,(int)DAT_ram_30046785), iVar1 == 0)) &&
        (iVar1 = FUN_ram_400213c2(param_1,param_2,0x3d,
                                  (int)(char)(DAT_ram_3006a4dc ^ DAT_ram_30046785 * '!' ^ 0xa7)),
        iVar1 == 0)))) {
      iVar1 = FUN_ram_400213c2(param_1,param_2,0x3e,1);
      return -(uint)(iVar1 != 0);
    }
  }
  return -1;
}


/* NanoCore 1.10, address 0x40021730.
 * REA evidence: ev_380a4029d1f6de6c1819a2f99d87cccc4b9592521f2019cfffd1c46c1c53e7ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40021730(int *param_1,uint *param_2,int param_3)

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
  FUN_ram_4000305c(local_80,&DAT_ram_400936b0,0x20);
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
LAB_ram_4002181a:
  do {
    iVar42 = iVar44 + 0x10;
    if (iVar42 == iStack_a8) {
      iVar44 = 0x2000;
LAB_ram_40021834:
      if (uStack_ac != 0) {
        if (bVar9) {
          _DAT_ram_3006a4cc = CONCAT14(bVar47,_DAT_ram_3006a4cc);
        }
        if (bVar10) {
          DAT_ram_30046784 = bVar46;
        }
        if (bVar11) {
          DAT_ram_3004675c = bVar1;
        }
        if (bVar12) {
          DAT_ram_3006a520 = bVar2;
        }
        if (bVar13) {
          _DAT_ram_3006a4cc = CONCAT16((char)uStack_110,_DAT_ram_3006a4cc);
        }
        if (bVar14) {
          DAT_ram_3006a4c8 = (undefined1)iVar48;
          _DAT_ram_3006a4cc = FUN_ram_40000d54(DAT_ram_400930a4,(float)iVar48 / DAT_ram_400930bc);
        }
        if (bVar15) {
          DAT_ram_3006a51d = (undefined1)uVar33;
          _DAT_ram_3006a51e = FUN_ram_40021296(uVar33);
        }
        if (bVar16) {
          DAT_ram_3006a4c4 = (undefined1)uVar32;
          _DAT_ram_3006a4c6 = FUN_ram_40021296(uVar32);
        }
        if (bVar17) {
          _DAT_ram_3006a4cc = CONCAT15((char)uStack_10c,_DAT_ram_3006a4cc);
        }
        iVar48 = 0;
        do {
          if (acStack_94[iVar48] != '\0') {
            (&DAT_ram_30046760)[iVar48] = *(undefined1 *)((int)&uStack_98 + iVar48);
          }
          iVar48 = iVar48 + 1;
        } while (iVar48 != 4);
        iVar48 = 0;
        do {
          if (acStack_60[iVar48] != '\0') {
            (&DAT_ram_30046764)[iVar48] = local_80[iVar48];
          }
          iVar48 = iVar48 + 1;
        } while (iVar48 != 0x20);
        if ((((bVar18) && (bVar19)) && (bVar20)) && (bVar21)) {
          _DAT_ram_3006a4da = uVar39 << 8 | uVar38;
          _DAT_ram_3006a4de = uVar41 << 8 | uVar40;
          DAT_ram_3006a4d8 = 1;
        }
        if (bVar8) {
          DAT_ram_30046785 = bVar6;
          DAT_ram_3006a4dc = bVar5;
        }
        DAT_ram_3006a511 = uVar22;
        if (bVar23) {
          if (bVar3) {
            if (((((bVar24) && (bVar25)) && ((bVar26 && ((bVar27 && (bVar28)))))) && (bVar29)) &&
               ((bVar30 && (bVar31)))) {
              _DAT_ram_3006a518 =
                   uStack_150 << 8 | uStack_144 << 0x10 | uStack_15c | uStack_138 << 0x18;
              _DAT_ram_3006a514 = uStack_128 << 8 | uStack_12c << 0x10 | uVar51 | uStack_124 << 0x18
              ;
              DAT_ram_3006a51c = 1;
            }
          }
          else {
            DAT_ram_3006a51c = 0;
            _DAT_ram_3006a518 = 0;
            _DAT_ram_3006a514 = 0;
          }
        }
      }
      if (param_1 != (int *)0x0) {
        *param_1 = iVar44;
      }
      *param_2 = uVar45;
      return;
    }
    iVar34 = FUN_ram_40021258(iVar44,&iStack_90);
    if ((iVar34 != 0) || (iStack_90 == -1)) goto LAB_ram_40021834;
    iVar44 = iVar42;
  } while (((iStack_90 != iStack_a4) || (sStack_8c != 1)) ||
          (iVar42 = FUN_ram_4000755e(0,&iStack_90,0xc), iStack_84 != iVar42));
  if (uVar45 < uStack_88) {
    uVar45 = uStack_88;
  }
  uVar43 = (uint)bStack_8a;
  if (uVar43 == 1) {
    bVar9 = true;
    bVar47 = bStack_89 != 0;
    goto LAB_ram_4002181a;
  }
  if (uVar43 == 0x39) {
    bVar10 = true;
    bVar46 = bStack_89 != 0;
    goto LAB_ram_4002181a;
  }
  if (uVar43 == 0x3a) {
    bVar1 = bStack_89 != 0;
    bVar11 = true;
    goto LAB_ram_4002181a;
  }
  if (uVar43 == 5) {
    bVar2 = bStack_89 != 0;
    bVar12 = true;
    goto LAB_ram_4002181a;
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
    goto LAB_ram_4002181a;
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
    goto LAB_ram_4002181a;
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
    goto LAB_ram_4002181a;
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
    goto LAB_ram_4002181a;
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
    goto LAB_ram_4002181a;
  }
  if (uVar43 == 6) {
    uStack_15c = (uint)bStack_89;
    bVar24 = true;
    goto LAB_ram_4002181a;
  }
  if (uVar43 == 7) {
    uStack_150 = (uint)bStack_89;
    bVar25 = true;
    goto LAB_ram_4002181a;
  }
  if (uVar43 == 8) {
    uStack_144 = (uint)bStack_89;
    bVar26 = true;
    goto LAB_ram_4002181a;
  }
  if (uVar43 == 9) {
    uStack_138 = (uint)bStack_89;
    bVar27 = true;
    goto LAB_ram_4002181a;
  }
  if (uVar43 == 10) {
    uVar51 = (uint)bStack_89;
    bVar28 = true;
    goto LAB_ram_4002181a;
  }
  if (uVar43 == 0xb) {
    uStack_128 = (uint)bStack_89;
    bVar29 = true;
    goto LAB_ram_4002181a;
  }
  if (uVar43 == 0xc) {
    uStack_12c = (uint)bStack_89;
    bVar30 = true;
    goto LAB_ram_4002181a;
  }
  if (uVar43 == 0xd) {
    uStack_124 = (uint)bStack_89;
    bVar31 = true;
    goto LAB_ram_4002181a;
  }
  if (uVar43 == 0xe) {
    bVar3 = bStack_89 != 0;
    bVar23 = true;
    goto LAB_ram_4002181a;
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
        goto LAB_ram_4002181a;
      }
      if (uVar43 == 0x36) {
        uVar39 = (ushort)bStack_89;
        bVar19 = true;
        goto LAB_ram_4002181a;
      }
      if (uVar43 == 0x37) {
        uVar40 = (ushort)bStack_89;
        bVar20 = true;
        goto LAB_ram_4002181a;
      }
      if (uVar43 == 0x38) {
        uVar41 = (ushort)bStack_89;
        bVar21 = true;
        goto LAB_ram_4002181a;
      }
      if (uVar43 == 0x3b) {
        bVar4 = true;
        bVar49 = bStack_89;
        goto LAB_ram_4002181a;
      }
      if (uVar43 == 0x3c) {
        bVar7 = true;
        bVar50 = bStack_89;
        goto LAB_ram_4002181a;
      }
      if (uVar43 == 0x3d) {
        if (bVar4) {
          bVar4 = false;
          if (!bVar7) goto LAB_ram_4002181a;
          if (((bVar49 < bVar50) && (bVar50 < 0x65)) &&
             (bStack_89 == (byte)(bVar49 ^ bVar50 * '!' ^ 0xa7))) {
            bVar5 = bVar49;
            bVar6 = bVar50;
            bVar8 = bVar7;
          }
        }
        bVar7 = false;
        goto LAB_ram_4002181a;
      }
      if ((uVar43 == 0x3e) && (bStack_89 == 1)) {
        uVar22 = 1;
      }
      goto LAB_ram_4002181a;
    }
    *(byte *)((int)&uStack_98 + uVar43 + 3) = bStack_89;
    pcVar37 = acStack_60;
  }
  pcVar37[uVar35] = '\x01';
  goto LAB_ram_4002181a;
}


/* NanoCore 1.10, address 0x40021d72.
 * REA evidence: ev_44450609924b0fe88abbd87585dc67b649f8683e3f8284bd3b8327b2bfe124ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40021d72(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_28;
  int aiStack_24 [2];
  
  iStack_28 = 0x1000;
  aiStack_24[0] = 0;
  iVar1 = FUN_ram_400211fe();
  if (iVar1 == 0) {
    uVar2 = FUN_ram_400002f4();
    if (DAT_ram_3006a510 == '\0') {
      FUN_ram_4000493c(0x3006a4e4,s_asetsv_ram_400936d4,1);
      DAT_ram_3006a510 = '\x01';
    }
    FUN_ram_400002fa(uVar2);
    FUN_ram_400049d6(0x3006a4e4,0xffffffff);
    FUN_ram_40004ac8(0x3006a4e4);
    return 0xffffffff;
  }
  FUN_ram_40021730(&iStack_28,aiStack_24,0);
  if (0x2000 < (uint)(iStack_28 + param_3 * 0x10)) {
    iVar1 = FUN_ram_4002131e();
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    aiStack_24[0] = 0;
    iStack_28 = 0x1000;
    iVar1 = FUN_ram_400213ec(&iStack_28,aiStack_24);
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
    iVar3 = FUN_ram_40021346(iStack_28,aiStack_24[0],*(undefined1 *)(param_1 + iVar1),
                             (int)*(char *)(param_2 + iVar1));
    if (iVar3 != 0) {
      return 0xffffffff;
    }
    iVar1 = iVar1 + 1;
    iStack_28 = iStack_28 + 0x10;
  } while (param_3 != iVar1);
  _DAT_ram_3006a4e0 = aiStack_24[0];
  return 0;
}


/* NanoCore 1.10, address 0x40021e5e.
 * REA evidence: ev_2bc7c7d0472615beb4da5390c4525d3db82c1115936de1222e06407a42819a2e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40021e5e(undefined1 param_1,undefined1 param_2)

{
  undefined1 uStack_12;
  undefined1 auStack_11 [13];
  
  uStack_12 = param_2;
  auStack_11[0] = param_1;
  FUN_ram_40021d72(auStack_11,&uStack_12,1);
  return;
}


/* NanoCore 1.10, address 0x40021e7e.
 * REA evidence: ev_e792a51f42437dc2ed6bbec7b6ea5edef189fb2e94ca458455c014fd5dcb2c82
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40021e7e(void)

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
  
  DAT_ram_3006a520 = 1;
  DAT_ram_3006a4c8 = 0;
  DAT_ram_3006a51d = 100;
  DAT_ram_3006a4c4 = 100;
  _DAT_ram_3006a4cc = (uint5)DAT_ram_4009281c;
  _DAT_ram_3006a4cc = (ulonglong)CONCAT15(100,_DAT_ram_3006a4cc);
  _DAT_ram_3006a51e = FUN_ram_40021296(100);
  _DAT_ram_3006a4c6 = FUN_ram_40021296(100);
  _DAT_ram_3006a518 = 0;
  _DAT_ram_3006a514 = 0;
  DAT_ram_3006a51c = 0;
  DAT_ram_3006a4dc = 0;
  DAT_ram_30046785 = 100;
  DAT_ram_3006a511 = '\0';
  _DAT_ram_3006a4e0 = 0;
  _DAT_ram_3006a4d4 = 0;
  FUN_ram_40021730(0,&DAT_ram_3006a4e0,1);
  if (_DAT_ram_3006a4e0 == 0) {
    bVar1 = false;
    iVar2 = 0x1000;
    uVar3 = 0;
    bVar4 = false;
    while (((iVar5 = iVar2 + 0x10, iVar5 != 0x2010 &&
            (iVar2 = FUN_ram_40021258(iVar2,&iStack_40), iVar2 == 0)) && (iStack_40 != -1))) {
      iVar2 = iVar5;
      if (((iStack_40 == 0x4c50424b) && (sStack_3c == 1)) &&
         ((iVar5 = FUN_ram_4000755e(0,&iStack_40,0xc), iStack_34 == iVar5 &&
          ((!bVar1 || (uVar3 <= uStack_38)))))) {
        bVar1 = true;
        uVar3 = uStack_38;
        bVar4 = cStack_3a != '\0';
      }
    }
    if (bVar1) {
      _DAT_ram_3006a4cc = CONCAT14(bVar4,_DAT_ram_3006a4cc);
    }
  }
  uStack_44 = 0x1000;
  iStack_40 = 0;
  iVar2 = FUN_ram_400211fe();
  if ((((iVar2 != 0) && (DAT_ram_3006a511 == '\0')) && (iVar2 = FUN_ram_4002131e(), iVar2 == 0)) &&
     (iVar2 = FUN_ram_400213ec(&uStack_44,&iStack_40), iVar2 == 0)) {
    _DAT_ram_3006a4e0 = iStack_40;
    DAT_ram_3006a511 = '\x01';
  }
  return 0;
}


