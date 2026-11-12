/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40081000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40081308.
 * REA evidence: ev_4a4e9c080a3842be9bac77748c8af2108fd6735928fba75b0af732e451e1b223
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40081308(float param_1,int *param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_register_00000100;
  float fVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int extraout_a5;
  int extraout_a5_00;
  int *piVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fStack_a8;
  
  if (param_2 == (int *)0x0) {
    return 0xffffffff;
  }
  if (*param_2 != 0) {
    FUN_ram_40002f4a();
    *param_2 = 0;
  }
  param_2[1] = 0;
  if (param_2[2] != 0) {
    FUN_ram_40002f4a();
    param_2[2] = 0;
  }
  param_2[3] = 0;
  if (param_2[5] != 0) {
    FUN_ram_40002f4a();
    param_2[5] = 0;
  }
  if (param_2[6] != 0) {
    FUN_ram_40002f4a();
    param_2[6] = 0;
  }
  if (param_2[7] != 0) {
    FUN_ram_40002f4a();
    param_2[7] = 0;
  }
  if (param_2[8] != 0) {
    FUN_ram_40002f4a();
    param_2[8] = 0;
  }
  if (param_2[0xc] != 0) {
    FUN_ram_40002f4a();
    param_2[0xc] = 0;
  }
  if (param_2[0xd] != 0) {
    FUN_ram_40002f4a();
    param_2[0xd] = 0;
  }
  if (param_2[0xe] != 0) {
    FUN_ram_40002f4a();
    param_2[0xe] = 0;
  }
  param_2[4] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  if (param_3 != (int *)0x0) {
    uVar18 = param_3[1];
    if (uVar18 == 0) {
      if (*param_2 != 0) {
        FUN_ram_40002f4a();
        *param_2 = 0;
      }
      uVar18 = param_3[3];
      param_2[1] = 0;
      fVar6 = in_register_00000100;
    }
    else {
      if ((int)((ulonglong)uVar18 * 0x54 >> 0x20) != 0) {
        return 0xfffffffd;
      }
      uVar16 = 0;
      if (uVar18 * 0x54 == 0) {
        return 0xfffffffd;
      }
      piVar15 = (int *)*param_3;
      iVar8 = FUN_ram_40002f2a(1);
      fVar5 = DAT_ram_400980f4;
      fVar4 = DAT_ram_4009281c;
      if (iVar8 == 0) {
        return 0xfffffffd;
      }
      puVar7 = (ulonglong *)(iVar8 + 0x38);
      fVar6 = in_register_00000100;
      do {
        if (piVar15 != (int *)0x0) {
          fVar21 = (float)piVar15[1];
          iVar17 = *piVar15;
          *(float *)((int)puVar7 + -0x34) = fVar21;
          fVar27 = (float)piVar15[2];
          *(int *)(puVar7 + -7) = iVar17;
          *(float *)(puVar7 + -6) = fVar27;
          fVar19 = (float)piVar15[3];
          *(float *)((int)puVar7 + -0x2c) = fVar19;
          iVar9 = piVar15[4];
          *(float *)((int)puVar7 + -0x24) = param_1;
          *(int *)(puVar7 + -5) = iVar9;
          if (0.0 < param_1) {
            fVar21 = (fVar21 * fVar5) / param_1;
            fVar20 = (float)FUN_ram_40000786(fVar21);
            fVar21 = (float)FUN_ram_40000a08(fVar21);
            if (iVar17 == 2) {
              fVar23 = (float)FUN_ram_40000d54(DAT_ram_400930a4,fVar19 / DAT_ram_400930dc);
              fVar26 = fVar20 * DAT_ram_40092834;
              fVar21 = fVar21 / (*(float *)(puVar7 + -6) + *(float *)(puVar7 + -6));
              fStack_a8 = fVar23 * fVar21 + DAT_ram_4009281c;
              fVar19 = -(fVar23 * fVar21) + DAT_ram_4009281c;
              fVar27 = fVar21 / fVar23 + DAT_ram_4009281c;
              fVar21 = DAT_ram_4009281c - fVar21 / fVar23;
              fVar23 = fVar26;
            }
            else if (iVar17 - 3U < 2) {
              fVar21 = fVar21 / (fVar27 + fVar27);
              if (iVar17 == 3) {
                fVar26 = DAT_ram_4009281c - fVar20;
                fStack_a8 = fVar26;
              }
              else {
                fVar26 = -(fVar20 + DAT_ram_4009281c);
                fStack_a8 = fVar20 + DAT_ram_4009281c;
              }
              fStack_a8 = fStack_a8 * DAT_ram_40092864;
              fVar27 = fVar21 + DAT_ram_4009281c;
              fVar21 = DAT_ram_4009281c - fVar21;
              fVar23 = fVar20 * in_register_00000100;
              fVar19 = fStack_a8;
            }
            else {
              fVar22 = (float)FUN_ram_40000d54(in_register_00000100,fVar19 / DAT_ram_400930dc);
              fVar25 = (fVar4 / fVar22 + fVar22) * (fVar4 / *(float *)(puVar7 + -5) - fVar4) +
                       in_register_00000100;
              if (extraout_a5 < 0x100 && fVar25 < 0.0) {
                fVar25 = (float)FUN_ram_40000e84();
              }
              else {
                fVar25 = SQRT(fVar25);
              }
              fVar3 = fVar22 - fVar4;
              fVar25 = fVar21 * in_register_00000100 * fVar25;
              fVar27 = fVar22 + fVar4;
              fVar21 = fVar20 * fVar3;
              if ((int)puVar7[-7] == 0) {
                fVar19 = fVar27 - fVar21;
                if (fVar22 < 0.0) {
                  fVar23 = (float)FUN_ram_40000e84(fVar22);
                  fStack_a8 = fVar25 * (fVar23 + fVar23) + fVar19;
                  fVar26 = (fVar22 + fVar22) * (-(fVar20 * fVar27) + fVar3);
                  fVar23 = (float)FUN_ram_40000e84(fVar22);
                  fVar21 = fVar21 + fVar27;
                  fVar19 = -(fVar25 * (fVar23 + fVar23)) + fVar19;
                  fVar24 = (float)FUN_ram_40000e84(fVar22);
                  fVar24 = fVar24 + fVar24;
                  fVar23 = (fVar20 * fVar27 + fVar3) * in_register_00000100;
                  goto LAB_ram_40081c2c;
                }
                fVar21 = fVar21 + fVar27;
                fVar26 = (fVar22 + fVar22) * (-(fVar20 * fVar27) + fVar3);
                fVar23 = (fVar20 * fVar27 + fVar3) * in_register_00000100;
              }
              else {
                fVar19 = fVar21 + fVar27;
                if ((int)puVar7[-7] < 0x100 && fVar22 < 0.0) {
                  fVar23 = (float)FUN_ram_40000e84(fVar22);
                  fVar26 = fVar22 * in_register_00000100 * (fVar20 * fVar27 + fVar3);
                  fStack_a8 = fVar25 * (fVar23 + fVar23) + fVar19;
                  fVar23 = (float)FUN_ram_40000e84(fVar22);
                  fVar21 = fVar27 - fVar21;
                  fVar19 = -(fVar25 * (fVar23 + fVar23)) + fVar19;
                  fVar24 = (float)FUN_ram_40000e84(fVar22);
                  fVar3 = -(fVar20 * fVar27) + fVar3;
                  fVar24 = fVar24 + fVar24;
                  fVar23 = fVar3 + fVar3;
LAB_ram_40081c2c:
                  fStack_a8 = fVar22 * fStack_a8;
                  fVar19 = fVar22 * fVar19;
                  fVar20 = (float)FUN_ram_40000e84(fVar22);
                  fVar27 = fVar25 * fVar24 + fVar21;
                  fVar21 = -(fVar25 * (fVar20 + fVar20)) + fVar21;
                  goto LAB_ram_400814ec;
                }
                fVar23 = -(fVar20 * fVar27) + fVar3;
                fVar21 = fVar27 - fVar21;
                fVar23 = fVar23 + fVar23;
                fVar26 = fVar22 * in_register_00000100 * (fVar20 * fVar27 + fVar3);
              }
              fVar20 = SQRT(fVar22) + SQRT(fVar22);
              fVar27 = fVar25 * fVar20 + fVar21;
              fVar21 = -(fVar25 * fVar20) + fVar21;
              fStack_a8 = fVar22 * (fVar25 * fVar20 + fVar19);
              fVar19 = fVar22 * (-(fVar25 * fVar20) + fVar19);
            }
LAB_ram_400814ec:
            *(float *)((int)puVar7 + -0x14) = fVar23 / fVar27;
            *(ulonglong *)((int)puVar7 + 0xc) = (ulonglong)(uint)-(fVar23 / fVar27);
            *(float *)(puVar7 + -2) = fVar21 / fVar27;
            puVar7[2] = (ulonglong)(uint)-(fVar21 / fVar27);
            *(float *)(puVar7 + -4) = fStack_a8 / fVar27;
            *puVar7 = (ulonglong)(uint)(fStack_a8 / fVar27);
            *(float *)((int)puVar7 + -0x1c) = fVar26 / fVar27;
            *(float *)((int)puVar7 + 4) = fVar26 / fVar27;
            *(float *)(puVar7 + -3) = fVar19 / fVar27;
            puVar7[1] = (ulonglong)(uint)(fVar19 / fVar27);
          }
          *(undefined4 *)((int)puVar7 + 0x14) = 0;
          *(undefined4 *)(puVar7 + 3) = 0;
          FUN_ram_40090832((int)puVar7 + -0xc,1,puVar7,(int)puVar7 + 0x14);
        }
        uVar16 = uVar16 + 1;
        piVar15 = piVar15 + 5;
        puVar7 = (ulonglong *)((int)puVar7 + 0x54);
      } while (uVar16 != uVar18);
      if (*param_2 != 0) {
        FUN_ram_40002f4a();
      }
      param_2[1] = uVar18;
      uVar18 = param_3[3];
      *param_2 = iVar8;
    }
    if (uVar18 == 0) {
      if (param_2[2] != 0) {
        FUN_ram_40002f4a();
        param_2[2] = 0;
      }
      param_2[3] = 0;
    }
    else {
      if ((int)((ulonglong)uVar18 * 0x54 >> 0x20) != 0) {
        return 0xfffffffd;
      }
      uVar16 = 0;
      if (uVar18 * 0x54 == 0) {
        return 0xfffffffd;
      }
      piVar15 = (int *)param_3[2];
      iVar8 = FUN_ram_40002f2a(1);
      fVar5 = DAT_ram_400980f4;
      fVar4 = DAT_ram_4009281c;
      if (iVar8 == 0) {
        return 0xfffffffd;
      }
      puVar7 = (ulonglong *)(iVar8 + 0x38);
      do {
        if (piVar15 != (int *)0x0) {
          fVar21 = (float)piVar15[1];
          iVar17 = *piVar15;
          *(float *)((int)puVar7 + -0x34) = fVar21;
          fVar27 = (float)piVar15[2];
          *(int *)(puVar7 + -7) = iVar17;
          *(float *)(puVar7 + -6) = fVar27;
          fVar19 = (float)piVar15[3];
          *(float *)((int)puVar7 + -0x2c) = fVar19;
          iVar9 = piVar15[4];
          *(float *)((int)puVar7 + -0x24) = param_1;
          *(int *)(puVar7 + -5) = iVar9;
          if (0.0 < param_1) {
            fVar21 = (fVar21 * fVar5) / param_1;
            fVar20 = (float)FUN_ram_40000786(fVar21);
            fVar21 = (float)FUN_ram_40000a08(fVar21);
            if (iVar17 == 2) {
              fVar23 = (float)FUN_ram_40000d54(DAT_ram_400930a4,fVar19 / DAT_ram_400930dc);
              fVar26 = fVar20 * DAT_ram_40092834;
              fVar21 = fVar21 / (*(float *)(puVar7 + -6) + *(float *)(puVar7 + -6));
              fStack_a8 = fVar23 * fVar21 + DAT_ram_4009281c;
              fVar19 = -(fVar23 * fVar21) + DAT_ram_4009281c;
              fVar27 = fVar21 / fVar23 + DAT_ram_4009281c;
              fVar21 = DAT_ram_4009281c - fVar21 / fVar23;
              fVar23 = fVar26;
            }
            else if (iVar17 - 3U < 2) {
              fVar21 = fVar21 / (fVar27 + fVar27);
              if (iVar17 == 3) {
                fVar26 = DAT_ram_4009281c - fVar20;
                fStack_a8 = fVar26;
              }
              else {
                fVar26 = -(fVar20 + DAT_ram_4009281c);
                fStack_a8 = fVar20 + DAT_ram_4009281c;
              }
              fStack_a8 = fStack_a8 * DAT_ram_40092864;
              fVar27 = fVar21 + DAT_ram_4009281c;
              fVar21 = DAT_ram_4009281c - fVar21;
              fVar23 = fVar20 * fVar6;
              fVar19 = fStack_a8;
            }
            else {
              fVar22 = (float)FUN_ram_40000d54(fVar6,fVar19 / DAT_ram_400930dc);
              fVar25 = (fVar4 / fVar22 + fVar22) * (fVar4 / *(float *)(puVar7 + -5) - fVar4) + fVar6
              ;
              if (extraout_a5_00 < 0x100 && fVar25 < 0.0) {
                fVar25 = (float)FUN_ram_40000e84(fVar25);
              }
              else {
                fVar25 = SQRT(fVar25);
              }
              fVar3 = fVar22 - fVar4;
              fVar25 = fVar25 * fVar21 * fVar6;
              fVar27 = fVar22 + fVar4;
              fVar21 = fVar20 * fVar3;
              if ((int)puVar7[-7] == 0) {
                fVar19 = fVar27 - fVar21;
                if (fVar22 < 0.0) {
                  fVar23 = (float)FUN_ram_40000e84(fVar22);
                  fStack_a8 = (fVar23 + fVar23) * fVar25 + fVar19;
                  fVar26 = (fVar22 + fVar22) * (-(fVar20 * fVar27) + fVar3);
                  fVar23 = (float)FUN_ram_40000e84(fVar22);
                  fVar21 = fVar21 + fVar27;
                  fVar19 = -(fVar25 * (fVar23 + fVar23)) + fVar19;
                  fVar24 = (float)FUN_ram_40000e84(fVar22);
                  fVar24 = fVar24 + fVar24;
                  fVar23 = (fVar20 * fVar27 + fVar3) * fVar6;
LAB_ram_40081cfe:
                  fStack_a8 = fVar22 * fStack_a8;
                  fVar19 = fVar19 * fVar22;
                  fVar20 = (float)FUN_ram_40000e84(fVar22);
                  fVar27 = fVar25 * fVar24 + fVar21;
                  fVar21 = -(fVar25 * (fVar20 + fVar20)) + fVar21;
                  goto LAB_ram_40081678;
                }
                fVar21 = fVar21 + fVar27;
                fVar26 = (fVar22 + fVar22) * (-(fVar20 * fVar27) + fVar3);
                fVar23 = (fVar20 * fVar27 + fVar3) * fVar6;
              }
              else {
                fVar19 = fVar21 + fVar27;
                if ((int)puVar7[-7] < 0x100 && fVar22 < 0.0) {
                  fVar23 = (float)FUN_ram_40000e84(fVar22);
                  fVar26 = fVar22 * fVar6 * (fVar20 * fVar27 + fVar3);
                  fStack_a8 = fVar25 * (fVar23 + fVar23) + fVar19;
                  fVar23 = (float)FUN_ram_40000e84(fVar22);
                  fVar21 = fVar27 - fVar21;
                  fVar19 = -(fVar25 * (fVar23 + fVar23)) + fVar19;
                  fVar24 = (float)FUN_ram_40000e84(fVar22);
                  fVar3 = -(fVar20 * fVar27) + fVar3;
                  fVar24 = fVar24 + fVar24;
                  fVar23 = fVar3 + fVar3;
                  goto LAB_ram_40081cfe;
                }
                fVar23 = -(fVar20 * fVar27) + fVar3;
                fVar21 = fVar27 - fVar21;
                fVar23 = fVar23 + fVar23;
                fVar26 = fVar22 * fVar6 * (fVar20 * fVar27 + fVar3);
              }
              fVar20 = SQRT(fVar22) + SQRT(fVar22);
              fVar27 = fVar25 * fVar20 + fVar21;
              fVar21 = -(fVar25 * fVar20) + fVar21;
              fStack_a8 = fVar22 * (fVar25 * fVar20 + fVar19);
              fVar19 = fVar22 * (-(fVar25 * fVar20) + fVar19);
            }
LAB_ram_40081678:
            *(float *)((int)puVar7 + -0x14) = fVar23 / fVar27;
            *(ulonglong *)((int)puVar7 + 0xc) = (ulonglong)(uint)-(fVar23 / fVar27);
            *(float *)(puVar7 + -2) = fVar21 / fVar27;
            puVar7[2] = (ulonglong)(uint)-(fVar21 / fVar27);
            *(float *)(puVar7 + -4) = fStack_a8 / fVar27;
            *puVar7 = (ulonglong)(uint)(fStack_a8 / fVar27);
            *(float *)((int)puVar7 + -0x1c) = fVar26 / fVar27;
            *(float *)((int)puVar7 + 4) = fVar26 / fVar27;
            *(float *)(puVar7 + -3) = fVar19 / fVar27;
            *(float *)(puVar7 + 1) = fVar19 / fVar27;
          }
          *(undefined4 *)((int)puVar7 + 0x14) = 0;
          *(undefined4 *)(puVar7 + 3) = 0;
          FUN_ram_40090832((int)puVar7 + -0xc,1,puVar7,(int)puVar7 + 0x14);
        }
        uVar16 = uVar16 + 1;
        piVar15 = piVar15 + 5;
        puVar7 = (ulonglong *)((int)puVar7 + 0x54);
      } while (uVar16 != uVar18);
      if (param_2[2] != 0) {
        FUN_ram_40002f4a();
      }
      param_2[2] = iVar8;
      param_2[3] = uVar18;
    }
    if (param_2[5] != 0) {
      FUN_ram_40002f4a();
      param_2[5] = 0;
    }
    if (param_2[6] != 0) {
      FUN_ram_40002f4a();
      param_2[6] = 0;
    }
    if (param_2[7] != 0) {
      FUN_ram_40002f4a();
      param_2[7] = 0;
    }
    if (param_2[8] != 0) {
      FUN_ram_40002f4a();
      param_2[8] = 0;
    }
    if (param_2[0xc] != 0) {
      FUN_ram_40002f4a();
      param_2[0xc] = 0;
    }
    if (param_2[0xd] != 0) {
      FUN_ram_40002f4a();
      param_2[0xd] = 0;
    }
    if (param_2[0xe] != 0) {
      FUN_ram_40002f4a();
      param_2[0xe] = 0;
    }
    param_2[4] = 0;
    uVar1 = *(ushort *)((int)param_3 + 0x12);
    uVar18 = (uint)uVar1;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    if (uVar18 != 0) {
      uVar2 = *(ushort *)(param_3 + 4);
      if (uVar2 != 0) {
        iVar8 = uVar2 * uVar18;
        if (iVar8 * 0xc == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = FUN_ram_40002f3c();
        }
        param_2[5] = iVar9;
        iVar17 = uVar18 * 0xc;
        if (uVar18 * uVar18 * 0xc == 0) {
          param_2[6] = 0;
          iVar8 = FUN_ram_40002f3c(iVar17);
          param_2[7] = iVar8;
          iVar8 = FUN_ram_40002f3c(iVar17);
          param_2[8] = iVar8;
          iVar8 = FUN_ram_40002f2a(1,uVar18 << 2);
          param_2[0xc] = iVar8;
          iVar8 = FUN_ram_40002f2a(1,iVar17);
          param_2[0xd] = iVar8;
          iVar8 = FUN_ram_40002f2a(1,iVar17);
          param_2[0xe] = iVar8;
        }
        else {
          iVar10 = FUN_ram_40002f3c();
          param_2[6] = iVar10;
          iVar11 = FUN_ram_40002f3c(iVar17);
          param_2[7] = iVar11;
          iVar12 = FUN_ram_40002f3c(iVar17);
          param_2[8] = iVar12;
          iVar13 = FUN_ram_40002f2a(1,uVar18 << 2);
          param_2[0xc] = iVar13;
          iVar14 = FUN_ram_40002f2a(1,iVar17);
          param_2[0xd] = iVar14;
          iVar17 = FUN_ram_40002f2a(1,iVar17);
          param_2[0xe] = iVar17;
          if ((((iVar9 != 0) && (iVar10 != 0)) && (iVar11 != 0)) &&
             (((iVar12 != 0 && (iVar13 != 0)) && ((iVar14 != 0 && (iVar17 != 0)))))) {
            FUN_ram_4000305c(iVar9,param_3[5],param_3[6] << 2);
            FUN_ram_4000305c(iVar10,param_3[7],param_3[8] << 2);
            FUN_ram_4000305c(iVar11,param_3[9],param_3[10] << 2);
            FUN_ram_4000305c(iVar12,param_3[0xb],param_3[0xc] << 2);
            *(ushort *)(param_2 + 4) = uVar2;
            *(ushort *)((int)param_2 + 0x12) = uVar1;
            param_2[9] = iVar8 * 3;
            param_2[10] = uVar18 * uVar18 * 3;
            param_2[0xb] = uVar18 * 3;
            return 0;
          }
        }
        FUN_ram_4007fa9a(param_2 + 4);
        return 0xfffffffd;
      }
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x40081d82.
 * REA evidence: ev_f62434279a701c90c06b8ef05f60fb0d3f830aeaa8cce70c465c7faf5e428a98
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40081d82(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  float fVar11;
  ulonglong uVar12;
  ulonglong extraout_fa0;
  
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0x48);
    fVar1 = DAT_ram_4009281c;
    puVar10 = (ulonglong *)&DAT_ram_30082bd8;
    *(ulonglong *)((int)param_1 + 0x40) = (ulonglong)(uint)DAT_ram_4009281c;
    fVar6 = DAT_ram_40099364;
    fVar5 = DAT_ram_400989d4;
    fVar4 = DAT_ram_400930c4;
    fVar3 = DAT_ram_400930a4;
    fVar2 = DAT_ram_40092850;
    uVar8 = 0;
    if (DAT_ram_30083be0 == '\0') {
      uVar12 = (ulonglong)DAT_ram_40099360;
      fVar11 = 0.0;
      iVar7 = 0;
      while( true ) {
        *puVar10 = uVar12;
        iVar7 = iVar7 + 1;
        fVar11 = (float)FUN_ram_40000c0e(-((fVar11 / fVar6) * fVar4 + fVar2),uVar8);
        puVar9 = (ulonglong *)((int)puVar10 + 0x804);
        puVar10 = (ulonglong *)((int)puVar10 + 4);
        *puVar9 = (ulonglong)(uint)(fVar1 / (fVar11 + fVar1));
        if (iVar7 == 0x200) break;
        fVar11 = (float)iVar7;
        uVar8 = FUN_ram_40000ad8((fVar11 / fVar6) * fVar3 + fVar5);
        uVar12 = extraout_fa0;
      }
      _DAT_ram_300833d8 = _DAT_ram_300833d4;
      _DAT_ram_30083bdc = _DAT_ram_30083bd8;
      DAT_ram_30083be0 = '\x01';
    }
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x40081e98.
 * REA evidence: ev_b1a2987e2e7323bd474d7f949eb97c7f79ca143ce10ce01319e3ce476145b5f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40081e98(int *param_1,uint *param_2,uint param_3)

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  float *pfVar11;
  float fVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  float fVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  float fVar25;
  float fVar26;
  int extraout_a3;
  int extraout_a3_00;
  uint uVar27;
  uint uVar28;
  ushort uVar29;
  uint *puVar30;
  float fVar31;
  float fVar32;
  int *piVar33;
  undefined4 uVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  undefined4 *puVar39;
  float fVar40;
  int iVar41;
  int iVar42;
  float *pfVar43;
  float *pfVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  ulonglong uVar49;
  undefined8 uVar50;
  ulonglong uVar51;
  undefined8 uVar52;
  ulonglong uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  float fStack_e4;
  float fStack_dc;
  float fStack_d8;
  uint *puStack_a8;
  uint uStack_a4;
  
  if (((param_1 == (int *)0x0) || (param_2 == (uint *)0x0)) || (param_3 == 0)) {
    return -1;
  }
  if (param_1[1] != 0) {
    FUN_ram_40080c40();
    FUN_ram_40002f4a(param_1[1]);
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    FUN_ram_4007ff18();
    FUN_ram_40002f4a(*param_1);
    *param_1 = 0;
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  puVar8 = (uint *)FUN_ram_40002f2a(1,0x16c);
  if (puVar8 == (uint *)0x0) {
    return -3;
  }
  puStack_a8 = param_2;
  uStack_a4 = param_3;
  if (3 < param_3) {
    uStack_a4 = param_3 - 4;
    puStack_a8 = param_2 + 1;
    if ((*param_2 == 0x42504444) && (1 < uStack_a4)) {
      uVar2 = (ushort)param_2[1];
      puVar30 = (uint *)((int)param_2 + 6);
      uVar27 = param_3 - 6;
      puStack_a8 = puVar30;
      uStack_a4 = uVar27;
      if ((ushort)(uVar2 - 1) < 3) {
        uVar23 = 0;
        if (3 < uVar27) {
          uVar23 = *(uint *)((int)param_2 + 6);
          puVar30 = (uint *)((int)param_2 + 10);
          uVar27 = param_3 - 10;
        }
        *puVar8 = uVar23;
        uVar23 = uVar27;
        puStack_a8 = puVar30;
        uStack_a4 = uVar27;
        if (1 < uVar27) {
          uVar3 = (ushort)*puVar30;
          puStack_a8 = (uint *)((int)puVar30 + 2);
          uVar23 = uVar27 - 2;
          uStack_a4 = uVar23;
          if (uVar3 != 0) {
            uVar29 = uVar3 - 1;
            if (uVar23 < 4) {
              puVar8[1] = 0;
              if (uVar3 == 1) {
LAB_ram_4008338c:
                uVar29 = 1;
                uStack_a4 = uVar23;
              }
              else {
LAB_ram_400832ee:
                puVar8[2] = 0;
                uStack_a4 = uVar23;
                if (uVar29 == 1) goto LAB_ram_40083386;
LAB_ram_400832f8:
                puVar8[3] = 0;
                if (uVar29 < 3) {
LAB_ram_40084604:
                  uVar29 = 3;
                }
                else {
LAB_ram_40083306:
                  puVar8[4] = 0;
                  if (uVar29 == 3) {
LAB_ram_4008460c:
                    uVar29 = 4;
                  }
                  else {
LAB_ram_40083314:
                    puVar8[5] = 0;
                    if (uVar29 < 5) {
LAB_ram_40084614:
                      uVar29 = 5;
                    }
                    else {
LAB_ram_40083322:
                      puVar8[6] = 0;
                      uVar52 = 0;
                      if (uVar29 < 6) {
LAB_ram_40084670:
                        uVar29 = 6;
                      }
                      else {
LAB_ram_40083334:
                        *(undefined8 *)(puVar8 + 7) = uVar52;
                        uVar29 = 7;
                      }
                    }
                  }
                }
              }
            }
            else {
              uVar52 = CONCAT44(puStack_a8,*(undefined4 *)((int)puVar30 + 2));
              puStack_a8 = (uint *)((int)puVar30 + 6);
              uVar23 = uVar27 - 6;
              *(undefined8 *)(puVar8 + 1) = uVar52;
              if (uVar3 == 1) goto LAB_ram_4008338c;
              if (uVar23 < 4) goto LAB_ram_400832ee;
              uVar52 = CONCAT44(puStack_a8,*(undefined4 *)((int)puVar30 + 6));
              puStack_a8 = (uint *)((int)puVar30 + 10);
              uStack_a4 = uVar27 - 10;
              *(undefined8 *)(puVar8 + 2) = uVar52;
              if (uVar3 != 2) {
                if (uStack_a4 < 4) goto LAB_ram_400832f8;
                uVar52 = CONCAT44(puStack_a8,*(undefined4 *)((int)puVar30 + 10));
                puStack_a8 = (uint *)((int)puVar30 + 0xe);
                uStack_a4 = uVar27 - 0xe;
                *(undefined8 *)(puVar8 + 3) = uVar52;
                if (2 < uVar29) {
                  if (uStack_a4 < 4) goto LAB_ram_40083306;
                  uVar52 = CONCAT44(puStack_a8,*(undefined4 *)((int)puVar30 + 0xe));
                  puStack_a8 = (uint *)((int)puVar30 + 0x12);
                  uStack_a4 = uVar27 - 0x12;
                  *(undefined8 *)(puVar8 + 4) = uVar52;
                  if (uVar29 != 3) {
                    if (uStack_a4 < 4) goto LAB_ram_40083314;
                    uVar52 = CONCAT44(puStack_a8,*puStack_a8);
                    uStack_a4 = uVar27 - 0x16;
                    puStack_a8 = (uint *)((int)puVar30 + 0x16);
                    *(undefined8 *)(puVar8 + 5) = uVar52;
                    if (4 < uVar29) {
                      if (uStack_a4 < 4) goto LAB_ram_40083322;
                      puVar9 = (uint *)((int)puVar30 + 0x1a);
                      uStack_a4 = uVar27 - 0x1a;
                      *(ulonglong *)(puVar8 + 6) =
                           CONCAT44(puStack_a8,*(undefined4 *)((int)puVar30 + 0x16));
                      puStack_a8 = puVar9;
                      if (5 < uVar29) {
                        if (uStack_a4 < 4) {
                          uVar52 = 0;
                        }
                        else {
                          puStack_a8 = (uint *)((int)puVar30 + 0x1e);
                          uStack_a4 = uVar27 - 0x1e;
                          uVar52 = CONCAT44(puVar9,*(undefined4 *)((int)puVar30 + 0x1a));
                        }
                        goto LAB_ram_40083334;
                      }
                      goto LAB_ram_40084670;
                    }
                    goto LAB_ram_40084614;
                  }
                  goto LAB_ram_4008460c;
                }
                goto LAB_ram_40084604;
              }
LAB_ram_40083386:
              uVar29 = 2;
            }
            uVar23 = uStack_a4;
            if (uVar29 < uVar3) {
              do {
                while (uVar29 = uVar29 + 1, uVar23 < 4) {
                  if (uVar3 == uVar29) goto LAB_ram_40082218;
                }
                uVar23 = uVar23 - 4;
                puStack_a8 = puStack_a8 + 1;
                uStack_a4 = uVar23;
              } while (uVar3 != uVar29);
            }
          }
        }
LAB_ram_40082218:
        uVar51 = (ulonglong)(uint)DAT_ram_4009281c;
        puVar8[8] = 0;
        *(ulonglong *)(puVar8 + 9) = uVar51;
        uVar27 = uVar23;
        if (uVar2 != 1) {
          uVar52 = 0;
          puVar30 = puStack_a8;
          if (3 < uVar23) {
            uVar27 = uVar23 - 4;
            puVar8[8] = *puStack_a8;
            puVar30 = puStack_a8 + 1;
            uStack_a4 = uVar27;
            if (3 < uVar27) {
              uVar52 = CONCAT44(puStack_a8 + 1,puStack_a8[1]);
              uVar27 = uVar23 - 8;
              puVar30 = puStack_a8 + 2;
              uStack_a4 = uVar27;
            }
          }
          puStack_a8 = puVar30;
          *(undefined8 *)(puVar8 + 9) = uVar52;
        }
        if (uVar27 < 2) {
          uVar23 = 0;
          puVar30 = puStack_a8;
LAB_ram_400826e2:
          puStack_a8 = puVar30;
          puVar8[10] = 0;
          puVar30 = puStack_a8;
LAB_ram_400826e6:
          puStack_a8 = puVar30;
          puVar8[0xb] = 0;
          puVar30 = puStack_a8;
LAB_ram_400826ea:
          puStack_a8 = puVar30;
          uVar52 = 0;
          puVar8[0xc] = 0;
          puVar8[0xd] = 0;
        }
        else {
          uStack_a4 = uVar27 - 2;
          uVar23 = (uint)(ushort)*puStack_a8;
          puVar30 = (uint *)((int)puStack_a8 + 2);
          if (uStack_a4 < 4) goto LAB_ram_400826e2;
          uStack_a4 = uVar27 - 6;
          *(ulonglong *)(puVar8 + 10) =
               CONCAT44((uint *)((int)puStack_a8 + 2),*(undefined4 *)((int)puStack_a8 + 2));
          puVar30 = (uint *)((int)puStack_a8 + 6);
          if (uStack_a4 < 4) goto LAB_ram_400826e6;
          uStack_a4 = uVar27 - 10;
          *(ulonglong *)(puVar8 + 0xb) =
               CONCAT44((uint *)((int)puStack_a8 + 6),*(undefined4 *)((int)puStack_a8 + 6));
          puVar30 = (uint *)((int)puStack_a8 + 10);
          if (uStack_a4 < 4) goto LAB_ram_400826ea;
          uStack_a4 = uVar27 - 0xe;
          *(ulonglong *)(puVar8 + 0xc) =
               CONCAT44((uint *)((int)puStack_a8 + 10),*(undefined4 *)((int)puStack_a8 + 10));
          if (uStack_a4 < 4) {
            uVar52 = 0;
            puStack_a8 = (uint *)((int)puStack_a8 + 0xe);
          }
          else {
            uVar52 = CONCAT44((uint *)((int)puStack_a8 + 0xe),*(undefined4 *)((int)puStack_a8 + 0xe)
                             );
            puStack_a8 = (uint *)((int)puStack_a8 + 0x12);
            uStack_a4 = uVar27 - 0x12;
          }
        }
        *(undefined8 *)(puVar8 + 0xd) = uVar52;
        iVar38 = FUN_ram_40080fe4(&puStack_a8,puVar8 + 0xe);
        if (iVar38 != 0) goto LAB_ram_40081f30;
        if (uVar23 != 0) {
          puVar10 = (undefined4 *)FUN_ram_40002f2a(1,uVar23 * 0x34);
          puVar8[0x10] = (uint)puVar10;
          if (puVar10 != (undefined4 *)0x0) {
            puVar8[0x11] = uVar23;
            iVar42 = 0x34;
            do {
              if (uStack_a4 < 2) {
LAB_ram_400826c0:
                puVar10[1] = 0;
                *puVar10 = 0;
                if (uStack_a4 < 2) goto LAB_ram_400826ce;
LAB_ram_4008251c:
                uVar7 = uStack_a4 - 2;
                uVar27 = *puStack_a8;
                puStack_a8 = (uint *)((int)puStack_a8 + 2);
                uVar27 = (uint)(ushort)uVar27;
                uStack_a4 = uVar7;
                if (uVar27 == 0) goto LAB_ram_400826ce;
                puVar30 = (uint *)FUN_ram_40002f2a(1,uVar27 * 0x14);
                if (puVar30 == (uint *)0x0) goto LAB_ram_40084750;
                puVar9 = puVar30;
                do {
                  while (uVar7 == 0) {
                    *puVar9 = 0;
                    puVar9[1] = 0;
                    uVar22 = uVar7;
LAB_ram_400826ac:
                    puVar9[2] = 0;
                    puVar24 = puStack_a8;
LAB_ram_400826b0:
                    puStack_a8 = puVar24;
                    puVar9[3] = 0;
                    puVar24 = puStack_a8;
LAB_ram_400826b4:
                    puStack_a8 = puVar24;
                    puVar9[4] = 0;
                    puVar9 = puVar9 + 5;
                    uVar7 = uVar22;
                    if (puVar30 + uVar27 * 5 == puVar9) goto LAB_ram_40082652;
                  }
                  uStack_a4 = uVar7 - 1;
                  *puVar9 = (uint)(byte)*puStack_a8;
                  if (uStack_a4 < 4) {
                    puVar9[1] = 0;
                    uVar22 = uStack_a4;
                    puStack_a8 = (uint *)((int)puStack_a8 + 1);
                    goto LAB_ram_400826ac;
                  }
                  uVar22 = uVar7 - 5;
                  *(ulonglong *)(puVar9 + 1) =
                       CONCAT44((uint *)((int)puStack_a8 + 1),*(undefined4 *)((int)puStack_a8 + 1));
                  if (uVar22 < 4) {
                    puVar9[2] = 0;
                    puVar24 = (uint *)((int)puStack_a8 + 5);
                    uStack_a4 = uVar22;
                    goto LAB_ram_400826b0;
                  }
                  uVar22 = uVar7 - 9;
                  *(ulonglong *)(puVar9 + 2) =
                       CONCAT44((uint *)((int)puStack_a8 + 5),*(undefined4 *)((int)puStack_a8 + 5));
                  puVar24 = (uint *)((int)puStack_a8 + 9);
                  uStack_a4 = uVar22;
                  if (uVar22 < 4) goto LAB_ram_400826b0;
                  puVar24 = (uint *)((int)puStack_a8 + 0xd);
                  uVar22 = uVar7 - 0xd;
                  *(ulonglong *)(puVar9 + 3) =
                       CONCAT44((uint *)((int)puStack_a8 + 9),*(undefined4 *)((int)puStack_a8 + 9));
                  uStack_a4 = uVar22;
                  if (uVar22 < 4) goto LAB_ram_400826b4;
                  pbVar1 = (byte *)((int)puStack_a8 + 0xd);
                  puStack_a8 = (uint *)((int)puStack_a8 + 0x11);
                  uVar7 = uVar7 - 0x11;
                  *(ulonglong *)(puVar9 + 4) = CONCAT44(puVar24,*(undefined4 *)pbVar1);
                  puVar9 = puVar9 + 5;
                  uStack_a4 = uVar7;
                } while (puVar9 != puVar30 + uVar27 * 5);
LAB_ram_40082652:
                puVar10[2] = puVar30;
                puVar10[3] = uVar27;
              }
              else {
                uVar7 = uStack_a4 - 2;
                uVar27 = *puStack_a8;
                puStack_a8 = (uint *)((int)puStack_a8 + 2);
                uVar27 = (uint)(ushort)uVar27;
                uStack_a4 = uVar7;
                if (uVar27 == 0) goto LAB_ram_400826c0;
                puVar30 = (uint *)FUN_ram_40002f2a(1,uVar27 * 0x14);
                if (puVar30 == (uint *)0x0) goto LAB_ram_40084750;
                puVar9 = puVar30;
                do {
                  while (uVar7 == 0) {
                    *puVar9 = 0;
                    puVar9[1] = 0;
                    uVar22 = uVar7;
LAB_ram_40082688:
                    puVar9[2] = 0;
                    puVar24 = puStack_a8;
LAB_ram_4008268c:
                    puStack_a8 = puVar24;
                    puVar9[3] = 0;
                    puVar24 = puStack_a8;
LAB_ram_40082690:
                    puStack_a8 = puVar24;
                    puVar9[4] = 0;
                    puVar9 = puVar9 + 5;
                    uVar7 = uVar22;
                    if (puVar30 + uVar27 * 5 == puVar9) goto LAB_ram_4008250e;
                  }
                  uStack_a4 = uVar7 - 1;
                  *puVar9 = (uint)(byte)*puStack_a8;
                  if (uStack_a4 < 4) {
                    puVar9[1] = 0;
                    uVar22 = uStack_a4;
                    puStack_a8 = (uint *)((int)puStack_a8 + 1);
                    goto LAB_ram_40082688;
                  }
                  uVar22 = uVar7 - 5;
                  *(ulonglong *)(puVar9 + 1) =
                       CONCAT44((uint *)((int)puStack_a8 + 1),*(undefined4 *)((int)puStack_a8 + 1));
                  if (uVar22 < 4) {
                    puVar9[2] = 0;
                    puVar24 = (uint *)((int)puStack_a8 + 5);
                    uStack_a4 = uVar22;
                    goto LAB_ram_4008268c;
                  }
                  uVar22 = uVar7 - 9;
                  *(ulonglong *)(puVar9 + 2) =
                       CONCAT44((uint *)((int)puStack_a8 + 5),*(undefined4 *)((int)puStack_a8 + 5));
                  puVar24 = (uint *)((int)puStack_a8 + 9);
                  uStack_a4 = uVar22;
                  if (uVar22 < 4) goto LAB_ram_4008268c;
                  puVar24 = (uint *)((int)puStack_a8 + 0xd);
                  uVar22 = uVar7 - 0xd;
                  *(ulonglong *)(puVar9 + 3) =
                       CONCAT44((uint *)((int)puStack_a8 + 9),*(undefined4 *)((int)puStack_a8 + 9));
                  uStack_a4 = uVar22;
                  if (uVar22 < 4) goto LAB_ram_40082690;
                  pbVar1 = (byte *)((int)puStack_a8 + 0xd);
                  puStack_a8 = (uint *)((int)puStack_a8 + 0x11);
                  uVar7 = uVar7 - 0x11;
                  *(ulonglong *)(puVar9 + 4) = CONCAT44(puVar24,*(undefined4 *)pbVar1);
                  puVar9 = puVar9 + 5;
                  uStack_a4 = uVar7;
                } while (puVar9 != puVar30 + uVar27 * 5);
LAB_ram_4008250e:
                puVar10[1] = uVar27;
                *puVar10 = puVar30;
                if (1 < uStack_a4) goto LAB_ram_4008251c;
LAB_ram_400826ce:
                puVar10[2] = 0;
                puVar10[3] = 0;
              }
              iVar38 = FUN_ram_400803c0(&puStack_a8,puVar10 + 4);
              if (iVar38 != 0) goto LAB_ram_40081f30;
              if (uVar23 * 0x34 == iVar42) goto LAB_ram_400826f2;
              puVar10 = (undefined4 *)(puVar8[0x10] + iVar42);
              iVar42 = iVar42 + 0x34;
            } while (puVar10 != (undefined4 *)0x0);
            iVar38 = -1;
            goto LAB_ram_40081f30;
          }
LAB_ram_40084750:
          iVar38 = -3;
          goto LAB_ram_40081f30;
        }
LAB_ram_400826f2:
        if (uStack_a4 < 2) {
LAB_ram_40083368:
          puVar8[0x12] = 0;
          puVar8[0x13] = 0;
          iVar38 = FUN_ram_40080fe4(&puStack_a8,puVar8 + 0x14);
        }
        else {
          uVar23 = uStack_a4 - 2;
          uVar27 = *puStack_a8;
          puStack_a8 = (uint *)((int)puStack_a8 + 2);
          uVar27 = (uint)(ushort)uVar27;
          uStack_a4 = uVar23;
          if (uVar27 == 0) goto LAB_ram_40083368;
          puVar30 = (uint *)FUN_ram_40002f2a(1,uVar27 * 0x14);
          if (puVar30 == (uint *)0x0) goto LAB_ram_40084750;
          puVar9 = puVar30;
          do {
            while (uVar23 == 0) {
              *puVar9 = 0;
              puVar9[1] = 0;
              uVar7 = uVar23;
LAB_ram_400832ca:
              puVar9[2] = 0;
              puVar24 = puStack_a8;
LAB_ram_400832ce:
              puStack_a8 = puVar24;
              puVar9[3] = 0;
              puVar24 = puStack_a8;
LAB_ram_400832d2:
              puStack_a8 = puVar24;
              puVar9[4] = 0;
              puVar9 = puVar9 + 5;
              uVar23 = uVar7;
              if (puVar30 + uVar27 * 5 == puVar9) goto LAB_ram_40082832;
            }
            uStack_a4 = uVar23 - 1;
            *puVar9 = (uint)(byte)*puStack_a8;
            if (uStack_a4 < 4) {
              puVar9[1] = 0;
              uVar7 = uStack_a4;
              puStack_a8 = (uint *)((int)puStack_a8 + 1);
              goto LAB_ram_400832ca;
            }
            uVar7 = uVar23 - 5;
            *(ulonglong *)(puVar9 + 1) =
                 CONCAT44((uint *)((int)puStack_a8 + 1),*(undefined4 *)((int)puStack_a8 + 1));
            if (uVar7 < 4) {
              puVar9[2] = 0;
              puVar24 = (uint *)((int)puStack_a8 + 5);
              uStack_a4 = uVar7;
              goto LAB_ram_400832ce;
            }
            uVar7 = uVar23 - 9;
            *(ulonglong *)(puVar9 + 2) =
                 CONCAT44((uint *)((int)puStack_a8 + 5),*(undefined4 *)((int)puStack_a8 + 5));
            puVar24 = (uint *)((int)puStack_a8 + 9);
            uStack_a4 = uVar7;
            if (uVar7 < 4) goto LAB_ram_400832ce;
            puVar24 = (uint *)((int)puStack_a8 + 0xd);
            uVar7 = uVar23 - 0xd;
            *(ulonglong *)(puVar9 + 3) =
                 CONCAT44((uint *)((int)puStack_a8 + 9),*(undefined4 *)((int)puStack_a8 + 9));
            uStack_a4 = uVar7;
            if (uVar7 < 4) goto LAB_ram_400832d2;
            pbVar1 = (byte *)((int)puStack_a8 + 0xd);
            puStack_a8 = (uint *)((int)puStack_a8 + 0x11);
            uVar23 = uVar23 - 0x11;
            *(ulonglong *)(puVar9 + 4) = CONCAT44(puVar24,*(undefined4 *)pbVar1);
            puVar9 = puVar9 + 5;
            uStack_a4 = uVar23;
          } while (puVar30 + uVar27 * 5 != puVar9);
LAB_ram_40082832:
          puVar8[0x12] = (uint)puVar30;
          puVar8[0x13] = uVar27;
          iVar38 = FUN_ram_40080fe4(&puStack_a8,puVar8 + 0x14);
        }
        if (iVar38 != 0) goto LAB_ram_40081f30;
        if (uStack_a4 < 4) {
          uVar52 = 0;
          puVar8[0x16] = 0;
          puVar8[0x17] = 0;
        }
        else {
          *(ulonglong *)(puVar8 + 0x16) = CONCAT44(puStack_a8,*puStack_a8);
          if (uStack_a4 - 4 < 4) {
            uVar52 = 0;
            puStack_a8 = puStack_a8 + 1;
            uStack_a4 = uStack_a4 - 4;
          }
          else {
            uVar52 = CONCAT44(puStack_a8 + 1,puStack_a8[1]);
            puStack_a8 = puStack_a8 + 2;
            uStack_a4 = uStack_a4 - 8;
          }
        }
        *(undefined8 *)(puVar8 + 0x17) = uVar52;
        uVar27 = (uint)DAT_ram_400983ac;
        fVar32 = DAT_ram_4009281c;
        if (uVar2 == 3) {
          iVar38 = FUN_ram_400802a2(&puStack_a8,puVar8 + 0x18);
          if ((iVar38 != 0) || (iVar38 = FUN_ram_400802a2(&puStack_a8,puVar8 + 0x1d), iVar38 != 0))
          goto LAB_ram_40081f30;
          uVar27 = 0;
          if (3 < uStack_a4) {
            uStack_a4 = uStack_a4 - 4;
            uVar27 = *puStack_a8;
            puStack_a8 = puStack_a8 + 1;
          }
          puVar8[0x22] = uVar27;
        }
        else {
          uVar51 = (ulonglong)DAT_ram_40099368;
          uVar49 = (ulonglong)DAT_ram_4009936c;
          uVar53 = (ulonglong)(uint)DAT_ram_4009281c;
          puVar8[0x18] = 0;
          *(ulonglong *)(puVar8 + 0x19) = uVar51;
          *(ulonglong *)(puVar8 + 0x1a) = uVar49;
          puVar8[0x1b] = 0;
          *(ulonglong *)(puVar8 + 0x1c) = uVar53;
          puVar8[0x1d] = 1;
          *(ulonglong *)(puVar8 + 0x1e) = uVar51;
          *(ulonglong *)(puVar8 + 0x1f) = uVar49;
          puVar8[0x20] = 0;
          puVar8[0x21] = (uint)fVar32;
          puVar8[0x22] = uVar27;
        }
        if (uStack_a4 == 0) {
          puVar8[0x23] = 0;
          puVar30 = puStack_a8;
          uVar27 = uStack_a4;
LAB_ram_400833a0:
          uStack_a4 = uVar27;
          puStack_a8 = puVar30;
          puVar8[0x24] = 0;
          puVar30 = puStack_a8;
          uVar27 = uStack_a4;
LAB_ram_400833a4:
          uStack_a4 = uVar27;
          puStack_a8 = puVar30;
          puVar8[0x25] = 0;
          puVar30 = puStack_a8;
          uVar27 = uStack_a4;
LAB_ram_400833a8:
          uStack_a4 = uVar27;
          puStack_a8 = puVar30;
          uVar27 = 0;
          puVar8[0x26] = 0;
        }
        else {
          puVar8[0x23] = (uint)(byte)*puStack_a8;
          puVar30 = (uint *)((int)puStack_a8 + 1);
          uVar27 = uStack_a4 - 1;
          if (uStack_a4 - 1 < 4) goto LAB_ram_400833a0;
          puVar8[0x24] = *(uint *)((int)puStack_a8 + 1);
          puVar30 = (uint *)((int)puStack_a8 + 5);
          uVar27 = uStack_a4 - 5;
          if (uStack_a4 - 5 < 4) goto LAB_ram_400833a4;
          puVar8[0x25] = *(uint *)((int)puStack_a8 + 5);
          puVar30 = (uint *)((int)puStack_a8 + 9);
          uVar27 = uStack_a4 - 9;
          if (uStack_a4 - 9 < 4) goto LAB_ram_400833a8;
          puVar8[0x26] = *(uint *)((int)puStack_a8 + 9);
          if (uStack_a4 - 0xd < 4) {
            uVar27 = 0;
            puStack_a8 = (uint *)((int)puStack_a8 + 0xd);
            uStack_a4 = uStack_a4 - 0xd;
          }
          else {
            uVar27 = *(uint *)((int)puStack_a8 + 0xd);
            puStack_a8 = (uint *)((int)puStack_a8 + 0x11);
            uStack_a4 = uStack_a4 - 0x11;
          }
        }
        puVar8[0x27] = uVar27;
        iVar38 = FUN_ram_40080fe4(&puStack_a8,puVar8 + 0x28);
        if (iVar38 != 0) goto LAB_ram_40081f30;
        iVar38 = FUN_ram_4008076c(&puStack_a8,puVar8 + 0x2a);
        if (iVar38 != 0) goto LAB_ram_40081f30;
        iVar38 = FUN_ram_4008076c(&puStack_a8,puVar8 + 0x37);
        if (iVar38 != 0) goto LAB_ram_40081f30;
        uVar27 = FUN_ram_4007fb12(&puStack_a8);
        puVar8[0x44] = uVar27;
        uVar27 = FUN_ram_4007fb12(&puStack_a8);
        puVar8[0x45] = uVar27;
        uVar27 = FUN_ram_4007fb12(&puStack_a8);
        puVar8[0x46] = uVar27;
        iVar38 = FUN_ram_400803c0(&puStack_a8,puVar8 + 0x47);
        if (((iVar38 != 0) || (iVar38 = FUN_ram_400802a2(&puStack_a8,puVar8 + 0x50), iVar38 != 0))
           || (iVar38 = FUN_ram_400802a2(&puStack_a8,puVar8 + 0x55), iVar38 != 0))
        goto LAB_ram_40081f30;
        uVar27 = FUN_ram_4007fb12(&puStack_a8);
        puVar8[0x5a] = uVar27;
        pfVar11 = (float *)FUN_ram_40002f2a(1,0x71c);
        if (pfVar11 == (float *)0x0) goto LAB_ram_40084750;
        fVar12 = pfVar11[1];
        fVar32 = (float)*puVar8;
        *pfVar11 = fVar32;
        if (fVar12 != 0.0) {
          fVar31 = pfVar11[2];
          iVar38 = 0;
          fVar40 = 0.0;
          if (fVar31 != 0.0) {
            do {
              puVar10 = (undefined4 *)((int)fVar12 + iVar38);
              if (puVar10 != (undefined4 *)0x0) {
                if (*(int *)((int)fVar12 + iVar38) != 0) {
                  FUN_ram_40002f4a();
                  *puVar10 = 0;
                }
                puVar10[1] = 0;
                if (puVar10[2] != 0) {
                  FUN_ram_40002f4a();
                  puVar10[2] = 0;
                }
                puVar10[3] = 0;
                if (puVar10[5] != 0) {
                  FUN_ram_40002f4a();
                  puVar10[5] = 0;
                }
                if (puVar10[6] != 0) {
                  FUN_ram_40002f4a();
                  puVar10[6] = 0;
                }
                if (puVar10[7] != 0) {
                  FUN_ram_40002f4a();
                  puVar10[7] = 0;
                }
                if (puVar10[8] != 0) {
                  FUN_ram_40002f4a();
                  puVar10[8] = 0;
                }
                if (puVar10[0xc] != 0) {
                  FUN_ram_40002f4a();
                  puVar10[0xc] = 0;
                }
                if (puVar10[0xd] != 0) {
                  FUN_ram_40002f4a();
                  puVar10[0xd] = 0;
                }
                if (puVar10[0xe] != 0) {
                  FUN_ram_40002f4a();
                  puVar10[0xe] = 0;
                }
                fVar31 = pfVar11[2];
                fVar12 = pfVar11[1];
                puVar10[4] = 0;
                puVar10[9] = 0;
                puVar10[10] = 0;
                puVar10[0xb] = 0;
              }
              fVar40 = (float)((int)fVar40 + 1);
              iVar38 = iVar38 + 0x3c;
            } while ((uint)fVar40 < (uint)fVar31);
            if (fVar12 == 0.0) goto LAB_ram_40082b62;
          }
          FUN_ram_40002f4a();
          pfVar11[1] = 0.0;
        }
LAB_ram_40082b62:
        pfVar11[2] = 0.0;
        if (pfVar11[5] != 0.0) {
          FUN_ram_40002f4a();
        }
        pfVar11[5] = 0.0;
        pfVar11[6] = 0.0;
        if (pfVar11[7] != 0.0) {
          FUN_ram_40002f4a();
        }
        pfVar11[7] = 0.0;
        pfVar11[8] = 0.0;
        pfVar11[3] = 0.0;
        pfVar11[4] = 0.0;
        if (pfVar11[9] != 0.0) {
          FUN_ram_40002f4a();
          pfVar11[9] = 0.0;
        }
        pfVar11[10] = 0.0;
        if (pfVar11[0xb] != 0.0) {
          FUN_ram_40002f4a();
          pfVar11[0xb] = 0.0;
        }
        if (pfVar11[0xc] != 0.0) {
          FUN_ram_40002f4a();
          pfVar11[0xc] = 0.0;
        }
        fVar12 = (float)puVar8[0x11];
        *(undefined2 *)(pfVar11 + 0x11) = 0;
        pfVar11[0x12] = 0.0;
        pfVar11[0x13] = 0.0;
        if (fVar12 == 0.0) {
LAB_ram_40083756:
          uVar52 = *(undefined8 *)pfVar11;
          if (pfVar11[0x14] != 0.0) {
            FUN_ram_40002f4a();
            pfVar11[0x14] = 0.0;
          }
          pfVar11[0x15] = 0.0;
          if (pfVar11[0x18] != 0.0) {
            FUN_ram_40002f4a();
          }
          pfVar11[0x18] = 0.0;
          pfVar11[0x19] = 0.0;
          if (pfVar11[0x1a] != 0.0) {
            FUN_ram_40002f4a();
          }
          pfVar11[0x1a] = 0.0;
          pfVar11[0x1b] = 0.0;
          pfVar11[0x16] = 0.0;
          pfVar11[0x17] = 0.0;
          if (pfVar11[0x1c] != 0.0) {
            FUN_ram_40002f4a();
            pfVar11[0x1c] = 0.0;
          }
          fVar32 = (float)puVar8[0x13];
          pfVar11[0x1d] = 0.0;
          *(undefined1 *)(pfVar11 + 0x20) = 0;
          pfVar11[0x23] = 0.0;
          pfVar11[0x22] = 0.0;
          pfVar11[0x21] = 0.0;
          if (fVar32 == 0.0) {
            if (pfVar11[0x14] != 0.0) {
              FUN_ram_40002f4a();
              pfVar11[0x14] = 0.0;
            }
            pfVar11[0x15] = 0.0;
LAB_ram_4008384c:
            fVar32 = (float)puVar8[0x15];
            pfVar11[0x16] = (float)puVar8[0x14];
            pfVar11[0x17] = fVar32;
            if (pfVar11[0x18] != 0.0) {
              FUN_ram_40002f4a();
              pfVar11[0x18] = 0.0;
            }
            if (pfVar11[0x1a] != 0.0) {
              FUN_ram_40002f4a();
              pfVar11[0x1a] = 0.0;
            }
            uVar27 = puVar8[0x15];
            pfVar11[0x19] = 0.0;
            pfVar11[0x1b] = 0.0;
            if (uVar27 != 0) {
              piVar33 = (int *)puVar8[0x14];
              piVar13 = piVar33 + uVar27 * 7;
              fVar32 = 4.2039e-45;
              do {
                if (*piVar33 == 0) {
                  fVar12 = (float)(uint)*(ushort *)((int)piVar33 + 10);
                  if ((uint)*(ushort *)((int)piVar33 + 10) < (uint)*(ushort *)(piVar33 + 2)) {
                    fVar12 = (float)(uint)*(ushort *)(piVar33 + 2);
                  }
                  if ((uint)fVar32 < (uint)fVar12) {
                    fVar32 = fVar12;
                  }
                }
                piVar33 = piVar33 + 7;
              } while (piVar13 != piVar33);
              fVar12 = (float)FUN_ram_40002f2a(1,(int)fVar32 << 2);
              pfVar11[0x18] = fVar12;
              fVar31 = (float)FUN_ram_40002f2a(1,(int)fVar32 << 2);
              pfVar11[0x1a] = fVar31;
              if ((fVar12 == 0.0) || (fVar31 == 0.0)) {
                pfVar11[0x18] = 0.0;
                pfVar11[0x1a] = 0.0;
                if (pfVar11[0x14] == 0.0) {
                  pfVar11[0x15] = 0.0;
                }
                else {
                  FUN_ram_40002f4a();
                  pfVar11[0x14] = 0.0;
                  pfVar11[0x15] = 0.0;
                  if (pfVar11[0x18] != 0.0) {
                    FUN_ram_40002f4a();
                  }
                }
                pfVar11[0x18] = 0.0;
                pfVar11[0x19] = 0.0;
                if (pfVar11[0x1a] != 0.0) {
                  FUN_ram_40002f4a();
                }
                pfVar11[0x1a] = 0.0;
                pfVar11[0x1b] = 0.0;
                pfVar11[0x16] = 0.0;
                pfVar11[0x17] = 0.0;
                if (pfVar11[0x1c] != 0.0) {
                  FUN_ram_40002f4a();
                  pfVar11[0x1c] = 0.0;
                }
                pfVar11[0x1d] = 0.0;
                *(undefined1 *)(pfVar11 + 0x20) = 0;
                pfVar11[0x23] = 0.0;
                pfVar11[0x22] = 0.0;
                pfVar11[0x21] = 0.0;
                goto LAB_ram_40084454;
              }
              pfVar11[0x19] = fVar32;
              pfVar11[0x1b] = fVar32;
            }
            uVar52 = *(undefined8 *)(puVar8 + 0x17);
            fVar32 = (float)puVar8[0x13];
            *(undefined8 *)(pfVar11 + 0x1e) = *(undefined8 *)(puVar8 + 0x16);
            *(undefined8 *)(pfVar11 + 0x1f) = uVar52;
            pfVar11[0x1d] = fVar32;
            if (fVar32 == 0.0) {
LAB_ram_40083900:
              uVar52 = *(undefined8 *)pfVar11;
              uVar50 = *(undefined8 *)(puVar8 + 0x1a);
              uVar54 = *(undefined8 *)(puVar8 + 0x1b);
              uVar55 = *(undefined8 *)(puVar8 + 0x1c);
              fVar32 = (float)puVar8[0x18];
              pfVar11[0x25] = (float)*(undefined8 *)(puVar8 + 0x19);
              pfVar11[0x26] = (float)uVar50;
              pfVar11[0x27] = (float)uVar54;
              pfVar11[0x28] = (float)uVar55;
              pfVar11[0x24] = fVar32;
              pfVar11[0x29] = (float)uVar52;
              *(undefined1 *)(pfVar11 + 0x20) = 0;
              FUN_ram_4007fb52(pfVar11 + 0x24);
              pfVar11[0x37] = 0.0;
              pfVar11[0x38] = 0.0;
              FUN_ram_40090832(pfVar11 + 0x2f,1,pfVar11 + 0x32,pfVar11 + 0x37);
              fVar12 = (float)puVar8[0x1d];
              uVar50 = *(undefined8 *)(puVar8 + 0x1e);
              uVar54 = *(undefined8 *)(puVar8 + 0x1f);
              fVar32 = (float)puVar8[0x20];
              pfVar11[0x3d] = (float)puVar8[0x21];
              pfVar11[0x39] = fVar12;
              pfVar11[0x3a] = (float)uVar50;
              pfVar11[0x3b] = (float)uVar54;
              pfVar11[0x3c] = fVar32;
              pfVar11[0x3e] = (float)uVar52;
              FUN_ram_4007fb52(pfVar11 + 0x39);
              pfVar11[0x4c] = 0.0;
              pfVar11[0x4d] = 0.0;
              FUN_ram_40090832(pfVar11 + 0x44,1,pfVar11 + 0x47,pfVar11 + 0x4c);
              fVar32 = (float)puVar8[0x22];
              *(undefined1 *)(pfVar11 + 0x4f) = 0;
              pfVar11[0x4e] = fVar32;
              pfVar11[0x50] = 0.0;
              uVar51 = *(ulonglong *)pfVar11;
              if (pfVar11[0x68] != 0.0) {
                FUN_ram_40002f4a();
              }
              pfVar11[0x68] = 0.0;
              pfVar11[0x69] = 0.0;
              if (pfVar11[0x6a] != 0.0) {
                FUN_ram_40002f4a();
              }
              pfVar11[0x6a] = 0.0;
              pfVar11[0x6b] = 0.0;
              pfVar11[0x66] = 0.0;
              pfVar11[0x67] = 0.0;
              if (pfVar11[0x6c] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x6c] = 0.0;
              }
              pfVar11[0x6d] = 0.0;
              if (pfVar11[0x6e] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x6e] = 0.0;
              }
              pfVar11[0x6f] = 0.0;
              if (pfVar11[0x71] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x71] = 0.0;
              }
              if (pfVar11[0x72] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x72] = 0.0;
              }
              if (pfVar11[0x73] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x73] = 0.0;
              }
              if (pfVar11[0x74] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x74] = 0.0;
              }
              if (pfVar11[0x78] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x78] = 0.0;
              }
              if (pfVar11[0x79] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x79] = 0.0;
              }
              if (pfVar11[0x7a] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x7a] = 0.0;
              }
              pfVar11[0x70] = 0.0;
              pfVar11[0x75] = 0.0;
              pfVar11[0x76] = 0.0;
              pfVar11[0x77] = 0.0;
              if (pfVar11[0x7b] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x7b] = 0.0;
              }
              pfVar11[0x7c] = 0.0;
              if (pfVar11[0x7d] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x7d] = 0.0;
              }
              pfVar11[0x7e] = 0.0;
              if (pfVar11[0x80] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x80] = 0.0;
              }
              if (pfVar11[0x81] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x81] = 0.0;
              }
              if (pfVar11[0x82] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x82] = 0.0;
              }
              if (pfVar11[0x83] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x83] = 0.0;
              }
              if (pfVar11[0x87] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x87] = 0.0;
              }
              if (pfVar11[0x88] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x88] = 0.0;
              }
              if (pfVar11[0x89] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x89] = 0.0;
              }
              pfVar11[0x7f] = 0.0;
              pfVar11[0x84] = 0.0;
              pfVar11[0x85] = 0.0;
              pfVar11[0x86] = 0.0;
              if (pfVar11[0x8a] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x8a] = 0.0;
              }
              fVar32 = (float)puVar8[0x24];
              fVar12 = (float)puVar8[0x25];
              fVar31 = (float)puVar8[0x26];
              fVar40 = (float)puVar8[0x27];
              pfVar44 = pfVar11 + 0x51;
              pfVar11[0x51] = (float)puVar8[0x23];
              pfVar11[0x52] = fVar32;
              pfVar11[0x53] = fVar12;
              pfVar11[0x54] = fVar31;
              pfVar11[0x55] = fVar40;
              pfVar11[0x8b] = 0.0;
              *(undefined1 *)(pfVar11 + 0x8f) = 0;
              pfVar11[0x90] = 0.0;
              pfVar11[0x56] = (float)uVar51;
              FUN_ram_4007fb52(pfVar44);
              pfVar11[100] = 0.0;
              pfVar11[0x65] = 0.0;
              FUN_ram_40090832(pfVar11 + 0x5c,1,pfVar11 + 0x5f,pfVar11 + 100);
              fVar32 = (float)puVar8[0x29];
              pfVar11[0x66] = (float)puVar8[0x28];
              pfVar11[0x67] = fVar32;
              if (pfVar11[0x68] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x68] = 0.0;
              }
              if (pfVar11[0x6a] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x6a] = 0.0;
              }
              uVar27 = puVar8[0x29];
              pfVar11[0x69] = 0.0;
              pfVar11[0x6b] = 0.0;
              if (uVar27 != 0) {
                piVar33 = (int *)puVar8[0x28];
                piVar13 = piVar33 + uVar27 * 7;
                fVar32 = 1.4013e-45;
                do {
                  if (*piVar33 == 0) {
                    fVar12 = (float)(uint)*(ushort *)((int)piVar33 + 10);
                    if ((uint)*(ushort *)((int)piVar33 + 10) < (uint)*(ushort *)(piVar33 + 2)) {
                      fVar12 = (float)(uint)*(ushort *)(piVar33 + 2);
                    }
                    if ((uint)fVar32 < (uint)fVar12) {
                      fVar32 = fVar12;
                    }
                  }
                  piVar33 = piVar33 + 7;
                } while (piVar13 != piVar33);
                fVar12 = (float)FUN_ram_40002f2a(1,(int)fVar32 << 2);
                pfVar11[0x68] = fVar12;
                fVar31 = (float)FUN_ram_40002f2a(1,(int)fVar32 << 2);
                pfVar11[0x6a] = fVar31;
                if ((fVar12 == 0.0) || (fVar31 == 0.0)) {
                  pfVar11[0x68] = 0.0;
                  pfVar11[0x6a] = 0.0;
                  pfVar11[0x66] = 0.0;
                  pfVar11[0x67] = 0.0;
                  if (pfVar11[0x6c] != 0.0) {
                    FUN_ram_40002f4a();
                    pfVar11[0x6c] = 0.0;
                  }
                  pfVar11[0x6d] = 0.0;
                  if (pfVar11[0x6e] != 0.0) {
                    FUN_ram_40002f4a();
                    pfVar11[0x6e] = 0.0;
                  }
                  pfVar11[0x6f] = 0.0;
                  if (pfVar11[0x71] != 0.0) {
                    FUN_ram_40002f4a();
                    pfVar11[0x71] = 0.0;
                  }
                  if (pfVar11[0x72] != 0.0) {
                    FUN_ram_40002f4a();
                    pfVar11[0x72] = 0.0;
                  }
                  if (pfVar11[0x73] != 0.0) {
                    FUN_ram_40002f4a();
                    pfVar11[0x73] = 0.0;
                  }
                  if (pfVar11[0x74] != 0.0) {
                    FUN_ram_40002f4a();
                    pfVar11[0x74] = 0.0;
                  }
                  if (pfVar11[0x78] != 0.0) {
                    FUN_ram_40002f4a();
                    pfVar11[0x78] = 0.0;
                  }
                  if (pfVar11[0x79] != 0.0) {
                    FUN_ram_40002f4a();
                    pfVar11[0x79] = 0.0;
                  }
                  if (pfVar11[0x7a] != 0.0) {
                    FUN_ram_40002f4a();
                    pfVar11[0x7a] = 0.0;
                  }
                  pfVar11[0x70] = 0.0;
                  pfVar11[0x75] = 0.0;
                  pfVar11[0x76] = 0.0;
                  pfVar11[0x77] = 0.0;
                  if (pfVar11[0x7b] != 0.0) {
                    FUN_ram_40002f4a();
                    pfVar11[0x7b] = 0.0;
                  }
                  pfVar11[0x7c] = 0.0;
                  if (pfVar11[0x7d] != 0.0) {
                    FUN_ram_40002f4a();
                    pfVar11[0x7d] = 0.0;
                  }
                  pfVar11[0x7e] = 0.0;
                  if (pfVar11[0x80] != 0.0) {
                    FUN_ram_40002f4a();
                    pfVar11[0x80] = 0.0;
                  }
                  if (pfVar11[0x81] != 0.0) {
                    FUN_ram_40002f4a();
                    pfVar11[0x81] = 0.0;
                  }
                  if (pfVar11[0x82] != 0.0) {
                    FUN_ram_40002f4a();
                    pfVar11[0x82] = 0.0;
                  }
                  if (pfVar11[0x83] != 0.0) {
                    FUN_ram_40002f4a();
                    pfVar11[0x83] = 0.0;
                  }
                  if (pfVar11[0x87] != 0.0) {
                    FUN_ram_40002f4a();
                    pfVar11[0x87] = 0.0;
                  }
                  if (pfVar11[0x88] != 0.0) {
                    FUN_ram_40002f4a();
                    pfVar11[0x88] = 0.0;
                  }
                  if (pfVar11[0x89] != 0.0) {
                    FUN_ram_40002f4a();
                    pfVar11[0x89] = 0.0;
                  }
                  pfVar11[0x7f] = 0.0;
                  pfVar11[0x84] = 0.0;
                  pfVar11[0x85] = 0.0;
                  pfVar11[0x86] = 0.0;
                  if (pfVar11[0x8a] != 0.0) {
                    FUN_ram_40002f4a();
                    pfVar11[0x8a] = 0.0;
                  }
                  pfVar11[0x8b] = 0.0;
                  *(undefined1 *)(pfVar11 + 0x8f) = 0;
                  pfVar11[0x90] = 0.0;
                  iVar38 = -3;
                  goto LAB_ram_400832b2;
                }
                pfVar11[0x69] = fVar32;
                pfVar11[0x6b] = fVar32;
              }
              fVar32 = (float)puVar8[0x45];
              fVar12 = (float)puVar8[0x46];
              pfVar11[0x8c] = (float)puVar8[0x44];
              pfVar11[0x8d] = fVar32;
              pfVar11[0x8e] = fVar12;
              iVar38 = FUN_ram_40081308(uVar51 & 0xffffffff,pfVar11 + 0x6c,puVar8 + 0x2a);
              if ((iVar38 != 0) ||
                 (iVar38 = FUN_ram_40081308(uVar51 & 0xffffffff,pfVar11 + 0x7b,puVar8 + 0x37),
                 iVar38 != 0)) {
                FUN_ram_40080ac4(pfVar44);
                goto LAB_ram_400832b2;
              }
              pfVar11[0x8b] = 1.4013e-45;
              fVar32 = (float)FUN_ram_40002f2a(1,4);
              pfVar11[0x8a] = fVar32;
              if (fVar32 == 0.0) {
                FUN_ram_40080ac4(pfVar44);
                goto LAB_ram_4008490e;
              }
              *(undefined1 *)(pfVar11 + 0x8f) = 0;
              pfVar11[0x90] = 0.0;
              uVar52 = *(undefined8 *)pfVar11;
              if (pfVar11[0x192] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x192] = 0.0;
              }
              if (pfVar11[0x193] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x193] = 0.0;
              }
              if (pfVar11[0x194] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x194] = 0.0;
              }
              if (pfVar11[0x195] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x195] = 0.0;
              }
              if (pfVar11[0x199] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x199] = 0.0;
              }
              if (pfVar11[0x19a] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x19a] = 0.0;
              }
              if (pfVar11[0x19b] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x19b] = 0.0;
              }
              pfVar11[0x191] = 0.0;
              pfVar11[0x196] = 0.0;
              pfVar11[0x197] = 0.0;
              pfVar11[0x198] = 0.0;
              if (pfVar11[0x192] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x192] = 0.0;
              }
              if (pfVar11[0x193] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x193] = 0.0;
              }
              if (pfVar11[0x194] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x194] = 0.0;
              }
              if (pfVar11[0x195] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x195] = 0.0;
              }
              if (pfVar11[0x199] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x199] = 0.0;
              }
              if (pfVar11[0x19a] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x19a] = 0.0;
              }
              if (pfVar11[0x19b] != 0.0) {
                FUN_ram_40002f4a();
                pfVar11[0x19b] = 0.0;
              }
              uVar2 = *(ushort *)((int)puVar8 + 0x11e);
              uVar27 = (uint)uVar2;
              pfVar11[0x191] = 0.0;
              pfVar11[0x196] = 0.0;
              pfVar11[0x197] = 0.0;
              pfVar11[0x198] = 0.0;
              if (uVar27 == 0) {
LAB_ram_40083e86:
                fVar32 = (float)puVar8[0x52];
                fVar12 = (float)puVar8[0x53];
                fVar31 = (float)puVar8[0x54];
                fVar40 = (float)puVar8[0x50];
                pfVar11[0x19d] = (float)puVar8[0x51];
                pfVar11[0x19e] = fVar32;
                pfVar11[0x19f] = fVar12;
                pfVar11[0x1a0] = fVar31;
                pfVar11[0x19c] = fVar40;
                pfVar11[0x1a1] = (float)uVar52;
                FUN_ram_4007fb52(pfVar11 + 0x19c);
                pfVar11[0x1af] = 0.0;
                pfVar11[0x1b0] = 0.0;
                FUN_ram_40090832(pfVar11 + 0x1a7,1,pfVar11 + 0x1aa,pfVar11 + 0x1af);
                fVar32 = (float)puVar8[0x58];
                fVar12 = (float)puVar8[0x59];
                fVar31 = (float)puVar8[0x56];
                fVar40 = (float)puVar8[0x57];
                pfVar11[0x1b1] = (float)puVar8[0x55];
                pfVar11[0x1b4] = fVar32;
                pfVar11[0x1b5] = fVar12;
                pfVar11[0x1b2] = fVar31;
                pfVar11[0x1b3] = fVar40;
                pfVar11[0x1b6] = (float)uVar52;
                FUN_ram_4007fb52(pfVar11 + 0x1b1);
                pfVar11[0x1c4] = 0.0;
                pfVar11[0x1c5] = 0.0;
                FUN_ram_40090832(pfVar11 + 0x1bc,1,pfVar11 + 0x1bf,pfVar11 + 0x1c4);
                uVar37 = puVar8[1];
                uVar36 = puVar8[2];
                uVar27 = puVar8[3];
                uVar23 = puVar8[4];
                uVar7 = puVar8[5];
                uVar22 = puVar8[6];
                uVar28 = puVar8[7];
                uVar52 = *(undefined8 *)(puVar8 + 9);
                fVar32 = pfVar11[1];
                pfVar11[0x1c6] = (float)puVar8[0x5a];
                *param_1 = (int)puVar8;
                param_1[1] = (int)pfVar11;
                *(undefined1 *)(param_1 + 0x11) = 1;
                param_1[0x10] = (int)uVar52;
                param_1[9] = uVar37;
                param_1[10] = uVar36;
                param_1[0xb] = uVar27;
                param_1[0xc] = uVar23;
                param_1[0xd] = uVar7;
                param_1[0xe] = uVar22;
                param_1[0xf] = uVar28;
                param_1[2] = uVar37;
                param_1[3] = uVar36;
                param_1[4] = uVar27;
                param_1[5] = uVar23;
                param_1[6] = uVar7;
                param_1[7] = uVar22;
                param_1[8] = uVar28;
                if (fVar32 != 0.0) {
                  fVar12 = pfVar11[2];
                  iVar38 = 0;
                  fVar31 = 0.0;
                  if (fVar12 != 0.0) {
                    do {
                      piVar13 = (int *)((int)fVar32 + iVar38);
                      if (piVar13 != (int *)0x0) {
                        iVar42 = *(int *)((int)fVar32 + iVar38);
                        if ((iVar42 != 0) && (uVar27 = piVar13[1], uVar27 != 0)) {
                          iVar14 = 0;
                          uVar23 = 0;
                          do {
                            iVar35 = iVar42 + iVar14;
                            while (iVar35 != 0) {
                              *(undefined4 *)(iVar35 + 0x4c) = 0;
                              *(undefined4 *)(iVar35 + 0x50) = 0;
                              FUN_ram_40090832(iVar35 + 0x2c,1,iVar35 + 0x38,iVar35 + 0x4c);
                              uVar27 = piVar13[1];
                              uVar23 = uVar23 + 1;
                              iVar14 = iVar14 + 0x54;
                              if (uVar27 <= uVar23) goto LAB_ram_40084014;
                              iVar42 = *piVar13;
                              iVar35 = iVar42 + iVar14;
                            }
                            uVar23 = uVar23 + 1;
                            iVar14 = iVar14 + 0x54;
                          } while (uVar23 < uVar27);
                        }
LAB_ram_40084014:
                        iVar42 = piVar13[2];
                        if ((iVar42 != 0) && (uVar27 = piVar13[3], uVar27 != 0)) {
                          iVar14 = 0;
                          uVar23 = 0;
                          do {
                            iVar35 = iVar42 + iVar14;
                            while (iVar35 != 0) {
                              *(undefined4 *)(iVar35 + 0x4c) = 0;
                              *(undefined4 *)(iVar35 + 0x50) = 0;
                              FUN_ram_40090832(iVar35 + 0x2c,1,iVar35 + 0x38,iVar35 + 0x4c);
                              uVar27 = piVar13[3];
                              uVar23 = uVar23 + 1;
                              iVar14 = iVar14 + 0x54;
                              if (uVar27 <= uVar23) goto LAB_ram_40084078;
                              iVar42 = piVar13[2];
                              iVar35 = iVar42 + iVar14;
                            }
                            uVar23 = uVar23 + 1;
                            iVar14 = iVar14 + 0x54;
                          } while (uVar23 < uVar27);
                        }
LAB_ram_40084078:
                        if ((void *)piVar13[0xc] != (void *)0x0) {
                          memset((void *)piVar13[0xc],0,(uint)*(ushort *)((int)piVar13 + 0x12) << 2)
                          ;
                        }
                        fVar12 = pfVar11[2];
                      }
                      fVar31 = (float)((int)fVar31 + 1);
                      iVar38 = iVar38 + 0x3c;
                      if ((uint)fVar12 <= (uint)fVar31) break;
                      fVar32 = pfVar11[1];
                    } while( true );
                  }
                  *(undefined2 *)(pfVar11 + 0x11) = 0;
                  pfVar11[0x12] = 0.0;
                }
                fVar32 = pfVar11[0x14];
                if ((fVar32 != 0.0) && (fVar12 = pfVar11[0x15], fVar12 != 0.0)) {
                  iVar38 = 0;
                  fVar31 = 0.0;
                  do {
                    iVar42 = (int)fVar32 + iVar38;
                    while (iVar42 != 0) {
                      *(undefined4 *)(iVar42 + 0x4c) = 0;
                      *(undefined4 *)(iVar42 + 0x50) = 0;
                      FUN_ram_40090832(iVar42 + 0x2c,1,iVar42 + 0x38,iVar42 + 0x4c);
                      fVar12 = pfVar11[0x15];
                      fVar31 = (float)((int)fVar31 + 1);
                      iVar38 = iVar38 + 0x54;
                      if ((uint)fVar12 <= (uint)fVar31) goto LAB_ram_40084154;
                      fVar32 = pfVar11[0x14];
                      iVar42 = (int)fVar32 + iVar38;
                    }
                    fVar31 = (float)((int)fVar31 + 1);
                    iVar38 = iVar38 + 0x54;
                  } while ((uint)fVar31 < (uint)fVar12);
                }
LAB_ram_40084154:
                *(undefined1 *)(pfVar11 + 0x20) = 0;
                pfVar11[0x37] = 0.0;
                pfVar11[0x38] = 0.0;
                FUN_ram_40090832(pfVar11 + 0x2f,1,pfVar11 + 0x32,pfVar11 + 0x37);
                pfVar11[0x4c] = 0.0;
                pfVar11[0x4d] = 0.0;
                FUN_ram_40090832(pfVar11 + 0x44,1,pfVar11 + 0x47,pfVar11 + 0x4c);
                *(undefined1 *)(pfVar11 + 0x4f) = 0;
                pfVar11[100] = 0.0;
                pfVar11[0x65] = 0.0;
                FUN_ram_40090832(pfVar11 + 0x5c,1,pfVar11 + 0x5f,pfVar11 + 100);
                fVar32 = pfVar11[0x6c];
                if ((fVar32 != 0.0) && (fVar12 = pfVar11[0x6d], fVar12 != 0.0)) {
                  iVar38 = 0;
                  fVar31 = 0.0;
                  do {
                    iVar42 = (int)fVar32 + iVar38;
                    while (iVar42 != 0) {
                      *(undefined4 *)(iVar42 + 0x4c) = 0;
                      *(undefined4 *)(iVar42 + 0x50) = 0;
                      FUN_ram_40090832(iVar42 + 0x2c,1,iVar42 + 0x38,iVar42 + 0x4c);
                      fVar12 = pfVar11[0x6d];
                      fVar31 = (float)((int)fVar31 + 1);
                      iVar38 = iVar38 + 0x54;
                      if ((uint)fVar12 <= (uint)fVar31) goto LAB_ram_400841fc;
                      fVar32 = pfVar11[0x6c];
                      iVar42 = (int)fVar32 + iVar38;
                    }
                    fVar31 = (float)((int)fVar31 + 1);
                    iVar38 = iVar38 + 0x54;
                  } while ((uint)fVar31 < (uint)fVar12);
                }
LAB_ram_400841fc:
                fVar32 = pfVar11[0x6e];
                if ((fVar32 != 0.0) && (fVar12 = pfVar11[0x6f], fVar12 != 0.0)) {
                  iVar38 = 0;
                  fVar31 = 0.0;
                  do {
                    iVar42 = (int)fVar32 + iVar38;
                    while (iVar42 != 0) {
                      *(undefined4 *)(iVar42 + 0x4c) = 0;
                      *(undefined4 *)(iVar42 + 0x50) = 0;
                      FUN_ram_40090832(iVar42 + 0x2c,1,iVar42 + 0x38,iVar42 + 0x4c);
                      fVar12 = pfVar11[0x6f];
                      fVar31 = (float)((int)fVar31 + 1);
                      iVar38 = iVar38 + 0x54;
                      if ((uint)fVar12 <= (uint)fVar31) goto LAB_ram_4008425e;
                      fVar32 = pfVar11[0x6e];
                      iVar42 = (int)fVar32 + iVar38;
                    }
                    fVar31 = (float)((int)fVar31 + 1);
                    iVar38 = iVar38 + 0x54;
                  } while ((uint)fVar31 < (uint)fVar12);
                }
LAB_ram_4008425e:
                if ((void *)pfVar11[0x78] != (void *)0x0) {
                  memset((void *)pfVar11[0x78],0,(uint)*(ushort *)((int)pfVar11 + 0x1c2) << 2);
                }
                fVar32 = pfVar11[0x7b];
                if (fVar32 != 0.0) {
                  fVar31 = pfVar11[0x7c];
                  iVar38 = 0;
                  fVar12 = 0.0;
                  if (fVar31 != 0.0) {
                    do {
                      iVar42 = (int)fVar32 + iVar38;
                      while (iVar42 != 0) {
                        *(undefined4 *)(iVar42 + 0x4c) = 0;
                        *(undefined4 *)(iVar42 + 0x50) = 0;
                        FUN_ram_40090832(iVar42 + 0x2c,1,iVar42 + 0x38,iVar42 + 0x4c);
                        fVar31 = pfVar11[0x7c];
                        fVar12 = (float)((int)fVar12 + 1);
                        iVar38 = iVar38 + 0x54;
                        if ((uint)fVar31 <= (uint)fVar12) goto LAB_ram_400842d2;
                        fVar32 = pfVar11[0x7b];
                        iVar42 = (int)fVar32 + iVar38;
                      }
                      fVar12 = (float)((int)fVar12 + 1);
                      iVar38 = iVar38 + 0x54;
                    } while ((uint)fVar12 < (uint)fVar31);
                  }
                }
LAB_ram_400842d2:
                fVar32 = pfVar11[0x7d];
                if ((fVar32 != 0.0) && (fVar12 = pfVar11[0x7e], fVar12 != 0.0)) {
                  iVar38 = 0;
                  fVar31 = 0.0;
                  do {
                    iVar42 = (int)fVar32 + iVar38;
                    while (iVar42 != 0) {
                      *(undefined4 *)(iVar42 + 0x4c) = 0;
                      *(undefined4 *)(iVar42 + 0x50) = 0;
                      FUN_ram_40090832(iVar42 + 0x2c,1,iVar42 + 0x38,iVar42 + 0x4c);
                      fVar12 = pfVar11[0x7e];
                      fVar31 = (float)((int)fVar31 + 1);
                      iVar38 = iVar38 + 0x54;
                      if ((uint)fVar12 <= (uint)fVar31) goto LAB_ram_40084334;
                      fVar32 = pfVar11[0x7d];
                      iVar42 = (int)fVar32 + iVar38;
                    }
                    fVar31 = (float)((int)fVar31 + 1);
                    iVar38 = iVar38 + 0x54;
                  } while ((uint)fVar31 < (uint)fVar12);
                }
LAB_ram_40084334:
                if ((void *)pfVar11[0x87] != (void *)0x0) {
                  memset((void *)pfVar11[0x87],0,(uint)*(ushort *)((int)pfVar11 + 0x1fe) << 2);
                }
                *(undefined1 *)(pfVar11 + 0x8f) = 0;
                if ((void *)pfVar11[0x199] != (void *)0x0) {
                  memset((void *)pfVar11[0x199],0,(uint)*(ushort *)((int)pfVar11 + 0x646) << 2);
                }
                pfVar11[0x1af] = 0.0;
                pfVar11[0x1b0] = 0.0;
                FUN_ram_40090832(pfVar11 + 0x1a7,1,pfVar11 + 0x1aa,pfVar11 + 0x1af);
                pfVar11[0x1c4] = 0.0;
                pfVar11[0x1c5] = 0.0;
                FUN_ram_40090832(pfVar11 + 0x1bc,1,pfVar11 + 0x1bf,pfVar11 + 0x1c4);
                return 0;
              }
              uVar3 = (ushort)puVar8[0x47];
              if (uVar3 == 0) goto LAB_ram_40083e86;
              iVar38 = uVar3 * uVar27;
              if (iVar38 * 0xc == 0) {
                fVar32 = 0.0;
              }
              else {
                fVar32 = (float)FUN_ram_40002f3c();
              }
              pfVar11[0x192] = fVar32;
              iVar42 = uVar27 * 0xc;
              if (uVar27 * uVar27 * 0xc == 0) {
                pfVar11[0x193] = 0.0;
                fVar32 = (float)FUN_ram_40002f3c(iVar42);
                pfVar11[0x194] = fVar32;
                fVar32 = (float)FUN_ram_40002f3c(iVar42);
                pfVar11[0x195] = fVar32;
                fVar32 = (float)FUN_ram_40002f2a(1,uVar27 << 2);
                pfVar11[0x199] = fVar32;
                fVar32 = (float)FUN_ram_40002f2a(1,iVar42);
                pfVar11[0x19a] = fVar32;
                fVar32 = (float)FUN_ram_40002f2a(1,iVar42);
                pfVar11[0x19b] = fVar32;
              }
              else {
                fVar12 = (float)FUN_ram_40002f3c();
                pfVar11[0x193] = fVar12;
                fVar31 = (float)FUN_ram_40002f3c(iVar42);
                pfVar11[0x194] = fVar31;
                fVar40 = (float)FUN_ram_40002f3c(iVar42);
                pfVar11[0x195] = fVar40;
                fVar21 = (float)FUN_ram_40002f2a(1,uVar27 << 2);
                pfVar11[0x199] = fVar21;
                fVar46 = (float)FUN_ram_40002f2a(1,iVar42);
                pfVar11[0x19a] = fVar46;
                fVar26 = (float)FUN_ram_40002f2a(1,iVar42);
                pfVar11[0x19b] = fVar26;
                if ((((fVar32 != 0.0) && (fVar12 != 0.0)) && (fVar31 != 0.0)) &&
                   (((fVar40 != 0.0 && (fVar21 != 0.0)) && ((fVar46 != 0.0 && (fVar26 != 0.0)))))) {
                  FUN_ram_4000305c(fVar32,puVar8[0x48],puVar8[0x49] << 2);
                  FUN_ram_4000305c(fVar12,puVar8[0x4a],puVar8[0x4b] << 2);
                  FUN_ram_4000305c(fVar31,puVar8[0x4c],puVar8[0x4d] << 2);
                  FUN_ram_4000305c(fVar40,puVar8[0x4e],puVar8[0x4f] << 2);
                  *(ushort *)(pfVar11 + 0x191) = uVar3;
                  *(ushort *)((int)pfVar11 + 0x646) = uVar2;
                  pfVar11[0x196] = (float)(iVar38 * 3);
                  pfVar11[0x197] = (float)(uVar27 * uVar27 * 3);
                  pfVar11[0x198] = (float)(uVar27 * 3);
                  goto LAB_ram_40083e86;
                }
              }
              FUN_ram_4007fa9a(pfVar11 + 0x191);
            }
            else {
              if (((uint)fVar32 >> 0x1e == 0) && (((uint)fVar32 & 0x3fffffff) != 0)) {
                fVar32 = (float)FUN_ram_40002f2a(1);
                pfVar11[0x1c] = fVar32;
                if (fVar32 != 0.0) goto LAB_ram_40083900;
              }
              else {
                pfVar11[0x1c] = 0.0;
              }
              FUN_ram_4007feaa(pfVar11 + 0x14);
            }
          }
          else if (((int)((ulonglong)(uint)fVar32 * 0x54 >> 0x20) == 0) &&
                  (fVar12 = 0.0, (int)fVar32 * 0x54 != 0)) {
            puVar39 = (undefined4 *)puVar8[0x12];
            puVar20 = (undefined4 *)FUN_ram_40002f2a(1);
            puVar10 = puVar20;
            if (puVar20 != (undefined4 *)0x0) {
              do {
                fVar12 = (float)((int)fVar12 + 1);
                if (puVar39 != (undefined4 *)0x0) {
                  uVar34 = *puVar39;
                  puVar10[1] = puVar39[1];
                  uVar6 = puVar39[2];
                  *puVar10 = uVar34;
                  puVar10[2] = uVar6;
                  puVar10[3] = puVar39[3];
                  uVar6 = puVar39[4];
                  puVar10[5] = (int)uVar52;
                  puVar10[4] = uVar6;
                  FUN_ram_4007fb52(puVar10);
                  puVar10[0x13] = 0;
                  puVar10[0x14] = 0;
                  FUN_ram_40090832(puVar10 + 0xb,1,puVar10 + 0xe,puVar10 + 0x13);
                }
                puVar39 = puVar39 + 5;
                puVar10 = puVar10 + 0x15;
              } while (fVar32 != fVar12);
              if (pfVar11[0x14] != 0.0) {
                FUN_ram_40002f4a();
              }
              pfVar11[0x14] = (float)puVar20;
              pfVar11[0x15] = fVar32;
              goto LAB_ram_4008384c;
            }
          }
LAB_ram_40084454:
          FUN_ram_40080c40(pfVar11);
          FUN_ram_40002f4a(pfVar11);
          iVar38 = -3;
          goto LAB_ram_40081f30;
        }
        uVar52 = *(undefined8 *)(puVar8 + 0xb);
        uVar50 = *(undefined8 *)(puVar8 + 0xc);
        uVar54 = *(undefined8 *)(puVar8 + 0xd);
        *(undefined8 *)(pfVar11 + 0xd) = *(undefined8 *)(puVar8 + 10);
        *(undefined8 *)(pfVar11 + 0xe) = uVar52;
        *(undefined8 *)(pfVar11 + 0xf) = uVar50;
        *(undefined8 *)(pfVar11 + 0x10) = uVar54;
        if (((int)((ulonglong)(uint)fVar12 * 0x3c >> 0x20) != 0) ||
           (fStack_dc = 0.0, (int)fVar12 * 0x3c == 0)) {
          pfVar11[1] = 0.0;
          iVar38 = -3;
          goto LAB_ram_400832b2;
        }
        piVar13 = (int *)FUN_ram_40002f2a(1);
        pfVar11[1] = (float)piVar13;
        if (piVar13 != (int *)0x0) {
          puVar10 = (undefined4 *)puVar8[0x10];
          pfVar11[2] = fVar12;
          iVar42 = 0x34;
          uVar27 = 0;
          iVar38 = 0x3c;
LAB_ram_40082c1c:
          if (*piVar13 != 0) {
            FUN_ram_40002f4a();
            *piVar13 = 0;
          }
          piVar13[1] = 0;
          if (piVar13[2] != 0) {
            FUN_ram_40002f4a();
            piVar13[2] = 0;
          }
          piVar13[3] = 0;
          if (piVar13[5] != 0) {
            FUN_ram_40002f4a();
            piVar13[5] = 0;
          }
          if (piVar13[6] != 0) {
            FUN_ram_40002f4a();
            piVar13[6] = 0;
          }
          if (piVar13[7] != 0) {
            FUN_ram_40002f4a();
            piVar13[7] = 0;
          }
          if (piVar13[8] != 0) {
            FUN_ram_40002f4a();
            piVar13[8] = 0;
          }
          if (piVar13[0xc] != 0) {
            FUN_ram_40002f4a();
            piVar13[0xc] = 0;
          }
          if (piVar13[0xd] != 0) {
            FUN_ram_40002f4a();
            piVar13[0xd] = 0;
          }
          if (piVar13[0xe] != 0) {
            FUN_ram_40002f4a();
            piVar13[0xe] = 0;
          }
          piVar13[4] = 0;
          piVar13[9] = 0;
          piVar13[10] = 0;
          piVar13[0xb] = 0;
          if (puVar10 == (undefined4 *)0x0) goto LAB_ram_4008316c;
          uVar23 = puVar10[1];
          if (uVar23 != 0) {
            if (((int)((ulonglong)uVar23 * 0x54 >> 0x20) == 0) && (uVar7 = 0, uVar23 * 0x54 != 0)) {
              pfVar44 = (float *)*puVar10;
              iVar14 = FUN_ram_40002f2a(1);
              fVar40 = DAT_ram_400980f4;
              fVar31 = DAT_ram_40092834;
              fVar12 = DAT_ram_4009281c;
              if (iVar14 != 0) {
                pfVar43 = (float *)(iVar14 + 0x38);
                do {
                  if (pfVar44 != (float *)0x0) {
                    fVar21 = pfVar44[1];
                    fVar25 = *pfVar44;
                    pfVar43[-0xd] = fVar21;
                    fVar46 = pfVar44[2];
                    pfVar43[-0xe] = fVar25;
                    pfVar43[-0xc] = fVar46;
                    fVar26 = pfVar44[3];
                    pfVar43[-0xb] = fVar26;
                    fVar45 = pfVar44[4];
                    pfVar43[-9] = fVar32;
                    pfVar43[-10] = fVar45;
                    if (0.0 < fVar32) {
                      fVar21 = (fVar21 * fVar40) / fVar32;
                      fVar45 = (float)FUN_ram_40000786(fVar21);
                      fStack_e4 = (float)FUN_ram_40000a08(fVar21);
                      if (fVar25 == 2.8026e-45) {
                        fVar26 = (float)FUN_ram_40000d54(DAT_ram_400930a4,fVar26 / DAT_ram_400930dc)
                        ;
                        fVar25 = fVar45 * DAT_ram_40092834;
                        fStack_e4 = fStack_e4 / (pfVar43[-0xc] + pfVar43[-0xc]);
                        fStack_d8 = fVar26 * fStack_e4 + DAT_ram_4009281c;
                        fVar46 = -(fVar26 * fStack_e4) + DAT_ram_4009281c;
                        fVar21 = fStack_e4 / fVar26 + DAT_ram_4009281c;
                        fStack_e4 = DAT_ram_4009281c - fStack_e4 / fVar26;
                        fVar26 = fVar25;
                      }
                      else if ((int)fVar25 - 3U < 2) {
                        fStack_e4 = fStack_e4 / (fVar46 + fVar46);
                        if (fVar25 == 4.2039e-45) {
                          fVar25 = DAT_ram_4009281c - fVar45;
                          fStack_d8 = fVar25;
                        }
                        else {
                          fVar25 = -(fVar45 + DAT_ram_4009281c);
                          fStack_d8 = fVar45 + DAT_ram_4009281c;
                        }
                        fStack_d8 = fStack_d8 * DAT_ram_40092864;
                        fVar21 = fStack_e4 + DAT_ram_4009281c;
                        fStack_e4 = DAT_ram_4009281c - fStack_e4;
                        fVar26 = fVar45 * fVar31;
                        fVar46 = fStack_d8;
                      }
                      else {
                        fVar47 = (float)FUN_ram_40000d54(CONCAT44(DAT_ram_400930a8,DAT_ram_400930a4)
                                                         ,fVar26 / DAT_ram_400930dc);
                        fStack_e4 = fStack_e4 * DAT_ram_40092864;
                        fVar48 = (fVar12 / fVar47 + fVar47) * (fVar12 / pfVar43[-10] - fVar12) +
                                 (float)PTR_firmware_entry_ram_40092830;
                        if (0xff < extraout_a3 || 0.0 <= fVar48) {
                          fVar48 = SQRT(fVar48);
                        }
                        else {
                          fVar48 = (float)FUN_ram_40000e84();
                        }
                        fVar26 = fVar47 - fVar12;
                        fVar48 = fStack_e4 * fVar48;
                        fVar4 = fVar47 + fVar12;
                        fStack_e4 = fVar45 * fVar26;
                        if (pfVar43[-0xe] == 0.0) {
                          fVar46 = fVar4 - fStack_e4;
                          if (0.0 <= fVar47) {
                            fVar25 = (fVar47 + fVar47) * (-(fVar45 * fVar4) + fVar26);
                            fVar5 = SQRT(fVar47) + SQRT(fVar47);
                            fVar21 = fVar48 * fVar5 + fVar4 + fStack_e4;
                            fStack_e4 = -(fVar48 * fVar5) + fVar4 + fStack_e4;
                            fStack_d8 = fVar47 * (fVar48 * fVar5 + fVar46);
                            fVar46 = fVar47 * (-(fVar48 * fVar5) + fVar46);
                            fVar26 = (fVar45 * fVar4 + fVar26) * fVar31;
                          }
                          else {
                            fVar21 = (float)FUN_ram_40000e84(fVar47);
                            fStack_d8 = fVar48 * (fVar21 + fVar21) + fVar46;
                            fVar25 = (fVar47 + fVar47) * (-(fVar45 * fVar4) + fVar26);
                            fVar21 = (float)FUN_ram_40000e84(fVar47);
                            fStack_e4 = fVar4 + fStack_e4;
                            fVar46 = -(fVar48 * (fVar21 + fVar21)) + fVar46;
                            fVar21 = (float)FUN_ram_40000e84(fVar47);
                            fVar21 = fVar21 + fVar21;
                            fVar26 = (fVar45 * fVar4 + fVar26) * fVar31;
LAB_ram_400847d6:
                            fStack_d8 = fVar47 * fStack_d8;
                            fVar46 = fVar47 * fVar46;
                            fVar21 = fVar48 * fVar21 + fStack_e4;
                            fVar45 = (float)FUN_ram_40000e84(fVar47);
                            fStack_e4 = -(fVar48 * (fVar45 + fVar45)) + fStack_e4;
                          }
                        }
                        else {
                          fVar46 = fVar4 + fStack_e4;
                          if ((int)pfVar43[-0xe] < 0x100 && fVar47 < 0.0) {
                            fVar21 = (float)FUN_ram_40000e84(fVar47);
                            fStack_d8 = (fVar21 + fVar21) * fVar48 + fVar46;
                            fVar25 = fVar47 * fVar31 * (fVar45 * fVar4 + fVar26);
                            fVar21 = (float)FUN_ram_40000e84(fVar47);
                            fStack_e4 = fVar4 - fStack_e4;
                            fVar46 = -(fVar48 * (fVar21 + fVar21)) + fVar46;
                            fVar21 = (float)FUN_ram_40000e84(fVar47);
                            fVar26 = -(fVar45 * fVar4) + fVar26;
                            fVar21 = fVar21 + fVar21;
                            fVar26 = fVar26 + fVar26;
                            goto LAB_ram_400847d6;
                          }
                          fVar5 = -(fVar45 * fVar4) + fVar26;
                          fVar25 = fVar47 * fVar31 * (fVar45 * fVar4 + fVar26);
                          fVar26 = SQRT(fVar47) + SQRT(fVar47);
                          fVar21 = fVar26 * fVar48 + (fVar4 - fStack_e4);
                          fStack_e4 = -(fVar48 * fVar26) + (fVar4 - fStack_e4);
                          fStack_d8 = (fVar26 * fVar48 + fVar46) * fVar47;
                          fVar46 = fVar47 * (-(fVar26 * fVar48) + fVar46);
                          fVar26 = fVar5 + fVar5;
                        }
                      }
                      pfVar43[-5] = fVar26 / fVar21;
                      pfVar43[3] = -(fVar26 / fVar21);
                      pfVar43[-4] = fStack_e4 / fVar21;
                      pfVar43[4] = -(fStack_e4 / fVar21);
                      pfVar43[-8] = fStack_d8 / fVar21;
                      *pfVar43 = fStack_d8 / fVar21;
                      pfVar43[-7] = fVar25 / fVar21;
                      pfVar43[1] = fVar25 / fVar21;
                      pfVar43[-6] = fVar46 / fVar21;
                      pfVar43[2] = fVar46 / fVar21;
                    }
                    pfVar43[5] = 0.0;
                    pfVar43[6] = 0.0;
                    FUN_ram_40090832(pfVar43 + -3,1,pfVar43,pfVar43 + 5);
                  }
                  uVar7 = uVar7 + 1;
                  pfVar44 = pfVar44 + 5;
                  pfVar43 = pfVar43 + 0x15;
                } while (uVar7 != uVar23);
                if (*piVar13 != 0) {
                  FUN_ram_40002f4a();
                }
                piVar13[1] = uVar23;
                uVar23 = puVar10[3];
                *piVar13 = iVar14;
                goto joined_r0x4008349e;
              }
            }
LAB_ram_40084388:
            fVar12 = pfVar11[1];
            iVar38 = -3;
            goto LAB_ram_40083190;
          }
          if (*piVar13 != 0) {
            FUN_ram_40002f4a();
            *piVar13 = 0;
          }
          uVar23 = puVar10[3];
          piVar13[1] = 0;
joined_r0x4008349e:
          if (uVar23 != 0) {
            if (((int)((ulonglong)uVar23 * 0x54 >> 0x20) == 0) && (uVar7 = 0, uVar23 * 0x54 != 0)) {
              pfVar44 = (float *)puVar10[2];
              iVar14 = FUN_ram_40002f2a(1);
              fVar12 = DAT_ram_40092834;
              if (iVar14 != 0) {
                pfVar43 = (float *)(iVar14 + 0x38);
                do {
                  if (pfVar44 != (float *)0x0) {
                    fVar31 = pfVar44[1];
                    fVar26 = *pfVar44;
                    pfVar43[-0xd] = fVar31;
                    fVar40 = pfVar44[2];
                    pfVar43[-0xe] = fVar26;
                    pfVar43[-0xc] = fVar40;
                    fVar21 = pfVar44[3];
                    pfVar43[-0xb] = fVar21;
                    fVar46 = pfVar44[4];
                    pfVar43[-9] = fVar32;
                    pfVar43[-10] = fVar46;
                    if (0.0 < fVar32) {
                      fVar46 = (fVar31 * DAT_ram_400980f4) / fVar32;
                      fVar31 = (float)FUN_ram_40000786(fVar46);
                      fVar46 = (float)FUN_ram_40000a08(fVar46);
                      if (fVar26 == 2.8026e-45) {
                        fVar40 = (float)FUN_ram_40000d54(DAT_ram_400930a4,fVar21 / DAT_ram_400930dc)
                        ;
                        fVar47 = fVar31 * DAT_ram_40092834;
                        fVar46 = fVar46 / (pfVar43[-0xc] + pfVar43[-0xc]);
                        fStack_e4 = fVar40 * fVar46 + DAT_ram_4009281c;
                        fVar45 = fVar46 / fVar40 + DAT_ram_4009281c;
                        fVar26 = DAT_ram_4009281c - fVar46 / fVar40;
                        fVar31 = fVar47;
                        fVar25 = -(fVar40 * fVar46) + DAT_ram_4009281c;
                      }
                      else if ((int)fVar26 - 3U < 2) {
                        fVar46 = fVar46 / (fVar40 + fVar40);
                        if (fVar26 == 4.2039e-45) {
                          fVar47 = DAT_ram_4009281c - fVar31;
                          fStack_e4 = fVar47;
                        }
                        else {
                          fStack_e4 = fVar31 + DAT_ram_4009281c;
                          fVar47 = -fStack_e4;
                        }
                        fStack_e4 = fStack_e4 * DAT_ram_40092864;
                        fVar45 = fVar46 + DAT_ram_4009281c;
                        fVar31 = fVar31 * fVar12;
                        fVar26 = DAT_ram_4009281c - fVar46;
                        fVar25 = fStack_e4;
                      }
                      else {
                        fVar21 = (float)FUN_ram_40000d54(CONCAT44(DAT_ram_400930a8,DAT_ram_400930a4)
                                                         ,fVar21 / DAT_ram_400930dc);
                        fVar46 = fVar46 * DAT_ram_40092864;
                        fVar40 = (DAT_ram_4009281c / fVar21 + fVar21) *
                                 (DAT_ram_4009281c / pfVar43[-10] - DAT_ram_4009281c) +
                                 (float)PTR_firmware_entry_ram_40092830;
                        if (0xff < extraout_a3_00 || 0.0 <= fVar40) {
                          fVar40 = SQRT(fVar40);
                        }
                        else {
                          fVar40 = (float)FUN_ram_40000e84();
                        }
                        fVar46 = fVar46 * fVar40;
                        fVar45 = fVar21 - DAT_ram_4009281c;
                        fVar40 = fVar21 + DAT_ram_4009281c;
                        fVar26 = fVar31 * fVar45;
                        if (pfVar43[-0xe] == 0.0) {
                          fVar25 = fVar40 - fVar26;
                          if (0.0 <= fVar21) {
                            fVar47 = (fVar21 + fVar21) * (-(fVar31 * fVar40) + fVar45);
                            fVar31 = (fVar31 * fVar40 + fVar45) * fVar12;
                            fVar48 = SQRT(fVar21) + SQRT(fVar21);
                            fVar45 = fVar48 * fVar46 + fVar26 + fVar40;
                            fVar26 = -(fVar46 * fVar48) + fVar26 + fVar40;
                            fStack_e4 = (fVar48 * fVar46 + fVar25) * fVar21;
                            fVar25 = (-(fVar48 * fVar46) + fVar25) * fVar21;
                          }
                          else {
                            fVar48 = (float)FUN_ram_40000e84(fVar21);
                            fStack_e4 = fVar46 * (fVar48 + fVar48) + fVar25;
                            fVar47 = (fVar21 + fVar21) * (-(fVar31 * fVar40) + fVar45);
                            fVar48 = (float)FUN_ram_40000e84(fVar21);
                            fVar26 = fVar26 + fVar40;
                            fVar25 = -(fVar46 * (fVar48 + fVar48)) + fVar25;
                            fVar48 = (float)FUN_ram_40000e84(fVar21);
                            fVar48 = fVar48 + fVar48;
                            fVar31 = (fVar31 * fVar40 + fVar45) * fVar12;
LAB_ram_4008484a:
                            fStack_e4 = fVar21 * fStack_e4;
                            fVar25 = fVar21 * fVar25;
                            fVar40 = (float)FUN_ram_40000e84(fVar21);
                            fVar45 = fVar46 * fVar48 + fVar26;
                            fVar26 = -(fVar46 * (fVar40 + fVar40)) + fVar26;
                          }
                        }
                        else {
                          fVar25 = fVar26 + fVar40;
                          if ((int)pfVar43[-0xe] < 0x100 && fVar21 < 0.0) {
                            fVar48 = (float)FUN_ram_40000e84(fVar21);
                            fStack_e4 = fVar46 * (fVar48 + fVar48) + fVar25;
                            fVar47 = fVar21 * fVar12 * (fVar31 * fVar40 + fVar45);
                            fVar48 = (float)FUN_ram_40000e84(fVar21);
                            fVar26 = fVar40 - fVar26;
                            fVar25 = -(fVar46 * (fVar48 + fVar48)) + fVar25;
                            fVar48 = (float)FUN_ram_40000e84(fVar21);
                            fVar45 = -(fVar31 * fVar40) + fVar45;
                            fVar48 = fVar48 + fVar48;
                            fVar31 = fVar45 + fVar45;
                            goto LAB_ram_4008484a;
                          }
                          fVar48 = -(fVar31 * fVar40) + fVar45;
                          fVar47 = fVar21 * fVar12 * (fVar31 * fVar40 + fVar45);
                          fVar31 = fVar48 + fVar48;
                          fVar48 = SQRT(fVar21) + SQRT(fVar21);
                          fVar45 = fVar46 * fVar48 + (fVar40 - fVar26);
                          fVar26 = -(fVar46 * fVar48) + (fVar40 - fVar26);
                          fStack_e4 = fVar21 * (fVar46 * fVar48 + fVar25);
                          fVar25 = fVar21 * (-(fVar46 * fVar48) + fVar25);
                        }
                      }
                      pfVar43[-5] = fVar31 / fVar45;
                      pfVar43[3] = -(fVar31 / fVar45);
                      pfVar43[-4] = fVar26 / fVar45;
                      pfVar43[4] = -(fVar26 / fVar45);
                      pfVar43[-8] = fStack_e4 / fVar45;
                      *pfVar43 = fStack_e4 / fVar45;
                      pfVar43[-7] = fVar47 / fVar45;
                      pfVar43[1] = fVar47 / fVar45;
                      pfVar43[-6] = fVar25 / fVar45;
                      pfVar43[2] = fVar25 / fVar45;
                    }
                    pfVar43[5] = 0.0;
                    pfVar43[6] = 0.0;
                    FUN_ram_40090832(pfVar43 + -3,1,pfVar43,pfVar43 + 5);
                  }
                  uVar7 = uVar7 + 1;
                  pfVar44 = pfVar44 + 5;
                  pfVar43 = pfVar43 + 0x15;
                } while (uVar7 != uVar23);
                if (piVar13[2] != 0) {
                  FUN_ram_40002f4a();
                }
                piVar13[3] = uVar23;
                piVar13[2] = iVar14;
                goto LAB_ram_40082fa6;
              }
            }
            goto LAB_ram_40084388;
          }
          if (piVar13[2] != 0) {
            FUN_ram_40002f4a();
            piVar13[2] = 0;
          }
          piVar13[3] = 0;
LAB_ram_40082fa6:
          if (piVar13[5] != 0) {
            FUN_ram_40002f4a();
            piVar13[5] = 0;
          }
          if (piVar13[6] != 0) {
            FUN_ram_40002f4a();
            piVar13[6] = 0;
          }
          if (piVar13[7] != 0) {
            FUN_ram_40002f4a();
            piVar13[7] = 0;
          }
          if (piVar13[8] != 0) {
            FUN_ram_40002f4a();
            piVar13[8] = 0;
          }
          if (piVar13[0xc] != 0) {
            FUN_ram_40002f4a();
            piVar13[0xc] = 0;
          }
          if (piVar13[0xd] != 0) {
            FUN_ram_40002f4a();
            piVar13[0xd] = 0;
          }
          if (piVar13[0xe] != 0) {
            FUN_ram_40002f4a();
            piVar13[0xe] = 0;
          }
          piVar13[4] = 0;
          uVar2 = *(ushort *)((int)puVar10 + 0x12);
          uVar23 = (uint)uVar2;
          piVar13[9] = 0;
          piVar13[10] = 0;
          piVar13[0xb] = 0;
          if (uVar23 != 0) {
            uVar3 = *(ushort *)(puVar10 + 4);
            if (uVar3 != 0) {
              iVar14 = uVar3 * uVar23;
              if (iVar14 * 0xc == 0) {
                iVar35 = 0;
              }
              else {
                iVar35 = FUN_ram_40002f3c();
              }
              piVar13[5] = iVar35;
              iVar41 = uVar23 * 0xc;
              if ((uVar23 * uVar23 * 3 & 0x3fffffff) == 0) {
                piVar13[6] = 0;
                iVar38 = FUN_ram_40002f3c(iVar41);
                piVar13[7] = iVar38;
                iVar38 = FUN_ram_40002f3c(iVar41);
                piVar13[8] = iVar38;
                iVar38 = FUN_ram_40002f2a(1,uVar23 << 2);
                piVar13[0xc] = iVar38;
                iVar38 = FUN_ram_40002f2a(1,iVar41);
                piVar13[0xd] = iVar38;
                iVar38 = FUN_ram_40002f2a(1,iVar41);
                piVar13[0xe] = iVar38;
              }
              else {
                iVar15 = FUN_ram_40002f3c();
                piVar13[6] = iVar15;
                iVar16 = FUN_ram_40002f3c(iVar41);
                piVar13[7] = iVar16;
                iVar17 = FUN_ram_40002f3c(iVar41);
                piVar13[8] = iVar17;
                iVar18 = FUN_ram_40002f2a(1,uVar23 << 2);
                piVar13[0xc] = iVar18;
                iVar19 = FUN_ram_40002f2a(1,iVar41);
                piVar13[0xd] = iVar19;
                iVar41 = FUN_ram_40002f2a(1,iVar41);
                piVar13[0xe] = iVar41;
                if ((((((iVar35 != 0) && (iVar15 != 0)) && (iVar16 != 0)) &&
                     ((iVar17 != 0 && (iVar18 != 0)))) && (iVar19 != 0)) && (iVar41 != 0)) {
                  FUN_ram_4000305c(iVar35,puVar10[5],puVar10[6] << 2);
                  FUN_ram_4000305c(iVar15,puVar10[7],puVar10[8] << 2);
                  FUN_ram_4000305c(iVar16,puVar10[9],puVar10[10] << 2);
                  FUN_ram_4000305c(iVar17,puVar10[0xb],puVar10[0xc] << 2);
                  *(ushort *)(piVar13 + 4) = uVar3;
                  *(ushort *)((int)piVar13 + 0x12) = uVar2;
                  piVar13[9] = iVar14 * 3;
                  piVar13[10] = uVar23 * uVar23 * 3;
                  piVar13[0xb] = uVar23 * 3;
                  goto LAB_ram_4008316c;
                }
              }
              FUN_ram_4007fa9a(piVar13 + 4);
              fVar12 = pfVar11[1];
              iVar38 = -3;
              goto LAB_ram_40083190;
            }
          }
LAB_ram_4008316c:
          uVar27 = uVar27 + 1;
          if (uVar27 < puVar8[0x11]) goto code_r0x40083174;
          fVar32 = (float)puVar8[0xf];
          pfVar11[3] = (float)puVar8[0xe];
          pfVar11[4] = fVar32;
          if (pfVar11[5] != 0.0) {
            FUN_ram_40002f4a();
            pfVar11[5] = 0.0;
          }
          if (pfVar11[7] != 0.0) {
            FUN_ram_40002f4a();
            pfVar11[7] = 0.0;
          }
          uVar27 = puVar8[0xf];
          pfVar11[6] = 0.0;
          pfVar11[8] = 0.0;
          if (uVar27 != 0) {
            piVar33 = (int *)puVar8[0xe];
            piVar13 = piVar33 + uVar27 * 7;
            fVar32 = 1.4013e-45;
            do {
              if (*piVar33 == 0) {
                fVar12 = (float)(uint)*(ushort *)((int)piVar33 + 10);
                if ((uint)*(ushort *)((int)piVar33 + 10) < (uint)*(ushort *)(piVar33 + 2)) {
                  fVar12 = (float)(uint)*(ushort *)(piVar33 + 2);
                }
                if ((uint)fVar32 < (uint)fVar12) {
                  fVar32 = fVar12;
                }
              }
              piVar33 = piVar33 + 7;
            } while (piVar13 != piVar33);
            fVar12 = (float)FUN_ram_40002f2a(1,(int)fVar32 << 2);
            pfVar11[5] = fVar12;
            fVar31 = (float)FUN_ram_40002f2a(1,(int)fVar32 << 2);
            pfVar11[7] = fVar31;
            if ((fVar12 == 0.0) || (fVar31 == 0.0)) {
              pfVar11[5] = 0.0;
              pfVar11[7] = 0.0;
              iVar38 = -3;
              FUN_ram_40080638(pfVar11 + 1);
              goto LAB_ram_400832b2;
            }
            pfVar11[6] = fVar32;
            pfVar11[8] = fVar32;
          }
          uVar27 = puVar8[0x11];
          pfVar11[10] = (float)(uVar27 << 1);
          if ((((float)(uVar27 << 1) == 0.0) || ((uVar27 & 0x7fffffff) >> 0x1d != 0)) ||
             ((uVar27 & 0x1fffffff) == 0)) {
            fVar32 = 0.0;
          }
          else {
            fVar32 = (float)FUN_ram_40002f2a(1);
          }
          pfVar11[9] = fVar32;
          if (((uVar27 == 0) || (uVar27 >> 0x1e != 0)) || (iVar38 = uVar27 << 2, iVar38 == 0)) {
            pfVar11[0xb] = 0.0;
            pfVar11[0xc] = 0.0;
LAB_ram_40084482:
            FUN_ram_40080638(pfVar11 + 1);
            iVar38 = -3;
            goto LAB_ram_400832b2;
          }
          fVar12 = (float)FUN_ram_40002f2a(1,iVar38);
          pfVar11[0xb] = fVar12;
          fVar31 = (float)FUN_ram_40002f2a(1,iVar38);
          pfVar11[0xc] = fVar31;
          if (((fVar32 == 0.0) || (fVar12 == 0.0)) || (fVar31 == 0.0)) goto LAB_ram_40084482;
          *(undefined2 *)(pfVar11 + 0x11) = 0;
          pfVar11[0x12] = 0.0;
          pfVar11[0x13] = 0.0;
          goto LAB_ram_40083756;
        }
LAB_ram_4008490e:
        iVar38 = -3;
        goto LAB_ram_400832b2;
      }
    }
  }
  iVar38 = -2;
  goto LAB_ram_40081f30;
code_r0x40083174:
  fVar12 = pfVar11[1];
  piVar13 = (int *)((int)fVar12 + iVar38);
  puVar10 = (undefined4 *)(puVar8[0x10] + iVar42);
  iVar38 = iVar38 + 0x3c;
  iVar42 = iVar42 + 0x34;
  if (piVar13 == (int *)0x0) goto code_r0x4008318c;
  goto LAB_ram_40082c1c;
code_r0x4008318c:
  iVar38 = -1;
LAB_ram_40083190:
  if (fVar12 != 0.0) {
    fVar32 = pfVar11[2];
    if (fVar32 != 0.0) {
      iVar42 = 0;
      do {
        puVar10 = (undefined4 *)((int)fVar12 + iVar42);
        if (puVar10 != (undefined4 *)0x0) {
          if (*(int *)((int)fVar12 + iVar42) != 0) {
            FUN_ram_40002f4a();
            *puVar10 = 0;
          }
          puVar10[1] = 0;
          if (puVar10[2] != 0) {
            FUN_ram_40002f4a();
            puVar10[2] = 0;
          }
          puVar10[3] = 0;
          if (puVar10[5] != 0) {
            FUN_ram_40002f4a();
            puVar10[5] = 0;
          }
          if (puVar10[6] != 0) {
            FUN_ram_40002f4a();
            puVar10[6] = 0;
          }
          if (puVar10[7] != 0) {
            FUN_ram_40002f4a();
            puVar10[7] = 0;
          }
          if (puVar10[8] != 0) {
            FUN_ram_40002f4a();
            puVar10[8] = 0;
          }
          if (puVar10[0xc] != 0) {
            FUN_ram_40002f4a();
            puVar10[0xc] = 0;
          }
          if (puVar10[0xd] != 0) {
            FUN_ram_40002f4a();
            puVar10[0xd] = 0;
          }
          if (puVar10[0xe] != 0) {
            FUN_ram_40002f4a();
            puVar10[0xe] = 0;
          }
          fVar32 = pfVar11[2];
          fVar12 = pfVar11[1];
          puVar10[4] = 0;
          puVar10[9] = 0;
          puVar10[10] = 0;
          puVar10[0xb] = 0;
        }
        iVar42 = iVar42 + 0x3c;
        fStack_dc = (float)((int)fStack_dc + 1);
      } while ((uint)fStack_dc < (uint)fVar32);
      if (fVar12 == 0.0) goto LAB_ram_40083252;
    }
    FUN_ram_40002f4a();
    pfVar11[1] = 0.0;
  }
LAB_ram_40083252:
  pfVar11[2] = 0.0;
  if (pfVar11[5] != 0.0) {
    FUN_ram_40002f4a();
  }
  pfVar11[5] = 0.0;
  pfVar11[6] = 0.0;
  if (pfVar11[7] != 0.0) {
    FUN_ram_40002f4a();
  }
  pfVar11[7] = 0.0;
  pfVar11[8] = 0.0;
  pfVar11[3] = 0.0;
  pfVar11[4] = 0.0;
  if (pfVar11[9] != 0.0) {
    FUN_ram_40002f4a();
    pfVar11[9] = 0.0;
  }
  pfVar11[10] = 0.0;
  if (pfVar11[0xb] != 0.0) {
    FUN_ram_40002f4a();
    pfVar11[0xb] = 0.0;
  }
  if (pfVar11[0xc] != 0.0) {
    FUN_ram_40002f4a();
    pfVar11[0xc] = 0.0;
  }
  *(undefined2 *)(pfVar11 + 0x11) = 0;
  pfVar11[0x12] = 0.0;
  pfVar11[0x13] = 0.0;
LAB_ram_400832b2:
  FUN_ram_40080c40(pfVar11);
  FUN_ram_40002f4a(pfVar11);
LAB_ram_40081f30:
  FUN_ram_4007ff18(puVar8);
  FUN_ram_40002f4a(puVar8);
  return iVar38;
}


