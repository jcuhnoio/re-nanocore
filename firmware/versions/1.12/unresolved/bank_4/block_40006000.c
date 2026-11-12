/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40006000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40006050.
 * REA evidence: ev_4ce85f07e3de2e4b49ecf73a69ea1a2895496f4d60cb3eeb25acc8ddc68ab977
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006050(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40005648(_DAT_ram_3004dce0);
  iVar1 = *(int *)(&DAT_ram_3004dbe0 + (iVar1 + -1) * 8);
  _DAT_ram_3004dbd0 = iVar1 + -0x1c;
  FUN_ram_40005ffe();
  *(undefined1 *)(iVar1 + 0x20) = 3;
  FUN_ram_400000b2(iVar1 + 8);
  return;
}


/* NanoCore 1.12, address 0x40006092.
 * REA evidence: ev_c0f11c0f83fc8f65d306b06c78d5083dedd17fbff883580d6e50b1cb7ed8b819
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006092(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  
  uVar5 = FUN_ram_400002f4();
  if ((_DAT_ram_3004dbd8 == 0) && (_DAT_ram_3004dce0 != 0)) {
    iVar6 = FUN_ram_40005648();
    iVar3 = _DAT_ram_3004dbd0;
    uVar7 = iVar6 - 1;
    bVar1 = *(byte *)(_DAT_ram_3004dbd0 + 0x3c);
    iVar4 = *(int *)(&DAT_ram_3004dbe0 + uVar7 * 8) + -0x1c;
    bVar2 = false;
    iVar6 = iVar4;
    if ((bVar1 & 7) == 3) {
      iVar6 = _DAT_ram_3004dbd0;
      if (((uVar7 <= *(byte *)(_DAT_ram_3004dbd0 + 0x3d)) &&
          (bVar2 = true, iVar6 = iVar4, *(byte *)(_DAT_ram_3004dbd0 + 0x3d) == uVar7)) &&
         ((bVar1 & 8) == 0)) {
        bVar2 = false;
        iVar6 = _DAT_ram_3004dbd0;
      }
      *(byte *)(_DAT_ram_3004dbd0 + 0x3c) = bVar1 & 0xf7;
    }
    if (iVar3 == iVar6) {
      FUN_ram_40005ffe(iVar3);
      *(byte *)(_DAT_ram_3004dbd0 + 0x3c) = *(byte *)(_DAT_ram_3004dbd0 + 0x3c) & 0xf8 | 3;
    }
    else {
      DAT_ram_3004dbcc = (undefined1)uVar7;
      _DAT_ram_3004dbd0 = iVar6;
      if (_DAT_ram_3004dbd4 != (code *)0x0) {
        (*_DAT_ram_3004dbd4)(iVar3,iVar6);
      }
      if (bVar2) {
        FUN_ram_40005f7a(iVar3);
      }
      FUN_ram_40005ffe(iVar6);
      *(byte *)(iVar6 + 0x3c) = *(byte *)(iVar6 + 0x3c) & 0xf8 | 3;
      pcVar8 = *(char **)(iVar6 + 0x30);
      if (((*pcVar8 != '#') || (*(char **)(iVar6 + 0x24) <= pcVar8)) ||
         (pcVar8 + *(int *)(iVar6 + 0x34) < *(char **)(iVar6 + 0x24))) {
        iVar4 = FUN_ram_400002f4();
        do {
        } while (iVar4 != 0);
      }
      if (DAT_ram_3004daf8 == '\0') {
        if (_DAT_ram_3004dbdc != (code *)0x0) {
          (*_DAT_ram_3004dbdc)(iVar3);
        }
        FUN_ram_4000010a(iVar3 + 0x24,iVar6 + 0x24);
      }
      else {
        FUN_ram_4000010a(iVar3 + 0x24);
      }
    }
  }
  FUN_ram_400002fa(uVar5);
  return;
}


/* NanoCore 1.12, address 0x400061cc.
 * REA evidence: ev_cda1a59b80552c4260a39f3295eba0d8d8ba9c4e145eb793fb12eeaa784b3c00
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400061cc(void)

{
  FUN_ram_400002f4();
  _DAT_ram_3004dbd8 = _DAT_ram_3004dbd8 + 1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x400061ee.
 * REA evidence: ev_3f9304ed1ef5cfe4e86f99765c0d5a740afc107a7cc0c793ecf593649aeb8b40
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400061ee(void)

{
  int iVar1;
  
  FUN_ram_400002f4();
  iVar1 = (_DAT_ram_3004dbd8 - 1) * 0x10000;
  _DAT_ram_3004dbd8 = (ushort)((uint)iVar1 >> 0x10);
  if (0 < iVar1 >> 0x10) {
    FUN_ram_400002fa();
    return;
  }
  _DAT_ram_3004dbd8 = 0;
  FUN_ram_400002fa();
  if (_DAT_ram_3004dbd0 != 0) {
    FUN_ram_40006092();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4000623a.
 * REA evidence: ev_5f95dad6ca1ee2e73500d9ef56933b92acfd5f1a590907d3cd913a81a67cce23
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000623a(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_ram_3004dbd0;
  uVar2 = FUN_ram_400002f4();
  FUN_ram_40005ffe(iVar1);
  FUN_ram_4000666c(iVar1 + 0x54);
  *(undefined1 *)(iVar1 + 0x3c) = 4;
  FUN_ram_40004660(iVar1);
  FUN_ram_400002fa(uVar2);
  FUN_ram_40006092();
  return;
}


/* NanoCore 1.12, address 0x40006276.
 * REA evidence: ev_c4b2d7fd550a4e665f0cf15adaa023962bd186266650703bde5c9faa984575f4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_40006276(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined1 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x34) = param_5;
  FUN_ram_40004f92(param_4,0x23,param_5);
  uVar1 = FUN_ram_40006adc(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                           *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) + -4,FUN_ram_4000623a
                          );
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined1 *)(param_1 + 0x3d) = param_6;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = param_7;
  *(undefined4 *)(param_1 + 0x50) = param_7;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  FUN_ram_4000662a(param_1 + 0x54,param_1,FUN_ram_40006310,param_1,0,0);
  if (_DAT_ram_3004dce4 != (code *)0x0) {
    (*_DAT_ram_3004dce4)(param_1);
  }
  return 0;
}


/* NanoCore 1.12, address 0x40006310.
 * REA evidence: ev_e9fcb7ffddf7ad7ef14ecc4c8da00f752e88f75dff9984a363edef39b9a8113a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40006310(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = FUN_ram_400002f4();
  iVar2 = *(int *)(param_1 + 0x1c);
  piVar3 = *(int **)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x38) = 0xfffffffe;
  *(int **)(iVar2 + 4) = piVar3;
  *piVar3 = iVar2;
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  FUN_ram_40005f7a(param_1);
  FUN_ram_400002fa(uVar1);
  FUN_ram_40006092();
  return;
}


/* NanoCore 1.12, address 0x4000634c.
 * REA evidence: ev_1b66b6a6de2e3d622e89b8c80175dae0d24c39c9d2e2248ec997e9de203d7645
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000634c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_ram_40005da0(param_1,1,param_2);
  FUN_ram_40006276(param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


/* NanoCore 1.12, address 0x40006382.
 * REA evidence: ev_91b6ef1449754a2db25157bd96fd0c031bbfc10c3e4a72a30271186b57da8c81
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006382(void)

{
  return _DAT_ram_3004dbd0;
}


/* NanoCore 1.12, address 0x4000638c.
 * REA evidence: ev_24528bbb7afe2a6bec6e3263e210b9ad505f5e865fc2bbbe265c2d104cc93151
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000638c(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x3c) & 7) != 4) {
    if ((*(byte *)(param_1 + 0x3c) & 7) != 0) {
      FUN_ram_40005ffe();
    }
    uVar1 = FUN_ram_400002f4();
    FUN_ram_4000666c(param_1 + 0x54);
    *(undefined1 *)(param_1 + 0x3c) = 4;
    FUN_ram_40004660(param_1);
    FUN_ram_400002fa(uVar1);
    return 0;
  }
  return 0;
}


/* NanoCore 1.12, address 0x400063d6.
 * REA evidence: ev_f77f258bd928d646e63dcacc11676348ff250bfefb17d1be043aab742e55a402
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400063d6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40005e4a(1,param_1);
  if (iVar1 != 0) {
    iVar2 = FUN_ram_4000559c(param_4);
    if (iVar2 == 0) {
      FUN_ram_40005eb8(iVar1);
      iVar1 = 0;
    }
    else {
      FUN_ram_40006276(iVar1,param_2,param_3,iVar2,param_4,param_5,param_6);
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4000642e.
 * REA evidence: ev_4dd877bf7ae5d105367c280ff57eed457e98da1452e6f0602967b2b3a5a445c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 thunk_FUN_ram_4000638c(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x3c) & 7) != 4) {
    if ((*(byte *)(param_1 + 0x3c) & 7) != 0) {
      FUN_ram_40005ffe();
    }
    uVar1 = FUN_ram_400002f4();
    FUN_ram_4000666c(param_1 + 0x54);
    *(undefined1 *)(param_1 + 0x3c) = 4;
    FUN_ram_40004660(param_1);
    FUN_ram_400002fa(uVar1);
    return 0;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40006430.
 * REA evidence: ev_9147e15bb2290d532ce677879a13657e3c3b33a126c5b545883cad220296a1f4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006430(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x3c) & 5) == 1) {
    uVar1 = FUN_ram_400002f4();
    FUN_ram_40005ffe(param_1);
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xf8 | 2;
    FUN_ram_4000677c(param_1 + 0x54);
    FUN_ram_400002fa(uVar1);
    if (_DAT_ram_3004dcec != (code *)0x0) {
      (*_DAT_ram_3004dcec)(param_1);
    }
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4000648c.
 * REA evidence: ev_0852230f6e52b00a234c5c9a3625f0f5cbac339bfd1d53a6562bc72b14aa04d4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000648c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  iVar1 = _DAT_ram_3004dbd0;
  uStack_14 = param_1;
  uVar2 = FUN_ram_400002f4();
  *(undefined4 *)(iVar1 + 0x38) = 0;
  FUN_ram_40006430(iVar1);
  FUN_ram_400067c6(iVar1 + 0x54,0,&uStack_14);
  FUN_ram_400066a2(iVar1 + 0x54);
  FUN_ram_400002fa(uVar2);
  FUN_ram_40006092();
  if (*(int *)(iVar1 + 0x38) == -2) {
    *(undefined4 *)(iVar1 + 0x38) = 0;
  }
  return *(undefined4 *)(iVar1 + 0x38);
}


/* NanoCore 1.12, address 0x400064e2.
 * REA evidence: ev_ec7f7462769a93a17336b8133bd2be3cf37b8aa8d514a1de4963b779b084023b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_ram_4000648c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  iVar1 = _DAT_ram_3004dbd0;
  uStack_14 = param_1;
  uVar2 = FUN_ram_400002f4();
  *(undefined4 *)(iVar1 + 0x38) = 0;
  FUN_ram_40006430(iVar1);
  FUN_ram_400067c6(iVar1 + 0x54,0,&uStack_14);
  FUN_ram_400066a2(iVar1 + 0x54);
  FUN_ram_400002fa(uVar2);
  FUN_ram_40006092();
  if (*(int *)(iVar1 + 0x38) == -2) {
    *(undefined4 *)(iVar1 + 0x38) = 0;
  }
  return *(undefined4 *)(iVar1 + 0x38);
}


/* NanoCore 1.12, address 0x400064e4.
 * REA evidence: ev_4d129b8c5cad2cf091187a2fb30e3b83269a37c3378c7940fa9d18ebc31d1491
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400064e4(void)

{
  FUN_ram_400043ae();
  FUN_ram_4000648c();
  return;
}


/* NanoCore 1.12, address 0x400064f2.
 * REA evidence: ev_3f31f3b8dcc3c93d4cc3e16b849c7de407f24777b1622f08e5fc7777589367a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400064f2(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if ((*(byte *)(param_1 + 0x3c) & 7) == 2) {
    uVar1 = FUN_ram_400002f4();
    iVar2 = *(int *)(param_1 + 0x1c);
    piVar3 = *(int **)(param_1 + 0x20);
    *(int **)(iVar2 + 4) = piVar3;
    *piVar3 = iVar2;
    *(int *)(param_1 + 0x20) = param_1 + 0x1c;
    *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
    FUN_ram_4000677c(param_1 + 0x54);
    FUN_ram_40005f7a(param_1);
    FUN_ram_400002fa(uVar1);
    if (_DAT_ram_3004dce8 != (code *)0x0) {
      (*_DAT_ram_3004dce8)(param_1);
    }
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40006550.
 * REA evidence: ev_9059267268064cc5b31b8ad1daeab3647ac696e33a4f5424a6392821cb9a867e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006550(int param_1)

{
  *(int *)(param_1 + 0x40) = 1 << (*(byte *)(param_1 + 0x3d) & 0x1f);
  *(undefined1 *)(param_1 + 0x3c) = 2;
  FUN_ram_400064f2();
  if (_DAT_ram_3004dbd0 != 0) {
    FUN_ram_40006092();
  }
  return 0;
}


/* NanoCore 1.12, address 0x4000657e.
 * REA evidence: ev_da166b7de143e8e68c8a24b9259687c878e0204e22ff19cca81977630167a0a0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000657e(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    FUN_ram_40005ef4();
    uVar2 = FUN_ram_4000638c(param_1);
    FUN_ram_40006092();
  }
  else {
    if (param_2 == 2) {
      uVar2 = FUN_ram_400002f4();
      if ((*(byte *)(param_1 + 0x3c) & 7) == 1) {
        FUN_ram_40005ffe(param_1);
        bVar1 = *param_3;
        *(byte *)(param_1 + 0x3d) = bVar1;
        *(int *)(param_1 + 0x40) = 1 << (bVar1 & 0x1f);
        FUN_ram_40005f7a(param_1);
      }
      else {
        bVar1 = *param_3;
        *(byte *)(param_1 + 0x3d) = bVar1;
        *(int *)(param_1 + 0x40) = 1 << (bVar1 & 0x1f);
      }
      FUN_ram_400002fa(uVar2);
    }
    else if (param_2 == 0) {
      uVar2 = FUN_ram_40006550();
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40006618.
 * REA evidence: ev_97ac70a903b59dd5bb32cc094abfe8b176d07db5597c57cf3087dc82e4c9a4c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40006618(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  piVar2 = *(int **)(param_1 + 0x20);
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  return;
}


/* NanoCore 1.12, address 0x4000662a.
 * REA evidence: ev_0e67d058dac63b742deeac9e95cf9f3658b40b14e652ee83f130e9078bc298ad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000662a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,byte param_6)

{
  FUN_ram_40005da0(param_1,10,param_2);
  *(byte *)(param_1 + 0x11) = param_6 & 0xfe;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = param_5;
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  return;
}


/* NanoCore 1.12, address 0x4000666c.
 * REA evidence: ev_0d19a45b2cf22ea62387e69aba71d3a50e838a88cb5dbb0b83cb0af1fc39d69b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000666c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  FUN_ram_40006618(param_1);
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
  FUN_ram_400002fa(uVar1);
  FUN_ram_40005e14(param_1);
  return 0;
}


/* NanoCore 1.12, address 0x400066a2.
 * REA evidence: ev_b12fc8937268424e749de7ef5e2d819a231bff4e6651abd9af0b1be1b73e1031
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400066a2(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  uVar3 = FUN_ram_400002f4();
  FUN_ram_40006618(param_1);
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
  if (_DAT_ram_3004dbc4 != (code *)0x0) {
    (*_DAT_ram_3004dbc4)(param_1);
  }
  iVar4 = FUN_ram_40004346();
  bVar1 = *(byte *)(param_1 + 0x11);
  iVar4 = iVar4 + *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x30) = iVar4;
  piVar5 = (int *)&DAT_ram_3004dcf0;
  if ((bVar1 & 4) == 0) {
    piVar5 = (int *)&DAT_ram_3004dcf8;
  }
  piVar7 = piVar5;
  do {
    piVar6 = piVar7;
    piVar7 = (int *)*piVar6;
    if ((int *)piVar5[1] == piVar6) break;
  } while ((iVar4 == piVar7[5]) || (0x7ffffffe < (uint)(piVar7[5] - iVar4)));
  _DAT_ram_3004df90 = _DAT_ram_3004df90 + 1;
  piVar7[1] = param_1 + 0x1c;
  *(int **)(param_1 + 0x1c) = piVar7;
  *piVar6 = param_1 + 0x1c;
  *(int **)(param_1 + 0x20) = piVar6;
  *(byte *)(param_1 + 0x11) = bVar1 | 1;
  bVar2 = false;
  if (((bVar1 & 4) != 0) && ((DAT_ram_3004a954 == '\x01' && ((DAT_ram_3004dd3c & 7) == 2)))) {
    FUN_ram_400064f2();
    bVar2 = true;
  }
  FUN_ram_400002fa(uVar3);
  if (bVar2) {
    FUN_ram_40006092();
  }
  return 0;
}


/* NanoCore 1.12, address 0x4000677c.
 * REA evidence: ev_a16a99c384957dd0e9dca5b736834d8e1261351faf6bb2862ecfe4412491b9ad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000677c(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    if (_DAT_ram_3004dbc0 != (code *)0x0) {
      (*_DAT_ram_3004dbc0)();
    }
    uVar1 = FUN_ram_400002f4();
    FUN_ram_40006618(param_1);
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
    FUN_ram_400002fa(uVar1);
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x400067c6.
 * REA evidence: ev_35ca6d1546623b97d9d079b01d43756e40b32db937153d97edac48c8f291a3cf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400067c6(int param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  
  FUN_ram_400002f4();
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x2c) = *param_3;
    goto switchD_ram_400067ee_default;
  case 1:
    uVar2 = *(undefined4 *)(param_1 + 0x2c);
    break;
  case 2:
    bVar1 = *(byte *)(param_1 + 0x11) & 0xfd;
    goto LAB_ram_4000680e;
  case 3:
    bVar1 = *(byte *)(param_1 + 0x11) | 2;
LAB_ram_4000680e:
    *(byte *)(param_1 + 0x11) = bVar1;
    goto switchD_ram_400067ee_default;
  case 4:
    if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
      *param_3 = 0;
      goto switchD_ram_400067ee_default;
    }
    uVar2 = 1;
    break;
  case 5:
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    break;
  default:
    goto switchD_ram_400067ee_default;
  }
  *param_3 = uVar2;
switchD_ram_400067ee_default:
  FUN_ram_400002fa();
  return 0;
}


/* NanoCore 1.12, address 0x40006834.
 * REA evidence: ev_26441d301d4c5335594a2716fae49f8c61c105912495aac68dcb0843a1a18898
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006834(void)

{
  int ****ppppiVar1;
  int iVar2;
  undefined4 uVar3;
  int ***pppiVar4;
  int ***pppiVar5;
  int ****ppppiVar6;
  int ***local_38;
  int ***pppiStack_34;
  
  local_38 = (int ***)&local_38;
  pppiStack_34 = (int ***)&local_38;
  iVar2 = FUN_ram_40004346();
  uVar3 = FUN_ram_400002f4();
  while ((ppppiVar1 = _DAT_ram_3004dcf8, _DAT_ram_3004dcf8 != (int ****)&DAT_ram_3004dcf8 &&
         (ppppiVar6 = _DAT_ram_3004dcf8 + -7, (uint)(iVar2 - (int)_DAT_ram_3004dcf8[5]) < 0x7fffffff
         ))) {
    if (_DAT_ram_3004df94 != (code *)0x0) {
      (*_DAT_ram_3004df94)(ppppiVar6);
    }
    FUN_ram_40006618(ppppiVar6);
    if ((*(byte *)((int)ppppiVar1 + -0xb) & 2) == 0) {
      *(byte *)((int)ppppiVar1 + -0xb) = *(byte *)((int)ppppiVar1 + -0xb) & 0xfe;
    }
    pppiVar4 = ppppiVar1[3];
    local_38[1] = (int **)ppppiVar1;
    *ppppiVar1 = local_38;
    local_38 = (int ***)ppppiVar1;
    ppppiVar1[1] = (int ***)&local_38;
    (*(code *)ppppiVar1[2])(pppiVar4);
    iVar2 = FUN_ram_40004346();
    if (_DAT_ram_3004df98 != (code *)0x0) {
      (*_DAT_ram_3004df98)(ppppiVar6);
    }
    if ((int ****)local_38 != &local_38) {
      pppiVar4 = *ppppiVar1;
      pppiVar5 = ppppiVar1[1];
      pppiVar4[1] = (int **)pppiVar5;
      *pppiVar5 = (int **)pppiVar4;
      ppppiVar1[1] = (int ***)ppppiVar1;
      *ppppiVar1 = (int ***)ppppiVar1;
      if ((*(byte *)((int)ppppiVar1 + -0xb) & 3) == 3) {
        *(byte *)((int)ppppiVar1 + -0xb) = *(byte *)((int)ppppiVar1 + -0xb) & 0xfe;
        FUN_ram_400066a2(ppppiVar6);
      }
    }
  }
  FUN_ram_400002fa(uVar3);
  return;
}


/* NanoCore 1.12, address 0x40006922.
 * REA evidence: ev_c01ab36548e359363a476eaa2509722c87784c4106bd90de7163aa2e71ea3577
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006922(void)

{
  int ****ppppiVar1;
  undefined4 uVar2;
  int iVar3;
  int ***pppiVar4;
  int ***pppiVar5;
  int ****ppppiVar6;
  int ***local_38;
  int ***pppiStack_34;
  
  local_38 = (int ***)&local_38;
  pppiStack_34 = (int ***)&local_38;
  uVar2 = FUN_ram_400002f4();
  while (ppppiVar1 = _DAT_ram_3004dcf0, _DAT_ram_3004dcf0 != (int ****)&DAT_ram_3004dcf0) {
    iVar3 = FUN_ram_40004346();
    ppppiVar6 = ppppiVar1 + -7;
    if (0x7ffffffe < (uint)(iVar3 - (int)ppppiVar1[5])) break;
    if (_DAT_ram_3004df94 != (code *)0x0) {
      (*_DAT_ram_3004df94)(ppppiVar6);
    }
    FUN_ram_40006618(ppppiVar6);
    if ((*(byte *)((int)ppppiVar1 + -0xb) & 2) == 0) {
      *(byte *)((int)ppppiVar1 + -0xb) = *(byte *)((int)ppppiVar1 + -0xb) & 0xfe;
    }
    local_38[1] = (int **)ppppiVar1;
    *ppppiVar1 = local_38;
    ppppiVar1[1] = (int ***)&local_38;
    DAT_ram_3004a954 = 0;
    local_38 = (int ***)ppppiVar1;
    FUN_ram_400002fa(uVar2);
    (*(code *)ppppiVar1[2])(ppppiVar1[3]);
    if (_DAT_ram_3004df98 != (code *)0x0) {
      (*_DAT_ram_3004df98)(ppppiVar6);
    }
    uVar2 = FUN_ram_400002f4();
    DAT_ram_3004a954 = 1;
    if ((int ****)local_38 != &local_38) {
      pppiVar4 = *ppppiVar1;
      pppiVar5 = ppppiVar1[1];
      pppiVar4[1] = (int **)pppiVar5;
      *pppiVar5 = (int **)pppiVar4;
      ppppiVar1[1] = (int ***)ppppiVar1;
      *ppppiVar1 = (int ***)ppppiVar1;
      if ((*(byte *)((int)ppppiVar1 + -0xb) & 3) == 3) {
        *(byte *)((int)ppppiVar1 + -0xb) = *(byte *)((int)ppppiVar1 + -0xb) & 0xfe;
        FUN_ram_400066a2(ppppiVar6);
      }
    }
  }
  FUN_ram_400002fa(uVar2);
  return;
}


/* NanoCore 1.12, address 0x40006a2c.
 * REA evidence: ev_bfb42b3e34f8735f9cbd4c6e70ffe1bc7f1fd7f2639358b66ab3f8639b7aa2e5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006a2c(void)

{
  int iVar1;
  int iVar2;
  
  do {
    FUN_ram_400002f4();
    if (_DAT_ram_3004dcf0 == &DAT_ram_3004dcf0) {
      FUN_ram_400002fa();
      FUN_ram_40006382();
      FUN_ram_40006430();
      FUN_ram_40006092();
    }
    else {
      iVar1 = *(int *)(_DAT_ram_3004dcf0 + 0x14);
      FUN_ram_400002fa();
      iVar2 = FUN_ram_40004346();
      if ((uint)(iVar1 - iVar2) < 0x7fffffff) {
        thunk_FUN_ram_4000648c();
      }
    }
    FUN_ram_40006922();
  } while( true );
}


/* NanoCore 1.12, address 0x40006a80.
 * REA evidence: ev_6fa64b5c2b4c8d31f5877d2670a0ea8c03973559cc7fa7ec3f6dc80bf8d01441
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006a80(void)

{
  _DAT_ram_3004dcfc = &DAT_ram_3004dcf8;
  _DAT_ram_3004dcf8 = &DAT_ram_3004dcf8;
  return;
}


/* NanoCore 1.12, address 0x40006a8e.
 * REA evidence: ev_b787a8ec53c9ccfc6bd07ad84fd01bbe5eb1925a70f29f4ef8279a0b6cdae8bb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006a8e(void)

{
  _DAT_ram_3004dcf4 = &DAT_ram_3004dcf0;
  _DAT_ram_3004dcf0 = &DAT_ram_3004dcf0;
  FUN_ram_4000634c(0x3004dd00,s_timer_ram_400961b4,FUN_ram_40006a2c,0,0x3004dd90,0x200,4,10);
  FUN_ram_40006550(0x3004dd00);
  return;
}


/* NanoCore 1.12, address 0x40006adc.
 * REA evidence: ev_786f815f382c126caa5ec8246f5902a4f76d1889f85fac2b3a11acb36373b919
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40006adc(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(param_3 + 4U & 0xfffffff0);
  for (puVar2 = puVar1 + -0x62; puVar1 != puVar2; puVar2 = puVar2 + 1) {
    *puVar2 = 0xdeadbeef;
  }
  puVar1[-0x61] = param_4;
  puVar1[-0x58] = param_2;
  puVar1[-0x62] = param_1;
  puVar1[-0x60] = 0x7880;
  return;
}


/* NanoCore 1.12, address 0x40006b14.
 * REA evidence: ev_1ba2fd9d0ce5b6e8380557b9ccbe9f0b9b43fadbf3ddd3687f9bc58dd2419856
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40006b14(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4000559c(param_2);
  if (iVar1 == 0) {
    *param_1 = 0xc;
  }
  return;
}


/* NanoCore 1.12, address 0x40006b30.
 * REA evidence: ev_9a0ddc896ada7a11477d6f0b29578ab6018110016cda2d595fe8785a7d8138a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40006b30(undefined4 param_1,undefined4 param_2)

{
  FUN_ram_400055d4(param_2);
  return;
}


/* NanoCore 1.12, address 0x40006b36.
 * REA evidence: ev_d7243015ee3851589101ab483d10ff75394c59f24a6dda30431ebab75054fa4d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * thunk_FUN_ram_40004f70(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_ram_40004d36();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40006382(), iVar1 != 0)) {
    puVar2 = (undefined1 *)(iVar1 + 0x38);
  }
  else {
    puVar2 = &DAT_ram_3004dafc;
  }
  return puVar2;
}


/* NanoCore 1.12, address 0x40006b3a.
 * REA evidence: ev_4e6942d5ec27cbe7530aa635fd7ea1c5d0057fcb2be74ee71f676af34b217abb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40006b3a(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40006c8c();
  if ((iVar1 < 0) || (iVar1 = FUN_ram_40006d74(), iVar1 < 1)) {
    DAT_ram_3004dfa8 = '\0';
  }
  else if (DAT_ram_3004dfa8 == '\0') {
    DAT_ram_3004dfa8 = '\x01';
  }
  return;
}


/* NanoCore 1.12, address 0x40006b6e.
 * REA evidence: ev_53772450371c7ddca5a23d80ea1ee2960b1e2a48ce767dfbb611900ee3896df5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40006b6e(void)

{
  return DAT_ram_3004dfa8;
}


/* NanoCore 1.12, address 0x40006b78.
 * REA evidence: ev_2a27ed1b7364b28f24d9d6188e6941e2931d74f3b91693c9275a1d8915bdab7b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40006b78(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int aiStack_120 [16];
  int iStack_e0;
  undefined4 uStack_dc;
  
  iVar3 = FUN_ram_40006cbe();
  if (((iVar3 != 0) && (iVar4 = (**(code **)(iVar3 + 0x28))(0,aiStack_120,0x100), 0 < iVar4)) &&
     (aiStack_120[0] == 0x20434941)) {
    if (iStack_e0 == 0) {
      return 0;
    }
    iVar4 = FUN_ram_40002f1a(uStack_dc);
    if (iVar4 == 0) {
      return -5;
    }
    iVar3 = (**(code **)(iVar3 + 0x28))(iStack_e0,iVar4,uStack_dc);
    if (0 < iVar3) {
      pcVar5 = (char *)FUN_ram_4000741c(iVar4);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = s_spi0_0_152k_spl__8k_env__848k_os_ram_400961bc;
      }
      iVar6 = FUN_ram_4000735c(pcVar5);
      iVar2 = 0;
      for (iVar3 = iVar6; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xa8)) {
        iVar2 = iVar2 + 1;
      }
      iVar7 = FUN_ram_40002f1a(iVar2 << 6);
      *param_2 = iVar7;
      iVar7 = iVar7 + 4;
      iVar3 = iVar6;
      while (iVar3 != 0) {
        *(undefined4 *)(iVar7 + -4) = 0x45503130;
        FUN_ram_40003388(iVar7,iVar3);
        FUN_ram_40003388(iVar7 + 0x18,param_1);
        *(undefined4 *)(iVar7 + 0x30) = *(undefined4 *)(iVar3 + 0x98);
        puVar1 = (undefined4 *)(iVar3 + 0xa0);
        iVar3 = *(int *)(iVar3 + 0xa8);
        *(undefined4 *)(iVar7 + 0x34) = *puVar1;
        iVar7 = iVar7 + 0x40;
      }
      FUN_ram_40002f28(iVar4);
      FUN_ram_4000736e(iVar6);
      return iVar2;
    }
  }
  return -1;
}


/* NanoCore 1.12, address 0x40006c8c.
 * REA evidence: ev_107504db5d8ce2df1283dc156acf9b6c6ab1d24137460141125a8e86f87d6c2c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40006c8c(void)

{
  if (DAT_ram_3004dfa9 == '\0') {
    if (PTR_FUN_ram_4000719e_ram_3004aafc != (undefined *)0x0) {
      (*(code *)PTR_FUN_ram_4000719e_ram_3004aafc)();
    }
    DAT_ram_3004dfa9 = '\x01';
  }
  return 0;
}


/* NanoCore 1.12, address 0x40006cbe.
 * REA evidence: ev_1ba34feb06b6d601cf66140668e43deff2cd5fd715453b819ed70b6b572b6502
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_40006cbe(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_ram_40003468(param_1,s_norflash0_ram_3004aad8,0x18);
  if (iVar1 == 0) {
    pcVar2 = s_norflash0_ram_3004aad8;
  }
  else {
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}


/* NanoCore 1.12, address 0x40006ce4.
 * REA evidence: ev_57ad3849f424d54ece5f58f6b159cc4c8d951723a1f5f748bdb55bb7cd8cc0e8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006ce4(int param_1)

{
  return *(undefined4 *)(_DAT_ram_3004dfac + (param_1 - _DAT_ram_3004dfb0 >> 6) * 4);
}


/* NanoCore 1.12, address 0x40006cfe.
 * REA evidence: ev_ea11c3bfd45e15f7a32415fa40f575760fc98129a1eb1293b070834ad0011991
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006cfe(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (_DAT_ram_3004dfac != 0) {
    FUN_ram_400055d4();
  }
  _DAT_ram_3004dfac = FUN_ram_4000559c(param_2 << 2);
  uVar3 = 0xfffffffe;
  if (_DAT_ram_3004dfac != 0) {
    param_1 = param_1 + 0x1c;
    for (iVar1 = 0; param_2 != iVar1; iVar1 = iVar1 + 1) {
      iVar2 = FUN_ram_40006cbe(param_1);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x1c) <= *(int *)(param_1 + 0x18)) {
          _DAT_ram_3004dfb4 = 0;
          return 0xffffffff;
        }
        *(int *)(_DAT_ram_3004dfac + iVar1 * 4) = iVar2;
      }
      param_1 = param_1 + 0x40;
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x40006d74.
 * REA evidence: ev_e89e515d62de1b7e67c79cf7f943ec3073f1606c4cd5b986c49565802d4f67a2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40006d74(void)

{
  int iVar1;
  undefined *puStack_14;
  
  if (DAT_ram_3004dfaa != '\0') {
    return _DAT_ram_3004dfb4;
  }
  _DAT_ram_3004dfb4 = FUN_ram_40006b78(s_norflash0_ram_4009620c,&puStack_14);
  if (_DAT_ram_3004dfb4 != 0) {
    _DAT_ram_3004dfb0 = puStack_14;
    iVar1 = FUN_ram_40006cfe(puStack_14,_DAT_ram_3004dfb4);
    if (iVar1 == 0) {
      DAT_ram_3004dfaa = 1;
      return _DAT_ram_3004dfb4;
    }
  }
  _DAT_ram_3004dfb0 = &DAT_ram_3004a958;
  _DAT_ram_3004dfb4 = 6;
  iVar1 = FUN_ram_40006cfe(&DAT_ram_3004a958,6);
  if (iVar1 == 0) {
    DAT_ram_3004dfaa = 1;
    return _DAT_ram_3004dfb4;
  }
  return _DAT_ram_3004dfb4;
}


/* NanoCore 1.12, address 0x40006dec.
 * REA evidence: ev_f9f6a65f02b594b645ec762dd3b990655a0e97bd9ea7050f1cd33e8ba621e925
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40006dec(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = _DAT_ram_3004dfb4;
  iVar3 = 0;
  iVar2 = _DAT_ram_3004dfb0;
  while( true ) {
    if (iVar1 == iVar3) {
      return 0;
    }
    iVar4 = strcmp(param_1,iVar2 + 4);
    if (iVar4 == 0) break;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x40;
  }
  return iVar2;
}


/* NanoCore 1.12, address 0x40006e3c.
 * REA evidence: ev_2abdebfb9939e64320bdf8b1ce6f35a1ab12d734799a357a53f76153ba5d5b6d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006e3c(undefined4 *param_1)

{
  *param_1 = _DAT_ram_3004dfb4;
  return _DAT_ram_3004dfb0;
}


/* NanoCore 1.12, address 0x40006e9a.
 * REA evidence: ev_d3b2db4f65d9a9a1c4cba7e64f88f53dafb981dfc11da67d3b3955f0e485dcf7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40006e9a(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((uint)(param_2 + param_4) <= *(uint *)(param_1 + 0x38)) {
    iVar1 = FUN_ram_40006ce4();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x40006ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(iVar1 + 0x2c))(param_2 + *(int *)(param_1 + 0x34),param_3,param_4);
      return uVar2;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40006ee4.
 * REA evidence: ev_7dc134bfe92567adc69e4954b9b58d8cef9c38e4800e11e42388ea0cb337670b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40006ee4(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((uint)(param_2 + param_3) <= *(uint *)(param_1 + 0x38)) {
    iVar1 = FUN_ram_40006ce4();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x40006f12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(iVar1 + 0x30))(param_2 + *(int *)(param_1 + 0x34),param_3);
      return uVar2;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40006fb0.
 * REA evidence: ev_b84fe44877d8fcf799837e6fb0b4a1e6fe47ec6a776db230feaa3945d157d60d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40006fb0(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0x101) {
    iVar3 = -1;
    if (param_3 != (uint *)0x0) {
      FUN_ram_4000303c(param_3,param_1 + 0x4c,0xc);
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0;
    if (param_2 == 0x103) {
      uVar2 = *param_3;
      uVar1 = param_3[1];
      iVar3 = -1;
      if (uVar2 <= uVar1) {
        if (uVar2 == uVar1) {
          uVar1 = uVar2 + 1;
        }
        iVar3 = FUN_ram_40006ee4(*(undefined4 *)(param_1 + 0x58),uVar2 * *(int *)(param_1 + 0x50),
                                 (uVar1 - uVar2) * *(int *)(param_1 + 0x50));
        iVar3 = iVar3 >> 0x1f;
      }
    }
  }
  return iVar3;
}


