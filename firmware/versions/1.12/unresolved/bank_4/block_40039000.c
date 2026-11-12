/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40039000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40039044.
 * REA evidence: ev_c43618044732358204fa09d65d947e5de5e2c25bb43f0a8bff82d15bda29e7e2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40039044(int param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x14);
  uVar2 = *param_3;
  uVar3 = FUN_ram_40038e42(s_pll_fra2_ram_4009cd74);
  if (bVar1 == uVar3) {
    uVar4 = 0x5e69ec00;
    uVar3 = 360000000;
  }
  else {
    uVar4 = 1560000000;
    uVar3 = 768000000;
  }
  uVar6 = 0;
  if (param_2 < uVar3) {
    if (param_2 == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = ((param_2 - 1) + uVar3) / param_2;
    }
    uVar6 = uVar6 - 1;
    if (3 < uVar6) {
      uVar6 = 3;
    }
  }
  uVar6 = uVar6 + 1;
  uVar3 = uVar6 * param_2;
  if (uVar4 < uVar6 * param_2) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3;
  if (uVar2 != 0) {
    uVar4 = uVar3 % uVar2;
  }
  if (uVar4 != 0) {
    uVar5 = uVar2 >> 1;
    uVar4 = uVar3;
    if (uVar5 != 0) {
      uVar4 = uVar3 % uVar5;
    }
    if (uVar4 != 0) {
      if (uVar2 == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = uVar3 / uVar2;
      }
      if (uVar6 == 0) {
        param_2 = 0xffffffff;
      }
      else {
        param_2 = (uVar3 * uVar5 * 2) / uVar6;
      }
    }
  }
  return param_2;
}


/* NanoCore 1.12, address 0x40039138.
 * REA evidence: ev_6370d1d1929fef71a6abd95227cd880aa0a4d6632f72779a1ef165a81bc855a4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40039138(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  
  uVar11 = *(byte *)(param_1 + 0x17) & 0x20;
  if ((*(byte *)(param_1 + 0x17) & 0x20) == 0) {
    bVar1 = *(byte *)(param_1 + 0x14);
    uVar4 = FUN_ram_40038e42(s_pll_fra2_ram_4009cd74);
    if (bVar1 == uVar4) {
      uVar6 = 0x5e69ec00;
      uVar4 = 360000000;
    }
    else {
      uVar6 = 1560000000;
      uVar4 = 768000000;
    }
    puVar7 = (uint *)(*(int *)(param_1 + 8) + 0x18020000);
    if (param_2 == 24000000) {
      fence();
      fence();
      *(uint *)(*(int *)(param_1 + 8) + 0x18020000) = *puVar7 & 0xffefffff;
    }
    else {
      fence();
      fence();
      puVar9 = (uint *)(*(int *)(param_1 + 8) + 0x18020000);
      *puVar9 = *puVar7 & 0xffefffff;
      uVar8 = 0;
      if (param_2 < uVar4) {
        if (param_2 == 0) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = ((param_2 - 1) + uVar4) / param_2;
        }
        uVar8 = uVar8 - 1;
        if ((uVar8 == 2) || (uVar11 = (uint)(uVar8 != 0), 3 < uVar8)) {
          uVar8 = 3;
          uVar11 = 1;
        }
      }
      uVar10 = uVar8 + 1;
      uVar4 = param_2 * uVar10;
      if (uVar6 < param_2 * uVar10) {
        uVar4 = uVar6;
      }
      uVar6 = uVar4;
      if (param_3 != 0) {
        uVar6 = uVar4 % param_3;
      }
      uVar5 = (uVar6 != 0) + 1;
      if (param_3 == 0) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uVar4 * uVar5) / param_3;
      }
      fence();
      uVar11 = *puVar9 & 0xffff0000 | uVar8 << 4 | uVar11 << 0x13 | (uint)(uVar6 != 0) |
               (uVar4 - 1) * 0x100;
      if (*(char *)(param_1 + 0x15) == '\x02') {
        uVar11 = uVar11 & 0xe0ffffff;
      }
      fence();
      *(uint *)(*(int *)(param_1 + 8) + 0x18020000) = uVar11;
      if (*(char *)(param_1 + 0x15) == '\x01') {
        uVar11 = 0;
        if (uVar10 == 0) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (param_3 * uVar4) / uVar10;
        }
        if (uVar5 == 0) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = uVar4 / uVar5;
        }
        if (uVar4 != 0) {
          param_2 = param_2 % uVar4;
        }
        if (param_2 != 0) {
          uVar2 = ((ulonglong)uVar5 * (ulonglong)uVar10 & 0xffffffff) * (ulonglong)param_2;
          lVar3 = (uVar2 & 0xffffffff) * 0x1ffff;
          uVar11 = FUN_ram_40003bf8((int)lVar3,
                                    (int)((ulonglong)lVar3 >> 0x20) +
                                    ((int)(uVar2 >> 0x20) +
                                    param_2 * (int)((ulonglong)uVar5 * (ulonglong)uVar10 >> 0x20)) *
                                    0x1ffff,param_3,0);
        }
        fence();
        *(uint *)(*(int *)(param_1 + 0xc) + 0x18020000) = (uint)(param_2 != 0) << 0x14 | uVar11;
        fence();
        *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x18020000) = 0xc0000000;
      }
      else if (*(char *)(param_1 + 0x15) == '\x02') {
        FUN_ram_40038ea6(param_1,param_3);
      }
      fence();
      fence();
      *(uint *)(*(int *)(param_1 + 8) + 0x18020000) =
           *(uint *)(*(int *)(param_1 + 8) + 0x18020000) | 0x50000;
      FUN_ram_4004004c(200);
      fence();
      fence();
      *(uint *)(*(int *)(param_1 + 8) + 0x18020000) =
           *(uint *)(*(int *)(param_1 + 8) + 0x18020000) & 0xffefffff | 0x100000;
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4003932e.
 * REA evidence: ev_639935176623412ff16e44a28519f2505d1d97ccaff38f442a16d2fe65a55acb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4003932e(void)

{
  uint uVar1;
  
  fence();
  if ((_DAT_ram_1901001c & 2) == 0) {
    uVar1 = 0xfffffff;
  }
  else {
    uVar1 = 0x1ffffffd;
  }
  _DAT_ram_180200a4 = _DAT_ram_180200a4 & uVar1;
  return;
}


/* NanoCore 1.12, address 0x40039360.
 * REA evidence: ev_98c964965cb0b68df9fee5bdc5da9ea58fb24340968a3f03d342e57023cc10fa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039360(uint param_1,int param_2,uint param_3,int *param_4,uint param_5,uint *param_6,
                     undefined1 *param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_1 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = ((param_1 >> 1) + param_2) / param_1;
  }
  if (param_3 == 0) {
    param_3 = 0xffffffff;
  }
  else {
    param_3 = ((param_3 - 1) + uVar7) / param_3;
  }
  uVar1 = 0;
  do {
    if (param_3 <= (uint)(1 << (uVar1 & 0x1f))) break;
    uVar1 = uVar1 + 1;
  } while (param_5 != uVar1);
  uVar7 = uVar7 >> (uVar1 & 0x1f);
  iVar3 = (uVar7 << (uVar1 & 0x1f)) * param_1;
  if (iVar3 != param_2) {
    uVar4 = iVar3 - param_2;
    uVar6 = (int)uVar4 >> 0x1f;
    uVar6 = (uVar4 ^ uVar6) - uVar6;
    uVar4 = (param_1 * 7 >> 1) - param_2;
    uVar8 = (int)uVar4 >> 0x1f;
    uVar8 = (uVar8 ^ uVar4) - uVar8;
    uVar2 = (param_1 * 9 >> 1) - param_2;
    uVar4 = (int)uVar2 >> 0x1f;
    uVar4 = (uVar2 ^ uVar4) - uVar4;
    if ((uVar8 <= uVar6) || (uVar4 <= uVar6)) {
      if ((uVar8 < uVar6) && (uVar8 < uVar4)) {
        uVar5 = 1;
      }
      else {
        if ((uVar6 <= uVar4) || (uVar8 <= uVar4)) goto LAB_ram_40039396;
        uVar5 = 2;
      }
      *param_7 = uVar5;
      goto LAB_ram_4003939a;
    }
  }
LAB_ram_40039396:
  *param_7 = 0;
LAB_ram_4003939a:
  *param_4 = uVar7 - 1;
  *param_6 = uVar1;
  return;
}


/* NanoCore 1.12, address 0x400393fe.
 * REA evidence: ev_61aaf54512ea966692722e36d73de78ae0bfd8962ddd30ff9d71ea3b01423593
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400393fe(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cStack_19;
  int iStack_18;
  uint auStack_14 [3];
  
  uVar1 = *param_3;
  cStack_19 = '\0';
  if (*(byte *)(param_1 + 0xf) == 0) {
    uVar2 = 0xffffffea;
    if (*(byte *)(param_1 + 0xd) != 0) {
      uVar3 = 0;
      uVar2 = 0xffffffff;
      uVar5 = 0;
      do {
        uVar4 = param_2 << (uVar5 & 0x1f);
        uVar6 = uVar5;
        if (uVar1 == uVar4) break;
        uVar4 = uVar1 - uVar4;
        uVar6 = (int)uVar4 >> 0x1f;
        uVar6 = (uVar6 ^ uVar4) - uVar6;
        if (uVar6 < uVar2) {
          uVar2 = uVar6;
          uVar3 = uVar5;
        }
        uVar5 = uVar5 + 1;
        uVar6 = uVar3;
      } while (uVar5 <= *(byte *)(param_1 + 0xd));
      uVar2 = uVar1 >> (uVar6 & 0x1f);
    }
  }
  else {
    FUN_ram_40039360(param_2,uVar1,*(byte *)(param_1 + 0xf) + 1,&iStack_18,
                     *(byte *)(param_1 + 0x11) + 1,auStack_14,&cStack_19);
    if (cStack_19 == '\x01') {
      uVar2 = 7;
    }
    else {
      if (cStack_19 != '\x02') {
        if (iStack_18 + 1U == 0) {
          uVar1 = 0xffffffff;
        }
        else {
          uVar1 = uVar1 / (iStack_18 + 1U);
        }
        return uVar1 >> (auStack_14[0] & 0x1f);
      }
      uVar2 = 9;
    }
    if (uVar2 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = (uVar1 << 1) / uVar2;
    }
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x4003953c.
 * REA evidence: ev_f5a56b88c0e9c6b912b0724243415c3a9d7f7e0228e32a6ced757ee20bfa2bca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003953c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bStack_19;
  int iStack_18;
  int aiStack_14 [2];
  
  bStack_19 = 0;
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x18020000);
  fence();
  if (*(byte *)(param_1 + 0xf) == 0) {
    uVar3 = (uint)*(byte *)(param_1 + 0xd);
    if (uVar3 != 0) {
      uVar2 = 0;
      uVar7 = 0xffffffff;
      uVar4 = 0;
      do {
        iVar5 = param_2 << (uVar4 & 0x1f);
        uVar6 = uVar4;
        if (param_3 == iVar5) break;
        uVar6 = param_3 - iVar5;
        uVar8 = (int)uVar6 >> 0x1f;
        uVar8 = (uVar8 ^ uVar6) - uVar8;
        if (uVar8 < uVar7) {
          uVar2 = uVar4;
          uVar7 = uVar8;
        }
        uVar4 = uVar4 + 1;
        uVar6 = uVar2;
      } while (uVar4 <= uVar3);
      fence();
      *(uint *)(*(int *)(param_1 + 8) + 0x18020000) =
           uVar6 << (*(byte *)(param_1 + 0xc) & 0x1f) |
           ~(uVar3 << (*(byte *)(param_1 + 0xc) & 0x1f)) & uVar1;
    }
  }
  else {
    FUN_ram_40039360(param_2,param_3,*(byte *)(param_1 + 0xf) + 1,&iStack_18,
                     *(byte *)(param_1 + 0x11) + 1,aiStack_14,&bStack_19);
    uVar3 = (uint)*(byte *)(param_1 + 0x12);
    if (bStack_19 == 0) {
      uVar3 = ~((uint)*(byte *)(param_1 + 0x13) << (uVar3 & 0x1f) |
                (uint)*(byte *)(param_1 + 0xf) << (*(byte *)(param_1 + 0xe) & 0x1f) |
               (uint)*(byte *)(param_1 + 0x11) << (*(byte *)(param_1 + 0x10) & 0x1f)) & uVar1;
      uVar1 = iStack_18 << (*(byte *)(param_1 + 0xe) & 0x1f) |
              aiStack_14[0] << (*(byte *)(param_1 + 0x10) & 0x1f);
    }
    else {
      uVar1 = ~((uint)*(byte *)(param_1 + 0x13) << (uVar3 & 0x1f)) & uVar1;
      uVar3 = (uint)bStack_19 << (uVar3 & 0x1f);
    }
    fence();
    *(uint *)(*(int *)(param_1 + 8) + 0x18020000) = uVar3 | uVar1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40039bb8.
 * REA evidence: ev_f568b298a1d205f351ac3f9b7963cffcb71cc0d63c68fc9fcc8292e9ea53d39a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40039bb8(uint param_1)

{
  if (param_1 < 0x35) {
    fence();
    fence();
    *(uint *)(*(int *)(&DAT_ram_4009e04c + param_1 * 0xc) + 0x18020000) =
         ~*(uint *)(&DAT_ram_4009e050 + param_1 * 0xc) &
         *(uint *)(*(int *)(&DAT_ram_4009e04c + param_1 * 0xc) + 0x18020000);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x40039bf8.
 * REA evidence: ev_748e374d8c48399abae8e21b55277e9fe79ecb7afb429b4652b0fb6083a4e14a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40039bf8(uint param_1)

{
  if (param_1 < 0x35) {
    fence();
    fence();
    *(uint *)(*(int *)(&DAT_ram_4009e04c + param_1 * 0xc) + 0x18020000) =
         *(uint *)(*(int *)(&DAT_ram_4009e04c + param_1 * 0xc) + 0x18020000) |
         *(uint *)(&DAT_ram_4009e050 + param_1 * 0xc);
    return 0;
  }
  return 0xffffffea;
}


/* NanoCore 1.12, address 0x40039c34.
 * REA evidence: ev_ba0ef024ce8e39ec56bd268a00447033e3481f8cd55ea4fc1081e8e3d06d3ab0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039c34(uint *param_1,uint param_2,uint param_3)

{
  fence();
  fence();
  *param_1 = (param_3 ^ *param_1) & param_2 ^ *param_1;
  return;
}


/* NanoCore 1.12, address 0x40039c48.
 * REA evidence: ev_dd2d2d45c8b97793438a1072ebdc4026cf2fea6273be268434b77753e635c24e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039c48(uint *param_1,uint param_2)

{
  fence();
  fence();
  *param_1 = param_2 | *param_1;
  return;
}


/* NanoCore 1.12, address 0x40039c58.
 * REA evidence: ev_83e23661b6dbcbd04e7d4061eaab5d1c18831cde5b8cf9e7a84fa1a845dfb2e5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039c58(int param_1,uint param_2,int param_3)

{
  param_1 = param_1 + 0x100;
  FUN_ram_40039c34(param_1,0xff00,(param_2 & 0xff) << 8);
  FUN_ram_40039c48(param_1,1);
  FUN_ram_40039c34(param_1,0xff000000,param_3 << 0x18);
  FUN_ram_40039c48(param_1,0x10000);
  return;
}


/* NanoCore 1.12, address 0x40039ca2.
 * REA evidence: ev_610f1c15c6938e90bea49ebb8811bed125be822100a3b397cd2f87edd787540d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039ca2(int param_1,int param_2,uint param_3)

{
  fence();
  *(uint *)(param_1 + 0x10c) = param_2 << 8 | param_3;
  return;
}


/* NanoCore 1.12, address 0x40039cb2.
 * REA evidence: ev_11ecbd2ebdc250a404611082f6272fb49c8937dc91238345b708ae32f84c417e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039cb2(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  fence();
  *(undefined4 *)(param_1 + 0x104) = param_2;
  for (iVar2 = 0; iVar2 != param_3; iVar2 = iVar2 + 1) {
    fence();
    *(uint *)(param_1 + 0x108) = (uint)*(byte *)(param_4 + iVar2);
  }
  FUN_ram_40039ca2(param_1,iVar2,1);
  iVar2 = FUN_ram_400400c0();
  do {
    fence();
    if ((*(uint *)(param_1 + 0x124) & 0x12) == 2) {
      return;
    }
    iVar1 = FUN_ram_400400c0();
  } while (-1 < (iVar2 + 1000000) - iVar1);
  fence();
  return;
}


/* NanoCore 1.12, address 0x40039d2e.
 * REA evidence: ev_58c90cb6419d5a7e6de7f0a5d89202082a6f1df593ddf318168ec0e51739c680
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039d2e(int param_1,int param_2,int param_3,uint param_4)

{
  fence();
  *(uint *)(param_1 + 0x204) = param_3 << 8 | param_4 | param_2 << 0x10;
  return;
}


/* NanoCore 1.12, address 0x40039d42.
 * REA evidence: ev_3b1bbad7ebbe2b3d1cad80c41acb350d529c19ae866849d4aa99333c5e2b7fb6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039d42(int param_1,uint param_2,uint param_3,int param_4)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x234);
  FUN_ram_40039c34(puVar1,0xff0000,(param_2 & 0xff) << 0x10);
  FUN_ram_40039c34(puVar1,0xff00,(param_3 & 0xff) << 8);
  if (param_4 != 0) {
    FUN_ram_40039c48(puVar1,1);
    return;
  }
  fence();
  fence();
  *puVar1 = *puVar1 & 0xfffffffe;
  return;
}


/* NanoCore 1.12, address 0x40039d9e.
 * REA evidence: ev_845f1f96eb038c96bd5eac0a571fd4301ebe7cc8b18b7a2c59c0ea144d3e210b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039d9e(int param_1,uint param_2,int param_3)

{
  param_1 = param_1 + 0x208;
  FUN_ram_40039c34(param_1,0xff00,(param_2 & 0xff) << 8);
  FUN_ram_40039c48(param_1,1);
  FUN_ram_40039c34(param_1,0xff000000,param_3 << 0x18);
  FUN_ram_40039c48(param_1,0x10000);
  return;
}


/* NanoCore 1.12, address 0x40039de8.
 * REA evidence: ev_f9682e479bbead2abad293e978a89755b1e6d380531a89dade88ba73e45ce862
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039de8(int param_1,int param_2,uint param_3)

{
  fence();
  *(uint *)(param_1 + 0x214) = param_2 << 8 | param_3;
  return;
}


/* NanoCore 1.12, address 0x40039df8.
 * REA evidence: ev_0d8aafe388ca10953ad5baf685d1e2d526b1316f374b430307a0c45948fe1b48
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039df8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  fence();
  *(undefined4 *)(param_1 + 0x20c) = param_2;
  for (iVar2 = 0; iVar2 != param_3; iVar2 = iVar2 + 1) {
    fence();
    *(uint *)(param_1 + 0x210) = (uint)*(byte *)(param_4 + iVar2);
  }
  FUN_ram_40039de8(param_1,iVar2,1);
  iVar2 = FUN_ram_400400c0();
  do {
    fence();
    if ((*(uint *)(param_1 + 0x22c) & 0x12) == 2) {
      return;
    }
    iVar1 = FUN_ram_400400c0();
  } while (-1 < (iVar2 + 1000000) - iVar1);
  fence();
  return;
}


/* NanoCore 1.12, address 0x40039e74.
 * REA evidence: ev_7a41d73343ea84497f890fbd19907bde6a7d8b3cc721468d434a5dd2446f6747
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039e74(uint *param_1,uint param_2)

{
  fence();
  fence();
  *param_1 = ~param_2 & *param_1;
  return;
}


/* NanoCore 1.12, address 0x40039e88.
 * REA evidence: ev_0acbbfc06d381a077e292a2e97bbed54af53a7aa6d2fc9c92b5f05bdc9e2be99
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039e88(uint *param_1,uint param_2,uint param_3)

{
  fence();
  fence();
  *param_1 = (param_3 ^ *param_1) & param_2 ^ *param_1;
  return;
}


/* NanoCore 1.12, address 0x40039e9c.
 * REA evidence: ev_7d991e3190d201a90a4780cca96e3e6af93153d823c8842cdeb4613d83d60ac4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40039e9c(uint *param_1,uint param_2)

{
  fence();
  if (param_2 == 0) {
    FUN_ram_4003390a(s_BUG__failure_at__s__d__s____ram_4009ce54,
                     s_bsp_artinchip_include_hal_aic_ha_ram_4009ce20,0x35,s_reg_set_bit_ram_4009ce80
                    );
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  fence();
  *param_1 = param_2 | *param_1;
  return;
}


/* NanoCore 1.12, address 0x40039ed4.
 * REA evidence: ev_a487a39458f265cf1427da881f14579473a7b2e69835be7ff246b82688b77c66
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40039f58) */
/* WARNING: Removing unreachable block (ram,0x40039f26) */
/* WARNING: Removing unreachable block (ram,0x40039f42) */
/* WARNING: Removing unreachable block (ram,0x40039f70) */

void FUN_ram_40039ed4(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                     int param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_a0;
  undefined1 auStack_9c [8];
  int iStack_94;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_64;
  int local_60 [17];
  
  memset(auStack_9c,0,0x38);
  memset(local_60,0,0x40);
  iVar6 = 100;
  if (param_3 < 0x65) {
    iVar6 = param_3;
  }
  if (100 < param_4) {
    param_4 = 100;
  }
  iVar2 = (param_4 * 0xb4) / 100;
  if (100 < param_5) {
    param_5 = 100;
  }
  if (100 < param_6) {
    param_6 = 100;
  }
  iVar7 = (param_6 * 0x3a) / 100;
  puVar1 = &DAT_ram_3004b9c0;
  if (param_2 != 0) {
    if (param_2 == 1) {
      puVar1 = (undefined4 *)&DAT_ram_3004ba20;
    }
    else if (param_2 == 2) {
      puVar1 = (undefined4 *)&DAT_ram_3004b990;
    }
    else if (param_2 == 3) {
      puVar1 = &DAT_ram_3004b9f0;
    }
  }
  iVar9 = *(int *)(iVar7 * 4 + 0x4009cf7c);
  iVar5 = (param_5 << 7) / 100 + 0x40;
  iVar3 = iVar2 + 0x26;
  local_a0 = iVar3 * 8;
  iStack_94 = ((iVar6 << 7) / 100 + -0x40) * 0x800 + (iVar3 * -8 + 0x400) * 0x10;
  uStack_64 = 0x400;
  iVar3 = iVar5 * iVar3;
  iStack_8c = *(int *)(iVar7 * 4 + 0x4009ce8c) * iVar3 >> 0x10;
  iStack_78 = iStack_8c;
  iStack_88 = iVar9 * iVar3 >> 0x10;
  iStack_84 = (0x400 - (iStack_88 + iStack_8c)) * 0x80;
  piVar4 = &local_a0;
  iStack_7c = (-0x80 - (iVar2 + -0x5a)) * iVar5 * iVar9 >> 0x10;
  iStack_74 = (0x400 - (iStack_8c + iStack_7c)) * 0x80;
  if (param_1 != 0) {
    iVar6 = 0;
    do {
      iVar2 = 0;
      do {
        iVar3 = *(int *)((int)local_60 + iVar2 + iVar6 + -0x60 + 0x60);
        iVar7 = 0;
        do {
          iVar9 = iVar7 * 0x10;
          iVar5 = iVar7 * 4;
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + (*(int *)((int)&DAT_ram_3004b950 + iVar9 + iVar2) *
                           *(int *)(auStack_9c + iVar5 + iVar6 + -4) >> 10);
        } while (iVar7 != 4);
        *(int *)((int)local_60 + iVar2 + iVar6 + -0x60 + 0x60) = iVar3;
        iVar2 = iVar2 + 4;
      } while (iVar2 != 0x10);
      iVar6 = iVar6 + 0x10;
    } while (iVar6 != 0x40);
    piVar4 = local_60;
  }
  iVar6 = 0;
  do {
    iVar2 = 0;
    do {
      iVar7 = 0;
      iVar3 = 0;
      do {
        iVar5 = puVar1[iVar6 + iVar3];
        if (iVar3 == 3) {
          iVar5 = iVar5 << 6;
        }
        iVar9 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        iVar7 = iVar7 + iVar5 * piVar4[iVar2 + iVar9];
      } while (iVar3 != 4);
      if (iVar2 == 3) {
        uVar8 = iVar7 >> 0x10;
        if (0x1f9b < iVar7 >> 0x10) {
          uVar8 = 0x1f9b;
        }
        if ((int)uVar8 < -0x1f9c) {
          uVar8 = 0xffffe064;
        }
        uVar8 = uVar8 & 0x3fff;
      }
      else {
        uVar8 = iVar7 >> 10;
        if (0xfff < iVar7 >> 10) {
          uVar8 = 0xfff;
        }
        if ((int)uVar8 < -0x1000) {
          uVar8 = 0xfffff000;
        }
        uVar8 = uVar8 & 0x1fff;
      }
      *(uint *)(param_7 + iVar6 * 4 + iVar2 * 4) = uVar8;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0xc);
  return;
}


