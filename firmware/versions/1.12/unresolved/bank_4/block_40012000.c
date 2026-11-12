/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40012000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4001204e.
 * REA evidence: ev_6cfae13976f83ad026d29d185786e0c14f57f31cef9244e7af2876ecc002783b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001204e(uint param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  uVar1 = param_1 & 0x7f;
  if ((char)param_1 < '\0') {
    puVar2 = &DAT_ram_10200220;
  }
  else {
    puVar2 = &DAT_ram_10200240;
  }
  uVar3 = *(uint *)(puVar2 + uVar1 * 4);
  fence();
  if ((-1 < (int)uVar3) && (uVar1 != 0)) {
    uVar3 = uVar3 & 0xbfffffff;
  }
  fence();
  *(uint *)(puVar2 + uVar1 * 4) = uVar3 | 0x200000;
  if (uVar1 == 0) {
    FUN_ram_4001169c();
    return 0;
  }
  return 0;
}


/* NanoCore 1.12, address 0x400120a4.
 * REA evidence: ev_55f9c5097cb43fa5cf6c7e76d708fb5584b73f86104cf628e26ae32a166ce162
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400120a4(uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar2 = param_1 & 0x7f;
  if ((char)param_1 < '\0') {
    puVar4 = (uint *)(&DAT_ram_10200220 + uVar2 * 4);
    uVar3 = *puVar4;
    fence();
    cVar1 = *(char *)(uVar2 * 0x18 + 0x3005f1e2);
  }
  else {
    puVar4 = (uint *)(&DAT_ram_10200240 + uVar2 * 4);
    uVar3 = *puVar4;
    fence();
    cVar1 = *(char *)(uVar2 * 0x18 + 0x3005f25a);
  }
  uVar3 = uVar3 & 0xffdfffff;
  if ((byte)(cVar1 - 2U) < 2) {
    uVar3 = uVar3 | 0x10000000;
  }
  fence();
  *puVar4 = uVar3;
  return 0;
}


/* NanoCore 1.12, address 0x4001211a.
 * REA evidence: ev_e82124988b22dbbea4e9b2e6975d3462d33a519e8401a24f52f2b6f87c2ed163
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4001211a(uint param_1,uint param_2,uint param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  
  param_1 = param_1 & 0x7f;
  if ((param_2 == 0) && (param_3 != 0)) {
    return -1;
  }
  iVar9 = param_1 * 4;
  puVar8 = (uint *)(&DAT_ram_10200220 + iVar9);
  uVar4 = *puVar8;
  fence();
  if ((int)uVar4 < 0) {
    return -2;
  }
  if ((param_1 != 0) && ((uVar4 & 0x7ff) == 0)) {
    return -3;
  }
  if ((param_2 & 3) != 0) {
    return -4;
  }
  iVar5 = param_1 * 0x18;
  *(uint *)(&DAT_ram_3005f1e4 + iVar5) = param_2;
  *(uint *)(&DAT_ram_3005f1f0 + iVar5) = param_3;
  *(undefined4 *)(&DAT_ram_3005f1f4 + iVar5) = 0;
  if ((((param_4 == 0) || (param_1 == 0)) || (param_3 == 0)) ||
     (((param_2 + param_3 | param_2) & 0x1f) == 0)) {
    FUN_ram_40011616(&DAT_ram_3005f1e0 + param_1 * 0x18,0x3005f300);
    if (param_3 != 0) goto LAB_ram_400121ce;
  }
  else {
    if ((*(int *)(iVar5 + 0x3005f1e8) == 0) ||
       (*(uint *)(iVar5 + 0x3005f1ec) != (param_3 + 0x1f & 0xffffffe0))) {
      FUN_ram_40011616(&DAT_ram_3005f1e0 + param_1 * 0x18,0x3005f300);
      iVar5 = FUN_ram_4001163a(&DAT_ram_3005f1e0 + param_1 * 0x18,param_3,0x3005f300);
      if (iVar5 != 0) {
        return iVar5;
      }
    }
    FUN_ram_4000303c(*(undefined4 *)(param_1 * 0x18 + 0x3005f1e8),param_2,param_3);
    param_2 = *(uint *)(param_1 * 0x18 + 0x3005f1e8);
LAB_ram_400121ce:
    FUN_ram_4001154e(param_2,param_3 + 0x1f & 0xffffffe0);
  }
  puVar6 = (uint *)(&DAT_ram_102002a0 + iVar9);
  fence();
  uVar7 = *puVar6 & 0xe0000000;
  if (param_3 == 0) {
    fence();
    *puVar6 = uVar7 | 0x80000;
    fence();
    *puVar8 = uVar4 | 0x84000000;
    return 0;
  }
  if (param_1 == 0) {
    _DAT_ram_3005f1f0 = (uint)_DAT_ram_3005f1e0;
    if (param_3 < _DAT_ram_3005f1e0) {
      _DAT_ram_3005f1f0 = param_3;
    }
    uVar7 = _DAT_ram_3005f1f0 | uVar7 | 0x80000;
    uVar10 = 0;
  }
  else {
    uVar3 = (uint)*(ushort *)(&DAT_ram_3005f1e0 + param_1 * 0x18);
    if (uVar3 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = ((param_3 - 1) + uVar3) / uVar3;
    }
    uVar10 = uVar3 & 0xffff;
    uVar7 = param_3 & 0x7ffff | (uVar3 & 0x3ff) << 0x13 | uVar7;
  }
  cVar1 = *(char *)(param_1 * 0x18 + 0x3005f1e2);
  if (cVar1 == '\x01') {
    fence();
    if ((_DAT_ram_10200208 & 0x100) == 0) {
      uVar2 = 0xefffffff;
      uVar3 = 0x20000000;
    }
    else {
      uVar2 = 0xdfffffff;
      uVar3 = 0x10000000;
    }
    uVar7 = uVar7 & 0x9fffffff;
    uVar4 = uVar3 | uVar4 & uVar2;
    uVar3 = (uVar10 & 3) << 0x1d;
  }
  else {
    if (cVar1 != '\x03') goto LAB_ram_400122de;
    uVar3 = uVar7 & 0x9fffffff;
    uVar7 = 0x20000000;
  }
  uVar7 = uVar3 | uVar7;
LAB_ram_400122de:
  fence();
  *puVar6 = uVar7;
  fence();
  *(uint *)(iVar9 + 0x10200300) = param_2;
  fence();
  *(undefined4 *)(&DAT_ram_10200260 + iVar9) = 0xffffffff;
  fence();
  *puVar8 = uVar4 | 0x84000000;
  return 0;
}


/* NanoCore 1.12, address 0x4001236c.
 * REA evidence: ev_83cf2bf636f45d3b076a6d10ad5fb65529383155f57b2bc23919f01f5d7328c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001236c(void)

{
  FUN_ram_4001211a();
  return;
}


/* NanoCore 1.12, address 0x40012372.
 * REA evidence: ev_c77c5655eaf93cef38cc7f25fa964c83c5ccc15f3dfff3e33c421895650f8618
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40012372(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  uVar4 = 0;
  iVar1 = 0;
  uVar2 = 0;
  do {
    fence();
    uVar3 = 1 << (uVar2 & 0x1f);
    if (((uVar3 & _DAT_ram_3005f2f8) != 0) && (*(int *)(&DAT_ram_10200220 + uVar2 * 4) < 0)) {
      iVar1 = iVar1 + 1;
      uVar4 = uVar4 | uVar3;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 5);
  if (iVar1 < 2) {
    return 0;
  }
  fence();
  fence();
  _DAT_ram_10200204 = _DAT_ram_10200204 | 0x80;
  iVar1 = 100;
  do {
    fence();
    if ((_DAT_ram_10200010 & 0x40) != 0) goto LAB_ram_40012436;
    iVar1 = iVar1 + -1;
    FUN_ram_4004004c(1);
  } while (iVar1 != 0);
  FUN_ram_4003390a(&DAT_ram_400998a8);
  FUN_ram_4003390a(s__s__timeout_USBINTSTS_GOUTNAKEFF_ram_40099c00,
                   s_usbd_npinep_rewrite_ram_40099c68);
  FUN_ram_4003390a(&DAT_ram_400998cc);
LAB_ram_40012436:
  uVar2 = 0;
  do {
    uVar3 = *(uint *)(&DAT_ram_10200220 + uVar2 * 4);
    fence();
    if (((1 << (uVar2 & 0x1f) & _DAT_ram_3005f2f8) != 0) && ((int)uVar3 < 0)) {
      fence();
      *(uint *)(&DAT_ram_10200220 + uVar2 * 4) = uVar3 | 0x48000000;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 5);
  iVar1 = 100;
  do {
    uVar2 = 0;
    while (((1 << (uVar2 & 0x1f) & uVar4) == 0 ||
           (fence(), (*(uint *)(&DAT_ram_10200260 + uVar2 * 4) & 2) != 0))) {
      uVar2 = uVar2 + 1;
      if (uVar2 == 5) goto LAB_ram_400124e0;
    }
    iVar1 = iVar1 + -1;
    FUN_ram_4004004c(1);
  } while (iVar1 != 0);
  FUN_ram_4003390a(&DAT_ram_400998a8);
  FUN_ram_4003390a(s__s__ep_d_timeout_OUTEPCFG_EPDisa_ram_40099c40,
                   s_usbd_npinep_rewrite_ram_40099c68,uVar2);
  FUN_ram_4003390a(&DAT_ram_400998cc);
LAB_ram_400124e0:
  uVar2 = 0;
  do {
    if ((1 << (uVar2 & 0x1f) & uVar4) != 0) {
      fence();
      fence();
      *(uint *)(&DAT_ram_10200260 + uVar2 * 4) = *(uint *)(&DAT_ram_10200260 + uVar2 * 4) | 2;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 5);
  FUN_ram_40011710(0);
  fence();
  fence();
  _DAT_ram_10200204 = _DAT_ram_10200204 | 0x100;
  FUN_ram_400117ec(param_1 * 7 + 0x3005f2d0);
  if ((1 << (param_1 & 0x1f) & uVar4) != 0) {
    FUN_ram_4001236c(param_1,*(undefined4 *)(&DAT_ram_3005f1e4 + param_1 * 0x18),
                     *(undefined4 *)(&DAT_ram_3005f1f0 + param_1 * 0x18));
  }
  iVar1 = 0x3005f2d0;
  puVar5 = &DAT_ram_3005f1c0;
  uVar2 = 0;
  do {
    if (((1 << (uVar2 & 0x1f) & uVar4) != 0) && (param_1 != uVar2)) {
      FUN_ram_400117ec(iVar1);
      FUN_ram_4001236c(uVar2 & 0xff,*(undefined4 *)(puVar5 + 0x24),*(undefined4 *)(puVar5 + 0x30));
    }
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 7;
    puVar5 = puVar5 + 0x18;
  } while (uVar2 != 5);
  return 0;
}


/* NanoCore 1.12, address 0x400125b8.
 * REA evidence: ev_848e07f9ade59a63df9e5335d6bd3e33895abcbb5ccab6323478ddc182cceec9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_400125b8(uint param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  
  param_1 = param_1 & 0x7f;
  if ((param_2 == 0) && (param_3 != 0)) {
    return -1;
  }
  iVar7 = param_1 * 4;
  puVar6 = (uint *)(&DAT_ram_10200240 + iVar7);
  uVar1 = *puVar6;
  fence();
  if ((int)uVar1 < 0) {
    iVar4 = 100000;
    do {
      uVar1 = *puVar6;
      fence();
      if (-1 < (int)uVar1) break;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if ((param_1 != 0) && ((uVar1 & 0x7ff) == 0)) {
    return -3;
  }
  if ((param_2 & 3) != 0) {
    return -4;
  }
  iVar4 = param_1 * 0x18;
  *(uint *)(&DAT_ram_3005f25c + iVar4) = param_2;
  *(uint *)(&DAT_ram_3005f268 + iVar4) = param_3;
  *(undefined4 *)(&DAT_ram_3005f26c + iVar4) = 0;
  if ((((param_4 == 0) || (param_1 == 0)) || (param_3 == 0)) ||
     (((param_2 + param_3 | param_2) & 0x1f) == 0)) {
    FUN_ram_40011616(&DAT_ram_3005f258 + param_1 * 0x18,0x3005f500);
    if (param_3 == 0) goto LAB_ram_400126d4;
  }
  else {
    if ((*(int *)(&DAT_ram_3005f260 + iVar4) == 0) ||
       (*(uint *)(iVar4 + 0x3005f264) != (param_3 + 0x1f & 0xffffffe0))) {
      FUN_ram_40011616(&DAT_ram_3005f258 + param_1 * 0x18,0x3005f500);
      iVar4 = FUN_ram_4001163a(&DAT_ram_3005f258 + param_1 * 0x18,param_3,0x3005f500);
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    param_2 = *(uint *)(&DAT_ram_3005f260 + param_1 * 0x18);
  }
  FUN_ram_40011510(param_2,param_3 + 0x1f & 0xffffffe0);
LAB_ram_400126d4:
  puVar3 = (uint *)(&DAT_ram_102002c0 + iVar7);
  fence();
  uVar2 = *puVar3 & 0x80000000;
  if (param_3 == 0) {
    fence();
    *puVar3 = *(ushort *)(&DAT_ram_3005f258 + param_1 * 0x18) | uVar2 | 0x80000;
  }
  else {
    if (param_1 == 0) {
      _DAT_ram_3005f268 = (uint)_DAT_ram_3005f258;
      if (param_3 < _DAT_ram_3005f258) {
        _DAT_ram_3005f268 = param_3;
      }
      fence();
      _DAT_ram_102002c0 = _DAT_ram_3005f268 | uVar2 | 0x80000;
    }
    else {
      uVar5 = (uint)*(ushort *)(&DAT_ram_3005f258 + param_1 * 0x18);
      fence();
      if (uVar5 == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = ((param_3 - 1) + uVar5) / uVar5;
      }
      *puVar3 = param_3 & 0x7ffff | (uVar5 & 0x3ff) << 0x13 | uVar2;
    }
    fence();
    *(uint *)(&DAT_ram_10200320 + iVar7) = param_2;
    if (*(char *)(param_1 * 0x18 + 0x3005f25a) == '\x01') {
      fence();
      if ((_DAT_ram_10200208 & 0x100) == 0) {
        uVar5 = 0xefffffff;
        uVar2 = 0x20000000;
      }
      else {
        uVar5 = 0xdfffffff;
        uVar2 = 0x10000000;
      }
      uVar1 = uVar1 & uVar5 | uVar2;
    }
    fence();
    *(undefined4 *)(&DAT_ram_10200280 + iVar7) = 0xffffffff;
  }
  fence();
  *puVar6 = uVar1 | 0x84000000;
  return 0;
}


/* NanoCore 1.12, address 0x400127ce.
 * REA evidence: ev_9743ae79f5e35b49ee00c1393805c4fb4d3e93b4a2680b70e5b95709e81ee156
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400127ce(void)

{
  FUN_ram_400125b8();
  return;
}


/* NanoCore 1.12, address 0x400127d4.
 * REA evidence: ev_a000ac21ec32ef5b807d543f253bf8274f28840089723e2b463e0ba25d560861
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400127d4(void)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  
  fence();
  fence();
  uVar1 = _DAT_ram_10200010 & _DAT_ram_10200014;
  if (uVar1 != 0) {
    if ((uVar1 & 0x80000) != 0) {
      fence();
      fence();
      puVar2 = &DAT_ram_3005f1c0;
      puVar11 = (uint *)&DAT_ram_102002c0;
      uVar10 = 0;
      for (uVar9 = (_DAT_ram_10200214 & _DAT_ram_10200218) >> 0x10; uVar9 != 0; uVar9 = uVar9 >> 1)
      {
        if ((uVar9 & 1) != 0) {
          fence();
          fence();
          uVar7 = *(uint *)(&DAT_ram_10200280 + (uVar10 & 0xff) * 4) & _DAT_ram_10200210;
          fence();
          puVar11[-0x10] = uVar7;
          if (uVar10 == 0) {
            FUN_ram_40012f20();
            if (_DAT_ram_3005f260 != 0) {
              FUN_ram_4000303c(_DAT_ram_3005f25c,_DAT_ram_3005f260,_DAT_ram_3005f268);
            }
            if (DAT_ram_3005f1a0 == '\x01') {
              if ((uVar7 & 0x20) != 0) {
                FUN_ram_4001169c();
              }
              if ((uVar7 & 8) != 0) {
                if (_DAT_ram_3005f1c6 == 0) {
                  DAT_ram_3005f1a0 = '\r';
                }
                else if (DAT_ram_3005f1c0 < '\0') {
                  DAT_ram_3005f1a0 = '\x02';
                }
                else {
                  DAT_ram_3005f1a0 = '\f';
                }
                FUN_ram_4000feca(&DAT_ram_3005f1c0);
              }
            }
            else if ((uVar7 & 1) != 0) {
              if (_DAT_ram_3005f268 != 0) {
                _DAT_ram_3005f26c = _DAT_ram_3005f268;
                _DAT_ram_3005f268 = 0;
                uVar7 = 0;
                goto LAB_ram_40012c7a;
              }
              FUN_ram_4001169c();
            }
          }
          else {
            FUN_ram_40012f20();
            if (*(int *)(puVar2 + 0xa0) != 0) {
              FUN_ram_4000303c(*(undefined4 *)(puVar2 + 0x9c),*(int *)(puVar2 + 0xa0),
                               *(undefined4 *)(puVar2 + 0xa8));
            }
            uVar8 = *puVar11;
            fence();
            iVar6 = *(int *)(puVar2 + 0xa8);
            uVar7 = uVar10 & 0xff;
            *(undefined4 *)(puVar2 + 0xa8) = 0;
            *(uint *)(puVar2 + 0xac) = iVar6 - (uVar8 & 0x7ffff);
LAB_ram_40012c7a:
            FUN_ram_4000f668(uVar7);
          }
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 1;
        puVar2 = puVar2 + 0x18;
      }
    }
    if ((uVar1 & 0x40000) != 0) {
      fence();
      fence();
      puVar11 = (uint *)&DAT_ram_102002a0;
      uVar10 = 0;
      puVar2 = &DAT_ram_3005f1c0;
      for (uVar9 = _DAT_ram_10200214 & _DAT_ram_10200218 & 0xffff; uVar9 != 0; uVar9 = uVar9 >> 1) {
        if ((uVar9 & 1) != 0) {
          fence();
          fence();
          uVar7 = *(uint *)(&DAT_ram_10200260 + (uVar10 & 0xff) * 4) & _DAT_ram_1020020c;
          fence();
          puVar11[-0x10] = uVar7;
          if (((uVar7 & 9) == 8) && ((1 << (uVar10 & 0x1f) & _DAT_ram_3005f2f8) != 0)) {
            fence();
            fence();
            _DAT_ram_10200204 = _DAT_ram_10200204 | 0x80;
            iVar6 = 100;
            do {
              fence();
              if ((_DAT_ram_10200010 & 0x40) != 0) break;
              iVar6 = iVar6 + -1;
              FUN_ram_4004004c(1);
            } while (iVar6 != 0);
            uVar12 = 0;
            uVar13 = 0;
            uVar8 = 0;
            do {
              uVar4 = *(uint *)(&DAT_ram_10200220 + uVar8 * 4);
              fence();
              uVar3 = 1 << (uVar8 & 0x1f);
              if (((_DAT_ram_3005f2f8 & uVar3) != 0) && ((int)uVar4 < 0)) {
                uVar13 = uVar13 | uVar3;
                if ((uVar4 & 0x10000) != 0) {
                  uVar12 = uVar12 | uVar3;
                }
                fence();
                *(uint *)(&DAT_ram_10200220 + uVar8 * 4) = uVar4 | 0x48000000;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 != 5);
            iVar6 = 100;
            do {
              uVar8 = 0;
              while (((1 << (uVar8 & 0x1f) & uVar13) == 0 ||
                     (fence(), (*(uint *)(&DAT_ram_10200260 + uVar8 * 4) & 2) != 0))) {
                uVar8 = uVar8 + 1;
                if (uVar8 == 5) goto LAB_ram_40012d98;
              }
              FUN_ram_4004004c(1);
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
LAB_ram_40012d98:
            uVar8 = 0;
            do {
              if ((1 << (uVar8 & 0x1f) & uVar13) != 0) {
                fence();
                *(undefined4 *)(&DAT_ram_10200260 + uVar8 * 4) = 2;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 != 5);
            FUN_ram_40011710(0);
            fence();
            fence();
            _DAT_ram_10200204 = _DAT_ram_10200204 | 0x100;
            uVar8 = 0;
            puVar5 = &DAT_ram_3005f1c0;
            do {
              uVar3 = 1 << (uVar8 & 0x1f);
              if ((uVar3 & uVar13) != 0) {
                if (uVar8 == 0) {
                  if (uVar10 == 0) goto LAB_ram_40012dec;
                }
                else {
                  fence();
                  uVar4 = 0x20000000;
                  if ((uVar3 & uVar12) == 0) {
                    uVar4 = 0x10000000;
                  }
                  fence();
                  *(uint *)(&DAT_ram_10200220 + uVar8 * 4) =
                       *(uint *)(&DAT_ram_10200220 + uVar8 * 4) | uVar4;
                }
                FUN_ram_4001236c((uVar8 | 0xffffff80) & 0xff,*(undefined4 *)(puVar5 + 0x24),
                                 *(undefined4 *)(puVar5 + 0x30));
              }
LAB_ram_40012dec:
              uVar8 = uVar8 + 1;
              puVar5 = puVar5 + 0x18;
            } while (uVar8 != 5);
            if (uVar10 == 0) {
              FUN_ram_4001169c();
            }
          }
          else if ((uVar7 & 0x20) != 0) {
            FUN_ram_4004004c(100);
            FUN_ram_40012372(uVar10 & 0xff);
          }
          if ((uVar7 & 1) != 0) {
            if (uVar10 == 0) {
              if ((_DAT_ram_3005f1c6 == 0) || (-1 < DAT_ram_3005f1c0)) {
                FUN_ram_4001169c();
                goto LAB_ram_40012e16;
              }
              uVar7 = 0x80;
              _DAT_ram_3005f1f4 = _DAT_ram_3005f1f0 - (_DAT_ram_102002a0 & 0x7ffff);
              _DAT_ram_3005f1f0 = 0;
            }
            else {
              uVar7 = *puVar11;
              fence();
              iVar6 = *(int *)(puVar2 + 0x30);
              *(undefined4 *)(puVar2 + 0x30) = 0;
              *(uint *)(puVar2 + 0x34) = iVar6 - (uVar7 & 0x7ffff);
              uVar7 = uVar10 & 0xff | 0x80;
            }
            FUN_ram_4000f648(uVar7);
          }
        }
LAB_ram_40012e16:
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 1;
        puVar2 = puVar2 + 0x18;
      }
    }
    if ((uVar1 & 0x1000) != 0) {
      fence();
      _DAT_ram_10200010 = 0x1000;
      fence();
      fence();
      _DAT_ram_10200204 = _DAT_ram_10200204 & 0xfffffffe;
      FUN_ram_40011d68();
    }
    if ((uVar1 & 0x2000) != 0) {
      fence();
      _DAT_ram_10200010 = 0x2000;
      fence();
      iVar6 = 9;
      if (((((((_DAT_ram_10200208 & 6) == 2) &&
             (iVar6 = 0xf, 799999 < _DAT_ram_3005f720 - 14200000U)) &&
            (iVar6 = 0xe, 999999 < _DAT_ram_3005f720 - 15000000U)) &&
           ((iVar6 = 0xd, 1199999 < _DAT_ram_3005f720 - 16000000U &&
            (iVar6 = 0xc, 1299999 < _DAT_ram_3005f720 + 0xfef98c80U)))) &&
          ((iVar6 = 0xb, 1499999 < _DAT_ram_3005f720 + 0xfee5b660U &&
           ((iVar6 = 10, 1799999 < _DAT_ram_3005f720 + 0xfeced300U &&
            (iVar6 = 9, 2199999 < _DAT_ram_3005f720 + 0xfeb35bc0U)))))) &&
         ((iVar6 = 8, 3699999 < _DAT_ram_3005f720 + 0xfe91ca00U &&
          (iVar6 = 7, 4299999 < _DAT_ram_3005f720 + 0xfe5954e0U)))) {
        iVar6 = 6;
      }
      fence();
      fence();
      _DAT_ram_10200008 = iVar6 << 10 | _DAT_ram_10200008 & 0xffffc3ff | 7;
      fence();
      fence();
      _DAT_ram_10200204 = _DAT_ram_10200204 | 0x100;
    }
    if ((uVar1 & 0x200000) != 0) {
      fence();
      uVar10 = _DAT_ram_10200218 >> 0x10;
      puVar2 = &DAT_ram_3005f1c0;
      uVar9 = 1;
      do {
        if (((~uVar10 >> (uVar9 & 0x1f) & 1) == 0) && (puVar2[0xb2] == '\x01')) {
          uVar7 = *(uint *)(&DAT_ram_10200240 + uVar9 * 4);
          fence();
          if ((uVar7 & 0x8000) != 0) {
            fence();
            if ((_DAT_ram_10200208 & 0x100) == 0) {
              uVar7 = uVar7 & 0xefffffff | 0x20000000;
            }
            else {
              uVar7 = uVar7 & 0xdfffffff | 0x10000000;
            }
            fence();
            *(uint *)(&DAT_ram_10200240 + uVar9 * 4) = uVar7;
          }
        }
        uVar9 = uVar9 + 1;
        puVar2 = puVar2 + 0x18;
      } while (uVar9 != 5);
      fence();
      _DAT_ram_10200010 = 0x200000;
    }
    if ((uVar1 & 0x100000) != 0) {
      fence();
      uVar10 = _DAT_ram_10200218 & 0xffff;
      puVar2 = &DAT_ram_3005f1c0;
      uVar9 = 1;
      do {
        if (((~uVar10 >> (uVar9 & 0x1f) & 1) == 0) && (puVar2[0x3a] == '\x01')) {
          uVar7 = *(uint *)(&DAT_ram_10200220 + uVar9 * 4);
          fence();
          if ((uVar7 & 0x8000) != 0) {
            fence();
            if ((_DAT_ram_10200208 & 0x100) == 0) {
              uVar7 = uVar7 & 0xefffffff | 0x20000000;
            }
            else {
              uVar7 = uVar7 & 0xdfffffff | 0x10000000;
            }
            fence();
            *(uint *)(&DAT_ram_10200220 + uVar9 * 4) = uVar7;
          }
        }
        uVar9 = uVar9 + 1;
        puVar2 = puVar2 + 0x18;
      } while (uVar9 != 5);
      fence();
      _DAT_ram_10200010 = 0x100000;
    }
    if ((uVar1 & 8) != 0) {
      fence();
      _DAT_ram_10200010 = 8;
    }
    if ((uVar1 & 0x800) != 0) {
      fence();
      _DAT_ram_10200010 = 0x800;
      FUN_ram_4000f764();
    }
    if ((int)uVar1 < 0) {
      fence();
      _DAT_ram_10200010 = 0x80000000;
      FUN_ram_4000f756();
      return;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40012f10.
 * REA evidence: ev_fdb9aee46a8acca701bd51d4e1a484d1c83bd092452a06963c186539e3f7a0a9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40012f10(void)

{
  FUN_ram_400127d4();
  return 1;
}


/* NanoCore 1.12, address 0x40012f20.
 * REA evidence: ev_b57ae334a6d18f0f9009685f7cae823e125d1c705f327c907046d5968481442e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40012f20(void)

{
  undefined4 in_t0;
  
  _DAT_ram_3005f700 = in_t0;
  fence();
  custom0();
  custom0();
  fence();
  custom0();
  return;
}


/* NanoCore 1.12, address 0x40012f42.
 * REA evidence: ev_119922cfaedf55de82a5cab58f67fc2bc12f33f044d90d559036fea2f541e77b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40012f42(void)

{
  uint uVar1;
  
  uVar1 = (_DAT_ram_20800004 & 0x1ffffff) >> 0x15;
  if (7 < uVar1 - 1) {
    uVar1 = 2;
  }
  FUN_ram_4003e15a(0);
  FUN_ram_40038bfe(0x14);
  FUN_ram_40038bfe(0x12);
  FUN_ram_4004004c(300);
  FUN_ram_40039bb8(4);
  FUN_ram_40039bb8(2);
  FUN_ram_4004004c(300);
  FUN_ram_40039bf8(4);
  FUN_ram_40039bf8(2);
  FUN_ram_4004004c(300);
  _DAT_ram_3005f720 = FUN_ram_40038d2c(0x12);
  FUN_ram_4003fc98(0x22,FUN_ram_40012f10,0);
  FUN_ram_4003fc50(0x22);
  uVar1 = (1 << uVar1) - 1;
  if (3 < uVar1) {
    uVar1 = 3;
  }
  DAT_ram_2080108b =
       (byte)(uVar1 << (8 - ((_DAT_ram_20800004 & 0x1ffffff) >> 0x15) & 0x1f)) |
       DAT_ram_2080108b & 0x1f;
  FUN_ram_4003fc50(0x22);
  return;
}


