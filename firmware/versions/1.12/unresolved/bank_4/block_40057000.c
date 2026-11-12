/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40057000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40057092.
 * REA evidence: ev_81056c28c0141e51d811582d4d5fd9c6b6aeeda985ac9c9f8e57aff115988853
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057092(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  if (10 < (*(uint *)(param_1 + 0x58) & 0xfff) >> 8) {
    param_3 = 0;
    param_2 = 0;
  }
  if ((*(int *)(param_1 + 0x50) != param_2) || (*(int *)(param_1 + 0x54) != param_3)) {
    FUN_ram_40046078(param_1);
    uVar1 = FUN_ram_4004515c(param_1);
    uVar2 = FUN_ram_40045168(param_1);
    FUN_ram_40056df6(param_1,auStack_38);
    FUN_ram_4004e462(&iStack_30,uVar1,uVar2,*(undefined4 *)(param_1 + 0x44),
                     *(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x4c),auStack_38);
    iStack_30 = iStack_30 + *(int *)(param_1 + 0x14);
    iStack_2c = iStack_2c + *(int *)(param_1 + 0x18);
    iStack_28 = iStack_28 + *(int *)(param_1 + 0x14);
    iStack_24 = iStack_24 + *(int *)(param_1 + 0x18);
    FUN_ram_40045578(param_1,&iStack_30);
    *(int *)(param_1 + 0x54) = param_3;
    *(int *)(param_1 + 0x50) = param_2;
    uVar3 = FUN_ram_40048b18(param_1);
    FUN_ram_4004d518(uVar3,0);
    FUN_ram_40044af4(param_1);
    FUN_ram_4004d518(uVar3,1);
    FUN_ram_40056df6(param_1,auStack_38);
    FUN_ram_4004e462(&iStack_30,uVar1,uVar2,*(undefined4 *)(param_1 + 0x44),
                     *(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x4c),auStack_38);
    iStack_30 = iStack_30 + *(int *)(param_1 + 0x14);
    iStack_28 = iStack_28 + *(int *)(param_1 + 0x14);
    iStack_2c = iStack_2c + *(int *)(param_1 + 0x18);
    iStack_24 = iStack_24 + *(int *)(param_1 + 0x18);
    FUN_ram_40045578(param_1,&iStack_30);
  }
  return;
}


/* NanoCore 1.12, address 0x40057194.
 * REA evidence: ev_de1f544aa05a8dd25cb82f8c6ec293c67a6b5b7ad2d6b7f51f8c37255a68e85f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057194(int param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  
  uVar3 = *(ushort *)(param_1 + 0x58) & 0xf00;
  if (uVar3 == 0xb00) {
    FUN_ram_40056f8a(param_1,0);
    FUN_ram_40057092(param_1,0,0);
    iVar1 = FUN_ram_4004515c(param_1);
    if (*(int *)(param_1 + 0x3c) == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = (iVar1 << 8) / *(int *)(param_1 + 0x3c);
    }
    iVar1 = FUN_ram_40045168(param_1);
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = (iVar1 << 8) / *(int *)(param_1 + 0x40);
    }
  }
  else {
    if (uVar3 != 0xc00) {
      return;
    }
    FUN_ram_40056f8a(param_1,0);
    FUN_ram_40057092(param_1,0,0);
    iVar1 = 0x100;
    iVar2 = 0x100;
  }
  FUN_ram_40056e70(param_1,iVar2,iVar1);
  return;
}


/* NanoCore 1.12, address 0x40057218.
 * REA evidence: ev_442d754ebfae376f00facc800b4c65228634befdc0fc3692f1889eec9a510b40
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057218(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_34;
  ushort uStack_30;
  undefined1 uStack_2c;
  byte bStack_2b;
  ushort uStack_28;
  ushort uStack_26;
  
  FUN_ram_400455dc();
  iVar1 = FUN_ram_4004e36e(param_2);
  if (iVar1 == 3) {
    if ((ushort)((*(ushort *)(param_1 + 0x58) & 3) - 1) < 2) {
      FUN_ram_4005a988(*(undefined4 *)(param_1 + 0x2c));
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) | 3;
  }
  else {
    iVar2 = FUN_ram_4004f6c8(param_2,&uStack_2c);
    if (iVar2 == 1) {
      if (iVar1 == 0) {
        if ((ushort)((*(ushort *)(param_1 + 0x58) & 3) - 1) < 2) {
          FUN_ram_4005a988(*(undefined4 *)(param_1 + 0x2c));
        }
        *(int *)(param_1 + 0x2c) = param_2;
      }
      else {
        if (((iVar1 - 1U & 0xff) < 2) && (iVar2 = *(int *)(param_1 + 0x2c), iVar2 != param_2)) {
          if (1 < (ushort)((*(ushort *)(param_1 + 0x58) & 3) - 1)) {
            iVar2 = 0;
          }
          iVar3 = FUN_ram_4005aa68(param_2);
          if (iVar3 == 0) {
            return;
          }
          *(int *)(param_1 + 0x2c) = iVar3;
          if (iVar2 != 0) {
            FUN_ram_4005a988(iVar2);
          }
        }
        if (iVar1 == 2) {
          uVar4 = FUN_ram_40047b68(param_1,0,0x5a);
          uStack_34 = uVar4;
          uVar5 = FUN_ram_40047b68(param_1,0,0x5b);
          uStack_34 = uVar5;
          uStack_34 = FUN_ram_40047b68(param_1,0,0x5c);
          FUN_ram_4004c580(&uStack_34,param_2,uVar4,uVar5,uStack_34,0x1fffffff,0);
          uStack_28 = (ushort)uStack_34;
          uStack_26 = uStack_30;
        }
      }
      *(uint *)(param_1 + 0x3c) = (uint)uStack_28;
      *(uint *)(param_1 + 0x40) = (uint)uStack_26;
      *(byte *)(param_1 + 0x58) =
           (bStack_2b & 0x1f) << 2 | (byte)iVar1 & 3 | *(byte *)(param_1 + 0x58) & 0x80;
      FUN_ram_40045264(param_1);
      FUN_ram_40057194(param_1);
      if (((*(int *)(param_1 + 0x44) != 0) || (*(int *)(param_1 + 0x48) != 0x100)) ||
         (*(int *)(param_1 + 0x4c) != 0x100)) {
        FUN_ram_40044af4(param_1);
      }
      FUN_ram_400455dc(param_1);
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40057382.
 * REA evidence: ev_46db8c9a42297dbe7ae6dea7aee2ce86153d107824452871b6687c8f1123a862
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057382(int param_1,uint param_2)

{
  if ((*(uint *)(param_1 + 0x58) & 0xfff) >> 8 != param_2) {
    *(ushort *)(param_1 + 0x58) =
         (ushort)((param_2 & 0xf) << 8) | *(ushort *)(param_1 + 0x58) & 0xf0ff;
    FUN_ram_40057194();
    FUN_ram_400455dc(param_1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400573bc.
 * REA evidence: ev_d83e94022f55dc9001139c67012d0b3e0045ad4c239110e3dc1b3bcaa841c1b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400574f6) */
/* WARNING: Removing unreachable block (ram,0x40057504) */

void FUN_ram_400573bc(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [16];
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  uint uStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_48 [13];
  byte bStack_3b;
  undefined4 uStack_24;
  
  iVar2 = FUN_ram_4004afc8(param_2);
  iVar3 = FUN_ram_40044b4c(&PTR_DAT_ram_4009e478_ram_4009e8f0,param_2);
  if (iVar3 == 1) {
    iVar3 = FUN_ram_4004afc0(param_2);
    FUN_ram_40056df6(iVar3,auStack_b0);
    if (iVar2 == 0x2d) {
      if ((*(ushort *)(iVar3 + 0x58) & 3) == 2) {
        FUN_ram_40057218(iVar3,*(undefined4 *)(iVar3 + 0x2c));
      }
      else {
        FUN_ram_40044af4(iVar3);
      }
    }
    else if (iVar2 == 0x16) {
      piVar4 = (int *)FUN_ram_4004afd2(param_2);
      if (((*(int *)(iVar3 + 0x44) != 0) || (*(int *)(iVar3 + 0x48) != 0x100)) ||
         (*(int *)(iVar3 + 0x4c) != 0x100)) {
        iVar5 = FUN_ram_4004515c(iVar3);
        iVar6 = FUN_ram_40045168(iVar3);
        FUN_ram_4004e462(&uStack_88,iVar5,iVar6,*(undefined4 *)(iVar3 + 0x44),
                         *(undefined2 *)(iVar3 + 0x48),*(undefined2 *)(iVar3 + 0x4c),auStack_b0);
        iVar2 = -uStack_88;
        if ((int)-uStack_88 < *piVar4) {
          iVar2 = *piVar4;
        }
        *piVar4 = iVar2;
        iVar3 = -iStack_84;
        if (-iStack_84 < iVar2) {
          iVar3 = iVar2;
        }
        *piVar4 = iVar3;
        iVar2 = iStack_80 - iVar5;
        if (iStack_80 - iVar5 < iVar3) {
          iVar2 = iVar3;
        }
        *piVar4 = iVar2;
        iVar3 = iStack_7c - iVar6;
        if (iStack_7c - iVar6 < iVar2) {
          iVar3 = iVar2;
        }
        *piVar4 = iVar3;
      }
    }
    else if (iVar2 == 0x13) {
      puVar7 = (undefined4 *)FUN_ram_4004afd2(param_2);
      iVar5 = *(int *)(iVar3 + 0x3c);
      iVar2 = FUN_ram_4004515c(iVar3);
      if (((iVar5 == iVar2) &&
          (iVar5 = *(int *)(iVar3 + 0x40), iVar2 = FUN_ram_40045168(iVar3), iVar5 == iVar2)) &&
         ((*(int *)(iVar3 + 0x48) != 0x100 ||
          ((((*(int *)(iVar3 + 0x4c) != 0x100 || (*(int *)(iVar3 + 0x44) != 0)) ||
            (*(int *)(iVar3 + 0x50) != *(int *)(iVar3 + 0x3c) / 2)) ||
           (*(int *)(iVar3 + 0x54) != *(int *)(iVar3 + 0x40) / 2)))))) {
        uVar8 = FUN_ram_4004515c(iVar3);
        uVar9 = FUN_ram_40045168(iVar3);
        FUN_ram_4004e462(&uStack_88,uVar8,uVar9,*(undefined4 *)(iVar3 + 0x44),
                         *(undefined2 *)(iVar3 + 0x48),*(undefined2 *)(iVar3 + 0x4c),auStack_b0);
        uStack_88 = uStack_88 + *(int *)(iVar3 + 0x14);
        iStack_84 = iStack_84 + *(int *)(iVar3 + 0x18);
        iStack_80 = iStack_80 + *(int *)(iVar3 + 0x14);
        iStack_7c = iStack_7c + *(int *)(iVar3 + 0x18);
      }
      else {
        FUN_ram_40045974(iVar3,&uStack_88);
      }
      uVar1 = FUN_ram_4004a584(&uStack_88,*puVar7,0);
      *(undefined1 *)(puVar7 + 1) = uVar1;
    }
    else if (iVar2 == 0x2f) {
      puVar7 = (undefined4 *)FUN_ram_4004afd2(param_2);
      *puVar7 = *(undefined4 *)(iVar3 + 0x3c);
      puVar7[1] = *(undefined4 *)(iVar3 + 0x40);
    }
    else if ((iVar2 - 0x15U < 7) && ((0x49U >> (iVar2 - 0x15U & 0x1f) & 1) != 0)) {
      iVar2 = FUN_ram_4004afc8(param_2);
      iVar3 = FUN_ram_4004afc0(param_2);
      if (iVar2 == 0x15) {
        piVar4 = (int *)FUN_ram_4004afd2(param_2);
        if (*piVar4 != 2) {
          if (((((*(ushort *)(iVar3 + 0x58) & 2) == 0) &&
               (iVar2 = FUN_ram_4004ae16((*(uint *)(iVar3 + 0x58) & 0x7f) >> 2), iVar2 == 0)) &&
              (uStack_88 = FUN_ram_40047b68(iVar3,0,0x44), (uStack_88 & 0xff) == 0xff)) &&
             (*(int *)(iVar3 + 0x44) == 0)) {
            if ((*(int *)(iVar3 + 0x48) == 0x100) && (*(int *)(iVar3 + 0x4c) == 0x100)) {
              puVar10 = (uint *)(iVar3 + 0x14);
            }
            else {
              FUN_ram_40056df6(iVar3,&iStack_98);
              uVar8 = FUN_ram_4004515c(iVar3);
              uVar9 = FUN_ram_40045168(iVar3);
              FUN_ram_4004e462(&uStack_88,uVar8,uVar9,0,*(undefined2 *)(iVar3 + 0x48),
                               *(undefined2 *)(iVar3 + 0x4c),&iStack_98);
              uStack_88 = uStack_88 + *(int *)(iVar3 + 0x14);
              iStack_84 = iStack_84 + *(int *)(iVar3 + 0x18);
              iStack_80 = iStack_80 + *(int *)(iVar3 + 0x14);
              iStack_7c = iStack_7c + *(int *)(iVar3 + 0x18);
              puVar10 = &uStack_88;
            }
            iVar2 = FUN_ram_4004a6a6(piVar4[1],puVar10,0);
            if ((iVar2 != 0) && (*(int *)(iVar3 + 0x30) == 0)) {
              return;
            }
          }
          *piVar4 = 1;
        }
      }
      else if (((iVar2 == 0x18) && (*(int *)(iVar3 + 0x40) != 0)) &&
              ((*(int *)(iVar3 + 0x3c) != 0 &&
               ((*(int *)(iVar3 + 0x48) != 0 && (*(int *)(iVar3 + 0x4c) != 0)))))) {
        iVar2 = FUN_ram_40044ca4(param_2);
        if ((*(ushort *)(iVar3 + 0x58) & 2) == 0) {
          FUN_ram_4004e31e(&uStack_88);
          FUN_ram_400448fe(iVar3,0,&uStack_88);
          iVar5 = iVar2 + 0x18;
          FUN_ram_4000303c(auStack_a8,iVar5,0x10);
          FUN_ram_40056df6(iVar3,auStack_48);
          uStack_58 = *(undefined4 *)(iVar3 + 0x48);
          uStack_54 = *(undefined4 *)(iVar3 + 0x4c);
          uStack_5c = *(undefined4 *)(iVar3 + 0x44);
          bStack_3b = (byte)(((*(uint *)(iVar3 + 0x58) & 0xff) >> 7) << 4) |
                      (byte)(*(uint *)(iVar3 + 0x58) >> 8) >> 4 | bStack_3b & 0xe0;
          uStack_24 = *(undefined4 *)(iVar3 + 0x30);
          iStack_98 = *(int *)(iVar3 + 0x14);
          uStack_6c = *(undefined4 *)(iVar3 + 0x2c);
          iStack_90 = iStack_98 + *(int *)(iVar3 + 0x3c) + -1;
          iStack_94 = *(int *)(iVar3 + 0x18);
          iStack_8c = iStack_94 + *(int *)(iVar3 + 0x40) + -1;
          uVar11 = (*(uint *)(iVar3 + 0x58) & 0xfff) >> 8;
          if (uVar11 < 10) {
            FUN_ram_4004a8d0(iVar3 + 0x14,&iStack_98,uVar11,*(undefined4 *)(iVar3 + 0x34),
                             *(undefined4 *)(iVar3 + 0x38));
          }
          else if ((*(ushort *)(iVar3 + 0x58) & 0xf00) == 0xc00) {
            FUN_ram_4004a4fe(iVar5,iVar5,iVar3 + 0x14);
            FUN_ram_4004a4e4(&iStack_98,*(undefined4 *)(iVar3 + 0x34),*(undefined4 *)(iVar3 + 0x38))
            ;
            iVar6 = *(int *)(iVar3 + 0x40);
            iVar3 = *(int *)(iVar3 + 0x3c);
            if (iVar6 == 0) {
              iVar12 = -1;
            }
            else {
              iVar12 = ((*(int *)(iVar2 + 0x1c) - iStack_94) - (iVar6 + -1)) / iVar6;
            }
            if (iVar3 == 0) {
              iVar13 = -1;
            }
            else {
              iVar13 = ((*(int *)(iVar2 + 0x18) - iStack_98) - (iVar3 + -1)) / iVar3;
            }
            FUN_ram_4004a4e4(&iStack_98,iVar13 * iVar3,iVar12 * iVar6);
            bStack_3b = bStack_3b | 0x20;
          }
          FUN_ram_4004e602(iVar2,&uStack_88,&iStack_98);
          FUN_ram_4000303c(iVar5,auStack_a8,0x10);
        }
        else if ((*(ushort *)(iVar3 + 0x58) & 3) == 2) {
          FUN_ram_4004e7e0(&uStack_88);
          FUN_ram_40044802(iVar3,0,&uStack_88);
          uStack_6c = *(undefined4 *)(iVar3 + 0x2c);
          FUN_ram_4004e856(iVar2,&uStack_88,iVar3 + 0x14);
        }
      }
    }
  }
  return;
}


/* NanoCore 1.12, address 0x400577ce.
 * REA evidence: ev_3dbce0279107ac0ff29cf10b1fa93af5af61a8fb6668b8c26b0e1e1e55c6474a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400577ce(int param_1)

{
  if (((*(byte *)(param_1 + 0x5c) & 0x20) != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    FUN_ram_4005a988();
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xdf;
  return;
}


/* NanoCore 1.12, address 0x40057800.
 * REA evidence: ev_17c0b70e27a395db28ad992ad42aa176d280c2c8cb6a154c6bb4cb85d006211a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057800(undefined4 param_1,int param_2)

{
  FUN_ram_400577ce(param_2);
  if ((*(byte *)(param_2 + 0x5c) & 8) == 0) {
    FUN_ram_4005a988(*(undefined4 *)(param_2 + 0x2c));
  }
  *(undefined4 *)(param_2 + 0x2c) = 0;
  return;
}


/* NanoCore 1.12, address 0x40057834.
 * REA evidence: ev_c991eacd9aaced13ffbf420c3a1766da93c4d42d2b912f0263694f23aaae61e3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4005785a) */
/* WARNING: Removing unreachable block (ram,0x40057862) */

void FUN_ram_40057834(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 2) {
    iVar1 = FUN_ram_4004c51e(param_3,param_4,param_5,param_6);
    iVar1 = iVar1 / 2;
    iVar2 = ((param_7[2] - *param_7) + 1) / 2;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    iVar1 = FUN_ram_4004c51e(param_3,param_4,param_5,param_6);
    iVar2 = (param_7[2] - *param_7) + 1;
  }
  *param_1 = (iVar2 - iVar1) + *param_1;
  return;
}


/* NanoCore 1.12, address 0x4005788e.
 * REA evidence: ev_f79d302db15458ccea34e5059892e753959a02c9e952da126995c0a86984fc00
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005788e(int param_1,int param_2,int param_3)

{
  if (param_3 == 2) {
    if (*(int *)(param_1 + 0x34) < 1) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
    *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    return;
  }
  if (param_3 != 3) {
    return;
  }
  if (*(int *)(param_1 + 0x34) < 1) {
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  }
  *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return;
}


/* NanoCore 1.12, address 0x400578d8.
 * REA evidence: ev_d9819d8538e3ce405050479bbf1a774aad2fffd7c224eab4861878a4efbfdf50
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400578d8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (((*(byte *)(param_1 + 0x5c) & 7) == 1) && (*(int *)(param_1 + 0x34) != -1)) {
    iVar1 = (**(code **)(gp + -0x3c))(*(undefined4 *)(param_1 + 0x2c),*(int *)(param_1 + 0x34) + -3)
    ;
    iVar2 = param_1 + 0x30;
    if ((*(byte *)(param_1 + 0x5c) & 0x20) != 0) {
      iVar2 = *(int *)(param_1 + 0x30);
    }
    uVar5 = 0;
    while( true ) {
      iVar3 = *(int *)(param_1 + 0x2c);
      iVar4 = iVar1 + uVar5;
      if (*(char *)(iVar3 + iVar4) == '\0') break;
      *(undefined1 *)(iVar3 + iVar4) = *(undefined1 *)(iVar2 + uVar5);
      uVar5 = uVar5 + 1 & 0xff;
    }
    *(undefined1 *)(iVar3 + iVar4) = *(undefined1 *)(iVar2 + uVar5);
    FUN_ram_400577ce(param_1);
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4005794a.
 * REA evidence: ev_3b3a38f80f618626c06961645748f65698f657569610e7aa1d9464d8be24e1c0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005794a(undefined4 param_1)

{
  FUN_ram_40047b68(param_1,0,0x5c);
  return;
}


/* NanoCore 1.12, address 0x4005795e.
 * REA evidence: ev_25c1de0e24da04012585f2c10cc9374407df9b7866094e2209e38266a4b16e99
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005795e(undefined4 param_1)

{
  FUN_ram_40047b68(param_1,0,0x5b);
  return;
}


/* NanoCore 1.12, address 0x40057972.
 * REA evidence: ev_12681cc9910f230d6a8a26480a57427a1b3f59784514198cfde48e7f8c903494
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057972(undefined4 param_1)

{
  FUN_ram_40047b68(param_1,0,0x5a);
  return;
}


/* NanoCore 1.12, address 0x40057986.
 * REA evidence: ev_3f3c3480c4ef314acd27907f5cfd8aed8fa9a1afa50ca771189d750eca1af16c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40057986(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 0x5c);
  iVar3 = FUN_ram_40047b68(param_1,0,1);
  uVar2 = (bVar1 & 0x1f) >> 4;
  if (((iVar3 == 0x200007d1) && (iVar3 = FUN_ram_40047b68(param_1,0,5), iVar3 == 0x1fffffff)) &&
     (-1 < (int)((uint)*(ushort *)(param_1 + 0x2a) << 0x14))) {
    uVar2 = uVar2 | 2;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x400579de.
 * REA evidence: ev_b75680e01a8f861971fc7da0da9a4c4283aaab6d79d81d501f435574f4086880
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400579de(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400441d4(&PTR_DAT_ram_4009e478_ram_4009e924,param_1);
  FUN_ram_4004430a();
  return uVar1;
}


/* NanoCore 1.12, address 0x400579fe.
 * REA evidence: ev_c42905c557fe51c61804d8c755535cab4baf5b27f19f7b9d2a25cf46f420c31d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400579fe(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  int aiStack_50 [2];
  int iStack_48;
  
  iVar13 = *param_2;
  iVar3 = FUN_ram_40047b68(param_1,0,0x12);
  iVar14 = param_2[1];
  aiStack_50[0] = iVar3;
  aiStack_50[0] = FUN_ram_40047b68(param_1,0,0x10);
  iVar14 = iVar14 - aiStack_50[0];
  FUN_ram_400451d0(param_1,aiStack_50);
  iVar10 = *(int *)(param_1 + 0x2c);
  iVar12 = iStack_48 - aiStack_50[0];
  iVar4 = FUN_ram_40057972(param_1);
  iVar5 = FUN_ram_4005794a(param_1);
  iVar6 = FUN_ram_4005795e(param_1);
  iVar9 = *(int *)(iVar4 + 0xc);
  FUN_ram_40057986(param_1);
  iVar5 = iVar5 + iVar9;
  uVar2 = 0;
  while (iVar11 = iVar10 + uVar2, uVar1 = uVar2, *(char *)(iVar10 + uVar2) != '\0') {
    iVar7 = FUN_ram_4004c2da(iVar11,iVar4,iVar6,iVar12 + 1,0);
    uVar1 = uVar2 + iVar7;
    if (iVar14 <= iVar9) {
      uStack_54 = uVar1;
      iVar5 = (**(code **)(gp + -0x30))(iVar10,&uStack_54);
      if ((iVar5 != 10) && (*(char *)(iVar10 + uVar1) == '\0')) {
        uVar1 = uVar1 + 1;
      }
      break;
    }
    iVar9 = iVar9 + iVar5;
    uVar2 = uVar1;
  }
  iStack_60 = 0;
  uVar8 = FUN_ram_40048044(param_1,0,*(undefined4 *)(param_1 + 0x2c));
  FUN_ram_40057834(&iStack_60,uVar8,iVar11,uVar1 - uVar2,iVar4,iVar6,aiStack_50);
  iStack_5c = 0;
  iVar5 = iStack_5c;
  if (uVar1 != 0) {
    while (iVar5 = iStack_5c, iStack_5c + uVar2 < uVar1) {
      FUN_ram_4004c4de(iVar11,&uStack_58,&uStack_54,&iStack_5c);
      iVar9 = FUN_ram_40059758(iVar4,uStack_58,uStack_54);
      if (((iVar13 - iVar3 < iVar9 + iStack_60) || (iStack_5c + uVar2 == uVar1)) ||
         (*(char *)(iVar11 + iVar5) == '\0')) break;
      iStack_60 = iVar9 + iStack_60 + iVar6;
    }
  }
  iStack_5c = iVar5;
  iVar3 = (**(code **)(gp + -0x38))(iVar11,iStack_5c);
  iVar4 = (**(code **)(gp + -0x38))(iVar10,uVar2);
  return iVar4 + iVar3;
}


/* NanoCore 1.12, address 0x40057b72.
 * REA evidence: ev_050f7e80ea33300efa81f1e96f2e83ad7395cc44d31aa7490403e0830601e4fa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057b72(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined1 *puStack_84;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  byte bStack_3a;
  byte bStack_34;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 0x40;
  FUN_ram_400451d0(param_1,&iStack_98);
  iVar11 = iStack_90 - iStack_98;
  iVar3 = FUN_ram_40057972(param_1);
  iVar4 = FUN_ram_4005794a(param_1);
  iVar5 = FUN_ram_4005795e(param_1);
  uVar6 = FUN_ram_40057986(param_1);
  FUN_ram_4004c580(&iStack_a0,*(undefined4 *)(param_1 + 0x2c),iVar3,iVar5,iVar4,iVar11 + 1,uVar6);
  FUN_ram_40045264(param_1);
  bVar10 = *(byte *)(param_1 + 0x5c) & 7;
  if (bVar10 == 2) {
    iVar5 = FUN_ram_40047b68(param_1,0,99);
    iStack_88 = iVar5;
    iVar4 = FUN_ram_40047b68(param_1,0,100);
    iStack_88 = iVar4;
    if (iVar4 == 0) {
      iVar4 = FUN_ram_4004a3fe(0x28,300,10000);
    }
    FUN_ram_4004a24c(&iStack_88);
    uStack_44 = 0xffff;
    uStack_50 = 300;
    uStack_48 = 300;
    iVar11 = (iStack_90 - iStack_98) + 1;
    if (iVar11 < iStack_a0) {
      iStack_5c = iVar11 - iStack_a0;
      iStack_64 = 0;
      uStack_60 = 0x80000000;
      puStack_84 = &LAB_ram_4005782e;
      iStack_88 = param_1;
      iVar7 = FUN_ram_4004a3b6(param_1);
      iVar11 = iStack_64;
      if (iVar7 == 0) {
        uVar12 = 0;
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(iVar7 + 0x34);
        uVar12 = *(uint *)(iVar7 + 0x54) & 1;
      }
      if ((iVar9 < iStack_58) && (bStack_3a = bStack_3a & 0xfe, iStack_54 = iVar9, uVar12 != 0)) {
        bStack_34 = bStack_34 | 1;
        iStack_64 = iStack_5c;
        iStack_5c = iVar11;
      }
      iStack_58 = iVar4;
      iStack_4c = iVar4;
      if (iVar5 != 0) {
        FUN_ram_4005788e(&iStack_88,iVar5,*(uint *)(param_1 + 0x5c) & 7);
      }
      FUN_ram_4004a292(&iStack_88);
      bVar8 = true;
    }
    else {
      iStack_88 = param_1;
      FUN_ram_4004a332(param_1,&LAB_ram_4005782e);
      bVar8 = false;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    iVar11 = (iStack_8c - iStack_94) + 1;
    if ((iStack_9c <= iVar11) || (bVar8)) {
LAB_ram_40057ea2:
      FUN_ram_4004a332(param_1,&LAB_ram_40057828);
      *(undefined4 *)(param_1 + 0x58) = 0;
      goto LAB_ram_40057d3e;
    }
    iStack_5c = (iVar11 - iStack_9c) - *(int *)(iVar3 + 0xc);
    iStack_64 = 0;
    uStack_60 = 0x80000000;
    puStack_84 = &LAB_ram_40057828;
    iVar11 = FUN_ram_4004a3b6(param_1);
    iVar3 = iStack_64;
    iVar7 = 0;
    uVar12 = 0;
    if (iVar11 != 0) {
      iVar7 = *(int *)(iVar11 + 0x34);
      uVar12 = *(uint *)(iVar11 + 0x54) & 1;
    }
    if ((iVar7 < iStack_58) && (bStack_3a = bStack_3a & 0xfe, iStack_54 = iVar7, uVar12 != 0)) {
      bStack_34 = bStack_34 | 1;
      iStack_64 = iStack_5c;
      iStack_5c = iVar3;
    }
    iStack_58 = iVar4;
    iStack_4c = iVar4;
    if (iVar5 != 0) {
LAB_ram_40057d2c:
      FUN_ram_4005788e(&iStack_88,iVar5,*(uint *)(param_1 + 0x5c) & 7);
    }
  }
  else {
    if (bVar10 != 3) {
      if (bVar10 == 1) {
        if ((((iStack_8c - iStack_94) + 1 < iStack_9c) && (*(int *)(iVar3 + 0xc) < iStack_9c)) &&
           (uVar12 = (**(code **)(gp + -0x28))(*(undefined4 *)(param_1 + 0x2c)), 3 < uVar12)) {
          iVar11 = FUN_ram_40059758(iVar3,0x2e,0x2e);
          iVar7 = *(int *)(iVar3 + 0xc);
          iStack_88 = (iVar11 + iVar5) * -3 + (iStack_90 - iStack_98) + 1;
          iVar5 = (iStack_8c - iStack_94) + 1;
          iVar3 = iVar5;
          if (iVar4 + iVar7 != 0) {
            iVar3 = iVar5 % (iVar4 + iVar7);
          }
          iVar4 = -iVar4;
          if (iVar7 <= iVar3) {
            iVar4 = iVar7;
          }
          puStack_84 = (undefined1 *)((iVar5 - iVar3) + iVar4);
          iVar3 = FUN_ram_400579fe(param_1,&iStack_88,0);
          uVar12 = thunk_FUN_ram_4000517a(*(undefined4 *)(param_1 + 0x2c));
          uStack_a4 = (**(code **)(gp + -0x3c))(*(undefined4 *)(param_1 + 0x2c),iVar3);
          while( true ) {
            uVar1 = uStack_a4;
            uVar13 = uStack_a4 + 3;
            if (uVar13 <= uVar12) break;
            iVar3 = iVar3 + -1;
            (**(code **)(gp + -0x30))(*(undefined4 *)(param_1 + 0x2c),&uStack_a4);
          }
          iVar4 = 4;
          uVar2 = 0;
          do {
            iVar5 = (**(code **)(gp + -0x2c))(*(int *)(param_1 + 0x2c) + uStack_a4);
            uVar2 = uVar2 + iVar5 & 0xff;
            (**(code **)(gp + -0x34))(*(undefined4 *)(param_1 + 0x2c),&uStack_a4);
            if ((3 < uVar2) || (uVar12 < uStack_a4)) break;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          iVar4 = *(int *)(param_1 + 0x2c) + uVar1;
          FUN_ram_400577ce(param_1);
          if (uVar2 < 5) {
            *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xdf;
            thunk_FUN_ram_4000500c(param_1 + 0x30,iVar4,uVar2);
          }
          else {
            iVar5 = FUN_ram_4005a952(uVar2 + 1);
            *(int *)(param_1 + 0x30) = iVar5;
            if (iVar5 == 0) goto LAB_ram_40057d3e;
            thunk_FUN_ram_4000500c(iVar5,iVar4,uVar2);
            *(undefined1 *)(*(int *)(param_1 + 0x30) + uVar2) = 0;
            *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 0x20;
          }
          *(undefined1 *)(*(int *)(param_1 + 0x2c) + uVar1) = 0x2e;
          *(undefined1 *)(*(int *)(param_1 + 0x2c) + uVar1 + 1) = 0x2e;
          *(undefined1 *)(uVar1 + *(int *)(param_1 + 0x2c) + 2) = 0x2e;
          *(undefined1 *)(*(int *)(param_1 + 0x2c) + uVar13) = 0;
          *(int *)(param_1 + 0x34) = iVar3 + 3;
        }
        else {
          *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
        }
      }
      goto LAB_ram_40057d3e;
    }
    iVar5 = FUN_ram_40047b68(param_1,0,99);
    iStack_88 = iVar5;
    iVar4 = FUN_ram_40047b68(param_1,0,100);
    iStack_88 = iVar4;
    if (iVar4 == 0) {
      iVar4 = FUN_ram_4004a3fe(0x28,300,10000);
    }
    FUN_ram_4004a24c(&iStack_88);
    uStack_44 = 0xffff;
    if ((iStack_90 - iStack_98) + 1 < iStack_a0) {
      iStack_88 = param_1;
      iVar11 = FUN_ram_40059758(iVar3,0x20,0x20);
      iStack_64 = 0;
      iStack_5c = iVar11 * -3 - iStack_a0;
      uStack_60 = 0x80000000;
      puStack_84 = &LAB_ram_4005782e;
      iStack_58 = iVar4;
      iVar11 = FUN_ram_4004a3b6(param_1);
      iVar7 = 0;
      if (iVar11 != 0) {
        iVar7 = *(int *)(iVar11 + 0x34);
      }
      if (iVar5 == 0) {
        if (iVar7 < iStack_58) {
          bStack_3a = bStack_3a & 0xfe;
          iStack_54 = iVar7;
        }
      }
      else {
        FUN_ram_4005788e(&iStack_88,iVar5,*(uint *)(param_1 + 0x5c) & 7);
      }
      FUN_ram_4004a292(&iStack_88);
      bVar8 = true;
    }
    else {
      iStack_88 = param_1;
      FUN_ram_4004a332(param_1,&LAB_ram_4005782e);
      bVar8 = false;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    if ((iStack_9c <= (iStack_8c - iStack_94) + 1) || (bVar8)) goto LAB_ram_40057ea2;
    iStack_5c = -*(int *)(iVar3 + 0xc) - iStack_9c;
    iStack_64 = 0;
    uStack_60 = 0x80000000;
    puStack_84 = &LAB_ram_40057828;
    iStack_58 = iVar4;
    iVar3 = FUN_ram_4004a3b6(param_1);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0x34);
    }
    if (iVar5 != 0) goto LAB_ram_40057d2c;
    if (iVar4 < iStack_58) {
      bStack_3a = bStack_3a & 0xfe;
      iStack_54 = iVar4;
    }
  }
  FUN_ram_4004a292(&iStack_88);
LAB_ram_40057d3e:
  FUN_ram_400455dc(param_1);
  return;
}


