/* NanoCore 1.12: nc_reverb_shimmer_helper_4008281c at 0x4008281c.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_4cd5a388dcd073f90a6d3e2d4b8e17489b127f325a107ac1fd4c446ac5e25925
 * Source: analysis/rea-1.12-effects/results/03609-export-0x4008281c.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

void nc_reverb_shimmer_helper_4008281c(float *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  ushort uVar13;
  undefined2 uVar14;
  uint uVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  undefined *puVar37;
  float fVar38;
  float fVar39;
  int iStack_a4;
  
  fVar38 = DAT_ram_40099f28;
  fVar34 = *param_1;
  if (*param_1 <= DAT_ram_40099f28) {
    fVar34 = DAT_ram_4009f078;
  }
  cVar1 = *(char *)((int)param_1 + 0x45);
  *param_1 = fVar34;
  fVar33 = DAT_ram_400a108c;
  fVar32 = DAT_ram_4009f090;
  fVar5 = (float)DAT_ram_4009675c;
  fVar35 = DAT_ram_4009672c;
  if (cVar1 != '\0') {
    param_1[0x12209] = 0.0;
    iVar11 = 1;
    pfVar19 = param_1 + 0x1220a;
    do {
      fVar35 = (float)iVar11;
      iVar11 = iVar11 + 1;
      fVar35 = (float)FUN_ram_40000712(fVar35 * fVar33 * fVar32);
      *pfVar19 = -(fVar35 * fVar5) + fVar5;
      fVar35 = DAT_ram_4009672c;
      pfVar19 = pfVar19 + 1;
    } while (iVar11 != 0x401);
    fVar33 = DAT_ram_40099f84;
    if (*(char *)(param_1 + 6) == '\0') {
      fVar33 = DAT_ram_4009672c;
    }
    fVar28 = fVar34 / DAT_ram_4009678c;
    pfVar20 = param_1 + 0x17;
    pfVar26 = param_1 + 0x817;
    iVar11 = 0;
    pfVar19 = pfVar20;
    do {
      fVar27 = (float)*(int *)((int)&DAT_ram_400a1094 + iVar11 * 4 + 4) * fVar28 * fVar33;
      if (0.0 <= fVar27) {
        fVar27 = fVar27 + fVar5;
      }
      else {
        fVar27 = fVar27 - fVar5;
      }
      iVar7 = (int)fVar27;
      if (iVar7 < 0x201) {
        if (iVar7 < 1) {
          iVar7 = 1;
        }
      }
      else {
        iVar7 = 0x200;
      }
      *(ushort *)((int)pfVar26 + iVar11 * 2) = (ushort)iVar7;
      *(undefined2 *)((int)param_1 + iVar11 * 2 + 0x2064) = 0;
      uVar15 = iVar7 * 4;
      pfVar25 = pfVar19;
      if (0x80 < uVar15) {
        uVar8 = uVar15 - 0x81 >> 7;
        pfVar25 = pfVar19 + (uVar8 + 1) * 0x20;
        pfVar16 = pfVar19;
        do {
          iVar7 = memset(pfVar16,0,0x80);
          fence();
          pfVar16 = (float *)(iVar7 + 0x80);
        } while (pfVar16 != pfVar25);
        uVar15 = (uVar15 - 0x80) + uVar8 * -0x80;
      }
      memset(pfVar25,0,uVar15);
      fence();
      iVar11 = iVar11 + 1;
      pfVar19 = pfVar19 + 0x200;
    } while (iVar11 != 4);
    pfVar16 = param_1 + 0x141b;
    pfVar24 = param_1 + 0x81b;
    pfVar23 = (float *)&DAT_ram_400a10b8;
    pfVar19 = pfVar24;
    pfVar25 = pfVar16;
    do {
      fVar28 = (fVar34 * *pfVar23) / fVar38;
      if (0.0 <= fVar28) {
        fVar28 = fVar28 + fVar5;
      }
      else {
        fVar28 = fVar28 - fVar5;
      }
      iVar11 = (int)fVar28;
      if (iVar11 < 0x401) {
        if (iVar11 < 1) {
          iVar11 = 1;
        }
      }
      else {
        iVar11 = 0x400;
      }
      *(ushort *)pfVar25 = (ushort)iVar11;
      *(ushort *)((int)pfVar25 + 6) = 0;
      uVar15 = iVar11 * 4;
      pfVar21 = pfVar19;
      if (0x80 < uVar15) {
        uVar8 = uVar15 - 0x81 >> 7;
        pfVar21 = pfVar19 + (uVar8 + 1) * 0x20;
        pfVar17 = pfVar19;
        do {
          iVar11 = memset(pfVar17,0,0x80);
          fence();
          pfVar17 = (float *)(iVar11 + 0x80);
        } while (pfVar21 != pfVar17);
        uVar15 = (uVar15 - 0x80) + uVar8 * -0x80;
      }
      memset(pfVar21,0,uVar15);
      fence();
      pfVar19 = pfVar19 + 0x400;
      pfVar23 = pfVar23 + 1;
      pfVar25 = (float *)((int)pfVar25 + 2);
    } while (pfVar19 != pfVar16);
    pfVar21 = param_1 + 0x141e;
    pfVar23 = param_1 + 0x341e;
    pfVar17 = (float *)&DAT_ram_400a10a8;
    iStack_a4 = 0x800;
    pfVar19 = pfVar21;
    pfVar25 = pfVar23;
    do {
      fVar28 = (fVar34 * *pfVar17) / fVar38;
      if (0.0 <= fVar28) {
        fVar28 = fVar28 + fVar5;
      }
      else {
        fVar28 = fVar28 - fVar5;
      }
      iVar7 = (int)fVar28;
      iVar11 = iStack_a4;
      if ((iVar7 < 0x801) && (iVar11 = iVar7, iVar7 < 1)) {
        iVar11 = 1;
      }
      *(ushort *)pfVar25 = (ushort)iVar11;
      *(ushort *)(pfVar25 + 2) = 0;
      uVar15 = iVar11 * 4;
      pfVar22 = pfVar19;
      if (0x80 < uVar15) {
        uVar8 = uVar15 - 0x81 >> 7;
        pfVar22 = pfVar19 + (uVar8 + 1) * 0x20;
        pfVar18 = pfVar19;
        do {
          iVar11 = memset(pfVar18,0,0x80);
          fence();
          pfVar18 = (float *)(iVar11 + 0x80);
        } while (pfVar18 != pfVar22);
        uVar15 = (uVar15 - 0x80) + uVar8 * -0x80;
      }
      memset(pfVar22,0,uVar15);
      fence();
      pfVar19 = pfVar19 + 0x800;
      pfVar17 = pfVar17 + 1;
      pfVar25 = (float *)((int)pfVar25 + 2);
    } while (pfVar17 != (float *)&DAT_ram_400a10b8);
    fVar28 = (fVar33 * DAT_ram_4009a4f4 * fVar34) / fVar38;
    if (0.0 <= fVar28) {
      fVar28 = fVar28 + fVar5;
    }
    else {
      fVar28 = fVar28 - fVar5;
    }
    uVar15 = (int)fVar28 + (uint)(((int)fVar28 & 1U) == 0);
    if ((int)uVar15 < 1) {
      uVar15 = 1;
    }
    param_1[0xe323] = (float)(int)uVar15;
    if ((uVar15 & 0xffff) == 0) {
      uVar15 = 1;
    }
    fVar28 = (fVar33 * DAT_ram_40099f80 * fVar34) / fVar38;
    if (0.0 <= fVar28) {
      fVar28 = fVar28 + fVar5;
    }
    else {
      fVar28 = fVar28 - fVar5;
    }
    uVar8 = (int)fVar28 + (uint)(((int)fVar28 & 1U) == 0);
    if ((int)uVar8 < 1) {
      uVar8 = 1;
    }
    param_1[0xe324] = (float)(int)uVar8;
    if ((uVar8 & 0xffff) < (uVar15 & 0xffff)) {
      uVar8 = uVar15 & 0xffff;
    }
    fVar28 = (fVar33 * DAT_ram_400a0f68 * fVar34) / fVar38;
    if (0.0 <= fVar28) {
      fVar28 = fVar28 + fVar5;
    }
    else {
      fVar28 = fVar28 - fVar5;
    }
    uVar15 = (int)fVar28 + (uint)(((int)fVar28 & 1U) == 0);
    if ((int)uVar15 < 1) {
      uVar15 = 1;
    }
    param_1[0xe325] = (float)(int)uVar15;
    if ((uVar15 & 0xffff) < (uVar8 & 0xffff)) {
      uVar15 = uVar8 & 0xffff;
    }
    fVar28 = (fVar33 * DAT_ram_400a0f6c * fVar34) / fVar38;
    if (0.0 <= fVar28) {
      fVar28 = fVar28 + fVar5;
    }
    else {
      fVar28 = fVar28 - fVar5;
    }
    uVar8 = (int)fVar28 + (uint)(((int)fVar28 & 1U) == 0);
    if ((int)uVar8 < 1) {
      uVar8 = 1;
    }
    param_1[0xe326] = (float)(int)uVar8;
    if ((uVar8 & 0xffff) < (uVar15 & 0xffff)) {
      uVar8 = uVar15 & 0xffff;
    }
    fVar28 = (fVar33 * DAT_ram_400a0f70 * fVar34) / fVar38;
    if (0.0 <= fVar28) {
      fVar28 = fVar28 + fVar5;
    }
    else {
      fVar28 = fVar28 - fVar5;
    }
    uVar15 = (int)fVar28 + (uint)(((int)fVar28 & 1U) == 0);
    if ((int)uVar15 < 1) {
      uVar15 = 1;
    }
    param_1[0xe327] = (float)(int)uVar15;
    if ((uVar15 & 0xffff) < (uVar8 & 0xffff)) {
      uVar15 = uVar8 & 0xffff;
    }
    fVar28 = (fVar33 * DAT_ram_4009a380 * fVar34) / fVar38;
    if (0.0 <= fVar28) {
      fVar28 = fVar28 + fVar5;
    }
    else {
      fVar28 = fVar28 - fVar5;
    }
    uVar8 = (int)fVar28 + (uint)(((int)fVar28 & 1U) == 0);
    if ((int)uVar8 < 1) {
      uVar8 = 1;
    }
    param_1[0xe328] = (float)(int)uVar8;
    if ((uVar8 & 0xffff) < (uVar15 & 0xffff)) {
      uVar8 = uVar15 & 0xffff;
    }
    fVar28 = (fVar33 * DAT_ram_400a0f74 * fVar34) / fVar38;
    if (0.0 <= fVar28) {
      fVar28 = fVar28 + fVar5;
    }
    else {
      fVar28 = fVar28 - fVar5;
    }
    uVar15 = (int)fVar28 + (uint)(((int)fVar28 & 1U) == 0);
    if ((int)uVar15 < 1) {
      uVar15 = 1;
    }
    param_1[0xe329] = (float)(int)uVar15;
    if ((uVar15 & 0xffff) < (uVar8 & 0xffff)) {
      uVar15 = uVar8 & 0xffff;
    }
    fVar33 = (fVar33 * DAT_ram_4009b17c * fVar34) / fVar38;
    if (0.0 <= fVar33) {
      fVar33 = fVar33 + fVar5;
    }
    else {
      fVar33 = fVar33 - fVar5;
    }
    uVar8 = (int)fVar33 + (uint)(((int)fVar33 & 1U) == 0);
    if ((int)uVar8 < 1) {
      uVar8 = 1;
    }
    param_1[0xe32a] = (float)(int)uVar8;
    if ((uVar8 & 0xffff) < (uVar15 & 0xffff)) {
      uVar8 = uVar15 & 0xffff;
    }
    uVar8 = uVar8 + 0x40;
    if ((uVar8 & 0xffff) == 0) {
      uVar8 = 1;
    }
    uVar14 = (short)uVar8;
    if (0x15e0 < (uVar8 & 0xffff)) {
      uVar14 = 0x15e0;
    }
    pfVar19 = param_1 + 0xe333;
    *(undefined2 *)(param_1 + 0xe322) = uVar14;
    memset(pfVar19,0,0x20);
    fVar27 = DAT_ram_400a1090;
    fVar28 = DAT_ram_4009f088;
    fVar33 = DAT_ram_40099f90;
    uVar8 = (int)param_1[8] * 0x19660d + 0x3c6ef35f;
    *(undefined2 *)((int)param_1 + 0x38c8a) = 0;
    uVar15 = uVar8 * 0x19660d + 0x3c6ef35f;
    uVar9 = uVar15 * 0x19660d + 0x3c6ef35f;
    param_1[0xe34b] = (float)(uVar8 >> 8) * fVar28 * fVar33 + fVar27;
    uVar8 = uVar9 * 0x19660d + 0x3c6ef35f;
    param_1[0xe33b] = (float)(uVar15 >> 8) * fVar28 * fVar32;
    uVar10 = uVar8 * 0x19660d + 0x3c6ef35f;
    param_1[0xe34c] = (float)(uVar9 >> 8) * fVar28 * fVar33 + fVar27;
    uVar15 = uVar10 * 0x19660d + 0x3c6ef35f;
    param_1[0xe33c] = (float)(uVar8 >> 8) * fVar28 * fVar32;
    uVar9 = uVar15 * 0x19660d + 0x3c6ef35f;
    param_1[0xe34d] = (float)(uVar10 >> 8) * fVar28 * fVar33 + fVar27;
    uVar8 = uVar9 * 0x19660d + 0x3c6ef35f;
    param_1[0xe33d] = (float)(uVar15 >> 8) * fVar28 * fVar32;
    uVar10 = uVar8 * 0x19660d + 0x3c6ef35f;
    param_1[0xe34e] = (float)(uVar9 >> 8) * fVar28 * fVar33 + fVar27;
    uVar15 = uVar10 * 0x19660d + 0x3c6ef35f;
    param_1[0xe33e] = (float)(uVar8 >> 8) * fVar28 * fVar32;
    uVar9 = uVar15 * 0x19660d + 0x3c6ef35f;
    param_1[0xe34f] = (float)(uVar10 >> 8) * fVar28 * fVar33 + fVar27;
    uVar8 = uVar9 * 0x19660d + 0x3c6ef35f;
    param_1[0xe33f] = (float)(uVar15 >> 8) * fVar28 * fVar32;
    uVar10 = uVar8 * 0x19660d + 0x3c6ef35f;
    param_1[0xe350] = (float)(uVar9 >> 8) * fVar28 * fVar33 + fVar27;
    uVar15 = uVar10 * 0x19660d + 0x3c6ef35f;
    param_1[0xe340] = (float)(uVar8 >> 8) * fVar28 * fVar32;
    uVar8 = uVar15 * 0x19660d + 0x3c6ef35f;
    param_1[0xe351] = (float)(uVar10 >> 8) * fVar28 * fVar33 + fVar27;
    fVar29 = (float)(uVar8 * 0x19660d + 0x3c6ef35f);
    param_1[0xe341] = (float)(uVar15 >> 8) * fVar28 * fVar32;
    param_1[0xe352] = (float)(uVar8 >> 8) * fVar28 * fVar33 + fVar27;
    param_1[0xe342] = (float)((uint)fVar29 >> 8) * fVar28 * fVar32;
    param_1[0x1260a] = fVar29;
    *(undefined1 *)((int)param_1 + 0x45) = 0;
    param_1[0x13] = 0.0;
    param_1[0x14] = 0.0;
    param_1[0x16] = 0.0;
    do {
      if (*(ushort *)pfVar26 != 0) {
        uVar15 = (uint)*(ushort *)pfVar26 * 4;
        pfVar25 = pfVar20;
        if (0x80 < uVar15) {
          uVar8 = uVar15 - 0x81 >> 7;
          do {
            iVar11 = memset(pfVar25,0,0x80);
            fence();
            pfVar25 = (float *)(iVar11 + 0x80);
          } while (pfVar25 != pfVar20 + (uVar8 + 1) * 0x20);
          uVar15 = (uVar15 - 0x80) + uVar8 * -0x80;
          pfVar25 = pfVar20 + (uVar8 + 1) * 0x20;
        }
        memset(pfVar25,0,uVar15);
        fence();
      }
      *(ushort *)(pfVar26 + 2) = 0;
      pfVar26 = (float *)((int)pfVar26 + 2);
      pfVar20 = pfVar20 + 0x200;
      pfVar25 = pfVar16;
    } while (param_1 + 0x817 != pfVar20);
    do {
      if (*(ushort *)pfVar25 != 0) {
        uVar15 = (uint)*(ushort *)pfVar25 * 4;
        pfVar26 = pfVar24;
        if (0x80 < uVar15) {
          uVar8 = uVar15 - 0x81 >> 7;
          do {
            iVar11 = memset(pfVar26,0,0x80);
            fence();
            pfVar26 = (float *)(iVar11 + 0x80);
          } while (pfVar26 != pfVar24 + (uVar8 + 1) * 0x20);
          uVar15 = (uVar15 - 0x80) + uVar8 * -0x80;
          pfVar26 = pfVar24 + (uVar8 + 1) * 0x20;
        }
        memset(pfVar26,0,uVar15);
        fence();
      }
      *(ushort *)((int)pfVar25 + 6) = 0;
      pfVar24 = pfVar24 + 0x400;
      pfVar25 = (float *)((int)pfVar25 + 2);
    } while (pfVar24 != pfVar16);
    do {
      if (*(ushort *)pfVar23 != 0) {
        uVar15 = (uint)*(ushort *)pfVar23 * 4;
        pfVar26 = pfVar21;
        if (0x80 < uVar15) {
          uVar8 = uVar15 - 0x81 >> 7;
          do {
            iVar11 = memset(pfVar26,0,0x80);
            fence();
            pfVar26 = (float *)(iVar11 + 0x80);
          } while (pfVar26 != pfVar21 + (uVar8 + 1) * 0x20);
          uVar15 = (uVar15 - 0x80) + uVar8 * -0x80;
          pfVar26 = pfVar21 + (uVar8 + 1) * 0x20;
        }
        memset(pfVar26,0,uVar15);
        fence();
      }
      *(ushort *)(pfVar23 + 2) = 0;
      pfVar21 = pfVar21 + 0x800;
      pfVar23 = (float *)((int)pfVar23 + 2);
    } while (param_1 + 0x341e != pfVar21);
    pfVar26 = param_1 + 0x3422;
    iVar11 = 0;
    while (*(ushort *)(param_1 + 0xe322) != 0) {
      uVar15 = (uint)*(ushort *)(param_1 + 0xe322) * 4;
      pfVar20 = pfVar26;
      if (0x80 < uVar15) {
        uVar8 = uVar15 - 0x81 >> 7;
        do {
          iVar7 = memset(pfVar20,0,0x80);
          fence();
          pfVar20 = (float *)(iVar7 + 0x80);
        } while (pfVar20 != pfVar26 + (uVar8 + 1) * 0x20);
        uVar15 = (uVar15 - 0x80) + uVar8 * -0x80;
        pfVar20 = pfVar26 + (uVar8 + 1) * 0x20;
      }
      memset(pfVar20,0,uVar15);
      fence();
      *pfVar19 = 0.0;
      iVar11 = iVar11 + 1;
      if (iVar11 == 8) goto LAB_ram_40083b6a;
      pfVar19 = pfVar19 + 1;
      pfVar26 = pfVar26 + 0x15e0;
    }
    *pfVar19 = 0.0;
    if (iVar11 + 1 != 8) {
      memset(param_1 + iVar11 + 0xe334,0,(8 - (iVar11 + 1)) * 4);
    }
LAB_ram_40083b6a:
    *(undefined2 *)((int)param_1 + 0x38c8a) = 0;
    pfVar19 = param_1 + 0xe379;
    do {
      iVar11 = memset(pfVar19,0,0x80);
      fence();
      pfVar19 = (float *)(iVar11 + 0x80);
    } while (pfVar19 != param_1 + 0xfad9);
    memset(param_1 + 0xfad9,0,0x40);
    fence();
    *(undefined2 *)(param_1 + 0xfae9) = 0;
    if (*(ushort *)(param_1 + 0x121fa) == 0) {
      memset(param_1 + 0xfaea,0,40000);
    }
    else {
      memset(param_1 + 0xfaea,0,(uint)*(ushort *)(param_1 + 0x121fa) << 2);
    }
    *(undefined2 *)((int)param_1 + 0x487ea) = 0;
    param_1[0x121fc] = 0.0;
    param_1[0x12202] = 0.0;
    param_1[0x12203] = 0.0;
    param_1[0x12205] = 0.0;
    param_1[0x12207] = 0.0;
    param_1[0x12208] = 0.0;
    *(undefined2 *)((int)param_1 + 0x38dce) = 0;
  }
  fVar28 = (float)FUN_ram_40000844(DAT_ram_40099f88,
                                   (float)*(undefined8 *)(param_1 + 1) * DAT_ram_400a0fb8);
  fVar33 = DAT_ram_40096780;
  fVar32 = param_1[3];
  if (fVar32 < 0.0) {
    fVar32 = 0.0;
LAB_ram_400828be:
    fVar27 = (float)*(undefined8 *)(param_1 + 4);
    if (0.0 <= fVar27) goto LAB_ram_400828cc;
LAB_ram_40082c70:
    fVar27 = 0.0;
  }
  else {
    if (fVar32 <= fVar35) goto LAB_ram_400828be;
    fVar27 = (float)*(undefined8 *)(param_1 + 4);
    fVar32 = fVar35;
    if (fVar27 < 0.0) goto LAB_ram_40082c70;
LAB_ram_400828cc:
    if (DAT_ram_40096780 < fVar27) {
      cVar2 = *(char *)(param_1 + 9);
      fVar29 = (float)*(undefined8 *)(param_1 + 5);
      fVar27 = DAT_ram_40096780;
      goto joined_r0x400828ee;
    }
  }
  cVar2 = *(char *)(param_1 + 9);
  fVar29 = (float)*(undefined8 *)(param_1 + 5);
joined_r0x400828ee:
  fVar30 = DAT_ram_400a0f60;
  if ((DAT_ram_4009a354 <= fVar29) && (fVar30 = DAT_ram_400a0f5c, fVar29 <= DAT_ram_40099f38)) {
    fVar29 = (float)FUN_ram_40000d44(DAT_ram_40099f38,-fVar29 / DAT_ram_40099f44);
    fVar29 = fVar29 * DAT_ram_40099f70;
    fVar30 = DAT_ram_400a0f5c;
    if ((DAT_ram_4009b1a4 <= fVar29) && (fVar30 = DAT_ram_400a0f64, fVar29 <= DAT_ram_400a0fbc)) {
      fVar30 = fVar29 * DAT_ram_4009f0b4;
    }
  }
  fVar6 = DAT_ram_4009f22c;
  fVar39 = DAT_ram_4009f0b4;
  fVar29 = fVar32 * DAT_ram_400a0fc0 + DAT_ram_4009b1a0;
  fVar4 = fVar34 * DAT_ram_4009f22c;
  fVar31 = DAT_ram_4009a358;
  if ((DAT_ram_4009a358 <= fVar29) && (fVar31 = fVar29, fVar4 < fVar29)) {
    fVar31 = fVar4;
  }
  fVar32 = fVar32 * DAT_ram_400a0fc4 + DAT_ram_400a0fc8;
  fVar29 = DAT_ram_4009a35c;
  if ((DAT_ram_4009a35c <= fVar32) && (fVar29 = fVar32, fVar4 < fVar32)) {
    fVar29 = fVar4;
  }
  uVar36 = FUN_ram_40000bd8(fVar30 / fVar34);
  *(undefined8 *)(param_1 + 0x12) = uVar36;
  uVar36 = FUN_ram_40000bd8((fVar31 * fVar39) / fVar34);
  *(undefined8 *)(param_1 + 0x15) = uVar36;
  fVar31 = (float)FUN_ram_40000bd8((fVar29 * fVar39) / fVar34);
  fVar30 = DAT_ram_400a0fcc;
  fVar29 = DAT_ram_4009f230;
  fVar32 = DAT_ram_40099f6c;
  param_1[0xe374] = fVar31;
  fVar32 = (fVar27 / fVar33) * fVar29 + fVar32;
  param_1[0xe375] = (fVar27 / fVar33) * fVar30;
  fVar29 = DAT_ram_4009f0b0;
  fVar27 = DAT_ram_40099f38;
  fVar33 = DAT_ram_4009672c;
  if (cVar2 == '\0') {
    pfVar19 = param_1 + 0xe323;
    do {
      pfVar26 = pfVar19 + 1;
      uVar36 = FUN_ram_40000d44(fVar27,((float)*(undefined8 *)pfVar19 * fVar29) / (fVar34 * fVar28))
      ;
      *(undefined8 *)(pfVar19 + 8) = uVar36;
      pfVar19 = pfVar26;
    } while (param_1 + 0xe32b != pfVar26);
  }
  else {
    param_1[0xe32b] = DAT_ram_4009672c;
    param_1[0xe32c] = fVar33;
    param_1[0xe32d] = fVar33;
    param_1[0xe32e] = fVar33;
    param_1[0xe32f] = fVar33;
    param_1[0xe330] = fVar33;
    param_1[0xe331] = fVar33;
    param_1[0xe332] = fVar33;
  }
  fVar33 = DAT_ram_4009f090;
  cVar3 = *(char *)(param_1 + 0xe373);
  if ((fVar32 <= 0.0) || (param_1[0xe375] <= 0.0)) {
    memset(param_1 + 0xe343,0,0x20);
    memset(param_1 + 0xe353,0,0x20);
    fVar32 = DAT_ram_4009672c;
    param_1[0xe35b] = DAT_ram_4009672c;
    param_1[0xe35c] = fVar32;
    param_1[0xe35d] = fVar32;
    param_1[0xe35e] = fVar32;
    param_1[0xe35f] = fVar32;
    param_1[0xe360] = fVar32;
    param_1[0xe361] = fVar32;
    param_1[0xe362] = fVar32;
    memset(param_1 + 0xe363,0,0x20);
    cVar12 = '\0';
    param_1[0xe36b] = fVar32;
    param_1[0xe36c] = fVar32;
    param_1[0xe36d] = fVar32;
    param_1[0xe36e] = fVar32;
    param_1[0xe36f] = fVar32;
    param_1[0xe370] = fVar32;
    param_1[0xe371] = fVar32;
    param_1[0xe372] = fVar32;
    *(undefined1 *)(param_1 + 0xe373) = 0;
  }
  else {
    fVar27 = *param_1;
    fVar28 = ((param_1[0xe34b] + fVar35) * fVar32 * DAT_ram_4009f090) / fVar27;
    param_1[0xe343] = fVar28;
    if ((cVar1 == '\0') && (cVar3 != '\0')) {
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe363] = fVar29;
      fVar28 = (float)FUN_ram_40000712(fVar28);
      param_1[0xe36b] = fVar28;
      fVar28 = ((param_1[0xe34c] + fVar35) * fVar32 * fVar33) / fVar27;
      param_1[0xe344] = fVar28;
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe364] = fVar29;
      fVar28 = (float)FUN_ram_40000712(fVar28);
      param_1[0xe36c] = fVar28;
      fVar28 = ((param_1[0xe34d] + fVar35) * fVar32 * fVar33) / fVar27;
      param_1[0xe345] = fVar28;
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe365] = fVar29;
      fVar28 = (float)FUN_ram_40000712(fVar28);
      param_1[0xe36d] = fVar28;
      fVar28 = ((param_1[0xe34e] + fVar35) * fVar32 * fVar33) / fVar27;
      param_1[0xe346] = fVar28;
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe366] = fVar29;
      fVar28 = (float)FUN_ram_40000712(fVar28);
      param_1[0xe36e] = fVar28;
      fVar28 = ((param_1[0xe34f] + fVar35) * fVar32 * fVar33) / fVar27;
      param_1[0xe347] = fVar28;
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe367] = fVar29;
      fVar28 = (float)FUN_ram_40000712(fVar28);
      param_1[0xe36f] = fVar28;
      fVar28 = ((param_1[0xe350] + fVar35) * fVar32 * fVar33) / fVar27;
      param_1[0xe348] = fVar28;
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe368] = fVar29;
      fVar28 = (float)FUN_ram_40000712(fVar28);
      param_1[0xe370] = fVar28;
      fVar28 = ((param_1[0xe351] + fVar35) * fVar32 * fVar33) / fVar27;
      param_1[0xe349] = fVar28;
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe369] = fVar29;
      fVar28 = (float)FUN_ram_40000712(fVar28);
      param_1[0xe371] = fVar28;
      fVar27 = ((param_1[0xe352] + fVar35) * fVar32 * fVar33) / fVar27;
      param_1[0xe34a] = fVar27;
      fVar32 = (float)FUN_ram_400009d2(fVar27);
      param_1[0xe36a] = fVar32;
      fVar32 = (float)FUN_ram_40000712(fVar27);
      param_1[0xe372] = fVar32;
    }
    else {
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe363] = fVar29;
      fVar29 = (float)FUN_ram_40000712(fVar28);
      fVar28 = param_1[0xe33b];
      param_1[0xe36b] = fVar29;
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe353] = fVar29;
      fVar28 = (float)FUN_ram_40000712(fVar28);
      param_1[0xe35b] = fVar28;
      fVar28 = ((param_1[0xe34c] + fVar35) * fVar32 * fVar33) / fVar27;
      param_1[0xe344] = fVar28;
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe364] = fVar29;
      fVar29 = (float)FUN_ram_40000712(fVar28);
      fVar28 = param_1[0xe33c];
      param_1[0xe36c] = fVar29;
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe354] = fVar29;
      fVar28 = (float)FUN_ram_40000712(fVar28);
      param_1[0xe35c] = fVar28;
      fVar28 = ((param_1[0xe34d] + fVar35) * fVar32 * fVar33) / fVar27;
      param_1[0xe345] = fVar28;
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe365] = fVar29;
      fVar29 = (float)FUN_ram_40000712(fVar28);
      fVar28 = param_1[0xe33d];
      param_1[0xe36d] = fVar29;
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe355] = fVar29;
      fVar28 = (float)FUN_ram_40000712(fVar28);
      param_1[0xe35d] = fVar28;
      fVar28 = ((param_1[0xe34e] + fVar35) * fVar32 * fVar33) / fVar27;
      param_1[0xe346] = fVar28;
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe366] = fVar29;
      fVar29 = (float)FUN_ram_40000712(fVar28);
      fVar28 = param_1[0xe33e];
      param_1[0xe36e] = fVar29;
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe356] = fVar29;
      fVar28 = (float)FUN_ram_40000712(fVar28);
      param_1[0xe35e] = fVar28;
      fVar28 = ((param_1[0xe34f] + fVar35) * fVar32 * fVar33) / fVar27;
      param_1[0xe347] = fVar28;
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe367] = fVar29;
      fVar29 = (float)FUN_ram_40000712(fVar28);
      fVar28 = param_1[0xe33f];
      param_1[0xe36f] = fVar29;
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe357] = fVar29;
      fVar28 = (float)FUN_ram_40000712(fVar28);
      param_1[0xe35f] = fVar28;
      fVar28 = ((param_1[0xe350] + fVar35) * fVar32 * fVar33) / fVar27;
      param_1[0xe348] = fVar28;
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe368] = fVar29;
      fVar29 = (float)FUN_ram_40000712(fVar28);
      fVar28 = param_1[0xe340];
      param_1[0xe370] = fVar29;
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe358] = fVar29;
      fVar28 = (float)FUN_ram_40000712(fVar28);
      param_1[0xe360] = fVar28;
      fVar28 = ((param_1[0xe351] + fVar35) * fVar32 * fVar33) / fVar27;
      param_1[0xe349] = fVar28;
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe369] = fVar29;
      fVar29 = (float)FUN_ram_40000712(fVar28);
      fVar28 = param_1[0xe341];
      param_1[0xe371] = fVar29;
      fVar29 = (float)FUN_ram_400009d2(fVar28);
      param_1[0xe359] = fVar29;
      fVar28 = (float)FUN_ram_40000712(fVar28);
      param_1[0xe361] = fVar28;
      fVar27 = ((param_1[0xe352] + fVar35) * fVar32 * fVar33) / fVar27;
      param_1[0xe34a] = fVar27;
      fVar32 = (float)FUN_ram_400009d2(fVar27);
      param_1[0xe36a] = fVar32;
      fVar33 = (float)FUN_ram_40000712(fVar27);
      fVar32 = param_1[0xe342];
      param_1[0xe372] = fVar33;
      fVar33 = (float)FUN_ram_400009d2(fVar32);
      param_1[0xe35a] = fVar33;
      fVar32 = (float)FUN_ram_40000712(fVar32);
      param_1[0xe362] = fVar32;
    }
    *(undefined1 *)(param_1 + 0xe373) = 1;
    cVar12 = '\x01';
  }
  if ((cVar1 != '\0') || (cVar12 != cVar3)) {
    *(undefined2 *)((int)param_1 + 0x38dce) = 0;
  }
  if (cVar2 != '\0') {
    param_1[0xe374] = 0.0;
  }
  fVar32 = (float)*(undefined8 *)(param_1 + 2);
  if (fVar32 < 0.0) {
    fVar32 = 0.0;
  }
  else if (DAT_ram_4009a378 < fVar32) {
    fVar32 = DAT_ram_4009a378;
  }
  fVar32 = (fVar34 * fVar32) / fVar38;
  if (0.0 <= fVar32) {
    fVar32 = fVar32 + fVar5;
  }
  else {
    fVar32 = fVar32 - fVar5;
  }
  iVar11 = (int)fVar32;
  uVar13 = (short)~(ushort)((uint)iVar11 >> 0x10) >> 0xf & (ushort)iVar11;
  fVar32 = (float)*(undefined8 *)(param_1 + 7);
  if (6000 < iVar11) {
    uVar13 = 6000;
  }
  *(ushort *)((int)param_1 + 0x3eba6) = uVar13;
  if (fVar32 < 0.0) {
    fVar32 = 0.0;
  }
  else if (fVar35 < fVar32) {
    fVar32 = fVar35;
  }
  fVar33 = (float)*(undefined8 *)(param_1 + 0xc);
  param_1[0xe376] = fVar32;
  if (fVar33 < 0.0) {
    fVar32 = (float)*(undefined8 *)(param_1 + 0xb);
    param_1[0xe377] = 0.0;
  }
  else {
    if (DAT_ram_40099f38 < fVar33) {
      fVar33 = DAT_ram_40099f38;
    }
    fVar32 = (float)*(undefined8 *)(param_1 + 0xb);
    param_1[0xe377] = fVar33;
  }
  if (0.0 <= fVar32) {
    if (fVar35 < fVar32) {
      fVar32 = fVar35;
    }
  }
  else {
    fVar32 = 0.0;
  }
  fVar33 = (float)*(undefined8 *)(param_1 + 0xd);
  param_1[0xe378] = fVar32;
  fVar32 = fVar39;
  if (fVar35 <= fVar33) {
    if (fVar4 < fVar33) {
      fVar32 = fVar4 * fVar39;
    }
    else {
      fVar32 = fVar33 * fVar39;
    }
  }
  fVar32 = (float)FUN_ram_40000bd8(fVar32 / fVar34);
  param_1[0x12201] = fVar32;
  fVar33 = (float)*(undefined8 *)(param_1 + 0xe);
  fVar32 = fVar39;
  if (fVar35 <= fVar33) {
    if (fVar4 < fVar33) {
      fVar32 = fVar4 * fVar39;
    }
    else {
      fVar32 = fVar33 * fVar39;
    }
  }
  fVar32 = (float)FUN_ram_40000bd8(fVar32 / fVar34);
  param_1[0x12204] = fVar32;
  fVar32 = (float)*(undefined8 *)(param_1 + 0xf);
  if (fVar35 <= fVar32) {
    if (fVar4 < fVar32) {
      fVar39 = fVar4 * fVar39;
    }
    else {
      fVar39 = fVar32 * fVar39;
    }
  }
  fVar34 = (float)FUN_ram_40000bd8(fVar39 / fVar34);
  param_1[0x12206] = fVar34;
  if (*(char *)((int)param_1 + 0x25) == '\0') {
    *(undefined1 *)(param_1 + 0x12200) = 0;
  }
  else {
    fVar34 = (float)*(undefined8 *)(param_1 + 10);
    puVar37 = DAT_ram_40096744;
    if ((DAT_ram_4009a324 <= fVar34) &&
       (puVar37 = PTR_entry_ram_40096740, fVar34 <= DAT_ram_4009a328)) {
      puVar37 = (undefined *)(fVar34 / DAT_ram_4009a330);
    }
    fVar34 = (float)FUN_ram_40000d44(PTR_entry_ram_40096740,puVar37);
    fVar32 = (float)FUN_ram_40000844(0,*(undefined8 *)(param_1 + 0x10));
    if ((((cVar1 != '\0') || (*(char *)(param_1 + 0x12200) == '\0')) ||
        (DAT_ram_40096748 < ABS(fVar34 - param_1[0x121fe]))) ||
       (DAT_ram_4009f0ac < ABS(fVar32 - param_1[0x121ff]))) {
      param_1[0x121fe] = fVar34;
      param_1[0x121ff] = fVar32;
      fVar38 = (fVar32 * (float)*(undefined8 *)param_1) / fVar38;
      if (0.0 <= fVar38) {
        fVar38 = fVar38 + fVar5;
      }
      else {
        fVar38 = fVar38 - fVar5;
      }
      uVar15 = (int)fVar38;
      if (0x270c < (int)fVar38) {
        uVar15 = 0x270c;
      }
      if ((int)uVar15 < 0x40) {
        uVar15 = 0x40;
      }
      uVar8 = (uVar15 & 0xffff) + 4;
      *(short *)(param_1 + 0x121fb) = (short)uVar15;
      *(short *)(param_1 + 0x121fa) = (short)(uVar8 * 0x10000 >> 0x10);
      memset(param_1 + 0xfaea,0,(uVar8 & 0xffff) << 2);
      *(undefined2 *)((int)param_1 + 0x487ea) = 0;
      param_1[0x121fc] = 0.0;
      fVar38 = 0.0;
      if (((*(ushort *)(param_1 + 0x121fb) == 0) ||
          (fVar34 = (fVar34 - fVar35) / (float)*(ushort *)(param_1 + 0x121fb),
          fVar38 = DAT_ram_4009f278, fVar34 < DAT_ram_4009f278)) ||
         (fVar38 = fVar34, fVar34 <= fVar6)) {
        param_1[0x121fd] = fVar38;
        *(undefined1 *)(param_1 + 0x12200) = 1;
      }
      else {
        param_1[0x121fd] = fVar6;
        *(undefined1 *)(param_1 + 0x12200) = 1;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  return;
}

