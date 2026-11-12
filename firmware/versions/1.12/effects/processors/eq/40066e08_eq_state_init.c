/* NanoCore 1.12: eq_state_init at 0x40066e08.
 * Role: Clears0x268-byte state and sets sample rate, enable flag, subtype sentinel.
 * REA: ev_f520a5de7ddb9ed058a3dbfd0ba261728a48a9ddc44a757c3ba5167dbdf2c6a6
 * Source: analysis/rea-1.12/results/03501-export-0x40066e08.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void eq_state_init(float param_1,ulonglong *param_2)

{
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != (ulonglong *)0x0) {
    memset(param_2,0,0x268);
    fVar1 = param_1;
    if (param_1 <= DAT_ram_4009672c) {
      fVar1 = DAT_ram_4009678c;
    }
    uVar4 = (ulonglong)DAT_ram_4009f46c;
    uVar3 = (ulonglong)DAT_ram_40096728;
    uVar2 = (ulonglong)(uint)DAT_ram_4009672c;
    *param_2 = (ulonglong)(uint)fVar1;
    *(bool *)((int)param_2 + 4) = 0.0 < param_1;
    *(undefined1 *)((int)param_2 + 5) = 0xff;
    param_2[1] = uVar3;
    *(ulonglong *)((int)param_2 + 0xc) = uVar3;
    param_2[2] = uVar4;
    *(ulonglong *)((int)param_2 + 0x14) = uVar4;
    param_2[3] = uVar4;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar4;
    param_2[4] = uVar4;
    *(ulonglong *)((int)param_2 + 0x24) = uVar4;
    param_2[5] = uVar4;
    *(ulonglong *)((int)param_2 + 0x2c) = uVar4;
    param_2[6] = uVar4;
    *(ulonglong *)((int)param_2 + 0x34) = uVar2;
    return;
  }
  return;
}

