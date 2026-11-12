/* NanoCore 1.12: nc_reverb_cloud_helper_300419ae at 0x300419ae.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_f68da04a49c4d058ef94e6cd57b0ed3ccd383bb24ff539d25eadf333747ff349
 * Source: analysis/rea-1.12-effects/results/01010-export-0x300419ae.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_cloud_helper_300419ae(int *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  
  iVar10 = *param_1;
  uVar1 = *(ushort *)(param_1 + 1);
  uVar9 = (uint)*(ushort *)((int)param_1 + 6);
  uVar11 = *(undefined8 *)(param_1 + 2);
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      while( true ) {
        uVar8 = uVar1 - uVar9;
        if (param_3 - uVar3 < uVar8) {
          uVar8 = param_3 - uVar3;
        }
        if (uVar8 != 0) {
          pfVar5 = (float *)(uVar3 * 4 + param_2);
          pfVar4 = (float *)(uVar9 * 4 + iVar10);
          pfVar6 = pfVar5;
          do {
            pfVar7 = pfVar6 + 1;
            fVar2 = -((float)uVar11 * (float)*(undefined8 *)pfVar6) + (float)*(undefined8 *)pfVar4;
            *pfVar4 = (float)uVar11 * fVar2 + (float)*(undefined8 *)pfVar6;
            *pfVar6 = fVar2;
            pfVar4 = pfVar4 + 1;
            pfVar6 = pfVar7;
          } while (pfVar5 + uVar8 != pfVar7);
        }
        uVar9 = uVar9 + uVar8 & 0xffff;
        uVar3 = uVar3 + uVar8;
        if (uVar1 != uVar9) break;
        uVar9 = 0;
        if (param_3 <= uVar3) {
          *(undefined2 *)((int)param_1 + 6) = 0;
          return;
        }
      }
    } while (uVar3 < param_3);
  }
  *(short *)((int)param_1 + 6) = (short)uVar9;
  return;
}

