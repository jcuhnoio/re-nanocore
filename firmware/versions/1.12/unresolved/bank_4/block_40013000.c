/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40013000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40013014.
 * REA evidence: ev_3ca8298c847e6b3eb5511a1dc37d08f3015b3c1729705950cbeec37def0c09c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40013014(void)

{
  FUN_ram_4003fc76(0x22);
  FUN_ram_40039bb8(4);
  FUN_ram_40039bb8(2);
  FUN_ram_40038c22(0x14);
  FUN_ram_40038c22(0x12);
  return;
}


/* NanoCore 1.12, address 0x4001303c.
 * REA evidence: ev_9e86888194cd3f28ae88b780a87d529bc0f8c5e45d11f7053648a4e5df2ee922
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001303c(void)

{
  FUN_ram_40004a22(0x3005f724,0xffffffff);
  return;
}


/* NanoCore 1.12, address 0x4001304a.
 * REA evidence: ev_01cccb24d066744e23224cdddb909ead4c22fdead108ed4f29864c963946f7cb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001304a(void)

{
  FUN_ram_40004b14(0x3005f724);
  return;
}


/* NanoCore 1.12, address 0x40013056.
 * REA evidence: ev_78e7009ebe7e5130ea6f022996017920d5b76401f66850d06697cfce0e884a86
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40013056(void)

{
  uint uVar1;
  
  FUN_ram_4001350a();
  FUN_ram_4001303c();
  FUN_ram_40043146();
  FUN_ram_40056ada(FUN_ram_400043d4);
  FUN_ram_40013244();
  FUN_ram_4001350c();
  FUN_ram_4001304a();
  do {
    FUN_ram_4001303c();
    uVar1 = FUN_ram_4004c73e();
    FUN_ram_4001304a();
    FUN_ram_400134cc();
    if (uVar1 < 8) {
      uVar1 = 8;
    }
    if (0x10 < uVar1) {
      uVar1 = 0x10;
    }
    FUN_ram_400064e4(uVar1);
  } while( true );
}


/* NanoCore 1.12, address 0x400130a4.
 * REA evidence: ev_bf8ffe11f0dcdc6be68ae7995a11643a37d5f457282bdc54394bc086c30029d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400130a4(void)

{
  int iVar1;
  
  if (_DAT_ram_3005f750 == 0) {
    iVar1 = FUN_ram_40004988(0x3005f724,&DAT_ram_40099c8c,1);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    _DAT_ram_3005f750 = 1;
  }
  iVar1 = FUN_ram_4000634c(0x3005f754,&DAT_ram_40099c94,FUN_ram_40013056,0,0x3005f7e4,0x8000,0x14,10
                          );
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  FUN_ram_40006550(0x3005f754);
  return 0;
}


/* NanoCore 1.12, address 0x4001311c.
 * REA evidence: ev_c4d318d3a1499b46afaed55b6a516b5024a273c992d9d2bc81171e745a20e596
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001312e) */

int FUN_ram_4001311c(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 + (param_1 & 0x1f);
  if ((uVar2 & 0x1f) != 0) {
    uVar2 = uVar2 + (0x20 - (int)uVar2 % 0x20);
  }
  fence();
  custom0();
  iVar1 = (param_1 & 0xffffffe0) + uVar2;
  for (; 0 < (int)uVar2; uVar2 = uVar2 - 0x20) {
    custom0();
  }
  fence();
  custom0();
  return iVar1;
}


/* NanoCore 1.12, address 0x4001315a.
 * REA evidence: ev_fc66c36729d0c1110cdb42c653d445edcc363636673681c225f182ca8412562d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001315a(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uStack_14;
  
  puVar1 = (undefined4 *)FUN_ram_4004d562();
  iVar2 = FUN_ram_4004d574(param_1);
  iVar3 = FUN_ram_4004d42e(param_1);
  if (iVar3 != 0) {
    FUN_ram_4001311c(*(undefined4 *)(iVar2 + 0x10),puVar1[0xf] + 0x1f & 0xffffffe0);
    uStack_14 = (uint)(*(int *)(iVar2 + 0x10) != puVar1[6]);
    puVar1[0x10] = uStack_14;
    FUN_ram_4005aaec(*puVar1,0x4643,&uStack_14);
    if (DAT_ram_3004acdc != '\0') {
      FUN_ram_4005aaec(*puVar1,0x4663,0);
      DAT_ram_3004acdc = '\0';
    }
    FUN_ram_4005aaec(*puVar1,0x4620,0);
    if (_DAT_ram_300677e8 == 0) {
      _DAT_ram_300677e8 = 1;
      _DAT_ram_300677f0 = FUN_ram_400400c0();
      _DAT_ram_300677f4 = _DAT_ram_300677f0 >> 0x1f;
    }
    iVar2 = FUN_ram_400400c0();
    if (iVar2 - _DAT_ram_300677f0 < 1000000) {
      _DAT_ram_300677e4 = _DAT_ram_300677e4 + 1;
    }
    else {
      puVar1[0x11] = _DAT_ram_300677e4;
      _DAT_ram_300677e4 = 0;
      _DAT_ram_300677e8 = 0;
    }
  }
  FUN_ram_4004d428(param_1);
  return;
}


/* NanoCore 1.12, address 0x40013244.
 * REA evidence: ev_4f3a0144e53e32064005902634e1d68a0ec1f2528245ace5a095eef9a0d7c0a9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40013244(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined3 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  
  iVar4 = FUN_ram_40041ad8(s_PD_23_ram_40099c9c);
  if (-1 < iVar4) {
    FUN_ram_40041aa0(iVar4,0);
    FUN_ram_40041ab4(iVar4,1);
    FUN_ram_400064e4(1);
    FUN_ram_40041ab4(iVar4,0);
    FUN_ram_400064e4(10);
    FUN_ram_40041ab4(iVar4,1);
    FUN_ram_400064e4(0x32);
  }
  piVar5 = (int *)FUN_ram_4005a960(0x48);
  if (piVar5 != (int *)0x0) {
    iVar4 = FUN_ram_4005aa9a();
    *piVar5 = iVar4;
    if (iVar4 != 0) {
      FUN_ram_4005aaec(iVar4,0x4662,piVar5 + 1);
      iVar11 = piVar5[5];
      iVar4 = piVar5[6];
      uVar9 = iVar11 * piVar5[3];
      iVar12 = piVar5[4];
      cVar10 = '\x10';
      piVar5[0xf] = uVar9;
      if (piVar5[1] - 4U < 0xb) {
        cVar10 = s_PD_23_ram_40099c9c[piVar5[1] + 4];
      }
      iVar1 = uVar9 * 2;
      if ((iVar4 != 0) && (iVar1 != 0)) {
        iVar7 = FUN_ram_4004adf8(cVar10);
        uVar3 = FUN_ram_40014c88();
        if (iVar7 == 0x10) {
          uVar2 = FUN_ram_4004ae58(uVar3);
          for (uVar8 = 0; (uVar9 & 0x7fffffff) != uVar8; uVar8 = uVar8 + 1) {
            *(undefined2 *)(iVar4 + uVar8 * 2) = uVar2;
          }
        }
        else if (iVar7 == 0x20) {
          uVar6 = FUN_ram_4004ae7c(uVar3);
          for (uVar8 = 0; (uVar9 & 0x7fffffff) >> 1 != uVar8; uVar8 = uVar8 + 1) {
            *(undefined4 *)(iVar4 + uVar8 * 4) = uVar6;
          }
        }
        else {
          memset(iVar4,0,iVar1);
        }
      }
      FUN_ram_4001311c(piVar5[6],iVar1 + 0x1fU & 0xffffffe0);
      uVar6 = FUN_ram_4004d142(iVar12,iVar11);
      FUN_ram_4004d4e4(uVar6,cVar10);
      FUN_ram_4004d352(uVar6,FUN_ram_4001315a);
      FUN_ram_4004d550(uVar6,piVar5);
      FUN_ram_4004d378(uVar6,iVar4 + uVar9,iVar4,uVar9,1);
      return;
    }
    FUN_ram_4005a988(piVar5);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40013418.
 * REA evidence: ev_4264f84606462e69bd681402fcbc992e9cf17793a224f010a73ee67a8e1a307a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40013418(void)

{
  int iVar1;
  
  FUN_ram_40004346();
  if ((_DAT_ram_30067804 == 0) && (iVar1 = FUN_ram_4002d0e8(), iVar1 == 0)) {
    _DAT_ram_30067804 = 1;
  }
  FUN_ram_400194fa();
  return;
}


/* NanoCore 1.12, address 0x40013446.
 * REA evidence: ev_5ab879f1232334be736679b916ea9b516780a8ffe75e1a2339e254dec37600ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40013446(void)

{
  int iVar1;
  
  if (_DAT_ram_300677fc == 0) {
    _DAT_ram_300677fc = 1;
    FUN_ram_4002c6d0();
    if ((_DAT_ram_30067800 == 0) &&
       (iVar1 = FUN_ram_400063d6(s_ui_preload_ram_40099cb0,&LAB_ram_400133ec,0,0x2000,0x1d,10),
       iVar1 != 0)) {
      _DAT_ram_30067800 = 1;
      FUN_ram_40006550();
    }
    iVar1 = FUN_ram_4001642c(&LAB_ram_40013442);
    if (iVar1 != 0) {
      FUN_ram_40013418();
      FUN_ram_40049e48(0);
    }
    FUN_ram_4003f702(1);
    FUN_ram_400064e4(0x1e);
    FUN_ram_40049e48(0);
    FUN_ram_4003f6b6(1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400134cc.
 * REA evidence: ev_92961c8da3b6974de482d9f6e0584833378b7c8e2df6dfe61cc4aa9d8c86842b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400134cc(void)

{
  uint uVar1;
  
  FUN_ram_40029d3c(1);
  FUN_ram_4002e7a0();
  uVar1 = FUN_ram_4002dd60();
  if ((_DAT_ram_300677f8 != 0) && ((uVar1 & 0xfffffffb) == 1)) {
    _DAT_ram_300677f8 = 0;
    FUN_ram_4002e738();
    FUN_ram_40013446();
  }
  FUN_ram_400137c4();
  FUN_ram_400300d2();
  return;
}


/* NanoCore 1.12, address 0x4001350a.
 * REA evidence: ev_5e5669ad6d66ad9b55800ae8242790a65a4789c747d5f010bfe62b908d6ceb86
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001350a(void)

{
  return;
}


/* NanoCore 1.12, address 0x4001350c.
 * REA evidence: ev_9370f0d927740dc6221966abb860dd2e04c7d0baded110ca0439e18322b6107f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001350c(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002e00e(0x28a);
  if (2 < iVar1 - 2U) {
    FUN_ram_40013446();
    return;
  }
  _DAT_ram_300677f8 = 1;
  iVar1 = FUN_ram_4002e3e8();
  if (iVar1 == 0) {
    FUN_ram_40049e48();
    FUN_ram_4003f702(1);
    FUN_ram_400064e4(0x1e);
    FUN_ram_40049e48(0);
    FUN_ram_4003f6b6(1);
    FUN_ram_40029d6c(1);
    FUN_ram_40029e5a();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001356a.
 * REA evidence: ev_d40352f45f2bdd0f3e461ef967b54178ee2c1017e3d667444fdfc379043b2158
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001356a(void)

{
  FUN_ram_40029ea6();
  FUN_ram_40029d1e(3);
  return 0;
}


/* NanoCore 1.12, address 0x40013580.
 * REA evidence: ev_0902edc2ff70ef1e3494ff62a0f7445193453d288ead7b1d88fbb7a7d8c7b286
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40013580(void)

{
  FUN_ram_4002db72(1);
  return 0;
}


/* NanoCore 1.12, address 0x40013592.
 * REA evidence: ev_5dfef6e1dd43c53cd82c397cd0bc05fe2aca17df01abf3b7948226427c9dc351
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40013592(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_ram_4003f2ea();
  iVar3 = FUN_ram_4003f312();
  iVar4 = FUN_ram_4003f33a();
  iVar5 = FUN_ram_4003f362();
  iVar6 = FUN_ram_4003f38a();
  sVar1 = FUN_ram_4003f9b4();
  if (_DAT_ram_30067808 != 0 || sVar1 != 0) {
    FUN_ram_400194d4();
  }
  _DAT_ram_30067808 = sVar1;
  if (iVar3 != 0) {
    FUN_ram_4001943e(iVar3);
  }
  if (iVar2 != 0) {
    FUN_ram_40018074(iVar2);
  }
  for (; 0 < iVar5; iVar5 = iVar5 + -1) {
    FUN_ram_4001947e();
  }
  for (; 0 < iVar4; iVar4 = iVar4 + -1) {
    FUN_ram_4001949c();
  }
  if (0 < iVar6) {
    FUN_ram_400194ba();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001363e.
 * REA evidence: ev_ff5381ee3dad065d1cf499e34b342411a8201cad543e727a74e0738df0573511
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001363e(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    uVar1 = uVar1 + 2;
    FUN_ram_4003fa54();
    FUN_ram_4003f3b2();
    if (3 < uVar1) {
      FUN_ram_40013592();
      uVar1 = 0;
    }
    FUN_ram_400064e4(2);
  } while( true );
}


/* NanoCore 1.12, address 0x40013666.
 * REA evidence: ev_fea0b8b7a946e03d85570cf9f26cb84225f1bd6385e1a33117ba78c78101da14
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40013666(void)

{
  FUN_ram_4000e564();
  FUN_ram_40022b84();
  FUN_ram_4002db30();
  return;
}


/* NanoCore 1.12, address 0x4001367a.
 * REA evidence: ev_f4173526dc6b0436f3ebf3280cda88ddd5de6459198d225918a7d47c35d2edab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001367a(void)

{
  int iVar1;
  
  FUN_ram_4003f74e();
  FUN_ram_4003f4c4();
  FUN_ram_40022b7a();
  FUN_ram_4000e52c();
  FUN_ram_400130a4();
  nc_radio_uart5_init();
  FUN_ram_4002d982();
  iVar1 = FUN_ram_400063d6(s_enc_poll_ram_40099cbc,FUN_ram_4001363e,0,0x800,0x1d,10);
  if (iVar1 != 0) {
    FUN_ram_40006550();
  }
  FUN_ram_40013592();
  return 0;
}


/* NanoCore 1.12, address 0x400136d4.
 * REA evidence: ev_640ac9b3ca814a2a14bbd59257b68602a322293d2af92d43299bcd8aaab4f166
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400136d4(void)

{
  FUN_ram_4002ec72(&PTR_PTR_ram_40099cc8);
  FUN_ram_4002ec9e();
  return;
}


/* NanoCore 1.12, address 0x400136f4.
 * REA evidence: ev_c9f7cf543c0c9538af6b93b0eee87a43220f50362824e24393223602c434168d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400136f4(undefined4 param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = FUN_ram_4000db5a();
  iVar1 = -1;
  if (iVar4 == 0) {
    iVar1 = FUN_ram_4000bf64(param_1);
    FUN_ram_4000dbaa();
    if (iVar1 == 0) {
      uVar2 = thunk_FUN_ram_4001debc();
      uVar3 = thunk_FUN_ram_4001dee0();
      thunk_FUN_ram_4001df9e(uVar2,param_1,uVar3);
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4001373c.
 * REA evidence: ev_90395785627b3ade0f7da6dbb34587e0f932266bc4907c8fae9d877f39938ff4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001373c(undefined4 param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = FUN_ram_4000db5a();
  iVar1 = -1;
  if (iVar4 == 0) {
    iVar1 = FUN_ram_4000bb90(param_1,0,0);
    FUN_ram_4000dbaa();
    if (iVar1 == 0) {
      uVar2 = thunk_FUN_ram_4001dece();
      uVar3 = thunk_FUN_ram_4001dee0();
      thunk_FUN_ram_4001df9e(param_1,uVar2,uVar3);
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x400137c4.
 * REA evidence: ev_15d8e463ade96547d29a8826e4e1d6c0e13dfcbf61e2ba20dd7309a1e09506b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400137c4(void)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _DAT_ram_30067820 = _DAT_ram_30067820 + 1;
  if (DAT_ram_30067814 != '\0') {
    DAT_ram_30067814 = 0;
    _DAT_ram_30067818 = _DAT_ram_30067818 + 1;
    uStack_18 = _DAT_ram_3006780c;
    uStack_14 = _DAT_ram_30067810;
    FUN_ram_40018472(&uStack_18,8);
    FUN_ram_40049e48(0);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4001381c.
 * REA evidence: ev_26ad475250f3a80edc5d67b6aa7af1387aad7eea469f723eded54da878c88755
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001381c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                     undefined4 param_5)

{
  undefined4 uStack_18;
  undefined4 auStack_14 [3];
  
  uStack_18 = 0;
  auStack_14[0] = 0;
  FUN_ram_40030af2(&DAT_ram_40099d5c,param_2,param_3,&uStack_18,auStack_14,param_5);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uStack_18;
    param_4[1] = auStack_14[0];
  }
  return;
}


/* NanoCore 1.12, address 0x4001384c.
 * REA evidence: ev_573b2a12d9beba0c8eb7a5c09b4689ea0f220c8ad65edb2517ada419428f4781
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001384c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                     undefined4 param_5)

{
  undefined4 uStack_18;
  undefined4 auStack_14 [3];
  
  uStack_18 = 0;
  auStack_14[0] = 0;
  FUN_ram_40030a62(&DAT_ram_40099d5c,param_2,param_3,&uStack_18,auStack_14,param_5);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uStack_18;
    param_4[1] = auStack_14[0];
  }
  return;
}


/* NanoCore 1.12, address 0x4001387c.
 * REA evidence: ev_e8317cf757559751f5694f9faf8c58858e94c2817028ebfacdc23d2bc06e14f2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001387c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                     undefined4 param_5)

{
  undefined4 uStack_18;
  undefined4 auStack_14 [3];
  
  uStack_18 = 0;
  auStack_14[0] = 0;
  FUN_ram_40030a20(&DAT_ram_40099d5c,param_2,param_3,&uStack_18,auStack_14,param_5);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uStack_18;
    param_4[1] = auStack_14[0];
  }
  return;
}


/* NanoCore 1.12, address 0x400138ac.
 * REA evidence: ev_7feb73e22fe2b6e68857537d31de86080e1847a410983d6235a6f989ab6f4654
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400138ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                     undefined4 param_5)

{
  undefined4 uStack_18;
  undefined4 auStack_14 [3];
  
  uStack_18 = 0;
  auStack_14[0] = 0;
  FUN_ram_400307d2(&DAT_ram_40099d5c,param_2,param_3,&uStack_18,auStack_14,param_5);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uStack_18;
    param_4[1] = auStack_14[0];
  }
  return;
}


/* NanoCore 1.12, address 0x400138dc.
 * REA evidence: ev_4c09126181c5acce3c2a94e27d66ef358c17043517d21e9945a4d1f30dff76c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400138dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                     undefined4 param_5)

{
  undefined4 uStack_18;
  undefined4 auStack_14 [3];
  
  uStack_18 = 0;
  auStack_14[0] = 0;
  FUN_ram_400306c0(&DAT_ram_40099d5c,param_2,param_3,&uStack_18,auStack_14,param_5);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uStack_18;
    param_4[1] = auStack_14[0];
  }
  return;
}


/* NanoCore 1.12, address 0x4001390c.
 * REA evidence: ev_82af62bd431e6a197a634150ecd3f415223fcadda691493f9073341ae5d1cf10
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001390c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                     undefined4 param_5)

{
  undefined4 uStack_18;
  undefined4 auStack_14 [3];
  
  uStack_18 = 0;
  auStack_14[0] = 0;
  FUN_ram_4003054a(&DAT_ram_40099d5c,param_2,param_3,&uStack_18,auStack_14,param_5);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uStack_18;
    param_4[1] = auStack_14[0];
  }
  return;
}


/* NanoCore 1.12, address 0x4001393c.
 * REA evidence: ev_dce9181cfd5bd1b2e2b27d107b4057cb5d9fc3d5f22a6fdfb0fe19fae626bfe3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001393c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                     undefined4 param_5)

{
  undefined4 uStack_18;
  undefined4 auStack_14 [3];
  
  uStack_18 = 0;
  auStack_14[0] = 0;
  FUN_ram_40030488(&DAT_ram_40099d5c,param_2,param_3,&uStack_18,auStack_14,param_5);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uStack_18;
    param_4[1] = auStack_14[0];
  }
  return;
}


/* NanoCore 1.12, address 0x4001396c.
 * REA evidence: ev_0fcbddb35bd036e6939b63beece257a6d3643b3452bda841a78b751309281c43
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001396c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                     undefined4 param_5)

{
  undefined4 uStack_18;
  undefined4 auStack_14 [3];
  
  uStack_18 = 0;
  auStack_14[0] = 0;
  FUN_ram_4003036e(&DAT_ram_40099d5c,param_2,param_3,&uStack_18,auStack_14,param_5);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uStack_18;
    param_4[1] = auStack_14[0];
  }
  return;
}


/* NanoCore 1.12, address 0x4001399c.
 * REA evidence: ev_c49855b40d53393d8d9b1413136ac67a25a0a3415d23db2e8538012f4c47aaeb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001399c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                     undefined4 param_5)

{
  undefined4 uStack_18;
  undefined4 auStack_14 [3];
  
  uStack_18 = 0;
  auStack_14[0] = 0;
  FUN_ram_4003019c(&DAT_ram_40099d5c,param_2,param_3,&uStack_18,auStack_14,param_5);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uStack_18;
    param_4[1] = auStack_14[0];
  }
  return;
}


/* NanoCore 1.12, address 0x400139d4.
 * REA evidence: ev_695b31d942dc55fdc1ee97d8d0f517f6683fa5997c87b086a69cc783e0a44e42
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_400139d4(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_40014468();
  return (uVar1 & 0xfffffffd) == 0;
}


/* NanoCore 1.12, address 0x400139e8.
 * REA evidence: ev_c1cbb54e60c31ef87c915d061f45dfce6c2957bba90bf80f9350719f14efc215
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400139e8(void)

{
  FUN_ram_4001a0ee();
  return;
}


/* NanoCore 1.12, address 0x400139f6.
 * REA evidence: ev_0000f9a1d431a41435650731f8d5f035b064ed7006308bd52fa7e2243eb4eb7b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400139f6(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40030042(&DAT_ram_40099d5c);
  if (iVar1 == 0) {
    FUN_ram_400143fc(0x40,FUN_ram_4001399c);
    FUN_ram_400143fc(0x41,FUN_ram_4001396c);
    FUN_ram_400143fc(0x48,FUN_ram_4001393c);
    FUN_ram_400143fc(0x42,FUN_ram_4001390c);
    FUN_ram_400143fc(0x43,FUN_ram_400138dc);
    FUN_ram_400143fc(0x44,FUN_ram_400138ac);
    FUN_ram_400143fc(0x45,FUN_ram_4001387c);
    FUN_ram_400143fc(0x46,FUN_ram_4001384c);
    FUN_ram_400143fc(0x49,FUN_ram_4001381c);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40013aa2.
 * REA evidence: ev_7162260b929f8cec368f0da8ba9e8cdfb54016eabc0aefe249643ea5b1a8d52d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40013aa2(int param_1,uint param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_5 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_1 == 0) {
      return 0xffffffff;
    }
    if (param_3 == 0) {
      return 0xffffffff;
    }
    uVar3 = 0;
    uVar1 = 0;
    do {
      if (param_4 <= uVar1) {
        return 0xffffffff;
      }
      uVar2 = uVar1 + 1;
      uVar5 = 0;
      uVar4 = 0;
      do {
        if (param_4 == uVar2) {
          return 0xffffffff;
        }
        if ((char)*(byte *)(param_1 + uVar3) < '\0') {
          uVar4 = uVar4 | 1 << (uVar5 & 0x1f) & 0xffU;
        }
        uVar2 = uVar2 + 1;
        *(byte *)(param_3 + -1 + uVar2) = *(byte *)(param_1 + uVar3) & 0x7f;
        uVar3 = uVar3 + 1;
      } while ((uVar5 != 6) && (uVar5 = uVar5 + 1, param_2 != uVar3));
      *(char *)(param_3 + uVar1) = (char)uVar4;
      uVar1 = uVar2;
    } while (uVar3 < param_2);
  }
  *param_5 = uVar2;
  return 0;
}


/* NanoCore 1.12, address 0x40013b0e.
 * REA evidence: ev_2481edafd6df6270d5e8315b1b7aa72c29c01aa61a85613ff30b1ec595d72b46
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40013b0e(int param_1,uint param_2,int param_3,uint param_4,uint *param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_5 == (uint *)0x0) || ((param_2 != 0 && ((param_1 == 0 || (param_3 == 0)))))) {
    return 0xffffffff;
  }
  uVar4 = 0;
  uVar3 = 0;
  do {
    if (param_2 <= uVar3) {
      *param_5 = uVar4;
      return 0;
    }
    bVar1 = *(byte *)(param_1 + uVar3);
    uVar2 = 0;
    uVar3 = uVar3 + 1;
    do {
      if (param_2 == uVar3) break;
      if (param_4 <= uVar4) {
        return 0xffffffff;
      }
      uVar4 = uVar4 + 1;
      *(byte *)(param_3 + -1 + uVar4) =
           (byte)(((int)(uint)bVar1 >> (uVar2 & 0x1f)) << 7) | *(byte *)(param_1 + uVar3);
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar2 != 7);
  } while( true );
}


/* NanoCore 1.12, address 0x40013b5c.
 * REA evidence: ev_4d9202092df486e6fe63a5c47ad37251f9f6548a8c78b9393294e59eb8abd16f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40013b5c(undefined4 *param_1)

{
  return *param_1;
}


/* NanoCore 1.12, address 0x40013b7a.
 * REA evidence: ev_573c2229fef16a5ad8e77440b983764b26fa875b037c262eb7c4d2d5855bd7db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40013b7a(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_ram_3006886c;
  iVar2 = _DAT_ram_30068834;
  if ((((param_1 == 1) || (iVar1 = _DAT_ram_30068868, param_1 == 0)) || (param_1 == 2)) &&
     (iVar1 != 0)) {
    iVar2 = iVar1;
  }
  return iVar2;
}


/* NanoCore 1.12, address 0x40013bac.
 * REA evidence: ev_0ebeeb689a0d87ddab60b654d0403a1466afd633dd5538f687dba4d72df87f47
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40013bac(undefined4 param_1,undefined1 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int aiStack_24 [3];
  
  aiStack_24[0] = 0;
  pcVar2 = (code *)FUN_ram_40013b7a();
  if ((pcVar2 != (code *)0x0) && (param_4 != 0)) {
    if (0x400 < param_4) {
      param_4 = 0x400;
    }
    if (DAT_ram_30068864 != '\0') {
      FUN_ram_40004a22(0x30068838,0xffffffff);
    }
    iVar3 = FUN_ram_40013aa2(param_3,param_4,0x30068028,0x400,aiStack_24);
    if (iVar3 == 0) {
      _DAT_ram_30067828 = 0x434e7df0;
      DAT_ram_3006782c = param_2;
      if (aiStack_24[0] + 6U < 0x401) {
        memcpy(0x3006782d,0x30068028);
        uVar1 = aiStack_24[0] + 6;
        *(undefined1 *)(aiStack_24[0] + 0x3006782d) = 0xf7;
        uVar4 = uVar1;
        if (0xff < uVar1) {
          uVar4 = 0xff;
        }
        FUN_ram_400112aa(&DAT_ram_40099d8c,&DAT_ram_30067828,uVar4 & 0xff);
        (*pcVar2)(&DAT_ram_30067828,uVar1);
      }
    }
    if (DAT_ram_30068864 != '\0') {
      FUN_ram_40004b14(0x30068838);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40013ca6.
 * REA evidence: ev_5d2347f54fc60d68bbb28b995bfb1b52beb27530ed4c362ee568e8466f82517a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40013ca6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                     int param_5,uint param_6)

{
  uint uVar1;
  undefined1 uStack_318;
  undefined1 uStack_317;
  undefined1 uStack_316;
  undefined1 uStack_315;
  undefined1 uStack_314;
  undefined1 uStack_313;
  undefined2 uStack_312;
  undefined1 auStack_310 [772];
  
  uVar1 = 0x300;
  if (param_6 < 0x301) {
    uVar1 = param_6;
  }
  uStack_318 = 2;
  uStack_315 = (undefined1)param_3;
  uStack_317 = (undefined1)param_2;
  uStack_316 = (undefined1)((uint)param_2 >> 8);
  uStack_314 = (undefined1)((uint)param_3 >> 8);
  uStack_312 = (undefined2)uVar1;
  uStack_313 = param_4;
  if ((param_6 != 0) && (param_5 != 0)) {
    memcpy(auStack_310,param_5,uVar1);
  }
  FUN_ram_40013bac(param_1,0x71,&uStack_318,uVar1 + 8);
  return;
}


/* NanoCore 1.12, address 0x40013d1a.
 * REA evidence: ev_8759226a50c582077b7b62e7b2383442661b8c50349c54a29baf862e84736b07
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40013d1a(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                     undefined4 param_5)

{
  int iVar1;
  int iStack_18;
  int aiStack_14 [3];
  
  iStack_18 = 0;
  aiStack_14[0] = 0;
  iVar1 = FUN_ram_40023f08(&PTR_FUN_ram_4001ea42_ram_40099d04,param_2,param_3,0x30069508,0x20,
                           &iStack_18,aiStack_14,param_5);
  if ((((iVar1 != 0) && (param_4 != (int *)0x0)) && (iStack_18 != 0)) && (aiStack_14[0] != 0)) {
    *param_4 = iStack_18;
    param_4[1] = aiStack_14[0];
  }
  return;
}


/* NanoCore 1.12, address 0x40013d5e.
 * REA evidence: ev_0e690cbfe2429b88f26b05e5757c618e57d3b766fa1301a76d2e10da4e949de1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40013d5e(int param_1,undefined1 *param_2)

{
  FUN_ram_4002b434(0);
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  return 1;
}


/* NanoCore 1.12, address 0x40013e04.
 * REA evidence: ev_e6a72f83be1210b94cbfdacbfe1d78ddec8d4c89d10925c4285bede95d556dec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40013e04(undefined4 param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40006dec(s_ui_asset_ram_40099d90);
  uVar2 = 0;
  if (param_3 != (undefined1 *)0x0) {
    if (iVar1 == 0) {
      *param_3 = 4;
    }
    else {
      _DAT_ram_30068be8 = *(undefined4 *)(iVar1 + 0x38);
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = &DAT_ram_30068be8;
        param_2[1] = 4;
      }
      *param_3 = 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40013e4c.
 * REA evidence: ev_95b8a0c81f61248023c1b2109cd5900c2aa3da8c96c31a64db175f9389c0bd37
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40013e4c(int *param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  
  iVar1 = FUN_ram_40006dec(s_ui_asset_ram_40099d90);
  if (param_3 == (undefined1 *)0x0) {
    return 0;
  }
  if (((iVar1 == 0) || (param_2 == 0)) || (*(uint *)(iVar1 + 0x38) < param_2)) {
    uVar5 = 3;
  }
  else {
    iVar2 = FUN_ram_40006cbe(iVar1 + 0x1c);
    uVar4 = param_2;
    if ((iVar2 != 0) && (uVar6 = *(uint *)(iVar2 + 0x20), uVar6 != 0)) {
      if (uVar6 == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = ((param_2 - 1) + uVar6) / uVar6;
      }
      uVar4 = uVar3 * uVar6;
      if (*(uint *)(iVar1 + 0x38) < uVar3 * uVar6) {
        uVar4 = *(uint *)(iVar1 + 0x38);
      }
    }
    FUN_ram_4002b434(1);
    iVar2 = FUN_ram_40006ee4(iVar1,0,uVar4);
    if (-1 < iVar2) {
      *(undefined1 *)(param_1 + 4) = 1;
      *param_1 = iVar1;
      param_1[1] = param_2;
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_ram_4002c904();
      FUN_ram_40022cc4();
      *param_3 = 0;
      return 1;
    }
    FUN_ram_4002b434(0);
    uVar5 = 4;
  }
  *param_3 = uVar5;
  return 1;
}


/* NanoCore 1.12, address 0x40013efe.
 * REA evidence: ev_14d92d7aceed2f4c5eecb768e3626e87f8e5307a63a1c6694dd07b580a6c5881
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40013efe(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_ram_40022a0e();
  iVar5 = 0x7f;
  if (iVar1 < 0x80) {
    iVar5 = iVar1;
  }
  iVar1 = FUN_ram_40022a8e();
  if (100 < iVar1) {
    iVar1 = 100;
  }
  iVar2 = FUN_ram_40022b04();
  if (100 < iVar2) {
    iVar2 = 100;
  }
  iVar3 = FUN_ram_400229b4();
  if (0x10 < iVar3) {
    iVar3 = 0x10;
  }
  *param_1 = 1;
  iVar4 = thunk_FUN_ram_40022972();
  param_1[1] = iVar4 != 0;
  iVar4 = FUN_ram_40022920();
  param_1[2] = iVar4 != 0;
  if (iVar5 < -0x80) {
    iVar5 = -0x80;
  }
  param_1[3] = (char)iVar5;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  param_1[4] = (char)iVar1;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  param_1[5] = (char)iVar2;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  param_1[6] = (char)iVar3;
  return;
}


/* NanoCore 1.12, address 0x40013fbe.
 * REA evidence: ev_2026bb0dfb34e98cc2a89e668721427d90429702deffaadf7be647c131264df0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40013fbe(void)

{
  undefined4 *in_a3;
  undefined1 *in_a4;
  
  FUN_ram_40013efe(0x30068ef0);
  if (in_a3 != (undefined4 *)0x0) {
    *in_a3 = 0x30068ef0;
    in_a3[1] = 7;
  }
  *in_a4 = 0;
  return 1;
}


