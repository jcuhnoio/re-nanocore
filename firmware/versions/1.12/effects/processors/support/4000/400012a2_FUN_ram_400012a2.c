/* NanoCore 1.12: FUN_ram_400012a2 at 0x400012a2.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_cc7b1129f757ff5238d5c491813518b8e5f5a1309c432fc503b373764c640c99
 * Source: analysis/rea-1.12-effects/results/01048-export-0x400012a2.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

float FUN_ram_400012a2(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint in_register_00000100;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  
  if ((in_register_00000100 & 0x7fffffff) == 0) {
    return DAT_ram_400a4418 / 0.0;
  }
  if ((int)in_register_00000100 < 0) {
    return (param_1 - param_1) / 0.0;
  }
  if (0x7f7fffff < (int)in_register_00000100) {
    return param_1 + param_1;
  }
  iVar7 = 0;
  if ((int)in_register_00000100 < 0x800000) {
    iVar7 = -0x19;
  }
  uVar5 = in_register_00000100 & 0x7fffff;
  uVar6 = uVar5 + 0x4afb20 & 0x800000;
  fVar4 = (float)(uVar6 ^ 0x3f800000 | uVar5) - DAT_ram_4009672c;
  iVar7 = ((int)in_register_00000100 >> 0x17) + -0x7f + iVar7 + ((int)uVar6 >> 0x17);
  if ((uVar5 + 0xf & 0x7ffff0) == 0) {
    if (fVar4 == 0.0) {
      if (iVar7 == 0) {
        return 0.0;
      }
      return (float)iVar7 * DAT_ram_400a43fc + (float)iVar7 * DAT_ram_400a4400;
    }
    fVar8 = fVar4 * fVar4 * (-(fVar4 * DAT_ram_4009f2d4) + (float)DAT_ram_4009675c);
    if (iVar7 != 0) {
      return (float)iVar7 * DAT_ram_400a43fc -
             ((-((float)iVar7 * DAT_ram_400a4400) + fVar8) - fVar4);
    }
  }
  else {
    fVar2 = fVar4 / (fVar4 + (float)PTR_entry_ram_40096740);
    fVar1 = (float)iVar7;
    fVar3 = fVar2 * fVar2;
    fVar8 = fVar3 * fVar3;
    fVar3 = ((fVar8 * DAT_ram_400a4420 + DAT_ram_400a4424) * fVar8 + DAT_ram_4009f0bc) * fVar8 +
            (((fVar8 * DAT_ram_400a4428 + DAT_ram_400a442c) * fVar8 + DAT_ram_400a4430) * fVar8 +
            DAT_ram_4009f544) * fVar3;
    if ((int)(0x35c288 - uVar5 | uVar5 - 0x30a3d0) < 1) {
      fVar2 = (fVar4 - fVar3) * fVar2;
      if (iVar7 == 0) {
        return fVar4 - fVar2;
      }
      return fVar1 * DAT_ram_400a43fc - ((-(fVar1 * DAT_ram_400a4400) + fVar2) - fVar4);
    }
    fVar8 = fVar4 * (float)DAT_ram_4009675c * fVar4;
    fVar2 = (fVar3 + fVar8) * fVar2;
    if (iVar7 != 0) {
      return fVar1 * DAT_ram_400a43fc - ((fVar8 - (fVar1 * DAT_ram_400a4400 + fVar2)) - fVar4);
    }
    fVar8 = fVar8 - fVar2;
  }
  return fVar4 - fVar8;
}

