/* NanoCore 1.12: expression_state_init at 0x40068c0c.
 * Role: Initializes0x5c-byte control/filter state and sample rate.
 * REA: ev_9fde6a334572144f35cf54a9faf3f36019764d367de24685df61b49a3d27aae9
 * Source: analysis/rea-1.12/results/03506-export-0x40068c0c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void expression_state_init(float param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 != (ulonglong *)0x0) {
    memset((int)param_2 + 4,0,0x58);
    if (param_1 <= 0.0) {
      param_1 = DAT_ram_4009678c;
    }
    uVar6 = (ulonglong)DAT_ram_4009672c;
    uVar1 = (ulonglong)DAT_ram_4009f500;
    uVar2 = (ulonglong)DAT_ram_4009f504;
    uVar3 = (ulonglong)DAT_ram_4009f508;
    uVar4 = (ulonglong)DAT_ram_4009f50c;
    uVar5 = (ulonglong)DAT_ram_4009675c;
    *param_2 = (ulonglong)(uint)param_1;
    *(undefined1 *)((int)param_2 + 4) = 1;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar1;
    *(ulonglong *)((int)param_2 + 0x24) = uVar2;
    param_2[4] = uVar3;
    param_2[5] = uVar4;
    param_2[1] = uVar5;
    *(ulonglong *)((int)param_2 + 0xc) = uVar6;
    param_2[2] = uVar6;
    *(ulonglong *)((int)param_2 + 0x14) = uVar6;
    param_2[3] = uVar6;
    return;
  }
  return;
}

