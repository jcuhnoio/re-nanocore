/* NanoCore 1.12 analysis module: audio/model_filters.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4005c5ce.
 * REA evidence: ev_1235e901e0ab2dc25d6e85f157dc4c226a3e11e330c4207c00da0834fa260581
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float nc_three_band_eq_process_sample(float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_2 != 0) {
    fVar2 = param_1 * (float)*(undefined8 *)(param_2 + 4) + (float)*(undefined8 *)(param_2 + 0x18);
    fVar1 = *(float *)(param_2 + 0x1c);
    fVar3 = (float)*(undefined8 *)(param_2 + 0x20) * fVar2 + (float)*(undefined8 *)(param_2 + 0x34);
    fVar4 = (float)*(undefined8 *)(param_2 + 0x3c) * fVar3 + (float)*(undefined8 *)(param_2 + 0x50);
    *(ulonglong *)(param_2 + 0x1c) =
         (ulonglong)(uint)(param_1 * *(float *)(param_2 + 0xc) - fVar2 * *(float *)(param_2 + 0x14))
    ;
    *(float *)(param_2 + 0x18) =
         -(fVar2 * *(float *)(param_2 + 0x10)) + param_1 * *(float *)(param_2 + 8) + fVar1;
    *(float *)(param_2 + 0x34) =
         -(fVar3 * *(float *)(param_2 + 0x2c)) +
         *(float *)(param_2 + 0x24) * fVar2 + *(float *)(param_2 + 0x38);
    *(ulonglong *)(param_2 + 0x38) =
         (ulonglong)(uint)(*(float *)(param_2 + 0x28) * fVar2 - fVar3 * *(float *)(param_2 + 0x30));
    *(ulonglong *)(param_2 + 0x50) =
         (ulonglong)
         (uint)(-(fVar4 * (float)*(undefined8 *)(param_2 + 0x48)) +
               (float)*(undefined8 *)(param_2 + 0x40) * fVar3 + *(float *)(param_2 + 0x54));
    *(ulonglong *)(param_2 + 0x54) =
         (ulonglong)
         (uint)(*(float *)(param_2 + 0x44) * fVar3 - fVar4 * (float)*(undefined8 *)(param_2 + 0x4c))
    ;
    return fVar4;
  }
  return param_1;
}


