/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4005e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4005e30c.
 * REA evidence: ev_4dfc655147cd1edb124e8170f29a868243298b20445c541b7ad28cf9e19e0c1f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005e30c(int *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                     int param_6,float *param_7,undefined4 param_8,char param_9,int param_10)

{
  bool bVar1;
  float fVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar12;
  
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
  fVar10 = DAT_ram_40092864;
  fVar2 = DAT_ram_4009281c;
  if ((param_1 == (int *)0x0) || (iVar5 = *param_1, iVar5 == 0)) {
    if (param_2 != param_4) {
      FUN_ram_4000305c(param_4,param_2,param_6 << 2);
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
    FUN_ram_4000305c(param_5,param_3,param_6 << 2);
    return;
  }
  uVar9 = *(ulonglong *)(param_1 + 9);
  bVar3 = param_1[0xb] == 0;
  bVar1 = DAT_ram_40098164 <= (float)uVar9;
  iVar8 = param_1[0xb];
  fVar19 = (float)param_1[10];
  if (param_7 == (float *)0x0) goto LAB_ram_4005e700;
  fVar11 = *param_7;
  if (fVar11 < 0.0) {
    fVar11 = 0.0;
  }
  else if (DAT_ram_4009281c < fVar11) {
    fVar11 = DAT_ram_4009281c;
  }
  fVar13 = param_7[1];
  if (fVar13 < 0.0) {
    fVar13 = 0.0;
LAB_ram_4005e44a:
    if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
      if (param_2 == param_4) {
        iVar6 = param_6 << 2;
      }
      else {
        iVar6 = param_6 << 2;
        FUN_ram_4000305c(param_4,param_2,iVar6);
        iVar5 = *param_1;
        fVar10 = DAT_ram_40092864;
      }
    }
    else {
      iVar6 = param_6 * 4;
      pfVar4 = param_2 + param_6;
      pfVar7 = param_4;
      do {
        uVar17 = *(undefined8 *)param_2;
        uVar15 = *(undefined8 *)param_3;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        *pfVar7 = ((float)uVar17 + (float)uVar15) * fVar10;
        pfVar7 = pfVar7 + 1;
      } while (param_2 != pfVar4);
    }
    FUN_ram_40073c04(iVar5,param_4,param_6);
    fVar14 = (float)param_1[1];
    if ((float)param_1[1] <= fVar2) {
      fVar14 = DAT_ram_400980e0;
    }
    fVar12 = DAT_ram_40098154;
    if ((0.0 <= fVar11) && (fVar12 = DAT_ram_40098158, fVar11 <= fVar2)) {
      fVar12 = fVar11 * DAT_ram_4009816c + DAT_ram_40098154;
    }
    fVar11 = (float)FUN_ram_40000c0e(fVar12);
    fVar12 = DAT_ram_4009815c;
    if ((0.0 <= fVar13) && (fVar12 = DAT_ram_40098160, fVar13 <= fVar2)) {
      fVar12 = fVar13 * DAT_ram_40098170 + DAT_ram_4009815c;
    }
    fVar13 = (float)FUN_ram_40000c0e(fVar12);
    fVar10 = fVar14 * fVar10 * DAT_ram_4009421c;
    if (fVar10 < fVar11) {
      fVar11 = fVar10;
    }
    if (fVar10 < fVar13) {
      fVar13 = fVar10;
    }
    if ((float)*(undefined8 *)(param_1 + 2) != fVar11) {
      uVar15 = FUN_ram_40000c0e((fVar11 * DAT_ram_4009810c) / fVar14);
      *(undefined8 *)(param_1 + 4) = uVar15;
      param_1[2] = (int)fVar11;
    }
    if ((float)*(undefined8 *)(param_1 + 3) == fVar13) {
      uVar15 = *(undefined8 *)(param_1 + 7);
    }
    else {
      uVar15 = FUN_ram_40000c0e((fVar13 * DAT_ram_4009810c) / fVar14);
      *(undefined8 *)(param_1 + 7) = uVar15;
      param_1[3] = (int)fVar13;
    }
    fVar13 = DAT_ram_4009287c;
    fVar14 = (float)uVar15;
    fVar11 = fVar2 - fVar14;
    fVar10 = (float)param_1[4];
    uVar15 = *(undefined8 *)(param_1 + 5);
    uVar18 = *(ulonglong *)(param_1 + 6);
    uVar16 = *(ulonglong *)(param_1 + 8);
    if (bVar3 && bVar1) {
      pfVar7 = (float *)(iVar6 + (int)param_4);
      if (param_9 == '\0') {
        do {
          fVar2 = (float)uVar15;
          uVar15 = *(undefined8 *)param_4;
          pfVar4 = param_4 + 1;
          fVar2 = (((float)uVar15 + (float)uVar18) - fVar2) * fVar10;
          uVar18 = (ulonglong)(uint)fVar2;
          fVar2 = fVar11 * fVar2 + fVar14 * (float)uVar16;
          uVar16 = (ulonglong)(uint)fVar2;
          *param_4 = fVar2 * fVar13;
          param_4 = pfVar4;
        } while (pfVar7 != pfVar4);
      }
      else if (param_5 == (float *)0x0) {
        do {
          fVar2 = (float)uVar15;
          uVar15 = *(undefined8 *)param_4;
          pfVar4 = param_4 + 1;
          fVar2 = (((float)uVar15 + (float)uVar18) - fVar2) * fVar10;
          uVar18 = (ulonglong)(uint)fVar2;
          fVar2 = fVar11 * fVar2 + fVar14 * (float)uVar16;
          uVar16 = (ulonglong)(uint)fVar2;
          *param_4 = fVar2 * fVar13;
          param_4 = pfVar4;
        } while (pfVar7 != pfVar4);
      }
      else {
        do {
          fVar2 = (float)uVar15;
          uVar15 = *(undefined8 *)param_4;
          pfVar4 = param_4 + 1;
          fVar2 = (((float)uVar15 + (float)uVar18) - fVar2) * fVar10;
          uVar18 = (ulonglong)(uint)fVar2;
          fVar2 = fVar11 * fVar2 + fVar14 * (float)uVar16;
          uVar16 = (ulonglong)(uint)fVar2;
          fVar2 = fVar2 * fVar13;
          *param_4 = fVar2;
          *param_5 = fVar2;
          param_4 = pfVar4;
          param_5 = param_5 + 1;
        } while (pfVar7 != pfVar4);
      }
      *(undefined8 *)(param_1 + 5) = uVar15;
      *(ulonglong *)(param_1 + 6) = uVar18;
      *(ulonglong *)(param_1 + 8) = uVar16;
      return;
    }
    pfVar7 = (float *)(iVar6 + (int)param_4);
    if (param_9 == '\0') {
      do {
        fVar12 = (float)uVar15;
        uVar15 = *(undefined8 *)param_4;
        fVar12 = (((float)uVar15 + (float)uVar18) - fVar12) * fVar10;
        uVar18 = (ulonglong)(uint)fVar12;
        fVar12 = fVar11 * fVar12 + fVar14 * (float)uVar16;
        uVar16 = (ulonglong)(uint)fVar12;
        if (iVar8 != 0) {
          iVar8 = iVar8 + -1;
          if (iVar8 == 0) {
            bVar1 = fVar19 < 0.0;
            uVar9 = (ulonglong)(uint)fVar2;
            fVar19 = 0.0;
            if (bVar1) {
              uVar9 = 0;
            }
          }
          else {
            uVar9 = (ulonglong)(uint)((float)uVar9 + fVar19);
          }
        }
        pfVar4 = param_4 + 1;
        *param_4 = fVar12 * fVar13 * (float)uVar9;
        param_4 = pfVar4;
      } while (pfVar7 != pfVar4);
    }
    else if (param_5 == (float *)0x0) {
      do {
        fVar12 = (float)uVar15;
        uVar15 = *(undefined8 *)param_4;
        fVar12 = (((float)uVar15 + (float)uVar18) - fVar12) * fVar10;
        uVar18 = (ulonglong)(uint)fVar12;
        fVar12 = fVar12 * fVar11 + fVar14 * (float)uVar16;
        uVar16 = (ulonglong)(uint)fVar12;
        if (iVar8 != 0) {
          iVar8 = iVar8 + -1;
          if (iVar8 == 0) {
            bVar1 = fVar19 < 0.0;
            uVar9 = (ulonglong)(uint)fVar2;
            fVar19 = 0.0;
            if (bVar1) {
              uVar9 = 0;
            }
          }
          else {
            uVar9 = (ulonglong)(uint)((float)uVar9 + fVar19);
          }
        }
        pfVar4 = param_4 + 1;
        *param_4 = fVar12 * fVar13 * (float)uVar9;
        param_4 = pfVar4;
      } while (pfVar7 != pfVar4);
    }
    else {
      do {
        fVar12 = (float)uVar15;
        uVar15 = *(undefined8 *)param_4;
        fVar12 = (((float)uVar15 + (float)uVar18) - fVar12) * fVar10;
        uVar18 = (ulonglong)(uint)fVar12;
        fVar12 = fVar11 * fVar12 + fVar14 * (float)uVar16;
        uVar16 = (ulonglong)(uint)fVar12;
        if (iVar8 != 0) {
          iVar8 = iVar8 + -1;
          if (iVar8 == 0) {
            bVar1 = fVar19 < 0.0;
            uVar9 = (ulonglong)(uint)fVar2;
            fVar19 = 0.0;
            if (bVar1) {
              uVar9 = 0;
            }
          }
          else {
            uVar9 = (ulonglong)(uint)((float)uVar9 + fVar19);
          }
        }
        pfVar4 = param_4 + 1;
        fVar12 = fVar12 * fVar13 * (float)uVar9;
        *param_4 = fVar12;
        *param_5 = fVar12;
        param_4 = pfVar4;
        param_5 = param_5 + 1;
      } while (pfVar7 != pfVar4);
    }
    *(undefined8 *)(param_1 + 5) = uVar15;
    *(ulonglong *)(param_1 + 6) = uVar18;
    *(ulonglong *)(param_1 + 8) = uVar16;
  }
  else {
    if (DAT_ram_4009281c < fVar13) {
      fVar13 = DAT_ram_4009281c;
      if (DAT_ram_40092840 < fVar11) goto LAB_ram_4005e44a;
    }
    else if ((DAT_ram_40092840 < fVar11) || (fVar13 < DAT_ram_40098168)) goto LAB_ram_4005e44a;
LAB_ram_4005e700:
    if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
      if (param_2 != param_4) {
        FUN_ram_4000305c(param_4,param_2,param_6 * 4);
        iVar5 = *param_1;
      }
      FUN_ram_40073c04(iVar5,param_4,param_6);
      fVar2 = DAT_ram_4009287c;
      if (bVar3 && bVar1) {
        if (param_9 == '\0') {
          pfVar7 = param_4;
          do {
            pfVar4 = pfVar7 + 1;
            *pfVar7 = (float)*(undefined8 *)pfVar7 * fVar2;
            pfVar7 = pfVar4;
          } while (pfVar4 != param_4 + param_6);
          return;
        }
        goto LAB_ram_4005e82e;
      }
      if (param_9 == '\0') {
        pfVar7 = param_4;
        do {
          if (iVar8 != 0) {
            iVar8 = iVar8 + -1;
            if (iVar8 == 0) {
              bVar1 = 0.0 <= fVar19;
              fVar19 = 0.0;
              uVar9 = 0;
              if (bVar1) {
                uVar9 = (ulonglong)(uint)DAT_ram_4009281c;
              }
            }
            else {
              uVar9 = (ulonglong)(uint)((float)uVar9 + fVar19);
            }
          }
          pfVar4 = pfVar7 + 1;
          *pfVar7 = (float)*(undefined8 *)pfVar7 * fVar2 * (float)uVar9;
          pfVar7 = pfVar4;
        } while (pfVar4 != param_4 + param_6);
        goto LAB_ram_4005e3d6;
      }
    }
    else {
      pfVar4 = param_2 + param_6;
      pfVar7 = param_4;
      do {
        uVar17 = *(undefined8 *)param_2;
        uVar15 = *(undefined8 *)param_3;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        *pfVar7 = ((float)uVar17 + (float)uVar15) * fVar10;
        pfVar7 = pfVar7 + 1;
      } while (param_2 != pfVar4);
      FUN_ram_40073c04(iVar5,param_4,param_6);
      if (bVar3 && bVar1) {
LAB_ram_4005e82e:
        fVar2 = DAT_ram_4009287c;
        pfVar7 = param_4;
        if (param_5 != (float *)0x0) {
          do {
            pfVar4 = pfVar7 + 1;
            fVar10 = (float)*(undefined8 *)pfVar7 * fVar2;
            *pfVar7 = fVar10;
            *param_5 = fVar10;
            pfVar7 = pfVar4;
            param_5 = param_5 + 1;
          } while (pfVar4 != param_4 + param_6);
          return;
        }
        do {
          pfVar4 = pfVar7 + 1;
          *pfVar7 = (float)*(undefined8 *)pfVar7 * fVar2;
          pfVar7 = pfVar4;
        } while (pfVar4 != param_4 + param_6);
        return;
      }
    }
    fVar2 = DAT_ram_4009287c;
    pfVar7 = param_4 + param_6;
    if (param_5 == (float *)0x0) {
      do {
        if (iVar8 != 0) {
          iVar8 = iVar8 + -1;
          if (iVar8 == 0) {
            bVar1 = 0.0 <= fVar19;
            fVar19 = 0.0;
            uVar9 = 0;
            if (bVar1) {
              uVar9 = (ulonglong)(uint)DAT_ram_4009281c;
            }
          }
          else {
            uVar9 = (ulonglong)(uint)((float)uVar9 + fVar19);
          }
        }
        pfVar4 = param_4 + 1;
        *param_4 = (float)*(undefined8 *)param_4 * fVar2 * (float)uVar9;
        param_4 = pfVar4;
      } while (pfVar4 != pfVar7);
    }
    else {
      do {
        if (iVar8 != 0) {
          iVar8 = iVar8 + -1;
          if (iVar8 == 0) {
            bVar1 = 0.0 <= fVar19;
            fVar19 = 0.0;
            uVar9 = 0;
            if (bVar1) {
              uVar9 = (ulonglong)(uint)DAT_ram_4009281c;
            }
          }
          else {
            uVar9 = (ulonglong)(uint)((float)uVar9 + fVar19);
          }
        }
        pfVar4 = param_4 + 1;
        fVar10 = (float)*(undefined8 *)param_4 * fVar2 * (float)uVar9;
        *param_4 = fVar10;
        *param_5 = fVar10;
        param_4 = pfVar4;
        param_5 = param_5 + 1;
      } while (pfVar4 != pfVar7);
    }
  }
LAB_ram_4005e3d6:
  *(ulonglong *)(param_1 + 9) = uVar9;
  param_1[10] = (int)fVar19;
  param_1[0xb] = iVar8;
  return;
}


/* NanoCore 1.10, address 0x4005e946.
 * REA evidence: ev_efdf27d1a8c395ae32456394d02d082c39d584a37f342b0a3fe6f29809da84f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005e946(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    memset(param_1,0,0x2dc);
    *param_1 = DAT_ram_40098174;
    param_1[1] = DAT_ram_40098178;
    *(undefined2 *)(param_1 + 2) = 0x908;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4005e986.
 * REA evidence: ev_8dea2c292ae8555608ebf39026e6f097e9b49028ed94ea22e1208fb26fca1924
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005e986(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    memset(param_1,0,0x2dc);
    uVar2 = DAT_ram_40098178;
    uVar1 = DAT_ram_40098174;
    *param_1 = DAT_ram_40098174;
    param_1[1] = uVar2;
    *(undefined2 *)(param_1 + 2) = 0x908;
    memset(param_1 + 0xb7,0,0x2dc);
    param_1[0xb7] = uVar1;
    param_1[0xb8] = uVar2;
    *(undefined2 *)(param_1 + 0xb9) = 0x908;
    memset(param_1 + 0x16e,0,0x1e0);
    memset(param_1 + 0x1e6,0,0x28);
    *(undefined1 *)(param_1 + 0x1f0) = 0;
    *(undefined1 *)((int)param_1 + 0x7c1) = 0;
    *(undefined1 *)((int)param_1 + 0x7c2) = 0;
    *(undefined1 *)((int)param_1 + 0x7c3) = 0;
    *(undefined1 *)(param_1 + 0x1f1) = 0;
    *(undefined1 *)((int)param_1 + 0x7c5) = 0;
    *(undefined1 *)((int)param_1 + 0x7c6) = 0;
    *(undefined1 *)((int)param_1 + 0x7c7) = 0;
    *(undefined1 *)(param_1 + 0x1f2) = 0;
    *(undefined1 *)((int)param_1 + 0x7c9) = 0;
    *(undefined1 *)((int)param_1 + 0x7ca) = 0;
    *(undefined1 *)((int)param_1 + 0x7cb) = 0;
    *(undefined1 *)(param_1 + 499) = 0;
    *(undefined1 *)((int)param_1 + 0x7cd) = 0;
    *(undefined1 *)((int)param_1 + 0x7ce) = 0;
    *(undefined1 *)((int)param_1 + 1999) = 0;
    *(undefined1 *)(param_1 + 500) = 0;
    *(undefined1 *)((int)param_1 + 0x7d1) = 0;
    *(undefined1 *)((int)param_1 + 0x7d2) = 0;
    *(undefined1 *)((int)param_1 + 0x7d3) = 0;
    *(undefined1 *)(param_1 + 0x1f5) = 0;
    *(undefined1 *)((int)param_1 + 0x7d5) = 0;
    *(undefined1 *)((int)param_1 + 0x7d6) = 0;
    *(undefined1 *)((int)param_1 + 0x7d7) = 0;
    *(undefined1 *)(param_1 + 0x1f6) = 0;
    *(undefined1 *)((int)param_1 + 0x7d9) = 0;
    *(undefined1 *)((int)param_1 + 0x7da) = 0;
    *(undefined1 *)((int)param_1 + 0x7db) = 0;
    *(undefined1 *)(param_1 + 0x1f7) = 0;
    *(undefined1 *)((int)param_1 + 0x7dd) = 0;
    *(undefined2 *)((int)param_1 + 0x7de) = 0;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4005ea8e.
 * REA evidence: ev_7abede10ad3b91d9a94977b854c2d9da9628b7de232a9c4c73059eca52fd12f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005ea8e(int param_1)

{
  if (param_1 != 0) {
    return param_1 + (*(byte *)(param_1 + 0x7de) ^ 1) * 0x2dc;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4005eaa6.
 * REA evidence: ev_05c0d8ea5286ead53571dcac0cfcc6867a583e769cf70dbb8fdb5a4776c686a8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4005eaa6(int param_1)

{
  if (param_1 != 0) {
    return param_1 + (uint)*(byte *)(param_1 + 0x7de) * 0x2dc;
  }
  return 0;
}


/* NanoCore 1.10, address 0x4005eaba.
 * REA evidence: ev_282892573615492fd4d1eef3e9a32eb8f4fc65c68f91dbba48ad4d7f794f0817
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005eaba(int param_1)

{
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x7de) = *(byte *)(param_1 + 0x7de) ^ 1;
  }
  return;
}


/* NanoCore 1.10, address 0x4005eaca.
 * REA evidence: ev_45ef7a90d2b92ff9cfc5ae0b742f5280e9bbfa0c3a539604227e6a273b1c6a6b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005eaca(int param_1,uint param_2,undefined4 param_3,undefined1 param_4,
                     undefined4 param_5,int param_6)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 < 10)) {
    iVar1 = param_1 + param_2 * 0x48;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    *(undefined1 *)(iVar1 + 0x10) = param_4;
    *(undefined4 *)(iVar1 + 0x50) = param_5;
    *(bool *)(iVar1 + 0x11) = param_6 != 0;
    memset((void *)(param_1 + param_2 * 0x48 + 0x14),0,0x3c);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4005eb02.
 * REA evidence: ev_b5466d0ad5cf3cf566d9f18738b8e1a3fac910af492e7c505f2cde3f7b1a44ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4005eb02(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 0xc) {
    if (param_1 == 4) {
      uVar1 = FUN_ram_4006aa36(param_2,param_3);
      return uVar1;
    }
    if (param_1 == 5) {
      uVar1 = FUN_ram_4005fad0(param_2,param_3);
      return uVar1;
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4005eb2a.
 * REA evidence: ev_30159f79a87fb5840ac83b6d059d42a6b4434c390a1ad394375109a6ca9d88eb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005eb2a(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                     int param_6)

{
  if ((((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) && (param_6 != 0)) {
    FUN_ram_4005d7dc();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4005eb38.
 * REA evidence: ev_53affbfd0909861fa3eedb6356fc36a88b1162ec4f8a032a3ba27c66eb80981e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005eb38(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x4005eb50.
 * REA evidence: ev_0f5b9732a3b61252b6b9dfe9218ae608808fb52c427954b8816ef55910995da6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005eb50(undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  float fVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = DAT_ram_400930bc;
  uVar1 = DAT_ram_400930a4;
  fVar6 = DAT_ram_4009281c;
  if (param_7 == (undefined8 *)0x0) {
    return;
  }
  fVar5 = DAT_ram_4009281c;
  if (DAT_ram_4009281c <= param_2) {
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
  uVar3 = FUN_ram_40000d54(uVar1,(float)param_6 / fVar2);
  fVar5 = (float)param_7[2] * DAT_ram_40092864;
  param_7[4] = uVar3 & 0xffffffff;
  uVar4 = FUN_ram_40000d54(uVar1,(-fVar5 + (float)param_7[1]) / fVar2);
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
    uVar4 = FUN_ram_40000c0e(DAT_ram_40092818 / (fVar5 * DAT_ram_40098104 * fVar2));
    param_7[5] = uVar4;
    fVar6 = (float)param_7[3];
  }
  if (0.0 < fVar6) {
    uVar4 = FUN_ram_40000c0e(DAT_ram_40092818 / (fVar6 * DAT_ram_40098104 * fVar2));
    *(undefined8 *)((int)param_7 + 0x2c) = uVar4;
    return;
  }
  *(undefined4 *)((int)param_7 + 0x2c) = 0;
  return;
}


/* NanoCore 1.10, address 0x4005ecf2.
 * REA evidence: ev_0f01afe031a976d9f16ff4c5ab405081be44d273b1f27f442cb302eeb2c26325
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005ecf2(float param_1,ulonglong *param_2,uint param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  ulonglong uVar13;
  
  fVar3 = DAT_ram_4009281c;
  if (param_2 == (ulonglong *)0x0) {
    return;
  }
  fVar2 = param_1;
  if (param_1 < DAT_ram_4009281c) {
    fVar2 = DAT_ram_40092878;
  }
  memset((void *)((int)param_2 + 4),0,0x4c);
  *param_2 = (ulonglong)(uint)fVar2;
  if (param_3 == 0) {
    *(undefined1 *)((int)param_2 + 4) = 1;
  }
  else if (param_3 < 3) {
    *(char *)((int)param_2 + 4) = (char)param_3;
  }
  else {
    *(undefined1 *)((int)param_2 + 4) = 2;
  }
  uVar5 = DAT_ram_400930c8;
  fVar4 = DAT_ram_4009281c;
  uVar13 = (ulonglong)(uint)DAT_ram_4009281c;
  uVar11 = (ulonglong)DAT_ram_40092864;
  uVar6 = (ulonglong)DAT_ram_4009309c;
  uVar8 = (ulonglong)DAT_ram_400930a4;
  uVar9 = (ulonglong)DAT_ram_4009286c;
  uVar10 = (ulonglong)DAT_ram_400930f4;
  bVar1 = fVar2 <= DAT_ram_4009281c;
  param_2[6] = uVar11;
  *(ulonglong *)((int)param_2 + 0x34) = uVar11;
  *(undefined4 *)(param_2 + 1) = uVar5;
  *(ulonglong *)((int)param_2 + 0xc) = uVar6;
  *(ulonglong *)((int)param_2 + 0x14) = uVar8;
  param_2[3] = uVar9;
  param_2[4] = uVar13;
  *(ulonglong *)((int)param_2 + 0x24) = uVar10;
  if (bVar1) {
    uVar6 = FUN_ram_40000c0e(DAT_ram_40098204);
    param_2[5] = uVar6;
    fVar12 = (float)param_2[3];
    fVar2 = fVar4;
  }
  else {
    uVar6 = FUN_ram_40000c0e(DAT_ram_40092818 / (fVar2 * DAT_ram_40098208));
    param_2[5] = uVar6;
    fVar12 = (float)param_2[3];
  }
  if (0.0 < fVar12) {
    uVar7 = FUN_ram_40000c0e(DAT_ram_40092818 / (fVar12 * DAT_ram_40098104 * fVar2));
    *(undefined8 *)((int)param_2 + 0x2c) = uVar7;
  }
  else {
    *(undefined4 *)((int)param_2 + 0x2c) = 0;
  }
  fVar2 = DAT_ram_40098200;
  if (fVar3 < (float)*param_2) {
    fVar2 = DAT_ram_40098200 / (float)*param_2;
  }
  uVar7 = FUN_ram_40000c0e(fVar2);
  *(undefined4 *)(param_2 + 7) = 0;
  *(undefined8 *)((int)param_2 + 0x3c) = uVar7;
  param_2[8] = 0;
  *(undefined8 *)((int)param_2 + 0x44) = 0;
  *(bool *)((int)param_2 + 5) = 0.0 < param_1;
  param_2[9] = 0;
  *(undefined8 *)((int)param_2 + 0x4c) = 0;
  return;
}


/* NanoCore 1.10, address 0x4005ee60.
 * REA evidence: ev_f1700f9e1e68aec3c87a49ed87ac6ee5643762dcbee7a8f94fb0d3b995d825ae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4005ee60(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                     int param_7,undefined1 *param_8)

{
  byte bVar1;
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
  uint in_register_00000100;
  int iVar21;
  undefined1 uVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_4 == 0)) || (param_6 == 0)) {
    return;
  }
  if (param_7 == 0) {
    param_5 = 0;
    uVar22 = 0;
    param_3 = param_2;
  }
  else {
    if (param_3 == 0) {
      param_5 = 0;
    }
    else {
      uVar22 = 1;
      if (param_5 != 0) goto LAB_ram_4005ee96;
    }
    uVar22 = 0;
    param_3 = param_2;
  }
LAB_ram_4005ee96:
  if (param_8 != (undefined1 *)0x0) {
    *param_8 = uVar22;
  }
  fVar20 = DAT_ram_40098234;
  fVar19 = DAT_ram_40098230;
  fVar18 = DAT_ram_4009822c;
  fVar17 = DAT_ram_40098228;
  fVar16 = DAT_ram_40098224;
  fVar15 = DAT_ram_40098220;
  fVar14 = DAT_ram_4009821c;
  fVar13 = DAT_ram_40098218;
  fVar12 = DAT_ram_40098214;
  fVar11 = DAT_ram_40098210;
  fVar10 = DAT_ram_4009820c;
  fVar9 = DAT_ram_400980f8;
  fVar8 = DAT_ram_4009281c;
  if (*(char *)(param_1 + 5) == '\0') {
    if (param_2 != param_4) {
      FUN_ram_4000305c(param_4,param_2,param_6 << 2);
    }
    if ((param_5 != 0) && (param_5 != param_3)) {
      FUN_ram_4000305c(param_5,param_3,param_6 << 2);
      return;
    }
  }
  else {
    uVar26 = *(undefined8 *)(param_1 + 0x28);
    fVar2 = DAT_ram_4009281c / (float)*(undefined8 *)(param_1 + 0xc);
    uVar31 = *(undefined8 *)(param_1 + 0x2c);
    fVar3 = *(float *)(param_1 + 0x10);
    fVar7 = fVar3 * DAT_ram_40092864;
    fVar4 = *(float *)(param_1 + 0x24);
    bVar1 = *(byte *)(param_1 + 4);
    iVar21 = 0;
    do {
      fVar5 = *(float *)(param_2 + iVar21);
      uVar27 = *(undefined8 *)(param_1 + 0x40);
      fVar6 = *(float *)(param_3 + iVar21);
      *(ulonglong *)(param_1 + 0x40) = (ulonglong)(uint)fVar5;
      fVar24 = (float)*(undefined8 *)(param_1 + 0x3c);
      fVar28 = fVar24 * (float)*(undefined8 *)(param_1 + 0x48) + (fVar5 - (float)uVar27) * fVar24;
      *(ulonglong *)(param_1 + 0x48) = (ulonglong)(uint)fVar28;
      fVar30 = fVar28;
      if (1 < bVar1) {
        uVar27 = *(undefined8 *)(param_1 + 0x44);
        *(float *)(param_1 + 0x44) = fVar6;
        fVar30 = fVar24 * (float)*(undefined8 *)(param_1 + 0x4c) + (fVar6 - (float)uVar27) * fVar24;
        *(ulonglong *)(param_1 + 0x4c) = (ulonglong)(uint)fVar30;
      }
      fVar24 = (float)*(undefined8 *)(param_1 + 0x34);
      fVar28 = ABS(fVar24 * fVar28 + fVar5);
      fVar30 = ABS(fVar24 * fVar30 + fVar6);
      if (fVar28 < fVar30) {
        fVar28 = fVar30;
      }
      fVar30 = (float)*(undefined8 *)(param_1 + 0x38);
      fVar24 = (float)uVar31;
      if (fVar30 < fVar28) {
        fVar24 = (float)uVar26;
      }
      fVar30 = (fVar8 - fVar24) * (fVar28 - fVar30) + fVar30;
      *(ulonglong *)(param_1 + 0x38) = (ulonglong)(uint)fVar30;
      fVar28 = (float)*(undefined8 *)(param_1 + 0x20);
      if (fVar4 < fVar30 + fVar9) {
        fVar24 = (float)(in_register_00000100 & 0x7fffff | 0x3f800000);
        fVar25 = (float)*(undefined8 *)(param_1 + 8);
        fVar30 = fVar7 + fVar25;
        fVar24 = ((float)(int)(((in_register_00000100 & 0x7fffffff) >> 0x17) - 0x7f) +
                 ((fVar11 * fVar24 + fVar12) * fVar24 + fVar13) * fVar24 + fVar14) * fVar15;
        if (((fVar3 <= 0.0) || (fVar29 = fVar25 - fVar7, fVar24 <= fVar29)) || (fVar30 <= fVar24)) {
          fVar29 = fVar24;
          if (fVar30 <= fVar24) {
            fVar29 = (fVar24 - fVar25) * fVar2 + fVar25;
          }
        }
        else {
          fVar29 = fVar24 - fVar29;
          fVar30 = (float)*(undefined8 *)(param_1 + 0x10);
          fVar29 = ((fVar2 - fVar8) * fVar29 * fVar29) / (fVar30 + fVar30) + fVar24;
        }
        fVar30 = (fVar29 - fVar24) * fVar16;
        fVar24 = fVar10;
        if (fVar17 <= fVar30) {
          iVar23 = (int)fVar30;
          fVar24 = (float)iVar23;
          if (fVar24 <= fVar30) {
            iVar23 = iVar23 + 0x7f;
          }
          else {
            fVar24 = (float)(iVar23 + -1);
            iVar23 = iVar23 + 0x7e;
          }
          fVar30 = fVar30 - fVar24;
          fVar24 = (fVar30 * (fVar30 * (fVar30 * fVar18 + fVar19) + fVar20) + fVar8) *
                   (float)(iVar23 * 0x800000);
        }
        fVar28 = fVar28 * fVar24;
      }
      *(float *)(param_4 + iVar21) = fVar28 * fVar5;
      if (param_5 != 0) {
        *(float *)(param_5 + iVar21) = fVar28 * fVar6;
      }
      iVar21 = iVar21 + 4;
    } while (iVar21 != param_6 << 2);
  }
  return;
}


