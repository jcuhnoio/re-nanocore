/* NanoCore 1.12: nc_reverb_hall_init at 0x4007d834.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_2e8717128812372f5dd8339d08551061036089bb70841a3e9c8cb8b307597155
 * Source: analysis/rea-1.12-effects/results/03592-export-0x4007d834.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_hall_init(ulonglong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_2 != (ulonglong *)0x0) {
    puVar3 = param_2;
    do {
      iVar2 = memset(puVar3,0,0x80);
      fence();
      puVar3 = (ulonglong *)(iVar2 + 0x80);
    } while (param_2 + 0x82b0 != puVar3);
    memset(param_2 + 0x82b0,0,0x74);
    uVar1 = DAT_ram_400a0ef0;
    fence();
    uVar4 = (ulonglong)DAT_ram_400a0ef4;
    uVar5 = (ulonglong)DAT_ram_4009f9ec;
    uVar6 = (ulonglong)DAT_ram_4009f2fc;
    uVar7 = (ulonglong)DAT_ram_40096730;
    uVar8 = (ulonglong)DAT_ram_4009f9f0;
    uVar9 = (ulonglong)DAT_ram_4009672c;
    *(undefined1 *)((int)param_2 + 0x2c) = 0;
    *(undefined **)(param_2 + 6) = &sedeleg;
    *param_2 = param_1 & 0xffffffff;
    *(undefined4 *)((int)param_2 + 4) = uVar1;
    param_2[1] = uVar4;
    *(ulonglong *)((int)param_2 + 0xc) = uVar5;
    param_2[2] = uVar6;
    *(undefined4 *)((int)param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar7;
    param_2[4] = uVar8;
    *(ulonglong *)((int)param_2 + 0x24) = uVar9;
    *(undefined4 *)(param_2 + 5) = 0;
    nc_reverb_hall_helper_4007c9ec(param_2);
    return;
  }
  return;
}

