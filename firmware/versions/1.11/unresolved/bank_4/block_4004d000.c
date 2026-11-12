/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4004d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4004d010.
 * REA evidence: ev_c559f23f9677191fb0900c52903e769ffddc8538a174d8436f276aed3d065505
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d010(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_4004aed0();
  iVar2 = FUN_ram_4004aecc(param_1);
  if ((iVar1 == 0x33) && (*(int *)(iVar2 + 0x2f8) != 0)) {
    FUN_ram_4004c80c();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4004d04a.
 * REA evidence: ev_8adaafd1c9138f3410f11865463a3427fcc5af71b770f84dfacd93778cf95edc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_4004d04a(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)FUN_ram_4004b34e(0x30080c64);
  if (piVar2 != (int *)0x0) {
    thunk_FUN_ram_4000504c(piVar2,0,0x310);
    piVar2[2] = -1;
    piVar2[3] = -1;
    piVar2[6] = 0x82;
    *piVar2 = param_1;
    piVar2[1] = param_2;
    piVar2[4] = 0;
    piVar2[5] = 0;
    *(ushort *)(piVar2 + 0x10) = *(ushort *)(piVar2 + 0x10) & 0xfe | 0x1201;
    iVar3 = FUN_ram_4005ab2e(0x3c);
    piVar2[0xaa] = iVar3;
    if (iVar3 != 0) {
      if ((code *)piVar2[0xab] != (code *)0x0) {
        (*(code *)piVar2[0xab])(piVar2,iVar3);
      }
      iVar3 = piVar2[0xaa];
      *(int *)(iVar3 + 0xc) = param_1 + -1;
      *(int *)(iVar3 + 0x10) = param_2 + -1;
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined1 *)(iVar3 + 0x14) = *(undefined1 *)((int)piVar2 + 0x41);
      piVar2[0x9a] = 1;
      iVar3 = FUN_ram_40056c6c();
      piVar2[0xbf] = iVar3;
      FUN_ram_4004b33e(piVar2 + 0x9b,0x10);
      piVar1 = _DAT_ram_30080c74;
      _DAT_ram_30080c74 = piVar2;
      iVar3 = FUN_ram_4004c5b4(FUN_ram_400497d0,10,piVar2);
      piVar2[0xbe] = iVar3;
      if (iVar3 != 0) {
        iVar3 = FUN_ram_40043a8c(0);
        piVar2[0xb1] = iVar3;
        iVar3 = FUN_ram_40043a8c(0);
        piVar2[0xae] = iVar3;
        iVar3 = FUN_ram_40043a8c(0);
        piVar2[0xb2] = iVar3;
        iVar3 = FUN_ram_40043a8c(0);
        piVar2[0xb3] = iVar3;
        FUN_ram_400483d6(piVar2[0xb1]);
        FUN_ram_400483d6(piVar2[0xb2]);
        FUN_ram_400483d6(piVar2[0xb3]);
        FUN_ram_40043aac(piVar2[0xb2],2);
        FUN_ram_40043aac(piVar2[0xb3],2);
        FUN_ram_400464d0(piVar2[0xb1],0);
        FUN_ram_400464d0(piVar2[0xb2],0);
        FUN_ram_400464d0(piVar2[0xb3],0);
        FUN_ram_400454e4(piVar2[0xae]);
        _DAT_ram_30080c74 = piVar1;
        if (piVar1 == (int *)0x0) {
          _DAT_ram_30080c74 = piVar2;
        }
        FUN_ram_4004ae48(piVar2 + 0xb8,FUN_ram_4004d010,0x33,0);
        FUN_ram_4004c81e(piVar2[0xbe]);
        return piVar2;
      }
      FUN_ram_4005ab56(piVar2);
    }
  }
  return (int *)0x0;
}


/* NanoCore 1.11, address 0x4004d1be.
 * REA evidence: ev_4e00d78edcc7fc7209e597725ef0c0ad655516c2d9485ac2319739729b86a84c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d1be(void)

{
  return _DAT_ram_30080c74;
}


/* NanoCore 1.11, address 0x4004d1c8.
 * REA evidence: ev_f772818e68308f4266e04af7b0554c4e9ce9a2b55846e9f9b2523a4c50f1e84a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d1c8(int param_1)

{
  if (param_1 == 0) {
    FUN_ram_4004b518();
    return;
  }
  FUN_ram_4004b524(0x30080c64);
  return;
}


/* NanoCore 1.11, address 0x4004d1dc.
 * REA evidence: ev_1a48fa091ce0228b7bca00dd39ff64b2300dc153ba79b571fc0f554aec8b1dfc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d1dc(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = _DAT_ram_30080c74, _DAT_ram_30080c74 == (undefined4 *)0x0)) {
    return 0;
  }
  if (-1 < (int)(param_1[0xbc] << 0x1e)) {
    return *param_1;
  }
  return param_1[1];
}


/* NanoCore 1.11, address 0x4004d1fe.
 * REA evidence: ev_b2d49cec789bd3067399997cf3596585dc08f834809b5a9e1eafaa55e3bed779
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d1fe(undefined4 *param_1)

{
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = _DAT_ram_30080c74, _DAT_ram_30080c74 == (undefined4 *)0x0)) {
    return 0;
  }
  if (-1 < (int)(param_1[0xbc] << 0x1e)) {
    return param_1[1];
  }
  return *param_1;
}


/* NanoCore 1.11, address 0x4004d220.
 * REA evidence: ev_4a14d225ffff0a92c36d497cfdc4797db48d4168d7f5d93346273ce816925a44
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d220(int param_1)

{
  if ((param_1 == 0) && (param_1 = _DAT_ram_30080c74, _DAT_ram_30080c74 == 0)) {
    return 0x82;
  }
  return *(undefined4 *)(param_1 + 0x18);
}


/* NanoCore 1.11, address 0x4004d236.
 * REA evidence: ev_b1e28f4e420d4e31a5a1da3890eda68626c0d0f82c5aac9589077b35eacd6449
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004d236(int param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 != 0) || (param_1 = _DAT_ram_30080c74, _DAT_ram_30080c74 != 0)) {
    *(undefined4 *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x20) = param_3;
    *(undefined4 *)(param_1 + 0x24) = param_2;
  }
  return;
}


/* NanoCore 1.11, address 0x4004d24a.
 * REA evidence: ev_a9d627dc00fbe5477d0c5bc39fb9fe21bd964d7589e6ca21366d944be33f964a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004d24a(int param_1,undefined4 param_2)

{
  if ((param_1 != 0) || (param_1 = _DAT_ram_30080c74, _DAT_ram_30080c74 != 0)) {
    *(undefined4 *)(param_1 + 0x3c) = param_2;
  }
  return;
}


/* NanoCore 1.11, address 0x4004d25a.
 * REA evidence: ev_826ff5b4727106570ed0e048ef08c38eab7735677d47261840630f8d6f6d13fe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004d25a(int param_1,undefined4 param_2)

{
  if ((param_1 != 0) || (param_1 = _DAT_ram_30080c74, _DAT_ram_30080c74 != 0)) {
    *(undefined4 *)(param_1 + 0x28) = param_2;
  }
  return;
}


/* NanoCore 1.11, address 0x4004d26a.
 * REA evidence: ev_2e633b6c8796a9f9e1f2765a131c255c9f62a9e68f81fe0090559b53878bfec9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_ram_4004d26a(int param_1)

{
  if ((param_1 == 0) && (param_1 = _DAT_ram_30080c74, _DAT_ram_30080c74 == 0)) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x41);
}


/* NanoCore 1.11, address 0x4004d280.
 * REA evidence: ev_18245e5669f85e4b2aea7f7729888a67969301d3804a1f5bb6aa004b06aaa8af
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d280(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = FUN_ram_4004d26a();
  uVar3 = FUN_ram_4004d1dc(param_1);
  uVar4 = FUN_ram_4004d1fe(param_1);
  FUN_ram_4004da5e(param_2,uVar2);
  if (param_3 != 0) {
    FUN_ram_4004da5e(param_3,uVar2);
  }
  uVar5 = FUN_ram_4004d9f0(uVar3,uVar2);
  if (param_5 == 0) {
    if (uVar5 == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = param_4 / uVar5;
    }
  }
  FUN_ram_4004da6e(param_1 + 0x278,uVar3,uVar4,uVar2,uVar5,param_2,param_4);
  FUN_ram_4004da6e(param_1 + 0x290,uVar3,uVar4,uVar2,uVar5,param_3,param_4);
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = param_1 + 0x290;
  }
  FUN_ram_4004d236(param_1,param_1 + 0x278,iVar1);
  FUN_ram_4004d24a(param_1,param_5);
  return;
}


/* NanoCore 1.11, address 0x4004d330.
 * REA evidence: ev_91be0ba8c1cf0675a5ae526b50a317ff0b583f1b5d088d023932e2faff70e504
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d330(int param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


/* NanoCore 1.11, address 0x4004d336.
 * REA evidence: ev_588c768bb9ae4b1daaaaa423bd2e61447bf8f997fa22520568d6f7ec276ed2ed
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004d336(int param_1)

{
  return *(int *)(param_1 + 0x34) != 0;
}


/* NanoCore 1.11, address 0x4004d33e.
 * REA evidence: ev_db9536d7e86a337705435ce97ed2661eaf831e28b0451936993c7be76df4cc83
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004d33e(int param_1)

{
  return *(int *)(param_1 + 0x20) != 0;
}


/* NanoCore 1.11, address 0x4004d346.
 * REA evidence: ev_b2c2c8e6e983be2ade13e5a35d38191e0e9d1333e117a6108256dcdc851682bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d346(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_30080c74, _DAT_ram_30080c74 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x2b8);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4004d358.
 * REA evidence: ev_46280cb758dfa6d9681c6e4840e7b77a205542f916742b58aadcb94f72bbbe5b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d358(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_30080c74, _DAT_ram_30080c74 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 700);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4004d36a.
 * REA evidence: ev_2f8dcae24bab8fda30c0433aafdd99375a69d9c30c2a334e13251781a5322cd7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d36a(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_30080c74, _DAT_ram_30080c74 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x2c8);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4004d37c.
 * REA evidence: ev_a1692c7970e56ce5e1ddd3507d92cf20a238b28d321828554cd84e7ae5293ea1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d37c(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_30080c74, _DAT_ram_30080c74 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x2cc);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4004d38e.
 * REA evidence: ev_d3c802f6c60f22efb32c996998147453beb26fa50e9a8c9b679174ed7dc0d385
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d38e(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_30080c74, _DAT_ram_30080c74 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x2c4);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4004d3a0.
 * REA evidence: ev_8b5c671a001bba645064d98794eb27624ac64a411d0359ecb716ede2614c1a64
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d3a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  thunk_FUN_ram_4000504c(&iStack_2c,0,0x1c);
  iStack_2c = param_1;
  iStack_28 = param_1;
  uStack_24 = param_2;
  uStack_1c = param_3;
  iVar1 = FUN_ram_4004adc2(param_1 + 0x2e0,&iStack_2c,1);
  if (iVar1 == 1) {
    FUN_ram_4004adc2(param_1 + 0x2e0,&iStack_2c,0);
  }
  return;
}


/* NanoCore 1.11, address 0x4004d3ec.
 * REA evidence: ev_8419c3b93c8739aab036d2dad157d492a137a5185e4283a3af2de1b5f735f44b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004d3ec(int param_1,undefined1 param_2)

{
  if ((param_1 == 0) && (param_1 = _DAT_ram_30080c74, _DAT_ram_30080c74 == 0)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x41) = param_2;
  *(undefined1 *)(*(int *)(param_1 + 0x2a8) + 0x14) = param_2;
  FUN_ram_4004d3a0(param_1,0x32,0);
  return;
}


/* NanoCore 1.11, address 0x4004d410.
 * REA evidence: ev_c5d00e78245b2aecfc5f2664e59e7afc110cc695027b931ba32d65e99ecd53bd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4004d410(int param_1)

{
  if ((param_1 == 0) && (param_1 = _DAT_ram_30080c74, _DAT_ram_30080c74 == 0)) {
    return 0;
  }
  return (*(uint *)(param_1 + 0x2f0) & 7) >> 1;
}


/* NanoCore 1.11, address 0x4004d42a.
 * REA evidence: ev_af7ecc26fc6735bfeb1f9c72614e3658eceddc0636f900122395baaa1496c374
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d42a(int param_1)

{
  if (param_1 == 0) {
    param_1 = _DAT_ram_30080c74;
  }
  return *(undefined4 *)(param_1 + 0x2f4);
}


/* NanoCore 1.11, address 0x4004d43a.
 * REA evidence: ev_096c78523ca8aee4cfc374f5a9a8cb0159ff39ac1d1b46e0c41f59ea6cf0196e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004d43a(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != 0) || (param_1 = _DAT_ram_30080c74, _DAT_ram_30080c74 != 0)) {
    iVar1 = 1;
    if (param_2 == 0) {
      iVar1 = -1;
    }
    *(int *)(param_1 + 0x268) = *(int *)(param_1 + 0x268) + iVar1;
  }
  return;
}


/* NanoCore 1.11, address 0x4004d458.
 * REA evidence: ev_e61dfed4caaf0150e2534749b6b7d150fdb3b39f0dc7a08d5e79ba69f029f890
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4004d458(int param_1)

{
  if ((param_1 == 0) && (param_1 = _DAT_ram_30080c74, _DAT_ram_30080c74 == 0)) {
    return false;
  }
  return 0 < *(int *)(param_1 + 0x268);
}


/* NanoCore 1.11, address 0x4004d472.
 * REA evidence: ev_cce2857066e51f6ef89ecd5db4f79068a46234d8f9bc41290722270e881db542
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004d472(int param_1,undefined4 param_2)

{
  if ((param_1 != 0) || (param_1 = _DAT_ram_30080c74, _DAT_ram_30080c74 != 0)) {
    *(undefined4 *)(param_1 + 0x2dc) = param_2;
  }
  return;
}


/* NanoCore 1.11, address 0x4004d484.
 * REA evidence: ev_d3e9e238b40a82d59207de401f146369194834ef92b2f38d1fdbc45256c940c1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d484(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_30080c74, _DAT_ram_30080c74 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x2dc);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4004d496.
 * REA evidence: ev_d788ddac163543e6a2e2bab46a27df060f29a48643d309eccffe934872ae0b71
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d496(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) || (uVar1 = 0, param_1 = _DAT_ram_30080c74, _DAT_ram_30080c74 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4004d4a6.
 * REA evidence: ev_c2479629fe04743fb8b74cd16d46ed3d2ad8a9ec788d6c70fe6b42f3c042bf6b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d4a6(void)

{
  FUN_ram_4005aabc(0x30080d58);
  return;
}


/* NanoCore 1.11, address 0x4004d4b2.
 * REA evidence: ev_b4c5a4ac54bb279baabeb970b455bc7bf42e6cd534cde89d8b893b23fd09b35f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004d4b2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_ram_4005ab2e();
  *puVar1 = _DAT_ram_30080d50;
  _DAT_ram_30080d50 = puVar1;
  return;
}


/* NanoCore 1.11, address 0x4004d4d2.
 * REA evidence: ev_2091172cddaddb5714eb086569420ff59c882ee14270f3dd5301ef38cdaaaef5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004d4d2(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = FUN_ram_4005ab2e(0x54);
  FUN_ram_4000304c(iVar1 + 8,param_2,0x10);
  FUN_ram_4000304c(iVar1 + 0x18,param_2,0x10);
  FUN_ram_4000304c(iVar1 + 0x38,param_1 + 0x18,0x10);
  *(undefined4 *)(iVar1 + 0x48) = 1;
  piVar3 = *(int **)(param_1 + 0x28);
  if (*(int **)(param_1 + 0x28) == (int *)0x0) {
    *(int *)(param_1 + 0x28) = iVar1;
  }
  else {
    do {
      piVar2 = piVar3;
      piVar3 = (int *)*piVar2;
    } while (piVar3 != (int *)0x0);
    *piVar2 = iVar1;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4004d52c.
 * REA evidence: ev_0f7e6510ce8c7025a9d00c5d346b4c80509f707f14d4570e93c79a9385a0dc8b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d52c(void)

{
  FUN_ram_4005aae2(0x30080d58);
  return;
}


/* NanoCore 1.11, address 0x4004d538.
 * REA evidence: ev_e9cd2ed0844711c4f2e8c5035e19f4bd2572b38f58cb9e7eb995adde5a06f104
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d538(void)

{
  FUN_ram_4005aaf8(0x30080d58);
  return;
}


/* NanoCore 1.11, address 0x4004d544.
 * REA evidence: ev_e0346ec87c82f7e69ab5c788d3f546b0c94fb7e69a475f7ea90439130f01fefe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d544(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  
  piVar9 = (int *)*(int *)(param_2 + 0x28);
  piVar3 = (int *)0x0;
  while (piVar12 = piVar3, piVar3 = piVar9, piVar3 != (int *)0x0) {
    piVar9 = (int *)*piVar3;
    if (piVar3[0x12] == 3) {
      if (piVar12 == (int *)0x0) {
        *(int **)(param_2 + 0x28) = piVar9;
      }
      else {
        *piVar12 = (int)piVar9;
      }
      if (piVar3[1] == 5) {
        piVar2 = *(int **)(piVar3[0x13] + 0x1c);
        if (*piVar2 != 0) {
          iVar11 = piVar2[2];
          iVar7 = piVar2[4];
          iVar5 = FUN_ram_4004d9f0((piVar2[3] - piVar2[1]) + 1,(char)piVar2[5]);
          uVar6 = ((iVar7 - iVar11) + 1) * iVar5;
          uVar8 = 1;
          if (0x3ff < uVar6) {
            uVar8 = uVar6 >> 10;
          }
          _DAT_ram_30080d54 = _DAT_ram_30080d54 - uVar8;
          FUN_ram_4004dc4e(*piVar2);
          *piVar2 = 0;
        }
        if (param_1 != 0) {
          piVar1 = *(int **)(param_1 + 0x2a8);
          do {
            piVar10 = piVar1;
            if (piVar10 == (int *)0x0) goto LAB_ram_4004d642;
            piVar1 = (int *)piVar10[0xc];
          } while ((int *)piVar10[0xc] != piVar2);
          piVar10[0xc] = piVar2[0xc];
LAB_ram_4004d642:
          if (*(code **)(param_1 + 0x2b0) != (code *)0x0) {
            (**(code **)(param_1 + 0x2b0))(param_1,piVar2);
          }
          FUN_ram_4005ab56(piVar2);
        }
      }
      iVar7 = FUN_ram_4004e760(piVar3);
      if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x4c) & 0x40) != 0)) {
        FUN_ram_4005ab56(*(undefined4 *)(iVar7 + 0x1c));
        *(undefined4 *)(iVar7 + 0x1c) = 0;
      }
      FUN_ram_4005ab56(piVar3[0x13]);
      FUN_ram_4005ab56(piVar3);
      piVar3 = piVar12;
    }
  }
  if (((*(int *)(param_2 + 0x2c) == 0) || (*(char *)(param_2 + 0x34) == '\0')) ||
     (*(int *)(param_2 + 0x28) != 0)) {
    uVar4 = 0;
    for (piVar9 = (int *)_DAT_ram_30080d50; piVar9 != (int *)0x0; piVar9 = (int *)*piVar9) {
      iVar7 = (*(code *)piVar9[3])(piVar9,param_2);
      if (-1 < iVar7) {
        uVar4 = 1;
      }
    }
  }
  else {
    for (piVar9 = *(int **)(*(int *)(param_2 + 0x2c) + 0x28); piVar9 != (int *)0x0;
        piVar9 = (int *)*piVar9) {
      if (((piVar9[1] == 5) && (piVar9[0x12] == 0)) && (*(int *)(piVar9[0x13] + 0x1c) == param_2)) {
        piVar9[0x12] = 1;
        FUN_ram_4004d538();
        break;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}


/* NanoCore 1.11, address 0x4004d6b4.
 * REA evidence: ev_fcd5ea06675d73fc501392d827f98cf613827ba729c3fa51a4b4fe70d8d6ee9e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d6b4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_ram_4004d1c8(0);
  iVar4 = 0;
  for (; iVar2 != 0; iVar2 = FUN_ram_4004d1c8(iVar2)) {
    for (iVar1 = *(int *)(iVar2 + 0x2a8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x30)) {
      iVar3 = FUN_ram_4004d544(iVar2,iVar1);
      if (iVar3 != 0) {
        iVar4 = iVar3;
      }
    }
    if (iVar4 == 0) {
      FUN_ram_4004d538();
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4004d6fe.
 * REA evidence: ev_6d06aaeebaecd7851f150ced3d7dc03870706b405b81e66967ea5e58c58253ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004d6fe(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  cVar1 = DAT_ram_30080d60;
  piVar3 = *(int **)(param_2 + 0x4c);
  piVar3[4] = param_1;
  if (cVar1 == '\0') {
    if ((*piVar3 != 0) && (iVar2 = FUN_ram_40043b92(*piVar3,0x80000), iVar2 != 0)) {
      DAT_ram_30080d60 = 1;
      FUN_ram_40044b50(*piVar3,0x1d,param_2);
      DAT_ram_30080d60 = '\0';
    }
    *(undefined2 *)(param_2 + 0x50) = 0x6400;
    for (piVar3 = (int *)_DAT_ram_30080d50; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
      if ((code *)piVar3[4] != (code *)0x0) {
        (*(code *)piVar3[4])(piVar3,param_2);
      }
    }
    FUN_ram_4004d6b4();
    return;
  }
  *(undefined2 *)(param_2 + 0x50) = 0x6400;
  for (piVar3 = (int *)_DAT_ram_30080d50; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
    if ((code *)piVar3[4] != (code *)0x0) {
      (*(code *)piVar3[4])(piVar3,param_2);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4004d7a0.
 * REA evidence: ev_5949c15301792913595aa7b2f226b859693c525acff928633eaf8110d508e09f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004d7a0(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_ram_400497c6();
    iVar1 = FUN_ram_4004d1dc();
    FUN_ram_400497c6();
    iVar2 = FUN_ram_4004d1fe();
    iVar5 = *(int *)(param_1 + 0x28);
    if ((((*(int *)(iVar5 + 0x48) != 1) && (*(int *)(iVar5 + 8) < 1)) &&
        (iVar1 + -1 <= *(int *)(iVar5 + 0x10))) &&
       ((*(int *)(iVar5 + 0xc) < 1 && (iVar2 + -1 <= *(int *)(iVar5 + 0x14))))) {
      return 0;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    piVar4 = *(int **)(param_1 + 0x28);
  }
  else {
    piVar4 = (int *)*param_2;
  }
  while( true ) {
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    if ((piVar4[0x12] == 1) &&
       ((*(byte *)(piVar4 + 0x14) == 0 || (*(byte *)(piVar4 + 0x14) == param_3)))) break;
LAB_ram_4004d86c:
    piVar4 = (int *)*piVar4;
  }
  piVar3 = *(int **)(param_1 + 0x28);
  do {
    if (piVar3 == (int *)0x0) {
      return (int)piVar4;
    }
    if (piVar4 == piVar3) {
      return (int)piVar3;
    }
    if (piVar3[0x12] != 3) {
      iVar1 = piVar4[6];
      if (piVar4[6] < piVar3[6]) {
        iVar1 = piVar3[6];
      }
      iVar2 = piVar4[8];
      if (piVar3[8] < piVar4[8]) {
        iVar2 = piVar3[8];
      }
      if (iVar1 + -0x10 <= iVar2 + 0x10) {
        iVar1 = piVar4[7];
        if (piVar4[7] < piVar3[7]) {
          iVar1 = piVar3[7];
        }
        iVar2 = piVar4[9];
        if (piVar3[9] < piVar4[9]) {
          iVar2 = piVar3[9];
        }
        if (iVar1 <= iVar2) goto LAB_ram_4004d86c;
      }
    }
    piVar3 = (int *)*piVar3;
  } while( true );
}


/* NanoCore 1.11, address 0x4004d874.
 * REA evidence: ev_4eb8aab28449a273139b4f98146902d50a3137212af4005aa23d1283a8ea1388
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004d874(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_400497c6();
  iVar2 = FUN_ram_4005ab2e(0x3c);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x2c) = param_1;
    FUN_ram_4000304c(iVar2 + 0x18,param_3,0x10);
    FUN_ram_4000304c(iVar2 + 4,param_3,0x10);
    *(undefined1 *)(iVar2 + 0x14) = param_2;
    iVar3 = *(int *)(iVar1 + 0x2a8);
    if (*(int *)(iVar1 + 0x2a8) == 0) {
      *(int *)(iVar1 + 0x2a8) = iVar2;
    }
    else {
      do {
        iVar1 = iVar3;
        iVar3 = *(int *)(iVar1 + 0x30);
      } while (iVar3 != 0);
      *(int *)(iVar1 + 0x30) = iVar2;
    }
  }
  return iVar2;
}


/* NanoCore 1.11, address 0x4004d8de.
 * REA evidence: ev_0902acf095c2dd05348b82a2b8f50c378aa08961e92c7a87e83fc87cf108b5ba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d8de(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x10);
  }
  iVar5 = param_1[2];
  iVar6 = param_1[4];
  iVar1 = (param_1[3] - param_1[1]) + 1;
  iVar2 = FUN_ram_4004d9f0(iVar1,(char)param_1[5]);
  iVar5 = (iVar6 - iVar5) + 1;
  uVar7 = iVar2 * iVar5;
  iVar1 = FUN_ram_4004daf8(iVar1,iVar5,(char)param_1[5],0);
  *param_1 = iVar1;
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar4 = 1;
    if (0x3ff < uVar7) {
      uVar4 = uVar7 >> 10;
    }
    _DAT_ram_30080d54 = _DAT_ram_30080d54 + uVar4;
    iVar1 = FUN_ram_4004ad1e((char)param_1[5]);
    if (iVar1 != 0) {
      FUN_ram_4004dcda(*param_1,0);
    }
    uVar3 = *(undefined4 *)(*param_1 + 0x10);
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x4004d8e6.
 * REA evidence: ev_99a68511fe1f489c2d7ae5165bfb903155735d8a01c0196daed8a2cc2c39bd91
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d8e6(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar5 = param_1[2];
  iVar6 = param_1[4];
  iVar1 = (param_1[3] - param_1[1]) + 1;
  iVar2 = FUN_ram_4004d9f0(iVar1,(char)param_1[5]);
  iVar5 = (iVar6 - iVar5) + 1;
  uVar7 = iVar2 * iVar5;
  iVar1 = FUN_ram_4004daf8(iVar1,iVar5,(char)param_1[5],0);
  *param_1 = iVar1;
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar4 = 1;
    if (0x3ff < uVar7) {
      uVar4 = uVar7 >> 10;
    }
    _DAT_ram_30080d54 = _DAT_ram_30080d54 + uVar4;
    iVar1 = FUN_ram_4004ad1e((char)param_1[5]);
    if (iVar1 != 0) {
      FUN_ram_4004dcda(*param_1,0);
    }
    uVar3 = *(undefined4 *)(*param_1 + 0x10);
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x4004d966.
 * REA evidence: ev_60da4e99f3926d0cac9b45fb577e8c639c44ca172363e727030355018f40e3d3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004d966(undefined4 *param_1)

{
  FUN_ram_4004dc7c(*param_1);
  return;
}


/* NanoCore 1.11, address 0x4004d972.
 * REA evidence: ev_0103bec30f58ba975e2768a80721a8621c2cc0a1457bfab25ef81f166bfad124
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004d972(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004ad00(param_2);
  return (iVar1 * param_1 + 7U >> 3) + 7 & 0xfffffff8;
}


/* NanoCore 1.11, address 0x4004d99e.
 * REA evidence: ev_46d8ac5cf1711e382ff35886a2bd9239308580e3c79677f3b4380bf001fac59e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004d99e(void)

{
  thunk_FUN_ram_4000504c(&DAT_ram_30080d28,0,0x14);
  _DAT_ram_30080d28 = &LAB_ram_4004d998;
  _DAT_ram_30080d2c = &LAB_ram_4004d994;
  _DAT_ram_30080d30 = &LAB_ram_4004d96a;
  _DAT_ram_30080d34 = 0;
  _DAT_ram_30080d38 = FUN_ram_4004d972;
  return;
}


/* NanoCore 1.11, address 0x4004d9f0.
 * REA evidence: ev_9dae1a8a2343653c7599831d5dad515475ce913dadda20f18d61fbec3b1ae203
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004d9f0(void)

{
  undefined4 uVar1;
  
  if (_DAT_ram_30080d38 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4004d9fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_ram_30080d38)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004da00.
 * REA evidence: ev_29c171508426cee73fb2cbe3d22a965a8d0b3ae34e172b0afe7f4dee05426057
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004da00(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 == 0) {
    param_4 = FUN_ram_4004d9f0(param_1,param_3);
  }
  iVar1 = param_4 * param_2;
  if (param_3 == 0x14) {
    iVar1 = iVar1 + (param_4 >> 1) * param_2;
  }
  else if ((param_3 - 7U & 0xff) < 4) {
    iVar2 = 8;
    if (((param_3 != 7) && (iVar2 = 0x10, param_3 != 8)) && (iVar2 = 0x40, param_3 != 9)) {
      iVar2 = 0x400;
    }
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4004da5e.
 * REA evidence: ev_2a8221a852d7776b86303cd06e7959fb63859351bc442ea183bbb1085c272616
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004da5e(void)

{
  undefined4 uVar1;
  
  if (_DAT_ram_30080d30 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4004da68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_DAT_ram_30080d30)();
    return uVar1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004da6e.
 * REA evidence: ev_6e80092b285f79356c460b480e7585d58d782aff1af90a3a0e23422b0cc476da
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004da6e(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                     uint param_6,uint param_7)

{
  bool bVar1;
  uint uVar2;
  
  if (param_1 == (uint *)0x0) {
    return false;
  }
  thunk_FUN_ram_4000504c(param_1,0,0x18);
  if (param_5 == 0) {
    param_5 = FUN_ram_4004d9f0(param_2,param_4);
  }
  bVar1 = (uint)(param_5 * param_3) <= param_7;
  if (bVar1) {
    *(char *)((int)param_1 + 1) = (char)param_4;
    *(short *)(param_1 + 2) = (short)param_5;
    *(short *)(param_1 + 1) = (short)param_2;
    *(short *)((int)param_1 + 6) = (short)param_3;
    *param_1 = *param_1 & 0xff00 | 0x19;
    uVar2 = FUN_ram_4004da5e(param_6,param_4);
    param_1[4] = uVar2;
    param_1[5] = param_6;
    param_1[3] = param_7;
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x4004da74.
 * REA evidence: ev_97c77576f740a3aec65ca013841727d98addc2b165064c02e8e356469fde5dc1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004da74(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                     uint param_6,uint param_7)

{
  bool bVar1;
  uint uVar2;
  
  thunk_FUN_ram_4000504c(param_1,0,0x18);
  if (param_5 == 0) {
    param_5 = FUN_ram_4004d9f0(param_2,param_4);
  }
  bVar1 = (uint)(param_5 * param_3) <= param_7;
  if (bVar1) {
    *(char *)((int)param_1 + 1) = (char)param_4;
    *(short *)(param_1 + 2) = (short)param_5;
    *(short *)(param_1 + 1) = (short)param_2;
    *(short *)((int)param_1 + 6) = (short)param_3;
    *param_1 = *param_1 & 0xff00 | 0x19;
    uVar2 = FUN_ram_4004da5e(param_6,param_4);
    param_1[4] = uVar2;
    param_1[5] = param_6;
    param_1[3] = param_7;
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x4004daf8.
 * REA evidence: ev_23ec3cbf4d6e5af1650f6b62f0d2adc8a108bebaf424b679acbe98edc93aa1a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_ram_4004daf8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (uint *)FUN_ram_4005ab2e(0x18);
  if (puVar1 != (uint *)0x0) {
    if (param_4 == 0) {
      param_4 = FUN_ram_4004d9f0(param_1,param_3);
    }
    uVar2 = FUN_ram_4004da00(param_1,param_2,param_3,param_4);
    if ((_DAT_ram_30080d28 == (code *)0x0) ||
       (uVar3 = (*_DAT_ram_30080d28)(uVar2,param_3), uVar3 == 0)) {
      FUN_ram_4005ab56(puVar1);
      puVar1 = (uint *)0x0;
    }
    else {
      *(char *)((int)puVar1 + 1) = (char)param_3;
      *(short *)(puVar1 + 1) = (short)param_1;
      *(short *)((int)puVar1 + 6) = (short)param_2;
      *(short *)(puVar1 + 2) = (short)param_4;
      *puVar1 = *puVar1 & 0xff00 | 0x300019;
      uVar4 = FUN_ram_4004da5e(uVar3,param_3);
      puVar1[4] = uVar4;
      puVar1[5] = uVar3;
      puVar1[3] = uVar2;
    }
  }
  return puVar1;
}


/* NanoCore 1.11, address 0x4004db9e.
 * REA evidence: ev_a8a8fc89df157285d6c4c9030f9025a08240ac942082275d32fd43779688d9fa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004db9e(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_4004daf8(*(undefined2 *)(param_1 + 4),*(undefined2 *)(param_1 + 6),
                           *(undefined1 *)(param_1 + 1),*(undefined2 *)(param_1 + 8));
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    *(ushort *)(iVar1 + 2) = *(ushort *)(param_1 + 2) | 0x30;
    uVar3 = *(uint *)(iVar1 + 0xc);
    if (*(uint *)(param_1 + 0xc) < *(uint *)(iVar1 + 0xc)) {
      uVar3 = *(uint *)(param_1 + 0xc);
    }
    thunk_FUN_ram_400050c6(*(undefined4 *)(iVar1 + 0x10),uVar2,uVar3);
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4004dbec.
 * REA evidence: ev_5c9c0c09f69d63fe04810f68759647302b2256a188d2b8789341af34f94d357c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004dbec(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = (uint)*(byte *)(param_1 + 1);
    }
    if (param_5 == 0) {
      param_5 = FUN_ram_4004d9f0(param_3,param_2);
    }
    uVar1 = FUN_ram_4004da00(param_3,param_4,param_2,param_5);
    if (uVar1 <= *(uint *)(param_1 + 0xc)) {
      *(char *)(param_1 + 1) = (char)param_2;
      *(short *)(param_1 + 4) = (short)param_3;
      *(short *)(param_1 + 6) = (short)param_4;
      *(short *)(param_1 + 8) = (short)param_5;
      return param_1;
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x4004dc4e.
 * REA evidence: ev_0ba38ed59b6017f682981dd28530a32e6d119e1b06c40cfc59423d8af065a1af
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004dc4e(int param_1)

{
  if ((param_1 != 0) && ((*(ushort *)(param_1 + 2) & 0x10) != 0)) {
    if (_DAT_ram_30080d2c != (code *)0x0) {
      (*_DAT_ram_30080d2c)(*(undefined4 *)(param_1 + 0x14));
    }
    FUN_ram_4005ab56(param_1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4004dc7c.
 * REA evidence: ev_bdcf1930bc3a9327095c4d852b7b4161c8d0af61b0d9dc0ff6d0776be79bb11d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004dc7c(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 1);
    iVar3 = 8;
    if ((((cVar1 != '\a') && (iVar3 = 0x10, cVar1 != '\b')) && (iVar3 = 0x40, cVar1 != '\t')) &&
       (iVar3 = 0x400, cVar1 != '\n')) {
      iVar3 = 0;
    }
    iVar3 = *(int *)(param_1 + 0x10) + iVar3 + (uint)*(ushort *)(param_1 + 8) * param_3;
    if (param_2 != 0) {
      iVar2 = FUN_ram_4004ad00();
      iVar3 = iVar3 + (iVar2 + 7 >> 3) * param_2;
    }
  }
  return iVar3;
}


/* NanoCore 1.11, address 0x4004dcda.
 * REA evidence: ev_021fd4d4e4239ee43fe9eeafd3571b364a2f5dac77b790a5846bf1f3d758344f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004dcda(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 != (int *)0x0) {
    if (-2 < param_2[2] - *param_2) {
      if (-2 < param_2[3] - param_2[1]) goto LAB_ram_4004dcf2;
    }
    return;
  }
LAB_ram_4004dcf2:
  uVar1 = *(ushort *)(param_1 + 8);
  if (param_2 == (int *)0x0) {
    thunk_FUN_ram_4000504c
              (*(undefined4 *)(param_1 + 0x10),0,(uint)*(ushort *)(param_1 + 6) * (uint)uVar1);
    return;
  }
  iVar4 = FUN_ram_4004ad00(*(undefined1 *)(param_1 + 1));
  iVar5 = FUN_ram_4004dc7c(param_1,*param_2,param_2[1]);
  iVar6 = *param_2;
  iVar3 = param_2[2];
  iVar2 = param_2[3];
  for (iVar7 = param_2[1]; iVar7 <= iVar2; iVar7 = iVar7 + 1) {
    thunk_FUN_ram_4000504c(iVar5,0,((iVar3 - iVar6) + 1) * (iVar4 + 7 >> 3));
    iVar5 = iVar5 + (uint)uVar1;
  }
  return;
}


/* NanoCore 1.11, address 0x4004dd7a.
 * REA evidence: ev_121dd2201a676aa822ea257737f6715fb0cf93f45ab18789d99b24b507c4a6e8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004dd7a(int param_1,int *param_2,int param_3,int *param_4)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  
  if (param_2 == (int *)0x0) {
    uVar4 = (uint)*(ushort *)(param_1 + 4);
LAB_ram_4004dd9a:
    cVar1 = *(char *)(param_1 + 1);
    if ((byte)(cVar1 - 7U) < 4) {
      uVar8 = 8;
      if (((cVar1 != '\a') && (uVar8 = 0x10, cVar1 != '\b')) && (uVar8 = 0x40, cVar1 != '\t')) {
        uVar8 = 0x400;
      }
      thunk_FUN_ram_400050c6(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_3 + 0x10),uVar8);
    }
    if (param_4 == (int *)0x0) {
      if (*(ushort *)(param_3 + 4) != uVar4) {
        return;
      }
      iVar9 = 0;
      iVar7 = 0;
      goto LAB_ram_4004de16;
    }
  }
  else {
    uVar4 = (param_2[2] - *param_2) + 1;
    if (param_4 == (int *)0x0) goto LAB_ram_4004dd9a;
  }
  iVar7 = *param_4;
  if ((param_4[2] - iVar7) + 1U != uVar4) {
    return;
  }
  iVar9 = param_4[1];
LAB_ram_4004de16:
  iVar7 = FUN_ram_4004dc7c(param_3,iVar7,iVar9);
  if (param_2 == (int *)0x0) {
    iVar5 = FUN_ram_4004dc7c(param_1,0,0);
    iVar9 = 0;
    iVar10 = *(ushort *)(param_1 + 6) - 1;
  }
  else {
    iVar5 = FUN_ram_4004dc7c(param_1,*param_2,param_2[1]);
    iVar9 = param_2[1];
    iVar10 = param_2[3];
  }
  uVar2 = *(ushort *)(param_1 + 8);
  uVar3 = *(ushort *)(param_3 + 8);
  iVar6 = FUN_ram_4004ad00(*(undefined1 *)(param_1 + 1));
  for (; iVar9 <= iVar10; iVar9 = iVar9 + 1) {
    thunk_FUN_ram_400050c6(iVar5,iVar7,(int)(iVar6 * uVar4 + 7) >> 3);
    iVar5 = iVar5 + (uint)uVar2;
    iVar7 = iVar7 + (uint)uVar3;
  }
  return;
}


/* NanoCore 1.11, address 0x4004de7e.
 * REA evidence: ev_9eb505a698d82cb125cbe220c58acebb5d70ce915b69acedc516d4cadb9afd2e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004de7e(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  uVar2 = (uint)*(ushort *)(param_1 + 4);
  uVar8 = (uint)*(ushort *)(param_1 + 6);
  if (param_2 == 0) {
    param_2 = FUN_ram_4004d9f0(uVar2,*(undefined1 *)(param_1 + 1));
  }
  uVar4 = 1;
  if (*(ushort *)(param_1 + 8) != param_2) {
    iVar3 = FUN_ram_4004ad00(*(undefined1 *)(param_1 + 1));
    uVar6 = iVar3 * uVar2 + 7 >> 3;
    if ((param_2 < uVar6) ||
       (uVar2 = FUN_ram_4004da00(uVar2,uVar8,*(undefined1 *)(param_1 + 1),param_2),
       *(uint *)(param_1 + 0xc) < uVar2)) {
      uVar4 = 0;
    }
    else {
      cVar1 = *(char *)(param_1 + 1);
      iVar3 = 8;
      if ((((cVar1 != '\a') && (iVar3 = 0x10, cVar1 != '\b')) && (iVar3 = 0x40, cVar1 != '\t')) &&
         (iVar3 = 0x400, cVar1 != '\n')) {
        iVar3 = 0;
      }
      iVar5 = *(int *)(param_1 + 0x10);
      if (*(ushort *)(param_1 + 8) < param_2) {
        iVar7 = iVar3 + (uint)*(ushort *)(param_1 + 8) * (uVar8 - 1) + iVar5;
        iVar5 = iVar3 + (uVar8 - 1) * param_2 + iVar5;
        for (uVar2 = 0; uVar2 < uVar8; uVar2 = uVar2 + 1) {
          thunk_FUN_ram_40005156(iVar5,iVar7,uVar6);
          iVar5 = iVar5 - param_2;
          iVar7 = iVar7 - (uint)*(ushort *)(param_1 + 8);
        }
      }
      else {
        iVar3 = iVar3 + iVar5;
        iVar5 = iVar3;
        for (uVar2 = 0; uVar2 < uVar8; uVar2 = uVar2 + 1) {
          thunk_FUN_ram_40005156(iVar5,iVar3,uVar6);
          iVar5 = iVar5 + param_2;
          iVar3 = iVar3 + (uint)*(ushort *)(param_1 + 8);
        }
      }
      *(short *)(param_1 + 8) = (short)param_2;
      uVar4 = 1;
    }
  }
  return uVar4;
}


/* NanoCore 1.11, address 0x4004de9c.
 * REA evidence: ev_b26b45d20e3f70cbee2cc209e53a62238c02bb8e54ed34ff4e20878e2bdfb0c7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004de9c(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar2 = (uint)*(ushort *)(param_1 + 4);
  uVar8 = (uint)*(ushort *)(param_1 + 6);
  if (param_2 == 0) {
    param_2 = FUN_ram_4004d9f0(uVar2,*(undefined1 *)(param_1 + 1));
  }
  uVar4 = 1;
  if (*(ushort *)(param_1 + 8) != param_2) {
    iVar3 = FUN_ram_4004ad00(*(undefined1 *)(param_1 + 1));
    uVar6 = iVar3 * uVar2 + 7 >> 3;
    if ((param_2 < uVar6) ||
       (uVar2 = FUN_ram_4004da00(uVar2,uVar8,*(undefined1 *)(param_1 + 1),param_2),
       *(uint *)(param_1 + 0xc) < uVar2)) {
      uVar4 = 0;
    }
    else {
      cVar1 = *(char *)(param_1 + 1);
      iVar3 = 8;
      if ((((cVar1 != '\a') && (iVar3 = 0x10, cVar1 != '\b')) && (iVar3 = 0x40, cVar1 != '\t')) &&
         (iVar3 = 0x400, cVar1 != '\n')) {
        iVar3 = 0;
      }
      iVar5 = *(int *)(param_1 + 0x10);
      if (*(ushort *)(param_1 + 8) < param_2) {
        iVar7 = iVar3 + (uint)*(ushort *)(param_1 + 8) * (uVar8 - 1) + iVar5;
        iVar5 = iVar3 + (uVar8 - 1) * param_2 + iVar5;
        for (uVar2 = 0; uVar2 < uVar8; uVar2 = uVar2 + 1) {
          thunk_FUN_ram_40005156(iVar5,iVar7,uVar6);
          iVar5 = iVar5 - param_2;
          iVar7 = iVar7 - (uint)*(ushort *)(param_1 + 8);
        }
      }
      else {
        iVar3 = iVar3 + iVar5;
        iVar5 = iVar3;
        for (uVar2 = 0; uVar2 < uVar8; uVar2 = uVar2 + 1) {
          thunk_FUN_ram_40005156(iVar5,iVar3,uVar6);
          iVar5 = iVar5 + param_2;
          iVar3 = iVar3 + (uint)*(ushort *)(param_1 + 8);
        }
      }
      *(short *)(param_1 + 8) = (short)param_2;
      uVar4 = 1;
    }
  }
  return uVar4;
}


/* NanoCore 1.11, address 0x4004df8a.
 * REA evidence: ev_18a4ddffe1ce0b59afa469d335ff32f3b61ad1642dd94cf98c688deef41b1c7b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4004df8a(int param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  ushort *puVar16;
  
  if (((param_1 != 0) && (uVar2 = *(ushort *)(param_1 + 2), (uVar2 & 1) == 0)) &&
     ((uVar2 & 0x20) != 0)) {
    cVar1 = *(char *)(param_1 + 1);
    if ((byte)(cVar1 - 7U) < 4) {
      iVar11 = 2;
      if (((cVar1 != '\a') && (iVar11 = 4, cVar1 != '\b')) && (iVar11 = 0x10, cVar1 != '\t')) {
        iVar11 = 0x100;
      }
      pbVar12 = *(byte **)(param_1 + 0x10);
      pbVar14 = pbVar12;
      do {
        uVar13 = (uint)pbVar14[3];
        pbVar14[2] = (byte)(pbVar14[2] * uVar13 >> 8);
        pbVar14[1] = (byte)(pbVar14[1] * uVar13 >> 8);
        pbVar7 = pbVar14 + 4;
        *pbVar14 = (byte)(*pbVar14 * uVar13 >> 8);
        pbVar14 = pbVar7;
      } while (pbVar7 != pbVar12 + iVar11 * 4);
    }
    else if (cVar1 == '\x10') {
      uVar3 = *(ushort *)(param_1 + 6);
      uVar4 = *(ushort *)(param_1 + 4);
      uVar5 = *(ushort *)(param_1 + 8);
      pbVar14 = *(byte **)(param_1 + 0x10);
      for (uVar13 = 0; uVar13 < uVar3; uVar13 = uVar13 + 1) {
        pbVar12 = pbVar14;
        for (uVar15 = 0; uVar15 < uVar4; uVar15 = uVar15 + 1) {
          uVar8 = (uint)pbVar12[3];
          pbVar12[2] = (byte)(pbVar12[2] * uVar8 >> 8);
          pbVar12[1] = (byte)(pbVar12[1] * uVar8 >> 8);
          *pbVar12 = (byte)(*pbVar12 * uVar8 >> 8);
          pbVar12 = pbVar12 + 4;
        }
        pbVar14 = pbVar14 + uVar5;
      }
    }
    else if (cVar1 == '\x14') {
      iVar9 = *(int *)(param_1 + 0x10);
      uVar3 = *(ushort *)(param_1 + 8);
      uVar4 = *(ushort *)(param_1 + 6);
      uVar5 = *(ushort *)(param_1 + 4);
      iVar11 = iVar9 + (uint)uVar4 * (uint)uVar3;
      for (uVar13 = 0; uVar13 < uVar4; uVar13 = uVar13 + 1) {
        for (uVar15 = 0; uVar15 < uVar5; uVar15 = uVar15 + 1) {
          uVar6 = *(ushort *)(iVar9 + uVar15 * 2);
          uVar8 = (uint)*(byte *)(iVar11 + uVar15);
          *(ushort *)(iVar9 + uVar15 * 2) =
               (ushort)(((int)(((uVar6 & 0x7ff) >> 5) * uVar8) >> 8) << 5) |
               (ushort)((uVar6 & 0x1f) * uVar8 >> 8) |
               (ushort)(((int)((uVar6 >> 0xb) * uVar8) >> 8) << 0xb);
        }
        iVar9 = iVar9 + (uint)uVar3;
        iVar11 = iVar11 + (uint)(uVar3 >> 1);
      }
    }
    else if (cVar1 == '\x13') {
      uVar3 = *(ushort *)(param_1 + 6);
      uVar4 = *(ushort *)(param_1 + 4);
      uVar5 = *(ushort *)(param_1 + 8);
      puVar16 = *(ushort **)(param_1 + 0x10);
      for (uVar13 = 0; uVar13 < uVar3; uVar13 = uVar13 + 1) {
        puVar10 = puVar16;
        for (uVar15 = 0; uVar15 < uVar4; uVar15 = uVar15 + 1) {
          uVar6 = *puVar10;
          uVar8 = (uint)(byte)puVar10[1];
          *puVar10 = (ushort)(((int)(((uVar6 & 0x7ff) >> 5) * uVar8) >> 8) << 5) |
                     (ushort)((uVar6 & 0x1f) * uVar8 >> 8) |
                     (ushort)(((int)((uVar6 >> 0xb) * uVar8) >> 8) << 0xb);
          puVar10 = (ushort *)((int)puVar10 + 3);
        }
        puVar16 = (ushort *)((int)puVar16 + (uint)uVar5);
      }
    }
    *(ushort *)(param_1 + 2) = uVar2 | 1;
    return 1;
  }
  return 0;
}


