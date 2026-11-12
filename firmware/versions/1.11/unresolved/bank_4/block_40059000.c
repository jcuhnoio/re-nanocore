/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40059000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4005914c.
 * REA evidence: ev_9eb4bbd8e6a127b902dd722ebfc80074513fa37ee25553436198f44863280f7d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005914c(undefined4 param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  undefined4 *puVar10;
  int iStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uVar3 = FUN_ram_4004b2e6(*(undefined4 *)(param_2 + 8));
    iVar4 = thunk_FUN_ram_4000521c(uVar3,s_U__icons__s_bin_ram_40094f5c + 0xc);
    if (iVar4 != 0) {
      return 0;
    }
    piVar5 = (int *)FUN_ram_4005884a(param_2);
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    *(int **)(param_2 + 0x38) = piVar5;
    iVar4 = FUN_ram_4005ab20(0xc);
    if (iVar4 == 0) goto LAB_ram_400591b2;
    iVar6 = FUN_ram_4004b22e(iVar4,*(undefined4 *)(param_2 + 8),2);
    if (iVar6 != 0) {
      FUN_ram_4005ab56(iVar4);
      goto LAB_ram_400591b2;
    }
    uVar1 = *(ushort *)(param_2 + 0x12);
    *piVar5 = iVar4;
    if ((uVar1 & 8) != 0) goto LAB_ram_400591da;
    cVar9 = *(char *)(param_2 + 0x11);
    if ((byte)(cVar9 - 7U) < 4) {
      cVar9 = '\0';
      if (*(char *)(param_2 + 7) == '\0') goto LAB_ram_400592d4;
      iVar4 = FUN_ram_40058e50();
    }
    else {
      if ((byte)(cVar9 - 0xbU) < 4) goto LAB_ram_40059212;
      if (5 < (byte)(cVar9 - 0xfU)) goto LAB_ram_40059228;
      puVar10 = *(undefined4 **)(param_2 + 0x38);
      uVar3 = *puVar10;
      iVar6 = (uint)*(ushort *)(param_2 + 0x18) * (uint)*(ushort *)(param_2 + 0x16);
      if (cVar9 == '\x14') {
        iVar6 = iVar6 + (uint)(*(ushort *)(param_2 + 0x18) >> 1) * (uint)*(ushort *)(param_2 + 0x16)
        ;
      }
      iVar7 = FUN_ram_4004daf8(*(undefined2 *)(param_2 + 0x14));
      iVar4 = 0;
      if (iVar7 != 0) {
        iVar8 = FUN_ram_40058804(uVar3,0xc,*(undefined4 *)(iVar7 + 0x10),iVar6,&iStack_48);
        if ((iVar8 == 0) && (iVar6 == iStack_48)) {
          *(int *)(param_2 + 0x1c) = iVar7;
          puVar10[7] = iVar7;
          iVar4 = 1;
        }
        else {
          FUN_ram_4004dc4e(iVar7);
        }
      }
    }
LAB_ram_4005927c:
    cVar9 = '\0';
LAB_ram_4005927e:
    if (iVar4 != 1) {
LAB_ram_4005922a:
      FUN_ram_40058780(param_2);
      return iVar4;
    }
  }
  else {
    if (*(char *)(param_2 + 0xc) != '\0') {
LAB_ram_40059228:
      iVar4 = 0;
      goto LAB_ram_4005922a;
    }
    iVar4 = *(int *)(param_2 + 8);
    if (*(int *)(iVar4 + 0x10) == 0) {
      return 0;
    }
    if ((*(ushort *)(param_2 + 0x12) & 8) != 0) {
LAB_ram_400591da:
      iVar4 = FUN_ram_40058f84(param_2);
      goto LAB_ram_4005927c;
    }
    if ((byte)(*(char *)(iVar4 + 1) - 7U) < 4) {
      iVar4 = FUN_ram_4005884a(param_2);
      if (iVar4 == 0) {
        return 0;
      }
      cVar9 = *(char *)(param_2 + 7);
      if (cVar9 == '\0') {
LAB_ram_400592d4:
        iVar4 = FUN_ram_40058a66(param_2);
      }
      else {
        iVar4 = FUN_ram_40058e50(param_2);
      }
      goto LAB_ram_4005927e;
    }
    if ((byte)(*(char *)(iVar4 + 1) - 0xbU) < 4) {
      iVar4 = FUN_ram_4005884a(param_2);
      if (iVar4 == 0) {
        return 0;
      }
LAB_ram_40059212:
      iVar4 = FUN_ram_4005886a(param_2);
      goto LAB_ram_4005927c;
    }
    iVar7 = FUN_ram_4005884a(param_2);
    iVar6 = iVar4;
    if ((*(ushort *)(iVar4 + 2) & 0x10) == 0) {
      iVar6 = iVar7 + 0x24;
      thunk_FUN_ram_400050c6(iVar6,iVar4,0x18);
      *(undefined4 *)(iVar7 + 0x38) = *(undefined4 *)(iVar7 + 0x34);
    }
    sVar2 = *(short *)(iVar6 + 8);
    *(int *)(param_2 + 0x1c) = iVar6;
    cVar9 = '\x01';
    if (sVar2 == 0) {
      *(undefined2 *)(iVar6 + 8) = *(undefined2 *)(param_2 + 0x18);
    }
  }
  iVar4 = *(int *)(param_2 + 0x1c);
  if (iVar4 == 0) {
    return 1;
  }
  iVar6 = FUN_ram_4004f770(param_2,iVar4);
  if (iVar6 != 0) {
    if (iVar4 == iVar6) {
      *(int *)(param_2 + 0x1c) = iVar4;
      if (cVar9 != '\0') {
        return 1;
      }
    }
    else {
      FUN_ram_40058780(param_2);
      iVar4 = FUN_ram_4005884a(param_2);
      *(int *)(iVar4 + 0x1c) = iVar6;
      *(int *)(param_2 + 0x1c) = iVar6;
    }
    if (*(char *)(param_2 + 6) != '\0') {
      return 1;
    }
    uStack_40 = *(undefined1 *)(param_2 + 0xc);
    uStack_44 = *(undefined4 *)(param_2 + 8);
    iStack_48 = *(int *)(*(int *)(param_2 + 0x1c) + 0xc);
    iVar4 = FUN_ram_4004f714(param_1,&iStack_48,*(int *)(param_2 + 0x1c),
                             *(undefined4 *)(param_2 + 0x38));
    if (iVar4 != 0) {
      *(int *)(param_2 + 0x34) = iVar4;
      iVar4 = FUN_ram_4005884a(param_2);
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      return 1;
    }
  }
LAB_ram_400591b2:
  FUN_ram_40058780(param_2);
  return 0;
}


/* NanoCore 1.11, address 0x40059390.
 * REA evidence: ev_668b93c26e61406e45adc58b99bfb51cc6f8b8b21356566f5546c9cd97229645
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40059390(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004f6d8();
  if (iVar1 != 0) {
    FUN_ram_4004f700(iVar1,FUN_ram_400586c0);
    FUN_ram_4004f704(iVar1,FUN_ram_4005914c);
    FUN_ram_4004f708(iVar1,FUN_ram_40058c32);
    FUN_ram_4004f70c(iVar1,FUN_ram_400587c6);
    FUN_ram_4004f710(iVar1,0);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400593ea.
 * REA evidence: ev_fc56a9fae106de96cecde9d0113108b0bc8c7a8be7260b9ffeb8b7f4f72fbd18
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

byte * FUN_ram_400593ea(ushort *param_1,undefined1 *param_2,int param_3,int param_4)

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
          if ((puVar9 + -8 <= puVar12) || (puVar10 + -0x20 < puVar14)) goto LAB_ram_40059546;
          thunk_FUN_ram_400050c6(puVar14,puVar12,0x10);
          uVar13 = bVar1 & 0xf;
          uVar7 = (uint)*(ushort *)((int)puVar12 + uVar5);
          puVar16 = (ushort *)((int)puVar12 + uVar5) + 1;
          puVar15 = puVar17 + -uVar7;
          if (uVar13 == 0xf) {
LAB_ram_4005959e:
            iVar4 = 0;
            puVar12 = puVar16;
            do {
              puVar16 = (ushort *)((int)puVar12 + 1);
              uVar2 = *puVar12;
              iVar4 = iVar4 + (uint)(byte)uVar2;
              puVar12 = puVar16;
              if ((puVar9 + -2 < puVar16) || (iVar4 < 0)) goto LAB_ram_400596ae;
            } while ((byte)uVar2 == 0xff);
            uVar13 = iVar4 + 0xf;
            if (puVar17 <= puVar17 + uVar13) goto LAB_ram_400595c2;
            goto LAB_ram_400596ae;
          }
          if ((uVar7 < 8) || (puVar15 < param_2)) goto LAB_ram_400595c2;
          thunk_FUN_ram_400050c6(puVar17,puVar15,8);
          thunk_FUN_ram_400050c6(puVar17 + 8,puVar15 + 8,8);
          thunk_FUN_ram_400050c6(puVar17 + 0x10,puVar15 + 0x10,2);
          puVar14 = puVar17 + uVar13 + 4;
        }
        if ((ushort *)((int)puVar9 + -0xf) <= puVar12) goto LAB_ram_400596ae;
        iVar4 = 0;
        puVar16 = puVar12;
        do {
          puVar12 = (ushort *)((int)puVar16 + 1);
          uVar2 = *puVar16;
          iVar4 = iVar4 + (uint)(byte)uVar2;
          if (((ushort *)((int)puVar9 + -0xf) < puVar12) || (iVar4 < 0)) goto LAB_ram_400596ae;
          puVar16 = puVar12;
        } while ((byte)uVar2 == 0xff);
        uVar5 = iVar4 + 0xf;
        if ((puVar14 + uVar5 < puVar14) || ((ushort *)(uVar5 + (int)puVar12) < puVar12))
        goto LAB_ram_400596ae;
LAB_ram_40059546:
        puVar17 = puVar14 + uVar5;
        puVar16 = (ushort *)((int)puVar12 + uVar5);
        if ((puVar10 + -0xc < puVar17) || (puVar9 + -4 < puVar16)) {
          if ((puVar9 == puVar16) && (puVar17 <= puVar10)) {
            thunk_FUN_ram_40005156(puVar14,puVar12);
            return puVar17 + -(int)param_2;
          }
LAB_ram_400596ae:
          return (byte *)((int)param_1 + (-1 - (int)puVar12));
        }
        do {
          puVar15 = puVar14 + 8;
          thunk_FUN_ram_400050c6(puVar14,puVar12,8);
          puVar12 = puVar12 + 4;
          puVar14 = puVar15;
        } while (puVar15 < puVar17);
        uVar13 = bVar1 & 0xf;
        uVar7 = (uint)*puVar16;
        puVar16 = puVar16 + 1;
        puVar15 = puVar17 + -uVar7;
        if (uVar13 == 0xf) goto LAB_ram_4005959e;
LAB_ram_400595c2:
        puVar12 = puVar16;
        if (puVar15 < param_2) goto LAB_ram_400596ae;
        puVar14 = puVar17 + uVar13 + 4;
        if (uVar7 < 8) {
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar17[2] = 0;
          puVar17[3] = 0;
          iVar4 = *(int *)(&DAT_ram_40099888 + uVar7 * 4);
          *puVar17 = *puVar15;
          puVar17[1] = puVar15[1];
          puVar17[2] = puVar15[2];
          puVar17[3] = puVar15[3];
          thunk_FUN_ram_400050c6(puVar17 + 4,puVar15 + iVar4,4);
          puVar15 = puVar15 + iVar4 + -*(int *)(&DAT_ram_40099868 + uVar7 * 4);
        }
        else {
          thunk_FUN_ram_400050c6(puVar17,puVar15,8);
          puVar15 = puVar15 + 8;
        }
        puVar8 = puVar17 + 8;
        if (puVar10 + -0xc < puVar14) {
          if (puVar10 + -5 < puVar14) goto LAB_ram_400596ae;
          puVar17 = puVar8;
          puVar18 = puVar15;
          if (puVar8 < puVar11) {
            do {
              puVar3 = puVar17 + 8;
              thunk_FUN_ram_400050c6(puVar17,puVar18,8);
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
          thunk_FUN_ram_400050c6(puVar8,puVar15,8);
          if (0x10 < uVar13 + 4) {
            puVar17 = puVar17 + 0x10;
            do {
              puVar15 = puVar15 + 8;
              thunk_FUN_ram_400050c6(puVar17,puVar15,8);
              puVar17 = puVar17 + 8;
            } while (puVar17 < puVar14);
          }
        }
      } while( true );
    }
  }
  return pbVar6;
}


/* NanoCore 1.11, address 0x400596ba.
 * REA evidence: ev_688c6f23be5b634106d65fa5cdc5eb89a2b136573ffb40c8a8d9a30becd79a5a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400596ba(byte *param_1,uint param_2,int param_3,uint param_4,uint param_5)

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
        thunk_FUN_ram_400050c6(param_3,pbVar1,param_4 - uVar3);
        return param_4;
      }
      thunk_FUN_ram_400050c6(param_3,pbVar1,uVar5);
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
          thunk_FUN_ram_400050c6(param_3,pbVar1,param_5);
          param_3 = param_3 + param_5;
        }
        return param_4;
      }
      uVar2 = param_5;
      if (param_5 == 1) {
        thunk_FUN_ram_4000504c(param_3,param_1[1],uVar4);
        uVar5 = uVar4;
      }
      else {
        iVar8 = param_3;
        for (uVar7 = 0; uVar7 < uVar4; uVar7 = uVar7 + 1) {
          thunk_FUN_ram_400050c6(iVar8,pbVar1,param_5);
          iVar8 = iVar8 + param_5;
        }
      }
    }
    param_1 = pbVar1 + uVar2;
    param_3 = param_3 + uVar5;
  } while( true );
}


/* NanoCore 1.11, address 0x400597c6.
 * REA evidence: ev_35f519932aaf325536c859facfc18632e9a9046ebb7ac1f81b5a4302c16bf876
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400597c6(undefined4 *param_1,undefined4 param_2)

{
  if (param_1[1] != 0) {
    FUN_ram_400597c6();
  }
  if ((code *)*param_1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x400597e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(param_1,param_2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400597f4.
 * REA evidence: ev_38e6ccab3a67a15c286bec3e149e228759f9892bd0ab628d9c6fdc4ed78553de
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400597f4(undefined4 param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  if (*piVar1 != 0) {
    if ((piVar1[8] & 0x100000U) != 0) {
      *param_2 = *piVar1;
      FUN_ram_400597f4();
    }
  }
  *param_2 = (int)piVar1;
  FUN_ram_400597c6(param_1,param_2);
  return;
}


/* NanoCore 1.11, address 0x4005982a.
 * REA evidence: ev_3e76c13afa344fb3b53d175c251c5d0e303e5b524db48dadf8690d93093f1145
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005982a(int param_1)

{
  if (param_1 == 0) {
    FUN_ram_4004d1be();
  }
  else {
    FUN_ram_40048a20();
  }
  FUN_ram_4004d42a();
  return;
}


/* NanoCore 1.11, address 0x40059842.
 * REA evidence: ev_0ed5e8eb597f4b9bf4595c0b1e338275612a2a4318380fcb4715d86836bc3900
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40059842(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4005982a();
  if (iVar1 != 0) {
    FUN_ram_400483d6(param_1);
    FUN_ram_400597f4(iVar1,param_1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40059874.
 * REA evidence: ev_3e51d8d0b4d1b94d6eec022702190155e066a6a7948164604c13f8a42ba4d555
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40059874(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x40059878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}


/* NanoCore 1.11, address 0x4005987a.
 * REA evidence: ev_a5f42a567dbeca23e2bfffc981b5461364c9a5278b6528b4a2fa9757b81d1bb8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400598f8) */

int FUN_ram_4005987a(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

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


/* NanoCore 1.11, address 0x40059926.
 * REA evidence: ev_1f523203e3b3c5dec15c8f19ef5ee3f869dffad9a34bcecb5c5e06ad4c7bf735
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined2 FUN_ram_40059926(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined1 auStack_28 [4];
  undefined2 uStack_24;
  
  if ((((((0x1f < param_2) && (param_2 != 0x61c)) && (1 < param_2 - 0x115f)) &&
       ((3 < param_2 - 0x180b && (4 < param_2 - 0x200b)))) &&
      ((7 < param_2 - 0x2028 && ((0x10 < param_2 - 0x205f && (param_2 != 0xfeff)))))) &&
     (param_2 != 0xf8ff)) {
    FUN_ram_4005987a(param_1,auStack_28,param_2,param_3);
    return uStack_24;
  }
  return 0;
}


/* NanoCore 1.11, address 0x400599dc.
 * REA evidence: ev_3bb2795472f78e95f4e164986a4f6d3800757b2771ef5d427b28ea2ae13a47a4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400599dc(int param_1,uint param_2,uint param_3)

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


/* NanoCore 1.11, address 0x40059a5e.
 * REA evidence: ev_36f6b8537993eca31aa350d1feb89698b5426523d11af7962d8727d3809aa480
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40059a5e(byte *param_1,int param_2)

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
    uVar2 = _DAT_ram_30080de4;
    iVar9 = _DAT_ram_30080de0;
    if (pbVar10 == param_1 + param_2) {
      return;
    }
    if (_DAT_ram_30080dec == 0) {
      uVar8 = (uint)DAT_ram_30080de8;
      uVar4 = FUN_ram_400599dc(_DAT_ram_30080de4,_DAT_ram_30080de0,uVar8);
      if ((iVar9 != 0) && (DAT_ram_30080de9 == uVar4)) {
        DAT_ram_30080dea = '\0';
        _DAT_ram_30080dec = 1;
      }
      bVar3 = (byte)uVar4;
      _DAT_ram_30080de0 = uVar8 + iVar9;
      DAT_ram_30080de9 = (byte)uVar4;
    }
    else if (_DAT_ram_30080dec == 1) {
      iVar5 = FUN_ram_400599dc(_DAT_ram_30080de4,_DAT_ram_30080de0,1);
      bVar3 = DAT_ram_30080de9;
      iVar6 = iVar9 + 1;
      cVar7 = DAT_ram_30080dea + '\x01';
      _DAT_ram_30080de0 = iVar6;
      if (iVar5 == 1) {
        bVar1 = DAT_ram_30080dea == '\n';
        DAT_ram_30080dea = cVar7;
        if (bVar1) {
          iVar5 = FUN_ram_400599dc(uVar2,iVar6,6);
          iVar9 = iVar9 + 7;
          DAT_ram_30080dea = (char)iVar5;
          _DAT_ram_30080de0 = iVar9;
          if (iVar5 == 0) {
            uVar4 = (uint)DAT_ram_30080de8;
            DAT_ram_30080de9 = FUN_ram_400599dc(uVar2,iVar9,uVar4);
            _DAT_ram_30080de0 = iVar9 + uVar4;
            goto LAB_ram_40059b54;
          }
          _DAT_ram_30080dec = 2;
        }
      }
      else {
        uVar4 = (uint)DAT_ram_30080de8;
        DAT_ram_30080dea = cVar7;
        DAT_ram_30080de9 = FUN_ram_400599dc(uVar2,iVar6,uVar4);
        _DAT_ram_30080de0 = uVar4 + iVar6;
LAB_ram_40059b54:
        _DAT_ram_30080dec = 0;
        bVar3 = DAT_ram_30080de9;
      }
    }
    else {
      bVar3 = 0;
      if (_DAT_ram_30080dec == 2) {
        cVar7 = DAT_ram_30080dea + -1;
        bVar1 = DAT_ram_30080dea == '\x01';
        bVar3 = DAT_ram_30080de9;
        DAT_ram_30080dea = cVar7;
        if (bVar1) {
          uVar4 = (uint)DAT_ram_30080de8;
          DAT_ram_30080de9 = FUN_ram_400599dc(_DAT_ram_30080de4,_DAT_ram_30080de0,uVar4);
          _DAT_ram_30080de0 = uVar4 + iVar9;
          goto LAB_ram_40059b54;
        }
      }
    }
    *pbVar10 = bVar3;
    pbVar10 = pbVar10 + 1;
  } while( true );
}


/* NanoCore 1.11, address 0x40059bc0.
 * REA evidence: ev_8572d1842b2d6fdf5f378fea5d79bff0689869561a31dfe46da8c01f215d8344
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40059bc0(int param_1,int param_2)

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
          iVar6 = FUN_ram_4004c86c(&uStack_12,*(undefined4 *)(iVar6 + 8),
                                   *(undefined2 *)(iVar6 + 0x10),2,&LAB_ram_40059bb4);
          if (iVar6 == 0) {
            return 0;
          }
          iVar7 = *(int *)(iVar2 + 8) + iVar7;
          return (uint)*(ushort *)(iVar7 + 6) + (iVar6 - *(int *)(iVar7 + 8) >> 1);
        }
        if (cVar1 != '\x01') {
          return 0;
        }
        iVar3 = FUN_ram_4004c86c(&uStack_12,*(undefined4 *)(iVar6 + 8),*(undefined2 *)(iVar6 + 0x10)
                                 ,2,&LAB_ram_40059bb4);
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


/* NanoCore 1.11, address 0x40059c9e.
 * REA evidence: ev_325efa8650f3e62fd3b6410c11742653baced46340e6f60f2eb9e268d134f9b8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40059c9e(int *param_1,int param_2,int param_3)

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
  iVar3 = FUN_ram_40059bc0(*param_1,param_2);
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
        puVar15 = (&PTR_DAT_ram_400998d4_ram_400998c8)[uVar7];
        DAT_ram_30080de8 = (byte)((uint)(piVar14[4] << 3) >> 0x1c);
        _DAT_ram_30080dec = 0;
        _DAT_ram_30080de0 = 0;
        DAT_ram_30080de9 = 0;
        DAT_ram_30080dea = 0;
        _DAT_ram_30080de4 = pbVar9;
        iVar3 = FUN_ram_4005ab20(uVar12);
        iVar11 = 0;
        if (uVar13 == 0x4000) {
          iVar11 = FUN_ram_4005ab20(uVar12);
        }
        FUN_ram_40059a5e(iVar3,uVar12);
        iVar4 = FUN_ram_4004d9f0(uVar12,0xe);
        for (iVar5 = 0; iVar5 < (int)uVar12; iVar5 = iVar5 + 1) {
          *(undefined *)(iVar2 + iVar5) = puVar15[*(byte *)(iVar3 + iVar5)];
        }
        for (iVar5 = 1; iVar2 = iVar2 + iVar4, iVar5 < (int)(uint)bVar6; iVar5 = iVar5 + 1) {
          if (uVar13 == 0x4000) {
            FUN_ram_40059a5e(iVar11,uVar12);
            for (iVar8 = 0; iVar8 < (int)uVar12; iVar8 = iVar8 + 1) {
              bVar1 = *(byte *)(iVar11 + iVar8) ^ *(byte *)(iVar3 + iVar8);
              *(byte *)(iVar3 + iVar8) = bVar1;
              *(undefined *)(iVar2 + iVar8) = puVar15[bVar1];
            }
          }
          else {
            FUN_ram_40059a5e(iVar3,uVar12);
            for (iVar8 = 0; iVar8 < (int)uVar12; iVar8 = iVar8 + 1) {
              *(undefined *)(iVar2 + iVar8) = puVar15[*(byte *)(iVar3 + iVar8)];
            }
          }
        }
        FUN_ram_4005ab56(iVar3);
        FUN_ram_4005ab56(iVar11);
        return param_3;
      }
      iVar3 = FUN_ram_4004d9f0(uVar12,0xe);
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
              *(undefined *)(iVar2 + iVar5) = (&DAT_ram_400998e0)[uVar12];
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
LAB_ram_40059dee:
              *(undefined *)(iVar2 + iVar5) = (&DAT_ram_400998d4)[uVar7];
            }
            else {
              if (uVar12 == 1) {
                uVar7 = (uVar7 & 0x3f) >> 4;
                goto LAB_ram_40059dee;
              }
              if (uVar12 == 2) {
                uVar7 = (uVar7 & 0xf) >> 2;
                goto LAB_ram_40059dee;
              }
              pbVar9 = pbVar9 + 1;
              *(undefined *)(iVar2 + iVar5) = (&DAT_ram_400998d4)[uVar7 & 3];
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
LAB_ram_40059d40:
            *(byte *)(iVar2 + iVar5) = -bVar6;
          }
          else {
            if (uVar12 == 1) {
              bVar6 = (byte)((uVar7 & 0x7f) >> 6);
              goto LAB_ram_40059d40;
            }
            if (uVar12 == 2) {
              bVar6 = (byte)((uVar7 & 0x3f) >> 5);
              goto LAB_ram_40059d40;
            }
            if (uVar12 == 3) {
              bVar6 = (byte)((uVar7 & 0x1f) >> 4);
              goto LAB_ram_40059d40;
            }
            if (uVar12 == 4) {
              bVar6 = (byte)((uVar7 & 0xf) >> 3);
              goto LAB_ram_40059d40;
            }
            if (uVar12 == 5) {
              bVar6 = (byte)((uVar7 & 7) >> 2);
              goto LAB_ram_40059d40;
            }
            if (uVar12 == 6) {
              bVar6 = (byte)((uVar7 & 3) >> 1);
              goto LAB_ram_40059d40;
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


/* NanoCore 1.11, address 0x40059f7e.
 * REA evidence: ev_fdf5f5bc496fbd9b7c950e3a895d95fba3a6f7f0bab6078e135a32c82402d36d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40059f7e(int param_1,int param_2,int param_3,undefined4 param_4)

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
  iVar3 = FUN_ram_40059bc0(param_1,iVar3);
  if (iVar3 == 0) {
    return 0;
  }
  if ((*(int *)(iVar7 + 0xc) != 0) &&
     (iStack_24 = FUN_ram_40059bc0(param_1,param_4), iStack_24 != 0)) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x18) + 0xc);
    if ((*(ushort *)(*(int *)(param_1 + 0x18) + 0x12) & 0x2000) == 0) {
      uVar6 = piVar2[2] & 0xc0000000;
      iStack_28 = iVar3;
      if (uVar6 == 0) {
        iVar8 = *piVar2;
        iVar4 = FUN_ram_4004c86c(&iStack_28,iVar8,piVar2[2] & 0x3fffffff,2,&LAB_ram_400599a8);
        iVar5 = 0;
        if (iVar4 == 0) goto LAB_ram_40059fbe;
        iVar5 = iVar4 - iVar8 >> 1;
      }
      else {
        if (uVar6 != 0x40000000) goto LAB_ram_40059fbc;
        iVar8 = *piVar2;
        iVar4 = FUN_ram_4004c86c(&iStack_28,iVar8,piVar2[2] & 0x3fffffff,4,&LAB_ram_400599c2);
        iVar5 = 0;
        if (iVar4 == 0) goto LAB_ram_40059fbe;
        iVar5 = iVar4 - iVar8 >> 2;
      }
      iVar5 = (int)*(char *)(piVar2[1] + iVar5);
      goto LAB_ram_40059fbe;
    }
    if ((*(byte *)(piVar2[1] + iVar3) != 0) &&
       (uVar6 = (uint)*(byte *)(piVar2[2] + iStack_24), uVar6 != 0)) {
      iVar5 = (int)*(char *)(*piVar2 + uVar6 +
                             (*(byte *)(piVar2[1] + iVar3) - 1) * (uint)*(byte *)((int)piVar2 + 0xd)
                            + -1);
      goto LAB_ram_40059fbe;
    }
  }
LAB_ram_40059fbc:
  iVar5 = 0;
LAB_ram_40059fbe:
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


