/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40022000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4002230c.
 * REA evidence: ev_5bf40741e2d67bbef6ea91dce95fb3a6d4b7421cbda0119e6b2b93a1f1fc15ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002230c(void)

{
  return 0;
}


/* NanoCore 1.12, address 0x40022310.
 * REA evidence: ev_6a32058920707b50a8d039eb3da5637b8000868a72b04e1740e3e5a59b2e5a46
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40022310(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bStack_22;
  char cStack_21;
  
  iVar1 = FUN_ram_40021c60(param_1,param_2,0x48,DAT_ram_3006b808 != '\0');
  if (((((iVar1 == 0) &&
        (iVar1 = FUN_ram_40021c60(param_1,param_2,1,DAT_ram_3006b7f8 != '\0'), iVar1 == 0)) &&
       (iVar1 = FUN_ram_40021c60(param_1,param_2,0x39,DAT_ram_3004ad74 != '\0'), iVar1 == 0)) &&
      (((iVar1 = FUN_ram_40021c60(param_1,param_2,0x3a,DAT_ram_3004ad4c != '\0'), iVar1 == 0 &&
        (iVar1 = FUN_ram_40021c60(param_1,param_2,5,DAT_ram_3006b820 != '\0'), iVar1 == 0)) &&
       ((iVar1 = FUN_ram_40021c60(param_1,param_2,0xf,(int)DAT_ram_3006b7fa), iVar1 == 0 &&
        ((iVar1 = FUN_ram_40021c60(param_1,param_2,2,(int)DAT_ram_3006b7f0), iVar1 == 0 &&
         (iVar1 = FUN_ram_40021c60(param_1,param_2,3,(int)DAT_ram_3006b81d), iVar1 == 0)))))))) &&
     ((iVar1 = FUN_ram_40021c60(param_1,param_2,4,(int)DAT_ram_3006b7ec), iVar1 == 0 &&
      (iVar1 = FUN_ram_40021c60(param_1,param_2,0x10,(int)DAT_ram_3006b7f9), iVar1 == 0)))) {
    iVar1 = 0;
    while (iVar2 = FUN_ram_4002230c(iVar1,&bStack_22,&cStack_21), iVar3 = _DAT_ram_3006b818,
          iVar2 != 0) {
      if (iVar2 != 1) {
        return -1;
      }
      if (iVar1 == 0xb7) {
        return -1;
      }
      if (bStack_22 < 0x49) {
        return -1;
      }
      if (0x2000 < *param_1 + 0x10U) {
        return -1;
      }
      iVar3 = FUN_ram_40021c60(param_1,param_2,bStack_22,(int)cStack_21);
      if (iVar3 != 0) {
        return -1;
      }
      iVar1 = iVar1 + 1;
    }
    if (((DAT_ram_3006b81c == '\0') ||
        (((((iVar1 = FUN_ram_40021c60(param_1,param_2,6,(int)(char)_DAT_ram_3006b818), iVar1 == 0 &&
            (iVar1 = FUN_ram_40021c60(param_1,param_2,7,(int)(char)((uint)iVar3 >> 8)), iVar1 == 0))
           && (iVar1 = FUN_ram_40021c60(param_1,param_2,8,(int)(char)((uint)iVar3 >> 0x10)),
              iVar1 == 0)) &&
          ((iVar3 = FUN_ram_40021c60(param_1,param_2,9,iVar3 >> 0x18), iVar1 = _DAT_ram_3006b814,
           iVar3 == 0 &&
           (iVar3 = FUN_ram_40021c60(param_1,param_2,10,(int)(char)_DAT_ram_3006b814), iVar3 == 0)))
          ) && ((iVar3 = FUN_ram_40021c60(param_1,param_2,0xb,(int)(char)((uint)iVar1 >> 8)),
                iVar3 == 0 &&
                ((iVar3 = FUN_ram_40021c60(param_1,param_2,0xc,(int)(char)((uint)iVar1 >> 0x10)),
                 iVar3 == 0 &&
                 (iVar1 = FUN_ram_40021c60(param_1,param_2,0xd,iVar1 >> 0x18), iVar1 == 0)))))))) &&
       (iVar1 = FUN_ram_40021c60(param_1,param_2,0xe,DAT_ram_3006b81c != '\0'), iVar1 == 0)) {
      iVar1 = 0;
      do {
        if ((-1 < (char)(&DAT_ram_3004ad50)[iVar1]) &&
           (iVar3 = FUN_ram_40021c60(param_1,param_2,iVar1 + 0x11U & 0xff,
                                     (int)(char)(&DAT_ram_3004ad50)[iVar1]), iVar3 != 0)) {
          return -1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 4);
      iVar1 = 0;
      do {
        if ((-1 < (char)(&DAT_ram_3004ad54)[iVar1]) &&
           (iVar3 = FUN_ram_40021c60(param_1,param_2,iVar1 + 0x15U & 0xff,
                                     (int)(char)(&DAT_ram_3004ad54)[iVar1]), iVar3 != 0)) {
          return -1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0x20);
      if (((DAT_ram_3006b800 == '\0') ||
          ((((iVar1 = FUN_ram_40021c60(param_1,param_2,0x35,(int)(char)_DAT_ram_3006b802),
             iVar1 == 0 &&
             (iVar1 = FUN_ram_40021c60(param_1,param_2,0x36,
                                       (int)(char)((ushort)_DAT_ram_3006b802 >> 8)), iVar1 == 0)) &&
            (iVar1 = FUN_ram_40021c60(param_1,param_2,0x37,(int)(char)_DAT_ram_3006b806), iVar1 == 0
            )) && (iVar1 = FUN_ram_40021c60(param_1,param_2,0x38,
                                            (int)(char)((ushort)_DAT_ram_3006b806 >> 8)), iVar1 == 0
                  )))) &&
         (((iVar1 = FUN_ram_40021c60(param_1,param_2,0x3b,(int)(char)DAT_ram_3006b804), iVar1 == 0
           && (iVar1 = FUN_ram_40021c60(param_1,param_2,0x3c,(int)DAT_ram_3004ad75), iVar1 == 0)) &&
          (iVar1 = FUN_ram_40021c60(param_1,param_2,0x3d,
                                    (int)(char)(DAT_ram_3006b804 ^ DAT_ram_3004ad75 * '!' ^ 0xa7)),
          iVar1 == 0)))) {
        iVar1 = FUN_ram_40021c60(param_1,param_2,0x3e,1);
        return -(uint)(iVar1 != 0);
      }
    }
  }
  return -1;
}


/* NanoCore 1.12, address 0x400226bc.
 * REA evidence: ev_bdbfe859c3e5120ea6bbc47f77bbc09b063ec9f54bb6e639562c52b82acba5e4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400226bc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iStack_28;
  int aiStack_24 [2];
  
  iStack_28 = 0x1000;
  aiStack_24[0] = 0;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    return 0xffffffff;
  }
  if (param_3 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_ram_40021a9c();
  if (iVar1 != 0) {
    FUN_ram_40021c8c(&iStack_28,aiStack_24,0);
    if (0x2000 < (uint)(iStack_28 + param_3 * 0x10)) {
      iVar1 = FUN_ram_40021bbc();
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      aiStack_24[0] = 0;
      iStack_28 = 0x1000;
      iVar1 = FUN_ram_40022310(&iStack_28,aiStack_24);
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
      iVar2 = FUN_ram_40021be4(iStack_28,aiStack_24[0],*(undefined1 *)(param_1 + iVar1),
                               (int)*(char *)(param_2 + iVar1));
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      iVar1 = iVar1 + 1;
      iStack_28 = iStack_28 + 0x10;
    } while (param_3 != iVar1);
    _DAT_ram_3006b80c = aiStack_24[0];
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4002275e.
 * REA evidence: ev_3fe82cf0dde69847463eecac153a47ad153f34f2ba579162aa5e3a4fd09d2a63
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002275e(undefined1 param_1,undefined1 param_2)

{
  undefined1 uStack_12;
  undefined1 auStack_11 [13];
  
  uStack_12 = param_2;
  auStack_11[0] = param_1;
  FUN_ram_400226bc(auStack_11,&uStack_12,1);
  return;
}


/* NanoCore 1.12, address 0x4002277e.
 * REA evidence: ev_65d3f93d3121a4826c1fe5eac16932ecff20ec22e7d93d4cc527d702f2e487a4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002277e(void)

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
  
  DAT_ram_3006b808 = 0;
  DAT_ram_3006b820 = 1;
  DAT_ram_3006b7f0 = 0;
  DAT_ram_3006b81d = 100;
  DAT_ram_3006b7ec = 100;
  _DAT_ram_3006b7f4 = (uint5)DAT_ram_4009672c;
  _DAT_ram_3006b7f4 = (ulonglong)CONCAT15(100,_DAT_ram_3006b7f4);
  _DAT_ram_3006b81e = FUN_ram_40021b34(100);
  _DAT_ram_3006b7ee = FUN_ram_40021b34(100);
  _DAT_ram_3006b818 = 0;
  _DAT_ram_3006b814 = 0;
  DAT_ram_3006b81c = 0;
  DAT_ram_3006b804 = 0;
  DAT_ram_3004ad75 = 100;
  DAT_ram_3006b810 = '\0';
  _DAT_ram_3006b80c = 0;
  _DAT_ram_3006b7fc = 0;
  FUN_ram_40021c8c(0,&DAT_ram_3006b80c,1);
  if (_DAT_ram_3006b80c == 0) {
    bVar1 = false;
    iVar2 = 0x1000;
    uVar3 = 0;
    bVar4 = false;
    while (((iVar5 = iVar2 + 0x10, iVar5 != 0x2010 &&
            (iVar2 = FUN_ram_40021af6(iVar2,&iStack_40), iVar2 == 0)) && (iStack_40 != -1))) {
      iVar2 = iVar5;
      if (((iStack_40 == 0x4c50424b) && (sStack_3c == 1)) &&
         ((iVar5 = FUN_ram_40007450(0,&iStack_40,0xc), iStack_34 == iVar5 &&
          ((!bVar1 || (uVar3 <= uStack_38)))))) {
        bVar1 = true;
        uVar3 = uStack_38;
        bVar4 = cStack_3a != '\0';
      }
    }
    if (bVar1) {
      _DAT_ram_3006b7f4 = CONCAT14(bVar4,_DAT_ram_3006b7f4);
    }
  }
  uStack_44 = 0x1000;
  iStack_40 = 0;
  iVar2 = FUN_ram_40021a9c();
  if ((((iVar2 != 0) && (DAT_ram_3006b810 == '\0')) && (iVar2 = FUN_ram_40021bbc(), iVar2 == 0)) &&
     (iVar2 = FUN_ram_40022310(&uStack_44,&iStack_40), iVar2 == 0)) {
    _DAT_ram_3006b80c = iStack_40;
    DAT_ram_3006b810 = '\x01';
  }
  return 0;
}


/* NanoCore 1.12, address 0x40022920.
 * REA evidence: ev_e02d22628a6b9438d5cbb7cef19efec90811a04d61d9a56d8891b1337c9c30ba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40022920(void)

{
  return DAT_ram_3006b7f8 != '\0';
}


/* NanoCore 1.12, address 0x4002292e.
 * REA evidence: ev_0fe385e23f1474f201214510beadfefdb1da787e26843e80ec1211106fd8dee3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002292e(int param_1)

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


/* NanoCore 1.12, address 0x40022972.
 * REA evidence: ev_56328e521f76cb7d00aa1f2eba889ca12e72ff07c7f518c68adb23749501e9d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40022972(void)

{
  return DAT_ram_3006b820 != '\0';
}


/* NanoCore 1.12, address 0x40022980.
 * REA evidence: ev_f1d70ae6c1cd2ba5e62c13a8688259ce1728f568377d19d616f8c8dee2d9ece9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40022980(int param_1)

{
  int iVar1;
  
  if ((bool)DAT_ram_3006b820 != (param_1 != 0)) {
    DAT_ram_3006b820 = param_1 != 0;
    iVar1 = FUN_ram_4002275e(5);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


/* NanoCore 1.12, address 0x400229b4.
 * REA evidence: ev_be60ac415bd678e728bb4706efe65355bdceb0a9fc8eeb3bd48ccae51be99427
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_400229b4(void)

{
  byte bVar1;
  
  bVar1 = DAT_ram_3006b7fa;
  if (0x10 < DAT_ram_3006b7fa) {
    bVar1 = 0x10;
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x400229c6.
 * REA evidence: ev_5a5fc6cf955ee17bae301289f3ed3d4b8d29ab58ef38a5e61b31b201400b88d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400229c6(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0x10;
  if (((int)param_1 < 0x11) && (uVar2 = param_1, (int)param_1 < 0)) {
    uVar2 = 0;
  }
  if ((uint)DAT_ram_3006b7fa != (uVar2 & 0xff)) {
    DAT_ram_3006b7fa = (byte)uVar2;
    iVar1 = FUN_ram_4002275e(0xf,(int)(char)DAT_ram_3006b7fa);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


/* NanoCore 1.12, address 0x40022a0e.
 * REA evidence: ev_36265d3cf47151b58e6577fbdef1c8ed13dd5b2ff0420ca961b2ad0ba4bd3f08
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40022a0e(void)

{
  return (int)DAT_ram_3006b7f0;
}


/* NanoCore 1.12, address 0x40022a18.
 * REA evidence: ev_629c0f8816b383e09f43fb358880976e9c7a313e23a1ee9670f0dfe369c766d2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40022a18(void)

{
  return _DAT_ram_3006b7f4;
}


/* NanoCore 1.12, address 0x40022a22.
 * REA evidence: ev_b4bfab044bfa4973d63f4b1a461b384866251587cf03c6fc0a3b720af29887a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40022a22(int param_1)

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


/* NanoCore 1.12, address 0x40022a8e.
 * REA evidence: ev_f8cf3c83b4623ff02e4214e94240fdae24de1e50b99229e75f12e70ad76557fd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40022a8e(void)

{
  return DAT_ram_3006b81d;
}


/* NanoCore 1.12, address 0x40022a98.
 * REA evidence: ev_e9d7f0833e2e689e48e31fe2e08d76b995c8cd78b93194c81a741a13e57dffbc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40022a98(void)

{
  return (int)_DAT_ram_3006b81e;
}


/* NanoCore 1.12, address 0x40022aa2.
 * REA evidence: ev_0479ff9f07db31c51a583028e6dad37c2901231b9ce3d30cf2d772057e1e2600
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40022aa2(uint param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar1 = 100;
  if (((int)param_1 < 0x65) && (uVar1 = param_1, (int)param_1 < 0)) {
    uVar1 = 0;
  }
  uVar2 = FUN_ram_40021b34(uVar1);
  iVar3 = 0;
  if ((uint)DAT_ram_3006b81d != (uVar1 & 0xff)) {
    DAT_ram_3006b81d = (byte)uVar1;
    _DAT_ram_3006b81e = uVar2;
    iVar3 = FUN_ram_4002275e(3,(int)(char)DAT_ram_3006b81d);
    iVar3 = -(uint)(iVar3 != 0);
  }
  return iVar3;
}


/* NanoCore 1.12, address 0x40022b04.
 * REA evidence: ev_15d16ff41211d67be9cd0a2da78b3faf48a057292fa6fb1ffc61c3178376033b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40022b04(void)

{
  return DAT_ram_3006b7ec;
}


/* NanoCore 1.12, address 0x40022b0e.
 * REA evidence: ev_4944de80b873d889dab30ecfd975bda3a01001e88c3a3510473d3f99a631ba5d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40022b0e(void)

{
  return (int)_DAT_ram_3006b7ee;
}


/* NanoCore 1.12, address 0x40022b18.
 * REA evidence: ev_2e62ed8a4f5bd2ba583bf02be4027527bc187ab71d07aab08a426d8d7411a9b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40022b18(uint param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar1 = 100;
  if (((int)param_1 < 0x65) && (uVar1 = param_1, (int)param_1 < 0)) {
    uVar1 = 0;
  }
  uVar2 = FUN_ram_40021b34(uVar1);
  iVar3 = 0;
  if ((uint)DAT_ram_3006b7ec != (uVar1 & 0xff)) {
    DAT_ram_3006b7ec = (byte)uVar1;
    _DAT_ram_3006b7ee = uVar2;
    iVar3 = FUN_ram_4002275e(4,(int)(char)DAT_ram_3006b7ec);
    iVar3 = -(uint)(iVar3 != 0);
  }
  return iVar3;
}


/* NanoCore 1.12, address 0x40022b7a.
 * REA evidence: ev_11b77aad951a2792c3de212b9260f7da0c9d20fb9fda74d99ea76e1e631cbc53
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40022b7a(void)

{
  return DAT_ram_3006b7f9;
}


/* NanoCore 1.12, address 0x40022b84.
 * REA evidence: ev_b6b81430a31bf857a666c44fa8c31cfff4f6cf672cb7af1d0ab2d712ae406f27
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40022b84(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 100;
  if (((int)param_1 < 0x65) && (uVar2 = param_1, (int)param_1 < 0)) {
    uVar2 = 0;
  }
  if ((uint)DAT_ram_3006b7f9 != (uVar2 & 0xff)) {
    DAT_ram_3006b7f9 = (byte)uVar2;
    iVar1 = FUN_ram_4002275e(0x10,(int)(char)DAT_ram_3006b7f9);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


/* NanoCore 1.12, address 0x40022bd0.
 * REA evidence: ev_1e564cc5132e0b073474be272754b7d790ddea8e71e0ae1a43fec514be34d1c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40022bd0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1 != (undefined4 *)0x0) && (uVar1 = 0xffffffff, DAT_ram_3006b81c != '\0')) {
    *param_1 = _DAT_ram_3006b818;
    param_1[1] = _DAT_ram_3006b814;
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40022bfa.
 * REA evidence: ev_75e7d015aae3ba80aba7f0dd250734f6dff7f7813c1a8a1a227b72a32c28cfb6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40022bfa(int *param_1)

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
  if (((DAT_ram_3006b81c == '\0') || (_DAT_ram_3006b818 != iVar2)) ||
     (uVar1 = 0, _DAT_ram_3006b814 != iVar3)) {
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
    iVar2 = FUN_ram_400226bc(&uStack_28,&uStack_1c,10);
    if (iVar2 == 0) {
      _DAT_ram_3006b818 = *param_1;
      _DAT_ram_3006b814 = param_1[1];
      DAT_ram_3006b81c = '\x01';
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40022cc4.
 * REA evidence: ev_95d98a255f41dfea918073bbaaf975c18cc56f988f35d4b54fc891e5680e8652
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40022cc4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_ram_3006b81c == '\0') {
    _DAT_ram_3006b818 = 0;
    _DAT_ram_3006b814 = 0;
    return 0;
  }
  iVar1 = FUN_ram_4002275e(0xe,0);
  if (iVar1 == 0) {
    DAT_ram_3006b81c = '\0';
    _DAT_ram_3006b818 = 0;
    _DAT_ram_3006b814 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40022ce2.
 * REA evidence: ev_5fcecadba91aec38f4f44331f610b4f28e465c74cba55142319bc4f7f43dd6ef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40022ce2(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4002275e(0xe,0);
  if (iVar1 == 0) {
    DAT_ram_3006b81c = 0;
    _DAT_ram_3006b818 = 0;
    _DAT_ram_3006b814 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40022d12.
 * REA evidence: ev_08d0cc479872f6befeefe1d4385fcf98f97a67ae90884ad5fc9068fdbd7e91ed
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40022d12(undefined4 *param_1,uint param_2,uint param_3,uint param_4)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  ulonglong uVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    uVar4 = (ulonglong)(uint)DAT_ram_4009672c;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    *(ulonglong *)(param_1 + 4) = uVar4;
    fVar1 = DAT_ram_4009672c;
    if (param_2 == 0) {
      param_2 = 0xac44;
    }
    fVar3 = DAT_ram_4009672c;
    if (param_3 != 0) {
      lVar2 = (ulonglong)param_2 * (ulonglong)param_3 + 999;
      FUN_ram_40003bf8((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),1000,0);
      fVar3 = (float)FUN_ram_400037b8();
      fVar3 = fVar1 / fVar3;
    }
    *(ulonglong *)(param_1 + 5) = (ulonglong)(uint)fVar3;
    if (param_4 != 0) {
      lVar2 = (ulonglong)param_2 * (ulonglong)param_4 + 999;
      FUN_ram_40003bf8((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),1000,0);
      fVar3 = (float)FUN_ram_400037b8();
      fVar1 = fVar1 / fVar3;
    }
    *(ulonglong *)(param_1 + 6) = (ulonglong)(uint)fVar1;
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40022db0.
 * REA evidence: ev_0ed9d0724c78fa87b9a4a0ff024716b74a16fc1c6d066a4fc53bfc719f4265f1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40022db0(int *param_1)

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


/* NanoCore 1.12, address 0x40022dc8.
 * REA evidence: ev_86abec34c6ff8272b6465332226d90b51b930f74a3ebc768db87921a901f59c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40022dc8(int *param_1,int param_2)

{
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (*param_1 == param_2)) {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x40022dd8.
 * REA evidence: ev_79db6622e4df55fa25472920e2c93cfa92f08356e75cf63b0f88153dc5ec5967
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40022dd8(int *param_1,int param_2)

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


/* NanoCore 1.12, address 0x40022df2.
 * REA evidence: ev_ba9a9ffc0f31f7c5cf9ef4ab4c68ddfd7c6c6815f4babc554af616084437b392
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40022df2(undefined4 *param_1)

{
  ulonglong uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = (ulonglong)DAT_ram_4009672c;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    *(ulonglong *)(param_1 + 4) = uVar1;
    param_1[2] = *param_1;
  }
  return;
}


/* NanoCore 1.12, address 0x40022e0c.
 * REA evidence: ev_9993ade5af6b1b3aa55bfe6a9b74430afe4d0b899cf04438bf320b09aa5e8163
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40022e0c(int param_1)

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


/* NanoCore 1.12, address 0x40022e30.
 * REA evidence: ev_c7c68f9b60ede5daeb66b007c3f355630098f46b8244614803b41fb68af465f2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40022e30(int *param_1,float *param_2,float *param_3,int param_4)

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
  
  fVar1 = DAT_ram_4009672c;
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
LAB_ram_40022eb2:
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
        if (param_3 != (float *)0x0) goto LAB_ram_40022efe;
      }
      else {
        *pfVar6 = *pfVar6 * fVar8;
        if ((param_3 != (float *)0x0) && (param_2 != param_3)) {
LAB_ram_40022efe:
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
  if (cVar5 != '\x02') goto LAB_ram_40022eb2;
  if (param_2 == (float *)0x0) {
    if (param_3 == (float *)0x0) goto LAB_ram_40022ea4;
  }
  else {
    pfVar3 = (float *)memset(param_2,0,param_4 << 2);
    if ((param_3 == (float *)0x0) || (pfVar3 == param_3)) goto LAB_ram_40022ea4;
  }
  memset(param_3,0,param_4 << 2);
LAB_ram_40022ea4:
  if (param_1[1] == iVar7) {
    return 0;
  }
  param_1[1] = iVar7;
  return 1;
}


/* NanoCore 1.12, address 0x40022f62.
 * REA evidence: ev_8c1a4360f45de89c3282420168e4ad7b6d5bdd0854d1ee5bb11d9f35839d0184
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40022f62(int param_1,uint param_2,undefined4 *param_3)

{
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 8;
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    if (8 < param_2) {
      param_2 = 8;
    }
    FUN_ram_4000303c(param_1,&DAT_ram_3004ad78,param_2);
    return 0;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40022f92.
 * REA evidence: ev_4e012813887dfb503831a3e7e8f1cffadbba3b14da3db6d593aaff8a91cf2874
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40022f92(int param_1,uint param_2)

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
      DAT_ram_3004ad78 = local_8;
      DAT_ram_3004ad7c = uStack_4;
      return 0;
    }
    bVar2 = (&DAT_ram_4009a570)[iVar3];
    if (acStack_10[bVar2] == '\0') {
      *(byte *)((int)&local_8 + uVar4) = bVar2;
      acStack_10[bVar2] = '\x01';
      uVar4 = uVar4 + 1 & 0xff;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  DAT_ram_3004ad78 = local_8;
  DAT_ram_3004ad7c = uStack_4;
  return 0;
}


