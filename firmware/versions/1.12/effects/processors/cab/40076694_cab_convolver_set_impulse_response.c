/* NanoCore 1.12: cab_convolver_set_impulse_response at 0x40076694.
 * Role: Limits impulse response to1024 samples, stores direct head and transforms tail partitions.
 * REA: ev_e04e406d51ebc2d2ad7f428eefe47d0ec6f90c2e8156190d623e820799f73afd
 * Source: analysis/rea-1.12/results/03575-export-0x40076694.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void cab_convolver_set_impulse_response(undefined4 *param_1,undefined8 *param_2,uint param_3)

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
        cab_convolver_fft_backend_transform(param_1,puVar15,puVar19,0);
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
      cab_convolver_fft_backend_transform(param_1,puVar15,puVar19,0);
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

