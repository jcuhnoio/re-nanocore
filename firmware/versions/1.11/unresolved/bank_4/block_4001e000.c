/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4001e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4001e22c.
 * REA evidence: ev_66a193066bb998764baf48a7c5376f23d9c6809a6bbcb78b3f4e721172173534
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001e22c(undefined4 param_1,undefined4 param_2)

{
  _DAT_ram_3006b198 = param_2;
  _DAT_ram_3006b19c = param_1;
  FUN_ram_4001b372();
  return;
}


/* NanoCore 1.11, address 0x4001e240.
 * REA evidence: ev_b7262bcb01f49d5b7506dcfd6926a573da7ac8caf3501a7d705cfb1cd5120340
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001e240(void)

{
  FUN_ram_4001d526();
  DAT_ram_3006aa2a = 0;
  DAT_ram_3006ad7c = 0;
  if (_DAT_ram_3006aa70 != 0) {
    FUN_ram_40043fd6(_DAT_ram_3006aa70,1);
  }
  FUN_ram_40017d52(0);
  return;
}


/* NanoCore 1.11, address 0x4001e272.
 * REA evidence: ev_534f7dce82a3dfd61f83c17bacf9547a9f0fd5f32abc0bc3aa7bb1b7c0f77931
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4001e272(void)

{
  return DAT_ram_3006aa2a;
}


/* NanoCore 1.11, address 0x4001e27c.
 * REA evidence: ev_dabc2c611c6dcfcde40a7f8c8e5e629ae39a227184efccd11f8fb942a8cac222
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001e27c(undefined1 param_1)

{
  DAT_ram_3006ad7c = param_1;
  return;
}


/* NanoCore 1.11, address 0x4001e286.
 * REA evidence: ev_1a1ad323b32d2811f46663f099015a5c6fbeac87b9b75cdb90722c600568cb64
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001e286(void)

{
  undefined3 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_ram_3006aa2a != '\0') {
    iVar2 = FUN_ram_4001a7dc();
    if (iVar2 == 0) {
      uVar3 = FUN_ram_4001ba40(_DAT_ram_3006ad80);
    }
    else {
      uVar3 = 0;
    }
    FUN_ram_40017d52(uVar3);
    uVar1 = FUN_ram_40016cb8(DAT_ram_3006aa74);
    FUN_ram_40017ede(uVar1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4001e2da.
 * REA evidence: ev_03fed546ed36ebcb8767cb09a22b1e03bc09928478b03480ef8d016b493ecde2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001e2da(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  code *pcVar9;
  
  iVar1 = _DAT_ram_3006ad80;
  if (DAT_ram_3006aa2a == '\0') {
    return 0;
  }
  if (DAT_ram_3006aa74 != '\0') {
    if (_DAT_ram_3006aa78 == 100) {
      if ((_DAT_ram_3006aa7c == 0) ||
         (iVar1 = FUN_ram_400051f8(_DAT_ram_3006aa7c,&DAT_ram_40095bb8,0x10), iVar1 != 0)) {
        if ((_DAT_ram_3006aa7c == 0) ||
           (iVar1 = FUN_ram_400051f8(_DAT_ram_3006aa7c,&DAT_ram_4009501c,0x10), iVar1 != 0))
        goto LAB_ram_4001e358;
        pcVar9 = FUN_ram_4001c280;
        puVar8 = &DAT_ram_30049de0;
        puVar7 = &DAT_ram_30049ddc;
        pcVar6 = FUN_ram_4001ad0e;
        puVar4 = &DAT_ram_3006af20;
        puVar2 = &DAT_ram_4009501c;
      }
      else {
        pcVar9 = FUN_ram_4001c1ce;
        puVar8 = &DAT_ram_30049dbc;
        puVar7 = &DAT_ram_30049db8;
        pcVar6 = FUN_ram_4001b904;
        puVar4 = &DAT_ram_3006a79c;
        puVar2 = &DAT_ram_40095bb8;
      }
      FUN_ram_4001c38a(puVar2,puVar4,pcVar6,puVar7,puVar8,pcVar9);
    }
LAB_ram_4001e358:
    iVar5 = -1;
    uVar3 = 0;
    goto LAB_ram_4001e35c;
  }
  iVar5 = 0x66;
  if ((_DAT_ram_3006ad80 != (DAT_ram_3006adac != '\0') + 1) &&
     (iVar5 = 0x65, _DAT_ram_3006ad80 != 0)) {
    iVar5 = 1;
    if (DAT_ram_3006adac == '\0') {
      iVar5 = -1;
    }
    if (_DAT_ram_3006ad80 == iVar5) {
      if ((_DAT_ram_3006aa7c == 0) ||
         (iVar1 = FUN_ram_400051f8(_DAT_ram_3006aa7c,&DAT_ram_40095bb8,0x10),
         uVar3 = DAT_ram_30049db8, iVar1 != 0)) {
        if ((_DAT_ram_3006aa7c != 0) &&
           (iVar1 = FUN_ram_400051f8(_DAT_ram_3006aa7c,&DAT_ram_4009501c,0x10), iVar1 == 0)) {
          uVar3 = DAT_ram_30049ddc;
          if (DAT_ram_3006af20 == '\0') {
            FUN_ram_4001ad0e();
          }
          goto LAB_ram_4001e41a;
        }
      }
      else {
        if (DAT_ram_3006a79c == '\0') {
          FUN_ram_4001b904();
        }
        DAT_ram_30049dbc = uVar3;
        uVar3 = DAT_ram_30049de0;
LAB_ram_4001e41a:
        DAT_ram_30049de0 = uVar3;
        FUN_ram_4001bd9a(_DAT_ram_3006aa7c);
      }
      iVar5 = 100;
    }
    else {
      iVar5 = FUN_ram_4001a816(param_1,0x65);
      if (iVar1 < iVar5) {
        return 0;
      }
      iVar5 = iVar1 - iVar5;
    }
  }
  uVar3 = 1;
LAB_ram_4001e35c:
  FUN_ram_4001d622(uVar3,iVar5);
  return 0;
}


/* NanoCore 1.11, address 0x4001e46e.
 * REA evidence: ev_b3b0a74071f06966367ac28acdbdcdac124b438b7ec82be2aedc5a17204862ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001e46e(void)

{
  FUN_ram_4004cfba(0x3006aa30);
  FUN_ram_4004cfba(0x3006ad0c);
  FUN_ram_4004cfba(0x3006accc);
  FUN_ram_4004cfba(0x3006abbc);
  return;
}


/* NanoCore 1.11, address 0x4001e4a6.
 * REA evidence: ev_e93c81b8ae13059c78e055f783982b4b9320f222d8b084521c650eab4c32a079
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001e4a6(void)

{
  return _DAT_ram_3006aac0;
}


/* NanoCore 1.11, address 0x4001e4b0.
 * REA evidence: ev_c792bccac3d64cda47bfb1ef1c9ef6eda1679318bdf548e37b8cd4bb21e10913
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001e4b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_4001a8d0();
  FUN_ram_4001b3a4(uVar1,param_2);
  return;
}


/* NanoCore 1.11, address 0x4001e4c4.
 * REA evidence: ev_668b11755578ed6ec7d17346c796f14a2bfd35ce7c6759018138db1db160c7ed
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001e4c4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4001a8d0();
  if (-1 < iVar1) {
    uVar2 = FUN_ram_40022e34();
    return uVar2;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4001e4e0.
 * REA evidence: ev_2c2c8ed00b202df0f8c6dcfb21c6e978e79baabf540a7207aa371ba05cecffa7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_4001e4e0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_ram_4001a8d0();
  fVar2 = 0.0;
  if (-1 < iVar1) {
    fVar2 = 0.0;
    if (param_3 < 0xc) {
      iVar1 = FUN_ram_4001b0cc(CONCAT44(param_3,param_1),iVar1,param_3 & 0xff);
      fVar2 = (float)iVar1 / DAT_ram_40094e80;
    }
  }
  return fVar2;
}


/* NanoCore 1.11, address 0x4001e524.
 * REA evidence: ev_306059ccbc9c1596cd169ccc21dca400c9768dc8c0cd754c7af0aaee9f5159a3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001e524(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_10;
  
  iVar1 = FUN_ram_4001a8d0();
  if ((-1 < iVar1) && (param_3 < 0xc)) {
    iVar2 = FUN_ram_4001b0cc(CONCAT44(uStack_10,param_1));
    *(short *)((param_3 + iVar1 * 0xc) * 2 + 0x3006ae54) = (short)iVar2;
    FUN_ram_40022f42((float)iVar2 / DAT_ram_40094e80,iVar1,param_3 & 0xff);
    if ((DAT_ram_3006aa2a != '\0') &&
       (((iVar2 = FUN_ram_4001a8d0(_DAT_ram_3006aa7c), iVar2 == iVar1 &&
         (uVar3 = (uint)DAT_ram_3006ad4c * 0x50000 >> 0x10, (int)uVar3 <= (int)param_3)) &&
        ((int)param_3 < (int)(DAT_ram_3006adb4 + uVar3))))) {
      FUN_ram_4001b238(iVar2,param_3 - uVar3);
      FUN_ram_4001d458(param_3 - uVar3,1);
      return;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4001e5d8.
 * REA evidence: ev_f09550d95786114875c83c76fa060fc4b83078fb821f33a8dcf98bbf1aa3aff5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined8 FUN_ram_4001e5d8(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_ram_4001a8d0();
  if ((-1 < iVar1) && (param_2 < 0xc)) {
    uVar2 = FUN_ram_40022f90(iVar1,param_2 & 0xff);
    return uVar2;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4001e604.
 * REA evidence: ev_7a27eda3d6c570fc4b934c3810a505a83f7b692ecc5205ee7af966e365e34fe8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001e604(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4001a8d0();
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_ram_40022f10();
    *(char *)(iVar1 + 0x3006af14) = (char)uVar2;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4001e630.
 * REA evidence: ev_eacaabb019af8105e5c822c6596c49f66487a8878434419a098fec164604c502
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001e630(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    return 5;
  }
  iVar1 = FUN_ram_400251c6();
  uVar2 = 5;
  if (iVar1 != 0xff) {
    uVar3 = FUN_ram_4001e604(param_1);
    uVar2 = FUN_ram_4002662a(iVar1,uVar3,1);
    if (0xc < uVar2) {
      uVar2 = 0xc;
    }
    uVar2 = uVar2 & 0xff;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4001e636.
 * REA evidence: ev_df7796d759e0a881b219ab743afe9f6c147e4603e7e9cc8b7ca30552617e0566
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001e636(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_400251c6();
  uVar2 = 5;
  if (iVar1 != 0xff) {
    uVar3 = FUN_ram_4001e604(param_1);
    uVar2 = FUN_ram_4002662a(iVar1,uVar3,1);
    if (0xc < uVar2) {
      uVar2 = 0xc;
    }
    uVar2 = uVar2 & 0xff;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4001e678.
 * REA evidence: ev_c98739cba3af45f84792bd8f072937530b2e34307e1063c81ab4aac9bd3162fe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001e83e) */
/* WARNING: Removing unreachable block (ram,0x4001e842) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001e678(undefined *param_1)

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
  
  puVar1 = &DAT_ram_40095bb8;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  FUN_ram_4001d526();
  _DAT_ram_3006aa7c = puVar1;
  DAT_ram_3006adac = FUN_ram_4001a826(puVar1);
  iVar3 = FUN_ram_400051f8(puVar1,&DAT_ram_40095bb8,0x10);
  if (iVar3 == 0) {
    FUN_ram_4001b904();
  }
  else {
    iVar3 = FUN_ram_400051f8(puVar1,&DAT_ram_40095018,0x10);
    if (iVar3 == 0) {
      FUN_ram_4001abb8();
    }
    else {
      iVar3 = FUN_ram_400051f8(puVar1,&DAT_ram_4009501c,0x10);
      if (iVar3 == 0) {
        FUN_ram_4001ad0e();
      }
    }
  }
  DAT_ram_3006ad4c = 0;
  uVar4 = FUN_ram_4001e630(puVar1);
  DAT_ram_3006ad74 = (undefined1)uVar4;
  if (5 < uVar4) {
    uVar4 = 5;
  }
  DAT_ram_3006adb4 = (undefined1)uVar4;
  FUN_ram_4001bd9a(puVar1);
  local_30 = FUN_ram_40014984();
  iVar3 = FUN_ram_4002c4e4(3);
  iVar5 = FUN_ram_4002c502(3,&uStack_2c);
  if (iVar5 != 0) {
    local_30 = uStack_2c;
  }
  local_30 = local_30 & 0xffffff;
  if (_DAT_ram_3006aa70 != 0) {
    FUN_ram_400488da(_DAT_ram_3006aa70,local_30,0);
    FUN_ram_400488f8(_DAT_ram_3006aa70,0xff,0);
  }
  if (_DAT_ram_3006aa2c != 0) {
    if (iVar3 == 0) {
      FUN_ram_40043fd6(_DAT_ram_3006aa2c,1);
    }
    else {
      FUN_ram_40016e8a(_DAT_ram_3006aa2c,0x3006aa30);
    }
  }
  FUN_ram_40016c5e(0x3006aa80,0x40,puVar1);
  if (_DAT_ram_3006aac8 != 0) {
    iVar3 = FUN_ram_4001a8d0(puVar1);
    if ((((iVar3 < 0) || (_DAT_ram_3006b19c == 0)) || (_DAT_ram_3006b198 <= iVar3)) ||
       ((*(int *)(_DAT_ram_3006b19c + iVar3 * 4) == 0 || (iVar3 = FUN_ram_40056fc0(), iVar3 == 0))))
    {
      FUN_ram_40016e8a(_DAT_ram_3006aac8,0x3006aa80);
    }
    else {
      FUN_ram_400573e6(_DAT_ram_3006aac8,iVar3);
      FUN_ram_40043aac(_DAT_ram_3006aac8,1);
    }
  }
  iVar3 = FUN_ram_4001a8d0(puVar1);
  if (-1 < iVar3) {
    FUN_ram_4001ab08(_DAT_ram_3006aac8,*(undefined1 *)(iVar3 + 0x3006ae4c));
  }
  FUN_ram_4001ab1e();
  DAT_ram_30049dec = 0x28;
  DAT_ram_30049de8 = 0x28;
  iVar3 = FUN_ram_4004f5ea(0x3006abbc,&uStack_2c);
  if (((iVar3 == 1) && (uStack_28 != 0)) && (uStack_26 != 0)) {
    DAT_ram_30049de8 = (uint)uStack_26;
    DAT_ram_30049dec = (uint)uStack_28;
  }
  piVar2 = (int *)&DAT_ram_3006acb8;
  do {
    FUN_ram_40016e8a(*piVar2,0x3006abbc);
    if (*piVar2 != 0) {
      FUN_ram_40057260(*piVar2,(int)DAT_ram_30049dec / 2,(int)DAT_ram_30049de8 / 2);
    }
    piVar2 = piVar2 + 1;
  } while (piVar2 != (int *)0x3006accc);
  FUN_ram_4001d12e();
  return;
}


/* NanoCore 1.11, address 0x4001e8ae.
 * REA evidence: ev_4778327e5d78a6922c8645dad4561b725069926989bca90a66b269db15fc94d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001e8ae(void)

{
  DAT_ram_3006aa2a = 1;
  DAT_ram_3006ad7c = 0;
  FUN_ram_4001e678();
  if (_DAT_ram_3006aa70 != 0) {
    FUN_ram_40043aac(_DAT_ram_3006aa70,1);
  }
  FUN_ram_4001d622(0,0xffffffff);
  FUN_ram_4001c47e(0);
  return;
}


/* NanoCore 1.11, address 0x4001e8ea.
 * REA evidence: ev_b401a04a67b3de378b8e993bc99c6ae26a733882a15c1e3c834a1d7ad91cef57
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001e8ea(void)

{
  FUN_ram_4001c75e();
  FUN_ram_4001b372();
  if (DAT_ram_3006aa2a != '\0') {
    FUN_ram_4001e678(_DAT_ram_3006aa7c);
    FUN_ram_4001d12e();
    FUN_ram_4001bad8();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4001e91e.
 * REA evidence: ev_df4d28a194187bf1ee580e1d32f4b998ba094921fef337ed206d65dc74fa38fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001e91e(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_60 [7];
  
  uVar2 = DAT_ram_30049df4;
  uVar6 = DAT_ram_30049df0;
  puVar3 = local_60;
  DAT_ram_30049df0 = 0xffffffff;
  if (((-1 < (int)uVar6) && (DAT_ram_3006b208 != '\0')) &&
     (uVar4 = FUN_ram_4001a8d0(&DAT_ram_3006b208), -1 < (int)uVar4)) {
    bVar1 = false;
    if ((DAT_ram_3006aa2a != '\0') && (_DAT_ram_3006aa7c != 0)) {
      iVar5 = FUN_ram_400051f8(_DAT_ram_3006aa7c,&DAT_ram_3006b208,0x10);
      bVar1 = iVar5 == 0;
    }
    iVar5 = FUN_ram_400230ec(uVar4,uVar6 & 0xff);
    if (iVar5 == 0) {
      if (uVar4 == 1) {
        if ((int)uVar6 < 8) {
          DAT_ram_30049dd4 = uVar6 + 0x1e;
        }
        else {
          DAT_ram_30049dd4 = -1;
        }
      }
      memset(local_60,0,0x30);
      uVar6 = FUN_ram_40032bf8(uVar4 & 0xff,uVar6 & 0xff,local_60,0xc);
      for (uVar7 = 0; (uVar7 & 0xff) < uVar6; uVar7 = uVar7 + 1) {
        if (bVar1) {
          FUN_ram_4001e524(*puVar3,_DAT_ram_3006aa7c,uVar7);
        }
        FUN_ram_4001b8d2(*puVar3,&DAT_ram_3006b208,uVar7);
        FUN_ram_4001b144(uVar4,uVar7 & 0xff);
        puVar3 = (undefined8 *)((int)puVar3 + 4);
      }
      if (bVar1) {
        FUN_ram_4001bd9a(_DAT_ram_3006aa7c);
        DAT_ram_3006ad4c = 0;
        DAT_ram_3006ad74 = FUN_ram_4001e630(_DAT_ram_3006aa7c);
        FUN_ram_4001d12e();
        return;
      }
    }
    else {
      *(char *)(uVar4 + 0x3006af14) = (char)uVar2;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4001ea7c.
 * REA evidence: ev_adec58f04745ad185dabea24737a694cb268d35e69f7c4854abd36a903aada6b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001f074) */
/* WARNING: Removing unreachable block (ram,0x4001eea6) */
/* WARNING: Removing unreachable block (ram,0x4001ecee) */
/* WARNING: Removing unreachable block (ram,0x4001ece8) */
/* WARNING: Removing unreachable block (ram,0x4001f066) */
/* WARNING: Removing unreachable block (ram,0x4001f078) */
/* WARNING: Removing unreachable block (ram,0x4001eeac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001ea7c(uint param_1)

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
  code *pcVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  code *pcVar19;
  uint uVar20;
  uint uVar21;
  undefined1 uStack_44;
  undefined1 uStack_43;
  
  uVar21 = _DAT_ram_3006aa78;
  if (DAT_ram_3006aa2a == '\0') {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (DAT_ram_3006aa74 == '\0') {
    iVar9 = FUN_ram_4001a816();
    uVar21 = (uint)DAT_ram_3006ad74;
    if (uVar21 == 0) {
      uVar21 = 1;
    }
    uVar20 = (uint)DAT_ram_3006ad4c;
    if (_DAT_ram_3006ad80 < iVar9) {
      iVar10 = _DAT_ram_3006ad80;
      if (_DAT_ram_3006ad80 < 0) {
        iVar10 = 0;
      }
    }
    else {
      iVar10 = (_DAT_ram_3006ad80 - iVar9) + uVar20 * 5;
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
      if (uVar20 != 0) {
        DAT_ram_3006ad4c = 0;
        FUN_ram_4001d12e();
      }
    }
    else {
      uVar21 = (iVar10 - iVar9) / 5;
      if (uVar20 != uVar21) {
        DAT_ram_3006ad4c = (byte)uVar21;
        FUN_ram_4001d12e();
      }
      iVar10 = iVar9 + (iVar10 - iVar9) % 5;
    }
  }
  else {
    if (_DAT_ram_3006aa78 < 5) {
      iVar9 = FUN_ram_4001a8d0(_DAT_ram_3006aa7c);
      if (iVar9 < 0) {
        return;
      }
      if ((uint)DAT_ram_3006adb4 <= (uVar21 & 0xff)) {
        return;
      }
      iVar10 = FUN_ram_4001b1bc(uVar21);
      uVar20 = (uint)*(ushort *)((iVar10 + iVar9 * 0xc) * 2 + 0x3006ae54);
      iVar11 = FUN_ram_4001af80(iVar9,iVar10,&uStack_44);
      if (iVar11 == 0) {
        iVar11 = thunk_FUN_ram_40024d98(0x3006b128,uVar21,param_1);
        uVar14 = iVar11 + uVar20;
      }
      else {
        iVar11 = 1;
        if ((int)param_1 < 1) {
          iVar11 = -1;
        }
        iVar12 = FUN_ram_4001a65c(&uStack_44,uVar20);
        iVar13 = FUN_ram_4001a61e(&uStack_44);
        iVar12 = iVar12 + ((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f)) * iVar11;
        iVar11 = 0;
        if ((-1 < iVar12) && (iVar11 = iVar13 + -1, iVar12 < iVar13 + -1)) {
          iVar11 = iVar12;
        }
        uVar14 = FUN_ram_4001a71e(&uStack_44,iVar11);
      }
      if ((int)uVar14 < 0x3e9) {
        if ((int)uVar14 < 0) {
          uVar14 = 0;
        }
      }
      else {
        uVar14 = 1000;
      }
      if (uVar20 == uVar14) {
        return;
      }
      *(short *)((iVar10 + iVar9 * 0xc) * 2 + 0x3006ae54) = (short)uVar14;
      FUN_ram_4001b8d2((float)(int)uVar14 / DAT_ram_40094e80,
                       *(undefined4 *)(&DAT_ram_40095398 + iVar9 * 4),iVar10);
      if (DAT_ram_3006aa2a != '\0') {
        FUN_ram_4001b238(iVar9,uVar21);
      }
      iVar11 = _DAT_ram_3006b130;
      (&DAT_ram_3006b134)[iVar10 + iVar9 * 0xc] = 1;
      DAT_ram_3006b194 = (byte)(1 << (uVar21 & 0x1f)) | DAT_ram_3006b194;
      if (iVar11 != 0) {
        FUN_ram_4004c81a(iVar11,0xc);
        FUN_ram_4004c83c(_DAT_ram_3006b130,1);
        FUN_ram_4004c840(_DAT_ram_3006b130);
        return;
      }
      _DAT_ram_3006b130 = FUN_ram_4004c5b4(FUN_ram_4001d676,0xc,0);
      if (_DAT_ram_3006b130 == 0) {
        FUN_ram_4001d526();
        return;
      }
      FUN_ram_4004c83c(_DAT_ram_3006b130,1);
      return;
    }
    if (_DAT_ram_3006aa78 == 0x66) {
      iVar9 = FUN_ram_4001a8d0(_DAT_ram_3006aa7c);
      if (iVar9 < 0) {
        return;
      }
      cVar7 = *(char *)(iVar9 + 0x3006ae4c);
      bVar2 = 0 < (int)param_1;
      if (bVar2 == (bool)cVar7) {
        return;
      }
      FUN_ram_4001b3a4(iVar9,bVar2);
      if ((_DAT_ram_3006aa7c != 0) &&
         ((iVar10 = FUN_ram_400251c6(), iVar10 == 0xff ||
          (iVar10 = FUN_ram_40023072(iVar10,bVar2), iVar10 != 0)))) {
        FUN_ram_4001b3a4(iVar9,cVar7);
        return;
      }
      uStack_44 = (undefined1)iVar9;
      uStack_43 = bVar2;
      FUN_ram_40013eec(0x61,&uStack_44,2);
      return;
    }
    if (_DAT_ram_3006aa78 != 0x65) {
      if (_DAT_ram_3006aa78 != 100) {
        return;
      }
      iVar9 = FUN_ram_4001a826(_DAT_ram_3006aa7c);
      if (iVar9 == 0) {
        return;
      }
      if ((_DAT_ram_3006aa7c == 0) ||
         (iVar9 = FUN_ram_400051f8(_DAT_ram_3006aa7c,&DAT_ram_40095bb8,0x10), iVar9 != 0)) {
        if ((_DAT_ram_3006aa7c == 0) ||
           (iVar9 = FUN_ram_400051f8(_DAT_ram_3006aa7c,&DAT_ram_4009501c,0x10), iVar9 != 0)) {
          bVar2 = false;
          if (_DAT_ram_3006aa7c != 0) {
            iVar9 = FUN_ram_400051f8(_DAT_ram_3006aa7c,&DAT_ram_40095014,0x10);
            bVar2 = iVar9 == 0;
          }
          bVar3 = false;
          if (_DAT_ram_3006aa7c != 0) {
            iVar9 = FUN_ram_400051f8(_DAT_ram_3006aa7c,&DAT_ram_40095018,0x10);
            bVar3 = iVar9 == 0;
          }
          bVar4 = false;
          if (_DAT_ram_3006aa7c != 0) {
            iVar9 = FUN_ram_400051f8(_DAT_ram_3006aa7c,&DAT_ram_40095028,0x10);
            bVar4 = iVar9 == 0;
          }
          bVar5 = false;
          if (_DAT_ram_3006aa7c != 0) {
            iVar9 = FUN_ram_400051f8(_DAT_ram_3006aa7c,s_delay_ram_40095020,0x10);
            bVar5 = iVar9 == 0;
          }
          bVar6 = false;
          if (_DAT_ram_3006aa7c != 0) {
            iVar9 = FUN_ram_400051f8(_DAT_ram_3006aa7c,s_reverb_ram_4009502c,0x10);
            bVar6 = iVar9 == 0;
          }
          iVar9 = 4;
          if ((!bVar2) && (iVar9 = 0xc, !bVar3)) {
            if (bVar4) {
              iVar9 = FUN_ram_400252b8(5);
            }
            else {
              iVar9 = 8;
              if (!(bool)(bVar5 | bVar6)) {
                if (_DAT_ram_3006aa7c != 0) {
                  iVar10 = FUN_ram_400051f8(_DAT_ram_3006aa7c,&DAT_ram_40095034,0x10);
                  iVar9 = 3;
                  if (iVar10 == 0) goto LAB_ram_4001ee82;
                }
                iVar9 = 1;
              }
            }
          }
LAB_ram_4001ee82:
          iVar10 = FUN_ram_4001a8d0(_DAT_ram_3006aa7c);
          if (iVar10 < 0) {
            return;
          }
          uVar21 = (uint)*(byte *)(iVar10 + 0x3006af14);
          if (bVar6) {
            iVar9 = FUN_ram_4001ba0e(uVar21);
            iVar9 = ((int)param_1 % 7 + iVar9) % 7;
            if (iVar9 < 0) {
              iVar9 = iVar9 + 7;
            }
            param_1 = (uint)(byte)(&DAT_ram_400953b8)[iVar9];
          }
          else if (bVar4) {
            iVar9 = FUN_ram_400252b8(5);
            iVar11 = FUN_ram_400252e8(5,uVar21);
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
            param_1 = FUN_ram_400252c6(5,param_1 & 0xff);
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
          iVar9 = _DAT_ram_3006aa7c;
          *(char *)(iVar10 + 0x3006af14) = (char)param_1;
          FUN_ram_4001bd9a(iVar9);
          if ((int)DAT_ram_30049df0 < 0) {
            DAT_ram_30049df4 = uVar21;
          }
          DAT_ram_30049df0 = param_1;
          FUN_ram_400051b2(&DAT_ram_3006b208,_DAT_ram_3006aa7c,0x10);
          if ((bVar3) && (param_1 < 8)) {
            if (_DAT_ram_3006b218 != 0) {
              FUN_ram_4004c61a();
              _DAT_ram_3006b218 = 0;
            }
          }
          else {
            if (_DAT_ram_3006b218 != 0) {
              FUN_ram_4004c81a(_DAT_ram_3006b218,0x4b);
              FUN_ram_4004c83c(_DAT_ram_3006b218,1);
              FUN_ram_4004c840(_DAT_ram_3006b218);
              return;
            }
            _DAT_ram_3006b218 = FUN_ram_4004c5b4(&LAB_ram_4001f0aa,0x4b,0);
            if (_DAT_ram_3006b218 != 0) {
              FUN_ram_4004c83c(_DAT_ram_3006b218,1);
              return;
            }
          }
          FUN_ram_4001e91e();
          return;
        }
        pcVar19 = (code *)&DAT_ram_4001b8ae;
        uVar18 = 0x3006b108;
        puVar17 = &DAT_ram_30049de0;
        puVar16 = &DAT_ram_30049ddc;
        pcVar15 = FUN_ram_4001ad0e;
        uVar1 = DAT_ram_3006af20;
      }
      else {
        pcVar19 = FUN_ram_4001b88a;
        uVar18 = 0x3006aa04;
        puVar17 = &DAT_ram_30049dbc;
        puVar16 = &DAT_ram_30049db8;
        pcVar15 = FUN_ram_4001b904;
        uVar1 = DAT_ram_3006a79c;
      }
      FUN_ram_4001c332(param_1,uVar1,pcVar15,puVar16,puVar17,uVar18,pcVar19);
      return;
    }
    iVar9 = 0;
    do {
      if ((_DAT_ram_3006aa7c != 0) &&
         (iVar10 = FUN_ram_400051f8(_DAT_ram_3006aa7c,*(undefined4 *)(&DAT_ram_40095398 + iVar9 * 4)
                                    ,0x10), iVar10 == 0)) goto LAB_ram_4001ece6;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 8);
    iVar9 = 0;
LAB_ram_4001ece6:
    iVar9 = ((int)param_1 % 8 + iVar9) % 8;
    if (iVar9 < 0) {
      iVar9 = iVar9 + 8;
    }
    FUN_ram_4001e678(*(undefined4 *)(&DAT_ram_40095398 + iVar9 * 4));
    iVar10 = 0;
  }
  FUN_ram_4001c47e(iVar10);
  return;
}


