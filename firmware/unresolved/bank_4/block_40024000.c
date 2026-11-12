/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40024000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4002401c.
 * REA evidence: ev_53f649e48d1cbaf3b71934b6d047ec3b631a5036c2356021a8562dc81a0e723a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002401c(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)_DAT_ram_3006ad02;
  if (0xff < uVar3) {
    if (param_1 == 0xf8) {
      return 0;
    }
    uVar1 = uVar3 - 1 & 0xffff;
    do {
      uVar2 = uVar1 + 1 & 0xffff;
      if ((&DAT_ram_3006a801)[uVar1 * 5] == -8) {
        if (uVar2 < uVar3) {
          FUN_ram_40003110(&DAT_ram_3006a801 + uVar1 * 5,&DAT_ram_3006a801 + uVar2 * 5,
                           (uVar3 - uVar1) * 5 + -5);
        }
        _DAT_ram_3006ad02 = _DAT_ram_3006ad02 - 1;
        return 1;
      }
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0xffffffff);
    FUN_ram_40003110(&DAT_ram_3006a801,0x3006a806,0x4fb);
    _DAT_ram_3006ad02 = 0xff;
  }
  return 1;
}


/* NanoCore 1.10, address 0x400240c4.
 * REA evidence: ev_6ac71a4f68317e65318f8300731958b93760dde8a002f1f1873ecdcbdb257dff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_400240c4(void)

{
  bool bVar1;
  
  bVar1 = false;
  if ((DAT_ram_3006a7c5 != '\0') && (bVar1 = true, DAT_ram_3006a7c3 != '\0')) {
    bVar1 = (_DAT_ram_3006a7c0 & 0xffff0000) == 0x1000000;
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x400240ec.
 * REA evidence: ev_914197d317863ad26fd61faa450eda1eb9ba9c3e77eb33fc13daeae068dd6b5e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400240ec(void)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_ram_3006a7c5 == '\0') {
    _DAT_ram_3006ad02 = 0;
  }
  else if ((DAT_ram_3006a7c5 == '\x02') && (DAT_ram_3006a7c1 == '\0')) {
    uVar1 = 0;
    for (uVar2 = 0; uVar2 < _DAT_ram_3006ad02; uVar2 = uVar2 + 1 & 0xffff) {
      if ((&DAT_ram_3006a801)[uVar2 * 5] != -8) {
        if (uVar2 != uVar1) {
          FUN_ram_4000305c(&DAT_ram_3006a801 + uVar1 * 5,&DAT_ram_3006a801 + uVar2 * 5,5);
        }
        uVar1 = uVar1 + 1 & 0xffff;
      }
    }
    _DAT_ram_3006ad02 = (ushort)uVar1;
  }
  return;
}


/* NanoCore 1.10, address 0x40024178.
 * REA evidence: ev_b7dba624e68b341e12ce0becc437d613d0c47e7acf89cba4af4ca4756d833d11
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024178(int param_1)

{
  int iVar1;
  
  if ((DAT_ram_3006a7c2 != '\0') && (DAT_ram_3006a800 != '\0')) {
    iVar1 = FUN_ram_40004362(500);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    if (iVar1 < param_1 - _DAT_ram_3006a7f8) {
      DAT_ram_3006a7c2 = 0;
      DAT_ram_3006a7c4 = 0;
      DAT_ram_3006a800 = 0;
      if ((DAT_ram_3006a7c3 == '\x01') && (DAT_ram_3006a7c1 != '\0')) {
        FUN_ram_40023ec0();
      }
      FUN_ram_40023eec();
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x400241ec.
 * REA evidence: ev_6f9784f405c14fe80cdb95c54e94edcd31ce7a45ae19491d6042ae6737ec861b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_400241ec(uint param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    return false;
  }
  FUN_ram_40024178(param_2);
  if (DAT_ram_3006a7c3 == 3) {
    iVar1 = param_1 - 2;
LAB_ram_40024248:
    bVar2 = iVar1 == 0;
  }
  else {
    if (DAT_ram_3006a7c3 < 4) {
      if (DAT_ram_3006a7c3 == 0) {
        return false;
      }
      if (DAT_ram_3006a7c3 == 2) {
        iVar1 = param_1 - 1;
        goto LAB_ram_40024248;
      }
    }
    else if (DAT_ram_3006a7c3 == 4) {
      iVar1 = param_1 - 3;
      goto LAB_ram_40024248;
    }
    bVar2 = true;
    if ((DAT_ram_3006a7c2 != '\0') && ((uint)DAT_ram_3006a7c4 != (param_1 & 0xff))) {
      bVar2 = false;
    }
  }
  return bVar2;
}


/* NanoCore 1.10, address 0x400241f2.
 * REA evidence: ev_26cc0cea1bfc4737c4faf3b49687157ad320fa33fda070621fd03136d2c1932c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_400241f2(uint param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  
  FUN_ram_40024178(param_2);
  if (DAT_ram_3006a7c3 == 3) {
    iVar1 = param_1 - 2;
LAB_ram_40024248:
    bVar2 = iVar1 == 0;
  }
  else {
    if (DAT_ram_3006a7c3 < 4) {
      if (DAT_ram_3006a7c3 == 0) {
        return false;
      }
      if (DAT_ram_3006a7c3 == 2) {
        iVar1 = param_1 - 1;
        goto LAB_ram_40024248;
      }
    }
    else if (DAT_ram_3006a7c3 == 4) {
      iVar1 = param_1 - 3;
      goto LAB_ram_40024248;
    }
    bVar2 = true;
    if ((DAT_ram_3006a7c2 != '\0') && ((uint)DAT_ram_3006a7c4 != (param_1 & 0xff))) {
      bVar2 = false;
    }
  }
  return bVar2;
}


/* NanoCore 1.10, address 0x40024252.
 * REA evidence: ev_d81e87c37d4d94d86c22b21a7c803f3ea54aae10b98a1f031bd89255a94bcafb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024252(int param_1,undefined1 param_2)

{
  int iVar1;
  
  if (param_1 != 0xf8) {
    if (2 < (param_1 + 6U & 0xff)) {
      return;
    }
  }
  iVar1 = FUN_ram_4002401c();
  if (iVar1 != 0) {
    iVar1 = (uint)_DAT_ram_3006ad02 * 5;
    _DAT_ram_3006ad02 = _DAT_ram_3006ad02 + 1;
    (&DAT_ram_3006a801)[iVar1] = (char)param_1;
    (&DAT_ram_3006a802)[iVar1] = param_2;
    *(undefined1 *)(iVar1 + 0x3006a803) = 1;
    *(undefined1 *)(iVar1 + 0x3006a804) = 0;
    *(undefined1 *)(iVar1 + 0x3006a805) = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x400242b6.
 * REA evidence: ev_81e59070e71772d9fdcfdaff7cfeda8ab2aea897ba2e05bdf49ea34b9d4d325f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400242b6(char param_1)

{
  if (DAT_ram_3006a7c5 == '\0') {
    return;
  }
  if (((DAT_ram_3006a7c5 != '\x01') && (2 < (byte)(param_1 + 6U))) && (DAT_ram_3006a7c1 == '\0')) {
    return;
  }
  FUN_ram_40024252();
  return;
}


/* NanoCore 1.10, address 0x400242e4.
 * REA evidence: ev_cdd7248e318da91511f66cf74f9ef51bc417ea6e96cce943baa0733068b84c3b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400242e4(uint param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002401c(0xf2);
  if (iVar1 != 0) {
    if ((param_2 != 0) || (0x3fff < param_1)) {
      param_1 = 0x3fff;
    }
    iVar1 = (uint)_DAT_ram_3006ad02 * 5;
    _DAT_ram_3006ad02 = _DAT_ram_3006ad02 + 1;
    (&DAT_ram_3006a802)[iVar1] = param_3;
    *(undefined1 *)(iVar1 + 0x3006a803) = 3;
    (&DAT_ram_3006a801)[iVar1] = 0xf2;
    *(byte *)(iVar1 + 0x3006a804) = (byte)param_1 & 0x7f;
    *(char *)(iVar1 + 0x3006a805) = (char)(param_1 >> 7);
  }
  return;
}


/* NanoCore 1.10, address 0x40024352.
 * REA evidence: ev_5cccc386fa1152c6119857f4d9e2994d571f2042d1fa62bb50238497228bee48
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024352(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  if (DAT_ram_3006a7c0 == '\0') {
    _DAT_ram_3006a7c0 = 0x1000001;
    _DAT_ram_3006a7c4 = 0x200;
    DAT_ram_3006a7c6 = 3;
    _DAT_ram_3006a7c8 = 0x40004;
    if (param_1 == 0) {
      param_1 = 0xac44;
    }
    _DAT_ram_3006a7d0 = (ulonglong)DAT_ram_400934dc;
    _DAT_ram_3006a7d8 = 0;
    _DAT_ram_3006a7e0 = 0;
    _DAT_ram_3006a7e4 = 0;
    _DAT_ram_3006a7e8 = 0;
    _DAT_ram_3006a7ec = 0;
    _DAT_ram_3006a7f0 = 0;
    _DAT_ram_3006a7f4 = 0;
    _DAT_ram_3006a7f8 = 0;
    _DAT_ram_3006a7fc = 0;
    DAT_ram_3006a800 = 0;
    _DAT_ram_3006ad02 = 0;
    _DAT_ram_3006a7cc = param_1;
    FUN_ram_40023ed6();
  }
  else if (param_1 != 0) {
    _DAT_ram_3006a7cc = param_1;
  }
  FUN_ram_400002fa(uVar1);
  return;
}


/* NanoCore 1.10, address 0x400243ee.
 * REA evidence: ev_0d8f89e154ace7956d0b9701027650a64e4f2f6e56a3906e54a624730730625b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400243ee(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_40024352();
    FUN_ram_400002f4();
    _DAT_ram_3006a7cc = param_1;
    FUN_ram_400002fa();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40024414.
 * REA evidence: ev_e1a80006b5a599f676a066e0380d4477d59bbb9791a233e0b7f563b880523f2b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024414(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_ram_40024352(0);
  uVar1 = FUN_ram_400042fa();
  uVar2 = FUN_ram_400002f4();
  FUN_ram_40024178(uVar1);
  FUN_ram_40023d7e(param_1,_DAT_ram_3006a7e0,_DAT_ram_3006a7e4,_DAT_ram_3006a7e8,_DAT_ram_3006a7ec);
  FUN_ram_400002fa(uVar2);
  return;
}


/* NanoCore 1.10, address 0x40024466.
 * REA evidence: ev_1ac4f8dd6bb12ecd9643da9fc5f0f830b02e4a402113052456a15a2c6649de14
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400245a2) */
/* WARNING: Removing unreachable block (ram,0x400245ca) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40024466(uint param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  if (param_1 == 0) {
    FUN_ram_40024414(param_3);
    return;
  }
  FUN_ram_40024352(param_2);
  uVar9 = FUN_ram_400002f4();
  if (param_2 != 0) {
    _DAT_ram_3006a7cc = param_2;
  }
  FUN_ram_400042fa();
  FUN_ram_40024178();
  uVar5 = _DAT_ram_3006a7ec;
  uVar4 = _DAT_ram_3006a7e8;
  if (_DAT_ram_3006a7cc == 0) {
    _DAT_ram_3006a7cc = 0xac44;
  }
  uVar2 = _DAT_ram_3006a7e0;
  uVar3 = _DAT_ram_3006a7e4;
  _DAT_ram_3006a7e0 = (ulonglong)param_1 + _DAT_ram_3006a7e0;
  _DAT_ram_3006a7e8 = CONCAT44(_DAT_ram_3006a7ec,_DAT_ram_3006a7e8);
  if ((DAT_ram_3006a7c1 != '\0') &&
     ((DAT_ram_3006a7c3 < 2 ||
      (_DAT_ram_3006a7e8 = CONCAT44(_DAT_ram_3006a7ec,_DAT_ram_3006a7e8), DAT_ram_3006a7c2 != '\0'))
     )) {
    fVar12 = (float)FUN_ram_40023fae(CONCAT44(_DAT_ram_3006a7d4,_DAT_ram_3006a7d0),param_1,
                                     _DAT_ram_3006a7cc);
    fVar12 = fVar12 + _DAT_ram_3006a7d4;
    uVar8 = (uint)(-1 < (int)fVar12) * (int)fVar12;
    _DAT_ram_3006a7d4 = fVar12 - (float)uVar8;
    _DAT_ram_3006a7e8 = CONCAT44(_DAT_ram_3006a7ec,_DAT_ram_3006a7e8) + (ulonglong)uVar8;
    _DAT_ram_3006a7d8 = 0.0;
  }
  iVar10 = FUN_ram_400240c4();
  if ((iVar10 != 0) &&
     ((DAT_ram_3006a7c5 == '\x01' || ((DAT_ram_3006a7c5 == '\x02' && (DAT_ram_3006a7c1 != '\0'))))))
  {
    fVar12 = (float)FUN_ram_40023fae(CONCAT44(_DAT_ram_3006a7d4,_DAT_ram_3006a7d0),param_1,
                                     _DAT_ram_3006a7cc);
    uVar6 = _DAT_ram_3006a7f0;
    uVar7 = _DAT_ram_3006a7f4;
    fVar12 = fVar12 + _DAT_ram_3006a7d8;
    uVar8 = (uint)(-1 < (int)fVar12) * (int)fVar12;
    uVar14 = uVar8 + _DAT_ram_3006a7f0;
    _DAT_ram_3006a7d8 = fVar12 - (float)uVar8;
    uRam3006a7dc = 0;
    bVar1 = _DAT_ram_3006a7f0 < uVar14;
    _DAT_ram_3006a7f0 = uVar14;
    if (bVar1) {
      uVar13 = FUN_ram_40003bac(uVar6,uVar7,0x28,0);
      uVar14 = FUN_ram_40003bac((int)uVar14,(int)(uVar14 >> 0x20),0x28,0);
      if (uVar13 < uVar14) {
        uVar8 = (uint)(uVar14 - uVar13);
        if (((int)(uVar14 - uVar13 >> 0x20) == 0) && (uVar8 < 0xf1)) {
          if (uVar8 == 0) goto LAB_ram_40024524;
        }
        else {
          uVar8 = 0xf0;
        }
        uVar11 = FUN_ram_400240c4();
        while (uVar11 != 0) {
          FUN_ram_40024252(0xf8,0);
          uVar8 = uVar8 - 1;
          uVar11 = uVar8;
        }
      }
    }
  }
LAB_ram_40024524:
  FUN_ram_40023d7e(param_3,uVar2,uVar3,uVar4,uVar5);
  FUN_ram_400002fa(uVar9);
  return;
}


/* NanoCore 1.10, address 0x400245fc.
 * REA evidence: ev_d4eb93dd8855375bbf27c1f1ea0efc46ede5d9f50ea7df0b889146b47bff4387
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400245fc(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  code *pcVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  undefined1 uStack_544;
  undefined1 uStack_543;
  undefined1 uStack_542;
  undefined1 local_540 [1292];
  
  FUN_ram_40024352(0);
  uVar10 = FUN_ram_400002f4();
  if ((DAT_ram_3006a7c2 == '\0') && (_DAT_ram_3006ad02 == 0)) {
    FUN_ram_400002fa();
    return;
  }
  FUN_ram_400002fa(uVar10);
  uVar10 = FUN_ram_400042fa();
  uVar11 = FUN_ram_400002f4();
  FUN_ram_40024178(uVar10);
  FUN_ram_400240ec();
  uVar7 = _DAT_ram_3006ad1c;
  pcVar6 = _DAT_ram_3006ad18;
  uVar10 = _DAT_ram_3006ad14;
  pcVar5 = _DAT_ram_3006ad10;
  bVar4 = DAT_ram_3006a7c6;
  uVar12 = (uint)_DAT_ram_3006ad02;
  if (uVar12 < 0x101) {
    if (uVar12 == 0) goto LAB_ram_400246ee;
  }
  else {
    uVar12 = 0x100;
  }
  FUN_ram_4000305c(local_540,&DAT_ram_3006a801,uVar12 * 5);
LAB_ram_400246ee:
  _DAT_ram_3006ad02 = 0;
  FUN_ram_400002fa(uVar11);
  if ((pcVar5 != (code *)0x0) || (pcVar6 != (code *)0x0)) {
    puVar8 = local_540;
    for (uVar13 = 0; uVar13 != uVar12; uVar13 = uVar13 + 1 & 0xffff) {
      if ((pcVar5 != (code *)0x0) || (pcVar6 != (code *)0x0)) {
        bVar1 = puVar8[2];
        cVar2 = puVar8[1];
        if (bVar1 < 4) {
          bVar9 = bVar1;
          if (bVar1 == 0) {
            bVar9 = 1;
          }
        }
        else {
          bVar9 = 3;
        }
        uStack_544 = *puVar8;
        iVar14 = 3;
        bVar15 = 1;
        uStack_543 = puVar8[3];
        uStack_542 = puVar8[4];
        do {
          if (((bVar4 & bVar15) != 0) &&
             (cVar3 = (&DAT_ram_400937b8)[(byte)(bVar15 - 1)], cVar2 != cVar3)) {
            if (pcVar6 == (code *)0x0) {
              if (bVar1 < 2) {
                (*pcVar5)(cVar3,uStack_544,uVar10);
              }
            }
            else {
              (*pcVar6)(cVar3,&uStack_544,bVar9,uVar7);
            }
          }
          iVar14 = iVar14 + -1;
          bVar15 = bVar15 << 1;
        } while (iVar14 != 0);
      }
      puVar8 = puVar8 + 5;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x400247e6.
 * REA evidence: ev_d9baedf7c82ecc76c04b6b96e274fedbd710bde9faeb0111515b7dbe4cf06809
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4002498c) */
/* WARNING: Removing unreachable block (ram,0x400249ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400247e6(undefined4 param_1,int param_2,int param_3)

{
  float fVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((param_2 != 0xf8) && (2 < (param_2 + 6U & 0xff))) {
    return;
  }
  FUN_ram_40024352(0);
  uVar3 = FUN_ram_400002f4();
  iVar4 = FUN_ram_400241ec(param_1,param_3);
  if (iVar4 != 0) {
    FUN_ram_40023f68(param_1);
    if (param_2 == 0xfa) {
      DAT_ram_3006a7c1 = '\x01';
      _DAT_ram_3006a7e8 = 0;
      _DAT_ram_3006a7d0 = _DAT_ram_3006a7d0 & 0xffffffff;
      _DAT_ram_3006a7fc = 0;
      uVar5 = 0xfa;
    }
    else if (param_2 == 0xfb) {
      DAT_ram_3006a7c1 = '\x01';
      FUN_ram_40023e8e();
      uVar5 = 0xfb;
    }
    else if (param_2 == 0xfc) {
      if (DAT_ram_3006a7c2 != '\0') {
        _DAT_ram_3006a7d0 = _DAT_ram_3006a7d0 & 0xffffffff;
        _DAT_ram_3006a7e8 = (ulonglong)_DAT_ram_3006a7fc * 0x28;
      }
      DAT_ram_3006a7c1 = '\0';
      uVar5 = 0xfc;
    }
    else {
      if (param_2 != 0xf8) goto LAB_ram_40024826;
      FUN_ram_40023ed6();
      if ((((DAT_ram_3006a800 != '\0') && (param_3 != _DAT_ram_3006a7f8)) &&
          (fVar1 = DAT_ram_400937b4 /
                   ((float)(uint)(param_3 - _DAT_ram_3006a7f8) * DAT_ram_400934e0),
          DAT_ram_400930bc <= fVar1)) && (fVar1 <= DAT_ram_400930d0)) {
        _DAT_ram_3006a7d0 =
             (ulonglong)
             (uint)((float)_DAT_ram_3006a7d0 * DAT_ram_4009287c + fVar1 * DAT_ram_40093100);
      }
      _DAT_ram_3006a7e8 = CONCAT44(_DAT_ram_3006a7ec,_DAT_ram_3006a7e8);
      if ((DAT_ram_3006a7c1 != '\0') &&
         (_DAT_ram_3006a7e8 = CONCAT44(_DAT_ram_3006a7ec,_DAT_ram_3006a7e8),
         _DAT_ram_3006a7fc != 0xffffffff)) {
        _DAT_ram_3006a7fc = _DAT_ram_3006a7fc + 1;
        uVar2 = (ulonglong)_DAT_ram_3006a7fc * 0x28;
        if ((CONCAT44(_DAT_ram_3006a7ec,_DAT_ram_3006a7e8) < uVar2) ||
           (uVar2 = uVar2 + 0x28, _DAT_ram_3006a7e8 = CONCAT44(_DAT_ram_3006a7ec,_DAT_ram_3006a7e8),
           uVar2 < CONCAT44(_DAT_ram_3006a7ec,_DAT_ram_3006a7e8))) {
          _DAT_ram_3006a7d0 = _DAT_ram_3006a7d0 & 0xffffffff;
          _DAT_ram_3006a7e8 = uVar2;
        }
      }
      uVar5 = 0xf8;
    }
    DAT_ram_3006a800 = '\x01';
    _DAT_ram_3006a7f8 = param_3;
    FUN_ram_400242b6(uVar5,param_1);
  }
LAB_ram_40024826:
  FUN_ram_400002fa(uVar3);
  return;
}


/* NanoCore 1.10, address 0x400249ba.
 * REA evidence: ev_50edda82b3765141a315440c5364d42b15a184d30de27e6a5d3c115b50890999
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400249ba(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_ram_40024352(0);
  uVar1 = FUN_ram_400002f4();
  iVar2 = FUN_ram_400241ec(param_1,param_3);
  if (iVar2 != 0) {
    FUN_ram_40023f68(param_1);
    _DAT_ram_3006a7e8 = (ulonglong)(param_2 & 0x3fff) * 0xf0;
    _DAT_ram_3006a7d4 = 0;
    FUN_ram_40023e8e();
    DAT_ram_3006a800 = 1;
    _DAT_ram_3006a7f8 = param_3;
    if (DAT_ram_3006a7c5 != '\0') {
      FUN_ram_400242e4(param_2 & 0x3fff,0,param_1);
    }
  }
  FUN_ram_400002fa(uVar1);
  return;
}


/* NanoCore 1.10, address 0x40024a3a.
 * REA evidence: ev_12afdfe600d1806606133afb6a707c5154df694b5021bc447fc5d36f805a92ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40024a3a(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0xff;
  }
  return;
}


/* NanoCore 1.10, address 0x40024a48.
 * REA evidence: ev_4540f5f96f8093d46adf78704a89ac313c51bb7c658b5ef6d2ff2dd7142944d2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40024a48(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 != 0) {
    iVar5 = 1;
    if ((int)param_3 < 1) {
      iVar5 = -1;
    }
    iVar1 = ((int)param_3 >> 0x1f ^ param_3) - ((int)param_3 >> 0x1f);
    iVar2 = 4;
    if (iVar1 < 4) {
      iVar2 = 1;
      if (iVar1 != 1) {
        iVar2 = 2;
      }
    }
    if (param_1 != (int *)0x0) {
      uVar3 = FUN_ram_40004362(0x5a);
      iVar4 = FUN_ram_400042fa();
      if ((*param_1 != 0) && (param_2 == (char)param_1[1])) {
        if (uVar3 == 0) {
          uVar3 = 1;
        }
        if ((uint)(iVar4 - *param_1) <= uVar3) {
          iVar2 = iVar2 << 1;
        }
      }
      *param_1 = iVar4;
      *(char *)(param_1 + 1) = (char)param_2;
    }
    return iVar1 * iVar5 * iVar2;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40024ada.
 * REA evidence: ev_f6498efb9be5ed83290a2aadc2078951cb04c75d8b61689de31aa69eb9f0ffde
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40024ada(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40024a48();
  return iVar1 * 10;
}


/* NanoCore 1.10, address 0x40024aee.
 * REA evidence: ev_7990211bece5ad456e5ca87123162a52b0c7dcb3d711fa2ea30fae3f9b4a290b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40024b08) */

int FUN_ram_40024aee(int param_1)

{
  if (param_1 < 0x3e9) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 1000;
  }
  return (param_1 * 0xa8c) / 1000;
}


/* NanoCore 1.10, address 0x40024b16.
 * REA evidence: ev_167a03ed4356023e78c88a2e75e765cf520bf6a2e0bc105f5806beffce584f59
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40024b16(int param_1)

{
  if (param_1 < 0x65) {
    if (param_1 < 0) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 100;
  }
  return param_1 * 10;
}


/* NanoCore 1.10, address 0x40024b5c.
 * REA evidence: ev_6b4b6bf5c627dc4c038c0840a29af483fef40ed45946271367a4c560b7846da0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40024b4e) */

int FUN_ram_40024b5c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40024ada(param_1,param_2,param_4);
  iVar2 = 100;
  if ((param_3 < 0x65) && (iVar2 = param_3, param_3 < 0)) {
    iVar2 = 0;
  }
  iVar1 = iVar1 + iVar2 * 10;
  if (iVar1 < 0x3e9) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 1000;
  }
  if (iVar1 < 0x3e9) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 1000;
  }
  return (iVar1 * 100 + 500) / 1000;
}


/* NanoCore 1.10, address 0x40024ba2.
 * REA evidence: ev_a8c91c01c2127b5c30e5e6b59e171ed03222104f573f6f1861f0aa4f142e4a85
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_40024ba2(char *param_1,char *param_2)

{
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    param_2 = param_1;
  }
  return param_2;
}


/* NanoCore 1.10, address 0x40024bb0.
 * REA evidence: ev_842dffe13cbb9f172f9467d2241bcb59f55aaf41d3e6ec202ccc2e0b98470225
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_40024bb0(ulonglong param_1)

{
  if ((float)param_1 < 0.0) {
    param_1 = 0;
  }
  else if (DAT_ram_4009281c < (float)param_1) {
    return (ulonglong)(uint)DAT_ram_4009281c;
  }
  return param_1;
}


/* NanoCore 1.10, address 0x40024bd4.
 * REA evidence: ev_05913f86557c77b81bc374d187edea5967fa67227753c39b2bab13a73824c0c2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40024bd4(float param_1)

{
  if (param_1 < 0.0) {
    param_1 = param_1 - DAT_ram_40092864;
  }
  else {
    param_1 = param_1 + DAT_ram_40092864;
  }
  return (int)param_1;
}


/* NanoCore 1.10, address 0x40024bf6.
 * REA evidence: ev_4ae3f244f8e53fc97d4cbc3d627910ccc0903725104edaa6df8e5b36f0a4a793
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40024bf6(int param_1)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (float)FUN_ram_40024bb0();
  iVar2 = (int)(fVar3 * DAT_ram_4009309c);
  if (iVar2 == 2) {
    if (param_1 != 0) {
      param_1 = *(int *)(param_1 + 0x20);
    }
    pcVar1 = s_Square_ram_400937c0;
  }
  else if (iVar2 < 3) {
    if (iVar2 == 1) {
      if (param_1 != 0) {
        param_1 = *(int *)(param_1 + 0x1c);
      }
      pcVar1 = &DAT_ram_400937bc;
    }
    else {
      if (param_1 != 0) {
        param_1 = *(int *)(param_1 + 0x18);
      }
      pcVar1 = &DAT_ram_400937cc;
    }
  }
  else {
    if (param_1 != 0) {
      param_1 = *(int *)(param_1 + 0x24);
    }
    pcVar1 = &DAT_ram_400937c8;
  }
  FUN_ram_40024ba2(param_1,pcVar1);
  return;
}


/* NanoCore 1.10, address 0x40024c60.
 * REA evidence: ev_544670c603afdbdc7ae26395d8a9bf7834ee2c194e8ad57f586ce333e5402897
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40024c60(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
    FUN_ram_400055ea(param_1,param_2,&DAT_ram_400937d4,param_3,param_4);
    return;
  }
  FUN_ram_400055ea(param_1,param_2,&DAT_ram_4009338c,param_3,param_4);
  return;
}


/* NanoCore 1.10, address 0x40024c8e.
 * REA evidence: ev_a9cf1bb0fcd5a5ba25d28dfe64f0a0026061f61c9f59b236c1f04110c5aab8b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40024da8) */
/* WARNING: Removing unreachable block (ram,0x40024d88) */
/* WARNING: Removing unreachable block (ram,0x40024d96) */
/* WARNING: Removing unreachable block (ram,0x40024d04) */
/* WARNING: Removing unreachable block (ram,0x40024db6) */
/* WARNING: Removing unreachable block (ram,0x40024d12) */

void FUN_ram_40024c8e(float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined1 auStack_40 [24];
  
  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  uVar1 = FUN_ram_40024bd4();
  pcVar5 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
  if ((int)uVar1 < 0) {
    pcVar5 = s_PRE___ram_40095130 + 4;
  }
  uVar2 = FUN_ram_40024ba2(param_4,&DAT_ram_400937dc);
  if (param_1 < DAT_ram_40093094) {
    if (DAT_ram_4009286c <= param_1) {
      iVar6 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
      pcVar4 = s__s_ld_ram_400933bc;
      goto LAB_ram_40024d42;
    }
    if (param_1 < DAT_ram_400930a4) {
      iVar6 = FUN_ram_40024bd4(param_1 * DAT_ram_4009286c);
      iVar3 = iVar6 % 100;
      pcVar4 = s__s_ld__02ld_ram_4009339c;
      iVar6 = iVar6 / 100;
    }
    else {
      iVar6 = FUN_ram_40024bd4(param_1 * DAT_ram_400930a4);
      iVar3 = iVar6 % 10;
      pcVar4 = s__s_ld__ld_ram_40093390;
      iVar6 = iVar6 / 10;
    }
  }
  else {
    iVar3 = FUN_ram_40024bd4(param_1 / DAT_ram_4009286c);
    iVar6 = iVar3 / 10;
    pcVar4 = &DAT_ram_400933a8;
    iVar3 = iVar3 % 10;
    if (iVar3 == 0) {
LAB_ram_40024d42:
      FUN_ram_400055ea(auStack_40,0x10,pcVar4,pcVar5,iVar6);
      goto LAB_ram_40024d4a;
    }
    pcVar4 = &DAT_ram_400933b0;
  }
  FUN_ram_400055ea(auStack_40,0x10,pcVar4,pcVar5,iVar6,iVar3);
LAB_ram_40024d4a:
  FUN_ram_400055ea(param_2,param_3,&DAT_ram_40093384,auStack_40,uVar2);
  return;
}


/* NanoCore 1.10, address 0x40024dbc.
 * REA evidence: ev_6e34e0e31bebcaaa449f11d7ec68b226f5c0bc1e4e77503f0809621fc6b7418b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40024dbc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = (float)FUN_ram_40024bb0();
  uVar1 = FUN_ram_40024bd4(fVar2 * DAT_ram_4009286c);
  FUN_ram_400055ea(param_1,param_2,&DAT_ram_4009338c,uVar1);
  return;
}


/* NanoCore 1.10, address 0x40024df2.
 * REA evidence: ev_5d6c2a543fcb532f46a0086e5322fa9b0c231f6909cc0a099c9572e955dc6330
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40024e00) */
/* WARNING: Removing unreachable block (ram,0x40024e04) */

void FUN_ram_40024df2(undefined4 param_1,undefined4 param_2,uint param_3,char *param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = ((int)param_3 >> 0x1f ^ param_3) - ((int)param_3 >> 0x1f);
  iVar2 = iVar3 / 10;
  iVar3 = iVar3 % 10;
  pcVar1 = s_PRE___ram_40095130 + 4;
  if (-1 < (int)param_3) {
    pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
  }
  if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
    FUN_ram_400055ea(param_1,param_2,&DAT_ram_400937e0,pcVar1,iVar2,iVar3);
    return;
  }
  FUN_ram_400055ea(param_1,param_2,s__s_ld__ld_ram_40093390,pcVar1,iVar2,iVar3);
  return;
}


/* NanoCore 1.10, address 0x40024e3e.
 * REA evidence: ev_a607cd681753e7ab3989a79b1feb04cb5a50f9629aa7105af72de1eb8705cbc1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40024e4e) */
/* WARNING: Removing unreachable block (ram,0x40024e52) */

void FUN_ram_40024e3e(undefined4 param_1,undefined4 param_2,uint param_3,char *param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = ((int)param_3 >> 0x1f ^ param_3) - ((int)param_3 >> 0x1f);
  iVar2 = iVar3 / 100;
  iVar3 = iVar3 % 100;
  pcVar1 = s_PRE___ram_40095130 + 4;
  if (-1 < (int)param_3) {
    pcVar1 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
  }
  if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
    FUN_ram_400055ea(param_1,param_2,s__s_ld__02ld__s_ram_400937f0,pcVar1,iVar2,iVar3);
    return;
  }
  FUN_ram_400055ea(param_1,param_2,s__s_ld__02ld_ram_4009339c,pcVar1,iVar2,iVar3);
  return;
}


/* NanoCore 1.10, address 0x40024e8c.
 * REA evidence: ev_2b128291992db25e29a37a4964a3ecd1ddc46d48aac6c7a9427e989a48e45a61
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40024e8c(int *param_1,byte *param_2)

{
  if ((*param_1 == 8) && (*param_1 = 0, 1 < *param_2)) {
    *param_2 = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x40024ea8.
 * REA evidence: ev_9c8ae59ffbe7681b38f086738b8413dc9a9086d01f3c14d3706c08c0266c3366
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_40024ea8(uint param_1)

{
  if (param_1 < 10) {
    return (&PTR_DAT_ram_40093228_ram_400943d0)[param_1];
  }
  return s_ep__02x_clear_halt_ram_40092960 + 0x14;
}


/* NanoCore 1.10, address 0x40024ec6.
 * REA evidence: ev_0ba91f28ea4b3aeff5a8dce610be8782380f560b83d13bd69d5976042f057dec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40024ec6(char *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (char *)0x0) {
    iVar1 = 0;
    do {
      iVar2 = strcmp(param_1,(&PTR_DAT_ram_40093228_ram_400943d0)[iVar1]);
      if (iVar2 == 0) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 10);
  }
  return 0xff;
}


/* NanoCore 1.10, address 0x40024f08.
 * REA evidence: ev_4d41af3b280758b752e309099229bf6945cb720fd02ad8db551eefe23ab07933
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_40024f08(uint param_1)

{
  if (param_1 < 10) {
    return (&PTR_DAT_ram_400941a8_ram_400943f8)[param_1];
  }
  return s_ep__02x_clear_halt_ram_40092960 + 0x14;
}


/* NanoCore 1.10, address 0x40024f26.
 * REA evidence: ev_54cf778e2aac95c3ffc47e05f436491b7bbe88549534bf833904f7454155e6b6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40024f26(uint param_1)

{
  if (param_1 < 10) {
    return (&DAT_ram_40094250)[param_1];
  }
  return 1;
}


/* NanoCore 1.10, address 0x40024f3e.
 * REA evidence: ev_69fda71001b475f43511144765614c2dc3c1a41148fbbf654d6b58d1112a00e6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40024f3e(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 == 6) {
    if (param_2 < 8) {
      if (param_2 == 4) {
        param_2 = 2;
      }
    }
    else {
      param_2 = 6;
    }
  }
  else if (param_1 == 7) {
    if (2 < param_2) {
      param_2 = 2;
    }
    param_2 = param_2 & 0xff;
  }
  else {
    if (param_1 != 5) {
      uVar1 = FUN_ram_40024f26();
      if ((uVar1 < 2) || (uVar1 <= param_2)) {
        param_2 = 0;
      }
      return param_2;
    }
    if ((((4 < param_2) && (param_2 != 10)) && (param_2 != 0xb)) &&
       ((param_2 != 0xc && (param_2 != 0x11)))) {
      param_2 = 0;
    }
  }
  return param_2;
}


/* NanoCore 1.10, address 0x40024fb8.
 * REA evidence: ev_0ace68328d5e6c368577bd36622ff96688760c3f8c58af480d7764e2122b7dbf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40024fb8(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 5) {
    uVar1 = FUN_ram_40024f26();
    return uVar1;
  }
  return 9;
}


/* NanoCore 1.10, address 0x40024fc6.
 * REA evidence: ev_285ee30ce66f4eac7b68dd1969995ed4e45ba612244c3c2bb9edebea3f394b0b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40024fc6(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 != 5) {
    uVar1 = FUN_ram_40024f3e();
    return uVar1;
  }
  if (param_2 < 9) {
    return (uint)(byte)(&DAT_ram_400943c4)[param_2];
  }
  return 0;
}


/* NanoCore 1.10, address 0x40024fe8.
 * REA evidence: ev_023da4ea234d741470bb6c56142f6e872027787674368ed996fe822a6acd7d11
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40024fe8(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_ram_40024fb8();
  uVar1 = 0;
  while( true ) {
    if (uVar1 == uVar2) {
      return 0xffffffff;
    }
    iVar3 = FUN_ram_40024fc6(param_1,uVar1);
    if (iVar3 == param_2) break;
    uVar1 = uVar1 + 1 & 0xff;
  }
  return uVar1;
}


