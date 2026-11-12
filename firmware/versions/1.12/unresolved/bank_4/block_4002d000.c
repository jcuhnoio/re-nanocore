/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4002d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4002d0e8.
 * REA evidence: ev_8220fe249466946f7ee36cd3e9335a817cd0025f53d668611ec5e54e45b5552b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002d0e8(void)

{
  undefined4 uVar1;
  
  FUN_ram_4002cef8();
  uVar1 = FUN_ram_4002cfb2();
  FUN_ram_4002cea8();
  return uVar1;
}


/* NanoCore 1.12, address 0x4002d102.
 * REA evidence: ev_917f3f78ea06f38b6fac52710312cb2d2bede82835e556f8e4ed456fb19c071c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d102(void)

{
  FUN_ram_4002cef8();
  FUN_ram_4002cfb2();
  FUN_ram_4002cea8();
  return;
}


/* NanoCore 1.12, address 0x4002d116.
 * REA evidence: ev_f9a798dc73dc91987abf538a65c784d2051c8582dd6dfdbd805833fbacb68153
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002d116(void)

{
  if (DAT_ram_30079da0 == '\0') {
    DAT_ram_30079da0 = '\x01';
    _DAT_ram_30079d9c = FUN_ram_40005efc(s_heap_cma_ram_4009c074,7);
  }
  return _DAT_ram_30079d9c;
}


/* NanoCore 1.12, address 0x4002d154.
 * REA evidence: ev_90a9333554b335601e6d74a7ad34b13efba5d9003fc26ca909daa6eb97f5a41c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d154(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002d116();
  if (iVar1 != 0) {
    FUN_ram_40005754(iVar1,param_1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002d170.
 * REA evidence: ev_13a6ae6a2dfc545d4c943cb0755825f3d593c43746c33346ce66ec8c7e37266a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d170(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002d116();
  if (iVar1 != 0) {
    FUN_ram_400059a4(iVar1,param_1,param_2);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002d196.
 * REA evidence: ev_5ac46094f444d7e37d65f58101ca244b55bf8c291d25b1a68abb6256fb758fa7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002d196(uint param_1,uint param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = 0;
    if ((int)((ulonglong)param_1 * (ulonglong)param_2 >> 0x20) == 0) {
      iVar1 = FUN_ram_4002d154(param_1 * param_2);
      if (iVar1 != 0) {
        FUN_ram_40004f92(iVar1,0,param_1 * param_2);
      }
    }
    return iVar1;
  }
  iVar1 = FUN_ram_4002d154(0);
  return iVar1;
}


/* NanoCore 1.12, address 0x4002d1d0.
 * REA evidence: ev_042deeb6b05e153269688f23572be80430c69308f978bbc1a8dc61414752f64c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d1d0(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_400058be();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002d1d8.
 * REA evidence: ev_73560f55affe3f0ca1b8951bb079e6f96bdcce80604d2d3f7eec98dedc859113
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d1d8(void)

{
  int iVar1;
  int iStack_24;
  short sStack_20;
  ushort uStack_1e;
  int iStack_1c;
  uint uStack_18;
  
  DAT_ram_3004ad8e = 0x1f;
  iVar1 = FUN_ram_4002ce1e(&DAT_ram_4009c080,&iStack_1c);
  if ((((iVar1 == 0) && (7 < uStack_18)) &&
      (iVar1 = FUN_ram_4002cd84(iStack_1c + 0x10,&iStack_24,8), iVar1 == 0)) &&
     ((iStack_24 == 0x314c544f && (sStack_20 == 1)))) {
    DAT_ram_3004ad8e = uStack_1e & 0x7f;
  }
  return;
}


/* NanoCore 1.12, address 0x4002d23e.
 * REA evidence: ev_07bea83a2dafa625cfb6049ce1a9bf7b6f548fe60c9ba2bc269253aad92aa4d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ushort FUN_ram_4002d23e(void)

{
  return DAT_ram_3004ad8e & 1;
}


/* NanoCore 1.12, address 0x4002d24a.
 * REA evidence: ev_64129e3fcd74ef120229832078526700632479472c5f7fe5b597a8b6d9e39208
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002d24a(void)

{
  return (DAT_ram_3004ad8e & 3) >> 1;
}


/* NanoCore 1.12, address 0x4002d258.
 * REA evidence: ev_539aea05381b05294e52a9bea35fb02d75684f0f3b99f61c791579048cd000ba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002d258(void)

{
  return (DAT_ram_3004ad8e & 7) >> 2;
}


/* NanoCore 1.12, address 0x4002d266.
 * REA evidence: ev_d9483533526a962c417e9ba19834a1b40455e5472b7fe9c207491eaaddface1d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002d266(void)

{
  return (DAT_ram_3004ad8e & 0x3f) >> 5;
}


/* NanoCore 1.12, address 0x4002d274.
 * REA evidence: ev_1151c41c052392f578782d92241554f9d8c04399df978b54770b4b7c0d41eb40
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002d274(void)

{
  return (DAT_ram_3004ad8e & 0x7f) >> 6;
}


/* NanoCore 1.12, address 0x4002d282.
 * REA evidence: ev_ffd8c2274970d1a375d28f1c74e81d985b27b3a9cf4c0bcec73d4bc9f9aa40d2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002d282(void)

{
  return (DAT_ram_3004ad8e & 0xf) >> 3;
}


/* NanoCore 1.12, address 0x4002d290.
 * REA evidence: ev_6ff408cb48202709d1c81db0f41fe5538e5ad15da9851a282d2f312f2a482153
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002d290(void)

{
  return (DAT_ram_3004ad8e & 0x1f) >> 4;
}


/* NanoCore 1.12, address 0x4002d29e.
 * REA evidence: ev_944e184ca497b582b0a680f85600120d6f9cc29ea193944c1980240483416e70
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d29e(void)

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
    *(undefined1 *)(iVar3 + 0x30079dcc) = 1;
    *(undefined1 *)(iVar3 + 0x30079dc4) = 0;
    *(undefined4 *)(iVar3 * 4 + 0x30079da4) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  iVar3 = FUN_ram_4002ce1e(&DAT_ram_4009c088,&iStack_3c);
  if ((((iVar3 == 0) && (7 < uStack_38)) &&
      (iVar3 = FUN_ram_4002cd84(iStack_3c + 0x10,&iStack_44,8), iVar3 == 0)) &&
     ((iStack_44 == 0x31474250 && (sStack_40 == 1)))) {
    if ((uint)uStack_3e * 6 + 8 <= uStack_38) {
      uVar4 = 0;
      iVar3 = iStack_3c + 0x18;
      while ((uVar4 < uStack_3e && (iVar1 = FUN_ram_4002cd84(iVar3,&bStack_4c,6), iVar1 == 0))) {
        uVar2 = (uint)bStack_4c;
        if ((uVar2 < 8) && (bStack_4b < 2)) {
          *(byte *)(uVar2 + 0x30079dcc) = bStack_4b;
          if ((bStack_4a & 1) == 0) {
            *(undefined1 *)(uVar2 + 0x30079dc4) = 0;
            *(undefined4 *)(uVar2 * 4 + 0x30079da4) = 0;
          }
          else {
            *(undefined1 *)(uVar2 + 0x30079dc4) = 1;
            *(uint *)(uVar2 * 4 + 0x30079da4) =
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


/* NanoCore 1.12, address 0x4002d3a8.
 * REA evidence: ev_714801ef4fce1ad3db72d1023df9a78cc784cb33cd72f9ebde64bf0d428562d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002d3a8(uint param_1)

{
  if (param_1 < 8) {
    return *(char *)(param_1 + 0x30079dcc) == '\x01';
  }
  return true;
}


/* NanoCore 1.12, address 0x4002d3c6.
 * REA evidence: ev_f0446780b10eceb13082bc509196d17cc5ec6882b70cd2a34ce5951168f336ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002d3c6(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((param_2 != (undefined4 *)0x0) && (uVar1 = 0, param_1 < 8)) &&
     (uVar1 = 0, *(char *)(param_1 + 0x30079dc4) != '\0')) {
    *param_2 = *(undefined4 *)(param_1 * 4 + 0x30079da4);
    uVar1 = 1;
  }
  return uVar1;
}


/* NanoCore 1.12, address 0x4002d3f6.
 * REA evidence: ev_d971c0e5d8df4610ff00706a27cdb983f1be06bc4bd51c7cb99a9ed282db2396
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002d3f6(undefined4 *param_1)

{
  return *param_1;
}


/* NanoCore 1.12, address 0x4002d414.
 * REA evidence: ev_65e69da74e37d85953b63225c29bae2d515e4c0fee319352d09a1272f45b8590
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d414(void)

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
  
  DAT_ram_3004ad94 = 0xff0000;
  DAT_ram_3004ad9c = 3;
  DAT_ram_3004ad9a = 4;
  DAT_ram_3004ad90 = 0xffffff;
  DAT_ram_3004ad98 = 2;
  iVar1 = FUN_ram_4002ce1e(&DAT_ram_4009c08c,&iStack_44);
  if ((((iVar1 == 0) && (0x17 < uStack_40)) &&
      (iVar1 = FUN_ram_4002cd84(iStack_44 + 0x10,auStack_38,0x18), iVar1 == 0)) &&
     ((iVar1 = FUN_ram_4002d3f6(auStack_38), iVar1 == 0x314c4553 && (sStack_34 == 1)))) {
    if (cStack_22 == '\0' && cStack_21 == '\0') {
      uVar2 = FUN_ram_4002d3f6(auStack_30);
      DAT_ram_3004ad90 = uVar2 & 0xffffff;
      uVar2 = FUN_ram_4002d3f6(auStack_2c);
      DAT_ram_3004ad94 = uVar2 & 0xffffff;
      DAT_ram_3004ad9c = uStack_28;
      DAT_ram_3004ad9a = uStack_26;
      DAT_ram_3004ad98 = uStack_24;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4002d504.
 * REA evidence: ev_56350d7fa8b8ed35cc23a1df9f90e7564cf9295bd4898d11c8222ebd1e58d16c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002d504(void)

{
  return DAT_ram_3004ad90;
}


/* NanoCore 1.12, address 0x4002d50e.
 * REA evidence: ev_14fd95e28db7411493f70ba85eac4bfccef259eb569035d05a8bdf3c5599515f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002d50e(void)

{
  return DAT_ram_3004ad94;
}


/* NanoCore 1.12, address 0x4002d518.
 * REA evidence: ev_d015ee269872bb3230729ff01d52a79cc7fb7ce5856566ba25af2ce4edb4da84
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined2 FUN_ram_4002d518(void)

{
  return DAT_ram_3004ad9c;
}


/* NanoCore 1.12, address 0x4002d522.
 * REA evidence: ev_2fd797e446df5f94cb02541f98587e7943b9868e970a7d10e097f99f42a95132
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined2 FUN_ram_4002d522(void)

{
  return DAT_ram_3004ad9a;
}


/* NanoCore 1.12, address 0x4002d52c.
 * REA evidence: ev_c6ac5217afeee95dbe6ad38982e501713fefd26177132f6f9d4cfc3c471b03b9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined2 FUN_ram_4002d52c(void)

{
  return DAT_ram_3004ad98;
}


/* NanoCore 1.12, address 0x4002d536.
 * REA evidence: ev_ebdf92ea4968731b3206aab91977042f71c7998d327a3d5caa9011361867d894
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002d536(void)

{
  if (_DAT_ram_30079dd4 != 0) {
    FUN_ram_4002d1d0();
    _DAT_ram_30079dd4 = 0;
  }
  if (_DAT_ram_30079de0 != 0) {
    FUN_ram_4002d1d0();
    _DAT_ram_30079de0 = 0;
  }
  _DAT_ram_30079dd8 = 0;
  return;
}


/* NanoCore 1.12, address 0x4002d574.
 * REA evidence: ev_3e24f5f6b5bcc25cfd5234cb6ec61d17676b9fd9190205139696e6ab66df0d26
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002d574(void)

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
  
  FUN_ram_4002d536();
  iVar4 = FUN_ram_4002ce1e(&DAT_ram_4009c090,&iStack_2c);
  if (((iVar4 == 0) && (7 < uStack_28)) &&
     (piVar5 = (int *)FUN_ram_4002d154(uStack_28), piVar5 != (int *)0x0)) {
    iVar4 = FUN_ram_4002cd84(iStack_2c + 0x10,piVar5,uStack_28);
    uVar1 = _DAT_ram_30079dd8;
    if (((iVar4 == 0) && (*piVar5 == 0x32525453)) && ((short)piVar5[1] == 1)) {
      uVar2 = *(ushort *)((int)piVar5 + 6);
      uVar3 = (uint)uVar2;
      if ((uVar3 - 1 & 0xffff) < 0x100) {
        iVar4 = 0;
        uVar8 = 8;
        for (uVar6 = 0; uVar6 < uVar3; uVar6 = uVar6 + 1) {
          if (uStack_28 < uVar8 + 4) goto LAB_ram_4002d5bc;
          uVar9 = (uint)*(ushort *)((int)piVar5 + uVar8 + 2);
          uVar8 = uVar8 + 4 + uVar9;
          if (uStack_28 < uVar8) goto LAB_ram_4002d5bc;
          iVar4 = iVar4 + uVar9 + 1;
        }
        _DAT_ram_30079dd4 = FUN_ram_4002d196(uVar3,8);
        iVar4 = FUN_ram_4002d154(iVar4);
        _DAT_ram_30079de0 = iVar4;
        if ((_DAT_ram_30079dd4 == 0) || (iVar4 == 0)) {
          FUN_ram_4002d1d0(piVar5);
          FUN_ram_4002d536();
          return;
        }
        uVar6 = 0;
        iVar10 = 8;
        do {
          uVar1 = *(ushort *)((int)piVar5 + iVar10 + 2);
          iVar7 = _DAT_ram_30079dd4 + uVar6 * 8;
          *(ushort *)(_DAT_ram_30079dd4 + uVar6 * 8) =
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
LAB_ram_4002d5bc:
    _DAT_ram_30079dd8 = uVar1;
    FUN_ram_4002d1d0(piVar5);
  }
  return;
}


/* NanoCore 1.12, address 0x4002d6f8.
 * REA evidence: ev_1eefe45b11019f32886b1f60c6fb04e6b730bd9eb8a399a268fcccf38ae41afa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_ram_4002d6f8(uint param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    return s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
  }
  if ((_DAT_ram_30079ddc == (code *)0x0) ||
     (pcVar3 = (char *)(*_DAT_ram_30079ddc)(), pcVar3 == (char *)0x0)) {
    if (_DAT_ram_30079dd4 != 0) {
      uVar2 = 0;
      do {
        if ((uint)_DAT_ram_30079dd8 <= (uVar2 & 0xffff)) goto LAB_ram_4002d716;
        iVar1 = uVar2 * 8;
        uVar2 = uVar2 + 1;
      } while (*(ushort *)(_DAT_ram_30079dd4 + -8 + uVar2 * 8) != param_1);
      pcVar3 = *(char **)(_DAT_ram_30079dd4 + iVar1 + 4);
      if (pcVar3 != (char *)0x0) {
        return pcVar3;
      }
    }
LAB_ram_4002d716:
    uVar2 = param_1 - 1 & 0xffff;
    if ((0xa0 < uVar2) ||
       (pcVar3 = (&PTR_s_settings_ram_4009a0e0_ram_4009c2a8)[uVar2], pcVar3 == (char *)0x0)) {
      pcVar3 = s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
    }
  }
  return pcVar3;
}


/* NanoCore 1.12, address 0x4002d77c.
 * REA evidence: ev_7660edb2b94ed511d2cbd24907ca242d6728e26d3c78c4f4e6571cd350cdade9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_4002d77c(char *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (param_1 == (char *)0x0) {
    return s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20;
  }
  iVar1 = FUN_ram_40005162(param_1,&DAT_ram_4009a0bc);
  if (iVar1 == 0) {
    uVar3 = 0xe;
  }
  else {
    iVar1 = FUN_ram_40005162(param_1,&DAT_ram_4009a0c0);
    uVar3 = 0xf;
    if (iVar1 != 0) {
      iVar1 = FUN_ram_40005162(param_1,&DAT_ram_4009acc0);
      uVar3 = 0x10;
      if (iVar1 != 0) {
        iVar1 = FUN_ram_40005162(param_1,&DAT_ram_4009a0c4);
        uVar3 = 0x11;
        if (iVar1 != 0) {
          iVar1 = FUN_ram_40005162(param_1,s_delay_ram_4009a0c8);
          uVar3 = 0x12;
          if (iVar1 != 0) {
            iVar1 = FUN_ram_40005162(param_1,&DAT_ram_4009a0d0);
            uVar3 = 0x13;
            if (iVar1 != 0) {
              iVar1 = FUN_ram_40005162(param_1,s_reverb_ram_4009a0d4);
              uVar3 = 0x14;
              if (iVar1 != 0) {
                iVar1 = FUN_ram_40005162(param_1,&DAT_ram_4009a0dc);
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
  pcVar2 = (char *)FUN_ram_4002d6f8(uVar3);
  return pcVar2;
}


/* NanoCore 1.12, address 0x4002d834.
 * REA evidence: ev_ab9c5a98ad8477ba15bdc15f2f0bd8b80b1da32fcd27acb4b8a84b298cf62677
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4002d834(undefined1 *param_1,uint param_2,byte *param_3,int param_4)

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
          if ((bVar1 & 0xf8) != 0xf0) goto LAB_ram_4002d8a8;
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
LAB_ram_4002d8a8:
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


/* NanoCore 1.12, address 0x4002d94a.
 * REA evidence: ev_eba6159e52d5ba51b74d96005abf8a057073590c4f92a41e95064c10cfe5349a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d94a(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40022972();
  nc_radio_set_enabled(iVar1 != 0);
  return;
}


/* NanoCore 1.12, address 0x4002d95e.
 * REA evidence: ev_8bffe853bcf3eb3a4a321611eba9ce72f225b88fc9bac09ad52e26797e158461
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d95e(void)

{
  int iVar1;
  
  if (DAT_ram_30079df0 == '\0') {
    return;
  }
  iVar1 = FUN_ram_4002b390();
  if (iVar1 != 0) {
    FUN_ram_4002d94a();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002d982.
 * REA evidence: ev_85acc58e03854a53b441f902e17c9be15d42bb4049f6c27af735574a7f257dc7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002d982(void)

{
  DAT_ram_30079df0 = 1;
  FUN_ram_4002d95e();
  return;
}


/* NanoCore 1.12, address 0x4002d9f2.
 * REA evidence: ev_c937449849acf241670a84eaa8d69920008462bc857e0fcc52a9e371737d41e1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002d9f2(void)

{
  DAT_ram_30079df0 = 0;
  _DAT_ram_30079dec = 0;
  nc_radio_uart5_init();
  nc_radio_retry_disable_during_shutdown();
  return;
}


/* NanoCore 1.12, address 0x4002da12.
 * REA evidence: ev_cf06bde32b751d8850e77b4d8588cbb30112d5287cecabac1892eea1035e48b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002da12(void)

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
    iVar4 = FUN_ram_4002b390();
    cVar1 = DAT_ram_30079de9;
    if (iVar4 != 0) {
      uStack_91 = 0x12;
      if (DAT_ram_30079de9 == '\0') goto LAB_ram_4002daba;
      DAT_ram_30079de4 = 0;
      iVar2 = 0;
      goto LAB_ram_4002da5a;
    }
    iVar2 = iVar2 + -1;
    FUN_ram_400064e4(0x32);
  } while (iVar2 != 0);
  if (DAT_ram_30079de9 == '\0') goto LAB_ram_4002daba;
  goto LAB_ram_4002daf2;
  while( true ) {
    if (iVar2 != 2) {
      FUN_ram_400064e4(1000);
    }
    iVar2 = iVar2 + 1;
    if (iVar2 == 3) break;
LAB_ram_4002da5a:
    uVar5 = FUN_ram_4002b86c(&uStack_91,1,&cStack_60,0x30,0xfa);
    if ((((3 < uVar5) && (cStack_60 == '\x13')) && (uVar3 = (uint)bStack_5e, uVar3 < 0x2d)) &&
       ((uVar5 == uVar3 + 4 && (acStack_5d[uVar3] == '\0')))) {
      puVar6 = auStack_90;
      if (uVar3 != 0) {
        puVar6 = (undefined1 *)FUN_ram_4000303c(puVar6,acStack_5d,uVar3);
      }
      puVar6[uVar3] = 0;
      if (cStack_5f == cVar1) {
        DAT_ram_30079de4 = 1;
      }
      else {
        DAT_ram_30079de4 = 3;
      }
      goto LAB_ram_4002daba;
    }
  }
LAB_ram_4002daf2:
  DAT_ram_30079de4 = 2;
LAB_ram_4002daba:
  if (DAT_ram_30079df0 == '\0') {
    nc_radio_retry_disable_during_shutdown();
    return;
  }
  FUN_ram_4002d94a();
  return;
}


/* NanoCore 1.12, address 0x4002db30.
 * REA evidence: ev_650a545fa9f5e1641fe6913a3340cf65ddb6c61335b0be751e6d732642f7e5ec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4002db46) */
/* WARNING: Removing unreachable block (ram,0x4002db5c) */

void FUN_ram_4002db30(void)

{
  FUN_ram_4002d9f2();
  nc_radio_set_enabled(0);
  FUN_ram_400064e4(0x14);
  nc_radio_set_enabled(0);
  return;
}


/* NanoCore 1.12, address 0x4002db72.
 * REA evidence: ev_060480fe193e8ff03d493a1e7938ec8b8585c84b5dfdc33141a2ee62cf782974
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002db72(undefined1 param_1)

{
  DAT_ram_30079de9 = param_1;
  DAT_ram_30079de4 = 0;
  return;
}


/* NanoCore 1.12, address 0x4002db84.
 * REA evidence: ev_61a0344f2fba1fc817c0d3e90989a9f3c98b616875ed9e1df6cf20a251873470
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4002db84(void)

{
  return DAT_ram_30079de4;
}


/* NanoCore 1.12, address 0x4002db8e.
 * REA evidence: ev_ba4c0ba6d616795bfa3d79e1fc2b48fab864f05b992d8cc7a40ed544c125acff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool thunk_FUN_ram_40022972(void)

{
  return DAT_ram_3006b820 != '\0';
}


/* NanoCore 1.12, address 0x4002db92.
 * REA evidence: ev_1dc838d06debe1cbd656fe7e9510b080e51187ef91a9500a1a6dbe78a8e4240e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002db92(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_1 != 0);
  uVar2 = FUN_ram_40022972();
  if (uVar1 != uVar2) {
    FUN_ram_40022980(uVar1);
    if (DAT_ram_30079df0 != '\0') {
      nc_radio_set_enabled(uVar1);
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4002dbc4.
 * REA evidence: ev_3255da11c552212a82c80bd539b70c34ec06b9210f7242ad9e3aecea4629c15d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002dbc4(void)

{
  return DAT_ram_30079de6 != '\0';
}


/* NanoCore 1.12, address 0x4002dbd2.
 * REA evidence: ev_7a845855c0e93d049c570c18305adb8c6a975e8019a394fdd18511db55c838b2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002dbd2(char *param_1,uint param_2)

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
    DAT_ram_30079de8 = 1;
    DAT_ram_30079de6 = cVar1 != '\0';
    DAT_ram_30079de5 = cVar3;
    DAT_ram_30079de7 = cVar2;
    FUN_ram_400002fa();
    return 1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4002dc40.
 * REA evidence: ev_763db9d70827e357e54b938bfacadc8980926e003fa99fbaddd366a4188430da
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002dc40(void)

{
  DAT_ram_30079dfc = 0;
  DAT_ram_30079df9 = 0;
  DAT_ram_30079df8 = 0;
  DAT_ram_30079dfa = 0;
  return;
}


/* NanoCore 1.12, address 0x4002dc62.
 * REA evidence: ev_c802ad467bcde3258cb3698200b41b8c529279023cd9da4f058a74d8467e5a74
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002dc62(void)

{
  FUN_ram_400002f4();
  DAT_ram_30079e05 = 0;
  DAT_ram_30079e04 = 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x4002dc82.
 * REA evidence: ev_f587e061edf28eca6d1b8fefea4de26129447b76594b316f443fbfd1a3ba7b52
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002dc82(undefined4 param_1)

{
  FUN_ram_400002f4();
  _DAT_ram_30079df4 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x4002dca0.
 * REA evidence: ev_b320672fb293c0a8ea670305fd8a10bdd2f175cfe869ea14f7810fdcec1be778
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002dca0(void)

{
  int iVar1;
  
  FUN_ram_400002f4();
  if (DAT_ram_30079dfb == '\0') {
    DAT_ram_30079dfb = 1;
    FUN_ram_400002fa();
    iVar1 = FUN_ram_400063d6(s_bat_off_ram_4009c534,FUN_ram_4002de5a,0,0x400,0x1a,10);
    if (iVar1 != 0) {
      FUN_ram_40006550();
      return;
    }
    FUN_ram_400002f4();
    DAT_ram_30079dfb = '\0';
  }
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x4002dcfe.
 * REA evidence: ev_48dc252d55bcecd4503615e2b58f7c24049fad03d91490125f7a4c168917759d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002dcfe(int param_1)

{
  if (0xddd < param_1) {
    DAT_ram_30079dfa = 0;
    return true;
  }
  if (param_1 < 0xdac) {
    DAT_ram_30079dfa = 0;
    return false;
  }
  if (DAT_ram_30079dfa < 3) {
    DAT_ram_30079dfa = DAT_ram_30079dfa + 1;
  }
  return 2 < DAT_ram_30079dfa;
}


/* NanoCore 1.12, address 0x4002dd4e.
 * REA evidence: ev_218f03da05ca754c2e9a40ca2a643923fd2621573a5a40890ee969ee65890b6a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002dd4e(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003f672();
  return iVar1 != 0;
}


/* NanoCore 1.12, address 0x4002dd60.
 * REA evidence: ev_2bc6cf6a1a2d64c65a786d7c6676300da705e71bdfcba6582902acc1ea23a160
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002dd60(void)

{
  undefined4 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = _DAT_ram_30079df4;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.12, address 0x4002dd80.
 * REA evidence: ev_538e68924671d83b223570edeb79b3ccd95aea46d9b0067d2e715acefae2a71f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002dd80(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002dd60();
  DAT_ram_30079dfc = 0;
  DAT_ram_30079df9 = 0;
  DAT_ram_30079df8 = 0;
  DAT_ram_30079dfa = 0;
  FUN_ram_4002dc62();
  FUN_ram_4002dc82(4);
  if (2 < iVar1 - 2U) {
    FUN_ram_4003fdde();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002ddd0.
 * REA evidence: ev_34484ba1a285623d8461b9c4a086293e18d9b61a89b43e6be488f1f762621fe3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002ddd0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002dd60();
  if (iVar1 != param_1) {
    if (1 < iVar1 - 2U) {
      FUN_ram_400002f4();
      _DAT_ram_30079e00 = _DAT_ram_30079e00 + 1;
      if (_DAT_ram_30079e00 == 0) {
        _DAT_ram_30079e00 = 1;
      }
      DAT_ram_30079e05 = 0;
      DAT_ram_30079e04 = 0;
      FUN_ram_400002fa();
    }
    FUN_ram_4002dc82(param_1);
    if (1 < iVar1 - 2U) {
      FUN_ram_4003fdde();
    }
  }
  FUN_ram_4002dca0();
  return;
}


/* NanoCore 1.12, address 0x4002de3a.
 * REA evidence: ev_e24d20715b0a1838616925dbdfc8ee472ae75a0ad6cbbac3552bd4e14b69af19
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002de3a(void)

{
  undefined4 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = _DAT_ram_30079e00;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.12, address 0x4002de5a.
 * REA evidence: ev_cdb4e93c9a7b8c58e07b86a53117fa812f00597e92e35c01f6d9a2f8b1a28b2b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002de5a(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = FUN_ram_4002de3a();
  bVar1 = false;
  uVar2 = 0;
  uVar6 = 0;
  do {
    iVar4 = FUN_ram_4002dd60();
    iVar5 = FUN_ram_4002de3a();
    if (iVar3 != iVar5) {
      bVar1 = false;
      uVar2 = 0;
      uVar6 = 0;
    }
    if (iVar4 == 5) {
      DAT_ram_30079dfb = 0;
      return;
    }
    if ((iVar4 == 4) || (iVar3 = FUN_ram_4002dd4e(), iVar3 != 0)) {
      iVar3 = FUN_ram_4002dd4e();
      if (iVar3 == 0) {
        DAT_ram_30079dfb = 0;
        return;
      }
      goto LAB_ram_4002df02;
    }
    if (1 < iVar4 - 2U) {
      DAT_ram_30079dfb = 0;
      return;
    }
    if (bVar1) {
LAB_ram_4002df24:
      if ((DAT_ram_30079e04 != '\0') || (0xed7 < uVar2)) {
LAB_ram_4002df4e:
        iVar3 = FUN_ram_4002dd4e();
        if (iVar3 == 0) {
          iVar3 = FUN_ram_4003fa22();
          if (iVar3 != 0) {
            iVar3 = FUN_ram_4002dd4e();
            if (iVar3 == 0) {
              FUN_ram_4002dc82();
              FUN_ram_4002dc40();
            }
            else {
              FUN_ram_4002dd80();
            }
          }
          FUN_ram_4002dc62();
        }
        else {
LAB_ram_4002df02:
          FUN_ram_4002dd80();
        }
        DAT_ram_30079dfb = 0;
        return;
      }
      bVar1 = true;
    }
    else {
      if (DAT_ram_30079e05 != '\0') {
        uVar2 = 0;
        goto LAB_ram_4002df24;
      }
      bVar1 = false;
      if (0x9c3 < uVar6) goto LAB_ram_4002df4e;
    }
    FUN_ram_400064e4(0x32);
    uVar6 = uVar6 + 0x32;
    iVar3 = iVar5;
    if (bVar1) {
      uVar2 = uVar2 + 0x32;
    }
  } while( true );
}


/* NanoCore 1.12, address 0x4002df74.
 * REA evidence: ev_48825ccad2537a791e7d5051eb539f34bb69408579fb2612543c56cae2068081
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002df74(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002dd60();
  if (iVar1 - 2U < 2) {
    FUN_ram_400002f4();
    if (_DAT_ram_30079e00 == param_1) {
      DAT_ram_30079e05 = 1;
      DAT_ram_30079e04 = 0;
    }
    FUN_ram_400002fa();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002dfc0.
 * REA evidence: ev_63e7230a71117c099198728e919d49f23fda8d271f701f84b790e6ee37296b10
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002dfc0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4002dd60();
  if (iVar1 - 2U < 2) {
    FUN_ram_400002f4();
    if ((_DAT_ram_30079e00 == param_1) && (DAT_ram_30079e05 != '\0')) {
      DAT_ram_30079e04 = 1;
    }
    FUN_ram_400002fa();
    return;
  }
  return;
}


