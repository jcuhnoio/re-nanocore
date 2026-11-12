/* NanoCore 1.12: FUN_ram_40070eb8 at 0x40070eb8.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_21c40fe07c9a65723c1d8f72f928d7253556605569a2dea1abd6e61e4961f353
 * Source: analysis/rea-1.12-effects/results/03529-export-0x40070eb8.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

float FUN_ram_40070eb8(float param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_2 < 5) {
    uVar1 = param_2 - 1 & 0xff;
    fVar5 = DAT_ram_40099f88;
    fVar3 = DAT_ram_4009a368;
    if (uVar1 < 0x11) {
      iVar2 = uVar1 * 4;
      fVar5 = *(float *)(&DAT_ram_4009f808 + iVar2);
      fVar3 = (float)*(undefined8 *)(&DAT_ram_4009f84c + iVar2);
      if ((float)*(undefined8 *)(&DAT_ram_4009f84c + iVar2) <= *(float *)(&DAT_ram_4009f808 + iVar2)
         ) {
        return 0.0;
      }
    }
  }
  else {
    if ((4 < (param_2 - 8 & 0xff)) && (param_2 != 0x11)) {
      return 0.0;
    }
    iVar2 = (param_2 - 1 & 0xff) * 4;
    fVar5 = *(float *)(&DAT_ram_4009f808 + iVar2);
    fVar3 = (float)*(undefined8 *)(&DAT_ram_4009f84c + iVar2);
    if (fVar3 <= fVar5) {
      return 0.0;
    }
    if (param_2 == 10) {
      fVar4 = fVar5;
      if ((fVar5 <= param_1) && (fVar4 = param_1, fVar3 < param_1)) {
        fVar4 = fVar3;
      }
      fVar4 = (float)FUN_ram_40000c5e(fVar4 / fVar5);
      fVar5 = (float)FUN_ram_40000c5e(fVar3 / fVar5);
      fVar4 = fVar4 / fVar5;
      if (fVar4 < 0.0) {
        return 0.0;
      }
      goto LAB_ram_40070efa;
    }
  }
  fVar4 = (param_1 - fVar5) / (fVar3 - fVar5);
  if (fVar4 < 0.0) {
    return 0.0;
  }
LAB_ram_40070efa:
  if (DAT_ram_4009672c < fVar4) {
    fVar4 = DAT_ram_4009672c;
  }
  return fVar4;
}

