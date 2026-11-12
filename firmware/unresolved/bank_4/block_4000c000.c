/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4000c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4000c01e.
 * REA evidence: ev_65679259273f7d7034363791c083e9142c432ea4e5309dd0482a9f42bfe756a8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c01e(uint param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_ram_4000821c();
  if ((iVar2 == 0) && (DAT_ram_30049dd4 != '\0')) {
    FUN_ram_40008394(&DAT_ram_3004651c,param_1);
    return 0;
  }
  FUN_ram_40008120();
  iVar2 = FUN_ram_4005eaa6(0x3004abe8);
  iVar3 = FUN_ram_4005ea8e(0x3004abe8);
  uVar4 = 0xffffffff;
  if ((iVar2 != 0) && (iVar3 != 0)) {
    if (7 < param_1) {
      param_1 = 0;
    }
    FUN_ram_4000305c(iVar3,iVar2,0x2dc);
    if ((*(int *)(iVar2 + 0x174) != 5) || (bVar1 = false, *(byte *)(iVar2 + 0x178) != param_1)) {
      FUN_ram_4005fbec(iVar3 + 0x17c,0xc,param_1);
      bVar1 = true;
    }
    *(undefined4 *)(iVar3 + 0x174) = 5;
    uVar4 = _DAT_ram_30049ef8;
    *(char *)(iVar3 + 0x178) = (char)param_1;
    *(undefined4 *)(iVar3 + 0x1b8) = uVar4;
    uVar4 = 0;
    *(bool *)(iVar3 + 0x179) = DAT_ram_30049ef0 != '\0';
    FUN_ram_40008404(iVar3 + 0x174);
    FUN_ram_4005eaba(0x3004abe8);
    if (bVar1) {
      FUN_ram_4005fee6(_DAT_ram_30049ef8);
    }
  }
  FUN_ram_40007ccc();
  return uVar4;
}


/* NanoCore 1.10, address 0x4000c110.
 * REA evidence: ev_1ee1f17898b3a80d49cc8780aa86da700789daa756b85c3ea0b092599c8a7482
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000c110(void)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  char cVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  
  uVar9 = DAT_ram_4009281c;
LAB_ram_4000c166:
  while( true ) {
    FUN_ram_40004832(0x30049dd8,0xffffffff);
    uVar10 = 0;
    iVar13 = _DAT_ram_30049dd0;
    do {
      while (FUN_ram_400065d4(0x19), _DAT_ram_30049dd0 != iVar13) {
        uVar10 = 0;
        iVar13 = _DAT_ram_30049dd0;
      }
      uVar10 = uVar10 + 0x19;
    } while (uVar10 < 0x4b);
    do {
      iVar12 = FUN_ram_400048d0(0x30049dd8);
    } while (iVar12 == 0);
    bVar1 = true;
    if (((((short)DAT_ram_30046510 < 0) && ((short)DAT_ram_30046688 < 0)) &&
        ((short)DAT_ram_3004651e < 0)) && ((short)DAT_ram_3004651c < 0)) {
      bVar1 = DAT_ram_30046696 != -1;
    }
    if ((-1 < (short)DAT_ram_3004651c) || (DAT_ram_30046696 != -1)) break;
    bVar2 = false;
    if (bVar1) {
      iVar12 = FUN_ram_400049d6(0x3004b3f4,0xffffffff);
      if (iVar12 != 0) goto LAB_ram_4000c24e;
      if (((short)DAT_ram_3004651c < 0) && (bVar2 = false, DAT_ram_30046696 == -1))
      goto LAB_ram_4000c3f6;
LAB_ram_4000c238:
      FUN_ram_40004ac8(0x3004b3f4);
      goto LAB_ram_4000c254;
    }
LAB_ram_4000c414:
    cVar11 = -1;
LAB_ram_4000c3b4:
    if (cVar11 != -1) {
      FUN_ram_400096f4(cVar11);
    }
    if (bVar2) goto code_r0x4000c3c6;
    if (bVar1) {
      FUN_ram_40004ac8(0x3004b3f4);
    }
  }
  iVar12 = FUN_ram_40007d82();
  if (iVar12 == 0) {
    bVar2 = bVar1;
    if (!bVar1) {
      bVar2 = true;
      goto LAB_ram_4000c414;
    }
LAB_ram_4000c3f6:
    FUN_ram_400002f4();
    cVar8 = DAT_ram_30049efc;
    cVar7 = DAT_ram_30046696;
    uVar6 = DAT_ram_30046688;
    uVar5 = DAT_ram_3004651e;
    uVar4 = DAT_ram_3004651c;
    uVar3 = DAT_ram_30046510;
    if (_DAT_ram_30049dd0 != iVar13) {
      FUN_ram_400002fa();
      if (!bVar2) goto LAB_ram_4000c238;
      FUN_ram_4000829c();
      goto LAB_ram_4000c254;
    }
    cVar11 = -1;
    if ((short)DAT_ram_3004651c < 0) {
      DAT_ram_30046696 = -1;
      cVar11 = cVar7;
    }
    DAT_ram_30046510 = 0xffff;
    DAT_ram_30046688 = 0xffff;
    DAT_ram_3004651e = 0xffff;
    DAT_ram_30049efc = '\0';
    DAT_ram_3004651c = 0xffff;
    FUN_ram_400002fa();
    if (-1 < (short)uVar3) {
      FUN_ram_4000b63c(uVar3 & 0xff,0,0);
    }
    if (-1 < (short)uVar6) {
      FUN_ram_4000bb4c(uVar6 & 0xff);
    }
    if (-1 < (short)uVar5) {
      if ((cVar8 != '\0') && (iVar13 = FUN_ram_4000868c(0x30049f00), iVar13 != 0)) {
        FUN_ram_400078be(0,0x30049f00);
      }
      FUN_ram_4000789c(0);
      iVar13 = FUN_ram_4000813a(uVar5 & 0xff);
      if (iVar13 != 0) {
        FUN_ram_4000818a();
      }
      FUN_ram_400002f4();
      uVar3 = DAT_ram_3004651e;
      FUN_ram_400002fa();
      if ((short)uVar3 < 0) {
        FUN_ram_400080ec(0x30049f00);
        iVar13 = FUN_ram_40007af4(4,8);
        FUN_ram_4000789c();
        uVar14 = uVar9;
        if (iVar13 == 0) goto LAB_ram_4000c340;
        FUN_ram_400091d0(uVar9,0x30049f00,0x10);
      }
      else {
        FUN_ram_4000789c(0);
        uVar14 = 0;
LAB_ram_4000c340:
        FUN_ram_400078be(uVar14,0x30049f00);
      }
      FUN_ram_400002f4();
      uVar3 = DAT_ram_3004651e;
      FUN_ram_400002fa();
      if (-1 < (short)uVar3) {
        FUN_ram_4000789c(0);
        FUN_ram_400078be(0,0x30049f00);
      }
    }
    if (-1 < (short)uVar4) {
      FUN_ram_4000c01e(uVar4 & 0xff);
    }
    goto LAB_ram_4000c3b4;
  }
LAB_ram_4000c24e:
  FUN_ram_400065d4(0x19);
  goto LAB_ram_4000c254;
code_r0x4000c3c6:
  FUN_ram_4000829c();
  if (DAT_ram_30046696 != -1) {
LAB_ram_4000c254:
    FUN_ram_400048d4(0x30049dd8);
  }
  goto LAB_ram_4000c166;
}


/* NanoCore 1.10, address 0x4000c41a.
 * REA evidence: ev_e2fb3d64f067dfef301318b011fb64174871ecfc9fd3f8dad71207c4c960fc08
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c41a(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_ram_40008120();
  iVar2 = FUN_ram_4005eaa6(0x3004abe8);
  iVar3 = FUN_ram_4005ea8e(0x3004abe8);
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0xffffffff;
    if (iVar3 != 0) {
      bVar1 = param_1 != 0;
      FUN_ram_40007a5e(bVar1);
      FUN_ram_4000305c(iVar3,iVar2,0x2dc);
      uVar4 = _DAT_ram_3004d518;
      if (*(int *)(iVar2 + 0x1bc) == 8) {
        *(bool *)(iVar3 + 0x1c1) = bVar1;
        *(undefined4 *)(iVar3 + 0x200) = uVar4;
        if (param_1 != 0) {
          FUN_ram_400081fa(*(undefined1 *)(iVar3 + 0x1c0));
        }
      }
      else {
        if (param_1 != 0) {
          FUN_ram_4006ab8c(_DAT_ram_3004d520);
          if (*(int *)(iVar2 + 0x1bc) != 4) {
            *(undefined1 *)(iVar3 + 0x1c0) = 0;
            FUN_ram_4006b500(iVar3 + 0x1c4,0xc,0);
          }
        }
        *(undefined4 *)(iVar3 + 0x1bc) = 4;
        uVar4 = _DAT_ram_3004d520;
        *(bool *)(iVar3 + 0x1c1) = bVar1;
        *(undefined4 *)(iVar3 + 0x200) = uVar4;
      }
      FUN_ram_4005eaba(0x3004abe8);
      uVar4 = 0;
    }
  }
  FUN_ram_40007ccc();
  return uVar4;
}


/* NanoCore 1.10, address 0x4000c4f8.
 * REA evidence: ev_941a9c358ffd0344df3d35775a9ae10c21dad0b483a646612f539bd5e112f0ef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c4f8(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_40008120();
  iVar2 = FUN_ram_4005eaa6(0x3004abe8);
  iVar3 = FUN_ram_4005ea8e(0x3004abe8);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000305c(iVar3,iVar2,0x2dc);
    uVar1 = _DAT_ram_3004d518;
    if (*(int *)(iVar2 + 0x1bc) != 8) {
      *(undefined4 *)(iVar3 + 0x1bc) = 4;
      uVar1 = _DAT_ram_3004d520;
    }
    *(undefined4 *)(iVar3 + 0x200) = uVar1;
    uVar1 = 0;
    *(bool *)(iVar3 + 0x1c1) = DAT_ram_3004d51c != '\0';
    *(undefined4 *)(iVar3 + param_2 * 4 + 0x1c4) = param_1;
    FUN_ram_4005eaba(0x3004abe8);
  }
  FUN_ram_40007ccc();
  return uVar1;
}


/* NanoCore 1.10, address 0x4000c5a8.
 * REA evidence: ev_0960dd681b64d2e8df21db8b53e694843076c6a9ee83262de4c49472a91703ad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000c5a8(undefined4 param_1)

{
  FUN_ram_40008358(FUN_ram_400097f4,param_1);
  return;
}


/* NanoCore 1.10, address 0x4000c5b6.
 * REA evidence: ev_48a36aa0a45c2568703f0432644fb3feb9175f38f7d243bbb048e6ed1a6c926b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000c5b6(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4000821c();
  if (((iVar1 == 0) && (iVar1 = FUN_ram_40007ce4(), iVar1 == 0)) && (DAT_ram_30049dd4 != '\0')) {
    FUN_ram_40008394(&DAT_ram_30046510,param_1);
    return 0;
  }
  uVar2 = FUN_ram_4000b63c(param_1,0,0);
  return uVar2;
}


/* NanoCore 1.10, address 0x4000c5fc.
 * REA evidence: ev_0ab176e55ccab8ebd4fdba0baec7166d5bd9957b02ae89eca7c0e84dfbcab20e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000c5fc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4000821c();
  if (((iVar1 == 0) && (iVar1 = FUN_ram_40007ce4(), iVar1 == 0)) && (DAT_ram_30049dd4 != '\0')) {
    FUN_ram_40008394(&DAT_ram_30046688,param_1);
    return 0;
  }
  uVar2 = FUN_ram_4000bb4c(param_1);
  return uVar2;
}


/* NanoCore 1.10, address 0x4000c63e.
 * REA evidence: ev_900ae3d6dfd15ea8db23de18691f84d75d7ed050ac90dbd79a70f906ffc81cfa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c63e(int param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_21 [9];
  
  auStack_21[0] = 0;
  iVar3 = FUN_ram_4005eaa6(0x3004abe8);
  if (param_1 != 0) {
    if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x9c) == 3)) && (*(char *)(iVar3 + 0xa1) != '\0')) &&
       (uVar4 = FUN_ram_4007137c(_DAT_ram_3004d528), *(byte *)(iVar3 + 0xa0) == uVar4)) {
      FUN_ram_40007a7c(1);
      return 0;
    }
    iVar3 = FUN_ram_40008248(auStack_21);
    if (iVar3 != 0) {
      return 0xffffffff;
    }
  }
  FUN_ram_40008120();
  iVar3 = FUN_ram_4005eaa6(0x3004abe8);
  iVar5 = FUN_ram_4005ea8e(0x3004abe8);
  if ((iVar3 == 0) || (iVar5 == 0)) goto LAB_ram_4000c7be;
  if (param_1 != 0) {
    if (*(int *)(iVar3 + 0x9c) == 3) {
      if (*(char *)(iVar3 + 0xa1) != '\0') {
        uVar4 = FUN_ram_4007137c(_DAT_ram_3004d528);
        if (*(byte *)(iVar3 + 0xa0) == uVar4) {
          FUN_ram_40007a7c(1);
          goto LAB_ram_4000c76e;
        }
        if (*(int *)(iVar3 + 0x9c) != 3) goto LAB_ram_4000c6ba;
      }
      uVar2 = *(undefined1 *)(iVar3 + 0xa0);
    }
    else {
LAB_ram_4000c6ba:
      uVar2 = 6;
    }
    iVar3 = FUN_ram_40008448(uVar2);
    if (iVar3 != 0) {
LAB_ram_4000c7be:
      FUN_ram_40007ccc();
      FUN_ram_4000838c(auStack_21[0]);
      return 0xffffffff;
    }
    iVar3 = FUN_ram_4005eaa6(0x3004abe8);
    iVar5 = FUN_ram_4005ea8e(0x3004abe8);
    if ((iVar3 == 0) || (iVar5 == 0)) goto LAB_ram_4000c7be;
  }
  FUN_ram_40007a7c(param_1 != 0);
  if (param_1 != 0) {
    FUN_ram_4007138a(_DAT_ram_3004d528);
  }
  FUN_ram_4000305c(iVar5,iVar3,0x2dc);
  if ((param_1 != 0) && (*(int *)(iVar3 + 0x9c) != 3)) {
    *(undefined1 *)(iVar5 + 0xa0) = 6;
    FUN_ram_40071420(iVar5 + 0xa4,0xc,6);
  }
  *(undefined4 *)(iVar5 + 0x9c) = 3;
  uVar1 = _DAT_ram_3004d528;
  *(bool *)(iVar5 + 0xa1) = param_1 != 0;
  *(undefined4 *)(iVar5 + 0xe0) = uVar1;
  FUN_ram_4005eaba(0x3004abe8);
LAB_ram_4000c76e:
  FUN_ram_40007ccc();
  FUN_ram_4000838c(auStack_21[0]);
  return 0;
}


/* NanoCore 1.10, address 0x4000c7ce.
 * REA evidence: ev_f3c589e6926949d8382f95a338ab593af51212897df1dfa567671722c1bbde27
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c7ce(uint param_1)

{
  uint uVar1;
  
  uVar1 = 6;
  if (param_1 < 8) {
    uVar1 = param_1;
  }
  if (DAT_ram_30049dd4 == '\0') {
    FUN_ram_400096f4(uVar1);
  }
  else {
    FUN_ram_400002f4();
    DAT_ram_30046696 = (undefined1)uVar1;
    _DAT_ram_30049dd0 = _DAT_ram_30049dd0 + 1;
    FUN_ram_400002fa();
    FUN_ram_400048d4(0x30049dd8);
  }
  return 0;
}


/* NanoCore 1.10, address 0x4000c824.
 * REA evidence: ev_edf8e947ca68890fe3228e6b88205baa9c9f9da7658e49427b92ee327d37473f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c824(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_ram_40008120();
  iVar1 = FUN_ram_4005eaa6(0x3004abe8);
  iVar2 = FUN_ram_4005ea8e(0x3004abe8);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      FUN_ram_40007a9a(param_1 != 0);
      if (param_1 != 0) {
        FUN_ram_4006471c(_DAT_ram_3004b454);
      }
      FUN_ram_4000305c(iVar2,iVar1,0x2dc);
      if (*(int *)(iVar1 + 0x204) != 6) {
        *(undefined1 *)(iVar2 + 0x208) = 2;
        FUN_ram_40064846(iVar2 + 0x20c,0xc,2);
      }
      *(undefined4 *)(iVar2 + 0x204) = 6;
      uVar3 = _DAT_ram_3004b454;
      *(bool *)(iVar2 + 0x209) = param_1 != 0;
      *(undefined4 *)(iVar2 + 0x248) = uVar3;
      FUN_ram_4005eaba(0x3004abe8);
      uVar3 = 0;
    }
  }
  FUN_ram_40007ccc();
  return uVar3;
}


/* NanoCore 1.10, address 0x4000c8dc.
 * REA evidence: ev_d69d7309b73cbb20344a3c8ab801947c8339728d2d78d879c06f51d9f15827a5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c8dc(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_40008120();
  iVar2 = FUN_ram_4005eaa6(0x3004abe8);
  iVar3 = FUN_ram_4005ea8e(0x3004abe8);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000305c(iVar3,iVar2,0x2dc);
    if (*(int *)(iVar2 + 0x204) != 6) {
      *(undefined1 *)(iVar3 + 0x208) = 2;
      FUN_ram_40064846(iVar3 + 0x20c,0xc,2);
    }
    *(undefined4 *)(iVar3 + 0x204) = 6;
    uVar1 = 0;
    *(undefined4 *)(iVar3 + 0x248) = _DAT_ram_3004b454;
    *(bool *)(iVar3 + 0x209) = DAT_ram_3004b451 != '\0';
    *(undefined4 *)(iVar3 + param_2 * 4 + 0x20c) = param_1;
    FUN_ram_4005eaba(0x3004abe8);
  }
  FUN_ram_40007ccc();
  return uVar1;
}


/* NanoCore 1.10, address 0x4000c994.
 * REA evidence: ev_53460ecbe260e2db5a242168bdd3c00773e0da303503875df60c4b08bd89ac24
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000c994(undefined4 param_1)

{
  FUN_ram_40008358(FUN_ram_40009648,param_1);
  return;
}


/* NanoCore 1.10, address 0x4000c9a2.
 * REA evidence: ev_bf58237029950505fb4b30a7713ccecd3e504ef33b966a3682264f18b31d81d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000c9a2(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_ram_40008120();
  iVar1 = FUN_ram_4005eaa6(0x3004abe8);
  iVar2 = FUN_ram_4005ea8e(0x3004abe8);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      FUN_ram_40007ab8(param_1 != 0);
      if (param_1 != 0) {
        FUN_ram_40065d30(_DAT_ram_3004b45c);
      }
      FUN_ram_4000305c(iVar2,iVar1,0x2dc);
      if (*(int *)(iVar1 + 0x24c) != 10) {
        *(undefined1 *)(iVar2 + 0x250) = 0;
        FUN_ram_40065d78(iVar2 + 0x254,0xc,0);
      }
      *(undefined4 *)(iVar2 + 0x24c) = 10;
      uVar3 = _DAT_ram_3004b45c;
      *(bool *)(iVar2 + 0x251) = param_1 != 0;
      *(undefined4 *)(iVar2 + 0x290) = uVar3;
      FUN_ram_4005eaba(0x3004abe8);
      uVar3 = 0;
    }
  }
  FUN_ram_40007ccc();
  return uVar3;
}


/* NanoCore 1.10, address 0x4000ca58.
 * REA evidence: ev_bd7844c27d8729a7ad535932a9ac834a8107e8562389398970807fa118f318ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000ca58(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_40008120();
  iVar2 = FUN_ram_4005eaa6(0x3004abe8);
  iVar3 = FUN_ram_4005ea8e(0x3004abe8);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000305c(iVar3,iVar2,0x2dc);
    if (*(int *)(iVar2 + 0x24c) != 10) {
      *(undefined1 *)(iVar3 + 0x250) = 0;
      FUN_ram_40065d78(iVar3 + 0x254,0xc,0);
    }
    *(undefined4 *)(iVar3 + 0x24c) = 10;
    uVar1 = 0;
    *(undefined4 *)(iVar3 + 0x290) = _DAT_ram_3004b45c;
    *(bool *)(iVar3 + 0x251) = DAT_ram_3004b458 != '\0';
    *(undefined4 *)(iVar3 + param_2 * 4 + 0x254) = param_1;
    FUN_ram_4005eaba(0x3004abe8);
  }
  FUN_ram_40007ccc();
  return uVar1;
}


/* NanoCore 1.10, address 0x4000cb0e.
 * REA evidence: ev_80afb40a6ee46b0ab424de1439c299da6b2b85970e15e30b0a8598dd00acd69a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000cb0e(undefined4 param_1)

{
  FUN_ram_40008358(FUN_ram_4000959c,param_1);
  return;
}


/* NanoCore 1.10, address 0x4000cb1c.
 * REA evidence: ev_9b27c2b0cd4c5eef454f141034f8bc8030d56352e6c52114931cced9d63a8297
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000cb1c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_ram_40008120();
  iVar1 = FUN_ram_4005eaa6(0x3004abe8);
  iVar2 = FUN_ram_4005ea8e(0x3004abe8);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      FUN_ram_40007ad6(param_1 != 0);
      if (param_1 != 0) {
        FUN_ram_4006674c(_DAT_ram_3004b470);
      }
      FUN_ram_4000305c(iVar2,iVar1,0x2dc);
      if (*(int *)(iVar1 + 0x294) != 9) {
        *(undefined1 *)(iVar2 + 0x298) = 0;
        FUN_ram_40066fb4(iVar2 + 0x29c,0xc,0);
      }
      *(undefined4 *)(iVar2 + 0x294) = 9;
      uVar3 = _DAT_ram_3004b470;
      *(bool *)(iVar2 + 0x299) = param_1 != 0;
      *(undefined4 *)(iVar2 + 0x2d8) = uVar3;
      FUN_ram_4005eaba(0x3004abe8);
      uVar3 = 0;
    }
  }
  FUN_ram_40007ccc();
  return uVar3;
}


/* NanoCore 1.10, address 0x4000cbd2.
 * REA evidence: ev_43910a4fc77e786e352d00b4cfa039ee242feeba5adeb875e44ff7b7aad290cd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000cbd2(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_40008120();
  iVar2 = FUN_ram_4005eaa6(0x3004abe8);
  iVar3 = FUN_ram_4005ea8e(0x3004abe8);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000305c(iVar3,iVar2,0x2dc);
    if (*(int *)(iVar2 + 0x294) != 9) {
      *(undefined1 *)(iVar3 + 0x298) = 0;
      FUN_ram_40066fb4(iVar3 + 0x29c,0xc,0);
    }
    *(undefined4 *)(iVar3 + 0x294) = 9;
    uVar1 = 0;
    *(undefined4 *)(iVar3 + 0x2d8) = _DAT_ram_3004b470;
    *(bool *)(iVar3 + 0x299) = DAT_ram_3004b46d != '\0';
    *(undefined4 *)(iVar3 + param_2 * 4 + 0x29c) = param_1;
    FUN_ram_4005eaba(0x3004abe8);
  }
  FUN_ram_40007ccc();
  return uVar1;
}


/* NanoCore 1.10, address 0x4000cc88.
 * REA evidence: ev_7575d023497205f87716f19ad19fe2a2c20ea06703e5bc9df2fbcf35e0b59bc7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000cc88(undefined4 param_1)

{
  FUN_ram_40008358(FUN_ram_4000993a,param_1);
  return;
}


/* NanoCore 1.10, address 0x4000cc96.
 * REA evidence: ev_f4f986fca9692e5efc08ebadbdd7a6847f302a85380c05477cc01b635fc39616
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000cc96(uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_ram_40008120();
  iVar3 = FUN_ram_4005eaa6(0x3004abe8);
  iVar4 = FUN_ram_4005ea8e(0x3004abe8);
  uVar2 = 0xffffffff;
  if (((iVar3 != 0) && (uVar2 = 0xffffffff, iVar4 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000305c(iVar4,iVar3,0x2dc);
    if (*(int *)(iVar3 + 0xc) != 1) {
      *(undefined1 *)(iVar4 + 0x10) = 0;
      FUN_ram_400086c4(iVar4 + 0x14);
    }
    *(undefined4 *)(iVar4 + 0xc) = 1;
    *(undefined4 *)(iVar4 + 0x50) = 0x3004d5d0;
    cVar1 = DAT_ram_3004d5cc;
    *(undefined1 *)(iVar4 + 0x10) = 0;
    *(bool *)(iVar4 + 0x11) = cVar1 != '\0';
    *(ulonglong *)(iVar4 + param_2 * 4 + 0x14) = (ulonglong)param_1;
    FUN_ram_4005eaba(0x3004abe8);
    uVar2 = 0;
  }
  FUN_ram_40007ccc();
  return uVar2;
}


/* NanoCore 1.10, address 0x4000cd46.
 * REA evidence: ev_b59798380f7d45bcc0707f2a4d8faacdcfc884eaec0388fcd470ecbfae4fc394
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000cd46(uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = _DAT_ram_3004d4f4;
  FUN_ram_40008120();
  iVar4 = FUN_ram_4005eaa6(0x3004abe8);
  iVar5 = FUN_ram_4005ea8e(0x3004abe8);
  uVar3 = 0xffffffff;
  if (((iVar4 != 0) && (uVar3 = 0xffffffff, iVar5 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000305c(iVar5,iVar4,0x2dc);
    *(undefined4 *)(iVar5 + 0x54) = 2;
    cVar1 = DAT_ram_3004b4bc;
    *(undefined4 *)(iVar5 + 0x98) = uVar2;
    *(bool *)(iVar5 + 0x59) = cVar1 != '\0';
    *(ulonglong *)(iVar5 + param_2 * 4 + 0x5c) = (ulonglong)param_1;
    FUN_ram_4005eaba(0x3004abe8);
    uVar3 = 0;
  }
  FUN_ram_40007ccc();
  return uVar3;
}


/* NanoCore 1.10, address 0x4000cddc.
 * REA evidence: ev_239f2f85411f9e9b741a25fe6b2cf55d91c6c5f68dfb02db5c3c6590afc51fb6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000cddc(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_ram_40008120();
  iVar2 = FUN_ram_4005eaa6(0x3004abe8);
  iVar3 = FUN_ram_4005ea8e(0x3004abe8);
  uVar1 = 0xffffffff;
  if (((iVar2 != 0) && (uVar1 = 0xffffffff, iVar3 != 0)) && (param_2 < 0xc)) {
    FUN_ram_4000305c(iVar3,iVar2,0x2dc);
    if (*(int *)(iVar2 + 0x9c) != 3) {
      *(undefined1 *)(iVar3 + 0xa0) = 6;
      FUN_ram_40071420(iVar3 + 0xa4,0xc,6);
    }
    *(undefined4 *)(iVar3 + 0x9c) = 3;
    uVar1 = 0;
    *(undefined4 *)(iVar3 + 0xe0) = _DAT_ram_3004d528;
    *(bool *)(iVar3 + 0xa1) = DAT_ram_3004d525 != '\0';
    *(undefined4 *)(iVar3 + param_2 * 4 + 0xa4) = param_1;
    FUN_ram_4005eaba(0x3004abe8);
  }
  FUN_ram_40007ccc();
  return uVar1;
}


/* NanoCore 1.10, address 0x4000ce94.
 * REA evidence: ev_fd9006d848ca92635098a261ebdd382d39e74094403185a112caf0c7d8528de6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000ce94(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char local_1c [12];
  
  FUN_ram_40008120();
  iVar1 = FUN_ram_4005eaa6(0x3004abe8);
  iVar2 = FUN_ram_4005ea8e(0x3004abe8);
  local_1c[0] = '\0';
  local_1c[1] = '\0';
  local_1c[2] = '\0';
  local_1c[3] = '\0';
  local_1c[4] = '\0';
  local_1c[5] = '\0';
  local_1c[6] = '\0';
  local_1c[7] = '\0';
  local_1c[8] = '\0';
  local_1c[9] = '\0';
  if ((((param_1 == 0) || (9 < (param_2 - 1 & 0xff))) || (iVar1 == 0)) || (iVar2 == 0)) {
LAB_ram_4000cece:
    uVar3 = 0xffffffff;
  }
  else {
    uVar5 = 0;
    do {
      uVar4 = (uint)*(byte *)(param_1 + uVar5);
      if ((9 < uVar4) || (local_1c[uVar4] != '\0')) goto LAB_ram_4000cece;
      uVar5 = uVar5 + 1;
      local_1c[uVar4] = '\x01';
    } while ((uVar5 & 0xff) < param_2);
    iVar1 = FUN_ram_4000305c(iVar2,iVar1,0x2dc);
    uVar5 = 0;
    do {
      *(undefined1 *)(iVar1 + uVar5) = *(undefined1 *)(param_1 + uVar5);
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xff) < param_2);
    iVar2 = 0;
    do {
      if (local_1c[iVar2] == '\0') {
        *(char *)(iVar1 + param_2) = (char)iVar2;
        param_2 = param_2 + 1 & 0xff;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 10);
    FUN_ram_4005eaba(0x3004abe8);
    uVar3 = 0;
  }
  FUN_ram_40007ccc();
  return uVar3;
}


/* NanoCore 1.10, address 0x4000cf6e.
 * REA evidence: ev_7f9cc95b1dc0f17255ed8dd89666ab7d494d0ae67dc6c99f9f4ea30506a60d50
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000cf6e(int param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  byte bVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined4 *puVar20;
  uint uVar21;
  char cVar22;
  int *piVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  undefined1 uStack_69;
  char acStack_68 [12];
  byte local_5c [12];
  
  uStack_69 = 0;
  iVar16 = FUN_ram_40008248(&uStack_69);
  if (iVar16 != 0) {
    return 0xffffffff;
  }
  FUN_ram_40008120();
  iVar16 = 0;
  if (param_1 != 0) {
    do {
      if (*(int *)(param_1 + 0xc + iVar16 * 0x48) == 3) {
        iVar16 = FUN_ram_40008448(*(undefined1 *)(iVar16 * 0x48 + param_1 + 0x10));
        if (iVar16 != 0) goto LAB_ram_4000d114;
        FUN_ram_400002f4();
        DAT_ram_30046696 = 0xff;
        _DAT_ram_30049dd0 = _DAT_ram_30049dd0 + 1;
        FUN_ram_400002fa();
        break;
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != 10);
    iVar16 = FUN_ram_4005eaa6(0x3004abe8);
    iVar17 = FUN_ram_4005ea8e(0x3004abe8);
    if (iVar17 != 0) {
      FUN_ram_4000305c(iVar17,param_1,0x2dc);
      iVar19 = 0;
      acStack_68[0] = '\0';
      acStack_68[1] = '\0';
      acStack_68[2] = '\0';
      acStack_68[3] = '\0';
      acStack_68[4] = '\0';
      acStack_68[5] = '\0';
      acStack_68[6] = '\0';
      acStack_68[7] = '\0';
      acStack_68[8] = '\0';
      acStack_68[9] = '\0';
      uVar21 = 0;
      do {
        uVar18 = (uint)*(byte *)(iVar17 + iVar19);
        if ((uVar18 < 10) && (acStack_68[uVar18] == '\0')) {
          local_5c[uVar21] = *(byte *)(iVar17 + iVar19);
          acStack_68[uVar18] = '\x01';
          uVar21 = uVar21 + 1 & 0xff;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 != 10);
      iVar19 = 0;
      do {
        if (acStack_68[iVar19] == '\0') {
          local_5c[uVar21] = (byte)iVar19;
          uVar21 = uVar21 + 1 & 0xff;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 != 10);
      FUN_ram_4000305c(iVar17,local_5c,10);
      FUN_ram_4000787e(0);
      FUN_ram_4000789c(0);
      FUN_ram_40007f06(0);
      FUN_ram_40007a7c(0);
      FUN_ram_40007a40(0);
      FUN_ram_40007a5e(0);
      FUN_ram_40007a22(0);
      FUN_ram_40007a9a(0);
      FUN_ram_40007ab8(0);
      FUN_ram_40007ad6(0);
      fVar13 = DAT_ram_40092854;
      uVar24 = DAT_ram_4009281c;
      puVar25 = (undefined4 *)(iVar17 + 0xc);
      bVar8 = false;
      piVar23 = (int *)(iVar16 + 0xc);
      bVar7 = false;
      bVar12 = false;
      bVar11 = false;
      bVar10 = false;
      bVar9 = false;
      bVar6 = false;
      bVar5 = false;
      bVar15 = false;
      bVar4 = false;
      bVar3 = false;
      cVar22 = '\0';
      do {
        switch(*puVar25) {
        case 1:
          if ((bVar3) || (iVar19 = FUN_ram_400849e6(0x3004d584), iVar19 == 0))
          goto switchD_ram_4000d112_default;
          puVar25[0x11] = 0x3004d5d0;
          *(undefined1 *)(puVar25 + 1) = 0;
          FUN_ram_4000787e(*(char *)((int)puVar25 + 5) != '\0');
          if (*(char *)((int)puVar25 + 5) == '\0') {
            FUN_ram_400078be(uVar24,0x3004d5d0);
          }
          else {
            FUN_ram_400080ec(0x3004d5d0);
            if ((_DAT_ram_3004d65c != 0) || (_DAT_ram_3004d654 < DAT_ram_40092854)) {
              FUN_ram_400091d0(uVar24,0x3004d5d0,0x10);
            }
          }
          bVar3 = true;
          break;
        case 2:
          if (bVar5) goto switchD_ram_4000d112_default;
          puVar25[0x11] = _DAT_ram_3004d4f4;
          FUN_ram_40007f06(*(char *)((int)puVar25 + 5) != '\0');
          if (*(char *)((int)puVar25 + 5) == '\0') {
            FUN_ram_400079da(uVar24);
          }
          else if ((*(int *)(_DAT_ram_3004d4f4 + 0x2c) != 0) ||
                  ((float)*(undefined8 *)(_DAT_ram_3004d4f4 + 0x24) < fVar13)) {
            FUN_ram_40007906(uVar24,0x10);
          }
          bVar5 = true;
          break;
        case 3:
          if (bVar6) goto switchD_ram_4000d112_default;
          if (7 < *(byte *)(puVar25 + 1)) {
            *(undefined1 *)(puVar25 + 1) = 6;
          }
          puVar25[0x11] = _DAT_ram_3004d528;
          FUN_ram_40007a7c(*(char *)((int)puVar25 + 5) != '\0');
          bVar6 = true;
          if ((*(char *)((int)puVar25 + 5) != '\0') &&
             ((((iVar16 == 0 || (*piVar23 != 3)) || (*(char *)((int)piVar23 + 5) == '\0')) ||
              (bVar6 = true, (char)piVar23[1] != *(char *)(puVar25 + 1))))) {
            bVar6 = true;
            FUN_ram_4007138a(_DAT_ram_3004d528);
          }
          break;
        case 4:
          if (bVar10) goto switchD_ram_4000d112_default;
          puVar25[0x11] = _DAT_ram_3004d520;
          FUN_ram_40007a5e(*(char *)((int)puVar25 + 5) != '\0');
          bVar10 = true;
          if (*(char *)((int)puVar25 + 5) != '\0') {
            FUN_ram_4006ab8c(_DAT_ram_3004d520);
          }
          break;
        case 5:
          if (bVar9) goto switchD_ram_4000d112_default;
          puVar25[0x11] = _DAT_ram_30049ef8;
          FUN_ram_40007a40(*(char *)((int)puVar25 + 5) != '\0');
          bVar9 = true;
          if (*(char *)((int)puVar25 + 5) != '\0') {
            FUN_ram_4005fee6(_DAT_ram_30049ef8);
          }
          break;
        case 6:
          if (bVar12) goto switchD_ram_4000d112_default;
          puVar25[0x11] = _DAT_ram_3004b454;
          FUN_ram_40007a9a(*(char *)((int)puVar25 + 5) != '\0');
          bVar12 = true;
          if (*(char *)((int)puVar25 + 5) != '\0') {
            FUN_ram_4006471c(_DAT_ram_3004b454);
          }
          break;
        case 7:
          if (bVar11) goto switchD_ram_4000d112_default;
          puVar25[0x11] = _DAT_ram_3004b464;
          FUN_ram_40007a22(*(char *)((int)puVar25 + 5) != '\0');
          cVar2 = *(char *)((int)puVar25 + 5);
          bVar11 = true;
          puVar20 = (undefined4 *)&DAT_ram_3004b464;
LAB_ram_4000d4ac:
          if (cVar2 != '\0') {
            FUN_ram_4006674c(*puVar20);
          }
          break;
        case 8:
          if (cVar22 == '\x06') {
            if ((bVar4) || (cVar2 = *(char *)(iVar17 + 0x1c0), 3 < (byte)(cVar2 - 8U))) {
              *(undefined4 *)(iVar17 + 0x1bc) = 0;
              *(undefined1 *)(iVar17 + 0x1c1) = 0;
              *(undefined4 *)(iVar17 + 0x200) = 0;
            }
            else {
              *(undefined4 *)(iVar17 + 0x200) = _DAT_ram_3004d518;
              FUN_ram_40007a5e(*(char *)(iVar17 + 0x1c1) != '\0');
              if (*(char *)(iVar17 + 0x1c1) != '\0') {
                FUN_ram_400081fa(cVar2);
              }
              bVar4 = true;
            }
          }
          else {
            if (bVar15) goto switchD_ram_4000d112_default;
            bVar1 = *(byte *)(puVar25 + 1);
            bVar14 = 0;
            if (((bVar1 < 0xc) && (bVar14 = bVar1, 7 < bVar1)) ||
               ((((DAT_ram_30046520 == (byte)(bVar14 + 0x1e) &&
                  (iVar19 = FUN_ram_400849e6(0x3004a390), iVar19 != 0)) ||
                 (iVar19 = FUN_ram_4000813a(bVar14 + 0x1e), iVar19 == 0)) &&
                (iVar19 = FUN_ram_400849e6(0x3004a390), iVar19 != 0)))) {
              bVar15 = *(char *)((int)puVar25 + 5) != '\0';
            }
            else {
              *(undefined1 *)((int)puVar25 + 5) = 0;
              bVar15 = false;
            }
            FUN_ram_4000789c(bVar15);
            DAT_ram_3004b46c = bVar14;
            puVar25[0x11] = _DAT_ram_3004b468;
            *(byte *)(puVar25 + 1) = bVar14;
            if (*(char *)((int)puVar25 + 5) == '\0') {
              FUN_ram_400078be(uVar24,0x30049f00);
            }
            else if (bVar14 == 8) {
              FUN_ram_40068efa();
            }
            else if (bVar14 == 9) {
              FUN_ram_40068f4a();
            }
            else if (bVar14 == 10) {
              FUN_ram_40068fee();
            }
            else if (bVar14 == 0xb) {
              FUN_ram_4006904e();
            }
            else {
              FUN_ram_400080ec(0x30049f00);
              if ((_DAT_ram_30049f8c != 0) || (_DAT_ram_30049f84 < fVar13)) {
                FUN_ram_400091d0(uVar24,0x30049f00,0x10);
              }
            }
            bVar15 = true;
          }
          break;
        case 9:
          if (!bVar8) {
            bVar8 = true;
            puVar25[0x11] = _DAT_ram_3004b470;
            FUN_ram_40007ad6(*(char *)((int)puVar25 + 5) != '\0');
            cVar2 = *(char *)((int)puVar25 + 5);
            puVar20 = (undefined4 *)&DAT_ram_3004b470;
            goto LAB_ram_4000d4ac;
          }
        default:
switchD_ram_4000d112_default:
          *puVar25 = 0;
          *(undefined1 *)((int)puVar25 + 5) = 0;
          puVar25[0x11] = 0;
          break;
        case 10:
          if (bVar7) goto switchD_ram_4000d112_default;
          puVar25[0x11] = _DAT_ram_3004b45c;
          FUN_ram_40007ab8(*(char *)((int)puVar25 + 5) != '\0');
          bVar7 = true;
          if (*(char *)((int)puVar25 + 5) != '\0') {
            FUN_ram_40065d30(_DAT_ram_3004b45c);
            bVar7 = true;
          }
        }
        FUN_ram_40008404(puVar25);
        cVar22 = cVar22 + '\x01';
        puVar25 = puVar25 + 0x12;
        piVar23 = piVar23 + 0x12;
      } while (cVar22 != '\n');
      FUN_ram_4005eaba(0x3004abe8);
      uVar24 = 0;
      goto LAB_ram_4000d116;
    }
  }
LAB_ram_4000d114:
  uVar24 = 0xffffffff;
LAB_ram_4000d116:
  FUN_ram_40007ccc();
  FUN_ram_4000838c(uStack_69);
  return uVar24;
}


