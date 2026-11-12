/* NanoCore 1.12: nc_reverb_apply_parameters at 0x40073170.
 * Role: Cached parameter update; routes to subtype setters
 * REA: ev_c55ceae7f16d3e8066cb6668e12cb8b5f1b3d4f7cb6dab4c9e862e9e135faf9c
 * Source: analysis/rea-1.12-effects/results/03545-export-0x40073170.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Removing unreachable block (ram,0x40073acc) */

ulonglong nc_reverb_apply_parameters(undefined8 *param_1,int param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0 [5];
  float fStack_8c;
  float fStack_88;
  uint uStack_84;
  float fStack_80;
  float fStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  
  if (param_2 == 0) {
    fStack_b4 = 0.0;
    fStack_a4 = 0.0;
    fStack_b8 = DAT_ram_4009f9cc;
    fVar15 = DAT_ram_4009f9c8;
    fStack_b0 = DAT_ram_4009b144;
    fStack_ac = DAT_ram_40099f88;
    fStack_a8 = DAT_ram_40099f90;
    if ((7 < param_3) ||
       (fStack_b8 = DAT_ram_4009f9d0, fVar15 = DAT_ram_40099f90, fStack_b0 = DAT_ram_4009f9d4,
       fStack_ac = DAT_ram_4009f0bc, fStack_a8 = DAT_ram_4009f2dc, param_3 == 4))
    goto LAB_ram_4007319c;
    if (param_3 == 6) {
      fStack_b4 = DAT_ram_4009a644;
      fStack_b0 = DAT_ram_4009f0bc;
      fStack_ac = DAT_ram_4009f9dc;
      fStack_a8 = (float)DAT_ram_4009675c;
      fStack_b8 = DAT_ram_4009f230;
    }
    else if (param_3 == 7) {
      fStack_b0 = (float)DAT_ram_4009675c;
      fStack_b4 = DAT_ram_40099f94;
      fStack_b8 = (float)DAT_ram_4009675c;
      fStack_ac = fStack_b0;
      fStack_a8 = fStack_b0;
      fStack_a4 = fStack_b0;
    }
    else {
      if (param_3 != 5) {
        fVar15 = DAT_ram_40099f90;
        if (param_3 < 4) {
          iVar9 = param_3 * 4;
          fStack_b8 = ((float)*(undefined8 *)(&DAT_ram_4009fa0c + iVar9) - (float)DAT_ram_4009675c)
                      / DAT_ram_4009b194;
          fStack_b0 = (float)*(undefined8 *)(&DAT_ram_4009fa2c + iVar9);
          fStack_ac = (float)*(undefined8 *)(&DAT_ram_4009fa3c + iVar9);
          fStack_a8 = (float)*(undefined8 *)(&DAT_ram_4009fa4c + iVar9);
          fVar15 = (float)*(undefined8 *)(&DAT_ram_4009fa1c + iVar9) / DAT_ram_4009a380;
        }
        goto LAB_ram_4007319c;
      }
      fStack_ac = DAT_ram_4009a644;
      fStack_a8 = (float)DAT_ram_4009675c;
      fStack_b8 = DAT_ram_4009f9e0;
    }
LAB_ram_400731ba:
    uVar12 = CONCAT44(fStack_b0,fStack_b4);
    if (0.0 <= fStack_b4) goto LAB_ram_400731ca;
LAB_ram_4007341e:
    uVar12 = 0;
LAB_ram_400731da:
    fStack_b4 = (float)uVar12;
    if (0.0 <= fStack_b0) goto LAB_ram_400731ea;
LAB_ram_40073404:
    fStack_b0 = 0.0;
LAB_ram_400731fa:
    if (0.0 <= fStack_ac) goto LAB_ram_4007320a;
LAB_ram_400733ea:
    fStack_ac = 0.0;
LAB_ram_4007321a:
    uVar11 = CONCAT44(fStack_a4,fStack_a8);
    if (0.0 <= fStack_a8) goto LAB_ram_4007322a;
LAB_ram_400733d0:
    uVar11 = 0;
LAB_ram_4007323a:
    fStack_a8 = (float)uVar11;
    if (0.0 <= fStack_a4) goto LAB_ram_4007324a;
LAB_ram_400733b6:
    fVar15 = 0.0;
  }
  else {
    FUN_ram_4000303c(&fStack_b8,param_2,0x18);
    fVar15 = fStack_b4;
LAB_ram_4007319c:
    fStack_b4 = fVar15;
    if (fStack_b8 < 0.0) {
      fStack_b8 = 0.0;
      goto LAB_ram_400731ba;
    }
    if (fStack_b8 <= DAT_ram_4009672c) goto LAB_ram_400731ba;
    uVar12 = CONCAT44(fStack_b0,fStack_b4);
    fStack_b8 = DAT_ram_4009672c;
    if (fStack_b4 < 0.0) goto LAB_ram_4007341e;
LAB_ram_400731ca:
    if ((float)uVar12 <= DAT_ram_4009672c) goto LAB_ram_400731da;
    uVar12 = (ulonglong)(uint)DAT_ram_4009672c;
    fStack_b4 = DAT_ram_4009672c;
    if (fStack_b0 < 0.0) goto LAB_ram_40073404;
LAB_ram_400731ea:
    if (fStack_b0 <= DAT_ram_4009672c) goto LAB_ram_400731fa;
    fStack_b0 = DAT_ram_4009672c;
    if (fStack_ac < 0.0) goto LAB_ram_400733ea;
LAB_ram_4007320a:
    if (fStack_ac <= DAT_ram_4009672c) goto LAB_ram_4007321a;
    uVar11 = CONCAT44(fStack_a4,fStack_a8);
    fStack_ac = DAT_ram_4009672c;
    if (fStack_a8 < 0.0) goto LAB_ram_400733d0;
LAB_ram_4007322a:
    if ((float)uVar11 <= DAT_ram_4009672c) goto LAB_ram_4007323a;
    uVar11 = (ulonglong)(uint)DAT_ram_4009672c;
    fStack_a8 = DAT_ram_4009672c;
    if (fStack_a4 < 0.0) goto LAB_ram_400733b6;
LAB_ram_4007324a:
    fVar15 = fStack_a4;
    if (DAT_ram_4009672c < fStack_a4) {
      fVar15 = DAT_ram_4009672c;
    }
  }
  fVar3 = fStack_ac;
  fVar2 = fStack_b0;
  fVar1 = fStack_b8;
  fVar14 = DAT_ram_4009672c;
  fVar4 = (float)uVar12;
  if (((ABS((float)uVar11 - (float)param_1[3]) <= DAT_ram_40096748) &&
      (ABS(fVar15 - (float)*(undefined8 *)((int)param_1 + 0x1c)) <= DAT_ram_40096748)) &&
     (ABS(fStack_ac - (float)*(undefined8 *)((int)param_1 + 0x14)) <= DAT_ram_40096748 &&
      (ABS(fStack_b0 - (float)param_1[2]) <= DAT_ram_40096748 &&
      (ABS(fVar4 - (float)*(undefined8 *)((int)param_1 + 0xc)) <= DAT_ram_40096748 &&
      ABS(fStack_b8 - (float)param_1[1]) <= DAT_ram_40096748)))) goto LAB_ram_4007337a;
  fVar17 = 0.0;
  if ((0.0 <= fStack_b0) && (fVar17 = DAT_ram_4009672c, fStack_b0 <= DAT_ram_4009672c)) {
    fVar17 = fStack_b0;
  }
  fVar16 = 0.0;
  if ((0.0 <= fStack_ac) && (fVar16 = DAT_ram_4009672c, fStack_ac <= DAT_ram_4009672c)) {
    fVar16 = fStack_ac;
  }
  local_a0[1] = (float)DAT_ram_4009675c;
  if ((0.0 <= fStack_b8) && (local_a0[1] = DAT_ram_4009a330, fStack_b8 <= DAT_ram_4009672c)) {
    local_a0[1] = fStack_b8 * DAT_ram_4009b194 + (float)DAT_ram_4009675c;
  }
  local_a0[0] = 0.0;
  if ((0.0 <= fVar4) && (local_a0[0] = DAT_ram_4009a380, fVar4 <= DAT_ram_4009672c)) {
    local_a0[0] = fVar4 * DAT_ram_4009a380 + 0.0;
  }
  puVar10 = param_1 + 0x88;
  local_a0[2] = fVar17;
  fStack_a4 = fVar15;
  if (param_3 == 5) {
    fVar14 = 0.0;
    if ((0.0 <= fStack_b8) && (fVar14 = DAT_ram_4009a330, fStack_b8 <= DAT_ram_4009672c)) {
      fVar14 = fStack_b8 * DAT_ram_4009a330 + 0.0;
    }
    fVar17 = 0.0;
    if ((0.0 <= fVar4) && (fVar17 = DAT_ram_4009a378, fVar4 <= DAT_ram_4009672c)) {
      fVar17 = fVar4 * DAT_ram_4009a378 + 0.0;
    }
    pfVar8 = (float *)((int)param_1 + 0x444);
    pfVar7 = local_a0;
    do {
      fVar4 = pfVar8[2];
      fVar6 = pfVar8[3];
      fVar5 = *pfVar8;
      pfVar7[1] = pfVar8[1];
      pfVar7[2] = fVar4;
      *pfVar7 = fVar5;
      pfVar7[3] = fVar6;
      pfVar8 = pfVar8 + 4;
      pfVar7 = pfVar7 + 4;
    } while (pfVar8 != (float *)((int)param_1 + 0x484));
    fStack_8c = (float)CONCAT31(fStack_8c._1_3_,1);
    local_a0[3] = DAT_ram_40096780;
    local_a0[4] = (float)DAT_ram_4009f9e4;
    fStack_88 = DAT_ram_4009672c;
    uStack_84 = 0;
    fStack_80 = (float)CONCAT22(fStack_80._2_2_,0x100);
    fStack_7c = DAT_ram_4009a324;
    if ((0.0 <= fVar16) && (fStack_7c = DAT_ram_4009a328, fVar16 <= DAT_ram_4009672c)) {
      fStack_7c = fVar16 * DAT_ram_4009b138 + DAT_ram_4009a324;
    }
    uStack_78 = DAT_ram_40099f9c;
    uStack_74 = DAT_ram_40099f38;
    uStack_70 = DAT_ram_4009f9f4;
    uStack_6c = DAT_ram_4009f9f8;
    uStack_68 = DAT_ram_4009f31c;
    fStack_64 = DAT_ram_4009a378;
    local_a0[0] = fVar14;
    local_a0[1] = fVar17;
    nc_reverb_shimmer_configure(puVar10,local_a0);
  }
  else {
    switch(param_3) {
    case 0:
      nc_reverb_room_set_parameter_1(puVar10);
      nc_reverb_room_set_parameter_2(local_a0[0],puVar10);
      nc_reverb_room_set_parameter_3(fVar17,puVar10);
      nc_reverb_room_set_parameter_4(fVar16 * (float)DAT_ram_4009f060,DAT_ram_4009f9e8,puVar10);
      break;
    case 1:
      local_a0[3] = fVar16 * DAT_ram_40096780;
      local_a0[4] = (float)DAT_ram_4009f9e4;
      fStack_8c._1_3_ = (undefined3)((uint)*(undefined4 *)(param_1 + 0x8b) >> 8);
      fStack_8c = (float)CONCAT31(fStack_8c._1_3_,1);
      fStack_88 = DAT_ram_4009672c;
      uStack_84 = *(uint *)(param_1 + 0x8c) & 0xffffff00;
      local_a0[2] = local_a0[0];
      local_a0[0] = local_a0[1];
      local_a0[1] = fVar17;
      nc_reverb_plate_configure(puVar10,local_a0);
      break;
    case 2:
      local_a0[4] = *(float *)((int)param_1 + 0x454);
      fStack_8c = *(float *)(param_1 + 0x8b);
      fVar14 = DAT_ram_40096730;
      if ((((0.0 <= fVar17) && (fVar14 = DAT_ram_4009f930, fVar17 <= DAT_ram_4009672c)) &&
          (fVar4 = -(fVar17 * DAT_ram_4009f8d8) + DAT_ram_40096730, fVar14 = DAT_ram_40099f6c,
          DAT_ram_40099f6c <= fVar4)) && (fVar14 = fVar4, DAT_ram_40096730 < fVar4)) {
        fVar14 = DAT_ram_40096730;
      }
      local_a0[2] = (float)DAT_ram_4009f9ec;
      local_a0[3] = 0.0;
      if ((0.0 <= fVar16) && (local_a0[3] = DAT_ram_40096730, fVar16 <= DAT_ram_4009672c)) {
        local_a0[3] = fVar16 * DAT_ram_40096730;
      }
      fStack_88 = (float)DAT_ram_4009b140;
      uStack_84 = DAT_ram_4009f9f0;
      fStack_80 = DAT_ram_4009672c;
      uStack_78 = *(uint *)((int)param_1 + 0x46c) & 0xffffff00;
      fStack_7c = local_a0[0];
      local_a0[0] = local_a0[1];
      local_a0[1] = fVar14;
      nc_reverb_hall_configure(puVar10,local_a0);
      break;
    case 3:
      local_a0[3] = DAT_ram_4009672c;
      if (fVar16 < 0.0) {
        local_a0[4] = 0.0;
        fStack_8c = DAT_ram_40099f6c;
      }
      else if (DAT_ram_4009672c < fVar16) {
        local_a0[4] = (float)DAT_ram_4009f060;
        fStack_8c = DAT_ram_4009f080;
      }
      else {
        local_a0[4] = fVar16 * (float)DAT_ram_4009f060;
        fStack_8c = fVar16 * DAT_ram_4009f230 + DAT_ram_40099f6c;
      }
      fStack_88 = (float)(*(uint *)((int)param_1 + 0x45c) & 0xffffff00);
      nc_reverb_concert_configure(puVar10,local_a0);
      break;
    default:
      local_a0[0] = DAT_ram_4009672c;
      if ((0.0 <= fStack_b8) && (local_a0[0] = DAT_ram_40096780, fStack_b8 <= DAT_ram_4009672c)) {
        local_a0[0] = fStack_b8 * DAT_ram_4009a560 + DAT_ram_4009672c;
      }
      local_a0[1] = 0.0;
      if ((0.0 <= fVar4) && (local_a0[1] = DAT_ram_4009672c, fVar4 <= DAT_ram_4009672c)) {
        local_a0[1] = fVar4;
      }
      local_a0[2] = 0.0;
      if ((0.0 <= fStack_b0) && (local_a0[2] = DAT_ram_4009672c, fStack_b0 <= DAT_ram_4009672c)) {
        local_a0[2] = fStack_b0;
      }
      local_a0[3] = DAT_ram_40099f34;
      if ((0.0 <= fStack_ac) && (local_a0[3] = DAT_ram_4009a374, fStack_ac <= DAT_ram_4009672c)) {
        local_a0[3] = fStack_ac * DAT_ram_4009b198 + DAT_ram_40099f34;
      }
      nc_reverb_cloud_configure(puVar10,local_a0);
      break;
    case 7:
      fVar17 = DAT_ram_4009672c;
      if (fStack_b8 < 0.0) {
LAB_ram_400739a2:
        FUN_ram_40000d44(DAT_ram_4009a374,fVar17);
      }
      else {
        if (fStack_b8 <= DAT_ram_4009672c) {
          if (fStack_b8 < (float)DAT_ram_4009675c) {
            fVar17 = DAT_ram_4009672c - (fStack_b8 + fStack_b8);
            goto LAB_ram_400739a2;
          }
          fVar17 = (fStack_b8 + fStack_b8) - DAT_ram_4009672c;
        }
        FUN_ram_40000d44(DAT_ram_4009673c,fVar17);
      }
      nc_reverb_spring_set_decay(puVar10);
      nc_reverb_spring_set_crossover(fVar3,puVar10);
      uVar13 = FUN_ram_40000882((fVar4 * DAT_ram_4009a37c + DAT_ram_40099f7c) * (float)*param_1 *
                                DAT_ram_4009f0ac,DAT_ram_4009f9fc);
      *(undefined4 *)((int)param_1 + 0x205fc) = uVar13;
      if (*(char *)((int)param_1 + 0x20602) == '\0') {
        *(undefined4 *)(param_1 + 0x40bf) = uVar13;
        *(undefined1 *)((int)param_1 + 0x20602) = 1;
      }
      fVar4 = DAT_ram_4009b1a0;
      if ((0.0 <= fVar2) && (fVar4 = DAT_ram_4009f9d8, fVar2 <= fVar14)) {
        if (fVar2 < (float)DAT_ram_4009675c) {
          fVar4 = (fVar2 + fVar2) * DAT_ram_4009fa08 + DAT_ram_4009b1a0;
        }
        else {
          fVar4 = ((fVar2 - (float)DAT_ram_4009675c) + (fVar2 - (float)DAT_ram_4009675c)) *
                  DAT_ram_4009fa00 + DAT_ram_4009fa04;
        }
      }
      nc_reverb_spring_set_tone(fVar4,puVar10);
    }
  }
  *(float *)(param_1 + 1) = fVar1;
  *(ulonglong *)((int)param_1 + 0xc) = uVar12;
  *(float *)(param_1 + 2) = fVar2;
  *(float *)((int)param_1 + 0x14) = fVar3;
  param_1[3] = uVar11;
  *(float *)((int)param_1 + 0x1c) = fVar15;
LAB_ram_4007337a:
  return uVar11 & 0xffffffff;
}

