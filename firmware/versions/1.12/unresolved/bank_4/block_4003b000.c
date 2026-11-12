/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4003b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4003b064.
 * REA evidence: ev_beacc3eca5a656cadf9528b37a2cd638d6e24872884b7d398dbb7d0b7d31499b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003b0be) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003b064(uint param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 2) {
    uVar1 = 0xffffffea;
    if ((param_2 < 0x40) && (param_3 != 0)) {
      fence();
      _DAT_ram_19010004 = (param_1 * 0x40 + param_2) * 4;
      fence();
      fence();
      _DAT_ram_19010000 = _DAT_ram_19010000 & 0xf000ffef | 0xa1c0010;
      iVar2 = 1000000;
      do {
        fence();
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      uVar1 = 0xffffff8c;
    }
    return uVar1;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003b0da.
 * REA evidence: ev_05b7cae666426c1d967e5d9fd0eaaaf156da19c122a3fe332d7e3c6d8f58607d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b0da(void)

{
  return 0;
}


/* NanoCore 1.12, address 0x4003b0de.
 * REA evidence: ev_c6d6006c1aa10eca767691b66011e7d147b7083b482b83ee9c1d7b55618ef765
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003b0de(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40038bfe(0x34);
  if ((iVar1 < 0) || (iVar1 = FUN_ram_40038ba4(0x34), iVar1 < 0)) {
    uVar2 = 0xfffffff2;
  }
  else {
    fence();
    _DAT_ram_19010010 = 0x402ffd8;
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4003b11a.
 * REA evidence: ev_f3736c79f5231e5ef392a1d48333ec57b78364254e55b2eb28ef1ddbc02e1e0d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b11a(void)

{
  FUN_ram_40038bc8(0x34);
  FUN_ram_40038c22(0x34);
  return 0;
}


/* NanoCore 1.12, address 0x4003b136.
 * REA evidence: ev_5d6861af42cc3351ad0f9fcf18da8139bbbd77ec74326f7a8f1c795e3314501d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003b136(uint param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint auStack_14 [2];
  
  if ((param_1 < 0x40) && (param_2 != (uint *)0x0)) {
    iVar2 = FUN_ram_4003b064(0,param_1,auStack_14);
    uVar1 = auStack_14[0];
    if (iVar2 == 0) {
      iVar2 = FUN_ram_4003b064(1,param_1,auStack_14);
      if (iVar2 == 0) {
        *param_2 = auStack_14[0] | uVar1;
      }
    }
    return iVar2;
  }
  return -0x16;
}


/* NanoCore 1.12, address 0x4003b17a.
 * REA evidence: ev_51501cc0b7e989e010f979460b76b0678353b6a227daed71d8c9846e700b6285
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b17a(int param_1)

{
  fence();
  return *(undefined4 *)(param_1 + 4);
}


/* NanoCore 1.12, address 0x4003b184.
 * REA evidence: ev_b7f849d1ee5f5104b3dccb0c582377d1320a1bdf3baa97fca7970a0be6ea186f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003b184(int param_1,undefined4 param_2)

{
  fence();
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


/* NanoCore 1.12, address 0x4003b18e.
 * REA evidence: ev_dc8af34e2cf52bbc98a6c4a33c1ce86049f0982e740e81b5aba25c2da910c24c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003b18e(undefined4 *param_1)

{
  fence();
  *param_1 = 0;
  return;
}


/* NanoCore 1.12, address 0x4003b198.
 * REA evidence: ev_768443a5c7d4214ea08c10dcf5aee9e44fea92c81c4eb19f9798cd7317c5900a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003b198(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_ram_3007faf0;
  uVar2 = FUN_ram_4003b17a(0x18b00000);
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  FUN_ram_4003b184(0x18b00000,uVar2);
  FUN_ram_4003b18e(0x18b00000);
  FUN_ram_40004c1a(*(undefined4 *)(iVar1 + 8),2);
  return 0;
}


/* NanoCore 1.12, address 0x4003b1d4.
 * REA evidence: ev_8d3127e74083d6f0ee2b488039dd203040bc5ddcfe2d269fea08d1681097975b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003b1d4(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = FUN_ram_4000559c(0x44);
  if (iVar2 != 0) {
    memset(iVar2,0,0x44);
    uVar3 = FUN_ram_40004bf0(s_aicos_event_ram_4009d37c,0);
    *(undefined4 *)(iVar2 + 8) = uVar3;
    FUN_ram_4003fc98(0x3c,FUN_ram_4003b198,iVar2);
    FUN_ram_4003fc50(0x3c);
    *(undefined4 *)(iVar2 + 0x40) = 0;
    uVar3 = FUN_ram_400049d8(s_aicos_mutex_ram_4009d388,0);
    *(undefined4 *)(iVar2 + 4) = uVar3;
    iVar4 = FUN_ram_4003f036(1,0x40a0);
    *(int *)(iVar2 + 0x38) = iVar4;
    if (iVar4 != 0) {
      uVar5 = iVar4 + 0x7fU & 0xffffff80;
      *(uint *)(iVar2 + 0x3c) = uVar5;
      fence();
      custom0();
      uVar1 = uVar5 + 0x4000;
      do {
        custom0();
        uVar5 = uVar5 + 0x20;
      } while (uVar1 != uVar5);
      fence();
      custom0();
      _DAT_ram_3007faf0 = iVar2;
      FUN_ram_40039bb8(0x16);
      iVar2 = FUN_ram_40039bf8(0x16);
      if ((iVar2 == 0) && (iVar2 = FUN_ram_40038d5c(0x32,150000000), -1 < iVar2)) {
        FUN_ram_40038bfe(0x32);
        return 0;
      }
      return 0;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4003b2b0.
 * REA evidence: ev_de2768b1a74787730ca2c12b6cf53f26e14621fb2560352e170db9c02f0aacd4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003b2b0(uint param_1,undefined4 param_2)

{
  fence();
  fence();
  *(undefined4 *)(&DAT_ram_19251104 + (param_1 & 7) * 0x40) = param_2;
  fence();
  _DAT_ram_19251004 = 1 << (param_1 & 0x1f) | _DAT_ram_19251004;
  return;
}


/* NanoCore 1.12, address 0x4003b2e6.
 * REA evidence: ev_ba6fa39e2da30738304a06442962a0f3f801899bbef1a5438dbda6ff3e1d171b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003b2e6(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  iVar4 = (*param_1 & 7) * 0x40;
  uVar6 = *(uint *)(&DAT_ram_19251120 + iVar4);
  fence();
  uVar7 = (uVar6 & 0x7fffffff) >> 0x18;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if (uVar7 != 0) {
    uVar2 = 8;
    if (*param_1 < 2) {
      uVar2 = 0x40;
    }
    if (uVar7 <= uVar2) {
      uVar3 = 0;
      uVar2 = 0;
      do {
        uVar1 = *(uint *)(iVar4 + 0x19251124);
        fence();
        iVar8 = *(int *)(param_1 + 4);
        *(short *)(param_1 + uVar2 * 2 + 0x16) = (short)uVar1;
        if (iVar8 == 0) {
          uVar3 = uVar3 + (uVar1 & 0xffff);
        }
        uVar2 = uVar2 + 1;
      } while (uVar7 != uVar2);
      param_1[0x56] = (byte)((uVar6 << 1) >> 0x19);
      if (iVar8 == 0) {
        if (uVar7 == 0) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = (undefined2)(uVar3 / uVar7);
        }
        *(undefined2 *)(param_1 + 0x14) = uVar5;
      }
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4003b362.
 * REA evidence: ev_8635b123ce0da6a32d73d6886362c2cadb57f7f4677cb1c9e508dfb314e76c6d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003b362(int param_1)

{
  uint uVar1;
  
  fence();
  uVar1 = _DAT_ram_19251000 & 0xfffffffe;
  if (param_1 != 0) {
    uVar1 = _DAT_ram_19251000 | 1;
  }
  fence();
  _DAT_ram_19251000 = uVar1;
  return;
}


/* NanoCore 1.12, address 0x4003b382.
 * REA evidence: ev_91eac1b089807bfff1e912524c726063b78f4a5b54ac9af74cfe8bbd30573e72
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003b382(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0x100 << (param_1 & 0x1f);
  fence();
  if (param_2 == 0) {
    _DAT_ram_19251000 = _DAT_ram_19251000 & ~uVar1;
  }
  else {
    _DAT_ram_19251000 = _DAT_ram_19251000 | uVar1;
  }
  fence();
  return;
}


/* NanoCore 1.12, address 0x4003b3ac.
 * REA evidence: ev_0967ba134c33c1b96d97dcbcc619baa0d9b3336ab519bd0db127843707da40a4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003b484) */

undefined4 FUN_ram_4003b3ac(byte *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_ram_4003b382(*param_1,1);
  fence();
  *(undefined4 *)(&DAT_ram_19251120 + (*param_1 & 7) * 0x40) = 0x100;
  if (*(int *)(param_1 + 4) == 1) {
    bVar1 = *param_1;
    bVar2 = param_1[0x59];
    iVar3 = (bVar1 & 7) * 0x40;
    if (bVar2 == 0) {
      uVar5 = 3;
    }
    else {
      fence();
      *(uint *)(iVar3 + 0x19251110) =
           (*(ushort *)(param_1 + 0x5e) & 0xfff) << 0x10 | *(ushort *)(param_1 + 0x5c) & 0xfff;
      uVar5 = 0x33;
    }
    uVar6 = (uint)(bVar2 != 0);
    if (param_1[0x5a] != 0) {
      uVar5 = uVar5 | 0xc0;
      fence();
      *(uint *)(iVar3 + 0x19251114) =
           (*(ushort *)(param_1 + 0x62) & 0xfff) << 0x10 | *(ushort *)(param_1 + 0x60) & 0xfff;
      uVar6 = uVar6 | 2;
    }
    if (*(int *)(param_1 + 8) == 1) {
      FUN_ram_4003b2b0((uint)bVar1,uVar5);
    }
    fence();
    *(uint *)(iVar3 + 0x19251118) = uVar6;
    fence();
    *(uint *)(iVar3 + 0x19251108) = (param_2 / 1000000) * *(int *)(param_1 + 0xc);
    puVar4 = (uint *)(iVar3 + 0x19251100);
    fence();
    fence();
    *puVar4 = (uint)param_1[2] << 8 | *puVar4 & 0xffff00ff | 0x3000000;
    fence();
    fence();
    *puVar4 = *puVar4 | 2;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4003b4ea.
 * REA evidence: ev_6d547b67142efd93a7ee512df717c47630f7f765cef1510922233a5242782d0e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003b4ea(uint param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 8) {
    for (iVar1 = 0; _DAT_ram_3007faf4 != iVar1; iVar1 = iVar1 + 1) {
      iVar2 = iVar1 * 0x90 + gp + -0x4c4;
      if (param_1 == *(byte *)(iVar1 * 0x90 + gp + -0x4c4)) {
        if (*(char *)(iVar2 + 1) == '\0') {
          iVar2 = 0;
        }
        return iVar2;
      }
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4003b52a.
 * REA evidence: ev_d714e86d50aa53ca2271410eb98222ded8dc720b5880b04ecff9323ecf2a6514
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003b52a(uint param_1,undefined2 *param_2)

{
  int iVar1;
  uint uVar2;
  
  while( true ) {
    do {
      fence();
    } while ((0x10000 << (param_1 & 0x1f) & _DAT_ram_19251004) == 0);
    iVar1 = FUN_ram_4003b4ea(param_1);
    if (iVar1 == 0) break;
    uVar2 = *(uint *)(&DAT_ram_19251104 + (param_1 & 7) * 0x40);
    fence();
    fence();
    *(uint *)(&DAT_ram_19251104 + (param_1 & 7) * 0x40) = uVar2;
    if ((uVar2 & 0x10000) != 0) {
      FUN_ram_4003b2e6();
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = *(undefined2 *)(iVar1 + 0x14);
      }
      return 0;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4003b5b0.
 * REA evidence: ev_54410ca11cecbca36b0e3f5e30b66eeff60965412e82506da0a25d25cf08b4a8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b5b0(byte *param_1,undefined2 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = (uint)*param_1;
  if (param_1[1] == 0) {
    uVar1 = 0xffffffc3;
  }
  else {
    if (*(int *)(param_1 + 4) == 1) {
      FUN_ram_4000303c(param_2,param_1 + 0x16,(uint)param_1[0x56] << 1);
    }
    else {
      iVar2 = FUN_ram_4003b4ea(uVar4);
      puVar3 = (uint *)((uVar4 & 7) * 0x40 + 0x19251100);
      fence();
      fence();
      *puVar3 = (uint)*(byte *)(iVar2 + 2) << 8 | *puVar3 & 0xffff00ff | 0x3000000;
      fence();
      fence();
      *puVar3 = *puVar3 | 1;
      FUN_ram_4003b2b0(uVar4,3);
      if (*(int *)(param_1 + 8) == 3) {
        FUN_ram_4003b52a(uVar4,param_2);
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x8c);
        uVar1 = 0xffffffff;
        if (param_3 != -1) {
          uVar1 = FUN_ram_400043ae(param_3,0xffffffff);
        }
        iVar2 = FUN_ram_4000487e(uVar5,uVar1);
        if (iVar2 + 2U < 2) {
          FUN_ram_4003b382(uVar4,0);
          return 0xffffff8c;
        }
        if (param_2 != (undefined2 *)0x0) {
          *param_2 = *(undefined2 *)(param_1 + 0x14);
        }
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4003b69c.
 * REA evidence: ev_19db5bd711233dfbbd25470390996ba6275a8c647060a21e02503b870fea71be
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003b69c(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = _DAT_ram_19251004;
  fence();
  uVar4 = 0;
  puVar2 = (uint *)&DAT_ram_19251120;
  do {
    if ((0x10000 << (uVar4 & 0x1f) & uVar1) != 0) {
      iVar3 = FUN_ram_4003b4ea(uVar4);
      if (iVar3 == 0) {
        return 0;
      }
      uVar5 = puVar2[-7];
      fence();
      fence();
      puVar2[-7] = uVar5;
      if ((uVar5 & 0x10000) != 0) {
        FUN_ram_4003b2e6();
        *(char *)(iVar3 + 100) = *(char *)(iVar3 + 100) + '\x01';
        if (*(int *)(iVar3 + 4) == 0) {
          FUN_ram_40004920(*(undefined4 *)(iVar3 + 0x8c));
        }
        if (*(code **)(iVar3 + 0x88) != (code *)0x0) {
          (**(code **)(iVar3 + 0x88))(*(undefined4 *)(iVar3 + 0x84));
        }
      }
      if ((uVar5 & 0x20000) != 0) {
        fence();
        fence();
        *puVar2 = *puVar2 | 1;
      }
    }
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 0x10;
  } while (uVar4 != 8);
  return 1;
}


/* NanoCore 1.12, address 0x4003b760.
 * REA evidence: ev_835fbf4aa1d13df3e55eea0f259d2a6f1036ae7b928a60c1600959f4965dd98e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003b760(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40038ba4(0x3e);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4003b778.
 * REA evidence: ev_cc71ddd9c2ae59b073208ef7e430ad8f2cf7a21337a01edf489d90fb3ea9eda9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003b778(int param_1)

{
  undefined4 uVar1;
  
  FUN_ram_40038cc4(0x3e);
  uVar1 = FUN_ram_40038d2c();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}


/* NanoCore 1.12, address 0x4003b796.
 * REA evidence: ev_19db129143b6b7eea4ddc53948e757267ad6003f1436c6e89bc2fb49684ad26e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003b796(undefined4 param_1)

{
  _DAT_ram_3007faf4 = param_1;
  return;
}


/* NanoCore 1.12, address 0x4003b7a0.
 * REA evidence: ev_8c33611f5951145982100f1ce0597e9b4b3d1b0e9f488ebf5fcf7d0e2ae0bb04
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003b7a0(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(param_1 + 1);
  uVar2 = FUN_ram_40003404();
  iVar3 = 0;
  for (uVar4 = 3; uVar4 < uVar2; uVar4 = uVar4 + 1) {
    iVar3 = (*(byte *)(param_1 + uVar4) - 0x30) + iVar3 * 10;
  }
  return (bVar1 - 0x41) * 0x20 + iVar3;
}


/* NanoCore 1.12, address 0x4003b7e2.
 * REA evidence: ev_298303937071dc8af8918832e73e8451099d4d39b225f3b791058e3d937c3a8e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b7e2(char *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_ram_40003404();
  if ((((3 < uVar1) && (*param_1 == 'P')) && (0x40 < (byte)param_1[1])) && (param_1[2] == '.')) {
    uVar2 = FUN_ram_4003b7a0(param_1);
    return uVar2;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4003b82e.
 * REA evidence: ev_29395800f7ef842ea6d8f002bea66d136d0f80662c6d97e7157663c0bb37aa89
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b82e(uint param_1,uint param_2,uint *param_3)

{
  if ((param_1 < 0xf) && (param_2 < 0x20)) {
    fence();
    *param_3 = (uint)((*(uint *)(param_1 * 0x100 + 0x18700000) & 1 << (param_2 & 0x1f)) != 0);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003b862.
 * REA evidence: ev_5a80666d10a25f36cad0cb82f93977d3603b54f0950ed57c5ce2afaff9ee5eba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b862(uint param_1,uint param_2)

{
  if ((param_1 < 0xf) && (param_2 < 0x20)) {
    fence();
    *(int *)(param_1 * 0x100 + 0x18700010) = 1 << (param_2 & 0x1f);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003b890.
 * REA evidence: ev_c03998d6d99851bd429065341871b848a63c4c6a8767da9ed4d3613d94fb6e1b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b890(uint param_1,uint param_2)

{
  if ((param_1 < 0xf) && (param_2 < 0x20)) {
    fence();
    *(int *)(param_1 * 0x100 + 0x18700014) = 1 << (param_2 & 0x1f);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003b8be.
 * REA evidence: ev_d2ac1f6c32050008583fdcccfda7df91b1211129d03f803dfccd0477ebcd75b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b8be(uint param_1,uint param_2)

{
  uint *puVar1;
  
  if ((param_1 < 0xf) && (param_2 < 0x20)) {
    puVar1 = (uint *)(param_1 * 0x100 + 0x18700008);
    fence();
    fence();
    *puVar1 = ~(1 << (param_2 & 0x1f)) & *puVar1;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003b8f8.
 * REA evidence: ev_12023ae82273b7f9c7ea459b6288fd7cc3f28ff33c28740a5bab8816317cbbf7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b8f8(uint param_1,undefined4 *param_2)

{
  if (param_1 < 0xf) {
    fence();
    *param_2 = *(undefined4 *)(param_1 * 0x100 + 0x18700008);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003b918.
 * REA evidence: ev_fb8d68106c834c58c7dda5b9acab98fcfefaaa1598862f5011ac199bd38dbf6c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b918(uint param_1,undefined4 *param_2)

{
  if (param_1 < 0xf) {
    fence();
    *param_2 = *(undefined4 *)(param_1 * 0x100 + 0x1870000c);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003b938.
 * REA evidence: ev_4c3e307fd2377041368cd44605fb798efa90e96f2c55983e0f32c1b78517d775
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b938(uint param_1,undefined4 param_2)

{
  if (param_1 < 0xf) {
    fence();
    *(undefined4 *)(param_1 * 0x100 + 0x1870000c) = param_2;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003b956.
 * REA evidence: ev_4551a3db32922a003da1d5cd8341a3797505d39993d6eff9666b4de0b8ad12cd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b956(uint param_1,uint param_2)

{
  if ((param_1 < 0xf) && (param_2 < 0x20)) {
    fence();
    *(int *)(param_1 * 0x100 + 0x1870000c) = 1 << (param_2 & 0x1f);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003b984.
 * REA evidence: ev_fc001f6a7db386ed84b0d975e898b1a070d3b2d656d375483ab7ffe42fccf4cc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b984(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  
  if (param_1 < 0xf) {
    uVar1 = 0xffffffea;
    if (param_2 < 0x20) {
      FUN_ram_4003b956();
      puVar2 = (uint *)(param_1 * 0x100 + 0x18700008);
      fence();
      fence();
      *puVar2 = 1 << (param_2 & 0x1f) | *puVar2;
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003b9d6.
 * REA evidence: ev_ac5de258b22324c2a26488c0e9acdcb54f0a61e7f6db16477e34a8448e948137
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b9d6(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  if ((param_1 < 0xf) && (param_2 < 0x20)) {
    puVar1 = (uint *)((param_1 * 0x40 + param_2 + 0x61c0020) * 4);
    fence();
    fence();
    *puVar1 = param_3 & 0xf | *puVar1 & 0xfffffff0;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003ba10.
 * REA evidence: ev_2f17f8b103d745fd40c7a5cce09c334946424505c255305f263159596b13c84a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ba10(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  if ((param_1 < 0xf) && (param_2 < 0x20)) {
    puVar1 = (uint *)((param_1 * 0x40 + param_2 + 0x61c0020) * 4);
    fence();
    fence();
    *puVar1 = (param_3 & 7) << 4 | *puVar1 & 0xffffff8f;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003ba50.
 * REA evidence: ev_0655e71452de46b51c1dfd1d6c25b96476dcb5a8ff297f862a0a9f0cd85aebbe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ba50(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  if ((param_1 < 0xf) && (param_2 < 0x20)) {
    puVar1 = (uint *)((param_1 * 0x40 + param_2 + 0x61c0020) * 4);
    fence();
    fence();
    *puVar1 = (param_3 & 3) << 8 | *puVar1 & 0xfffffcff;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003ba90.
 * REA evidence: ev_c3ca55482885f5e6e44b6ccc5c266d34aafe21331de5fdd180135a0a94586291
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ba90(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  if ((param_1 < 0xf) && (param_2 < 0x20)) {
    puVar1 = (uint *)((param_1 * 0x40 + param_2 + 0x61c0020) * 4);
    fence();
    fence();
    *puVar1 = (param_3 & 7) << 0xc | *puVar1 & 0xffff8fff;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003bad2.
 * REA evidence: ev_bfe03de998755a742bf193922343c59cea9047d0e3821138d79450c71e5ed3f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003bad2(uint param_1,uint param_2)

{
  uint *puVar1;
  
  if ((param_1 < 0xf) && (param_2 < 0x20)) {
    puVar1 = (uint *)((param_1 * 0x40 + param_2 + 0x61c0020) * 4);
    fence();
    fence();
    *puVar1 = *puVar1 & 0xfffcffff | 0x10000;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003bb12.
 * REA evidence: ev_87e999c60bcfc6fe4dd13ea85d64605da6cf9d26436184e7d884708b72828325
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003bb12(uint param_1,uint param_2)

{
  uint *puVar1;
  
  if ((param_1 < 0xf) && (param_2 < 0x20)) {
    puVar1 = (uint *)((param_1 * 0x40 + param_2 + 0x61c0020) * 4);
    fence();
    fence();
    *puVar1 = *puVar1 & 0xfffcffff | 0x20000;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003bb54.
 * REA evidence: ev_3f9787fb579cd4b52861902a185c439b9b2b9221565f9e1b79897601a4f5347b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003bb54(uint param_1,uint param_2,int param_3)

{
  uint *puVar1;
  
  if ((param_1 < 0xf) && (param_2 < 0x20)) {
    puVar1 = (uint *)((param_1 * 0x40 + param_2 + 0x61c0020) * 4);
    fence();
    fence();
    *puVar1 = param_3 << 0x14 | *puVar1 & 0xfffff;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003bb94.
 * REA evidence: ev_108abf5b6a196ce506fd952e2c3b11d2a966ee7d882b892951c9775b6d3bd6fa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003bb94(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((param_1 * 0x40 + param_2 + 0x61c0020) * 4);
  fence();
  switch(param_3) {
  case 0:
    return uVar1 & 0xf;
  case 1:
    uVar3 = 0x20000;
    break;
  case 2:
    uVar3 = 0x10000;
    break;
  case 3:
    return (uVar1 & 0x7fff) >> 0xc;
  case 4:
    return (uVar1 & 0x7f) >> 4;
  case 5:
    return (uVar1 & 0x3ff) >> 8;
  default:
    goto switchD_ram_4003bbbe_default;
  }
  uVar2 = 0xffffffff;
  if ((uVar3 & uVar1) != 0) {
switchD_ram_4003bbbe_default:
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4003bbe8.
 * REA evidence: ev_ae53cf67c5660665991b1f37dc782e2095e601420eeacc6be5522709f036e3a6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bbe8(int param_1)

{
  uint *puVar1;
  
  fence();
  fence();
  puVar1 = *(uint **)(param_1 + 8);
  *puVar1 = **(uint **)(param_1 + 8) | 0x40;
  fence();
  fence();
  *(uint *)(*(int *)(param_1 + 8) + 0x48) = puVar1[0x12] | 9;
  return;
}


/* NanoCore 1.12, address 0x4003bc18.
 * REA evidence: ev_e84e24d63297f21b70458c9074b0909e02c53f1690dab8d2cff0df380b8f01d2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bc18(int param_1)

{
  int iVar1;
  
  fence();
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x3c) = 0x100;
  fence();
  fence();
  *(uint *)(*(int *)(param_1 + 8) + 0x48) = *(uint *)(iVar1 + 0x48) & 0xfffffffe;
  return;
}


/* NanoCore 1.12, address 0x4003bc42.
 * REA evidence: ev_1540a0fade516a5db4395e04e9f0dce6e1afe0740569fe616da0d93c53b11d5b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003bc42(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40038ba4(*(undefined4 *)(param_1 + 0x40));
  if (-1 < iVar1) {
    uVar2 = FUN_ram_40038d2c(*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x44) = uVar2;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4003bc6c.
 * REA evidence: ev_8c5315b74aca7d38ff05441e3798a7f3bd82fac76ff29f5d4289c6b4853dc5ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bc6c(int param_1,undefined4 param_2)

{
  fence();
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x30) = param_2;
  return;
}


/* NanoCore 1.12, address 0x4003bc7a.
 * REA evidence: ev_0a8a65c31c0d431302082fbb2f8e12dc3f3d346e8b9653a6de821cc72f0fcb05
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003bc7a(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    fence();
    uVar2 = **(uint **)(param_1 + 8) & 0xfffffffc;
    uVar1 = uVar2 | 0x80;
    if (*(char *)(param_1 + 0x14) == '\0') {
      uVar1 = uVar2 | 3;
    }
    fence();
    **(uint **)(param_1 + 8) = uVar1;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003bca4.
 * REA evidence: ev_e3bc3fef5d61172c841ae7d2ab0e3c9324b183e0bb786b0fc39e72a8463983f0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003bca4(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    fence();
    uVar1 = **(uint **)(param_1 + 8) & 0xfffffffb;
    if (*(char *)(param_1 + 0xc) != '\0') {
      uVar1 = uVar1 | 4;
    }
    fence();
    **(uint **)(param_1 + 8) = uVar1;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003bcca.
 * REA evidence: ev_a46ccd93195e9ad57b9ab5e7cffb7c1d2cf68607a6452416e87095bdec4b35ee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003bcca(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    fence();
    uVar1 = **(uint **)(param_1 + 8) & 0xfffffff7;
    if (*(char *)(param_1 + 0xc) != '\0') {
      uVar1 = uVar1 | 8;
    }
    fence();
    **(uint **)(param_1 + 8) = uVar1;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x4003bcf0.
 * REA evidence: ev_01c8d201221254d0603a935ecd2debcd33e1fea094acf3c64407a22e12d437db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003bd3c) */
/* WARNING: Removing unreachable block (ram,0x4003bd10) */
/* WARNING: Removing unreachable block (ram,0x4003bd14) */
/* WARNING: Removing unreachable block (ram,0x4003bd40) */

undefined4 FUN_ram_4003bcf0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    return 0xffffffea;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  iVar4 = 0x32;
  if (0x5dc00 < uVar1) {
    iVar4 = (uint)((uVar1 * 0xd) % 100000 != 0) + (uVar1 * 0xd) / 100000;
  }
  if (uVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x44) / uVar1;
  }
  uVar6 = (iVar4 * uVar3) / 100 - (uint)((iVar4 * uVar3) % 100 == 0) & 0xffff;
  fence();
  uVar2 = **(uint **)(param_1 + 8) & 0xffffffcf;
  uVar3 = ((uVar3 - 8) - uVar6) - ((23999999 < *(uint *)(param_1 + 0x44)) + 2) & 0xffff;
  if (uVar1 - 200 < 0x185d9) {
    uVar2 = uVar2 | 0x10;
    fence();
    *(uint *)(*(int *)(param_1 + 8) + 0x20) = uVar3;
    fence();
    puVar5 = (uint *)(*(int *)(param_1 + 8) + 0x24);
  }
  else {
    uVar2 = uVar2 | 0x20;
    fence();
    *(uint *)(*(int *)(param_1 + 8) + 0x28) = uVar3;
    fence();
    puVar5 = (uint *)(*(int *)(param_1 + 8) + 0x2c);
  }
  *puVar5 = uVar6;
  fence();
  **(uint **)(param_1 + 8) = uVar2;
  return 0;
}


/* NanoCore 1.12, address 0x4003bdbe.
 * REA evidence: ev_2ab2818fc7bf41bc57b93d84d85c1484dcbb493278a77eb335aeb03ef9611738
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bdbe(int param_1,uint param_2)

{
  fence();
  fence();
  *(uint *)(*(int *)(param_1 + 8) + 4) = *(uint *)(*(int *)(param_1 + 8) + 4) & 0xfffffc00 | param_2
  ;
  return;
}


/* NanoCore 1.12, address 0x4003bdda.
 * REA evidence: ev_92a6b8f268de9cc03915400796d9ad6e16591e41e4a011d8657ec62bbfa5272c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003bdda(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffea;
  if ((param_1 != 0) && (uVar1 = 0xffffffea, param_2 < 0x400)) {
    fence();
    *(uint *)(*(int *)(param_1 + 8) + 8) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4003bdf8.
 * REA evidence: ev_70c7b9574a7ad75cd6358aba4e97541134581901aefa6985bf94a02288529dc2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003bdf8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  iVar1 = FUN_ram_4003bc42();
  if (iVar1 == 0) {
    FUN_ram_4003bc7a(param_1);
    FUN_ram_4003bc6c(param_1,10);
    FUN_ram_4003bca4(param_1);
    FUN_ram_4003bcca(param_1);
    fence();
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x38) = 0x255;
    iVar1 = FUN_ram_4003bcf0(param_1);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x14) != 0) {
        fence();
        *(undefined4 *)(*(int *)(param_1 + 8) + 0x94) = 0;
        fence();
        *(undefined4 *)(*(int *)(param_1 + 8) + 0x90) = 0;
        fence();
        *(undefined4 *)(*(int *)(param_1 + 8) + 0x3c) = 0xffff;
        fence();
        *(undefined4 *)(*(int *)(param_1 + 8) + 0x38) = 0x4e5;
        FUN_ram_4003bc18(param_1);
        FUN_ram_4003bdda(param_1,*(undefined4 *)(param_1 + 0x28));
        FUN_ram_4003bbe8(param_1);
      }
      fence();
      fence();
      puVar3 = *(uint **)(param_1 + 8);
      *puVar3 = **(uint **)(param_1 + 8) | 0x400;
      fence();
      fence();
      *(uint *)(*(int *)(param_1 + 8) + 0x48) = puVar3[0x12] | 8;
      if (*(uint *)(param_1 + 0x10) < 0x2711) {
        fence();
        uVar2 = 0xa00000;
      }
      else if (*(uint *)(param_1 + 0x10) - 0x2711 < 90000) {
        fence();
        uVar2 = 0x6000;
      }
      else {
        fence();
        uVar2 = 0x1000;
      }
      *(undefined4 *)(*(int *)(param_1 + 8) + 0xa0) = uVar2;
      fence();
      *(undefined4 *)(*(int *)(param_1 + 8) + 0xa4) = uVar2;
    }
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4003bf12.
 * REA evidence: ev_8b09111b20202c8db04055058df2e7562b6788d60ca82289b5aa87dada57c41f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003c052) */

int FUN_ram_4003bf12(int param_1,undefined2 *param_2,int param_3)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  if (param_2 == (undefined2 *)0x0) {
    return -0x16;
  }
  uVar9 = (uint)(ushort)param_2[2];
  FUN_ram_4003bc18();
  FUN_ram_4003bdbe(param_1,*param_2);
  FUN_ram_4003bbe8(param_1);
  if (uVar9 == 0) {
    fence();
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x10) = 0x200;
    do {
      uVar9 = *(uint *)(*(int *)(param_1 + 8) + 0x40);
      fence();
    } while ((uVar9 & 0x200) == 0);
    iVar4 = (int)(uVar9 << 0x19) >> 0x1f;
  }
  else {
    iVar4 = 0;
    uVar8 = 0;
    do {
      uVar7 = uVar9;
      if (8 < uVar9) {
        uVar7 = 8;
      }
      uVar10 = uVar8 + uVar7 & 0xffff;
      do {
        pbVar5 = *(byte **)(param_2 + 4);
        if (param_3 == 0) {
          if (uVar8 != 0) goto LAB_ram_4003c036;
          bVar1 = *pbVar5;
          fence();
          fence();
          **(uint **)(param_1 + 8) = **(uint **)(param_1 + 8) | 0x40;
          fence();
          uVar6 = bVar1 | 0x400;
LAB_ram_4003bfd4:
          *(uint *)(*(int *)(param_1 + 8) + 0x10) = uVar6;
        }
        else {
          if (uVar8 == (ushort)param_2[2] - 1) {
            uVar6 = pbVar5[uVar8] | 0x200;
            fence();
            goto LAB_ram_4003bfd4;
          }
LAB_ram_4003c036:
          fence();
          *(uint *)(*(int *)(param_1 + 8) + 0x10) = (uint)pbVar5[uVar8];
        }
        uVar8 = uVar8 + 1 & 0xffff;
      } while (uVar10 != uVar8);
      iVar4 = iVar4 + uVar7;
      lVar2 = FUN_ram_400400ea();
      uVar9 = uVar9 - uVar7 & 0xffff;
      iVar11 = 0;
      while (fence(), *(int *)(*(int *)(param_1 + 8) + 0x98) != 0) {
        if (iVar11 != 0) goto LAB_ram_4003c00e;
        uVar3 = FUN_ram_400400ea();
        if (lVar2 + 10U <= uVar3) {
          iVar11 = -3;
        }
      }
      if (iVar11 != 0) goto LAB_ram_4003c00e;
      uVar8 = uVar10;
    } while (uVar9 != 0);
    iVar11 = 0x3e9;
    do {
      fence();
      if ((*(uint *)(*(int *)(param_1 + 8) + 0x40) & 0x600) != 0) {
        FUN_ram_4003bc18(param_1);
        return iVar4;
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    FUN_ram_4003bc18(param_1);
LAB_ram_4003c00e:
    iVar4 = -3;
  }
  return iVar4;
}


