/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40003000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4000304c.
 * REA evidence: ev_b4dc4d8723c15882868c8a29b5d7b3cd6e190681fa234394490f345a00c765fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 * FUN_ram_4000304c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)((int)param_1 + param_3);
  puVar3 = param_1;
  if ((3 < param_3) && ((((uint)param_1 ^ (uint)param_2) & 3) == 0)) {
    if (((uint)param_1 & 3) != 0) {
      iVar5 = 4 - ((uint)param_1 & 3);
      puVar2 = param_1;
      puVar4 = param_2;
      iVar6 = iVar5;
      do {
        param_2 = (undefined4 *)((int)puVar4 + 1);
        iVar6 = iVar6 + -1;
        puVar3 = (undefined4 *)((int)puVar2 + 1);
        *(undefined1 *)puVar2 = *(undefined1 *)puVar4;
        puVar2 = puVar3;
        puVar4 = param_2;
      } while (iVar6 != 0);
      param_3 = param_3 - iVar5;
      if (param_3 < 2) goto LAB_ram_400030ce;
    }
    puVar2 = (undefined4 *)(((uint)puVar1 & 0xfffffffc) - 0x20);
    if (puVar3 <= puVar2) {
      param_3 = param_3 & 0x1f;
      do {
        *puVar3 = *param_2;
        puVar3[1] = param_2[1];
        puVar3[2] = param_2[2];
        puVar3[3] = param_2[3];
        puVar3[4] = param_2[4];
        puVar3[5] = param_2[5];
        puVar3[6] = param_2[6];
        puVar4 = param_2 + 7;
        param_2 = param_2 + 8;
        puVar3[7] = *puVar4;
        puVar3 = puVar3 + 8;
      } while (puVar3 <= puVar2);
    }
    puVar1 = (undefined4 *)(((uint)puVar1 & 0xfffffffc) - 4);
    if (puVar3 <= puVar1) {
      param_3 = param_3 & 3;
      puVar2 = puVar3;
      puVar4 = param_2;
      do {
        param_2 = puVar4 + 1;
        puVar3 = puVar2 + 1;
        *puVar2 = *puVar4;
        puVar2 = puVar3;
        puVar4 = param_2;
      } while (puVar3 <= puVar1);
    }
    puVar1 = (undefined4 *)((int)puVar3 + param_3);
  }
LAB_ram_400030ce:
  if (param_3 != 0) {
    do {
      puVar2 = (undefined4 *)((int)puVar3 + 1);
      *(undefined1 *)puVar3 = *(undefined1 *)param_2;
      puVar3 = puVar2;
      param_2 = (undefined4 *)((int)param_2 + 1);
    } while (puVar2 < puVar1);
  }
  return param_1;
}


/* NanoCore 1.11, address 0x40003100.
 * REA evidence: ev_cb8fb6f34be956043c24c6be5625be62b22c23de86c2f30b4e47d18d46e77da3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40003100(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)((int)param_2 + param_3))) {
    iVar3 = param_3 - 1;
    if (param_3 == 0) {
      return;
    }
    do {
      *(undefined1 *)((int)param_1 + iVar3) = *(undefined1 *)((int)param_2 + iVar3);
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
    return;
  }
  uVar5 = param_3;
  if (0xf < param_3) {
    if ((((uint)param_2 | (uint)param_1) & 3) != 0) goto LAB_ram_40003132;
    iVar3 = (param_3 - 0x10 & 0xfffffff0) + 0x10;
    puVar6 = (undefined4 *)((int)param_1 + iVar3);
    puVar2 = param_1;
    puVar4 = param_2;
    do {
      param_1 = puVar2 + 4;
      *puVar2 = *puVar4;
      puVar2[1] = puVar4[1];
      puVar2[2] = puVar4[2];
      puVar2[3] = puVar4[3];
      puVar2 = param_1;
      puVar4 = puVar4 + 4;
    } while (puVar6 != param_1);
    param_2 = (undefined4 *)((int)param_2 + iVar3);
    uVar5 = param_3 & 0xf;
    if ((param_3 & 0xc) != 0) {
      iVar3 = 0;
      do {
        *(undefined4 *)((int)param_1 + iVar3) = *(undefined4 *)((int)param_2 + iVar3);
        iVar3 = iVar3 + 4;
      } while (3 < uVar5 - iVar3);
      iVar3 = (uVar5 - 4 & 0xfffffffc) + 4;
      param_1 = (undefined4 *)((int)param_1 + iVar3);
      param_2 = (undefined4 *)((int)param_2 + iVar3);
      uVar5 = param_3 & 3;
    }
  }
  param_3 = uVar5;
  if (uVar5 == 0) {
    return;
  }
LAB_ram_40003132:
  iVar3 = 0;
  do {
    *(undefined1 *)((int)param_1 + iVar3) = *(undefined1 *)((int)param_2 + iVar3);
    bVar1 = param_3 - 1 != iVar3;
    iVar3 = iVar3 + 1;
  } while (bVar1);
  return;
}


/* NanoCore 1.11, address 0x40003398.
 * REA evidence: ev_9ed9e8b148da4ec81a8069b9b75a8164ddc691e3ea0cd1b1760038029c2c78ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40003398(uint *param_1,uint *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if ((((uint)param_1 | (uint)param_2) & 3) != 0) {
    iVar5 = 0;
    do {
      cVar1 = *(char *)((int)param_2 + iVar5);
      *(char *)((int)param_1 + iVar5) = cVar1;
      iVar5 = iVar5 + 1;
    } while (cVar1 != '\0');
    return;
  }
  uVar3 = *param_2;
  uVar4 = (uVar3 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar3;
  while ((uVar4 | 0x7f7f7f7f) == 0xffffffff) {
    *param_1 = uVar3;
    param_2 = param_2 + 1;
    uVar3 = *param_2;
    param_1 = param_1 + 1;
    uVar4 = (uVar3 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar3;
  }
  uVar3 = *param_2;
  cVar1 = *(char *)((int)param_2 + 1);
  cVar2 = *(char *)((int)param_2 + 2);
  *(char *)param_1 = (char)uVar3;
  if ((((char)uVar3 != '\0') && (*(char *)((int)param_1 + 1) = cVar1, cVar1 != '\0')) &&
     (*(char *)((int)param_1 + 2) = cVar2, cVar2 != '\0')) {
    *(char *)((int)param_1 + 3) = '\0';
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40003414.
 * REA evidence: ev_95eeb26896440f6f22cda2d8acfe6f81acab370e56ae737225dbe9e7ff518fb1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_40003414(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = param_1;
  while (((uint)puVar2 & 3) != 0) {
    puVar3 = (uint *)((int)puVar2 + 1);
    uVar1 = *puVar2;
    puVar2 = puVar3;
    if ((char)uVar1 == '\0') {
      return (char *)((int)puVar3 + (-1 - (int)param_1));
    }
  }
  do {
    puVar3 = puVar2;
    puVar2 = puVar3 + 1;
  } while (((*puVar3 & 0x7f7f7f7f) + 0x7f7f7f7f | *puVar3 | 0x7f7f7f7f) == 0xffffffff);
  if ((char)*puVar3 != '\0') {
    if (*(char *)((int)puVar3 + 1) != '\0') {
      return (char *)((int)puVar2 + ((uint)(*(char *)((int)puVar3 + 2) != '\0') - (int)param_1) + -2
                     );
    }
    return (char *)((int)puVar2 + (-3 - (int)param_1));
  }
  return (char *)((int)puVar2 + (-4 - (int)param_1));
}


/* NanoCore 1.11, address 0x40003478.
 * REA evidence: ev_0ea4d492f6e742bf86403fd0203908e496895655cfb4f5913d9b1171267236d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40003478(uint *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  if (((((uint)param_1 | (uint)param_2) & 3) == 0) && (3 < param_3)) {
    uVar3 = *param_1;
    if (uVar3 != *param_2) {
LAB_ram_40003514:
      uVar2 = (uint)(byte)*param_1;
      uVar3 = (uint)(byte)*param_2;
      iVar1 = param_3 - 1;
      if (uVar3 == uVar2) goto LAB_ram_400034f0;
      goto LAB_ram_4000350a;
    }
    param_3 = param_3 - 4;
    if (param_3 == 0) {
      return 0;
    }
    uVar3 = ~uVar3 & uVar3 + 0xfefefeff;
    while( true ) {
      if ((uVar3 & 0x80808080) != 0) {
        return 0;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (param_3 < 4) break;
      uVar2 = *param_1;
      uVar3 = uVar2 + 0xfefefeff & ~uVar2;
      if (uVar2 != *param_2) goto LAB_ram_40003514;
      param_3 = param_3 - 4;
      if (param_3 == 0) {
        return 0;
      }
    }
  }
  uVar2 = (uint)(byte)*param_1;
  uVar3 = (uint)(byte)*param_2;
  iVar1 = param_3 - 1;
  if (uVar3 == uVar2) {
    if (iVar1 == 0) {
      return 0;
    }
LAB_ram_400034f0:
    if (uVar2 != 0) {
      iVar4 = 1;
      do {
        uVar2 = (uint)*(byte *)((int)param_1 + iVar4);
        uVar3 = (uint)*(byte *)((int)param_2 + iVar4);
        if (uVar2 != uVar3) goto LAB_ram_4000350a;
      } while ((iVar1 != iVar4) && (iVar4 = iVar4 + 1, uVar2 != 0));
    }
    return 0;
  }
LAB_ram_4000350a:
  return uVar2 - uVar3;
}


/* NanoCore 1.11, address 0x40003524.
 * REA evidence: ev_dc7eb8a301e1739cb49ec902e3ac54035fc3968849124318d1fe8815756afa5c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400035ec) */

undefined8 FUN_ram_40003524(undefined4 *param_1,byte *param_2,undefined4 *param_3,uint param_4)

{
  ulonglong uVar1;
  bool bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  
  uVar14 = CONCAT44(DAT_ram_4009bf3c,DAT_ram_4009bf38);
  pbVar4 = param_2;
  do {
    pbVar3 = pbVar4;
    pbVar4 = pbVar3 + 1;
    uVar10 = (uint)*pbVar3;
  } while (((&DAT_ram_40093cbd)[uVar10] & 8) != 0);
  if (uVar10 == 0x2d) {
    uVar10 = (uint)*pbVar4;
    bVar2 = true;
    pbVar4 = pbVar3 + 2;
  }
  else {
    bVar2 = false;
    if (uVar10 == 0x2b) {
      uVar10 = (uint)*pbVar4;
      pbVar4 = pbVar3 + 2;
    }
  }
  if (param_4 == 0) {
    if (uVar10 != 0x30) {
      iVar5 = 5;
      uVar12 = 10;
      iVar13 = 0;
      param_4 = 10;
      goto LAB_ram_400035bc;
    }
    if ((*pbVar4 & 0xdf) != 0x58) {
      iVar5 = 7;
      uVar14 = 0x1fffffffffffffff;
      uVar12 = 8;
      iVar13 = 0;
      param_4 = 8;
      goto LAB_ram_400035bc;
    }
  }
  else {
    if (param_4 != 0x10) {
      iVar13 = (int)param_4 >> 0x1f;
      uVar14 = FUN_ram_40003b9c(0xffffffff,0xffffffff,param_4,iVar13);
      iVar5 = FUN_ram_40003f40(0xffffffff,0xffffffff,param_4,iVar13);
      uVar12 = param_4;
      goto LAB_ram_400035bc;
    }
    if (uVar10 != 0x30) {
      iVar5 = 0xf;
      uVar14 = 0xfffffffffffffff;
      uVar12 = 0x10;
      iVar13 = 0;
      goto LAB_ram_400035bc;
    }
    if ((*pbVar4 & 0xdf) != 0x58) {
      uVar14 = FUN_ram_40003b9c(0xffffffff,0xffffffff,0x10,0);
      iVar5 = FUN_ram_40003f40(0xffffffff,0xffffffff,0x10,0);
      uVar12 = 0x10;
      iVar13 = 0;
      goto LAB_ram_400035bc;
    }
  }
  uVar10 = (uint)pbVar4[1];
  iVar5 = 0xf;
  pbVar4 = pbVar4 + 2;
  uVar14 = 0xfffffffffffffff;
  uVar12 = 0x10;
  iVar13 = 0;
  param_4 = 0x10;
LAB_ram_400035bc:
  iVar8 = 0;
  uVar6 = 0;
  iVar7 = 0;
LAB_ram_400035c8:
  uVar11 = uVar10 - 0x30;
  if (9 < uVar11) {
    if (uVar10 - 0x41 < 0x1a) {
      uVar11 = uVar10 - 0x37;
    }
    else {
      if (0x19 < uVar10 - 0x61) goto LAB_ram_40003644;
      uVar11 = uVar10 - 0x57;
    }
  }
  if ((int)param_4 <= (int)uVar11) goto LAB_ram_40003644;
  if ((iVar8 < 0) || (uVar14 < CONCAT44(iVar7,uVar6))) {
    uVar10 = (uint)*pbVar4;
    iVar8 = -1;
    pbVar4 = pbVar4 + 1;
  }
  else if ((uVar14 == CONCAT44(iVar7,uVar6)) && (iVar8 = -1, iVar5 < (int)uVar11)) {
    uVar10 = (uint)*pbVar4;
    pbVar4 = pbVar4 + 1;
  }
  else {
    iVar9 = iVar13 * uVar6;
    uVar10 = (uint)*pbVar4;
    iVar8 = 1;
    uVar1 = (ulonglong)uVar6;
    uVar6 = uVar11 + uVar6 * uVar12;
    iVar7 = (uint)(uVar6 < uVar11) +
            iVar9 + iVar7 * uVar12 + (int)(uVar1 * uVar12 >> 0x20) + ((int)uVar11 >> 0x1f);
    pbVar4 = pbVar4 + 1;
  }
  goto LAB_ram_400035c8;
LAB_ram_40003644:
  if (iVar8 < 0) {
    *param_1 = 0x22;
    uVar6 = 0xffffffff;
    uVar10 = 0xffffffff;
    iVar7 = -1;
    iVar13 = -1;
    if (param_3 == (undefined4 *)0x0) goto LAB_ram_40003664;
LAB_ram_400036a0:
    param_2 = pbVar4 + -1;
    uVar6 = uVar10;
    iVar7 = iVar13;
  }
  else {
    if (bVar2) {
      iVar7 = -(uint)(uVar6 != 0) - iVar7;
      uVar6 = -uVar6;
    }
    if (param_3 == (undefined4 *)0x0) goto LAB_ram_40003664;
    uVar10 = uVar6;
    iVar13 = iVar7;
    if (iVar8 != 0) goto LAB_ram_400036a0;
  }
  *param_3 = param_2;
LAB_ram_40003664:
  return CONCAT44(iVar7,uVar6);
}


/* NanoCore 1.11, address 0x4000374a.
 * REA evidence: ev_33b69c59f0e3908ef6fc5f236854ca93cda00047b770938e72899df9f0e6503b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000374a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ram_40003524(PTR_DAT_ram_30049530_ram_30049528,param_1,param_2,param_3);
  return;
}


/* NanoCore 1.11, address 0x4000375c.
 * REA evidence: ev_e770251ab1b67936d4f49c4f6f4ba4c0229ce6878cb0db8c59c794aee82bfb45
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_4000375c(uint param_1,uint param_2)

{
  if ((0x1fffff < param_2) && ((param_1 & 0x7ff) != 0)) {
    return (float)((double)param_2 * DAT_ram_4009bf40 + (double)(param_1 & 0xfffff800 | 0x800));
  }
  return (float)((double)param_2 * DAT_ram_4009bf40 + (double)param_1);
}


/* NanoCore 1.11, address 0x400037ac.
 * REA evidence: ev_c5fab2aab80b46d0712f9848fdcfdab99568488b96c4da6078daa1d768cde354
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400038fe) */

undefined8 FUN_ram_400037ac(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar8 = 0;
  if ((int)param_2 < 0) {
    param_2 = -(uint)(param_1 != 0) - param_2;
    param_1 = -param_1;
    uVar8 = 0xffffffff;
  }
  if ((int)param_4 < 0) {
    uVar8 = ~uVar8;
    param_4 = -(uint)(param_3 != 0) - param_4;
    param_3 = -param_3;
  }
  if (param_4 == 0) {
    if (param_2 < param_3) {
      if (param_3 < 0x10000) {
        iVar6 = 0;
        uVar2 = param_3;
        if (0xff < param_3) {
          uVar2 = param_3 >> 8;
          iVar6 = 8;
        }
      }
      else if (param_3 < 0x1000000) {
        iVar6 = 0x10;
        uVar2 = param_3 >> 0x10;
      }
      else {
        iVar6 = 0x18;
        uVar2 = param_3 >> 0x18;
      }
      uVar7 = iVar6 + (uint)(byte)(&DAT_ram_40093dc0)[uVar2];
      uVar2 = 0x20 - uVar7;
      if (uVar7 != 0x20) {
        param_3 = param_3 << (uVar2 & 0x1f);
        param_2 = param_1 >> (uVar7 & 0x1f) | param_2 << (uVar2 & 0x1f);
        param_1 = param_1 << (uVar2 & 0x1f);
      }
      uVar2 = param_3 >> 0x10;
      if (uVar2 == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = param_2 / uVar2;
      }
      if (uVar2 != 0) {
        param_2 = param_2 % uVar2;
      }
      uVar1 = (param_3 & 0xffff) * uVar7;
      uVar9 = param_2 << 0x10 | param_1 >> 0x10;
      uVar3 = uVar7;
      if (uVar9 < uVar1) {
        uVar9 = uVar9 + param_3;
        uVar3 = uVar7 - 1;
        if ((param_3 <= uVar9) && (uVar9 < uVar1)) {
          uVar3 = uVar7 - 2;
          uVar9 = uVar9 + param_3;
        }
      }
      uVar9 = uVar9 - uVar1;
      if (uVar2 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = uVar9 / uVar2;
      }
      if (uVar2 != 0) {
        uVar9 = uVar9 % uVar2;
      }
      uVar2 = (param_3 & 0xffff) * uVar1;
      uVar7 = uVar9 << 0x10 | param_1 & 0xffff;
      if (uVar7 < uVar2) {
        uVar7 = uVar7 + param_3;
        uVar9 = uVar1 - 2;
        if (uVar2 <= uVar7) {
          uVar9 = uVar1 - 1;
        }
        uVar1 = uVar1 - 1;
        if (param_3 <= uVar7) {
          uVar1 = uVar9;
        }
      }
      uVar1 = uVar3 << 0x10 | uVar1;
      uVar2 = 0;
    }
    else {
      if (param_3 == 0) {
        param_3 = 0xffffffff;
      }
      if (param_3 < 0x10000) {
        iVar6 = 0;
        uVar2 = param_3;
        if (0xff < param_3) {
          uVar2 = param_3 >> 8;
          iVar6 = 8;
        }
      }
      else if (param_3 < 0x1000000) {
        iVar6 = 0x10;
        uVar2 = param_3 >> 0x10;
      }
      else {
        iVar6 = 0x18;
        uVar2 = param_3 >> 0x18;
      }
      uVar2 = iVar6 + (uint)(byte)(&DAT_ram_40093dc0)[uVar2];
      uVar7 = 0x20 - uVar2;
      if (uVar2 == 0x20) {
        param_2 = param_2 - param_3;
        uVar3 = param_3 >> 0x10;
        uVar10 = param_3 & 0xffff;
        uVar2 = 1;
      }
      else {
        param_3 = param_3 << (uVar7 & 0x1f);
        uVar1 = param_2 >> (uVar2 & 0x1f);
        uVar3 = param_3 >> 0x10;
        if (uVar3 == 0) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = uVar1 / uVar3;
        }
        uVar2 = param_1 >> (uVar2 & 0x1f) | param_2 << (uVar7 & 0x1f);
        uVar10 = param_3 & 0xffff;
        param_1 = param_1 << (uVar7 & 0x1f);
        if (uVar3 != 0) {
          uVar1 = uVar1 % uVar3;
        }
        uVar4 = uVar10 * uVar9;
        uVar1 = uVar1 << 0x10 | uVar2 >> 0x10;
        uVar7 = uVar9;
        if (uVar1 < uVar4) {
          uVar1 = uVar1 + param_3;
          uVar7 = uVar9 - 1;
          if ((param_3 <= uVar1) && (uVar1 < uVar4)) {
            uVar7 = uVar9 - 2;
            uVar1 = uVar1 + param_3;
          }
        }
        uVar1 = uVar1 - uVar4;
        if (uVar3 == 0) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = uVar1 / uVar3;
        }
        if (uVar3 != 0) {
          uVar1 = uVar1 % uVar3;
        }
        uVar4 = uVar10 * uVar9;
        param_2 = uVar2 & 0xffff | uVar1 << 0x10;
        uVar2 = uVar9;
        if (param_2 < uVar4) {
          param_2 = param_2 + param_3;
          uVar2 = uVar9 - 1;
          if ((param_3 <= param_2) && (param_2 < uVar4)) {
            uVar2 = uVar9 - 2;
            param_2 = param_2 + param_3;
          }
        }
        param_2 = param_2 - uVar4;
        uVar2 = uVar7 << 0x10 | uVar2;
      }
      if (uVar3 == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = param_2 / uVar3;
        param_2 = param_2 % uVar3;
      }
      uVar1 = uVar7 * uVar10;
      uVar4 = param_1 >> 0x10 | param_2 << 0x10;
      uVar9 = uVar7;
      if (uVar4 < uVar1) {
        uVar4 = uVar4 + param_3;
        uVar9 = uVar7 - 1;
        if ((param_3 <= uVar4) && (uVar4 < uVar1)) {
          uVar9 = uVar7 - 2;
          uVar4 = uVar4 + param_3;
        }
      }
      uVar4 = uVar4 - uVar1;
      if (uVar3 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = uVar4 / uVar3;
      }
      if (uVar3 != 0) {
        uVar4 = uVar4 % uVar3;
      }
      uVar7 = uVar4 << 0x10 | param_1 & 0xffff;
      if (uVar7 < uVar1 * uVar10) {
        uVar7 = uVar7 + param_3;
        uVar3 = uVar1 - 2;
        if (uVar1 * uVar10 <= uVar7) {
          uVar3 = uVar1 - 1;
        }
        uVar1 = uVar1 - 1;
        if (param_3 <= uVar7) {
          uVar1 = uVar3;
        }
      }
      uVar1 = uVar9 << 0x10 | uVar1;
    }
  }
  else if (param_2 < param_4) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    if (param_4 < 0x10000) {
      if (param_4 < 0x100) {
        iVar6 = 0;
        uVar2 = param_4;
      }
      else {
        iVar6 = 8;
        uVar2 = param_4 >> 8;
      }
    }
    else if (param_4 < 0x1000000) {
      iVar6 = 0x10;
      uVar2 = param_4 >> 0x10;
    }
    else {
      iVar6 = 0x18;
      uVar2 = param_4 >> 0x18;
    }
    uVar2 = (uint)(byte)(&DAT_ram_40093dc0)[uVar2] + iVar6;
    uVar7 = 0x20 - uVar2;
    if (uVar2 == 0x20) {
      if (param_4 < param_2) {
        uVar2 = 0;
        uVar1 = 1;
      }
      else {
        uVar1 = param_1 < param_3 ^ 1;
        uVar2 = 0;
      }
    }
    else {
      uVar1 = param_4 << (uVar7 & 0x1f) | param_3 >> (uVar2 & 0x1f);
      uVar3 = param_2 >> (uVar2 & 0x1f);
      uVar9 = uVar1 >> 0x10;
      if (uVar9 == 0) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = uVar3 / uVar9;
      }
      uVar2 = param_1 >> (uVar2 & 0x1f) | param_2 << (uVar7 & 0x1f);
      param_3 = param_3 << (uVar7 & 0x1f);
      if (uVar9 != 0) {
        uVar3 = uVar3 % uVar9;
      }
      uVar4 = (uVar1 & 0xffff) * uVar10;
      uVar5 = uVar3 << 0x10 | uVar2 >> 0x10;
      uVar3 = uVar10;
      if (uVar5 < uVar4) {
        uVar5 = uVar5 + uVar1;
        uVar3 = uVar10 - 1;
        if ((uVar1 <= uVar5) && (uVar5 < uVar4)) {
          uVar3 = uVar10 - 2;
          uVar5 = uVar5 + uVar1;
        }
      }
      uVar5 = uVar5 - uVar4;
      if (uVar9 == 0) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = uVar5 / uVar9;
      }
      if (uVar9 != 0) {
        uVar5 = uVar5 % uVar9;
      }
      uVar4 = (uVar1 & 0xffff) * uVar10;
      uVar9 = uVar2 & 0xffff | uVar5 << 0x10;
      uVar2 = uVar10;
      if (uVar9 < uVar4) {
        uVar9 = uVar9 + uVar1;
        uVar2 = uVar10 - 1;
        if ((uVar1 <= uVar9) && (uVar9 < uVar4)) {
          uVar2 = uVar10 - 2;
          uVar9 = uVar9 + uVar1;
        }
      }
      uVar1 = uVar3 << 0x10 | uVar2;
      uVar3 = param_3 & 0xffff;
      uVar10 = (uVar1 >> 0x10) * uVar3;
      param_3 = param_3 >> 0x10;
      uVar3 = (uVar2 & 0xffff) * uVar3;
      iVar6 = (uVar1 >> 0x10) * param_3;
      uVar2 = (uVar3 >> 0x10) + uVar10 + (uVar2 & 0xffff) * param_3;
      if (uVar2 < uVar10) {
        iVar6 = iVar6 + 0x10000;
      }
      uVar10 = iVar6 + (uVar2 >> 0x10);
      if ((uVar9 - uVar4 < uVar10) ||
         ((uVar9 - uVar4 == uVar10 &&
          (param_1 << (uVar7 & 0x1f) < uVar2 * 0x10000 + (uVar3 & 0xffff))))) {
        uVar1 = uVar1 - 1;
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  if (uVar8 != 0) {
    uVar2 = -(uint)(uVar1 != 0) - uVar2;
    uVar1 = -uVar1;
  }
  return CONCAT44(uVar2,uVar1);
}


/* NanoCore 1.11, address 0x40003b9c.
 * REA evidence: ev_f450b59f8043bfa4c1882e70f8a7651afcae7f9911af887f39f56bc8b78400eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40003cae) */

ulonglong FUN_ram_40003b9c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_4 == 0) {
    if (param_3 <= param_2) {
      if (param_3 == 0) {
        param_3 = 0xffffffff;
      }
      if (param_3 < 0x10000) {
        iVar3 = 0;
        uVar2 = param_3;
        if (0xff < param_3) {
          uVar2 = param_3 >> 8;
          iVar3 = 8;
        }
      }
      else if (param_3 < 0x1000000) {
        iVar3 = 0x10;
        uVar2 = param_3 >> 0x10;
      }
      else {
        iVar3 = 0x18;
        uVar2 = param_3 >> 0x18;
      }
      uVar2 = iVar3 + (uint)(byte)(&DAT_ram_40093dc0)[uVar2];
      uVar4 = 0x20 - uVar2;
      if (uVar2 == 0x20) {
        param_2 = param_2 - param_3;
        uVar1 = param_3 >> 0x10;
        uVar9 = param_3 & 0xffff;
        uVar2 = 1;
      }
      else {
        param_3 = param_3 << (uVar4 & 0x1f);
        uVar5 = param_2 >> (uVar2 & 0x1f);
        uVar1 = param_3 >> 0x10;
        if (uVar1 == 0) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = uVar5 / uVar1;
        }
        uVar9 = param_3 & 0xffff;
        uVar2 = param_2 << (uVar4 & 0x1f) | param_1 >> (uVar2 & 0x1f);
        param_1 = param_1 << (uVar4 & 0x1f);
        if (uVar1 != 0) {
          uVar5 = uVar5 % uVar1;
        }
        uVar6 = uVar9 * uVar7;
        uVar5 = uVar5 << 0x10 | uVar2 >> 0x10;
        uVar4 = uVar7;
        if (uVar5 < uVar6) {
          uVar5 = uVar5 + param_3;
          uVar4 = uVar7 - 1;
          if ((param_3 <= uVar5) && (uVar5 < uVar6)) {
            uVar4 = uVar7 - 2;
            uVar5 = uVar5 + param_3;
          }
        }
        uVar5 = uVar5 - uVar6;
        if (uVar1 == 0) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = uVar5 / uVar1;
        }
        if (uVar1 != 0) {
          uVar5 = uVar5 % uVar1;
        }
        uVar6 = uVar9 * uVar7;
        param_2 = uVar5 << 0x10 | uVar2 & 0xffff;
        uVar2 = uVar7;
        if (param_2 < uVar6) {
          param_2 = param_2 + param_3;
          uVar2 = uVar7 - 1;
          if ((param_3 <= param_2) && (param_2 < uVar6)) {
            uVar2 = uVar7 - 2;
            param_2 = param_2 + param_3;
          }
        }
        param_2 = param_2 - uVar6;
        uVar2 = uVar4 << 0x10 | uVar2;
      }
      if (uVar1 == 0) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = param_2 / uVar1;
        param_2 = param_2 % uVar1;
      }
      uVar7 = uVar4 * uVar9;
      uVar6 = param_1 >> 0x10 | param_2 << 0x10;
      uVar5 = uVar4;
      if (uVar6 < uVar7) {
        uVar6 = uVar6 + param_3;
        uVar5 = uVar4 - 1;
        if ((param_3 <= uVar6) && (uVar6 < uVar7)) {
          uVar5 = uVar4 - 2;
          uVar6 = uVar6 + param_3;
        }
      }
      uVar6 = uVar6 - uVar7;
      if (uVar1 == 0) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = uVar6 / uVar1;
      }
      if (uVar1 != 0) {
        uVar6 = uVar6 % uVar1;
      }
      uVar1 = uVar6 << 0x10 | param_1 & 0xffff;
      if (uVar1 < uVar4 * uVar9) {
        uVar1 = uVar1 + param_3;
        uVar7 = uVar4 - 2;
        if (uVar4 * uVar9 <= uVar1) {
          uVar7 = uVar4 - 1;
        }
        uVar4 = uVar4 - 1;
        if (param_3 <= uVar1) {
          uVar4 = uVar7;
        }
      }
      return CONCAT44(uVar2,uVar5 << 0x10 | uVar4);
    }
    if (param_3 < 0x10000) {
      iVar3 = 0;
      uVar2 = param_3;
      if (0xff < param_3) {
        uVar2 = param_3 >> 8;
        iVar3 = 8;
      }
    }
    else if (param_3 < 0x1000000) {
      iVar3 = 0x10;
      uVar2 = param_3 >> 0x10;
    }
    else {
      iVar3 = 0x18;
      uVar2 = param_3 >> 0x18;
    }
    uVar4 = iVar3 + (uint)(byte)(&DAT_ram_40093dc0)[uVar2];
    uVar2 = 0x20 - uVar4;
    if (uVar4 != 0x20) {
      param_3 = param_3 << (uVar2 & 0x1f);
      param_2 = param_1 >> (uVar4 & 0x1f) | param_2 << (uVar2 & 0x1f);
      param_1 = param_1 << (uVar2 & 0x1f);
    }
    uVar2 = param_3 >> 0x10;
    if (uVar2 == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = param_2 / uVar2;
    }
    if (uVar2 != 0) {
      param_2 = param_2 % uVar2;
    }
    uVar1 = (param_3 & 0xffff) * uVar4;
    uVar7 = param_2 << 0x10 | param_1 >> 0x10;
    uVar5 = uVar4;
    if (uVar7 < uVar1) {
      uVar7 = uVar7 + param_3;
      uVar5 = uVar4 - 1;
      if ((param_3 <= uVar7) && (uVar7 < uVar1)) {
        uVar5 = uVar4 - 2;
        uVar7 = uVar7 + param_3;
      }
    }
    uVar7 = uVar7 - uVar1;
    if (uVar2 == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = uVar7 / uVar2;
    }
    if (uVar2 != 0) {
      uVar7 = uVar7 % uVar2;
    }
    uVar2 = (param_3 & 0xffff) * uVar4;
    uVar1 = uVar7 << 0x10 | param_1 & 0xffff;
    if (uVar1 < uVar2) {
      uVar1 = uVar1 + param_3;
      uVar7 = uVar4 - 2;
      if (uVar2 <= uVar1) {
        uVar7 = uVar4 - 1;
      }
      uVar4 = uVar4 - 1;
      if (param_3 <= uVar1) {
        uVar4 = uVar7;
      }
    }
    return (ulonglong)(uVar5 << 0x10 | uVar4);
  }
  if (param_2 < param_4) {
    return 0;
  }
  if (param_4 < 0x10000) {
    if (param_4 < 0x100) {
      iVar3 = 0;
      uVar2 = param_4;
    }
    else {
      iVar3 = 8;
      uVar2 = param_4 >> 8;
    }
  }
  else if (param_4 < 0x1000000) {
    iVar3 = 0x10;
    uVar2 = param_4 >> 0x10;
  }
  else {
    iVar3 = 0x18;
    uVar2 = param_4 >> 0x18;
  }
  uVar2 = (uint)(byte)(&DAT_ram_40093dc0)[uVar2] + iVar3;
  uVar4 = 0x20 - uVar2;
  if (uVar2 == 0x20) {
    if (param_4 < param_2) {
      return 1;
    }
    return (ulonglong)(param_1 < param_3 ^ 1);
  }
  uVar1 = param_4 << (uVar4 & 0x1f) | param_3 >> (uVar2 & 0x1f);
  uVar5 = param_2 >> (uVar2 & 0x1f);
  uVar7 = uVar1 >> 0x10;
  if (uVar7 == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = uVar5 / uVar7;
  }
  uVar2 = param_1 >> (uVar2 & 0x1f) | param_2 << (uVar4 & 0x1f);
  param_3 = param_3 << (uVar4 & 0x1f);
  if (uVar7 != 0) {
    uVar5 = uVar5 % uVar7;
  }
  uVar6 = (uVar1 & 0xffff) * uVar9;
  uVar8 = uVar5 << 0x10 | uVar2 >> 0x10;
  uVar5 = uVar9;
  if (uVar8 < uVar6) {
    uVar8 = uVar8 + uVar1;
    uVar5 = uVar9 - 1;
    if ((uVar1 <= uVar8) && (uVar8 < uVar6)) {
      uVar5 = uVar9 - 2;
      uVar8 = uVar8 + uVar1;
    }
  }
  uVar8 = uVar8 - uVar6;
  if (uVar7 == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = uVar8 / uVar7;
  }
  if (uVar7 != 0) {
    uVar8 = uVar8 % uVar7;
  }
  uVar7 = (uVar1 & 0xffff) * uVar9;
  uVar6 = uVar8 << 0x10 | uVar2 & 0xffff;
  uVar2 = uVar9;
  if (uVar6 < uVar7) {
    uVar6 = uVar6 + uVar1;
    uVar2 = uVar9 - 1;
    if ((uVar1 <= uVar6) && (uVar6 < uVar7)) {
      uVar2 = uVar9 - 2;
      uVar6 = uVar6 + uVar1;
    }
  }
  uVar1 = uVar5 << 0x10 | uVar2;
  uVar5 = param_3 & 0xffff;
  uVar9 = (uVar1 >> 0x10) * uVar5;
  param_3 = param_3 >> 0x10;
  uVar5 = (uVar2 & 0xffff) * uVar5;
  iVar3 = (uVar1 >> 0x10) * param_3;
  uVar2 = (uVar5 >> 0x10) + uVar9 + (uVar2 & 0xffff) * param_3;
  if (uVar2 < uVar9) {
    iVar3 = iVar3 + 0x10000;
  }
  uVar9 = iVar3 + (uVar2 >> 0x10);
  if ((uVar9 <= uVar6 - uVar7) &&
     ((uVar6 - uVar7 != uVar9 || (uVar2 * 0x10000 + (uVar5 & 0xffff) <= param_1 << (uVar4 & 0x1f))))
     ) {
    return (ulonglong)uVar1;
  }
  return (ulonglong)(uVar1 - 1);
}


/* NanoCore 1.11, address 0x40003f40.
 * REA evidence: ev_247b2b89090f17ac3393b02b83c200074ddfec1e0576241ed420dac5b648b00c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40004044) */

ulonglong FUN_ram_40003f40(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_4 != 0) {
    if (param_4 <= param_2) {
      if (param_4 < 0x10000) {
        if (param_4 < 0x100) {
          iVar6 = 0;
          uVar7 = param_4;
        }
        else {
          iVar6 = 8;
          uVar7 = param_4 >> 8;
        }
      }
      else if (param_4 < 0x1000000) {
        iVar6 = 0x10;
        uVar7 = param_4 >> 0x10;
      }
      else {
        iVar6 = 0x18;
        uVar7 = param_4 >> 0x18;
      }
      uVar7 = (uint)(byte)(&DAT_ram_40093dc0)[uVar7] + iVar6;
      uVar9 = 0x20 - uVar7;
      if (uVar7 != 0x20) {
        uVar3 = param_3 >> (uVar7 & 0x1f) | param_4 << (uVar9 & 0x1f);
        uVar4 = param_2 >> (uVar7 & 0x1f);
        uVar2 = uVar3 >> 0x10;
        if (uVar2 == 0) {
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = uVar4 / uVar2;
        }
        uVar1 = param_2 << (uVar9 & 0x1f) | param_1 >> (uVar7 & 0x1f);
        param_3 = param_3 << (uVar9 & 0x1f);
        param_1 = param_1 << (uVar9 & 0x1f);
        if (uVar2 != 0) {
          uVar4 = uVar4 % uVar2;
        }
        uVar8 = (uVar3 & 0xffff) * uVar10;
        uVar5 = uVar4 << 0x10 | uVar1 >> 0x10;
        uVar4 = uVar10;
        if (uVar5 < uVar8) {
          uVar5 = uVar5 + uVar3;
          uVar4 = uVar10 - 1;
          if ((uVar3 <= uVar5) && (uVar5 < uVar8)) {
            uVar4 = uVar10 - 2;
            uVar5 = uVar5 + uVar3;
          }
        }
        uVar5 = uVar5 - uVar8;
        if (uVar2 == 0) {
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = uVar5 / uVar2;
        }
        if (uVar2 != 0) {
          uVar5 = uVar5 % uVar2;
        }
        uVar8 = (uVar3 & 0xffff) * uVar10;
        uVar1 = uVar5 << 0x10 | uVar1 & 0xffff;
        uVar2 = uVar10;
        if (uVar1 < uVar8) {
          uVar1 = uVar1 + uVar3;
          uVar2 = uVar10 - 1;
          if ((uVar3 <= uVar1) && (uVar1 < uVar8)) {
            uVar2 = uVar10 - 2;
            uVar1 = uVar1 + uVar3;
          }
        }
        uVar10 = (uVar4 << 0x10 | uVar2) >> 0x10;
        uVar4 = uVar10 * (param_3 & 0xffff);
        uVar1 = uVar1 - uVar8;
        uVar5 = (uVar2 & 0xffff) * (param_3 & 0xffff);
        iVar6 = uVar10 * (param_3 >> 0x10);
        uVar2 = uVar4 + (uVar2 & 0xffff) * (param_3 >> 0x10) + (uVar5 >> 0x10);
        uVar10 = uVar2 * 0x10000 + (uVar5 & 0xffff);
        if (uVar2 < uVar4) {
          iVar6 = iVar6 + 0x10000;
        }
        uVar2 = iVar6 + (uVar2 >> 0x10);
        if ((uVar1 < uVar2) || ((uVar4 = uVar10, uVar1 == uVar2 && (param_1 < uVar10)))) {
          uVar4 = uVar10 - param_3;
          uVar2 = uVar2 - ((uVar10 < uVar4) + uVar3);
        }
        uVar2 = (uVar1 - uVar2) - (uint)(param_1 < param_1 - uVar4);
        return CONCAT44(uVar2 >> (uVar9 & 0x1f),
                        uVar2 << (uVar7 & 0x1f) | param_1 - uVar4 >> (uVar9 & 0x1f));
      }
      if ((param_4 < param_2) || (uVar7 = param_1, param_3 <= param_1)) {
        uVar7 = param_1 - param_3;
        param_2 = (param_2 - param_4) - (uint)(param_1 < uVar7);
      }
      return CONCAT44(param_2,uVar7);
    }
LAB_ram_40003fec:
    return CONCAT44(param_2,param_1);
  }
  if (param_2 < param_3) {
    if (param_3 < 0x10000) {
      iVar6 = 0;
      uVar7 = param_3;
      if (0xff < param_3) {
        uVar7 = param_3 >> 8;
        iVar6 = 8;
      }
    }
    else if (param_3 < 0x1000000) {
      iVar6 = 0x10;
      uVar7 = param_3 >> 0x10;
    }
    else {
      iVar6 = 0x18;
      uVar7 = param_3 >> 0x18;
    }
    uVar7 = iVar6 + (uint)(byte)(&DAT_ram_40093dc0)[uVar7];
    uVar9 = 0x20 - uVar7;
    if (uVar7 != 0x20) {
      param_3 = param_3 << (uVar9 & 0x1f);
      param_2 = param_1 >> (uVar7 & 0x1f) | param_2 << (uVar9 & 0x1f);
      param_1 = param_1 << (uVar9 & 0x1f);
    }
    uVar2 = param_3 >> 0x10;
    if (uVar2 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = param_2 / uVar2;
    }
    if (uVar2 != 0) {
      param_2 = param_2 % uVar2;
    }
    uVar7 = (param_3 & 0xffff) * uVar7;
    uVar4 = param_2 << 0x10 | param_1 >> 0x10;
    if (uVar4 < uVar7) {
      uVar4 = uVar4 + param_3;
      uVar3 = uVar4 + param_3;
      if (uVar7 <= uVar4) {
        uVar3 = uVar4;
      }
      if (param_3 <= uVar4) {
        uVar4 = uVar3;
      }
    }
    uVar4 = uVar4 - uVar7;
    if (uVar2 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = uVar4 / uVar2;
    }
    if (uVar2 != 0) {
      uVar4 = uVar4 % uVar2;
    }
    uVar7 = (param_3 & 0xffff) * uVar7;
    uVar2 = param_1 & 0xffff | uVar4 << 0x10;
    if (uVar7 <= uVar2) {
      param_1 = uVar2 - uVar7 >> (uVar9 & 0x1f);
      param_2 = 0;
      goto LAB_ram_40003fec;
    }
  }
  else {
    if (param_3 == 0) {
      param_3 = 0xffffffff;
    }
    if (param_3 < 0x10000) {
      iVar6 = 0;
      uVar7 = param_3;
      if (0xff < param_3) {
        uVar7 = param_3 >> 8;
        iVar6 = 8;
      }
    }
    else if (param_3 < 0x1000000) {
      iVar6 = 0x10;
      uVar7 = param_3 >> 0x10;
    }
    else {
      iVar6 = 0x18;
      uVar7 = param_3 >> 0x18;
    }
    uVar7 = iVar6 + (uint)(byte)(&DAT_ram_40093dc0)[uVar7];
    uVar9 = 0x20 - uVar7;
    if (uVar7 == 0x20) {
      param_2 = param_2 - param_3;
      uVar2 = param_3 >> 0x10;
      uVar10 = param_3 & 0xffff;
    }
    else {
      param_3 = param_3 << (uVar9 & 0x1f);
      uVar4 = param_2 >> (uVar7 & 0x1f);
      uVar2 = param_3 >> 0x10;
      if (uVar2 == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = uVar4 / uVar2;
      }
      uVar10 = param_3 & 0xffff;
      uVar7 = param_2 << (uVar9 & 0x1f) | param_1 >> (uVar7 & 0x1f);
      param_1 = param_1 << (uVar9 & 0x1f);
      if (uVar2 != 0) {
        uVar4 = uVar4 % uVar2;
      }
      uVar3 = uVar10 * uVar3;
      uVar4 = uVar4 << 0x10 | uVar7 >> 0x10;
      if (uVar4 < uVar3) {
        uVar4 = uVar4 + param_3;
        uVar1 = uVar4 + param_3;
        if (uVar3 <= uVar4) {
          uVar1 = uVar4;
        }
        if (param_3 <= uVar4) {
          uVar4 = uVar1;
        }
      }
      uVar4 = uVar4 - uVar3;
      if (uVar2 == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = uVar4 / uVar2;
      }
      if (uVar2 != 0) {
        uVar4 = uVar4 % uVar2;
      }
      uVar3 = uVar10 * uVar3;
      param_2 = uVar4 << 0x10 | uVar7 & 0xffff;
      if (param_2 < uVar3) {
        param_2 = param_2 + param_3;
        uVar7 = param_2 + param_3;
        if (uVar3 <= param_2) {
          uVar7 = param_2;
        }
        if (param_3 <= param_2) {
          param_2 = uVar7;
        }
      }
      param_2 = param_2 - uVar3;
    }
    if (uVar2 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = param_2 / uVar2;
      param_2 = param_2 % uVar2;
    }
    uVar7 = uVar7 * uVar10;
    uVar4 = param_1 >> 0x10 | param_2 << 0x10;
    if (uVar4 < uVar7) {
      uVar4 = uVar4 + param_3;
      uVar3 = uVar4 + param_3;
      if (uVar7 <= uVar4) {
        uVar3 = uVar4;
      }
      if (param_3 <= uVar4) {
        uVar4 = uVar3;
      }
    }
    uVar4 = uVar4 - uVar7;
    if (uVar2 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = uVar4 / uVar2;
    }
    if (uVar2 != 0) {
      uVar4 = uVar4 % uVar2;
    }
    uVar7 = uVar7 * uVar10;
    uVar2 = uVar4 << 0x10 | param_1 & 0xffff;
    if (uVar7 <= uVar2) goto LAB_ram_400040e2;
  }
  uVar2 = uVar2 + param_3;
  uVar4 = uVar2 + param_3;
  if (uVar7 <= uVar2) {
    uVar4 = uVar2;
  }
  if (param_3 <= uVar2) {
    uVar2 = uVar4;
  }
LAB_ram_400040e2:
  return (ulonglong)(uVar2 - uVar7 >> (uVar9 & 0x1f));
}


