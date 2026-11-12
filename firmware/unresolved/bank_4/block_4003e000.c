/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4003e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4003e006.
 * REA evidence: ev_4f6366c4d91564f935d0c9ba773b6e7123da2bba207856293b7da9bbe6217f2e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003e006(int param_1,uint param_2,code *UNRECOVERED_JUMPTABLE_00)

{
  if (param_1 == 0) {
    return;
  }
  if (1 < param_2) {
                    /* WARNING: Could not recover jumptable at 0x4003e016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(*(undefined4 *)(param_1 + -4));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4003e01a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_2);
  return;
}


/* NanoCore 1.10, address 0x4003e01e.
 * REA evidence: ev_61e13c1141e88cd36dbdcdacc9d18429921859352097d2bac110efd322fe69e8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003e01e(void)

{
  uint uVar1;
  
  uVar1 = *(int *)(gp + -0x408) + 3U & 0xfffffffc;
  FUN_ram_40005784(gp + -0x400,*(undefined4 *)(gp + -0x40c),uVar1,
                   (*(uint *)(gp + -0x404) & 0xfffffffc) - uVar1);
  FUN_ram_4000493c(gp + -900,*(undefined4 *)(gp + -0x40c),1);
  return;
}


/* NanoCore 1.10, address 0x4003e050.
 * REA evidence: ev_f0f6a27f3b427bfb738b3876c663e3b21aabfa1aa7a36ddfd7931870d20718cf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e050(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(gp + -0x410) == param_1) {
    FUN_ram_400049d6(gp + -900,0xffffffff);
    uVar1 = FUN_ram_40005844(gp + -0x400,param_2);
    FUN_ram_40004ac8(gp + -900);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4003e08a.
 * REA evidence: ev_52c0d6a93d6f9d4000f39bd1231a5b0ec212fb5b481f641f760d0a2d7fb38ddb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003e08a(int param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(gp + -0x410) == param_1)) {
    FUN_ram_400049d6(gp + -900,0xffffffff);
    FUN_ram_400059ae(param_2);
    FUN_ram_40004ac8(gp + -900);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4003e0bc.
 * REA evidence: ev_045251f366df7df0e46a5fecb51f45321226363fde2d6fa12e00efb5bfbb7604
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003e0bc(void)

{
  FUN_ram_4003e1ea();
  FUN_ram_4003eb56();
  FUN_ram_4003e232();
  FUN_ram_40005628(0x3008d038,0x30140000);
  FUN_ram_4003e01e();
  FUN_ram_400043a2();
  return;
}


/* NanoCore 1.10, address 0x4003e0e8.
 * REA evidence: ev_a2acc49ec10ecf70e9c0bf6ee3d7ef63b5fba78925bf5fd1f534fad0eca75d73
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003e0e8(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_ram_4003a7fc();
  if ((int)uVar2 < 0) {
    return;
  }
  iVar1 = (int)uVar2 >> 5;
  uVar2 = uVar2 & 0x1f;
  FUN_ram_4003a9f0(iVar1,uVar2,1);
  FUN_ram_4003aa6a(iVar1,uVar2,0);
  FUN_ram_4003aa2a(iVar1,uVar2,3);
  FUN_ram_4003ab2c(iVar1,uVar2);
  if (param_2 != 0) {
    FUN_ram_4003a8aa();
    return;
  }
  FUN_ram_4003a87c(iVar1,uVar2);
  return;
}


/* NanoCore 1.10, address 0x4003e1dc.
 * REA evidence: ev_4e9ffe3a584bc2114e6919038db57c0e9e596a66903c329b1335e65d1fb7c34e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003e1dc(void)

{
  FUN_ram_4003e0e8(&DAT_ram_400966d4,1);
  return;
}


/* NanoCore 1.10, address 0x4003e1ea.
 * REA evidence: ev_27cd36b73d92fb2a6a0f6762199c9289153ca2d3c393ee33442c8a1400b82d2d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003e1ea(void)

{
  FUN_ram_4003e1dc();
  FUN_ram_4003e0e8(s_PD_17_ram_400957d0,1);
  FUN_ram_4003e0e8(s_PD_18_ram_400966dc,1);
  FUN_ram_4003e0e8(s_PD_16_ram_40092784,0);
  FUN_ram_4003e0e8(s_PD_10_ram_400927bc,0);
  return;
}


/* NanoCore 1.10, address 0x4003e22e.
 * REA evidence: ev_19d6321dce06085f1b5a67f58cdf3291d502b8118a5e2da09a95504b12f491ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4003e1ea(void)

{
  FUN_ram_4003e1ea();
  return;
}


/* NanoCore 1.10, address 0x4003e232.
 * REA evidence: ev_571acf88b63de02242bc325ab4d389f95e3c313d9f348bc05bea003794175d00
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003e232(void)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = (undefined1 *)(gp + -0x358);
  FUN_ram_4003e1dc();
  FUN_ram_4003e1ea();
  do {
    uVar4 = FUN_ram_4003a7fc(*(undefined4 *)(puVar1 + 4));
    if (-1 < (int)uVar4) {
      iVar3 = (int)uVar4 >> 5;
      uVar4 = uVar4 & 0x1f;
      FUN_ram_4003a9f0(iVar3,uVar4,*puVar1);
      FUN_ram_4003aa6a(iVar3,uVar4,puVar1[1]);
      FUN_ram_4003aa2a(iVar3,uVar4,puVar1[2]);
    }
    puVar1 = puVar1 + 0xc;
  } while (puVar1 != (undefined1 *)(gp + -0x238));
  puVar1 = (undefined1 *)(gp + -0x238);
  do {
    uVar4 = FUN_ram_4003a7fc(*(undefined4 *)(puVar1 + 4));
    if (-1 < (int)uVar4) {
      uVar2 = uVar4 & 0x1f;
      iVar3 = (int)uVar4 >> 5;
      FUN_ram_4003a9f0(iVar3,uVar2,*puVar1);
      FUN_ram_4003aa6a(iVar3,uVar2,puVar1[1]);
      FUN_ram_4003aa2a(iVar3,uVar2,puVar1[2]);
      if (puVar1[8] == '\0') {
        FUN_ram_4003ab2c(iVar3,uVar2);
      }
      else {
        FUN_ram_4003aaec();
      }
      if (puVar1[9] == '\0') {
        FUN_ram_4003a87c(iVar3,uVar2);
      }
      else {
        FUN_ram_4003a8aa();
      }
    }
    puVar1 = puVar1 + 0xc;
  } while (puVar1 != (undefined1 *)(gp + -0x1e4));
  return;
}


/* NanoCore 1.10, address 0x4003e304.
 * REA evidence: ev_7992f4f75b0139a4525dfb8878b551138d33e8b27e71905a35d87b256b414a0f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003e304(void)

{
  int iVar1;
  
  FUN_ram_400002f4();
  iVar1 = (int)_DAT_ram_3007eab4;
  _DAT_ram_3007eab4 = 0;
  FUN_ram_400002fa();
  return iVar1;
}


/* NanoCore 1.10, address 0x4003e32c.
 * REA evidence: ev_ab6ad813370f11d9a751ce1f4e79d84689bffb7e47eecc036f2bdbd3e37ed4f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003e32c(void)

{
  int iVar1;
  
  FUN_ram_400002f4();
  iVar1 = (int)_DAT_ram_3007eab6;
  _DAT_ram_3007eab6 = 0;
  FUN_ram_400002fa();
  return iVar1;
}


/* NanoCore 1.10, address 0x4003e354.
 * REA evidence: ev_daeffdd2fe857a87d17d011a2fdb85155c7559a7803b79f595c7db257e433fb6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4003e354(void)

{
  undefined1 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = DAT_ram_3007eac6;
  DAT_ram_3007eac6 = 0;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.10, address 0x4003e37c.
 * REA evidence: ev_94d145ff98d3864d5ce9c97f3b73c1957c6cfca3c9391649aa4d92627044c7a8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4003e37c(void)

{
  undefined1 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = DAT_ram_3007eac7;
  DAT_ram_3007eac7 = 0;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.10, address 0x4003e3a4.
 * REA evidence: ev_01e7635701d83c0c9ad5af4e7832ee736f402e5c7f35793ef05f52c122f65b73
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4003e3a4(void)

{
  undefined1 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = DAT_ram_3007eac4;
  DAT_ram_3007eac4 = 0;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.10, address 0x4003e3cc.
 * REA evidence: ev_08522d7c8f232e036234ec21770e4bf8b7cdad8311af8f32e9405362d38fd586
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003e3cc(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40040ace(_DAT_ram_3007eab8);
  iVar2 = FUN_ram_40040ace(_DAT_ram_3007eabc);
  if (iVar1 == 0) {
    if (DAT_ram_3007eac0 != '\0') {
      if (_DAT_ram_3007eac2 != 0xffff) {
        _DAT_ram_3007eac2 = _DAT_ram_3007eac2 + 1;
      }
      if ((DAT_ram_3007eac5 == '\0') && (299 < _DAT_ram_3007eac2)) {
        DAT_ram_3007eac5 = '\x01';
        if (DAT_ram_3007eac4 != -1) {
          DAT_ram_3007eac4 = DAT_ram_3007eac4 + '\x01';
        }
      }
      goto LAB_ram_4003e468;
    }
    DAT_ram_3007eac0 = '\x01';
  }
  else {
    if (((DAT_ram_3007eac0 != '\0') && (DAT_ram_3007eac5 == '\0')) && (DAT_ram_3007eac6 != -1)) {
      DAT_ram_3007eac6 = DAT_ram_3007eac6 + '\x01';
    }
    DAT_ram_3007eac0 = '\0';
  }
  _DAT_ram_3007eac2 = 0;
  DAT_ram_3007eac5 = '\0';
LAB_ram_4003e468:
  if (iVar2 == 0) {
    DAT_ram_3007eac1 = 1;
  }
  else {
    if ((DAT_ram_3007eac1 != '\0') && (DAT_ram_3007eac7 != -1)) {
      DAT_ram_3007eac7 = DAT_ram_3007eac7 + '\x01';
    }
    DAT_ram_3007eac1 = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x4003e4de.
 * REA evidence: ev_23c765ef7a39dce1151656dc584f02ae4caea0fa7b805da8288310f9446b8d3b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003e628) */
/* WARNING: Removing unreachable block (ram,0x4003e618) */
/* WARNING: Removing unreachable block (ram,0x4003e608) */
/* WARNING: Removing unreachable block (ram,0x4003e5f8) */
/* WARNING: Removing unreachable block (ram,0x4003e5e8) */
/* WARNING: Removing unreachable block (ram,0x4003e5d6) */
/* WARNING: Removing unreachable block (ram,0x4003e5de) */
/* WARNING: Removing unreachable block (ram,0x4003e5f0) */
/* WARNING: Removing unreachable block (ram,0x4003e600) */
/* WARNING: Removing unreachable block (ram,0x4003e610) */
/* WARNING: Removing unreachable block (ram,0x4003e620) */
/* WARNING: Removing unreachable block (ram,0x4003e630) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003e4de(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  _DAT_ram_3007eaa4 = FUN_ram_40040ade(&DAT_ram_400966e4);
  _DAT_ram_3007eaac = FUN_ram_40040ade(&DAT_ram_400966ec);
  _DAT_ram_3007eab8 = FUN_ram_40040ade(&DAT_ram_400966f4);
  _DAT_ram_3007eaa8 = FUN_ram_40040ade(&DAT_ram_400966fc);
  _DAT_ram_3007eab0 = FUN_ram_40040ade(s_PE_10_ram_40096704);
  iVar6 = FUN_ram_40040ade(s_PE_11_ram_4009670c);
  iVar5 = _DAT_ram_3007eab8;
  iVar4 = _DAT_ram_3007eab0;
  iVar3 = _DAT_ram_3007eaac;
  iVar2 = _DAT_ram_3007eaa8;
  iVar1 = _DAT_ram_3007eaa4;
  _DAT_ram_3007eabc = iVar6;
  FUN_ram_40040aa6(_DAT_ram_3007eaa4,2);
  FUN_ram_40040aa6(_DAT_ram_3007eaac,2);
  FUN_ram_40040aa6(_DAT_ram_3007eab8,2);
  FUN_ram_40040aa6(_DAT_ram_3007eaa8,2);
  FUN_ram_40040aa6(_DAT_ram_3007eab0,2);
  FUN_ram_40040aa6(_DAT_ram_3007eabc,2);
  FUN_ram_4003ab6e(iVar1 / 0x20,iVar1 % 0x20,0x1ff);
  FUN_ram_4003ab6e(iVar3 / 0x20,iVar3 % 0x20,0x1ff);
  FUN_ram_4003ab6e(iVar5 / 0x20,iVar5 % 0x20,0xfff);
  FUN_ram_4003ab6e(iVar2 / 0x20,iVar2 % 0x20,0x1ff);
  FUN_ram_4003ab6e(iVar4 / 0x20,iVar4 % 0x20,0x1ff);
  FUN_ram_4003ab6e(iVar6 / 0x20,iVar6 % 0x20,0xfff);
  FUN_ram_40040a6e(_DAT_ram_3007eaa4,0,&LAB_ram_4003e1b6,0);
  FUN_ram_40040a6e(_DAT_ram_3007eaa8,0,&LAB_ram_4003e190,0);
  FUN_ram_40040a8c(_DAT_ram_3007eaa4,1);
  FUN_ram_40040a8c(_DAT_ram_3007eaa8,1);
  return;
}


/* NanoCore 1.10, address 0x4003e68c.
 * REA evidence: ev_d2d5d06c85766011679d559de04b33fc0c039914c14c475b2fd304a06156d6ad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4003e68c(void)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  
  piVar1 = (int *)(gp + -0x1d0);
  if (*piVar1 < 0) {
    iVar3 = FUN_ram_40040ade(&DAT_ram_40096714);
    *piVar1 = iVar3;
    if (-1 < iVar3) {
      FUN_ram_40040aa6(iVar3,1);
    }
  }
  bVar2 = false;
  if (-1 < *piVar1) {
    iVar3 = FUN_ram_40040ace(*piVar1);
    bVar2 = iVar3 == 1;
  }
  return bVar2;
}


/* NanoCore 1.10, address 0x4003e6d0.
 * REA evidence: ev_a5488818d74439d95f2e033a9ef5d84ee4283aa36fe79da7a51849c73fa217f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003e6d0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(gp + -0x1e4);
  if (*piVar1 < 0) {
    iVar2 = FUN_ram_40040ade(s_PD_18_ram_400966dc);
    *piVar1 = iVar2;
    if (-1 < iVar2) {
      FUN_ram_40040aa6(iVar2,0);
    }
  }
  if (-1 < *piVar1) {
    FUN_ram_40040aba(*piVar1,param_1 == 0);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4003e71c.
 * REA evidence: ev_577287d61becfb295967241ba01818498412e2eb0cdf4a8872b90cf69f9568b2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003e71c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(gp + -0x1e0);
  if (*piVar1 < 0) {
    iVar2 = FUN_ram_40040ade(s_PD_17_ram_400957d0);
    *piVar1 = iVar2;
    if (-1 < iVar2) {
      FUN_ram_40040aa6(iVar2,0);
    }
  }
  if (-1 < *piVar1) {
    FUN_ram_40040aba(*piVar1,param_1 == 0);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4003e768.
 * REA evidence: ev_74cf48c2f3c077c2b07a7798a7b109bec86b1c90213a53ce745c7452a5e4628c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003e768(void)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  if (DAT_ram_3007eaca == '\0') {
    uVar3 = FUN_ram_40040ade(&DAT_ram_4009671c);
    puVar1 = (uint *)(gp + -0x1d8);
    *puVar1 = uVar3;
    iVar4 = FUN_ram_40040ade(&DAT_ram_400966d4);
    piVar5 = (int *)(gp + -0x1dc);
    *piVar5 = iVar4;
    iVar4 = FUN_ram_40040ade(s_PD_18_ram_400966dc);
    *(int *)(gp + -0x1e4) = iVar4;
    if (((-1 < (int)*puVar1) && (-1 < *piVar5)) && (-1 < iVar4)) {
      FUN_ram_40040aa6(*puVar1,1);
      FUN_ram_40040aa6(*piVar5,0);
      FUN_ram_40040aa6(*(int *)(gp + -0x1e4),0);
      FUN_ram_4003ab6e(*puVar1 >> 5,*puVar1 & 0x1f,0x1ff);
      iVar4 = FUN_ram_4003dc68();
      if (((iVar4 == 0) && (iVar4 = FUN_ram_4003dd36(), iVar4 == 0)) &&
         ((iVar4 = FUN_ram_40040ace(*puVar1), iVar4 == 0 && (iVar4 = FUN_ram_4003e68c(), iVar4 != 0)
          ))) {
        FUN_ram_4003ede4();
        uVar2 = 0;
        FUN_ram_40040aba(*piVar5,0);
        do {
          FUN_ram_4003dad2(0);
          iVar4 = FUN_ram_40040ace(*puVar1);
          if (iVar4 == 1) {
            uVar2 = uVar2 + 10;
            if (99 < uVar2) break;
          }
          else {
            uVar2 = 0;
          }
          FUN_ram_400065d4(10);
        } while( true );
      }
      iVar4 = FUN_ram_4003dd36();
      if (iVar4 == 1) {
        FUN_ram_4003dd94();
      }
      FUN_ram_40040aba(*piVar5,1);
      FUN_ram_4003e71c(0);
      FUN_ram_4003e6d0(0);
      *(undefined1 *)(gp + -0x1d4) = 1;
      _DAT_ram_3007eac8 = 0;
      _DAT_ram_3007eacc = 0;
      DAT_ram_3007ead0 = 0;
      DAT_ram_3007ead1 = 0;
      iVar4 = FUN_ram_40040ace(*puVar1);
      DAT_ram_3007ead2 = iVar4 == 1;
      DAT_ram_3007eaca = '\x01';
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4003e8c2.
 * REA evidence: ev_0b88863449984c11943dd08b16a41fb978fee7c0da7361046fdc64de92e01ac4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e8c2(void)

{
  FUN_ram_4003e768();
  return 0;
}


/* NanoCore 1.10, address 0x4003e8d2.
 * REA evidence: ev_0848f6e84abfdce14d80fbaed23bbd0d77672d8939e197eb20a18f6332fe9569
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003e8d2(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  FUN_ram_4003e0e8(s_PD_16_ram_40092784,0);
  FUN_ram_4003e0e8(s_PD_10_ram_400927bc,0);
  FUN_ram_4003e6d0(0);
  FUN_ram_4003e71c(0);
  if (param_1 != 0) {
    FUN_ram_40040aba(*(undefined4 *)(gp + -0x1dc),0);
  }
  *(undefined1 *)(gp + -0x1d4) = 0;
  DAT_ram_3007ead2 = 1;
  _DAT_ram_3007eac8 = 0;
  _DAT_ram_3007eacc = 0;
  DAT_ram_3007ead0 = 0;
  DAT_ram_3007ead1 = 0;
  FUN_ram_400065d4(300);
  iVar2 = FUN_ram_4003e68c();
  if (iVar2 == 0) {
    return;
  }
  FUN_ram_4000ea4a();
  while (iVar2 = FUN_ram_40040ace(*(undefined4 *)(gp + -0x1d8)), iVar2 == 1) {
    FUN_ram_40028b8a(3);
    FUN_ram_400065d4(0x14);
  }
  do {
    FUN_ram_40028b8a(3);
    uVar1 = 0;
    while (iVar2 = FUN_ram_40040ace(*(undefined4 *)(gp + -0x1d8)), iVar2 == 1) {
      uVar1 = uVar1 + 10;
      FUN_ram_400065d4(10);
      if (99 < uVar1) {
        FUN_ram_40028cc2();
      }
    }
    FUN_ram_400065d4(0x14);
  } while( true );
}


/* NanoCore 1.10, address 0x4003e9b6.
 * REA evidence: ev_dcbd009862ff4c38934e45c8e70966b3163ec4fa4784de547d400f96f10f879c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e9b6(void)

{
  return 1;
}


/* NanoCore 1.10, address 0x4003e9ba.
 * REA evidence: ev_5a44a74c62dd1a32fa057a7f21e782772e7f04623c521e4e76bb65b0b3a4696b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_ram_4003e9ba(void)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (((-1 < *(int *)(gp + -0x1d8)) && (-1 < *(int *)(gp + -0x1dc))) && (-1 < *(int *)(gp + -0x1e4))
     ) {
    FUN_ram_400002f4();
    if (((*(char *)(gp + -0x1d4) != '\0') && (DAT_ram_3007ead2 == '\0')) &&
       (DAT_ram_3007ead0 != '\0')) {
      uVar1 = _DAT_ram_3007eac8;
    }
    FUN_ram_400002fa();
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4003ea0e.
 * REA evidence: ev_caca525798e2c880d35aaeba19ced5aa972b656918578816580abbe1490c8158
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ea0e(void)

{
  if (*(char *)(gp + -0x1d4) != '\0') {
    FUN_ram_40012768();
    FUN_ram_4003e8d2(1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4003ea28.
 * REA evidence: ev_1ccfd1c047a312356ae01d9d1d4258a92bd09b841f7301e7ba6e74d6a094b19f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ea28(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4003e68c();
  if (iVar1 == 0) {
    if (*(char *)(gp + -0x1d4) == '\0') {
      return 0;
    }
    iVar1 = FUN_ram_4003e68c();
    if (iVar1 == 0) {
      FUN_ram_40040aba(*(undefined4 *)(gp + -0x1dc),0);
      uVar2 = FUN_ram_4003e8d2(0);
      return uVar2;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4003ea5a.
 * REA evidence: ev_c2c9779b2c7b37a47de48c720aab9837dfe34e9d37b6b219b966d80f73085c2e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003eafc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003ea5a(void)

{
  int iVar1;
  uint uVar2;
  
  if (((*(int *)(gp + -0x1d8) < 0) || (*(int *)(gp + -0x1dc) < 0)) || (*(int *)(gp + -0x1e4) < 0)) {
    return;
  }
  iVar1 = FUN_ram_40040ace();
  if (DAT_ram_3007ead2 == '\0') {
    if (*(char *)(gp + -0x1d4) != '\0') {
      if (iVar1 == 1) {
        iVar1 = FUN_ram_400042fa();
        if (DAT_ram_3007ead0 != '\0') {
          uVar2 = (iVar1 - _DAT_ram_3007eacc) * 1000;
          if (uVar2 < 0x3e80000) {
            uVar2 = uVar2 / 1000;
          }
          else {
            uVar2 = 0xffff;
          }
          _DAT_ram_3007eac8 = (undefined2)uVar2;
          if (DAT_ram_3007ead1 != '\0') {
            return;
          }
          if ((uVar2 & 0xffff) < 0x5dc) {
            return;
          }
          DAT_ram_3007ead1 = 1;
          return;
        }
        DAT_ram_3007ead0 = '\x01';
        _DAT_ram_3007eacc = iVar1;
      }
      else {
        if (DAT_ram_3007ead0 != '\0') {
          DAT_ram_3007ead0 = '\0';
        }
        _DAT_ram_3007eacc = 0;
      }
      _DAT_ram_3007eac8 = 0;
      DAT_ram_3007ead1 = '\0';
    }
  }
  else if (iVar1 != 1) {
    DAT_ram_3007ead2 = '\0';
    DAT_ram_3007ead0 = '\0';
  }
  return;
}


/* NanoCore 1.10, address 0x4003eb56.
 * REA evidence: ev_f6da6f92bafac7bf96ee720c19d90141a294556f10920a0a8a89e57c8aadf4a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003eb56(void)

{
  int *piVar1;
  
  FUN_ram_400369c8(0x13);
  FUN_ram_40036a22(0x13);
  piVar1 = (int *)(gp + -0x1cc);
  do {
    if (*piVar1 != 0) {
      if (piVar1[2] == 0) {
        FUN_ram_40036b5c(piVar1[1]);
        FUN_ram_400369fe(piVar1[1]);
      }
      else {
        FUN_ram_40036b5c();
        FUN_ram_400369fe(piVar1[2]);
        FUN_ram_40036aa0(piVar1[1],piVar1[2]);
      }
    }
    piVar1 = piVar1 + 3;
  } while (piVar1 != (int *)(gp + -0x16c));
  FUN_ram_40036bf2(0x24);
  FUN_ram_40036bf2(0x36);
  return;
}


/* NanoCore 1.10, address 0x4003ebb8.
 * REA evidence: ev_3e7174dec6c248b6e67d7e33be5086fc51d9b909b6bc6f95e29c356b4aefa69a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003ebb8(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined1 **)(iVar1 * 4 + 0x3007f3f4) = &LAB_ram_40000580;
    *(undefined4 *)(iVar1 * 4 + 0x3007ef64) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x60);
  iVar1 = 0x60;
  do {
    *(undefined4 *)(iVar1 * 4 + 0x3007f3f4) = 0;
    *(undefined4 *)(iVar1 * 4 + 0x3007ef64) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x124);
  _DAT_ram_3007f410 = FUN_ram_4003ee1e;
  _DAT_ram_3007f884 = &DAT_ram_4003ee80;
  return;
}


/* NanoCore 1.10, address 0x4003ec12.
 * REA evidence: ev_d0046a7d5c6ff39f1a1075adc11b11bc240c16bfe82c3027baa7ccba9d6d8d3f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ec12(uint param_1)

{
  code *UNRECOVERED_JUMPTABLE_00;
  
  if ((param_1 < 0x124) &&
     (UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1 * 4 + 0x3007f3f4),
     UNRECOVERED_JUMPTABLE_00 != (code *)0x0)) {
    *(int *)(param_1 * 4 + 0x3007ead4) = *(int *)(param_1 * 4 + 0x3007ead4) + 1;
    if (0x5f < param_1) {
                    /* WARNING: Could not recover jumptable at 0x4003ec50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(*(undefined4 *)(param_1 * 4 + 0x3007ef64));
      return;
    }
                    /* WARNING: Could not emulate address calculation at 0x4003ec22 */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4003ec56.
 * REA evidence: ev_6247916197041d3a2e7cd7ac5f8f812258eefc159549282111aead713a807796
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ec56(uint param_1)

{
  if (param_1 < 0x60) {
    *(byte *)(param_1 * 4 + 0x20801001) = *(byte *)(param_1 * 4 + 0x20801001) | 1;
  }
  return;
}


/* NanoCore 1.10, address 0x4003ec7c.
 * REA evidence: ev_5c6287a2dcb452e2f21a8b5acac688a9b53a016750c8e5488a10dea23a6b91c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ec7c(uint param_1)

{
  if (param_1 < 0x60) {
    *(byte *)(param_1 * 4 + 0x20801001) = *(byte *)(param_1 * 4 + 0x20801001) & 0xfe;
  }
  return;
}


/* NanoCore 1.10, address 0x4003ec9e.
 * REA evidence: ev_4dbe3a77bb056c2ae2d1525a555621b3e5062e05baf09f67bbf5d6a0b7877bcc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ec9e(uint param_1,int param_2,undefined4 param_3)

{
  if ((param_1 < 0x124) && (param_2 != 0)) {
    *(int *)(param_1 * 4 + 0x3007f3f4) = param_2;
    *(undefined4 *)(param_1 * 4 + 0x3007ef64) = param_3;
    *(undefined4 *)(param_1 * 4 + 0x3007ead4) = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x4003ecce.
 * REA evidence: ev_8becda35f0f50ed3e90f448cb8f59c25fb47033081bf96d2246795a89a31e082
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ecce(void)

{
  return DAT_ram_30045d14;
}


/* NanoCore 1.10, address 0x4003ecd8.
 * REA evidence: ev_9bf4b88ec91152a4a948b38413a6f7f62e8cf5dde37b30c0da73d0c9fadb4c12
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ecd8(undefined4 param_1)

{
  DAT_ram_30045d14 = param_1;
  return;
}


/* NanoCore 1.10, address 0x4003ece2.
 * REA evidence: ev_546bfefa31196f1e973f5e0993a0871bf744a1cdf96a95605ec9178a70a9d8b3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_4003ece2(void)

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


/* NanoCore 1.10, address 0x4003ed30.
 * REA evidence: ev_c1ea4e832efd25c74cef385ddd7a7b3dc75f3d9dcd06964150944af34998cefd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ed30(byte param_1)

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


/* NanoCore 1.10, address 0x4003ed7e.
 * REA evidence: ev_f3635006cfc19402efbe30e80861f6bf8334a36753fc3d178629235276762f42
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ed7e(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_4003ece2();
  if ((uVar1 & 8) == 0) {
    FUN_ram_4003ed30(8);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4003ed9a.
 * REA evidence: ev_4f7db73c6e5566c10df58822b47b6f157d5032e28c6041b05b742cf5b0ef720c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003ed9a(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_4003ece2();
  if ((uVar1 & 8) == 0) {
    uVar1 = 0;
  }
  return uVar1 & 3;
}


/* NanoCore 1.10, address 0x4003edb2.
 * REA evidence: ev_9190b00af4220d36ffac64fd026017c2af095635c0fd7b1d53e03161644bc01f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003edb2(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_ram_4003ece2();
  if ((uVar1 & 8) == 0) {
    uVar1 = 8;
  }
  uVar2 = param_1 & 0xff;
  if (3 < param_1) {
    uVar2 = 3;
  }
  FUN_ram_4003ed30(uVar1 & 0xfffffffc | uVar2 | 8);
  return;
}


/* NanoCore 1.10, address 0x4003ede4.
 * REA evidence: ev_af1f1d167a4d970facffd2f0ccd72a71e55c1aea34dc65686abdbeebe40917a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ede4(void)

{
  FUN_ram_4003edb2(0);
  return;
}


/* NanoCore 1.10, address 0x4003edea.
 * REA evidence: ev_a9f3aa1293bed8191969c13a97f4b8827e3ed92adbdb11b8197d65f68473e955
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003edea(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_4003ece2();
  if ((uVar1 & 8) == 0) {
    uVar1 = 0;
  }
  return (uVar1 & 7) >> 2;
}


/* NanoCore 1.10, address 0x4003ee04.
 * REA evidence: ev_51f3e5f76cd60636fcecb18f91813dd89451576efc3a352f736c99a74a75cd83
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ee04(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_4003ece2();
  if ((uVar1 & 8) == 0) {
    uVar1 = 8;
  }
  FUN_ram_4003ed30(uVar1 & 0xfffffffb);
  return;
}


/* NanoCore 1.10, address 0x4003ee1e.
 * REA evidence: ev_18721925aa8d61bd73c5332f3623e2a4ca2075c6ee455f2acc6d0eb00a4977ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003ee2e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003ee1e(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003ee82();
  if ((_DAT_ram_20004000 == 0 && _DAT_ram_20004004 == 0) ||
     ((_DAT_ram_20004000 == -1 && (_DAT_ram_20004004 == -1)))) {
    _DAT_ram_20004000 =
         (ulonglong)(uint)(iVar1 / 1000) + CONCAT44(_DAT_ram_2000bffc,_DAT_ram_2000bff8);
  }
  else {
    _DAT_ram_20004000 =
         (ulonglong)(uint)(iVar1 / 1000) + CONCAT44(_DAT_ram_20004004,_DAT_ram_20004000);
  }
  FUN_ram_40004304();
  return;
}


/* NanoCore 1.10, address 0x4003ee82.
 * REA evidence: ev_f255635043844e05b5e16f2dc180508350659d4e58ab9042e038f341b07c1914
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ee82(void)

{
  return 4000000;
}


/* NanoCore 1.10, address 0x4003ee8c.
 * REA evidence: ev_5adc215a528fc84950a3d8d261bf5092b2b0d26ad1a3d71606cd097e68072f36
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ee8c(void)

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


/* NanoCore 1.10, address 0x4003eec4.
 * REA evidence: ev_a663a3944a6383f5371157adb992a18b2fe267c0975e7c7f4ac00c14cfefcbf8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003eec4(void)

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


/* NanoCore 1.10, address 0x4003ef0c.
 * REA evidence: ev_a265221ccc592619b8f29a0d2d593c1591d740d5e3e0e95cb86e9fd2c2244f26
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ef0c(void)

{
  FUN_ram_4003712e();
  FUN_ram_400369c8(0x14);
  FUN_ram_400369c8(0x13);
  FUN_ram_400369c8(0x12);
  return;
}


/* NanoCore 1.10, address 0x4003ef2a.
 * REA evidence: ev_a40152e477d70caf7fb13698aca37d709946c53ee34ed5ade6b7ebe75d04951c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003ef2a(void)

{
  _DAT_ram_1802090c = 0x3100;
  _DAT_ram_19050000 = 1;
  return;
}


/* NanoCore 1.10, address 0x4003ef42.
 * REA evidence: ev_3cee291308b06f699afb8eb3b0997346fab244d6b492908a343505424fbb353f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4003eec4(void)

{
  FUN_ram_4003eec4();
  return;
}


/* NanoCore 1.10, address 0x4003ef46.
 * REA evidence: ev_03e6b49176006996bd16449b15512fdb2042a3a5e89b9bb1a77173dcce4eecac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4003ee8c(void)

{
  FUN_ram_4003ee8c();
  return;
}


/* NanoCore 1.10, address 0x4003ef4a.
 * REA evidence: ev_1db65490132207e6a5a0d447fca861f5aac6a1e4b155fc4772e17ed30699780e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003efda) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003ef4a(void)

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
  FUN_ram_4003eec4();
  FUN_ram_4003ee8c();
  FUN_ram_4003ec56(3);
  FUN_ram_4003ebb8();
  FUN_ram_4003ef2a();
  FUN_ram_4003ef0c();
  iVar1 = FUN_ram_4003ee82();
  if ((_DAT_ram_20004000 == 0 && _DAT_ram_20004004 == 0) ||
     ((_DAT_ram_20004000 == -1 && (_DAT_ram_20004004 == -1)))) {
    _DAT_ram_20004000 =
         (ulonglong)(uint)(iVar1 / 1000) + CONCAT44(_DAT_ram_2000bffc,_DAT_ram_2000bff8);
  }
  else {
    _DAT_ram_20004000 =
         (ulonglong)(uint)(iVar1 / 1000) + CONCAT44(_DAT_ram_20004004,_DAT_ram_20004000);
  }
  FUN_ram_4003ec56(7);
  return;
}


