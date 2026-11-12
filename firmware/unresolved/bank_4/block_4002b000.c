/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4002b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4002b064.
 * REA evidence: ev_f9f30dae025a9873b7eb4b743eba686c3d55e27c1e9aa2c5b9da3f4607dc45ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002b064(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_4002aeea();
  *param_1 = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1028) = param_2;
  *(undefined4 *)(param_1 + 0x102c) = param_3;
  return;
}


/* NanoCore 1.10, address 0x4002b09a.
 * REA evidence: ev_17c383e3ef2cf173b0ef500c61ed9c14b497a9e784b2c3c2c07cec2aecb113f9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002b09a(char *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  char cVar8;
  uint uVar9;
  code *pcVar10;
  char *pcVar11;
  char acStack_3c [2];
  ushort uStack_3a;
  undefined2 uStack_38;
  char *pcStack_34;
  
  uVar3 = 0;
  FUN_ram_4002aeea();
  do {
    if (param_3 <= uVar3) {
      return;
    }
    cVar8 = *param_1;
    bVar2 = *(byte *)(param_2 + uVar3);
    uVar9 = (uint)bVar2;
    pcVar11 = (char *)(param_2 + uVar3);
    if (cVar8 == '\0') {
      if (uVar9 == 0xa5) {
        param_1[8] = '\x01';
        uVar1 = _DAT_ram_300797d8;
        param_1[9] = '\0';
        param_1[0] = '\x01';
        param_1[1] = -0x5b;
        *(ushort *)(param_1 + 0x10) = uVar1 ^ 0xff00;
      }
    }
    else if (cVar8 == '\x01') {
      uVar1 = *(ushort *)(param_1 + 8);
      uVar6 = uVar1 + 1;
      *(short *)(param_1 + 8) = (short)(uVar6 * 0x10000 >> 0x10);
      param_1[uVar1 + 1] = bVar2;
      *(ushort *)(param_1 + 0x10) =
           *(ushort *)(param_1 + 0x10) << 8 ^
           *(ushort *)((uVar9 ^ *(ushort *)(param_1 + 0x10) >> 8) * 2 + 0x30079724);
      if ((uVar6 & 0xffff) == 6) {
        param_1[0xe] = param_1[2];
        uVar1 = CONCAT11(param_1[4],param_1[3]);
        *(ushort *)(param_1 + 10) = uVar1;
        *(ushort *)(param_1 + 0xc) = CONCAT11(param_1[6],param_1[5]);
        if (0x1000 < uVar1) goto LAB_ram_4002b18c;
        param_1[0x16] = '\0';
        param_1[0x17] = '\0';
        if (uVar1 == 0) {
LAB_ram_4002b198:
          param_1[0x14] = '\0';
          param_1[0x15] = '\0';
          param_1[0x12] = '\0';
          param_1[0x13] = '\0';
          cVar8 = '\x03';
        }
        else {
          cVar8 = '\x02';
        }
        *param_1 = cVar8;
      }
    }
    else if (cVar8 == '\x02') {
      uVar9 = (uint)*(ushort *)(param_1 + 0x16);
      if (uVar9 < 0x1000) {
        uVar6 = param_3 - uVar3;
        uVar4 = *(ushort *)(param_1 + 10) - uVar9;
        if ((uVar9 != 0) || (uVar6 < uVar4 + 2)) {
          if (uVar4 <= uVar6) {
            uVar6 = uVar4;
          }
          FUN_ram_4000305c(param_1 + uVar9 + 0x28,pcVar11,uVar6);
          uVar4 = (uint)*(ushort *)(param_1 + 0x10);
          for (uVar9 = 0; uVar6 != uVar9; uVar9 = uVar9 + 1) {
            uVar4 = (uVar4 << 8 ^
                    (uint)*(ushort *)((uVar4 >> 8 ^ (uint)(byte)pcVar11[uVar9]) * 2 + 0x30079724)) &
                    0xffff;
          }
          *(short *)(param_1 + 0x10) = (short)uVar4;
          uVar1 = *(ushort *)(param_1 + 0x16);
          *(short *)(param_1 + 0x16) = (short)((uVar1 + uVar6) * 0x10000 >> 0x10);
          uVar3 = (uVar3 - 1) + uVar6;
          if ((uint)*(ushort *)(param_1 + 10) == (uVar1 + uVar6 & 0xffff)) goto LAB_ram_4002b198;
          goto LAB_ram_4002b124;
        }
        uVar6 = (uint)*(ushort *)(param_1 + 0x10);
        for (uVar9 = 0; uVar4 != uVar9; uVar9 = uVar9 + 1) {
          uVar6 = (uVar6 << 8 ^
                  (uint)*(ushort *)((uVar6 >> 8 ^ (uint)(byte)pcVar11[uVar9]) * 2 + 0x30079724)) &
                  0xffff;
        }
        iVar5 = uVar4 + uVar3;
        *(short *)(param_1 + 0x10) = (short)uVar6;
        uVar3 = iVar5 + 1;
        if (CONCAT11(*(undefined1 *)(param_2 + uVar3),*(undefined1 *)(param_2 + iVar5)) == uVar6) {
          pcVar10 = *(code **)(param_1 + 0x1028);
          if (pcVar10 != (code *)0x0) {
            acStack_3c[0] = param_1[0xe];
            uStack_38 = *(undefined2 *)(param_1 + 0xc);
            uStack_3a = *(ushort *)(param_1 + 10);
            pcStack_34 = pcVar11;
LAB_ram_4002b210:
            (*pcVar10)(acStack_3c,*(undefined4 *)(param_1 + 0x102c));
          }
        }
        else {
LAB_ram_4002b2e8:
          FUN_ram_4002aeb8(param_1);
        }
      }
LAB_ram_4002b18c:
      *param_1 = '\0';
    }
    else if (cVar8 == '\x03') {
      if (*(short *)(param_1 + 0x14) != 0) {
        uVar9 = uVar9 << 8 | (uint)*(ushort *)(param_1 + 0x12);
      }
      sVar7 = *(short *)(param_1 + 0x14) + 1;
      *(short *)(param_1 + 0x12) = (short)uVar9;
      *(short *)(param_1 + 0x14) = sVar7;
      if (sVar7 == 2) {
        if (*(ushort *)(param_1 + 0x10) != uVar9) goto LAB_ram_4002b2e8;
        pcVar10 = *(code **)(param_1 + 0x1028);
        if (pcVar10 != (code *)0x0) {
          acStack_3c[0] = param_1[0xe];
          uStack_3a = *(ushort *)(param_1 + 10);
          uStack_38 = *(undefined2 *)(param_1 + 0xc);
          pcStack_34 = param_1 + 0x28;
          goto LAB_ram_4002b210;
        }
        goto LAB_ram_4002b18c;
      }
    }
LAB_ram_4002b124:
    uVar3 = uVar3 + 1;
  } while( true );
}


/* NanoCore 1.10, address 0x4002b31e.
 * REA evidence: ev_1bbdbc003812a52de705c415ce3162b1bc9512b0c21e0fb5956fe9e86fd82a75
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4002b31e(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2[2];
  if (uVar2 < (uint)param_2[1]) {
    uVar1 = param_2[1] - uVar2;
    if (param_4 < uVar1) {
      uVar1 = param_4;
    }
    iVar3 = FUN_ram_4002b9e8(uVar2 + *param_2,param_3,uVar1);
    if (iVar3 != 0) {
      *param_5 = 0;
      return 1;
    }
    param_2[2] = param_2[2] + uVar1;
    *param_5 = uVar1;
  }
  else {
    *param_5 = 0;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4002b46e.
 * REA evidence: ev_6aace38a3d00d997aafb8e13e51b5dc319a951e68ac0dfa443f17a051f198983
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002b46e(void)

{
  FUN_ram_4004a256(&DAT_ram_30079924);
  DAT_ram_30079924 = 0x55;
  _DAT_ram_30079930 = &LAB_ram_4002b388;
  _DAT_ram_30079934 = &LAB_ram_4002b370;
  _DAT_ram_30079938 = FUN_ram_4002b31e;
  _DAT_ram_30079940 = &LAB_ram_4002b2f0;
  _DAT_ram_30079928 = 0;
  _DAT_ram_30079944 = &LAB_ram_4002b316;
  FUN_ram_4004a260();
  return;
}


/* NanoCore 1.10, address 0x4002b4cc.
 * REA evidence: ev_5522f01a67dc1f3addedc268282aa56133d2b1f62ca221fe53354595074ed126
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002b4cc(void)

{
  if (_DAT_ram_300799a0 != 0) {
    FUN_ram_40004ac8(0x30079974);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002b4e4.
 * REA evidence: ev_aef3ca50a276a8ce2bf106d3c29ab7ed99919651b9e432abbc68a7ec813f45ec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4002b4e4(void)

{
  int iVar1;
  uint uVar2;
  int aiStack_14 [3];
  
  iVar1 = FUN_ram_40006c7c();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40006c48(), iVar1 < 1)) {
    return 0;
  }
  if (_DAT_ram_300799a8 != 0) {
    aiStack_14[0] = 0;
    uVar2 = FUN_ram_40006f4a(aiStack_14);
    if (((uVar2 != 0) && (uVar2 <= _DAT_ram_300799a8)) &&
       (_DAT_ram_300799a8 < uVar2 + aiStack_14[0] * 0x40)) {
      return _DAT_ram_300799a8;
    }
  }
  _DAT_ram_300799a8 = fal_partition_find(s_ui_asset_ram_40092e4c);
  return _DAT_ram_300799a8;
}


/* NanoCore 1.10, address 0x4002b53e.
 * REA evidence: ev_e269c17f0aa35445944ef46dee5c487e4608bc12c1775f41269a1c9673e567df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002b53e(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  while( true ) {
    if (param_4 == 0) {
      return 0;
    }
    uVar1 = param_4;
    if (0x1000 < param_4) {
      uVar1 = 0x1000;
    }
    uVar2 = fal_partition_read(param_1,param_2,param_3,uVar1);
    if (uVar1 != uVar2) break;
    param_4 = param_4 - uVar1;
    param_2 = param_2 + uVar1;
    param_3 = param_3 + uVar1;
  }
  return 0xfffffff8;
}


/* NanoCore 1.10, address 0x4002b58a.
 * REA evidence: ev_84f471aaeb21522a5c0ad533f01b3e018e479c01e4ef425fa8189a756fcee20b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002b58a(void)

{
  int iVar1;
  
  if ((_DAT_ram_300799a0 == 0) &&
     (iVar1 = FUN_ram_4000493c(0x30079974,s_uiast_ram_40094f4c,1), iVar1 == 0)) {
    _DAT_ram_300799a0 = 1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4002b5c2.
 * REA evidence: ev_8954a8a9fd3548a985b08f3b4d92a84b895acc08139df05538717af232839bc8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002b5c2(void)

{
  if (_DAT_ram_300799a0 != 0) {
    FUN_ram_400049d6(0x30079974,0xffffffff);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002b5dc.
 * REA evidence: ev_89cfca34cb9de52fdf97f9167c852aec95d631e04872a9449b4f376e42423c23
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002b5dc(void)

{
  FUN_ram_4002b5c2();
  DAT_ram_30079968 = 0;
  FUN_ram_4000505c(0x30079958,0,0x10);
  _DAT_ram_300799a4 = 0;
  FUN_ram_4002b4cc();
  return;
}


/* NanoCore 1.10, address 0x4002b60c.
 * REA evidence: ev_39e1d7f336ca80407251bebe177a6f21fad25a60e8244b844a776b327398adbd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002b60c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0xfffffff6;
  }
  iVar1 = FUN_ram_4002b4e4();
  if (iVar1 != 0) {
    uVar2 = FUN_ram_4002b53e(iVar1,0,param_1,0x10);
    return uVar2;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4002b634.
 * REA evidence: ev_7e846400421e91e7bdf4fa27f5d8809f5e47b45650e2d040aa7066ae729a3658
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002b634(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_20;
  uint uStack_1c;
  
  piVar2 = &local_20;
  iVar1 = FUN_ram_4002b60c(&local_20);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4002b4e4();
    if (iVar1 == 0) {
      DAT_ram_30079968 = 0;
      FUN_ram_4000305c(0x30079958,&local_20,0x10);
      if (param_1 == 0) {
        return 0;
      }
      goto LAB_ram_4002b672;
    }
    if ((((0x10 < *(uint *)(iVar1 + 0x38)) && (local_20 == 0x55494131)) && (uStack_1c != 0)) &&
       (uStack_1c <= *(uint *)(iVar1 + 0x38) - 0x10)) {
      FUN_ram_4000305c(0x30079958,&local_20,0x10);
      if (param_1 != 0) {
        FUN_ram_4000305c(param_1,&local_20,0x10);
      }
      return 1;
    }
    FUN_ram_4000305c(0x30079958,&local_20,0x10);
    DAT_ram_30079968 = 2;
  }
  else {
    DAT_ram_30079968 = 0;
    FUN_ram_4000505c(0x30079958,0,0x10);
  }
  if (param_1 == 0) {
    return 0;
  }
  piVar2 = (int *)0x30079958;
LAB_ram_4002b672:
  FUN_ram_4000305c(param_1,piVar2,0x10);
  return 0;
}


/* NanoCore 1.10, address 0x4002b6fe.
 * REA evidence: ev_dd23455720c7726ab8964bd8dfbfd380685f4cfdfe1df0d5570da755d356c692
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002b6fe(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_140 [4];
  uint uStack_13c;
  int iStack_138;
  uint uStack_130;
  int iStack_12c;
  
  puVar5 = auStack_140;
  iVar2 = FUN_ram_4002b634(auStack_140);
  if (iVar2 == 0) {
    if (DAT_ram_30079968 == '\x02') {
      FUN_ram_400223bc();
    }
    if (param_1 != 0) {
      puVar5 = (undefined1 *)0x30079958;
LAB_ram_4002b77a:
      FUN_ram_4000305c(param_1,puVar5,0x10);
      return iVar2;
    }
  }
  else {
    iVar3 = FUN_ram_4002b4e4();
    if (iVar3 == 0) {
      DAT_ram_30079968 = '\0';
    }
    else {
      iVar8 = 0x10;
      iVar1 = 0;
      for (uVar6 = uStack_13c; uVar6 != 0; uVar6 = uVar6 - uVar7) {
        uVar7 = uVar6;
        if (0x100 < uVar6) {
          uVar7 = 0x100;
        }
        iVar4 = FUN_ram_4002b53e(iVar3,iVar8,&uStack_130,uVar7);
        if (iVar4 != 0) goto LAB_ram_4002b7a0;
        iVar1 = FUN_ram_4000755e(iVar1,&uStack_130,uVar7);
        iVar8 = iVar8 + uVar7;
      }
      if ((iVar1 != 0) && (iStack_138 == iVar1)) {
        uStack_130 = uStack_13c;
        iStack_12c = iVar1;
        FUN_ram_400222f2(&uStack_130);
        FUN_ram_4000305c(0x30079958,auStack_140,0x10);
        DAT_ram_30079968 = '\x01';
        if (param_1 == 0) {
          DAT_ram_30079968 = 1;
          return iVar2;
        }
        goto LAB_ram_4002b77a;
      }
LAB_ram_4002b7a0:
      DAT_ram_30079968 = '\x02';
      FUN_ram_400223bc();
    }
    if (param_1 != 0) {
      FUN_ram_4000305c(param_1,auStack_140,0x10);
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4002b820.
 * REA evidence: ev_262fc88bc84ef9cf472f1f2e70176a029f56687a89d358d408504d56ff2c0ed8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002b820(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iStack_28;
  int iStack_24;
  undefined1 auStack_20 [4];
  int iStack_1c;
  int iStack_18;
  
  cVar1 = DAT_ram_30079968;
  if (DAT_ram_30079968 != '\0') {
    if (param_1 != 0) {
      FUN_ram_4000305c(param_1,0x30079958,0x10);
    }
    return (uint)(cVar1 == '\x01');
  }
  uVar2 = FUN_ram_4002b634(auStack_20);
  if (uVar2 == 0) {
    if (DAT_ram_30079968 == '\x02') {
      FUN_ram_400223bc();
    }
    if (param_1 == 0) {
      return 0;
    }
    puVar4 = (undefined1 *)0x30079958;
  }
  else {
    iVar3 = FUN_ram_400222c8(&iStack_28);
    if (((iVar3 != 0) || (iStack_28 != iStack_1c)) || (iStack_24 != iStack_18)) {
      uVar2 = FUN_ram_4002b6fe(param_1);
      return uVar2;
    }
    FUN_ram_4000305c(0x30079958,auStack_20,0x10);
    DAT_ram_30079968 = '\x01';
    if (param_1 == 0) {
      DAT_ram_30079968 = 1;
      return uVar2;
    }
    puVar4 = auStack_20;
  }
  FUN_ram_4000305c(param_1,puVar4,0x10);
  return uVar2;
}


/* NanoCore 1.10, address 0x4002b8ca.
 * REA evidence: ev_a8b50c73c5deaebd4d106770fab1d02fb201087b910e4cbd6642dcc65f85563f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002b8ca(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_30 [28];
  
  FUN_ram_4002b5c2();
  if ((_DAT_ram_3007996c == 0) || (_DAT_ram_300799a4 == 0)) {
    if (param_1 == 0) {
      iVar4 = FUN_ram_4002b820(auStack_40);
      if (iVar4 != 0) goto LAB_ram_4002b94e;
    }
    else {
      iVar4 = FUN_ram_4002b634(auStack_30);
      if (iVar4 == 0) {
        FUN_ram_4000305c(auStack_40,0x30079958,0x10);
        FUN_ram_4002b4cc();
        return 0;
      }
      FUN_ram_4000305c(0x30079958,auStack_30,0x10);
      DAT_ram_30079968 = 1;
      FUN_ram_4000305c(auStack_40,auStack_30,0x10);
LAB_ram_4002b94e:
      iVar4 = FUN_ram_4002b4e4();
      if ((iVar4 != 0) && (uVar3 = iStack_3c + 0x10, uVar3 <= *(uint *)(iVar4 + 0x38))) {
        if ((_DAT_ram_3007996c == 0) ||
           (iVar5 = _DAT_ram_3007996c, uVar1 = _DAT_ram_30079970, _DAT_ram_30079970 < uVar3)) {
          iVar5 = FUN_ram_4002c39e(uVar3);
          if (iVar5 == 0) {
            if (_DAT_ram_3007996c != 0) {
              FUN_ram_4002c3f4();
              _DAT_ram_3007996c = 0;
              _DAT_ram_30079970 = 0;
              iVar5 = FUN_ram_4002c39e(uVar3);
              if (iVar5 != 0) goto LAB_ram_4002b99c;
            }
            goto LAB_ram_4002b9d0;
          }
LAB_ram_4002b99c:
          uVar1 = uVar3;
          if (_DAT_ram_3007996c != 0) {
            FUN_ram_4002c3f4();
          }
        }
        _DAT_ram_30079970 = uVar1;
        _DAT_ram_3007996c = iVar5;
        iVar4 = FUN_ram_4002b53e(iVar4,0,_DAT_ram_3007996c,uVar3);
        _DAT_ram_300799a4 = uVar3;
        if (iVar4 == 0) goto LAB_ram_4002b8f4;
        _DAT_ram_300799a4 = 0;
      }
    }
LAB_ram_4002b9d0:
    FUN_ram_4002b4cc();
    uVar2 = 0;
  }
  else {
LAB_ram_4002b8f4:
    FUN_ram_4002b4cc();
    uVar2 = 1;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x4002b9e2.
 * REA evidence: ev_3cb6b14b6f7e51ff8b9ac2c240e3bdc1f0e0f447bf9e192cfd66813d55cceba0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002b9e2(void)

{
  FUN_ram_4002b8ca(0);
  return;
}


/* NanoCore 1.10, address 0x4002b9e8.
 * REA evidence: ev_379011899ca5afdb20d4b6dfa2a3be93226157dfbeb9f064212e605f440be31a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002b9e8(uint param_1,void *param_2,uint param_3)

{
  int iVar1;
  
  if ((param_2 == (void *)0x0) || (param_3 == 0)) {
    return 0xfffffff6;
  }
  FUN_ram_4002b5c2();
  if ((_DAT_ram_3007996c == 0) || (_DAT_ram_300799a4 == 0)) {
    FUN_ram_4002b4cc();
    iVar1 = FUN_ram_4002b4e4();
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    iVar1 = FUN_ram_4002b53e(iVar1,param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    if ((param_1 <= _DAT_ram_300799a4) && (param_3 <= _DAT_ram_300799a4 - param_1)) {
      memcpy(param_2,(void *)(_DAT_ram_3007996c + param_1),param_3);
      FUN_ram_4002b4cc();
      return 0;
    }
    FUN_ram_4002b4cc();
  }
  return 0xfffffff8;
}


/* NanoCore 1.10, address 0x4002ba66.
 * REA evidence: ev_f86a6b49143bd4c2508149f23e5b824af693b75dd2cc728cf364abfe66bf06a4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002ba66(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_5c [16];
  int iStack_4c;
  uint uStack_48;
  undefined1 auStack_3c [16];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_1 == 0) {
    return 0xfffffff6;
  }
  uVar2 = 0xfffffff6;
  if (param_2 != (undefined4 *)0x0) {
    iVar3 = FUN_ram_4002b820(auStack_5c);
    if (iVar3 != 0) {
      iVar3 = FUN_ram_4002b9e8(0x10,&iStack_4c,0x10);
      if (iVar3 != 0) {
        return 0xfffffff8;
      }
      if (iStack_4c == 0x494e4458) {
        for (uVar1 = 0; uVar1 < uStack_48; uVar1 = uVar1 + 1) {
          iVar3 = FUN_ram_4002b9e8(uVar1 * 0x1c + 0x20,auStack_3c,0x1c);
          if (iVar3 != 0) {
            return 0xfffffff8;
          }
          iVar3 = FUN_ram_40005208(auStack_3c,param_1,0x10);
          if (iVar3 == 0) {
            *param_2 = uStack_2c;
            param_2[1] = uStack_28;
            param_2[2] = uStack_24;
            return 0;
          }
        }
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x4002baf0.
 * REA evidence: ev_a462a4e743aa3aa89873c6dbb25a66319243f31d2a8b3463f5d7e4417b981556
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002baf0(undefined4 param_1)

{
  FUN_ram_40047464();
  FUN_ram_40042b3a(param_1,0x10);
  return;
}


/* NanoCore 1.10, address 0x4002bb06.
 * REA evidence: ev_d87d744092ea6db2e68f3579327db0ef239082ba5ae376f2a8115a292c5312bc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002bb06(void)

{
  int iVar1;
  
  if ((_DAT_ram_300799ac == 0) || (_DAT_ram_300799b4 == 0)) {
    return;
  }
  if (_DAT_ram_300799c8 == 4) {
    FUN_ram_40042b3a();
    iVar1 = _DAT_ram_300799b4;
  }
  else {
    FUN_ram_40043064(_DAT_ram_300799b4,1);
    iVar1 = _DAT_ram_300799ac;
  }
  if (DAT_ram_300799b0 != '\0') {
    FUN_ram_40042b3a();
    return;
  }
  FUN_ram_40043064(iVar1,1);
  return;
}


/* NanoCore 1.10, address 0x4002bb88.
 * REA evidence: ev_c6bc553ce2158369bd91064616c02858025160c720e92e32599edef8273b96ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002bb88(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40047b04();
  if (iVar1 != 0) {
    iVar1 = FUN_ram_40047b2c();
    FUN_ram_40047d7c(param_1,iVar1 + -1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4002bbb2.
 * REA evidence: ev_521aae5ef4ad957bc051933ef770bb155f1b1ed01273b77df6e3c34bc8ab1899
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002bbb2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_40042b1a();
  FUN_ram_4002baf0();
  FUN_ram_40043faa(uVar1,param_2,param_3);
  FUN_ram_40044038(uVar1,param_4,param_5);
  FUN_ram_40047968(uVar1,param_6,0);
  FUN_ram_40047986(uVar1,0xff,0);
  FUN_ram_400479c4(uVar1,0,0);
  FUN_ram_40047a94(uVar1,0,0);
  return;
}


/* NanoCore 1.10, address 0x4002bc14.
 * REA evidence: ev_0c1ad8d13db6ee9c63cb20e43c10d4a589df28d45377d94c0dcc74e0864fe810
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002bc14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_30;
  
  iVar1 = FUN_ram_40022854();
  if (2 < param_1 - 2U) {
    return 0xffffffff;
  }
  if (_DAT_ram_300799c0 == 0) {
    local_30 = local_30 & 0xff000000;
    FUN_ram_4004c24c();
    FUN_ram_4004c3f8();
    _DAT_ram_300799c0 = FUN_ram_40042b1a();
    FUN_ram_4002baf0();
    FUN_ram_40044038(_DAT_ram_300799c0,0x20000064);
    FUN_ram_400440bc(_DAT_ram_300799c0,9,0,0);
    FUN_ram_40047968(_DAT_ram_300799c0,local_30,0);
    FUN_ram_40047986(_DAT_ram_300799c0,0xff,0);
    FUN_ram_400479c4(_DAT_ram_300799c0,0,0);
    FUN_ram_40047a94(_DAT_ram_300799c0,0,0);
    FUN_ram_40043064(_DAT_ram_300799c0,2);
    FUN_ram_4002bb88(_DAT_ram_300799c0);
    _DAT_ram_300799ac = FUN_ram_40042b1a(_DAT_ram_300799c0);
    FUN_ram_4002baf0();
    FUN_ram_40044038(_DAT_ram_300799ac,0x3c,0x1e);
    FUN_ram_400440bc(_DAT_ram_300799ac,9,0,0);
    uVar2 = FUN_ram_40042b1a(_DAT_ram_300799ac);
    FUN_ram_4002baf0();
    FUN_ram_40043faa(uVar2,0x34,9);
    FUN_ram_40044038(uVar2,6,0xc);
    FUN_ram_40047968(uVar2,local_30,0);
    FUN_ram_40047986(uVar2,0xff,0);
    FUN_ram_40047994(uVar2,0xd9d8d0,0);
    FUN_ram_400479b4(uVar2,0xff,0);
    FUN_ram_400479c4(uVar2,2,0);
    FUN_ram_40047a94(uVar2,0,0);
    uVar2 = FUN_ram_40042b1a(_DAT_ram_300799ac);
    FUN_ram_4002baf0();
    FUN_ram_40043faa(uVar2,1,2);
    FUN_ram_40044038(uVar2,0x34,0x1a);
    FUN_ram_40047968(uVar2,local_30,0);
    FUN_ram_40047986(uVar2,0xff,0);
    FUN_ram_40047994(uVar2,0xd9d8d0,0);
    FUN_ram_400479b4(uVar2,0xff,0);
    FUN_ram_400479c4(uVar2,2,0);
    FUN_ram_40047a94(uVar2,1,0);
    FUN_ram_4002bbb2(_DAT_ram_300799ac,6,7,4,0x10,0xc92f36);
    _DAT_ram_300799b4 = FUN_ram_40042b1a(_DAT_ram_300799ac);
    FUN_ram_4002baf0();
    FUN_ram_40043faa(_DAT_ram_300799b4,0x17,6);
    FUN_ram_40044038(_DAT_ram_300799b4,0xc,0x12);
    FUN_ram_4002bbb2(_DAT_ram_300799b4,5,0,4,2,0xf2bc3d);
    FUN_ram_4002bbb2(_DAT_ram_300799b4,4,2,4,2,0xf2bc3d);
    FUN_ram_4002bbb2(_DAT_ram_300799b4,3,4,4,2,0xf2bc3d);
    FUN_ram_4002bbb2(_DAT_ram_300799b4,3,6,8,1,0xf2bc3d);
    FUN_ram_4002bbb2(_DAT_ram_300799b4,2,7,8,1,0xf2bc3d);
    FUN_ram_4002bbb2(_DAT_ram_300799b4,1,8,8,1,0xf2bc3d);
    FUN_ram_4002bbb2(_DAT_ram_300799b4,5,9,3,2,0xf2bc3d);
    FUN_ram_4002bbb2(_DAT_ram_300799b4,5,0xb,2,1,0xf2bc3d);
    FUN_ram_4002bbb2(_DAT_ram_300799b4,4,0xc,2,2,0xf2bc3d);
    FUN_ram_4002bbb2(_DAT_ram_300799b4,4,0xe,1,2,0xf2bc3d);
    FUN_ram_4002bbb2(_DAT_ram_300799b4,3,0x10,1,1,0xf2bc3d);
    _DAT_ram_300799c8 = param_1;
  }
  else {
    uVar3 = _DAT_ram_300799c8 - 2;
    _DAT_ram_300799c8 = param_1;
    if (uVar3 < 2) {
      if (param_1 - 2U == 2) {
        _DAT_ram_300799c8 = 4;
      }
      else if (_DAT_ram_300799c4 == iVar1) goto LAB_ram_4002bcb0;
    }
  }
  DAT_ram_300799b0 = 1;
  _DAT_ram_300799c4 = iVar1;
  _DAT_ram_300799b8 = FUN_ram_40055cfa();
  DAT_ram_300799bc = 0;
  DAT_ram_300799be = 0;
  DAT_ram_300799bd = 0;
LAB_ram_4002bcb0:
  FUN_ram_4002bb06();
  FUN_ram_4002bb88(_DAT_ram_300799c0);
  FUN_ram_40044572(_DAT_ram_300799c0);
  return 0;
}


/* NanoCore 1.10, address 0x4002bf64.
 * REA evidence: ev_3582a432f2b628792fa25ae4482e0af3ccf8419d9cd2b68b9d64b62f28b4f116
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002bf64(void)

{
  if (_DAT_ram_300799c0 != 0) {
    FUN_ram_40047cf2();
  }
  _DAT_ram_300799c0 = 0;
  _DAT_ram_300799ac = 0;
  _DAT_ram_300799b4 = 0;
  _DAT_ram_300799c8 = 0;
  _DAT_ram_300799c4 = 0;
  DAT_ram_300799b0 = 0;
  DAT_ram_300799bc = 0;
  DAT_ram_300799be = 0;
  DAT_ram_300799bd = 0;
  _DAT_ram_300799b8 = 0;
  return;
}


/* NanoCore 1.10, address 0x4002bfcc.
 * REA evidence: ev_bb3768265c7632e682943100be744d9337ea8a811aa242d9a354611feb20aa11
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002bfcc(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = FUN_ram_4002277a();
  iVar2 = FUN_ram_40022854();
  if (iVar1 - 2U < 3) {
    if (((_DAT_ram_300799c0 == 0) || (_DAT_ram_300799c8 != iVar1)) ||
       ((iVar1 - 2U != 2 && (_DAT_ram_300799c4 != iVar2)))) {
      FUN_ram_4002bc14(iVar1);
    }
    else {
      iVar1 = FUN_ram_40055cfa();
      uVar4 = _DAT_ram_300799c8 - 2;
      if ((uVar4 < 2) && (DAT_ram_300799bc == '\0')) {
        DAT_ram_300799bc = '\x01';
        _DAT_ram_300799b8 = iVar1;
        FUN_ram_4002298e(_DAT_ram_300799c4);
      }
      else if (499 < (uint)(iVar1 - _DAT_ram_300799b8)) {
        if ((uVar4 < 2) && (2 < DAT_ram_300799be)) {
          _DAT_ram_300799b8 = iVar1;
          if (DAT_ram_300799bd == '\0') {
            DAT_ram_300799bd = '\x01';
            FUN_ram_400229da(_DAT_ram_300799c4);
          }
        }
        else {
          if ((uVar4 < 2) && (DAT_ram_300799b0 != '\0')) {
            DAT_ram_300799be = DAT_ram_300799be + 1;
          }
          DAT_ram_300799b0 = DAT_ram_300799b0 == '\0';
          _DAT_ram_300799b8 = iVar1;
          FUN_ram_4002bb06();
          FUN_ram_40044572(_DAT_ram_300799c0);
        }
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    if (_DAT_ram_300799c0 != 0) {
      FUN_ram_4002bf64();
      uVar3 = 0;
    }
  }
  return uVar3;
}


