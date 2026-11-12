/* NanoCore 1.12: nc_reverb_dispatch at 0x30043fd4.
 * Role: RAM callback: routes subtype to algorithm, applies dry/wet mix
 * REA: ev_d10afc24ffbb7164cfa52a4995eca5c185527cfe01328838aa758383a92181ef
 * Source: analysis/rea-1.12-effects/results/01013-export-0x30043fd4.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Type propagation algorithm not settling */

void nc_reverb_dispatch
               (int param_1,undefined8 *param_2,float *param_3,float *param_4,float *param_5,
               uint param_6,undefined4 param_7,uint param_8,char param_9,int param_10)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  ulonglong *puVar9;
  float *pfVar10;
  float *pfVar11;
  ushort uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  float *pfVar17;
  uint uVar18;
  int iVar19;
  ulonglong *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  if ((((param_1 == 0) || (param_2 == (undefined8 *)0x0)) || (param_4 == (float *)0x0)) ||
     (param_6 == 0)) {
    return;
  }
  if (param_10 != 0) {
    *(bool *)param_10 = param_9 != '\0' && (param_3 != (float *)0x0 && param_5 != (float *)0x0);
  }
  fVar7 = (float)DAT_ram_4009675c;
  uVar8 = 2;
  if (param_8 != 4) {
    uVar8 = param_8;
  }
  uVar21 = 0;
  if (param_8 < 8) {
    uVar21 = uVar8;
  }
  if (*(byte *)(param_1 + 4) != uVar21) {
    if (param_9 == '\0') {
      puVar13 = (undefined8 *)((int)param_2 + param_6 * 4);
      if (param_5 != (float *)0x0) {
        do {
          uVar27 = *param_2;
          param_2 = (undefined8 *)((int)param_2 + 4);
          *param_4 = (float)uVar27;
          *param_5 = (float)uVar27;
          param_5 = param_5 + 1;
          param_4 = param_4 + 1;
        } while (param_2 != puVar13);
        return;
      }
      do {
        puVar14 = (undefined8 *)((int)param_2 + 4);
        *param_4 = (float)*param_2;
        if (puVar13 == puVar14) {
          return;
        }
        param_2 = param_2 + 1;
        param_4[1] = (float)*puVar14;
        param_4 = param_4 + 2;
      } while (puVar13 != param_2);
      return;
    }
    if (param_3 != (float *)0x0) {
      if (param_5 != (float *)0x0) {
        iVar19 = 0;
        do {
          puVar13 = (undefined8 *)((int)param_3 + iVar19);
          *(undefined8 *)((int)param_4 + iVar19) = *(undefined8 *)((int)param_2 + iVar19);
          puVar14 = (undefined8 *)((int)param_5 + iVar19);
          iVar19 = iVar19 + 4;
          *puVar14 = *puVar13;
        } while (iVar19 != param_6 << 2);
        return;
      }
      puVar13 = (undefined8 *)((int)param_2 + param_6 * 4);
      do {
        fVar4 = *param_3;
        uVar27 = *param_2;
        param_2 = (undefined8 *)((int)param_2 + 4);
        param_3 = param_3 + 1;
        *param_4 = (fVar4 + (float)uVar27) * fVar7;
        param_4 = param_4 + 1;
      } while (puVar13 != param_2);
      return;
    }
    puVar13 = (undefined8 *)((int)param_2 + param_6 * 4);
    if (param_5 != (float *)0x0) {
      do {
        uVar27 = *param_2;
        param_2 = (undefined8 *)((int)param_2 + 4);
        *param_4 = (float)uVar27;
        *param_5 = (float)uVar27;
        param_5 = param_5 + 1;
        param_4 = param_4 + 1;
      } while (param_2 != puVar13);
      return;
    }
    do {
      uVar27 = *param_2;
      param_2 = (undefined8 *)((int)param_2 + 4);
      *param_4 = (float)uVar27;
      param_4 = param_4 + 1;
    } while (param_2 != puVar13);
    return;
  }
  fVar25 = (float)nc_reverb_apply_parameters(param_1,param_7,uVar21);
  fVar4 = (float)DAT_ram_4009675c;
  fVar7 = DAT_ram_4009672c;
  if (fVar25 < 0.0) {
    fVar25 = 0.0;
  }
  else {
    if (DAT_ram_4009672c < fVar25) {
      fVar24 = 0.0;
      fVar25 = DAT_ram_4009672c;
      goto LAB_ram_3004413c;
    }
    if (DAT_ram_4009a644 < fVar25) {
      fVar24 = -((fVar25 - DAT_ram_4009a644) * DAT_ram_40099f30) + DAT_ram_4009672c;
      if (fVar24 < 0.0) {
        fVar24 = 0.0;
        goto LAB_ram_3004413c;
      }
      if (fVar24 <= DAT_ram_4009672c) goto LAB_ram_3004413c;
    }
  }
  fVar24 = DAT_ram_4009672c;
LAB_ram_3004413c:
  uVar22 = 0;
  uVar15 = uVar21 - 6 & 0xff;
  uVar8 = param_6;
  if (0x80 < param_6) {
    uVar8 = 0x80;
  }
  if (param_9 != '\0') goto LAB_ram_3004422a;
LAB_ram_30044170:
  if (param_6 != uVar22) {
    puVar13 = (undefined8 *)((int)param_2 + uVar22 * 4);
    puVar14 = (undefined8 *)(param_1 + 0x3c);
    pfVar11 = param_4 + uVar22;
    uVar16 = 0;
    do {
      uVar27 = *puVar13;
      uVar16 = uVar16 + 1;
      puVar13 = (undefined8 *)((int)puVar13 + 4);
      *puVar14 = uVar27;
      *(undefined8 *)pfVar11 = uVar27;
      puVar14 = (undefined8 *)((int)puVar14 + 4);
      pfVar11 = pfVar11 + 1;
    } while (uVar16 < uVar8);
  }
LAB_ram_30044196:
  do {
    bVar1 = false;
LAB_ram_30044198:
    do {
      if (uVar21 == 6) {
        thunk_FUN_ram_30042d7e(param_1 + 0x440,param_1 + 0x3c,param_1 + 0x3c,uVar8);
        goto switchD_ram_300441b2_caseD_4;
      }
      switch(uVar21) {
      case 0:
        nc_reverb_room_process(param_1 + 0x440,param_1 + 0x3c,param_1 + 0x3c,param_1 + 0x23c,uVar8);
        break;
      case 1:
        nc_reverb_plate_process(param_1 + 0x440,param_1 + 0x3c,param_1 + 0x3c,param_1 + 0x23c,uVar8);
        break;
      case 2:
        nc_reverb_hall_process(param_1 + 0x440,param_1 + 0x3c,param_1 + 0x3c,param_1 + 0x23c,uVar8);
        break;
      case 3:
        nc_reverb_concert_process(param_1 + 0x440,param_1 + 0x3c,param_1 + 0x3c,param_1 + 0x23c,uVar8);
        break;
      case 5:
        nc_reverb_shimmer_process(param_1 + 0x440,param_1 + 0x3c,param_1 + 0x3c,param_1 + 0x23c,uVar8);
        break;
      case 7:
        fVar26 = *(float *)(param_1 + 0x205f8);
        fVar3 = *(float *)(param_1 + 0x205fc);
        uVar12 = *(ushort *)(param_1 + 0x20600);
        uVar16 = (uint)uVar12;
        fVar5 = fVar3 - fVar26;
        if (param_6 != uVar22) {
          uVar23 = 0;
          puVar13 = (undefined8 *)(param_1 + 0x3c);
          do {
            uVar2 = (uint)(-1 < (int)fVar26) * (int)fVar26;
            uVar18 = uVar16 - uVar2 & 0xfff;
            fVar6 = fVar26 - (float)uVar2;
            *(int *)(param_1 + (uVar16 + 0x717c) * 4 + 8) = (int)*puVar13;
            puVar9 = puVar13 + 0x2e6f;
            uVar23 = uVar23 + 1;
            fVar26 = fVar26 + fVar5 / (float)(int)uVar8;
            uVar16 = uVar16 + 1 & 0xfff;
            puVar13 = (undefined8 *)((int)puVar13 + 4);
            *puVar9 = (ulonglong)
                      (uint)((float)*(undefined8 *)(param_1 + (uVar18 + 0x717c) * 4 + 8) *
                             (fVar7 - fVar6) +
                            fVar6 * (float)*(undefined8 *)
                                            (param_1 + ((uVar18 - 1 & 0xfff) + 0x717c) * 4 + 8));
          } while (uVar23 < uVar8);
          uVar12 = (ushort)uVar16;
        }
        *(ushort *)(param_1 + 0x20600) = uVar12;
        *(float *)(param_1 + 0x205f8) = fVar3;
        (**(code **)(param_1 + 0x175b4))
                  (param_1 + 0x440,param_1 + 0x173b4,(undefined8 *)(param_1 + 0x3c),param_1 + 0x23c,
                   uVar8);
        goto joined_r0x3004432e;
      }
switchD_ram_300441b2_caseD_4:
joined_r0x3004432e:
      if (bVar1) {
        if (param_6 != uVar22) {
          if (uVar15 < 2) {
            iVar19 = uVar22 << 2;
            uVar16 = 0;
            do {
              puVar13 = (undefined8 *)((int)param_2 + iVar19);
              fVar26 = fVar25 * (float)*(undefined8 *)(iVar19 + uVar22 * -4 + param_1 + 0x3c);
              uVar27 = *(undefined8 *)((int)param_3 + iVar19);
              puVar9 = (ulonglong *)((int)param_4 + iVar19);
              puVar20 = (ulonglong *)((int)param_5 + iVar19);
              uVar16 = uVar16 + 1;
              iVar19 = iVar19 + 4;
              *puVar9 = (ulonglong)(uint)((float)*puVar13 * fVar24 + fVar26);
              *puVar20 = (ulonglong)(uint)((float)uVar27 * fVar24 + fVar26);
            } while (uVar16 < uVar8);
          }
          else {
            puVar13 = (undefined8 *)(param_1 + 0x3c);
            iVar19 = uVar22 << 2;
            uVar16 = 0;
            do {
              fVar26 = *(float *)(puVar13 + 0x40);
              uVar27 = *(undefined8 *)((int)param_3 + iVar19);
              uVar16 = uVar16 + 1;
              *(ulonglong *)((int)param_4 + iVar19) =
                   (ulonglong)
                   (uint)(fVar24 * (float)*(undefined8 *)((int)param_2 + iVar19) +
                         fVar25 * (float)*puVar13);
              puVar13 = (undefined8 *)((int)puVar13 + 4);
              *(ulonglong *)((int)param_5 + iVar19) =
                   (ulonglong)(uint)(fVar24 * (float)uVar27 + fVar25 * fVar26);
              iVar19 = iVar19 + 4;
            } while (uVar16 < uVar8);
          }
        }
      }
      else if (param_6 != uVar22) {
        if (uVar15 < 2) {
          if (param_5 == (float *)0x0) {
            puVar13 = (undefined8 *)(param_1 + 0x3c);
            uVar16 = 0;
            pfVar11 = param_4 + uVar22;
            do {
              uVar27 = *puVar13;
              uVar16 = uVar16 + 1;
              puVar13 = (undefined8 *)((int)puVar13 + 4);
              *pfVar11 = fVar24 * (float)*(undefined8 *)pfVar11 + fVar25 * (float)uVar27;
              pfVar11 = pfVar11 + 1;
            } while (uVar16 < uVar8);
          }
          else {
            puVar13 = (undefined8 *)(param_1 + 0x3c);
            uVar16 = 0;
            pfVar11 = param_5 + uVar22;
            pfVar17 = param_4 + uVar22;
            do {
              uVar27 = *puVar13;
              uVar16 = uVar16 + 1;
              puVar13 = (undefined8 *)((int)puVar13 + 4);
              fVar26 = (float)*(undefined8 *)pfVar17 * fVar24 + fVar25 * (float)uVar27;
              *pfVar17 = fVar26;
              *pfVar11 = fVar26;
              pfVar11 = pfVar11 + 1;
              pfVar17 = pfVar17 + 1;
            } while (uVar16 < uVar8);
          }
        }
        else if (param_5 == (float *)0x0) {
          puVar13 = (undefined8 *)(param_1 + 0x3c);
          uVar16 = 0;
          pfVar11 = param_4 + uVar22;
          do {
            pfVar17 = (float *)(puVar13 + 0x40);
            uVar27 = *puVar13;
            uVar16 = uVar16 + 1;
            puVar13 = (undefined8 *)((int)puVar13 + 4);
            *pfVar11 = fVar24 * (float)*(undefined8 *)pfVar11 +
                       (*pfVar17 + (float)uVar27) * fVar4 * fVar25;
            pfVar11 = pfVar11 + 1;
          } while (uVar16 < uVar8);
        }
        else {
          puVar13 = (undefined8 *)(param_1 + 0x3c);
          uVar16 = 0;
          pfVar11 = param_5 + uVar22;
          pfVar17 = param_4 + uVar22;
          do {
            pfVar10 = (float *)(puVar13 + 0x40);
            uVar27 = *puVar13;
            uVar16 = uVar16 + 1;
            puVar13 = (undefined8 *)((int)puVar13 + 4);
            fVar26 = fVar24 * (float)*(undefined8 *)pfVar17 +
                     (*pfVar10 + (float)uVar27) * fVar4 * fVar25;
            *pfVar17 = fVar26;
            *pfVar11 = fVar26;
            pfVar11 = pfVar11 + 1;
            pfVar17 = pfVar17 + 1;
          } while (uVar16 < uVar8);
        }
      }
      if (param_6 <= uVar22 + uVar8) {
        return;
      }
      uVar22 = uVar22 + uVar8;
      uVar8 = param_6 - uVar22;
      if (0x80 < uVar8) {
        uVar8 = 0x80;
      }
      if (param_9 == '\0') goto LAB_ram_30044170;
LAB_ram_3004422a:
      if (param_3 == (float *)0x0) goto LAB_ram_300444bc;
      bVar1 = param_5 != (float *)0x0;
    } while (param_6 == uVar22);
    if (param_5 != (float *)0x0) {
      puVar13 = (undefined8 *)((int)param_2 + uVar22 * 4);
      pfVar17 = param_3 + uVar22;
      uVar16 = 0;
      pfVar11 = (float *)(param_1 + 0x3c);
      do {
        uVar28 = *puVar13;
        uVar27 = *(undefined8 *)pfVar17;
        uVar16 = uVar16 + 1;
        puVar13 = (undefined8 *)((int)puVar13 + 4);
        pfVar17 = pfVar17 + 1;
        *pfVar11 = ((float)uVar28 + (float)uVar27) * fVar4;
        pfVar11 = pfVar11 + 1;
      } while (uVar16 < uVar8);
      bVar1 = true;
      goto LAB_ram_30044198;
    }
    puVar13 = (undefined8 *)((int)param_2 + uVar22 * 4);
    pfVar10 = param_3 + uVar22;
    uVar16 = 0;
    pfVar11 = (float *)(param_1 + 0x3c);
    pfVar17 = param_4 + uVar22;
    do {
      uVar28 = *(undefined8 *)pfVar10;
      uVar27 = *puVar13;
      uVar16 = uVar16 + 1;
      puVar13 = (undefined8 *)((int)puVar13 + 4);
      pfVar10 = pfVar10 + 1;
      fVar26 = ((float)uVar28 + (float)uVar27) * fVar4;
      *pfVar11 = fVar26;
      *pfVar17 = fVar26;
      pfVar11 = pfVar11 + 1;
      pfVar17 = pfVar17 + 1;
    } while (uVar16 < uVar8);
  } while( true );
LAB_ram_300444bc:
  if (param_6 != uVar22) {
    puVar13 = (undefined8 *)((int)param_2 + uVar22 * 4);
    puVar14 = (undefined8 *)(param_1 + 0x3c);
    pfVar11 = param_4 + uVar22;
    uVar16 = 0;
    do {
      uVar27 = *puVar13;
      uVar16 = uVar16 + 1;
      puVar13 = (undefined8 *)((int)puVar13 + 4);
      *puVar14 = uVar27;
      *(undefined8 *)pfVar11 = uVar27;
      puVar14 = (undefined8 *)((int)puVar14 + 4);
      pfVar11 = pfVar11 + 1;
    } while (uVar16 < uVar8);
  }
  goto LAB_ram_30044196;
}

