/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40029000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40029344.
 * REA evidence: ev_ab45124e0675b3af20d346b780192fe6f099f3e880a7d33f73f1e45a23350478
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40029344(int param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3006be94 = param_1 != 0;
  FUN_ram_400002fa();
  if (param_1 == 0) {
    FUN_ram_40028dfc();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40029374.
 * REA evidence: ev_5998faf1516e17ff224d44ba5dd9d1ba1f8c44dc27de200421a4e9740557ebda
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40029374(uint param_1)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = 0x1e0;
  if (param_1 < 0x1e1) {
    uVar2 = param_1;
  }
  uVar1 = (undefined2)uVar2;
  if ((uVar2 & 0xffff) < 400) {
    uVar1 = 400;
  }
  FUN_ram_400002f4();
  DAT_ram_30046792 = uVar1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x400293ae.
 * REA evidence: ev_cfba85633282b1dd7c00cb323fde6e58d7ec0c853d8070dd324d8026db0ceb38
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400293ae(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_ram_400002f4();
    FUN_ram_4000305c(param_1,&DAT_ram_3006be98,0xc);
    FUN_ram_400002fa(uVar1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400293e0.
 * REA evidence: ev_ad7be5ffb35dd9006b1fcbe65e6f56757bc166cd593658eda63dab982ab9dee0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400293e0(undefined4 *param_1)

{
  return *param_1;
}


/* NanoCore 1.10, address 0x400293fe.
 * REA evidence: ev_c6716bd192d0aa387bc329e58bc8946bed599bf4a2637f86eb6d060c0824ee4e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400293fe(uint param_1)

{
  _DAT_ram_300781d0 = param_1;
  if (param_1 < _DAT_ram_300781d4) {
    _DAT_ram_300781d4 = param_1;
  }
  if (_DAT_ram_300781d8 < param_1) {
    _DAT_ram_300781d8 = param_1;
  }
  return;
}


/* NanoCore 1.10, address 0x4002941a.
 * REA evidence: ev_5a6b3f8923acba4bf13895a818275df4c00c6defb070b535f10148ac3cc87756
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002941a(void)

{
  _DAT_ram_300784fc = 0;
  _DAT_ram_300784fe = 0;
  return;
}


/* NanoCore 1.10, address 0x4002942c.
 * REA evidence: ev_6b1fc4b0c5d9d935290e3a7c2adcf9f3c549f146801f468e73cf544d9a9fcb0f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002942c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  FUN_ram_400002f4();
  uVar1 = _DAT_ram_30078b14;
  bVar5 = false;
  uVar4 = _DAT_ram_3007931c;
  for (iVar2 = 0; (iVar2 != param_2 && (iVar2 + uVar1 < 0x800)); iVar2 = iVar2 + 1) {
    uVar3 = uVar4 + 1;
    *(undefined1 *)(uVar4 + 0x30078b18) = *(undefined1 *)(param_1 + iVar2);
    uVar4 = uVar3;
    if (0x7ff < uVar3) {
      uVar4 = 0;
    }
    bVar5 = true;
  }
  if (bVar5) {
    _DAT_ram_30078b14 = iVar2 + uVar1;
    _DAT_ram_3007931c = uVar4;
  }
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x4002949c.
 * REA evidence: ev_900cc40dab92c9abfcf6ad186431eb870b8d7b999ec98c444b36880cc20bbdb2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002949c(void)

{
  undefined4 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = _DAT_ram_30076d18;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.10, address 0x400294bc.
 * REA evidence: ev_960204d934e575afe317865239e8f62f1cad91ca41e6e04d3fe7d16d02ffba20
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400294bc(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  FUN_ram_4002ad42(0x3006e340);
  FUN_ram_400002fa(uVar1);
  _DAT_ram_3006e020 = 0;
  _DAT_ram_3007815c = 0;
  _DAT_ram_3006e338 = 0;
  _DAT_ram_3006e33c = 0;
  _DAT_ram_30076d20 = 0;
  _DAT_ram_30076d22 = 0;
  _DAT_ram_30076d1c = 0;
  return;
}


/* NanoCore 1.10, address 0x4002951a.
 * REA evidence: ev_c19f16b8ecb36a893556d223bc80c7e360a7a8b9d8c353c8ac8a1f4fa87901d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4002951a(void)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = _DAT_ram_30076d1c;
  bVar2 = false;
  if ((_DAT_ram_3006e020 != 0) && (bVar2 = false, _DAT_ram_30076d1c != 0)) {
    uVar3 = FUN_ram_40004362(0x3c);
    iVar4 = FUN_ram_400042fa();
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    bVar2 = (uint)(iVar4 - iVar1) <= uVar3;
  }
  return bVar2;
}


/* NanoCore 1.10, address 0x40029562.
 * REA evidence: ev_cc2242692215d0c7065f61e59b7a58f75ee8bbf13b6287341e34588537284fab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029562(void *param_1,size_t param_2)

{
  if ((param_1 != (void *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2);
    _DAT_ram_30076d20 = 0;
    _DAT_ram_30076d22 = 0;
    return;
  }
  _DAT_ram_30076d20 = 0;
  _DAT_ram_30076d22 = 0;
  return;
}


/* NanoCore 1.10, address 0x4002959a.
 * REA evidence: ev_79d42e77110a22b2c0be29e88b0cf154ac9cf5f31de6ae8372463cd1d297205a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4002966c) */
/* WARNING: Removing unreachable block (ram,0x40029684) */
/* WARNING: Removing unreachable block (ram,0x400295fa) */
/* WARNING: Removing unreachable block (ram,0x40029612) */

void FUN_ram_4002959a(short *param_1,int param_2,short *param_3,int param_4,uint param_5)

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  if ((param_1 == (short *)0x0) || (param_2 == 0)) {
    return;
  }
  if ((param_3 == (short *)0x0) || (param_4 == 0)) {
    memset(param_1,0,param_5 * param_2 * 2);
    return;
  }
  if ((param_5 == 2) && (param_2 == 0x40)) {
    if (param_4 == 0x3f) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      iVar6 = 1;
      psVar1 = param_3;
      do {
        param_1[iVar6 * 2] = (short)(((int)psVar1[2] * (0x3f - iVar6) + *psVar1 * iVar6) / 0x3f);
        (param_1 + 1)[iVar6 * 2] =
             (short)(((int)psVar1[3] * (0x3f - iVar6) + psVar1[1] * iVar6) / 0x3f);
        iVar6 = iVar6 + 1;
        psVar1 = psVar1 + 2;
      } while (iVar6 != 0x3f);
      param_1[0x7e] = param_3[0x7c];
      sVar7 = param_3[0x7d];
    }
    else {
      if (param_4 != 0x41) goto LAB_ram_400296a0;
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      iVar6 = 1;
      psVar1 = param_3;
      do {
        param_1[iVar6 * 2] = (short)((psVar1[4] * iVar6 + (int)psVar1[2] * (0x3f - iVar6)) / 0x3f);
        (param_1 + 1)[iVar6 * 2] =
             (short)((psVar1[5] * iVar6 + (int)psVar1[3] * (0x3f - iVar6)) / 0x3f);
        iVar6 = iVar6 + 1;
        psVar1 = psVar1 + 2;
      } while (iVar6 != 0x3f);
      param_1[0x7e] = param_3[0x80];
      sVar7 = param_3[0x81];
    }
    param_1[0x7f] = sVar7;
    return;
  }
LAB_ram_400296a0:
  if (param_2 == param_4) {
    FUN_ram_4000305c(param_1,param_3,param_2 * param_5 * 2);
    return;
  }
  if ((param_4 != 1) && (param_2 != 1)) {
    uVar5 = param_4 - 1;
    uVar2 = param_2 - 1;
    iVar9 = 0;
    uVar8 = 0;
    iVar6 = 0;
    do {
      if (uVar2 == 0) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = uVar8 / uVar2;
      }
      if (uVar4 < uVar5) {
        uVar10 = uVar8;
        if (uVar2 != 0) {
          uVar10 = uVar8 % uVar2;
        }
      }
      else {
        uVar4 = uVar5;
        uVar10 = 0;
      }
      psVar3 = (short *)((int)param_3 + uVar4 * param_5 * 2);
      psVar1 = psVar3;
      if (uVar4 < uVar5) {
        psVar1 = (short *)((int)param_3 + (uVar4 + 1) * param_5 * 2);
      }
      uVar4 = 0;
      do {
        if (uVar2 == 0) {
          sVar7 = -1;
        }
        else {
          sVar7 = (short)((int)((int)psVar1[uVar4] * uVar10 + (int)psVar3[uVar4] * (uVar2 - uVar10))
                         / (int)uVar2);
        }
        param_1[iVar9 + uVar4] = sVar7;
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xff) < param_5);
      iVar6 = iVar6 + 1;
      uVar8 = uVar8 + uVar5;
      iVar9 = iVar9 + param_5;
    } while (param_2 != iVar6);
    return;
  }
  iVar6 = 0;
  do {
    *param_1 = *param_3;
    if (param_5 == 2) {
      param_1[1] = param_3[1];
    }
    iVar6 = iVar6 + 1;
    param_1 = param_1 + param_5;
  } while (param_2 != iVar6);
  return;
}


/* NanoCore 1.10, address 0x400296e0.
 * REA evidence: ev_0ee3cb62bd7c436a50d17696fe3a4fe83ed852e16863cac56036119645f5baff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400296e0(int param_1,int param_2,undefined4 param_3,int param_4,uint param_5,
                     int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int in_t5;
  uint uVar10;
  
  uVar6 = param_4 - 1;
  uVar2 = param_2 - 1;
  iVar9 = 0;
  uVar7 = 0;
  iVar8 = 0;
  do {
    if (uVar2 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = uVar7 / uVar2;
    }
    if (uVar5 < uVar6) {
      uVar10 = uVar7;
      if (uVar2 != 0) {
        uVar10 = uVar7 % uVar2;
      }
    }
    else {
      uVar5 = uVar6;
      uVar10 = 0;
    }
    iVar3 = param_6 + uVar5 * in_t5;
    iVar1 = iVar3;
    if (uVar5 < uVar6) {
      iVar1 = param_6 + (uVar5 + 1) * in_t5;
    }
    uVar5 = 0;
    do {
      if (uVar2 == 0) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = (undefined2)
                ((int)((int)*(short *)(iVar1 + uVar5 * 2) * uVar10 +
                      (int)*(short *)(iVar3 + uVar5 * 2) * (uVar2 - uVar10)) / (int)uVar2);
      }
      *(undefined2 *)(param_1 + iVar9 * 2 + uVar5 * 2) = uVar4;
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xff) < param_5);
    iVar8 = iVar8 + 1;
    uVar7 = uVar7 + uVar6;
    iVar9 = iVar9 + param_5;
  } while (param_2 != iVar8);
  return;
}


/* NanoCore 1.10, address 0x4002975c.
 * REA evidence: ev_47eb5df15bc155018d3ced9ce2d86046726399fdbdfd9422e3a47ace6f06cf16
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002975c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_400044f8(param_1,0x203);
  if (((iVar1 == 0) || (iVar1 = FUN_ram_400044f8(param_1,0x103), iVar1 == 0)) ||
     (iVar1 = FUN_ram_400044f8(param_1,3), iVar1 == 0)) {
    FUN_ram_4000460e(param_1,&LAB_ram_4002979e);
    iVar1 = 0;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x400297bc.
 * REA evidence: ev_4ef8c02f622aca1bdb623749f3164d00bda3c5fe9863a6c28c1b9f34e38bfc77
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400297bc(short *param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = _DAT_ram_3006e33c;
  if ((param_1 == (short *)0x0) || (param_2 == 0)) {
    return;
  }
  if (1 < _DAT_ram_3006e33c) {
    iVar6 = _DAT_ram_3006e33c - 1;
    uVar3 = param_2 + _DAT_ram_3006e338;
    bVar1 = false;
    uVar5 = _DAT_ram_3006e338;
    do {
      if (uVar2 <= uVar5) {
        if (!bVar1) {
          _DAT_ram_3006e33c = 0;
          return;
        }
        _DAT_ram_3006e338 = uVar5;
        _DAT_ram_3006e33c = 0;
        return;
      }
      if (iVar6 == 0) {
        sVar4 = -1;
      }
      else {
        sVar4 = (short)((int)((int)*param_1 * uVar5) / iVar6);
      }
      *param_1 = sVar4;
      if (param_3 == 2) {
        if (iVar6 == 0) {
          sVar4 = -1;
        }
        else {
          sVar4 = (short)((int)((int)param_1[1] * uVar5) / iVar6);
        }
        param_1[1] = sVar4;
      }
      uVar5 = uVar5 + 1;
      param_1 = param_1 + param_3;
      bVar1 = true;
    } while (uVar5 != uVar3);
    _DAT_ram_3006e338 = uVar5;
    if (uVar5 < uVar2) {
      return;
    }
  }
  _DAT_ram_3006e33c = 0;
  return;
}


/* NanoCore 1.10, address 0x40029836.
 * REA evidence: ev_db6b4b6b8891fd3b50182deef822a5b58ddd4d99b4f8341fdabe55205d8dd698
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_40029836(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      return 0;
    }
    uVar1 = FUN_ram_400002f4();
    if (_DAT_ram_30078808 != _DAT_ram_30078800) {
      if (_DAT_ram_30078804 < param_2) {
        param_2 = (uint)_DAT_ram_30078804;
      }
      if (param_2 != 0) {
        FUN_ram_4000305c(param_1,0x30078500,param_2);
      }
      _DAT_ram_30078800 = _DAT_ram_30078808;
      FUN_ram_400002fa(uVar1);
      return param_2;
    }
    FUN_ram_400002fa();
  }
  return 0;
}


/* NanoCore 1.10, address 0x400298b4.
 * REA evidence: ev_10841dd8a60e8db0cb0c78e62e3433c9ae3993125bf6569c18a45e64b91b5152
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_400298b4(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  
  uVar1 = 0;
  if (((_DAT_ram_300781e4 != 0) && (param_1 != 0)) && (param_2 != 0)) {
    if (_DAT_ram_300781f4 != 0) {
      FUN_ram_400049d6(_DAT_ram_300781f4,0xffffffff);
    }
    cVar3 = '\0';
    uVar1 = 0;
    do {
      iVar2 = FUN_ram_400045de(_DAT_ram_300781e4,0,param_1 + uVar1,param_2 - uVar1);
      if (iVar2 == 0) {
        cVar3 = cVar3 + '\x01';
        FUN_ram_400065d4(1);
      }
      else {
        uVar1 = uVar1 + iVar2;
      }
    } while ((uVar1 < param_2) && (cVar3 != '\x05'));
    if (_DAT_ram_300781f4 != 0) {
      FUN_ram_40004ac8();
    }
    _DAT_ram_30078168 = _DAT_ram_30078168 + uVar1;
    if (param_2 != uVar1) {
      _DAT_ram_3007817c = _DAT_ram_3007817c + 1;
    }
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4002995c.
 * REA evidence: ev_55fd803be54655bc6ed453e137328695a4c3f9ab128673ba817fc77b1303efe4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002995c(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined1 auStack_118 [276];
  
  if (0x100 < param_2) {
    param_2 = 0x100;
  }
  iVar1 = FUN_ram_4002afd6(auStack_118,0x108,3,0,param_1,param_2 & 0xffff);
  if (iVar1 != 0) {
    FUN_ram_400298b4(auStack_118,iVar1);
  }
  return;
}


/* NanoCore 1.10, address 0x40029994.
 * REA evidence: ev_3ebec02cff99e150bb2c2ad4d314bce804f563d49e16f3cc9257bca6e65fae63
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40029994(byte *param_1,uint param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte local_330 [772];
  
  if (((param_1 == (byte *)0x0) || (param_2 == 0)) || ((param_2 & 3) != 0)) {
    return 0;
  }
  pbVar3 = param_1;
  uVar6 = 0;
  cVar4 = DAT_ram_3006e334;
LAB_ram_40029a1c:
  uVar7 = (uint)*pbVar3;
  if ((*pbVar3 & 0xf0) != 0) goto switchD_ram_40029a3c_default;
  bVar1 = pbVar3[1];
  switch(uVar7 - 2 & 0xff) {
  case 0:
    if ((bVar1 & 0xfd) == 0xf1) goto LAB_ram_40029a46;
    goto switchD_ram_40029a3c_default;
  case 1:
    if (bVar1 == 0xf2) goto LAB_ram_40029a46;
    goto switchD_ram_40029a3c_default;
  case 2:
    if ((cVar4 != '\0') || (bVar1 == 0xf0)) {
      uVar7 = 3;
      cVar4 = '\x01';
      goto LAB_ram_40029a46;
    }
    goto switchD_ram_40029a3c_default;
  case 3:
    if (cVar4 != '\0') {
      cVar4 = '\0';
      goto LAB_ram_40029af0;
    }
    if (bVar1 != 0xf7) goto switchD_ram_40029a3c_default;
    goto LAB_ram_40029af0;
  case 4:
    if (cVar4 != '\0') {
      cVar4 = '\0';
      goto LAB_ram_40029afa;
    }
    if (bVar1 != 0xf0) goto switchD_ram_40029a3c_default;
    goto LAB_ram_40029afa;
  case 5:
    if (cVar4 == '\0') {
      if (bVar1 != 0xf0) goto switchD_ram_40029a3c_default;
    }
    else {
      cVar4 = '\0';
    }
    break;
  case 6:
    if ((bVar1 & 0xf0) != 0x80) goto switchD_ram_40029a3c_default;
    break;
  case 7:
    if ((bVar1 & 0xf0) != 0x90) goto switchD_ram_40029a3c_default;
    break;
  case 8:
    if ((bVar1 & 0xf0) != 0xa0) goto switchD_ram_40029a3c_default;
    break;
  case 9:
    if ((bVar1 & 0xf0) != 0xb0) goto switchD_ram_40029a3c_default;
    break;
  case 10:
    if ((bVar1 & 0xf0) == 0xc0) goto LAB_ram_40029afa;
    goto switchD_ram_40029a3c_default;
  case 0xb:
    if ((bVar1 & 0xf0) != 0xd0) goto switchD_ram_40029a3c_default;
LAB_ram_40029afa:
    uVar7 = 2;
    goto LAB_ram_40029a46;
  case 0xc:
    if ((bVar1 & 0xf0) != 0xe0) goto switchD_ram_40029a3c_default;
    break;
  case 0xd:
    if (bVar1 < 0xf8) goto switchD_ram_40029a3c_default;
LAB_ram_40029af0:
    uVar7 = 1;
    goto LAB_ram_40029a46;
  default:
    goto switchD_ram_40029a3c_default;
  }
  uVar7 = 3;
LAB_ram_40029a46:
  uVar8 = uVar7 + uVar6;
  if (0x300 < uVar8) goto switchD_ram_40029a3c_default;
  uVar5 = 0;
  do {
    local_330[uVar5 + uVar6] = pbVar3[uVar5 + 1];
    uVar5 = uVar5 + 1;
  } while ((uVar5 & 0xff) < uVar7);
  pbVar3 = pbVar3 + 4;
  uVar6 = uVar8;
  if (param_2 <= (uint)((int)pbVar3 - (int)param_1)) {
    DAT_ram_3006e334 = cVar4;
    if (uVar8 == 0) {
switchD_ram_40029a3c_default:
      uVar2 = 0;
    }
    else {
      FUN_ram_4002942c(local_330,uVar8);
      if (0x20 < uVar8) {
        uVar8 = 0x20;
      }
      FUN_ram_40010386(s_CFctrl_usb_midi_ram_40094eb6 + 2,local_330,uVar8 & 0xff);
      uVar2 = 1;
    }
    return uVar2;
  }
  goto LAB_ram_40029a1c;
}


/* NanoCore 1.10, address 0x40029b60.
 * REA evidence: ev_f7f8ddad32a24badfe4cc05ddc8fe61e760c973f6668aac1e105190c2405541e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029b60(int param_1)

{
  char cVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar4 = _DAT_ram_300781ec;
  if (_DAT_ram_300781e4 != 0) {
    if (_DAT_ram_300781ec != 0) {
      uVar6 = FUN_ram_40004362(2);
      iVar4 = FUN_ram_400049d6(iVar4,uVar6);
      if (iVar4 != 0) {
        return;
      }
    }
    if (param_1 == 0) {
      iVar4 = FUN_ram_4002951a();
      if (iVar4 == 0) {
        FUN_ram_40035dd2(5);
      }
    }
    else {
      FUN_ram_40035f32(5);
    }
    cVar3 = '\b';
    while (uVar5 = FUN_ram_400045b8(_DAT_ram_300781e4,0,0x30079320,0x400), uVar5 != 0) {
      _DAT_ram_30078164 = _DAT_ram_30078164 + uVar5;
      if (DAT_ram_300781f8 == '\0') {
        FUN_ram_4002b09a(0x30076d24,0x30079320,uVar5);
      }
      else {
        uVar9 = 0;
        do {
          uVar8 = (uint)_DAT_ram_300784fc;
          cVar1 = *(char *)(uVar9 + 0x30079320);
          if (uVar8 == 0) {
            if (cVar1 == -0x56) {
              _DAT_ram_300784fc = 1;
LAB_ram_40029c88:
              DAT_ram_300781fc = 0xaa;
            }
          }
          else if (uVar8 == 1) {
            if (cVar1 == 'U') {
              _DAT_ram_300784fc = 2;
              DAT_ram_300781fd = 0x55;
            }
            else {
              if (cVar1 == -0x56) goto LAB_ram_40029c88;
LAB_ram_40029cc8:
              FUN_ram_4002941a();
            }
          }
          else {
            if (0x2ff < uVar8) goto LAB_ram_40029cc8;
            uVar7 = uVar8 + 1 & 0xffff;
            (&DAT_ram_300781fc)[uVar8] = cVar1;
            _DAT_ram_300784fc = (ushort)((uVar8 + 1) * 0x10000 >> 0x10);
            if (uVar7 == 4) {
              _DAT_ram_300784fe = _DAT_ram_300781fe + 6;
              if (0x2fa < _DAT_ram_300781fe) goto LAB_ram_40029cc8;
            }
            else if ((_DAT_ram_300784fe != 0) && (uVar7 == _DAT_ram_300784fe)) {
              uVar8 = FUN_ram_4002af92(0,&DAT_ram_300781fc,uVar7 - 2);
              uVar2 = _DAT_ram_300784fe;
              uVar7 = (uint)_DAT_ram_300784fe;
              if (uVar8 == *(ushort *)(uVar7 + 0x300781fa)) {
                if ((uVar7 - 1 & 0xffff) < 0x300) {
                  uVar6 = FUN_ram_400002f4();
                  FUN_ram_4000305c(0x30078500,&DAT_ram_300781fc,uVar7);
                  _DAT_ram_30078804 = uVar2;
                  _DAT_ram_30078808 = _DAT_ram_30078808 + 1;
                  FUN_ram_400002fa(uVar6);
                }
              }
              else {
                _DAT_ram_300781bc = _DAT_ram_300781bc + 1;
              }
              goto LAB_ram_40029cc8;
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar5 != uVar9);
      }
      if ((uVar5 < 0x400) || (cVar3 = cVar3 + -1, cVar3 == '\0')) break;
    }
    if (_DAT_ram_300781ec != 0) {
      FUN_ram_40004ac8();
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40029d8e.
 * REA evidence: ev_f2cfef100531df44dd20174f9549354c17a9e1d89abddc45b3f7fa606ad7ec86
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40029d8e(void)

{
  return 0;
}


/* NanoCore 1.10, address 0x40029d92.
 * REA evidence: ev_d4fab11831cab4c59586e3d7c84680e0e40e21ad78b4385f2695fd13f5561bff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029d92(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  int *piVar5;
  char cVar6;
  
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    cVar6 = '\x02';
  }
  else {
    cVar6 = '\x01';
    if (cVar1 != '\x05') {
      if (cVar1 == '\x02') {
        _DAT_ram_30078170 = _DAT_ram_30078170 + 1;
        FUN_ram_4002942c(*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 2));
        uVar4 = *(ushort *)(param_1 + 2);
        if (uVar4 == 0) {
          return;
        }
        if (0x20 < uVar4) {
          uVar4 = 0x20;
        }
        FUN_ram_40010386(s_uart_rx_ram_40094f00,*(undefined4 *)(param_1 + 8),uVar4 & 0xff);
        return;
      }
      if (cVar1 == '\x03') {
        _DAT_ram_30078174 = _DAT_ram_30078174 + 1;
        iVar2 = FUN_ram_40029994(*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 2));
        if (iVar2 != 0) {
          _DAT_ram_30078170 = _DAT_ram_30078170 + 1;
          return;
        }
        iVar2 = FUN_ram_4002cbae(*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 2));
        if (iVar2 != 0) {
          return;
        }
        iVar2 = FUN_ram_40029d8e(*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 2));
        if (iVar2 != 0) {
          return;
        }
        uVar3 = FUN_ram_400002f4();
        _DAT_ram_3006e32c = *(ushort *)(param_1 + 2);
        if (0x300 < _DAT_ram_3006e32c) {
          _DAT_ram_3006e32c = 0x300;
        }
        if (_DAT_ram_3006e32c != 0) {
          FUN_ram_4000305c(0x3006e02c,*(undefined4 *)(param_1 + 8),_DAT_ram_3006e32c);
        }
        piVar5 = (int *)&DAT_ram_3006e330;
      }
      else {
        if (cVar1 != '\x04') {
          return;
        }
        _DAT_ram_30078178 = _DAT_ram_30078178 + 1;
        uVar3 = FUN_ram_400002f4();
        _DAT_ram_30078804 = *(ushort *)(param_1 + 2);
        if (0x300 < _DAT_ram_30078804) {
          _DAT_ram_30078804 = 0x300;
        }
        if (_DAT_ram_30078804 != 0) {
          FUN_ram_4000305c(0x30078500,*(undefined4 *)(param_1 + 8),_DAT_ram_30078804);
        }
        piVar5 = (int *)&DAT_ram_30078808;
      }
      *piVar5 = *piVar5 + 1;
      FUN_ram_400002fa(uVar3);
      return;
    }
  }
  _DAT_ram_3007816c = _DAT_ram_3007816c + 1;
  if ((_DAT_ram_30077d54 == 0) && (*(short *)(param_1 + 2) != 0)) {
    if (DAT_ram_30046795 != cVar6) {
      FUN_ram_400294bc();
      DAT_ram_30046795 = cVar6;
    }
    _DAT_ram_3006e020 = 1;
    _DAT_ram_30076d1c = FUN_ram_400042fa();
    iVar2 = FUN_ram_4002ad54(0x3006e340,*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 2));
    if (iVar2 == 0) {
      _DAT_ram_300781b4 = _DAT_ram_300781b4 + 1;
    }
    else {
      _DAT_ram_300781b8 = _DAT_ram_300781b8 + 1;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40029f82.
 * REA evidence: ev_51ac35444b1cbc970a07b8f645e29c464e42ce7f5446867035ecdce10447952f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40029f82(void)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  
  if (_DAT_ram_3006e028 == 0) {
    _DAT_ram_3006e024 = FUN_ram_40004362(1000);
    if (_DAT_ram_3006e024 == 0) {
      _DAT_ram_3006e024 = 1;
    }
    if ((((_DAT_ram_300781f0 != 0) ||
         (_DAT_ram_300781f0 = FUN_ram_400047e8(s_u5_rx_ram_40094f08,0,0), _DAT_ram_300781f0 != 0))
        && ((_DAT_ram_300781f4 != 0 ||
            (_DAT_ram_300781f4 = FUN_ram_4000498c(s_u5_tx_ram_40094f10,1), _DAT_ram_300781f4 != 0)))
        ) && ((_DAT_ram_300781ec != 0 ||
              (_DAT_ram_300781ec = FUN_ram_4000498c(s_u5_rxm_ram_40094f24,1), _DAT_ram_300781ec != 0
              )))) {
      FUN_ram_4002ad42(0x3006e340);
      pvVar2 = memset(&DAT_ram_30078164,0,0x80);
      *(undefined4 *)((int)pvVar2 + 0x70) = 0xffffffff;
      DAT_ram_30046795 = 2;
      DAT_ram_30046794 = 2;
      DAT_ram_30078160 = 0;
      _DAT_ram_3006e020 = 0;
      _DAT_ram_3007815c = 0;
      _DAT_ram_30076d1c = 0;
      FUN_ram_4002b064(0x30076d24,FUN_ram_40029d92,0);
      iVar3 = FUN_ram_400064c6(s_uart5_rx_ram_40094f18,FUN_ram_4002acc2,0,0x2000,0x12,10);
      if (iVar3 != 0) {
        FUN_ram_40006640();
        _DAT_ram_3006e028 = 1;
        return 0;
      }
      FUN_ram_40004816(_DAT_ram_300781f0);
      _DAT_ram_300781f0 = 0;
      FUN_ram_400049ba(_DAT_ram_300781ec);
      _DAT_ram_300781ec = 0;
    }
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


