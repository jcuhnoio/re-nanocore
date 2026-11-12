/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4003a000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4003a02e.
 * REA evidence: ev_e4e629b2fc69a8dd5a0e1e4576ae63ddc2c4e82bc143ee40a288de1841827211
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a02e(int param_1,undefined4 param_2)

{
  fence();
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}


/* NanoCore 1.11, address 0x4003a038.
 * REA evidence: ev_a9d98762b1dbdc797f5beaf70b63738b41874bbfbb6012c176a678eb52c63884
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a038(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
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


/* NanoCore 1.11, address 0x4003a088.
 * REA evidence: ev_ca8d01dbe600e3f197fef995976c019f1d3e4f56b9d94ddef67b08e292538775
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a088(int param_1,undefined4 param_2)

{
  fence();
  *(undefined4 *)(param_1 + 0x94) = param_2;
  return;
}


/* NanoCore 1.11, address 0x4003a094.
 * REA evidence: ev_2c5cda332d2f454393804fde0cdb5f13a4c2ccadbd04162052c2b59e7a671778
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a094(int param_1,undefined4 param_2)

{
  fence();
  *(undefined4 *)(param_1 + 0x120) = param_2;
  return;
}


/* NanoCore 1.11, address 0x4003a0a0.
 * REA evidence: ev_479b37392f4de69418457d7bb5a24abe779520ef7f87d919710d0e3adc303351
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a0a0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                     uint param_7,uint param_8)

{
  fence();
  *(uint *)(param_1 + 0x90) =
       (param_7 & 1) << 1 | param_8 & 1 | (param_6 & 7) << 8 | (param_5 & 7) << 0xb |
       (param_4 & 1) << 0xf | (param_3 & 1) << 0x10 | (param_2 & 1) << 0x11;
  return;
}


/* NanoCore 1.11, address 0x4003a0f6.
 * REA evidence: ev_83f9aff8872a653b3ce297f5e2d31774587e6a636409dbde2641975b0433a670
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a0f6(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
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


/* NanoCore 1.11, address 0x4003a176.
 * REA evidence: ev_224d1024d1e2b6ea9530e4cafdf2ebce69df65e3653570f9f96c67b54b14612e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a176(int param_1,undefined4 param_2)

{
  fence();
  *(undefined4 *)(param_1 + 0x200) = param_2;
  return;
}


/* NanoCore 1.11, address 0x4003a182.
 * REA evidence: ev_0439018c808131c6581d9f6513ab0562156226442a1bf798329d9157a221e0f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a182(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_ram_400980d8;
  if (param_2 - 1U < 3) {
    puVar2 = (&PTR_DAT_ram_40098138_ram_40098000)[param_2 - 1U];
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


/* NanoCore 1.11, address 0x4003a1e4.
 * REA evidence: ev_721a3d5af1216f3e1c8bc12d334eeb6a498dff5644c05ddbf228bc3954c539b2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a1e4(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_ram_40098018;
  if (param_2 - 1U < 3) {
    puVar1 = (undefined4 *)(&PTR_DAT_ram_40098078_ram_4009800c)[param_2 - 1U];
  }
  iVar2 = 0;
  do {
    fence();
    *(uint *)(param_1 + 0x1a0 + iVar2) = *(uint *)((int)puVar1 + iVar2) & 0x7ff;
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x30);
  return;
}


/* NanoCore 1.11, address 0x4003a224.
 * REA evidence: ev_019515d1a50701731db4ce0da81e2005b957b5ffbd6b685e759a1f3cd85617ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a224(int param_1,uint param_2,uint param_3,uint param_4,int param_5,
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


/* NanoCore 1.11, address 0x4003a276.
 * REA evidence: ev_3ab69c7d39961ec30bd8b3861de09f7b5201c7fac6078089cbfe0dcb3c158de2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a276(int param_1,uint param_2,uint param_3,uint param_4,int param_5,
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


/* NanoCore 1.11, address 0x4003a2c8.
 * REA evidence: ev_92137c8e8e523fa018b1121ab98b560b41e7eae2c5d8f5f22a986937acaeb3c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a2c8(int param_1,uint param_2,uint param_3,uint param_4,int param_5,
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


/* NanoCore 1.11, address 0x4003a31a.
 * REA evidence: ev_70cea9d69f47222448048dcbcdc30e701efc1d7059778abdd07d31924b2e2278
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003a31a(int param_1)

{
  fence();
  return *(undefined4 *)(param_1 + 4);
}


/* NanoCore 1.11, address 0x4003a324.
 * REA evidence: ev_967a5dab9d7ca63b45687ec0287dc3f2851b1d53e345f6dda4a4f271eeefd418
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a324(int param_1,undefined4 param_2)

{
  fence();
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}


/* NanoCore 1.11, address 0x4003a32e.
 * REA evidence: ev_78b1dff7a24f49f434c986bd209d725e1987b34e5b30c0e684f0d8ebdb17bd35
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a32e(undefined4 *param_1)

{
  fence();
  *param_1 = 0x10b;
  return;
}


/* NanoCore 1.11, address 0x4003a33a.
 * REA evidence: ev_9ab20451e16322cfbf76842dada4dbd24d167e831cd2fb7d368481a1656aed28
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a33a(undefined4 *param_1)

{
  fence();
  *param_1 = 0;
  return;
}


/* NanoCore 1.11, address 0x4003a344.
 * REA evidence: ev_86b9690da795fd43b90dc060b98eb29dfae07b1dee91e45cf82a16ea65f3a7a1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a344(int param_1)

{
  fence();
  *(undefined4 *)(param_1 + 8) = 5;
  return;
}


/* NanoCore 1.11, address 0x4003a350.
 * REA evidence: ev_98b5d46341f74d66b0c4396bb76ebb1cf44327e77204c8ec645147cf708a17b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4003a350(int *param_1)

{
  if (*param_1 == 0) {
    return param_1[6] != 0;
  }
  return true;
}


/* NanoCore 1.11, address 0x4003a360.
 * REA evidence: ev_8c301646915ee5a50079be89349bebb245f27370be049603cca21d97c991122a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a360(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_ram_4003a350(param_2);
  *(undefined1 *)(param_1 + 0x34) = 1;
  if (param_3 < 0x14) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    if ((iVar1 == 0) && (0x13 < param_4)) {
      *(undefined1 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar2 = 0;
      goto LAB_ram_4003a3a4;
    }
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = param_4 < 0x14 ^ 1;
  }
LAB_ram_4003a3a4:
  *(uint *)(param_1 + 0x2c) = uVar2;
  uVar2 = 0;
  if (*(char *)(param_1 + 0x34) != '\0') {
    uVar2 = param_4 < 0x14 ^ 1;
  }
  *(uint *)(param_1 + 0x30) = uVar2;
  return;
}


/* NanoCore 1.11, address 0x4003a3c6.
 * REA evidence: ev_d916849387a3fab0393c699d17ae0be39a2df62167b61ee270b3f97a79edd8df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003a3c6(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_ram_3007fa70;
  uVar2 = FUN_ram_4003a31a(0x18b00000);
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  FUN_ram_4003a324(0x18b00000,uVar2);
  FUN_ram_4003a33a(0x18b00000);
  FUN_ram_40004bbe(*(undefined4 *)(iVar1 + 8),2);
  return 0;
}


/* NanoCore 1.11, address 0x4003a402.
 * REA evidence: ev_919e170978531616e03aa90d3fffae2014da1e87b88314b6d5c2d223c3ce65a9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a402(int *param_1,int *param_2,undefined4 param_3,uint param_4,uint param_5)

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
    goto LAB_ram_4003a430;
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
    goto switchD_ram_4003a418_caseD_14;
  case 0x20:
    iVar1 = param_5 * *param_2;
    param_5 = param_5 >> 1;
    *param_1 = *param_1 + param_4 + iVar1;
    goto LAB_ram_4003a448;
  case 0x21:
  case 0x22:
    iVar1 = param_5 * *param_2;
    param_5 = param_5 >> 1;
    *param_1 = *param_1 + param_4 + iVar1;
    goto LAB_ram_4003a46e;
  case 0x23:
    *param_1 = *param_1 + param_4 + param_5 * *param_2;
LAB_ram_4003a448:
    iVar1 = (param_4 >> 1) + param_5 * param_2[1];
    param_1[1] = param_1[1] + iVar1;
LAB_ram_4003a456:
    param_1[2] = iVar1 + param_1[2];
switchD_ram_4003a418_caseD_14:
    return;
  case 0x24:
  case 0x25:
    *param_1 = *param_1 + param_4 + param_5 * *param_2;
LAB_ram_4003a46e:
    param_1[1] = param_4 + param_5 * param_2[1] + param_1[1];
    return;
  case 0x2a:
    iVar1 = *param_2;
    break;
  case 0x2b:
    *param_1 = *param_1 + param_4 + param_5 * *param_2;
    param_1[1] = param_1[1] + param_4 + param_5 * param_2[1];
    iVar1 = param_4 + param_5 * param_2[1];
    goto LAB_ram_4003a456;
  }
  iVar1 = param_4 + param_5 * iVar1;
LAB_ram_4003a430:
  *param_1 = iVar1 + *param_1;
  return;
}


/* NanoCore 1.11, address 0x4003a4ca.
 * REA evidence: ev_e290cb74a0bcc9d6b5cd4cb31148f032dc1ef1cfe49edc23b48d817c1b29e676
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a4ca(int param_1,int param_2,undefined4 param_3)

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
  FUN_ram_4003a402(&uStack_38,&uStack_48,*(undefined4 *)(param_1 + 0x38),
                   *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  FUN_ram_4003a402(&uStack_2c,&uStack_40,*(undefined4 *)(param_2 + 0x38),
                   *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
  FUN_ram_4003a224(0x18b00000,uVar4,uVar5,uStack_48,uStack_44,&uStack_38);
  FUN_ram_4003a2c8(0x18b00000,uVar1,uVar3,uStack_40,uStack_3c,&uStack_2c);
  iVar2 = FUN_ram_4003a350(param_3);
  if (iVar2 != 0) {
    FUN_ram_4003a276(0x18b00000,uVar1,uVar3,uStack_40,uStack_3c,&uStack_2c);
  }
  return;
}


/* NanoCore 1.11, address 0x4003a580.
 * REA evidence: ev_3dac2ca90c2ef2b7e5cd24716523eab1a95b2bc563fdf027a9e108ee8c25d52a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003a580(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_14 [8];
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_ram_4003a32e(0x18b00000);
  FUN_ram_4003a344(0x18b00000);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = FUN_ram_40004352(2000);
  iVar3 = FUN_ram_40004c76(uVar1,2,6,uVar2,auStack_14);
  uVar1 = 0xffffff8c;
  if ((iVar3 != -2) && (uVar1 = 0xffffffea, iVar3 != -1)) {
    uVar1 = 0;
  }
  FUN_ram_4003a324(0x18b00000,*(undefined4 *)(param_1 + 0xc));
  if (*(uint *)(param_1 + 0xc) == 0) {
    FUN_ram_4003a33a(0x18b00000);
  }
  else {
    uVar1 = 0;
    if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
      return 0;
    }
  }
  FUN_ram_4003888a(0x16);
  FUN_ram_400388ca(0x16);
  return uVar1;
}


/* NanoCore 1.11, address 0x4003a600.
 * REA evidence: ev_d41e34efa279bd36c9b7c959bac9f0b9ef07cd8d67946f2a043931b02c2be3e1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4003a600(int param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
                int *param_7)

{
  int iVar1;
  
  if (param_2 < 0x14) {
    if (param_3 < 0x14) {
      if (param_4 == 0) goto LAB_ram_4003a60c;
      if (param_4 != 1) {
        return 0;
      }
      if (param_5 != 0) {
        if (param_5 != 1) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 1;
        goto LAB_ram_4003a656;
      }
    }
    else {
      if (param_4 == 0) goto LAB_ram_4003a60e;
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
LAB_ram_4003a60c:
      if (param_5 != 0) {
        if (param_5 != 1) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
LAB_ram_4003a656:
        *(int *)(param_1 + 0x18) = param_5;
        *(int *)(param_1 + 0x1c) = param_5;
        return 0;
      }
    }
LAB_ram_4003a60e:
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


/* NanoCore 1.11, address 0x4003a6bc.
 * REA evidence: ev_ae3d79fbb1eac207db5af5a4f68b8289a29470928cc61f363d17214e318b5731
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003a6bc(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                     uint param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  if (*param_2 == 0) goto LAB_ram_4003a6f0;
  switch(param_2[1]) {
  default:
    uVar1 = 2;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x20) = 0;
    goto LAB_ram_4003a6ec;
  case 2:
    uVar1 = 1;
    goto LAB_ram_4003a702;
  case 3:
    uVar1 = 1;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x20) = 5;
    goto LAB_ram_4003a716;
  case 5:
    uVar1 = 4;
    goto LAB_ram_4003a702;
  case 6:
    *(undefined4 *)(param_1 + 0x20) = 0;
    goto LAB_ram_4003a722;
  case 7:
    uVar1 = 5;
LAB_ram_4003a702:
    *(undefined4 *)(param_1 + 0x20) = uVar1;
LAB_ram_4003a6ec:
    *(undefined4 *)(param_1 + 0x24) = 0;
    goto LAB_ram_4003a6f0;
  case 8:
    *(undefined4 *)(param_1 + 0x20) = 0;
    goto LAB_ram_4003a732;
  case 9:
    uVar1 = 4;
    break;
  case 10:
    *(undefined4 *)(param_1 + 0x20) = 5;
LAB_ram_4003a722:
    uVar1 = 2;
    goto LAB_ram_4003a724;
  case 0xb:
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x20) = 1;
    goto LAB_ram_4003a724;
  case 0xc:
    uVar1 = 5;
    break;
  case 0xd:
    *(undefined4 *)(param_1 + 0x20) = 0;
LAB_ram_4003a716:
    uVar1 = 1;
    goto LAB_ram_4003a724;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar1;
LAB_ram_4003a732:
  uVar1 = 3;
LAB_ram_4003a724:
  *(undefined4 *)(param_1 + 0x24) = uVar1;
LAB_ram_4003a6f0:
  FUN_ram_4003a600(param_1,param_3,param_4,(param_5 & 0x1ff) >> 8,(param_6 & 0x1ff) >> 8,param_7,
                   param_2);
  return;
}


/* NanoCore 1.11, address 0x4003a758.
 * REA evidence: ev_2db1de537da3c156204f81447c432c14f3d126907a0f6187063e29b3a03be462
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003a758(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  
  FUN_ram_400049c6(*(undefined4 *)(_DAT_ram_3007fa70 + 4),0xffffffff);
  uVar1 = 0xffffffff;
  switch(param_2) {
  case 0x4700:
    local_134[0xd] = FUN_ram_40039e4c(0x18b00000);
    puVar4 = local_134 + 0xd;
    goto LAB_ram_4003a7d2;
  case 0x4701:
    puVar4 = (uint *)(_DAT_ram_3007fa70 + 0x40);
LAB_ram_4003a7d2:
    FUN_ram_4000304c(param_3,puVar4,4);
    uVar1 = 0;
    goto switchD_ram_4003a7c2_default;
  case 0x4702:
    FUN_ram_4000304c(local_134 + 0xd,param_3,0x74);
    iVar2 = _DAT_ram_3007fa70;
    if ((((iStack_f4 != 0) || (*(char *)(_DAT_ram_3007fa70 + 0x35) != '\0')) &&
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
        FUN_ram_4003a6bc(_DAT_ram_3007fa70,auStack_b4,0,uStack_bc,0,uStack_b8,1);
        FUN_ram_4003a360(iVar2,auStack_b4,0,uStack_bc);
        if (*(int *)(iVar2 + 0x2c) != 0) {
          FUN_ram_4003a182(0x18b00000,uStack_b8 & 3,1);
        }
        if (*(int *)(iVar2 + 0x30) != 0) {
          FUN_ram_4003a1e4(0x18b00000,uStack_b8 & 3);
        }
        FUN_ram_40039edc(0x18b00000,uStack_a8,uStack_ac,*(undefined4 *)(iVar2 + 0x10),0,0,
                         local_134[0xd] + 1);
        FUN_ram_40039f24(0x18b00000,*(undefined4 *)(iVar2 + 0x1c),uStack_bc,iStack_94,
                         *(undefined4 *)(iVar2 + 0x30));
        iVar3 = FUN_ram_4003a350(auStack_b4);
        if (iVar3 == 0) {
          FUN_ram_4003a0a0(0x18b00000,*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),0,
                           *(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),iStack_9c,
                           auStack_b4[0]);
          FUN_ram_40039f7c(0x18b00000);
        }
        else {
          FUN_ram_40039f4e(0x18b00000,uStack_a0,uStack_a4,uStack_bc,*(undefined4 *)(iVar2 + 0x2c));
          FUN_ram_4003a0a0(0x18b00000,*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),0,
                           *(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),iStack_9c,
                           auStack_b4[0]);
        }
        if (iStack_9c != 0) {
          FUN_ram_4003a088(0x18b00000,iStack_98);
        }
        FUN_ram_4003a176(0x18b00000,0);
        uVar9 = uStack_c0;
        uVar8 = uStack_c4;
        local_134[10] = uStack_f0;
        local_134[0xb] = uStack_ec;
        local_134[0xc] = uStack_e8;
        local_134[8] = uStack_e4;
        local_134[9] = uStack_e0;
        FUN_ram_4003a402(local_134 + 10,local_134 + 8,uStack_bc,uStack_cc,uStack_c8);
        FUN_ram_4003a2c8(0x18b00000,uVar8,uVar9,local_134[8],local_134[9],local_134 + 10);
        FUN_ram_4003a224(0x18b00000,uVar8,uVar9,local_134[8],local_134[9],local_134 + 10);
        iVar3 = FUN_ram_4003a350(auStack_b4);
        if (iVar3 != 0) {
          FUN_ram_4003a276(0x18b00000,uVar8,uVar9,local_134[8],local_134[9],local_134 + 10);
        }
        if (local_134[0xd] == 1) {
          uVar1 = 0;
        }
        else {
          if (local_134[0xd] != 2) {
            if (local_134[0xd] == 0) {
              FUN_ram_4003a02e(0x18b00000,uStack_fc);
            }
            goto LAB_ram_4003aa24;
          }
          uVar1 = 1;
        }
        FUN_ram_40039f8a(0x18b00000,uStack_c4,uStack_c0,uStack_fc,uStack_f8,uVar1);
LAB_ram_4003aa24:
        uVar1 = FUN_ram_4003a580(iVar2);
        goto switchD_ram_4003a7c2_default;
      }
    }
    break;
  case 0x4703:
    FUN_ram_4000304c(local_134 + 0xd,param_3,0xa8);
    iVar2 = _DAT_ram_3007fa70;
    if ((((local_134[0xd] != 0) || (*(char *)(_DAT_ram_3007fa70 + 0x35) != '\0')) &&
        ((uStack_c0 != 0 || (*(char *)(_DAT_ram_3007fa70 + 0x35) != '\0')))) &&
       (((uStack_c8 < 0x14 || (uStack_c8 == 0x2a)) && (uStack_88 < 0x14)))) {
      if ((uStack_5c & 0x3ffff) >> 0x10 == 0) {
        if ((iStack_60 != 0) && (*(int *)(_DAT_ram_3007fa70 + 0x38) == 0)) {
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
          FUN_ram_4003a6bc(_DAT_ram_3007fa70,&iStack_80,uStack_c8,uStack_88,uStack_c4,uStack_84,0);
          FUN_ram_4003a360(iVar2,&iStack_80,uStack_c8,uStack_88);
          if (*(int *)(iVar2 + 0x28) != 0) {
            FUN_ram_4003a182(0x18b00000,uStack_c4 & 3,0);
          }
          if (*(int *)(iVar2 + 0x2c) != 0) {
            FUN_ram_4003a182(0x18b00000,uStack_84 & 3,1);
          }
          if (*(int *)(iVar2 + 0x30) != 0) {
            FUN_ram_4003a1e4(0x18b00000,uStack_84 & 3);
          }
          FUN_ram_40039e56(0x18b00000,uStack_74,uStack_78,*(undefined4 *)(iVar2 + 0x10),
                           (uStack_5c & 0x3ffff) >> 0x10,0,uStack_c8,(uStack_5c & 0x3ff) >> 9,
                           (uStack_5c & 0x1ff) >> 8,uStack_5c & 3,0,*(undefined4 *)(iVar2 + 0x28));
          FUN_ram_40039f24(0x18b00000,*(undefined4 *)(iVar2 + 0x1c),uStack_88,iStack_60,
                           *(undefined4 *)(iVar2 + 0x30));
          iVar3 = FUN_ram_4003a350(&iStack_80);
          if (iVar3 == 0) {
            FUN_ram_4003a0a0(0x18b00000,*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),
                             0,*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),iStack_68
                             ,iStack_80);
            FUN_ram_40039f7c(0x18b00000);
          }
          else {
            FUN_ram_40039f4e(0x18b00000,uStack_6c,uStack_70,uStack_88,*(undefined4 *)(iVar2 + 0x2c))
            ;
            FUN_ram_4003a0a0(0x18b00000,*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),
                             0,*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),iStack_68
                             ,iStack_80);
          }
          if (iStack_68 != 0) {
            FUN_ram_4003a088(0x18b00000,uStack_64);
          }
          if (iStack_60 != 0) {
            FUN_ram_4003a094(0x18b00000,*(undefined4 *)(_DAT_ram_3007fa70 + 0x3c));
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
LAB_ram_4003aef2:
              iVar3 = 2;
              goto LAB_ram_4003ae10;
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
                if ((3 < (int)uStack_d0) && (3 < (int)uStack_cc)) goto LAB_ram_4003ae0e;
                goto LAB_ram_4003ad0c;
              }
              goto LAB_ram_4003ae6c;
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
              goto LAB_ram_4003aef2;
            }
          }
          else {
            if (uStack_c8 != 0x2a) {
              if (uStack_c8 != 0x2b) goto LAB_ram_4003ad0c;
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
              goto LAB_ram_4003aef2;
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
LAB_ram_4003ae0e:
            iVar3 = 1;
LAB_ram_4003ae10:
            if ((0x13 < uStack_88) || ((3 < (int)uVar9 && (3 < (int)uVar8)))) {
              iVar10 = 0;
              do {
                iVar11 = iVar10 + 1;
                FUN_ram_4003a0f6(0x18b00000,local_134[iVar10],local_134[iVar10 + 2],uVar8,uVar9,
                                 local_134[iVar10 + 4],local_134[iVar10 + 6],local_134[iVar10 + 8],
                                 local_134[iVar10 + 10],iVar10);
                iVar10 = iVar11;
              } while (iVar11 != iVar3);
              uVar1 = 1;
LAB_ram_4003ae6c:
              FUN_ram_4003a176(0x18b00000,uVar1);
            }
          }
LAB_ram_4003ad0c:
          piVar5 = &iStack_80;
LAB_ram_4003ad0e:
          FUN_ram_4003a4ca(local_134 + 0xd,&uStack_c0,piVar5);
          goto LAB_ram_4003aa24;
        }
      }
    }
    break;
  case 0x4704:
    FUN_ram_4000304c(local_134 + 0xd,param_3,0xc0);
    iVar2 = _DAT_ram_3007fa70;
    if (((((local_134[0xd] != 0) || (*(char *)(_DAT_ram_3007fa70 + 0x35) != '\0')) &&
         ((uStack_c0 != 0 || (*(char *)(_DAT_ram_3007fa70 + 0x35) != '\0')))) &&
        (((uStack_c8 < 0x14 && (uStack_88 < 0x14)) && ((uStack_42 & 3) == 0)))) &&
       ((iStack_dc == 0 ||
        (((-1 < (int)uStack_d8 && (-1 < (int)uStack_d4)) &&
         (((int)uStack_d8 < (int)uStack_e4 && ((int)uStack_d4 < (int)uStack_e0)))))))) {
      if (iStack_9c == 0) {
        if (iStack_dc == 0) {
LAB_ram_4003aff4:
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_d0 = uStack_e4;
          uStack_cc = uStack_e0;
          if (iStack_9c != 0) goto LAB_ram_4003b00e;
        }
        iStack_98 = 0;
        iStack_94 = 0;
        uStack_90 = uStack_a4;
        uStack_8c = uStack_a0;
      }
      else {
        if (((iStack_98 < 0) || (iStack_94 < 0)) ||
           (((int)uStack_a4 <= iStack_98 || ((int)uStack_a0 <= iStack_94)))) break;
        if (iStack_dc == 0) goto LAB_ram_4003aff4;
      }
LAB_ram_4003b00e:
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
          FUN_ram_4003a6bc(_DAT_ram_3007fa70,&iStack_68,uStack_c8,uStack_88,uStack_c4,uStack_84,0);
          *(undefined4 *)(iVar2 + 0x28) = 0;
          *(undefined4 *)(iVar2 + 0x2c) = 0;
          *(undefined4 *)(iVar2 + 0x30) = 0;
          FUN_ram_40039edc(0x18b00000,uStack_5c,iStack_60,*(undefined4 *)(iVar2 + 0x10),1,uStack_c8,
                           0);
          FUN_ram_40039f24(0x18b00000,*(undefined4 *)(iVar2 + 0x1c),uStack_88,0,
                           *(undefined4 *)(iVar2 + 0x30));
          iVar3 = FUN_ram_4003a350(&iStack_68);
          if (iVar3 == 0) {
            FUN_ram_4003a0a0(0x18b00000,*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),
                             0,*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),iStack_50
                             ,iStack_68);
            FUN_ram_40039f7c(0x18b00000);
          }
          else {
            FUN_ram_40039f4e(0x18b00000,uStack_54,uStack_58,uStack_88,*(undefined4 *)(iVar2 + 0x2c))
            ;
            FUN_ram_4003a0a0(0x18b00000,*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),
                             0,*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),iStack_50
                             ,iStack_68);
          }
          if (iStack_50 != 0) {
            iStack_50 = 0;
          }
          FUN_ram_4003a176(0x18b00000,0);
          FUN_ram_4003a038(0x18b00000,uStack_70,uStack_6c,iStack_80,uStack_7c,uStack_78,uStack_74);
          piVar5 = &iStack_68;
          goto LAB_ram_4003ad0e;
        }
      }
    }
    break;
  default:
    goto switchD_ram_4003a7c2_default;
  }
  uVar1 = 0xffffffff;
switchD_ram_4003a7c2_default:
  FUN_ram_40004ab8(*(undefined4 *)(_DAT_ram_3007fa70 + 4));
  return uVar1;
}


