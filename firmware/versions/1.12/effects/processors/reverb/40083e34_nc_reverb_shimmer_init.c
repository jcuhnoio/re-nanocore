/* NanoCore 1.12: nc_reverb_shimmer_init at 0x40083e34.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_ebb57243ad18ee30d8365acfd056845a4c7065877dbeb2ab1d5855af2a33d179
 * Source: analysis/rea-1.12-effects/results/03610-export-0x40083e34.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_shimmer_init(ulonglong param_1,ulonglong *param_2)

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
    } while (param_2 + 0x9300 != puVar8);
    memset(param_2 + 0x9300,0,0x2c);
    uVar6 = DAT_ram_400a0fd0;
    uVar5 = DAT_ram_4009f9e4;
    uVar4 = DAT_ram_4009f9d4;
    uVar3 = DAT_ram_4009a330;
    uVar2 = DAT_ram_40096780;
    uVar1 = DAT_ram_4009672c;
    fence();
    uVar9 = (ulonglong)DAT_ram_40099f9c;
    uVar10 = (ulonglong)DAT_ram_40099f38;
    uVar11 = (ulonglong)DAT_ram_4009f9f4;
    uVar12 = (ulonglong)DAT_ram_4009f9f8;
    uVar13 = (ulonglong)DAT_ram_4009f31c;
    uVar14 = (ulonglong)DAT_ram_4009a378;
    *param_2 = param_1 & 0xffffffff;
    *(undefined1 *)(param_2 + 3) = 1;
    *(undefined2 *)((int)param_2 + 0x24) = 0x100;
    *(undefined **)((int)param_2 + 0x44) = &sedeleg;
    *(undefined4 *)((int)param_2 + 4) = uVar6;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined4 *)((int)param_2 + 0xc) = uVar4;
    *(undefined4 *)(param_2 + 2) = uVar2;
    *(undefined4 *)((int)param_2 + 0x14) = uVar5;
    *(undefined4 *)((int)param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 5) = uVar3;
    *(ulonglong *)((int)param_2 + 0x2c) = uVar9;
    param_2[6] = uVar10;
    *(ulonglong *)((int)param_2 + 0x34) = uVar11;
    param_2[7] = uVar12;
    *(ulonglong *)((int)param_2 + 0x3c) = uVar13;
    param_2[8] = uVar14;
    nc_reverb_shimmer_helper_4008281c(param_2);
    return;
  }
  return;
}

