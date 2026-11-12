/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4003d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4003d058.
 * REA evidence: ev_81796bdf1ed02c25c57766827f252535caac34e23612b44291bd9daa79d745e6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003d058(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_400369fe(0x1f);
  if ((iVar1 < 0) || (iVar1 = FUN_ram_400369a4(0x1f), iVar1 < 0)) {
    uVar2 = 0xfffffff2;
  }
  else {
    fence();
    _DAT_ram_18100004 = 0x3f;
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x4003d08c.
 * REA evidence: ev_1dab9ba98783711d9465b143801abc29895d8ea5a09fd4c8ae8cd8b90ffcbdcc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003d08c(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (_DAT_ram_3007e6f8 == 0) {
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


/* NanoCore 1.10, address 0x4003d104.
 * REA evidence: ev_757d8000248e50aad04777a52a573edc78d7373534460e9350fa46517a7d87ac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003d104(void)

{
  fence();
  _DAT_ram_18100008 = 0x3f;
  fence();
  fence();
  _DAT_ram_18100000 = _DAT_ram_18100000 | 1;
  return;
}


/* NanoCore 1.10, address 0x4003d128.
 * REA evidence: ev_083b44f15e30b6de36a159a886ee9dacb0204407fa3ec38f0a410ddfd262acb9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003d128(void)

{
  fence();
  fence();
  _DAT_ram_18100000 = _DAT_ram_18100000 & 0xfffffffe;
  return;
}


/* NanoCore 1.10, address 0x4003d13c.
 * REA evidence: ev_1cf2e70d6327e54fe729ab896b50203963823e0ca9dfe9159c7c3dd82001c6a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4003d13c(void)

{
  fence();
  fence();
  return (_DAT_ram_18100008 & 7) >> 2;
}


/* NanoCore 1.10, address 0x4003d154.
 * REA evidence: ev_c0975bae8a3e3972f31c13bb0cfb60ad9ab0e3e4baba01099366b6a3d419de9e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003d154(void)

{
  fence();
  return (_DAT_ram_18000020 & 7) * 1000 + 24000;
}


/* NanoCore 1.10, address 0x4003d174.
 * REA evidence: ev_fa7a93b17bdd2358732e072fdef35cb605ba92f5a7765846abcfc353ea8f913c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003d174(int param_1)

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


/* NanoCore 1.10, address 0x4003d19e.
 * REA evidence: ev_9f8b9de4e84b19a73df6cc685e90214d7c0f2c1877e2a8b8b43af373fb843ffd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003d19e(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_400369fe(0x1e);
  if ((iVar1 < 0) || (iVar1 = FUN_ram_400369a4(0x1e), iVar1 < 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_ram_40038e68();
    FUN_ram_40038ec0(9,&uStack_14);
    FUN_ram_40038ea4();
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
    FUN_ram_4003f052(100);
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x4003d27c.
 * REA evidence: ev_65edfc94dab5ae9c58d475941e4cacace26b5d7b5eb3eb7b5d19ea850959c4ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d27c(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *(undefined4 *)(*param_1 + 8) = 7;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.10, address 0x4003d292.
 * REA evidence: ev_75b1e3281d21015e5e5a1e1e94b7b1df08a121d1c0c940ecd1566cc748d0e2fe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d292(int *param_1,int param_2)

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


/* NanoCore 1.10, address 0x4003d2b2.
 * REA evidence: ev_9b6614041fe3f55abc596279a11ff669fd107873161f0452376a4215b0f15757
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003d2b2(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    _DAT_ram_3007e6fc = 0;
    _DAT_ram_3007e700 = 0x100;
    if ((&DAT_ram_3007e6fc)[param_1[0xd]] == '\x01') {
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


/* NanoCore 1.10, address 0x4003d2f6.
 * REA evidence: ev_f6168607bdc0080da77db0d10664687f8a14c7012243fc555d962fc28a957593
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d2f6(int *param_1,int param_2)

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


/* NanoCore 1.10, address 0x4003d32a.
 * REA evidence: ev_ae87b067865965b62b3919ea181f7b5004d3b6c62f654a93de819942717216cc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d32a(int *param_1,uint param_2)

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


/* NanoCore 1.10, address 0x4003d388.
 * REA evidence: ev_34b2a3e1d1495a2481093598ead36d6842364686016160f1a5be80aa820de6fd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d388(int *param_1,int param_2)

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


/* NanoCore 1.10, address 0x4003d41e.
 * REA evidence: ev_7abce39970017ef4003e83d5ce0e5b859e5bebbb18c436342b499917f2a4a275
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003d41e(int *param_1)

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


/* NanoCore 1.10, address 0x4003d446.
 * REA evidence: ev_16f5c7227822daceaaeaadd0071fce9a55629d85064ba4bb57702371d3382d75
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d446(undefined4 *param_1,undefined4 param_2)

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


/* NanoCore 1.10, address 0x4003d478.
 * REA evidence: ev_7d0a52ff389625a6301a865cc0ef3d1b71cbca12adc90f9841eedbe326327ad3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d478(int *param_1,int param_2)

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


/* NanoCore 1.10, address 0x4003d4a4.
 * REA evidence: ev_0cf76cacb819296b0251807a9f16b8964f3fdec0d96381743d65be7347c994c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003d4a4(undefined4 param_1)

{
  int iVar1;
  
  FUN_ram_4003d292(param_1,1);
  FUN_ram_4003d446(param_1,0);
  FUN_ram_4003d446(param_1,0);
  FUN_ram_4003f0ba(1);
  FUN_ram_4003d41e(param_1);
  FUN_ram_4003d41e(param_1);
  FUN_ram_4003d292(param_1,0);
  do {
    iVar1 = FUN_ram_4003d41e(param_1);
  } while (iVar1 != -1);
  return;
}


/* NanoCore 1.10, address 0x4003d4f4.
 * REA evidence: ev_e7c6d03635c9aced3fc9bac49c1b7bf716361f1eecfeed4d4d7405d250b10549
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003d52a) */
/* WARNING: Removing unreachable block (ram,0x4003d52e) */

undefined4 FUN_ram_4003d4f4(int *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (int *)0x0) {
    return 0x81020084;
  }
  puVar2 = (uint *)*param_1;
  iVar3 = FUN_ram_40036b2c(param_1[0xd] + 0x25);
  iVar4 = 1000000;
  if (param_2 == 0) {
    param_2 = 0xffffffff;
  }
  else {
    param_2 = (uint)(iVar3 * 10) / param_2;
  }
  uVar1 = (uint)(4 < (param_2 >> 4) % 10) + (param_2 >> 4) / 10;
  FUN_ram_4003d2b2(param_1);
  do {
    if ((puVar2[0x1f] & 1) == 0) {
      puVar2[3] = puVar2[3] | 0x80;
      *puVar2 = uVar1 & 0xff;
      puVar2[1] = (uVar1 & 0xffff) >> 8;
      puVar2[3] = puVar2[3] & 0xffffff7f;
      return 0;
    }
    iVar4 = iVar4 + -1;
    FUN_ram_4003d4a4(param_1);
  } while (iVar4 != 0);
  return 0x81020082;
}


/* NanoCore 1.10, address 0x4003d58e.
 * REA evidence: ev_aa4a476387d1e0de5d6ccaab191a5a443a3201c4c6234fc96e544034b9a3e74c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003d58e(undefined4 param_1,int *param_2)

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
          goto LAB_ram_4003d5b4;
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
LAB_ram_4003d5b4:
                    /* WARNING: Could not recover jumptable at 0x4003d5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}


/* NanoCore 1.10, address 0x4003d5ec.
 * REA evidence: ev_7dc12939977a3c80bbe1a716a9eb9b3022c3d1dfe26f4ebd13c989c753345a18
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003d5ec(int param_1)

{
  return *(uint *)(*(int *)(param_1 * 0x70 + 0x3007e704) + 8) & 0xf;
}


/* NanoCore 1.10, address 0x4003d606.
 * REA evidence: ev_fc135705107f91a09f4175ac9d3000db27098b4c7deb352ac17a3cbd8ea9e132
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003d606(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1 * 0x70;
  iVar3 = (param_1 + 0x18710) * 0x1000;
  *(int *)(iVar2 + 0x3007e704) = iVar3;
  iVar1 = param_1 + 0x4c;
  *(int *)(iVar2 + 0x3007e708) = iVar1;
  *(undefined4 *)(iVar2 + 0x3007e70c) = param_2;
  *(int *)(iVar2 + 0x3007e738) = param_1;
  if (param_3 == 0) {
    *(undefined4 *)(iVar3 + 4) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 4) = 0;
    FUN_ram_4003ec9e(iVar1,param_3,0);
    FUN_ram_4003ec56(iVar1);
    FUN_ram_4003ec56(*(undefined4 *)(iVar2 + 0x3007e708));
  }
  return iVar2 + 0x3007e704;
}


/* NanoCore 1.10, address 0x4003d666.
 * REA evidence: ev_4bfa16cd5d0450d8aeceae2f399cde27eea38b3b94b0250c149ac93cad702b28
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003d666(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    if (param_2 == 1) {
      if (param_3 == 0) {
        uVar1 = *(uint *)(iVar2 + 4) & 0xfffffffe;
LAB_ram_4003d67e:
        *(uint *)(iVar2 + 4) = uVar1;
        return param_3;
      }
      if (param_3 == 1) {
        uVar1 = *(uint *)(iVar2 + 4) | 1;
LAB_ram_4003d68e:
        *(uint *)(iVar2 + 4) = uVar1;
        return 0;
      }
    }
    else if (param_2 == 2) {
      if (param_3 == 0) {
        uVar1 = *(uint *)(iVar2 + 4) & 0xfffffffb;
        goto LAB_ram_4003d67e;
      }
      if (param_3 == 1) {
        uVar1 = *(uint *)(iVar2 + 4) | 4;
        goto LAB_ram_4003d68e;
      }
    }
    else if (param_2 == 0) {
      if (param_3 == 0) {
        uVar1 = *(uint *)(iVar2 + 4) & 0xfffffffd;
        goto LAB_ram_4003d67e;
      }
      if (param_3 == 1) {
        uVar1 = *(uint *)(iVar2 + 4) | 2;
        goto LAB_ram_4003d68e;
      }
    }
  }
  return -0x7efdff7c;
}


/* NanoCore 1.10, address 0x4003d6c6.
 * REA evidence: ev_f77044e6fa9ab1cf0de1d2a3e4e0cceb401278ec437bc1804204aeefbe975b36
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d6c6(int *param_1,int param_2)

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
  FUN_ram_4003d666(param_1,2,1);
  return 0;
}


/* NanoCore 1.10, address 0x4003d72c.
 * REA evidence: ev_943a89774ed5119dfd8c4484b74d39e5bea8c6b7556287306192af41347c542c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003d72c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003d4f4();
  if (-1 < iVar1) {
    if (param_1 == 0) {
      iVar1 = -0x7efdff7c;
    }
    else if (param_3 == 0) {
      iVar1 = FUN_ram_4003d6c6(param_1,param_4);
      if ((((-1 < iVar1) && (iVar1 = FUN_ram_4003d388(param_1,param_7), -1 < iVar1)) &&
          (iVar1 = FUN_ram_4003d2f6(param_1,param_5), -1 < iVar1)) &&
         ((iVar1 = FUN_ram_4003d32a(param_1,param_6), -1 < iVar1 &&
          (iVar1 = FUN_ram_4003d2b2(param_1), 0 < iVar1)))) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = -0x7efdff7a;
    }
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4003d7b2.
 * REA evidence: ev_b69048c20938e99d54aac3f753e5237dd169fa64e528913285c6376b845a2a1c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d7b2(int *param_1)

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


/* NanoCore 1.10, address 0x4003d7d0.
 * REA evidence: ev_033881eba8d87d1a3a5383fa3d505d5385d91e9225cecd213f1cdbde5449f3ca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d7d0(int *param_1)

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


/* NanoCore 1.10, address 0x4003d7f0.
 * REA evidence: ev_2f8f51404b13b51fd7c76b74eaa1840c57ac64487988e18c94a5a97b0c721e9b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d7f0(int *param_1)

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


/* NanoCore 1.10, address 0x4003d80c.
 * REA evidence: ev_8dca550760cd84dc019aa78f5e67754ecec13118ba61645824056e8453e8a5d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d80c(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *(uint *)(*param_1 + 0xa4) = *(uint *)(*param_1 + 0xa4) | 0x40;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.10, address 0x4003d82a.
 * REA evidence: ev_1a98254b13abb085a6f6aae3860d0f311ea18b752bdd2fbac0779d512cc1e75d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d82a(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *(uint *)(*param_1 + 0xa4) = *(uint *)(*param_1 + 0xa4) | 0x80;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.10, address 0x4003d848.
 * REA evidence: ev_26f84947b75bea31c49ed293a9fabb8c4fd664a93a6546ee4272dc19cf4bd533
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d848(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *(uint *)(*param_1 + 0xa4) = *(uint *)(*param_1 + 0xa4) & 0xffffff7f;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.10, address 0x4003d866.
 * REA evidence: ev_73486bced5472eb5e2023741680c14cf7b9fe3cbcfbfcbdffcb5cc7d5c8ce901
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d866(int *param_1)

{
  if (param_1 != (int *)0x0) {
    return *(undefined4 *)(*param_1 + 0x84);
  }
  return 0x81020084;
}


/* NanoCore 1.10, address 0x4003d87a.
 * REA evidence: ev_3c97f45018dca5f343eb1eebf279db71707f0c46879819153a897202a35c8331
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d87a(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *(undefined4 *)(*param_1 + 0x88) = 0xe5;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.10, address 0x4003d894.
 * REA evidence: ev_11cb7ce0ce8eba3b5a8b99b9bbeff9cfa9acbb6697b8748f1bf94ac867383722
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d894(int param_1,undefined4 param_2,undefined4 param_3)

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
    FUN_ram_4003d87a(param_1);
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
    iVar1 = FUN_ram_40038a8e();
    *(int *)(param_1 + 0x50) = iVar1;
    uVar2 = 0xffffffff;
    if (iVar1 != 0) {
      FUN_ram_40038a36(iVar1,&local_30);
      FUN_ram_40038a26(*(undefined4 *)(param_1 + 0x50),&LAB_ram_4003d230,param_1 + 0x50);
      FUN_ram_40038bcc(*(undefined4 *)(param_1 + 0x50),uStack_28,puStack_2c,
                       *(undefined4 *)(param_1 + 0x58),2);
      FUN_ram_4003d82a(param_1);
      FUN_ram_40038dac(*(undefined4 *)(param_1 + 0x50));
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x81020084;
}


/* NanoCore 1.10, address 0x4003d93a.
 * REA evidence: ev_70f1eead9c6a5659d1e4f46ebbdb88a8d400554901c751f97ba8a209b32e95ee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d93a(int param_1,undefined4 param_2,uint param_3)

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
    FUN_ram_4003d87a(param_1);
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
    iVar1 = FUN_ram_40038a8e();
    *(int *)(param_1 + 0x38) = iVar1;
    uVar2 = 0xffffffff;
    if (iVar1 != 0) {
      FUN_ram_40038a36(iVar1,&local_30);
      FUN_ram_40038a26(*(undefined4 *)(param_1 + 0x38),&LAB_ram_4003d256,param_1 + 0x38);
      FUN_ram_40038bcc(*(undefined4 *)(param_1 + 0x38),puStack_28,uStack_2c,
                       *(undefined4 *)(param_1 + 0x40),1);
      FUN_ram_4003d80c(param_1);
      FUN_ram_40038dac(*(undefined4 *)(param_1 + 0x38));
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x81020084;
}


/* NanoCore 1.10, address 0x4003d9e2.
 * REA evidence: ev_6d11af217ff3053d1ba380f6db116b6216e10daac7c02084068ece940b6ce602
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003d9e2(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x68) = param_2;
    *(undefined4 *)(param_1 + 0x6c) = param_3;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.10, address 0x4003d9f6.
 * REA evidence: ev_8016a690dc0aa25f5a14f7098e58c9c3f3e2d5bda28ce0867a4b7cfb4df4ebbf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003d9f6(void)

{
  fence();
  if (_DAT_ram_18c00014 != 0) {
    fence();
    _DAT_ram_3007ea84 = _DAT_ram_18c00204;
    fence();
    _DAT_ram_18c00204 = _DAT_ram_18c00204 | 0xf;
  }
  fence();
  if (_DAT_ram_18c00018 != 0) {
    fence();
    _DAT_ram_3007ea84 = _DAT_ram_18c00104;
    fence();
    _DAT_ram_18c00104 = _DAT_ram_18c00104 | 0xf;
  }
  fence();
  _DAT_ram_18c0000c = 0;
  FUN_ram_40004bce(_DAT_ram_3007ea88,1);
  return 0;
}


/* NanoCore 1.10, address 0x4003da6c.
 * REA evidence: ev_e4ba2df5c944422ff9b76b84bffc353963041e535d2cf4436c26ba23ab515e25
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003da6c(void)

{
  _DAT_ram_3007ea84 = 0;
  _DAT_ram_3007ea88 = 0;
  _DAT_ram_3007ea8c = 0;
  _DAT_ram_3007ea8c = FUN_ram_4000498c(s_aicos_mutex_ram_40096424,0);
  _DAT_ram_3007ea88 = FUN_ram_40004ba4(s_aicos_event_ram_40096418,0);
  FUN_ram_4003ec9e(0x3d,FUN_ram_4003d9f6,&DAT_ram_3007ea84);
  FUN_ram_4003ec56(0x3d);
  FUN_ram_4003ec56(0x3d);
  return 0;
}


/* NanoCore 1.10, address 0x4003dad2.
 * REA evidence: ev_f6fb13df211b0159d1758e155dbc6481acf3ce2e3923989484d1b2cb669eaf6f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003dad2(void)

{
  fence();
  fence();
  _DAT_ram_190000e8 = 0xa1caaaaa;
  return;
}


/* NanoCore 1.10, address 0x4003daf8.
 * REA evidence: ev_28b4b38f7ba3946ec0d6e62d9270ea146b615577902522669c8e7b6a953bad14
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003daf8(int param_1,int param_2)

{
  fence();
  *(int *)((param_1 + 0x1900004) * 0x10) = *(int *)(param_2 + 4) * 32000;
  return;
}


/* NanoCore 1.10, address 0x4003db16.
 * REA evidence: ev_76420d54fb375802e33340179865f4f04e868861b32c26acfe506363c8a203d0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003db16(int param_1,int param_2)

{
  fence();
  *(int *)(param_1 * 0x10 + 0x19000044) = *(int *)(param_2 + 8) * 32000;
  return;
}


/* NanoCore 1.10, address 0x4003db36.
 * REA evidence: ev_b008ad9a930b043658802fa8b5cc8d0e42f214a7123fe7c2137bad845ebb13df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003db36(int param_1,int param_2)

{
  fence();
  *(int *)(param_1 * 0x10 + 0x19000048) = *(int *)(param_2 + 0xc) * 32000;
  return;
}


/* NanoCore 1.10, address 0x4003db56.
 * REA evidence: ev_b8c410e44a43851d0133459937319242a64688577d3aeb31bc15cb5d229eadb6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003db7c) */
/* WARNING: Removing unreachable block (ram,0x4003db6c) */
/* WARNING: Removing unreachable block (ram,0x4003db8a) */

void FUN_ram_4003db56(int param_1,int param_2)

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


/* NanoCore 1.10, address 0x4003db92.
 * REA evidence: ev_d0dcdd35d8ddb155a8c7f002fd34407e02485af22e240760c4382a9648657e0d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4003db92(void)

{
  fence();
  return _DAT_ram_19000000 & 1;
}


/* NanoCore 1.10, address 0x4003dc10.
 * REA evidence: ev_f905778c422cb3c54553795ecdd87da87fc4b4fb2196f698bba9765fe0ac1f93
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003dc10(int param_1,int param_2)

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


/* NanoCore 1.10, address 0x4003dc38.
 * REA evidence: ev_e697612111dba6818555770bacc3efc0431ff2a5af324bb825d440eea9e13e19
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003dc38(undefined4 param_1)

{
  fence();
  _DAT_ram_19000008 = param_1;
  return;
}


/* NanoCore 1.10, address 0x4003dc46.
 * REA evidence: ev_4f599cb671cb10ad3caa793c055eeeba9a585a305a3f994a55af5d73d7aee1a1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003dc46(void)

{
  fence();
  return _DAT_ram_19000008;
}


/* NanoCore 1.10, address 0x4003dc54.
 * REA evidence: ev_67bd26a86691e5d7a9a69c0ba6fcaff266aa72913b59923cc035923e33128725
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003dc54(void)

{
  fence();
  fence();
  return;
}


/* NanoCore 1.10, address 0x4003dc68.
 * REA evidence: ev_ce06cc20618a38878efc393bdeee5e10cde603307760fc29dce34ce94dec41d2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003dc68(void)

{
  int iVar1;
  
  if (_DAT_ram_3007ea90 != 0) {
    return _DAT_ram_3007eaa0;
  }
  fence();
  if (_DAT_ram_1900f000 != 0) {
    _DAT_ram_3007ea94 = _DAT_ram_1900f000;
    iVar1 = 8;
    do {
      if ((*(uint *)(PTR_DAT_ram_30047bd0_ram_400966c0 + iVar1 * 4) & _DAT_ram_1900f000) != 0) {
        _DAT_ram_3007eaa0 = iVar1;
        return iVar1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return 0;
}


/* NanoCore 1.10, address 0x4003dcaa.
 * REA evidence: ev_e90da6defb844015c5f9a3c2de7c3ce745940d0ecd9aecb946fdb1a3125f8ed4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003dcaa(undefined4 param_1,int param_2)

{
  int iVar1;
  int aiStack_14 [2];
  
  aiStack_14[0] = param_2;
  iVar1 = (*(code *)PTR_FUN_ram_4003de3e_ram_400966c4)();
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_FUN_ram_4003de4c_ram_400966d0)(param_1,aiStack_14);
    if (-1 < iVar1) {
      return iVar1;
    }
  }
  else {
    (*(code *)PTR_FUN_ram_4003df34_ram_400966cc)(param_2,aiStack_14[0]);
  }
  return aiStack_14[0];
}


/* NanoCore 1.10, address 0x4003dcea.
 * REA evidence: ev_63b3aad34a4144b3b140699ce4ac1d1b58981aa9a578f8b5cfd58a074fb561a1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003dcea(int param_1)

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


/* NanoCore 1.10, address 0x4003dd36.
 * REA evidence: ev_4363f8c6993353252120eff67fd2627473b03a8f6d11c8dd6eab6737908d4480
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003dd36(void)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_ram_4003dc68();
  bVar1 = DAT_ram_19030100;
  if (_DAT_ram_3007ea90 == 0) {
    fence();
    FUN_ram_40031b48(s_Reset_flag__0x_x_ram_400964c8,_DAT_ram_3007ea94);
    _DAT_ram_3007ea98 = FUN_ram_4003dcaa(uVar2,bVar1 >> 4);
    _DAT_ram_3007ea90 = 1;
  }
  return _DAT_ram_3007ea98;
}


/* NanoCore 1.10, address 0x4003dd94.
 * REA evidence: ev_24b72990506b3754859cba29b88470f54b5c8e5582f868d5fc95e7faeefa9637
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003dd94(void)

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


/* NanoCore 1.10, address 0x4003dde6.
 * REA evidence: ev_15c521a66b3f04abb1b920579613e90c0b4dfdf7241643c4cc45fc6d3e387727
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003de00) */
/* WARNING: Removing unreachable block (ram,0x4003ddfc) */
/* WARNING: Removing unreachable block (ram,0x4003de0a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003dde6(undefined *param_1,uint param_2)

{
  if (param_2 == 0) {
    fence();
    param_2 = _DAT_ram_19050008;
  }
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_ram_400964dc;
  }
  FUN_ram_40031b48(s__s_time___d__03d_sec_ram_400964e0,param_1,param_2 / 4000000,
                   (param_2 % 4000000) / 4000);
  return;
}


/* NanoCore 1.10, address 0x4003de26.
 * REA evidence: ev_5169a88457981c084a17c56329d3374c482bd67004e35ac217330dae07bf5e1d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003de26(void)

{
  fence();
  FUN_ram_4003dde6(s_Startup_ram_400964f8,_DAT_ram_19050008);
  return;
}


/* NanoCore 1.10, address 0x4003de3e.
 * REA evidence: ev_7133dcb438610a34604fe28f9306e563a76e944f5055f0e0859c419310f87cea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003de3e(int param_1)

{
  if (param_1 != 4) {
    return 0;
  }
  return 4;
}


/* NanoCore 1.10, address 0x4003de4c.
 * REA evidence: ev_7e191ea20d2c7fdca756499c0f01a22b1837a664bde92c2ed1142965f274eaa8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003de4c(int param_1,int *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 == 2) {
    pcVar1 = s_Reset_reason__Command_Poweroff_ram_40096500;
LAB_ram_4003de66:
    FUN_ram_40031b5e(pcVar1);
    goto LAB_ram_4003de6a;
  }
  if (iVar2 == 3) {
    pcVar1 = s_Reset_reason__Suspend_ram_40096520;
    goto LAB_ram_4003de66;
  }
  if (iVar2 != 0) {
    return -0x16;
  }
  if (param_1 == 0) {
    FUN_ram_40031b5e(s_Reset_reason__Power_On_Reset_ram_40096538);
    return param_3;
  }
  FUN_ram_40031b48(s_Reset_action__Warm_Reset__reason_ram_40096558);
  switch(param_1) {
  case 1:
    FUN_ram_40031b5e(s_RTC_Power_Down_ram_4009657c);
    iVar2 = 0x10;
    break;
  case 2:
    FUN_ram_40031b5e(s_External_PIN_Reset_ram_4009658c);
    iVar2 = 0x11;
    break;
  case 3:
    FUN_ram_40031b5e(s_JTAG_Reset_ram_400965a0);
    iVar2 = 0x12;
    break;
  default:
    FUN_ram_40031b48(s_Unknown__d__ram_400965dc,param_1);
    goto LAB_ram_4003de6a;
  case 6:
    FUN_ram_40031b5e(s_OTP_Reset_ram_400965ac);
    iVar2 = 0x13;
    break;
  case 7:
    pcVar1 = s_Undervoltage_Reset_ram_400965b8;
    goto LAB_ram_4003df12;
  case 8:
    pcVar1 = s_Brown_Out_Reset_ram_400965cc;
LAB_ram_4003df12:
    FUN_ram_40031b5e(pcVar1);
    iVar2 = 0x14;
  }
  *param_2 = iVar2;
LAB_ram_4003de6a:
  return *param_2;
}


/* NanoCore 1.10, address 0x4003df34.
 * REA evidence: ev_96b4c5d63500a42956393edbfc2008f9f4865cbd842b7b883da132acb32e235a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003df34(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  
  FUN_ram_40031b48(s_Reset_action__Watchdog_Reset__re_ram_4009660c);
  switch(param_1) {
  case 1:
    pcVar1 = s_Command_Reboot_ram_40096644;
    break;
  default:
    FUN_ram_40031b48(s_Unknown__d__ram_400965dc,param_2);
    return;
  case 4:
    pcVar1 = s_Upgrade_Mode_ram_40096634;
    break;
  case 10:
    pcVar1 = s_Software_Lockup_ram_40096654;
    break;
  case 0xb:
    pcVar1 = s_Hardware_Lockup_ram_40096664;
    break;
  case 0xc:
    pcVar1 = s_Kernel_Panic_ram_40096674;
    break;
  case 0xd:
    pcVar1 = s_Ramdump_ram_40096684;
  }
  FUN_ram_40031b5e(pcVar1);
  return;
}


/* NanoCore 1.10, address 0x4003dfbc.
 * REA evidence: ev_30fb97e6bf6071a844c4f71dc259eec6730be0443bd34935c08dd2e2ef9cb422
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003dfbc(int param_1,int param_2,uint param_3,code *param_4)

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


