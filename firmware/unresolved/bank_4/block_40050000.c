/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40050000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40050422.
 * REA evidence: ev_a5d96930529fe4fee5d6dc69efa21ef1ba0d57d47bf2689d1c867d45825c3231
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40050422(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined1 uStack_dc;
  undefined1 *puStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  undefined1 auStack_90 [36];
  int *piStack_6c;
  int iStack_68;
  undefined1 uStack_60;
  int *piStack_5c;
  byte bStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  int iStack_54;
  undefined1 uStack_50;
  int *piStack_4c;
  
  if (*(byte *)(param_2 + 0x20) < 3) {
    return;
  }
  iStack_c0 = *param_3;
  iStack_bc = param_3[1];
  iStack_b8 = param_3[2];
  iStack_b4 = param_3[3];
  iVar4 = FUN_ram_40049494(&iStack_b0,&iStack_c0,*(undefined4 *)(param_1 + 8));
  if (iVar4 != 0) {
    uVar1 = *(uint *)(param_2 + 0x2c) & 0x7ffffff;
    uVar9 = uVar1 >> 0x18;
    if (uVar9 == 0) {
      uVar12 = *(undefined1 *)(param_2 + 0x21);
      uVar11 = *(undefined1 *)(param_2 + 0x22);
      uVar2 = *(undefined1 *)(param_2 + 0x23);
    }
    else {
      uVar12 = *(undefined1 *)(param_2 + 0x24);
      uVar11 = *(undefined1 *)(param_2 + 0x25);
      uVar2 = *(undefined1 *)(param_2 + 0x26);
    }
    memset(&piStack_6c,0,0x2c);
    iVar10 = *(int *)(param_2 + 0x1c);
    bStack_58 = *(byte *)(param_2 + 0x20);
    uVar15 = (uint)bStack_58;
    uStack_57 = uVar12;
    uStack_56 = uVar11;
    uStack_55 = uVar2;
    if ((iVar10 == 0) && (uVar9 == 0)) {
      piStack_6c = &iStack_c0;
      FUN_ram_400538aa(param_1,&piStack_6c);
    }
    else {
      if (0xfc < uVar15) {
        uVar15 = 0xff;
      }
      iVar3 = (iStack_b8 - iStack_c0) + 1;
      iVar16 = (iStack_b4 - iStack_bc) + 1;
      iVar14 = iVar3;
      if (iVar16 <= iVar3) {
        iVar14 = iVar16;
      }
      iVar13 = iVar14 >> 1;
      if (iVar10 < iVar14 >> 1) {
        iVar13 = iVar10;
      }
      puStack_c8 = (undefined1 *)0x0;
      uStack_c4 = 0;
      iVar14 = (iStack_a8 - iStack_b0) + 1;
      iVar10 = 0;
      if (0 < iVar13) {
        iVar10 = FUN_ram_40059bae(iVar14);
        FUN_ram_4005221c(auStack_90,&iStack_c0,iVar13,0);
        puStack_c8 = auStack_90;
      }
      iStack_a0 = iStack_b0;
      iStack_98 = iStack_a8;
      bStack_58 = 0xff;
      piStack_6c = &iStack_a0;
      iStack_54 = iVar10;
      piStack_4c = &iStack_a0;
      piVar5 = (int *)FUN_ram_400508e2(param_2 + 0x24,iVar3,iVar16);
      iVar3 = 0;
      if ((piVar5 != (int *)0x0) && (uVar9 == 2)) {
        iStack_68 = *piVar5 + (iStack_b0 - iStack_c0) * 3;
        for (uVar8 = 0; uVar8 < *(byte *)(param_2 + 0x2e); uVar8 = uVar8 + 1) {
          if (*(char *)(param_2 + 0x27 + uVar8 * 5) != -1) {
            iVar3 = piVar5[1] + (iStack_b0 - iStack_c0);
            goto LAB_ram_400505a6;
          }
        }
        iVar3 = 0;
LAB_ram_400505a6:
        uStack_60 = 0xf;
        piStack_5c = &iStack_a0;
      }
      for (iVar16 = 0; iVar16 < iVar13; iVar16 = iVar16 + 1) {
        iVar7 = iStack_bc + iVar16;
        iVar17 = iStack_b4 - iVar16;
        if ((iStack_ac <= iVar7) || (iVar17 <= iStack_a4)) {
          thunk_FUN_ram_4000505c(iVar10,uVar15,iVar14);
          iVar6 = FUN_ram_40051f0c(&puStack_c8,iVar10,iStack_a0,iVar7,iVar14);
          if (iVar6 == 1) {
            uStack_50 = 2;
          }
          else {
            uStack_50 = (undefined1)iVar6;
          }
          iVar6 = 0;
          if (iStack_ac <= iVar7) {
            iStack_9c = iVar7;
            iStack_94 = iVar7;
            if (uVar9 == 1) {
              iVar7 = iVar7 - iStack_bc;
              FUN_ram_4000305c(&uStack_57,*piVar5 + iVar7 * 3,3);
              bStack_58 = *(undefined1 *)(piVar5[1] + iVar7);
              iVar6 = 0;
            }
            else if ((uVar9 == 2) && (iVar6 = iVar4, iVar3 != 0)) {
              for (iVar7 = 0; iVar7 < iVar14; iVar7 = iVar7 + 1) {
                if (*(byte *)(iVar3 + iVar7) < 0xfd) {
                  *(char *)(iVar10 + iVar7) =
                       (char)((uint)*(byte *)(iVar10 + iVar7) * (uint)*(byte *)(iVar3 + iVar7) >> 8)
                  ;
                }
              }
              uStack_50 = 2;
            }
            FUN_ram_400538aa(param_1,&piStack_6c);
          }
          if (iVar17 <= iStack_a4) {
            iStack_9c = iVar17;
            iStack_94 = iVar17;
            if (uVar9 == 1) {
              iVar17 = iVar17 - iStack_bc;
              FUN_ram_4000305c(&uStack_57,*piVar5 + iVar17 * 3,3);
              bStack_58 = *(undefined1 *)(piVar5[1] + iVar17);
            }
            else if (((iVar6 == 0) && (uVar9 == 2)) && (iVar3 != 0)) {
              for (iVar7 = 0; iVar7 < iVar14; iVar7 = iVar7 + 1) {
                if (*(byte *)(iVar3 + iVar7) < 0xfd) {
                  *(char *)(iVar10 + iVar7) =
                       (char)((uint)*(byte *)(iVar10 + iVar7) * (uint)*(byte *)(iVar3 + iVar7) >> 8)
                  ;
                }
              }
              uStack_50 = 2;
            }
            FUN_ram_400538aa(param_1,&piStack_6c);
          }
        }
      }
      iVar4 = iStack_b4 - iVar13;
      iVar13 = iVar13 + iStack_bc;
      bStack_58 = (byte)uVar15;
      if (uVar9 == 0) {
        iStack_54 = 0;
        iStack_9c = iVar13;
        iStack_94 = iVar4;
        FUN_ram_400538aa(param_1,&piStack_6c);
      }
      else {
        uStack_dc = (undefined1)(uVar1 >> 0x18);
        if (uVar9 == 1) {
          uStack_50 = uStack_dc;
        }
        else if (uVar9 == 2) {
          uStack_50 = uStack_dc;
          iStack_54 = iVar3;
        }
        for (; iVar13 <= iVar4; iVar13 = iVar13 + 1) {
          iStack_9c = iVar13;
          iStack_94 = iVar13;
          if (uVar9 == 1) {
            iVar14 = iVar13 - iStack_bc;
            FUN_ram_4000305c(&uStack_57,*piVar5 + iVar14 * 3,3);
            bStack_58 = *(byte *)(piVar5[1] + iVar14);
            if (uVar15 < 0xfd) {
              bStack_58 = (byte)(bStack_58 * uVar15 >> 8);
            }
          }
          FUN_ram_400538aa(param_1,&piStack_6c);
        }
      }
      if (iVar10 != 0) {
        FUN_ram_40059be4(iVar10);
        FUN_ram_40051f60(auStack_90);
      }
      if (piVar5 != (int *)0x0) {
        thunk_FUN_ram_40059be4(piVar5);
      }
    }
  }
  return;
}


/* NanoCore 1.10, address 0x400507ac.
 * REA evidence: ev_027e20086a266b133b929c039b97b9601653619c54cabf605cc2667e7106f257
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400507ac(undefined1 *param_1,int param_2,int param_3,undefined1 *param_4,
                     undefined1 *param_5)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  if ((int)((uint)(byte)param_1[4] * param_2) >> 8 < param_3) {
    uVar11 = (uint)(byte)param_1[10];
    if (param_3 < (int)((uint)(byte)param_1[uVar11 * 5 + -1] * param_2) >> 8) {
      uVar9 = 0;
      if (1 < uVar11) {
        uVar9 = (int)((uint)(byte)param_1[9] * param_2) >> 8 < param_3 ^ 1;
      }
      iVar10 = uVar9 * 5;
      bVar5 = param_1[iVar10];
      bVar2 = param_1[iVar10 + -5];
      bVar3 = param_1[iVar10 + 1];
      iVar6 = (int)((uint)(byte)param_1[iVar10 + -1] * param_2) >> 8;
      iVar7 = ((int)((uint)(byte)param_1[iVar10 + 4] * param_2) >> 8) - iVar6;
      if (iVar7 == 0) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = ((param_3 - iVar6) * 0xff) / iVar7;
      }
      uVar9 = uVar11 & 0xff;
      uVar11 = ~uVar11 & 0xff;
      bVar4 = param_1[iVar10 + -4];
      param_4[2] = (char)(((byte)param_1[iVar10 + -3] * uVar11 + (byte)param_1[iVar10 + 2] * uVar9)
                          * 0x10102 >> 0x18);
      param_4[1] = (char)((bVar4 * uVar11 + bVar3 * uVar9) * 0x10102 >> 0x18);
      *param_4 = (char)((bVar2 * uVar11 + bVar5 * uVar9) * 0x8081 >> 0x17);
      uVar8 = (undefined1)
              (((byte)param_1[iVar10 + -2] * uVar11 + (byte)param_1[iVar10 + 3] * uVar9) * 0x8081 >>
              0x17);
    }
    else {
      uVar8 = param_1[uVar11 * 5 + -4];
      uVar1 = param_1[uVar11 * 5 + -3];
      *param_4 = param_1[uVar11 * 5 + -5];
      param_4[1] = uVar8;
      param_4[2] = uVar1;
      uVar8 = param_1[uVar11 * 5 + -2];
    }
  }
  else {
    uVar8 = *param_1;
    uVar1 = param_1[1];
    param_4[2] = param_1[2];
    *param_4 = uVar8;
    param_4[1] = uVar1;
    uVar8 = param_1[3];
  }
  *param_5 = uVar8;
  return;
}


/* NanoCore 1.10, address 0x400508e2.
 * REA evidence: ev_6d198ef3066506982874c092a5dd7f8ff0e41c889dd3348bf14e6f0817318d3c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int * FUN_ram_400508e2(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  
  if ((*(byte *)(param_1 + 0xb) & 7) != 0) {
    if ((*(byte *)(param_1 + 0xb) & 7) != 2) {
      param_2 = param_3;
    }
    uVar1 = (param_2 + 1) * 3 & 0xfffffffc;
    piVar2 = (int *)FUN_ram_40059bae((param_2 + 3U & 0xfffffffc) + 0xc + uVar1);
    if (piVar2 != (int *)0x0) {
      piVar2[1] = uVar1 + 0xc + (int)piVar2;
      *piVar2 = (int)(piVar2 + 3);
      piVar2[2] = param_2;
      for (uVar1 = 0; uVar1 < (uint)piVar2[2]; uVar1 = uVar1 + 1) {
        FUN_ram_400507ac(param_1,piVar2[2],uVar1,*piVar2 + uVar1 * 3,piVar2[1] + uVar1);
      }
      return piVar2;
    }
  }
  return (int *)0x0;
}


/* NanoCore 1.10, address 0x40050960.
 * REA evidence: ev_4f56c1763469d53a9b7d816660ac191f86e12a8a80ba544bfa42309802e79afe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_40059be4(undefined1 *param_1)

{
  if ((param_1 != &DAT_ram_3007f944) && (param_1 != (undefined1 *)0x0)) {
    FUN_ram_40059ca4();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40050964.
 * REA evidence: ev_b4c70b83a4387d3d229e8d1374833245c399e161b67307ade60e8c630df4dfc9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40050964(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40049d8e();
  return (iVar1 + 7U & 0x7ff) >> 3;
}


/* NanoCore 1.10, address 0x40050978.
 * REA evidence: ev_33ff20c0e21c315a0b6fbfddbf9beb04778bc1c0e2f99dd295526361e268e104
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40050978(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5,
                     undefined4 param_6)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  bool bVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  size_t __n;
  byte *__src;
  int iVar15;
  byte *__src_00;
  byte *pbVar16;
  int iVar17;
  byte *pbVar18;
  int iVar19;
  size_t __n_00;
  char cVar20;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  uint uVar24;
  int *piVar25;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int *piStack_6c;
  byte *pbStack_68;
  uint uStack_64;
  char cStack_60;
  int *piStack_5c;
  undefined1 uStack_58;
  undefined1 auStack_57 [3];
  byte *pbStack_54;
  undefined1 uStack_50;
  int *piStack_4c;
  uint uStack_48;
  byte bStack_44;
  
  bVar7 = true;
  if ((*(int *)(param_2 + 0x2c) == 0) && (*(int *)(param_2 + 0x30) == 0x100)) {
    bVar7 = *(int *)(param_2 + 0x34) != 0x100;
  }
  iVar9 = *(int *)(param_3 + 0x1c);
  uVar6 = *(ushort *)(iVar9 + 8);
  uVar22 = (uint)uVar6;
  iVar19 = *(int *)(param_2 + 100);
  pbVar23 = *(byte **)(iVar9 + 0x10);
  cVar1 = *(char *)(iVar9 + 1);
  thunk_FUN_ram_4000505c(&piStack_6c,0,0x2c);
  uStack_58 = *(undefined1 *)(param_2 + 0x4c);
  bStack_44 = (byte)((uint)(*(int *)(param_2 + 0x4c) << 0x14) >> 0x1c);
  uStack_64 = uVar22;
  if (bVar7) {
LAB_ram_40050b12:
    FUN_ram_4000305c(&iStack_8c,param_6,0x10);
    piStack_6c = &iStack_8c;
    iVar9 = *param_5;
    iVar19 = param_5[2];
    iVar15 = (param_5[3] - param_5[1]) + 1;
    __n_00 = (iStack_84 - iStack_8c) + 1;
    uVar21 = (iStack_80 - iStack_88) + 1;
    cVar20 = cVar1;
    if (bVar7) {
      if ((cVar1 - 0xfU & 0xfd) == 0) {
        cVar20 = '\x10';
      }
      else if (cVar1 == '\x12') {
        cVar20 = '\x14';
      }
    }
    iVar11 = FUN_ram_40050964(cVar20);
    if (cVar20 == '\x14') {
      uVar24 = __n_00 * 3;
    }
    else {
      iVar12 = FUN_ram_40050964(cVar20);
      uVar24 = iVar12 * __n_00;
    }
    FUN_ram_40048854();
    iVar12 = FUN_ram_4004c26a();
    FUN_ram_40048854();
    FUN_ram_4004c2f8();
    iVar13 = FUN_ram_40050964();
    if (uVar24 == 0) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (uint)(iVar13 * iVar12 * 4) / uVar24;
    }
    if ((int)uVar21 < (int)uVar10) {
      uVar10 = uVar21;
    }
    pbVar14 = (byte *)FUN_ram_40059bae(uVar10 * uVar24);
    iVar12 = iStack_80;
    __n = __n_00 * 2;
    iStack_80 = iStack_88 + uVar10 + -1;
    piStack_5c = &iStack_8c;
    pbStack_68 = pbVar14;
    if (cVar20 == '\x14') {
      pbStack_54 = pbVar14 + uVar10 * __n_00 * 2;
      piStack_4c = &iStack_8c;
      uStack_50 = 2;
      cStack_60 = '\x12';
      uStack_64 = __n;
      uStack_48 = __n_00;
    }
    else {
      cStack_60 = cVar20;
      if (cVar20 == '\x0e') {
        piStack_4c = &iStack_8c;
        uStack_50 = 2;
        pbStack_54 = pbVar14;
        uStack_48 = __n_00;
        FUN_ram_4000305c(auStack_57,param_2 + 0x48,3);
        pbStack_68 = (byte *)0x0;
      }
      else {
        iVar13 = FUN_ram_40050964(cVar20);
        uStack_64 = iVar13 * __n_00;
      }
    }
    while (iStack_88 <= iVar12) {
      iStack_78 = iStack_88;
      iStack_74 = iStack_84;
      iStack_7c = iStack_8c;
      iStack_70 = iStack_80;
      FUN_ram_4004947a(&iStack_7c,-*param_5,-param_5[1]);
      if (bVar7) {
        FUN_ram_40052e2e(param_1,&iStack_7c,pbVar23,(iVar19 - iVar9) + 1,iVar15,uVar22,param_2,
                         param_4,cVar1,pbVar14);
      }
      else if (1 < *(byte *)(param_2 + 0x4b)) {
        iVar13 = (iStack_70 - iStack_78) + 1;
        if (cVar20 == '\x14') {
          iVar17 = iStack_78 * (uint)(uVar6 >> 1);
          __src = pbVar23 + iStack_7c * 2 + iVar17 * 2;
          __src_00 = pbVar23 + iStack_7c + iVar17 + iVar15 * (uint)(uVar6 >> 1) * 2;
          pbVar16 = pbVar14;
          pbVar18 = pbStack_54;
          for (iVar17 = 0; iVar17 < iVar13; iVar17 = iVar17 + 1) {
            memcpy(pbVar16,__src,__n);
            memcpy(pbVar18,__src_00,__n_00);
            __src = __src + (uVar22 & 0xfffffffe);
            __src_00 = __src_00 + (uVar6 >> 1);
            pbVar18 = pbVar18 + __n_00;
            pbVar16 = pbVar16 + __n;
          }
        }
        else if (cVar20 != '\x0e') {
          pbVar18 = pbVar23 + iStack_78 * uVar22 + iVar11 * iStack_7c;
          pbVar16 = pbVar14;
          for (iVar17 = 0; iVar17 < iVar13; iVar17 = iVar17 + 1) {
            memcpy(pbVar16,pbVar18,__n_00 * iVar11);
            pbVar16 = pbVar16 + __n_00 * iVar11;
            pbVar18 = pbVar18 + uVar22;
          }
        }
      }
      bVar2 = *(byte *)(param_2 + 0x4b);
      uVar21 = (uint)bVar2;
      if (2 < uVar21) {
        bVar3 = *(byte *)(param_2 + 0x48);
        bVar4 = *(byte *)(param_2 + 0x49);
        bVar5 = *(byte *)(param_2 + 0x4a);
        uVar24 = ~uVar21 & 0xff;
        if ((cVar20 - 0x12U & 0xfd) == 0) {
          iVar13 = FUN_ram_4004944a(&iStack_8c);
          for (iVar17 = 0; iVar17 < iVar13; iVar17 = iVar17 + 1) {
            uVar8 = *(ushort *)(pbVar14 + iVar17 * 2);
            *(ushort *)(pbVar14 + iVar17 * 2) =
                 ((ushort)((int)((bVar4 >> 2) * uVar21 + ((uVar8 & 0x7ff) >> 5) * uVar24) >> 3) &
                  0x7e0 | ((ushort)(bVar5 >> 3) * (ushort)bVar2 + (uVar8 >> 0xb) * (short)uVar24) *
                          8 & 0xf800) +
                 (short)((bVar3 >> 3) * uVar21 + (uVar8 & 0x1f) * uVar24 >> 8);
          }
        }
        else if (cVar20 != '\x0e') {
          iVar13 = FUN_ram_4004944a(&iStack_8c);
          for (pbVar16 = pbVar14; (uint)((int)pbVar16 - (int)pbVar14) < (uint)(iVar11 * iVar13);
              pbVar16 = pbVar16 + iVar11) {
            *pbVar16 = (byte)(uVar21 * bVar3 + *pbVar16 * uVar24 >> 8);
            pbVar16[1] = (byte)(uVar21 * bVar4 + pbVar16[1] * uVar24 >> 8);
            pbVar16[2] = (byte)(uVar21 * bVar5 + pbVar16[2] * uVar24 >> 8);
          }
        }
      }
      FUN_ram_400538aa(param_1,&piStack_6c);
      iStack_88 = iStack_80 + 1;
      iStack_80 = iStack_88 + uVar10 + -1;
      if ((iVar12 < iStack_80) && (iStack_80 = iVar12, cVar20 == '\x14')) {
        pbStack_54 = pbVar14 + ((iVar12 - iStack_88) + 1) * __n_00 * 2;
      }
    }
    FUN_ram_40059be4(pbVar14);
  }
  else {
    piStack_6c = param_5;
    pbStack_68 = pbVar23;
    if (iVar19 == 0) {
      if (cVar1 == '\x0e') {
        iVar9 = FUN_ram_40049494(&iStack_7c,param_5,*(undefined4 *)(param_1 + 8));
        if (iVar9 == 0) {
          return;
        }
        pbStack_68 = (byte *)0x0;
        pbStack_54 = pbVar23;
        piStack_4c = param_5;
        uStack_48 = uVar22;
        FUN_ram_4000305c(auStack_57,param_2 + 0x48,3);
        uStack_50 = 2;
      }
      else if (cVar1 == '\x14') {
        if (2 < *(byte *)(param_2 + 0x4b)) goto LAB_ram_40050b12;
        uStack_48 = (uint)(uVar6 >> 1);
        uStack_50 = 2;
        if (*(ushort *)(iVar9 + 4) == 0) {
          uVar22 = 0xffffffff;
        }
        else {
          uVar22 = (((param_5[2] - *param_5) + 1) * uVar22) / (uint)*(ushort *)(iVar9 + 4);
        }
        pbStack_54 = pbVar23 + uVar22 * ((param_5[3] - param_5[1]) + 1);
        cStack_60 = '\x12';
        piStack_5c = param_5;
        piStack_4c = param_5;
      }
      else {
        cStack_60 = cVar1;
        piStack_5c = param_5;
        if (2 < *(byte *)(param_2 + 0x4b)) goto LAB_ram_40050b12;
      }
    }
    else {
      if (2 < *(byte *)(param_2 + 0x4b)) goto LAB_ram_40050b12;
      iVar9 = *(int *)(param_2 + 100);
      pbStack_54 = *(byte **)(iVar9 + 0x10);
      uStack_48 = (uint)*(ushort *)(iVar9 + 8);
      piVar25 = param_5;
      if (-2 < *(int *)(param_2 + 0x5c) - *(int *)(param_2 + 0x54)) {
        piVar25 = (int *)(param_2 + 0x54);
      }
      iStack_74 = *(ushort *)(iVar9 + 4) - 1;
      iStack_70 = *(ushort *)(iVar9 + 6) - 1;
      iStack_7c = 0;
      iStack_78 = 0;
      cStack_60 = cVar1;
      piStack_5c = param_5;
      FUN_ram_40049866(piVar25,&iStack_7c,9,0,0);
      uStack_50 = 2;
      piStack_4c = &iStack_7c;
    }
    FUN_ram_400538aa(param_1,&piStack_6c);
  }
  return;
}


/* NanoCore 1.10, address 0x40050ea6.
 * REA evidence: ev_d591bb37fc40326d20c431f43ad78bc62668d4797cf58440cfe72a3a6c46203b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40050ea6(undefined4 param_1,int param_2)

{
  if ((*(byte *)(param_2 + 0x4d) & 0x20) == 0) {
    FUN_ram_4004d668();
    return;
  }
  FUN_ram_4004d342();
  return;
}


/* NanoCore 1.10, address 0x40050ec0.
 * REA evidence: ev_c2f49924bccf6ec48ae685c5843c5529cf3186a24b3b7ad55a3eafb6739abd66
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40050ec0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_78 [28];
  int iStack_5c;
  
  iVar1 = **(int **)(param_2 + 0x1c);
  if (iVar1 != 0) {
    FUN_ram_4000305c(auStack_78,param_2,0x68);
    iStack_5c = iVar1;
    FUN_ram_40050ea6(param_1,auStack_78,param_3);
  }
  return;
}


/* NanoCore 1.10, address 0x40050efa.
 * REA evidence: ev_4aa602666e42268a48e0d4d961accf7a3c164b063310bfa726dd8c5577471f2a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40050efa(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  byte bVar1;
  int aiStack_5c [2];
  int iStack_54;
  int aiStack_4c [5];
  undefined1 uStack_38;
  undefined1 auStack_37 [3];
  undefined4 uStack_34;
  undefined1 uStack_30;
  int *piStack_2c;
  uint uStack_28;
  undefined1 uStack_24;
  
  if (param_2 != (int *)0x0) {
    bVar1 = *(byte *)(param_2 + 1);
    if (bVar1 < 3) {
      if (bVar1 == 0) {
        FUN_ram_4004df08(aiStack_4c);
        uStack_24 = *(undefined1 *)((int)param_2 + 0x17);
        piStack_2c = (int *)CONCAT13(piStack_2c._3_1_,(int3)param_2[5]);
        uStack_28 = 1;
        FUN_ram_4004f276(param_1,aiStack_4c,param_2[3]);
        goto LAB_ram_40050f8e;
      }
    }
    else if ((bVar1 - 4 & 0xfb) != 0) goto LAB_ram_40050f8e;
    FUN_ram_4000305c(aiStack_5c,param_2[2],0x10);
    iStack_54 = FUN_ram_4004ca7e((iStack_54 - aiStack_5c[0]) + 1,0xe);
    iStack_54 = aiStack_5c[0] + -1 + iStack_54;
    thunk_FUN_ram_4000505c(aiStack_4c,0,0x2c);
    FUN_ram_4000305c(auStack_37,param_2 + 5,3);
    uStack_38 = *(undefined1 *)((int)param_2 + 0x17);
    uStack_34 = *(undefined4 *)(*param_2 + 0x10);
    uStack_28 = (uint)*(ushort *)(*param_2 + 8);
    aiStack_4c[0] = param_2[2];
    uStack_30 = 2;
    piStack_2c = aiStack_5c;
    FUN_ram_400538aa(param_1,aiStack_4c);
  }
LAB_ram_40050f8e:
  if ((param_3 != 0) && (param_4 != 0)) {
    FUN_ram_40050422(param_1,param_3,param_4);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40050ff0.
 * REA evidence: ev_034c7f71bf84e00b57346fae742eee17b92f6bc2543a57325d53cd6c1a14121b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40050ff0(undefined4 param_1,int param_2)

{
  if (2 < *(byte *)(param_2 + 0x48)) {
    FUN_ram_4004d88a();
    return;
  }
  return;
}


