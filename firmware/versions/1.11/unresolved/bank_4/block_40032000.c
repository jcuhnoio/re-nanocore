/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40032000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40032204.
 * REA evidence: ev_97715a324f67f0947f7dd484c601819100d4215f2ae7677332f7b9eeea92aee0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40032204(void)

{
  undefined4 uVar1;
  
  if (_DAT_ram_3007c564 != 1) {
    uVar1 = FUN_ram_40031600();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4003221a.
 * REA evidence: ev_3103c5f9f754baeebacc0a493aeddcfc9b5a6e2c5cc16438eef857dce934df70
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003221a(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4002fd7c();
  uVar2 = 0xfffffffc;
  if (iVar1 == 0) {
    uVar2 = FUN_ram_40031600(0xfffffffc);
    FUN_ram_400301cc();
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4003223a.
 * REA evidence: ev_b44930a33e4d8b7cd25609de7cf3ce0d05d8e1ac15dc1702cd024bd70567b87a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003223a(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = -6;
  if (param_1 != (undefined1 *)0x0) {
    iVar2 = FUN_ram_4002fd7c();
    iVar1 = -4;
    if (iVar2 == 0) {
      iVar1 = FUN_ram_40032204();
      if (iVar1 == 0) {
        if (_DAT_ram_3007c56e < 0x40) {
          *param_1 = (char)_DAT_ram_3007c56e;
        }
        else {
          iVar1 = -3;
        }
      }
      FUN_ram_400301cc();
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40032280.
 * REA evidence: ev_2f266ec21973f0927013791dade7fe56127bd675c8f8fb60ceffb8bd2d31ce20
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40032280(uint param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_40;
  int iStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [20];
  
  if (0x3f < param_1) {
    return -7;
  }
  iVar3 = FUN_ram_4002fd7c();
  if (iVar3 != 0) {
    return -4;
  }
  iVar3 = FUN_ram_40032204(0xfffffffc);
  if (((iVar3 == 0) && (_DAT_ram_3007c56e != param_1)) &&
     ((DAT_ram_3007c519 != '\0' || (iVar3 = FUN_ram_400308b6(), iVar3 == 0)))) {
    if ((DAT_ram_3007c51a != '\0') || (0xff < _DAT_ram_3007c520)) {
      uVar4 = 0x16000;
      bVar1 = DAT_ram_3007c51b ^ 1;
      if (DAT_ram_3007c51b != 1) {
        uVar4 = 0x17000;
      }
      iVar3 = FUN_ram_40030cb8(uVar4);
      if (iVar3 < 0) {
        iVar3 = -4;
        goto LAB_ram_4003230e;
      }
      _DAT_ram_3007c520 = 0;
      DAT_ram_3007c51a = '\0';
      DAT_ram_3007c51b = bVar1;
    }
    uStack_40 = 0x504a5631;
    iStack_3c = _DAT_ram_3007c51c;
    uStack_34 = 0;
    uStack_38 = param_1 & 0xff;
    uVar2 = FUN_ram_40030884(&uStack_40);
    uStack_34 = CONCAT13(uVar2,(undefined3)uStack_34);
    iVar3 = 0x16000;
    if (DAT_ram_3007c51b != 0) {
      iVar3 = 0x17000;
    }
    iVar3 = _DAT_ram_3007c520 * 0x10 + iVar3;
    iVar5 = FUN_ram_4002fe8c(iVar3,&uStack_40,0x10);
    if (((iVar5 == 0x10) && (iVar3 = FUN_ram_4002fe3c(iVar3,auStack_30,0x10), iVar3 == 0x10)) &&
       (iVar3 = FUN_ram_40002fec(&uStack_40,auStack_30,0x10), iVar3 == 0)) {
      _DAT_ram_3007c520 = _DAT_ram_3007c520 + 1;
      _DAT_ram_3007c51c = _DAT_ram_3007c51c + 1;
      if (_DAT_ram_3007c51c == 0) {
        _DAT_ram_3007c51c = 1;
      }
      _DAT_ram_3007c56e = (ushort)param_1;
      iVar3 = 0;
    }
    else {
      _DAT_ram_3007c564 = 7;
      iVar3 = -8;
    }
  }
LAB_ram_4003230e:
  FUN_ram_400301cc();
  return iVar3;
}


/* NanoCore 1.11, address 0x400323d6.
 * REA evidence: ev_f2e8256dd5d82dd9848ac0f36295e5616ffab55162f54e746f53db353d83fef0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400323d6(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = -6;
  if ((param_2 != 0) && (iVar1 = -7, param_1 < 0x40)) {
    iVar2 = FUN_ram_4002fd7c();
    iVar1 = -4;
    if (iVar2 == 0) {
      iVar1 = FUN_ram_40032204();
      if (iVar1 == 0) {
        FUN_ram_4003082a(param_1 * 0x18 + 0x3007c57c,param_2);
      }
      FUN_ram_400301cc();
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4003242a.
 * REA evidence: ev_5b3affa289cab50a8cdc7ec3983af9466fbc140904a0c42c5d454520ef224923
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003242a(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -6;
  if ((param_2 != 0) && (iVar1 = -7, param_1 < 0x40)) {
    iVar1 = FUN_ram_4002fd7c();
    if (iVar1 == 0) {
      if (_DAT_ram_3007c564 == 1) {
        FUN_ram_4003082a(param_1 * 0x18 + 0x3007c57c,param_2);
        iVar1 = 0;
      }
      else {
        iVar1 = -4;
        if (_DAT_ram_3007c564 - 1U < 7) {
          iVar1 = (int)*(char *)(_DAT_ram_3007c564 + 0x400972d3);
        }
      }
      FUN_ram_400301cc();
    }
    else {
      iVar1 = -4;
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4003249c.
 * REA evidence: ev_f7fb78976bb5e4f7b3d1baf2f044362f79baca8e2252dd30b879463768eb1af7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003249c(uint param_1,int param_2,uint param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    return -6;
  }
  if (param_4 == (uint *)0x0) {
    return -6;
  }
  if (0x3f < param_1) {
    return -7;
  }
  iVar1 = FUN_ram_4002fd7c();
  if (iVar1 != 0) {
    return -4;
  }
  iVar1 = FUN_ram_40032204();
  if (iVar1 != 0) goto LAB_ram_40032500;
  iVar1 = param_1 * 0x18;
  iVar2 = FUN_ram_40030204(iVar1 + 0x3007c57c);
  if (iVar2 != 0) {
    iVar1 = 1;
    goto LAB_ram_40032500;
  }
  iVar2 = FUN_ram_4002fd18(iVar1 + 0x3007c57c);
  if (iVar2 == 0) goto LAB_ram_400324fe;
  if (param_3 < *(ushort *)(iVar1 + 0x3007c580)) {
    iVar1 = -6;
    goto LAB_ram_40032500;
  }
  iVar2 = (param_1 + 4 & 0xff) * 0x400;
  uVar3 = FUN_ram_4002fe3c(iVar2,param_2);
  if (uVar3 == *(ushort *)(iVar1 + 0x3007c580)) {
    iVar4 = FUN_ram_40007554(0,param_2,uVar3);
    if (iVar4 == *(int *)(iVar1 + 0x3007c57c)) {
      uVar3 = (uint)*(ushort *)(param_1 * 0x18 + 0x3007c580);
      iVar1 = FUN_ram_40030dba(uVar3 + iVar2,0x400 - uVar3);
      if (iVar1 < 0) goto LAB_ram_40032542;
      if (iVar1 != 0) {
        *param_4 = (uint)*(ushort *)(param_1 * 0x18 + 0x3007c580);
        iVar1 = 0;
        goto LAB_ram_40032500;
      }
    }
LAB_ram_400324fe:
    iVar1 = -3;
  }
  else {
LAB_ram_40032542:
    iVar1 = -4;
  }
LAB_ram_40032500:
  FUN_ram_400301cc();
  return iVar1;
}


/* NanoCore 1.11, address 0x40032582.
 * REA evidence: ev_5dedf5f941415128e79dae324fe734ecbfb3b4bf9922f3147a6ddf0c052cc431
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40032582(uint param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  if (param_2 == 0) {
    return -7;
  }
  if (0x3f < param_1) {
    return -7;
  }
  if ((0x40 - param_1 & 0xff) < param_2) {
    return -7;
  }
  iVar2 = FUN_ram_4002fd7c();
  if (iVar2 != 0) {
    return -4;
  }
  if ((param_1 == 0) && (param_2 == 0x40)) {
    iVar2 = FUN_ram_40030e44();
    goto LAB_ram_400325d6;
  }
  iVar2 = FUN_ram_40032204();
  if (iVar2 != 0) goto LAB_ram_400325d6;
  iVar3 = FUN_ram_40005656(0x1000);
  iVar4 = FUN_ram_40005656(0x1000);
  iVar5 = FUN_ram_40005656(0x650);
  if (iVar3 == 0) {
    iVar2 = -5;
    if (iVar5 != 0) goto LAB_ram_4003269a;
    if (iVar4 == 0) goto LAB_ram_400325d6;
LAB_ram_400327ea:
    FUN_ram_400056b4(iVar4);
    iVar6 = iVar2;
LAB_ram_400326a4:
    iVar2 = iVar6;
    if (iVar3 == 0) goto LAB_ram_400325d6;
  }
  else {
    if (iVar4 != 0) {
      if (iVar5 == 0) {
        iVar2 = -5;
        goto LAB_ram_400327ea;
      }
      param_2 = param_1 + param_2;
      while (param_1 < param_2) {
        uVar11 = (param_1 + 4) * 0x400 & 0xfffff000;
        uVar10 = 1;
        while ((uVar13 = param_1 + uVar10, (int)uVar13 < (int)param_2 &&
               (uVar11 == (((uVar13 & 0xff) + 4) * 0x400 & 0xfffff000)))) {
          uVar10 = uVar10 + 1 & 0xff;
        }
        iVar2 = FUN_ram_4002fe3c(uVar11,iVar3,0x1000);
        if (iVar2 != 0x1000) {
          iVar2 = -4;
          goto LAB_ram_4003269a;
        }
        iVar2 = FUN_ram_4003075a(uVar11,param_1,uVar10,iVar3);
        if (iVar2 != 0) goto LAB_ram_4003269a;
        iVar2 = FUN_ram_40007554(0,iVar3,0x1000);
        iVar6 = FUN_ram_4002fe3c(uVar11,iVar4,0x1000);
        if (((iVar6 != 0x1000) || (iVar6 = FUN_ram_40007554(0,iVar4,0x1000), iVar2 != iVar6)) ||
           (iVar6 = FUN_ram_40002fec(iVar4,iVar3,0x1000), iVar6 != 0)) {
          iVar2 = -9;
          goto LAB_ram_4003269a;
        }
        bVar1 = false;
        for (uVar12 = 0; uVar10 != uVar12; uVar12 = uVar12 + 1 & 0xff) {
          uVar8 = param_1 + uVar12 & 0xff;
          iVar9 = uVar8 * 0x18 + 0x3007c57c;
          iVar6 = FUN_ram_400303ac(iVar9,0x18);
          if (((iVar6 == 0) && (iVar6 = FUN_ram_400301e4(iVar9,0x18), iVar6 == 0)) ||
             (iVar6 = FUN_ram_400301e4(((uVar8 + 4) * 0x400 & 0xfff) + iVar3,0x400), iVar6 == 0)) {
            bVar1 = true;
          }
        }
        if (bVar1) {
          FUN_ram_4002ff9e(iVar5,uVar11,iVar2,param_1,2,iVar3);
          for (uVar11 = 0; uVar10 != uVar11; uVar11 = uVar11 + 1 & 0xff) {
            uVar12 = param_1 + uVar11 & 0xff;
            memset(((uVar12 + 4) * 0x400 & 0xfff) + iVar3,0xff,0x400);
            memset(iVar5 + uVar12 * 0x18 + 0x50,0,0x18);
          }
          uVar7 = FUN_ram_40007554(0,iVar3,0x1000);
          *(char *)(iVar5 + 0x1c) = (char)uVar7;
          *(char *)(iVar5 + 0x1d) = (char)((uint)uVar7 >> 8);
          *(char *)(iVar5 + 0x1f) = (char)((uint)uVar7 >> 0x18);
          *(char *)(iVar5 + 0x1e) = (char)((uint)uVar7 >> 0x10);
          iVar2 = FUN_ram_400312ac(iVar5,iVar3);
          if (iVar2 != 0) goto LAB_ram_4003269a;
        }
        for (uVar11 = 0; uVar10 != uVar11; uVar11 = uVar11 + 1 & 0xff) {
          FUN_ram_4002e79a(param_1 + uVar11 & 0xff);
        }
        param_1 = uVar13 & 0xff;
      }
      iVar2 = 0;
LAB_ram_4003269a:
      FUN_ram_400056b4(iVar5);
      iVar6 = iVar2;
      if (iVar4 != 0) goto LAB_ram_400327ea;
      goto LAB_ram_400326a4;
    }
    iVar6 = -5;
    iVar2 = -5;
    if (iVar5 != 0) goto LAB_ram_4003269a;
  }
  FUN_ram_400056b4(iVar3);
  iVar2 = iVar6;
LAB_ram_400325d6:
  FUN_ram_400301cc();
  return iVar2;
}


/* NanoCore 1.11, address 0x400327fa.
 * REA evidence: ev_e50992dff7063d74387e05679c642c55b65fbefaa67c33d2c0c1003d5feb964c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400327fa(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  undefined1 auStack_40 [20];
  
  iStack_4c = 0;
  if (param_2 == 0) {
    return -6;
  }
  if (0x3ff < param_3 - 1U) {
    return -6;
  }
  if (0x3f < param_1) {
    return -7;
  }
  iVar2 = FUN_ram_40005656(0x340);
  iVar3 = FUN_ram_40005656(0x400);
  if (iVar2 == 0) {
    iVar2 = iVar3;
    if (iVar3 == 0) {
      return -5;
    }
LAB_ram_40032850:
    FUN_ram_400056b4(iVar2);
    return -5;
  }
  if (iVar3 == 0) goto LAB_ram_40032850;
  iVar4 = FUN_ram_40015274(iVar2,param_2,param_3);
  if ((((iVar4 != 0) || (iVar4 = FUN_ram_400150e4(iVar2,iVar3,0x400,&iStack_4c), iVar4 != 0)) ||
      (iStack_4c != param_3)) || (iVar4 = FUN_ram_40002fec(iVar3,param_2,param_3), iVar4 != 0)) {
LAB_ram_40032862:
    FUN_ram_400056b4(iVar3);
    FUN_ram_400056b4(iVar2);
    return -6;
  }
  iVar4 = FUN_ram_40002f48(iVar2 + 2,0,0x10);
  if (iVar4 == 0) goto LAB_ram_40032862;
  memset(&uStack_48,0,0x18);
  uStack_48 = FUN_ram_40007554(0,param_2,param_3);
  uStack_42 = 1;
  uStack_44 = (undefined2)param_3;
  FUN_ram_4000304c(auStack_40,iVar2 + 2,0x10);
  FUN_ram_400056b4(iVar3);
  FUN_ram_400056b4(iVar2);
  iVar2 = FUN_ram_4002fd7c();
  if (iVar2 != 0) {
    return -4;
  }
  iVar2 = FUN_ram_40032204();
  if (iVar2 != 0) goto LAB_ram_4003295e;
  iVar3 = FUN_ram_40005656(0x1000);
  iVar4 = FUN_ram_40005656(0x650);
  if (iVar3 == 0) {
    iVar2 = -5;
    if (iVar4 == 0) goto LAB_ram_4003295e;
LAB_ram_4003294c:
    iVar2 = -5;
LAB_ram_4003294e:
    FUN_ram_400056b4(iVar4);
    if (iVar3 == 0) goto LAB_ram_4003295e;
  }
  else {
    if (iVar4 != 0) {
      uVar1 = (param_1 + 4 & 0xff) << 10;
      uVar7 = uVar1 & 0xfffff000;
      iVar5 = FUN_ram_4002fe3c(uVar7,iVar3,0x1000);
      iVar2 = -4;
      if ((iVar5 == 0x1000) && (iVar2 = FUN_ram_4003075a(uVar7,param_1,1,iVar3), iVar2 == 0)) {
        iVar2 = FUN_ram_40007554(0,iVar3,0x1000);
        iVar5 = FUN_ram_40005656(0x1000);
        if (iVar5 == 0) goto LAB_ram_4003294c;
        iVar6 = FUN_ram_4002fe3c(uVar7,iVar5,0x1000);
        if (((iVar6 == 0x1000) && (iVar6 = FUN_ram_40007554(0,iVar5,0x1000), iVar2 == iVar6)) &&
           (iVar6 = FUN_ram_40002fec(iVar5,iVar3,0x1000), iVar6 == 0)) {
          iVar6 = (uVar1 & 0xfff) + iVar3;
          memset(iVar6,0xff,0x400);
          FUN_ram_4000304c(iVar6,param_2,param_3);
          FUN_ram_4002ff9e(iVar4,uVar7,iVar2,param_1,1,iVar3);
          FUN_ram_4000304c(iVar4 + param_1 * 0x18 + 0x50,&uStack_48,0x18);
          iVar2 = FUN_ram_400312ac(iVar4,iVar3);
          if (iVar2 == 0) {
            FUN_ram_4002e79a(param_1);
          }
        }
        else {
          iVar2 = -9;
        }
        FUN_ram_400056b4(iVar5);
      }
      goto LAB_ram_4003294e;
    }
    iVar2 = -5;
  }
  FUN_ram_400056b4(iVar3);
LAB_ram_4003295e:
  FUN_ram_400301cc();
  return iVar2;
}


/* NanoCore 1.11, address 0x40032a1a.
 * REA evidence: ev_f7e62dcfad31d7fa5c69fc832b157ad50d2030a565c951febdc48262d4c16d09
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40032a1a(void)

{
  return 0;
}


/* NanoCore 1.11, address 0x40032a30.
 * REA evidence: ev_fb3c3310f275cccbff2b8a8312d11786eae21c9603af9490801227b2d814245a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40032a30(void)

{
  return 0;
}


/* NanoCore 1.11, address 0x40032a34.
 * REA evidence: ev_202d214841526fa2b3cf3589fd6b810bad520d2836df17beb4744b974d9f39b4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40032a34(void)

{
  return;
}


/* NanoCore 1.11, address 0x40032a36.
 * REA evidence: ev_bcbd6372341c8a73e695f05466494c5c96cc2680e5ca020ba066e29c7d997587
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40032a36(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 1:
    uVar1 = FUN_ram_40073ede(0);
    return uVar1;
  case 2:
    return 2;
  case 3:
    uVar1 = FUN_ram_40073d80();
    return uVar1;
  case 4:
    uVar1 = FUN_ram_400719f6();
    return uVar1;
  case 5:
    uVar1 = FUN_ram_40065918();
    return uVar1;
  case 6:
    uVar1 = FUN_ram_40066d12();
    return uVar1;
  case 7:
    uVar1 = FUN_ram_400695aa();
    return uVar1;
  case 8:
    uVar1 = FUN_ram_4006c87a(param_2);
    return uVar1;
  default:
    return 0;
  }
}


/* NanoCore 1.11, address 0x40032a78.
 * REA evidence: ev_6debc55cb5258363217db0f6318b415022c74c3c463bd1a026ece46c94dab013
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40032a78(uint param_1)

{
  if (param_1 < 8) {
    return (&DAT_ram_40097390)[param_1];
  }
  return 0;
}


/* NanoCore 1.11, address 0x40032a90.
 * REA evidence: ev_e33fe1e3b4bd3ce8c7791646a0f8667fd91c0b648fc9c44b05a2358e814ecc0e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40032a90(uint param_1)

{
  if (param_1 < 8) {
    if (param_1 == 4) {
      return 2;
    }
  }
  else {
    param_1 = 6;
  }
  return param_1;
}


/* NanoCore 1.11, address 0x40032aa4.
 * REA evidence: ev_9f36ecc7dda27ef061348b377a8a203899107b459ef32d36506a40331987b97a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40032aa4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  memset(param_3,0,param_4 << 2);
  switch(param_1) {
  case 1:
    FUN_ram_40073e32(param_3,param_4);
    return;
  case 2:
    if ((param_4 != 1) && (*(ulonglong *)(param_3 + 4) = (ulonglong)DAT_ram_40094604, param_4 != 2))
    {
      *(ulonglong *)(param_3 + 8) = (ulonglong)_DAT_ram_40094638;
    }
    break;
  case 3:
    uVar1 = FUN_ram_40032a90(param_2);
    FUN_ram_40073b74(param_3,param_4,uVar1);
    return;
  case 4:
    FUN_ram_400717b4(param_3,param_4,param_2);
    return;
  case 5:
    FUN_ram_40065944(param_3,param_4,param_2);
    return;
  case 6:
    FUN_ram_40066e52(param_3,param_4,param_2);
    return;
  case 7:
    FUN_ram_400695cc(param_3,param_4,param_2);
    return;
  case 8:
    FUN_ram_4006c8b8(param_3,param_4,param_2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40032baa.
 * REA evidence: ev_2af82546540a6b0fe77e9f43c0f84b6d4b00ad32b320f5a42afeef49c39a3e9e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40032baa(int param_1)

{
  if (7 < (param_1 - 1U & 0xff)) {
    param_1 = 0;
  }
  return param_1;
}


/* NanoCore 1.11, address 0x40032bbe.
 * REA evidence: ev_6081fafc45198ad099d6b3d573a740827cbdfd76ec5f9a260c45bf00a74a1a1d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40032bbe(int param_1)

{
  return param_1 - 0x1eU < 8;
}


/* NanoCore 1.11, address 0x40032bc6.
 * REA evidence: ev_eb78ac54c025f69ca3654b1cd96c27061670f801038567665da18b1457d7157c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40032bc6(uint param_1)

{
  if (param_1 < 8) {
    return param_1 + 0x1e & 0xff;
  }
  return 0xff;
}


/* NanoCore 1.11, address 0x40032bda.
 * REA evidence: ev_b227dc8249411ff069706b8d805542092c68b4744ebbb1c6b4f7847d0b38eef2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40032bda(int param_1)

{
  if ((param_1 != 0) && ((byte)(*(char *)(param_1 + 0x33f) - 0x1eU) < 8)) {
    *(undefined1 *)(param_1 + 0x80) = 8;
    *(char *)(param_1 + 0x81) = *(char *)(param_1 + 0x33f) + -0x1e;
  }
  return;
}


/* NanoCore 1.11, address 0x40032bf8.
 * REA evidence: ev_d59ff9440c65f4f08aaed7abcd2c13c299f8ec30d603009945d531109eb69aef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40032bf8(uint param_1,uint param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_3 != 0) {
    if (param_4 == 0) {
      return 0;
    }
    if (param_1 < 8) {
      uVar1 = *(undefined4 *)(&DAT_ram_40097370 + param_1 * 4);
      switch(uVar1) {
      case 3:
        param_2 = FUN_ram_40032a90(param_2);
        break;
      case 4:
        if ((0x11 < param_2) || ((1 << (param_2 & 0x1f) & 0x21c1fU) == 0)) {
          param_2 = 0;
        }
        break;
      case 5:
        param_2 = FUN_ram_4006590c(param_2);
        break;
      case 6:
        param_2 = FUN_ram_40066d02(param_2);
        break;
      case 7:
        param_2 = FUN_ram_4006959e(param_2);
        break;
      case 8:
        param_2 = FUN_ram_4006c86e(param_2);
      }
      uVar2 = FUN_ram_40032a36(uVar1);
      FUN_ram_40032aa4(uVar1,param_2,param_3,param_4);
      if (uVar2 < param_4) {
        param_4 = uVar2;
      }
      return param_4 & 0xff;
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x40032cb2.
 * REA evidence: ev_d315604674261bcd787028e7962f2832e66312a97cc1117314f76119d1713824
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined8 FUN_ram_40032cb2(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 auStack_40 [6];
  
  if (param_1 == 0) {
    uVar2 = 6;
    if ((param_2 != 3) && (uVar2 = 0, param_2 == 6)) {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 1);
  }
  FUN_ram_40032aa4(param_2,uVar2,auStack_40,0xc);
  uVar4 = 0;
  if (param_3 < 0xc) {
    uVar4 = *(undefined8 *)((int)auStack_40 + param_3 * 4);
  }
  if (param_1 != 0) {
    uVar1 = 0;
    do {
      uVar3 = uVar1;
      if ((uint)*(byte *)(param_1 + 3) <= (uVar3 & 0xff)) {
        return uVar4;
      }
      uVar1 = uVar3 + 1;
    } while (*(byte *)(param_1 + -4 + (uVar3 + 1) * 8) != param_3);
    uVar4 = *(undefined8 *)(param_1 + uVar3 * 8 + 8);
  }
  return uVar4;
}


/* NanoCore 1.11, address 0x40032d22.
 * REA evidence: ev_3f3f0b9d44c3ea3ab91a10db21d922adca349a6f4535f9583239cd81b1dc0620
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40032d22(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return;
  }
  iVar4 = 0;
  memset(param_2,0,0x304);
  do {
    uVar6 = FUN_ram_40032a78(*(undefined1 *)(param_1 + 0x12 + iVar4));
    *(undefined1 *)(param_2 + iVar4) = uVar6;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 8);
  pbVar10 = (byte *)(param_1 + 0x1c);
  uVar11 = 0;
  do {
    iVar4 = FUN_ram_40032a78(uVar11 & 0xff);
    uVar8 = (uint)*pbVar10;
    bVar1 = pbVar10[2];
    bVar2 = pbVar10[1];
    if (7 < (uVar8 - 1 & 0xff)) {
      uVar8 = 0;
    }
    iVar12 = param_2 + iVar4 * 0x4c;
    *(uint *)(iVar12 + 0xc) = uVar8;
    *(bool *)(iVar12 + 0x11) = bVar1 != 0;
    *(byte *)(iVar12 + 0x10) = bVar2;
    switch(uVar8) {
    case 3:
      uVar6 = FUN_ram_40032a90();
      break;
    default:
      goto switchD_ram_40032dea_caseD_4;
    case 5:
      uVar6 = FUN_ram_4006590c();
      break;
    case 6:
      uVar6 = FUN_ram_40066d02();
      break;
    case 7:
      uVar6 = FUN_ram_4006959e();
      break;
    case 8:
      uVar6 = FUN_ram_4006c86e();
    }
    *(undefined1 *)(iVar12 + 0x10) = uVar6;
switchD_ram_40032dea_caseD_4:
    FUN_ram_40032aa4(*(undefined4 *)(iVar12 + 0xc),*(undefined1 *)(iVar12 + 0x10),
                     iVar4 * 0x4c + 0x14 + param_2,0xc);
    iVar9 = *(int *)(iVar12 + 0xc);
    uVar8 = DAT_ram_40094604;
    if (iVar9 == 8) {
      cVar3 = *(char *)(iVar12 + 0x10);
      if (cVar3 == '\b') {
LAB_ram_40032e26:
        *(ulonglong *)(param_2 + iVar4 * 0x4c + 0x20) = (ulonglong)uVar8;
      }
      else if (cVar3 == '\t') {
LAB_ram_40032e56:
        *(ulonglong *)(param_2 + iVar4 * 0x4c + 0x24) = (ulonglong)uVar8;
      }
      else if (cVar3 == '\n') goto LAB_ram_40032e6e;
    }
    else if (iVar9 == 3) {
LAB_ram_40032e6e:
      *(ulonglong *)(param_2 + iVar4 * 0x4c + 0x28) = (ulonglong)uVar8;
    }
    else if (iVar9 == 4) {
      cVar3 = *(char *)(iVar12 + 0x10);
      if (cVar3 == '\0') {
        *(ulonglong *)(param_2 + iVar4 * 0x4c + 0x1c) = (ulonglong)_DAT_ram_40094638;
      }
      else {
        uVar8 = _DAT_ram_40094638;
        if ((byte)(cVar3 - 1U) < 2) goto LAB_ram_40032e26;
        if (cVar3 == '\x03') goto LAB_ram_40032e6e;
        if (cVar3 == '\x04') goto LAB_ram_40032e56;
      }
    }
    for (uVar8 = 0; uVar8 < pbVar10[3]; uVar8 = uVar8 + 1 & 0xff) {
      uVar5 = (uint)*(byte *)(uVar8 * 8 + uVar11 * 100 + param_1 + 0x20);
      if (0xb < uVar5) goto LAB_ram_40032f4e;
      cVar3 = *(char *)(iVar12 + 0x10);
      switch(*(undefined4 *)(iVar12 + 0xc)) {
      case 2:
        iVar9 = uVar5 - 2;
        goto LAB_ram_40032f1e;
      case 3:
        iVar9 = uVar5 - 5;
LAB_ram_40032f1e:
        if (iVar9 != 0) break;
        goto LAB_ram_40032f4e;
      case 4:
        if (cVar3 == '\0') {
          if (uVar5 == 2) goto LAB_ram_40032f4e;
        }
        else {
          if ((byte)(cVar3 - 1U) < 2) goto LAB_ram_40032fcc;
          if (cVar3 != '\x03') {
            if ((cVar3 != '\x04') || (uVar5 != 4)) break;
            goto LAB_ram_40032f4e;
          }
LAB_ram_40032fa4:
          uVar7 = 5;
LAB_ram_40033004:
          if (uVar5 == uVar7) goto LAB_ram_40032f4e;
        }
        break;
      case 5:
        iVar9 = FUN_ram_4006590c();
        if (iVar9 == 1) {
LAB_ram_40032fcc:
          uVar7 = 3;
          goto LAB_ram_40033004;
        }
        uVar7 = 4;
        if (iVar9 == 4) {
          if (uVar5 == 3) goto LAB_ram_40032f4e;
        }
        else if (iVar9 == 0) goto LAB_ram_40033004;
        if (((iVar9 - 2U & 0xff) < 2) && (uVar5 == 4)) goto LAB_ram_40032f4e;
        if ((iVar9 - 5U & 0xff) < 3) goto LAB_ram_40032fa4;
        break;
      case 8:
        if ((byte)(cVar3 - 5U) < 3) {
          if (uVar5 != 0) goto LAB_ram_40032f4e;
        }
        else {
          if (cVar3 == '\b') goto LAB_ram_40032fcc;
          if (cVar3 == '\t') {
            uVar7 = 4;
            goto LAB_ram_40033004;
          }
          if (cVar3 == '\n') goto LAB_ram_40032fa4;
        }
      }
      *(undefined8 *)(param_2 + (uVar5 + iVar4 * 0x13) * 4 + 0x14) =
           *(undefined8 *)(uVar8 * 8 + uVar11 * 100 + param_1 + 0x24);
LAB_ram_40032f4e:
    }
    uVar11 = uVar11 + 1;
    pbVar10 = pbVar10 + 100;
    if (uVar11 == 8) {
      return;
    }
  } while( true );
}


