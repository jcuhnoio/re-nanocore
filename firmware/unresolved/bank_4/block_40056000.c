/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40056000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4005600c.
 * REA evidence: ev_e45b82a7a7c9d793a4372fc87c38450bfb45983a8145f35b01f0bc34f4cca298
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005600c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_4004316a(&PTR_DAT_ram_4009751c_ram_40097994,param_1);
  FUN_ram_400432a0();
  return uVar1;
}


/* NanoCore 1.10, address 0x4005602c.
 * REA evidence: ev_5f288e839c5a774e500d4fdf1af0e2af5f6a652b4499f38073a5197a355e935a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005602c(int param_1,uint param_2)

{
  if ((*(uint *)(param_1 + 0x58) & 0xff) >> 7 != param_2) {
    *(ushort *)(param_1 + 0x58) =
         (ushort)((param_2 & 1) << 7) | *(ushort *)(param_1 + 0x58) & 0xff7f;
    FUN_ram_40044572();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4005604e.
 * REA evidence: ev_24f6c28e27ee0302d0fc71ec22feb0450e91375005f50bd167159c3ffd06e6ac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005604e(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}


/* NanoCore 1.10, address 0x40056052.
 * REA evidence: ev_4e25ce8c109b79487db6c012568fee26a45a4fbde52fa5eb66d54de1d9060bd9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40056088) */
/* WARNING: Removing unreachable block (ram,0x400560c4) */

void FUN_ram_40056052(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  if (((uVar1 & 0x60000000) == 0x20000000) && (uVar2 = uVar1 & 0x9fffffff, (int)uVar2 < 0x7d1)) {
    if (1000 < (int)uVar2) {
      uVar2 = 1000 - uVar2;
    }
    uVar1 = (int)(*(int *)(param_1 + 0x3c) * uVar2) / 100;
  }
  *param_2 = uVar1;
  uVar1 = *(uint *)(param_1 + 0x54);
  if (((uVar1 & 0x60000000) == 0x20000000) && (uVar2 = uVar1 & 0x9fffffff, (int)uVar2 < 0x7d1)) {
    if (1000 < (int)uVar2) {
      uVar2 = 1000 - uVar2;
    }
    uVar1 = (int)(*(int *)(param_1 + 0x40) * uVar2) / 100;
  }
  param_2[1] = uVar1;
  return;
}


/* NanoCore 1.10, address 0x400560cc.
 * REA evidence: ev_f9181d2b3e75ea9f2100b2d56e02f5d9f0bd63d2a8d8f6fdd1b8d174973afe1b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400560cc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  FUN_ram_4004500e();
  uVar1 = FUN_ram_400440f2(param_1);
  uVar2 = FUN_ram_400440fe(param_1);
  FUN_ram_40056052(param_1,auStack_38);
  FUN_ram_4004d412(&iStack_30,uVar1,uVar2,*(undefined4 *)(param_1 + 0x44),
                   *(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x4c),auStack_38);
  iStack_30 = iStack_30 + *(int *)(param_1 + 0x14) + -1;
  iStack_2c = iStack_2c + *(int *)(param_1 + 0x18) + -1;
  iStack_28 = *(int *)(param_1 + 0x14) + 1 + iStack_28;
  iStack_24 = *(int *)(param_1 + 0x18) + 1 + iStack_24;
  FUN_ram_4004450e(param_1,&iStack_30);
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  uVar3 = FUN_ram_40047aae(param_1);
  FUN_ram_4004c4c8(uVar3,0);
  FUN_ram_40043a8a(param_1);
  FUN_ram_4004c4c8(uVar3,1);
  FUN_ram_4004d412(&iStack_30,uVar1,uVar2,*(undefined4 *)(param_1 + 0x44),
                   *(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x4c),auStack_38);
  iStack_30 = iStack_30 + *(int *)(param_1 + 0x14) + -1;
  iStack_2c = iStack_2c + *(int *)(param_1 + 0x18) + -1;
  iStack_28 = *(int *)(param_1 + 0x14) + 1 + iStack_28;
  iStack_24 = *(int *)(param_1 + 0x18) + 1 + iStack_24;
  FUN_ram_4004450e(param_1,&iStack_30);
  return;
}


/* NanoCore 1.10, address 0x400561c0.
 * REA evidence: ev_fc256ed7c87c7a2326be2026f08db4521080b02290c7422e3f711171bebecb34
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400561c0(int param_1,int param_2)

{
  if (((*(uint *)(param_1 + 0x58) & 0xfff) >> 8 < 0xb) &&
     ((*(int *)(param_1 + 0x48) != param_2 || (*(int *)(param_1 + 0x4c) != param_2)))) {
    if (param_2 == 0) {
      param_2 = 1;
    }
    FUN_ram_400560cc(param_1,param_2);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400561e6.
 * REA evidence: ev_9e2c4d5ceabe9d776bb72e2217d9e2885ef79e668fe4518824891261da32e3cb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400561e6(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iVar1 = 0;
  if ((*(uint *)(param_1 + 0x58) & 0xfff) >> 8 < 0xb) {
    while (iVar1 = param_2, 0xe0f < iVar1) {
      param_2 = iVar1 + -0xe10;
    }
    for (; iVar1 < 0; iVar1 = iVar1 + 0xe10) {
    }
  }
  if (*(int *)(param_1 + 0x44) != iVar1) {
    FUN_ram_4004500e(param_1);
    uVar2 = FUN_ram_400440f2(param_1);
    uVar3 = FUN_ram_400440fe(param_1);
    FUN_ram_40056052(param_1,auStack_38);
    FUN_ram_4004d412(&iStack_30,uVar2,uVar3,*(undefined4 *)(param_1 + 0x44),
                     *(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x4c),auStack_38);
    iStack_30 = iStack_30 + *(int *)(param_1 + 0x14);
    iStack_2c = iStack_2c + *(int *)(param_1 + 0x18);
    iStack_28 = iStack_28 + *(int *)(param_1 + 0x14);
    iStack_24 = iStack_24 + *(int *)(param_1 + 0x18);
    FUN_ram_4004450e(param_1,&iStack_30);
    *(int *)(param_1 + 0x44) = iVar1;
    uVar4 = FUN_ram_40047aae(param_1);
    FUN_ram_4004c4c8(uVar4,0);
    FUN_ram_40043a8a(param_1);
    FUN_ram_4004c4c8(uVar4,1);
    FUN_ram_4004d412(&iStack_30,uVar2,uVar3,*(undefined4 *)(param_1 + 0x44),
                     *(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x4c),auStack_38);
    iStack_30 = iStack_30 + *(int *)(param_1 + 0x14);
    iStack_28 = iStack_28 + *(int *)(param_1 + 0x14);
    iStack_2c = iStack_2c + *(int *)(param_1 + 0x18);
    iStack_24 = iStack_24 + *(int *)(param_1 + 0x18);
    FUN_ram_4004450e(param_1,&iStack_30);
  }
  return;
}


/* NanoCore 1.10, address 0x400562ee.
 * REA evidence: ev_49b5cf56b1ff9001a4c34041d3b30e8f6e896a035afab5cbe399ca6adaf297c2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400562ee(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  if (10 < (*(uint *)(param_1 + 0x58) & 0xfff) >> 8) {
    param_3 = 0;
    param_2 = 0;
  }
  if ((*(int *)(param_1 + 0x50) != param_2) || (*(int *)(param_1 + 0x54) != param_3)) {
    FUN_ram_4004500e(param_1);
    uVar1 = FUN_ram_400440f2(param_1);
    uVar2 = FUN_ram_400440fe(param_1);
    FUN_ram_40056052(param_1,auStack_38);
    FUN_ram_4004d412(&iStack_30,uVar1,uVar2,*(undefined4 *)(param_1 + 0x44),
                     *(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x4c),auStack_38);
    iStack_30 = iStack_30 + *(int *)(param_1 + 0x14);
    iStack_2c = iStack_2c + *(int *)(param_1 + 0x18);
    iStack_28 = iStack_28 + *(int *)(param_1 + 0x14);
    iStack_24 = iStack_24 + *(int *)(param_1 + 0x18);
    FUN_ram_4004450e(param_1,&iStack_30);
    *(int *)(param_1 + 0x54) = param_3;
    *(int *)(param_1 + 0x50) = param_2;
    uVar3 = FUN_ram_40047aae(param_1);
    FUN_ram_4004c4c8(uVar3,0);
    FUN_ram_40043a8a(param_1);
    FUN_ram_4004c4c8(uVar3,1);
    FUN_ram_40056052(param_1,auStack_38);
    FUN_ram_4004d412(&iStack_30,uVar1,uVar2,*(undefined4 *)(param_1 + 0x44),
                     *(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x4c),auStack_38);
    iStack_30 = iStack_30 + *(int *)(param_1 + 0x14);
    iStack_28 = iStack_28 + *(int *)(param_1 + 0x14);
    iStack_2c = iStack_2c + *(int *)(param_1 + 0x18);
    iStack_24 = iStack_24 + *(int *)(param_1 + 0x18);
    FUN_ram_4004450e(param_1,&iStack_30);
  }
  return;
}


/* NanoCore 1.10, address 0x400563f0.
 * REA evidence: ev_e850a7ad219e65aed18c41f90c4269f68c3b2d00b30067459f26e2744fb1d89c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400563f0(int param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  
  uVar3 = *(ushort *)(param_1 + 0x58) & 0xf00;
  if (uVar3 == 0xb00) {
    FUN_ram_400561e6(param_1,0);
    FUN_ram_400562ee(param_1,0,0);
    iVar1 = FUN_ram_400440f2(param_1);
    if (*(int *)(param_1 + 0x3c) == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = (iVar1 << 8) / *(int *)(param_1 + 0x3c);
    }
    iVar1 = FUN_ram_400440fe(param_1);
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = (iVar1 << 8) / *(int *)(param_1 + 0x40);
    }
  }
  else {
    if (uVar3 != 0xc00) {
      return;
    }
    FUN_ram_400561e6(param_1,0);
    FUN_ram_400562ee(param_1,0,0);
    iVar1 = 0x100;
    iVar2 = 0x100;
  }
  FUN_ram_400560cc(param_1,iVar2,iVar1);
  return;
}


/* NanoCore 1.10, address 0x40056474.
 * REA evidence: ev_bf2dc1a059f9edd227fd8c6ba101f68b4c9b07e55669ea7347b2cb2397152e3b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056474(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_34;
  ushort uStack_30;
  undefined1 uStack_2c;
  byte bStack_2b;
  ushort uStack_28;
  ushort uStack_26;
  
  FUN_ram_40044572();
  iVar1 = FUN_ram_4004d31e(param_2);
  if (iVar1 == 3) {
    if ((ushort)((*(ushort *)(param_1 + 0x58) & 3) - 1) < 2) {
      FUN_ram_40059be4(*(undefined4 *)(param_1 + 0x2c));
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) | 3;
  }
  else {
    iVar2 = FUN_ram_4004e678(param_2,&uStack_2c);
    if (iVar2 == 1) {
      if (iVar1 == 0) {
        if ((ushort)((*(ushort *)(param_1 + 0x58) & 3) - 1) < 2) {
          FUN_ram_40059be4(*(undefined4 *)(param_1 + 0x2c));
        }
        *(int *)(param_1 + 0x2c) = param_2;
      }
      else {
        if (((iVar1 - 1U & 0xff) < 2) && (iVar2 = *(int *)(param_1 + 0x2c), iVar2 != param_2)) {
          if (1 < (ushort)((*(ushort *)(param_1 + 0x58) & 3) - 1)) {
            iVar2 = 0;
          }
          iVar3 = FUN_ram_40059cc4(param_2);
          if (iVar3 == 0) {
            return;
          }
          *(int *)(param_1 + 0x2c) = iVar3;
          if (iVar2 != 0) {
            FUN_ram_40059be4(iVar2);
          }
        }
        if (iVar1 == 2) {
          uVar4 = FUN_ram_40046afe(param_1,0,0x5a);
          uStack_34 = uVar4;
          uVar5 = FUN_ram_40046afe(param_1,0,0x5b);
          uStack_34 = uVar5;
          uStack_34 = FUN_ram_40046afe(param_1,0,0x5c);
          FUN_ram_4004b516(&uStack_34,param_2,uVar4,uVar5,uStack_34,0x1fffffff,0);
          uStack_28 = (ushort)uStack_34;
          uStack_26 = uStack_30;
        }
      }
      *(uint *)(param_1 + 0x3c) = (uint)uStack_28;
      *(uint *)(param_1 + 0x40) = (uint)uStack_26;
      *(byte *)(param_1 + 0x58) =
           (bStack_2b & 0x1f) << 2 | (byte)iVar1 & 3 | *(byte *)(param_1 + 0x58) & 0x80;
      FUN_ram_400441fa(param_1);
      FUN_ram_400563f0(param_1);
      if (((*(int *)(param_1 + 0x44) != 0) || (*(int *)(param_1 + 0x48) != 0x100)) ||
         (*(int *)(param_1 + 0x4c) != 0x100)) {
        FUN_ram_40043a8a(param_1);
      }
      FUN_ram_40044572(param_1);
    }
  }
  return;
}


/* NanoCore 1.10, address 0x400565de.
 * REA evidence: ev_337b6695fb34c80723b5b7123ddefcccaf3c519e6a392ba5b7d5204db4850d10
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400565de(int param_1,uint param_2)

{
  if ((*(uint *)(param_1 + 0x58) & 0xfff) >> 8 != param_2) {
    *(ushort *)(param_1 + 0x58) =
         (ushort)((param_2 & 0xf) << 8) | *(ushort *)(param_1 + 0x58) & 0xf0ff;
    FUN_ram_400563f0();
    FUN_ram_40044572(param_1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40056618.
 * REA evidence: ev_419d0a00605dd6c4d21fbe0c1162dbe8cc4b2047bfa0e068d1aae4071339511b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40056752) */
/* WARNING: Removing unreachable block (ram,0x40056760) */

void FUN_ram_40056618(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [16];
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  uint uStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_48 [13];
  byte bStack_3b;
  undefined4 uStack_24;
  
  iVar2 = FUN_ram_40049f5e(param_2);
  iVar3 = FUN_ram_40043ae2(&PTR_DAT_ram_4009751c_ram_40097994,param_2);
  if (iVar3 == 1) {
    iVar3 = FUN_ram_40049f56(param_2);
    FUN_ram_40056052(iVar3,auStack_b0);
    if (iVar2 == 0x2d) {
      if ((*(ushort *)(iVar3 + 0x58) & 3) == 2) {
        FUN_ram_40056474(iVar3,*(undefined4 *)(iVar3 + 0x2c));
      }
      else {
        FUN_ram_40043a8a(iVar3);
      }
    }
    else if (iVar2 == 0x16) {
      piVar4 = (int *)FUN_ram_40049f68(param_2);
      if (((*(int *)(iVar3 + 0x44) != 0) || (*(int *)(iVar3 + 0x48) != 0x100)) ||
         (*(int *)(iVar3 + 0x4c) != 0x100)) {
        iVar5 = FUN_ram_400440f2(iVar3);
        iVar6 = FUN_ram_400440fe(iVar3);
        FUN_ram_4004d412(&uStack_88,iVar5,iVar6,*(undefined4 *)(iVar3 + 0x44),
                         *(undefined2 *)(iVar3 + 0x48),*(undefined2 *)(iVar3 + 0x4c),auStack_b0);
        iVar2 = -uStack_88;
        if ((int)-uStack_88 < *piVar4) {
          iVar2 = *piVar4;
        }
        *piVar4 = iVar2;
        iVar3 = -iStack_84;
        if (-iStack_84 < iVar2) {
          iVar3 = iVar2;
        }
        *piVar4 = iVar3;
        iVar2 = iStack_80 - iVar5;
        if (iStack_80 - iVar5 < iVar3) {
          iVar2 = iVar3;
        }
        *piVar4 = iVar2;
        iVar3 = iStack_7c - iVar6;
        if (iStack_7c - iVar6 < iVar2) {
          iVar3 = iVar2;
        }
        *piVar4 = iVar3;
      }
    }
    else if (iVar2 == 0x13) {
      puVar7 = (undefined4 *)FUN_ram_40049f68(param_2);
      iVar5 = *(int *)(iVar3 + 0x3c);
      iVar2 = FUN_ram_400440f2(iVar3);
      if (((iVar5 == iVar2) &&
          (iVar5 = *(int *)(iVar3 + 0x40), iVar2 = FUN_ram_400440fe(iVar3), iVar5 == iVar2)) &&
         ((*(int *)(iVar3 + 0x48) != 0x100 ||
          ((((*(int *)(iVar3 + 0x4c) != 0x100 || (*(int *)(iVar3 + 0x44) != 0)) ||
            (*(int *)(iVar3 + 0x50) != *(int *)(iVar3 + 0x3c) / 2)) ||
           (*(int *)(iVar3 + 0x54) != *(int *)(iVar3 + 0x40) / 2)))))) {
        uVar8 = FUN_ram_400440f2(iVar3);
        uVar9 = FUN_ram_400440fe(iVar3);
        FUN_ram_4004d412(&uStack_88,uVar8,uVar9,*(undefined4 *)(iVar3 + 0x44),
                         *(undefined2 *)(iVar3 + 0x48),*(undefined2 *)(iVar3 + 0x4c),auStack_b0);
        uStack_88 = uStack_88 + *(int *)(iVar3 + 0x14);
        iStack_84 = iStack_84 + *(int *)(iVar3 + 0x18);
        iStack_80 = iStack_80 + *(int *)(iVar3 + 0x14);
        iStack_7c = iStack_7c + *(int *)(iVar3 + 0x18);
      }
      else {
        FUN_ram_4004490a(iVar3,&uStack_88);
      }
      uVar1 = FUN_ram_4004951a(&uStack_88,*puVar7,0);
      *(undefined1 *)(puVar7 + 1) = uVar1;
    }
    else if (iVar2 == 0x2f) {
      puVar7 = (undefined4 *)FUN_ram_40049f68(param_2);
      *puVar7 = *(undefined4 *)(iVar3 + 0x3c);
      puVar7[1] = *(undefined4 *)(iVar3 + 0x40);
    }
    else if ((iVar2 - 0x15U < 7) && ((0x49U >> (iVar2 - 0x15U & 0x1f) & 1) != 0)) {
      iVar2 = FUN_ram_40049f5e(param_2);
      iVar3 = FUN_ram_40049f56(param_2);
      if (iVar2 == 0x15) {
        piVar4 = (int *)FUN_ram_40049f68(param_2);
        if (*piVar4 != 2) {
          if (((((*(ushort *)(iVar3 + 0x58) & 2) == 0) &&
               (iVar2 = FUN_ram_40049dac((*(uint *)(iVar3 + 0x58) & 0x7f) >> 2), iVar2 == 0)) &&
              (uStack_88 = FUN_ram_40046afe(iVar3,0,0x44), (uStack_88 & 0xff) == 0xff)) &&
             (*(int *)(iVar3 + 0x44) == 0)) {
            if ((*(int *)(iVar3 + 0x48) == 0x100) && (*(int *)(iVar3 + 0x4c) == 0x100)) {
              puVar10 = (uint *)(iVar3 + 0x14);
            }
            else {
              FUN_ram_40056052(iVar3,&iStack_98);
              uVar8 = FUN_ram_400440f2(iVar3);
              uVar9 = FUN_ram_400440fe(iVar3);
              FUN_ram_4004d412(&uStack_88,uVar8,uVar9,0,*(undefined2 *)(iVar3 + 0x48),
                               *(undefined2 *)(iVar3 + 0x4c),&iStack_98);
              uStack_88 = uStack_88 + *(int *)(iVar3 + 0x14);
              iStack_84 = iStack_84 + *(int *)(iVar3 + 0x18);
              iStack_80 = iStack_80 + *(int *)(iVar3 + 0x14);
              iStack_7c = iStack_7c + *(int *)(iVar3 + 0x18);
              puVar10 = &uStack_88;
            }
            iVar2 = FUN_ram_4004963c(piVar4[1],puVar10,0);
            if ((iVar2 != 0) && (*(int *)(iVar3 + 0x30) == 0)) {
              return;
            }
          }
          *piVar4 = 1;
        }
      }
      else if (((iVar2 == 0x18) && (*(int *)(iVar3 + 0x40) != 0)) &&
              ((*(int *)(iVar3 + 0x3c) != 0 &&
               ((*(int *)(iVar3 + 0x48) != 0 && (*(int *)(iVar3 + 0x4c) != 0)))))) {
        iVar2 = FUN_ram_40043c3a(param_2);
        if ((*(ushort *)(iVar3 + 0x58) & 2) == 0) {
          FUN_ram_4004d2ce(&uStack_88);
          FUN_ram_40043894(iVar3,0,&uStack_88);
          iVar5 = iVar2 + 0x18;
          FUN_ram_4000305c(auStack_a8,iVar5,0x10);
          FUN_ram_40056052(iVar3,auStack_48);
          uStack_58 = *(undefined4 *)(iVar3 + 0x48);
          uStack_54 = *(undefined4 *)(iVar3 + 0x4c);
          uStack_5c = *(undefined4 *)(iVar3 + 0x44);
          bStack_3b = (byte)(((*(uint *)(iVar3 + 0x58) & 0xff) >> 7) << 4) |
                      (byte)(*(uint *)(iVar3 + 0x58) >> 8) >> 4 | bStack_3b & 0xe0;
          uStack_24 = *(undefined4 *)(iVar3 + 0x30);
          iStack_98 = *(int *)(iVar3 + 0x14);
          uStack_6c = *(undefined4 *)(iVar3 + 0x2c);
          iStack_90 = iStack_98 + *(int *)(iVar3 + 0x3c) + -1;
          iStack_94 = *(int *)(iVar3 + 0x18);
          iStack_8c = iStack_94 + *(int *)(iVar3 + 0x40) + -1;
          uVar11 = (*(uint *)(iVar3 + 0x58) & 0xfff) >> 8;
          if (uVar11 < 10) {
            FUN_ram_40049866(iVar3 + 0x14,&iStack_98,uVar11,*(undefined4 *)(iVar3 + 0x34),
                             *(undefined4 *)(iVar3 + 0x38));
          }
          else if ((*(ushort *)(iVar3 + 0x58) & 0xf00) == 0xc00) {
            FUN_ram_40049494(iVar5,iVar5,iVar3 + 0x14);
            FUN_ram_4004947a(&iStack_98,*(undefined4 *)(iVar3 + 0x34),*(undefined4 *)(iVar3 + 0x38))
            ;
            iVar6 = *(int *)(iVar3 + 0x40);
            iVar3 = *(int *)(iVar3 + 0x3c);
            if (iVar6 == 0) {
              iVar12 = -1;
            }
            else {
              iVar12 = ((*(int *)(iVar2 + 0x1c) - iStack_94) - (iVar6 + -1)) / iVar6;
            }
            if (iVar3 == 0) {
              iVar13 = -1;
            }
            else {
              iVar13 = ((*(int *)(iVar2 + 0x18) - iStack_98) - (iVar3 + -1)) / iVar3;
            }
            FUN_ram_4004947a(&iStack_98,iVar13 * iVar3,iVar12 * iVar6);
            bStack_3b = bStack_3b | 0x20;
          }
          FUN_ram_4004d5b2(iVar2,&uStack_88,&iStack_98);
          FUN_ram_4000305c(iVar5,auStack_a8,0x10);
        }
        else if ((*(ushort *)(iVar3 + 0x58) & 3) == 2) {
          FUN_ram_4004d790(&uStack_88);
          FUN_ram_40043798(iVar3,0,&uStack_88);
          uStack_6c = *(undefined4 *)(iVar3 + 0x2c);
          FUN_ram_4004d806(iVar2,&uStack_88,iVar3 + 0x14);
        }
      }
    }
  }
  return;
}


/* NanoCore 1.10, address 0x40056a2a.
 * REA evidence: ev_fa015c2bc15555cc6f90b2b183b51ba7e8f334663e30430636a51f3e768fbef8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056a2a(int param_1)

{
  if (((*(byte *)(param_1 + 0x5c) & 0x20) != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    FUN_ram_40059be4();
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xdf;
  return;
}


/* NanoCore 1.10, address 0x40056a5c.
 * REA evidence: ev_f175199484a146784d37860e23d23620bff60d5fc4fe18f5309d25ec4f62bd69
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056a5c(undefined4 param_1,int param_2)

{
  FUN_ram_40056a2a(param_2);
  if ((*(byte *)(param_2 + 0x5c) & 8) == 0) {
    FUN_ram_40059be4(*(undefined4 *)(param_2 + 0x2c));
  }
  *(undefined4 *)(param_2 + 0x2c) = 0;
  return;
}


/* NanoCore 1.10, address 0x40056a90.
 * REA evidence: ev_aae4d8471816ce2c15843fb8e2eb1e6db83f33b920c1ebafcfba3c542d0dddf9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40056ab6) */
/* WARNING: Removing unreachable block (ram,0x40056abe) */

void FUN_ram_40056a90(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 2) {
    iVar1 = FUN_ram_4004b4b4(param_3,param_4,param_5,param_6);
    iVar1 = iVar1 / 2;
    iVar2 = ((param_7[2] - *param_7) + 1) / 2;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    iVar1 = FUN_ram_4004b4b4(param_3,param_4,param_5,param_6);
    iVar2 = (param_7[2] - *param_7) + 1;
  }
  *param_1 = (iVar2 - iVar1) + *param_1;
  return;
}


/* NanoCore 1.10, address 0x40056aea.
 * REA evidence: ev_13a0621a4044575cf8edbddbb1d07c37afeb815c568706b7d20d4f06e59ceb66
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056aea(int param_1,int param_2,int param_3)

{
  if (param_3 == 2) {
    if (*(int *)(param_1 + 0x34) < 1) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
    *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    return;
  }
  if (param_3 != 3) {
    return;
  }
  if (*(int *)(param_1 + 0x34) < 1) {
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  }
  *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return;
}


/* NanoCore 1.10, address 0x40056b34.
 * REA evidence: ev_f39e679890c4fc5032305b104351aa0cc12fa78e410e7c0a23779a122ce358d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056b34(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (((*(byte *)(param_1 + 0x5c) & 7) == 1) && (*(int *)(param_1 + 0x34) != -1)) {
    iVar1 = (**(code **)(gp + -0x3c))(*(undefined4 *)(param_1 + 0x2c),*(int *)(param_1 + 0x34) + -3)
    ;
    iVar2 = param_1 + 0x30;
    if ((*(byte *)(param_1 + 0x5c) & 0x20) != 0) {
      iVar2 = *(int *)(param_1 + 0x30);
    }
    uVar5 = 0;
    while( true ) {
      iVar3 = *(int *)(param_1 + 0x2c);
      iVar4 = iVar1 + uVar5;
      if (*(char *)(iVar3 + iVar4) == '\0') break;
      *(undefined1 *)(iVar3 + iVar4) = *(undefined1 *)(iVar2 + uVar5);
      uVar5 = uVar5 + 1 & 0xff;
    }
    *(undefined1 *)(iVar3 + iVar4) = *(undefined1 *)(iVar2 + uVar5);
    FUN_ram_40056a2a(param_1);
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40056ba6.
 * REA evidence: ev_571cb559edba20073081edefb8df5e0b8ee1d41a2eb2f0461677062cbfe43f72
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056ba6(undefined4 param_1)

{
  FUN_ram_40046afe(param_1,0,0x5c);
  return;
}


/* NanoCore 1.10, address 0x40056bba.
 * REA evidence: ev_aacaba3b8a9ee71daa5df09399fc30ee35e0ed732fa5d6b395f3d488e4e98875
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056bba(undefined4 param_1)

{
  FUN_ram_40046afe(param_1,0,0x5b);
  return;
}


/* NanoCore 1.10, address 0x40056bce.
 * REA evidence: ev_247c7d6b64a4a9b566b03c0ac1c2969430978594f88fa7e28d81d9a54edcc52a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056bce(undefined4 param_1)

{
  FUN_ram_40046afe(param_1,0,0x5a);
  return;
}


/* NanoCore 1.10, address 0x40056be2.
 * REA evidence: ev_7012a213250db67c56bc4f0bd2be0fe9d8185c912f3a91df0c422e0ad5faf5ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40056be2(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 0x5c);
  iVar3 = FUN_ram_40046afe(param_1,0,1);
  uVar2 = (bVar1 & 0x1f) >> 4;
  if (((iVar3 == 0x200007d1) && (iVar3 = FUN_ram_40046afe(param_1,0,5), iVar3 == 0x1fffffff)) &&
     (-1 < (int)((uint)*(ushort *)(param_1 + 0x2a) << 0x14))) {
    uVar2 = uVar2 | 2;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40056c3a.
 * REA evidence: ev_dc01ae709c6fa7e200edfbb4e7819ec270e991cdb721b51bcba41ddfa908a360
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40056c3a(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_4004316a(&PTR_DAT_ram_4009751c_ram_400979c8,param_1);
  FUN_ram_400432a0();
  return uVar1;
}


/* NanoCore 1.10, address 0x40056c5a.
 * REA evidence: ev_411bf385295b8ea6a6fd03373c92d175305da7969fab86188e27c2792214bb79
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40056c5a(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  int aiStack_50 [2];
  int iStack_48;
  
  iVar13 = *param_2;
  iVar3 = FUN_ram_40046afe(param_1,0,0x12);
  iVar14 = param_2[1];
  aiStack_50[0] = iVar3;
  aiStack_50[0] = FUN_ram_40046afe(param_1,0,0x10);
  iVar14 = iVar14 - aiStack_50[0];
  FUN_ram_40044166(param_1,aiStack_50);
  iVar10 = *(int *)(param_1 + 0x2c);
  iVar12 = iStack_48 - aiStack_50[0];
  iVar4 = FUN_ram_40056bce(param_1);
  iVar5 = FUN_ram_40056ba6(param_1);
  iVar6 = FUN_ram_40056bba(param_1);
  iVar9 = *(int *)(iVar4 + 0xc);
  FUN_ram_40056be2(param_1);
  iVar5 = iVar5 + iVar9;
  uVar2 = 0;
  while (iVar11 = iVar10 + uVar2, uVar1 = uVar2, *(char *)(iVar10 + uVar2) != '\0') {
    iVar7 = FUN_ram_4004b270(iVar11,iVar4,iVar6,iVar12 + 1,0);
    uVar1 = uVar2 + iVar7;
    if (iVar14 <= iVar9) {
      uStack_54 = uVar1;
      iVar5 = (**(code **)(gp + -0x30))(iVar10,&uStack_54);
      if ((iVar5 != 10) && (*(char *)(iVar10 + uVar1) == '\0')) {
        uVar1 = uVar1 + 1;
      }
      break;
    }
    iVar9 = iVar9 + iVar5;
    uVar2 = uVar1;
  }
  iStack_60 = 0;
  uVar8 = FUN_ram_40046fda(param_1,0,*(undefined4 *)(param_1 + 0x2c));
  FUN_ram_40056a90(&iStack_60,uVar8,iVar11,uVar1 - uVar2,iVar4,iVar6,aiStack_50);
  iStack_5c = 0;
  iVar5 = iStack_5c;
  if (uVar1 != 0) {
    while (iVar5 = iStack_5c, iStack_5c + uVar2 < uVar1) {
      FUN_ram_4004b474(iVar11,&uStack_58,&uStack_54,&iStack_5c);
      iVar9 = FUN_ram_400589b4(iVar4,uStack_58,uStack_54);
      if (((iVar13 - iVar3 < iVar9 + iStack_60) || (iStack_5c + uVar2 == uVar1)) ||
         (*(char *)(iVar11 + iVar5) == '\0')) break;
      iStack_60 = iVar9 + iStack_60 + iVar6;
    }
  }
  iStack_5c = iVar5;
  iVar3 = (**(code **)(gp + -0x38))(iVar11,iStack_5c);
  iVar4 = (**(code **)(gp + -0x38))(iVar10,uVar2);
  return iVar4 + iVar3;
}


/* NanoCore 1.10, address 0x40056dce.
 * REA evidence: ev_8343da977c645f53951dc31fc64993d0a8b1c6e47444e20ad3f1f9378bcab3b9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40056dce(int param_1)

{
  uint uVar1;
  uint __n;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  void *__dest;
  void *__src;
  bool bVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined1 *puStack_84;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  byte bStack_3a;
  byte bStack_34;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 0x40;
  FUN_ram_40044166(param_1,&iStack_98);
  iVar10 = iStack_90 - iStack_98;
  iVar2 = FUN_ram_40056bce(param_1);
  iVar3 = FUN_ram_40056ba6(param_1);
  iVar4 = FUN_ram_40056bba(param_1);
  uVar5 = FUN_ram_40056be2(param_1);
  FUN_ram_4004b516(&iStack_a0,*(undefined4 *)(param_1 + 0x2c),iVar2,iVar4,iVar3,iVar10 + 1,uVar5);
  FUN_ram_400441fa(param_1);
  bVar9 = *(byte *)(param_1 + 0x5c) & 7;
  if (bVar9 == 2) {
    iVar4 = FUN_ram_40046afe(param_1,0,99);
    iStack_88 = iVar4;
    iVar3 = FUN_ram_40046afe(param_1,0,100);
    iStack_88 = iVar3;
    if (iVar3 == 0) {
      iVar3 = FUN_ram_40049394(0x28,300,10000);
    }
    FUN_ram_400491e2(&iStack_88);
    uStack_44 = 0xffff;
    uStack_50 = 300;
    uStack_48 = 300;
    iVar10 = (iStack_90 - iStack_98) + 1;
    if (iVar10 < iStack_a0) {
      iStack_5c = iVar10 - iStack_a0;
      iStack_64 = 0;
      uStack_60 = 0x80000000;
      puStack_84 = &LAB_ram_40056a8a;
      iStack_88 = param_1;
      iVar6 = FUN_ram_4004934c(param_1);
      iVar10 = iStack_64;
      if (iVar6 == 0) {
        uVar11 = 0;
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(iVar6 + 0x34);
        uVar11 = *(uint *)(iVar6 + 0x54) & 1;
      }
      if ((iVar8 < iStack_58) && (bStack_3a = bStack_3a & 0xfe, iStack_54 = iVar8, uVar11 != 0)) {
        bStack_34 = bStack_34 | 1;
        iStack_64 = iStack_5c;
        iStack_5c = iVar10;
      }
      iStack_58 = iVar3;
      iStack_4c = iVar3;
      if (iVar4 != 0) {
        FUN_ram_40056aea(&iStack_88,iVar4,*(uint *)(param_1 + 0x5c) & 7);
      }
      FUN_ram_40049228(&iStack_88);
      bVar7 = true;
    }
    else {
      iStack_88 = param_1;
      FUN_ram_400492c8(param_1,&LAB_ram_40056a8a);
      bVar7 = false;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    iVar10 = (iStack_8c - iStack_94) + 1;
    if ((iStack_9c <= iVar10) || (bVar7)) {
LAB_ram_400570fe:
      FUN_ram_400492c8(param_1,&LAB_ram_40056a84);
      *(undefined4 *)(param_1 + 0x58) = 0;
      goto LAB_ram_40056f9a;
    }
    iStack_5c = (iVar10 - iStack_9c) - *(int *)(iVar2 + 0xc);
    iStack_64 = 0;
    uStack_60 = 0x80000000;
    puStack_84 = &LAB_ram_40056a84;
    iVar10 = FUN_ram_4004934c(param_1);
    iVar2 = iStack_64;
    iVar6 = 0;
    uVar11 = 0;
    if (iVar10 != 0) {
      iVar6 = *(int *)(iVar10 + 0x34);
      uVar11 = *(uint *)(iVar10 + 0x54) & 1;
    }
    if ((iVar6 < iStack_58) && (bStack_3a = bStack_3a & 0xfe, iStack_54 = iVar6, uVar11 != 0)) {
      bStack_34 = bStack_34 | 1;
      iStack_64 = iStack_5c;
      iStack_5c = iVar2;
    }
    iStack_58 = iVar3;
    iStack_4c = iVar3;
    if (iVar4 != 0) {
LAB_ram_40056f88:
      FUN_ram_40056aea(&iStack_88,iVar4,*(uint *)(param_1 + 0x5c) & 7);
    }
  }
  else {
    if (bVar9 != 3) {
      if (bVar9 == 1) {
        if ((((iStack_8c - iStack_94) + 1 < iStack_9c) && (*(int *)(iVar2 + 0xc) < iStack_9c)) &&
           (uVar11 = (**(code **)(gp + -0x28))(*(undefined4 *)(param_1 + 0x2c)), 3 < uVar11)) {
          iVar10 = FUN_ram_400589b4(iVar2,0x2e,0x2e);
          iVar6 = *(int *)(iVar2 + 0xc);
          iStack_88 = (iVar10 + iVar4) * -3 + (iStack_90 - iStack_98) + 1;
          iVar4 = (iStack_8c - iStack_94) + 1;
          iVar2 = iVar4;
          if (iVar3 + iVar6 != 0) {
            iVar2 = iVar4 % (iVar3 + iVar6);
          }
          iVar3 = -iVar3;
          if (iVar6 <= iVar2) {
            iVar3 = iVar6;
          }
          puStack_84 = (undefined1 *)((iVar4 - iVar2) + iVar3);
          iVar2 = FUN_ram_40056c5a(param_1,&iStack_88,0);
          uVar11 = thunk_FUN_ram_40005244(*(undefined4 *)(param_1 + 0x2c));
          uStack_a4 = (**(code **)(gp + -0x3c))(*(undefined4 *)(param_1 + 0x2c),iVar2);
          while( true ) {
            uVar1 = uStack_a4;
            uVar12 = uStack_a4 + 3;
            if (uVar12 <= uVar11) break;
            iVar2 = iVar2 + -1;
            (**(code **)(gp + -0x30))(*(undefined4 *)(param_1 + 0x2c),&uStack_a4);
          }
          iVar3 = 4;
          __n = 0;
          do {
            iVar4 = (**(code **)(gp + -0x2c))(*(int *)(param_1 + 0x2c) + uStack_a4);
            __n = __n + iVar4 & 0xff;
            (**(code **)(gp + -0x34))(*(undefined4 *)(param_1 + 0x2c),&uStack_a4);
            if ((3 < __n) || (uVar11 < uStack_a4)) break;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          __src = (void *)(*(int *)(param_1 + 0x2c) + uVar1);
          FUN_ram_40056a2a(param_1);
          if (__n < 5) {
            *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xdf;
            memcpy((void *)(param_1 + 0x30),__src,__n);
          }
          else {
            __dest = (void *)FUN_ram_40059bae(__n + 1);
            *(void **)(param_1 + 0x30) = __dest;
            if (__dest == (void *)0x0) goto LAB_ram_40056f9a;
            memcpy(__dest,__src,__n);
            *(undefined1 *)(*(int *)(param_1 + 0x30) + __n) = 0;
            *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 0x20;
          }
          *(undefined1 *)(*(int *)(param_1 + 0x2c) + uVar1) = 0x2e;
          *(undefined1 *)(*(int *)(param_1 + 0x2c) + uVar1 + 1) = 0x2e;
          *(undefined1 *)(uVar1 + *(int *)(param_1 + 0x2c) + 2) = 0x2e;
          *(undefined1 *)(*(int *)(param_1 + 0x2c) + uVar12) = 0;
          *(int *)(param_1 + 0x34) = iVar2 + 3;
        }
        else {
          *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
        }
      }
      goto LAB_ram_40056f9a;
    }
    iVar4 = FUN_ram_40046afe(param_1,0,99);
    iStack_88 = iVar4;
    iVar3 = FUN_ram_40046afe(param_1,0,100);
    iStack_88 = iVar3;
    if (iVar3 == 0) {
      iVar3 = FUN_ram_40049394(0x28,300,10000);
    }
    FUN_ram_400491e2(&iStack_88);
    uStack_44 = 0xffff;
    if ((iStack_90 - iStack_98) + 1 < iStack_a0) {
      iStack_88 = param_1;
      iVar10 = FUN_ram_400589b4(iVar2,0x20,0x20);
      iStack_64 = 0;
      iStack_5c = iVar10 * -3 - iStack_a0;
      uStack_60 = 0x80000000;
      puStack_84 = &LAB_ram_40056a8a;
      iStack_58 = iVar3;
      iVar10 = FUN_ram_4004934c(param_1);
      iVar6 = 0;
      if (iVar10 != 0) {
        iVar6 = *(int *)(iVar10 + 0x34);
      }
      if (iVar4 == 0) {
        if (iVar6 < iStack_58) {
          bStack_3a = bStack_3a & 0xfe;
          iStack_54 = iVar6;
        }
      }
      else {
        FUN_ram_40056aea(&iStack_88,iVar4,*(uint *)(param_1 + 0x5c) & 7);
      }
      FUN_ram_40049228(&iStack_88);
      bVar7 = true;
    }
    else {
      iStack_88 = param_1;
      FUN_ram_400492c8(param_1,&LAB_ram_40056a8a);
      bVar7 = false;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    if ((iStack_9c <= (iStack_8c - iStack_94) + 1) || (bVar7)) goto LAB_ram_400570fe;
    iStack_5c = -*(int *)(iVar2 + 0xc) - iStack_9c;
    iStack_64 = 0;
    uStack_60 = 0x80000000;
    puStack_84 = &LAB_ram_40056a84;
    iStack_58 = iVar3;
    iVar2 = FUN_ram_4004934c(param_1);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x34);
    }
    if (iVar4 != 0) goto LAB_ram_40056f88;
    if (iVar3 < iStack_58) {
      bStack_3a = bStack_3a & 0xfe;
      iStack_54 = iVar3;
    }
  }
  FUN_ram_40049228(&iStack_88);
LAB_ram_40056f9a:
  FUN_ram_40044572(param_1);
  return;
}


