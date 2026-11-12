/* NanoCore 1.12: nc_fx2_init at 0x4006c4de.
 * Role: Allocates/configures FX2 state including pitch
 * REA: ev_1e8a2e23c565c7e1ebd4af11c134535fb8e0e0dccd15d2189db8fb09dc9f1954
 * Source: analysis/rea-1.12-effects/results/03515-export-0x4006c4de.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_fx2_init(float param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = DAT_ram_40099f28;
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  puVar2 = param_2 + 2;
  if (param_1 < DAT_ram_40099f28) {
    memset(param_2,0,0xe48);
    param_1 = DAT_ram_4009678c;
    *param_2 = param_3;
    param_2[1] = param_4;
    iVar3 = nc_pitch_init(param_1,puVar2,param_5,param_6);
    if (iVar3 == 0) goto LAB_ram_4006c76e;
    param_2[0x368] = param_1;
    fVar6 = DAT_ram_4009f5d0;
LAB_ram_4006c708:
    fVar5 = (float)FUN_ram_400009d2(fVar6 / param_1);
    fVar6 = (float)FUN_ram_40000712(fVar6 / param_1);
    fVar5 = fVar5 / DAT_ram_4009f5d4;
  }
  else {
    memset(param_2,0,0xe48);
    *param_2 = param_3;
    param_2[1] = param_4;
    iVar3 = nc_pitch_init(param_1,puVar2,param_5,param_6);
    if (iVar3 == 0) {
LAB_ram_4006c76e:
      nc_pitch_set_shift(0,0,DAT_ram_4009672c,puVar2);
    }
    param_2[0x368] = param_1;
    fVar4 = DAT_ram_4009f5c0;
    fVar7 = DAT_ram_4009f5cc;
    fVar5 = DAT_ram_4009f5c8;
    fVar1 = DAT_ram_4009f5c4;
    if (param_1 < fVar6) goto LAB_ram_4006c570;
    fVar5 = param_1 * DAT_ram_4009f22c;
    fVar6 = DAT_ram_4009f5d0;
    if ((DAT_ram_40099f50 <= fVar5) || (fVar6 = DAT_ram_4009f5d8, fVar5 < DAT_ram_40099f88))
    goto LAB_ram_4006c708;
    fVar6 = (fVar5 * DAT_ram_4009f090) / param_1;
    fVar5 = (float)FUN_ram_400009d2(fVar6);
    fVar6 = (float)FUN_ram_40000712(fVar6);
    fVar5 = fVar5 / DAT_ram_4009f5d4;
  }
  fVar1 = fVar5 + DAT_ram_4009672c;
  fVar4 = (DAT_ram_4009672c - fVar5) / fVar1;
  fVar7 = ((DAT_ram_4009672c - fVar6) * (float)DAT_ram_4009675c) / fVar1;
  fVar5 = (DAT_ram_4009672c - fVar6) / fVar1;
  fVar1 = (fVar6 * DAT_ram_40096744) / fVar1;
LAB_ram_4006c570:
  param_2[0x369] = fVar7;
  param_2[0x36b] = fVar7;
  param_2[0x36d] = fVar4;
  param_2[0x36a] = fVar5;
  param_2[0x36c] = fVar1;
  param_2[0x36e] = 0;
  param_2[0x36f] = 0;
  param_2[0x370] = 0;
  param_2[0x371] = 0;
  *(undefined1 *)(param_2 + 0x372) = 0;
  *(undefined1 *)(param_2 + 0x373) = 0;
  *(undefined1 *)((int)param_2 + 0xdcd) = 0;
  *(undefined1 *)((int)param_2 + 0xdce) = 0;
  *(undefined1 *)((int)param_2 + 0xdcf) = 0;
  *(undefined1 *)(param_2 + 0x374) = 0;
  *(undefined1 *)((int)param_2 + 0xdd1) = 0;
  *(undefined1 *)((int)param_2 + 0xdd2) = 0;
  *(undefined1 *)((int)param_2 + 0xdd3) = 0;
  *(undefined1 *)(param_2 + 0x375) = 0;
  *(undefined1 *)((int)param_2 + 0xdd5) = 0;
  *(undefined1 *)((int)param_2 + 0xdd6) = 0;
  *(undefined1 *)((int)param_2 + 0xdd7) = 0;
  *(undefined1 *)(param_2 + 0x376) = 0;
  *(undefined1 *)((int)param_2 + 0xdd9) = 0;
  *(undefined1 *)((int)param_2 + 0xdda) = 0;
  *(undefined1 *)((int)param_2 + 0xddb) = 0;
  *(undefined1 *)(param_2 + 0x377) = 0;
  *(undefined1 *)((int)param_2 + 0xddd) = 0;
  *(undefined1 *)((int)param_2 + 0xdde) = 0;
  *(undefined1 *)((int)param_2 + 0xddf) = 0;
  *(undefined1 *)(param_2 + 0x378) = 0;
  *(undefined1 *)((int)param_2 + 0xde1) = 0;
  *(undefined1 *)((int)param_2 + 0xde2) = 0;
  fVar6 = (float)DAT_ram_4009675c;
  *(undefined1 *)((int)param_2 + 0xde3) = 0;
  *(undefined1 *)(param_2 + 0x379) = 0;
  *(undefined1 *)((int)param_2 + 0xde5) = 0;
  *(undefined1 *)((int)param_2 + 0xde6) = 0;
  *(undefined1 *)((int)param_2 + 0xde7) = 0;
  *(undefined1 *)(param_2 + 0x37a) = 0;
  *(undefined1 *)((int)param_2 + 0xde9) = 0;
  *(undefined1 *)((int)param_2 + 0xdea) = 0;
  *(undefined1 *)((int)param_2 + 0xdeb) = 0;
  param_2[0x382] = param_1;
  param_2[899] = 0;
  param_2[900] = fVar6;
  *(undefined1 *)(param_2 + 0x385) = 0;
  *(undefined1 *)((int)param_2 + 0xe15) = 0;
  *(undefined1 *)((int)param_2 + 0xe16) = 0;
  *(undefined1 *)((int)param_2 + 0xe17) = 0;
  *(undefined1 *)(param_2 + 0x386) = 0;
  *(undefined1 *)((int)param_2 + 0xe19) = 0;
  *(undefined1 *)((int)param_2 + 0xe1a) = 0;
  *(undefined1 *)((int)param_2 + 0xe1b) = 0;
  *(undefined1 *)(param_2 + 0x387) = 0;
  *(undefined1 *)((int)param_2 + 0xe1d) = 0;
  *(undefined1 *)((int)param_2 + 0xe1e) = 0;
  *(undefined1 *)((int)param_2 + 0xe1f) = 0;
  *(undefined1 *)(param_2 + 0x388) = 0;
  *(undefined1 *)((int)param_2 + 0xe21) = 0;
  *(undefined1 *)((int)param_2 + 0xe22) = 0;
  *(undefined1 *)((int)param_2 + 0xe23) = 0;
  FUN_ram_40071d8a(param_1,param_2 + 0x389);
  return;
}

