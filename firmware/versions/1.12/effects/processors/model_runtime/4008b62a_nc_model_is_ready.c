/* NanoCore 1.12: nc_model_is_ready at 0x4008b62a.
 * Role: Requires a runtime pointer at context + 0x10 and ready byte at + 0x50.
 * REA: ev_c2ce7c509ef8d85f68413a1aab593be235c4a19b996a64ab677afadfc85bc0b0
 * Source: analysis/rea-1.12/results/03640-export-0x4008b62a.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

bool nc_model_is_ready(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != 0) && (bVar1 = false, *(int *)(param_1 + 0x10) != 0)) {
    bVar1 = *(char *)(param_1 + 0x50) != '\0';
  }
  return bVar1;
}

