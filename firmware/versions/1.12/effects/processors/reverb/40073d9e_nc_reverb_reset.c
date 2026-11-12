/* NanoCore 1.12: nc_reverb_reset at 0x40073d9e.
 * Role: Routes reset to selected subtype
 * REA: ev_0dfa07b33729de3a0e3a72512955efc1111ef88611b6402330aed885f21b974e
 * Source: analysis/rea-1.12-effects/results/03550-export-0x40073d9e.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_reset(int param_1)

{
  ulonglong uVar1;
  
  if (param_1 != 0) {
    switch(*(undefined1 *)(param_1 + 4)) {
    case 0:
      nc_reverb_room_reset(param_1 + 0x440);
      break;
    case 1:
      nc_reverb_plate_reset(param_1 + 0x440);
      break;
    case 2:
      nc_reverb_hall_reset(param_1 + 0x440);
      break;
    case 3:
      nc_reverb_concert_reset(param_1 + 0x440);
      break;
    case 5:
      nc_reverb_shimmer_reset(param_1 + 0x440);
      break;
    case 6:
      nc_reverb_cloud_reset(param_1 + 0x440);
      break;
    case 7:
      nc_reverb_spring_reset(param_1 + 0x440);
      memset(param_1 + 0x1c5f8,0,0x4000);
      *(undefined2 *)(param_1 + 0x20600) = 0;
      *(undefined4 *)(param_1 + 0x205f8) = *(undefined4 *)(param_1 + 0x205fc);
    }
    uVar1 = (ulonglong)DAT_ram_40096728;
    *(ulonglong *)(param_1 + 8) = uVar1;
    *(ulonglong *)(param_1 + 0xc) = uVar1;
    *(ulonglong *)(param_1 + 0x10) = uVar1;
    *(ulonglong *)(param_1 + 0x14) = uVar1;
    *(ulonglong *)(param_1 + 0x18) = uVar1;
    *(ulonglong *)(param_1 + 0x1c) = uVar1;
    memset(param_1 + 0x20,0,0x18);
    *(undefined1 *)(param_1 + 0x38) = 0;
    return;
  }
  return;
}

