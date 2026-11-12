/* NanoCore 1.12: FUN_ram_40007876 at 0x40007876.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_c95ef0ed90834913ac83f3a9c3f2fb04663cdaa1944a60d62292a94aa3fa57a6
 * Source: analysis/rea-1.12-effects/results/01254-export-0x40007876.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40007876(float param_1)

{
  int iVar1;
  undefined4 uStack_10;
  
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_4009672c < param_1) {
    param_1 = DAT_ram_4009672c;
  }
  FUN_ram_400002f4();
  iVar1 = _DAT_ram_300517e0;
  *(undefined4 *)(_DAT_ram_300517e0 + 0x30) = 0;
  *(ulonglong *)(iVar1 + 0x2c) = CONCAT44(uStack_10,param_1);
  *(undefined4 *)(iVar1 + 0x34) = 0;
  FUN_ram_400002fa();
  return;
}

