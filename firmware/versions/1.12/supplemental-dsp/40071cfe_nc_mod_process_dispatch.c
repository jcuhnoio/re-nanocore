/* NanoCore 1.12, supplemental entry 0x40071cfe.
 * REA evidence: ev_6fc593ea6ad1feab6d2b5a3d4d750060fb54d51001f72eec6565e4408d9de88b
 * Focused seeded analysis; may overlap baseline function bodies.
 * C-like analysis only, not original or buildable code.
 */

void nc_mod_process_dispatch
               (int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
               int param_6,undefined4 param_7,int param_8,char param_9,int param_10)

{
  if ((((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) &&
     (((param_6 != 0 && (param_8 == 8)) && (*(char *)(param_1 + 0x2044) == '\b')))) {
    if (param_10 != 0) {
      *(bool *)param_10 = param_9 != '\0';
    }
    FUN_ram_4006d0b4();
    return;
  }
  nc_mod_process_general();
  return;
}

