/* NanoCore 1.12: expression_subtype_normalize at 0x40068cce.
 * Role: Returns0 for subtype>=4, otherwise subtype.
 * REA: ev_25387a1bc99cadf55734b97b8dbc5367c4395fcb209350f547219fc7378a664e
 * Source: analysis/rea-1.12/results/03508-export-0x40068cce.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

uint expression_subtype_normalize(uint param_1)

{
  return param_1 & -(uint)(param_1 < 4);
}

