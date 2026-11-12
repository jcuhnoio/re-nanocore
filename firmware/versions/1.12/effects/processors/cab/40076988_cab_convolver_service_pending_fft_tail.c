/* NanoCore 1.12: cab_convolver_service_pending_fft_tail at 0x40076988.
 * Role: Services queued FFT partition computation and overlap-add output.
 * REA: ev_515cd802dd0d25e782947cd6c6157489b8b490d4a33893b559de661cf47a383a
 * Source: analysis/rea-1.12/results/03578-export-0x40076988.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 cab_convolver_service_pending_fft_tail(int param_1)

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
      cab_convolver_fft_backend_transform(param_1,iVar2,param_1 + 0x4018,0);
      FUN_ram_4000303c((uint)*(ushort *)(param_1 + 0x5220) * 0x400 + 0x1c18 + param_1,
                       param_1 + 0x4018,0x400);
      uVar11 = (uint)*(ushort *)(param_1 + 0x521e);
      uVar4 = *(ushort *)(param_1 + 0x5222) + 1;
      if (uVar11 < uVar4) {
        uVar4 = uVar11;
      }
      if (uVar4 == 7) {
        cab_convolver_accumulate_seven_partitions(param_1);
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
      cab_convolver_fft_backend_transform(param_1,param_1 + 0x3c18,iVar2,1);
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

