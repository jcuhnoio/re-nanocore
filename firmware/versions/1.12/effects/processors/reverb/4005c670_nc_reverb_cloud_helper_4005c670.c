/* NanoCore 1.12: nc_reverb_cloud_helper_4005c670 at 0x4005c670.
 * Role: Call path from subtype dispatcher / lifecycle setter; helper roles inferred from retained arithmetic
 * REA: ev_304ceaaeff4767238dab20a22fe329cfe88616934c2c76f5a3424e5055cd45c6
 * Source: analysis/rea-1.12-effects/results/03461-export-0x4005c670.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Removing unreachable block (ram,0x4005d6e4) */
/* WARNING: Removing unreachable block (ram,0x4005d7b4) */
/* WARNING: Removing unreachable block (ram,0x4005d814) */
/* WARNING: Removing unreachable block (ram,0x4005d754) */
/* WARNING: Removing unreachable block (ram,0x4005d724) */
/* WARNING: Removing unreachable block (ram,0x4005d7e4) */
/* WARNING: Removing unreachable block (ram,0x4005d784) */
/* WARNING: Removing unreachable block (ram,0x4005d694) */
/* WARNING: Removing unreachable block (ram,0x4005d6ea) */
/* WARNING: Removing unreachable block (ram,0x4005d7bc) */
/* WARNING: Removing unreachable block (ram,0x4005d81c) */
/* WARNING: Removing unreachable block (ram,0x4005d75c) */
/* WARNING: Removing unreachable block (ram,0x4005d72c) */
/* WARNING: Removing unreachable block (ram,0x4005d7ec) */
/* WARNING: Removing unreachable block (ram,0x4005d78c) */
/* WARNING: Removing unreachable block (ram,0x4005d69c) */

void nc_reverb_cloud_helper_4005c670(float *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  float *pfVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
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
  float fVar30;
  uint local_b0 [4];
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  
  fVar19 = DAT_ram_4009f07c;
  fVar20 = DAT_ram_4009f078;
  fVar30 = (float)DAT_ram_4009675c;
  fVar21 = *param_1;
  if (*param_1 <= DAT_ram_40099f28) {
    fVar21 = DAT_ram_4009678c;
  }
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    return;
  }
  fVar18 = fVar21 * DAT_ram_4009f070 + (float)DAT_ram_4009675c;
  uVar3 = (uint)(-1 < (int)fVar18) * (int)fVar18;
  if (0x42a < uVar3) {
    uVar3 = 0x42a;
  }
  *(short *)(param_1 + 6) = (short)uVar3;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  pfVar11 = param_1 + 0x4532;
  param_1[0x431] = DAT_ram_4009f074;
  piVar15 = &DAT_ram_4009f0e0;
  pfVar12 = param_1 + 0x454a;
  pfVar9 = pfVar11;
  do {
    fVar18 = (float)FUN_ram_4000078c(((float)*piVar15 * fVar21) / fVar20 + fVar30);
    iVar1 = (int)fVar18;
    pfVar6 = pfVar12;
    if (iVar1 < 0x343) {
      if (0 < iVar1) goto LAB_ram_4005c764;
      *(undefined2 *)(pfVar9 + 1) = 1;
      *pfVar9 = (float)pfVar12;
      *(undefined2 *)((int)pfVar9 + 6) = 0;
      pfVar9[2] = fVar19;
      uVar3 = 4;
    }
    else {
      iVar1 = 0x342;
LAB_ram_4005c764:
      *(short *)(pfVar9 + 1) = (short)iVar1;
      *pfVar9 = (float)pfVar12;
      *(undefined2 *)((int)pfVar9 + 6) = 0;
      pfVar9[2] = fVar19;
      uVar3 = iVar1 * 4;
      if (0x80 < uVar3) {
        uVar13 = uVar3 - 0x81 >> 7;
        do {
          iVar1 = memset(pfVar6,0,0x80);
          fence();
          pfVar6 = (float *)(iVar1 + 0x80);
        } while (pfVar6 != pfVar12 + (uVar13 + 1) * 0x20);
        uVar3 = (uVar3 - 0x80) + uVar13 * -0x80;
        pfVar6 = pfVar12 + (uVar13 + 1) * 0x20;
      }
    }
    memset(pfVar6,0,uVar3);
    fVar18 = DAT_ram_4009f080;
    fence();
    pfVar12 = pfVar12 + 0x342;
    piVar15 = piVar15 + 1;
    pfVar9 = pfVar9 + 3;
  } while (pfVar12 != param_1 + 0x5f5a);
  pfVar6 = param_1 + 0x5f5a;
  piVar15 = &DAT_ram_4009f100;
  pfVar12 = param_1 + 0x5f63;
  pfVar9 = pfVar6;
  do {
    fVar19 = (float)FUN_ram_4000078c(((float)*piVar15 * fVar21) / fVar20 + fVar30);
    iVar1 = (int)fVar19;
    pfVar7 = pfVar12;
    if (iVar1 < 0x184) {
      if (0 < iVar1) goto LAB_ram_4005c81c;
      *(undefined2 *)(pfVar9 + 1) = 1;
      *pfVar9 = (float)pfVar12;
      *(undefined2 *)((int)pfVar9 + 6) = 0;
      pfVar9[2] = fVar18;
      uVar3 = 4;
    }
    else {
      iVar1 = 0x183;
LAB_ram_4005c81c:
      *(short *)(pfVar9 + 1) = (short)iVar1;
      *pfVar9 = (float)pfVar12;
      *(undefined2 *)((int)pfVar9 + 6) = 0;
      pfVar9[2] = fVar18;
      uVar3 = iVar1 * 4;
      if (0x80 < uVar3) {
        uVar13 = uVar3 - 0x81 >> 7;
        do {
          iVar1 = memset(pfVar7,0,0x80);
          fence();
          pfVar7 = (float *)(iVar1 + 0x80);
        } while (pfVar7 != pfVar12 + (uVar13 + 1) * 0x20);
        uVar3 = (uVar3 - 0x80) + uVar13 * -0x80;
        pfVar7 = pfVar12 + (uVar13 + 1) * 0x20;
      }
    }
    memset(pfVar7,0,uVar3);
    fence();
    pfVar12 = pfVar12 + 0x183;
    piVar15 = piVar15 + 1;
    pfVar9 = pfVar9 + 3;
    if (param_1 + 0x63ec == pfVar12) {
      uVar13 = 2;
      fVar20 = (float)FUN_ram_4000078c(fVar21 * DAT_ram_4009f084);
      uVar3 = (uint)fVar20;
      fVar19 = (float)FUN_ram_4000078c(fVar21 * DAT_ram_4009a374);
      fVar20 = DAT_ram_4009f088;
      iVar1 = (int)fVar19;
      if ((int)fVar19 <= (int)(uVar3 + 1)) {
        iVar1 = uVar3 + 2;
      }
      uVar2 = iVar1 - 1;
      iVar5 = 0;
LAB_ram_4005c8f8:
      if (iVar1 <= (int)uVar3) goto LAB_ram_4005c98c;
LAB_ram_4005c8fc:
      uVar13 = uVar13 * 0x19660d + 0x3c6ef35f;
      uVar8 = (int)((float)(uVar13 >> 8) * DAT_ram_4009f088 * (float)(int)(iVar1 - uVar3)) + uVar3;
      if (iVar1 <= (int)uVar8) {
        uVar8 = uVar2;
      }
      uVar8 = uVar8 + ((uVar8 & 1) == 0);
      do {
        iVar4 = iVar5;
        if (iVar1 <= (int)uVar8) break;
LAB_ram_4005c932:
        if (iVar4 != 0) {
          iVar5 = iVar4;
          if (uVar8 == local_b0[0]) goto LAB_ram_4005c8f8;
          if (iVar4 != 1) {
            if (uVar8 == local_b0[1]) goto LAB_ram_4005c8f8;
            if (iVar4 != 2) {
              if (uVar8 == local_b0[2]) goto LAB_ram_4005c8f8;
              if (iVar4 != 3) {
                if (uVar8 == local_b0[3]) goto LAB_ram_4005c8f8;
                if (iVar4 != 4) {
                  if (uVar8 == uStack_a0) goto LAB_ram_4005c8f8;
                  if (iVar4 != 5) {
                    if (uVar8 == uStack_9c) goto LAB_ram_4005c8f8;
                    if (iVar4 != 6) {
                      if (uVar8 == uStack_98) goto LAB_ram_4005c8f8;
                      if (iVar4 == 8) {
                        if (uStack_94 != uVar8) goto LAB_ram_4005c980;
                        goto LAB_ram_4005c8f8;
                      }
                    }
                  }
                }
              }
            }
          }
          iVar5 = iVar4 + 1;
          local_b0[iVar4] = uVar8;
          if (iVar5 != 8) goto LAB_ram_4005c8f8;
          param_1[0x1d174] = (float)(int)local_b0[0];
          if ((int)local_b0[0] < 1) {
            local_b0[0] = 1;
          }
          if ((int)local_b0[0] < (int)local_b0[1]) {
            local_b0[0] = local_b0[1];
          }
          if ((int)local_b0[0] < (int)local_b0[2]) {
            local_b0[0] = local_b0[2];
          }
          if ((int)local_b0[0] < (int)local_b0[3]) {
            local_b0[0] = local_b0[3];
          }
          if ((int)local_b0[0] < (int)uStack_a0) {
            local_b0[0] = uStack_a0;
          }
          if ((int)local_b0[0] < (int)uStack_9c) {
            local_b0[0] = uStack_9c;
          }
          fVar21 = fVar21 * DAT_ram_4009f08c;
          if ((int)local_b0[0] < (int)uStack_98) {
            local_b0[0] = uStack_98;
          }
          uVar3 = local_b0[0];
          if ((int)local_b0[0] <= (int)uStack_94) {
            uVar3 = uStack_94;
          }
          param_1[0x1d175] = (float)(int)local_b0[1];
          param_1[0x1d176] = (float)(int)local_b0[2];
          param_1[0x1d177] = (float)(int)local_b0[3];
          param_1[0x1d178] = (float)(int)uStack_a0;
          param_1[0x1d179] = (float)(int)uStack_9c;
          param_1[0x1d17a] = (float)(int)uStack_98;
          param_1[0x1d17b] = (float)(int)uStack_94;
          fVar21 = (float)FUN_ram_4000078c(fVar21 + fVar30);
          uVar3 = (int)fVar21 + 4 + uVar3;
          if (0x2dab < (int)uVar3) {
            uVar3 = 0x2dab;
          }
          if ((uVar3 & 0xffff) == 0) {
            uVar3 = 1;
          }
          uVar16 = (uVar3 & 0xffff) + 2;
          uVar8 = (uVar16 & 0xffff) << 2;
          pfVar7 = param_1 + 0x63ec;
          pfVar14 = param_1 + 0x640c;
          pfVar9 = pfVar7;
          pfVar12 = pfVar14;
          uVar2 = uVar8;
          if (0x2dad < uVar16) {
            uVar2 = 0xb6b4;
          }
          goto LAB_ram_4005cf0c;
        }
LAB_ram_4005c980:
        local_b0[iVar4] = uVar8;
        iVar5 = iVar4 + 1;
        if ((int)uVar3 < iVar1) goto LAB_ram_4005c8fc;
LAB_ram_4005c98c:
        uVar8 = uVar3 + 1;
      } while ((uVar3 & 1) == 0);
      iVar4 = iVar5;
      uVar8 = uVar2;
      if ((uVar2 & 1) == 0) {
        uVar8 = iVar1 - 2;
      }
      goto LAB_ram_4005c932;
    }
  } while( true );
LAB_ram_4005cf0c:
  *pfVar9 = (float)pfVar12;
  uVar17 = uVar2;
  if (uVar16 < 0x2dae) {
    *(undefined2 *)(pfVar9 + 2) = 0;
    pfVar9[3] = 0.0;
    *(short *)((int)pfVar9 + 6) = (short)uVar3;
    *(short *)(pfVar9 + 1) = (short)uVar16;
    pfVar10 = pfVar12;
    if (0x80 < uVar8) goto LAB_ram_4005cf34;
    uVar17 = uVar8;
    if ((uVar16 & 0xffff) != 0) goto LAB_ram_4005cf50;
  }
  else {
    pfVar9[1] = DAT_ram_4009f09c;
    *(undefined2 *)(pfVar9 + 2) = 0;
    pfVar9[3] = 0.0;
    pfVar10 = pfVar12;
LAB_ram_4005cf34:
    do {
      iVar1 = memset(pfVar10,0,0x80);
      fence();
      uVar17 = uVar17 - 0x80;
      pfVar10 = (float *)(iVar1 + 0x80);
    } while (0x80 < uVar17);
LAB_ram_4005cf50:
    memset(pfVar10,0,uVar17);
    fence();
  }
  fVar18 = DAT_ram_4009f090;
  fVar19 = DAT_ram_4009f080;
  fVar21 = DAT_ram_4009675c._4_4_;
  pfVar9 = pfVar9 + 4;
  pfVar12 = pfVar12 + 0x2dad;
  if (pfVar14 == pfVar9) {
    uVar3 = uVar13 * 0x19660d + 0x3c6ef35f;
    uVar13 = uVar3 * 0x19660d + 0x3c6ef35f;
    fVar23 = (float)(uVar3 >> 8) * fVar20 * DAT_ram_4009f090;
    param_1[0x1d187] = (float)(uVar13 >> 8) * fVar20 * DAT_ram_4009675c._4_4_ + DAT_ram_4009f080;
    fVar22 = (float)FUN_ram_400009d2(fVar23);
    param_1[0x1d18f] = fVar22;
    fVar23 = (float)FUN_ram_40000712(fVar23);
    uVar3 = uVar13 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d197] = fVar23;
    uVar13 = uVar3 * 0x19660d + 0x3c6ef35f;
    fVar23 = (float)(uVar3 >> 8) * fVar20 * fVar18;
    param_1[0x1d188] = (float)(uVar13 >> 8) * fVar20 * fVar21 + fVar19;
    fVar22 = (float)FUN_ram_400009d2(fVar23);
    param_1[0x1d190] = fVar22;
    fVar23 = (float)FUN_ram_40000712(fVar23);
    uVar3 = uVar13 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d198] = fVar23;
    uVar13 = uVar3 * 0x19660d + 0x3c6ef35f;
    fVar23 = (float)(uVar3 >> 8) * fVar20 * fVar18;
    param_1[0x1d189] = (float)(uVar13 >> 8) * fVar20 * fVar21 + fVar19;
    fVar22 = (float)FUN_ram_400009d2(fVar23);
    param_1[0x1d191] = fVar22;
    fVar23 = (float)FUN_ram_40000712(fVar23);
    uVar3 = uVar13 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d199] = fVar23;
    uVar13 = uVar3 * 0x19660d + 0x3c6ef35f;
    fVar23 = (float)(uVar3 >> 8) * fVar20 * fVar18;
    param_1[0x1d18a] = (float)(uVar13 >> 8) * fVar20 * fVar21 + fVar19;
    fVar22 = (float)FUN_ram_400009d2(fVar23);
    param_1[0x1d192] = fVar22;
    fVar23 = (float)FUN_ram_40000712(fVar23);
    uVar3 = uVar13 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d19a] = fVar23;
    uVar13 = uVar3 * 0x19660d + 0x3c6ef35f;
    fVar23 = (float)(uVar3 >> 8) * fVar20 * fVar18;
    param_1[0x1d18b] = (float)(uVar13 >> 8) * fVar20 * fVar21 + fVar19;
    fVar22 = (float)FUN_ram_400009d2(fVar23);
    param_1[0x1d193] = fVar22;
    fVar23 = (float)FUN_ram_40000712(fVar23);
    uVar3 = uVar13 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d19b] = fVar23;
    uVar13 = uVar3 * 0x19660d + 0x3c6ef35f;
    fVar23 = (float)(uVar3 >> 8) * fVar20 * fVar18;
    param_1[0x1d18c] = (float)(uVar13 >> 8) * fVar20 * fVar21 + fVar19;
    fVar22 = (float)FUN_ram_400009d2(fVar23);
    param_1[0x1d194] = fVar22;
    fVar23 = (float)FUN_ram_40000712(fVar23);
    uVar3 = uVar13 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d19c] = fVar23;
    uVar13 = uVar3 * 0x19660d + 0x3c6ef35f;
    fVar23 = (float)(uVar3 >> 8) * fVar20 * fVar18;
    param_1[0x1d18d] = (float)(uVar13 >> 8) * fVar20 * fVar21 + fVar19;
    fVar22 = (float)FUN_ram_400009d2(fVar23);
    param_1[0x1d195] = fVar22;
    fVar23 = (float)FUN_ram_40000712(fVar23);
    uVar3 = uVar13 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d19d] = fVar23;
    uVar13 = uVar3 * 0x19660d + 0x3c6ef35f;
    fVar23 = (float)(uVar3 >> 8) * fVar20 * fVar18;
    uVar3 = uVar13 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d18e] = (float)(uVar13 >> 8) * fVar20 * fVar21 + fVar19;
    fVar21 = (float)FUN_ram_400009d2(fVar23);
    param_1[0x1d196] = fVar21;
    fVar21 = (float)FUN_ram_40000712(fVar23);
    param_1[0x1d19e] = fVar21;
    fVar21 = DAT_ram_4009f068;
    fVar19 = DAT_ram_4009f060._4_4_;
    fVar23 = DAT_ram_4009f060._4_4_;
    if (fVar30 <= (float)(uVar3 >> 8) * fVar20) {
      fVar23 = DAT_ram_4009f068;
    }
    uVar3 = uVar3 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d1b8] = fVar23;
    fVar23 = fVar19;
    if (fVar30 <= (float)(uVar3 >> 8) * fVar20) {
      fVar23 = fVar21;
    }
    uVar3 = uVar3 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d1b9] = fVar23;
    fVar23 = fVar19;
    if (fVar30 <= (float)(uVar3 >> 8) * fVar20) {
      fVar23 = fVar21;
    }
    uVar3 = uVar3 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d1ba] = fVar23;
    fVar23 = fVar19;
    if (fVar30 <= (float)(uVar3 >> 8) * fVar20) {
      fVar23 = fVar21;
    }
    uVar3 = uVar3 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d1bb] = fVar23;
    fVar23 = fVar19;
    if (fVar30 <= (float)(uVar3 >> 8) * fVar20) {
      fVar23 = fVar21;
    }
    uVar3 = uVar3 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d1bc] = fVar23;
    fVar23 = fVar19;
    if (fVar30 <= (float)(uVar3 >> 8) * fVar20) {
      fVar23 = fVar21;
    }
    uVar3 = uVar3 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d1bd] = fVar23;
    fVar23 = fVar19;
    if (fVar30 <= (float)(uVar3 >> 8) * fVar20) {
      fVar23 = fVar21;
    }
    uVar3 = uVar3 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d1be] = fVar23;
    fVar22 = DAT_ram_4009f094;
    fVar23 = fVar19;
    if (fVar30 <= (float)(uVar3 >> 8) * fVar20) {
      fVar23 = fVar21;
    }
    uVar13 = uVar3 * 0x19660d + 0x3c6ef35f;
    param_1[0x1d1bf] = fVar23;
    uVar3 = uVar13 * 0x19660d + 0x3c6ef35f;
    fVar30 = DAT_ram_4009f06c;
    if (fVar22 <= (float)(uVar13 >> 8) * fVar20) {
      fVar30 = (float)FUN_ram_40000c5e();
      fVar30 = fVar30 * DAT_ram_40096744;
    }
    fVar23 = (float)FUN_ram_40000712((float)(uVar3 >> 8) * fVar20 * fVar18);
    uVar3 = uVar3 * 0x19660d + 0x3c6ef35f;
    fVar23 = fVar23 * SQRT(fVar30);
    param_1[0x1d1c0] = fVar23;
    uVar13 = uVar3 * 0x19660d + 0x3c6ef35f;
    fVar30 = DAT_ram_4009f06c;
    if (fVar22 <= (float)(uVar3 >> 8) * fVar20) {
      fVar30 = (float)FUN_ram_40000c5e();
      fVar30 = fVar30 * DAT_ram_40096744;
    }
    fVar24 = (float)FUN_ram_40000712((float)(uVar13 >> 8) * fVar20 * fVar18);
    uVar13 = uVar13 * 0x19660d + 0x3c6ef35f;
    fVar24 = fVar24 * SQRT(fVar30);
    param_1[0x1d1c1] = fVar24;
    uVar3 = uVar13 * 0x19660d + 0x3c6ef35f;
    fVar30 = DAT_ram_4009f06c;
    if (fVar22 <= (float)(uVar13 >> 8) * fVar20) {
      fVar30 = (float)FUN_ram_40000c5e();
      fVar30 = fVar30 * DAT_ram_40096744;
    }
    fVar25 = (float)FUN_ram_40000712((float)(uVar3 >> 8) * fVar20 * fVar18);
    uVar3 = uVar3 * 0x19660d + 0x3c6ef35f;
    fVar25 = SQRT(fVar30) * fVar25;
    param_1[0x1d1c2] = fVar25;
    uVar13 = uVar3 * 0x19660d + 0x3c6ef35f;
    fVar30 = DAT_ram_4009f06c;
    if (fVar22 <= (float)(uVar3 >> 8) * fVar20) {
      fVar30 = (float)FUN_ram_40000c5e();
      fVar30 = fVar30 * DAT_ram_40096744;
    }
    fVar26 = (float)FUN_ram_40000712((float)(uVar13 >> 8) * fVar20 * fVar18);
    uVar13 = uVar13 * 0x19660d + 0x3c6ef35f;
    fVar26 = SQRT(fVar30) * fVar26;
    param_1[0x1d1c3] = fVar26;
    uVar3 = uVar13 * 0x19660d + 0x3c6ef35f;
    fVar30 = DAT_ram_4009f06c;
    if (fVar22 <= (float)(uVar13 >> 8) * fVar20) {
      fVar30 = (float)FUN_ram_40000c5e();
      fVar30 = fVar30 * DAT_ram_40096744;
    }
    fVar27 = (float)FUN_ram_40000712((float)(uVar3 >> 8) * fVar20 * fVar18);
    uVar3 = uVar3 * 0x19660d + 0x3c6ef35f;
    fVar27 = SQRT(fVar30) * fVar27;
    param_1[0x1d1c4] = fVar27;
    uVar13 = uVar3 * 0x19660d + 0x3c6ef35f;
    fVar30 = DAT_ram_4009f06c;
    if (fVar22 <= (float)(uVar3 >> 8) * fVar20) {
      fVar30 = (float)FUN_ram_40000c5e();
      fVar30 = fVar30 * DAT_ram_40096744;
    }
    fVar28 = (float)FUN_ram_40000712((float)(uVar13 >> 8) * fVar20 * fVar18);
    uVar13 = uVar13 * 0x19660d + 0x3c6ef35f;
    fVar28 = SQRT(fVar30) * fVar28;
    param_1[0x1d1c5] = fVar28;
    uVar3 = uVar13 * 0x19660d + 0x3c6ef35f;
    fVar30 = DAT_ram_4009f06c;
    if (fVar22 <= (float)(uVar13 >> 8) * fVar20) {
      fVar30 = (float)FUN_ram_40000c5e();
      fVar30 = fVar30 * DAT_ram_40096744;
    }
    fVar29 = (float)FUN_ram_40000712((float)(uVar3 >> 8) * fVar20 * fVar18);
    uVar3 = uVar3 * 0x19660d + 0x3c6ef35f;
    fVar29 = SQRT(fVar30) * fVar29;
    param_1[0x1d1c6] = fVar29;
    fVar30 = DAT_ram_4009f06c;
    if (fVar22 <= (float)(uVar3 >> 8) * fVar20) {
      fVar30 = (float)FUN_ram_40000c5e();
      fVar30 = fVar30 * DAT_ram_40096744;
    }
    fVar20 = (float)FUN_ram_40000712((float)(uVar3 * 0x19660d + 0x3c6ef35f >> 8) * fVar20 * fVar18);
    fVar20 = fVar20 * SQRT(fVar30);
    fVar30 = fVar20 * fVar20 +
             fVar29 * fVar29 +
             fVar28 * fVar28 +
             fVar27 * fVar27 +
             fVar26 * fVar26 + fVar25 * fVar25 + fVar24 * fVar24 + fVar23 * fVar23 + 0.0;
    param_1[0x1d1c7] = fVar20;
    if ((int)(param_1 + 0x1d000) < 0x100 && fVar30 < 0.0) {
      fVar30 = (float)FUN_ram_40000e74();
    }
    else {
      fVar30 = SQRT(fVar30);
    }
    fVar20 = DAT_ram_4009f098;
    if (fVar30 < DAT_ram_4009f098) {
      fVar30 = DAT_ram_4009672c;
    }
    fVar18 = param_1[0x1d1c0] / fVar30;
    fVar23 = param_1[0x1d1c1] / fVar30;
    param_1[0x1d1c0] = fVar18;
    fVar22 = param_1[0x1d1c2] / fVar30;
    param_1[0x1d1c1] = fVar23;
    fVar24 = param_1[0x1d1c3] / fVar30;
    param_1[0x1d1c2] = fVar22;
    fVar25 = param_1[0x1d1c4] / fVar30;
    param_1[0x1d1c3] = fVar24;
    fVar26 = param_1[0x1d1c5] / fVar30;
    param_1[0x1d1c4] = fVar25;
    fVar27 = param_1[0x1d1c6] / fVar30;
    param_1[0x1d1c5] = fVar26;
    fVar30 = param_1[0x1d1c7] / fVar30;
    param_1[0x1d1c6] = fVar27;
    fVar28 = fVar30 * fVar19 +
             fVar27 * fVar21 +
             fVar26 * fVar19 +
             fVar25 * fVar21 +
             fVar24 * fVar19 + fVar22 * fVar21 + fVar23 * fVar19 + fVar18 * fVar21 + 0.0;
    param_1[0x1d1c7] = fVar30;
    fVar18 = -(fVar18 * fVar28) + fVar21;
    fVar23 = -(fVar28 * fVar23) + fVar19;
    fVar22 = -(fVar28 * fVar22) + fVar21;
    fVar24 = -(fVar28 * fVar24) + fVar19;
    fVar25 = -(fVar28 * fVar25) + fVar21;
    fVar26 = -(fVar28 * fVar26) + fVar19;
    param_1[0x1d1ca] = fVar22;
    param_1[0x1d1cb] = fVar24;
    param_1[0x1d1cc] = fVar25;
    fVar21 = -(fVar28 * fVar27) + fVar21;
    param_1[0x1d1cd] = fVar26;
    fVar19 = -(fVar30 * fVar28) + fVar19;
    param_1[0x1d1c8] = fVar18;
    param_1[0x1d1ce] = fVar21;
    param_1[0x1d1c9] = fVar23;
    param_1[0x1d1cf] = fVar19;
    fVar21 = fVar19 * fVar19 +
             fVar21 * fVar21 +
             fVar26 * fVar26 +
             fVar25 * fVar25 +
             fVar24 * fVar24 + fVar22 * fVar22 + fVar23 * fVar23 + fVar18 * fVar18 + 0.0;
    if ((int)(param_1 + 0x1d000) < 0x100 && fVar21 < 0.0) {
      fVar21 = (float)FUN_ram_40000e74();
    }
    else {
      fVar21 = SQRT(fVar21);
    }
    if (fVar21 < fVar20) {
      fVar21 = DAT_ram_4009672c;
    }
    pfVar9 = param_1 + 7;
    param_1[0x1d1c8] = param_1[0x1d1c8] / fVar21;
    param_1[0x1d1c9] = param_1[0x1d1c9] / fVar21;
    param_1[0x1d1ca] = param_1[0x1d1ca] / fVar21;
    param_1[0x1d1cb] = param_1[0x1d1cb] / fVar21;
    param_1[0x1d1cc] = param_1[0x1d1cc] / fVar21;
    param_1[0x1d1cd] = param_1[0x1d1cd] / fVar21;
    param_1[0x1d1ce] = param_1[0x1d1ce] / fVar21;
    param_1[0x1d1cf] = param_1[0x1d1cf] / fVar21;
    *(undefined1 *)((int)param_1 + 0x15) = 0;
    *(undefined1 *)((int)param_1 + 0x17) = 1;
    do {
      iVar1 = memset(pfVar9,0,0x80);
      fence();
      pfVar9 = (float *)(iVar1 + 0x80);
    } while (pfVar9 != param_1 + 0x427);
    memset(param_1 + 0x427,0,0x28);
    fence();
    *(undefined2 *)((int)param_1 + 0x1a) = 0;
    pfVar9 = param_1 + 0x532;
    do {
      iVar1 = memset(pfVar9,0,0x80);
      fence();
      pfVar9 = (float *)(iVar1 + 0x80);
    } while (pfVar9 != param_1 + 0x4512);
    memset(param_1 + 0x4512,0,0x80);
    fence();
    *(undefined2 *)((int)param_1 + 0x10c6) = 0;
    do {
      fVar21 = *pfVar11;
      if ((fVar21 != 0.0) && (*(ushort *)(pfVar11 + 1) != 0)) {
        uVar3 = (uint)*(ushort *)(pfVar11 + 1) * 4;
        if (0x80 < uVar3) {
          uVar13 = uVar3 - 0x81 >> 7;
          fVar30 = (float)((uVar13 + 1) * 0x80 + (int)fVar21);
          do {
            iVar1 = memset(fVar21,0,0x80);
            fence();
            fVar21 = (float)(iVar1 + 0x80);
          } while (fVar21 != fVar30);
          uVar3 = (uVar3 - 0x80) + uVar13 * -0x80;
          fVar21 = fVar30;
        }
        memset(fVar21,0,uVar3);
        fence();
        *(undefined2 *)((int)pfVar11 + 6) = 0;
      }
      pfVar11 = pfVar11 + 3;
    } while (param_1 + 0x454a != pfVar11);
    do {
      fVar21 = *pfVar6;
      if ((fVar21 != 0.0) && (*(ushort *)(pfVar6 + 1) != 0)) {
        uVar3 = (uint)*(ushort *)(pfVar6 + 1) * 4;
        if (0x80 < uVar3) {
          uVar13 = uVar3 - 0x81 >> 7;
          fVar30 = (float)((uVar13 + 1) * 0x80 + (int)fVar21);
          do {
            iVar1 = memset(fVar21,0,0x80);
            fence();
            fVar21 = (float)(iVar1 + 0x80);
          } while (fVar21 != fVar30);
          uVar3 = (uVar3 - 0x80) + uVar13 * -0x80;
          fVar21 = fVar30;
        }
        memset(fVar21,0,uVar3);
        fence();
        *(undefined2 *)((int)pfVar6 + 6) = 0;
      }
      pfVar6 = pfVar6 + 3;
    } while (param_1 + 0x5f63 != pfVar6);
    pfVar12 = param_1 + 0x1d1d1;
    pfVar11 = param_1 + 0x1d1e1;
    pfVar9 = param_1 + 0x1d1af;
    do {
      fVar21 = *pfVar7;
      if ((fVar21 != 0.0) && (*(ushort *)(pfVar7 + 1) != 0)) {
        uVar3 = (uint)*(ushort *)(pfVar7 + 1) * 4;
        if (0x80 < uVar3) {
          uVar13 = uVar3 - 0x81 >> 7;
          fVar30 = (float)((uVar13 + 1) * 0x80 + (int)fVar21);
          do {
            iVar1 = memset(fVar21,0,0x80);
            fence();
            fVar21 = (float)(iVar1 + 0x80);
          } while (fVar30 != fVar21);
          uVar3 = (uVar3 - 0x80) + uVar13 * -0x80;
          fVar21 = fVar30;
        }
        memset(fVar21,0,uVar3);
        fence();
        *(undefined2 *)(pfVar7 + 2) = 0;
        pfVar7[3] = 0.0;
      }
      *pfVar12 = 0.0;
      *pfVar11 = 0.0;
      pfVar11[1] = 0.0;
      *pfVar9 = 0.0;
      pfVar9 = pfVar9 + 1;
      pfVar7 = pfVar7 + 4;
      pfVar12 = pfVar12 + 2;
      pfVar11 = pfVar11 + 3;
    } while (param_1 + 0x1d1b7 != pfVar9);
    *(undefined1 *)(param_1 + 0x1d1b7) = 0;
    *(undefined1 *)((int)param_1 + 0x16) = 0;
    return;
  }
  goto LAB_ram_4005cf0c;
}

