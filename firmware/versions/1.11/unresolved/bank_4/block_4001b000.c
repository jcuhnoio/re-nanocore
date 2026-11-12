/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4001b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4001b0cc.
 * REA evidence: ev_1d22aadc4068d3e389038fa24fc17f402dc786743a615f9d06843bf89ae91390
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001b0cc(float param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_24 [28];
  
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_40094604 < param_1) {
    param_1 = DAT_ram_40094604;
  }
  iVar1 = (int)(param_1 * DAT_ram_40094e80 + DAT_ram_40094634);
  if (iVar1 < 0x3e9) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 1000;
  }
  iVar2 = FUN_ram_4001af80(param_2,param_3,auStack_24);
  if (iVar2 != 0) {
    uVar3 = FUN_ram_4001a65c(auStack_24,iVar1);
    iVar1 = FUN_ram_4001a71e(auStack_24,uVar3);
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4001b144.
 * REA evidence: ev_8e9469d0817eb1d1294084b8dd113ac00c4b961bba7de6dcab8d4f3ace2c5839
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001b144(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3006b200;
  if ((7 < param_1) || (param_2 == 0xc)) {
    return;
  }
  (&DAT_ram_3006b1a0)[param_2 + param_1 * 0xc] = 1;
  if (iVar1 != 0) {
    FUN_ram_4004c81a(iVar1,0x78);
    FUN_ram_4004c83c(_DAT_ram_3006b200,1);
    FUN_ram_4004c840(_DAT_ram_3006b200);
    return;
  }
  _DAT_ram_3006b200 = FUN_ram_4004c5b4(FUN_ram_4001a910,0x78,0);
  if (_DAT_ram_3006b200 != 0) {
    FUN_ram_4004c83c(_DAT_ram_3006b200,1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4001b1bc.
 * REA evidence: ev_fdce508facd257930dd69bf39a02dad8d493db4417ef103e9c5c0771a2494ef1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4001b1bc(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 < 0) {
    return 0;
  }
  uVar1 = param_1 + (uint)DAT_ram_3006ad4c * 5 & 0xffff;
  iVar2 = FUN_ram_400251c6(_DAT_ram_3006aa7c);
  if (0xb < uVar1) {
    uVar1 = 0xb;
  }
  if (iVar2 != 0xff) {
    uVar3 = FUN_ram_4001a8e6(_DAT_ram_3006aa7c);
    uVar1 = FUN_ram_400267aa(iVar2,uVar3,uVar1 & 0xff,1);
    return uVar1;
  }
  return uVar1 & 0xff;
}


/* NanoCore 1.11, address 0x4001b238.
 * REA evidence: ev_2ea3f327cc5efac65d3dbc75f92f47ed2136bf52b9ca7be5654782983764ed9f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001b29e) */

void FUN_ram_4001b238(uint param_1,uint param_2)

{
  int iVar1;
  
  if (((param_1 < 8) && (param_2 < 5)) && ((param_2 & 0xff) < (uint)DAT_ram_3006adb4)) {
    iVar1 = FUN_ram_4001b1bc(param_2);
    if (*(int *)(&DAT_ram_3006acb8 + param_2 * 4) == 0) {
      return;
    }
    FUN_ram_40057158(*(int *)(&DAT_ram_3006acb8 + param_2 * 4),
                     ((uint)*(ushort *)((iVar1 + param_1 * 0xc) * 2 + 0x3006ae54) * 0xa8c) / 1000);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4001b2b2.
 * REA evidence: ev_bc5229308274bd2a55e8975174b493f691abbaf3ca5828e634c5c57423d05103
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001b2b2(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = _DAT_ram_3006aa7c;
  if (_DAT_ram_3006aa7c == (undefined *)0x0) {
    puVar2 = &DAT_ram_40095bb8;
  }
  iVar3 = FUN_ram_4001a8d0(puVar2);
  iVar1 = 0;
  if (-1 < iVar3) {
    for (; iVar1 < (int)(uint)DAT_ram_3006adb4; iVar1 = iVar1 + 1) {
      FUN_ram_4001b238(iVar3,iVar1);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4001b2fe.
 * REA evidence: ev_151a13c6fef03b79909d0f93b0da8035f742a39b9a5579ad585e3e66d87d56f6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001b2fe(uint param_1)

{
  uint uVar1;
  
  if (7 < param_1) {
    return;
  }
  if ((_DAT_ram_3006b19c != 0) && ((int)param_1 < _DAT_ram_3006b198)) {
    FUN_ram_4001ab08(*(undefined4 *)(_DAT_ram_3006b19c + param_1 * 4),
                     *(undefined1 *)(param_1 + 0x3006ae4c));
  }
  uVar1 = FUN_ram_4001a8d0(_DAT_ram_3006aa7c);
  if (param_1 == uVar1) {
    FUN_ram_4001ab08(_DAT_ram_3006aac8,*(undefined1 *)(param_1 + 0x3006ae4c));
    FUN_ram_4001ab1e();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4001b372.
 * REA evidence: ev_e783f6ccac0831989eed4bc8396f850eff431ebec89e32852ba01626c38d6205
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001b372(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_ram_3006b198;
  if (8 < _DAT_ram_3006b198) {
    iVar2 = 8;
  }
  for (iVar1 = 0; iVar1 < iVar2; iVar1 = iVar1 + 1) {
    FUN_ram_4001b2fe(iVar1);
  }
  return;
}


/* NanoCore 1.11, address 0x4001b3a4.
 * REA evidence: ev_acf2f116eda8a939bda62864581d4210dbd99df8165f559ae7fac21e0bffbd39
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001b3a4(uint param_1,undefined1 param_2)

{
  if (param_1 < 8) {
    *(undefined1 *)(param_1 + 0x3006ae4c) = param_2;
    FUN_ram_40022e1a();
    FUN_ram_4001b2fe(param_1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4001b3d0.
 * REA evidence: ev_4482ef251614b03e4a5a1906da636e7524d903430e0bd38dacbe6fc098282ece
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001b46c) */
/* WARNING: Removing unreachable block (ram,0x4001b4ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001b3d0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_4c [4];
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  iVar6 = *(int *)(param_1 * 4 + 0x3006aacc);
  iVar10 = *(int *)(param_1 * 4 + 0x3006aae0);
  iVar11 = iVar6 + 0x14;
  iVar3 = DAT_ram_30049dec;
  if (DAT_ram_30049dec < 1) {
    iVar3 = 0x28;
  }
  if (*(int *)(&DAT_ram_3006acb8 + param_1 * 4) != 0) {
    FUN_ram_40044f1c(*(int *)(&DAT_ram_3006acb8 + param_1 * 4),iVar6,iVar10);
    FUN_ram_40044faa(*(undefined4 *)(&DAT_ram_3006acb8 + param_1 * 4),0x28,0x28);
    if (iVar3 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = 0x2800 / iVar3;
    }
    FUN_ram_40057132(*(undefined4 *)(&DAT_ram_3006acb8 + param_1 * 4),iVar3);
  }
  if (*(int *)(&DAT_ram_3006ab94 + param_1 * 4) != 0) {
    iVar3 = FUN_ram_40045064();
    iVar6 = FUN_ram_40045070(*(undefined4 *)(&DAT_ram_3006ab94 + param_1 * 4));
    FUN_ram_40044f1c(*(undefined4 *)(&DAT_ram_3006ab94 + param_1 * 4),iVar11 - iVar3 / 2,
                     (iVar10 - iVar6) + -2);
    FUN_ram_40017732(*(undefined4 *)(&DAT_ram_3006ab94 + param_1 * 4),param_1 * 0x20 + 0x3006aaf4);
  }
  if (*(int *)(&DAT_ram_3006aca4 + param_1 * 4) != 0) {
    iVar3 = FUN_ram_40045064();
    FUN_ram_40044f1c(*(undefined4 *)(&DAT_ram_3006aca4 + param_1 * 4),iVar11 - iVar3 / 2,
                     iVar10 + 0x2c);
    FUN_ram_40017732(*(undefined4 *)(&DAT_ram_3006aca4 + param_1 * 4),param_1 * 0x20 + 0x3006ac04);
  }
  if (((param_1 < 5) && (_DAT_ram_3006aa70 != 0)) &&
     (iVar3 = *(int *)(&DAT_ram_3006aba8 + param_1 * 4), iVar3 != 0)) {
    bVar1 = false;
    local_4c[0] = *(int *)(&DAT_ram_3006acb8 + param_1 * 4);
    iVar12 = 0;
    local_4c[1] = *(undefined4 *)(&DAT_ram_3006ab94 + param_1 * 4);
    local_4c[2] = *(undefined4 *)(&DAT_ram_3006aca4 + param_1 * 4);
    iVar6 = 0;
    iVar10 = 0;
    iVar11 = 0;
    iVar9 = 0;
    do {
      iVar13 = local_4c[iVar12];
      iVar2 = iVar6;
      iVar4 = iVar10;
      iVar7 = iVar11;
      iVar8 = iVar9;
      if ((iVar13 != 0) && (iVar5 = FUN_ram_40043b92(iVar13,1), iVar5 == 0)) {
        FUN_ram_40045052(iVar13,local_4c + 3);
        iVar2 = iStack_38;
        iVar4 = iStack_34;
        iVar7 = local_4c[3];
        iVar8 = iStack_3c;
        if (bVar1) {
          if (local_4c[3] < iVar11) {
            iVar11 = local_4c[3];
          }
          if (iStack_3c < iVar9) {
            iVar9 = iStack_3c;
          }
          if (iVar6 < iStack_38) {
            iVar6 = iStack_38;
          }
          iVar2 = iVar6;
          iVar4 = iVar10;
          iVar7 = iVar11;
          iVar8 = iVar9;
          if (iVar10 < iStack_34) {
            iVar4 = iStack_34;
          }
        }
        bVar1 = true;
      }
      iVar12 = iVar12 + 1;
      iVar6 = iVar2;
      iVar10 = iVar4;
      iVar11 = iVar7;
      iVar9 = iVar8;
    } while (iVar12 != 3);
    if (!bVar1) {
      FUN_ram_40043fd6(iVar3,1);
      return;
    }
    FUN_ram_40045052(_DAT_ram_3006aa70,local_4c + 3);
    FUN_ram_40044f1c(iVar3,iVar7 - local_4c[3],iVar8 - iStack_3c);
    FUN_ram_40044faa(iVar3,(iVar2 - iVar7) + 1,(iVar4 - iVar8) + 1);
    FUN_ram_40043aac(iVar3,1);
  }
  return;
}


/* NanoCore 1.11, address 0x4001b5f0.
 * REA evidence: ev_6501de1a386c1c0b0a9f302ca006f496963bc7d0c410aad3c825be15eb3195b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001b5f0(float param_1,undefined4 param_2)

{
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_40094604 < param_1) {
    param_1 = DAT_ram_40094604;
  }
  FUN_ram_400055da(param_2,0x18,&DAT_ram_4009516c,
                   (int)(param_1 * DAT_ram_40094658 + DAT_ram_40094634));
  return;
}


/* NanoCore 1.11, address 0x4001b638.
 * REA evidence: ev_4d30f9341ac600dcec016bb663cd66780c57347a6daf95d5773e661a852764c8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001b638(undefined4 param_1,undefined4 param_2,char *param_3)

{
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    FUN_ram_400055da(param_1,0x18,&DAT_ram_40095170,param_2,param_3);
    return;
  }
  FUN_ram_400055da(param_1,0x18,&DAT_ram_400955b4,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x4001b664.
 * REA evidence: ev_6f1c5d74d4ea32572faaa6e61d6272d790d38415487c8aac79fb5ca92cb33595
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001b664(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_20 [20];
  
  FUN_ram_400055da(auStack_20,0x10,&DAT_ram_40095178,param_2);
  FUN_ram_4001b638(param_1,auStack_20,param_3);
  return;
}


/* NanoCore 1.11, address 0x4001b696.
 * REA evidence: ev_d2591367e1a5bfaff06df4b53ecc161b8fbac8a7872545124e1ffb055cd6832d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001b6c0) */
/* WARNING: Removing unreachable block (ram,0x4001b6ce) */

void FUN_ram_4001b696(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined1 auStack_24 [24];
  
  pcVar2 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
  if ((int)param_2 < 0) {
    pcVar2 = s_PRE___ram_40096fa4 + 4;
  }
  iVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  FUN_ram_400055da(auStack_24,0x14,s__s_ld__ld_ram_4009517c,pcVar2,iVar1 / 10,iVar1 % 10);
  FUN_ram_4001b638(param_1,auStack_24,param_3);
  return;
}


/* NanoCore 1.11, address 0x4001b6ec.
 * REA evidence: ev_d78e4e42b27933e718669c7a41bcb86447b72d5eb5ed2520210236c3e2cd4dc3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001b718) */
/* WARNING: Removing unreachable block (ram,0x4001b726) */

void FUN_ram_4001b6ec(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined1 auStack_24 [24];
  
  pcVar2 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
  if ((int)param_2 < 0) {
    pcVar2 = s_PRE___ram_40096fa4 + 4;
  }
  iVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  FUN_ram_400055da(auStack_24,0x14,s__s_ld__02ld_ram_40095188,pcVar2,iVar1 / 100,iVar1 % 100);
  FUN_ram_4001b638(param_1,auStack_24,param_3);
  return;
}


/* NanoCore 1.11, address 0x4001b744.
 * REA evidence: ev_e5ad069fdb702ba6f8032d828079f9c29c4123c49b48017eea564e2a72afe8f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4001b836) */
/* WARNING: Removing unreachable block (ram,0x4001b816) */
/* WARNING: Removing unreachable block (ram,0x4001b824) */
/* WARNING: Removing unreachable block (ram,0x4001b79a) */
/* WARNING: Removing unreachable block (ram,0x4001b844) */
/* WARNING: Removing unreachable block (ram,0x4001b7a8) */

void FUN_ram_4001b744(float param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined1 auStack_30 [24];
  
  uVar1 = FUN_ram_4001a5fc();
  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  pcVar6 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
  if ((int)uVar1 < 0) {
    pcVar6 = s_PRE___ram_40096fa4 + 4;
  }
  if (param_1 < DAT_ram_40094e80) {
    if (DAT_ram_40094658 <= param_1) {
      iVar7 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
      puVar4 = &DAT_ram_400951a8;
      goto LAB_ram_4001b7d8;
    }
    if (param_1 < DAT_ram_40094e90) {
      iVar7 = FUN_ram_4001a5fc(param_1 * DAT_ram_40094658);
      iVar2 = iVar7 % 100;
      pcVar5 = s__s_ld__02ld_ram_40095188;
      iVar7 = iVar7 / 100;
    }
    else {
      iVar7 = FUN_ram_4001a5fc(param_1 * DAT_ram_40094e90);
      iVar2 = iVar7 % 10;
      pcVar5 = s__s_ld__ld_ram_4009517c;
      iVar7 = iVar7 / 10;
    }
  }
  else {
    iVar2 = FUN_ram_4001a5fc(param_1 / DAT_ram_40094658);
    iVar7 = iVar2 / 10;
    puVar4 = &DAT_ram_40095194;
    iVar2 = iVar2 % 10;
    if (iVar2 == 0) {
LAB_ram_4001b7d8:
      FUN_ram_400055da(auStack_30,0x10,puVar4,pcVar6,iVar7);
      goto LAB_ram_4001b7e0;
    }
    pcVar5 = s__s_ld__ldk_ram_4009519c;
  }
  FUN_ram_400055da(auStack_30,0x10,pcVar5,pcVar6,iVar7,iVar2);
LAB_ram_4001b7e0:
  uVar3 = FUN_ram_4002c834(0x6d);
  FUN_ram_4001b638(param_2,auStack_30,uVar3);
  return;
}


/* NanoCore 1.11, address 0x4001b88a.
 * REA evidence: ev_b9442604a1ac682203c16d71977d1b9f90ff2f19abce9f1abee44854f98422e3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4001b88a(uint param_1)

{
  int iVar1;
  
  if (DAT_ram_3006a79c == '\0') {
    FUN_ram_4001b904(param_1,0,FUN_ram_4001b904);
    if ((0x1d < param_1) || (*(char *)(param_1 + 0x3006aa04) == '\0')) {
      return param_1;
    }
  }
  else if ((0x1d < param_1) || (*(char *)(param_1 + 0x3006aa04) == '\0')) {
    return param_1;
  }
  if (param_1 < 0x1e) {
    if (DAT_ram_3006a79c == '\0') {
      FUN_ram_4001b904();
    }
    iVar1 = FUN_ram_4000cb12(param_1 & 0xff);
    if (iVar1 == 0) {
      DAT_ram_30049dbc = param_1;
      DAT_ram_30049dc0 = param_1;
      if ((_DAT_ram_3006aa7c != 0) &&
         (iVar1 = FUN_ram_400051f8(_DAT_ram_3006aa7c,&DAT_ram_40095bb8,0x10), iVar1 == 0)) {
        FUN_ram_4001bd9a(_DAT_ram_3006aa7c);
        return 0;
      }
      return 0;
    }
    FUN_ram_4001b904();
    DAT_ram_30049dbc = DAT_ram_30049db8;
    if ((_DAT_ram_3006aa7c != 0) &&
       (iVar1 = FUN_ram_400051f8(_DAT_ram_3006aa7c,&DAT_ram_40095bb8,0x10), iVar1 == 0)) {
      FUN_ram_4001bd9a(_DAT_ram_3006aa7c);
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4001b8d2.
 * REA evidence: ev_e58cf5041824b8e7d18b2ffac4049f0947e643ba129a7879021264b213c0f134
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001b8d2(undefined4 param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uStack_10;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = FUN_ram_400251c6();
  if (iVar1 != 0xff) {
    FUN_ram_400231a4(CONCAT44(uStack_10,param_1),iVar1,param_3);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4001b904.
 * REA evidence: ev_fbf6208138a368fccc486c275bc2402546e34efc8ef1671ddcdb8fa13a7ffc6a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001b904(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [20];
  
  DAT_ram_3006a79c = 0;
  DAT_ram_30049db8 = 0xffffffff;
  DAT_ram_30049dbc = 0xffffffff;
  FUN_ram_4000504c(0x3006aa04,0,0x26);
  FUN_ram_4000504c(0x3006a7a0,0,0x260);
  iVar4 = 0x3006a7a0;
  uVar1 = 0;
  do {
    iVar2 = FUN_ram_40091830(uVar1 & 0xff,auStack_40);
    if ((iVar2 != 0) && (iVar2 = FUN_ram_4001ab62(auStack_40,0x3000), iVar2 != 0)) {
      *(undefined1 *)(uVar1 + 0x3006aa04) = 1;
      memcpy(iVar4,auStack_34,0x10);
      *(undefined1 *)(iVar4 + 0xf) = 0;
    }
    uVar1 = uVar1 + 1;
    iVar4 = iVar4 + 0x10;
  } while (uVar1 != 0x1e);
  uVar1 = FUN_ram_4000bb4a();
  if (((0x1d < uVar1) || (*(char *)(uVar1 + 0x3006aa04) == '\0')) &&
     (uVar1 = DAT_ram_30049db8, (int)DAT_ram_30049db8 < 0)) {
    uVar3 = 0;
    do {
      uVar1 = uVar3;
      if (*(char *)(uVar3 + 0x3006aa04) != '\0') break;
      uVar3 = uVar3 + 1;
      uVar1 = DAT_ram_30049db8;
    } while (uVar3 != 0x1e);
  }
  DAT_ram_30049db8 = uVar1;
  DAT_ram_30049dbc = DAT_ram_30049db8;
  DAT_ram_3006a79c = 1;
  _DAT_ram_3006aa00 = FUN_ram_40091822();
  return;
}


/* NanoCore 1.11, address 0x4001ba0e.
 * REA evidence: ev_9a8a25d61511b4c6becf845e2c79637e50484973dbfaf3305bb60150b85728d6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001ba0e(uint param_1)

{
  int iVar1;
  
  if (param_1 < 8) {
    if (param_1 == 4) {
      param_1 = 2;
    }
  }
  else {
    param_1 = 6;
  }
  iVar1 = 0;
  do {
    if ((byte)(&DAT_ram_400953b8)[iVar1] == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 7);
  return 0;
}


/* NanoCore 1.11, address 0x4001ba40.
 * REA evidence: ev_2193bcb287dd0f9b5f69e890a68db2cca2ba34e207ad44a5dd728f2b12b14837
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4001ba40(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_ram_3006aac8;
  if (param_1 == 0) goto LAB_ram_4001ba50;
  if (DAT_ram_3006adac == '\0') {
    if (param_1 == -1) {
LAB_ram_4001ba74:
      iVar2 = _DAT_ram_3006ad84;
      if ((_DAT_ram_3006ada8 != 0) &&
         (iVar1 = FUN_ram_40043b92(_DAT_ram_3006ada8,1), iVar2 = _DAT_ram_3006ad84, iVar1 == 0)) {
        iVar2 = _DAT_ram_3006ada8;
      }
      goto LAB_ram_4001ba50;
    }
    iVar1 = 1;
  }
  else {
    if (param_1 == 1) goto LAB_ram_4001ba74;
    iVar1 = 2;
  }
  iVar2 = _DAT_ram_3006aac4;
  if (param_1 != iVar1) {
    iVar2 = FUN_ram_4001a816();
    if ((uint)DAT_ram_3006adb4 <= (uint)(param_1 - iVar2)) {
      return 0;
    }
    iVar2 = *(int *)(&DAT_ram_3006acb8 + (param_1 - iVar2) * 4);
  }
LAB_ram_4001ba50:
  if ((iVar2 != 0) && (iVar1 = FUN_ram_40043b92(iVar2,1), iVar1 == 0)) {
    return iVar2;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4001bad8.
 * REA evidence: ev_058c02f64f901eb3e0dd5ff1e34ea3da455b326a48ab879d64837a858871cb0a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001bad8(void)

{
  int iVar1;
  undefined3 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (DAT_ram_3006aa2a == '\0') {
    return;
  }
  iVar3 = FUN_ram_4001a816();
  iVar1 = _DAT_ram_3006ad80;
  uVar5 = (uint)DAT_ram_3006adb4;
  iVar7 = 0;
  do {
    bVar6 = iVar7 < (int)uVar5 && iVar7 + iVar3 == iVar1;
    if ((bool)*(char *)(iVar7 + 0x3006abfc) != bVar6) {
      *(bool *)(iVar7 + 0x3006abfc) = bVar6;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 5);
  if (DAT_ram_3006ad7c == '\0') {
    iVar3 = FUN_ram_4001a7dc();
    if (iVar3 == 0) {
      FUN_ram_4001ba40(iVar1);
      FUN_ram_40017d52();
      uVar2 = FUN_ram_40016cb8(DAT_ram_3006aa74);
      FUN_ram_40017ede(uVar2);
    }
    else {
      FUN_ram_40017d52(0);
    }
  }
  iVar1 = _DAT_ram_3006ad84;
  uVar5 = 0;
  if (DAT_ram_3006aa74 != '\0') {
    uVar5 = (uint)(_DAT_ram_3006aa78 == 100);
  }
  if ((int)DAT_ram_30049dc4 != uVar5) {
    DAT_ram_30049dc4 = (char)uVar5;
    if (_DAT_ram_3006ad84 != 0) {
      if ((DAT_ram_3006aa74 == '\0') || (_DAT_ram_3006aa78 != 100)) {
        uVar2 = FUN_ram_40016c6c();
      }
      else {
        uVar2 = 0xff0000;
      }
      FUN_ram_400489b6(iVar1,uVar2,0);
    }
    iVar1 = 0;
    do {
      iVar3 = *(int *)(&DAT_ram_3006ab94 + iVar1 * 4);
      if (iVar3 != 0) {
        uVar4 = FUN_ram_40016c6c();
        uStack_2c = CONCAT22(CONCAT11(uStack_2c._3_1_,(char)((uint)uVar4 >> 0x10)),(short)uVar4);
        FUN_ram_400489b6(iVar3,uStack_2c,0);
        iVar3 = *(int *)(&DAT_ram_3006aca4 + iVar1 * 4);
        if (iVar3 != 0) {
          uVar4 = FUN_ram_40016c6c();
          uStack_30 = CONCAT22(CONCAT11(uStack_30._3_1_,(char)((uint)uVar4 >> 0x10)),(short)uVar4);
          FUN_ram_400489b6(iVar3,uStack_30,0);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 5);
  }
  return;
}


/* NanoCore 1.11, address 0x4001bc76.
 * REA evidence: ev_debb2f2a77bc1685413151e33a0ad7556388b3cd0fa703c200f0eed955caa37b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001bc76(char *param_1)

{
  char *pcVar1;
  undefined1 auStack_5c [88];
  
  pcVar1 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  FUN_ram_4002c970(auStack_5c,0x49,pcVar1,0x12);
  FUN_ram_400177a6(_DAT_ram_3006ad84,&DAT_ram_3006ad88,auStack_5c);
  FUN_ram_4001aeec();
  DAT_ram_30049dc4 = 0xff;
  FUN_ram_4001bad8();
  return;
}


/* NanoCore 1.11, address 0x4001bcc0.
 * REA evidence: ev_4e5e84a94a8eea2f776e82d6c92dc5cfbaa46e6d08aa35837e1321ff65b6d9e3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001bcc0(int param_1,int param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  undefined1 auStack_6c [88];
  
  pcVar1 = (char *)FUN_ram_4002c834(0x73);
  if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
    param_4 = (char *)FUN_ram_4002c834(0x5e);
  }
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    param_4 = param_3;
  }
  if (param_2 < 1) {
    param_2 = 1;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (param_2 <= param_1) {
    param_1 = param_2 + -1;
  }
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    pcVar1 = s__d__d__s_ram_400951b0;
  }
  FUN_ram_400055da(auStack_6c,0x49,pcVar1,param_1 + 1,param_2,param_4);
  FUN_ram_4001bc76(auStack_6c);
  return;
}


/* NanoCore 1.11, address 0x4001bd4e.
 * REA evidence: ev_dce291aa932bd1ca44a3a5863054dcfebb27115bff9f687f5cb20f42b9a5ea02
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001bd4e(uint param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  
  if (param_2 <= param_1) {
    if (param_5 == 0) {
      param_5 = FUN_ram_4002c834(0x5e);
    }
    FUN_ram_4001bc76(param_5);
    return;
  }
  uVar1 = FUN_ram_4002c834(0x5e);
  FUN_ram_4001bcc0(param_1,param_3,param_1 * 0x10 + param_4,uVar1);
  return;
}


/* NanoCore 1.11, address 0x4001bd9a.
 * REA evidence: ev_4f7d5e102a309f36003cf8bc01459a9a30466499119f26c219275efd8fe5b3ec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001bd9a(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (param_1 == 0) {
LAB_ram_4001bfa6:
    if (DAT_ram_3006a79c == '\0') {
      FUN_ram_4001b904();
    }
    uVar2 = DAT_ram_30049db8;
    if (((DAT_ram_3006aa74 != '\0') && (_DAT_ram_3006aa78 == 100)) && (-1 < (int)DAT_ram_30049dbc))
    {
      uVar2 = DAT_ram_30049dbc;
    }
    uVar5 = FUN_ram_4002c834(0x5f);
    uVar9 = 0x3006a7a0;
LAB_ram_4001bff6:
    uVar8 = 0x1e;
    uVar4 = 0x1e;
LAB_ram_4001be7a:
    FUN_ram_4001bd4e(uVar2,uVar4,uVar8,uVar9,uVar5);
    return;
  }
  iVar1 = FUN_ram_400051f8(param_1,&DAT_ram_40095018,0x10);
  if (iVar1 == 0) {
    uVar2 = FUN_ram_4001a8e6(param_1);
    if (uVar2 < 0xc) {
      if (uVar2 == 8) {
        pcVar3 = (char *)FUN_ram_4002c834(0x61);
        uVar4 = FUN_ram_4002c834(0x5e);
        uVar8 = 0xc;
        uVar2 = 8;
        goto LAB_ram_4001bde8;
      }
      if (uVar2 == 9) {
        pcVar3 = (char *)FUN_ram_4002c834(0x56);
        uVar4 = FUN_ram_4002c834(0x5e);
        uVar8 = 0xc;
        uVar2 = 9;
        goto LAB_ram_4001bde8;
      }
      if (uVar2 == 10) {
        pcVar3 = (char *)FUN_ram_4002c834(0x5b);
        uVar4 = FUN_ram_4002c834(0x5e);
        uVar8 = 0xc;
        uVar2 = 10;
        goto LAB_ram_4001bde8;
      }
      if (uVar2 == 0xb) {
        uVar4 = FUN_ram_4002c834(0x5e);
        pcVar3 = s_MOTION_WAH_ram_400951bc;
        uVar8 = 0xc;
        uVar2 = 0xb;
        goto LAB_ram_4001bde8;
      }
    }
    else {
      uVar2 = 0;
    }
    if (DAT_ram_3006adbc == '\0') {
      FUN_ram_4001abb8();
    }
    uVar5 = FUN_ram_4002c834(0x5f);
    uVar9 = 0x3006adc0;
    uVar8 = 0xc;
    uVar4 = 8;
    goto LAB_ram_4001be7a;
  }
  iVar1 = FUN_ram_400051f8(param_1,&DAT_ram_40095014,0x10);
  if (iVar1 == 0) {
    uVar2 = FUN_ram_4001a8e6(param_1);
    if (uVar2 < 4) {
      if (uVar2 == 2) {
        uVar8 = 0x78;
      }
      else if (uVar2 == 3) {
        uVar8 = 0x45;
      }
      else {
        if (uVar2 != 1) goto LAB_ram_4001beac;
        uVar8 = 0x21;
      }
      pcVar3 = (char *)FUN_ram_4002c834(uVar8);
    }
    else {
LAB_ram_4001beac:
      pcVar3 = (char *)FUN_ram_4002c834(0x20);
      uVar2 = 0;
    }
    uVar4 = FUN_ram_4002c834(0x5e);
    uVar8 = 4;
    goto LAB_ram_4001bde8;
  }
  iVar1 = FUN_ram_400051f8(param_1,&DAT_ram_40095028,0x10);
  if (iVar1 != 0) {
    iVar1 = FUN_ram_400051f8(param_1,s_delay_ram_40095020,0x10);
    if (iVar1 != 0) {
      iVar1 = FUN_ram_400051f8(param_1,s_reverb_ram_4009502c,0x10);
      if (iVar1 == 0) {
        uVar6 = FUN_ram_4001a8e6(param_1);
        if (uVar6 < 8) {
          if (uVar6 == 4) {
            uVar6 = 2;
          }
        }
        else {
          uVar6 = 6;
        }
        uVar2 = FUN_ram_4001ba0e(uVar6);
        switch(uVar6) {
        case 0:
          uVar8 = 0x62;
          break;
        case 1:
          uVar8 = 99;
          break;
        case 2:
          uVar8 = 100;
          break;
        case 3:
          uVar8 = 0x65;
          break;
        default:
          uVar8 = 0x68;
          break;
        case 5:
          uVar8 = 0x67;
          break;
        case 7:
          uVar8 = 0x66;
        }
        pcVar3 = (char *)FUN_ram_4002c834(uVar8);
        uVar4 = FUN_ram_4002c834(0x5e);
        uVar8 = 7;
        goto LAB_ram_4001bde8;
      }
      iVar1 = FUN_ram_400051f8(param_1,&DAT_ram_40095034,0x10);
      if (iVar1 == 0) {
        uVar6 = FUN_ram_4001a8e6(param_1);
        uVar2 = uVar6;
        if (2 < uVar6) {
          uVar2 = 2;
        }
        uVar2 = uVar2 & 0xff;
        if (uVar6 == 0) {
          uVar8 = 0x77;
        }
        else if (uVar6 == 1) {
          uVar8 = 0x76;
        }
        else {
          uVar8 = 0x75;
        }
        pcVar3 = (char *)FUN_ram_4002c834(uVar8);
        uVar4 = FUN_ram_4002c834(0x5e);
        uVar8 = 3;
        goto LAB_ram_4001bde8;
      }
      iVar1 = FUN_ram_400051f8(param_1,&DAT_ram_40095bb8,0x10);
      if (iVar1 == 0) goto LAB_ram_4001bfa6;
      iVar1 = FUN_ram_400051f8(param_1,&DAT_ram_4009501c,0x10);
      if (iVar1 != 0) {
        FUN_ram_4002c8b8(param_1);
        FUN_ram_4001bc76();
        return;
      }
      if (DAT_ram_3006af20 == '\0') {
        FUN_ram_4001ad0e();
      }
      uVar2 = DAT_ram_30049ddc;
      if (((DAT_ram_3006aa74 != '\0') && (_DAT_ram_3006aa78 == 100)) && (-1 < (int)DAT_ram_30049de0)
         ) {
        uVar2 = DAT_ram_30049de0;
      }
      uVar5 = FUN_ram_4002c834(0x60);
      uVar9 = 0x3006af24;
      goto LAB_ram_4001bff6;
    }
    uVar2 = FUN_ram_4001a8e6(param_1);
    if (uVar2 < 8) {
      switch(uVar2 - 1 & 0xff) {
      case 0:
        uVar8 = 0x1f;
        break;
      case 1:
        uVar8 = 0x4b;
        break;
      case 2:
        uVar8 = 0x4c;
        break;
      case 3:
        uVar8 = 0x4d;
        break;
      case 4:
        uVar8 = 0x4e;
        break;
      case 5:
        uVar8 = 0x4f;
        break;
      case 6:
        uVar8 = 0x50;
        break;
      default:
        goto switchD_ram_4001c13c_default;
      }
      pcVar3 = (char *)FUN_ram_4002c834(uVar8);
    }
    else {
switchD_ram_4001c13c_default:
      pcVar3 = (char *)FUN_ram_4002c834(0x1e);
      uVar2 = 0;
    }
    uVar4 = FUN_ram_4002c834(0x5e);
    uVar8 = 8;
    goto LAB_ram_4001bde8;
  }
  iVar1 = FUN_ram_4001a8e6(param_1);
  iVar7 = FUN_ram_400252e8(5,iVar1);
  if (iVar7 < 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_ram_400252e8(5);
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  switch(iVar1 - 1U & 0xff) {
  case 0:
    uVar8 = 0x1c;
    break;
  case 1:
    uVar8 = 0x1d;
    break;
  case 2:
    uVar8 = 0x22;
    break;
  case 3:
    uVar8 = 0x23;
    break;
  default:
    uVar8 = 0x1b;
    break;
  case 9:
  case 10:
  case 0xb:
  case 0x10:
    pcVar3 = (char *)nc_effect_name(5,iVar1,2);
    goto LAB_ram_4001bec2;
  }
  pcVar3 = (char *)FUN_ram_4002c834(uVar8);
LAB_ram_4001bec2:
  uVar8 = FUN_ram_400252b8(5);
  uVar4 = FUN_ram_4002c834(0x5e);
LAB_ram_4001bde8:
  FUN_ram_4001bcc0(uVar2,uVar8,pcVar3,uVar4);
  return;
}


