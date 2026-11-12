/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40006000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4000602e.
 * REA evidence: ev_1046eff31dc23487cc072b3e157ec9d53312ddb35aa6c924d403e42fb63d5ba3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000602e(void)

{
  undefined1 *puVar1;
  
  _DAT_ram_3004cc98 = 0;
  puVar1 = &DAT_ram_3004cca0;
  do {
    *(undefined1 **)(puVar1 + 4) = puVar1;
    *(undefined1 **)puVar1 = puVar1;
    puVar1 = puVar1 + 8;
  } while (puVar1 != &DAT_ram_3004cda0);
  _DAT_ram_3004cda0 = 0;
  return;
}


/* NanoCore 1.11, address 0x4000605a.
 * REA evidence: ev_5572b6e1ae3e308518f16c226cad38180eab1a4010d9c5316db7694e3dfae7fa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000605a(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  FUN_ram_400002f4();
  if (_DAT_ram_3004cc90 == param_1) {
    *(byte *)(_DAT_ram_3004cc90 + 0x3c) = *(byte *)(_DAT_ram_3004cc90 + 0x3c) & 0xf8 | 3;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x3c);
    uVar3 = (uint)*(byte *)(param_1 + 0x3d);
    *(byte *)(param_1 + 0x3c) = bVar1 & 0xf8 | 1;
    iVar2 = uVar3 * 8;
    iVar4 = param_1 + 0x1c;
    if ((bVar1 & 8) == 0) {
      iVar6 = *(int *)(&DAT_ram_3004cca0 + uVar3 * 8);
      *(int *)(iVar6 + 4) = iVar4;
      *(int *)(param_1 + 0x1c) = iVar6;
      *(int *)(&DAT_ram_3004cca0 + uVar3 * 8) = iVar4;
      *(undefined1 **)(param_1 + 0x20) = &DAT_ram_3004cca0 + iVar2;
    }
    else {
      piVar5 = *(int **)(&DAT_ram_3004cca4 + iVar2);
      *piVar5 = iVar4;
      *(int **)(param_1 + 0x20) = piVar5;
      *(int *)(&DAT_ram_3004cca4 + iVar2) = iVar4;
      *(undefined1 **)(param_1 + 0x1c) = &DAT_ram_3004cca0 + iVar2;
    }
    _DAT_ram_3004cda0 = *(uint *)(param_1 + 0x40) | _DAT_ram_3004cda0;
  }
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x400060de.
 * REA evidence: ev_01773555646f3248c9c07940075db72064db20aca2bbda024c16816ec4cf1adb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400060de(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_ram_400002f4();
  iVar1 = *(int *)(param_1 + 0x1c);
  piVar2 = *(int **)(param_1 + 0x20);
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  if (*(undefined1 **)(&DAT_ram_3004cca0 + (uint)*(byte *)(param_1 + 0x3d) * 8) ==
      &DAT_ram_3004cca0 + (uint)*(byte *)(param_1 + 0x3d) * 8) {
    _DAT_ram_3004cda0 = ~*(uint *)(param_1 + 0x40) & _DAT_ram_3004cda0;
  }
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x40006130.
 * REA evidence: ev_1d1d28c99c0ee8d78316f9e1ff512d719b644a6598e11c4dd96880f86c724958
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006130(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40005728(_DAT_ram_3004cda0);
  iVar1 = *(int *)(&DAT_ram_3004cca0 + (iVar1 + -1) * 8);
  _DAT_ram_3004cc90 = iVar1 + -0x1c;
  FUN_ram_400060de();
  *(undefined1 *)(iVar1 + 0x20) = 3;
  FUN_ram_400000b2(iVar1 + 8);
  return;
}


/* NanoCore 1.11, address 0x40006172.
 * REA evidence: ev_69b32c7e84986edb4cd8f649e9ecf3930c5fc48a8216c6a86761854d6e2c8587
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006172(void)

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
  if ((_DAT_ram_3004cc98 == 0) && (_DAT_ram_3004cda0 != 0)) {
    iVar6 = FUN_ram_40005728();
    iVar3 = _DAT_ram_3004cc90;
    uVar7 = iVar6 - 1;
    bVar1 = *(byte *)(_DAT_ram_3004cc90 + 0x3c);
    iVar4 = *(int *)(&DAT_ram_3004cca0 + uVar7 * 8) + -0x1c;
    bVar2 = false;
    iVar6 = iVar4;
    if ((bVar1 & 7) == 3) {
      iVar6 = _DAT_ram_3004cc90;
      if (((uVar7 <= *(byte *)(_DAT_ram_3004cc90 + 0x3d)) &&
          (bVar2 = true, iVar6 = iVar4, *(byte *)(_DAT_ram_3004cc90 + 0x3d) == uVar7)) &&
         ((bVar1 & 8) == 0)) {
        bVar2 = false;
        iVar6 = _DAT_ram_3004cc90;
      }
      *(byte *)(_DAT_ram_3004cc90 + 0x3c) = bVar1 & 0xf7;
    }
    if (iVar3 == iVar6) {
      FUN_ram_400060de(iVar3);
      *(byte *)(_DAT_ram_3004cc90 + 0x3c) = *(byte *)(_DAT_ram_3004cc90 + 0x3c) & 0xf8 | 3;
    }
    else {
      DAT_ram_3004cc8c = (undefined1)uVar7;
      _DAT_ram_3004cc90 = iVar6;
      if (_DAT_ram_3004cc94 != (code *)0x0) {
        (*_DAT_ram_3004cc94)(iVar3,iVar6);
      }
      if (bVar2) {
        FUN_ram_4000605a(iVar3);
      }
      FUN_ram_400060de(iVar6);
      *(byte *)(iVar6 + 0x3c) = *(byte *)(iVar6 + 0x3c) & 0xf8 | 3;
      pcVar8 = *(char **)(iVar6 + 0x30);
      if (((*pcVar8 != '#') || (*(char **)(iVar6 + 0x24) <= pcVar8)) ||
         (pcVar8 + *(int *)(iVar6 + 0x34) < *(char **)(iVar6 + 0x24))) {
        iVar4 = FUN_ram_400002f4();
        do {
        } while (iVar4 != 0);
      }
      if (DAT_ram_3004cbb8 == '\0') {
        if (_DAT_ram_3004cc9c != (code *)0x0) {
          (*_DAT_ram_3004cc9c)(iVar3);
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


/* NanoCore 1.11, address 0x400062ac.
 * REA evidence: ev_098b5a111cb8bb4442f347f775bf198aa1494728ed0a63a1f1a27433903c0481
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400062ac(void)

{
  FUN_ram_400002f4();
  _DAT_ram_3004cc98 = _DAT_ram_3004cc98 + 1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x400062ce.
 * REA evidence: ev_a642262636f12055c34aea88549a8305f77fd2f4d95f5884be93dbf3886a9126
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400062ce(void)

{
  int iVar1;
  
  FUN_ram_400002f4();
  iVar1 = (_DAT_ram_3004cc98 - 1) * 0x10000;
  _DAT_ram_3004cc98 = (ushort)((uint)iVar1 >> 0x10);
  if (0 < iVar1 >> 0x10) {
    FUN_ram_400002fa();
    return;
  }
  _DAT_ram_3004cc98 = 0;
  FUN_ram_400002fa();
  if (_DAT_ram_3004cc90 != 0) {
    FUN_ram_40006172();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4000631a.
 * REA evidence: ev_be1f232f445b6cdaa6529654a3df1505a33492ca9cf1a5967480987c467ddc51
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000631a(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_ram_3004cc90;
  uVar2 = FUN_ram_400002f4();
  FUN_ram_400060de(iVar1);
  FUN_ram_4000674e(iVar1 + 0x54);
  *(undefined1 *)(iVar1 + 0x3c) = 4;
  FUN_ram_40004604(iVar1);
  FUN_ram_400002fa(uVar2);
  FUN_ram_40006172();
  return;
}


/* NanoCore 1.11, address 0x40006358.
 * REA evidence: ev_b6f1156869fb4a888263636b1c32deab5a5feec117155f0326d228df4c7e8e45
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_40006358(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined1 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x34) = param_5;
  FUN_ram_4000504c(param_4,0x23,param_5);
  uVar1 = FUN_ram_40006bbe(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                           *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) + -4,FUN_ram_4000631a
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
  FUN_ram_4000670c(param_1 + 0x54,param_1,FUN_ram_400063f2,param_1,0,0);
  if (_DAT_ram_3004cda4 != (code *)0x0) {
    (*_DAT_ram_3004cda4)(param_1);
  }
  return 0;
}


/* NanoCore 1.11, address 0x400063f2.
 * REA evidence: ev_39459180484c242a40eb65b332168a7b4e62b69833d761db42e6855900ac40e8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400063f2(int param_1)

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
  FUN_ram_4000605a(param_1);
  FUN_ram_400002fa(uVar1);
  FUN_ram_40006172();
  return;
}


/* NanoCore 1.11, address 0x4000642e.
 * REA evidence: ev_ae353b2caeb16d94ccee100a021c7e3de6c3b048e4e8ec929d5c8cc7a761776f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000642e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_ram_40005e80(param_1,1,param_2);
  FUN_ram_40006358(param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


/* NanoCore 1.11, address 0x40006464.
 * REA evidence: ev_fb60405556e140b630ed102378ef1f9448bb46cf7a0f9ade54bd219288d8bcc0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006464(void)

{
  return _DAT_ram_3004cc90;
}


/* NanoCore 1.11, address 0x4000646e.
 * REA evidence: ev_bcd633e1a346ce24bbdff04a4f62333935e771ddd64dd23bf4017d2297a9c1a2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000646e(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x3c) & 7) != 4) {
    if ((*(byte *)(param_1 + 0x3c) & 7) != 0) {
      FUN_ram_400060de();
    }
    uVar1 = FUN_ram_400002f4();
    FUN_ram_4000674e(param_1 + 0x54);
    *(undefined1 *)(param_1 + 0x3c) = 4;
    FUN_ram_40004604(param_1);
    FUN_ram_400002fa(uVar1);
    return 0;
  }
  return 0;
}


/* NanoCore 1.11, address 0x400064b8.
 * REA evidence: ev_a41d7e8fa8f371fe36bbf2912ad6dc8c2b74abb79c11b3533f0e4507702876e3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400064b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40005f2a(1,param_1);
  if (iVar1 != 0) {
    iVar2 = FUN_ram_40005656(param_4);
    if (iVar2 == 0) {
      FUN_ram_40005f98(iVar1);
      iVar1 = 0;
    }
    else {
      FUN_ram_40006358(iVar1,param_2,param_3,iVar2,param_4,param_5,param_6);
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40006510.
 * REA evidence: ev_99b07ac1348b1fddfb9d079117018ae3d98115af545f40be624337495667eca3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 thunk_FUN_ram_4000646e(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x3c) & 7) != 4) {
    if ((*(byte *)(param_1 + 0x3c) & 7) != 0) {
      FUN_ram_400060de();
    }
    uVar1 = FUN_ram_400002f4();
    FUN_ram_4000674e(param_1 + 0x54);
    *(undefined1 *)(param_1 + 0x3c) = 4;
    FUN_ram_40004604(param_1);
    FUN_ram_400002fa(uVar1);
    return 0;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40006512.
 * REA evidence: ev_84e5381120db1ef6d8b78f459a41f4cad6cb2da1baaf3e9c790298e2db25050e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006512(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x3c) & 5) == 1) {
    uVar1 = FUN_ram_400002f4();
    FUN_ram_400060de(param_1);
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xf8 | 2;
    FUN_ram_4000685e(param_1 + 0x54);
    FUN_ram_400002fa(uVar1);
    if (_DAT_ram_3004cdac != (code *)0x0) {
      (*_DAT_ram_3004cdac)(param_1);
    }
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4000656e.
 * REA evidence: ev_9f32ccb506af2992422c260fe0f8c12b3150547fecfdae025bcb6890e19581ac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000656e(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  iVar1 = _DAT_ram_3004cc90;
  uStack_14 = param_1;
  uVar2 = FUN_ram_400002f4();
  *(undefined4 *)(iVar1 + 0x38) = 0;
  FUN_ram_40006512(iVar1);
  FUN_ram_400068a8(iVar1 + 0x54,0,&uStack_14);
  FUN_ram_40006784(iVar1 + 0x54);
  FUN_ram_400002fa(uVar2);
  FUN_ram_40006172();
  if (*(int *)(iVar1 + 0x38) == -2) {
    *(undefined4 *)(iVar1 + 0x38) = 0;
  }
  return *(undefined4 *)(iVar1 + 0x38);
}


/* NanoCore 1.11, address 0x400065c4.
 * REA evidence: ev_73a4393d6b074371d978e022b9550a56468913de285e2ca19f85d5ed771838ee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_ram_4000656e(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  iVar1 = _DAT_ram_3004cc90;
  uStack_14 = param_1;
  uVar2 = FUN_ram_400002f4();
  *(undefined4 *)(iVar1 + 0x38) = 0;
  FUN_ram_40006512(iVar1);
  FUN_ram_400068a8(iVar1 + 0x54,0,&uStack_14);
  FUN_ram_40006784(iVar1 + 0x54);
  FUN_ram_400002fa(uVar2);
  FUN_ram_40006172();
  if (*(int *)(iVar1 + 0x38) == -2) {
    *(undefined4 *)(iVar1 + 0x38) = 0;
  }
  return *(undefined4 *)(iVar1 + 0x38);
}


/* NanoCore 1.11, address 0x400065c6.
 * REA evidence: ev_05a2dc9480c2295c553cad501f3c142f8142fcaa2fc410f0365dfceb93475f90
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400065c6(void)

{
  FUN_ram_40004352();
  FUN_ram_4000656e();
  return;
}


/* NanoCore 1.11, address 0x400065d4.
 * REA evidence: ev_a3852cdb9f477b877183a7be77b53b02774a135a64c895673c76c4bb9b374c06
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400065d4(int param_1)

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
    FUN_ram_4000685e(param_1 + 0x54);
    FUN_ram_4000605a(param_1);
    FUN_ram_400002fa(uVar1);
    if (_DAT_ram_3004cda8 != (code *)0x0) {
      (*_DAT_ram_3004cda8)(param_1);
    }
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40006632.
 * REA evidence: ev_a1254fe7234c83f2ee32b3a331e04642ae236352941ba805602d0c42d932e467
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006632(int param_1)

{
  *(int *)(param_1 + 0x40) = 1 << (*(byte *)(param_1 + 0x3d) & 0x1f);
  *(undefined1 *)(param_1 + 0x3c) = 2;
  FUN_ram_400065d4();
  if (_DAT_ram_3004cc90 != 0) {
    FUN_ram_40006172();
  }
  return 0;
}


/* NanoCore 1.11, address 0x40006660.
 * REA evidence: ev_6a7a16480a70e7e6be3b75fde62347fd0d64d0ea4827513030f99321c265a86b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40006660(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    FUN_ram_40005fd4();
    uVar2 = FUN_ram_4000646e(param_1);
    FUN_ram_40006172();
  }
  else {
    if (param_2 == 2) {
      uVar2 = FUN_ram_400002f4();
      if ((*(byte *)(param_1 + 0x3c) & 7) == 1) {
        FUN_ram_400060de(param_1);
        bVar1 = *param_3;
        *(byte *)(param_1 + 0x3d) = bVar1;
        *(int *)(param_1 + 0x40) = 1 << (bVar1 & 0x1f);
        FUN_ram_4000605a(param_1);
      }
      else {
        bVar1 = *param_3;
        *(byte *)(param_1 + 0x3d) = bVar1;
        *(int *)(param_1 + 0x40) = 1 << (bVar1 & 0x1f);
      }
      FUN_ram_400002fa(uVar2);
    }
    else if (param_2 == 0) {
      uVar2 = FUN_ram_40006632();
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x400066fa.
 * REA evidence: ev_29f9b57ac1c9dd0ee4bfc805817c917a13ea5e63f4d9a6ec2487e34213515711
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400066fa(int param_1)

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


/* NanoCore 1.11, address 0x4000670c.
 * REA evidence: ev_4c9f3541ff0fe0608e64ff76a5578dd18e0f8bf2a7d20032264828f4a4f9bec8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000670c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,byte param_6)

{
  FUN_ram_40005e80(param_1,10,param_2);
  *(byte *)(param_1 + 0x11) = param_6 & 0xfe;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = param_5;
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  return;
}


/* NanoCore 1.11, address 0x4000674e.
 * REA evidence: ev_34b131394f0a433e0dcd2d1e29b408f8f340ab610ba1accc590b66f0a303c89a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000674e(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  FUN_ram_400066fa(param_1);
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
  FUN_ram_400002fa(uVar1);
  FUN_ram_40005ef4(param_1);
  return 0;
}


/* NanoCore 1.11, address 0x40006784.
 * REA evidence: ev_33c71180e6a44d73bb09aca78523f8b31d26723a6ec14b802e233c2e3102f755
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006784(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  uVar3 = FUN_ram_400002f4();
  FUN_ram_400066fa(param_1);
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
  if (_DAT_ram_3004cc84 != (code *)0x0) {
    (*_DAT_ram_3004cc84)(param_1);
  }
  iVar4 = FUN_ram_400042ea();
  bVar1 = *(byte *)(param_1 + 0x11);
  iVar4 = iVar4 + *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x30) = iVar4;
  piVar5 = (int *)&DAT_ram_3004cdb0;
  if ((bVar1 & 4) == 0) {
    piVar5 = (int *)&DAT_ram_3004cdb8;
  }
  piVar7 = piVar5;
  do {
    piVar6 = piVar7;
    piVar7 = (int *)*piVar6;
    if ((int *)piVar5[1] == piVar6) break;
  } while ((iVar4 == piVar7[5]) || (0x7ffffffe < (uint)(piVar7[5] - iVar4)));
  _DAT_ram_3004d050 = _DAT_ram_3004d050 + 1;
  piVar7[1] = param_1 + 0x1c;
  *(int **)(param_1 + 0x1c) = piVar7;
  *piVar6 = param_1 + 0x1c;
  *(int **)(param_1 + 0x20) = piVar6;
  *(byte *)(param_1 + 0x11) = bVar1 | 1;
  bVar2 = false;
  if (((bVar1 & 4) != 0) && ((DAT_ram_30049a14 == '\x01' && ((DAT_ram_3004cdfc & 7) == 2)))) {
    FUN_ram_400065d4();
    bVar2 = true;
  }
  FUN_ram_400002fa(uVar3);
  if (bVar2) {
    FUN_ram_40006172();
  }
  return 0;
}


/* NanoCore 1.11, address 0x4000685e.
 * REA evidence: ev_32c74bcd22fb31310e01ecf8cdc70cc84731e7b4e25dabb442d7b98e03f9993d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000685e(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    if (_DAT_ram_3004cc80 != (code *)0x0) {
      (*_DAT_ram_3004cc80)();
    }
    uVar1 = FUN_ram_400002f4();
    FUN_ram_400066fa(param_1);
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
    FUN_ram_400002fa(uVar1);
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x400068a8.
 * REA evidence: ev_22cff74482ab4ec84864144f60689a11a7eab49f4882afc7fe144ac5c2244dac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400068a8(int param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  
  FUN_ram_400002f4();
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x2c) = *param_3;
    goto switchD_ram_400068d0_default;
  case 1:
    uVar2 = *(undefined4 *)(param_1 + 0x2c);
    break;
  case 2:
    bVar1 = *(byte *)(param_1 + 0x11) & 0xfd;
    goto LAB_ram_400068f0;
  case 3:
    bVar1 = *(byte *)(param_1 + 0x11) | 2;
LAB_ram_400068f0:
    *(byte *)(param_1 + 0x11) = bVar1;
    goto switchD_ram_400068d0_default;
  case 4:
    if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
      *param_3 = 0;
      goto switchD_ram_400068d0_default;
    }
    uVar2 = 1;
    break;
  case 5:
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    break;
  default:
    goto switchD_ram_400068d0_default;
  }
  *param_3 = uVar2;
switchD_ram_400068d0_default:
  FUN_ram_400002fa();
  return 0;
}


/* NanoCore 1.11, address 0x40006916.
 * REA evidence: ev_a0451409dbdac8cce6b01c101535e17ebd6c5d96e1c1531b7df354d10e6f1a29
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006916(void)

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
  iVar2 = FUN_ram_400042ea();
  uVar3 = FUN_ram_400002f4();
  while ((ppppiVar1 = _DAT_ram_3004cdb8, _DAT_ram_3004cdb8 != (int ****)&DAT_ram_3004cdb8 &&
         (ppppiVar6 = _DAT_ram_3004cdb8 + -7, (uint)(iVar2 - (int)_DAT_ram_3004cdb8[5]) < 0x7fffffff
         ))) {
    if (_DAT_ram_3004d054 != (code *)0x0) {
      (*_DAT_ram_3004d054)(ppppiVar6);
    }
    FUN_ram_400066fa(ppppiVar6);
    if ((*(byte *)((int)ppppiVar1 + -0xb) & 2) == 0) {
      *(byte *)((int)ppppiVar1 + -0xb) = *(byte *)((int)ppppiVar1 + -0xb) & 0xfe;
    }
    pppiVar4 = ppppiVar1[3];
    local_38[1] = (int **)ppppiVar1;
    *ppppiVar1 = local_38;
    local_38 = (int ***)ppppiVar1;
    ppppiVar1[1] = (int ***)&local_38;
    (*(code *)ppppiVar1[2])(pppiVar4);
    iVar2 = FUN_ram_400042ea();
    if (_DAT_ram_3004d058 != (code *)0x0) {
      (*_DAT_ram_3004d058)(ppppiVar6);
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
        FUN_ram_40006784(ppppiVar6);
      }
    }
  }
  FUN_ram_400002fa(uVar3);
  return;
}


/* NanoCore 1.11, address 0x40006a04.
 * REA evidence: ev_1a860599512453101843028d5be4d20a4ab097e8ef867253cfd884ba16303eaa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006a04(void)

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
  while (ppppiVar1 = _DAT_ram_3004cdb0, _DAT_ram_3004cdb0 != (int ****)&DAT_ram_3004cdb0) {
    iVar3 = FUN_ram_400042ea();
    ppppiVar6 = ppppiVar1 + -7;
    if (0x7ffffffe < (uint)(iVar3 - (int)ppppiVar1[5])) break;
    if (_DAT_ram_3004d054 != (code *)0x0) {
      (*_DAT_ram_3004d054)(ppppiVar6);
    }
    FUN_ram_400066fa(ppppiVar6);
    if ((*(byte *)((int)ppppiVar1 + -0xb) & 2) == 0) {
      *(byte *)((int)ppppiVar1 + -0xb) = *(byte *)((int)ppppiVar1 + -0xb) & 0xfe;
    }
    local_38[1] = (int **)ppppiVar1;
    *ppppiVar1 = local_38;
    ppppiVar1[1] = (int ***)&local_38;
    DAT_ram_30049a14 = 0;
    local_38 = (int ***)ppppiVar1;
    FUN_ram_400002fa(uVar2);
    (*(code *)ppppiVar1[2])(ppppiVar1[3]);
    if (_DAT_ram_3004d058 != (code *)0x0) {
      (*_DAT_ram_3004d058)(ppppiVar6);
    }
    uVar2 = FUN_ram_400002f4();
    DAT_ram_30049a14 = 1;
    if ((int ****)local_38 != &local_38) {
      pppiVar4 = *ppppiVar1;
      pppiVar5 = ppppiVar1[1];
      pppiVar4[1] = (int **)pppiVar5;
      *pppiVar5 = (int **)pppiVar4;
      ppppiVar1[1] = (int ***)ppppiVar1;
      *ppppiVar1 = (int ***)ppppiVar1;
      if ((*(byte *)((int)ppppiVar1 + -0xb) & 3) == 3) {
        *(byte *)((int)ppppiVar1 + -0xb) = *(byte *)((int)ppppiVar1 + -0xb) & 0xfe;
        FUN_ram_40006784(ppppiVar6);
      }
    }
  }
  FUN_ram_400002fa(uVar2);
  return;
}


/* NanoCore 1.11, address 0x40006b0e.
 * REA evidence: ev_3cb0ee4345a74b1d803e78276f9ef8168245814a2c4e1a75dc79184a3caf8a7d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006b0e(void)

{
  int iVar1;
  int iVar2;
  
  do {
    FUN_ram_400002f4();
    if (_DAT_ram_3004cdb0 == &DAT_ram_3004cdb0) {
      FUN_ram_400002fa();
      FUN_ram_40006464();
      FUN_ram_40006512();
      FUN_ram_40006172();
    }
    else {
      iVar1 = *(int *)(_DAT_ram_3004cdb0 + 0x14);
      FUN_ram_400002fa();
      iVar2 = FUN_ram_400042ea();
      if ((uint)(iVar1 - iVar2) < 0x7fffffff) {
        thunk_FUN_ram_4000656e();
      }
    }
    FUN_ram_40006a04();
  } while( true );
}


/* NanoCore 1.11, address 0x40006b62.
 * REA evidence: ev_255f52621548c75d040a6ee40b3c9f11dd28962495657c5525fb8ef2aa2b1d4c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006b62(void)

{
  _DAT_ram_3004cdbc = &DAT_ram_3004cdb8;
  _DAT_ram_3004cdb8 = &DAT_ram_3004cdb8;
  return;
}


/* NanoCore 1.11, address 0x40006b70.
 * REA evidence: ev_ca7011a9bf0acee2c3b266e421d514fcab73e2752f4058f487aec9b8e0384063
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006b70(void)

{
  _DAT_ram_3004cdb4 = &DAT_ram_3004cdb0;
  _DAT_ram_3004cdb0 = &DAT_ram_3004cdb0;
  FUN_ram_4000642e(0x3004cdc0,s_timer_ram_4009408c,FUN_ram_40006b0e,0,0x3004ce50,0x200,4,10);
  FUN_ram_40006632(0x3004cdc0);
  return;
}


/* NanoCore 1.11, address 0x40006bbe.
 * REA evidence: ev_e0f41b41791acf89f816204bcbe1552e2c3deb39f5aafb4d2b1baffda167955b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40006bbe(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

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


/* NanoCore 1.11, address 0x40006bf6.
 * REA evidence: ev_ad3a1fb007645354f24df8ed5cbeef5bca42adadc0590ca8582edc3bbaaf64e6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40006bf6(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_40005656(param_2);
  if (iVar1 == 0) {
    *param_1 = 0xc;
  }
  return;
}


/* NanoCore 1.11, address 0x40006c12.
 * REA evidence: ev_0bfcbbcf8962baa6bcfad3a3c2c3108182d7db38d77d6c9d0dc656deee9cae67
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40006c12(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_ram_4000568e(param_2,param_3);
  if (iVar1 == 0) {
    *param_1 = 0xc;
  }
  return;
}


/* NanoCore 1.11, address 0x40006c30.
 * REA evidence: ev_60d96540a2c07d69beb4241fe1e32d1427b3cc4e902b06862979249d5ae0160b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40006c30(undefined4 param_1,undefined4 param_2)

{
  FUN_ram_400056b4(param_2);
  return;
}


/* NanoCore 1.11, address 0x40006c36.
 * REA evidence: ev_713ee7d4cb585b3b2599f5bbdfbc7b8a4eb971c5b71dca6fd0991b8a85037731
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * thunk_FUN_ram_4000502a(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_ram_40004dee();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40006464(), iVar1 != 0)) {
    puVar2 = (undefined1 *)(iVar1 + 0x38);
  }
  else {
    puVar2 = &DAT_ram_3004cbbc;
  }
  return puVar2;
}


/* NanoCore 1.11, address 0x40006c3a.
 * REA evidence: ev_bf87573b4eda84f09ad646f4b5e02c8ff716f7634fbb232cd8813fe3ae7aa224
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40006c3a(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40006d8c();
  if ((iVar1 < 0) || (iVar1 = FUN_ram_40006e76(), iVar1 < 1)) {
    DAT_ram_3004d068 = '\0';
  }
  else if (DAT_ram_3004d068 == '\0') {
    DAT_ram_3004d068 = '\x01';
  }
  return;
}


/* NanoCore 1.11, address 0x40006c6e.
 * REA evidence: ev_8a4470cb03c9f117ffb5a9e8bda5b4842c5fbc39da7ed8cefb98c08c5b08dbea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40006c6e(void)

{
  return DAT_ram_3004d068;
}


/* NanoCore 1.11, address 0x40006c78.
 * REA evidence: ev_5d05029239eefb7d950ad6f43d93471a0b2721de16710d219d9c12b18253d533
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40006c78(undefined4 param_1,int *param_2)

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
  
  iVar3 = FUN_ram_40006dbe();
  if (((iVar3 != 0) && (iVar4 = (**(code **)(iVar3 + 0x28))(0,aiStack_120,0x100), 0 < iVar4)) &&
     (aiStack_120[0] == 0x20434941)) {
    if (iStack_e0 == 0) {
      return 0;
    }
    iVar4 = FUN_ram_40002f2c(uStack_dc);
    if (iVar4 == 0) {
      return -5;
    }
    iVar3 = (**(code **)(iVar3 + 0x28))(iStack_e0,iVar4,uStack_dc);
    if (0 < iVar3) {
      pcVar5 = (char *)FUN_ram_40007520(iVar4);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = s_spi0_0_152k_spl__8k_env__848k_os_ram_40094094;
      }
      iVar6 = FUN_ram_40007460(pcVar5);
      iVar2 = 0;
      for (iVar3 = iVar6; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xa8)) {
        iVar2 = iVar2 + 1;
      }
      iVar7 = FUN_ram_40002f2c(iVar2 << 6);
      *param_2 = iVar7;
      iVar7 = iVar7 + 4;
      iVar3 = iVar6;
      while (iVar3 != 0) {
        *(undefined4 *)(iVar7 + -4) = 0x45503130;
        FUN_ram_40003398(iVar7,iVar3);
        FUN_ram_40003398(iVar7 + 0x18,param_1);
        *(undefined4 *)(iVar7 + 0x30) = *(undefined4 *)(iVar3 + 0x98);
        puVar1 = (undefined4 *)(iVar3 + 0xa0);
        iVar3 = *(int *)(iVar3 + 0xa8);
        *(undefined4 *)(iVar7 + 0x34) = *puVar1;
        iVar7 = iVar7 + 0x40;
      }
      FUN_ram_40002f3a(iVar4);
      FUN_ram_40007472(iVar6);
      return iVar2;
    }
  }
  return -1;
}


/* NanoCore 1.11, address 0x40006d8c.
 * REA evidence: ev_753b3c61fbaa0158335926a80014a22bb8ff90a424d31d75f8dd9fb68894e833
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40006d8c(void)

{
  if (DAT_ram_3004d069 == '\0') {
    if (PTR_FUN_ram_400072a2_ram_30049bbc != (undefined *)0x0) {
      (*(code *)PTR_FUN_ram_400072a2_ram_30049bbc)();
    }
    DAT_ram_3004d069 = '\x01';
  }
  return 0;
}


/* NanoCore 1.11, address 0x40006dbe.
 * REA evidence: ev_b84a54d1eadf9f8e0806f0699d0b9243c9e1e8f011b799587b452394439366db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_40006dbe(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_ram_40003478(param_1,s_norflash0_ram_30049b98,0x18);
  if (iVar1 == 0) {
    pcVar2 = s_norflash0_ram_30049b98;
  }
  else {
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}


/* NanoCore 1.11, address 0x40006de4.
 * REA evidence: ev_caab1b6053996146da684f80753a5be104032de14b26cfb630366044628ad312
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006de4(int param_1)

{
  return *(undefined4 *)(_DAT_ram_3004d06c + (param_1 - _DAT_ram_3004d070 >> 6) * 4);
}


/* NanoCore 1.11, address 0x40006dfe.
 * REA evidence: ev_0e1c59c3647f34f070b648fe8ae61e4b4a471286e1bf7641cab33db1deb7e31e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006dfe(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (_DAT_ram_3004d06c != 0) {
    FUN_ram_400056b4();
  }
  _DAT_ram_3004d06c = FUN_ram_40005656(param_2 << 2);
  uVar3 = 0xfffffffe;
  if (_DAT_ram_3004d06c != 0) {
    param_1 = param_1 + 0x1c;
    for (iVar1 = 0; param_2 != iVar1; iVar1 = iVar1 + 1) {
      iVar2 = FUN_ram_40006dbe(param_1);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x1c) <= *(int *)(param_1 + 0x18)) {
          _DAT_ram_3004d074 = 0;
          return 0xffffffff;
        }
        *(int *)(_DAT_ram_3004d06c + iVar1 * 4) = iVar2;
      }
      param_1 = param_1 + 0x40;
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x40006e76.
 * REA evidence: ev_3c4ee3a2e64fab9a7de82bcf733c6d62a6b57250e528f85d17f4fdd1917377df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40006e76(void)

{
  int iVar1;
  char *pcStack_14;
  
  if (DAT_ram_3004d06a != '\0') {
    return _DAT_ram_3004d074;
  }
  _DAT_ram_3004d074 = FUN_ram_40006c78(s_norflash0_ram_400940e4,&pcStack_14);
  if (_DAT_ram_3004d074 != 0) {
    _DAT_ram_3004d070 = pcStack_14;
    iVar1 = FUN_ram_40006dfe(pcStack_14,_DAT_ram_3004d074);
    if (iVar1 == 0) {
      DAT_ram_3004d06a = 1;
      return _DAT_ram_3004d074;
    }
  }
  _DAT_ram_3004d070 = s_01PEspl_ram_30049a18;
  _DAT_ram_3004d074 = 6;
  iVar1 = FUN_ram_40006dfe(s_01PEspl_ram_30049a18,6);
  if (iVar1 == 0) {
    DAT_ram_3004d06a = 1;
    return _DAT_ram_3004d074;
  }
  return _DAT_ram_3004d074;
}


/* NanoCore 1.11, address 0x40006eee.
 * REA evidence: ev_30d9dd235e3e7076a2a72f03c77750fed15e5d9f1f71032242278fc6d47a6037
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40006eee(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = _DAT_ram_3004d074;
  iVar3 = 0;
  iVar2 = _DAT_ram_3004d070;
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


/* NanoCore 1.11, address 0x40006f3e.
 * REA evidence: ev_4cafa03b1da5aa47ea4d8d039bb2a8e5dcab76fad2cc6ac1393e3bdca42d5255
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006f3e(undefined4 *param_1)

{
  *param_1 = _DAT_ram_3004d074;
  return _DAT_ram_3004d070;
}


/* NanoCore 1.11, address 0x40006f52.
 * REA evidence: ev_2a4cf5f698357326a1416014e6b509b4a5c54b299b57ff55632e0743bdcba608
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40006f52(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((uint)(param_2 + param_4) <= *(uint *)(param_1 + 0x38)) {
    iVar1 = FUN_ram_40006de4();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x40006f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(iVar1 + 0x28))(param_2 + *(int *)(param_1 + 0x34),param_3,param_4);
      return uVar2;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40006f9c.
 * REA evidence: ev_a93c97102c8e2873b7749c92b9cc6dbeda5806330da803551511dad9ff3fe22a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40006f9c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((uint)(param_2 + param_4) <= *(uint *)(param_1 + 0x38)) {
    iVar1 = FUN_ram_40006de4();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x40006fd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(iVar1 + 0x2c))(param_2 + *(int *)(param_1 + 0x34),param_3,param_4);
      return uVar2;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40006fe6.
 * REA evidence: ev_63ce397f5a119e1b1a942c90161e7eeaa061a72021f23f6a943fcc4fb4235dff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40006fe6(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((uint)(param_2 + param_3) <= *(uint *)(param_1 + 0x38)) {
    iVar1 = FUN_ram_40006de4();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x40007014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(iVar1 + 0x30))(param_2 + *(int *)(param_1 + 0x34),param_3);
      return uVar2;
    }
  }
  return 0xffffffff;
}


