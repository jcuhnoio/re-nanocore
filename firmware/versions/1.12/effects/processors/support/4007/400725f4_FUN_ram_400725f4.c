/* NanoCore 1.12: FUN_ram_400725f4 at 0x400725f4.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_504ef6113c41ac13bb8e39e54c81b82efb925989d15725dd99ad3567187168e0
 * Source: analysis/rea-1.12-effects/results/03542-export-0x400725f4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_400725f4(float param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong *puVar2;
  
  if (param_2 != (ulonglong *)0x0) {
    puVar2 = param_2;
    do {
      iVar1 = memset(puVar2,0,0x80);
      fence();
      puVar2 = (ulonglong *)(iVar1 + 0x80);
    } while (puVar2 != param_2 + 0x400);
    memset(puVar2,0,0x18);
    fence();
    if (param_1 <= DAT_ram_40099f28) {
      param_1 = DAT_ram_4009678c;
    }
    *param_2 = (ulonglong)(uint)param_1;
    *(undefined1 *)((int)param_2 + 0x2014) = 0xff;
    return;
  }
  return;
}

