/* NanoCore 1.12: dynamics_state_init at 0x40069066.
 * Role: Clears 0x2148-byte state and sets sample rate and cached controls.
 * REA: ev_751bfd0ab794e2f13481a014b85ce0c7e2ddd8e2fe5c95a50acf30a9d9655716
 * Source: analysis/rea-1.12/results/03512-export-0x40069066.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void dynamics_state_init(float param_1,float *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float in_register_00000100;
  uint uVar11;
  undefined2 uVar12;
  uint uVar13;
  uint uVar14;
  undefined2 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float fVar24;
  
  if (param_2 == (float *)0x0) {
    return;
  }
  memset(param_2,0,0x2148);
  fVar24 = DAT_ram_4009672c;
  fVar20 = DAT_ram_4009f538;
  fVar16 = DAT_ram_4009678c;
  if (DAT_ram_4009672c < param_1) {
    fVar20 = DAT_ram_40096728 / (param_1 * DAT_ram_4009f53c);
    fVar16 = param_1;
  }
  *(ulonglong *)param_2 = (ulonglong)(uint)fVar16;
  uVar21 = FUN_ram_40000bd8(fVar20);
  fVar20 = *param_2;
  uVar23 = (ulonglong)(uint)DAT_ram_40096728;
  uVar22 = (ulonglong)DAT_ram_40096754;
  *(undefined8 *)(param_2 + 0x19) = uVar21;
  *(undefined1 *)(param_2 + 1) = 0;
  *(ulonglong *)(param_2 + 2) = uVar23;
  *(ulonglong *)(param_2 + 3) = uVar23;
  *(ulonglong *)(param_2 + 4) = uVar23;
  *(ulonglong *)(param_2 + 5) = uVar23;
  *(ulonglong *)(param_2 + 0x12) = uVar22;
  if (fVar20 <= fVar24) {
    uVar12 = 0x2c;
    fVar20 = DAT_ram_4009678c;
    fVar16 = DAT_ram_4009f518;
    fVar19 = DAT_ram_4009f514;
    fVar17 = DAT_ram_4009f510;
  }
  else {
    fVar16 = fVar20 / DAT_ram_40099f28 + DAT_ram_4009675c;
    uVar14 = (uint)(-1 < (int)fVar16) * (int)fVar16;
    uVar11 = 1;
    if (uVar14 != 0) {
      uVar11 = uVar14;
    }
    uVar13 = 0xffff;
    if (uVar14 < 0x10000) {
      uVar13 = uVar11;
    }
    uVar12 = (undefined2)uVar13;
    fVar16 = (float)(uVar13 & 0xffff) / fVar20;
    fVar19 = -fVar16;
    fVar17 = fVar19 / DAT_ram_4009f1d0;
  }
  *(undefined2 *)(param_2 + 0x834) = uVar12;
  fVar17 = (float)FUN_ram_40000bd8(fVar17);
  fVar1 = DAT_ram_4009f268;
  param_2[0x838] = fVar17;
  fVar17 = fVar19 / fVar1;
  fVar18 = (float)FUN_ram_40000bd8(fVar17);
  fVar3 = DAT_ram_4009f0ac;
  param_2[0x839] = fVar18;
  fVar18 = (float)FUN_ram_40000bd8(fVar19 / fVar3);
  param_2[0x83a] = fVar18;
  fVar17 = (float)FUN_ram_40000bd8(fVar17);
  fVar5 = DAT_ram_4009f378;
  param_2[0x83b] = fVar17;
  fVar17 = (float)FUN_ram_40000bd8(fVar19 / fVar5);
  fVar4 = DAT_ram_4009f258;
  param_2[0x83c] = fVar17;
  fVar17 = (float)FUN_ram_40000bd8(fVar19 / fVar4);
  param_2[0x83d] = fVar17;
  fVar17 = (float)FUN_ram_40000bd8(fVar19);
  fVar6 = DAT_ram_4009f51c;
  param_2[0x83e] = fVar17;
  fVar17 = (float)FUN_ram_40000bd8(fVar19 / fVar6);
  fVar7 = DAT_ram_4009f520;
  param_2[0x83f] = fVar17;
  fVar19 = (float)FUN_ram_40000bd8(fVar19 / fVar7);
  fVar17 = DAT_ram_4009f4ec;
  param_2[0x840] = fVar19;
  fVar9 = DAT_ram_4009f528;
  fVar8 = DAT_ram_4009f524;
  fVar18 = DAT_ram_40099f90;
  fVar19 = fVar17 / fVar16;
  uVar12 = 0;
  if (0.0 <= fVar19) {
    fVar19 = fVar19 + DAT_ram_4009675c;
    uVar14 = (uint)(-1 < (int)fVar19) * (int)fVar19;
    if (0xffff < uVar14) {
      uVar14 = 0xffff;
    }
    uVar12 = (undefined2)uVar14;
  }
  uVar15 = 0;
  if (0.0 <= DAT_ram_40099f90 / fVar16) {
    fVar16 = DAT_ram_40099f90 / fVar16 + DAT_ram_4009675c;
    uVar14 = (uint)(-1 < (int)fVar16) * (int)fVar16;
    if (0xffff < uVar14) {
      uVar14 = 0xffff;
    }
    uVar15 = (undefined2)uVar14;
  }
  fVar16 = DAT_ram_4009f528 / fVar20;
  *(undefined2 *)(param_2 + 0x835) = uVar15;
  *(undefined2 *)((int)param_2 + 0x20d2) = uVar12;
  param_2[0x841] = fVar8;
  param_2[0x842] = 0.0;
  fVar19 = (float)FUN_ram_40000bd8(fVar16);
  fVar16 = DAT_ram_4009f52c;
  param_2[0x836] = fVar19;
  fVar20 = (float)FUN_ram_40000bd8(fVar16 / fVar20);
  param_2[0x837] = fVar20;
  FUN_ram_4006010e(*(undefined8 *)param_2,param_2 + 0x81e,2);
  if (*(short *)(param_2 + 0x834) == 0) {
    fVar20 = *param_2;
    if (fVar20 <= fVar24) {
      uVar12 = 0x2c;
      fVar24 = DAT_ram_4009f518;
      fVar19 = DAT_ram_4009f514;
      fVar20 = DAT_ram_4009f510;
    }
    else {
      fVar24 = fVar20 / DAT_ram_40099f28 + DAT_ram_4009675c;
      uVar14 = (uint)(-1 < (int)fVar24) * (int)fVar24;
      uVar11 = 1;
      if (uVar14 != 0) {
        uVar11 = uVar14;
      }
      uVar13 = 0xffff;
      if (uVar14 < 0x10000) {
        uVar13 = uVar11;
      }
      uVar12 = (undefined2)uVar13;
      fVar24 = (float)(uVar13 & 0xffff) / fVar20;
      fVar19 = -fVar24;
      in_register_00000100 = fVar20;
      fVar20 = fVar19 / DAT_ram_4009f1d0;
    }
    *(undefined2 *)(param_2 + 0x834) = uVar12;
    fVar20 = (float)FUN_ram_40000bd8(fVar20);
    param_2[0x838] = fVar20;
    fVar1 = fVar19 / fVar1;
    fVar20 = (float)FUN_ram_40000bd8(fVar1);
    param_2[0x839] = fVar20;
    fVar20 = (float)FUN_ram_40000bd8(fVar19 / fVar3);
    param_2[0x83a] = fVar20;
    fVar20 = (float)FUN_ram_40000bd8(fVar1);
    param_2[0x83b] = fVar20;
    fVar20 = (float)FUN_ram_40000bd8(fVar19 / fVar5);
    param_2[0x83c] = fVar20;
    fVar20 = (float)FUN_ram_40000bd8(fVar19 / fVar4);
    param_2[0x83d] = fVar20;
    fVar20 = (float)FUN_ram_40000bd8(fVar19);
    param_2[0x83e] = fVar20;
    fVar20 = (float)FUN_ram_40000bd8(fVar19 / fVar6);
    param_2[0x83f] = fVar20;
    fVar20 = (float)FUN_ram_40000bd8(fVar19 / fVar7);
    fVar17 = fVar17 / fVar24;
    param_2[0x840] = fVar20;
    fVar20 = DAT_ram_4009f524;
    uVar12 = 0;
    if (0.0 <= fVar17) {
      fVar17 = fVar17 + DAT_ram_4009675c;
      uVar14 = (uint)(-1 < (int)fVar17) * (int)fVar17;
      if (0xffff < uVar14) {
        uVar14 = 0xffff;
      }
      uVar12 = (undefined2)uVar14;
    }
    uVar15 = 0;
    if (0.0 <= fVar18 / fVar24) {
      fVar24 = fVar18 / fVar24 + DAT_ram_4009675c;
      uVar14 = (uint)(-1 < (int)fVar24) * (int)fVar24;
      if (0xffff < uVar14) {
        uVar14 = 0xffff;
      }
      uVar15 = (undefined2)uVar14;
    }
    *(undefined2 *)((int)param_2 + 0x20d2) = uVar12;
    *(undefined2 *)(param_2 + 0x835) = uVar15;
    param_2[0x841] = fVar20;
    param_2[0x842] = 0.0;
    fVar20 = (float)FUN_ram_40000bd8(fVar9 / in_register_00000100);
    param_2[0x836] = fVar20;
    fVar20 = (float)FUN_ram_40000bd8(fVar16 / in_register_00000100);
    param_2[0x837] = fVar20;
  }
  uVar10 = DAT_ram_4009f530;
  uVar2 = DAT_ram_40099f38;
  uVar22 = (ulonglong)DAT_ram_4009f098;
  *(ulonglong *)(param_2 + 0x13) = uVar22;
  fVar24 = DAT_ram_4009f290;
  *(ulonglong *)(param_2 + 0x14) = uVar22;
  param_2[0x1c] = fVar24;
  *(undefined1 *)((int)param_2 + 0x46) = 0;
  param_2[0x1a] = 0.0;
  param_2[0x1b] = 0.0;
  *(undefined2 *)(param_2 + 0x1d) = 0;
  uVar21 = FUN_ram_40000d44(uVar2,uVar10);
  fVar16 = DAT_ram_4009a330;
  uVar22 = (ulonglong)DAT_ram_4009f534;
  fVar20 = param_2[0x841];
  *(ulonglong *)(param_2 + 0x15) = uVar22;
  *(undefined8 *)(param_2 + 0x17) = uVar21;
  *(ulonglong *)(param_2 + 0x16) = uVar22;
  *(undefined8 *)(param_2 + 0x18) = uVar21;
  *(undefined1 *)(param_2 + 0x84e) = 0;
  param_2[0x84b] = fVar24;
  param_2[0x843] = 0.0;
  param_2[0x844] = 0.0;
  param_2[0x845] = 0.0;
  param_2[0x846] = 0.0;
  param_2[0x847] = 0.0;
  param_2[0x848] = fVar16;
  param_2[0x849] = 0.0;
  param_2[0x84a] = 0.0;
  param_2[0x84d] = 0.0;
  param_2[0x84f] = fVar20;
  param_2[0x850] = fVar20;
  param_2[0x851] = fVar20;
  *(undefined2 *)(param_2 + 0x84c) = 0;
  compressor_detector_reset(param_2 + 0x81e);
  return;
}

