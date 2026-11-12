/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40010000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40010020.
 * REA evidence: ev_6bd318d552d1a97a8b1fcc617557a267730f16cde86ac76300bfba1e9418b363
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40010020(void)

{
  return;
}


/* NanoCore 1.12, address 0x40010022.
 * REA evidence: ev_82721b3dbcaa707f87c91f6d3916b00053c021bfa310fb4591a218c9fb4d6bf9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40010022(void)

{
  return 0;
}


/* NanoCore 1.12, address 0x40010026.
 * REA evidence: ev_f8dcfb882b71e9feb667743e0fcecfbd46be011b344ac0f6aceedb744c7c353a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40010026(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 auStack_24 [4];
  
  auStack_24[0] = 0;
  uVar1 = *(undefined1 *)(param_1 + 4);
  if (*(char *)(param_1 + 3) == '\x01') {
    if (*(char *)(param_1 + 1) == '\x01') {
      FUN_ram_4000303c(auStack_24,*param_2,*param_3);
      FUN_ram_40010020(uVar1,auStack_24[0]);
    }
    else {
      if (3 < (byte)(*(char *)(param_1 + 1) + 0x7fU)) {
        return 0;
      }
      auStack_24[0] = FUN_ram_40010022(uVar1);
      FUN_ram_4000303c(*param_2,auStack_24,3);
      *param_3 = 3;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4001009c.
 * REA evidence: ev_27af9f2fb5b735f39e2ef91a5f246a5b943dec21f41d39ab240fcdc9a61584df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001009c(void)

{
  return;
}


/* NanoCore 1.12, address 0x4001009e.
 * REA evidence: ev_1d2801c743f5834add473cb3f064cef17cae25c0064ec40006c3f93b3088d8c7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40010252) */
/* WARNING: Removing unreachable block (ram,0x4001018c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001009e(char *param_1,int *param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  char *pcVar7;
  char cVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined2 *puVar11;
  int iVar12;
  ushort uVar13;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = 0;
  cVar1 = param_1[3];
  cVar2 = param_1[5];
  cVar8 = '\0';
  pcVar7 = _DAT_ram_3005e020;
  do {
    if (DAT_ram_3005e024 == cVar8) {
LAB_ram_400100fc:
      FUN_ram_4003390a(&DAT_ram_400998a8);
      FUN_ram_4003390a(s_Do_not_find_subtype_for_0x_02x_ram_400999ac,cVar2);
      FUN_ram_4003390a(&DAT_ram_400998cc);
      return 0xffffffff;
    }
    if (pcVar7[1] == cVar2) {
      cVar8 = *pcVar7;
      cVar3 = pcVar7[2];
      if (cVar8 != '\x01') {
        if (cVar8 == '\x06') {
          uVar13 = *(ushort *)(param_1 + 2) & 0xff;
          if (cVar1 == '\x01') {
            cVar1 = param_1[1];
            if (_DAT_ram_3005e026 < 0x200) {
              if (cVar1 == '\x01') {
LAB_ram_400101e4:
                FUN_ram_400114b8(cVar3,uVar13,*(char *)*param_2 != '\0');
                return 0;
              }
              if (cVar1 != -0x7f) {
                return 0xffffffff;
              }
            }
            else {
              if (cVar1 != '\x01') {
                return 0xffffffff;
              }
              if (-1 < *param_1) goto LAB_ram_400101e4;
            }
            uVar5 = FUN_ram_400114da(cVar3,uVar13);
            *(undefined1 *)*param_2 = uVar5;
            *param_3 = 1;
            return 0;
          }
          if (cVar1 != '\x02') {
            return 0xffffffff;
          }
          bVar4 = param_1[1];
          if (_DAT_ram_3005e026 < 0x200) {
            if (bVar4 != 0x82) {
              if (bVar4 < 0x83) {
                if (bVar4 == 1) {
                  FUN_ram_4000303c(&uStack_24,*param_2,*param_3);
                  uVar10 = (uint)uStack_24 & 0xffff;
                  if (0 < (short)uStack_24) {
                    uVar10 = 0;
                  }
                  if ((short)uVar10 < -0x2500) {
                    uVar10 = 0xffffdb00;
                  }
                  uVar10 = (((int)((uVar10 + 0x2500) * 0x10000) >> 0x10) * 0xff) / 0x2500;
                  goto LAB_ram_40010256;
                }
                if (bVar4 != 0x81) {
                  return 0xffffffff;
                }
                iVar12 = FUN_ram_40011490(cVar3,uVar13);
                iVar12 = (iVar12 * 0x2500) / 0xff + -0x2500;
                puVar9 = (undefined1 *)*param_2;
                uVar5 = (undefined1)((uint)iVar12 >> 8);
                *puVar9 = (char)iVar12;
LAB_ram_400101a0:
                puVar9[1] = uVar5;
              }
              else {
                if (bVar4 != 0x83) {
                  if (bVar4 != 0x84) {
                    return 0xffffffff;
                  }
                  uVar5 = 1;
                  *(undefined1 *)*param_2 = 0;
                  puVar9 = (undefined1 *)*param_2;
                  goto LAB_ram_400101a0;
                }
                *(undefined1 *)*param_2 = 0;
                *(undefined1 *)(*param_2 + 1) = 0;
              }
              iVar12 = 2;
              goto LAB_ram_40010284;
            }
            uStack_24._1_1_ = 0xdb;
            *(undefined1 *)*param_2 = 0;
            puVar9 = (undefined1 *)*param_2;
          }
          else {
            if (bVar4 != 1) {
              if (bVar4 != 2) {
                return 0xffffffff;
              }
              if (*param_1 < '\0') {
                puVar11 = (undefined2 *)*param_2;
                *puVar11 = 1;
                puVar11[1] = 0;
                puVar11[2] = 100;
                puVar11[3] = 1;
                *param_3 = 8;
                return 0;
              }
              return 0;
            }
            if (-1 < *param_1) {
              FUN_ram_4000303c(&uStack_24,*param_2,*param_3);
              uVar10 = (uint)uStack_24 & 0xffff;
LAB_ram_40010256:
              FUN_ram_4001146e(cVar3,uVar13,uVar10);
              return 0;
            }
            uVar6 = FUN_ram_40011490(cVar3,uVar13);
            puVar9 = (undefined1 *)*param_2;
            *puVar9 = (char)uVar6;
            uStack_24._1_1_ = (undefined1)((ushort)uVar6 >> 8);
          }
          puVar9[1] = uStack_24._1_1_;
          *param_3 = 2;
        }
        else {
          if (cVar8 != '\n') {
            return 0;
          }
          if (cVar1 != '\x01') {
            if (cVar1 != '\x02') {
              return 0xffffffff;
            }
            if (*param_1 < '\0') {
              *(undefined1 *)*param_2 = 1;
              *param_3 = 1;
              return 0;
            }
            return 0xffffffff;
          }
          if (param_1[1] != '\x01') {
            if (param_1[1] != '\x02') {
              return 0xffffffff;
            }
            if (*param_1 < '\0') {
              uStack_24 = (ushort *)0x0;
              FUN_ram_4001009c(cVar3,&uStack_24);
              iVar12 = (uint)*uStack_24 * 0xc + 2;
              FUN_ram_4000303c(*param_2,uStack_24,iVar12);
              *param_3 = iVar12;
              return 0;
            }
            return 0;
          }
          if (-1 < *param_1) {
            FUN_ram_4000303c(&uStack_28,*param_2,*(undefined2 *)(param_1 + 6));
            FUN_ram_40010020(cVar3,uStack_28);
            return 0;
          }
          uStack_28 = FUN_ram_40010022(cVar3);
          FUN_ram_4000303c(*param_2,&uStack_28,4);
          iVar12 = 4;
LAB_ram_40010284:
          *param_3 = iVar12;
        }
        return 0;
      }
      goto LAB_ram_400100fc;
    }
    cVar8 = cVar8 + '\x01';
    pcVar7 = pcVar7 + 3;
  } while( true );
}


/* NanoCore 1.12, address 0x400103a4.
 * REA evidence: ev_9d9beeac1a8af43752416360f82b87d68c25eb907f958f14abc2a5d918606304
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400103a4(void)

{
  FUN_ram_400002f4();
  _DAT_ram_3005ecd4 = 0;
  _DAT_ram_3005ecd8 = 0;
  _DAT_ram_3005ecd0 = 0;
  DAT_ram_3004acc4 = 0xffffffff;
  _DAT_ram_3005eccc = 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x400103de.
 * REA evidence: ev_28fff952fffd4de24c086f2bfdb18f3cb9b8fc57f59e46a5eb40132ddb7900b4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400103de(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40004d36();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40006382(), iVar1 != 0)) {
    FUN_ram_400064e4(1);
    return;
  }
  thunk_FUN_ram_4004004c(1000);
  return;
}


/* NanoCore 1.12, address 0x40010404.
 * REA evidence: ev_2e4cedfe251cbaa1569d50cff970751991db750156625f02876b4c98c6f1a1f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40010404(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)DAT_ram_3005ee22;
  uVar3 = 1 - uVar4;
  DAT_ram_3005ee22 = (byte)uVar3;
  FUN_ram_400127ce(2,(uVar3 & 0xff) * 0xc0 + 0x3005ee40,0xb8);
  _DAT_ram_3005ecd4 = _DAT_ram_3005ecd4 + 1;
  if (param_2 == 0) {
    _DAT_ram_3005ecd8 = _DAT_ram_3005ecd8 + 1;
  }
  else {
    DAT_ram_3005ecca = 1;
    _DAT_ram_3005ecd0 = _DAT_ram_3005ecd0 + param_2;
    if (param_2 < DAT_ram_3004acc4) {
      DAT_ram_3004acc4 = param_2;
    }
    if (_DAT_ram_3005eccc < param_2) {
      _DAT_ram_3005eccc = param_2;
    }
    iVar1 = uVar4 * 0xc0 + 0x3005ee40;
    FUN_ram_4000e6e8(iVar1,param_2);
    iVar2 = thunk_FUN_ram_40022920();
    if ((iVar2 != 0) && (param_2 >> 1 != 0)) {
      FUN_ram_400002f4();
      uVar3 = 0;
      do {
        *(undefined2 *)(_DAT_ram_3005ecc4 * 2 + 0x3005e704) = *(undefined2 *)(iVar1 + uVar3 * 2);
        _DAT_ram_3005ecc4 = _DAT_ram_3005ecc4 + 1;
        if (0x2df < _DAT_ram_3005ecc4) {
          _DAT_ram_3005ecc4 = 0;
        }
        if (_DAT_ram_3005ecc4 == _DAT_ram_3005e700) {
          _DAT_ram_3005e700 = _DAT_ram_3005e700 + 1;
          if (0x2df < _DAT_ram_3005e700) {
            _DAT_ram_3005e700 = 0;
          }
        }
        uVar3 = uVar3 + 1;
      } while (param_2 >> 1 != uVar3);
      FUN_ram_400002fa();
      return;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40010534.
 * REA evidence: ev_64fa159654fbe190b933badec9bb75385a5fc358462fab9c380b59080ed85f9c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40010534(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xf0;
  if (uVar1 != 0xd0) {
    if (uVar1 == 0xf0) {
      if ((param_1 & 0xfd) == 0xf1) {
        return 2;
      }
      if (param_1 != 0xf2) {
        return 1;
      }
      return 3;
    }
    if (uVar1 != 0xc0) {
      return 3;
    }
  }
  return 2;
}


/* NanoCore 1.12, address 0x40010574.
 * REA evidence: ev_67370f4feb90df237729ef4a0c56865cccb537bbdbcd71413a8e1f8c27f2c8d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40010574(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x7d1;
  while( true ) {
    if ((DAT_ram_3005e0dc == '\0') || (DAT_ram_3005ecc8 != '\0')) {
      return -1;
    }
    iVar2 = FUN_ram_4001236c(0x83,param_1,param_2);
    if (iVar2 == 0) {
      return 0;
    }
    if (1 < iVar2 + 3U) break;
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) {
      return iVar2;
    }
    FUN_ram_400103de();
  }
  return iVar2;
}


/* NanoCore 1.12, address 0x400105e6.
 * REA evidence: ev_25f3b33db651d8d5feb870db3b9605dca388cd46d6b4dadb8036f9cf2f5689e6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400105e6(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  
  DAT_ram_3005e02a = 0;
  if (DAT_ram_3005efc1 != '\0') {
    uVar2 = FUN_ram_4000dc50(0x3005f0e0,0xb8);
    iVar3 = thunk_FUN_ram_40022920();
    if ((iVar3 != 0) && (uVar1 = (uVar2 & 0x1ffff) >> 1, uVar1 != 0)) {
      iVar3 = FUN_ram_40022a98();
      FUN_ram_400002f4();
      uVar5 = 0;
      do {
        if (_DAT_ram_3005e700 != _DAT_ram_3005ecc4) {
          iVar6 = _DAT_ram_3005e700 * 2;
          _DAT_ram_3005e700 = _DAT_ram_3005e700 + 1;
          if (0x2df < _DAT_ram_3005e700) {
            _DAT_ram_3005e700 = 0;
          }
          if (0 < iVar3) {
            iVar6 = (*(short *)(iVar6 + 0x3005e704) * iVar3 >> 0x11) +
                    (int)*(short *)(uVar5 * 2 + 0x3005f0e0);
            uVar4 = 0x7fff;
            if ((iVar6 < 0x8000) && (uVar4 = 0x8000, -0x8001 < iVar6)) {
              uVar4 = (undefined2)((uint)(iVar6 * 0x10000) >> 0x10);
            }
            *(undefined2 *)(uVar5 * 2 + 0x3005f0e0) = uVar4;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
      FUN_ram_400002fa();
    }
    DAT_ram_3005e02a = 1;
    FUN_ram_4001211a(0x81,0x3005f0e0,uVar2,0);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400106d4.
 * REA evidence: ev_8ad5e632377de4edbb102f4038ebfa841ac539552cfd9cc20f21548afdbc2b60
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400106d4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_40004346();
  if ((DAT_ram_3005e0dc != '\0') && ((DAT_ram_3005e0c4 == '\0' || (param_1 != 0)))) {
    _DAT_ram_3005e0d4 = uVar1;
    _DAT_ram_3005e0d0 = FUN_ram_400127ce(3,0x3005ed80,0x40);
    if (_DAT_ram_3005e0d0 == 0) {
      DAT_ram_3005e0c4 = '\x01';
      _DAT_ram_3005e0d8 = _DAT_ram_3005e0d8 + 1;
    }
    else {
      DAT_ram_3005e0c4 = '\0';
      _DAT_ram_3005e0cc = _DAT_ram_3005e0cc + 1;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4001075c.
 * REA evidence: ev_dd544604473a9b265f0cf24a65ec0f3f2879edc08a1b913ceeea8c22a5e100ca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001075c(void)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_1c [4];
  
  if (DAT_ram_3005ee21 != '\0') {
    if (DAT_ram_3005edc0 == '\0') {
      DAT_ram_3005ee21 = '\0';
      FUN_ram_4000303c(auStack_1c,&DAT_ram_400999d4,0xc);
      DAT_ram_3005edc0 = '\x01';
      iVar1 = FUN_ram_40010574(auStack_1c,0xc);
      if (iVar1 < 0) {
        DAT_ram_3005edc0 = '\0';
        DAT_ram_3005ee21 = '\x01';
      }
    }
    else {
      DAT_ram_3005ee21 = '\x01';
    }
  }
  if (DAT_ram_3005e028 != '\0') {
    DAT_ram_3005e028 = 0;
    iVar1 = FUN_ram_400044c2(&DAT_ram_400999d0);
    auStack_1c[0] = 0;
    FUN_ram_4003f6b6(0);
    FUN_ram_4003f702(0);
    FUN_ram_4003ecd0(5);
    if (iVar1 != 0) {
      FUN_ram_4000450c(iVar1);
      FUN_ram_40004650(iVar1,0x1c02,auStack_1c);
      FUN_ram_40004650(iVar1,0x1c05,0);
      FUN_ram_400064e4(1000);
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((DAT_ram_3005e0dc != '\0') && (DAT_ram_3005e0c4 == '\0')) {
    iVar1 = FUN_ram_40004346();
    iVar2 = FUN_ram_400043ae(100);
    if ((iVar2 == 0) || (iVar2 <= iVar1 - _DAT_ram_3005e0d4)) {
      FUN_ram_400106d4(0);
      return;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40010880.
 * REA evidence: ev_69a10d9585c6213bfb83b2ad54abb06cee2dd3848a100febabb6cb164144876f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40010880(void)

{
  do {
    FUN_ram_4001075c();
    FUN_ram_400064e4(0x14);
  } while( true );
}


/* NanoCore 1.12, address 0x40010a1c.
 * REA evidence: ev_e175262763588a42ff352766c663aa9e8a8708cb42def18744555fcb9ac53448
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40010a1c(void)

{
  DAT_ram_3005edc0 = 0;
  _DAT_ram_3005f0c4 = _DAT_ram_3005f0c6;
  DAT_ram_3005ee21 = 0;
  _DAT_ram_3005e6e0 = 0;
  _DAT_ram_3005e6e2 = 0;
  DAT_ram_3005efc2 = 0;
  DAT_ram_3005e6ec = 0;
  return;
}


/* NanoCore 1.12, address 0x40010b68.
 * REA evidence: ev_f4f09edd3bb31eb7940612ac036809385f3219ddf94e6a9fe6e89e79cb393b84
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40010b3a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_40010b68(uint param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  ushort uVar11;
  byte bVar12;
  byte bVar13;
  undefined8 uVar14;
  
  while (DAT_ram_3005edc0 = 0, DAT_ram_3005e6ec != '\0') {
    uVar14 = CONCAT44(param_2,1);
    if ((DAT_ram_3005e0dc == '\0') || (DAT_ram_3005ecc8 != '\0')) {
      uVar5 = FUN_ram_40010a1c(1,param_2);
      return uVar5;
    }
    if (DAT_ram_3005e6ec == '\0') {
      return 1;
    }
    if (_DAT_ram_3005e6e2 < _DAT_ram_3005e6e0) {
      uVar11 = _DAT_ram_3005e6e0 - _DAT_ram_3005e6e2;
      if (0x40 < uVar11) {
        uVar11 = 0x40;
      }
      DAT_ram_3005edc0 = 1;
      uVar14 = FUN_ram_4001236c(0x83,_DAT_ram_3005e6e2 + 0x3005e0e0,uVar11);
      if (-1 < (int)(uint)uVar14) {
        _DAT_ram_3005e6e2 = uVar11 + _DAT_ram_3005e6e2;
        return (uint)uVar14;
      }
      _DAT_ram_3005e6e8 = _DAT_ram_3005e6e8 + 1;
    }
    DAT_ram_3005edc0 = 0;
    _DAT_ram_3005e6e0 = 0;
    _DAT_ram_3005e6e2 = 0;
    DAT_ram_3005e6ec = '\0';
    if ((DAT_ram_3005e0dc == '\0') || (DAT_ram_3005ecc8 != '\0')) {
      uVar5 = FUN_ram_40010a1c((uint)uVar14,(int)((ulonglong)uVar14 >> 0x20));
      return uVar5;
    }
    if (_DAT_ram_3005f0c4 == _DAT_ram_3005f0c6) {
      return (uint)uVar14;
    }
    param_2 = 0;
    param_1 = 0x83;
  }
  uVar9 = (uint)_DAT_ram_3005f0c6;
  uVar5 = (uint)_DAT_ram_3005f0c4;
  bVar4 = false;
  bVar3 = false;
  uVar8 = 0;
  bVar13 = DAT_ram_3005efc2;
  do {
    if (uVar9 == uVar5) {
      if (bVar3) {
        DAT_ram_3005efc2 = bVar13;
      }
      if (bVar4) {
        _DAT_ram_3005f0c4 = (ushort)uVar5;
      }
      if (uVar8 == 0) {
        return param_1;
      }
LAB_ram_40010c0c:
      DAT_ram_3005edc0 = 1;
      uVar5 = FUN_ram_4001236c(0x83,0x3005ede0);
      return uVar5;
    }
    if (0x3b < uVar8) {
      if (bVar3) {
        DAT_ram_3005efc2 = bVar13;
      }
      if (bVar4) {
        _DAT_ram_3005f0c4 = (ushort)uVar5;
      }
      goto LAB_ram_40010c0c;
    }
    bVar12 = *(byte *)(uVar5 + 0x3005efc4);
    if ((char)bVar12 < '\0') {
      uVar5 = uVar5 + 1 & 0xffff;
      if (0xff < uVar5) {
        uVar5 = 0;
      }
      bVar13 = bVar12;
      if (0xef < bVar12) {
        bVar13 = 0;
      }
      bVar4 = true;
      bVar3 = true;
LAB_ram_40010ca6:
      bVar10 = bVar12 & 0xf0;
      uVar6 = 0xc;
      if (bVar10 != 0xc0) {
        if (bVar10 < 0xc1) {
          uVar6 = 10;
          if (bVar10 != 0xa0) {
            if (bVar10 < 0xa1) {
              uVar6 = 8;
              if (bVar10 == 0x80) goto LAB_ram_40010cf2;
              bVar7 = 0x90;
              uVar6 = 9;
            }
            else {
              bVar7 = 0xb0;
              uVar6 = 0xb;
            }
            if (bVar10 != bVar7) {
LAB_ram_40010cd6:
              uVar6 = 0;
            }
          }
        }
        else {
          uVar6 = 0xe;
          if (bVar10 != 0xe0) {
            if (bVar10 == 0xf0) {
              uVar6 = 4;
              if ((((bVar12 != 0xf0) && (uVar6 = 2, bVar12 != 0xf1)) && (uVar6 = 3, bVar12 != 0xf2))
                 && ((uVar6 = 2, bVar12 != 0xf3 && (uVar6 = 0xf, bVar12 == 0xf6)))) {
                uVar6 = 5;
              }
            }
            else {
              uVar6 = 0xd;
              if (bVar10 != 0xd0) goto LAB_ram_40010cd6;
            }
          }
        }
      }
LAB_ram_40010cf2:
      param_1 = FUN_ram_40010534(bVar12);
      *(undefined1 *)(uVar8 + 0x3005ede0) = uVar6;
      *(byte *)(uVar8 + 0x3005ede1) = bVar12;
      if (param_1 < 2) {
        *(undefined1 *)(uVar8 + 0x3005ede2) = 0;
LAB_ram_40010d96:
        *(undefined1 *)(uVar8 + 0x3005ede3) = 0;
        uVar8 = uVar8 + 4 & 0xff;
      }
      else {
        puVar1 = (undefined1 *)(uVar5 + 0x3005efc4);
        uVar5 = uVar5 + 1 & 0xffff;
        *(undefined1 *)(uVar8 + 0x3005ede2) = *puVar1;
        if (0xff < uVar5) {
          uVar5 = 0;
        }
        if (param_1 == 2) {
          bVar4 = true;
          goto LAB_ram_40010d96;
        }
        pbVar2 = (byte *)(uVar5 + 0x3005efc4);
        param_1 = (uint)*pbVar2;
        uVar5 = uVar5 + 1 & 0xffff;
        *(byte *)(uVar8 + 0x3005ede3) = *pbVar2;
        uVar8 = uVar8 + 4 & 0xff;
        bVar4 = true;
        if (uVar5 == 0x100) {
LAB_ram_40010dbc:
          bVar4 = true;
          uVar5 = 0;
        }
      }
    }
    else {
      bVar12 = bVar13;
      if (bVar13 != 0) goto LAB_ram_40010ca6;
      uVar5 = uVar5 + 1 & 0xffff;
      bVar4 = true;
      if (0xff < uVar5) goto LAB_ram_40010dbc;
    }
  } while( true );
}


