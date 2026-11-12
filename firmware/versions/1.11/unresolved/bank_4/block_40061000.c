/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40061000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40061ddc.
 * REA evidence: ev_26f8b4010ad9615960dd801a8e69dbfbc6a7df760ee1df5cad68649bf0b51249
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40061ddc(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                     uint param_6,float *param_7,uint param_8,char param_9,int param_10)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  float in_register_00000100;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  float fVar9;
  byte bVar10;
  int iVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float *pfVar19;
  ulonglong *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float *pfVar26;
  float *pfVar27;
  float fVar28;
  float *pfVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  int iVar33;
  undefined8 *puVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  uint uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  ulonglong uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined *puVar53;
  undefined *puVar54;
  undefined *puVar55;
  ulonglong uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  ulonglong uVar60;
  undefined8 uVar61;
  ulonglong uVar62;
  ulonglong uVar63;
  undefined8 uVar64;
  undefined *puVar65;
  ulonglong uVar66;
  float local_f0;
  float fStack_a4;
  
  if (param_10 != 0) {
    *(bool *)param_10 = param_9 != '\0' && (param_3 != (float *)0x0 && param_5 != (float *)0x0);
  }
  fVar46 = DAT_ram_40094634;
  if (param_1 == (float *)0x0) {
    return;
  }
  if (param_2 == (float *)0x0) {
    return;
  }
  if (param_4 == (float *)0x0) {
    return;
  }
  if (param_6 == 0) {
    return;
  }
  if ((param_1[1] == 0.0) || ((uint)param_1[2] < 4)) {
    if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
LAB_ram_40062524:
      if (param_2 != param_4) {
        FUN_ram_4000304c(param_4,param_2,param_6 << 2);
      }
      if (param_5 == (float *)0x0) {
        return;
      }
      param_3 = param_4;
      if (param_5 == param_4) {
        return;
      }
      goto LAB_ram_40062542;
    }
    if (param_5 == (float *)0x0) {
      pfVar6 = param_2 + param_6;
      do {
        uVar61 = *(undefined8 *)param_2;
        uVar64 = *(undefined8 *)param_3;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        *param_4 = ((float)uVar61 + (float)uVar64) * fVar46;
        param_4 = param_4 + 1;
      } while (param_2 != pfVar6);
      return;
    }
LAB_ram_400624cc:
    if (param_2 != param_4) {
      FUN_ram_4000304c(param_4,param_2,param_6 << 2);
    }
    if (param_3 == param_5) {
      return;
    }
LAB_ram_40062542:
    FUN_ram_4000304c(param_5,param_3,param_6 << 2);
    return;
  }
  uVar30 = (uint)*(byte *)(param_1 + 8);
  if (param_8 < 8) {
    if (param_8 != uVar30) goto LAB_ram_40062f4c;
LAB_ram_40061e6a:
    fVar48 = DAT_ram_40094e80;
    puVar65 = PTR_entry_ram_40094618;
    fVar46 = DAT_ram_40094604;
    if (uVar30 != 1) {
      if (uVar30 != 2) {
        if (uVar30 == 3) {
          FUN_ram_40060cc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_9);
          return;
        }
        if (uVar30 != 4) {
          if (uVar30 != 5) {
            if (uVar30 != 6) {
              if (uVar30 != 7) goto LAB_ram_400624b4;
              if (param_7 == (float *)0x0) {
                uVar56 = (ulonglong)DAT_ram_4009a1cc;
                uVar62 = (ulonglong)(uint)DAT_ram_40099fb8;
                fVar28 = DAT_ram_4009a1d0;
                fVar51 = DAT_ram_4009a1b4;
                fVar31 = DAT_ram_4009a1d4;
LAB_ram_40064c60:
                uVar63 = (ulonglong)(uint)DAT_ram_40094604;
                if (fVar31 <= DAT_ram_40094604) {
                  uVar63 = (ulonglong)(uint)fVar31;
                }
              }
              else {
                fVar47 = param_7[2];
                uVar56 = (ulonglong)(uint)fVar47;
                fVar31 = *param_7;
                uVar62 = (ulonglong)(uint)param_7[1];
                fVar28 = param_7[3];
                fVar51 = param_7[4];
                if (0.0 <= fVar47) {
                  if (DAT_ram_40094604 < fVar47) {
                    uVar56 = (ulonglong)(uint)DAT_ram_40094604;
                  }
                }
                else {
                  uVar56 = 0;
                }
                if (0.0 <= fVar28) {
                  if (DAT_ram_40094604 < fVar28) {
                    fVar28 = DAT_ram_40094604;
                  }
                }
                else {
                  fVar28 = 0.0;
                }
                if (0.0 <= fVar51) {
                  if (DAT_ram_40094604 < fVar51) {
                    fVar51 = DAT_ram_40094604;
                  }
                }
                else {
                  fVar51 = 0.0;
                }
                if (0.0 <= fVar31) goto LAB_ram_40064c60;
                uVar63 = 0;
              }
              uVar45 = (ulonglong)(uint)DAT_ram_40094604;
              if (0.0 <= (float)uVar62) {
                if (DAT_ram_40094604 < (float)uVar62) {
                  uVar62 = uVar45;
                }
              }
              else {
                uVar62 = 0;
              }
              fVar47 = *param_1;
              fVar31 = param_1[2];
              fVar25 = (float)uVar63;
              if ((float)*(undefined8 *)(param_1 + 0xf) == fVar25) {
                fVar38 = param_1[0x62];
              }
              else {
                fVar38 = DAT_ram_40094604;
                if (DAT_ram_40094e80 <= fVar47) {
                  fVar52 = fVar47;
                  if (0.0 <= fVar25) {
                    uVar66 = uVar45;
                    if (fVar25 <= DAT_ram_40094604) {
                      uVar66 = uVar63;
                    }
                  }
                  else {
                    uVar66 = 0;
                  }
LAB_ram_4006324e:
                  fVar5 = ((float)uVar66 * DAT_ram_40096020 + DAT_ram_40094ee0) *
                          (float)DAT_ram_40099fa4 * fVar52;
                  if (DAT_ram_40094604 <= fVar5) {
                    fVar25 = DAT_ram_40094604;
                    if (1 < (uint)fVar31) goto LAB_ram_40063286;
                  }
                  else {
                    fVar5 = DAT_ram_40094604;
                    if ((uint)fVar31 < 2) goto LAB_ram_40063298;
LAB_ram_40063286:
                    fVar25 = (float)((int)fVar31 - 2);
                  }
                  fVar38 = fVar5;
                  if (fVar25 < fVar5) {
                    fVar38 = fVar25;
                  }
                }
                else {
                  fVar5 = DAT_ram_4009a13c;
                  if ((0.0 <= fVar25) &&
                     (uVar66 = uVar63, fVar52 = DAT_ram_40094664, fVar5 = DAT_ram_4009a140,
                     fVar25 <= DAT_ram_40094604)) goto LAB_ram_4006324e;
                  if (1 < (uint)fVar31) goto LAB_ram_40063286;
                }
LAB_ram_40063298:
                param_1[0x62] = fVar38;
                *(ulonglong *)(param_1 + 0xf) = uVar63;
              }
              fVar25 = (float)uVar62;
              if ((float)*(undefined8 *)(param_1 + 0x10) == fVar25) {
                fVar25 = param_1[99];
              }
              else {
                if (fVar25 < 0.0) {
                  fVar52 = 0.0;
LAB_ram_400653b6:
                  fVar25 = fVar52 * DAT_ram_40094608 + 0.0;
                }
                else {
                  fVar52 = fVar46;
                  if (fVar46 < fVar25) goto LAB_ram_400653b6;
                  fVar25 = fVar25 * DAT_ram_40094608 + 0.0;
                  if (0.0 <= fVar25) {
                    if (DAT_ram_40094608 < fVar25) {
                      fVar25 = DAT_ram_40094608;
                    }
                  }
                  else {
                    fVar25 = 0.0;
                  }
                }
                param_1[99] = fVar25;
                *(ulonglong *)(param_1 + 0x10) = uVar62;
              }
              puVar65 = DAT_ram_40099fa4;
              fVar52 = DAT_ram_40094ea8;
              fVar5 = (float)uVar56;
              if ((float)*(undefined8 *)(param_1 + 0x11) == fVar5) {
                fVar50 = param_1[0x66];
              }
              else {
                fVar50 = fVar47;
                if (fVar47 < fVar48) {
                  fVar50 = DAT_ram_40094664;
                }
                uVar62 = 0;
                if ((0.0 <= fVar5) && (uVar62 = uVar45, fVar5 <= fVar46)) {
                  uVar62 = uVar56;
                }
                *(ulonglong *)(param_1 + 0x11) = uVar56;
                fVar50 = ((float)uVar62 * fVar52 + 0.0) * (float)puVar65 * fVar50;
                param_1[0x66] = fVar50;
              }
              if ((float)*(undefined8 *)(param_1 + 0x12) == fVar28) {
                fVar52 = param_1[0x70];
                fVar5 = param_1[0x71];
                goto LAB_ram_400632d2;
              }
              if (fVar28 < 0.0) {
                fVar52 = 0.0;
LAB_ram_40065498:
                fVar52 = fVar52 * DAT_ram_4009602c + DAT_ram_40094ec4;
                param_1[0x67] = fVar52;
                fVar5 = DAT_ram_40094664;
                if (fVar48 <= fVar47) {
                  fVar44 = fVar47 * DAT_ram_4009a10c;
                  fVar5 = fVar47;
LAB_ram_400654c6:
                  if (fVar44 < fVar52) {
                    fVar52 = fVar44;
                  }
                }
              }
              else {
                fVar52 = fVar46;
                if (fVar46 < fVar28) goto LAB_ram_40065498;
                fVar52 = fVar28 * DAT_ram_4009602c + DAT_ram_40094ec4;
                param_1[0x67] = fVar52;
                fVar5 = fVar47;
                if (fVar47 < fVar48) {
                  fVar5 = DAT_ram_40094664;
                }
                if (0.0 <= fVar52) {
                  fVar44 = fVar5 * DAT_ram_4009a10c;
                  goto LAB_ram_400654c6;
                }
                fVar52 = 0.0;
              }
              fVar5 = (fVar52 / fVar5) * DAT_ram_40099f94;
              fVar52 = (float)FUN_ram_400009d2(fVar5);
              param_1[0x70] = fVar52;
              fVar5 = (float)FUN_ram_40000712(fVar5);
              param_1[0x71] = fVar5;
              param_1[0x12] = fVar28;
LAB_ram_400632d2:
              if ((float)*(undefined8 *)(param_1 + 0x13) == fVar51) {
                fVar51 = param_1[100];
              }
              else {
                param_1[100] = fVar51;
                param_1[0x13] = fVar51;
              }
              if ((float)*(undefined8 *)(param_1 + 0x14) == fVar46) {
                fVar28 = param_1[0x65];
              }
              else {
                param_1[0x65] = fVar46;
                *(ulonglong *)(param_1 + 0x14) = uVar45;
                fVar28 = fVar46;
              }
              if (0.0 <= fVar25) {
                if (DAT_ram_40094608 < fVar25) {
                  fVar25 = DAT_ram_40094608;
                }
              }
              else {
                fVar25 = 0.0;
              }
              if (0.0 <= fVar51) {
                if (fVar46 < fVar51) {
                  fVar51 = fVar46;
                }
              }
              else {
                fVar51 = 0.0;
              }
              if (0.0 <= fVar28) {
                if (fVar46 < fVar28) {
                  fVar28 = fVar46;
                }
              }
              else {
                fVar28 = 0.0;
              }
              fVar44 = DAT_ram_4009a1d8;
              if (fVar48 <= fVar47) {
                fVar44 = fVar47 * DAT_ram_400952c4;
              }
              if (0.0 <= fVar50) {
                if (fVar44 < fVar50) {
                  fVar50 = fVar44;
                }
              }
              else {
                fVar50 = 0.0;
              }
              fVar48 = fVar46 / (float)param_6;
              if (*(char *)((int)param_1 + 0x236) == '\0') {
                param_1[0x68] = fVar38;
                param_1[0x69] = fVar25;
                param_1[0x6a] = fVar51;
                param_1[0x6b] = fVar28;
                *(undefined1 *)((int)param_1 + 0x236) = 1;
                fVar42 = fVar28;
                fVar44 = fVar25;
                fVar47 = fVar38;
                fVar41 = fVar51;
              }
              else {
                fVar47 = param_1[0x68];
                fVar44 = param_1[0x69];
                fVar41 = param_1[0x6a];
                fVar42 = param_1[0x6b];
              }
              fVar15 = DAT_ram_4009558c;
              fVar36 = DAT_ram_40094e88;
              fVar18 = DAT_ram_40094634;
              puVar54 = DAT_ram_4009461c;
              puVar65 = PTR_entry_ram_40094618;
              fVar38 = fVar38 - fVar47;
              fVar51 = fVar51 - fVar41;
              fVar25 = fVar25 - fVar44;
              fVar28 = fVar28 - fVar42;
              fVar4 = (float)(uint)fVar31 - (float)PTR_entry_ram_40094618;
              fVar40 = param_1[0x6e];
              fVar43 = param_1[0x6f];
              fVar24 = param_1[3];
              pfVar7 = (float *)param_1[1];
              uVar30 = 0;
              pfVar6 = param_5;
              pfVar29 = param_3;
              do {
                fVar16 = (float)*(undefined8 *)param_2;
                if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
                  fVar16 = (fVar16 + *pfVar29) * fVar18;
                }
                fVar57 = fVar50 * fVar40 + fVar47;
                if (fVar57 < fVar46) {
                  fVar57 = fVar46;
                }
                if (fVar4 < fVar57) {
                  fVar57 = fVar4;
                }
                fVar57 = (float)(uint)fVar24 - fVar57;
                if (fVar57 < 0.0) {
                  fVar57 = fVar57 + (float)(uint)fVar31;
                }
                uVar39 = (uint)(-1 < (int)fVar57) * (int)fVar57;
                pfVar27 = pfVar7 + uVar39 + 1;
                if ((uint)fVar31 <= uVar39 + 1) {
                  pfVar27 = pfVar7;
                }
                fVar57 = (float)*(undefined8 *)(pfVar7 + uVar39) *
                         (fVar46 - (fVar57 - (float)uVar39)) + (fVar57 - (float)uVar39) * *pfVar27;
                puVar55 = (undefined *)(fVar57 * fVar44 + fVar16);
                puVar53 = puVar54;
                if (((float)puVar54 <= (float)puVar55) &&
                   (puVar53 = puVar55, (float)puVar65 < (float)puVar55)) {
                  puVar53 = puVar65;
                }
                pfVar7[(int)fVar24] = (float)puVar53;
                fVar24 = (float)((int)fVar24 + 1 & -(uint)((uint)((int)fVar24 + 1) < (uint)fVar31));
                if (fVar41 < 0.0) {
                  fVar57 = fVar57 * 0.0;
                  fVar16 = fVar46;
                }
                else {
                  fVar16 = 0.0;
                  if (fVar41 <= fVar46) {
                    fVar57 = fVar57 * fVar41;
                    if (fVar41 <= fVar15) {
LAB_ram_400635ee:
                      fVar16 = fVar46;
                    }
                    else {
                      fVar16 = -((fVar41 - fVar15) * fVar36) + fVar46;
                      if (0.0 <= fVar16) {
                        if (fVar46 < fVar16) goto LAB_ram_400635ee;
                      }
                      else {
                        fVar16 = 0.0;
                      }
                    }
                  }
                }
                fVar13 = (float)*(undefined8 *)param_2;
                if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
                  fVar16 = fVar42 * (fVar13 * fVar16 + fVar57);
                  *(ulonglong *)param_4 = (ulonglong)(uint)fVar16;
                  if (param_5 != (float *)0x0) {
                    *pfVar6 = fVar16;
                  }
                }
                else {
                  fVar57 = fVar42 * (fVar16 * (fVar13 + *pfVar29) * fVar18 + fVar57);
                  if (param_5 == (float *)0x0) {
                    *param_4 = fVar57;
                  }
                  else {
                    fVar13 = fVar13 - *pfVar29;
                    fVar16 = fVar16 * fVar42 * fVar18;
                    *(ulonglong *)param_4 = (ulonglong)(uint)(fVar16 * fVar13 + fVar57);
                    *pfVar6 = -(fVar16 * fVar13) + fVar57;
                  }
                }
                fVar16 = fVar40 * fVar52;
                uVar30 = uVar30 + 1;
                fVar47 = fVar47 + fVar38 * fVar48;
                fVar44 = fVar44 + fVar25 * fVar48;
                fVar40 = fVar40 * fVar5 + fVar43 * fVar52;
                fVar43 = fVar43 * fVar5 - fVar16;
                fVar41 = fVar41 + fVar51 * fVar48;
                fVar42 = fVar42 + fVar28 * fVar48;
                param_2 = param_2 + 1;
                param_4 = param_4 + 1;
                pfVar6 = pfVar6 + 1;
                pfVar29 = pfVar29 + 1;
                if (param_6 <= uVar30) {
                  param_1[3] = fVar24;
                  param_1[0x68] = fVar47;
                  param_1[0x69] = fVar44;
                  param_1[0x6a] = fVar41;
                  param_1[0x6b] = fVar42;
                  param_1[0x6e] = fVar40;
                  param_1[0x6f] = fVar43;
                  return;
                }
              } while( true );
            }
            if (param_7 == (float *)0x0) {
              uVar62 = (ulonglong)DAT_ram_4009a1c4;
              uVar63 = (ulonglong)(uint)DAT_ram_4009a130;
              uVar56 = (ulonglong)DAT_ram_4009a1c8;
              fVar47 = DAT_ram_4009a130;
              fVar51 = DAT_ram_4009a1c0;
LAB_ram_40064bd2:
              uVar45 = (ulonglong)(uint)DAT_ram_40094604;
              if (fVar51 <= DAT_ram_40094604) {
                uVar45 = (ulonglong)(uint)fVar51;
              }
            }
            else {
              fVar48 = param_7[2];
              uVar56 = (ulonglong)(uint)fVar48;
              fVar51 = *param_7;
              uVar62 = (ulonglong)(uint)param_7[1];
              fVar47 = param_7[3];
              fVar28 = param_7[4];
              if (0.0 <= fVar48) {
                if (DAT_ram_40094604 < fVar48) {
                  uVar56 = (ulonglong)(uint)DAT_ram_40094604;
                }
              }
              else {
                uVar56 = 0;
              }
              if (0.0 <= fVar47) {
                if (DAT_ram_40094604 < fVar47) {
                  fVar47 = DAT_ram_40094604;
                }
              }
              else {
                fVar47 = 0.0;
              }
              if (0.0 <= fVar28) {
                uVar63 = (ulonglong)(uint)fVar28;
                if (DAT_ram_40094604 < fVar28) {
                  uVar63 = (ulonglong)(uint)DAT_ram_40094604;
                }
              }
              else {
                uVar63 = 0;
              }
              if (0.0 <= fVar51) goto LAB_ram_40064bd2;
              uVar45 = 0;
            }
            uVar66 = (ulonglong)(uint)DAT_ram_40094604;
            if (0.0 <= (float)uVar62) {
              if (DAT_ram_40094604 < (float)uVar62) {
                uVar62 = uVar66;
              }
            }
            else {
              uVar62 = 0;
            }
            fVar48 = (float)uVar45;
            if ((float)*(undefined8 *)(param_1 + 0xf) != fVar48) {
              fVar31 = param_1[2];
              fVar51 = (float)*(undefined8 *)param_1;
              fVar28 = DAT_ram_40094604;
              if (DAT_ram_40094e80 <= fVar51) {
                if (0.0 <= fVar48) {
                  uVar60 = uVar66;
                  if (fVar48 <= DAT_ram_40094604) {
                    uVar60 = uVar45;
                  }
                }
                else {
                  uVar60 = 0;
                }
LAB_ram_40061f72:
                fVar25 = ((float)uVar60 * DAT_ram_40096020 + DAT_ram_40094ee0) *
                         (float)DAT_ram_40099fa4 * fVar51;
                if (DAT_ram_40094604 <= fVar25) {
                  fVar48 = DAT_ram_40094604;
                  if (1 < (uint)fVar31) goto LAB_ram_40061faa;
                }
                else {
                  fVar25 = DAT_ram_40094604;
                  if ((uint)fVar31 < 2) goto LAB_ram_40061fba;
LAB_ram_40061faa:
                  fVar48 = (float)((int)fVar31 - 2);
                }
                fVar28 = fVar25;
                if (fVar48 < fVar25) {
                  fVar28 = fVar48;
                }
              }
              else {
                fVar25 = DAT_ram_4009a13c;
                if ((0.0 <= fVar48) &&
                   (uVar60 = uVar45, fVar51 = DAT_ram_40094664, fVar25 = DAT_ram_4009a140,
                   fVar48 <= DAT_ram_40094604)) goto LAB_ram_40061f72;
                if (1 < (uint)fVar31) goto LAB_ram_40061faa;
              }
LAB_ram_40061fba:
              param_1[0x62] = fVar28;
              *(ulonglong *)(param_1 + 0xf) = uVar45;
            }
            fVar48 = (float)uVar62;
            if ((float)*(undefined8 *)(param_1 + 0x10) == fVar48) goto LAB_ram_40062000;
            if (0.0 <= fVar48) {
              fVar28 = fVar46;
              if (fVar46 < fVar48) goto LAB_ram_40065392;
              fVar48 = fVar48 * DAT_ram_40094608 + 0.0;
              if (fVar48 < 0.0) {
                fVar28 = 0.0;
              }
              else {
                fVar28 = DAT_ram_40094608;
                if (fVar48 <= DAT_ram_40094608) {
                  fVar28 = fVar48;
                }
              }
            }
            else {
              fVar28 = 0.0;
LAB_ram_40065392:
              fVar28 = fVar28 * DAT_ram_40094608 + 0.0;
            }
            param_1[99] = fVar28;
            *(ulonglong *)(param_1 + 0x10) = uVar62;
LAB_ram_40062000:
            if ((float)*(undefined8 *)(param_1 + 0x11) != (float)uVar56) {
              param_1[0x66] = (float)uVar56;
              *(ulonglong *)(param_1 + 0x11) = uVar56;
            }
            if ((float)*(undefined8 *)(param_1 + 0x12) != fVar47) {
              FUN_ram_40060880(fVar47,param_1);
              param_1[0x67] = fVar47;
              param_1[0x12] = fVar47;
            }
            if ((float)*(undefined8 *)(param_1 + 0x13) == (float)uVar63) {
              uVar63 = (ulonglong)(uint)param_1[100];
            }
            else {
              param_1[100] = (float)uVar63;
              *(ulonglong *)(param_1 + 0x13) = uVar63;
            }
            fVar48 = (float)uVar63;
            if ((float)*(undefined8 *)(param_1 + 0x14) == fVar46) {
              fVar47 = param_1[0x65];
            }
            else {
              param_1[0x65] = fVar46;
              *(ulonglong *)(param_1 + 0x14) = uVar66;
              fVar47 = fVar46;
            }
            uVar3 = _DAT_ram_40094638;
            fVar28 = param_1[99];
            if (0.0 <= fVar28) {
              if (DAT_ram_40094608 < fVar28) {
                fVar28 = DAT_ram_40094608;
              }
            }
            else {
              fVar28 = 0.0;
            }
            if (0.0 <= fVar48) {
              if (fVar46 < fVar48) {
                fVar48 = fVar46;
              }
            }
            else {
              fVar48 = 0.0;
            }
            if (0.0 <= fVar47) {
              if (fVar46 < fVar47) {
                fVar47 = fVar46;
              }
            }
            else {
              fVar47 = 0.0;
            }
            fVar31 = param_1[0x66];
            fVar25 = param_1[0x62];
            fVar51 = fVar46 / (float)param_6;
            fVar38 = 0.0;
            if ((0.0 <= fVar31) &&
               ((fVar52 = fVar46, fVar46 < fVar31 ||
                (fVar38 = 0.0, fVar52 = fVar31, DAT_ram_40094620 < fVar31)))) {
              if (param_1[0x7b] != fVar52) {
                param_1[0x7b] = fVar52;
                fVar31 = (float)FUN_ram_40000d44(fVar52,uVar3);
                param_1[0x7c] = fVar31 * DAT_ram_4009558c;
              }
              fVar38 = param_1[0x7c];
            }
            if (*(char *)((int)param_1 + 0x236) == '\0') {
              param_1[0x68] = fVar25;
              param_1[0x69] = fVar28;
              param_1[0x6a] = fVar48;
              param_1[0x6b] = fVar47;
              *(undefined1 *)((int)param_1 + 0x236) = 1;
              fVar50 = fVar47;
              fVar31 = fVar25;
              fVar5 = fVar48;
              fVar52 = fVar28;
            }
            else {
              fVar31 = param_1[0x68];
              fVar52 = param_1[0x69];
              fVar5 = param_1[0x6a];
              fVar50 = param_1[0x6b];
            }
            fVar43 = DAT_ram_4009558c;
            fVar40 = DAT_ram_40094e88;
            fVar42 = DAT_ram_40094634;
            fVar41 = DAT_ram_40094620;
            puVar54 = DAT_ram_4009461c;
            puVar65 = PTR_entry_ram_40094618;
            fVar36 = param_1[2];
            fVar25 = fVar25 - fVar31;
            fVar28 = fVar28 - fVar52;
            fVar48 = fVar48 - fVar5;
            fVar47 = fVar47 - fVar50;
            pfVar7 = (float *)param_1[1];
            fVar44 = (float)(uint)fVar36 - (float)PTR_entry_ram_40094618;
            fVar4 = param_1[4];
            fVar18 = param_1[3];
            uVar30 = 0;
            pfVar6 = param_5;
            pfVar29 = param_3;
            do {
              fVar15 = (float)*(undefined8 *)param_2;
              if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
                fVar15 = (fVar15 + *pfVar29) * fVar42;
              }
              fVar24 = fVar46;
              if ((fVar46 <= fVar31) && (fVar24 = fVar44, fVar31 <= fVar44)) {
                fVar24 = fVar31;
              }
              fVar24 = (float)(uint)fVar18 - fVar24;
              if (fVar24 < 0.0) {
                fVar24 = fVar24 + (float)(uint)fVar36;
              }
              uVar39 = (uint)(-1 < (int)fVar24) * (int)fVar24;
              pfVar27 = pfVar7 + uVar39 + 1;
              if ((uint)fVar36 <= uVar39 + 1) {
                pfVar27 = pfVar7;
              }
              fVar24 = (float)*(undefined8 *)(pfVar7 + uVar39) * (fVar46 - (fVar24 - (float)uVar39))
                       + (fVar24 - (float)uVar39) * *pfVar27;
              fVar16 = fVar24;
              if ((fVar4 != 0.0) && (fVar41 < fVar38)) {
                fVar57 = 0.0;
                if ((0.0 <= fVar38) && (fVar57 = fVar43, fVar38 <= fVar43)) {
                  fVar57 = fVar38;
                }
                fVar13 = (float)(uint)*(ushort *)((int)param_1 + 0x226);
                if (fVar13 == 0.0) {
                  fVar13 = 0.0;
                }
                else {
                  fVar32 = param_1[5];
                  pfVar27 = (float *)((int)fVar4 + (uint)*(ushort *)((int)param_1 + 0x22e) * 4);
                  uVar39 = *(ushort *)((int)param_1 + 0x22e) + 1;
                  fVar16 = -(fVar57 * fVar24) + *pfVar27;
                  *pfVar27 = fVar57 * fVar16 + fVar24;
                  *(ushort *)((int)param_1 + 0x22e) =
                       (ushort)(uVar39 * 0x10000 >> 0x10) &
                       -(ushort)((uVar39 & 0xffff) < (uint)fVar13);
                  fVar24 = fVar16;
                  if ((uint)fVar32 <= (uint)fVar13) goto LAB_ram_40062362;
                }
                uVar39 = (uint)*(ushort *)(param_1 + 0x8a);
                if (uVar39 != 0) {
                  fVar32 = param_1[5];
                  pfVar27 = (float *)((int)fVar4 +
                                     ((uint)*(ushort *)(param_1 + 0x8c) + (int)fVar13) * 4);
                  uVar8 = *(ushort *)(param_1 + 0x8c) + 1;
                  fVar16 = -(fVar57 * fVar24) + *pfVar27;
                  fVar13 = (float)((int)fVar13 + uVar39);
                  *pfVar27 = fVar16 * fVar57 + fVar24;
                  *(ushort *)(param_1 + 0x8c) =
                       (ushort)(uVar8 * 0x10000 >> 0x10) & -(ushort)((uVar8 & 0xffff) < uVar39);
                  fVar24 = fVar16;
                  if ((uint)fVar32 <= (uint)fVar13) goto LAB_ram_40062362;
                }
                uVar39 = (uint)*(ushort *)((int)param_1 + 0x22a);
                if (uVar39 != 0) {
                  fVar32 = param_1[5];
                  pfVar27 = (float *)((int)fVar4 +
                                     ((uint)*(ushort *)((int)param_1 + 0x232) + (int)fVar13) * 4);
                  uVar8 = *(ushort *)((int)param_1 + 0x232) + 1;
                  fVar16 = -(fVar57 * fVar24) + *pfVar27;
                  fVar13 = (float)((int)fVar13 + uVar39);
                  *pfVar27 = fVar16 * fVar57 + fVar24;
                  *(ushort *)((int)param_1 + 0x232) =
                       (ushort)(uVar8 * 0x10000 >> 0x10) & -(ushort)((uVar8 & 0xffff) < uVar39);
                  fVar24 = fVar16;
                  if ((uint)fVar32 <= (uint)fVar13) goto LAB_ram_40062362;
                }
                uVar1 = *(ushort *)(param_1 + 0x8b);
                fVar16 = fVar24;
                if (uVar1 != 0) {
                  pfVar27 = (float *)((int)fVar4 +
                                     ((int)fVar13 + (uint)*(ushort *)(param_1 + 0x8d)) * 4);
                  uVar39 = *(ushort *)(param_1 + 0x8d) + 1;
                  fVar16 = -(fVar57 * fVar24) + *pfVar27;
                  *(ulonglong *)pfVar27 = (ulonglong)(uint)(fVar57 * fVar16 + fVar24);
                  *(ushort *)(param_1 + 0x8d) =
                       (ushort)(uVar39 * 0x10000 >> 0x10) &
                       -(ushort)((uVar39 & 0xffff) < (uint)uVar1);
                }
              }
LAB_ram_40062362:
              fVar24 = param_1[0x4b] * fVar16 + param_1[0x50];
              fVar57 = fVar24 * param_1[0x52] + param_1[0x57];
              puVar55 = (undefined *)(fVar57 * fVar52 + fVar15);
              param_1[0x50] = param_1[0x51] + (param_1[0x4c] * fVar16 - fVar24 * param_1[0x4e]);
              param_1[0x51] = param_1[0x4d] * fVar16 - fVar24 * param_1[0x4f];
              param_1[0x57] = param_1[0x58] + (fVar24 * param_1[0x53] - fVar57 * param_1[0x55]);
              param_1[0x58] = fVar24 * param_1[0x54] - fVar57 * param_1[0x56];
              puVar53 = puVar54;
              if (((float)puVar54 <= (float)puVar55) &&
                 (puVar53 = puVar55, (float)puVar65 < (float)puVar55)) {
                puVar53 = puVar65;
              }
              pfVar7[(int)fVar18] = (float)puVar53;
              fVar18 = (float)((int)fVar18 + 1 & -(uint)((uint)((int)fVar18 + 1) < (uint)fVar36));
              if (0.0 <= fVar5) {
                fVar15 = 0.0;
                if (fVar5 <= fVar46) {
                  fVar57 = fVar57 * fVar5;
                  if (fVar43 < fVar5) {
                    fVar15 = -((fVar5 - fVar43) * fVar40) + fVar46;
                    if (fVar15 < 0.0) {
                      fVar15 = 0.0;
                    }
                    else if (fVar46 < fVar15) goto LAB_ram_400635d6;
                  }
                  else {
LAB_ram_400635d6:
                    fVar15 = fVar46;
                  }
                }
              }
              else {
                fVar57 = fVar57 * 0.0;
                fVar15 = fVar46;
              }
              fVar24 = (float)*(undefined8 *)param_2;
              if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
                fVar15 = fVar50 * (fVar24 * fVar15 + fVar57);
                uVar62 = (ulonglong)(uint)fVar15;
                if (param_5 == (float *)0x0) goto LAB_ram_4006356a;
                *(ulonglong *)param_4 = uVar62;
                *pfVar6 = fVar15;
              }
              else {
                fVar16 = fVar50 * (fVar15 * (fVar24 + *pfVar29) * fVar42 + fVar57);
                uVar62 = (ulonglong)(uint)fVar16;
                if (param_5 == (float *)0x0) {
LAB_ram_4006356a:
                  *(ulonglong *)param_4 = uVar62;
                }
                else {
                  fVar24 = fVar24 - *pfVar29;
                  fVar15 = fVar15 * fVar50 * fVar42;
                  *(ulonglong *)param_4 = (ulonglong)(uint)(fVar15 * fVar24 + fVar16);
                  *pfVar6 = -(fVar15 * fVar24) + fVar16;
                }
              }
              uVar30 = uVar30 + 1;
              fVar31 = fVar31 + fVar25 * fVar51;
              fVar52 = fVar52 + fVar28 * fVar51;
              fVar5 = fVar5 + fVar48 * fVar51;
              fVar50 = fVar50 + fVar47 * fVar51;
              param_2 = param_2 + 1;
              param_4 = param_4 + 1;
              pfVar6 = pfVar6 + 1;
              pfVar29 = pfVar29 + 1;
              if (param_6 <= uVar30) {
                param_1[3] = fVar18;
                param_1[0x68] = fVar31;
                param_1[0x69] = fVar52;
                param_1[0x6a] = fVar5;
                param_1[0x6b] = fVar50;
                param_1[0x6c] = 0.0;
                return;
              }
            } while( true );
          }
          if (param_7 == (float *)0x0) {
            uVar56 = (ulonglong)DAT_ram_4009a1a8;
            uVar62 = (ulonglong)DAT_ram_4009a1ac;
            uVar63 = (ulonglong)DAT_ram_4009a1b0;
            fVar47 = DAT_ram_4009a1b4;
            fVar28 = DAT_ram_40096018;
LAB_ram_40064894:
            uVar45 = (ulonglong)(uint)fVar28;
            if (DAT_ram_40094604 < fVar28) {
              uVar45 = (ulonglong)(uint)DAT_ram_40094604;
            }
          }
          else {
            fVar28 = *param_7;
            uVar63 = (ulonglong)(uint)fVar28;
            fVar51 = param_7[1];
            fVar31 = param_7[2];
            fVar47 = param_7[4];
            if (fVar28 < 0.0) {
              uVar63 = 0;
            }
            else if (DAT_ram_40094604 < fVar28) {
              uVar63 = (ulonglong)(uint)DAT_ram_40094604;
            }
            if (fVar51 < 0.0) {
              uVar56 = 0;
            }
            else {
              uVar56 = (ulonglong)(uint)fVar51;
              if (DAT_ram_40094604 < fVar51) {
                uVar56 = (ulonglong)(uint)DAT_ram_40094604;
              }
            }
            if (fVar31 < 0.0) {
              uVar62 = 0;
            }
            else {
              uVar62 = (ulonglong)(uint)fVar31;
              if (DAT_ram_40094604 < fVar31) {
                uVar62 = (ulonglong)(uint)DAT_ram_40094604;
              }
            }
            fVar28 = param_7[3];
            if (0.0 <= param_7[3]) goto LAB_ram_40064894;
            uVar45 = 0;
          }
          uVar66 = (ulonglong)(uint)DAT_ram_40094604;
          if (fVar47 < 0.0) {
            fVar47 = 0.0;
          }
          else if (DAT_ram_40094604 < fVar47) {
            fVar47 = DAT_ram_40094604;
          }
          fVar28 = *param_1;
          fVar51 = (float)uVar63;
          if ((float)*(undefined8 *)(param_1 + 0xf) == fVar51) {
            fVar31 = param_1[0x62];
          }
          else {
            fVar25 = param_1[2];
            fVar31 = DAT_ram_40094604;
            if (DAT_ram_40094e80 <= fVar28) {
              fVar38 = fVar28;
              if (0.0 <= fVar51) {
                uVar60 = uVar66;
                if (fVar51 <= DAT_ram_40094604) {
                  uVar60 = uVar63;
                }
              }
              else {
                uVar60 = 0;
              }
LAB_ram_40064168:
              fVar52 = ((float)uVar60 * DAT_ram_40096028 + (float)PTR_entry_ram_40094618) *
                       (float)DAT_ram_40099fa4 * fVar38;
              if (DAT_ram_40094604 <= fVar52) {
                fVar51 = DAT_ram_40094604;
                if (1 < (uint)fVar25) goto LAB_ram_400641a0;
              }
              else {
                fVar52 = DAT_ram_40094604;
                if ((uint)fVar25 < 2) goto LAB_ram_400641b0;
LAB_ram_400641a0:
                fVar51 = (float)((int)fVar25 - 2);
              }
              fVar31 = fVar52;
              if (fVar51 < fVar52) {
                fVar31 = fVar51;
              }
            }
            else {
              fVar52 = DAT_ram_4009a1b8;
              if ((0.0 <= fVar51) &&
                 (uVar60 = uVar63, fVar38 = DAT_ram_40094664, fVar52 = DAT_ram_4009a140,
                 fVar51 <= DAT_ram_40094604)) goto LAB_ram_40064168;
              if (1 < (uint)fVar25) goto LAB_ram_400641a0;
            }
LAB_ram_400641b0:
            param_1[0x62] = fVar31;
            *(ulonglong *)(param_1 + 0xf) = uVar63;
          }
          fVar51 = (float)uVar56;
          if ((float)*(undefined8 *)(param_1 + 0x10) == fVar51) {
            fVar51 = param_1[99];
            goto LAB_ram_400641c4;
          }
          if (fVar51 < 0.0) {
            fVar25 = 0.0;
LAB_ram_400652e8:
            fVar51 = fVar25 * DAT_ram_40094608 + 0.0;
          }
          else {
            fVar25 = fVar46;
            if (fVar46 < fVar51) goto LAB_ram_400652e8;
            fVar51 = fVar51 * DAT_ram_40094608 + 0.0;
            if (0.0 <= fVar51) {
              if (DAT_ram_40094608 < fVar51) {
                fVar51 = DAT_ram_40094608;
              }
            }
            else {
              fVar51 = 0.0;
            }
          }
          param_1[99] = fVar51;
          *(ulonglong *)(param_1 + 0x10) = uVar56;
LAB_ram_400641c4:
          fVar25 = DAT_ram_40094e88;
          fVar38 = (float)uVar62;
          if ((float)*(undefined8 *)(param_1 + 0x11) == fVar38) {
            fVar38 = param_1[0x66];
          }
          else {
            uVar56 = 0;
            if ((0.0 <= fVar38) && (uVar56 = uVar66, fVar38 <= fVar46)) {
              uVar56 = uVar62;
            }
            puVar34 = &DAT_ram_4009a2fc;
            fVar38 = (float)uVar56 * DAT_ram_40095280 + DAT_ram_40094e88;
            iVar11 = 0;
            iVar33 = 1;
            fVar52 = ABS(fVar38 - DAT_ram_40094e88);
            do {
              uVar64 = *puVar34;
              puVar34 = (undefined8 *)((int)puVar34 + 4);
              fVar5 = ABS(fVar38 - (float)uVar64);
              if (fVar5 < fVar52) {
                iVar11 = iVar33;
                fVar52 = fVar5;
              }
              iVar33 = iVar33 + 1;
            } while (iVar33 != 0x15);
            fVar38 = *(float *)(iVar11 * 4 + 0x4009a2f8);
            *(ulonglong *)(param_1 + 0x11) = uVar62;
            param_1[0x66] = fVar38;
          }
          fVar52 = (float)uVar45;
          if ((float)*(undefined8 *)(param_1 + 0x12) == fVar52) {
            uVar45 = (ulonglong)(uint)param_1[0x67];
          }
          else {
            param_1[0x67] = fVar52;
            param_1[0x12] = fVar52;
          }
          if ((float)*(undefined8 *)(param_1 + 0x13) == fVar47) {
            fVar47 = param_1[100];
          }
          else {
            param_1[100] = fVar47;
            param_1[0x13] = fVar47;
          }
          if ((float)*(undefined8 *)(param_1 + 0x14) == fVar46) {
            fVar52 = param_1[0x65];
          }
          else {
            param_1[0x65] = fVar46;
            *(ulonglong *)(param_1 + 0x14) = uVar66;
            fVar52 = fVar46;
          }
          if (fVar51 < 0.0) {
            fVar51 = 0.0;
          }
          else if (DAT_ram_40094608 < fVar51) {
            fVar51 = DAT_ram_40094608;
          }
          if (fVar47 < 0.0) {
            fVar47 = 0.0;
          }
          else if (fVar46 < fVar47) {
            fVar47 = fVar46;
          }
          if (fVar52 < 0.0) {
            fVar52 = 0.0;
          }
          else if (fVar46 < fVar52) {
            fVar52 = fVar46;
          }
          fVar5 = fVar25;
          if ((fVar38 < fVar25) || (fVar5 = DAT_ram_40094eb0, DAT_ram_40094eb0 < fVar38)) {
            fVar38 = fVar5;
          }
          if ((float)uVar45 < 0.0) {
            uVar45 = 0;
          }
          else if (fVar46 < (float)uVar45) {
            uVar45 = uVar66;
          }
          if (fVar28 < fVar48) {
            uVar66 = (ulonglong)DAT_ram_4009a1bc;
            bVar2 = true;
            fVar28 = DAT_ram_4009a160;
          }
          else {
            fVar48 = DAT_ram_4009a1fc / fVar28;
            fVar28 = fVar28 * DAT_ram_4009a16c;
            if (fVar48 < 0.0) {
              uVar66 = 0;
              bVar2 = true;
            }
            else if (fVar46 < fVar48) {
              bVar2 = false;
            }
            else {
              bVar2 = fVar48 < DAT_ram_40094644;
              uVar66 = (ulonglong)(uint)fVar48;
            }
          }
          fVar48 = fVar46 / (float)param_6;
          if (DAT_ram_4009a200 <= fVar38) {
            fVar5 = 0.0;
            fStack_a4 = 0.0;
            iVar11 = 0;
            fVar38 = fVar5;
          }
          else {
            if (fVar38 != param_1[0x77]) {
              fVar50 = (float)FUN_ram_40000d44(puVar65,-(fVar38 - fVar46));
              fVar5 = DAT_ram_40095454;
              uVar66 = CONCAT44((int)uVar45,(int)uVar66);
              uVar45 = CONCAT44(fVar28,(int)uVar45);
              if (fVar50 < DAT_ram_40094620) {
                fVar50 = DAT_ram_40094620;
              }
              param_1[0x78] = fVar50;
              param_1[0x77] = fVar38;
              param_1[0x7a] = fVar50 * fVar5;
              param_1[0x79] = fVar46 / fVar50;
            }
            fStack_a4 = param_1[0x7a];
            fVar5 = param_1[0x78];
            iVar11 = 1;
            fVar38 = param_1[0x79];
          }
          if (*(char *)((int)param_1 + 0x236) == '\0') {
            param_1[0x68] = fVar31;
            param_1[0x69] = fVar51;
            param_1[0x6a] = fVar47;
            param_1[0x6b] = fVar52;
            *(undefined1 *)((int)param_1 + 0x236) = 1;
            fVar41 = fVar47;
            fVar42 = fVar52;
            fVar44 = fVar51;
            fVar50 = fVar31;
          }
          else {
            fVar41 = param_1[0x6a];
            fVar42 = param_1[0x6b];
            fVar44 = param_1[0x69];
            fVar50 = param_1[0x68];
          }
          puVar54 = DAT_ram_4009461c;
          fVar35 = param_1[2];
          fVar31 = fVar31 - fVar50;
          fVar51 = fVar51 - fVar44;
          fVar52 = fVar52 - fVar42;
          fVar47 = fVar47 - fVar41;
          fVar9 = (float)uVar45;
          fVar24 = -fVar9;
          fVar40 = param_1[0x75];
          fVar43 = param_1[0x76];
          fVar4 = param_1[0x6e];
          fVar18 = param_1[0x6f];
          fVar36 = param_1[0x70];
          fVar15 = param_1[0x71];
          fVar32 = param_1[3];
          puVar34 = (undefined8 *)param_1[1];
          iVar33 = 0;
          fVar16 = in_register_00000100;
          fVar57 = DAT_ram_4009558c;
          fVar13 = DAT_ram_40094634;
          do {
            fVar49 = (float)DAT_ram_4009a204;
            fVar37 = *param_2;
            if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
              fVar37 = (fVar37 + (float)*(undefined8 *)((int)param_3 + iVar33)) * fVar13;
            }
            fVar58 = fVar4 * fVar28 + fVar50;
            if (fVar58 < fVar46) {
              fVar58 = fVar46;
            }
            if ((float)(uint)fVar35 - (float)puVar65 < fVar58) {
              fVar58 = (float)(uint)fVar35 - (float)puVar65;
            }
            fVar58 = (float)(uint)fVar32 - fVar58;
            if (fVar58 < 0.0) {
              fVar58 = fVar58 + in_register_00000100;
            }
            uVar30 = (uint)(-1 < (int)fVar58) * (int)fVar58;
            puVar12 = (undefined8 *)((int)puVar34 + (uVar30 + 1) * 4);
            if ((uint)fVar35 <= uVar30 + 1) {
              puVar12 = puVar34;
            }
            fVar58 = (float)*(undefined8 *)((int)puVar34 + uVar30 * 4) *
                     (fVar46 - (fVar58 - (float)uVar30)) +
                     (fVar58 - (float)uVar30) * (float)*puVar12;
            fVar14 = (float)uVar45;
            if (bVar2) {
              fVar40 = fVar40 + (float)uVar66;
              if (fVar46 <= fVar40) {
                fVar40 = fVar40 - fVar46;
                fVar43 = fVar58;
              }
              if (iVar11 == 0) goto LAB_ram_40064432;
LAB_ram_40064530:
              fVar59 = fVar24;
              if ((fVar5 <= 0.0) || (fVar38 <= 0.0)) {
                if ((fVar16 <= fVar43) && (fVar59 = fVar14, fVar43 <= fVar46))
                goto LAB_ram_40064432;
              }
              else {
                uVar30 = (int)param_1[0x61] * 0x19660d + 0x3c6ef35f;
                fVar17 = (float)(uVar30 * 0x19660d + 0x3c6ef35f);
                fVar57 = (float)uVar30 * (float)DAT_ram_4009a204;
                param_1[0x61] = fVar17;
                fVar49 = (float)FUN_ram_40000970(fVar38 * (fStack_a4 *
                                                           ((float)(uint)fVar17 * fVar49 *
                                                            (float)puVar65 + fVar16 +
                                                           fVar57 * (float)puVar65 + fVar16) *
                                                           fVar13 + fVar43));
                fVar49 = fVar5 * fVar49;
                uVar66 = CONCAT44(fVar5,(float)uVar66);
                uVar45 = CONCAT44(iVar11,fVar14);
                fVar16 = DAT_ram_40094600;
                fVar57 = DAT_ram_4009558c;
                fVar13 = DAT_ram_40094634;
                if ((DAT_ram_40094600 <= fVar49) && (fVar59 = fVar14, fVar49 <= fVar46)) {
                  fVar59 = fVar14 * fVar49;
                }
              }
            }
            else {
              fVar43 = fVar58;
              if (iVar11 != 0) goto LAB_ram_40064530;
LAB_ram_40064432:
              fVar59 = fVar43 * fVar14;
            }
            fVar59 = fVar58 * (fVar46 - fVar9) + fVar59;
            puVar55 = (undefined *)(fVar59 * fVar44 + fVar37);
            puVar53 = puVar54;
            if (((float)puVar54 <= (float)puVar55) &&
               (puVar53 = puVar55, (float)puVar65 < (float)puVar55)) {
              puVar53 = puVar65;
            }
            *(undefined **)((int)puVar34 + (int)fVar32 * 4) = puVar53;
            fVar32 = (float)((int)fVar32 + 1 & -(uint)((uint)((int)fVar32 + 1) < (uint)fVar35));
            if (fVar41 < 0.0) {
              fVar59 = fVar59 * 0.0;
              fVar37 = fVar46;
            }
            else {
              fVar37 = 0.0;
              if (fVar41 <= fVar46) {
                fVar59 = fVar59 * fVar41;
                if (fVar41 <= fVar57) {
LAB_ram_4006467c:
                  fVar37 = fVar46;
                }
                else {
                  fVar37 = -((fVar41 - fVar57) * fVar25) + fVar46;
                  if (0.0 <= fVar37) {
                    if (fVar46 < fVar37) goto LAB_ram_4006467c;
                  }
                  else {
                    fVar37 = 0.0;
                  }
                }
              }
            }
            fVar49 = (float)*(undefined8 *)param_2;
            if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
              fVar37 = fVar42 * (fVar49 * fVar37 + fVar59);
              *param_4 = fVar37;
              if (param_5 != (float *)0x0) {
                *(ulonglong *)((int)param_5 + iVar33) = (ulonglong)(uint)fVar37;
              }
            }
            else {
              fVar14 = (float)*(undefined8 *)((int)param_3 + iVar33);
              fVar58 = fVar42 * (fVar37 * (fVar49 + fVar14) * fVar13 + fVar59);
              if (param_5 == (float *)0x0) {
                *param_4 = fVar58;
              }
              else {
                fVar49 = fVar49 - fVar14;
                fVar37 = fVar37 * fVar42 * fVar13;
                *param_4 = fVar37 * fVar49 + fVar58;
                *(ulonglong *)((int)param_5 + iVar33) =
                     (ulonglong)(uint)(-(fVar37 * fVar49) + fVar58);
              }
            }
            fVar37 = fVar36 * fVar4;
            iVar33 = iVar33 + 4;
            fVar50 = fVar50 + fVar31 * fVar48;
            fVar44 = fVar44 + fVar51 * fVar48;
            fVar4 = fVar15 * fVar4 + fVar36 * fVar18;
            fVar18 = fVar15 * fVar18 - fVar37;
            fVar41 = fVar41 + fVar47 * fVar48;
            fVar42 = fVar42 + fVar52 * fVar48;
            param_2 = param_2 + 1;
            param_4 = param_4 + 1;
            if (param_6 << 2 == iVar33) {
              param_1[3] = fVar32;
              param_1[0x68] = fVar50;
              param_1[0x69] = fVar44;
              param_1[0x6a] = fVar41;
              param_1[0x6b] = fVar42;
              param_1[0x75] = fVar40;
              param_1[0x76] = fVar43;
              param_1[0x6e] = fVar4;
              param_1[0x6f] = fVar18;
              return;
            }
          } while( true );
        }
        if (param_7 == (float *)0x0) {
          uVar56 = (ulonglong)DAT_ram_4009a1a0;
          uVar62 = (ulonglong)DAT_ram_4009a1a4;
          fVar51 = DAT_ram_40094634;
        }
        else {
          fVar51 = param_7[2];
          fVar47 = *param_7;
          fVar28 = param_7[1];
          if (0.0 <= fVar51) {
            if (DAT_ram_40094604 < fVar51) {
              fVar51 = DAT_ram_40094604;
            }
          }
          else {
            fVar51 = 0.0;
          }
          uVar62 = (ulonglong)(uint)DAT_ram_40094604;
          if (0.0 <= fVar47) {
            uVar56 = (ulonglong)(uint)fVar47;
            if (DAT_ram_40094604 < fVar47) {
              uVar56 = uVar62;
            }
          }
          else {
            uVar56 = 0;
          }
          if (fVar28 < 0.0) {
            uVar62 = 0;
          }
          else if (fVar28 <= DAT_ram_40094604) {
            uVar62 = (ulonglong)(uint)fVar28;
          }
        }
        uVar63 = (ulonglong)(uint)DAT_ram_40094604;
        fVar47 = *param_1;
        fVar28 = param_1[2];
        fVar31 = (float)uVar56;
        local_f0 = DAT_ram_40094604;
        if ((float)*(undefined8 *)(param_1 + 0xf) == fVar31) {
          local_f0 = param_1[0x62];
        }
        else {
          if (DAT_ram_40094e80 <= fVar47) {
            fVar25 = fVar47;
            if (0.0 <= fVar31) {
              uVar45 = uVar63;
              if (fVar31 <= DAT_ram_40094604) {
                uVar45 = uVar56;
              }
            }
            else {
              uVar45 = 0;
            }
LAB_ram_40062a4a:
            local_f0 = ((float)uVar45 * DAT_ram_40096020 + DAT_ram_40094ee0) *
                       (float)DAT_ram_40099fa4 * fVar25;
            if (DAT_ram_40094604 <= local_f0) {
              fVar31 = DAT_ram_40094604;
              if (1 < (uint)fVar28) goto LAB_ram_40062a82;
            }
            else {
              local_f0 = DAT_ram_40094604;
              if ((uint)fVar28 < 2) goto LAB_ram_40062a94;
LAB_ram_40062a82:
              fVar31 = (float)((int)fVar28 - 2);
            }
            if (fVar31 < local_f0) {
              local_f0 = fVar31;
            }
          }
          else if (fVar31 < 0.0) {
            if (1 < (uint)fVar28) {
              local_f0 = DAT_ram_4009a13c;
              goto LAB_ram_40062a82;
            }
          }
          else {
            uVar45 = uVar56;
            fVar25 = DAT_ram_40094664;
            if (fVar31 <= DAT_ram_40094604) goto LAB_ram_40062a4a;
            if (1 < (uint)fVar28) {
              local_f0 = DAT_ram_4009a140;
              goto LAB_ram_40062a82;
            }
          }
LAB_ram_40062a94:
          *(ulonglong *)(param_1 + 0xf) = uVar56;
          param_1[0x62] = local_f0;
        }
        fVar31 = (float)uVar62;
        if ((float)*(undefined8 *)(param_1 + 0x10) == fVar31) {
          fVar31 = param_1[99];
        }
        else {
          if (fVar31 < 0.0) {
            fVar25 = 0.0;
LAB_ram_40065348:
            fVar31 = fVar25 * DAT_ram_40094608 + 0.0;
          }
          else {
            fVar25 = fVar46;
            if (fVar46 < fVar31) goto LAB_ram_40065348;
            fVar31 = fVar31 * DAT_ram_40094608 + 0.0;
            if (0.0 <= fVar31) {
              if (DAT_ram_40094608 < fVar31) {
                fVar31 = DAT_ram_40094608;
              }
            }
            else {
              fVar31 = 0.0;
            }
          }
          param_1[99] = fVar31;
          *(ulonglong *)(param_1 + 0x10) = uVar62;
        }
        if (fVar51 == (float)*(undefined8 *)(param_1 + 0x11)) {
          fVar51 = param_1[100];
        }
        else {
          param_1[100] = fVar51;
          param_1[0x11] = fVar51;
        }
        if ((float)*(undefined8 *)(param_1 + 0x12) == fVar46) {
          fVar25 = param_1[0x65];
        }
        else {
          param_1[0x65] = fVar46;
          *(ulonglong *)(param_1 + 0x12) = uVar63;
          fVar25 = fVar46;
        }
        if (0.0 <= fVar31) {
          if (DAT_ram_40094608 < fVar31) {
            fVar31 = DAT_ram_40094608;
          }
        }
        else {
          fVar31 = 0.0;
        }
        if (0.0 <= fVar51) {
          if (fVar46 < fVar51) {
            fVar51 = fVar46;
          }
        }
        else {
          fVar51 = 0.0;
        }
        if (0.0 <= fVar25) {
          if (fVar46 < fVar25) {
            fVar25 = fVar46;
          }
        }
        else {
          fVar25 = 0.0;
        }
        fVar38 = fVar46 / (float)param_6;
        if (fVar48 <= fVar47) {
          if ((uint)fVar28 < 8) {
            FUN_ram_40000902(fVar47 * DAT_ram_4009a1f8);
            goto LAB_ram_400650fe;
          }
          fVar47 = fVar47 * DAT_ram_4009a16c;
        }
        else {
          fVar47 = DAT_ram_4009a160;
          if ((uint)fVar28 < 8) {
LAB_ram_400650fe:
            fVar46 = DAT_ram_40094634;
            if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
              if (param_2 != param_4) {
                FUN_ram_4000304c(param_4,param_2,param_6 << 2);
              }
              if ((param_5 != (float *)0x0) && (param_5 != param_4)) {
                FUN_ram_4000304c(param_5,param_4,param_6 << 2);
              }
            }
            else if (param_5 == (float *)0x0) {
              uVar30 = 0;
              iVar11 = 0;
              do {
                puVar12 = (undefined8 *)((int)param_3 + iVar11);
                puVar34 = (undefined8 *)((int)param_2 + iVar11);
                puVar20 = (ulonglong *)((int)param_4 + iVar11);
                uVar30 = uVar30 + 1;
                iVar11 = iVar11 + 4;
                *puVar20 = (ulonglong)(uint)(((float)*puVar34 + (float)*puVar12) * fVar46);
              } while (uVar30 < param_6);
            }
            else {
              if (param_2 != param_4) {
                FUN_ram_4000304c(param_4,param_2,param_6 << 2);
              }
              if (param_3 != param_5) {
                FUN_ram_4000304c(param_5,param_3,param_6 << 2);
              }
            }
            param_1[0x68] = local_f0;
            return;
          }
        }
        fVar50 = (float)((uint)fVar28 >> 1);
        fVar52 = (float)(int)fVar50;
        fVar5 = fVar50;
        fVar44 = fVar52;
        if (0x3f < (uint)fVar28) {
          fVar5 = 4.48416e-44;
          fVar44 = DAT_ram_40096038;
        }
        if ((fVar44 <= local_f0) && (fVar44 = fVar52, local_f0 <= fVar52)) {
          fVar44 = local_f0;
        }
        fVar28 = (float)FUN_ram_40000902(fVar44);
        if ((uint)fVar5 < (uint)fVar28) {
          fVar5 = fVar28;
        }
        iVar11 = 0xdd;
        if ((uint)fVar5 <= (uint)fVar50) {
          fVar50 = fVar5;
        }
        if (fVar48 <= (float)*(undefined8 *)param_1) {
          iVar11 = FUN_ram_40000902((float)*(undefined8 *)param_1 * DAT_ram_4009a1f8);
        }
        if (*(char *)((int)param_1 + 0x236) == '\0') {
          param_1[0x69] = fVar31;
          param_1[0x68] = local_f0;
          param_1[0x6a] = fVar51;
          param_1[0x6b] = fVar25;
          *(undefined1 *)((int)param_1 + 0x236) = 1;
        }
        fVar48 = param_1[0x87];
        if ((fVar48 == 0.0) || ((uint)param_1[2] >> 1 < (uint)fVar48)) {
          fVar48 = param_1[1];
          if (fVar48 == 0.0) {
            fVar28 = param_1[0x88];
            pfVar6 = (float *)0x0;
            fVar48 = fVar50;
            goto LAB_ram_40062c2a;
          }
        }
        else {
          if (fVar48 == fVar50) {
            pfVar6 = (float *)param_1[1];
            fVar28 = param_1[0x88];
            goto LAB_ram_40062c2a;
          }
          fVar28 = param_1[0x88];
          if ((fVar28 != 0.0) && (((uint)fVar48 <= (uint)fVar50 || ((uint)fVar28 < (uint)fVar50))))
          {
            pfVar6 = (float *)param_1[1];
            goto LAB_ram_40062c2a;
          }
          fVar48 = param_1[1];
          if (fVar48 == 0.0) {
            pfVar6 = (float *)0x0;
            fVar48 = fVar50;
            goto LAB_ram_40062c2a;
          }
        }
        memset(fVar48,0,(int)fVar50 << 3);
        pfVar6 = (float *)param_1[1];
        param_1[0x87] = fVar50;
        param_1[0x88] = 0.0;
        *(undefined1 *)(param_1 + 0x89) = 0;
        fVar28 = 0.0;
        fVar48 = fVar50;
LAB_ram_40062c2a:
        fVar52 = param_1[0x69];
        fVar5 = param_1[0x6a];
        fVar44 = param_1[0x6b];
        fVar31 = fVar31 - fVar52;
        fVar51 = fVar51 - fVar5;
        fVar25 = fVar25 - fVar44;
        fVar42 = param_1[0x6e];
        fVar40 = param_1[0x6f];
        fVar43 = param_1[0x70];
        fVar4 = param_1[0x71];
        fVar41 = 0.0;
        if (1 < iVar11) {
          fVar41 = fVar46 / (float)(iVar11 + -1);
        }
        bVar10 = *(byte *)(param_1 + 0x89);
        iVar33 = 0;
        fVar15 = DAT_ram_4009558c;
        fVar36 = DAT_ram_40094e88;
        fVar18 = DAT_ram_40094634;
        do {
          fVar24 = (float)*(undefined8 *)param_2;
          if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
            fVar24 = (fVar24 + (float)*(undefined8 *)((int)param_3 + iVar33)) * fVar18;
          }
          fVar16 = (float)((int)fVar48 - 1);
          fVar57 = fVar47 * fVar42 + (float)(uint)fVar28;
          if (fVar57 < 0.0) {
            fVar57 = 0.0;
          }
          else if (fVar16 < fVar57) {
            fVar57 = fVar16;
          }
          iVar21 = (int)fVar48 * 4;
          pfVar29 = pfVar6;
          if (bVar10 != 0) {
            iVar21 = 0;
            pfVar29 = pfVar6 + (int)fVar48;
          }
          fVar13 = 0.0;
          if ((pfVar29 != (float *)0x0) && (fVar48 != 0.0)) {
            if (0.0 < fVar57) {
              if (fVar57 < fVar16) {
                uVar30 = (uint)(-1 < (int)fVar57) * (int)fVar57;
                iVar22 = (int)fVar48 - uVar30;
                fVar57 = fVar57 - (float)uVar30;
                iVar23 = iVar22 + -1;
                pfVar7 = pfVar29 + iVar22 + -2;
                if (iVar23 == 0) {
                  pfVar7 = pfVar29;
                }
                fVar13 = (fVar46 - fVar57) * pfVar29[iVar23] + fVar57 * (float)*(undefined8 *)pfVar7
                ;
              }
              else {
                fVar13 = *pfVar29;
              }
            }
            else {
              fVar13 = pfVar29[(int)fVar48 + -1];
            }
          }
          fVar16 = fVar13;
          if (1 < iVar11) {
            if ((int)fVar28 < iVar11) {
              fVar16 = (float)(uint)fVar28 * fVar41 * fVar13;
            }
            else if ((uint)((int)fVar48 - iVar11) <= (uint)fVar28) {
              fVar16 = (float)(int)(~(uint)fVar28 + (int)fVar48) * fVar41;
              if (0.0 <= fVar16) {
                fVar16 = fVar16 * fVar13;
              }
              else {
                fVar16 = fVar13 * 0.0;
              }
            }
          }
          *(ulonglong *)(iVar21 + (int)fVar28 * 4 + (int)pfVar6) =
               (ulonglong)(uint)(fVar13 * fVar52 + fVar24);
          if (fVar5 < 0.0) {
            fVar16 = fVar16 * 0.0;
            fVar24 = fVar46;
          }
          else {
            fVar24 = 0.0;
            if (fVar5 <= fVar46) {
              fVar16 = fVar16 * fVar5;
              if (fVar5 <= fVar15) {
LAB_ram_400635c4:
                fVar24 = fVar46;
              }
              else {
                fVar24 = -((fVar5 - fVar15) * fVar36) + fVar46;
                if (0.0 <= fVar24) {
                  if (fVar46 < fVar24) goto LAB_ram_400635c4;
                }
                else {
                  fVar24 = 0.0;
                }
              }
            }
          }
          fVar57 = (float)*(undefined8 *)param_2;
          if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
            fVar24 = fVar44 * (fVar57 * fVar24 + fVar16);
            *param_4 = fVar24;
            if (param_5 != (float *)0x0) {
              *(ulonglong *)((int)param_5 + iVar33) = (ulonglong)(uint)fVar24;
            }
          }
          else {
            fVar13 = (float)*(undefined8 *)((int)param_3 + iVar33);
            fVar16 = fVar44 * (fVar24 * (fVar57 + fVar13) * fVar18 + fVar16);
            if (param_5 == (float *)0x0) {
              *param_4 = fVar16;
            }
            else {
              fVar57 = fVar57 - fVar13;
              fVar24 = fVar24 * fVar44 * fVar18;
              *param_4 = fVar24 * fVar57 + fVar16;
              *(ulonglong *)((int)param_5 + iVar33) = (ulonglong)(uint)(-(fVar24 * fVar57) + fVar16)
              ;
            }
          }
          param_1[0x88] = (float)((int)fVar28 + 1);
          if ((uint)fVar48 <= (uint)((int)fVar28 + 1)) {
            if (fVar50 == fVar48) {
              bVar10 = bVar10 ^ 1;
              param_1[0x88] = 0.0;
            }
            else if (pfVar6 == (float *)0x0) {
              bVar10 = *(byte *)(param_1 + 0x89);
              fVar48 = fVar50;
            }
            else {
              memset(pfVar6,0,(int)fVar50 << 3);
              fVar15 = DAT_ram_4009558c;
              fVar36 = DAT_ram_40094e88;
              fVar18 = DAT_ram_40094634;
              param_1[0x87] = fVar50;
              param_1[0x88] = 0.0;
              *(undefined1 *)(param_1 + 0x89) = 0;
              bVar10 = 0;
              fVar48 = fVar50;
            }
          }
          fVar28 = fVar43 * fVar42;
          iVar33 = iVar33 + 4;
          fVar52 = fVar52 + fVar31 * fVar38;
          fVar5 = fVar5 + fVar51 * fVar38;
          fVar42 = fVar4 * fVar42 + fVar43 * fVar40;
          fVar40 = fVar4 * fVar40 - fVar28;
          fVar44 = fVar44 + fVar25 * fVar38;
          param_2 = param_2 + 1;
          param_4 = param_4 + 1;
          if (param_6 << 2 == iVar33) {
            param_1[0x69] = fVar52;
            param_1[0x6a] = fVar5;
            param_1[0x68] = local_f0;
            param_1[0x6b] = fVar44;
            param_1[0x6e] = fVar42;
            param_1[0x6f] = fVar40;
            *(byte *)(param_1 + 0x89) = bVar10;
            param_1[0x6d] = 0.0;
            return;
          }
          pfVar6 = (float *)param_1[1];
          fVar28 = param_1[0x88];
        } while( true );
      }
      if (param_7 == (float *)0x0) {
        uVar62 = (ulonglong)DAT_ram_4009a184;
        fVar47 = DAT_ram_4009a110;
        fVar28 = DAT_ram_40099fb8;
        fVar51 = DAT_ram_4009a188;
LAB_ram_400647f8:
        uVar56 = (ulonglong)(uint)fVar51;
        if (DAT_ram_40094604 < fVar51) {
          uVar56 = (ulonglong)(uint)DAT_ram_40094604;
        }
      }
      else {
        fVar47 = param_7[2];
        fVar51 = *param_7;
        fVar28 = param_7[3];
        if (fVar47 < 0.0) {
          fVar47 = 0.0;
        }
        else if (DAT_ram_40094604 < fVar47) {
          fVar47 = DAT_ram_40094604;
        }
        if (fVar28 < 0.0) {
          fVar28 = 0.0;
        }
        else if (DAT_ram_40094604 < fVar28) {
          fVar28 = DAT_ram_40094604;
        }
        if (fVar51 < 0.0) {
          uVar62 = 0;
        }
        else {
          uVar62 = (ulonglong)(uint)fVar51;
          if (DAT_ram_40094604 < fVar51) {
            uVar62 = (ulonglong)(uint)DAT_ram_40094604;
          }
        }
        fVar51 = param_7[1];
        if (0.0 <= param_7[1]) goto LAB_ram_400647f8;
        uVar56 = 0;
      }
      uVar63 = (ulonglong)(uint)DAT_ram_40094604;
      fVar51 = *param_1;
      fVar31 = param_1[2];
      fVar25 = (float)uVar62;
      if ((float)*(undefined8 *)(param_1 + 0xf) == fVar25) {
        fVar38 = param_1[0x62];
      }
      else {
        fVar38 = DAT_ram_40094604;
        if (DAT_ram_40094e80 <= fVar51) {
          fVar52 = fVar51;
          if (0.0 <= fVar25) {
            uVar45 = uVar63;
            if (fVar25 <= DAT_ram_40094604) {
              uVar45 = uVar62;
            }
          }
          else {
            uVar45 = 0;
          }
LAB_ram_40063a94:
          fVar5 = ((float)uVar45 * DAT_ram_40096020 + DAT_ram_40094ee0) * (float)DAT_ram_40099fa4 *
                  fVar52;
          if (DAT_ram_40094604 <= fVar5) {
            fVar25 = DAT_ram_40094604;
            if (1 < (uint)fVar31) goto LAB_ram_40063acc;
          }
          else {
            fVar5 = DAT_ram_40094604;
            if ((uint)fVar31 < 2) goto LAB_ram_40063ade;
LAB_ram_40063acc:
            fVar25 = (float)((int)fVar31 - 2);
          }
          fVar38 = fVar5;
          if (fVar25 < fVar5) {
            fVar38 = fVar25;
          }
        }
        else {
          fVar5 = DAT_ram_4009a13c;
          if ((0.0 <= fVar25) &&
             (uVar45 = uVar62, fVar52 = DAT_ram_40094664, fVar5 = DAT_ram_4009a140,
             fVar25 <= DAT_ram_40094604)) goto LAB_ram_40063a94;
          if (1 < (uint)fVar31) goto LAB_ram_40063acc;
        }
LAB_ram_40063ade:
        param_1[0x62] = fVar38;
        *(ulonglong *)(param_1 + 0xf) = uVar62;
      }
      fVar25 = (float)uVar56;
      if ((float)*(undefined8 *)(param_1 + 0x10) == fVar25) {
        fVar25 = param_1[99];
      }
      else {
        if (fVar25 < 0.0) {
          fVar52 = 0.0;
LAB_ram_40065216:
          fVar25 = fVar52 * DAT_ram_40094608 + 0.0;
        }
        else {
          fVar52 = fVar46;
          if (fVar46 < fVar25) goto LAB_ram_40065216;
          fVar25 = fVar25 * DAT_ram_40094608 + 0.0;
          if (0.0 <= fVar25) {
            if (DAT_ram_40094608 < fVar25) {
              fVar25 = DAT_ram_40094608;
            }
          }
          else {
            fVar25 = 0.0;
          }
        }
        param_1[99] = fVar25;
        *(ulonglong *)(param_1 + 0x10) = uVar56;
      }
      fVar50 = DAT_ram_4009a0f8;
      fVar5 = DAT_ram_4009a0f4;
      fVar52 = DAT_ram_4009a0ec;
      puVar65 = DAT_ram_4009461c;
      if ((float)*(undefined8 *)(param_1 + 0x11) == fVar47) {
        fVar52 = param_1[0x52];
        fVar5 = param_1[0x53];
        fVar47 = param_1[0x55];
        fVar51 = param_1[0x54];
        fVar48 = param_1[0x56];
        goto LAB_ram_40063b1a;
      }
      if (fVar51 < fVar48) {
        fVar51 = DAT_ram_40094664;
      }
      fVar48 = fVar51 * DAT_ram_4009a10c;
      fVar44 = fVar51;
      fVar41 = fVar48;
      if (fVar47 < 0.0) {
        fVar42 = 0.0;
LAB_ram_4006525e:
        fVar42 = (fVar46 - fVar42 / DAT_ram_4009a110) * DAT_ram_40095288 +
                 (fVar42 / DAT_ram_4009a110) * DAT_ram_4009a114;
LAB_ram_40064d88:
        fVar40 = DAT_ram_40095450;
        fVar43 = DAT_ram_40094ea8;
        if ((DAT_ram_40095450 <= fVar42) && (fVar40 = fVar42, fVar48 < fVar42)) {
          fVar40 = fVar48;
        }
LAB_ram_40064daa:
        if (fVar48 < fVar43) {
          fVar43 = fVar48;
        }
        if (fVar46 <= fVar51) {
          fVar52 = fVar46;
          if (fVar46 <= fVar43) goto LAB_ram_400655d4;
LAB_ram_40064dcc:
          fVar52 = (fVar52 / fVar44) * DAT_ram_40099f94;
          FUN_ram_40000712(fVar52);
          fVar44 = in_register_00000100;
          fVar50 = (float)FUN_ram_400009d2(fVar52);
          puVar54 = (undefined *)(in_register_00000100 * (float)DAT_ram_4009461c);
          fVar5 = (in_register_00000100 + fVar46) * DAT_ram_40094634;
          puVar55 = (undefined *)-(in_register_00000100 + fVar46);
          fVar52 = fVar50 / DAT_ram_40099f4c + fVar46;
          fVar50 = fVar46 - fVar50 / DAT_ram_40099f4c;
          in_register_00000100 = fVar44;
          if (fVar52 == 0.0) {
            fVar52 = fVar46;
          }
          goto LAB_ram_40064e36;
        }
        fVar44 = DAT_ram_40094664;
        fVar41 = DAT_ram_4009a0dc._4_4_;
        if (fVar46 <= fVar43) {
LAB_ram_400655d4:
          fVar52 = fVar43;
          if (fVar41 < fVar43) {
            fVar52 = fVar41;
          }
          goto LAB_ram_40064dcc;
        }
        param_1[0x4b] = DAT_ram_4009a0ec;
        param_1[0x4c] = fVar50;
        param_1[0x4d] = fVar52;
        param_1[0x4e] = fVar50;
        param_1[0x4f] = fVar5;
LAB_ram_40065414:
        if (fVar40 < fVar46) {
          fVar5 = 0.0;
          puVar54 = puVar65;
          fVar52 = 0.0;
          fVar48 = DAT_ram_4009a0f0;
          fVar50 = DAT_ram_4009a0ec;
        }
        else {
          fVar44 = fVar40;
          fVar51 = DAT_ram_40094664;
          fVar5 = DAT_ram_4009a198;
          puVar54 = DAT_ram_4009a190;
          fVar52 = DAT_ram_4009a194;
          fVar48 = DAT_ram_4009a19c;
          fVar50 = DAT_ram_4009a18c;
          if (fVar40 <= DAT_ram_4009a0dc._4_4_) goto LAB_ram_40064e78;
        }
      }
      else {
        if (fVar47 <= fVar46) {
          fVar42 = fVar47;
          if (fVar47 <= DAT_ram_4009a110) goto LAB_ram_4006525e;
          if (DAT_ram_4009a118 < fVar47) {
            fVar42 = (fVar47 - DAT_ram_4009a118) / DAT_ram_4009a11c;
            fVar40 = (fVar46 - fVar42) * DAT_ram_4009a120 + fVar42 * DAT_ram_4009a0e8;
            fVar43 = (fVar46 - fVar42) * DAT_ram_40094ea8 + fVar42 * DAT_ram_4009a0e4;
            fVar42 = DAT_ram_40095450;
            if ((DAT_ram_40095450 <= fVar40) && (fVar42 = fVar40, fVar48 < fVar40)) {
              fVar42 = fVar48;
            }
            goto LAB_ram_400655ba;
          }
          fVar42 = (fVar47 - DAT_ram_4009a110) / DAT_ram_4009a124;
          fVar42 = (fVar46 - fVar42) * DAT_ram_4009a114 + fVar42 * DAT_ram_4009a120;
          goto LAB_ram_40064d88;
        }
        fVar40 = fVar48;
        fVar42 = DAT_ram_4009a0e8;
        fVar43 = DAT_ram_4009a0e4;
        if (fVar48 < DAT_ram_4009a0e8) goto LAB_ram_40064daa;
LAB_ram_400655ba:
        fVar40 = fVar42;
        if (fVar46 <= fVar43) goto LAB_ram_40064daa;
        fVar43 = fVar46;
        puVar54 = DAT_ram_4009461c;
        fVar5 = fVar46;
        puVar55 = DAT_ram_4009461c;
        fVar52 = DAT_ram_4009a0f0;
        fVar50 = DAT_ram_4009a0ec;
        if (fVar46 <= fVar51) goto LAB_ram_400655d4;
LAB_ram_40064e36:
        puVar65 = DAT_ram_4009461c;
        fVar52 = fVar46 / fVar52;
        param_1[0x4b] = fVar52 * fVar5;
        param_1[0x4c] = fVar52 * (float)puVar55;
        param_1[0x4d] = fVar52 * fVar5;
        param_1[0x4e] = fVar52 * (float)puVar54;
        param_1[0x4f] = fVar52 * fVar50;
        if (fVar51 < fVar46) goto LAB_ram_40065414;
        fVar44 = fVar46;
        if ((fVar46 <= fVar40) && (fVar44 = fVar40, fVar48 < fVar40)) {
          fVar44 = fVar48;
        }
LAB_ram_40064e78:
        fVar48 = (fVar44 / fVar51) * DAT_ram_40099f94;
        fVar51 = (float)FUN_ram_40000712(fVar48);
        fVar52 = (float)FUN_ram_400009d2(fVar48);
        fVar5 = fVar46 - fVar51;
        fVar48 = fVar52 / DAT_ram_40099f4c + fVar46;
        fVar50 = fVar46 - fVar52 / DAT_ram_40099f4c;
        puVar54 = (undefined *)(fVar51 * (float)puVar65);
        fVar52 = fVar5 * DAT_ram_40094634;
        if (fVar48 == 0.0) {
          fVar48 = fVar46;
        }
      }
      fVar48 = fVar46 / fVar48;
      param_1[0x66] = fVar47;
      param_1[0x11] = fVar47;
      fVar52 = fVar48 * fVar52;
      fVar5 = fVar48 * fVar5;
      fVar47 = fVar48 * (float)puVar54;
      fVar48 = fVar48 * fVar50;
      param_1[0x52] = fVar52;
      param_1[0x53] = fVar5;
      param_1[0x54] = fVar52;
      param_1[0x55] = fVar47;
      param_1[0x56] = fVar48;
      fVar51 = fVar52;
LAB_ram_40063b1a:
      if ((float)*(undefined8 *)(param_1 + 0x12) == fVar28) {
        fVar28 = param_1[100];
      }
      else {
        param_1[100] = fVar28;
        param_1[0x12] = fVar28;
      }
      if ((float)*(undefined8 *)(param_1 + 0x13) == fVar46) {
        fVar50 = param_1[0x65];
      }
      else {
        param_1[0x65] = fVar46;
        *(ulonglong *)(param_1 + 0x13) = uVar63;
        fVar50 = fVar46;
      }
      if (fVar25 < 0.0) {
        fVar25 = 0.0;
      }
      else if (DAT_ram_40094608 < fVar25) {
        fVar25 = DAT_ram_40094608;
      }
      if (fVar28 < 0.0) {
        fVar28 = 0.0;
      }
      else if (fVar46 < fVar28) {
        fVar28 = fVar46;
      }
      if (fVar50 < 0.0) {
        fVar50 = 0.0;
      }
      else if (fVar46 < fVar50) {
        fVar50 = fVar46;
      }
      fVar44 = fVar46 / (float)param_6;
      if (*(char *)((int)param_1 + 0x236) == '\0') {
        param_1[0x68] = fVar38;
        param_1[0x69] = fVar25;
        param_1[0x6a] = fVar28;
        param_1[0x6b] = fVar50;
        *(undefined1 *)((int)param_1 + 0x236) = 1;
        fVar40 = fVar28;
        fVar41 = fVar38;
        fVar42 = fVar25;
      }
      else {
        fVar50 = param_1[0x6b];
        fVar40 = param_1[0x6a];
        fVar41 = param_1[0x68];
        fVar42 = param_1[0x69];
      }
      fVar24 = DAT_ram_4009558c;
      fVar15 = DAT_ram_40094634;
      puVar54 = PTR_entry_ram_40094618;
      fVar43 = param_1[0x6e];
      fVar4 = param_1[0x6f];
      fVar18 = param_1[0x70];
      fVar36 = param_1[0x71];
      fVar38 = fVar38 - fVar41;
      fVar25 = fVar25 - fVar42;
      fVar28 = fVar28 - fVar40;
      fVar16 = param_1[3];
      pfVar27 = (float *)param_1[1];
      pfVar7 = param_2 + param_6;
      pfVar6 = param_5;
      pfVar29 = param_3;
      do {
        fVar57 = (float)*(undefined8 *)param_2;
        if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
          fVar57 = (fVar57 + *pfVar29) * fVar15;
        }
        fVar32 = ABS(fVar57);
        fVar13 = param_1[0x5e];
        if (fVar13 < fVar32) {
          fVar13 = fVar13 * param_1[0x5c] + (fVar46 - param_1[0x5c]) * fVar32;
        }
        else {
          fVar13 = fVar13 * param_1[0x5d] + (fVar46 - param_1[0x5d]) * fVar32;
        }
        param_1[0x5e] = fVar13;
        fVar32 = fVar46;
        if ((0.0 <= fVar13) && (fVar32 = in_register_00000100, fVar13 <= fVar46)) {
          fVar32 = fVar46 / (fVar13 * in_register_00000100 + fVar46);
          if (0.0 <= fVar32) {
            if (fVar46 < fVar32) {
              fVar32 = fVar46;
            }
          }
          else {
            fVar32 = 0.0;
          }
        }
        if (param_1[0x72] <= fVar32) {
          fVar13 = param_1[0x74];
        }
        else {
          fVar13 = param_1[0x73];
        }
        fVar35 = fVar43 * in_register_00000100 + fVar41;
        fVar13 = param_1[0x72] * fVar13 + (fVar46 - fVar13) * fVar32;
        param_1[0x72] = fVar13;
        if (fVar35 < fVar46) {
          fVar35 = fVar46;
        }
        if (in_register_00000100 < fVar35) {
          fVar35 = in_register_00000100;
        }
        fVar35 = (float)(uint)fVar16 - fVar35;
        if (fVar35 < 0.0) {
          fVar35 = fVar35 + in_register_00000100;
        }
        uVar30 = (uint)(-1 < (int)fVar35) * (int)fVar35;
        pfVar26 = pfVar27 + uVar30 + 1;
        if ((uint)fVar31 <= uVar30 + 1) {
          pfVar26 = pfVar27;
        }
        fVar9 = pfVar27[uVar30] * (fVar46 - (fVar35 - (float)uVar30)) +
                (fVar35 - (float)uVar30) * *pfVar26;
        fVar32 = param_1[0x51];
        fVar37 = param_1[0x4b] * fVar9 + param_1[0x50];
        fVar35 = param_1[0x58];
        fVar52 = fVar37 * fVar52 + param_1[0x57];
        puVar55 = (undefined *)(fVar52 * fVar42 + fVar57);
        param_1[0x51] = param_1[0x4d] * fVar9 - fVar37 * param_1[0x4f];
        param_1[0x50] = fVar32 + (param_1[0x4c] * fVar9 - fVar37 * param_1[0x4e]);
        param_1[0x58] = fVar37 * fVar51 - fVar52 * fVar48;
        param_1[0x57] = fVar35 + (fVar37 * fVar5 - fVar52 * fVar47);
        puVar53 = puVar65;
        if (((float)puVar65 <= (float)puVar55) &&
           (puVar53 = puVar55, (float)puVar54 < (float)puVar55)) {
          puVar53 = puVar54;
        }
        pfVar27[(int)fVar16] = (float)puVar53;
        fVar13 = fVar13 * fVar52;
        fVar16 = (float)((int)fVar16 + 1 & -(uint)((uint)((int)fVar16 + 1) < (uint)fVar31));
        if (fVar40 < 0.0) {
          fVar13 = fVar13 * 0.0;
          fVar48 = fVar46;
        }
        else {
          fVar48 = 0.0;
          if (fVar40 <= fVar46) {
            fVar13 = fVar13 * fVar40;
            if (fVar40 <= fVar24) {
LAB_ram_40063ef0:
              fVar48 = fVar46;
            }
            else {
              fVar48 = -((fVar40 - fVar24) * in_register_00000100) + fVar46;
              if (0.0 <= fVar48) {
                if (fVar46 < fVar48) goto LAB_ram_40063ef0;
              }
              else {
                fVar48 = 0.0;
              }
            }
          }
        }
        fVar47 = (float)*(undefined8 *)param_2;
        if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
          fVar48 = fVar50 * (fVar47 * fVar48 + fVar13);
          uVar62 = (ulonglong)(uint)fVar48;
          if (param_5 == (float *)0x0) goto LAB_ram_40063ed4;
          *(ulonglong *)param_4 = uVar62;
          *pfVar6 = fVar48;
        }
        else {
          fVar51 = fVar50 * (fVar48 * (fVar47 + *pfVar29) * fVar15 + fVar13);
          uVar62 = (ulonglong)(uint)fVar51;
          if (param_5 == (float *)0x0) {
LAB_ram_40063ed4:
            *(ulonglong *)param_4 = uVar62;
          }
          else {
            fVar47 = fVar47 - *pfVar29;
            fVar48 = fVar48 * fVar50 * fVar15;
            *(ulonglong *)param_4 = (ulonglong)(uint)(fVar48 * fVar47 + fVar51);
            *pfVar6 = -(fVar48 * fVar47) + fVar51;
          }
        }
        fVar48 = fVar18 * fVar4;
        param_2 = param_2 + 1;
        fVar41 = fVar41 + fVar38 * fVar44;
        fVar42 = fVar42 + fVar25 * fVar44;
        fVar4 = fVar36 * fVar4 - fVar18 * fVar43;
        fVar43 = fVar36 * fVar43 + fVar48;
        fVar40 = fVar40 + fVar28 * fVar44;
        fVar50 = fVar50 + in_register_00000100;
        param_4 = param_4 + 1;
        pfVar6 = pfVar6 + 1;
        pfVar29 = pfVar29 + 1;
        if (pfVar7 == param_2) {
          param_1[3] = fVar16;
          param_1[0x68] = fVar41;
          param_1[0x69] = fVar42;
          param_1[0x6a] = fVar40;
          param_1[0x6b] = fVar50;
          param_1[0x6e] = fVar43;
          param_1[0x6f] = fVar4;
          return;
        }
        fVar52 = param_1[0x52];
        fVar5 = param_1[0x53];
        fVar47 = param_1[0x55];
        fVar51 = param_1[0x54];
        fVar48 = param_1[0x56];
      } while( true );
    }
    if (param_7 == (float *)0x0) {
      uVar62 = (ulonglong)DAT_ram_4009a178;
      uVar56 = (ulonglong)DAT_ram_4009a17c;
      uVar63 = (ulonglong)DAT_ram_4009a180;
    }
    else {
      fVar48 = *param_7;
      uVar62 = (ulonglong)(uint)fVar48;
      fVar47 = param_7[1];
      fVar28 = param_7[2];
      if (0.0 <= fVar48) {
        if (DAT_ram_40094604 < fVar48) {
          uVar62 = (ulonglong)(uint)DAT_ram_40094604;
        }
      }
      else {
        uVar62 = 0;
      }
      if (0.0 <= fVar47) {
        uVar56 = (ulonglong)(uint)fVar47;
        if (DAT_ram_40094604 < fVar47) {
          uVar56 = (ulonglong)(uint)DAT_ram_40094604;
        }
      }
      else {
        uVar56 = 0;
      }
      if (0.0 <= fVar28) {
        uVar63 = (ulonglong)(uint)fVar28;
        if (DAT_ram_40094604 < fVar28) {
          uVar63 = (ulonglong)(uint)DAT_ram_40094604;
        }
      }
      else {
        uVar63 = 0;
      }
    }
    uVar45 = (ulonglong)(uint)DAT_ram_40094604;
    fVar48 = (float)*(undefined8 *)param_1;
    if ((float)*(undefined8 *)param_1 <= DAT_ram_40094e80) {
      fVar48 = DAT_ram_40094664;
    }
    fVar47 = param_1[2];
    fVar28 = (float)uVar62;
    if (fVar28 == (float)*(undefined8 *)(param_1 + 0xf)) {
      fVar28 = param_1[0x41];
    }
    else {
      uVar66 = 0;
      if ((0.0 <= fVar28) && (uVar66 = uVar45, fVar28 <= DAT_ram_40094604)) {
        uVar66 = uVar62;
      }
      fVar48 = ((float)uVar66 * DAT_ram_40096020 + DAT_ram_40094ee0) * (float)DAT_ram_40099fa4 *
               fVar48;
      fVar28 = DAT_ram_40094604;
      if (fVar48 < DAT_ram_40094604) {
        fVar48 = DAT_ram_40094604;
        if (1 < (uint)fVar47) goto LAB_ram_400647b4;
      }
      else {
        if (1 < (uint)fVar47) {
LAB_ram_400647b4:
          fVar28 = (float)((int)fVar47 - 2);
        }
        if (fVar48 <= fVar28) {
          fVar28 = fVar48;
        }
      }
      param_1[0x41] = fVar28;
      *(ulonglong *)(param_1 + 0xf) = uVar62;
    }
    fVar48 = (float)uVar56;
    if (fVar48 == (float)*(undefined8 *)(param_1 + 0x10)) {
      fVar48 = param_1[0x43];
      goto LAB_ram_400636ce;
    }
    if (fVar48 < 0.0) {
      fVar51 = 0.0;
LAB_ram_400651a6:
      fVar48 = fVar51 * DAT_ram_40094608 + 0.0;
    }
    else {
      fVar51 = fVar46;
      if (fVar46 < fVar48) goto LAB_ram_400651a6;
      fVar48 = fVar48 * DAT_ram_40094608 + 0.0;
      if (0.0 <= fVar48) {
        if (DAT_ram_40094608 < fVar48) {
          fVar48 = DAT_ram_40094608;
        }
      }
      else {
        fVar48 = 0.0;
      }
    }
    param_1[0x43] = fVar48;
    *(ulonglong *)(param_1 + 0x10) = uVar56;
LAB_ram_400636ce:
    if ((float)*(undefined8 *)(param_1 + 0x11) == (float)uVar63) {
      uVar63 = (ulonglong)(uint)param_1[0x44];
    }
    else {
      param_1[0x44] = (float)uVar63;
      *(ulonglong *)(param_1 + 0x11) = uVar63;
    }
    fVar51 = (float)uVar63;
    if ((float)*(undefined8 *)(param_1 + 0x12) == fVar46) {
      fVar31 = param_1[0x45];
    }
    else {
      param_1[0x45] = fVar46;
      *(ulonglong *)(param_1 + 0x12) = uVar45;
      fVar31 = fVar46;
    }
    if (0.0 <= fVar48) {
      if (DAT_ram_40094608 < fVar48) {
        fVar48 = DAT_ram_40094608;
      }
    }
    else {
      fVar48 = 0.0;
    }
    if (0.0 <= fVar51) {
      if (fVar46 < fVar51) {
        fVar51 = fVar46;
      }
    }
    else {
      fVar51 = 0.0;
    }
    if (0.0 <= fVar31) {
      if (fVar46 < fVar31) {
        fVar31 = fVar46;
      }
    }
    else {
      fVar31 = 0.0;
    }
    fVar38 = param_1[0x42];
    fVar25 = fVar46 / (float)param_6;
    if (*(char *)(param_1 + 0x4a) == '\0') {
      param_1[0x46] = fVar28;
      param_1[0x47] = fVar48;
      param_1[0x48] = fVar51;
      param_1[0x49] = fVar31;
      *(undefined1 *)(param_1 + 0x4a) = 1;
      fVar44 = fVar31;
      fVar50 = fVar51;
      fVar5 = fVar48;
      fVar52 = fVar28;
    }
    else {
      fVar44 = param_1[0x49];
      fVar50 = param_1[0x48];
      fVar5 = param_1[0x47];
      fVar52 = param_1[0x46];
    }
    fVar36 = DAT_ram_4009558c;
    fVar18 = DAT_ram_40094634;
    fVar51 = fVar51 - fVar50;
    fVar28 = fVar28 - fVar52;
    fVar48 = fVar48 - fVar5;
    fVar31 = fVar31 - fVar44;
    fVar4 = (float)(uint)fVar47 - (float)PTR_entry_ram_40094618;
    fVar41 = param_1[0x3d];
    fVar42 = param_1[0x3e];
    fVar40 = param_1[0x3f];
    fVar43 = param_1[0x40];
    fVar15 = param_1[3];
    pfVar27 = (float *)param_1[1];
    pfVar7 = param_2 + param_6;
    pfVar6 = param_5;
    pfVar29 = param_3;
    do {
      fVar24 = *param_2;
      if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
        fVar24 = (fVar24 + *pfVar29) * fVar18;
      }
      fVar16 = fVar38 * fVar41 + fVar52;
      if (fVar16 < fVar46) {
        fVar16 = fVar46;
      }
      if (fVar4 < fVar16) {
        fVar16 = fVar4;
      }
      fVar16 = (float)(uint)fVar15 - fVar16;
      if (fVar16 < 0.0) {
        fVar16 = fVar16 + (float)(uint)fVar47;
      }
      uVar30 = (uint)(-1 < (int)fVar16) * (int)fVar16;
      pfVar26 = pfVar27 + uVar30 + 1;
      if ((uint)fVar47 <= uVar30 + 1) {
        pfVar26 = pfVar27;
      }
      fVar16 = (float)*(undefined8 *)(pfVar27 + uVar30) * (fVar46 - (fVar16 - (float)uVar30)) +
               (fVar16 - (float)uVar30) * *pfVar26;
      fVar57 = param_1[0x26] * fVar16 + param_1[0x2b];
      fVar13 = fVar57 * param_1[0x2d] + param_1[0x32];
      param_1[0x2b] = param_1[0x2c] + (param_1[0x27] * fVar16 - fVar57 * param_1[0x29]);
      param_1[0x2c] = param_1[0x28] * fVar16 - fVar57 * param_1[0x2a];
      param_1[0x32] = param_1[0x33] + (fVar57 * param_1[0x2e] - fVar13 * param_1[0x30]);
      param_1[0x33] = fVar57 * param_1[0x2f] - fVar13 * param_1[0x31];
      pfVar27[(int)fVar15] = fVar13 * fVar5 + fVar24;
      fVar15 = (float)((int)fVar15 + 1 & -(uint)((uint)((int)fVar15 + 1) < (uint)fVar47));
      if (fVar50 < 0.0) {
        fVar13 = fVar13 * 0.0;
        fVar24 = fVar46;
      }
      else {
        fVar24 = 0.0;
        if (fVar50 <= fVar46) {
          fVar13 = fVar13 * fVar50;
          if (fVar50 <= fVar36) {
LAB_ram_400639b8:
            fVar24 = fVar46;
          }
          else {
            fVar24 = -((fVar50 - fVar36) * in_register_00000100) + fVar46;
            if (0.0 <= fVar24) {
              if (fVar46 < fVar24) goto LAB_ram_400639b8;
            }
            else {
              fVar24 = 0.0;
            }
          }
        }
      }
      fVar16 = (float)*(undefined8 *)param_2;
      if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
        fVar24 = fVar44 * (fVar16 * fVar24 + fVar13);
        uVar62 = (ulonglong)(uint)fVar24;
        if (param_5 == (float *)0x0) goto LAB_ram_400639a4;
        *(ulonglong *)param_4 = uVar62;
        *pfVar6 = fVar24;
      }
      else {
        fVar57 = fVar44 * (fVar24 * (fVar16 + *pfVar29) * fVar18 + fVar13);
        uVar62 = (ulonglong)(uint)fVar57;
        if (param_5 == (float *)0x0) {
LAB_ram_400639a4:
          *(ulonglong *)param_4 = uVar62;
        }
        else {
          fVar16 = fVar16 - *pfVar29;
          fVar24 = fVar24 * fVar44 * fVar18;
          *(ulonglong *)param_4 = (ulonglong)(uint)(fVar24 * fVar16 + fVar57);
          *pfVar6 = -(fVar24 * fVar16) + fVar57;
        }
      }
      fVar24 = fVar40 * fVar41;
      param_2 = param_2 + 1;
      fVar52 = fVar52 + fVar28 * fVar25;
      fVar5 = fVar5 + fVar48 * fVar25;
      fVar41 = fVar43 * fVar41 + fVar40 * fVar42;
      fVar42 = fVar43 * fVar42 - fVar24;
      fVar50 = fVar50 + fVar51 * fVar25;
      fVar44 = fVar44 + fVar31 * fVar25;
      param_4 = param_4 + 1;
      pfVar6 = pfVar6 + 1;
      pfVar29 = pfVar29 + 1;
      if (pfVar7 == param_2) {
        param_1[3] = fVar15;
        param_1[0x3d] = fVar41;
        param_1[0x3e] = fVar42;
        param_1[0x46] = fVar52;
        param_1[0x47] = fVar5;
        param_1[0x48] = fVar50;
        param_1[0x49] = fVar44;
        return;
      }
    } while( true );
  }
  if (uVar30 != 0) {
    param_8 = 0;
LAB_ram_40062f4c:
    memset(param_1[1],0,(int)param_1[2] << 2);
    uVar62 = (ulonglong)(uint)DAT_ram_40094604;
    param_1[3] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    *(ulonglong *)(param_1 + 0xb) = uVar62;
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined1 *)((int)param_1 + 0x3a) = 1;
    if ((param_1[4] != 0.0) && (param_1[5] != 0.0)) {
      memset(param_1[4],0,(int)param_1[5] << 2);
    }
    fVar46 = DAT_ram_40094604;
    param_1[0x3c] = 5.6904566e-28;
    param_1[0x61] = -1.7247773e-34;
    param_1[6] = 0.0;
    param_1[0x15] = 0.0;
    param_1[0x16] = 0.0;
    param_1[0x17] = 0.0;
    param_1[0x18] = 0.0;
    *(undefined1 *)(param_1 + 0x21) = 0;
    param_1[0x2b] = 0.0;
    param_1[0x2c] = 0.0;
    param_1[0x32] = 0.0;
    param_1[0x33] = 0.0;
    param_1[0x39] = 0.0;
    param_1[0x3a] = 0.0;
    param_1[0x3b] = 0.0;
    param_1[0x3d] = 0.0;
    param_1[0x3e] = fVar46;
    *(undefined1 *)(param_1 + 0x4a) = 0;
    param_1[0x45] = fVar46;
    param_1[0x50] = 0.0;
    param_1[0x51] = 0.0;
    param_1[0x57] = 0.0;
    param_1[0x58] = 0.0;
    param_1[0x5e] = 0.0;
    param_1[0x5f] = 0.0;
    param_1[0x60] = 0.0;
    param_1[0x62] = fVar46;
    param_1[99] = 0.0;
    param_1[100] = 0.0;
    param_1[0x65] = fVar46;
    param_1[0x66] = 0.0;
    param_1[0x67] = 0.0;
    fVar48 = DAT_ram_40094e80;
    param_1[0x68] = fVar46;
    param_1[0x69] = 0.0;
    fVar28 = (float)*(undefined8 *)param_1;
    param_1[0x6a] = 0.0;
    param_1[0x6b] = fVar46;
    param_1[0x6c] = 0.0;
    param_1[0x6d] = 0.0;
    param_1[0x6e] = 0.0;
    param_1[0x6f] = fVar46;
    fVar47 = DAT_ram_4009a174;
    if (fVar48 <= fVar28) {
      fVar46 = fVar28 * DAT_ram_4009a10c;
      if (DAT_ram_400952c4 <= fVar46) {
        fVar46 = DAT_ram_400952c4;
      }
      fVar46 = (fVar46 / fVar28) * DAT_ram_40099f94;
      fVar47 = (float)FUN_ram_400009d2(fVar46);
      fVar46 = (float)FUN_ram_40000712(fVar46);
    }
    fVar48 = DAT_ram_40094604;
    param_1[0x70] = fVar47;
    param_1[0x71] = fVar46;
    param_1[0x72] = fVar48;
    param_1[0x75] = 0.0;
    param_1[0x76] = 0.0;
    param_1[0x87] = 0.0;
    param_1[0x88] = 0.0;
    *(undefined1 *)(param_1 + 0x89) = 0;
    if (*(short *)((int)param_1 + 0x20e) == 0) {
      *(undefined2 *)((int)param_1 + 0x20e) = 0x44;
    }
    if (*(short *)(param_1 + 0x83) == 0) {
      *(undefined2 *)(param_1 + 0x83) = 0x40;
    }
    if ((param_1[0x85] != 0.0) && (*(ushort *)(param_1 + 0x86) != 0)) {
      memset(param_1[0x85],0,(uint)*(ushort *)(param_1 + 0x86) << 2);
    }
    uVar62 = (ulonglong)(uint)DAT_ram_40094600;
    *(undefined2 *)(param_1 + 0x84) = 0;
    param_1[0x7f] = 0.0;
    param_1[0x7e] = 0.0;
    *(ulonglong *)(param_1 + 0xf) = uVar62;
    *(ulonglong *)(param_1 + 0x10) = uVar62;
    *(ulonglong *)(param_1 + 0x11) = uVar62;
    *(ulonglong *)(param_1 + 0x12) = uVar62;
    *(ulonglong *)(param_1 + 0x13) = uVar62;
    *(ulonglong *)(param_1 + 0x14) = uVar62;
    *(undefined2 *)((int)param_1 + 0x22e) = 0;
    param_1[0x8c] = 0.0;
    *(undefined2 *)(param_1 + 0x8d) = 0;
    *(undefined1 *)((int)param_1 + 0x236) = 0;
    *(char *)(param_1 + 8) = (char)param_8;
    uVar30 = param_8;
    goto LAB_ram_40061e6a;
  }
LAB_ram_400624b4:
  fVar47 = DAT_ram_40094ee8;
  fVar48 = DAT_ram_40094634;
  fVar46 = DAT_ram_40094604;
  fVar28 = param_1[4];
  if ((fVar28 == 0.0) || (param_1[5] == 0.0)) {
    if ((param_9 == '\0') || (param_3 == (float *)0x0)) goto LAB_ram_40062524;
    if (param_5 == (float *)0x0) {
      pfVar6 = param_2 + param_6;
      do {
        uVar61 = *(undefined8 *)param_2;
        uVar64 = *(undefined8 *)param_3;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        *param_4 = ((float)uVar61 + (float)uVar64) * fVar48;
        param_4 = param_4 + 1;
      } while (pfVar6 != param_2);
      return;
    }
    goto LAB_ram_400624cc;
  }
  if (param_7 == (float *)0x0) {
    uVar62 = (ulonglong)DAT_ram_4009a1dc;
    uVar56 = (ulonglong)DAT_ram_4009a1e0;
    fVar31 = DAT_ram_4009601c;
    fVar25 = DAT_ram_4009a1b4;
LAB_ram_4006361c:
    uVar63 = (ulonglong)(uint)DAT_ram_40094604;
    if (fVar25 <= DAT_ram_40094604) {
      uVar63 = (ulonglong)(uint)fVar25;
    }
  }
  else {
    fVar48 = *param_7;
    uVar62 = (ulonglong)(uint)fVar48;
    fVar51 = param_7[1];
    fVar31 = param_7[2];
    fVar25 = param_7[3];
    if (0.0 <= fVar48) {
      if (DAT_ram_40094604 < fVar48) {
        uVar62 = (ulonglong)(uint)DAT_ram_40094604;
      }
    }
    else {
      uVar62 = 0;
    }
    if (0.0 <= fVar51) {
      uVar56 = (ulonglong)(uint)fVar51;
      if (DAT_ram_40094604 < fVar51) {
        uVar56 = (ulonglong)(uint)DAT_ram_40094604;
      }
    }
    else {
      uVar56 = 0;
    }
    if (0.0 <= fVar31) {
      if (DAT_ram_40094604 < fVar31) {
        fVar31 = DAT_ram_40094604;
      }
    }
    else {
      fVar31 = 0.0;
    }
    if (0.0 <= fVar25) goto LAB_ram_4006361c;
    uVar63 = 0;
  }
  uVar45 = (ulonglong)(uint)DAT_ram_40094604;
  fVar48 = (float)*(undefined8 *)param_1;
  if ((float)*(undefined8 *)param_1 <= DAT_ram_40094e80) {
    fVar48 = DAT_ram_40094664;
  }
  uVar66 = (ulonglong)(uint)DAT_ram_40094ec4;
  fVar51 = (float)uVar62;
  param_1[0x22] = DAT_ram_40094604;
  param_1[0x23] = fVar47;
  *(ulonglong *)(param_1 + 7) = uVar66;
  puVar65 = PTR_entry_ram_40094618;
  if (param_1[0xf] == fVar51) goto LAB_ram_40062646;
  puVar54 = DAT_ram_40099fa4;
  if ((0.0 <= fVar51) && (puVar54 = PTR_entry_ram_40094618, fVar51 <= fVar46)) {
    puVar54 = (undefined *)((fVar51 * DAT_ram_40096024 + fVar46) * (float)DAT_ram_40099fa4);
  }
  uVar66 = (ulonglong)(uint)(fVar48 * (float)puVar54);
  fVar47 = param_1[2];
  if (fVar48 * (float)puVar54 < fVar46) {
    uVar66 = uVar45;
    if (1 < (uint)fVar47) goto LAB_ram_40063f5a;
  }
  else {
    fVar51 = fVar46;
    if (1 < (uint)fVar47) {
LAB_ram_40063f5a:
      fVar51 = (float)((int)fVar47 - 2);
    }
    if (fVar51 < (float)uVar66) {
      uVar66 = (ulonglong)(uint)fVar51;
    }
  }
  *(ulonglong *)(param_1 + 0x19) = uVar66;
  *(ulonglong *)(param_1 + 0xf) = uVar62;
LAB_ram_40062646:
  fVar47 = (float)uVar56;
  if ((float)*(undefined8 *)(param_1 + 0x10) != fVar47) {
    uVar62 = 0;
    if (0.0 <= fVar47) {
      if (fVar47 <= fVar46) {
        fVar47 = fVar47 * DAT_ram_40094608 + 0.0;
        uVar62 = (ulonglong)(uint)fVar47;
        if (fVar47 < 0.0) {
          uVar62 = 0;
        }
        else if (DAT_ram_40094608 < fVar47) {
          uVar62 = (ulonglong)(uint)DAT_ram_40094608;
        }
      }
      else {
        uVar62 = (ulonglong)(uint)DAT_ram_40094608;
      }
    }
    *(ulonglong *)(param_1 + 0x1a) = uVar62;
    *(ulonglong *)(param_1 + 0x10) = uVar56;
  }
  if ((float)*(undefined8 *)(param_1 + 0x11) == fVar31) {
    fVar48 = param_1[0x24];
    fVar47 = DAT_ram_40094ee8;
    fVar51 = fVar46;
  }
  else {
    fVar47 = fVar48 * DAT_ram_4009a10c;
    fVar28 = (-(fVar31 * DAT_ram_40094ef4) + fVar46) * DAT_ram_400952ac;
    fVar38 = DAT_ram_40094664;
    fVar51 = DAT_ram_4009600c;
    fVar25 = DAT_ram_4009a1e4;
    fVar52 = fVar48;
    if (DAT_ram_4009600c <= fVar28) {
      fVar51 = fVar28;
      if (fVar47 < fVar28) {
        fVar51 = fVar47;
      }
      fVar38 = fVar48;
      fVar25 = DAT_ram_40099fac;
      fVar52 = fVar51;
      if (fVar48 < fVar46) {
        fVar47 = DAT_ram_4009a0dc._4_4_;
        fVar38 = DAT_ram_40094664;
        fVar48 = DAT_ram_40094664;
      }
    }
    if (fVar46 <= fVar52) {
      fVar38 = fVar48;
      if (fVar47 < fVar51) {
        fVar25 = fVar47 * DAT_ram_40099fac;
      }
      else {
        fVar25 = fVar51 * DAT_ram_40099fac;
      }
    }
    fVar48 = (float)FUN_ram_40000bd8(fVar25 / fVar38);
    fVar28 = param_1[4];
    param_1[0x24] = fVar48;
    param_1[0x11] = fVar31;
    fVar47 = param_1[0x23];
    fVar51 = param_1[0x22];
  }
  if ((float)*(undefined8 *)(param_1 + 0x12) == (float)uVar63) {
    uVar63 = *(ulonglong *)(param_1 + 0x1b);
  }
  else {
    *(ulonglong *)(param_1 + 0x1b) = uVar63;
    *(ulonglong *)(param_1 + 0x12) = uVar63;
  }
  if ((float)*(undefined8 *)(param_1 + 0x13) == fVar46) {
    fVar31 = (float)*(undefined8 *)(param_1 + 0x1c);
  }
  else {
    *(ulonglong *)(param_1 + 0x1c) = uVar45;
    *(ulonglong *)(param_1 + 0x13) = uVar45;
    fVar31 = fVar46;
  }
  if (0.0 <= fVar48) {
    if (fVar48 <= fVar46) {
      fVar25 = fVar46 - fVar48;
    }
    else {
      fVar25 = 0.0;
      fVar48 = fVar46;
    }
  }
  else {
    fVar25 = fVar46;
    fVar48 = 0.0;
  }
  fVar38 = param_1[0x25];
  if (0.0 <= fVar38) {
    if (fVar46 < fVar38) {
      fVar38 = fVar46;
    }
  }
  else {
    fVar38 = 0.0;
  }
  uVar62 = *(ulonglong *)(param_1 + 0x1a);
  if (0.0 <= (float)uVar62) {
    if (DAT_ram_40094608 < (float)uVar62) {
      uVar62 = (ulonglong)(uint)DAT_ram_40094608;
    }
  }
  else {
    uVar62 = 0;
  }
  if (0.0 <= (float)uVar63) {
    if (fVar46 < (float)uVar63) {
      uVar63 = uVar45;
    }
  }
  else {
    uVar63 = 0;
  }
  if (0.0 <= fVar31) {
    if (fVar46 < fVar31) {
      fVar31 = fVar46;
    }
  }
  else {
    fVar31 = 0.0;
  }
  if (0.0 <= fVar47) {
    if (fVar46 < fVar47) {
      fVar47 = fVar46;
    }
  }
  else {
    fVar47 = 0.0;
  }
  if (fVar51 <= 0.0) {
    fVar51 = fVar46;
  }
  fVar52 = fVar46 / (float)param_6;
  fVar5 = (float)*(undefined8 *)(param_1 + 0x19);
  if (*(char *)(param_1 + 0x21) == '\0') {
    *(undefined8 *)(param_1 + 0x1d) = *(undefined8 *)(param_1 + 0x19);
    *(ulonglong *)(param_1 + 0x1e) = uVar62;
    *(ulonglong *)(param_1 + 0x1f) = uVar63;
    param_1[0x20] = fVar31;
    *(undefined1 *)(param_1 + 0x21) = 1;
    fVar41 = (float)uVar63;
    fVar50 = fVar5;
    fVar42 = fVar31;
    fVar44 = (float)uVar62;
  }
  else {
    fVar50 = param_1[0x1d];
    fVar44 = param_1[0x1e];
    fVar41 = param_1[0x1f];
    fVar42 = param_1[0x20];
  }
  fVar32 = DAT_ram_4009a20c;
  fVar13 = DAT_ram_4009a204._4_4_;
  fVar57 = DAT_ram_40099fa8;
  fVar16 = DAT_ram_4009558c;
  fVar24 = DAT_ram_40094e88;
  fVar15 = DAT_ram_40094634;
  fVar36 = DAT_ram_40094614;
  fVar37 = param_1[2];
  fVar5 = fVar5 - fVar50;
  fVar43 = (float)uVar63 - fVar41;
  fVar31 = fVar31 - fVar42;
  fVar4 = (float)uVar62 - fVar44;
  fVar18 = (float)(uint)fVar37 - (float)puVar65;
  fVar40 = param_1[0x15];
  uVar62 = *(ulonglong *)(param_1 + 0x16);
  uVar56 = *(ulonglong *)(param_1 + 0x17);
  pfVar7 = (float *)param_1[1];
  fVar9 = param_1[3];
  pfVar27 = param_2 + param_6;
  pfVar6 = param_5;
  pfVar29 = param_3;
  fVar35 = param_1[0x18];
  do {
    fVar49 = (float)*(undefined8 *)param_2;
    if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
      fVar49 = (fVar49 + *pfVar29) * fVar15;
    }
    fVar58 = fVar46;
    if ((fVar46 <= fVar50) && (fVar58 = fVar18, fVar50 <= fVar18)) {
      fVar58 = fVar50;
    }
    fVar58 = (float)(uint)fVar9 - fVar58;
    if (fVar58 < 0.0) {
      fVar58 = fVar58 + (float)(uint)fVar37;
    }
    uVar30 = (uint)(-1 < (int)fVar58) * (int)fVar58;
    pfVar26 = pfVar7 + uVar30 + 1;
    if ((uint)fVar37 <= uVar30 + 1) {
      pfVar26 = pfVar7;
    }
    pfVar19 = pfVar7 + (int)fVar9;
    fVar9 = (float)((int)fVar9 + 1 & -(uint)((uint)((int)fVar9 + 1) < (uint)fVar37));
    fVar40 = ((float)*(undefined8 *)(pfVar7 + uVar30) * (fVar46 - (fVar58 - (float)uVar30)) +
             (fVar58 - (float)uVar30) * *pfVar26) * fVar25 + fVar48 * fVar40;
    fVar58 = fVar40 * fVar25 + fVar48 * (float)uVar62;
    uVar62 = (ulonglong)(uint)fVar58;
    fVar35 = ((fVar58 + (float)uVar56) - fVar35) * fVar38;
    uVar56 = (ulonglong)(uint)fVar35;
    *(ulonglong *)pfVar19 = (ulonglong)(uint)(fVar35 * fVar44 + fVar49);
    fVar49 = fVar35;
    if ((fVar28 != 0.0) && (param_1[5] != 0.0)) {
      puVar20 = (ulonglong *)((int)fVar28 + (int)param_1[6] * 4);
      fVar14 = (float)((int)param_1[6] + 1);
      fVar49 = -((float)*(undefined8 *)(param_1 + 7) * fVar35) + (float)*puVar20;
      if ((uint)param_1[5] <= (uint)fVar14) {
        fVar14 = 0.0;
      }
      *puVar20 = (ulonglong)(uint)((float)*(undefined8 *)(param_1 + 7) * fVar49 + fVar35);
      param_1[6] = fVar14;
    }
    fVar35 = (fVar47 * fVar49 + fVar35) * fVar51;
    fVar49 = DAT_ram_4009a1e8;
    if ((fVar35 <= fVar36) && (fVar49 = DAT_ram_4009a1ec, fVar57 <= fVar35)) {
      fVar49 = ((fVar35 * fVar35 + fVar13) * fVar35) / (fVar35 * fVar35 * fVar32 + fVar13);
    }
    if (fVar41 < 0.0) {
      fVar49 = fVar49 * 0.0;
      fVar35 = fVar46;
    }
    else {
      fVar35 = 0.0;
      if (fVar41 <= fVar46) {
        fVar49 = fVar49 * fVar41;
        if (fVar41 <= fVar16) {
LAB_ram_40062eda:
          fVar35 = fVar46;
        }
        else {
          fVar35 = -((fVar41 - fVar16) * fVar24) + fVar46;
          if (0.0 <= fVar35) {
            if (fVar46 < fVar35) goto LAB_ram_40062eda;
          }
          else {
            fVar35 = 0.0;
          }
        }
      }
    }
    fVar14 = (float)*(undefined8 *)param_2;
    if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
      fVar35 = fVar42 * (fVar14 * fVar35 + fVar49);
      *(ulonglong *)param_4 = (ulonglong)(uint)fVar35;
      if (param_5 != (float *)0x0) goto LAB_ram_40062982;
    }
    else {
      fVar49 = fVar42 * (fVar35 * (fVar14 + *pfVar29) * fVar15 + fVar49);
      if (param_5 == (float *)0x0) {
        *(ulonglong *)param_4 = (ulonglong)(uint)fVar49;
      }
      else {
        fVar14 = fVar14 - *pfVar29;
        fVar59 = fVar35 * fVar42 * fVar15;
        fVar35 = -(fVar59 * fVar14) + fVar49;
        *param_4 = fVar59 * fVar14 + fVar49;
LAB_ram_40062982:
        *pfVar6 = fVar35;
      }
    }
    param_2 = param_2 + 1;
    fVar50 = fVar50 + fVar5 * fVar52;
    fVar44 = fVar44 + fVar4 * fVar52;
    fVar41 = fVar41 + fVar43 * fVar52;
    fVar42 = fVar42 + fVar31 * fVar52;
    param_4 = param_4 + 1;
    pfVar6 = pfVar6 + 1;
    pfVar29 = pfVar29 + 1;
    fVar35 = fVar58;
    if (pfVar27 == param_2) {
      param_1[3] = fVar9;
      param_1[0x15] = fVar40;
      *(ulonglong *)(param_1 + 0x16) = uVar62;
      *(ulonglong *)(param_1 + 0x17) = uVar56;
      *(ulonglong *)(param_1 + 0x18) = uVar62;
      param_1[0x1d] = fVar50;
      param_1[0x1e] = fVar44;
      param_1[0x1f] = fVar41;
      param_1[0x20] = fVar42;
      return;
    }
  } while( true );
}


