/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40008000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x400080a4.
 * REA evidence: ev_1b51fa0cb2feec80a915e626ccb60330f8de3af2658c20e1d69554ced8d0b076
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400080a4(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_ram_4005fcbe(0x3004dec4);
  iVar3 = FUN_ram_4005fca2(0x3004dec4);
  uVar4 = 0xffffffff;
  if ((iVar2 != 0) && (uVar4 = 0xffffffff, iVar3 != 0)) {
    FUN_ram_4000304c(iVar3,iVar2,0x304);
    bVar1 = param_1 == 1;
    if ((*(int *)(iVar2 + 0x2b8) != 9) || ((bool)*(char *)(iVar2 + 700) != bVar1)) {
      FUN_ram_400695cc(iVar3 + 0x2c0,0xc,bVar1);
    }
    *(undefined4 *)(iVar3 + 0x2fc) = _DAT_ram_3004e7cc;
    *(undefined4 *)(iVar3 + 0x2b8) = 9;
    *(bool *)(iVar3 + 700) = bVar1;
    FUN_ram_40007f4e(iVar3,9);
    FUN_ram_4005fcd6(0x3004dec4);
    if ((*(int *)(iVar2 + 0x2b8) != 9) || (uVar4 = 0, (bool)*(char *)(iVar2 + 700) != bVar1)) {
      FUN_ram_40068d64(_DAT_ram_3004e7cc);
      uVar4 = 0;
    }
  }
  return uVar4;
}


/* NanoCore 1.11, address 0x40008162.
 * REA evidence: ev_1c91945145c3a111e2d6d9aac6d63bc21c59cdc0eee1de724afd40db5e9f390c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40008162(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = FUN_ram_4005fcbe(0x3004dec4);
  iVar2 = FUN_ram_4005fca2(0x3004dec4);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      uVar4 = FUN_ram_40066d02(param_1);
      FUN_ram_4000304c(iVar2,iVar1,0x304);
      if ((*(int *)(iVar1 + 0x220) != 6) || (*(byte *)(iVar1 + 0x224) != uVar4)) {
        FUN_ram_40066e52(iVar2 + 0x228,0xc,uVar4);
      }
      *(undefined4 *)(iVar2 + 0x220) = 6;
      *(undefined4 *)(iVar2 + 0x264) = _DAT_ram_3004e7ac;
      *(char *)(iVar2 + 0x224) = (char)uVar4;
      FUN_ram_40007f4e(iVar2,7);
      FUN_ram_4005fcd6(0x3004dec4);
      FUN_ram_40066d28(_DAT_ram_3004e7ac);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x40008206.
 * REA evidence: ev_639ec08856a55ab75089623d0c1e223fb66d48ba31740a467501f64ec3482561
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40008206(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = FUN_ram_4005fcbe(0x3004dec4);
  iVar2 = FUN_ram_4005fca2(0x3004dec4);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      uVar4 = FUN_ram_40068c92(param_1);
      FUN_ram_4000304c(iVar2,iVar1,0x304);
      if ((*(int *)(iVar1 + 0x26c) != 10) || (*(byte *)(iVar1 + 0x270) != uVar4)) {
        FUN_ram_40068c9e(iVar2 + 0x274,0xc,uVar4);
      }
      *(undefined4 *)(iVar2 + 0x26c) = 10;
      *(undefined4 *)(iVar2 + 0x2b0) = _DAT_ram_3004e7b4;
      *(char *)(iVar2 + 0x270) = (char)uVar4;
      FUN_ram_40007f4e(iVar2,8);
      FUN_ram_4005fcd6(0x3004dec4);
      FUN_ram_40068c56(_DAT_ram_3004e7b4);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x400082aa.
 * REA evidence: ev_b38164dd7faed104c28f941128524ea2fe454eabb058a835456853b73f20e833
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400082aa(int param_1,int param_2,uint *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  
  iVar5 = 0;
  uVar1 = 0;
  uVar2 = 0;
  while( true ) {
    uVar4 = (uint)(uVar1 >> 0x20);
    if (iVar5 == param_2) break;
    iVar3 = *(int *)(param_1 + iVar5 * 4);
    iVar5 = iVar5 + 1;
    uVar6 = iVar3 >> 8;
    uVar4 = iVar3 >> 0x1f;
    uVar4 = (uVar4 ^ uVar6) - uVar4;
    if (uVar2 < uVar4) {
      uVar2 = uVar4;
    }
    uVar1 = (longlong)(int)uVar6 * (longlong)(int)uVar6 + uVar1;
  }
  *param_3 = uVar2;
  if (iVar5 == 0x80) {
    uVar7 = CONCAT44(uVar4 >> 7,(int)(uVar1 >> 7));
  }
  else {
    uVar7 = FUN_ram_40003b9c((int)uVar1,uVar4,iVar5,0);
  }
  *param_4 = uVar7;
  return;
}


/* NanoCore 1.11, address 0x4000830c.
 * REA evidence: ev_17c32b047b945634571a9619b8048bfb54541aeb0deb11f8ef9f067e984c6593
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000830c(int param_1,uint param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  fVar1 = DAT_ram_30049d44;
  if (DAT_ram_30057d04 == '\0') {
    return;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = _DAT_ram_30057d02 + 1 & 0x1fff;
      if ((_DAT_ram_30057d00 == uVar3) || ((uint)_DAT_ram_30057d00 == (uVar3 + 1 & 0x1fff))) {
        _DAT_ram_3004e814 = _DAT_ram_3004e814 + 1;
      }
      else {
        iVar4 = (int)((float)(*(int *)(param_1 + uVar2 * 8) >> 0x10) * fVar1);
        if (iVar4 < -0x8000) {
          iVar4 = -0x8000;
        }
        if (0x7fff < iVar4) {
          iVar4 = 0x7fff;
        }
        *(short *)((uint)_DAT_ram_30057d02 * 2 + 0x30053d00) = (short)iVar4;
        *(short *)(uVar3 * 2 + 0x30053d00) = (short)iVar4;
        _DAT_ram_30057d02 = (ushort)(uVar3 + 1) & 0x1fff;
      }
      uVar2 = uVar2 + 1 & 0xffff;
    } while (uVar2 < param_2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40008386.
 * REA evidence: ev_b2666926f97a83dbebb69dd28e19c7628c38c59b2136d7dbdf3d61f073bc8e51
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40008386(int param_1,uint param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                     undefined4 param_6,uint param_7)

{
  int in_t0;
  ushort *in_t1;
  int in_t2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *in_t3;
  int in_t4;
  int in_t5;
  ushort *in_t6;
  float in_fa4;
  
  do {
    uVar2 = *in_t1 + 1 & param_7 & 0xffff;
    uVar1 = uVar2 + 1 & param_7;
    if ((*in_t6 == uVar2) || ((uint)*in_t6 == (uVar1 & 0xffff))) {
      *in_t3 = *in_t3 + 1;
    }
    else {
      iVar3 = (int)((float)(*(int *)(param_1 + param_4 * 8) >> 0x10) * in_fa4);
      if (iVar3 < in_t0) {
        iVar3 = -0x8000;
      }
      if (in_t4 <= iVar3) {
        iVar3 = in_t2;
      }
      *(short *)(in_t5 + (uint)*in_t1 * 2) = (short)iVar3;
      *(short *)(in_t5 + uVar2 * 2) = (short)iVar3;
      *in_t1 = (ushort)uVar1;
    }
    param_4 = param_4 + 1 & 0xffff;
  } while (param_4 < param_2);
  return;
}


/* NanoCore 1.11, address 0x400083d4.
 * REA evidence: ev_4b803c9e12d71fa5d4ddd1455e56a5306cd6685c96a4cedbb57742c892456d34
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400083d4(int param_1)

{
  _DAT_ram_3004d528 = _DAT_ram_3004d528 + param_1;
  DAT_ram_30049c08 = param_1 + DAT_ram_30049c08;
  return;
}


/* NanoCore 1.11, address 0x400083f2.
 * REA evidence: ev_9185c459cd987d2b0f7e5fce436f718517e5e872638aa8d83e607983b57a9c27
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400083f2(int param_1)

{
  ulonglong uVar1;
  
  FUN_ram_400002f4();
  uVar1 = (ulonglong)DAT_ram_4009462c;
  *(ulonglong *)(param_1 + 0x6c) = uVar1;
  *(ulonglong *)(param_1 + 0x70) = uVar1;
  *(ulonglong *)(param_1 + 0x74) = uVar1;
  *(ulonglong *)(param_1 + 0x78) = uVar1;
  *(ulonglong *)(param_1 + 0x7c) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = DAT_ram_40094630;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x40008426.
 * REA evidence: ev_a7d3a37406445f2292496fdd73eb6020b8cb7b939ace74adc4545a2034e2e39f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40008426(int param_1,undefined1 param_2,undefined4 param_3)

{
  FUN_ram_400002f4();
  param_1 = param_1 * 0xc;
  *(undefined1 *)(param_1 + 0x3004d4c4) = param_2;
  *(undefined4 *)(param_1 + 0x3004d4c8) = param_3;
  *(int *)(param_1 + 0x3004d4c0) = *(int *)(param_1 + 0x3004d4c0) + 1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x40008466.
 * REA evidence: ev_f2c8262d855f3b400365d3a7999d9ca2253cb0ce037fffd60ea8db19dcdb3ebe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40008466(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_ram_4003b720();
  if (-1 < (int)uVar2) {
    iVar1 = (int)uVar2 >> 5;
    uVar2 = uVar2 & 0x1f;
    if (param_2 == 0) {
      FUN_ram_4003b7a0(iVar1,uVar2);
    }
    else {
      FUN_ram_4003b7ce(iVar1,uVar2);
    }
    FUN_ram_4003b914(iVar1,uVar2,1);
    FUN_ram_4003b98e(iVar1,uVar2,0);
    FUN_ram_4003b94e(iVar1,uVar2,3);
    FUN_ram_4003ba50(iVar1,uVar2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400084ce.
 * REA evidence: ev_d1084f8782d2c49f8f8b96c36e2726dc021e82983b145593a8a2bd6a4bbd5c78
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400084ce(undefined1 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  if (DAT_ram_30050888 != '\0') {
    param_1 = 0;
  }
  FUN_ram_40008466(s_PD_16_ram_4009456c,param_1);
  FUN_ram_400002fa(uVar1);
  return;
}


/* NanoCore 1.11, address 0x40008508.
 * REA evidence: ev_792f379527a095823a68e16b0da9d8b28a53f13a232ff97e9dd903338b026c7b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40008508(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((param_1 - 0x1eU & 0xff) < 8) && (iVar2 = FUN_ram_400905cc(param_1,0x3004da6c), iVar2 == 0))
  {
    FUN_ram_40007b86(0x3004da6c,0,0);
    DAT_ram_30049be0 = (undefined1)param_1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40008558.
 * REA evidence: ev_1a95ea72640bfd95489c6575e01f5020546eea9b8ae59b63740eb77ace72ea5d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40008558(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_ram_40008508(DAT_ram_30049be0);
  if (iVar2 == 0) {
    uVar3 = 0;
    if ((0x1d < DAT_ram_30049be0) && ((byte)(DAT_ram_30049be0 - 0x1e) < 8)) {
      DAT_ram_3004e7c8 = DAT_ram_30049be0 - 0x1e;
    }
  }
  else {
    cVar1 = '\0';
    do {
      iVar2 = FUN_ram_40008508(cVar1 + '\x1e');
      if (iVar2 == 0) {
        DAT_ram_3004e7c8 = cVar1;
        return 0;
      }
      cVar1 = cVar1 + '\x01';
    } while (cVar1 != '\b');
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x400085c8.
 * REA evidence: ev_cd849b11bcfa9a817940a0e1926519fd8e956bd362a24afba0081515b8ff2e96
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_400085c8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_ram_4005fcbe(0x3004dec4);
  iVar3 = FUN_ram_4005fca2(0x3004dec4);
  if ((iVar2 == 0) || (iVar3 == 0)) {
    FUN_ram_40007884(0);
    return -1;
  }
  if (param_1 == 0) {
LAB_ram_4000862a:
    FUN_ram_40007884(0);
    FUN_ram_4000304c(iVar3,iVar2,0x304);
    if ((*(int *)(iVar2 + 0x13c) != 8) || (*(byte *)(iVar2 + 0x140) != DAT_ram_3004e7c8)) {
      FUN_ram_4006c8b8(iVar3 + 0x144,0xc,DAT_ram_3004e7c8);
    }
    *(undefined4 *)(iVar3 + 0x13c) = 8;
    bVar1 = DAT_ram_3004e7c8;
    *(undefined1 *)(iVar3 + 0x141) = 0;
    *(byte *)(iVar3 + 0x140) = bVar1;
    *(undefined4 *)(iVar3 + 0x180) = _DAT_ram_3004e7c4;
    FUN_ram_4005fcd6(0x3004dec4);
    return -(uint)(param_1 != 0);
  }
  if (DAT_ram_3004e7c8 < 8) {
    iVar4 = FUN_ram_40089d70(0x3004da6c);
    if (iVar4 == 0) {
      if (DAT_ram_3004e7c8 < 8) {
        FUN_ram_40008508(DAT_ram_3004e7c8 + 0x1e);
      }
      else {
        FUN_ram_40008558();
      }
    }
    if ((DAT_ram_3004e7c8 < 8) && (iVar4 = FUN_ram_40089d70(0x3004da6c), iVar4 == 0))
    goto LAB_ram_4000862a;
  }
  FUN_ram_40007884(1);
  FUN_ram_4000304c(iVar3,iVar2,0x304);
  if ((*(int *)(iVar2 + 0x13c) != 8) || (*(byte *)(iVar2 + 0x140) != DAT_ram_3004e7c8)) {
    FUN_ram_4006c8b8(iVar3 + 0x144,0xc,DAT_ram_3004e7c8);
  }
  *(undefined4 *)(iVar3 + 0x13c) = 8;
  *(byte *)(iVar3 + 0x140) = DAT_ram_3004e7c8;
  *(undefined4 *)(iVar3 + 0x180) = _DAT_ram_3004e7c4;
  *(undefined1 *)(iVar3 + 0x141) = 1;
  FUN_ram_4005fcd6(0x3004dec4);
  return 0;
}


/* NanoCore 1.11, address 0x4000873c.
 * REA evidence: ev_1e888a89b9dffe873cd418101273f4612551254ce2d69d9ede5d72e69bc4a130
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000873c(uint param_1)

{
  int iVar1;
  
  if (0x1d < param_1) {
    return;
  }
  iVar1 = FUN_ram_400905cc(param_1,0x300508ec);
  if (iVar1 == 0) {
    FUN_ram_40007b86(0x300508ec,0,0);
    FUN_ram_400002f4();
    DAT_ram_30049d58 = (undefined1)param_1;
    FUN_ram_400002fa();
    FUN_ram_400083f2(0x3005093c);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40008794.
 * REA evidence: ev_40ea1f28b0a87ea01df8de87c0309934064b5629589440ba84bd5152eadb24e8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_40008794(void)

{
  int iVar1;
  
  if (_DAT_ram_3004e748 != 0) {
    iVar1 = FUN_ram_40006464();
    return _DAT_ram_3004e778 == iVar1;
  }
  return false;
}


/* NanoCore 1.11, address 0x400087c0.
 * REA evidence: ev_a28101db23b1a19f1207a8a2cf6a0b883254d0d59d6382a0f9aadbf8fea163dc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400087c0(void)

{
  if (DAT_ram_3004d564 != '\0') {
    FUN_ram_400049c6(0x3004d538,0xffffffff);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400087da.
 * REA evidence: ev_39f9c6eaf5f6d943c954e4467369197daa48e3ec06ab7c0e44c158df61c76b43
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400087da(int param_1)

{
  if (param_1 == 8) {
    FUN_ram_4006c754();
    return;
  }
  if (param_1 != 9) {
    FUN_ram_4006c7fe();
    return;
  }
  FUN_ram_4006c75e(_DAT_ram_3005087c);
  return;
}


/* NanoCore 1.11, address 0x400087fc.
 * REA evidence: ev_215e86db45b329df1d32a573b826ab2a55df4eb061eec1dd16383a6a45229c7a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400087fc(undefined1 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  iVar1 = FUN_ram_40008794();
  if (iVar1 == 0) {
    if (DAT_ram_3004e77c == '\0') {
      iVar1 = 0;
      if (DAT_ram_3004dac0 != '\0') {
        iVar1 = -(uint)(DAT_ram_30050889 == '\0');
      }
    }
    else {
      iVar1 = FUN_ram_40007d9e();
      if (iVar1 == 0) {
        *param_1 = 1;
        iVar1 = 0;
      }
      else {
        iVar1 = -1;
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40008850.
 * REA evidence: ev_e53b2a29767d37528de162ea4088391e9c39650c848a0fd04430ce7e9dcd5cae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40008850(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_ram_40006464();
  uVar1 = _DAT_ram_3004e72c;
  if ((DAT_ram_3004e77c != '\0') && (_DAT_ram_3004e778 == iVar2)) {
    if (_DAT_ram_3004e748 != 0) {
      if (_DAT_ram_3004e748 == 1) {
        uVar3 = FUN_ram_400002f4();
        FUN_ram_400228d0(&DAT_ram_3004e72c,uVar1);
        if ((DAT_ram_3004dac0 == '\0') || (DAT_ram_30050889 != '\0')) {
          FUN_ram_400228fa(&DAT_ram_3004e72c);
        }
        FUN_ram_400002fa(uVar3);
        FUN_ram_40007d22(0x3004e734,uVar1);
        _DAT_ram_3004e748 = 0;
        _DAT_ram_3004e778 = 0;
        FUN_ram_40004ab8(0x3004e74c);
        return;
      }
      _DAT_ram_3004e748 = _DAT_ram_3004e748 + -1;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4000890c.
 * REA evidence: ev_a3741a064c58e7eab94e3e1c17f4a82c1c90352ca806d97b69eae13fe01aa021
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000890c(code *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40007d9e();
  if (iVar1 == 0) {
    FUN_ram_400087c0();
    uVar2 = (*param_1)(param_2);
    FUN_ram_40007cba();
    FUN_ram_40008850();
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x40008940.
 * REA evidence: ev_646a5cb13b9da602ac8c87042a1f70c37a94406ce96df41a24cae6f1cafcbe89
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40008940(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40008850();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40008948.
 * REA evidence: ev_54ab46f6999a904776f899f781d6c479a8a90a6bf4e1a4d5b0820f1a01d529e5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40008948(undefined2 *param_1,undefined2 param_2)

{
  FUN_ram_400002f4();
  *param_1 = param_2;
  _DAT_ram_3004d490 = _DAT_ram_3004d490 + 1;
  FUN_ram_400002fa();
  FUN_ram_400048c4(0x3004d498);
  return;
}


/* NanoCore 1.11, address 0x40008980.
 * REA evidence: ev_bbe8619c918a6c686f1de089d9e156c9b0645e4c6e217031c24bab24a9d827e4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40008980(int param_1)

{
  if ((param_1 != 0) && (DAT_ram_3004e77c != '\0')) {
    FUN_ram_400048c4(0x3004e780);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4000899a.
 * REA evidence: ev_8cd6aaf198f79d7a1ee02f59ac6a2e5a68108d354bdc735a8834bf34ed01c673
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000899a(undefined4 param_1)

{
  FUN_ram_40022938(&DAT_ram_3004e72c,0,0,param_1);
  FUN_ram_40008980();
  return;
}


/* NanoCore 1.11, address 0x400089b8.
 * REA evidence: ev_5aa88efe1f8d9776dd16db227269ae3c6687408e4f7154f052603cb903c2f8d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400089b8(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    if ((*(char *)((int)param_1 + uVar1 + 0x38) != '\0') &&
       (iVar2 = FUN_ram_40060118(*param_1,*(undefined1 *)(param_1 + 1),uVar1 & 0xff), iVar2 == 0)) {
      *(undefined1 *)((int)param_1 + uVar1 + 0x38) = 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0xc);
  return;
}


/* NanoCore 1.11, address 0x400089fc.
 * REA evidence: ev_7ea7e714ebcac0cfc25df647c407250fbe952517a6c4e409dea7337a7e28da07
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400089fc(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_ram_4005fcbe(0x3004dec4);
  iVar3 = FUN_ram_4005fca2(0x3004dec4);
  uVar4 = 0xffffffff;
  if ((iVar2 != 0) && (uVar4 = 0xffffffff, iVar3 != 0)) {
    if ((param_1 - 5 & 0xff) < 3) {
      FUN_ram_4000304c(iVar3,iVar2,0x304);
      uVar1 = param_1 + 3 & 0xff;
      if ((*(int *)(iVar2 + 0x1d4) != 8) || (*(byte *)(iVar2 + 0x1d8) != uVar1)) {
        FUN_ram_4006c8b8(iVar3 + 0x1dc,0xc,uVar1);
      }
      *(undefined4 *)(iVar3 + 0x1d4) = 8;
      *(undefined4 *)(iVar3 + 0x218) = _DAT_ram_3005087c;
      *(char *)(iVar3 + 0x1d8) = (char)(param_1 + 3);
      FUN_ram_40007f4e(iVar3,6);
      FUN_ram_400089b8(iVar3 + 0x1d4);
      FUN_ram_4005fcd6(0x3004dec4);
      FUN_ram_400087da(uVar1);
    }
    else {
      if (0x11 < param_1) {
        param_1 = 0;
      }
      FUN_ram_4000304c(iVar3,iVar2,0x304);
      if ((*(int *)(iVar2 + 0x1d4) != 4) || (*(byte *)(iVar2 + 0x1d8) != param_1)) {
        FUN_ram_400717b4(iVar3 + 0x1dc,0xc,param_1);
      }
      *(undefined4 *)(iVar3 + 0x1d4) = 4;
      *(undefined4 *)(iVar3 + 0x218) = _DAT_ram_30050884;
      *(char *)(iVar3 + 0x1d8) = (char)param_1;
      FUN_ram_40007f4e(iVar3,6);
      FUN_ram_400089b8(iVar3 + 0x1d4);
      FUN_ram_4005fcd6(0x3004dec4);
      FUN_ram_40070e40(_DAT_ram_30050884);
    }
    uVar4 = 0;
  }
  return uVar4;
}


/* NanoCore 1.11, address 0x40008b2e.
 * REA evidence: ev_98bc5239120ea85931415392f7323db85d0613fc3e845efe2f6cfc20bb4c0efc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40008b2e(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_ram_3005088c != 0) {
    iVar1 = FUN_ram_40073ad0(_DAT_ram_3005088c);
    if (iVar1 == param_1) {
      return 0;
    }
    iVar1 = FUN_ram_40008794();
    if (((iVar1 != 0) || (DAT_ram_3004dac0 == '\0')) || (DAT_ram_30050889 != '\0')) {
      FUN_ram_400087c0();
      iVar1 = FUN_ram_4005fcbe(0x3004dec4);
      iVar2 = FUN_ram_4005fca2(0x3004dec4);
      if (((iVar1 != 0) && (iVar2 != 0)) &&
         ((*(int *)(iVar1 + 0xa4) == 3 && (*(char *)(iVar1 + 0xa9) != '\0')))) {
        FUN_ram_4000304c(iVar2,iVar1,0x304);
        *(undefined1 *)(iVar2 + 0xa9) = 0;
        FUN_ram_4005fcd6(0x3004dec4);
        if ((DAT_ram_3004dac0 != '\0') && (DAT_ram_30050889 == '\0')) {
          FUN_ram_400065c6(5);
        }
      }
      FUN_ram_400739ec(_DAT_ram_3005088c,param_1);
      FUN_ram_40007cba();
      return 0;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40008bf4.
 * REA evidence: ev_f66d065644b0013146a149286ceb192a4cd1db9f3eeeb11dd69f8f38e142cc3e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40008bf4(uint param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 uStack_11;
  
  uStack_11 = 0;
  iVar3 = FUN_ram_400087fc(&uStack_11);
  if (iVar3 == 0) {
    FUN_ram_400087c0();
    iVar3 = FUN_ram_4005fcbe(0x3004dec4);
    iVar4 = FUN_ram_4005fca2(0x3004dec4);
    if ((((iVar3 != 0) && (iVar4 != 0)) &&
        ((*(int *)(iVar3 + 0xa4) != 3 ||
         ((bVar1 = *(byte *)(iVar3 + 0xa8), bVar1 != param_1 ||
          (uVar5 = FUN_ram_40073ad0(_DAT_ram_3005088c), uVar5 != bVar1)))))) &&
       (iVar3 = FUN_ram_40008b2e(param_1), iVar3 == 0)) {
      iVar3 = FUN_ram_4005fcbe(0x3004dec4);
      iVar4 = FUN_ram_4005fca2(0x3004dec4);
      if ((iVar3 != 0) && (iVar4 != 0)) {
        FUN_ram_4000304c(iVar4,iVar3,0x304);
        if ((*(int *)(iVar3 + 0xa4) != 3) || (*(byte *)(iVar3 + 0xa8) != param_1)) {
          FUN_ram_40073b74(iVar4 + 0xac,0xc,param_1);
        }
        uVar2 = _DAT_ram_3005088c;
        *(undefined4 *)(iVar4 + 0xa4) = 3;
        *(undefined4 *)(iVar4 + 0xe8) = uVar2;
        *(char *)(iVar4 + 0xa8) = (char)param_1;
        FUN_ram_40007f4e(iVar4,2);
        FUN_ram_40073ade(uVar2);
        FUN_ram_4005fcd6(0x3004dec4);
      }
    }
    FUN_ram_40007cba();
    FUN_ram_40008940(uStack_11);
  }
  return;
}


/* NanoCore 1.11, address 0x40008cee.
 * REA evidence: ev_fca03413c55c990812fabd054f0ebb1a76673f96eaa12828bd9af6f830e25cdd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40008cee(void)

{
  bool bVar1;
  int iVar2;
  
  FUN_ram_400002f4();
  DAT_ram_3004d574 = '\0';
  DAT_ram_3004d57c = 1;
  iVar2 = 0x15;
  FUN_ram_400002fa();
  while ((DAT_ram_3004d574 == '\0' && (iVar2 = iVar2 + -1, iVar2 != 0))) {
    FUN_ram_400065c6(1);
  }
  bVar1 = DAT_ram_3004d574 != '\0';
  if (!bVar1) {
    FUN_ram_400002f4();
    DAT_ram_3004d57c = 0;
    FUN_ram_400002fa();
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x40008d5a.
 * REA evidence: ev_9fcce9c4e13dfe4a49452eb05e731873791a48dcf727ad3dbf40a1bc146318e9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40008d5a(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = _DAT_ram_3004e7c4;
  iVar3 = FUN_ram_40007a94(4,8);
  FUN_ram_400087c0();
  iVar4 = FUN_ram_4005fcbe(0x3004dec4);
  iVar5 = FUN_ram_4005fca2(0x3004dec4);
  uVar2 = 0xffffffff;
  if ((iVar4 != 0) && (iVar5 != 0)) {
    FUN_ram_4000304c(iVar5,iVar4,0x304);
    *(undefined4 *)(iVar5 + 0x13c) = 8;
    uVar2 = DAT_ram_40094634;
    *(undefined4 *)(iVar5 + 0x180) = uVar1;
    *(undefined4 *)(iVar5 + 0x144) = uVar2;
    *(undefined4 *)(iVar5 + 0x148) = uVar2;
    uVar1 = _DAT_ram_40094638;
    *(bool *)(iVar5 + 0x141) = iVar3 != 0;
    *(undefined4 *)(iVar5 + 0x14c) = uVar1;
    FUN_ram_4005fcd6(0x3004dec4);
    uVar2 = 0;
  }
  FUN_ram_40007cba();
  return uVar2;
}


/* NanoCore 1.11, address 0x40008df8.
 * REA evidence: ev_c6cb1420b19e54d97fd10cfbc066c76c06ca7a370125b691bd5a5749868f0b58
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40008df8(int param_1)

{
  int iVar1;
  
  iVar1 = 0x40;
  do {
    if (*(int *)(param_1 + 0x8c) == 0) {
      return 0;
    }
    iVar1 = iVar1 + -1;
    FUN_ram_400065c6(1);
  } while (iVar1 != 0);
  return -(uint)(*(int *)(param_1 + 0x8c) != 0);
}


/* NanoCore 1.11, address 0x40008e30.
 * REA evidence: ev_f3b3da0f3cbb611b7da77cb8c0e35ec97aab3c2ec922232db8d83dfb1e137daf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40008e30(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 local_24 [3];
  
  FUN_ram_40073dce(param_1,0xc);
  FUN_ram_40073dce(local_24,5);
  iVar3 = 0;
  do {
    puVar1 = (undefined8 *)((int)local_24 + iVar3);
    puVar2 = (undefined8 *)(param_1 + iVar3);
    iVar3 = iVar3 + 4;
    *puVar2 = *puVar1;
  } while (iVar3 != 0x14);
  return;
}


/* NanoCore 1.11, address 0x40008e64.
 * REA evidence: ev_1607c1cbf0117cff94591b9c1fb54b6a241b87918886ced6ffe4db793a317e33
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40008e64(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_4005fcbe(0x3004dec4);
  iVar2 = FUN_ram_4005fca2(0x3004dec4);
  if ((iVar1 == 0) || (iVar2 == 0)) {
    FUN_ram_4000781e(0);
  }
  else {
    if (param_1 == 0) {
      FUN_ram_4000781e(0);
      FUN_ram_4000304c(iVar2,iVar1,0x304);
      if (*(int *)(iVar1 + 0xc) != 1) {
        *(undefined1 *)(iVar2 + 0x10) = 0;
        FUN_ram_40008e30(iVar2 + 0x14);
      }
      *(undefined4 *)(iVar2 + 0x50) = 0x3005093c;
      *(undefined4 *)(iVar2 + 0xc) = 1;
      *(undefined2 *)(iVar2 + 0x10) = 0;
      FUN_ram_4005fcd6(0x3004dec4);
      return 0;
    }
    iVar3 = FUN_ram_40089d70(0x300508ec);
    if (iVar3 == 0) {
      FUN_ram_40007bee();
    }
    iVar3 = FUN_ram_40089d70(0x300508ec);
    if (iVar3 != 0) {
      FUN_ram_4000781e(1);
      FUN_ram_4000304c(iVar2,iVar1,0x304);
      if (*(int *)(iVar1 + 0xc) != 1) {
        *(undefined1 *)(iVar2 + 0x10) = 0;
        FUN_ram_40008e30(iVar2 + 0x14);
      }
      *(undefined4 *)(iVar2 + 0xc) = 1;
      *(undefined4 *)(iVar2 + 0x50) = 0x3005093c;
      *(undefined2 *)(iVar2 + 0x10) = 0x100;
      FUN_ram_4005fcd6(0x3004dec4);
      return 0;
    }
    FUN_ram_4000781e();
    FUN_ram_4000304c(iVar2,iVar1,0x304);
    if (*(int *)(iVar1 + 0xc) != 1) {
      *(undefined1 *)(iVar2 + 0x10) = 0;
      FUN_ram_40008e30(iVar2 + 0x14);
    }
    *(undefined4 *)(iVar2 + 0x50) = 0x3005093c;
    *(undefined4 *)(iVar2 + 0xc) = 1;
    *(undefined2 *)(iVar2 + 0x10) = 0;
    FUN_ram_4005fcd6(0x3004dec4);
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40008f9a.
 * REA evidence: ev_8b94acc26bd8fe61cac311917f1187312af999de9740ad82a6ccf077a212bcb4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40008f9a(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003ef74(1,param_1);
  if (iVar1 != 0) {
    memset(iVar1,0,param_1);
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40008fc0.
 * REA evidence: ev_4cba3f2dcff96eaf02c1dc268fad147a026cde1da2c988d28854be5f4deab696
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40009444) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40008fc0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar1 = DAT_ram_30049d40;
  if (DAT_ram_30049d40 << 1 < 0x101) {
    memset(0x300536c0,0,0x400);
    _DAT_ram_3004d5a0 = 0;
    _DAT_ram_3004d5c4 = 0;
    DAT_ram_3004d5c0 = 0;
    _DAT_ram_3004d5c8 = 0;
    _DAT_ram_3004d58c = 0;
    _DAT_ram_3004d5ac = 0;
    _DAT_ram_3004d5b4 = 0;
    _DAT_ram_3004d5b8 = 0;
    _DAT_ram_3004d5bc = 0;
    _DAT_ram_3004d5b0 = 0;
    _DAT_ram_3004d5a8 = 0;
    _DAT_ram_3004d588 = 0;
    DAT_ram_3004d57c = 0;
    DAT_ram_3004d574 = 0;
    _DAT_ram_3004d570 = 0;
    _DAT_ram_3004d584 = 0;
    _DAT_ram_3004d56c = 0;
    _DAT_ram_3004d578 = 0;
    _DAT_ram_3004d580 = 0;
    _DAT_ram_3004d568 = 0;
    _DAT_ram_3004d59c = 0;
    _DAT_ram_3004d594 = 0;
    _DAT_ram_3004d598 = 0;
    DAT_ram_30049bd8 = 0xffffffff;
    _DAT_ram_3004d590 = 0;
    _DAT_ram_3004d5a4 = 0;
    DAT_ram_30049bd4 = 0xffffffff;
    DAT_ram_3004d567 = 0;
    memset(0x30052ec0,0,0x800);
    memset(0x30052e40,0,0x60);
    memset(0x30050890,0,0x40);
    _DAT_ram_300508d4 = 0;
    _DAT_ram_300508d0 = 0;
    DAT_ram_3004d520 = 0;
    _DAT_ram_3004d528 = 0;
    if (_DAT_ram_3004d4f0 != 0) {
      do {
        iVar2 = FUN_ram_400048c0(_DAT_ram_3004d4f0);
      } while (iVar2 == 0);
    }
    FUN_ram_400076aa(0x300536c0,0x400);
    FUN_ram_400076aa(0x30052e40,0x60);
    iVar2 = FUN_ram_40039b64(_DAT_ram_3004dab4,0x300536c0,uVar1 << 3,uVar1 << 2,2);
    if ((iVar2 == 0) &&
       (iVar2 = FUN_ram_40039b64(_DAT_ram_3004dab8,0x30052e40,0x60,0x20,1), iVar2 == 0)) {
      *(undefined1 *)(_DAT_ram_3004dab8 + 2) = 2;
      fence();
      fence();
      puVar4 = _DAT_ram_3004e7d0 + 5;
      *puVar4 = _DAT_ram_3004e7d0[5] | 0x2000000;
      fence();
      fence();
      _DAT_ram_3004e7d0[5] = *puVar4 | 0x1000000;
      fence();
      _DAT_ram_3004e7d0[10] = 0;
      puVar4 = _DAT_ram_3004e7d0;
      fence();
      _DAT_ram_3004e7d0[0xb] = 0;
      fence();
      fence();
      puVar5 = _DAT_ram_3004e7d0 + 5;
      *puVar5 = puVar4[5] | 4;
      fence();
      fence();
      puVar4 = _DAT_ram_3004e7d0 + 5;
      *puVar4 = *puVar5 & 0xfffffffc | 1;
      fence();
      fence();
      _DAT_ram_3004e7d0[5] = *puVar4 & 0xfff80fff | 0x7c000;
      uVar1 = DAT_ram_30049d40;
      DAT_ram_300508d8 = 0;
      _DAT_ram_300508dc = *(undefined4 *)(*(int *)(_DAT_ram_3004dab4 + 8) + 0x30);
      fence();
      DAT_ram_3004dac0 = 0;
      DAT_ram_30049d5c = 0x2000;
      _DAT_ram_30052e04 = 0;
      _DAT_ram_30052e14 = 0;
      _DAT_ram_30052e08 = 0;
      DAT_ram_30049d60 = 0x10000;
      DAT_ram_30049d50._7_1_ = param_1 != 0;
      if ((bool)DAT_ram_30049d50._7_1_) {
        DAT_ram_300508e6 = 0;
      }
      _DAT_ram_300508e2 = 0;
      _DAT_ram_300508e0 = 0;
      _DAT_ram_300508ea = 0;
      DAT_ram_300508e4 = 0;
      DAT_ram_300508e5 = 0;
      _DAT_ram_300508e8 = 0;
      _DAT_ram_3004e720 = 0;
      _DAT_ram_3004e724 = 0;
      iVar2 = _DAT_ram_3004e728;
      if (_DAT_ram_3004e728 == 0) {
        iVar2 = 0xac44;
      }
      iVar3 = FUN_ram_4003fdba();
      DAT_ram_30049c04 =
           FUN_ram_40003b9c((uVar1 >> 1) * iVar3,
                            (int)((longlong)iVar3 * (ulonglong)(uVar1 >> 1) >> 0x20),iVar2,0);
      DAT_ram_30049c08 = 0;
      DAT_ram_30049c0c = 0xffffffff;
      DAT_ram_30049c10 = 0;
      DAT_ram_30049c14 = 0;
      DAT_ram_30049c18 = 0;
      DAT_ram_30049c1c = 0;
      DAT_ram_30049c20 = 0;
      DAT_ram_30049c24 = 0;
      DAT_ram_30049c28 = 0;
      DAT_ram_30049c2c = 0;
      DAT_ram_30049c30 = 0;
      DAT_ram_30049c34 = 0;
      DAT_ram_30049c74 = 0;
      DAT_ram_30049c78 = 0;
      DAT_ram_30049c7c = 0;
      DAT_ram_30049c80 = 0;
      DAT_ram_30049c84 = 0;
      DAT_ram_30049c88 = 0;
      DAT_ram_30050889 = 0;
      _DAT_ram_3004d5a0 = 0;
      _DAT_ram_3004d5c4 = 0x40;
      iVar2 = 4;
      do {
        fence();
        _DAT_ram_3004e7d0[8] = 0;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      DAT_ram_3004d5c0 = 1;
      iVar2 = FUN_ram_40039c7e(_DAT_ram_3004dab8);
      puVar4 = _DAT_ram_3004e7d0;
      if (iVar2 == 0) {
        _DAT_ram_3004d5ac = *(uint *)(*(int *)(_DAT_ram_3004dab8 + 8) + 0x30);
        fence();
        _DAT_ram_3004d5b4 = _DAT_ram_3004d5ac % 3;
        fence();
        fence();
        *_DAT_ram_3004e7d0 = *_DAT_ram_3004e7d0 | 4;
        puVar5 = _DAT_ram_3004e7d0;
        fence();
        fence();
        *_DAT_ram_3004e7d0 = *puVar4 | 0x100;
        fence();
        fence();
        _DAT_ram_3004e7d0[7] = puVar5[7] | 0x80;
        FUN_ram_40039c7e(_DAT_ram_3004dab4);
        puVar4 = _DAT_ram_3004e7d0;
        fence();
        fence();
        *_DAT_ram_3004e7d0 = *_DAT_ram_3004e7d0 | 2;
        fence();
        fence();
        _DAT_ram_3004e7d0[7] = puVar4[7] | 8;
        return 0;
      }
    }
  }
  return 0xffffffff;
}


