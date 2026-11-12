/* NanoCore 1.12: FUN_ram_40008c5a at 0x40008c5a.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_262b3eb401a86e243bdf5a3958bcb0a800302d3be771696f14615d078aa9812b
 * Source: analysis/rea-1.12-effects/results/01304-export-0x40008c5a.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40008c5a(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = _DAT_ram_3004f72c;
  iVar3 = FUN_ram_40007990(4,8);
  FUN_ram_400086ec();
  iVar4 = nc_dsp_active_bank(0x3004ee20);
  iVar5 = nc_dsp_inactive_bank(0x3004ee20);
  uVar2 = 0xffffffff;
  if ((iVar4 != 0) && (iVar5 != 0)) {
    FUN_ram_4000303c(iVar5,iVar4,0x308);
    *(undefined4 *)(iVar5 + 0x13c) = 8;
    uVar2 = (undefined4)DAT_ram_4009675c;
    *(undefined4 *)(iVar5 + 0x180) = uVar1;
    *(undefined4 *)(iVar5 + 0x144) = uVar2;
    *(undefined4 *)(iVar5 + 0x148) = uVar2;
    uVar1 = DAT_ram_4009675c._4_4_;
    *(bool *)(iVar5 + 0x141) = iVar3 != 0;
    *(undefined4 *)(iVar5 + 0x14c) = uVar1;
    nc_dsp_publish_bank(0x3004ee20);
    uVar2 = 0;
  }
  FUN_ram_40007bb6();
  return uVar2;
}

