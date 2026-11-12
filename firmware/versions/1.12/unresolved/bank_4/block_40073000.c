/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40073000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40073170.
 * REA evidence: ev_20d203d6a96738134c29c9259c9b1a1ce662e4242bd0ab6cb70992f09641c2ba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40073acc) */

ulonglong FUN_ram_40073170(undefined8 *param_1,int param_2,uint param_3)

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
      fStack_a8 = DAT_ram_4009675c;
      fStack_b8 = DAT_ram_4009f230;
    }
    else if (param_3 == 7) {
      fStack_b0 = DAT_ram_4009675c;
      fStack_b4 = DAT_ram_40099f94;
      fStack_b8 = DAT_ram_4009675c;
      fStack_ac = fStack_b0;
      fStack_a8 = fStack_b0;
      fStack_a4 = fStack_b0;
    }
    else {
      if (param_3 != 5) {
        fVar15 = DAT_ram_40099f90;
        if (param_3 < 4) {
          iVar9 = param_3 * 4;
          fStack_b8 = ((float)*(undefined8 *)(&DAT_ram_4009fa0c + iVar9) - DAT_ram_4009675c) /
                      DAT_ram_4009b194;
          fStack_b0 = (float)*(undefined8 *)(&DAT_ram_4009fa2c + iVar9);
          fStack_ac = (float)*(undefined8 *)(&DAT_ram_4009fa3c + iVar9);
          fStack_a8 = (float)*(undefined8 *)(&DAT_ram_4009fa4c + iVar9);
          fVar15 = (float)*(undefined8 *)(&DAT_ram_4009fa1c + iVar9) / DAT_ram_4009a380;
        }
        goto LAB_ram_4007319c;
      }
      fStack_ac = DAT_ram_4009a644;
      fStack_a8 = DAT_ram_4009675c;
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
  local_a0[1] = DAT_ram_4009675c;
  if ((0.0 <= fStack_b8) && (local_a0[1] = DAT_ram_4009a330, fStack_b8 <= DAT_ram_4009672c)) {
    local_a0[1] = fStack_b8 * DAT_ram_4009b194 + DAT_ram_4009675c;
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
    FUN_ram_40083f32(puVar10,local_a0);
  }
  else {
    switch(param_3) {
    case 0:
      FUN_ram_40082726(puVar10);
      FUN_ram_400827ae(local_a0[0],puVar10);
      FUN_ram_40082752(fVar17,puVar10);
      FUN_ram_400827d8(fVar16 * DAT_ram_4009f060,DAT_ram_4009f9e8,puVar10);
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
      FUN_ram_4007fc48(puVar10,local_a0);
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
      FUN_ram_4007d8f0(puVar10,local_a0);
      break;
    case 3:
      local_a0[3] = DAT_ram_4009672c;
      if (fVar16 < 0.0) {
        local_a0[4] = 0.0;
        fStack_8c = DAT_ram_40099f6c;
      }
      else if (DAT_ram_4009672c < fVar16) {
        local_a0[4] = DAT_ram_4009f060;
        fStack_8c = DAT_ram_4009f080;
      }
      else {
        local_a0[4] = fVar16 * DAT_ram_4009f060;
        fStack_8c = fVar16 * DAT_ram_4009f230 + DAT_ram_40099f6c;
      }
      fStack_88 = (float)(*(uint *)((int)param_1 + 0x45c) & 0xffffff00);
      FUN_ram_4007b5b8(puVar10,local_a0);
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
      FUN_ram_4005ddc4(puVar10,local_a0);
      break;
    case 7:
      fVar17 = DAT_ram_4009672c;
      if (fStack_b8 < 0.0) {
LAB_ram_400739a2:
        FUN_ram_40000d44(DAT_ram_4009a374,fVar17);
      }
      else {
        if (fStack_b8 <= DAT_ram_4009672c) {
          if (fStack_b8 < DAT_ram_4009675c) {
            fVar17 = DAT_ram_4009672c - (fStack_b8 + fStack_b8);
            goto LAB_ram_400739a2;
          }
          fVar17 = (fStack_b8 + fStack_b8) - DAT_ram_4009672c;
        }
        FUN_ram_40000d44(DAT_ram_4009673c,fVar17);
      }
      FUN_ram_40094f12(puVar10);
      FUN_ram_40095044(fVar3,puVar10);
      uVar13 = FUN_ram_40000882((fVar4 * DAT_ram_4009a37c + DAT_ram_40099f7c) * (float)*param_1 *
                                DAT_ram_4009f0ac,DAT_ram_4009f9fc);
      *(undefined4 *)((int)param_1 + 0x205fc) = uVar13;
      if (*(char *)((int)param_1 + 0x20602) == '\0') {
        *(undefined4 *)(param_1 + 0x40bf) = uVar13;
        *(undefined1 *)((int)param_1 + 0x20602) = 1;
      }
      fVar4 = DAT_ram_4009b1a0;
      if ((0.0 <= fVar2) && (fVar4 = DAT_ram_4009f9d8, fVar2 <= fVar14)) {
        if (fVar2 < DAT_ram_4009675c) {
          fVar4 = (fVar2 + fVar2) * DAT_ram_4009fa08 + DAT_ram_4009b1a0;
        }
        else {
          fVar4 = ((fVar2 - DAT_ram_4009675c) + (fVar2 - DAT_ram_4009675c)) * DAT_ram_4009fa00 +
                  DAT_ram_4009fa04;
        }
      }
      FUN_ram_40095452(fVar4,puVar10);
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


/* NanoCore 1.12, address 0x40073ad6.
 * REA evidence: ev_e7d394d4b8e906667d35a4b684733005a2d0b18551cfd47273792b1a08c46726
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_40073ad6(float param_1)

{
  if (param_1 < 0.0) {
    return DAT_ram_4009b1a0;
  }
  if (param_1 <= DAT_ram_4009672c) {
    if (DAT_ram_4009675c <= param_1) {
      return ((param_1 - DAT_ram_4009675c) + (param_1 - DAT_ram_4009675c)) * DAT_ram_4009fa00 +
             DAT_ram_4009fa04;
    }
    return (param_1 + param_1) * DAT_ram_4009fa08 + DAT_ram_4009b1a0;
  }
  return DAT_ram_4009f9d8;
}


/* NanoCore 1.12, address 0x40073b48.
 * REA evidence: ev_77ccd9075c7f8a0a11a4ab5b77ab51828eb542dd566d6d0caa54d0be52f70b8f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40073b48(float param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  if (param_2 != (ulonglong *)0x0) {
    memset(param_2,0,0x74c68);
    if (param_1 <= DAT_ram_40099f28) {
      param_1 = DAT_ram_4009678c;
    }
    uVar1 = (ulonglong)DAT_ram_40096728;
    *param_2 = (ulonglong)(uint)param_1;
    *(undefined1 *)((int)param_2 + 4) = 0xff;
    param_2[1] = uVar1;
    *(ulonglong *)((int)param_2 + 0xc) = uVar1;
    param_2[2] = uVar1;
    *(ulonglong *)((int)param_2 + 0x14) = uVar1;
    param_2[3] = uVar1;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar1;
    memset(param_2 + 4,0,0x18);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40073bb0.
 * REA evidence: ev_50c600c258746a704f18b0404d2fbcaeabf19fc27084e65831e81ec43712e99f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40073bb0(ulonglong *param_1,uint param_2)

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
    FUN_ram_40082250(uVar5);
    goto LAB_ram_40073c1e;
  }
  if (param_2 == 4) {
    if (fVar4 <= DAT_ram_40099f28) {
      uVar5 = (ulonglong)DAT_ram_4009678c;
    }
switchD_ram_40073c00_caseD_2:
    param_2 = 2;
    FUN_ram_4007d834(uVar5);
  }
  else {
    if (fVar4 <= DAT_ram_40099f28) {
      uVar5 = (ulonglong)DAT_ram_4009678c;
    }
    switch(param_2) {
    case 0:
      goto switchD_ram_40073c00_caseD_0;
    case 1:
      FUN_ram_4007fba4();
      break;
    case 2:
      goto switchD_ram_40073c00_caseD_2;
    case 3:
      FUN_ram_4007b514();
      break;
    default:
      FUN_ram_4005d850();
      FUN_ram_4005dd98(CONCAT44(uStack_20,(int)uVar5),param_1 + 0x88);
      FUN_ram_4005ddbc(param_1 + 0x88);
      break;
    case 5:
      FUN_ram_40083e34();
      break;
    case 7:
      FUN_ram_40095476();
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
      iVar2 = FUN_ram_4000303c(uVar3,FUN_ram_400a1540);
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


/* NanoCore 1.12, address 0x40073d90.
 * REA evidence: ev_9b47f180aa1ebd53288d105ee93320e675428e6909b5616e32bd00c01d035f64
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40073d90(int param_1)

{
  if (param_1 != 0) {
    return *(undefined1 *)(param_1 + 4);
  }
  return 0xff;
}


/* NanoCore 1.12, address 0x40073d9e.
 * REA evidence: ev_7994739fdec8e1ca70ae7315118ee84e71b3628a9e18e7ff1e3a203827fd6655
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40073d9e(int param_1)

{
  ulonglong uVar1;
  
  if (param_1 != 0) {
    switch(*(undefined1 *)(param_1 + 4)) {
    case 0:
      FUN_ram_40082360(param_1 + 0x440);
      break;
    case 1:
      FUN_ram_4007fc84(param_1 + 0x440);
      break;
    case 2:
      FUN_ram_4007d944(param_1 + 0x440);
      break;
    case 3:
      FUN_ram_4007b5ec(param_1 + 0x440);
      break;
    case 5:
      FUN_ram_40083f80(param_1 + 0x440);
      break;
    case 6:
      FUN_ram_4005dde4(param_1 + 0x440);
      break;
    case 7:
      FUN_ram_4009547e(param_1 + 0x440);
      memset(param_1 + 0x1c5f8,0,0x4000);
      *(undefined2 *)(param_1 + 0x20600) = 0;
      *(undefined4 *)(param_1 + 0x205f8) = *(undefined4 *)(param_1 + 0x205fc);
    }
    uVar1 = (ulonglong)DAT_ram_40096728;
    *(ulonglong *)(param_1 + 8) = uVar1;
    *(ulonglong *)(param_1 + 0xc) = uVar1;
    *(ulonglong *)(param_1 + 0x10) = uVar1;
    *(ulonglong *)(param_1 + 0x14) = uVar1;
    *(ulonglong *)(param_1 + 0x18) = uVar1;
    *(ulonglong *)(param_1 + 0x1c) = uVar1;
    memset(param_1 + 0x20,0,0x18);
    *(undefined1 *)(param_1 + 0x38) = 0;
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40073e58.
 * REA evidence: ev_3ccfc59d9ddb8b4fdb14afd3e409bbee2d2053c102fe28125f4fa7465a2a02bd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40073e58(float *param_1,uint param_2,uint param_3)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  
  if ((param_1 == (float *)0x0) || (param_2 == 0)) {
    return;
  }
  memset(param_1,0,param_2 * 4);
  fVar6 = DAT_ram_4009f9cc;
  fVar7 = DAT_ram_40099f7c;
  fVar3 = DAT_ram_4009b144;
  fVar4 = DAT_ram_40099f88;
  fVar5 = DAT_ram_40099f90;
  if ((param_3 < 8) &&
     (fVar6 = DAT_ram_4009f9d0, fVar7 = DAT_ram_4009a328, fVar3 = DAT_ram_4009f9d4,
     fVar4 = DAT_ram_4009f0bc, fVar5 = DAT_ram_4009f2dc, param_3 != 4)) {
    if (param_3 == 6) {
      *param_1 = DAT_ram_4009f230;
      if (param_2 != 1) {
        param_1[1] = DAT_ram_4009a644;
        if (param_2 != 2) {
          param_1[2] = DAT_ram_4009f0bc;
        }
        if (3 < param_2) {
          param_1[3] = DAT_ram_4009f9dc;
        }
      }
    }
    else {
      if (param_3 == 7) {
        uVar8 = (ulonglong)(uint)DAT_ram_4009675c;
        pfVar2 = param_1;
        do {
          *(ulonglong *)pfVar2 = uVar8;
          pfVar2 = pfVar2 + 1;
        } while (pfVar2 != param_1 + param_2);
        if (param_2 == 1) {
          return;
        }
        param_1[1] = DAT_ram_40099f94;
        return;
      }
      if (param_3 != 5) {
        if (param_3 < 4) {
          iVar1 = param_3 * 4;
          fVar6 = ((float)*(undefined8 *)(&DAT_ram_4009fa0c + iVar1) - DAT_ram_4009675c) /
                  DAT_ram_4009b194;
          fVar7 = (float)*(undefined8 *)(&DAT_ram_4009fa1c + iVar1);
          fVar3 = (float)*(undefined8 *)(&DAT_ram_4009fa2c + iVar1);
          fVar4 = (float)*(undefined8 *)(&DAT_ram_4009fa3c + iVar1);
          fVar5 = (float)*(undefined8 *)(&DAT_ram_4009fa4c + iVar1);
        }
        goto LAB_ram_40073ee2;
      }
      *param_1 = DAT_ram_4009f9e0;
      if (param_2 != 1) {
        param_1[1] = 0.0;
        if (param_2 != 2) {
          param_1[2] = DAT_ram_4009f9d4;
        }
        if (3 < param_2) {
          param_1[3] = DAT_ram_4009a644;
        }
      }
    }
    if (4 < param_2) {
      param_1[4] = DAT_ram_4009675c;
    }
  }
  else {
LAB_ram_40073ee2:
    *param_1 = fVar6;
    if (param_2 != 1) {
      param_1[1] = fVar7 / DAT_ram_4009a380;
      if (param_2 != 2) {
        param_1[2] = fVar3;
      }
      if (3 < param_2) {
        param_1[3] = fVar4;
      }
    }
    if (4 < param_2) {
      param_1[4] = fVar5;
    }
  }
  return;
}


