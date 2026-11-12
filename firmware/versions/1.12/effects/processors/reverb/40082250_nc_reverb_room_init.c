/* NanoCore 1.12: nc_reverb_room_init at 0x40082250.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_dce74fb9ebcdea7bea0872c67d5d6069551aff6f15f17e90e77faf909bcdbb80
 * Source: analysis/rea-1.12-effects/results/03603-export-0x40082250.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_room_init(ulonglong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  if (param_2 != (ulonglong *)0x0) {
    puVar8 = param_2;
    do {
      iVar7 = memset(puVar8,0,0x80);
      fence();
      puVar8 = (ulonglong *)(iVar7 + 0x80);
    } while (param_2 + 0x8f10 != puVar8);
    memset(param_2 + 0x8f10,0,0x30);
    uVar6 = DAT_ram_4009f9ec;
    uVar5 = DAT_ram_4009f954;
    uVar4 = DAT_ram_4009f208;
    uVar3 = (undefined4)DAT_ram_4009f060;
    uVar2 = DAT_ram_4009b1a4;
    uVar1 = DAT_ram_40099f30;
    fence();
    uVar14 = (ulonglong)DAT_ram_4009672c;
    uVar9 = (ulonglong)DAT_ram_4009a374;
    uVar10 = (ulonglong)DAT_ram_4009f9e8;
    uVar11 = (ulonglong)DAT_ram_4009b140;
    uVar12 = (ulonglong)DAT_ram_400a1044;
    uVar13 = (ulonglong)DAT_ram_4009675c._4_4_;
    *param_2 = param_1 & 0xffffffff;
    *(undefined4 *)((int)param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 1) = uVar1;
    *(undefined4 *)((int)param_2 + 0xc) = uVar4;
    param_2[2] = uVar14;
    *(undefined4 *)((int)param_2 + 0x14) = uVar3;
    param_2[3] = uVar14;
    *(undefined4 *)((int)param_2 + 0x1c) = uVar6;
    *(undefined4 *)(param_2 + 4) = uVar5;
    *(undefined4 *)((int)param_2 + 0x24) = uVar2;
    param_2[5] = uVar9;
    *(ulonglong *)((int)param_2 + 0x2c) = uVar10;
    param_2[6] = uVar11;
    *(ulonglong *)((int)param_2 + 0x34) = uVar12;
    param_2[7] = uVar14;
    *(undefined4 *)((int)param_2 + 0x3c) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)((int)param_2 + 0x44) = 0;
    param_2[9] = uVar14;
    *(ulonglong *)((int)param_2 + 0x4c) = uVar13;
    uVar9 = (ulonglong)DAT_ram_4009f8d8;
    *(undefined1 *)((int)param_2 + 0x56) = 0;
    *(undefined **)((int)param_2 + 0x54) = &sedeleg;
    param_2[10] = uVar9;
    nc_reverb_room_helper_40080f38(param_2);
    return;
  }
  return;
}

