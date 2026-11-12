/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40035000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40035028.
 * REA evidence: ev_9ded275032b388458b163d4756f99df97138a6f8ca093292a4fceb10300a4cf8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40035028(uint *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar1 = _DAT_ram_3007cbe4;
  FUN_ram_4003a152(*_DAT_ram_3007cbe4,0);
  puVar5 = param_1 + 2;
  uVar2 = *param_1;
  for (uVar4 = 0; uVar4 != uVar2; uVar4 = uVar4 + 1) {
    if (*(int *)(*(int *)(puVar1[1] + 4) + *puVar5 * 0x14 + 4) == 1) {
      puVar1[(puVar5[1] + *puVar5 * 4) * 0x17 + 6] = 0;
    }
    puVar5 = puVar5 + 0x17;
  }
  puVar5 = param_1 + 1;
  uVar2 = 0;
  while( true ) {
    if (*param_1 <= uVar2) {
      FUN_ram_4003a152(*puVar1,1);
      return 0;
    }
    iVar3 = FUN_ram_40034f44(puVar1,puVar5);
    puVar5 = puVar5 + 0x17;
    if (iVar3 != 0) break;
    uVar2 = uVar2 + 1;
  }
  return iVar3;
}


/* NanoCore 1.12, address 0x400350ba.
 * REA evidence: ev_8943f83ae4c372de424999a23a89175774a87a3adf8b7ff4c7e7817662ec3680
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400350ba(undefined4 param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar2 = _DAT_ram_3007cbe4;
  uVar3 = FUN_ram_400002f4();
  fence();
  if (*(uint *)(*piVar2 + 500) < (uint)piVar2[0x110]) {
    bVar1 = true;
    if (2 < *(uint *)(*piVar2 + 500)) goto LAB_ram_40035102;
  }
  FUN_ram_400002fa(uVar3);
  FUN_ram_4004004c(1000);
  bVar1 = false;
LAB_ram_40035102:
  FUN_ram_4003a152(*piVar2,0);
  uVar4 = FUN_ram_40034f44(piVar2,param_1);
  FUN_ram_4003a152(*piVar2,1);
  if (bVar1) {
    FUN_ram_400002fa(uVar3);
  }
  return uVar4;
}


/* NanoCore 1.12, address 0x40035136.
 * REA evidence: ev_e7f21a2357e740377967e05c02e41db38222325be42e4bac67992d1a76756f15
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40035136(int param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 4);
  if (param_2 < (uint)(*piVar1 + piVar1[1])) {
    return (*(uint *)((*(int **)(param_1 + 4))[1] + param_2 * 0x14 + 0x10) & 0xf) >> 3;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40035158.
 * REA evidence: ev_71aabe8ec02f53e10e34a0bbe44222025dbee9c92df5437a0207c0a577e93bfb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40035158(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = _DAT_ram_3007cbe4;
  iVar2 = *param_1;
  iVar3 = FUN_ram_40035136(_DAT_ram_3007cbe4,iVar2);
  if (iVar3 == 0) {
    uVar4 = 0xffffffea;
  }
  else {
    *(int *)(iVar1 + iVar2 * 0xc + 0x318) = iVar2;
    FUN_ram_4000303c(param_1,iVar2 * 0xc + 0x318 + iVar1,0xc);
    uVar4 = 0;
  }
  return uVar4;
}


/* NanoCore 1.12, address 0x400351a6.
 * REA evidence: ev_c23e88ddb5e234112c1f6bcedad6793739f353d650fc89eee024fba5347212b5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400351a6(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = _DAT_ram_3007cbe4;
  iVar2 = FUN_ram_40035136(_DAT_ram_3007cbe4,*param_1);
  if (iVar2 == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    uVar3 = 0xffffffea;
    if ((uint)param_1[1] < 2) {
      FUN_ram_4003a152(*puVar1,0);
      FUN_ram_4003a49e(*puVar1,param_1[2],param_1[1]);
      FUN_ram_4003a152(*puVar1,1);
      FUN_ram_4000303c(puVar1 + *param_1 * 3 + 0xc6,param_1,0xc);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x4003520a.
 * REA evidence: ev_9343983160ae979d1e08238180cd4775b0928f43064ddf19f08c663c02c19a82
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_4003520a(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
                int param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  param_1 = param_1 + param_2 * 0x170;
  iVar6 = 0;
  do {
    if ((iVar6 != param_3) && (*(int *)(param_1 + 0x18) != 0)) {
      if (*(int *)(param_1 + 0x58) == 0) {
        iVar2 = *(int *)(param_1 + 0x50);
        iVar4 = *(int *)(param_1 + 0x54);
      }
      else {
        iVar2 = *(int *)(param_1 + 100);
        iVar4 = *(int *)(param_1 + 0x68);
      }
      uVar5 = *(uint *)(param_1 + 0x30);
      uVar1 = *(uint *)(param_1 + 0x2c);
      uVar3 = iVar4 + uVar5;
      if (param_7 + param_5 <= iVar4 + uVar5) {
        uVar3 = param_7 + param_5;
      }
      if (uVar5 < param_5) {
        uVar5 = param_5;
      }
      if (uVar5 < uVar3) {
        uVar3 = iVar2 + uVar1;
        if (param_6 + param_4 <= iVar2 + uVar1) {
          uVar3 = param_6 + param_4;
        }
        if (uVar1 < param_4) {
          uVar1 = param_4;
        }
        if (uVar1 < uVar3) {
          return 1;
        }
      }
    }
    iVar6 = iVar6 + 1;
    param_1 = param_1 + 0x5c;
    if (iVar6 == 4) {
      return 0;
    }
  } while( true );
}


/* NanoCore 1.12, address 0x4003527c.
 * REA evidence: ev_871b461769e008f29287595cb33cdb8ff90cf1d8eeb39914b16beb84e6c73e41
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte FUN_ram_4003527c(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar4 = *(uint *)(param_2 + 0x14);
  uVar7 = *(uint *)(*(int *)(param_1 + 0x438) + 4);
  if (uVar4 < uVar7) {
    uVar3 = *(uint *)(*(int *)(param_1 + 0x438) + 0x14);
    uVar5 = *(uint *)(param_2 + 0x18);
    if (uVar5 < uVar3) {
      uVar1 = *(uint *)(param_2 + 0x38);
      uVar9 = *(uint *)(param_2 + 0x3c);
      if (*(int *)(param_2 + 0x40) == 0) {
        if (uVar7 < uVar1 + uVar4) {
          *(uint *)(param_2 + 0x38) = uVar7 - uVar4;
        }
        if (uVar3 < uVar9 + uVar5) {
          *(uint *)(param_2 + 0x3c) = uVar3 - uVar5;
        }
        uVar6 = *(undefined4 *)(param_2 + 0x38);
        uVar8 = *(undefined4 *)(param_2 + 0x3c);
      }
      else {
        uVar11 = *(uint *)(param_2 + 0x44);
        if (uVar1 <= uVar11) {
          return 0;
        }
        uVar10 = *(uint *)(param_2 + 0x48);
        if (uVar9 <= uVar10) {
          return 0;
        }
        if (uVar1 < *(int *)(param_2 + 0x4c) + uVar11) {
          *(uint *)(param_2 + 0x4c) = uVar1 - uVar11;
        }
        if (uVar9 < *(int *)(param_2 + 0x50) + uVar10) {
          *(uint *)(param_2 + 0x50) = uVar9 - uVar10;
        }
        if (uVar7 < *(int *)(param_2 + 0x4c) + uVar4) {
          *(uint *)(param_2 + 0x4c) = uVar7 - uVar4;
        }
        if (uVar3 < *(int *)(param_2 + 0x50) + uVar5) {
          *(uint *)(param_2 + 0x50) = uVar3 - uVar5;
        }
        uVar6 = *(undefined4 *)(param_2 + 0x4c);
        uVar8 = *(undefined4 *)(param_2 + 0x50);
      }
      bVar2 = FUN_ram_4003520a(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                               uVar4,uVar5,uVar6,uVar8);
      return bVar2 ^ 1;
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x40035336.
 * REA evidence: ev_6782742db3c1619811eb315117d1bff0e46015c411b51b913217f9d0e2e23b8c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40035336(int param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 * 4;
  iVar1 = param_2 + 4;
  do {
    if (*(int *)(param_1 + 0x18 + param_2 * 0x5c) != 0) {
      return 0;
    }
    param_2 = param_2 + 1;
  } while (param_2 != iVar1);
  return 1;
}


/* NanoCore 1.12, address 0x4003535a.
 * REA evidence: ev_8b91c0864c411073be983e7c8c7e6d3139ae83d4bc1a26f7d1174c36ca9e1265
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003535a(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_ram_4003a530(*param_1,param_3,0);
  iVar1 = FUN_ram_40035336(param_1,param_2);
  if (iVar1 != 0) {
    FUN_ram_4003a51e(*param_1,0);
  }
  return 0;
}


/* NanoCore 1.12, address 0x4003538e.
 * REA evidence: ev_e58387f1bd3e34473a3f63b220fbd705515e637392ccf5edf3d402ef9cc35d29
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003538e(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  
  uVar10 = *(uint *)(param_2 + 0x54);
  uVar7 = *(undefined4 *)(param_2 + 0x38);
  uVar8 = *(undefined4 *)(param_2 + 0x3c);
  iVar9 = *(int *)(param_2 + 0x2c);
  iVar6 = *(int *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  iVar1 = *(int *)(param_2 + 0x40);
  iVar2 = *(int *)(param_2 + 0x44);
  iVar3 = *(int *)(param_2 + 0x48);
  if (uVar10 < 10) {
    if (uVar10 < 8) {
      if (iVar1 == 0) goto LAB_ram_4003541a;
      iVar1 = iVar9 * iVar3 + iVar2 * 4;
    }
    else {
      if (iVar1 == 0) goto LAB_ram_4003541a;
      iVar1 = iVar9 * iVar3 + iVar2 * 3;
    }
  }
  else {
    if (9 < uVar10 - 10) {
      return 0xffffffea;
    }
    if (iVar1 == 0) goto LAB_ram_4003541a;
    iVar1 = iVar9 * iVar3 + iVar2 * 2;
  }
  iVar6 = iVar6 + iVar1;
  uVar7 = *(undefined4 *)(param_2 + 0x4c);
  uVar8 = *(undefined4 *)(param_2 + 0x50);
LAB_ram_4003541a:
  iVar1 = FUN_ram_40035336(param_1,*(undefined4 *)(param_2 + 4));
  if (iVar1 != 0) {
    FUN_ram_4003a48a(*param_1,uVar10);
    FUN_ram_4003a51e(*param_1,1);
  }
  FUN_ram_4003a4c4(*param_1,uVar7,uVar8,uVar4,uVar5,iVar9,iVar6,*(undefined4 *)(param_2 + 8));
  FUN_ram_4003a530(*param_1,*(undefined4 *)(param_2 + 8),1);
  return 0;
}


/* NanoCore 1.12, address 0x40035466.
 * REA evidence: ev_c727302f5fd31e2d0c9a1d136ea2c5f219cf13c4dd481f83b9dd20d556e766ca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40035466(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  if ((((*param_2 == 0x32) && (param_2[1] == 0x32)) && (param_2[2] == 0x32)) && (param_2[3] == 0x32)
     ) {
    FUN_ram_4003a38a();
    return;
  }
  FUN_ram_4003a3e4(*param_1,param_3);
  return;
}


/* NanoCore 1.12, address 0x40035490.
 * REA evidence: ev_507c7e1dcf93dbdb75aebd6ea38ec8bde46986a6ebf308c9bd514b4dd83cfb5c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int * FUN_ram_40035490(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_ram_3004af2c;
  do {
    if (*piVar1 == param_1) {
      return piVar1;
    }
    piVar1 = piVar1 + 2;
  } while (piVar1 != &DAT_ram_3004b04c);
  return (int *)0x0;
}


/* NanoCore 1.12, address 0x400354b2.
 * REA evidence: ev_53353b77a83753a0ce6779714dae287a47fc1f808e670e55ea63fbabf9719c00
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400354b2(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = *(uint *)(param_2 + 0x14);
  uVar5 = *(uint *)(*(int *)(param_1 + 0x438) + 4);
  if (uVar8 < uVar5) {
    uVar7 = *(uint *)(param_2 + 0x18);
    uVar6 = *(uint *)(*(int *)(param_1 + 0x438) + 0x14);
    uVar2 = 0;
    if (uVar7 < uVar6) {
      if (*(int *)(param_2 + 0x40) != 0) {
        uVar3 = *(uint *)(param_2 + 0x38);
        uVar9 = *(uint *)(param_2 + 0x44);
        if (uVar3 <= uVar9) {
          return 0;
        }
        uVar4 = *(uint *)(param_2 + 0x3c);
        uVar1 = *(uint *)(param_2 + 0x48);
        if (uVar4 <= uVar1) {
          return 0;
        }
        if (uVar3 < *(int *)(param_2 + 0x4c) + uVar9) {
          *(uint *)(param_2 + 0x4c) = uVar3 - uVar9;
        }
        if (uVar4 < *(int *)(param_2 + 0x50) + uVar1) {
          *(uint *)(param_2 + 0x50) = uVar4 - uVar1;
        }
      }
      if (uVar5 < *(int *)(param_2 + 0xc) + uVar8) {
        *(uint *)(param_2 + 0xc) = uVar5 - uVar8;
      }
      uVar2 = 1;
      if (uVar6 < *(int *)(param_2 + 0x10) + uVar7) {
        *(uint *)(param_2 + 0x10) = uVar6 - uVar7;
        return uVar2;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40035524.
 * REA evidence: ev_6f6f91d1601544f1cd8338fcb841c60587dfcc5dd49c4831f057084f6deca1fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40035524(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  
  uVar4 = *(uint *)(param_2 + 0x54);
  if (*(int *)(param_2 + 0x1c) != 1) {
    return 0xffffffea;
  }
  uVar10 = *(uint *)(param_2 + 0x38);
  uVar13 = *(uint *)(param_2 + 0x3c);
  if (*(int *)(param_2 + 0xc) == 0) {
    *(uint *)(param_2 + 0xc) = uVar10;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    *(uint *)(param_2 + 0x10) = uVar13;
  }
  iVar2 = FUN_ram_40035490(uVar4);
  if (iVar2 == 0) {
    return 0xffffffea;
  }
  uVar5 = *(uint *)(iVar2 + 4);
  if ((uVar5 & 1) != 0) {
    iVar2 = *(int *)(param_2 + 0x2c);
    iVar16 = *(int *)(param_2 + 0x40);
    iVar14 = *(int *)(param_2 + 0x44);
    iVar6 = *(int *)(param_2 + 0x48);
    iVar7 = *(int *)(param_2 + 0x20);
    if (uVar4 < 10) {
      if (uVar4 < 8) {
        if (iVar16 != 0) {
          iVar6 = iVar2 * iVar6 + iVar14 * 4;
          goto LAB_ram_400355f8;
        }
      }
      else if (iVar16 != 0) {
        iVar6 = iVar2 * iVar6 + iVar14 * 3;
LAB_ram_400355f8:
        iVar7 = iVar7 + iVar6;
        uVar10 = *(uint *)(param_2 + 0x4c);
        uVar13 = *(uint *)(param_2 + 0x50);
      }
    }
    else {
      if (9 < uVar4 - 10) {
        return 0;
      }
      if (iVar16 != 0) {
        iVar6 = iVar2 * iVar6 + iVar14 * 2;
        goto LAB_ram_400355f8;
      }
    }
    FUN_ram_4003a29a(*param_1,uVar10,uVar13,uVar4,iVar2,*(undefined4 *)(param_2 + 0x30),iVar7,
                     *(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),
                     *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18));
    goto LAB_ram_40035616;
  }
  if ((uVar5 & 4) != 0) {
    uVar11 = *(uint *)(param_2 + 0x40);
    uVar1 = *(uint *)(param_2 + 0x44);
    uVar15 = *(uint *)(param_2 + 0x48);
    uVar5 = *(uint *)(param_2 + 0x4c);
    uVar9 = *(uint *)(param_2 + 0x50);
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    uVar8 = *(undefined4 *)(param_2 + 0x10);
    uVar12 = *(uint *)(param_2 + 0x58) & 3;
    if (uVar4 == 0x32) {
      if (uVar11 == 0) {
LAB_ram_400357c2:
        uVar4 = 0;
        uVar9 = uVar13;
        uVar15 = uVar4;
        uVar5 = uVar10;
      }
      else {
        uVar11 = uVar1 & 0x3e;
        uVar4 = uVar15 & 0x1f;
        uVar13 = uVar9;
        uVar15 = uVar4;
      }
    }
    else if (uVar4 < 0x33) {
      if (uVar4 == 0x30) {
        if (uVar11 == 0) goto LAB_ram_400356c8;
        uVar11 = uVar1 & 0x3e;
        uVar4 = uVar15 & 0x1e;
        uVar15 = uVar15 & 0x3f;
LAB_ram_40035774:
        uVar15 = uVar15 >> 1;
        uVar13 = uVar9;
        uVar10 = uVar5;
      }
      else {
        if (uVar4 != 0x31) {
          return 0;
        }
        if (uVar11 != 0) {
          uVar11 = uVar1 & 0x7e;
          uVar4 = uVar15 & 0xe;
          uVar15 = uVar15 & 0x1f;
          goto LAB_ram_40035774;
        }
LAB_ram_400356c8:
        uVar15 = 0;
        uVar4 = 0;
      }
      uVar9 = uVar13 & 0xfffffffe;
      uVar13 = uVar13 >> 1;
      uVar5 = uVar10;
    }
    else {
      if (uVar4 != 0x33) {
        return 0;
      }
      if (uVar11 == 0) goto LAB_ram_400357c2;
      uVar11 = uVar1 & 0x7e;
      uVar4 = uVar15 & 0xf;
      uVar13 = uVar9;
      uVar15 = uVar4;
    }
    uVar10 = uVar5 >> 1;
    FUN_ram_4003a29a(*param_1,uVar5 & 0xfffffffe,uVar9);
    FUN_ram_4003a34a(*param_1,uVar11,uVar4,uVar11,uVar15);
    if ((param_1[0x1c] & 3) != uVar12) {
      FUN_ram_40035466(param_1,param_1 + 0xcc,uVar12);
    }
    FUN_ram_4003a546(*param_1,uVar5 & 0xfffffffe,uVar9,uVar3,uVar8,0);
    goto LAB_ram_4003572a;
  }
  if ((uVar5 & 8) == 0) {
    if ((uVar5 & 0x10) == 0) {
      return 0;
    }
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    uVar8 = *(undefined4 *)(param_2 + 0x10);
    iVar2 = *(int *)(param_2 + 0x20);
    uVar5 = *(uint *)(param_2 + 0x58) & 3;
    if (3 < uVar4 - 0x26) {
      return 0;
    }
    uVar15 = uVar10;
    if (*(int *)(param_2 + 0x40) != 0) {
      iVar2 = iVar2 + *(int *)(param_2 + 0x48) * *(int *)(param_2 + 0x2c) +
              (*(uint *)(param_2 + 0x44) & 0x7ffffffe) * 2;
      uVar13 = *(uint *)(param_2 + 0x50);
      uVar15 = *(uint *)(param_2 + 0x4c);
    }
    FUN_ram_4003a29a(*param_1,uVar15 & 0xfffffffe,uVar13,uVar4,*(int *)(param_2 + 0x2c),
                     *(undefined4 *)(param_2 + 0x30),iVar2,*(undefined4 *)(param_2 + 0x24),
                     *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x14),
                     *(undefined4 *)(param_2 + 0x18));
    uVar10 = uVar15 >> 1;
    if ((param_1[0x1c] & 3) != uVar5) {
      FUN_ram_40035466(param_1,param_1 + 0xcc,uVar5);
    }
    FUN_ram_4003a546(*param_1,uVar15 & 0xfffffffe,uVar13,uVar3,uVar8,0);
    goto LAB_ram_4003572a;
  }
  iVar7 = *(int *)(param_2 + 0x40);
  uVar5 = *(uint *)(param_2 + 0x4c);
  uVar15 = *(uint *)(param_2 + 0x50);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar8 = *(undefined4 *)(param_2 + 0x10);
  uVar9 = *(uint *)(param_2 + 0x58);
  iVar2 = 1;
  iVar6 = iVar2;
  switch(uVar4) {
  case 0x20:
    if (iVar7 == 0) {
LAB_ram_40035868:
      uVar5 = uVar10 & 0xfffffffe;
      uVar15 = uVar13 & 0xfffffffe;
    }
    else {
      uVar5 = uVar5 & 0xfffffffe;
      uVar15 = uVar15 & 0xfffffffe;
    }
    break;
  case 0x21:
  case 0x22:
    if (iVar7 == 0) goto LAB_ram_40035868;
    uVar5 = uVar5 & 0xfffffffe;
    uVar15 = uVar15 & 0xfffffffe;
    break;
  case 0x23:
    if (iVar7 == 0) {
LAB_ram_4003591e:
      uVar5 = uVar10 & 0xfffffffe;
      uVar15 = uVar13;
    }
    else {
      uVar5 = uVar5 & 0xfffffffe;
    }
    goto LAB_ram_40035942;
  case 0x24:
  case 0x25:
    if (iVar7 == 0) goto LAB_ram_4003591e;
    uVar5 = uVar5 & 0xfffffffe;
LAB_ram_40035942:
    uVar10 = uVar5 >> 1;
    uVar13 = uVar15;
    goto LAB_ram_4003589c;
  default:
    goto LAB_ram_4003554e;
  case 0x2a:
    uVar4 = uVar10;
    uVar1 = uVar13;
    if (iVar7 != 0) {
      uVar4 = uVar5;
      uVar1 = uVar15;
    }
    goto LAB_ram_400358ce;
  case 0x2b:
    if (iVar7 == 0) {
      uVar5 = uVar10;
      uVar15 = uVar13;
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
    }
    goto LAB_ram_4003589c;
  }
  uVar10 = uVar5 >> 1;
  uVar13 = uVar15 >> 1;
LAB_ram_4003589c:
  iVar2 = 2;
  uVar4 = uVar5;
  uVar1 = uVar15;
LAB_ram_400358ce:
  FUN_ram_4003a29a(*param_1,uVar4,uVar1);
  if (iVar6 == 0) {
LAB_ram_40035616:
    uVar3 = 0;
  }
  else {
    if ((param_1[0x1c] & 3) != (uVar9 & 3)) {
      FUN_ram_40035466(param_1,param_1 + 0xcc);
    }
    FUN_ram_4003a546(*param_1,uVar4,uVar1,uVar3,uVar8,0);
    if (iVar2 == 2) {
LAB_ram_4003572a:
      FUN_ram_4003a546(*param_1,uVar10,uVar13,uVar3,uVar8,1);
    }
    uVar3 = 1;
  }
  FUN_ram_4003a5fa(*param_1,uVar3);
  FUN_ram_4003a378(*param_1,1);
LAB_ram_4003554e:
  return 0;
}


/* NanoCore 1.12, address 0x40035a34.
 * REA evidence: ev_2999b77c812289b3a61134c592510604719e0080bb2f249e740c282e787a7fac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40035a34(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x40035a3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(*param_1 + 0x10) + 0x14))();
  return;
}


/* NanoCore 1.12, address 0x40035a6c.
 * REA evidence: ev_5dce2b1c8f1602b8931f675bf4ad3d65bec97416b75e75252c8c71f9c32728d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40035a6c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_5c;
  
  iVar2 = *param_2;
  memset(&uStack_7c,0,0x5c);
  iVar1 = *param_1;
  uStack_78 = 1;
  (**(code **)(*(int *)(iVar1 + 0x10) + 0x18))(&uStack_7c);
  uStack_7c = 1;
  iStack_5c = param_1[0x19] + iVar2 * param_1[0x1d];
  (**(code **)(*(int *)(iVar1 + 0x10) + 0x1c))(&uStack_7c);
  return 0;
}


/* NanoCore 1.12, address 0x40035b86.
 * REA evidence: ev_e27d97743e63066140f6af4cc0c8ef913cd65f2cbd1db052816f6375445993e6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40035b86(int *param_1)

{
  int iVar1;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  memset(&uStack_6c,0,0x5c);
  if ((char)param_1[0x17] == '\0') {
    iVar1 = *param_1;
    FUN_ram_40035e40(param_1,1);
    uStack_68 = 1;
    uStack_64 = 0;
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x18))(&uStack_6c);
    uStack_6c = 1;
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x1c))(&uStack_6c);
    FUN_ram_40035ef4(param_1,1);
    *(undefined1 *)(param_1 + 0x17) = 1;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40035c10.
 * REA evidence: ev_31ab896487f267c239ebf01528da8958e798854217136874f5699449db706787
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined * FUN_ram_40035c10(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 == *(int *)(PTR_PTR_ram_3004b36c + 4)) {
    iVar2 = 0;
  }
  else {
    if (param_1 != *(int *)(PTR_DAT_ram_3004adc8_ram_3004b370 + 4)) {
      return (undefined *)0x0;
    }
    iVar2 = 1;
  }
  if ((((&PTR_PTR_ram_3004b36c)[iVar2] != (undefined *)0x0) &&
      (pcVar3 = *(code **)((&PTR_PTR_ram_3004b36c)[iVar2] + 8), pcVar3 != (code *)0x0)) &&
     (iVar1 = (*pcVar3)(), iVar1 == 0)) {
    return (&PTR_PTR_ram_3004b36c)[iVar2];
  }
  return (undefined *)0x0;
}


/* NanoCore 1.12, address 0x40035c5a.
 * REA evidence: ev_3f2fefc000f144be5957162519526c27bb553804ecf01a9b1bcf9b101e11bca4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40035cf6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40035c5a(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (DAT_ram_3007cbe8 != '\0') {
    return 0;
  }
  piVar1 = (int *)FUN_ram_4000559c(0x7c);
  if (piVar1 == (int *)0x0) {
    return -0xc;
  }
  memset(piVar1,0,0x7c);
  iVar2 = FUN_ram_40035c10(0);
  *piVar1 = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_ram_40035c10(4);
    piVar1[1] = iVar2;
    if (iVar2 != 0) {
      iVar2 = FUN_ram_400360ec(4);
      piVar1[2] = iVar2;
      if (iVar2 != 0) {
        FUN_ram_40035faa(piVar1);
        FUN_ram_4003601a(piVar1);
        FUN_ram_4003604a(piVar1);
        iVar2 = piVar1[0x1d] * 2;
        iVar3 = FUN_ram_4003efa2(iVar2,0x20,1,FUN_ram_4003f036);
        piVar1[0x19] = iVar3;
        if (iVar3 == 0) {
          iVar2 = -0xc;
        }
        else {
          memset(iVar3,0,iVar2);
          uVar4 = (piVar1[0x19] & 0x1fU) + iVar2;
          if ((uVar4 & 0x1f) != 0) {
            uVar4 = uVar4 + (0x20 - (int)uVar4 % 0x20);
          }
          fence();
          custom0();
          for (; 0 < (int)uVar4; uVar4 = uVar4 - 0x20) {
            custom0();
          }
          fence();
          custom0();
          FUN_ram_40036088(piVar1,iVar2);
          piVar1[0xb] = 7;
          piVar1[0x10] = 0;
          piVar1[0x11] = 0;
          piVar1[0x12] = 0;
          piVar1[0x13] = 0;
          piVar1[0x14] = 0;
          piVar1[0x15] = (int)FUN_ram_40035dc8;
          piVar1[0x16] = (int)piVar1;
          iVar2 = FUN_ram_400044c8(piVar1 + 4,&DAT_ram_4009c940,3);
          if (iVar2 == 0) {
            *(undefined1 *)(piVar1 + 0x17) = 0;
            DAT_ram_3007cbe8 = 1;
            _DAT_ram_3007cbec = piVar1;
            FUN_ram_40035e40(piVar1,1);
            FUN_ram_40035e72(piVar1);
            FUN_ram_40035e9c(piVar1);
            return 0;
          }
        }
        goto LAB_ram_40035d90;
      }
    }
  }
  iVar2 = -0x16;
LAB_ram_40035d90:
  FUN_ram_40002f28(piVar1);
  return iVar2;
}


/* NanoCore 1.12, address 0x40035dc8.
 * REA evidence: ev_87f892477cbbc8008d2a35fc5ea161708d75366fd55f79cf9e0a5111d622dbf0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40035dc8(undefined4 param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = _DAT_ram_3007cbec;
  if (_DAT_ram_3007cbec == 0) {
    return 10;
  }
  switch(param_2) {
  case 0x701:
    param_2 = 0x4663;
    break;
  case 0x702:
    param_2 = 0x4664;
    break;
  case 0x703:
    *param_3 = 0xe;
    param_3[1] = (char)*(undefined4 *)(iVar1 + 0x78);
    *(short *)(param_3 + 2) = (short)*(undefined4 *)(iVar1 + 0x70);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(iVar1 + 100);
    *(short *)(param_3 + 4) = (short)*(undefined4 *)(iVar1 + 0x68);
    uVar2 = *(undefined4 *)(iVar1 + 0x74);
    *(short *)(param_3 + 6) = (short)*(undefined4 *)(iVar1 + 0x6c);
    *(undefined4 *)(param_3 + 0xc) = uVar2;
    return 0;
  case 0x70a:
    param_2 = 0x4643;
    break;
  case 0x70b:
    param_2 = 0x4620;
  }
  piVar3 = &DAT_ram_3004b04c;
  while ((*piVar3 != param_2 || ((code *)piVar3[1] == (code *)0x0))) {
    piVar3 = piVar3 + 10;
    if (*piVar3 == 0xffff) {
      return 0xffffffea;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x40035dba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)piVar3[1])(_DAT_ram_3007cbec,param_3);
  return uVar2;
}


/* NanoCore 1.12, address 0x40035e40.
 * REA evidence: ev_987bf5d3b5b50d9ea74b2ffda85182be09910d75a273b43bd8ba32987ae05651
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40035e40(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  if (param_2 == 1) {
    (**(code **)(*(int *)(iVar1 + 0x10) + 4))();
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar2 + 0x10) + 4);
  }
  else {
    (**(code **)(*(int *)(iVar2 + 0x10) + 8))();
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar1 + 0x10) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x40035e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* NanoCore 1.12, address 0x40035e72.
 * REA evidence: ev_ba0151cfe31c52aaab040647e38f9a60e1d428beb2751a7327932239c368b2e3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40035e72(int *param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = *param_1;
  local_20 = 1;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  (**(code **)(*(int *)(iVar1 + 0x10) + 0x24))(&local_20);
  (**(code **)(*(int *)(iVar1 + 0x10) + 0x28))(&local_20);
  return;
}


/* NanoCore 1.12, address 0x40035e9c.
 * REA evidence: ev_84d1c028d599453defb9b5453dfc91dd1449806f7f78925cc50f7d4117e2f85b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40035e9c(int *param_1)

{
  int iVar1;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_4c;
  int iStack_40;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = *param_1;
  memset(&uStack_6c,0,0x5c);
  uStack_68 = 1;
  (**(code **)(*(int *)(iVar1 + 0x10) + 0x18))(&uStack_6c);
  uStack_6c = 1;
  if (param_1[0x18] == 0) {
    iStack_34 = param_1[0x1a];
    uStack_2c = 0;
    uStack_14 = 0;
    iStack_30 = param_1[0x1b];
    iStack_40 = param_1[0x1c];
    iStack_4c = param_1[0x19];
    uStack_18 = 0xe;
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x1c))(&uStack_6c);
  }
  return;
}


/* NanoCore 1.12, address 0x40035ef4.
 * REA evidence: ev_cc16a272a4c59401fcd8a5b7ad0ced35d324c656768a08b92693607ae4632981
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40035f84) */

void FUN_ram_40035ef4(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_24 [20];
  
  iVar4 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0xc) == 0) {
    puVar1 = *(undefined4 **)(iVar4 + 4);
  }
  else {
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xc) + 8);
  }
  if (param_2 != 1) {
    (*(code *)puVar1[2])(iVar4);
                    /* WARNING: Could not recover jumptable at 0x40035fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar1[3])();
    return;
  }
  (*(code *)*puVar1)();
  (*(code *)puVar1[1])(iVar4);
  iVar4 = FUN_ram_4000303c(auStack_24,&PTR_DAT_ram_4009c974_ram_40095980,0x14);
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (*(int *)(param_1 + 0xc) == 0) {
    puVar2 = (uint *)puVar1[8];
  }
  else {
    puVar2 = *(uint **)(*(int *)(param_1 + 0xc) + 4);
  }
  uVar3 = (puVar2[7] + puVar2[5] + puVar2[6] + puVar2[8]) *
          (puVar2[4] + puVar2[3] + puVar2[1] + puVar2[2]);
  if (uVar3 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *puVar2 / uVar3;
  }
  FUN_ram_4003390a(s__s_type___s_pclk___d_Mhz_h___d_v_ram_4009c98c,*puVar1,
                   *(undefined4 *)(iVar4 + puVar1[0xd] * 4),*puVar2 / 1000000,puVar2[1],puVar2[5],
                   uVar3);
  return;
}


/* NanoCore 1.12, address 0x40035faa.
 * REA evidence: ev_c4af23a5a4ae05693ea0efaec3e74cb3b0fb5d2ff8b4c988a01f0a801090c864
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40035faa(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = CONCAT44(param_2,param_1);
  iVar2 = param_1[2];
  iVar1 = *(int *)(iVar2 + 0x28);
  iVar6 = *param_1;
  iVar5 = param_1[1];
  if (iVar1 != 0) {
    if (*(int *)(iVar2 + 0x2c) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + *(int *)(iVar2 + 0x30) * 0x10;
      param_1[3] = iVar1;
    }
  }
  pcVar4 = *(code **)(*(int *)(iVar5 + 0x10) + 0x14);
  if (pcVar4 != (code *)0x0) {
    uVar7 = (*pcVar4)(iVar2,iVar1);
  }
  uVar3 = 0x18;
  pcVar4 = *(code **)(*(int *)(iVar5 + 0x10) + 0x18);
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x18);
  }
  if ((code *)**(undefined4 **)(iVar6 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40036006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(iVar6 + 0x10))(iVar2,iVar1,uVar3,1);
    return;
  }
  return;
}


