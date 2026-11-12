/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4005f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4005f2c4.
 * REA evidence: ev_f9f68dd4fabcd30fdf8fb920d37a7e4642f95d4a50f22b0537dcbbdfaf49fc9f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005f2c4(int *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                     int param_6,float *param_7,undefined4 param_8,char param_9,int param_10)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar13;
  
  if (param_2 == (float *)0x0) {
    return;
  }
  if (param_4 == (float *)0x0) {
    return;
  }
  if (param_6 == 0) {
    return;
  }
  if (param_10 != 0) {
    *(bool *)param_10 = param_9 != '\0';
  }
  fVar19 = DAT_ram_4009675c;
  if ((param_1 == (int *)0x0) || (iVar4 = *param_1, iVar4 == 0)) {
    if (param_2 != param_4) {
      FUN_ram_4000303c(param_4,param_2,param_6 << 2);
    }
    if (param_9 == '\0') {
      return;
    }
    if (param_3 == (float *)0x0) {
      return;
    }
    if (param_5 == (float *)0x0) {
      return;
    }
    if (param_3 == param_5) {
      return;
    }
    FUN_ram_4000303c(param_5,param_3,param_6 << 2);
    return;
  }
  iVar6 = param_1[0xd];
  uVar10 = *(ulonglong *)(param_1 + 0xb);
  bVar1 = (float)uVar10 < DAT_ram_4009f124;
  bVar2 = iVar6 != 0 || bVar1;
  iVar9 = param_1[0xd];
  fVar20 = (float)param_1[0xc];
  if (param_7 == (float *)0x0) {
    fVar11 = DAT_ram_40096760;
    if (param_9 == '\0') {
LAB_ram_4005f5f4:
      if (param_2 != param_4) {
        FUN_ram_4000303c(param_4,param_2,param_6 * 4);
        iVar4 = *param_1;
      }
      FUN_ram_40076bf0(iVar4,param_4,param_6);
      if (bVar2) {
        if (param_9 == '\0') {
          pfVar8 = param_4;
          do {
            if (iVar9 != 0) {
              iVar9 = iVar9 + -1;
              if (iVar9 == 0) {
                bVar1 = 0.0 <= fVar20;
                fVar20 = 0.0;
                uVar10 = 0;
                if (bVar1) {
                  uVar10 = (ulonglong)(uint)DAT_ram_4009672c;
                }
              }
              else {
                uVar10 = (ulonglong)(uint)((float)uVar10 + fVar20);
              }
            }
            pfVar5 = pfVar8 + 1;
            *pfVar8 = fVar11 * (float)*(undefined8 *)pfVar8 * (float)uVar10;
            pfVar8 = pfVar5;
          } while (param_4 + param_6 != pfVar5);
        }
        else {
LAB_ram_4005f890:
          pfVar8 = param_4;
          if (param_5 == (float *)0x0) {
            do {
              if (iVar9 != 0) {
                iVar9 = iVar9 + -1;
                if (iVar9 == 0) {
                  bVar1 = 0.0 <= fVar20;
                  fVar20 = 0.0;
                  uVar10 = 0;
                  if (bVar1) {
                    uVar10 = (ulonglong)(uint)DAT_ram_4009672c;
                  }
                }
                else {
                  uVar10 = (ulonglong)(uint)((float)uVar10 + fVar20);
                }
              }
              pfVar5 = pfVar8 + 1;
              *pfVar8 = fVar11 * (float)*(undefined8 *)pfVar8 * (float)uVar10;
              pfVar8 = pfVar5;
            } while (param_4 + param_6 != pfVar5);
          }
          else {
            do {
              if (iVar9 != 0) {
                iVar9 = iVar9 + -1;
                if (iVar9 == 0) {
                  bVar1 = 0.0 <= fVar20;
                  fVar20 = 0.0;
                  uVar10 = 0;
                  if (bVar1) {
                    uVar10 = (ulonglong)(uint)DAT_ram_4009672c;
                  }
                }
                else {
                  uVar10 = (ulonglong)(uint)((float)uVar10 + fVar20);
                }
              }
              pfVar5 = pfVar8 + 1;
              fVar19 = fVar11 * (float)*(undefined8 *)pfVar8 * (float)uVar10;
              *pfVar8 = fVar19;
              *param_5 = fVar19;
              pfVar8 = pfVar5;
              param_5 = param_5 + 1;
            } while (param_4 + param_6 != pfVar5);
          }
        }
        goto LAB_ram_4005f38e;
      }
      if (param_9 == '\0') {
        pfVar8 = param_4;
        do {
          pfVar5 = pfVar8 + 1;
          *pfVar8 = (float)*(undefined8 *)pfVar8 * fVar11;
          pfVar8 = pfVar5;
        } while (param_4 + param_6 != pfVar5);
        return;
      }
    }
    else {
LAB_ram_4005f7d2:
      if (param_3 == (float *)0x0) goto LAB_ram_4005f5f4;
      pfVar5 = param_2 + param_6;
      pfVar8 = param_4;
      do {
        uVar17 = *(undefined8 *)param_2;
        uVar15 = *(undefined8 *)param_3;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        *pfVar8 = ((float)uVar17 + (float)uVar15) * fVar19;
        pfVar8 = pfVar8 + 1;
      } while (pfVar5 != param_2);
      FUN_ram_40076bf0(iVar4,param_4,param_6);
      if (bVar2) goto LAB_ram_4005f890;
    }
    pfVar8 = param_4 + param_6;
    if (param_5 == (float *)0x0) {
      do {
        pfVar5 = param_4 + 1;
        *param_4 = (float)*(undefined8 *)param_4 * fVar11;
        param_4 = pfVar5;
      } while (pfVar8 != pfVar5);
    }
    else {
      do {
        pfVar5 = param_4 + 1;
        fVar19 = fVar11 * (float)*(undefined8 *)param_4;
        *param_4 = fVar19;
        *param_5 = fVar19;
        param_4 = pfVar5;
        param_5 = param_5 + 1;
      } while (pfVar8 != pfVar5);
    }
  }
  else {
    fVar12 = *param_7;
    if (fVar12 < 0.0) {
      fVar12 = 0.0;
    }
    else if (DAT_ram_4009672c < fVar12) {
      fVar12 = DAT_ram_4009672c;
    }
    fVar14 = param_7[1];
    if (fVar14 < 0.0) {
      fVar14 = 0.0;
    }
    else if (DAT_ram_4009672c < fVar14) {
      fVar14 = DAT_ram_4009672c;
    }
    fVar11 = param_7[2];
    if (fVar11 < 0.0) {
      fVar11 = 0.0;
    }
    else if (DAT_ram_4009672c < fVar11) {
      fVar11 = DAT_ram_4009672c;
    }
    if ((fVar12 <= DAT_ram_40096750) && (DAT_ram_4009f128 <= fVar14)) {
      if (param_9 != '\0') goto LAB_ram_4005f7d2;
      goto LAB_ram_4005f5f4;
    }
    if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
      if (param_2 == param_4) {
        iVar7 = param_6 << 2;
      }
      else {
        iVar7 = param_6 << 2;
        FUN_ram_4000303c(param_4,param_2,iVar7);
        iVar4 = *param_1;
        fVar19 = DAT_ram_4009675c;
      }
    }
    else {
      iVar7 = param_6 * 4;
      pfVar5 = param_2 + param_6;
      pfVar8 = param_4;
      do {
        uVar17 = *(undefined8 *)param_2;
        uVar15 = *(undefined8 *)param_3;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        *pfVar8 = ((float)uVar17 + (float)uVar15) * fVar19;
        pfVar8 = pfVar8 + 1;
      } while (param_2 != pfVar5);
    }
    FUN_ram_40076bf0(iVar4,param_4,param_6);
    fVar3 = DAT_ram_4009672c;
    fVar21 = (float)param_1[1];
    if ((float)param_1[1] <= DAT_ram_4009672c) {
      fVar21 = DAT_ram_4009f078;
    }
    fVar13 = DAT_ram_4009f114;
    if ((0.0 <= fVar12) && (fVar13 = DAT_ram_4009f118, fVar12 <= DAT_ram_4009672c)) {
      fVar13 = fVar12 * DAT_ram_4009f12c + DAT_ram_4009f114;
    }
    fVar12 = (float)FUN_ram_40000bd8(fVar13);
    fVar13 = DAT_ram_4009f11c;
    if ((0.0 <= fVar14) && (fVar13 = DAT_ram_4009f120, fVar14 <= fVar3)) {
      fVar13 = fVar14 * DAT_ram_4009f130 + DAT_ram_4009f11c;
    }
    fVar14 = (float)FUN_ram_40000bd8(fVar13);
    fVar19 = fVar21 * fVar19 * DAT_ram_4009b174;
    if (fVar19 < fVar12) {
      fVar12 = fVar19;
    }
    if (fVar19 < fVar14) {
      fVar14 = fVar19;
    }
    if ((float)*(undefined8 *)(param_1 + 2) != fVar12) {
      uVar15 = FUN_ram_40000bd8((fVar12 * DAT_ram_4009f0b4) / fVar21);
      *(undefined8 *)(param_1 + 4) = uVar15;
      param_1[2] = (int)fVar12;
    }
    if ((float)*(undefined8 *)(param_1 + 3) == fVar14) {
      uVar15 = *(undefined8 *)(param_1 + 7);
    }
    else {
      uVar15 = FUN_ram_40000bd8((fVar14 * DAT_ram_4009f0b4) / fVar21);
      *(undefined8 *)(param_1 + 7) = uVar15;
      param_1[3] = (int)fVar14;
    }
    fVar12 = (float)uVar15;
    fVar19 = fVar3 - fVar12;
    uVar15 = *(undefined8 *)(param_1 + 5);
    uVar18 = *(ulonglong *)(param_1 + 6);
    uVar16 = *(ulonglong *)(param_1 + 8);
    fVar14 = (float)*(undefined8 *)(param_1 + 4);
    if (iVar6 == 0 && !bVar1) {
      pfVar8 = (float *)(iVar7 + (int)param_4);
      if (param_9 == '\0') {
        do {
          fVar20 = (float)uVar15;
          uVar15 = *(undefined8 *)param_4;
          pfVar5 = param_4 + 1;
          fVar20 = (((float)uVar15 + (float)uVar18) - fVar20) * fVar14;
          uVar18 = (ulonglong)(uint)fVar20;
          fVar20 = fVar19 * fVar20 + (float)uVar16 * fVar12;
          uVar16 = (ulonglong)(uint)fVar20;
          *param_4 = fVar11 * fVar20;
          param_4 = pfVar5;
        } while (pfVar5 != pfVar8);
      }
      else if (param_5 == (float *)0x0) {
        do {
          fVar20 = (float)uVar15;
          uVar15 = *(undefined8 *)param_4;
          pfVar5 = param_4 + 1;
          fVar20 = (((float)uVar15 + (float)uVar18) - fVar20) * fVar14;
          uVar18 = (ulonglong)(uint)fVar20;
          fVar20 = fVar20 * fVar19 + (float)uVar16 * fVar12;
          uVar16 = (ulonglong)(uint)fVar20;
          *param_4 = fVar11 * fVar20;
          param_4 = pfVar5;
        } while (pfVar5 != pfVar8);
      }
      else {
        do {
          fVar20 = (float)uVar15;
          uVar15 = *(undefined8 *)param_4;
          pfVar5 = param_4 + 1;
          fVar20 = (((float)uVar15 + (float)uVar18) - fVar20) * fVar14;
          uVar18 = (ulonglong)(uint)fVar20;
          fVar20 = fVar19 * fVar20 + fVar12 * (float)uVar16;
          uVar16 = (ulonglong)(uint)fVar20;
          fVar20 = fVar11 * fVar20;
          *param_4 = fVar20;
          *param_5 = fVar20;
          param_4 = pfVar5;
          param_5 = param_5 + 1;
        } while (pfVar5 != pfVar8);
      }
      *(undefined8 *)(param_1 + 5) = uVar15;
      *(ulonglong *)(param_1 + 6) = uVar18;
      *(ulonglong *)(param_1 + 8) = uVar16;
      return;
    }
    pfVar8 = (float *)(iVar7 + (int)param_4);
    if (param_9 == '\0') {
      do {
        fVar21 = (float)uVar15;
        uVar15 = *(undefined8 *)param_4;
        fVar21 = (((float)uVar15 + (float)uVar18) - fVar21) * fVar14;
        uVar18 = (ulonglong)(uint)fVar21;
        fVar21 = fVar19 * fVar21 + fVar12 * (float)uVar16;
        uVar16 = (ulonglong)(uint)fVar21;
        if (iVar9 != 0) {
          iVar9 = iVar9 + -1;
          if (iVar9 == 0) {
            bVar1 = fVar20 < 0.0;
            uVar10 = (ulonglong)(uint)fVar3;
            fVar20 = 0.0;
            if (bVar1) {
              uVar10 = 0;
            }
          }
          else {
            uVar10 = (ulonglong)(uint)((float)uVar10 + fVar20);
          }
        }
        pfVar5 = param_4 + 1;
        *param_4 = fVar21 * fVar11 * (float)uVar10;
        param_4 = pfVar5;
      } while (pfVar5 != pfVar8);
    }
    else if (param_5 == (float *)0x0) {
      do {
        fVar21 = (float)uVar15;
        uVar15 = *(undefined8 *)param_4;
        fVar21 = (((float)uVar18 + (float)uVar15) - fVar21) * fVar14;
        uVar18 = (ulonglong)(uint)fVar21;
        fVar21 = fVar19 * fVar21 + fVar12 * (float)uVar16;
        uVar16 = (ulonglong)(uint)fVar21;
        if (iVar9 != 0) {
          iVar9 = iVar9 + -1;
          if (iVar9 == 0) {
            bVar1 = fVar20 < 0.0;
            uVar10 = (ulonglong)(uint)fVar3;
            fVar20 = 0.0;
            if (bVar1) {
              uVar10 = 0;
            }
          }
          else {
            uVar10 = (ulonglong)(uint)((float)uVar10 + fVar20);
          }
        }
        pfVar5 = param_4 + 1;
        *param_4 = fVar11 * fVar21 * (float)uVar10;
        param_4 = pfVar5;
      } while (pfVar5 != pfVar8);
    }
    else {
      do {
        fVar21 = (float)uVar15;
        uVar15 = *(undefined8 *)param_4;
        fVar21 = (((float)uVar15 + (float)uVar18) - fVar21) * fVar14;
        uVar18 = (ulonglong)(uint)fVar21;
        fVar21 = fVar19 * fVar21 + fVar12 * (float)uVar16;
        uVar16 = (ulonglong)(uint)fVar21;
        if (iVar9 != 0) {
          iVar9 = iVar9 + -1;
          if (iVar9 == 0) {
            bVar1 = fVar20 < 0.0;
            uVar10 = (ulonglong)(uint)fVar3;
            fVar20 = 0.0;
            if (bVar1) {
              uVar10 = 0;
            }
          }
          else {
            uVar10 = (ulonglong)(uint)((float)uVar10 + fVar20);
          }
        }
        pfVar5 = param_4 + 1;
        fVar21 = fVar11 * fVar21 * (float)uVar10;
        *param_4 = fVar21;
        *param_5 = fVar21;
        param_4 = pfVar5;
        param_5 = param_5 + 1;
      } while (pfVar5 != pfVar8);
    }
    *(undefined8 *)(param_1 + 5) = uVar15;
    *(ulonglong *)(param_1 + 6) = uVar18;
    *(ulonglong *)(param_1 + 8) = uVar16;
LAB_ram_4005f38e:
    *(ulonglong *)(param_1 + 0xb) = uVar10;
    param_1[0xc] = (int)fVar20;
    param_1[0xd] = iVar9;
  }
  return;
}


/* NanoCore 1.12, address 0x4005f91a.
 * REA evidence: ev_b98afa65cb471424d7273f52cfda9a18e741662db87b65244feda6ae61777f4f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005f91a(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    memset(param_1,0,0x308);
    *param_1 = DAT_ram_4009f134;
    param_1[1] = DAT_ram_4009f138;
    *(undefined2 *)(param_1 + 2) = 0x908;
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4005f95a.
 * REA evidence: ev_3e44ce566287b05ddd41830c373c20ee3ad5ee537cb23d5c1f149017d9b2071f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005f95a(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    memset(param_1,0,0x308);
    uVar2 = DAT_ram_4009f138;
    uVar1 = DAT_ram_4009f134;
    *param_1 = DAT_ram_4009f134;
    param_1[1] = uVar2;
    *(undefined2 *)(param_1 + 2) = 0x908;
    memset(param_1 + 0xc2,0,0x308);
    param_1[0xc2] = uVar1;
    param_1[0xc3] = uVar2;
    *(undefined2 *)(param_1 + 0xc4) = 0x908;
    memset(param_1 + 0x184,0,0x1e0);
    memset(param_1 + 0x1fc,0,0x28);
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
    *(undefined1 *)((int)param_1 + 0x82e) = 0;
    *(undefined1 *)((int)param_1 + 0x82f) = 0;
    *(undefined1 *)(param_1 + 0x20c) = 0;
    *(undefined1 *)((int)param_1 + 0x831) = 0;
    *(undefined1 *)((int)param_1 + 0x832) = 0;
    *(undefined1 *)((int)param_1 + 0x833) = 0;
    *(undefined1 *)(param_1 + 0x20d) = 0;
    *(undefined1 *)((int)param_1 + 0x835) = 0;
    memset(param_1 + 0x20e,0,0x28);
    *(undefined2 *)(param_1 + 0x218) = 0;
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4005ff04.
 * REA evidence: ev_51bd997d8a9935d8936e0baefd0716a6a5cf04d6d403312fdb4e0fe817107ae7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005ff04(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 0xc) {
    if (param_1 == 4) {
      uVar1 = FUN_ram_40070e82(param_2,param_3);
      return uVar1;
    }
    if (param_1 == 5) {
      uVar1 = FUN_ram_40065810(param_2,param_3);
      return uVar1;
    }
  }
  return 0;
}


/* NanoCore 1.12, address 0x4005ff48.
 * REA evidence: ev_54ffe19363a3d3414005e35b9b993924eb597da46f65c265b29d7d8656813482
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005ff48(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}


/* NanoCore 1.12, address 0x4005ff6c.
 * REA evidence: ev_270ec4425fa1733874da830a5ff44a563748a8b19ba9d8efb3a70cf5c27ca072
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005ff6c(undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  float fVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = DAT_ram_40099f50;
  uVar1 = DAT_ram_40099f38;
  fVar6 = DAT_ram_4009672c;
  if (param_7 == (undefined8 *)0x0) {
    return;
  }
  fVar5 = DAT_ram_4009672c;
  if (DAT_ram_4009672c <= param_2) {
    fVar5 = param_2;
  }
  if ((float)param_3 < 0.0) {
    param_3 = 0;
  }
  if ((float)param_4 < 0.0) {
    param_4 = 0;
  }
  if ((float)param_5 < 0.0) {
    param_5 = 0;
  }
  if (((((float)param_7[1] == (float)param_1) &&
       ((float)*(undefined8 *)((int)param_7 + 0xc) == fVar5)) &&
      ((float)param_7[2] == (float)param_3)) &&
     ((((float)*(undefined8 *)((int)param_7 + 0x14) == (float)param_4 &&
       ((float)param_7[3] == (float)param_5)) &&
      ((float)*(undefined8 *)((int)param_7 + 0x1c) == (float)param_6)))) {
    return;
  }
  param_7[1] = param_1;
  *(float *)((int)param_7 + 0xc) = fVar5;
  param_7[2] = param_3;
  *(undefined8 *)((int)param_7 + 0x14) = param_4;
  param_7[3] = param_5;
  *(undefined8 *)((int)param_7 + 0x1c) = param_6;
  uVar3 = FUN_ram_40000d44(uVar1,(float)param_6 / fVar2);
  fVar5 = (float)param_7[2] * DAT_ram_4009675c;
  param_7[4] = uVar3 & 0xffffffff;
  uVar4 = FUN_ram_40000d44(uVar1,(-fVar5 + (float)param_7[1]) / fVar2);
  *(undefined8 *)((int)param_7 + 0x24) = uVar4;
  fVar2 = (float)*param_7;
  if (fVar2 <= fVar6) {
    fVar5 = (float)*(undefined8 *)((int)param_7 + 0x14);
    fVar2 = fVar6;
  }
  else {
    fVar5 = (float)*(undefined8 *)((int)param_7 + 0x14);
  }
  if (fVar5 <= 0.0) {
    *(undefined4 *)(param_7 + 5) = 0;
    fVar6 = (float)param_7[3];
  }
  else {
    uVar4 = FUN_ram_40000bd8(DAT_ram_40096728 / (fVar5 * DAT_ram_4009f0ac * fVar2));
    param_7[5] = uVar4;
    fVar6 = (float)param_7[3];
  }
  if (0.0 < fVar6) {
    uVar4 = FUN_ram_40000bd8(DAT_ram_40096728 / (fVar6 * DAT_ram_4009f0ac * fVar2));
    *(undefined8 *)((int)param_7 + 0x2c) = uVar4;
    return;
  }
  *(undefined4 *)((int)param_7 + 0x2c) = 0;
  return;
}


