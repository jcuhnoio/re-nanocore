/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4001e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4001e026.
 * REA evidence: ev_6e14d82f2105da6df14d3013f694bd7c84ea0944c209e96dc1186d6c72e3ee50
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001e026(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    return 5;
  }
  iVar1 = FUN_ram_40024ec6();
  uVar2 = 5;
  if (iVar1 != 0xff) {
    uVar3 = FUN_ram_4001dffa(param_1);
    uVar2 = FUN_ram_400262d0(iVar1,uVar3,1);
    if (0xc < uVar2) {
      uVar2 = 0xc;
    }
    uVar2 = uVar2 & 0xff;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x4001e02c.
 * REA evidence: ev_2b94f76add9da157f15d3c6a699a4ef4925340af623730ad0fa9efa6322fd0b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001e02c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_40024ec6();
  uVar2 = 5;
  if (iVar1 != 0xff) {
    uVar3 = FUN_ram_4001dffa(param_1);
    uVar2 = FUN_ram_400262d0(iVar1,uVar3,1);
    if (0xc < uVar2) {
      uVar2 = 0xc;
    }
    uVar2 = uVar2 & 0xff;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x4001e06e.
 * REA evidence: ev_096e3dd7db004528a9ab6f11ddde599c9d3be3723950060024d4d3e029f218d4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001e234) */
/* WARNING: Removing unreachable block (ram,0x4001e238) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001e06e(undefined *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_30;
  uint uStack_2c;
  ushort uStack_28;
  ushort uStack_26;
  
  puVar1 = &DAT_ram_40093dc4;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  FUN_ram_4001cff4();
  _DAT_ram_300696fc = puVar1;
  DAT_ram_30069a2c = FUN_ram_4001a19a(puVar1);
  iVar3 = FUN_ram_40005208(puVar1,&DAT_ram_40093dc4,0x10);
  if (iVar3 == 0) {
    FUN_ram_4001b2e0();
  }
  else {
    iVar3 = FUN_ram_40005208(puVar1,&DAT_ram_4009322c,0x10);
    if (iVar3 == 0) {
      FUN_ram_4001a576();
    }
    else {
      iVar3 = FUN_ram_40005208(puVar1,&DAT_ram_40093230,0x10);
      if (iVar3 == 0) {
        FUN_ram_4001a6e0();
      }
    }
  }
  DAT_ram_300699cc = 0;
  uVar4 = FUN_ram_4001e026(puVar1);
  DAT_ram_300699f4 = (undefined1)uVar4;
  if (5 < uVar4) {
    uVar4 = 5;
  }
  DAT_ram_30069a34 = (undefined1)uVar4;
  FUN_ram_4001b76e(puVar1);
  local_30 = FUN_ram_4001425e();
  iVar3 = FUN_ram_4002c5cc(3);
  iVar5 = FUN_ram_4002c5ea(3,&uStack_2c);
  if (iVar5 != 0) {
    local_30 = uStack_2c;
  }
  local_30 = local_30 & 0xffffff;
  if (_DAT_ram_300696f0 != 0) {
    FUN_ram_40047968(_DAT_ram_300696f0,local_30,0);
    FUN_ram_40047986(_DAT_ram_300696f0,0xff,0);
  }
  if (_DAT_ram_300696ac != 0) {
    if (iVar3 == 0) {
      FUN_ram_40043064(_DAT_ram_300696ac,1);
    }
    else {
      FUN_ram_4001670a(_DAT_ram_300696ac,0x300696b0);
    }
  }
  FUN_ram_400164de(0x30069700,0x40,puVar1);
  if (_DAT_ram_30069748 != 0) {
    iVar3 = FUN_ram_4001a28e(puVar1);
    if ((((iVar3 < 0) || (_DAT_ram_30069e1c == 0)) || (_DAT_ram_30069e18 <= iVar3)) ||
       ((*(int *)(_DAT_ram_30069e1c + iVar3 * 4) == 0 || (iVar3 = FUN_ram_4005604e(), iVar3 == 0))))
    {
      FUN_ram_4001670a(_DAT_ram_30069748,0x30069700);
    }
    else {
      FUN_ram_40056474(_DAT_ram_30069748,iVar3);
      FUN_ram_40042b3a(_DAT_ram_30069748,1);
    }
  }
  iVar3 = FUN_ram_4001a28e(puVar1);
  if (-1 < iVar3) {
    FUN_ram_4001a4c6(_DAT_ram_30069748,*(undefined1 *)(iVar3 + 0x30069acc));
  }
  FUN_ram_4001a4dc();
  DAT_ram_30046730 = 0x28;
  DAT_ram_3004672c = 0x28;
  iVar3 = FUN_ram_4004e678(0x3006983c,&uStack_2c);
  if (((iVar3 == 1) && (uStack_28 != 0)) && (uStack_26 != 0)) {
    DAT_ram_3004672c = (uint)uStack_26;
    DAT_ram_30046730 = (uint)uStack_28;
  }
  piVar2 = (int *)&DAT_ram_30069938;
  do {
    FUN_ram_4001670a(*piVar2,0x3006983c);
    if (*piVar2 != 0) {
      FUN_ram_400562ee(*piVar2,(int)DAT_ram_30046730 / 2,(int)DAT_ram_3004672c / 2);
    }
    piVar2 = piVar2 + 1;
  } while (piVar2 != (int *)0x3006994c);
  FUN_ram_4001cbfc();
  return;
}


/* NanoCore 1.10, address 0x4001e2a4.
 * REA evidence: ev_1b4a10c05bcaa877918accb3b38a9891f786223404596833b62b6604f219bccc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001e2a4(void)

{
  DAT_ram_300696aa = 1;
  DAT_ram_300699fc = 0;
  FUN_ram_4001e06e();
  if (_DAT_ram_300696f0 != 0) {
    FUN_ram_40042b3a(_DAT_ram_300696f0,1);
  }
  FUN_ram_4001d0f0(0,0xffffffff);
  FUN_ram_4001bf4c(0);
  return;
}


/* NanoCore 1.10, address 0x4001e2e0.
 * REA evidence: ev_a3802adbe93f04be4cb99b2d71291992e0e441b99be165c7877acecca89140c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001e94c) */
/* WARNING: Removing unreachable block (ram,0x4001e7b4) */
/* WARNING: Removing unreachable block (ram,0x4001e7ae) */
/* WARNING: Removing unreachable block (ram,0x4001e4a6) */
/* WARNING: Removing unreachable block (ram,0x4001e4d4) */
/* WARNING: Removing unreachable block (ram,0x4001e5f6) */
/* WARNING: Removing unreachable block (ram,0x4001e5f0) */
/* WARNING: Removing unreachable block (ram,0x4001e93e) */
/* WARNING: Removing unreachable block (ram,0x4001e950) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001e2e0(uint param_1)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  code *pcVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  code *pcVar20;
  uint uVar21;
  uint uVar22;
  undefined *puVar23;
  undefined1 uStack_44;
  undefined1 uStack_43;
  
  uVar21 = _DAT_ram_300696f8;
  if (DAT_ram_300696aa == '\0') {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (DAT_ram_300696f4 == '\0') {
    iVar9 = FUN_ram_4001a18a();
    uVar21 = (uint)DAT_ram_300699f4;
    if (uVar21 == 0) {
      uVar21 = 1;
    }
    uVar22 = (uint)DAT_ram_300699cc;
    if (_DAT_ram_30069a00 < iVar9) {
      iVar10 = _DAT_ram_30069a00;
      if (_DAT_ram_30069a00 < 0) {
        iVar10 = 0;
      }
    }
    else {
      iVar10 = (_DAT_ram_30069a00 - iVar9) + uVar22 * 5;
      if ((int)uVar21 <= iVar10) {
        iVar10 = uVar21 - 1;
      }
      iVar10 = iVar10 + iVar9;
    }
    lVar8 = (longlong)iVar10 + (longlong)(int)param_1;
    iVar10 = 0;
    if ((-1 < lVar8) && (iVar11 = uVar21 + iVar9 + -1, iVar10 = (int)lVar8, iVar11 <= lVar8)) {
      iVar10 = iVar11;
    }
    if (iVar10 < iVar9) {
      if (uVar22 != 0) {
        DAT_ram_300699cc = 0;
        FUN_ram_4001cbfc();
      }
    }
    else {
      uVar21 = (iVar10 - iVar9) / 5;
      if (uVar22 != uVar21) {
        DAT_ram_300699cc = (byte)uVar21;
        FUN_ram_4001cbfc();
      }
      iVar10 = iVar9 + (iVar10 - iVar9) % 5;
    }
  }
  else {
    if (_DAT_ram_300696f8 < 5) {
      iVar9 = FUN_ram_4001a28e(_DAT_ram_300696fc);
      if (iVar9 < 0) {
        return;
      }
      if ((uint)DAT_ram_30069a34 <= (uVar21 & 0xff)) {
        return;
      }
      iVar10 = FUN_ram_4001ab92(uVar21);
      uVar22 = (uint)*(ushort *)((iVar10 + iVar9 * 0xc) * 2 + 0x30069ad4);
      iVar11 = FUN_ram_4001a956(iVar9,iVar10,&uStack_44);
      if (iVar11 == 0) {
        uVar15 = thunk_FUN_ram_40024ada(0x30069da8,uVar21,param_1);
        if ((((iVar10 == 0) && (iVar9 < 8)) &&
            (puVar23 = (&PTR_DAT_ram_40093228_ram_400935ac)[iVar9], puVar23 != (undefined *)0x0)) &&
           ((iVar11 = FUN_ram_4000522c(puVar23,&DAT_ram_40093dc4), iVar11 == 0 ||
            ((iVar11 = FUN_ram_4000522c(puVar23,&DAT_ram_4009322c), iVar11 == 0 &&
             (3 < (byte)(*(char *)(iVar9 + 0x30069b94) - 8U))))))) {
          uVar14 = ((uVar22 + 0x32) / 100) * 100;
          if (1000 < uVar14) {
            uVar14 = 1000;
          }
          iVar11 = 1;
          if ((int)uVar15 < 0) {
            iVar11 = -1;
          }
          iVar12 = (uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f);
          iVar13 = 1;
          if (9 < iVar12) {
            iVar13 = iVar12 / 10;
          }
          uVar14 = uVar14 + iVar13 * iVar11 * 100;
        }
        else {
          uVar14 = uVar22 + uVar15;
        }
      }
      else {
        iVar11 = 1;
        if ((int)param_1 < 1) {
          iVar11 = -1;
        }
        iVar12 = FUN_ram_40019eee(&uStack_44,uVar22);
        iVar13 = FUN_ram_40019eb0(&uStack_44);
        iVar12 = iVar12 + ((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f)) * iVar11;
        iVar11 = 0;
        if ((-1 < iVar12) && (iVar11 = iVar13 + -1, iVar12 < iVar13 + -1)) {
          iVar11 = iVar12;
        }
        uVar14 = FUN_ram_40019fb0(&uStack_44,iVar11);
      }
      if ((int)uVar14 < 0x3e9) {
        if ((int)uVar14 < 0) {
          uVar14 = 0;
        }
      }
      else {
        uVar14 = 1000;
      }
      if (uVar22 == uVar14) {
        return;
      }
      *(short *)((iVar10 + iVar9 * 0xc) * 2 + 0x30069ad4) = (short)uVar14;
      FUN_ram_4001b2ae((float)(int)uVar14 / DAT_ram_40093094,
                       (&PTR_DAT_ram_40093228_ram_400935ac)[iVar9],iVar10);
      if (DAT_ram_300696aa != '\0') {
        FUN_ram_4001ac0e(iVar9,uVar21);
      }
      iVar11 = _DAT_ram_30069db0;
      (&DAT_ram_30069db4)[iVar10 + iVar9 * 0xc] = 1;
      DAT_ram_30069e14 = (byte)(1 << (uVar21 & 0x1f)) | DAT_ram_30069e14;
      if (iVar11 != 0) {
        FUN_ram_4004b8a8(iVar11,0xc);
        FUN_ram_4004b8ca(_DAT_ram_30069db0,1);
        FUN_ram_4004b8ce(_DAT_ram_30069db0);
        return;
      }
      _DAT_ram_30069db0 = FUN_ram_4004b642(FUN_ram_4001d144,0xc,0);
      if (_DAT_ram_30069db0 == 0) {
        FUN_ram_4001cff4();
        return;
      }
      FUN_ram_4004b8ca(_DAT_ram_30069db0,1);
      return;
    }
    if (_DAT_ram_300696f8 == 0x66) {
      iVar9 = FUN_ram_4001a28e(_DAT_ram_300696fc);
      if (iVar9 < 0) {
        return;
      }
      cVar7 = *(char *)(iVar9 + 0x30069acc);
      bVar2 = 0 < (int)param_1;
      if (bVar2 == (bool)cVar7) {
        return;
      }
      FUN_ram_4001ad7a(iVar9,bVar2);
      if ((_DAT_ram_300696fc != 0) &&
         ((iVar10 = FUN_ram_40024ec6(), iVar10 == 0xff ||
          (iVar10 = FUN_ram_40023248(iVar10,bVar2), iVar10 != 0)))) {
        FUN_ram_4001ad7a(iVar9,cVar7);
        return;
      }
      uStack_44 = (undefined1)iVar9;
      uStack_43 = bVar2;
      FUN_ram_400137c6(0x61,&uStack_44,2);
      return;
    }
    if (_DAT_ram_300696f8 != 0x65) {
      if (_DAT_ram_300696f8 != 100) {
        return;
      }
      iVar9 = FUN_ram_4001a19a(_DAT_ram_300696fc);
      if (iVar9 == 0) {
        return;
      }
      if ((_DAT_ram_300696fc == 0) ||
         (iVar9 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_40093dc4,0x10), iVar9 != 0)) {
        if ((_DAT_ram_300696fc == 0) ||
           (iVar9 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_40093230,0x10), iVar9 != 0)) {
          bVar2 = false;
          if (_DAT_ram_300696fc != 0) {
            iVar9 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_40093228,0x10);
            bVar2 = iVar9 == 0;
          }
          bVar3 = false;
          if (_DAT_ram_300696fc != 0) {
            iVar9 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_4009322c,0x10);
            bVar3 = iVar9 == 0;
          }
          bVar4 = false;
          if (_DAT_ram_300696fc != 0) {
            iVar9 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_4009323c,0x10);
            bVar4 = iVar9 == 0;
          }
          bVar5 = false;
          if (_DAT_ram_300696fc != 0) {
            iVar9 = FUN_ram_40005208(_DAT_ram_300696fc,s_delay_ram_40093234,0x10);
            bVar5 = iVar9 == 0;
          }
          bVar6 = false;
          if (_DAT_ram_300696fc != 0) {
            iVar9 = FUN_ram_40005208(_DAT_ram_300696fc,s_reverb_ram_40093240,0x10);
            bVar6 = iVar9 == 0;
          }
          iVar9 = 4;
          if ((!bVar2) && (iVar9 = 0xc, !bVar3)) {
            if (bVar4) {
              iVar9 = FUN_ram_40024fb8(5);
            }
            else {
              iVar9 = 8;
              if (!(bool)(bVar5 | bVar6)) {
                if (_DAT_ram_300696fc != 0) {
                  iVar10 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_40093248,0x10);
                  iVar9 = 3;
                  if (iVar10 == 0) goto LAB_ram_4001e78a;
                }
                iVar9 = 1;
              }
            }
          }
LAB_ram_4001e78a:
          iVar10 = FUN_ram_4001a28e(_DAT_ram_300696fc);
          if (-1 < iVar10) {
            uVar21 = (uint)*(byte *)(iVar10 + 0x30069b94);
            if (bVar6) {
              iVar9 = FUN_ram_4001b3e2(uVar21);
              iVar9 = ((int)param_1 % 7 + iVar9) % 7;
              if (iVar9 < 0) {
                iVar9 = iVar9 + 7;
              }
              param_1 = (uint)(byte)(&DAT_ram_400935cc)[iVar9];
            }
            else if (bVar4) {
              iVar9 = FUN_ram_40024fb8(5);
              iVar11 = FUN_ram_40024fe8(5,uVar21);
              if (iVar9 != 0) {
                param_1 = (int)param_1 % iVar9;
              }
              if (iVar11 < 0) {
                iVar11 = 0;
              }
              param_1 = param_1 + iVar11;
              if (iVar9 != 0) {
                param_1 = (int)param_1 % iVar9;
              }
              if ((int)param_1 < 0) {
                param_1 = param_1 + iVar9;
              }
              param_1 = FUN_ram_40024fc6(5,param_1 & 0xff);
            }
            else {
              param_1 = param_1 + uVar21;
              if (iVar9 == 0) {
                param_1 = 0;
              }
              else {
                if (iVar9 != 0) {
                  param_1 = (int)param_1 % iVar9;
                }
                if ((int)param_1 < 0) {
                  param_1 = param_1 + iVar9;
                }
              }
            }
            iVar9 = _DAT_ram_300696fc;
            *(char *)(iVar10 + 0x30069b94) = (char)param_1;
            FUN_ram_4001b76e(iVar9);
            if ((int)DAT_ram_30046734 < 0) {
              DAT_ram_30046738 = uVar21;
            }
            DAT_ram_30046734 = param_1;
            FUN_ram_400051c2(&DAT_ram_30069e88,_DAT_ram_300696fc,0x10);
            if (_DAT_ram_30069e98 != 0) {
              FUN_ram_4004b8a8(_DAT_ram_30069e98,0x4b);
              FUN_ram_4004b8ca(_DAT_ram_30069e98,1);
              FUN_ram_4004b8ce(_DAT_ram_30069e98);
              return;
            }
            _DAT_ram_30069e98 = FUN_ram_4004b642(FUN_ram_4001e9d2,0x4b,0);
            if (_DAT_ram_30069e98 != 0) {
              FUN_ram_4004b8ca(_DAT_ram_30069e98,1);
              return;
            }
          }
          return;
        }
        pcVar20 = FUN_ram_4001adfc;
        uVar19 = 0x30069d88;
        puVar18 = &DAT_ram_30046728;
        puVar17 = &DAT_ram_30046720;
        pcVar16 = FUN_ram_4001a6e0;
        uVar1 = DAT_ram_30069ba0;
      }
      else {
        pcVar20 = (code *)&DAT_ram_4001ae18;
        uVar19 = 0x30069684;
        puVar18 = &DAT_ram_30046704;
        puVar17 = &DAT_ram_300466fc;
        pcVar16 = FUN_ram_4001b2e0;
        uVar1 = DAT_ram_3006941c;
      }
      FUN_ram_4001bd1e(param_1,uVar1,pcVar16,puVar17,puVar18,uVar19,pcVar20);
      return;
    }
    iVar9 = 0;
    do {
      if ((_DAT_ram_300696fc != 0) &&
         (iVar10 = FUN_ram_40005208(_DAT_ram_300696fc,(&PTR_DAT_ram_40093228_ram_400935ac)[iVar9],
                                    0x10), iVar10 == 0)) goto LAB_ram_4001e5ee;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 8);
    iVar9 = 0;
LAB_ram_4001e5ee:
    iVar9 = ((int)param_1 % 8 + iVar9) % 8;
    if (iVar9 < 0) {
      iVar9 = iVar9 + 8;
    }
    FUN_ram_4001e06e((&PTR_DAT_ram_40093228_ram_400935ac)[iVar9]);
    iVar10 = 0;
  }
  FUN_ram_4001bf4c(iVar10);
  return;
}


/* NanoCore 1.10, address 0x4001e982.
 * REA evidence: ev_88898618d1f9927290f8a5c3b555e1973c301bf295b62f23565c1025f2cca30c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001e982(void)

{
  FUN_ram_4001a266();
  FUN_ram_4001a244(&DAT_ram_30046714,&DAT_ram_30069a38);
  FUN_ram_4001a27a();
  FUN_ram_4001c22c();
  FUN_ram_4001ad48();
  if (DAT_ram_300696aa != '\0') {
    FUN_ram_4001e06e(_DAT_ram_300696fc);
    FUN_ram_4001cbfc();
    FUN_ram_4001b4ac();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001e9d2.
 * REA evidence: ev_f48b6303e7693385b4cb25b95580c8cf3840926463aa413184a9000d31f0bd8d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001e9d2(void)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 local_60 [7];
  
  uVar2 = DAT_ram_30046738;
  uVar3 = DAT_ram_30046734;
  _DAT_ram_30069e98 = 0;
  puVar4 = local_60;
  DAT_ram_30046734 = 0xffffffff;
  if (((-1 < (int)uVar3) && (DAT_ram_30069e88 != '\0')) &&
     (uVar5 = FUN_ram_4001a28e(&DAT_ram_30069e88), -1 < (int)uVar5)) {
    bVar1 = false;
    if ((DAT_ram_300696aa != '\0') && (_DAT_ram_300696fc != 0)) {
      iVar6 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_30069e88,0x10);
      bVar1 = iVar6 == 0;
    }
    uVar3 = uVar3 & 0xff;
    iVar6 = FUN_ram_40023302(uVar5,uVar3);
    if (iVar6 == 0) {
      memset(local_60,0,0x30);
      uVar3 = FUN_ram_40031d26(uVar5 & 0xff,uVar3,local_60,0xc);
      for (uVar7 = 0; (uVar7 & 0xff) < uVar3; uVar7 = uVar7 + 1) {
        if (bVar1) {
          FUN_ram_4001df1a(*puVar4,_DAT_ram_300696fc,uVar7);
        }
        FUN_ram_4001b2ae(*puVar4,&DAT_ram_30069e88,uVar7);
        FUN_ram_4001ab1a(uVar5,uVar7 & 0xff);
        puVar4 = (undefined8 *)((int)puVar4 + 4);
      }
      if (bVar1) {
        FUN_ram_4001b76e(_DAT_ram_300696fc);
        DAT_ram_300699cc = 0;
        DAT_ram_300699f4 = FUN_ram_4001e026(_DAT_ram_300696fc);
        FUN_ram_4001cbfc();
        return;
      }
    }
    else {
      *(char *)(uVar5 + 0x30069b94) = (char)uVar2;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4001eb16.
 * REA evidence: ev_f61c8ae6efc648975b515d6f45ecbec416f86c6d1f792c6b6470bbf4741f7251
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001eb16(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 local_50 [7];
  
  uVar3 = FUN_ram_4001a28e();
  if (-1 < (int)uVar3) {
    bVar1 = *(byte *)(uVar3 + 0x30069b94);
    uVar4 = FUN_ram_40024f3e(uVar3,param_2);
    *(char *)(uVar3 + 0x30069b94) = (char)uVar4;
    FUN_ram_400230be(uVar3,uVar4);
    if (bVar1 != uVar4) {
      memset(local_50,0,0x30);
      uVar4 = FUN_ram_40031d26(uVar3 & 0xff,uVar4,local_50,0xc);
      puVar2 = local_50;
      for (uVar3 = 0; (uVar3 & 0xff) < uVar4; uVar3 = uVar3 + 1) {
        FUN_ram_4001df1a(*puVar2,param_1,uVar3);
        puVar2 = (undefined8 *)((int)puVar2 + 4);
      }
    }
    if ((((DAT_ram_300696aa != '\0') && (_DAT_ram_300696fc != 0)) && (param_1 != 0)) &&
       (iVar5 = FUN_ram_40005208(_DAT_ram_300696fc,param_1,0x10), iVar5 == 0)) {
      FUN_ram_4001b76e(_DAT_ram_300696fc);
      DAT_ram_300699cc = 0;
      DAT_ram_300699f4 = FUN_ram_4001e026(_DAT_ram_300696fc);
      FUN_ram_4001cbfc();
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4001ebf0.
 * REA evidence: ev_894e8153153c4c9240e3a8d20d72d0c7ef16e2930530477dbac475cd15c2fd9e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_40024a3a(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0xff;
  }
  return;
}


/* NanoCore 1.10, address 0x4001ebf4.
 * REA evidence: ev_da1b4263cb98e04a60b98662d736a71f147f8fad9d959a0199d1b3df68ada87c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_40024a48(int *param_1,int param_2,uint param_3)

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


/* NanoCore 1.10, address 0x4001ebf8.
 * REA evidence: ev_8b33b50fcb1bf89e2ad7261b030caad79b9ac80b7d1da887c8e3c3224abb8eec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_40024ada(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40024a48();
  return iVar1 * 10;
}


/* NanoCore 1.10, address 0x4001ebfc.
 * REA evidence: ev_78e9fb203111d16a97736b804c7006be51089eba05d2cb97ff270590d381cf25
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40024b08) */

int thunk_FUN_ram_40024aee(int param_1)

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


/* NanoCore 1.10, address 0x4001ec00.
 * REA evidence: ev_e2487dc712d3af7ca714b2ac7afdf0e08b8c4d08152467b8b63dbeb2ada70774
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int thunk_FUN_ram_40024b16(int param_1)

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


/* NanoCore 1.10, address 0x4001ec04.
 * REA evidence: ev_1b0c94a1b1a8a389a435bf9abd08301110a363e525a1a38573b8af220725da89
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40024b4e) */

int thunk_FUN_ram_40024b5c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

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


/* NanoCore 1.10, address 0x4001ec08.
 * REA evidence: ev_4af129d1155897cd82820f4c072070d2bea0daec21170f73b77b2ccd4eab325b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ec08(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = thunk_FUN_ram_40022018();
  uVar2 = 0x3006a0b0;
  if (iVar1 != 0) {
    uVar2 = 0x3006a0f0;
  }
  FUN_ram_4001670a(_DAT_ram_3006a05c,uVar2);
  return;
}


/* NanoCore 1.10, address 0x4001ec32.
 * REA evidence: ev_74cc6bd57b2f6652254893ebb5d750a4cdb22bc9df878750549ba5be1f2937f2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ec32(void)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_ram_40022106();
  FUN_ram_400055ea(0x3006a004,0x10,&DAT_ram_400935d4,uVar1);
  FUN_ram_40017026(_DAT_ram_3006a014,0x3006a018,0x3006a004);
  return;
}


/* NanoCore 1.10, address 0x4001ec72.
 * REA evidence: ev_998a07c4af5492d8896824bf1c818d3779cde9e0593164854cb70a5e3ebf146a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ec72(void)

{
  FUN_ram_400055ea(0x30069f68,0x10,&DAT_ram_400937d8,&DAT_ram_400935d8);
  FUN_ram_40017026(_DAT_ram_30069f78,0x30069f7c,0x30069f68);
  return;
}


/* NanoCore 1.10, address 0x4001ecb4.
 * REA evidence: ev_96178021fb8da8885c52f4f4790831f808b392ce530f683a4d7691475342933c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ecb4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_40022186();
  FUN_ram_400055ea(0x3006a17c,8,&DAT_ram_40093380,uVar1);
  FUN_ram_40017026(_DAT_ram_3006a184,0x3006a188,0x3006a17c);
  return;
}


/* NanoCore 1.10, address 0x4001ecf4.
 * REA evidence: ev_73c9c7ce2c169dcc82b613114ef832b7650d470e5c35c003a9589d15205a5110
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ecf4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400221fc();
  FUN_ram_400055ea(0x30069f08,8,&DAT_ram_40093380,uVar1);
  FUN_ram_40017026(_DAT_ram_30069f10,0x30069f14,0x30069f08);
  return;
}


/* NanoCore 1.10, address 0x4001ed34.
 * REA evidence: ev_c5ec14e59674a9f8aea3bd3a72829cae897bd457ed51d427cd81ec2d7841deca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ed34(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_ram_400220ac();
  uVar2 = 0;
  if (uVar1 < 0x11) {
    uVar2 = uVar1;
  }
  FUN_ram_400055ea(0x3006a084,8,&DAT_ram_40093380,uVar2);
  FUN_ram_40017026(_DAT_ram_3006a08c,0x3006a090,0x3006a084);
  return;
}


/* NanoCore 1.10, address 0x4001ed7c.
 * REA evidence: ev_793ec04433f19dfb7dba21066948081f9e93a0f3c13b28e152f66f1720445774
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ed7c(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = _DAT_ram_30069f40;
  bVar1 = _DAT_ram_30069f40 != 0;
  uVar5 = 0;
  if (_DAT_ram_30069f40 != 0) {
    uVar5 = FUN_ram_4002c462();
  }
  uVar5 = uVar5 & 1;
  FUN_ram_400171b6(_DAT_ram_3006a134,0x3006a138,bVar1);
  FUN_ram_400171b6(_DAT_ram_3006a038,0x3006a03c,bVar1);
  FUN_ram_400171b6(_DAT_ram_30069fe0,0x30069fe4,bVar1);
  FUN_ram_400171b6(_DAT_ram_3006a014,0x3006a018,bVar1);
  FUN_ram_400171b6(_DAT_ram_3006a158,0x3006a15c,bVar1);
  FUN_ram_400171b6(_DAT_ram_3006a184,0x3006a188,bVar1);
  FUN_ram_400171b6(_DAT_ram_30069ee4,0x30069ee8,bVar1);
  FUN_ram_400171b6(_DAT_ram_30069f10,0x30069f14,bVar1);
  FUN_ram_400171b6(_DAT_ram_3006a060,0x3006a064,bVar1);
  FUN_ram_400171b6(_DAT_ram_3006a08c,0x3006a090,bVar1);
  FUN_ram_400171b6(_DAT_ram_30069f44,0x30069f48,bVar1);
  FUN_ram_400171b6(_DAT_ram_30069f78,0x30069f7c,bVar1);
  FUN_ram_400171ae(0x3006a138,uVar5);
  FUN_ram_400171ae(0x3006a03c,uVar5);
  FUN_ram_400171ae(0x30069fe4,uVar5);
  FUN_ram_400171ae(0x3006a018,uVar5);
  FUN_ram_400171ae(0x3006a15c,uVar5);
  FUN_ram_400171ae(0x3006a188,uVar5);
  FUN_ram_400171ae(0x30069ee8,uVar5);
  FUN_ram_400171ae(0x30069f14,uVar5);
  FUN_ram_400171ae(0x3006a064,uVar5);
  FUN_ram_400171ae(0x3006a090,uVar5);
  FUN_ram_400171ae(0x30069f48,uVar5);
  FUN_ram_400171ae(0x30069f7c,uVar5);
  if (((((iVar2 != 0) && (_DAT_ram_3006a134 != 0)) && (_DAT_ram_3006a038 != 0)) &&
      (((_DAT_ram_30069fe0 != 0 && (_DAT_ram_3006a014 != 0)) &&
       ((_DAT_ram_3006a158 != 0 && ((_DAT_ram_3006a184 != 0 && (_DAT_ram_30069ee4 != 0)))))))) &&
     ((_DAT_ram_30069f10 != 0 &&
      ((((_DAT_ram_3006a060 != 0 && (_DAT_ram_3006a08c != 0)) && (_DAT_ram_30069f44 != 0)) &&
       (_DAT_ram_30069f78 != 0)))))) {
    FUN_ram_40047a74(_DAT_ram_3006a134,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006a138);
      if (iVar6 != 0) {
        FUN_ram_40047a74(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40047a74(_DAT_ram_3006a038,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006a03c);
      if (iVar6 != 0) {
        FUN_ram_40047a74(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40047a74(_DAT_ram_30069fe0,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x30069fe4);
      if (iVar6 != 0) {
        FUN_ram_40047a74(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40047a74(_DAT_ram_3006a014,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006a018);
      if (iVar6 != 0) {
        FUN_ram_40047a74(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40047a74(_DAT_ram_3006a158,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006a15c);
      if (iVar6 != 0) {
        FUN_ram_40047a74(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40047a74(_DAT_ram_3006a184,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006a188);
      if (iVar6 != 0) {
        FUN_ram_40047a74(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40047a74(_DAT_ram_30069ee4,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x30069ee8);
      if (iVar6 != 0) {
        FUN_ram_40047a74(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40047a74(_DAT_ram_30069f10,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x30069f14);
      if (iVar6 != 0) {
        FUN_ram_40047a74(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40047a74(_DAT_ram_3006a060,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006a064);
      if (iVar6 != 0) {
        FUN_ram_40047a74(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40047a74(_DAT_ram_3006a08c,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x3006a090);
      if (iVar6 != 0) {
        FUN_ram_40047a74(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40047a74(_DAT_ram_30069f44,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x30069f48);
      if (iVar6 != 0) {
        FUN_ram_40047a74(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_ram_40047a74(_DAT_ram_30069f78,iVar2,0);
    iVar4 = 0;
    do {
      iVar6 = *(int *)(iVar4 * 4 + 0x30069f7c);
      if (iVar6 != 0) {
        FUN_ram_40047a74(iVar6,iVar2,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
    FUN_ram_40043ffe(_DAT_ram_3006a134,uVar3);
    FUN_ram_40045054(_DAT_ram_3006a134,_DAT_ram_30069f9c,0x14,8,0);
    FUN_ram_40016fb2(_DAT_ram_3006a134,0x3006a138);
    FUN_ram_40043ffe(_DAT_ram_3006a038,uVar3);
    FUN_ram_40045054(_DAT_ram_3006a038,_DAT_ram_3006a05c,0x11,0xfffffff8,0);
    FUN_ram_40016fb2(_DAT_ram_3006a038,0x3006a03c);
    FUN_ram_40043ffe(_DAT_ram_30069fe0,uVar3);
    FUN_ram_40045054(_DAT_ram_30069fe0,_DAT_ram_3006a014,0x11,0xfffffff8,0);
    FUN_ram_40016fb2(_DAT_ram_30069fe0,0x30069fe4);
    FUN_ram_40044038(_DAT_ram_3006a014,0x2d,0x17);
    FUN_ram_40016fb2(_DAT_ram_3006a014,0x3006a018);
    FUN_ram_40043ffe(_DAT_ram_3006a158,uVar3);
    FUN_ram_40045054(_DAT_ram_3006a158,_DAT_ram_3006a184,0x11,0xfffffff8,0);
    FUN_ram_40016fb2(_DAT_ram_3006a158,0x3006a15c);
    FUN_ram_40044038(_DAT_ram_3006a184,0x2d,0x17);
    FUN_ram_40016fb2(_DAT_ram_3006a184,0x3006a188);
    FUN_ram_40043ffe(_DAT_ram_30069ee4,uVar3);
    FUN_ram_40045054(_DAT_ram_30069ee4,_DAT_ram_30069f10,0x11,0xfffffff8,0);
    FUN_ram_40016fb2(_DAT_ram_30069ee4,0x30069ee8);
    FUN_ram_40044038(_DAT_ram_30069f10,0x2d,0x17);
    FUN_ram_40016fb2(_DAT_ram_30069f10,0x30069f14);
    FUN_ram_40043ffe(_DAT_ram_3006a060,uVar3);
    FUN_ram_40045054(_DAT_ram_3006a060,_DAT_ram_3006a08c,0x11,0xfffffff8,0);
    FUN_ram_40016fb2(_DAT_ram_3006a060,0x3006a064);
    FUN_ram_40044038(_DAT_ram_3006a08c,0x2d,0x17);
    FUN_ram_40016fb2(_DAT_ram_3006a08c,0x3006a090);
    FUN_ram_40043ffe(_DAT_ram_30069f44,uVar3);
    FUN_ram_40045054(_DAT_ram_30069f44,_DAT_ram_30069f78,0x11,0xfffffff8,0);
    FUN_ram_40016fb2(_DAT_ram_30069f44,0x30069f48);
    FUN_ram_40044038(_DAT_ram_30069f78,0x2d,0x17);
    FUN_ram_40016fb2(_DAT_ram_30069f78,0x30069f7c);
    return;
  }
  return;
}


