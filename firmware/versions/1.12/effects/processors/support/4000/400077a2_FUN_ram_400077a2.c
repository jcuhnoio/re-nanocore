/* NanoCore 1.12: FUN_ram_400077a2 at 0x400077a2.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_fb6ea9966bbf1741638c33a22856879312d654b06a18f59b4cb4295797081e53
 * Source: analysis/rea-1.12-effects/results/01253-export-0x400077a2.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400077a2(float param_1,uint param_2)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 unaff_fs1;
  
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  else if (DAT_ram_4009672c < param_1) {
    param_1 = DAT_ram_4009672c;
  }
  uVar4 = _DAT_ram_3004f690;
  if (_DAT_ram_3004f690 == 0) {
    uVar4 = 0xac44;
  }
  uVar5 = FUN_ram_400002f4();
  iVar3 = _DAT_ram_300517e0;
  uVar7 = *(ulonglong *)(_DAT_ram_300517e0 + 0x2c);
  if ((float)uVar7 < 0.0) {
    uVar7 = 0;
  }
  else if (DAT_ram_4009672c < (float)uVar7) {
    uVar7 = (ulonglong)(uint)DAT_ram_4009672c;
  }
  fVar1 = param_1 - (float)uVar7;
  if (ABS(fVar1) < DAT_ram_40096748) {
    *(ulonglong *)(_DAT_ram_300517e0 + 0x2c) = CONCAT44(unaff_fs1,param_1);
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0;
  }
  else {
    lVar2 = (ulonglong)uVar4 * (ulonglong)param_2 + 999;
    iVar6 = FUN_ram_40003bf8((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),1000,0);
    *(ulonglong *)(iVar3 + 0x2c) = uVar7;
    *(int *)(iVar3 + 0x34) = iVar6;
    *(ulonglong *)(iVar3 + 0x30) = (ulonglong)(uint)(fVar1 / (float)iVar6);
  }
  FUN_ram_400002fa(uVar5);
  return;
}

