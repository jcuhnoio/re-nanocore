/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40041000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40041060.
 * REA evidence: ev_2226da9389fe3ffabb247ca49cc928408e273f48d0b08128684da56a0589dbe0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40041060(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if ((*(uint *)(param_1 + 8) & 0x8000) == 0) {
    FUN_ram_400002f4();
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 8) & 0x7fff) * 8);
    *param_3 = *(undefined4 *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 8) & 0x7fff) * 8 + 4);
    FUN_ram_400002fa();
    return 0;
  }
  return 0xfffffffc;
}


/* NanoCore 1.11, address 0x400410ba.
 * REA evidence: ev_1a908e5417fa08c930f63e70af993aee37249ae11557b6d990ff4e65501d532f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400410ba(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_ram_400002f4();
  *(undefined4 *)(param_1 + 8) = 0x8000;
  FUN_ram_400002fa();
  FUN_ram_400062ac();
  while (*(int *)(param_1 + 0x18) != param_1 + 0x18) {
    uVar1 = FUN_ram_400002f4();
    iVar2 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
    FUN_ram_400065d4(iVar2 + -0x1c);
    FUN_ram_400002fa(uVar1);
  }
  while (*(int *)(param_1 + 0x10) != param_1 + 0x10) {
    uVar1 = FUN_ram_400002f4();
    iVar2 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
    FUN_ram_400065d4(iVar2 + -0x1c);
    FUN_ram_400002fa(uVar1);
  }
  FUN_ram_400062ce();
  FUN_ram_40006172();
  return;
}


/* NanoCore 1.11, address 0x40041138.
 * REA evidence: ev_6a71c738d05b88b5d3898b0ca17a13e8f8dda560e97894893331fa24af8f39e9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40041138(undefined4 *param_1)

{
  FUN_ram_400410ba();
  FUN_ram_400002f4();
  *param_1 = 0;
  FUN_ram_400002fa();
  FUN_ram_400056b4(param_1[3]);
  return 0;
}


/* NanoCore 1.11, address 0x40041160.
 * REA evidence: ev_b409c08a127909582f662fb5a02e8d1b3974c67a76c48a54d58752e343b25527
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40041160(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(uint *)(param_1 + 8) & 0x8000) == 0) {
    FUN_ram_400002f4();
    uVar2 = (*(uint *)(param_1 + 8) & 0x7fffffff) >> 0x10;
    uVar1 = *(uint *)(param_1 + 8) & 0x7fff;
    if (uVar1 < uVar2) {
      iVar3 = uVar2 - uVar1;
    }
    else {
      iVar3 = (*(ushort *)(param_1 + 4) + uVar2) - uVar1;
    }
    FUN_ram_400002fa();
    return iVar3 * 0x10000 >> 0x10 & 0xffff;
  }
  return 0;
}


/* NanoCore 1.11, address 0x400411ae.
 * REA evidence: ev_bb2c9f8f22ed9219cb2f7465744f6873b2035965ada58e17ec65e19eb57c1907
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400411ae(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int aiStack_34 [2];
  
  aiStack_34[0] = param_4;
  iVar2 = FUN_ram_40006464();
  uVar3 = FUN_ram_400002f4();
  while( true ) {
    if ((*(uint *)(param_1 + 8) & 0x8000) == 0) {
      *param_2 = *(undefined4 *)(*(int *)(param_1 + 0xc) + (*(uint *)(param_1 + 8) & 0x7fff) * 8);
      uVar1 = *(ushort *)(param_1 + 4);
      uVar5 = *(uint *)(param_1 + 8) & 0x7fff;
      uVar6 = uVar5 + 1 & 0x7fff;
      *param_3 = *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar5 * 8 + 4);
      uVar5 = *(uint *)(param_1 + 8) & 0xffff8000;
      *(uint *)(param_1 + 8) = uVar5 | uVar6;
      if (uVar6 == uVar1) {
        *(uint *)(param_1 + 8) = uVar5;
      }
      uVar5 = *(uint *)(param_1 + 8);
      *(uint *)(param_1 + 8) = uVar5 & 0x7fffffff;
      if ((uVar5 & 0x7fffffff) >> 0x10 == (uVar5 & 0x7fff)) {
        *(uint *)(param_1 + 8) = uVar5 & 0x7fffffff | 0x8000;
      }
      uVar5 = FUN_ram_40041160(param_1);
      iVar7 = 0;
      if (uVar5 <= *(ushort *)(param_1 + 6)) {
        piVar4 = *(int **)(param_1 + 0x10);
        if (piVar4 == (int *)(param_1 + 0x10)) {
          FUN_ram_400002fa(uVar3);
        }
        else {
          FUN_ram_400065d4(piVar4 + -7);
          FUN_ram_400002fa(uVar3);
          FUN_ram_40006172();
        }
        if (*(code **)(param_1 + 0x20) != (code *)0x0) {
          (**(code **)(param_1 + 0x20))(param_1,3);
        }
        goto LAB_ram_40041288;
      }
      goto LAB_ram_400412f4;
    }
    if (aiStack_34[0] == 0) break;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    FUN_ram_40006512(iVar2);
    piVar4 = *(int **)(param_1 + 0x1c);
    *piVar4 = iVar2 + 0x1c;
    *(int **)(iVar2 + 0x20) = piVar4;
    *(int *)(param_1 + 0x1c) = iVar2 + 0x1c;
    *(int *)(iVar2 + 0x1c) = param_1 + 0x18;
    if (0 < aiStack_34[0]) {
      FUN_ram_400068a8(iVar2 + 0x54,0,aiStack_34);
      FUN_ram_40006784(iVar2 + 0x54);
    }
    FUN_ram_400002fa(uVar3);
    FUN_ram_40006172();
    iVar7 = *(int *)(iVar2 + 0x38);
    uVar3 = FUN_ram_400002f4();
    if (iVar7 != 0) {
LAB_ram_400412f4:
      FUN_ram_400002fa(uVar3);
      if (iVar7 == 0) {
        if (*(code **)(param_1 + 0x20) == (code *)0x0) {
LAB_ram_40041288:
          iVar7 = 0;
        }
        else {
          (**(code **)(param_1 + 0x20))(param_1,1);
        }
      }
      return iVar7;
    }
  }
  iVar7 = -2;
  goto LAB_ram_400412f4;
}


/* NanoCore 1.11, address 0x4004131e.
 * REA evidence: ev_ba6f22e8526267aac99becede3e9878894f13635f54b04f4a34423cd4cccf73f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004131e(undefined4 *param_1,undefined4 param_2,ushort param_3)

{
  param_1[1] = 0;
  *param_1 = param_2;
  *(ushort *)(param_1 + 2) = param_3 & 0xfffc;
  return;
}


/* NanoCore 1.11, address 0x4004132c.
 * REA evidence: ev_c340112cabe01bcafbc94902a97def7784f95c5dedaac16a45b0e78111ce5b36
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4004132c(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 4);
  uVar2 = (uVar3 & 0xffff) >> 1;
  uVar1 = uVar3 >> 0x11;
  if (uVar2 == uVar1) {
    iVar4 = 0;
    if ((uVar3 & 1) != (uVar3 & 0x1ffff) >> 0x10) {
      iVar4 = (int)*(short *)(param_1 + 8);
    }
  }
  else {
    iVar4 = uVar1 - uVar2;
    if (uVar1 <= uVar2) {
      iVar4 = ((int)*(short *)(param_1 + 8) + uVar1) - uVar2;
    }
  }
  return iVar4;
}


/* NanoCore 1.11, address 0x40041362.
 * REA evidence: ev_0d2a389a40058a2394e154c1ee3021e417ab94a91a882268c140730f08ad2c3a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40041362(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1[2];
  iVar2 = FUN_ram_4004132c();
  uVar3 = (short)iVar4 - iVar2 & 0xffff;
  uVar1 = 0;
  if (uVar3 != 0) {
    if (param_3 < uVar3) {
      uVar3 = param_3;
    }
    uVar1 = uVar3 & 0xffff;
    iVar2 = *param_1 + ((uint)param_1[1] >> 0x11);
    if ((int)uVar1 < (int)((int)(short)iVar4 - ((uint)param_1[1] >> 0x11))) {
      memcpy(iVar2,param_2,uVar1);
      param_1[1] = param_1[1] & 0x1ffffU | (((uint)param_1[1] >> 0x11) + uVar1) * 0x20000;
    }
    else {
      memcpy(iVar2);
      iVar4 = (int)(short)param_1[2] - ((uint)param_1[1] >> 0x11);
      memcpy(*param_1,param_2 + iVar4,uVar1 - iVar4);
      *(ushort *)((int)param_1 + 6) =
           (((ushort)((uint)param_1[1] >> 0x11) - (short)param_1[2]) + (short)uVar3) * 2 |
           ~(ushort)((uint)(param_1[1] << 0xf) >> 0x1f) & 1;
    }
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40041412.
 * REA evidence: ev_37c5b5bbfa6d37655a48fd4bdb6f27678266fda8622d555ffd75c2c6213a927f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40041412(int *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = *(ushort *)(param_1 + 2);
  iVar7 = (int)(short)uVar1;
  iVar3 = FUN_ram_4004132c();
  uVar2 = (uint)uVar1 - iVar3 & 0xffff;
  if (iVar7 < (int)param_3) {
    param_2 = param_2 + (param_3 - iVar7);
    param_3 = (uint)uVar1;
  }
  iVar3 = *param_1 + ((uint)param_1[1] >> 0x11);
  if ((int)param_3 < (int)(iVar7 - ((uint)param_1[1] >> 0x11))) {
    memcpy(iVar3,param_2,param_3);
    uVar4 = param_1[1];
    uVar5 = (uVar4 >> 0x11) + param_3;
    uVar6 = uVar5 * 0x20000;
    param_1[1] = uVar6 | uVar4 & 0x1ffff;
    if (uVar2 < param_3) {
      param_1[1] = uVar6 | uVar4 & 0x10001 | (uVar5 & 0x7fff) << 1;
    }
  }
  else {
    memcpy(iVar3);
    iVar3 = (int)(short)param_1[2] - ((uint)param_1[1] >> 0x11);
    memcpy(*param_1,param_2 + iVar3,param_3 - iVar3);
    uVar4 = param_1[1];
    uVar6 = ((uVar4 & 0x1ffff) >> 0x10 ^ 1) << 0x10;
    uVar5 = ((uVar4 >> 0x11) - (uint)*(ushort *)(param_1 + 2)) + param_3;
    param_1[1] = uVar6 | uVar4 & 0xffff | uVar5 * 0x20000;
    if (uVar2 < param_3) {
      if ((uVar5 & 0x7fff) <= (uVar4 & 0xffff) >> 1) {
        param_1[1] = uVar6 | uVar4 & 0xfffe | uVar5 * 0x20000 | uVar4 & 1 ^ 1;
      }
      param_1[1] = (uVar5 & 0x7fff) << 1 | param_1[1] & 0xffff0001U;
    }
  }
  return param_3;
}


/* NanoCore 1.11, address 0x4004152a.
 * REA evidence: ev_68a22e8434acb9a2069b58765933924ef0c5664452ed2942d5ef7b7de957eded
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4004152a(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = FUN_ram_4004132c();
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = param_3;
    if (uVar1 < param_3) {
      uVar3 = uVar1 & 0xffff;
    }
    uVar1 = (param_1[1] & 0xffffU) >> 1;
    iVar4 = (int)(short)param_1[2] - uVar1;
    iVar2 = *param_1 + uVar1;
    if ((int)uVar3 < iVar4) {
      memcpy(param_2,iVar2);
      param_1[1] = (((param_1[1] & 0xffffU) >> 1) + uVar3 & 0x7fff) << 1 | param_1[1] & 0xffff0001U;
    }
    else {
      memcpy(param_2,iVar2,iVar4);
      iVar2 = (int)(short)param_1[2] - ((param_1[1] & 0xffffU) >> 1);
      memcpy(iVar2 + param_2,*param_1,uVar3 - iVar2);
      *(ushort *)(param_1 + 1) =
           ((((ushort)param_1[1] >> 1) - (short)param_1[2]) + (short)uVar3) * 2 |
           ~(ushort)param_1[1] & 1;
    }
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x400415d6.
 * REA evidence: ev_f67a1859c67c30cdebac73896c724c9e2edfadd2e53fa97f117f7ff9379e675b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400415d6(int param_1,int param_2)

{
  int *piVar1;
  
  FUN_ram_400002f4();
  piVar1 = *(int **)(param_1 + 8);
  *piVar1 = param_2 + 4;
  *(int **)(param_2 + 8) = piVar1;
  *(int *)(param_1 + 8) = param_2 + 4;
  *(int *)(param_2 + 4) = param_1 + 4;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x40041600.
 * REA evidence: ev_9f3a349c20b0fec0953f660cfa87991ddafe1e2aeaed7568e0635c5586faeba5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40041600(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_ram_400002f4();
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = *(int **)(param_1 + 8);
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *(int *)(param_1 + 8) = param_1 + 4;
  *(int *)(param_1 + 4) = param_1 + 4;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x40041626.
 * REA evidence: ev_13411fc155b37d53fe4a93a4385169c47892d07823842975ae06487aa653017a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40041626(int param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = FUN_ram_400002f4();
  piVar2 = *(int **)(param_1 + 4);
  bVar1 = false;
  while ((int *)(param_1 + 4) != piVar2) {
    iVar5 = (int)(piVar2 + -1);
    iVar4 = (*(code *)piVar2[2])(iVar5,param_2);
    if (iVar4 == 0) {
      *(undefined4 *)(piVar2[-1] + 0x38) = 0;
      iVar4 = FUN_ram_400065d4();
      if (iVar4 == 0) {
        bVar1 = true;
      }
      piVar2 = (int *)*piVar2;
      FUN_ram_40041600(iVar5);
    }
    else {
      piVar2 = (int *)*piVar2;
    }
  }
  FUN_ram_400002fa(uVar3);
  if (bVar1) {
    FUN_ram_40006172();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400416a6.
 * REA evidence: ev_757e2c3a4eb5fef4f9fb8474c48d2ccc628fd629ecd26f4dfbfd38f30cd6c13e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400416a6(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 **local_20;
  undefined4 **ppuStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_40006464();
  iStack_28 = FUN_ram_40004352(param_3);
  if (param_2 == 0) {
    uVar2 = 0;
    if (iStack_28 != 0) {
      uStack_24 = FUN_ram_40006464();
      puStack_18 = &LAB_ram_400415d2;
      local_20 = &local_20;
      uStack_14 = 0;
      ppuStack_1c = local_20;
      uVar2 = FUN_ram_400002f4();
      *(undefined4 *)(iVar1 + 0x38) = 0;
      FUN_ram_400415d6(param_1,&uStack_24);
      FUN_ram_40006512(iVar1);
      if (iStack_28 != -1) {
        FUN_ram_400068a8(iVar1 + 0x54,0,&iStack_28);
        FUN_ram_40006784(iVar1 + 0x54);
      }
      FUN_ram_400002fa(uVar2);
      FUN_ram_40006172();
      uVar2 = *(undefined4 *)(iVar1 + 0x38);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x40041734.
 * REA evidence: ev_3c01f346563b065079fd5566be2b61a914661ddb31eabb742a223702c908017c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40041734(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_a4;
  code *pcVar3;
  
  uVar1 = 0;
  while( true ) {
    if (param_4 <= uVar1) {
      return uVar1;
    }
    pcVar3 = *(code **)(*(int *)(param_1 + 0x4c) + 4);
    iVar2 = (*pcVar3)(param_1,param_2 + uVar1,param_3 + uVar1,param_4,param_5,pcVar3);
    if (iVar2 != 0) break;
    uVar1 = uVar1 + 4;
    param_5 = extraout_a4;
  }
  return 0;
}


/* NanoCore 1.11, address 0x40041872.
 * REA evidence: ev_4445f2c43b6f9affa29788e72308022d96cfcf197f20202ccd4184033f656eba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40041872(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x1c) = 0x1a;
  *(code **)(param_1 + 0x3c) = FUN_ram_40041734;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 **)(param_1 + 0x44) = &LAB_ram_4004177a;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  FUN_ram_4000446c(param_1,param_2,3);
  return;
}


/* NanoCore 1.11, address 0x400418ac.
 * REA evidence: ev_16650f73fa3df507ad177a50bda27c0310eb58feb17713261c56115f964519ca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_400418ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  code *pcVar1;
  undefined4 auStack_14 [4];
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x4c) + 4);
  (*pcVar1)(param_1,param_2,auStack_14,param_4,param_5,pcVar1);
  return auStack_14[0];
}


/* NanoCore 1.11, address 0x400418c0.
 * REA evidence: ev_947a6027429807b2248e7dc951f5868bc8e7b43c221dc795adc990a690a35c49
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400418c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((code *)**(undefined4 **)(param_1 + 0x4c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x400418c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x4c))(param_1,param_2,1);
    return uVar1;
  }
  return 0xfffffffa;
}


/* NanoCore 1.11, address 0x4004194e.
 * REA evidence: ev_1c3324c5fd9112260bf54dbd639383914d77f4fe98ca335750c194915c87a3f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4004194e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _DAT_ram_30080c28 = 0x19;
  _DAT_ram_30080c48 = &LAB_ram_400418f0;
  _DAT_ram_30080c4c = &LAB_ram_40041920;
  _DAT_ram_30080c34 = 0;
  _DAT_ram_30080c38 = 0;
  _DAT_ram_30080c3c = 0;
  _DAT_ram_30080c40 = 0;
  _DAT_ram_30080c44 = 0;
  _DAT_ram_30080c50 = &LAB_ram_400418ce;
  _DAT_ram_30080c54 = param_3;
  _DAT_ram_30080c58 = param_2;
  FUN_ram_4000446c(0x30080c0c,param_1,3);
  return 0;
}


/* NanoCore 1.11, address 0x400419a6.
 * REA evidence: ev_a3465678ec6776bb538cec9770ea836625769e56c875b78c5973525a7ec510c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_400419a6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(code **)(_DAT_ram_30080c58 + 0xc) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x400419be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(_DAT_ram_30080c58 + 0xc))(0x30080c0c,param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0xfffffffa;
}


/* NanoCore 1.11, address 0x400419c4.
 * REA evidence: ev_009612b0ab7dc8d37839cc4da108299ee63ea5d625071c457c76086cd40a2933
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400419c4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(code **)(_DAT_ram_30080c58 + 0x14) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x400419d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(_DAT_ram_30080c58 + 0x14))(0x30080c0c,param_1,param_2);
    return uVar1;
  }
  return 0xfffffffa;
}


/* NanoCore 1.11, address 0x400419de.
 * REA evidence: ev_4d95abfa9dc0b6a6d9ddab624ebd4c9521310aafea8bfc0b149133fdf7e023f8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400419de(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x400419f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*_DAT_ram_30080c58)(0x30080c0c,param_1,param_2,param_4,(code *)*_DAT_ram_30080c58);
  return;
}


/* NanoCore 1.11, address 0x400419f2.
 * REA evidence: ev_fa324ea6464112e7f6598675cdf26b4cb6c409208335ee1368fd4042f4bbfedb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400419f2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x40041a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_30080c58 + 4))
            (0x30080c0c,param_1,param_2,param_4,*(code **)(_DAT_ram_30080c58 + 4));
  return;
}


/* NanoCore 1.11, address 0x40041a06.
 * REA evidence: ev_0721102a8f6800037b80507d8888437158e8fbef67df90419f7c203ea808f0d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40041a06(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x40041a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_30080c58 + 8))
            (0x30080c0c,param_1,param_3,param_4,*(code **)(_DAT_ram_30080c58 + 8));
  return;
}


/* NanoCore 1.11, address 0x40041a16.
 * REA evidence: ev_4c8cead1982b9bd72e0b2aa7308c4ed721d8caf879acec86fb3cc579ffb92b84
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40041a16(byte *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 & 0xdf) != 0x50) {
    return 0xfffffff6;
  }
  if (*(code **)(_DAT_ram_30080c58 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40041a32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(_DAT_ram_30080c58 + 0x18))();
    return uVar1;
  }
  return 0xfffffffa;
}


/* NanoCore 1.11, address 0x40041a54.
 * REA evidence: ev_4097208e430a0b394d01f0a7d9d483352a51e3399daa325f56c5fd08873e0910
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40041a54(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1c) = 3;
  *(undefined1 **)(param_2 + 0x30) = &LAB_ram_40041a3c;
  *(undefined1 **)(param_2 + 0x34) = &LAB_ram_40041a40;
  *(undefined1 **)(param_2 + 0x3c) = &LAB_ram_40041a44;
  *(undefined1 **)(param_2 + 0x40) = &LAB_ram_40041a4c;
  *(undefined1 **)(param_2 + 0x38) = &LAB_ram_40041a50;
  *(undefined1 **)(param_2 + 0x44) = &LAB_ram_40041a48;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  FUN_ram_4000446c(param_2,param_1,0xb);
  return;
}


/* NanoCore 1.11, address 0x40041aa8.
 * REA evidence: ev_cd08b20da5e120e9aa3406dd965a8f61093ddd9ed9c225806ab865393d2a1ea3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40041aa8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x68);
  uVar2 = (uint)*(ushort *)(iVar1 + 4);
  uVar3 = (uint)*(ushort *)(iVar1 + 6);
  if (uVar2 == uVar3) {
    uVar2 = 0;
    if (*(int *)(iVar1 + 8) != 0) {
      uVar2 = (*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10;
    }
  }
  else if (uVar3 < uVar2) {
    uVar2 = uVar2 - uVar3;
  }
  else {
    uVar2 = ((*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10) - (uVar3 - uVar2);
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x40041af6.
 * REA evidence: ev_514918e23c67cf751cd4d2ad7de8070b7ec0726317b82a12df50b7cf4b4008c5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40041af6(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar3;
  
  if (param_2 != 0x80) {
    if (param_2 < 0x81) {
      if (param_2 == 2) {
        uVar3 = *(ushort *)(param_1 + 0x20) | 0x20;
      }
      else {
        if (param_2 == 3) {
          if (param_3 == 0) {
            return 0;
          }
          cVar1 = *(char *)(param_1 + 0x24);
          if (((*(uint *)(param_3 + 4) & 0x3ffffff) >> 10 !=
               (*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10) && (cVar1 != '\0')) {
            return 7;
          }
          FUN_ram_4000304c(param_1 + 0x50,param_3,0x18);
          if (cVar1 == '\0') {
            return 0;
          }
          (*(code *)**(undefined4 **)(param_1 + 0x4c))(param_1,param_3);
          return 0;
        }
        if (param_2 != 1) goto LAB_ram_40041b24;
        uVar3 = *(ushort *)(param_1 + 0x20) & 0xffdf;
      }
      *(ushort *)(param_1 + 0x20) = uVar3;
      return 0;
    }
    if (param_2 != 0x81) {
      if (param_2 == 0x88) {
        if (param_3 == 0) {
          return 0;
        }
        FUN_ram_4000304c(param_3,param_1 + 0x50,0x18);
        return 0;
      }
LAB_ram_40041b24:
      UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x4c) + 4);
                    /* WARNING: Could not recover jumptable at 0x40041b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,UNRECOVERED_JUMPTABLE);
      return uVar2;
    }
  }
  (**(code **)(*(int *)(param_1 + 0x4c) + 4))();
  return 0;
}


/* NanoCore 1.11, address 0x40041bbe.
 * REA evidence: ev_49cefa9fb60d1f2286bba43fec66798945bd1e72bd75652d273f0549e32d7136
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40041bbe(int param_1,undefined4 param_2,char *param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  if (param_4 != 0) {
    if ((*(ushort *)(param_1 + 0x22) & 0x400) == 0) {
      if ((int)((uint)*(ushort *)(param_1 + 0x22) << 0x14) < 0) {
        piVar5 = *(int **)(param_1 + 0x6c);
        iVar4 = FUN_ram_40040f2c(piVar5 + 1,param_3,param_4,0xffffffff);
        if (iVar4 == 0) {
          FUN_ram_400002f4();
          if (*piVar5 == 1) {
            FUN_ram_400002fa();
          }
          else {
            *piVar5 = 1;
            FUN_ram_400002fa();
            (**(code **)(*(int *)(param_1 + 0x4c) + 0x10))(param_1,param_3,param_4,2);
          }
        }
        else {
          FUN_ram_40005004();
          param_4 = 0;
        }
      }
      else {
        if ((*(byte *)(param_1 + 0x5c) & 0xf) == 7) {
          pcVar3 = *(code **)(*(int *)(param_1 + 0x4c) + 4);
          (*pcVar3)(param_1,0x81,0,param_4,7,pcVar3);
        }
        iVar4 = 0;
        do {
          if ((param_3[iVar4] == '\n') && ((*(ushort *)(param_1 + 0x22) & 0x40) != 0)) {
            (**(code **)(*(int *)(param_1 + 0x4c) + 8))(param_1,0xd);
          }
          pcVar1 = param_3 + iVar4;
          iVar4 = iVar4 + 1;
          (**(code **)(*(int *)(param_1 + 0x4c) + 8))(param_1,*pcVar1);
        } while (param_4 != iVar4);
      }
    }
    else {
      if ((*(byte *)(param_1 + 0x5c) & 0xf) == 7) {
        pcVar3 = *(code **)(*(int *)(param_1 + 0x4c) + 4);
        (*pcVar3)(param_1,0x81,0,param_4,7,pcVar3);
      }
      uVar6 = *(undefined4 *)(param_1 + 0x6c);
      iVar4 = param_4;
      do {
        while ((((*param_3 == '\n' && ((*(ushort *)(param_1 + 0x22) & 0x40) != 0)) &&
                (iVar2 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))(param_1,0xd), iVar2 == -1)) ||
               (iVar2 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))(param_1,*param_3), iVar2 == -1))
              ) {
          FUN_ram_40040df4(uVar6,0xffffffff);
        }
        iVar4 = iVar4 + -1;
        param_3 = param_3 + 1;
      } while (iVar4 != 0);
    }
  }
  return param_4;
}


/* NanoCore 1.11, address 0x40041fbe.
 * REA evidence: ev_ce5bea3e2bcb8361e8a8f0ffe10a9bdc256d2457b41e6f680a91f75f6ab85345
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40041fbe(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  
  uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 0x68) + 6);
  uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x68) + 4);
  uVar4 = (*(uint *)(param_1 + 0x54) & 0x3ffffff) >> 10;
  uVar1 = uVar4 - param_3;
  if ((uVar2 < uVar3) || ((*(byte *)(param_1 + 0x5c) & 0x10) != 0)) {
    if ((param_2 + uVar4 + uVar2) - uVar3 < uVar1) {
      return;
    }
    if ((*(byte *)(param_1 + 0x5c) & 0x10) != 0) {
      return;
    }
    pcVar5 = *(code **)(*(int *)(param_1 + 0x4c) + 4);
  }
  else {
    if ((param_2 + uVar2) - uVar3 < uVar1) {
      return;
    }
    pcVar5 = *(code **)(*(int *)(param_1 + 0x4c) + 4);
  }
  (*pcVar5)(param_1,0x84,0,uVar2,uVar3,pcVar5);
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 0x10;
  return;
}


