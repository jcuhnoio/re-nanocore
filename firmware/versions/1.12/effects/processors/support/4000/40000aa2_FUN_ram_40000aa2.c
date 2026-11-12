/* NanoCore 1.12: FUN_ram_40000aa2 at 0x40000aa2.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_f41641180a6e2c4346b7b08233a98e17c75988acd48a3dc8d2a2b290fd3f8968
 * Source: analysis/rea-1.12-effects/results/01037-export-0x40000aa2.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

float FUN_ram_40000aa2(float param_1)

{
  float in_register_00000100;
  float fVar1;
  float fVar2;
  
  fVar1 = ABS(in_register_00000100);
  if ((uint)fVar1 < 0x7f800000) {
    fVar2 = DAT_ram_4009672c;
    if ((uint)fVar1 < 0x41b00000) {
      if ((uint)fVar1 < 0x24000000) {
        return (in_register_00000100 + DAT_ram_4009672c) * in_register_00000100;
      }
      if ((uint)fVar1 < 0x3f800000) {
        fVar1 = (float)FUN_ram_40002c60();
        fVar1 = (float)FUN_ram_40002970(fVar1 * DAT_ram_40096744);
        fVar2 = -fVar1 / (fVar1 + (float)PTR_entry_ram_40096740);
        if (-1 < (int)in_register_00000100) {
          return fVar2;
        }
        goto LAB_ram_40000b20;
      }
      fVar1 = (float)FUN_ram_40002c60();
      fVar1 = (float)FUN_ram_40002970(fVar1 + fVar1);
      fVar2 = DAT_ram_4009672c -
              (float)PTR_entry_ram_40096740 / (fVar1 + (float)PTR_entry_ram_40096740);
    }
    if ((int)in_register_00000100 < 0) {
LAB_ram_40000b20:
      return -fVar2;
    }
  }
  else {
    if ((int)in_register_00000100 < 0) {
      return DAT_ram_4009672c / param_1 - DAT_ram_4009672c;
    }
    fVar2 = DAT_ram_4009672c / param_1 + DAT_ram_4009672c;
  }
  return fVar2;
}

