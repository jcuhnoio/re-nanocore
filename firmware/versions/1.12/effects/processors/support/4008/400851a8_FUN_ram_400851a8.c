/* NanoCore 1.12: FUN_ram_400851a8 at 0x400851a8.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_f32ff795c73759b28c1cf570dafcf98185981405a60504be45015fb1ce97df4b
 * Source: analysis/rea-1.12-effects/results/03614-export-0x400851a8.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 FUN_ram_400851a8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = DAT_ram_400a10cc;
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = DAT_ram_400a10c8;
    param_1[3] = uVar1;
    uVar3 = DAT_ram_400a10d8;
    uVar2 = DAT_ram_400a10d4;
    uVar1 = DAT_ram_400a10d0;
    param_1[7] = DAT_ram_400a10dc;
    param_1[6] = uVar3;
    uVar3 = DAT_ram_400a10e4;
    param_1[8] = DAT_ram_400a10e0;
    param_1[9] = uVar3;
    uVar5 = DAT_ram_400a10f4;
    uVar4 = DAT_ram_400a10ec;
    uVar3 = DAT_ram_400a10e8;
    param_1[0xc] = DAT_ram_400a10f0;
    param_1[0xd] = uVar5;
    uVar7 = DAT_ram_400a1100;
    uVar6 = DAT_ram_400a10fc;
    uVar5 = DAT_ram_400a10f8;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = uVar1;
    param_1[5] = uVar2;
    param_1[10] = uVar3;
    param_1[0xb] = uVar4;
    param_1[0xe] = uVar5;
    param_1[0xf] = uVar6;
    param_1[0x12] = 0;
    uVar1 = DAT_ram_400a1104;
    param_1[0x10] = uVar7;
    param_1[0x11] = uVar1;
    return 0;
  }
  return 1;
}

