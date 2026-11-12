/* NanoCore 1.12: nc_reverb_spring_copied_kernel at 0x400a29c8.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_e64aafffc1c4d16592683f4ed8d9efe72a15fe23282c56a45f4753ebe2112077
 * Source: analysis/rea-1.12-effects/results/03727-export-0x400a29c8.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_spring_copied_kernel(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint in_register_00000100;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  ulonglong *puVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  float *pfVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint *puVar27;
  float *pfVar28;
  uint uVar29;
  ulonglong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  ulonglong uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  ulonglong uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  uint uStack_138;
  uint uStack_12c;
  
  fVar7 = DAT_ram_400a37a0;
  fVar6 = DAT_ram_400a3748;
  fVar5 = DAT_ram_400a3744;
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || ((param_4 == 0 || (param_5 == 0))))
  {
    return;
  }
  uStack_138 = (uint)*(byte *)(param_1 + 0x15fe4);
  iVar21 = param_1 + 0x371c;
  iVar25 = param_1 + 0x161e8;
  uStack_12c = 0;
LAB_ram_400a2b50:
  uVar22 = param_5 - uStack_12c;
  if (0x40 < uVar22) {
    uVar22 = 0x40;
  }
  iVar12 = param_2 + uStack_12c * 4;
  uVar20 = 1 - uStack_138;
  uVar9 = uVar22 + uStack_138 >> 1;
  if (uVar22 <= uVar20) {
    uVar9 = 0;
  }
  nc_reverb_spring_ring_exchange(param_1 + 0xc,0x74b,param_1 + 0x1d38,iVar12,iVar21,uVar22);
  uVar40 = CONCAT44(DAT_ram_400a3768._4_4_,(undefined4)DAT_ram_400a3768);
  puVar27 = (uint *)0x400a37ac;
  uVar26 = 0xb3;
  iVar23 = param_1 + 0x1d3c;
  iVar24 = 0;
  while( true ) {
    nc_reverb_spring_allpass_ring_process(uVar40,iVar23,uVar26,param_1 + 0x3424 + iVar24,iVar21,uVar22);
    puVar27 = puVar27 + 1;
    if (iVar24 + 2 == 8) break;
    iVar23 = iVar23 + uVar26 * 4;
    uVar40 = (ulonglong)*puVar27;
    uVar26 = (uint)*(ushort *)((int)&DAT_ram_400a37a6 + iVar24);
    iVar24 = iVar24 + 2;
  }
  iVar23 = uVar22 * 4;
  nc_reverb_spring_copy_samples(param_1 + 0x3524,iVar12,uVar22);
  nc_reverb_spring_biquad_process(param_1 + 0x136c0,iVar21,iVar25,uVar22);
  nc_reverb_spring_biquad_process(param_1 + 0x136dc,iVar25,iVar25,uVar22);
  fVar50 = *(float *)(param_1 + 0x136f8);
  pfVar14 = (float *)(param_1 + 0x161e8);
  do {
    pfVar28 = pfVar14 + 1;
    fVar50 = ((float)*(undefined8 *)pfVar14 - fVar50) * DAT_ram_400a3768._4_4_ + fVar50;
    *pfVar14 = fVar50;
    pfVar14 = pfVar28;
  } while ((float *)(param_1 + 0x161e8) + uVar22 != pfVar28);
  *(float *)(param_1 + 0x136f8) = fVar50;
  nc_reverb_spring_ring_exchange(param_1 + 0x136fc,0x4e,param_1 + 0x13834,iVar25,param_1 + 0x162e8,uVar22);
  nc_reverb_spring_ring_exchange(param_1 + 0x13838,0x22a,param_1 + 0x140e0,param_1 + 0x162e8,param_1 + 0x163e8,
                   uVar22);
  nc_reverb_spring_ring_read(param_1 + 0x140e4,0x6d4,*(undefined2 *)(param_1 + 0x15c34),param_1 + 0x164e8,
                   uVar22);
  fVar50 = *(float *)(param_1 + 0x15de4);
  fVar43 = *(float *)(param_1 + 0x15de8);
  puVar19 = (undefined8 *)(param_1 + 0x162e8);
  do {
    puVar16 = (undefined8 *)((int)puVar19 + 4);
    fVar50 = (*(float *)(puVar19 + 0x40) - fVar50) * (float)DAT_ram_400a3770 + fVar50;
    *(float *)(puVar19 + 0x80) = fVar50;
    *(float *)(puVar19 + 0x60) = fVar43 * fVar50 + (float)*puVar19;
    puVar19 = puVar16;
  } while ((undefined8 *)(param_1 + 0x162e8 + iVar23) != puVar16);
  *(float *)(param_1 + 0x15de4) = fVar50;
  nc_reverb_spring_ring_write(param_1 + 0x140e4,0x6d4,param_1 + 0x15c34,param_1 + 0x165e8,uVar22);
  nc_reverb_spring_ring_exchange(param_1 + 0x15c38,0x6a,param_1 + 0x15de0,param_1 + 0x166e8,param_1 + 0x167e8,
                   uVar22);
  puVar19 = (undefined8 *)(param_1 + 0x167e8);
  do {
    fVar43 = (*(float *)(puVar19 + -0x20) - (float)*puVar19) * DAT_ram_400a3778._4_4_;
    fVar50 = *(float *)(puVar19 + -0x80) * (float)DAT_ram_400a3780;
    *(float *)(puVar19 + -0x100) =
         *(float *)(puVar19 + -0xa0) * (float)DAT_ram_400a3778 +
         (*(float *)(puVar19 + -0x20) + (float)*puVar19) * DAT_ram_400a3770._4_4_;
    puVar16 = (undefined8 *)((int)puVar19 + 4);
    *(float *)(puVar19 + -0xe0) = fVar50 + fVar43;
    fVar50 = DAT_ram_400a374c;
    puVar19 = puVar16;
  } while ((undefined8 *)(param_1 + 0x167e8 + iVar23) != puVar16);
  if (uVar9 == 0) goto LAB_ram_400a34c6;
  if (uVar9 < 4) {
    uVar26 = 0;
LAB_ram_400a31b2:
    iVar12 = (uVar20 + uVar26 * 2) * 4;
    pfVar8 = (float *)(iVar12 + param_1 + 0x3694);
    pfVar28 = (float *)(iVar12 + param_1 + 0x349c);
    pfVar14 = (float *)(param_1 + (uVar26 + 0x17c7) * 4);
    do {
      fVar48 = 0.0;
      uVar40 = (ulonglong)in_register_00000100;
      uVar45 = (ulonglong)in_register_00000100;
      fVar43 = 0.0;
      pfVar17 = pfVar8 + -0x9a;
      pfVar10 = pfVar8 + -0x5e;
      puVar11 = (ulonglong *)0x400a391c;
      while( true ) {
        uVar49 = *(undefined8 *)pfVar17;
        pfVar13 = pfVar10 + 2;
        pfVar2 = pfVar17 + 2;
        fVar31 = *pfVar10;
        pfVar10 = pfVar10 + -4;
        pfVar17 = pfVar17 + 4;
        fVar43 = ((float)uVar49 + *pfVar13) * (float)uVar45 + fVar43;
        fVar48 = ((float)*(undefined8 *)pfVar2 + fVar31) * (float)uVar40 + fVar48;
        if (pfVar28 == pfVar10) break;
        uVar45 = puVar11[2];
        uVar40 = puVar11[3];
        puVar11 = puVar11 + 2;
      }
      fVar38 = 0.0;
      uVar40 = (ulonglong)in_register_00000100;
      uVar45 = (ulonglong)in_register_00000100;
      fVar31 = 0.0;
      pfVar17 = pfVar8 + -0x1c;
      pfVar10 = pfVar8 + 0x20;
      *(ulonglong *)(pfVar14 + 0x4273) = (ulonglong)(uint)(pfVar8[-0x7b] * fVar50 + fVar43 + fVar48)
      ;
      puVar11 = (ulonglong *)0x400a391c;
      while( true ) {
        uVar49 = *(undefined8 *)pfVar17;
        pfVar13 = pfVar10 + 2;
        pfVar2 = pfVar17 + 2;
        fVar43 = *pfVar10;
        pfVar10 = pfVar10 + -4;
        pfVar17 = pfVar17 + 4;
        fVar31 = ((float)uVar49 + *pfVar13) * (float)uVar45 + fVar31;
        fVar38 = ((float)*(undefined8 *)pfVar2 + fVar43) * (float)uVar40 + fVar38;
        if (pfVar8 == pfVar10) break;
        uVar45 = puVar11[2];
        uVar40 = puVar11[3];
        puVar11 = puVar11 + 2;
      }
      pfVar17 = pfVar8 + 3;
      uVar26 = uVar26 + 1;
      pfVar8 = pfVar8 + 2;
      pfVar28 = pfVar28 + 2;
      *pfVar14 = (float)*(undefined8 *)pfVar17 * fVar50 + fVar31 + fVar38;
      pfVar14 = pfVar14 + 1;
    } while (uVar26 < uVar9);
  }
  else {
    iVar12 = (0x1d - uStack_138) * 4;
    pfVar17 = (float *)(iVar12 + 0x3624 + param_1);
    pfVar8 = (float *)(param_1 + iVar12 + 0x342c);
    pfVar14 = (float *)(param_1 + 0x168e8);
    pfVar28 = (float *)(param_1 + 0x5f1c);
    do {
      fVar34 = 0.0;
      pfVar13 = pfVar17 + -0x5e;
      fVar43 = pfVar17[-0x98];
      fVar48 = pfVar17[-0x96];
      fVar31 = pfVar17[-0x5a];
      fVar38 = pfVar17[-0x58];
      fVar32 = 0.0;
      fVar52 = 0.0;
      fVar33 = 0.0;
      fVar53 = 0.0;
      fVar51 = 0.0;
      pfVar10 = pfVar17 + -0x9a;
      puVar11 = (ulonglong *)0x400a391c;
      uVar40 = (ulonglong)(uint)fVar6;
      uVar45 = (ulonglong)(uint)fVar5;
      fVar46 = pfVar17[-0x9a];
      fVar41 = fVar43;
      fVar39 = fVar31;
      fVar37 = fVar38;
      fVar44 = pfVar17[-0x56];
      fVar35 = fVar33;
      fVar36 = fVar33;
      if (-1 < ((int)pfVar13 - (int)pfVar8) * 0x8000000) {
        fVar37 = (float)*(undefined8 *)(pfVar17 + -0x5c);
        fVar41 = (float)*(undefined8 *)(pfVar17 + -0x94);
        fVar51 = (fVar37 + pfVar17[-0x9a]) * fVar6 + 0.0;
        fVar36 = (fVar43 + fVar31) * fVar6 + 0.0;
        fVar35 = (fVar48 + fVar38) * fVar6 + 0.0;
        fVar33 = (fVar41 + pfVar17[-0x56]) * fVar6 + 0.0;
        fVar53 = (pfVar17[-0x5e] + fVar43) * fVar5 + 0.0;
        fVar32 = (fVar37 + fVar48) * fVar5 + 0.0;
        fVar52 = (fVar41 + fVar31) * fVar5 + 0.0;
        fVar34 = (pfVar17[-0x92] + fVar38) * fVar5 + 0.0;
        pfVar10 = pfVar17 + -0x96;
        pfVar13 = pfVar17 + -0x62;
        puVar11 = &DAT_ram_400a392c;
        uVar40 = DAT_ram_400a392c;
        uVar45 = DAT_ram_400a3934;
        fVar46 = fVar48;
        fVar48 = pfVar17[-0x92];
        fVar39 = pfVar17[-0x5e];
        fVar44 = fVar31;
      }
      while( true ) {
        fVar43 = pfVar10[8];
        fVar31 = *pfVar13;
        fVar38 = (float)*(undefined8 *)(pfVar13 + 2);
        fVar42 = (float)*(undefined8 *)(pfVar10 + 6);
        fVar47 = (float)uVar40;
        fVar51 = (fVar38 + fVar46) * fVar47 + fVar51;
        fVar36 = (fVar41 + fVar39) * fVar47 + fVar36;
        fVar35 = (fVar48 + fVar37) * fVar47 + fVar35;
        fVar33 = (fVar42 + fVar44) * fVar47 + fVar33;
        fVar46 = (float)uVar45;
        fVar53 = (fVar31 + fVar41) * fVar46 + fVar53;
        fVar32 = (fVar38 + fVar48) * fVar46 + fVar32;
        fVar52 = (fVar42 + fVar39) * fVar46 + fVar52;
        fVar34 = (fVar43 + fVar37) * fVar46 + fVar34;
        if (pfVar13 + -4 == pfVar8) break;
        fVar37 = pfVar13[-2];
        pfVar2 = pfVar13 + -4;
        pfVar3 = pfVar10 + 0xc;
        fVar41 = (float)*(undefined8 *)(pfVar10 + 10);
        fVar46 = (float)puVar11[2];
        fVar51 = (fVar37 + fVar48) * fVar46 + fVar51;
        fVar36 = (fVar42 + fVar31) * fVar46 + fVar36;
        fVar35 = (fVar43 + fVar38) * fVar46 + fVar35;
        fVar33 = (fVar41 + fVar39) * fVar46 + fVar33;
        fVar48 = (float)puVar11[3];
        fVar53 = (*pfVar2 + fVar42) * fVar48 + fVar53;
        fVar32 = (fVar37 + fVar43) * fVar48 + fVar32;
        fVar52 = (fVar41 + fVar31) * fVar48 + fVar52;
        fVar34 = (*pfVar3 + fVar38) * fVar48 + fVar34;
        uVar40 = puVar11[4];
        uVar45 = puVar11[5];
        pfVar10 = pfVar10 + 8;
        pfVar13 = pfVar13 + -8;
        puVar11 = puVar11 + 4;
        fVar46 = fVar43;
        fVar48 = *pfVar3;
        fVar39 = *pfVar2;
        fVar44 = fVar31;
      }
      pfVar13 = pfVar17 + 0x1c;
      pfVar10 = pfVar17 + -0x18;
      *pfVar14 = pfVar17[-0x7b] * fVar50 + fVar51 + fVar53;
      pfVar14[1] = pfVar17[-0x79] * fVar50 + fVar36 + fVar32;
      pfVar14[2] = pfVar17[-0x77] * fVar50 + fVar35 + fVar52;
      pfVar14[3] = pfVar17[-0x75] * fVar50 + fVar33 + fVar34;
      fVar43 = pfVar17[-0x18];
      fVar48 = pfVar17[0x24];
      fVar31 = pfVar17[-0x16];
      fVar38 = pfVar17[0x22];
      fVar37 = (fVar38 + pfVar17[-0x1c]) * fVar6 + 0.0;
      fVar51 = (pfVar17[-0x1a] + fVar48) * fVar6 + 0.0;
      fVar36 = (fVar43 + pfVar17[0x26]) * fVar6 + 0.0;
      fVar35 = (fVar31 + pfVar17[0x28]) * fVar6 + 0.0;
      fVar33 = (pfVar17[0x20] + pfVar17[-0x1a]) * fVar5 + 0.0;
      fVar53 = (fVar38 + fVar43) * fVar5 + 0.0;
      fVar32 = (fVar31 + fVar48) * fVar5 + 0.0;
      fVar52 = (pfVar17[-0x14] + pfVar17[0x26]) * fVar5 + 0.0;
      uVar30 = (ulonglong)(uint)fVar31;
      puVar11 = &DAT_ram_400a392c;
      uVar40 = DAT_ram_400a392c;
      uVar45 = DAT_ram_400a3934;
      fVar31 = pfVar17[0x20];
      fVar34 = pfVar17[-0x14];
      while( true ) {
        fVar46 = pfVar10[8];
        fVar41 = *pfVar13;
        fVar39 = (float)*(undefined8 *)(pfVar13 + 2);
        fVar44 = (float)*(undefined8 *)(pfVar10 + 6);
        fVar42 = (float)uVar40;
        fVar37 = (fVar39 + fVar43) * fVar42 + fVar37;
        fVar51 = ((float)uVar30 + fVar31) * fVar42 + fVar51;
        fVar36 = (fVar34 + fVar38) * fVar42 + fVar36;
        fVar35 = (fVar44 + fVar48) * fVar42 + fVar35;
        fVar43 = (float)uVar45;
        fVar33 = (fVar41 + (float)uVar30) * fVar43 + fVar33;
        fVar53 = (fVar39 + fVar34) * fVar43 + fVar53;
        fVar32 = (fVar44 + fVar31) * fVar43 + fVar32;
        fVar52 = (fVar46 + fVar38) * fVar43 + fVar52;
        if (pfVar13 + -4 == pfVar17) break;
        fVar38 = pfVar13[-2];
        pfVar2 = pfVar13 + -4;
        pfVar3 = pfVar10 + 0xc;
        fVar43 = (float)*(ulonglong *)(pfVar10 + 10);
        fVar48 = (float)puVar11[2];
        fVar37 = (fVar38 + fVar34) * fVar48 + fVar37;
        fVar51 = (fVar44 + fVar41) * fVar48 + fVar51;
        fVar36 = (fVar46 + fVar39) * fVar48 + fVar36;
        fVar35 = (fVar43 + fVar31) * fVar48 + fVar35;
        fVar48 = (float)puVar11[3];
        fVar33 = (*pfVar2 + fVar44) * fVar48 + fVar33;
        fVar53 = (fVar38 + fVar46) * fVar48 + fVar53;
        fVar32 = (fVar43 + fVar41) * fVar48 + fVar32;
        fVar52 = (*pfVar3 + fVar39) * fVar48 + fVar52;
        uVar40 = puVar11[4];
        uVar45 = puVar11[5];
        uVar30 = *(ulonglong *)(pfVar10 + 10) & 0xffffffff;
        pfVar10 = pfVar10 + 8;
        pfVar13 = pfVar13 + -8;
        puVar11 = puVar11 + 4;
        fVar31 = *pfVar2;
        fVar34 = *pfVar3;
        fVar48 = fVar41;
        fVar43 = fVar46;
      }
      pfVar14 = pfVar14 + 4;
      pfVar8 = pfVar8 + 8;
      *pfVar28 = (float)*(undefined8 *)(pfVar17 + 3) * fVar50 + fVar37 + fVar33;
      pfVar28[1] = (float)*(undefined8 *)(pfVar17 + 5) * fVar50 + fVar51 + fVar53;
      pfVar28[2] = (float)*(undefined8 *)(pfVar17 + 7) * fVar50 + fVar36 + fVar32;
      pfVar10 = pfVar17 + 9;
      pfVar17 = pfVar13 + 4;
      pfVar28[3] = *pfVar10 * fVar50 + fVar35 + fVar52;
      pfVar28 = pfVar28 + 4;
    } while ((float *)((uVar9 - 4 >> 2) * 0x10 + param_1 + 0x168f8) != pfVar14);
    uVar26 = (uVar9 - 4 & 0xfffffffc) + 4;
    if (uVar26 < uVar9) goto LAB_ram_400a31b2;
  }
  pfVar28 = (float *)(param_1 + 0x16968);
  nc_reverb_spring_ring_exchange(param_1 + 0x381c,0x304,param_1 + 0x442c,(float *)(param_1 + 0x168e8),pfVar28,
                   uVar9);
  fVar48 = DAT_ram_400a3788;
  fVar43 = DAT_ram_400a3780._4_4_;
  fVar50 = *(float *)(param_1 + 0x4434);
  iVar24 = param_1 + 0x169e8;
  iVar12 = param_1 + 0x16b68;
  pfVar14 = pfVar28;
  fVar31 = *(float *)(param_1 + 0x4430);
  do {
    fVar38 = *pfVar14;
    pfVar8 = pfVar14 + 1;
    fVar50 = fVar50 * fVar48 + fVar38 * fVar43 + fVar31;
    pfVar14[0x20] = fVar50;
    pfVar14 = pfVar8;
    fVar31 = fVar38;
  } while (pfVar28 + uVar9 != pfVar8);
  *(float *)(param_1 + 0x4430) = fVar38;
  *(float *)(param_1 + 0x4434) = fVar50;
  nc_reverb_spring_ring_read(param_1 + 0x4438,0x318,*(undefined2 *)(param_1 + 0x5098),param_1 + 0x16a68,uVar9)
  ;
  nc_reverb_spring_helper_400a1dac(DAT_ram_400a378c,param_1 + 0x509c,param_1 + 0x59fc,iVar24,uVar9);
  nc_reverb_spring_helper_400a1dac(DAT_ram_400a3790,param_1 + 0x554c,param_1 + 0x5c0c,param_1 + 0x16a68,uVar9);
  nc_reverb_spring_copy_samples(param_1 + 0x5e5c,param_1 + 0x5b8c,uVar9);
  nc_reverb_spring_copy_samples(param_1 + 0x16ae8,param_1 + 0x5d9c,uVar9);
  nc_reverb_spring_helper_400a19cc(param_1,iVar24,iVar12,uVar9);
  nc_reverb_spring_ring_write(param_1 + 0x4438,0x318,param_1 + 0x5098,iVar12,uVar9);
  nc_reverb_spring_helper_400a26b8(param_1,iVar24,param_1 + 0x16be8,uVar9);
  fVar50 = DAT_ram_400a3794;
  puVar19 = (undefined8 *)(param_1 + 0x169e8);
  do {
    puVar16 = (undefined8 *)((int)puVar19 + 4);
    *(float *)(puVar19 + 0x50) = (float)*puVar19 * fVar50 + *(float *)(puVar19 + 0x40);
    puVar19 = puVar16;
  } while ((undefined8 *)(param_1 + 0x169e8 + uVar9 * 4) != puVar16);
  nc_reverb_spring_helper_400a1e4c(param_1,iVar12,param_1 + 0x16ae8,uVar9);
  nc_reverb_spring_ring_exchange(param_1 + 0x13260,0x115,param_1 + 0x136b4,param_1 + 0x16d68,param_1 + 0x16de8,
                   uVar9);
  fVar43 = DAT_ram_400a379c;
  fVar50 = DAT_ram_400a3798;
  pfVar14 = (float *)(param_1 + 0x15e68);
  pfVar28 = (float *)(param_1 + 0x16c68);
  do {
    pfVar8 = pfVar28 + 1;
    *pfVar14 = (float)*(undefined8 *)pfVar28 * fVar50 + pfVar28[0x20];
    pfVar14[0x3f] = *pfVar28 * fVar43 + pfVar28[0x60];
    pfVar14 = pfVar14 + 1;
    pfVar28 = pfVar8;
  } while ((float *)(param_1 + 0x16c68) + uVar9 != pfVar8);
LAB_ram_400a34c6:
  puVar15 = (undefined4 *)(param_1 + 0x342c);
  puVar19 = (undefined8 *)((undefined4 *)(param_1 + 0x342c) + uVar22);
  do {
    puVar16 = (undefined8 *)((int)puVar19 + 4);
    *puVar15 = (int)*puVar19;
    puVar15[0x7e] = *(undefined4 *)(puVar19 + 0x3f);
    fVar50 = DAT_ram_400a37a0;
    puVar15 = puVar15 + 1;
    puVar19 = puVar16;
  } while ((undefined8 *)(iVar23 + param_1 + 0x3524) != puVar16);
  cVar1 = *(char *)(param_1 + 0x15fe5);
  uVar29 = (uint)(uVar20 == 1);
  uVar26 = (uVar22 - 2) - uVar29 >> 1;
  bVar4 = false;
  pfVar14 = (float *)(param_1 + 0x15fe8);
  iVar12 = 0x15dec;
  iVar23 = param_3;
  do {
    pfVar28 = (float *)(iVar23 + uStack_12c * 4);
    nc_reverb_spring_fir_interpolate(iVar12 + param_1,param_1 + 0x16e68,param_1 + 0x16eec,uVar9);
    if (uVar20 == 1) {
      fVar43 = *pfVar14;
      if (cVar1 != '\0') {
        fVar43 = *(float *)(param_1 + 0x16eec) * fVar7 + fVar43;
      }
      *pfVar28 = fVar43;
      if (2 < uVar22) goto LAB_ram_400a3570;
LAB_ram_400a36aa:
      iVar12 = 0;
      uVar18 = uVar29;
    }
    else {
      if (uVar22 <= uVar29 + 1) goto LAB_ram_400a36aa;
LAB_ram_400a3570:
      pfVar8 = pfVar14 + uVar29;
      pfVar17 = pfVar28 + uVar29;
      puVar19 = (undefined8 *)(param_1 + 0x16e68);
      do {
        puVar16 = (undefined8 *)((int)puVar19 + 4);
        *pfVar17 = (float)*puVar19 * fVar7 + (float)*(undefined8 *)pfVar8;
        pfVar17[1] = *(float *)(puVar19 + 0x11) * fVar7 + pfVar8[1];
        pfVar8 = pfVar8 + 2;
        iVar12 = uVar26 + 1;
        pfVar17 = pfVar17 + 2;
        uVar18 = uVar29 + 2 + uVar26 * 2;
        puVar19 = puVar16;
      } while ((undefined8 *)(param_1 + 0x16e6c + uVar26 * 4) != puVar16);
    }
    if (uVar18 < uVar22) {
      *(ulonglong *)(pfVar28 + uVar18) =
           (ulonglong)
           (uint)((float)*(undefined8 *)(param_1 + 0x16e68 + iVar12 * 4) * fVar50 + pfVar14[uVar18])
      ;
    }
    if (bVar4) break;
    bVar4 = true;
    pfVar14 = (float *)(param_1 + 0x160e8);
    iVar12 = 0x15ee8;
    iVar23 = param_4;
  } while( true );
  iVar12 = (uVar9 + 0x577b) * 4;
  puVar15 = (undefined4 *)(param_1 + 0x15dec);
  puVar19 = (undefined8 *)(iVar12 + param_1);
  do {
    puVar16 = (undefined8 *)((int)puVar19 + 4);
    *puVar15 = (int)*puVar19;
    puVar15[0x3f] = *(undefined4 *)((int)puVar19 + 0xfc);
    puVar15 = puVar15 + 1;
    puVar19 = puVar16;
  } while ((undefined8 *)(param_1 + iVar12 + 0x7c) != puVar16);
  if (uVar9 != 0) {
    *(undefined1 *)(param_1 + 0x15fe5) = 1;
  }
  uStack_138 = uVar22 + *(byte *)(param_1 + 0x15fe4) & 1;
  *(char *)(param_1 + 0x15fe4) = (char)uStack_138;
  uStack_12c = uStack_12c + uVar22;
  if (param_5 <= uStack_12c) {
    return;
  }
  goto LAB_ram_400a2b50;
}

