/* NanoCore 1.12: nc_delay_parameter_count at 0x40025824.
 * Role: Returns eight controls for delay subtype2 (Duck); used by name and count queries.
 * REA: ev_1b21df3a25b307ee70cfe80ab06158be3a25ffb702ebb12710dd96b203526fe5
 * Source: analysis/rea-1.12-effects/results/01954-export-0x40025824.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 nc_delay_parameter_count(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
    uVar1 = 8;
    if ((((param_1 != 2) && (uVar1 = 3, param_1 != 4)) && (uVar1 = 5, param_1 < 5)) &&
       (uVar1 = 4, param_1 == 1)) {
      uVar1 = 3;
    }
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}

