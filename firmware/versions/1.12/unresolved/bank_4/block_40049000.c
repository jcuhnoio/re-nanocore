/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40049000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400491ec.
 * REA evidence: ev_50800744c9f60b223e52909b2652e5204b9f60bcd290f7b4c07a7ea7ac5f29d0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40049428) */
/* WARNING: Removing unreachable block (ram,0x40049462) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400491ec(int param_1,int param_2)

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
  
  iVar1 = FUN_ram_40043c8a(param_2,1);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_40044b3c(param_2);
    if (iVar1 == 0) {
      FUN_ram_40048f3e(param_1,param_2);
      return;
    }
    uVar2 = FUN_ram_40047b68(param_2,0,0x60);
    if (1 < (uVar2 & 0xff)) {
      uStack_a8 = uVar2;
      uVar3 = FUN_ram_40044ae8(param_2);
      FUN_ram_4004514a(param_2,auStack_d8);
      FUN_ram_4004a4ca(auStack_d8,uVar3);
      if (iVar1 == 2) {
        FUN_ram_4000303c(&iStack_b8,auStack_d8,0x10);
        FUN_ram_400453c8(param_2,&iStack_b8,0);
        iVar4 = FUN_ram_4004a4fe(aiStack_c8,param_1 + 0x18,&iStack_b8);
        if (iVar4 == 0) {
          return;
        }
        FUN_ram_4000303c(&uStack_a8,aiStack_c8,0x10);
        FUN_ram_400453c8(param_2,&uStack_a8,2);
        iVar4 = FUN_ram_4004a4fe(&uStack_a8,&uStack_a8,auStack_d8);
        if (iVar4 == 0) {
          return;
        }
        FUN_ram_4000303c(&iStack_e8,&uStack_a8,0x10);
        FUN_ram_4004a4ca(&iStack_e8,5,5);
      }
      else {
        if (iVar1 != 1) {
          return;
        }
        iVar4 = FUN_ram_4004a4fe(&uStack_a8,param_1 + 0x18,auStack_d8);
        if (iVar4 == 0) {
          return;
        }
        FUN_ram_4000303c(&iStack_e8,&uStack_a8,0x10);
      }
      uVar9 = (iStack_dc - iStack_e4) + 1;
      uVar10 = uVar9;
      if (iVar1 == 1) {
        iVar1 = (iStack_e0 - iStack_e8) + 1;
        iVar4 = FUN_ram_4004adf8(*(undefined1 *)(_DAT_ram_30080cf0 + 0x41));
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
        iVar1 = FUN_ram_4004a678(&iStack_b8,param_2 + 0x14);
        if (iVar1 == 0) {
LAB_ram_400493aa:
          iStack_ac = iStack_b4 + -1 + uVar10;
          if (iStack_dc < iStack_ac) {
            iStack_ac = iStack_dc;
          }
          uVar3 = 0x10;
        }
        else {
          uStack_a8 = 0;
          piStack_a4 = &iStack_b8;
          FUN_ram_40044c48(param_2,0x15,&uStack_a8);
          uVar3 = 0x12;
          if (uStack_a8 != 0) goto LAB_ram_400493aa;
        }
        iVar1 = FUN_ram_4004d952(param_1,uVar3,&iStack_b8);
        FUN_ram_40048f3e(iVar1,param_2);
        uVar5 = FUN_ram_40047b68(param_2,0,0x6f);
        uStack_a8 = uVar5;
        uStack_a8 = FUN_ram_40047b68(param_2,0,0x70);
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
        FUN_ram_4004e31e(&uStack_a8);
        iStack_68 = (uVar5 + *(int *)(param_2 + 0x14)) - *(int *)(iVar1 + 4);
        uStack_5c = (undefined1)uVar2;
        iStack_64 = (uVar8 + *(int *)(param_2 + 0x18)) - *(int *)(iVar1 + 8);
        aiStack_c8[0] = FUN_ram_40047b68(param_2,0,0x6e);
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
        aiStack_c8[0] = FUN_ram_40047b68(param_2,0,0x6c);
        iStack_78 = aiStack_c8[0];
        aiStack_c8[0] = FUN_ram_40047b68(param_2,0,0x6d);
        iStack_74 = aiStack_c8[0];
        aiStack_c8[0] = FUN_ram_40047b68(param_2,0,0x71);
        iStack_70 = aiStack_c8[0];
        aiStack_c8[0] = FUN_ram_40047b68(param_2,0,0x72);
        iStack_6c = aiStack_c8[0];
        aiStack_c8[0] = FUN_ram_40047b68(param_2,0,0x67);
        bStack_5b = (byte)((*(uint *)(_DAT_ram_30080cf0 + 0x40) & 1) << 4) |
                    (byte)aiStack_c8[0] & 0xf | bStack_5b & 0xe0;
        aiStack_c8[0] = FUN_ram_40047b68(param_2,0,0x73);
        iStack_44 = aiStack_c8[0];
        FUN_ram_4000303c(auStack_54,auStack_d8,0x10);
        iStack_8c = iVar1;
        FUN_ram_4004e57a(param_1,&uStack_a8,&iStack_b8);
        iStack_b4 = iStack_ac + 1;
      }
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4004955c.
 * REA evidence: ev_4b5a196f056f0074745671fafbf57375ffacbe31df186c50bb2261e8940e84a4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4004955c(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 != 0) || (param_2 = FUN_ram_4004d43e(_DAT_ram_30080cf0), param_2 != 0)) {
    FUN_ram_400491ec(param_1,param_2);
    iVar2 = FUN_ram_40048b6e(param_2);
    while (iVar2 != 0) {
      iVar3 = FUN_ram_40048b96(iVar2);
      bVar1 = false;
      for (iVar4 = 0; iVar4 != iVar3; iVar4 = iVar4 + 1) {
        if (bVar1) {
          FUN_ram_400491ec(param_1);
        }
        else {
          bVar1 = param_2 == *(int *)(**(int **)(iVar2 + 8) + iVar4 * 4);
        }
      }
      FUN_ram_40044c48(iVar2,0x1a,param_1);
      FUN_ram_40044c48(iVar2,0x1b,param_1);
      FUN_ram_40044c48(iVar2,0x1c,param_1);
      iVar3 = FUN_ram_40048b6e(iVar2);
      param_2 = iVar2;
      iVar2 = iVar3;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x400495fe.
 * REA evidence: ev_88d24006d39d0cb7bffac2611734ff9b5f08b13eddb64c68c56b5503d48a27ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400495fe(undefined4 *param_1)

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
  
  iVar1 = _DAT_ram_30080cf0;
  puVar6 = param_1 + 6;
  FUN_ram_4000303c(_DAT_ram_30080cf0 + 0x300,puVar6,0x10);
  iVar1 = FUN_ram_4004d436(iVar1);
  if (iVar1 == 0) {
    FUN_ram_40048e74(_DAT_ram_30080cf0);
  }
  iVar2 = FUN_ram_4004ae16(*(undefined1 *)(_DAT_ram_30080cf0 + 0x41));
  iVar1 = _DAT_ram_30080cf0;
  if (iVar2 != 0) {
    FUN_ram_4000303c(&local_30,_DAT_ram_30080cf0 + 0x300,0x10);
    if (*(int *)(iVar1 + 0x3c) == 0) {
      FUN_ram_4004a4e4(&local_30,-*(int *)(iVar1 + 0x300),-*(int *)(iVar1 + 0x304));
    }
    FUN_ram_4004ddb8(*param_1,&local_30);
  }
  uVar3 = FUN_ram_4004d43e(_DAT_ram_30080cf0);
  iVar1 = FUN_ram_40048ec6(puVar6,uVar3);
  if (*(int *)(_DAT_ram_30080cf0 + 700) == 0) {
    iVar2 = 0;
    iVar4 = iVar1;
joined_r0x400497d6:
    if (iVar4 == 0) {
      iVar2 = 0;
      uVar3 = FUN_ram_4004d486(_DAT_ram_30080cf0);
      FUN_ram_4004955c(param_1,uVar3);
    }
  }
  else {
    iVar2 = FUN_ram_40048ec6(puVar6,*(int *)(_DAT_ram_30080cf0 + 700));
    iVar4 = iVar2;
    if (iVar1 == 0) goto joined_r0x400497d6;
  }
  if ((*(byte *)(_DAT_ram_30080cf0 + 0x2d4) & 1) == 0) {
    if (*(int *)(_DAT_ram_30080cf0 + 700) != 0) {
      iVar4 = *(int *)(_DAT_ram_30080cf0 + 700);
      if (iVar2 != 0) {
        iVar4 = iVar2;
      }
      FUN_ram_4004955c(param_1,iVar4);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(_DAT_ram_30080cf0 + 0x2b8);
    }
  }
  else {
    if (iVar1 == 0) {
      iVar1 = *(int *)(_DAT_ram_30080cf0 + 0x2b8);
    }
    FUN_ram_4004955c(param_1,iVar1);
    if (*(int *)(_DAT_ram_30080cf0 + 700) == 0) goto LAB_ram_400496e0;
    iVar1 = *(int *)(_DAT_ram_30080cf0 + 700);
    if (iVar2 != 0) {
      iVar1 = iVar2;
    }
  }
  FUN_ram_4004955c(param_1,iVar1);
LAB_ram_400496e0:
  uVar3 = FUN_ram_4004d462(_DAT_ram_30080cf0);
  FUN_ram_4004955c(param_1,uVar3);
  uVar3 = FUN_ram_4004d474(_DAT_ram_30080cf0);
  FUN_ram_4004955c(param_1,uVar3);
  iVar1 = _DAT_ram_30080cf0;
  piVar5 = *(int **)(_DAT_ram_30080cf0 + 0x2a8);
  while (piVar5[10] != 0) {
    FUN_ram_4004d60a();
    FUN_ram_4004d792();
  }
  iVar2 = FUN_ram_4004d436(iVar1);
  if (iVar2 != 0) {
    FUN_ram_40048e74(_DAT_ram_30080cf0);
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
    FUN_ram_4004d498(iVar1,0x38,&local_30);
    (**(code **)(iVar1 + 0x28))(iVar1,&local_30,uVar3);
    FUN_ram_4004d498(iVar1,0x39,&local_30);
  }
  iVar4 = FUN_ram_4004d436(iVar1);
  if ((iVar4 != 0) && ((*(int *)(iVar1 + 0x3c) != 1 || (iVar2 != 0)))) {
    iVar2 = *(int *)(iVar1 + 0x1c);
    if (*(int *)(iVar1 + 0x24) == iVar2) {
      iVar2 = *(int *)(iVar1 + 0x20);
    }
    *(int *)(iVar1 + 0x24) = iVar2;
  }
  return;
}


/* NanoCore 1.12, address 0x400497dc.
 * REA evidence: ev_f27deac93580ffaf57f8ec5a6fb0c4aa29a45898ddc0a8e44f3d095368e0c84d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400497dc(int param_1,int param_2)

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
  
  if (((param_1 != 0) || (param_1 = FUN_ram_4004d2b6(), param_1 != 0)) &&
     (iVar2 = FUN_ram_4004d536(param_1), iVar2 != 0)) {
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x264) = 0;
    }
    else {
      local_30 = 0;
      uStack_2c = 0;
      iStack_28 = FUN_ram_4004d2d4(param_1);
      iStack_28 = iStack_28 + -1;
      iStack_24 = FUN_ram_4004d2f6(param_1);
      iStack_24 = iStack_24 + -1;
      iVar2 = FUN_ram_4004a4fe(auStack_20,param_2,&local_30);
      if (iVar2 != 0) {
        if (*(int *)(param_1 + 0x3c) == 2) {
          FUN_ram_4000303c(param_1 + 0x44,&local_30,0x10);
          *(undefined4 *)(param_1 + 0x264) = 1;
        }
        else {
          iVar2 = FUN_ram_4004d498(param_1,0x30,auStack_20);
          uVar1 = 0;
          if (iVar2 != 1) {
            return;
          }
          for (; uVar1 < *(uint *)(param_1 + 0x264); uVar1 = uVar1 + 1 & 0xffff) {
            iVar2 = FUN_ram_4004a6a6(auStack_20,uVar1 * 0x10 + 0x44 + param_1,0);
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
        FUN_ram_4004d498(param_1,0x33,0);
      }
    }
  }
  return;
}


/* NanoCore 1.12, address 0x400498be.
 * REA evidence: ev_2f15aa7a4c19a4ab96c6c20db71d2be4b74929fffaf2a6a1a13e7829b4f4f245
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400498be(void)

{
  return _DAT_ram_30080cf0;
}


/* NanoCore 1.12, address 0x400498c8.
 * REA evidence: ev_d889edc638f0d1bdf5cbd3737fedeb33f9ae9496b2050e7a6e560b1901a50bd7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400498c8(int param_1)

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
    _DAT_ram_30080cf0 = FUN_ram_4004d2b6();
  }
  else {
    _DAT_ram_30080cf0 = *(int *)(param_1 + 0xc);
    FUN_ram_4004c8f6();
  }
  if ((((_DAT_ram_30080cf0 == 0) || (iVar13 = *(int *)(_DAT_ram_30080cf0 + 0x24), iVar13 == 0)) ||
      (*(int *)(iVar13 + 0x10) == 0)) || (*(int *)(iVar13 + 0xc) == 0)) {
    return;
  }
  FUN_ram_4004d498(_DAT_ram_30080cf0,0x34,0);
  FUN_ram_40046078(*(undefined4 *)(_DAT_ram_30080cf0 + 0x2b8));
  if (*(int *)(_DAT_ram_30080cf0 + 700) != 0) {
    FUN_ram_40046078();
  }
  uVar14 = 0;
  FUN_ram_40046078(*(undefined4 *)(_DAT_ram_30080cf0 + 0x2c4));
  FUN_ram_40046078(*(undefined4 *)(_DAT_ram_30080cf0 + 0x2c8));
  FUN_ram_40046078(*(undefined4 *)(_DAT_ram_30080cf0 + 0x2cc));
  if (*(int *)(_DAT_ram_30080cf0 + 0x2b8) != 0) {
    for (; uVar14 < *(uint *)(_DAT_ram_30080cf0 + 0x264); uVar14 = uVar14 + 1) {
      if (*(char *)(_DAT_ram_30080cf0 + uVar14 + 0x244) == '\0') {
        iVar13 = uVar14 * 0x10 + 0x44;
        for (uVar7 = 0; uVar7 < *(uint *)(_DAT_ram_30080cf0 + 0x264); uVar7 = uVar7 + 1) {
          if ((*(char *)(_DAT_ram_30080cf0 + uVar7 + 0x244) == '\0') && (uVar14 != uVar7)) {
            iVar2 = uVar7 * 0x10 + 0x44;
            iVar15 = FUN_ram_4004a678(_DAT_ram_30080cf0 + iVar13,_DAT_ram_30080cf0 + iVar2);
            if (iVar15 != 0) {
              FUN_ram_4004a54a(aiStack_80,_DAT_ram_30080cf0 + iVar13,_DAT_ram_30080cf0 + iVar2);
              uVar4 = FUN_ram_4004a4b4(aiStack_80);
              iVar3 = FUN_ram_4004a4b4(_DAT_ram_30080cf0 + iVar13);
              iVar2 = FUN_ram_4004a4b4(_DAT_ram_30080cf0 + iVar2);
              iVar15 = _DAT_ram_30080cf0;
              if (uVar4 < (uint)(iVar3 + iVar2)) {
                iVar2 = _DAT_ram_30080cf0 + uVar14 * 0x10;
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
    if (((*(int *)(_DAT_ram_30080cf0 + 0x3c) == 1) && (iVar13 = FUN_ram_4004d436(), iVar13 != 0)) &&
       (iVar13 = FUN_ram_4004b6a0(_DAT_ram_30080cf0 + 0x26c), iVar13 == 0)) {
      FUN_ram_40048e74(_DAT_ram_30080cf0);
      iVar15 = *(int *)(_DAT_ram_30080cf0 + 0x24);
      iVar13 = *(int *)(_DAT_ram_30080cf0 + 0x1c);
      if (iVar15 == iVar13) {
        iVar13 = *(int *)(_DAT_ram_30080cf0 + 0x20);
      }
      iVar2 = FUN_ram_4004d2d4();
      iVar3 = FUN_ram_4004d2f6(_DAT_ram_30080cf0);
      memset(aiStack_80,0,0x40);
      for (uVar14 = 0; uVar14 < *(uint *)(_DAT_ram_30080cf0 + 0x264); uVar14 = uVar14 + 1 & 0xffff)
      {
        if (*(char *)(_DAT_ram_30080cf0 + uVar14 + 0x244) == '\0') {
          iVar5 = FUN_ram_4004b610(_DAT_ram_30080cf0 + 0x26c);
          while (iVar16 = iVar5, iVar16 != 0) {
            iVar5 = FUN_ram_4004b61c(_DAT_ram_30080cf0 + 0x26c,iVar16);
            iVar17 = FUN_ram_4004a72e(aiStack_80,iVar16,_DAT_ram_30080cf0 + uVar14 * 0x10 + 0x44);
            if (iVar17 != -1) {
              for (iVar6 = 0; (char)iVar6 < iVar17; iVar6 = iVar6 + 1) {
                uVar8 = FUN_ram_4004b490(_DAT_ram_30080cf0 + 0x26c,iVar16);
                FUN_ram_4000303c(uVar8,aiStack_80 + iVar6 * 4,0x10);
              }
              FUN_ram_4004b552();
              FUN_ram_4005a988(iVar16);
            }
          }
        }
      }
      iStack_88 = iVar2 + -1;
      iStack_84 = iVar3 + -1;
      uStack_90 = 0;
      uStack_8c = 0;
      for (iVar2 = FUN_ram_4004b610(_DAT_ram_30080cf0 + 0x26c); iVar2 != 0;
          iVar2 = FUN_ram_4004b61c(_DAT_ram_30080cf0 + 0x26c,iVar2)) {
        FUN_ram_4004a4fe(iVar2,iVar2,&uStack_90);
        FUN_ram_4004de58(iVar15,iVar2,iVar13,iVar2);
      }
      FUN_ram_4004b5c6(_DAT_ram_30080cf0 + 0x26c);
    }
    iVar13 = *(int *)(_DAT_ram_30080cf0 + 0x264);
    if (iVar13 != 0) {
      do {
        iVar13 = iVar13 + -1;
        if (iVar13 < 0) {
          iVar13 = 0;
          break;
        }
      } while (*(char *)(_DAT_ram_30080cf0 + 0x244 + iVar13) != '\0');
      FUN_ram_4004d498(_DAT_ram_30080cf0,0x36,0);
      iVar15 = _DAT_ram_30080cf0;
      *(byte *)(_DAT_ram_30080cf0 + 0x38) = *(byte *)(_DAT_ram_30080cf0 + 0x38) & 0xfe;
      *(byte *)(iVar15 + 0x38) = *(byte *)(iVar15 + 0x38) & 0xfd;
      *(byte *)(iVar15 + 0x40) = *(byte *)(iVar15 + 0x40) | 2;
      for (iVar15 = 0; iVar2 = _DAT_ram_30080cf0, iVar15 < *(int *)(_DAT_ram_30080cf0 + 0x264);
          iVar15 = iVar15 + 1) {
        if (*(char *)(_DAT_ram_30080cf0 + iVar15 + 0x244) == '\0') {
          if (iVar15 == iVar13) {
            *(byte *)(_DAT_ram_30080cf0 + 0x38) = *(byte *)(_DAT_ram_30080cf0 + 0x38) | 1;
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
            iVar2 = FUN_ram_4004d2f6(iVar2);
            if (iVar17 < iVar2) {
              iVar2 = *(int *)(iVar5 + 0x50);
            }
            else {
              iVar2 = FUN_ram_4004d2f6(_DAT_ram_30080cf0);
              iVar2 = iVar2 + -1;
            }
            iVar17 = _DAT_ram_30080cf0;
            iVar6 = FUN_ram_4004ae16(*(undefined1 *)(_DAT_ram_30080cf0 + 0x41));
            uVar9 = 0x10;
            if (iVar6 == 0) {
              uVar9 = *(undefined1 *)(iVar17 + 0x41);
            }
            uVar7 = FUN_ram_4004dace((iVar16 - iVar3) + 1,uVar9);
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
              FUN_ram_4004d498(_DAT_ram_30080cf0,0x30,aiStack_80);
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
              uVar8 = *(undefined4 *)(_DAT_ram_30080cf0 + 0x24);
              puVar1[1] = uVar11;
              *puVar1 = uVar8;
              puVar1[2] = iVar17;
              puVar1[3] = uVar12;
              puVar1[4] = iVar6;
              puVar1[6] = uVar11;
              puVar1[7] = iVar17;
              puVar1[8] = uVar12;
              puVar1[9] = iVar6;
              FUN_ram_40048eaa(puVar1);
              if (iVar2 == iVar6) {
                *(byte *)(_DAT_ram_30080cf0 + 0x38) = *(byte *)(_DAT_ram_30080cf0 + 0x38) | 2;
              }
              FUN_ram_400495fe(puVar1);
              iVar16 = iVar6;
              iVar17 = iVar3 + iVar17;
            }
            if (iVar2 == iVar16) goto LAB_ram_40049c8e;
            uVar12 = *(undefined4 *)(iVar5 + 0x4c);
            uVar11 = *(undefined4 *)(iVar5 + 0x44);
            uVar8 = *(undefined4 *)(_DAT_ram_30080cf0 + 0x24);
            puVar1[2] = iVar17;
            puVar1[3] = uVar12;
            puVar1[7] = iVar17;
            puVar1[8] = uVar12;
            *puVar1 = uVar8;
            puVar1[1] = uVar11;
            puVar1[4] = iVar2;
            puVar1[6] = uVar11;
            puVar1[9] = iVar2;
            FUN_ram_40048eaa(puVar1);
            *(byte *)(_DAT_ram_30080cf0 + 0x38) = *(byte *)(_DAT_ram_30080cf0 + 0x38) | 2;
          }
          else {
            puVar1[1] = 0;
            puVar1[2] = 0;
            iVar3 = FUN_ram_4004d2d4(iVar2);
            puVar1[3] = iVar3 + -1;
            iVar3 = FUN_ram_4004d2f6(_DAT_ram_30080cf0);
            puVar1[4] = iVar3 + -1;
            FUN_ram_40048eaa(puVar1);
            iVar3 = FUN_ram_4004d2d4(_DAT_ram_30080cf0);
            iVar5 = FUN_ram_4004d2f6(_DAT_ram_30080cf0);
            FUN_ram_4004a496(aiStack_80,0,0,iVar3 + -1,iVar5 + -1);
            if (*(int *)(_DAT_ram_30080cf0 + 0x3c) == 2) {
              piVar10 = aiStack_80;
              *(byte *)(_DAT_ram_30080cf0 + 0x38) = *(byte *)(_DAT_ram_30080cf0 + 0x38) | 2;
            }
            else {
              if (*(int *)(_DAT_ram_30080cf0 + 0x3c) != 1) goto LAB_ram_40049c8e;
              *(byte *)(_DAT_ram_30080cf0 + 0x38) =
                   *(byte *)(_DAT_ram_30080cf0 + 0x38) & 0xfd |
                   (byte)((*(uint *)(_DAT_ram_30080cf0 + 0x38) & 1) << 1);
              piVar10 = (int *)((iVar15 + 4) * 0x10 + iVar2 + 4);
            }
            FUN_ram_4000303c(puVar1 + 6,piVar10,0x10);
          }
          FUN_ram_400495fe(puVar1);
        }
LAB_ram_40049c8e:
      }
      *(byte *)(_DAT_ram_30080cf0 + 0x40) = *(byte *)(_DAT_ram_30080cf0 + 0x40) & 0xfd;
    }
    if (*(int *)(_DAT_ram_30080cf0 + 0x264) == 0) goto LAB_ram_4004995c;
    FUN_ram_4004d498(_DAT_ram_30080cf0,0x37,0);
    iVar13 = FUN_ram_4004d436(_DAT_ram_30080cf0);
    if ((iVar13 != 0) && (*(int *)(_DAT_ram_30080cf0 + 0x3c) == 1)) {
      FUN_ram_40048e74();
      for (uVar14 = 0; uVar14 < *(uint *)(_DAT_ram_30080cf0 + 0x264); uVar14 = uVar14 + 1) {
        if (*(char *)(_DAT_ram_30080cf0 + uVar14 + 0x244) == '\0') {
          uVar8 = FUN_ram_4004b508(_DAT_ram_30080cf0 + 0x26c);
          FUN_ram_4000303c(uVar8,_DAT_ram_30080cf0 + (uVar14 + 4) * 0x10 + 4,0x10);
        }
      }
    }
    thunk_FUN_ram_40004f92(_DAT_ram_30080cf0 + 0x44,0,0x200);
    thunk_FUN_ram_40004f92(_DAT_ram_30080cf0 + 0x244,0,0x20);
  }
  *(undefined4 *)(_DAT_ram_30080cf0 + 0x264) = 0;
LAB_ram_4004995c:
  FUN_ram_40052d52();
  FUN_ram_4004d498(_DAT_ram_30080cf0,0x35,0);
  return;
}


/* NanoCore 1.12, address 0x40049e48.
 * REA evidence: ev_706828da7820e110da985eb7cd34b1b6bc164fbace40bbcb79ff7fb169b17f51
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40049e48(int param_1)

{
  int iVar1;
  
  FUN_ram_4004a44c();
  if (param_1 == 0) {
    iVar1 = 0;
    while (iVar1 = FUN_ram_4004d2c0(iVar1), iVar1 != 0) {
      if (*(int *)(iVar1 + 0x2f8) != 0) {
        FUN_ram_400498c8();
      }
    }
  }
  else if (*(int *)(param_1 + 0x2f8) != 0) {
    FUN_ram_400498c8();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40049e86.
 * REA evidence: ev_58d36ead378d7050012cc26d2347a3b7555eff7159245a1360cb674ba32b8a2b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40049e86(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004b89a(*(undefined4 *)(param_1 + 0x34),0,*(undefined4 *)(param_1 + 0x30),0,0x400
                          );
  return *(int *)(param_1 + 0x24) +
         ((*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24)) * iVar1 >> 10);
}


/* NanoCore 1.12, address 0x40049eb6.
 * REA evidence: ev_50de43a6beb787ac2640391766024629a2a51d886b41fe2ac5b5a048f5e5b8ae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40049eb6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_ram_4004b89a(*(undefined4 *)(param_1 + 0x34),0,*(undefined4 *)(param_1 + 0x30),0,0x400
                          );
  iVar2 = FUN_ram_4004b744(uVar1,param_2,param_3,param_4,param_5);
  return *(int *)(param_1 + 0x24) +
         ((*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24)) * iVar2 >> 10);
}


/* NanoCore 1.12, address 0x40049f0a.
 * REA evidence: ev_ce0d7beb872d22b305e5f821cb48f7069f02496660d1668ccfac6d2c95d4d2ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40049f0a(uint param_1,int param_2,int param_3)

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


/* NanoCore 1.12, address 0x40049f50.
 * REA evidence: ev_0710423e80bb1254c184f6fe662e4594607c036cd6329d5a2a36b7e5e448295d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40049f50(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = FUN_ram_40049f0a(*(undefined4 *)(param_1 + 0x30),uVar1,uVar3);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = FUN_ram_40049f0a(*(undefined4 *)(param_1 + 0x3c),uVar1,uVar3);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  uVar2 = FUN_ram_40049f0a(*(undefined4 *)(param_1 + 0x38),uVar1,uVar3);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  uVar1 = FUN_ram_40049f0a(*(undefined4 *)(param_1 + 0x40),uVar1,uVar3);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  return;
}


/* NanoCore 1.12, address 0x40049f9e.
 * REA evidence: ev_b05a7151d6961d98125f838145976feae88a4b0e7e7f5c01f1ae884348ee6cee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40049f9e(void)

{
  int iVar1;
  
  DAT_ram_30080d84 = 1;
  iVar1 = FUN_ram_4004b610(0x30080d8c);
  if (iVar1 == 0) {
    FUN_ram_4004c8f6();
    return;
  }
  FUN_ram_4004c904(_DAT_ram_30080d88);
  return;
}


/* NanoCore 1.12, address 0x40049fda.
 * REA evidence: ev_78e8225c2cd0710ec60fbfd69b86f606333d47851afafc4bf2a9532843156899
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40049fda(int *param_1)

{
  int *piVar1;
  
  if ((param_1[1] == 0) && (param_1[2] == 0)) {
    return;
  }
  piVar1 = (int *)FUN_ram_4004b610(0x30080d8c);
  while (piVar1 != (int *)0x0) {
    if (((param_1 == piVar1) ||
        (((piVar1[0xd] < 0 && ((*(byte *)((int)piVar1 + 0x4e) & 1) == 0)) || (*piVar1 != *param_1)))
        ) || ((piVar1[1] == 0 || (piVar1[1] != param_1[1])))) {
      piVar1 = (int *)FUN_ram_4004b61c(0x30080d8c,piVar1);
    }
    else {
      FUN_ram_4004b552(0x30080d8c,piVar1);
      if ((code *)piVar1[5] != (code *)0x0) {
        (*(code *)piVar1[5])(piVar1);
      }
      FUN_ram_4005a988(piVar1);
      FUN_ram_40049f9e();
      piVar1 = (int *)FUN_ram_4004b610(0x30080d8c);
    }
  }
  return;
}


