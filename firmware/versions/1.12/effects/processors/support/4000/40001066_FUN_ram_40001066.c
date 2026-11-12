/* NanoCore 1.12: FUN_ram_40001066 at 0x40001066.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_bfb48e02c2dec09a6718a54799401cb2064f55548d3ee430e76f67e607d5d281
 * Source: analysis/rea-1.12-effects/results/01047-export-0x40001066.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

float FUN_ram_40001066(void)

{
  float in_register_00000100;
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar2 = ABS(in_register_00000100);
  fVar1 = in_register_00000100;
  if ((uint)fVar2 < 0x7f800001) {
    if (fVar2 == INFINITY) {
      fVar1 = 0.0;
      if (-1 < (int)in_register_00000100) {
        fVar1 = in_register_00000100;
      }
    }
    else {
      if (0x42b17217 < (int)in_register_00000100) {
        return in_register_00000100;
      }
      if (((-1 < (int)in_register_00000100) || (fVar1 = 0.0, (uint)fVar2 < 0x42cff1b6)) &&
         (fVar1 = in_register_00000100, 0x3eb17218 < (uint)fVar2)) {
        if ((uint)fVar2 < 0x3f851592) {
          iVar3 = ((int)in_register_00000100 >> 0x1f) * 2 + 1;
        }
        else {
          iVar3 = (int)(in_register_00000100 * DAT_ram_4009f658 +
                       (float)*(undefined8 *)
                               (&DAT_ram_40095a04 + ((int)in_register_00000100 >> 0x1f) * -4));
        }
        if ((iVar3 != 0) && (-0x7e < iVar3)) {
          fVar1 = (float)(iVar3 * 0x800000 + (int)in_register_00000100);
        }
      }
    }
  }
  return fVar1;
}

