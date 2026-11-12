/* NanoCore 1.12 analysis module: audio/fx2_process.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4006ca50.
 * REA evidence: ev_9bc0a557338e7d5e11a6ef1fb7e02906399238fa7c1bfeb0ebdb681b23c32c21
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void nc_fx2_process(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                     undefined4 param_7,uint param_8,char param_9,int param_10)

{
  if (((param_2 != 0) && (param_4 != 0)) && (param_6 != 0)) {
    if (param_10 != 0) {
      *(bool *)param_10 = param_9 != '\0';
    }
    if (((param_1 != (int *)0x0) && ((char *)param_1[1] != (char *)0x0)) &&
       (*(char *)param_1[1] != '\0')) {
      if (7 < param_8) {
        FUN_ram_4006b1c4(param_1,param_2,param_3);
        return;
      }
      *(char *)(param_1 + 0x390) = (char)param_8;
      if (*param_1 != 0) {
        nc_amp_drive_process(*param_1,param_2,param_3);
        return;
      }
    }
    if (param_2 != param_4) {
      FUN_ram_4000303c(param_4,param_2,param_6 << 2);
    }
    if (((param_9 != '\0') && (param_3 != 0)) && ((param_5 != 0 && (param_3 != param_5)))) {
      FUN_ram_4000303c(param_5,param_3,param_6 << 2);
      return;
    }
  }
  return;
}


