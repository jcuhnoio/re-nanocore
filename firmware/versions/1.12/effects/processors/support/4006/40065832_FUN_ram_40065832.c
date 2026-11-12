/* NanoCore 1.12: FUN_ram_40065832 at 0x40065832.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_976104e6cd6f950b0219f860ffd76259ed2222898700b4da8deae765df6d64de
 * Source: analysis/rea-1.12-effects/results/03486-export-0x40065832.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

undefined * FUN_ram_40065832(float param_1,int param_2)

{
  undefined *puVar1;
  float fVar2;
  
  fVar2 = DAT_ram_4009b14c;
  puVar1 = DAT_ram_4009672c;
  if (((param_2 - 1U & 0xff) < 7) &&
     (fVar2 = DAT_ram_4009b150, puVar1 = PTR_entry_ram_40096740, param_2 != 5)) {
    puVar1 = (undefined *)((param_1 - DAT_ram_40099f88) / DAT_ram_4009b148);
  }
  else {
    puVar1 = (undefined *)((param_1 - (float)puVar1) / fVar2);
  }
  if (0.0 <= (float)puVar1) {
    if ((float)puVar1 <= (float)DAT_ram_4009672c) {
      return puVar1;
    }
    return DAT_ram_4009672c;
  }
  return (undefined *)0x0;
}

