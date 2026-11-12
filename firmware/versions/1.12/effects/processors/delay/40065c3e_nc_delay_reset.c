/* NanoCore 1.12: nc_delay_reset at 0x40065c3e.
 * Role: Clears delay state and buffers through supplied callback
 * REA: ev_e4aa0f291e5d3dc7e9fa94f2aa9da8f7e1f29a0acf412e4efe972d790c33e667
 * Source: analysis/rea-1.12-effects/results/03490-export-0x40065c3e.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_delay_reset(undefined8 *param_1,code *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if ((*(int *)((int)param_1 + 4) != 0) && (*(int *)(param_1 + 1) != 0)) {
    (*param_2)(*(int *)((int)param_1 + 4),*(int *)(param_1 + 1) << 2);
  }
  uVar5 = _DAT_ram_4009672c;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((int)param_1 + 0x2c) = uVar5;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x3a) = 1;
  if ((*(int *)(param_1 + 2) != 0) && (*(int *)((int)param_1 + 0x14) != 0)) {
    (*param_2)(*(int *)(param_1 + 2),*(int *)((int)param_1 + 0x14) << 2);
  }
  uVar5 = _DAT_ram_4009672c;
  *(undefined4 *)((int)param_1 + 0xfc) = 0x12345678;
  *(undefined4 *)(param_1 + 0x32) = 0x87654321;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((int)param_1 + 0xbc) = 0;
  *(undefined4 *)((int)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar4 = (undefined4)uVar5;
  *(undefined4 *)((int)param_1 + 0x104) = uVar4;
  *(undefined1 *)((int)param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined4 *)((int)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)((int)param_1 + 0x16c) = 0;
  *(undefined4 *)((int)param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined4 *)((int)param_1 + 0x18c) = 0;
  *(undefined4 *)((int)param_1 + 0x194) = uVar4;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((int)param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(undefined4 *)((int)param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  fVar3 = DAT_ram_40099f28;
  *(undefined4 *)((int)param_1 + 0x1ac) = uVar4;
  *(undefined4 *)(param_1 + 0x36) = 0;
  fVar2 = (float)*param_1;
  *(undefined4 *)((int)param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x37) = uVar4;
  *(undefined4 *)((int)param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((int)param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x39) = uVar4;
  uVar4 = DAT_ram_4009f294;
  if (fVar3 <= fVar2) {
    fVar3 = DAT_ram_4009a374;
    if (fVar2 * DAT_ram_4009f22c < DAT_ram_4009a374) {
      fVar3 = fVar2 * DAT_ram_4009f22c;
    }
    fVar3 = (fVar3 / fVar2) * DAT_ram_4009f090;
    uVar4 = FUN_ram_400009d2(fVar3);
    uVar5 = FUN_ram_40000712(fVar3);
  }
  uVar1 = _DAT_ram_4009672c;
  *(undefined4 *)((int)param_1 + 0x1cc) = uVar4;
  *(int *)(param_1 + 0x3a) = (int)uVar5;
  *(int *)((int)param_1 + 0x1d4) = (int)uVar1;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined4 *)((int)param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined4 *)((int)param_1 + 0x234) = 0;
  *(undefined2 *)(param_1 + 0x47) = 0;
  if (*(short *)((int)param_1 + 0x222) == 0) {
    *(undefined2 *)((int)param_1 + 0x222) = 0x44;
  }
  if (*(short *)(param_1 + 0x44) == 0) {
    *(undefined2 *)(param_1 + 0x44) = 0x40;
  }
  if ((*(int *)(param_1 + 0x45) != 0) && (*(ushort *)((int)param_1 + 0x22c) != 0)) {
    (*param_2)(*(int *)(param_1 + 0x45),(uint)*(ushort *)((int)param_1 + 0x22c) << 2);
  }
  uVar6 = (ulonglong)DAT_ram_40096728;
  *(undefined1 *)((int)param_1 + 0x24a) = 0;
  *(undefined2 *)((int)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x20c) = 0;
  *(ulonglong *)((int)param_1 + 0x3c) = uVar6;
  param_1[8] = uVar6;
  *(ulonglong *)((int)param_1 + 0x44) = uVar6;
  param_1[9] = uVar6;
  *(ulonglong *)((int)param_1 + 0x4c) = uVar6;
  param_1[10] = uVar6;
  *(ulonglong *)((int)param_1 + 0x54) = uVar6;
  param_1[0xb] = uVar6;
  *(ulonglong *)((int)param_1 + 0x5c) = uVar6;
  *(undefined2 *)((int)param_1 + 0x242) = 0;
  *(undefined4 *)((int)param_1 + 0x244) = 0;
  *(undefined2 *)(param_1 + 0x49) = 0;
  return;
}

