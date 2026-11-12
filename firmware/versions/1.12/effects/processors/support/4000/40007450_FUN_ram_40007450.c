/* NanoCore 1.12: FUN_ram_40007450 at 0x40007450.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_dde66a0368047b800fd9015892cbed13d1b24b46a6b7494f8563edf3ed563b2b
 * Source: analysis/rea-1.12-effects/results/01234-export-0x40007450.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

uint FUN_ram_40007450(uint param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  
  param_1 = ~param_1;
  pbVar3 = param_2;
  uVar4 = param_3;
  if (((uint)param_2 & 3) != 0) {
    while (pbVar3 = param_2, uVar4 != 0) {
      pbVar3 = param_2 + 1;
      param_3 = param_3 - 1;
      param_1 = param_1 >> 8 ^ *(uint *)(&DAT_ram_4009626c + ((*param_2 ^ param_1) & 0xff) * 4);
      if (param_3 == 0) break;
      param_2 = pbVar3;
      uVar4 = (uint)pbVar3 & 3;
    }
  }
  for (uVar4 = 0; param_3 >> 2 != uVar4; uVar4 = uVar4 + 1) {
    uVar2 = (param_1 ^ *(uint *)(pbVar3 + uVar4 * 4)) >> 8 ^
            *(uint *)(&DAT_ram_4009626c + ((param_1 ^ *(uint *)(pbVar3 + uVar4 * 4)) & 0xff) * 4);
    uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_ram_4009626c + (uVar2 & 0xff) * 4);
    uVar2 = *(uint *)(&DAT_ram_4009626c + (uVar2 & 0xff) * 4) ^ uVar2 >> 8;
    param_1 = *(uint *)(&DAT_ram_4009626c + (uVar2 & 0xff) * 4) ^ uVar2 >> 8;
  }
  pbVar3 = pbVar3 + (param_3 >> 2) * 4 + -4;
  if ((param_3 & 3) != 0) {
    pbVar5 = pbVar3 + (param_3 & 3);
    do {
      pbVar1 = pbVar3 + 4;
      pbVar3 = pbVar3 + 1;
      param_1 = param_1 >> 8 ^ *(uint *)(&DAT_ram_4009626c + ((*pbVar1 ^ param_1) & 0xff) * 4);
    } while (pbVar5 != pbVar3);
  }
  return ~param_1;
}

