/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4000d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4000d55a.
 * REA evidence: ev_bc031d425899a8e6f133c8ccdb4a5d0b5f0eda2cf8b0a2ab30854d3fa95e5fcc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000d55a(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_ram_40008120();
  iVar1 = FUN_ram_4005eaa6(0x3004abe8);
  iVar2 = FUN_ram_4005ea8e(0x3004abe8);
  uVar3 = 0xffffffff;
  if (((param_1 != 0) && (iVar1 != 0)) && (iVar2 != 0)) {
    FUN_ram_4000305c(iVar2,iVar1,0x2dc);
    param_1 = param_1 + 0x44;
    iVar1 = iVar2 + 0x44;
    do {
      FUN_ram_4000305c(iVar1 + -0x30,param_1 + -0x30,0x30);
      iVar4 = iVar1 + 0x48;
      FUN_ram_4000305c(iVar1,param_1,0xc);
      param_1 = param_1 + 0x48;
      iVar1 = iVar4;
    } while (iVar4 != iVar2 + 0x314);
    FUN_ram_4005eaba(0x3004abe8);
    uVar3 = 0;
  }
  FUN_ram_40007ccc();
  return uVar3;
}


/* NanoCore 1.10, address 0x4000d5ea.
 * REA evidence: ev_4a5883beb46f7f49acbaad0941fae3c43aeeb624a0b459b806709161c51f0229
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000d5ea(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40006472();
  if ((((DAT_ram_3004b424 != '\0') && (iVar1 != 0)) && (_DAT_ram_3004a3e0 != iVar1)) &&
     (iVar2 = FUN_ram_400049d6(0x3004b3f4,0xffffffff), iVar2 == 0)) {
    _DAT_ram_3004a3e0 = iVar1;
    FUN_ram_400092aa();
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4000d63a.
 * REA evidence: ev_ae97ab399565831c5e71b8c603b8388828f117eebfa5bf97f6171ffb1a269ea5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000d63a(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40006472();
  if (iVar1 == _DAT_ram_3004a3e0) {
    _DAT_ram_3004a3e0 = 0;
    FUN_ram_40004ac8(0x3004b3f4);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4000d66c.
 * REA evidence: ev_2742dc28b2cf410bfe2217dfc2dc73b720c190773e79e79ee0256149ceb336be
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000d66c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40007d82();
  if (iVar1 == 0) {
    FUN_ram_400092aa();
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x4000d68c.
 * REA evidence: ev_5442d995ac4f9f3cbcf9415263c97b4268ac22b50524d2e6d3158c92539e415a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4000d6a0) */
/* WARNING: Removing unreachable block (ram,0x4000d6a6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4000d68c(int param_1,uint param_2)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar6 = _DAT_ram_3004b3d0;
  if (_DAT_ram_3004b3d0 == 0) {
    uVar6 = 0xac44;
  }
  uVar4 = uVar6 / 1000;
  _DAT_ram_300567d4 = uVar6 % 1000 + _DAT_ram_300567d4;
  if (999 < _DAT_ram_300567d4) {
    _DAT_ram_300567d4 = _DAT_ram_300567d4 - 1000;
    uVar4 = uVar4 + 1;
  }
  uVar6 = param_2 >> 2;
  if (uVar4 <= param_2 >> 2) {
    uVar6 = uVar4;
  }
  uVar4 = uVar6 << 1;
  if (DAT_ram_300567c4 == '\x01') {
    if (0xfff < _DAT_ram_300567c2) {
      DAT_ram_300567c4 = '\x02';
    }
    for (uVar7 = 0; uVar7 < uVar4; uVar7 = uVar7 + 1 & 0xffff) {
      *(undefined2 *)(param_1 + uVar7 * 2) = 0;
    }
  }
  else if (DAT_ram_300567c4 == '\x02') {
    _DAT_ram_300567c0 = (ushort)(_DAT_ram_300567d0 >> 0xf) & 0x1ffe;
    if (_DAT_ram_300567c0 == _DAT_ram_300567c2) {
      DAT_ram_300567c4 = '\0';
      for (uVar7 = 0; uVar7 < uVar4; uVar7 = uVar7 + 1 & 0xffff) {
        *(undefined2 *)(param_1 + uVar7 * 2) = 0;
      }
    }
    else {
      uVar5 = _DAT_ram_300567c2;
      if (_DAT_ram_300567c2 < _DAT_ram_300567c0) {
        uVar5 = _DAT_ram_300567c2 + 0x2000;
      }
      if (3 < (ushort)(uVar5 - _DAT_ram_300567c0)) {
        uVar4 = (((ushort)(uVar5 - _DAT_ram_300567c0) >> 1) + 0x1800) * 8;
        if (0x1051e < uVar4) {
          uVar4 = 0x1051e;
        }
        if (uVar4 < 0xfae1) {
          uVar4 = 0xfae1;
        }
        DAT_ram_300466a8 = ((int)(uVar4 - DAT_ram_300466a8) >> 5) + DAT_ram_300466a8;
        if ((int)DAT_ram_300466a8 < 0xfae1) {
          DAT_ram_300466a8 = 0xfae1;
        }
        else if (0x1051e < (int)DAT_ram_300466a8) {
          DAT_ram_300466a8 = 0x1051e;
        }
        uVar4 = DAT_ram_300466a8;
        bVar3 = false;
        uVar7 = _DAT_ram_300567d0;
        for (uVar11 = 0; uVar6 != uVar11; uVar11 = uVar11 + 1) {
          uVar9 = uVar7 >> 0x10;
          uVar8 = uVar9 + 1;
          uVar10 = uVar7 & 0xffff;
          if (0xfff < uVar8) {
            uVar8 = 0;
          }
          sVar1 = *(short *)((uVar9 * 2 + 1) * 2 + 0x300527c0);
          sVar2 = *(short *)((uVar8 * 2 + 1) * 2 + 0x300527c0);
          uVar7 = uVar7 + uVar4;
          *(short *)(param_1 + uVar11 * 4) =
               (short)((int)*(short *)(uVar8 * 4 + 0x300527c0) * uVar10 +
                       (int)*(short *)(uVar9 * 4 + 0x300527c0) * (0x10000 - uVar10) + 0x8000 >> 0x10
                      );
          *(short *)(param_1 + 2 + uVar11 * 4) =
               (short)((int)sVar2 * uVar10 + (int)sVar1 * (0x10000 - uVar10) + 0x8000 >> 0x10);
          if (0xfffffff < uVar7) {
            uVar7 = uVar7 + 0xf0000000;
          }
          bVar3 = true;
        }
        if (bVar3) {
          _DAT_ram_300567d0 = uVar7;
        }
        _DAT_ram_300567c0 = (short)(((_DAT_ram_300567d0 >> 0x10) << 0x11) >> 0x10);
        return (uVar6 & 0x3fff) << 2;
      }
      DAT_ram_300567c4 = '\0';
      for (uVar7 = 0; uVar7 < uVar4; uVar7 = uVar7 + 1 & 0xffff) {
        *(undefined2 *)(param_1 + uVar7 * 2) = 0;
      }
    }
  }
  else if (DAT_ram_300567c4 == '\0') {
    DAT_ram_300567c4 = '\x01';
    _DAT_ram_300567c2 = 0;
    _DAT_ram_300567c0 = 0;
    _DAT_ram_300567d0 = 0;
    DAT_ram_300466a8 = 0x10000;
    for (uVar7 = 0; uVar7 < uVar4; uVar7 = uVar7 + 1 & 0xffff) {
      *(undefined2 *)(param_1 + uVar7 * 2) = 0;
    }
  }
  else {
    DAT_ram_300567c4 = '\0';
    for (uVar7 = 0; uVar7 < uVar4; uVar7 = uVar7 + 1 & 0xffff) {
      *(undefined2 *)(param_1 + uVar7 * 2) = 0;
    }
  }
  return (uVar6 & 0x3fff) << 2;
}


/* NanoCore 1.10, address 0x4000d93c.
 * REA evidence: ev_c2b7b1df86de05c11efc59eb7d71fb93585863fa2eeae14dbc9dc8a94e396b6e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000d93c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_ram_400002f4();
    uVar2 = _DAT_ram_30049e54;
    uVar1 = _DAT_ram_30049e50;
    *param_1 = _DAT_ram_30049e48;
    uVar3 = _DAT_ram_30049e58;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    uVar1 = _DAT_ram_30049e60;
    param_1[4] = uVar3;
    uVar4 = DAT_ram_30049e68;
    uVar2 = _DAT_ram_30049e64;
    param_1[6] = uVar1;
    param_1[7] = uVar2;
    *(undefined1 *)(param_1 + 8) = uVar4;
    *(undefined1 *)((int)param_1 + 0x21) = DAT_ram_30049e69;
    uVar4 = DAT_ram_30049e6b;
    *(undefined1 *)((int)param_1 + 0x22) = DAT_ram_30049e6a;
    *(undefined1 *)((int)param_1 + 0x23) = uVar4;
    FUN_ram_400002fa();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4000d996.
 * REA evidence: ev_734dde5e93c6882323f85c54364f2e59924fa2d7c105bfa383e8e46c7f0632e7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000d996(int param_1)

{
  if (param_1 < 0x65) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 100;
  }
  _DAT_ram_30046690 = (ulonglong)(uint)((float)param_1 / DAT_ram_4009286c);
  return;
}


/* NanoCore 1.10, address 0x4000d9ce.
 * REA evidence: ev_9211e65ba19c74926fad3f36242b441b05f62959f82bd2eae83869db71e05238
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4000d9ce(void)

{
  return DAT_ram_30046694;
}


/* NanoCore 1.10, address 0x4000d9d8.
 * REA evidence: ev_f90c5cf57bc33ffd2b7f4a8cbccf20dc2db6abe5dbfc4839d537205caa036de8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000d9d8(int param_1)

{
  if (param_1 < 0x65) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 100;
  }
  DAT_ram_30046695 = (char)param_1;
  return;
}


/* NanoCore 1.10, address 0x4000d9f6.
 * REA evidence: ev_bf95224ef84724f8b2026a0a67d77f6f60f4ca8911f28a11d036e4e28ca943f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000d9f6(int param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3004da60 = param_1 != 0;
  _DAT_ram_3004fa80 = 0;
  _DAT_ram_3004da64 = 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x4000da28.
 * REA evidence: ev_a1c7e96c7e6dc4b4ed4ffabbd02a513d4412aca1698efa45bc9617d0ab8c406a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000da28(int param_1)

{
  FUN_ram_400002f4();
  DAT_ram_30046698 = param_1 != 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x4000da4a.
 * REA evidence: ev_6913931be8c0e604e49460b677396e12512f450513fec91e32767746b9c5b69f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4000da4a(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = param_2, param_2 != 0)) {
    FUN_ram_400002f4();
    uVar2 = _DAT_ram_3004fa80 - _DAT_ram_3004da64;
    if (0x1000 < uVar2) {
      _DAT_ram_3004da64 = _DAT_ram_3004fa80 + -0x1000;
      uVar2 = 0x1000;
    }
    if (uVar2 < param_2) {
      uVar1 = uVar2;
    }
    for (uVar2 = 0; uVar2 != uVar1; uVar2 = uVar2 + 1) {
      *(undefined2 *)(param_1 + uVar2 * 2) =
           *(undefined2 *)((_DAT_ram_3004da64 + uVar2 & 0xfff) * 2 + 0x3004da80);
    }
    _DAT_ram_3004da64 = _DAT_ram_3004da64 + uVar1;
    FUN_ram_400002fa();
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4000dac2.
 * REA evidence: ev_18d1e9358ee39721222a19b4ec31a1c264daf164b82446c0bfbedb91a2c57415
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000dac2(void)

{
  FUN_ram_400002f4();
  _DAT_ram_3005ac02 = 0;
  _DAT_ram_3005ac00 = 0;
  DAT_ram_300567d8 = 0;
  DAT_ram_3004fa90 = 0;
  DAT_ram_3004669c = 0x2000;
  _DAT_ram_3004fa84 = 0;
  _DAT_ram_3004fa94 = 0;
  _DAT_ram_3004fa88 = 0;
  DAT_ram_300466a0 = 0x10000;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x4000db1e.
 * REA evidence: ev_abcb506d8b56bb72feacc6b5a4384b350e1fb1e7697d0a2800ec12f04fbe2eda
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000db1e(int param_1,uint param_2)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  undefined2 *puVar7;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (DAT_ram_300567d8 == '\0') {
      _DAT_ram_3005ac00 = 0;
      _DAT_ram_3005ac02 = 0;
      DAT_ram_3004fa90 = 0;
      DAT_ram_300567d8 = '\x01';
    }
    else if (DAT_ram_300567d8 == '\x01') {
      uVar5 = _DAT_ram_3005ac02;
      if (_DAT_ram_3005ac02 < _DAT_ram_3005ac00) {
        uVar5 = _DAT_ram_3005ac02 + 0x2000;
      }
      if (0x3ff < (ushort)(uVar5 - _DAT_ram_3005ac00)) {
        DAT_ram_300567d8 = '\x02';
      }
    }
    uVar3 = (uint)DAT_ram_3004fa90;
    uVar6 = 0;
    if (uVar3 != 0) {
      bVar1 = false;
      while( true ) {
        uVar2 = _DAT_ram_3004fa8e;
        uVar4 = uVar3 + uVar6 & 0xff;
        if (3 < uVar4) break;
        if (param_2 == uVar6) goto LAB_ram_4000dc30;
        bVar1 = true;
        (&DAT_ram_3004fa8c)[uVar6 + uVar3] = *(undefined1 *)(param_1 + uVar6);
        uVar6 = uVar6 + 1;
      }
      if (bVar1) {
        DAT_ram_3004fa90 = (byte)(uVar3 + uVar6);
      }
      if (uVar4 != 4) {
        return;
      }
      uVar3 = _DAT_ram_3005ac02 + 1 & 0x1fff;
      if ((_DAT_ram_3005ac00 == uVar3) || ((uint)_DAT_ram_3005ac00 == (uVar3 + 1 & 0x1fff))) {
        _DAT_ram_3004fa88 = _DAT_ram_3004fa88 + 1;
      }
      else {
        *(undefined2 *)(&DAT_ram_30056c00 + (uint)_DAT_ram_3005ac02 * 2) = _DAT_ram_3004fa8c;
        *(undefined2 *)(&DAT_ram_30056c00 + uVar3 * 2) = uVar2;
        _DAT_ram_3005ac02 = (ushort)(uVar3 + 1) & 0x1fff;
      }
      DAT_ram_3004fa90 = 0;
    }
    puVar7 = (undefined2 *)(param_1 + uVar6);
    if (uVar6 + 3 < param_2) {
      do {
        uVar3 = _DAT_ram_3005ac02 + 1 & 0x1fff;
        if ((_DAT_ram_3005ac00 == uVar3) || ((uint)_DAT_ram_3005ac00 == (uVar3 + 1 & 0x1fff))) {
          _DAT_ram_3004fa88 = _DAT_ram_3004fa88 + 1;
        }
        else {
          uVar2 = puVar7[1];
          *(undefined2 *)(&DAT_ram_30056c00 + (uint)_DAT_ram_3005ac02 * 2) = *puVar7;
          *(undefined2 *)(&DAT_ram_30056c00 + uVar3 * 2) = uVar2;
          _DAT_ram_3005ac02 = (ushort)(uVar3 + 1) & 0x1fff;
        }
        uVar4 = uVar6 + 4;
        uVar3 = uVar6 + 7;
        puVar7 = puVar7 + 2;
        uVar6 = uVar4;
      } while (uVar3 < param_2);
      uVar6 = (uint)DAT_ram_3004fa90;
      bVar1 = false;
      for (; uVar4 < param_2; uVar4 = uVar4 + 1) {
        if (uVar6 < 4) {
          (&DAT_ram_3004fa8c)[uVar6] = *(undefined1 *)(param_1 + uVar4);
          uVar6 = uVar6 + 1 & 0xff;
          bVar1 = true;
        }
      }
      if (bVar1) {
        DAT_ram_3004fa90 = (byte)uVar6;
      }
      return;
    }
    uVar4 = (uint)DAT_ram_3004fa90;
    bVar1 = false;
    for (; uVar6 < param_2; uVar6 = uVar6 + 1) {
      if (uVar4 < 4) {
        (&DAT_ram_3004fa8c)[uVar4] = *(undefined1 *)(param_1 + uVar6);
        uVar4 = uVar4 + 1 & 0xff;
        bVar1 = true;
      }
    }
LAB_ram_4000dc30:
    if (bVar1) {
      DAT_ram_3004fa90 = (char)uVar4;
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4000dd12.
 * REA evidence: ev_c4786f5aa474639a21ce53915066d94a51b12bbb65fd62ac36b7830628cc330a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000dd12(int param_1,uint param_2)

{
  undefined2 uVar1;
  bool bVar2;
  int in_t0;
  byte *in_t1;
  ushort *in_t2;
  uint uVar3;
  uint in_a5;
  undefined2 *in_a6;
  uint uVar4;
  uint in_t3;
  ushort *in_t5;
  int *in_t6;
  
  do {
    uVar3 = *in_t5 + 1 & in_t3 & 0xffff;
    uVar4 = uVar3 + 1 & in_t3;
    if ((*in_t2 == uVar3) || ((uint)*in_t2 == (uVar4 & 0xffff))) {
      *in_t6 = *in_t6 + 1;
    }
    else {
      uVar1 = in_a6[1];
      *(undefined2 *)(in_t0 + (uint)*in_t5 * 2) = *in_a6;
      *(undefined2 *)(in_t0 + uVar3 * 2) = uVar1;
      *in_t5 = (ushort)uVar4;
    }
    uVar4 = in_a5 + 4;
    uVar3 = in_a5 + 7;
    in_a6 = in_a6 + 2;
    in_a5 = uVar4;
  } while (uVar3 < param_2);
  uVar3 = (uint)*in_t1;
  bVar2 = false;
  for (; uVar4 < param_2; uVar4 = uVar4 + 1) {
    if (uVar3 < 4) {
      (&DAT_ram_3004fa8c)[uVar3] = *(undefined1 *)(param_1 + uVar4);
      uVar3 = uVar3 + 1 & 0xff;
      bVar2 = true;
    }
  }
  if (bVar2) {
    *in_t1 = (byte)uVar3;
  }
  return;
}


/* NanoCore 1.10, address 0x4000dd80.
 * REA evidence: ev_a02c763df4bff2ec23a31399e4cec836acc6341618e580d15797a86a876a50e5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000dd80(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  _DAT_ram_30049dc8 = FUN_ram_4003fcf2(&DAT_ram_400927b4);
  if ((_DAT_ram_30049dc8 == 0) || (iVar2 = FUN_ram_40007f38(0,0xff,0xff,0x32,2), iVar2 != 0)) {
LAB_ram_4000ddf0:
    uVar3 = 0xffffffff;
  }
  else {
    FUN_ram_400065d4(10);
    puVar1 = &DAT_ram_40092880;
    do {
      iVar2 = FUN_ram_40007f38(*puVar1,puVar1[1],puVar1[2],8,1);
      if (iVar2 != 0) goto LAB_ram_4000ddf0;
      puVar1 = puVar1 + 3;
      uVar3 = 0;
    } while (puVar1 != (undefined1 *)0x400928cb);
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x4000ddf4.
 * REA evidence: ev_388d39f2bc44d2e21161936b93a0a0b557c4bb6b4ff911d9b0bede45d92c24c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000ddf4(void)

{
  uint *puVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 local_90;
  uint *puStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 auStack_70 [2];
  uint *puStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  FUN_ram_40008576(0);
  FUN_ram_4000850e(s_PD_10_ram_400927bc,0);
  FUN_ram_400065d4(0x50);
  FUN_ram_4000850e(s_PD_10_ram_400927bc,1);
  FUN_ram_400065d4(0x50);
  FUN_ram_40010388();
  if ((_DAT_ram_3004b468 == 0) &&
     (_DAT_ram_3004b468 = FUN_ram_400086f8(0x60f4), _DAT_ram_3004b468 == 0)) {
    return 0xffffffff;
  }
  if (_DAT_ram_3004d528 == (void *)0x0) {
    pvVar3 = (void *)FUN_ram_40005666(0x74d60);
    if (pvVar3 == (void *)0x0) {
      _DAT_ram_3004d528 = pvVar3;
      _DAT_ram_3004d528 = (void *)FUN_ram_400086f8(0x74d60);
      if (_DAT_ram_3004d528 == (void *)0x0) {
        return 0xffffffff;
      }
    }
    else {
      memset(pvVar3,0,0x74d60);
      _DAT_ram_3004d528 = pvVar3;
    }
  }
  if (_DAT_ram_3004b4c0 == (void *)0x0) {
    if ((int)_DAT_ram_3004d528 + 0xcffc0000U < 0x100000) {
      pvVar3 = (void *)FUN_ram_40005666(0x5230);
      if (pvVar3 != (void *)0x0) {
        memset(pvVar3,0,0x5230);
        _DAT_ram_3004b4c0 = pvVar3;
        goto LAB_ram_4000dec0;
      }
      _DAT_ram_3004b4c0 = (void *)0x0;
    }
    _DAT_ram_3004b4c0 = (void *)FUN_ram_400086f8(0x5230);
    if (_DAT_ram_3004b4c0 == (void *)0x0) {
      return 0xffffffff;
    }
  }
LAB_ram_4000dec0:
  if ((_DAT_ram_3004d4f4 == (int *)0x0) &&
     (_DAT_ram_3004d4f4 = (int *)FUN_ram_400086f8(0x30), _DAT_ram_3004d4f4 == (int *)0x0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3004d520 == 0) &&
     (_DAT_ram_3004d520 = FUN_ram_400086f8(0x192e4), _DAT_ram_3004d520 == 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_30049ef8 == 0) &&
     (_DAT_ram_30049ef8 = FUN_ram_400086f8(0x6240), _DAT_ram_30049ef8 == 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3004b464 == 0) &&
     (_DAT_ram_3004b464 = FUN_ram_400086f8(0x2140), _DAT_ram_3004b464 == 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3004b454 == 0) &&
     (_DAT_ram_3004b454 = FUN_ram_400086f8(0x268), _DAT_ram_3004b454 == 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3004b45c == 0) &&
     (_DAT_ram_3004b45c = FUN_ram_400086f8(0x5c), _DAT_ram_3004b45c == 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3004b470 == 0) &&
     (_DAT_ram_3004b470 = FUN_ram_400086f8(0x2140), _DAT_ram_3004b470 == 0)) {
    return 0xffffffff;
  }
  if ((_DAT_ram_3004d518 == 0) &&
     (_DAT_ram_3004d518 = FUN_ram_400086f8(0x60f4), _DAT_ram_3004d518 == 0)) {
    return 0xffffffff;
  }
  if ((DAT_ram_3004b4f0 == '\0') &&
     (iVar4 = FUN_ram_4000493c(0x3004b4c4,s_ir_sel_ram_400927c4,1), iVar4 == 0)) {
    DAT_ram_3004b4f0 = '\x01';
  }
  if ((DAT_ram_30049eb4 == '\0') &&
     (iVar4 = FUN_ram_4000493c(0x30049e88,s_chain_ed_ram_400927cc,1), iVar4 == 0)) {
    DAT_ram_30049eb4 = '\x01';
  }
  if (DAT_ram_3004b424 == '\0') {
    iVar4 = FUN_ram_4000493c(0x3004b3f4,s_dsp_xfer_ram_400927d8,1);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = FUN_ram_400047b4(0x3004b428,s_dsp_ack_ram_400927e4,0,0);
    if (iVar4 != 0) {
      FUN_ram_40004970(0x3004b3f4);
      return 0xffffffff;
    }
    FUN_ram_4002240a(&DAT_ram_3004b3d4,0xac44,6,8);
    DAT_ram_3004b424 = '\x01';
  }
  FUN_ram_4008d2ac();
  FUN_ram_4008eb1e();
  iVar4 = FUN_ram_40081d82(0x3004d584);
  if (iVar4 == 0) {
    FUN_ram_40007c4e();
    DAT_ram_3004d5cc = 0;
  }
  iVar4 = FUN_ram_40081d82(0x3004a390);
  if (iVar4 == 0) {
    iVar4 = FUN_ram_4000818a();
    if (((iVar4 == 0) && (0x1d < DAT_ram_30046520)) && ((byte)(DAT_ram_30046520 - 0x1e) < 8)) {
      DAT_ram_3004b46c = DAT_ram_30046520 - 0x1e;
    }
    DAT_ram_30049efd = 0;
  }
  FUN_ram_400738aa(_DAT_ram_3004b4c0);
  FUN_ram_40073bf2(_DAT_ram_3004b4c0,0);
  DAT_ram_3004b4bc = 0;
  FUN_ram_40007e94();
  DAT_ram_3004d525 = 0;
  DAT_ram_3004d51c = 0;
  DAT_ram_30049ef0 = 0;
  DAT_ram_3004b462 = 0;
  DAT_ram_30049efd = 0;
  FUN_ram_4005e986(0x3004abe8);
  uVar6 = DAT_ram_40092878;
  FUN_ram_40071630(DAT_ram_40092878,0x3004d5d0,0x3004d584,&DAT_ram_3004d5cc);
  FUN_ram_40071630(uVar6,0x30049f00,0x3004a390,&DAT_ram_30049efd);
  FUN_ram_40068b2a(uVar6,_DAT_ram_3004b468,0x30049f00,&DAT_ram_30049efd);
  FUN_ram_40068b2a(uVar6,_DAT_ram_3004d518,0,&DAT_ram_3004d51c);
  FUN_ram_40071230(uVar6,_DAT_ram_3004d528);
  FUN_ram_4006ad28(uVar6,_DAT_ram_3004d520);
  FUN_ram_40066a0e(uVar6,_DAT_ram_3004b464);
  FUN_ram_400647c0(uVar6,_DAT_ram_3004b454);
  FUN_ram_40065caa(uVar6,_DAT_ram_3004b45c);
  FUN_ram_40066a0e(uVar6,_DAT_ram_3004b470);
  _DAT_ram_30049ef4 = 0x20d6f;
  pvVar3 = (void *)FUN_ram_4003e050(1,0x835bc);
  if (pvVar3 == (void *)0x0) {
    _DAT_ram_30049ef4 = 0;
    uVar7 = 0;
    iVar4 = 0;
    uVar5 = 0;
    pvVar3 = (void *)0x0;
  }
  else {
    memset(pvVar3,0,_DAT_ram_30049ef4 << 2);
    uVar7 = 0x89d;
    iVar4 = (int)pvVar3 + 0x81348;
    uVar5 = 0x204d2;
  }
  FUN_ram_400600f2(uVar6,_DAT_ram_30049ef8,pvVar3,uVar5,iVar4,uVar7);
  piVar2 = _DAT_ram_3004d4f4;
  pvVar3 = _DAT_ram_3004b4c0;
  _DAT_ram_3004d4f4[5] = 0;
  *piVar2 = (int)pvVar3;
  uVar9 = (ulonglong)DAT_ram_40092878;
  uVar8 = (ulonglong)DAT_ram_4009281c;
  piVar2[6] = 0;
  *(ulonglong *)(piVar2 + 1) = uVar9;
  uVar9 = (ulonglong)DAT_ram_40092818;
  *(ulonglong *)(piVar2 + 4) = uVar8;
  *(ulonglong *)(piVar2 + 9) = uVar8;
  *(ulonglong *)(piVar2 + 2) = uVar9;
  *(ulonglong *)(piVar2 + 3) = uVar9;
  piVar2[7] = 0;
  piVar2[8] = 0;
  piVar2[10] = 0;
  piVar2[0xb] = 0;
  iVar4 = FUN_ram_4005ea8e(0x3004abe8);
  FUN_ram_4005e946();
  FUN_ram_4005eaca(iVar4,0,1,0,0x3004d5d0,1);
  FUN_ram_4005eaca(iVar4,1,2,0,_DAT_ram_3004d4f4,0);
  pvVar3 = _DAT_ram_3004d528;
  uVar9 = (ulonglong)DAT_ram_4009287c;
  *(ulonglong *)(iVar4 + 0x60) = uVar8;
  *(ulonglong *)(iVar4 + 100) = uVar9;
  *(undefined4 *)(iVar4 + 0x5c) = 0;
  FUN_ram_4005eaca(iVar4,2,3,6,pvVar3,0);
  FUN_ram_4005eaca(iVar4,3,7,0,_DAT_ram_3004b464,0);
  FUN_ram_4005eaca(iVar4,4,8,DAT_ram_3004b46c,_DAT_ram_3004b468,0);
  FUN_ram_4005eaca(iVar4,5,5,0,_DAT_ram_30049ef8,0);
  FUN_ram_4005eaca(iVar4,6,4,0,_DAT_ram_3004d520,0);
  FUN_ram_4005eaca(iVar4,7,6,0,_DAT_ram_3004b454,0);
  FUN_ram_400086c4(iVar4 + 0x14);
  FUN_ram_400690a8(iVar4 + 0x134,0xc,DAT_ram_3004b46c);
  FUN_ram_40071420(iVar4 + 0xa4,0xc,6);
  FUN_ram_40066f46(iVar4 + 0xec,0xc);
  FUN_ram_4005fe7c(iVar4 + 0x17c,0xc);
  FUN_ram_4006b704(iVar4 + 0x1c4,0xc);
  FUN_ram_400648fa(iVar4 + 0x20c,0xc);
  FUN_ram_4005eaba(0x3004abe8);
  FUN_ram_4003b2d8(&DAT_ram_3004b474,0);
  FUN_ram_4003b2f8(&DAT_ram_3004b474,0);
  FUN_ram_4003b4d2(&DAT_ram_3004b474,0);
  FUN_ram_4003b5be(&DAT_ram_3004b474,2,0);
  FUN_ram_4003b5be(&DAT_ram_3004b474,2,1);
  FUN_ram_4003b3de(&DAT_ram_3004b474,0x20);
  FUN_ram_4003b424(&DAT_ram_3004b474,0x20);
  FUN_ram_4003b460(&DAT_ram_3004b474,0xac44,0x100);
  FUN_ram_4003b4f8(&DAT_ram_3004b474,0xac44,0x40);
  _DAT_ram_3004b3d0 = 0xac44;
  FUN_ram_400243ee();
  puVar1 = _DAT_ram_3004b474;
  fence();
  fence();
  _DAT_ram_3004b474[9] = _DAT_ram_3004b474[9] | 0x100;
  fence();
  fence();
  *_DAT_ram_3004b474 = *puVar1 | 1;
  iVar4 = FUN_ram_4000dd80();
  if (iVar4 == 0) {
    FUN_ram_40007f38(0x31,0x10,4,0x10,1);
    memset(&local_90,0,0x20);
    memset(auStack_70,0,0x20);
    FUN_ram_40038aec();
    FUN_ram_4003ec9e(0x20,FUN_ram_40038b62,0);
    FUN_ram_4003ec56(0x20);
    uVar6 = (_DAT_ram_20800004 & 0x1ffffff) >> 0x15;
    if (7 < uVar6 - 1) {
      uVar6 = 2;
    }
    uVar6 = (1 << uVar6) - 1;
    if (2 < uVar6) {
      uVar6 = 2;
    }
    DAT_ram_20801083 =
         (byte)(uVar6 << (8 - ((_DAT_ram_20800004 & 0x1ffffff) >> 0x15) & 0x1f)) |
         DAT_ram_20801083 & 0x1f;
    local_90 = 2;
    puStack_8c = _DAT_ram_3004b474 + 4;
    puStack_68 = _DAT_ram_3004b474 + 8;
    uStack_74 = 0xc;
    uStack_84 = 4;
    uStack_80 = 4;
    uStack_7c = 1;
    uStack_78 = 1;
    auStack_70[0] = 1;
    uStack_54 = 0xc;
    uStack_64 = 4;
    uStack_60 = 4;
    uStack_5c = 1;
    uStack_58 = 1;
    _DAT_ram_3004a3d8 = FUN_ram_40038a8e();
    if (_DAT_ram_3004a3d8 != 0) {
      _DAT_ram_3004a3dc = FUN_ram_40038a8e();
      if (_DAT_ram_3004a3dc == 0) {
        FUN_ram_40038a5a();
      }
      else {
        FUN_ram_40038a26(_DAT_ram_3004a3d8,FUN_ram_4000b3e2,0);
        FUN_ram_40038a36(_DAT_ram_3004a3d8,&local_90);
        FUN_ram_40038a26(_DAT_ram_3004a3dc,&LAB_ram_40008efe,0);
        FUN_ram_40038a36(_DAT_ram_3004a3dc,auStack_70);
        if ((_DAT_ram_30049e40 != 0) ||
           (_DAT_ram_30049e40 = FUN_ram_400047e8(s_audblk_ram_400927ec,0,0), _DAT_ram_30049e40 != 0)
           ) {
          if (_DAT_ram_30049e74 == 0) {
            _DAT_ram_30049e74 =
                 FUN_ram_400064c6(s_audblk_ram_400927ec,FUN_ram_4000b2dc,0,0x2000,3,1);
            if (_DAT_ram_30049e74 == 0) {
              return 0xffffffff;
            }
            FUN_ram_40006640();
          }
          if ((_DAT_ram_30049e80 == 0) &&
             (_DAT_ram_30049e80 = FUN_ram_400047e8(&DAT_ram_400927f4,0,0), _DAT_ram_30049e80 != 0))
          {
            iVar4 = FUN_ram_400064c6(&DAT_ram_400927f4,FUN_ram_40008fa8,0,0x800,0x14,10);
            if (iVar4 == 0) {
              FUN_ram_40004816(_DAT_ram_30049e80);
              _DAT_ram_30049e80 = 0;
            }
            else {
              FUN_ram_40006640();
            }
          }
          iVar4 = FUN_ram_40008abe(1);
          if (iVar4 == 0) {
            FUN_ram_400065d4(0x14);
            FUN_ram_40008576(0);
            DAT_ram_3004d57c = 0;
            DAT_ram_3004668c = 0;
            DAT_ram_3004d57a = 0;
            DAT_ram_3004d57b = 0;
            _DAT_ram_3004d57e = 0;
            _DAT_ram_3004fa9c = FUN_ram_40004476(&DAT_ram_400927fc);
            if (_DAT_ram_3004fa9c == 0) {
              return 0;
            }
            _DAT_ram_3004fa98 = FUN_ram_40036848();
            FUN_ram_40040988(_DAT_ram_3004fa9c,4);
            FUN_ram_40029f82();
            FUN_ram_40028776();
            if (((DAT_ram_30049dd4 == '\0') &&
                (iVar4 = FUN_ram_400047b4(0x30049dd8,s_asset_ram_40092804,0,0), iVar4 == 0)) &&
               (iVar4 = FUN_ram_400064c6(s_asset_ram_40092804,FUN_ram_4000c110,0,0xc00,0x16,10),
               iVar4 != 0)) {
              FUN_ram_40006640();
              DAT_ram_30049dd4 = '\x01';
            }
            iVar4 = FUN_ram_400064c6(s_adc_read_ram_4009280c,FUN_ram_4000e76e,0,0x400,0x19,10);
            if (iVar4 != 0) {
              FUN_ram_40006640();
              return 0;
            }
            return 0;
          }
        }
      }
    }
  }
  return 0xffffffff;
}


