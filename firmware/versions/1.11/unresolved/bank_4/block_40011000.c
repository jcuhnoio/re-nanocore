/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40011000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40011004.
 * REA evidence: ev_75b5d9c738e7cb866842ab5fdff19c02d0efff4298768af03ec12195542907de
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40011004(int param_1)

{
  int iVar1;
  
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 & 0xffffff07 | param_1 << 3 | 4;
  iVar1 = 0x30d41;
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    fence();
  }
  return;
}


/* NanoCore 1.11, address 0x4001103a.
 * REA evidence: ev_dc17550898fcb98cdd66e6ea03ab54d01456a317adbf99b5c757635646c90864
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001103a(void)

{
  undefined4 *puVar1;
  
  FUN_ram_4000f046();
  puVar1 = (undefined4 *)&DAT_ram_10200280;
  do {
    fence();
    *puVar1 = 0xfb7f;
    fence();
    puVar1[-8] = 0xfb7f;
    puVar1 = puVar1 + 1;
  } while (puVar1 != (undefined4 *)0x10200294);
  fence();
  _DAT_ram_1020020c = 0;
  fence();
  _DAT_ram_10200210 = 0;
  fence();
  _DAT_ram_10200218 = 0;
  FUN_ram_40011004(0x10);
  FUN_ram_40010ed6();
  fence();
  fence();
  _DAT_ram_10200204 = _DAT_ram_10200204 | 2;
  FUN_ram_40012760();
  return 0;
}


/* NanoCore 1.11, address 0x400110bc.
 * REA evidence: ev_1ede9cc69866bd93eaa7828780473dc2255174eabfb18921bbd9a7338a3d1bbd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400110bc(uint param_1)

{
  fence();
  fence();
  _DAT_ram_10200200 = (param_1 & 0x7f) << 4 | _DAT_ram_10200200 & 0xfffff80f;
  return 0;
}


/* NanoCore 1.11, address 0x400110e0.
 * REA evidence: ev_10898ee8c9754077819174f67c3ad5acb707dbd0489cacf5b7efb5383b277077
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400110e0(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar7 = _DAT_ram_10200218;
  bVar1 = *(byte *)(param_1 + 2);
  uVar5 = bVar1 & 0x7f;
  if (uVar5 < 5) {
    uVar2 = *(ushort *)(param_1 + 4) & 0x7ff;
    if ((bVar1 & 0x7f) == 0) {
      if (uVar2 == 0x20) {
        uVar2 = 1;
      }
      else if (uVar2 < 0x21) {
        if (uVar2 == 8) {
          uVar2 = 3;
        }
        else if (uVar2 == 0x10) {
          uVar2 = 2;
        }
      }
      else if (uVar2 == 0x40) {
        uVar2 = 0;
      }
    }
    fence();
    if (*(char *)(param_1 + 2) < '\0') {
      FUN_ram_4000304c(uVar5 * 7 + 0x3005e350,param_1,7);
      *(ushort *)(&DAT_ram_3005e260 + uVar5 * 0x18) = *(ushort *)(param_1 + 4) & 0x7ff;
      *(byte *)(uVar5 * 0x18 + 0x3005e262) = *(byte *)(param_1 + 3) & 3;
      fence();
      uVar4 = 1 << (bVar1 & 0x1f);
      _DAT_ram_10200218 = uVar4 | uVar7;
      uVar7 = *(byte *)(param_1 + 3) & 1;
      if ((*(byte *)(param_1 + 3) & 1) == 0) {
        _DAT_ram_3005e378 = uVar4 | _DAT_ram_3005e378;
      }
      else {
        if ((_DAT_ram_3005e374 & 2) == 0) {
          uVar7 = 1;
          uVar4 = 2;
        }
        else {
          if ((_DAT_ram_3005e374 & 4) != 0) {
            return 0xffffffff;
          }
          uVar7 = 2;
          uVar4 = 4;
        }
        _DAT_ram_3005e374 = uVar4 | _DAT_ram_3005e374;
        FUN_ram_40011004();
      }
      FUN_ram_40010e80();
      puVar6 = (uint *)(&DAT_ram_10200220 + uVar5 * 4);
      fence();
      uVar2 = uVar2 | (*(byte *)(param_1 + 3) & 3) << 0x12 | uVar7 << 0x16 | *puVar6;
    }
    else {
      *(ushort *)(&DAT_ram_3005e2d8 + uVar5 * 0x18) = *(ushort *)(param_1 + 4) & 0x7ff;
      *(byte *)(uVar5 * 0x18 + 0x3005e2da) = *(byte *)(param_1 + 3) & 3;
      fence();
      _DAT_ram_10200218 = 1 << (uVar5 + 0x10 & 0x1f) & 0xffff0000U | _DAT_ram_10200218;
      puVar6 = (uint *)(&DAT_ram_10200240 + uVar5 * 4);
      fence();
      uVar2 = uVar2 | (*(byte *)(param_1 + 3) & 3) << 0x12 | *puVar6;
    }
    fence();
    *puVar6 = uVar2 | 0x10008000;
    uVar3 = 0;
  }
  else {
    FUN_ram_40032a1a(&DAT_ram_40094720);
    FUN_ram_40032a1a(s_Ep_addr__d_overflow_ram_40094a58,*(undefined1 *)(param_1 + 2));
    FUN_ram_40032a1a(&DAT_ram_40094748);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x400112d0.
 * REA evidence: ev_ff5bcdfd57b6e3f93b89e33a716a4c2c56e76f0c196cf65b285c4b3b354806f1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400112d0(uint param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  
  uVar3 = param_1 & 0x7f;
  iVar9 = uVar3 * 4;
  if ((char)param_1 < '\0') {
    puVar7 = (uint *)(&DAT_ram_10200220 + iVar9);
    fence();
    fence();
    if ((int)*puVar7 < 0) {
      uVar8 = (*puVar7 & 0x3ffffff) >> 0x16;
      if (uVar8 == 0) {
        fence();
        fence();
        _DAT_ram_10200204 = _DAT_ram_10200204 | 0x80;
        iVar1 = 100;
        do {
          fence();
          if ((_DAT_ram_10200010 & 0x40) != 0) goto LAB_ram_400114f6;
          iVar1 = iVar1 + -1;
          FUN_ram_4003ff8a(1);
        } while (iVar1 != 0);
        FUN_ram_40032a1a(&DAT_ram_40094720);
        pcVar5 = s__s__timeout_USBINTSTS_GOUTNAKEFF_ram_40094a90;
      }
      else {
        fence();
        *puVar7 = *puVar7 | 0x8000000;
        iVar1 = 100;
        do {
          fence();
          if ((*(uint *)(&DAT_ram_10200260 + iVar9) & 0x40) != 0) goto LAB_ram_400114f6;
          iVar1 = iVar1 + -1;
          FUN_ram_4003ff8a(1);
        } while (iVar1 != 0);
        FUN_ram_40032a1a(&DAT_ram_40094720);
        pcVar5 = s__s__timeout_INEPINT_NAKEFF_ram_40094ab4;
      }
      FUN_ram_40032a1a(pcVar5,s_usbd_ep_close_ram_40094b0c);
      FUN_ram_40032a1a(&DAT_ram_40094748);
LAB_ram_400114f6:
      fence();
      fence();
      *puVar7 = *puVar7 | 0x48000000;
      iVar1 = 100;
      puVar2 = (uint *)(&DAT_ram_10200260 + iVar9);
      do {
        fence();
        if ((*puVar2 & 2) != 0) goto LAB_ram_4001155c;
        iVar1 = iVar1 + -1;
        FUN_ram_4003ff8a(1);
      } while (iVar1 != 0);
      FUN_ram_40032a1a(&DAT_ram_40094720);
      FUN_ram_40032a1a(s__s__timeout_OUTEPCFG_EPDisable_ram_40094a70,s_usbd_ep_close_ram_40094b0c);
      FUN_ram_40032a1a(&DAT_ram_40094748);
LAB_ram_4001155c:
      fence();
      fence();
      *puVar2 = *puVar2 | 2;
      FUN_ram_40011004(uVar8);
      if (uVar8 == 0) {
        _DAT_ram_3005e378 = ~(1 << (param_1 & 0x1f)) & _DAT_ram_3005e378;
        fence();
        fence();
        _DAT_ram_10200204 = _DAT_ram_10200204 | 0x100;
      }
      else {
        _DAT_ram_3005e374 = ~(1 << uVar8) & _DAT_ram_3005e374;
      }
    }
    fence();
    fence();
    _DAT_ram_10200218 = ~(1 << (param_1 & 0x1f) & 0xffff0000U) & _DAT_ram_10200218;
    fence();
    *puVar7 = 0;
    uVar6 = 0x3005e380;
    puVar4 = &DAT_ram_3005e260 + uVar3 * 0x18;
  }
  else {
    puVar7 = (uint *)(&DAT_ram_10200240 + iVar9);
    fence();
    if ((int)*puVar7 < 0) {
      fence();
      if ((_DAT_ram_10200010 & 0x80) == 0) {
        fence();
        fence();
        _DAT_ram_10200204 = _DAT_ram_10200204 | 0x200;
      }
      iVar1 = 100;
      do {
        fence();
        if ((_DAT_ram_10200010 & 0x80) != 0) goto LAB_ram_40011378;
        iVar1 = iVar1 + -1;
        FUN_ram_4003ff8a(1);
      } while (iVar1 != 0);
      FUN_ram_40032a1a(&DAT_ram_40094720);
      FUN_ram_40032a1a(s__s__timeout_USBINTSTS_GOUTNAKEFF_ram_40094a90,s_usbd_ep_close_ram_40094b0c)
      ;
      FUN_ram_40032a1a(&DAT_ram_40094748);
LAB_ram_40011378:
      fence();
      fence();
      *puVar7 = *puVar7 | 0x48000000;
      puVar2 = (uint *)(&DAT_ram_10200280 + iVar9);
      iVar9 = 0;
      do {
        fence();
        if ((*puVar2 & 2) != 0) {
          if (iVar9 == 100) {
            FUN_ram_40032a1a(&DAT_ram_40094720);
            FUN_ram_40032a1a(s__s__timeout_OUTEPCFG_EPDisable_ram_40094a70,
                             s_usbd_ep_close_ram_40094b0c);
            FUN_ram_40032a1a(&DAT_ram_40094748);
          }
          break;
        }
        iVar9 = iVar9 + 1;
        FUN_ram_4003ff8a(1);
      } while (iVar9 != 1000);
      fence();
      fence();
      *puVar2 = *puVar2 | 2;
      fence();
      fence();
      _DAT_ram_10200204 = _DAT_ram_10200204 | 0x400;
    }
    fence();
    fence();
    _DAT_ram_10200218 = ~(1 << (uVar3 + 0x10 & 0x1f) & 0xffff0000U) & _DAT_ram_10200218;
    fence();
    *puVar7 = 0;
    uVar6 = 0x3005e580;
    puVar4 = &DAT_ram_3005e2d8 + uVar3 * 0x18;
  }
  FUN_ram_40010f0a(puVar4,uVar6);
  return 0;
}


/* NanoCore 1.11, address 0x4001165c.
 * REA evidence: ev_af507cffff6162e18b3762e1209ca2b6d02373279a15f4c9507aa3b623684468
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001165c(void)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  FUN_ram_400110bc(0);
  FUN_ram_40011004(0x10);
  FUN_ram_40010ed6();
  puVar3 = (undefined4 *)&DAT_ram_102002a0;
  bVar1 = 0;
  do {
    if (bVar1 == 0) {
      fence();
      _DAT_ram_10200220 = 0x8000000;
      fence();
      _DAT_ram_10200240 = 0x8000000;
    }
    else {
      FUN_ram_400112d0(bVar1);
      FUN_ram_400112d0(bVar1 | 0x80);
    }
    fence();
    *puVar3 = 0;
    fence();
    puVar3[-0x10] = 0xffffffff;
    fence();
    puVar3[8] = 0;
    fence();
    puVar3[-8] = 0xffffffff;
    bVar1 = bVar1 + 1;
    puVar3 = puVar3 + 1;
  } while (bVar1 != 5);
  fence();
  _DAT_ram_10200218 = 0;
  fence();
  _DAT_ram_10200210 = 0x29;
  fence();
  _DAT_ram_1020020c = 0x29;
  puVar2 = &DAT_ram_3005e2d8;
  FUN_ram_40010e80();
  do {
    FUN_ram_40010f0a(puVar2,0x3005e580);
    puVar4 = puVar2 + -0x78;
    puVar2 = puVar2 + 0x18;
    FUN_ram_40010f0a(puVar4,0x3005e380);
  } while (puVar2 != (undefined1 *)0x3005e350);
  memset(&DAT_ram_3005e240,0,0x140);
  FUN_ram_4000f062();
  FUN_ram_40010f90();
  return 0;
}


/* NanoCore 1.11, address 0x4001178c.
 * REA evidence: ev_70b5e3170c9877effe687552ba48ca923c8c0a115b2478b9e74789e4523ab9d4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001178c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  memset(&DAT_ram_3005e240,0,0x140);
  FUN_ram_4001268e();
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
    if (iVar2 == 0) goto LAB_ram_4001182c;
    fence();
  } while ((_DAT_ram_10200000 & 4) == 0);
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 | 1;
  iVar2 = 0x30d41;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    fence();
  }
LAB_ram_4001182c:
  FUN_ram_40010e80();
  fence();
  _DAT_ram_10200028 = 0;
  fence();
  _DAT_ram_1020002c = 0;
  fence();
  fence();
  _DAT_ram_10200200 = _DAT_ram_10200200 | 1;
  FUN_ram_40011004(0x10);
  uVar1 = FUN_ram_40010ed6();
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
  FUN_ram_4001165c();
  fence();
  fence();
  _DAT_ram_10200004 = _DAT_ram_10200004 | 0x200;
  fence();
  fence();
  _DAT_ram_10200204 = _DAT_ram_10200204 & 0xfffffffd;
  return uVar1;
}


/* NanoCore 1.11, address 0x40011940.
 * REA evidence: ev_248b4eef3118b1136281259c0cc2dedfbd27ab19ec8986b390329d9525ff411e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40011940(uint param_1)

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
    FUN_ram_40010f90();
    return 0;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40011996.
 * REA evidence: ev_4c4236924622102acdbc8ec8a761e31f56a8acbc57c3e62fa723dd18e4feb42a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40011996(uint param_1)

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
    cVar1 = *(char *)(uVar2 * 0x18 + 0x3005e262);
  }
  else {
    puVar4 = (uint *)(&DAT_ram_10200240 + uVar2 * 4);
    uVar3 = *puVar4;
    fence();
    cVar1 = *(char *)(uVar2 * 0x18 + 0x3005e2da);
  }
  uVar3 = uVar3 & 0xffdfffff;
  if ((byte)(cVar1 - 2U) < 2) {
    uVar3 = uVar3 | 0x10000000;
  }
  fence();
  *puVar4 = uVar3;
  return 0;
}


/* NanoCore 1.11, address 0x40011a0c.
 * REA evidence: ev_86b000ce2c22ba269d5f323e61b8b0383ee8b536317035cc9290725917427000
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40011a0c(uint param_1,uint param_2,uint param_3,int param_4)

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
  *(uint *)(&DAT_ram_3005e264 + iVar5) = param_2;
  *(uint *)(&DAT_ram_3005e270 + iVar5) = param_3;
  *(undefined4 *)(&DAT_ram_3005e274 + iVar5) = 0;
  if ((((param_4 == 0) || (param_1 == 0)) || (param_3 == 0)) ||
     (((param_2 + param_3 | param_2) & 0x1f) == 0)) {
    FUN_ram_40010f0a(&DAT_ram_3005e260 + param_1 * 0x18,0x3005e380);
    if (param_3 != 0) goto LAB_ram_40011ac0;
  }
  else {
    if ((*(int *)(iVar5 + 0x3005e268) == 0) ||
       (*(uint *)(iVar5 + 0x3005e26c) != (param_3 + 0x1f & 0xffffffe0))) {
      FUN_ram_40010f0a(&DAT_ram_3005e260 + param_1 * 0x18,0x3005e380);
      iVar5 = FUN_ram_40010f2e(&DAT_ram_3005e260 + param_1 * 0x18,param_3,0x3005e380);
      if (iVar5 != 0) {
        return iVar5;
      }
    }
    FUN_ram_4000304c(*(undefined4 *)(param_1 * 0x18 + 0x3005e268),param_2,param_3);
    param_2 = *(uint *)(param_1 * 0x18 + 0x3005e268);
LAB_ram_40011ac0:
    FUN_ram_40010e42(param_2,param_3 + 0x1f & 0xffffffe0);
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
    _DAT_ram_3005e270 = (uint)_DAT_ram_3005e260;
    if (param_3 < _DAT_ram_3005e260) {
      _DAT_ram_3005e270 = param_3;
    }
    uVar7 = _DAT_ram_3005e270 | uVar7 | 0x80000;
    uVar10 = 0;
  }
  else {
    uVar3 = (uint)*(ushort *)(&DAT_ram_3005e260 + param_1 * 0x18);
    if (uVar3 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = ((param_3 - 1) + uVar3) / uVar3;
    }
    uVar10 = uVar3 & 0xffff;
    uVar7 = param_3 & 0x7ffff | (uVar3 & 0x3ff) << 0x13 | uVar7;
  }
  cVar1 = *(char *)(param_1 * 0x18 + 0x3005e262);
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
    if (cVar1 != '\x03') goto LAB_ram_40011bd0;
    uVar3 = uVar7 & 0x9fffffff;
    uVar7 = 0x20000000;
  }
  uVar7 = uVar3 | uVar7;
LAB_ram_40011bd0:
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


/* NanoCore 1.11, address 0x40011c5e.
 * REA evidence: ev_f5b9e5b07d420921d79245cc684dcff975b0c4cb66c4735ba5a18d4a42af2adb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40011c5e(void)

{
  FUN_ram_40011a0c();
  return;
}


/* NanoCore 1.11, address 0x40011c64.
 * REA evidence: ev_3bc8a7396054c435ee9b7176b98a5b27b80932f9e0ba3f28c11894fbd8485459
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40011c64(uint param_1)

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
    if (((uVar3 & _DAT_ram_3005e378) != 0) && (*(int *)(&DAT_ram_10200220 + uVar2 * 4) < 0)) {
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
    if ((_DAT_ram_10200010 & 0x40) != 0) goto LAB_ram_40011d28;
    iVar1 = iVar1 + -1;
    FUN_ram_4003ff8a(1);
  } while (iVar1 != 0);
  FUN_ram_40032a1a(&DAT_ram_40094720);
  FUN_ram_40032a1a(s__s__timeout_USBINTSTS_GOUTNAKEFF_ram_40094a90,
                   s_usbd_npinep_rewrite_ram_40094af8);
  FUN_ram_40032a1a(&DAT_ram_40094748);
LAB_ram_40011d28:
  uVar2 = 0;
  do {
    uVar3 = *(uint *)(&DAT_ram_10200220 + uVar2 * 4);
    fence();
    if (((1 << (uVar2 & 0x1f) & _DAT_ram_3005e378) != 0) && ((int)uVar3 < 0)) {
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
      if (uVar2 == 5) goto LAB_ram_40011dd2;
    }
    iVar1 = iVar1 + -1;
    FUN_ram_4003ff8a(1);
  } while (iVar1 != 0);
  FUN_ram_40032a1a(&DAT_ram_40094720);
  FUN_ram_40032a1a(s__s__ep_d_timeout_OUTEPCFG_EPDisa_ram_40094ad0,
                   s_usbd_npinep_rewrite_ram_40094af8,uVar2);
  FUN_ram_40032a1a(&DAT_ram_40094748);
LAB_ram_40011dd2:
  uVar2 = 0;
  do {
    if ((1 << (uVar2 & 0x1f) & uVar4) != 0) {
      fence();
      fence();
      *(uint *)(&DAT_ram_10200260 + uVar2 * 4) = *(uint *)(&DAT_ram_10200260 + uVar2 * 4) | 2;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 5);
  FUN_ram_40011004(0);
  fence();
  fence();
  _DAT_ram_10200204 = _DAT_ram_10200204 | 0x100;
  FUN_ram_400110e0(param_1 * 7 + 0x3005e350);
  if ((1 << (param_1 & 0x1f) & uVar4) != 0) {
    FUN_ram_40011c5e(param_1,*(undefined4 *)(&DAT_ram_3005e264 + param_1 * 0x18),
                     *(undefined4 *)(&DAT_ram_3005e270 + param_1 * 0x18));
  }
  iVar1 = 0x3005e350;
  puVar5 = &DAT_ram_3005e240;
  uVar2 = 0;
  do {
    if (((1 << (uVar2 & 0x1f) & uVar4) != 0) && (param_1 != uVar2)) {
      FUN_ram_400110e0(iVar1);
      FUN_ram_40011c5e(uVar2 & 0xff,*(undefined4 *)(puVar5 + 0x24),*(undefined4 *)(puVar5 + 0x30));
    }
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 7;
    puVar5 = puVar5 + 0x18;
  } while (uVar2 != 5);
  return 0;
}


/* NanoCore 1.11, address 0x40011eaa.
 * REA evidence: ev_a3d7e3a905d5a156cefbd72155b4d2acf606327ad30f1204d1b2e1981c54b7aa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40011eaa(uint param_1,uint param_2,uint param_3,int param_4)

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
  *(uint *)(&DAT_ram_3005e2dc + iVar4) = param_2;
  *(uint *)(&DAT_ram_3005e2e8 + iVar4) = param_3;
  *(undefined4 *)(&DAT_ram_3005e2ec + iVar4) = 0;
  if ((((param_4 == 0) || (param_1 == 0)) || (param_3 == 0)) ||
     (((param_2 + param_3 | param_2) & 0x1f) == 0)) {
    FUN_ram_40010f0a(&DAT_ram_3005e2d8 + param_1 * 0x18,0x3005e580);
    if (param_3 == 0) goto LAB_ram_40011fc6;
  }
  else {
    if ((*(int *)(&DAT_ram_3005e2e0 + iVar4) == 0) ||
       (*(uint *)(iVar4 + 0x3005e2e4) != (param_3 + 0x1f & 0xffffffe0))) {
      FUN_ram_40010f0a(&DAT_ram_3005e2d8 + param_1 * 0x18,0x3005e580);
      iVar4 = FUN_ram_40010f2e(&DAT_ram_3005e2d8 + param_1 * 0x18,param_3,0x3005e580);
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    param_2 = *(uint *)(&DAT_ram_3005e2e0 + param_1 * 0x18);
  }
  FUN_ram_40010e04(param_2,param_3 + 0x1f & 0xffffffe0);
LAB_ram_40011fc6:
  puVar3 = (uint *)(&DAT_ram_102002c0 + iVar7);
  fence();
  uVar2 = *puVar3 & 0x80000000;
  if (param_3 == 0) {
    fence();
    *puVar3 = *(ushort *)(&DAT_ram_3005e2d8 + param_1 * 0x18) | uVar2 | 0x80000;
  }
  else {
    if (param_1 == 0) {
      _DAT_ram_3005e2e8 = (uint)_DAT_ram_3005e2d8;
      if (param_3 < _DAT_ram_3005e2d8) {
        _DAT_ram_3005e2e8 = param_3;
      }
      fence();
      _DAT_ram_102002c0 = _DAT_ram_3005e2e8 | uVar2 | 0x80000;
    }
    else {
      uVar5 = (uint)*(ushort *)(&DAT_ram_3005e2d8 + param_1 * 0x18);
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
    if (*(char *)(param_1 * 0x18 + 0x3005e2da) == '\x01') {
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


