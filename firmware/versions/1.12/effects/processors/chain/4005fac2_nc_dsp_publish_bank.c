/* NanoCore 1.12: nc_dsp_publish_bank at 0x4005fac2.
 * Role: Compares node metadata/parameter blocks, updates revisions and flips active selector.
 * REA: ev_f25174ebaa508adcbedaedfe2196aacf1ef7c9dcef8a8180097c04981b788120
 * Source: analysis/rea-1.12-effects/results/03473-export-0x4005fac2.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_dsp_publish_bank(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 != 0) {
    uVar6 = (uint)*(byte *)(param_1 + 0x860);
    uVar1 = uVar6 ^ 1;
    iVar8 = uVar6 * 0x308;
    uVar5 = 1;
    iVar7 = uVar1 * 0x308;
    iVar4 = param_1 + iVar8;
    iVar3 = param_1 + iVar7;
    if ((*(int *)(iVar3 + 0xc) == *(int *)(iVar4 + 0xc)) &&
       ((*(uint *)(iVar3 + 0x10) & 0xffff) == (*(uint *)(iVar4 + 0x10) & 0xffff))) {
      if (*(int *)(iVar3 + 0x50) == *(int *)(iVar4 + 0x50)) {
        iVar3 = FUN_ram_40002fdc(iVar8 + 0x14 + param_1,iVar7 + 0x14 + param_1,0x30);
        uVar5 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x308;
    uVar2 = 1;
    iVar4 = param_1 + uVar1 * 0x308;
    *(uint *)(iVar4 + 0x54) = *(int *)(iVar3 + 0x54) + uVar5;
    if ((*(int *)(iVar3 + 0x58) == *(int *)(iVar4 + 0x58)) &&
       ((*(uint *)(iVar3 + 0x5c) & 0xffff) == (*(uint *)(iVar4 + 0x5c) & 0xffff))) {
      if (*(int *)(iVar3 + 0x9c) == *(int *)(iVar4 + 0x9c)) {
        iVar3 = FUN_ram_40002fdc(iVar8 + 0x60 + param_1,iVar7 + 0x60 + param_1,0x30);
        uVar2 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x308;
    uVar5 = 1;
    iVar4 = param_1 + uVar1 * 0x308;
    *(uint *)(iVar4 + 0xa0) = *(int *)(iVar3 + 0xa0) + uVar2;
    if ((*(int *)(iVar3 + 0xa4) == *(int *)(iVar4 + 0xa4)) &&
       ((*(uint *)(iVar3 + 0xa8) & 0xffff) == (*(uint *)(iVar4 + 0xa8) & 0xffff))) {
      if (*(int *)(iVar3 + 0xe8) == *(int *)(iVar4 + 0xe8)) {
        iVar3 = FUN_ram_40002fdc(iVar8 + 0xac + param_1,iVar7 + 0xac + param_1,0x30);
        uVar5 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x308;
    uVar2 = 1;
    iVar4 = param_1 + uVar1 * 0x308;
    *(uint *)(iVar4 + 0xec) = *(int *)(iVar3 + 0xec) + uVar5;
    if ((*(int *)(iVar3 + 0xf0) == *(int *)(iVar4 + 0xf0)) &&
       ((*(uint *)(iVar3 + 0xf4) & 0xffff) == (*(uint *)(iVar4 + 0xf4) & 0xffff))) {
      if (*(int *)(iVar3 + 0x134) == *(int *)(iVar4 + 0x134)) {
        iVar3 = FUN_ram_40002fdc(iVar8 + 0xf8 + param_1,iVar7 + 0xf8 + param_1,0x30);
        uVar2 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x308;
    uVar5 = 1;
    iVar4 = param_1 + uVar1 * 0x308;
    *(uint *)(iVar4 + 0x138) = *(int *)(iVar3 + 0x138) + uVar2;
    if ((*(int *)(iVar3 + 0x13c) == *(int *)(iVar4 + 0x13c)) &&
       ((*(uint *)(iVar3 + 0x140) & 0xffff) == (*(uint *)(iVar4 + 0x140) & 0xffff))) {
      if (*(int *)(iVar3 + 0x180) == *(int *)(iVar4 + 0x180)) {
        iVar3 = FUN_ram_40002fdc(iVar8 + 0x144 + param_1,iVar7 + 0x144 + param_1,0x30);
        uVar5 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x308;
    uVar2 = 1;
    iVar4 = param_1 + uVar1 * 0x308;
    *(uint *)(iVar4 + 0x184) = *(int *)(iVar3 + 0x184) + uVar5;
    if ((*(int *)(iVar3 + 0x188) == *(int *)(iVar4 + 0x188)) &&
       ((*(uint *)(iVar3 + 0x18c) & 0xffff) == (*(uint *)(iVar4 + 0x18c) & 0xffff))) {
      if (*(int *)(iVar3 + 0x1cc) == *(int *)(iVar4 + 0x1cc)) {
        iVar3 = FUN_ram_40002fdc(iVar8 + 400 + param_1,iVar7 + 400 + param_1,0x30);
        uVar2 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x308;
    uVar5 = 1;
    iVar4 = param_1 + uVar1 * 0x308;
    *(uint *)(iVar4 + 0x1d0) = *(int *)(iVar3 + 0x1d0) + uVar2;
    if ((*(int *)(iVar3 + 0x1d4) == *(int *)(iVar4 + 0x1d4)) &&
       ((*(uint *)(iVar3 + 0x1d8) & 0xffff) == (*(uint *)(iVar4 + 0x1d8) & 0xffff))) {
      if (*(int *)(iVar3 + 0x218) == *(int *)(iVar4 + 0x218)) {
        iVar3 = FUN_ram_40002fdc(iVar8 + 0x1dc + param_1,iVar7 + 0x1dc + param_1,0x30);
        uVar5 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x308;
    uVar2 = 1;
    iVar4 = param_1 + uVar1 * 0x308;
    *(uint *)(iVar4 + 0x21c) = *(int *)(iVar3 + 0x21c) + uVar5;
    if ((*(int *)(iVar3 + 0x220) == *(int *)(iVar4 + 0x220)) &&
       ((*(uint *)(iVar3 + 0x224) & 0xffff) == (*(uint *)(iVar4 + 0x224) & 0xffff))) {
      if (*(int *)(iVar3 + 0x264) == *(int *)(iVar4 + 0x264)) {
        iVar3 = FUN_ram_40002fdc(iVar8 + 0x228 + param_1,iVar7 + 0x228 + param_1,0x30);
        uVar2 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x308;
    uVar5 = 1;
    iVar4 = param_1 + uVar1 * 0x308;
    *(uint *)(iVar4 + 0x268) = *(int *)(iVar3 + 0x268) + uVar2;
    if ((*(int *)(iVar3 + 0x26c) == *(int *)(iVar4 + 0x26c)) &&
       ((*(uint *)(iVar3 + 0x270) & 0xffff) == (*(uint *)(iVar4 + 0x270) & 0xffff))) {
      if (*(int *)(iVar3 + 0x2b0) == *(int *)(iVar4 + 0x2b0)) {
        iVar3 = FUN_ram_40002fdc(iVar8 + 0x274 + param_1,iVar7 + 0x274 + param_1,0x30);
        uVar5 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x308;
    uVar2 = 1;
    iVar4 = param_1 + uVar1 * 0x308;
    *(uint *)(iVar4 + 0x2b4) = *(int *)(iVar3 + 0x2b4) + uVar5;
    if ((*(int *)(iVar3 + 0x2b8) == *(int *)(iVar4 + 0x2b8)) &&
       ((*(uint *)(iVar3 + 700) & 0xffff) == (*(uint *)(iVar4 + 700) & 0xffff))) {
      if (*(int *)(iVar3 + 0x2fc) == *(int *)(iVar4 + 0x2fc)) {
        iVar3 = FUN_ram_40002fdc(iVar8 + 0x2c0 + param_1,iVar7 + 0x2c0 + param_1,0x30);
        uVar2 = (uint)(iVar3 != 0);
      }
    }
    *(uint *)(param_1 + uVar1 * 0x308 + 0x300) = *(int *)(param_1 + uVar6 * 0x308 + 0x300) + uVar2;
    *(char *)(param_1 + 0x860) = (char)uVar1;
    return;
  }
  return;
}

