/* NanoCore 1.12: dynamics_detectors_reset at 0x40068da0.
 * Role: Initializes adaptive gate window coefficients and resets gate/compressor detector histories.
 * REA: ev_7747559710c0284ff26f94abb6f228a3fd97858aef769a90ce8fd01fb23ace83
 * Source: analysis/rea-1.12/results/03511-export-0x40068da0.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void dynamics_detectors_reset(undefined8 *param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  float fVar15;
  
  if (param_1 != (undefined8 *)0x0) {
    if (*(short *)(param_1 + 0x41a) == 0) {
      fVar11 = (float)*param_1;
      if (fVar11 <= DAT_ram_4009672c) {
        uVar6 = 0x2c;
        fVar15 = DAT_ram_4009f518;
        fVar10 = DAT_ram_4009f514;
        fVar1 = DAT_ram_4009f510;
        fVar11 = DAT_ram_4009678c;
      }
      else {
        fVar15 = fVar11 / DAT_ram_40099f28 + DAT_ram_4009675c;
        uVar8 = (uint)(-1 < (int)fVar15) * (int)fVar15;
        uVar5 = 1;
        if (uVar8 != 0) {
          uVar5 = uVar8;
        }
        uVar7 = 0xffff;
        if (uVar8 < 0x10000) {
          uVar7 = uVar5;
        }
        uVar6 = (undefined2)uVar7;
        fVar15 = (float)(uVar7 & 0xffff) / fVar11;
        fVar10 = -fVar15;
        fVar1 = fVar10 / DAT_ram_4009f1d0;
      }
      *(undefined2 *)(param_1 + 0x41a) = uVar6;
      uVar12 = FUN_ram_40000bd8(fVar1);
      fVar3 = DAT_ram_4009f268;
      *(undefined4 *)(param_1 + 0x41c) = uVar12;
      uVar12 = FUN_ram_40000bd8(fVar10 / fVar3);
      fVar1 = DAT_ram_4009f0ac;
      *(undefined4 *)((int)param_1 + 0x20e4) = uVar12;
      uVar12 = FUN_ram_40000bd8(fVar10 / fVar1);
      *(undefined4 *)(param_1 + 0x41d) = uVar12;
      uVar12 = FUN_ram_40000bd8(fVar10 / fVar3);
      fVar1 = DAT_ram_4009f378;
      *(undefined4 *)((int)param_1 + 0x20ec) = uVar12;
      uVar12 = FUN_ram_40000bd8(fVar10 / fVar1);
      fVar1 = DAT_ram_4009f258;
      *(undefined4 *)(param_1 + 0x41e) = uVar12;
      uVar12 = FUN_ram_40000bd8(fVar10 / fVar1);
      *(undefined4 *)((int)param_1 + 0x20f4) = uVar12;
      uVar12 = FUN_ram_40000bd8(fVar10);
      fVar1 = DAT_ram_4009f51c;
      *(undefined4 *)(param_1 + 0x41f) = uVar12;
      uVar12 = FUN_ram_40000bd8(fVar10 / fVar1);
      fVar1 = DAT_ram_4009f520;
      *(undefined4 *)((int)param_1 + 0x20fc) = uVar12;
      uVar12 = FUN_ram_40000bd8(fVar10 / fVar1);
      fVar10 = DAT_ram_4009f4ec;
      *(undefined4 *)(param_1 + 0x420) = uVar12;
      uVar12 = DAT_ram_4009f524;
      uVar6 = 0;
      if (0.0 <= fVar10 / fVar15) {
        fVar10 = fVar10 / fVar15 + DAT_ram_4009675c;
        uVar8 = (uint)(-1 < (int)fVar10) * (int)fVar10;
        if (0xffff < uVar8) {
          uVar8 = 0xffff;
        }
        uVar6 = (undefined2)uVar8;
      }
      uVar9 = 0;
      if (0.0 <= DAT_ram_40099f90 / fVar15) {
        fVar15 = DAT_ram_40099f90 / fVar15 + DAT_ram_4009675c;
        uVar8 = (uint)(-1 < (int)fVar15) * (int)fVar15;
        if (0xffff < uVar8) {
          uVar8 = 0xffff;
        }
        uVar9 = (undefined2)uVar8;
      }
      fVar15 = DAT_ram_4009f528 / fVar11;
      *(undefined2 *)((int)param_1 + 0x20d2) = uVar6;
      *(undefined4 *)((int)param_1 + 0x2104) = uVar12;
      *(undefined2 *)((int)param_1 + 0x20d4) = uVar9;
      *(undefined4 *)(param_1 + 0x421) = 0;
      uVar12 = FUN_ram_40000bd8(fVar15);
      fVar15 = DAT_ram_4009f52c;
      *(undefined4 *)(param_1 + 0x41b) = uVar12;
      uVar12 = FUN_ram_40000bd8(fVar15 / fVar11);
      *(undefined4 *)((int)param_1 + 0x20dc) = uVar12;
    }
    uVar2 = DAT_ram_4009f530;
    uVar12 = DAT_ram_40099f38;
    uVar14 = (ulonglong)DAT_ram_4009f098;
    *(ulonglong *)((int)param_1 + 0x4c) = uVar14;
    uVar4 = DAT_ram_4009f290;
    param_1[10] = uVar14;
    *(undefined4 *)(param_1 + 0xe) = uVar4;
    *(undefined1 *)((int)param_1 + 0x46) = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    *(undefined4 *)((int)param_1 + 0x6c) = 0;
    *(undefined2 *)((int)param_1 + 0x74) = 0;
    uVar13 = FUN_ram_40000d44(uVar12,uVar2);
    uVar14 = (ulonglong)DAT_ram_4009f534;
    uVar12 = *(undefined4 *)((int)param_1 + 0x2104);
    *(ulonglong *)((int)param_1 + 0x54) = uVar14;
    *(undefined8 *)((int)param_1 + 0x5c) = uVar13;
    param_1[0xb] = uVar14;
    param_1[0xc] = uVar13;
    *(undefined1 *)(param_1 + 0x427) = 0;
    uVar2 = DAT_ram_4009a330;
    *(undefined4 *)((int)param_1 + 0x212c) = uVar4;
    *(undefined4 *)((int)param_1 + 0x210c) = 0;
    *(undefined4 *)(param_1 + 0x422) = 0;
    *(undefined4 *)((int)param_1 + 0x2114) = 0;
    *(undefined4 *)(param_1 + 0x423) = 0;
    *(undefined4 *)((int)param_1 + 0x211c) = 0;
    *(undefined4 *)(param_1 + 0x424) = uVar2;
    *(undefined4 *)((int)param_1 + 0x2124) = 0;
    *(undefined4 *)(param_1 + 0x425) = 0;
    *(undefined4 *)((int)param_1 + 0x2134) = 0;
    *(undefined4 *)((int)param_1 + 0x213c) = uVar12;
    *(undefined4 *)(param_1 + 0x428) = uVar12;
    *(undefined4 *)((int)param_1 + 0x2144) = uVar12;
    *(undefined2 *)(param_1 + 0x426) = 0;
    compressor_detector_reset(param_1 + 0x40f);
    return;
  }
  return;
}

