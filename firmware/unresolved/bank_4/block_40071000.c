/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40071000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40071230.
 * REA evidence: ev_5d4d0aa537957c2c09971891596b90f5e33be144ed364f114b4774e0824c51de
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40071230(float param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  if (param_2 != (ulonglong *)0x0) {
    memset(param_2,0,0x74d60);
    if (param_1 <= DAT_ram_40093094) {
      param_1 = DAT_ram_40092878;
    }
    uVar1 = (ulonglong)DAT_ram_40092818;
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


/* NanoCore 1.10, address 0x40071298.
 * REA evidence: ev_8cc25bd4bd37dc9c37362898e07ba364065764aef0d27fd732600031240c0882
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40071298(ulonglong *param_1,uint param_2)

{
  float fVar1;
  ulonglong uVar2;
  undefined4 uStack_10;
  
  if (param_1 == (ulonglong *)0x0) {
    return;
  }
  uVar2 = *param_1;
  fVar1 = (float)uVar2;
  if (7 < param_2) {
    if (fVar1 <= DAT_ram_40093094) {
      uVar2 = (ulonglong)DAT_ram_40092878;
    }
switchD_ram_400712e2_caseD_0:
    param_2 = 0;
    FUN_ram_4007b780(uVar2);
    goto LAB_ram_40071302;
  }
  if (param_2 == 4) {
    if (fVar1 <= DAT_ram_40093094) {
      uVar2 = (ulonglong)DAT_ram_40092878;
    }
switchD_ram_400712e2_caseD_2:
    param_2 = 2;
    FUN_ram_40076ce6(uVar2);
  }
  else {
    if (fVar1 <= DAT_ram_40093094) {
      uVar2 = (ulonglong)DAT_ram_40092878;
    }
    switch(param_2) {
    case 0:
      goto switchD_ram_400712e2_caseD_0;
    case 1:
      FUN_ram_40079238();
      break;
    case 2:
      goto switchD_ram_400712e2_caseD_2;
    case 3:
      FUN_ram_40074fde();
      break;
    default:
      FUN_ram_4005d39a();
      FUN_ram_4005d3fa(CONCAT44(uStack_10,(int)uVar2),(int)param_1 + 0x43c);
      break;
    case 5:
      FUN_ram_4007d2c2();
      break;
    case 7:
      FUN_ram_4007dd56();
    }
  }
LAB_ram_40071302:
  uVar2 = (ulonglong)DAT_ram_40092818;
  *(char *)((int)param_1 + 4) = (char)param_2;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[1] = uVar2;
  *(ulonglong *)((int)param_1 + 0xc) = uVar2;
  param_1[2] = uVar2;
  *(ulonglong *)((int)param_1 + 0x14) = uVar2;
  param_1[3] = uVar2;
  *(ulonglong *)((int)param_1 + 0x1c) = uVar2;
  memset(param_1 + 4,0,0x18);
  return;
}


/* NanoCore 1.10, address 0x4007137c.
 * REA evidence: ev_73e08411477c4e72b6d7824e126a306eb1240368f25ed615cf05867e673f505f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_4007137c(int param_1)

{
  if (param_1 != 0) {
    return *(undefined1 *)(param_1 + 4);
  }
  return 0xff;
}


/* NanoCore 1.10, address 0x4007138a.
 * REA evidence: ev_be8ff7e9e9e91a12ac7c540695473b4dbdef0e353f267cea7cb2a3b7fce8a60a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007138a(int param_1)

{
  ulonglong uVar1;
  
  if (param_1 != 0) {
    switch(*(undefined1 *)(param_1 + 4)) {
    case 0:
      FUN_ram_4007b850(param_1 + 0x43c);
      break;
    case 1:
      FUN_ram_400792e4(param_1 + 0x43c);
      break;
    case 2:
      FUN_ram_40076dba(param_1 + 0x43c);
      break;
    case 3:
      FUN_ram_4007508c(param_1 + 0x43c);
      break;
    case 5:
      FUN_ram_4007d3d4(param_1 + 0x43c);
      break;
    case 6:
      FUN_ram_4005d43e(param_1 + 0x43c);
      break;
    case 7:
      FUN_ram_4007df8a(param_1 + 0x43c);
    }
    uVar1 = (ulonglong)DAT_ram_40092818;
    *(ulonglong *)(param_1 + 8) = uVar1;
    *(ulonglong *)(param_1 + 0xc) = uVar1;
    *(ulonglong *)(param_1 + 0x10) = uVar1;
    *(ulonglong *)(param_1 + 0x14) = uVar1;
    *(ulonglong *)(param_1 + 0x18) = uVar1;
    *(ulonglong *)(param_1 + 0x1c) = uVar1;
    memset((void *)(param_1 + 0x20),0,0x18);
    *(undefined1 *)(param_1 + 0x38) = 0;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40071420.
 * REA evidence: ev_a8a38e175b3fc687fa7ac09343f95a2e23772e11843225ba0832103381c9ae43
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40071420(float *param_1,uint param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((param_1 == (float *)0x0) || (param_2 == 0)) {
    return;
  }
  memset(param_1,0,param_2 << 2);
  fVar5 = DAT_ram_400989f8;
  fVar6 = DAT_ram_400930e8;
  fVar2 = DAT_ram_400941f0;
  fVar3 = DAT_ram_400930f4;
  fVar4 = DAT_ram_400930fc;
  if ((param_3 < 8) &&
     (fVar5 = DAT_ram_400989fc, fVar6 = DAT_ram_400934e0, fVar2 = DAT_ram_40098a00,
     fVar3 = DAT_ram_40098118, fVar4 = DAT_ram_40098238, param_3 != 4)) {
    if (param_3 == 6) {
      *param_1 = DAT_ram_40098288;
      if (param_2 != 1) {
        param_1[1] = DAT_ram_400937b0;
        if (param_2 != 2) {
          param_1[2] = DAT_ram_40098118;
        }
        if (3 < param_2) {
          param_1[3] = DAT_ram_40098a04;
        }
      }
    }
    else if (param_3 == 5) {
      *param_1 = DAT_ram_40098a08;
      if (param_2 != 1) {
        param_1[1] = 0.0;
        if (param_2 != 2) {
          param_1[2] = DAT_ram_40098a00;
        }
        if (3 < param_2) {
          param_1[3] = DAT_ram_400937b0;
        }
      }
    }
    else {
      if (param_3 != 7) {
        if (param_3 < 4) {
          iVar1 = param_3 * 4;
          fVar5 = ((float)*(undefined8 *)(&DAT_ram_40098a10 + iVar1) - DAT_ram_40092864) /
                  DAT_ram_4009423c;
          fVar6 = (float)*(undefined8 *)(&DAT_ram_40098a20 + iVar1);
          fVar2 = (float)*(undefined8 *)(&DAT_ram_40098a30 + iVar1);
          fVar3 = (float)*(undefined8 *)(&DAT_ram_40098a40 + iVar1);
          fVar4 = (float)*(undefined8 *)(&DAT_ram_40098a50 + iVar1);
        }
        goto LAB_ram_400714d8;
      }
      *param_1 = DAT_ram_40098678;
      if (param_2 != 1) {
        param_1[1] = (float)_DAT_ram_40093100;
        if (param_2 != 2) {
          param_1[2] = DAT_ram_40098a0c;
        }
        if (3 < param_2) {
          param_1[3] = (float)_DAT_ram_40093100;
        }
      }
    }
    if (4 < param_2) {
      param_1[4] = DAT_ram_40092864;
      return;
    }
  }
  else {
LAB_ram_400714d8:
    *param_1 = fVar5;
    if (param_2 != 1) {
      param_1[1] = fVar6 / DAT_ram_400934e8;
      if (param_2 != 2) {
        param_1[2] = fVar2;
      }
      if (3 < param_2) {
        param_1[3] = fVar3;
      }
    }
    if (4 < param_2) {
      param_1[4] = fVar4;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4007162c.
 * REA evidence: ev_5e6ad9b36b272ee286be0a7384be638d510d480a99577eff1a1740cd5886b0fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4007162c(void)

{
  return 5;
}


/* NanoCore 1.10, address 0x40071630.
 * REA evidence: ev_c3117d8935f688e15db8157e48965139fce3a4dc0eb0f77346973094040f2d9d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40071630(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    FUN_ram_4005b14a(param_1 + 2);
    uVar1 = DAT_ram_4009281c;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = uVar1;
    param_1[0x21] = uVar1;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4007167a.
 * REA evidence: ev_0a0658adac431d03f7037ca6141de8d8599e43448d05402f52991f9c18dd45fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4007167a(ulonglong *param_1,uint param_2)

{
  ulonglong uVar1;
  
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_40092864;
    uVar1 = _DAT_ram_400980e8;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = _DAT_ram_400980e8;
      if (param_2 != 2) {
        param_1[1] = uVar1;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = _DAT_ram_400980e8;
      }
    }
    if (4 < param_2) {
      param_1[2] = (ulonglong)DAT_ram_4009287c;
    }
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400716de.
 * REA evidence: ev_dbbf82bbfb39bc828e12af731d39ebcf6c1eae7975a8b03a3a8fc13fbcadcbc0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400716de(ulonglong *param_1,uint param_2)

{
  ulonglong uVar1;
  
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_4009281c;
    uVar1 = _DAT_ram_40092864;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = _DAT_ram_40092864;
      if (param_2 != 2) {
        param_1[1] = uVar1;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = _DAT_ram_40092864;
      }
    }
    if (4 < param_2) {
      param_1[2] = (ulonglong)DAT_ram_4009287c;
    }
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40071742.
 * REA evidence: ev_1d7463fe3774182b03152cf6913c65d97c58fcda74980c1bb3f54c1c8e2d036d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40071742(ulonglong *param_1,int param_2)

{
  ulonglong uVar1;
  
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    uVar1 = (ulonglong)DAT_ram_40092864;
    *param_1 = uVar1;
    if ((param_2 != 1) && (*(ulonglong *)((int)param_1 + 4) = uVar1, param_2 != 2)) {
      param_1[1] = (ulonglong)DAT_ram_4009287c;
    }
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4007178a.
 * REA evidence: ev_98184a21afee07cdcc3296f34e5baf797958566f59ed5729a8a72b0000cd155a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4007178a(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (param_1 == 1) {
    uVar1 = 3;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x40071798.
 * REA evidence: ev_c5ce5761779c6122f0fb63d04f8ff84ecbafb5f2e169f4135e5ce08bcb62ee77
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40071798(int *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                     uint param_6,float *param_7,int param_8,char param_9,int param_10)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  int *piVar8;
  ulonglong uVar9;
  float fVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  
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
  if (param_1 == (int *)0x0) {
LAB_ram_40071ba6:
    if (param_2 != param_4) {
      FUN_ram_4000305c(param_4,param_2,param_6 << 2);
    }
    if ((((param_9 != '\0') && (param_3 != (float *)0x0)) && (param_5 != (float *)0x0)) &&
       (param_3 != param_5)) {
      FUN_ram_4000305c(param_5,param_3,param_6 << 2);
      return;
    }
    return;
  }
  pfVar2 = param_3;
  if ((0x80 < param_6) || ((param_1[0x23] == 0 && (DAT_ram_40098164 <= (float)param_1[0x21])))) {
    bVar1 = false;
    pfVar7 = param_2;
  }
  else {
    pfVar7 = (float *)(param_1 + 0x24);
    FUN_ram_4000305c(pfVar7,param_2,param_6 << 2);
    if (param_9 == '\0') {
      bVar1 = true;
    }
    else if (param_3 == (float *)0x0) {
      bVar1 = true;
      pfVar2 = (float *)0x0;
    }
    else {
      FUN_ram_4000305c(param_1 + 0xa4,param_3,param_6 << 2);
      bVar1 = true;
      pfVar2 = (float *)(param_1 + 0xa4);
    }
  }
  if (*param_1 == 0) goto LAB_ram_40071ba6;
  if ((((char *)param_1[1] == (char *)0x0) || (*(char *)param_1[1] == '\0')) ||
     (iVar3 = FUN_ram_400849e6(), fVar13 = DAT_ram_40092864, iVar3 == 0)) {
    if (param_2 != param_4) {
      FUN_ram_4000305c(param_4,param_2,param_6 << 2);
    }
    if (param_9 == '\0') {
      iVar3 = param_1[0x23];
      fVar13 = (float)param_1[0x21];
      if ((iVar3 == 0) && (ABS(fVar13 - DAT_ram_4009281c) <= DAT_ram_40092838)) {
        return;
      }
      fVar12 = (float)param_1[0x22];
      pfVar2 = param_4;
      do {
        if (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            bVar1 = 0.0 <= fVar12;
            fVar12 = 0.0;
            fVar13 = fVar12;
            if (bVar1) {
              fVar13 = DAT_ram_4009281c;
            }
          }
          else {
            fVar13 = fVar13 + fVar12;
          }
        }
        fVar10 = *pfVar7;
        pfVar4 = pfVar2 + 1;
        pfVar7 = pfVar7 + 1;
        *pfVar2 = ((float)*(undefined8 *)pfVar2 - fVar10) * fVar13 + fVar10;
        pfVar2 = pfVar4;
      } while (param_4 + param_6 != pfVar4);
    }
    else {
      if (((param_3 != (float *)0x0) && (param_5 != (float *)0x0)) && (param_3 != param_5)) {
        FUN_ram_4000305c(param_5,param_3,param_6 << 2);
      }
      iVar3 = param_1[0x23];
      fVar13 = (float)param_1[0x21];
      if ((iVar3 == 0) && (ABS(fVar13 - DAT_ram_4009281c) <= DAT_ram_40092838)) {
        return;
      }
      fVar12 = (float)param_1[0x22];
      if (pfVar2 == (float *)0x0) {
        pfVar2 = param_4;
        do {
          if (iVar3 != 0) {
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) {
              bVar1 = 0.0 <= fVar12;
              fVar12 = 0.0;
              fVar13 = fVar12;
              if (bVar1) {
                fVar13 = DAT_ram_4009281c;
              }
            }
            else {
              fVar13 = fVar13 + fVar12;
            }
          }
          fVar10 = *pfVar7;
          pfVar4 = pfVar2 + 1;
          pfVar7 = pfVar7 + 1;
          *pfVar2 = ((float)*(undefined8 *)pfVar2 - fVar10) * fVar13 + fVar10;
          pfVar2 = pfVar4;
        } while (param_4 + param_6 != pfVar4);
      }
      else if (param_5 == (float *)0x0) {
        pfVar2 = param_4;
        do {
          if (iVar3 != 0) {
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) {
              bVar1 = 0.0 <= fVar12;
              fVar12 = 0.0;
              fVar13 = fVar12;
              if (bVar1) {
                fVar13 = DAT_ram_4009281c;
              }
            }
            else {
              fVar13 = fVar13 + fVar12;
            }
          }
          fVar10 = *pfVar7;
          pfVar4 = pfVar2 + 1;
          pfVar7 = pfVar7 + 1;
          *pfVar2 = ((float)*(undefined8 *)pfVar2 - fVar10) * fVar13 + fVar10;
          pfVar2 = pfVar4;
        } while (param_4 + param_6 != pfVar4);
      }
      else {
        pfVar4 = pfVar7 + param_6;
        do {
          if (iVar3 != 0) {
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) {
              bVar1 = 0.0 <= fVar12;
              fVar12 = 0.0;
              fVar13 = fVar12;
              if (bVar1) {
                fVar13 = DAT_ram_4009281c;
              }
            }
            else {
              fVar13 = fVar13 + fVar12;
            }
          }
          fVar10 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          *param_4 = ((float)*(undefined8 *)param_4 - fVar10) * fVar13 + fVar10;
          *param_5 = fVar13 * (*param_5 - *pfVar2) + *pfVar2;
          param_4 = param_4 + 1;
          param_5 = param_5 + 1;
          pfVar2 = pfVar2 + 1;
        } while (pfVar4 != pfVar7);
      }
    }
    param_1[0x21] = (int)fVar13;
    param_1[0x22] = (int)fVar12;
    param_1[0x23] = iVar3;
    return;
  }
  if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
    if (param_2 != param_4) {
      FUN_ram_4000305c(param_4,param_2,param_6 << 2);
    }
  }
  else {
    pfVar5 = param_2 + param_6;
    pfVar4 = param_4;
    do {
      uVar17 = *(undefined8 *)param_2;
      uVar14 = *(undefined8 *)param_3;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      *pfVar4 = ((float)uVar17 + (float)uVar14) * fVar13;
      pfVar4 = pfVar4 + 1;
    } while (param_2 != pfVar5);
  }
  fVar13 = DAT_ram_40092838;
  if (param_8 == 1) {
    if (param_7 == (float *)0x0) {
      uVar15 = 0;
      uVar11 = (ulonglong)(uint)DAT_ram_40092864;
      fVar12 = DAT_ram_4009281c;
LAB_ram_40071d36:
      if (DAT_ram_4009281c < fVar12) {
        fVar12 = DAT_ram_4009281c;
      }
    }
    else {
      fVar10 = *param_7;
      fVar19 = param_7[1];
      uVar11 = (ulonglong)(uint)fVar19;
      fVar12 = param_7[2];
      if (0.0 <= fVar10) {
        uVar15 = (ulonglong)(uint)DAT_ram_4009281c;
        if (fVar10 <= DAT_ram_4009281c) {
          uVar15 = (ulonglong)
                   (uint)(fVar10 * (float)PTR_firmware_entry_ram_40092830 + DAT_ram_40092818);
        }
      }
      else {
        uVar15 = (ulonglong)(uint)DAT_ram_40092818;
      }
      if (fVar19 < 0.0) {
        uVar11 = 0;
      }
      else if (DAT_ram_4009281c < fVar19) {
        uVar11 = (ulonglong)(uint)DAT_ram_4009281c;
      }
      if (0.0 <= fVar12) goto LAB_ram_40071d36;
      fVar12 = 0.0;
    }
    iVar3 = *param_1;
    if (DAT_ram_40092838 < ABS((float)uVar15 - (float)*(undefined8 *)(param_1 + 0x1b))) {
      *(ulonglong *)(iVar3 + 8) = uVar15;
      *(ulonglong *)(param_1 + 0x1b) = uVar15;
    }
    if (fVar13 < ABS((float)uVar11 - (float)*(undefined8 *)(param_1 + 0x1f))) {
      *(ulonglong *)(iVar3 + 0x20) = uVar11;
      *(ulonglong *)(param_1 + 0x1f) = uVar11;
    }
    if (fVar13 < ABS(fVar12 - (float)param_1[0x20])) {
      param_1[0x20] = (int)fVar12;
    }
    FUN_ram_400849fc(iVar3,param_4,param_6);
    pfVar4 = param_4;
    do {
      pfVar5 = pfVar4 + 1;
      *pfVar4 = (float)*(undefined8 *)pfVar4 * (float)param_1[0x20];
      pfVar4 = pfVar5;
    } while (pfVar5 != param_4 + param_6);
    goto LAB_ram_40071a72;
  }
  if (param_7 == (float *)0x0) {
    uVar15 = 0;
    fVar12 = DAT_ram_40092864;
    fVar10 = DAT_ram_40092864;
    fVar19 = DAT_ram_4009281c;
    fVar16 = DAT_ram_40092864;
LAB_ram_40071c70:
    fVar18 = fVar12 * DAT_ram_400930bc + DAT_ram_400934b8;
  }
  else {
    fVar18 = *param_7;
    fVar12 = param_7[1];
    fVar10 = param_7[2];
    fVar19 = param_7[4];
    fVar16 = param_7[3];
    if (0.0 <= fVar18) {
      uVar15 = (ulonglong)(uint)DAT_ram_4009281c;
      if (fVar18 <= DAT_ram_4009281c) {
        uVar15 = (ulonglong)
                 (uint)(fVar18 * (float)PTR_firmware_entry_ram_40092830 + DAT_ram_40092818);
      }
    }
    else {
      uVar15 = (ulonglong)(uint)DAT_ram_40092818;
    }
    fVar18 = DAT_ram_400934b8;
    if ((0.0 <= fVar12) && (fVar18 = DAT_ram_400930a4, fVar12 <= DAT_ram_4009281c))
    goto LAB_ram_40071c70;
  }
  if (fVar10 < 0.0) {
    uVar11 = (ulonglong)(uint)DAT_ram_400934b8;
  }
  else if (fVar10 <= DAT_ram_4009281c) {
    uVar11 = (ulonglong)(uint)(fVar10 * DAT_ram_400930bc + DAT_ram_400934b8);
  }
  else {
    uVar11 = (ulonglong)(uint)DAT_ram_400930a4;
  }
  if (fVar16 < 0.0) {
    uVar9 = (ulonglong)(uint)DAT_ram_400934b8;
  }
  else if (fVar16 <= DAT_ram_4009281c) {
    uVar9 = (ulonglong)(uint)(fVar16 * DAT_ram_400930bc + DAT_ram_400934b8);
  }
  else {
    uVar9 = (ulonglong)(uint)DAT_ram_400930a4;
  }
  if (fVar19 < 0.0) {
    fVar19 = 0.0;
  }
  else if (DAT_ram_4009281c < fVar19) {
    fVar19 = DAT_ram_4009281c;
  }
  if (DAT_ram_40092838 < ABS((float)uVar15 - (float)*(undefined8 *)(param_1 + 0x1b))) {
    *(ulonglong *)(*param_1 + 8) = uVar15;
    *(ulonglong *)(param_1 + 0x1b) = uVar15;
  }
  fVar12 = DAT_ram_40092840;
  piVar8 = param_1 + 2;
  if (DAT_ram_40092840 < ABS(fVar18 - (float)*(undefined8 *)(param_1 + 0x1c))) {
    FUN_ram_4005b422(fVar18,piVar8);
    param_1[0x1c] = (int)fVar18;
  }
  if (fVar12 < ABS((float)uVar11 - (float)*(undefined8 *)(param_1 + 0x1d))) {
    FUN_ram_4005b544(uVar11,piVar8);
    *(ulonglong *)(param_1 + 0x1d) = uVar11;
  }
  if (fVar12 < ABS((float)uVar9 - (float)*(undefined8 *)(param_1 + 0x1e))) {
    FUN_ram_4005b626(uVar9,piVar8);
    *(ulonglong *)(param_1 + 0x1e) = uVar9;
  }
  if (fVar13 < ABS(fVar19 - (float)param_1[0x20])) {
    param_1[0x20] = (int)fVar19;
  }
  FUN_ram_400849fc(*param_1,param_4,param_6);
  uVar6 = 0;
  pfVar4 = param_4;
  do {
    fVar12 = (float)FUN_ram_4005b746(*pfVar4,piVar8);
    uVar6 = uVar6 + 1;
    *pfVar4 = (float)param_1[0x20] * fVar12;
    pfVar4 = pfVar4 + 1;
  } while (param_6 != uVar6);
LAB_ram_40071a72:
  if ((param_9 != '\0') && (param_5 != (float *)0x0)) {
    pfVar4 = param_5;
    pfVar5 = param_4;
    do {
      uVar14 = *(undefined8 *)pfVar5;
      pfVar5 = pfVar5 + 1;
      *pfVar4 = (float)uVar14;
      pfVar4 = pfVar4 + 1;
    } while (pfVar5 != param_4 + param_6);
  }
  if (!bVar1) {
    return;
  }
  iVar3 = param_1[0x23];
  fVar12 = (float)param_1[0x21];
  fVar10 = (float)param_1[0x22];
  if ((iVar3 == 0) && (ABS(fVar12 - DAT_ram_4009281c) <= fVar13)) {
    return;
  }
  if (param_9 == '\0') {
    pfVar2 = param_4;
    do {
      if (iVar3 != 0) {
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          bVar1 = 0.0 <= fVar10;
          fVar10 = 0.0;
          fVar12 = fVar10;
          if (bVar1) {
            fVar12 = DAT_ram_4009281c;
          }
        }
        else {
          fVar12 = fVar12 + fVar10;
        }
      }
      fVar13 = *pfVar7;
      pfVar4 = pfVar2 + 1;
      pfVar7 = pfVar7 + 1;
      *pfVar2 = ((float)*(undefined8 *)pfVar2 - fVar13) * fVar12 + fVar13;
      pfVar2 = pfVar4;
    } while (pfVar4 != param_4 + param_6);
  }
  else {
    uVar6 = 0;
    if (pfVar2 == (float *)0x0) {
      do {
        if (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            bVar1 = 0.0 <= fVar10;
            fVar10 = 0.0;
            fVar12 = fVar10;
            if (bVar1) {
              fVar12 = DAT_ram_4009281c;
            }
          }
          else {
            fVar12 = fVar12 + fVar10;
          }
        }
        fVar13 = *pfVar7;
        uVar6 = uVar6 + 1;
        pfVar7 = pfVar7 + 1;
        *param_4 = fVar12 * ((float)*(undefined8 *)param_4 - fVar13) + fVar13;
        param_4 = param_4 + 1;
      } while (uVar6 < param_6);
    }
    else if (param_5 == (float *)0x0) {
      do {
        if (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            bVar1 = 0.0 <= fVar10;
            fVar10 = 0.0;
            fVar12 = fVar10;
            if (bVar1) {
              fVar12 = DAT_ram_4009281c;
            }
          }
          else {
            fVar12 = fVar12 + fVar10;
          }
        }
        fVar13 = *pfVar7;
        uVar6 = uVar6 + 1;
        pfVar7 = pfVar7 + 1;
        *param_4 = ((float)*(undefined8 *)param_4 - fVar13) * fVar12 + fVar13;
        param_4 = param_4 + 1;
      } while (uVar6 < param_6);
    }
    else {
      do {
        if (iVar3 != 0) {
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            bVar1 = 0.0 <= fVar10;
            fVar10 = 0.0;
            fVar12 = fVar10;
            if (bVar1) {
              fVar12 = DAT_ram_4009281c;
            }
          }
          else {
            fVar12 = fVar12 + fVar10;
          }
        }
        fVar13 = *pfVar7;
        uVar6 = uVar6 + 1;
        pfVar7 = pfVar7 + 1;
        *param_4 = ((float)*(undefined8 *)param_4 - fVar13) * fVar12 + fVar13;
        *param_5 = fVar12 * (*param_5 - *pfVar2) + *pfVar2;
        param_4 = param_4 + 1;
        param_5 = param_5 + 1;
        pfVar2 = pfVar2 + 1;
      } while (uVar6 < param_6);
    }
  }
  param_1[0x21] = (int)fVar12;
  param_1[0x22] = (int)fVar10;
  param_1[0x23] = iVar3;
  return;
}


/* NanoCore 1.10, address 0x40071fd6.
 * REA evidence: ev_c12c8d9391b4e30c8fb50a32af5682e29d3f7341446d24a5d1087286a1041ae3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40071fd6(float param_1,ulonglong *param_2)

{
  if (param_2 == (ulonglong *)0x0) {
    return;
  }
  memset(param_2,0,0x300c);
  if (DAT_ram_40093094 < param_1) {
    *param_2 = (ulonglong)(uint)param_1;
    return;
  }
  *param_2 = (ulonglong)DAT_ram_400980e0;
  return;
}


