/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40047000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400475d4.
 * REA evidence: ev_4b7f9704be6eb7c66033c8c75ceda8d7f08c8dab78b5c65ec08515a88056383e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400475d4(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [24];
  
  FUN_ram_40046f28(param_1,auStack_30,auStack_20);
  iVar1 = FUN_ram_4004a4b4(auStack_30);
  if ((iVar1 != 0) || (iVar1 = FUN_ram_4004a4b4(auStack_20), iVar1 != 0)) {
    iVar1 = FUN_ram_4004a4b4(auStack_30);
    if (iVar1 != 0) {
      FUN_ram_40045578(param_1,auStack_30);
    }
    iVar1 = FUN_ram_4004a4b4(auStack_20);
    if (iVar1 != 0) {
      FUN_ram_40045578(param_1,auStack_20);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4004761c.
 * REA evidence: ev_333ab69b4034a6097909be34f2b936233895265304ce659cad2623ac53e61251
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004761c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_40046632();
  if (iVar1 == 0) {
    iVar2 = FUN_ram_40046652(param_1);
    iVar1 = FUN_ram_40046666(param_1);
    if ((iVar1 < 0) && (0 < iVar2)) {
      iVar1 = -iVar1;
      if (iVar2 <= iVar1) {
        iVar1 = iVar2;
      }
      FUN_ram_40046982(param_1,0,iVar1,param_2);
    }
  }
  iVar1 = FUN_ram_40046622(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4004671e(param_1);
    iVar2 = FUN_ram_4004680e(param_1);
    iVar3 = FUN_ram_40046488(param_1,0);
    if (iVar3 == 1) {
      if ((iVar1 < 0) && (iVar3 = iVar1, 0 < iVar2)) goto LAB_ram_40047694;
    }
    else if ((iVar2 < 0) && (0 < iVar1)) {
      iVar3 = -iVar2;
      if (iVar1 <= iVar3) {
        iVar3 = iVar1;
      }
LAB_ram_40047694:
      FUN_ram_40046982(param_1,iVar3,0,param_2);
      return;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x400476c4.
 * REA evidence: ev_e9bb46caa707f48a0ec0498211346398f1fa13af59b805b83a027c8ea752c8da
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400476c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = FUN_ram_40048b96();
  for (iVar1 = 0; iVar1 != iVar3; iVar1 = iVar1 + 1) {
    uVar2 = *(undefined4 *)(**(int **)(param_1 + 8) + iVar1 * 4);
    FUN_ram_400455dc(uVar2);
    FUN_ram_40044c48(uVar2,0x2d,0);
    FUN_ram_400455dc(uVar2);
    FUN_ram_400476c4(uVar2);
  }
  return;
}


/* NanoCore 1.12, address 0x40047716.
 * REA evidence: ev_7c6432eae3091d98f8ca2ae282399d8099682e98eee17ee3ad060a05e335bc04
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40047716(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar1 = (uint)*(byte *)(param_1 + 2);
  param_1 = (undefined4 *)*param_1;
  if (uVar1 == 0xff) {
    do {
      puVar4 = param_1;
      if ((byte *)*puVar4 == (byte *)0x0) {
        return 0;
      }
      param_1 = puVar4 + 2;
    } while (*(byte *)*puVar4 != param_2);
    uVar3 = puVar4[1];
  }
  else {
    uVar2 = 0;
    while( true ) {
      if (uVar1 <= uVar2) {
        return 0;
      }
      if (*(byte *)((int)param_1 + uVar2 + uVar1 * 4) == param_2) break;
      uVar2 = uVar2 + 1;
    }
    uVar3 = param_1[uVar2];
  }
  *param_3 = uVar3;
  return 1;
}


/* NanoCore 1.12, address 0x4004775c.
 * REA evidence: ev_52d80c99e459ecfde218dbeca99ea440f560dccf7bc84d7e39ba931582c28323
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4004775c(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = param_3 >> 2;
  if (0x1f < uVar5) {
    uVar5 = 0x1f;
  }
  uVar1 = *(ushort *)(param_1 + 0x2a);
  uVar6 = 1 << (uVar5 & 0x1f);
  uVar5 = 0;
  do {
    if ((*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14 <= uVar5) {
      uVar2 = 0xffffffff;
LAB_ram_400477ba:
      return uVar2 != 0xffffffff;
    }
    uVar2 = *(uint *)(*(int *)(param_1 + 0xc) + uVar5 * 8 + 4);
    if ((uVar2 & 0x2000000) == 0) {
      uVar2 = 0xffffffff;
      for (; uVar5 < (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14; uVar5 = uVar5 + 1) {
        iVar3 = *(int *)(*(int *)(param_1 + 0xc) + uVar5 * 8);
        if ((uVar6 & *(uint *)(iVar3 + 4)) != 0) {
          uVar4 = *(uint *)(*(int *)(param_1 + 0xc) + uVar5 * 8 + 4);
          if (((((param_2 & 0xff0000) == (uVar4 & 0xff0000)) &&
               (uVar7 = uVar4 & 0xffff, (uVar4 & 0xffffff & ~(param_2 & 0xffff) & 0xffff) == 0)) &&
              ((int)uVar2 < (int)uVar7)) &&
             ((iVar3 = FUN_ram_40047716(iVar3,param_3,param_4), iVar3 == 1 &&
              (uVar2 = uVar7, (param_2 & 0xffff) == uVar7)))) {
            return true;
          }
        }
      }
      goto LAB_ram_400477ba;
    }
    if ((((uVar1 & 8) == 0) && ((uVar2 & 0xff0000) == (param_2 & 0xff0000))) &&
       ((iVar3 = *(int *)(*(int *)(param_1 + 0xc) + uVar5 * 8), (uVar6 & *(uint *)(iVar3 + 4)) != 0
        && (iVar3 = FUN_ram_40047716(iVar3,param_3,param_4), iVar3 == 1)))) {
      return true;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}


/* NanoCore 1.12, address 0x40047884.
 * REA evidence: ev_af0bb615d286f0e90954a2ac8b3eeaede07d42c7d8436fac20661718af41e22a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40047884(int *param_1,uint param_2,uint param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_ram_4004775c();
  if (iVar2 == 1) {
    return 1;
  }
  if (param_3 < 0x8d) {
    bVar1 = (&DAT_ram_4009e778)[param_3];
  }
  else {
    if (_DAT_ram_30080d10 == 0) {
      return 0;
    }
    bVar1 = *(byte *)(_DAT_ram_30080d10 + param_3 + -0x8d);
  }
  if ((bVar1 & 1) == 0) {
    if (((param_2 & 0xff0000) == 0) && ((param_3 - 1 & 0xff) < 2)) {
      for (param_1 = (int *)*param_1; param_1 != (int *)0x0; param_1 = (int *)*param_1) {
        if (param_3 == 1) {
          if (param_1[6] != 0) {
            *param_4 = param_1[6];
            return 1;
          }
        }
        else if (param_1[7] != 0) {
          *param_4 = param_1[7];
          return 1;
        }
      }
    }
  }
  else {
    if ((param_2 & 0xff0000) == 0) {
      param_1 = (int *)param_1[1];
    }
    for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
      iVar2 = FUN_ram_4004775c(param_1,(short)param_1[10],param_3,param_4);
      if (iVar2 == 1) {
        return 1;
      }
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4004793a.
 * REA evidence: ev_bfea059933df212f34a0ea5ab396df3af79ac1a79f6a08048a220fe9c7e9678d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4004793a(int param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)FUN_ram_4004b616(0x30080cf8);
  while ((piVar1 = piVar3, piVar1 != (int *)0x0 && (piVar1 != param_4))) {
    piVar3 = (int *)FUN_ram_4004b624(0x30080cf8,piVar1);
    if (((*piVar1 == param_1) && ((piVar1[2] == param_2 || (param_2 == 0xf0000)))) &&
       ((*(byte *)(piVar1 + 1) == param_3 || (param_3 == 0xff)))) {
      for (uVar2 = 0; uVar2 < (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14; uVar2 = uVar2 + 1) {
        uVar4 = *(uint *)(*(int *)(param_1 + 0xc) + uVar2 * 8 + 4);
        if (((uVar4 & 0x2000000) != 0) && ((param_2 == 0xf0000 || (param_2 == (uVar4 & 0xffffff)))))
        {
          FUN_ram_4004bd78(*(undefined4 *)(*(int *)(param_1 + 0xc) + uVar2 * 8),(char)piVar1[1]);
        }
      }
      FUN_ram_4004a332(piVar1,0);
      FUN_ram_4004b552(0x30080cf8,piVar1);
      FUN_ram_4005a988(piVar1);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40047a1e.
 * REA evidence: ev_d528e3bbbfe299d1bc2cd7130796adb3af7a0c731598c7fd92fad9727e8804e5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40047a1e(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar5 = (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14;
  for (uVar4 = 0; uVar4 < uVar5; uVar4 = uVar4 + 1) {
    uVar3 = *(uint *)(iVar1 + uVar4 * 8 + 4);
    if (((uVar3 & 0x2000000) != 0) && ((uVar3 & 0xffffff) == param_2)) goto LAB_ram_40047a40;
  }
  if (uVar5 == uVar4) {
    uVar4 = uVar5 + 1 & 0x3f;
    *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfc0f | (ushort)(uVar4 << 4);
    iVar1 = FUN_ram_4005a99a(iVar1,uVar4 << 3);
    *(int *)(param_1 + 0xc) = iVar1;
    uVar4 = (*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14;
    while (uVar4 = uVar4 - 1, uVar4 != 0) {
      *(undefined4 *)(iVar1 + uVar4 * 8) = *(undefined4 *)(iVar1 + -8 + uVar4 * 8);
      *(undefined4 *)(iVar1 + uVar4 * 8 + 4) = *(undefined4 *)(uVar4 * 8 + iVar1 + -8 + 4);
    }
    thunk_FUN_ram_40004f92(iVar1,0,8);
    puVar7 = *(undefined4 **)(param_1 + 0xc);
    uVar2 = FUN_ram_4005a952(0xc);
    puVar6 = *(undefined4 **)(param_1 + 0xc);
    *puVar7 = uVar2;
    FUN_ram_4004bd46(*puVar6);
    iVar1 = *(int *)(param_1 + 0xc);
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xff000000 | 0x2000000 | param_2 & 0xffffff;
  }
  else {
LAB_ram_40047a40:
    iVar1 = iVar1 + uVar4 * 8;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x40047af0.
 * REA evidence: ev_89d644fe9635bce4cf69061966d13c5fb91b48fd32ff473d204c1ea54a957b25
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40047af0(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  
  bVar1 = *(byte *)(param_1 + 2);
  puVar2 = (undefined4 *)*param_1;
  if (bVar1 == 0xff) {
    do {
      puVar6 = (undefined1 *)*puVar2;
      if (puVar6 == (undefined1 *)0x0) goto LAB_ram_40047b4c;
      puVar2 = puVar2 + 2;
      uVar3 = FUN_ram_4004bfc0(*puVar6);
    } while ((uVar3 & 0x20) == 0);
LAB_ram_40047b3a:
    uVar5 = 1;
  }
  else {
    for (uVar3 = 0; uVar3 < *(byte *)(param_1 + 2); uVar3 = uVar3 + 1) {
      uVar4 = FUN_ram_4004bfc0(*(undefined1 *)((int)puVar2 + uVar3 + (uint)bVar1 * 4));
      if ((uVar4 & 0x20) != 0) goto LAB_ram_40047b3a;
    }
LAB_ram_40047b4c:
    uVar5 = 0;
  }
  return uVar5;
}


/* NanoCore 1.12, address 0x40047b50.
 * REA evidence: ev_6d4d0a239e9d0cc7d1bc0fec8527d07660d43e55f8247cfc3f4393218c71e128
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047b50(void)

{
  FUN_ram_4004b436(0x30080cf8,0x14);
  return;
}


/* NanoCore 1.12, address 0x40047b5e.
 * REA evidence: ev_9080f2c15ea051360f86fe354ac2185b967905ba0a5614507777625ee0d4d638
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047b5e(undefined1 param_1)

{
  DAT_ram_30080d04 = param_1;
  return;
}


/* NanoCore 1.12, address 0x40047b68.
 * REA evidence: ev_4e19651605e9326f0807254effacf265af54d4139d7486a5d034ea0b2cd08c05
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40047b68(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = 0;
  iVar1 = FUN_ram_40047884(param_1,param_2 | *(ushort *)(param_1 + 0x28),param_3,&uStack_18);
  if (iVar1 == 1) {
    uStack_14 = uStack_18;
  }
  else {
    uStack_14 = FUN_ram_4004bf1c(param_3);
  }
  return uStack_14;
}


/* NanoCore 1.12, address 0x40047b9c.
 * REA evidence: ev_e2386becd307771a5162800c89bd58cfb7884fbb7e3c56b6423bab96b019b2ef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40047b9c(int *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  puVar2 = (undefined4 *)*param_1;
  uVar5 = puVar2[2];
  uVar3 = FUN_ram_40047b68(*puVar2,uVar5 & 0xff0000,*(undefined1 *)(puVar2 + 1));
  uVar1 = *(undefined1 *)(puVar2 + 1);
  puVar2[3] = uVar3;
  *(undefined1 *)(puVar2 + 1) = 0;
  FUN_ram_4004793a(*puVar2,uVar5 & 0xff0000,uVar1,puVar2);
  *(undefined1 *)(puVar2 + 1) = uVar1;
  puVar4 = (undefined4 *)FUN_ram_40047a1e(*puVar2,puVar2[2]);
  FUN_ram_4004be1a(*puVar4,*(undefined1 *)(puVar2 + 1),puVar2[3]);
  return;
}


/* NanoCore 1.12, address 0x40047bf0.
 * REA evidence: ev_bc4fd42bf28298fb997f810e39e86e6cf74653a6162be34776019f9eb2a7442c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40047bf0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  while( true ) {
    if ((*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14 <= uVar3) {
      return 0;
    }
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc) + uVar3 * 8);
    uVar4 = puVar2[1];
    if (((uVar4 & 0x1000000) != 0) && ((uVar4 & 0xffffff) == param_4)) break;
    uVar3 = uVar3 + 1;
  }
  uVar1 = FUN_ram_4004bed6(*puVar2);
  return uVar1;
}


/* NanoCore 1.12, address 0x40047c2a.
 * REA evidence: ev_34b520157d58a803c2b8bb93def53e1b554e02da98d7684d108ae41402820e75
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40047cfa) */
/* WARNING: Removing unreachable block (ram,0x40047d08) */

void FUN_ram_40047c2a(int param_1,int param_2,undefined2 param_3,undefined2 param_4,ushort *param_5)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_80;
  uint uStack_7c;
  int *piStack_78;
  code *pcStack_74;
  code *pcStack_6c;
  code *pcStack_68;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  int iStack_44;
  byte bStack_2a;
  
  *(undefined2 *)(param_1 + 0x28) = param_3;
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 8;
  uVar2 = FUN_ram_40047b68(param_1,param_2,(char)param_5[4]);
  *(undefined2 *)(param_1 + 0x28) = param_4;
  uStack_7c = FUN_ram_40047b68(param_1,param_2,(char)param_5[4]);
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfff7;
  if ((uVar2 != uStack_7c) || ((uStack_7c & 0xffffff) != (uVar2 & 0xffffff))) {
    *(undefined2 *)(param_1 + 0x28) = param_3;
    local_80 = FUN_ram_40047b68(param_1,param_2,(char)param_5[4]);
    *(undefined2 *)(param_1 + 0x28) = param_4;
    puVar3 = (undefined4 *)FUN_ram_40047a1e(param_1,param_2);
    FUN_ram_4004be1a(*puVar3,(char)param_5[4],local_80);
    if (((char)param_5[4] == '\f') && ((local_80 == 0x7fff || (uStack_7c == 0x7fff)))) {
      iVar4 = FUN_ram_4004515c(param_1);
      iVar4 = iVar4 / 2;
      iVar5 = FUN_ram_40045168(param_1);
      iVar5 = iVar5 / 2;
      if (local_80 == 0x7fff) {
        local_80 = iVar5;
        if (iVar4 < iVar5) {
          local_80 = iVar4;
        }
        local_80 = local_80 + 1;
      }
      if (uStack_7c == 0x7fff) {
        if (iVar4 < iVar5) {
          iVar5 = iVar4;
        }
        uStack_7c = iVar5 + 1;
      }
    }
    piStack_78 = (int *)FUN_ram_4004b446(0x30080cf8);
    if (piStack_78 != (int *)0x0) {
      *piStack_78 = param_1;
      piStack_78[3] = local_80;
      piStack_78[4] = uStack_7c;
      uVar1 = param_5[4];
      piStack_78[2] = param_2;
      *(char *)(piStack_78 + 1) = (char)uVar1;
      FUN_ram_4004a24c(&piStack_78);
      pcStack_74 = FUN_ram_400486dc;
      pcStack_6c = FUN_ram_40047b9c;
      pcStack_68 = FUN_ram_400484da;
      uStack_50 = 0x80000000;
      uStack_4c = 0xff;
      uStack_48 = (uint)*param_5;
      uStack_54 = 0;
      iStack_44 = -(uint)param_5[1];
      uStack_58 = *(undefined4 *)(param_5 + 6);
      bStack_2a = bStack_2a & 0xfe;
      uStack_5c = *(undefined4 *)(param_5 + 8);
      FUN_ram_4004a292(&piStack_78);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40047dca.
 * REA evidence: ev_49fd52e1944dab9dac21f77ba20c7326367d36320f1ff6fb615f2164973b18f4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40047dca(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  int *piVar2;
  uint uStack_24;
  
  uStack_24 = param_3;
  if (param_1 != 0) {
    piVar2 = (int *)FUN_ram_40047b68(param_1,param_2,0x61);
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      cVar1 = FUN_ram_40047b68(param_1,param_2,0x62);
      if (cVar1 != '\0') {
        uStack_24 = (*(code *)*piVar2)(piVar2,param_3);
        uStack_24 = uStack_24 & 0xffffff;
      }
    }
  }
  return uStack_24;
}


/* NanoCore 1.12, address 0x40047e2c.
 * REA evidence: ev_7f4b07b1d88e5e776da22ccb8c5fc84fe5a23f6714e7296a9ff68f4fcbaeb945
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40047e2c(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_24 [4];
  
  uVar5 = 0;
  iVar2 = 0;
  do {
    if ((*(uint *)(param_1 + 0x28) & 0x3ffffff) >> 0x14 <= uVar5) {
      return iVar2;
    }
    uVar4 = *(uint *)(*(int *)(param_1 + 0xc) + uVar5 * 8 + 4);
    if (((uVar4 & 0x2000000) == 0) &&
       (uVar4 = uVar4 & 0xffff, ((~param_2 & uVar4) == 0) != ((~param_3 & uVar4) == 0))) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar5 * 8);
      iVar3 = FUN_ram_4004bed6(uVar1,0x10,auStack_24);
      if (((((iVar3 != 0) ||
            (((((iVar3 = FUN_ram_4004bed6(uVar1,0x11,auStack_24), iVar3 != 0 ||
                (iVar3 = FUN_ram_4004bed6(uVar1,0x12,auStack_24), iVar3 != 0)) ||
               (iVar3 = FUN_ram_4004bed6(uVar1,0x13,auStack_24), iVar3 != 0)) ||
              ((iVar3 = FUN_ram_4004bed6(uVar1,0x15,auStack_24), iVar3 != 0 ||
               (iVar3 = FUN_ram_4004bed6(uVar1,0x14,auStack_24), iVar3 != 0)))) ||
             (iVar3 = FUN_ram_4004bed6(uVar1,0x16,auStack_24), iVar3 != 0)))) ||
           (((iVar3 = FUN_ram_4004bed6(uVar1,0x6a,auStack_24), iVar3 != 0 ||
             (iVar3 = FUN_ram_4004bed6(uVar1,0x6b,auStack_24), iVar3 != 0)) ||
            (iVar3 = FUN_ram_4004bed6(uVar1,1,auStack_24), iVar3 != 0)))) ||
          (((iVar3 = FUN_ram_4004bed6(uVar1,2,auStack_24), iVar3 != 0 ||
            (iVar3 = FUN_ram_4004bed6(uVar1,4,auStack_24), iVar3 != 0)) ||
           (iVar3 = FUN_ram_4004bed6(uVar1,5,auStack_24), iVar3 != 0)))) ||
         (((iVar3 = FUN_ram_4004bed6(uVar1,6,auStack_24), iVar3 != 0 ||
           (iVar3 = FUN_ram_4004bed6(uVar1,7,auStack_24), iVar3 != 0)) ||
          (iVar3 = FUN_ram_4004bed6(uVar1,0x30,auStack_24), iVar3 != 0)))) {
        return 3;
      }
      iVar3 = FUN_ram_4004bed6(uVar1,0x68,auStack_24);
      if ((((iVar3 == 0) && (iVar3 = FUN_ram_4004bed6(uVar1,0x69,auStack_24), iVar3 == 0)) &&
          (((iVar3 = FUN_ram_4004bed6(uVar1,0x6e,auStack_24), iVar3 == 0 &&
            (((iVar3 = FUN_ram_4004bed6(uVar1,0x6c,auStack_24), iVar3 == 0 &&
              (iVar3 = FUN_ram_4004bed6(uVar1,0x6d,auStack_24), iVar3 == 0)) &&
             (iVar3 = FUN_ram_4004bed6(uVar1,0x3a,auStack_24), iVar3 == 0)))) &&
           ((((iVar3 = FUN_ram_4004bed6(uVar1,0x3b,auStack_24), iVar3 == 0 &&
              (iVar3 = FUN_ram_4004bed6(uVar1,0x38,auStack_24), iVar3 == 0)) &&
             (iVar3 = FUN_ram_4004bed6(uVar1,0x3c,auStack_24), iVar3 == 0)) &&
            ((iVar3 = FUN_ram_4004bed6(uVar1,0x3e,auStack_24), iVar3 == 0 &&
             (iVar3 = FUN_ram_4004bed6(uVar1,0x40,auStack_24), iVar3 == 0)))))))) &&
         ((iVar3 = FUN_ram_4004bed6(uVar1,0x41,auStack_24), iVar3 == 0 &&
          ((iVar3 = FUN_ram_4004bed6(uVar1,0x42,auStack_24), iVar3 == 0 &&
           (iVar3 = FUN_ram_4004bed6(uVar1,0x48,auStack_24), iVar3 == 0)))))) {
        if (iVar2 == 0) {
          iVar2 = 1;
        }
      }
      else {
        iVar2 = 2;
      }
    }
    uVar5 = uVar5 + 1;
  } while( true );
}


