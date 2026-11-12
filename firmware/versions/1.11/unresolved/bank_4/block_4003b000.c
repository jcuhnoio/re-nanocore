/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4003b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4003b112.
 * REA evidence: ev_1f1cd59e9626b4c787d5e11dabf65ce62691f0192115b9965d59d208f5071538
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003b112(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = FUN_ram_40005656(0x44);
  if (iVar2 != 0) {
    memset(iVar2,0,0x44);
    uVar3 = FUN_ram_40004b94(s_aicos_event_ram_40098294,0);
    *(undefined4 *)(iVar2 + 8) = uVar3;
    FUN_ram_4003fbd6(0x3c,FUN_ram_4003a3c6,iVar2);
    FUN_ram_4003fb8e(0x3c);
    *(undefined4 *)(iVar2 + 0x40) = 0;
    uVar3 = FUN_ram_4000497c(s_aicos_mutex_ram_400982a0,0);
    *(undefined4 *)(iVar2 + 4) = uVar3;
    iVar4 = FUN_ram_4003ef74(1,0x40a0);
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
      _DAT_ram_3007fa70 = iVar2;
      FUN_ram_4003888a(0x16);
      iVar2 = FUN_ram_400388ca(0x16);
      if ((iVar2 == 0) && (iVar2 = FUN_ram_40037a2e(0x32,150000000), -1 < iVar2)) {
        FUN_ram_400378d0(0x32);
        return 0;
      }
      return 0;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4003b1ee.
 * REA evidence: ev_76e60e8e3e2a219f70ab2bbb4c9b2daa259bf3ec2a2ce57a519061513f6dbba5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003b1ee(uint param_1,undefined4 param_2)

{
  fence();
  fence();
  *(undefined4 *)(&DAT_ram_19251104 + (param_1 & 7) * 0x40) = param_2;
  fence();
  _DAT_ram_19251004 = 1 << (param_1 & 0x1f) | _DAT_ram_19251004;
  return;
}


/* NanoCore 1.11, address 0x4003b224.
 * REA evidence: ev_980f59aabf12eda2cabbfe75f83d0cf09fa66f1b69fd7a7b709dfc43cffd2cb6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003b224(byte *param_1)

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


/* NanoCore 1.11, address 0x4003b2a0.
 * REA evidence: ev_d302821b9421b6d2587663f72f2e27dfa04af671652994a6fa123a1436b7fd4a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003b2a0(int param_1)

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


/* NanoCore 1.11, address 0x4003b2c0.
 * REA evidence: ev_f27c7aa1697a8f2fed5205c2ae1e69b38dc62d4c34ca0022783615199e17e498
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003b2c0(uint param_1,int param_2)

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


/* NanoCore 1.11, address 0x4003b2ea.
 * REA evidence: ev_36e173df0466c120077f05efcce3e212a01abd6b5f9c37a6a48978014cc9197b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003b3c2) */

undefined4 FUN_ram_4003b2ea(byte *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_ram_4003b2c0(*param_1,1);
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
      FUN_ram_4003b1ee((uint)bVar1,uVar5);
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


/* NanoCore 1.11, address 0x4003b428.
 * REA evidence: ev_c4285c9fb64df0462e284b471634dff91c26e024671c267216acb78847cef138
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003b428(uint param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 8) {
    for (iVar1 = 0; _DAT_ram_3007fa74 != iVar1; iVar1 = iVar1 + 1) {
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


/* NanoCore 1.11, address 0x4003b468.
 * REA evidence: ev_8763fa84a63aa504979f3995cfb6cff43dbb7a5257762be22c99543aa6250e2f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003b468(uint param_1,undefined2 *param_2)

{
  int iVar1;
  uint uVar2;
  
  while( true ) {
    do {
      fence();
    } while ((0x10000 << (param_1 & 0x1f) & _DAT_ram_19251004) == 0);
    iVar1 = FUN_ram_4003b428(param_1);
    if (iVar1 == 0) break;
    uVar2 = *(uint *)(&DAT_ram_19251104 + (param_1 & 7) * 0x40);
    fence();
    fence();
    *(uint *)(&DAT_ram_19251104 + (param_1 & 7) * 0x40) = uVar2;
    if ((uVar2 & 0x10000) != 0) {
      FUN_ram_4003b224();
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = *(undefined2 *)(iVar1 + 0x14);
      }
      return 0;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4003b4ee.
 * REA evidence: ev_d2cd405104431b3da807588a4a6203d22956705bbcd05bd7673b2d6fe7fbe7ad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b4ee(byte *param_1,undefined2 *param_2,int param_3)

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
      FUN_ram_4000304c(param_2,param_1 + 0x16,(uint)param_1[0x56] << 1);
    }
    else {
      iVar2 = FUN_ram_4003b428(uVar4);
      puVar3 = (uint *)((uVar4 & 7) * 0x40 + 0x19251100);
      fence();
      fence();
      *puVar3 = (uint)*(byte *)(iVar2 + 2) << 8 | *puVar3 & 0xffff00ff | 0x3000000;
      fence();
      fence();
      *puVar3 = *puVar3 | 1;
      FUN_ram_4003b1ee(uVar4,3);
      if (*(int *)(param_1 + 8) == 3) {
        FUN_ram_4003b468(uVar4,param_2);
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x8c);
        uVar1 = 0xffffffff;
        if (param_3 != -1) {
          uVar1 = FUN_ram_40004352(param_3,0xffffffff);
        }
        iVar2 = FUN_ram_40004822(uVar5,uVar1);
        if (iVar2 + 2U < 2) {
          FUN_ram_4003b2c0(uVar4,0);
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


/* NanoCore 1.11, address 0x4003b5da.
 * REA evidence: ev_9a838bab948848ad0db57c86f83a24a98b338957216799bd6818b441c3790a02
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003b5da(void)

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
      iVar3 = FUN_ram_4003b428(uVar4);
      if (iVar3 == 0) {
        return 0;
      }
      uVar5 = puVar2[-7];
      fence();
      fence();
      puVar2[-7] = uVar5;
      if ((uVar5 & 0x10000) != 0) {
        FUN_ram_4003b224();
        *(char *)(iVar3 + 100) = *(char *)(iVar3 + 100) + '\x01';
        if (*(int *)(iVar3 + 4) == 0) {
          FUN_ram_400048c4(*(undefined4 *)(iVar3 + 0x8c));
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


/* NanoCore 1.11, address 0x4003b69e.
 * REA evidence: ev_9495f019329534a83518ccf32864641ac0cfb5d0f27b095fc139eefef6760954
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003b69e(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40037876(0x3e);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4003b6b6.
 * REA evidence: ev_851794ff2fc936472a187bde0b9028247ed7bc60cc19aeed7d8f6932a4f5d949
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003b6b6(int param_1)

{
  undefined4 uVar1;
  
  FUN_ram_40037996(0x3e);
  uVar1 = FUN_ram_400379fe();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}


/* NanoCore 1.11, address 0x4003b6d4.
 * REA evidence: ev_c73c5f758e130d480bb0ca77f4e059559b232ae2d7a5654cebdf1d937d0bd1f4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003b6d4(undefined4 param_1)

{
  _DAT_ram_3007fa74 = param_1;
  return;
}


/* NanoCore 1.11, address 0x4003b6de.
 * REA evidence: ev_dfc091d40352adc50cb73c28527e258dbe1274e9467360a9bce931659b500f84
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003b6de(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(param_1 + 1);
  uVar2 = FUN_ram_40003414();
  iVar3 = 0;
  for (uVar4 = 3; uVar4 < uVar2; uVar4 = uVar4 + 1) {
    iVar3 = (*(byte *)(param_1 + uVar4) - 0x30) + iVar3 * 10;
  }
  return (bVar1 - 0x41) * 0x20 + iVar3;
}


/* NanoCore 1.11, address 0x4003b720.
 * REA evidence: ev_a1fd2632d5e835c517fdd7c326f46a8d6882a81b418de0e65f570e12699c5f23
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b720(char *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_ram_40003414();
  if ((((3 < uVar1) && (*param_1 == 'P')) && (0x40 < (byte)param_1[1])) && (param_1[2] == '.')) {
    uVar2 = FUN_ram_4003b6de(param_1);
    return uVar2;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4003b76c.
 * REA evidence: ev_39f3b70002958eba0118641210e158c346c5ea0733e652fc67c31367115ca09a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b76c(uint param_1,uint param_2,uint *param_3)

{
  if ((param_1 < 0xf) && (param_2 < 0x20)) {
    fence();
    *param_3 = (uint)((*(uint *)(param_1 * 0x100 + 0x18700000) & 1 << (param_2 & 0x1f)) != 0);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x4003b7a0.
 * REA evidence: ev_d68e225d6c8a667771ced5eac7862337b45c3df98cbad3bffe3a77393354a7be
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b7a0(uint param_1,uint param_2)

{
  if ((param_1 < 0xf) && (param_2 < 0x20)) {
    fence();
    *(int *)(param_1 * 0x100 + 0x18700010) = 1 << (param_2 & 0x1f);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x4003b7ce.
 * REA evidence: ev_052b355acaf6771b64389721933f185e77639c0c5eaebda854141e845cca2e86
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b7ce(uint param_1,uint param_2)

{
  if ((param_1 < 0xf) && (param_2 < 0x20)) {
    fence();
    *(int *)(param_1 * 0x100 + 0x18700014) = 1 << (param_2 & 0x1f);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x4003b7fc.
 * REA evidence: ev_13139f3726767be46efa37439cdae331524758da0704059dfc0fbb490daaa39d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b7fc(uint param_1,uint param_2)

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


/* NanoCore 1.11, address 0x4003b836.
 * REA evidence: ev_de9e76fbc3ba9888a9ab0818ee7f1ba2144aef6f609a0c2334fe7cac0a491e4d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b836(uint param_1,undefined4 *param_2)

{
  if (param_1 < 0xf) {
    fence();
    *param_2 = *(undefined4 *)(param_1 * 0x100 + 0x18700008);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x4003b856.
 * REA evidence: ev_3e373aacea5f9b805d588321977b882574471b12ea34fc428437033f5e040006
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b856(uint param_1,undefined4 *param_2)

{
  if (param_1 < 0xf) {
    fence();
    *param_2 = *(undefined4 *)(param_1 * 0x100 + 0x1870000c);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x4003b876.
 * REA evidence: ev_f72e972d46ff266c5e8de4572317b301faba49f642633f3eeab83fcbc18c4842
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b876(uint param_1,undefined4 param_2)

{
  if (param_1 < 0xf) {
    fence();
    *(undefined4 *)(param_1 * 0x100 + 0x1870000c) = param_2;
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x4003b894.
 * REA evidence: ev_0eeefca6fb7f28de36b3f6b0d3a295abf058cf27093fcfb8f3fdb737997912b2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b894(uint param_1,uint param_2)

{
  if ((param_1 < 0xf) && (param_2 < 0x20)) {
    fence();
    *(int *)(param_1 * 0x100 + 0x1870000c) = 1 << (param_2 & 0x1f);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.11, address 0x4003b8c2.
 * REA evidence: ev_7d1aa8c062d7f57cde8283f814c7bf8b4cfcabf724a7a3f21e675ceeb3fbfd6f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b8c2(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  
  if (param_1 < 0xf) {
    uVar1 = 0xffffffea;
    if (param_2 < 0x20) {
      FUN_ram_4003b894();
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


/* NanoCore 1.11, address 0x4003b914.
 * REA evidence: ev_fb66a701ac30d4dcdb7f6e4326b36847baa4e22069f5979ecc0b50c25c4d7185
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b914(uint param_1,uint param_2,uint param_3)

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


/* NanoCore 1.11, address 0x4003b94e.
 * REA evidence: ev_ca6c6a04f0dc2ea779412203136e7bd791e18cfdf5a24cbc98385ffb95ab10e4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b94e(uint param_1,uint param_2,uint param_3)

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


/* NanoCore 1.11, address 0x4003b98e.
 * REA evidence: ev_9d02eb3619b6c8275f26bc1724c5549134d03c5fb792837eaac747e539e2816d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b98e(uint param_1,uint param_2,uint param_3)

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


/* NanoCore 1.11, address 0x4003b9ce.
 * REA evidence: ev_5e2eee537c279e04a0f8d690f849e4e485d90cbb819163bc0473286180a71252
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003b9ce(uint param_1,uint param_2,uint param_3)

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


/* NanoCore 1.11, address 0x4003ba10.
 * REA evidence: ev_85f31acb0658757a51cd2f4a59a6c2060639e172a03aee946959d286abe9c6f4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ba10(uint param_1,uint param_2)

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


/* NanoCore 1.11, address 0x4003ba50.
 * REA evidence: ev_8b876a1dd5799deb4f34e5e23e6035936191f125393a2ce0f42352961f7a5b96
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ba50(uint param_1,uint param_2)

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


/* NanoCore 1.11, address 0x4003ba92.
 * REA evidence: ev_5ff4d52cb8fa7e12be1e5ac650c9115f7f1053a422f93cce5205edb5d2e04d0a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ba92(uint param_1,uint param_2,int param_3)

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


/* NanoCore 1.11, address 0x4003bad2.
 * REA evidence: ev_914d9f857fdf904fa609cfc11b2a85cb801275dd34d15ebdc8aa4bd310688b09
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003bad2(int param_1,int param_2,undefined4 param_3)

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
    goto switchD_ram_4003bafc_default;
  }
  uVar2 = 0xffffffff;
  if ((uVar3 & uVar1) != 0) {
switchD_ram_4003bafc_default:
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4003bb26.
 * REA evidence: ev_865cbec6c86bb0f7be8e55fda6eedc79a362e5c0aaeb7d13111d4a0f19d1c1c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bb26(int param_1)

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


/* NanoCore 1.11, address 0x4003bb56.
 * REA evidence: ev_21f3e1851d7af550564cf0ce3bb2f1e64dafbb084c58facc2ef228e8f352607f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bb56(int param_1)

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


/* NanoCore 1.11, address 0x4003bb80.
 * REA evidence: ev_37090b72fd3b791d426f3500de24e70e2ca592f300bcfc1c4c1b0e3409c40800
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003bb80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40037876(*(undefined4 *)(param_1 + 0x40));
  if (-1 < iVar1) {
    uVar2 = FUN_ram_400379fe(*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x44) = uVar2;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4003bbaa.
 * REA evidence: ev_2c3b7b882e1a84d6c48cd2a3233b5b4b5b38f909f8cd556f04fa5f0a5ed23101
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bbaa(int param_1,undefined4 param_2)

{
  fence();
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x30) = param_2;
  return;
}


/* NanoCore 1.11, address 0x4003bbb8.
 * REA evidence: ev_bb8568beff004d721d9275761c71de557cc7366b42ba5a015daee4d1187ecc02
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003bbb8(int param_1)

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


/* NanoCore 1.11, address 0x4003bbe2.
 * REA evidence: ev_7c582f9a91a963bfea1247ff909a86f6867356644e74a9a70a052c7a29be627e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003bbe2(int param_1)

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


/* NanoCore 1.11, address 0x4003bc08.
 * REA evidence: ev_c834ed92c650901c921eb8528dd4f45e7f72e32cf31a727629925ca20ddf95b6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003bc08(int param_1)

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


/* NanoCore 1.11, address 0x4003bc2e.
 * REA evidence: ev_b6c4eaebf8d9d9a49f46e70bb00736a0190a9aaf2651e8053c137e11a8eaa390
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003bc7a) */
/* WARNING: Removing unreachable block (ram,0x4003bc4e) */
/* WARNING: Removing unreachable block (ram,0x4003bc52) */
/* WARNING: Removing unreachable block (ram,0x4003bc7e) */

undefined4 FUN_ram_4003bc2e(int param_1)

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


/* NanoCore 1.11, address 0x4003bcfc.
 * REA evidence: ev_d293ab07c46bf768a209c4f386e81381842e75e524673381f9790fcdf8c0439e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003bcfc(int param_1,uint param_2)

{
  fence();
  fence();
  *(uint *)(*(int *)(param_1 + 8) + 4) = *(uint *)(*(int *)(param_1 + 8) + 4) & 0xfffffc00 | param_2
  ;
  return;
}


/* NanoCore 1.11, address 0x4003bd18.
 * REA evidence: ev_f4f436cb795347d3cb0078dc32be1e2154e157f90f40ce07fab93a307ee848cc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003bd18(int param_1,uint param_2)

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


/* NanoCore 1.11, address 0x4003bd36.
 * REA evidence: ev_22907fa91b6eb573be1e2c0a4b2197716aa83ef98f9501979511521a658d7ce9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003bd36(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  iVar1 = FUN_ram_4003bb80();
  if (iVar1 == 0) {
    FUN_ram_4003bbb8(param_1);
    FUN_ram_4003bbaa(param_1,10);
    FUN_ram_4003bbe2(param_1);
    FUN_ram_4003bc08(param_1);
    fence();
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x38) = 0x255;
    iVar1 = FUN_ram_4003bc2e(param_1);
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
        FUN_ram_4003bb56(param_1);
        FUN_ram_4003bd18(param_1,*(undefined4 *)(param_1 + 0x28));
        FUN_ram_4003bb26(param_1);
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


/* NanoCore 1.11, address 0x4003be50.
 * REA evidence: ev_074fb65f53c1f704491eb685b6e56cc5ab6e3cde5789a25acd9c5bd389440f1b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003bf90) */

int FUN_ram_4003be50(int param_1,undefined2 *param_2,int param_3)

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
  FUN_ram_4003bb56();
  FUN_ram_4003bcfc(param_1,*param_2);
  FUN_ram_4003bb26(param_1);
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
          if (uVar8 != 0) goto LAB_ram_4003bf74;
          bVar1 = *pbVar5;
          fence();
          fence();
          **(uint **)(param_1 + 8) = **(uint **)(param_1 + 8) | 0x40;
          fence();
          uVar6 = bVar1 | 0x400;
LAB_ram_4003bf12:
          *(uint *)(*(int *)(param_1 + 8) + 0x10) = uVar6;
        }
        else {
          if (uVar8 == (ushort)param_2[2] - 1) {
            uVar6 = pbVar5[uVar8] | 0x200;
            fence();
            goto LAB_ram_4003bf12;
          }
LAB_ram_4003bf74:
          fence();
          *(uint *)(*(int *)(param_1 + 8) + 0x10) = (uint)pbVar5[uVar8];
        }
        uVar8 = uVar8 + 1 & 0xffff;
      } while (uVar10 != uVar8);
      iVar4 = iVar4 + uVar7;
      lVar2 = FUN_ram_40040028();
      uVar9 = uVar9 - uVar7 & 0xffff;
      iVar11 = 0;
      while (fence(), *(int *)(*(int *)(param_1 + 8) + 0x98) != 0) {
        if (iVar11 != 0) goto LAB_ram_4003bf4c;
        uVar3 = FUN_ram_40040028();
        if (lVar2 + 10U <= uVar3) {
          iVar11 = -3;
        }
      }
      if (iVar11 != 0) goto LAB_ram_4003bf4c;
      uVar8 = uVar10;
    } while (uVar9 != 0);
    iVar11 = 0x3e9;
    do {
      fence();
      if ((*(uint *)(*(int *)(param_1 + 8) + 0x40) & 0x600) != 0) {
        FUN_ram_4003bb56(param_1);
        return iVar4;
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    FUN_ram_4003bb56(param_1);
LAB_ram_4003bf4c:
    iVar4 = -3;
  }
  return iVar4;
}


/* NanoCore 1.11, address 0x4003bfd0.
 * REA evidence: ev_2fd3ff107b855b2879a9b62cf37be52452b8ffb28a59fda81932b43ab7138c5e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003c0ea) */

int FUN_ram_4003bfd0(int param_1,undefined2 *param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  
  iVar3 = -0x16;
  if (param_2 != (undefined2 *)0x0) {
    iVar11 = *(int *)(param_2 + 4);
    uVar8 = (uint)(ushort)param_2[2];
    iVar3 = -0x16;
    if (iVar11 != 0) {
      FUN_ram_4003bb56();
      iVar10 = 0;
      FUN_ram_4003bcfc(param_1,*param_2);
      FUN_ram_4003bb26(param_1);
      iVar9 = 0;
      iVar3 = 0;
      while (uVar8 != 0) {
        uVar7 = uVar8;
        if (8 < uVar8) {
          uVar7 = 8;
        }
        uVar6 = 0;
        do {
          if ((param_3 == 0) || ((ushort)param_2[2] - 1 != iVar10 + uVar6)) {
            fence();
            *(undefined4 *)(*(int *)(param_1 + 8) + 0x10) = 0x100;
          }
          else {
            fence();
            *(undefined4 *)(*(int *)(param_1 + 8) + 0x10) = 0x300;
          }
          uVar6 = uVar6 + 1;
        } while ((uVar6 & 0xffff) < uVar7);
        uVar6 = uVar7 - 1 & 0xffff;
        uVar8 = uVar8 - uVar7 & 0xffff;
        iVar10 = uVar6 + iVar10 + 1;
        lVar1 = FUN_ram_40040028();
        iVar4 = iVar3 + uVar7;
        iVar3 = 0;
        while (fence(), *(uint *)(*(int *)(param_1 + 8) + 0x9c) < uVar7) {
          if (iVar3 != 0) goto LAB_ram_4003c0a2;
          uVar2 = FUN_ram_40040028();
          if (lVar1 + 10U <= uVar2) {
            iVar3 = -3;
          }
        }
        if (iVar3 != 0) break;
        uVar5 = 0;
        do {
          fence();
          *(undefined1 *)(iVar11 + iVar9 + uVar5) = *(undefined1 *)(*(int *)(param_1 + 8) + 0x10);
          uVar5 = uVar5 + 1;
        } while ((uVar5 & 0xffff) < uVar7);
        iVar9 = uVar6 + iVar9 + 1;
        iVar3 = iVar4;
      }
LAB_ram_4003c0a2:
      iVar11 = FUN_ram_40040028();
      do {
        fence();
        if ((*(uint *)(*(int *)(param_1 + 8) + 0x40) & 0x600) != 0) {
          FUN_ram_4003bb56(param_1);
          return iVar3;
        }
        uVar12 = FUN_ram_40040028();
      } while (((int)((ulonglong)uVar12 >> 0x20) == 0) && ((uint)uVar12 < iVar11 + 10U));
      FUN_ram_4003bb56(param_1);
      iVar3 = -3;
    }
  }
  return iVar3;
}


