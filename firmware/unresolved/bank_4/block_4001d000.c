/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4001d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4001d0f0.
 * REA evidence: ev_272291f192a81415f0045d92003b77b901a3b4eceb4cd0fe21930d184bd38f42
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001d0f0(uint param_1,int param_2)

{
  if (param_1 == 0) {
    param_2 = -1;
  }
  if ((DAT_ram_300696f4 == param_1) && (_DAT_ram_300696f8 == param_2)) {
    return;
  }
  if (param_1 == 0) {
    FUN_ram_4001cff4();
  }
  DAT_ram_300696f4 = (byte)param_1;
  _DAT_ram_300696f8 = param_2;
  FUN_ram_4001b4ac();
  return;
}


/* NanoCore 1.10, address 0x4001d144.
 * REA evidence: ev_27ffe53cd5cf406cac9f3bdab95ba14731f3afb95f62c3cf8fb811fa856fbd7e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001d144(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (DAT_ram_30069e14 == '\0') {
    puVar1 = &DAT_ram_30069db4;
    do {
      iVar2 = 0;
      do {
        if (puVar1[iVar2] != '\0') goto LAB_ram_4001d196;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0xc);
      puVar1 = puVar1 + 0xc;
      if (puVar1 == &DAT_ram_30069e14) {
        if (_DAT_ram_30069db0 == 0) {
          return;
        }
        FUN_ram_4004b6a8();
        _DAT_ram_30069db0 = 0;
        return;
      }
    } while( true );
  }
LAB_ram_4001d196:
  FUN_ram_4001cff4();
  return;
}


/* NanoCore 1.10, address 0x4001d180.
 * REA evidence: ev_5cee747d8ea27d923409b467f7cc29b26ea3d5717cbf5739194f81f753e7a2e5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001d180(void)

{
  FUN_ram_4004b6a8();
  _DAT_ram_30069db0 = 0;
  return;
}


/* NanoCore 1.10, address 0x4001d19a.
 * REA evidence: ev_e2b51dcf717e8b8e2bd77021c0609c3bdcf73d83c1ff1b0659d13541c6e79d08
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001d19a(uint param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined4 local_54 [7];
  
  if (param_1 < 8) {
    if (DAT_ram_30069a3c == '\0') {
      FUN_ram_4001a576();
    }
    if (*(char *)(param_1 + 0x30069ac4) == '\0') {
      iVar3 = FUN_ram_4008e8a2();
      if (iVar3 != _DAT_ram_30069ac0) {
        FUN_ram_4001a576();
      }
      if (*(char *)(param_1 + 0x30069ac4) == '\0') {
        return 0xffffffff;
      }
    }
    iVar3 = FUN_ram_4000ba0e((param_1 & 0xff) + 0x1e & 0xff);
    if (iVar3 == 0) {
      iVar3 = FUN_ram_4001a28e(&DAT_ram_4009322c);
      DAT_ram_3004670c = param_1 + 0x1e;
      DAT_ram_30046710 = param_1;
      DAT_ram_30046718 = param_1;
      if (-1 < iVar3) {
        *(char *)(iVar3 + 0x30069b94) = (char)param_1;
        FUN_ram_400230be(1,param_1 & 0xff);
      }
      iVar3 = FUN_ram_4001a28e(&DAT_ram_4009322c);
      fVar1 = DAT_ram_40093094;
      local_54[3] = 0;
      local_54[4] = 0;
      if (-1 < iVar3) {
        puVar6 = local_54;
        local_54[0] = DAT_ram_40092864;
        local_54[1] = DAT_ram_40092864;
        uVar5 = 0;
        local_54[2] = DAT_ram_4009287c;
        do {
          uVar2 = *puVar6;
          if (iVar3 < 8) {
            iVar4 = FUN_ram_4001aaa2(uVar2,iVar3);
            *(short *)(iVar3 * 0x18 + 0x30069ad4 + uVar5 * 2) = (short)iVar4;
            FUN_ram_400231b0((float)iVar4 / fVar1,iVar3,uVar5 & 0xff);
            if (param_2 == 0) {
              iVar4 = FUN_ram_400264e8(iVar3,*(undefined1 *)(iVar3 + 0x30069b94),uVar5 & 0xff,1);
              if (iVar4 != 0xff) {
                uStack_5b = (undefined1)iVar4;
                uStack_5a = (undefined1)uVar2;
                uStack_59 = (undefined1)((uint)uVar2 >> 8);
                uStack_5c = (undefined1)iVar3;
                uStack_58 = (undefined1)((uint)uVar2 >> 0x10);
                uStack_57 = (undefined1)((uint)uVar2 >> 0x18);
                FUN_ram_400137c6(0x62,&uStack_5c,6);
              }
            }
            else {
LAB_ram_4001d302:
              FUN_ram_4001ab1a(iVar3);
            }
          }
          else if (param_2 != 0) goto LAB_ram_4001d302;
          uVar5 = uVar5 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar5 != 3);
        if (((DAT_ram_300696aa != '\0') && (_DAT_ram_300696fc != 0)) &&
           (iVar3 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_4009322c,0x10), iVar3 == 0)) {
          FUN_ram_4001ac88();
          for (iVar3 = 0; iVar3 < (int)(uint)DAT_ram_30069a34; iVar3 = iVar3 + 1) {
            FUN_ram_4001cf26(iVar3,1);
          }
        }
      }
      if (((param_2 != 0) && (_DAT_ram_300696fc != 0)) &&
         (iVar3 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_4009322c,0x10), iVar3 == 0)) {
        FUN_ram_4001b76e(_DAT_ram_300696fc);
        return 0;
      }
      return 0;
    }
    FUN_ram_4001a576();
    DAT_ram_30046718 = DAT_ram_30046710;
    if (((param_2 != 0) && (_DAT_ram_300696fc != 0)) &&
       (iVar3 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_4009322c,0x10), iVar3 == 0)) {
      FUN_ram_4001b76e(_DAT_ram_300696fc);
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4001d402.
 * REA evidence: ev_3fb5a62e0b0c4b6f17b72261f84ed63d9cbfe9c1ca4212d5bc2e8811ac695239
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001d402(undefined4 param_1)

{
  FUN_ram_4001bba2(param_1,0);
  return;
}


/* NanoCore 1.10, address 0x4001d408.
 * REA evidence: ev_beb22163b3786c39a02a7da4fd03b7c7787904d3b86e0e2b7958b9b5913ca10a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001d408(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 - 0x1eU & 0xff) < 8) {
    uVar1 = FUN_ram_4001d19a(param_1 - 0x1eU,0);
    return uVar1;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4001d41e.
 * REA evidence: ev_9d079398649bb43d3cb6cdc418738edf3cce43dc35f764ddac95ab4d6e6c26a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001d41e(undefined4 param_1)

{
  FUN_ram_4001bc60(param_1,0);
  return;
}


/* NanoCore 1.10, address 0x4001d424.
 * REA evidence: ev_e41721776f5ee8d9a0fa06f5599a45b708a6450cdd9904df291bf54826195327
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001d424(void)

{
  uint uVar1;
  
  FUN_ram_4001a0ae();
  uVar1 = DAT_ram_300466f8;
  if (0x1d < DAT_ram_300466f8) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4001d442.
 * REA evidence: ev_c88550707a564eb2817acddabb519a12c9ae54b6d377fe4cc6e45e026676eb3c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001d442(void)

{
  uint uVar1;
  
  FUN_ram_4001a116();
  uVar1 = DAT_ram_3004671c;
  if (0x1d < DAT_ram_3004671c) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4001d460.
 * REA evidence: ev_fa3acad5df498d83838943131b164816707c98ce6e7ec7260bf3fea631bf3fd8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001d460(void)

{
  uint uVar1;
  undefined1 auStack_24 [16];
  ushort uStack_14;
  
  FUN_ram_4001a0ae();
  FUN_ram_40088f60(auStack_24);
  uVar1 = (uint)uStack_14;
  if (0x1d < uStack_14) {
    if (DAT_ram_3006941c == '\0') {
      FUN_ram_4001b2e0();
    }
    uVar1 = DAT_ram_300466fc;
    if (0x1d < DAT_ram_300466fc) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4001d49c.
 * REA evidence: ev_031fbff75c883da94c5865d3c6ba9881b24a8eb0c94773af29f92f752de590d2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001d49c(void)

{
  uint uVar1;
  undefined1 auStack_24 [16];
  ushort uStack_14;
  
  FUN_ram_4001a116();
  FUN_ram_40089208(auStack_24);
  uVar1 = (uint)uStack_14;
  if (0x1d < uStack_14) {
    if (DAT_ram_30069ba0 == '\0') {
      FUN_ram_4001a6e0();
    }
    uVar1 = DAT_ram_30046720;
    if (0x1d < DAT_ram_30046720) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4001d4d8.
 * REA evidence: ev_5cc0722a6fd68fffee4cc4d8aa5bf4c6751db706419fbf1df8d61e9b16354fc7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001d4d8(void)

{
  int iVar1;
  
  FUN_ram_4001a0e8();
  iVar1 = FUN_ram_4000ba6a();
  if (7 < (iVar1 - 0x1eU & 0xff)) {
    if (DAT_ram_30069a3c == '\0') {
      FUN_ram_4001a576();
    }
    iVar1 = -1;
    if (DAT_ram_30046710 < 8) {
      iVar1 = DAT_ram_30046710 + 0x1e;
    }
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4001d560.
 * REA evidence: ev_9c1132f6cdabe316ab9f6daf3e525d029bf7538079bb62000917818d1ef538d0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001d560(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined3 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  DAT_ram_300696aa = 0;
  _DAT_ram_300696f0 = 0;
  _DAT_ram_300696ac = 0;
  _DAT_ram_30069a28 = 0;
  _DAT_ram_300696fc = 0;
  _DAT_ram_30069a00 = 0;
  DAT_ram_300696f4 = 0;
  _DAT_ram_300696f8 = 0xffffffff;
  DAT_ram_30046708 = 0xff;
  _DAT_ram_30069740 = 0;
  _DAT_ram_300699f8 = 0;
  _DAT_ram_30069a30 = 0;
  _DAT_ram_30069e1c = 0;
  _DAT_ram_30069e18 = 0;
  FUN_ram_4000505c(&DAT_ram_30069828,0,0x14);
  FUN_ram_4000505c(0x30069ad4,0,0xc0);
  FUN_ram_4000505c(0x30069acc,1,8);
  FUN_ram_4000505c(0x30069b94,0,8);
  DAT_ram_30069b9a = 6;
  FUN_ram_40022fe4();
  if (_DAT_ram_30069e80 != 0) {
    FUN_ram_4004b6a8();
    _DAT_ram_30069e80 = 0;
  }
  if (_DAT_ram_30069e84 != 0) {
    FUN_ram_4004b6a8();
    _DAT_ram_30069e84 = 0;
  }
  if (_DAT_ram_30069db0 != 0) {
    FUN_ram_4004b6a8();
    _DAT_ram_30069db0 = 0;
  }
  if (_DAT_ram_30069418 != 0) {
    FUN_ram_4004b6a8();
  }
  if (_DAT_ram_30069a38 != 0) {
    FUN_ram_4004b6a8();
  }
  if (_DAT_ram_30069b9c != 0) {
    FUN_ram_4004b6a8();
  }
  DAT_ram_30046700 = 0xffffffff;
  DAT_ram_30046714 = 0xffffffff;
  DAT_ram_30046724 = 0xffffffff;
  _DAT_ram_30069418 = 0;
  _DAT_ram_30069a38 = 0;
  _DAT_ram_30069b9c = 0;
  FUN_ram_4000505c(&DAT_ram_30069e20,0,0x60);
  FUN_ram_4000505c(&DAT_ram_30069db4,0,0x60);
  DAT_ram_30069e14 = 0;
  thunk_FUN_ram_40024a3a(0x30069da8);
  FUN_ram_4000505c(0x3006987c,0xff,5);
  DAT_ram_300699cc = 0;
  DAT_ram_300699f4 = 5;
  DAT_ram_30069a34 = 5;
  DAT_ram_300699fc = 0;
  FUN_ram_400164de(0x300696b0,0x40,s_bg_params_ram_40093484);
  FUN_ram_400164de(0x3006998c,0x40,s_distortion_ram_4009385c + 8);
  FUN_ram_400164de(0x3006994c,0x40,s_Fbat_off_ram_400936eb + 5);
  FUN_ram_400164de(0x3006983c,0x40,&DAT_ram_400931a8);
  _DAT_ram_300696f0 = FUN_ram_40042b1a(param_1);
  FUN_ram_40044038(_DAT_ram_300696f0,0x140,0xf0);
  FUN_ram_40047986(_DAT_ram_300696f0,0xff,0);
  FUN_ram_400479c4(_DAT_ram_300696f0,0,0);
  FUN_ram_40043064(_DAT_ram_300696f0,1);
  _DAT_ram_300696ac = FUN_ram_4005600c(_DAT_ram_300696f0);
  FUN_ram_400565de(_DAT_ram_300696ac,0xb);
  FUN_ram_40043faa(_DAT_ram_300696ac,0,0);
  FUN_ram_40044038(_DAT_ram_300696ac,0x140,0xf0);
  FUN_ram_40043064(_DAT_ram_300696ac,1);
  FUN_ram_40042b3a(_DAT_ram_300696ac,0x10);
  FUN_ram_40042b3a(_DAT_ram_300696ac,2);
  _DAT_ram_30069748 = FUN_ram_4005600c(_DAT_ram_300696f0);
  FUN_ram_400565de(_DAT_ram_30069748,0xb);
  FUN_ram_40043faa(_DAT_ram_30069748,8,8);
  FUN_ram_40044038(_DAT_ram_30069748,0x32,0x32);
  _DAT_ram_30069a04 = FUN_ram_40056c3a(_DAT_ram_300696f0);
  FUN_ram_400572fa(_DAT_ram_30069a04,0);
  FUN_ram_40047a84(_DAT_ram_30069a04,1,0);
  FUN_ram_4004788a(_DAT_ram_30069a04,0xc1,0);
  FUN_ram_40044038(_DAT_ram_30069a04,0x200007d1);
  FUN_ram_40045054(_DAT_ram_30069a04,_DAT_ram_30069748,0x14,8,0);
  FUN_ram_40016e9e(_DAT_ram_300696f0,_DAT_ram_30069a04,&DAT_ram_30069a08,1);
  piVar1 = (int *)&DAT_ram_30069a08;
  do {
    if (*piVar1 != 0) {
      FUN_ram_400572fa(*piVar1,0);
      FUN_ram_4004788a(*piVar1,0xc1,0);
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != (int *)&DAT_ram_30069a28);
  _DAT_ram_30069a28 = FUN_ram_40042b1a(_DAT_ram_300696f0);
  FUN_ram_40047986(_DAT_ram_30069a28,0,0);
  FUN_ram_400479c4(_DAT_ram_30069a28,0,0);
  FUN_ram_400479d4(_DAT_ram_30069a28,0,0);
  FUN_ram_40047a94(_DAT_ram_30069a28,0,0);
  FUN_ram_40042b3a(_DAT_ram_30069a28,0x10);
  iVar11 = 0x30069774;
  FUN_ram_40042b3a(_DAT_ram_30069a28,2);
  FUN_ram_40043064(_DAT_ram_30069a28,1);
  FUN_ram_4001a8c2();
  iVar12 = 0x30069884;
  _DAT_ram_30069744 = FUN_ram_4005600c(_DAT_ram_300696f0);
  FUN_ram_400565de(_DAT_ram_30069744,0xb);
  FUN_ram_40044038(_DAT_ram_30069744,0x2d,0x17);
  FUN_ram_40043faa(_DAT_ram_30069744,0x10b,0x15);
  iVar9 = 0;
  _DAT_ram_300699d0 = FUN_ram_40056c3a(_DAT_ram_300696f0);
  FUN_ram_400572fa(_DAT_ram_300699d0,1);
  FUN_ram_40044038(_DAT_ram_300699d0,0x200007d1);
  FUN_ram_400440bc(_DAT_ram_300699d0,5,0,0xfffffff8);
  FUN_ram_40016e9e(_DAT_ram_300696f0,_DAT_ram_300699d0,0x300699d4,2);
  puVar2 = (undefined4 *)&DAT_ram_30069828;
  puVar6 = (undefined4 *)&DAT_ram_30069814;
  puVar7 = (undefined4 *)&DAT_ram_30069924;
  puVar8 = (undefined4 *)&DAT_ram_30069938;
  do {
    uVar4 = FUN_ram_4005600c(_DAT_ram_300696f0);
    *puVar8 = uVar4;
    FUN_ram_400565de(uVar4,9);
    FUN_ram_4005602c(*puVar8,1);
    iVar10 = iVar9 * 0x3c + 0x14;
    FUN_ram_40043faa(*puVar8,iVar10,0x74);
    FUN_ram_40044038(*puVar8,0x28,0x28);
    uVar4 = _DAT_ram_300696f0;
    *(undefined4 *)(iVar9 * 4 + 0x30069760) = 0x74;
    *(int *)(iVar9 * 4 + 0x3006974c) = iVar10;
    uVar4 = FUN_ram_40056c3a(uVar4);
    *puVar6 = uVar4;
    FUN_ram_400572fa(uVar4,0);
    FUN_ram_40047a84(*puVar6,2,0);
    uVar4 = *puVar6;
    uVar3 = FUN_ram_400164ec();
    FUN_ram_40047a44(uVar4,uVar3,0);
    iVar5 = FUN_ram_40046afe(*puVar6,0,0x5a);
    iVar5 = *(int *)(iVar5 + 0xc) << 1;
    FUN_ram_40044038(*puVar6,0x3c,iVar5);
    FUN_ram_40045054(*puVar6,*puVar8,0xb,0,0xfffffffe);
    FUN_ram_40016e9e(_DAT_ram_300696f0,*puVar6,iVar11,2);
    iVar9 = iVar9 + 1;
    iVar11 = iVar11 + 0x20;
    uVar4 = FUN_ram_40056c3a(_DAT_ram_300696f0);
    *puVar7 = uVar4;
    FUN_ram_400572fa(uVar4,4);
    FUN_ram_40047a84(*puVar7,2,0);
    uVar4 = *puVar7;
    uVar3 = FUN_ram_400164ec();
    FUN_ram_40047a44(uVar4,uVar3,0);
    FUN_ram_40044038(*puVar7,0x48,iVar5);
    FUN_ram_40045054(*puVar7,*puVar8,0xe,0,4);
    FUN_ram_40016e9e(_DAT_ram_300696f0,*puVar7,iVar12,2);
    iVar12 = iVar12 + 0x20;
    uVar4 = FUN_ram_40042b1a(_DAT_ram_300696f0);
    *puVar2 = uVar4;
    FUN_ram_40047986(uVar4,0,0);
    FUN_ram_400479c4(*puVar2,0,0);
    FUN_ram_400479d4(*puVar2,0,0);
    FUN_ram_40047a94(*puVar2,0,0);
    FUN_ram_40043faa(*puVar2,iVar10,0x74);
    FUN_ram_40044038(*puVar2,0x28,0x28);
    FUN_ram_40042b3a(*puVar2,0x10);
    FUN_ram_40042b3a(*puVar2,2);
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  } while (iVar9 != 5);
  FUN_ram_4001a434();
  FUN_ram_4001c22c();
  _DAT_ram_30069e84 = FUN_ram_4004b642(FUN_ram_4001be72,0xfa,0);
  return;
}


/* NanoCore 1.10, address 0x4001dbe2.
 * REA evidence: ev_9b30d502f86407f6d0bebc76c080f573d7d45bf5fbefffc5800422656caeec89
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001dbe2(undefined4 param_1,undefined4 param_2)

{
  _DAT_ram_30069e18 = param_2;
  _DAT_ram_30069e1c = param_1;
  FUN_ram_4001ad48();
  return;
}


/* NanoCore 1.10, address 0x4001dbf6.
 * REA evidence: ev_20e94ef5134ca94d953e15a9099ea214e3efa33fc2d0093d9317fabccecf9e60
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001dbf6(void)

{
  FUN_ram_4001cff4();
  FUN_ram_4001a0ae();
  FUN_ram_4001a0e8();
  FUN_ram_4001a116();
  FUN_ram_4001a266();
  FUN_ram_4001a244(&DAT_ram_30046714,&DAT_ram_30069a38);
  FUN_ram_4001a27a();
  DAT_ram_300696aa = 0;
  DAT_ram_300699fc = 0;
  if (_DAT_ram_300696f0 != 0) {
    FUN_ram_40043064(_DAT_ram_300696f0,1);
  }
  FUN_ram_400175d2(0);
  return;
}


/* NanoCore 1.10, address 0x4001dc50.
 * REA evidence: ev_dabeeff95dc8e05ee08618bdafa0198ad0c3546a8dc8a5bbe54799fd3142ce2f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4001dc50(void)

{
  return DAT_ram_300696aa;
}


/* NanoCore 1.10, address 0x4001dc5a.
 * REA evidence: ev_a042468a832f1828ce903efceefc47241101ad91fec6cc114e278b6bc9e3bccd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001dc5a(undefined1 param_1)

{
  DAT_ram_300699fc = param_1;
  return;
}


/* NanoCore 1.10, address 0x4001dc64.
 * REA evidence: ev_e8f32a959ee1dee2d52427b3628d6bb4c8fba116a161110f8ef8ff5a38face5f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001dc64(void)

{
  undefined3 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_ram_300696aa != '\0') {
    iVar2 = FUN_ram_4001a150();
    if (iVar2 == 0) {
      uVar3 = FUN_ram_4001b414(_DAT_ram_30069a00);
    }
    else {
      uVar3 = 0;
    }
    FUN_ram_400175d2(uVar3);
    uVar1 = FUN_ram_40016538(DAT_ram_300696f4);
    FUN_ram_4001775e(uVar1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4001dcb8.
 * REA evidence: ev_e138692c71dacfe2ea71f892712b8c582b713a4fd8c2851c839e737365ee253b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001dcb8(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  code *pcVar9;
  code *pcVar10;
  
  iVar1 = _DAT_ram_30069a00;
  if (DAT_ram_300696aa == '\0') {
    return 0;
  }
  if (DAT_ram_300696f4 != '\0') {
    if (_DAT_ram_300696f8 == 100) {
      if ((_DAT_ram_300696fc == 0) ||
         (iVar1 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_40093dc4,0x10), iVar1 != 0)) {
        if ((_DAT_ram_300696fc == 0) ||
           (iVar1 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_40093230,0x10), iVar1 != 0))
        goto LAB_ram_4001dd3e;
        pcVar10 = FUN_ram_4001bc60;
        pcVar9 = FUN_ram_4001a116;
        puVar8 = &DAT_ram_30046728;
        puVar7 = &DAT_ram_30046720;
        pcVar6 = FUN_ram_4001a6e0;
        puVar4 = &DAT_ram_30069ba0;
        puVar2 = &DAT_ram_40093230;
      }
      else {
        pcVar10 = FUN_ram_4001bba2;
        pcVar9 = FUN_ram_4001a0ae;
        puVar8 = &DAT_ram_30046704;
        puVar7 = &DAT_ram_300466fc;
        pcVar6 = FUN_ram_4001b2e0;
        puVar4 = &DAT_ram_3006941c;
        puVar2 = &DAT_ram_40093dc4;
      }
      FUN_ram_4001bd76(puVar2,puVar4,pcVar6,puVar7,puVar8,pcVar9,pcVar10);
    }
LAB_ram_4001dd3e:
    iVar5 = -1;
    uVar3 = 0;
    goto LAB_ram_4001dd42;
  }
  iVar5 = 0x66;
  if ((_DAT_ram_30069a00 != (DAT_ram_30069a2c != '\0') + 1) &&
     (iVar5 = 0x65, _DAT_ram_30069a00 != 0)) {
    iVar5 = 1;
    if (DAT_ram_30069a2c == '\0') {
      iVar5 = -1;
    }
    if (_DAT_ram_30069a00 == iVar5) {
      if ((_DAT_ram_300696fc == 0) ||
         (iVar1 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_40093dc4,0x10),
         uVar3 = DAT_ram_300466fc, iVar1 != 0)) {
        if ((_DAT_ram_300696fc != 0) &&
           (iVar1 = FUN_ram_40005208(_DAT_ram_300696fc,&DAT_ram_40093230,0x10), iVar1 == 0)) {
          uVar3 = DAT_ram_30046720;
          if (DAT_ram_30069ba0 == '\0') {
            FUN_ram_4001a6e0();
          }
          FUN_ram_4001a27a();
          DAT_ram_30046728 = uVar3;
          goto LAB_ram_4001de0c;
        }
      }
      else {
        if (DAT_ram_3006941c == '\0') {
          FUN_ram_4001b2e0();
        }
        FUN_ram_4001a266();
        DAT_ram_30046704 = uVar3;
LAB_ram_4001de0c:
        FUN_ram_4001b76e(_DAT_ram_300696fc);
      }
      iVar5 = 100;
    }
    else {
      iVar5 = FUN_ram_4001a18a(param_1,0x65);
      if (iVar1 < iVar5) {
        return 0;
      }
      iVar5 = iVar1 - iVar5;
    }
  }
  uVar3 = 1;
LAB_ram_4001dd42:
  FUN_ram_4001d0f0(uVar3,iVar5);
  return 0;
}


/* NanoCore 1.10, address 0x4001de64.
 * REA evidence: ev_047c5278d7e57ed8059c980fc381e8e5a71a3b9a453ae43fa9f09232e5802f21
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001de64(void)

{
  FUN_ram_4004c048(0x300696b0);
  FUN_ram_4004c048(0x3006998c);
  FUN_ram_4004c048(0x3006994c);
  FUN_ram_4004c048(0x3006983c);
  return;
}


/* NanoCore 1.10, address 0x4001de9c.
 * REA evidence: ev_721379db353e1bb4af30fe589801c749022bab25a1eae890337a732688103f02
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001de9c(void)

{
  return _DAT_ram_30069740;
}


/* NanoCore 1.10, address 0x4001dea6.
 * REA evidence: ev_3e4f951987c18c039e0def9d255bda67525439cbdf1b5cbbed12543677a970c2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001dea6(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_4001a28e();
  FUN_ram_4001ad7a(uVar1,param_2);
  return;
}


/* NanoCore 1.10, address 0x4001deba.
 * REA evidence: ev_eabe7274e164df3109b8a6d6100fce43015cf342a5bbb425ffc21e13c21c5d6e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001deba(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4001a28e();
  if (-1 < iVar1) {
    uVar2 = FUN_ram_400230a2();
    return uVar2;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4001ded6.
 * REA evidence: ev_7e988598d8636d11f8da51d23fd6e0b11d11b29aaad4891b99f2ccd4dc14a8f9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_4001ded6(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_ram_4001a28e();
  fVar2 = 0.0;
  if (-1 < iVar1) {
    fVar2 = 0.0;
    if (param_3 < 0xc) {
      iVar1 = FUN_ram_4001aaa2(CONCAT44(param_3,param_1),iVar1,param_3 & 0xff);
      fVar2 = (float)iVar1 / DAT_ram_40093094;
    }
  }
  return fVar2;
}


/* NanoCore 1.10, address 0x4001df1a.
 * REA evidence: ev_9ce572e5d0164ffbebdb3d9249b37ee539340892a9a4626d8dca78d0931b9845
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001df1a(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_10;
  
  iVar1 = FUN_ram_4001a28e();
  if ((-1 < iVar1) && (param_3 < 0xc)) {
    iVar2 = FUN_ram_4001aaa2(CONCAT44(uStack_10,param_1));
    *(short *)((param_3 + iVar1 * 0xc) * 2 + 0x30069ad4) = (short)iVar2;
    FUN_ram_400231b0((float)iVar2 / DAT_ram_40093094,iVar1,param_3 & 0xff);
    if ((DAT_ram_300696aa != '\0') &&
       (((iVar2 = FUN_ram_4001a28e(_DAT_ram_300696fc), iVar2 == iVar1 &&
         (uVar3 = (uint)DAT_ram_300699cc * 0x50000 >> 0x10, (int)uVar3 <= (int)param_3)) &&
        ((int)param_3 < (int)(DAT_ram_30069a34 + uVar3))))) {
      FUN_ram_4001ac0e(iVar2,param_3 - uVar3);
      FUN_ram_4001cf26(param_3 - uVar3,1);
      return;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4001dfce.
 * REA evidence: ev_344584dbb272f4eacce7d60273f46cab8eb48e8c19d998687b5cb4742aea7856
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined8 FUN_ram_4001dfce(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_ram_4001a28e();
  if ((-1 < iVar1) && (param_2 < 0xc)) {
    uVar2 = FUN_ram_400231fe(iVar1,param_2 & 0xff);
    return uVar2;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4001dffa.
 * REA evidence: ev_0ea1e7254cb8f3c06e5a81af28d2e7cb1d08ac0890e18a48a11a24638e1593cf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4001dffa(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4001a28e();
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_ram_4002317e();
    *(char *)(iVar1 + 0x30069b94) = (char)uVar2;
  }
  return uVar2;
}


