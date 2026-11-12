/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4005f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4005f54e.
 * REA evidence: ev_9ef4a5aafd80fddebc075e78ead1526aa3fa73dbb03e92adebdc807a232490dc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4005f54e(undefined4 param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float *unaff_s0;
  undefined4 *unaff_s1;
  float *pfVar3;
  float *in_a6;
  undefined8 *unaff_s2;
  float *unaff_s3;
  int iVar4;
  float *pfVar5;
  int unaff_s5;
  int unaff_s6;
  int iVar6;
  int unaff_s8;
  ulonglong unaff_fs0;
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar9;
  
  fVar7 = DAT_ram_40094634;
  fVar2 = DAT_ram_40094604;
  iVar6 = unaff_s1[0xd];
  fVar16 = (float)unaff_s1[0xc];
  if (in_a6 == (float *)0x0) goto LAB_ram_4005f8e8;
  fVar8 = *in_a6;
  if (fVar8 < 0.0) {
    fVar8 = 0.0;
  }
  else if (DAT_ram_40094604 < fVar8) {
    fVar8 = DAT_ram_40094604;
  }
  fVar10 = in_a6[1];
  if (fVar10 < 0.0) {
    fVar10 = 0.0;
LAB_ram_4005f632:
    if ((unaff_s5 == 0) || (unaff_s2 == (undefined8 *)0x0)) {
      if (param_2 == unaff_s0) {
        iVar4 = unaff_s8 << 2;
      }
      else {
        iVar4 = unaff_s8 << 2;
        FUN_ram_4000304c();
        param_1 = *unaff_s1;
        fVar7 = DAT_ram_40094634;
      }
    }
    else {
      iVar4 = unaff_s8 * 4;
      pfVar3 = param_2 + unaff_s8;
      pfVar5 = unaff_s0;
      do {
        uVar14 = *(undefined8 *)param_2;
        uVar12 = *unaff_s2;
        param_2 = param_2 + 1;
        unaff_s2 = (undefined8 *)((int)unaff_s2 + 4);
        *pfVar5 = ((float)uVar14 + (float)uVar12) * fVar7;
        pfVar5 = pfVar5 + 1;
      } while (param_2 != pfVar3);
    }
    FUN_ram_40076580(param_1);
    fVar11 = (float)unaff_s1[1];
    if ((float)unaff_s1[1] <= fVar2) {
      fVar11 = DAT_ram_40099f80;
    }
    fVar9 = DAT_ram_40099ff4;
    if ((0.0 <= fVar8) && (fVar9 = DAT_ram_40099ff8, fVar8 <= fVar2)) {
      fVar9 = fVar8 * DAT_ram_4009a00c + DAT_ram_40099ff4;
    }
    fVar8 = (float)FUN_ram_40000bd8(fVar9);
    fVar9 = DAT_ram_40099ffc;
    if ((0.0 <= fVar10) && (fVar9 = DAT_ram_4009a000, fVar10 <= fVar2)) {
      fVar9 = fVar10 * DAT_ram_4009a010 + DAT_ram_40099ffc;
    }
    fVar10 = (float)FUN_ram_40000bd8(fVar9);
    fVar7 = fVar11 * fVar7 * DAT_ram_40096044;
    if (fVar7 < fVar8) {
      fVar8 = fVar7;
    }
    if (fVar7 < fVar10) {
      fVar10 = fVar7;
    }
    if ((float)*(undefined8 *)(unaff_s1 + 2) != fVar8) {
      uVar12 = FUN_ram_40000bd8((fVar8 * DAT_ram_40099fac) / fVar11);
      *(undefined8 *)(unaff_s1 + 4) = uVar12;
      unaff_s1[2] = fVar8;
    }
    if ((float)*(undefined8 *)(unaff_s1 + 3) == fVar10) {
      uVar12 = *(undefined8 *)(unaff_s1 + 7);
    }
    else {
      uVar12 = FUN_ram_40000bd8((fVar10 * DAT_ram_40099fac) / fVar11);
      *(undefined8 *)(unaff_s1 + 7) = uVar12;
      unaff_s1[3] = fVar10;
    }
    fVar10 = _DAT_ram_40094638;
    fVar11 = (float)uVar12;
    fVar8 = fVar2 - fVar11;
    fVar7 = (float)unaff_s1[4];
    uVar12 = *(undefined8 *)(unaff_s1 + 5);
    uVar15 = *(ulonglong *)(unaff_s1 + 6);
    uVar13 = *(ulonglong *)(unaff_s1 + 8);
    if (unaff_s6 == 0) {
      pfVar5 = (float *)(iVar4 + (int)unaff_s0);
      if (unaff_s5 == 0) {
        do {
          fVar16 = (float)uVar12;
          uVar12 = *(undefined8 *)unaff_s0;
          pfVar3 = unaff_s0 + 1;
          fVar16 = (((float)uVar12 + (float)uVar15) - fVar16) * fVar7;
          uVar15 = (ulonglong)(uint)fVar16;
          fVar16 = fVar8 * fVar16 + fVar11 * (float)uVar13;
          uVar13 = (ulonglong)(uint)fVar16;
          *unaff_s0 = fVar16 * fVar10;
          unaff_s0 = pfVar3;
        } while (pfVar5 != pfVar3);
      }
      else if (unaff_s3 == (float *)0x0) {
        do {
          fVar16 = (float)uVar12;
          uVar12 = *(undefined8 *)unaff_s0;
          pfVar3 = unaff_s0 + 1;
          fVar16 = (((float)uVar12 + (float)uVar15) - fVar16) * fVar7;
          uVar15 = (ulonglong)(uint)fVar16;
          fVar16 = fVar8 * fVar16 + fVar11 * (float)uVar13;
          uVar13 = (ulonglong)(uint)fVar16;
          *unaff_s0 = fVar16 * fVar10;
          unaff_s0 = pfVar3;
        } while (pfVar5 != pfVar3);
      }
      else {
        do {
          fVar16 = (float)uVar12;
          uVar12 = *(undefined8 *)unaff_s0;
          pfVar3 = unaff_s0 + 1;
          fVar16 = (((float)uVar12 + (float)uVar15) - fVar16) * fVar7;
          uVar15 = (ulonglong)(uint)fVar16;
          fVar16 = fVar8 * fVar16 + fVar11 * (float)uVar13;
          uVar13 = (ulonglong)(uint)fVar16;
          fVar16 = fVar16 * fVar10;
          *unaff_s0 = fVar16;
          *unaff_s3 = fVar16;
          unaff_s0 = pfVar3;
          unaff_s3 = unaff_s3 + 1;
        } while (pfVar5 != pfVar3);
      }
      *(undefined8 *)(unaff_s1 + 5) = uVar12;
      *(ulonglong *)(unaff_s1 + 6) = uVar15;
      *(ulonglong *)(unaff_s1 + 8) = uVar13;
      return;
    }
    pfVar5 = unaff_s0;
    if (unaff_s5 == 0) {
      do {
        fVar9 = (float)uVar12;
        uVar12 = *(undefined8 *)pfVar5;
        fVar9 = (((float)uVar12 + (float)uVar15) - fVar9) * fVar7;
        uVar15 = (ulonglong)(uint)fVar9;
        fVar9 = fVar8 * fVar9 + fVar11 * (float)uVar13;
        uVar13 = (ulonglong)(uint)fVar9;
        if (iVar6 != 0) {
          iVar6 = iVar6 + -1;
          if (iVar6 == 0) {
            bVar1 = fVar16 < 0.0;
            unaff_fs0 = (ulonglong)(uint)fVar2;
            fVar16 = 0.0;
            if (bVar1) {
              unaff_fs0 = 0;
            }
          }
          else {
            unaff_fs0 = (ulonglong)(uint)((float)unaff_fs0 + fVar16);
          }
        }
        pfVar3 = pfVar5 + 1;
        *pfVar5 = fVar9 * fVar10 * (float)unaff_fs0;
        pfVar5 = pfVar3;
      } while ((float *)(iVar4 + (int)unaff_s0) != pfVar3);
    }
    else {
      if (unaff_s3 == (float *)0x0) {
        FUN_ram_4005f57c();
        return;
      }
      do {
        fVar9 = (float)uVar12;
        uVar12 = *(undefined8 *)pfVar5;
        fVar9 = (((float)uVar12 + (float)uVar15) - fVar9) * fVar7;
        uVar15 = (ulonglong)(uint)fVar9;
        fVar9 = fVar8 * fVar9 + fVar11 * (float)uVar13;
        uVar13 = (ulonglong)(uint)fVar9;
        if (iVar6 != 0) {
          iVar6 = iVar6 + -1;
          if (iVar6 == 0) {
            bVar1 = fVar16 < 0.0;
            unaff_fs0 = (ulonglong)(uint)fVar2;
            fVar16 = 0.0;
            if (bVar1) {
              unaff_fs0 = 0;
            }
          }
          else {
            unaff_fs0 = (ulonglong)(uint)((float)unaff_fs0 + fVar16);
          }
        }
        pfVar3 = pfVar5 + 1;
        fVar9 = fVar9 * fVar10 * (float)unaff_fs0;
        *pfVar5 = fVar9;
        *unaff_s3 = fVar9;
        pfVar5 = pfVar3;
        unaff_s3 = unaff_s3 + 1;
      } while ((float *)(iVar4 + (int)unaff_s0) != pfVar3);
    }
    *(undefined8 *)(unaff_s1 + 5) = uVar12;
    *(ulonglong *)(unaff_s1 + 6) = uVar15;
    *(ulonglong *)(unaff_s1 + 8) = uVar13;
  }
  else {
    if (DAT_ram_40094604 < fVar10) {
      fVar10 = DAT_ram_40094604;
      if (DAT_ram_40094628 < fVar8) goto LAB_ram_4005f632;
    }
    else if ((DAT_ram_40094628 < fVar8) || (fVar10 < DAT_ram_4009a008)) goto LAB_ram_4005f632;
LAB_ram_4005f8e8:
    if ((unaff_s5 == 0) || (unaff_s2 == (undefined8 *)0x0)) {
      if (param_2 != unaff_s0) {
        FUN_ram_4000304c();
        param_1 = *unaff_s1;
      }
      FUN_ram_40076580(param_1);
      fVar2 = _DAT_ram_40094638;
      if (unaff_s6 == 0) {
        if (unaff_s5 == 0) {
          pfVar5 = unaff_s0;
          do {
            pfVar3 = pfVar5 + 1;
            *pfVar5 = (float)*(undefined8 *)pfVar5 * fVar2;
            pfVar5 = pfVar3;
          } while (pfVar3 != unaff_s0 + unaff_s8);
          return;
        }
        goto LAB_ram_4005fa16;
      }
      if (unaff_s5 == 0) {
        pfVar5 = unaff_s0;
        do {
          if (iVar6 != 0) {
            iVar6 = iVar6 + -1;
            if (iVar6 == 0) {
              bVar1 = 0.0 <= fVar16;
              fVar16 = 0.0;
              unaff_fs0 = 0;
              if (bVar1) {
                unaff_fs0 = (ulonglong)(uint)DAT_ram_40094604;
              }
            }
            else {
              unaff_fs0 = (ulonglong)(uint)((float)unaff_fs0 + fVar16);
            }
          }
          pfVar3 = pfVar5 + 1;
          *pfVar5 = (float)*(undefined8 *)pfVar5 * fVar2 * (float)unaff_fs0;
          pfVar5 = pfVar3;
        } while (pfVar3 != unaff_s0 + unaff_s8);
        goto LAB_ram_4005f5be;
      }
    }
    else {
      pfVar3 = param_2 + unaff_s8;
      pfVar5 = unaff_s0;
      do {
        uVar14 = *(undefined8 *)param_2;
        uVar12 = *unaff_s2;
        param_2 = param_2 + 1;
        unaff_s2 = (undefined8 *)((int)unaff_s2 + 4);
        *pfVar5 = ((float)uVar14 + (float)uVar12) * fVar7;
        pfVar5 = pfVar5 + 1;
      } while (param_2 != pfVar3);
      FUN_ram_40076580();
      if (unaff_s6 == 0) {
LAB_ram_4005fa16:
        fVar16 = _DAT_ram_40094638;
        pfVar5 = unaff_s0;
        if (unaff_s3 != (float *)0x0) {
          do {
            pfVar3 = pfVar5 + 1;
            fVar2 = (float)*(undefined8 *)pfVar5 * fVar16;
            *pfVar5 = fVar2;
            *unaff_s3 = fVar2;
            pfVar5 = pfVar3;
            unaff_s3 = unaff_s3 + 1;
          } while (pfVar3 != unaff_s0 + unaff_s8);
          return;
        }
        do {
          pfVar3 = pfVar5 + 1;
          *pfVar5 = (float)*(undefined8 *)pfVar5 * fVar16;
          pfVar5 = pfVar3;
        } while (pfVar3 != unaff_s0 + unaff_s8);
        return;
      }
    }
    fVar2 = _DAT_ram_40094638;
    pfVar5 = unaff_s0 + unaff_s8;
    if (unaff_s3 == (float *)0x0) {
      do {
        if (iVar6 != 0) {
          iVar6 = iVar6 + -1;
          if (iVar6 == 0) {
            bVar1 = 0.0 <= fVar16;
            fVar16 = 0.0;
            unaff_fs0 = 0;
            if (bVar1) {
              unaff_fs0 = (ulonglong)(uint)DAT_ram_40094604;
            }
          }
          else {
            unaff_fs0 = (ulonglong)(uint)((float)unaff_fs0 + fVar16);
          }
        }
        pfVar3 = unaff_s0 + 1;
        *unaff_s0 = (float)*(undefined8 *)unaff_s0 * fVar2 * (float)unaff_fs0;
        unaff_s0 = pfVar3;
      } while (pfVar3 != pfVar5);
    }
    else {
      do {
        if (iVar6 != 0) {
          iVar6 = iVar6 + -1;
          if (iVar6 == 0) {
            bVar1 = 0.0 <= fVar16;
            fVar16 = 0.0;
            unaff_fs0 = 0;
            if (bVar1) {
              unaff_fs0 = (ulonglong)(uint)DAT_ram_40094604;
            }
          }
          else {
            unaff_fs0 = (ulonglong)(uint)((float)unaff_fs0 + fVar16);
          }
        }
        pfVar3 = unaff_s0 + 1;
        fVar7 = (float)*(undefined8 *)unaff_s0 * fVar2 * (float)unaff_fs0;
        *unaff_s0 = fVar7;
        *unaff_s3 = fVar7;
        unaff_s0 = pfVar3;
        unaff_s3 = unaff_s3 + 1;
      } while (pfVar3 != pfVar5);
    }
  }
LAB_ram_4005f5be:
  *(ulonglong *)(unaff_s1 + 0xb) = unaff_fs0;
  unaff_s1[0xc] = fVar16;
  unaff_s1[0xd] = iVar6;
  return;
}


/* NanoCore 1.11, address 0x4005f57c.
 * REA evidence: ev_54fb48ac311320464d8f19d0e4f8cda47193198635247d1071faeafbedd9105a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005f57c(float param_1,undefined8 param_2,float param_3,undefined8 param_4,
                     ulonglong param_5,ulonglong param_6)

{
  bool bVar1;
  float fVar2;
  float *unaff_s0;
  float *pfVar3;
  int unaff_s1;
  float *unaff_s4;
  int unaff_s7;
  float in_ft0;
  float in_ft1;
  float in_ft2;
  ulonglong unaff_fs0;
  float unaff_fs2;
  uint unaff_fs5;
  
  do {
    fVar2 = (float)param_4;
    param_4 = *(undefined8 *)unaff_s0;
    fVar2 = (((float)param_4 + (float)param_6) - fVar2) * in_ft0;
    param_6 = (ulonglong)(uint)fVar2;
    fVar2 = fVar2 * in_ft1 + param_1 * (float)param_5;
    param_5 = (ulonglong)(uint)fVar2;
    if (unaff_s7 != 0) {
      unaff_s7 = unaff_s7 + -1;
      if (unaff_s7 == 0) {
        bVar1 = unaff_fs2 < in_ft2;
        unaff_fs0 = (ulonglong)unaff_fs5;
        unaff_fs2 = 0.0;
        if (bVar1) {
          unaff_fs0 = 0;
        }
      }
      else {
        unaff_fs0 = (ulonglong)(uint)((float)unaff_fs0 + unaff_fs2);
      }
    }
    pfVar3 = unaff_s0 + 1;
    *unaff_s0 = fVar2 * param_3 * (float)unaff_fs0;
    unaff_s0 = pfVar3;
  } while (unaff_s4 != pfVar3);
  *(undefined8 *)(unaff_s1 + 0x14) = param_4;
  *(ulonglong *)(unaff_s1 + 0x18) = param_6;
  *(ulonglong *)(unaff_s1 + 0x20) = param_5;
  *(ulonglong *)(unaff_s1 + 0x2c) = unaff_fs0;
  *(float *)(unaff_s1 + 0x30) = unaff_fs2;
  *(int *)(unaff_s1 + 0x34) = unaff_s7;
  return;
}


/* NanoCore 1.11, address 0x4005f5f0.
 * REA evidence: ev_a7e16ff1905d71194244469666e48021cb48b8d4a8d547df1af0d199caaba52f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005f5f0(void)

{
  FUN_ram_4005f54e();
  return;
}


/* NanoCore 1.11, address 0x4005fb2e.
 * REA evidence: ev_5bb63e02a74b6f4792c8a6220d6618e7b5cd813c4a753a1248c9dd6492a7d8f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005fb2e(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    memset(param_1,0,0x304);
    *param_1 = DAT_ram_4009a014;
    param_1[1] = DAT_ram_4009a018;
    *(undefined2 *)(param_1 + 2) = 0x908;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4005fb6e.
 * REA evidence: ev_0756d56a7737e0f1f3d3ebe3f6c0904425672a69fed57906e9b78023931c882f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005fb6e(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    memset(param_1,0,0x304);
    uVar2 = DAT_ram_4009a018;
    uVar1 = DAT_ram_4009a014;
    *param_1 = DAT_ram_4009a014;
    param_1[1] = uVar2;
    *(undefined2 *)(param_1 + 2) = 0x908;
    memset(param_1 + 0xc1,0,0x304);
    param_1[0xc1] = uVar1;
    param_1[0xc2] = uVar2;
    *(undefined2 *)(param_1 + 0xc3) = 0x908;
    memset(param_1 + 0x182,0,0x1e0);
    memset(param_1 + 0x1fa,0,0x28);
    *(undefined1 *)(param_1 + 0x204) = 0;
    *(undefined1 *)((int)param_1 + 0x811) = 0;
    *(undefined1 *)((int)param_1 + 0x812) = 0;
    *(undefined1 *)((int)param_1 + 0x813) = 0;
    *(undefined1 *)(param_1 + 0x205) = 0;
    *(undefined1 *)((int)param_1 + 0x815) = 0;
    *(undefined1 *)((int)param_1 + 0x816) = 0;
    *(undefined1 *)((int)param_1 + 0x817) = 0;
    *(undefined1 *)(param_1 + 0x206) = 0;
    *(undefined1 *)((int)param_1 + 0x819) = 0;
    *(undefined1 *)((int)param_1 + 0x81a) = 0;
    *(undefined1 *)((int)param_1 + 0x81b) = 0;
    *(undefined1 *)(param_1 + 0x207) = 0;
    *(undefined1 *)((int)param_1 + 0x81d) = 0;
    *(undefined1 *)((int)param_1 + 0x81e) = 0;
    *(undefined1 *)((int)param_1 + 0x81f) = 0;
    *(undefined1 *)(param_1 + 0x208) = 0;
    *(undefined1 *)((int)param_1 + 0x821) = 0;
    *(undefined1 *)((int)param_1 + 0x822) = 0;
    *(undefined1 *)((int)param_1 + 0x823) = 0;
    *(undefined1 *)(param_1 + 0x209) = 0;
    *(undefined1 *)((int)param_1 + 0x825) = 0;
    *(undefined1 *)((int)param_1 + 0x826) = 0;
    *(undefined1 *)((int)param_1 + 0x827) = 0;
    *(undefined1 *)(param_1 + 0x20a) = 0;
    *(undefined1 *)((int)param_1 + 0x829) = 0;
    *(undefined1 *)((int)param_1 + 0x82a) = 0;
    *(undefined1 *)((int)param_1 + 0x82b) = 0;
    *(undefined1 *)(param_1 + 0x20b) = 0;
    *(undefined1 *)((int)param_1 + 0x82d) = 0;
    memset(param_1 + 0x20c,0,0x28);
    *(undefined2 *)(param_1 + 0x216) = 0;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4005fca2.
 * REA evidence: ev_fe23ede7301cd61886b9487ab2cdd43fa48bff15d889ca48868485bfd048770e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005fca2(int param_1)

{
  if (param_1 != 0) {
    return param_1 + (*(byte *)(param_1 + 0x858) ^ 1) * 0x304;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4005fcbe.
 * REA evidence: ev_6a0c39200cdbb7f03cc2f99278cc6924ab3e8b3930103b42c4a85f124d8e15d4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005fcbe(int param_1)

{
  if (param_1 != 0) {
    return param_1 + (uint)*(byte *)(param_1 + 0x858) * 0x304;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4005fcd6.
 * REA evidence: ev_0e7694dc6a8072565121e77fa8af80ee0429b2f813ed2fdae4003919a03e2277
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005fcd6(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 != 0) {
    uVar6 = (uint)*(byte *)(param_1 + 0x858);
    uVar1 = uVar6 ^ 1;
    iVar8 = uVar6 * 0x304;
    uVar5 = 1;
    iVar7 = uVar1 * 0x304;
    iVar4 = param_1 + iVar8;
    iVar3 = param_1 + iVar7;
    if ((*(int *)(iVar3 + 0xc) == *(int *)(iVar4 + 0xc)) &&
       ((*(uint *)(iVar3 + 0x10) & 0xffff) == (*(uint *)(iVar4 + 0x10) & 0xffff))) {
      if (*(int *)(iVar3 + 0x50) == *(int *)(iVar4 + 0x50)) {
        iVar3 = FUN_ram_40002fec(iVar8 + 0x14 + param_1,iVar7 + 0x14 + param_1,0x30);
        uVar5 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x304;
    uVar2 = 1;
    iVar4 = param_1 + uVar1 * 0x304;
    *(uint *)(iVar4 + 0x54) = *(int *)(iVar3 + 0x54) + uVar5;
    if ((*(int *)(iVar3 + 0x58) == *(int *)(iVar4 + 0x58)) &&
       ((*(uint *)(iVar3 + 0x5c) & 0xffff) == (*(uint *)(iVar4 + 0x5c) & 0xffff))) {
      if (*(int *)(iVar3 + 0x9c) == *(int *)(iVar4 + 0x9c)) {
        iVar3 = FUN_ram_40002fec(iVar8 + 0x60 + param_1,iVar7 + 0x60 + param_1,0x30);
        uVar2 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x304;
    uVar5 = 1;
    iVar4 = param_1 + uVar1 * 0x304;
    *(uint *)(iVar4 + 0xa0) = *(int *)(iVar3 + 0xa0) + uVar2;
    if ((*(int *)(iVar3 + 0xa4) == *(int *)(iVar4 + 0xa4)) &&
       ((*(uint *)(iVar3 + 0xa8) & 0xffff) == (*(uint *)(iVar4 + 0xa8) & 0xffff))) {
      if (*(int *)(iVar3 + 0xe8) == *(int *)(iVar4 + 0xe8)) {
        iVar3 = FUN_ram_40002fec(iVar8 + 0xac + param_1,iVar7 + 0xac + param_1,0x30);
        uVar5 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x304;
    uVar2 = 1;
    iVar4 = param_1 + uVar1 * 0x304;
    *(uint *)(iVar4 + 0xec) = *(int *)(iVar3 + 0xec) + uVar5;
    if ((*(int *)(iVar3 + 0xf0) == *(int *)(iVar4 + 0xf0)) &&
       ((*(uint *)(iVar3 + 0xf4) & 0xffff) == (*(uint *)(iVar4 + 0xf4) & 0xffff))) {
      if (*(int *)(iVar3 + 0x134) == *(int *)(iVar4 + 0x134)) {
        iVar3 = FUN_ram_40002fec(iVar8 + 0xf8 + param_1,iVar7 + 0xf8 + param_1,0x30);
        uVar2 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x304;
    uVar5 = 1;
    iVar4 = param_1 + uVar1 * 0x304;
    *(uint *)(iVar4 + 0x138) = *(int *)(iVar3 + 0x138) + uVar2;
    if ((*(int *)(iVar3 + 0x13c) == *(int *)(iVar4 + 0x13c)) &&
       ((*(uint *)(iVar3 + 0x140) & 0xffff) == (*(uint *)(iVar4 + 0x140) & 0xffff))) {
      if (*(int *)(iVar3 + 0x180) == *(int *)(iVar4 + 0x180)) {
        iVar3 = FUN_ram_40002fec(iVar8 + 0x144 + param_1,iVar7 + 0x144 + param_1,0x30);
        uVar5 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x304;
    uVar2 = 1;
    iVar4 = param_1 + uVar1 * 0x304;
    *(uint *)(iVar4 + 0x184) = *(int *)(iVar3 + 0x184) + uVar5;
    if ((*(int *)(iVar3 + 0x188) == *(int *)(iVar4 + 0x188)) &&
       ((*(uint *)(iVar3 + 0x18c) & 0xffff) == (*(uint *)(iVar4 + 0x18c) & 0xffff))) {
      if (*(int *)(iVar3 + 0x1cc) == *(int *)(iVar4 + 0x1cc)) {
        iVar3 = FUN_ram_40002fec(iVar8 + 400 + param_1,iVar7 + 400 + param_1,0x30);
        uVar2 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x304;
    uVar5 = 1;
    iVar4 = param_1 + uVar1 * 0x304;
    *(uint *)(iVar4 + 0x1d0) = *(int *)(iVar3 + 0x1d0) + uVar2;
    if ((*(int *)(iVar3 + 0x1d4) == *(int *)(iVar4 + 0x1d4)) &&
       ((*(uint *)(iVar3 + 0x1d8) & 0xffff) == (*(uint *)(iVar4 + 0x1d8) & 0xffff))) {
      if (*(int *)(iVar3 + 0x218) == *(int *)(iVar4 + 0x218)) {
        iVar3 = FUN_ram_40002fec(iVar8 + 0x1dc + param_1,iVar7 + 0x1dc + param_1,0x30);
        uVar5 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x304;
    uVar2 = 1;
    iVar4 = param_1 + uVar1 * 0x304;
    *(uint *)(iVar4 + 0x21c) = *(int *)(iVar3 + 0x21c) + uVar5;
    if ((*(int *)(iVar3 + 0x220) == *(int *)(iVar4 + 0x220)) &&
       ((*(uint *)(iVar3 + 0x224) & 0xffff) == (*(uint *)(iVar4 + 0x224) & 0xffff))) {
      if (*(int *)(iVar3 + 0x264) == *(int *)(iVar4 + 0x264)) {
        iVar3 = FUN_ram_40002fec(iVar8 + 0x228 + param_1,iVar7 + 0x228 + param_1,0x30);
        uVar2 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x304;
    uVar5 = 1;
    iVar4 = param_1 + uVar1 * 0x304;
    *(uint *)(iVar4 + 0x268) = *(int *)(iVar3 + 0x268) + uVar2;
    if ((*(int *)(iVar3 + 0x26c) == *(int *)(iVar4 + 0x26c)) &&
       ((*(uint *)(iVar3 + 0x270) & 0xffff) == (*(uint *)(iVar4 + 0x270) & 0xffff))) {
      if (*(int *)(iVar3 + 0x2b0) == *(int *)(iVar4 + 0x2b0)) {
        iVar3 = FUN_ram_40002fec(iVar8 + 0x274 + param_1,iVar7 + 0x274 + param_1,0x30);
        uVar5 = (uint)(iVar3 != 0);
      }
    }
    iVar3 = param_1 + uVar6 * 0x304;
    uVar2 = 1;
    iVar4 = param_1 + uVar1 * 0x304;
    *(uint *)(iVar4 + 0x2b4) = *(int *)(iVar3 + 0x2b4) + uVar5;
    if ((*(int *)(iVar3 + 0x2b8) == *(int *)(iVar4 + 0x2b8)) &&
       ((*(uint *)(iVar3 + 700) & 0xffff) == (*(uint *)(iVar4 + 700) & 0xffff))) {
      if (*(int *)(iVar3 + 0x2fc) == *(int *)(iVar4 + 0x2fc)) {
        iVar3 = FUN_ram_40002fec(iVar8 + 0x2c0 + param_1,iVar7 + 0x2c0 + param_1,0x30);
        uVar2 = (uint)(iVar3 != 0);
      }
    }
    *(uint *)(param_1 + uVar1 * 0x304 + 0x300) = *(int *)(param_1 + uVar6 * 0x304 + 0x300) + uVar2;
    *(char *)(param_1 + 0x858) = (char)uVar1;
    return;
  }
  return;
}


