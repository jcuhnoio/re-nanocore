/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40036000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4003601a.
 * REA evidence: ev_1ab6701ff42c72f471e2f7b993dcdd411cc231ce99d09e583acc67fb9aa291e3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003601a(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x20);
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  }
  uVar1 = *(uint *)(iVar2 + 4);
  iVar2 = *(int *)(iVar2 + 0x14);
  uVar3 = (uVar1 & 0xfffffff) * 2 + 7 & 0xfffffff8;
  *(uint *)(param_1 + 0x70) = uVar3;
  *(uint *)(param_1 + 0x68) = uVar1;
  *(int *)(param_1 + 0x6c) = iVar2;
  *(undefined4 *)(param_1 + 0x78) = 0x10;
  *(uint *)(param_1 + 0x74) = uVar3 * iVar2;
  return;
}


/* NanoCore 1.12, address 0x4003604a.
 * REA evidence: ev_6e74a44975a30891b3f682b431c663d69c1db9e07eecfff4836dcf9bdac49b59
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003604a(int *param_1)

{
  int iVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = *(int *)(param_1[1] + 0x10);
  uStack_28 = *(undefined4 *)(iVar1 + 0xc);
  uStack_24 = *(undefined4 *)(iVar1 + 0x10);
  uStack_20 = *(undefined4 *)(iVar1 + 0x20);
  uStack_1c = *(undefined4 *)(iVar1 + 0x1c);
  uStack_18 = *(undefined4 *)(*(int *)(*param_1 + 0x10) + 0xc);
  uStack_14 = *(undefined4 *)(*(int *)(*param_1 + 0x10) + 0x10);
  if (param_1[3] == 0) {
    iVar1 = *(int *)(param_1[2] + 4);
  }
  else {
    iVar1 = *(int *)(param_1[3] + 8);
  }
  (**(code **)(iVar1 + 0x10))(param_1[2],&uStack_28);
  return;
}


/* NanoCore 1.12, address 0x40036088.
 * REA evidence: ev_de33cab22adf57d3b07149be1200694bd9d24a0b4bd2e94df572160f3930eea4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400360b6) */

void FUN_ram_40036088(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  memset(*(undefined4 *)(param_1 + 100),0,param_2);
  uVar1 = (*(uint *)(param_1 + 100) & 0x1f) + param_2;
  if ((uVar1 & 0x1f) != 0) {
    uVar1 = uVar1 + (0x20 - (int)uVar1 % 0x20);
  }
  fence();
  custom0();
  for (; 0 < (int)uVar1; uVar1 = uVar1 - 0x20) {
    custom0();
  }
  fence();
  custom0();
  return;
}


/* NanoCore 1.12, address 0x400360ec.
 * REA evidence: ev_763cd9cbb4082bcbf3a035b48792407c376a3e4dd5016330381a170c013fc8a5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined ** FUN_ram_400360ec(int param_1)

{
  if (param_1 != DAT_ram_3004b3a8) {
    return (undefined **)0x0;
  }
  return &PTR_s_panel_st7789_ram_4009c9c4_ram_3004b374;
}


/* NanoCore 1.12, address 0x40036102.
 * REA evidence: ev_e4fae9159a420a5d6ab8b2c40f2667818abbf99d5a96817a8ed890f5293aee89
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40036102(int param_1,int param_2)

{
  if ((param_1 == 0) || (*(code **)(param_1 + 8) == (code *)0x0)) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    (**(code **)(param_1 + 8))();
    if (param_2 == 0) {
      return;
    }
  }
  FUN_ram_4004004c(param_2 * 1000);
  return;
}


/* NanoCore 1.12, address 0x40036138.
 * REA evidence: ev_bdb415289a115060f94783130341e60cf124a144bdce654748d131d4a33a7de5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40036138(int param_1,int param_2)

{
  if ((param_1 == 0) || (*(code **)(param_1 + 0xc) == (code *)0x0)) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    (**(code **)(param_1 + 0xc))();
    if (param_2 == 0) {
      return;
    }
  }
  FUN_ram_4004004c(param_2 * 1000);
  return;
}


/* NanoCore 1.12, address 0x4003616e.
 * REA evidence: ev_542b1d1e9b98be77bbda8b7815578fcb6e492c7030714dcc87468dbd12e746d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003616e(int param_1,int param_2)

{
  if ((param_1 == 0) || (*(code **)(param_1 + 0x18) == (code *)0x0)) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    (**(code **)(param_1 + 0x18))();
    if (param_2 == 0) {
      return;
    }
  }
  FUN_ram_4004004c(param_2 * 1000);
  return;
}


/* NanoCore 1.12, address 0x400361a4.
 * REA evidence: ev_da45e38f9f43ef83ada6b74b953c44d5d85fc7bdf8c2e3b9ca4baf00db5fdc6b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400361a4(int param_1,int param_2)

{
  if ((param_1 == 0) || (*(code **)(param_1 + 0x1c) == (code *)0x0)) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    (**(code **)(param_1 + 0x1c))();
    if (param_2 == 0) {
      return;
    }
  }
  FUN_ram_4004004c(param_2 * 1000);
  return;
}


/* NanoCore 1.12, address 0x400361da.
 * REA evidence: ev_1ba5246674d34683e1ee8c1d2d569bc88f385d241e51220c7e3ea0685e942242
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400361f0) */
/* WARNING: Removing unreachable block (ram,0x400361f4) */

void FUN_ram_400361da(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003b7e2(s_PD_17_ram_4009c9bc);
  FUN_ram_4003bb12(iVar1 / 0x20);
  FUN_ram_4003b862(iVar1 / 0x20,iVar1 % 0x20);
  return;
}


/* NanoCore 1.12, address 0x4003620e.
 * REA evidence: ev_c299b4b384db9d492fe845456d63d858097905f094854178fcfed33df43b3813
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40036222) */
/* WARNING: Removing unreachable block (ram,0x4003622a) */

void FUN_ram_4003620e(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003b7e2(s_PD_17_ram_4009c9bc);
  FUN_ram_4003b890(iVar1 / 0x20,iVar1 % 0x20);
  return;
}


/* NanoCore 1.12, address 0x40036236.
 * REA evidence: ev_cf95bdae28764c73b182052e8908f5ac6a0ccc9f42854dd012c2ec044961e9be
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036236(undefined4 param_1)

{
  FUN_ram_4003620e(param_1,0);
  FUN_ram_40036138(param_1,0);
  FUN_ram_400361a4(param_1,0);
  return 0;
}


/* NanoCore 1.12, address 0x40036276.
 * REA evidence: ev_248942f91d972678a7975148e3243c4cb2c22a3ec4380b17eb30ca058bb52f88
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40036276(int *param_1,int param_2)

{
  uint uVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    uVar1 = FUN_ram_4003b7e2(param_2);
    if (-1 < (int)uVar1) {
      *param_1 = (int)uVar1 >> 5;
      param_1[1] = uVar1 & 0x1f;
      FUN_ram_4003bb12();
      return;
    }
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400362aa.
 * REA evidence: ev_a41bef20f2dc6a009d92e267d80332526503d78205cf0537d3d19a11e3c01937
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400362aa(undefined4 *param_1,int param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (param_2 != 0) {
    FUN_ram_4003b890();
    return;
  }
  FUN_ram_4003b862(*param_1,param_1[1]);
  return;
}


/* NanoCore 1.12, address 0x400362c0.
 * REA evidence: ev_0820497d33b4b77e6bca0a9dd4335f32dff161e099afca9889bc295b8c08794c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_400362c0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_a4;
  undefined4 extraout_a4_00;
  int iVar5;
  int iVar6;
  
  if (param_2 != (int *)0x0) {
    uVar3 = 0;
    while (uVar3 < (uint)param_2[1]) {
      iVar5 = *param_2;
      iVar6 = uVar3 + 2;
      uVar1 = (uint)*(byte *)(uVar3 + iVar5 + 1);
      iVar2 = iVar5 + iVar6;
      if ((*(char *)(iVar5 + uVar3) == '\0') && (uVar1 == 1)) {
        FUN_ram_4004004c((uint)*(byte *)(iVar5 + iVar6) * 1000);
        param_5 = extraout_a4;
      }
      else {
        uVar4 = uVar1;
        if (uVar1 == 0) {
          uVar4 = 0;
          iVar2 = 0;
        }
        (**(code **)(param_1 + 0x10))
                  (*(char *)(iVar5 + uVar3),0,iVar2,uVar4,param_5,*(code **)(param_1 + 0x10));
        param_5 = extraout_a4_00;
      }
      uVar3 = uVar1 + iVar6;
    }
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x4003638c.
 * REA evidence: ev_c013685a8760b8ec22924ffd496d25d30835accd4c67c375b3fdb0c7a2e22690
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003638c(void)

{
  FUN_ram_40036276(0x3007cbf0,s_PD_23_ram_40099c9c);
  FUN_ram_400362aa(0x3007cbf0,1);
  FUN_ram_4004004c(1000);
  FUN_ram_400362aa(0x3007cbf0,0);
  FUN_ram_4004004c(10000);
  FUN_ram_400362aa(0x3007cbf0,1);
  FUN_ram_4004004c(50000);
  return 0;
}


/* NanoCore 1.12, address 0x400363e6.
 * REA evidence: ev_5342603200862f94c214178d7c396ecb2c71cced7671e07ace98225d0da6581e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400363e6(void)

{
  FUN_ram_40038bc8(0x10);
  FUN_ram_40038c22(0x10);
  return;
}


/* NanoCore 1.12, address 0x400363fa.
 * REA evidence: ev_ad1c5c9020a260ab8cbd7d52e61b07540dfa442508349d8a2ac1d873ceda90c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400363fa(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40038ce8(0x10);
  if (iVar1 != 0) {
    FUN_ram_400363e6();
  }
  iVar1 = FUN_ram_40038bfe(0x10);
  if ((iVar1 < 0) || (iVar1 = FUN_ram_40038ba4(0x10), iVar1 < 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_ram_4003acec();
    FUN_ram_4003fc98(0x20,FUN_ram_4003ad62,0);
    FUN_ram_4003fc50(0x20);
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40036448.
 * REA evidence: ev_3ada03aab6aa628a18780b5b237203f5faf6249056a47fd7a9e1fb4e168ee68a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40036448(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003b0da();
  return iVar1 == 0;
}


/* NanoCore 1.12, address 0x40036484.
 * REA evidence: ev_b3b0852894249bfaea02832d5e402b8a43e9990a63ac9bac17fcf82e872dcb39
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036484(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4003b4ea(param_2);
  uVar2 = 0xfffffff6;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x400364bc.
 * REA evidence: ev_16a39b0bbb40df69b0f2bcefaec4a6ee7a8c4b27e6ea1c770873c7d9b7705ad1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400364bc(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003b4ea(*param_2);
  FUN_ram_4003b5b0(iVar1,param_2 + 1,1000);
  *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(iVar1 + 0x56);
  return 0;
}


/* NanoCore 1.12, address 0x400364f0.
 * REA evidence: ev_55474d32c2d4836ad21091e8d5e95fea9a1a626234627b677d200ecf0a1afdce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400364f0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4003b4ea(param_2);
  *param_3 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_ram_4003b5b0(iVar1,param_3,1000);
    return uVar2;
  }
  return 0xfffffff6;
}


/* NanoCore 1.12, address 0x4003651e.
 * REA evidence: ev_c3fd7589b01bae780dba5c0455ccbd632b51e1c8e40302f0578b383af7785dfe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003651e(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4003b760();
  if (iVar1 == 0) {
    FUN_ram_4003fc98(0x5c,FUN_ram_4003b69c,0);
    FUN_ram_4003fc50(0x5c);
    FUN_ram_4003b362(1);
    FUN_ram_4003b796(DAT_ram_4009d394);
    iVar1 = FUN_ram_4000559c(0x50);
    if (iVar1 != 0) {
      memset(iVar1,0,0x50);
      uVar2 = FUN_ram_40041934(iVar1,&DAT_ram_4009670c,&PTR_FUN_ram_40036594_ram_4009cb68,0);
      return uVar2;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40036594.
 * REA evidence: ev_36a4c717165573db5a5a5e15e646fdb954e3a1affae68f28cbe098b317cdd430
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036594(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)FUN_ram_4003b4ea(param_2);
  FUN_ram_4003b778();
  if (puVar2 == (undefined1 *)0x0) {
    uVar1 = 0xfffffff6;
  }
  else {
    if (param_3 == 0) {
      FUN_ram_4003b382(*puVar2,0);
      if (*(int *)(puVar2 + 4) == 0) {
        FUN_ram_40004862(*(undefined4 *)(puVar2 + 0x8c));
        *(undefined4 *)(puVar2 + 0x8c) = 0;
        return 0;
      }
    }
    else {
      FUN_ram_4003b3ac(puVar2,*(undefined4 *)(puVar2 + 0x10));
      puVar2[100] = 0;
      if (*(int *)(puVar2 + 4) == 0) {
        puVar2[100] = 1;
        uVar1 = FUN_ram_40004834(s_aicos_sem_ram_4009cb5c,0,0);
        *(undefined4 *)(puVar2 + 0x8c) = uVar1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4003660c.
 * REA evidence: ev_2282eb32b0754abf2cdd2781d19b3217a82f2fadb92f18797556dfab4a6d6d99
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40036614) */
/* WARNING: Removing unreachable block (ram,0x40036620) */

void FUN_ram_4003660c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_2 / 0x20;
  param_2 = param_2 % 0x20;
  FUN_ram_4003b9d6(iVar1,param_2,1);
  if (param_3 == 2) {
    uVar2 = 3;
  }
  else if (param_3 == 3) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
    if (param_3 != 1) {
      FUN_ram_4003ba50(iVar1,param_2,0);
      FUN_ram_4003bb12(iVar1,param_2);
      return;
    }
  }
  FUN_ram_4003ba50(iVar1,param_2,uVar2);
  FUN_ram_4003bad2(iVar1,param_2);
  return;
}


/* NanoCore 1.12, address 0x4003667a.
 * REA evidence: ev_65907632533e07574ec2023c691c850dba192a35afaab0a6df3e621b754d8e1e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40036684) */
/* WARNING: Removing unreachable block (ram,0x40036688) */

void FUN_ram_4003667a(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 / 0x20;
  if (param_3 != 0) {
    FUN_ram_4003b890(iVar1);
    FUN_ram_4003bb94(iVar1,param_2 % 0x20,1);
    return;
  }
  FUN_ram_4003b862(iVar1);
  return;
}


/* NanoCore 1.12, address 0x400366d4.
 * REA evidence: ev_a83c07caf6db79c3acb9e3906e96e2c9e297c99d9868e92950e28ae738a5eed9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400366e2) */
/* WARNING: Removing unreachable block (ram,0x400366e8) */

undefined4
FUN_ram_400366d4(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_3 < 5) {
    uVar1 = (&DAT_ram_4009cb9c)[param_3];
  }
  FUN_ram_4003ba90(param_2 / 0x20,param_2 % 0x20,uVar1);
  FUN_ram_4003fc98(param_2 + 0x60,param_4,param_5);
  FUN_ram_4003fc50(param_2 + 0x60);
  return 0;
}


/* NanoCore 1.12, address 0x40036728.
 * REA evidence: ev_a69219301e5c877d6e0b6e4499c9674cd02c4d9f32ed4e00818bfc7976030f3a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036728(int param_1)

{
  uint uVar1;
  uint uStack_28;
  uint auStack_24 [4];
  
  param_1 = param_1 + -0x44;
  uStack_28 = 0;
  auStack_24[0] = 0;
  FUN_ram_4003b918(param_1,&uStack_28);
  FUN_ram_4003b8f8(param_1,auStack_24);
  uStack_28 = uStack_28 & auStack_24[0];
  uVar1 = 0;
  do {
    if ((uStack_28 >> (uVar1 & 0x1f) & 1) != 0) {
      FUN_ram_4003fc0c(param_1 * 0x20 + 0x60 + uVar1);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x20);
  FUN_ram_4003b938(param_1,0xffffffff);
  return 1;
}


/* NanoCore 1.12, address 0x40036792.
 * REA evidence: ev_1cabb28c2cb6859c7d3086d785eaeaab8e1b6960c1d01805794835b6d52e87c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400367a2) */
/* WARNING: Removing unreachable block (ram,0x400367a6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40036792(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = param_2 / 0x20;
  param_2 = param_2 % 0x20;
  if (param_3 == 0) {
    FUN_ram_4003b8be(uVar1,param_2);
  }
  else {
    uVar3 = 1 << (uVar1 & 0x1f);
    if ((uVar3 & _DAT_ram_3007cbf8) == 0) {
      iVar2 = uVar1 + 0x44;
      FUN_ram_4003fc98(iVar2,FUN_ram_40036728,0);
      FUN_ram_4003fc50(iVar2);
      FUN_ram_4003fc50(iVar2);
      _DAT_ram_3007cbf8 = _DAT_ram_3007cbf8 | uVar3;
    }
    FUN_ram_4003b984(uVar1,param_2);
    FUN_ram_4003bb94(uVar1,param_2,2);
  }
  return 0;
}


/* NanoCore 1.12, address 0x40036918.
 * REA evidence: ev_a36ee94cecd4be47ed395a1cc99c4ac3dbe278c6b587b8813db9c646be350366
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40036918(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = DAT_ram_3004b5ac;
  DAT_ram_3004b545 = (undefined1)DAT_ram_3004b5ac;
  iVar3 = FUN_ram_4003bdf8(&DAT_ram_3004b5ac);
  if (iVar3 == 0) {
    FUN_ram_4000303c((uVar1 & 0xff) * 0xe4 + 0x3007cbfc,&DAT_ram_3004b520,0xe4);
    uVar2 = DAT_ram_3004b5e8;
    if (DAT_ram_3004b5c0 != 0) {
      FUN_ram_4003fc98(DAT_ram_3004b5e8,FUN_ram_4003699e,0);
      FUN_ram_4003fc50(uVar2);
    }
    FUN_ram_40040cb2(&DAT_ram_3004b520,PTR_DAT_ram_400966c4_ram_3004b5b0);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4003699e.
 * REA evidence: ev_4de66c7735e018953005de11739ac6c9b1a19fcdf2c0dbee58b0e822c19471f5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003699e(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte local_29;
  undefined4 uStack_28;
  byte *pbStack_24;
  
  iVar4 = 0x3007cbfc;
  iVar5 = 0;
  do {
    if (*(int *)(iVar4 + 200) == param_1) goto LAB_ram_400369ce;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0xe4;
  } while (iVar5 != 8);
  iVar5 = 0;
LAB_ram_400369ce:
  iVar4 = iVar5 * 0xe4;
  uVar1 = *(uint *)(*(int *)(&DAT_ram_3007cc90 + iVar4) + 0x40);
  fence();
  fence();
  if (*(code **)(&DAT_ram_3007cca8 + iVar4) == (code *)0x0) {
    for (iVar3 = 0; iVar3 < (int)(*(uint *)(*(int *)(&DAT_ram_3007cc90 + iVar4) + 0x9c) & 0xff);
        iVar3 = iVar3 + 1) {
      fence();
    }
    fence();
    *(undefined4 *)(*(int *)(&DAT_ram_3007cc90 + iVar5 * 0xe4) + 0x3c) = 0xffff;
    uVar2 = 0;
  }
  else {
    if ((uVar1 & 0x400) != 0) {
      uStack_28 = 1;
      pbStack_24 = &local_29;
      (**(code **)(&DAT_ram_3007cca8 + iVar4))(&uStack_28);
      fence();
      *(undefined4 *)(*(int *)(&DAT_ram_3007cc90 + iVar4) + 0x3c) = 0x400;
    }
    if ((uVar1 & 4) != 0) {
      local_29 = *(byte *)(*(int *)(&DAT_ram_3007cc90 + iVar4) + 0x10);
      fence();
      uStack_28 = 3;
      pbStack_24 = &local_29;
      (**(code **)(&DAT_ram_3007cca8 + iVar5 * 0xe4))(&uStack_28);
      fence();
      *(undefined4 *)(*(int *)(&DAT_ram_3007cc90 + iVar5 * 0xe4) + 0x3c) = 4;
    }
    if ((uVar1 & 0x20) != 0) {
      pbStack_24 = &local_29;
      iVar4 = iVar5 * 0xe4;
      uStack_28 = 0;
      (**(code **)(&DAT_ram_3007cca8 + iVar4))(&uStack_28);
      fence();
      *(uint *)(*(int *)(&DAT_ram_3007cc90 + iVar4) + 0x10) = (uint)*pbStack_24;
      uStack_28 = 2;
      pbStack_24 = &local_29;
      (**(code **)(&DAT_ram_3007cca8 + iVar4))(&uStack_28);
      fence();
      *(undefined4 *)(*(int *)(&DAT_ram_3007cc90 + iVar4) + 0x3c) = 0x20;
    }
    if ((uVar1 & 0x80) != 0) {
      uStack_28 = 4;
      pbStack_24 = &local_29;
      (**(code **)(&DAT_ram_3007cca8 + iVar5 * 0xe4))(&uStack_28);
      fence();
      *(undefined4 *)(*(int *)(&DAT_ram_3007cc90 + iVar5 * 0xe4) + 0x3c) = 0x80;
    }
    if ((uVar1 & 1) != 0) {
      fence();
      *(undefined4 *)(*(int *)(&DAT_ram_3007cc90 + iVar5 * 0xe4) + 0x3c) = 1;
    }
    uVar2 = 1;
    if ((uVar1 & 0x40) != 0) {
      fence();
      *(undefined4 *)(*(int *)(&DAT_ram_3007cc90 + iVar5 * 0xe4) + 0x3c) = 0x40;
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40036c30.
 * REA evidence: ev_7a07f6e06c698e65c418a5a918ed757334507609c9a983eeada4a3fc6dc7ff5d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036c30(int param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0x3007e340;
  *(undefined4 *)(param_1 + 0x74) = 0x1000;
  *(undefined4 *)(param_1 + 0x78) = 0x800;
  *(undefined4 *)(param_1 + 0x84) = 0x3007d340;
  *(undefined4 *)(param_1 + 0x88) = 0x1000;
  *(undefined4 *)(param_1 + 0x8c) = 0x800;
  FUN_ram_400074fe(*(undefined4 *)(param_1 + 0x9c));
  return 0;
}


/* NanoCore 1.12, address 0x40036cdc.
 * REA evidence: ev_91682e94821b1b91abf9ac136ee836df0aff803d8cb4ce3baf1be77665ee5f1f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036cdc(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    FUN_ram_4000759a(*(undefined4 *)(param_1 + 0x9c));
    FUN_ram_4003c9c6(param_1 + 0x58);
    uVar1 = 0;
  }
  else if (param_2 == 1) {
    FUN_ram_4003ca10(param_1 + 0x58);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffff6;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x40036eda.
 * REA evidence: ev_1d6b392d12f26bed29328b96fd9c80f8145e956e3d572625d842c7fd28218f19
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40036eda(int param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_ram_4003ab94(*(undefined4 *)(param_1 + 0x6c));
  }
  else {
    FUN_ram_4003ab72();
  }
  return 0;
}


/* NanoCore 1.12, address 0x40036f00.
 * REA evidence: ev_4f5f9b1224809ea1a3f3d2f5b2b746cee89893e080e4ef6f14f0d209660dbd18
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40036f00(int param_1)

{
  int iVar1;
  int aiStack_14 [2];
  
  iVar1 = FUN_ram_40041222(*(int *)(param_1 + 0x50) + 4);
  FUN_ram_4003ab3e(*(undefined4 *)(param_1 + 0x6c),aiStack_14);
  return iVar1 * 0x800 +
         ((aiStack_14[0] + 0x1000) - *(int *)(param_1 + 0x78)) +
         (uint)*(ushort *)(*(int *)(param_1 + 0x50) + 0x70);
}


/* NanoCore 1.12, address 0x40036f3e.
 * REA evidence: ev_35d20cacd6a42670a46a2f06a07a66005cf06c71788c1868650ee7e1c1a75c55
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40036f3e(void)

{
  undefined4 uVar1;
  
  FUN_ram_4003c2be(&DAT_ram_3004b684,DAT_ram_3004b6fc);
  DAT_ram_3004b678 = &PTR_LAB_ram_40036ba0_ram_3004b604;
  DAT_ram_3004b700 = 0;
  if (_DAT_ram_3004e3bc != 0) {
    DAT_ram_3004b6c8 = _DAT_ram_3004e3bc;
    uVar1 = FUN_ram_40040842(&DAT_ram_3004b62c,PTR_s_i2s0_sound_ram_4009cbcf_1_ram_3004b6f8,3);
    return uVar1;
  }
  return 0xffffffff;
}


/* NanoCore 1.12, address 0x40036f9a.
 * REA evidence: ev_b28795e539ef5055db6175a8881b15b8790ab47644a9bdfa13f2456f63681f46
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40036f9a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + -0x58;
  if (param_2 == 1) {
    FUN_ram_400408b6(iVar1);
    iVar1 = 0x3007e340;
    fence();
    custom0();
    do {
      custom0();
      iVar1 = iVar1 + 0x20;
    } while (iVar1 != 0x3007f340);
    fence();
    custom0();
  }
  else if (param_2 == 2) {
    iVar2 = 0x3007d340;
    fence();
    custom0();
    do {
      custom0();
      iVar2 = iVar2 + 0x20;
    } while (iVar2 != 0x3007e340);
    fence();
    custom0();
    if (*(char *)(param_1 + 0x7c) == '\0') {
      FUN_ram_40040a04(iVar1,0x3007d340);
      *(undefined1 *)(param_1 + 0x7c) = 1;
    }
    else {
      FUN_ram_40040a04(iVar1,*(int *)(param_1 + 0x34) + 0x3007d340);
      *(undefined1 *)(param_1 + 0x7c) = 0;
    }
  }
  return;
}


