/* NanoCore 1.12: FUN_ram_400079d0 at 0x400079d0.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_6b6bfdc7f1f5eccca713f28ae91a2d9a13336476a83ed47459b963f3f9ca19e5
 * Source: analysis/rea-1.12-effects/results/01263-export-0x400079d0.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4
FUN_ram_400079d0(int param_1,int param_2,undefined4 param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = nc_dsp_active_bank(0x3004ee20);
  iVar2 = nc_dsp_inactive_bank(0x3004ee20);
  uVar3 = 0xffffffff;
  if ((iVar1 != 0) && (uVar3 = 0xffffffff, iVar2 != 0)) {
    iVar5 = *(int *)(iVar1 + param_1 * 0x4c + 0xc);
    FUN_ram_4000303c(iVar2,iVar1,0x308);
    iVar2 = iVar2 + param_1 * 0x4c;
    *(int *)(iVar2 + 0xc) = param_2;
    *(undefined4 *)(iVar2 + 0x50) = param_3;
    *(bool *)(iVar2 + 0x11) = param_6 != 0;
    if (iVar5 != param_2) {
      uVar4 = 0;
      do {
        iVar1 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *(undefined8 *)(iVar2 + 0x14) = *(undefined8 *)(param_4 + iVar1);
        iVar2 = iVar2 + 4;
      } while ((uVar4 & 0xff) < param_5);
    }
    nc_dsp_publish_bank(0x3004ee20);
    uVar3 = 0;
  }
  return uVar3;
}

