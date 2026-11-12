/* NanoCore 1.12: nc_delay_configure_smear_filters at 0x4006070c.
 * Role: Called from Smear branch; computes biquad coefficients
 * REA: ev_932da0c47d480b58613a4d154388b715f8713e3aef4d16759d269092e4325038
 * Source: analysis/rea-1.12-effects/results/03482-export-0x4006070c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_delay_configure_smear_filters(float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar7 = DAT_ram_4009f218;
  fVar6 = DAT_ram_4009f214;
  fVar9 = DAT_ram_4009f20c;
  fVar1 = DAT_ram_4009672c;
  if (param_2 == (float *)0x0) {
    return;
  }
  fVar3 = *param_2;
  fVar4 = DAT_ram_40099f50;
  if (fVar3 < DAT_ram_40099f28) {
    fVar3 = DAT_ram_4009678c;
    fVar11 = DAT_ram_4009f1fc._4_4_;
    fVar2 = DAT_ram_4009a338;
    if (0.0 <= param_1) goto LAB_ram_40060750;
LAB_ram_40060802:
    if (fVar11 < fVar4) {
      fVar4 = fVar11;
    }
    fVar5 = fVar2;
    fVar12 = fVar3;
    if (DAT_ram_4009672c <= fVar3) {
      fVar9 = DAT_ram_4009672c;
      fVar8 = fVar11;
      if (DAT_ram_4009672c <= fVar4) goto LAB_ram_400608b0;
LAB_ram_400608ba:
      fVar9 = (fVar9 / fVar3) * DAT_ram_4009f090;
      fVar3 = (float)FUN_ram_40000712(fVar9);
      fVar4 = (float)FUN_ram_400009d2(fVar9);
      fVar7 = (fVar3 + fVar1) * (float)DAT_ram_4009675c;
      fVar6 = fVar3 * DAT_ram_40096744;
      fVar2 = -(fVar3 + fVar1);
      fVar9 = fVar4 / DAT_ram_4009f050 + fVar1;
      fVar10 = fVar1 - fVar4 / DAT_ram_4009f050;
      if (fVar9 != 0.0) goto LAB_ram_40060a68;
      goto LAB_ram_4006091e;
    }
    fVar3 = DAT_ram_4009678c;
    fVar8 = DAT_ram_4009f1fc._4_4_;
    if (DAT_ram_4009672c <= fVar4) {
LAB_ram_400608b0:
      fVar9 = fVar4;
      if (fVar8 < fVar4) {
        fVar9 = fVar8;
      }
      goto LAB_ram_400608ba;
    }
    param_2[0x4e] = DAT_ram_4009f20c;
    param_2[0x4f] = fVar7;
    param_2[0x50] = fVar9;
    param_2[0x51] = fVar7;
    param_2[0x52] = fVar6;
LAB_ram_40060a1a:
    if (fVar2 < fVar1) {
      fVar7 = 0.0;
      fVar3 = DAT_ram_4009f218;
      fVar4 = 0.0;
      fVar6 = DAT_ram_4009f214;
      goto LAB_ram_400609b6;
    }
    fVar9 = DAT_ram_40096744;
    fVar12 = DAT_ram_4009678c;
    fVar7 = DAT_ram_4009f224;
    fVar3 = DAT_ram_4009f220;
    fVar4 = DAT_ram_4009f228;
    fVar6 = DAT_ram_4009f21c;
    if (DAT_ram_4009f1fc._4_4_ < fVar2) goto LAB_ram_400609b6;
  }
  else {
    fVar11 = fVar3 * DAT_ram_4009f22c;
    fVar5 = DAT_ram_4009a338;
    if (param_1 < 0.0) {
LAB_ram_4006086a:
      fVar2 = fVar5;
      if (fVar11 < fVar5) {
LAB_ram_40060870:
        fVar2 = fVar11;
      }
      goto LAB_ram_40060802;
    }
LAB_ram_40060750:
    if (DAT_ram_4009672c < param_1) {
      fVar5 = DAT_ram_4009f208;
      fVar2 = fVar11;
      fVar4 = DAT_ram_4009f204;
      if (DAT_ram_4009f208 <= fVar11) goto LAB_ram_40060896;
      goto LAB_ram_40060802;
    }
    fVar2 = DAT_ram_4009a4f4;
    if (param_1 <= DAT_ram_4009f230) {
      fVar5 = (DAT_ram_4009672c - param_1 / DAT_ram_4009f230) * DAT_ram_4009a338 +
              (param_1 / DAT_ram_4009f230) * DAT_ram_4009f234;
      if (DAT_ram_4009a4f4 <= fVar5) goto LAB_ram_4006086a;
      goto LAB_ram_40060802;
    }
    if (DAT_ram_4009f238 < param_1) {
      fVar4 = (param_1 - DAT_ram_4009f238) / DAT_ram_4009f23c;
      fVar2 = (DAT_ram_4009672c - fVar4) * DAT_ram_4009f240 + fVar4 * DAT_ram_4009f208;
      fVar4 = (DAT_ram_4009672c - fVar4) * DAT_ram_40099f50 + fVar4 * DAT_ram_4009f204;
      fVar5 = DAT_ram_4009a4f4;
      if ((DAT_ram_4009a4f4 <= fVar2) && (fVar5 = fVar2, fVar11 < fVar2)) {
        fVar5 = fVar11;
      }
    }
    else {
      fVar5 = (param_1 - DAT_ram_4009f230) / DAT_ram_4009f244;
      fVar5 = (DAT_ram_4009672c - fVar5) * DAT_ram_4009f234 + fVar5 * DAT_ram_4009f240;
      if (fVar5 < DAT_ram_4009a4f4) goto LAB_ram_40060802;
      if (fVar11 < fVar5) goto LAB_ram_40060870;
    }
LAB_ram_40060896:
    fVar2 = fVar5;
    if (DAT_ram_4009672c <= fVar4) goto LAB_ram_40060802;
    fVar4 = DAT_ram_4009672c;
    fVar6 = DAT_ram_40096744;
    fVar9 = DAT_ram_4009f210;
    fVar7 = DAT_ram_4009672c;
    fVar2 = DAT_ram_40096744;
    fVar10 = DAT_ram_4009f20c;
    fVar12 = fVar3;
    fVar8 = fVar11;
    if (DAT_ram_4009672c <= fVar3) goto LAB_ram_400608b0;
LAB_ram_40060a68:
    fVar9 = fVar1 / fVar9;
    fVar7 = fVar7 * fVar9;
    fVar2 = fVar2 * fVar9;
    fVar6 = fVar6 * fVar9;
    fVar10 = fVar10 * fVar9;
LAB_ram_4006091e:
    fVar9 = DAT_ram_40096744;
    param_2[0x4e] = fVar7;
    param_2[0x4f] = fVar2;
    param_2[0x50] = fVar7;
    param_2[0x51] = fVar6;
    param_2[0x52] = fVar10;
    fVar2 = fVar5;
    if (fVar12 < fVar1) goto LAB_ram_40060a1a;
    fVar2 = fVar1;
    if ((fVar1 <= fVar5) && (fVar2 = fVar5, fVar11 < fVar5)) {
      fVar2 = fVar11;
    }
  }
  fVar6 = (fVar2 / fVar12) * DAT_ram_4009f090;
  fVar5 = (float)FUN_ram_40000712(fVar6);
  fVar6 = (float)FUN_ram_400009d2(fVar6);
  fVar2 = fVar1 - fVar5;
  fVar11 = fVar6 / DAT_ram_4009f050 + fVar1;
  fVar6 = fVar1 - fVar6 / DAT_ram_4009f050;
  fVar7 = fVar2;
  fVar3 = fVar5 * fVar9;
  fVar4 = fVar2 * (float)DAT_ram_4009675c;
  if (fVar11 != 0.0) {
    fVar1 = fVar1 / fVar11;
    fVar7 = fVar2 * fVar1;
    fVar3 = fVar5 * fVar9 * fVar1;
    fVar4 = fVar2 * (float)DAT_ram_4009675c * fVar1;
    fVar6 = fVar6 * fVar1;
  }
LAB_ram_400609b6:
  param_2[0x58] = fVar3;
  param_2[0x55] = fVar4;
  param_2[0x56] = fVar7;
  param_2[0x57] = fVar4;
  param_2[0x59] = fVar6;
  return;
}

