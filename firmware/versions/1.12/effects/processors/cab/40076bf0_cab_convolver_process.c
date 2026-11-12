/* NanoCore 1.12: cab_convolver_process at 0x40076bf0.
 * Role: Direct FIR head plus block FFT tail with overlap state and output queue.
 * REA: ev_156bb60799bf08c128e9ca55554da1205f48ea15ef704b31f45e1e4019fcdf59
 * Source: analysis/rea-1.12/results/03579-export-0x40076bf0.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void cab_convolver_process(int param_1,float *param_2,uint param_3)

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
        cab_convolver_fft_backend_transform(param_1,iVar13,param_1 + 0x4018,0);
        FUN_ram_4000303c((uint)*(ushort *)(param_1 + 0x5220) * 0x400 + 0x1c18 + param_1,
                         param_1 + 0x4018,0x400);
        uVar14 = (uint)*(ushort *)(param_1 + 0x521e);
        uVar7 = *(ushort *)(param_1 + 0x5222) + 1;
        if (uVar14 < uVar7) {
          uVar7 = uVar14;
        }
        if (uVar7 == 7) {
          cab_convolver_accumulate_seven_partitions(param_1);
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
        cab_convolver_fft_backend_transform(param_1,param_1 + 0x3c18,iVar13,1);
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
        cab_convolver_fft_backend_transform(param_1,iVar13,param_1 + 0x4018,0);
        FUN_ram_4000303c((uint)*(ushort *)(param_1 + 0x5220) * 0x400 + 0x1c18 + param_1,
                         param_1 + 0x4018,0x400);
        uVar15 = (uint)*(ushort *)(param_1 + 0x521e);
        uVar7 = *(ushort *)(param_1 + 0x5222) + 1;
        if (uVar15 < uVar7) {
          uVar7 = uVar15;
        }
        if (uVar7 == 7) {
          cab_convolver_accumulate_seven_partitions(param_1);
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
        cab_convolver_fft_backend_transform(param_1,param_1 + 0x3c18,iVar13,1);
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
  dsp_fir_process_unrolled(&fStack_240,param_2,param_2,param_3);
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

