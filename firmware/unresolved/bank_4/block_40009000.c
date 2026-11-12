/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40009000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400091d0.
 * REA evidence: ev_904163f4a731a439131084d91c249d275b6fb2388e440d8d5a4ff3a8fd6ae59a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400091d0(float param_1,int param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_4009281c < param_1) {
    param_1 = DAT_ram_4009281c;
  }
  uVar2 = _DAT_ram_3004b3d0;
  if (_DAT_ram_3004b3d0 == 0) {
    uVar2 = 0xac44;
  }
  uVar3 = FUN_ram_400002f4();
  fVar5 = *(float *)(param_2 + 0x84);
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  else if (DAT_ram_4009281c < fVar5) {
    fVar5 = DAT_ram_4009281c;
  }
  if (ABS(param_1 - fVar5) < DAT_ram_40092838) {
    *(float *)(param_2 + 0x84) = param_1;
    *(undefined4 *)(param_2 + 0x88) = 0;
    *(undefined4 *)(param_2 + 0x8c) = 0;
  }
  else {
    lVar1 = (ulonglong)uVar2 * (ulonglong)param_3 + 999;
    iVar4 = FUN_ram_40003bac((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
    *(float *)(param_2 + 0x84) = fVar5;
    *(int *)(param_2 + 0x8c) = iVar4;
    *(float *)(param_2 + 0x88) = (param_1 - fVar5) / (float)iVar4;
  }
  FUN_ram_400002fa(uVar3);
  return;
}


/* NanoCore 1.10, address 0x400092aa.
 * REA evidence: ev_a120e190e0d64bfba1e7cecf45f8c2ebaba4450b8eb3d165458e6e61e27b3d55
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400092aa(void)

{
  short sVar1;
  char cVar2;
  
  FUN_ram_400002f4();
  cVar2 = '\0';
  if (-1 < DAT_ram_3004651e) {
    cVar2 = DAT_ram_30049efc;
  }
  DAT_ram_30046510 = 0xffff;
  DAT_ram_30046688 = 0xffff;
  DAT_ram_3004651e = -1;
  DAT_ram_30049efc = 0;
  DAT_ram_3004651c = 0xffff;
  DAT_ram_30046696 = 0xff;
  _DAT_ram_30049dd0 = _DAT_ram_30049dd0 + 1;
  FUN_ram_400002fa();
  if (cVar2 != '\0') {
    FUN_ram_400091d0(DAT_ram_4009281c,0x30049f00,0x10);
    FUN_ram_400002f4();
    sVar1 = DAT_ram_3004651e;
    FUN_ram_400002fa();
    if (-1 < sVar1) {
      FUN_ram_4000789c(0);
      FUN_ram_400078be(0,0x30049f00);
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40009368.
 * REA evidence: ev_4d7f9038e2831c471d5afc0d845e37858353b05f5f1fd0384cc540f8dc696c06
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40009368(uint param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = FUN_ram_4005eaa6(0x3004abe8);
  iVar3 = FUN_ram_4005ea8e(0x3004abe8);
  iVar4 = FUN_ram_40007af4(4,8);
  if (((param_1 < 0xc) && (iVar2 != 0)) && (iVar3 != 0)) {
    if (param_1 < 8) {
      uVar7 = param_1 + 0x1e & 0xff;
      iVar6 = FUN_ram_4000821c();
      if (((iVar6 == 0) && (iVar6 = FUN_ram_40007ce4(), iVar6 == 0)) && (DAT_ram_30049dd4 != '\0'))
      {
        FUN_ram_400002f4();
        bVar1 = DAT_ram_3004651e < 0;
        if (bVar1) {
          DAT_ram_30049efc = (char)iVar4;
        }
        DAT_ram_3004651e = (short)uVar7;
        _DAT_ram_30049dd0 = _DAT_ram_30049dd0 + 1;
        FUN_ram_400002fa();
        if ((bVar1) && (iVar4 != 0)) {
          FUN_ram_400091d0(0,0x30049f00,8);
        }
        FUN_ram_400048d4(0x30049dd8);
      }
      else {
        if (iVar4 != 0) {
          iVar6 = FUN_ram_4000821c();
          if (iVar6 == 0) {
            iVar6 = FUN_ram_40007ce4();
            if (iVar6 != 0) {
              FUN_ram_400091d0(0,0x30049f00,8);
              iVar6 = FUN_ram_4000868c(0x30049f00);
              if (iVar6 != 0) goto LAB_ram_400094bc;
            }
          }
          else {
LAB_ram_400094bc:
            FUN_ram_400078be(0,0x30049f00);
          }
        }
        FUN_ram_4000789c(0);
        FUN_ram_400065d4(2);
        iVar6 = FUN_ram_4000813a(uVar7);
        if (iVar6 != 0) {
          FUN_ram_4000789c(iVar4);
          if (iVar4 != 0) {
            FUN_ram_400091d0(DAT_ram_4009281c,0x30049f00,0x10);
          }
          goto LAB_ram_400093a4;
        }
        FUN_ram_400080ec(0x30049f00);
        FUN_ram_4000789c(iVar4);
        if (iVar4 == 0) {
          iVar6 = FUN_ram_4000821c();
          if ((iVar6 != 0) || (iVar6 = FUN_ram_40007ce4(), uVar5 = DAT_ram_4009281c, iVar6 != 0)) {
            uVar5 = 0;
          }
          FUN_ram_400078be(uVar5,0x30049f00);
        }
        else {
          FUN_ram_400091d0(DAT_ram_4009281c,0x30049f00,0x10);
        }
      }
    }
    else if (param_1 == 8) {
      FUN_ram_40068efa();
    }
    else if (param_1 == 9) {
      FUN_ram_40068f4a();
    }
    else if (param_1 == 10) {
      FUN_ram_40068fee();
    }
    else {
      FUN_ram_4006904e(_DAT_ram_3004b468);
    }
    DAT_ram_3004b46c = (char)param_1;
    FUN_ram_4000305c(iVar3,iVar2,0x2dc);
    if ((*(int *)(iVar2 + 300) != 8) || (*(byte *)(iVar2 + 0x130) != param_1)) {
      FUN_ram_400690a8(iVar3 + 0x134,0xc,param_1);
    }
    *(undefined4 *)(iVar3 + 300) = 8;
    uVar5 = _DAT_ram_3004b468;
    *(char *)(iVar3 + 0x130) = (char)param_1;
    *(undefined4 *)(iVar3 + 0x170) = uVar5;
    *(char *)(iVar3 + 0x131) = (char)iVar4;
    FUN_ram_4005eaba(0x3004abe8);
    uVar5 = 0;
  }
  else {
LAB_ram_400093a4:
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


/* NanoCore 1.10, address 0x4000959c.
 * REA evidence: ev_c57275f5e3e5de18c9d87742a2545aaeea4913f05e2a9aa25db04c0c1b2f31c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000959c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = FUN_ram_4005eaa6(0x3004abe8);
  iVar2 = FUN_ram_4005ea8e(0x3004abe8);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      uVar4 = FUN_ram_40065d6c(param_1);
      FUN_ram_4000305c(iVar2,iVar1,0x2dc);
      if ((*(int *)(iVar1 + 0x24c) != 10) || (*(byte *)(iVar1 + 0x250) != uVar4)) {
        FUN_ram_40065d78(iVar2 + 0x254,0xc,uVar4);
      }
      *(undefined4 *)(iVar2 + 0x24c) = 10;
      uVar3 = _DAT_ram_3004b45c;
      *(char *)(iVar2 + 0x250) = (char)uVar4;
      *(undefined4 *)(iVar2 + 0x290) = uVar3;
      *(bool *)(iVar2 + 0x251) = DAT_ram_3004b458 != '\0';
      FUN_ram_4005eaba(0x3004abe8);
      FUN_ram_40065d30(_DAT_ram_3004b45c);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x40009648.
 * REA evidence: ev_1d82e39fa29a78212b026e9dfa2164fed8738e3cdd1c6ee9e64c39554702c341
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40009648(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = FUN_ram_4005eaa6(0x3004abe8);
  iVar2 = FUN_ram_4005ea8e(0x3004abe8);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      uVar4 = FUN_ram_400646f6(param_1);
      FUN_ram_4000305c(iVar2,iVar1,0x2dc);
      if ((*(int *)(iVar1 + 0x204) != 6) || (*(byte *)(iVar1 + 0x208) != uVar4)) {
        FUN_ram_40064846(iVar2 + 0x20c,0xc,uVar4);
      }
      *(undefined4 *)(iVar2 + 0x204) = 6;
      uVar3 = _DAT_ram_3004b454;
      *(char *)(iVar2 + 0x208) = (char)uVar4;
      *(undefined4 *)(iVar2 + 0x248) = uVar3;
      *(bool *)(iVar2 + 0x209) = DAT_ram_3004b451 != '\0';
      FUN_ram_4005eaba(0x3004abe8);
      FUN_ram_4006471c(_DAT_ram_3004b454);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x400096f4.
 * REA evidence: ev_ff205969b4576c5599e1d3bd98ec0fc295fdc5e0a57aaa5572b85aeaf92614d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400096f4(uint param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 uStack_11;
  
  uStack_11 = 0;
  iVar4 = FUN_ram_40008248(&uStack_11);
  if (iVar4 == 0) {
    FUN_ram_40008120();
    iVar4 = FUN_ram_4005eaa6(0x3004abe8);
    iVar5 = FUN_ram_4005ea8e(0x3004abe8);
    if ((((iVar4 != 0) && (iVar5 != 0)) &&
        ((*(int *)(iVar4 + 0x9c) != 3 ||
         ((bVar1 = *(byte *)(iVar4 + 0xa0), bVar1 != param_1 ||
          (uVar6 = FUN_ram_4007137c(_DAT_ram_3004d528), uVar6 != bVar1)))))) &&
       (iVar4 = FUN_ram_40008448(param_1), iVar4 == 0)) {
      iVar4 = FUN_ram_4005eaa6(0x3004abe8);
      iVar5 = FUN_ram_4005ea8e(0x3004abe8);
      if ((iVar4 != 0) && (iVar5 != 0)) {
        FUN_ram_4000305c(iVar5,iVar4,0x2dc);
        if ((*(int *)(iVar4 + 0x9c) != 3) || (*(byte *)(iVar4 + 0xa0) != param_1)) {
          FUN_ram_40071420(iVar5 + 0xa4,0xc,param_1);
        }
        *(undefined4 *)(iVar5 + 0x9c) = 3;
        uVar3 = _DAT_ram_3004d528;
        cVar2 = DAT_ram_3004d525;
        *(char *)(iVar5 + 0xa0) = (char)param_1;
        *(undefined4 *)(iVar5 + 0xe0) = uVar3;
        *(bool *)(iVar5 + 0xa1) = cVar2 != '\0';
        FUN_ram_4007138a();
        FUN_ram_4005eaba(0x3004abe8);
      }
    }
    FUN_ram_40007ccc();
    FUN_ram_4000838c(uStack_11);
  }
  return;
}


/* NanoCore 1.10, address 0x400097f4.
 * REA evidence: ev_4c91e613111b264f6cb583d4a70189e7001f41758a58c291799cac732d4406db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400097f4(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_ram_4005eaa6(0x3004abe8);
  iVar3 = FUN_ram_4005ea8e(0x3004abe8);
  uVar4 = 0xffffffff;
  if ((iVar2 != 0) && (uVar4 = 0xffffffff, iVar3 != 0)) {
    if ((param_1 - 5 & 0xff) < 3) {
      FUN_ram_4000305c(iVar3,iVar2,0x2dc);
      uVar1 = param_1 + 3 & 0xff;
      if ((*(int *)(iVar2 + 0x1bc) != 8) || (*(byte *)(iVar2 + 0x1c0) != uVar1)) {
        FUN_ram_400690a8(iVar3 + 0x1c4,0xc,uVar1);
      }
      *(undefined4 *)(iVar3 + 0x1bc) = 8;
      uVar4 = _DAT_ram_3004d518;
      *(char *)(iVar3 + 0x1c0) = (char)(param_1 + 3);
      *(undefined4 *)(iVar3 + 0x200) = uVar4;
      *(bool *)(iVar3 + 0x1c1) = DAT_ram_3004d51c != '\0';
      FUN_ram_40008404(iVar3 + 0x1bc);
      FUN_ram_4005eaba(0x3004abe8);
      FUN_ram_400081fa(uVar1);
    }
    else {
      if (0x11 < param_1) {
        param_1 = 0;
      }
      FUN_ram_4000305c(iVar3,iVar2,0x2dc);
      if ((*(int *)(iVar2 + 0x1bc) != 4) || (*(byte *)(iVar2 + 0x1c0) != param_1)) {
        FUN_ram_4006b500(iVar3 + 0x1c4,0xc,param_1);
      }
      *(undefined4 *)(iVar3 + 0x1bc) = 4;
      uVar4 = _DAT_ram_3004d520;
      *(char *)(iVar3 + 0x1c0) = (char)param_1;
      *(undefined4 *)(iVar3 + 0x200) = uVar4;
      *(bool *)(iVar3 + 0x1c1) = DAT_ram_3004d51c != '\0';
      FUN_ram_40008404(iVar3 + 0x1bc);
      FUN_ram_4005eaba(0x3004abe8);
      FUN_ram_4006ab8c(_DAT_ram_3004d520);
    }
    uVar4 = 0;
  }
  return uVar4;
}


/* NanoCore 1.10, address 0x4000993a.
 * REA evidence: ev_b5e3f89538e5dcb8fb7c491a577e32d558e8979fd55d89f5ba9e03d4319b8f19
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000993a(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_ram_4005eaa6(0x3004abe8);
  iVar3 = FUN_ram_4005ea8e(0x3004abe8);
  uVar4 = 0xffffffff;
  if ((iVar2 != 0) && (uVar4 = 0xffffffff, iVar3 != 0)) {
    FUN_ram_4000305c(iVar3,iVar2,0x2dc);
    bVar1 = param_1 == 1;
    if ((*(int *)(iVar2 + 0x294) != 9) || ((bool)*(char *)(iVar2 + 0x298) != bVar1)) {
      FUN_ram_40066fb4(iVar3 + 0x29c,0xc,bVar1);
    }
    *(undefined4 *)(iVar3 + 0x294) = 9;
    uVar4 = _DAT_ram_3004b470;
    *(bool *)(iVar3 + 0x298) = bVar1;
    *(undefined4 *)(iVar3 + 0x2d8) = uVar4;
    *(bool *)(iVar3 + 0x299) = DAT_ram_3004b46d != '\0';
    FUN_ram_4005eaba(0x3004abe8);
    FUN_ram_4006674c(_DAT_ram_3004b470);
    uVar4 = 0;
  }
  return uVar4;
}


/* NanoCore 1.10, address 0x400099e8.
 * REA evidence: ev_b3f3b844fff790a2f2c82e0d1cdd372eb324eb5b3b44777619746712a0f072f0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400099e8(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4005eaa6(0x3004abe8);
  iVar2 = FUN_ram_4005ea8e(0x3004abe8);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      if (3 < param_1) {
        param_1 = 0;
      }
      FUN_ram_4000305c(iVar2,iVar1,0x2dc);
      if ((*(int *)(iVar1 + 0xe4) != 7) || (*(byte *)(iVar1 + 0xe8) != param_1)) {
        FUN_ram_40066fb4(iVar2 + 0xec,0xc,param_1);
      }
      *(undefined4 *)(iVar2 + 0xe4) = 7;
      uVar3 = _DAT_ram_3004b464;
      *(char *)(iVar2 + 0xe8) = (char)param_1;
      *(undefined4 *)(iVar2 + 0x128) = uVar3;
      *(bool *)(iVar2 + 0xe9) = DAT_ram_3004b462 != '\0';
      FUN_ram_4005eaba(0x3004abe8);
      FUN_ram_4006674c(_DAT_ram_3004b464);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x40009a9a.
 * REA evidence: ev_3d6cf39286fff7dd4181756bfc1567aec9883d6152eec14f0bad711f67fe9aa3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4000a4a6) */
/* WARNING: Removing unreachable block (ram,0x4000a3fa) */
/* WARNING: Removing unreachable block (ram,0x4000a974) */
/* WARNING: Removing unreachable block (ram,0x4000a8b6) */
/* WARNING: Removing unreachable block (ram,0x40009bec) */
/* WARNING: Removing unreachable block (ram,0x4000a8e2) */
/* WARNING: Removing unreachable block (ram,0x4000aa66) */
/* WARNING: Removing unreachable block (ram,0x4000a492) */
/* WARNING: Removing unreachable block (ram,0x4000a57c) */
/* WARNING: Removing unreachable block (ram,0x4000a99a) */
/* WARNING: Removing unreachable block (ram,0x4000aa8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40009a9a(uint param_1)

{
  bool bVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  float fVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined2 *puVar16;
  uint uVar17;
  uint uVar18;
  undefined2 uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined2 uVar23;
  uint uVar24;
  size_t sVar25;
  int iVar26;
  size_t __n;
  int *piVar27;
  uint uVar28;
  void *pvVar29;
  void *__s;
  size_t __n_00;
  uint uVar30;
  ushort uVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  ulonglong uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  char cStack_150;
  uint uStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_11c;
  uint uStack_10c;
  uint auStack_108 [2];
  void *pvStack_100;
  void *pvStack_fc;
  uint uStack_f8;
  float fStack_f0;
  uint uStack_ec;
  
  cVar10 = DAT_ram_3005ccf1;
  uVar32 = DAT_ram_30046680;
  uVar46 = FUN_ram_4003f02e();
  iVar12 = (int)uVar46;
  lVar5 = CONCAT44(DAT_ram_3004652c,DAT_ram_30046528);
  lVar6 = CONCAT44(_DAT_ram_30049e64,_DAT_ram_30049e60);
  uVar7 = CONCAT44(_DAT_ram_3004b3cc,_DAT_ram_3004b3c8);
  if ((1 < param_1) ||
     (lVar5 = CONCAT44(DAT_ram_3004652c,DAT_ram_30046528),
     lVar6 = CONCAT44(_DAT_ram_30049e64,_DAT_ram_30049e60),
     uVar7 = CONCAT44(_DAT_ram_3004b3cc,_DAT_ram_3004b3c8), DAT_ram_3004d524 != '\0'))
  goto LAB_ram_4000a1c6;
  if (_DAT_ram_3004b3cc != 0 || _DAT_ram_3004b3c8 != 0) {
    uVar24 = iVar12 - _DAT_ram_3004b3c8;
    if (uVar24 < DAT_ram_3004654c) {
      DAT_ram_3004654c = uVar24;
    }
    if (DAT_ram_30046550 < uVar24) {
      DAT_ram_30046550 = uVar24;
    }
    if (DAT_ram_30046544 != 0) {
      if (DAT_ram_30046544 < uVar24) {
        uVar21 = uVar24 - DAT_ram_30046544;
      }
      else {
        uVar21 = (_DAT_ram_3004b3c8 + DAT_ram_30046544) - iVar12;
      }
      if (DAT_ram_30046554 < uVar21) {
        DAT_ram_30046554 = uVar21;
      }
      if (DAT_ram_30046544 < uVar24) {
        DAT_ram_30046558 = DAT_ram_30046558 + 1;
        if (DAT_ram_3004655c < uVar24 - DAT_ram_30046544) {
          DAT_ram_3004655c = uVar24 - DAT_ram_30046544;
        }
      }
    }
  }
  fence();
  fence();
  if (_DAT_ram_1860000c != 0) {
    fence();
  }
  DAT_ram_30046580 = DAT_ram_30046580 | _DAT_ram_1860000c;
  if ((_DAT_ram_1860000c & 2) != 0) {
    DAT_ram_3004658c = DAT_ram_3004658c + 1;
  }
  if ((_DAT_ram_1860000c & 0x40) != 0) {
    DAT_ram_30046590 = DAT_ram_30046590 + 1;
  }
  if (_DAT_ram_18600018 < DAT_ram_30046584) {
    DAT_ram_30046584 = _DAT_ram_18600018;
  }
  if (DAT_ram_30046588 < _DAT_ram_18600018) {
    DAT_ram_30046588 = _DAT_ram_18600018;
  }
  __n = uVar32 * 4;
  uVar21 = param_1 * uVar32 * 4 + 0x30050bc0;
  uVar24 = (uVar21 & 0x1f) + __n;
  if ((uVar24 & 0x1f) != 0) {
    uVar24 = uVar24 + (0x20 - (int)uVar24 % 0x20);
  }
  fence();
  custom0();
  for (; 0 < (int)uVar24; uVar24 = uVar24 - 0x20) {
    custom0();
  }
  fence();
  custom0();
  DAT_ram_3004a3e4 = 1;
  _DAT_ram_3004b3c8 = uVar46;
  fVar35 = (float)thunk_FUN_ram_40022110();
  if (fVar35 < 0.0) {
    fVar35 = 0.0;
  }
  uVar24 = uVar32 >> 1;
  DAT_ram_30046684 = (fVar35 - DAT_ram_30046684) * DAT_ram_40092858 + DAT_ram_30046684;
  if (DAT_ram_3004b461 == '\0') {
    if ((DAT_ram_3004da60 == '\0') && (DAT_ram_3004b460 == '\0')) {
      uStack_10c = uStack_10c & 0xffffff00;
      if (uVar24 != 0) {
        if (DAT_ram_300567d8 == '\x01') {
          _DAT_ram_300567cc = (uint)(_DAT_ram_3005ac00 >> 1) << 0x10;
        }
        else {
          if (DAT_ram_300567d8 == '\x02') {
            uVar13 = (uint)_DAT_ram_3005ac02;
            uVar31 = (ushort)(_DAT_ram_300567cc >> 0xf) & 0x1ffe;
            uVar30 = _DAT_ram_300567cc >> 0xf & 0x1ffe;
            if (uVar13 < uVar30) {
              uVar13 = uVar13 + 0x2000;
            }
            uVar13 = uVar13 - uVar30;
            uVar30 = uVar13 & 0xffff;
            if (uVar30 < DAT_ram_3004669c) {
              DAT_ram_3004669c = uVar30;
            }
            if (_DAT_ram_3004fa84 < uVar30) {
              _DAT_ram_3004fa84 = uVar30;
            }
            if (uVar30 < 4) {
              _DAT_ram_3005ac00 = uVar31;
              memset(&DAT_ram_30056a00,0,uVar24 << 2);
              _DAT_ram_3004fa94 = _DAT_ram_3004fa94 + 1;
              _DAT_ram_300567dc = _DAT_ram_300567dc + 1;
              _DAT_ram_3005ac00 = uVar31;
              if (0x5f < _DAT_ram_300567dc) {
                DAT_ram_300567d8 = '\x01';
                _DAT_ram_3005ac00 = _DAT_ram_3005ac02;
                _DAT_ram_300567cc = (uint)(_DAT_ram_3005ac02 >> 1) << 0x10;
                DAT_ram_300466a4 = 0x10000;
                DAT_ram_300466a0 = 0x10000;
                _DAT_ram_300567dc = 0;
              }
            }
            else {
              _DAT_ram_300567dc = 0;
              uVar30 = (uVar13 & 0xffff) >> 1;
              uVar13 = (uVar30 + 0x7e00) * 2;
              if (0x101eb < uVar13) {
                uVar13 = 0x101eb;
              }
              if (uVar13 < 0xfe14) {
                uVar13 = 0xfe14;
              }
              uVar13 = ((int)(uVar13 - DAT_ram_300466a4) >> 6) + DAT_ram_300466a4;
              if ((int)uVar13 < 0xfe14) {
                DAT_ram_300466a4 = 0xfe14;
              }
              else {
                DAT_ram_300466a4 = 0x101eb;
                if ((int)uVar13 < 0x101ec) {
                  DAT_ram_300466a4 = uVar13;
                }
              }
              uVar13 = DAT_ram_300466a4;
              DAT_ram_300466a0 = DAT_ram_300466a4;
              uVar28 = 0;
              if ((DAT_ram_300466a4 + 0xffff >> 0x10) + 1 +
                  ((_DAT_ram_300567cc & 0xffff) + (uVar24 - 1) * DAT_ram_300466a4 >> 0x10) <= uVar30
                 ) {
                puVar16 = (undefined2 *)&DAT_ram_30056a00;
                uVar30 = 0;
                do {
                  uVar20 = _DAT_ram_300567cc >> 0x10;
                  uVar17 = uVar20 + 1;
                  uVar28 = _DAT_ram_300567cc & 0xffff;
                  if (0xfff < uVar17) {
                    uVar17 = 0;
                  }
                  sVar3 = *(short *)(&DAT_ram_30056c00 + (uVar20 * 2 + 1) * 2);
                  sVar4 = *(short *)(&DAT_ram_30056c00 + (uVar17 * 2 + 1) * 2);
                  _DAT_ram_300567cc = _DAT_ram_300567cc + uVar13;
                  *puVar16 = (short)((int)*(short *)(&DAT_ram_30056c00 + uVar17 * 4) * uVar28 +
                                     (int)*(short *)(&DAT_ram_30056c00 + uVar20 * 4) *
                                     (0x10000 - uVar28) + 0x8000 >> 0x10);
                  puVar16[1] = (short)((int)sVar4 * uVar28 + (int)sVar3 * (0x10000 - uVar28) +
                                       0x8000 >> 0x10);
                  if (0xfffffff < _DAT_ram_300567cc) {
                    _DAT_ram_300567cc = _DAT_ram_300567cc + 0xf0000000;
                  }
                  uVar30 = uVar30 + 1;
                  puVar16 = puVar16 + 2;
                  uVar28 = uVar24;
                } while (uVar24 != uVar30);
              }
              bVar1 = false;
              uVar30 = _DAT_ram_300567cc;
LAB_ram_4000aed6:
              if (uVar28 < uVar24) {
                uVar17 = (uint)_DAT_ram_3005ac02;
                uVar20 = uVar30 >> 0x10;
                uVar18 = uVar20 * 2 & 0x1ffe;
                if (uVar17 < uVar18) {
                  uVar17 = uVar17 + 0x2000;
                }
                uVar17 = (uVar17 - uVar18 & 0xffff) >> 1;
                if (1 < uVar17) goto code_r0x4000ae60;
                if (bVar1) {
                  _DAT_ram_300567cc = uVar30;
                }
                _DAT_ram_3004fa94 = _DAT_ram_3004fa94 + 1;
                if (uVar28 == 0) {
                  uVar23 = 0;
                  uVar19 = 0;
                }
                else {
                  uVar19 = *(undefined2 *)(&DAT_ram_30056a00 + (uVar28 - 1) * 4);
                  uVar23 = *(undefined2 *)(&DAT_ram_30056a02 + (uVar28 - 1) * 4);
                }
                do {
                  *(undefined2 *)(&DAT_ram_30056a00 + uVar28 * 4) = uVar19;
                  *(undefined2 *)(&DAT_ram_30056a02 + uVar28 * 4) = uVar23;
                  uVar28 = uVar28 + 1;
                } while (uVar28 < uVar24);
              }
              else if (bVar1) {
                _DAT_ram_300567cc = uVar30;
              }
              _DAT_ram_3005ac00 = (ushort)(((_DAT_ram_300567cc >> 0x10) << 0x11) >> 0x10);
            }
            goto LAB_ram_4000a62c;
          }
          if (DAT_ram_300567d8 != '\0') {
            DAT_ram_300567d8 = '\0';
          }
          _DAT_ram_300567cc = 0;
          DAT_ram_300466a4 = 0x10000;
        }
        _DAT_ram_300567dc = 0;
        memset(&DAT_ram_30056a00,0,uVar24 << 2);
      }
LAB_ram_4000a62c:
      iVar14 = FUN_ram_4002a1d4();
      iVar15 = 0;
      if (iVar14 != 0) {
        FUN_ram_4002a29e(0x30056800,uVar24,&uStack_10c);
        iVar15 = 0x30056800;
      }
      cVar8 = DAT_ram_30049e10;
      if (uVar24 != 0) {
        uStack_14c = uStack_10c & 0xff;
        uVar13 = uVar24;
        if (0x80 < uVar24) {
          uVar13 = 0x80;
        }
        iStack_11c = 0;
        if (DAT_ram_30049e10 != '\0') {
          iStack_11c = FUN_ram_4003f02e();
        }
        uVar30 = _DAT_ram_3004b3d0;
        if (_DAT_ram_3004b3d0 == 0) {
          uVar30 = 0xac44;
        }
        FUN_ram_40024466(uVar13,uVar30,&fStack_f0);
        fVar43 = DAT_ram_40092860;
        fVar35 = DAT_ram_30046684;
        __n_00 = uVar13 << 2;
        sVar25 = 0;
        pvVar29 = (void *)0x3004a3e8;
        do {
          uVar42 = (ulonglong)(uint)((float)(*(int *)(uVar21 + sVar25 * 2) >> 8) * fVar43 * fVar35);
          *(ulonglong *)(sVar25 + 0x3004a3e8) = uVar42;
          *(ulonglong *)(sVar25 + 0x3004a5e8) = uVar42;
          sVar25 = sVar25 + 4;
        } while (__n_00 != sVar25);
        iStack_148 = 0;
        if (cVar8 != '\0') {
          iStack_148 = FUN_ram_4003f02e();
        }
        pvStack_100 = (void *)0x0;
        pvStack_fc = (void *)0x0;
        uStack_f8 = 0;
        auStack_108[0] = CONCAT31(auStack_108[0]._1_3_,1);
        iVar14 = FUN_ram_40022504(&DAT_ram_3004b3d4);
        if (iVar14 == 0) {
          pvVar29 = (void *)0x3004a7e8;
          memset((void *)0x3004a7e8,0,__n_00);
          memset((void *)0x3004a9e8,0,__n_00);
LAB_ram_4000af5e:
          pvStack_fc = (void *)0x0;
          uStack_f8 = uStack_f8 & 0xffffff00;
          pvStack_100 = pvVar29;
        }
        else {
          FUN_ram_4005eb2a(0x3004abe8,0x3004a3e8,0x3004a5e8,0x3004a7e8,0x3004a9e8,uVar13,auStack_108
                           ,&pvStack_100);
          if (DAT_ram_3004b450 != '\0') {
            sVar25 = 0;
            do {
              uVar42 = (ulonglong)
                       (uint)((float)(*(int *)(uVar21 + sVar25 * 2) >> 8) * fVar43 * fVar35);
              *(ulonglong *)(sVar25 + 0x3004a3e8) = uVar42;
              *(ulonglong *)(sVar25 + 0x3004a5e8) = uVar42;
              sVar25 = sVar25 + 4;
            } while (__n_00 != sVar25);
            goto LAB_ram_4000af5e;
          }
        }
        iStack_144 = 0;
        if (cVar8 != '\0') {
          iStack_144 = FUN_ram_4003f02e();
        }
        pvVar29 = pvStack_100;
        if (pvStack_100 == (void *)0x0) {
          pvVar29 = (void *)0x3004a3e8;
        }
        __s = (void *)0x0;
        if ((char)uStack_f8 != '\0') {
          __s = pvStack_fc;
        }
        if (DAT_ram_30049eb5 != '\0') {
          memset(pvVar29,0,__n_00);
          if (__s != (void *)0x0) {
            memset(__s,0,__n_00);
          }
        }
        FUN_ram_40022528(&DAT_ram_3004b3d4,pvVar29,__s,uVar13);
        FUN_ram_400083cc();
        iStack_140 = 0;
        if (cVar8 != '\0') {
          iStack_140 = FUN_ram_4003f02e();
        }
        fVar35 = (float)DAT_ram_30046695 / DAT_ram_4009286c;
        if (DAT_ram_30046690 < 0.0) {
          fVar43 = 0.0;
        }
        else {
          fVar43 = DAT_ram_30046690;
          if (DAT_ram_4009281c < DAT_ram_30046690) {
            fVar43 = DAT_ram_4009281c;
          }
        }
        fVar44 = 0.0;
        fVar43 = (fVar43 - (float)_DAT_ram_3004668c) * DAT_ram_4009285c + (float)_DAT_ram_3004668c;
        _DAT_ram_3004668c = CONCAT44(DAT_ram_30046690,fVar43);
        iVar14 = FUN_ram_40022206();
        if ((iVar15 != 0) && (0 < iVar14)) {
          fVar44 = (float)iVar14 * DAT_ram_40092870;
        }
        if (uStack_14c != 1) {
          uStack_14c = 2;
        }
        iVar14 = FUN_ram_40022190();
        fVar45 = 0.0;
        if ((DAT_ram_3005cdf8 == '\0') && (0 < iVar14)) {
          fVar45 = (float)iVar14 * DAT_ram_40092870;
        }
        iVar14 = FUN_ram_40022018();
        fVar36 = DAT_ram_40092854;
        fVar34 = DAT_ram_40092850;
        fVar2 = DAT_ram_4009284c;
        fVar33 = DAT_ram_40092818;
        cVar9 = DAT_ram_300567c4;
        iVar26 = 2;
        fVar43 = fVar43 * DAT_ram_40092864;
        uVar30 = 0;
        do {
          fVar11 = _DAT_ram_40092868;
          fVar37 = fVar35 * (float)*(undefined8 *)((int)pvVar29 + uVar30 * 4);
          fVar40 = fVar2;
          if ((fVar37 <= fVar2) && (fVar40 = fVar37, fVar37 < fVar34)) {
            fVar40 = fVar34;
          }
          if (__s != (void *)0x0) {
            fVar37 = fVar35 * (float)*(undefined8 *)(uVar30 * 4 + (int)__s);
            fVar41 = fVar2;
            if ((fVar37 <= fVar2) && (fVar41 = fVar37, fVar37 < fVar34)) {
              fVar41 = fVar34;
            }
            fVar40 = (fVar41 + fVar40) * DAT_ram_40092864;
          }
          fVar37 = fVar40;
          fVar41 = fVar40;
          fVar39 = fVar40;
          if (0.0 < fVar44) {
            if (uStack_14c == 1) {
              fVar37 = (float)(int)*(short *)(iVar15 + uVar30 * 2) * DAT_ram_40092874 * fVar44;
              fVar41 = fVar37;
            }
            else {
              fVar37 = (float)(int)*(short *)(iVar15 + uVar30 * 4) * DAT_ram_40092874 * fVar44;
              fVar41 = (float)(int)*(short *)(iVar15 + iVar26) * DAT_ram_40092874 * fVar44;
            }
            fVar37 = fVar40 + fVar37;
            fVar41 = fVar40 + fVar41;
            if (iVar14 != 0) {
              fVar40 = fVar37;
              fVar39 = fVar41;
            }
          }
          if ((cVar10 != '\0') && (cVar9 != '\0')) {
            fVar40 = fVar40 * fVar43;
            fVar39 = fVar39 * fVar43;
            fVar38 = fVar2;
            if ((fVar40 <= fVar2) && (fVar38 = fVar40, fVar40 < fVar34)) {
              fVar38 = fVar34;
            }
            fVar38 = (float)FUN_ram_400076fa(fVar38);
            fVar40 = fVar2;
            if ((fVar39 <= fVar2) && (fVar40 = fVar39, fVar39 < fVar34)) {
              fVar40 = fVar34;
            }
            fVar39 = (float)FUN_ram_400076fa(fVar40);
            fVar40 = fVar36;
            if ((fVar38 <= fVar36) && (fVar40 = fVar38, fVar38 < fVar33)) {
              fVar40 = fVar33;
            }
            fVar38 = fVar36;
            if ((fVar39 <= fVar36) && (fVar38 = fVar39, fVar39 < fVar33)) {
              fVar38 = fVar33;
            }
            uVar28 = (uint)_DAT_ram_300567c2;
            uVar20 = uVar28 + 1 & 0x1fff;
            if ((_DAT_ram_300567c0 == uVar20) || ((uint)_DAT_ram_300567c0 == (uVar20 + 1 & 0x1fff)))
            {
              _DAT_ram_3004b4b8 = _DAT_ram_3004b4b8 + 1;
            }
            else {
              _DAT_ram_300567c2 = (ushort)(uVar20 + 1) & 0x1fff;
              *(short *)(uVar28 * 2 + 0x300527c0) = (short)((uint)(int)(fVar40 * fVar11) >> 8);
              *(short *)(uVar20 * 2 + 0x300527c0) = (short)((uint)(int)(fVar38 * fVar11) >> 8);
            }
          }
          if (0.0 < fVar45) {
            fVar37 = fVar45 * (float)(int)*(short *)(&DAT_ram_30056a00 + uVar30 * 4) *
                              DAT_ram_40092874 + fVar37;
            fVar41 = fVar45 * (float)(int)*(short *)(&DAT_ram_30056a00 + iVar26) * DAT_ram_40092874
                     + fVar41;
          }
          fVar37 = fVar43 * fVar37;
          fVar41 = fVar43 * fVar41;
          fVar40 = DAT_ram_4009284c;
          if ((DAT_ram_4009284c < fVar37) || (fVar40 = DAT_ram_40092850, fVar37 < DAT_ram_40092850))
          {
            fVar37 = fVar40;
          }
          fVar40 = (float)FUN_ram_400076fa(fVar37);
          fVar37 = DAT_ram_4009284c;
          if ((DAT_ram_4009284c < fVar41) || (fVar37 = DAT_ram_40092850, fVar41 < DAT_ram_40092850))
          {
            fVar41 = fVar37;
          }
          fVar41 = (float)FUN_ram_400076fa(fVar41);
          fVar37 = fVar36;
          if ((fVar40 <= fVar36) && (fVar37 = fVar40, fVar40 < DAT_ram_40092818)) {
            fVar37 = DAT_ram_40092818;
          }
          *(int *)(&DAT_ram_300523c0 + uVar30 * 8) = (int)(fVar37 * fVar11) << 8;
          fVar37 = fVar36;
          if ((fVar41 <= fVar36) && (fVar37 = fVar41, fVar41 < DAT_ram_40092818)) {
            fVar37 = DAT_ram_40092818;
          }
          uVar30 = uVar30 + 1;
          *(int *)(&DAT_ram_300523c0 + iVar26 * 2) = (int)(fVar37 * fVar11) << 8;
          iVar26 = iVar26 + 4;
        } while (uVar13 != uVar30);
        if (cVar8 != '\0') {
          iVar14 = FUN_ram_4003f02e();
          uVar30 = iStack_148 - iStack_11c;
          uVar28 = iStack_144 - iStack_148;
          uVar20 = iStack_140 - iStack_144;
          uVar13 = iVar14 - iStack_140;
          _DAT_ram_30049e18 = _DAT_ram_30049e18 + (ulonglong)uVar30;
          _DAT_ram_30049e08 = _DAT_ram_30049e08 + (ulonglong)uVar28;
          _DAT_ram_30049e28 = _DAT_ram_30049e28 + (ulonglong)uVar20;
          _DAT_ram_30049e38 = _DAT_ram_30049e38 + (ulonglong)uVar13;
          if (_DAT_ram_30049e14 < uVar30) {
            _DAT_ram_30049e14 = uVar30;
          }
          if (_DAT_ram_30049e04 < uVar28) {
            _DAT_ram_30049e04 = uVar28;
          }
          if (_DAT_ram_30049e20 < uVar20) {
            _DAT_ram_30049e20 = uVar20;
          }
          if (_DAT_ram_30049e30 < uVar13) {
            _DAT_ram_30049e30 = uVar13;
          }
          _DAT_ram_30049e00 = _DAT_ram_30049e00 + 1;
        }
      }
    }
    else {
      if ((DAT_ram_3004da60 == '\0') || (DAT_ram_30046698 == '\0')) {
        if (uVar24 != 0) {
          uVar13 = uVar24;
          if (0x80 < uVar24) {
            uVar13 = 0x80;
          }
          uVar30 = _DAT_ram_3004b3d0;
          if (_DAT_ram_3004b3d0 == 0) {
            uVar30 = 0xac44;
          }
          FUN_ram_40024466(uVar13,uVar30,&fStack_f0);
          fVar45 = DAT_ram_40092860;
          fVar44 = DAT_ram_40092850;
          fVar43 = DAT_ram_4009284c;
          fVar35 = DAT_ram_30046684;
          if (DAT_ram_30046690 < 0.0) {
            fVar33 = 0.0;
          }
          else {
            fVar33 = DAT_ram_30046690;
            if (DAT_ram_4009281c < DAT_ram_30046690) {
              fVar33 = DAT_ram_4009281c;
            }
          }
          fVar33 = (fVar33 - (float)_DAT_ram_3004668c) * DAT_ram_4009285c + (float)_DAT_ram_3004668c
          ;
          _DAT_ram_3004668c = (ulonglong)(uint)fVar33;
          iVar14 = 0;
          do {
            fVar2 = (float)(*(int *)(uVar21 + iVar14 * 2) >> 8) * fVar45 * fVar35;
            uVar42 = (ulonglong)(uint)fVar2;
            if (fVar43 < fVar2) {
              uVar42 = (ulonglong)(uint)fVar43;
            }
            else if (fVar2 < fVar44) {
              uVar42 = (ulonglong)(uint)fVar44;
            }
            *(ulonglong *)(iVar14 + 0x3004a3e8) = uVar42;
            *(ulonglong *)(iVar14 + 0x3004a5e8) = uVar42;
            iVar14 = iVar14 + 4;
          } while (uVar13 << 2 != iVar14);
          FUN_ram_40022528(&DAT_ram_3004b3d4,0x3004a3e8,0x3004a5e8);
          FUN_ram_400083cc();
          fVar2 = _DAT_ram_40092868;
          fVar45 = DAT_ram_40092854;
          fVar44 = DAT_ram_40092850;
          fVar43 = DAT_ram_4009284c;
          fVar35 = DAT_ram_40092818;
          fVar33 = fVar33 * DAT_ram_40092864;
          iVar14 = 0;
          piVar27 = (int *)&DAT_ram_300523c0;
          do {
            fVar34 = (float)*(undefined8 *)(iVar14 + 0x3004a3e8) * fVar33;
            fVar36 = (float)*(undefined8 *)(iVar14 + 0x3004a5e8) * fVar33;
            fVar37 = fVar43;
            if ((fVar34 <= fVar43) && (fVar37 = fVar34, fVar34 < fVar44)) {
              fVar37 = fVar44;
            }
            fVar34 = fVar43;
            if ((fVar36 <= fVar43) && (fVar34 = fVar36, fVar36 < fVar44)) {
              fVar34 = fVar44;
            }
            fVar36 = (float)FUN_ram_400076fa(fVar37);
            fVar37 = (float)FUN_ram_400076fa(fVar34);
            fVar34 = fVar45;
            if ((fVar36 <= fVar45) && (fVar34 = fVar36, fVar36 < fVar35)) {
              fVar34 = fVar35;
            }
            *piVar27 = (int)(fVar34 * fVar2) << 8;
            fVar34 = fVar45;
            if ((fVar37 <= fVar45) && (fVar34 = fVar37, fVar37 < fVar35)) {
              fVar34 = fVar35;
            }
            iVar14 = iVar14 + 4;
            piVar27[1] = (int)(fVar34 * fVar2) << 8;
            piVar27 = piVar27 + 2;
          } while (uVar13 << 2 != iVar14);
        }
      }
      else {
        memset(&DAT_ram_300523c0,0,__n);
        FUN_ram_400083e6(uVar24);
      }
      if (cVar10 != '\0') {
        FUN_ram_40008006(&DAT_ram_300523c0,uVar24);
      }
      fVar35 = DAT_ram_30046684;
      if (((DAT_ram_3004da60 != '\0') && (DAT_ram_3004da60 != '\0')) && (uVar24 != 0)) {
        uVar13 = _DAT_ram_3004fa80;
        for (uVar30 = 0; uVar30 != (uVar24 & 0xfffffffc); uVar30 = uVar30 + 4) {
          iVar15 = 0;
          iVar14 = 0;
          do {
            iVar26 = iVar14 * 8;
            iVar14 = iVar14 + 1;
            iVar15 = iVar15 + (*(int *)(uVar21 + uVar30 * 8 + iVar26) >> 0x10);
          } while (iVar14 != 4);
          iVar14 = (int)((float)(int)(short)(iVar15 / 4) * fVar35);
          if (iVar14 < -0x8000) {
            iVar14 = -0x8000;
          }
          if (0x7fff < iVar14) {
            iVar14 = 0x7fff;
          }
          if (0xfff < uVar13 - _DAT_ram_3004da64) {
            _DAT_ram_3004da64 = _DAT_ram_3004da64 + 1;
          }
          *(short *)((uVar13 & 0xfff) * 2 + 0x3004da80) = (short)iVar14;
          uVar13 = uVar13 + 1;
        }
        _DAT_ram_3004fa80 = _DAT_ram_3004fa80 + (uVar32 >> 3);
      }
    }
  }
  else {
    FUN_ram_4000305c(&DAT_ram_300523c0,uVar21,__n);
    if (uVar24 != 0) {
      if (DAT_ram_3004b3e0 == '\0' && DAT_ram_3004b3e1 == '\0') {
        FUN_ram_400083e6(uVar24);
      }
      else {
        iVar14 = 0;
        uVar13 = 0;
        piVar27 = (int *)&DAT_ram_300523c0;
        do {
          pvStack_100 = (void *)(float)*piVar27;
          fStack_f0 = (float)piVar27[1];
          uVar13 = uVar13 + 1;
          iVar15 = FUN_ram_40022528(&DAT_ram_3004b3d4,&pvStack_100,&fStack_f0,1);
          if (iVar15 != 0) {
            iVar14 = iVar15;
          }
          *piVar27 = (int)(float)pvStack_100;
          piVar27[1] = (int)fStack_f0;
          piVar27 = piVar27 + 2;
        } while (uVar24 != uVar13);
        FUN_ram_400083cc(iVar14);
      }
    }
    if (cVar10 != '\0') {
      FUN_ram_40008006(uVar21,uVar24);
    }
  }
  if (DAT_ram_30046697 == '\0') {
    if (DAT_ram_3004d57c == '\0') {
      FUN_ram_40008576(1);
      DAT_ram_3004d57c = '\x01';
      _DAT_ram_3004d580 = 0x10;
    }
  }
  else {
    bVar1 = false;
    if (uVar24 != 0) {
      lVar5 = 0;
      uVar30 = 0;
      uVar28 = 0;
      uVar20 = 0;
      uVar13 = *(int *)(param_1 * uVar32 * 4 + 0x30050bc0) >> 8;
      do {
        iVar14 = *(int *)(uVar21 + uVar20 * 8);
        uVar22 = iVar14 >> 8;
        uVar17 = iVar14 >> 0x1f;
        uVar18 = (uVar17 ^ uVar22) - uVar17;
        if (uVar28 < uVar18) {
          uVar28 = uVar18;
        }
        if ((uVar20 != 0) &&
           (uVar18 = (int)(uVar22 - uVar13) >> 0x1f, uVar18 = (uVar22 - uVar13 ^ uVar18) - uVar18,
           uVar30 < uVar18)) {
          uVar30 = uVar18;
        }
        uVar20 = uVar20 + 1;
        lVar5 = lVar5 + CONCAT44(uVar17,uVar22);
        uVar13 = uVar22;
      } while (uVar24 != uVar20);
      if (lVar5 < 0) {
        lVar5 = -lVar5;
      }
      uVar13 = FUN_ram_400037bc((int)lVar5,(int)((ulonglong)lVar5 >> 0x20),uVar24,0);
      bVar1 = false;
      if ((uVar28 < 0x79999a) && (uVar13 < 0x19999a)) {
        bVar1 = uVar30 < 0x733334;
      }
    }
    _DAT_ram_3004d576 = _DAT_ram_3004d576 + 1;
    if (bVar1) {
      _DAT_ram_3004d578 = _DAT_ram_3004d578 + 1;
    }
    else {
      _DAT_ram_3004d578 = 0;
    }
    if ((0x3f < _DAT_ram_3004d576) && ((7 < _DAT_ram_3004d578 || (0xdf < _DAT_ram_3004d576)))) {
      DAT_ram_30046697 = '\0';
      _DAT_ram_3004668c = _DAT_ram_3004668c & 0xffffffff00000000;
      _DAT_ram_3004d580 = 0x10;
      if (DAT_ram_3004d57c == '\0') {
        FUN_ram_40008576(1);
        DAT_ram_3004d57c = '\x01';
      }
    }
    memset(&DAT_ram_300523c0,0,__n);
  }
  if (_DAT_ram_3004d580 != 0) {
    _DAT_ram_3004d580 = _DAT_ram_3004d580 + -1;
    memset(&DAT_ram_300523c0,0,__n);
  }
  if (DAT_ram_3004d57b == '\0') {
    if ((((DAT_ram_30046697 == '\0') && (DAT_ram_3004d57c != '\0')) && (DAT_ram_30049e84 == '\0'))
       && (_DAT_ram_3004d580 == 0)) {
      DAT_ram_3004d57a = 1;
    }
LAB_ram_40009e12:
    _DAT_ram_3004668c = _DAT_ram_3004668c & 0xffffffff00000000;
    memset(&DAT_ram_300523c0,0,__n);
  }
  else if (_DAT_ram_3004d57e != 0) {
    if (_DAT_ram_3004d57e != 0) {
      _DAT_ram_3004d57e = _DAT_ram_3004d57e + -1;
    }
    goto LAB_ram_40009e12;
  }
  pvStack_100 = (void *)0x0;
  fStack_f0 = 0.0;
  pvStack_fc = (void *)0x0;
  uStack_ec = 0;
  uStack_10c = 0;
  auStack_108[0] = 0;
  bVar1 = DAT_ram_3004d4f8 != -1;
  DAT_ram_3004d4f8 = DAT_ram_3004d4f8 + '\x01';
  if (bVar1) {
    DAT_ram_3004d4f8 = '\0';
    if (uVar32 != 0) {
      FUN_ram_40007fa4(uVar21,uVar32,&uStack_10c,&pvStack_100);
      FUN_ram_40007fa4(&DAT_ram_300523c0,uVar32,auStack_108,&fStack_f0);
    }
    _DAT_ram_30049e48 = uStack_10c;
    if (uStack_10c < _DAT_ram_3004d4fc) {
      _DAT_ram_30049e48 = _DAT_ram_3004d4fc - (_DAT_ram_3004d4fc - uStack_10c >> 7);
    }
    if ((pvStack_fc < _DAT_ram_3004d504) ||
       ((_DAT_ram_30049e50 = CONCAT44(pvStack_fc,pvStack_100),
        (void *)_DAT_ram_3004d504 == pvStack_fc &&
        (_DAT_ram_30049e50 = CONCAT44(pvStack_fc,pvStack_100), pvStack_100 < _DAT_ram_3004d500)))) {
      uVar42 = _DAT_ram_3004d500 - CONCAT44(pvStack_fc,pvStack_100);
      uVar21 = (uint)(uVar42 >> 0x20);
      _DAT_ram_30049e50 =
           _DAT_ram_3004d500 -
           CONCAT44(uVar21 >> 7,(int)(((ulonglong)uVar21 << 0x20 | uVar42 & 0xffffffff) >> 7));
    }
    uVar21 = (uint)((ulonglong)_DAT_ram_30049e50 >> 0x20);
    _DAT_ram_30049e58 = auStack_108[0];
    if (auStack_108[0] < _DAT_ram_3004d508) {
      _DAT_ram_30049e58 = _DAT_ram_3004d508 - (_DAT_ram_3004d508 - auStack_108[0] >> 7);
    }
    if ((uStack_ec < _DAT_ram_3004d514) ||
       ((_DAT_ram_30049e60 = CONCAT44(uStack_ec,fStack_f0), _DAT_ram_3004d514 == uStack_ec &&
        (_DAT_ram_30049e60 = CONCAT44(uStack_ec,fStack_f0),
        (uint)fStack_f0 < (uint)_DAT_ram_3004d510)))) {
      uVar42 = _DAT_ram_3004d510 - CONCAT44(uStack_ec,fStack_f0);
      uVar13 = (uint)(uVar42 >> 0x20);
      _DAT_ram_30049e60 =
           _DAT_ram_3004d510 -
           CONCAT44(uVar13 >> 7,(int)(((ulonglong)uVar13 << 0x20 | uVar42 & 0xffffffff) >> 7));
    }
    uVar13 = (uint)((ulonglong)_DAT_ram_30049e60 >> 0x20);
    iVar14 = 7;
    do {
      if (*(uint *)(iVar14 * 4 + 0x400928f0) <= _DAT_ram_30049e48) {
        DAT_ram_30049e68 = (char)iVar14 + '\x01';
        goto LAB_ram_40009f74;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != -1);
    DAT_ram_30049e68 = '\0';
LAB_ram_40009f74:
    iVar26 = 0x40092910;
    iVar15 = 7;
    iVar14 = iVar26;
    do {
      if ((*(uint *)(iVar14 + 0x3c) <= uVar21) &&
         ((*(uint *)(iVar14 + 0x3c) != uVar21 ||
          (*(uint *)(iVar14 + 0x38) <= (uint)_DAT_ram_30049e50)))) {
        DAT_ram_30049e69 = (char)iVar15 + '\x01';
        goto LAB_ram_40009fac;
      }
      iVar15 = iVar15 + -1;
      iVar14 = iVar14 + -8;
    } while (iVar15 != -1);
    DAT_ram_30049e69 = '\0';
LAB_ram_40009fac:
    iVar14 = 7;
    do {
      if (*(uint *)(iVar14 * 4 + 0x400928f0) <= _DAT_ram_30049e58) {
        DAT_ram_30049e6a = (char)iVar14 + '\x01';
        goto LAB_ram_40009fc6;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != -1);
    DAT_ram_30049e6a = '\0';
LAB_ram_40009fc6:
    iVar14 = 7;
    do {
      if ((*(uint *)(iVar26 + 0x3c) <= uVar13) &&
         ((*(uint *)(iVar26 + 0x3c) != uVar13 ||
          (*(uint *)(iVar26 + 0x38) <= (uint)_DAT_ram_30049e60)))) {
        cStack_150 = (char)iVar14 + '\x01';
        goto LAB_ram_40009ff6;
      }
      iVar14 = iVar14 + -1;
      iVar26 = iVar26 + -8;
    } while (iVar14 != -1);
    cStack_150 = '\0';
LAB_ram_40009ff6:
    DAT_ram_30049e6b = cStack_150;
    _DAT_ram_3004d4fc = _DAT_ram_30049e48;
    _DAT_ram_3004d500 = _DAT_ram_30049e50;
    _DAT_ram_3004d508 = _DAT_ram_30049e58;
    _DAT_ram_3004d510 = _DAT_ram_30049e60;
  }
  uVar21 = _DAT_ram_30049ee8;
  iVar14 = _DAT_ram_30049ed8;
  uVar13 = FUN_ram_40007814();
  if ((uVar32 - 1 < 0x3ff) && ((uVar32 & 1) == 0)) {
    uVar21 = uVar21 - iVar14 & 0x3ff;
    if ((DAT_ram_30049edc != '\0') && (uVar13 < uVar21)) {
      if ((DAT_ram_3004d57b == '\0') || (DAT_ram_30049e84 != '\0')) {
        uVar13 = uVar21 - uVar13 & 0xfffffffe;
        if (0x200 < uVar13) {
          uVar13 = 0x200;
        }
        FUN_ram_400002f4();
        if (_DAT_ram_30049ee0 < uVar13) {
          _DAT_ram_30049ec8 = _DAT_ram_30049ec8 + 1;
          _DAT_ram_30049ed0 = uVar13 + (_DAT_ram_30049ed0 - _DAT_ram_30049ee0);
          _DAT_ram_30049ee0 = uVar13;
        }
      }
      else {
        FUN_ram_400002f4();
        _DAT_ram_30049ee0 = 0;
      }
      FUN_ram_400002fa();
    }
    uVar13 = 0x3ff - uVar21;
    if (DAT_ram_30049edc != '\0') {
      iVar14 = FUN_ram_400077b2();
      uVar21 = uVar21 + iVar14;
    }
    DAT_ram_30046518 = uVar21;
    if (uVar13 < uVar32) {
      _DAT_ram_30049ed4 = _DAT_ram_30049ed4 + 1;
      DAT_ram_300465c8 = DAT_ram_300465c8 + 1;
    }
    else {
      uVar30 = uVar32 + _DAT_ram_30049ee8;
      uVar13 = uVar32;
      if (0x400 < uVar30) {
        uVar13 = 0x400 - _DAT_ram_30049ee8;
      }
      FUN_ram_4000305c(_DAT_ram_30049ee8 * 4 + 0x3004fbc0,&DAT_ram_300523c0,uVar13 * 4);
      if (uVar13 < uVar32) {
        FUN_ram_4000305c(0x3004fbc0,&DAT_ram_300523c0 + uVar13 * 4,(uVar32 - uVar13) * 4);
      }
      _DAT_ram_30049ee8 = uVar30 & 0x3ff;
      if (_DAT_ram_3004b3d0 != 0) {
        if (_DAT_ram_3004b3d0 == 0) {
          uVar13 = 0xffffffff;
          uVar30 = 0xffffffff;
        }
        else {
          uVar13 = (DAT_ram_30046680 * 500000) / _DAT_ram_3004b3d0;
          uVar30 = (uVar21 * 500000) / _DAT_ram_3004b3d0;
        }
        uVar13 = uVar13 + uVar30;
        if (uVar13 < DAT_ram_3004659c) {
          DAT_ram_3004659c = uVar13;
        }
        if (DAT_ram_300465a0 < uVar13) {
          DAT_ram_300465a0 = uVar13;
        }
        if (uVar21 < DAT_ram_30046578) {
          DAT_ram_30046578 = uVar21;
        }
      }
      FUN_ram_400089be();
      if (DAT_ram_30049edc != '\0') {
        FUN_ram_4000871e();
      }
    }
  }
  fence();
  uVar21 = *(int *)(_DAT_ram_3004b474 + 0x28) << 1;
  if (uVar32 != 0) {
    uVar21 = uVar21 % uVar32;
  }
  if (uVar21 < DAT_ram_300465ac) {
    DAT_ram_300465ac = uVar21;
  }
  if (DAT_ram_300465b0 < uVar21) {
    DAT_ram_300465b0 = uVar21;
  }
  if ((((_DAT_ram_30049e80 != 0) && (DAT_ram_3004d57b != '\0')) && (_DAT_ram_30049e7c == 0)) &&
     (_DAT_ram_3004d57e == 0)) {
    if ((DAT_ram_30046680 == 0x80) && (DAT_ram_30049eb5 == '\0')) {
      _DAT_ram_300567c8 = 0;
    }
    else {
      _DAT_ram_300567c8 = _DAT_ram_300567c8 + 1;
      if (0x13 < _DAT_ram_300567c8) {
        DAT_ram_30049eb6 = 0;
        _DAT_ram_300567c8 = 0;
        _DAT_ram_30049e7c = 0x80;
        FUN_ram_400048d4();
      }
    }
  }
  iVar14 = FUN_ram_4003f02e();
  uVar32 = iVar14 - iVar12;
  lVar5 = (ulonglong)uVar32 + CONCAT44(DAT_ram_3004652c,DAT_ram_30046528);
  DAT_ram_30046538 = DAT_ram_30046538 + 1;
  DAT_ram_3004653c = uVar24 + DAT_ram_3004653c;
  if (uVar32 < DAT_ram_30046530) {
    DAT_ram_30046530 = uVar32;
  }
  if (DAT_ram_30046534 < uVar32) {
    DAT_ram_30046534 = uVar32;
  }
  lVar6 = _DAT_ram_30049e60;
  uVar7 = _DAT_ram_3004b3c8;
  if ((DAT_ram_30046544 != 0) && (DAT_ram_30046544 < uVar32)) {
    DAT_ram_30046548 = DAT_ram_30046548 + 1;
  }
LAB_ram_4000a1c6:
  _DAT_ram_3004b3cc = (int)((ulonglong)uVar7 >> 0x20);
  _DAT_ram_3004b3c8 = (int)uVar7;
  _DAT_ram_30049e64 = (undefined4)((ulonglong)lVar6 >> 0x20);
  _DAT_ram_30049e60 = (undefined4)lVar6;
  DAT_ram_3004652c = (undefined4)((ulonglong)lVar5 >> 0x20);
  DAT_ram_30046528 = (undefined4)lVar5;
  return;
code_r0x4000ae60:
  uVar22 = uVar20 + 1;
  uVar18 = uVar30 & 0xffff;
  if (0xfff < uVar22) {
    uVar22 = 0;
  }
  sVar3 = *(short *)(&DAT_ram_30056c00 + (uVar20 * 2 + 1) * 2);
  sVar4 = *(short *)(&DAT_ram_30056c00 + (uVar22 * 2 + 1) * 2);
  uVar17 = (uVar17 - 1) * 0x10000;
  *(short *)(&DAT_ram_30056a00 + uVar28 * 4) =
       (short)((int)*(short *)(&DAT_ram_30056c00 + uVar22 * 4) * uVar18 +
               (int)*(short *)(&DAT_ram_30056c00 + uVar20 * 4) * (0x10000 - uVar18) + 0x8000 >> 0x10
              );
  *(short *)(&DAT_ram_30056a02 + uVar28 * 4) =
       (short)((int)sVar4 * uVar18 + (int)sVar3 * (0x10000 - uVar18) + 0x8000 >> 0x10);
  if (uVar13 < uVar17) {
    uVar17 = uVar13;
  }
  uVar30 = uVar30 + uVar17;
  if (0xfffffff < uVar30) {
    uVar30 = uVar30 + 0xf0000000;
  }
  uVar28 = uVar28 + 1;
  bVar1 = true;
  goto LAB_ram_4000aed6;
}


