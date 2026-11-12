/* NanoCore 1.12: FUN_ram_40007a82 at 0x40007a82.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_c68272dee544afff0346767db62df3a34cbbfc5464a53ebb65e383946598496d
 * Source: analysis/rea-1.12-effects/results/01264-export-0x40007a82.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_40007a82(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 auStack_2c [2];
  float fStack_1c;
  undefined4 uStack_18;
  
  iVar1 = FUN_ram_4008b61c();
  if (iVar1 != 0) {
    FUN_ram_4000303c(auStack_2c,iVar1,0x1c);
    if (DAT_ram_4009674c < fStack_1c) {
      if (fStack_1c < DAT_ram_40096750) {
        fStack_1c = DAT_ram_4009672c;
      }
    }
    FUN_ram_4008b5da(param_1,auStack_2c);
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = auStack_2c[0];
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = CONCAT44(uStack_18,fStack_1c);
    }
  }
  return;
}

