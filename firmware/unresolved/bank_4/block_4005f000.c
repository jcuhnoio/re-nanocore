/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4005f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4005f144.
 * REA evidence: ev_2ce2c38600a6a015693412b3f06e780787cd3f4e3f53cf96a890da9ff5b6eba2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005f144(undefined8 *param_1,ulonglong *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined *puVar9;
  ulonglong uVar10;
  float fVar11;
  ulonglong uVar12;
  float fVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar8;
  
  uVar7 = DAT_ram_400930fc;
  fVar1 = DAT_ram_4009281c;
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (param_2 == (ulonglong *)0x0) {
    uVar6 = (ulonglong)(uint)DAT_ram_40098238;
    uVar14 = (ulonglong)DAT_ram_4009823c;
    uVar12 = (ulonglong)DAT_ram_40098240;
    fVar15 = DAT_ram_400941f0;
    fVar5 = DAT_ram_40098238;
joined_r0x4005f3b0:
    if (DAT_ram_4009281c < fVar5) {
      uVar6 = (ulonglong)(uint)DAT_ram_4009281c;
    }
  }
  else {
    uVar12 = *param_2;
    fVar15 = *(float *)(param_2 + 1);
    uVar6 = *(ulonglong *)((int)param_2 + 0xc);
    fVar11 = (float)*(ulonglong *)((int)param_2 + 4);
    fVar5 = (float)uVar6;
    if ((float)uVar12 < 0.0) {
      uVar12 = 0;
LAB_ram_4005f32a:
      if (fVar11 < 0.0) goto LAB_ram_4005f18e;
LAB_ram_4005f336:
      uVar14 = (ulonglong)(uint)DAT_ram_4009281c;
      uVar4 = *(ulonglong *)((int)param_2 + 4);
      if (fVar11 <= DAT_ram_4009281c) goto LAB_ram_4005f192;
      if (fVar15 < 0.0) goto LAB_ram_4005f34e;
LAB_ram_4005f19e:
      if (DAT_ram_4009281c < fVar15) {
        fVar15 = DAT_ram_4009281c;
      }
    }
    else {
      if ((float)uVar12 <= DAT_ram_4009281c) goto LAB_ram_4005f32a;
      uVar12 = (ulonglong)(uint)DAT_ram_4009281c;
      if (0.0 <= fVar11) goto LAB_ram_4005f336;
LAB_ram_4005f18e:
      uVar4 = 0;
LAB_ram_4005f192:
      uVar14 = uVar4;
      if (0.0 <= fVar15) goto LAB_ram_4005f19e;
LAB_ram_4005f34e:
      fVar15 = 0.0;
    }
    if (0.0 <= fVar5) goto joined_r0x4005f3b0;
    uVar6 = 0;
  }
  uVar4 = (ulonglong)(uint)DAT_ram_4009281c;
  fVar5 = (float)*param_1;
  if ((float)*param_1 <= DAT_ram_40093094) {
    fVar5 = DAT_ram_40092878;
  }
  uVar10 = (ulonglong)DAT_ram_400930d8;
  fVar11 = (float)uVar12;
  *(float *)(param_1 + 0x11) = DAT_ram_4009281c;
  *(undefined4 *)((int)param_1 + 0x8c) = uVar7;
  *(ulonglong *)((int)param_1 + 0x1c) = uVar10;
  if (*(float *)((int)param_1 + 0x3c) != fVar11) {
    puVar9 = DAT_ram_40098104;
    if ((0.0 <= fVar11) && (puVar9 = PTR_firmware_entry_ram_40092830, fVar11 <= fVar1)) {
      puVar9 = (undefined *)((fVar11 * DAT_ram_400941fc + fVar1) * (float)DAT_ram_40098104);
    }
    uVar10 = (ulonglong)(uint)(fVar5 * (float)puVar9);
    uVar3 = *(uint *)(param_1 + 1);
    if (fVar5 * (float)puVar9 < fVar1) {
      uVar10 = uVar4;
      if (1 < uVar3) goto LAB_ram_4005f240;
    }
    else {
      fVar11 = fVar1;
      if (1 < uVar3) {
LAB_ram_4005f240:
        fVar11 = (float)(uVar3 - 2);
      }
      if (fVar11 < (float)uVar10) {
        uVar10 = (ulonglong)(uint)fVar11;
      }
    }
    *(ulonglong *)((int)param_1 + 100) = uVar10;
    *(ulonglong *)((int)param_1 + 0x3c) = uVar12;
  }
  fVar11 = (float)uVar14;
  if ((float)param_1[8] != fVar11) {
    uVar12 = 0;
    if (0.0 <= fVar11) {
      if (fVar1 < fVar11) {
        uVar12 = (ulonglong)(uint)DAT_ram_40092820;
      }
      else {
        fVar11 = fVar11 * DAT_ram_40092820 + 0.0;
        uVar12 = (ulonglong)(uint)fVar11;
        if (0.0 <= fVar11) {
          if (DAT_ram_40092820 < fVar11) {
            uVar12 = (ulonglong)(uint)DAT_ram_40092820;
          }
        }
        else {
          uVar12 = 0;
        }
      }
    }
    param_1[0xd] = uVar12;
    param_1[8] = uVar14;
  }
  if ((float)*(undefined8 *)((int)param_1 + 0x44) == fVar15) goto LAB_ram_4005f2f8;
  fVar11 = fVar5 * DAT_ram_4009824c;
  fVar13 = (-(fVar15 * DAT_ram_40093108) + fVar1) * DAT_ram_400934c0;
  if (fVar13 < DAT_ram_400941dc) {
    fVar13 = DAT_ram_400941dc;
    fVar8 = DAT_ram_40098248;
    if (fVar1 <= fVar5) goto LAB_ram_4005f36c;
  }
  else {
    if (fVar11 < fVar13) {
      fVar13 = fVar11;
    }
    fVar8 = DAT_ram_40092878;
    fVar2 = DAT_ram_40098244;
    if (fVar1 <= fVar5) {
      fVar8 = fVar5;
      fVar2 = fVar11;
    }
    fVar11 = fVar2;
    fVar5 = fVar8;
    if (fVar1 <= fVar13) {
LAB_ram_4005f36c:
      if (fVar11 < fVar13) {
        fVar8 = (fVar11 * DAT_ram_4009810c) / fVar5;
      }
      else {
        fVar8 = (fVar13 * DAT_ram_4009810c) / fVar5;
      }
    }
    else {
      fVar8 = DAT_ram_4009810c / fVar5;
    }
  }
  uVar7 = FUN_ram_40000c0e(fVar8);
  *(undefined4 *)(param_1 + 0x12) = uVar7;
  *(float *)((int)param_1 + 0x44) = fVar15;
LAB_ram_4005f2f8:
  if ((float)param_1[9] != (float)uVar6) {
    *(ulonglong *)((int)param_1 + 0x6c) = uVar6;
    param_1[9] = uVar6;
  }
  if ((float)*(undefined8 *)((int)param_1 + 0x4c) != fVar1) {
    param_1[0xe] = uVar4;
    *(ulonglong *)((int)param_1 + 0x4c) = uVar4;
  }
  return;
}


/* NanoCore 1.10, address 0x4005f434.
 * REA evidence: ev_79a6b4f6e91cbf42d5833724c90b7267dd9cac5011a801da98c575c62b48b8be
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005f434(float *param_1,float *param_2,float *param_3,float *param_4,int param_5,
                     int param_6)

{
  float fVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  fVar1 = DAT_ram_40092864;
  if (((param_1 == (float *)0x0) || (param_3 == (float *)0x0)) || (param_5 == 0)) {
    return;
  }
  if ((param_6 == 0) || (param_2 == (float *)0x0)) {
    if (param_1 != param_3) {
      param_3 = (float *)FUN_ram_4000305c(param_3,param_1,param_5 << 2);
    }
    param_2 = param_3;
    if (param_4 == (float *)0x0) {
      return;
    }
  }
  else {
    if (param_4 == (float *)0x0) {
      pfVar2 = param_1 + param_5;
      do {
        uVar4 = *(undefined8 *)param_1;
        uVar3 = *(undefined8 *)param_2;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        *param_3 = ((float)uVar4 + (float)uVar3) * fVar1;
        param_3 = param_3 + 1;
      } while (pfVar2 != param_1);
      return;
    }
    if (param_1 != param_3) {
      FUN_ram_4000305c(param_3,param_1,param_5 << 2);
    }
  }
  if (param_2 == param_4) {
    return;
  }
  FUN_ram_4000305c(param_4,param_2,param_5 << 2);
  return;
}


/* NanoCore 1.10, address 0x4005f4d2.
 * REA evidence: ev_0264a3579d2f1cab492e81ebc9dd4f201fbf506fbd64a77a189770f7b817017c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005f4d2(ulonglong param_1,ulonglong param_2,undefined8 *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_3 == (undefined8 *)0x0) {
    return;
  }
  if ((float)param_1 < 0.0) {
    param_1 = 0;
  }
  else if (DAT_ram_4009281c < (float)param_1) {
    param_1 = (ulonglong)(uint)DAT_ram_4009281c;
  }
  fVar2 = (float)param_1;
  if ((float)param_2 < 0.0) {
    param_2 = 0;
    fVar6 = (float)*(undefined8 *)((int)param_3 + 0x3c);
  }
  else if ((float)param_2 <= DAT_ram_4009281c) {
    fVar6 = (float)*(undefined8 *)((int)param_3 + 0x3c);
  }
  else {
    param_2 = (ulonglong)(uint)DAT_ram_4009281c;
    fVar6 = (float)*(undefined8 *)((int)param_3 + 0x3c);
  }
  if (fVar6 == fVar2) goto LAB_ram_4005f582;
  uVar1 = *(uint *)(param_3 + 1);
  fVar3 = (float)*param_3;
  fVar6 = DAT_ram_4009281c;
  fVar5 = DAT_ram_4009281c;
  if (fVar3 < DAT_ram_40093094) {
    if (0.0 <= fVar2) {
      if (fVar2 <= DAT_ram_4009281c) {
        fVar4 = (fVar2 * DAT_ram_400941f8 + DAT_ram_400930f4) * DAT_ram_40098104;
        fVar3 = DAT_ram_40092878;
        goto LAB_ram_4005f558;
      }
      fVar4 = DAT_ram_4009825c;
      if (1 < uVar1) goto LAB_ram_4005f56c;
      goto LAB_ram_4005f578;
    }
    fVar4 = DAT_ram_40098258;
    if (1 < uVar1) goto LAB_ram_4005f56c;
  }
  else {
    fVar4 = DAT_ram_40098250;
    if ((0.0 <= fVar2) && (fVar4 = DAT_ram_40098254, fVar2 <= DAT_ram_4009281c)) {
      fVar4 = (fVar2 * DAT_ram_400941f8 + DAT_ram_400930f4) * DAT_ram_40098104;
    }
LAB_ram_4005f558:
    fVar4 = fVar4 * fVar3;
    if (DAT_ram_4009281c <= fVar4) {
      if (1 < uVar1) goto LAB_ram_4005f56c;
    }
    else {
      fVar4 = DAT_ram_4009281c;
      if (uVar1 < 2) goto LAB_ram_4005f57c;
LAB_ram_4005f56c:
      fVar6 = (float)(uVar1 - 2);
    }
    fVar5 = fVar4;
    if (fVar6 < fVar4) {
LAB_ram_4005f578:
      fVar5 = fVar6;
    }
  }
LAB_ram_4005f57c:
  *(float *)(param_3 + 0x31) = fVar5;
  *(ulonglong *)((int)param_3 + 0x3c) = param_1;
LAB_ram_4005f582:
  fVar2 = (float)param_2;
  if ((float)param_3[8] == fVar2) {
    return;
  }
  fVar6 = 0.0;
  if ((0.0 <= fVar2) && (fVar6 = DAT_ram_40092820, fVar2 <= DAT_ram_4009281c)) {
    fVar6 = fVar2 * DAT_ram_40092820 + 0.0;
    if (0.0 <= fVar6) {
      if (DAT_ram_40092820 < fVar6) {
        fVar6 = DAT_ram_40092820;
      }
    }
    else {
      fVar6 = 0.0;
    }
  }
  *(float *)((int)param_3 + 0x18c) = fVar6;
  param_3[8] = param_2;
  return;
}


/* NanoCore 1.10, address 0x4005f690.
 * REA evidence: ev_5557086af2cd65229e56f5afe7abaea1ea3a63b63eb57ac55424a6b0a284a15f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005f690(float param_1,float *param_2)

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
  
  fVar7 = DAT_ram_40098274;
  fVar6 = DAT_ram_40098270;
  fVar9 = DAT_ram_40098268;
  fVar1 = DAT_ram_4009281c;
  if (param_2 == (float *)0x0) {
    return;
  }
  fVar3 = *param_2;
  fVar4 = DAT_ram_400930bc;
  if (fVar3 < DAT_ram_40093094) {
    fVar3 = DAT_ram_40092878;
    fVar11 = DAT_ram_40098244;
    fVar2 = DAT_ram_4009349c;
    if (0.0 <= param_1) goto LAB_ram_4005f6d4;
LAB_ram_4005f786:
    if (fVar11 < fVar4) {
      fVar4 = fVar11;
    }
    fVar5 = fVar2;
    fVar12 = fVar3;
    if (DAT_ram_4009281c <= fVar3) {
      fVar9 = DAT_ram_4009281c;
      fVar8 = fVar11;
      if (DAT_ram_4009281c <= fVar4) goto LAB_ram_4005f834;
LAB_ram_4005f83e:
      fVar9 = (fVar9 / fVar3) * DAT_ram_400980f4;
      fVar3 = (float)FUN_ram_40000786(fVar9);
      fVar4 = (float)FUN_ram_40000a08(fVar9);
      fVar7 = (fVar3 + fVar1) * DAT_ram_40092864;
      fVar6 = fVar3 * DAT_ram_40092834;
      fVar2 = -(fVar3 + fVar1);
      fVar9 = fVar4 / DAT_ram_400980ac + fVar1;
      fVar10 = fVar1 - fVar4 / DAT_ram_400980ac;
      if (fVar9 != 0.0) goto LAB_ram_4005f9ec;
      goto LAB_ram_4005f8a2;
    }
    fVar3 = DAT_ram_40092878;
    fVar8 = DAT_ram_40098244;
    if (DAT_ram_4009281c <= fVar4) {
LAB_ram_4005f834:
      fVar9 = fVar4;
      if (fVar8 < fVar4) {
        fVar9 = fVar8;
      }
      goto LAB_ram_4005f83e;
    }
    param_2[0x4b] = DAT_ram_40098268;
    param_2[0x4c] = fVar7;
    param_2[0x4d] = fVar9;
    param_2[0x4e] = fVar7;
    param_2[0x4f] = fVar6;
LAB_ram_4005f99e:
    if (fVar2 < fVar1) {
      fVar7 = 0.0;
      fVar3 = DAT_ram_40098274;
      fVar4 = 0.0;
      fVar6 = DAT_ram_40098270;
      goto LAB_ram_4005f93a;
    }
    fVar9 = DAT_ram_40092834;
    fVar12 = DAT_ram_40092878;
    fVar7 = DAT_ram_40098280;
    fVar3 = DAT_ram_4009827c;
    fVar4 = DAT_ram_40098284;
    fVar6 = DAT_ram_40098278;
    if (DAT_ram_40098244 < fVar2) goto LAB_ram_4005f93a;
  }
  else {
    fVar11 = fVar3 * DAT_ram_4009824c;
    fVar5 = DAT_ram_4009349c;
    if (param_1 < 0.0) {
LAB_ram_4005f7ee:
      fVar2 = fVar5;
      if (fVar11 < fVar5) {
LAB_ram_4005f7f4:
        fVar2 = fVar11;
      }
      goto LAB_ram_4005f786;
    }
LAB_ram_4005f6d4:
    if (DAT_ram_4009281c < param_1) {
      fVar5 = DAT_ram_40098264;
      fVar2 = fVar11;
      fVar4 = DAT_ram_40098260;
      if (DAT_ram_40098264 <= fVar11) goto LAB_ram_4005f81a;
      goto LAB_ram_4005f786;
    }
    fVar2 = DAT_ram_40093664;
    if (param_1 <= DAT_ram_40098288) {
      fVar5 = (DAT_ram_4009281c - param_1 / DAT_ram_40098288) * DAT_ram_4009349c +
              (param_1 / DAT_ram_40098288) * DAT_ram_4009828c;
      if (DAT_ram_40093664 <= fVar5) goto LAB_ram_4005f7ee;
      goto LAB_ram_4005f786;
    }
    if (DAT_ram_40098290 < param_1) {
      fVar4 = (param_1 - DAT_ram_40098290) / DAT_ram_40098294;
      fVar2 = (DAT_ram_4009281c - fVar4) * DAT_ram_40098298 + fVar4 * DAT_ram_40098264;
      fVar4 = (DAT_ram_4009281c - fVar4) * DAT_ram_400930bc + fVar4 * DAT_ram_40098260;
      fVar5 = DAT_ram_40093664;
      if ((DAT_ram_40093664 <= fVar2) && (fVar5 = fVar2, fVar11 < fVar2)) {
        fVar5 = fVar11;
      }
    }
    else {
      fVar5 = (param_1 - DAT_ram_40098288) / DAT_ram_4009829c;
      fVar5 = (DAT_ram_4009281c - fVar5) * DAT_ram_4009828c + fVar5 * DAT_ram_40098298;
      if (fVar5 < DAT_ram_40093664) goto LAB_ram_4005f786;
      if (fVar11 < fVar5) goto LAB_ram_4005f7f4;
    }
LAB_ram_4005f81a:
    fVar2 = fVar5;
    if (DAT_ram_4009281c <= fVar4) goto LAB_ram_4005f786;
    fVar4 = DAT_ram_4009281c;
    fVar6 = DAT_ram_40092834;
    fVar9 = DAT_ram_4009826c;
    fVar7 = DAT_ram_4009281c;
    fVar2 = DAT_ram_40092834;
    fVar10 = DAT_ram_40098268;
    fVar12 = fVar3;
    fVar8 = fVar11;
    if (DAT_ram_4009281c <= fVar3) goto LAB_ram_4005f834;
LAB_ram_4005f9ec:
    fVar9 = fVar1 / fVar9;
    fVar7 = fVar7 * fVar9;
    fVar2 = fVar2 * fVar9;
    fVar6 = fVar6 * fVar9;
    fVar10 = fVar10 * fVar9;
LAB_ram_4005f8a2:
    fVar9 = DAT_ram_40092834;
    param_2[0x4b] = fVar7;
    param_2[0x4c] = fVar2;
    param_2[0x4d] = fVar7;
    param_2[0x4e] = fVar6;
    param_2[0x4f] = fVar10;
    fVar2 = fVar5;
    if (fVar12 < fVar1) goto LAB_ram_4005f99e;
    fVar2 = fVar1;
    if ((fVar1 <= fVar5) && (fVar2 = fVar5, fVar11 < fVar5)) {
      fVar2 = fVar11;
    }
  }
  fVar6 = (fVar2 / fVar12) * DAT_ram_400980f4;
  fVar5 = (float)FUN_ram_40000786(fVar6);
  fVar6 = (float)FUN_ram_40000a08(fVar6);
  fVar2 = fVar1 - fVar5;
  fVar11 = fVar6 / DAT_ram_400980ac + fVar1;
  fVar6 = fVar1 - fVar6 / DAT_ram_400980ac;
  fVar7 = fVar2;
  fVar3 = fVar5 * fVar9;
  fVar4 = fVar2 * DAT_ram_40092864;
  if (fVar11 != 0.0) {
    fVar1 = fVar1 / fVar11;
    fVar7 = fVar2 * fVar1;
    fVar3 = fVar5 * fVar9 * fVar1;
    fVar4 = fVar2 * DAT_ram_40092864 * fVar1;
    fVar6 = fVar6 * fVar1;
  }
LAB_ram_4005f93a:
  param_2[0x55] = fVar3;
  param_2[0x52] = fVar4;
  param_2[0x53] = fVar7;
  param_2[0x54] = fVar4;
  param_2[0x56] = fVar6;
  return;
}


/* NanoCore 1.10, address 0x4005fad0.
 * REA evidence: ev_886c0365538d4ac19a33c2d67164a179e796c7cf2a39316437d8084d7d3f3ce1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4005fad0(uint param_1,int param_2)

{
  bool bVar1;
  
  if (7 < param_1) {
    return param_2 == 0;
  }
  bVar1 = true;
  if (param_2 != 0) {
    bVar1 = false;
    if (param_1 == 7) {
      bVar1 = param_2 == 3;
    }
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x4005faf2.
 * REA evidence: ev_7ffb5208771563246795692206036eef93e346a488186384dd3334fd09a6eb45
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined * FUN_ram_4005faf2(float param_1,int param_2)

{
  undefined *puVar1;
  float fVar2;
  
  fVar2 = DAT_ram_400941fc;
  puVar1 = DAT_ram_4009281c;
  if (((param_2 - 1U & 0xff) < 7) &&
     (fVar2 = DAT_ram_40094200, puVar1 = PTR_firmware_entry_ram_40092830, param_2 != 5)) {
    puVar1 = (undefined *)((param_1 - DAT_ram_400930f4) / DAT_ram_400941f8);
  }
  else {
    puVar1 = (undefined *)((param_1 - (float)puVar1) / fVar2);
  }
  if (0.0 <= (float)puVar1) {
    if ((float)puVar1 <= (float)DAT_ram_4009281c) {
      return puVar1;
    }
    return DAT_ram_4009281c;
  }
  return (undefined *)0x0;
}


/* NanoCore 1.10, address 0x4005fb78.
 * REA evidence: ev_ff6a81053f07c55b1d0e12dcaa827edf516b2cf4ad688b706651d80d65b2c205
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_4005fb78(float param_1)

{
  float fVar1;
  
  fVar1 = (param_1 - DAT_ram_400930d8) / DAT_ram_40094204;
  if (fVar1 < 0.0) {
    return 0.0;
  }
  if (fVar1 <= DAT_ram_4009281c) {
    return fVar1;
  }
  return DAT_ram_4009281c;
}


/* NanoCore 1.10, address 0x4005fbb6.
 * REA evidence: ev_2096f157c070846f4813e610c9fca72ee61fb6b9815ccdc8d4ce78600397994a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4005fbb6(uint param_1)

{
  return param_1 & -(uint)(param_1 < 8);
}


/* NanoCore 1.10, address 0x4005fbc2.
 * REA evidence: ev_60e7c84f399fe6c89ebea9de76faaebab8797e43b9dedf97a92db6c208b7c7b1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char FUN_ram_4005fbc2(uint param_1)

{
  char cVar1;
  
  if (7 < param_1) {
    return '\x04';
  }
  if (param_1 != 4) {
    cVar1 = '\x05';
    if (param_1 < 5) {
      cVar1 = (param_1 != 1) + '\x03';
    }
    return cVar1;
  }
  return '\x03';
}


/* NanoCore 1.10, address 0x4005fbec.
 * REA evidence: ev_1714a0c7958f263305fe243bd93d8ed79b1ccebc1ec3e9ddbb64fd6f95f5565d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005fbec(undefined4 *param_1,uint param_2,uint param_3)

{
  if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) {
    return;
  }
  if (param_3 < 8) {
    memset(param_1,0,param_2 << 2);
    if (param_3 == 1) {
      *param_1 = DAT_ram_400982a0;
      if (param_2 == 1) {
        return;
      }
      param_1[1] = DAT_ram_400982a4;
      if (param_2 != 2) {
        param_1[2] = DAT_ram_400982a8;
      }
LAB_ram_4005fca8:
      if (param_2 < 4) {
        return;
      }
      param_1[3] = 0;
      return;
    }
    if (param_3 == 2) {
      *param_1 = DAT_ram_400982ac;
      if (param_2 != 1) {
        param_1[1] = DAT_ram_400982b0;
        if (param_2 != 2) {
          param_1[2] = DAT_ram_40098288;
        }
        if (3 < param_2) {
          param_1[3] = DAT_ram_40098118;
        }
      }
      goto LAB_ram_4005fc58;
    }
    if (param_3 == 3) {
      *param_1 = DAT_ram_400982b4;
      if (param_2 != 1) {
        param_1[1] = DAT_ram_400982b8;
        if (param_2 != 2) {
          param_1[2] = DAT_ram_4009281c;
        }
        if (3 < param_2) {
          param_1[3] = DAT_ram_400982bc;
        }
      }
      goto LAB_ram_4005fc58;
    }
    if (param_3 == 4) {
      *param_1 = DAT_ram_400982c0;
      if (param_2 == 1) {
        return;
      }
      param_1[1] = DAT_ram_400982c4;
      if (param_2 != 2) {
        param_1[2] = DAT_ram_40092864;
      }
      goto LAB_ram_4005fca8;
    }
    if (param_3 == 5) {
      *param_1 = DAT_ram_400982c8;
      if (param_2 != 1) {
        param_1[1] = DAT_ram_400982cc;
        if (param_2 != 2) {
          param_1[2] = DAT_ram_400982d0;
        }
        if (3 < param_2) {
          param_1[3] = DAT_ram_400941ec;
        }
      }
    }
    else {
      if (param_3 == 6) {
        *param_1 = DAT_ram_400982d4;
        if (param_2 != 1) {
          param_1[1] = DAT_ram_400982d8;
          if (param_2 != 2) {
            param_1[2] = DAT_ram_400982dc;
          }
          if (3 < param_2) {
            param_1[3] = DAT_ram_400982bc;
          }
        }
        if (4 < param_2) {
          param_1[4] = DAT_ram_400982bc;
        }
        goto LAB_ram_4005fd24;
      }
      if (param_3 != 7) goto LAB_ram_4005fc16;
      *param_1 = DAT_ram_400982e0;
      if (param_2 != 1) {
        param_1[1] = DAT_ram_40098118;
        if (param_2 != 2) {
          param_1[2] = DAT_ram_400982e4;
        }
        if (3 < param_2) {
          param_1[3] = DAT_ram_400982e8;
        }
      }
    }
    if (4 < param_2) {
      param_1[4] = DAT_ram_40098238;
    }
LAB_ram_4005fd24:
    if (param_2 < 6) {
      return;
    }
    param_1[5] = 0;
    return;
  }
  memset(param_1,0,param_2 << 2);
LAB_ram_4005fc16:
  *param_1 = DAT_ram_40098240;
  if (param_2 != 1) {
    param_1[1] = DAT_ram_4009823c;
    if (param_2 != 2) {
      param_1[2] = DAT_ram_400941f0;
    }
    if (3 < param_2) {
      param_1[3] = DAT_ram_40098238;
    }
  }
LAB_ram_4005fc58:
  if (4 < param_2) {
    param_1[4] = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x4005fe7c.
 * REA evidence: ev_73d17ab361ee4489537d71ad323b8c688a3c2802f7e6d20f2d488e84617de21e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005fe7c(ulonglong *param_1,uint param_2)

{
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_40098240;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009823c;
      if (param_2 != 2) {
        param_1[1] = (ulonglong)DAT_ram_400941f0;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_40098238;
      }
    }
    if (4 < param_2) {
      *(undefined4 *)(param_1 + 2) = 0;
    }
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4005fee6.
 * REA evidence: ev_2769d5b33e929c7b8025c0c06c54af5e02ba67a91637f743ec36cbcbd1ea0416
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4005fee6(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if ((*(void **)((int)param_1 + 4) != (void *)0x0) && (*(int *)(param_1 + 1) != 0)) {
    memset(*(void **)((int)param_1 + 4),0,*(int *)(param_1 + 1) << 2);
  }
  uVar1 = _DAT_ram_4009281c;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((int)param_1 + 0x2c) = uVar1;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x3a) = 1;
  if ((*(void **)(param_1 + 2) != (void *)0x0) && (*(int *)((int)param_1 + 0x14) != 0)) {
    memset(*(void **)(param_1 + 2),0,*(int *)((int)param_1 + 0x14) << 2);
  }
  uVar1 = _DAT_ram_4009281c;
  *(undefined4 *)(param_1 + 0x1e) = 0x12345678;
  *(undefined4 *)((int)param_1 + 0x184) = 0x87654321;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((int)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x84) = 0;
  *(undefined4 *)((int)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((int)param_1 + 0xcc) = 0;
  *(undefined4 *)((int)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((int)param_1 + 0xec) = 0;
  *(undefined4 *)((int)param_1 + 0xf4) = 0;
  uVar5 = (undefined4)uVar1;
  *(undefined4 *)(param_1 + 0x1f) = uVar5;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((int)param_1 + 0x114) = uVar5;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((int)param_1 + 0x144) = 0;
  *(undefined4 *)((int)param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((int)param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x31) = uVar5;
  *(undefined4 *)((int)param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)((int)param_1 + 0x194) = uVar5;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((int)param_1 + 0x19c) = 0;
  fVar3 = DAT_ram_40093094;
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  *(undefined4 *)((int)param_1 + 0x1a4) = 0;
  fVar2 = (float)*param_1;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((int)param_1 + 0x1ac) = uVar5;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined4 *)((int)param_1 + 0x1bc) = uVar5;
  uVar4 = DAT_ram_400982ec;
  if (fVar3 <= fVar2) {
    fVar3 = DAT_ram_400934d8;
    if (fVar2 * DAT_ram_4009824c < DAT_ram_400934d8) {
      fVar3 = fVar2 * DAT_ram_4009824c;
    }
    fVar3 = (fVar3 / fVar2) * DAT_ram_400980f4;
    uVar4 = FUN_ram_40000a08(fVar3);
    uVar5 = FUN_ram_40000786(fVar3);
  }
  uVar1 = _DAT_ram_4009281c;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(undefined4 *)((int)param_1 + 0x1c4) = uVar5;
  *(int *)(param_1 + 0x39) = (int)uVar1;
  *(undefined4 *)((int)param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)((int)param_1 + 0x622c) = 0;
  *(undefined4 *)((int)param_1 + 0x6224) = 0;
  *(undefined4 *)(param_1 + 0xc45) = 0;
  if (*(short *)((int)param_1 + 0x20e) == 0) {
    *(undefined2 *)((int)param_1 + 0x20e) = 0x44;
  }
  if (*(short *)((int)param_1 + 0x20c) == 0) {
    *(undefined2 *)((int)param_1 + 0x20c) = 0x40;
  }
  memset((void *)((int)param_1 + 0x214),0,0x6010);
  uVar6 = (ulonglong)DAT_ram_40092818;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(ulonglong *)((int)param_1 + 0x3c) = uVar6;
  param_1[8] = uVar6;
  *(ulonglong *)((int)param_1 + 0x44) = uVar6;
  param_1[9] = uVar6;
  *(ulonglong *)((int)param_1 + 0x4c) = uVar6;
  param_1[10] = uVar6;
  *(undefined1 *)((int)param_1 + 0x623e) = 0;
  *(undefined2 *)((int)param_1 + 0x6236) = 0;
  *(undefined4 *)(param_1 + 0xc47) = 0;
  *(undefined2 *)((int)param_1 + 0x623c) = 0;
  return;
}


