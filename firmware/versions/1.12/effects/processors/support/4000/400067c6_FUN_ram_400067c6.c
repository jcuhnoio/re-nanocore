/* NanoCore 1.12: FUN_ram_400067c6 at 0x400067c6.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_f933db7b824c0cceca30bdcf548c76111c396a2e5b79ac8e2c853595677144e5
 * Source: analysis/rea-1.12-effects/results/01198-export-0x400067c6.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 FUN_ram_400067c6(int param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  
  FUN_ram_400002f4();
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x2c) = *param_3;
    goto switchD_ram_400067ee_default;
  case 1:
    uVar2 = *(undefined4 *)(param_1 + 0x2c);
    break;
  case 2:
    bVar1 = *(byte *)(param_1 + 0x11) & 0xfd;
    goto LAB_ram_4000680e;
  case 3:
    bVar1 = *(byte *)(param_1 + 0x11) | 2;
LAB_ram_4000680e:
    *(byte *)(param_1 + 0x11) = bVar1;
    goto switchD_ram_400067ee_default;
  case 4:
    if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
      *param_3 = 0;
      goto switchD_ram_400067ee_default;
    }
    uVar2 = 1;
    break;
  case 5:
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    break;
  default:
    goto switchD_ram_400067ee_default;
  }
  *param_3 = uVar2;
switchD_ram_400067ee_default:
  FUN_ram_400002fa();
  return 0;
}

