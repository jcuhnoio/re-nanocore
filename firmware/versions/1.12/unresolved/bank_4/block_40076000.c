/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40076000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40076682.
 * REA evidence: ev_d6dae618bbe23c014ad39dfda4444c8569ed02b574803f0e7994b79c81921048
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40076682(int param_1)

{
  if (param_1 != 0) {
    memset(param_1,0,0x5240);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40076694.
 * REA evidence: ev_e04e406d51ebc2d2ad7f428eefe47d0ec6f90c2e8156190d623e820799f73afd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40076694(undefined4 *param_1,undefined8 *param_2,uint param_3)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  float *pfVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined2 uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  FUN_ram_400002f4();
  param_1[0x1486] = DAT_ram_4009f290;
  *(undefined2 *)((int)param_1 + 0x521e) = 0;
  FUN_ram_400002fa();
  if ((param_2 == (undefined8 *)0x0) || (param_3 == 0)) {
    return;
  }
  if (param_3 < 0x401) {
    uVar11 = param_3 & 0xffff;
    if (param_3 < 0x81) {
      uVar16 = 0;
      uVar18 = 0;
      uVar14 = 0;
      uVar17 = uVar11;
    }
    else {
      uVar17 = param_3 - 1;
      uVar18 = param_3 - 0x80;
      uVar14 = uVar17 >> 7;
      param_3 = 0x80;
      uVar16 = (undefined2)(uVar17 * 0x200 >> 0x10);
      uVar17 = 0x80;
    }
  }
  else {
    uVar16 = 7;
    uVar18 = 0x380;
    uVar11 = 0x400;
    uVar14 = 7;
    param_3 = 0x80;
    uVar17 = 0x80;
  }
  memset(param_1 + 0x1306,0,0x200);
  fVar1 = DAT_ram_400a09c8;
  puVar7 = (ulonglong *)(param_1 + 0x1385);
  puVar9 = param_2;
  do {
    uVar20 = *puVar9;
    puVar9 = (undefined8 *)((int)puVar9 + 4);
    *puVar7 = (ulonglong)(uint)((float)uVar20 * fVar1);
    puVar7 = (ulonglong *)((int)puVar7 + -4);
  } while ((undefined8 *)((int)param_2 + param_3 * 4) != puVar9);
  puVar19 = param_1 + 6;
  memset(puVar19,0,0x1c00);
  puVar5 = PTR_DAT_ram_400a3fd0_ram_400a43e4;
  uVar4 = DAT_ram_400a43dc;
  puVar3 = PTR_DAT_ram_400a3a30_ram_400a43d8;
  puVar2 = PTR_DAT_ram_400a3bd0_ram_400a43d4;
  uVar6 = DAT_ram_400a43d0;
  iVar12 = 0;
  if (uVar14 != 0) {
    param_1[4] = DAT_ram_400a43e0;
    *param_1 = uVar6;
    param_1[5] = puVar5;
    param_1[1] = puVar2;
    param_1[2] = puVar3;
    param_1[3] = uVar4;
    uVar6 = FUN_ram_400002f4();
    if ((*(char *)(gp + -0x20) == '\0') && (DAT_ram_30080fb0 == '\0')) {
      DAT_ram_30080fb0 = '\x01';
      FUN_ram_400002fa();
      FUN_ram_40075638(param_1);
    }
    else {
      FUN_ram_400002fa(uVar6);
    }
    puVar15 = param_1 + 0x1106;
    puVar13 = puVar19 + uVar14 * 0x100;
    do {
      memset(puVar15,0,0x400);
      uVar14 = uVar18;
      if (0x80 < uVar18) {
        uVar14 = 0x80;
      }
      if (uVar18 == 0) {
        FUN_ram_40075ec4(param_1,puVar15,puVar19,0);
        iVar12 = 1;
        goto LAB_ram_4007675c;
      }
      puVar9 = (undefined8 *)((int)param_2 + param_3 * 4);
      uVar10 = 0;
      pfVar8 = (float *)(param_1 + 0x1106);
      do {
        uVar20 = *puVar9;
        uVar10 = uVar10 + 1;
        puVar9 = (undefined8 *)((int)puVar9 + 4);
        *pfVar8 = (float)uVar20 * fVar1;
        pfVar8 = pfVar8 + 1;
      } while (uVar10 < uVar14);
      iVar12 = uVar14 - 1;
      if (uVar18 == 0) {
        iVar12 = 0;
      }
      uVar18 = uVar18 - uVar14;
      param_3 = param_3 + 1 + iVar12;
      FUN_ram_40075ec4(param_1,puVar15,puVar19,0);
    } while ((uVar18 != 0) && (puVar19 = puVar19 + 0x100, puVar19 != puVar13));
    iVar12 = 1;
  }
LAB_ram_4007675c:
  *(undefined2 *)(param_1 + 0x1487) = 0;
  *(undefined2 *)((int)param_1 + 0x522e) = 0;
  memset(param_1 + 0xe86,0,0x200);
  memset(param_1 + 0xe06,0,0x200);
  memset(param_1 + 0x706,0,0x1c00);
  memset(param_1 + 0x1206,0,0x400);
  memset(param_1 + 0x1386,0,0x400);
  param_1[0x1488] = DAT_ram_4009f290;
  param_1[0x1489] = 0;
  param_1[0x148a] = iVar12 << 0x17 | iVar12 << 7;
  FUN_ram_400002f4();
  *(undefined2 *)((int)param_1 + 0x521e) = uVar16;
  param_1[0x1486] = uVar17 << 0x10 | uVar11;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x40076938.
 * REA evidence: ev_bfbcf673e6bfb83f00b263140967d497d4e1b11cb06a8bf03a4988ce1da55f88
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40076938(int param_1,int param_2)

{
  if (param_1 != 0) {
    *(bool *)(param_1 + 0x522c) = param_2 != 0;
  }
  return;
}


/* NanoCore 1.12, address 0x40076948.
 * REA evidence: ev_017b0f89f331b21da5025851b4d02610e933c3f54ef4d489ad03be40cf1f2d4b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40076948(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_ram_400002f4();
    *(bool *)(param_1 + 0x522d) = param_2 != 0;
    *(undefined2 *)(param_1 + 0x522e) = 0;
    *(undefined4 *)(param_1 + 0x5230) = 0;
    *(undefined4 *)(param_1 + 0x5234) = 0;
    *(undefined4 *)(param_1 + 0x5238) = 0;
    *(undefined4 *)(param_1 + 0x523c) = 0;
    FUN_ram_400002fa();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40076988.
 * REA evidence: ev_515cd802dd0d25e782947cd6c6157489b8b490d4a33893b559de661cf47a383a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40076988(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ushort uVar6;
  float *pfVar7;
  undefined8 *puVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  
  if (param_1 != 0) {
    uVar3 = 0;
    if ((((*(char *)(param_1 + 0x522d) != '\0') && (*(char *)(param_1 + 0x522e) != '\0')) &&
        (*(char *)(param_1 + 0x522f) == '\0')) &&
       ((*(short *)(param_1 + 0x5218) != 0 && (*(char *)(param_1 + 0x522c) != '\0')))) {
      iVar2 = param_1 + 0x4418;
      FUN_ram_4000303c(iVar2,param_1 + 0x3a18,0x200);
      memset(param_1 + 0x4618,0,0x200);
      FUN_ram_40075ec4(param_1,iVar2,param_1 + 0x4018,0);
      FUN_ram_4000303c((uint)*(ushort *)(param_1 + 0x5220) * 0x400 + 0x1c18 + param_1,
                       param_1 + 0x4018,0x400);
      uVar11 = (uint)*(ushort *)(param_1 + 0x521e);
      uVar4 = *(ushort *)(param_1 + 0x5222) + 1;
      if (uVar11 < uVar4) {
        uVar4 = uVar11;
      }
      if (uVar4 == 7) {
        FUN_ram_400753d0(param_1);
      }
      else {
        uVar1 = (uint)*(ushort *)(param_1 + 0x5220);
        pfVar9 = (float *)(uVar1 * 0x400 + 0x1c18 + param_1);
        puVar8 = (undefined8 *)(param_1 + 0x20);
        puVar5 = (undefined8 *)(param_1 + 0x418);
        *(float *)(param_1 + 0x3c18) = *pfVar9 * *(float *)(param_1 + 0x18);
        *(float *)(param_1 + 0x3c1c) = pfVar9[1] * *(float *)(param_1 + 0x1c);
        pfVar7 = (float *)(param_1 + 0x3c20);
        do {
          uVar14 = *(undefined8 *)(pfVar9 + 3);
          uVar13 = *puVar8;
          fVar12 = (float)*(undefined8 *)((int)puVar8 + 4);
          puVar8 = puVar8 + 1;
          fVar15 = (float)*(undefined8 *)(pfVar9 + 2);
          pfVar7[1] = fVar15 * fVar12 + (float)uVar14 * (float)uVar13;
          *pfVar7 = fVar15 * (float)uVar13 - (float)uVar14 * fVar12;
          pfVar7 = pfVar7 + 2;
          pfVar9 = pfVar9 + 2;
        } while (puVar5 != puVar8);
        if (1 < uVar4) {
          do {
            if (uVar1 == 0) {
              uVar1 = uVar11;
            }
            uVar1 = uVar1 - 1;
            pfVar10 = (float *)(uVar1 * 0x400 + 0x1c18 + param_1);
            pfVar7 = pfVar10 + 2;
            *(float *)(param_1 + 0x3c18) = *pfVar10 * (float)*puVar5 + *(float *)(param_1 + 0x3c18);
            *(float *)(param_1 + 0x3c1c) =
                 pfVar10[1] * (float)*(undefined8 *)((int)puVar5 + 4) + *(float *)(param_1 + 0x3c1c)
            ;
            pfVar9 = (float *)(param_1 + 0x3c20);
            puVar8 = puVar5;
            do {
              uVar13 = *(undefined8 *)(pfVar7 + 1);
              uVar14 = *(undefined8 *)pfVar7;
              fVar12 = (float)puVar8[1];
              fVar15 = (float)*(undefined8 *)((int)puVar8 + 0xc);
              pfVar7 = pfVar7 + 2;
              pfVar9[1] = (float)*(undefined8 *)(pfVar9 + 1) +
                          (float)uVar14 * fVar15 + (float)uVar13 * fVar12;
              *pfVar9 = (float)*(undefined8 *)pfVar9 +
                        ((float)uVar14 * fVar12 - (float)uVar13 * fVar15);
              pfVar9 = pfVar9 + 2;
              puVar8 = puVar8 + 1;
            } while (pfVar10 + 0x100 != pfVar7);
            puVar5 = puVar5 + 0x80;
          } while ((undefined8 *)(param_1 + 0x18 + uVar4 * 0x400) != puVar5);
        }
      }
      FUN_ram_40075ec4(param_1,param_1 + 0x3c18,iVar2,1);
      pfVar9 = (float *)(param_1 + 0x4018);
      do {
        fVar12 = pfVar9[-0x200];
        pfVar9[-0x200] = pfVar9[0x180];
        pfVar7 = pfVar9 + 1;
        *pfVar9 = pfVar9[0x100] + fVar12;
        pfVar9 = pfVar7;
      } while (pfVar7 != (float *)(param_1 + 0x4218));
      uVar6 = *(short *)(param_1 + 0x5220) + 1;
      *(ushort *)(param_1 + 0x5220) = uVar6;
      if ((uint)*(ushort *)(param_1 + 0x521e) <= (uint)uVar6) {
        *(undefined2 *)(param_1 + 0x5220) = 0;
      }
      uVar4 = *(ushort *)(param_1 + 0x5222) + 1;
      if (uVar4 < *(ushort *)(param_1 + 0x521e)) {
        *(short *)(param_1 + 0x5222) = (short)uVar4;
      }
      *(undefined2 *)(param_1 + 0x522e) = 0x100;
      *(int *)(param_1 + 0x5234) = *(int *)(param_1 + 0x5234) + 1;
      uVar3 = 1;
    }
    return uVar3;
  }
  return 0;
}


/* NanoCore 1.12, address 0x40076bf0.
 * REA evidence: ev_156bb60799bf08c128e9ca55554da1205f48ea15ef704b31f45e1e4019fcdf59
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40076bf0(int param_1,float *param_2,uint param_3)

{
  ushort uVar1;
  float *pfVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  ushort uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fStack_240;
  int iStack_23c;
  int iStack_238;
  float afStack_40 [3];
  
  if (((param_1 == 0) || (param_2 == (float *)0x0)) || (param_3 == 0)) {
    return;
  }
  if (*(short *)(param_1 + 0x5218) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x522c) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x522d) != '\0') {
    if (*(char *)(param_1 + 0x522e) == '\0') {
      if (*(char *)(param_1 + 0x522f) == '\0') goto LAB_ram_40076c60;
    }
    else {
      *(int *)(param_1 + 0x5238) = *(int *)(param_1 + 0x5238) + 1;
      if (*(char *)(param_1 + 0x522f) == '\0') {
        iVar13 = param_1 + 0x4418;
        FUN_ram_4000303c(iVar13,param_1 + 0x3a18,0x200);
        memset(param_1 + 0x4618,0,0x200);
        FUN_ram_40075ec4(param_1,iVar13,param_1 + 0x4018,0);
        FUN_ram_4000303c((uint)*(ushort *)(param_1 + 0x5220) * 0x400 + 0x1c18 + param_1,
                         param_1 + 0x4018,0x400);
        uVar14 = (uint)*(ushort *)(param_1 + 0x521e);
        uVar7 = *(ushort *)(param_1 + 0x5222) + 1;
        if (uVar14 < uVar7) {
          uVar7 = uVar14;
        }
        if (uVar7 == 7) {
          FUN_ram_400753d0(param_1);
        }
        else {
          uVar15 = (uint)*(ushort *)(param_1 + 0x5220);
          pfVar10 = (float *)(uVar15 * 0x400 + 0x1c18 + param_1);
          puVar8 = (undefined8 *)(param_1 + 0x20);
          puVar5 = (undefined8 *)(param_1 + 0x418);
          *(float *)(param_1 + 0x3c18) = (float)*(undefined8 *)pfVar10 * *(float *)(param_1 + 0x18);
          *(float *)(param_1 + 0x3c1c) =
               (float)*(undefined8 *)(pfVar10 + 1) * *(float *)(param_1 + 0x1c);
          pfVar2 = (float *)(param_1 + 0x3c20);
          do {
            fVar16 = pfVar10[3];
            uVar21 = *puVar8;
            fVar19 = pfVar10[2];
            fVar20 = (float)*(undefined8 *)((int)puVar8 + 4);
            puVar8 = puVar8 + 1;
            pfVar2[1] = fVar19 * fVar20 + fVar16 * (float)uVar21;
            *pfVar2 = fVar19 * (float)uVar21 - fVar16 * fVar20;
            pfVar2 = pfVar2 + 2;
            pfVar10 = pfVar10 + 2;
          } while (puVar5 != puVar8);
          if (1 < uVar7) {
            do {
              if (uVar15 == 0) {
                uVar15 = uVar14;
              }
              uVar15 = uVar15 - 1;
              pfVar11 = (float *)(uVar15 * 0x400 + 0x1c18 + param_1);
              pfVar2 = pfVar11 + 2;
              *(float *)(param_1 + 0x3c18) =
                   *pfVar11 * (float)*puVar5 + *(float *)(param_1 + 0x3c18);
              *(float *)(param_1 + 0x3c1c) =
                   pfVar11[1] * (float)*(undefined8 *)((int)puVar5 + 4) +
                   *(float *)(param_1 + 0x3c1c);
              pfVar10 = (float *)(param_1 + 0x3c20);
              puVar8 = puVar5;
              do {
                uVar21 = *(undefined8 *)(pfVar2 + 1);
                uVar17 = *(undefined8 *)pfVar2;
                fVar16 = (float)puVar8[1];
                fVar19 = (float)*(undefined8 *)((int)puVar8 + 0xc);
                pfVar2 = pfVar2 + 2;
                pfVar10[1] = (float)*(undefined8 *)(pfVar10 + 1) +
                             (float)uVar17 * fVar19 + (float)uVar21 * fVar16;
                *pfVar10 = (float)*(undefined8 *)pfVar10 +
                           ((float)uVar17 * fVar16 - (float)uVar21 * fVar19);
                pfVar10 = pfVar10 + 2;
                puVar8 = puVar8 + 1;
              } while (pfVar11 + 0x100 != pfVar2);
              puVar5 = puVar5 + 0x80;
            } while ((undefined8 *)(param_1 + 0x18 + uVar7 * 0x400) != puVar5);
          }
        }
        FUN_ram_40075ec4(param_1,param_1 + 0x3c18,iVar13,1);
        pfVar10 = (float *)(param_1 + 0x4018);
        do {
          fVar16 = pfVar10[-0x200];
          pfVar10[-0x200] = pfVar10[0x180];
          pfVar2 = pfVar10 + 1;
          *pfVar10 = pfVar10[0x100] + fVar16;
          pfVar10 = pfVar2;
        } while ((float *)(param_1 + 0x4218) != pfVar2);
        uVar6 = *(short *)(param_1 + 0x5220) + 1;
        *(ushort *)(param_1 + 0x5220) = uVar6;
        if ((uint)*(ushort *)(param_1 + 0x521e) <= (uint)uVar6) {
          *(undefined2 *)(param_1 + 0x5220) = 0;
        }
        uVar7 = *(ushort *)(param_1 + 0x5222) + 1;
        if (uVar7 < *(ushort *)(param_1 + 0x521e)) {
          *(short *)(param_1 + 0x5222) = (short)uVar7;
        }
        *(undefined2 *)(param_1 + 0x522e) = 0x100;
        *(int *)(param_1 + 0x5234) = *(int *)(param_1 + 0x5234) + 1;
      }
    }
    uVar6 = *(ushort *)(param_1 + 0x5228);
    uVar14 = *(ushort *)(param_1 + 0x522a) + 0x80;
    uVar15 = 0x100 - uVar6;
    uVar7 = 0x100;
    if (0xff < uVar14) {
      uVar7 = uVar14;
    }
    uVar3 = 0x80;
    if (uVar15 < 0x81) {
      uVar3 = uVar15;
    }
    if (uVar7 - 0x100 != 0) {
      *(ushort *)(param_1 + 0x5226) = *(short *)(param_1 + 0x5226) + (short)(uVar7 - 0x100) & 0xff;
    }
    FUN_ram_4000303c(param_1 + (uVar6 + 0x1206) * 4,param_1 + 0x4018,uVar3 * 4);
    if (uVar15 < 0x80) {
      FUN_ram_4000303c(param_1 + 0x4818,param_1 + 0x4018 + uVar3 * 4,(0x80 - uVar3) * 4);
    }
    uVar4 = (undefined2)(uVar14 * 0x10000 >> 0x10);
    if (0x100 < uVar14) {
      uVar4 = 0x100;
    }
    *(ushort *)(param_1 + 0x5228) = uVar6 + 0x80 & 0xff;
    *(undefined2 *)(param_1 + 0x522a) = uVar4;
    *(undefined1 *)(param_1 + 0x522f) = 0;
  }
LAB_ram_40076c60:
  if (*(short *)(param_1 + 0x521e) != 0) {
    uVar7 = (uint)*(ushort *)(param_1 + 0x5224);
    uVar14 = 0;
    iVar13 = param_1 + 0x4418;
    do {
      while( true ) {
        uVar15 = param_3 - uVar14;
        if (0x80 - uVar7 < param_3 - uVar14) {
          uVar15 = 0x80 - uVar7;
        }
        FUN_ram_4000303c(param_1 + (uVar7 + 0xe86) * 4,param_2 + uVar14,uVar15 << 2);
        uVar14 = uVar14 + uVar15;
        uVar15 = uVar15 + *(ushort *)(param_1 + 0x5224);
        uVar7 = uVar15 & 0xffff;
        *(short *)(param_1 + 0x5224) = (short)(uVar15 * 0x10000 >> 0x10);
        if (uVar7 == 0x80) break;
        if (param_3 <= uVar14) goto LAB_ram_40076c6e;
      }
      if ((*(char *)(param_1 + 0x522d) == '\0') || ((*(uint *)(param_1 + 0x522c) & 0xffff0000) != 0)
         ) {
        FUN_ram_4000303c(iVar13,param_1 + 0x3a18,0x200);
        memset(param_1 + 0x4618,0,0x200);
        FUN_ram_40075ec4(param_1,iVar13,param_1 + 0x4018,0);
        FUN_ram_4000303c((uint)*(ushort *)(param_1 + 0x5220) * 0x400 + 0x1c18 + param_1,
                         param_1 + 0x4018,0x400);
        uVar15 = (uint)*(ushort *)(param_1 + 0x521e);
        uVar7 = *(ushort *)(param_1 + 0x5222) + 1;
        if (uVar15 < uVar7) {
          uVar7 = uVar15;
        }
        if (uVar7 == 7) {
          FUN_ram_400753d0(param_1);
        }
        else {
          uVar3 = (uint)*(ushort *)(param_1 + 0x5220);
          pfVar10 = (float *)(uVar3 * 0x400 + 0x1c18 + param_1);
          puVar8 = (undefined8 *)(param_1 + 0x20);
          puVar5 = (undefined8 *)(param_1 + 0x418);
          *(float *)(param_1 + 0x3c18) = *pfVar10 * *(float *)(param_1 + 0x18);
          *(float *)(param_1 + 0x3c1c) = pfVar10[1] * *(float *)(param_1 + 0x1c);
          pfVar2 = (float *)(param_1 + 0x3c20);
          do {
            uVar17 = *(undefined8 *)(pfVar10 + 3);
            uVar21 = *puVar8;
            fVar16 = (float)*(undefined8 *)((int)puVar8 + 4);
            puVar8 = puVar8 + 1;
            fVar19 = (float)*(undefined8 *)(pfVar10 + 2);
            pfVar2[1] = fVar19 * fVar16 + (float)uVar17 * (float)uVar21;
            *pfVar2 = fVar19 * (float)uVar21 - (float)uVar17 * fVar16;
            pfVar2 = pfVar2 + 2;
            pfVar10 = pfVar10 + 2;
          } while (puVar5 != puVar8);
          if (1 < uVar7) {
            do {
              if (uVar3 == 0) {
                uVar3 = uVar15;
              }
              uVar3 = uVar3 - 1;
              pfVar11 = (float *)(uVar3 * 0x400 + 0x1c18 + param_1);
              pfVar2 = pfVar11 + 2;
              *(float *)(param_1 + 0x3c18) =
                   *pfVar11 * (float)*puVar5 + *(float *)(param_1 + 0x3c18);
              *(float *)(param_1 + 0x3c1c) =
                   pfVar11[1] * (float)*(undefined8 *)((int)puVar5 + 4) +
                   *(float *)(param_1 + 0x3c1c);
              pfVar10 = (float *)(param_1 + 0x3c20);
              puVar8 = puVar5;
              do {
                uVar21 = *(undefined8 *)(pfVar2 + 1);
                uVar17 = *(undefined8 *)pfVar2;
                fVar16 = (float)puVar8[1];
                fVar19 = (float)*(undefined8 *)((int)puVar8 + 0xc);
                pfVar2 = pfVar2 + 2;
                pfVar10[1] = (float)*(undefined8 *)(pfVar10 + 1) +
                             (float)uVar17 * fVar19 + (float)uVar21 * fVar16;
                *pfVar10 = (float)*(undefined8 *)pfVar10 +
                           ((float)uVar17 * fVar16 - (float)uVar21 * fVar19);
                pfVar10 = pfVar10 + 2;
                puVar8 = puVar8 + 1;
              } while (pfVar11 + 0x100 != pfVar2);
              puVar5 = puVar5 + 0x80;
            } while ((undefined8 *)(param_1 + 0x18 + uVar7 * 0x400) != puVar5);
          }
        }
        FUN_ram_40075ec4(param_1,param_1 + 0x3c18,iVar13,1);
        puVar9 = (ulonglong *)(param_1 + 0x3818);
        puVar5 = (undefined8 *)(param_1 + 0x4418);
        pfVar10 = &fStack_240;
        do {
          uVar21 = *puVar5;
          uVar18 = *puVar9;
          pfVar2 = pfVar10 + 1;
          *puVar9 = (ulonglong)*(uint *)(puVar5 + 0x40);
          puVar5 = (undefined8 *)((int)puVar5 + 4);
          puVar9 = (ulonglong *)((int)puVar9 + 4);
          *pfVar10 = (float)uVar21 + (float)uVar18;
          pfVar10 = pfVar2;
        } while (afStack_40 != pfVar2);
        uVar6 = *(short *)(param_1 + 0x5220) + 1;
        *(ushort *)(param_1 + 0x5220) = uVar6;
        if ((uint)*(ushort *)(param_1 + 0x521e) <= (uint)uVar6) {
          *(undefined2 *)(param_1 + 0x5220) = 0;
        }
        uVar7 = *(ushort *)(param_1 + 0x5222) + 1;
        if (uVar7 < *(ushort *)(param_1 + 0x521e)) {
          *(short *)(param_1 + 0x5222) = (short)uVar7;
        }
        uVar6 = *(ushort *)(param_1 + 0x5228);
        uVar3 = *(ushort *)(param_1 + 0x522a) + 0x80;
        uVar15 = 0x100 - uVar6;
        uVar7 = 0x100;
        if (0xff < uVar3) {
          uVar7 = uVar3;
        }
        uVar12 = 0x80;
        if (uVar15 < 0x81) {
          uVar12 = uVar15;
        }
        if (uVar7 - 0x100 != 0) {
          *(ushort *)(param_1 + 0x5226) =
               *(short *)(param_1 + 0x5226) + (short)(uVar7 - 0x100) & 0xff;
        }
        FUN_ram_4000303c(param_1 + (uVar6 + 0x1206) * 4,&fStack_240,uVar12 * 4);
        if (uVar15 < 0x80) {
          FUN_ram_4000303c(param_1 + 0x4818,&fStack_240 + uVar12,(0x80 - uVar12) * 4);
        }
        uVar4 = (undefined2)(uVar3 * 0x10000 >> 0x10);
        if (0x100 < uVar3) {
          uVar4 = 0x100;
        }
        *(ushort *)(param_1 + 0x5228) = uVar6 + 0x80 & 0xff;
        *(undefined2 *)(param_1 + 0x522a) = uVar4;
        if (*(char *)(param_1 + 0x522d) != '\0') {
          *(int *)(param_1 + 0x523c) = *(int *)(param_1 + 0x523c) + 1;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x522e) = 1;
        *(int *)(param_1 + 0x5230) = *(int *)(param_1 + 0x5230) + 1;
      }
      *(undefined2 *)(param_1 + 0x5224) = 0;
      uVar7 = 0;
    } while (uVar14 < param_3);
  }
LAB_ram_40076c6e:
  iStack_23c = param_1 + 0x4e18;
  iStack_238 = param_1 + 0x4c18;
  fStack_240._0_2_ = 0x80;
  FUN_ram_30040000(&fStack_240,param_2,param_2,param_3);
  uVar6 = *(ushort *)(param_1 + 0x522a);
  uVar1 = *(ushort *)(param_1 + 0x5226);
  if (uVar6 <= param_3) {
    param_3 = (uint)uVar6;
  }
  uVar7 = 0x100 - uVar1;
  if (param_3 <= uVar7) {
    uVar7 = param_3;
  }
  if (uVar7 != 0) {
    puVar5 = (undefined8 *)(param_1 + (uVar1 + 0x1206) * 4);
    pfVar10 = param_2;
    do {
      uVar21 = *puVar5;
      pfVar2 = pfVar10 + 1;
      puVar5 = (undefined8 *)((int)puVar5 + 4);
      *pfVar10 = (float)*(undefined8 *)pfVar10 + (float)uVar21;
      pfVar10 = pfVar2;
    } while (param_2 + uVar7 != pfVar2);
  }
  if (uVar7 < param_3) {
    puVar5 = (undefined8 *)(param_1 + 0x4818);
    pfVar10 = param_2 + uVar7;
    do {
      uVar21 = *puVar5;
      pfVar2 = pfVar10 + 1;
      puVar5 = (undefined8 *)((int)puVar5 + 4);
      *pfVar10 = (float)*(undefined8 *)pfVar10 + (float)uVar21;
      pfVar10 = pfVar2;
    } while (pfVar2 != param_2 + param_3);
  }
  *(ushort *)(param_1 + 0x5226) = (short)param_3 + uVar1 & 0xff;
  *(ushort *)(param_1 + 0x522a) = uVar6 - (short)param_3;
  return;
}


