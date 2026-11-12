/* NanoCore 1.12 analysis module: unresolved/bank_3/block_30043000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x30043fd0.
 * REA evidence: ev_71ead9d7120cee236457f7ce5197963541427a6f5a5a0db27b28b7d7833ccd98
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void thunk_FUN_ram_30042d7e(undefined8 *param_1,undefined8 *param_2,int param_3,uint param_4)

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
  float in_register_00000100;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined2 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float *pfVar19;
  uint uVar20;
  int iVar21;
  undefined8 *puVar22;
  byte bVar23;
  bool bVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  float *pfVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  float fVar38;
  undefined8 *puVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  ulonglong uVar50;
  float fVar51;
  undefined8 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  uint uStack_1e8;
  float fStack_1d4;
  uint uStack_1d0;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  
  if ((((param_1 == (undefined8 *)0x0) || (param_2 == (undefined8 *)0x0)) || (param_3 == 0)) ||
     (param_4 == 0)) {
    return;
  }
  if (*(char *)((int)param_1 + 0x14) == '\0') {
    bVar23 = *(byte *)((int)param_1 + 0x16);
  }
  else {
    fVar44 = (float)*param_1;
    if ((float)*param_1 <= DAT_ram_40099f28) {
      fVar44 = DAT_ram_4009678c;
    }
    FUN_ram_4005c670(param_1);
    fVar58 = DAT_ram_4009672c;
    fVar4 = DAT_ram_40096728;
    fVar59 = *(float *)((int)param_1 + 4);
    if (*(float *)((int)param_1 + 4) < DAT_ram_40099f88) {
      fVar59 = DAT_ram_40099f88;
    }
    fVar45 = *(float *)(param_1 + 1);
    fVar49 = DAT_ram_4009f0a0;
    if ((0.0 <= fVar45) && (fVar49 = DAT_ram_4009f0a4, fVar45 <= DAT_ram_4009672c)) {
      fVar49 = fVar45 * DAT_ram_4009f0a8 + DAT_ram_4009f0a0;
    }
    fVar54 = (float)*(undefined8 *)((int)param_1 + 0xc);
    fVar45 = 0.0;
    if ((0.0 <= fVar54) && (fVar45 = DAT_ram_4009f08c, fVar54 <= DAT_ram_4009672c)) {
      fVar45 = fVar54 * DAT_ram_40099f44 * DAT_ram_4009f0ac;
    }
    fVar54 = DAT_ram_40096728 / (fVar44 * DAT_ram_40099f88);
    *(float *)(param_1 + 0xe8c2) = fVar44 * fVar45;
    fVar45 = (float)FUN_ram_40000bd8(fVar54);
    *(float *)(param_1 + 0xe8c3) = fVar58 - fVar45;
    if (*(char *)((int)param_1 + 0x17) == '\0') {
      fVar45 = *(float *)((int)param_1 + 0x74614);
    }
    else {
      fVar45 = *(float *)(param_1 + 0xe8c2);
      *(float *)((int)param_1 + 0x74614) = fVar45;
      *(undefined1 *)((int)param_1 + 0x17) = 0;
    }
    fVar9 = DAT_ram_4009f090;
    fVar54 = DAT_ram_40096764;
    fVar38 = (float)param_1[2];
    if ((float)param_1[2] < DAT_ram_4009a370) {
      fVar38 = DAT_ram_4009a370;
    }
    fVar55 = (fVar38 * *(float *)((int)param_1 + 0x7461c) * DAT_ram_4009f090 * DAT_ram_40096764) /
             fVar44;
    uVar46 = FUN_ram_400009d2(fVar55);
    *(undefined4 *)((int)param_1 + 0x7467c) = uVar46;
    uVar46 = FUN_ram_40000712(fVar55);
    *(undefined4 *)((int)param_1 + 0x7469c) = uVar46;
    *(float *)((int)param_1 + 0x746bc) = *(float *)((int)param_1 + 0x7463c) * fVar45;
    fVar55 = (fVar38 * *(float *)(param_1 + 0xe8c4) * fVar9 * fVar54) / fVar44;
    uVar46 = FUN_ram_400009d2(fVar55);
    *(undefined4 *)(param_1 + 0xe8d0) = uVar46;
    uVar46 = FUN_ram_40000712(fVar55);
    *(undefined4 *)(param_1 + 0xe8d4) = uVar46;
    *(float *)(param_1 + 0xe8d8) = *(float *)(param_1 + 0xe8c8) * fVar45;
    fVar55 = (fVar38 * *(float *)((int)param_1 + 0x74624) * fVar9 * fVar54) / fVar44;
    uVar46 = FUN_ram_400009d2(fVar55);
    *(undefined4 *)((int)param_1 + 0x74684) = uVar46;
    uVar46 = FUN_ram_40000712(fVar55);
    *(undefined4 *)((int)param_1 + 0x746a4) = uVar46;
    *(float *)((int)param_1 + 0x746c4) = *(float *)((int)param_1 + 0x74644) * fVar45;
    fVar55 = (fVar38 * *(float *)(param_1 + 0xe8c5) * fVar9 * fVar54) / fVar44;
    uVar46 = FUN_ram_400009d2(fVar55);
    *(undefined4 *)(param_1 + 0xe8d1) = uVar46;
    uVar46 = FUN_ram_40000712(fVar55);
    *(undefined4 *)(param_1 + 0xe8d5) = uVar46;
    *(float *)(param_1 + 0xe8d9) = *(float *)(param_1 + 0xe8c9) * fVar45;
    fVar55 = (fVar38 * *(float *)((int)param_1 + 0x7462c) * fVar9 * fVar54) / fVar44;
    uVar46 = FUN_ram_400009d2(fVar55);
    *(undefined4 *)((int)param_1 + 0x7468c) = uVar46;
    uVar46 = FUN_ram_40000712(fVar55);
    *(undefined4 *)((int)param_1 + 0x746ac) = uVar46;
    *(float *)((int)param_1 + 0x746cc) = *(float *)((int)param_1 + 0x7464c) * fVar45;
    fVar55 = (fVar38 * *(float *)(param_1 + 0xe8c6) * fVar9 * fVar54) / fVar44;
    uVar46 = FUN_ram_400009d2(fVar55);
    *(undefined4 *)(param_1 + 0xe8d2) = uVar46;
    uVar46 = FUN_ram_40000712(fVar55);
    *(undefined4 *)(param_1 + 0xe8d6) = uVar46;
    *(float *)(param_1 + 0xe8da) = *(float *)(param_1 + 0xe8ca) * fVar45;
    fVar55 = (fVar38 * *(float *)((int)param_1 + 0x74634) * fVar9 * fVar54) / fVar44;
    uVar46 = FUN_ram_400009d2(fVar55);
    *(undefined4 *)((int)param_1 + 0x74694) = uVar46;
    uVar46 = FUN_ram_40000712(fVar55);
    *(undefined4 *)((int)param_1 + 0x746b4) = uVar46;
    *(float *)((int)param_1 + 0x746d4) = *(float *)((int)param_1 + 0x74654) * fVar45;
    fVar54 = (fVar38 * *(float *)(param_1 + 0xe8c7) * fVar9 * fVar54) / fVar44;
    uVar46 = FUN_ram_400009d2(fVar54);
    *(undefined4 *)(param_1 + 0xe8d3) = uVar46;
    uVar46 = FUN_ram_40000712(fVar54);
    *(undefined4 *)(param_1 + 0xe8d7) = uVar46;
    *(undefined1 *)((int)param_1 + 0x746dc) = 0;
    *(float *)(param_1 + 0xe8db) = *(float *)(param_1 + 0xe8cb) * fVar45;
    fVar55 = DAT_ram_4009f0b8;
    fVar38 = DAT_ram_4009f0b4;
    fVar9 = DAT_ram_4009f0b0;
    fVar54 = DAT_ram_4009a4f4;
    uVar46 = DAT_ram_40099f38;
    fVar45 = DAT_ram_4009675c;
    if (fVar49 < fVar58) {
      puVar22 = param_1 + 0xe8ba;
      pfVar31 = (float *)(param_1 + 0xe8e8);
      pfVar19 = (float *)(param_1 + 0xe8f0);
      do {
        while( true ) {
          uVar50 = FUN_ram_40000d44(uVar46,(((float)*puVar22 / fVar44) * fVar9) / fVar59);
          fVar49 = fVar44 * fVar45 + fVar4;
          puVar22[4] = uVar50 & 0xffffffff;
          fVar48 = (float)FUN_ram_40000bd8(fVar38 / fVar44);
          *pfVar31 = fVar58 - fVar48;
          if (fVar49 < fVar54) break;
          puVar22 = (undefined8 *)((int)puVar22 + 4);
          pfVar31 = pfVar31 + 2;
          fVar49 = (float)FUN_ram_40000bd8(fVar55 / fVar44);
          *pfVar19 = fVar58 - fVar49;
          pfVar19 = pfVar19 + 3;
          if (param_1 + 0xe8be == puVar22) goto LAB_ram_30043e6e;
        }
        puVar22 = (undefined8 *)((int)puVar22 + 4);
        pfVar31 = pfVar31 + 2;
        fVar49 = (float)FUN_ram_40000bd8((fVar49 * fVar38) / fVar44);
        *pfVar19 = fVar58 - fVar49;
        pfVar19 = pfVar19 + 3;
      } while (puVar22 != param_1 + 0xe8be);
    }
    else {
      puVar22 = param_1 + 0xe8ba;
      pfVar31 = (float *)(param_1 + 0xe8e8);
      pfVar19 = (float *)(param_1 + 0xe8f0);
      do {
        while( true ) {
          uVar52 = FUN_ram_40000d44(uVar46,(((float)*puVar22 / fVar44) * fVar9) / fVar59);
          fVar48 = fVar44 * fVar45 + fVar4;
          puVar22[4] = uVar52;
          fVar47 = fVar48;
          if (fVar49 <= fVar48) {
            fVar47 = fVar49;
          }
          fVar47 = (float)FUN_ram_40000bd8((fVar47 * fVar38) / fVar44);
          *pfVar31 = fVar58 - fVar47;
          if (fVar48 < fVar54) break;
          puVar22 = (undefined8 *)((int)puVar22 + 4);
          pfVar31 = pfVar31 + 2;
          fVar48 = (float)FUN_ram_40000bd8(fVar55 / fVar44);
          *pfVar19 = fVar58 - fVar48;
          pfVar19 = pfVar19 + 3;
          if (param_1 + 0xe8be == puVar22) goto LAB_ram_30043e6e;
        }
        puVar22 = (undefined8 *)((int)puVar22 + 4);
        pfVar31 = pfVar31 + 2;
        fVar48 = (float)FUN_ram_40000bd8((fVar48 * fVar38) / fVar44);
        *pfVar19 = fVar58 - fVar48;
        pfVar19 = pfVar19 + 3;
      } while (param_1 + 0xe8be != puVar22);
    }
LAB_ram_30043e6e:
    *(float *)(param_1 + 0xe8fc) = DAT_ram_4009672c;
    *(undefined1 *)((int)param_1 + 0x14) = 0;
    *(undefined1 *)((int)param_1 + 0x16) = 0;
    bVar23 = 0;
  }
  fVar44 = *(float *)(param_1 + 0xe8c2);
  fVar4 = *(float *)(param_1 + 0xe8c3);
  iVar34 = *(int *)(param_1 + 0x3200);
  uVar14 = (uint)*(ushort *)(param_1 + 0x31f7);
  uVar15 = (uint)*(ushort *)((int)param_1 + 0x18fb4);
  iVar36 = *(int *)(param_1 + 0x31f6);
  iVar37 = *(int *)(param_1 + 0x31f8);
  iVar30 = *(int *)(param_1 + 0x31fa);
  iVar32 = *(int *)(param_1 + 0x31fc);
  iVar33 = *(int *)(param_1 + 0x31fe);
  iVar35 = *(int *)(param_1 + 0x3202);
  iVar29 = *(int *)(param_1 + 0x3204);
  fVar38 = *(float *)((int)param_1 + 0x74614);
  FUN_ram_4000303c(&fStack_180,param_1 + 0xe8ba,0x20);
  FUN_ram_4000303c(&fStack_160,param_1 + 0xe8be,0x20);
  FUN_ram_4000303c(&fStack_140,param_1 + 0xe8dc,0x20);
  FUN_ram_4000303c(&fStack_120,param_1 + 0xe8e0,0x20);
  FUN_ram_4000303c(&fStack_100,(int)param_1 + 0x746bc,0x20);
  fVar9 = DAT_ram_4009f094;
  fVar54 = DAT_ram_4009f068;
  fStack_c4 = *(float *)((int)param_1 + 0x7477c);
  uStack_1e8 = (uint)*(byte *)((int)param_1 + 0x746dc);
  fVar58 = *(float *)((int)param_1 + 0x74744);
  fVar59 = *(float *)((int)param_1 + 0x74784);
  fStack_dc = *(float *)((int)param_1 + 0x7474c);
  fStack_bc = *(float *)(param_1 + 0xe8f2);
  fStack_d8 = *(float *)((int)param_1 + 0x74754);
  fStack_b8 = *(float *)((int)param_1 + 0x7479c);
  fStack_d4 = *(float *)((int)param_1 + 0x7475c);
  fStack_b4 = *(float *)(param_1 + 0xe8f5);
  fStack_d0 = *(float *)((int)param_1 + 0x74764);
  fStack_b0 = *(float *)((int)param_1 + 0x747b4);
  fStack_cc = *(float *)((int)param_1 + 0x7476c);
  fStack_ac = *(float *)(param_1 + 0xe8f8);
  fStack_c8 = *(float *)((int)param_1 + 0x74774);
  fStack_a8 = *(float *)((int)param_1 + 0x747cc);
  fVar45 = *(float *)(param_1 + 0xe8e8);
  fVar49 = *(float *)(param_1 + 0xe8f0);
  fStack_a4 = *(float *)(param_1 + 0xe8fb);
  fStack_184 = 0.0;
  fStack_e0 = fVar58;
  fStack_c0 = fVar59;
  if (7 < bVar23) {
    fVar55 = 0.0;
    bVar24 = false;
    puVar22 = param_2;
    do {
      uVar52 = *puVar22;
      puVar22 = (undefined8 *)((int)puVar22 + 4);
      if (fVar55 < ABS((float)uVar52)) {
        bVar24 = true;
        fVar55 = ABS((float)uVar52);
      }
    } while ((undefined8 *)(param_4 * 4 + (int)param_2) != puVar22);
    if ((!bVar24) || (fStack_184 = fVar55, fVar55 < DAT_ram_4009f094)) {
      memset(param_3,0);
      uVar14 = 0;
      do {
        uVar14 = uVar14 + 1;
        fVar58 = fVar4 * (fVar44 - fVar38) + fVar38;
        fVar38 = in_register_00000100;
      } while (param_4 != uVar14);
      *(float *)((int)param_1 + 0x74614) = fVar58;
      if (*(char *)((int)param_1 + 0x16) == -1) {
        return;
      }
      *(char *)((int)param_1 + 0x16) = *(char *)((int)param_1 + 0x16) + '\x01';
      return;
    }
  }
  fStack_1d4 = 0.0;
  uStack_1d0 = 0;
  do {
    uVar20 = param_4 - uStack_1d0;
    if (0x80 < uVar20) {
      uVar20 = 0x80;
    }
    iVar28 = uStack_1d0 * 4;
    FUN_ram_30041298(param_1,(int)param_2 + iVar28,uVar20,&fStack_184);
    puVar22 = param_1 + 0x2299;
    do {
      puVar39 = (undefined8 *)((int)puVar22 + 0xc);
      FUN_ram_300419ae(puVar22,param_1 + 0x219,uVar20);
      puVar22 = puVar39;
    } while (puVar39 != param_1 + 0x22a5);
    if (param_4 == uStack_1d0) {
      iVar28 = param_3 + iVar28;
      FUN_ram_300419ae(param_1 + 0x2fad,iVar28,uVar20);
      FUN_ram_300419ae((int)param_1 + 0x17d74,iVar28,uVar20);
      FUN_ram_300419ae(param_1 + 0x2fb0,iVar28,uVar20);
    }
    else {
      uVar18 = 0;
      do {
        if (uStack_1e8 == 0) {
          fVar55 = *(float *)(param_1 + 0xe8c8);
          fVar48 = *(float *)((int)param_1 + 0x74644);
          fVar47 = *(float *)((int)param_1 + 0x7463c);
          fStack_f4 = *(float *)(param_1 + 0xe8c9);
          fStack_e4 = fVar4 * (fVar44 - fVar38) + fVar38;
          fStack_100 = fStack_e4 * fVar47;
          fStack_fc = fStack_e4 * fVar55;
          fStack_f8 = fStack_e4 * fVar48;
          fVar56 = *(float *)((int)param_1 + 0x7464c);
          *(float *)((int)param_1 + 0x7463c) =
               fVar47 * *(float *)((int)param_1 + 0x7469c) +
               *(float *)((int)param_1 + 0x7465c) * *(float *)((int)param_1 + 0x7467c);
          *(float *)((int)param_1 + 0x7465c) =
               *(float *)((int)param_1 + 0x7465c) * *(float *)((int)param_1 + 0x7469c) -
               fVar47 * *(float *)((int)param_1 + 0x7467c);
          *(float *)(param_1 + 0xe8c8) =
               fVar55 * *(float *)(param_1 + 0xe8d4) +
               *(float *)(param_1 + 0xe8cc) * *(float *)(param_1 + 0xe8d0);
          *(float *)(param_1 + 0xe8cc) =
               *(float *)(param_1 + 0xe8cc) * *(float *)(param_1 + 0xe8d4) -
               fVar55 * *(float *)(param_1 + 0xe8d0);
          *(float *)((int)param_1 + 0x74644) =
               fVar48 * *(float *)((int)param_1 + 0x746a4) +
               *(float *)((int)param_1 + 0x74664) * *(float *)((int)param_1 + 0x74684);
          *(float *)((int)param_1 + 0x74664) =
               *(float *)((int)param_1 + 0x74664) * *(float *)((int)param_1 + 0x746a4) -
               fVar48 * *(float *)((int)param_1 + 0x74684);
          *(float *)(param_1 + 0xe8c9) =
               fStack_f4 * *(float *)(param_1 + 0xe8d5) +
               *(float *)(param_1 + 0xe8cd) * *(float *)(param_1 + 0xe8d1);
          *(float *)(param_1 + 0xe8cd) =
               *(float *)(param_1 + 0xe8cd) * *(float *)(param_1 + 0xe8d5) -
               fStack_f4 * *(float *)(param_1 + 0xe8d1);
          fVar55 = *(float *)(param_1 + 0xe8ca);
          fVar48 = *(float *)((int)param_1 + 0x74654);
          fVar47 = *(float *)(param_1 + 0xe8cb);
          *(float *)((int)param_1 + 0x7464c) =
               fVar56 * *(float *)((int)param_1 + 0x746ac) +
               *(float *)((int)param_1 + 0x7466c) * *(float *)((int)param_1 + 0x7468c);
          fStack_f4 = fStack_e4 * fStack_f4;
          fStack_f0 = fStack_e4 * fVar56;
          fStack_ec = fStack_e4 * fVar55;
          fStack_e8 = fStack_e4 * fVar48;
          fStack_e4 = fStack_e4 * fVar47;
          *(float *)((int)param_1 + 0x7466c) =
               *(float *)((int)param_1 + 0x7466c) * *(float *)((int)param_1 + 0x746ac) -
               fVar56 * *(float *)((int)param_1 + 0x7468c);
          *(float *)(param_1 + 0xe8ca) =
               fVar55 * *(float *)(param_1 + 0xe8d6) +
               *(float *)(param_1 + 0xe8ce) * *(float *)(param_1 + 0xe8d2);
          *(float *)(param_1 + 0xe8ce) =
               *(float *)(param_1 + 0xe8ce) * *(float *)(param_1 + 0xe8d6) -
               fVar55 * *(float *)(param_1 + 0xe8d2);
          *(float *)((int)param_1 + 0x74654) =
               fVar48 * *(float *)((int)param_1 + 0x746b4) +
               *(float *)((int)param_1 + 0x74674) * *(float *)((int)param_1 + 0x74694);
          *(float *)((int)param_1 + 0x74674) =
               *(float *)((int)param_1 + 0x74674) * *(float *)((int)param_1 + 0x746b4) -
               fVar48 * *(float *)((int)param_1 + 0x74694);
          *(float *)(param_1 + 0xe8cb) =
               fVar47 * *(float *)(param_1 + 0xe8d7) +
               *(float *)(param_1 + 0xe8cf) * *(float *)(param_1 + 0xe8d3);
          *(float *)(param_1 + 0xe8cf) =
               *(float *)(param_1 + 0xe8cf) * *(float *)(param_1 + 0xe8d7) -
               fVar47 * *(float *)(param_1 + 0xe8d3);
          uStack_1e8 = 8;
        }
        iVar11 = (int)(fStack_180 + fStack_100);
        uVar16 = uVar20 - uVar18;
        if (uStack_1e8 < uVar20 - uVar18) {
          uVar16 = uStack_1e8;
        }
        iVar40 = (int)(fStack_17c + fStack_fc);
        iVar41 = (int)(fStack_178 + fStack_f8);
        iVar42 = (int)(fStack_174 + fStack_f4);
        iVar43 = (int)(fStack_170 + fStack_f0);
        iVar10 = (int)(fStack_16c + fStack_ec);
        iVar21 = (int)(fStack_168 + fStack_e8);
        iVar12 = (int)(fStack_164 + fStack_e4);
        uVar25 = uVar16 + uVar18;
        if (uVar18 < uVar25) {
          puVar22 = (undefined8 *)(uVar18 * 4 + 0x10c8 + (int)param_1);
          pfVar19 = (float *)(param_3 + (uVar18 + uStack_1d0) * 4);
          do {
            uVar18 = uVar14 - iVar11;
            uVar52 = *puVar22;
            if ((int)uVar18 < 0) {
              uVar18 = uVar18 + uVar15;
            }
            uVar17 = uVar18 - 1;
            if ((int)uVar17 < 0) {
              uVar17 = uVar17 + uVar15;
            }
            uVar26 = uVar14 - iVar40;
            fVar38 = (float)*(undefined8 *)(iVar36 + (uVar18 & 0xffff) * 4);
            fVar38 = ((fStack_180 + fStack_100) - (float)iVar11) *
                     (*(float *)(iVar36 + (uVar17 & 0xffff) * 4) - fVar38) + fVar38;
            if ((int)uVar26 < 0) {
              uVar26 = uVar26 + uVar15;
            }
            uVar18 = uVar26 - 1;
            if ((int)uVar18 < 0) {
              uVar18 = uVar18 + uVar15;
            }
            uVar17 = uVar14 - iVar41;
            fVar55 = (float)*(undefined8 *)(iVar37 + (uVar26 & 0xffff) * 4);
            fVar55 = ((fStack_17c + fStack_fc) - (float)iVar40) *
                     (*(float *)(iVar37 + (uVar18 & 0xffff) * 4) - fVar55) + fVar55;
            if ((int)uVar17 < 0) {
              uVar17 = uVar17 + uVar15;
            }
            uVar18 = uVar17 - 1;
            if ((int)uVar18 < 0) {
              uVar18 = uVar18 + uVar15;
            }
            uVar26 = uVar14 - iVar42;
            fVar48 = (float)*(undefined8 *)(iVar30 + (uVar17 & 0xffff) * 4);
            fVar48 = ((fStack_178 + fStack_f8) - (float)iVar41) *
                     (*(float *)(iVar30 + (uVar18 & 0xffff) * 4) - fVar48) + fVar48;
            if ((int)uVar26 < 0) {
              uVar26 = uVar26 + uVar15;
            }
            uVar18 = uVar26 - 1;
            if ((int)uVar18 < 0) {
              uVar18 = uVar18 + uVar15;
            }
            uVar17 = uVar14 - iVar43;
            fVar47 = (float)*(undefined8 *)(iVar32 + (uVar26 & 0xffff) * 4);
            fVar47 = ((fStack_174 + fStack_f4) - (float)iVar42) *
                     (*(float *)(iVar32 + (uVar18 & 0xffff) * 4) - fVar47) + fVar47;
            if ((int)uVar17 < 0) {
              uVar17 = uVar17 + uVar15;
            }
            uVar18 = uVar17 - 1;
            if ((int)uVar18 < 0) {
              uVar18 = uVar18 + uVar15;
            }
            uVar26 = uVar14 - iVar10;
            fVar56 = (float)*(undefined8 *)(iVar33 + (uVar17 & 0xffff) * 4);
            fVar56 = ((fStack_170 + fStack_f0) - (float)iVar43) *
                     ((float)*(undefined8 *)(iVar33 + (uVar18 & 0xffff) * 4) - fVar56) + fVar56;
            if ((int)uVar26 < 0) {
              uVar26 = uVar26 + uVar15;
            }
            uVar18 = uVar26 - 1;
            if ((int)uVar18 < 0) {
              uVar18 = uVar18 + uVar15;
            }
            uVar17 = uVar14 - iVar21;
            fVar57 = (float)*(undefined8 *)(iVar34 + (uVar26 & 0xffff) * 4);
            fVar57 = ((fStack_16c + fStack_ec) - (float)iVar10) *
                     ((float)*(undefined8 *)(iVar34 + (uVar18 & 0xffff) * 4) - fVar57) + fVar57;
            if ((int)uVar17 < 0) {
              uVar17 = uVar17 + uVar15;
            }
            uVar18 = uVar17 - 1;
            if ((int)uVar18 < 0) {
              uVar18 = uVar18 + uVar15;
            }
            uVar26 = uVar14 - iVar12;
            fVar53 = (float)*(undefined8 *)(iVar35 + (uVar17 & 0xffff) * 4);
            fVar53 = ((fStack_168 + fStack_e8) - (float)iVar21) *
                     ((float)*(undefined8 *)(iVar35 + (uVar18 & 0xffff) * 4) - fVar53) + fVar53;
            if ((int)uVar26 < 0) {
              uVar26 = uVar26 + uVar15;
            }
            uVar18 = uVar26 - 1;
            if ((int)uVar18 < 0) {
              uVar18 = uVar18 + uVar15;
            }
            fVar5 = *(float *)(iVar29 + (uVar26 & 0xffff) * 4);
            fStack_d8 = fVar45 * (fVar48 - fStack_d8) + fStack_d8;
            fVar5 = ((fStack_164 + fStack_e4) - (float)iVar12) *
                    ((float)*(undefined8 *)(iVar29 + (uVar18 & 0xffff) * 4) - fVar5) + fVar5;
            fStack_d4 = fVar45 * (fVar47 - fStack_d4) + fStack_d4;
            fVar58 = fVar45 * (fVar38 - fVar58) + fVar58;
            fStack_dc = fVar45 * (fVar55 - fStack_dc) + fStack_dc;
            fStack_d0 = fVar45 * (fVar56 - fStack_d0) + fStack_d0;
            fStack_cc = fVar45 * (fVar57 - fStack_cc) + fStack_cc;
            fStack_c8 = fVar45 * (fVar53 - fStack_c8) + fStack_c8;
            fStack_c4 = fVar45 * (fVar5 - fStack_c4) + fStack_c4;
            fStack_b4 = fVar49 * (fStack_d4 - fStack_b4) + fStack_b4;
            fVar59 = fVar49 * (fVar58 - fVar59) + fVar59;
            fStack_bc = fVar49 * (fStack_dc - fStack_bc) + fStack_bc;
            fStack_b0 = fVar49 * (fStack_d0 - fStack_b0) + fStack_b0;
            fStack_ac = fVar49 * (fStack_cc - fStack_ac) + fStack_ac;
            fStack_a8 = fVar49 * (fStack_c8 - fStack_a8) + fStack_a8;
            fStack_a4 = fVar49 * (fStack_c4 - fStack_a4) + fStack_a4;
            fStack_b8 = fVar49 * (fStack_d8 - fStack_b8) + fStack_b8;
            fVar1 = (fStack_dc - fStack_bc) + (fVar58 - fVar59);
            fVar6 = (fVar58 - fVar59) - (fStack_dc - fStack_bc);
            fVar2 = in_register_00000100 + (fStack_d8 - fStack_b8);
            fVar51 = (fStack_d8 - fStack_b8) - in_register_00000100;
            fVar7 = ((fStack_cc - fStack_ac) + (fStack_d0 - fStack_b0)) -
                    ((fStack_c4 - fStack_a4) + (fStack_c8 - fStack_a8));
            puVar22 = (undefined8 *)((int)puVar22 + 4);
            fVar3 = fVar2 + fVar1;
            fVar1 = fVar1 - fVar2;
            fVar2 = fVar51 + fVar6;
            fVar8 = ((fStack_d0 - fStack_b0) - (fStack_cc - fStack_ac)) -
                    ((fStack_c8 - fStack_a8) - (fStack_c4 - fStack_a4));
            fVar6 = fVar6 - fVar51;
            fVar51 = (float)uVar52;
            *pfVar19 = fStack_104 * fVar5 +
                       fStack_108 * fVar53 +
                       fStack_10c * fVar57 +
                       fStack_110 * fVar56 +
                       fStack_114 * fVar47 +
                       fStack_118 * fVar48 + fStack_11c * fVar55 + fStack_120 * fVar38 +
                       in_register_00000100;
            iVar27 = uVar14 * 4;
            *(float *)(iVar36 + iVar27) =
                 fStack_160 * ((in_register_00000100 + fVar3) * fVar54 + fStack_140 * fVar51);
            *(float *)(iVar37 + iVar27) =
                 fStack_15c * ((in_register_00000100 + fVar2) * fVar54 + fStack_13c * fVar51);
            *(float *)(iVar30 + iVar27) =
                 fStack_158 * ((fVar7 + fVar1) * fVar54 + in_register_00000100);
            *(ulonglong *)(iVar32 + iVar27) =
                 (ulonglong)(uint)(fStack_154 * ((fVar8 + fVar6) * fVar54 + in_register_00000100));
            *(float *)(iVar33 + iVar27) =
                 fStack_150 * ((fVar3 - in_register_00000100) * fVar54 + in_register_00000100);
            *(ulonglong *)(iVar34 + iVar27) =
                 (ulonglong)
                 (uint)(fStack_14c *
                       ((fVar2 - in_register_00000100) * fVar54 + in_register_00000100));
            *(float *)(iVar35 + iVar27) =
                 fStack_148 * ((fVar1 - fVar7) * fVar54 + fStack_128 * fVar51);
            uVar14 = uVar14 + 1 & 0xffff;
            *(ulonglong *)(iVar27 + iVar29) =
                 (ulonglong)(uint)(fStack_144 * ((fVar6 - fVar8) * fVar54 + fStack_124 * fVar51));
            uVar14 = uVar14 & -(uint)(uVar14 < uVar15);
            uVar18 = uVar25;
            pfVar19 = pfVar19 + 1;
            fVar38 = in_register_00000100;
            fStack_e0 = fVar58;
            fStack_c0 = fVar59;
          } while (puVar22 != (undefined8 *)((int)(param_1 + 0x219) + uVar25 * 4));
        }
        uStack_1e8 = uStack_1e8 - uVar16 & 0xff;
      } while (uVar18 < uVar20);
      puVar22 = (undefined8 *)(param_3 + iVar28);
      FUN_ram_300419ae(param_1 + 0x2fad,puVar22,uVar20);
      FUN_ram_300419ae((int)param_1 + 0x17d74,puVar22,uVar20);
      FUN_ram_300419ae(param_1 + 0x2fb0,puVar22,uVar20);
      uVar18 = 0;
      do {
        uVar52 = *puVar22;
        uVar18 = uVar18 + 1;
        puVar22 = (undefined8 *)((int)puVar22 + 4);
        if (fStack_1d4 < ABS((float)uVar52)) {
          fStack_1d4 = ABS((float)uVar52);
        }
      } while (uVar18 < uVar20);
    }
    uStack_1d0 = uStack_1d0 + uVar20;
  } while (uStack_1d0 < param_4);
  *(char *)((int)param_1 + 0x746dc) = (char)uStack_1e8;
  *(float *)((int)param_1 + 0x74614) = fVar38;
  FUN_ram_4000303c((int)param_1 + 0x746bc,&fStack_100,0x20);
  uVar13 = (undefined2)uVar14;
  *(undefined2 *)(param_1 + 0x31f7) = uVar13;
  *(undefined2 *)(param_1 + 0x31f9) = uVar13;
  *(undefined2 *)(param_1 + 0x31fb) = uVar13;
  *(undefined2 *)(param_1 + 0x31fd) = uVar13;
  *(undefined2 *)(param_1 + 0x31ff) = uVar13;
  *(undefined2 *)(param_1 + 0x3201) = uVar13;
  *(undefined2 *)(param_1 + 0x3203) = uVar13;
  *(undefined2 *)(param_1 + 0x3205) = uVar13;
  *(float *)((int)param_1 + 0x74744) = fStack_e0;
  *(float *)((int)param_1 + 0x74784) = fStack_c0;
  *(float *)((int)param_1 + 0x7474c) = fStack_dc;
  *(float *)(param_1 + 0xe8f2) = fStack_bc;
  *(float *)((int)param_1 + 0x74754) = fStack_d8;
  *(float *)((int)param_1 + 0x7479c) = fStack_b8;
  *(float *)((int)param_1 + 0x7475c) = fStack_d4;
  *(float *)(param_1 + 0xe8f5) = fStack_b4;
  *(float *)((int)param_1 + 0x74764) = fStack_d0;
  *(float *)((int)param_1 + 0x747b4) = fStack_b0;
  *(float *)((int)param_1 + 0x7476c) = fStack_cc;
  *(float *)(param_1 + 0xe8f8) = fStack_ac;
  *(float *)((int)param_1 + 0x74774) = fStack_c8;
  *(float *)((int)param_1 + 0x747cc) = fStack_a8;
  *(float *)((int)param_1 + 0x7477c) = fStack_c4;
  *(float *)(param_1 + 0xe8fb) = fStack_a4;
  if ((fVar9 <= fStack_184) || (DAT_ram_4009f0c0 <= fStack_1d4)) {
    *(undefined1 *)((int)param_1 + 0x16) = 0;
  }
  else if (*(char *)((int)param_1 + 0x16) != -1) {
    *(char *)((int)param_1 + 0x16) = *(char *)((int)param_1 + 0x16) + '\x01';
  }
  return;
}


/* NanoCore 1.12, address 0x30043fd4.
 * REA evidence: ev_a29604b824b403b9f216c1cdeee50b1a846e4628c1397dbeb8ce0aa77c205764
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_30043fd4(int param_1,undefined8 *param_2,float *param_3,float *param_4,float *param_5,
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
  fVar7 = DAT_ram_4009675c;
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
  fVar25 = (float)FUN_ram_40073170(param_1,param_7,uVar21);
  fVar4 = DAT_ram_4009675c;
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
        FUN_ram_300445ac(param_1 + 0x440,param_1 + 0x3c,param_1 + 0x3c,param_1 + 0x23c,uVar8);
        break;
      case 1:
        FUN_ram_4007fec8(param_1 + 0x440,param_1 + 0x3c,param_1 + 0x3c,param_1 + 0x23c,uVar8);
        break;
      case 2:
        FUN_ram_4007db8c(param_1 + 0x440,param_1 + 0x3c,param_1 + 0x3c,param_1 + 0x23c,uVar8);
        break;
      case 3:
        FUN_ram_4007b7b0(param_1 + 0x440,param_1 + 0x3c,param_1 + 0x3c,param_1 + 0x23c,uVar8);
        break;
      case 5:
        FUN_ram_30045b78(param_1 + 0x440,param_1 + 0x3c,param_1 + 0x3c,param_1 + 0x23c,uVar8);
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


