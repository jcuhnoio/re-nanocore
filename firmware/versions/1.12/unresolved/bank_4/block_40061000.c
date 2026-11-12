/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40061000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40061c98.
 * REA evidence: ev_90d5bcea7ae12f79c66dcb9434d5cb6b1294fc8e6b5c6aa5acf8e1317fecc2e9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40061c98(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                     uint param_6,float *param_7,uint param_8,char param_9,int param_10)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  float in_register_00000100;
  float *pfVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  uint uVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float *pfVar26;
  float fVar27;
  float fVar28;
  float *pfVar29;
  float fVar30;
  uint uVar31;
  float fVar32;
  undefined8 *puVar33;
  float fVar34;
  float fVar35;
  uint uVar36;
  char cVar37;
  float *pfVar38;
  float *pfVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  ulonglong uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined *puVar52;
  float fVar53;
  undefined *puVar54;
  float fVar55;
  float fVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  undefined8 uVar61;
  undefined *puVar62;
  undefined *puVar63;
  ulonglong uVar64;
  float local_f0;
  float fStack_a4;
  
  if (param_10 != 0) {
    *(bool *)param_10 = param_9 != '\0' && (param_3 != (float *)0x0 && param_5 != (float *)0x0);
  }
  fVar34 = DAT_ram_4009675c;
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
  fVar17 = param_1[1];
  if ((fVar17 == 0.0) || ((uint)param_1[2] < 4)) {
    if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
LAB_ram_400620ca:
      if (param_2 != param_4) {
        FUN_ram_4000303c(param_4,param_2,param_6 << 2);
      }
      param_3 = param_4;
      if (param_5 == (float *)0x0) {
        return;
      }
      goto joined_r0x400620de;
    }
    if (param_5 == (float *)0x0) {
      pfVar26 = param_2 + param_6;
      do {
        uVar61 = *(undefined8 *)param_2;
        fVar17 = *param_3;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        *param_4 = ((float)uVar61 + fVar17) * fVar34;
        param_4 = param_4 + 1;
      } while (param_2 != pfVar26);
      return;
    }
LAB_ram_4006201e:
    if (param_2 != param_4) {
      FUN_ram_4000303c(param_4,param_2,param_6 << 2);
    }
joined_r0x400620de:
    if (param_5 == param_3) {
      return;
    }
    FUN_ram_4000303c(param_5,param_3,param_6 << 2);
    return;
  }
  uVar31 = (uint)*(byte *)(param_1 + 8);
  if (param_8 < 8) {
    if (param_8 != uVar31) goto LAB_ram_40061d26;
LAB_ram_40061fce:
    fVar17 = DAT_ram_40099f28;
    puVar63 = PTR_entry_ram_40096740;
    fVar34 = DAT_ram_4009672c;
    if (uVar31 == 1) {
      if (param_7 == (float *)0x0) {
        uVar59 = (ulonglong)DAT_ram_4009f298;
        uVar58 = (ulonglong)DAT_ram_4009f29c;
        uVar57 = (ulonglong)DAT_ram_4009f2a0;
      }
      else {
        fVar17 = *param_7;
        uVar59 = (ulonglong)(uint)fVar17;
        fVar45 = param_7[1];
        fVar16 = param_7[2];
        if (0.0 <= fVar17) {
          if (DAT_ram_4009672c < fVar17) {
            uVar59 = (ulonglong)(uint)DAT_ram_4009672c;
          }
        }
        else {
          uVar59 = 0;
        }
        if (0.0 <= fVar45) {
          uVar58 = (ulonglong)(uint)fVar45;
          if (DAT_ram_4009672c < fVar45) {
            uVar58 = (ulonglong)(uint)DAT_ram_4009672c;
          }
        }
        else {
          uVar58 = 0;
        }
        if (0.0 <= fVar16) {
          uVar57 = (ulonglong)(uint)fVar16;
          if (DAT_ram_4009672c < fVar16) {
            uVar57 = (ulonglong)(uint)DAT_ram_4009672c;
          }
        }
        else {
          uVar57 = 0;
        }
      }
      uVar44 = (ulonglong)(uint)DAT_ram_4009672c;
      fVar17 = (float)*(undefined8 *)param_1;
      if ((float)*(undefined8 *)param_1 <= DAT_ram_40099f28) {
        fVar17 = DAT_ram_4009678c;
      }
      fVar45 = param_1[2];
      fVar16 = (float)uVar59;
      if ((float)*(undefined8 *)(param_1 + 0xf) == fVar16) {
        fVar16 = param_1[0x44];
      }
      else {
        uVar64 = 0;
        if ((0.0 <= fVar16) && (uVar64 = uVar44, fVar16 <= DAT_ram_4009672c)) {
          uVar64 = uVar59;
        }
        fVar17 = ((float)uVar64 * DAT_ram_4009b148 + DAT_ram_40099f88) * (float)DAT_ram_4009f0ac *
                 fVar17;
        fVar16 = DAT_ram_4009672c;
        if (fVar17 < DAT_ram_4009672c) {
          fVar17 = DAT_ram_4009672c;
          if (1 < (uint)fVar45) goto LAB_ram_4006482c;
        }
        else {
          if (1 < (uint)fVar45) {
LAB_ram_4006482c:
            fVar16 = (float)((int)fVar45 - 2);
          }
          if (fVar17 <= fVar16) {
            fVar16 = fVar17;
          }
        }
        param_1[0x44] = fVar16;
        *(ulonglong *)(param_1 + 0xf) = uVar59;
      }
      fVar17 = (float)uVar58;
      if ((float)*(undefined8 *)(param_1 + 0x10) == fVar17) {
        fVar17 = param_1[0x46];
        goto LAB_ram_40062b10;
      }
      if (fVar17 < 0.0) {
        fVar51 = 0.0;
LAB_ram_40065190:
        fVar17 = fVar51 * DAT_ram_40096730 + 0.0;
      }
      else {
        fVar51 = fVar34;
        if (fVar34 < fVar17) goto LAB_ram_40065190;
        fVar17 = fVar17 * DAT_ram_40096730 + 0.0;
        if (0.0 <= fVar17) {
          if (DAT_ram_40096730 < fVar17) {
            fVar17 = DAT_ram_40096730;
          }
        }
        else {
          fVar17 = 0.0;
        }
      }
      param_1[0x46] = fVar17;
      *(ulonglong *)(param_1 + 0x10) = uVar58;
LAB_ram_40062b10:
      if ((float)*(undefined8 *)(param_1 + 0x11) == (float)uVar57) {
        uVar57 = (ulonglong)(uint)param_1[0x47];
      }
      else {
        param_1[0x47] = (float)uVar57;
        *(ulonglong *)(param_1 + 0x11) = uVar57;
      }
      fVar51 = (float)uVar57;
      if ((float)*(undefined8 *)(param_1 + 0x12) == fVar34) {
        fVar23 = param_1[0x48];
      }
      else {
        param_1[0x48] = fVar34;
        *(ulonglong *)(param_1 + 0x12) = uVar44;
        fVar23 = fVar34;
      }
      if (0.0 <= fVar17) {
        if (DAT_ram_40096730 < fVar17) {
          fVar17 = DAT_ram_40096730;
        }
      }
      else {
        fVar17 = 0.0;
      }
      if (0.0 <= fVar51) {
        if (fVar34 < fVar51) {
          fVar51 = fVar34;
        }
      }
      else {
        fVar51 = 0.0;
      }
      if (0.0 <= fVar23) {
        if (fVar34 < fVar23) {
          fVar23 = fVar34;
        }
      }
      else {
        fVar23 = 0.0;
      }
      fVar27 = param_1[0x45];
      fVar21 = fVar34 / (float)param_6;
      if (*(char *)(param_1 + 0x4d) == '\0') {
        param_1[0x49] = fVar16;
        param_1[0x4a] = fVar17;
        param_1[0x4b] = fVar51;
        param_1[0x4c] = fVar23;
        *(undefined1 *)(param_1 + 0x4d) = 1;
        fVar12 = fVar23;
        fVar50 = fVar51;
        fVar49 = fVar17;
        fVar48 = fVar16;
      }
      else {
        fVar12 = param_1[0x4c];
        fVar50 = param_1[0x4b];
        fVar49 = param_1[0x4a];
        fVar48 = param_1[0x49];
      }
      fVar28 = DAT_ram_4009a644;
      fVar25 = DAT_ram_4009675c;
      fVar51 = fVar51 - fVar50;
      fVar16 = fVar16 - fVar48;
      fVar17 = fVar17 - fVar49;
      fVar23 = fVar23 - fVar12;
      fVar24 = (float)(uint)fVar45 - (float)PTR_entry_ram_40096740;
      fVar32 = param_1[0x40];
      fVar42 = param_1[0x41];
      fVar40 = param_1[0x42];
      fVar41 = param_1[0x43];
      fVar20 = param_1[3];
      puVar33 = (undefined8 *)param_1[1];
      pfVar39 = param_2 + param_6;
      pfVar26 = param_5;
      pfVar14 = param_3;
      do {
        fVar19 = *param_2;
        if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
          fVar19 = (fVar19 + *pfVar14) * fVar25;
        }
        fVar56 = fVar27 * fVar32 + fVar48;
        if (fVar56 < fVar34) {
          fVar56 = fVar34;
        }
        if (fVar24 < fVar56) {
          fVar56 = fVar24;
        }
        fVar56 = (float)(uint)fVar20 - fVar56;
        if (fVar56 < 0.0) {
          fVar56 = fVar56 + (float)(uint)fVar45;
        }
        uVar31 = (uint)(-1 < (int)fVar56) * (int)fVar56;
        puVar7 = (undefined8 *)((int)puVar33 + (uVar31 + 1) * 4);
        if ((uint)fVar45 <= uVar31 + 1) {
          puVar7 = puVar33;
        }
        fVar56 = (float)*(undefined8 *)((int)puVar33 + uVar31 * 4) *
                 (fVar34 - (fVar56 - (float)uVar31)) + (fVar56 - (float)uVar31) * (float)*puVar7;
        fVar55 = param_1[0x29] * fVar56 + param_1[0x2e];
        fVar30 = fVar55 * param_1[0x30] + param_1[0x35];
        param_1[0x2e] = param_1[0x2f] + (param_1[0x2a] * fVar56 - fVar55 * param_1[0x2c]);
        param_1[0x2f] = param_1[0x2b] * fVar56 - fVar55 * param_1[0x2d];
        param_1[0x35] = param_1[0x36] + (fVar55 * param_1[0x31] - fVar30 * param_1[0x33]);
        param_1[0x36] = fVar55 * param_1[0x32] - fVar30 * param_1[0x34];
        *(float *)((int)puVar33 + (int)fVar20 * 4) = fVar30 * fVar49 + fVar19;
        fVar20 = (float)((int)fVar20 + 1 & -(uint)((uint)((int)fVar20 + 1) < (uint)fVar45));
        if (fVar50 < 0.0) {
          fVar30 = fVar30 * 0.0;
          fVar19 = fVar34;
        }
        else {
          fVar19 = 0.0;
          if (fVar50 <= fVar34) {
            fVar30 = fVar30 * fVar50;
            if (fVar50 <= fVar28) {
LAB_ram_40062df6:
              fVar19 = fVar34;
            }
            else {
              fVar19 = -((fVar50 - fVar28) * in_register_00000100) + fVar34;
              if (0.0 <= fVar19) {
                if (fVar34 < fVar19) goto LAB_ram_40062df6;
              }
              else {
                fVar19 = 0.0;
              }
            }
          }
        }
        fVar56 = (float)*(undefined8 *)param_2;
        if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
          fVar55 = fVar12 * (fVar56 * fVar19 + fVar30);
          if (param_5 == (float *)0x0) goto LAB_ram_40062de0;
          *param_4 = fVar55;
          *(ulonglong *)pfVar26 = (ulonglong)(uint)fVar55;
        }
        else {
          fVar55 = fVar12 * (fVar19 * (fVar56 + *pfVar14) * fVar25 + fVar30);
          if (param_5 == (float *)0x0) {
LAB_ram_40062de0:
            *param_4 = fVar55;
          }
          else {
            fVar56 = fVar56 - *pfVar14;
            fVar19 = fVar19 * fVar12 * fVar25;
            *param_4 = fVar19 * fVar56 + fVar55;
            *(ulonglong *)pfVar26 = (ulonglong)(uint)(-(fVar19 * fVar56) + fVar55);
          }
        }
        fVar19 = fVar40 * fVar32;
        param_2 = param_2 + 1;
        fVar48 = fVar48 + fVar16 * fVar21;
        fVar49 = fVar49 + fVar17 * fVar21;
        fVar32 = fVar41 * fVar32 + fVar40 * fVar42;
        fVar42 = fVar41 * fVar42 - fVar19;
        fVar50 = fVar50 + fVar51 * fVar21;
        fVar12 = fVar12 + fVar23 * fVar21;
        param_4 = param_4 + 1;
        pfVar26 = pfVar26 + 1;
        pfVar14 = pfVar14 + 1;
        if (param_2 == pfVar39) {
          param_1[3] = fVar20;
          param_1[0x40] = fVar32;
          param_1[0x41] = fVar42;
          param_1[0x49] = fVar48;
          param_1[0x4a] = fVar49;
          param_1[0x4b] = fVar50;
          param_1[0x4c] = fVar12;
          return;
        }
      } while( true );
    }
    if (uVar31 != 2) {
      if (uVar31 == 3) {
        FUN_ram_40060b4c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_9);
        return;
      }
      if (uVar31 != 4) {
        if (uVar31 != 5) {
          if (uVar31 != 6) {
            if (uVar31 != 7) goto LAB_ram_40062004;
            if (param_7 == (float *)0x0) {
              uVar59 = (ulonglong)(uint)DAT_ram_4009f0bc;
              uVar58 = (ulonglong)DAT_ram_4009f2fc;
              fVar16 = DAT_ram_4009f2f8;
              fVar51 = DAT_ram_4009f2dc;
              fVar23 = DAT_ram_4009f2f4;
LAB_ram_40064cd0:
              uVar57 = (ulonglong)(uint)DAT_ram_4009672c;
              if (fVar23 <= DAT_ram_4009672c) {
                uVar57 = (ulonglong)(uint)fVar23;
              }
            }
            else {
              fVar45 = param_7[2];
              uVar58 = (ulonglong)(uint)fVar45;
              fVar23 = *param_7;
              uVar59 = (ulonglong)(uint)param_7[1];
              fVar16 = param_7[3];
              fVar51 = param_7[4];
              if (0.0 <= fVar45) {
                if (DAT_ram_4009672c < fVar45) {
                  uVar58 = (ulonglong)(uint)DAT_ram_4009672c;
                }
              }
              else {
                uVar58 = 0;
              }
              if (0.0 <= fVar16) {
                if (DAT_ram_4009672c < fVar16) {
                  fVar16 = DAT_ram_4009672c;
                }
              }
              else {
                fVar16 = 0.0;
              }
              if (0.0 <= fVar51) {
                if (DAT_ram_4009672c < fVar51) {
                  fVar51 = DAT_ram_4009672c;
                }
              }
              else {
                fVar51 = 0.0;
              }
              if (0.0 <= fVar23) goto LAB_ram_40064cd0;
              uVar57 = 0;
            }
            uVar44 = (ulonglong)(uint)DAT_ram_4009672c;
            if (0.0 <= (float)uVar59) {
              if (DAT_ram_4009672c < (float)uVar59) {
                uVar59 = uVar44;
              }
            }
            else {
              uVar59 = 0;
            }
            fVar45 = *param_1;
            fVar23 = param_1[2];
            fVar21 = (float)uVar57;
            if ((float)*(undefined8 *)(param_1 + 0xf) == fVar21) {
              fVar27 = param_1[0x65];
            }
            else {
              fVar27 = DAT_ram_4009672c;
              if (DAT_ram_40099f28 <= fVar45) {
                fVar48 = fVar45;
                if (0.0 <= fVar21) {
                  uVar64 = uVar44;
                  if (fVar21 <= DAT_ram_4009672c) {
                    uVar64 = uVar57;
                  }
                }
                else {
                  uVar64 = 0;
                }
LAB_ram_40062616:
                fVar49 = ((float)uVar64 * DAT_ram_4009b148 + DAT_ram_40099f88) *
                         (float)DAT_ram_4009f0ac * fVar48;
                if (DAT_ram_4009672c <= fVar49) {
                  fVar21 = DAT_ram_4009672c;
                  if (1 < (uint)fVar23) goto LAB_ram_4006264e;
                }
                else {
                  fVar49 = DAT_ram_4009672c;
                  if ((uint)fVar23 < 2) goto LAB_ram_40062660;
LAB_ram_4006264e:
                  fVar21 = (float)((int)fVar23 - 2);
                }
                fVar27 = fVar49;
                if (fVar21 < fVar49) {
                  fVar27 = fVar21;
                }
              }
              else {
                fVar49 = DAT_ram_4009f25c;
                if ((0.0 <= fVar21) &&
                   (uVar64 = uVar57, fVar48 = DAT_ram_4009678c, fVar49 = DAT_ram_4009f260,
                   fVar21 <= DAT_ram_4009672c)) goto LAB_ram_40062616;
                if (1 < (uint)fVar23) goto LAB_ram_4006264e;
              }
LAB_ram_40062660:
              param_1[0x65] = fVar27;
              *(ulonglong *)(param_1 + 0xf) = uVar57;
            }
            fVar21 = (float)uVar59;
            if ((float)*(undefined8 *)(param_1 + 0x10) == fVar21) {
              fVar21 = param_1[0x66];
            }
            else {
              if (fVar21 < 0.0) {
                fVar48 = 0.0;
LAB_ram_400654fa:
                fVar21 = fVar48 * DAT_ram_40096730 + 0.0;
              }
              else {
                fVar48 = fVar34;
                if (fVar34 < fVar21) goto LAB_ram_400654fa;
                fVar21 = fVar21 * DAT_ram_40096730 + 0.0;
                if (0.0 <= fVar21) {
                  if (DAT_ram_40096730 < fVar21) {
                    fVar21 = DAT_ram_40096730;
                  }
                }
                else {
                  fVar21 = 0.0;
                }
              }
              param_1[0x66] = fVar21;
              *(ulonglong *)(param_1 + 0x10) = uVar59;
            }
            puVar63 = DAT_ram_4009f0ac;
            fVar48 = DAT_ram_40099f50;
            fVar49 = (float)uVar58;
            if ((float)*(undefined8 *)(param_1 + 0x11) == fVar49) {
              fVar50 = param_1[0x69];
            }
            else {
              fVar50 = fVar45;
              if (fVar45 < fVar17) {
                fVar50 = DAT_ram_4009678c;
              }
              uVar59 = 0;
              if ((0.0 <= fVar49) && (uVar59 = uVar44, fVar49 <= fVar34)) {
                uVar59 = uVar58;
              }
              *(ulonglong *)(param_1 + 0x11) = uVar58;
              fVar50 = ((float)uVar59 * fVar48 + 0.0) * (float)puVar63 * fVar50;
              param_1[0x69] = fVar50;
            }
            if ((float)*(undefined8 *)(param_1 + 0x12) == fVar16) {
              fVar48 = param_1[0x73];
              fVar49 = param_1[0x74];
              goto LAB_ram_4006269a;
            }
            if (fVar16 < 0.0) {
              fVar48 = 0.0;
LAB_ram_400654ac:
              fVar48 = fVar48 * DAT_ram_4009b154 + DAT_ram_40099f6c;
              param_1[0x6a] = fVar48;
              fVar49 = DAT_ram_4009678c;
              if (fVar17 <= fVar45) {
                fVar12 = fVar45 * DAT_ram_4009f22c;
                fVar49 = fVar45;
LAB_ram_400654dc:
                if (fVar12 < fVar48) {
                  fVar48 = fVar12;
                }
              }
            }
            else {
              fVar48 = fVar34;
              if (fVar34 < fVar16) goto LAB_ram_400654ac;
              fVar48 = fVar16 * DAT_ram_4009b154 + DAT_ram_40099f6c;
              param_1[0x6a] = fVar48;
              fVar49 = fVar45;
              if (fVar45 < fVar17) {
                fVar49 = DAT_ram_4009678c;
              }
              if (0.0 <= fVar48) {
                fVar12 = fVar49 * DAT_ram_4009f22c;
                goto LAB_ram_400654dc;
              }
              fVar48 = 0.0;
            }
            fVar49 = (fVar48 / fVar49) * DAT_ram_4009f090;
            fVar48 = (float)FUN_ram_400009d2(fVar49);
            param_1[0x73] = fVar48;
            fVar49 = (float)FUN_ram_40000712(fVar49);
            param_1[0x74] = fVar49;
            param_1[0x12] = fVar16;
LAB_ram_4006269a:
            if ((float)*(undefined8 *)(param_1 + 0x13) == fVar51) {
              fVar51 = param_1[0x67];
            }
            else {
              param_1[0x67] = fVar51;
              param_1[0x13] = fVar51;
            }
            if ((float)*(undefined8 *)(param_1 + 0x14) == fVar34) {
              fVar16 = param_1[0x68];
            }
            else {
              param_1[0x68] = fVar34;
              *(ulonglong *)(param_1 + 0x14) = uVar44;
              fVar16 = fVar34;
            }
            if (0.0 <= fVar21) {
              if (DAT_ram_40096730 < fVar21) {
                fVar21 = DAT_ram_40096730;
              }
            }
            else {
              fVar21 = 0.0;
            }
            if (0.0 <= fVar51) {
              if (fVar34 < fVar51) {
                fVar51 = fVar34;
              }
            }
            else {
              fVar51 = 0.0;
            }
            if (0.0 <= fVar16) {
              if (fVar34 < fVar16) {
                fVar16 = fVar34;
              }
            }
            else {
              fVar16 = 0.0;
            }
            fVar12 = DAT_ram_4009f300;
            if (fVar17 <= fVar45) {
              fVar12 = fVar45 * DAT_ram_4009a374;
            }
            if (0.0 <= fVar50) {
              if (fVar12 < fVar50) {
                fVar50 = fVar12;
              }
            }
            else {
              fVar50 = 0.0;
            }
            fVar17 = fVar34 / (float)param_6;
            if (*(char *)((int)param_1 + 0x24a) == '\0') {
              param_1[0x6b] = fVar27;
              param_1[0x6c] = fVar21;
              param_1[0x6d] = fVar51;
              param_1[0x6e] = fVar16;
              *(undefined1 *)((int)param_1 + 0x24a) = 1;
              fVar42 = fVar16;
              fVar12 = fVar21;
              fVar45 = fVar27;
              fVar32 = fVar51;
            }
            else {
              fVar45 = param_1[0x6b];
              fVar12 = param_1[0x6c];
              fVar32 = param_1[0x6d];
              fVar42 = param_1[0x6e];
            }
            fVar20 = DAT_ram_4009a644;
            fVar28 = DAT_ram_40099f30;
            fVar25 = DAT_ram_4009675c;
            puVar54 = DAT_ram_40096744;
            puVar63 = PTR_entry_ram_40096740;
            fVar27 = fVar27 - fVar45;
            fVar51 = fVar51 - fVar32;
            fVar21 = fVar21 - fVar12;
            fVar16 = fVar16 - fVar42;
            fVar24 = (float)(uint)fVar23 - (float)PTR_entry_ram_40096740;
            fVar40 = param_1[0x71];
            fVar41 = param_1[0x72];
            fVar19 = param_1[3];
            puVar33 = (undefined8 *)param_1[1];
            pfVar39 = param_2 + param_6;
            pfVar26 = param_5;
            pfVar14 = param_3;
            do {
              fVar56 = (float)*(undefined8 *)param_2;
              if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
                fVar56 = (fVar56 + *pfVar14) * fVar25;
              }
              fVar55 = fVar50 * fVar40 + fVar45;
              if (fVar55 < fVar34) {
                fVar55 = fVar34;
              }
              if (fVar24 < fVar55) {
                fVar55 = fVar24;
              }
              fVar55 = (float)(uint)fVar19 - fVar55;
              if (fVar55 < 0.0) {
                fVar55 = fVar55 + (float)(uint)fVar23;
              }
              uVar31 = (uint)(-1 < (int)fVar55) * (int)fVar55;
              puVar7 = (undefined8 *)((int)puVar33 + (uVar31 + 1) * 4);
              if ((uint)fVar23 <= uVar31 + 1) {
                puVar7 = puVar33;
              }
              fVar55 = (float)*(undefined8 *)((int)puVar33 + uVar31 * 4) *
                       (fVar34 - (fVar55 - (float)uVar31)) +
                       (fVar55 - (float)uVar31) * (float)*puVar7;
              fVar56 = fVar55 * fVar12 + fVar56;
              uVar59 = (ulonglong)(uint)fVar56;
              if (fVar56 < (float)puVar54) {
                uVar59 = ZEXT48(puVar54);
              }
              else if ((float)puVar63 < fVar56) {
                uVar59 = ZEXT48(puVar63);
              }
              *(ulonglong *)((int)puVar33 + (int)fVar19 * 4) = uVar59;
              fVar19 = (float)((int)fVar19 + 1 & -(uint)((uint)((int)fVar19 + 1) < (uint)fVar23));
              if (fVar32 < 0.0) {
                fVar55 = fVar55 * 0.0;
                fVar56 = fVar34;
              }
              else {
                fVar56 = 0.0;
                if (fVar32 <= fVar34) {
                  fVar55 = fVar55 * fVar32;
                  if (fVar32 <= fVar20) {
LAB_ram_40062a32:
                    fVar56 = fVar34;
                  }
                  else {
                    fVar56 = -((fVar32 - fVar20) * fVar28) + fVar34;
                    if (0.0 <= fVar56) {
                      if (fVar34 < fVar56) goto LAB_ram_40062a32;
                    }
                    else {
                      fVar56 = 0.0;
                    }
                  }
                }
              }
              fVar30 = (float)*(undefined8 *)param_2;
              if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
                fVar56 = fVar42 * (fVar30 * fVar56 + fVar55);
                *param_4 = fVar56;
                if (param_5 != (float *)0x0) {
                  *(ulonglong *)pfVar26 = (ulonglong)(uint)fVar56;
                }
              }
              else {
                fVar55 = fVar42 * (fVar56 * (fVar30 + *pfVar14) * fVar25 + fVar55);
                if (param_5 == (float *)0x0) {
                  *param_4 = fVar55;
                }
                else {
                  fVar30 = fVar30 - *pfVar14;
                  fVar56 = fVar56 * fVar42 * fVar25;
                  *param_4 = fVar56 * fVar30 + fVar55;
                  *(ulonglong *)pfVar26 = (ulonglong)(uint)(-(fVar56 * fVar30) + fVar55);
                }
              }
              fVar56 = fVar40 * fVar48;
              param_2 = param_2 + 1;
              fVar45 = fVar45 + fVar27 * fVar17;
              fVar12 = fVar12 + fVar21 * fVar17;
              fVar40 = fVar40 * fVar49 + fVar41 * fVar48;
              fVar41 = fVar41 * fVar49 - fVar56;
              fVar32 = fVar32 + fVar51 * fVar17;
              fVar42 = fVar42 + fVar16 * fVar17;
              param_4 = param_4 + 1;
              pfVar26 = pfVar26 + 1;
              pfVar14 = pfVar14 + 1;
              if (pfVar39 == param_2) {
                param_1[3] = fVar19;
                param_1[0x6b] = fVar45;
                param_1[0x6c] = fVar12;
                param_1[0x6d] = fVar32;
                param_1[0x6e] = fVar42;
                param_1[0x71] = fVar40;
                param_1[0x72] = fVar41;
                return;
              }
            } while( true );
          }
          if (param_7 == (float *)0x0) {
            uVar59 = (ulonglong)(uint)DAT_ram_4009f24c;
            uVar58 = (ulonglong)DAT_ram_4009f2e8;
            uVar57 = (ulonglong)DAT_ram_4009f2ec;
            fVar17 = DAT_ram_4009f24c;
            fVar45 = DAT_ram_4009f2f0;
LAB_ram_40064bb0:
            uVar44 = (ulonglong)(uint)fVar45;
            if (DAT_ram_4009672c < fVar45) {
              uVar44 = (ulonglong)(uint)DAT_ram_4009672c;
            }
          }
          else {
            fVar45 = param_7[2];
            uVar57 = (ulonglong)(uint)fVar45;
            uVar58 = (ulonglong)(uint)param_7[1];
            fVar17 = param_7[3];
            fVar16 = param_7[4];
            if (fVar45 < 0.0) {
              uVar57 = 0;
            }
            else if (DAT_ram_4009672c < fVar45) {
              uVar57 = (ulonglong)(uint)DAT_ram_4009672c;
            }
            if (fVar17 < 0.0) {
              fVar17 = 0.0;
            }
            else if (DAT_ram_4009672c < fVar17) {
              fVar17 = DAT_ram_4009672c;
            }
            if (fVar16 < 0.0) {
              uVar59 = 0;
            }
            else {
              uVar59 = (ulonglong)(uint)fVar16;
              if (DAT_ram_4009672c < fVar16) {
                uVar59 = (ulonglong)(uint)DAT_ram_4009672c;
              }
            }
            fVar45 = *param_7;
            if (0.0 <= *param_7) goto LAB_ram_40064bb0;
            uVar44 = 0;
          }
          uVar64 = (ulonglong)(uint)DAT_ram_4009672c;
          if (0.0 <= (float)uVar58) {
            if (DAT_ram_4009672c < (float)uVar58) {
              uVar58 = uVar64;
            }
          }
          else {
            uVar58 = 0;
          }
          fVar45 = (float)uVar44;
          if ((float)*(undefined8 *)(param_1 + 0xf) != fVar45) {
            fVar23 = param_1[2];
            fVar51 = (float)*(undefined8 *)param_1;
            fVar16 = DAT_ram_4009672c;
            if (DAT_ram_40099f28 <= fVar51) {
              if (0.0 <= fVar45) {
                uVar60 = uVar64;
                if (fVar45 <= DAT_ram_4009672c) {
                  uVar60 = uVar44;
                }
              }
              else {
                uVar60 = 0;
              }
LAB_ram_40064250:
              fVar21 = ((float)uVar60 * DAT_ram_4009b148 + DAT_ram_40099f88) *
                       (float)DAT_ram_4009f0ac * fVar51;
              if (DAT_ram_4009672c <= fVar21) {
                fVar45 = DAT_ram_4009672c;
                if (1 < (uint)fVar23) goto LAB_ram_40064288;
              }
              else {
                fVar21 = DAT_ram_4009672c;
                if ((uint)fVar23 < 2) goto LAB_ram_40064298;
LAB_ram_40064288:
                fVar45 = (float)((int)fVar23 - 2);
              }
              fVar16 = fVar21;
              if (fVar45 < fVar21) {
                fVar16 = fVar45;
              }
            }
            else {
              fVar21 = DAT_ram_4009f25c;
              if ((0.0 <= fVar45) &&
                 (uVar60 = uVar44, fVar51 = DAT_ram_4009678c, fVar21 = DAT_ram_4009f260,
                 fVar45 <= DAT_ram_4009672c)) goto LAB_ram_40064250;
              if (1 < (uint)fVar23) goto LAB_ram_40064288;
            }
LAB_ram_40064298:
            param_1[0x65] = fVar16;
            *(ulonglong *)(param_1 + 0xf) = uVar44;
          }
          fVar45 = (float)uVar58;
          if ((float)*(undefined8 *)(param_1 + 0x10) == fVar45) goto LAB_ram_400642de;
          if (0.0 <= fVar45) {
            fVar16 = fVar34;
            if (fVar34 < fVar45) goto LAB_ram_40065410;
            fVar45 = fVar45 * DAT_ram_40096730 + 0.0;
            if (fVar45 < 0.0) {
              fVar16 = 0.0;
            }
            else {
              fVar16 = DAT_ram_40096730;
              if (fVar45 <= DAT_ram_40096730) {
                fVar16 = fVar45;
              }
            }
          }
          else {
            fVar16 = 0.0;
LAB_ram_40065410:
            fVar16 = fVar16 * DAT_ram_40096730 + 0.0;
          }
          param_1[0x66] = fVar16;
          *(ulonglong *)(param_1 + 0x10) = uVar58;
LAB_ram_400642de:
          if ((float)*(undefined8 *)(param_1 + 0x11) != (float)uVar57) {
            param_1[0x69] = (float)uVar57;
            *(ulonglong *)(param_1 + 0x11) = uVar57;
          }
          if ((float)*(undefined8 *)(param_1 + 0x12) != fVar17) {
            FUN_ram_4006070c(fVar17,param_1);
            param_1[0x6a] = fVar17;
            param_1[0x12] = fVar17;
          }
          if ((float)*(undefined8 *)(param_1 + 0x13) == (float)uVar59) {
            uVar59 = (ulonglong)(uint)param_1[0x67];
          }
          else {
            param_1[0x67] = (float)uVar59;
            *(ulonglong *)(param_1 + 0x13) = uVar59;
          }
          fVar17 = (float)uVar59;
          if ((float)*(undefined8 *)(param_1 + 0x14) == fVar34) {
            fVar45 = param_1[0x68];
          }
          else {
            param_1[0x68] = fVar34;
            *(ulonglong *)(param_1 + 0x14) = uVar64;
            fVar45 = fVar34;
          }
          uVar3 = DAT_ram_40096760;
          fVar16 = param_1[0x66];
          if (fVar16 < 0.0) {
            fVar16 = 0.0;
          }
          else if (DAT_ram_40096730 < fVar16) {
            fVar16 = DAT_ram_40096730;
          }
          if (fVar17 < 0.0) {
            fVar17 = 0.0;
          }
          else if (fVar34 < fVar17) {
            fVar17 = fVar34;
          }
          if (fVar45 < 0.0) {
            fVar45 = 0.0;
          }
          else if (fVar34 < fVar45) {
            fVar45 = fVar34;
          }
          fVar23 = param_1[0x69];
          fVar21 = param_1[0x65];
          fVar51 = fVar34 / (float)param_6;
          fVar27 = 0.0;
          if ((0.0 <= fVar23) &&
             ((fVar48 = fVar34, fVar34 < fVar23 ||
              (fVar27 = 0.0, fVar48 = fVar23, DAT_ram_40096748 < fVar23)))) {
            if (param_1[0x80] != fVar48) {
              param_1[0x80] = fVar48;
              fVar23 = (float)FUN_ram_40000d44(fVar48,uVar3);
              param_1[0x81] = fVar23 * DAT_ram_4009a644;
            }
            fVar27 = param_1[0x81];
          }
          if (*(char *)((int)param_1 + 0x24a) == '\0') {
            param_1[0x6b] = fVar21;
            param_1[0x6c] = fVar16;
            param_1[0x6d] = fVar17;
            param_1[0x6e] = fVar45;
            *(undefined1 *)((int)param_1 + 0x24a) = 1;
            fVar50 = fVar45;
            fVar23 = fVar21;
            fVar49 = fVar17;
            fVar48 = fVar16;
          }
          else {
            fVar50 = param_1[0x6e];
            fVar23 = param_1[0x6b];
            fVar49 = param_1[0x6d];
            fVar48 = param_1[0x6c];
          }
          fVar41 = DAT_ram_4009a644;
          fVar40 = DAT_ram_40099f30;
          fVar42 = DAT_ram_4009675c;
          fVar32 = DAT_ram_40096748;
          puVar54 = DAT_ram_40096744;
          puVar63 = PTR_entry_ram_40096740;
          fVar28 = param_1[2];
          fVar21 = fVar21 - fVar23;
          fVar16 = fVar16 - fVar48;
          fVar17 = fVar17 - fVar49;
          fVar45 = fVar45 - fVar50;
          puVar33 = (undefined8 *)param_1[1];
          fVar12 = (float)(uint)fVar28 - (float)PTR_entry_ram_40096740;
          fVar25 = param_1[4];
          fVar24 = param_1[3];
          uVar31 = 0;
          pfVar26 = param_5;
          pfVar14 = param_3;
          do {
            fVar20 = (float)*(undefined8 *)param_2;
            if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
              fVar20 = (fVar20 + *pfVar14) * fVar42;
            }
            fVar19 = fVar34;
            if ((fVar34 <= fVar23) && (fVar19 = fVar12, fVar23 <= fVar12)) {
              fVar19 = fVar23;
            }
            fVar19 = (float)(uint)fVar24 - fVar19;
            if (fVar19 < 0.0) {
              fVar19 = fVar19 + (float)(uint)fVar28;
            }
            uVar36 = (uint)(-1 < (int)fVar19) * (int)fVar19;
            puVar7 = (undefined8 *)((int)puVar33 + (uVar36 + 1) * 4);
            if ((uint)fVar28 <= uVar36 + 1) {
              puVar7 = puVar33;
            }
            fVar19 = (float)*(undefined8 *)((int)puVar33 + uVar36 * 4) *
                     (fVar34 - (fVar19 - (float)uVar36)) + (fVar19 - (float)uVar36) * (float)*puVar7
            ;
            fVar56 = fVar19;
            if ((fVar25 != 0.0) && (fVar32 < fVar27)) {
              fVar55 = 0.0;
              if ((0.0 <= fVar27) && (fVar55 = fVar41, fVar27 <= fVar41)) {
                fVar55 = fVar27;
              }
              fVar30 = (float)(uint)*(ushort *)((int)param_1 + 0x23a);
              if (fVar30 == 0.0) {
                fVar30 = 0.0;
              }
              else {
                fVar35 = param_1[5];
                pfVar39 = (float *)((int)fVar25 + (uint)*(ushort *)((int)param_1 + 0x242) * 4);
                uVar36 = *(ushort *)((int)param_1 + 0x242) + 1;
                fVar56 = -(fVar55 * fVar19) + *pfVar39;
                *pfVar39 = fVar55 * fVar56 + fVar19;
                *(ushort *)((int)param_1 + 0x242) =
                     (ushort)(uVar36 * 0x10000 >> 0x10) &
                     -(ushort)((uVar36 & 0xffff) < (uint)fVar30);
                fVar19 = fVar56;
                if ((uint)fVar35 <= (uint)fVar30) goto LAB_ram_4006460c;
              }
              uVar36 = (uint)*(ushort *)(param_1 + 0x8f);
              if (uVar36 != 0) {
                fVar35 = param_1[5];
                puVar8 = (ulonglong *)
                         ((int)fVar25 + ((uint)*(ushort *)(param_1 + 0x91) + (int)fVar30) * 4);
                uVar13 = *(ushort *)(param_1 + 0x91) + 1;
                fVar56 = -(fVar55 * fVar19) + (float)*puVar8;
                fVar30 = (float)((int)fVar30 + uVar36);
                *puVar8 = (ulonglong)(uint)(fVar56 * fVar55 + fVar19);
                *(ushort *)(param_1 + 0x91) =
                     (ushort)(uVar13 * 0x10000 >> 0x10) & -(ushort)((uVar13 & 0xffff) < uVar36);
                fVar19 = fVar56;
                if ((uint)fVar35 <= (uint)fVar30) goto LAB_ram_4006460c;
              }
              uVar36 = (uint)*(ushort *)((int)param_1 + 0x23e);
              if (uVar36 != 0) {
                fVar35 = param_1[5];
                pfVar39 = (float *)((int)fVar25 +
                                   ((uint)*(ushort *)((int)param_1 + 0x246) + (int)fVar30) * 4);
                uVar13 = *(ushort *)((int)param_1 + 0x246) + 1;
                fVar56 = -(fVar55 * fVar19) + *pfVar39;
                fVar30 = (float)((int)fVar30 + uVar36);
                *pfVar39 = fVar56 * fVar55 + fVar19;
                *(ushort *)((int)param_1 + 0x246) =
                     (ushort)(uVar13 * 0x10000 >> 0x10) & -(ushort)((uVar13 & 0xffff) < uVar36);
                fVar19 = fVar56;
                if ((uint)fVar35 <= (uint)fVar30) goto LAB_ram_4006460c;
              }
              uVar1 = *(ushort *)(param_1 + 0x90);
              fVar56 = fVar19;
              if (uVar1 != 0) {
                pfVar39 = (float *)((int)fVar25 +
                                   ((int)fVar30 + (uint)*(ushort *)(param_1 + 0x92)) * 4);
                uVar36 = *(ushort *)(param_1 + 0x92) + 1;
                fVar56 = -(fVar55 * fVar19) + *pfVar39;
                *(ulonglong *)pfVar39 = (ulonglong)(uint)(fVar55 * fVar56 + fVar19);
                *(ushort *)(param_1 + 0x92) =
                     (ushort)(uVar36 * 0x10000 >> 0x10) & -(ushort)((uVar36 & 0xffff) < (uint)uVar1)
                ;
              }
            }
LAB_ram_4006460c:
            fVar19 = param_1[0x4e] * fVar56 + param_1[0x53];
            fVar55 = fVar19 * param_1[0x55] + param_1[0x5a];
            fVar20 = fVar55 * fVar48 + fVar20;
            uVar59 = (ulonglong)(uint)fVar20;
            param_1[0x53] = param_1[0x54] + (param_1[0x4f] * fVar56 - fVar19 * param_1[0x51]);
            param_1[0x54] = param_1[0x50] * fVar56 - fVar19 * param_1[0x52];
            param_1[0x5a] = param_1[0x5b] + (fVar19 * param_1[0x56] - fVar55 * param_1[0x58]);
            param_1[0x5b] = fVar19 * param_1[0x57] - fVar55 * param_1[0x59];
            if (fVar20 < (float)puVar54) {
              uVar59 = ZEXT48(puVar54);
            }
            else if ((float)puVar63 < fVar20) {
              uVar59 = ZEXT48(puVar63);
            }
            *(ulonglong *)((int)puVar33 + (int)fVar24 * 4) = uVar59;
            fVar24 = (float)((int)fVar24 + 1 & -(uint)((uint)((int)fVar24 + 1) < (uint)fVar28));
            if (fVar49 < 0.0) {
              fVar55 = fVar55 * 0.0;
              fVar20 = fVar34;
            }
            else {
              fVar20 = 0.0;
              if (fVar49 <= fVar34) {
                fVar55 = fVar55 * fVar49;
                if (fVar49 <= fVar41) {
LAB_ram_4006474c:
                  fVar20 = fVar34;
                }
                else {
                  fVar20 = -((fVar49 - fVar41) * fVar40) + fVar34;
                  if (0.0 <= fVar20) {
                    if (fVar34 < fVar20) goto LAB_ram_4006474c;
                  }
                  else {
                    fVar20 = 0.0;
                  }
                }
              }
            }
            fVar19 = (float)*(undefined8 *)param_2;
            if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
              fVar56 = fVar50 * (fVar19 * fVar20 + fVar55);
              if (param_5 == (float *)0x0) goto LAB_ram_40064730;
              *param_4 = fVar56;
              *pfVar26 = fVar56;
            }
            else {
              fVar56 = fVar50 * (fVar20 * (fVar19 + *pfVar14) * fVar42 + fVar55);
              if (param_5 == (float *)0x0) {
LAB_ram_40064730:
                *param_4 = fVar56;
              }
              else {
                fVar19 = fVar19 - *pfVar14;
                fVar20 = fVar20 * fVar50 * fVar42;
                *param_4 = fVar20 * fVar19 + fVar56;
                *pfVar26 = -(fVar20 * fVar19) + fVar56;
              }
            }
            uVar31 = uVar31 + 1;
            fVar23 = fVar23 + fVar21 * fVar51;
            fVar48 = fVar48 + fVar16 * fVar51;
            fVar49 = fVar49 + fVar17 * fVar51;
            fVar50 = fVar50 + fVar45 * fVar51;
            param_2 = param_2 + 1;
            param_4 = param_4 + 1;
            pfVar26 = pfVar26 + 1;
            pfVar14 = pfVar14 + 1;
            if (param_6 <= uVar31) {
              param_1[3] = fVar24;
              param_1[0x6b] = fVar23;
              param_1[0x6c] = fVar48;
              param_1[0x6d] = fVar49;
              param_1[0x6e] = fVar50;
              param_1[0x6f] = 0.0;
              return;
            }
          } while( true );
        }
        if (param_7 == (float *)0x0) {
          uVar57 = (ulonglong)DAT_ram_4009f2d0;
          uVar59 = (ulonglong)DAT_ram_4009f2d4;
          uVar58 = (ulonglong)DAT_ram_4009f2d8;
          fVar45 = DAT_ram_4009f2dc;
          fVar16 = DAT_ram_4009b140;
LAB_ram_400648d8:
          uVar44 = (ulonglong)(uint)fVar16;
          if (DAT_ram_4009672c < fVar16) {
            uVar44 = (ulonglong)(uint)DAT_ram_4009672c;
          }
        }
        else {
          fVar16 = *param_7;
          uVar57 = (ulonglong)(uint)fVar16;
          fVar51 = param_7[1];
          fVar23 = param_7[2];
          fVar45 = param_7[4];
          if (0.0 <= fVar16) {
            if (DAT_ram_4009672c < fVar16) {
              uVar57 = (ulonglong)(uint)DAT_ram_4009672c;
            }
          }
          else {
            uVar57 = 0;
          }
          if (0.0 <= fVar51) {
            uVar58 = (ulonglong)(uint)fVar51;
            if (DAT_ram_4009672c < fVar51) {
              uVar58 = (ulonglong)(uint)DAT_ram_4009672c;
            }
          }
          else {
            uVar58 = 0;
          }
          if (0.0 <= fVar23) {
            uVar59 = (ulonglong)(uint)fVar23;
            if (DAT_ram_4009672c < fVar23) {
              uVar59 = (ulonglong)(uint)DAT_ram_4009672c;
            }
          }
          else {
            uVar59 = 0;
          }
          fVar16 = param_7[3];
          if (0.0 <= param_7[3]) goto LAB_ram_400648d8;
          uVar44 = 0;
        }
        uVar64 = (ulonglong)(uint)DAT_ram_4009672c;
        if (0.0 <= fVar45) {
          if (DAT_ram_4009672c < fVar45) {
            fVar45 = DAT_ram_4009672c;
          }
        }
        else {
          fVar45 = 0.0;
        }
        fVar16 = *param_1;
        fVar51 = (float)uVar57;
        if ((float)*(undefined8 *)(param_1 + 0xf) == fVar51) {
          fVar23 = param_1[0x65];
        }
        else {
          fVar21 = param_1[2];
          fVar23 = DAT_ram_4009672c;
          if (DAT_ram_40099f28 <= fVar16) {
            fVar27 = fVar16;
            if (0.0 <= fVar51) {
              uVar60 = uVar64;
              if (fVar51 <= DAT_ram_4009672c) {
                uVar60 = uVar57;
              }
            }
            else {
              uVar60 = 0;
            }
LAB_ram_40063bde:
            fVar48 = ((float)uVar60 * DAT_ram_4009b150 + (float)PTR_entry_ram_40096740) *
                     (float)DAT_ram_4009f0ac * fVar27;
            if (DAT_ram_4009672c <= fVar48) {
              fVar51 = DAT_ram_4009672c;
              if (1 < (uint)fVar21) goto LAB_ram_40063c16;
            }
            else {
              fVar48 = DAT_ram_4009672c;
              if ((uint)fVar21 < 2) goto LAB_ram_40063c26;
LAB_ram_40063c16:
              fVar51 = (float)((int)fVar21 - 2);
            }
            fVar23 = fVar48;
            if (fVar51 < fVar48) {
              fVar23 = fVar51;
            }
          }
          else {
            fVar48 = DAT_ram_4009f2e0;
            if ((0.0 <= fVar51) &&
               (uVar60 = uVar57, fVar27 = DAT_ram_4009678c, fVar48 = DAT_ram_4009f260,
               fVar51 <= DAT_ram_4009672c)) goto LAB_ram_40063bde;
            if (1 < (uint)fVar21) goto LAB_ram_40063c16;
          }
LAB_ram_40063c26:
          param_1[0x65] = fVar23;
          *(ulonglong *)(param_1 + 0xf) = uVar57;
        }
        fVar51 = (float)uVar58;
        if ((float)*(undefined8 *)(param_1 + 0x10) == fVar51) {
          fVar51 = param_1[0x66];
          goto LAB_ram_40063c3a;
        }
        if (fVar51 < 0.0) {
          fVar21 = 0.0;
LAB_ram_40065390:
          fVar51 = fVar21 * DAT_ram_40096730 + 0.0;
        }
        else {
          fVar21 = fVar34;
          if (fVar34 < fVar51) goto LAB_ram_40065390;
          fVar51 = fVar51 * DAT_ram_40096730 + 0.0;
          if (0.0 <= fVar51) {
            if (DAT_ram_40096730 < fVar51) {
              fVar51 = DAT_ram_40096730;
            }
          }
          else {
            fVar51 = 0.0;
          }
        }
        param_1[0x66] = fVar51;
        *(ulonglong *)(param_1 + 0x10) = uVar58;
LAB_ram_40063c3a:
        fVar21 = DAT_ram_40099f30;
        fVar27 = (float)uVar59;
        if ((float)*(undefined8 *)(param_1 + 0x11) == fVar27) {
          fVar27 = param_1[0x69];
        }
        else {
          uVar58 = 0;
          if ((0.0 <= fVar27) && (uVar58 = uVar64, fVar27 <= fVar34)) {
            uVar58 = uVar59;
          }
          puVar33 = &DAT_ram_4009f41c;
          fVar27 = (float)uVar58 * DAT_ram_4009a330 + DAT_ram_40099f30;
          iVar6 = 0;
          iVar11 = 1;
          fVar48 = ABS(fVar27 - DAT_ram_40099f30);
          do {
            uVar61 = *puVar33;
            puVar33 = (undefined8 *)((int)puVar33 + 4);
            fVar49 = ABS(fVar27 - (float)uVar61);
            if (fVar49 < fVar48) {
              iVar6 = iVar11;
              fVar48 = fVar49;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 != 0x15);
          fVar27 = *(float *)(iVar6 * 4 + 0x4009f418);
          *(ulonglong *)(param_1 + 0x11) = uVar59;
          param_1[0x69] = fVar27;
        }
        fVar48 = (float)uVar44;
        if ((float)*(undefined8 *)(param_1 + 0x12) == fVar48) {
          uVar44 = (ulonglong)(uint)param_1[0x6a];
        }
        else {
          param_1[0x6a] = fVar48;
          param_1[0x12] = fVar48;
        }
        if ((float)*(undefined8 *)(param_1 + 0x13) == fVar45) {
          fVar45 = param_1[0x67];
        }
        else {
          param_1[0x67] = fVar45;
          param_1[0x13] = fVar45;
        }
        if ((float)*(undefined8 *)(param_1 + 0x14) == fVar34) {
          fVar48 = param_1[0x68];
        }
        else {
          param_1[0x68] = fVar34;
          *(ulonglong *)(param_1 + 0x14) = uVar64;
          fVar48 = fVar34;
        }
        if (0.0 <= fVar51) {
          if (DAT_ram_40096730 < fVar51) {
            fVar51 = DAT_ram_40096730;
          }
        }
        else {
          fVar51 = 0.0;
        }
        if (0.0 <= fVar45) {
          if (fVar34 < fVar45) {
            fVar45 = fVar34;
          }
        }
        else {
          fVar45 = 0.0;
        }
        if (0.0 <= fVar48) {
          if (fVar34 < fVar48) {
            fVar48 = fVar34;
          }
        }
        else {
          fVar48 = 0.0;
        }
        fVar49 = fVar21;
        if ((fVar27 < fVar21) || (fVar49 = DAT_ram_40099f58, DAT_ram_40099f58 < fVar27)) {
          fVar27 = fVar49;
        }
        if ((float)uVar44 < 0.0) {
          uVar44 = 0;
        }
        else if (fVar34 < (float)uVar44) {
          uVar44 = uVar64;
        }
        if (fVar16 < fVar17) {
          uVar64 = (ulonglong)DAT_ram_4009f2e4;
          bVar2 = true;
          fVar16 = DAT_ram_4009f280;
        }
        else {
          fVar17 = DAT_ram_4009f31c / fVar16;
          fVar16 = fVar16 * DAT_ram_4009f28c;
          if (fVar17 < 0.0) {
            uVar64 = 0;
            bVar2 = true;
          }
          else if (fVar34 < fVar17) {
            bVar2 = false;
          }
          else {
            bVar2 = fVar17 < DAT_ram_4009676c;
            uVar64 = (ulonglong)(uint)fVar17;
          }
        }
        fVar17 = fVar34 / (float)param_6;
        if (DAT_ram_4009f320 <= fVar27) {
          fStack_a4 = 0.0;
          local_f0 = 0.0;
          fVar27 = 0.0;
          iVar6 = 0;
        }
        else {
          if (fVar27 != param_1[0x7c]) {
            fVar50 = (float)FUN_ram_40000d44(puVar63,-(fVar27 - fVar34));
            fVar49 = DAT_ram_4009a4f8;
            uVar64 = CONCAT44(fVar21,(int)uVar64);
            uVar44 = CONCAT44(fVar16,(int)uVar44);
            if (fVar50 < DAT_ram_40096748) {
              fVar50 = DAT_ram_40096748;
            }
            param_1[0x7d] = fVar50;
            param_1[0x7c] = fVar27;
            param_1[0x7f] = fVar50 * fVar49;
            param_1[0x7e] = fVar34 / fVar50;
          }
          local_f0 = param_1[0x7e];
          fVar27 = param_1[0x7d];
          iVar6 = 1;
          fStack_a4 = param_1[0x7f];
        }
        if (*(char *)((int)param_1 + 0x24a) == '\0') {
          param_1[0x6b] = fVar23;
          param_1[0x6c] = fVar51;
          param_1[0x6d] = fVar45;
          param_1[0x6e] = fVar48;
          *(undefined1 *)((int)param_1 + 0x24a) = 1;
          fVar12 = fVar45;
          fVar32 = fVar48;
          fVar50 = fVar51;
          fVar49 = fVar23;
        }
        else {
          fVar12 = param_1[0x6d];
          fVar32 = param_1[0x6e];
          fVar50 = param_1[0x6c];
          fVar49 = param_1[0x6b];
        }
        puVar54 = DAT_ram_40096744;
        fVar35 = param_1[2];
        fVar23 = fVar23 - fVar49;
        fVar51 = fVar51 - fVar50;
        fVar48 = fVar48 - fVar32;
        fVar45 = fVar45 - fVar12;
        fVar43 = (float)uVar44;
        fVar20 = -fVar43;
        fVar42 = param_1[0x7a];
        fVar40 = param_1[0x7b];
        fVar41 = param_1[0x71];
        fVar24 = param_1[0x72];
        fVar25 = param_1[0x73];
        fVar28 = param_1[0x74];
        fVar30 = param_1[3];
        puVar33 = (undefined8 *)param_1[1];
        iVar11 = 0;
        fVar19 = in_register_00000100;
        fVar56 = DAT_ram_4009a644;
        fVar55 = DAT_ram_4009675c;
        do {
          fVar47 = (float)DAT_ram_4009f324;
          fVar18 = *param_2;
          if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
            fVar18 = (fVar18 + (float)*(undefined8 *)((int)param_3 + iVar11)) * fVar55;
          }
          fVar53 = fVar41 * fVar16 + fVar49;
          if (fVar53 < fVar34) {
            fVar53 = fVar34;
          }
          if ((float)(uint)fVar35 - (float)puVar63 < fVar53) {
            fVar53 = (float)(uint)fVar35 - (float)puVar63;
          }
          fVar53 = (float)(uint)fVar30 - fVar53;
          if (fVar53 < 0.0) {
            fVar53 = fVar53 + in_register_00000100;
          }
          uVar31 = (uint)(-1 < (int)fVar53) * (int)fVar53;
          puVar7 = (undefined8 *)((int)puVar33 + (uVar31 + 1) * 4);
          if ((uint)fVar35 <= uVar31 + 1) {
            puVar7 = puVar33;
          }
          fVar53 = (float)*(undefined8 *)((int)puVar33 + uVar31 * 4) *
                   (fVar34 - (fVar53 - (float)uVar31)) + (fVar53 - (float)uVar31) * (float)*puVar7;
          fVar46 = (float)uVar44;
          if (bVar2) {
            fVar42 = fVar42 + (float)uVar64;
            if (fVar34 <= fVar42) {
              fVar42 = fVar42 - fVar34;
              fVar40 = fVar53;
            }
            if (iVar6 == 0) goto LAB_ram_40063eb2;
LAB_ram_40063fb0:
            fVar15 = fVar20;
            if ((fVar27 <= 0.0) || (local_f0 <= 0.0)) {
              if ((fVar19 <= fVar40) && (fVar15 = fVar46, fVar40 <= fVar34)) goto LAB_ram_40063eb2;
            }
            else {
              uVar31 = (int)param_1[100] * 0x19660d + 0x3c6ef35f;
              fVar22 = (float)(uVar31 * 0x19660d + 0x3c6ef35f);
              fVar56 = (float)uVar31 * (float)DAT_ram_4009f324;
              param_1[100] = fVar22;
              fVar47 = (float)FUN_ram_40000970(local_f0 *
                                               (fStack_a4 *
                                                ((float)(uint)fVar22 * fVar47 * (float)puVar63 +
                                                 fVar19 + fVar56 * (float)puVar63 + fVar19) * fVar55
                                               + fVar40));
              fVar47 = fVar27 * fVar47;
              uVar64 = CONCAT44(fVar27,(float)uVar64);
              uVar44 = CONCAT44(iVar6,fVar46);
              fVar19 = DAT_ram_40096728;
              fVar56 = DAT_ram_4009a644;
              fVar55 = DAT_ram_4009675c;
              if ((DAT_ram_40096728 <= fVar47) && (fVar15 = fVar46, fVar47 <= fVar34)) {
                fVar15 = fVar46 * fVar47;
              }
            }
          }
          else {
            fVar40 = fVar53;
            if (iVar6 != 0) goto LAB_ram_40063fb0;
LAB_ram_40063eb2:
            fVar15 = fVar40 * fVar46;
          }
          fVar15 = fVar53 * (fVar34 - fVar43) + fVar15;
          puVar52 = (undefined *)(fVar15 * fVar50 + fVar18);
          puVar62 = puVar54;
          if (((float)puVar54 <= (float)puVar52) &&
             (puVar62 = puVar52, (float)puVar63 < (float)puVar52)) {
            puVar62 = puVar63;
          }
          *(undefined **)((int)puVar33 + (int)fVar30 * 4) = puVar62;
          fVar30 = (float)((int)fVar30 + 1 & -(uint)((uint)((int)fVar30 + 1) < (uint)fVar35));
          if (fVar12 < 0.0) {
            fVar15 = fVar15 * 0.0;
            fVar18 = fVar34;
          }
          else {
            fVar18 = 0.0;
            if (fVar12 <= fVar34) {
              fVar15 = fVar15 * fVar12;
              if (fVar12 <= fVar56) {
LAB_ram_400640f2:
                fVar18 = fVar34;
              }
              else {
                fVar18 = -((fVar12 - fVar56) * fVar21) + fVar34;
                if (0.0 <= fVar18) {
                  if (fVar34 < fVar18) goto LAB_ram_400640f2;
                }
                else {
                  fVar18 = 0.0;
                }
              }
            }
          }
          fVar47 = (float)*(undefined8 *)param_2;
          if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
            fVar18 = fVar32 * (fVar47 * fVar18 + fVar15);
            *param_4 = fVar18;
            if (param_5 != (float *)0x0) {
              *(ulonglong *)((int)param_5 + iVar11) = (ulonglong)(uint)fVar18;
            }
          }
          else {
            fVar46 = (float)*(undefined8 *)((int)param_3 + iVar11);
            fVar53 = fVar32 * (fVar18 * (fVar47 + fVar46) * fVar55 + fVar15);
            if (param_5 == (float *)0x0) {
              *param_4 = fVar53;
            }
            else {
              fVar47 = fVar47 - fVar46;
              fVar18 = fVar18 * fVar32 * fVar55;
              *param_4 = fVar18 * fVar47 + fVar53;
              *(ulonglong *)((int)param_5 + iVar11) = (ulonglong)(uint)(-(fVar18 * fVar47) + fVar53)
              ;
            }
          }
          fVar18 = fVar25 * fVar41;
          iVar11 = iVar11 + 4;
          fVar49 = fVar49 + fVar23 * fVar17;
          fVar50 = fVar50 + fVar51 * fVar17;
          fVar41 = fVar28 * fVar41 + fVar25 * fVar24;
          fVar24 = fVar28 * fVar24 - fVar18;
          fVar12 = fVar12 + fVar45 * fVar17;
          fVar32 = fVar32 + fVar48 * fVar17;
          param_2 = param_2 + 1;
          param_4 = param_4 + 1;
          if (param_6 << 2 == iVar11) {
            param_1[3] = fVar30;
            param_1[0x6b] = fVar49;
            param_1[0x6c] = fVar50;
            param_1[0x6d] = fVar12;
            param_1[0x6e] = fVar32;
            param_1[0x7a] = fVar42;
            param_1[0x7b] = fVar40;
            param_1[0x71] = fVar41;
            param_1[0x72] = fVar24;
            return;
          }
        } while( true );
      }
      if (param_7 == (float *)0x0) {
        uVar58 = (ulonglong)DAT_ram_4009f2c8;
        uVar59 = (ulonglong)DAT_ram_4009f2cc;
        fVar51 = DAT_ram_4009675c;
      }
      else {
        fVar51 = param_7[2];
        fVar45 = *param_7;
        fVar16 = param_7[1];
        if (0.0 <= fVar51) {
          if (DAT_ram_4009672c < fVar51) {
            fVar51 = DAT_ram_4009672c;
          }
        }
        else {
          fVar51 = 0.0;
        }
        uVar59 = (ulonglong)(uint)DAT_ram_4009672c;
        if (0.0 <= fVar45) {
          uVar58 = (ulonglong)(uint)fVar45;
          if (DAT_ram_4009672c < fVar45) {
            uVar58 = uVar59;
          }
        }
        else {
          uVar58 = 0;
        }
        if (fVar16 < 0.0) {
          uVar59 = 0;
        }
        else if (fVar16 <= DAT_ram_4009672c) {
          uVar59 = (ulonglong)(uint)fVar16;
        }
      }
      uVar57 = (ulonglong)(uint)DAT_ram_4009672c;
      fVar45 = *param_1;
      fVar16 = param_1[2];
      fVar23 = (float)uVar58;
      if ((float)*(undefined8 *)(param_1 + 0xf) == fVar23) {
        fVar21 = param_1[0x65];
      }
      else {
        fVar21 = DAT_ram_4009672c;
        if (DAT_ram_40099f28 <= fVar45) {
          fVar27 = fVar45;
          if (0.0 <= fVar23) {
            uVar44 = uVar57;
            if (fVar23 <= DAT_ram_4009672c) {
              uVar44 = uVar58;
            }
          }
          else {
            uVar44 = 0;
          }
LAB_ram_40063672:
          fVar48 = ((float)uVar44 * DAT_ram_4009b148 + DAT_ram_40099f88) * (float)DAT_ram_4009f0ac *
                   fVar27;
          if (DAT_ram_4009672c <= fVar48) {
            fVar23 = DAT_ram_4009672c;
            if (1 < (uint)fVar16) goto LAB_ram_400636aa;
          }
          else {
            fVar48 = DAT_ram_4009672c;
            if ((uint)fVar16 < 2) goto LAB_ram_400636bc;
LAB_ram_400636aa:
            fVar23 = (float)((int)fVar16 - 2);
          }
          fVar21 = fVar48;
          if (fVar23 < fVar48) {
            fVar21 = fVar23;
          }
        }
        else {
          fVar48 = DAT_ram_4009f25c;
          if ((0.0 <= fVar23) &&
             (uVar44 = uVar58, fVar27 = DAT_ram_4009678c, fVar48 = DAT_ram_4009f260,
             fVar23 <= DAT_ram_4009672c)) goto LAB_ram_40063672;
          if (1 < (uint)fVar16) goto LAB_ram_400636aa;
        }
LAB_ram_400636bc:
        param_1[0x65] = fVar21;
        *(ulonglong *)(param_1 + 0xf) = uVar58;
      }
      fVar23 = (float)uVar59;
      if ((float)*(undefined8 *)(param_1 + 0x10) == fVar23) {
        fVar23 = param_1[0x66];
      }
      else {
        if (fVar23 < 0.0) {
          fVar27 = 0.0;
LAB_ram_40065378:
          fVar23 = fVar27 * DAT_ram_40096730 + 0.0;
        }
        else {
          fVar27 = fVar34;
          if (fVar34 < fVar23) goto LAB_ram_40065378;
          fVar23 = fVar23 * DAT_ram_40096730 + 0.0;
          if (0.0 <= fVar23) {
            if (DAT_ram_40096730 < fVar23) {
              fVar23 = DAT_ram_40096730;
            }
          }
          else {
            fVar23 = 0.0;
          }
        }
        param_1[0x66] = fVar23;
        *(ulonglong *)(param_1 + 0x10) = uVar59;
      }
      if ((float)*(undefined8 *)(param_1 + 0x11) == fVar51) {
        fVar51 = param_1[0x67];
      }
      else {
        param_1[0x67] = fVar51;
        param_1[0x11] = fVar51;
      }
      if ((float)*(undefined8 *)(param_1 + 0x12) == fVar34) {
        fVar27 = param_1[0x68];
      }
      else {
        param_1[0x68] = fVar34;
        *(ulonglong *)(param_1 + 0x12) = uVar57;
        fVar27 = fVar34;
      }
      if (0.0 <= fVar23) {
        if (DAT_ram_40096730 < fVar23) {
          fVar23 = DAT_ram_40096730;
        }
      }
      else {
        fVar23 = 0.0;
      }
      if (0.0 <= fVar51) {
        if (fVar34 < fVar51) {
          fVar51 = fVar34;
        }
      }
      else {
        fVar51 = 0.0;
      }
      if (0.0 <= fVar27) {
        if (fVar34 < fVar27) {
          fVar27 = fVar34;
        }
      }
      else {
        fVar27 = 0.0;
      }
      fVar48 = fVar34 / (float)param_6;
      if (fVar17 <= fVar45) {
        if ((uint)fVar16 < 8) {
          FUN_ram_40000902(fVar45 * DAT_ram_4009f318);
          goto LAB_ram_400650c8;
        }
        fVar45 = fVar45 * DAT_ram_4009f28c;
      }
      else {
        fVar45 = DAT_ram_4009f280;
        if ((uint)fVar16 < 8) {
LAB_ram_400650c8:
          FUN_ram_4006066c(param_2,param_3,param_4,param_5,param_6,param_9);
          param_1[0x6b] = fVar21;
          return;
        }
      }
      fVar32 = (float)((uint)fVar16 >> 1);
      fVar49 = (float)(int)fVar32;
      fVar50 = fVar32;
      fVar12 = fVar49;
      if (0x3f < (uint)fVar16) {
        fVar50 = 4.48416e-44;
        fVar12 = DAT_ram_4009b168;
      }
      if ((fVar12 <= fVar21) && (fVar12 = fVar49, fVar21 <= fVar49)) {
        fVar12 = fVar21;
      }
      fVar16 = (float)FUN_ram_40000902(fVar12);
      if ((uint)fVar50 < (uint)fVar16) {
        fVar50 = fVar16;
      }
      if ((uint)fVar32 < (uint)fVar50) {
        fVar50 = fVar32;
      }
      iVar6 = 0xdd;
      if (fVar17 <= (float)*(undefined8 *)param_1) {
        iVar6 = FUN_ram_40000902((float)*(undefined8 *)param_1 * DAT_ram_4009f318);
      }
      if (*(char *)((int)param_1 + 0x24a) == '\0') {
        param_1[0x6b] = fVar21;
        param_1[0x6c] = fVar23;
        param_1[0x6d] = fVar51;
        param_1[0x6e] = fVar27;
        *(undefined1 *)((int)param_1 + 0x24a) = 1;
        fVar17 = fVar23;
        fVar49 = fVar27;
        fVar16 = fVar51;
      }
      else {
        fVar17 = param_1[0x6c];
        fVar16 = param_1[0x6d];
        fVar49 = param_1[0x6e];
      }
      fVar12 = param_1[0x8c];
      pfVar26 = (float *)param_1[1];
      if ((fVar12 == 0.0) || ((uint)param_1[2] >> 1 < (uint)fVar12)) {
        if (pfVar26 == (float *)0x0) {
          bVar5 = *(byte *)(param_1 + 0x8e);
          cVar37 = *(char *)((int)param_1 + 0x239);
          fVar32 = param_1[0x8d];
          fVar12 = fVar50;
          goto LAB_ram_40063814;
        }
      }
      else {
        fVar32 = param_1[0x8d];
        if ((fVar12 == fVar50) ||
           ((fVar32 != 0.0 && (((uint)fVar12 <= (uint)fVar50 || ((uint)fVar32 < (uint)fVar50)))))) {
          bVar5 = *(byte *)(param_1 + 0x8e);
          cVar37 = *(char *)((int)param_1 + 0x239);
          goto LAB_ram_40063814;
        }
        if (pfVar26 == (float *)0x0) {
          bVar5 = *(byte *)(param_1 + 0x8e);
          cVar37 = *(char *)((int)param_1 + 0x239);
          fVar12 = fVar50;
          goto LAB_ram_40063814;
        }
      }
      param_1[0x8c] = fVar50;
      param_1[0x8d] = 0.0;
      *(undefined2 *)(param_1 + 0x8e) = 0;
      fVar32 = 0.0;
      cVar37 = '\0';
      bVar5 = 0;
      fVar12 = fVar50;
LAB_ram_40063814:
      fVar19 = DAT_ram_4009a644;
      fVar20 = DAT_ram_40099f30;
      fVar28 = DAT_ram_4009675c;
      fVar23 = fVar23 - fVar17;
      fVar51 = fVar51 - fVar16;
      fVar27 = fVar27 - fVar49;
      fVar40 = param_1[0x71];
      fVar41 = param_1[0x72];
      fVar24 = param_1[0x73];
      fVar25 = param_1[0x74];
      fVar42 = 0.0;
      if (1 < iVar6) {
        fVar42 = fVar34 / (float)(iVar6 + -1);
      }
      pfVar29 = param_2 + param_6;
      pfVar14 = param_5;
      pfVar39 = param_3;
      do {
        fVar56 = *param_2;
        if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
          fVar56 = (fVar56 + *pfVar39) * fVar28;
        }
        fVar55 = (float)((int)fVar12 - 1);
        fVar30 = fVar45 * fVar40 + (float)(uint)fVar32;
        if (fVar30 < 0.0) {
          fVar30 = 0.0;
        }
        else if (fVar55 < fVar30) {
          fVar30 = fVar55;
        }
        iVar11 = (int)fVar12 * 4;
        pfVar38 = pfVar26;
        if (bVar5 != 0) {
          iVar11 = 0;
          pfVar38 = pfVar26 + (int)fVar12;
        }
        fVar35 = 0.0;
        if (((cVar37 != '\0') && (pfVar38 != (float *)0x0)) && (fVar12 != 0.0)) {
          if (0.0 < fVar30) {
            if (fVar30 < fVar55) {
              uVar31 = (uint)(-1 < (int)fVar30) * (int)fVar30;
              iVar9 = (int)fVar12 - uVar31;
              fVar30 = fVar30 - (float)uVar31;
              iVar10 = iVar9 + -1;
              pfVar4 = pfVar38 + iVar9 + -2;
              if (iVar10 == 0) {
                pfVar4 = pfVar38;
              }
              fVar35 = (fVar34 - fVar30) * (float)*(undefined8 *)(pfVar38 + iVar10) +
                       fVar30 * *pfVar4;
            }
            else {
              fVar35 = *pfVar38;
            }
          }
          else {
            fVar35 = pfVar38[(int)fVar12 + -1];
          }
        }
        fVar55 = fVar35;
        if (1 < iVar6) {
          if ((int)fVar32 < iVar6) {
            fVar55 = (float)(uint)fVar32 * fVar42 * fVar35;
          }
          else if ((uint)((int)fVar12 - iVar6) <= (uint)fVar32) {
            fVar55 = (float)(int)(~(uint)fVar32 + (int)fVar12) * fVar42;
            if (fVar55 < 0.0) {
              fVar55 = fVar35 * 0.0;
            }
            else {
              fVar55 = fVar55 * fVar35;
            }
          }
        }
        *(ulonglong *)(iVar11 + (int)fVar32 * 4 + (int)pfVar26) =
             (ulonglong)(uint)(fVar35 * fVar17 + fVar56);
        if (fVar16 < 0.0) {
          fVar55 = fVar55 * 0.0;
          fVar56 = fVar34;
        }
        else {
          fVar56 = 0.0;
          if (fVar16 <= fVar34) {
            fVar55 = fVar55 * fVar16;
            if (fVar16 <= fVar19) {
LAB_ram_40063a66:
              fVar56 = fVar34;
            }
            else {
              fVar56 = -((fVar16 - fVar19) * fVar20) + fVar34;
              if (0.0 <= fVar56) {
                if (fVar34 < fVar56) goto LAB_ram_40063a66;
              }
              else {
                fVar56 = 0.0;
              }
            }
          }
        }
        fVar30 = (float)*(undefined8 *)param_2;
        if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
          fVar56 = fVar49 * (fVar30 * fVar56 + fVar55);
          *param_4 = fVar56;
          if (param_5 != (float *)0x0) {
            *(ulonglong *)pfVar14 = (ulonglong)(uint)fVar56;
          }
        }
        else {
          fVar55 = fVar49 * (fVar56 * (fVar30 + *pfVar39) * fVar28 + fVar55);
          if (param_5 == (float *)0x0) {
            *param_4 = fVar55;
          }
          else {
            fVar30 = fVar30 - *pfVar39;
            fVar56 = fVar56 * fVar49 * fVar28;
            *param_4 = fVar56 * fVar30 + fVar55;
            *(ulonglong *)pfVar14 = (ulonglong)(uint)(-(fVar56 * fVar30) + fVar55);
          }
        }
        fVar32 = (float)((int)fVar32 + 1);
        if ((uint)fVar12 <= (uint)fVar32) {
          if (fVar50 == fVar12) {
            bVar5 = bVar5 ^ 1;
            fVar32 = 0.0;
            cVar37 = '\x01';
          }
          else {
            if (pfVar26 == (float *)0x0) {
              bVar5 = *(byte *)(param_1 + 0x8e);
            }
            else {
              param_1[0x8c] = fVar50;
              *(undefined2 *)(param_1 + 0x8e) = 0;
              bVar5 = 0;
              fVar32 = 0.0;
            }
            cVar37 = '\0';
            fVar12 = fVar50;
          }
        }
        fVar56 = fVar24 * fVar40;
        param_2 = param_2 + 1;
        fVar17 = fVar17 + fVar23 * fVar48;
        fVar16 = fVar16 + fVar51 * fVar48;
        fVar40 = fVar25 * fVar40 + fVar24 * fVar41;
        fVar41 = fVar25 * fVar41 - fVar56;
        fVar49 = fVar49 + fVar27 * fVar48;
        param_4 = param_4 + 1;
        pfVar14 = pfVar14 + 1;
        pfVar39 = pfVar39 + 1;
        if (pfVar29 == param_2) {
          param_1[0x8d] = fVar32;
          param_1[0x6b] = fVar21;
          param_1[0x6c] = fVar17;
          param_1[0x6d] = fVar16;
          param_1[0x6e] = fVar49;
          param_1[0x71] = fVar40;
          param_1[0x72] = fVar41;
          *(ushort *)(param_1 + 0x8e) = CONCAT11(cVar37,bVar5);
          param_1[0x70] = 0.0;
          return;
        }
      } while( true );
    }
    if (param_7 == (float *)0x0) {
      uVar58 = (ulonglong)DAT_ram_4009f2a4;
      uVar59 = (ulonglong)DAT_ram_4009f2b0;
      fVar45 = DAT_ram_4009f230;
      fVar16 = DAT_ram_4009f0bc;
      fVar51 = DAT_ram_4009f230;
      fVar23 = DAT_ram_4009672c;
      fVar21 = DAT_ram_4009f2ac;
      fVar27 = DAT_ram_4009f2a8;
LAB_ram_4006415a:
      fVar48 = DAT_ram_4009672c;
      if (fVar23 <= DAT_ram_4009672c) {
        fVar48 = fVar23;
      }
    }
    else {
      fVar45 = param_7[6];
      uVar58 = (ulonglong)(uint)*param_7;
      uVar59 = (ulonglong)(uint)param_7[1];
      fVar16 = param_7[7];
      fVar51 = param_7[2];
      fVar23 = param_7[3];
      fVar21 = param_7[4];
      fVar27 = param_7[5];
      if (0.0 <= fVar45) {
        if (DAT_ram_4009672c < fVar45) {
          fVar45 = DAT_ram_4009672c;
        }
      }
      else {
        fVar45 = 0.0;
      }
      if (0.0 <= fVar16) {
        if (DAT_ram_4009672c < fVar16) {
          fVar16 = DAT_ram_4009672c;
        }
      }
      else {
        fVar16 = 0.0;
      }
      if (0.0 <= fVar51) {
        if (DAT_ram_4009672c < fVar51) {
          fVar51 = DAT_ram_4009672c;
        }
      }
      else {
        fVar51 = 0.0;
      }
      if (0.0 <= fVar23) goto LAB_ram_4006415a;
      fVar48 = 0.0;
    }
    if (0.0 <= fVar21) {
      if (DAT_ram_4009672c < fVar21) {
        fVar21 = DAT_ram_4009672c;
      }
    }
    else {
      fVar21 = 0.0;
    }
    if (0.0 <= fVar27) {
      if (DAT_ram_4009672c < fVar27) {
        fVar27 = DAT_ram_4009672c;
      }
    }
    else {
      fVar27 = 0.0;
    }
    if (0.0 <= (float)uVar58) {
      if (DAT_ram_4009672c < (float)uVar58) {
        uVar58 = (ulonglong)(uint)DAT_ram_4009672c;
      }
    }
    else {
      uVar58 = 0;
    }
    if (0.0 <= (float)uVar59) {
      if (DAT_ram_4009672c < (float)uVar59) {
        uVar59 = (ulonglong)(uint)DAT_ram_4009672c;
      }
    }
    else {
      uVar59 = 0;
    }
    fVar23 = *param_1;
    fVar49 = (float)uVar58;
    if ((float)*(undefined8 *)(param_1 + 0xf) != fVar49) {
      fVar12 = param_1[2];
      fVar50 = DAT_ram_4009672c;
      if (DAT_ram_40099f28 <= fVar23) {
        fVar32 = fVar23;
        if (0.0 <= fVar49) {
          uVar57 = (ulonglong)(uint)DAT_ram_4009672c;
          if (fVar49 <= DAT_ram_4009672c) {
            uVar57 = uVar58;
          }
        }
        else {
          uVar57 = 0;
        }
LAB_ram_40062f50:
        fVar42 = ((float)uVar57 * DAT_ram_4009b148 + DAT_ram_40099f88) * (float)DAT_ram_4009f0ac *
                 fVar32;
        if (DAT_ram_4009672c <= fVar42) {
          fVar49 = DAT_ram_4009672c;
          if (1 < (uint)fVar12) goto LAB_ram_40062f88;
        }
        else {
          fVar42 = DAT_ram_4009672c;
          if ((uint)fVar12 < 2) goto LAB_ram_40062f98;
LAB_ram_40062f88:
          fVar49 = (float)((int)fVar12 - 2);
        }
        fVar50 = fVar42;
        if (fVar49 < fVar42) {
          fVar50 = fVar49;
        }
      }
      else {
        fVar42 = DAT_ram_4009f25c;
        if ((0.0 <= fVar49) &&
           (uVar57 = uVar58, fVar32 = DAT_ram_4009678c, fVar42 = DAT_ram_4009f260,
           fVar49 <= DAT_ram_4009672c)) goto LAB_ram_40062f50;
        if (1 < (uint)fVar12) goto LAB_ram_40062f88;
      }
LAB_ram_40062f98:
      param_1[0x65] = fVar50;
      *(ulonglong *)(param_1 + 0xf) = uVar58;
    }
    fVar49 = (float)uVar59;
    if ((float)*(undefined8 *)(param_1 + 0x10) != fVar49) {
      if (0.0 <= fVar49) {
        fVar50 = fVar34;
        if (fVar34 < fVar49) goto LAB_ram_40065312;
        fVar49 = fVar49 * DAT_ram_40096730 + 0.0;
        if (fVar49 < 0.0) {
          fVar50 = 0.0;
        }
        else {
          fVar50 = DAT_ram_40096730;
          if (fVar49 <= DAT_ram_40096730) {
            fVar50 = fVar49;
          }
        }
      }
      else {
        fVar50 = 0.0;
LAB_ram_40065312:
        fVar50 = fVar50 * DAT_ram_40096730 + 0.0;
      }
      param_1[0x66] = fVar50;
      *(ulonglong *)(param_1 + 0x10) = uVar59;
    }
    param_1[0x68] = DAT_ram_4009672c;
    fVar12 = DAT_ram_4009f218;
    fVar50 = DAT_ram_4009f214;
    fVar49 = DAT_ram_4009f20c;
    puVar63 = DAT_ram_40096744;
    if ((float)*(undefined8 *)(param_1 + 0x15) == fVar45) goto LAB_ram_40062ffe;
    fVar32 = fVar23;
    if (fVar23 < fVar17) {
      fVar32 = DAT_ram_4009678c;
    }
    fVar42 = fVar32 * DAT_ram_4009f22c;
    fVar40 = fVar32;
    fVar41 = fVar42;
    if (fVar45 < 0.0) {
      fVar24 = 0.0;
LAB_ram_40065332:
      fVar24 = (fVar34 - fVar24 / DAT_ram_4009f230) * DAT_ram_4009a338 +
               (fVar24 / DAT_ram_4009f230) * DAT_ram_4009f234;
LAB_ram_40064d94:
      fVar25 = DAT_ram_4009a4f4;
      fVar28 = DAT_ram_40099f50;
      if ((DAT_ram_4009a4f4 <= fVar24) && (fVar25 = fVar24, fVar42 < fVar24)) {
        fVar25 = fVar42;
      }
LAB_ram_40064db6:
      if (fVar42 < fVar28) {
        fVar28 = fVar42;
      }
      if (fVar34 <= fVar32) {
        fVar49 = fVar34;
        if (fVar34 <= fVar28) goto LAB_ram_400655f4;
LAB_ram_40064dd8:
        fVar49 = (fVar49 / fVar40) * DAT_ram_4009f090;
        FUN_ram_40000712(fVar49);
        fVar40 = in_register_00000100;
        fVar12 = (float)FUN_ram_400009d2(fVar49);
        puVar54 = (undefined *)(in_register_00000100 * (float)DAT_ram_40096744);
        fVar50 = (in_register_00000100 + fVar34) * DAT_ram_4009675c;
        puVar52 = (undefined *)-(in_register_00000100 + fVar34);
        fVar49 = fVar12 / DAT_ram_4009f050 + fVar34;
        fVar12 = fVar34 - fVar12 / DAT_ram_4009f050;
        in_register_00000100 = fVar40;
        if (fVar49 == 0.0) {
          fVar49 = fVar34;
        }
        goto LAB_ram_40064e46;
      }
      fVar40 = DAT_ram_4009678c;
      fVar41 = DAT_ram_4009f1fc._4_4_;
      if (fVar34 <= fVar28) {
LAB_ram_400655f4:
        fVar49 = fVar28;
        if (fVar41 < fVar28) {
          fVar49 = fVar41;
        }
        goto LAB_ram_40064dd8;
      }
      param_1[0x4e] = DAT_ram_4009f20c;
      param_1[0x4f] = fVar12;
      param_1[0x50] = fVar49;
      param_1[0x51] = fVar12;
      param_1[0x52] = fVar50;
LAB_ram_40065466:
      if (fVar25 < fVar34) {
        fVar50 = 0.0;
        puVar54 = puVar63;
        fVar42 = 0.0;
        fVar49 = DAT_ram_4009f210;
        fVar12 = DAT_ram_4009f20c;
      }
      else {
        fVar40 = fVar25;
        fVar50 = DAT_ram_4009f2c0;
        puVar54 = DAT_ram_4009f2b8;
        fVar42 = DAT_ram_4009f2bc;
        fVar49 = DAT_ram_4009f2c4;
        fVar12 = DAT_ram_4009f2b4;
        fVar32 = DAT_ram_4009678c;
        if (fVar25 <= DAT_ram_4009f1fc._4_4_) goto LAB_ram_40064e88;
      }
    }
    else {
      if (fVar45 <= fVar34) {
        fVar24 = fVar45;
        if (fVar45 <= DAT_ram_4009f230) goto LAB_ram_40065332;
        if (DAT_ram_4009f238 < fVar45) {
          fVar24 = (fVar45 - DAT_ram_4009f238) / DAT_ram_4009f23c;
          fVar25 = (fVar34 - fVar24) * DAT_ram_4009f240 + fVar24 * DAT_ram_4009f208;
          fVar28 = (fVar34 - fVar24) * DAT_ram_40099f50 + fVar24 * DAT_ram_4009f204;
          fVar24 = DAT_ram_4009a4f4;
          if ((DAT_ram_4009a4f4 <= fVar25) && (fVar24 = fVar25, fVar42 < fVar25)) {
            fVar24 = fVar42;
          }
          goto LAB_ram_400655da;
        }
        fVar24 = (fVar45 - DAT_ram_4009f230) / DAT_ram_4009f244;
        fVar24 = (fVar34 - fVar24) * DAT_ram_4009f234 + fVar24 * DAT_ram_4009f240;
        goto LAB_ram_40064d94;
      }
      fVar25 = fVar42;
      fVar24 = DAT_ram_4009f208;
      fVar28 = DAT_ram_4009f204;
      if (fVar42 < DAT_ram_4009f208) goto LAB_ram_40064db6;
LAB_ram_400655da:
      fVar25 = fVar24;
      if (fVar34 <= fVar28) goto LAB_ram_40064db6;
      fVar28 = fVar34;
      puVar54 = DAT_ram_40096744;
      fVar50 = fVar34;
      puVar52 = DAT_ram_40096744;
      fVar49 = DAT_ram_4009f210;
      fVar12 = DAT_ram_4009f20c;
      if (fVar34 <= fVar32) goto LAB_ram_400655f4;
LAB_ram_40064e46:
      puVar63 = DAT_ram_40096744;
      fVar49 = fVar34 / fVar49;
      param_1[0x4e] = fVar49 * fVar50;
      param_1[0x4f] = fVar49 * (float)puVar52;
      param_1[0x50] = fVar49 * fVar50;
      param_1[0x51] = fVar49 * (float)puVar54;
      param_1[0x52] = fVar49 * fVar12;
      if (fVar32 < fVar34) goto LAB_ram_40065466;
      fVar40 = fVar34;
      if ((fVar34 <= fVar25) && (fVar40 = fVar25, fVar42 < fVar25)) {
        fVar40 = fVar42;
      }
LAB_ram_40064e88:
      fVar49 = (fVar40 / fVar32) * DAT_ram_4009f090;
      fVar32 = (float)FUN_ram_40000712(fVar49);
      fVar12 = (float)FUN_ram_400009d2(fVar49);
      fVar50 = fVar34 - fVar32;
      fVar49 = fVar12 / DAT_ram_4009f050 + fVar34;
      fVar12 = fVar34 - fVar12 / DAT_ram_4009f050;
      puVar54 = (undefined *)(fVar32 * (float)puVar63);
      fVar42 = fVar50 * DAT_ram_4009675c;
      if (fVar49 == 0.0) {
        fVar49 = fVar34;
      }
    }
    fVar49 = fVar34 / fVar49;
    param_1[0x69] = fVar45;
    param_1[0x15] = fVar45;
    param_1[0x55] = fVar49 * fVar42;
    param_1[0x56] = fVar49 * fVar50;
    param_1[0x57] = fVar49 * fVar42;
    param_1[0x58] = fVar49 * (float)puVar54;
    param_1[0x59] = fVar49 * fVar12;
LAB_ram_40062ffe:
    if ((float)*(undefined8 *)(param_1 + 0x16) != fVar16) {
      param_1[0x67] = fVar16;
      param_1[0x16] = fVar16;
    }
    fVar45 = DAT_ram_40099f70;
    if ((float)*(undefined8 *)(param_1 + 0x11) != fVar51) {
      param_1[0x11] = fVar51;
      param_1[0x76] = fVar51 * fVar45 * fVar51;
    }
    if ((float)*(undefined8 *)(param_1 + 0x12) != fVar48) {
      param_1[0x77] = fVar48;
      param_1[0x12] = fVar48;
    }
    puVar54 = DAT_ram_4009f0ac;
    fVar45 = DAT_ram_40096728;
    if (((float)*(undefined8 *)(param_1 + 0x13) != fVar21) ||
       ((float)*(undefined8 *)(param_1 + 0x14) != fVar27)) {
      fVar16 = DAT_ram_40099f88;
      if ((0.0 <= fVar21) && (fVar16 = DAT_ram_40096780, fVar21 <= fVar34)) {
        fVar16 = fVar21 * DAT_ram_4009b158 + DAT_ram_40099f88;
      }
      fVar51 = DAT_ram_40099f38;
      if ((0.0 <= fVar27) && (fVar51 = DAT_ram_4009a35c, fVar27 <= fVar34)) {
        fVar51 = fVar27 * DAT_ram_4009b15c + DAT_ram_40099f38;
      }
      if (fVar23 < fVar17) {
        fVar23 = DAT_ram_4009678c;
      }
      fVar16 = (float)FUN_ram_40000bd8(DAT_ram_40096728 /
                                       (fVar23 * fVar16 * (float)DAT_ram_4009f0ac));
      fVar45 = (float)FUN_ram_40000bd8(fVar45 / (fVar23 * fVar51 * (float)puVar54));
      fVar23 = *param_1;
      param_1[0x78] = fVar16;
      param_1[0x79] = fVar45;
      param_1[0x13] = fVar21;
      param_1[0x14] = fVar27;
    }
    fVar45 = param_1[0x66];
    if (0.0 <= fVar45) {
      if (DAT_ram_40096730 < fVar45) {
        fVar45 = DAT_ram_40096730;
      }
    }
    else {
      fVar45 = 0.0;
    }
    fVar16 = param_1[0x67];
    if (0.0 <= fVar16) {
      if (fVar34 < fVar16) {
        fVar16 = fVar34;
      }
    }
    else {
      fVar16 = 0.0;
    }
    fVar51 = param_1[0x68];
    if (0.0 <= fVar51) {
      if (fVar34 < fVar51) {
        fVar51 = fVar34;
      }
    }
    else {
      fVar51 = 0.0;
    }
    fVar27 = param_1[0x65];
    fVar21 = fVar34 / (float)param_6;
    if (*(char *)((int)param_1 + 0x24a) == '\0') {
      param_1[0x6b] = fVar27;
      param_1[0x6c] = fVar45;
      param_1[0x6d] = fVar16;
      param_1[0x6e] = fVar51;
      *(undefined1 *)((int)param_1 + 0x24a) = 1;
      fVar50 = fVar16;
      fVar12 = fVar51;
      fVar49 = fVar45;
      fVar48 = fVar27;
    }
    else {
      fVar48 = param_1[0x6b];
      fVar49 = param_1[0x6c];
      fVar50 = param_1[0x6d];
      fVar12 = param_1[0x6e];
    }
    fVar24 = DAT_ram_4009675c;
    puVar54 = PTR_entry_ram_40096740;
    fVar32 = param_1[0x71];
    fVar42 = param_1[0x72];
    fVar40 = param_1[0x73];
    fVar41 = param_1[0x74];
    fVar25 = DAT_ram_4009f280;
    if (fVar17 <= fVar23) {
      fVar25 = fVar23 * DAT_ram_4009f28c;
    }
    fVar51 = fVar51 - fVar12;
    fVar27 = fVar27 - fVar48;
    fVar45 = fVar45 - fVar49;
    fVar16 = fVar16 - fVar50;
    fVar28 = param_1[2];
    fVar23 = param_1[3];
    fVar17 = (float)(uint)fVar28 - (float)PTR_entry_ram_40096740;
    puVar33 = (undefined8 *)param_1[1];
    pfVar39 = param_2 + param_6;
    pfVar26 = param_5;
    pfVar14 = param_3;
    do {
      fVar20 = (float)*(undefined8 *)param_2;
      if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
        fVar20 = (fVar20 + *pfVar14) * fVar24;
      }
      fVar56 = ABS(fVar20);
      fVar19 = param_1[0x61];
      if (fVar19 < fVar56) {
        fVar19 = fVar19 * param_1[0x5f] + (fVar34 - param_1[0x5f]) * fVar56;
      }
      else {
        fVar19 = fVar19 * param_1[0x60] + (fVar34 - param_1[0x60]) * fVar56;
      }
      param_1[0x61] = fVar19;
      if (fVar19 < 0.0) {
        fVar19 = 0.0;
      }
      else if (fVar34 < fVar19) {
        fVar19 = fVar34;
      }
      fVar19 = -(param_1[0x77] * (fVar34 - fVar34 / (param_1[0x76] * fVar19 + fVar34))) + fVar34;
      if (fVar19 < 0.0) {
        fVar19 = 0.0;
      }
      else if (fVar34 < fVar19) {
        fVar19 = fVar34;
      }
      if (param_1[0x75] <= fVar19) {
        fVar56 = param_1[0x79];
      }
      else {
        fVar56 = param_1[0x78];
      }
      fVar55 = fVar32 * fVar25 + fVar48;
      fVar19 = param_1[0x75] * fVar56 + (fVar34 - fVar56) * fVar19;
      param_1[0x75] = fVar19;
      if (fVar55 < fVar34) {
        fVar55 = fVar34;
      }
      if (fVar17 < fVar55) {
        fVar55 = fVar17;
      }
      fVar55 = (float)(uint)fVar23 - fVar55;
      if (fVar55 < 0.0) {
        fVar55 = fVar55 + in_register_00000100;
      }
      uVar31 = (uint)(-1 < (int)fVar55) * (int)fVar55;
      puVar7 = (undefined8 *)((int)puVar33 + (uVar31 + 1) * 4);
      if ((uint)fVar28 <= uVar31 + 1) {
        puVar7 = puVar33;
      }
      fVar55 = *(float *)((int)puVar33 + uVar31 * 4) * (fVar34 - (fVar55 - (float)uVar31)) +
               (fVar55 - (float)uVar31) * (float)*puVar7;
      fVar30 = param_1[0x4e] * fVar55 + param_1[0x53];
      fVar35 = fVar30 * param_1[0x55] + param_1[0x5a];
      fVar56 = param_1[0x5b];
      fVar20 = fVar35 * fVar49 + fVar20;
      uVar59 = (ulonglong)(uint)fVar20;
      param_1[0x53] = param_1[0x54] + (param_1[0x4f] * fVar55 - fVar30 * param_1[0x51]);
      param_1[0x5b] = fVar30 * param_1[0x57] - fVar35 * param_1[0x59];
      param_1[0x54] = param_1[0x50] * fVar55 - fVar30 * param_1[0x52];
      param_1[0x5a] = fVar56 + (fVar30 * param_1[0x56] - fVar35 * param_1[0x58]);
      if (fVar20 < (float)puVar63) {
        uVar59 = ZEXT48(puVar63);
      }
      else if ((float)puVar54 < fVar20) {
        uVar59 = ZEXT48(puVar54);
      }
      *(ulonglong *)((int)puVar33 + (int)fVar23 * 4) = uVar59;
      fVar19 = fVar19 * fVar35;
      fVar23 = (float)((int)fVar23 + 1 & -(uint)((uint)((int)fVar23 + 1) < (uint)fVar28));
      if (fVar50 < 0.0) {
        fVar19 = fVar19 * 0.0;
        fVar20 = fVar34;
      }
      else {
        fVar20 = 0.0;
        if (fVar50 <= fVar34) {
          fVar19 = fVar19 * fVar50;
          if (fVar50 <= in_register_00000100) {
LAB_ram_400634b6:
            fVar20 = fVar34;
          }
          else {
            fVar20 = -((fVar50 - in_register_00000100) * in_register_00000100) + fVar34;
            if (0.0 <= fVar20) {
              if (fVar34 < fVar20) goto LAB_ram_400634b6;
            }
            else {
              fVar20 = 0.0;
            }
          }
        }
      }
      fVar56 = (float)*(undefined8 *)param_2;
      if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
        fVar20 = fVar12 * (fVar56 * fVar20 + fVar19);
        *param_4 = fVar20;
        if (param_5 != (float *)0x0) {
          *(ulonglong *)pfVar26 = (ulonglong)(uint)fVar20;
        }
      }
      else {
        fVar19 = fVar12 * (fVar20 * (fVar56 + *pfVar14) * fVar24 + fVar19);
        if (param_5 == (float *)0x0) {
          *param_4 = fVar19;
        }
        else {
          fVar56 = fVar56 - *pfVar14;
          fVar20 = fVar20 * fVar12 * fVar24;
          *param_4 = fVar20 * fVar56 + fVar19;
          *(ulonglong *)pfVar26 = (ulonglong)(uint)(-(fVar20 * fVar56) + fVar19);
        }
      }
      fVar20 = fVar40 * fVar32;
      param_2 = param_2 + 1;
      fVar48 = fVar48 + fVar27 * fVar21;
      fVar49 = fVar49 + fVar45 * fVar21;
      fVar32 = fVar41 * fVar32 + fVar40 * fVar42;
      fVar42 = fVar41 * fVar42 - fVar20;
      fVar50 = fVar50 + fVar16 * fVar21;
      fVar12 = fVar12 + fVar51 * fVar21;
      param_4 = param_4 + 1;
      pfVar26 = pfVar26 + 1;
      pfVar14 = pfVar14 + 1;
      if (pfVar39 == param_2) {
        param_1[3] = fVar23;
        param_1[0x6b] = fVar48;
        param_1[0x6c] = fVar49;
        param_1[0x6d] = fVar50;
        param_1[0x6e] = fVar12;
        param_1[0x71] = fVar32;
        param_1[0x72] = fVar42;
        return;
      }
    } while( true );
  }
  if (uVar31 != 0) {
    param_8 = 0;
LAB_ram_40061d26:
    uVar31 = (int)param_1[2] * 4;
    if (uVar31 < 0x81) {
      if (uVar31 != 0) goto LAB_ram_40061d62;
    }
    else {
      uVar36 = uVar31 - 0x81 >> 7;
      fVar34 = (float)((uVar36 + 1) * 0x80 + (int)fVar17);
      do {
        iVar6 = memset(fVar17,0,0x80);
        fence();
        fVar17 = (float)(iVar6 + 0x80);
      } while (fVar17 != fVar34);
      uVar31 = (uVar31 - 0x80) + uVar36 * -0x80;
      fVar17 = fVar34;
LAB_ram_40061d62:
      memset(fVar17,0,uVar31);
      fence();
    }
    uVar59 = (ulonglong)(uint)DAT_ram_4009672c;
    fVar34 = param_1[4];
    param_1[3] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    *(ulonglong *)(param_1 + 0xb) = uVar59;
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined1 *)((int)param_1 + 0x3a) = 1;
    if ((fVar34 != 0.0) && (param_1[5] != 0.0)) {
      uVar31 = (int)param_1[5] * 4;
      if (uVar31 < 0x81) {
        if (uVar31 == 0) goto LAB_ram_40061df0;
      }
      else {
        uVar36 = uVar31 - 0x81 >> 7;
        fVar17 = (float)((uVar36 + 1) * 0x80 + (int)fVar34);
        do {
          iVar6 = memset(fVar34,0,0x80);
          fence();
          fVar34 = (float)(iVar6 + 0x80);
        } while (fVar34 != fVar17);
        uVar31 = (uVar31 - 0x80) + uVar36 * -0x80;
        fVar34 = fVar17;
      }
      memset(fVar34,0,uVar31);
      fence();
    }
LAB_ram_40061df0:
    fVar34 = DAT_ram_4009672c;
    param_1[0x3f] = 5.6904566e-28;
    param_1[100] = -1.7247773e-34;
    param_1[6] = 0.0;
    param_1[0x18] = 0.0;
    param_1[0x19] = 0.0;
    param_1[0x1a] = 0.0;
    param_1[0x1b] = 0.0;
    *(undefined1 *)(param_1 + 0x24) = 0;
    param_1[0x2e] = 0.0;
    param_1[0x2f] = 0.0;
    param_1[0x35] = 0.0;
    param_1[0x36] = 0.0;
    param_1[0x3c] = 0.0;
    param_1[0x3d] = 0.0;
    param_1[0x3e] = 0.0;
    param_1[0x40] = 0.0;
    param_1[0x41] = fVar34;
    *(undefined1 *)(param_1 + 0x4d) = 0;
    param_1[0x48] = fVar34;
    param_1[0x53] = 0.0;
    param_1[0x54] = 0.0;
    param_1[0x5a] = 0.0;
    param_1[0x5b] = 0.0;
    param_1[0x61] = 0.0;
    param_1[0x62] = 0.0;
    param_1[99] = 0.0;
    param_1[0x65] = fVar34;
    param_1[0x66] = 0.0;
    param_1[0x67] = 0.0;
    param_1[0x68] = fVar34;
    param_1[0x69] = 0.0;
    param_1[0x6a] = 0.0;
    fVar17 = DAT_ram_40099f28;
    param_1[0x6b] = fVar34;
    param_1[0x6c] = 0.0;
    fVar16 = (float)*(undefined8 *)param_1;
    param_1[0x6d] = 0.0;
    param_1[0x6e] = fVar34;
    param_1[0x6f] = 0.0;
    param_1[0x70] = 0.0;
    param_1[0x71] = 0.0;
    param_1[0x72] = fVar34;
    fVar45 = DAT_ram_4009f294;
    if (fVar17 <= fVar16) {
      fVar34 = fVar16 * DAT_ram_4009f22c;
      if (DAT_ram_4009a374 <= fVar34) {
        fVar34 = DAT_ram_4009a374;
      }
      fVar34 = (fVar34 / fVar16) * DAT_ram_4009f090;
      fVar45 = (float)FUN_ram_400009d2(fVar34);
      fVar34 = (float)FUN_ram_40000712(fVar34);
    }
    fVar17 = DAT_ram_4009672c;
    param_1[0x73] = fVar45;
    param_1[0x74] = fVar34;
    param_1[0x75] = fVar17;
    param_1[0x7a] = 0.0;
    param_1[0x7b] = 0.0;
    param_1[0x8c] = 0.0;
    param_1[0x8d] = 0.0;
    *(undefined2 *)(param_1 + 0x8e) = 0;
    if (*(short *)((int)param_1 + 0x222) == 0) {
      *(undefined2 *)((int)param_1 + 0x222) = 0x44;
    }
    if (*(short *)(param_1 + 0x88) == 0) {
      *(undefined2 *)(param_1 + 0x88) = 0x40;
    }
    fVar34 = param_1[0x8a];
    if ((fVar34 != 0.0) && (*(ushort *)(param_1 + 0x8b) != 0)) {
      uVar31 = (uint)*(ushort *)(param_1 + 0x8b) * 4;
      if (0x80 < uVar31) {
        uVar36 = uVar31 - 0x81 >> 7;
        fVar17 = (float)((uVar36 + 1) * 0x80 + (int)fVar34);
        do {
          iVar6 = memset(fVar34,0,0x80);
          fence();
          fVar34 = (float)(iVar6 + 0x80);
        } while (fVar34 != fVar17);
        uVar31 = (uVar31 - 0x80) + uVar36 * -0x80;
        fVar34 = fVar17;
      }
      memset(fVar34,0,uVar31);
      fence();
    }
    uVar59 = (ulonglong)(uint)DAT_ram_40096728;
    *(undefined2 *)(param_1 + 0x89) = 0;
    param_1[0x84] = 0.0;
    param_1[0x83] = 0.0;
    *(ulonglong *)(param_1 + 0xf) = uVar59;
    *(ulonglong *)(param_1 + 0x10) = uVar59;
    *(ulonglong *)(param_1 + 0x11) = uVar59;
    *(ulonglong *)(param_1 + 0x12) = uVar59;
    *(ulonglong *)(param_1 + 0x13) = uVar59;
    *(ulonglong *)(param_1 + 0x14) = uVar59;
    *(ulonglong *)(param_1 + 0x15) = uVar59;
    *(ulonglong *)(param_1 + 0x16) = uVar59;
    *(ulonglong *)(param_1 + 0x17) = uVar59;
    *(undefined2 *)((int)param_1 + 0x242) = 0;
    param_1[0x91] = 0.0;
    *(undefined2 *)(param_1 + 0x92) = 0;
    *(undefined1 *)((int)param_1 + 0x24a) = 0;
    *(char *)(param_1 + 8) = (char)param_8;
    uVar31 = param_8;
    goto LAB_ram_40061fce;
  }
LAB_ram_40062004:
  fVar45 = DAT_ram_40099f90;
  fVar17 = DAT_ram_4009675c;
  fVar34 = DAT_ram_4009672c;
  fVar16 = param_1[4];
  if ((fVar16 == 0.0) || (param_1[5] == 0.0)) {
    if ((param_9 == '\0') || (param_3 == (float *)0x0)) goto LAB_ram_400620ca;
    if (param_5 == (float *)0x0) {
      pfVar26 = param_2 + param_6;
      do {
        uVar61 = *(undefined8 *)param_2;
        fVar34 = *param_3;
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        *param_4 = ((float)uVar61 + fVar34) * fVar17;
        param_4 = param_4 + 1;
      } while (pfVar26 != param_2);
      return;
    }
    goto LAB_ram_4006201e;
  }
  if (param_7 == (float *)0x0) {
    uVar59 = (ulonglong)DAT_ram_4009f304;
    uVar58 = (ulonglong)DAT_ram_4009f308;
    fVar17 = DAT_ram_4009b144;
    fVar51 = DAT_ram_4009f2dc;
LAB_ram_40062a60:
    uVar57 = (ulonglong)(uint)fVar51;
    if (DAT_ram_4009672c < fVar51) {
      uVar57 = (ulonglong)(uint)DAT_ram_4009672c;
    }
  }
  else {
    fVar51 = *param_7;
    uVar58 = (ulonglong)(uint)fVar51;
    fVar23 = param_7[1];
    fVar17 = param_7[2];
    if (0.0 <= fVar51) {
      if (DAT_ram_4009672c < fVar51) {
        uVar58 = (ulonglong)(uint)DAT_ram_4009672c;
      }
    }
    else {
      uVar58 = 0;
    }
    if (0.0 <= fVar23) {
      uVar59 = (ulonglong)(uint)fVar23;
      if (DAT_ram_4009672c < fVar23) {
        uVar59 = (ulonglong)(uint)DAT_ram_4009672c;
      }
    }
    else {
      uVar59 = 0;
    }
    if (0.0 <= fVar17) {
      if (DAT_ram_4009672c < fVar17) {
        fVar17 = DAT_ram_4009672c;
      }
    }
    else {
      fVar17 = 0.0;
    }
    fVar51 = param_7[3];
    if (0.0 <= param_7[3]) goto LAB_ram_40062a60;
    uVar57 = 0;
  }
  uVar44 = (ulonglong)(uint)DAT_ram_4009672c;
  fVar51 = (float)*(undefined8 *)param_1;
  if ((float)*(undefined8 *)param_1 <= DAT_ram_40099f28) {
    fVar51 = DAT_ram_4009678c;
  }
  uVar64 = (ulonglong)(uint)DAT_ram_40099f6c;
  fVar23 = (float)uVar58;
  param_1[0x25] = DAT_ram_4009672c;
  param_1[0x26] = fVar45;
  *(ulonglong *)(param_1 + 7) = uVar64;
  puVar63 = PTR_entry_ram_40096740;
  if (param_1[0xf] == fVar23) goto LAB_ram_400621e6;
  puVar54 = DAT_ram_4009f0ac;
  if ((0.0 <= fVar23) && (puVar54 = PTR_entry_ram_40096740, fVar23 <= fVar34)) {
    puVar54 = (undefined *)((fVar23 * DAT_ram_4009b14c + fVar34) * (float)DAT_ram_4009f0ac);
  }
  uVar64 = (ulonglong)(uint)(fVar51 * (float)puVar54);
  fVar45 = param_1[2];
  if (fVar34 <= fVar51 * (float)puVar54) {
    fVar23 = fVar34;
    if (1 < (uint)fVar45) goto LAB_ram_400635b0;
LAB_ram_400635b6:
    if (fVar23 < (float)uVar64) {
      uVar64 = (ulonglong)(uint)fVar23;
    }
  }
  else {
    uVar64 = uVar44;
    if (1 < (uint)fVar45) {
LAB_ram_400635b0:
      fVar23 = (float)((int)fVar45 - 2);
      goto LAB_ram_400635b6;
    }
  }
  *(ulonglong *)(param_1 + 0x1c) = uVar64;
  *(ulonglong *)(param_1 + 0xf) = uVar58;
LAB_ram_400621e6:
  fVar45 = (float)uVar59;
  if ((float)*(undefined8 *)(param_1 + 0x10) != fVar45) {
    uVar58 = 0;
    if (0.0 <= fVar45) {
      if (fVar45 <= fVar34) {
        fVar45 = fVar45 * DAT_ram_40096730 + 0.0;
        uVar58 = (ulonglong)(uint)fVar45;
        if (fVar45 < 0.0) {
          uVar58 = 0;
        }
        else if (DAT_ram_40096730 < fVar45) {
          uVar58 = (ulonglong)(uint)DAT_ram_40096730;
        }
      }
      else {
        uVar58 = (ulonglong)(uint)DAT_ram_40096730;
      }
    }
    *(ulonglong *)(param_1 + 0x1d) = uVar58;
    *(ulonglong *)(param_1 + 0x10) = uVar59;
  }
  if ((float)*(undefined8 *)(param_1 + 0x11) == fVar17) {
    fVar45 = param_1[0x27];
    fVar17 = DAT_ram_40099f90;
    fVar51 = fVar34;
  }
  else {
    fVar45 = fVar51 * DAT_ram_4009f22c;
    fVar16 = (-(fVar17 * DAT_ram_40099f9c) + fVar34) * DAT_ram_4009a35c;
    fVar21 = DAT_ram_4009b128;
    fVar23 = DAT_ram_4009f30c;
    fVar27 = DAT_ram_4009678c;
    fVar48 = fVar51;
    if (DAT_ram_4009b128 <= fVar16) {
      if (fVar45 < fVar16) {
        fVar16 = fVar45;
      }
      fVar21 = fVar16;
      fVar23 = DAT_ram_4009f0b4;
      fVar27 = fVar51;
      fVar48 = fVar16;
      if (fVar51 < fVar34) {
        fVar45 = DAT_ram_4009f1fc._4_4_;
        fVar27 = DAT_ram_4009678c;
        fVar51 = DAT_ram_4009678c;
      }
    }
    if (fVar34 <= fVar48) {
      fVar27 = fVar51;
      if (fVar45 < fVar21) {
        fVar23 = fVar45 * DAT_ram_4009f0b4;
      }
      else {
        fVar23 = fVar21 * DAT_ram_4009f0b4;
      }
    }
    fVar45 = (float)FUN_ram_40000bd8(fVar23 / fVar27);
    fVar16 = param_1[4];
    param_1[0x27] = fVar45;
    param_1[0x11] = fVar17;
    fVar17 = param_1[0x26];
    fVar51 = param_1[0x25];
  }
  if ((float)*(undefined8 *)(param_1 + 0x12) == (float)uVar57) {
    uVar57 = *(ulonglong *)(param_1 + 0x1e);
  }
  else {
    *(ulonglong *)(param_1 + 0x1e) = uVar57;
    *(ulonglong *)(param_1 + 0x12) = uVar57;
  }
  fVar23 = (float)uVar57;
  if ((float)*(undefined8 *)(param_1 + 0x13) == fVar34) {
    fVar21 = (float)*(undefined8 *)(param_1 + 0x1f);
  }
  else {
    *(ulonglong *)(param_1 + 0x1f) = uVar44;
    *(ulonglong *)(param_1 + 0x13) = uVar44;
    fVar21 = fVar34;
  }
  if (0.0 <= fVar45) {
    if (fVar45 <= fVar34) {
      fVar27 = fVar34 - fVar45;
    }
    else {
      fVar27 = 0.0;
      fVar45 = fVar34;
    }
  }
  else {
    fVar27 = fVar34;
    fVar45 = 0.0;
  }
  fVar48 = param_1[0x28];
  if (0.0 <= fVar48) {
    if (fVar34 < fVar48) {
      fVar48 = fVar34;
    }
  }
  else {
    fVar48 = 0.0;
  }
  fVar49 = (float)*(undefined8 *)(param_1 + 0x1d);
  if (0.0 <= fVar49) {
    if (DAT_ram_40096730 < fVar49) {
      fVar49 = DAT_ram_40096730;
    }
  }
  else {
    fVar49 = 0.0;
  }
  if (0.0 <= fVar23) {
    if (fVar34 < fVar23) {
      fVar23 = fVar34;
    }
  }
  else {
    fVar23 = 0.0;
  }
  if (0.0 <= fVar21) {
    if (fVar34 < fVar21) {
      fVar21 = fVar34;
    }
  }
  else {
    fVar21 = 0.0;
  }
  if (0.0 <= fVar17) {
    if (fVar34 < fVar17) {
      fVar17 = fVar34;
    }
  }
  else {
    fVar17 = 0.0;
  }
  if (fVar51 <= 0.0) {
    fVar51 = fVar34;
  }
  fVar50 = fVar34 / (float)param_6;
  fVar12 = (float)*(undefined8 *)(param_1 + 0x1c);
  if (*(char *)(param_1 + 0x24) == '\0') {
    param_1[0x20] = fVar12;
    param_1[0x21] = fVar49;
    param_1[0x22] = fVar23;
    param_1[0x23] = fVar21;
    *(undefined1 *)(param_1 + 0x24) = 1;
    fVar40 = fVar23;
    fVar32 = fVar12;
    fVar41 = fVar21;
    fVar42 = fVar49;
  }
  else {
    fVar40 = param_1[0x22];
    fVar32 = param_1[0x20];
    fVar41 = param_1[0x23];
    fVar42 = param_1[0x21];
  }
  fVar35 = DAT_ram_4009f32c;
  fVar30 = DAT_ram_4009f324._4_4_;
  fVar55 = DAT_ram_4009f0b0;
  fVar56 = DAT_ram_4009a644;
  fVar19 = DAT_ram_40099f30;
  fVar20 = DAT_ram_4009675c;
  fVar28 = DAT_ram_4009673c;
  fVar47 = param_1[2];
  fVar12 = fVar12 - fVar32;
  fVar23 = fVar23 - fVar40;
  fVar21 = fVar21 - fVar41;
  fVar49 = fVar49 - fVar42;
  fVar25 = (float)(uint)fVar47 - (float)puVar63;
  fVar24 = param_1[0x18];
  uVar59 = *(ulonglong *)(param_1 + 0x19);
  uVar58 = *(ulonglong *)(param_1 + 0x1a);
  puVar33 = (undefined8 *)param_1[1];
  fVar18 = param_1[3];
  pfVar39 = param_2 + param_6;
  pfVar26 = param_3;
  pfVar14 = param_5;
  fVar43 = param_1[0x1b];
  do {
    fVar53 = (float)*(undefined8 *)param_2;
    if ((param_9 != '\0') && (param_3 != (float *)0x0)) {
      fVar53 = (fVar53 + *pfVar26) * fVar20;
    }
    fVar46 = fVar34;
    if ((fVar34 <= fVar32) && (fVar46 = fVar25, fVar32 <= fVar25)) {
      fVar46 = fVar32;
    }
    fVar46 = (float)(uint)fVar18 - fVar46;
    if (fVar46 < 0.0) {
      fVar46 = fVar46 + (float)(uint)fVar47;
    }
    uVar31 = (uint)(-1 < (int)fVar46) * (int)fVar46;
    puVar7 = (undefined8 *)((int)puVar33 + (uVar31 + 1) * 4);
    if ((uint)fVar47 <= uVar31 + 1) {
      puVar7 = puVar33;
    }
    iVar6 = (int)fVar18 * 4;
    fVar18 = (float)((int)fVar18 + 1 & -(uint)((uint)((int)fVar18 + 1) < (uint)fVar47));
    fVar24 = ((float)*(undefined8 *)((int)puVar33 + uVar31 * 4) *
              (fVar34 - (fVar46 - (float)uVar31)) + (fVar46 - (float)uVar31) * (float)*puVar7) *
             fVar27 + fVar45 * fVar24;
    fVar46 = fVar24 * fVar27 + fVar45 * (float)uVar59;
    uVar59 = (ulonglong)(uint)fVar46;
    fVar43 = ((fVar46 + (float)uVar58) - fVar43) * fVar48;
    uVar58 = (ulonglong)(uint)fVar43;
    *(ulonglong *)((int)puVar33 + iVar6) = (ulonglong)(uint)(fVar43 * fVar42 + fVar53);
    fVar53 = fVar43;
    if ((fVar16 != 0.0) && (param_1[5] != 0.0)) {
      puVar8 = (ulonglong *)((int)fVar16 + (int)param_1[6] * 4);
      fVar15 = (float)((int)param_1[6] + 1);
      fVar53 = -((float)*(undefined8 *)(param_1 + 7) * fVar43) + (float)*puVar8;
      if ((uint)param_1[5] <= (uint)fVar15) {
        fVar15 = 0.0;
      }
      *puVar8 = (ulonglong)(uint)((float)*(undefined8 *)(param_1 + 7) * fVar53 + fVar43);
      param_1[6] = fVar15;
    }
    fVar43 = (fVar17 * fVar53 + fVar43) * fVar51;
    fVar53 = DAT_ram_4009f310;
    if ((fVar43 <= fVar28) && (fVar53 = DAT_ram_4009f314, fVar55 <= fVar43)) {
      fVar53 = ((fVar43 * fVar43 + fVar30) * fVar43) / (fVar43 * fVar43 * fVar35 + fVar30);
    }
    if (fVar40 < 0.0) {
      fVar53 = fVar53 * 0.0;
      fVar43 = fVar34;
    }
    else {
      fVar43 = 0.0;
      if (fVar40 <= fVar34) {
        fVar53 = fVar53 * fVar40;
        if (fVar40 <= fVar56) {
LAB_ram_4006298e:
          fVar43 = fVar34;
        }
        else {
          fVar43 = -((fVar40 - fVar56) * fVar19) + fVar34;
          if (0.0 <= fVar43) {
            if (fVar34 < fVar43) goto LAB_ram_4006298e;
          }
          else {
            fVar43 = 0.0;
          }
        }
      }
    }
    fVar15 = (float)*(undefined8 *)param_2;
    if ((param_9 == '\0') || (param_3 == (float *)0x0)) {
      fVar43 = fVar41 * (fVar15 * fVar43 + fVar53);
      *param_4 = fVar43;
      if (param_5 != (float *)0x0) goto LAB_ram_40062516;
    }
    else {
      fVar53 = fVar41 * (fVar43 * (fVar15 + *pfVar26) * fVar20 + fVar53);
      if (param_5 == (float *)0x0) {
        *param_4 = fVar53;
      }
      else {
        fVar15 = fVar15 - *pfVar26;
        fVar22 = fVar43 * fVar41 * fVar20;
        fVar43 = -(fVar22 * fVar15) + fVar53;
        *param_4 = fVar22 * fVar15 + fVar53;
LAB_ram_40062516:
        *(ulonglong *)pfVar14 = (ulonglong)(uint)fVar43;
      }
    }
    param_2 = param_2 + 1;
    fVar32 = fVar32 + fVar12 * fVar50;
    fVar42 = fVar42 + fVar49 * fVar50;
    fVar40 = fVar40 + fVar23 * fVar50;
    fVar41 = fVar41 + fVar21 * fVar50;
    param_4 = param_4 + 1;
    pfVar14 = pfVar14 + 1;
    pfVar26 = pfVar26 + 1;
    fVar43 = fVar46;
    if (pfVar39 == param_2) {
      param_1[3] = fVar18;
      param_1[0x18] = fVar24;
      *(ulonglong *)(param_1 + 0x19) = uVar59;
      *(ulonglong *)(param_1 + 0x1a) = uVar58;
      *(ulonglong *)(param_1 + 0x1b) = uVar59;
      param_1[0x20] = fVar32;
      param_1[0x21] = fVar42;
      param_1[0x22] = fVar40;
      param_1[0x23] = fVar41;
      return;
    }
  } while( true );
}


