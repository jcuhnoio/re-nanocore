/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4003f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4003f00c.
 * REA evidence: ev_95a4a060c127b25a497662fcdfcbde551bae4ba4ea602020debe696d5a58c9a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f00c(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_ram_4003b720();
  if ((int)uVar2 < 0) {
    return;
  }
  iVar1 = (int)uVar2 >> 5;
  uVar2 = uVar2 & 0x1f;
  FUN_ram_4003b914(iVar1,uVar2,1);
  FUN_ram_4003b98e(iVar1,uVar2,0);
  FUN_ram_4003b94e(iVar1,uVar2,3);
  FUN_ram_4003ba50(iVar1,uVar2);
  if (param_2 != 0) {
    FUN_ram_4003b7ce();
    return;
  }
  FUN_ram_4003b7a0(iVar1,uVar2);
  return;
}


/* NanoCore 1.11, address 0x4003f100.
 * REA evidence: ev_8d5255c494715bd4b37939b5bdc6396827559001a9ee35f4d7962a507742ecef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f100(void)

{
  FUN_ram_4003f00c(&DAT_ram_40098550,1);
  return;
}


/* NanoCore 1.11, address 0x4003f10e.
 * REA evidence: ev_f3b31cb8da7a2ef04fa2f8e450953919957ec4d78c154f3138fd41a54c29f9d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f10e(void)

{
  FUN_ram_4003f100();
  FUN_ram_4003f00c(s_PD_17_ram_4009764c,1);
  FUN_ram_4003f00c(s_PD_18_ram_40098558,1);
  FUN_ram_4003f00c(s_PD_16_ram_4009456c,0);
  FUN_ram_4003f00c(s_PD_10_ram_400945a4,0);
  return;
}


/* NanoCore 1.11, address 0x4003f152.
 * REA evidence: ev_497699fdb90c0c1735e9f6104fb555b76cb2d5ad688a89c3e991eb09370da77e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4003f10e(void)

{
  FUN_ram_4003f10e();
  return;
}


/* NanoCore 1.11, address 0x4003f156.
 * REA evidence: ev_355593c99aab0e9127b7c87c469294923dbe9c06b11152f101e404fdfe242115
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f156(void)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = (undefined1 *)(gp + -0x358);
  FUN_ram_4003f100();
  FUN_ram_4003f10e();
  do {
    uVar4 = FUN_ram_4003b720(*(undefined4 *)(puVar1 + 4));
    if (-1 < (int)uVar4) {
      iVar3 = (int)uVar4 >> 5;
      uVar4 = uVar4 & 0x1f;
      FUN_ram_4003b914(iVar3,uVar4,*puVar1);
      FUN_ram_4003b98e(iVar3,uVar4,puVar1[1]);
      FUN_ram_4003b94e(iVar3,uVar4,puVar1[2]);
    }
    puVar1 = puVar1 + 0xc;
  } while (puVar1 != (undefined1 *)(gp + -0x238));
  puVar1 = (undefined1 *)(gp + -0x238);
  do {
    uVar4 = FUN_ram_4003b720(*(undefined4 *)(puVar1 + 4));
    if (-1 < (int)uVar4) {
      uVar2 = uVar4 & 0x1f;
      iVar3 = (int)uVar4 >> 5;
      FUN_ram_4003b914(iVar3,uVar2,*puVar1);
      FUN_ram_4003b98e(iVar3,uVar2,puVar1[1]);
      FUN_ram_4003b94e(iVar3,uVar2,puVar1[2]);
      if (puVar1[8] == '\0') {
        FUN_ram_4003ba50(iVar3,uVar2);
      }
      else {
        FUN_ram_4003ba10();
      }
      if (puVar1[9] == '\0') {
        FUN_ram_4003b7a0(iVar3,uVar2);
      }
      else {
        FUN_ram_4003b7ce();
      }
    }
    puVar1 = puVar1 + 0xc;
  } while (puVar1 != (undefined1 *)(gp + -0x1e4));
  return;
}


/* NanoCore 1.11, address 0x4003f228.
 * REA evidence: ev_a6fc358255ccfc24c30297c2be153fed2b17cfd4195d48ac7d030461925a3cef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003f228(void)

{
  int iVar1;
  
  FUN_ram_400002f4();
  iVar1 = (int)_DAT_ram_3007fe34;
  _DAT_ram_3007fe34 = 0;
  FUN_ram_400002fa();
  return iVar1;
}


/* NanoCore 1.11, address 0x4003f250.
 * REA evidence: ev_4ba860b9a57c681491a36d6344a34e494102b7ad095f652d2e3cea9e851f32a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003f250(void)

{
  int iVar1;
  
  FUN_ram_400002f4();
  iVar1 = (int)_DAT_ram_3007fe36;
  _DAT_ram_3007fe36 = 0;
  FUN_ram_400002fa();
  return iVar1;
}


/* NanoCore 1.11, address 0x4003f278.
 * REA evidence: ev_c3d59a9fd16c4a36ecb6b3fd125a5eb35c8ce94622253136f3da9f11057637b2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4003f278(void)

{
  undefined1 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = DAT_ram_3007fe46;
  DAT_ram_3007fe46 = 0;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.11, address 0x4003f2a0.
 * REA evidence: ev_3d3743a4563e2dd675a2db94bd61814b0ec398693a5033adb15455dce2463364
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4003f2a0(void)

{
  undefined1 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = DAT_ram_3007fe47;
  DAT_ram_3007fe47 = 0;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.11, address 0x4003f2c8.
 * REA evidence: ev_c8008009328e76a12d5cb8b21d8bd67f417872b6e681b204d1f309a9e62e4c87
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4003f2c8(void)

{
  undefined1 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = DAT_ram_3007fe44;
  DAT_ram_3007fe44 = 0;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.11, address 0x4003f2f0.
 * REA evidence: ev_a229d055f1efcc5e2321683f27aabe8001218f7ede93afc108bfdc2be547ad2f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003f2f0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40041a06(_DAT_ram_3007fe38);
  iVar2 = FUN_ram_40041a06(_DAT_ram_3007fe3c);
  if (iVar1 == 0) {
    if (DAT_ram_3007fe40 != '\0') {
      if (_DAT_ram_3007fe42 != 0xffff) {
        _DAT_ram_3007fe42 = _DAT_ram_3007fe42 + 1;
      }
      if ((DAT_ram_3007fe45 == '\0') && (299 < _DAT_ram_3007fe42)) {
        DAT_ram_3007fe45 = '\x01';
        if (DAT_ram_3007fe44 != -1) {
          DAT_ram_3007fe44 = DAT_ram_3007fe44 + '\x01';
        }
      }
      goto LAB_ram_4003f38c;
    }
    DAT_ram_3007fe40 = '\x01';
  }
  else {
    if (((DAT_ram_3007fe40 != '\0') && (DAT_ram_3007fe45 == '\0')) && (DAT_ram_3007fe46 != -1)) {
      DAT_ram_3007fe46 = DAT_ram_3007fe46 + '\x01';
    }
    DAT_ram_3007fe40 = '\0';
  }
  _DAT_ram_3007fe42 = 0;
  DAT_ram_3007fe45 = '\0';
LAB_ram_4003f38c:
  if (iVar2 == 0) {
    DAT_ram_3007fe41 = 1;
  }
  else {
    if ((DAT_ram_3007fe41 != '\0') && (DAT_ram_3007fe47 != -1)) {
      DAT_ram_3007fe47 = DAT_ram_3007fe47 + '\x01';
    }
    DAT_ram_3007fe41 = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x4003f402.
 * REA evidence: ev_230c3e4232cb81fa9c1d31457e774884709597767424547a1bc187eb75f8f43e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003f54c) */
/* WARNING: Removing unreachable block (ram,0x4003f53c) */
/* WARNING: Removing unreachable block (ram,0x4003f52c) */
/* WARNING: Removing unreachable block (ram,0x4003f51c) */
/* WARNING: Removing unreachable block (ram,0x4003f50c) */
/* WARNING: Removing unreachable block (ram,0x4003f4fa) */
/* WARNING: Removing unreachable block (ram,0x4003f502) */
/* WARNING: Removing unreachable block (ram,0x4003f514) */
/* WARNING: Removing unreachable block (ram,0x4003f524) */
/* WARNING: Removing unreachable block (ram,0x4003f534) */
/* WARNING: Removing unreachable block (ram,0x4003f544) */
/* WARNING: Removing unreachable block (ram,0x4003f554) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003f402(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  _DAT_ram_3007fe24 = FUN_ram_40041a16(&DAT_ram_40098560);
  _DAT_ram_3007fe2c = FUN_ram_40041a16(&DAT_ram_40098568);
  _DAT_ram_3007fe38 = FUN_ram_40041a16(&DAT_ram_40098570);
  _DAT_ram_3007fe28 = FUN_ram_40041a16(&DAT_ram_40098578);
  _DAT_ram_3007fe30 = FUN_ram_40041a16(s_PE_10_ram_40098580);
  iVar6 = FUN_ram_40041a16(s_PE_11_ram_40098588);
  iVar5 = _DAT_ram_3007fe38;
  iVar4 = _DAT_ram_3007fe30;
  iVar3 = _DAT_ram_3007fe2c;
  iVar2 = _DAT_ram_3007fe28;
  iVar1 = _DAT_ram_3007fe24;
  _DAT_ram_3007fe3c = iVar6;
  FUN_ram_400419de(_DAT_ram_3007fe24,2);
  FUN_ram_400419de(_DAT_ram_3007fe2c,2);
  FUN_ram_400419de(_DAT_ram_3007fe38,2);
  FUN_ram_400419de(_DAT_ram_3007fe28,2);
  FUN_ram_400419de(_DAT_ram_3007fe30,2);
  FUN_ram_400419de(_DAT_ram_3007fe3c,2);
  FUN_ram_4003ba92(iVar1 / 0x20,iVar1 % 0x20,0x1ff);
  FUN_ram_4003ba92(iVar3 / 0x20,iVar3 % 0x20,0x1ff);
  FUN_ram_4003ba92(iVar5 / 0x20,iVar5 % 0x20,0xfff);
  FUN_ram_4003ba92(iVar2 / 0x20,iVar2 % 0x20,0x1ff);
  FUN_ram_4003ba92(iVar4 / 0x20,iVar4 % 0x20,0x1ff);
  FUN_ram_4003ba92(iVar6 / 0x20,iVar6 % 0x20,0xfff);
  FUN_ram_400419a6(_DAT_ram_3007fe24,0,&LAB_ram_4003f0da,0);
  FUN_ram_400419a6(_DAT_ram_3007fe28,0,&LAB_ram_4003f0b4,0);
  FUN_ram_400419c4(_DAT_ram_3007fe24,1);
  FUN_ram_400419c4(_DAT_ram_3007fe28,1);
  return;
}


/* NanoCore 1.11, address 0x4003f5b0.
 * REA evidence: ev_30da730b47bef79bac6169c81dd6ec0960158cf13bc94b03ff429f75d2f561eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4003f5b0(void)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  
  piVar1 = (int *)(gp + -0x1d0);
  if (*piVar1 < 0) {
    iVar3 = FUN_ram_40041a16(&DAT_ram_40098590);
    *piVar1 = iVar3;
    if (-1 < iVar3) {
      FUN_ram_400419de(iVar3,1);
    }
  }
  bVar2 = false;
  if (-1 < *piVar1) {
    iVar3 = FUN_ram_40041a06(*piVar1);
    bVar2 = iVar3 == 1;
  }
  return bVar2;
}


/* NanoCore 1.11, address 0x4003f5f4.
 * REA evidence: ev_ee5593135d236c5b9fe9dcc6174a96855cee850b615dac33b41ed5c3b465b12f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f5f4(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(gp + -0x1e4);
  if (*piVar1 < 0) {
    iVar2 = FUN_ram_40041a16(s_PD_18_ram_40098558);
    *piVar1 = iVar2;
    if (-1 < iVar2) {
      FUN_ram_400419de(iVar2,0);
    }
  }
  if (-1 < *piVar1) {
    FUN_ram_400419f2(*piVar1,param_1 == 0);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4003f640.
 * REA evidence: ev_d3cdf5132988f092430714f7c8edaca2fa396e24d8941661883681583616434b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f640(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(gp + -0x1e0);
  if (*piVar1 < 0) {
    iVar2 = FUN_ram_40041a16(s_PD_17_ram_4009764c);
    *piVar1 = iVar2;
    if (-1 < iVar2) {
      FUN_ram_400419de(iVar2,0);
    }
  }
  if (-1 < *piVar1) {
    FUN_ram_400419f2(*piVar1,param_1 == 0);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4003f68c.
 * REA evidence: ev_4fb21821b3b6282f2d3193cefb7ac2199cf272a897c7d95ec44cb85c2ec5bc2d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003f68c(void)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  if (DAT_ram_3007fe4a == '\0') {
    uVar3 = FUN_ram_40041a16(&DAT_ram_40098598);
    puVar1 = (uint *)(gp + -0x1d8);
    *puVar1 = uVar3;
    iVar4 = FUN_ram_40041a16(&DAT_ram_40098550);
    piVar5 = (int *)(gp + -0x1dc);
    *piVar5 = iVar4;
    iVar4 = FUN_ram_40041a16(s_PD_18_ram_40098558);
    *(int *)(gp + -0x1e4) = iVar4;
    if (((-1 < (int)*puVar1) && (-1 < *piVar5)) && (-1 < iVar4)) {
      FUN_ram_400419de(*puVar1,1);
      FUN_ram_400419de(*piVar5,0);
      FUN_ram_400419de(*(int *)(gp + -0x1e4),0);
      FUN_ram_4003ba92(*puVar1 >> 5,*puVar1 & 0x1f,0x1ff);
      iVar4 = FUN_ram_4003eb8c();
      if (((iVar4 == 0) && (iVar4 = FUN_ram_4003ec5a(), iVar4 == 0)) &&
         ((iVar4 = FUN_ram_40041a06(*puVar1), iVar4 == 0 && (iVar4 = FUN_ram_4003f5b0(), iVar4 != 0)
          ))) {
        FUN_ram_4003fd1c();
        FUN_ram_4002cb2e();
        uVar2 = 0;
        FUN_ram_400419f2(*piVar5,0);
        do {
          FUN_ram_4003e9f6(0);
          nc_radio_retry_disable_during_shutdown();
          iVar4 = FUN_ram_40041a06(*puVar1);
          if (iVar4 == 1) {
            uVar2 = uVar2 + 10;
            if (99 < uVar2) break;
          }
          else {
            uVar2 = 0;
          }
          FUN_ram_400065c6(10);
        } while( true );
      }
      iVar4 = FUN_ram_4003ec5a();
      if (iVar4 == 1) {
        FUN_ram_4003ecb8();
      }
      FUN_ram_400419f2(*piVar5,1);
      FUN_ram_4003f640(0);
      FUN_ram_4003f5f4(0);
      *(undefined1 *)(gp + -0x1d4) = 1;
      _DAT_ram_3007fe48 = 0;
      _DAT_ram_3007fe4c = 0;
      DAT_ram_3007fe50 = 0;
      DAT_ram_3007fe51 = 0;
      iVar4 = FUN_ram_40041a06(*puVar1);
      DAT_ram_3007fe52 = iVar4 == 1;
      DAT_ram_3007fe4a = '\x01';
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4003f7ee.
 * REA evidence: ev_a556fd6e67171e2a31958b7a56aca4be1e87be948a720d7735897380613bd639
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003f7ee(void)

{
  FUN_ram_4003f68c();
  return 0;
}


/* NanoCore 1.11, address 0x4003f8ee.
 * REA evidence: ev_2f203a770f1f531765f1dbc8be77c762262568f14e9b282045cca71e29abfb6d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003f8ee(void)

{
  return 1;
}


/* NanoCore 1.11, address 0x4003f8f2.
 * REA evidence: ev_9c4e87ab2d617a18afb557abbf8494624364755c076a02e49e6abb6f8868ce8b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_ram_4003f8f2(void)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (((-1 < *(int *)(gp + -0x1d8)) && (-1 < *(int *)(gp + -0x1dc))) && (-1 < *(int *)(gp + -0x1e4))
     ) {
    FUN_ram_400002f4();
    if (((*(char *)(gp + -0x1d4) != '\0') && (DAT_ram_3007fe52 == '\0')) &&
       (DAT_ram_3007fe50 != '\0')) {
      uVar1 = _DAT_ram_3007fe48;
    }
    FUN_ram_400002fa();
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4003f946.
 * REA evidence: ev_3f294b9f81faa617d43dc5a8d735e3c727a335162a92c7dcca42e5e88c4a92a9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003f946(void)

{
  if (*(char *)(gp + -0x1d4) != '\0') {
    FUN_ram_40012e10();
    nc_poweroff_wait_loop(1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4003f960.
 * REA evidence: ev_83c022795180df68e4371835de85b4df189af168845de9093f2db270b8627977
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003f960(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4003f5b0();
  if (iVar1 == 0) {
    if (*(char *)(gp + -0x1d4) == '\0') {
      return 0;
    }
    iVar1 = FUN_ram_4003f5b0();
    if (iVar1 == 0) {
      FUN_ram_400419f2(*(undefined4 *)(gp + -0x1dc),0);
      uVar2 = nc_poweroff_wait_loop(0);
      return uVar2;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4003f992.
 * REA evidence: ev_111ab3c229785011c3714b150123466f1aa177c676688f4aaf696e76c81a1cd7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003fa34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003f992(void)

{
  int iVar1;
  uint uVar2;
  
  if (((*(int *)(gp + -0x1d8) < 0) || (*(int *)(gp + -0x1dc) < 0)) || (*(int *)(gp + -0x1e4) < 0)) {
    return;
  }
  iVar1 = FUN_ram_40041a06();
  if (DAT_ram_3007fe52 == '\0') {
    if (*(char *)(gp + -0x1d4) != '\0') {
      if (iVar1 == 1) {
        iVar1 = FUN_ram_400042ea();
        if (DAT_ram_3007fe50 != '\0') {
          uVar2 = (iVar1 - _DAT_ram_3007fe4c) * 1000;
          if (uVar2 < 0x3e80000) {
            uVar2 = uVar2 / 1000;
          }
          else {
            uVar2 = 0xffff;
          }
          _DAT_ram_3007fe48 = (undefined2)uVar2;
          if (DAT_ram_3007fe51 != '\0') {
            return;
          }
          if ((uVar2 & 0xffff) < 0x5dc) {
            return;
          }
          DAT_ram_3007fe51 = 1;
          return;
        }
        DAT_ram_3007fe50 = '\x01';
        _DAT_ram_3007fe4c = iVar1;
      }
      else {
        if (DAT_ram_3007fe50 != '\0') {
          DAT_ram_3007fe50 = '\0';
        }
        _DAT_ram_3007fe4c = 0;
      }
      _DAT_ram_3007fe48 = 0;
      DAT_ram_3007fe51 = '\0';
    }
  }
  else if (iVar1 != 1) {
    DAT_ram_3007fe52 = '\0';
    DAT_ram_3007fe50 = '\0';
  }
  return;
}


/* NanoCore 1.11, address 0x4003fa8e.
 * REA evidence: ev_27fc58a6c1afab162b1968d02b0bc0a5d5edca2430d95634fe02505faff7b102
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fa8e(void)

{
  int *piVar1;
  
  FUN_ram_4003789a(0x13);
  FUN_ram_400378f4(0x13);
  piVar1 = (int *)(gp + -0x1cc);
  do {
    if (*piVar1 != 0) {
      if (piVar1[2] == 0) {
        FUN_ram_40037a2e(piVar1[1]);
        FUN_ram_400378d0(piVar1[1]);
      }
      else {
        FUN_ram_40037a2e();
        FUN_ram_400378d0(piVar1[2]);
        FUN_ram_40037972(piVar1[1],piVar1[2]);
      }
    }
    piVar1 = piVar1 + 3;
  } while (piVar1 != (int *)(gp + -0x16c));
  FUN_ram_40037ac4(0x24);
  FUN_ram_40037ac4(0x36);
  return;
}


/* NanoCore 1.11, address 0x4003faf0.
 * REA evidence: ev_3c0f0399f48111dd9ad4560711771f5d3a762212d6840008a3b6df5aa5278ad3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003faf0(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined1 **)(iVar1 * 4 + 0x30080774) = &LAB_ram_40000580;
    *(undefined4 *)(iVar1 * 4 + 0x300802e4) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x60);
  iVar1 = 0x60;
  do {
    *(undefined4 *)(iVar1 * 4 + 0x30080774) = 0;
    *(undefined4 *)(iVar1 * 4 + 0x300802e4) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x124);
  _DAT_ram_30080790 = FUN_ram_4003fd56;
  _DAT_ram_30080c04 = &DAT_ram_4003fdb8;
  return;
}


/* NanoCore 1.11, address 0x4003fb4a.
 * REA evidence: ev_2c8922d9b7fac07680728d384b54623b335c020b93f8eb5c383de33067a385f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fb4a(uint param_1)

{
  code *UNRECOVERED_JUMPTABLE_00;
  
  if ((param_1 < 0x124) &&
     (UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1 * 4 + 0x30080774),
     UNRECOVERED_JUMPTABLE_00 != (code *)0x0)) {
    *(int *)(param_1 * 4 + 0x3007fe54) = *(int *)(param_1 * 4 + 0x3007fe54) + 1;
    if (0x5f < param_1) {
                    /* WARNING: Could not recover jumptable at 0x4003fb88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(*(undefined4 *)(param_1 * 4 + 0x300802e4));
      return;
    }
                    /* WARNING: Could not emulate address calculation at 0x4003fb5a */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4003fb8e.
 * REA evidence: ev_4ba4470a9da6101239bb5d9f525a82609d1587363f8c00feae462ce6f524f1ca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fb8e(uint param_1)

{
  if (param_1 < 0x60) {
    *(byte *)(param_1 * 4 + 0x20801001) = *(byte *)(param_1 * 4 + 0x20801001) | 1;
  }
  return;
}


/* NanoCore 1.11, address 0x4003fbb4.
 * REA evidence: ev_23fc6a28ceddb10413d87b53ee0ed8d3bdc8727a4c1efb5a8aa95728e67be17c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fbb4(uint param_1)

{
  if (param_1 < 0x60) {
    *(byte *)(param_1 * 4 + 0x20801001) = *(byte *)(param_1 * 4 + 0x20801001) & 0xfe;
  }
  return;
}


/* NanoCore 1.11, address 0x4003fbd6.
 * REA evidence: ev_57a5af904da215c46c778ad45e5bd567f6fbe180cd412652f44c8f393deaf166
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fbd6(uint param_1,int param_2,undefined4 param_3)

{
  if ((param_1 < 0x124) && (param_2 != 0)) {
    *(int *)(param_1 * 4 + 0x30080774) = param_2;
    *(undefined4 *)(param_1 * 4 + 0x300802e4) = param_3;
    *(undefined4 *)(param_1 * 4 + 0x3007fe54) = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x4003fc06.
 * REA evidence: ev_342b9e113227a9da887ccc445d37586c6e5513fe3e94e2aeafcda69386745440
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003fc06(void)

{
  return DAT_ram_300493d4;
}


/* NanoCore 1.11, address 0x4003fc10.
 * REA evidence: ev_865531ccbf16e2a79a9394784b09beb970d97c71a71a0e900a5fca0adab51740
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fc10(undefined4 param_1)

{
  DAT_ram_300493d4 = param_1;
  return;
}


/* NanoCore 1.11, address 0x4003fc1a.
 * REA evidence: ev_0f7b68a3d7c0489c80f3bc2d037b66271615e389bb2fc1f0ef3c1ca439474c2f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_4003fc1a(void)

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


/* NanoCore 1.11, address 0x4003fc68.
 * REA evidence: ev_32240c1734faee3d7ad20dbb04373fe2306d99d272b32c37fa5f74bb81c578bd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fc68(byte param_1)

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


/* NanoCore 1.11, address 0x4003fcb6.
 * REA evidence: ev_5a4908358b3add0449333bfe8e6ce737dbf59fe15c16bb723ee839a0be719667
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fcb6(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_4003fc1a();
  if ((uVar1 & 8) == 0) {
    FUN_ram_4003fc68(8);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4003fcd2.
 * REA evidence: ev_d603c4a462e28258311ec6a36937e77bec42fa442c0f78f2f0db5d41b3c10665
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003fcd2(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_4003fc1a();
  if ((uVar1 & 8) == 0) {
    uVar1 = 0;
  }
  return uVar1 & 3;
}


/* NanoCore 1.11, address 0x4003fcea.
 * REA evidence: ev_508ad0c13eb1246091e51d9753cb4b5c2c0d472a82ee604a103ed1d8ee512ecd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fcea(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_ram_4003fc1a();
  if ((uVar1 & 8) == 0) {
    uVar1 = 8;
  }
  uVar2 = param_1 & 0xff;
  if (3 < param_1) {
    uVar2 = 3;
  }
  FUN_ram_4003fc68(uVar1 & 0xfffffffc | uVar2 | 8);
  return;
}


/* NanoCore 1.11, address 0x4003fd1c.
 * REA evidence: ev_cfc3e5c06235a36f1bc0e4e4148ea726bd3249e8780f7e7489854f980cce012c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fd1c(void)

{
  FUN_ram_4003fcea(0);
  return;
}


/* NanoCore 1.11, address 0x4003fd22.
 * REA evidence: ev_c335409c78731ab2227369f9e302e771fae3fd173e36629b887bfaa494855f8a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003fd22(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_4003fc1a();
  if ((uVar1 & 8) == 0) {
    uVar1 = 0;
  }
  return (uVar1 & 7) >> 2;
}


/* NanoCore 1.11, address 0x4003fd3c.
 * REA evidence: ev_52b9f37067052a64421b671a40962f7077530dd28077298f0fcc56fbc5ddf517
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fd3c(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_4003fc1a();
  if ((uVar1 & 8) == 0) {
    uVar1 = 8;
  }
  FUN_ram_4003fc68(uVar1 & 0xfffffffb);
  return;
}


/* NanoCore 1.11, address 0x4003fd56.
 * REA evidence: ev_b9c4d9bc76deb057ca0b7dc515142587bb090b268a2f81489df9ebf809b4acf8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003fd66) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003fd56(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003fdba();
  if ((_DAT_ram_20004000 == 0 && _DAT_ram_20004004 == 0) ||
     ((_DAT_ram_20004000 == -1 && (_DAT_ram_20004004 == -1)))) {
    _DAT_ram_20004000 =
         (ulonglong)(uint)(iVar1 / 1000) + CONCAT44(_DAT_ram_2000bffc,_DAT_ram_2000bff8);
  }
  else {
    _DAT_ram_20004000 =
         (ulonglong)(uint)(iVar1 / 1000) + CONCAT44(_DAT_ram_20004004,_DAT_ram_20004000);
  }
  FUN_ram_400042f4();
  return;
}


/* NanoCore 1.11, address 0x4003fdba.
 * REA evidence: ev_047ef7b2356b5022888c3dbf38cd50cfc09b12c27d4e0194b45a79f815d9c409
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003fdba(void)

{
  return 4000000;
}


/* NanoCore 1.11, address 0x4003fdc4.
 * REA evidence: ev_e4675939889c99a4834457d5c5661c5bd9c55fddb79fa05c7024028ee2575476
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fdc4(void)

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


/* NanoCore 1.11, address 0x4003fdfc.
 * REA evidence: ev_18e0802cbed41a0f0edd6f1ec3d4f0a03ac7c77bedfe978b560c69de4f27b077
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fdfc(void)

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


/* NanoCore 1.11, address 0x4003fe44.
 * REA evidence: ev_487285a0697d11a22f203af480d8e2eb9b164b208b533378ac9b63705e0e11c2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fe44(void)

{
  FUN_ram_40038000();
  FUN_ram_4003789a(0x14);
  FUN_ram_4003789a(0x13);
  FUN_ram_4003789a(0x12);
  return;
}


/* NanoCore 1.11, address 0x4003fe62.
 * REA evidence: ev_1097fe9700260f9abdb2b8679bd651903bf57d64836e9716859a59083a3d9495
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003fe62(void)

{
  _DAT_ram_1802090c = 0x3100;
  _DAT_ram_19050000 = 1;
  return;
}


/* NanoCore 1.11, address 0x4003fe7a.
 * REA evidence: ev_99f6a90f1a69893cf59d614b6fb9f49132c5650a931f25bee123b61727e4dabb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4003fdfc(void)

{
  FUN_ram_4003fdfc();
  return;
}


/* NanoCore 1.11, address 0x4003fe7e.
 * REA evidence: ev_5f9d7f431f8b7cf9591bdc6265e0bcfe01bbf80a313549a858f186034aaa1d24
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4003fdc4(void)

{
  FUN_ram_4003fdc4();
  return;
}


/* NanoCore 1.11, address 0x4003fe82.
 * REA evidence: ev_539a6337b100cdedbc5b674a17e8cbcef48c77d11f26ea7a43a234ad1f3788b3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003ff12) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003fe82(void)

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
  FUN_ram_4003fdfc();
  FUN_ram_4003fdc4();
  FUN_ram_4003fb8e(3);
  FUN_ram_4003faf0();
  FUN_ram_4003fe62();
  FUN_ram_4003fe44();
  iVar1 = FUN_ram_4003fdba();
  if ((_DAT_ram_20004000 == 0 && _DAT_ram_20004004 == 0) ||
     ((_DAT_ram_20004000 == -1 && (_DAT_ram_20004004 == -1)))) {
    _DAT_ram_20004000 =
         (ulonglong)(uint)(iVar1 / 1000) + CONCAT44(_DAT_ram_2000bffc,_DAT_ram_2000bff8);
  }
  else {
    _DAT_ram_20004000 =
         (ulonglong)(uint)(iVar1 / 1000) + CONCAT44(_DAT_ram_20004004,_DAT_ram_20004000);
  }
  FUN_ram_4003fb8e(7);
  return;
}


/* NanoCore 1.11, address 0x4003ff66.
 * REA evidence: ev_13e462c7b1e49fc70925d9687c0131c8dc71e20d46cc1bc3d6e7c3a2fd1c49e7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_ram_4003ff66(void)

{
  return CONCAT44(_DAT_ram_2000bffc,_DAT_ram_2000bff8);
}


/* NanoCore 1.11, address 0x4003ff8a.
 * REA evidence: ev_3b9e63421c0a580b559a61338e44d8195bf7847115ab7f113cce631cc2aa5368
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003ffb0) */
/* WARNING: Removing unreachable block (ram,0x4003ffca) */

void FUN_ram_4003ff8a(int param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = FUN_ram_4003ff66();
  uVar2 = FUN_ram_4003fdba();
  do {
    uVar4 = FUN_ram_4003ff66();
    if (uVar4 < uVar3) {
      lVar1 = uVar3 - uVar4;
    }
    else {
      lVar1 = uVar4 - uVar3;
    }
  } while (((int)((ulonglong)lVar1 >> 0x20) == 0) && ((uint)lVar1 < (uVar2 / 1000000) * param_1));
  return;
}


/* NanoCore 1.11, address 0x4003fff2.
 * REA evidence: ev_478e3b0950ea0f84df2d06065d4e4b5a862986aae819fe8af3e403fa6a5f26ba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003fff2(int param_1)

{
  FUN_ram_4003ff8a(param_1 * 1000);
  return;
}


/* NanoCore 1.11, address 0x4003fffe.
 * REA evidence: ev_b7380bdd5a8cbb2fca3b72c9997b9772395bcb42500d92829ae45e338b5e795c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40040016) */

void FUN_ram_4003fffe(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_ram_4003fdba();
  uVar2 = FUN_ram_4003ff66();
  FUN_ram_40003b9c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),uVar1 / 1000000,0);
  return;
}


