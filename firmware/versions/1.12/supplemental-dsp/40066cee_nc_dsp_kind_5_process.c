/* NanoCore 1.12, supplemental entry 0x40066cee.
 * REA evidence: ev_116f5aba31b2e312646c8dc8406e25141a0b9b2e04da70b79f9a791fe47eccf3
 * Focused seeded analysis; may overlap baseline function bodies.
 * C-like analysis only, not original or buildable code.
 */

void nc_dsp_kind_5_process
               (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
               undefined4 param_7,int param_8,char param_9,int param_10)

{
  if (((((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) &&
      ((param_6 != 0 && (*(int *)(param_1 + 4) != 0)))) &&
     ((3 < *(uint *)(param_1 + 8) && ((param_8 == 3 && (*(char *)(param_1 + 0x20) == '\x03')))))) {
    if (param_10 != 0) {
      *(bool *)param_10 = param_9 != '\0' && (param_3 != 0 && param_5 != 0);
    }
    FUN_ram_40060b4c();
    return;
  }
  FUN_ram_40061c98();
  return;
}

