/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40049000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x400490f4.
 * REA evidence: ev_0608190e68ea484b3eaf3090eed0269017fd88fbcbb502d2a0234db645a754dc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40049330) */
/* WARNING: Removing unreachable block (ram,0x4004936a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400490f4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined1 auStack_d8 [16];
  int aiStack_c8 [4];
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  uint uStack_a8;
  int *piStack_a4;
  int iStack_8c;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined1 uStack_5c;
  byte bStack_5b;
  undefined1 auStack_54 [16];
  int iStack_44;
  
  iVar1 = FUN_ram_40043b92(param_2,1);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_40044a44(param_2);
    if (iVar1 == 0) {
      FUN_ram_40048e46(param_1,param_2);
      return;
    }
    uVar2 = FUN_ram_40047a70(param_2,0,0x60);
    if (1 < (uVar2 & 0xff)) {
      uStack_a8 = uVar2;
      uVar3 = FUN_ram_400449f0(param_2);
      FUN_ram_40045052(param_2,auStack_d8);
      FUN_ram_4004a3d2(auStack_d8,uVar3);
      if (iVar1 == 2) {
        FUN_ram_4000304c(&iStack_b8,auStack_d8,0x10);
        FUN_ram_400452d0(param_2,&iStack_b8,0);
        iVar4 = FUN_ram_4004a406(aiStack_c8,param_1 + 0x18,&iStack_b8);
        if (iVar4 == 0) {
          return;
        }
        FUN_ram_4000304c(&uStack_a8,aiStack_c8,0x10);
        FUN_ram_400452d0(param_2,&uStack_a8,2);
        iVar4 = FUN_ram_4004a406(&uStack_a8,&uStack_a8,auStack_d8);
        if (iVar4 == 0) {
          return;
        }
        FUN_ram_4000304c(&iStack_e8,&uStack_a8,0x10);
        FUN_ram_4004a3d2(&iStack_e8,5,5);
      }
      else {
        if (iVar1 != 1) {
          return;
        }
        iVar4 = FUN_ram_4004a406(&uStack_a8,param_1 + 0x18,auStack_d8);
        if (iVar4 == 0) {
          return;
        }
        FUN_ram_4000304c(&iStack_e8,&uStack_a8,0x10);
      }
      uVar9 = (iStack_dc - iStack_e4) + 1;
      uVar10 = uVar9;
      if (iVar1 == 1) {
        iVar1 = (iStack_e0 - iStack_e8) + 1;
        iVar4 = FUN_ram_4004ad00(*(undefined1 *)(_DAT_ram_30080c70 + 0x41));
        if (iVar1 == 0) {
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = 0x6000 / iVar1;
        }
        iVar1 = iVar4 + 7 >> 3;
        if (iVar1 == 0) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (int)uVar10 / iVar1;
        }
        uVar10 = uVar10 >> 2;
      }
      iStack_b8 = iStack_e8;
      iStack_b0 = iStack_e0;
      iStack_b4 = iStack_e4;
      iStack_ac = iStack_e4;
      while (iStack_ac < iStack_dc) {
        iStack_ac = iStack_b4 + -1 + uVar9;
        if (iStack_dc < iStack_ac) {
          iStack_ac = iStack_dc;
        }
        iVar1 = FUN_ram_4004a580(&iStack_b8,param_2 + 0x14);
        if (iVar1 == 0) {
LAB_ram_400492b2:
          iStack_ac = iStack_b4 + -1 + uVar10;
          if (iStack_dc < iStack_ac) {
            iStack_ac = iStack_dc;
          }
          uVar3 = 0x10;
        }
        else {
          uStack_a8 = 0;
          piStack_a4 = &iStack_b8;
          FUN_ram_40044b50(param_2,0x15,&uStack_a8);
          uVar3 = 0x12;
          if (uStack_a8 != 0) goto LAB_ram_400492b2;
        }
        iVar1 = FUN_ram_4004d874(param_1,uVar3,&iStack_b8);
        FUN_ram_40048e46(iVar1,param_2);
        uVar5 = FUN_ram_40047a70(param_2,0,0x6f);
        uStack_a8 = uVar5;
        uStack_a8 = FUN_ram_40047a70(param_2,0,0x70);
        if (((uVar5 & 0x60000000) == 0x20000000) && (uVar8 = uVar5 & 0x9fffffff, (int)uVar8 < 0x7d1)
           ) {
          if (1000 < (int)uVar8) {
            uVar8 = 1000 - uVar8;
          }
          uVar5 = (int)(((*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14)) + 1) * uVar8) / 100;
        }
        uVar8 = uStack_a8;
        if (((uStack_a8 & 0x60000000) == 0x20000000) &&
           (uVar6 = uStack_a8 & 0x9fffffff, (int)uVar6 < 0x7d1)) {
          if (1000 < (int)uVar6) {
            uVar6 = 1000 - uVar6;
          }
          uVar8 = (int)(((*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x18)) + 1) * uVar6) / 100;
        }
        FUN_ram_4004e240(&uStack_a8);
        iStack_68 = (uVar5 + *(int *)(param_2 + 0x14)) - *(int *)(iVar1 + 4);
        uStack_5c = (undefined1)uVar2;
        iStack_64 = (uVar8 + *(int *)(param_2 + 0x18)) - *(int *)(iVar1 + 8);
        aiStack_c8[0] = FUN_ram_40047a70(param_2,0,0x6e);
        bVar7 = false;
        for (iVar4 = aiStack_c8[0]; 0xe10 < iVar4; iVar4 = iVar4 + -0xe10) {
          bVar7 = true;
        }
        iStack_7c = aiStack_c8[0];
        if (bVar7) {
          iStack_7c = iVar4;
        }
        bVar7 = false;
        for (iVar4 = iStack_7c; iVar4 < 0; iVar4 = iVar4 + 0xe10) {
          bVar7 = true;
        }
        if (bVar7) {
          iStack_7c = iVar4;
        }
        aiStack_c8[0] = FUN_ram_40047a70(param_2,0,0x6c);
        iStack_78 = aiStack_c8[0];
        aiStack_c8[0] = FUN_ram_40047a70(param_2,0,0x6d);
        iStack_74 = aiStack_c8[0];
        aiStack_c8[0] = FUN_ram_40047a70(param_2,0,0x71);
        iStack_70 = aiStack_c8[0];
        aiStack_c8[0] = FUN_ram_40047a70(param_2,0,0x72);
        iStack_6c = aiStack_c8[0];
        aiStack_c8[0] = FUN_ram_40047a70(param_2,0,0x67);
        bStack_5b = (byte)((*(uint *)(_DAT_ram_30080c70 + 0x40) & 1) << 4) |
                    (byte)aiStack_c8[0] & 0xf | bStack_5b & 0xe0;
        aiStack_c8[0] = FUN_ram_40047a70(param_2,0,0x73);
        iStack_44 = aiStack_c8[0];
        FUN_ram_4000304c(auStack_54,auStack_d8,0x10);
        iStack_8c = iVar1;
        FUN_ram_4004e49c(param_1,&uStack_a8,&iStack_b8);
        iStack_b4 = iStack_ac + 1;
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40049464.
 * REA evidence: ev_97165affbe37261e874df0c39cf46c2ffe7fae078ecd19073230155f90763e4f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40049464(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 != 0) || (param_2 = FUN_ram_4004d346(_DAT_ram_30080c70), param_2 != 0)) {
    FUN_ram_400490f4(param_1,param_2);
    iVar2 = FUN_ram_40048a76(param_2);
    while (iVar2 != 0) {
      iVar3 = FUN_ram_40048a9e(iVar2);
      bVar1 = false;
      for (iVar4 = 0; iVar4 != iVar3; iVar4 = iVar4 + 1) {
        if (bVar1) {
          FUN_ram_400490f4(param_1);
        }
        else {
          bVar1 = param_2 == *(int *)(**(int **)(iVar2 + 8) + iVar4 * 4);
        }
      }
      FUN_ram_40044b50(iVar2,0x1a,param_1);
      FUN_ram_40044b50(iVar2,0x1b,param_1);
      FUN_ram_40044b50(iVar2,0x1c,param_1);
      iVar3 = FUN_ram_40048a76(iVar2);
      param_2 = iVar2;
      iVar2 = iVar3;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40049506.
 * REA evidence: ev_0819b59af3548138e0d64dfac12327f43bc1910ff0c49cbd76c6d2e3992fa691
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40049506(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iVar1 = _DAT_ram_30080c70;
  puVar6 = param_1 + 6;
  FUN_ram_4000304c(_DAT_ram_30080c70 + 0x300,puVar6,0x10);
  iVar1 = FUN_ram_4004d33e(iVar1);
  if (iVar1 == 0) {
    FUN_ram_40048d7c(_DAT_ram_30080c70);
  }
  iVar2 = FUN_ram_4004ad1e(*(undefined1 *)(_DAT_ram_30080c70 + 0x41));
  iVar1 = _DAT_ram_30080c70;
  if (iVar2 != 0) {
    FUN_ram_4000304c(&local_30,_DAT_ram_30080c70 + 0x300,0x10);
    if (*(int *)(iVar1 + 0x3c) == 0) {
      FUN_ram_4004a3ec(&local_30,-*(int *)(iVar1 + 0x300),-*(int *)(iVar1 + 0x304));
    }
    FUN_ram_4004dcda(*param_1,&local_30);
  }
  uVar3 = FUN_ram_4004d346(_DAT_ram_30080c70);
  iVar1 = FUN_ram_40048dce(puVar6,uVar3);
  if (*(int *)(_DAT_ram_30080c70 + 700) == 0) {
    iVar2 = 0;
    iVar4 = iVar1;
joined_r0x400496de:
    if (iVar4 == 0) {
      iVar2 = 0;
      uVar3 = FUN_ram_4004d38e(_DAT_ram_30080c70);
      FUN_ram_40049464(param_1,uVar3);
    }
  }
  else {
    iVar2 = FUN_ram_40048dce(puVar6,*(int *)(_DAT_ram_30080c70 + 700));
    iVar4 = iVar2;
    if (iVar1 == 0) goto joined_r0x400496de;
  }
  if ((*(byte *)(_DAT_ram_30080c70 + 0x2d4) & 1) == 0) {
    if (*(int *)(_DAT_ram_30080c70 + 700) != 0) {
      iVar4 = *(int *)(_DAT_ram_30080c70 + 700);
      if (iVar2 != 0) {
        iVar4 = iVar2;
      }
      FUN_ram_40049464(param_1,iVar4);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(_DAT_ram_30080c70 + 0x2b8);
    }
  }
  else {
    if (iVar1 == 0) {
      iVar1 = *(int *)(_DAT_ram_30080c70 + 0x2b8);
    }
    FUN_ram_40049464(param_1,iVar1);
    if (*(int *)(_DAT_ram_30080c70 + 700) == 0) goto LAB_ram_400495e8;
    iVar1 = *(int *)(_DAT_ram_30080c70 + 700);
    if (iVar2 != 0) {
      iVar1 = iVar2;
    }
  }
  FUN_ram_40049464(param_1,iVar1);
LAB_ram_400495e8:
  uVar3 = FUN_ram_4004d36a(_DAT_ram_30080c70);
  FUN_ram_40049464(param_1,uVar3);
  uVar3 = FUN_ram_4004d37c(_DAT_ram_30080c70);
  FUN_ram_40049464(param_1,uVar3);
  iVar1 = _DAT_ram_30080c70;
  piVar5 = *(int **)(_DAT_ram_30080c70 + 0x2a8);
  while (piVar5[10] != 0) {
    FUN_ram_4004d52c();
    FUN_ram_4004d6b4();
  }
  iVar2 = FUN_ram_4004d33e(iVar1);
  if (iVar2 != 0) {
    FUN_ram_40048d7c(_DAT_ram_30080c70);
  }
  *(undefined4 *)(iVar1 + 0x30) = 1;
  if (((*(uint *)(iVar1 + 0x38) & 1) == 0) || (-1 < *(int *)(iVar1 + 0x38) << 0x1e)) {
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x34) = 1;
  }
  iVar2 = *(int *)(iVar1 + 0x34);
  if (*(int *)(iVar1 + 0x28) != 0) {
    uVar3 = *(undefined4 *)(*piVar5 + 0x10);
    local_30 = *(int *)(iVar1 + 0x300) + *(int *)(iVar1 + 0x10);
    iStack_28 = *(int *)(iVar1 + 0x308) + *(int *)(iVar1 + 0x10);
    iStack_2c = *(int *)(iVar1 + 0x304) + *(int *)(iVar1 + 0x14);
    iStack_24 = *(int *)(iVar1 + 0x30c) + *(int *)(iVar1 + 0x14);
    FUN_ram_4004d3a0(iVar1,0x38,&local_30);
    (**(code **)(iVar1 + 0x28))(iVar1,&local_30,uVar3);
    FUN_ram_4004d3a0(iVar1,0x39,&local_30);
  }
  iVar4 = FUN_ram_4004d33e(iVar1);
  if ((iVar4 != 0) && ((*(int *)(iVar1 + 0x3c) != 1 || (iVar2 != 0)))) {
    iVar2 = *(int *)(iVar1 + 0x1c);
    if (*(int *)(iVar1 + 0x24) == iVar2) {
      iVar2 = *(int *)(iVar1 + 0x20);
    }
    *(int *)(iVar1 + 0x24) = iVar2;
  }
  return;
}


/* NanoCore 1.11, address 0x400496e4.
 * REA evidence: ev_c68b54d087784eb3cfaf35b9402988d4a606f3e23a5038aed90823c14f8f3aed
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400496e4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 auStack_20 [5];
  
  if (((param_1 != 0) || (param_1 = FUN_ram_4004d1be(), param_1 != 0)) &&
     (iVar2 = FUN_ram_4004d458(param_1), iVar2 != 0)) {
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x264) = 0;
    }
    else {
      local_30 = 0;
      uStack_2c = 0;
      iStack_28 = FUN_ram_4004d1dc(param_1);
      iStack_28 = iStack_28 + -1;
      iStack_24 = FUN_ram_4004d1fe(param_1);
      iStack_24 = iStack_24 + -1;
      iVar2 = FUN_ram_4004a406(auStack_20,param_2,&local_30);
      if (iVar2 != 0) {
        if (*(int *)(param_1 + 0x3c) == 2) {
          FUN_ram_4000304c(param_1 + 0x44,&local_30,0x10);
          *(undefined4 *)(param_1 + 0x264) = 1;
        }
        else {
          iVar2 = FUN_ram_4004d3a0(param_1,0x30,auStack_20);
          uVar1 = 0;
          if (iVar2 != 1) {
            return;
          }
          for (; uVar1 < *(uint *)(param_1 + 0x264); uVar1 = uVar1 + 1 & 0xffff) {
            iVar2 = FUN_ram_4004a5ae(auStack_20,uVar1 * 0x10 + 0x44 + param_1,0);
            if (iVar2 != 0) {
              return;
            }
          }
          puVar4 = auStack_20;
          if (0x1f < *(uint *)(param_1 + 0x264)) {
            *(undefined4 *)(param_1 + 0x264) = 0;
            puVar4 = &local_30;
          }
          iVar2 = *(int *)(param_1 + 0x264);
          iVar3 = iVar2 * 0x10 + param_1;
          *(undefined4 *)(iVar3 + 0x44) = *puVar4;
          *(undefined4 *)(iVar3 + 0x48) = puVar4[1];
          *(undefined4 *)(iVar3 + 0x4c) = puVar4[2];
          *(undefined4 *)(iVar3 + 0x50) = puVar4[3];
          *(int *)(param_1 + 0x264) = iVar2 + 1;
        }
        FUN_ram_4004d3a0(param_1,0x33,0);
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x400497c6.
 * REA evidence: ev_9b2970e2197f49c9c82d8ae2f3d88eed98fcc22534576ca5ba1dd500d6270448
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400497c6(void)

{
  return _DAT_ram_30080c70;
}


/* NanoCore 1.11, address 0x400497d0.
 * REA evidence: ev_e9f87d4076ee1ad2332cb66b7676cfe6281190f45fdd49c01388f7f2c0068048
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400497d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  int aiStack_80 [19];
  
  if (param_1 == 0) {
    _DAT_ram_30080c70 = FUN_ram_4004d1be();
  }
  else {
    _DAT_ram_30080c70 = *(int *)(param_1 + 0xc);
    FUN_ram_4004c7fe();
  }
  if ((((_DAT_ram_30080c70 == 0) || (iVar13 = *(int *)(_DAT_ram_30080c70 + 0x24), iVar13 == 0)) ||
      (*(int *)(iVar13 + 0x10) == 0)) || (*(int *)(iVar13 + 0xc) == 0)) {
    return;
  }
  FUN_ram_4004d3a0(_DAT_ram_30080c70,0x34,0);
  FUN_ram_40045f80(*(undefined4 *)(_DAT_ram_30080c70 + 0x2b8));
  if (*(int *)(_DAT_ram_30080c70 + 700) != 0) {
    FUN_ram_40045f80();
  }
  uVar14 = 0;
  FUN_ram_40045f80(*(undefined4 *)(_DAT_ram_30080c70 + 0x2c4));
  FUN_ram_40045f80(*(undefined4 *)(_DAT_ram_30080c70 + 0x2c8));
  FUN_ram_40045f80(*(undefined4 *)(_DAT_ram_30080c70 + 0x2cc));
  if (*(int *)(_DAT_ram_30080c70 + 0x2b8) != 0) {
    for (; uVar14 < *(uint *)(_DAT_ram_30080c70 + 0x264); uVar14 = uVar14 + 1) {
      if (*(char *)(_DAT_ram_30080c70 + uVar14 + 0x244) == '\0') {
        iVar13 = uVar14 * 0x10 + 0x44;
        for (uVar7 = 0; uVar7 < *(uint *)(_DAT_ram_30080c70 + 0x264); uVar7 = uVar7 + 1) {
          if ((*(char *)(_DAT_ram_30080c70 + uVar7 + 0x244) == '\0') && (uVar14 != uVar7)) {
            iVar2 = uVar7 * 0x10 + 0x44;
            iVar15 = FUN_ram_4004a580(_DAT_ram_30080c70 + iVar13,_DAT_ram_30080c70 + iVar2);
            if (iVar15 != 0) {
              FUN_ram_4004a452(aiStack_80,_DAT_ram_30080c70 + iVar13,_DAT_ram_30080c70 + iVar2);
              uVar4 = FUN_ram_4004a3bc(aiStack_80);
              iVar3 = FUN_ram_4004a3bc(_DAT_ram_30080c70 + iVar13);
              iVar2 = FUN_ram_4004a3bc(_DAT_ram_30080c70 + iVar2);
              iVar15 = _DAT_ram_30080c70;
              if (uVar4 < (uint)(iVar3 + iVar2)) {
                iVar2 = _DAT_ram_30080c70 + uVar14 * 0x10;
                *(int *)(iVar2 + 0x44) = aiStack_80[0];
                *(int *)(iVar2 + 0x48) = aiStack_80[1];
                *(int *)(iVar2 + 0x4c) = aiStack_80[2];
                *(int *)(iVar2 + 0x50) = aiStack_80[3];
                *(undefined1 *)(iVar15 + uVar7 + 0x244) = 1;
              }
            }
          }
        }
      }
    }
    if (((*(int *)(_DAT_ram_30080c70 + 0x3c) == 1) && (iVar13 = FUN_ram_4004d33e(), iVar13 != 0)) &&
       (iVar13 = FUN_ram_4004b5a8(_DAT_ram_30080c70 + 0x26c), iVar13 == 0)) {
      FUN_ram_40048d7c(_DAT_ram_30080c70);
      iVar15 = *(int *)(_DAT_ram_30080c70 + 0x24);
      iVar13 = *(int *)(_DAT_ram_30080c70 + 0x1c);
      if (iVar15 == iVar13) {
        iVar13 = *(int *)(_DAT_ram_30080c70 + 0x20);
      }
      iVar2 = FUN_ram_4004d1dc();
      iVar3 = FUN_ram_4004d1fe(_DAT_ram_30080c70);
      memset(aiStack_80,0,0x40);
      for (uVar14 = 0; uVar14 < *(uint *)(_DAT_ram_30080c70 + 0x264); uVar14 = uVar14 + 1 & 0xffff)
      {
        if (*(char *)(_DAT_ram_30080c70 + uVar14 + 0x244) == '\0') {
          iVar5 = FUN_ram_4004b518(_DAT_ram_30080c70 + 0x26c);
          while (iVar16 = iVar5, iVar16 != 0) {
            iVar5 = FUN_ram_4004b524(_DAT_ram_30080c70 + 0x26c,iVar16);
            iVar17 = FUN_ram_4004a636(aiStack_80,iVar16,_DAT_ram_30080c70 + uVar14 * 0x10 + 0x44);
            if (iVar17 != -1) {
              for (iVar6 = 0; (char)iVar6 < iVar17; iVar6 = iVar6 + 1) {
                uVar8 = FUN_ram_4004b398(_DAT_ram_30080c70 + 0x26c,iVar16);
                FUN_ram_4000304c(uVar8,aiStack_80 + iVar6 * 4,0x10);
              }
              FUN_ram_4004b45a();
              FUN_ram_4005ab56(iVar16);
            }
          }
        }
      }
      iStack_88 = iVar2 + -1;
      iStack_84 = iVar3 + -1;
      uStack_90 = 0;
      uStack_8c = 0;
      for (iVar2 = FUN_ram_4004b518(_DAT_ram_30080c70 + 0x26c); iVar2 != 0;
          iVar2 = FUN_ram_4004b524(_DAT_ram_30080c70 + 0x26c,iVar2)) {
        FUN_ram_4004a406(iVar2,iVar2,&uStack_90);
        FUN_ram_4004dd7a(iVar15,iVar2,iVar13,iVar2);
      }
      FUN_ram_4004b4ce(_DAT_ram_30080c70 + 0x26c);
    }
    iVar13 = *(int *)(_DAT_ram_30080c70 + 0x264);
    if (iVar13 != 0) {
      do {
        iVar13 = iVar13 + -1;
        if (iVar13 < 0) {
          iVar13 = 0;
          break;
        }
      } while (*(char *)(_DAT_ram_30080c70 + 0x244 + iVar13) != '\0');
      FUN_ram_4004d3a0(_DAT_ram_30080c70,0x36,0);
      iVar15 = _DAT_ram_30080c70;
      *(byte *)(_DAT_ram_30080c70 + 0x38) = *(byte *)(_DAT_ram_30080c70 + 0x38) & 0xfe;
      *(byte *)(iVar15 + 0x38) = *(byte *)(iVar15 + 0x38) & 0xfd;
      *(byte *)(iVar15 + 0x40) = *(byte *)(iVar15 + 0x40) | 2;
      for (iVar15 = 0; iVar2 = _DAT_ram_30080c70, iVar15 < *(int *)(_DAT_ram_30080c70 + 0x264);
          iVar15 = iVar15 + 1) {
        if (*(char *)(_DAT_ram_30080c70 + iVar15 + 0x244) == '\0') {
          if (iVar15 == iVar13) {
            *(byte *)(_DAT_ram_30080c70 + 0x38) = *(byte *)(_DAT_ram_30080c70 + 0x38) | 1;
          }
          puVar1 = *(undefined4 **)(iVar2 + 0x2a8);
          iVar3 = *(int *)(iVar2 + 0x3c);
          *(byte *)(iVar2 + 0x38) = *(byte *)(iVar2 + 0x38) & 0xfd;
          *puVar1 = *(undefined4 *)(iVar2 + 0x24);
          if (iVar3 == 0) {
            iVar5 = iVar15 * 0x10 + iVar2;
            iVar17 = *(int *)(iVar5 + 0x50);
            iVar16 = *(int *)(iVar5 + 0x4c);
            iVar3 = *(int *)(iVar5 + 0x44);
            uVar14 = (iVar17 - *(int *)(iVar5 + 0x48)) + 1;
            iVar2 = FUN_ram_4004d1fe(iVar2);
            if (iVar17 < iVar2) {
              iVar2 = *(int *)(iVar5 + 0x50);
            }
            else {
              iVar2 = FUN_ram_4004d1fe(_DAT_ram_30080c70);
              iVar2 = iVar2 + -1;
            }
            iVar17 = _DAT_ram_30080c70;
            iVar6 = FUN_ram_4004ad1e(*(undefined1 *)(_DAT_ram_30080c70 + 0x41));
            uVar9 = 0x10;
            if (iVar6 == 0) {
              uVar9 = *(undefined1 *)(iVar17 + 0x41);
            }
            uVar7 = FUN_ram_4004d9f0((iVar16 - iVar3) + 1,uVar9);
            aiStack_80[0] = 0;
            aiStack_80[2] = 0;
            if (uVar7 == 0) {
              uVar7 = 0xffffffff;
            }
            else {
              uVar7 = *(uint *)(*(int *)(iVar17 + 0x24) + 0xc) / uVar7;
            }
            aiStack_80[1] = 0;
            uVar4 = uVar14;
            if ((int)uVar7 < (int)uVar14) {
              uVar14 = uVar7;
              uVar4 = uVar7;
            }
            do {
              uVar7 = uVar14 - 1;
              aiStack_80[3] = uVar7;
              FUN_ram_4004d3a0(_DAT_ram_30080c70,0x30,aiStack_80);
              iVar3 = 0;
              if ((aiStack_80[3] - aiStack_80[1]) + 1 <= (int)uVar4) {
                if (0 < (int)uVar14) {
                  iVar3 = aiStack_80[3] + 1;
                }
                break;
              }
              uVar14 = uVar7;
            } while (0 < (int)uVar7);
            iVar16 = 0;
            iVar17 = *(int *)(iVar5 + 0x48);
            while( true ) {
              iVar6 = iVar3 + iVar17 + -1;
              if (iVar2 < iVar6) break;
              uVar11 = *(undefined4 *)(iVar5 + 0x44);
              uVar12 = *(undefined4 *)(iVar5 + 0x4c);
              uVar8 = *(undefined4 *)(_DAT_ram_30080c70 + 0x24);
              puVar1[1] = uVar11;
              *puVar1 = uVar8;
              puVar1[2] = iVar17;
              puVar1[3] = uVar12;
              puVar1[4] = iVar6;
              puVar1[6] = uVar11;
              puVar1[7] = iVar17;
              puVar1[8] = uVar12;
              puVar1[9] = iVar6;
              FUN_ram_40048db2(puVar1);
              if (iVar2 == iVar6) {
                *(byte *)(_DAT_ram_30080c70 + 0x38) = *(byte *)(_DAT_ram_30080c70 + 0x38) | 2;
              }
              FUN_ram_40049506(puVar1);
              iVar16 = iVar6;
              iVar17 = iVar3 + iVar17;
            }
            if (iVar2 == iVar16) goto LAB_ram_40049b96;
            uVar12 = *(undefined4 *)(iVar5 + 0x4c);
            uVar11 = *(undefined4 *)(iVar5 + 0x44);
            uVar8 = *(undefined4 *)(_DAT_ram_30080c70 + 0x24);
            puVar1[2] = iVar17;
            puVar1[3] = uVar12;
            puVar1[7] = iVar17;
            puVar1[8] = uVar12;
            *puVar1 = uVar8;
            puVar1[1] = uVar11;
            puVar1[4] = iVar2;
            puVar1[6] = uVar11;
            puVar1[9] = iVar2;
            FUN_ram_40048db2(puVar1);
            *(byte *)(_DAT_ram_30080c70 + 0x38) = *(byte *)(_DAT_ram_30080c70 + 0x38) | 2;
          }
          else {
            puVar1[1] = 0;
            puVar1[2] = 0;
            iVar3 = FUN_ram_4004d1dc(iVar2);
            puVar1[3] = iVar3 + -1;
            iVar3 = FUN_ram_4004d1fe(_DAT_ram_30080c70);
            puVar1[4] = iVar3 + -1;
            FUN_ram_40048db2(puVar1);
            iVar3 = FUN_ram_4004d1dc(_DAT_ram_30080c70);
            iVar5 = FUN_ram_4004d1fe(_DAT_ram_30080c70);
            FUN_ram_4004a39e(aiStack_80,0,0,iVar3 + -1,iVar5 + -1);
            if (*(int *)(_DAT_ram_30080c70 + 0x3c) == 2) {
              piVar10 = aiStack_80;
              *(byte *)(_DAT_ram_30080c70 + 0x38) = *(byte *)(_DAT_ram_30080c70 + 0x38) | 2;
            }
            else {
              if (*(int *)(_DAT_ram_30080c70 + 0x3c) != 1) goto LAB_ram_40049b96;
              *(byte *)(_DAT_ram_30080c70 + 0x38) =
                   *(byte *)(_DAT_ram_30080c70 + 0x38) & 0xfd |
                   (byte)((*(uint *)(_DAT_ram_30080c70 + 0x38) & 1) << 1);
              piVar10 = (int *)((iVar15 + 4) * 0x10 + iVar2 + 4);
            }
            FUN_ram_4000304c(puVar1 + 6,piVar10,0x10);
          }
          FUN_ram_40049506(puVar1);
        }
LAB_ram_40049b96:
      }
      *(byte *)(_DAT_ram_30080c70 + 0x40) = *(byte *)(_DAT_ram_30080c70 + 0x40) & 0xfd;
    }
    if (*(int *)(_DAT_ram_30080c70 + 0x264) == 0) goto LAB_ram_40049864;
    FUN_ram_4004d3a0(_DAT_ram_30080c70,0x37,0);
    iVar13 = FUN_ram_4004d33e(_DAT_ram_30080c70);
    if ((iVar13 != 0) && (*(int *)(_DAT_ram_30080c70 + 0x3c) == 1)) {
      FUN_ram_40048d7c();
      for (uVar14 = 0; uVar14 < *(uint *)(_DAT_ram_30080c70 + 0x264); uVar14 = uVar14 + 1) {
        if (*(char *)(_DAT_ram_30080c70 + uVar14 + 0x244) == '\0') {
          uVar8 = FUN_ram_4004b410(_DAT_ram_30080c70 + 0x26c);
          FUN_ram_4000304c(uVar8,_DAT_ram_30080c70 + (uVar14 + 4) * 0x10 + 4,0x10);
        }
      }
    }
    thunk_FUN_ram_4000504c(_DAT_ram_30080c70 + 0x44,0,0x200);
    thunk_FUN_ram_4000504c(_DAT_ram_30080c70 + 0x244,0,0x20);
  }
  *(undefined4 *)(_DAT_ram_30080c70 + 0x264) = 0;
LAB_ram_40049864:
  FUN_ram_40052f20();
  FUN_ram_4004d3a0(_DAT_ram_30080c70,0x35,0);
  return;
}


/* NanoCore 1.11, address 0x40049d50.
 * REA evidence: ev_847dbb4ec653310ad8cd9f99acf6820df7f6ef0f9c7e267d959798503b3e83f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40049d50(int param_1)

{
  int iVar1;
  
  FUN_ram_4004a354();
  if (param_1 == 0) {
    iVar1 = 0;
    while (iVar1 = FUN_ram_4004d1c8(iVar1), iVar1 != 0) {
      if (*(int *)(iVar1 + 0x2f8) != 0) {
        FUN_ram_400497d0();
      }
    }
  }
  else if (*(int *)(param_1 + 0x2f8) != 0) {
    FUN_ram_400497d0();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40049d8e.
 * REA evidence: ev_bd364b1cda9671bb98ae087ca6fdeeb206eb7442edf6e3e7ec770258f6ce8358
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40049d8e(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004b7a2(*(undefined4 *)(param_1 + 0x34),0,*(undefined4 *)(param_1 + 0x30),0,0x400
                          );
  return *(int *)(param_1 + 0x24) +
         ((*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24)) * iVar1 >> 10);
}


/* NanoCore 1.11, address 0x40049dbe.
 * REA evidence: ev_f88710bd367ee48a7a500467ac04f1bccdaa3c5d2368ac429d1db61d0c7d026f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40049dbe(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_ram_4004b7a2(*(undefined4 *)(param_1 + 0x34),0,*(undefined4 *)(param_1 + 0x30),0,0x400
                          );
  iVar2 = FUN_ram_4004b64c(uVar1,param_2,param_3,param_4,param_5);
  return *(int *)(param_1 + 0x24) +
         ((*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24)) * iVar2 >> 10);
}


/* NanoCore 1.11, address 0x40049e12.
 * REA evidence: ev_34c8dfb748eccaa57c029f7a60e3d257d3a821040aa5ed0ffaa40a39827c60d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40049e12(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((int)param_1 < 0) {
    uVar1 = param_2 - param_3 >> 0x1f;
    if ((param_1 & 0x3ff) == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (((uVar1 ^ param_2 - param_3) - uVar1) * 100) / (param_1 & 0x3ff);
    }
    uVar2 = ((param_1 & 0x3fffffff) >> 0x14) * 10;
    param_1 = ((param_1 & 0xfffff) >> 10) * 10;
    if (uVar2 < uVar1) {
      uVar1 = uVar2;
    }
    if (param_1 <= uVar1) {
      param_1 = uVar1;
    }
  }
  return param_1;
}


/* NanoCore 1.11, address 0x40049e58.
 * REA evidence: ev_2ade7195ee1a605e726fda3adfb35ce0c1bd1e4b2bdc391a07e8262bf2d20724
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40049e58(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = FUN_ram_40049e12(*(undefined4 *)(param_1 + 0x30),uVar1,uVar3);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = FUN_ram_40049e12(*(undefined4 *)(param_1 + 0x3c),uVar1,uVar3);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  uVar2 = FUN_ram_40049e12(*(undefined4 *)(param_1 + 0x38),uVar1,uVar3);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  uVar1 = FUN_ram_40049e12(*(undefined4 *)(param_1 + 0x40),uVar1,uVar3);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  return;
}


/* NanoCore 1.11, address 0x40049ea6.
 * REA evidence: ev_92652e548ac696cd0a652cbd4d07ddc0e4d785d11c395368309754caf1a90bbb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40049ea6(void)

{
  int iVar1;
  
  DAT_ram_30080d04 = 1;
  iVar1 = FUN_ram_4004b518(0x30080d0c);
  if (iVar1 == 0) {
    FUN_ram_4004c7fe();
    return;
  }
  FUN_ram_4004c80c(_DAT_ram_30080d08);
  return;
}


/* NanoCore 1.11, address 0x40049ee2.
 * REA evidence: ev_a6a259e11cabf97a985e4066d9f82ab100e0010ab0f378155dc46c3bed77a038
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40049ee2(int *param_1)

{
  int *piVar1;
  
  if ((param_1[1] == 0) && (param_1[2] == 0)) {
    return;
  }
  piVar1 = (int *)FUN_ram_4004b518(0x30080d0c);
  while (piVar1 != (int *)0x0) {
    if (((param_1 == piVar1) ||
        (((piVar1[0xd] < 0 && ((*(byte *)((int)piVar1 + 0x4e) & 1) == 0)) || (*piVar1 != *param_1)))
        ) || ((piVar1[1] == 0 || (piVar1[1] != param_1[1])))) {
      piVar1 = (int *)FUN_ram_4004b524(0x30080d0c,piVar1);
    }
    else {
      FUN_ram_4004b45a(0x30080d0c,piVar1);
      if ((code *)piVar1[5] != (code *)0x0) {
        (*(code *)piVar1[5])(piVar1);
      }
      FUN_ram_4005ab56(piVar1);
      FUN_ram_40049ea6();
      piVar1 = (int *)FUN_ram_4004b518(0x30080d0c);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40049f6e.
 * REA evidence: ev_efa18215017893e18292c0e7530e33f8d1a95e9b3332399a8df51207b8d68524
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40049f6e(void)

{
  byte bVar1;
  short sVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  DAT_ram_30080d05 = DAT_ram_30080d05 ^ 1;
  puVar3 = (undefined4 *)FUN_ram_4004b518(0x30080d0c);
  do {
    while( true ) {
      if (puVar3 == (undefined4 *)0x0) {
        return;
      }
      iVar4 = FUN_ram_40056c92(puVar3[0x14]);
      puVar3[0xd] = puVar3[0xd] + iVar4;
      uVar5 = FUN_ram_40056c6c();
      puVar3[0x14] = uVar5;
      DAT_ram_30080d04 = '\0';
      if ((puVar3[0x15] & 3) >> 1 == (uint)DAT_ram_30080d05) break;
      bVar1 = *(byte *)(puVar3 + 0x15);
      *(byte *)(puVar3 + 0x15) = bVar1 & 0xfd | (byte)((DAT_ram_30080d05 & 1) << 1);
      if (((bVar1 & 4) == 0) && (-1 < (int)puVar3[0xd])) {
        if (((*(byte *)((int)puVar3 + 0x4e) & 1) == 0) && ((code *)puVar3[6] != (code *)0x0)) {
          iVar4 = (*(code *)puVar3[6])(puVar3);
          puVar3[9] = puVar3[9] + iVar4;
          puVar3[0xb] = puVar3[0xb] + iVar4;
        }
        FUN_ram_40049e58(puVar3);
        if ((code *)puVar3[3] != (code *)0x0) {
          (*(code *)puVar3[3])(puVar3);
        }
        *(byte *)(puVar3 + 0x15) = *(byte *)(puVar3 + 0x15) | 4;
        FUN_ram_40049ee2(puVar3);
      }
      if ((int)puVar3[0xd] < 0) {
LAB_ram_4004a0a8:
        if (DAT_ram_30080d04 == '\0') break;
      }
      else {
        if ((int)puVar3[0xc] < (int)puVar3[0xd]) {
          puVar3[0xd] = puVar3[0xc];
        }
        iVar4 = (*(code *)puVar3[8])(puVar3);
        if (puVar3[10] == iVar4) {
LAB_ram_4004a0b4:
          if (DAT_ram_30080d04 == '\0') {
LAB_ram_4004a06c:
            iVar4 = puVar3[0xc];
            if ((int)puVar3[0xd] < iVar4) break;
            bVar1 = *(byte *)(puVar3 + 0x15);
            iVar6 = puVar3[0xf];
            if ((bVar1 & 1) == 0) {
              sVar2 = *(short *)(puVar3 + 0x11);
              if (sVar2 == 0) goto LAB_ram_4004a084;
              if (sVar2 != -1) {
                *(short *)(puVar3 + 0x11) = sVar2 + -1;
                goto LAB_ram_4004a0ce;
              }
            }
            else {
LAB_ram_4004a0ce:
              if (*(short *)(puVar3 + 0x11) == 0) {
LAB_ram_4004a084:
                if ((iVar6 == 0) || ((bVar1 & 1) != 0)) {
                  FUN_ram_4004b45a(0x30080d0c,puVar3);
                  FUN_ram_40049ea6();
                  if ((code *)puVar3[4] != (code *)0x0) {
                    (*(code *)puVar3[4])(puVar3);
                  }
                  if ((code *)puVar3[5] != (code *)0x0) {
                    (*(code *)puVar3[5])(puVar3);
                  }
                  FUN_ram_4005ab56(puVar3);
                  goto LAB_ram_4004a0a8;
                }
              }
            }
            puVar3[0xd] = -puVar3[0x10];
            if (iVar6 != 0) {
              if ((bVar1 & 1) == 0) {
                puVar3[0xd] = -puVar3[0xe];
              }
              puVar3[0xc] = iVar6;
              *(byte *)(puVar3 + 0x15) = bVar1 & 1 ^ 1 | *(byte *)(puVar3 + 0x15) & 0xfe;
              uVar5 = puVar3[9];
              puVar3[0xf] = iVar4;
              puVar3[9] = puVar3[0xb];
              puVar3[0xb] = uVar5;
            }
            break;
          }
        }
        else {
          puVar3[10] = iVar4;
          if ((code *)puVar3[1] != (code *)0x0) {
            (*(code *)puVar3[1])(*puVar3,iVar4);
          }
          if (DAT_ram_30080d04 == '\0') {
            if ((code *)puVar3[2] != (code *)0x0) {
              (*(code *)puVar3[2])(puVar3,iVar4);
              goto LAB_ram_4004a0b4;
            }
            goto LAB_ram_4004a06c;
          }
        }
      }
      puVar3 = (undefined4 *)FUN_ram_4004b518(0x30080d0c);
    }
    puVar3 = (undefined4 *)FUN_ram_4004b524(0x30080d0c,puVar3);
  } while( true );
}


