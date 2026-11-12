/* NanoCore 1.12: nc_reverb_select_subtype at 0x40073bb0.
 * Role: Constructs subtype; copies Spring executable blob
 * REA: ev_f92c6d72fe8bef5eaa27e20a10863af1a9b435abc8cdd596a684a4cc2c0251bf
 * Source: analysis/rea-1.12-effects/results/03548-export-0x40073bb0.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_reverb_select_subtype(ulonglong *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  ulonglong uVar5;
  undefined4 uStack_20;
  
  if (param_1 == (ulonglong *)0x0) {
    return;
  }
  uVar5 = *param_1;
  fVar4 = (float)uVar5;
  if (7 < param_2) {
    if (fVar4 <= DAT_ram_40099f28) {
      uVar5 = (ulonglong)DAT_ram_4009678c;
    }
switchD_ram_40073c00_caseD_0:
    param_2 = 0;
    nc_reverb_room_init(uVar5);
    goto LAB_ram_40073c1e;
  }
  if (param_2 == 4) {
    if (fVar4 <= DAT_ram_40099f28) {
      uVar5 = (ulonglong)DAT_ram_4009678c;
    }
switchD_ram_40073c00_caseD_2:
    param_2 = 2;
    nc_reverb_hall_init(uVar5);
  }
  else {
    if (fVar4 <= DAT_ram_40099f28) {
      uVar5 = (ulonglong)DAT_ram_4009678c;
    }
    switch(param_2) {
    case 0:
      goto switchD_ram_40073c00_caseD_0;
    case 1:
      nc_reverb_plate_init();
      break;
    case 2:
      goto switchD_ram_40073c00_caseD_2;
    case 3:
      nc_reverb_concert_init();
      break;
    default:
      nc_reverb_cloud_init();
      nc_reverb_cloud_set_sample_rate(CONCAT44(uStack_20,(int)uVar5),param_1 + 0x88);
      nc_reverb_cloud_prepare(param_1 + 0x88);
      break;
    case 5:
      nc_reverb_shimmer_init();
      break;
    case 7:
      nc_reverb_spring_init();
      memset(param_1 + 0x38bf,0,0x4000);
      uVar3 = (int)param_1 + 0x175f7U & 0xffffffc0;
      *(undefined2 *)(param_1 + 0x40c0) = 0;
      *(undefined1 *)((int)param_1 + 0x20602) = 0;
      uVar1 = DAT_ram_400a151c;
      if ((((0x5040 < uVar3 - (int)(param_1 + 0x2eb7)) || (DAT_ram_400a3a2c == 0)) ||
          ((int)param_1 + (0x1c5f8 - uVar3) < DAT_ram_400a3a2c)) ||
         ((DAT_ram_400a3a2c <= DAT_ram_400a151c || ((DAT_ram_400a151c & 1) != 0)))) {
        *(undefined4 *)((int)param_1 + 0x175b4) = 0;
        *(undefined1 *)((int)param_1 + 4) = 0xff;
        uVar5 = _DAT_ram_40096728;
        goto LAB_ram_40073c36;
      }
      iVar2 = FUN_ram_4000303c(uVar3,nc_reverb_spring_copy_samples);
      fence();
      custom0();
      fence.i();
      fence();
      custom0();
      fence();
      custom0();
      fence.i();
      fence();
      fence();
      custom0();
      fence.i();
      fence();
      custom0();
      fence();
      custom0();
      fence.i();
      fence();
      fence.i();
      *(uint *)((int)param_1 + 0x175b4) = iVar2 + uVar1;
    }
  }
LAB_ram_40073c1e:
  uVar5 = _DAT_ram_40096728;
  *(char *)((int)param_1 + 4) = (char)param_2;
  *(ulonglong *)((int)param_1 + 0xc) = uVar5;
  param_1[2] = uVar5;
  *(ulonglong *)((int)param_1 + 0x14) = uVar5;
  param_1[3] = uVar5;
  *(ulonglong *)((int)param_1 + 0x1c) = uVar5;
LAB_ram_40073c36:
  param_1[1] = uVar5;
  *(ulonglong *)((int)param_1 + 0xc) = uVar5;
  param_1[2] = uVar5;
  *(ulonglong *)((int)param_1 + 0x14) = uVar5;
  param_1[3] = uVar5;
  *(ulonglong *)((int)param_1 + 0x1c) = uVar5;
  memset(param_1 + 4,0,0x18);
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}

