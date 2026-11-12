/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40051000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x400511c6.
 * REA evidence: ev_49d9291a87e5bad9619b445549a7b75780f78c462cfc53fa332b81f8a6d062bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400511c6(int param_1,int param_2,int *param_3)

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
  iVar4 = FUN_ram_4004a4fe(&iStack_b0,&iStack_c0,*(undefined4 *)(param_1 + 8));
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
      FUN_ram_4005464e(param_1,&piStack_6c);
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
        iVar10 = FUN_ram_4005a952(iVar14);
        FUN_ram_40052fc0(auStack_90,&iStack_c0,iVar13,0);
        puStack_c8 = auStack_90;
      }
      iStack_a0 = iStack_b0;
      iStack_98 = iStack_a8;
      bStack_58 = 0xff;
      piStack_6c = &iStack_a0;
      iStack_54 = iVar10;
      piStack_4c = &iStack_a0;
      piVar5 = (int *)FUN_ram_40051686(param_2 + 0x24,iVar3,iVar16);
      iVar3 = 0;
      if ((piVar5 != (int *)0x0) && (uVar9 == 2)) {
        iStack_68 = *piVar5 + (iStack_b0 - iStack_c0) * 3;
        for (uVar8 = 0; uVar8 < *(byte *)(param_2 + 0x2e); uVar8 = uVar8 + 1) {
          if (*(char *)(param_2 + 0x27 + uVar8 * 5) != -1) {
            iVar3 = piVar5[1] + (iStack_b0 - iStack_c0);
            goto LAB_ram_4005134a;
          }
        }
        iVar3 = 0;
LAB_ram_4005134a:
        uStack_60 = 0xf;
        piStack_5c = &iStack_a0;
      }
      for (iVar16 = 0; iVar16 < iVar13; iVar16 = iVar16 + 1) {
        iVar7 = iStack_bc + iVar16;
        iVar17 = iStack_b4 - iVar16;
        if ((iStack_ac <= iVar7) || (iVar17 <= iStack_a4)) {
          thunk_FUN_ram_40004f92(iVar10,uVar15,iVar14);
          iVar6 = FUN_ram_40052cb0(&puStack_c8,iVar10,iStack_a0,iVar7,iVar14);
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
              FUN_ram_4000303c(&uStack_57,*piVar5 + iVar7 * 3,3);
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
            FUN_ram_4005464e(param_1,&piStack_6c);
          }
          if (iVar17 <= iStack_a4) {
            iStack_9c = iVar17;
            iStack_94 = iVar17;
            if (uVar9 == 1) {
              iVar17 = iVar17 - iStack_bc;
              FUN_ram_4000303c(&uStack_57,*piVar5 + iVar17 * 3,3);
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
            FUN_ram_4005464e(param_1,&piStack_6c);
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
        FUN_ram_4005464e(param_1,&piStack_6c);
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
            FUN_ram_4000303c(&uStack_57,*piVar5 + iVar14 * 3,3);
            bStack_58 = *(byte *)(piVar5[1] + iVar14);
            if (uVar15 < 0xfd) {
              bStack_58 = (byte)(bStack_58 * uVar15 >> 8);
            }
          }
          FUN_ram_4005464e(param_1,&piStack_6c);
        }
      }
      if (iVar10 != 0) {
        FUN_ram_4005a988(iVar10);
        FUN_ram_40052d04(auStack_90);
      }
      if (piVar5 != (int *)0x0) {
        thunk_FUN_ram_4005a988(piVar5);
      }
    }
  }
  return;
}


/* NanoCore 1.12, address 0x40051550.
 * REA evidence: ev_dbdbe6431b4101a94a6d33870678fe5752a142d7a33a59655b13490cad4e9d11
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40051550(undefined1 *param_1,int param_2,int param_3,undefined1 *param_4,
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


/* NanoCore 1.12, address 0x40051686.
 * REA evidence: ev_bd730ea5d2f84c646262d661441eef6c98d36961f931b522ba47253b12b9900c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int * FUN_ram_40051686(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  
  if ((*(byte *)(param_1 + 0xb) & 7) != 0) {
    if ((*(byte *)(param_1 + 0xb) & 7) != 2) {
      param_2 = param_3;
    }
    uVar1 = (param_2 + 1) * 3 & 0xfffffffc;
    piVar2 = (int *)FUN_ram_4005a952((param_2 + 3U & 0xfffffffc) + 0xc + uVar1);
    if (piVar2 != (int *)0x0) {
      piVar2[1] = uVar1 + 0xc + (int)piVar2;
      *piVar2 = (int)(piVar2 + 3);
      piVar2[2] = param_2;
      for (uVar1 = 0; uVar1 < (uint)piVar2[2]; uVar1 = uVar1 + 1) {
        FUN_ram_40051550(param_1,piVar2[2],uVar1,*piVar2 + uVar1 * 3,piVar2[1] + uVar1);
      }
      return piVar2;
    }
  }
  return (int *)0x0;
}


/* NanoCore 1.12, address 0x40051704.
 * REA evidence: ev_cccb6555dc0634c3626b84a35e0c5912738c81d227578f30a95ea47918f8ad63
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_4005a988(undefined1 *param_1)

{
  if ((param_1 != &DAT_ram_30080d44) && (param_1 != (undefined1 *)0x0)) {
    FUN_ram_4005aa48();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40051708.
 * REA evidence: ev_fb07d909ad5e7fa0b10d6c036470b7a2ce7c25917b258bea473f5883599e8e89
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40051708(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4004adf8();
  return (iVar1 + 7U & 0x7ff) >> 3;
}


/* NanoCore 1.12, address 0x4005171c.
 * REA evidence: ev_8a9105812db1da8e4cfbad66c750ed10b6fcbf791a52e6a6d0c0f7ca93bd3381
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005171c(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5,
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
  uint uVar15;
  byte *pbVar16;
  int iVar17;
  byte *pbVar18;
  byte *pbVar19;
  int iVar20;
  byte *pbVar21;
  int iVar22;
  uint uVar23;
  char cVar24;
  uint uVar25;
  uint uVar26;
  byte *pbVar27;
  uint uVar28;
  int *piVar29;
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
  uVar26 = (uint)uVar6;
  iVar22 = *(int *)(param_2 + 100);
  pbVar27 = *(byte **)(iVar9 + 0x10);
  cVar1 = *(char *)(iVar9 + 1);
  thunk_FUN_ram_40004f92(&piStack_6c,0,0x2c);
  uStack_58 = *(undefined1 *)(param_2 + 0x4c);
  bStack_44 = (byte)((uint)(*(int *)(param_2 + 0x4c) << 0x14) >> 0x1c);
  uStack_64 = uVar26;
  if (bVar7) {
LAB_ram_400518b6:
    FUN_ram_4000303c(&iStack_8c,param_6,0x10);
    piStack_6c = &iStack_8c;
    iVar9 = *param_5;
    iVar22 = param_5[2];
    iVar17 = (param_5[3] - param_5[1]) + 1;
    uVar23 = (iStack_84 - iStack_8c) + 1;
    uVar25 = (iStack_80 - iStack_88) + 1;
    cVar24 = cVar1;
    if (bVar7) {
      if ((cVar1 - 0xfU & 0xfd) == 0) {
        cVar24 = '\x10';
      }
      else if (cVar1 == '\x12') {
        cVar24 = '\x14';
      }
    }
    iVar11 = FUN_ram_40051708(cVar24);
    if (cVar24 == '\x14') {
      uVar28 = uVar23 * 3;
    }
    else {
      iVar12 = FUN_ram_40051708(cVar24);
      uVar28 = iVar12 * uVar23;
    }
    FUN_ram_400498be();
    iVar12 = FUN_ram_4004d2d4();
    FUN_ram_400498be();
    FUN_ram_4004d362();
    iVar13 = FUN_ram_40051708();
    if (uVar28 == 0) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (uint)(iVar13 * iVar12 * 4) / uVar28;
    }
    if ((int)uVar25 < (int)uVar10) {
      uVar10 = uVar25;
    }
    pbVar14 = (byte *)FUN_ram_4005a952(uVar10 * uVar28);
    iVar12 = iStack_80;
    uVar25 = uVar23 * 2;
    iStack_80 = iStack_88 + uVar10 + -1;
    piStack_5c = &iStack_8c;
    pbStack_68 = pbVar14;
    if (cVar24 == '\x14') {
      pbStack_54 = pbVar14 + uVar10 * uVar23 * 2;
      piStack_4c = &iStack_8c;
      uStack_50 = 2;
      cStack_60 = '\x12';
      uStack_64 = uVar25;
      uStack_48 = uVar23;
    }
    else {
      cStack_60 = cVar24;
      if (cVar24 == '\x0e') {
        piStack_4c = &iStack_8c;
        uStack_50 = 2;
        pbStack_54 = pbVar14;
        uStack_48 = uVar23;
        FUN_ram_4000303c(auStack_57,param_2 + 0x48,3);
        pbStack_68 = (byte *)0x0;
      }
      else {
        iVar13 = FUN_ram_40051708(cVar24);
        uStack_64 = iVar13 * uVar23;
      }
    }
    while (iStack_88 <= iVar12) {
      iStack_78 = iStack_88;
      iStack_74 = iStack_84;
      iStack_7c = iStack_8c;
      iStack_70 = iStack_80;
      FUN_ram_4004a4e4(&iStack_7c,-*param_5,-param_5[1]);
      if (bVar7) {
        FUN_ram_40053bd2(param_1,&iStack_7c,pbVar27,(iVar22 - iVar9) + 1,iVar17,uVar26,param_2,
                         param_4,cVar1,pbVar14);
      }
      else if (1 < *(byte *)(param_2 + 0x4b)) {
        iVar13 = (iStack_70 - iStack_78) + 1;
        if (cVar24 == '\x14') {
          iVar20 = iStack_78 * (uint)(uVar6 >> 1);
          pbVar16 = pbVar27 + iStack_7c * 2 + iVar20 * 2;
          pbVar18 = pbVar27 + iStack_7c + iVar20 + iVar17 * (uint)(uVar6 >> 1) * 2;
          pbVar19 = pbVar14;
          pbVar21 = pbStack_54;
          for (iVar20 = 0; iVar20 < iVar13; iVar20 = iVar20 + 1) {
            thunk_FUN_ram_4000500c(pbVar19,pbVar16,uVar25);
            thunk_FUN_ram_4000500c(pbVar21,pbVar18,uVar23);
            pbVar16 = pbVar16 + (uVar26 & 0xfffffffe);
            pbVar18 = pbVar18 + (uVar6 >> 1);
            pbVar21 = pbVar21 + uVar23;
            pbVar19 = pbVar19 + uVar25;
          }
        }
        else if (cVar24 != '\x0e') {
          pbVar21 = pbVar27 + iStack_78 * uVar26 + iVar11 * iStack_7c;
          pbVar19 = pbVar14;
          for (iVar20 = 0; iVar20 < iVar13; iVar20 = iVar20 + 1) {
            thunk_FUN_ram_4000500c(pbVar19,pbVar21,uVar23 * iVar11);
            pbVar19 = pbVar19 + uVar23 * iVar11;
            pbVar21 = pbVar21 + uVar26;
          }
        }
      }
      bVar2 = *(byte *)(param_2 + 0x4b);
      uVar28 = (uint)bVar2;
      if (2 < uVar28) {
        bVar3 = *(byte *)(param_2 + 0x48);
        bVar4 = *(byte *)(param_2 + 0x49);
        bVar5 = *(byte *)(param_2 + 0x4a);
        uVar15 = ~uVar28 & 0xff;
        if ((cVar24 - 0x12U & 0xfd) == 0) {
          iVar13 = FUN_ram_4004a4b4(&iStack_8c);
          for (iVar20 = 0; iVar20 < iVar13; iVar20 = iVar20 + 1) {
            uVar8 = *(ushort *)(pbVar14 + iVar20 * 2);
            *(ushort *)(pbVar14 + iVar20 * 2) =
                 ((ushort)((int)((bVar4 >> 2) * uVar28 + ((uVar8 & 0x7ff) >> 5) * uVar15) >> 3) &
                  0x7e0 | ((ushort)(bVar5 >> 3) * (ushort)bVar2 + (uVar8 >> 0xb) * (short)uVar15) *
                          8 & 0xf800) +
                 (short)((bVar3 >> 3) * uVar28 + (uVar8 & 0x1f) * uVar15 >> 8);
          }
        }
        else if (cVar24 != '\x0e') {
          iVar13 = FUN_ram_4004a4b4(&iStack_8c);
          for (pbVar19 = pbVar14; (uint)((int)pbVar19 - (int)pbVar14) < (uint)(iVar11 * iVar13);
              pbVar19 = pbVar19 + iVar11) {
            *pbVar19 = (byte)(uVar28 * bVar3 + *pbVar19 * uVar15 >> 8);
            pbVar19[1] = (byte)(uVar28 * bVar4 + pbVar19[1] * uVar15 >> 8);
            pbVar19[2] = (byte)(uVar28 * bVar5 + pbVar19[2] * uVar15 >> 8);
          }
        }
      }
      FUN_ram_4005464e(param_1,&piStack_6c);
      iStack_88 = iStack_80 + 1;
      iStack_80 = iStack_88 + uVar10 + -1;
      if ((iVar12 < iStack_80) && (iStack_80 = iVar12, cVar24 == '\x14')) {
        pbStack_54 = pbVar14 + ((iVar12 - iStack_88) + 1) * uVar23 * 2;
      }
    }
    FUN_ram_4005a988(pbVar14);
  }
  else {
    piStack_6c = param_5;
    pbStack_68 = pbVar27;
    if (iVar22 == 0) {
      if (cVar1 == '\x0e') {
        iVar9 = FUN_ram_4004a4fe(&iStack_7c,param_5,*(undefined4 *)(param_1 + 8));
        if (iVar9 == 0) {
          return;
        }
        pbStack_68 = (byte *)0x0;
        pbStack_54 = pbVar27;
        piStack_4c = param_5;
        uStack_48 = uVar26;
        FUN_ram_4000303c(auStack_57,param_2 + 0x48,3);
        uStack_50 = 2;
      }
      else if (cVar1 == '\x14') {
        if (2 < *(byte *)(param_2 + 0x4b)) goto LAB_ram_400518b6;
        uStack_48 = (uint)(uVar6 >> 1);
        uStack_50 = 2;
        if (*(ushort *)(iVar9 + 4) == 0) {
          uVar26 = 0xffffffff;
        }
        else {
          uVar26 = (((param_5[2] - *param_5) + 1) * uVar26) / (uint)*(ushort *)(iVar9 + 4);
        }
        pbStack_54 = pbVar27 + uVar26 * ((param_5[3] - param_5[1]) + 1);
        cStack_60 = '\x12';
        piStack_5c = param_5;
        piStack_4c = param_5;
      }
      else {
        cStack_60 = cVar1;
        piStack_5c = param_5;
        if (2 < *(byte *)(param_2 + 0x4b)) goto LAB_ram_400518b6;
      }
    }
    else {
      if (2 < *(byte *)(param_2 + 0x4b)) goto LAB_ram_400518b6;
      iVar9 = *(int *)(param_2 + 100);
      pbStack_54 = *(byte **)(iVar9 + 0x10);
      uStack_48 = (uint)*(ushort *)(iVar9 + 8);
      piVar29 = param_5;
      if (-2 < *(int *)(param_2 + 0x5c) - *(int *)(param_2 + 0x54)) {
        piVar29 = (int *)(param_2 + 0x54);
      }
      iStack_74 = *(ushort *)(iVar9 + 4) - 1;
      iStack_70 = *(ushort *)(iVar9 + 6) - 1;
      iStack_7c = 0;
      iStack_78 = 0;
      cStack_60 = cVar1;
      piStack_5c = param_5;
      FUN_ram_4004a8d0(piVar29,&iStack_7c,9,0,0);
      uStack_50 = 2;
      piStack_4c = &iStack_7c;
    }
    FUN_ram_4005464e(param_1,&piStack_6c);
  }
  return;
}


/* NanoCore 1.12, address 0x40051c4a.
 * REA evidence: ev_ab152bf7c39b1808a93f26cf6a65ad3ff7b7fcfdc64876b42dd24358290fa979
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40051c4a(undefined4 param_1,int param_2)

{
  if ((*(byte *)(param_2 + 0x4d) & 0x20) == 0) {
    FUN_ram_4004e6b8();
    return;
  }
  FUN_ram_4004e392();
  return;
}


/* NanoCore 1.12, address 0x40051c64.
 * REA evidence: ev_7ad1fe378a9cd6c595c3a90baf4419a4871be909cea1f4bb1abce9fe4f479dce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40051c64(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_78 [28];
  int iStack_5c;
  
  iVar1 = **(int **)(param_2 + 0x1c);
  if (iVar1 != 0) {
    FUN_ram_4000303c(auStack_78,param_2,0x68);
    iStack_5c = iVar1;
    FUN_ram_40051c4a(param_1,auStack_78,param_3);
  }
  return;
}


/* NanoCore 1.12, address 0x40051c9e.
 * REA evidence: ev_808cedcbdf4da27473e8734360ffbdb3af53c50e57dc6b0f8c9caf822b7f84ef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40051c9e(undefined4 param_1,int *param_2,int param_3,int param_4)

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
        FUN_ram_4004ef58(aiStack_4c);
        uStack_24 = *(undefined1 *)((int)param_2 + 0x17);
        piStack_2c = (int *)CONCAT13(piStack_2c._3_1_,(int3)param_2[5]);
        uStack_28 = 1;
        FUN_ram_4005001a(param_1,aiStack_4c,param_2[3]);
        goto LAB_ram_40051d32;
      }
    }
    else if ((bVar1 - 4 & 0xfb) != 0) goto LAB_ram_40051d32;
    FUN_ram_4000303c(aiStack_5c,param_2[2],0x10);
    iStack_54 = FUN_ram_4004dace((iStack_54 - aiStack_5c[0]) + 1,0xe);
    iStack_54 = aiStack_5c[0] + -1 + iStack_54;
    thunk_FUN_ram_40004f92(aiStack_4c,0,0x2c);
    FUN_ram_4000303c(auStack_37,param_2 + 5,3);
    uStack_38 = *(undefined1 *)((int)param_2 + 0x17);
    uStack_34 = *(undefined4 *)(*param_2 + 0x10);
    uStack_28 = (uint)*(ushort *)(*param_2 + 8);
    aiStack_4c[0] = param_2[2];
    uStack_30 = 2;
    piStack_2c = aiStack_5c;
    FUN_ram_4005464e(param_1,aiStack_4c);
  }
LAB_ram_40051d32:
  if ((param_3 != 0) && (param_4 != 0)) {
    FUN_ram_400511c6(param_1,param_3,param_4);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40051d94.
 * REA evidence: ev_1b939104172b01a51f7d8310b3f37a7f3a192468ada3ad976266f63e2f0c047f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40051d94(undefined4 param_1,int param_2)

{
  if (2 < *(byte *)(param_2 + 0x48)) {
    FUN_ram_4004e8da();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40051dac.
 * REA evidence: ev_932802d5161fbb57b6a36aa3358f42f04c203e0157b801d5f289381e0a123fb7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40051dd8) */

void FUN_ram_40051dac(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  undefined1 *puStack_160;
  undefined1 *puStack_15c;
  int *piStack_158;
  int **ppiStack_154;
  undefined4 uStack_150;
  int *apiStack_14c [5];
  undefined1 uStack_138;
  undefined1 auStack_137 [3];
  int iStack_134;
  undefined1 uStack_130;
  int *piStack_12c;
  undefined1 auStack_120 [56];
  undefined1 auStack_e8 [56];
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int *apiStack_78 [5];
  undefined1 uStack_64;
  undefined1 auStack_63 [3];
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  if ((*(int *)(param_2 + 0x30) == 0) || (*(byte *)(param_2 + 0x3c) < 3)) {
    return;
  }
  iStack_178 = *(int *)(param_2 + 0x1c);
  iVar11 = *(int *)(param_2 + 0x24);
  iVar4 = *(int *)(param_2 + 0x20);
  iStack_174 = *(int *)(param_2 + 0x28);
  if ((iStack_178 == iVar11) && (iStack_174 == iVar4)) {
    return;
  }
  iVar6 = *(int *)(param_2 + 0x30) / 2;
  iStack_180 = iVar11;
  if (iStack_178 <= iVar11) {
    iStack_180 = iStack_178;
  }
  iStack_180 = iStack_180 - iVar6;
  if (iStack_178 < iVar11) {
    iStack_178 = iVar11;
  }
  iStack_178 = iStack_178 + iVar6;
  iStack_17c = iVar4;
  if (iStack_174 <= iVar4) {
    iStack_17c = iStack_174;
  }
  iStack_17c = iStack_17c - iVar6;
  if (iStack_174 < iVar4) {
    iStack_174 = iVar4;
  }
  iStack_174 = iStack_174 + iVar6;
  iVar4 = FUN_ram_4004a4fe(&iStack_180,&iStack_180,*(undefined4 *)(param_1 + 8));
  if (iVar4 == 0) {
    return;
  }
  iVar12 = *(int *)(param_2 + 0x20);
  iVar6 = *(int *)(param_2 + 0x28);
  iVar11 = *(int *)(param_2 + 0x1c);
  iVar4 = *(int *)(param_2 + 0x24);
  iVar9 = *(int *)(param_2 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 8);
  if (iVar12 == iVar6) {
    iStack_b0 = iVar4;
    if (iVar11 <= iVar4) {
      iStack_b0 = iVar11;
    }
    iStack_a4 = (int)(iVar9 - 1U) >> 1;
    if (iVar4 <= iVar11) {
      iVar4 = iVar11;
    }
    iStack_a8 = iVar4 + -1;
    iStack_ac = iVar12 - ((iVar9 - 1U & 1) + iStack_a4);
    iStack_a4 = iStack_a4 + iVar12;
    iVar4 = FUN_ram_4004a4fe(&iStack_b0,&iStack_b0,uVar5);
    if (iVar4 == 0) goto LAB_ram_40051edc;
    bVar1 = false;
    if (*(int *)(param_2 + 0x38) != 0) {
      bVar1 = *(int *)(param_2 + 0x34) != 0;
    }
    thunk_FUN_ram_40004f92(apiStack_78,0,0x2c);
    apiStack_78[0] = &iStack_b0;
    FUN_ram_4000303c(auStack_63,param_2 + 0x2c,3);
    iVar4 = iStack_a4;
    uStack_64 = *(undefined1 *)(param_2 + 0x3c);
    if (bVar1) {
      iStack_a4 = iStack_ac;
      iVar6 = (iStack_a8 - iStack_b0) + 1;
      iVar9 = *(int *)(param_2 + 0x38) + *(int *)(param_2 + 0x34);
      iVar11 = iStack_b0;
      if (iVar9 != 0) {
        iVar11 = iStack_b0 % iVar9;
      }
      iVar12 = FUN_ram_4005a952(iVar6);
      uStack_58 = &iStack_b0;
      uStack_5c = CONCAT31(uStack_5c._1_3_,2);
      iStack_60 = iVar12;
      for (iVar9 = iStack_ac; iVar9 <= iVar4; iVar9 = iVar9 + 1) {
        thunk_FUN_ram_40004f92(iVar12,0xff,iVar6);
        iVar8 = iVar11;
        for (iVar7 = 0; iVar7 < iVar6; iVar7 = iVar7 + 1) {
          iVar10 = *(int *)(param_2 + 0x34);
          if (iVar10 < iVar8) {
            if (iVar10 + *(int *)(param_2 + 0x38) < iVar8) {
              iVar8 = 0;
            }
            else {
              *(undefined1 *)(iVar12 + iVar7) = 0;
            }
          }
          else {
            iVar10 = (iVar10 - iVar8) * 0x10000 >> 0x10;
            iVar7 = iVar7 + iVar10;
            iVar8 = iVar8 + iVar10;
          }
          uStack_5c = CONCAT31(uStack_5c._1_3_,2);
          iVar8 = iVar8 + 1;
        }
        FUN_ram_4005464e(param_1,apiStack_78);
        iStack_ac = iStack_ac + 1;
        iStack_a4 = iStack_a4 + 1;
      }
LAB_ram_40051fea:
      FUN_ram_4005a988(iVar12);
      goto LAB_ram_40051edc;
    }
  }
  else {
    iVar8 = iVar6;
    if (iVar12 <= iVar6) {
      iVar8 = iVar12;
    }
    iVar7 = iVar6;
    if (iVar6 <= iVar12) {
      iVar7 = iVar12;
    }
    if (iVar11 != iVar4) {
      iVar10 = iVar4;
      iVar13 = iVar12;
      if (iVar6 <= iVar12) {
        iVar10 = iVar11;
        iVar11 = iVar4;
        iVar13 = iVar6;
        iVar6 = iVar12;
      }
      uVar2 = iVar10 - iVar11;
      uVar14 = iVar6 - iVar13;
      iVar4 = ((int)uVar2 >> 0x1f ^ uVar2) - ((int)uVar2 >> 0x1f);
      iVar12 = ((int)uVar14 >> 0x1f ^ uVar14) - ((int)uVar14 >> 0x1f);
      if (iVar12 < iVar4) {
        if (iVar4 == 0) {
          iVar3 = -1;
        }
        else {
          iVar3 = (iVar12 * 0x20) / iVar4;
        }
      }
      else if (iVar12 == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = (iVar4 * 0x20) / iVar12;
      }
      iStack_170 = iVar11;
      if (iVar10 <= iVar11) {
        iStack_170 = iVar10;
      }
      iVar9 = (uint)(byte)(&DAT_ram_4009e890)[iVar3] * iVar9 + 0x3f;
      uVar15 = iVar9 >> 7;
      iStack_170 = iStack_170 - uVar15;
      iStack_164 = iVar7 + uVar15;
      iStack_168 = iVar11;
      if (iVar11 <= iVar10) {
        iStack_168 = iVar10;
      }
      iStack_168 = iStack_168 + uVar15;
      iStack_16c = iVar8 - uVar15;
      iVar8 = FUN_ram_4004a4fe(&iStack_170,&iStack_170,uVar5);
      if (iVar8 != 0) {
        iVar9 = iVar9 >> 8;
        piStack_158 = (int *)0x0;
        ppiStack_154 = (int **)0x0;
        uStack_150 = 0;
        iVar8 = (uVar15 & 1) + iVar9;
        puStack_160 = auStack_120;
        puStack_15c = auStack_e8;
        if (iVar12 < iVar4) {
          iVar12 = iVar13 - iVar9;
          iVar9 = iVar6 - iVar9;
          iVar4 = iVar11;
          iVar7 = iVar10;
          if ((int)uVar2 < 1) {
            FUN_ram_40052d8a(auStack_120,iVar11,iVar13 + iVar8,iVar10,iVar6 + iVar8,0);
          }
          else {
            FUN_ram_40052d8a(auStack_120,iVar11,iVar12,iVar10,iVar9,0);
            iVar12 = iVar13 + iVar8;
            iVar9 = iVar6 + iVar8;
          }
        }
        else {
          FUN_ram_40052d8a(auStack_120,iVar8 + iVar11,iVar13,iVar10 + iVar8,iVar6,0);
          iVar4 = iVar11 - iVar9;
          iVar12 = iVar13;
          iVar7 = iVar10 - iVar9;
          iVar9 = iVar6;
        }
        FUN_ram_40052d8a(auStack_e8,iVar4,iVar12,iVar7,iVar9,1);
        if ((*(byte *)(param_2 + 0x3d) & 0x10) == 0) {
          FUN_ram_40052d8a(&iStack_b0,iVar11,iVar13,iVar11 - uVar14,uVar2 + iVar13,3);
          FUN_ram_40052d8a(apiStack_78,iVar10,iVar6,iVar10 - uVar14,uVar2 + iVar6,2);
          piStack_158 = &iStack_b0;
          ppiStack_154 = apiStack_78;
        }
        iVar4 = iStack_168 - iStack_170;
        FUN_ram_400498be();
        uVar2 = FUN_ram_4004d2d4();
        iVar4 = iVar4 + 1;
        uVar14 = FUN_ram_4004a4b4(&iStack_170);
        if (uVar14 < uVar2) {
          uVar2 = FUN_ram_4004a4b4(&iStack_170);
        }
        iVar12 = FUN_ram_4005a952(uVar2);
        iVar6 = iStack_164;
        iStack_164 = iStack_16c;
        thunk_FUN_ram_40004f92(iVar12,0xff,uVar2);
        thunk_FUN_ram_40004f92(apiStack_14c,0,0x2c);
        apiStack_14c[0] = &iStack_170;
        FUN_ram_4000303c(auStack_137,param_2 + 0x2c,3);
        uStack_138 = *(undefined1 *)(param_2 + 0x3c);
        piStack_12c = &iStack_170;
        iVar11 = 0;
        iStack_134 = iVar12;
        for (iVar9 = iStack_16c; iVar9 <= iVar6; iVar9 = iVar9 + 1) {
          iVar8 = FUN_ram_40052cb0(&puStack_160,iVar12 + iVar11,iStack_170,iVar9,iVar4);
          uStack_130 = (undefined1)iVar8;
          if (iVar8 == 0) {
            thunk_FUN_ram_40004f92(iVar12 + iVar11,0,iVar4);
          }
          iVar11 = iVar11 + iVar4;
          if ((uint)(iVar4 + iVar11) < uVar2) {
            iStack_164 = iStack_164 + 1;
          }
          else {
            uStack_130 = 2;
            FUN_ram_4005464e(param_1,apiStack_14c);
            iStack_16c = iStack_164 + 1;
            iVar11 = 0;
            iStack_164 = iStack_16c;
            thunk_FUN_ram_40004f92(iVar12,0xff,uVar2);
          }
        }
        if (iStack_16c != iStack_164) {
          iStack_164 = iStack_164 + -1;
          uStack_130 = 2;
          FUN_ram_4005464e(param_1,apiStack_14c);
        }
        FUN_ram_4005a988(iVar12);
        FUN_ram_40052d04(auStack_120);
        FUN_ram_40052d04(auStack_e8);
        if ((*(byte *)(param_2 + 0x3d) & 0x10) == 0) {
          FUN_ram_40052d04(&iStack_b0);
          FUN_ram_40052d04(apiStack_78);
        }
      }
      goto LAB_ram_40051edc;
    }
    iStack_a8 = (int)(iVar9 - 1U) >> 1;
    iStack_a4 = iVar7 + -1;
    iStack_b0 = iVar11 - ((iVar9 - 1U & 1) + iStack_a8);
    iStack_a8 = iStack_a8 + iVar11;
    iStack_ac = iVar8;
    iVar4 = FUN_ram_4004a4fe(&iStack_b0,&iStack_b0,uVar5);
    if (iVar4 == 0) goto LAB_ram_40051edc;
    bVar1 = false;
    if (*(int *)(param_2 + 0x38) != 0) {
      bVar1 = *(int *)(param_2 + 0x34) != 0;
    }
    thunk_FUN_ram_40004f92(apiStack_78,0,0x2c);
    apiStack_78[0] = &iStack_b0;
    FUN_ram_4000303c(auStack_63,param_2 + 0x2c,3);
    iVar4 = iStack_a4;
    uStack_64 = *(undefined1 *)(param_2 + 0x3c);
    if (bVar1) {
      iVar8 = (iStack_a8 - iStack_b0) + 1;
      iStack_a4 = iStack_ac;
      iVar12 = FUN_ram_4005a952(iVar8);
      uStack_58 = &iStack_b0;
      uStack_5c = CONCAT31(uStack_5c._1_3_,2);
      iVar9 = *(int *)(param_2 + 0x38) + *(int *)(param_2 + 0x34);
      iVar11 = iStack_ac;
      iVar6 = iStack_ac;
      iStack_60 = iVar12;
      if (iVar9 != 0) {
        iVar11 = iStack_ac % iVar9;
      }
      for (; iVar6 <= iVar4; iVar6 = iVar6 + 1) {
        thunk_FUN_ram_40004f92(iVar12,0xff,iVar8);
        uStack_5c = CONCAT31(uStack_5c._1_3_,iVar11 <= *(int *)(param_2 + 0x34));
        if (*(int *)(param_2 + 0x34) + *(int *)(param_2 + 0x38) <= iVar11) {
          iVar11 = 0;
        }
        FUN_ram_4005464e(param_1,apiStack_78);
        iStack_ac = iStack_ac + 1;
        iStack_a4 = iStack_a4 + 1;
        iVar11 = iVar11 + 1;
      }
      goto LAB_ram_40051fea;
    }
  }
  FUN_ram_4005464e(param_1,apiStack_78);
LAB_ram_40051edc:
  if ((*(uint *)(param_2 + 0x3c) & 0xc00) != 0) {
    FUN_ram_4004ef32(apiStack_78);
    FUN_ram_4000303c((int)&uStack_58 + 1,param_2 + 0x2c,3);
    uStack_5c = 0x7fff;
    uStack_58 = (int *)CONCAT31(uStack_58._1_3_,*(undefined1 *)(param_2 + 0x3c));
    iVar4 = (int)*(uint *)(param_2 + 0x30) >> 1;
    uVar2 = ~*(uint *)(param_2 + 0x30) & 1;
    if ((*(byte *)(param_2 + 0x3d) & 4) != 0) {
      iStack_b0 = *(int *)(param_2 + 0x1c) - iVar4;
      iStack_a8 = (*(int *)(param_2 + 0x1c) + iVar4) - uVar2;
      iStack_ac = *(int *)(param_2 + 0x20) - iVar4;
      iStack_a4 = (*(int *)(param_2 + 0x20) + iVar4) - uVar2;
      FUN_ram_400511c6(param_1,apiStack_78,&iStack_b0);
    }
    if ((*(byte *)(param_2 + 0x3d) & 8) != 0) {
      iStack_b0 = *(int *)(param_2 + 0x24) - iVar4;
      iStack_a8 = (*(int *)(param_2 + 0x24) + iVar4) - uVar2;
      iStack_ac = *(int *)(param_2 + 0x28) - iVar4;
      iStack_a4 = (*(int *)(param_2 + 0x28) + iVar4) - uVar2;
      FUN_ram_400511c6(param_1,apiStack_78,&iStack_b0);
    }
  }
  return;
}


