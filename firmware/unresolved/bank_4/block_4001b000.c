/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4001b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4001b054.
 * REA evidence: ev_ccceb6b237f6895bb69f6a3be16a237ba29146d4a2d52fbd2bff13f07041e8ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001b054(float param_1,undefined4 param_2)

{
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_4009281c < param_1) {
    param_1 = DAT_ram_4009281c;
  }
  FUN_ram_400055ea(param_2,0x18,&DAT_ram_40093380,
                   (int)(param_1 * DAT_ram_4009286c + DAT_ram_40092864));
  return;
}


/* NanoCore 1.10, address 0x4001b09c.
 * REA evidence: ev_1bc257ca03aece376d25dd3c67c1bfd8c81fb2019a8f50a249bdc1a1154b02a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001b09c(undefined4 param_1,undefined4 param_2,char *param_3)

{
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    FUN_ram_400055ea(param_1,0x18,&DAT_ram_40093384,param_2,param_3);
    return;
  }
  FUN_ram_400055ea(param_1,0x18,&DAT_ram_400937d8,param_2,param_3);
  return;
}


/* NanoCore 1.10, address 0x4001b0c8.
 * REA evidence: ev_2c0e78594625d6c1fab6306424313f695dd58f40bf0acec241506aad1e86b61a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001b0c8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_20 [20];
  
  FUN_ram_400055ea(auStack_20,0x10,&DAT_ram_4009338c,param_2);
  FUN_ram_4001b09c(param_1,auStack_20,param_3);
  return;
}


/* NanoCore 1.10, address 0x4001b0fa.
 * REA evidence: ev_d9077c727e6e58e3685d895eaf499efd59c10a954c4aec7cc45e3fa20109a7a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001b124) */
/* WARNING: Removing unreachable block (ram,0x4001b132) */

void FUN_ram_4001b0fa(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined1 auStack_24 [24];
  
  pcVar2 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
  if ((int)param_2 < 0) {
    pcVar2 = s_PRE___ram_40095130 + 4;
  }
  iVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  FUN_ram_400055ea(auStack_24,0x14,s__s_ld__ld_ram_40093390,pcVar2,iVar1 / 10,iVar1 % 10);
  FUN_ram_4001b09c(param_1,auStack_24,param_3);
  return;
}


/* NanoCore 1.10, address 0x4001b150.
 * REA evidence: ev_db5be5d8ba10d42e16caeacdb1552ac8c3be73d85547189637d2513e5cb536fd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001b17c) */
/* WARNING: Removing unreachable block (ram,0x4001b18a) */

void FUN_ram_4001b150(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined1 auStack_24 [24];
  
  pcVar2 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
  if ((int)param_2 < 0) {
    pcVar2 = s_PRE___ram_40095130 + 4;
  }
  iVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  FUN_ram_400055ea(auStack_24,0x14,s__s_ld__02ld_ram_4009339c,pcVar2,iVar1 / 100,iVar1 % 100);
  FUN_ram_4001b09c(param_1,auStack_24,param_3);
  return;
}


/* NanoCore 1.10, address 0x4001b1a8.
 * REA evidence: ev_3dc0efc7506e970ef8e0d476618ae1f062038de0a09e448670e5348088830f5e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001b29a) */
/* WARNING: Removing unreachable block (ram,0x4001b27a) */
/* WARNING: Removing unreachable block (ram,0x4001b288) */
/* WARNING: Removing unreachable block (ram,0x4001b1fe) */
/* WARNING: Removing unreachable block (ram,0x4001b2a8) */
/* WARNING: Removing unreachable block (ram,0x4001b20c) */

void FUN_ram_4001b1a8(float param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined1 auStack_30 [24];
  
  uVar1 = FUN_ram_40019e8e();
  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  pcVar5 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
  if ((int)uVar1 < 0) {
    pcVar5 = s_PRE___ram_40095130 + 4;
  }
  if (param_1 < DAT_ram_40093094) {
    if (DAT_ram_4009286c <= param_1) {
      iVar6 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
      pcVar4 = s__s_ld_ram_400933bc;
      goto LAB_ram_4001b23c;
    }
    if (param_1 < DAT_ram_400930a4) {
      iVar6 = FUN_ram_40019e8e(param_1 * DAT_ram_4009286c);
      iVar2 = iVar6 % 100;
      pcVar4 = s__s_ld__02ld_ram_4009339c;
      iVar6 = iVar6 / 100;
    }
    else {
      iVar6 = FUN_ram_40019e8e(param_1 * DAT_ram_400930a4);
      iVar2 = iVar6 % 10;
      pcVar4 = s__s_ld__ld_ram_40093390;
      iVar6 = iVar6 / 10;
    }
  }
  else {
    iVar2 = FUN_ram_40019e8e(param_1 / DAT_ram_4009286c);
    iVar6 = iVar2 / 10;
    pcVar4 = &DAT_ram_400933a8;
    iVar2 = iVar2 % 10;
    if (iVar2 == 0) {
LAB_ram_4001b23c:
      FUN_ram_400055ea(auStack_30,0x10,pcVar4,pcVar5,iVar6);
      goto LAB_ram_4001b244;
    }
    pcVar4 = &DAT_ram_400933b0;
  }
  FUN_ram_400055ea(auStack_30,0x10,pcVar4,pcVar5,iVar6,iVar2);
LAB_ram_4001b244:
  uVar3 = FUN_ram_4002c7dc(0x6d);
  FUN_ram_4001b09c(param_2,auStack_30,uVar3);
  return;
}


/* NanoCore 1.10, address 0x4001b2ae.
 * REA evidence: ev_9d8e4ba97d3490ef829932874dcb870588cc2b6bbcc93cf3ee927f9baac8a4d2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001b2ae(undefined4 param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uStack_10;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = FUN_ram_40024ec6();
  if (iVar1 != 0xff) {
    FUN_ram_400233ba(CONCAT44(uStack_10,param_1),iVar1,param_3);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001b2e0.
 * REA evidence: ev_83d410b15726febae123ca3ff417d860d1ee99a6e414f61816becb9341b223a2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001b2e0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  void *__dest;
  undefined1 auStack_54 [16];
  ushort uStack_44;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [20];
  
  FUN_ram_4001a266();
  DAT_ram_3006941c = 0;
  DAT_ram_300466fc = 0xffffffff;
  DAT_ram_30046704 = 0xffffffff;
  FUN_ram_4000505c(0x30069684,0,0x26);
  FUN_ram_4000505c(0x30069420,0,0x260);
  FUN_ram_40088f60(auStack_54);
  __dest = (void *)0x30069420;
  uVar1 = 0;
  do {
    iVar2 = FUN_ram_4008e8b0(uVar1 & 0xff,auStack_40);
    if ((iVar2 != 0) && (iVar2 = FUN_ram_4001a520(auStack_40,0x3000), iVar2 != 0)) {
      *(undefined1 *)(uVar1 + 0x30069684) = 1;
      memcpy(__dest,auStack_34,0x10);
      *(undefined1 *)((int)__dest + 0xf) = 0;
    }
    uVar1 = uVar1 + 1;
    __dest = (void *)((int)__dest + 0x10);
  } while (uVar1 != 0x1e);
  uVar1 = (uint)uStack_44;
  if ((0x1d < uVar1) || (*(char *)(uVar1 + 0x30069684) == '\0')) {
    uVar3 = 0;
    do {
      uVar1 = uVar3;
      if (*(char *)(uVar3 + 0x30069684) != '\0') break;
      uVar3 = uVar3 + 1;
      uVar1 = DAT_ram_300466fc;
    } while (uVar3 != 0x1e);
  }
  DAT_ram_300466fc = uVar1;
  DAT_ram_30046704 = DAT_ram_300466fc;
  DAT_ram_3006941c = 1;
  _DAT_ram_30069680 = FUN_ram_4008e8a2();
  return;
}


/* NanoCore 1.10, address 0x4001b3e2.
 * REA evidence: ev_da5988c6a3124c821bc142c1306b945fc3b6bb649510f208ba32d91915d08c46
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001b3e2(uint param_1)

{
  int iVar1;
  
  if (param_1 < 8) {
    if (param_1 == 4) {
      param_1 = 2;
    }
  }
  else {
    param_1 = 6;
  }
  iVar1 = 0;
  do {
    if ((byte)(&DAT_ram_400935cc)[iVar1] == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 7);
  return 0;
}


/* NanoCore 1.10, address 0x4001b414.
 * REA evidence: ev_2c435b4c7dd9a626034d8416c8788ff342dd4cd25c36a37ee416a2cff77f2927
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4001b414(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_ram_30069748;
  if (param_1 == 0) goto LAB_ram_4001b424;
  if (DAT_ram_30069a2c == '\0') {
    if (param_1 == -1) {
LAB_ram_4001b448:
      iVar2 = _DAT_ram_30069a04;
      if ((_DAT_ram_30069a28 != 0) &&
         (iVar1 = FUN_ram_40042c20(_DAT_ram_30069a28,1), iVar2 = _DAT_ram_30069a04, iVar1 == 0)) {
        iVar2 = _DAT_ram_30069a28;
      }
      goto LAB_ram_4001b424;
    }
    iVar1 = 1;
  }
  else {
    if (param_1 == 1) goto LAB_ram_4001b448;
    iVar1 = 2;
  }
  iVar2 = _DAT_ram_30069744;
  if (param_1 != iVar1) {
    iVar2 = FUN_ram_4001a18a();
    if ((uint)DAT_ram_30069a34 <= (uint)(param_1 - iVar2)) {
      return 0;
    }
    iVar2 = *(int *)(&DAT_ram_30069938 + (param_1 - iVar2) * 4);
  }
LAB_ram_4001b424:
  if ((iVar2 != 0) && (iVar1 = FUN_ram_40042c20(iVar2,1), iVar1 == 0)) {
    return iVar2;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4001b4ac.
 * REA evidence: ev_b0888739c17e3daa8e167f095dc6aa2378af989c38917d0ca69170973333ebbf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001b4ac(void)

{
  int iVar1;
  undefined3 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (DAT_ram_300696aa == '\0') {
    return;
  }
  iVar3 = FUN_ram_4001a18a();
  iVar1 = _DAT_ram_30069a00;
  uVar5 = (uint)DAT_ram_30069a34;
  iVar7 = 0;
  do {
    bVar6 = iVar7 < (int)uVar5 && iVar7 + iVar3 == iVar1;
    if ((bool)*(char *)(iVar7 + 0x3006987c) != bVar6) {
      *(bool *)(iVar7 + 0x3006987c) = bVar6;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 5);
  if (DAT_ram_300699fc == '\0') {
    iVar3 = FUN_ram_4001a150();
    if (iVar3 == 0) {
      FUN_ram_4001b414(iVar1);
      FUN_ram_400175d2();
      uVar2 = FUN_ram_40016538(DAT_ram_300696f4);
      FUN_ram_4001775e(uVar2);
    }
    else {
      FUN_ram_400175d2(0);
    }
  }
  iVar1 = _DAT_ram_30069a04;
  uVar5 = 0;
  if (DAT_ram_300696f4 != '\0') {
    uVar5 = (uint)(_DAT_ram_300696f8 == 100);
  }
  if ((int)DAT_ram_30046708 != uVar5) {
    DAT_ram_30046708 = (char)uVar5;
    if (_DAT_ram_30069a04 != 0) {
      if ((DAT_ram_300696f4 == '\0') || (_DAT_ram_300696f8 != 100)) {
        uVar2 = FUN_ram_400164ec();
      }
      else {
        uVar2 = 0xff0000;
      }
      FUN_ram_40047a44(iVar1,uVar2,0);
    }
    iVar1 = 0;
    do {
      iVar3 = *(int *)(&DAT_ram_30069814 + iVar1 * 4);
      if (iVar3 != 0) {
        uVar4 = FUN_ram_400164ec();
        uStack_2c = CONCAT22(CONCAT11(uStack_2c._3_1_,(char)((uint)uVar4 >> 0x10)),(short)uVar4);
        FUN_ram_40047a44(iVar3,uStack_2c,0);
        iVar3 = *(int *)(&DAT_ram_30069924 + iVar1 * 4);
        if (iVar3 != 0) {
          uVar4 = FUN_ram_400164ec();
          uStack_30 = CONCAT22(CONCAT11(uStack_30._3_1_,(char)((uint)uVar4 >> 0x10)),(short)uVar4);
          FUN_ram_40047a44(iVar3,uStack_30,0);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 5);
  }
  return;
}


/* NanoCore 1.10, address 0x4001b64a.
 * REA evidence: ev_c84584623a3160cf79db566480de76fc79c7a215157504f174a76cb764f921a1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001b64a(char *param_1)

{
  char *pcVar1;
  undefined1 auStack_5c [88];
  
  pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  FUN_ram_4002c918(auStack_5c,0x49,pcVar1,0x12);
  FUN_ram_40017026(_DAT_ram_30069a04,&DAT_ram_30069a08,auStack_5c);
  FUN_ram_4001a8c2();
  DAT_ram_30046708 = 0xff;
  FUN_ram_4001b4ac();
  return;
}


/* NanoCore 1.10, address 0x4001b694.
 * REA evidence: ev_39f0c722e9d026bd8ff44e7bffd6ddc502795d98fc6cc2023e14ebd6ac9235ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001b694(int param_1,int param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  undefined1 auStack_6c [88];
  
  pcVar1 = (char *)FUN_ram_4002c7dc(0x73);
  if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
    param_4 = (char *)FUN_ram_4002c7dc(0x5e);
  }
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    param_4 = param_3;
  }
  if (param_2 < 1) {
    param_2 = 1;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (param_2 <= param_1) {
    param_1 = param_2 + -1;
  }
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    pcVar1 = s__d__d__s_ram_400933c4;
  }
  FUN_ram_400055ea(auStack_6c,0x49,pcVar1,param_1 + 1,param_2,param_4);
  FUN_ram_4001b64a(auStack_6c);
  return;
}


/* NanoCore 1.10, address 0x4001b722.
 * REA evidence: ev_86e9c1a777e3f75e7915a964cc917429718ba4ac9b52f2b3c063982a1580d710
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001b722(uint param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  
  if (param_2 <= param_1) {
    if (param_5 == 0) {
      param_5 = FUN_ram_4002c7dc(0x5e);
    }
    FUN_ram_4001b64a(param_5);
    return;
  }
  uVar1 = FUN_ram_4002c7dc(0x5e);
  FUN_ram_4001b694(param_1,param_3,param_1 * 0x10 + param_4,uVar1);
  return;
}


/* NanoCore 1.10, address 0x4001b76e.
 * REA evidence: ev_8aefaa614facc91c4f8f27aba1765050f7f0f46ef2290524b39e31861fdef69a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001b76e(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (param_1 == 0) {
LAB_ram_4001b97a:
    if (DAT_ram_3006941c == '\0') {
      FUN_ram_4001b2e0();
    }
    uVar2 = DAT_ram_300466fc;
    if (((DAT_ram_300696f4 != '\0') && (_DAT_ram_300696f8 == 100)) && (-1 < (int)DAT_ram_30046704))
    {
      uVar2 = DAT_ram_30046704;
    }
    uVar5 = FUN_ram_4002c7dc(0x5f);
    uVar9 = 0x30069420;
LAB_ram_4001b9ca:
    uVar8 = 0x1e;
    uVar4 = 0x1e;
LAB_ram_4001b84e:
    FUN_ram_4001b722(uVar2,uVar4,uVar8,uVar9,uVar5);
    return;
  }
  iVar1 = FUN_ram_40005208(param_1,&DAT_ram_4009322c,0x10);
  if (iVar1 == 0) {
    uVar2 = FUN_ram_4001a2a4(param_1);
    if (uVar2 < 0xc) {
      if (uVar2 == 8) {
        pcVar3 = (char *)FUN_ram_4002c7dc(0x61);
        uVar4 = FUN_ram_4002c7dc(0x5e);
        uVar8 = 0xc;
        uVar2 = 8;
        goto LAB_ram_4001b7bc;
      }
      if (uVar2 == 9) {
        pcVar3 = (char *)FUN_ram_4002c7dc(0x56);
        uVar4 = FUN_ram_4002c7dc(0x5e);
        uVar8 = 0xc;
        uVar2 = 9;
        goto LAB_ram_4001b7bc;
      }
      if (uVar2 == 10) {
        pcVar3 = (char *)FUN_ram_4002c7dc(0x5b);
        uVar4 = FUN_ram_4002c7dc(0x5e);
        uVar8 = 0xc;
        uVar2 = 10;
        goto LAB_ram_4001b7bc;
      }
      if (uVar2 == 0xb) {
        uVar4 = FUN_ram_4002c7dc(0x5e);
        pcVar3 = s_MOTION_WAH_ram_400933d0;
        uVar8 = 0xc;
        uVar2 = 0xb;
        goto LAB_ram_4001b7bc;
      }
    }
    else {
      uVar2 = 0;
    }
    if (DAT_ram_30069a3c == '\0') {
      FUN_ram_4001a576();
    }
    uVar5 = FUN_ram_4002c7dc(0x5f);
    uVar9 = 0x30069a40;
    uVar8 = 0xc;
    uVar4 = 8;
    goto LAB_ram_4001b84e;
  }
  iVar1 = FUN_ram_40005208(param_1,&DAT_ram_40093228,0x10);
  if (iVar1 == 0) {
    uVar2 = FUN_ram_4001a2a4(param_1);
    if (uVar2 < 4) {
      if (uVar2 == 2) {
        uVar8 = 0x78;
      }
      else if (uVar2 == 3) {
        uVar8 = 0x45;
      }
      else {
        if (uVar2 != 1) goto LAB_ram_4001b880;
        uVar8 = 0x21;
      }
      pcVar3 = (char *)FUN_ram_4002c7dc(uVar8);
    }
    else {
LAB_ram_4001b880:
      pcVar3 = (char *)FUN_ram_4002c7dc(0x20);
      uVar2 = 0;
    }
    uVar4 = FUN_ram_4002c7dc(0x5e);
    uVar8 = 4;
    goto LAB_ram_4001b7bc;
  }
  iVar1 = FUN_ram_40005208(param_1,&DAT_ram_4009323c,0x10);
  if (iVar1 != 0) {
    iVar1 = FUN_ram_40005208(param_1,s_delay_ram_40093234,0x10);
    if (iVar1 != 0) {
      iVar1 = FUN_ram_40005208(param_1,s_reverb_ram_40093240,0x10);
      if (iVar1 == 0) {
        uVar6 = FUN_ram_4001a2a4(param_1);
        if (uVar6 < 8) {
          if (uVar6 == 4) {
            uVar6 = 2;
          }
        }
        else {
          uVar6 = 6;
        }
        uVar2 = FUN_ram_4001b3e2(uVar6);
        switch(uVar6) {
        case 0:
          uVar8 = 0x62;
          break;
        case 1:
          uVar8 = 99;
          break;
        case 2:
          uVar8 = 100;
          break;
        case 3:
          uVar8 = 0x65;
          break;
        default:
          uVar8 = 0x68;
          break;
        case 5:
          uVar8 = 0x67;
          break;
        case 7:
          uVar8 = 0x66;
        }
        pcVar3 = (char *)FUN_ram_4002c7dc(uVar8);
        uVar4 = FUN_ram_4002c7dc(0x5e);
        uVar8 = 7;
        goto LAB_ram_4001b7bc;
      }
      iVar1 = FUN_ram_40005208(param_1,&DAT_ram_40093248,0x10);
      if (iVar1 == 0) {
        uVar6 = FUN_ram_4001a2a4(param_1);
        uVar2 = uVar6;
        if (2 < uVar6) {
          uVar2 = 2;
        }
        uVar2 = uVar2 & 0xff;
        if (uVar6 == 0) {
          uVar8 = 0x77;
        }
        else if (uVar6 == 1) {
          uVar8 = 0x76;
        }
        else {
          uVar8 = 0x75;
        }
        pcVar3 = (char *)FUN_ram_4002c7dc(uVar8);
        uVar4 = FUN_ram_4002c7dc(0x5e);
        uVar8 = 3;
        goto LAB_ram_4001b7bc;
      }
      iVar1 = FUN_ram_40005208(param_1,&DAT_ram_40093dc4,0x10);
      if (iVar1 == 0) goto LAB_ram_4001b97a;
      iVar1 = FUN_ram_40005208(param_1,&DAT_ram_40093230,0x10);
      if (iVar1 != 0) {
        FUN_ram_4002c860(param_1);
        FUN_ram_4001b64a();
        return;
      }
      if (DAT_ram_30069ba0 == '\0') {
        FUN_ram_4001a6e0();
      }
      uVar2 = DAT_ram_30046720;
      if (((DAT_ram_300696f4 != '\0') && (_DAT_ram_300696f8 == 100)) && (-1 < (int)DAT_ram_30046728)
         ) {
        uVar2 = DAT_ram_30046728;
      }
      uVar5 = FUN_ram_4002c7dc(0x60);
      uVar9 = 0x30069ba4;
      goto LAB_ram_4001b9ca;
    }
    uVar2 = FUN_ram_4001a2a4(param_1);
    if (uVar2 < 8) {
      switch(uVar2 - 1 & 0xff) {
      case 0:
        uVar8 = 0x1f;
        break;
      case 1:
        uVar8 = 0x4b;
        break;
      case 2:
        uVar8 = 0x4c;
        break;
      case 3:
        uVar8 = 0x4d;
        break;
      case 4:
        uVar8 = 0x4e;
        break;
      case 5:
        uVar8 = 0x4f;
        break;
      case 6:
        uVar8 = 0x50;
        break;
      default:
        goto switchD_ram_4001bb10_default;
      }
      pcVar3 = (char *)FUN_ram_4002c7dc(uVar8);
    }
    else {
switchD_ram_4001bb10_default:
      pcVar3 = (char *)FUN_ram_4002c7dc(0x1e);
      uVar2 = 0;
    }
    uVar4 = FUN_ram_4002c7dc(0x5e);
    uVar8 = 8;
    goto LAB_ram_4001b7bc;
  }
  iVar1 = FUN_ram_4001a2a4(param_1);
  iVar7 = FUN_ram_40024fe8(5,iVar1);
  if (iVar7 < 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_ram_40024fe8(5);
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  switch(iVar1 - 1U & 0xff) {
  case 0:
    uVar8 = 0x1c;
    break;
  case 1:
    uVar8 = 0x1d;
    break;
  case 2:
    uVar8 = 0x22;
    break;
  case 3:
    uVar8 = 0x23;
    break;
  default:
    uVar8 = 0x1b;
    break;
  case 9:
  case 10:
  case 0xb:
  case 0x10:
    pcVar3 = (char *)FUN_ram_4002502c(5,iVar1,2);
    goto LAB_ram_4001b896;
  }
  pcVar3 = (char *)FUN_ram_4002c7dc(uVar8);
LAB_ram_4001b896:
  uVar8 = FUN_ram_40024fb8(5);
  uVar4 = FUN_ram_4002c7dc(0x5e);
LAB_ram_4001b7bc:
  FUN_ram_4001b694(uVar2,uVar8,pcVar3,uVar4);
  return;
}


/* NanoCore 1.10, address 0x4001bba2.
 * REA evidence: ev_2cd7ac936902d811d6f93e75f70cfb60298ca93e9ee97aada0eaa6e34050d331
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001bba2(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0x1e) {
    if (DAT_ram_3006941c == '\0') {
      FUN_ram_4001b2e0();
    }
    iVar1 = FUN_ram_4000c5b6(param_1 & 0xff);
    if (iVar1 == 0) {
      DAT_ram_300466f8 = param_1;
      DAT_ram_300466fc = param_1;
      DAT_ram_30046704 = param_1;
      if (((param_2 != 0) && (_DAT_ram_300696fc != 0)) &&
         (iVar1 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_40093dc4,0x10), iVar1 == 0)) {
        FUN_ram_4001b76e(_DAT_ram_300696fc);
        return 0;
      }
      return 0;
    }
    FUN_ram_4001b2e0();
    DAT_ram_30046704 = DAT_ram_300466fc;
    if (((param_2 != 0) && (_DAT_ram_300696fc != 0)) &&
       (iVar1 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_40093dc4,0x10), iVar1 == 0)) {
      FUN_ram_4001b76e(_DAT_ram_300696fc);
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4001bc60.
 * REA evidence: ev_dde1cd543d33d3721dd1c5449c5f23a2f6a494f24eade80290a32a0ceccf8db1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001bc60(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0x1e) {
    if (DAT_ram_30069ba0 == '\0') {
      FUN_ram_4001a6e0();
    }
    iVar1 = FUN_ram_4000c5fc(param_1 & 0xff);
    if (iVar1 == 0) {
      DAT_ram_3004671c = param_1;
      DAT_ram_30046720 = param_1;
      DAT_ram_30046728 = param_1;
      if (((param_2 != 0) && (_DAT_ram_300696fc != 0)) &&
         (iVar1 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_40093230,0x10), iVar1 == 0)) {
        FUN_ram_4001b76e(_DAT_ram_300696fc);
        return 0;
      }
      return 0;
    }
    FUN_ram_4001a6e0();
    DAT_ram_30046728 = DAT_ram_30046720;
    if (((param_2 != 0) && (_DAT_ram_300696fc != 0)) &&
       (iVar1 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_40093230,0x10), iVar1 == 0)) {
      FUN_ram_4001b76e(_DAT_ram_300696fc);
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4001bd1e.
 * REA evidence: ev_e3a209fcec60cf966ed6e1758545df890ec4185dc4cf6c9257236b163eddcbb5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001bd1e(undefined4 param_1,int param_2,code *param_3,int *param_4,int *param_5,
                     undefined4 param_6,code *param_7)

{
  undefined4 uVar1;
  int iVar2;
  int aiStack_14 [2];
  
  if (param_2 == 0) {
    (*param_3)();
  }
  if (-1 < *param_4) {
    if (*param_5 < 0) {
      *param_5 = *param_4;
    }
    iVar2 = FUN_ram_40027bf2(*param_5,param_1,0x1e,param_6,aiStack_14);
    uVar1 = _DAT_ram_300696fc;
    if (iVar2 != 0) {
      *param_5 = aiStack_14[0];
      FUN_ram_4001b76e(uVar1);
      (*param_7)(*param_5);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4001bd76.
 * REA evidence: ev_fee9e4fe678c42b892dd33a675c564ae09ab2bfb3a6aeaf6efe66b95911a5d63
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001bd76(undefined4 param_1,char *param_2,code *param_3,int *param_4,int *param_5,
                     code *param_6,code *UNRECOVERED_JUMPTABLE)

{
  int iVar1;
  
  if ((_DAT_ram_300696fc != 0) &&
     (iVar1 = FUN_ram_40005208(_DAT_ram_300696fc,param_1,0x10), iVar1 == 0)) {
    if (*param_2 == '\0') {
      (*param_3)();
    }
    if ((*param_4 < 0) || (*param_5 < 0)) {
      FUN_ram_4001b76e(_DAT_ram_300696fc);
      return;
    }
    (*param_6)();
    if (*param_4 != *param_5) {
                    /* WARNING: Could not recover jumptable at 0x4001bdfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(*param_5,1);
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4001be72.
 * REA evidence: ev_cad85eca81a8df9f7714b0868280c8d153c7592f87de8535c7ca02791c79c124
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001be72(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  
  if (DAT_ram_300696aa == '\0') {
    return;
  }
  if (_DAT_ram_300696fc == 0) {
    return;
  }
  iVar3 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_40093dc4,0x10);
  if (iVar3 == 0) {
    iVar4 = FUN_ram_4008e8a2();
    pcVar8 = FUN_ram_4001b2e0;
    iVar7 = 0x30069684;
    uVar6 = 0x1e;
    puVar5 = &DAT_ram_30046704;
    iVar3 = _DAT_ram_30069680;
  }
  else {
    iVar3 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_4009322c,0x10);
    if (iVar3 == 0) {
      iVar4 = FUN_ram_4008e8a2();
      pcVar8 = FUN_ram_4001a576;
      iVar7 = 0x30069ac4;
      uVar6 = 8;
      puVar5 = &DAT_ram_30046718;
      iVar3 = _DAT_ram_30069ac0;
    }
    else {
      iVar3 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_40093230,0x10);
      if (iVar3 != 0) {
        return;
      }
      iVar4 = FUN_ram_4008e8a8();
      pcVar8 = FUN_ram_4001a6e0;
      iVar7 = 0x30069d88;
      uVar6 = 0x1e;
      puVar5 = &DAT_ram_30046728;
      iVar3 = _DAT_ram_30069d84;
    }
  }
  if (iVar4 == iVar3) {
    return;
  }
  uVar2 = *puVar5;
  bVar1 = false;
  if ((DAT_ram_300696f4 != '\0') && (_DAT_ram_300696f8 == 100)) {
    bVar1 = uVar2 < uVar6;
  }
  (*pcVar8)();
  if ((bVar1) && (*(char *)(iVar7 + uVar2) != '\0')) {
    *puVar5 = uVar2;
  }
  FUN_ram_4001b76e(_DAT_ram_300696fc);
  return;
}


/* NanoCore 1.10, address 0x4001bf4c.
 * REA evidence: ev_74f30ce9af6e0bf7844f35de01c5f9b192a089c51e224091f54a8bae956bbb92
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001bf4c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_4001a18a();
  if (DAT_ram_30069a34 == 0) {
    iVar1 = (DAT_ram_30069a2c != '\0') + 1;
  }
  else {
    iVar1 = (uint)DAT_ram_30069a34 + iVar1 + -1;
  }
  iVar2 = 0;
  if ((-1 < param_1) && (iVar2 = param_1, iVar1 <= param_1)) {
    iVar2 = iVar1;
  }
  if (_DAT_ram_30069a00 != iVar2) {
    _DAT_ram_30069a00 = iVar2;
    FUN_ram_4001b4ac();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001bfaa.
 * REA evidence: ev_089de798ff85688abee9e3d83d1d78fb8b07ff5a1ce2858c4429f57c1e05292d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001bfaa(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar10 = _DAT_ram_30069740;
  iVar2 = _DAT_ram_300699f8;
  if (_DAT_ram_300699f8 == 0) {
    iVar2 = _DAT_ram_30069740;
  }
  iVar3 = _DAT_ram_30069a30;
  if (_DAT_ram_30069a30 == 0) {
    iVar3 = _DAT_ram_30069740;
  }
  bVar1 = _DAT_ram_30069740 != 0;
  uVar4 = 0;
  if (_DAT_ram_30069740 != 0) {
    uVar4 = FUN_ram_4002c47c();
  }
  uVar5 = 0;
  if (iVar2 != 0) {
    uVar5 = FUN_ram_4002c48a();
  }
  uVar6 = 0;
  if (iVar3 != 0) {
    uVar6 = FUN_ram_4002c498();
  }
  FUN_ram_400171b6(_DAT_ram_30069a04,&DAT_ram_30069a08,bVar1);
  iVar12 = 0x30069774;
  iVar11 = 0x30069884;
  FUN_ram_400171b6(_DAT_ram_300699d0,0x300699d4,bVar1);
  iVar13 = 0;
  iVar9 = iVar12;
  iVar7 = iVar11;
  do {
    FUN_ram_400171b6(*(undefined4 *)(&DAT_ram_30069814 + iVar13 * 4),iVar9,iVar2 != 0);
    iVar8 = iVar13 * 4;
    iVar13 = iVar13 + 1;
    FUN_ram_400171b6(*(undefined4 *)(&DAT_ram_30069924 + iVar8),iVar7,iVar3 != 0);
    FUN_ram_400171ae(iVar9,uVar5 & 1);
    FUN_ram_400171ae(iVar7,uVar6 & 1);
    iVar9 = iVar9 + 0x20;
    iVar7 = iVar7 + 0x20;
  } while (iVar13 != 5);
  FUN_ram_400171ae(&DAT_ram_30069a08,uVar4 & 1);
  FUN_ram_400171ae(0x300699d4,uVar4 & 1);
  if (iVar10 != 0) {
    if (_DAT_ram_30069a04 != 0) {
      FUN_ram_40047a74(_DAT_ram_30069a04,iVar10,0);
      iVar9 = 0;
      do {
        if (*(int *)(&DAT_ram_30069a08 + iVar9 * 4) != 0) {
          FUN_ram_40047a74(*(int *)(&DAT_ram_30069a08 + iVar9 * 4),iVar10,0);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != 8);
      FUN_ram_4001a8c2();
    }
    if (_DAT_ram_300699d0 != 0) {
      FUN_ram_40047a74(_DAT_ram_300699d0,iVar10,0);
      iVar9 = 0;
      do {
        iVar7 = *(int *)(iVar9 * 4 + 0x300699d4);
        if (iVar7 != 0) {
          FUN_ram_40047a74(iVar7,iVar10,0);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != 8);
      FUN_ram_4001a434();
    }
  }
  iVar10 = 0;
  if (iVar2 != 0) {
    iVar10 = *(int *)(iVar2 + 0xc);
  }
  iVar9 = 0;
  if (iVar3 != 0) {
    iVar9 = *(int *)(iVar3 + 0xc);
  }
  iVar7 = 0;
  do {
    if ((iVar2 != 0) && (*(int *)(&DAT_ram_30069814 + iVar7 * 4) != 0)) {
      FUN_ram_40043ffe(*(int *)(&DAT_ram_30069814 + iVar7 * 4),iVar10 << 1);
      FUN_ram_40047a74(*(undefined4 *)(&DAT_ram_30069814 + iVar7 * 4),iVar2,0);
      iVar13 = 0;
      do {
        iVar8 = *(int *)(iVar12 + iVar13 * 4);
        if (iVar8 != 0) {
          FUN_ram_40047a74(iVar8,iVar2,0);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 != 8);
    }
    if ((iVar3 != 0) && (*(int *)(&DAT_ram_30069924 + iVar7 * 4) != 0)) {
      FUN_ram_40043ffe(*(int *)(&DAT_ram_30069924 + iVar7 * 4),iVar9 << 1);
      FUN_ram_40047a74(*(undefined4 *)(&DAT_ram_30069924 + iVar7 * 4),iVar3,0);
      iVar13 = 0;
      do {
        iVar8 = *(int *)(iVar11 + iVar13 * 4);
        if (iVar8 != 0) {
          FUN_ram_40047a74(iVar8,iVar3,0);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 != 8);
    }
    iVar7 = iVar7 + 1;
    iVar11 = iVar11 + 0x20;
    iVar12 = iVar12 + 0x20;
  } while (iVar7 != 5);
  FUN_ram_4001a80c();
  if (DAT_ram_300696aa != '\0') {
    FUN_ram_4001b4ac();
    return;
  }
  FUN_ram_4001ae34(0);
  FUN_ram_4001ae34(1);
  FUN_ram_4001ae34(2);
  FUN_ram_4001ae34(3);
  FUN_ram_4001ae34(4);
  return;
}


