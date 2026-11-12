/* NanoCore 1.12: nc_pitch_reset at 0x40079596.
 * Role: Pitch state reset called by FX2 reset
 * REA: ev_98a5566c883df441e42efd1a2659b053094ba77ff64234723a224a9d6d515c3f
 * Source: analysis/rea-1.12-effects/results/03584-export-0x40079596.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Removing unreachable block (ram,0x400798d6) */
/* WARNING: Removing unreachable block (ram,0x4007961e) */
/* WARNING: Removing unreachable block (ram,0x40079626) */
/* WARNING: Removing unreachable block (ram,0x40079634) */
/* WARNING: Removing unreachable block (ram,0x40079644) */
/* WARNING: Removing unreachable block (ram,0x40079770) */
/* WARNING: Removing unreachable block (ram,0x40079774) */
/* WARNING: Removing unreachable block (ram,0x40079790) */
/* WARNING: Removing unreachable block (ram,0x40079aba) */
/* WARNING: Removing unreachable block (ram,0x40079b4a) */
/* WARNING: Removing unreachable block (ram,0x40079ac0) */
/* WARNING: Removing unreachable block (ram,0x4007979a) */
/* WARNING: Removing unreachable block (ram,0x400797a0) */
/* WARNING: Removing unreachable block (ram,0x400797ac) */
/* WARNING: Removing unreachable block (ram,0x40079ad6) */
/* WARNING: Removing unreachable block (ram,0x40079ae2) */
/* WARNING: Removing unreachable block (ram,0x400797c2) */
/* WARNING: Removing unreachable block (ram,0x400797d4) */
/* WARNING: Removing unreachable block (ram,0x400797e8) */
/* WARNING: Removing unreachable block (ram,0x40079ae8) */
/* WARNING: Removing unreachable block (ram,0x400797ec) */
/* WARNING: Removing unreachable block (ram,0x40079800) */
/* WARNING: Removing unreachable block (ram,0x40079afc) */
/* WARNING: Removing unreachable block (ram,0x40079b48) */
/* WARNING: Removing unreachable block (ram,0x400798dc) */
/* WARNING: Removing unreachable block (ram,0x400798ea) */
/* WARNING: Removing unreachable block (ram,0x400798f8) */
/* WARNING: Removing unreachable block (ram,0x40079906) */
/* WARNING: Removing unreachable block (ram,0x4007990a) */
/* WARNING: Removing unreachable block (ram,0x4007990c) */
/* WARNING: Removing unreachable block (ram,0x4007991a) */
/* WARNING: Removing unreachable block (ram,0x4007991e) */
/* WARNING: Removing unreachable block (ram,0x40079920) */
/* WARNING: Removing unreachable block (ram,0x4007992a) */
/* WARNING: Removing unreachable block (ram,0x40079938) */
/* WARNING: Removing unreachable block (ram,0x4007993e) */
/* WARNING: Removing unreachable block (ram,0x40079944) */
/* WARNING: Removing unreachable block (ram,0x40079992) */
/* WARNING: Removing unreachable block (ram,0x40079998) */
/* WARNING: Removing unreachable block (ram,0x4007999c) */
/* WARNING: Removing unreachable block (ram,0x400799a0) */
/* WARNING: Removing unreachable block (ram,0x40079b58) */
/* WARNING: Removing unreachable block (ram,0x400799d0) */
/* WARNING: Removing unreachable block (ram,0x400799d6) */
/* WARNING: Removing unreachable block (ram,0x400799e2) */
/* WARNING: Removing unreachable block (ram,0x40079b62) */
/* WARNING: Removing unreachable block (ram,0x40079b68) */
/* WARNING: Removing unreachable block (ram,0x40079b74) */
/* WARNING: Removing unreachable block (ram,0x400799ee) */
/* WARNING: Removing unreachable block (ram,0x400799f4) */
/* WARNING: Removing unreachable block (ram,0x400799fe) */
/* WARNING: Removing unreachable block (ram,0x40079a02) */
/* WARNING: Removing unreachable block (ram,0x40079a14) */
/* WARNING: Removing unreachable block (ram,0x40079a28) */
/* WARNING: Removing unreachable block (ram,0x40079b86) */
/* WARNING: Removing unreachable block (ram,0x40079a2c) */
/* WARNING: Removing unreachable block (ram,0x40079b9a) */
/* WARNING: Removing unreachable block (ram,0x40079a40) */

void nc_pitch_reset(int param_1)

{
  int local_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xd80) != 0) {
      local_80 = *(int *)(param_1 + 0xc84);
      iStack_78 = *(int *)(param_1 + 0xc80);
      uStack_7c = *(undefined4 *)(param_1 + 0xcc8);
      uStack_74 = *(undefined4 *)(param_1 + 0xcc4);
      if (*(int *)(param_1 + 0xd2c) != 0) {
        FUN_ram_40078d94(*(undefined4 *)(param_1 + 0xd04),*(undefined4 *)(param_1 + 0xd00),param_1,
                         *(undefined4 *)(param_1 + 0xd30),*(undefined4 *)(param_1 + 0xd34),&local_80
                         ,&iStack_78);
      }
    }
    return;
  }
  return;
}

