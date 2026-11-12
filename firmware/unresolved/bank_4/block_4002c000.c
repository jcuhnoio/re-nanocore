/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4002c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4002c0f2.
 * REA evidence: ev_03858b60b752433e8c0eb0a556b73ad0c93beab892dbae0c9c285fdcc0a4a6ef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002c0f2(void)

{
  if (_DAT_ram_30079a00 != 0) {
    FUN_ram_40004ac8(0x300799d4);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002c10a.
 * REA evidence: ev_0bf85179926a22e6e58e6f24b7dc5c39e1a42695f3be3e388043a8eafdb3ab3e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002c10a(void)

{
  int iVar1;
  
  if ((_DAT_ram_30079a00 == 0) &&
     (iVar1 = FUN_ram_4000493c(0x300799d4,s_uilay_ram_40094f54,1), iVar1 == 0)) {
    _DAT_ram_30079a00 = 1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4002c142.
 * REA evidence: ev_6e6f5dfc61088208fa407bbb8e504d18fd1892286c8a679b05d51cf9a0f61999
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002c142(void)

{
  if (_DAT_ram_30079a00 != 0) {
    FUN_ram_400049d6(0x300799d4,0xffffffff);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002c15c.
 * REA evidence: ev_e034e0c8654e030002d191c1b2ceb9566511b71e2471ec1de05270fe4778fc40
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002c15c(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    for (iVar1 = 0; param_2 != iVar1; iVar1 = iVar1 + 1) {
      if (*(int *)(param_1 + 8 + iVar1 * 0xc) != 0) {
        FUN_ram_4002c3f4();
      }
    }
    FUN_ram_4002c3f4(param_1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002c1a0.
 * REA evidence: ev_77549377985de68b8763119440af68fd7b2da492c43862602ba9268b97f94a85
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002c1a0(void)

{
  uint uVar1;
  
  if (_DAT_ram_300799d0 != 0) {
    uVar1 = 0;
    while( true ) {
      if (_DAT_ram_300799cc <= uVar1) break;
      if (*(int *)(_DAT_ram_300799d0 + uVar1 * 0xc + 8) != 0) {
        FUN_ram_4002c3f4();
      }
      uVar1 = uVar1 + 1;
    }
    FUN_ram_4002c3f4();
    _DAT_ram_300799d0 = 0;
    _DAT_ram_300799cc = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x4002c1fc.
 * REA evidence: ev_c61f07fe59e6d88013970f6c43d7a1f03fa6bcb6c5a41bed71c6709610daeb5c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002c1fc(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uStack_68;
  int iStack_64;
  undefined1 auStack_60 [16];
  int iStack_50;
  int iStack_4c;
  int iStack_40;
  uint uStack_3c;
  
  iVar1 = FUN_ram_4002b820(auStack_60);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_ram_4002b9e8(0x10,&iStack_50,0x10);
  if (iVar1 == 0) {
    if (iStack_50 != 0x494e4458) {
      return 0xffffffff;
    }
    iVar1 = FUN_ram_4002b9e8(iStack_4c * 0x1c + 0x20,&iStack_40,0x10);
    if (iVar1 == 0) {
      if (iStack_40 != 0x4c415931) {
        return 0xffffffff;
      }
      iVar1 = iStack_4c * 0x1c + 0x30;
      if (0xf < uStack_3c - 1) {
        return 0xffffffff;
      }
      puVar2 = (undefined4 *)FUN_ram_4002c3ba(uStack_3c,0xc);
      if (puVar2 == (undefined4 *)0x0) {
        return 0xfffffffb;
      }
      uVar6 = 0;
      puVar5 = puVar2;
      while( true ) {
        if (uStack_3c <= uVar6) {
          FUN_ram_4002c1a0();
          _DAT_ram_300799cc = uStack_3c;
          _DAT_ram_300799d0 = puVar2;
          return 0;
        }
        iVar3 = FUN_ram_4002b9e8(iVar1,&uStack_68,8);
        if (iVar3 != 0) break;
        *puVar5 = uStack_68;
        puVar5[1] = iStack_64;
        if (0x3f < iStack_64 - 1U) {
          FUN_ram_4002c1a0();
          FUN_ram_4002c15c(puVar2,uStack_3c);
          return 0xffffffff;
        }
        iVar3 = FUN_ram_4002c3ba(iStack_64,0x1a);
        if (iVar3 == 0) {
          FUN_ram_4002c1a0();
          FUN_ram_4002c15c(puVar2,uStack_3c);
          return 0xfffffffb;
        }
        iVar4 = FUN_ram_4002b9e8(iVar1 + 8,iVar3,iStack_64 * 0x1a);
        if (iVar4 != 0) {
          FUN_ram_4002c3f4(iVar3);
          FUN_ram_4002c1a0();
          break;
        }
        uVar6 = uVar6 + 1;
        puVar5[2] = iVar3;
        iVar1 = iVar1 + 8 + iStack_64 * 0x1a;
        puVar5 = puVar5 + 3;
      }
      FUN_ram_4002c15c(puVar2,uStack_3c);
    }
  }
  return 0xfffffff8;
}


/* NanoCore 1.10, address 0x4002c332.
 * REA evidence: ev_edbcb2d87832d1353073fc7f419c4dd1825384996b964c8ec2a8bb3f476ffd05
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002c332(void)

{
  undefined4 uVar1;
  
  FUN_ram_4002c142();
  uVar1 = FUN_ram_4002c1fc();
  FUN_ram_4002c0f2();
  return uVar1;
}


/* NanoCore 1.10, address 0x4002c34c.
 * REA evidence: ev_26a83d154c72ba9001a0510fb5f8f7897ac6c36b20f4ffb4bcda67077dcaf333
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002c34c(void)

{
  FUN_ram_4002c142();
  FUN_ram_4002c1fc();
  FUN_ram_4002c0f2();
  return;
}


/* NanoCore 1.10, address 0x4002c360.
 * REA evidence: ev_e6347a14d478e02916ccc81c0dcad60c3633a5e4d3d2ce0dc10a46a83a799bec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002c360(void)

{
  if (DAT_ram_30079a08 == '\0') {
    DAT_ram_30079a08 = '\x01';
    _DAT_ram_30079a04 = FUN_ram_40005fec(s_heap_cma_ram_40094f5c,7);
  }
  return _DAT_ram_30079a04;
}


/* NanoCore 1.10, address 0x4002c39e.
 * REA evidence: ev_2ae97746259b3a3b3582245236a4d27d15162385837105c08422d18479a7896f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002c39e(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002c360();
  if (iVar1 != 0) {
    FUN_ram_40005844(iVar1,param_1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002c3ba.
 * REA evidence: ev_227cbde7a50a98ce3a6021fd7983234bf499bb4883e5ea646efe810536c076f6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002c3ba(uint param_1,uint param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = 0;
    if ((int)((ulonglong)param_1 * (ulonglong)param_2 >> 0x20) == 0) {
      iVar1 = FUN_ram_4002c39e(param_1 * param_2);
      if (iVar1 != 0) {
        FUN_ram_4000505c(iVar1,0,param_1 * param_2);
      }
    }
    return iVar1;
  }
  iVar1 = FUN_ram_4002c39e(0);
  return iVar1;
}


/* NanoCore 1.10, address 0x4002c3f4.
 * REA evidence: ev_13639086dda066b136304f40757cdcb4116e6aa49cd8056d0ac452fa5275937d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002c3f4(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_400059ae();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002c3fc.
 * REA evidence: ev_0c475811598bb252afd6d711803fd96cb2104b561dfdb1ccd64105bb21c0b3a4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002c3fc(void)

{
  int iVar1;
  int iStack_24;
  short sStack_20;
  ushort uStack_1e;
  int iStack_1c;
  uint uStack_18;
  
  DAT_ram_3004679e = 0x1f;
  iVar1 = FUN_ram_4002ba66(&DAT_ram_40094f68,&iStack_1c);
  if ((((iVar1 == 0) && (7 < uStack_18)) &&
      (iVar1 = FUN_ram_4002b9e8(iStack_1c + 0x10,&iStack_24,8), iVar1 == 0)) &&
     ((iStack_24 == 0x314c544f && (sStack_20 == 1)))) {
    DAT_ram_3004679e = uStack_1e & 0x7f;
  }
  return;
}


/* NanoCore 1.10, address 0x4002c462.
 * REA evidence: ev_31b709b4055974a520c3d4bb67f1f9e24f2f0af09293322bf5af44ba18ed2ff6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ushort FUN_ram_4002c462(void)

{
  return DAT_ram_3004679e & 1;
}


/* NanoCore 1.10, address 0x4002c46e.
 * REA evidence: ev_60848f6747c9dc7f11253a943d05557f425375e9023f6c7a06830189a56752e0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002c46e(void)

{
  return (DAT_ram_3004679e & 3) >> 1;
}


/* NanoCore 1.10, address 0x4002c47c.
 * REA evidence: ev_b24db9bea7871d9bcac561c536813655cd8924e933edcab6efd1730d486b603a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002c47c(void)

{
  return (DAT_ram_3004679e & 7) >> 2;
}


/* NanoCore 1.10, address 0x4002c48a.
 * REA evidence: ev_f10ba2cc4cc6b8d2ace1a905a542b4d6439f5d34c29b1d8c17755ddd77ac1509
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002c48a(void)

{
  return (DAT_ram_3004679e & 0x3f) >> 5;
}


/* NanoCore 1.10, address 0x4002c498.
 * REA evidence: ev_82132b560f6f5e9995020106dbff39dcf15e2e320f4cb73ac63cb7cb3c2a6309
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002c498(void)

{
  return (DAT_ram_3004679e & 0x7f) >> 6;
}


/* NanoCore 1.10, address 0x4002c4a6.
 * REA evidence: ev_f10d41f39ac21e9da8d3ba5f64b06c9e4ae462ddeee5be4951ae1266e60a2559
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002c4a6(void)

{
  return (DAT_ram_3004679e & 0xf) >> 3;
}


/* NanoCore 1.10, address 0x4002c4b4.
 * REA evidence: ev_6e47cc9342ee15e61eff2e3b1d8b7a454c571cab39eb6ef92fed27ccec95fff4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002c4b4(void)

{
  return (DAT_ram_3004679e & 0x1f) >> 4;
}


/* NanoCore 1.10, address 0x4002c4c2.
 * REA evidence: ev_c95b24ca854cbb7a4d05b737a4432fe1b22ffe4068e9dfefd88b1c43c283f0bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002c4c2(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bStack_4c;
  byte bStack_4b;
  byte bStack_4a;
  byte bStack_49;
  byte bStack_48;
  byte bStack_47;
  int iStack_44;
  short sStack_40;
  ushort uStack_3e;
  int iStack_3c;
  uint uStack_38;
  
  iVar3 = 0;
  do {
    *(undefined1 *)(iVar3 + 0x30079a34) = 1;
    *(undefined1 *)(iVar3 + 0x30079a2c) = 0;
    *(undefined4 *)(iVar3 * 4 + 0x30079a0c) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  iVar3 = FUN_ram_4002ba66(&DAT_ram_40094f70,&iStack_3c);
  if ((((iVar3 == 0) && (7 < uStack_38)) &&
      (iVar3 = FUN_ram_4002b9e8(iStack_3c + 0x10,&iStack_44,8), iVar3 == 0)) &&
     ((iStack_44 == 0x31474250 && (sStack_40 == 1)))) {
    if ((uint)uStack_3e * 6 + 8 <= uStack_38) {
      uVar4 = 0;
      iVar3 = iStack_3c + 0x18;
      while ((uVar4 < uStack_3e && (iVar1 = FUN_ram_4002b9e8(iVar3,&bStack_4c,6), iVar1 == 0))) {
        uVar2 = (uint)bStack_4c;
        if ((uVar2 < 8) && (bStack_4b < 2)) {
          *(byte *)(uVar2 + 0x30079a34) = bStack_4b;
          if ((bStack_4a & 1) == 0) {
            *(undefined1 *)(uVar2 + 0x30079a2c) = 0;
            *(undefined4 *)(uVar2 * 4 + 0x30079a0c) = 0;
          }
          else {
            *(undefined1 *)(uVar2 + 0x30079a2c) = 1;
            *(uint *)(uVar2 * 4 + 0x30079a0c) =
                 (uint)bStack_49 << 0x10 | (uint)bStack_48 << 8 | (uint)bStack_47;
          }
        }
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 6;
      }
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4002c5cc.
 * REA evidence: ev_d0dddca1814cd364aa8f8afa6839a76ae4d37aea1bfe9ad70529bc3214efc4c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002c5cc(uint param_1)

{
  if (param_1 < 8) {
    return *(char *)(param_1 + 0x30079a34) == '\x01';
  }
  return true;
}


/* NanoCore 1.10, address 0x4002c5ea.
 * REA evidence: ev_5f4c7aedfdccca90e305987c7b66df11a49022201a9166d538906a7cd92e3787
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002c5ea(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((param_2 != (undefined4 *)0x0) && (uVar1 = 0, param_1 < 8)) &&
     (uVar1 = 0, *(char *)(param_1 + 0x30079a2c) != '\0')) {
    *param_2 = *(undefined4 *)(param_1 * 4 + 0x30079a0c);
    uVar1 = 1;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4002c61a.
 * REA evidence: ev_9da92dc04c1b78a889a10f634af1eafdf93af9b06ba581aa2923a2101bd32e7c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002c61a(void)

{
  if (_DAT_ram_30079a3c != 0) {
    FUN_ram_4002c3f4();
    _DAT_ram_30079a3c = 0;
  }
  if (_DAT_ram_30079a48 != 0) {
    FUN_ram_4002c3f4();
    _DAT_ram_30079a48 = 0;
  }
  _DAT_ram_30079a40 = 0;
  return;
}


/* NanoCore 1.10, address 0x4002c658.
 * REA evidence: ev_171a9c2cf3fb665b05b13ed544c10cec66b0e02e6fdac442842f0d11ee6ff641
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002c658(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  void *__dest;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iStack_2c;
  uint uStack_28;
  
  FUN_ram_4002c61a();
  iVar4 = FUN_ram_4002ba66(&DAT_ram_40094f74,&iStack_2c);
  if (((iVar4 == 0) && (7 < uStack_28)) &&
     (piVar5 = (int *)FUN_ram_4002c39e(uStack_28), piVar5 != (int *)0x0)) {
    iVar4 = FUN_ram_4002b9e8(iStack_2c + 0x10,piVar5,uStack_28);
    uVar1 = _DAT_ram_30079a40;
    if (((iVar4 == 0) && (*piVar5 == 0x32525453)) && ((short)piVar5[1] == 1)) {
      uVar2 = *(ushort *)((int)piVar5 + 6);
      uVar3 = (uint)uVar2;
      if ((uVar3 - 1 & 0xffff) < 0x100) {
        iVar4 = 0;
        uVar8 = 8;
        for (uVar6 = 0; uVar6 < uVar3; uVar6 = uVar6 + 1) {
          if (uStack_28 < uVar8 + 4) goto LAB_ram_4002c6a0;
          uVar9 = (uint)*(ushort *)((int)piVar5 + uVar8 + 2);
          uVar8 = uVar8 + 4 + uVar9;
          if (uStack_28 < uVar8) goto LAB_ram_4002c6a0;
          iVar4 = iVar4 + uVar9 + 1;
        }
        _DAT_ram_30079a3c = FUN_ram_4002c3ba(uVar3,8);
        __dest = (void *)FUN_ram_4002c39e(iVar4);
        _DAT_ram_30079a48 = __dest;
        if ((_DAT_ram_30079a3c == 0) || (__dest == (void *)0x0)) {
          FUN_ram_4002c3f4(piVar5);
          FUN_ram_4002c61a();
          return;
        }
        uVar6 = 0;
        iVar4 = 8;
        do {
          uVar1 = *(ushort *)((int)piVar5 + iVar4 + 2);
          iVar7 = _DAT_ram_30079a3c + uVar6 * 8;
          *(ushort *)(_DAT_ram_30079a3c + uVar6 * 8) =
               CONCAT11(*(undefined1 *)((int)piVar5 + iVar4 + 1),
                        *(undefined1 *)((int)piVar5 + iVar4));
          uVar8 = (uint)uVar1;
          *(void **)(iVar7 + 4) = __dest;
          if (uVar8 != 0) {
            memcpy(__dest,(void *)((int)piVar5 + iVar4 + 4),uVar8);
          }
          *(undefined1 *)((int)__dest + uVar8) = 0;
          uVar6 = uVar6 + 1;
          __dest = (void *)((int)__dest + uVar8 + 1);
          iVar4 = iVar4 + 4 + uVar8;
          uVar1 = uVar2;
        } while (uVar3 != uVar6);
      }
    }
LAB_ram_4002c6a0:
    _DAT_ram_30079a40 = uVar1;
    FUN_ram_4002c3f4(piVar5);
  }
  return;
}


/* NanoCore 1.10, address 0x4002c7dc.
 * REA evidence: ev_e24bdf8ee153f814302158a33f97fb259a8a1d4b99bb78e2a3e1995b7d085f7f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_ram_4002c7dc(uint param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    return s_ep__02x_clear_halt_ram_40092960 + 0x14;
  }
  if ((_DAT_ram_30079a44 == (code *)0x0) ||
     (pcVar3 = (char *)(*_DAT_ram_30079a44)(), pcVar3 == (char *)0x0)) {
    if (_DAT_ram_30079a3c != 0) {
      uVar2 = 0;
      do {
        if ((uint)_DAT_ram_30079a40 <= (uVar2 & 0xffff)) goto LAB_ram_4002c7fa;
        iVar1 = uVar2 * 8;
        uVar2 = uVar2 + 1;
      } while (*(ushort *)(_DAT_ram_30079a3c + -8 + uVar2 * 8) != param_1);
      pcVar3 = *(char **)(_DAT_ram_30079a3c + iVar1 + 4);
      if (pcVar3 != (char *)0x0) {
        return pcVar3;
      }
    }
LAB_ram_4002c7fa:
    uVar2 = param_1 - 1 & 0xffff;
    if ((0xa0 < uVar2) ||
       (pcVar3 = *(char **)(&DAT_ram_4009518c + uVar2 * 4), pcVar3 == (char *)0x0)) {
      pcVar3 = s_ep__02x_clear_halt_ram_40092960 + 0x14;
    }
  }
  return pcVar3;
}


/* NanoCore 1.10, address 0x4002c860.
 * REA evidence: ev_53839bc1beb518ac8493efd2408e9e0d6cd83645dae23d327cf28825927c69ef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_4002c860(char *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (param_1 == (char *)0x0) {
    return s_ep__02x_clear_halt_ram_40092960 + 0x14;
  }
  iVar1 = FUN_ram_4000522c(param_1,&DAT_ram_40093228);
  if (iVar1 == 0) {
    uVar3 = 0xe;
  }
  else {
    iVar1 = FUN_ram_4000522c(param_1,&DAT_ram_4009322c);
    uVar3 = 0xf;
    if (iVar1 != 0) {
      iVar1 = FUN_ram_4000522c(param_1,&DAT_ram_40093dc4);
      uVar3 = 0x10;
      if (iVar1 != 0) {
        iVar1 = FUN_ram_4000522c(param_1,&DAT_ram_40093230);
        uVar3 = 0x11;
        if (iVar1 != 0) {
          iVar1 = FUN_ram_4000522c(param_1,s_delay_ram_40093234);
          uVar3 = 0x12;
          if (iVar1 != 0) {
            iVar1 = FUN_ram_4000522c(param_1,&DAT_ram_4009323c);
            uVar3 = 0x13;
            if (iVar1 != 0) {
              iVar1 = FUN_ram_4000522c(param_1,s_reverb_ram_40093240);
              uVar3 = 0x14;
              if (iVar1 != 0) {
                iVar1 = FUN_ram_4000522c(param_1,&DAT_ram_40093248);
                uVar3 = 0x15;
                if (iVar1 != 0) {
                  return param_1;
                }
              }
            }
          }
        }
      }
    }
  }
  pcVar2 = (char *)FUN_ram_4002c7dc(uVar3);
  return pcVar2;
}


/* NanoCore 1.10, address 0x4002c918.
 * REA evidence: ev_9481c8cb4e0b8eb7e4f016e08450e5283896f3770d98a61244fe5b088eeaa78d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002c918(undefined1 *param_1,uint param_2,byte *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if ((((param_1 == (undefined1 *)0x0) || (param_2 == 0)) || (*param_1 = 0, param_3 == (byte *)0x0))
     || (param_4 == 0)) {
    uVar3 = 0;
  }
  else {
    iVar2 = 0;
    uVar3 = 0;
    while( true ) {
      bVar1 = *param_3;
      if ((bVar1 == 0) || (iVar2 == param_4)) break;
      iVar4 = 1;
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0xe0) == 0xc0) {
          iVar4 = 2;
        }
        else if ((bVar1 & 0xf0) == 0xe0) {
          iVar4 = 3;
        }
        else {
          if ((bVar1 & 0xf8) != 0xf0) goto LAB_ram_4002c98c;
          iVar4 = 4;
        }
        iVar5 = 1;
        do {
          if ((param_3[iVar5] == 0) || ((param_3[iVar5] & 0xc0) != 0x80)) {
            iVar4 = 1;
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != iVar4);
      }
LAB_ram_4002c98c:
      if (param_2 <= uVar3 + iVar4) break;
      for (iVar5 = 0; iVar4 != iVar5; iVar5 = iVar5 + 1) {
        param_1[iVar5 + uVar3] = param_3[iVar5];
      }
      param_3 = param_3 + iVar4;
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 + iVar4;
    }
    param_1[uVar3] = 0;
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x4002c9ee.
 * REA evidence: ev_d0287accf7bb40d7fdb7c1d49a1d9d8c010aa6f33db80137bc5a9cfb8822a40f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002c9ee(int param_1)

{
  FUN_ram_400002f4();
  DAT_ram_30079a50 = param_1 == 0;
  DAT_ram_30079a4e = 0;
  DAT_ram_30079a4f = 0;
  DAT_ram_30079a4d = 0;
  FUN_ram_400002fa();
  FUN_ram_4002ac26(param_1 != 0);
  return;
}


/* NanoCore 1.10, address 0x4002ca30.
 * REA evidence: ev_3da1fbc1a9934611ebe916c2362591767a667f0fcc7a874b58b9e90b6c308f3f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002ca30(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002206a();
  FUN_ram_4002c9ee(iVar1 != 0);
  return;
}


/* NanoCore 1.10, address 0x4002ca44.
 * REA evidence: ev_1f56c079c0411863cbff41fc746b4324f3b3b0c230fd72c2ece0215733da57cc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002ca44(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 uStack_91;
  undefined1 auStack_90 [48];
  char cStack_60;
  char cStack_5f;
  byte bStack_5e;
  char acStack_5d [57];
  
  iVar2 = 100;
  do {
    iVar4 = FUN_ram_4002a1c6();
    cVar1 = DAT_ram_30079a51;
    if (iVar4 != 0) {
      uStack_91 = 0x12;
      if (DAT_ram_30079a51 == '\0') goto LAB_ram_4002caec;
      DAT_ram_30079a4c = 0;
      iVar2 = 0;
      goto LAB_ram_4002ca8c;
    }
    iVar2 = iVar2 + -1;
    FUN_ram_400065d4(0x32);
  } while (iVar2 != 0);
  if (DAT_ram_30079a51 == '\0') goto LAB_ram_4002caec;
  goto LAB_ram_4002cb1a;
  while( true ) {
    if (iVar2 != 2) {
      FUN_ram_400065d4(1000);
    }
    iVar2 = iVar2 + 1;
    if (iVar2 == 3) break;
LAB_ram_4002ca8c:
    uVar5 = FUN_ram_4002a6a2(&uStack_91,1,&cStack_60,0x30,0xfa);
    if ((((3 < uVar5) && (cStack_60 == '\x13')) && (uVar3 = (uint)bStack_5e, uVar3 < 0x2d)) &&
       ((uVar5 == uVar3 + 4 && (acStack_5d[uVar3] == '\0')))) {
      puVar6 = auStack_90;
      if (uVar3 != 0) {
        puVar6 = (undefined1 *)FUN_ram_4000305c(puVar6,acStack_5d,uVar3);
      }
      puVar6[uVar3] = 0;
      if (cStack_5f == cVar1) {
        DAT_ram_30079a4c = 1;
      }
      else {
        DAT_ram_30079a4c = 3;
      }
      goto LAB_ram_4002caec;
    }
  }
LAB_ram_4002cb1a:
  DAT_ram_30079a4c = 2;
LAB_ram_4002caec:
  FUN_ram_4002ca30();
  return;
}


/* NanoCore 1.10, address 0x4002cb3e.
 * REA evidence: ev_b393e879032becb8545b524e3f8e55bf6181eb0364c9d0693065f1ec60722356
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002cb3e(void)

{
  FUN_ram_4002c9ee(0);
  FUN_ram_400065d4(0x14);
  FUN_ram_4002c9ee(0);
  return;
}


/* NanoCore 1.10, address 0x4002cb58.
 * REA evidence: ev_640917b5f14f39ae568b6c1fff0d61c0e60132aee4ee0465f37a22f5ca424fdd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002cb58(undefined1 param_1)

{
  DAT_ram_30079a51 = param_1;
  DAT_ram_30079a4c = 0;
  return;
}


/* NanoCore 1.10, address 0x4002cb6a.
 * REA evidence: ev_b36d351ce36026dbedaa5d4e80a28568f3e8f7a12f3a2f6153049e794496a89f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4002cb6a(void)

{
  return DAT_ram_30079a4c;
}


/* NanoCore 1.10, address 0x4002cb74.
 * REA evidence: ev_ff470d360f9497b3752a3a9fd4f7deeade63b47a54e0306bda458994eb8be1af
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool thunk_FUN_ram_4002206a(void)

{
  return DAT_ram_3006a520 != '\0';
}


/* NanoCore 1.10, address 0x4002cb78.
 * REA evidence: ev_5da0555f93a4134b85c30f9a3762a885ea13787e75b5b89031426757651acaeb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002cb78(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_1 != 0);
  uVar2 = FUN_ram_4002206a();
  if (uVar1 != uVar2) {
    FUN_ram_40022078(uVar1);
    FUN_ram_4002c9ee(uVar1);
  }
  return 0;
}


/* NanoCore 1.10, address 0x4002cba0.
 * REA evidence: ev_42eb4ef4118fd1e03a7a379fe9ce0e14e59b842b74cce54b82139177d7379032
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002cba0(void)

{
  return DAT_ram_30079a4e != '\0';
}


/* NanoCore 1.10, address 0x4002cbae.
 * REA evidence: ev_028c60a58b755ddb10d13ee18a727d0a348f0a02c4ec78964453b2f4eeea304a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002cbae(char *param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if ((3 < param_2) && (*param_1 == '\x14')) {
    cVar1 = param_1[1];
    cVar2 = param_1[2];
    cVar3 = param_1[3];
    FUN_ram_400002f4(0);
    DAT_ram_30079a50 = 1;
    DAT_ram_30079a4e = cVar1 != '\0';
    DAT_ram_30079a4d = cVar3;
    DAT_ram_30079a4f = cVar2;
    FUN_ram_400002fa();
    return 1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4002cc48.
 * REA evidence: ev_1d4f09abd6df0ca81e84ad552893f268c2a2cfcb88444568361ab3e8f8cd0b6b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002cc48(undefined4 param_1,undefined4 param_2)

{
  undefined1 uStack_39;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [44];
  
  uStack_39 = 1;
  uStack_38 = 0;
  uStack_34 = 0;
  if (_DAT_ram_30079a74 != 0) {
    FUN_ram_400236da(_DAT_ram_30079a74,param_1,param_2,auStack_30,0x20,&uStack_38,&uStack_34,
                     &uStack_39);
  }
  return;
}


/* NanoCore 1.10, address 0x4002cc82.
 * REA evidence: ev_bd7e717d3c389523c8012a6a765c8755f0504f81ec741ac38c29841a6ff37274
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002cc82(uint param_1,undefined1 param_2)

{
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  
  if (param_1 < 8) {
    uStack_13 = (undefined1)param_1;
    uStack_14 = 3;
    uStack_12 = param_2;
    FUN_ram_4002cc48(&uStack_14,3);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002ccaa.
 * REA evidence: ev_2cbefad0ebf96d09e16d50dbcfeafd8f1f81841ecf0e82d558f49373a01ccdba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002ccaa(uint param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  
  if (param_1 < 8) {
    iVar1 = FUN_ram_40024fe8();
    if (-1 < iVar1) {
      uStack_14 = 2;
      uStack_13 = (undefined1)param_1;
      uStack_12 = param_2;
      FUN_ram_4002cc48(&uStack_14,3);
    }
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002cce6.
 * REA evidence: ev_ee43d46fb69d438e876476ff6c19d7f4be905bd82e79f334e23dea9a04bbeac7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002cce6(float param_1,uint param_2,uint param_3)

{
  undefined4 in_register_00000100;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  
  uVar1 = 0;
  if (0.0 <= param_1) {
    uVar1 = in_register_00000100;
  }
  if ((param_2 < 8) && (param_3 < 0xc)) {
    uVar2 = FUN_ram_4002317e(param_2);
    uVar3 = FUN_ram_400262d0(param_2,uVar2,1);
    if (param_3 < uVar3) {
      uStack_18 = 1;
      uStack_15 = (undefined1)uVar1;
      uStack_14 = (undefined1)((uint)uVar1 >> 8);
      uStack_17 = (undefined1)param_2;
      uStack_16 = (undefined1)param_3;
      uStack_13 = (undefined1)((uint)uVar1 >> 0x10);
      uStack_12 = (undefined1)((uint)uVar1 >> 0x18);
      FUN_ram_4002cc48(&uStack_18,7);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4002cd76.
 * REA evidence: ev_63f4ace27c14722e9176d76f63203a5784e8ab07b305fbd64f0d7d5492397be9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002cd76(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = 2;
  while ((uVar3 = FUN_ram_400002f4(), iVar1 = _DAT_ram_30079a90, DAT_ram_300467a0 != -1 &&
         (DAT_ram_30079a94 == '\0'))) {
    DAT_ram_30079a94 = 1;
    FUN_ram_400002fa();
    iVar4 = FUN_ram_40049cd2(FUN_ram_4002cf2e,0);
    if (iVar4 == 1) {
      return;
    }
    uVar3 = FUN_ram_400002f4();
    DAT_ram_30079a94 = '\0';
    if ((DAT_ram_300467a0 == -1) || (iVar1 == _DAT_ram_30079a90)) break;
    FUN_ram_400002fa();
    if (iVar2 == 1) {
      return;
    }
    iVar2 = 1;
  }
  FUN_ram_400002fa(uVar3);
  return;
}


/* NanoCore 1.10, address 0x4002ce44.
 * REA evidence: ev_4a92006b620c1730c0033155e7f5524573d6837888d9ca0b760d1bad12b1f7c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002ce44(undefined1 param_1)

{
  FUN_ram_400002f4();
  _DAT_ram_30079a90 = _DAT_ram_30079a90 + 1;
  DAT_ram_300467a0 = param_1;
  FUN_ram_400002fa();
  FUN_ram_4002cd76();
  return;
}


/* NanoCore 1.10, address 0x4002ce74.
 * REA evidence: ev_5b0ea4095dd840eb8b69ef63dbf62f7fb7675ce5ebb89108cdab4bc139e954ad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002ce74(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte abStack_11 [5];
  
  uVar1 = (uint)DAT_ram_30079a88;
  if (((uVar1 != 0) && (_DAT_ram_30079a7c != (code *)0x0)) &&
     (iVar2 = (*_DAT_ram_30079a7c)(abStack_11), iVar2 == 0)) {
    uVar4 = (uint)abStack_11[0];
    if (uVar1 == 0) {
      uVar5 = 0xffffffff;
      uVar3 = 0xffffffff;
    }
    else {
      uVar5 = 0x3f / uVar1;
      uVar3 = uVar4 / uVar1;
    }
    if ((int)(uVar3 + param_1) < (int)uVar5) {
      uVar5 = uVar3 + param_1;
    }
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    uVar3 = uVar4;
    if (uVar1 != 0) {
      uVar3 = uVar4 % uVar1;
    }
    uVar3 = uVar3 + uVar5 * uVar1;
    if (0x3f < (int)uVar3) {
      uVar3 = 0x3f;
    }
    if (uVar3 != uVar4) {
      FUN_ram_4002ce44(uVar3 & 0xff);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4002cee2.
 * REA evidence: ev_e6adf8c74e0b8aa83eef449ca57b137665c3d7c67eba65509e56acd9eaeb0db2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002cee2(int param_1)

{
  int iVar1;
  uint uVar2;
  byte abStack_11 [9];
  
  if (_DAT_ram_30079a7c != (code *)0x0) {
    iVar1 = (*_DAT_ram_30079a7c)(abStack_11);
    if (iVar1 == 0) {
      uVar2 = (uint)abStack_11[0] + param_1;
      if ((int)uVar2 < 0x40) {
        if ((int)uVar2 < 0) {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0x3f;
      }
      if (abStack_11[0] != uVar2) {
        FUN_ram_4002ce44(uVar2 & 0xff);
      }
    }
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002cf2e.
 * REA evidence: ev_dc4d597481e646e7824f4218ec10c0aa1f1881f764d2beb1803c9e53b3d7c14f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002cf2e(void)

{
  char cVar1;
  
  FUN_ram_400002f4();
  cVar1 = DAT_ram_300467a0;
  DAT_ram_300467a0 = -1;
  FUN_ram_400002fa();
  if ((cVar1 != -1) && (_DAT_ram_30079a80 != (code *)0x0)) {
    (*_DAT_ram_30079a80)(cVar1);
  }
  FUN_ram_400002f4();
  cVar1 = DAT_ram_300467a0;
  DAT_ram_30079a94 = 0;
  FUN_ram_400002fa();
  if (cVar1 != -1) {
    FUN_ram_4002cd76();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002cfa0.
 * REA evidence: ev_0f4a9ae5737f6c5b0f6bcd6fae5894ca243fcbeeb28e772495751e5af3db5b6c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002cfa0(int param_1)

{
  if (param_1 == 0) {
    FUN_ram_4000505c(&DAT_ram_30079a74,0,0x18);
    return;
  }
  FUN_ram_4000305c(&DAT_ram_30079a74,param_1,0x18);
  return;
}


/* NanoCore 1.10, address 0x4002cfcc.
 * REA evidence: ev_a1850166ea82ea4270518fec0515639855ed2c1bf414305161188c77def6ca31
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002cfcc(void)

{
  FUN_ram_4000505c(0x30079a64,0,0x10);
  FUN_ram_4000505c(0x30079a54,0,0x10);
  DAT_ram_300467a0 = 0xff;
  DAT_ram_30079a94 = 0;
  _DAT_ram_30079a90 = 0;
  DAT_ram_30079a8c = 1;
  return;
}


