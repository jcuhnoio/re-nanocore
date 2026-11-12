/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4003a000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4003a1ee.
 * REA evidence: ev_f69c2bf8fa7f7de5448ba3862604f646dd16250c07ab6220733ef31783ea30c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003a1ee(void)

{
  uint uVar1;
  void *__s;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  __s = (void *)FUN_ram_40005666(0x44);
  if (__s != (void *)0x0) {
    memset(__s,0,0x44);
    uVar2 = FUN_ram_40004ba4(s_aicos_event_ram_40096418,0);
    *(undefined4 *)((int)__s + 8) = uVar2;
    FUN_ram_4003ec9e(0x3c,FUN_ram_400394a2,__s);
    FUN_ram_4003ec56(0x3c);
    *(undefined4 *)((int)__s + 0x40) = 0;
    uVar2 = FUN_ram_4000498c(s_aicos_mutex_ram_40096424,0);
    *(undefined4 *)((int)__s + 4) = uVar2;
    iVar3 = FUN_ram_4003e050(1,0x40a0);
    *(int *)((int)__s + 0x38) = iVar3;
    if (iVar3 != 0) {
      uVar4 = iVar3 + 0x7fU & 0xffffff80;
      *(uint *)((int)__s + 0x3c) = uVar4;
      fence();
      custom0();
      uVar1 = uVar4 + 0x4000;
      do {
        custom0();
        uVar4 = uVar4 + 0x20;
      } while (uVar1 != uVar4);
      fence();
      custom0();
      _DAT_ram_3007e6f0 = __s;
      FUN_ram_400379b8(0x16);
      iVar3 = FUN_ram_400379f8(0x16);
      if ((iVar3 == 0) && (iVar3 = FUN_ram_40036b5c(0x32,150000000), -1 < iVar3)) {
        FUN_ram_400369fe(0x32);
        return 0;
      }
      return 0;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4003a2ca.
 * REA evidence: ev_a1f9a1991071350db40f57deb5b27d893dbc813484913b8842dbdbf8ed1e69fe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003a2ca(uint param_1,undefined4 param_2)

{
  fence();
  fence();
  *(undefined4 *)(&DAT_ram_19251104 + (param_1 & 7) * 0x40) = param_2;
  fence();
  _DAT_ram_19251004 = 1 << (param_1 & 0x1f) | _DAT_ram_19251004;
  return;
}


/* NanoCore 1.10, address 0x4003a300.
 * REA evidence: ev_faaaa434ea854440a896f37fb5b4d8fa340823f637fa73eb20b854be7c55b527
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a300(byte *param_1)

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


/* NanoCore 1.10, address 0x4003a37c.
 * REA evidence: ev_61a51bfcb1be0d11fde33c18736725cb938971f948e2df70ef03df7757dbee58
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003a37c(int param_1)

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


/* NanoCore 1.10, address 0x4003a39c.
 * REA evidence: ev_e778a137d54c07e3ab9a58e572a68db418db255c4725bcfaac6f1db0418c3e23
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003a39c(uint param_1,int param_2)

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


/* NanoCore 1.10, address 0x4003a3c6.
 * REA evidence: ev_6a2300085c8c9ed6776d00ad7589c1a8beb9f7ba49d8da8909f295d3f43b2dc6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003a49e) */

undefined4 FUN_ram_4003a3c6(byte *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_ram_4003a39c(*param_1,1);
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
      FUN_ram_4003a2ca((uint)bVar1,uVar5);
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


/* NanoCore 1.10, address 0x4003a504.
 * REA evidence: ev_4f0b5f87e08f7f293f30e724226d459d444d32b1486b283fc1af57bfbae0d545
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003a504(uint param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 8) {
    for (iVar1 = 0; _DAT_ram_3007e6f4 != iVar1; iVar1 = iVar1 + 1) {
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


/* NanoCore 1.10, address 0x4003a544.
 * REA evidence: ev_9c852e3ee3166094fd407eec77f23b4b556d00cfa1fbf42df14243e6df03917c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003a544(uint param_1,undefined2 *param_2)

{
  int iVar1;
  uint uVar2;
  
  while( true ) {
    do {
      fence();
    } while ((0x10000 << (param_1 & 0x1f) & _DAT_ram_19251004) == 0);
    iVar1 = FUN_ram_4003a504(param_1);
    if (iVar1 == 0) break;
    uVar2 = *(uint *)(&DAT_ram_19251104 + (param_1 & 7) * 0x40);
    fence();
    fence();
    *(uint *)(&DAT_ram_19251104 + (param_1 & 7) * 0x40) = uVar2;
    if ((uVar2 & 0x10000) != 0) {
      FUN_ram_4003a300();
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = *(undefined2 *)(iVar1 + 0x14);
      }
      return 0;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4003a5ca.
 * REA evidence: ev_27ef712e727de8d045c7a4fdfb8c2ce4c1de04165ba1b07403a8e11876ba0364
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003a5ca(byte *param_1,undefined2 *param_2,int param_3)

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
      FUN_ram_4000305c(param_2,param_1 + 0x16,(uint)param_1[0x56] << 1);
    }
    else {
      iVar2 = FUN_ram_4003a504(uVar4);
      puVar3 = (uint *)((uVar4 & 7) * 0x40 + 0x19251100);
      fence();
      fence();
      *puVar3 = (uint)*(byte *)(iVar2 + 2) << 8 | *puVar3 & 0xffff00ff | 0x3000000;
      fence();
      fence();
      *puVar3 = *puVar3 | 1;
      FUN_ram_4003a2ca(uVar4,3);
      if (*(int *)(param_1 + 8) == 3) {
        FUN_ram_4003a544(uVar4,param_2);
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x8c);
        uVar1 = 0xffffffff;
        if (param_3 != -1) {
          uVar1 = FUN_ram_40004362(param_3,0xffffffff);
        }
        iVar2 = FUN_ram_40004832(uVar5,uVar1);
        if (iVar2 + 2U < 2) {
          FUN_ram_4003a39c(uVar4,0);
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


/* NanoCore 1.10, address 0x4003a6b6.
 * REA evidence: ev_99c7263dfc1d79e6c6a95e075ef1ac77ca349ef672ec8ec42f8964786b708153
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003a6b6(void)

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
      iVar3 = FUN_ram_4003a504(uVar4);
      if (iVar3 == 0) {
        return 0;
      }
      uVar5 = puVar2[-7];
      fence();
      fence();
      puVar2[-7] = uVar5;
      if ((uVar5 & 0x10000) != 0) {
        FUN_ram_4003a300();
        *(char *)(iVar3 + 100) = *(char *)(iVar3 + 100) + '\x01';
        if (*(int *)(iVar3 + 4) == 0) {
          FUN_ram_400048d4(*(undefined4 *)(iVar3 + 0x8c));
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


/* NanoCore 1.10, address 0x4003a77a.
 * REA evidence: ev_e056dc752db05893498cfacf31911ff864e0c0523f4441a42c0db97a65ce218c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003a77a(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_400369a4(0x3e);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4003a792.
 * REA evidence: ev_f3cef1c22b36f23ce86f8dd19c80b672eb4b42b2387828db1655709b7d02ed7d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a792(int param_1)

{
  undefined4 uVar1;
  
  FUN_ram_40036ac4(0x3e);
  uVar1 = FUN_ram_40036b2c();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}


/* NanoCore 1.10, address 0x4003a7b0.
 * REA evidence: ev_7d5103a7fd86dc364e04ed4da0ff758859277e368a0b9ded4eb5426763c61364
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003a7b0(undefined4 param_1)

{
  _DAT_ram_3007e6f4 = param_1;
  return;
}


/* NanoCore 1.10, address 0x4003a7ba.
 * REA evidence: ev_b4339755ce75d231392b5a0b618e695291a379b57587d0326b061352bdfa204f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003a7ba(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(param_1 + 1);
  uVar2 = FUN_ram_40003424();
  iVar3 = 0;
  for (uVar4 = 3; uVar4 < uVar2; uVar4 = uVar4 + 1) {
    iVar3 = (*(byte *)(param_1 + uVar4) - 0x30) + iVar3 * 10;
  }
  return (bVar1 - 0x41) * 0x20 + iVar3;
}


/* NanoCore 1.10, address 0x4003a7fc.
 * REA evidence: ev_d3dfdea3f40750ffbaac3a8586dd18e6307fe998ef5c6e8733073dd2d1d66b0b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003a7fc(char *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_ram_40003424();
  if ((((3 < uVar1) && (*param_1 == 'P')) && (0x40 < (byte)param_1[1])) && (param_1[2] == '.')) {
    uVar2 = FUN_ram_4003a7ba(param_1);
    return uVar2;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4003a848.
 * REA evidence: ev_e473b5288f3175b728bf26c78c034d02246885b1bfd6112f0b66bbe14a1c9ff5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003a848(uint param_1,uint param_2,uint *param_3)

{
  if ((param_1 < 0xf) && (param_2 < 0x20)) {
    fence();
    *param_3 = (uint)((*(uint *)(param_1 * 0x100 + 0x18700000) & 1 << (param_2 & 0x1f)) != 0);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x4003a87c.
 * REA evidence: ev_1485684eff3371258a28ee5f4f88adce547ce01ac5b80b5560834f5cde436295
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003a87c(uint param_1,uint param_2)

{
  if ((param_1 < 0xf) && (param_2 < 0x20)) {
    fence();
    *(int *)(param_1 * 0x100 + 0x18700010) = 1 << (param_2 & 0x1f);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x4003a8aa.
 * REA evidence: ev_87c83fda4c568b81f76738d6a9bbe988cda81027bc1fa32f29b991a92552e297
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003a8aa(uint param_1,uint param_2)

{
  if ((param_1 < 0xf) && (param_2 < 0x20)) {
    fence();
    *(int *)(param_1 * 0x100 + 0x18700014) = 1 << (param_2 & 0x1f);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x4003a8d8.
 * REA evidence: ev_c8ee9e7de22bef57c70cef28ff9a2d0b3a3c5d3a60e4cf23e4f5eeb3c9ec089f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003a8d8(uint param_1,uint param_2)

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


/* NanoCore 1.10, address 0x4003a912.
 * REA evidence: ev_17a762ce2ddef9b7712cefd57f6589e2d801043cbaea894499265e49297b688b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003a912(uint param_1,undefined4 *param_2)

{
  if (param_1 < 0xf) {
    fence();
    *param_2 = *(undefined4 *)(param_1 * 0x100 + 0x18700008);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x4003a932.
 * REA evidence: ev_70793dd2f99474c7125b0abf89d6c7a19c1ec6fc4c9d729dd330c52b9deac641
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003a932(uint param_1,undefined4 *param_2)

{
  if (param_1 < 0xf) {
    fence();
    *param_2 = *(undefined4 *)(param_1 * 0x100 + 0x1870000c);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x4003a952.
 * REA evidence: ev_6050ea348589c0e2b158eebb557c39dd4affeb7e48614fe48882f32e741b4cc2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003a952(uint param_1,undefined4 param_2)

{
  if (param_1 < 0xf) {
    fence();
    *(undefined4 *)(param_1 * 0x100 + 0x1870000c) = param_2;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x4003a970.
 * REA evidence: ev_4f222242a979cc1f8454cc9765cdfc722921998ff26c19c3c7f3e2559a97c26a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003a970(uint param_1,uint param_2)

{
  if ((param_1 < 0xf) && (param_2 < 0x20)) {
    fence();
    *(int *)(param_1 * 0x100 + 0x1870000c) = 1 << (param_2 & 0x1f);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.10, address 0x4003a99e.
 * REA evidence: ev_08342d41756a58797e45e1bd7e766063a7bd9c70aa03443f665a0379a26ab025
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003a99e(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  
  if (param_1 < 0xf) {
    uVar1 = 0xffffffea;
    if (param_2 < 0x20) {
      FUN_ram_4003a970();
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


/* NanoCore 1.10, address 0x4003a9f0.
 * REA evidence: ev_6b0a99120bb447a2ff3da7a3005386f4c82b8c9c29a1e0f58971fd80c8fa4fde
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003a9f0(uint param_1,uint param_2,uint param_3)

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


/* NanoCore 1.10, address 0x4003aa2a.
 * REA evidence: ev_4590655ad52f79dbd473075fd714ff18a5c32156db6fdcbf689b4a20f590f693
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003aa2a(uint param_1,uint param_2,uint param_3)

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


/* NanoCore 1.10, address 0x4003aa6a.
 * REA evidence: ev_a363b3a5f8477dec5790b4a5e1e4553f71deac3b65f2f482d00bf7ea54ad4ce5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003aa6a(uint param_1,uint param_2,uint param_3)

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


/* NanoCore 1.10, address 0x4003aaaa.
 * REA evidence: ev_2602618ad931e5b97a145fbcad7c38caffbe24f22c1140ba1b13c38cd7bbb004
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003aaaa(uint param_1,uint param_2,uint param_3)

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


/* NanoCore 1.10, address 0x4003aaec.
 * REA evidence: ev_019abb16a1949fc79d4775e48611106b161a08fc5211fd8f6a404600252a5dae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003aaec(uint param_1,uint param_2)

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


/* NanoCore 1.10, address 0x4003ab2c.
 * REA evidence: ev_1604336d65d91dc4f6bae4bb817ec5a6e424c30e8d7836e49b8a6bc38cf890b6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ab2c(uint param_1,uint param_2)

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


/* NanoCore 1.10, address 0x4003ab6e.
 * REA evidence: ev_86af26d74443874eaf1504e94c75a9734a018aa352423d4ccb3f91637959ff3d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ab6e(uint param_1,uint param_2,int param_3)

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


/* NanoCore 1.10, address 0x4003abae.
 * REA evidence: ev_51dd8a1585d4dc405da316661956d17f8ddf90166c8a6c2a5cd2b80f417e7c26
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003abae(int param_1,int param_2,undefined4 param_3)

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
    goto switchD_ram_4003abd8_default;
  }
  uVar2 = 0xffffffff;
  if ((uVar3 & uVar1) != 0) {
switchD_ram_4003abd8_default:
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x4003ac02.
 * REA evidence: ev_e6416faf23e8c519d3d9cbcdc81fbc7d12aabbc16607070e8dc8dfce0f6ebb56
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ac02(int param_1)

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


/* NanoCore 1.10, address 0x4003ac32.
 * REA evidence: ev_e34afad496b8240f2349eb642a7e269c4d93ed5ca2065e2c0f7846ca7861c472
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ac32(int param_1)

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


/* NanoCore 1.10, address 0x4003ac5c.
 * REA evidence: ev_d41947bd4c051a596280010f4fb3c6e5a50e20f5a2a1ed2b1b379ced61049675
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003ac5c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_400369a4(*(undefined4 *)(param_1 + 0x40));
  if (-1 < iVar1) {
    uVar2 = FUN_ram_40036b2c(*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x44) = uVar2;
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4003ac86.
 * REA evidence: ev_1710052324a19175fbae45d4a10054df3881b4476c20011665f06ae1a37a45b4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ac86(int param_1,undefined4 param_2)

{
  fence();
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x30) = param_2;
  return;
}


/* NanoCore 1.10, address 0x4003ac94.
 * REA evidence: ev_17adb834cce2f64d01a5d12d5d66612dda9f266d643f19cb6ef9423e9c6a1c8e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ac94(int param_1)

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


/* NanoCore 1.10, address 0x4003acbe.
 * REA evidence: ev_5e5b16d82ab5e83c4833f685b931ad8a56f569d8d4ac733302073b83e0a6a2ef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003acbe(int param_1)

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


/* NanoCore 1.10, address 0x4003ace4.
 * REA evidence: ev_d2c7eed3b91183cf541ca29eb0f18046b3bdeace9719dbbb49979bbe3791a630
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ace4(int param_1)

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


/* NanoCore 1.10, address 0x4003ad0a.
 * REA evidence: ev_266d90e794b17e891dad216087f5d76950b0544bd30c869420a154fd6e4f63cc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003ad56) */
/* WARNING: Removing unreachable block (ram,0x4003ad2a) */
/* WARNING: Removing unreachable block (ram,0x4003ad2e) */
/* WARNING: Removing unreachable block (ram,0x4003ad5a) */

undefined4 FUN_ram_4003ad0a(int param_1)

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


/* NanoCore 1.10, address 0x4003add8.
 * REA evidence: ev_19925feb043bc7a4f592fa910022e5d57e11ba941e695a6b1d13e40c3ce99cf3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003add8(int param_1,uint param_2)

{
  fence();
  fence();
  *(uint *)(*(int *)(param_1 + 8) + 4) = *(uint *)(*(int *)(param_1 + 8) + 4) & 0xfffffc00 | param_2
  ;
  return;
}


/* NanoCore 1.10, address 0x4003adf4.
 * REA evidence: ev_e8c5dc42b35fbd7d1530eee71ea825ceca4a7e22c2e4ffb7e4bcc10ac4ea76e5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003adf4(int param_1,uint param_2)

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


/* NanoCore 1.10, address 0x4003ae12.
 * REA evidence: ev_c8492a5bb4584ba5b8abdc1551b484e40770763e9b40308a0fe6740023cb511a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003ae12(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  iVar1 = FUN_ram_4003ac5c();
  if (iVar1 == 0) {
    FUN_ram_4003ac94(param_1);
    FUN_ram_4003ac86(param_1,10);
    FUN_ram_4003acbe(param_1);
    FUN_ram_4003ace4(param_1);
    fence();
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x38) = 0x255;
    iVar1 = FUN_ram_4003ad0a(param_1);
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
        FUN_ram_4003ac32(param_1);
        FUN_ram_4003adf4(param_1,*(undefined4 *)(param_1 + 0x28));
        FUN_ram_4003ac02(param_1);
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


/* NanoCore 1.10, address 0x4003af2c.
 * REA evidence: ev_bf552244392236d0eab60bcdeab8169bbcc348acecc9b585a724353813113742
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003b06c) */

int FUN_ram_4003af2c(int param_1,undefined2 *param_2,int param_3)

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
  FUN_ram_4003ac32();
  FUN_ram_4003add8(param_1,*param_2);
  FUN_ram_4003ac02(param_1);
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
          if (uVar8 != 0) goto LAB_ram_4003b050;
          bVar1 = *pbVar5;
          fence();
          fence();
          **(uint **)(param_1 + 8) = **(uint **)(param_1 + 8) | 0x40;
          fence();
          uVar6 = bVar1 | 0x400;
LAB_ram_4003afee:
          *(uint *)(*(int *)(param_1 + 8) + 0x10) = uVar6;
        }
        else {
          if (uVar8 == (ushort)param_2[2] - 1) {
            uVar6 = pbVar5[uVar8] | 0x200;
            fence();
            goto LAB_ram_4003afee;
          }
LAB_ram_4003b050:
          fence();
          *(uint *)(*(int *)(param_1 + 8) + 0x10) = (uint)pbVar5[uVar8];
        }
        uVar8 = uVar8 + 1 & 0xffff;
      } while (uVar10 != uVar8);
      iVar4 = iVar4 + uVar7;
      lVar2 = FUN_ram_4003f0f0();
      uVar9 = uVar9 - uVar7 & 0xffff;
      iVar11 = 0;
      while (fence(), *(int *)(*(int *)(param_1 + 8) + 0x98) != 0) {
        if (iVar11 != 0) goto LAB_ram_4003b028;
        uVar3 = FUN_ram_4003f0f0();
        if (lVar2 + 10U <= uVar3) {
          iVar11 = -3;
        }
      }
      if (iVar11 != 0) goto LAB_ram_4003b028;
      uVar8 = uVar10;
    } while (uVar9 != 0);
    iVar11 = 0x3e9;
    do {
      fence();
      if ((*(uint *)(*(int *)(param_1 + 8) + 0x40) & 0x600) != 0) {
        FUN_ram_4003ac32(param_1);
        return iVar4;
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    FUN_ram_4003ac32(param_1);
LAB_ram_4003b028:
    iVar4 = -3;
  }
  return iVar4;
}


