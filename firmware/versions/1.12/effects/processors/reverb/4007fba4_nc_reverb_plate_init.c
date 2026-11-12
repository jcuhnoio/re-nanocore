/* NanoCore 1.12: nc_reverb_plate_init at 0x4007fba4.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_924d3d008d25562aae7354d8f94a05fac4eccd799867cbadbb5ed92a719acb9c
 * Source: analysis/rea-1.12-effects/results/03597-export-0x4007fba4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_plate_init(uint param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_2 != (ulonglong *)0x0) {
    puVar2 = param_2;
    do {
      iVar1 = memset(puVar2,0,0x80);
      fence();
      puVar2 = (ulonglong *)(iVar1 + 0x80);
    } while (param_2 + 0x69b0 != puVar2);
    memset(param_2 + 0x69b0,0,0x3c);
    fence();
    uVar3 = (ulonglong)DAT_ram_400a0fd0;
    uVar4 = (ulonglong)DAT_ram_4009f080;
    uVar5 = (ulonglong)DAT_ram_40099f70;
    uVar6 = (ulonglong)DAT_ram_4009f9e4;
    uVar7 = (ulonglong)DAT_ram_4009672c;
    *(undefined1 *)(param_2 + 4) = 0;
    *(undefined1 *)(param_2 + 3) = 1;
    *(undefined **)((int)param_2 + 0x24) = &sedeleg;
    *param_2 = (ulonglong)param_1;
    *(ulonglong *)((int)param_2 + 4) = uVar3;
    param_2[1] = uVar4;
    *(undefined4 *)((int)param_2 + 0xc) = 0;
    param_2[2] = uVar5;
    *(ulonglong *)((int)param_2 + 0x14) = uVar6;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar7;
    nc_reverb_plate_helper_4007eae0(param_2);
    return;
  }
  return;
}

