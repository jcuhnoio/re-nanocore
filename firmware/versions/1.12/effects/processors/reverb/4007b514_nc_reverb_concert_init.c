/* NanoCore 1.12: nc_reverb_concert_init at 0x4007b514.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_21fd77d1694947689f9a6e14417b96517dad96a61a69f7504bc3e527cae708db
 * Source: analysis/rea-1.12-effects/results/03587-export-0x4007b514.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_concert_init(float param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong *puVar8;
  
  if (param_2 != (ulonglong *)0x0) {
    puVar8 = param_2;
    do {
      iVar7 = memset(puVar8,0,0x80);
      fence();
      puVar8 = (ulonglong *)(iVar7 + 0x80);
    } while (param_2 + 0x5a50 != puVar8);
    memset(param_2 + 0x5a50,0,0x60);
    uVar6 = DAT_ram_400a0e90;
    uVar5 = DAT_ram_400a0e8c;
    uVar4 = DAT_ram_400a0e88;
    uVar3 = DAT_ram_400a0e84;
    uVar2 = DAT_ram_400a0e80;
    uVar1 = DAT_ram_400a0e7c;
    fence();
    *(undefined4 *)((int)param_2 + 4) = DAT_ram_400a0e78;
    *(undefined4 *)(param_2 + 1) = uVar1;
    *(undefined4 *)((int)param_2 + 0xc) = uVar2;
    *(undefined4 *)(param_2 + 2) = uVar3;
    *(undefined4 *)((int)param_2 + 0x14) = uVar4;
    *(undefined4 *)(param_2 + 3) = uVar5;
    *(undefined4 *)((int)param_2 + 0x1c) = uVar6;
    if (param_1 <= 0.0) {
      param_1 = DAT_ram_4009f078;
    }
    *(undefined **)(param_2 + 4) = &sedeleg;
    *param_2 = (ulonglong)(uint)param_1;
    nc_reverb_concert_helper_4007a4b4(param_2);
    return;
  }
  return;
}

