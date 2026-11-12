/* NanoCore 1.12: FUN_ram_4005c2aa at 0x4005c2aa.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_d70e02761877fa85fa7749bb92f00ce40118c5485635d7f4b8e98e423e1e53e9
 * Source: analysis/rea-1.12-effects/results/03457-export-0x4005c2aa.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Removing unreachable block (ram,0x4005c32c) */
/* WARNING: Removing unreachable block (ram,0x4005c3be) */

void FUN_ram_4005c2aa(undefined8 param_1,float *param_2)

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
  
  fVar2 = DAT_ram_4009672c;
  if (param_2 != (float *)0x0) {
    bVar3 = *param_2 < DAT_ram_4009672c;
    *(undefined8 *)(param_2 + 0x16) = param_1;
    fVar11 = *param_2;
    if (bVar3) {
      fVar11 = fVar2;
    }
    fVar8 = (float)FUN_ram_40000d44(DAT_ram_40099f38,(float)param_1 / DAT_ram_40099f70);
    fVar11 = DAT_ram_4009f04c / fVar11;
    fVar9 = (float)FUN_ram_400009d2(fVar11);
    fVar10 = (float)FUN_ram_40000712(fVar11);
    fVar9 = fVar9 / DAT_ram_4009f050;
    fVar11 = fVar8 + fVar2;
    fVar7 = fVar8 - fVar2;
    fVar1 = SQRT(fVar8) + SQRT(fVar8);
    fVar4 = fVar10 * fVar7 + fVar11;
    fVar6 = -(fVar10 * fVar7) + fVar11;
    fVar5 = (fVar10 * fVar11 + fVar7) * DAT_ram_40096744;
    fVar2 = fVar2 / (fVar9 * fVar1 + fVar4);
    *(ulonglong *)(param_2 + 3) = (ulonglong)(uint)(fVar8 * (-(fVar9 * fVar1) + fVar6) * fVar2);
    param_2[4] = fVar5 * fVar2;
    *(ulonglong *)(param_2 + 1) = (ulonglong)(uint)(fVar8 * (fVar9 * fVar1 + fVar6) * fVar2);
    *(ulonglong *)(param_2 + 2) =
         (ulonglong)(uint)((fVar8 + fVar8) * (-(fVar10 * fVar11) + fVar7) * fVar2);
    *(ulonglong *)(param_2 + 5) = (ulonglong)(uint)((-(fVar9 * fVar1) + fVar4) * fVar2);
    return;
  }
  return;
}

