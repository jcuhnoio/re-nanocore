/* NanoCore 1.12: FUN_ram_4005c4ae at 0x4005c4ae.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_c66b558a21516109097eb69b815ed907bfbec54444fe111b3b568fde53d1b062
 * Source: analysis/rea-1.12-effects/results/03459-export-0x4005c4ae.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Removing unreachable block (ram,0x4005c530) */
/* WARNING: Removing unreachable block (ram,0x4005c5c0) */

void FUN_ram_4005c4ae(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar2 = DAT_ram_4009672c;
  if (param_2 != (float *)0x0) {
    bVar3 = *param_2 < DAT_ram_4009672c;
    *(undefined8 *)(param_2 + 0x18) = param_1;
    fVar12 = *param_2;
    if (bVar3) {
      fVar12 = fVar2;
    }
    fVar9 = (float)FUN_ram_40000d44(DAT_ram_40099f38,(float)param_1 / DAT_ram_40099f70);
    fVar12 = DAT_ram_4009f05c / fVar12;
    fVar10 = (float)FUN_ram_400009d2(fVar12);
    fVar11 = (float)FUN_ram_40000712(fVar12);
    fVar10 = fVar10 / DAT_ram_4009f050;
    fVar12 = fVar9 + fVar2;
    fVar8 = fVar9 - fVar2;
    fVar1 = SQRT(fVar9) + SQRT(fVar9);
    fVar6 = -(fVar11 * fVar8) + fVar12;
    fVar4 = fVar11 * fVar8 + fVar12;
    fVar7 = -(fVar11 * fVar12) + fVar8;
    fVar5 = fVar9 * DAT_ram_40096744;
    fVar2 = fVar2 / (fVar10 * fVar1 + fVar6);
    *(ulonglong *)(param_2 + 0x11) = (ulonglong)(uint)(fVar9 * (-(fVar10 * fVar1) + fVar4) * fVar2);
    *(ulonglong *)(param_2 + 0x12) = (ulonglong)(uint)((fVar7 + fVar7) * fVar2);
    *(ulonglong *)(param_2 + 0xf) = (ulonglong)(uint)(fVar9 * (fVar10 * fVar1 + fVar4) * fVar2);
    *(ulonglong *)(param_2 + 0x10) = (ulonglong)(uint)(fVar5 * (fVar11 * fVar12 + fVar8) * fVar2);
    *(ulonglong *)(param_2 + 0x13) = (ulonglong)(uint)((-(fVar10 * fVar1) + fVar6) * fVar2);
    return;
  }
  return;
}

