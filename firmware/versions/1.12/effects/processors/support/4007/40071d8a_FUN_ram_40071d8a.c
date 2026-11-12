/* NanoCore 1.12: FUN_ram_40071d8a at 0x40071d8a.
 * Role: Transitive helper; semantic role not yet named.
 * REA: ev_b0829fe3ed29b1dfe213c0436b0152ad92a86d00aac90876fb9c86d4c37c779f
 * Source: analysis/rea-1.12-effects/results/03537-export-0x40071d8a.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void FUN_ram_40071d8a(float param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  if (param_2 != (ulonglong *)0x0) {
    memset((int)param_2 + 4,0,0x18);
    if (param_1 <= 0.0) {
      param_1 = DAT_ram_4009678c;
    }
    uVar1 = (ulonglong)DAT_ram_4009f230;
    *(undefined1 *)((int)param_2 + 0xc) = 0;
    *(undefined1 *)((int)param_2 + 0xd) = 0;
    *(undefined1 *)((int)param_2 + 0xe) = 0;
    *(undefined1 *)((int)param_2 + 0xf) = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    *(undefined1 *)((int)param_2 + 0x11) = 0;
    *(undefined1 *)((int)param_2 + 0x12) = 0;
    *(undefined1 *)((int)param_2 + 0x13) = 0;
    *(undefined1 *)((int)param_2 + 0x14) = 0;
    *(undefined1 *)((int)param_2 + 0x15) = 0;
    *(undefined1 *)((int)param_2 + 0x16) = 0;
    *(undefined1 *)((int)param_2 + 0x17) = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    *(undefined1 *)((int)param_2 + 0x19) = 0;
    *(undefined1 *)((int)param_2 + 0x1a) = 0;
    *(undefined1 *)((int)param_2 + 0x1b) = 0;
    *param_2 = (ulonglong)(uint)param_1;
    param_2[1] = uVar1;
    return;
  }
  return;
}

