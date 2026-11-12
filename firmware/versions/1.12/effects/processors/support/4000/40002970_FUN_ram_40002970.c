/* NanoCore 1.12: FUN_ram_40002970 at 0x40002970.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_702791e20d1386aabde0dff82e5c9aa8b8f886f566b92df02676d58bae0c6cdb
 * Source: analysis/rea-1.12-effects/results/01057-export-0x40002970.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined1  [16] FUN_ram_40002970(float param_1,ulonglong param_2)

{
  uint in_register_00000100;
  uint uVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar1 = in_register_00000100 & 0x7fffffff;
  if (uVar1 < 0x4195b844) {
    if (uVar1 < 0x3eb17219) {
      if (uVar1 < 0x33000000) {
        auVar6._4_4_ = 0;
        auVar6._0_4_ = in_register_00000100;
        auVar6._8_8_ = param_2;
        return auVar6;
      }
      iVar2 = 0;
    }
    else {
      if (0x3f851591 < uVar1) {
        fVar3 = (float)DAT_ram_4009675c;
        if ((int)in_register_00000100 < 0) {
          fVar3 = DAT_ram_4009f5e8;
        }
        goto LAB_ram_400029ba;
      }
      if ((int)in_register_00000100 < 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = 1;
      }
    }
  }
  else {
    if (0x7f800000 < uVar1) goto LAB_ram_40002ae6;
    if (uVar1 == 0x7f800000) {
      if (-1 < (int)in_register_00000100) goto LAB_ram_40002ae6;
LAB_ram_40002bf2:
      in_register_00000100 = DAT_ram_40096728;
      goto LAB_ram_40002ae6;
    }
    if ((int)in_register_00000100 < 0) {
      fVar3 = DAT_ram_4009f5e8;
      if (param_1 + DAT_ram_400a4474 < 0.0) goto LAB_ram_40002bf2;
    }
    else {
      fVar3 = (float)DAT_ram_4009675c;
      if (0x42b17217 < uVar1) {
        auVar6 = FUN_ram_40002ed4(0);
        return auVar6;
      }
    }
LAB_ram_400029ba:
    iVar2 = (int)(fVar3 + param_1 * DAT_ram_4009f658);
  }
  param_2 = (ulonglong)DAT_ram_4009672c;
  if (iVar2 == 0) {
    auVar5._4_4_ = 0;
    auVar5._0_4_ = in_register_00000100;
    auVar5._8_4_ = DAT_ram_4009672c;
    auVar5._12_4_ = 0;
    return auVar5;
  }
  if (((iVar2 != -1) && (iVar2 != 1)) && (iVar2 + 1U < 0x3a)) {
    if (iVar2 < 0x17) {
      in_register_00000100 = in_register_00000100 + iVar2 * 0x800000;
    }
    else {
      in_register_00000100 = in_register_00000100 + iVar2 * 0x800000;
    }
  }
LAB_ram_40002ae6:
  auVar4._4_4_ = 0;
  auVar4._0_4_ = in_register_00000100;
  auVar4._8_8_ = param_2;
  return auVar4;
}

