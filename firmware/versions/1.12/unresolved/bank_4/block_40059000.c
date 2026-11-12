/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40059000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400591c2.
 * REA evidence: ev_860401795e6770ef322c0241d0a10ac37ca41886854a640549c72134d6c6053f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400591c2(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004f7b6();
  if (iVar1 != 0) {
    FUN_ram_4004f7de(iVar1,FUN_ram_400584f2);
    FUN_ram_4004f7e2(iVar1,FUN_ram_40058f7e);
    FUN_ram_4004f7e6(iVar1,FUN_ram_40058a64);
    FUN_ram_4004f7ea(iVar1,FUN_ram_400585f8);
    FUN_ram_4004f7ee(iVar1,0);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4005921c.
 * REA evidence: ev_359d3309f8a5b1103582d9e34129591918a6691090e48e8549512688e8b85dee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte * FUN_ram_4005921c(ushort *param_1,undefined1 *param_2,int param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined1 *puVar8;
  ushort *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ushort *puVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ushort *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  
  if ((param_1 == (ushort *)0x0) || (param_4 < 0)) {
    return (byte *)0xffffffff;
  }
  puVar9 = (ushort *)((int)param_1 + param_3);
  puVar10 = param_2 + param_4;
  if (param_4 == 0) {
    pbVar6 = (byte *)0xffffffff;
    if (param_3 == 1) {
      pbVar6 = (byte *)-(uint)((byte)*param_1 != 0);
    }
  }
  else {
    pbVar6 = (byte *)0xffffffff;
    if (param_3 != 0) {
      puVar11 = puVar10 + -7;
      puVar16 = param_1;
      puVar14 = param_2;
      do {
        while( true ) {
          puVar12 = (ushort *)((int)puVar16 + 1);
          bVar1 = (byte)*puVar16;
          uVar5 = (uint)(bVar1 >> 4);
          if (uVar5 == 0xf) break;
          puVar17 = puVar14 + uVar5;
          if ((puVar9 + -8 <= puVar12) || (puVar10 + -0x20 < puVar14)) goto LAB_ram_40059378;
          thunk_FUN_ram_4000500c(puVar14,puVar12,0x10);
          uVar13 = bVar1 & 0xf;
          uVar7 = (uint)*(ushort *)((int)puVar12 + uVar5);
          puVar16 = (ushort *)((int)puVar12 + uVar5) + 1;
          puVar15 = puVar17 + -uVar7;
          if (uVar13 == 0xf) {
LAB_ram_400593d0:
            iVar4 = 0;
            puVar12 = puVar16;
            do {
              puVar16 = (ushort *)((int)puVar12 + 1);
              uVar2 = *puVar12;
              iVar4 = iVar4 + (uint)(byte)uVar2;
              puVar12 = puVar16;
              if ((puVar9 + -2 < puVar16) || (iVar4 < 0)) goto LAB_ram_400594e0;
            } while ((byte)uVar2 == 0xff);
            uVar13 = iVar4 + 0xf;
            if (puVar17 <= puVar17 + uVar13) goto LAB_ram_400593f4;
            goto LAB_ram_400594e0;
          }
          if ((uVar7 < 8) || (puVar15 < param_2)) goto LAB_ram_400593f4;
          thunk_FUN_ram_4000500c(puVar17,puVar15,8);
          thunk_FUN_ram_4000500c(puVar17 + 8,puVar15 + 8,8);
          thunk_FUN_ram_4000500c(puVar17 + 0x10,puVar15 + 0x10,2);
          puVar14 = puVar17 + uVar13 + 4;
        }
        if ((ushort *)((int)puVar9 + -0xf) <= puVar12) goto LAB_ram_400594e0;
        iVar4 = 0;
        puVar16 = puVar12;
        do {
          puVar12 = (ushort *)((int)puVar16 + 1);
          uVar2 = *puVar16;
          iVar4 = iVar4 + (uint)(byte)uVar2;
          if (((ushort *)((int)puVar9 + -0xf) < puVar12) || (iVar4 < 0)) goto LAB_ram_400594e0;
          puVar16 = puVar12;
        } while ((byte)uVar2 == 0xff);
        uVar5 = iVar4 + 0xf;
        if ((puVar14 + uVar5 < puVar14) || ((ushort *)(uVar5 + (int)puVar12) < puVar12))
        goto LAB_ram_400594e0;
LAB_ram_40059378:
        puVar17 = puVar14 + uVar5;
        puVar16 = (ushort *)((int)puVar12 + uVar5);
        if ((puVar10 + -0xc < puVar17) || (puVar9 + -4 < puVar16)) {
          if ((puVar9 == puVar16) && (puVar17 <= puVar10)) {
            thunk_FUN_ram_4000509c(puVar14,puVar12);
            return puVar17 + -(int)param_2;
          }
LAB_ram_400594e0:
          return (byte *)((int)param_1 + (-1 - (int)puVar12));
        }
        do {
          puVar15 = puVar14 + 8;
          thunk_FUN_ram_4000500c(puVar14,puVar12,8);
          puVar12 = puVar12 + 4;
          puVar14 = puVar15;
        } while (puVar15 < puVar17);
        uVar13 = bVar1 & 0xf;
        uVar7 = (uint)*puVar16;
        puVar16 = puVar16 + 1;
        puVar15 = puVar17 + -uVar7;
        if (uVar13 == 0xf) goto LAB_ram_400593d0;
LAB_ram_400593f4:
        puVar12 = puVar16;
        if (puVar15 < param_2) goto LAB_ram_400594e0;
        puVar14 = puVar17 + uVar13 + 4;
        if (uVar7 < 8) {
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar17[2] = 0;
          puVar17[3] = 0;
          iVar4 = *(int *)(&DAT_ram_4009e968 + uVar7 * 4);
          *puVar17 = *puVar15;
          puVar17[1] = puVar15[1];
          puVar17[2] = puVar15[2];
          puVar17[3] = puVar15[3];
          thunk_FUN_ram_4000500c(puVar17 + 4,puVar15 + iVar4,4);
          puVar15 = puVar15 + iVar4 + -*(int *)(&DAT_ram_4009e948 + uVar7 * 4);
        }
        else {
          thunk_FUN_ram_4000500c(puVar17,puVar15,8);
          puVar15 = puVar15 + 8;
        }
        puVar8 = puVar17 + 8;
        if (puVar10 + -0xc < puVar14) {
          if (puVar10 + -5 < puVar14) goto LAB_ram_400594e0;
          puVar17 = puVar8;
          puVar18 = puVar15;
          if (puVar8 < puVar11) {
            do {
              puVar3 = puVar17 + 8;
              thunk_FUN_ram_4000500c(puVar17,puVar18,8);
              puVar17 = puVar3;
              puVar18 = puVar18 + 8;
            } while (puVar3 < puVar11);
            puVar15 = puVar15 + ((int)puVar11 - (int)puVar8);
            puVar8 = puVar11;
          }
          for (iVar4 = 0; puVar8 + iVar4 < puVar14; iVar4 = iVar4 + 1) {
            puVar8[iVar4] = puVar15[iVar4];
          }
        }
        else {
          thunk_FUN_ram_4000500c(puVar8,puVar15,8);
          if (0x10 < uVar13 + 4) {
            puVar17 = puVar17 + 0x10;
            do {
              puVar15 = puVar15 + 8;
              thunk_FUN_ram_4000500c(puVar17,puVar15,8);
              puVar17 = puVar17 + 8;
            } while (puVar17 < puVar14);
          }
        }
      } while( true );
    }
  }
  return pbVar6;
}


/* NanoCore 1.12, address 0x400594ec.
 * REA evidence: ev_006271fb58dee83cbcddc70cd5467c96013681e8181764f48bee288a3c92883f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400594ec(byte *param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar3 = 0;
  uVar6 = 0;
  do {
    if (param_2 <= uVar6) {
      return uVar3;
    }
    uVar6 = uVar6 + 1;
    pbVar1 = param_1 + 1;
    uVar4 = (uint)*param_1;
    if (param_2 < uVar6) {
      return 0;
    }
    if ((char)*param_1 < '\0') {
      uVar5 = (uVar4 & 0x7f) * param_5;
      uVar6 = uVar6 + uVar5;
      if (param_2 < uVar6) {
        return 0;
      }
      uVar4 = uVar3 + uVar5;
      if (param_4 < uVar4) {
        if (param_5 + param_4 < uVar4) {
          return 0;
        }
        thunk_FUN_ram_4000500c(param_3,pbVar1,param_4 - uVar3);
        return param_4;
      }
      thunk_FUN_ram_4000500c(param_3,pbVar1,uVar5);
      uVar3 = uVar4;
      uVar2 = uVar5;
    }
    else {
      uVar6 = uVar6 + param_5;
      if (param_2 < uVar6) {
        return 0;
      }
      uVar5 = param_5 * uVar4;
      uVar3 = uVar5 + uVar3;
      if (param_4 < uVar3) {
        if (param_5 + param_4 < uVar3) {
          return 0;
        }
        for (uVar3 = 0; uVar3 < uVar4 - 1; uVar3 = uVar3 + 1) {
          thunk_FUN_ram_4000500c(param_3,pbVar1,param_5);
          param_3 = param_3 + param_5;
        }
        return param_4;
      }
      uVar2 = param_5;
      if (param_5 == 1) {
        thunk_FUN_ram_40004f92(param_3,param_1[1],uVar4);
        uVar5 = uVar4;
      }
      else {
        iVar8 = param_3;
        for (uVar7 = 0; uVar7 < uVar4; uVar7 = uVar7 + 1) {
          thunk_FUN_ram_4000500c(iVar8,pbVar1,param_5);
          iVar8 = iVar8 + param_5;
        }
      }
    }
    param_1 = pbVar1 + uVar2;
    param_3 = param_3 + uVar5;
  } while( true );
}


/* NanoCore 1.12, address 0x400595f8.
 * REA evidence: ev_c917ba9999ab0350a6a169ea2b5b7757f854ff0665b005ab4a37a4d8a0491edd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400595f8(undefined4 *param_1,undefined4 param_2)

{
  if (param_1[1] != 0) {
    FUN_ram_400595f8();
  }
  if ((code *)*param_1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4005961a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(param_1,param_2);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40059626.
 * REA evidence: ev_dc140e8a23b9b36d1e64456043822486bde4a0d235c3c118d5fabb8531466022
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40059626(undefined4 param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  if (*piVar1 != 0) {
    if ((piVar1[8] & 0x100000U) != 0) {
      *param_2 = *piVar1;
      FUN_ram_40059626();
    }
  }
  *param_2 = (int)piVar1;
  FUN_ram_400595f8(param_1,param_2);
  return;
}


/* NanoCore 1.12, address 0x4005965c.
 * REA evidence: ev_88f11023124a7cdbcb0995cadd6ffc394107aad7499dcdd5c41894e545dc4858
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005965c(int param_1)

{
  if (param_1 == 0) {
    FUN_ram_4004d2b6();
  }
  else {
    FUN_ram_40048b18();
  }
  FUN_ram_4004d508();
  return;
}


/* NanoCore 1.12, address 0x40059674.
 * REA evidence: ev_4f2ac5e1753d742b83bc85d68d50da17330ea90afba26fac0898eb1f45f6252d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40059674(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005965c();
  if (iVar1 != 0) {
    FUN_ram_400484ce(param_1);
    FUN_ram_40059626(iVar1,param_1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400596a6.
 * REA evidence: ev_cb936e3605be9aaff90dc8b0fe7eec1f87f433c7d23b977a79acb948bf748c09
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400596a6(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x400596aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}


/* NanoCore 1.12, address 0x400596ac.
 * REA evidence: ev_9facfbae0fc87f10fec08d16b98ec259ee529bb0374c0acc7a0a5eb25cd1662f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4005972a) */

int FUN_ram_400596ac(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  
  *param_2 = 0;
  puVar1 = (undefined4 *)0x0;
  puVar2 = param_1;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      if (puVar1 == (undefined4 *)0x0) {
        iVar5 = param_1[3];
        *param_2 = 0;
        *(short *)(param_2 + 2) = (short)iVar5;
        *(undefined2 *)((int)param_2 + 10) = 0;
        iVar3 = 0;
        sVar6 = (short)(iVar5 / 2);
        *(short *)((int)param_2 + 6) = sVar6;
        *(short *)(param_2 + 1) = sVar6 + 2;
        param_2[3] = param_2[3] & 0xfe000000U | 0x1010000;
      }
      else {
        if ((*(byte *)(puVar1 + 5) & 4) != 0) {
          param_4 = 0;
        }
        (*(code *)*puVar1)(puVar1,param_2,param_3,param_4,(code *)*puVar1);
        iVar3 = 1;
        *param_2 = (int)puVar1;
      }
      return iVar3;
    }
    uVar4 = param_4;
    if ((*(byte *)(puVar2 + 5) & 4) != 0) {
      uVar4 = 0;
    }
    iVar3 = (*(code *)*puVar2)(puVar2,param_2,param_3,uVar4,(code *)*puVar2);
    if (iVar3 != 0) {
      if ((*(byte *)((int)param_2 + 0xf) & 1) == 0) {
        *param_2 = (int)puVar2;
        return iVar3;
      }
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = puVar2;
      }
    }
    puVar2 = (undefined4 *)puVar2[7];
  } while( true );
}


/* NanoCore 1.12, address 0x40059758.
 * REA evidence: ev_7e6cade544fe15ec1eabc61dbf383e6c3e5b9a3cb26bef9d0e2419441402e301
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined2 FUN_ram_40059758(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined1 auStack_28 [4];
  undefined2 uStack_24;
  
  if ((((((0x1f < param_2) && (param_2 != 0x61c)) && (1 < param_2 - 0x115f)) &&
       ((3 < param_2 - 0x180b && (4 < param_2 - 0x200b)))) &&
      ((7 < param_2 - 0x2028 && ((0x10 < param_2 - 0x205f && (param_2 != 0xfeff)))))) &&
     (param_2 != 0xf8ff)) {
    FUN_ram_400596ac(param_1,auStack_28,param_2,param_3);
    return uStack_24;
  }
  return 0;
}


/* NanoCore 1.12, address 0x4005980e.
 * REA evidence: ev_2de5bd6c224289dd26e745ea1c8115128a61a4f502223bd93dcd2ce7f482e570
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4005980e(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  switch(param_3 - 1 & 0xff) {
  case 0:
    uVar3 = param_3;
    break;
  case 1:
    uVar3 = 3;
    break;
  case 2:
    uVar3 = 7;
    break;
  case 3:
    uVar3 = 0xf;
    break;
  default:
    uVar3 = (1 << (param_3 & 0x1f)) - 1U & 0xff;
    break;
  case 7:
    uVar3 = 0xff;
  }
  param_3 = param_3 + (param_2 & 7);
  bVar1 = *(byte *)(param_1 + (param_2 >> 3));
  if (param_3 < 8) {
    uVar2 = (int)(uint)bVar1 >> (8 - param_3 & 0x1f);
  }
  else {
    uVar2 = (int)(uint)CONCAT11(bVar1,*(undefined1 *)(param_1 + (param_2 >> 3) + 1)) >>
            (0x10 - param_3 & 0x1f);
  }
  return (int)(char)uVar3 & uVar2 & 0xff;
}


/* NanoCore 1.12, address 0x40059890.
 * REA evidence: ev_f6a50f2ef93fd9de486b306205a345487824b20d96bf8bb2d4a70c94793a861e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40059890(byte *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  
  pbVar10 = param_1;
  do {
    uVar2 = _DAT_ram_30080e64;
    iVar9 = _DAT_ram_30080e60;
    if (pbVar10 == param_1 + param_2) {
      return;
    }
    if (_DAT_ram_30080e6c == 0) {
      uVar8 = (uint)DAT_ram_30080e68;
      uVar4 = FUN_ram_4005980e(_DAT_ram_30080e64,_DAT_ram_30080e60,uVar8);
      if ((iVar9 != 0) && (DAT_ram_30080e69 == uVar4)) {
        DAT_ram_30080e6a = '\0';
        _DAT_ram_30080e6c = 1;
      }
      bVar3 = (byte)uVar4;
      _DAT_ram_30080e60 = uVar8 + iVar9;
      DAT_ram_30080e69 = (byte)uVar4;
    }
    else if (_DAT_ram_30080e6c == 1) {
      iVar5 = FUN_ram_4005980e(_DAT_ram_30080e64,_DAT_ram_30080e60,1);
      bVar3 = DAT_ram_30080e69;
      iVar6 = iVar9 + 1;
      cVar7 = DAT_ram_30080e6a + '\x01';
      _DAT_ram_30080e60 = iVar6;
      if (iVar5 == 1) {
        bVar1 = DAT_ram_30080e6a == '\n';
        DAT_ram_30080e6a = cVar7;
        if (bVar1) {
          iVar5 = FUN_ram_4005980e(uVar2,iVar6,6);
          iVar9 = iVar9 + 7;
          DAT_ram_30080e6a = (char)iVar5;
          _DAT_ram_30080e60 = iVar9;
          if (iVar5 == 0) {
            uVar4 = (uint)DAT_ram_30080e68;
            DAT_ram_30080e69 = FUN_ram_4005980e(uVar2,iVar9,uVar4);
            _DAT_ram_30080e60 = iVar9 + uVar4;
            goto LAB_ram_40059986;
          }
          _DAT_ram_30080e6c = 2;
        }
      }
      else {
        uVar4 = (uint)DAT_ram_30080e68;
        DAT_ram_30080e6a = cVar7;
        DAT_ram_30080e69 = FUN_ram_4005980e(uVar2,iVar6,uVar4);
        _DAT_ram_30080e60 = uVar4 + iVar6;
LAB_ram_40059986:
        _DAT_ram_30080e6c = 0;
        bVar3 = DAT_ram_30080e69;
      }
    }
    else {
      bVar3 = 0;
      if (_DAT_ram_30080e6c == 2) {
        cVar7 = DAT_ram_30080e6a + -1;
        bVar1 = DAT_ram_30080e6a == '\x01';
        bVar3 = DAT_ram_30080e69;
        DAT_ram_30080e6a = cVar7;
        if (bVar1) {
          uVar4 = (uint)DAT_ram_30080e68;
          DAT_ram_30080e69 = FUN_ram_4005980e(_DAT_ram_30080e64,_DAT_ram_30080e60,uVar4);
          _DAT_ram_30080e60 = uVar4 + iVar9;
          goto LAB_ram_40059986;
        }
      }
    }
    *pbVar10 = bVar3;
    pbVar10 = pbVar10 + 1;
  } while( true );
}


/* NanoCore 1.12, address 0x400599f2.
 * REA evidence: ev_25e66420ae3d6379a26ba4fe31f1af9c0e4affefd433a261a52c1e2f135bd043
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400599f2(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 uStack_12;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    uVar4 = 0;
    do {
      if ((*(uint *)(iVar2 + 0x10) & 0x1ffffff) >> 0x10 <= (uVar4 & 0xffff)) {
        return 0;
      }
      iVar7 = uVar4 * 0x14;
      uVar4 = uVar4 + 1;
      iVar6 = *(int *)(iVar2 + 8) + iVar7;
      uVar5 = param_2 - *(int *)(*(int *)(iVar2 + 8) + iVar7);
    } while (*(ushort *)(iVar6 + 4) <= uVar5);
    cVar1 = *(char *)(iVar6 + 0x12);
    if (cVar1 == '\x02') {
      iVar2 = *(ushort *)(iVar6 + 6) + uVar5;
    }
    else {
      if (cVar1 == '\0') {
        uVar4 = (uint)*(byte *)(*(int *)(iVar6 + 0xc) + uVar5);
      }
      else {
        uStack_12 = (undefined2)uVar5;
        if (cVar1 == '\x03') {
          iVar6 = FUN_ram_4004c964(&uStack_12,*(undefined4 *)(iVar6 + 8),
                                   *(undefined2 *)(iVar6 + 0x10),2,&LAB_ram_400599e6);
          if (iVar6 == 0) {
            return 0;
          }
          iVar7 = *(int *)(iVar2 + 8) + iVar7;
          return (uint)*(ushort *)(iVar7 + 6) + (iVar6 - *(int *)(iVar7 + 8) >> 1);
        }
        if (cVar1 != '\x01') {
          return 0;
        }
        iVar3 = FUN_ram_4004c964(&uStack_12,*(undefined4 *)(iVar6 + 8),*(undefined2 *)(iVar6 + 0x10)
                                 ,2,&LAB_ram_400599e6);
        if (iVar3 == 0) {
          return 0;
        }
        iVar6 = *(int *)(iVar2 + 8) + iVar7;
        uVar4 = (uint)*(ushort *)(*(int *)(iVar6 + 0xc) + (iVar3 - *(int *)(iVar6 + 8)));
      }
      iVar2 = uVar4 + *(ushort *)(iVar6 + 6);
    }
  }
  return iVar2;
}


/* NanoCore 1.12, address 0x40059ad0.
 * REA evidence: ev_44c9d1d067e58da54bdeac53ff35f7252c74b2b3aa37383c53b74707966c14b3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40059ad0(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  ushort uVar13;
  int *piVar14;
  undefined *puVar15;
  
  iVar2 = *(int *)(param_3 + 0x10);
  if (param_2 == 9) {
    param_2 = 0x20;
  }
  piVar14 = *(int **)(*param_1 + 0x18);
  iVar3 = FUN_ram_400599f2(*param_1,param_2);
  if (iVar3 != 0) {
    iVar11 = piVar14[1] + iVar3 * 8;
    uVar12 = (uint)*(byte *)(iVar11 + 4);
    bVar6 = *(byte *)(iVar11 + 5);
    if (uVar12 * bVar6 != 0) {
      uVar13 = *(ushort *)((int)piVar14 + 0x12) & 0xc000;
      pbVar9 = (byte *)(*piVar14 + (*(uint *)(piVar14[1] + iVar3 * 8) & 0xfffff));
      if ((*(ushort *)((int)piVar14 + 0x12) & 0xc000) != 0) {
        uVar7 = ((piVar14[4] & 0x1fffffffU) >> 0x19) - 2 & 0xff;
        if (2 < uVar7) {
          return param_3;
        }
        puVar15 = (&PTR_DAT_ram_4009e9b4_ram_4009e9a8)[uVar7];
        DAT_ram_30080e68 = (byte)((uint)(piVar14[4] << 3) >> 0x1c);
        _DAT_ram_30080e6c = 0;
        _DAT_ram_30080e60 = 0;
        DAT_ram_30080e69 = 0;
        DAT_ram_30080e6a = 0;
        _DAT_ram_30080e64 = pbVar9;
        iVar3 = FUN_ram_4005a952(uVar12);
        iVar11 = 0;
        if (uVar13 == 0x4000) {
          iVar11 = FUN_ram_4005a952(uVar12);
        }
        FUN_ram_40059890(iVar3,uVar12);
        iVar4 = FUN_ram_4004dace(uVar12,0xe);
        for (iVar5 = 0; iVar5 < (int)uVar12; iVar5 = iVar5 + 1) {
          *(undefined *)(iVar2 + iVar5) = puVar15[*(byte *)(iVar3 + iVar5)];
        }
        for (iVar5 = 1; iVar2 = iVar2 + iVar4, iVar5 < (int)(uint)bVar6; iVar5 = iVar5 + 1) {
          if (uVar13 == 0x4000) {
            FUN_ram_40059890(iVar11,uVar12);
            for (iVar8 = 0; iVar8 < (int)uVar12; iVar8 = iVar8 + 1) {
              bVar1 = *(byte *)(iVar11 + iVar8) ^ *(byte *)(iVar3 + iVar8);
              *(byte *)(iVar3 + iVar8) = bVar1;
              *(undefined *)(iVar2 + iVar8) = puVar15[bVar1];
            }
          }
          else {
            FUN_ram_40059890(iVar3,uVar12);
            for (iVar8 = 0; iVar8 < (int)uVar12; iVar8 = iVar8 + 1) {
              *(undefined *)(iVar2 + iVar8) = puVar15[*(byte *)(iVar3 + iVar8)];
            }
          }
        }
        FUN_ram_4005a988(iVar3);
        FUN_ram_4005a988(iVar11);
        return param_3;
      }
      iVar3 = FUN_ram_4004dace(uVar12,0xe);
      uVar13 = *(ushort *)((int)piVar14 + 0x12) & 0x1e00;
      if (uVar13 != 0x200) {
        if (uVar13 != 0x400) {
          if (uVar13 != 0x800) {
            return param_3;
          }
          bVar6 = 0;
          for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(iVar11 + 5); iVar4 = iVar4 + 1) {
            for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(iVar11 + 4); iVar5 = iVar5 + 1) {
              if ((bool)(bVar6 & 1)) {
                pbVar10 = pbVar9 + 1;
                uVar12 = *pbVar9 & 0xf;
              }
              else {
                uVar12 = (uint)(*pbVar9 >> 4);
                pbVar10 = pbVar9;
              }
              bVar6 = (bVar6 & 1) + 1;
              *(undefined *)(iVar2 + iVar5) = (&DAT_ram_4009e9c0)[uVar12];
              pbVar9 = pbVar10;
            }
            iVar2 = iVar2 + iVar3;
          }
          return param_3;
        }
        iVar4 = 0;
        uVar12 = 0;
        do {
          if ((int)(uint)*(byte *)(iVar11 + 5) <= iVar4) {
            return param_3;
          }
          for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(iVar11 + 4); iVar5 = iVar5 + 1) {
            uVar12 = uVar12 & 3;
            uVar7 = (uint)*pbVar9;
            if (uVar12 == 0) {
              uVar7 = (uint)(*pbVar9 >> 6);
LAB_ram_40059c20:
              *(undefined *)(iVar2 + iVar5) = (&DAT_ram_4009e9b4)[uVar7];
            }
            else {
              if (uVar12 == 1) {
                uVar7 = (uVar7 & 0x3f) >> 4;
                goto LAB_ram_40059c20;
              }
              if (uVar12 == 2) {
                uVar7 = (uVar7 & 0xf) >> 2;
                goto LAB_ram_40059c20;
              }
              pbVar9 = pbVar9 + 1;
              *(undefined *)(iVar2 + iVar5) = (&DAT_ram_4009e9b4)[uVar7 & 3];
            }
            uVar12 = uVar12 + 1;
          }
          iVar2 = iVar2 + iVar3;
          iVar4 = iVar4 + 1;
        } while( true );
      }
      iVar4 = 0;
      uVar12 = 0;
      do {
        if ((int)(uint)*(byte *)(iVar11 + 5) <= iVar4) {
          return param_3;
        }
        for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(iVar11 + 4); iVar5 = iVar5 + 1) {
          uVar12 = uVar12 & 7;
          uVar7 = (uint)*pbVar9;
          if (uVar12 == 0) {
            bVar6 = *pbVar9 >> 7;
LAB_ram_40059b72:
            *(byte *)(iVar2 + iVar5) = -bVar6;
          }
          else {
            if (uVar12 == 1) {
              bVar6 = (byte)((uVar7 & 0x7f) >> 6);
              goto LAB_ram_40059b72;
            }
            if (uVar12 == 2) {
              bVar6 = (byte)((uVar7 & 0x3f) >> 5);
              goto LAB_ram_40059b72;
            }
            if (uVar12 == 3) {
              bVar6 = (byte)((uVar7 & 0x1f) >> 4);
              goto LAB_ram_40059b72;
            }
            if (uVar12 == 4) {
              bVar6 = (byte)((uVar7 & 0xf) >> 3);
              goto LAB_ram_40059b72;
            }
            if (uVar12 == 5) {
              bVar6 = (byte)((uVar7 & 7) >> 2);
              goto LAB_ram_40059b72;
            }
            if (uVar12 == 6) {
              bVar6 = (byte)((uVar7 & 3) >> 1);
              goto LAB_ram_40059b72;
            }
            *(char *)(iVar2 + iVar5) = (char)((int)(uVar7 << 0x1f) >> 0x1f);
            pbVar9 = pbVar9 + 1;
          }
          uVar12 = uVar12 + 1;
        }
        iVar2 = iVar2 + iVar3;
        iVar4 = iVar4 + 1;
      } while( true );
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x40059db0.
 * REA evidence: ev_b33c492a882aa7e461f07d226f3f9921d91ec4b8f11497722c0c42dce54f7148
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40059db0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iStack_28;
  int iStack_24;
  
  iVar3 = 0x20;
  if (param_3 != 9) {
    iVar3 = param_3;
  }
  iVar7 = *(int *)(param_1 + 0x18);
  iVar3 = FUN_ram_400599f2(param_1,iVar3);
  if (iVar3 == 0) {
    return 0;
  }
  if ((*(int *)(iVar7 + 0xc) != 0) &&
     (iStack_24 = FUN_ram_400599f2(param_1,param_4), iStack_24 != 0)) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x18) + 0xc);
    if ((*(ushort *)(*(int *)(param_1 + 0x18) + 0x12) & 0x2000) == 0) {
      uVar6 = piVar2[2] & 0xc0000000;
      iStack_28 = iVar3;
      if (uVar6 == 0) {
        iVar8 = *piVar2;
        iVar4 = FUN_ram_4004c964(&iStack_28,iVar8,piVar2[2] & 0x3fffffff,2,&LAB_ram_400597da);
        iVar5 = 0;
        if (iVar4 == 0) goto LAB_ram_40059df0;
        iVar5 = iVar4 - iVar8 >> 1;
      }
      else {
        if (uVar6 != 0x40000000) goto LAB_ram_40059dee;
        iVar8 = *piVar2;
        iVar4 = FUN_ram_4004c964(&iStack_28,iVar8,piVar2[2] & 0x3fffffff,4,&LAB_ram_400597f4);
        iVar5 = 0;
        if (iVar4 == 0) goto LAB_ram_40059df0;
        iVar5 = iVar4 - iVar8 >> 2;
      }
      iVar5 = (int)*(char *)(piVar2[1] + iVar5);
      goto LAB_ram_40059df0;
    }
    if ((*(byte *)(piVar2[1] + iVar3) != 0) &&
       (uVar6 = (uint)*(byte *)(piVar2[2] + iStack_24), uVar6 != 0)) {
      iVar5 = (int)*(char *)(*piVar2 + uVar6 +
                             (*(byte *)(piVar2[1] + iVar3) - 1) * (uint)*(byte *)((int)piVar2 + 0xd)
                            + -1);
      goto LAB_ram_40059df0;
    }
  }
LAB_ram_40059dee:
  iVar5 = 0;
LAB_ram_40059df0:
  iVar4 = *(int *)(iVar7 + 4) + iVar3 * 8;
  uVar6 = *(uint *)(*(int *)(iVar7 + 4) + iVar3 * 8) >> 0x14;
  if (param_3 == 9) {
    uVar6 = uVar6 << 1;
  }
  *(short *)(param_2 + 4) =
       (short)(((int)((uint)*(ushort *)(iVar7 + 0x10) * iVar5) >> 4) + 8 + uVar6 >> 4);
  *(ushort *)(param_2 + 8) = (ushort)*(byte *)(iVar4 + 5);
  bVar1 = *(byte *)(iVar4 + 4);
  *(ushort *)(param_2 + 6) = (ushort)bVar1;
  *(short *)(param_2 + 10) = (short)*(char *)(iVar4 + 6);
  *(short *)(param_2 + 0xc) = (short)*(char *)(iVar4 + 7);
  *(byte *)(param_2 + 0xe) = (byte)((uint)(*(int *)(iVar7 + 0x10) << 3) >> 0x1c);
  *(byte *)(param_2 + 0xf) = *(byte *)(param_2 + 0xf) & 0xfe;
  if (param_3 == 9) {
    *(ushort *)(param_2 + 6) = (ushort)bVar1 << 1;
  }
  return 1;
}


/* NanoCore 1.12, address 0x40059f20.
 * REA evidence: ev_c90616541664a870f6d51f0b509c0e9b05b562a52ed58dc9a902c297beea5bf4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40059f20(undefined4 *param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    param_2 = param_2 - 1;
    if (param_2 == 0xffffffff) {
      *param_3 = 0;
      return uVar1;
    }
    *(char *)((int)param_1 + 5) = *(char *)((int)param_1 + 5) << 1;
    iVar2 = (*(byte *)(param_1 + 1) - 1) * 0x1000000;
    if (iVar2 >> 0x18 < 0) {
      *(undefined1 *)(param_1 + 1) = 7;
      iVar2 = FUN_ram_4004b05c(*param_1,(int)param_1 + 5,1,0);
      *param_3 = (char)iVar2;
      if (iVar2 != 0) {
        return 0;
      }
    }
    else {
      *(char *)(param_1 + 1) = (char)((uint)iVar2 >> 0x18);
    }
    uVar1 = uVar1 | (uint)(*(byte *)((int)param_1 + 5) >> 7) << (param_2 & 0x1f);
  } while( true );
}


/* NanoCore 1.12, address 0x40059fa6.
 * REA evidence: ev_210add9606cc0b6ac53eb0fb01f4d752df4d00bf0e5d913fd957b96742b762c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40059fa6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_18;
  undefined1 auStack_14 [8];
  
  FUN_ram_4004b1fc(param_1,param_2,0);
  iVar1 = FUN_ram_4004b05c(param_1,&uStack_18,4,0);
  if (((iVar1 != 0) || (iVar1 = FUN_ram_4004b05c(param_1,auStack_14,4,0), iVar1 != 0)) ||
     (iVar1 = FUN_ram_40002fdc(param_3,auStack_14,4), iVar1 != 0)) {
    uStack_18 = 0xffffffff;
  }
  return uStack_18;
}


/* NanoCore 1.12, address 0x40059ff0.
 * REA evidence: ev_84ed6fd6aa82b0596e239b3e1d8216a8d6259af9a9384c1ad313baba9c14567a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40059ff0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  puVar1 = (undefined4 *)puVar3[3];
  if ((*(ushort *)((int)puVar3 + 0x12) & 0x2000) == 0) {
    if (puVar1 == (undefined4 *)0x0) goto LAB_ram_4005a026;
    FUN_ram_4005a988(*puVar1);
    uVar4 = puVar1[1];
  }
  else {
    if (puVar1 == (undefined4 *)0x0) goto LAB_ram_4005a026;
    FUN_ram_4005a988(*puVar1);
    FUN_ram_4005a988(puVar1[1]);
    uVar4 = puVar1[2];
  }
  FUN_ram_4005a988(uVar4);
  FUN_ram_4005a988(puVar1);
LAB_ram_4005a026:
  iVar2 = puVar3[2];
  if (iVar2 != 0) {
    puVar1 = (undefined4 *)(iVar2 + 8);
    for (iVar5 = 0; iVar5 < (int)((puVar3[4] & 0x1ffffff) >> 0x10); iVar5 = iVar5 + 1) {
      FUN_ram_4005a988(puVar1[1]);
      FUN_ram_4005a988(*puVar1);
      puVar1 = puVar1 + 5;
    }
    FUN_ram_4005a988(iVar2);
  }
  FUN_ram_4005a988(*puVar3);
  FUN_ram_4005a988(puVar3[1]);
  FUN_ram_4005a988(puVar3);
  FUN_ram_4005a988(param_1);
  return;
}


