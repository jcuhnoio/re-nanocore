/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40046000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4004656a.
 * REA evidence: ev_217351fd717212adbef33c33e210106b0454f2f2631d597c56f748371e282d8d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004656a(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [24];
  
  FUN_ram_40045ebe(param_1,auStack_30,auStack_20);
  iVar1 = FUN_ram_4004944a(auStack_30);
  if ((iVar1 != 0) || (iVar1 = FUN_ram_4004944a(auStack_20), iVar1 != 0)) {
    iVar1 = FUN_ram_4004944a(auStack_30);
    if (iVar1 != 0) {
      FUN_ram_4004450e(param_1,auStack_30);
    }
    iVar1 = FUN_ram_4004944a(auStack_20);
    if (iVar1 != 0) {
      FUN_ram_4004450e(param_1,auStack_20);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x400465b2.
 * REA evidence: ev_4054bd27e61a6fb43aef2cdd2a1972e110c78eae02f6a3fdd1a8229532bd75ad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400465b2(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_400455c8();
  if (iVar1 == 0) {
    iVar2 = FUN_ram_400455e8(param_1);
    iVar1 = FUN_ram_400455fc(param_1);
    if ((iVar1 < 0) && (0 < iVar2)) {
      iVar1 = -iVar1;
      if (iVar2 <= iVar1) {
        iVar1 = iVar2;
      }
      FUN_ram_40045918(param_1,0,iVar1,param_2);
    }
  }
  iVar1 = FUN_ram_400455b8(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_400456b4(param_1);
    iVar2 = FUN_ram_400457a4(param_1);
    iVar3 = FUN_ram_4004541e(param_1,0);
    if (iVar3 == 1) {
      if ((iVar1 < 0) && (iVar3 = iVar1, 0 < iVar2)) goto LAB_ram_4004662a;
    }
    else if ((iVar2 < 0) && (0 < iVar1)) {
      iVar3 = -iVar2;
      if (iVar1 <= iVar3) {
        iVar3 = iVar1;
      }
LAB_ram_4004662a:
      FUN_ram_40045918(param_1,iVar3,0,param_2);
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4004665a.
 * REA evidence: ev_42f078129f74cb0cba28407071b439a2ede37599a5ddf4b863722220bbbb0b9d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004665a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = FUN_ram_40047b2c();
  for (iVar1 = 0; iVar1 != iVar3; iVar1 = iVar1 + 1) {
    uVar2 = *(undefined4 *)(**(int **)(param_1 + 8) + iVar1 * 4);
    FUN_ram_40044572(uVar2);
    FUN_ram_40043bde(uVar2,0x2d,0);
    FUN_ram_40044572(uVar2);
    FUN_ram_4004665a(uVar2);
  }
  return;
}


/* NanoCore 1.10, address 0x400466ac.
 * REA evidence: ev_0681b27311a3467a13df1928bdb699a1fe35981d19ce1cfd4fe8f87641ab5b6a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400466ac(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar1 = (uint)*(byte *)(param_1 + 2);
  param_1 = (undefined4 *)*param_1;
  if (uVar1 == 0xff) {
    do {
      puVar4 = param_1;
      if ((byte *)*puVar4 == (byte *)0x0) {
        return 0;
      }
      param_1 = puVar4 + 2;
    } while (*(byte *)*puVar4 != param_2);
    uVar3 = puVar4[1];
  }
  else {
    uVar2 = 0;
    while( true ) {
      if (uVar1 <= uVar2) {
        return 0;
      }
      if (*(byte *)((int)param_1 + uVar2 + uVar1 * 4) == param_2) break;
      uVar2 = uVar2 + 1;
    }
    uVar3 = param_1[uVar2];
  }
  *param_3 = uVar3;
  return 1;
}


/* NanoCore 1.10, address 0x400466f2.
 * REA evidence: ev_f63fd2d528cbdd53b08e4419ea317338f91622823845a35f2fe7edcaf36b001d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_400466f2(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = param_3 >> 2;
  if (0x1f < uVar5) {
    uVar5 = 0x1f;
  }
  uVar1 = *(ushort *)(param_1 + 0x2a);
  uVar6 = 1 << (uVar5 & 0x1f);
  uVar5 = 0;
  do {
    if ((*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14 <= uVar5) {
      uVar2 = 0xffffffff;
LAB_ram_40046750:
      return uVar2 != 0xffffffff;
    }
    uVar2 = *(uint *)(*(int *)(param_1 + 0xc) + uVar5 * 8 + 4);
    if ((uVar2 & 0x2000000) == 0) {
      uVar2 = 0xffffffff;
      for (; uVar5 < (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14; uVar5 = uVar5 + 1) {
        iVar3 = *(int *)(*(int *)(param_1 + 0xc) + uVar5 * 8);
        if ((uVar6 & *(uint *)(iVar3 + 4)) != 0) {
          uVar4 = *(uint *)(*(int *)(param_1 + 0xc) + uVar5 * 8 + 4);
          if (((((param_2 & 0xff0000) == (uVar4 & 0xff0000)) &&
               (uVar7 = uVar4 & 0xffff, (uVar4 & 0xffffff & ~(param_2 & 0xffff) & 0xffff) == 0)) &&
              ((int)uVar2 < (int)uVar7)) &&
             ((iVar3 = FUN_ram_400466ac(iVar3,param_3,param_4), iVar3 == 1 &&
              (uVar2 = uVar7, (param_2 & 0xffff) == uVar7)))) {
            return true;
          }
        }
      }
      goto LAB_ram_40046750;
    }
    if ((((uVar1 & 8) == 0) && ((uVar2 & 0xff0000) == (param_2 & 0xff0000))) &&
       ((iVar3 = *(int *)(*(int *)(param_1 + 0xc) + uVar5 * 8), (uVar6 & *(uint *)(iVar3 + 4)) != 0
        && (iVar3 = FUN_ram_400466ac(iVar3,param_3,param_4), iVar3 == 1)))) {
      return true;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}


/* NanoCore 1.10, address 0x4004681a.
 * REA evidence: ev_1c66a1e3ebcac76be81f64ddb1820347901c3a17afb0b05449bff79fbc8731f6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004681a(int *param_1,uint param_2,uint param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_ram_400466f2();
  if (iVar2 == 1) {
    return 1;
  }
  if (param_3 < 0x8d) {
    bVar1 = (&DAT_ram_4009781c)[param_3];
  }
  else {
    if (_DAT_ram_3007f910 == 0) {
      return 0;
    }
    bVar1 = *(byte *)(_DAT_ram_3007f910 + param_3 + -0x8d);
  }
  if ((bVar1 & 1) == 0) {
    if (((param_2 & 0xff0000) == 0) && ((param_3 - 1 & 0xff) < 2)) {
      for (param_1 = (int *)*param_1; param_1 != (int *)0x0; param_1 = (int *)*param_1) {
        if (param_3 == 1) {
          if (param_1[6] != 0) {
            *param_4 = param_1[6];
            return 1;
          }
        }
        else if (param_1[7] != 0) {
          *param_4 = param_1[7];
          return 1;
        }
      }
    }
  }
  else {
    if ((param_2 & 0xff0000) == 0) {
      param_1 = (int *)param_1[1];
    }
    for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
      iVar2 = FUN_ram_400466f2(param_1,(short)param_1[10],param_3,param_4);
      if (iVar2 == 1) {
        return 1;
      }
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x400468d0.
 * REA evidence: ev_2e8734855e18370f6e41ad8aa34ece9ef7683e153249799216fa6ac584aed922
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400468d0(int param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)FUN_ram_4004a5ac(0x3007f8f8);
  while ((piVar1 = piVar3, piVar1 != (int *)0x0 && (piVar1 != param_4))) {
    piVar3 = (int *)FUN_ram_4004a5ba(0x3007f8f8,piVar1);
    if (((*piVar1 == param_1) && ((piVar1[2] == param_2 || (param_2 == 0xf0000)))) &&
       ((*(byte *)(piVar1 + 1) == param_3 || (param_3 == 0xff)))) {
      for (uVar2 = 0; uVar2 < (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14; uVar2 = uVar2 + 1) {
        uVar4 = *(uint *)(*(int *)(param_1 + 0xc) + uVar2 * 8 + 4);
        if (((uVar4 & 0x2000000) != 0) && ((param_2 == 0xf0000 || (param_2 == (uVar4 & 0xffffff)))))
        {
          FUN_ram_4004ad0e(*(undefined4 *)(*(int *)(param_1 + 0xc) + uVar2 * 8),(char)piVar1[1]);
        }
      }
      FUN_ram_400492c8(piVar1,0);
      FUN_ram_4004a4e8(0x3007f8f8,piVar1);
      FUN_ram_40059be4(piVar1);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x400469b4.
 * REA evidence: ev_061936481014297eb9e2b53dceb3a8ce5cb8cff3daf7c146aa39db93d46cc584
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400469b4(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar5 = (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14;
  for (uVar4 = 0; uVar4 < uVar5; uVar4 = uVar4 + 1) {
    uVar3 = *(uint *)(iVar1 + uVar4 * 8 + 4);
    if (((uVar3 & 0x2000000) != 0) && ((uVar3 & 0xffffff) == param_2)) goto LAB_ram_400469d6;
  }
  if (uVar5 == uVar4) {
    uVar4 = uVar5 + 1 & 0x3f;
    *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfc0f | (ushort)(uVar4 << 4);
    iVar1 = FUN_ram_40059bf6(iVar1,uVar4 << 3);
    *(int *)(param_1 + 0xc) = iVar1;
    uVar4 = (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14;
    while (uVar4 = uVar4 - 1, uVar4 != 0) {
      *(undefined4 *)(iVar1 + uVar4 * 8) = *(undefined4 *)(iVar1 + -8 + uVar4 * 8);
      *(undefined4 *)(iVar1 + uVar4 * 8 + 4) = *(undefined4 *)(uVar4 * 8 + iVar1 + -8 + 4);
    }
    thunk_FUN_ram_4000505c(iVar1,0,8);
    puVar7 = *(undefined4 **)(param_1 + 0xc);
    uVar2 = FUN_ram_40059bae(0xc);
    puVar6 = *(undefined4 **)(param_1 + 0xc);
    *puVar7 = uVar2;
    FUN_ram_4004acdc(*puVar6);
    iVar1 = *(int *)(param_1 + 0xc);
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xff000000 | 0x2000000 | param_2 & 0xffffff;
  }
  else {
LAB_ram_400469d6:
    iVar1 = iVar1 + uVar4 * 8;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x40046a86.
 * REA evidence: ev_73672f93a0c0479f59c070e5cb9aaa5252df505eee1a43016e4c90bbffd818e2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40046a86(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  
  bVar1 = *(byte *)(param_1 + 2);
  puVar2 = (undefined4 *)*param_1;
  if (bVar1 == 0xff) {
    do {
      puVar6 = (undefined1 *)*puVar2;
      if (puVar6 == (undefined1 *)0x0) goto LAB_ram_40046ae2;
      puVar2 = puVar2 + 2;
      uVar3 = FUN_ram_4004af56(*puVar6);
    } while ((uVar3 & 0x20) == 0);
LAB_ram_40046ad0:
    uVar5 = 1;
  }
  else {
    for (uVar3 = 0; uVar3 < *(byte *)(param_1 + 2); uVar3 = uVar3 + 1) {
      uVar4 = FUN_ram_4004af56(*(undefined1 *)((int)puVar2 + uVar3 + (uint)bVar1 * 4));
      if ((uVar4 & 0x20) != 0) goto LAB_ram_40046ad0;
    }
LAB_ram_40046ae2:
    uVar5 = 0;
  }
  return uVar5;
}


/* NanoCore 1.10, address 0x40046ae6.
 * REA evidence: ev_cc6d3f85386686731299e222c0ae99dba890b9cf87e1b7dd11cc3b99021a5929
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40046ae6(void)

{
  FUN_ram_4004a3cc(0x3007f8f8,0x14);
  return;
}


/* NanoCore 1.10, address 0x40046af4.
 * REA evidence: ev_a90859603e0c52151830e9f5152d87b14b41689d7e30508cb554324a6b6c7f10
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40046af4(undefined1 param_1)

{
  DAT_ram_3007f904 = param_1;
  return;
}


/* NanoCore 1.10, address 0x40046afe.
 * REA evidence: ev_a86434b8a772641c1acd2b596fd9f522305723b49046daa9cf61449c4560e3a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40046afe(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = 0;
  iVar1 = FUN_ram_4004681a(param_1,param_2 | *(ushort *)(param_1 + 0x28),param_3,&uStack_18);
  if (iVar1 == 1) {
    uStack_14 = uStack_18;
  }
  else {
    uStack_14 = FUN_ram_4004aeb2(param_3);
  }
  return uStack_14;
}


/* NanoCore 1.10, address 0x40046b32.
 * REA evidence: ev_06352f540502f8c6ec034aaf74cbe26d2789d28861b7d7f6b822ce4e87887273
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40046b32(int *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  puVar2 = (undefined4 *)*param_1;
  uVar5 = puVar2[2];
  uVar3 = FUN_ram_40046afe(*puVar2,uVar5 & 0xff0000,*(undefined1 *)(puVar2 + 1));
  uVar1 = *(undefined1 *)(puVar2 + 1);
  puVar2[3] = uVar3;
  *(undefined1 *)(puVar2 + 1) = 0;
  FUN_ram_400468d0(*puVar2,uVar5 & 0xff0000,uVar1,puVar2);
  *(undefined1 *)(puVar2 + 1) = uVar1;
  puVar4 = (undefined4 *)FUN_ram_400469b4(*puVar2,puVar2[2]);
  FUN_ram_4004adb0(*puVar4,*(undefined1 *)(puVar2 + 1),puVar2[3]);
  return;
}


/* NanoCore 1.10, address 0x40046b86.
 * REA evidence: ev_06b9835103224197bd8ebb96c961a4c8963d3bddb1685bfab19cac984315bc18
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40046b86(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  while( true ) {
    if ((*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14 <= uVar3) {
      return 0;
    }
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc) + uVar3 * 8);
    uVar4 = puVar2[1];
    if (((uVar4 & 0x1000000) != 0) && ((uVar4 & 0xffffff) == param_4)) break;
    uVar3 = uVar3 + 1;
  }
  uVar1 = FUN_ram_4004ae6c(*puVar2);
  return uVar1;
}


/* NanoCore 1.10, address 0x40046bc0.
 * REA evidence: ev_078fc223e05f84f1c210e2272590b8338a8c83778b28d3305ce522022906b370
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40046c90) */
/* WARNING: Removing unreachable block (ram,0x40046c9e) */

void FUN_ram_40046bc0(int param_1,int param_2,undefined2 param_3,undefined2 param_4,ushort *param_5)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_80;
  uint uStack_7c;
  int *piStack_78;
  code *pcStack_74;
  code *pcStack_6c;
  code *pcStack_68;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  int iStack_44;
  byte bStack_2a;
  
  *(undefined2 *)(param_1 + 0x28) = param_3;
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 8;
  uVar2 = FUN_ram_40046afe(param_1,param_2,(char)param_5[4]);
  *(undefined2 *)(param_1 + 0x28) = param_4;
  uStack_7c = FUN_ram_40046afe(param_1,param_2,(char)param_5[4]);
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfff7;
  if ((uVar2 != uStack_7c) || ((uStack_7c & 0xffffff) != (uVar2 & 0xffffff))) {
    *(undefined2 *)(param_1 + 0x28) = param_3;
    local_80 = FUN_ram_40046afe(param_1,param_2,(char)param_5[4]);
    *(undefined2 *)(param_1 + 0x28) = param_4;
    puVar3 = (undefined4 *)FUN_ram_400469b4(param_1,param_2);
    FUN_ram_4004adb0(*puVar3,(char)param_5[4],local_80);
    if (((char)param_5[4] == '\f') && ((local_80 == 0x7fff || (uStack_7c == 0x7fff)))) {
      iVar4 = FUN_ram_400440f2(param_1);
      iVar4 = iVar4 / 2;
      iVar5 = FUN_ram_400440fe(param_1);
      iVar5 = iVar5 / 2;
      if (local_80 == 0x7fff) {
        local_80 = iVar5;
        if (iVar4 < iVar5) {
          local_80 = iVar4;
        }
        local_80 = local_80 + 1;
      }
      if (uStack_7c == 0x7fff) {
        if (iVar4 < iVar5) {
          iVar5 = iVar4;
        }
        uStack_7c = iVar5 + 1;
      }
    }
    piStack_78 = (int *)FUN_ram_4004a3dc(0x3007f8f8);
    if (piStack_78 != (int *)0x0) {
      *piStack_78 = param_1;
      piStack_78[3] = local_80;
      piStack_78[4] = uStack_7c;
      uVar1 = param_5[4];
      piStack_78[2] = param_2;
      *(char *)(piStack_78 + 1) = (char)uVar1;
      FUN_ram_400491e2(&piStack_78);
      pcStack_74 = FUN_ram_40047672;
      pcStack_6c = FUN_ram_40046b32;
      pcStack_68 = FUN_ram_40047470;
      uStack_50 = 0x80000000;
      uStack_4c = 0xff;
      uStack_48 = (uint)*param_5;
      uStack_54 = 0;
      iStack_44 = -(uint)param_5[1];
      uStack_58 = *(undefined4 *)(param_5 + 6);
      bStack_2a = bStack_2a & 0xfe;
      uStack_5c = *(undefined4 *)(param_5 + 8);
      FUN_ram_40049228(&piStack_78);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40046d60.
 * REA evidence: ev_85fa0b6c9b9194ec3ae584e0890aee597548e79314813204949f8924c27a0d32
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40046d60(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  int *piVar2;
  uint uStack_24;
  
  uStack_24 = param_3;
  if (param_1 != 0) {
    piVar2 = (int *)FUN_ram_40046afe(param_1,param_2,0x61);
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      cVar1 = FUN_ram_40046afe(param_1,param_2,0x62);
      if (cVar1 != '\0') {
        uStack_24 = (*(code *)*piVar2)(piVar2,param_3);
        uStack_24 = uStack_24 & 0xffffff;
      }
    }
  }
  return uStack_24;
}


/* NanoCore 1.10, address 0x40046dc2.
 * REA evidence: ev_1f9a393a89d1237e6ebe1e43a235fedf939e69726240768a24669a6932cebb8e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40046dc2(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_24 [4];
  
  uVar5 = 0;
  iVar2 = 0;
  do {
    if ((*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14 <= uVar5) {
      return iVar2;
    }
    uVar4 = *(uint *)(*(int *)(param_1 + 0xc) + uVar5 * 8 + 4);
    if (((uVar4 & 0x2000000) == 0) &&
       (uVar4 = uVar4 & 0xffff, ((~param_2 & uVar4) == 0) != ((~param_3 & uVar4) == 0))) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar5 * 8);
      iVar3 = FUN_ram_4004ae6c(uVar1,0x10,auStack_24);
      if (((((iVar3 != 0) ||
            (((((iVar3 = FUN_ram_4004ae6c(uVar1,0x11,auStack_24), iVar3 != 0 ||
                (iVar3 = FUN_ram_4004ae6c(uVar1,0x12,auStack_24), iVar3 != 0)) ||
               (iVar3 = FUN_ram_4004ae6c(uVar1,0x13,auStack_24), iVar3 != 0)) ||
              ((iVar3 = FUN_ram_4004ae6c(uVar1,0x15,auStack_24), iVar3 != 0 ||
               (iVar3 = FUN_ram_4004ae6c(uVar1,0x14,auStack_24), iVar3 != 0)))) ||
             (iVar3 = FUN_ram_4004ae6c(uVar1,0x16,auStack_24), iVar3 != 0)))) ||
           (((iVar3 = FUN_ram_4004ae6c(uVar1,0x6a,auStack_24), iVar3 != 0 ||
             (iVar3 = FUN_ram_4004ae6c(uVar1,0x6b,auStack_24), iVar3 != 0)) ||
            (iVar3 = FUN_ram_4004ae6c(uVar1,1,auStack_24), iVar3 != 0)))) ||
          (((iVar3 = FUN_ram_4004ae6c(uVar1,2,auStack_24), iVar3 != 0 ||
            (iVar3 = FUN_ram_4004ae6c(uVar1,4,auStack_24), iVar3 != 0)) ||
           (iVar3 = FUN_ram_4004ae6c(uVar1,5,auStack_24), iVar3 != 0)))) ||
         (((iVar3 = FUN_ram_4004ae6c(uVar1,6,auStack_24), iVar3 != 0 ||
           (iVar3 = FUN_ram_4004ae6c(uVar1,7,auStack_24), iVar3 != 0)) ||
          (iVar3 = FUN_ram_4004ae6c(uVar1,0x30,auStack_24), iVar3 != 0)))) {
        return 3;
      }
      iVar3 = FUN_ram_4004ae6c(uVar1,0x68,auStack_24);
      if ((((iVar3 == 0) && (iVar3 = FUN_ram_4004ae6c(uVar1,0x69,auStack_24), iVar3 == 0)) &&
          (((iVar3 = FUN_ram_4004ae6c(uVar1,0x6e,auStack_24), iVar3 == 0 &&
            (((iVar3 = FUN_ram_4004ae6c(uVar1,0x6c,auStack_24), iVar3 == 0 &&
              (iVar3 = FUN_ram_4004ae6c(uVar1,0x6d,auStack_24), iVar3 == 0)) &&
             (iVar3 = FUN_ram_4004ae6c(uVar1,0x3a,auStack_24), iVar3 == 0)))) &&
           ((((iVar3 = FUN_ram_4004ae6c(uVar1,0x3b,auStack_24), iVar3 == 0 &&
              (iVar3 = FUN_ram_4004ae6c(uVar1,0x38,auStack_24), iVar3 == 0)) &&
             (iVar3 = FUN_ram_4004ae6c(uVar1,0x3c,auStack_24), iVar3 == 0)) &&
            ((iVar3 = FUN_ram_4004ae6c(uVar1,0x3e,auStack_24), iVar3 == 0 &&
             (iVar3 = FUN_ram_4004ae6c(uVar1,0x40,auStack_24), iVar3 == 0)))))))) &&
         ((iVar3 = FUN_ram_4004ae6c(uVar1,0x41,auStack_24), iVar3 == 0 &&
          ((iVar3 = FUN_ram_4004ae6c(uVar1,0x42,auStack_24), iVar3 == 0 &&
           (iVar3 = FUN_ram_4004ae6c(uVar1,0x48,auStack_24), iVar3 == 0)))))) {
        if (iVar2 == 0) {
          iVar2 = 1;
        }
      }
      else {
        iVar2 = 2;
      }
    }
    uVar5 = uVar5 + 1;
  } while( true );
}


/* NanoCore 1.10, address 0x40046fda.
 * REA evidence: ev_d553a1882346ce0139fe782d64854d6f70af7cfa654f4b1315bbe2623e7f076b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char FUN_ram_40046fda(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_ram_40046afe(param_1,param_2,0x5e);
  FUN_ram_40046afe(param_1,param_2,0x27);
  cVar2 = '\x01';
  if (cVar1 != '\0') {
    cVar2 = cVar1;
  }
  return cVar2;
}


