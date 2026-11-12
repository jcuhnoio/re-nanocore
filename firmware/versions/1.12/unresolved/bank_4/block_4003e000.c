/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4003e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4003e03e.
 * REA evidence: ev_41e5ddf092ed78398cd9ec5f79698541b2b9fda72d708142a8d22f1469ef98f2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003e03e(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40038bfe(0x1f);
  if ((iVar1 < 0) || (iVar1 = FUN_ram_40038ba4(0x1f), iVar1 < 0)) {
    uVar2 = 0xfffffff2;
  }
  else {
    fence();
    _DAT_ram_18100004 = 0x3f;
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4003e072.
 * REA evidence: ev_9ed749fcd2c814793c901a40129d28e13310d7992297073cace451190a4fafbb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003e072(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (_DAT_ram_3007faf8 == 0) {
    fence();
    _DAT_ram_18100000 = _DAT_ram_18100000 & 0xffffcfff;
    if (param_1 == '\0') {
      fence();
      _DAT_ram_18100000 = _DAT_ram_18100000 | 0x1000;
    }
    else {
      fence();
    }
  }
  else {
    fence();
    fence();
    _DAT_ram_18100000 = _DAT_ram_18100000 & 0xffffcfff;
  }
  fence();
  _DAT_ram_18100014 = param_2;
  fence();
  _DAT_ram_1810001c = param_3;
  fence();
  _DAT_ram_18100020 = param_4;
  fence();
  _DAT_ram_18100018 = 0;
  return;
}


/* NanoCore 1.12, address 0x4003e0ea.
 * REA evidence: ev_d97e8a6975a2ec9574cd9ac27f11c5eea7703f1f9123c101fa2d2f08c4bd2860
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003e0ea(void)

{
  fence();
  _DAT_ram_18100008 = 0x3f;
  fence();
  fence();
  _DAT_ram_18100000 = _DAT_ram_18100000 | 1;
  return;
}


/* NanoCore 1.12, address 0x4003e10e.
 * REA evidence: ev_d56aca02ab2d2ed5deeebe32544b1c9e49c21eb14f54ab60d0ddc4ea2f00427a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003e10e(void)

{
  fence();
  fence();
  _DAT_ram_18100000 = _DAT_ram_18100000 & 0xfffffffe;
  return;
}


/* NanoCore 1.12, address 0x4003e122.
 * REA evidence: ev_f72c29d76e66900a1c8f9f324f816aa0891f3abcca2058450f53c49e9708b13b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4003e122(void)

{
  fence();
  fence();
  return (_DAT_ram_18100008 & 7) >> 2;
}


/* NanoCore 1.12, address 0x4003e13a.
 * REA evidence: ev_2f7dd93c3de56db92b92c9bebff8e2cef45178cb0e29ddc29ac6c2163ed21543
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003e13a(void)

{
  fence();
  return (_DAT_ram_18000020 & 7) * 1000 + 24000;
}


/* NanoCore 1.12, address 0x4003e15a.
 * REA evidence: ev_a172abd845fded3461f8dc70230202344f6ba0b8e431e58ffe4c272be2feabc4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003e15a(int param_1)

{
  if (param_1 == 0) {
    fence();
    fence();
    _DAT_ram_1800040c = _DAT_ram_1800040c | 1;
  }
  else {
    fence();
    fence();
    _DAT_ram_1800040c = _DAT_ram_1800040c & 0xfffffffe;
  }
  return;
}


/* NanoCore 1.12, address 0x4003e184.
 * REA evidence: ev_c727247522f734eb7d40694cc391c149800d012da95da2901a85a45da053e0a2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003e184(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_40038bfe(0x1e);
  if ((iVar1 < 0) || (iVar1 = FUN_ram_40038ba4(0x1e), iVar1 < 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_ram_4003b0de();
    FUN_ram_4003b136(9,&uStack_14);
    FUN_ram_4003b11a();
    _DAT_ram_180001f0 = (uint)uStack_14._3_1_ << 8 | 2;
    fence();
    fence();
    fence();
    _DAT_ram_18000020 = _DAT_ram_18000020 & 0xfffcffff | 0x30000;
    fence();
    fence();
    fence();
    _DAT_ram_18000028 = _DAT_ram_18000028 & 0xf | 0x40;
    uStack_14 = _DAT_ram_180001f0;
    FUN_ram_4004004c(100);
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4003e262.
 * REA evidence: ev_556e34b4d96c69c545860b1fbd23f997b7d6bddef0a3aa757d6b0d782e9cd144
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e262(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *(undefined4 *)(*param_1 + 8) = 7;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.12, address 0x4003e278.
 * REA evidence: ev_a94b21cba5a651e0660e5f2076c408d117cfc621ab07a98167b3a348adfddab3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e278(int *param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = *(uint *)(*param_1 + 0x10);
    if (param_2 == 0) {
      uVar1 = uVar1 & 0xffffffef;
    }
    else {
      uVar1 = uVar1 | 0x10;
    }
    *(uint *)(*param_1 + 0x10) = uVar1;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.12, address 0x4003e298.
 * REA evidence: ev_ad180af7ef9cb1e0f3f2e1509362b05810ec57b8dfd1414bd404a4e3c957df17
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003e298(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    _DAT_ram_3007fafc = 0;
    _DAT_ram_3007fb00 = 0x100;
    if ((&DAT_ram_3007fafc)[param_1[0xd]] == '\x01') {
      *(undefined4 *)(iVar2 + 8) = 6;
      uVar1 = 0xb9;
    }
    else {
      uVar1 = 199;
    }
    *(undefined4 *)(iVar2 + 8) = uVar1;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.12, address 0x4003e2dc.
 * REA evidence: ev_8d1318754d8b005f80cacfcc262bbf06eeb5e2326d191b63aa041b7962254ad0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e2dc(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0x81020084;
  }
  iVar2 = *param_1;
  if (param_2 == 0) {
    uVar1 = *(uint *)(iVar2 + 0xc) & 0xfb;
  }
  else {
    if (param_2 != 1) {
      return 0x8102008a;
    }
    uVar1 = *(uint *)(iVar2 + 0xc) | 4;
  }
  *(uint *)(iVar2 + 0xc) = uVar1;
  return 0;
}


/* NanoCore 1.12, address 0x4003e310.
 * REA evidence: ev_bf9c4a98796a7bc704c0ac6b202669c4133d90f02014c94cef854e2472dac324
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e310(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0x81020084;
  }
  iVar2 = *param_1;
  if (param_2 == 2) {
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfe;
    uVar1 = *(uint *)(iVar2 + 0xc) | 2;
  }
  else if (param_2 < 3) {
    if (param_2 == 0) {
      uVar1 = *(uint *)(iVar2 + 0xc) & 0xfc;
    }
    else {
      *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfd;
      uVar1 = *(uint *)(iVar2 + 0xc) | 1;
    }
  }
  else {
    if (param_2 != 3) {
      return 0x81020088;
    }
    uVar1 = *(uint *)(iVar2 + 0xc) | 3;
  }
  *(uint *)(iVar2 + 0xc) = uVar1;
  return 0;
}


/* NanoCore 1.12, address 0x4003e36e.
 * REA evidence: ev_a79907579f1e9ee468c9054317a98739d455864a891dbe4e2f63bd5d81c198b0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e36e(int *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0x81020084;
  }
  else {
    iVar3 = *param_1;
    if ((1 < param_2 - 1U) && (param_2 != 7)) {
      if (param_2 == 3) {
        uVar2 = *(uint *)(iVar3 + 0x10) | 0x22;
      }
      else {
        uVar2 = *(uint *)(iVar3 + 0x10) & 0x3f;
      }
      *(uint *)(iVar3 + 0x10) = uVar2;
      *(uint *)(iVar3 + 0xc0) = *(uint *)(iVar3 + 0xc0) & 0xfffffff7;
      *(uint *)(iVar3 + 0xc0) = *(uint *)(iVar3 + 0xc0) & 0xfffffffb;
      return 0;
    }
    *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) & 0x3f;
    if ((param_2 == 1) || (param_2 == 7)) {
      uVar2 = *(uint *)(iVar3 + 0x10) | 0x80;
    }
    else {
      uVar2 = *(uint *)(iVar3 + 0x10) | 0xc0;
    }
    *(uint *)(iVar3 + 0x10) = uVar2;
    uVar1 = 0;
    *(uint *)(iVar3 + 0xc0) = *(uint *)(iVar3 + 0xc0) | 8;
    *(uint *)(iVar3 + 0xc0) = *(uint *)(iVar3 + 0xc0) | 4;
    *(uint *)(iVar3 + 0xc0) = *(uint *)(iVar3 + 0xc0) & 0xffffff7f;
    if (param_2 == 7) {
      *(uint *)(iVar3 + 0xc0) = *(uint *)(iVar3 + 0xc0) | 0x80;
      return uVar1;
    }
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4003e404.
 * REA evidence: ev_ae07c787508ae160923854a88565cfd968e70bc3bbb2bb7fede658d4b1ac83fe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003e404(int *param_1)

{
  uint uStack_4;
  
  if (param_1 != (int *)0x0) {
    uStack_4 = 0xffffffff;
    if ((((uint *)*param_1)[5] & 1) != 0) {
      uStack_4 = *(uint *)*param_1 & 0xff;
    }
    return uStack_4;
  }
  return 0x81020084;
}


/* NanoCore 1.12, address 0x4003e42c.
 * REA evidence: ev_262708d86796ca8c2a619a54fce47ae2c30b5b333ac23db62c61ce4aedeff6ae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e42c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x81020084;
  }
  iVar1 = 1000000;
  do {
    if ((((undefined4 *)*param_1)[5] & 0x20) != 0) {
      *(undefined4 *)*param_1 = param_2;
      return 0;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0x81020082;
}


/* NanoCore 1.12, address 0x4003e45e.
 * REA evidence: ev_08d0d4f15e3a5bd4053060abf315058bdc306b814685bec53c478453db852163
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e45e(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    if (param_2 == 1) {
      uVar1 = *(uint *)(iVar2 + 0xa4) | 1;
    }
    else {
      uVar1 = *(uint *)(iVar2 + 0xa4) & 0xfffffffe;
    }
    *(uint *)(iVar2 + 0xa4) = uVar1;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.12, address 0x4003e48a.
 * REA evidence: ev_8f34165d575c9027acb06d6683eec04dbc8c26a5f4a0e36b037d8fe53bd0e6f1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003e48a(undefined4 param_1)

{
  int iVar1;
  
  FUN_ram_4003e278(param_1,1);
  FUN_ram_4003e42c(param_1,0);
  FUN_ram_4003e42c(param_1,0);
  FUN_ram_400400b4(1);
  FUN_ram_4003e404(param_1);
  FUN_ram_4003e404(param_1);
  FUN_ram_4003e278(param_1,0);
  do {
    iVar1 = FUN_ram_4003e404(param_1);
  } while (iVar1 != -1);
  return;
}


/* NanoCore 1.12, address 0x4003e4da.
 * REA evidence: ev_c07c9453044f2dfa9af9d2b373e78b328747749bcb9c457f8d65bc5300a94bb2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003e510) */
/* WARNING: Removing unreachable block (ram,0x4003e514) */

undefined4 FUN_ram_4003e4da(int *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (int *)0x0) {
    return 0x81020084;
  }
  puVar2 = (uint *)*param_1;
  iVar3 = FUN_ram_40038d2c(param_1[0xd] + 0x25);
  iVar4 = 1000000;
  if (param_2 == 0) {
    param_2 = 0xffffffff;
  }
  else {
    param_2 = (uint)(iVar3 * 10) / param_2;
  }
  uVar1 = (uint)(4 < (param_2 >> 4) % 10) + (param_2 >> 4) / 10;
  FUN_ram_4003e298(param_1);
  do {
    if ((puVar2[0x1f] & 1) == 0) {
      puVar2[3] = puVar2[3] | 0x80;
      *puVar2 = uVar1 & 0xff;
      puVar2[1] = (uVar1 & 0xffff) >> 8;
      puVar2[3] = puVar2[3] & 0xffffff7f;
      return 0;
    }
    iVar4 = iVar4 + -1;
    FUN_ram_4003e48a(param_1);
  } while (iVar4 != 0);
  return 0x81020082;
}


/* NanoCore 1.12, address 0x4003e574.
 * REA evidence: ev_50191b87592c639fbae59fd4fc4fc3a8e3dedb3bfc606e2d90b2854061112a9d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003e574(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  
  iVar2 = *param_2;
  uVar3 = *(uint *)(iVar2 + 0x14);
  *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xfffffffd;
  if ((uVar3 & 0x10) == 0) {
    if ((uVar3 & 8) == 0) {
      if ((uVar3 & 4) == 0) {
        if ((uVar3 & 2) == 0) {
          iVar4 = 1000000;
          do {
            if ((*(uint *)(iVar2 + 0x14) & 1) == 0) {
              return;
            }
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          UNRECOVERED_JUMPTABLE = (code *)param_2[2];
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            return;
          }
          uVar1 = 6;
          goto LAB_ram_4003e59a;
        }
        UNRECOVERED_JUMPTABLE = (code *)param_2[2];
        uVar1 = 5;
      }
      else {
        UNRECOVERED_JUMPTABLE = (code *)param_2[2];
        uVar1 = 9;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)param_2[2];
      uVar1 = 8;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)param_2[2];
    uVar1 = 7;
  }
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
LAB_ram_4003e59a:
                    /* WARNING: Could not recover jumptable at 0x4003e59a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}


/* NanoCore 1.12, address 0x4003e5d2.
 * REA evidence: ev_c871b3abd36081054e4c3804cb0c2a1050584ea4d203ff14a91720293b268237
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003e5d2(int param_1)

{
  return *(uint *)(*(int *)(param_1 * 0x70 + 0x3007fb04) + 8) & 0xf;
}


/* NanoCore 1.12, address 0x4003e5ec.
 * REA evidence: ev_d0f4e14e69b8cdf5b1f8faa114db3bf4bc58e46fca308a5e0304af06d635124e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003e5ec(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1 * 0x70;
  iVar3 = (param_1 + 0x18710) * 0x1000;
  *(int *)(iVar2 + 0x3007fb04) = iVar3;
  iVar1 = param_1 + 0x4c;
  *(int *)(iVar2 + 0x3007fb08) = iVar1;
  *(undefined4 *)(iVar2 + 0x3007fb0c) = param_2;
  *(int *)(iVar2 + 0x3007fb38) = param_1;
  if (param_3 == 0) {
    *(undefined4 *)(iVar3 + 4) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 4) = 0;
    FUN_ram_4003fc98(iVar1,param_3,0);
    FUN_ram_4003fc50(iVar1);
    FUN_ram_4003fc50(*(undefined4 *)(iVar2 + 0x3007fb08));
  }
  return iVar2 + 0x3007fb04;
}


/* NanoCore 1.12, address 0x4003e64c.
 * REA evidence: ev_939b69336bc10ccb3f39e8c0474efc2518b66463b4738b44c3face7936f33a25
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003e64c(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    if (param_2 == 1) {
      if (param_3 == 0) {
        uVar1 = *(uint *)(iVar2 + 4) & 0xfffffffe;
LAB_ram_4003e664:
        *(uint *)(iVar2 + 4) = uVar1;
        return param_3;
      }
      if (param_3 == 1) {
        uVar1 = *(uint *)(iVar2 + 4) | 1;
LAB_ram_4003e674:
        *(uint *)(iVar2 + 4) = uVar1;
        return 0;
      }
    }
    else if (param_2 == 2) {
      if (param_3 == 0) {
        uVar1 = *(uint *)(iVar2 + 4) & 0xfffffffb;
        goto LAB_ram_4003e664;
      }
      if (param_3 == 1) {
        uVar1 = *(uint *)(iVar2 + 4) | 4;
        goto LAB_ram_4003e674;
      }
    }
    else if (param_2 == 0) {
      if (param_3 == 0) {
        uVar1 = *(uint *)(iVar2 + 4) & 0xfffffffd;
        goto LAB_ram_4003e664;
      }
      if (param_3 == 1) {
        uVar1 = *(uint *)(iVar2 + 4) | 2;
        goto LAB_ram_4003e674;
      }
    }
  }
  return -0x7efdff7c;
}


/* NanoCore 1.12, address 0x4003e6ac.
 * REA evidence: ev_8c214358080f03504ffc64b28df870a807432bbb3f982e264f457794edebfb1c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e6ac(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0x81020084;
  }
  iVar1 = *param_1;
  if (param_2 == 1) {
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 8;
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x10;
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 0) {
        *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & 0xfffffff7;
        return 0;
      }
      return 0x81020089;
    }
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 8;
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & 0xef;
  }
  FUN_ram_4003e64c(param_1,2,1);
  return 0;
}


/* NanoCore 1.12, address 0x4003e712.
 * REA evidence: ev_f8b26e013c06835633dedda80d256286b76f2ffe0a9428c2753b7704b86a2ae4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003e712(int param_1,undefined4 param_2,int param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003e4da();
  if (-1 < iVar1) {
    if (param_1 == 0) {
      iVar1 = -0x7efdff7c;
    }
    else if (param_3 == 0) {
      iVar1 = FUN_ram_4003e6ac(param_1,param_4);
      if ((((-1 < iVar1) && (iVar1 = FUN_ram_4003e36e(param_1,param_7), -1 < iVar1)) &&
          (iVar1 = FUN_ram_4003e2dc(param_1,param_5), -1 < iVar1)) &&
         ((iVar1 = FUN_ram_4003e310(param_1,param_6), -1 < iVar1 &&
          (iVar1 = FUN_ram_4003e298(param_1), 0 < iVar1)))) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = -0x7efdff7a;
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4003e798.
 * REA evidence: ev_957386690ca68fef4002b52fa741bda0deacade64e515168978ad24e3a5009ae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e798(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    do {
    } while ((*(uint *)(iVar1 + 0x7c) & 1) != 0);
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xfffffffd;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.12, address 0x4003e7b6.
 * REA evidence: ev_5a4097cd9b4f02fbd6d6f986dcc77c47030249810e6eb11ae903c964848b2a02
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e7b6(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    do {
    } while ((*(uint *)(iVar1 + 0x7c) & 1) != 0);
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 2;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.12, address 0x4003e7d6.
 * REA evidence: ev_842326e6474c876efdea52748ec48905e97b0050fbafdc44efe6792f055a3f8c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e7d6(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 8) = 6;
    *(undefined4 *)(iVar1 + 8) = 0xb9;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.12, address 0x4003e7f2.
 * REA evidence: ev_7d9a512ab946bffeebc6112627c7dc9c613177f5b23a3fad1a986599a7cb01cb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e7f2(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *(uint *)(*param_1 + 0xa4) = *(uint *)(*param_1 + 0xa4) | 0x40;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.12, address 0x4003e810.
 * REA evidence: ev_f4d1482333d224bdf19b8c608259e17e4cfa23cf7a6584883a968913448ef765
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e810(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *(uint *)(*param_1 + 0xa4) = *(uint *)(*param_1 + 0xa4) | 0x80;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.12, address 0x4003e82e.
 * REA evidence: ev_37712047f56ba40771ce96235c6fd5bc2e0576569cf3da9442d06ef3322a0eb4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e82e(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *(uint *)(*param_1 + 0xa4) = *(uint *)(*param_1 + 0xa4) & 0xffffff7f;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.12, address 0x4003e84c.
 * REA evidence: ev_af383cf216b5ac684351d92cb4d61e8d62fba9b03584dc68478ad80aeaf75db0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e84c(int *param_1)

{
  if (param_1 != (int *)0x0) {
    return *(undefined4 *)(*param_1 + 0x84);
  }
  return 0x81020084;
}


/* NanoCore 1.12, address 0x4003e860.
 * REA evidence: ev_b0b303c9f32ecb609dd7589823e0f30f364c7852df8a2165388e050b315c4cc7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e860(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *(undefined4 *)(*param_1 + 0x88) = 0xe5;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.12, address 0x4003e87a.
 * REA evidence: ev_1412c695e4bcd9405ab8a720ad2fe101b26fba879206afd22be3e719de579d6c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e87a(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  if (param_1 != 0) {
    memset(&local_30,0,0x20);
    FUN_ram_4003e860(param_1);
    *(undefined4 *)(param_1 + 0x54) = param_2;
    iStack_14 = *(int *)(param_1 + 0x34) + 0x10;
    puStack_2c = &DAT_ram_18710000 + *(int *)(param_1 + 0x34) * 0x1000;
    local_30 = 2;
    *(undefined4 *)(param_1 + 0x58) = param_3;
    uStack_1c = 1;
    uStack_18 = 1;
    uStack_24 = 1;
    uStack_20 = 0;
    uStack_28 = param_2;
    iVar1 = FUN_ram_4003ac8e();
    *(int *)(param_1 + 0x50) = iVar1;
    uVar2 = 0xffffffff;
    if (iVar1 != 0) {
      FUN_ram_4003ac36(iVar1,&local_30);
      FUN_ram_4003ac26(*(undefined4 *)(param_1 + 0x50),&LAB_ram_4003e216,param_1 + 0x50);
      FUN_ram_4003adcc(*(undefined4 *)(param_1 + 0x50),uStack_28,puStack_2c,
                       *(undefined4 *)(param_1 + 0x58),2);
      FUN_ram_4003e810(param_1);
      FUN_ram_4003afac(*(undefined4 *)(param_1 + 0x50));
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x81020084;
}


/* NanoCore 1.12, address 0x4003e920.
 * REA evidence: ev_0029e1d2b4cee403024fccc1abeb1a2842e4c415aa99c18a8d9cdc1bcfffc03d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e920(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  if (param_1 != 0) {
    memset(&local_30,0,0x20);
    FUN_ram_4003e860(param_1);
    iStack_14 = *(int *)(param_1 + 0x34) + 0x10;
    puStack_28 = &DAT_ram_18710000 + *(int *)(param_1 + 0x34) * 0x1000;
    *(uint *)(param_1 + 0x40) = param_3 & 0xffff;
    *(undefined4 *)(param_1 + 0x3c) = param_2;
    local_30 = 1;
    uStack_1c = 1;
    uStack_18 = 1;
    uStack_24 = 0;
    uStack_20 = 1;
    uStack_2c = param_2;
    iVar1 = FUN_ram_4003ac8e();
    *(int *)(param_1 + 0x38) = iVar1;
    uVar2 = 0xffffffff;
    if (iVar1 != 0) {
      FUN_ram_4003ac36(iVar1,&local_30);
      FUN_ram_4003ac26(*(undefined4 *)(param_1 + 0x38),&LAB_ram_4003e23c,param_1 + 0x38);
      FUN_ram_4003adcc(*(undefined4 *)(param_1 + 0x38),puStack_28,uStack_2c,
                       *(undefined4 *)(param_1 + 0x40),1);
      FUN_ram_4003e7f2(param_1);
      FUN_ram_4003afac(*(undefined4 *)(param_1 + 0x38));
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x81020084;
}


/* NanoCore 1.12, address 0x4003e9c8.
 * REA evidence: ev_0011e2cf6061d0c4794cf63e79d7af77ff3ad7c30ef945cdfa8d95663a21c575
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e9c8(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x68) = param_2;
    *(undefined4 *)(param_1 + 0x6c) = param_3;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.12, address 0x4003e9dc.
 * REA evidence: ev_dc63cd30bddda06fe684b593bc37e20259c5eae6898ad9bf88970ce03d70c2ec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003e9dc(void)

{
  fence();
  if (_DAT_ram_18c00014 != 0) {
    fence();
    _DAT_ram_3007fe84 = _DAT_ram_18c00204;
    fence();
    _DAT_ram_18c00204 = _DAT_ram_18c00204 | 0xf;
  }
  fence();
  if (_DAT_ram_18c00018 != 0) {
    fence();
    _DAT_ram_3007fe84 = _DAT_ram_18c00104;
    fence();
    _DAT_ram_18c00104 = _DAT_ram_18c00104 | 0xf;
  }
  fence();
  _DAT_ram_18c0000c = 0;
  FUN_ram_40004c1a(_DAT_ram_3007fe88,1);
  return 0;
}


/* NanoCore 1.12, address 0x4003ea52.
 * REA evidence: ev_2c7f3aea741fb5a2784458dbb746a7a31b440ac3b4d3091a0722031abcd3c29a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003ea52(void)

{
  _DAT_ram_3007fe84 = 0;
  _DAT_ram_3007fe88 = 0;
  _DAT_ram_3007fe8c = 0;
  _DAT_ram_3007fe8c = FUN_ram_400049d8(s_aicos_mutex_ram_4009d388,0);
  _DAT_ram_3007fe88 = FUN_ram_40004bf0(s_aicos_event_ram_4009d37c,0);
  FUN_ram_4003fc98(0x3d,FUN_ram_4003e9dc,&DAT_ram_3007fe84);
  FUN_ram_4003fc50(0x3d);
  FUN_ram_4003fc50(0x3d);
  return 0;
}


/* NanoCore 1.12, address 0x4003eab8.
 * REA evidence: ev_63021d4fcb33731a6926d5352e3d21e20a67b9dc5246e503272a82e51ef4dcaa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003eab8(void)

{
  fence();
  fence();
  _DAT_ram_190000e8 = 0xa1caaaaa;
  return;
}


/* NanoCore 1.12, address 0x4003eade.
 * REA evidence: ev_6646df54ef854628064cd4b3c3a8d6691edfbb79b507355e3ca068367f8a21ec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003eade(int param_1,int param_2)

{
  fence();
  *(int *)((param_1 + 0x1900004) * 0x10) = *(int *)(param_2 + 4) * 32000;
  return;
}


/* NanoCore 1.12, address 0x4003eafc.
 * REA evidence: ev_23a8de5f16153ac0ac0ad90e793cd2a8fc8e689fdf585aa9d6da82bcc0c9bb20
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003eafc(int param_1,int param_2)

{
  fence();
  *(int *)(param_1 * 0x10 + 0x19000044) = *(int *)(param_2 + 8) * 32000;
  return;
}


/* NanoCore 1.12, address 0x4003eb1c.
 * REA evidence: ev_f8436d73e4b1fd11aada0ece490a098dcb998d65a5c22f9fabb692f70a1e2786
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003eb1c(int param_1,int param_2)

{
  fence();
  *(int *)(param_1 * 0x10 + 0x19000048) = *(int *)(param_2 + 0xc) * 32000;
  return;
}


/* NanoCore 1.12, address 0x4003eb3c.
 * REA evidence: ev_bbad6bdcd686d1bd3a363350df35e0b5f61eec6a2e02f1520da8a769a2ffc312
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003eb62) */
/* WARNING: Removing unreachable block (ram,0x4003eb52) */
/* WARNING: Removing unreachable block (ram,0x4003eb70) */

void FUN_ram_4003eb3c(int param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)((param_1 + 0x1900004) * 0x10);
  fence();
  *(uint *)(param_2 + 4) = *puVar1 / 32000;
  fence();
  *(uint *)(param_2 + 8) = puVar1[1] / 32000;
  fence();
  *(uint *)(param_2 + 0xc) = puVar1[2] / 32000;
  return;
}


/* NanoCore 1.12, address 0x4003eb78.
 * REA evidence: ev_2fc79d9dadf21e9a2f84884d737d86fb8298ce708484ef478c4f2a7a98ab0f80
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4003eb78(void)

{
  fence();
  return _DAT_ram_19000000 & 1;
}


/* NanoCore 1.12, address 0x4003ebf6.
 * REA evidence: ev_74fe236b70b356bb4cf4f4a70e3fbc9a29568e64e5e1e9e36f4e2b932226ba11
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003ebf6(int param_1,int param_2)

{
  if (param_1 != 0) {
    fence();
    _DAT_ram_19000000 = param_2 << 1 | 1;
    return;
  }
  fence();
  fence();
  _DAT_ram_19000000 = _DAT_ram_19000000 & 0xfffffffe;
  return;
}


/* NanoCore 1.12, address 0x4003ec1e.
 * REA evidence: ev_6355f0ba73797fe09c485ebdf2679dd02558c29d5b8a602f3d4162f7672c455a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003ec1e(undefined4 param_1)

{
  fence();
  _DAT_ram_19000008 = param_1;
  return;
}


/* NanoCore 1.12, address 0x4003ec2c.
 * REA evidence: ev_20ca5ce55435d5538ec5128c1dc05c72a728ec0fa55f41e7194c9781c5eed8ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003ec2c(void)

{
  fence();
  return _DAT_ram_19000008;
}


/* NanoCore 1.12, address 0x4003ec3a.
 * REA evidence: ev_246782db261e9bd2cf7bb91458d0460623c9d3d08856164ee00b70d94d07ae39
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003ec3a(void)

{
  fence();
  fence();
  return;
}


/* NanoCore 1.12, address 0x4003ec4e.
 * REA evidence: ev_b8cfb570607caa64887df1bc865624b8f5f1f7fd518f599ff3e0bea924370dca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003ec4e(void)

{
  int iVar1;
  
  if (_DAT_ram_3007fe90 != 0) {
    return _DAT_ram_3007fea0;
  }
  fence();
  if (_DAT_ram_1900f000 != 0) {
    _DAT_ram_3007fe94 = _DAT_ram_1900f000;
    iVar1 = 8;
    do {
      if ((*(uint *)(PTR_DAT_ram_3004c1d0_ram_4009d624 + iVar1 * 4) & _DAT_ram_1900f000) != 0) {
        _DAT_ram_3007fea0 = iVar1;
        return iVar1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return 0;
}


/* NanoCore 1.12, address 0x4003ec90.
 * REA evidence: ev_6b2d01dab05bb97c410bcf642976348ca1e79d6c7df7339a5953a707a7c2d68f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003ec90(undefined4 param_1,int param_2)

{
  int iVar1;
  int aiStack_14 [2];
  
  aiStack_14[0] = param_2;
  iVar1 = (*(code *)PTR_FUN_ram_4003ee24_ram_4009d628)();
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_FUN_ram_4003ee32_ram_4009d634)(param_1,aiStack_14);
    if (-1 < iVar1) {
      return iVar1;
    }
  }
  else {
    (*(code *)PTR_FUN_ram_4003ef1a_ram_4009d630)(param_2,aiStack_14[0]);
  }
  return aiStack_14[0];
}


/* NanoCore 1.12, address 0x4003ecd0.
 * REA evidence: ev_c22315befeebcccf3398e916993bc5193fbea22ead0abe6e174cfa8bd5a7aa7c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ecd0(int param_1)

{
  fence();
  if ((DAT_ram_19030100 & 0xf0) == 0) {
    if (param_1 != 0) {
      DAT_ram_19030100 = DAT_ram_19030100 | (byte)(param_1 << 4);
    }
    fence();
    fence();
    fence();
    DAT_ram_190300fc = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x4003ed1c.
 * REA evidence: ev_1da4f4259fba7dca40af2a8f52a76d3c6699054a7176eb9e3d50b0c7c91a5bfb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003ed1c(void)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_ram_4003ec4e();
  bVar1 = DAT_ram_19030100;
  if (_DAT_ram_3007fe90 == 0) {
    fence();
    FUN_ram_4003390a(s_Reset_flag__0x_x_ram_4009d42c,_DAT_ram_3007fe94);
    _DAT_ram_3007fe98 = FUN_ram_4003ec90(uVar2,bVar1 >> 4);
    _DAT_ram_3007fe90 = 1;
  }
  return _DAT_ram_3007fe98;
}


/* NanoCore 1.12, address 0x4003ed7a.
 * REA evidence: ev_e65d7d3540fe72187696444c04e9d66e5a985b352cf5472bbe20ca1729ae6a1e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003ed7a(void)

{
  fence();
  fence();
  fence();
  if ((DAT_ram_19030100 & 0xf0) != 0) {
    fence();
    fence();
    DAT_ram_19030100 = DAT_ram_19030100 & 0xf;
    fence();
    DAT_ram_190300fc = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x4003edcc.
 * REA evidence: ev_5bb8f8108a0f8f9c532d8bdff1928590941af5c7c8612d01cabc4e4c30dfa502
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003ede6) */
/* WARNING: Removing unreachable block (ram,0x4003ede2) */
/* WARNING: Removing unreachable block (ram,0x4003edf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003edcc(undefined *param_1,uint param_2)

{
  if (param_2 == 0) {
    fence();
    param_2 = _DAT_ram_19050008;
  }
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_ram_4009d440;
  }
  FUN_ram_4003390a(s__s_time___d__03d_sec_ram_4009d444,param_1,param_2 / 4000000,
                   (param_2 % 4000000) / 4000);
  return;
}


/* NanoCore 1.12, address 0x4003ee0c.
 * REA evidence: ev_f7153541ef2f163cab05e3f30f3b692a661eeba686dc8bcabe81789261c4acc4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003ee0c(void)

{
  fence();
  FUN_ram_4003edcc(s_Startup_ram_4009d45c,_DAT_ram_19050008);
  return;
}


/* NanoCore 1.12, address 0x4003ee24.
 * REA evidence: ev_029d1834820b0bdacc9182dd7c3ed003f5c1a5bc248c7c5a6a12b33883914c06
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ee24(int param_1)

{
  if (param_1 != 4) {
    return 0;
  }
  return 4;
}


/* NanoCore 1.12, address 0x4003ee32.
 * REA evidence: ev_060bbe899d6be8b81e24db3593e70b2e00def6bd451fe3eb99d73400b87f506c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003ee32(int param_1,int *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 == 2) {
    pcVar1 = s_Reset_reason__Command_Poweroff_ram_4009d464;
LAB_ram_4003ee4c:
    FUN_ram_40033920(pcVar1);
    goto LAB_ram_4003ee50;
  }
  if (iVar2 == 3) {
    pcVar1 = s_Reset_reason__Suspend_ram_4009d484;
    goto LAB_ram_4003ee4c;
  }
  if (iVar2 != 0) {
    return -0x16;
  }
  if (param_1 == 0) {
    FUN_ram_40033920(s_Reset_reason__Power_On_Reset_ram_4009d49c);
    return param_3;
  }
  FUN_ram_4003390a(s_Reset_action__Warm_Reset__reason_ram_4009d4bc);
  switch(param_1) {
  case 1:
    FUN_ram_40033920(s_RTC_Power_Down_ram_4009d4e0);
    iVar2 = 0x10;
    break;
  case 2:
    FUN_ram_40033920(s_External_PIN_Reset_ram_4009d4f0);
    iVar2 = 0x11;
    break;
  case 3:
    FUN_ram_40033920(s_JTAG_Reset_ram_4009d504);
    iVar2 = 0x12;
    break;
  default:
    FUN_ram_4003390a(s_Unknown__d__ram_4009d540,param_1);
    goto LAB_ram_4003ee50;
  case 6:
    FUN_ram_40033920(s_OTP_Reset_ram_4009d510);
    iVar2 = 0x13;
    break;
  case 7:
    pcVar1 = s_Undervoltage_Reset_ram_4009d51c;
    goto LAB_ram_4003eef8;
  case 8:
    pcVar1 = s_Brown_Out_Reset_ram_4009d530;
LAB_ram_4003eef8:
    FUN_ram_40033920(pcVar1);
    iVar2 = 0x14;
  }
  *param_2 = iVar2;
LAB_ram_4003ee50:
  return *param_2;
}


/* NanoCore 1.12, address 0x4003ef1a.
 * REA evidence: ev_8013a008cc55a2c56876ca32c0612da93c2c1a87a2e37e10517747d919fe7d86
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ef1a(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  
  FUN_ram_4003390a(s_Reset_action__Watchdog_Reset__re_ram_4009d570);
  switch(param_1) {
  case 1:
    pcVar1 = s_Command_Reboot_ram_4009d5a8;
    break;
  default:
    FUN_ram_4003390a(s_Unknown__d__ram_4009d540,param_2);
    return;
  case 4:
    pcVar1 = s_Upgrade_Mode_ram_4009d598;
    break;
  case 10:
    pcVar1 = s_Software_Lockup_ram_4009d5b8;
    break;
  case 0xb:
    pcVar1 = s_Hardware_Lockup_ram_4009d5c8;
    break;
  case 0xc:
    pcVar1 = s_Kernel_Panic_ram_4009d5d8;
    break;
  case 0xd:
    pcVar1 = s_Ramdump_ram_4009d5e8;
  }
  FUN_ram_40033920(pcVar1);
  return;
}


/* NanoCore 1.12, address 0x4003efa2.
 * REA evidence: ev_0dae9a195edead23a0a3bf870026abce5fe9e228dd35f9219ae2d0af6ed0d2c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003efa2(int param_1,int param_2,uint param_3,code *param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 + 3U & 0xfffffffc;
  if (param_3 < 2) {
    uVar2 = (*param_4)(param_3);
  }
  else {
    uVar2 = (*param_4)((param_1 + 3U & 0xfffffffc) + uVar1);
  }
  if (uVar2 != 0) {
    if ((uVar1 - 1 & uVar2) == 0) {
      uVar1 = uVar2 + uVar1;
    }
    else {
      uVar1 = uVar2 + (uVar1 - 1) & -uVar1;
    }
    *(uint *)(uVar1 - 4) = uVar2;
  }
  return;
}


/* NanoCore 1.12, address 0x4003efec.
 * REA evidence: ev_10a68e108658bb68143854058dee917960f07d973c2cfd8a73cf66b2c5d8fa3c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003efec(int param_1,uint param_2,code *UNRECOVERED_JUMPTABLE_00)

{
  if (param_1 == 0) {
    return;
  }
  if (1 < param_2) {
                    /* WARNING: Could not recover jumptable at 0x4003effc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(*(undefined4 *)(param_1 + -4));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4003f000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_2);
  return;
}


