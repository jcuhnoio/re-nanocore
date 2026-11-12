/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4003f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4003f004.
 * REA evidence: ev_ece6183111f1cc1045074f8edeabe4e434d6b9c841a6ff685108d675d217d41e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f004(void)

{
  uint uVar1;
  
  uVar1 = *(int *)(gp + -0x408) + 3U & 0xfffffffc;
  FUN_ram_40005694(gp + -0x400,*(undefined4 *)(gp + -0x40c),uVar1,
                   (*(uint *)(gp + -0x404) & 0xfffffffc) - uVar1);
  FUN_ram_40004988(gp + -900,*(undefined4 *)(gp + -0x40c),1);
  return;
}


/* NanoCore 1.12, address 0x4003f036.
 * REA evidence: ev_3b90f42e7d7f91d5a80d2bf5f840ec1d93ff4b782cbd409289c33b8139b9310c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003f036(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(gp + -0x410) == param_1) {
    FUN_ram_40004a22(gp + -900,0xffffffff);
    uVar1 = FUN_ram_40005754(gp + -0x400,param_2);
    FUN_ram_40004b14(gp + -900);
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4003f070.
 * REA evidence: ev_4bf9df18eccb566ab70180a8c3a73b6ecebad43f4260a9bf7ff73abc3673a745
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f070(int param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(gp + -0x410) == param_1)) {
    FUN_ram_40004a22(gp + -900,0xffffffff);
    FUN_ram_400058be(param_2);
    FUN_ram_40004b14(gp + -900);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4003f0a2.
 * REA evidence: ev_cbeb3a37ebf493365dde6bb3d8cf816c837ee8c7c49cb02dd8e229a0487c61ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f0a2(void)

{
  FUN_ram_4003f1d0();
  FUN_ram_4003fb50();
  FUN_ram_4003f218();
  FUN_ram_4000555e(0x3008e444,0x30140000);
  FUN_ram_4003f004();
  FUN_ram_400043ee();
  return;
}


/* NanoCore 1.12, address 0x4003f0ce.
 * REA evidence: ev_24dcb9f5d9b7704177c8d6abbde5f737b6ecbcefc627d3982a4b02e4b745f56f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f0ce(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_ram_4003b7e2();
  if ((int)uVar2 < 0) {
    return;
  }
  iVar1 = (int)uVar2 >> 5;
  uVar2 = uVar2 & 0x1f;
  FUN_ram_4003b9d6(iVar1,uVar2,1);
  FUN_ram_4003ba50(iVar1,uVar2,0);
  FUN_ram_4003ba10(iVar1,uVar2,3);
  FUN_ram_4003bb12(iVar1,uVar2);
  if (param_2 != 0) {
    FUN_ram_4003b890();
    return;
  }
  FUN_ram_4003b862(iVar1,uVar2);
  return;
}


/* NanoCore 1.12, address 0x4003f1c2.
 * REA evidence: ev_9c07cf7f4373f30c3d5f031211185e99cd5c5e9a8872ef0febe17eff1fcc65f9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f1c2(void)

{
  FUN_ram_4003f0ce(&DAT_ram_4009d638,1);
  return;
}


/* NanoCore 1.12, address 0x4003f1d0.
 * REA evidence: ev_674f49ec3f4d3943a7fb5631bbe0e7085b777ca311404ce0dd6bd1af2c08c0a4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f1d0(void)

{
  FUN_ram_4003f1c2();
  FUN_ram_4003f0ce(s_PD_17_ram_4009c9bc,1);
  FUN_ram_4003f0ce(s_PD_18_ram_4009d640,1);
  FUN_ram_4003f0ce(s_PD_16_ram_40096694,0);
  FUN_ram_4003f0ce(s_PD_10_ram_400966cc,0);
  return;
}


/* NanoCore 1.12, address 0x4003f214.
 * REA evidence: ev_fc3e4e07f80211c752179d48f63cd691d00fd9b693ed7fff8d32a1dcbf0cca05
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4003f1d0(void)

{
  FUN_ram_4003f1d0();
  return;
}


/* NanoCore 1.12, address 0x4003f218.
 * REA evidence: ev_42358f23c8d6567cc1304ddf65ca40145461c77d8993fcf044296824fad50c00
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f218(void)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = (undefined1 *)(gp + -0x358);
  FUN_ram_4003f1c2();
  FUN_ram_4003f1d0();
  do {
    uVar4 = FUN_ram_4003b7e2(*(undefined4 *)(puVar1 + 4));
    if (-1 < (int)uVar4) {
      iVar3 = (int)uVar4 >> 5;
      uVar4 = uVar4 & 0x1f;
      FUN_ram_4003b9d6(iVar3,uVar4,*puVar1);
      FUN_ram_4003ba50(iVar3,uVar4,puVar1[1]);
      FUN_ram_4003ba10(iVar3,uVar4,puVar1[2]);
    }
    puVar1 = puVar1 + 0xc;
  } while (puVar1 != (undefined1 *)(gp + -0x238));
  puVar1 = (undefined1 *)(gp + -0x238);
  do {
    uVar4 = FUN_ram_4003b7e2(*(undefined4 *)(puVar1 + 4));
    if (-1 < (int)uVar4) {
      uVar2 = uVar4 & 0x1f;
      iVar3 = (int)uVar4 >> 5;
      FUN_ram_4003b9d6(iVar3,uVar2,*puVar1);
      FUN_ram_4003ba50(iVar3,uVar2,puVar1[1]);
      FUN_ram_4003ba10(iVar3,uVar2,puVar1[2]);
      if (puVar1[8] == '\0') {
        FUN_ram_4003bb12(iVar3,uVar2);
      }
      else {
        FUN_ram_4003bad2();
      }
      if (puVar1[9] == '\0') {
        FUN_ram_4003b862(iVar3,uVar2);
      }
      else {
        FUN_ram_4003b890();
      }
    }
    puVar1 = puVar1 + 0xc;
  } while (puVar1 != (undefined1 *)(gp + -0x1e4));
  return;
}


/* NanoCore 1.12, address 0x4003f2ea.
 * REA evidence: ev_2bf2307e01c3e5a3c53bac975c63862962c075b52f28f601fc8b2f64bc2e1e7b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003f2ea(void)

{
  int iVar1;
  
  FUN_ram_400002f4();
  iVar1 = (int)_DAT_ram_3007feb4;
  _DAT_ram_3007feb4 = 0;
  FUN_ram_400002fa();
  return iVar1;
}


/* NanoCore 1.12, address 0x4003f312.
 * REA evidence: ev_36081ace8bf9ef51085bf07ad9cbcb985abf583334a042aa243b312bc27d252e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003f312(void)

{
  int iVar1;
  
  FUN_ram_400002f4();
  iVar1 = (int)_DAT_ram_3007feb6;
  _DAT_ram_3007feb6 = 0;
  FUN_ram_400002fa();
  return iVar1;
}


/* NanoCore 1.12, address 0x4003f33a.
 * REA evidence: ev_11bf9696e87438cc1aefdc7a456520174a526114c6d97efbd7b10de132fd5e44
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4003f33a(void)

{
  undefined1 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = DAT_ram_3007fec6;
  DAT_ram_3007fec6 = 0;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.12, address 0x4003f362.
 * REA evidence: ev_5e7e5d92ec757d07bf893c9e3c961c506be04ce662a597ab0985980d3e2e2d45
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4003f362(void)

{
  undefined1 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = DAT_ram_3007fec7;
  DAT_ram_3007fec7 = 0;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.12, address 0x4003f38a.
 * REA evidence: ev_509b6887061aa1ea6b112aaf17318b88783051581f89decfffbdeb6f98649a83
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4003f38a(void)

{
  undefined1 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = DAT_ram_3007fec4;
  DAT_ram_3007fec4 = 0;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.12, address 0x4003f3b2.
 * REA evidence: ev_1d911aeba3d242717b73303966a86eb2ce5e126edbf7a5879b00dbd91334d8dd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003f3b2(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40041ac8(_DAT_ram_3007feb8);
  iVar2 = FUN_ram_40041ac8(_DAT_ram_3007febc);
  if (iVar1 == 0) {
    if (DAT_ram_3007fec0 != '\0') {
      if (_DAT_ram_3007fec2 != 0xffff) {
        _DAT_ram_3007fec2 = _DAT_ram_3007fec2 + 1;
      }
      if ((DAT_ram_3007fec5 == '\0') && (299 < _DAT_ram_3007fec2)) {
        DAT_ram_3007fec5 = '\x01';
        if (DAT_ram_3007fec4 != -1) {
          DAT_ram_3007fec4 = DAT_ram_3007fec4 + '\x01';
        }
      }
      goto LAB_ram_4003f44e;
    }
    DAT_ram_3007fec0 = '\x01';
  }
  else {
    if (((DAT_ram_3007fec0 != '\0') && (DAT_ram_3007fec5 == '\0')) && (DAT_ram_3007fec6 != -1)) {
      DAT_ram_3007fec6 = DAT_ram_3007fec6 + '\x01';
    }
    DAT_ram_3007fec0 = '\0';
  }
  _DAT_ram_3007fec2 = 0;
  DAT_ram_3007fec5 = '\0';
LAB_ram_4003f44e:
  if (iVar2 == 0) {
    DAT_ram_3007fec1 = 1;
  }
  else {
    if ((DAT_ram_3007fec1 != '\0') && (DAT_ram_3007fec7 != -1)) {
      DAT_ram_3007fec7 = DAT_ram_3007fec7 + '\x01';
    }
    DAT_ram_3007fec1 = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x4003f4c4.
 * REA evidence: ev_0fc6aefa689884de475946b1d3f3e471fe035e4f06519fa124d43c02028d6e90
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003f60e) */
/* WARNING: Removing unreachable block (ram,0x4003f5fe) */
/* WARNING: Removing unreachable block (ram,0x4003f5ee) */
/* WARNING: Removing unreachable block (ram,0x4003f5de) */
/* WARNING: Removing unreachable block (ram,0x4003f5ce) */
/* WARNING: Removing unreachable block (ram,0x4003f5bc) */
/* WARNING: Removing unreachable block (ram,0x4003f5c4) */
/* WARNING: Removing unreachable block (ram,0x4003f5d6) */
/* WARNING: Removing unreachable block (ram,0x4003f5e6) */
/* WARNING: Removing unreachable block (ram,0x4003f5f6) */
/* WARNING: Removing unreachable block (ram,0x4003f606) */
/* WARNING: Removing unreachable block (ram,0x4003f616) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003f4c4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  _DAT_ram_3007fea4 = FUN_ram_40041ad8(&DAT_ram_4009d648);
  _DAT_ram_3007feac = FUN_ram_40041ad8(&DAT_ram_4009d650);
  _DAT_ram_3007feb8 = FUN_ram_40041ad8(&DAT_ram_4009d658);
  _DAT_ram_3007fea8 = FUN_ram_40041ad8(&DAT_ram_4009d660);
  _DAT_ram_3007feb0 = FUN_ram_40041ad8(s_PE_10_ram_4009d668);
  iVar6 = FUN_ram_40041ad8(s_PE_11_ram_4009d670);
  iVar5 = _DAT_ram_3007feb8;
  iVar4 = _DAT_ram_3007feb0;
  iVar3 = _DAT_ram_3007feac;
  iVar2 = _DAT_ram_3007fea8;
  iVar1 = _DAT_ram_3007fea4;
  _DAT_ram_3007febc = iVar6;
  FUN_ram_40041aa0(_DAT_ram_3007fea4,2);
  FUN_ram_40041aa0(_DAT_ram_3007feac,2);
  FUN_ram_40041aa0(_DAT_ram_3007feb8,2);
  FUN_ram_40041aa0(_DAT_ram_3007fea8,2);
  FUN_ram_40041aa0(_DAT_ram_3007feb0,2);
  FUN_ram_40041aa0(_DAT_ram_3007febc,2);
  FUN_ram_4003bb54(iVar1 / 0x20,iVar1 % 0x20,0x1ff);
  FUN_ram_4003bb54(iVar3 / 0x20,iVar3 % 0x20,0x1ff);
  FUN_ram_4003bb54(iVar5 / 0x20,iVar5 % 0x20,0xfff);
  FUN_ram_4003bb54(iVar2 / 0x20,iVar2 % 0x20,0x1ff);
  FUN_ram_4003bb54(iVar4 / 0x20,iVar4 % 0x20,0x1ff);
  FUN_ram_4003bb54(iVar6 / 0x20,iVar6 % 0x20,0xfff);
  FUN_ram_40041a68(_DAT_ram_3007fea4,0,&LAB_ram_4003f19c,0);
  FUN_ram_40041a68(_DAT_ram_3007fea8,0,&LAB_ram_4003f176,0);
  FUN_ram_40041a86(_DAT_ram_3007fea4,1);
  FUN_ram_40041a86(_DAT_ram_3007fea8,1);
  return;
}


/* NanoCore 1.12, address 0x4003f672.
 * REA evidence: ev_b68f845cd2eb411ce2d8adb31519f61eee19284481a14b48e8bbdd6460ad397a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4003f672(void)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  
  piVar1 = (int *)(gp + -0x1d0);
  if (*piVar1 < 0) {
    iVar3 = FUN_ram_40041ad8(&DAT_ram_4009d678);
    *piVar1 = iVar3;
    if (-1 < iVar3) {
      FUN_ram_40041aa0(iVar3,1);
    }
  }
  bVar2 = false;
  if (-1 < *piVar1) {
    iVar3 = FUN_ram_40041ac8(*piVar1);
    bVar2 = iVar3 == 1;
  }
  return bVar2;
}


/* NanoCore 1.12, address 0x4003f6b6.
 * REA evidence: ev_7705e04f585b9167ee608161549dbbaf7e84803102e4cc7155b80ccf0a30e206
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f6b6(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(gp + -0x1e4);
  if (*piVar1 < 0) {
    iVar2 = FUN_ram_40041ad8(s_PD_18_ram_4009d640);
    *piVar1 = iVar2;
    if (-1 < iVar2) {
      FUN_ram_40041aa0(iVar2,0);
    }
  }
  if (-1 < *piVar1) {
    FUN_ram_40041ab4(*piVar1,param_1 == 0);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4003f702.
 * REA evidence: ev_a567ed7e4eb59ac17a801053d4e4b142b6d47226a0dc6bba56e78e0b2d8d2a42
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f702(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(gp + -0x1e0);
  if (*piVar1 < 0) {
    iVar2 = FUN_ram_40041ad8(s_PD_17_ram_4009c9bc);
    *piVar1 = iVar2;
    if (-1 < iVar2) {
      FUN_ram_40041aa0(iVar2,0);
    }
  }
  if (-1 < *piVar1) {
    FUN_ram_40041ab4(*piVar1,param_1 == 0);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4003f74e.
 * REA evidence: ev_39977e845431f18d7c18c31796df3df907054a017d4da7f2645e084be44522c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003f74e(void)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  if (DAT_ram_3007feca == '\0') {
    uVar3 = FUN_ram_40041ad8(&DAT_ram_4009d680);
    puVar1 = (uint *)(gp + -0x1d8);
    *puVar1 = uVar3;
    iVar4 = FUN_ram_40041ad8(&DAT_ram_4009d638);
    piVar5 = (int *)(gp + -0x1dc);
    *piVar5 = iVar4;
    iVar4 = FUN_ram_40041ad8(s_PD_18_ram_4009d640);
    *(int *)(gp + -0x1e4) = iVar4;
    if (((-1 < (int)*puVar1) && (-1 < *piVar5)) && (-1 < iVar4)) {
      FUN_ram_40041aa0(*puVar1,1);
      FUN_ram_40041aa0(*piVar5,0);
      FUN_ram_40041aa0(*(int *)(gp + -0x1e4),0);
      FUN_ram_4003bb54(*puVar1 >> 5,*puVar1 & 0x1f,0x1ff);
      iVar4 = FUN_ram_4003ec4e();
      if (((iVar4 == 0) && (iVar4 = FUN_ram_4003ed1c(), iVar4 == 0)) &&
         ((iVar4 = FUN_ram_40041ac8(*puVar1), iVar4 == 0 && (iVar4 = FUN_ram_4003f672(), iVar4 != 0)
          ))) {
        FUN_ram_4003fdde();
        FUN_ram_4002d9f2();
        uVar2 = 0;
        FUN_ram_40041ab4(*piVar5,0);
        do {
          FUN_ram_4003eab8(0);
          nc_radio_retry_disable_during_shutdown();
          iVar4 = FUN_ram_40041ac8(*puVar1);
          if (iVar4 == 1) {
            uVar2 = uVar2 + 10;
            if (99 < uVar2) break;
          }
          else {
            uVar2 = 0;
          }
          FUN_ram_400064e4(10);
        } while( true );
      }
      iVar4 = FUN_ram_4003ed1c();
      if (iVar4 == 1) {
        FUN_ram_4003ed7a();
      }
      FUN_ram_40041ab4(*piVar5,1);
      FUN_ram_4003f702(0);
      FUN_ram_4003f6b6(0);
      *(undefined1 *)(gp + -0x1d4) = 1;
      _DAT_ram_3007fec8 = 0;
      _DAT_ram_3007fecc = 0;
      DAT_ram_3007fed0 = 0;
      DAT_ram_3007fed1 = 0;
      iVar4 = FUN_ram_40041ac8(*puVar1);
      DAT_ram_3007fed2 = iVar4 == 1;
      DAT_ram_3007feca = '\x01';
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4003f8b0.
 * REA evidence: ev_9beec01742a01b0a896e74454b43d64e3432dc957afb4bd969329237c94b9aaa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003f8b0(void)

{
  FUN_ram_4003f74e();
  return 0;
}


/* NanoCore 1.12, address 0x4003f9b0.
 * REA evidence: ev_f74ae9ff6934c8aba0ca6a32ead3c306913aa8df280d151016d41549f529094b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003f9b0(void)

{
  return 1;
}


/* NanoCore 1.12, address 0x4003f9b4.
 * REA evidence: ev_f964aca37ab97d3eb43140873bb332dea3a1096f2963d154954dfb01b407fa86
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_ram_4003f9b4(void)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (((-1 < *(int *)(gp + -0x1d8)) && (-1 < *(int *)(gp + -0x1dc))) && (-1 < *(int *)(gp + -0x1e4))
     ) {
    FUN_ram_400002f4();
    if (((*(char *)(gp + -0x1d4) != '\0') && (DAT_ram_3007fed2 == '\0')) &&
       (DAT_ram_3007fed0 != '\0')) {
      uVar1 = _DAT_ram_3007fec8;
    }
    FUN_ram_400002fa();
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4003fa08.
 * REA evidence: ev_d8d2126a36340e72623cfd6921fd66117733d789b9407ac8d3b64b810ab428ef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fa08(void)

{
  if (*(char *)(gp + -0x1d4) != '\0') {
    FUN_ram_40013666();
    nc_poweroff_wait_loop(1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4003fa22.
 * REA evidence: ev_4a4161f35d7f4284c1ff2032a56142a0e38ed3dbd16c7efe8d06c19ca5d2cfba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003fa22(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4003f672();
  if (iVar1 == 0) {
    if (*(char *)(gp + -0x1d4) == '\0') {
      return 0;
    }
    iVar1 = FUN_ram_4003f672();
    if (iVar1 == 0) {
      FUN_ram_40041ab4(*(undefined4 *)(gp + -0x1dc),0);
      uVar2 = nc_poweroff_wait_loop(0);
      return uVar2;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4003fa54.
 * REA evidence: ev_f8a8cab8a0e2686dbc27777c3070479fffdc0f9ab82e8e3bfa82197d315f3e5a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003faf6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003fa54(void)

{
  int iVar1;
  uint uVar2;
  
  if (((*(int *)(gp + -0x1d8) < 0) || (*(int *)(gp + -0x1dc) < 0)) || (*(int *)(gp + -0x1e4) < 0)) {
    return;
  }
  iVar1 = FUN_ram_40041ac8();
  if (DAT_ram_3007fed2 == '\0') {
    if (*(char *)(gp + -0x1d4) != '\0') {
      if (iVar1 == 1) {
        iVar1 = FUN_ram_40004346();
        if (DAT_ram_3007fed0 != '\0') {
          uVar2 = (iVar1 - _DAT_ram_3007fecc) * 1000;
          if (uVar2 < 0x3e80000) {
            uVar2 = uVar2 / 1000;
          }
          else {
            uVar2 = 0xffff;
          }
          _DAT_ram_3007fec8 = (undefined2)uVar2;
          if (DAT_ram_3007fed1 != '\0') {
            return;
          }
          if ((uVar2 & 0xffff) < 0x5dc) {
            return;
          }
          DAT_ram_3007fed1 = 1;
          return;
        }
        DAT_ram_3007fed0 = '\x01';
        _DAT_ram_3007fecc = iVar1;
      }
      else {
        if (DAT_ram_3007fed0 != '\0') {
          DAT_ram_3007fed0 = '\0';
        }
        _DAT_ram_3007fecc = 0;
      }
      _DAT_ram_3007fec8 = 0;
      DAT_ram_3007fed1 = '\0';
    }
  }
  else if (iVar1 != 1) {
    DAT_ram_3007fed2 = '\0';
    DAT_ram_3007fed0 = '\0';
  }
  return;
}


/* NanoCore 1.12, address 0x4003fb50.
 * REA evidence: ev_e85cefd3a0c6898378f3da0386bfb81fadac51103948f611ef6d57798ded1e95
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fb50(void)

{
  int *piVar1;
  
  FUN_ram_40038bc8(0x13);
  FUN_ram_40038c22(0x13);
  piVar1 = (int *)(gp + -0x1cc);
  do {
    if (*piVar1 != 0) {
      if (piVar1[2] == 0) {
        FUN_ram_40038d5c(piVar1[1]);
        FUN_ram_40038bfe(piVar1[1]);
      }
      else {
        FUN_ram_40038d5c();
        FUN_ram_40038bfe(piVar1[2]);
        FUN_ram_40038ca0(piVar1[1],piVar1[2]);
      }
    }
    piVar1 = piVar1 + 3;
  } while (piVar1 != (int *)(gp + -0x16c));
  FUN_ram_40038df2(0x24);
  FUN_ram_40038df2(0x36);
  return;
}


/* NanoCore 1.12, address 0x4003fbb2.
 * REA evidence: ev_5c484b7718165f2936984be9f17e0581810f1e050892cbd617f41830ad2d81c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003fbb2(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined1 **)(iVar1 * 4 + 0x300807f4) = &LAB_ram_40000580;
    *(undefined4 *)(iVar1 * 4 + 0x30080364) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x60);
  iVar1 = 0x60;
  do {
    *(undefined4 *)(iVar1 * 4 + 0x300807f4) = 0;
    *(undefined4 *)(iVar1 * 4 + 0x30080364) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x124);
  _DAT_ram_30080810 = FUN_ram_4003fe18;
  _DAT_ram_30080c84 = &DAT_ram_4003fe7a;
  return;
}


/* NanoCore 1.12, address 0x4003fc0c.
 * REA evidence: ev_669e977d68c0d7d66ae91be20f2e593dfc5e830d58a867c5266f35a781111171
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fc0c(uint param_1)

{
  code *UNRECOVERED_JUMPTABLE_00;
  
  if ((param_1 < 0x124) &&
     (UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1 * 4 + 0x300807f4),
     UNRECOVERED_JUMPTABLE_00 != (code *)0x0)) {
    *(int *)(param_1 * 4 + 0x3007fed4) = *(int *)(param_1 * 4 + 0x3007fed4) + 1;
    if (0x5f < param_1) {
                    /* WARNING: Could not recover jumptable at 0x4003fc4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(*(undefined4 *)(param_1 * 4 + 0x30080364));
      return;
    }
                    /* WARNING: Could not emulate address calculation at 0x4003fc1c */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4003fc50.
 * REA evidence: ev_059ec1960daa058c8d749268a706598e6631e5671d0e8f265f1987a82030b032
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fc50(uint param_1)

{
  if (param_1 < 0x60) {
    *(byte *)(param_1 * 4 + 0x20801001) = *(byte *)(param_1 * 4 + 0x20801001) | 1;
  }
  return;
}


/* NanoCore 1.12, address 0x4003fc76.
 * REA evidence: ev_9ec1ac01a3f8003edca5e60d0f2f8f5f6e276f75a0564a2d641526274745680a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fc76(uint param_1)

{
  if (param_1 < 0x60) {
    *(byte *)(param_1 * 4 + 0x20801001) = *(byte *)(param_1 * 4 + 0x20801001) & 0xfe;
  }
  return;
}


/* NanoCore 1.12, address 0x4003fc98.
 * REA evidence: ev_0ed946abdb8f748b214c4a0ed09a2591546a55f499043994f9dbadd6f0e82a63
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fc98(uint param_1,int param_2,undefined4 param_3)

{
  if ((param_1 < 0x124) && (param_2 != 0)) {
    *(int *)(param_1 * 4 + 0x300807f4) = param_2;
    *(undefined4 *)(param_1 * 4 + 0x30080364) = param_3;
    *(undefined4 *)(param_1 * 4 + 0x3007fed4) = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x4003fcc8.
 * REA evidence: ev_15896d71e19358115c6eb78227567a4d2e5c1335c863fe3939629751e9bc6bcc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003fcc8(void)

{
  return DAT_ram_3004a314;
}


/* NanoCore 1.12, address 0x4003fcd2.
 * REA evidence: ev_8539cde56f5b045928816296d43decac938b5fe0a2afef9e82d6d29809fb7da2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fcd2(undefined4 param_1)

{
  DAT_ram_3004a314 = param_1;
  return;
}


/* NanoCore 1.12, address 0x4003fcdc.
 * REA evidence: ev_57e580089d4b492764c5b5ff91d1d67452d6e8d6c036957cdbd67c2e7d78273b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_4003fcdc(void)

{
  byte bVar1;
  
  fence();
  fence();
  fence();
  bVar1 = 8;
  if ((DAT_ram_19030104 == -0x49) && ((DAT_ram_19030108 ^ 0xed) == DAT_ram_1903010c)) {
    bVar1 = DAT_ram_19030108 & 7 | 8;
  }
  return bVar1;
}


/* NanoCore 1.12, address 0x4003fd2a.
 * REA evidence: ev_973a9e536cbbca0482715fab2a1b5e35da67de8de45ab3ad7c8ffb12dfa0c93a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fd2a(byte param_1)

{
  fence();
  fence();
  DAT_ram_19030104 = 0xb7;
  fence();
  DAT_ram_19030108 = param_1 & 7;
  fence();
  DAT_ram_1903010c = param_1 & 7 ^ 0xed;
  fence();
  DAT_ram_190300fc = 0;
  return;
}


/* NanoCore 1.12, address 0x4003fd78.
 * REA evidence: ev_040bbaf7fa5cdfd51d1a8d85f5f43f7ab761c31b4cd1d19b9a0252356218d924
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fd78(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_4003fcdc();
  if ((uVar1 & 8) == 0) {
    FUN_ram_4003fd2a(8);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4003fd94.
 * REA evidence: ev_75d1d079be16d2eb82c78f77cca6e2c50e4ca5b3ea82cc01a86b3c6b59daebc7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003fd94(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_4003fcdc();
  if ((uVar1 & 8) == 0) {
    uVar1 = 0;
  }
  return uVar1 & 3;
}


/* NanoCore 1.12, address 0x4003fdac.
 * REA evidence: ev_dfef3eec6e94b83236cfa32106f0b37b6a19fe869af26b942d48bdb49b2e176f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fdac(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_ram_4003fcdc();
  if ((uVar1 & 8) == 0) {
    uVar1 = 8;
  }
  uVar2 = param_1 & 0xff;
  if (3 < param_1) {
    uVar2 = 3;
  }
  FUN_ram_4003fd2a(uVar1 & 0xfffffffc | uVar2 | 8);
  return;
}


/* NanoCore 1.12, address 0x4003fdde.
 * REA evidence: ev_6bc1d2f05f53070c97d8499f66a44af63385ec9fabe3b521fb4771789db4dcca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fdde(void)

{
  FUN_ram_4003fdac(0);
  return;
}


/* NanoCore 1.12, address 0x4003fde4.
 * REA evidence: ev_472f3c070ec7602f3ac1a3c01c487ae1be1279b304572e5a33d08a162a1c969d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003fde4(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_4003fcdc();
  if ((uVar1 & 8) == 0) {
    uVar1 = 0;
  }
  return (uVar1 & 7) >> 2;
}


/* NanoCore 1.12, address 0x4003fdfe.
 * REA evidence: ev_58e6a22169a284507ad9863bbd4257dedad52b6346f37ab737b7b01779cf2a61
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fdfe(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_4003fcdc();
  if ((uVar1 & 8) == 0) {
    uVar1 = 8;
  }
  FUN_ram_4003fd2a(uVar1 & 0xfffffffb);
  return;
}


/* NanoCore 1.12, address 0x4003fe18.
 * REA evidence: ev_4f83eca573f47beb20f33aacefb1c099b39ee11ec9aaa3d0e8bbf0c5c42e6c37
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003fe28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003fe18(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003fe7c();
  if ((_DAT_ram_20004000 == 0 && _DAT_ram_20004004 == 0) ||
     ((_DAT_ram_20004000 == -1 && (_DAT_ram_20004004 == -1)))) {
    _DAT_ram_20004000 =
         (ulonglong)(uint)(iVar1 / 1000) + CONCAT44(_DAT_ram_2000bffc,_DAT_ram_2000bff8);
  }
  else {
    _DAT_ram_20004000 =
         (ulonglong)(uint)(iVar1 / 1000) + CONCAT44(_DAT_ram_20004004,_DAT_ram_20004000);
  }
  FUN_ram_40004350();
  return;
}


/* NanoCore 1.12, address 0x4003fe7c.
 * REA evidence: ev_aacd23c489f266ec88affe5f6fa56e29cadd77fa70881da645625d2fca97763f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003fe7c(void)

{
  return 4000000;
}


/* NanoCore 1.12, address 0x4003fe86.
 * REA evidence: ev_dd855d1b87d4b5fe34ef126f3f6585fce2f8111b5f6a5acfb997c902061274f5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fe86(void)

{
  fence();
  custom0();
  fence.i();
  fence();
  if ((DAT_csreg_07c1 & 1) == 0) {
    custom0();
    DAT_csreg_07c1 = DAT_csreg_07c1 | 1;
  }
  fence();
  custom0();
  fence.i();
  fence();
  return;
}


/* NanoCore 1.12, address 0x4003febe.
 * REA evidence: ev_60b76063683210a165963253ba7f7bf05dcdfcf58b7c260fa3e9d7df5d5fc6dd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003febe(void)

{
  fence();
  custom0();
  fence.i();
  fence();
  if ((DAT_csreg_07c1 & 2) == 0) {
    custom0();
    DAT_csreg_07c1 = DAT_csreg_07c1 | 0x103e;
  }
  DAT_csreg_07c5 = DAT_csreg_07c5 | 8;
  fence();
  custom0();
  fence.i();
  fence();
  return;
}


/* NanoCore 1.12, address 0x4003ff06.
 * REA evidence: ev_7339e81e9a11457e082eca6ac8a8701e0b1a663200d387c9b4dac581c9e2bf3f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ff06(void)

{
  FUN_ram_4003932e();
  FUN_ram_40038bc8(0x14);
  FUN_ram_40038bc8(0x13);
  FUN_ram_40038bc8(0x12);
  return;
}


/* NanoCore 1.12, address 0x4003ff24.
 * REA evidence: ev_fc6be5593dfb09d996a5164292531a4366524107fb9a2aea0d6cb48bed4146cd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003ff24(void)

{
  _DAT_ram_1802090c = 0x3100;
  _DAT_ram_19050000 = 1;
  return;
}


/* NanoCore 1.12, address 0x4003ff3c.
 * REA evidence: ev_2097270ded221bb9ce8e97ecfd58aa06e233a10ad22cf3ff1db994faf039ca8b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4003febe(void)

{
  FUN_ram_4003febe();
  return;
}


/* NanoCore 1.12, address 0x4003ff40.
 * REA evidence: ev_ea65118623a606b3079e0c9d60675692e876fcf51e528205d024b51b0cc17e4c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4003fe86(void)

{
  FUN_ram_4003fe86();
  return;
}


/* NanoCore 1.12, address 0x4003ff44.
 * REA evidence: ev_8a6d4193f773013c434357eaee22490554740b759c2de5ec8472ee20e543a903
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003ffd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003ff44(void)

{
  int iVar1;
  
  mstatus = mstatus | 0x2000;
  DAT_csreg_07c0 = DAT_csreg_07c0 | 0x408000;
  DAT_csreg_07e1 = DAT_csreg_07e1 | 0x30000;
  DAT_ram_20800000 = (byte)(_DAT_ram_20800004 >> 0x14) & 0x1e;
  iVar1 = 0;
  do {
    *(undefined1 *)(iVar1 * 4 + 0x20801000) = 0;
    *(undefined1 *)(iVar1 * 4 + 0x20801002) = 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x60);
  DAT_ram_2080100e = 3;
  FUN_ram_4003febe();
  FUN_ram_4003fe86();
  FUN_ram_4003fc50(3);
  FUN_ram_4003fbb2();
  FUN_ram_4003ff24();
  FUN_ram_4003ff06();
  iVar1 = FUN_ram_4003fe7c();
  if ((_DAT_ram_20004000 == 0 && _DAT_ram_20004004 == 0) ||
     ((_DAT_ram_20004000 == -1 && (_DAT_ram_20004004 == -1)))) {
    _DAT_ram_20004000 =
         (ulonglong)(uint)(iVar1 / 1000) + CONCAT44(_DAT_ram_2000bffc,_DAT_ram_2000bff8);
  }
  else {
    _DAT_ram_20004000 =
         (ulonglong)(uint)(iVar1 / 1000) + CONCAT44(_DAT_ram_20004004,_DAT_ram_20004000);
  }
  FUN_ram_4003fc50(7);
  return;
}


