/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4002c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4002c00a.
 * REA evidence: ev_1fe18f8374b3e40b7f141874c118060daa5057be066edf499575cc9d829f0280
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002c00a(void)

{
  if (_DAT_ram_3007ad50 != 0) {
    FUN_ram_40004ab8(0x3007ad24);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002c022.
 * REA evidence: ev_32ab83feb863e4e2877d1749d27f06c10ba4642af8e09b968546022824dacd9a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002c022(void)

{
  int iVar1;
  
  if ((_DAT_ram_3007ad50 == 0) &&
     (iVar1 = FUN_ram_4000492c(0x3007ad24,s_uilay_ram_40096dc4,1), iVar1 == 0)) {
    _DAT_ram_3007ad50 = 1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4002c05a.
 * REA evidence: ev_b0cc4a50d2df0d4789f6a329ff36a32941bb9c62ed19b79155f7d8a700f47b79
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002c05a(void)

{
  if (_DAT_ram_3007ad50 != 0) {
    FUN_ram_400049c6(0x3007ad24,0xffffffff);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002c074.
 * REA evidence: ev_4b520d955e840a116e2fa4545338132cb62b06abe69a73611116b36fe242fe0c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002c074(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    for (iVar1 = 0; param_2 != iVar1; iVar1 = iVar1 + 1) {
      if (*(int *)(param_1 + 8 + iVar1 * 0xc) != 0) {
        FUN_ram_4002c30c();
      }
    }
    FUN_ram_4002c30c(param_1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002c0b8.
 * REA evidence: ev_9a656c06554a8fd7d4c6f10f849dc429b6b17c2f47d95bbee7da03c05c310d8c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002c0b8(void)

{
  uint uVar1;
  
  if (_DAT_ram_3007ad20 != 0) {
    uVar1 = 0;
    while( true ) {
      if (_DAT_ram_3007ad1c <= uVar1) break;
      if (*(int *)(_DAT_ram_3007ad20 + uVar1 * 0xc + 8) != 0) {
        FUN_ram_4002c30c();
      }
      uVar1 = uVar1 + 1;
    }
    FUN_ram_4002c30c();
    _DAT_ram_3007ad20 = 0;
    _DAT_ram_3007ad1c = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x4002c114.
 * REA evidence: ev_8e7f31cb05bfeefb5c9e1da76d3937130d2ea73189206fb479996d21aa35c80a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002c114(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uStack_68;
  int iStack_64;
  undefined1 auStack_60 [16];
  int iStack_50;
  int iStack_4c;
  int iStack_40;
  uint uStack_3c;
  
  iVar1 = FUN_ram_4002bcfc(auStack_60);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_ram_4002bf02(0x10,&iStack_50,0x10);
  if (iVar1 == 0) {
    if (iStack_50 != 0x494e4458) {
      return 0xffffffff;
    }
    iVar1 = FUN_ram_4002bf02(iStack_4c * 0x1c + 0x20,&iStack_40,0x10);
    if (iVar1 == 0) {
      if (iStack_40 != 0x4c415931) {
        return 0xffffffff;
      }
      iVar1 = iStack_4c * 0x1c + 0x30;
      if (0xf < uStack_3c - 1) {
        return 0xffffffff;
      }
      puVar2 = (undefined4 *)FUN_ram_4002c2d2(uStack_3c,0xc);
      if (puVar2 == (undefined4 *)0x0) {
        return 0xfffffffb;
      }
      uVar6 = 0;
      puVar5 = puVar2;
      while( true ) {
        if (uStack_3c <= uVar6) {
          FUN_ram_4002c0b8();
          _DAT_ram_3007ad1c = uStack_3c;
          _DAT_ram_3007ad20 = puVar2;
          return 0;
        }
        iVar3 = FUN_ram_4002bf02(iVar1,&uStack_68,8);
        if (iVar3 != 0) break;
        *puVar5 = uStack_68;
        puVar5[1] = iStack_64;
        if (0x3f < iStack_64 - 1U) {
          FUN_ram_4002c0b8();
          FUN_ram_4002c074(puVar2,uStack_3c);
          return 0xffffffff;
        }
        iVar3 = FUN_ram_4002c2d2(iStack_64,0x1a);
        if (iVar3 == 0) {
          FUN_ram_4002c0b8();
          FUN_ram_4002c074(puVar2,uStack_3c);
          return 0xfffffffb;
        }
        iVar4 = FUN_ram_4002bf02(iVar1 + 8,iVar3,iStack_64 * 0x1a);
        if (iVar4 != 0) {
          FUN_ram_4002c30c(iVar3);
          FUN_ram_4002c0b8();
          break;
        }
        uVar6 = uVar6 + 1;
        puVar5[2] = iVar3;
        iVar1 = iVar1 + 8 + iStack_64 * 0x1a;
        puVar5 = puVar5 + 3;
      }
      FUN_ram_4002c074(puVar2,uStack_3c);
    }
  }
  return 0xfffffff8;
}


/* NanoCore 1.11, address 0x4002c24a.
 * REA evidence: ev_452362d499b00060f0a7e4997ec4c2129c6331e9e42a459e7d4afb5a2e7e43c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002c24a(void)

{
  undefined4 uVar1;
  
  FUN_ram_4002c05a();
  uVar1 = FUN_ram_4002c114();
  FUN_ram_4002c00a();
  return uVar1;
}


/* NanoCore 1.11, address 0x4002c264.
 * REA evidence: ev_a98daf2370e5568170d4fa3e16d86a8c1de8b4e48cd03002f86fa55614ea683c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002c264(void)

{
  FUN_ram_4002c05a();
  FUN_ram_4002c114();
  FUN_ram_4002c00a();
  return;
}


/* NanoCore 1.11, address 0x4002c278.
 * REA evidence: ev_717ca98e9da2fdc9d1d685fb28513c3f4044b7e1ba542898418b6765f39d0c19
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002c278(void)

{
  if (DAT_ram_3007ad58 == '\0') {
    DAT_ram_3007ad58 = '\x01';
    _DAT_ram_3007ad54 = FUN_ram_40005fdc(s_heap_cma_ram_40096dcc,7);
  }
  return _DAT_ram_3007ad54;
}


/* NanoCore 1.11, address 0x4002c2b6.
 * REA evidence: ev_f1a960a8646ce7920fceda192abc4600559fc0dacb4fb8ba434ca58752d3b48b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002c2b6(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002c278();
  if (iVar1 != 0) {
    FUN_ram_40005834(iVar1,param_1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002c2d2.
 * REA evidence: ev_f980f9805ec14155bd50aff67c7ff189827bc2608246fadb07e0b12d4a955ba1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002c2d2(uint param_1,uint param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = 0;
    if ((int)((ulonglong)param_1 * (ulonglong)param_2 >> 0x20) == 0) {
      iVar1 = FUN_ram_4002c2b6(param_1 * param_2);
      if (iVar1 != 0) {
        FUN_ram_4000504c(iVar1,0,param_1 * param_2);
      }
    }
    return iVar1;
  }
  iVar1 = FUN_ram_4002c2b6(0);
  return iVar1;
}


/* NanoCore 1.11, address 0x4002c30c.
 * REA evidence: ev_82c1bcf3544594166989436b096d5987c359ff233c272c7c46892d8acdc5ce10
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002c30c(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_4000599e();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002c314.
 * REA evidence: ev_d1e8060a27341ddfcd290eb37b893c5e11c265b51c14a3602bc511b07f5f7925
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002c314(void)

{
  int iVar1;
  int iStack_24;
  short sStack_20;
  ushort uStack_1e;
  int iStack_1c;
  uint uStack_18;
  
  DAT_ram_30049e4a = 0x1f;
  iVar1 = FUN_ram_4002bf80(&DAT_ram_40096dd8,&iStack_1c);
  if ((((iVar1 == 0) && (7 < uStack_18)) &&
      (iVar1 = FUN_ram_4002bf02(iStack_1c + 0x10,&iStack_24,8), iVar1 == 0)) &&
     ((iStack_24 == 0x314c544f && (sStack_20 == 1)))) {
    DAT_ram_30049e4a = uStack_1e & 0x7f;
  }
  return;
}


/* NanoCore 1.11, address 0x4002c37a.
 * REA evidence: ev_117d45d0d9e78f985cf08078befc3f53a1c8d0323e4a796ce707c5d5f4714194
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ushort FUN_ram_4002c37a(void)

{
  return DAT_ram_30049e4a & 1;
}


/* NanoCore 1.11, address 0x4002c386.
 * REA evidence: ev_943408acc36186234ecba44cff1c15d47542d4e015eb0b4d2591c13b253bc6a1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002c386(void)

{
  return (DAT_ram_30049e4a & 3) >> 1;
}


/* NanoCore 1.11, address 0x4002c394.
 * REA evidence: ev_7f6f9449fa59d91d92b1633a8dfddb3d3c0887565882bfdd6b3945c214e72249
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002c394(void)

{
  return (DAT_ram_30049e4a & 7) >> 2;
}


/* NanoCore 1.11, address 0x4002c3a2.
 * REA evidence: ev_117c0b27458dcb56a83d68a0b539e5291062bdcaaf4aecf3db24323be43f5691
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002c3a2(void)

{
  return (DAT_ram_30049e4a & 0x3f) >> 5;
}


/* NanoCore 1.11, address 0x4002c3b0.
 * REA evidence: ev_e36f95407fcf2cdab7493f1380acb2104613dcbb91557c6bec2a2971c583fc09
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002c3b0(void)

{
  return (DAT_ram_30049e4a & 0x7f) >> 6;
}


/* NanoCore 1.11, address 0x4002c3be.
 * REA evidence: ev_6cbc657378f36409980d55e9ffb55e4c1021893f3c09953da5c8543a8b0665dd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002c3be(void)

{
  return (DAT_ram_30049e4a & 0xf) >> 3;
}


/* NanoCore 1.11, address 0x4002c3cc.
 * REA evidence: ev_6ec5b707724c84c7a0b252f0772c1b4162e3e899f574eb7b57da9282ce60bfb3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002c3cc(void)

{
  return (DAT_ram_30049e4a & 0x1f) >> 4;
}


/* NanoCore 1.11, address 0x4002c3da.
 * REA evidence: ev_4a91cda60006dc82824496de84984d2cb1f1c45915aa8a2f42ad833c013fa90e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002c3da(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bStack_4c;
  byte bStack_4b;
  byte bStack_4a;
  byte bStack_49;
  byte bStack_48;
  byte bStack_47;
  int iStack_44;
  short sStack_40;
  ushort uStack_3e;
  int iStack_3c;
  uint uStack_38;
  
  iVar3 = 0;
  do {
    *(undefined1 *)(iVar3 + 0x3007ad84) = 1;
    *(undefined1 *)(iVar3 + 0x3007ad7c) = 0;
    *(undefined4 *)(iVar3 * 4 + 0x3007ad5c) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  iVar3 = FUN_ram_4002bf80(&DAT_ram_40096de0,&iStack_3c);
  if ((((iVar3 == 0) && (7 < uStack_38)) &&
      (iVar3 = FUN_ram_4002bf02(iStack_3c + 0x10,&iStack_44,8), iVar3 == 0)) &&
     ((iStack_44 == 0x31474250 && (sStack_40 == 1)))) {
    if ((uint)uStack_3e * 6 + 8 <= uStack_38) {
      uVar4 = 0;
      iVar3 = iStack_3c + 0x18;
      while ((uVar4 < uStack_3e && (iVar1 = FUN_ram_4002bf02(iVar3,&bStack_4c,6), iVar1 == 0))) {
        uVar2 = (uint)bStack_4c;
        if ((uVar2 < 8) && (bStack_4b < 2)) {
          *(byte *)(uVar2 + 0x3007ad84) = bStack_4b;
          if ((bStack_4a & 1) == 0) {
            *(undefined1 *)(uVar2 + 0x3007ad7c) = 0;
            *(undefined4 *)(uVar2 * 4 + 0x3007ad5c) = 0;
          }
          else {
            *(undefined1 *)(uVar2 + 0x3007ad7c) = 1;
            *(uint *)(uVar2 * 4 + 0x3007ad5c) =
                 (uint)bStack_49 << 0x10 | (uint)bStack_48 << 8 | (uint)bStack_47;
          }
        }
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 6;
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4002c4e4.
 * REA evidence: ev_8e5155d1b5763304b15671cf60d567f98c2ea94068dd7c6730b9394aee13aa44
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002c4e4(uint param_1)

{
  if (param_1 < 8) {
    return *(char *)(param_1 + 0x3007ad84) == '\x01';
  }
  return true;
}


/* NanoCore 1.11, address 0x4002c502.
 * REA evidence: ev_18a14ac8c5fc019039c77f86af16e1eb213c994140156f86cdb54b8fba0e76c2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002c502(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((param_2 != (undefined4 *)0x0) && (uVar1 = 0, param_1 < 8)) &&
     (uVar1 = 0, *(char *)(param_1 + 0x3007ad7c) != '\0')) {
    *param_2 = *(undefined4 *)(param_1 * 4 + 0x3007ad5c);
    uVar1 = 1;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4002c532.
 * REA evidence: ev_fe80f0c107637e85442e3472434fdc32f60f3b544a877aaba3a296dcc4cee010
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002c532(undefined4 *param_1)

{
  return *param_1;
}


/* NanoCore 1.11, address 0x4002c550.
 * REA evidence: ev_b265e0310fa367e1c597cc0f5f8ef28c2592ee61a1bcb414d6c766e4ced6805f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002c550(void)

{
  int iVar1;
  uint uVar2;
  int iStack_44;
  uint uStack_40;
  undefined1 auStack_38 [4];
  short sStack_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  char cStack_22;
  char cStack_21;
  
  DAT_ram_30049e50 = 0xff0000;
  DAT_ram_30049e58 = 3;
  DAT_ram_30049e56 = 4;
  DAT_ram_30049e4c = 0xffffff;
  DAT_ram_30049e54 = 2;
  iVar1 = FUN_ram_4002bf80(&DAT_ram_40096de4,&iStack_44);
  if ((((iVar1 == 0) && (0x17 < uStack_40)) &&
      (iVar1 = FUN_ram_4002bf02(iStack_44 + 0x10,auStack_38,0x18), iVar1 == 0)) &&
     ((iVar1 = FUN_ram_4002c532(auStack_38), iVar1 == 0x314c4553 && (sStack_34 == 1)))) {
    if (cStack_22 == '\0' && cStack_21 == '\0') {
      uVar2 = FUN_ram_4002c532(auStack_30);
      DAT_ram_30049e4c = uVar2 & 0xffffff;
      uVar2 = FUN_ram_4002c532(auStack_2c);
      DAT_ram_30049e50 = uVar2 & 0xffffff;
      DAT_ram_30049e58 = uStack_28;
      DAT_ram_30049e56 = uStack_26;
      DAT_ram_30049e54 = uStack_24;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4002c640.
 * REA evidence: ev_98e0d24afc2ec0696b3ef9ef4e9ad0e8b30edc9408a524ea3722d020823003c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002c640(void)

{
  return DAT_ram_30049e4c;
}


/* NanoCore 1.11, address 0x4002c64a.
 * REA evidence: ev_cd1e88e2fd105fbb1c9832e12e97ce311fb562d587b80c2e787c387639a15c6b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002c64a(void)

{
  return DAT_ram_30049e50;
}


/* NanoCore 1.11, address 0x4002c654.
 * REA evidence: ev_2682c5afbde9c0c70a66c7ba5504cbfe1fee36752d815f420e59a4efd74ea870
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined2 FUN_ram_4002c654(void)

{
  return DAT_ram_30049e58;
}


/* NanoCore 1.11, address 0x4002c65e.
 * REA evidence: ev_512a42e46a127e5fda9a9383f58f4c556da1d14c0253f031d07fc1aae7ccaac8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined2 FUN_ram_4002c65e(void)

{
  return DAT_ram_30049e56;
}


/* NanoCore 1.11, address 0x4002c668.
 * REA evidence: ev_0f7f9652810695a304945189f4e5bcf35f0390d347c8b6aa55ac6c72b7cb9e99
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined2 FUN_ram_4002c668(void)

{
  return DAT_ram_30049e54;
}


/* NanoCore 1.11, address 0x4002c672.
 * REA evidence: ev_545b05f04c789e6b58ba28cd3fc3c978fa5db944079296ffe35a921d38471f7d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002c672(void)

{
  if (_DAT_ram_3007ad8c != 0) {
    FUN_ram_4002c30c();
    _DAT_ram_3007ad8c = 0;
  }
  if (_DAT_ram_3007ad98 != 0) {
    FUN_ram_4002c30c();
    _DAT_ram_3007ad98 = 0;
  }
  _DAT_ram_3007ad90 = 0;
  return;
}


/* NanoCore 1.11, address 0x4002c6b0.
 * REA evidence: ev_62c6dee2066fe8be731afc08f0a867dfc7bf06c285e3680bc6d8d4a3809cda50
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002c6b0(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iStack_2c;
  uint uStack_28;
  
  FUN_ram_4002c672();
  iVar4 = FUN_ram_4002bf80(&DAT_ram_40096de8,&iStack_2c);
  if (((iVar4 == 0) && (7 < uStack_28)) &&
     (piVar5 = (int *)FUN_ram_4002c2b6(uStack_28), piVar5 != (int *)0x0)) {
    iVar4 = FUN_ram_4002bf02(iStack_2c + 0x10,piVar5,uStack_28);
    uVar1 = _DAT_ram_3007ad90;
    if (((iVar4 == 0) && (*piVar5 == 0x32525453)) && ((short)piVar5[1] == 1)) {
      uVar2 = *(ushort *)((int)piVar5 + 6);
      uVar3 = (uint)uVar2;
      if ((uVar3 - 1 & 0xffff) < 0x100) {
        iVar4 = 0;
        uVar8 = 8;
        for (uVar6 = 0; uVar6 < uVar3; uVar6 = uVar6 + 1) {
          if (uStack_28 < uVar8 + 4) goto LAB_ram_4002c6f8;
          uVar9 = (uint)*(ushort *)((int)piVar5 + uVar8 + 2);
          uVar8 = uVar8 + 4 + uVar9;
          if (uStack_28 < uVar8) goto LAB_ram_4002c6f8;
          iVar4 = iVar4 + uVar9 + 1;
        }
        _DAT_ram_3007ad8c = FUN_ram_4002c2d2(uVar3,8);
        iVar4 = FUN_ram_4002c2b6(iVar4);
        _DAT_ram_3007ad98 = iVar4;
        if ((_DAT_ram_3007ad8c == 0) || (iVar4 == 0)) {
          FUN_ram_4002c30c(piVar5);
          FUN_ram_4002c672();
          return;
        }
        uVar6 = 0;
        iVar10 = 8;
        do {
          uVar1 = *(ushort *)((int)piVar5 + iVar10 + 2);
          iVar7 = _DAT_ram_3007ad8c + uVar6 * 8;
          *(ushort *)(_DAT_ram_3007ad8c + uVar6 * 8) =
               CONCAT11(*(undefined1 *)((int)piVar5 + iVar10 + 1),
                        *(undefined1 *)((int)piVar5 + iVar10));
          uVar8 = (uint)uVar1;
          *(int *)(iVar7 + 4) = iVar4;
          if (uVar8 != 0) {
            memcpy(iVar4,(int)piVar5 + iVar10 + 4,uVar8);
          }
          *(undefined1 *)(iVar4 + uVar8) = 0;
          uVar6 = uVar6 + 1;
          iVar4 = iVar4 + uVar8 + 1;
          iVar10 = iVar10 + 4 + uVar8;
          uVar1 = uVar2;
        } while (uVar3 != uVar6);
      }
    }
LAB_ram_4002c6f8:
    _DAT_ram_3007ad90 = uVar1;
    FUN_ram_4002c30c(piVar5);
  }
  return;
}


/* NanoCore 1.11, address 0x4002c834.
 * REA evidence: ev_4af243a6e58a6c71bbb9e82630142edc6ca97a7dafb5bc8739ca0542a3c0af69
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_ram_4002c834(uint param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    return s_ep__02x_clear_halt_ram_40094730 + 0x14;
  }
  if ((_DAT_ram_3007ad94 == (code *)0x0) ||
     (pcVar3 = (char *)(*_DAT_ram_3007ad94)(), pcVar3 == (char *)0x0)) {
    if (_DAT_ram_3007ad8c != 0) {
      uVar2 = 0;
      do {
        if ((uint)_DAT_ram_3007ad90 <= (uVar2 & 0xffff)) goto LAB_ram_4002c852;
        iVar1 = uVar2 * 8;
        uVar2 = uVar2 + 1;
      } while (*(ushort *)(_DAT_ram_3007ad8c + -8 + uVar2 * 8) != param_1);
      pcVar3 = *(char **)(_DAT_ram_3007ad8c + iVar1 + 4);
      if (pcVar3 != (char *)0x0) {
        return pcVar3;
      }
    }
LAB_ram_4002c852:
    uVar2 = param_1 - 1 & 0xffff;
    if ((0xa0 < uVar2) ||
       (pcVar3 = (&PTR_s_settings_ram_40095038_ram_40097000)[uVar2], pcVar3 == (char *)0x0)) {
      pcVar3 = s_ep__02x_clear_halt_ram_40094730 + 0x14;
    }
  }
  return pcVar3;
}


/* NanoCore 1.11, address 0x4002c8b8.
 * REA evidence: ev_bd365f02805865c14d7dd3f1cc6af49511a92e95d76f7c8f3bf1e5721bf3000f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_4002c8b8(char *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (param_1 == (char *)0x0) {
    return s_ep__02x_clear_halt_ram_40094730 + 0x14;
  }
  iVar1 = FUN_ram_4000521c(param_1,&DAT_ram_40095014);
  if (iVar1 == 0) {
    uVar3 = 0xe;
  }
  else {
    iVar1 = FUN_ram_4000521c(param_1,&DAT_ram_40095018);
    uVar3 = 0xf;
    if (iVar1 != 0) {
      iVar1 = FUN_ram_4000521c(param_1,&DAT_ram_40095bb8);
      uVar3 = 0x10;
      if (iVar1 != 0) {
        iVar1 = FUN_ram_4000521c(param_1,&DAT_ram_4009501c);
        uVar3 = 0x11;
        if (iVar1 != 0) {
          iVar1 = FUN_ram_4000521c(param_1,s_delay_ram_40095020);
          uVar3 = 0x12;
          if (iVar1 != 0) {
            iVar1 = FUN_ram_4000521c(param_1,&DAT_ram_40095028);
            uVar3 = 0x13;
            if (iVar1 != 0) {
              iVar1 = FUN_ram_4000521c(param_1,s_reverb_ram_4009502c);
              uVar3 = 0x14;
              if (iVar1 != 0) {
                iVar1 = FUN_ram_4000521c(param_1,&DAT_ram_40095034);
                uVar3 = 0x15;
                if (iVar1 != 0) {
                  return param_1;
                }
              }
            }
          }
        }
      }
    }
  }
  pcVar2 = (char *)FUN_ram_4002c834(uVar3);
  return pcVar2;
}


/* NanoCore 1.11, address 0x4002c970.
 * REA evidence: ev_8e7332bc1f2cebdaa27a6125a1ce8f053ff0b86597088dec3f996c3229014cf4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002c970(undefined1 *param_1,uint param_2,byte *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if ((((param_1 == (undefined1 *)0x0) || (param_2 == 0)) || (*param_1 = 0, param_3 == (byte *)0x0))
     || (param_4 == 0)) {
    uVar3 = 0;
  }
  else {
    iVar2 = 0;
    uVar3 = 0;
    while( true ) {
      bVar1 = *param_3;
      if ((bVar1 == 0) || (iVar2 == param_4)) break;
      iVar4 = 1;
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0xe0) == 0xc0) {
          iVar4 = 2;
        }
        else if ((bVar1 & 0xf0) == 0xe0) {
          iVar4 = 3;
        }
        else {
          if ((bVar1 & 0xf8) != 0xf0) goto LAB_ram_4002c9e4;
          iVar4 = 4;
        }
        iVar5 = 1;
        do {
          if ((param_3[iVar5] == 0) || ((param_3[iVar5] & 0xc0) != 0x80)) {
            iVar4 = 1;
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 != iVar4);
      }
LAB_ram_4002c9e4:
      if (param_2 <= uVar3 + iVar4) break;
      for (iVar5 = 0; iVar4 != iVar5; iVar5 = iVar5 + 1) {
        param_1[iVar5 + uVar3] = param_3[iVar5];
      }
      param_3 = param_3 + iVar4;
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 + iVar4;
    }
    param_1[uVar3] = 0;
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x4002ca86.
 * REA evidence: ev_0e7eb93bfcf4a56034969c188bbb29749eaeabb4941f3b7d0aabb957de7ed4f5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002ca86(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002247a();
  nc_radio_set_enabled(iVar1 != 0);
  return;
}


/* NanoCore 1.11, address 0x4002ca9a.
 * REA evidence: ev_d0bf7954964056f8d6d44571297893f650380669ad2feccd60c2c9d5e4d045a2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002ca9a(void)

{
  int iVar1;
  
  if (DAT_ram_3007ada8 == '\0') {
    return;
  }
  iVar1 = FUN_ram_4002a6a0();
  if (iVar1 != 0) {
    FUN_ram_4002ca86();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002cabe.
 * REA evidence: ev_0e4b009be92f9d54d978998b3834fbe24d4f50d31af79a79c72fc8031a2e7501
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002cabe(void)

{
  DAT_ram_3007ada8 = 1;
  FUN_ram_4002ca9a();
  return;
}


/* NanoCore 1.11, address 0x4002cb2e.
 * REA evidence: ev_38aedae2661faa5d24c4eef4e8907fb458753b1b5f48ebb6cd7237bf92614a8b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002cb2e(void)

{
  DAT_ram_3007ada8 = 0;
  _DAT_ram_3007ada4 = 0;
  nc_radio_uart5_init();
  nc_radio_retry_disable_during_shutdown();
  return;
}


/* NanoCore 1.11, address 0x4002cb4e.
 * REA evidence: ev_c72906faab26a46dd9e35c0f87808f789080e3250250ac6da98d20cbd5456d7e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002cb4e(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 uStack_91;
  undefined1 auStack_90 [48];
  char cStack_60;
  char cStack_5f;
  byte bStack_5e;
  char acStack_5d [57];
  
  iVar2 = 100;
  do {
    iVar4 = FUN_ram_4002a6a0();
    cVar1 = DAT_ram_3007ada1;
    if (iVar4 != 0) {
      uStack_91 = 0x12;
      if (DAT_ram_3007ada1 == '\0') goto LAB_ram_4002cbf6;
      DAT_ram_3007ad9c = 0;
      iVar2 = 0;
      goto LAB_ram_4002cb96;
    }
    iVar2 = iVar2 + -1;
    FUN_ram_400065c6(0x32);
  } while (iVar2 != 0);
  if (DAT_ram_3007ada1 == '\0') goto LAB_ram_4002cbf6;
  goto LAB_ram_4002cc2e;
  while( true ) {
    if (iVar2 != 2) {
      FUN_ram_400065c6(1000);
    }
    iVar2 = iVar2 + 1;
    if (iVar2 == 3) break;
LAB_ram_4002cb96:
    uVar5 = FUN_ram_4002ab7c(&uStack_91,1,&cStack_60,0x30,0xfa);
    if ((((3 < uVar5) && (cStack_60 == '\x13')) && (uVar3 = (uint)bStack_5e, uVar3 < 0x2d)) &&
       ((uVar5 == uVar3 + 4 && (acStack_5d[uVar3] == '\0')))) {
      puVar6 = auStack_90;
      if (uVar3 != 0) {
        puVar6 = (undefined1 *)FUN_ram_4000304c(puVar6,acStack_5d,uVar3);
      }
      puVar6[uVar3] = 0;
      if (cStack_5f == cVar1) {
        DAT_ram_3007ad9c = 1;
      }
      else {
        DAT_ram_3007ad9c = 3;
      }
      goto LAB_ram_4002cbf6;
    }
  }
LAB_ram_4002cc2e:
  DAT_ram_3007ad9c = 2;
LAB_ram_4002cbf6:
  if (DAT_ram_3007ada8 == '\0') {
    nc_radio_retry_disable_during_shutdown();
    return;
  }
  FUN_ram_4002ca86();
  return;
}


/* NanoCore 1.11, address 0x4002cc6c.
 * REA evidence: ev_ac463386a0e651b3d679889f37c6fd57eeef293ead81926146e71e967777c1bb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4002cc82) */
/* WARNING: Removing unreachable block (ram,0x4002cc98) */

void FUN_ram_4002cc6c(void)

{
  FUN_ram_4002cb2e();
  nc_radio_set_enabled(0);
  FUN_ram_400065c6(0x14);
  nc_radio_set_enabled(0);
  return;
}


/* NanoCore 1.11, address 0x4002ccae.
 * REA evidence: ev_761029966911ad73d659a60ec0c642dd6a2e336371b236dccb8d53597b829aba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002ccae(undefined1 param_1)

{
  DAT_ram_3007ada1 = param_1;
  DAT_ram_3007ad9c = 0;
  return;
}


/* NanoCore 1.11, address 0x4002ccc0.
 * REA evidence: ev_52d7f8eb4404875631b521acfccd590fa5732f08350267cd72ca2db919bd12be
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4002ccc0(void)

{
  return DAT_ram_3007ad9c;
}


/* NanoCore 1.11, address 0x4002ccca.
 * REA evidence: ev_73c2c5990ff94562d7f551308807dbf7ab3a83b139371472d57cf7340a731375
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool thunk_FUN_ram_4002247a(void)

{
  return DAT_ram_3006b874 != '\0';
}


/* NanoCore 1.11, address 0x4002ccce.
 * REA evidence: ev_21013089b5353ec2e61420dd69a99e4b74ac9bc84488fbb5941ba3089e82a07e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002ccce(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_1 != 0);
  uVar2 = FUN_ram_4002247a();
  if (uVar1 != uVar2) {
    FUN_ram_40022488(uVar1);
    if (DAT_ram_3007ada8 != '\0') {
      nc_radio_set_enabled(uVar1);
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x4002cd00.
 * REA evidence: ev_c794edf5434ed842bfad916b05ea5750f08bd6c53c5e8dd7371d254265dfd65a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002cd00(void)

{
  return DAT_ram_3007ad9e != '\0';
}


/* NanoCore 1.11, address 0x4002cd0e.
 * REA evidence: ev_f298ec667c769dcb7a1ef62065978db3f2c8149e2026718d8a3e4b039d5c4972
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002cd0e(char *param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if ((3 < param_2) && (*param_1 == '\x14')) {
    cVar1 = param_1[1];
    cVar2 = param_1[2];
    cVar3 = param_1[3];
    FUN_ram_400002f4(0);
    DAT_ram_3007ada0 = 1;
    DAT_ram_3007ad9e = cVar1 != '\0';
    DAT_ram_3007ad9d = cVar3;
    DAT_ram_3007ad9f = cVar2;
    FUN_ram_400002fa();
    return 1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4002cd7c.
 * REA evidence: ev_71677515cd06fddbe8cb5c51a34c383d4a1cd3322a2af9d6a18e1211b53d9e32
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002cd7c(void)

{
  DAT_ram_3007adb4 = 0;
  DAT_ram_3007adb1 = 0;
  DAT_ram_3007adb0 = 0;
  DAT_ram_3007adb2 = 0;
  return;
}


/* NanoCore 1.11, address 0x4002cd9e.
 * REA evidence: ev_466db39ae9924af093cb4ef1c37d1da7448b4e57147f6ed79b1bcb78c12bf983
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002cd9e(void)

{
  FUN_ram_400002f4();
  DAT_ram_3007adbd = 0;
  DAT_ram_3007adbc = 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x4002cdbe.
 * REA evidence: ev_9e077a9d8c90d93172e0ac082b72b715b3d0cb8068871607f70d7f31a7c4c771
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002cdbe(undefined4 param_1)

{
  FUN_ram_400002f4();
  _DAT_ram_3007adac = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x4002cddc.
 * REA evidence: ev_0911ca47877f98ed759c2681d8418c1425dbd6fdb8bfe64c83e8ccfced454b5a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002cddc(void)

{
  int iVar1;
  
  FUN_ram_400002f4();
  if (DAT_ram_3007adb3 == '\0') {
    DAT_ram_3007adb3 = 1;
    FUN_ram_400002fa();
    iVar1 = FUN_ram_400064b8(s_bat_off_ram_4009728c,FUN_ram_4002cf96,0,0x400,0x1a,10);
    if (iVar1 != 0) {
      FUN_ram_40006632();
      return;
    }
    FUN_ram_400002f4();
    DAT_ram_3007adb3 = '\0';
  }
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x4002ce3a.
 * REA evidence: ev_0783f8875658b4fe050b653ab125c25beed7ad5fd88f2c42f2a56a970c5cbc3b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002ce3a(int param_1)

{
  if (0xddd < param_1) {
    DAT_ram_3007adb2 = 0;
    return true;
  }
  if (param_1 < 0xdac) {
    DAT_ram_3007adb2 = 0;
    return false;
  }
  if (DAT_ram_3007adb2 < 3) {
    DAT_ram_3007adb2 = DAT_ram_3007adb2 + 1;
  }
  return 2 < DAT_ram_3007adb2;
}


/* NanoCore 1.11, address 0x4002ce8a.
 * REA evidence: ev_24f6c7e8ea254f1c0e1ecef226e78f889617d397c3be19a8c188d367d89bac14
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002ce8a(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003f5b0();
  return iVar1 != 0;
}


/* NanoCore 1.11, address 0x4002ce9c.
 * REA evidence: ev_432915d67db1f49f046b68d8f6f6820bd8f9ba5d6d581696bcf005233a2ee992
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002ce9c(void)

{
  undefined4 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = _DAT_ram_3007adac;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.11, address 0x4002cebc.
 * REA evidence: ev_d947fe14c383155b1663c5776502116e48cbe3833fd19a6102a505b5719b00ed
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002cebc(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002ce9c();
  DAT_ram_3007adb4 = 0;
  DAT_ram_3007adb1 = 0;
  DAT_ram_3007adb0 = 0;
  DAT_ram_3007adb2 = 0;
  FUN_ram_4002cd9e();
  FUN_ram_4002cdbe(4);
  if (2 < iVar1 - 2U) {
    FUN_ram_4003fd1c();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4002cf0c.
 * REA evidence: ev_4f25dfb36144047f539eb71c81a6ea7065606159661d36358b5b5e24e73c10c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002cf0c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002ce9c();
  if (iVar1 != param_1) {
    if (1 < iVar1 - 2U) {
      FUN_ram_400002f4();
      _DAT_ram_3007adb8 = _DAT_ram_3007adb8 + 1;
      if (_DAT_ram_3007adb8 == 0) {
        _DAT_ram_3007adb8 = 1;
      }
      DAT_ram_3007adbd = 0;
      DAT_ram_3007adbc = 0;
      FUN_ram_400002fa();
    }
    FUN_ram_4002cdbe(param_1);
    if (1 < iVar1 - 2U) {
      FUN_ram_4003fd1c();
    }
  }
  FUN_ram_4002cddc();
  return;
}


/* NanoCore 1.11, address 0x4002cf76.
 * REA evidence: ev_a2ca39b10c9142ac75277e29d8c007d054ca3d61e6c691f1cb57080b6d100981
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002cf76(void)

{
  undefined4 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = _DAT_ram_3007adb8;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.11, address 0x4002cf96.
 * REA evidence: ev_43838a036c05afa4ed3e82726106255c5211c32ed538ef2a2b15e13a08b527df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002cf96(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = FUN_ram_4002cf76();
  bVar1 = false;
  uVar2 = 0;
  uVar6 = 0;
  do {
    iVar4 = FUN_ram_4002ce9c();
    iVar5 = FUN_ram_4002cf76();
    if (iVar3 != iVar5) {
      bVar1 = false;
      uVar2 = 0;
      uVar6 = 0;
    }
    if (iVar4 == 5) {
      DAT_ram_3007adb3 = 0;
      return;
    }
    if ((iVar4 == 4) || (iVar3 = FUN_ram_4002ce8a(), iVar3 != 0)) {
      iVar3 = FUN_ram_4002ce8a();
      if (iVar3 == 0) {
        DAT_ram_3007adb3 = 0;
        return;
      }
      goto LAB_ram_4002d03e;
    }
    if (1 < iVar4 - 2U) {
      DAT_ram_3007adb3 = 0;
      return;
    }
    if (bVar1) {
LAB_ram_4002d060:
      if ((DAT_ram_3007adbc != '\0') || (0xed7 < uVar2)) {
LAB_ram_4002d08a:
        iVar3 = FUN_ram_4002ce8a();
        if (iVar3 == 0) {
          iVar3 = FUN_ram_4003f960();
          if (iVar3 != 0) {
            iVar3 = FUN_ram_4002ce8a();
            if (iVar3 == 0) {
              FUN_ram_4002cdbe();
              FUN_ram_4002cd7c();
            }
            else {
              FUN_ram_4002cebc();
            }
          }
          FUN_ram_4002cd9e();
        }
        else {
LAB_ram_4002d03e:
          FUN_ram_4002cebc();
        }
        DAT_ram_3007adb3 = 0;
        return;
      }
      bVar1 = true;
    }
    else {
      if (DAT_ram_3007adbd != '\0') {
        uVar2 = 0;
        goto LAB_ram_4002d060;
      }
      bVar1 = false;
      if (0x9c3 < uVar6) goto LAB_ram_4002d08a;
    }
    FUN_ram_400065c6(0x32);
    uVar6 = uVar6 + 0x32;
    iVar3 = iVar5;
    if (bVar1) {
      uVar2 = uVar2 + 0x32;
    }
  } while( true );
}


