/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40011000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400110e4.
 * REA evidence: ev_d2f1f043a28b5085616ad526ec30113f432f713e8a0d49a5fc3cadf655800dc5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400110e4(void)

{
  undefined4 uVar1;
  int iVar2;
  
  memset(&DAT_ram_3005cec0,0,0x140);
  FUN_ram_40011fe6();
  fence();
  fence();
  _DAT_ram_10200204 = _DAT_ram_10200204 | 2;
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 & 0xfffffdff;
  fence();
  _DAT_ram_10200008 = 0x1407;
  iVar2 = 0x30d41;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) goto LAB_ram_40011184;
    fence();
  } while ((_DAT_ram_10200000 & 4) == 0);
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 | 1;
  iVar2 = 0x30d41;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    fence();
  }
LAB_ram_40011184:
  FUN_ram_400107d8();
  fence();
  _DAT_ram_10200028 = 0;
  fence();
  _DAT_ram_1020002c = 0;
  fence();
  fence();
  _DAT_ram_10200200 = _DAT_ram_10200200 | 1;
  FUN_ram_4001095c(0x10);
  uVar1 = FUN_ram_4001082e();
  fence();
  _DAT_ram_1020020c = 0;
  fence();
  _DAT_ram_10200210 = 0;
  fence();
  _DAT_ram_10200218 = 0;
  fence();
  fence();
  _DAT_ram_10200010 = 0xbfffffff;
  fence();
  _DAT_ram_10200014 = 0x803c3800;
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 | 0x3800;
  fence();
  _DAT_ram_10200018 = 0x119;
  fence();
  _DAT_ram_10200020 = 0x1000119;
  fence();
  _DAT_ram_10200028 = 0x1000219;
  fence();
  _DAT_ram_1020002c = 0xdd0319;
  FUN_ram_40010fb4();
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 | 0x200;
  fence();
  fence();
  _DAT_ram_10200204 = _DAT_ram_10200204 & 0xfffffffd;
  return uVar1;
}


/* NanoCore 1.10, address 0x40011298.
 * REA evidence: ev_3737c429b3ab4c62a0780b65fc0a3ea1df602a3f800d9e1168c0c9e4708e9245
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40011298(uint param_1)

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
    FUN_ram_400108e8();
    return 0;
  }
  return 0;
}


/* NanoCore 1.10, address 0x400112ee.
 * REA evidence: ev_e12e08c7f7a25135b42e8210e49530fac4866c94739243e1cdad7a26d61c1402
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400112ee(uint param_1)

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
    cVar1 = *(char *)(uVar2 * 0x18 + 0x3005cee2);
  }
  else {
    puVar4 = (uint *)(&DAT_ram_10200240 + uVar2 * 4);
    uVar3 = *puVar4;
    fence();
    cVar1 = *(char *)(uVar2 * 0x18 + 0x3005cf5a);
  }
  uVar3 = uVar3 & 0xffdfffff;
  if ((byte)(cVar1 - 2U) < 2) {
    uVar3 = uVar3 | 0x10000000;
  }
  fence();
  *puVar4 = uVar3;
  return 0;
}


/* NanoCore 1.10, address 0x40011364.
 * REA evidence: ev_cbaf98e782439da53b6b3a9f04069b460ea28697f0d33f485dff23057e4a14d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40011364(uint param_1,uint param_2,uint param_3,int param_4)

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
  *(uint *)(&DAT_ram_3005cee4 + iVar5) = param_2;
  *(uint *)(&DAT_ram_3005cef0 + iVar5) = param_3;
  *(undefined4 *)(&DAT_ram_3005cef4 + iVar5) = 0;
  if ((((param_4 == 0) || (param_1 == 0)) || (param_3 == 0)) ||
     (((param_2 + param_3 | param_2) & 0x1f) == 0)) {
    FUN_ram_40010862(&DAT_ram_3005cee0 + param_1 * 0x18,0x3005d000);
    if (param_3 != 0) goto LAB_ram_40011418;
  }
  else {
    if ((*(int *)(iVar5 + 0x3005cee8) == 0) ||
       (*(uint *)(iVar5 + 0x3005ceec) != (param_3 + 0x1f & 0xffffffe0))) {
      FUN_ram_40010862(&DAT_ram_3005cee0 + param_1 * 0x18,0x3005d000);
      iVar5 = FUN_ram_40010886(&DAT_ram_3005cee0 + param_1 * 0x18,param_3,0x3005d000);
      if (iVar5 != 0) {
        return iVar5;
      }
    }
    FUN_ram_4000305c(*(undefined4 *)(param_1 * 0x18 + 0x3005cee8),param_2,param_3);
    param_2 = *(uint *)(param_1 * 0x18 + 0x3005cee8);
LAB_ram_40011418:
    FUN_ram_4001079a(param_2,param_3 + 0x1f & 0xffffffe0);
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
    _DAT_ram_3005cef0 = (uint)_DAT_ram_3005cee0;
    if (param_3 < _DAT_ram_3005cee0) {
      _DAT_ram_3005cef0 = param_3;
    }
    uVar7 = _DAT_ram_3005cef0 | uVar7 | 0x80000;
    uVar10 = 0;
  }
  else {
    uVar3 = (uint)*(ushort *)(&DAT_ram_3005cee0 + param_1 * 0x18);
    if (uVar3 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = ((param_3 - 1) + uVar3) / uVar3;
    }
    uVar10 = uVar3 & 0xffff;
    uVar7 = param_3 & 0x7ffff | (uVar3 & 0x3ff) << 0x13 | uVar7;
  }
  cVar1 = *(char *)(param_1 * 0x18 + 0x3005cee2);
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
    if (cVar1 != '\x03') goto LAB_ram_40011528;
    uVar3 = uVar7 & 0x9fffffff;
    uVar7 = 0x20000000;
  }
  uVar7 = uVar3 | uVar7;
LAB_ram_40011528:
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


/* NanoCore 1.10, address 0x400115b6.
 * REA evidence: ev_36102bf2694e592eaa703641a4157c09b6a2be4897909d68add2e0a2e60b4f81
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400115b6(void)

{
  FUN_ram_40011364();
  return;
}


/* NanoCore 1.10, address 0x400115bc.
 * REA evidence: ev_d800693077d7becf01a8208c1afff461ec34718dda43b17725d89adbe960cb28
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400115bc(uint param_1)

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
    if (((uVar3 & _DAT_ram_3005cff8) != 0) && (*(int *)(&DAT_ram_10200220 + uVar2 * 4) < 0)) {
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
    if ((_DAT_ram_10200010 & 0x40) != 0) goto LAB_ram_40011680;
    iVar1 = iVar1 + -1;
    FUN_ram_4003f052(1);
  } while (iVar1 != 0);
  FUN_ram_40031b48(&DAT_ram_40092950);
  FUN_ram_40031b48(s__s__timeout_USBINTSTS_GOUTNAKEFF_ram_40092ca4,
                   s_usbd_npinep_rewrite_ram_40092d0c);
  FUN_ram_40031b48(&DAT_ram_40092978);
LAB_ram_40011680:
  uVar2 = 0;
  do {
    uVar3 = *(uint *)(&DAT_ram_10200220 + uVar2 * 4);
    fence();
    if (((1 << (uVar2 & 0x1f) & _DAT_ram_3005cff8) != 0) && ((int)uVar3 < 0)) {
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
      if (uVar2 == 5) goto LAB_ram_4001172a;
    }
    iVar1 = iVar1 + -1;
    FUN_ram_4003f052(1);
  } while (iVar1 != 0);
  FUN_ram_40031b48(&DAT_ram_40092950);
  FUN_ram_40031b48(s__s__ep_d_timeout_OUTEPCFG_EPDisa_ram_40092ce4,
                   s_usbd_npinep_rewrite_ram_40092d0c,uVar2);
  FUN_ram_40031b48(&DAT_ram_40092978);
LAB_ram_4001172a:
  uVar2 = 0;
  do {
    if ((1 << (uVar2 & 0x1f) & uVar4) != 0) {
      fence();
      fence();
      *(uint *)(&DAT_ram_10200260 + uVar2 * 4) = *(uint *)(&DAT_ram_10200260 + uVar2 * 4) | 2;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 5);
  FUN_ram_4001095c(0);
  fence();
  fence();
  _DAT_ram_10200204 = _DAT_ram_10200204 | 0x100;
  FUN_ram_40010a38(param_1 * 7 + 0x3005cfd0);
  if ((1 << (param_1 & 0x1f) & uVar4) != 0) {
    FUN_ram_400115b6(param_1,*(undefined4 *)(&DAT_ram_3005cee4 + param_1 * 0x18),
                     *(undefined4 *)(&DAT_ram_3005cef0 + param_1 * 0x18));
  }
  iVar1 = 0x3005cfd0;
  puVar5 = &DAT_ram_3005cec0;
  uVar2 = 0;
  do {
    if (((1 << (uVar2 & 0x1f) & uVar4) != 0) && (param_1 != uVar2)) {
      FUN_ram_40010a38(iVar1);
      FUN_ram_400115b6(uVar2 & 0xff,*(undefined4 *)(puVar5 + 0x24),*(undefined4 *)(puVar5 + 0x30));
    }
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 7;
    puVar5 = puVar5 + 0x18;
  } while (uVar2 != 5);
  return 0;
}


/* NanoCore 1.10, address 0x40011802.
 * REA evidence: ev_815cccab637fe7be4ab9dda71200473c67cbac2daec95531e315b2d6b9f219a1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40011802(uint param_1,uint param_2,uint param_3,int param_4)

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
  *(uint *)(&DAT_ram_3005cf5c + iVar4) = param_2;
  *(uint *)(&DAT_ram_3005cf68 + iVar4) = param_3;
  *(undefined4 *)(&DAT_ram_3005cf6c + iVar4) = 0;
  if ((((param_4 == 0) || (param_1 == 0)) || (param_3 == 0)) ||
     (((param_2 + param_3 | param_2) & 0x1f) == 0)) {
    FUN_ram_40010862(&DAT_ram_3005cf58 + param_1 * 0x18,0x3005d200);
    if (param_3 == 0) goto LAB_ram_4001191e;
  }
  else {
    if ((*(int *)(&DAT_ram_3005cf60 + iVar4) == 0) ||
       (*(uint *)(iVar4 + 0x3005cf64) != (param_3 + 0x1f & 0xffffffe0))) {
      FUN_ram_40010862(&DAT_ram_3005cf58 + param_1 * 0x18,0x3005d200);
      iVar4 = FUN_ram_40010886(&DAT_ram_3005cf58 + param_1 * 0x18,param_3,0x3005d200);
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    param_2 = *(uint *)(&DAT_ram_3005cf60 + param_1 * 0x18);
  }
  FUN_ram_4001075c(param_2,param_3 + 0x1f & 0xffffffe0);
LAB_ram_4001191e:
  puVar3 = (uint *)(&DAT_ram_102002c0 + iVar7);
  fence();
  uVar2 = *puVar3 & 0x80000000;
  if (param_3 == 0) {
    fence();
    *puVar3 = *(ushort *)(&DAT_ram_3005cf58 + param_1 * 0x18) | uVar2 | 0x80000;
  }
  else {
    if (param_1 == 0) {
      _DAT_ram_3005cf68 = (uint)_DAT_ram_3005cf58;
      if (param_3 < _DAT_ram_3005cf58) {
        _DAT_ram_3005cf68 = param_3;
      }
      fence();
      _DAT_ram_102002c0 = _DAT_ram_3005cf68 | uVar2 | 0x80000;
    }
    else {
      uVar5 = (uint)*(ushort *)(&DAT_ram_3005cf58 + param_1 * 0x18);
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
    if (*(char *)(param_1 * 0x18 + 0x3005cf5a) == '\x01') {
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


/* NanoCore 1.10, address 0x40011a18.
 * REA evidence: ev_2daea8b7e546b2c80f61f0b03c5aad835e14ea9212c9c284c6a2de95420cce2e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40011a18(void)

{
  FUN_ram_40011802();
  return;
}


/* NanoCore 1.10, address 0x40011a1e.
 * REA evidence: ev_ddeae50a4070225e9ba500767466fca5d34be9668baa846a77488dd57a75ac0f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40011a1e(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  fence();
  fence();
  uVar1 = _DAT_ram_10200010 & _DAT_ram_10200014;
  if (uVar1 != 0) {
    if ((uVar1 & 0x80000) != 0) {
      fence();
      fence();
      puVar8 = &DAT_ram_3005cec0;
      puVar6 = (uint *)&DAT_ram_102002c0;
      uVar7 = 0;
      for (uVar5 = (_DAT_ram_10200214 & _DAT_ram_10200218) >> 0x10; uVar5 != 0; uVar5 = uVar5 >> 1)
      {
        if ((uVar5 & 1) != 0) {
          fence();
          fence();
          uVar4 = *(uint *)(&DAT_ram_10200280 + (uVar7 & 0xff) * 4) & _DAT_ram_10200210;
          fence();
          puVar6[-0x10] = uVar4;
          if (uVar7 == 0) {
            FUN_ram_40011fc4();
            if (_DAT_ram_3005cf60 != 0) {
              FUN_ram_4000305c(_DAT_ram_3005cf5c,_DAT_ram_3005cf60,_DAT_ram_3005cf68);
            }
            if (DAT_ram_3005ceb8 == '\x01') {
              if ((uVar4 & 0x20) != 0) {
                FUN_ram_400108e8();
              }
              if ((uVar4 & 8) != 0) {
                if (_DAT_ram_3005cec6 == 0) {
                  DAT_ram_3005ceb8 = '\r';
                }
                else if (DAT_ram_3005cec0 < '\0') {
                  DAT_ram_3005ceb8 = '\x02';
                }
                else {
                  DAT_ram_3005ceb8 = '\f';
                }
                FUN_ram_4000f1e6(&DAT_ram_3005cec0);
              }
            }
            else if ((uVar4 & 1) != 0) {
              if (_DAT_ram_3005cf68 != 0) {
                _DAT_ram_3005cf6c = _DAT_ram_3005cf68;
                _DAT_ram_3005cf68 = 0;
                uVar4 = 0;
                goto LAB_ram_40011ec0;
              }
              FUN_ram_400108e8();
            }
          }
          else {
            FUN_ram_40011fc4();
            if (*(int *)(puVar8 + 0xa0) != 0) {
              FUN_ram_4000305c(*(undefined4 *)(puVar8 + 0x9c),*(int *)(puVar8 + 0xa0),
                               *(undefined4 *)(puVar8 + 0xa8));
            }
            uVar2 = *puVar6;
            fence();
            iVar3 = *(int *)(puVar8 + 0xa8);
            uVar4 = uVar7 & 0xff;
            *(undefined4 *)(puVar8 + 0xa8) = 0;
            *(uint *)(puVar8 + 0xac) = iVar3 - (uVar2 & 0x7ffff);
LAB_ram_40011ec0:
            FUN_ram_4000e96c(uVar4);
          }
        }
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 0x18;
      }
    }
    if ((uVar1 & 0x40000) != 0) {
      fence();
      fence();
      puVar8 = &DAT_ram_3005cec0;
      puVar6 = (uint *)&DAT_ram_102002a0;
      uVar7 = 0;
      for (uVar5 = _DAT_ram_10200214 & _DAT_ram_10200218 & 0xffff; uVar5 != 0; uVar5 = uVar5 >> 1) {
        if ((uVar5 & 1) != 0) {
          fence();
          fence();
          uVar4 = *(uint *)(&DAT_ram_10200260 + (uVar7 & 0xff) * 4) & _DAT_ram_1020020c;
          fence();
          puVar6[-0x10] = uVar4;
          if ((uVar4 & 0x20) != 0) {
            FUN_ram_4003f052(100);
            FUN_ram_400115bc(uVar7 & 0xff);
          }
          if ((uVar4 & 1) != 0) {
            if (uVar7 == 0) {
              if ((_DAT_ram_3005cec6 == 0) || (-1 < DAT_ram_3005cec0)) {
                FUN_ram_400108e8();
                goto LAB_ram_40011f54;
              }
              uVar4 = 0x80;
              _DAT_ram_3005cef4 = _DAT_ram_3005cef0 - (_DAT_ram_102002a0 & 0x7ffff);
              _DAT_ram_3005cef0 = 0;
            }
            else {
              uVar2 = *puVar6;
              fence();
              iVar3 = *(int *)(puVar8 + 0x30);
              uVar4 = uVar7 & 0xff | 0x80;
              *(undefined4 *)(puVar8 + 0x30) = 0;
              *(uint *)(puVar8 + 0x34) = iVar3 - (uVar2 & 0x7ffff);
            }
            FUN_ram_4000e94c(uVar4);
          }
        }
LAB_ram_40011f54:
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 0x18;
      }
    }
    if ((uVar1 & 0x1000) != 0) {
      fence();
      _DAT_ram_10200010 = 0x1000;
      fence();
      fence();
      _DAT_ram_10200204 = _DAT_ram_10200204 & 0xfffffffe;
      FUN_ram_40010fb4();
    }
    if ((uVar1 & 0x2000) != 0) {
      fence();
      _DAT_ram_10200010 = 0x2000;
      fence();
      iVar3 = 9;
      if (((((((_DAT_ram_10200208 & 6) == 2) &&
             (iVar3 = 0xf, 799999 < _DAT_ram_3005d420 - 14200000U)) &&
            (iVar3 = 0xe, 999999 < _DAT_ram_3005d420 - 15000000U)) &&
           ((iVar3 = 0xd, 1199999 < _DAT_ram_3005d420 - 16000000U &&
            (iVar3 = 0xc, 1299999 < _DAT_ram_3005d420 + 0xfef98c80U)))) &&
          ((iVar3 = 0xb, 1499999 < _DAT_ram_3005d420 + 0xfee5b660U &&
           ((iVar3 = 10, 1799999 < _DAT_ram_3005d420 + 0xfeced300U &&
            (iVar3 = 9, 2199999 < _DAT_ram_3005d420 + 0xfeb35bc0U)))))) &&
         ((iVar3 = 8, 3699999 < _DAT_ram_3005d420 + 0xfe91ca00U &&
          (iVar3 = 7, 4299999 < _DAT_ram_3005d420 + 0xfe5954e0U)))) {
        iVar3 = 6;
      }
      fence();
      fence();
      _DAT_ram_10200008 = iVar3 << 10 | _DAT_ram_10200008 & 0xffffc3ff | 7;
      fence();
      fence();
      _DAT_ram_10200204 = _DAT_ram_10200204 | 0x100;
    }
    if ((uVar1 & 0x200000) != 0) {
      fence();
      uVar7 = _DAT_ram_10200218 >> 0x10;
      puVar8 = &DAT_ram_3005cec0;
      uVar5 = 1;
      do {
        if (((~uVar7 >> (uVar5 & 0x1f) & 1) == 0) && (puVar8[0xb2] == '\x01')) {
          uVar4 = *(uint *)(&DAT_ram_10200240 + uVar5 * 4);
          fence();
          if ((uVar4 & 0x8000) != 0) {
            fence();
            if ((_DAT_ram_10200208 & 0x100) == 0) {
              uVar4 = uVar4 & 0xefffffff | 0x20000000;
            }
            else {
              uVar4 = uVar4 & 0xdfffffff | 0x10000000;
            }
            fence();
            *(uint *)(&DAT_ram_10200240 + uVar5 * 4) = uVar4;
          }
        }
        uVar5 = uVar5 + 1;
        puVar8 = puVar8 + 0x18;
      } while (uVar5 != 5);
      fence();
      _DAT_ram_10200010 = 0x200000;
    }
    if ((uVar1 & 0x100000) != 0) {
      fence();
      uVar7 = _DAT_ram_10200218 & 0xffff;
      puVar8 = &DAT_ram_3005cec0;
      uVar5 = 1;
      do {
        if (((~uVar7 >> (uVar5 & 0x1f) & 1) == 0) && (puVar8[0x3a] == '\x01')) {
          uVar4 = *(uint *)(&DAT_ram_10200220 + uVar5 * 4);
          fence();
          if ((uVar4 & 0x8000) != 0) {
            fence();
            if ((_DAT_ram_10200208 & 0x100) == 0) {
              uVar4 = uVar4 & 0xefffffff | 0x20000000;
            }
            else {
              uVar4 = uVar4 & 0xdfffffff | 0x10000000;
            }
            fence();
            *(uint *)(&DAT_ram_10200220 + uVar5 * 4) = uVar4;
          }
        }
        uVar5 = uVar5 + 1;
        puVar8 = puVar8 + 0x18;
      } while (uVar5 != 5);
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
      FUN_ram_4000ea5a();
    }
    if ((int)uVar1 < 0) {
      fence();
      _DAT_ram_10200010 = 0x80000000;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40011fb4.
 * REA evidence: ev_19d511a49223b601db7e5566759e3c65ffd10d7c4586b834c192a2d0f28fcb27
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40011fb4(void)

{
  FUN_ram_40011a1e();
  return 1;
}


/* NanoCore 1.10, address 0x40011fc4.
 * REA evidence: ev_1f434a8f77b8623f062f7fb7e39ff8abd695f8c56455d158787ef29093ac1ab5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40011fc4(void)

{
  undefined4 in_t0;
  
  _DAT_ram_3005d400 = in_t0;
  fence();
  custom0();
  custom0();
  fence();
  custom0();
  return;
}


/* NanoCore 1.10, address 0x40011fe6.
 * REA evidence: ev_037568f216cf01cde9d7ef20b48e4f4caf796c08cf8a58d93ce5b94cbd2deef2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40011fe6(void)

{
  uint uVar1;
  
  uVar1 = (_DAT_ram_20800004 & 0x1ffffff) >> 0x15;
  if (7 < uVar1 - 1) {
    uVar1 = 2;
  }
  FUN_ram_4003d174(0);
  FUN_ram_400369fe(0x14);
  FUN_ram_400369fe(0x12);
  FUN_ram_4003f052(300);
  FUN_ram_400379b8(4);
  FUN_ram_400379b8(2);
  FUN_ram_4003f052(300);
  FUN_ram_400379f8(4);
  FUN_ram_400379f8(2);
  FUN_ram_4003f052(300);
  _DAT_ram_3005d420 = FUN_ram_40036b2c(0x12);
  FUN_ram_4003ec9e(0x22,FUN_ram_40011fb4,0);
  FUN_ram_4003ec56(0x22);
  uVar1 = (1 << uVar1) - 1;
  if (3 < uVar1) {
    uVar1 = 3;
  }
  DAT_ram_2080108b =
       (byte)(uVar1 << (8 - ((_DAT_ram_20800004 & 0x1ffffff) >> 0x15) & 0x1f)) |
       DAT_ram_2080108b & 0x1f;
  FUN_ram_4003ec56(0x22);
  return;
}


