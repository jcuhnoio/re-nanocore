/* NanoCore 1.12: nc_model_context_init at 0x40088b3c.
 * Role: Initializes the 0x54-byte model context and activation tables.
 * REA: ev_592a2b5b197ace98a192cf8e23f48f7c4d43b9886b0fd918e37f153d07c0cffe
 * Source: analysis/rea-1.12/results/03636-export-0x40088b3c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 nc_model_context_init(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  float fVar11;
  ulonglong uVar12;
  ulonglong extraout_fa0;
  
  if (param_1 != 0) {
    memset(param_1,0,0x54);
    fVar1 = DAT_ram_4009672c;
    puVar10 = (ulonglong *)&DAT_ram_30083fd8;
    *(ulonglong *)(param_1 + 0x4c) = (ulonglong)(uint)DAT_ram_4009672c;
    fVar6 = DAT_ram_400a1394;
    fVar5 = DAT_ram_4009f9e4;
    fVar4 = DAT_ram_40099f58;
    fVar3 = DAT_ram_40099f38;
    fVar2 = DAT_ram_40096768;
    uVar8 = 0;
    if (DAT_ram_30084fe0 == '\0') {
      uVar12 = (ulonglong)DAT_ram_400a1390;
      fVar11 = 0.0;
      iVar7 = 0;
      while( true ) {
        *puVar10 = uVar12;
        iVar7 = iVar7 + 1;
        fVar11 = (float)FUN_ram_40000bd8(-((fVar11 / fVar6) * fVar4 + fVar2),uVar8);
        puVar9 = (ulonglong *)((int)puVar10 + 0x804);
        puVar10 = (ulonglong *)((int)puVar10 + 4);
        *puVar9 = (ulonglong)(uint)(fVar1 / (fVar11 + fVar1));
        if (iVar7 == 0x200) break;
        fVar11 = (float)iVar7;
        uVar8 = FUN_ram_40000aa2((fVar11 / fVar6) * fVar3 + fVar5);
        uVar12 = extraout_fa0;
      }
      _DAT_ram_300847d8 = _DAT_ram_300847d4;
      _DAT_ram_30084fdc = _DAT_ram_30084fd8;
      DAT_ram_30084fe0 = '\x01';
    }
    return 0;
  }
  return 0xffffffff;
}

