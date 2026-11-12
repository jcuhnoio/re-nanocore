/* NanoCore 1.12: cab_convolver_fft_backend_transform at 0x40075ec4.
 * Role: Forward/inverse FFT backend including calibration and scaling.
 * REA: ev_da6513bb1d631949dac9e30fcfe697f71c383e161fdec283f9dce2d5cb1c6bcb
 * Source: analysis/rea-1.12/results/03573-export-0x40075ec4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void cab_convolver_fft_backend_transform(int param_1,uint *param_2,float *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  float *pfVar4;
  ulonglong *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 *puVar16;
  float *pfVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  undefined8 *puVar24;
  uint *puVar25;
  undefined8 *puVar26;
  float *pfVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  ulonglong uVar32;
  float fVar33;
  
  if (((param_1 == 0) || (param_2 == (uint *)0x0)) || (param_3 == (float *)0x0)) {
    return;
  }
  pcVar2 = (char *)(gp + -0x20);
  if (*pcVar2 == '\0') {
    uVar3 = FUN_ram_400002f4();
    if ((*pcVar2 == '\0') && (DAT_ram_30080fb0 == '\0')) {
      DAT_ram_30080fb0 = '\x01';
      FUN_ram_400002fa();
      FUN_ram_40075638(param_1);
    }
    else {
      FUN_ram_400002fa(uVar3);
    }
  }
  FUN_ram_400002f4();
  cVar1 = *pcVar2;
  uVar22 = *(uint *)(gp + -0x1c);
  iVar23 = *(int *)(gp + -0x18);
  uVar29 = *(undefined8 *)(gp + -0x14);
  uVar31 = *(undefined8 *)(gp + -0x10);
  FUN_ram_400002fa();
  fVar28 = (float)uVar29;
  fVar30 = (float)uVar31;
  if ((cVar1 != '\0') && (uVar22 != 0 || iVar23 != 0)) {
    if (param_4 == 0) {
      uVar3 = FUN_ram_400002f4();
      FUN_ram_4000303c(&DAT_ram_30082fcc,param_2,0x400);
      if (iVar23 == 1) {
        FUN_ram_300410e6(param_1,&DAT_ram_30082fcc,&DAT_ram_30082fcc,0);
        puVar16 = (undefined4 *)&DAT_ram_30082fcc;
        puVar14 = (undefined4 *)&DAT_ram_300811b8;
        do {
          uVar6 = puVar16[1];
          uVar8 = puVar16[2];
          uVar10 = puVar16[3];
          *puVar14 = *puVar16;
          puVar14[1] = uVar6;
          puVar14[2] = uVar8;
          puVar14[3] = uVar10;
          puVar16 = puVar16 + 4;
          puVar14 = puVar14 + 4;
        } while (puVar16 != (undefined4 *)&DAT_ram_300833cc);
      }
      else {
        memset(&DAT_ram_300811b8,0,0x400);
        FUN_ram_300410e6(param_1,&DAT_ram_30082fcc,&DAT_ram_300811b8,0);
      }
      puVar24 = (undefined8 *)&DAT_ram_300815b8;
      memset(&DAT_ram_300815b8,0,0x204);
      puVar26 = (undefined8 *)&DAT_ram_30080fb4;
      memset(&DAT_ram_30080fb4,0,0x204);
      if (uVar22 == 2) {
        puVar24 = (undefined8 *)&DAT_ram_300815bc;
        puVar26 = (undefined8 *)&DAT_ram_30080fb8;
        _DAT_ram_300815b8 = _DAT_ram_300811b8;
        _DAT_ram_30080fb4 = _DAT_ram_300811bc;
        puVar13 = (undefined8 *)&DAT_ram_300811c0;
        do {
          uVar29 = *puVar13;
          uVar31 = *(undefined8 *)((int)puVar13 + 4);
          puVar13 = puVar13 + 1;
          *puVar24 = uVar29;
          *puVar26 = uVar31;
          puVar24 = (undefined8 *)((int)puVar24 + 4);
          puVar26 = (undefined8 *)((int)puVar26 + 4);
        } while (puVar13 != (undefined8 *)&DAT_ram_300815b8);
        _DAT_ram_300817b8 = _DAT_ram_300815b4;
      }
      else if (uVar22 < 3) {
        if (uVar22 == 0) {
          puVar24 = (undefined8 *)&DAT_ram_300815bc;
          puVar26 = (undefined8 *)&DAT_ram_30080fb8;
          _DAT_ram_300815b8 = _DAT_ram_300811b8;
          _DAT_ram_300817b8 = _DAT_ram_300811bc;
          puVar13 = (undefined8 *)&DAT_ram_300811c0;
          do {
            uVar29 = *puVar13;
            uVar31 = *(undefined8 *)((int)puVar13 + 4);
            puVar13 = puVar13 + 1;
            *puVar24 = uVar29;
            *puVar26 = uVar31;
            puVar24 = (undefined8 *)((int)puVar24 + 4);
            puVar26 = (undefined8 *)((int)puVar26 + 4);
          } while (puVar13 != (undefined8 *)&DAT_ram_300815b8);
        }
        else {
          puVar13 = (undefined8 *)&DAT_ram_300811b8;
          do {
            uVar29 = *puVar13;
            uVar31 = *(undefined8 *)((int)puVar13 + 4);
            puVar13 = puVar13 + 1;
            *puVar24 = uVar29;
            *puVar26 = uVar31;
            puVar24 = (undefined8 *)((int)puVar24 + 4);
            puVar26 = (undefined8 *)((int)puVar26 + 4);
          } while (puVar13 != (undefined8 *)&DAT_ram_300815b8);
        }
      }
      else if (uVar22 == 3) {
        puVar14 = (undefined4 *)&DAT_ram_300811b8;
        do {
          uVar6 = puVar14[1];
          uVar8 = puVar14[2];
          uVar10 = puVar14[3];
          *(undefined4 *)puVar24 = *puVar14;
          *(undefined4 *)((int)puVar24 + 4) = uVar6;
          *(undefined4 *)(puVar24 + 1) = uVar8;
          *(undefined4 *)((int)puVar24 + 0xc) = uVar10;
          puVar14 = puVar14 + 4;
          puVar24 = puVar24 + 2;
        } while (puVar14 != &uRam300813b8);
        puVar9 = (uint *)&DAT_ram_30080fb8;
        puVar15 = (uint *)&DAT_ram_300813bc;
        *(undefined4 *)puVar24 = uRam300813b8;
        do {
          uVar21 = puVar15[1];
          uVar19 = puVar15[2];
          uVar22 = puVar15[3];
          uVar7 = puVar15[4];
          uVar11 = puVar15[5];
          *puVar9 = *puVar15;
          puVar9[1] = uVar21;
          puVar9[2] = uVar19;
          puVar9[3] = uVar22;
          puVar9[4] = uVar7;
          puVar9[5] = uVar11;
          puVar15 = puVar15 + 6;
          puVar9 = puVar9 + 6;
        } while (puVar15 != (uint *)&DAT_ram_300815b4);
        *puVar9 = _DAT_ram_300815b4;
      }
      puVar24 = (undefined8 *)&DAT_ram_300815bc;
      pfVar4 = (float *)&DAT_ram_30080fb4;
      pfVar12 = (float *)&DAT_ram_300815b8;
      do {
        uVar29 = *(undefined8 *)pfVar4;
        pfVar27 = pfVar12 + 1;
        *pfVar12 = (float)*(undefined8 *)pfVar12 * fVar28;
        *pfVar4 = (float)uVar29 * fVar28;
        pfVar4 = pfVar4 + 1;
        pfVar12 = pfVar27;
      } while (pfVar27 != (float *)&DAT_ram_300817bc);
      *(ulonglong *)param_3 = (ulonglong)_DAT_ram_300815b8;
      *(ulonglong *)(param_3 + 1) = (ulonglong)_DAT_ram_300817b8;
      pfVar4 = (float *)&DAT_ram_30080fb8;
      pfVar12 = param_3 + 3;
      do {
        pfVar12[-1] = (float)*puVar24;
        puVar24 = (undefined8 *)((int)puVar24 + 4);
        *pfVar12 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar12 = pfVar12 + 2;
      } while (puVar24 != (undefined8 *)&DAT_ram_300817b8);
    }
    else {
      fVar33 = DAT_ram_4009672c;
      if (fVar28 != 0.0) {
        fVar33 = DAT_ram_4009672c / fVar28;
      }
      uVar3 = FUN_ram_400002f4();
      puVar25 = (uint *)&DAT_ram_300815b8;
      memset(&DAT_ram_300815b8,0,0x204);
      memset(&DAT_ram_30080fb4,0,0x204);
      _DAT_ram_300815b8 = *param_2;
      _DAT_ram_300817b8 = param_2[1];
      puVar26 = (undefined8 *)&DAT_ram_300815bc;
      puVar15 = (uint *)&DAT_ram_30080fb8;
      puVar9 = puVar15;
      puVar24 = puVar26;
      do {
        *puVar24 = *(undefined8 *)(param_2 + 2);
        puVar24 = (undefined8 *)((int)puVar24 + 4);
        *puVar9 = param_2[3];
        puVar9 = puVar9 + 1;
        param_2 = param_2 + 2;
      } while (puVar24 != (undefined8 *)&DAT_ram_300817b8);
      pfVar27 = (float *)&DAT_ram_30080fb4;
      pfVar4 = pfVar27;
      pfVar12 = (float *)&DAT_ram_300815b8;
      do {
        uVar29 = *(undefined8 *)pfVar4;
        pfVar17 = pfVar12 + 1;
        *pfVar12 = (float)*(undefined8 *)pfVar12 * fVar33;
        *pfVar4 = (float)uVar29 * fVar33;
        pfVar4 = pfVar4 + 1;
        pfVar12 = pfVar17;
      } while (pfVar17 != (float *)&DAT_ram_300817bc);
      puVar5 = (ulonglong *)memset(&DAT_ram_300811b8,0,0x400);
      if (uVar22 == 2) {
        uVar32 = (ulonglong)_DAT_ram_30080fb4;
        *puVar5 = (ulonglong)_DAT_ram_300815b8;
        *(ulonglong *)((int)puVar5 + 4) = uVar32;
        puVar14 = (undefined4 *)&DAT_ram_300811c0;
        do {
          uVar22 = *puVar15;
          puVar16 = puVar14 + 2;
          *puVar14 = (int)*puVar26;
          puVar14[1] = uVar22;
          puVar26 = (undefined8 *)((int)puVar26 + 4);
          puVar15 = puVar15 + 1;
          puVar14 = puVar16;
        } while (puVar16 != (undefined4 *)&DAT_ram_300815b8);
        *(uint *)((int)puVar5 + 0x3fc) = _DAT_ram_300817b8;
      }
      else if (uVar22 < 3) {
        if (uVar22 == 0) {
          uVar32 = (ulonglong)_DAT_ram_300817b8;
          *puVar5 = (ulonglong)_DAT_ram_300815b8;
          *(ulonglong *)((int)puVar5 + 4) = uVar32;
          puVar14 = (undefined4 *)&DAT_ram_300811c0;
          do {
            uVar22 = *puVar15;
            puVar16 = puVar14 + 2;
            *puVar14 = (int)*puVar26;
            puVar14[1] = uVar22;
            puVar26 = (undefined8 *)((int)puVar26 + 4);
            puVar15 = puVar15 + 1;
            puVar14 = puVar16;
          } while (puVar16 != (undefined4 *)&DAT_ram_300815b8);
        }
        else {
          do {
            uVar22 = *puVar25;
            fVar28 = *pfVar27;
            puVar25 = puVar25 + 1;
            *puVar5 = (ulonglong)uVar22;
            *(ulonglong *)((int)puVar5 + 4) = (ulonglong)(uint)fVar28;
            pfVar27 = pfVar27 + 1;
            puVar5 = puVar5 + 1;
          } while (puVar25 != (uint *)&DAT_ram_300817b8);
        }
      }
      else {
        puVar9 = (uint *)&DAT_ram_300815b8;
        if (uVar22 == 3) {
          do {
            uVar22 = puVar9[1];
            uVar7 = puVar9[2];
            uVar11 = puVar9[3];
            *(uint *)puVar5 = *puVar9;
            *(uint *)((int)puVar5 + 4) = uVar22;
            *(uint *)(puVar5 + 1) = uVar7;
            *(uint *)((int)puVar5 + 0xc) = uVar11;
            puVar9 = puVar9 + 4;
            puVar5 = puVar5 + 2;
          } while (puVar9 != (uint *)&DAT_ram_300817b8);
          puVar16 = (undefined4 *)&DAT_ram_30080fb8;
          puVar14 = (undefined4 *)&DAT_ram_300813bc;
          *(uint *)puVar5 = _DAT_ram_300817b8;
          do {
            uVar20 = puVar16[1];
            uVar6 = puVar16[2];
            uVar8 = puVar16[3];
            uVar10 = puVar16[4];
            uVar18 = puVar16[5];
            *puVar14 = *puVar16;
            puVar14[1] = uVar20;
            puVar14[2] = uVar6;
            puVar14[3] = uVar8;
            puVar14[4] = uVar10;
            puVar14[5] = uVar18;
            puVar16 = puVar16 + 6;
            puVar14 = puVar14 + 6;
          } while (puVar16 != &uRam300811b0);
          *puVar14 = uRam300811b0;
        }
      }
      puVar16 = (undefined4 *)&DAT_ram_300811b8;
      puVar14 = (undefined4 *)&DAT_ram_30082fcc;
      do {
        uVar6 = puVar16[1];
        uVar8 = puVar16[2];
        uVar10 = puVar16[3];
        *puVar14 = *puVar16;
        puVar14[1] = uVar6;
        puVar14[2] = uVar8;
        puVar14[3] = uVar10;
        puVar16 = puVar16 + 4;
        puVar14 = puVar14 + 4;
      } while (puVar16 != (undefined4 *)&DAT_ram_300815b8);
      if (iVar23 == 1) {
        FUN_ram_300410e6(param_1,&DAT_ram_30082fcc,&DAT_ram_30082fcc,1);
        puVar16 = (undefined4 *)&DAT_ram_30082fcc;
        puVar14 = (undefined4 *)&DAT_ram_300827c4;
        do {
          uVar6 = puVar16[1];
          uVar8 = puVar16[2];
          uVar10 = puVar16[3];
          *puVar14 = *puVar16;
          puVar14[1] = uVar6;
          puVar14[2] = uVar8;
          puVar14[3] = uVar10;
          puVar16 = puVar16 + 4;
          puVar14 = puVar14 + 4;
        } while (puVar16 != (undefined4 *)&DAT_ram_300833cc);
      }
      else {
        memset(&DAT_ram_300827c4,0,0x400);
        FUN_ram_300410e6(param_1,&DAT_ram_30082fcc,&DAT_ram_300827c4,1);
      }
      puVar24 = (undefined8 *)&DAT_ram_300827c4;
      do {
        uVar29 = *puVar24;
        puVar24 = (undefined8 *)((int)puVar24 + 4);
        *param_3 = (float)uVar29 * fVar30;
        param_3 = param_3 + 1;
      } while (puVar24 != (undefined8 *)&DAT_ram_30082bc4);
    }
    FUN_ram_400002fa(uVar3);
    return;
  }
  if (param_4 == 0) {
    iVar23 = FUN_ram_40004d36();
    uVar3 = 0x30081fc4;
    if (iVar23 != 0) {
      uVar3 = 0x30081bc4;
    }
    uVar3 = FUN_ram_4000303c(uVar3,param_2,0x400);
    FUN_ram_300410e6(param_1,uVar3,param_3,0);
    if ((DAT_ram_4009f124 < fVar28) && (fVar28 < DAT_ram_400a09c4)) {
      return;
    }
    pfVar4 = param_3;
    do {
      pfVar12 = pfVar4 + 1;
      *pfVar4 = (float)*(undefined8 *)pfVar4 * fVar28;
      pfVar4 = pfVar12;
    } while (param_3 + 0x100 != pfVar12);
    return;
  }
  if (fVar28 == 0.0) {
    iVar23 = FUN_ram_40004d36();
    if (iVar23 != 0) {
      FUN_ram_4000303c(0x30081bc4,param_2,0x400);
      pfVar4 = (float *)0x30081bc4;
      fVar33 = DAT_ram_4009f124;
      goto LAB_ram_400760e0;
    }
    uVar3 = 0x30081fc4;
    fVar28 = DAT_ram_4009672c;
  }
  else {
    fVar28 = DAT_ram_4009672c / fVar28;
    iVar23 = FUN_ram_40004d36();
    uVar3 = 0x30081fc4;
    if (iVar23 != 0) {
      uVar3 = 0x30081bc4;
    }
  }
  pfVar4 = (float *)FUN_ram_4000303c(uVar3,param_2,0x400);
  fVar33 = DAT_ram_4009f124;
  if ((fVar28 <= DAT_ram_4009f124) || (DAT_ram_400a09c4 <= fVar28)) {
    pfVar12 = pfVar4;
    do {
      pfVar27 = pfVar12 + 1;
      *pfVar12 = (float)*(undefined8 *)pfVar12 * fVar28;
      pfVar12 = pfVar27;
    } while (pfVar4 + 0x100 != pfVar27);
  }
LAB_ram_400760e0:
  FUN_ram_300410e6(param_1,pfVar4,param_3,1);
  if ((fVar30 <= fVar33) || (DAT_ram_400a09c4 <= fVar30)) {
    pfVar4 = param_3;
    do {
      pfVar12 = pfVar4 + 1;
      *pfVar4 = (float)*(undefined8 *)pfVar4 * fVar30;
      pfVar4 = pfVar12;
    } while (pfVar12 != param_3 + 0x100);
  }
  return;
}

