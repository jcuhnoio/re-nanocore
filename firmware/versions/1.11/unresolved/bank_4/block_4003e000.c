/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4003e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4003e028.
 * REA evidence: ev_a91e03a8f5e7e6b8d450767f0336dca4db4308ee61767c324222ecafb23fbb83
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003e028(void)

{
  fence();
  _DAT_ram_18100008 = 0x3f;
  fence();
  fence();
  _DAT_ram_18100000 = _DAT_ram_18100000 | 1;
  return;
}


/* NanoCore 1.11, address 0x4003e04c.
 * REA evidence: ev_0010e8d910bc64871082fe3d16d3d017530708899adae61a9085e3f1f77bc7e9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003e04c(void)

{
  fence();
  fence();
  _DAT_ram_18100000 = _DAT_ram_18100000 & 0xfffffffe;
  return;
}


/* NanoCore 1.11, address 0x4003e060.
 * REA evidence: ev_6830c52c338b5385b24d74f46961fa7d4c889c8ed4569972e8040086870f7839
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4003e060(void)

{
  fence();
  fence();
  return (_DAT_ram_18100008 & 7) >> 2;
}


/* NanoCore 1.11, address 0x4003e078.
 * REA evidence: ev_419115c0fd8603b5db501c5bcd3fe1cfacdd28de779a67afb85c139a0b91333f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003e078(void)

{
  fence();
  return (_DAT_ram_18000020 & 7) * 1000 + 24000;
}


/* NanoCore 1.11, address 0x4003e098.
 * REA evidence: ev_a29abc9c569266e08c4bce2ebe6fc741cc93e85f1f0643afb0f98e980b81b70a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003e098(int param_1)

{
  if (param_1 == 0) {
    fence();
    fence();
    _DAT_ram_1800040c = _DAT_ram_1800040c | 1;
  }
  else {
    fence();
    fence();
    _DAT_ram_1800040c = _DAT_ram_1800040c & 0xfffffffe;
  }
  return;
}


/* NanoCore 1.11, address 0x4003e0c2.
 * REA evidence: ev_48a1a816be7923e986674c0e4b9628fbf510aacbb77ab4da0c82c68379c359bd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003e0c2(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_400378d0(0x1e);
  if ((iVar1 < 0) || (iVar1 = FUN_ram_40037876(0x1e), iVar1 < 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_ram_40039db0();
    FUN_ram_40039e08(9,&uStack_14);
    FUN_ram_40039dec();
    _DAT_ram_180001f0 = (uint)uStack_14._3_1_ << 8 | 2;
    fence();
    fence();
    fence();
    _DAT_ram_18000020 = _DAT_ram_18000020 & 0xfffcffff | 0x30000;
    fence();
    fence();
    fence();
    _DAT_ram_18000028 = _DAT_ram_18000028 & 0xf | 0x40;
    uStack_14 = _DAT_ram_180001f0;
    FUN_ram_4003ff8a(100);
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x4003e1a0.
 * REA evidence: ev_447e61e74d36f28397949bd891b48a46b3e9f1ab1ec46a6e445ca702eb4f7eef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e1a0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *(undefined4 *)(*param_1 + 8) = 7;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.11, address 0x4003e1b6.
 * REA evidence: ev_09c57c1da947d9d6ef50d5070079140fc7f9e4f2ccb51d0cc5badc85d455ac24
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e1b6(int *param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = *(uint *)(*param_1 + 0x10);
    if (param_2 == 0) {
      uVar1 = uVar1 & 0xffffffef;
    }
    else {
      uVar1 = uVar1 | 0x10;
    }
    *(uint *)(*param_1 + 0x10) = uVar1;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.11, address 0x4003e1d6.
 * REA evidence: ev_3b438fe398e38ce08e1c5ad2e23d9bbe30dbb05295e57fbc0c29fc5b935d8141
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003e1d6(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    _DAT_ram_3007fa7c = 0;
    _DAT_ram_3007fa80 = 0x100;
    if ((&DAT_ram_3007fa7c)[param_1[0xd]] == '\x01') {
      *(undefined4 *)(iVar2 + 8) = 6;
      uVar1 = 0xb9;
    }
    else {
      uVar1 = 199;
    }
    *(undefined4 *)(iVar2 + 8) = uVar1;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.11, address 0x4003e21a.
 * REA evidence: ev_5a3d462ec634d5ce4ce357d2d47007ac27020a3e7da9707bdb8ec8f4d99dea3f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e21a(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0x81020084;
  }
  iVar2 = *param_1;
  if (param_2 == 0) {
    uVar1 = *(uint *)(iVar2 + 0xc) & 0xfb;
  }
  else {
    if (param_2 != 1) {
      return 0x8102008a;
    }
    uVar1 = *(uint *)(iVar2 + 0xc) | 4;
  }
  *(uint *)(iVar2 + 0xc) = uVar1;
  return 0;
}


/* NanoCore 1.11, address 0x4003e24e.
 * REA evidence: ev_a0ab24675fa56eb5fb6b139105925ac262c1a74774631cf6b43df3c5efe4a104
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e24e(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0x81020084;
  }
  iVar2 = *param_1;
  if (param_2 == 2) {
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfe;
    uVar1 = *(uint *)(iVar2 + 0xc) | 2;
  }
  else if (param_2 < 3) {
    if (param_2 == 0) {
      uVar1 = *(uint *)(iVar2 + 0xc) & 0xfc;
    }
    else {
      *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfd;
      uVar1 = *(uint *)(iVar2 + 0xc) | 1;
    }
  }
  else {
    if (param_2 != 3) {
      return 0x81020088;
    }
    uVar1 = *(uint *)(iVar2 + 0xc) | 3;
  }
  *(uint *)(iVar2 + 0xc) = uVar1;
  return 0;
}


/* NanoCore 1.11, address 0x4003e2ac.
 * REA evidence: ev_67482df98545901ba9926ce0241fb9a9cb04c7512fe9702cdf2fe1a33e78be2a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e2ac(int *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0x81020084;
  }
  else {
    iVar3 = *param_1;
    if ((1 < param_2 - 1U) && (param_2 != 7)) {
      if (param_2 == 3) {
        uVar2 = *(uint *)(iVar3 + 0x10) | 0x22;
      }
      else {
        uVar2 = *(uint *)(iVar3 + 0x10) & 0x3f;
      }
      *(uint *)(iVar3 + 0x10) = uVar2;
      *(uint *)(iVar3 + 0xc0) = *(uint *)(iVar3 + 0xc0) & 0xfffffff7;
      *(uint *)(iVar3 + 0xc0) = *(uint *)(iVar3 + 0xc0) & 0xfffffffb;
      return 0;
    }
    *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) & 0x3f;
    if ((param_2 == 1) || (param_2 == 7)) {
      uVar2 = *(uint *)(iVar3 + 0x10) | 0x80;
    }
    else {
      uVar2 = *(uint *)(iVar3 + 0x10) | 0xc0;
    }
    *(uint *)(iVar3 + 0x10) = uVar2;
    uVar1 = 0;
    *(uint *)(iVar3 + 0xc0) = *(uint *)(iVar3 + 0xc0) | 8;
    *(uint *)(iVar3 + 0xc0) = *(uint *)(iVar3 + 0xc0) | 4;
    *(uint *)(iVar3 + 0xc0) = *(uint *)(iVar3 + 0xc0) & 0xffffff7f;
    if (param_2 == 7) {
      *(uint *)(iVar3 + 0xc0) = *(uint *)(iVar3 + 0xc0) | 0x80;
      return uVar1;
    }
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4003e342.
 * REA evidence: ev_c8f46527d6e5b6dbe51b1b66516bc6c51535f8a0f4ae3954df85cd3410ed9637
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003e342(int *param_1)

{
  uint uStack_4;
  
  if (param_1 != (int *)0x0) {
    uStack_4 = 0xffffffff;
    if ((((uint *)*param_1)[5] & 1) != 0) {
      uStack_4 = *(uint *)*param_1 & 0xff;
    }
    return uStack_4;
  }
  return 0x81020084;
}


/* NanoCore 1.11, address 0x4003e36a.
 * REA evidence: ev_74b3dfc2831d24c9ef0d2414904dd98ffea4b64916048411582aa6c83c9c6f59
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e36a(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x81020084;
  }
  iVar1 = 1000000;
  do {
    if ((((undefined4 *)*param_1)[5] & 0x20) != 0) {
      *(undefined4 *)*param_1 = param_2;
      return 0;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0x81020082;
}


/* NanoCore 1.11, address 0x4003e39c.
 * REA evidence: ev_b70c50c9066731b79f67ab98756f73ba8b71ec2bbe1888d6e0d78bf6c9a65f5f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e39c(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    if (param_2 == 1) {
      uVar1 = *(uint *)(iVar2 + 0xa4) | 1;
    }
    else {
      uVar1 = *(uint *)(iVar2 + 0xa4) & 0xfffffffe;
    }
    *(uint *)(iVar2 + 0xa4) = uVar1;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.11, address 0x4003e3c8.
 * REA evidence: ev_c529a2bee688949b56d4f6e0c99927fca0e3918d497af86466cdfc6d55f23825
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003e3c8(undefined4 param_1)

{
  int iVar1;
  
  FUN_ram_4003e1b6(param_1,1);
  FUN_ram_4003e36a(param_1,0);
  FUN_ram_4003e36a(param_1,0);
  FUN_ram_4003fff2(1);
  FUN_ram_4003e342(param_1);
  FUN_ram_4003e342(param_1);
  FUN_ram_4003e1b6(param_1,0);
  do {
    iVar1 = FUN_ram_4003e342(param_1);
  } while (iVar1 != -1);
  return;
}


/* NanoCore 1.11, address 0x4003e418.
 * REA evidence: ev_f52b60509cadf6e70046f507e127c07032a5d00ceb915e674c44a901667d304e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003e44e) */
/* WARNING: Removing unreachable block (ram,0x4003e452) */

undefined4 FUN_ram_4003e418(int *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (int *)0x0) {
    return 0x81020084;
  }
  puVar2 = (uint *)*param_1;
  iVar3 = FUN_ram_400379fe(param_1[0xd] + 0x25);
  iVar4 = 1000000;
  if (param_2 == 0) {
    param_2 = 0xffffffff;
  }
  else {
    param_2 = (uint)(iVar3 * 10) / param_2;
  }
  uVar1 = (uint)(4 < (param_2 >> 4) % 10) + (param_2 >> 4) / 10;
  FUN_ram_4003e1d6(param_1);
  do {
    if ((puVar2[0x1f] & 1) == 0) {
      puVar2[3] = puVar2[3] | 0x80;
      *puVar2 = uVar1 & 0xff;
      puVar2[1] = (uVar1 & 0xffff) >> 8;
      puVar2[3] = puVar2[3] & 0xffffff7f;
      return 0;
    }
    iVar4 = iVar4 + -1;
    FUN_ram_4003e3c8(param_1);
  } while (iVar4 != 0);
  return 0x81020082;
}


/* NanoCore 1.11, address 0x4003e4b2.
 * REA evidence: ev_ae19538c9efd1c50fcf69ebb7aa581e7e20603524e187653d9ab6e00e788c1b3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003e4b2(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  
  iVar2 = *param_2;
  uVar3 = *(uint *)(iVar2 + 0x14);
  *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xfffffffd;
  if ((uVar3 & 0x10) == 0) {
    if ((uVar3 & 8) == 0) {
      if ((uVar3 & 4) == 0) {
        if ((uVar3 & 2) == 0) {
          iVar4 = 1000000;
          do {
            if ((*(uint *)(iVar2 + 0x14) & 1) == 0) {
              return;
            }
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          UNRECOVERED_JUMPTABLE = (code *)param_2[2];
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            return;
          }
          uVar1 = 6;
          goto LAB_ram_4003e4d8;
        }
        UNRECOVERED_JUMPTABLE = (code *)param_2[2];
        uVar1 = 5;
      }
      else {
        UNRECOVERED_JUMPTABLE = (code *)param_2[2];
        uVar1 = 9;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)param_2[2];
      uVar1 = 8;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)param_2[2];
    uVar1 = 7;
  }
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
LAB_ram_4003e4d8:
                    /* WARNING: Could not recover jumptable at 0x4003e4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}


/* NanoCore 1.11, address 0x4003e510.
 * REA evidence: ev_b60b64993de8b3bb52cad427f4380ee84b1a2ca93653cbdddd4a832f9aa05786
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4003e510(int param_1)

{
  return *(uint *)(*(int *)(param_1 * 0x70 + 0x3007fa84) + 8) & 0xf;
}


/* NanoCore 1.11, address 0x4003e52a.
 * REA evidence: ev_46374150d94d1ba666b915d679abd56c6ba633312a88906930b1ccb449615673
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003e52a(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1 * 0x70;
  iVar3 = (param_1 + 0x18710) * 0x1000;
  *(int *)(iVar2 + 0x3007fa84) = iVar3;
  iVar1 = param_1 + 0x4c;
  *(int *)(iVar2 + 0x3007fa88) = iVar1;
  *(undefined4 *)(iVar2 + 0x3007fa8c) = param_2;
  *(int *)(iVar2 + 0x3007fab8) = param_1;
  if (param_3 == 0) {
    *(undefined4 *)(iVar3 + 4) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 4) = 0;
    FUN_ram_4003fbd6(iVar1,param_3,0);
    FUN_ram_4003fb8e(iVar1);
    FUN_ram_4003fb8e(*(undefined4 *)(iVar2 + 0x3007fa88));
  }
  return iVar2 + 0x3007fa84;
}


/* NanoCore 1.11, address 0x4003e58a.
 * REA evidence: ev_109cd6f81c5c16e01086fdc2d8b12a71530a55800628aaf60f3ab7d87da45127
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003e58a(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    if (param_2 == 1) {
      if (param_3 == 0) {
        uVar1 = *(uint *)(iVar2 + 4) & 0xfffffffe;
LAB_ram_4003e5a2:
        *(uint *)(iVar2 + 4) = uVar1;
        return param_3;
      }
      if (param_3 == 1) {
        uVar1 = *(uint *)(iVar2 + 4) | 1;
LAB_ram_4003e5b2:
        *(uint *)(iVar2 + 4) = uVar1;
        return 0;
      }
    }
    else if (param_2 == 2) {
      if (param_3 == 0) {
        uVar1 = *(uint *)(iVar2 + 4) & 0xfffffffb;
        goto LAB_ram_4003e5a2;
      }
      if (param_3 == 1) {
        uVar1 = *(uint *)(iVar2 + 4) | 4;
        goto LAB_ram_4003e5b2;
      }
    }
    else if (param_2 == 0) {
      if (param_3 == 0) {
        uVar1 = *(uint *)(iVar2 + 4) & 0xfffffffd;
        goto LAB_ram_4003e5a2;
      }
      if (param_3 == 1) {
        uVar1 = *(uint *)(iVar2 + 4) | 2;
        goto LAB_ram_4003e5b2;
      }
    }
  }
  return -0x7efdff7c;
}


/* NanoCore 1.11, address 0x4003e5ea.
 * REA evidence: ev_4b0ead66fc0c6ce6488ba62b35913c0a7da7efcafe3ee5ca0afc5897c6e83a47
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e5ea(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0x81020084;
  }
  iVar1 = *param_1;
  if (param_2 == 1) {
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 8;
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x10;
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 0) {
        *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & 0xfffffff7;
        return 0;
      }
      return 0x81020089;
    }
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 8;
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & 0xef;
  }
  FUN_ram_4003e58a(param_1,2,1);
  return 0;
}


/* NanoCore 1.11, address 0x4003e650.
 * REA evidence: ev_216363c0f1930623d8fd13d2ce2f761cb3d38a1119c1c8968a44e1769278464c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003e650(int param_1,undefined4 param_2,int param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003e418();
  if (-1 < iVar1) {
    if (param_1 == 0) {
      iVar1 = -0x7efdff7c;
    }
    else if (param_3 == 0) {
      iVar1 = FUN_ram_4003e5ea(param_1,param_4);
      if ((((-1 < iVar1) && (iVar1 = FUN_ram_4003e2ac(param_1,param_7), -1 < iVar1)) &&
          (iVar1 = FUN_ram_4003e21a(param_1,param_5), -1 < iVar1)) &&
         ((iVar1 = FUN_ram_4003e24e(param_1,param_6), -1 < iVar1 &&
          (iVar1 = FUN_ram_4003e1d6(param_1), 0 < iVar1)))) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = -0x7efdff7a;
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4003e6d6.
 * REA evidence: ev_cf949860e5b2dfb34b54ac65a812fb5d2f77f1056a9466ffbf8e946237ec3a52
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e6d6(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    do {
    } while ((*(uint *)(iVar1 + 0x7c) & 1) != 0);
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xfffffffd;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.11, address 0x4003e6f4.
 * REA evidence: ev_ba5f4b47dccaef9d7199b91e9442084a237c138d968f0188e6bdbf51d373a833
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e6f4(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    do {
    } while ((*(uint *)(iVar1 + 0x7c) & 1) != 0);
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 2;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.11, address 0x4003e714.
 * REA evidence: ev_7b1188bd4101cb08e8fa0d607c731bc28c237a92f0c2cd16fc70bd9ddc01bdb9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e714(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 8) = 6;
    *(undefined4 *)(iVar1 + 8) = 0xb9;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.11, address 0x4003e730.
 * REA evidence: ev_9e2f689c668e6a80371f1f57706e64de8a1e8459027f220a5e8c3fed712cba6a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e730(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *(uint *)(*param_1 + 0xa4) = *(uint *)(*param_1 + 0xa4) | 0x40;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.11, address 0x4003e74e.
 * REA evidence: ev_cf69129800a4570020b3441d65367b36a410212f781eb3458c71d438c9dc3a97
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e74e(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *(uint *)(*param_1 + 0xa4) = *(uint *)(*param_1 + 0xa4) | 0x80;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.11, address 0x4003e76c.
 * REA evidence: ev_6fb751c0fc12a137e530cc7851c210ea1ce922dd4d1722570f46bc1f9858e876
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e76c(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *(uint *)(*param_1 + 0xa4) = *(uint *)(*param_1 + 0xa4) & 0xffffff7f;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.11, address 0x4003e78a.
 * REA evidence: ev_ce69e99ac78b4f727ecdb517800d9a4c23625935dd414ca30109ae261832e0d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e78a(int *param_1)

{
  if (param_1 != (int *)0x0) {
    return *(undefined4 *)(*param_1 + 0x84);
  }
  return 0x81020084;
}


/* NanoCore 1.11, address 0x4003e79e.
 * REA evidence: ev_041d9dd0e52d636e82b5c12f0a5448353827022acd233f1f3730aa9dae23389a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e79e(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *(undefined4 *)(*param_1 + 0x88) = 0xe5;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.11, address 0x4003e7b8.
 * REA evidence: ev_7627d718f6408e754734c4f9eddc5c4078dd4c051fbeec257591acac303d810b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e7b8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  if (param_1 != 0) {
    memset(&local_30,0,0x20);
    FUN_ram_4003e79e(param_1);
    *(undefined4 *)(param_1 + 0x54) = param_2;
    iStack_14 = *(int *)(param_1 + 0x34) + 0x10;
    puStack_2c = &DAT_ram_18710000 + *(int *)(param_1 + 0x34) * 0x1000;
    local_30 = 2;
    *(undefined4 *)(param_1 + 0x58) = param_3;
    uStack_1c = 1;
    uStack_18 = 1;
    uStack_24 = 1;
    uStack_20 = 0;
    uStack_28 = param_2;
    iVar1 = FUN_ram_40039960();
    *(int *)(param_1 + 0x50) = iVar1;
    uVar2 = 0xffffffff;
    if (iVar1 != 0) {
      FUN_ram_40039908(iVar1,&local_30);
      FUN_ram_400398f8(*(undefined4 *)(param_1 + 0x50),&LAB_ram_4003e154,param_1 + 0x50);
      FUN_ram_40039a9e(*(undefined4 *)(param_1 + 0x50),uStack_28,puStack_2c,
                       *(undefined4 *)(param_1 + 0x58),2);
      FUN_ram_4003e74e(param_1);
      FUN_ram_40039c7e(*(undefined4 *)(param_1 + 0x50));
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x81020084;
}


/* NanoCore 1.11, address 0x4003e85e.
 * REA evidence: ev_2e33112b3170ee75e264d7113109decd64703bb456c045da8e8973872e43d615
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e85e(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  if (param_1 != 0) {
    memset(&local_30,0,0x20);
    FUN_ram_4003e79e(param_1);
    iStack_14 = *(int *)(param_1 + 0x34) + 0x10;
    puStack_28 = &DAT_ram_18710000 + *(int *)(param_1 + 0x34) * 0x1000;
    *(uint *)(param_1 + 0x40) = param_3 & 0xffff;
    *(undefined4 *)(param_1 + 0x3c) = param_2;
    local_30 = 1;
    uStack_1c = 1;
    uStack_18 = 1;
    uStack_24 = 0;
    uStack_20 = 1;
    uStack_2c = param_2;
    iVar1 = FUN_ram_40039960();
    *(int *)(param_1 + 0x38) = iVar1;
    uVar2 = 0xffffffff;
    if (iVar1 != 0) {
      FUN_ram_40039908(iVar1,&local_30);
      FUN_ram_400398f8(*(undefined4 *)(param_1 + 0x38),&LAB_ram_4003e17a,param_1 + 0x38);
      FUN_ram_40039a9e(*(undefined4 *)(param_1 + 0x38),puStack_28,uStack_2c,
                       *(undefined4 *)(param_1 + 0x40),1);
      FUN_ram_4003e730(param_1);
      FUN_ram_40039c7e(*(undefined4 *)(param_1 + 0x38));
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x81020084;
}


/* NanoCore 1.11, address 0x4003e906.
 * REA evidence: ev_f9cdcd3450e6100cb063c00b6faed7272124860e166438dd8184a3d87f16cb27
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003e906(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x68) = param_2;
    *(undefined4 *)(param_1 + 0x6c) = param_3;
    return 0;
  }
  return 0x81020084;
}


/* NanoCore 1.11, address 0x4003e91a.
 * REA evidence: ev_e266ffd4dc2493c2ae949d1ec3337ec4d3d7745800e873b2918df82e0fc596c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003e91a(void)

{
  fence();
  if (_DAT_ram_18c00014 != 0) {
    fence();
    _DAT_ram_3007fe04 = _DAT_ram_18c00204;
    fence();
    _DAT_ram_18c00204 = _DAT_ram_18c00204 | 0xf;
  }
  fence();
  if (_DAT_ram_18c00018 != 0) {
    fence();
    _DAT_ram_3007fe04 = _DAT_ram_18c00104;
    fence();
    _DAT_ram_18c00104 = _DAT_ram_18c00104 | 0xf;
  }
  fence();
  _DAT_ram_18c0000c = 0;
  FUN_ram_40004bbe(_DAT_ram_3007fe08,1);
  return 0;
}


/* NanoCore 1.11, address 0x4003e990.
 * REA evidence: ev_808650b03173355f1d5e131a9735e45207dbabd2a7bed83b65d14a24d2b1b1f1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003e990(void)

{
  _DAT_ram_3007fe04 = 0;
  _DAT_ram_3007fe08 = 0;
  _DAT_ram_3007fe0c = 0;
  _DAT_ram_3007fe0c = FUN_ram_4000497c(s_aicos_mutex_ram_400982a0,0);
  _DAT_ram_3007fe08 = FUN_ram_40004b94(s_aicos_event_ram_40098294,0);
  FUN_ram_4003fbd6(0x3d,FUN_ram_4003e91a,&DAT_ram_3007fe04);
  FUN_ram_4003fb8e(0x3d);
  FUN_ram_4003fb8e(0x3d);
  return 0;
}


/* NanoCore 1.11, address 0x4003e9f6.
 * REA evidence: ev_ab9920d88d79f2bc362f5f2d9a515e15acdbfe13ce2cf0d88f4a5710aaab0dd5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003e9f6(void)

{
  fence();
  fence();
  _DAT_ram_190000e8 = 0xa1caaaaa;
  return;
}


/* NanoCore 1.11, address 0x4003ea1c.
 * REA evidence: ev_15a05a95612c59e044a0e0048f56127eda7b667358eeecd8449f3da2cbfa8f21
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ea1c(int param_1,int param_2)

{
  fence();
  *(int *)((param_1 + 0x1900004) * 0x10) = *(int *)(param_2 + 4) * 32000;
  return;
}


/* NanoCore 1.11, address 0x4003ea3a.
 * REA evidence: ev_b5f4424cb315f0e8d6d6c59d5a1eb068f9999fee979610d918902d25ed116157
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ea3a(int param_1,int param_2)

{
  fence();
  *(int *)(param_1 * 0x10 + 0x19000044) = *(int *)(param_2 + 8) * 32000;
  return;
}


/* NanoCore 1.11, address 0x4003ea5a.
 * REA evidence: ev_f61d1ed0da39543ddc9152e303b7f49ed39208f35decaa25e40e0de0ce75fe79
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ea5a(int param_1,int param_2)

{
  fence();
  *(int *)(param_1 * 0x10 + 0x19000048) = *(int *)(param_2 + 0xc) * 32000;
  return;
}


/* NanoCore 1.11, address 0x4003ea7a.
 * REA evidence: ev_db7a466a9fa9ed033c4025fd734482da5565e82a28153d869820eb3f585e9ebd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003eaa0) */
/* WARNING: Removing unreachable block (ram,0x4003ea90) */
/* WARNING: Removing unreachable block (ram,0x4003eaae) */

void FUN_ram_4003ea7a(int param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)((param_1 + 0x1900004) * 0x10);
  fence();
  *(uint *)(param_2 + 4) = *puVar1 / 32000;
  fence();
  *(uint *)(param_2 + 8) = puVar1[1] / 32000;
  fence();
  *(uint *)(param_2 + 0xc) = puVar1[2] / 32000;
  return;
}


/* NanoCore 1.11, address 0x4003eab6.
 * REA evidence: ev_69dff7971c5108ffa1057c3f766925cf6f87f64610141e65d3e20c8eedf0bc0e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4003eab6(void)

{
  fence();
  return _DAT_ram_19000000 & 1;
}


/* NanoCore 1.11, address 0x4003eb34.
 * REA evidence: ev_fba70d9356c6452c59fda5e6107e13a4b076ff03b59692daf6112c11185dd5d7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003eb34(int param_1,int param_2)

{
  if (param_1 != 0) {
    fence();
    _DAT_ram_19000000 = param_2 << 1 | 1;
    return;
  }
  fence();
  fence();
  _DAT_ram_19000000 = _DAT_ram_19000000 & 0xfffffffe;
  return;
}


/* NanoCore 1.11, address 0x4003eb5c.
 * REA evidence: ev_05c6d69e28455552dc1356c966ac03fb375063bffdcbd7ac4c847f256ca283e7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003eb5c(undefined4 param_1)

{
  fence();
  _DAT_ram_19000008 = param_1;
  return;
}


/* NanoCore 1.11, address 0x4003eb6a.
 * REA evidence: ev_d316d0aacbcab4cd3f43cc6a0e0ae1c2a8233aae3dce5a5c3a8d36cbe56b68cb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003eb6a(void)

{
  fence();
  return _DAT_ram_19000008;
}


/* NanoCore 1.11, address 0x4003eb78.
 * REA evidence: ev_05665e67a3cf7e66d582887a7178a3651111e9a719a8042edc823ec785be3cc5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003eb78(void)

{
  fence();
  fence();
  return;
}


/* NanoCore 1.11, address 0x4003eb8c.
 * REA evidence: ev_ca2887a01eaeeed323b4cc1b6d5d68985bff30f1454208304c781843f26c5bf1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4003eb8c(void)

{
  int iVar1;
  
  if (_DAT_ram_3007fe10 != 0) {
    return _DAT_ram_3007fe20;
  }
  fence();
  if (_DAT_ram_1900f000 != 0) {
    _DAT_ram_3007fe14 = _DAT_ram_1900f000;
    iVar1 = 8;
    do {
      if ((*(uint *)(PTR_DAT_ram_3004b290_ram_4009853c + iVar1 * 4) & _DAT_ram_1900f000) != 0) {
        _DAT_ram_3007fe20 = iVar1;
        return iVar1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return 0;
}


/* NanoCore 1.11, address 0x4003ebce.
 * REA evidence: ev_daba42d0cbbc925cc552b5aae6d64f1d4ed313667b9b80fddfd94e05f989c1a1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003ebce(undefined4 param_1,int param_2)

{
  int iVar1;
  int aiStack_14 [2];
  
  aiStack_14[0] = param_2;
  iVar1 = (*(code *)PTR_FUN_ram_4003ed62_ram_40098540)();
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_FUN_ram_4003ed70_ram_4009854c)(param_1,aiStack_14);
    if (-1 < iVar1) {
      return iVar1;
    }
  }
  else {
    (*(code *)PTR_FUN_ram_4003ee58_ram_40098548)(param_2,aiStack_14[0]);
  }
  return aiStack_14[0];
}


/* NanoCore 1.11, address 0x4003ec0e.
 * REA evidence: ev_fae24fb6cb40a6e90ce1a955b1da74bd37df95097e83d641c2d08d0e1cc492f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ec0e(int param_1)

{
  fence();
  if ((DAT_ram_19030100 & 0xf0) == 0) {
    if (param_1 != 0) {
      DAT_ram_19030100 = DAT_ram_19030100 | (byte)(param_1 << 4);
    }
    fence();
    fence();
    fence();
    DAT_ram_190300fc = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x4003ec5a.
 * REA evidence: ev_080bf796bb05fc12033198783f9e7907ed7f4a6775f708a94c76138dcce0c82a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4003ec5a(void)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_ram_4003eb8c();
  bVar1 = DAT_ram_19030100;
  if (_DAT_ram_3007fe10 == 0) {
    fence();
    FUN_ram_40032a1a(s_Reset_flag__0x_x_ram_40098344,_DAT_ram_3007fe14);
    _DAT_ram_3007fe18 = FUN_ram_4003ebce(uVar2,bVar1 >> 4);
    _DAT_ram_3007fe10 = 1;
  }
  return _DAT_ram_3007fe18;
}


/* NanoCore 1.11, address 0x4003ecb8.
 * REA evidence: ev_32d0096b22208cecefd55638ab26b11c3ee3b91fb65ab1d283764e868d898c63
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003ecb8(void)

{
  fence();
  fence();
  fence();
  if ((DAT_ram_19030100 & 0xf0) != 0) {
    fence();
    fence();
    DAT_ram_19030100 = DAT_ram_19030100 & 0xf;
    fence();
    DAT_ram_190300fc = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x4003ed0a.
 * REA evidence: ev_f75b5816cf6c573f0924589c4fde91d1c462e5d572a22762b4d240d92dd9fff7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4003ed24) */
/* WARNING: Removing unreachable block (ram,0x4003ed20) */
/* WARNING: Removing unreachable block (ram,0x4003ed2e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003ed0a(undefined *param_1,uint param_2)

{
  if (param_2 == 0) {
    fence();
    param_2 = _DAT_ram_19050008;
  }
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_ram_40098358;
  }
  FUN_ram_40032a1a(s__s_time___d__03d_sec_ram_4009835c,param_1,param_2 / 4000000,
                   (param_2 % 4000000) / 4000);
  return;
}


/* NanoCore 1.11, address 0x4003ed4a.
 * REA evidence: ev_87ec2c13e77eb5df9e86398ae7b1619e865ce0fe7e25fc69800e73143e3f7a0d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003ed4a(void)

{
  fence();
  FUN_ram_4003ed0a(s_Startup_ram_40098374,_DAT_ram_19050008);
  return;
}


/* NanoCore 1.11, address 0x4003ed62.
 * REA evidence: ev_922faa3e2864f7d7ce6275a0e6d898fdc1c8ad549dfcdd091a83078e8a8931a0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ed62(int param_1)

{
  if (param_1 != 4) {
    return 0;
  }
  return 4;
}


/* NanoCore 1.11, address 0x4003ed70.
 * REA evidence: ev_aa42d552bfa7b7972943068a7ad841875cbdd9642a71c5d4e33c32fc8aed1596
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4003ed70(int param_1,int *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 == 2) {
    pcVar1 = s_Reset_reason__Command_Poweroff_ram_4009837c;
LAB_ram_4003ed8a:
    FUN_ram_40032a30(pcVar1);
    goto LAB_ram_4003ed8e;
  }
  if (iVar2 == 3) {
    pcVar1 = s_Reset_reason__Suspend_ram_4009839c;
    goto LAB_ram_4003ed8a;
  }
  if (iVar2 != 0) {
    return -0x16;
  }
  if (param_1 == 0) {
    FUN_ram_40032a30(s_Reset_reason__Power_On_Reset_ram_400983b4);
    return param_3;
  }
  FUN_ram_40032a1a(s_Reset_action__Warm_Reset__reason_ram_400983d4);
  switch(param_1) {
  case 1:
    FUN_ram_40032a30(s_RTC_Power_Down_ram_400983f8);
    iVar2 = 0x10;
    break;
  case 2:
    FUN_ram_40032a30(s_External_PIN_Reset_ram_40098408);
    iVar2 = 0x11;
    break;
  case 3:
    FUN_ram_40032a30(s_JTAG_Reset_ram_4009841c);
    iVar2 = 0x12;
    break;
  default:
    FUN_ram_40032a1a(s_Unknown__d__ram_40098458,param_1);
    goto LAB_ram_4003ed8e;
  case 6:
    FUN_ram_40032a30(s_OTP_Reset_ram_40098428);
    iVar2 = 0x13;
    break;
  case 7:
    pcVar1 = s_Undervoltage_Reset_ram_40098434;
    goto LAB_ram_4003ee36;
  case 8:
    pcVar1 = s_Brown_Out_Reset_ram_40098448;
LAB_ram_4003ee36:
    FUN_ram_40032a30(pcVar1);
    iVar2 = 0x14;
  }
  *param_2 = iVar2;
LAB_ram_4003ed8e:
  return *param_2;
}


/* NanoCore 1.11, address 0x4003ee58.
 * REA evidence: ev_6534ded39d5f5d3567857d00962699cb63103bbf032f96e02209f1fbce760c87
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ee58(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  
  FUN_ram_40032a1a(s_Reset_action__Watchdog_Reset__re_ram_40098488);
  switch(param_1) {
  case 1:
    pcVar1 = s_Command_Reboot_ram_400984c0;
    break;
  default:
    FUN_ram_40032a1a(s_Unknown__d__ram_40098458,param_2);
    return;
  case 4:
    pcVar1 = s_Upgrade_Mode_ram_400984b0;
    break;
  case 10:
    pcVar1 = s_Software_Lockup_ram_400984d0;
    break;
  case 0xb:
    pcVar1 = s_Hardware_Lockup_ram_400984e0;
    break;
  case 0xc:
    pcVar1 = s_Kernel_Panic_ram_400984f0;
    break;
  case 0xd:
    pcVar1 = s_Ramdump_ram_40098500;
  }
  FUN_ram_40032a30(pcVar1);
  return;
}


/* NanoCore 1.11, address 0x4003eee0.
 * REA evidence: ev_ae1ecc9e8034a76be7762f04f4f527cd180719f44e1e8862a0aa58eb085df794
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003eee0(int param_1,int param_2,uint param_3,code *param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 + 3U & 0xfffffffc;
  if (param_3 < 2) {
    uVar2 = (*param_4)(param_3);
  }
  else {
    uVar2 = (*param_4)((param_1 + 3U & 0xfffffffc) + uVar1);
  }
  if (uVar2 != 0) {
    if ((uVar1 - 1 & uVar2) == 0) {
      uVar1 = uVar2 + uVar1;
    }
    else {
      uVar1 = uVar2 + (uVar1 - 1) & -uVar1;
    }
    *(uint *)(uVar1 - 4) = uVar2;
  }
  return;
}


/* NanoCore 1.11, address 0x4003ef2a.
 * REA evidence: ev_b32a4f7e0ae687338960375e40781d5b4cac44fc8d0cf4705925d61c5c939676
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ef2a(int param_1,uint param_2,code *UNRECOVERED_JUMPTABLE_00)

{
  if (param_1 == 0) {
    return;
  }
  if (1 < param_2) {
                    /* WARNING: Could not recover jumptable at 0x4003ef3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(*(undefined4 *)(param_1 + -4));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x4003ef3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_2);
  return;
}


/* NanoCore 1.11, address 0x4003ef42.
 * REA evidence: ev_433cbbfcd97187618aea1d2d7a752796cf0073b5fe47cbdc0042600e1b2066ee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003ef42(void)

{
  uint uVar1;
  
  uVar1 = *(int *)(gp + -0x408) + 3U & 0xfffffffc;
  FUN_ram_40005774(gp + -0x400,*(undefined4 *)(gp + -0x40c),uVar1,
                   (*(uint *)(gp + -0x404) & 0xfffffffc) - uVar1);
  FUN_ram_4000492c(gp + -900,*(undefined4 *)(gp + -0x40c),1);
  return;
}


/* NanoCore 1.11, address 0x4003ef74.
 * REA evidence: ev_b3ff0407d52ff132e73444de975bfdbe918a2124e050b6e9f8b63d14b3db8974
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003ef74(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(gp + -0x410) == param_1) {
    FUN_ram_400049c6(gp + -900,0xffffffff);
    uVar1 = FUN_ram_40005834(gp + -0x400,param_2);
    FUN_ram_40004ab8(gp + -900);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4003efae.
 * REA evidence: ev_f1ad171a4bb7f728b7ff5e26b604554c8f1040815b4179dba0a61e546228b505
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003efae(int param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(gp + -0x410) == param_1)) {
    FUN_ram_400049c6(gp + -900,0xffffffff);
    FUN_ram_4000599e(param_2);
    FUN_ram_40004ab8(gp + -900);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4003efe0.
 * REA evidence: ev_1e91b02574bdaa9284b56b81646a5b7b30c3c4d55ceaa52139cd130ff8993e4d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003efe0(void)

{
  FUN_ram_4003f10e();
  FUN_ram_4003fa8e();
  FUN_ram_4003f156();
  FUN_ram_40005618(0x3008e3c4,0x30140000);
  FUN_ram_4003ef42();
  FUN_ram_40004392();
  return;
}


