/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40057000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4005703e.
 * REA evidence: ev_ee7a6ca80083eeb323c06b7169bb1235c4dd9fe991aeacc9fa1e5193d4e01e82
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005703e(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  FUN_ram_40045f80();
  uVar1 = FUN_ram_40045064(param_1);
  uVar2 = FUN_ram_40045070(param_1);
  FUN_ram_40056fc4(param_1,auStack_38);
  FUN_ram_4004e384(&iStack_30,uVar1,uVar2,*(undefined4 *)(param_1 + 0x44),
                   *(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x4c),auStack_38);
  iStack_30 = iStack_30 + *(int *)(param_1 + 0x14) + -1;
  iStack_2c = iStack_2c + *(int *)(param_1 + 0x18) + -1;
  iStack_28 = *(int *)(param_1 + 0x14) + 1 + iStack_28;
  iStack_24 = *(int *)(param_1 + 0x18) + 1 + iStack_24;
  FUN_ram_40045480(param_1,&iStack_30);
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  uVar3 = FUN_ram_40048a20(param_1);
  FUN_ram_4004d43a(uVar3,0);
  FUN_ram_400449fc(param_1);
  FUN_ram_4004d43a(uVar3,1);
  FUN_ram_4004e384(&iStack_30,uVar1,uVar2,*(undefined4 *)(param_1 + 0x44),
                   *(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x4c),auStack_38);
  iStack_30 = iStack_30 + *(int *)(param_1 + 0x14) + -1;
  iStack_2c = iStack_2c + *(int *)(param_1 + 0x18) + -1;
  iStack_28 = *(int *)(param_1 + 0x14) + 1 + iStack_28;
  iStack_24 = *(int *)(param_1 + 0x18) + 1 + iStack_24;
  FUN_ram_40045480(param_1,&iStack_30);
  return;
}


/* NanoCore 1.11, address 0x40057132.
 * REA evidence: ev_d84df023cb55b101ba1295e74f30ca6d934915136d4f515d07300dad8df3cb23
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057132(int param_1,int param_2)

{
  if (((*(uint *)(param_1 + 0x58) & 0xfff) >> 8 < 0xb) &&
     ((*(int *)(param_1 + 0x48) != param_2 || (*(int *)(param_1 + 0x4c) != param_2)))) {
    if (param_2 == 0) {
      param_2 = 1;
    }
    FUN_ram_4005703e(param_1,param_2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40057158.
 * REA evidence: ev_303628059e6586e7e1275be0818ee963b1d739295c77f9fa7ca90fb7a29813ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057158(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iVar1 = 0;
  if ((*(uint *)(param_1 + 0x58) & 0xfff) >> 8 < 0xb) {
    while (iVar1 = param_2, 0xe0f < iVar1) {
      param_2 = iVar1 + -0xe10;
    }
    for (; iVar1 < 0; iVar1 = iVar1 + 0xe10) {
    }
  }
  if (*(int *)(param_1 + 0x44) != iVar1) {
    FUN_ram_40045f80(param_1);
    uVar2 = FUN_ram_40045064(param_1);
    uVar3 = FUN_ram_40045070(param_1);
    FUN_ram_40056fc4(param_1,auStack_38);
    FUN_ram_4004e384(&iStack_30,uVar2,uVar3,*(undefined4 *)(param_1 + 0x44),
                     *(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x4c),auStack_38);
    iStack_30 = iStack_30 + *(int *)(param_1 + 0x14);
    iStack_2c = iStack_2c + *(int *)(param_1 + 0x18);
    iStack_28 = iStack_28 + *(int *)(param_1 + 0x14);
    iStack_24 = iStack_24 + *(int *)(param_1 + 0x18);
    FUN_ram_40045480(param_1,&iStack_30);
    *(int *)(param_1 + 0x44) = iVar1;
    uVar4 = FUN_ram_40048a20(param_1);
    FUN_ram_4004d43a(uVar4,0);
    FUN_ram_400449fc(param_1);
    FUN_ram_4004d43a(uVar4,1);
    FUN_ram_4004e384(&iStack_30,uVar2,uVar3,*(undefined4 *)(param_1 + 0x44),
                     *(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x4c),auStack_38);
    iStack_30 = iStack_30 + *(int *)(param_1 + 0x14);
    iStack_28 = iStack_28 + *(int *)(param_1 + 0x14);
    iStack_2c = iStack_2c + *(int *)(param_1 + 0x18);
    iStack_24 = iStack_24 + *(int *)(param_1 + 0x18);
    FUN_ram_40045480(param_1,&iStack_30);
  }
  return;
}


/* NanoCore 1.11, address 0x40057260.
 * REA evidence: ev_fa5a154a7e37f18886593c40055c92dc14fedccd09289376418c2dac1e692881
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057260(int param_1,int param_2,int param_3)

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
    FUN_ram_40045f80(param_1);
    uVar1 = FUN_ram_40045064(param_1);
    uVar2 = FUN_ram_40045070(param_1);
    FUN_ram_40056fc4(param_1,auStack_38);
    FUN_ram_4004e384(&iStack_30,uVar1,uVar2,*(undefined4 *)(param_1 + 0x44),
                     *(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x4c),auStack_38);
    iStack_30 = iStack_30 + *(int *)(param_1 + 0x14);
    iStack_2c = iStack_2c + *(int *)(param_1 + 0x18);
    iStack_28 = iStack_28 + *(int *)(param_1 + 0x14);
    iStack_24 = iStack_24 + *(int *)(param_1 + 0x18);
    FUN_ram_40045480(param_1,&iStack_30);
    *(int *)(param_1 + 0x54) = param_3;
    *(int *)(param_1 + 0x50) = param_2;
    uVar3 = FUN_ram_40048a20(param_1);
    FUN_ram_4004d43a(uVar3,0);
    FUN_ram_400449fc(param_1);
    FUN_ram_4004d43a(uVar3,1);
    FUN_ram_40056fc4(param_1,auStack_38);
    FUN_ram_4004e384(&iStack_30,uVar1,uVar2,*(undefined4 *)(param_1 + 0x44),
                     *(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x4c),auStack_38);
    iStack_30 = iStack_30 + *(int *)(param_1 + 0x14);
    iStack_28 = iStack_28 + *(int *)(param_1 + 0x14);
    iStack_2c = iStack_2c + *(int *)(param_1 + 0x18);
    iStack_24 = iStack_24 + *(int *)(param_1 + 0x18);
    FUN_ram_40045480(param_1,&iStack_30);
  }
  return;
}


/* NanoCore 1.11, address 0x40057362.
 * REA evidence: ev_6538d9ce795e71f965b4fe05a430e8ab3a304f52330be8fe4cad7087fbc3a3f2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057362(int param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  
  uVar3 = *(ushort *)(param_1 + 0x58) & 0xf00;
  if (uVar3 == 0xb00) {
    FUN_ram_40057158(param_1,0);
    FUN_ram_40057260(param_1,0,0);
    iVar1 = FUN_ram_40045064(param_1);
    if (*(int *)(param_1 + 0x3c) == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = (iVar1 << 8) / *(int *)(param_1 + 0x3c);
    }
    iVar1 = FUN_ram_40045070(param_1);
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
    FUN_ram_40057158(param_1,0);
    FUN_ram_40057260(param_1,0,0);
    iVar1 = 0x100;
    iVar2 = 0x100;
  }
  FUN_ram_4005703e(param_1,iVar2,iVar1);
  return;
}


/* NanoCore 1.11, address 0x400573e6.
 * REA evidence: ev_3b1e6c41628c0fd4767bc493c9191be0e1ea38de9d91c68bb96b6e9aab608900
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400573e6(int param_1,int param_2)

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
  
  FUN_ram_400454e4();
  iVar1 = FUN_ram_4004e290(param_2);
  if (iVar1 == 3) {
    if ((ushort)((*(ushort *)(param_1 + 0x58) & 3) - 1) < 2) {
      FUN_ram_4005ab56(*(undefined4 *)(param_1 + 0x2c));
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) | 3;
  }
  else {
    iVar2 = FUN_ram_4004f5ea(param_2,&uStack_2c);
    if (iVar2 == 1) {
      if (iVar1 == 0) {
        if ((ushort)((*(ushort *)(param_1 + 0x58) & 3) - 1) < 2) {
          FUN_ram_4005ab56(*(undefined4 *)(param_1 + 0x2c));
        }
        *(int *)(param_1 + 0x2c) = param_2;
      }
      else {
        if (((iVar1 - 1U & 0xff) < 2) && (iVar2 = *(int *)(param_1 + 0x2c), iVar2 != param_2)) {
          if (1 < (ushort)((*(ushort *)(param_1 + 0x58) & 3) - 1)) {
            iVar2 = 0;
          }
          iVar3 = FUN_ram_4005ac36(param_2);
          if (iVar3 == 0) {
            return;
          }
          *(int *)(param_1 + 0x2c) = iVar3;
          if (iVar2 != 0) {
            FUN_ram_4005ab56(iVar2);
          }
        }
        if (iVar1 == 2) {
          uVar4 = FUN_ram_40047a70(param_1,0,0x5a);
          uStack_34 = uVar4;
          uVar5 = FUN_ram_40047a70(param_1,0,0x5b);
          uStack_34 = uVar5;
          uStack_34 = FUN_ram_40047a70(param_1,0,0x5c);
          FUN_ram_4004c488(&uStack_34,param_2,uVar4,uVar5,uStack_34,0x1fffffff,0);
          uStack_28 = (ushort)uStack_34;
          uStack_26 = uStack_30;
        }
      }
      *(uint *)(param_1 + 0x3c) = (uint)uStack_28;
      *(uint *)(param_1 + 0x40) = (uint)uStack_26;
      *(byte *)(param_1 + 0x58) =
           (bStack_2b & 0x1f) << 2 | (byte)iVar1 & 3 | *(byte *)(param_1 + 0x58) & 0x80;
      FUN_ram_4004516c(param_1);
      FUN_ram_40057362(param_1);
      if (((*(int *)(param_1 + 0x44) != 0) || (*(int *)(param_1 + 0x48) != 0x100)) ||
         (*(int *)(param_1 + 0x4c) != 0x100)) {
        FUN_ram_400449fc(param_1);
      }
      FUN_ram_400454e4(param_1);
    }
  }
  return;
}


/* NanoCore 1.11, address 0x40057550.
 * REA evidence: ev_9a4be1ac250c3bdb1823c38316f48cc02a7b63e18f126b326d7e2f9ab62abab7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057550(int param_1,uint param_2)

{
  if ((*(uint *)(param_1 + 0x58) & 0xfff) >> 8 != param_2) {
    *(ushort *)(param_1 + 0x58) =
         (ushort)((param_2 & 0xf) << 8) | *(ushort *)(param_1 + 0x58) & 0xf0ff;
    FUN_ram_40057362();
    FUN_ram_400454e4(param_1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4005758a.
 * REA evidence: ev_de20d9b6236c563022f492e16ffb63570c5072583dd54a33deac5788308a7c25
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400576c4) */
/* WARNING: Removing unreachable block (ram,0x400576d2) */

void FUN_ram_4005758a(undefined4 param_1,undefined4 param_2)

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
  
  iVar2 = FUN_ram_4004aed0(param_2);
  iVar3 = FUN_ram_40044a54(&PTR_DAT_ram_40099398_ram_40099810,param_2);
  if (iVar3 == 1) {
    iVar3 = FUN_ram_4004aec8(param_2);
    FUN_ram_40056fc4(iVar3,auStack_b0);
    if (iVar2 == 0x2d) {
      if ((*(ushort *)(iVar3 + 0x58) & 3) == 2) {
        FUN_ram_400573e6(iVar3,*(undefined4 *)(iVar3 + 0x2c));
      }
      else {
        FUN_ram_400449fc(iVar3);
      }
    }
    else if (iVar2 == 0x16) {
      piVar4 = (int *)FUN_ram_4004aeda(param_2);
      if (((*(int *)(iVar3 + 0x44) != 0) || (*(int *)(iVar3 + 0x48) != 0x100)) ||
         (*(int *)(iVar3 + 0x4c) != 0x100)) {
        iVar5 = FUN_ram_40045064(iVar3);
        iVar6 = FUN_ram_40045070(iVar3);
        FUN_ram_4004e384(&uStack_88,iVar5,iVar6,*(undefined4 *)(iVar3 + 0x44),
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
      puVar7 = (undefined4 *)FUN_ram_4004aeda(param_2);
      iVar5 = *(int *)(iVar3 + 0x3c);
      iVar2 = FUN_ram_40045064(iVar3);
      if (((iVar5 == iVar2) &&
          (iVar5 = *(int *)(iVar3 + 0x40), iVar2 = FUN_ram_40045070(iVar3), iVar5 == iVar2)) &&
         ((*(int *)(iVar3 + 0x48) != 0x100 ||
          ((((*(int *)(iVar3 + 0x4c) != 0x100 || (*(int *)(iVar3 + 0x44) != 0)) ||
            (*(int *)(iVar3 + 0x50) != *(int *)(iVar3 + 0x3c) / 2)) ||
           (*(int *)(iVar3 + 0x54) != *(int *)(iVar3 + 0x40) / 2)))))) {
        uVar8 = FUN_ram_40045064(iVar3);
        uVar9 = FUN_ram_40045070(iVar3);
        FUN_ram_4004e384(&uStack_88,uVar8,uVar9,*(undefined4 *)(iVar3 + 0x44),
                         *(undefined2 *)(iVar3 + 0x48),*(undefined2 *)(iVar3 + 0x4c),auStack_b0);
        uStack_88 = uStack_88 + *(int *)(iVar3 + 0x14);
        iStack_84 = iStack_84 + *(int *)(iVar3 + 0x18);
        iStack_80 = iStack_80 + *(int *)(iVar3 + 0x14);
        iStack_7c = iStack_7c + *(int *)(iVar3 + 0x18);
      }
      else {
        FUN_ram_4004587c(iVar3,&uStack_88);
      }
      uVar1 = FUN_ram_4004a48c(&uStack_88,*puVar7,0);
      *(undefined1 *)(puVar7 + 1) = uVar1;
    }
    else if (iVar2 == 0x2f) {
      puVar7 = (undefined4 *)FUN_ram_4004aeda(param_2);
      *puVar7 = *(undefined4 *)(iVar3 + 0x3c);
      puVar7[1] = *(undefined4 *)(iVar3 + 0x40);
    }
    else if ((iVar2 - 0x15U < 7) && ((0x49U >> (iVar2 - 0x15U & 0x1f) & 1) != 0)) {
      iVar2 = FUN_ram_4004aed0(param_2);
      iVar3 = FUN_ram_4004aec8(param_2);
      if (iVar2 == 0x15) {
        piVar4 = (int *)FUN_ram_4004aeda(param_2);
        if (*piVar4 != 2) {
          if (((((*(ushort *)(iVar3 + 0x58) & 2) == 0) &&
               (iVar2 = FUN_ram_4004ad1e((*(uint *)(iVar3 + 0x58) & 0x7f) >> 2), iVar2 == 0)) &&
              (uStack_88 = FUN_ram_40047a70(iVar3,0,0x44), (uStack_88 & 0xff) == 0xff)) &&
             (*(int *)(iVar3 + 0x44) == 0)) {
            if ((*(int *)(iVar3 + 0x48) == 0x100) && (*(int *)(iVar3 + 0x4c) == 0x100)) {
              puVar10 = (uint *)(iVar3 + 0x14);
            }
            else {
              FUN_ram_40056fc4(iVar3,&iStack_98);
              uVar8 = FUN_ram_40045064(iVar3);
              uVar9 = FUN_ram_40045070(iVar3);
              FUN_ram_4004e384(&uStack_88,uVar8,uVar9,0,*(undefined2 *)(iVar3 + 0x48),
                               *(undefined2 *)(iVar3 + 0x4c),&iStack_98);
              uStack_88 = uStack_88 + *(int *)(iVar3 + 0x14);
              iStack_84 = iStack_84 + *(int *)(iVar3 + 0x18);
              iStack_80 = iStack_80 + *(int *)(iVar3 + 0x14);
              iStack_7c = iStack_7c + *(int *)(iVar3 + 0x18);
              puVar10 = &uStack_88;
            }
            iVar2 = FUN_ram_4004a5ae(piVar4[1],puVar10,0);
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
        iVar2 = FUN_ram_40044bac(param_2);
        if ((*(ushort *)(iVar3 + 0x58) & 2) == 0) {
          FUN_ram_4004e240(&uStack_88);
          FUN_ram_40044806(iVar3,0,&uStack_88);
          iVar5 = iVar2 + 0x18;
          FUN_ram_4000304c(auStack_a8,iVar5,0x10);
          FUN_ram_40056fc4(iVar3,auStack_48);
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
            FUN_ram_4004a7d8(iVar3 + 0x14,&iStack_98,uVar11,*(undefined4 *)(iVar3 + 0x34),
                             *(undefined4 *)(iVar3 + 0x38));
          }
          else if ((*(ushort *)(iVar3 + 0x58) & 0xf00) == 0xc00) {
            FUN_ram_4004a406(iVar5,iVar5,iVar3 + 0x14);
            FUN_ram_4004a3ec(&iStack_98,*(undefined4 *)(iVar3 + 0x34),*(undefined4 *)(iVar3 + 0x38))
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
            FUN_ram_4004a3ec(&iStack_98,iVar13 * iVar3,iVar12 * iVar6);
            bStack_3b = bStack_3b | 0x20;
          }
          FUN_ram_4004e524(iVar2,&uStack_88,&iStack_98);
          FUN_ram_4000304c(iVar5,auStack_a8,0x10);
        }
        else if ((*(ushort *)(iVar3 + 0x58) & 3) == 2) {
          FUN_ram_4004e702(&uStack_88);
          FUN_ram_4004470a(iVar3,0,&uStack_88);
          uStack_6c = *(undefined4 *)(iVar3 + 0x2c);
          FUN_ram_4004e778(iVar2,&uStack_88,iVar3 + 0x14);
        }
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4005799c.
 * REA evidence: ev_68b6f7743dbc1354ef93bb1fce05aea9f04b0a4c26a18a6abf17c16ab710f737
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005799c(int param_1)

{
  if (((*(byte *)(param_1 + 0x5c) & 0x20) != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    FUN_ram_4005ab56();
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xdf;
  return;
}


/* NanoCore 1.11, address 0x400579ce.
 * REA evidence: ev_96101597e5eefdd279e3aea4a05997b6ddbb029cb1f9797b43f723079427aa75
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400579ce(undefined4 param_1,int param_2)

{
  FUN_ram_4005799c(param_2);
  if ((*(byte *)(param_2 + 0x5c) & 8) == 0) {
    FUN_ram_4005ab56(*(undefined4 *)(param_2 + 0x2c));
  }
  *(undefined4 *)(param_2 + 0x2c) = 0;
  return;
}


/* NanoCore 1.11, address 0x40057a02.
 * REA evidence: ev_e517dfe79e5078ccd37beaacda1c30c6b8e9d8646de52aa94a9474af8058251b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40057a28) */
/* WARNING: Removing unreachable block (ram,0x40057a30) */

void FUN_ram_40057a02(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 2) {
    iVar1 = FUN_ram_4004c426(param_3,param_4,param_5,param_6);
    iVar1 = iVar1 / 2;
    iVar2 = ((param_7[2] - *param_7) + 1) / 2;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    iVar1 = FUN_ram_4004c426(param_3,param_4,param_5,param_6);
    iVar2 = (param_7[2] - *param_7) + 1;
  }
  *param_1 = (iVar2 - iVar1) + *param_1;
  return;
}


/* NanoCore 1.11, address 0x40057a5c.
 * REA evidence: ev_57717e21673b16f1a12022eab319be4afda25d85d9c2ea174a690f9dce463aca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057a5c(int param_1,int param_2,int param_3)

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


/* NanoCore 1.11, address 0x40057aa6.
 * REA evidence: ev_d0bfe99285655577b3019e734e3714ea6b1737fb03a8cc0ecd20f9ae598c38f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057aa6(int param_1)

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
    FUN_ram_4005799c(param_1);
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40057b18.
 * REA evidence: ev_070186848bd20106fc32c0042df27a7aa3d3fdabdba16aa26572b467d6083034
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057b18(undefined4 param_1)

{
  FUN_ram_40047a70(param_1,0,0x5c);
  return;
}


/* NanoCore 1.11, address 0x40057b2c.
 * REA evidence: ev_d5f8bf89cb77fca51875d68f7314f8201fb4efb45792093eb0b2e837a0cc0df7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057b2c(undefined4 param_1)

{
  FUN_ram_40047a70(param_1,0,0x5b);
  return;
}


/* NanoCore 1.11, address 0x40057b40.
 * REA evidence: ev_6f3ab86c702b18a921374ee387ced336eab46aa82796c3c155d0b5e564824411
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057b40(undefined4 param_1)

{
  FUN_ram_40047a70(param_1,0,0x5a);
  return;
}


/* NanoCore 1.11, address 0x40057b54.
 * REA evidence: ev_e00c3a540d953945dc8720458e0c1f8d6598f1ce48c51108d7e799169e30be72
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40057b54(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 0x5c);
  iVar3 = FUN_ram_40047a70(param_1,0,1);
  uVar2 = (bVar1 & 0x1f) >> 4;
  if (((iVar3 == 0x200007d1) && (iVar3 = FUN_ram_40047a70(param_1,0,5), iVar3 == 0x1fffffff)) &&
     (-1 < (int)((uint)*(ushort *)(param_1 + 0x2a) << 0x14))) {
    uVar2 = uVar2 | 2;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x40057bac.
 * REA evidence: ev_6b5cc52388648ae9b0d2cd62380493d3378b3aa1bcb5e0d74bcc5c3863de4c55
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40057bac(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400440dc(&PTR_DAT_ram_40099398_ram_40099844,param_1);
  FUN_ram_40044212();
  return uVar1;
}


/* NanoCore 1.11, address 0x40057bcc.
 * REA evidence: ev_991907228c06da9abd184dc11ee2d1d156aaaa5d267961714c42f02eaf166d5b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40057bcc(int param_1,int *param_2)

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
  iVar3 = FUN_ram_40047a70(param_1,0,0x12);
  iVar14 = param_2[1];
  aiStack_50[0] = iVar3;
  aiStack_50[0] = FUN_ram_40047a70(param_1,0,0x10);
  iVar14 = iVar14 - aiStack_50[0];
  FUN_ram_400450d8(param_1,aiStack_50);
  iVar10 = *(int *)(param_1 + 0x2c);
  iVar12 = iStack_48 - aiStack_50[0];
  iVar4 = FUN_ram_40057b40(param_1);
  iVar5 = FUN_ram_40057b18(param_1);
  iVar6 = FUN_ram_40057b2c(param_1);
  iVar9 = *(int *)(iVar4 + 0xc);
  FUN_ram_40057b54(param_1);
  iVar5 = iVar5 + iVar9;
  uVar2 = 0;
  while (iVar11 = iVar10 + uVar2, uVar1 = uVar2, *(char *)(iVar10 + uVar2) != '\0') {
    iVar7 = FUN_ram_4004c1e2(iVar11,iVar4,iVar6,iVar12 + 1,0);
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
  uVar8 = FUN_ram_40047f4c(param_1,0,*(undefined4 *)(param_1 + 0x2c));
  FUN_ram_40057a02(&iStack_60,uVar8,iVar11,uVar1 - uVar2,iVar4,iVar6,aiStack_50);
  iStack_5c = 0;
  iVar5 = iStack_5c;
  if (uVar1 != 0) {
    while (iVar5 = iStack_5c, iStack_5c + uVar2 < uVar1) {
      FUN_ram_4004c3e6(iVar11,&uStack_58,&uStack_54,&iStack_5c);
      iVar9 = FUN_ram_40059926(iVar4,uStack_58,uStack_54);
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


/* NanoCore 1.11, address 0x40057d40.
 * REA evidence: ev_d0159cbea975aa3620d8055952001457ca90ef46c5d23a30f5e099bad60bfd33
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40057d40(int param_1)

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
  FUN_ram_400450d8(param_1,&iStack_98);
  iVar11 = iStack_90 - iStack_98;
  iVar3 = FUN_ram_40057b40(param_1);
  iVar4 = FUN_ram_40057b18(param_1);
  iVar5 = FUN_ram_40057b2c(param_1);
  uVar6 = FUN_ram_40057b54(param_1);
  FUN_ram_4004c488(&iStack_a0,*(undefined4 *)(param_1 + 0x2c),iVar3,iVar5,iVar4,iVar11 + 1,uVar6);
  FUN_ram_4004516c(param_1);
  bVar10 = *(byte *)(param_1 + 0x5c) & 7;
  if (bVar10 == 2) {
    iVar5 = FUN_ram_40047a70(param_1,0,99);
    iStack_88 = iVar5;
    iVar4 = FUN_ram_40047a70(param_1,0,100);
    iStack_88 = iVar4;
    if (iVar4 == 0) {
      iVar4 = FUN_ram_4004a306(0x28,300,10000);
    }
    FUN_ram_4004a154(&iStack_88);
    uStack_44 = 0xffff;
    uStack_50 = 300;
    uStack_48 = 300;
    iVar11 = (iStack_90 - iStack_98) + 1;
    if (iVar11 < iStack_a0) {
      iStack_5c = iVar11 - iStack_a0;
      iStack_64 = 0;
      uStack_60 = 0x80000000;
      puStack_84 = &LAB_ram_400579fc;
      iStack_88 = param_1;
      iVar7 = FUN_ram_4004a2be(param_1);
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
        FUN_ram_40057a5c(&iStack_88,iVar5,*(uint *)(param_1 + 0x5c) & 7);
      }
      FUN_ram_4004a19a(&iStack_88);
      bVar8 = true;
    }
    else {
      iStack_88 = param_1;
      FUN_ram_4004a23a(param_1,&LAB_ram_400579fc);
      bVar8 = false;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    iVar11 = (iStack_8c - iStack_94) + 1;
    if ((iStack_9c <= iVar11) || (bVar8)) {
LAB_ram_40058070:
      FUN_ram_4004a23a(param_1,&LAB_ram_400579f6);
      *(undefined4 *)(param_1 + 0x58) = 0;
      goto LAB_ram_40057f0c;
    }
    iStack_5c = (iVar11 - iStack_9c) - *(int *)(iVar3 + 0xc);
    iStack_64 = 0;
    uStack_60 = 0x80000000;
    puStack_84 = &LAB_ram_400579f6;
    iVar11 = FUN_ram_4004a2be(param_1);
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
LAB_ram_40057efa:
      FUN_ram_40057a5c(&iStack_88,iVar5,*(uint *)(param_1 + 0x5c) & 7);
    }
  }
  else {
    if (bVar10 != 3) {
      if (bVar10 == 1) {
        if ((((iStack_8c - iStack_94) + 1 < iStack_9c) && (*(int *)(iVar3 + 0xc) < iStack_9c)) &&
           (uVar12 = (**(code **)(gp + -0x28))(*(undefined4 *)(param_1 + 0x2c)), 3 < uVar12)) {
          iVar11 = FUN_ram_40059926(iVar3,0x2e,0x2e);
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
          iVar3 = FUN_ram_40057bcc(param_1,&iStack_88,0);
          uVar12 = thunk_FUN_ram_40005234(*(undefined4 *)(param_1 + 0x2c));
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
          FUN_ram_4005799c(param_1);
          if (uVar2 < 5) {
            *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xdf;
            thunk_FUN_ram_400050c6(param_1 + 0x30,iVar4,uVar2);
          }
          else {
            iVar5 = FUN_ram_4005ab20(uVar2 + 1);
            *(int *)(param_1 + 0x30) = iVar5;
            if (iVar5 == 0) goto LAB_ram_40057f0c;
            thunk_FUN_ram_400050c6(iVar5,iVar4,uVar2);
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
      goto LAB_ram_40057f0c;
    }
    iVar5 = FUN_ram_40047a70(param_1,0,99);
    iStack_88 = iVar5;
    iVar4 = FUN_ram_40047a70(param_1,0,100);
    iStack_88 = iVar4;
    if (iVar4 == 0) {
      iVar4 = FUN_ram_4004a306(0x28,300,10000);
    }
    FUN_ram_4004a154(&iStack_88);
    uStack_44 = 0xffff;
    if ((iStack_90 - iStack_98) + 1 < iStack_a0) {
      iStack_88 = param_1;
      iVar11 = FUN_ram_40059926(iVar3,0x20,0x20);
      iStack_64 = 0;
      iStack_5c = iVar11 * -3 - iStack_a0;
      uStack_60 = 0x80000000;
      puStack_84 = &LAB_ram_400579fc;
      iStack_58 = iVar4;
      iVar11 = FUN_ram_4004a2be(param_1);
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
        FUN_ram_40057a5c(&iStack_88,iVar5,*(uint *)(param_1 + 0x5c) & 7);
      }
      FUN_ram_4004a19a(&iStack_88);
      bVar8 = true;
    }
    else {
      iStack_88 = param_1;
      FUN_ram_4004a23a(param_1,&LAB_ram_400579fc);
      bVar8 = false;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    if ((iStack_9c <= (iStack_8c - iStack_94) + 1) || (bVar8)) goto LAB_ram_40058070;
    iStack_5c = -*(int *)(iVar3 + 0xc) - iStack_9c;
    iStack_64 = 0;
    uStack_60 = 0x80000000;
    puStack_84 = &LAB_ram_400579f6;
    iStack_58 = iVar4;
    iVar3 = FUN_ram_4004a2be(param_1);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0x34);
    }
    if (iVar5 != 0) goto LAB_ram_40057efa;
    if (iVar4 < iStack_58) {
      bStack_3a = bStack_3a & 0xfe;
      iStack_54 = iVar4;
    }
  }
  FUN_ram_4004a19a(&iStack_88);
LAB_ram_40057f0c:
  FUN_ram_400454e4(param_1);
  return;
}


