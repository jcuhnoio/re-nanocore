/* NanoCore 1.12: nc_reverb_cloud_configure at 0x4005ddc4.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_85a4fbd99acb1d8eaed2ad5b210e4920864b7cafe4d17225d7ba9239bf4c8e9b
 * Source: analysis/rea-1.12-effects/results/03465-export-0x4005ddc4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_cloud_configure(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    *(undefined4 *)(param_1 + 0x10) = param_2[3];
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 8) = uVar2;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    *(undefined1 *)(param_1 + 0x14) = 1;
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  return;
}

