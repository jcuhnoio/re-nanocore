/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40039000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40039000.
 * REA evidence: ev_2a0b8afa7b9c77007453730bd592fec2f5ae477077d19a7754fe569bc8d653d6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039000(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  fence();
  *(uint *)(param_1 + 0x100) =
       (param_4 & 1) << 4 | (param_5 & 1) << 1 | (param_2 & 1) << 0x10 | (param_3 & 0x7f) << 8;
  return;
}


/* NanoCore 1.10, address 0x4003902a.
 * REA evidence: ev_0010dbb9f377cf629d7501459f1a5787743264fa07e44a5d048b6d210f3bd09c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003902a(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  fence();
  *(uint *)(param_1 + 0x50) =
       (param_4 & 0x7f) << 8 | param_2 << 0x18 | (param_5 & 1) << 1 | (param_3 & 3) << 0x16 | 1;
  return;
}


/* NanoCore 1.10, address 0x40039058.
 * REA evidence: ev_167121f1e50a8c0186a6f73ecf7d2f94eae7dfbcf06997998ead2124b6d39139
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039058(int param_1)

{
  fence();
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}


/* NanoCore 1.10, address 0x40039066.
 * REA evidence: ev_22f4d376c86a043bbfd0fad62bd78b98fc07e9f24f791e094a64f705305482e2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039066(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_6 == 0) {
    param_3 = param_2;
  }
  if (param_3 < 2) {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar1 = 0;
  }
  else {
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      uVar4 = 0xffffffff;
      uVar3 = 0xffffffff;
      uVar2 = 0xffffffff;
      uVar1 = 0xffffffff;
    }
    else {
      uVar4 = (int)(((param_5 >> 0x18) - (param_4 >> 0x18)) * 0x10000) / param_3;
      uVar3 = (int)((((param_5 & 0xffffff) >> 0x10) - ((param_4 & 0xffffff) >> 0x10)) * 0x10000) /
              param_3;
      uVar2 = (int)((((param_5 & 0xffff) >> 8) - ((param_4 & 0xffff) >> 8)) * 0x10000) / param_3;
      uVar1 = (int)(((param_5 & 0xff) - (param_4 & 0xff)) * 0x10000) / param_3;
    }
  }
  fence();
  *(uint *)(param_1 + 0x1c) = param_4;
  fence();
  *(uint *)(param_1 + 0x30) = uVar4 & 0x1ffffff;
  fence();
  *(uint *)(param_1 + 0x34) = uVar3 & 0x1ffffff;
  fence();
  *(uint *)(param_1 + 0x38) = uVar2 & 0x1ffffff;
  fence();
  *(uint *)(param_1 + 0x3c) = uVar1 & 0x1ffffff;
  return;
}


/* NanoCore 1.10, address 0x4003910a.
 * REA evidence: ev_41ef5b5f68c35243d520c21faabfc027244c85982a67c7aecc7f029cd5d0af9f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003910a(int param_1,undefined4 param_2)

{
  fence();
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}


/* NanoCore 1.10, address 0x40039114.
 * REA evidence: ev_688bc43a6039bb1cfbca616eca7fa7cb60569c25f5cf121799c73f07991f5ff2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039114(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                     uint param_7)

{
  fence();
  *(uint *)(param_1 + 0x74) = (param_3 & 0x3fff) << 0x10 | param_2 & 0x3fff;
  fence();
  *(uint *)(param_1 + 0x70) = (param_5 & 0x3fff) << 0x10 | param_4 & 0x3fff;
  fence();
  *(uint *)(param_1 + 0x78) = (param_7 & 0x3fff) << 0x10 | param_6 & 0x3fff;
  return;
}


/* NanoCore 1.10, address 0x40039164.
 * REA evidence: ev_bead30176284a3099ea171f361a3dde539c43aa166436b16f3ad46c022b2f322
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039164(int param_1,undefined4 param_2)

{
  fence();
  *(undefined4 *)(param_1 + 0x94) = param_2;
  return;
}


/* NanoCore 1.10, address 0x40039170.
 * REA evidence: ev_6c5a1fc14e6a6d89eb4a2b9602980b8fbf14451d4a218b8d262ee2d40b4f63f8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039170(int param_1,undefined4 param_2)

{
  fence();
  *(undefined4 *)(param_1 + 0x120) = param_2;
  return;
}


/* NanoCore 1.10, address 0x4003917c.
 * REA evidence: ev_28e082e312ee57977abbc97612d907669880ead1fe3387ea26af1a804aa26fc3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003917c(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                     uint param_7,uint param_8)

{
  fence();
  *(uint *)(param_1 + 0x90) =
       (param_7 & 1) << 1 | param_8 & 1 | (param_6 & 7) << 8 | (param_5 & 7) << 0xb |
       (param_4 & 1) << 0xf | (param_3 & 1) << 0x10 | (param_2 & 1) << 0x11;
  return;
}


/* NanoCore 1.10, address 0x400391d2.
 * REA evidence: ev_ad7e9681bd71c350f1854e8d841d54f5e8e57ef277ecde0f8d263970336cb139
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400391d2(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                     uint param_7,uint param_8,uint param_9,int param_10)

{
  fence();
  param_1 = param_1 + param_10 * 0x20;
  *(uint *)(param_1 + 0x210) = (param_3 & 0x1fff) << 0x10 | param_2 & 0x1fff;
  fence();
  *(uint *)(param_1 + 0x214) = (param_5 & 0x1fff) << 0x10 | param_4 & 0x1fff;
  fence();
  *(uint *)(param_1 + 0x218) = param_8 & 0xfffff;
  fence();
  *(uint *)(param_1 + 0x21c) = param_6 & 0x1fffff;
  fence();
  *(uint *)(param_1 + 0x220) = param_9 & 0xfffff;
  fence();
  *(uint *)(param_1 + 0x224) = param_7 & 0x1fffff;
  return;
}


/* NanoCore 1.10, address 0x40039252.
 * REA evidence: ev_03a3d2b4cd592730f1e39496d17dd21def26925154d67930fddfa39394480ad3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039252(int param_1,undefined4 param_2)

{
  fence();
  *(undefined4 *)(param_1 + 0x200) = param_2;
  return;
}


/* NanoCore 1.10, address 0x4003925e.
 * REA evidence: ev_7d449a7c4e1eb0a9624f380c8840a7c853124e328ebc71132e0fcc9f80b4d19c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003925e(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_ram_4009625c;
  if (param_2 - 1U < 3) {
    puVar2 = (&PTR_DAT_ram_400962bc_ram_40096184)[param_2 - 1U];
  }
  if (param_3 == 0) {
    iVar1 = 0;
    do {
      fence();
      *(undefined4 *)(param_1 + 0x140 + iVar1) = *(undefined4 *)(puVar2 + iVar1);
      iVar1 = iVar1 + 4;
    } while (iVar1 != 0x30);
    return;
  }
  if (param_3 == 1) {
    iVar1 = 0;
    do {
      fence();
      *(undefined4 *)(param_1 + 0x170 + iVar1) = *(undefined4 *)(puVar2 + iVar1);
      iVar1 = iVar1 + 4;
    } while (iVar1 != 0x30);
  }
  return;
}


/* NanoCore 1.10, address 0x400392c0.
 * REA evidence: ev_50f58d1c11c79904575c9c1e547039062588ba105f8ae56ba775d2a8b5402f68
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400392c0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_ram_4009619c;
  if (param_2 - 1U < 3) {
    puVar1 = (undefined4 *)(&PTR_DAT_ram_400961fc_ram_40096190)[param_2 - 1U];
  }
  iVar2 = 0;
  do {
    fence();
    *(uint *)(param_1 + 0x1a0 + iVar2) = *(uint *)((int)puVar1 + iVar2) & 0x7ff;
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x30);
  return;
}


/* NanoCore 1.10, address 0x40039300.
 * REA evidence: ev_ed87f30210dcad38166ace15c998cc3a9248aacb6aab6fcc21f2054501708565
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039300(int param_1,uint param_2,uint param_3,uint param_4,int param_5,
                     undefined4 *param_6)

{
  fence();
  *(uint *)(param_1 + 0x14) = (param_3 & 0x1fff) << 0x10 | param_2 & 0x1fff;
  fence();
  *(uint *)(param_1 + 0x18) = param_5 << 0x10 | param_4 & 0xffff;
  fence();
  *(undefined4 *)(param_1 + 0x20) = *param_6;
  fence();
  *(undefined4 *)(param_1 + 0x24) = param_6[1];
  fence();
  *(undefined4 *)(param_1 + 0x28) = param_6[2];
  return;
}


/* NanoCore 1.10, address 0x40039352.
 * REA evidence: ev_bb6f0858a2335beea53bd7919a04bfc536cb2113f0812493253c63cb51cce09e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039352(int param_1,uint param_2,uint param_3,uint param_4,int param_5,
                     undefined4 *param_6)

{
  fence();
  *(uint *)(param_1 + 0x54) = (param_3 & 0x1fff) << 0x10 | param_2 & 0x1fff;
  fence();
  *(uint *)(param_1 + 0x58) = param_5 << 0x10 | param_4 & 0xffff;
  fence();
  *(undefined4 *)(param_1 + 0x60) = *param_6;
  fence();
  *(undefined4 *)(param_1 + 100) = param_6[1];
  fence();
  *(undefined4 *)(param_1 + 0x68) = param_6[2];
  return;
}


/* NanoCore 1.10, address 0x400393a4.
 * REA evidence: ev_0c4744ec143e390ae43eb7b1b23acd52289fbabbc6b771b461fa323cb7cd7256
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400393a4(int param_1,uint param_2,uint param_3,uint param_4,int param_5,
                     undefined4 *param_6)

{
  fence();
  *(uint *)(param_1 + 0x104) = (param_3 & 0x1fff) << 0x10 | param_2 & 0x1fff;
  fence();
  *(uint *)(param_1 + 0x108) = param_5 << 0x10 | param_4 & 0xffff;
  fence();
  *(undefined4 *)(param_1 + 0x110) = *param_6;
  fence();
  *(undefined4 *)(param_1 + 0x114) = param_6[1];
  fence();
  *(undefined4 *)(param_1 + 0x118) = param_6[2];
  return;
}


/* NanoCore 1.10, address 0x400393f6.
 * REA evidence: ev_14024d21a6babfac60a2c10e8687b2d3d7e47c62f82fd63add48a2d48042f98e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400393f6(int param_1)

{
  fence();
  return *(undefined4 *)(param_1 + 4);
}


/* NanoCore 1.10, address 0x40039400.
 * REA evidence: ev_d23cc248250f20acaa330fe7adf75b5f2a881de87314043bb9662060bb99ac7e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039400(int param_1,undefined4 param_2)

{
  fence();
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


/* NanoCore 1.10, address 0x4003940a.
 * REA evidence: ev_e7d6a09c1087f6c036eeedad3759306330d36bb6dfaf61c1f6fa681dcaeef0af
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003940a(undefined4 *param_1)

{
  fence();
  *param_1 = 0x10b;
  return;
}


/* NanoCore 1.10, address 0x40039416.
 * REA evidence: ev_bae6c4383c30b8db300185dce61e0b47aff9ab254c4603e2c0cbb4ccbce4da88
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039416(undefined4 *param_1)

{
  fence();
  *param_1 = 0;
  return;
}


/* NanoCore 1.10, address 0x40039420.
 * REA evidence: ev_c55364609d1df3a7fab855dc32a47012fe2da02c83f312010d91702f6da0ba5f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039420(int param_1)

{
  fence();
  *(undefined4 *)(param_1 + 8) = 5;
  return;
}


/* NanoCore 1.10, address 0x4003942c.
 * REA evidence: ev_4f28eb338b3c9cb723cc92b87f1d1e833cbafec25e3a7a712f92cafab0dffc2e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4003942c(int *param_1)

{
  if (*param_1 == 0) {
    return param_1[6] != 0;
  }
  return true;
}


/* NanoCore 1.10, address 0x4003943c.
 * REA evidence: ev_09c322b9dfa5be0c87fad1a7967c4c70c0a03e529a39af8fecb0a4da1d21f1eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003943c(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_ram_4003942c(param_2);
  *(undefined1 *)(param_1 + 0x34) = 1;
  if (param_3 < 0x14) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    if ((iVar1 == 0) && (0x13 < param_4)) {
      *(undefined1 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar2 = 0;
      goto LAB_ram_40039480;
    }
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = param_4 < 0x14 ^ 1;
  }
LAB_ram_40039480:
  *(uint *)(param_1 + 0x2c) = uVar2;
  uVar2 = 0;
  if (*(char *)(param_1 + 0x34) != '\0') {
    uVar2 = param_4 < 0x14 ^ 1;
  }
  *(uint *)(param_1 + 0x30) = uVar2;
  return;
}


/* NanoCore 1.10, address 0x400394a2.
 * REA evidence: ev_73ef8875fb41da76dcbd64543821e3305c3462649b4f3a240da3c60f335fddf4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400394a2(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_ram_3007e6f0;
  uVar2 = FUN_ram_400393f6(0x18b00000);
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  FUN_ram_40039400(0x18b00000,uVar2);
  FUN_ram_40039416(0x18b00000);
  FUN_ram_40004bce(*(undefined4 *)(iVar1 + 8),2);
  return 0;
}


/* NanoCore 1.10, address 0x400394de.
 * REA evidence: ev_d29dfddb3cb3e46abfca02dedf6389ab9832ffba742469b425139055a57241e7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400394de(int *param_1,int *param_2,undefined4 param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  switch(param_3) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    iVar1 = *param_2;
    param_4 = param_4 << 2;
    break;
  case 8:
  case 9:
    iVar1 = param_4 * 3 + param_5 * *param_2;
    goto LAB_ram_4003950c;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
    iVar1 = *param_2;
    param_4 = param_4 << 1;
    break;
  default:
    goto switchD_ram_400394f4_caseD_14;
  case 0x20:
    iVar1 = param_5 * *param_2;
    param_5 = param_5 >> 1;
    *param_1 = *param_1 + param_4 + iVar1;
    goto LAB_ram_40039524;
  case 0x21:
  case 0x22:
    iVar1 = param_5 * *param_2;
    param_5 = param_5 >> 1;
    *param_1 = *param_1 + param_4 + iVar1;
    goto LAB_ram_4003954a;
  case 0x23:
    *param_1 = *param_1 + param_4 + param_5 * *param_2;
LAB_ram_40039524:
    iVar1 = (param_4 >> 1) + param_5 * param_2[1];
    param_1[1] = param_1[1] + iVar1;
LAB_ram_40039532:
    param_1[2] = iVar1 + param_1[2];
switchD_ram_400394f4_caseD_14:
    return;
  case 0x24:
  case 0x25:
    *param_1 = *param_1 + param_4 + param_5 * *param_2;
LAB_ram_4003954a:
    param_1[1] = param_4 + param_5 * param_2[1] + param_1[1];
    return;
  case 0x2a:
    iVar1 = *param_2;
    break;
  case 0x2b:
    *param_1 = *param_1 + param_4 + param_5 * *param_2;
    param_1[1] = param_1[1] + param_4 + param_5 * param_2[1];
    iVar1 = param_4 + param_5 * param_2[1];
    goto LAB_ram_40039532;
  }
  iVar1 = param_4 + param_5 * iVar1;
LAB_ram_4003950c:
  *param_1 = iVar1 + *param_1;
  return;
}


/* NanoCore 1.10, address 0x400395a6.
 * REA evidence: ev_40753b082a458df136fdb7cb5ed2f58081d8090236e03698987bbebba71823fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400395a6(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_38 = *(undefined4 *)(param_1 + 4);
  uStack_34 = *(undefined4 *)(param_1 + 8);
  uStack_30 = *(undefined4 *)(param_1 + 0xc);
  uStack_2c = *(undefined4 *)(param_2 + 4);
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  uStack_28 = *(undefined4 *)(param_2 + 8);
  uStack_24 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uStack_48 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uStack_44 = *(undefined4 *)(param_1 + 0x14);
  uStack_40 = *(undefined4 *)(param_2 + 0x10);
  uStack_3c = *(undefined4 *)(param_2 + 0x14);
  FUN_ram_400394de(&uStack_38,&uStack_48,*(undefined4 *)(param_1 + 0x38),
                   *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  FUN_ram_400394de(&uStack_2c,&uStack_40,*(undefined4 *)(param_2 + 0x38),
                   *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
  FUN_ram_40039300(0x18b00000,uVar4,uVar5,uStack_48,uStack_44,&uStack_38);
  FUN_ram_400393a4(0x18b00000,uVar1,uVar3,uStack_40,uStack_3c,&uStack_2c);
  iVar2 = FUN_ram_4003942c(param_3);
  if (iVar2 != 0) {
    FUN_ram_40039352(0x18b00000,uVar1,uVar3,uStack_40,uStack_3c,&uStack_2c);
  }
  return;
}


/* NanoCore 1.10, address 0x4003965c.
 * REA evidence: ev_87e932824a5bf3e5bb7b990c7f39fc75085001d0f5399272ae0e90ec50a7cff2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003965c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_14 [8];
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_ram_4003940a(0x18b00000);
  FUN_ram_40039420(0x18b00000);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = FUN_ram_40004362(2000);
  iVar3 = FUN_ram_40004c86(uVar1,2,6,uVar2,auStack_14);
  uVar1 = 0xffffff8c;
  if ((iVar3 != -2) && (uVar1 = 0xffffffea, iVar3 != -1)) {
    uVar1 = 0;
  }
  FUN_ram_40039400(0x18b00000,*(undefined4 *)(param_1 + 0xc));
  if (*(uint *)(param_1 + 0xc) == 0) {
    FUN_ram_40039416(0x18b00000);
  }
  else {
    uVar1 = 0;
    if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
      return 0;
    }
  }
  FUN_ram_400379b8(0x16);
  FUN_ram_400379f8(0x16);
  return uVar1;
}


/* NanoCore 1.10, address 0x400396dc.
 * REA evidence: ev_c589765545938705adffcf6dcb2a19f56f74b247e785440fffca2104eeda00aa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_400396dc(int param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
                int *param_7)

{
  int iVar1;
  
  if (param_2 < 0x14) {
    if (param_3 < 0x14) {
      if (param_4 == 0) goto LAB_ram_400396e8;
      if (param_4 != 1) {
        return 0;
      }
      if (param_5 != 0) {
        if (param_5 != 1) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 1;
        goto LAB_ram_40039732;
      }
    }
    else {
      if (param_4 == 0) goto LAB_ram_400396ea;
      if (param_4 != 1) {
        return 0;
      }
    }
    iVar1 = param_7[2];
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (iVar1 != 0) {
      return 0;
    }
    if (*param_7 == 0) {
      return 0;
    }
    if (param_7[6] != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x20) != 2) {
      return 0;
    }
    if (*(int *)(param_1 + 0x24) != 3) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    if (param_3 < 0x14) {
LAB_ram_400396e8:
      if (param_5 != 0) {
        if (param_5 != 1) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
LAB_ram_40039732:
        *(int *)(param_1 + 0x18) = param_5;
        *(int *)(param_1 + 0x1c) = param_5;
        return 0;
      }
    }
LAB_ram_400396ea:
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (param_6 != 0) {
      return 0;
    }
    if (param_7[2] != 0) {
      return 0;
    }
    if (*param_7 == 0) {
      return 0;
    }
    if (param_7[6] != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x20) != 2) {
      return 0;
    }
    if (*(int *)(param_1 + 0x24) != 3) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  *(undefined4 *)(param_1 + 0x20) = 1;
  return 0;
}


/* NanoCore 1.10, address 0x40039798.
 * REA evidence: ev_b2fb9523b9105864f9701c177635ed619603f23f20666cb6d8d554c394da3ce4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039798(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                     uint param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  if (*param_2 == 0) goto LAB_ram_400397cc;
  switch(param_2[1]) {
  default:
    uVar1 = 2;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x20) = 0;
    goto LAB_ram_400397c8;
  case 2:
    uVar1 = 1;
    goto LAB_ram_400397de;
  case 3:
    uVar1 = 1;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x20) = 5;
    goto LAB_ram_400397f2;
  case 5:
    uVar1 = 4;
    goto LAB_ram_400397de;
  case 6:
    *(undefined4 *)(param_1 + 0x20) = 0;
    goto LAB_ram_400397fe;
  case 7:
    uVar1 = 5;
LAB_ram_400397de:
    *(undefined4 *)(param_1 + 0x20) = uVar1;
LAB_ram_400397c8:
    *(undefined4 *)(param_1 + 0x24) = 0;
    goto LAB_ram_400397cc;
  case 8:
    *(undefined4 *)(param_1 + 0x20) = 0;
    goto LAB_ram_4003980e;
  case 9:
    uVar1 = 4;
    break;
  case 10:
    *(undefined4 *)(param_1 + 0x20) = 5;
LAB_ram_400397fe:
    uVar1 = 2;
    goto LAB_ram_40039800;
  case 0xb:
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x20) = 1;
    goto LAB_ram_40039800;
  case 0xc:
    uVar1 = 5;
    break;
  case 0xd:
    *(undefined4 *)(param_1 + 0x20) = 0;
LAB_ram_400397f2:
    uVar1 = 1;
    goto LAB_ram_40039800;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar1;
LAB_ram_4003980e:
  uVar1 = 3;
LAB_ram_40039800:
  *(undefined4 *)(param_1 + 0x24) = uVar1;
LAB_ram_400397cc:
  FUN_ram_400396dc(param_1,param_3,param_4,(param_5 & 0x1ff) >> 8,(param_6 & 0x1ff) >> 8,param_7,
                   param_2);
  return;
}


/* NanoCore 1.10, address 0x40039834.
 * REA evidence: ev_f0253f3d68c4a7323dfaa456b0e090a8e1c9a03dbe232f688a814e80ceac698a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40039834(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint local_134 [14];
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  int iStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  undefined4 auStack_b4 [2];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  ushort uStack_42;
  
  FUN_ram_400049d6(*(undefined4 *)(_DAT_ram_3007e6f0 + 4),0xffffffff);
  uVar1 = 0xffffffff;
  switch(param_2) {
  case 0x4700:
    local_134[0xd] = FUN_ram_40038f28(0x18b00000);
    puVar4 = local_134 + 0xd;
    goto LAB_ram_400398ae;
  case 0x4701:
    puVar4 = (uint *)(_DAT_ram_3007e6f0 + 0x40);
LAB_ram_400398ae:
    FUN_ram_4000305c(param_3,puVar4,4);
    uVar1 = 0;
    goto switchD_ram_4003989e_default;
  case 0x4702:
    FUN_ram_4000305c(local_134 + 0xd,param_3,0x74);
    iVar2 = _DAT_ram_3007e6f0;
    if ((((iStack_f4 != 0) || (*(char *)(_DAT_ram_3007e6f0 + 0x35) != '\0')) &&
        ((uStack_d0 == 0 ||
         ((((-1 < (int)uStack_cc && (-1 < (int)uStack_c8)) && ((int)uStack_cc < (int)uStack_d8)) &&
          ((int)uStack_c8 < (int)uStack_d4)))))) && (local_134[0xd] < 3)) {
      if (uStack_d0 == 0) {
        uStack_cc = 0;
        uStack_c8 = 0;
        uStack_c4 = uStack_d8;
        uStack_c0 = uStack_d4;
      }
      if (uStack_bc < 0x23) {
        if (0x1f < uStack_bc) {
          uStack_cc = uStack_cc & 0xfffffffe;
          uStack_c4 = uStack_c4 & 0xfffffffe;
          uStack_c8 = uStack_c8 & 0xfffffffe;
          uStack_c0 = uStack_c0 & 0xfffffffe;
          uStack_d8 = uStack_d8 & 0xfffffffe;
          uStack_d4 = uStack_d4 & 0xfffffffe;
        }
      }
      else if (uStack_bc - 0x23 < 7) {
        uStack_cc = uStack_cc & 0xfffffffe;
        uStack_c4 = uStack_c4 & 0xfffffffe;
        uStack_d8 = uStack_d8 & 0xfffffffe;
      }
      if ((int)uStack_d8 < (int)(uStack_c4 + uStack_cc)) {
        uStack_c4 = uStack_d8 - uStack_cc;
      }
      if ((int)uStack_d4 < (int)(uStack_c0 + uStack_c8)) {
        uStack_c0 = uStack_d4 - uStack_c8;
      }
      if ((((int)uStack_c4 < 0x1001) && ((int)uStack_c0 < 0x1001)) &&
         ((uStack_bc < 0x14 ||
          (((7 < (int)uStack_c4 && (7 < (int)uStack_c0)) && (uStack_bc == 0x2a)))))) {
        FUN_ram_40039798(_DAT_ram_3007e6f0,auStack_b4,0,uStack_bc,0,uStack_b8,1);
        FUN_ram_4003943c(iVar2,auStack_b4,0,uStack_bc);
        if (*(int *)(iVar2 + 0x2c) != 0) {
          FUN_ram_4003925e(0x18b00000,uStack_b8 & 3,1);
        }
        if (*(int *)(iVar2 + 0x30) != 0) {
          FUN_ram_400392c0(0x18b00000,uStack_b8 & 3);
        }
        FUN_ram_40038fb8(0x18b00000,uStack_a8,uStack_ac,*(undefined4 *)(iVar2 + 0x10),0,0,
                         local_134[0xd] + 1);
        FUN_ram_40039000(0x18b00000,*(undefined4 *)(iVar2 + 0x1c),uStack_bc,iStack_94,
                         *(undefined4 *)(iVar2 + 0x30));
        iVar3 = FUN_ram_4003942c(auStack_b4);
        if (iVar3 == 0) {
          FUN_ram_4003917c(0x18b00000,*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),0,
                           *(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),iStack_9c,
                           auStack_b4[0]);
          FUN_ram_40039058(0x18b00000);
        }
        else {
          FUN_ram_4003902a(0x18b00000,uStack_a0,uStack_a4,uStack_bc,*(undefined4 *)(iVar2 + 0x2c));
          FUN_ram_4003917c(0x18b00000,*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),0,
                           *(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),iStack_9c,
                           auStack_b4[0]);
        }
        if (iStack_9c != 0) {
          FUN_ram_40039164(0x18b00000,iStack_98);
        }
        FUN_ram_40039252(0x18b00000,0);
        uVar9 = uStack_c0;
        uVar8 = uStack_c4;
        local_134[10] = uStack_f0;
        local_134[0xb] = uStack_ec;
        local_134[0xc] = uStack_e8;
        local_134[8] = uStack_e4;
        local_134[9] = uStack_e0;
        FUN_ram_400394de(local_134 + 10,local_134 + 8,uStack_bc,uStack_cc,uStack_c8);
        FUN_ram_400393a4(0x18b00000,uVar8,uVar9,local_134[8],local_134[9],local_134 + 10);
        FUN_ram_40039300(0x18b00000,uVar8,uVar9,local_134[8],local_134[9],local_134 + 10);
        iVar3 = FUN_ram_4003942c(auStack_b4);
        if (iVar3 != 0) {
          FUN_ram_40039352(0x18b00000,uVar8,uVar9,local_134[8],local_134[9],local_134 + 10);
        }
        if (local_134[0xd] == 1) {
          uVar1 = 0;
        }
        else {
          if (local_134[0xd] != 2) {
            if (local_134[0xd] == 0) {
              FUN_ram_4003910a(0x18b00000,uStack_fc);
            }
            goto LAB_ram_40039b00;
          }
          uVar1 = 1;
        }
        FUN_ram_40039066(0x18b00000,uStack_c4,uStack_c0,uStack_fc,uStack_f8,uVar1);
LAB_ram_40039b00:
        uVar1 = FUN_ram_4003965c(iVar2);
        goto switchD_ram_4003989e_default;
      }
    }
    break;
  case 0x4703:
    FUN_ram_4000305c(local_134 + 0xd,param_3,0xa8);
    iVar2 = _DAT_ram_3007e6f0;
    if ((((local_134[0xd] != 0) || (*(char *)(_DAT_ram_3007e6f0 + 0x35) != '\0')) &&
        ((uStack_c0 != 0 || (*(char *)(_DAT_ram_3007e6f0 + 0x35) != '\0')))) &&
       (((uStack_c8 < 0x14 || (uStack_c8 == 0x2a)) && (uStack_88 < 0x14)))) {
      if ((uStack_5c & 0x3ffff) >> 0x10 == 0) {
        if ((iStack_60 != 0) && (*(int *)(_DAT_ram_3007e6f0 + 0x38) == 0)) {
          iStack_60 = 0;
        }
      }
      else if (((uStack_5c & 3) != 0 || iStack_60 != 0) || (0x13 < uStack_c8)) break;
      if ((((iStack_dc == 0) ||
           (((((-1 < (int)uStack_d8 && (uStack_d0 != 0)) && (-1 < (int)uStack_d4)) &&
             ((uStack_cc != 0 && ((int)uStack_d8 < (int)uStack_e4)))) &&
            ((int)uStack_d4 < (int)uStack_e0)))) &&
          ((iStack_9c == 0 ||
           (((-1 < iStack_98 && (uStack_90 != 0)) &&
            ((-1 < iStack_94 &&
             (((uStack_8c != 0 && (iStack_98 < (int)uStack_a4)) && (iStack_94 < (int)uStack_a0))))))
           )))) && ((((uStack_e4 != 0 && (uStack_e0 != 0)) && (uStack_a4 != 0)) && (uStack_a0 != 0))
                   )) {
        if (iStack_dc == 0) {
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_d0 = uStack_e4;
          uStack_cc = uStack_e0;
        }
        if (iStack_9c == 0) {
          iStack_98 = 0;
          iStack_94 = 0;
          uStack_90 = uStack_a4;
          uStack_8c = uStack_a0;
        }
        if (uStack_c8 < 0x23) {
          if (0x1f < uStack_c8) {
            uStack_d8 = uStack_d8 & 0xfffffffe;
            uStack_d0 = uStack_d0 & 0xfffffffe;
            uStack_d4 = uStack_d4 & 0xfffffffe;
            uStack_cc = uStack_cc & 0xfffffffe;
            uStack_e4 = uStack_e4 & 0xfffffffe;
            uStack_e0 = uStack_e0 & 0xfffffffe;
          }
        }
        else if (uStack_c8 - 0x23 < 7) {
          uStack_d8 = uStack_d8 & 0xfffffffe;
          uStack_d0 = uStack_d0 & 0xfffffffe;
          uStack_e4 = uStack_e4 & 0xfffffffe;
        }
        if ((int)uStack_e4 < (int)(uStack_d0 + uStack_d8)) {
          uStack_d0 = uStack_e4 - uStack_d8;
        }
        if ((int)uStack_e0 < (int)(uStack_cc + uStack_d4)) {
          uStack_cc = uStack_e0 - uStack_d4;
        }
        if ((int)uStack_a4 < (int)(uStack_90 + iStack_98)) {
          uStack_90 = uStack_a4 - iStack_98;
        }
        if ((int)uStack_a0 < (int)(uStack_8c + iStack_94)) {
          uStack_8c = uStack_a0 - iStack_94;
        }
        if (((((int)uStack_cc < 0x1001) && ((int)uStack_d0 < 0x1001)) &&
            (((int)uStack_8c < 0x1001 && ((int)uStack_90 < 0x1001)))) &&
           ((uStack_c8 < 0x14 || ((7 < (int)uStack_d0 && (7 < (int)uStack_cc)))))) {
          FUN_ram_40039798(_DAT_ram_3007e6f0,&iStack_80,uStack_c8,uStack_88,uStack_c4,uStack_84,0);
          FUN_ram_4003943c(iVar2,&iStack_80,uStack_c8,uStack_88);
          if (*(int *)(iVar2 + 0x28) != 0) {
            FUN_ram_4003925e(0x18b00000,uStack_c4 & 3,0);
          }
          if (*(int *)(iVar2 + 0x2c) != 0) {
            FUN_ram_4003925e(0x18b00000,uStack_84 & 3,1);
          }
          if (*(int *)(iVar2 + 0x30) != 0) {
            FUN_ram_400392c0(0x18b00000,uStack_84 & 3);
          }
          FUN_ram_40038f32(0x18b00000,uStack_74,uStack_78,*(undefined4 *)(iVar2 + 0x10),
                           (uStack_5c & 0x3ffff) >> 0x10,0,uStack_c8,(uStack_5c & 0x3ff) >> 9,
                           (uStack_5c & 0x1ff) >> 8,uStack_5c & 3,0,*(undefined4 *)(iVar2 + 0x28));
          FUN_ram_40039000(0x18b00000,*(undefined4 *)(iVar2 + 0x1c),uStack_88,iStack_60,
                           *(undefined4 *)(iVar2 + 0x30));
          iVar3 = FUN_ram_4003942c(&iStack_80);
          if (iVar3 == 0) {
            FUN_ram_4003917c(0x18b00000,*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),
                             0,*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),iStack_68
                             ,iStack_80);
            FUN_ram_40039058(0x18b00000);
          }
          else {
            FUN_ram_4003902a(0x18b00000,uStack_6c,uStack_70,uStack_88,*(undefined4 *)(iVar2 + 0x2c))
            ;
            FUN_ram_4003917c(0x18b00000,*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),
                             0,*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),iStack_68
                             ,iStack_80);
          }
          if (iStack_68 != 0) {
            FUN_ram_40039164(0x18b00000,uStack_64);
          }
          if (iStack_60 != 0) {
            FUN_ram_40039170(0x18b00000,*(undefined4 *)(_DAT_ram_3007e6f0 + 0x3c));
          }
          local_134[0] = uStack_d0;
          local_134[2] = uStack_cc;
          uVar8 = uStack_90;
          uVar9 = uStack_8c;
          if ((uStack_5c & 1) != 0) {
            uVar8 = uStack_8c;
            uVar9 = uStack_90;
          }
          if (uStack_c8 < 0x2a) {
            if (0x22 < uStack_c8) {
              local_134[3] = uStack_cc;
              if (uVar8 == 0) {
                uVar7 = 0xffffffff;
              }
              else {
                uVar7 = (int)(uStack_d0 << 0x10) / (int)uVar8;
              }
              local_134[1] = (int)uStack_d0 >> 1;
              if (uVar9 == 0) {
                local_134[6] = 0xffffffff;
              }
              else {
                local_134[6] = (int)(uStack_cc << 0x10) / (int)uVar9;
              }
              local_134[5] = (int)uVar7 >> 1;
              local_134[8] = local_134[5];
              if (0xffff < (int)uVar7) {
                local_134[8] = local_134[5] - 0x8000;
              }
              local_134[10] = (int)local_134[6] >> 1;
              if (0xffff < (int)local_134[6]) {
                local_134[10] = local_134[10] - 0x8000;
              }
              local_134[8] = local_134[8] & 0xfffffffe;
              local_134[4] = uVar7 & 0xfffffffe;
              iVar3 = (int)((uVar7 & 0xfffffffe) - local_134[8]) >> 0x10;
              if (iVar3 < 5) {
              }
              else {
                local_134[8] = (iVar3 + -4) * 0x10000 + local_134[8];
              }
              local_134[7] = local_134[6];
              local_134[9] = (int)local_134[8] >> 1;
              local_134[0xb] = local_134[10];
LAB_ram_40039fce:
              iVar3 = 2;
              goto LAB_ram_40039eec;
            }
            if (uStack_c8 < 0x14) {
              if ((uStack_d0 != uVar8) || (uVar1 = 0, uStack_cc != uVar9)) {
                if (uVar8 == 0) {
                  local_134[4] = 0xffffffff;
                }
                else {
                  local_134[4] = (int)(uStack_d0 << 0x10) / (int)uVar8;
                }
                if (uVar9 == 0) {
                  local_134[6] = 0xffffffff;
                }
                else {
                  local_134[6] = (int)(uStack_cc << 0x10) / (int)uVar9;
                }
                local_134[8] = (int)local_134[4] >> 1;
                if (0xffff < (int)local_134[4]) {
                  local_134[8] = local_134[8] - 0x8000;
                }
                local_134[10] = (int)local_134[6] >> 1;
                if (0xffff < (int)local_134[6]) {
                  local_134[10] = local_134[10] - 0x8000;
                }
                if ((3 < (int)uStack_d0) && (3 < (int)uStack_cc)) goto LAB_ram_40039eea;
                goto LAB_ram_40039de8;
              }
              goto LAB_ram_40039f48;
            }
            if (uStack_c8 - 0x20 < 3) {
              if (uVar8 == 0) {
                uVar7 = 0xffffffff;
              }
              else {
                uVar7 = (int)(uStack_d0 << 0x10) / (int)uVar8;
              }
              local_134[1] = (int)uStack_d0 >> 1;
              local_134[3] = (int)uStack_cc >> 1;
              local_134[5] = (int)uVar7 >> 1;
              if (uVar9 == 0) {
                uVar6 = 0xffffffff;
              }
              else {
                uVar6 = (int)(uStack_cc << 0x10) / (int)uVar9;
              }
              local_134[8] = local_134[5];
              if (0xffff < (int)uVar7) {
                local_134[8] = local_134[5] - 0x8000;
              }
              local_134[7] = (int)uVar6 >> 1;
              local_134[10] = local_134[7];
              if (0xffff < (int)uVar6) {
                local_134[10] = local_134[7] - 0x8000;
              }
              local_134[8] = local_134[8] & 0xfffffffe;
              local_134[4] = uVar7 & 0xfffffffe;
              local_134[10] = local_134[10] & 0xfffffffe;
              local_134[6] = uVar6 & 0xfffffffe;
              iVar3 = (int)((uVar7 & 0xfffffffe) - local_134[8]) >> 0x10;
              if (4 < iVar3) {
                local_134[8] = (iVar3 + -4) * 0x10000 + local_134[8];
              }
              iVar3 = (int)((uVar6 & 0xfffffffe) - local_134[10]) >> 0x10;
              if (3 < iVar3) {
                local_134[10] = (iVar3 + -4) * 0x10000 + local_134[10];
              }
              local_134[9] = (int)local_134[8] >> 1;
              local_134[0xb] = (int)local_134[10] >> 1;
              goto LAB_ram_40039fce;
            }
          }
          else {
            if (uStack_c8 != 0x2a) {
              if (uStack_c8 != 0x2b) goto LAB_ram_40039de8;
              local_134[1] = uStack_d0;
              local_134[3] = uStack_cc;
              if (uVar8 == 0) {
                local_134[4] = 0xffffffff;
              }
              else {
                local_134[4] = (int)(uStack_d0 << 0x10) / (int)uVar8;
              }
              if (uVar9 == 0) {
                local_134[6] = 0xffffffff;
              }
              else {
                local_134[6] = (int)(uStack_cc << 0x10) / (int)uVar9;
              }
              local_134[8] = (int)local_134[4] >> 1;
              if (0xffff < (int)local_134[4]) {
                local_134[8] = local_134[8] - 0x8000;
              }
              local_134[10] = (int)local_134[6] >> 1;
              if (0xffff < (int)local_134[6]) {
                local_134[10] = local_134[10] - 0x8000;
              }
              local_134[5] = local_134[4];
              local_134[7] = local_134[6];
              local_134[9] = local_134[8];
              local_134[0xb] = local_134[10];
              goto LAB_ram_40039fce;
            }
            if (uVar8 == 0) {
              local_134[4] = 0xffffffff;
            }
            else {
              local_134[4] = (int)(uStack_d0 << 0x10) / (int)uVar8;
            }
            if (uVar9 == 0) {
              local_134[6] = 0xffffffff;
            }
            else {
              local_134[6] = (int)(uStack_cc << 0x10) / (int)uVar9;
            }
            local_134[8] = (int)local_134[4] >> 1;
            if (0xffff < (int)local_134[4]) {
              local_134[8] = local_134[8] - 0x8000;
            }
            local_134[10] = (int)local_134[6] >> 1;
            if (0xffff < (int)local_134[6]) {
              local_134[10] = local_134[10] - 0x8000;
            }
LAB_ram_40039eea:
            iVar3 = 1;
LAB_ram_40039eec:
            if ((0x13 < uStack_88) || ((3 < (int)uVar9 && (3 < (int)uVar8)))) {
              iVar10 = 0;
              do {
                iVar11 = iVar10 + 1;
                FUN_ram_400391d2(0x18b00000,local_134[iVar10],local_134[iVar10 + 2],uVar8,uVar9,
                                 local_134[iVar10 + 4],local_134[iVar10 + 6],local_134[iVar10 + 8],
                                 local_134[iVar10 + 10],iVar10);
                iVar10 = iVar11;
              } while (iVar11 != iVar3);
              uVar1 = 1;
LAB_ram_40039f48:
              FUN_ram_40039252(0x18b00000,uVar1);
            }
          }
LAB_ram_40039de8:
          piVar5 = &iStack_80;
LAB_ram_40039dea:
          FUN_ram_400395a6(local_134 + 0xd,&uStack_c0,piVar5);
          goto LAB_ram_40039b00;
        }
      }
    }
    break;
  case 0x4704:
    FUN_ram_4000305c(local_134 + 0xd,param_3,0xc0);
    iVar2 = _DAT_ram_3007e6f0;
    if (((((local_134[0xd] != 0) || (*(char *)(_DAT_ram_3007e6f0 + 0x35) != '\0')) &&
         ((uStack_c0 != 0 || (*(char *)(_DAT_ram_3007e6f0 + 0x35) != '\0')))) &&
        (((uStack_c8 < 0x14 && (uStack_88 < 0x14)) && ((uStack_42 & 3) == 0)))) &&
       ((iStack_dc == 0 ||
        (((-1 < (int)uStack_d8 && (-1 < (int)uStack_d4)) &&
         (((int)uStack_d8 < (int)uStack_e4 && ((int)uStack_d4 < (int)uStack_e0)))))))) {
      if (iStack_9c == 0) {
        if (iStack_dc == 0) {
LAB_ram_4003a0d0:
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_d0 = uStack_e4;
          uStack_cc = uStack_e0;
          if (iStack_9c != 0) goto LAB_ram_4003a0ea;
        }
        iStack_98 = 0;
        iStack_94 = 0;
        uStack_90 = uStack_a4;
        uStack_8c = uStack_a0;
      }
      else {
        if (((iStack_98 < 0) || (iStack_94 < 0)) ||
           (((int)uStack_a4 <= iStack_98 || ((int)uStack_a0 <= iStack_94)))) break;
        if (iStack_dc == 0) goto LAB_ram_4003a0d0;
      }
LAB_ram_4003a0ea:
      if ((int)uStack_e4 < (int)(uStack_d0 + uStack_d8)) {
        uStack_d0 = uStack_e4 - uStack_d8;
      }
      if ((int)uStack_e0 < (int)(uStack_cc + uStack_d4)) {
        uStack_cc = uStack_e0 - uStack_d4;
      }
      if ((uStack_d0 - 4 < 0xffd) && (uStack_cc - 4 < 0xffd)) {
        if ((int)uStack_a4 < (int)(uStack_90 + iStack_98)) {
          uStack_90 = uStack_a4 - iStack_98;
        }
        if ((int)uStack_a0 < (int)(uStack_8c + iStack_94)) {
          uStack_8c = uStack_a0 - iStack_94;
        }
        if ((uStack_90 - 4 < 0xffd) && (uStack_8c - 4 < 0xffd)) {
          FUN_ram_40039798(_DAT_ram_3007e6f0,&iStack_68,uStack_c8,uStack_88,uStack_c4,uStack_84,0);
          *(undefined4 *)(iVar2 + 0x28) = 0;
          *(undefined4 *)(iVar2 + 0x2c) = 0;
          *(undefined4 *)(iVar2 + 0x30) = 0;
          FUN_ram_40038fb8(0x18b00000,uStack_5c,iStack_60,*(undefined4 *)(iVar2 + 0x10),1,uStack_c8,
                           0);
          FUN_ram_40039000(0x18b00000,*(undefined4 *)(iVar2 + 0x1c),uStack_88,0,
                           *(undefined4 *)(iVar2 + 0x30));
          iVar3 = FUN_ram_4003942c(&iStack_68);
          if (iVar3 == 0) {
            FUN_ram_4003917c(0x18b00000,*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),
                             0,*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),iStack_50
                             ,iStack_68);
            FUN_ram_40039058(0x18b00000);
          }
          else {
            FUN_ram_4003902a(0x18b00000,uStack_54,uStack_58,uStack_88,*(undefined4 *)(iVar2 + 0x2c))
            ;
            FUN_ram_4003917c(0x18b00000,*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),
                             0,*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),iStack_50
                             ,iStack_68);
          }
          if (iStack_50 != 0) {
            iStack_50 = 0;
          }
          FUN_ram_40039252(0x18b00000,0);
          FUN_ram_40039114(0x18b00000,uStack_70,uStack_6c,iStack_80,uStack_7c,uStack_78,uStack_74);
          piVar5 = &iStack_68;
          goto LAB_ram_40039dea;
        }
      }
    }
    break;
  default:
    goto switchD_ram_4003989e_default;
  }
  uVar1 = 0xffffffff;
switchD_ram_4003989e_default:
  FUN_ram_40004ac8(*(undefined4 *)(_DAT_ram_3007e6f0 + 4));
  return uVar1;
}


