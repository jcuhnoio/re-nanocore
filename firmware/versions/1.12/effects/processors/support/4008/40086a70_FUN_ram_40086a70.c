/* NanoCore 1.12: FUN_ram_40086a70 at 0x40086a70.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_6f9b23e9b18a5096c81e0b91e51b599472ba1661398a3ff1677dee8c75c129b2
 * Source: analysis/rea-1.12-effects/results/03628-export-0x40086a70.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined4 FUN_ram_40086a70(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  
  uVar6 = param_2[2];
  iVar2 = param_1[2];
  puVar8 = (undefined4 *)*param_2;
  *param_1 = param_2[1];
  param_1[1] = uVar6;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
    param_1[2] = 0;
  }
  iVar2 = param_1[4];
  if (iVar2 != 0) {
    (**(code **)(iVar2 + -0x10))(*(undefined4 *)(iVar2 + -0xc),iVar2 + -0x10);
    param_1[4] = 0;
  }
  iVar2 = param_2[2];
  param_1[3] = 0;
  param_1[5] = 0;
  if (iVar2 == 0) {
    return 0;
  }
  piVar7 = (int *)param_2[1];
  piVar3 = piVar7 + iVar2 * 7;
  do {
    if (*piVar7 == 0) {
      uVar4 = (uint)*(ushort *)((int)piVar7 + 10);
      if ((uint)*(ushort *)((int)piVar7 + 10) < (uint)*(ushort *)(piVar7 + 2)) {
        uVar4 = (uint)*(ushort *)(piVar7 + 2);
      }
      if (param_3 < uVar4) {
        param_3 = uVar4;
      }
    }
    piVar7 = piVar7 + 7;
  } while (piVar3 != piVar7);
  iVar2 = param_3 * 4;
  iVar9 = iVar2 + 0x10;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)FUN_ram_40002f1a(iVar9);
    if (puVar8 == (undefined4 *)0x0) {
      param_1[2] = 0;
    }
    else {
      *puVar8 = FUN_ram_4008561e;
      puVar8[1] = 0;
      uVar6 = memset(puVar8 + 4,0,iVar2);
      param_1[2] = uVar6;
    }
    puVar1 = (undefined4 *)FUN_ram_40002f1a(iVar9);
    if (puVar1 == (undefined4 *)0x0) goto LAB_ram_40086bec;
    *puVar1 = FUN_ram_4008561e;
    uVar6 = 0;
  }
  else {
    if ((code *)puVar8[1] == (code *)0x0) {
      puVar1 = (undefined4 *)FUN_ram_40002f1a(iVar9);
      if (puVar1 != (undefined4 *)0x0) {
        pcVar5 = FUN_ram_4008561e;
        goto LAB_ram_40086b2a;
      }
LAB_ram_40086c0a:
      param_1[2] = 0;
    }
    else {
      puVar1 = (undefined4 *)(*(code *)puVar8[1])(*puVar8,iVar9);
      if (puVar1 == (undefined4 *)0x0) goto LAB_ram_40086c0a;
      pcVar5 = FUN_ram_4008561e;
      if (puVar8[1] != 0) {
        pcVar5 = (code *)puVar8[2];
      }
LAB_ram_40086b2a:
      uVar6 = *puVar8;
      *puVar1 = pcVar5;
      puVar1[1] = uVar6;
      uVar6 = memset(puVar1 + 4,0,iVar2);
      param_1[2] = uVar6;
    }
    if ((code *)puVar8[1] == (code *)0x0) {
      puVar1 = (undefined4 *)FUN_ram_40002f1a(iVar9);
      if (puVar1 == (undefined4 *)0x0) goto LAB_ram_40086bec;
LAB_ram_40086c00:
      pcVar5 = FUN_ram_4008561e;
    }
    else {
      puVar1 = (undefined4 *)(*(code *)puVar8[1])(*puVar8,iVar9);
      if (puVar1 == (undefined4 *)0x0) goto LAB_ram_40086bec;
      if (puVar8[1] == 0) goto LAB_ram_40086c00;
      pcVar5 = (code *)puVar8[2];
    }
    uVar6 = *puVar8;
    *puVar1 = pcVar5;
  }
  puVar1[1] = uVar6;
  uVar6 = memset(puVar1 + 4,0,iVar2);
  param_1[4] = uVar6;
  if (param_1[2] != 0) {
    param_1[3] = param_3;
    param_1[5] = param_3;
    return 0;
  }
LAB_ram_40086bec:
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  return 0xfffffffd;
}

