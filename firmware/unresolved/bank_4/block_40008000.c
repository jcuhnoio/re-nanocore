/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40008000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40008006.
 * REA evidence: ev_4e579d88e0aa0644289d7fc07853a3b458dcf6d5590128ba5e03aa013fa9bb74
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40008006(int param_1,uint param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  fVar1 = DAT_ram_30046684;
  if (DAT_ram_300567c4 == '\0') {
    return;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = _DAT_ram_300567c2 + 1 & 0x1fff;
      if ((_DAT_ram_300567c0 == uVar3) || ((uint)_DAT_ram_300567c0 == (uVar3 + 1 & 0x1fff))) {
        _DAT_ram_3004b4b8 = _DAT_ram_3004b4b8 + 1;
      }
      else {
        iVar4 = (int)((float)(*(int *)(param_1 + uVar2 * 8) >> 0x10) * fVar1);
        if (iVar4 < -0x8000) {
          iVar4 = -0x8000;
        }
        if (0x7fff < iVar4) {
          iVar4 = 0x7fff;
        }
        *(short *)((uint)_DAT_ram_300567c2 * 2 + 0x300527c0) = (short)iVar4;
        *(short *)(uVar3 * 2 + 0x300527c0) = (short)iVar4;
        _DAT_ram_300567c2 = (ushort)(uVar3 + 1) & 0x1fff;
      }
      uVar2 = uVar2 + 1 & 0xffff;
    } while (uVar2 < param_2);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40008080.
 * REA evidence: ev_65524b65adfd72251e06855bfc8dbf8a99b4372bcfe1a785e9ff460fcc132364
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40008080(int param_1,uint param_2,undefined4 param_3,uint param_4,undefined4 param_5,
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


/* NanoCore 1.10, address 0x400080ce.
 * REA evidence: ev_6e72f00081121afe26c7b22ebe09deb590b293630ab6ed247d49309896332166
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400080ce(int param_1)

{
  _DAT_ram_30049e78 = _DAT_ram_30049e78 + param_1;
  DAT_ram_30046548 = param_1 + DAT_ram_30046548;
  return;
}


/* NanoCore 1.10, address 0x400080ec.
 * REA evidence: ev_3442d2b6ba37ecc983bff9183cd5a5345da5963347ba1792897c22020f6ebecc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400080ec(int param_1)

{
  ulonglong uVar1;
  
  FUN_ram_400002f4();
  uVar1 = (ulonglong)DAT_ram_40092844;
  *(ulonglong *)(param_1 + 0x6c) = uVar1;
  *(ulonglong *)(param_1 + 0x70) = uVar1;
  *(ulonglong *)(param_1 + 0x74) = uVar1;
  *(ulonglong *)(param_1 + 0x78) = uVar1;
  *(ulonglong *)(param_1 + 0x7c) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = DAT_ram_40092848;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x40008120.
 * REA evidence: ev_306134ce37e2513a8b54ae8e30f4f6a133b5ec9fc36059cb15650dd404cf5212
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40008120(void)

{
  if (DAT_ram_30049eb4 != '\0') {
    FUN_ram_400049d6(0x30049e88,0xffffffff);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4000813a.
 * REA evidence: ev_6f76cb1ad988a9fe2f0c6a4d4f8b1167a0cd01e9e730cd5bfa02fa0e81ae3a3d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000813a(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((param_1 - 0x1eU & 0xff) < 8) && (iVar2 = FUN_ram_4008dbbc(param_1,0x3004a390), iVar2 == 0))
  {
    FUN_ram_40007be6(0x3004a390,0,0);
    DAT_ram_30046520 = (undefined1)param_1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4000818a.
 * REA evidence: ev_623ebf4788787221481ca696f77d30126c34cc9274c301c0857a0c7a1aad3386
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000818a(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_ram_4000813a(DAT_ram_30046520);
  if (iVar2 == 0) {
    uVar3 = 0;
    if ((0x1d < DAT_ram_30046520) && ((byte)(DAT_ram_30046520 - 0x1e) < 8)) {
      DAT_ram_3004b46c = DAT_ram_30046520 - 0x1e;
    }
  }
  else {
    cVar1 = '\0';
    do {
      iVar2 = FUN_ram_4000813a(cVar1 + '\x1e');
      if (iVar2 == 0) {
        DAT_ram_3004b46c = cVar1;
        return 0;
      }
      cVar1 = cVar1 + '\x01';
    } while (cVar1 != '\b');
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x400081fa.
 * REA evidence: ev_2d51a70eda7ef0de7da52dd0fa52ce192d37cdca80e956e1a4f58fb482f4f043
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400081fa(int param_1)

{
  if (param_1 == 8) {
    FUN_ram_40068efa();
    return;
  }
  if (param_1 != 9) {
    FUN_ram_40068fee();
    return;
  }
  FUN_ram_40068f4a(_DAT_ram_3004d518);
  return;
}


/* NanoCore 1.10, address 0x4000821c.
 * REA evidence: ev_b1826f72583bdf285d7fae5e7c9789781217178919153e7a363aad50d72fe4f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4000821c(void)

{
  int iVar1;
  
  if (_DAT_ram_3004b3f0 != 0) {
    iVar1 = FUN_ram_40006472();
    return _DAT_ram_3004b420 == iVar1;
  }
  return false;
}


/* NanoCore 1.10, address 0x40008248.
 * REA evidence: ev_061d054303cf053697a09c2f32ac9fd68bf3fe212248d7f72a721d16e14634da
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40008248(undefined1 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  iVar1 = FUN_ram_4000821c();
  if (iVar1 == 0) {
    if (DAT_ram_3004b424 == '\0') {
      iVar1 = 0;
      if (DAT_ram_3004a3e4 != '\0') {
        iVar1 = -(uint)(DAT_ram_3004d524 == '\0');
      }
    }
    else {
      iVar1 = FUN_ram_40007d82();
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


/* NanoCore 1.10, address 0x4000829c.
 * REA evidence: ev_eed6a8f30d8b880974ae631f17831f76b0ce4a00ef59ccc57ff832b0b18dab9e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000829c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_ram_40006472();
  uVar1 = _DAT_ram_3004b3d4;
  if ((DAT_ram_3004b424 != '\0') && (_DAT_ram_3004b420 == iVar2)) {
    if (_DAT_ram_3004b3f0 != 0) {
      if (_DAT_ram_3004b3f0 == 1) {
        uVar3 = FUN_ram_400002f4();
        FUN_ram_400224c0(&DAT_ram_3004b3d4,uVar1);
        if ((DAT_ram_3004a3e4 == '\0') || (DAT_ram_3004d524 != '\0')) {
          FUN_ram_400224ea(&DAT_ram_3004b3d4);
        }
        FUN_ram_400002fa(uVar3);
        FUN_ram_40007d06(0x3004b3dc,uVar1);
        _DAT_ram_3004b3f0 = 0;
        _DAT_ram_3004b420 = 0;
        FUN_ram_40004ac8(0x3004b3f4);
        return;
      }
      _DAT_ram_3004b3f0 = _DAT_ram_3004b3f0 + -1;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40008358.
 * REA evidence: ev_3eb3170103d1bbaebb2cc96e3e59ef89d8c9f6945c63c7d59725d5d0c06f66ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40008358(code *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40007d82();
  if (iVar1 == 0) {
    FUN_ram_40008120();
    uVar2 = (*param_1)(param_2);
    FUN_ram_40007ccc();
    FUN_ram_4000829c();
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x4000838c.
 * REA evidence: ev_9e0e6ec9b2c0eb9390337ab1ac40f8c8d3e6427a05a6a7887b18f0952b4d838f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000838c(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_4000829c();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40008394.
 * REA evidence: ev_ffe29e12725a783720222db9c27d8017edea99fb41bf9d485616bbd604b59179
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40008394(undefined2 *param_1,undefined2 param_2)

{
  FUN_ram_400002f4();
  *param_1 = param_2;
  _DAT_ram_30049dd0 = _DAT_ram_30049dd0 + 1;
  FUN_ram_400002fa();
  FUN_ram_400048d4(0x30049dd8);
  return;
}


/* NanoCore 1.10, address 0x400083cc.
 * REA evidence: ev_052bc662e649c838c1a37867340ddbf9d9cdc3156f3fe4871696988094b1fb2d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400083cc(int param_1)

{
  if ((param_1 != 0) && (DAT_ram_3004b424 != '\0')) {
    FUN_ram_400048d4(0x3004b428);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400083e6.
 * REA evidence: ev_a267a0c1ff1766e4a2976dee67195e0d4c31482d33fdb966f01daced333b2949
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400083e6(undefined4 param_1)

{
  FUN_ram_40022528(&DAT_ram_3004b3d4,0,0,param_1);
  FUN_ram_400083cc();
  return;
}


/* NanoCore 1.10, address 0x40008404.
 * REA evidence: ev_b36ae13d320c9b320eeeb7992576e3af3edf3a4314d28a83b6c3a2c8150efd79
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40008404(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    if ((*(char *)((int)param_1 + uVar1 + 0x38) != '\0') &&
       (iVar2 = FUN_ram_4005eb02(*param_1,*(undefined1 *)(param_1 + 1),uVar1 & 0xff), iVar2 == 0)) {
      *(undefined1 *)((int)param_1 + uVar1 + 0x38) = 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0xc);
  return;
}


/* NanoCore 1.10, address 0x40008448.
 * REA evidence: ev_b75bb4208e1dde096ddf0730913f24d7ff1be15637dc70acad3678832553d32c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40008448(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_ram_3004d528 != 0) {
    iVar1 = FUN_ram_4007137c(_DAT_ram_3004d528);
    if (iVar1 == param_1) {
      return 0;
    }
    iVar1 = FUN_ram_4000821c();
    if (((iVar1 != 0) || (DAT_ram_3004a3e4 == '\0')) || (DAT_ram_3004d524 != '\0')) {
      FUN_ram_40008120();
      iVar1 = FUN_ram_4005eaa6(0x3004abe8);
      iVar2 = FUN_ram_4005ea8e(0x3004abe8);
      if (((iVar1 != 0) && (iVar2 != 0)) &&
         ((*(int *)(iVar1 + 0x9c) == 3 && (*(char *)(iVar1 + 0xa1) != '\0')))) {
        FUN_ram_4000305c(iVar2,iVar1,0x2dc);
        *(undefined1 *)(iVar2 + 0xa1) = 0;
        FUN_ram_4005eaba(0x3004abe8);
        if ((DAT_ram_3004a3e4 != '\0') && (DAT_ram_3004d524 == '\0')) {
          FUN_ram_400065d4(5);
        }
      }
      FUN_ram_40071298(_DAT_ram_3004d528,param_1);
      FUN_ram_40007ccc();
      return 0;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4000850e.
 * REA evidence: ev_84167e822b7aec3e9f0e169fafdfed7fd04953cd30bfe05d25f8e022dd7b85d2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000850e(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_ram_4003a7fc();
  if ((int)uVar2 < 0) {
    return;
  }
  iVar1 = (int)uVar2 >> 5;
  uVar2 = uVar2 & 0x1f;
  FUN_ram_4003a9f0(iVar1,uVar2,1);
  FUN_ram_4003aa6a(iVar1,uVar2,0);
  FUN_ram_4003aa2a(iVar1,uVar2,3);
  FUN_ram_4003ab2c(iVar1,uVar2);
  if (param_2 != 0) {
    FUN_ram_4003a8aa();
    return;
  }
  FUN_ram_4003a87c(iVar1,uVar2);
  return;
}


/* NanoCore 1.10, address 0x40008576.
 * REA evidence: ev_82d816f68c98732aac52a6450f73c804a66b95c126f499db027f1816657b5366
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40008576(undefined1 param_1)

{
  FUN_ram_4000850e(s_PD_16_ram_40092784,param_1);
  return;
}


/* NanoCore 1.10, address 0x40008586.
 * REA evidence: ev_f4c0a66a2ba0246f37022dc3d2814a255326256c5bb3fd35ccc5eb362ad8e700
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40008586(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar2 = *(uint *)(*(int *)(param_1 + 8) + 0x14);
    fence();
    uVar1 = param_2 + 0x30050bc0;
    if (uVar2 < 0x30050bc0) {
      if (uVar2 < uVar1) {
        return 0xffffffff;
      }
    }
    else if (uVar2 < uVar1) {
      return 0;
    }
    if (uVar2 < param_2 + uVar1) {
      return 1;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x400085be.
 * REA evidence: ev_dcc7cc99ca2abc7e13e6bafd16b3d57f54dc6e2d72ef58d9eb465b7570384a90
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400085be(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40008586();
  iVar2 = FUN_ram_40008586(param_1,param_2);
  if (((iVar1 < 0) || (iVar1 != iVar2)) && (iVar2 < 0)) {
    iVar2 = iVar1;
  }
  return iVar2;
}


/* NanoCore 1.10, address 0x400085f0.
 * REA evidence: ev_9386c8393410e1cfcf17e2dea05a5c3493a00bdb3629c56e7b3dd5b2c10032fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400085f0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_ram_40007af4(4,8);
  FUN_ram_40008120();
  iVar3 = FUN_ram_4005eaa6(0x3004abe8);
  iVar4 = FUN_ram_4005ea8e(0x3004abe8);
  uVar1 = 0xffffffff;
  if ((iVar3 != 0) && (uVar1 = 0xffffffff, iVar4 != 0)) {
    FUN_ram_4000305c(iVar4,iVar3,0x2dc);
    *(bool *)(iVar4 + 0x131) = iVar2 != 0;
    uVar1 = *param_2;
    *(undefined4 *)(iVar4 + 300) = 8;
    *(undefined4 *)(iVar4 + 0x134) = uVar1;
    uVar1 = param_2[1];
    *(undefined4 *)(iVar4 + 0x170) = param_1;
    *(undefined4 *)(iVar4 + 0x138) = uVar1;
    uVar1 = 0;
    *(undefined4 *)(iVar4 + 0x13c) = param_2[2];
    FUN_ram_4005eaba(0x3004abe8);
  }
  FUN_ram_40007ccc();
  return uVar1;
}


/* NanoCore 1.10, address 0x4000868c.
 * REA evidence: ev_ac027562ba75aac6c8fb4d0f53d167abee2e974b5fb10ce8b0bb8fbf04586a1c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4000868c(int param_1)

{
  int iVar1;
  
  iVar1 = 0x40;
  do {
    if (*(int *)(param_1 + 0x8c) == 0) {
      return 0;
    }
    iVar1 = iVar1 + -1;
    FUN_ram_400065d4(1);
  } while (iVar1 != 0);
  return -(uint)(*(int *)(param_1 + 0x8c) != 0);
}


/* NanoCore 1.10, address 0x400086c4.
 * REA evidence: ev_d6f2db8f1c191c3a1b01c7d4dc14532cb94cbfcd90da5c60aa1cb6c401778aff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400086c4(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 local_24 [3];
  
  FUN_ram_4007167a(param_1,0xc);
  FUN_ram_4007167a(local_24,5);
  iVar3 = 0;
  do {
    puVar1 = (undefined8 *)((int)local_24 + iVar3);
    puVar2 = (undefined8 *)(param_1 + iVar3);
    iVar3 = iVar3 + 4;
    *puVar2 = *puVar1;
  } while (iVar3 != 0x14);
  return;
}


/* NanoCore 1.10, address 0x400086f8.
 * REA evidence: ev_5cc632222c71ed229f3401131970ef2482a8a6b1b5e292b1fba77e0081db2a3c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void * FUN_ram_400086f8(size_t param_1)

{
  void *__s;
  
  __s = (void *)FUN_ram_4003e050(1,param_1);
  if (__s != (void *)0x0) {
    memset(__s,0,param_1);
  }
  return __s;
}


/* NanoCore 1.10, address 0x4000871e.
 * REA evidence: ev_f5e3eb4af29c51cda8e06a7731c3acc984eb19093e2f666f5b81139e26fdb314
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000871e(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar4 = _DAT_ram_3004a3dc;
  uVar1 = _DAT_ram_30049ee0;
  if (((DAT_ram_30049edc != '\0') && (DAT_ram_30049eb8 == '\0')) && (DAT_ram_3004d524 == '\0')) {
    if (_DAT_ram_3004a3dc != 0) {
      iVar3 = (DAT_ram_30049eb9 & 1) * 0x80;
      if ((_DAT_ram_30049ec0 == 0) && (_DAT_ram_30049ec4 == 0)) {
        iVar6 = iVar3 + 0x3004fac0;
        if ((DAT_ram_3004d57b == '\0') || (DAT_ram_30049e84 != '\0')) {
          if ((1 < _DAT_ram_30049ee0) &&
             (_DAT_ram_30049ee4 = _DAT_ram_30049ee4 + 1, (_DAT_ram_30049ee4 & 3) == 0)) {
            uVar2 = _DAT_ram_30049ee8 - _DAT_ram_30049ed8;
            iVar5 = FUN_ram_40007814();
            uVar2 = uVar2 & 0x3ff;
            if ((iVar5 + 2U < uVar2) && (1 < uVar2 - iVar5)) {
              if (_DAT_ram_30049ec0 == 0) {
                _DAT_ram_30049ed8 = _DAT_ram_30049ed8 + 2 & 0x3ff;
                _DAT_ram_30049ecc = _DAT_ram_30049ecc + 2;
              }
              else {
                DAT_ram_30046568 = DAT_ram_30046568 + 1;
              }
              _DAT_ram_30049ee0 = uVar1 - 2;
            }
          }
        }
        else {
          _DAT_ram_30049ee0 = 0;
        }
        uVar1 = _DAT_ram_30049ed8;
        uVar2 = _DAT_ram_30049ee8 - _DAT_ram_30049ed8;
        if ((uVar2 & 1) == 0) {
          uVar2 = uVar2 & 0x3ff;
        }
        else {
          uVar2 = uVar2 & 0x3fe;
          DAT_ram_30046568 = DAT_ram_30046568 + 1;
        }
        if (0x20 < uVar2) {
          uVar2 = 0x20;
        }
        uVar7 = uVar2;
        if (0x400 < _DAT_ram_30049ed8 + uVar2) {
          uVar7 = 0x400 - _DAT_ram_30049ed8;
        }
        if (uVar7 != 0) {
          FUN_ram_4000305c(iVar6,_DAT_ram_30049ed8 * 4 + 0x3004fbc0,uVar7 << 2);
        }
        if (uVar7 < uVar2) {
          FUN_ram_4000305c(iVar6 + uVar7 * 4,0x3004fbc0,(uVar2 - uVar7) * 4);
        }
        _DAT_ram_30049ebc = uVar1;
        _DAT_ram_30049ec4 = 0x20 - uVar2;
        _DAT_ram_30049ec0 = uVar2;
        if (_DAT_ram_30049ec4 != 0) {
          memset((void *)(iVar6 + uVar2 * 4),0,_DAT_ram_30049ec4 * 4);
        }
        FUN_ram_400076b4(iVar6,0x80);
      }
      else {
        DAT_ram_30046568 = DAT_ram_30046568 + 1;
      }
      iVar4 = FUN_ram_40038bcc(iVar4,_DAT_ram_3004b474 + 0x20,iVar3 + 0x3004fac0,0x80,1);
      if (iVar4 == 0) {
        DAT_ram_30049eb8 = 1;
        iVar4 = FUN_ram_40038dac(_DAT_ram_3004a3dc);
        if (iVar4 == 0) {
          DAT_ram_30049eb9 = DAT_ram_30049eb9 ^ 1;
          return;
        }
        DAT_ram_30049eb8 = '\0';
        FUN_ram_4000785c();
        if (*(int *)(_DAT_ram_3004a3dc + 0x38) != 0) {
          FUN_ram_400389b4();
        }
      }
      else {
        FUN_ram_4000785c();
      }
      DAT_ram_30046568 = DAT_ram_30046568 + 1;
    }
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400089be.
 * REA evidence: ev_567703b9725f9cc54909a68b57427ef7ff4eedcd10cb33ca3b276906a709ae52
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400089be(void)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  if ((DAT_ram_30049edc != '\0') || (DAT_ram_3004d524 != '\0')) {
    return;
  }
  DAT_ram_30049edc = 1;
  uVar5 = FUN_ram_400077b2();
  bVar1 = false;
  bVar2 = false;
  for (; puVar3 = _DAT_ram_3004b474, uVar5 < 0x78; uVar5 = uVar5 + 1) {
    if (_DAT_ram_30049ed8 == _DAT_ram_30049ee8) {
      if ((bVar1) && (0x60 < uVar5)) break;
      uVar6 = 0;
      bVar2 = true;
      _DAT_ram_30049eec = _DAT_ram_30049eec + 1;
    }
    else {
      uVar6 = *(uint *)(_DAT_ram_30049ed8 * 4 + 0x3004fbc0);
      _DAT_ram_30049ed8 = _DAT_ram_30049ed8 + 1 & 0x3ff;
      bVar1 = true;
    }
    fence();
    _DAT_ram_3004b474[8] = uVar6;
  }
  if (bVar2) {
    DAT_ram_30046564 = DAT_ram_30046564 + 1;
  }
  fence();
  fence();
  *_DAT_ram_3004b474 = *_DAT_ram_3004b474 | 4;
  puVar4 = _DAT_ram_3004b474;
  fence();
  fence();
  *_DAT_ram_3004b474 = *puVar3 | 0x100;
  fence();
  fence();
  _DAT_ram_3004b474[7] = puVar4[7] | 0x80;
  FUN_ram_4000871e();
  return;
}


/* NanoCore 1.10, address 0x40008abe.
 * REA evidence: ev_27cb715f3139184d6dd44275adf1dc1bb7ec36cfb524a1bc6ac5425c940fefb4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40008abe(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar1 = DAT_ram_30046680;
  if (DAT_ram_30046680 << 1 < 0x201) {
    memset((void *)0x30050bc0,0,0x800);
    memset((void *)0x300513c0,0,0xc00);
    memset((void *)0x30051fc0,0,0x400);
    _DAT_ram_30049ed8 = 0;
    _DAT_ram_30049ee8 = 0;
    DAT_ram_30049edc = 0;
    _DAT_ram_30049eec = 0;
    _DAT_ram_30049ed4 = 0;
    _DAT_ram_30049ec8 = 0;
    _DAT_ram_30049ed0 = 0;
    _DAT_ram_30049ecc = 0;
    _DAT_ram_30049ee0 = 0;
    _DAT_ram_30049ee4 = 0;
    DAT_ram_30049eb8 = 0;
    DAT_ram_30049eb9 = 0;
    _DAT_ram_30049ebc = 0;
    _DAT_ram_30049ec0 = 0;
    _DAT_ram_30049ec4 = 0;
    DAT_ram_30046518 = 0xffffffff;
    DAT_ram_30049eb7 = 0;
    memset((void *)0x3004fbc0,0,0x1000);
    memset((void *)0x3004fac0,0,0x100);
    memset((void *)0x3004d52c,0,0x40);
    _DAT_ram_3004d570 = 0;
    _DAT_ram_3004d56c = 0;
    DAT_ram_30049e70 = 0;
    _DAT_ram_30049e78 = 0;
    if (_DAT_ram_30049e40 != 0) {
      do {
        iVar2 = FUN_ram_400048d0(_DAT_ram_30049e40);
      } while (iVar2 == 0);
    }
    FUN_ram_400076b4(0x30050bc0,0x800);
    FUN_ram_400076b4(0x300513c0,0xc00);
    iVar2 = FUN_ram_40038c92(_DAT_ram_3004a3d8,0x30050bc0,uVar1 << 3,uVar1 << 2,2);
    if (iVar2 == 0) {
      fence();
      fence();
      puVar4 = _DAT_ram_3004b474 + 5;
      *puVar4 = _DAT_ram_3004b474[5] | 0x2000000;
      fence();
      fence();
      _DAT_ram_3004b474[5] = *puVar4 | 0x1000000;
      fence();
      _DAT_ram_3004b474[10] = 0;
      puVar4 = _DAT_ram_3004b474;
      fence();
      _DAT_ram_3004b474[0xb] = 0;
      fence();
      fence();
      puVar5 = _DAT_ram_3004b474 + 5;
      *puVar5 = puVar4[5] | 4;
      fence();
      fence();
      puVar4 = _DAT_ram_3004b474 + 5;
      *puVar4 = *puVar5 & 0xfffffffc | 1;
      fence();
      fence();
      _DAT_ram_3004b474[5] = *puVar4 & 0xfff80fff | 0x20000;
      uVar1 = DAT_ram_30046680;
      DAT_ram_3004d574 = 0;
      DAT_ram_3004a3e4 = 0;
      DAT_ram_3004669c = 0x2000;
      _DAT_ram_3004fa84 = 0;
      _DAT_ram_3004fa94 = 0;
      _DAT_ram_3004fa88 = 0;
      DAT_ram_300466a0 = 0x10000;
      DAT_ram_30046697 = param_1 != 0;
      if ((bool)DAT_ram_30046697) {
        DAT_ram_3004d57c = 0;
      }
      _DAT_ram_3004d578 = 0;
      _DAT_ram_3004d576 = 0;
      _DAT_ram_3004d580 = 0;
      DAT_ram_3004d57a = 0;
      DAT_ram_3004d57b = 0;
      _DAT_ram_3004d57e = 0;
      _DAT_ram_3004b3c8 = 0;
      _DAT_ram_3004b3cc = 0;
      iVar2 = _DAT_ram_3004b3d0;
      if (_DAT_ram_3004b3d0 == 0) {
        iVar2 = 0xac44;
      }
      iVar3 = FUN_ram_4003ee82();
      DAT_ram_30046544 =
           FUN_ram_40003bac((uVar1 >> 1) * iVar3,
                            (int)((longlong)iVar3 * (ulonglong)(uVar1 >> 1) >> 0x20),iVar2,0);
      DAT_ram_30046548 = 0;
      DAT_ram_3004654c = 0xffffffff;
      DAT_ram_30046550 = 0;
      DAT_ram_30046554 = 0;
      DAT_ram_30046558 = 0;
      DAT_ram_3004655c = 0;
      DAT_ram_30046560 = 0;
      DAT_ram_30046564 = 0;
      DAT_ram_30046568 = 0;
      DAT_ram_3004656c = 0;
      DAT_ram_30046570 = 0;
      DAT_ram_30046574 = 0;
      DAT_ram_300465b4 = 0;
      DAT_ram_300465b8 = 0;
      DAT_ram_300465bc = 0;
      DAT_ram_300465c0 = 0;
      DAT_ram_300465c4 = 0;
      DAT_ram_300465c8 = 0;
      DAT_ram_3004d524 = 0;
      _DAT_ram_30049ee8 = DAT_ram_30046680 * 3 & 0xfffffffe;
      if (0x3ff < _DAT_ram_30049ee8) {
        _DAT_ram_30049ee8 = 0x3fe;
      }
      _DAT_ram_30049ed8 = 0;
      _DAT_ram_30049ebc = 0;
      _DAT_ram_30049ec0 = 0;
      _DAT_ram_30049ec4 = 0;
      FUN_ram_400089be();
      FUN_ram_40038dac(_DAT_ram_3004a3d8);
      puVar4 = _DAT_ram_3004b474;
      fence();
      fence();
      *_DAT_ram_3004b474 = *_DAT_ram_3004b474 | 2;
      fence();
      fence();
      _DAT_ram_3004b474[7] = puVar4[7] | 8;
      return 0;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x40008fa8.
 * REA evidence: ev_e8c9da79a819140179e29158c5f4250b9f74610aa99f7587e9f138f3dd56c6d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40008fa8(void)

{
  int iVar1;
  char cVar2;
  char cVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  
  do {
    do {
      iVar5 = FUN_ram_40004832(_DAT_ram_30049e80,0xffffffff);
      cVar3 = DAT_ram_30049eb6;
      cVar2 = DAT_ram_30049eb5;
      iVar1 = _DAT_ram_30049e7c;
    } while (iVar5 != 0);
    if ((_DAT_ram_30049e7c != 0) &&
       ((DAT_ram_30046680 != _DAT_ram_30049e7c || (DAT_ram_30049eb6 != DAT_ram_30049eb5)))) {
      DAT_ram_30049e84 = 1;
      DAT_ram_3004d57b = 0;
      DAT_ram_3004d57a = 0;
      DAT_ram_30049eb7 = 0;
      DAT_ram_3004668c = 0;
      FUN_ram_40007f38(0x31,0x10,4,0x10,1);
      FUN_ram_400065d4(0x19);
      puVar6 = _DAT_ram_3004b474;
      if ((DAT_ram_30046680 != iVar1) || (cVar3 != cVar2)) {
        DAT_ram_3004d524 = 1;
        fence();
        fence();
        _DAT_ram_3004b474[7] = _DAT_ram_3004b474[7] & 0xfffffff7;
        puVar4 = _DAT_ram_3004b474;
        fence();
        fence();
        *_DAT_ram_3004b474 = *puVar6 & 0xfffffffd;
        puVar6 = _DAT_ram_3004b474;
        fence();
        fence();
        _DAT_ram_3004b474[7] = puVar4[7] & 0xffffff7f;
        puVar4 = _DAT_ram_3004b474;
        fence();
        fence();
        *_DAT_ram_3004b474 = *puVar6 & 0xfffffeff;
        fence();
        fence();
        *_DAT_ram_3004b474 = *puVar4 & 0xfffffffb;
        DAT_ram_30049edc = 0;
        while (DAT_ram_30049e70 != '\0') {
          FUN_ram_400065d4(1);
        }
        _DAT_ram_3004d56c = _DAT_ram_3004d570;
        if (_DAT_ram_30049e40 != 0) {
          do {
            iVar5 = FUN_ram_400048d0(_DAT_ram_30049e40);
          } while (iVar5 == 0);
        }
        if (_DAT_ram_3004a3d8 != 0) {
          FUN_ram_400389b4();
        }
        if (_DAT_ram_3004a3dc != 0) {
          FUN_ram_400389b4();
        }
        DAT_ram_30049eb8 = 0;
        FUN_ram_4000785c();
        fence();
        fence();
        puVar6 = _DAT_ram_3004b474 + 5;
        *puVar6 = _DAT_ram_3004b474[5] | 0x2000000;
        fence();
        fence();
        _DAT_ram_3004b474[5] = *puVar6 | 0x1000000;
        DAT_ram_30046680 = iVar1;
        FUN_ram_40008abe(0);
      }
      FUN_ram_400077f4();
      FUN_ram_40007f38(0x31,0,0,0x14,2);
      _DAT_ram_3004d57e = 8;
      DAT_ram_3004d57b = 1;
      DAT_ram_3004668c = 0;
      DAT_ram_30049e84 = 0;
    }
    _DAT_ram_30049e7c = 0;
  } while( true );
}


