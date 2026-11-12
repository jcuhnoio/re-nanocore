/* NanoCore 1.12: nc_reverb_init at 0x40073b48.
 * Role: Clears 0x74c68 state bytes; sets sample rate and invalid subtype
 * REA: ev_a4e264c7c7835b49f6ecd052370d631e2162e298610b4602e7dc1af435815c37
 * Source: analysis/rea-1.12-effects/results/03547-export-0x40073b48.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_init(float param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  if (param_2 != (ulonglong *)0x0) {
    memset(param_2,0,0x74c68);
    if (param_1 <= DAT_ram_40099f28) {
      param_1 = DAT_ram_4009678c;
    }
    uVar1 = (ulonglong)DAT_ram_40096728;
    *param_2 = (ulonglong)(uint)param_1;
    *(undefined1 *)((int)param_2 + 4) = 0xff;
    param_2[1] = uVar1;
    *(ulonglong *)((int)param_2 + 0xc) = uVar1;
    param_2[2] = uVar1;
    *(ulonglong *)((int)param_2 + 0x14) = uVar1;
    param_2[3] = uVar1;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar1;
    memset(param_2 + 4,0,0x18);
    return;
  }
  return;
}

