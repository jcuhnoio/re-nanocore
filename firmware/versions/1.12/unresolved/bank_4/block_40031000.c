/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40031000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400310bc.
 * REA evidence: ev_8a2ad74743675a85481a0fa3a6b2ba76463eb7fd7b909f6917177148f06932bb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400310bc(void)

{
  if (_DAT_ram_3007b5a8 != 0) {
    FUN_ram_40004b14(0x3007b57c);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400310d4.
 * REA evidence: ev_c88bb0afddccc8200810351d6d434747fb9c3668e2722361b46dab52636773af
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400310d4(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = 0;
    while( true ) {
      if (param_2 == iVar1) {
        return 1;
      }
      if (*(char *)(param_1 + iVar1) != -1) break;
      iVar1 = iVar1 + 1;
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x400310f4.
 * REA evidence: ev_4d09f08f15d328eff8b0e27fd81dfe5fda91d9e56d12553a8c3c0d5532bdc9da
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400310f4(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_ram_400310d4(param_1,0x18);
    iVar2 = 1;
    if (iVar1 == 0) {
      iVar2 = 1 - (*(byte *)(param_1 + 6) & 1);
    }
    return iVar2;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40031120.
 * REA evidence: ev_65e96f006780f928e229ecf23ba16e4dbb91d3f84f7adb95ba9d2f3419a36d99
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40031120(int *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0;
  }
  iVar4 = FUN_ram_40030c08();
  if ((iVar4 != 0) && (iVar4 = FUN_ram_40007450(0,param_2,(short)param_1[1]), iVar4 == *param_1)) {
    uVar11 = (uint)*(ushort *)(param_1 + 1);
    iVar4 = FUN_ram_400310d4(param_2 + uVar11,0x400 - uVar11);
    if (iVar4 != 0) {
      uVar5 = 0;
      bVar3 = false;
      bVar2 = false;
      bVar10 = false;
      uVar8 = 0;
      while (uVar9 = uVar8 + 2, uVar9 <= uVar11) {
        bVar1 = *(byte *)(param_2 + uVar8);
        uVar6 = (uint)*(byte *)(uVar8 + param_2 + 1);
        uVar8 = uVar6 + uVar9;
        if (uVar11 < uVar8) {
          return 0;
        }
        if (bVar1 == 3) {
          if (bVar3) {
            return 0;
          }
          if (uVar6 != 8) {
            return 0;
          }
          bVar3 = true;
        }
        else if (bVar1 < 4) {
          if (bVar1 == 1) {
            if (bVar10) {
              return 0;
            }
            if (uVar6 != 2) {
              return 0;
            }
            bVar10 = true;
          }
          else if (bVar1 == 2) {
            if (bVar2) {
              return 0;
            }
            if (uVar6 != 0x10) {
              return 0;
            }
            bVar2 = true;
          }
        }
        else if (bVar1 == 0x10) {
          if (uVar6 < 5) {
            return 0;
          }
          uVar7 = (uint)*(byte *)(param_2 + uVar9 + 4);
          if (7 < *(byte *)(param_2 + uVar9)) {
            return 0;
          }
          uVar9 = 1 << (*(byte *)(param_2 + uVar9) & 0x1f);
          if ((uVar9 & uVar5) != 0) {
            return 0;
          }
          if (0xc < uVar7) {
            return 0;
          }
          if (uVar6 != ((uVar7 + 1) * 5 & 0xff)) {
            return 0;
          }
          uVar5 = uVar9 & 0xffff | uVar5;
        }
      }
      if ((((uVar11 == uVar8) && (bVar10)) && (bVar2)) &&
         (((bVar3 && (uVar5 == 0xff)) &&
          (iVar4 = FUN_ram_40015656(param_3,param_2,uVar11), iVar4 == 0)))) {
        FUN_ram_4000303c(param_4,param_1,0x18);
        FUN_ram_4000303c(param_4 + 8,param_3 + 2,0x10);
        return 1;
      }
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4003129c.
 * REA evidence: ev_e54b41270b37e0879a34c23476568171034becf73de2552d39836d1eb36239d4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003129c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + iVar1) != '\0') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (param_2 != iVar1);
  return 1;
}


/* NanoCore 1.12, address 0x400312b2.
 * REA evidence: ev_f55da08df3b75b4c3f963c67521aae85b7f19ee0102a68a416909c4f1805b509
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400312b2(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + iVar1) != *(char *)(param_2 + iVar1)) {
      do {
        if (*(char *)(param_1 + iVar1) != -1) {
          return 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0x614);
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x614);
  return 1;
}


/* NanoCore 1.12, address 0x400312ec.
 * REA evidence: ev_e9d1aa63d32aa7cfb83ed41493927f18a938b635372e706a55b0a96357affdd5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400312ec(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (0xffbe < (ushort)(*(short *)(param_1 + 6) - 0x40U)) {
    iVar1 = param_1 + 0x14;
    while ((iVar2 = FUN_ram_400310f4(iVar1), iVar2 != 0 ||
           (iVar2 = FUN_ram_40030c08(iVar1), iVar2 != 0))) {
      iVar1 = iVar1 + 0x18;
      if (iVar1 == param_1 + 0x614) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40031348.
 * REA evidence: ev_2e19905e045f892715c8892ddaa5216a2904d83ad754f9ac758d97759e6485d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40031348(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_40007450(0,param_1,0x28);
  uVar1 = FUN_ram_40007450(uVar1,&DAT_ram_4009c588,4);
  FUN_ram_40007450(uVar1,param_1 + 0x2c,0x624);
  return;
}


/* NanoCore 1.12, address 0x4003137c.
 * REA evidence: ev_e0a41fb3cd0b34cab9ca5db9b7aa3b6591dc8828f4f099097e627c0ca737f852
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003137c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_40007450(0,param_1,0xc);
  uVar1 = FUN_ram_40007450(uVar1,&DAT_ram_4009c584,4);
  FUN_ram_40007450(uVar1,param_1 + 0x10,0x604);
  return;
}


/* NanoCore 1.12, address 0x400313ae.
 * REA evidence: ev_59b17e83d8317083a4ec4d8b3bf9b4c15e0279309e9f1f052266e9200e573ee5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_400313ae(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_ram_40030bc4();
  bVar1 = false;
  if (((iVar2 != 0) && (iVar2 = FUN_ram_400312ec(param_1), bVar1 = false, iVar2 != 0)) &&
     (bVar1 = false, *(int *)(param_1 + 0x10) == 0x50543232)) {
    if (*(int *)(param_1 + 8) != 0) {
      iVar2 = *(int *)(param_1 + 0xc);
      iVar3 = FUN_ram_4003137c(param_1);
      bVar1 = iVar2 == iVar3;
    }
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x40031442.
 * REA evidence: ev_a52234861814277673f89641af76284499285ac8d03d80df91b1feb8c9bc2d87
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40031442(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == 0x58545350)) && ((short)param_1[1] == 1)) &&
     (((*(short *)((int)param_1 + 6) == 0x40 && (param_1[2] != 0)) &&
      ((param_1[4] == 0 || (iVar1 = FUN_ram_40030b9a(), iVar1 != 0)))))) {
    iVar1 = param_1[3];
    iVar2 = FUN_ram_40030bac(iVar1);
    if ((((iVar2 != 0) && (*(byte *)((int)param_1 + 0x26) < 0x40)) &&
        ((iVar1 == (*(byte *)((int)param_1 + 0x26) + 4 & 0xfc) << 10 &&
         (((((byte)(*(char *)((int)param_1 + 0x27) - 1U) < 2 && ((short)param_1[9] == 0x614)) &&
           (iVar1 = FUN_ram_4003129c(param_1 + 0xb,0x10), iVar1 != 0)) &&
          ((iVar1 = param_1[10], iVar2 = FUN_ram_40031348(param_1), iVar1 == iVar2 &&
           (iVar1 = FUN_ram_400313ae(param_1 + 0xf), iVar1 != 0)))))))) &&
       ((param_1[0x11] == param_1[2] && (param_1[0x12] == param_1[8])))) {
      if (*(char *)((int)param_1 + 0x27) == '\x01') {
        iVar1 = FUN_ram_40030c08(param_1 + (uint)*(byte *)((int)param_1 + 0x26) * 6 + 0x14);
      }
      else {
        if (*(char *)((int)param_1 + 0x27) != '\x02') {
          return 1;
        }
        iVar1 = FUN_ram_400310f4(param_1 + (uint)*(byte *)((int)param_1 + 0x26) * 6 + 0x14);
      }
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4003164a.
 * REA evidence: ev_ecaf1388eb386a0724191ab10181abcefcce6f662568cd2982c32be110a06a4d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003164a(uint param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_4 == 0) {
    return 0xfffffffa;
  }
  iVar3 = FUN_ram_40030bac();
  uVar4 = 0xfffffffa;
  if ((iVar3 != 0) && (param_3 != 0)) {
    uVar2 = 0x1000;
    piVar1 = (int *)0x3007b5c4;
    uVar5 = 0;
    do {
      if (((((uVar5 & 0xff) < param_2) || ((int)(param_3 + param_2) <= (int)uVar5)) &&
          (param_1 <= uVar2)) &&
         ((uVar2 < param_1 + 0x1000 && (iVar3 = FUN_ram_400310f4(piVar1), iVar3 == 0)))) {
        iVar3 = FUN_ram_40030c08(piVar1);
        if (iVar3 == 0) {
          return 0xfffffffd;
        }
        iVar6 = (param_4 - param_1) + uVar2;
        iVar3 = FUN_ram_40007450(0,iVar6,(short)piVar1[1]);
        if (iVar3 != *piVar1) {
          return 0xfffffffd;
        }
        iVar3 = FUN_ram_400310d4((uint)*(ushort *)(piVar1 + 1) + iVar6,
                                 0x400 - (uint)*(ushort *)(piVar1 + 1));
        if (iVar3 == 0) {
          return 0xfffffffd;
        }
      }
      uVar5 = uVar5 + 1;
      piVar1 = piVar1 + 6;
      uVar2 = uVar2 + 0x400;
    } while (uVar5 != 0x40);
    uVar4 = 0;
  }
  return uVar4;
}


/* NanoCore 1.12, address 0x4003171a.
 * REA evidence: ev_edc4b6284666741f92bcd20ef9200808210dcf5e5ec5f31d9677785a38d7d742
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003171a(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_400310f4();
  if (iVar1 != 0) {
    memset(param_2,0,0x18);
    return;
  }
  iVar1 = FUN_ram_40030c08(param_1);
  *(bool *)param_2 = iVar1 != 0;
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_1 + 1);
  *(undefined4 *)(param_2 + 4) = *param_1;
  FUN_ram_4000303c(param_2 + 8,param_1 + 2,0xf);
  *(undefined1 *)(param_2 + 0x17) = 0;
  return;
}


/* NanoCore 1.12, address 0x40031774.
 * REA evidence: ev_0606f9a81914e6fd1c44f7b854259732b9089cc1bb8514c690877951ffb21331
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40031774(int param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = 0;
  do {
    uVar4 = uVar4 ^ *(byte *)(param_1 + iVar2);
    cVar3 = '\b';
    do {
      cVar1 = (char)uVar4;
      uVar4 = (uVar4 & 0x7f) << 1;
      if (cVar1 < '\0') {
        uVar4 = uVar4 ^ 7;
      }
      cVar3 = cVar3 + -1;
    } while (cVar3 != '\0');
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xf);
  return uVar4;
}


/* NanoCore 1.12, address 0x400317a6.
 * REA evidence: ev_da8d6ef3f63ce288b1e70eeda6bd44d3952d04fbfa19f43451a31da94a995144
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400317a6(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  int *piVar15;
  char local_4c [4];
  uint local_48 [5];
  
  uVar9 = _DAT_ram_3007b5b6;
  if (0x3f < _DAT_ram_3007b5b6) {
    uVar9 = 0;
  }
  local_4c[0] = '\0';
  local_4c[1] = '\0';
  local_48[0] = 0x100;
  local_48[1] = 0x100;
  piVar4 = (int *)FUN_ram_4000559c(0x1000);
  uVar9 = uVar9 & 0xff;
  uVar5 = 0xfffffffb;
  if (piVar4 != (int *)0x0) {
    iVar10 = 0;
    iVar2 = 0;
    uVar3 = 0;
    iVar12 = 0;
    bVar1 = false;
    iVar13 = 0;
    uVar5 = 0x16000;
    while (iVar6 = FUN_ram_40030d2c(uVar5,piVar4,0x1000), iVar6 == 0x1000) {
      uVar11 = 0;
      piVar15 = piVar4;
      do {
        iVar6 = FUN_ram_400310d4(piVar15,0x10);
        if (iVar6 == 0) {
          if ((((*piVar15 == 0x504a5631) && (iVar6 = piVar15[1], iVar6 != 0)) &&
              (uVar14 = (ushort)*(byte *)(piVar15 + 2), uVar14 < 0x40)) &&
             ((iVar7 = FUN_ram_4003129c((int)piVar15 + 9,6), iVar7 != 0 &&
              (uVar8 = FUN_ram_40031774(piVar15), *(byte *)((int)piVar15 + 0xf) == uVar8)))) {
            if (bVar1) {
              if (iVar6 == iVar2) {
                FUN_ram_400055d4(piVar4);
                return 0xfffffffd;
              }
              iVar7 = FUN_ram_40030b9a(iVar6,iVar2);
              if (iVar7 != 0) {
                iVar2 = iVar6;
                uVar3 = uVar11;
                iVar12 = iVar13;
                uVar9 = uVar14;
              }
            }
            else {
              bVar1 = true;
              iVar2 = iVar6;
              uVar3 = uVar11;
              iVar12 = iVar13;
              uVar9 = uVar14;
            }
          }
          else {
            local_4c[iVar10] = '\x01';
          }
        }
        else if (local_48[iVar10] == 0x100) {
          local_48[iVar10] = uVar11;
        }
        uVar11 = uVar11 + 1;
        piVar15 = piVar15 + 4;
      } while (uVar11 != 0x100);
      if (iVar10 != 0) {
        FUN_ram_400055d4(piVar4);
        if (bVar1) {
          _DAT_ram_3007b568 = uVar3 + 1;
          DAT_ram_3007b563 = (undefined1)iVar12;
          _DAT_ram_3007b564 = iVar2 + 1;
          if (_DAT_ram_3007b564 == 0) {
            _DAT_ram_3007b564 = 1;
          }
          DAT_ram_3007b562 = local_4c[iVar12] != '\0' || 0xff < _DAT_ram_3007b568;
          _DAT_ram_3007b5b6 = uVar9;
        }
        else {
          DAT_ram_3007b563 = 0;
          _DAT_ram_3007b568 = local_48[0];
          DAT_ram_3007b562 = (local_4c[0] != '\0' || local_4c[1] != '\0') || 0xff < local_48[0];
          _DAT_ram_3007b564 = iVar10;
        }
        DAT_ram_3007b561 = 1;
        return 0;
      }
      iVar10 = 1;
      iVar13 = 1;
      uVar5 = 0x17000;
    }
    FUN_ram_400055d4(piVar4);
    uVar5 = 0xfffffffc;
  }
  return uVar5;
}


/* NanoCore 1.12, address 0x400319ba.
 * REA evidence: ev_ff25f827943c4c076f083f770f70ce7cb37592123d5eecd77131e363257298c7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400319ba(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_120 [260];
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  uVar1 = 0;
  while( true ) {
    uVar2 = 0x1000 - uVar1;
    if (0x100 < uVar2) {
      uVar2 = 0x100;
    }
    uVar3 = FUN_ram_40030d2c(param_1 + uVar1,auStack_120,uVar2);
    if ((uVar3 != uVar2) ||
       (iVar4 = FUN_ram_40002fdc(auStack_120,param_2 + uVar1,uVar2), iVar4 != 0)) break;
    uVar1 = uVar1 + uVar2;
    if (0xfff < uVar1) {
      return 0;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40031a3e.
 * REA evidence: ev_2550124baecf88eedae092a3c81bcad791b2b141bc825af07016eebaf02d49b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char FUN_ram_40031a3e(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char local_40 [16];
  char local_30 [28];
  
  pcVar4 = local_40;
  if (param_2 == 0) {
    return '\x03';
  }
  iVar2 = FUN_ram_4000559c(0x1000);
  if (iVar2 == 0) {
    return '\x05';
  }
  iVar3 = FUN_ram_40030d2c(param_1,iVar2,0x1000);
  cVar1 = '\x04';
  if (iVar3 == 0x1000) {
    iVar3 = FUN_ram_400310d4(iVar2,0x1000);
    cVar1 = '\x01';
    if (iVar3 == 0) {
      FUN_ram_4000303c(param_2,iVar2,0x650);
      FUN_ram_4000303c(local_40,iVar2 + 0xff0,0x10);
      iVar3 = FUN_ram_40031442(param_2);
      if (iVar3 != 0) {
        FUN_ram_40030dcc(param_2,local_30);
        iVar3 = FUN_ram_40002fdc(local_40,local_30,0x10);
        cVar1 = '\0';
        if (iVar3 == 0) goto LAB_ram_40031b06;
      }
      iVar3 = FUN_ram_400310d4(iVar2 + 0xff0,0x10);
      cVar1 = '\x02';
      if (iVar3 == 0) {
        iVar3 = FUN_ram_40031442(param_2);
        cVar1 = '\x03';
        if (iVar3 != 0) {
          FUN_ram_40030dcc(param_2,local_30);
          iVar3 = 0;
          do {
            if (*pcVar4 != local_30[iVar3]) {
              iVar3 = FUN_ram_400310d4(pcVar4,0x10 - iVar3);
              cVar1 = (iVar3 == 0) + '\x02';
              goto LAB_ram_40031b06;
            }
            iVar3 = iVar3 + 1;
            pcVar4 = pcVar4 + 1;
          } while (iVar3 != 0x10);
          cVar1 = '\x03';
        }
      }
    }
  }
LAB_ram_40031b06:
  FUN_ram_400055d4(iVar2);
  return cVar1;
}


/* NanoCore 1.12, address 0x40031b1c.
 * REA evidence: ev_24fec0bd483d3b7259f68d68edb34d2a446e6a81f70a71d979c789fb8e8f4d89
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40031b1c(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 auStack_120 [256];
  
  uVar4 = 0;
  uVar2 = 0;
  while( true ) {
    uVar1 = 0x1000 - uVar2;
    if (0x100 < uVar1) {
      uVar1 = 0x100;
    }
    uVar3 = FUN_ram_40030d2c(param_1 + uVar2,auStack_120,uVar1);
    if (uVar3 != uVar1) break;
    uVar4 = FUN_ram_40007450(uVar4,auStack_120,uVar1);
    uVar2 = uVar2 + uVar1;
    if (0xfff < uVar2) {
      *param_2 = uVar4;
      return 0;
    }
  }
  return 0xfffffffc;
}


/* NanoCore 1.12, address 0x40031ba8.
 * REA evidence: ev_5da535389734e535a92c4d5c34eec638fc4f320d3c5ca4e13fd5c821c09ae254
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40031ba8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_40030ca0();
  if (iVar1 != 0) {
    if (((param_1 + 0x1000U <= *(uint *)(iVar1 + 0x38)) &&
        (iVar2 = FUN_ram_40006cbe(iVar1 + 0x1c), iVar2 != 0)) &&
       (*(code **)(iVar2 + 0x30) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x40031bde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(iVar2 + 0x30))(*(int *)(iVar1 + 0x34) + param_1,0x1000);
      return uVar3;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40031bec.
 * REA evidence: ev_5efc4fb66275a52274ab5c8e8af57931bf22eeb35d86118b16d1d90a64f0a224
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40031bec(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_ram_400313ae();
  uVar1 = 0xfffffffa;
  if (iVar2 != 0) {
    iVar2 = FUN_ram_4000559c(0x1000);
    uVar1 = 0xfffffffb;
    if (iVar2 != 0) {
      memset(iVar2,0xff,0x1000);
      FUN_ram_4000303c(iVar2,param_1,0x614);
      iVar3 = FUN_ram_40031ba8(0);
      if (((iVar3 < 0) || (iVar3 = FUN_ram_40030d7c(0,iVar2,0x1000), iVar3 != 0x1000)) ||
         (iVar3 = FUN_ram_400319ba(0,iVar2), uVar1 = 0, iVar3 != 0)) {
        uVar1 = 0xfffffff8;
      }
      FUN_ram_400055d4(iVar2);
    }
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40031c5e.
 * REA evidence: ev_0c70abc6841053a262ebc7a69d9a731795ebb4613d168d130d2aa07727608676
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40031c5e(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = FUN_ram_40030bac();
    uVar2 = 0xfffffffa;
    if ((iVar1 != 0) &&
       (((iVar1 = FUN_ram_40031ba8(param_1), iVar1 < 0 ||
         (iVar1 = FUN_ram_40030d7c(param_1,param_2,0x1000), iVar1 != 0x1000)) ||
        (iVar1 = FUN_ram_400319ba(param_1,param_2), uVar2 = 0, iVar1 != 0)))) {
      uVar2 = 0xfffffff8;
    }
    return uVar2;
  }
  return 0xfffffffa;
}


/* NanoCore 1.12, address 0x40031caa.
 * REA evidence: ev_8a9b103ce395aeeaae26fe48b7f2ab8292d7ea2a767073245f3a66d93b9f7cd1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40031caa(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_120 [260];
  
  uVar2 = 0;
  while( true ) {
    if (param_2 <= uVar2) {
      return 1;
    }
    uVar1 = param_2 - uVar2;
    if (0x100 < uVar1) {
      uVar1 = 0x100;
    }
    uVar3 = FUN_ram_40030d2c(uVar2 + param_1,local_120,uVar1);
    if (uVar3 != uVar1) break;
    uVar3 = 0;
    do {
      if (local_120[uVar3] != -1) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
    uVar2 = uVar2 + uVar1;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40031d34.
 * REA evidence: ev_babf2048d4d4a251809deea25b0ef920906da5bffd96bd29e05da4f766b42b5f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40031d34(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_634;
  undefined2 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  
  iVar4 = FUN_ram_40030cfa();
  if (iVar4 == 0) {
    iVar4 = 0x1000;
    bVar1 = false;
    do {
      iVar5 = FUN_ram_40031ba8(iVar4);
      if (iVar5 < 0) {
        iVar4 = -4;
        if (!bVar1) goto LAB_ram_40031eac;
        goto LAB_ram_40031f16;
      }
      iVar5 = FUN_ram_40031caa(iVar4,0x1000);
      if (iVar5 != 1) goto LAB_ram_40031f16;
      iVar4 = iVar4 + 0x1000;
      bVar1 = true;
    } while (iVar4 != 0x18000);
    iVar4 = FUN_ram_40031ba8(0xaa000);
    if ((((iVar4 < 0) || (iVar4 = FUN_ram_40031caa(0xaa000,0x1000), iVar4 != 1)) ||
        (iVar4 = FUN_ram_40031ba8(0xab000), iVar4 < 0)) ||
       (iVar4 = FUN_ram_40031caa(0xab000,0x1000), iVar4 != 1)) {
LAB_ram_40031f16:
      iVar4 = -4;
    }
    else {
      memset(&uStack_634,0,0x614);
      uStack_634 = 0x50525354;
      uStack_624 = 0x50543232;
      uStack_630 = 1;
      uStack_62c = 1;
      uStack_628 = FUN_ram_4003137c(&uStack_634);
      iVar4 = FUN_ram_40031bec(&uStack_634);
      if (iVar4 == 0) {
        FUN_ram_4000303c(0x3007b5b0,&uStack_634,0x614);
        _DAT_ram_3007bbc4 = 0;
        _DAT_ram_3007bbc8 = 0;
        _DAT_ram_3007b578 = uStack_62c;
        _DAT_ram_3007b574 = uStack_628;
        _DAT_ram_3007b56c = uStack_62c;
        DAT_ram_3007b561 = 1;
        DAT_ram_3007b563 = 0;
        DAT_ram_3007b562 = 0;
        _DAT_ram_3007b568 = 0;
        _DAT_ram_3007b564 = 1;
        _DAT_ram_3007b5ac = 1;
      }
    }
    cVar2 = '\0';
    do {
      cVar3 = cVar2 + '\x01';
      FUN_ram_4002f66a(cVar2);
      cVar2 = cVar3;
    } while (cVar3 != '@');
    if (iVar4 != 0) {
LAB_ram_40031eac:
      memset(0x3007b5b0,0,0x614);
      _DAT_ram_3007b5ac = 5;
      if (iVar4 + 8U < 9) {
        _DAT_ram_3007b5ac = (uint)*(byte *)(iVar4 + 0x4009c578);
      }
      _DAT_ram_3007bbc4 = 0;
      _DAT_ram_3007bbc8 = 0;
      _DAT_ram_3007b578 = 0;
      _DAT_ram_3007b574 = 0;
      _DAT_ram_3007b56c = 0;
      DAT_ram_3007b561 = 0;
    }
  }
  else {
    _DAT_ram_3007b5ac = 5;
    if (iVar4 + 8U < 9) {
      _DAT_ram_3007b5ac = (uint)*(byte *)(iVar4 + 0x4009c578);
    }
  }
  return iVar4;
}


/* NanoCore 1.12, address 0x40031f1a.
 * REA evidence: ev_d683b1dd14bfcba4f986548b7f7b39d39a766dca1b612424ac64acba7f644d05
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_40031f1a(int param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6,
                byte *param_7,undefined4 *param_8)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uStack_6c;
  undefined1 auStack_58 [36];
  
  if (param_1 == 0) {
    return 0xfffffffa;
  }
  if (param_2 == 0) {
    return 0xfffffffa;
  }
  if (param_4 == 0) {
    return 0xfffffffa;
  }
  *param_7 = 0;
  *param_8 = 0;
  param_8[1] = 0;
  iVar4 = FUN_ram_4000559c(0x400);
  iVar5 = FUN_ram_4000559c(0x400);
  iVar6 = FUN_ram_4000559c(0x340);
  if (iVar4 == 0) {
    uVar2 = 0xfffffffb;
    if (iVar6 != 0) goto LAB_ram_40032148;
    if (iVar5 == 0) {
      return 0xfffffffb;
    }
LAB_ram_40032188:
    FUN_ram_400055d4(iVar5);
    uVar3 = uVar2;
  }
  else {
    if (iVar5 == 0) {
      uVar3 = 0xfffffffb;
      uVar2 = 0xfffffffb;
      if (iVar6 == 0) goto LAB_ram_40032156;
    }
    else {
      if (iVar6 == 0) {
        uVar2 = 0xfffffffb;
        goto LAB_ram_40032188;
      }
      puVar1 = (undefined1 *)(param_1 + 0x14);
      puVar12 = (undefined1 *)(param_2 + 0x14);
      puVar11 = (undefined1 *)(param_4 + 0x14);
      uStack_6c = 0;
      do {
        iVar7 = FUN_ram_40030c08(puVar1);
        puVar13 = puVar1;
        if (iVar7 == 0) {
          if (param_3 < 2) {
            iVar7 = FUN_ram_40030c08(puVar12);
            puVar13 = puVar12;
            if (iVar7 == 0) {
              if (param_5 < 2) goto LAB_ram_40032044;
LAB_ram_4003206a:
              puVar13 = (undefined1 *)0x0;
              if ((param_5 == 2) &&
                 (iVar7 = FUN_ram_40030c08(puVar11), puVar13 = puVar11, iVar7 == 0))
              goto LAB_ram_4003207c;
            }
          }
          else if (param_5 < 2) {
LAB_ram_40032044:
            iVar7 = FUN_ram_40030c08(puVar11);
            puVar13 = puVar11;
            if (iVar7 != 0) goto LAB_ram_40031fb6;
            if (param_3 == 2) goto LAB_ram_40032060;
LAB_ram_4003207c:
            puVar13 = (undefined1 *)0x0;
          }
          else {
            if (param_3 != 2) goto LAB_ram_4003206a;
LAB_ram_40032060:
            iVar7 = FUN_ram_40030c08(puVar12);
            puVar13 = puVar12;
            if (iVar7 == 0) goto LAB_ram_4003206a;
          }
        }
LAB_ram_40031fb6:
        iVar7 = uStack_6c * 0x400 + 0x1000;
        iVar8 = FUN_ram_40030d2c(iVar7,iVar4,0x400);
        if (((iVar8 != 0x400) || (iVar7 = FUN_ram_40030d2c(iVar7,iVar5,0x400), iVar7 != 0x400)) ||
           (iVar7 = FUN_ram_40002fdc(iVar4,iVar5,0x400), iVar7 != 0)) {
          uVar2 = 0xfffffffc;
          goto LAB_ram_40032148;
        }
        iVar7 = FUN_ram_400310f4(puVar1);
        if ((iVar7 == 0) || (iVar7 = FUN_ram_400310d4(iVar4,0x400), iVar7 == 0)) {
          iVar7 = FUN_ram_40031120(puVar1,iVar4,iVar6,auStack_58);
          if (iVar7 == 0) {
            if (param_3 < 2) {
              iVar7 = FUN_ram_40031120(puVar12,iVar4,iVar6,auStack_58);
              if (iVar7 != 0) goto LAB_ram_400320b2;
              if (param_5 < 2) goto LAB_ram_400320f8;
LAB_ram_400320d6:
              if ((param_5 == 2) &&
                 (iVar7 = FUN_ram_40031120(puVar11,iVar4,iVar6,auStack_58), iVar7 != 0)) {
                bVar10 = *param_7 | 2;
                goto LAB_ram_4003209a;
              }
            }
            else {
              if (1 < param_5) {
                if (param_3 != 2) goto LAB_ram_400320d6;
LAB_ram_4003211e:
                iVar7 = FUN_ram_40031120(puVar12,iVar4,iVar6,auStack_58);
                if (iVar7 != 0) {
                  bVar10 = *param_7 | 1;
                  goto LAB_ram_4003209a;
                }
                goto LAB_ram_400320d6;
              }
LAB_ram_400320f8:
              iVar7 = FUN_ram_40031120(puVar11,iVar4,iVar6,auStack_58);
              if (iVar7 != 0) goto LAB_ram_400320b2;
              if (param_3 == 2) goto LAB_ram_4003211e;
            }
            if (puVar13 == (undefined1 *)0x0) goto LAB_ram_40032112;
            iVar7 = FUN_ram_40030c08(puVar1);
            if (iVar7 != 0) goto LAB_ram_40032018;
          }
          else {
            if (param_6 != 0) {
              bVar10 = *param_7 | (byte)param_6;
LAB_ram_4003209a:
              *param_7 = bVar10;
              uVar9 = (uStack_6c & 0xff) >> 5;
              param_8[uVar9] = param_8[uVar9] | 1 << (uStack_6c & 0x1f);
            }
LAB_ram_400320b2:
            puVar13 = auStack_58;
          }
          FUN_ram_4000303c(puVar1,puVar13,0x18);
        }
        else {
          memset(puVar1,0,0x18);
        }
LAB_ram_40032018:
        puVar1 = puVar1 + 0x18;
        uStack_6c = uStack_6c + 1;
        puVar12 = puVar12 + 0x18;
        puVar11 = puVar11 + 0x18;
      } while (uStack_6c != 0x40);
      uVar2 = 0;
      if ((param_6 != 0) && ((*param_7 & param_6) == 0)) {
LAB_ram_40032112:
        uVar2 = 0xfffffffd;
      }
    }
LAB_ram_40032148:
    FUN_ram_400055d4(iVar6);
    uVar3 = uVar2;
    if (iVar5 != 0) goto LAB_ram_40032188;
  }
  if (iVar4 == 0) {
    return uVar3;
  }
LAB_ram_40032156:
  FUN_ram_400055d4(iVar4);
  return uVar3;
}


