/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40008000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400080a8.
 * REA evidence: ev_ae79d40e6123a8939a94659b1f78950ebf9c49bc2cab7896d9c34480e25445d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400080a8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = nc_dsp_active_bank(0x3004ee20);
  iVar2 = nc_dsp_inactive_bank(0x3004ee20);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      uVar4 = FUN_ram_40066d3e(param_1);
      FUN_ram_4000303c(iVar2,iVar1,0x308);
      if ((*(int *)(iVar1 + 0x220) != 6) || (*(byte *)(iVar1 + 0x224) != uVar4)) {
        FUN_ram_40066e8e(iVar2 + 0x228,0xc,uVar4);
      }
      *(undefined4 *)(iVar2 + 0x220) = 6;
      *(undefined4 *)(iVar2 + 0x264) = _DAT_ram_3004f714;
      *(char *)(iVar2 + 0x224) = (char)uVar4;
      FUN_ram_40007e94(iVar2,7);
      nc_dsp_publish_bank(0x3004ee20);
      FUN_ram_40066d64(_DAT_ram_3004f714);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x4000814c.
 * REA evidence: ev_b506ac8f2612adfe59340df1dfcecdd7c2121c8a92cfe67a98ec7b264127047e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000814c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = nc_dsp_active_bank(0x3004ee20);
  iVar2 = nc_dsp_inactive_bank(0x3004ee20);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      uVar4 = FUN_ram_40068cce(param_1);
      FUN_ram_4000303c(iVar2,iVar1,0x308);
      if ((*(int *)(iVar1 + 0x26c) != 10) || (*(byte *)(iVar1 + 0x270) != uVar4)) {
        FUN_ram_40068cda(iVar2 + 0x274,0xc,uVar4);
      }
      *(undefined4 *)(iVar2 + 0x26c) = 10;
      *(undefined4 *)(iVar2 + 0x2b0) = _DAT_ram_3004f71c;
      *(char *)(iVar2 + 0x270) = (char)uVar4;
      FUN_ram_40007e94(iVar2,8);
      nc_dsp_publish_bank(0x3004ee20);
      FUN_ram_40068c92(_DAT_ram_3004f71c);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x400081f0.
 * REA evidence: ev_41e63567988829064f2b42d4eb1521fc7043d9b4384c2c6d2d2652503582a860
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400081f0(int param_1,int param_2,uint *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  
  iVar5 = 0;
  uVar1 = 0;
  uVar2 = 0;
  while( true ) {
    uVar4 = (uint)(uVar1 >> 0x20);
    if (iVar5 == param_2) break;
    iVar3 = *(int *)(param_1 + iVar5 * 4);
    iVar5 = iVar5 + 1;
    uVar6 = iVar3 >> 8;
    uVar4 = iVar3 >> 0x1f;
    uVar4 = (uVar4 ^ uVar6) - uVar4;
    if (uVar2 < uVar4) {
      uVar2 = uVar4;
    }
    uVar1 = (longlong)(int)uVar6 * (longlong)(int)uVar6 + uVar1;
  }
  *param_3 = uVar2;
  if (iVar5 == 0x80) {
    uVar7 = CONCAT44(uVar4 >> 7,(int)(uVar1 >> 7));
  }
  else {
    uVar7 = FUN_ram_40003bf8((int)uVar1,uVar4,iVar5,0);
  }
  *param_4 = uVar7;
  return;
}


/* NanoCore 1.12, address 0x40008252.
 * REA evidence: ev_f013ae71176a62592a3e6226b26a196ce3a9ed007b9a1a8fd3654b13277ba516
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40008252(int param_1,uint param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  fVar1 = DAT_ram_3004ac88;
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1 & 0xffff) {
    iVar4 = *(int *)(param_1 + uVar2 * 8);
    FUN_ram_400002f4();
    if (DAT_ram_30058c84 != '\0') {
      uVar3 = _DAT_ram_30058c82 + 1 & 0x1fff;
      if ((_DAT_ram_30058c80 == uVar3) || ((uint)_DAT_ram_30058c80 == (uVar3 + 1 & 0x1fff))) {
        _DAT_ram_3004f788 = _DAT_ram_3004f788 + 1;
      }
      else {
        iVar4 = (int)((float)(iVar4 >> 0x10) * fVar1);
        if (iVar4 < -0x8000) {
          iVar4 = -0x8000;
        }
        if (0x7fff < iVar4) {
          iVar4 = 0x7fff;
        }
        *(short *)((uint)_DAT_ram_30058c82 * 2 + 0x30054c80) = (short)iVar4;
        *(short *)(uVar3 * 2 + 0x30054c80) = (short)iVar4;
        _DAT_ram_30058c82 = (ushort)(uVar3 + 1) & 0x1fff;
      }
    }
    FUN_ram_400002fa();
  }
  return;
}


/* NanoCore 1.12, address 0x40008358.
 * REA evidence: ev_824e8489f6de9c727013a9c67002c408166ecdfdb56539a72743b7867a3a035f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40008358(int param_1)

{
  _DAT_ram_3004e468 = _DAT_ram_3004e468 + param_1;
  DAT_ram_3004ab40 = param_1 + DAT_ram_3004ab40;
  return;
}


/* NanoCore 1.12, address 0x400083aa.
 * REA evidence: ev_616f95e537155de112b30cd2d38ca3a4308f85a05aa675f8145b2ef4570ae29a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400083aa(int param_1,undefined1 param_2,undefined4 param_3)

{
  FUN_ram_400002f4();
  param_1 = param_1 * 0xc;
  *(undefined1 *)(param_1 + 0x3004e404) = param_2;
  *(undefined4 *)(param_1 + 0x3004e408) = param_3;
  *(int *)(param_1 + 0x3004e400) = *(int *)(param_1 + 0x3004e400) + 1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x400083ea.
 * REA evidence: ev_d8e69aa2e54ae54bfffdb7529f4fd277931dfe104a838ebd7c7e438d11ef513b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400083ea(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_ram_4003b7e2();
  if (-1 < (int)uVar2) {
    iVar1 = (int)uVar2 >> 5;
    uVar2 = uVar2 & 0x1f;
    if (param_2 == 0) {
      FUN_ram_4003b862(iVar1,uVar2);
    }
    else {
      FUN_ram_4003b890(iVar1,uVar2);
    }
    FUN_ram_4003b9d6(iVar1,uVar2,1);
    FUN_ram_4003ba50(iVar1,uVar2,0);
    FUN_ram_4003ba10(iVar1,uVar2,3);
    FUN_ram_4003bb12(iVar1,uVar2);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40008452.
 * REA evidence: ev_4ec74ed6e64e5ac1edc3e40a69c64e48ce5b88d1462d17f40d65db2aeee99a8b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40008452(undefined1 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  if (DAT_ram_30051818 != '\0') {
    param_1 = 0;
  }
  FUN_ram_400083ea(s_PD_16_ram_40096694,param_1);
  FUN_ram_400002fa(uVar1);
  return;
}


/* NanoCore 1.12, address 0x400084dc.
 * REA evidence: ev_05e9de581441db797839b2be8423c5a74b43f4f2ddc1d5c8c0356c6a80f1688d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400084dc(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = nc_fx2_load_drive_slot(DAT_ram_3004ab1e);
  if (iVar2 == 0) {
    uVar3 = 0;
    if ((0x1d < DAT_ram_3004ab1e) && ((byte)(DAT_ram_3004ab1e - 0x1e) < 8)) {
      DAT_ram_3004f730 = DAT_ram_3004ab1e - 0x1e;
    }
  }
  else {
    cVar1 = '\0';
    do {
      iVar2 = nc_fx2_load_drive_slot(cVar1 + '\x1e');
      if (iVar2 == 0) {
        DAT_ram_3004f730 = cVar1;
        return 0;
      }
      cVar1 = cVar1 + '\x01';
    } while (cVar1 != '\b');
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x400086c0.
 * REA evidence: ev_65cbf79eb5d28530c9a0b0cbb31c27a266763515f884d90be8d88c4d200b79db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_400086c0(void)

{
  int iVar1;
  
  if (_DAT_ram_3004f6b0 != 0) {
    iVar1 = FUN_ram_40006382();
    return _DAT_ram_3004f6e0 == iVar1;
  }
  return false;
}


/* NanoCore 1.12, address 0x400086ec.
 * REA evidence: ev_a10a28bfecce4cb237a0e78b8a57f18ec08ad0254512cbeb6df0a16dc4299feb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400086ec(void)

{
  if (DAT_ram_3004e4a4 != '\0') {
    FUN_ram_40004a22(0x3004e478,0xffffffff);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40008706.
 * REA evidence: ev_e8c16e75f3fd5525f326891cce30f9f68a781cd0a7cdda13083808331c867008
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40008706(int param_1)

{
  if (param_1 == 8) {
    FUN_ram_4006c7ca();
    return;
  }
  if (param_1 != 9) {
    FUN_ram_4006c878();
    return;
  }
  FUN_ram_4006c7d4(_DAT_ram_3005180c);
  return;
}


/* NanoCore 1.12, address 0x40008728.
 * REA evidence: ev_012cef121d7b11788dbfc0918b8355048235748a8e5526938cb755620a7f1324
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40008728(undefined1 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  iVar1 = FUN_ram_400086c0();
  if (iVar1 == 0) {
    if (DAT_ram_3004f6e4 == '\0') {
      iVar1 = 0;
      if (DAT_ram_3004ea1c != '\0') {
        iVar1 = -(uint)(DAT_ram_30051819 == '\0');
      }
    }
    else {
      iVar1 = FUN_ram_40007c9a();
      if (iVar1 == 0) {
        *param_1 = 1;
        iVar1 = 0;
      }
      else {
        iVar1 = -1;
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4000877c.
 * REA evidence: ev_c25497a3b688123f0d0253603083bb1561e94aa95a25b2ec59d22a0693b11af4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000877c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_ram_40006382();
  uVar1 = _DAT_ram_3004f694;
  if ((DAT_ram_3004f6e4 != '\0') && (_DAT_ram_3004f6e0 == iVar2)) {
    if (_DAT_ram_3004f6b0 != 0) {
      if (_DAT_ram_3004f6b0 == 1) {
        uVar3 = FUN_ram_400002f4();
        FUN_ram_40022dc8(&DAT_ram_3004f694,uVar1);
        if ((DAT_ram_3004ea1c == '\0') || (DAT_ram_30051819 != '\0')) {
          FUN_ram_40022df2(&DAT_ram_3004f694);
        }
        FUN_ram_400002fa(uVar3);
        FUN_ram_40007c1e(0x3004f69c,uVar1);
        _DAT_ram_3004f6b0 = 0;
        _DAT_ram_3004f6e0 = 0;
        FUN_ram_40004b14(0x3004f6b4);
        return;
      }
      _DAT_ram_3004f6b0 = _DAT_ram_3004f6b0 + -1;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40008838.
 * REA evidence: ev_13503561a2be8027a26ceafd322936052f158168f5711d8ea393fa0fca318281
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40008838(code *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40007c9a();
  if (iVar1 == 0) {
    FUN_ram_400086ec();
    uVar2 = (*param_1)(param_2);
    FUN_ram_40007bb6();
    FUN_ram_4000877c();
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4000886c.
 * REA evidence: ev_7e8f1caf77c6068ea44d5b7818e22c68c7b6263d0a1d642b289b031947c9b4c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000886c(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_4000877c();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40008874.
 * REA evidence: ev_9d0c930cd40c6f57860478fbc32553968eaeb429d4a7362e3124f8554e3017df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40008874(undefined2 *param_1,undefined2 param_2)

{
  FUN_ram_400002f4();
  *param_1 = param_2;
  _DAT_ram_3004e3d0 = _DAT_ram_3004e3d0 + 1;
  FUN_ram_400002fa();
  FUN_ram_40004920(0x3004e3d8);
  return;
}


/* NanoCore 1.12, address 0x400088ac.
 * REA evidence: ev_c2a9032fd6392b367a1538ce6d92c026c5c9b8e8390d533dce80367741cda6ee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400088ac(int param_1)

{
  if ((param_1 != 0) && (DAT_ram_3004f6e4 != '\0')) {
    FUN_ram_40004920(0x3004f6e8);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400088c6.
 * REA evidence: ev_e593576a9eb09616b9074c29b6e33d638ff0e546b6b1f2e876459df1b22b433f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400088c6(undefined4 param_1)

{
  FUN_ram_40022e30(&DAT_ram_3004f694,0,0,param_1);
  FUN_ram_400088ac();
  return;
}


/* NanoCore 1.12, address 0x400088e4.
 * REA evidence: ev_eb852e83cb2c7aed422f4f9919eda8f04186e9db51a1c09a5d13d6664de8616a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400088e4(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    if ((*(char *)((int)param_1 + uVar1 + 0x38) != '\0') &&
       (iVar2 = FUN_ram_4005ff04(*param_1,*(undefined1 *)(param_1 + 1),uVar1 & 0xff), iVar2 == 0)) {
      *(undefined1 *)((int)param_1 + uVar1 + 0x38) = 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0xc);
  return;
}


/* NanoCore 1.12, address 0x40008928.
 * REA evidence: ev_008bb1965cb7280aebb9ebd3601d8a7dd7bc398e7168a9d7f57fb4fc6a689a23
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40008928(uint param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = nc_dsp_active_bank(0x3004ee20);
  iVar3 = nc_dsp_inactive_bank(0x3004ee20);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  if (iVar3 != 0) {
    if (7 < param_1) {
      param_1 = 0;
    }
    FUN_ram_4000303c(iVar3,iVar2,0x308);
    if ((*(int *)(iVar2 + 0x188) != 5) || (bVar1 = false, *(byte *)(iVar2 + 0x18c) != param_1)) {
      FUN_ram_400658f8(iVar3 + 400,0xc,param_1);
      bVar1 = true;
    }
    *(undefined4 *)(iVar3 + 0x188) = 5;
    iVar2 = _DAT_ram_3004e524;
    *(char *)(iVar3 + 0x18c) = (char)param_1;
    *(int *)(iVar3 + 0x1cc) = iVar2;
    FUN_ram_40007e94(iVar3,5);
    FUN_ram_400088e4(iVar3 + 0x188);
    if (bVar1) {
      FUN_ram_40065c3e(_DAT_ram_3004e524,FUN_ram_40007dde);
      *(char *)(_DAT_ram_3004e524 + 0x20) = (char)param_1;
    }
    nc_dsp_publish_bank(0x3004ee20);
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x400089f6.
 * REA evidence: ev_0fdd8340248a3d3b6ac583f05e874dd869295d70f439a07b9740affd544a2b02
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400089f6(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = nc_dsp_active_bank(0x3004ee20);
  iVar3 = nc_dsp_inactive_bank(0x3004ee20);
  uVar4 = 0xffffffff;
  if ((iVar2 != 0) && (uVar4 = 0xffffffff, iVar3 != 0)) {
    if ((param_1 - 5 & 0xff) < 3) {
      FUN_ram_4000303c(iVar3,iVar2,0x308);
      uVar1 = param_1 + 3 & 0xff;
      if ((*(int *)(iVar2 + 0x1d4) != 8) || (*(byte *)(iVar2 + 0x1d8) != uVar1)) {
        FUN_ram_4006c932(iVar3 + 0x1dc,0xc,uVar1);
      }
      *(undefined4 *)(iVar3 + 0x1d4) = 8;
      *(undefined4 *)(iVar3 + 0x218) = _DAT_ram_3005180c;
      *(char *)(iVar3 + 0x1d8) = (char)(param_1 + 3);
      FUN_ram_40007e94(iVar3,6);
      FUN_ram_400088e4(iVar3 + 0x1d4);
      nc_dsp_publish_bank(0x3004ee20);
      FUN_ram_40008706(uVar1);
    }
    else {
      if (0x11 < param_1) {
        param_1 = 0;
      }
      FUN_ram_4000303c(iVar3,iVar2,0x308);
      if ((*(int *)(iVar2 + 0x1d4) != 4) || (*(byte *)(iVar2 + 0x1d8) != param_1)) {
        nc_mod_default_parameters(iVar3 + 0x1dc,0xc,param_1);
      }
      *(undefined4 *)(iVar3 + 0x1d4) = 4;
      *(undefined4 *)(iVar3 + 0x218) = _DAT_ram_30051814;
      *(char *)(iVar3 + 0x1d8) = (char)param_1;
      FUN_ram_40007e94(iVar3,6);
      FUN_ram_400088e4(iVar3 + 0x1d4);
      nc_dsp_publish_bank(0x3004ee20);
      FUN_ram_40070fd8(_DAT_ram_30051814);
    }
    uVar4 = 0;
  }
  return uVar4;
}


/* NanoCore 1.12, address 0x40008b28.
 * REA evidence: ev_901cb2397a99b8b85fa133f7348c56e6035bcde5acafe5c13efabca4c65e2f56
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40008b28(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_ram_3005181c != 0) {
    iVar1 = FUN_ram_40073d90(_DAT_ram_3005181c);
    if (iVar1 == param_1) {
      return 0;
    }
    iVar1 = FUN_ram_400086c0();
    if (((iVar1 != 0) || (DAT_ram_3004ea1c == '\0')) || (DAT_ram_30051819 != '\0')) {
      FUN_ram_400086ec();
      iVar1 = nc_dsp_active_bank(0x3004ee20);
      iVar2 = nc_dsp_inactive_bank(0x3004ee20);
      if (((iVar1 != 0) && (iVar2 != 0)) &&
         ((*(int *)(iVar1 + 0xa4) == 3 && (*(char *)(iVar1 + 0xa9) != '\0')))) {
        FUN_ram_4000303c(iVar2,iVar1,0x308);
        *(undefined1 *)(iVar2 + 0xa9) = 0;
        nc_dsp_publish_bank(0x3004ee20);
        if ((DAT_ram_3004ea1c != '\0') && (DAT_ram_30051819 == '\0')) {
          FUN_ram_400064e4(5);
        }
      }
      FUN_ram_40073bb0(_DAT_ram_3005181c,param_1);
      FUN_ram_40007bb6();
      return 0;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40008bee.
 * REA evidence: ev_64c49caeeb200985c0a169f8c129af5d6fb7991a7a034d926ebd4ebf78eff7ca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40008bee(void)

{
  bool bVar1;
  int iVar2;
  
  FUN_ram_400002f4();
  DAT_ram_3004e4b4 = '\0';
  DAT_ram_3004e4bc = 1;
  iVar2 = 0x15;
  FUN_ram_400002fa();
  while ((DAT_ram_3004e4b4 == '\0' && (iVar2 = iVar2 + -1, iVar2 != 0))) {
    FUN_ram_400064e4(1);
  }
  bVar1 = DAT_ram_3004e4b4 != '\0';
  if (!bVar1) {
    FUN_ram_400002f4();
    DAT_ram_3004e4bc = 0;
    FUN_ram_400002fa();
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x40008c5a.
 * REA evidence: ev_495d02650857ba8017f79601c7bcfb4cf09052b4db171fb7bc63702ea129ec22
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40008c5a(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = _DAT_ram_3004f72c;
  iVar3 = FUN_ram_40007990(4,8);
  FUN_ram_400086ec();
  iVar4 = nc_dsp_active_bank(0x3004ee20);
  iVar5 = nc_dsp_inactive_bank(0x3004ee20);
  uVar2 = 0xffffffff;
  if ((iVar4 != 0) && (iVar5 != 0)) {
    FUN_ram_4000303c(iVar5,iVar4,0x308);
    *(undefined4 *)(iVar5 + 0x13c) = 8;
    uVar2 = DAT_ram_4009675c;
    *(undefined4 *)(iVar5 + 0x180) = uVar1;
    *(undefined4 *)(iVar5 + 0x144) = uVar2;
    *(undefined4 *)(iVar5 + 0x148) = uVar2;
    uVar1 = DAT_ram_40096760;
    *(bool *)(iVar5 + 0x141) = iVar3 != 0;
    *(undefined4 *)(iVar5 + 0x14c) = uVar1;
    nc_dsp_publish_bank(0x3004ee20);
    uVar2 = 0;
  }
  FUN_ram_40007bb6();
  return uVar2;
}


/* NanoCore 1.12, address 0x40008cf8.
 * REA evidence: ev_0ef5ff0b98e9d5a0b371d034d1e66071c619c378617659867b630ed2c4f5615c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40008cf8(int param_1)

{
  int iVar1;
  
  iVar1 = 0x40;
  do {
    if (*(int *)(param_1 + 0x8c) == 0) {
      return 0;
    }
    iVar1 = iVar1 + -1;
    FUN_ram_400064e4(1);
  } while (iVar1 != 0);
  return -(uint)(*(int *)(param_1 + 0x8c) != 0);
}


/* NanoCore 1.12, address 0x40008d30.
 * REA evidence: ev_a03ba0420b7d2b3d7131d6c7ce326f6da07d755c0d7091c925306a038dfb1a96
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40008d30(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 local_24 [3];
  
  FUN_ram_40074098(param_1,0xc);
  FUN_ram_40074098(local_24,5);
  iVar3 = 0;
  do {
    puVar1 = (undefined8 *)((int)local_24 + iVar3);
    puVar2 = (undefined8 *)(param_1 + iVar3);
    iVar3 = iVar3 + 4;
    *puVar2 = *puVar1;
  } while (iVar3 != 0x14);
  return;
}


/* NanoCore 1.12, address 0x40008d64.
 * REA evidence: ev_bad0eb69ba0ed68839fcbb59886c158bb7485ba2fdd23d979c4ad40060fd40b2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40008d64(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = nc_dsp_active_bank(0x3004ee20);
  iVar2 = nc_dsp_inactive_bank(0x3004ee20);
  if ((iVar1 == 0) || (iVar2 == 0)) {
    FUN_ram_4000771a(0);
  }
  else {
    if (param_1 == 0) {
      FUN_ram_4000771a(0);
      FUN_ram_4000303c(iVar2,iVar1,0x308);
      if (*(int *)(iVar1 + 0xc) != 1) {
        *(undefined1 *)(iVar2 + 0x10) = 0;
        FUN_ram_40008d30(iVar2 + 0x14);
      }
      *(undefined4 *)(iVar2 + 0x50) = 0x300518dc;
      *(undefined4 *)(iVar2 + 0xc) = 1;
      *(undefined2 *)(iVar2 + 0x10) = 0;
      nc_dsp_publish_bank(0x3004ee20);
      return 0;
    }
    iVar3 = nc_model_is_ready(0x30051880);
    if (iVar3 == 0) {
      FUN_ram_40007aea();
    }
    iVar3 = nc_model_is_ready(0x30051880);
    if (iVar3 != 0) {
      FUN_ram_4000771a(1);
      FUN_ram_4000303c(iVar2,iVar1,0x308);
      if (*(int *)(iVar1 + 0xc) != 1) {
        *(undefined1 *)(iVar2 + 0x10) = 0;
        FUN_ram_40008d30(iVar2 + 0x14);
      }
      *(undefined4 *)(iVar2 + 0xc) = 1;
      *(undefined4 *)(iVar2 + 0x50) = 0x300518dc;
      *(undefined2 *)(iVar2 + 0x10) = 0x100;
      nc_dsp_publish_bank(0x3004ee20);
      return 0;
    }
    FUN_ram_4000771a();
    FUN_ram_4000303c(iVar2,iVar1,0x308);
    if (*(int *)(iVar1 + 0xc) != 1) {
      *(undefined1 *)(iVar2 + 0x10) = 0;
      FUN_ram_40008d30(iVar2 + 0x14);
    }
    *(undefined4 *)(iVar2 + 0x50) = 0x300518dc;
    *(undefined4 *)(iVar2 + 0xc) = 1;
    *(undefined2 *)(iVar2 + 0x10) = 0;
    nc_dsp_publish_bank(0x3004ee20);
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40008e9a.
 * REA evidence: ev_ae1f30322f4a54a41c602a3eefe9ee1db3b2cd7e57a586e6261e0255faa4150f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40008e9a(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003f036(1,param_1);
  if (iVar1 != 0) {
    memset(iVar1,0,param_1);
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40008ec0.
 * REA evidence: ev_71c45ec0dbb68ba438b976c42f12fbf0f479282a0e360c53cf18865595a56146
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40009344) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40008ec0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar1 = DAT_ram_3004ac78;
  if (DAT_ram_3004ac78 << 1 < 0x101) {
    memset(0x30054640,0,0x400);
    _DAT_ram_3004e4e8 = 0;
    _DAT_ram_3004e514 = 0;
    DAT_ram_3004e508 = 0;
    _DAT_ram_3004e518 = 0;
    _DAT_ram_3004e4d4 = 0;
    _DAT_ram_3004e4f4 = 0;
    _DAT_ram_3004e4fc = 0;
    _DAT_ram_3004e500 = 0;
    _DAT_ram_3004e504 = 0;
    _DAT_ram_3004e4f8 = 0;
    _DAT_ram_3004e4f0 = 0;
    _DAT_ram_3004e4d0 = 0;
    DAT_ram_3004e4bc = 0;
    DAT_ram_3004e4b4 = 0;
    _DAT_ram_3004e4b0 = 0;
    _DAT_ram_3004e4c4 = 0;
    _DAT_ram_3004e4ac = 0;
    _DAT_ram_3004e4b8 = 0;
    _DAT_ram_3004e4c0 = 0;
    _DAT_ram_3004e4a8 = 0;
    _DAT_ram_3004e4e4 = 0;
    _DAT_ram_3004e4dc = 0;
    _DAT_ram_3004e4e0 = 0;
    DAT_ram_3004ab18 = 0xffffffff;
    _DAT_ram_3004e4d8 = 0;
    _DAT_ram_3004e4ec = 0;
    DAT_ram_3004ab14 = 0xffffffff;
    DAT_ram_3004e4a7 = 0;
    memset(0x30053e40,0,0x800);
    memset(0x30053dc0,0,0x60);
    memset(0x30051824,0,0x40);
    _DAT_ram_30051868 = 0;
    _DAT_ram_30051864 = 0;
    DAT_ram_3004e460 = 0;
    _DAT_ram_3004e468 = 0;
    if (_DAT_ram_3004e430 != 0) {
      do {
        iVar2 = FUN_ram_4000491c(_DAT_ram_3004e430);
      } while (iVar2 == 0);
    }
    FUN_ram_400075a6(0x30054640,0x400);
    FUN_ram_400075a6(0x30053dc0,0x60);
    iVar2 = FUN_ram_4003ae92(_DAT_ram_3004ea10,0x30054640,uVar1 << 3,uVar1 << 2,2);
    if ((iVar2 == 0) &&
       (iVar2 = FUN_ram_4003ae92(_DAT_ram_3004ea14,0x30053dc0,0x60,0x20,1), iVar2 == 0)) {
      *(undefined1 *)(_DAT_ram_3004ea14 + 2) = 2;
      fence();
      fence();
      puVar4 = _DAT_ram_3004f738 + 5;
      *puVar4 = _DAT_ram_3004f738[5] | 0x2000000;
      fence();
      fence();
      _DAT_ram_3004f738[5] = *puVar4 | 0x1000000;
      fence();
      _DAT_ram_3004f738[10] = 0;
      puVar4 = _DAT_ram_3004f738;
      fence();
      _DAT_ram_3004f738[0xb] = 0;
      fence();
      fence();
      puVar5 = _DAT_ram_3004f738 + 5;
      *puVar5 = puVar4[5] | 4;
      fence();
      fence();
      puVar4 = _DAT_ram_3004f738 + 5;
      *puVar4 = *puVar5 & 0xfffffffc | 1;
      fence();
      fence();
      _DAT_ram_3004f738[5] = *puVar4 & 0xfff80fff | 0x7c000;
      uVar1 = DAT_ram_3004ac78;
      DAT_ram_3005186c = 0;
      _DAT_ram_30051870 = *(undefined4 *)(*(int *)(_DAT_ram_3004ea10 + 8) + 0x30);
      fence();
      DAT_ram_3004ea1c = 0;
      DAT_ram_3004aca0 = 0x2000;
      _DAT_ram_30053d84 = 0;
      _DAT_ram_30053d94 = 0;
      _DAT_ram_30053d88 = 0;
      DAT_ram_3004aca4 = 0x10000;
      DAT_ram_3004ac94._6_1_ = param_1 != 0;
      if ((bool)DAT_ram_3004ac94._6_1_) {
        DAT_ram_3005187a = 0;
      }
      _DAT_ram_30051876 = 0;
      _DAT_ram_30051874 = 0;
      _DAT_ram_3005187e = 0;
      DAT_ram_30051878 = 0;
      DAT_ram_30051879 = 0;
      _DAT_ram_3005187c = 0;
      _DAT_ram_3004f688 = 0;
      _DAT_ram_3004f68c = 0;
      iVar2 = _DAT_ram_3004f690;
      if (_DAT_ram_3004f690 == 0) {
        iVar2 = 0xac44;
      }
      iVar3 = FUN_ram_4003fe7c();
      DAT_ram_3004ab3c =
           FUN_ram_40003bf8((uVar1 >> 1) * iVar3,
                            (int)((longlong)iVar3 * (ulonglong)(uVar1 >> 1) >> 0x20),iVar2,0);
      DAT_ram_3004ab40 = 0;
      DAT_ram_3004ab44 = 0xffffffff;
      DAT_ram_3004ab48 = 0;
      DAT_ram_3004ab4c = 0;
      DAT_ram_3004ab50 = 0;
      DAT_ram_3004ab54 = 0;
      DAT_ram_3004ab58 = 0;
      DAT_ram_3004ab5c = 0;
      DAT_ram_3004ab60 = 0;
      DAT_ram_3004ab64 = 0;
      DAT_ram_3004ab68 = 0;
      DAT_ram_3004ab6c = 0;
      DAT_ram_3004abac = 0;
      DAT_ram_3004abb0 = 0;
      DAT_ram_3004abb4 = 0;
      DAT_ram_3004abb8 = 0;
      DAT_ram_3004abbc = 0;
      DAT_ram_3004abc0 = 0;
      DAT_ram_30051819 = 0;
      _DAT_ram_3004e4e8 = 0;
      _DAT_ram_3004e514 = 0x40;
      iVar2 = 4;
      do {
        fence();
        _DAT_ram_3004f738[8] = 0;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      DAT_ram_3004e508 = 1;
      iVar2 = FUN_ram_4003afac(_DAT_ram_3004ea14);
      puVar4 = _DAT_ram_3004f738;
      if (iVar2 == 0) {
        _DAT_ram_3004e4f4 = *(uint *)(*(int *)(_DAT_ram_3004ea14 + 8) + 0x30);
        fence();
        _DAT_ram_3004e4fc = _DAT_ram_3004e4f4 % 3;
        fence();
        fence();
        *_DAT_ram_3004f738 = *_DAT_ram_3004f738 | 4;
        puVar5 = _DAT_ram_3004f738;
        fence();
        fence();
        *_DAT_ram_3004f738 = *puVar4 | 0x100;
        fence();
        fence();
        _DAT_ram_3004f738[7] = puVar5[7] | 0x80;
        FUN_ram_4003afac(_DAT_ram_3004ea10);
        puVar4 = _DAT_ram_3004f738;
        fence();
        fence();
        *_DAT_ram_3004f738 = *_DAT_ram_3004f738 | 2;
        fence();
        fence();
        _DAT_ram_3004f738[7] = puVar4[7] | 8;
        return 0;
      }
    }
  }
  return 0xffffffff;
}


