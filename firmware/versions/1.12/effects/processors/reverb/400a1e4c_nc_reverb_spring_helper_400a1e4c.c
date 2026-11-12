/* NanoCore 1.12: nc_reverb_spring_helper_400a1e4c at 0x400a1e4c.
 * Role: Direct callee closure inside copied Spring blob; semantic role not yet established
 * REA: ev_46eb5f8438cdc4c5855154de311184b4f0c1f0324059be34480bc4b04660d1f2
 * Source: analysis/rea-1.12-effects/results/03723-export-0x400a1e4c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_spring_helper_400a1e4c(int param_1,float *param_2,undefined8 *param_3,int param_4)

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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float in_register_00000100;
  float *pfVar30;
  float *pfVar31;
  uint uVar32;
  float *pfVar33;
  float *pfVar34;
  uint uVar35;
  uint uVar36;
  float *pfVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  undefined4 *puVar40;
  uint uVar41;
  float *pfVar42;
  int iVar43;
  float *pfVar44;
  float *pfVar45;
  float *pfVar46;
  float *pfVar47;
  undefined4 *puVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  
  uVar41 = (uint)*(ushort *)(param_1 + 0x13210);
  fVar55 = *(float *)(param_1 + 0x13220);
  fVar54 = *(float *)(param_1 + 0x13224);
  fVar53 = *(float *)(param_1 + 0x13228);
  fVar50 = *(float *)(param_1 + 0x1322c);
  fVar49 = *(float *)(param_1 + 0x13230);
  fVar58 = *(float *)(param_1 + 0x13234);
  fVar57 = *(float *)(param_1 + 0x13238);
  fVar56 = *(float *)(param_1 + 0x1323c);
  fVar4 = *(float *)(param_1 + 0x136bc);
  puVar48 = (undefined4 *)(param_1 + 0x96a0);
  if (param_4 != 0) {
    pfVar34 = (float *)(puVar48 + uVar41);
    pfVar30 = (float *)(puVar48 + *(ushort *)(param_1 + 0x13212) + 0x38a);
    pfVar47 = (float *)(puVar48 + *(ushort *)(param_1 + 0x13214) + 0x767);
    pfVar46 = (float *)(puVar48 + *(ushort *)(param_1 + 0x13216) + 0xb99);
    pfVar45 = (float *)(puVar48 + *(ushort *)(param_1 + 0x13218) + 0x102e);
    pfVar31 = (float *)(puVar48 + *(ushort *)(param_1 + 0x1321a) + 0x1525);
    pfVar42 = (float *)(puVar48 + *(ushort *)(param_1 + 0x1321c) + 0x1a8f);
    pfVar37 = (float *)(puVar48 + *(ushort *)(param_1 + 0x1321e) + 0x2073);
    pfVar33 = (float *)(param_1 + 0x16ce8);
    pfVar44 = param_2 + param_4;
    do {
      fVar28 = DAT_ram_400a3714;
      fVar52 = (float)*param_3;
      fVar22 = fVar52 * (float)DAT_ram_400a36d4;
      fVar5 = *param_2;
      fVar23 = fVar52 * (float)DAT_ram_400a36dc;
      fVar13 = fVar5 * DAT_ram_400a36d4._4_4_;
      fVar14 = fVar5 * DAT_ram_400a36dc._4_4_;
      fVar51 = (float)*(undefined8 *)pfVar34;
      fVar15 = fVar51 * DAT_ram_400a36e4;
      fVar6 = *pfVar30;
      fVar16 = fVar51 * DAT_ram_400a36e8;
      fVar7 = *pfVar47;
      fVar55 = *(float *)(param_1 + 0x13240) * (fVar51 - fVar55) + fVar55;
      fVar8 = *pfVar46;
      fVar54 = *(float *)(param_1 + 0x13244) * (fVar6 - fVar54) + fVar54;
      fVar9 = *pfVar42;
      fVar53 = *(float *)(param_1 + 0x13248) * (fVar7 - fVar53) + fVar53;
      fVar10 = *pfVar45;
      fVar11 = *pfVar31;
      fVar12 = *pfVar37;
      fVar50 = *(float *)(param_1 + 0x1324c) * (fVar8 - fVar50) + fVar50;
      fVar57 = *(float *)(param_1 + 0x13258) * (fVar9 - fVar57) + fVar57;
      fVar49 = *(float *)(param_1 + 0x13250) * (fVar10 - fVar49) + fVar49;
      fVar56 = *(float *)(param_1 + 0x1325c) * (fVar12 - fVar56) + fVar56;
      fVar58 = *(float *)(param_1 + 0x13254) * (fVar11 - fVar58) + fVar58;
      fVar17 = fVar6 * (float)DAT_ram_400a36ec;
      fVar6 = fVar6 * DAT_ram_400a36ec._4_4_;
      fVar18 = fVar7 * (float)DAT_ram_400a36f4;
      fVar51 = (fVar49 - fVar58) + (fVar57 - fVar56);
      fVar24 = (fVar49 - fVar58) - (fVar57 - fVar56);
      fVar7 = fVar7 * DAT_ram_400a36f4._4_4_;
      fVar19 = fVar8 * DAT_ram_400a36fc;
      fVar1 = fVar49 + fVar58 + fVar57 + fVar56;
      fVar2 = fVar55 + fVar54 + fVar53 + fVar50;
      fVar25 = (fVar49 + fVar58) - (fVar57 + fVar56);
      fVar3 = (fVar55 - fVar54) + (fVar53 - fVar50);
      fVar8 = fVar8 * DAT_ram_400a3700;
      fVar26 = (fVar55 - fVar54) - (fVar53 - fVar50);
      fVar20 = fVar10 * DAT_ram_400a3704;
      fVar10 = fVar10 * DAT_ram_400a3708;
      fVar27 = (fVar55 + fVar54) - (fVar53 + fVar50);
      fVar21 = fVar11 * DAT_ram_400a370c;
      fVar5 = fVar52 * DAT_ram_400a36d0 + fVar5;
      fVar11 = fVar11 * DAT_ram_400a3710;
      *pfVar34 = fVar5 * in_register_00000100 + (fVar2 + fVar1) * fVar4;
      fVar52 = fVar9 * DAT_ram_400a3718;
      *pfVar30 = fVar5 * in_register_00000100 + (fVar3 + fVar51) * fVar4;
      *pfVar47 = fVar5 * in_register_00000100 + (fVar27 + fVar25) * fVar4;
      fVar29 = (float)DAT_ram_400a371c;
      *pfVar46 = fVar5 * in_register_00000100 + (fVar26 + fVar24) * fVar4;
      *pfVar45 = fVar5 * in_register_00000100 + (fVar2 - fVar1) * fVar4;
      *pfVar31 = fVar5 * in_register_00000100 + (fVar3 - fVar51) * fVar4;
      *pfVar42 = fVar5 * in_register_00000100 + (fVar27 - fVar25) * fVar4;
      *(ulonglong *)pfVar37 =
           (ulonglong)(uint)(fVar5 * in_register_00000100 + (fVar26 - fVar24) * fVar4);
      *pfVar33 = fVar12 * fVar29 +
                 fVar9 * fVar28 +
                 fVar21 + fVar20 + fVar19 + fVar18 + fVar17 + fVar15 + fVar13 + fVar22;
      param_2 = param_2 + 1;
      param_3 = (undefined8 *)((int)param_3 + 4);
      pfVar33[0x20] =
           fVar12 * in_register_00000100 +
           fVar52 + fVar11 + fVar10 + fVar8 + fVar7 + fVar6 + fVar16 + fVar14 + fVar23;
      pfVar34 = pfVar34 + 1;
      pfVar30 = pfVar30 + 1;
      pfVar47 = pfVar47 + 1;
      pfVar46 = pfVar46 + 1;
      pfVar45 = pfVar45 + 1;
      pfVar31 = pfVar31 + 1;
      pfVar42 = pfVar42 + 1;
      pfVar37 = pfVar37 + 1;
      pfVar33 = pfVar33 + 1;
    } while (pfVar44 != param_2);
  }
  *(float *)(param_1 + 0x13220) = fVar55;
  *(float *)(param_1 + 0x13224) = fVar54;
  *(float *)(param_1 + 0x13228) = fVar53;
  *(float *)(param_1 + 0x1322c) = fVar50;
  *(float *)(param_1 + 0x13230) = fVar49;
  *(float *)(param_1 + 0x13234) = fVar58;
  *(float *)(param_1 + 0x13238) = fVar57;
  *(float *)(param_1 + 0x1323c) = fVar56;
  uVar35 = 0x36a;
  uVar32 = uVar41 + param_4;
  iVar43 = 0;
  param_1 = param_1 + 0x13210;
  puVar39 = puVar48;
  if (uVar32 < 0x36b) goto LAB_ram_400a22ee;
  do {
    puVar38 = puVar39;
    do {
      puVar40 = puVar38 + 1;
      *puVar38 = (int)*(undefined8 *)(puVar38 + uVar35);
      puVar38 = puVar40;
    } while (puVar39 + (uVar32 - uVar35) != puVar40);
    *(short *)(param_1 + iVar43 * 2) = (short)(uVar32 - uVar35);
    while( true ) {
      iVar43 = iVar43 + 1;
      if (iVar43 == 8) {
        return;
      }
      uVar41 = (uint)*(ushort *)(param_1 + iVar43 * 2);
      uVar35 = (uint)*(ushort *)(iVar43 * 2 + 0x400a390c);
      uVar32 = uVar41 + param_4;
      puVar39 = puVar48 + *(ushort *)(iVar43 * 2 + 0x400a3a18);
      if (uVar35 < uVar32) break;
LAB_ram_400a22ee:
      if (uVar41 < 0x20) {
        uVar36 = uVar32;
        if (0x20 < uVar32) {
          uVar36 = 0x20;
        }
        if (uVar36 != uVar41) {
          puVar38 = puVar39 + uVar35 + uVar41;
          do {
            puVar40 = puVar38 + 1;
            *puVar38 = (int)*(undefined8 *)(puVar38 + (uVar41 - (uVar35 + uVar41)));
            puVar38 = puVar40;
          } while (puVar39 + uVar36 + uVar35 != puVar40);
        }
      }
      if (uVar35 == uVar32) {
        uVar32 = 0;
      }
      *(short *)(param_1 + iVar43 * 2) = (short)uVar32;
    }
  } while( true );
}

