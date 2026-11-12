/* NanoCore 1.12: nc_dsp_node_configure at 0x4005feca.
 * Role: Sets processor kind, subtype, enabled flag, state pointer and zeroes parameter area.
 * REA: ev_bc4389091269813a6b925d11aac645c3aa673f2bedaf1ad382db3979b190552b
 * Source: analysis/rea-1.12-effects/results/03474-export-0x4005feca.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_dsp_node_configure(int param_1,uint param_2,undefined4 param_3,undefined1 param_4,
                     undefined4 param_5,int param_6)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 < 10)) {
    iVar1 = param_1 + param_2 * 0x4c;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    *(undefined1 *)(iVar1 + 0x10) = param_4;
    *(undefined4 *)(iVar1 + 0x50) = param_5;
    *(bool *)(iVar1 + 0x11) = param_6 != 0;
    memset(param_1 + param_2 * 0x4c + 0x14,0,0x3c);
    return;
  }
  return;
}

