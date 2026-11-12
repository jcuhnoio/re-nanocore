/* NanoCore 1.12: nc_chorus2_jet_flanger_init at 0x40072570.
 * Role: Shared MOD11/17 state initializer
 * REA: ev_6d41af51868a6955fce98ef66aee0a6fef5edc0f907cb7406035dc6f583bc47f
 * Source: analysis/rea-1.12-effects/results/03541-export-0x40072570.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_chorus2_jet_flanger_init(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = param_1 + 4;
    do {
      iVar1 = memset(iVar1,0,0x80);
      fence();
      iVar1 = iVar1 + 0x80;
    } while (iVar1 != param_1 + 0x1f84);
    memset(param_1 + 0x1f84,0,0x80);
    fence();
    *(undefined1 *)(param_1 + 0x200c) = 0;
    *(undefined1 *)(param_1 + 0x200d) = 0;
    *(undefined1 *)(param_1 + 0x200e) = 0;
    *(undefined1 *)(param_1 + 0x200f) = 0;
    *(undefined1 *)(param_1 + 0x2010) = 0;
    *(undefined1 *)(param_1 + 0x2011) = 0;
    *(undefined1 *)(param_1 + 0x2012) = 0;
    *(undefined1 *)(param_1 + 0x2013) = 0;
    *(undefined4 *)(param_1 + 0x2004) = 0;
    *(undefined4 *)(param_1 + 0x2008) = 0;
    return;
  }
  return;
}

