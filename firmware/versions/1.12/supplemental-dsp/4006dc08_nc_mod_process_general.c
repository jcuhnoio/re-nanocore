/* NanoCore 1.12, supplemental entry 0x4006dc08.
 * REA evidence: ev_375fa617cf7ec4ea228a4d42d173940dd93767a02a6336256630d793c19a9146
 * Focused seeded analysis; may overlap baseline function bodies.
 * C-like analysis only, not original or buildable code.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nc_mod_process_general
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
               uint param_6,float *param_7,uint param_8,char param_9,int param_10)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float in_register_00000100;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  float fVar15;
  int iVar16;
  char cVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  undefined *puVar22;
  float fVar23;
  undefined *puVar24;
  float fVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  ulonglong uVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  ulonglong uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  ulonglong uVar51;
  float fVar52;
  float fVar53;
  undefined *puVar54;
  float fVar55;
  ulonglong uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fStack_d4;
  float fStack_d0;
  
  if (param_10 != 0) {
    *(bool *)param_10 = param_9 != '\0';
  }
  if ((param_1 == (float *)0x0) || (param_2 == (float *)0x0)) {
    if (param_4 != (float *)0x0) {
      if (param_6 == 0) {
        return;
      }
      memset(param_4,0,param_6 << 2);
      if (param_5 == (float *)0x0) {
        return;
      }
      goto LAB_ram_4006df94;
    }
  }
  else if (param_4 != (float *)0x0) {
    if (param_6 == 0) {
      return;
    }
    if (param_8 < 5) {
      if (*(byte *)(param_1 + 0x811) != param_8) goto LAB_ram_4006dfea;
LAB_ram_4006dc80:
      fVar34 = DAT_ram_4009f090;
      fVar38 = DAT_ram_4009f078;
      fVar37 = DAT_ram_4009a370;
      fVar58 = DAT_ram_40096760;
      fVar53 = DAT_ram_4009672c;
      if (param_8 != 1) {
        if (param_8 != 2) {
          if (param_8 == 0xc) goto LAB_ram_4006e482;
          if (param_8 == 3) {
            if (param_7 == (float *)0x0) {
              fVar21 = 0.0;
              fVar58 = DAT_ram_4009f728;
              fVar35 = DAT_ram_4009f080;
              fVar59 = fVar21;
LAB_ram_4007030e:
              fVar36 = DAT_ram_4009672c;
            }
            else {
              fVar58 = *param_7;
              if (0.0 <= fVar58) {
                if (DAT_ram_4009672c < fVar58) {
                  fVar58 = DAT_ram_4009672c;
                }
              }
              else {
                fVar58 = 0.0;
              }
              fVar35 = param_7[1];
              if (0.0 <= fVar35) {
                if (DAT_ram_4009672c < fVar35) {
                  fVar35 = DAT_ram_4009672c;
                }
              }
              else {
                fVar35 = 0.0;
              }
              fVar21 = param_7[2];
              if (0.0 <= fVar21) {
                if (DAT_ram_4009672c < fVar21) {
                  fVar21 = DAT_ram_4009672c;
                }
              }
              else {
                fVar21 = 0.0;
              }
              fVar59 = param_7[3];
              if (0.0 <= fVar59) {
                if (DAT_ram_4009672c < fVar59) {
                  fVar59 = DAT_ram_4009672c;
                }
              }
              else {
                fVar59 = 0.0;
              }
              fVar36 = param_7[4];
              if (0.0 <= fVar36) {
                if (DAT_ram_4009672c < fVar36) goto LAB_ram_4007030e;
              }
              else {
                fVar36 = 0.0;
              }
            }
            if (param_1[0x1058] == fVar58) goto LAB_ram_4006effe;
            fVar57 = *param_1;
            if (fVar57 <= DAT_ram_40099f28) {
              fVar57 = DAT_ram_4009f078;
              if (0.0 <= fVar58) goto LAB_ram_400705c4;
              param_1[0x104f] = _DAT_ram_4009f7a0;
            }
            else {
              if (fVar58 < 0.0) {
                fVar38 = 0.0;
              }
              else {
LAB_ram_400705c4:
                fVar38 = DAT_ram_4009672c;
                if (fVar58 <= DAT_ram_4009672c) {
                  fVar37 = fVar58 * DAT_ram_4009b190 + DAT_ram_4009a370;
                  bVar4 = fVar57 < DAT_ram_4009672c;
                  param_1[0x104f] = (fVar37 * DAT_ram_4009f090) / fVar57;
                  if (bVar4) {
                    fVar57 = DAT_ram_4009f078;
                  }
                  fVar38 = fVar57;
                  if (fVar37 < 0.0) {
                    fVar37 = 0.0;
                  }
                  goto LAB_ram_40070614;
                }
              }
              fVar37 = fVar38 * DAT_ram_4009b190 + DAT_ram_4009a370;
              bVar4 = fVar57 < DAT_ram_4009672c;
              param_1[0x104f] = (fVar37 * DAT_ram_4009f090) / fVar57;
              fVar38 = fVar57;
              if (bVar4) {
                fVar38 = DAT_ram_4009f078;
              }
            }
LAB_ram_40070614:
            fVar38 = (fVar37 * fVar34) / fVar38;
            fVar37 = (float)FUN_ram_400009d2(fVar38);
            param_1[0x1052] = fVar37;
            fVar38 = (float)FUN_ram_40000712(fVar38);
            param_1[0x1053] = fVar38;
            param_1[0x1058] = fVar58;
LAB_ram_4006effe:
            if (param_1[0x1059] != fVar35) {
              fVar38 = 0.0;
              if ((0.0 <= fVar35) && (fVar38 = fVar53, fVar35 <= fVar53)) {
                fVar38 = fVar35;
              }
              param_1[0x1054] = fVar38;
              param_1[0x1059] = fVar35;
            }
            if (param_1[0x105a] != fVar21) {
              if (0.0 <= fVar21) {
                bVar14 = 3;
                if (fVar21 <= fVar53) {
                  fVar38 = (float)FUN_ram_4000078c(fVar21 * DAT_ram_40099f30);
                  iVar16 = (int)fVar38;
                  bVar14 = 3;
                  if (iVar16 < 4) {
                    bVar14 = (byte)iVar16 & (char)~(byte)((uint)iVar16 >> 0x18) >> 7;
                  }
                }
              }
              else {
                bVar14 = 0;
              }
              *(byte *)(param_1 + 0x105f) = bVar14;
              param_1[0x105a] = fVar21;
            }
            if (param_1[0x105b] == fVar59) {
              fVar38 = param_1[0x1057];
              cVar17 = *(char *)((int)param_1 + 0x417d);
            }
            else {
              fVar38 = (float)*(undefined8 *)param_1;
              if ((float)*(undefined8 *)param_1 <= DAT_ram_40099f28) {
                fVar38 = DAT_ram_4009f078;
              }
              if ((fVar59 < 0.0) ||
                 ((fVar58 = DAT_ram_40099f70, fVar59 <= fVar53 &&
                  (fVar58 = fVar59 * DAT_ram_40099f70 + 0.0, fVar58 <= 0.0)))) {
                fVar38 = 0.0;
                *(undefined1 *)((int)param_1 + 0x417d) = 0;
                param_1[0x1057] = 0.0;
                cVar17 = '\0';
              }
              else {
                fVar58 = fVar58 * DAT_ram_4009f0b4;
                *(undefined1 *)((int)param_1 + 0x417d) = 1;
                fVar38 = (float)FUN_ram_40000bd8(fVar58 / fVar38);
                cVar17 = *(char *)((int)param_1 + 0x417d);
                param_1[0x1057] = fVar38;
              }
              param_1[0x105b] = fVar59;
            }
            if (param_1[0x105c] == fVar36) {
              fVar58 = param_1[0x1055];
              fVar37 = fVar53 - fVar58;
            }
            else {
              if (fVar36 < 0.0) {
                fVar58 = 0.0;
                fVar37 = fVar53;
              }
              else if (fVar53 < fVar36) {
                fVar58 = fVar53;
                fVar37 = 0.0;
              }
              else {
                fVar58 = fVar36;
                fVar37 = fVar53 - fVar36;
              }
              param_1[0x1055] = fVar58;
              param_1[0x105c] = fVar36;
            }
            fVar35 = DAT_ram_40096760;
            if (param_1[0x105d] == DAT_ram_40096760) {
              fVar35 = param_1[0x1056];
            }
            else {
              param_1[0x1056] = DAT_ram_40096760;
              param_1[0x105d] = fVar35;
            }
            fVar46 = DAT_ram_4009675c;
            fVar59 = param_1[0x1054];
            fVar21 = param_1[0x104e];
            fVar19 = param_1[0x104f];
            fVar36 = param_1[0x1050];
            fVar57 = param_1[0x1051];
            fVar39 = param_1[0x1052];
            fVar15 = param_1[0x1053];
            fVar52 = param_1[0x105e];
            cVar1 = *(char *)(param_1 + 0x105f);
            fVar27 = (float)FUN_ram_40000844(DAT_ram_40096748,-(fVar59 * DAT_ram_4009675c) + fVar53)
            ;
            if ((param_9 == '\0') || (param_5 == (float *)0x0)) {
              pfVar10 = param_4 + param_6;
              fVar18 = DAT_ram_4009f4bc;
              fVar60 = DAT_ram_4009f790;
              do {
                if (cVar1 == '\0') {
                  fVar33 = (fVar36 + fVar53) * fVar46 * fVar59;
                }
                else if (cVar1 == '\x02') {
                  fVar33 = fVar59;
                  if (fVar18 <= fVar21) {
                    fVar33 = fVar59 * 0.0;
                  }
                }
                else if (cVar1 == '\x03') {
                  fVar33 = (fVar21 * fVar60 * in_register_00000100 + in_register_00000100 + fVar53)
                           * fVar46 * fVar59;
                }
                else if (cVar1 == '\x01') {
                  fVar33 = (ABS(fVar21 * fVar60 * in_register_00000100 + in_register_00000100) *
                            in_register_00000100 + in_register_00000100 + fVar53) * fVar46 * fVar59;
                }
                else {
                  fVar33 = (float)FUN_ram_400009d2(fVar21);
                  fVar18 = DAT_ram_4009f4bc;
                  fVar60 = DAT_ram_4009f790;
                  fVar33 = (fVar33 + fVar53) * fVar46 * fVar59;
                }
                fVar33 = ((fVar53 - fVar59) + fVar33) * (fVar53 / fVar27);
                if (cVar17 != '\0') {
                  fVar52 = fVar33 * (fVar53 - fVar38) + fVar52 * fVar38;
                  fVar33 = fVar52;
                }
                fVar21 = fVar21 + fVar19;
                *param_4 = (*param_2 * fVar37 + *param_2 * fVar33 * fVar58) * fVar35;
                if (fVar34 <= fVar21) {
                  fVar21 = fVar21 - fVar34;
                }
                fVar33 = fVar39 * fVar36;
                param_4 = param_4 + 1;
                param_2 = param_2 + 1;
                fVar36 = fVar15 * fVar36 + fVar39 * fVar57;
                fVar57 = fVar15 * fVar57 - fVar33;
              } while (param_4 != pfVar10);
            }
            else {
              if (param_3 == (float *)0x0) {
                param_3 = param_2;
              }
              iVar16 = 0;
              fVar18 = DAT_ram_4009f4bc;
              fVar60 = DAT_ram_4009f790;
              puVar22 = PTR_entry_ram_40096740;
              fVar33 = DAT_ram_40096728;
              do {
                if (cVar1 == '\0') {
                  fVar28 = (fVar36 + fVar53) * fVar46 * fVar59;
                }
                else if (cVar1 == '\x02') {
                  fVar28 = fVar59;
                  if (fVar18 <= fVar21) {
                    fVar28 = fVar59 * 0.0;
                  }
                }
                else if (cVar1 == '\x03') {
                  fVar28 = (fVar21 * fVar60 * (float)puVar22 + fVar33 + fVar53) * fVar46 * fVar59;
                }
                else if (cVar1 == '\x01') {
                  fVar28 = (ABS(fVar21 * fVar60 * (float)puVar22 + fVar33) * (float)puVar22 + fVar33
                           + fVar53) * fVar46 * fVar59;
                }
                else {
                  fVar28 = (float)FUN_ram_400009d2(fVar21);
                  fVar18 = DAT_ram_4009f4bc;
                  fVar60 = DAT_ram_4009f790;
                  puVar22 = PTR_entry_ram_40096740;
                  fVar33 = DAT_ram_40096728;
                  fVar28 = (fVar28 + fVar53) * fVar46 * fVar59;
                }
                fVar28 = ((fVar53 - fVar59) + fVar28) * (fVar53 / fVar27);
                if (cVar17 != '\0') {
                  fVar52 = fVar28 * (fVar53 - fVar38) + fVar52 * fVar38;
                  fVar28 = fVar52;
                }
                fVar31 = (float)*(undefined8 *)((int)param_2 + iVar16);
                fVar49 = (float)*(undefined8 *)((int)param_3 + iVar16);
                fVar21 = fVar21 + fVar19;
                *(ulonglong *)((int)param_4 + iVar16) =
                     (ulonglong)(uint)((fVar31 * fVar37 + fVar31 * fVar28 * fVar58) * fVar35);
                *(ulonglong *)((int)param_5 + iVar16) =
                     (ulonglong)(uint)((fVar49 * fVar37 + fVar49 * fVar28 * fVar58) * fVar35);
                if (fVar34 <= fVar21) {
                  fVar21 = fVar21 - fVar34;
                }
                fVar28 = fVar39 * fVar36;
                iVar16 = iVar16 + 4;
                fVar36 = fVar15 * fVar36 + fVar39 * fVar57;
                fVar57 = fVar15 * fVar57 - fVar28;
              } while (iVar16 != param_6 << 2);
            }
            param_1[0x104e] = fVar21;
            param_1[0x1050] = fVar36;
            param_1[0x1051] = fVar57;
            param_1[0x105e] = fVar52;
            return;
          }
          if (param_8 == 4) {
            if (param_7 == (float *)0x0) {
              fVar59 = 0.0;
              fVar35 = DAT_ram_4009f72c;
              fVar21 = DAT_ram_40099f34;
              fVar57 = DAT_ram_40096760;
            }
            else {
              fVar35 = *param_7;
              if (0.0 <= fVar35) {
                if (DAT_ram_4009672c < fVar35) {
                  fVar35 = DAT_ram_4009672c;
                }
              }
              else {
                fVar35 = 0.0;
              }
              fVar21 = param_7[1];
              if (0.0 <= fVar21) {
                if (DAT_ram_4009672c < fVar21) {
                  fVar21 = DAT_ram_4009672c;
                }
              }
              else {
                fVar21 = 0.0;
              }
              fVar59 = param_7[2];
              if (0.0 <= fVar59) {
                if (DAT_ram_4009672c < fVar59) {
                  fVar59 = DAT_ram_4009672c;
                }
              }
              else {
                fVar59 = 0.0;
              }
              fVar36 = param_7[3];
              if (0.0 <= fVar36) {
                fVar57 = DAT_ram_4009672c;
                if (DAT_ram_4009672c < fVar36) goto LAB_ram_4006f338;
              }
              else {
                fVar36 = 0.0;
              }
              fVar57 = fVar36;
            }
LAB_ram_4006f338:
            if (param_1[0x106f] == fVar35) {
              fVar37 = param_1[0x1066];
              fVar38 = param_1[0x1067];
            }
            else {
              fVar36 = *param_1;
              if (fVar36 <= DAT_ram_40099f28) {
                fVar36 = DAT_ram_4009f078;
                if (0.0 <= fVar35) goto LAB_ram_400707d0;
                param_1[0x1063] = _DAT_ram_4009f7a0;
              }
              else {
                if (fVar35 < 0.0) {
                  fVar38 = 0.0;
                }
                else {
LAB_ram_400707d0:
                  fVar38 = DAT_ram_4009672c;
                  if (fVar35 <= DAT_ram_4009672c) {
                    fVar37 = fVar35 * DAT_ram_4009b190 + DAT_ram_4009a370;
                    bVar4 = fVar36 < DAT_ram_4009672c;
                    param_1[0x1063] = (fVar37 * DAT_ram_4009f090) / fVar36;
                    if (bVar4) {
                      fVar36 = DAT_ram_4009f078;
                    }
                    fVar38 = fVar36;
                    if (fVar37 < 0.0) {
                      fVar37 = 0.0;
                    }
                    goto LAB_ram_40070820;
                  }
                }
                fVar37 = fVar38 * DAT_ram_4009b190 + DAT_ram_4009a370;
                bVar4 = fVar36 < DAT_ram_4009672c;
                param_1[0x1063] = (fVar37 * DAT_ram_4009f090) / fVar36;
                fVar38 = fVar36;
                if (bVar4) {
                  fVar38 = DAT_ram_4009f078;
                }
              }
LAB_ram_40070820:
              fVar38 = (fVar37 * fVar34) / fVar38;
              fVar37 = (float)FUN_ram_400009d2(fVar38);
              param_1[0x1066] = fVar37;
              fVar38 = (float)FUN_ram_40000712(fVar38);
              param_1[0x106f] = fVar35;
              param_1[0x1067] = fVar38;
            }
            puVar22 = PTR_entry_ram_40096740;
            if (param_1[0x1070] == fVar21) {
              fVar35 = param_1[0x106a];
              fVar21 = param_1[0x106b];
            }
            else {
              fVar36 = (float)*(undefined8 *)param_1;
              if (fVar36 <= DAT_ram_40099f28) {
                if (fVar21 < 0.0) goto LAB_ram_40070bda;
                fVar39 = fVar21;
                fVar36 = DAT_ram_4009f078;
                fVar35 = DAT_ram_4009a640;
                if (fVar21 <= fVar53) goto LAB_ram_4007075c;
              }
              else {
                fVar39 = 0.0;
                if ((0.0 <= fVar21) && (fVar39 = fVar53, fVar21 <= fVar53)) {
                  fVar39 = fVar21;
                }
LAB_ram_4007075c:
                fVar36 = ((fVar39 * DAT_ram_40099f50 + 0.0) * fVar36) / DAT_ram_40099f28;
                fVar35 = DAT_ram_4009f734;
                if ((fVar36 <= DAT_ram_4009f734) && (fVar35 = fVar36, fVar36 < 0.0)) {
LAB_ram_40070bda:
                  fVar35 = 0.0;
                }
              }
              param_1[0x106a] = fVar35;
              param_1[0x106b] = in_register_00000100;
              param_1[0x1070] = fVar21;
              fVar21 = in_register_00000100;
            }
            if (param_1[0x1071] == fVar59) {
              uVar20 = (uint)*(byte *)(param_1 + 0x1074);
            }
            else {
              uVar20 = 0;
              if ((0.0 <= fVar59) && (uVar20 = 3, fVar59 <= fVar53)) {
                fVar36 = (float)FUN_ram_4000078c(fVar59 * DAT_ram_40099f30);
                uVar12 = (uint)fVar36;
                uVar20 = uVar12 & (int)~uVar12 >> 0x1f;
                if (3 < (int)uVar12) {
                  uVar20 = 3;
                }
                uVar20 = uVar20 & 0xff;
              }
              *(char *)(param_1 + 0x1074) = (char)uVar20;
              param_1[0x1071] = fVar59;
            }
            if (param_1[0x1072] == fVar57) {
              fVar59 = param_1[0x106d];
              fVar36 = fVar53 - fVar59;
            }
            else {
              if (fVar57 < 0.0) {
                fVar59 = 0.0;
                fVar36 = fVar53;
              }
              else if (fVar53 < fVar57) {
                fVar59 = fVar53;
                fVar36 = 0.0;
              }
              else {
                fVar59 = fVar57;
                fVar36 = fVar53 - fVar57;
              }
              param_1[0x106d] = fVar59;
              param_1[0x1072] = fVar57;
            }
            if (param_1[0x1073] == fVar58) {
              fVar58 = param_1[0x106e];
            }
            else {
              param_1[0x106e] = fVar58;
              param_1[0x1073] = fVar58;
            }
            if (*(char *)(param_1 + 0x1061) == '\0') {
              param_1[0x1068] = fVar35;
              param_1[0x1069] = fVar21;
              if (param_9 == '\0') {
                fVar19 = 0.0;
                param_1[0x1075] = *param_2;
              }
              else {
                param_1[0x1075] = *param_2;
                if (param_3 == (float *)0x0) {
                  fVar19 = (float)*(undefined8 *)param_2;
                }
                else {
                  fVar19 = (float)*(undefined8 *)param_3;
                }
              }
              uVar12 = (uint)*(ushort *)((int)param_1 + 0x4186);
              bVar4 = ABS(fVar35 - fVar35) <= DAT_ram_40096748;
              fVar57 = param_1[0x1062];
              fVar39 = param_1[0x1063];
              fVar15 = param_1[0x1064];
              fVar52 = param_1[0x1065];
              fVar46 = param_1[0x106c];
              param_1[0x1076] = fVar19;
              *(undefined1 *)(param_1 + 0x1061) = 1;
              fVar18 = (float)((uint)param_1[0x1060] & 0x1fff);
              bVar3 = true;
              fVar27 = fVar21;
              fVar19 = fVar35;
              if (bVar4) goto LAB_ram_4006f438;
LAB_ram_4006f450:
              if (param_9 != '\0') {
LAB_ram_4006f454:
                fVar33 = DAT_ram_40099f60;
                fVar60 = DAT_ram_4009675c;
                if (param_5 != (float *)0x0) {
                  pfVar10 = param_4 + param_6;
                  puVar24 = DAT_ram_4009f738;
                  fVar28 = DAT_ram_4009f798;
                  if (param_3 == (float *)0x0) {
                    param_3 = param_2;
                  }
                  do {
                    if (bVar3) {
                      fVar19 = (fVar35 - fVar19) * fVar46 + fVar19;
                      fVar27 = (fVar21 - fVar27) * fVar46 + fVar27;
                    }
                    if (uVar20 == 0) {
                      fVar31 = fVar19 * fVar15;
                    }
                    else if (uVar20 == 2) {
                      fVar31 = fVar19;
                      if (DAT_ram_4009f4bc <= fVar57) {
                        fVar31 = -fVar19;
                      }
                    }
                    else if (uVar20 == 3) {
                      fVar31 = fVar19 * (fVar57 * DAT_ram_4009f790 * (float)puVar22 +
                                        in_register_00000100);
                    }
                    else if (uVar20 == 1) {
                      fVar31 = fVar19 * (ABS(fVar57 * DAT_ram_4009f790 * (float)puVar22 +
                                             in_register_00000100) * (float)puVar22 +
                                        in_register_00000100);
                    }
                    else {
                      fVar31 = (float)FUN_ram_400009d2(fVar57);
                      in_register_00000100 = DAT_ram_40096728;
                      puVar24 = DAT_ram_4009f738;
                      fVar28 = DAT_ram_4009f798;
                      fVar31 = fVar19 * fVar31;
                    }
                    puVar2 = (undefined *)(fVar27 + fVar31);
                    fVar31 = *param_2;
                    uVar41 = *(undefined8 *)param_3;
                    param_1[(int)fVar18 + 0x1077] = fVar31;
                    param_1[(int)fVar18 + 0x3077] = (float)uVar41;
                    uVar12 = uVar12 + (uVar12 < 0x2000);
                    puVar54 = puVar22;
                    if (((float)puVar22 <= (float)puVar2) &&
                       (puVar54 = puVar2, (float)puVar24 < (float)puVar2)) {
                      puVar54 = puVar24;
                    }
                    fVar49 = (float)(int)fVar18 - (float)puVar54;
                    if (fVar49 < 0.0) {
                      fVar49 = fVar49 + fVar28;
                    }
                    uVar7 = (uint)(-1 < (int)fVar49) * (int)fVar49;
                    uVar11 = uVar7 & 0x1fff;
                    fVar49 = fVar49 - (float)uVar7;
                    uVar13 = uVar11 - 1 & 0x1fff;
                    uVar7 = uVar11 + 1 & 0x1fff;
                    fVar25 = fVar49 + fVar53;
                    fVar61 = fVar49 - fVar53;
                    fVar23 = fVar49 - (float)puVar22;
                    uVar9 = uVar11 + 2 & 0x1fff;
                    if (uVar13 < uVar12) {
                      fVar42 = param_1[uVar13 + 0x1077];
                    }
                    else {
                      fVar42 = param_1[0x1075];
                    }
                    if (uVar11 < uVar12) {
                      fVar43 = (float)*(undefined8 *)(param_1 + uVar11 + 0x1077);
                    }
                    else {
                      fVar43 = param_1[0x1075];
                    }
                    if (uVar7 < uVar12) {
                      fVar47 = (float)*(undefined8 *)(param_1 + uVar7 + 0x1077);
                    }
                    else {
                      fVar47 = param_1[0x1075];
                    }
                    if (uVar9 < uVar12) {
                      fVar50 = (float)*(undefined8 *)(param_1 + uVar9 + 0x1077);
                    }
                    else {
                      fVar50 = param_1[0x1075];
                    }
                    if (uVar20 == 0) {
                      fVar55 = fVar19 * fVar52;
                    }
                    else {
                      fVar32 = fVar57 + (float)_DAT_ram_4009f5ec;
                      if (fVar34 <= fVar32) {
                        fVar32 = fVar32 - fVar34;
                      }
                      if (uVar20 == 2) {
                        fVar55 = fVar19;
                        if (DAT_ram_4009f4bc <= fVar32) {
                          fVar55 = -fVar19;
                        }
                      }
                      else if (uVar20 == 3) {
                        fVar55 = fVar19 * (fVar32 * DAT_ram_4009f790 * (float)puVar22 +
                                          in_register_00000100);
                      }
                      else if (uVar20 == 1) {
                        fVar55 = fVar19 * (ABS(fVar32 * DAT_ram_4009f790 * (float)puVar22 +
                                               in_register_00000100) * (float)puVar22 +
                                          in_register_00000100);
                      }
                      else {
                        fVar32 = (float)FUN_ram_400009d2();
                        in_register_00000100 = DAT_ram_40096728;
                        puVar24 = DAT_ram_4009f738;
                        fVar28 = DAT_ram_4009f798;
                        fVar55 = fVar19 * fVar32;
                      }
                    }
                    puVar2 = (undefined *)(fVar27 + fVar55);
                    puVar54 = puVar22;
                    if (((float)puVar22 <= (float)puVar2) &&
                       (puVar54 = puVar2, (float)puVar24 < (float)puVar2)) {
                      puVar54 = puVar24;
                    }
                    fVar32 = (float)(int)fVar18 - (float)puVar54;
                    if (fVar32 < 0.0) {
                      fVar32 = fVar32 + fVar28;
                    }
                    uVar7 = (uint)(-1 < (int)fVar32) * (int)fVar32;
                    uVar11 = uVar7 & 0x1fff;
                    fVar32 = fVar32 - (float)uVar7;
                    uVar9 = uVar11 - 1 & 0x1fff;
                    uVar13 = uVar11 + 1 & 0x1fff;
                    fVar55 = fVar32 + fVar53;
                    fVar5 = fVar32 - fVar53;
                    fVar6 = fVar32 - (float)puVar22;
                    uVar7 = uVar11 + 2 & 0x1fff;
                    if (uVar9 < uVar12) {
                      fVar29 = (float)*(undefined8 *)(param_1 + uVar9 + 0x3077);
                    }
                    else {
                      fVar29 = param_1[0x1076];
                    }
                    if (uVar11 < uVar12) {
                      fVar30 = (float)*(undefined8 *)(param_1 + uVar11 + 0x3077);
                    }
                    else {
                      fVar30 = param_1[0x1076];
                    }
                    if (uVar13 < uVar12) {
                      fVar44 = (float)*(undefined8 *)(param_1 + uVar13 + 0x3077);
                    }
                    else {
                      fVar44 = param_1[0x1076];
                    }
                    if (uVar7 < uVar12) {
                      fVar48 = (float)*(undefined8 *)(param_1 + uVar7 + 0x3077);
                    }
                    else {
                      fVar48 = param_1[0x1076];
                    }
                    fVar57 = fVar57 + fVar39;
                    fVar18 = (float)((int)fVar18 + 1U & 0x1fff);
                    *param_4 = (fVar31 * fVar36 +
                               (((fVar49 * fVar25 * fVar61) / fVar33) * fVar50 +
                               -fVar25 * fVar49 * fVar23 * fVar60 * fVar47 +
                               fVar61 * fVar25 * fVar23 * fVar60 * fVar43 +
                               ((-fVar49 * fVar61 * fVar23) / fVar33) * fVar42) * fVar59) * fVar58;
                    *param_5 = ((float)uVar41 * fVar36 +
                               (((fVar32 * fVar55 * fVar5) / fVar33) * fVar48 +
                               -fVar55 * fVar32 * fVar6 * fVar60 * fVar44 +
                               fVar5 * fVar55 * fVar6 * fVar60 * fVar30 +
                               ((-fVar32 * fVar5 * fVar6) / fVar33) * fVar29) * fVar59) * fVar58;
                    if (fVar34 <= fVar57) {
                      fVar57 = fVar57 - fVar34;
                    }
                    fVar31 = fVar15 * fVar37;
                    param_4 = param_4 + 1;
                    param_5 = param_5 + 1;
                    param_2 = param_2 + 1;
                    fVar15 = fVar15 * fVar38 + fVar52 * fVar37;
                    fVar52 = fVar52 * fVar38 - fVar31;
                    param_3 = param_3 + 1;
                  } while (pfVar10 != param_4);
                  goto LAB_ram_4006f8fa;
                }
              }
            }
            else {
              fVar19 = param_1[0x1068];
              fVar27 = param_1[0x1069];
              uVar12 = (uint)*(ushort *)((int)param_1 + 0x4186);
              fVar57 = param_1[0x1062];
              fVar39 = param_1[0x1063];
              fVar15 = param_1[0x1064];
              fVar52 = param_1[0x1065];
              fVar46 = param_1[0x106c];
              bVar4 = ABS(fVar35 - fVar19) <= DAT_ram_40096748;
              fVar18 = (float)((uint)param_1[0x1060] & 0x1fff);
              if (param_9 != '\0') {
                if (bVar4) goto LAB_ram_4006f438;
                bVar3 = true;
                goto LAB_ram_4006f454;
              }
              bVar3 = true;
              if (bVar4) {
LAB_ram_4006f438:
                bVar3 = _DAT_ram_4009f794 < ABS(fVar21 - fVar27);
                goto LAB_ram_4006f450;
              }
            }
            puVar24 = DAT_ram_4009f738;
            fVar33 = DAT_ram_40099f60;
            fVar60 = DAT_ram_4009675c;
            pfVar10 = param_4 + param_6;
            fVar28 = in_register_00000100;
            do {
              if (bVar3) {
                fVar19 = (fVar35 - fVar19) * fVar46 + fVar19;
                fVar27 = (fVar21 - fVar27) * fVar46 + fVar27;
              }
              if (uVar20 == 0) {
                fVar31 = fVar19 * fVar15;
              }
              else if (uVar20 == 2) {
                fVar31 = fVar19;
                if (DAT_ram_4009f4bc <= fVar57) {
                  fVar31 = -fVar19;
                }
              }
              else if (uVar20 == 3) {
                fVar31 = fVar19 * (fVar57 * DAT_ram_4009f790 * (float)puVar22 + in_register_00000100
                                  );
              }
              else if (uVar20 == 1) {
                fVar31 = fVar19 * (ABS(fVar57 * DAT_ram_4009f790 * (float)puVar22 +
                                       in_register_00000100) * (float)puVar22 + in_register_00000100
                                  );
              }
              else {
                fVar31 = (float)FUN_ram_400009d2(fVar57);
                in_register_00000100 = DAT_ram_40096728;
                fVar28 = DAT_ram_4009f798;
                fVar31 = fVar19 * fVar31;
              }
              puVar2 = (undefined *)(fVar27 + fVar31);
              puVar54 = puVar22;
              if (((float)puVar22 <= (float)puVar2) &&
                 (puVar54 = puVar2, (float)puVar24 < (float)puVar2)) {
                puVar54 = puVar24;
              }
              fVar31 = (float)(int)fVar18 - (float)puVar54;
              if (fVar31 < 0.0) {
                fVar31 = fVar31 + fVar28;
              }
              fVar49 = *param_2;
              uVar7 = (uint)(-1 < (int)fVar31) * (int)fVar31;
              uVar11 = uVar7 & 0x1fff;
              param_1[(int)fVar18 + 0x1077] = fVar49;
              fVar31 = fVar31 - (float)uVar7;
              uVar7 = uVar11 - 1 & 0x1fff;
              uVar13 = uVar11 + 1 & 0x1fff;
              uVar9 = uVar11 + 2 & 0x1fff;
              if (uVar12 < 0x2000) {
                uVar12 = uVar12 + 1;
                param_1[(int)fVar18 + 0x3077] = param_1[0x1076];
                if (uVar7 < uVar12) goto LAB_ram_4006f924;
                fVar25 = param_1[0x1075];
              }
              else {
LAB_ram_4006f924:
                fVar25 = param_1[uVar7 + 0x1077];
              }
              if (uVar11 < uVar12) {
                fVar61 = param_1[uVar11 + 0x1077];
              }
              else {
                fVar61 = param_1[0x1075];
              }
              if (uVar13 < uVar12) {
                fVar23 = param_1[uVar13 + 0x1077];
              }
              else {
                fVar23 = param_1[0x1075];
              }
              if (uVar9 < uVar12) {
                fVar42 = param_1[uVar9 + 0x1077];
              }
              else {
                fVar42 = param_1[0x1075];
              }
              fVar47 = fVar31 - fVar53;
              fVar50 = fVar31 - (float)puVar22;
              fVar43 = fVar31 + fVar53;
              fVar57 = fVar57 + fVar39;
              fVar18 = (float)((int)fVar18 + 1U & 0x1fff);
              *param_4 = (fVar49 * fVar36 +
                         (fVar42 * ((fVar31 * fVar43 * fVar47) / fVar33) +
                         fVar23 * -fVar43 * fVar31 * fVar50 * fVar60 +
                         fVar25 * ((-fVar31 * fVar47 * fVar50) / fVar33) +
                         fVar47 * fVar43 * fVar50 * fVar60 * fVar61) * fVar59) * fVar58;
              if (fVar34 <= fVar57) {
                fVar57 = fVar57 - fVar34;
              }
              fVar31 = fVar15 * fVar37;
              param_4 = param_4 + 1;
              param_2 = param_2 + 1;
              fVar15 = fVar15 * fVar38 + fVar52 * fVar37;
              fVar52 = fVar52 * fVar38 - fVar31;
            } while (pfVar10 != param_4);
LAB_ram_4006f8fa:
            param_1[0x1060] = fVar18;
            *(short *)((int)param_1 + 0x4186) = (short)uVar12;
            param_1[0x1062] = fVar57;
            param_1[0x1064] = fVar15;
            param_1[0x1065] = fVar52;
            param_1[0x1068] = fVar19;
            param_1[0x1069] = fVar27;
            return;
          }
          if (param_8 == 8) {
LAB_ram_4006e26e:
            FUN_ram_4006d0b4(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_9);
            return;
          }
          if (param_8 == 9) {
LAB_ram_4006e348:
            FUN_ram_40071e7c(param_1 + 0x50ab,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_9);
            return;
          }
          if (param_8 == 10) {
LAB_ram_4006e424:
            FUN_ram_40074e5e(param_1 + 0x50b2,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_9);
            return;
          }
          if ((param_8 == 0xb) || (param_8 == 0x11)) {
LAB_ram_4006e2c2:
            FUN_ram_40072754(param_1 + 0x5cb5,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8);
            return;
          }
          fVar38 = DAT_ram_4009f73c;
          if (param_7 == (float *)0x0) {
LAB_ram_4006e412:
            fVar58 = DAT_ram_4009672c;
          }
          else {
            fVar38 = *param_7;
            if (fVar38 < 0.0) {
              fVar38 = 0.0;
            }
            else if (DAT_ram_4009672c < fVar38) {
              fVar38 = DAT_ram_4009672c;
            }
            fVar58 = param_7[1];
            if (fVar58 < 0.0) {
              fVar58 = 0.0;
            }
            else if (DAT_ram_4009672c < fVar58) goto LAB_ram_4006e412;
          }
          if ((float)*(undefined8 *)(param_1 + 8) == fVar38) {
            uVar26 = *(ulonglong *)(param_1 + 6);
            uVar40 = *(ulonglong *)(param_1 + 7);
          }
          else {
            fVar37 = *param_1;
            fVar34 = DAT_ram_40099f88;
            if (fVar37 <= DAT_ram_40099f28) {
              fVar37 = DAT_ram_4009f078;
              if (0.0 <= fVar38) goto LAB_ram_4006e7a4;
LAB_ram_4006fe7a:
              fVar37 = (fVar34 * DAT_ram_4009f090) / fVar37;
LAB_ram_4006e7e6:
              uVar26 = FUN_ram_400009d2(fVar37);
              uVar26 = uVar26 & 0xffffffff;
              uVar40 = FUN_ram_40000712(fVar37);
            }
            else {
              if (fVar38 < 0.0) {
LAB_ram_4006fe72:
                if (DAT_ram_4009672c <= fVar37) goto LAB_ram_4006fe7a;
                fVar37 = (fVar34 * DAT_ram_4009f090) / DAT_ram_4009f078;
                goto LAB_ram_4006e7e6;
              }
LAB_ram_4006e7a4:
              fVar34 = DAT_ram_4009a368;
              if (DAT_ram_4009672c < fVar38) goto LAB_ram_4006fe72;
              fVar34 = fVar38 * DAT_ram_4009b184 + DAT_ram_40099f88;
              if (0.0 <= fVar34) {
                if (DAT_ram_4009a368 < fVar34) {
                  uVar26 = (ulonglong)DAT_ram_4009f760;
                  fVar34 = DAT_ram_4009f75c;
                  fVar35 = DAT_ram_4009f764;
                  goto LAB_ram_4006e7dc;
                }
                if (fVar37 < DAT_ram_4009672c) {
                  fVar37 = DAT_ram_4009f078;
                }
                if (0.0 <= fVar34) goto LAB_ram_4006fe7a;
                fVar37 = 0.0 / fVar37;
                goto LAB_ram_4006e7e6;
              }
              uVar26 = 0;
              fVar35 = 0.0;
              fVar34 = DAT_ram_4009672c;
LAB_ram_4006e7dc:
              uVar40 = (ulonglong)(uint)fVar34;
              if (DAT_ram_4009672c <= fVar37) {
                fVar37 = fVar35 / fVar37;
                goto LAB_ram_4006e7e6;
              }
            }
            *(ulonglong *)(param_1 + 6) = uVar26;
            *(ulonglong *)(param_1 + 7) = uVar40;
            param_1[8] = fVar38;
          }
          fVar38 = param_1[0xb];
          if ((float)*(undefined8 *)(param_1 + 9) == fVar58) {
            fVar34 = param_1[0xc];
            goto LAB_ram_4006dd22;
          }
          fVar37 = *param_1;
          if (*param_1 <= DAT_ram_40099f28) {
            fVar37 = DAT_ram_4009f078;
          }
          fVar34 = 0.0;
          if (fVar58 < 0.0) {
LAB_ram_4006e3e6:
            fVar37 = fVar37 * fVar34;
          }
          else if (fVar58 <= fVar53) {
            fVar34 = fVar58 + 0.0;
            goto LAB_ram_4006e3e6;
          }
          fVar34 = fVar37 / DAT_ram_40099f28;
          if (fVar38 < fVar37 / DAT_ram_40099f28) {
            fVar34 = fVar38;
          }
          param_1[0xc] = fVar34;
          param_1[9] = fVar58;
LAB_ram_4006dd22:
          fVar58 = DAT_ram_4009f744;
          fVar37 = DAT_ram_4009f740;
          uVar56 = (ulonglong)(uint)DAT_ram_40096760;
          if ((float)*(undefined8 *)(param_1 + 10) == DAT_ram_40096760) {
            fVar58 = param_1[0xf];
            fVar37 = param_1[0x10];
          }
          else {
            uVar45 = (ulonglong)(uint)DAT_ram_4009f744;
            uVar51 = (ulonglong)(uint)DAT_ram_4009f740;
            *(ulonglong *)(param_1 + 0xe) = uVar56;
            *(ulonglong *)(param_1 + 0xf) = uVar45;
            *(ulonglong *)(param_1 + 0x10) = uVar51;
            *(ulonglong *)(param_1 + 10) = uVar56;
          }
          fVar59 = DAT_ram_4009f79c;
          fVar35 = param_1[0xd];
          uVar56 = *(ulonglong *)(param_1 + 4);
          fVar21 = param_1[5];
          fVar36 = (float)((uint)param_1[1] & 0x3ff);
          if (fVar35 < 0.0) {
            fVar35 = 0.0;
            fVar57 = fVar53;
          }
          else if (fVar53 < fVar35) {
            fVar35 = fVar53;
            fVar57 = 0.0;
          }
          else {
            fVar57 = fVar53 - fVar35;
          }
          fVar39 = param_1[3];
          uVar45 = *(ulonglong *)(param_1 + 2);
          bVar4 = false;
          iVar16 = 0;
          uVar20 = 0;
          fVar15 = fVar39;
          do {
            fVar46 = (float)uVar56;
            fVar52 = fVar46 * fVar34 + fVar38;
            if (fVar52 < 0.0) {
              fVar52 = 0.0;
            }
            fVar52 = (float)(int)fVar36 - fVar52;
            if (0.0 <= fVar52) {
              if (fVar59 <= fVar52) {
                fVar52 = fVar52 - fVar59;
              }
            }
            else {
              fVar52 = fVar52 + fVar59;
            }
            uVar12 = (uint)(-1 < (int)fVar52) * (int)fVar52;
            uVar7 = uVar12 & 0x3ff;
            fVar52 = fVar52 - (float)uVar12;
            fVar19 = *(float *)((int)param_2 + iVar16);
            fVar52 = fVar35 * ((fVar53 - fVar52) * param_1[uVar7 + 0x11] +
                              fVar52 * param_1[(uVar7 + 1 & 0x3ff) + 0x11]) + (float)uVar45 * fVar57
            ;
            uVar45 = (ulonglong)(uint)fVar52;
            *(ulonglong *)((int)param_4 + iVar16) =
                 (ulonglong)(uint)(fVar58 * fVar19 + fVar37 * fVar52);
            param_1[(int)fVar36 + 0x11] = fVar19;
            if (param_9 != '\0') {
              fVar52 = fVar21 * fVar34 + fVar38;
              if (fVar52 < 0.0) {
                fVar52 = 0.0;
              }
              fVar52 = (float)(int)fVar36 - fVar52;
              if (fVar52 < 0.0) {
                fVar52 = fVar52 + fVar59;
              }
              else if (fVar59 <= fVar52) {
                fVar52 = fVar52 - fVar59;
              }
              uVar12 = (uint)(-1 < (int)fVar52) * (int)fVar52;
              uVar7 = uVar12 & 0x3ff;
              fVar52 = fVar52 - (float)uVar12;
              if (param_3 == (float *)0x0) {
                uVar41 = 0;
              }
              else {
                uVar41 = *(undefined8 *)((int)param_3 + iVar16);
              }
              fVar15 = fVar35 * ((fVar53 - fVar52) * (float)*(undefined8 *)(param_1 + uVar7 + 0x411)
                                + fVar52 * (float)*(undefined8 *)
                                                   (param_1 + (uVar7 + 1 & 0x3ff) + 0x411)) +
                       fVar15 * fVar57;
              if (param_5 != (float *)0x0) {
                *(ulonglong *)((int)param_5 + iVar16) =
                     (ulonglong)(uint)((float)uVar41 * fVar58 + fVar15 * fVar37);
              }
              *(undefined8 *)(param_1 + (int)fVar36 + 0x411) = uVar41;
              bVar4 = true;
            }
            uVar20 = uVar20 + 1;
            fVar36 = (float)((int)fVar36 + 1U & 0x3ff);
            uVar56 = (ulonglong)(uint)(fVar46 * (float)uVar40 + fVar21 * (float)uVar26);
            fVar21 = fVar21 * (float)uVar40 - fVar46 * (float)uVar26;
            iVar16 = iVar16 + 4;
          } while (uVar20 < param_6);
          if (!bVar4) {
            fVar15 = fVar39;
          }
          param_1[1] = fVar36;
          *(ulonglong *)(param_1 + 2) = uVar45;
          param_1[3] = fVar15;
          *(ulonglong *)(param_1 + 4) = uVar56;
          param_1[5] = fVar21;
          return;
        }
        if (*(char *)(param_1 + 0x847) == '\0') {
LAB_ram_4006df20:
          if (param_2 != param_4) {
            FUN_ram_4000303c(param_4,param_2,param_6 << 2);
          }
          if (param_9 == '\0') {
            return;
          }
          if (param_5 == (float *)0x0) {
            return;
          }
          if (param_3 == (float *)0x0) {
            param_3 = param_4;
          }
          if (param_3 == param_5) {
            return;
          }
          FUN_ram_4000303c(param_5,param_3,param_6 << 2);
          return;
        }
        fVar38 = DAT_ram_4009f710;
        fVar58 = DAT_ram_4009f718;
        fVar37 = DAT_ram_4009a4f8;
        if (param_7 != (float *)0x0) {
          fVar38 = *param_7;
          if (0.0 <= fVar38) {
            if (DAT_ram_4009672c < fVar38) {
              fVar38 = DAT_ram_4009672c;
            }
          }
          else {
            fVar38 = 0.0;
          }
          fVar58 = param_7[1];
          if (0.0 <= fVar58) {
            if (DAT_ram_4009672c < fVar58) {
              fVar58 = DAT_ram_4009672c;
            }
          }
          else {
            fVar58 = 0.0;
          }
          fVar37 = param_7[2];
          if (0.0 <= fVar37) {
            if (DAT_ram_4009672c < fVar37) {
              fVar37 = DAT_ram_4009672c;
            }
          }
          else {
            fVar37 = 0.0;
          }
        }
        fStack_d0 = DAT_ram_4009672c;
        if (param_1[0x83d] == fVar38) {
          fVar34 = param_1[0x838];
          fVar35 = param_1[0x839];
        }
        else {
          fVar35 = *param_1;
          fVar21 = DAT_ram_4009f71c;
          if (fVar35 <= DAT_ram_40099f28) {
            fVar35 = DAT_ram_4009f078;
            if (0.0 <= fVar38) goto LAB_ram_4007024c;
LAB_ram_40070b54:
            fVar35 = DAT_ram_4009f078;
          }
          else if (fVar38 < 0.0) {
LAB_ram_40070b4c:
            if (fVar35 < DAT_ram_4009672c) goto LAB_ram_40070b54;
          }
          else {
LAB_ram_4007024c:
            fVar21 = DAT_ram_4009f758;
            if (DAT_ram_4009672c < fVar38) goto LAB_ram_40070b4c;
            fVar34 = fVar38 * DAT_ram_4009b154 + DAT_ram_40099f6c;
            if (fVar35 < DAT_ram_4009672c) {
              fVar35 = DAT_ram_4009f078;
            }
            fVar21 = 0.0;
            if (0.0 <= fVar34) {
              fVar21 = fVar34 * DAT_ram_4009f090;
            }
          }
          fVar34 = (float)FUN_ram_400009d2(fVar21 / fVar35);
          param_1[0x838] = fVar34;
          fVar35 = (float)FUN_ram_40000712(fVar21 / fVar35);
          param_1[0x83d] = fVar38;
          param_1[0x839] = fVar35;
        }
        if (param_1[0x83e] == fVar58) {
          fVar38 = param_1[0x83a];
        }
        else {
          fVar38 = DAT_ram_4009f748;
          if ((((0.0 <= fVar58) && (fVar38 = DAT_ram_40096730, fVar58 <= fVar53)) &&
              (fVar21 = fVar58 * DAT_ram_4009f778 + DAT_ram_4009f748, fVar38 = DAT_ram_4009f714,
              DAT_ram_4009f714 <= fVar21)) &&
             (fVar38 = DAT_ram_4009676c, fVar21 <= DAT_ram_4009676c)) {
            fVar38 = fVar21;
          }
          param_1[0x83a] = fVar38;
          param_1[0x83e] = fVar58;
        }
        if (param_1[0x83f] == fVar37) {
          fVar37 = param_1[0x83b];
        }
        else {
          param_1[0x83b] = fVar37;
          param_1[0x83f] = fVar37;
        }
        fStack_d4 = DAT_ram_40096760;
        if (param_1[0x840] == DAT_ram_40096760) {
          fStack_d4 = param_1[0x83c];
          if (fVar37 < 0.0) {
            fVar37 = 0.0;
            fStack_d0 = fVar53;
          }
          else {
            if (fVar37 <= fVar53) goto LAB_ram_4006eb94;
            fStack_d0 = 0.0;
            fVar37 = fVar53;
          }
        }
        else {
          param_1[0x83c] = DAT_ram_40096760;
          param_1[0x840] = fStack_d4;
          if (fVar37 < 0.0) {
            fVar37 = 0.0;
            goto LAB_ram_4006ebb2;
          }
          if (fVar53 < fVar37) {
            fStack_d0 = 0.0;
            fVar37 = fVar53;
            goto LAB_ram_4006ebb2;
          }
LAB_ram_4006eb94:
          fStack_d0 = fVar53 - fVar37;
        }
        if (0.0 <= fStack_d4) {
          if (fVar53 < fStack_d4) {
            fStack_d4 = fVar53;
          }
        }
        else {
          fStack_d4 = 0.0;
        }
LAB_ram_4006ebb2:
        fVar58 = param_1[0x835];
        if (param_1[0x835] <= 0.0) {
          fVar58 = DAT_ram_4009f554;
        }
        fVar21 = param_1[0x845];
        fVar57 = param_1[0x1049];
        fVar59 = param_1[0x104a];
        fVar36 = param_1[0x104b];
        uVar26 = (ulonglong)(uint)fVar36;
        fVar15 = (float)((uint)param_1[0x846] & 0x1ff);
        fVar39 = param_1[0x836];
        if (param_9 == '\0') {
          pfVar10 = param_2 + param_6;
          fVar19 = param_1[0x837];
          fVar52 = param_1[0x844];
          fVar46 = param_1[0x1048];
          fVar27 = in_register_00000100;
          do {
            fVar33 = fVar39;
            fVar60 = *param_2;
            fVar39 = fVar21;
            if (fVar21 <= 0.0) {
              if (*(char *)((int)param_1 + 0x211d) == '\0') {
                fVar21 = param_1[0x841];
                fVar39 = param_1[0x843] * fVar52 + param_1[0x842];
                fVar18 = DAT_ram_4009f124;
                if ((fVar53 <= fVar39) || (fVar18 = fVar39, 0.0 < fVar39)) {
                  if (fVar21 <= in_register_00000100) {
                    fVar21 = in_register_00000100;
                  }
                }
                else {
                  fVar39 = DAT_ram_4009f098;
                  fVar18 = in_register_00000100;
                  if (fVar21 <= in_register_00000100) goto LAB_ram_4006fee0;
                }
                fVar39 = (float)FUN_ram_40000c5e(fVar53 - fVar18);
                fVar39 = -fVar21 * fVar39 + -fVar21 * fVar39;
                if (fVar39 < DAT_ram_4009f098) {
                  fVar39 = DAT_ram_4009f098;
                }
              }
              else {
                fVar21 = (fVar52 + fVar53) * DAT_ram_4009f784;
                if (fVar21 <= 0.0) {
                  fVar39 = param_1[0x848];
                }
                else if (fVar21 < DAT_ram_4009f580) {
                  uVar20 = (uint)(-1 < (int)fVar21) * (int)fVar21;
                  fVar39 = (fVar21 - (float)uVar20) *
                           (param_1[uVar20 + 0x849] - param_1[uVar20 + 0x848]) +
                           param_1[uVar20 + 0x848];
                }
                else {
                  fVar39 = param_1[0xc47];
                }
              }
            }
LAB_ram_4006fee0:
            uVar20 = (int)fVar15 - 1;
            fVar21 = fVar39;
            fVar28 = fVar58;
            fVar18 = fVar27;
            if (fVar39 <= fVar58) {
              do {
                fVar15 = (float)(uVar20 & 0x1ff);
                uVar20 = (int)fVar15 - 1;
                fVar46 = (fVar21 / fVar58) * (fVar60 - fVar46) + fVar46;
                fVar52 = (fVar21 / fVar58) * (fVar33 - fVar52) + fVar52;
                *(ulonglong *)(param_1 + (int)fVar15 + 0xc48) =
                     (ulonglong)
                     (uint)((float)*(undefined8 *)(param_1 + (int)fVar15 + 0xc48) * fVar38 + fVar46)
                ;
                fVar49 = DAT_ram_4009f784;
                fVar31 = DAT_ram_4009f580;
                fVar59 = param_1[(uVar20 & 0x1ff) + 0xc48];
                if (*(char *)((int)param_1 + 0x211d) != '\0') {
                  fVar39 = (fVar52 + fVar53) * DAT_ram_4009f784;
                  if (fVar39 <= 0.0) {
                    fVar39 = param_1[0x848];
                  }
                  else if (fVar39 < DAT_ram_4009f580) {
                    uVar12 = (uint)(-1 < (int)fVar39) * (int)fVar39;
                    fVar39 = (fVar39 - (float)uVar12) *
                             (param_1[uVar12 + 0x849] - param_1[uVar12 + 0x848]) +
                             param_1[uVar12 + 0x848];
                  }
                  else {
                    fVar39 = param_1[0xc47];
                  }
                  fVar28 = fVar28 - fVar21;
                  if (fVar39 <= fVar28) {
                    do {
                      fVar15 = (float)(uVar20 & 0x1ff);
                      uVar20 = (int)fVar15 - 1;
                      fVar52 = (fVar33 - fVar52) * (fVar39 / fVar58) + fVar52;
                      fVar46 = (fVar60 - fVar46) * (fVar39 / fVar58) + fVar46;
                      fVar21 = (fVar52 + fVar53) * fVar49;
                      *(ulonglong *)(param_1 + (int)fVar15 + 0xc48) =
                           (ulonglong)
                           (uint)((float)*(undefined8 *)(param_1 + (int)fVar15 + 0xc48) * fVar38 +
                                 fVar46);
                      fVar59 = param_1[(uVar20 & 0x1ff) + 0xc48];
                      if (0.0 < fVar21) {
                        uVar12 = (uint)(-1 < (int)fVar21) * (int)fVar21;
                        if (fVar21 < fVar31) {
                          fVar21 = (param_1[uVar12 + 0x849] - param_1[uVar12 + 0x848]) *
                                   (fVar21 - (float)uVar12) + param_1[uVar12 + 0x848];
                        }
                        else {
                          fVar21 = param_1[0xc47];
                        }
                      }
                      else {
                        fVar21 = param_1[0x848];
                      }
                      fVar28 = fVar28 - fVar39;
                      fVar39 = fVar21;
                    } while (fVar21 <= fVar28);
                  }
                  break;
                }
                fVar31 = param_1[0x841];
                fVar39 = fVar52 * param_1[0x843] + param_1[0x842];
                if (fVar39 < fVar53) {
                  if (0.0 < fVar39) {
                    uVar26 = (ulonglong)(uint)(fVar53 - fVar39);
                    fVar39 = fVar27;
                    if (fVar27 < fVar31) goto LAB_ram_4007014a;
LAB_ram_40070114:
                    fVar31 = (float)FUN_ram_40000c5e(uVar26);
                    fVar39 = fVar31 * fVar39 + fVar31 * fVar39;
                    if (fVar27 <= fVar39) goto LAB_ram_40070042;
                  }
                  else if (fVar27 < fVar31) {
                    uVar26 = (ulonglong)(uint)fVar53;
                    fVar39 = -fVar31;
                    goto LAB_ram_40070114;
                  }
                  fVar39 = fVar27;
                }
                else {
                  fVar39 = DAT_ram_4009f768;
                  if (in_register_00000100 < fVar31) {
                    uVar26 = CONCAT44(DAT_ram_4009f724,DAT_ram_4009f720);
LAB_ram_4007014a:
                    fVar39 = -fVar31;
                    goto LAB_ram_40070114;
                  }
                }
LAB_ram_40070042:
                fVar28 = fVar28 - fVar21;
                fVar21 = fVar39;
              } while (fVar39 <= fVar28);
            }
            fVar21 = fVar39 - fVar28;
            if (fVar39 - fVar28 < 0.0) {
              fVar21 = 0.0;
            }
            param_2 = param_2 + 1;
            fVar39 = fVar33 * fVar35 + fVar19 * fVar34;
            *param_4 = fStack_d4 * (fStack_d0 * fVar60 + fVar37 * fVar59);
            param_4 = param_4 + 1;
            fVar19 = fVar18;
            fVar52 = fVar33;
            fVar46 = fVar60;
            fVar27 = fVar18;
          } while (pfVar10 != param_2);
        }
        else {
          if (param_3 == (float *)0x0) {
            param_3 = param_2;
          }
          iVar16 = 0;
          fVar27 = param_1[0x837];
          fVar52 = param_1[0x844];
          fVar46 = param_1[0x1048];
          fVar19 = fVar57;
          fVar18 = in_register_00000100;
          do {
            fVar33 = fVar39;
            fVar60 = *(float *)((int)param_2 + iVar16);
            fVar57 = *(float *)((int)param_3 + iVar16);
            fVar39 = fVar21;
            if (fVar21 <= 0.0) {
              if (*(char *)((int)param_1 + 0x211d) == '\0') {
                fVar21 = param_1[0x841];
                fVar36 = param_1[0x843] * fVar52 + param_1[0x842];
                fVar28 = DAT_ram_4009f124;
                if ((fVar53 <= fVar36) || (fVar28 = fVar36, 0.0 < fVar36)) {
                  if (fVar21 <= DAT_ram_4009f54c) {
                    fVar21 = DAT_ram_4009f54c;
                  }
                }
                else {
                  fVar39 = DAT_ram_4009f098;
                  fVar28 = DAT_ram_4009f54c;
                  if (fVar21 <= DAT_ram_4009f54c) goto LAB_ram_4006ec44;
                }
                fVar36 = (float)FUN_ram_40000c5e(fVar53 - fVar28);
                fVar21 = -fVar21 * fVar36 + -fVar21 * fVar36;
                uVar26 = uVar26 & 0xffffffff;
                fVar39 = DAT_ram_4009f098;
                if (DAT_ram_4009f098 <= fVar21) {
                  fVar39 = fVar21;
                }
              }
              else {
                fVar21 = (fVar52 + fVar53) * DAT_ram_4009f784;
                if (fVar21 <= 0.0) {
                  fVar39 = param_1[0x848];
                }
                else if (fVar21 < DAT_ram_4009f580) {
                  uVar20 = (uint)(-1 < (int)fVar21) * (int)fVar21;
                  fVar39 = (fVar21 - (float)uVar20) *
                           (param_1[uVar20 + 0x849] - param_1[uVar20 + 0x848]) +
                           param_1[uVar20 + 0x848];
                }
                else {
                  fVar39 = param_1[0xc47];
                }
              }
            }
LAB_ram_4006ec44:
            uVar20 = (int)fVar15 - 1;
            fVar21 = fVar39;
            fVar36 = DAT_ram_4009f098;
            fVar28 = fVar58;
            if (fVar39 <= fVar58) {
              do {
                fVar59 = fVar21 / fVar58;
                fVar15 = (float)(uVar20 & 0x1ff);
                uVar20 = (int)fVar15 - 1;
                fVar46 = fVar59 * (fVar60 - fVar46) + fVar46;
                fVar19 = fVar59 * (fVar57 - fVar19) + fVar19;
                fVar52 = fVar59 * (fVar33 - fVar52) + fVar52;
                *(ulonglong *)(param_1 + (int)fVar15 + 0xc48) =
                     (ulonglong)
                     (uint)((float)*(undefined8 *)(param_1 + (int)fVar15 + 0xc48) * fVar38 + fVar46)
                ;
                *(ulonglong *)(param_1 + (int)fVar15 + 0xe48) =
                     (ulonglong)
                     (uint)((float)*(undefined8 *)(param_1 + (int)fVar15 + 0xe48) * fVar38 + fVar19)
                ;
                fVar49 = DAT_ram_4009f784;
                fVar31 = DAT_ram_4009f580;
                fVar59 = param_1[(uVar20 & 0x1ff) + 0xc48];
                uVar26 = *(ulonglong *)(param_1 + (uVar20 & 0x1ff) + 0xe48);
                if (*(char *)((int)param_1 + 0x211d) != '\0') {
                  fVar36 = (fVar52 + fVar53) * DAT_ram_4009f784;
                  if (fVar36 <= 0.0) {
                    fVar39 = param_1[0x848];
                  }
                  else if (fVar36 < DAT_ram_4009f580) {
                    uVar12 = (uint)(-1 < (int)fVar36) * (int)fVar36;
                    fVar39 = (fVar36 - (float)uVar12) *
                             (param_1[uVar12 + 0x849] - param_1[uVar12 + 0x848]) +
                             param_1[uVar12 + 0x848];
                  }
                  else {
                    fVar39 = param_1[0xc47];
                  }
                  fVar28 = fVar28 - fVar21;
                  if (fVar39 <= fVar28) {
                    do {
                      fVar21 = fVar39 / fVar58;
                      fVar15 = (float)(uVar20 & 0x1ff);
                      uVar20 = (int)fVar15 - 1;
                      fVar52 = (fVar33 - fVar52) * fVar21 + fVar52;
                      fVar46 = (fVar60 - fVar46) * fVar21 + fVar46;
                      fVar19 = (fVar57 - fVar19) * fVar21 + fVar19;
                      fVar21 = (fVar52 + fVar53) * fVar49;
                      *(ulonglong *)(param_1 + (int)fVar15 + 0xc48) =
                           (ulonglong)
                           (uint)(fVar38 * (float)*(undefined8 *)(param_1 + (int)fVar15 + 0xc48) +
                                 fVar46);
                      *(ulonglong *)(param_1 + (int)fVar15 + 0xe48) =
                           (ulonglong)
                           (uint)(fVar38 * (float)*(undefined8 *)(param_1 + (int)fVar15 + 0xe48) +
                                 fVar19);
                      uVar26 = *(ulonglong *)(param_1 + (uVar20 & 0x1ff) + 0xe48);
                      fVar59 = param_1[(uVar20 & 0x1ff) + 0xc48];
                      if (0.0 < fVar21) {
                        uVar12 = (uint)(-1 < (int)fVar21) * (int)fVar21;
                        if (fVar21 < fVar31) {
                          fVar21 = (param_1[uVar12 + 0x849] - param_1[uVar12 + 0x848]) *
                                   (fVar21 - (float)uVar12) + param_1[uVar12 + 0x848];
                        }
                        else {
                          fVar21 = param_1[0xc47];
                        }
                      }
                      else {
                        fVar21 = param_1[0x848];
                      }
                      fVar28 = fVar28 - fVar39;
                      fVar39 = fVar21;
                    } while (fVar21 <= fVar28);
                  }
                  break;
                }
                fVar31 = param_1[0x841];
                fVar39 = fVar52 * param_1[0x843] + param_1[0x842];
                if (fVar39 < fVar53) {
                  if (fVar39 <= 0.0) {
                    if (DAT_ram_4009f54c < fVar31) {
                      uVar40 = (ulonglong)(uint)fVar53;
                      fVar36 = -fVar31;
                      goto LAB_ram_4006eeb6;
                    }
                  }
                  else {
                    uVar40 = (ulonglong)(uint)(fVar53 - fVar39);
                    fVar36 = DAT_ram_4009f724;
                    if (DAT_ram_4009f54c < fVar31) goto LAB_ram_4006eefe;
LAB_ram_4006eeb6:
                    fVar39 = (float)FUN_ram_40000c5e(uVar40);
                    fVar39 = fVar39 * fVar36 + fVar39 * fVar36;
                    uVar26 = CONCAT44(fVar36,(int)uVar26);
                    fVar36 = DAT_ram_4009f098;
                    if (DAT_ram_4009f098 <= fVar39) goto LAB_ram_4006edca;
                  }
                  fVar39 = fVar36;
                }
                else {
                  fVar39 = DAT_ram_4009f768;
                  if (DAT_ram_4009f54c < fVar31) {
                    uVar40 = CONCAT44(DAT_ram_4009f724,DAT_ram_4009f720);
LAB_ram_4006eefe:
                    fVar36 = -fVar31;
                    goto LAB_ram_4006eeb6;
                  }
                }
LAB_ram_4006edca:
                fVar28 = fVar28 - fVar21;
                fVar21 = fVar39;
              } while (fVar39 <= fVar28);
            }
            fVar36 = (float)uVar26;
            fVar21 = fVar39 - fVar28;
            if (fVar39 - fVar28 < 0.0) {
              fVar21 = 0.0;
            }
            *(ulonglong *)((int)param_4 + iVar16) =
                 (ulonglong)(uint)((fStack_d0 * fVar60 + fVar37 * fVar59) * fStack_d4);
            if (param_5 != (float *)0x0) {
              *(ulonglong *)((int)param_5 + iVar16) =
                   (ulonglong)(uint)(fStack_d4 * (fStack_d0 * fVar57 + fVar37 * fVar36));
            }
            iVar16 = iVar16 + 4;
            fVar39 = fVar33 * fVar35 + fVar27 * fVar34;
            fVar27 = fVar18;
            fVar52 = fVar33;
            fVar46 = fVar60;
            fVar19 = fVar57;
          } while (param_6 << 2 != iVar16);
        }
        param_1[0x846] = fVar15;
        param_1[0x845] = fVar21;
        param_1[0x844] = fVar33;
        param_1[0x836] = fVar39;
        param_1[0x837] = fVar18;
        param_1[0x1048] = fVar60;
        param_1[0x1049] = fVar57;
        param_1[0x104a] = fVar59;
        param_1[0x104b] = fVar36;
        return;
      }
      if (param_7 == (float *)0x0) {
        uVar26 = (ulonglong)DAT_ram_4009f0bc;
        fVar38 = DAT_ram_4009f710;
        fVar58 = DAT_ram_4009f70c;
      }
      else {
        fVar38 = *param_7;
        if (0.0 <= fVar38) {
          if (DAT_ram_4009672c < fVar38) {
            fVar38 = DAT_ram_4009672c;
          }
        }
        else {
          fVar38 = 0.0;
        }
        fVar58 = param_7[1];
        if (0.0 <= fVar58) {
          if (DAT_ram_4009672c < fVar58) {
            fVar58 = DAT_ram_4009672c;
          }
        }
        else {
          fVar58 = 0.0;
        }
        fVar37 = param_7[2];
        uVar26 = (ulonglong)(uint)fVar37;
        if (0.0 <= fVar37) {
          if (DAT_ram_4009672c < fVar37) {
            uVar26 = (ulonglong)(uint)DAT_ram_4009672c;
          }
        }
        else {
          uVar26 = 0;
        }
      }
      if ((float)*(undefined8 *)(param_1 + 0x819) == fVar38) {
        fVar37 = param_1[0x814];
        uVar40 = *(ulonglong *)(param_1 + 0x815);
      }
      else {
        fVar35 = (float)*(undefined8 *)param_1;
        fVar34 = DAT_ram_4009f71c;
        if (fVar35 <= DAT_ram_40099f28) {
          fVar35 = DAT_ram_4009f078;
          if (0.0 <= fVar38) goto LAB_ram_4006fbce;
LAB_ram_4006fc06:
          fVar37 = (float)FUN_ram_400009d2(fVar34 / fVar35);
          uVar40 = FUN_ram_40000712(fVar34 / fVar35);
        }
        else {
          fVar37 = DAT_ram_4009f74c;
          fVar21 = DAT_ram_4009672c;
          if (0.0 <= fVar38) {
LAB_ram_4006fbce:
            fVar37 = DAT_ram_4009f754;
            fVar34 = DAT_ram_4009f758;
            fVar21 = DAT_ram_4009f750;
            if (fVar38 <= DAT_ram_4009672c) {
              fVar37 = fVar38 * DAT_ram_4009b154 + DAT_ram_40099f6c;
              if (fVar35 < DAT_ram_4009672c) {
                fVar35 = DAT_ram_4009f078;
              }
              fVar34 = 0.0;
              if (0.0 <= fVar37) {
                fVar34 = fVar37 * DAT_ram_4009f090;
              }
              goto LAB_ram_4006fc06;
            }
          }
          uVar40 = (ulonglong)(uint)fVar21;
          if (DAT_ram_4009672c <= fVar35) goto LAB_ram_4006fc06;
        }
        param_1[0x814] = fVar37;
        *(ulonglong *)(param_1 + 0x815) = uVar40;
        param_1[0x819] = fVar38;
      }
      if ((float)*(undefined8 *)(param_1 + 0x81a) == fVar58) {
        fVar38 = param_1[0x816];
      }
      else {
        fVar38 = DAT_ram_4009f748;
        if ((((0.0 <= fVar58) && (fVar38 = DAT_ram_40096730, fVar58 <= fVar53)) &&
            (fVar34 = fVar58 * DAT_ram_4009f778 + DAT_ram_4009f748, fVar38 = DAT_ram_4009f714,
            DAT_ram_4009f714 <= fVar34)) && (fVar38 = DAT_ram_4009676c, fVar34 <= DAT_ram_4009676c))
        {
          fVar38 = fVar34;
        }
        param_1[0x816] = fVar38;
        param_1[0x81a] = fVar58;
      }
      if ((float)*(undefined8 *)(param_1 + 0x81b) == (float)uVar26) {
        uVar26 = *(ulonglong *)(param_1 + 0x817);
      }
      else {
        *(ulonglong *)(param_1 + 0x817) = uVar26;
        *(ulonglong *)(param_1 + 0x81b) = uVar26;
      }
      fVar58 = DAT_ram_40096760;
      fVar35 = (float)uVar26;
      fVar34 = fVar53;
      if ((float)*(undefined8 *)(param_1 + 0x81c) == DAT_ram_40096760) {
        fVar58 = param_1[0x818];
        if (fVar35 < 0.0) {
          fVar35 = 0.0;
        }
        else {
          if (fVar35 <= fVar53) goto LAB_ram_4006e8f0;
          fVar34 = 0.0;
          fVar35 = fVar53;
        }
      }
      else {
        param_1[0x818] = DAT_ram_40096760;
        param_1[0x81c] = fVar58;
        if (fVar35 < 0.0) {
          fVar35 = 0.0;
          goto LAB_ram_4006e90c;
        }
        if (fVar53 < fVar35) {
          fVar34 = 0.0;
          fVar35 = fVar53;
          goto LAB_ram_4006e90c;
        }
LAB_ram_4006e8f0:
        fVar34 = fVar53 - fVar35;
      }
      if (0.0 <= fVar58) {
        if (fVar53 < fVar58) {
          fVar58 = fVar53;
        }
      }
      else {
        fVar58 = 0.0;
      }
LAB_ram_4006e90c:
      fVar39 = DAT_ram_4009f780;
      fVar57 = DAT_ram_4009f77c;
      fVar36 = DAT_ram_4009675c;
      fVar21 = param_1[0x812];
      fVar59 = param_1[0x813];
      iVar16 = 1;
      if (param_9 != '\0') {
        iVar16 = 2;
      }
      if (param_3 == (float *)0x0) {
        param_3 = param_2;
      }
      iVar8 = 0;
      do {
        fVar15 = param_1[0x823];
        fVar33 = (float)*(undefined8 *)((int)param_2 + iVar8);
        fVar27 = param_1[0x833] * fVar38 + fVar33;
        fVar52 = param_1[0x824];
        fVar18 = (fVar21 + fVar53) * fVar36 * fVar57 + fVar39;
        fVar46 = param_1[0x825];
        fVar19 = param_1[0x826];
        param_1[0x823] = fVar27;
        fVar60 = -(fVar18 * param_1[0x82b]) + fVar18 * fVar27 + fVar15;
        fVar27 = fVar21 * fVar37;
        param_1[0x82b] = fVar60;
        param_1[0x824] = fVar60;
        fVar21 = fVar21 * (float)uVar40 + fVar59 * fVar37;
        fVar15 = (fVar59 + fVar53) * fVar36 * fVar57 + fVar39;
        fVar52 = -(fVar18 * param_1[0x82c]) + fVar18 * fVar60 + fVar52;
        fVar59 = fVar59 * (float)uVar40 - fVar27;
        param_1[0x82c] = fVar52;
        param_1[0x825] = fVar52;
        fVar52 = -(fVar18 * param_1[0x82d]) + fVar18 * fVar52 + fVar46;
        param_1[0x82d] = fVar52;
        param_1[0x826] = fVar52;
        fVar52 = -(fVar18 * param_1[0x82e]) + fVar18 * fVar52 + fVar19;
        param_1[0x82e] = fVar52;
        param_1[0x833] = fVar52;
        *(ulonglong *)((int)param_4 + iVar8) =
             (ulonglong)(uint)(fVar58 * (fVar35 * fVar52 + fVar33 * fVar34));
        if (iVar16 == 2) {
          fVar52 = *(float *)((int)param_3 + iVar8);
          fVar46 = param_1[0x827];
          fVar18 = param_1[0x834] * fVar38 + fVar52;
          fVar19 = param_1[0x828];
          fVar27 = param_1[0x829];
          param_1[0x827] = fVar18;
          fVar46 = -(fVar15 * param_1[0x82f]) + fVar15 * fVar18 + fVar46;
          param_1[0x82f] = fVar46;
          param_1[0x828] = fVar46;
          fVar19 = -(fVar15 * param_1[0x830]) + fVar15 * fVar46 + fVar19;
          param_1[0x830] = fVar19;
          param_1[0x829] = fVar19;
          fVar46 = param_1[0x82a];
          fVar19 = -(fVar15 * param_1[0x831]) + fVar15 * fVar19 + fVar27;
          param_1[0x831] = fVar19;
          param_1[0x82a] = fVar19;
          fVar15 = -(fVar15 * param_1[0x832]) + fVar15 * fVar19 + fVar46;
          param_1[0x832] = fVar15;
          param_1[0x834] = fVar15;
          if (param_5 != (float *)0x0) {
            *(ulonglong *)((int)param_5 + iVar8) =
                 (ulonglong)(uint)((fVar35 * fVar15 + fVar52 * fVar34) * fVar58);
          }
        }
        iVar8 = iVar8 + 4;
      } while (iVar8 != param_6 << 2);
      param_1[0x812] = fVar21;
      param_1[0x813] = fVar59;
      return;
    }
    if (param_8 == 8) {
      if (*(char *)(param_1 + 0x811) == '\b') goto LAB_ram_4006e26e;
LAB_ram_4006dfea:
      pfVar10 = param_1 + 0x11;
      do {
        iVar16 = memset(pfVar10,0,0x80);
        fence();
        pfVar10 = (float *)(iVar16 + 0x80);
      } while (pfVar10 != param_1 + 0x7f1);
      memset(param_1 + 0x7f1,0,0x80);
      fence();
      uVar26 = (ulonglong)_DAT_ram_4009f76c;
      *(ulonglong *)(param_1 + 5) = (ulonglong)DAT_ram_4009f770;
      *(ulonglong *)(param_1 + 4) = uVar26;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      memset(param_1 + 0x823,0,0x20);
      memset(param_1 + 0x82b,0,0x20);
      uVar26 = (ulonglong)(uint)DAT_ram_4009672c;
      param_1[0x833] = 0.0;
      param_1[0x821] = 0.0;
      param_1[0x834] = 0.0;
      param_1[0x822] = 0.0;
      param_1[0x812] = 0.0;
      *(ulonglong *)(param_1 + 0x813) = uVar26;
      pfVar10 = param_1 + 0xc48;
      do {
        iVar16 = memset(pfVar10,0,0x80);
        fence();
        pfVar10 = (float *)(iVar16 + 0x80);
      } while (pfVar10 != param_1 + 0x1028);
      memset(param_1 + 0x1028,0,0x80);
      fVar38 = DAT_ram_4009672c;
      fence();
      param_1[0x1048] = 0.0;
      param_1[0x104a] = 0.0;
      param_1[0x104c] = 0.0;
      param_1[0x1049] = 0.0;
      param_1[0x104b] = 0.0;
      param_1[0x104d] = 0.0;
      param_1[0x846] = 0.0;
      param_1[0x836] = 0.0;
      param_1[0x837] = fVar38;
      param_1[0x844] = 0.0;
      param_1[0x845] = 0.0;
      param_1[0x104e] = 0.0;
      param_1[0x105e] = fVar38;
      param_1[0x1050] = 0.0;
      param_1[0x1051] = fVar38;
      pfVar10 = param_1 + 0x1077;
      do {
        iVar16 = memset(pfVar10,0,0x80);
        fence();
        pfVar10 = (float *)(iVar16 + 0x80);
      } while (pfVar10 != param_1 + 0x5057);
      memset(param_1 + 0x5057,0,0x80);
      fVar38 = DAT_ram_4009f774;
      fence();
      param_1[0x1065] = DAT_ram_4009672c;
      param_1[0x1060] = 0.0;
      *(undefined1 *)(param_1 + 0x1061) = 0;
      *(undefined2 *)((int)param_1 + 0x4186) = 0;
      param_1[0x1062] = 0.0;
      param_1[0x1064] = 0.0;
      param_1[0x5077] = fVar38;
      memset(param_1 + 0x5078,0,0x20);
      memset(param_1 + 0x5080,0,0x20);
      *(undefined1 *)(param_1 + 0x5088) = 0;
      *(undefined1 *)((int)param_1 + 0x14221) = 0;
      *(undefined1 *)((int)param_1 + 0x14222) = 0;
      *(undefined1 *)((int)param_1 + 0x14223) = 0;
      *(undefined1 *)(param_1 + 0x5089) = 0;
      *(undefined1 *)((int)param_1 + 0x14225) = 0;
      *(undefined1 *)((int)param_1 + 0x14226) = 0;
      *(undefined1 *)((int)param_1 + 0x14227) = 0;
      memset(param_1 + 0x508a,0,0x20);
      *(undefined2 *)(param_1 + 0x50aa) = 0;
      *(undefined1 *)((int)param_1 + 0x142aa) = 0;
      FUN_ram_40071d38(param_1 + 0x50ab);
      FUN_ram_40074d8c(param_1 + 0x50b2);
      FUN_ram_40072570(param_1 + 0x5cb5);
      fVar38 = DAT_ram_40096728;
      uVar26 = (ulonglong)(uint)DAT_ram_40096728;
      *(char *)(param_1 + 0x811) = (char)param_8;
      *(ulonglong *)(param_1 + 8) = uVar26;
      *(ulonglong *)(param_1 + 9) = uVar26;
      *(ulonglong *)(param_1 + 10) = uVar26;
      *(ulonglong *)(param_1 + 0x819) = uVar26;
      *(ulonglong *)(param_1 + 0x81a) = uVar26;
      *(ulonglong *)(param_1 + 0x81b) = uVar26;
      *(ulonglong *)(param_1 + 0x81c) = uVar26;
      *(ulonglong *)(param_1 + 0x81d) = uVar26;
      param_1[0x83d] = fVar38;
      param_1[0x83e] = fVar38;
      param_1[0x83f] = fVar38;
      param_1[0x840] = fVar38;
      param_1[0x1058] = fVar38;
      param_1[0x1059] = fVar38;
      param_1[0x105a] = fVar38;
      param_1[0x105b] = fVar38;
      param_1[0x105c] = fVar38;
      param_1[0x105d] = fVar38;
      param_1[0x106f] = fVar38;
      param_1[0x1070] = fVar38;
      param_1[0x1071] = fVar38;
      param_1[0x1072] = fVar38;
      param_1[0x1073] = fVar38;
      goto LAB_ram_4006dc80;
    }
    if (param_8 == 9) {
      if (*(char *)(param_1 + 0x811) == '\t') goto LAB_ram_4006e348;
      goto LAB_ram_4006dfea;
    }
    if (param_8 == 10) {
      if (*(char *)(param_1 + 0x811) == '\n') goto LAB_ram_4006e424;
      goto LAB_ram_4006dfea;
    }
    if (param_8 == 0xb) {
LAB_ram_4006e2b6:
      if (*(byte *)(param_1 + 0x811) == param_8) goto LAB_ram_4006e2c2;
      goto LAB_ram_4006dfea;
    }
    if (param_8 != 0xc) {
      if (param_8 != 0x11) goto LAB_ram_4006df20;
      goto LAB_ram_4006e2b6;
    }
    if (*(char *)(param_1 + 0x811) != '\f') goto LAB_ram_4006dfea;
LAB_ram_4006e482:
    fVar53 = DAT_ram_4009f78c;
    fVar37 = DAT_ram_4009f788;
    fVar58 = DAT_ram_4009675c;
    fVar38 = DAT_ram_4009672c;
    if (param_7 == (float *)0x0) {
      uVar26 = (ulonglong)DAT_ram_4009b18c;
      fVar34 = DAT_ram_4009f230;
      fVar35 = DAT_ram_4009675c;
      fVar21 = DAT_ram_4009b144;
    }
    else {
      fVar34 = param_7[1];
      uVar26 = (ulonglong)(uint)fVar34;
      if (0.0 <= fVar34) {
        if (DAT_ram_4009672c < fVar34) {
          uVar26 = (ulonglong)(uint)DAT_ram_4009672c;
        }
      }
      else {
        uVar26 = 0;
      }
      fVar34 = param_7[2];
      if (0.0 <= fVar34) {
        if (DAT_ram_4009672c < fVar34) {
          fVar34 = DAT_ram_4009672c;
        }
      }
      else {
        fVar34 = 0.0;
      }
      fVar35 = param_7[3];
      if (0.0 <= fVar35) {
        if (DAT_ram_4009672c < fVar35) {
          fVar35 = DAT_ram_4009672c;
        }
      }
      else {
        fVar35 = 0.0;
      }
      fVar59 = param_7[4];
      if (0.0 <= fVar59) {
        fVar21 = DAT_ram_4009672c;
        if (DAT_ram_4009672c < fVar59) goto LAB_ram_4006e506;
      }
      else {
        fVar59 = 0.0;
      }
      fVar21 = fVar59;
    }
LAB_ram_4006e506:
    if ((float)*(undefined8 *)(param_1 + 0x81d) == (float)uVar26) {
      fVar59 = param_1[0x81e];
      uVar26 = *(ulonglong *)(param_1 + 0x81f);
    }
    else {
      fVar36 = (float)uVar26 * DAT_ram_40096730 + DAT_ram_40099f6c;
      *(ulonglong *)(param_1 + 0x81d) = uVar26;
      fVar59 = -(fVar36 * fVar37) + fVar53;
      uVar26 = (ulonglong)(uint)(fVar36 * fVar37 + fVar53);
      param_1[0x81e] = fVar59;
      *(ulonglong *)(param_1 + 0x81f) = uVar26;
    }
    if ((float)*(undefined8 *)(param_1 + 0x819) == fVar34) goto LAB_ram_4006e5aa;
    fVar53 = (float)*(undefined8 *)param_1;
    fVar37 = DAT_ram_4009f71c;
    if (DAT_ram_40099f28 < fVar53) {
      fVar57 = fVar38;
      fVar36 = DAT_ram_4009f74c;
      if (0.0 <= fVar34) goto LAB_ram_4006e54a;
LAB_ram_40070ae4:
      uVar40 = (ulonglong)(uint)fVar57;
      if (fVar38 <= fVar53) goto LAB_ram_4006e584;
    }
    else {
      fVar53 = DAT_ram_4009f078;
      if (0.0 <= fVar34) {
LAB_ram_4006e54a:
        fVar37 = DAT_ram_4009f758;
        fVar57 = DAT_ram_4009f750;
        fVar36 = DAT_ram_4009f754;
        if (fVar38 < fVar34) goto LAB_ram_40070ae4;
        fVar36 = fVar34 * DAT_ram_4009b154 + DAT_ram_40099f6c;
        if (fVar53 < fVar38) {
          fVar53 = DAT_ram_4009f078;
        }
        fVar37 = 0.0;
        if (0.0 <= fVar36) {
          fVar37 = fVar36 * DAT_ram_4009f090;
        }
      }
LAB_ram_4006e584:
      fVar36 = (float)FUN_ram_400009d2(fVar37 / fVar53);
      uVar40 = FUN_ram_40000712(fVar37 / fVar53);
    }
    param_1[0x814] = fVar36;
    *(ulonglong *)(param_1 + 0x815) = uVar40;
    param_1[0x819] = fVar34;
LAB_ram_4006e5aa:
    if ((float)*(undefined8 *)(param_1 + 0x81a) == fVar35) {
      fVar37 = param_1[0x816];
    }
    else {
      fVar37 = DAT_ram_4009f748;
      if (((0.0 <= fVar35) && (fVar37 = DAT_ram_40096730, fVar35 <= fVar38)) &&
         ((fVar53 = fVar35 * DAT_ram_4009f778 + DAT_ram_4009f748, fVar37 = DAT_ram_4009f714,
          DAT_ram_4009f714 <= fVar53 && (fVar37 = DAT_ram_4009676c, fVar53 <= DAT_ram_4009676c)))) {
        fVar37 = fVar53;
      }
      param_1[0x816] = fVar37;
      param_1[0x81a] = fVar35;
    }
    param_1[0x817] = fVar21;
    param_1[0x81b] = fVar21;
    if (0.0 <= fVar21) {
      if (fVar38 < fVar21) {
        fVar21 = fVar38;
      }
    }
    else {
      fVar21 = 0.0;
    }
    fVar53 = param_1[0x820];
    uVar40 = *(ulonglong *)(param_1 + 0x812);
    fVar34 = param_1[0x813];
    if (param_3 == (float *)0x0) {
      param_3 = param_2;
    }
    iVar16 = 0;
    while( true ) {
      fVar27 = (float)uVar40;
      fVar19 = (float)uVar26 - fVar59;
      fVar35 = *(float *)((int)param_2 + iVar16);
      fVar36 = param_1[0x823];
      fVar52 = fVar37 * param_1[0x833] + fVar35;
      fVar57 = param_1[0x824];
      fVar46 = (fVar27 + fVar38) * fVar58 * fVar19 + fVar59;
      fVar39 = param_1[0x825];
      fVar15 = param_1[0x826];
      param_1[0x823] = fVar52;
      fVar36 = -(fVar46 * param_1[0x82b]) + fVar46 * fVar52 + fVar36;
      param_1[0x82b] = fVar36;
      param_1[0x824] = fVar36;
      fVar59 = fVar19 * (fVar34 + fVar38) * fVar58 + fVar59;
      fVar36 = -(fVar46 * param_1[0x82c]) + fVar46 * fVar36 + fVar57;
      param_1[0x82c] = fVar36;
      param_1[0x825] = fVar36;
      fVar36 = -(fVar46 * param_1[0x82d]) + fVar46 * fVar36 + fVar39;
      param_1[0x82d] = fVar36;
      param_1[0x826] = fVar36;
      fVar36 = -(fVar46 * param_1[0x82e]) + fVar46 * fVar36 + fVar15;
      param_1[0x82e] = fVar36;
      param_1[0x833] = fVar36;
      fVar36 = fVar53 * (fVar36 - param_1[0x821]) + param_1[0x821];
      param_1[0x821] = fVar36;
      *(ulonglong *)((int)param_4 + iVar16) = (ulonglong)(uint)(fVar21 * (fVar36 - fVar35) + fVar35)
      ;
      if (param_9 != '\0') {
        fVar35 = *(float *)((int)param_3 + iVar16);
        fVar36 = param_1[0x827];
        fVar15 = param_1[0x834] * fVar37 + fVar35;
        fVar57 = param_1[0x828];
        param_1[0x827] = fVar15;
        fVar39 = param_1[0x82a];
        fVar36 = -(param_1[0x82f] * fVar59) + fVar59 * fVar15 + fVar36;
        param_1[0x82f] = fVar36;
        param_1[0x828] = fVar36;
        fVar57 = -(fVar59 * param_1[0x830]) + fVar36 * fVar59 + fVar57;
        fVar36 = param_1[0x829];
        param_1[0x830] = fVar57;
        param_1[0x829] = fVar57;
        fVar36 = -(fVar59 * param_1[0x831]) + fVar59 * fVar57 + fVar36;
        param_1[0x831] = fVar36;
        param_1[0x82a] = fVar36;
        fVar59 = -(fVar59 * param_1[0x832]) + fVar59 * fVar36 + fVar39;
        param_1[0x832] = fVar59;
        param_1[0x834] = fVar59;
        fVar59 = fVar53 * (fVar59 - param_1[0x822]) + param_1[0x822];
        param_1[0x822] = fVar59;
        if (param_5 != (float *)0x0) {
          *(ulonglong *)((int)param_5 + iVar16) =
               (ulonglong)(uint)((fVar59 - fVar35) * fVar21 + fVar35);
        }
      }
      iVar16 = iVar16 + 4;
      uVar40 = (ulonglong)
               (uint)((float)*(undefined8 *)(param_1 + 0x815) * fVar27 +
                     (float)*(undefined8 *)(param_1 + 0x814) * fVar34);
      fVar34 = (float)*(undefined8 *)(param_1 + 0x815) * fVar34 -
               (float)*(undefined8 *)(param_1 + 0x814) * fVar27;
      if (iVar16 == param_6 << 2) break;
      fVar59 = param_1[0x81e];
      uVar26 = *(ulonglong *)(param_1 + 0x81f);
    }
    *(ulonglong *)(param_1 + 0x812) = uVar40;
    param_1[0x813] = fVar34;
    return;
  }
  if ((param_5 == (float *)0x0) || (param_6 == 0)) {
    return;
  }
LAB_ram_4006df94:
  memset(param_5,0,param_6 << 2);
  return;
}

