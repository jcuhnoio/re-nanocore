/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40067000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400670ec.
 * REA evidence: ev_5601aed2e9f1a6d08c281a46738416f393d5dbf4d2525742fc447c4d3f7f0494
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_ram_400670ec(ulonglong param_1,float *param_2,float *param_3,float *param_4,
                          float *param_5,float *param_6,int param_7,float *param_8,uint param_9,
                          char param_10,int param_11)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  float in_register_00000100;
  float *pfVar4;
  char cVar5;
  ushort uVar6;
  float fVar7;
  bool bVar8;
  float fVar9;
  ushort uVar10;
  undefined2 uVar11;
  ushort uVar13;
  short sVar14;
  short sVar15;
  float fVar16;
  uint uVar17;
  float *pfVar18;
  int iVar19;
  uint uVar20;
  undefined2 uVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  ulonglong uVar35;
  float fVar36;
  ulonglong uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  uint uVar12;
  
  if (param_2 == (float *)0x0) {
    return param_1;
  }
  if (param_3 == (float *)0x0) {
    return param_1;
  }
  if (param_5 == (float *)0x0) {
    return param_1;
  }
  if (param_7 == 0) {
    return param_1;
  }
  if (param_11 != 0) {
    *(bool *)param_11 = param_10 != '\0';
  }
  bVar8 = param_10 != '\0' && (param_4 != (float *)0x0 && param_6 != (float *)0x0);
  uVar20 = (uint)*(byte *)(param_2 + 1);
  fVar23 = DAT_ram_4009281c;
  if (param_9 < 4) {
    if (param_9 != uVar20) goto LAB_ram_40067aba;
LAB_ram_40067178:
    fVar26 = DAT_ram_400980fc;
    if (uVar20 == 1) {
      if (param_8 == (float *)0x0) {
        if (DAT_ram_400980fc < ABS(DAT_ram_40092864 - (float)*(undefined8 *)(param_2 + 4))) {
          uVar35 = (ulonglong)DAT_ram_40098558;
          *(ulonglong *)(param_2 + 4) = (ulonglong)(uint)DAT_ram_40092864;
          fVar25 = 0.0;
LAB_ram_4006761e:
          param_2[0x840] = fVar25;
        }
        else {
          uVar35 = (ulonglong)DAT_ram_40098558;
        }
      }
      else {
        fVar30 = *param_8;
        uVar22 = (ulonglong)(uint)fVar30;
        if (0.0 <= fVar30) {
          if (fVar23 < fVar30) {
            uVar22 = (ulonglong)(uint)fVar23;
          }
        }
        else {
          uVar22 = 0;
        }
        fVar30 = param_8[1];
        uVar35 = (ulonglong)(uint)fVar30;
        if (0.0 <= fVar30) {
          if (fVar23 < fVar30) {
            uVar35 = (ulonglong)(uint)fVar23;
          }
        }
        else {
          uVar35 = 0;
        }
        fVar30 = (float)uVar22;
        if (DAT_ram_400980fc < ABS(fVar30 - (float)*(undefined8 *)(param_2 + 4))) {
          *(ulonglong *)(param_2 + 4) = uVar22;
          fVar25 = DAT_ram_400941d0;
          if ((0.0 <= fVar30) && (fVar25 = DAT_ram_400930cc, fVar30 <= fVar23)) {
            fVar25 = fVar30 * DAT_ram_40093494 + DAT_ram_400941d0;
          }
          goto LAB_ram_4006761e;
        }
      }
      fVar25 = DAT_ram_400941d4;
      fVar30 = DAT_ram_400930bc;
      fVar28 = (float)uVar35;
      uVar6 = *(ushort *)(param_2 + 0x832);
      if (ABS(fVar28 - (float)*(undefined8 *)(param_2 + 5)) <= fVar26) goto LAB_ram_4006769c;
      fVar26 = (float)*(undefined8 *)param_2;
      if ((float)*(undefined8 *)param_2 <= fVar23) {
        fVar26 = DAT_ram_40092878;
      }
      fVar24 = fVar23;
      if (uVar6 != 0) {
        fVar24 = (float)uVar6;
      }
      fVar42 = DAT_ram_40098530;
      if ((fVar28 < 0.0) || (fVar42 = DAT_ram_400930fc, fVar23 < fVar28)) {
        *(ulonglong *)(param_2 + 5) = uVar35;
LAB_ram_40068a2a:
        if (fVar42 < (float)DAT_ram_40098564) {
          fVar42 = (float)DAT_ram_40098564;
        }
        param_1 = FUN_ram_40000c0e(-(fVar24 / fVar26) / fVar42);
        uVar6 = *(ushort *)(param_2 + 0x832);
      }
      else {
        *(ulonglong *)(param_2 + 5) = uVar35;
        param_1 = 0;
        fVar30 = fVar28 * fVar25 + fVar30;
        if (0.0 < fVar30) {
          fVar42 = fVar30 * DAT_ram_40098104;
          goto LAB_ram_40068a2a;
        }
      }
      param_2[0x837] = (float)param_1;
LAB_ram_4006769c:
      fVar29 = DAT_ram_400980f8;
      fVar39 = DAT_ram_400930cc;
      fVar42 = DAT_ram_400930a4;
      fVar24 = DAT_ram_4009309c;
      fVar30 = param_2[0x841];
      fVar25 = param_2[0x842];
      fVar26 = param_2[0x847];
      fVar28 = param_2[0x848];
      uVar13 = *(ushort *)(param_2 + 0x849);
      uVar10 = *(ushort *)(param_2 + 0x84a);
      if (uVar6 == 0) {
        uVar6 = 1;
      }
      iVar19 = 0;
      do {
        fVar33 = (float)*(undefined8 *)((int)param_3 + iVar19);
        fVar32 = fVar33;
        if ((bVar8) && (param_4 != (float *)0x0)) {
          fVar32 = (fVar33 + (float)*(undefined8 *)((int)param_4 + iVar19)) * DAT_ram_40092864;
        }
        fVar30 = (fVar23 - param_2[0x834]) * fVar32 + param_2[0x834] * fVar30;
        fVar25 = (fVar32 - fVar30) * (fVar23 - param_2[0x835]) + param_2[0x835] * fVar25;
        fVar32 = fVar25 * fVar25;
        fVar26 = fVar26 + fVar32;
        if (fVar28 < fVar32) {
          fVar28 = fVar32;
        }
        uVar13 = uVar13 + 1;
        fVar32 = (float)uVar10 * (fVar23 / (float)uVar6);
        if (fVar23 < fVar32) {
          fVar32 = fVar23;
        }
        if (uVar10 < uVar6) {
          uVar10 = uVar10 + 1;
        }
        fVar32 = (param_2[0x84f] - param_2[0x84e]) * fVar32 + param_2[0x84e];
        *(ulonglong *)((int)param_5 + iVar19) = (ulonglong)(uint)(fVar32 * fVar33);
        if (((bVar8) && (param_4 != (float *)0x0)) && (param_6 != (float *)0x0)) {
          *(ulonglong *)((int)param_6 + iVar19) =
               (ulonglong)(uint)((float)*(undefined8 *)((int)param_4 + iVar19) * fVar32);
        }
        if (uVar6 <= uVar13) {
          fVar32 = fVar26 / (float)uVar13;
          if (fVar26 / (float)uVar13 < fVar29) {
            fVar32 = fVar29;
          }
          if (fVar28 < fVar29) {
            fVar28 = fVar29;
          }
          if (fVar32 <= param_2[0x843]) {
            fVar26 = param_2[0x837];
          }
          else {
            fVar26 = param_2[0x836];
          }
          fVar26 = param_2[0x843] * fVar26 + (fVar23 - fVar26) * fVar32;
          param_2[0x843] = fVar26;
          if (fVar28 <= param_2[0x844]) {
            fVar33 = param_2[0x839];
          }
          else {
            fVar33 = param_2[0x838];
          }
          param_2[0x844] = param_2[0x844] * fVar33 + (fVar23 - fVar33) * fVar28;
          if (fVar26 < fVar29) {
            fVar26 = fVar29;
          }
          fVar26 = (float)FUN_ram_40000cec(fVar26);
          fVar26 = fVar26 * fVar42;
          fVar33 = param_2[0x844];
          if (param_2[0x844] < fVar29) {
            fVar33 = fVar29;
          }
          fVar27 = (float)FUN_ram_40000cec(fVar33);
          fVar27 = fVar27 * fVar42;
          fVar33 = param_2[0x845];
          if ((param_2[0x84b] != 0.0) || (0.0 < fVar33)) {
            bVar2 = 0;
          }
          else {
            fVar33 = param_2[0x843];
            if (((float)DAT_ram_40098574 < fVar26) || (DAT_ram_40098574._4_4_ < fVar27)) {
              fVar33 = fVar33 * DAT_ram_4009857c;
              if (fVar33 < fVar29) {
                fVar33 = fVar29;
              }
              param_2[0x845] = fVar33;
              bVar2 = 1;
            }
            else {
              param_2[0x845] = fVar33;
              bVar2 = 0;
            }
          }
          if (fVar33 < fVar29) {
            fVar33 = fVar29;
          }
          param_1 = FUN_ram_40000cec(fVar33);
          fVar33 = (float)param_1 * fVar42;
          cVar5 = *(char *)(param_2 + 0x84c);
          fVar7 = param_2[0x84b];
          bVar1 = (fVar33 + param_2[0x846] + fVar42) - param_2[0x840] < fVar27;
          fVar34 = fVar23;
          if (((fVar33 + fVar39) - param_2[0x840]) + fVar24 < fVar26) {
            fVar9 = (float)(uint)*(ushort *)(param_2 + 0x833);
            bVar1 = true;
            if ((uint)fVar9 <= (uint)fVar7) goto LAB_ram_400687a2;
LAB_ram_400687c2:
            sVar14 = *(short *)((int)param_2 + 0x20ca);
            cVar5 = '\x01';
          }
          else {
            fVar9 = (float)(uint)*(ushort *)(param_2 + 0x833);
            if ((uint)fVar7 < (uint)fVar9) {
              if ((bool)(bVar2 | bVar1)) goto LAB_ram_400687c2;
LAB_ram_4006841c:
              if (param_2[0x843] <= param_2[0x845]) {
                fVar33 = param_2[0x83b];
              }
              else {
                fVar33 = param_2[0x83a];
              }
              param_2[0x845] = param_2[0x845] * fVar33 + (fVar23 - fVar33) * param_2[0x843];
              fVar28 = (float)FUN_ram_40000cec(fVar28 / fVar32);
              fVar28 = fVar28 * fVar42;
              fVar32 = fVar39;
              if ((fVar39 <= fVar28) && (fVar32 = fVar28, (float)_DAT_ram_4009424c < fVar28)) {
                fVar32 = (float)_DAT_ram_4009424c;
              }
              param_2[0x846] = param_2[0x83c] * param_2[0x846] + (fVar23 - param_2[0x83c]) * fVar32;
              fVar28 = param_2[0x845];
              if (param_2[0x845] < fVar29) {
                fVar28 = fVar29;
              }
              param_1 = FUN_ram_40000cec(fVar28);
              fVar28 = (float)param_1 * fVar42;
              fVar16 = fVar28 + fVar24;
              if (((fVar28 + fVar39) - param_2[0x840]) + fVar24 < fVar26) {
                fVar7 = param_2[0x84b];
                if (((uint)fVar7 < (uint)*(ushort *)(param_2 + 0x833)) || (cVar5 == '\0'))
                goto LAB_ram_400687c2;
                sVar15 = *(short *)((int)param_2 + 0x2126);
                goto LAB_ram_400689d4;
              }
              fVar7 = param_2[0x84b];
              fVar9 = (float)(uint)*(ushort *)(param_2 + 0x833);
              bVar1 = (fVar28 + param_2[0x846] + fVar42) - param_2[0x840] < fVar27;
LAB_ram_400684de:
              sVar15 = *(short *)((int)param_2 + 0x2126);
              if ((uint)fVar9 <= (uint)fVar7) goto LAB_ram_400687ba;
              if ((bool)(bVar2 | bVar1)) goto LAB_ram_400687c2;
              if (cVar5 == '\0') {
                sVar14 = 0;
                goto LAB_ram_400684fc;
              }
LAB_ram_40068a00:
              sVar14 = 0;
              if (sVar15 != 0) {
                sVar14 = sVar15 + -1;
                goto LAB_ram_40068506;
              }
            }
            else {
LAB_ram_400687a2:
              fVar16 = fVar33 + fVar24;
              if (fVar27 <= fVar33 + param_2[0x846] + fVar39) {
                if (fVar26 <= fVar33 + (float)_DAT_ram_400980bc) goto LAB_ram_4006841c;
                goto LAB_ram_400684de;
              }
              sVar15 = *(short *)((int)param_2 + 0x2126);
LAB_ram_400687ba:
              if (cVar5 != '\0') {
LAB_ram_400689d4:
                if (fVar16 <= fVar26) {
                  sVar14 = *(short *)((int)param_2 + 0x20ca);
                  goto LAB_ram_40068506;
                }
                goto LAB_ram_40068a00;
              }
              sVar14 = sVar15;
              if (bVar1) goto LAB_ram_400687c2;
            }
LAB_ram_400684fc:
            cVar5 = '\0';
            fVar34 = param_2[0x83f];
          }
LAB_ram_40068506:
          fVar32 = param_2[0x84d];
          if (fVar34 <= fVar32) {
            fVar33 = param_2[0x83e];
          }
          else {
            fVar33 = param_2[0x83d];
          }
          param_2[0x84e] = fVar32;
          fVar28 = 0.0;
          *(short *)((int)param_2 + 0x2126) = sVar14;
          fVar26 = 0.0;
          *(undefined2 *)(param_2 + 0x84a) = 0;
          fVar32 = fVar32 * fVar33 + (fVar23 - fVar33) * fVar34;
          *(char *)(param_2 + 0x84c) = cVar5;
          param_2[0x84b] = (float)((int)fVar7 + 1);
          uVar10 = 0;
          uVar13 = 0;
          param_2[0x84f] = fVar32;
          param_2[0x84d] = fVar32;
        }
        iVar19 = iVar19 + 4;
        if (param_7 << 2 == iVar19) {
          param_2[0x841] = fVar30;
          param_2[0x842] = fVar25;
          param_2[0x847] = fVar26;
          param_2[0x848] = fVar28;
          *(ushort *)(param_2 + 0x849) = uVar13;
          *(ushort *)(param_2 + 0x84a) = uVar10;
          return param_1;
        }
      } while( true );
    }
    if (uVar20 != 3) goto LAB_ram_40067184;
    if (param_8 == (float *)0x0) {
      fVar30 = 0.0;
      fVar26 = DAT_ram_40098560;
      fVar25 = DAT_ram_400930d8;
      fVar28 = DAT_ram_400930f4;
      fVar24 = DAT_ram_40092864;
      fVar42 = DAT_ram_400930c8;
LAB_ram_40068804:
      fVar39 = fVar26 * DAT_ram_400941d8 + fVar23;
    }
    else {
      fVar39 = *param_8;
      if (fVar39 < 0.0) {
        fVar39 = 0.0;
      }
      else if (fVar23 < fVar39) {
        fVar39 = fVar23;
      }
      fVar26 = param_8[1];
      if (fVar26 < 0.0) {
        fVar26 = 0.0;
      }
      else if (fVar23 < fVar26) {
        fVar26 = fVar23;
      }
      fVar30 = param_8[2];
      if (fVar30 < 0.0) {
        fVar30 = 0.0;
      }
      else if (fVar23 < fVar30) {
        fVar30 = fVar23;
      }
      fVar25 = param_8[3];
      if (fVar25 < 0.0) {
        fVar25 = 0.0;
      }
      else if (fVar23 < fVar25) {
        fVar25 = fVar23;
      }
      fVar28 = param_8[4];
      if (fVar28 < 0.0) {
        fVar28 = 0.0;
      }
      else if (fVar23 < fVar28) {
        fVar28 = fVar23;
      }
      fVar24 = param_8[5];
      if (fVar24 < 0.0) {
        fVar24 = 0.0;
      }
      else if (fVar23 < fVar24) {
        fVar24 = fVar23;
      }
      fVar42 = DAT_ram_400936e4;
      if ((0.0 <= fVar39) && (fVar42 = 0.0, fVar39 <= fVar23)) {
        fVar42 = fVar39 * DAT_ram_400936e0 + DAT_ram_400936e4;
      }
      fVar39 = fVar23;
      if ((0.0 <= fVar26) && (fVar39 = DAT_ram_400930bc, fVar26 <= fVar23)) goto LAB_ram_40068804;
    }
    fVar26 = 0.0;
    if ((0.0 <= fVar30) && (fVar26 = DAT_ram_400934e0, fVar30 <= fVar23)) {
      fVar26 = fVar30 * DAT_ram_400934e0 + 0.0;
    }
    fVar30 = 0.0;
    if ((0.0 <= fVar25) && (fVar30 = DAT_ram_400941dc, fVar25 <= fVar23)) {
      fVar30 = fVar25 * DAT_ram_400941dc + 0.0;
    }
    fVar25 = 0.0;
    if ((0.0 <= fVar28) && (fVar25 = DAT_ram_40093094, fVar28 <= fVar23)) {
      fVar25 = fVar28 * DAT_ram_40093094 + 0.0;
    }
    fVar28 = DAT_ram_400934e4;
    if ((0.0 <= fVar24) && (fVar28 = DAT_ram_400934e0, fVar24 <= fVar23)) {
      fVar28 = fVar24 * DAT_ram_400941e0 + DAT_ram_400934e4;
    }
    FUN_ram_4005eb50(fVar42,fVar39,fVar26,fVar30,fVar25,fVar28,param_2 + 0x81e);
    if (param_10 == '\0' || (param_4 == (float *)0x0 || param_6 == (float *)0x0)) {
      param_4 = (float *)0x0;
      param_6 = (float *)0x0;
    }
    goto LAB_ram_4006756a;
  }
  if (uVar20 != 0) {
    param_9 = 0;
LAB_ram_40067aba:
    uVar22 = (ulonglong)DAT_ram_40092818;
    *(char *)(param_2 + 1) = (char)param_9;
    *(ulonglong *)(param_2 + 2) = uVar22;
    *(ulonglong *)(param_2 + 3) = uVar22;
    *(ulonglong *)(param_2 + 4) = uVar22;
    *(ulonglong *)(param_2 + 5) = uVar22;
    fVar23 = DAT_ram_4009281c;
    if (*(short *)(param_2 + 0x832) == 0) {
      fVar26 = *param_2;
      if (fVar26 <= DAT_ram_4009281c) {
        uVar11 = 0x2c;
        fVar26 = DAT_ram_40092878;
        fVar30 = DAT_ram_40098528;
        fVar25 = DAT_ram_40098524;
        fVar28 = DAT_ram_40098520;
      }
      else {
        fVar30 = fVar26 / DAT_ram_40093094 + DAT_ram_40092864;
        uVar20 = (uint)(-1 < (int)fVar30) * (int)fVar30;
        uVar17 = 1;
        if (uVar20 != 0) {
          uVar17 = uVar20;
        }
        uVar12 = 0xffff;
        if (uVar20 < 0x10000) {
          uVar12 = uVar17;
        }
        uVar11 = (undefined2)uVar12;
        fVar30 = (float)(uVar12 & 0xffff) / fVar26;
        fVar25 = -fVar30;
        fVar28 = fVar25 / DAT_ram_40098208;
      }
      *(undefined2 *)(param_2 + 0x832) = uVar11;
      fVar24 = (float)FUN_ram_40000c0e(fVar28);
      fVar28 = DAT_ram_4009852c;
      param_2[0x836] = fVar24;
      fVar24 = (float)FUN_ram_40000c0e(fVar25 / fVar28);
      fVar28 = DAT_ram_40098104;
      param_2[0x837] = fVar24;
      fVar24 = (float)FUN_ram_40000c0e(fVar25 / fVar28);
      fVar28 = DAT_ram_40098530;
      param_2[0x838] = fVar24;
      fVar24 = (float)FUN_ram_40000c0e(fVar25 / fVar28);
      fVar28 = DAT_ram_40098340;
      param_2[0x839] = fVar24;
      fVar24 = (float)FUN_ram_40000c0e(fVar25 / fVar28);
      fVar28 = DAT_ram_40098254;
      param_2[0x83a] = fVar24;
      fVar28 = (float)FUN_ram_40000c0e(fVar25 / fVar28);
      param_2[0x83b] = fVar28;
      fVar24 = (float)FUN_ram_40000c0e(fVar25);
      fVar28 = DAT_ram_40098534;
      param_2[0x83c] = fVar24;
      fVar24 = (float)FUN_ram_40000c0e(fVar25 / fVar28);
      fVar28 = DAT_ram_40098538;
      param_2[0x83d] = fVar24;
      fVar28 = (float)FUN_ram_40000c0e(fVar25 / fVar28);
      fVar25 = DAT_ram_4009850c;
      param_2[0x83e] = fVar28;
      fVar28 = DAT_ram_4009853c;
      uVar11 = 0;
      if (0.0 <= fVar25 / fVar30) {
        fVar25 = fVar25 / fVar30 + DAT_ram_40092864;
        uVar20 = (uint)(-1 < (int)fVar25) * (int)fVar25;
        if (0xffff < uVar20) {
          uVar20 = 0xffff;
        }
        uVar11 = (undefined2)uVar20;
      }
      uVar21 = 0;
      if (0.0 <= DAT_ram_400930fc / fVar30) {
        fVar30 = DAT_ram_400930fc / fVar30 + DAT_ram_40092864;
        uVar20 = (uint)(-1 < (int)fVar30) * (int)fVar30;
        if (0xffff < uVar20) {
          uVar20 = 0xffff;
        }
        uVar21 = (undefined2)uVar20;
      }
      fVar30 = DAT_ram_40098540 / fVar26;
      *(undefined2 *)((int)param_2 + 0x20ca) = uVar11;
      param_2[0x83f] = fVar28;
      *(undefined2 *)(param_2 + 0x833) = uVar21;
      param_2[0x840] = 0.0;
      fVar25 = (float)FUN_ram_40000c0e(fVar30);
      fVar30 = DAT_ram_40098544;
      param_2[0x834] = fVar25;
      fVar26 = (float)FUN_ram_40000c0e(fVar30 / fVar26);
      param_2[0x835] = fVar26;
    }
    uVar3 = DAT_ram_40098548;
    fVar26 = DAT_ram_400930a4;
    uVar22 = (ulonglong)(uint)DAT_ram_400980f8;
    *(ulonglong *)(param_2 + 0x13) = uVar22;
    fVar25 = DAT_ram_40098374;
    *(ulonglong *)(param_2 + 0x14) = uVar22;
    param_2[0x1c] = fVar25;
    *(undefined1 *)((int)param_2 + 0x46) = 0;
    param_2[0x1a] = 0.0;
    param_2[0x1b] = 0.0;
    *(undefined2 *)(param_2 + 0x1d) = 0;
    uVar31 = FUN_ram_40000d54(fVar26,uVar3);
    fVar30 = DAT_ram_40093494;
    uVar22 = (ulonglong)DAT_ram_4009854c;
    fVar26 = param_2[0x83f];
    *(ulonglong *)(param_2 + 0x15) = uVar22;
    *(undefined8 *)(param_2 + 0x17) = uVar31;
    *(ulonglong *)(param_2 + 0x16) = uVar22;
    *(undefined8 *)(param_2 + 0x18) = uVar31;
    param_2[0x849] = fVar25;
    param_2[0x841] = 0.0;
    param_2[0x842] = 0.0;
    param_2[0x843] = 0.0;
    param_2[0x844] = 0.0;
    param_2[0x845] = 0.0;
    param_2[0x846] = fVar30;
    param_2[0x847] = 0.0;
    param_2[0x848] = 0.0;
    param_2[0x84b] = 0.0;
    *(undefined1 *)(param_2 + 0x84c) = 0;
    param_2[0x84d] = fVar26;
    param_2[0x84e] = fVar26;
    param_2[0x84f] = fVar26;
    *(undefined2 *)(param_2 + 0x84a) = 0;
    param_1 = FUN_ram_4005eb38(param_2 + 0x81e);
    uVar20 = param_9;
    goto LAB_ram_40067178;
  }
LAB_ram_40067184:
  fVar26 = DAT_ram_400930a4;
  fVar30 = DAT_ram_40093664;
  if (param_8 == (float *)0x0) {
    uVar37 = (ulonglong)DAT_ram_40093100;
    uVar22 = (ulonglong)DAT_ram_40098564._4_4_;
    uVar35 = (ulonglong)DAT_ram_40093708;
  }
  else {
    fVar25 = *param_8;
    uVar37 = (ulonglong)(uint)fVar25;
    if (fVar25 < 0.0) {
      uVar22 = (ulonglong)(uint)DAT_ram_40093498;
      uVar37 = 0;
    }
    else if (fVar23 < fVar25) {
      uVar22 = 0;
      uVar37 = (ulonglong)(uint)fVar23;
    }
    else {
      uVar22 = (ulonglong)(uint)(fVar25 * DAT_ram_4009286c + DAT_ram_40093498);
    }
    if (uVar20 == 0) {
      fVar30 = param_8[1];
      uVar35 = (ulonglong)(uint)fVar30;
      if (fVar30 < 0.0) {
        uVar35 = 0;
        fVar30 = DAT_ram_400930e8;
      }
      else if (fVar23 < fVar30) {
        uVar35 = (ulonglong)(uint)fVar23;
        fVar30 = DAT_ram_4009286c;
      }
      else {
        fVar30 = fVar30 * DAT_ram_400934c8 + DAT_ram_400930e8;
      }
    }
    else {
      uVar35 = (ulonglong)DAT_ram_40093708;
    }
  }
  fVar25 = *param_2;
  fVar28 = (float)uVar22;
  if ((DAT_ram_400980fc < ABS((float)uVar37 - (float)*(undefined8 *)(param_2 + 2))) ||
     (DAT_ram_400980fc < ABS((float)uVar35 - (float)*(undefined8 *)(param_2 + 3)))) {
    *(ulonglong *)(param_2 + 2) = uVar37;
    *(ulonglong *)(param_2 + 3) = uVar35;
    fVar24 = DAT_ram_400930a4;
    fVar26 = DAT_ram_40092878;
    fVar42 = DAT_ram_4009856c;
    if (fVar23 < fVar25) {
      fVar26 = fVar25;
      fVar42 = fVar23 / fVar25;
    }
    *(ulonglong *)(param_2 + 6) = uVar22;
    uVar31 = FUN_ram_40000d54(fVar24,fVar28 / fVar24);
    *(undefined8 *)(param_2 + 7) = uVar31;
    fVar39 = DAT_ram_40093094;
    fVar25 = DAT_ram_40092864;
    uVar35 = (ulonglong)(uint)fVar23;
    fVar29 = (float)*(undefined8 *)(param_2 + 0x19);
    if (0.0 <= fVar29) {
      if (DAT_ram_40098580 < fVar29) {
        uVar35 = (ulonglong)DAT_ram_40098570;
      }
      else {
        uVar35 = (ulonglong)(uint)(fVar23 - fVar29);
      }
    }
    fVar29 = fVar26 * DAT_ram_40093664;
    *(ulonglong *)(param_2 + 0xc) = uVar35;
    fVar29 = (float)FUN_ram_40000d54(fVar25,fVar39 / fVar29);
    *(ulonglong *)(param_2 + 8) = (ulonglong)(uint)fVar29;
    *(ulonglong *)(param_2 + 9) = (ulonglong)(uint)(fVar23 - fVar29);
    uVar35 = FUN_ram_40000d54(fVar25,fVar39 / (fVar26 * fVar30));
    fVar30 = DAT_ram_400930e4;
    *(ulonglong *)(param_2 + 10) = uVar35;
    param_2[0xb] = fVar23 - (float)uVar35;
    fVar39 = DAT_ram_40098334;
    fVar25 = DAT_ram_400930d8;
    if (fVar30 < fVar28) {
      fVar32 = (fVar30 - fVar28) * DAT_ram_40098584 * (fVar30 - fVar28);
      fVar29 = fVar32 / DAT_ram_400930d8;
      param_2[0xd] = fVar32;
      *(ulonglong *)(param_2 + 0xf) = (ulonglong)(uint)(fVar29 * fVar42);
      param_2[0xe] = (-fVar32 / fVar39) * fVar42;
      if (0.0 <= fVar32) {
        uVar37 = 0;
      }
      else {
        uVar37 = (ulonglong)(uint)(DAT_ram_40098588 / (0.0 - fVar32));
      }
    }
    else {
      uVar37 = 0;
      fVar32 = 0.0;
      fVar39 = fVar42 * DAT_ram_40098598;
      param_2[0xd] = 0.0;
      param_2[0xe] = 0.0;
      *(ulonglong *)(param_2 + 0xe) = (ulonglong)(uint)fVar39;
      param_2[0xf] = fVar42 * 0.0;
    }
    fVar26 = fVar26 * fVar25;
    *(ulonglong *)(param_2 + 0x10) = uVar37;
    uVar17 = (uint)(-1 < (int)fVar26) * (int)fVar26;
    uVar17 = uVar17 + ((float)uVar17 < fVar26);
    uVar12 = 1;
    if (uVar17 != 0) {
      uVar12 = uVar17;
    }
    uVar11 = (short)uVar12;
    if (0xffff < uVar17) {
      uVar11 = 0xffff;
    }
    *(undefined2 *)(param_2 + 0x11) = uVar11;
    fVar25 = DAT_ram_4009858c;
    fVar26 = DAT_ram_40098584;
    if ((*(char *)((int)param_2 + 0x46) == '\0') ||
       (DAT_ram_40092840 < ABS((float)*(undefined8 *)(param_2 + 0x12) - fVar28))) {
      pfVar4 = param_2 + 0x41e;
      do {
        while (fVar30 < fVar28) {
          fVar42 = fVar30 - fVar28;
          pfVar18 = pfVar4 + 1;
          fVar30 = fVar30 + fVar25;
          *pfVar4 = fVar42 * fVar26 * fVar42;
          pfVar4 = pfVar18;
          if (pfVar18 == param_2 + 0x81e) goto LAB_ram_40067a5a;
        }
        *pfVar4 = 0.0;
        pfVar4 = pfVar4 + 1;
        fVar30 = fVar30 + fVar25;
      } while (param_2 + 0x81e != pfVar4);
LAB_ram_40067a5a:
      if (fVar32 < 0.0) {
        fVar30 = (float)FUN_ram_40000d54(fVar24,-((0.0 - fVar32) / DAT_ram_40098588) / fVar24);
        pfVar4 = param_2 + 0x41d;
        fVar26 = fVar23;
        do {
          *(ulonglong *)pfVar4 = (ulonglong)(uint)fVar26;
          pfVar4 = pfVar4 + -1;
          fVar26 = fVar26 * fVar30;
        } while (param_2 + 0x1d != pfVar4);
LAB_ram_400685c4:
        uVar35 = *(ulonglong *)(param_2 + 10);
        *(ulonglong *)(param_2 + 0x41d) = (ulonglong)(uint)DAT_ram_4009281c;
      }
      else {
        uVar37 = (ulonglong)(uint)DAT_ram_4009281c;
        pfVar4 = param_2 + 0x1e;
        do {
          *(ulonglong *)pfVar4 = uVar37;
          pfVar4 = pfVar4 + 1;
        } while (param_2 + 0x41e != pfVar4);
      }
      goto LAB_ram_40067a84;
    }
LAB_ram_40067a94:
    fVar25 = *param_2;
  }
  else if (*(char *)((int)param_2 + 0x46) == '\0') {
    fVar24 = DAT_ram_40092878;
    fVar42 = DAT_ram_4009856c;
    if (fVar23 < fVar25) {
      fVar24 = fVar25;
      fVar42 = fVar23 / fVar25;
    }
    *(ulonglong *)(param_2 + 6) = uVar22;
    uVar31 = FUN_ram_40000d54(fVar26,fVar28 / fVar26);
    *(undefined8 *)(param_2 + 7) = uVar31;
    fVar39 = DAT_ram_40093094;
    fVar25 = DAT_ram_40092864;
    uVar35 = (ulonglong)(uint)fVar23;
    fVar29 = (float)*(undefined8 *)(param_2 + 0x19);
    if (0.0 <= fVar29) {
      if (DAT_ram_40098580 < fVar29) {
        uVar35 = (ulonglong)DAT_ram_40098570;
      }
      else {
        uVar35 = (ulonglong)(uint)(fVar23 - fVar29);
      }
    }
    fVar29 = fVar24 * DAT_ram_40093664;
    *(ulonglong *)(param_2 + 0xc) = uVar35;
    fVar29 = (float)FUN_ram_40000d54(fVar25,fVar39 / fVar29);
    *(ulonglong *)(param_2 + 8) = (ulonglong)(uint)fVar29;
    *(ulonglong *)(param_2 + 9) = (ulonglong)(uint)(fVar23 - fVar29);
    uVar35 = FUN_ram_40000d54(fVar25,fVar39 / (fVar24 * fVar30));
    fVar30 = DAT_ram_400930e4;
    *(ulonglong *)(param_2 + 10) = uVar35;
    param_2[0xb] = fVar23 - (float)uVar35;
    fVar39 = DAT_ram_40098334;
    fVar25 = DAT_ram_400930d8;
    if (fVar30 < fVar28) {
      fVar32 = (fVar30 - fVar28) * DAT_ram_40098584 * (fVar30 - fVar28);
      fVar29 = fVar32 / DAT_ram_400930d8;
      param_2[0xd] = fVar32;
      *(ulonglong *)(param_2 + 0xf) = (ulonglong)(uint)(fVar29 * fVar42);
      param_2[0xe] = (-fVar32 / fVar39) * fVar42;
      if (0.0 <= fVar32) {
        uVar37 = 0;
      }
      else {
        uVar37 = (ulonglong)(uint)(DAT_ram_40098588 / (0.0 - fVar32));
      }
    }
    else {
      uVar37 = 0;
      fVar32 = 0.0;
      fVar39 = fVar42 * DAT_ram_40098598;
      param_2[0xd] = 0.0;
      param_2[0xe] = 0.0;
      *(ulonglong *)(param_2 + 0xe) = (ulonglong)(uint)fVar39;
      param_2[0xf] = fVar42 * 0.0;
    }
    fVar24 = fVar24 * fVar25;
    *(ulonglong *)(param_2 + 0x10) = uVar37;
    uVar17 = (uint)(-1 < (int)fVar24) * (int)fVar24;
    uVar17 = uVar17 + ((float)uVar17 < fVar24);
    uVar12 = 1;
    if (uVar17 != 0) {
      uVar12 = uVar17;
    }
    uVar11 = (undefined2)uVar12;
    if (0xffff < uVar17) {
      uVar11 = 0xffff;
    }
    *(undefined2 *)(param_2 + 0x11) = uVar11;
    fVar24 = DAT_ram_4009858c;
    fVar25 = DAT_ram_40098584;
    if ((*(char *)((int)param_2 + 0x46) != '\0') &&
       (ABS((float)*(undefined8 *)(param_2 + 0x12) - fVar28) <= DAT_ram_40092840))
    goto LAB_ram_40067a94;
    pfVar4 = param_2 + 0x41e;
    do {
      while (fVar30 < fVar28) {
        fVar42 = fVar30 - fVar28;
        pfVar18 = pfVar4 + 1;
        fVar30 = fVar30 + fVar24;
        *pfVar4 = fVar42 * fVar25 * fVar42;
        pfVar4 = pfVar18;
        if (pfVar18 == param_2 + 0x81e) goto LAB_ram_4006872c;
      }
      *pfVar4 = 0.0;
      pfVar4 = pfVar4 + 1;
      fVar30 = fVar30 + fVar24;
    } while (param_2 + 0x81e != pfVar4);
LAB_ram_4006872c:
    if (fVar32 < 0.0) {
      fVar30 = (float)FUN_ram_40000d54(fVar26,-((0.0 - fVar32) / DAT_ram_40098588) / fVar26);
      pfVar4 = param_2 + 0x41d;
      fVar26 = fVar23;
      do {
        *(ulonglong *)pfVar4 = (ulonglong)(uint)fVar26;
        pfVar4 = pfVar4 + -1;
        fVar26 = fVar26 * fVar30;
      } while (param_2 + 0x1d != pfVar4);
      goto LAB_ram_400685c4;
    }
    uVar37 = (ulonglong)(uint)DAT_ram_4009281c;
    pfVar4 = param_2 + 0x1e;
    do {
      *(ulonglong *)pfVar4 = uVar37;
      pfVar4 = pfVar4 + 1;
    } while (param_2 + 0x41e != pfVar4);
LAB_ram_40067a84:
    fVar25 = *param_2;
    *(undefined1 *)((int)param_2 + 0x46) = 1;
    *(ulonglong *)(param_2 + 0x12) = uVar22;
  }
  else {
    uVar35 = *(ulonglong *)(param_2 + 10);
  }
  fVar7 = DAT_ram_40098594;
  fVar34 = DAT_ram_40098590;
  fVar27 = DAT_ram_40098588;
  fVar33 = DAT_ram_400980f8;
  fVar32 = DAT_ram_40093094;
  fVar29 = DAT_ram_40092864;
  fVar39 = DAT_ram_40092860;
  uVar37 = *(ulonglong *)(param_2 + 0x15);
  uVar22 = *(ulonglong *)(param_2 + 0x17);
  uVar6 = *(ushort *)(param_2 + 0x1c);
  cVar5 = *(char *)(param_2 + 0x1d);
  fVar24 = param_2[8];
  fVar42 = param_2[9];
  fVar26 = param_2[0xc];
  fVar30 = param_2[0xd];
  uVar31 = *(undefined8 *)(param_2 + 0xe);
  fVar28 = param_2[0xf];
  fVar9 = DAT_ram_4009856c;
  if (fVar23 < fVar25) {
    fVar9 = fVar23 / fVar25;
  }
  pfVar18 = param_3 + param_7;
  fVar25 = param_2[0x13];
  pfVar4 = param_5;
  do {
    fVar36 = (float)*(undefined8 *)param_3;
    fVar16 = fVar23;
    if (fVar36 * fVar36 <= fVar25) {
      if (fVar33 <= in_register_00000100) goto LAB_ram_400672ca;
LAB_ram_400678b4:
      fVar38 = param_2[0x41e];
      if (cVar5 != '\x01') goto LAB_ram_4006734a;
LAB_ram_400678bc:
      if (fVar38 < 0.0) {
        if (uVar6 == 0xffff) {
          uVar37 = 0;
          cVar5 = '\0';
        }
        else {
          uVar6 = uVar6 + 1;
          uVar37 = 0;
          cVar5 = uVar6 < *(ushort *)(param_2 + 0x11);
        }
      }
      else {
        uVar37 = 0;
        uVar6 = 0;
      }
    }
    else {
      if (in_register_00000100 < fVar33) goto LAB_ram_400678b4;
LAB_ram_400672ca:
      if (fVar32 < in_register_00000100) {
LAB_ram_400678d6:
        fVar38 = param_2[0x81d];
      }
      else {
        if (in_register_00000100 <= fVar33) goto LAB_ram_400678b4;
        if (fVar23 <= in_register_00000100) goto LAB_ram_400678d6;
        fVar25 = ((float)((uint)in_register_00000100 & 0x7fffff) * fVar39 +
                  (float)(int)(((uint)ABS(in_register_00000100) >> 0x17) - 0x7f) + fVar34) * fVar7 *
                 fVar27;
        if (fVar25 < 0.0) goto LAB_ram_400678b4;
        if (fVar27 < fVar25) goto LAB_ram_400678d6;
        if (fVar25 <= 0.0) goto LAB_ram_400678b4;
        if (fVar27 <= fVar25) goto LAB_ram_400678d6;
        uVar17 = (uint)(-1 < (int)fVar25) * (int)fVar25;
        fVar38 = param_2[uVar17 + 0x41e];
        fVar38 = (fVar25 - (float)uVar17) * ((param_2 + uVar17 + 0x41e)[1] - fVar38) + fVar38;
      }
      if (cVar5 == '\x01') goto LAB_ram_400678bc;
LAB_ram_4006734a:
      fVar25 = (float)uVar37;
      if (fVar38 <= fVar25) {
        if (fVar38 < fVar25) {
          fVar38 = (fVar38 - fVar25) * fVar29;
          fVar40 = fVar28;
          if ((fVar28 <= fVar38) && (fVar40 = fVar38, 0.0 < fVar38)) {
            fVar40 = 0.0;
          }
          uVar37 = (ulonglong)(uint)(fVar25 + fVar40);
          if (fVar25 + fVar40 < fVar30) {
            uVar37 = (ulonglong)(uint)fVar30;
          }
        }
      }
      else {
        fVar38 = (fVar38 - fVar25) * fVar29;
        if (fVar38 < 0.0) {
          fVar38 = 0.0;
        }
        else if ((float)uVar31 < fVar38) {
          fVar38 = (float)uVar31;
        }
        uVar37 = (ulonglong)(uint)(fVar25 + fVar38);
        if (0.0 <= fVar25 + fVar38) {
          uVar37 = 0;
          cVar5 = '\x01';
          uVar6 = 0;
          goto LAB_ram_40067384;
        }
      }
      fVar25 = (float)uVar37;
      if (fVar25 < 0.0) {
        if ((fVar25 <= (float)*(undefined8 *)(param_2 + 0xd)) ||
           (fVar25 = (fVar25 - (float)*(undefined8 *)(param_2 + 0xd)) * param_2[0x10], fVar25 <= 0.0
           )) {
          fVar16 = (float)*(undefined8 *)(param_2 + 0x1e);
        }
        else if (fVar27 <= fVar25) {
          fVar16 = param_2[0x41d];
        }
        else {
          uVar17 = (uint)(-1 < (int)fVar25) * (int)fVar25;
          fVar16 = param_2[uVar17 + 0x1e];
          fVar16 = (fVar25 - (float)uVar17) * ((param_2 + uVar17 + 0x1e)[1] - fVar16) + fVar16;
        }
      }
    }
LAB_ram_40067384:
    param_3 = param_3 + 1;
    fVar25 = fVar26 * (fVar16 - (float)uVar22) + (float)uVar22;
    uVar22 = (ulonglong)(uint)fVar25;
    *pfVar4 = fVar36 * fVar25;
    fVar25 = in_register_00000100;
    pfVar4 = pfVar4 + 1;
  } while (pfVar18 != param_3);
  param_2[0x13] = in_register_00000100;
  *(ulonglong *)(param_2 + 0x15) = uVar37;
  *(ulonglong *)(param_2 + 0x17) = uVar22;
  *(char *)(param_2 + 0x1d) = cVar5;
  *(ushort *)(param_2 + 0x1c) = uVar6;
  param_2[0x1a] = (float)uVar6 * fVar9;
  fVar29 = DAT_ram_40098594;
  fVar39 = DAT_ram_40098590;
  fVar28 = DAT_ram_40098588;
  fVar25 = DAT_ram_40093094;
  fVar30 = DAT_ram_40092864;
  fVar26 = DAT_ram_40092860;
  if (bVar8) {
    uVar37 = *(ulonglong *)(param_2 + 0x16);
    uVar22 = *(ulonglong *)(param_2 + 0x18);
    uVar6 = *(ushort *)((int)param_2 + 0x72);
    cVar5 = *(char *)((int)param_2 + 0x75);
    fVar24 = param_2[10];
    fVar42 = param_2[0xb];
    fVar32 = param_2[0xc];
    fVar27 = param_2[0xd];
    fVar34 = param_2[0xe];
    fVar7 = param_2[0xf];
    fVar9 = DAT_ram_4009856c;
    if (fVar23 < *param_2) {
      fVar9 = fVar23 / *param_2;
    }
    pfVar18 = param_4 + param_7;
    pfVar4 = param_6;
    fVar16 = param_2[0x14];
    do {
      fVar36 = *param_4;
      uVar35 = (ulonglong)(uint)fVar16;
      fVar38 = fVar23;
      if (fVar36 * fVar36 <= fVar16) {
        if (fVar33 <= in_register_00000100) goto LAB_ram_40067ca8;
LAB_ram_40067e08:
        fVar40 = param_2[0x41e];
        if (cVar5 != '\x01') goto LAB_ram_40067d26;
LAB_ram_40067e10:
        if (fVar40 < 0.0) {
          if (uVar6 == 0xffff) {
            uVar37 = 0;
            cVar5 = '\0';
          }
          else {
            uVar6 = uVar6 + 1;
            uVar37 = 0;
            cVar5 = uVar6 < *(ushort *)(param_2 + 0x11);
          }
        }
        else {
          uVar37 = 0;
          uVar6 = 0;
        }
      }
      else {
        if (in_register_00000100 < fVar33) goto LAB_ram_40067e08;
LAB_ram_40067ca8:
        if (fVar25 < in_register_00000100) {
LAB_ram_40067e4a:
          fVar40 = param_2[0x81d];
        }
        else {
          if (in_register_00000100 <= fVar33) goto LAB_ram_40067e08;
          if (fVar23 <= in_register_00000100) goto LAB_ram_40067e4a;
          fVar16 = (float)(int)(((uint)ABS(in_register_00000100) >> 0x17) - 0x7f);
          uVar35 = (ulonglong)(uint)fVar16;
          fVar16 = ((float)((uint)in_register_00000100 & 0x7fffff) * fVar26 + fVar16 + fVar39) *
                   fVar29 * fVar28;
          if (fVar16 < 0.0) goto LAB_ram_40067e08;
          if (fVar28 < fVar16) goto LAB_ram_40067e4a;
          if (fVar16 <= 0.0) goto LAB_ram_40067e08;
          if (fVar28 <= fVar16) goto LAB_ram_40067e4a;
          uVar17 = (uint)(-1 < (int)fVar16) * (int)fVar16;
          fVar40 = param_2[uVar17 + 0x41e];
          fVar41 = (float)*(undefined8 *)(param_2 + uVar17 + 0x41e + 1) - fVar40;
          uVar35 = (ulonglong)(uint)fVar41;
          fVar40 = (fVar16 - (float)uVar17) * fVar41 + fVar40;
        }
        if (cVar5 == '\x01') goto LAB_ram_40067e10;
LAB_ram_40067d26:
        fVar16 = (float)uVar37;
        if (fVar40 <= fVar16) {
          if (fVar40 < fVar16) {
            fVar40 = (fVar40 - fVar16) * fVar30;
            fVar41 = fVar7;
            if ((fVar7 <= fVar40) && (fVar41 = fVar40, 0.0 < fVar40)) {
              fVar41 = 0.0;
            }
            uVar37 = (ulonglong)(uint)(fVar16 + fVar41);
            if (fVar16 + fVar41 < fVar27) {
              uVar37 = (ulonglong)(uint)fVar27;
            }
          }
        }
        else {
          fVar40 = (fVar40 - fVar16) * fVar30;
          if (fVar40 < 0.0) {
            fVar40 = 0.0;
          }
          else if (fVar34 < fVar40) {
            fVar40 = fVar34;
          }
          uVar37 = (ulonglong)(uint)(fVar16 + fVar40);
          if (0.0 <= fVar16 + fVar40) {
            uVar37 = 0;
            uVar6 = 0;
            cVar5 = '\x01';
            goto LAB_ram_40067d5c;
          }
        }
        fVar16 = (float)uVar37;
        if (fVar16 < 0.0) {
          if ((float)*(undefined8 *)(param_2 + 0xd) < fVar16) {
            uVar35 = *(ulonglong *)(param_2 + 0x10);
            fVar16 = (fVar16 - (float)*(undefined8 *)(param_2 + 0xd)) * (float)uVar35;
            if (0.0 < fVar16) {
              if (fVar28 <= fVar16) {
                fVar38 = param_2[0x41d];
              }
              else {
                uVar17 = (uint)(-1 < (int)fVar16) * (int)fVar16;
                fVar38 = param_2[uVar17 + 0x1e];
                fVar40 = (float)*(undefined8 *)(param_2 + uVar17 + 0x1e + 1) - fVar38;
                uVar35 = (ulonglong)(uint)fVar40;
                fVar38 = (fVar16 - (float)uVar17) * fVar40 + fVar38;
              }
              goto LAB_ram_40067d5c;
            }
          }
          fVar38 = (float)*(undefined8 *)(param_2 + 0x1e);
        }
      }
LAB_ram_40067d5c:
      param_4 = param_4 + 1;
      fVar16 = fVar32 * (fVar38 - (float)uVar22) + (float)uVar22;
      uVar22 = (ulonglong)(uint)fVar16;
      *pfVar4 = fVar36 * fVar16;
      pfVar4 = pfVar4 + 1;
      fVar16 = in_register_00000100;
    } while (pfVar18 != param_4);
    param_2[0x14] = in_register_00000100;
    *(ulonglong *)(param_2 + 0x16) = uVar37;
    *(ulonglong *)(param_2 + 0x18) = uVar22;
    *(char *)((int)param_2 + 0x75) = cVar5;
    *(ushort *)((int)param_2 + 0x72) = uVar6;
    *(ulonglong *)(param_2 + 0x1b) = (ulonglong)(uint)((float)uVar6 * fVar9);
  }
  if (uVar20 != 2) {
    return uVar35;
  }
  if (param_8 == (float *)0x0) {
    fVar30 = 0.0;
    fVar26 = DAT_ram_40098560;
    fVar25 = DAT_ram_400930d8;
    fVar28 = DAT_ram_400930f4;
    fVar39 = DAT_ram_40092864;
    fVar29 = DAT_ram_400930c8;
LAB_ram_400680ec:
    fVar32 = fVar26 * DAT_ram_400941d8 + fVar23;
  }
  else {
    fVar32 = param_8[1];
    if (0.0 <= fVar32) {
      if (fVar23 < fVar32) {
        fVar32 = fVar23;
      }
    }
    else {
      fVar32 = 0.0;
    }
    fVar26 = param_8[2];
    if (0.0 <= fVar26) {
      if (fVar23 < fVar26) {
        fVar26 = fVar23;
      }
    }
    else {
      fVar26 = 0.0;
    }
    fVar30 = param_8[3];
    if (0.0 <= fVar30) {
      if (fVar23 < fVar30) {
        fVar30 = fVar23;
      }
    }
    else {
      fVar30 = 0.0;
    }
    fVar25 = param_8[4];
    if (0.0 <= fVar25) {
      if (fVar23 < fVar25) {
        fVar25 = fVar23;
      }
    }
    else {
      fVar25 = 0.0;
    }
    fVar28 = param_8[5];
    if (0.0 <= fVar28) {
      if (fVar23 < fVar28) {
        fVar28 = fVar23;
      }
    }
    else {
      fVar28 = 0.0;
    }
    fVar39 = param_8[6];
    if (0.0 <= fVar39) {
      if (fVar23 < fVar39) {
        fVar39 = fVar23;
      }
    }
    else {
      fVar39 = 0.0;
    }
    fVar29 = DAT_ram_400936e4;
    if ((0.0 <= fVar32) && (fVar29 = 0.0, fVar32 <= fVar23)) {
      fVar29 = fVar32 * DAT_ram_400936e0 + DAT_ram_400936e4;
    }
    fVar32 = fVar23;
    if ((0.0 <= fVar26) && (fVar32 = DAT_ram_400930bc, fVar26 <= fVar23)) goto LAB_ram_400680ec;
  }
  fVar26 = 0.0;
  if ((0.0 <= fVar30) && (fVar26 = DAT_ram_400934e0, fVar30 <= fVar23)) {
    fVar26 = fVar30 * DAT_ram_400934e0 + 0.0;
  }
  fVar30 = 0.0;
  if ((0.0 <= fVar25) && (fVar30 = DAT_ram_400941dc, fVar25 <= fVar23)) {
    fVar30 = fVar25 * DAT_ram_400941dc + 0.0;
  }
  fVar25 = 0.0;
  if ((0.0 <= fVar28) && (fVar25 = DAT_ram_40093094, fVar28 <= fVar23)) {
    fVar25 = fVar28 * DAT_ram_40093094 + 0.0;
  }
  fVar28 = DAT_ram_400934e4;
  if ((0.0 <= fVar39) && (fVar28 = DAT_ram_400934e0, fVar39 <= fVar23)) {
    fVar28 = fVar39 * DAT_ram_400941e0 + DAT_ram_400934e4;
  }
  FUN_ram_4005eb50(fVar29,fVar32,fVar26,fVar30,fVar25,fVar28,fVar24,fVar42,param_2 + 0x81e);
  param_4 = (float *)((uint)param_6 & -(uint)bVar8);
  param_3 = param_5;
  param_6 = param_4;
LAB_ram_4006756a:
  uVar22 = FUN_ram_4005ee60(param_2 + 0x81e,param_3,param_4,param_5,param_6,param_7,bVar8,param_11);
  return uVar22;
}


