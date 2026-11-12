/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40087000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40087240.
 * REA evidence: ev_b4852b3978bc1b141b4e21f933082d26d3247faca1247b49f0ee608f6b897016
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40087240(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined4 uStack_40;
  
  if (1 < (uint)param_1[1]) {
    iVar9 = param_1[1] - 2;
    uVar14 = (uint)*(ushort *)*param_1;
    *param_1 = (int)((ushort *)*param_1 + 1);
    param_1[1] = iVar9;
    if (uVar14 != 0) {
      puVar4 = (uint *)FUN_ram_40002f1a(1,uVar14 * 0x1c);
      if (puVar4 == (uint *)0x0) {
        return 0xfffffffd;
      }
      uVar8 = 0;
      puVar3 = puVar4;
      if (iVar9 == 0) goto LAB_ram_40087314;
      do {
        pbVar7 = (byte *)*param_1;
        uVar12 = iVar9 - 1;
        uVar6 = (uint)*pbVar7;
        param_1[1] = uVar12;
        *param_1 = (int)(pbVar7 + 1);
        *puVar3 = uVar6;
        if (uVar6 != 0) {
          if (uVar6 == 1) {
            uVar16 = 0;
            if (3 < uVar12) {
              uVar16 = CONCAT44(uStack_40,*(undefined4 *)(pbVar7 + 1));
              *param_1 = (int)(pbVar7 + 5);
              param_1[1] = iVar9 + -5;
            }
            *(undefined8 *)(puVar3 + 1) = uVar16;
          }
          goto joined_r0x40087308;
        }
        if (1 < uVar12) {
          uVar1 = *(ushort *)(pbVar7 + 1);
          uVar12 = iVar9 - 3;
          *param_1 = (int)(pbVar7 + 3);
          param_1[1] = uVar12;
          *(ushort *)(puVar3 + 2) = uVar1;
          if (uVar12 < 2) goto LAB_ram_40087552;
          uVar2 = *(ushort *)(pbVar7 + 3);
          pbVar7 = pbVar7 + 5;
          uVar12 = iVar9 - 5;
          *param_1 = (int)pbVar7;
          uVar6 = (uint)uVar1 * (uint)uVar2;
          param_1[1] = uVar12;
          *(ushort *)((int)puVar3 + 10) = uVar2;
          if (uVar6 == 0) goto LAB_ram_40087556;
          uVar15 = uVar6 * 4;
          if ((uVar15 != 0) && (uVar5 = FUN_ram_40002f2c(uVar15), uVar5 != 0)) {
            if (uVar12 < uVar15) {
              param_1[1] = 0;
              FUN_ram_40002f3a();
              uVar11 = 0xfffffffe;
              goto LAB_ram_40087468;
            }
            FUN_ram_4000304c(uVar5,pbVar7,uVar15);
            uVar12 = uVar12 + uVar6 * -4;
            *param_1 = (int)(pbVar7 + uVar15);
            param_1[1] = uVar12;
            puVar3[3] = uVar5;
            puVar3[4] = uVar6;
            goto LAB_ram_40087400;
          }
LAB_ram_40087508:
          uVar11 = 0xfffffffd;
          goto LAB_ram_40087468;
        }
        *(undefined2 *)(puVar3 + 2) = 0;
LAB_ram_40087552:
        *(undefined2 *)((int)puVar3 + 10) = 0;
LAB_ram_40087556:
        puVar3[3] = 0;
        puVar3[4] = 0;
        uVar5 = 0;
LAB_ram_40087400:
        if (1 < uVar12) {
          uVar12 = uVar12 - 2;
          puVar10 = (ushort *)*param_1 + 1;
          uVar6 = (uint)*(ushort *)*param_1;
          *param_1 = (int)puVar10;
          param_1[1] = uVar12;
          if (uVar6 != 0) {
            uVar13 = uVar6 * 4;
            uVar15 = FUN_ram_40002f1a(uVar13,1);
            puVar3[5] = uVar15;
            if (uVar15 == 0) {
              if (uVar5 != 0) {
                FUN_ram_40002f3a(uVar5);
                puVar3[3] = 0;
              }
              puVar3[4] = 0;
              if (puVar3[5] != 0) {
                FUN_ram_40002f3a();
                puVar3[5] = 0;
              }
              uVar14 = DAT_ram_4009a170;
              puVar3[6] = 0;
              puVar3[2] = uVar14;
              goto LAB_ram_40087508;
            }
            puVar3[6] = uVar6;
            if (uVar13 <= uVar12) {
              FUN_ram_4000304c(uVar15,puVar10,uVar13);
              *param_1 = (int)(puVar10 + uVar6 * 2);
              param_1[1] = uVar12 + uVar6 * -4;
              goto joined_r0x40087308;
            }
            param_1[1] = 0;
            if (uVar5 == 0) {
              puVar3[4] = 0;
LAB_ram_4008753e:
              FUN_ram_40002f3a(uVar15);
              puVar3[5] = 0;
            }
            else {
              FUN_ram_40002f3a(uVar5);
              uVar15 = puVar3[5];
              puVar3[3] = 0;
              puVar3[4] = 0;
              if (uVar15 != 0) goto LAB_ram_4008753e;
            }
            uVar14 = DAT_ram_4009a170;
            puVar3[6] = 0;
            puVar3[2] = uVar14;
            uVar11 = 0xfffffffe;
LAB_ram_40087468:
            uVar6 = DAT_ram_4009a170;
            uVar14 = 0;
            iVar9 = 0;
            uVar12 = *puVar4;
            while( true ) {
              if (uVar12 == 0) {
                if (puVar4[iVar9 + 3] != 0) {
                  FUN_ram_40002f3a();
                  puVar4[iVar9 + 3] = 0;
                }
                puVar4[iVar9 + 4] = 0;
                if (puVar4[iVar9 + 5] != 0) {
                  FUN_ram_40002f3a();
                  puVar4[iVar9 + 5] = 0;
                }
                puVar4[iVar9 + 6] = 0;
                puVar4[iVar9 + 2] = uVar6;
              }
              uVar14 = uVar14 + 1 & 0xffff;
              if (uVar8 < uVar14) break;
              iVar9 = uVar14 * 7;
              uVar12 = puVar4[uVar14 * 7];
            }
            FUN_ram_40002f3a(puVar4);
            return uVar11;
          }
        }
joined_r0x40087308:
        while( true ) {
          uVar8 = uVar8 + 1 & 0xffff;
          if (uVar8 == uVar14) {
            *param_2 = puVar4;
            param_2[1] = uVar8;
            return 0;
          }
          puVar3 = puVar3 + 7;
          iVar9 = param_1[1];
          if (iVar9 != 0) break;
LAB_ram_40087314:
          *puVar3 = 0;
          *(undefined2 *)(puVar3 + 2) = 0;
          *(undefined2 *)((int)puVar3 + 10) = 0;
          puVar3[3] = 0;
          puVar3[4] = 0;
        }
      } while( true );
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return 0;
}


/* NanoCore 1.11, address 0x40087562.
 * REA evidence: ev_3b3b25f492493c0f6514786c0078412bbce7dfe837b2d94faee63fc5720a55d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40087562(int param_1)

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
  
  if (param_1 != 0) {
    memset(param_1,0,0x48);
    fVar1 = DAT_ram_40094604;
    puVar10 = (ulonglong *)&DAT_ram_30083f58;
    *(ulonglong *)(param_1 + 0x40) = (ulonglong)(uint)DAT_ram_40094604;
    fVar6 = DAT_ram_4009b37c;
    fVar5 = DAT_ram_4009a89c;
    fVar4 = DAT_ram_40094eb0;
    fVar3 = DAT_ram_40094e90;
    fVar2 = DAT_ram_40094640;
    uVar8 = 0;
    if (DAT_ram_30084f60 == '\0') {
      uVar12 = (ulonglong)DAT_ram_4009b378;
      fVar11 = 0.0;
      iVar7 = 0;
      while( true ) {
        *puVar10 = uVar12;
        iVar7 = iVar7 + 1;
        fVar11 = (float)FUN_ram_40000bd8(-((fVar11 / fVar6) * fVar4 + fVar2),uVar8);
        puVar9 = (ulonglong *)((int)puVar10 + 0x804);
        puVar10 = (ulonglong *)((int)puVar10 + 4);
        *puVar9 = (ulonglong)(uint)(fVar1 / (fVar11 + fVar1));
        if (iVar7 == 0x200) break;
        fVar11 = (float)iVar7;
        uVar8 = FUN_ram_40000aa2((fVar11 / fVar6) * fVar3 + fVar5);
        uVar12 = extraout_fa0;
      }
      _DAT_ram_30084758 = _DAT_ram_30084754;
      _DAT_ram_30084f5c = _DAT_ram_30084f58;
      DAT_ram_30084f60 = '\x01';
    }
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x40087678.
 * REA evidence: ev_8ea32457156ebc0a0a6633ec3c20d0e17febb3d5996e8b0ac3c16e91d45d51ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40087678(int *param_1,uint *param_2,uint param_3)

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
  float fVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  ulonglong *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  ushort uVar27;
  uint *puVar28;
  int *piVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  undefined4 *puVar35;
  undefined8 uVar36;
  ulonglong uVar37;
  undefined8 uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  undefined8 uVar41;
  uint uStack_90;
  uint *puStack_58;
  uint uStack_54;
  
  if (((param_1 == (int *)0x0) || (param_2 == (uint *)0x0)) || (param_3 == 0)) {
    return -1;
  }
  if (param_1[1] != 0) {
    FUN_ram_40086ad0();
    FUN_ram_40002f3a(param_1[1]);
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    FUN_ram_40085da8();
    FUN_ram_40002f3a(*param_1);
    *param_1 = 0;
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  puVar6 = (uint *)FUN_ram_40002f1a(1,0x16c);
  if (puVar6 == (uint *)0x0) {
    return -3;
  }
  puStack_58 = param_2;
  uStack_54 = param_3;
  if (3 < param_3) {
    uStack_54 = param_3 - 4;
    puStack_58 = param_2 + 1;
    if ((*param_2 == 0x42504444) && (1 < uStack_54)) {
      uVar2 = (ushort)param_2[1];
      puVar28 = (uint *)((int)param_2 + 6);
      uVar25 = param_3 - 6;
      puStack_58 = puVar28;
      uStack_54 = uVar25;
      if ((ushort)(uVar2 - 1) < 3) {
        uVar22 = 0;
        if (3 < uVar25) {
          uVar22 = *(uint *)((int)param_2 + 6);
          puVar28 = (uint *)((int)param_2 + 10);
          uVar25 = param_3 - 10;
        }
        *puVar6 = uVar22;
        uVar22 = uVar25;
        puStack_58 = puVar28;
        uStack_54 = uVar25;
        if (1 < uVar25) {
          uVar3 = (ushort)*puVar28;
          puStack_58 = (uint *)((int)puVar28 + 2);
          uVar22 = uVar25 - 2;
          uStack_54 = uVar22;
          if (uVar3 != 0) {
            uVar27 = uVar3 - 1;
            if (uVar22 < 4) {
              puVar6[1] = 0;
              if (uVar3 == 1) {
LAB_ram_40088998:
                uVar27 = 1;
                uStack_54 = uVar22;
              }
              else {
LAB_ram_400888fa:
                puVar6[2] = 0;
                uStack_54 = uVar22;
                if (uVar27 == 1) goto LAB_ram_40088992;
LAB_ram_40088904:
                puVar6[3] = 0;
                if (uVar27 < 3) {
LAB_ram_400898dc:
                  uVar27 = 3;
                }
                else {
LAB_ram_40088912:
                  puVar6[4] = 0;
                  if (uVar27 == 3) {
LAB_ram_40089a5a:
                    uVar27 = 4;
                  }
                  else {
LAB_ram_40088920:
                    puVar6[5] = 0;
                    if (uVar27 < 5) {
LAB_ram_40089a62:
                      uVar27 = 5;
                    }
                    else {
LAB_ram_4008892e:
                      puVar6[6] = 0;
                      uVar38 = 0;
                      if (uVar27 < 6) {
LAB_ram_40089abe:
                        uVar27 = 6;
                      }
                      else {
LAB_ram_40088940:
                        *(undefined8 *)(puVar6 + 7) = uVar38;
                        uVar27 = 7;
                      }
                    }
                  }
                }
              }
            }
            else {
              uVar38 = CONCAT44(puStack_58,*(undefined4 *)((int)puVar28 + 2));
              puStack_58 = (uint *)((int)puVar28 + 6);
              uVar22 = uVar25 - 6;
              *(undefined8 *)(puVar6 + 1) = uVar38;
              if (uVar3 == 1) goto LAB_ram_40088998;
              if (uVar22 < 4) goto LAB_ram_400888fa;
              uVar38 = CONCAT44(puStack_58,*(undefined4 *)((int)puVar28 + 6));
              puStack_58 = (uint *)((int)puVar28 + 10);
              uStack_54 = uVar25 - 10;
              *(undefined8 *)(puVar6 + 2) = uVar38;
              if (uVar3 != 2) {
                if (uStack_54 < 4) goto LAB_ram_40088904;
                uVar38 = CONCAT44(puStack_58,*(undefined4 *)((int)puVar28 + 10));
                puStack_58 = (uint *)((int)puVar28 + 0xe);
                uStack_54 = uVar25 - 0xe;
                *(undefined8 *)(puVar6 + 3) = uVar38;
                if (2 < uVar27) {
                  if (uStack_54 < 4) goto LAB_ram_40088912;
                  uVar38 = CONCAT44(puStack_58,*(undefined4 *)((int)puVar28 + 0xe));
                  puStack_58 = (uint *)((int)puVar28 + 0x12);
                  uStack_54 = uVar25 - 0x12;
                  *(undefined8 *)(puVar6 + 4) = uVar38;
                  if (uVar27 != 3) {
                    if (uStack_54 < 4) goto LAB_ram_40088920;
                    uVar38 = CONCAT44(puStack_58,*puStack_58);
                    uStack_54 = uVar25 - 0x16;
                    puStack_58 = (uint *)((int)puVar28 + 0x16);
                    *(undefined8 *)(puVar6 + 5) = uVar38;
                    if (4 < uVar27) {
                      if (uStack_54 < 4) goto LAB_ram_4008892e;
                      puVar7 = (uint *)((int)puVar28 + 0x1a);
                      uStack_54 = uVar25 - 0x1a;
                      *(ulonglong *)(puVar6 + 6) =
                           CONCAT44(puStack_58,*(undefined4 *)((int)puVar28 + 0x16));
                      puStack_58 = puVar7;
                      if (5 < uVar27) {
                        if (uStack_54 < 4) {
                          uVar38 = 0;
                        }
                        else {
                          puStack_58 = (uint *)((int)puVar28 + 0x1e);
                          uStack_54 = uVar25 - 0x1e;
                          uVar38 = CONCAT44(puVar7,*(undefined4 *)((int)puVar28 + 0x1a));
                        }
                        goto LAB_ram_40088940;
                      }
                      goto LAB_ram_40089abe;
                    }
                    goto LAB_ram_40089a62;
                  }
                  goto LAB_ram_40089a5a;
                }
                goto LAB_ram_400898dc;
              }
LAB_ram_40088992:
              uVar27 = 2;
            }
            uVar22 = uStack_54;
            if (uVar27 < uVar3) {
              do {
                while (uVar27 = uVar27 + 1, uVar22 < 4) {
                  if (uVar3 == uVar27) goto LAB_ram_400879cc;
                }
                uVar22 = uVar22 - 4;
                puStack_58 = puStack_58 + 1;
                uStack_54 = uVar22;
              } while (uVar3 != uVar27);
            }
          }
        }
LAB_ram_400879cc:
        uVar37 = (ulonglong)DAT_ram_40094604;
        puVar6[8] = 0;
        *(ulonglong *)(puVar6 + 9) = uVar37;
        uVar25 = uVar22;
        if (uVar2 != 1) {
          uVar38 = 0;
          puVar28 = puStack_58;
          if (3 < uVar22) {
            uVar25 = uVar22 - 4;
            puVar6[8] = *puStack_58;
            puVar28 = puStack_58 + 1;
            uStack_54 = uVar25;
            if (3 < uVar25) {
              uVar38 = CONCAT44(puStack_58 + 1,puStack_58[1]);
              uVar25 = uVar22 - 8;
              puVar28 = puStack_58 + 2;
              uStack_54 = uVar25;
            }
          }
          puStack_58 = puVar28;
          *(undefined8 *)(puVar6 + 9) = uVar38;
        }
        if (uVar25 < 2) {
          uVar22 = 0;
          puVar28 = puStack_58;
LAB_ram_40087e96:
          puStack_58 = puVar28;
          puVar6[10] = 0;
          puVar28 = puStack_58;
LAB_ram_40087e9a:
          puStack_58 = puVar28;
          puVar6[0xb] = 0;
          puVar28 = puStack_58;
LAB_ram_40087e9e:
          puStack_58 = puVar28;
          uVar38 = 0;
          puVar6[0xc] = 0;
          puVar6[0xd] = 0;
        }
        else {
          uStack_54 = uVar25 - 2;
          uVar22 = (uint)(ushort)*puStack_58;
          puVar28 = (uint *)((int)puStack_58 + 2);
          if (uStack_54 < 4) goto LAB_ram_40087e96;
          uStack_54 = uVar25 - 6;
          *(ulonglong *)(puVar6 + 10) =
               CONCAT44((uint *)((int)puStack_58 + 2),*(undefined4 *)((int)puStack_58 + 2));
          puVar28 = (uint *)((int)puStack_58 + 6);
          if (uStack_54 < 4) goto LAB_ram_40087e9a;
          uStack_54 = uVar25 - 10;
          *(ulonglong *)(puVar6 + 0xb) =
               CONCAT44((uint *)((int)puStack_58 + 6),*(undefined4 *)((int)puStack_58 + 6));
          puVar28 = (uint *)((int)puStack_58 + 10);
          if (uStack_54 < 4) goto LAB_ram_40087e9e;
          uStack_54 = uVar25 - 0xe;
          *(ulonglong *)(puVar6 + 0xc) =
               CONCAT44((uint *)((int)puStack_58 + 10),*(undefined4 *)((int)puStack_58 + 10));
          if (uStack_54 < 4) {
            uVar38 = 0;
            puStack_58 = (uint *)((int)puStack_58 + 0xe);
          }
          else {
            uVar38 = CONCAT44((uint *)((int)puStack_58 + 0xe),*(undefined4 *)((int)puStack_58 + 0xe)
                             );
            puStack_58 = (uint *)((int)puStack_58 + 0x12);
            uStack_54 = uVar25 - 0x12;
          }
        }
        *(undefined8 *)(puVar6 + 0xd) = uVar38;
        iVar32 = FUN_ram_40087240(&puStack_58,puVar6 + 0xe);
        if (iVar32 != 0) goto LAB_ram_400876fa;
        if (uVar22 != 0) {
          puVar8 = (undefined4 *)FUN_ram_40002f1a(1,uVar22 * 0x34);
          puVar6[0x10] = (uint)puVar8;
          if (puVar8 != (undefined4 *)0x0) {
            puVar6[0x11] = uVar22;
            iVar33 = 0x34;
            do {
              if (uStack_54 < 2) {
LAB_ram_40087e74:
                puVar8[1] = 0;
                *puVar8 = 0;
                if (uStack_54 < 2) goto LAB_ram_40087e82;
LAB_ram_40087cd0:
                uVar5 = uStack_54 - 2;
                uVar25 = *puStack_58;
                puStack_58 = (uint *)((int)puStack_58 + 2);
                uVar25 = (uint)(ushort)uVar25;
                uStack_54 = uVar5;
                if (uVar25 == 0) goto LAB_ram_40087e82;
                puVar28 = (uint *)FUN_ram_40002f1a(1,uVar25 * 0x14);
                if (puVar28 == (uint *)0x0) goto LAB_ram_40089c84;
                puVar7 = puVar28;
                do {
                  while (uVar5 == 0) {
                    *puVar7 = 0;
                    puVar7[1] = 0;
                    uVar21 = uVar5;
LAB_ram_40087e60:
                    puVar7[2] = 0;
                    puVar23 = puStack_58;
LAB_ram_40087e64:
                    puStack_58 = puVar23;
                    puVar7[3] = 0;
                    puVar23 = puStack_58;
LAB_ram_40087e68:
                    puStack_58 = puVar23;
                    puVar7[4] = 0;
                    puVar7 = puVar7 + 5;
                    uVar5 = uVar21;
                    if (puVar28 + uVar25 * 5 == puVar7) goto LAB_ram_40087e06;
                  }
                  uStack_54 = uVar5 - 1;
                  *puVar7 = (uint)(byte)*puStack_58;
                  if (uStack_54 < 4) {
                    puVar7[1] = 0;
                    uVar21 = uStack_54;
                    puStack_58 = (uint *)((int)puStack_58 + 1);
                    goto LAB_ram_40087e60;
                  }
                  uVar21 = uVar5 - 5;
                  *(ulonglong *)(puVar7 + 1) =
                       CONCAT44((uint *)((int)puStack_58 + 1),*(undefined4 *)((int)puStack_58 + 1));
                  if (uVar21 < 4) {
                    puVar7[2] = 0;
                    puVar23 = (uint *)((int)puStack_58 + 5);
                    uStack_54 = uVar21;
                    goto LAB_ram_40087e64;
                  }
                  uVar21 = uVar5 - 9;
                  *(ulonglong *)(puVar7 + 2) =
                       CONCAT44((uint *)((int)puStack_58 + 5),*(undefined4 *)((int)puStack_58 + 5));
                  puVar23 = (uint *)((int)puStack_58 + 9);
                  uStack_54 = uVar21;
                  if (uVar21 < 4) goto LAB_ram_40087e64;
                  puVar23 = (uint *)((int)puStack_58 + 0xd);
                  uVar21 = uVar5 - 0xd;
                  *(ulonglong *)(puVar7 + 3) =
                       CONCAT44((uint *)((int)puStack_58 + 9),*(undefined4 *)((int)puStack_58 + 9));
                  uStack_54 = uVar21;
                  if (uVar21 < 4) goto LAB_ram_40087e68;
                  pbVar1 = (byte *)((int)puStack_58 + 0xd);
                  puStack_58 = (uint *)((int)puStack_58 + 0x11);
                  uVar5 = uVar5 - 0x11;
                  *(ulonglong *)(puVar7 + 4) = CONCAT44(puVar23,*(undefined4 *)pbVar1);
                  puVar7 = puVar7 + 5;
                  uStack_54 = uVar5;
                } while (puVar7 != puVar28 + uVar25 * 5);
LAB_ram_40087e06:
                puVar8[2] = puVar28;
                puVar8[3] = uVar25;
              }
              else {
                uVar5 = uStack_54 - 2;
                uVar25 = *puStack_58;
                puStack_58 = (uint *)((int)puStack_58 + 2);
                uVar25 = (uint)(ushort)uVar25;
                uStack_54 = uVar5;
                if (uVar25 == 0) goto LAB_ram_40087e74;
                puVar28 = (uint *)FUN_ram_40002f1a(1,uVar25 * 0x14);
                if (puVar28 == (uint *)0x0) goto LAB_ram_40089c84;
                puVar7 = puVar28;
                do {
                  while (uVar5 == 0) {
                    *puVar7 = 0;
                    puVar7[1] = 0;
                    uVar21 = uVar5;
LAB_ram_40087e3c:
                    puVar7[2] = 0;
                    puVar23 = puStack_58;
LAB_ram_40087e40:
                    puStack_58 = puVar23;
                    puVar7[3] = 0;
                    puVar23 = puStack_58;
LAB_ram_40087e44:
                    puStack_58 = puVar23;
                    puVar7[4] = 0;
                    puVar7 = puVar7 + 5;
                    uVar5 = uVar21;
                    if (puVar28 + uVar25 * 5 == puVar7) goto LAB_ram_40087cc2;
                  }
                  uStack_54 = uVar5 - 1;
                  *puVar7 = (uint)(byte)*puStack_58;
                  if (uStack_54 < 4) {
                    puVar7[1] = 0;
                    uVar21 = uStack_54;
                    puStack_58 = (uint *)((int)puStack_58 + 1);
                    goto LAB_ram_40087e3c;
                  }
                  uVar21 = uVar5 - 5;
                  *(ulonglong *)(puVar7 + 1) =
                       CONCAT44((uint *)((int)puStack_58 + 1),*(undefined4 *)((int)puStack_58 + 1));
                  if (uVar21 < 4) {
                    puVar7[2] = 0;
                    puVar23 = (uint *)((int)puStack_58 + 5);
                    uStack_54 = uVar21;
                    goto LAB_ram_40087e40;
                  }
                  uVar21 = uVar5 - 9;
                  *(ulonglong *)(puVar7 + 2) =
                       CONCAT44((uint *)((int)puStack_58 + 5),*(undefined4 *)((int)puStack_58 + 5));
                  puVar23 = (uint *)((int)puStack_58 + 9);
                  uStack_54 = uVar21;
                  if (uVar21 < 4) goto LAB_ram_40087e40;
                  puVar23 = (uint *)((int)puStack_58 + 0xd);
                  uVar21 = uVar5 - 0xd;
                  *(ulonglong *)(puVar7 + 3) =
                       CONCAT44((uint *)((int)puStack_58 + 9),*(undefined4 *)((int)puStack_58 + 9));
                  uStack_54 = uVar21;
                  if (uVar21 < 4) goto LAB_ram_40087e44;
                  pbVar1 = (byte *)((int)puStack_58 + 0xd);
                  puStack_58 = (uint *)((int)puStack_58 + 0x11);
                  uVar5 = uVar5 - 0x11;
                  *(ulonglong *)(puVar7 + 4) = CONCAT44(puVar23,*(undefined4 *)pbVar1);
                  puVar7 = puVar7 + 5;
                  uStack_54 = uVar5;
                } while (puVar7 != puVar28 + uVar25 * 5);
LAB_ram_40087cc2:
                puVar8[1] = uVar25;
                *puVar8 = puVar28;
                if (1 < uStack_54) goto LAB_ram_40087cd0;
LAB_ram_40087e82:
                puVar8[2] = 0;
                puVar8[3] = 0;
              }
              iVar32 = FUN_ram_40086250(&puStack_58,puVar8 + 4);
              if (iVar32 != 0) goto LAB_ram_400876fa;
              if (uVar22 * 0x34 == iVar33) goto LAB_ram_40087ea6;
              puVar8 = (undefined4 *)(puVar6[0x10] + iVar33);
              iVar33 = iVar33 + 0x34;
            } while (puVar8 != (undefined4 *)0x0);
            iVar32 = -1;
            goto LAB_ram_400876fa;
          }
LAB_ram_40089c84:
          iVar32 = -3;
          goto LAB_ram_400876fa;
        }
LAB_ram_40087ea6:
        if (uStack_54 < 2) {
LAB_ram_40088974:
          puVar6[0x12] = 0;
          puVar6[0x13] = 0;
          iVar32 = FUN_ram_40087240(&puStack_58,puVar6 + 0x14);
        }
        else {
          uVar22 = uStack_54 - 2;
          uVar25 = *puStack_58;
          puStack_58 = (uint *)((int)puStack_58 + 2);
          uVar25 = (uint)(ushort)uVar25;
          uStack_54 = uVar22;
          if (uVar25 == 0) goto LAB_ram_40088974;
          puVar28 = (uint *)FUN_ram_40002f1a(1,uVar25 * 0x14);
          if (puVar28 == (uint *)0x0) goto LAB_ram_40089c84;
          puVar7 = puVar28;
          do {
            while (uVar22 == 0) {
              *puVar7 = 0;
              puVar7[1] = 0;
              uVar5 = uVar22;
LAB_ram_400888d6:
              puVar7[2] = 0;
              puVar23 = puStack_58;
LAB_ram_400888da:
              puStack_58 = puVar23;
              puVar7[3] = 0;
              puVar23 = puStack_58;
LAB_ram_400888de:
              puStack_58 = puVar23;
              puVar7[4] = 0;
              puVar7 = puVar7 + 5;
              uVar22 = uVar5;
              if (puVar28 + uVar25 * 5 == puVar7) goto LAB_ram_40087fe6;
            }
            uStack_54 = uVar22 - 1;
            *puVar7 = (uint)(byte)*puStack_58;
            if (uStack_54 < 4) {
              puVar7[1] = 0;
              uVar5 = uStack_54;
              puStack_58 = (uint *)((int)puStack_58 + 1);
              goto LAB_ram_400888d6;
            }
            uVar5 = uVar22 - 5;
            *(ulonglong *)(puVar7 + 1) =
                 CONCAT44((uint *)((int)puStack_58 + 1),*(undefined4 *)((int)puStack_58 + 1));
            if (uVar5 < 4) {
              puVar7[2] = 0;
              puVar23 = (uint *)((int)puStack_58 + 5);
              uStack_54 = uVar5;
              goto LAB_ram_400888da;
            }
            uVar5 = uVar22 - 9;
            *(ulonglong *)(puVar7 + 2) =
                 CONCAT44((uint *)((int)puStack_58 + 5),*(undefined4 *)((int)puStack_58 + 5));
            puVar23 = (uint *)((int)puStack_58 + 9);
            uStack_54 = uVar5;
            if (uVar5 < 4) goto LAB_ram_400888da;
            puVar23 = (uint *)((int)puStack_58 + 0xd);
            uVar5 = uVar22 - 0xd;
            *(ulonglong *)(puVar7 + 3) =
                 CONCAT44((uint *)((int)puStack_58 + 9),*(undefined4 *)((int)puStack_58 + 9));
            uStack_54 = uVar5;
            if (uVar5 < 4) goto LAB_ram_400888de;
            pbVar1 = (byte *)((int)puStack_58 + 0xd);
            puStack_58 = (uint *)((int)puStack_58 + 0x11);
            uVar22 = uVar22 - 0x11;
            *(ulonglong *)(puVar7 + 4) = CONCAT44(puVar23,*(undefined4 *)pbVar1);
            puVar7 = puVar7 + 5;
            uStack_54 = uVar22;
          } while (puVar28 + uVar25 * 5 != puVar7);
LAB_ram_40087fe6:
          puVar6[0x12] = (uint)puVar28;
          puVar6[0x13] = uVar25;
          iVar32 = FUN_ram_40087240(&puStack_58,puVar6 + 0x14);
        }
        if (iVar32 != 0) goto LAB_ram_400876fa;
        if (uStack_54 < 4) {
          uVar38 = 0;
          puVar6[0x16] = 0;
          puVar6[0x17] = 0;
        }
        else {
          *(ulonglong *)(puVar6 + 0x16) = CONCAT44(puStack_58,*puStack_58);
          if (uStack_54 - 4 < 4) {
            uVar38 = 0;
            puStack_58 = puStack_58 + 1;
            uStack_54 = uStack_54 - 4;
          }
          else {
            uVar38 = CONCAT44(puStack_58 + 1,puStack_58[1]);
            puStack_58 = puStack_58 + 2;
            uStack_54 = uStack_54 - 8;
          }
        }
        *(undefined8 *)(puVar6 + 0x17) = uVar38;
        uVar22 = DAT_ram_4009a20c;
        uVar25 = DAT_ram_40094604;
        if (uVar2 == 3) {
          if (uStack_54 == 0) {
            puVar6[0x18] = 0;
            puVar28 = puStack_58;
            uVar25 = uStack_54;
LAB_ram_40089c6e:
            uStack_54 = uVar25;
            puStack_58 = puVar28;
            puVar6[0x19] = 0;
            puVar28 = puStack_58;
            uVar25 = uStack_54;
LAB_ram_40089c72:
            uStack_54 = uVar25;
            puStack_58 = puVar28;
            puVar6[0x1a] = 0;
            puVar28 = puStack_58;
            uVar25 = uStack_54;
LAB_ram_40089c76:
            uStack_54 = uVar25;
            puStack_58 = puVar28;
            uVar38 = 0;
            puVar6[0x1b] = 0;
            puVar6[0x1c] = 0;
          }
          else {
            puVar6[0x18] = (uint)(byte)*puStack_58;
            puVar28 = (uint *)((int)puStack_58 + 1);
            uVar25 = uStack_54 - 1;
            if (uStack_54 - 1 < 4) goto LAB_ram_40089c6e;
            *(ulonglong *)(puVar6 + 0x19) =
                 CONCAT44((uint *)((int)puStack_58 + 1),*(undefined4 *)((int)puStack_58 + 1));
            puVar28 = (uint *)((int)puStack_58 + 5);
            uVar25 = uStack_54 - 5;
            if (uStack_54 - 5 < 4) goto LAB_ram_40089c72;
            *(ulonglong *)(puVar6 + 0x1a) =
                 CONCAT44((uint *)((int)puStack_58 + 5),*(undefined4 *)((int)puStack_58 + 5));
            puVar28 = (uint *)((int)puStack_58 + 9);
            uVar25 = uStack_54 - 9;
            if (uStack_54 - 9 < 4) goto LAB_ram_40089c76;
            *(ulonglong *)(puVar6 + 0x1b) =
                 CONCAT44((uint *)((int)puStack_58 + 9),*(undefined4 *)((int)puStack_58 + 9));
            if (uStack_54 - 0xd < 4) {
              uVar38 = 0;
              puStack_58 = (uint *)((int)puStack_58 + 0xd);
              uStack_54 = uStack_54 - 0xd;
            }
            else {
              uVar38 = CONCAT44((uint *)((int)puStack_58 + 0xd),
                                *(undefined4 *)((int)puStack_58 + 0xd));
              puStack_58 = (uint *)((int)puStack_58 + 0x11);
              uStack_54 = uStack_54 - 0x11;
            }
          }
          *(undefined8 *)(puVar6 + 0x1c) = uVar38;
          iVar32 = FUN_ram_40086132(&puStack_58,puVar6 + 0x1d);
          if (iVar32 != 0) goto LAB_ram_400876fa;
          uVar25 = 0;
          if (3 < uStack_54) {
            uStack_54 = uStack_54 - 4;
            uVar25 = *puStack_58;
            puStack_58 = puStack_58 + 1;
          }
          puVar6[0x22] = uVar25;
        }
        else {
          uVar37 = (ulonglong)DAT_ram_4009b380;
          uVar40 = (ulonglong)DAT_ram_4009b384;
          uVar39 = (ulonglong)DAT_ram_40094604;
          puVar6[0x18] = 0;
          *(ulonglong *)(puVar6 + 0x19) = uVar37;
          *(ulonglong *)(puVar6 + 0x1a) = uVar40;
          puVar6[0x1b] = 0;
          *(ulonglong *)(puVar6 + 0x1c) = uVar39;
          puVar6[0x1d] = 1;
          *(ulonglong *)(puVar6 + 0x1e) = uVar37;
          *(ulonglong *)(puVar6 + 0x1f) = uVar40;
          puVar6[0x20] = 0;
          puVar6[0x21] = uVar25;
          puVar6[0x22] = uVar22;
        }
        if (uStack_54 == 0) {
          puVar6[0x23] = 0;
          puVar28 = puStack_58;
          uVar25 = uStack_54;
LAB_ram_400889ac:
          uStack_54 = uVar25;
          puStack_58 = puVar28;
          puVar6[0x24] = 0;
          puVar28 = puStack_58;
          uVar25 = uStack_54;
LAB_ram_400889b0:
          uStack_54 = uVar25;
          puStack_58 = puVar28;
          puVar6[0x25] = 0;
          puVar28 = puStack_58;
          uVar25 = uStack_54;
LAB_ram_400889b4:
          uStack_54 = uVar25;
          puStack_58 = puVar28;
          uVar25 = 0;
          puVar6[0x26] = 0;
        }
        else {
          puVar6[0x23] = (uint)(byte)*puStack_58;
          puVar28 = (uint *)((int)puStack_58 + 1);
          uVar25 = uStack_54 - 1;
          if (uStack_54 - 1 < 4) goto LAB_ram_400889ac;
          puVar6[0x24] = *(uint *)((int)puStack_58 + 1);
          puVar28 = (uint *)((int)puStack_58 + 5);
          uVar25 = uStack_54 - 5;
          if (uStack_54 - 5 < 4) goto LAB_ram_400889b0;
          puVar6[0x25] = *(uint *)((int)puStack_58 + 5);
          puVar28 = (uint *)((int)puStack_58 + 9);
          uVar25 = uStack_54 - 9;
          if (uStack_54 - 9 < 4) goto LAB_ram_400889b4;
          puVar6[0x26] = *(uint *)((int)puStack_58 + 9);
          if (uStack_54 - 0xd < 4) {
            uVar25 = 0;
            puStack_58 = (uint *)((int)puStack_58 + 0xd);
            uStack_54 = uStack_54 - 0xd;
          }
          else {
            uVar25 = *(uint *)((int)puStack_58 + 0xd);
            puStack_58 = (uint *)((int)puStack_58 + 0x11);
            uStack_54 = uStack_54 - 0x11;
          }
        }
        puVar6[0x27] = uVar25;
        iVar32 = FUN_ram_40087240(&puStack_58,puVar6 + 0x28);
        if (iVar32 != 0) goto LAB_ram_400876fa;
        iVar32 = FUN_ram_400865fc(&puStack_58,puVar6 + 0x2a);
        if (iVar32 != 0) goto LAB_ram_400876fa;
        iVar32 = FUN_ram_400865fc(&puStack_58,puVar6 + 0x37);
        if (iVar32 != 0) goto LAB_ram_400876fa;
        uVar25 = FUN_ram_4008593e(&puStack_58);
        puVar6[0x44] = uVar25;
        uVar25 = FUN_ram_4008593e(&puStack_58);
        puVar6[0x45] = uVar25;
        uVar25 = FUN_ram_4008593e(&puStack_58);
        puVar6[0x46] = uVar25;
        iVar32 = FUN_ram_40086250(&puStack_58,puVar6 + 0x47);
        if (((iVar32 != 0) || (iVar32 = FUN_ram_40086132(&puStack_58,puVar6 + 0x50), iVar32 != 0))
           || (iVar32 = FUN_ram_40086132(&puStack_58,puVar6 + 0x55), iVar32 != 0))
        goto LAB_ram_400876fa;
        uVar25 = FUN_ram_4008593e(&puStack_58);
        puVar6[0x5a] = uVar25;
        puVar9 = (ulonglong *)FUN_ram_40002f1a(1,0x71c);
        if (puVar9 == (ulonglong *)0x0) goto LAB_ram_40089c84;
        iVar32 = *(int *)((int)puVar9 + 4);
        fVar4 = (float)*puVar6;
        *puVar9 = (ulonglong)(uint)fVar4;
        if (iVar32 != 0) {
          uVar25 = (uint)puVar9[1];
          iVar33 = 0;
          uVar22 = 0;
          if (uVar25 != 0) {
            do {
              puVar8 = (undefined4 *)(iVar32 + iVar33);
              if (puVar8 != (undefined4 *)0x0) {
                if (*(int *)(iVar32 + iVar33) != 0) {
                  FUN_ram_40002f3a();
                  *puVar8 = 0;
                }
                puVar8[1] = 0;
                if (puVar8[2] != 0) {
                  FUN_ram_40002f3a();
                  puVar8[2] = 0;
                }
                puVar8[3] = 0;
                if (puVar8[5] != 0) {
                  FUN_ram_40002f3a();
                  puVar8[5] = 0;
                }
                if (puVar8[6] != 0) {
                  FUN_ram_40002f3a();
                  puVar8[6] = 0;
                }
                if (puVar8[7] != 0) {
                  FUN_ram_40002f3a();
                  puVar8[7] = 0;
                }
                if (puVar8[8] != 0) {
                  FUN_ram_40002f3a();
                  puVar8[8] = 0;
                }
                if (puVar8[0xc] != 0) {
                  FUN_ram_40002f3a();
                  puVar8[0xc] = 0;
                }
                if (puVar8[0xd] != 0) {
                  FUN_ram_40002f3a();
                  puVar8[0xd] = 0;
                }
                if (puVar8[0xe] != 0) {
                  FUN_ram_40002f3a();
                  puVar8[0xe] = 0;
                }
                uVar25 = (uint)puVar9[1];
                iVar32 = *(int *)((int)puVar9 + 4);
                puVar8[4] = 0;
                puVar8[9] = 0;
                puVar8[10] = 0;
                puVar8[0xb] = 0;
              }
              uVar22 = uVar22 + 1;
              iVar33 = iVar33 + 0x3c;
            } while (uVar22 < uVar25);
            if (iVar32 == 0) goto LAB_ram_40088312;
          }
          FUN_ram_40002f3a();
          *(undefined4 *)((int)puVar9 + 4) = 0;
        }
LAB_ram_40088312:
        *(undefined4 *)(puVar9 + 1) = 0;
        if (*(int *)((int)puVar9 + 0x14) != 0) {
          FUN_ram_40002f3a();
        }
        *(undefined4 *)((int)puVar9 + 0x14) = 0;
        *(undefined4 *)(puVar9 + 3) = 0;
        if (*(int *)((int)puVar9 + 0x1c) != 0) {
          FUN_ram_40002f3a();
        }
        *(undefined4 *)((int)puVar9 + 0x1c) = 0;
        *(undefined4 *)(puVar9 + 4) = 0;
        *(undefined4 *)((int)puVar9 + 0xc) = 0;
        *(undefined4 *)(puVar9 + 2) = 0;
        if (*(int *)((int)puVar9 + 0x24) != 0) {
          FUN_ram_40002f3a();
          *(undefined4 *)((int)puVar9 + 0x24) = 0;
        }
        *(undefined4 *)(puVar9 + 5) = 0;
        if (*(int *)((int)puVar9 + 0x2c) != 0) {
          FUN_ram_40002f3a();
          *(undefined4 *)((int)puVar9 + 0x2c) = 0;
        }
        if ((int)puVar9[6] != 0) {
          FUN_ram_40002f3a();
          *(undefined4 *)(puVar9 + 6) = 0;
        }
        uVar25 = puVar6[0x11];
        *(undefined2 *)((int)puVar9 + 0x44) = 0;
        *(undefined4 *)(puVar9 + 9) = 0;
        *(undefined4 *)((int)puVar9 + 0x4c) = 0;
        if (uVar25 == 0) {
LAB_ram_40088aea:
          uVar37 = *puVar9;
          if ((int)puVar9[10] != 0) {
            FUN_ram_40002f3a();
            *(undefined4 *)(puVar9 + 10) = 0;
          }
          *(undefined4 *)((int)puVar9 + 0x54) = 0;
          if ((int)puVar9[0xc] != 0) {
            FUN_ram_40002f3a();
          }
          *(undefined4 *)(puVar9 + 0xc) = 0;
          *(undefined4 *)((int)puVar9 + 100) = 0;
          if ((int)puVar9[0xd] != 0) {
            FUN_ram_40002f3a();
          }
          *(undefined4 *)(puVar9 + 0xd) = 0;
          *(undefined4 *)((int)puVar9 + 0x6c) = 0;
          *(undefined4 *)(puVar9 + 0xb) = 0;
          *(undefined4 *)((int)puVar9 + 0x5c) = 0;
          if ((int)puVar9[0xe] != 0) {
            FUN_ram_40002f3a();
            *(undefined4 *)(puVar9 + 0xe) = 0;
          }
          uVar25 = puVar6[0x13];
          *(undefined4 *)((int)puVar9 + 0x74) = 0;
          *(undefined1 *)(puVar9 + 0x10) = 0;
          *(undefined4 *)((int)puVar9 + 0x8c) = 0;
          *(undefined4 *)(puVar9 + 0x11) = 0;
          *(undefined4 *)((int)puVar9 + 0x84) = 0;
          if (uVar25 == 0) {
            if ((int)puVar9[10] != 0) {
              FUN_ram_40002f3a();
              *(undefined4 *)(puVar9 + 10) = 0;
            }
            *(undefined4 *)((int)puVar9 + 0x54) = 0;
LAB_ram_40088be0:
            uVar25 = puVar6[0x15];
            *(uint *)(puVar9 + 0xb) = puVar6[0x14];
            *(uint *)((int)puVar9 + 0x5c) = uVar25;
            if ((int)puVar9[0xc] != 0) {
              FUN_ram_40002f3a();
              *(undefined4 *)(puVar9 + 0xc) = 0;
            }
            if ((int)puVar9[0xd] != 0) {
              FUN_ram_40002f3a();
              *(undefined4 *)(puVar9 + 0xd) = 0;
            }
            uVar25 = puVar6[0x15];
            *(undefined4 *)((int)puVar9 + 100) = 0;
            *(undefined4 *)((int)puVar9 + 0x6c) = 0;
            if (uVar25 != 0) {
              piVar29 = (int *)puVar6[0x14];
              piVar10 = piVar29 + uVar25 * 7;
              uVar25 = 3;
              do {
                if (*piVar29 == 0) {
                  uVar22 = (uint)*(ushort *)((int)piVar29 + 10);
                  if ((uint)*(ushort *)((int)piVar29 + 10) < (uint)*(ushort *)(piVar29 + 2)) {
                    uVar22 = (uint)*(ushort *)(piVar29 + 2);
                  }
                  if (uVar25 < uVar22) {
                    uVar25 = uVar22;
                  }
                }
                piVar29 = piVar29 + 7;
              } while (piVar10 != piVar29);
              iVar32 = FUN_ram_40002f1a(1,uVar25 << 2);
              *(int *)(puVar9 + 0xc) = iVar32;
              iVar33 = FUN_ram_40002f1a(1,uVar25 << 2);
              *(int *)(puVar9 + 0xd) = iVar33;
              if ((iVar32 == 0) || (iVar33 == 0)) {
                *(undefined4 *)(puVar9 + 0xc) = 0;
                *(undefined4 *)(puVar9 + 0xd) = 0;
                if ((int)puVar9[10] == 0) {
                  *(undefined4 *)((int)puVar9 + 0x54) = 0;
                }
                else {
                  FUN_ram_40002f3a();
                  *(undefined4 *)(puVar9 + 10) = 0;
                  *(undefined4 *)((int)puVar9 + 0x54) = 0;
                  if ((int)puVar9[0xc] != 0) {
                    FUN_ram_40002f3a();
                  }
                }
                *(undefined4 *)(puVar9 + 0xc) = 0;
                *(undefined4 *)((int)puVar9 + 100) = 0;
                if ((int)puVar9[0xd] != 0) {
                  FUN_ram_40002f3a();
                }
                *(undefined4 *)(puVar9 + 0xd) = 0;
                *(undefined4 *)((int)puVar9 + 0x6c) = 0;
                *(undefined4 *)(puVar9 + 0xb) = 0;
                *(undefined4 *)((int)puVar9 + 0x5c) = 0;
                if ((int)puVar9[0xe] != 0) {
                  FUN_ram_40002f3a();
                  *(undefined4 *)(puVar9 + 0xe) = 0;
                }
                *(undefined4 *)((int)puVar9 + 0x74) = 0;
                *(undefined1 *)(puVar9 + 0x10) = 0;
                *(undefined4 *)((int)puVar9 + 0x8c) = 0;
                *(undefined4 *)(puVar9 + 0x11) = 0;
                *(undefined4 *)((int)puVar9 + 0x84) = 0;
                goto LAB_ram_40089736;
              }
              *(uint *)((int)puVar9 + 100) = uVar25;
              *(uint *)((int)puVar9 + 0x6c) = uVar25;
            }
            uVar38 = *(undefined8 *)(puVar6 + 0x17);
            uVar25 = puVar6[0x13];
            puVar9[0xf] = *(ulonglong *)(puVar6 + 0x16);
            *(undefined8 *)((int)puVar9 + 0x7c) = uVar38;
            *(uint *)((int)puVar9 + 0x74) = uVar25;
            if (uVar25 == 0) {
LAB_ram_40088c9a:
              uVar37 = *puVar9;
              uVar38 = *(undefined8 *)(puVar6 + 0x1a);
              uVar36 = *(undefined8 *)(puVar6 + 0x1b);
              uVar41 = *(undefined8 *)(puVar6 + 0x1c);
              uVar25 = puVar6[0x18];
              *(int *)((int)puVar9 + 0x94) = (int)*(undefined8 *)(puVar6 + 0x19);
              *(int *)(puVar9 + 0x13) = (int)uVar38;
              *(int *)((int)puVar9 + 0x9c) = (int)uVar36;
              *(int *)(puVar9 + 0x14) = (int)uVar41;
              *(uint *)(puVar9 + 0x12) = uVar25;
              *(int *)((int)puVar9 + 0xa4) = (int)uVar37;
              *(undefined1 *)(puVar9 + 0x10) = 0;
              FUN_ram_4008597e(puVar9 + 0x12);
              *(undefined4 *)((int)puVar9 + 0xdc) = 0;
              *(undefined4 *)(puVar9 + 0x1c) = 0;
              FUN_ram_4009372e((int)puVar9 + 0xbc,1,puVar9 + 0x19,(int)puVar9 + 0xdc);
              uVar22 = puVar6[0x1d];
              uVar38 = *(undefined8 *)(puVar6 + 0x1e);
              uVar36 = *(undefined8 *)(puVar6 + 0x1f);
              uVar25 = puVar6[0x20];
              *(uint *)((int)puVar9 + 0xf4) = puVar6[0x21];
              *(uint *)((int)puVar9 + 0xe4) = uVar22;
              *(int *)(puVar9 + 0x1d) = (int)uVar38;
              *(int *)((int)puVar9 + 0xec) = (int)uVar36;
              *(uint *)(puVar9 + 0x1e) = uVar25;
              *(int *)(puVar9 + 0x1f) = (int)uVar37;
              FUN_ram_4008597e((int)puVar9 + 0xe4);
              *(undefined4 *)(puVar9 + 0x26) = 0;
              *(undefined4 *)((int)puVar9 + 0x134) = 0;
              FUN_ram_4009372e(puVar9 + 0x22,1,(int)puVar9 + 0x11c,puVar9 + 0x26);
              uVar25 = puVar6[0x22];
              *(undefined1 *)((int)puVar9 + 0x13c) = 0;
              *(uint *)(puVar9 + 0x27) = uVar25;
              *(undefined4 *)(puVar9 + 0x28) = 0;
              uVar37 = *puVar9;
              if ((int)puVar9[0x34] != 0) {
                FUN_ram_40002f3a();
              }
              *(undefined4 *)(puVar9 + 0x34) = 0;
              *(undefined4 *)((int)puVar9 + 0x1a4) = 0;
              if ((int)puVar9[0x35] != 0) {
                FUN_ram_40002f3a();
              }
              *(undefined4 *)(puVar9 + 0x35) = 0;
              *(undefined4 *)((int)puVar9 + 0x1ac) = 0;
              *(undefined4 *)(puVar9 + 0x33) = 0;
              *(undefined4 *)((int)puVar9 + 0x19c) = 0;
              if ((int)puVar9[0x36] != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)(puVar9 + 0x36) = 0;
              }
              *(undefined4 *)((int)puVar9 + 0x1b4) = 0;
              if ((int)puVar9[0x37] != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)(puVar9 + 0x37) = 0;
              }
              *(undefined4 *)((int)puVar9 + 0x1bc) = 0;
              if (*(int *)((int)puVar9 + 0x1c4) != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)((int)puVar9 + 0x1c4) = 0;
              }
              if ((int)puVar9[0x39] != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)(puVar9 + 0x39) = 0;
              }
              if (*(int *)((int)puVar9 + 0x1cc) != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)((int)puVar9 + 0x1cc) = 0;
              }
              if ((int)puVar9[0x3a] != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)(puVar9 + 0x3a) = 0;
              }
              if ((int)puVar9[0x3c] != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)(puVar9 + 0x3c) = 0;
              }
              if (*(int *)((int)puVar9 + 0x1e4) != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)((int)puVar9 + 0x1e4) = 0;
              }
              if ((int)puVar9[0x3d] != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)(puVar9 + 0x3d) = 0;
              }
              *(undefined4 *)(puVar9 + 0x38) = 0;
              *(undefined4 *)((int)puVar9 + 0x1d4) = 0;
              *(undefined4 *)(puVar9 + 0x3b) = 0;
              *(undefined4 *)((int)puVar9 + 0x1dc) = 0;
              if (*(int *)((int)puVar9 + 0x1ec) != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)((int)puVar9 + 0x1ec) = 0;
              }
              *(undefined4 *)(puVar9 + 0x3e) = 0;
              if (*(int *)((int)puVar9 + 500) != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)((int)puVar9 + 500) = 0;
              }
              *(undefined4 *)(puVar9 + 0x3f) = 0;
              if ((int)puVar9[0x40] != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)(puVar9 + 0x40) = 0;
              }
              if (*(int *)((int)puVar9 + 0x204) != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)((int)puVar9 + 0x204) = 0;
              }
              if ((int)puVar9[0x41] != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)(puVar9 + 0x41) = 0;
              }
              if (*(int *)((int)puVar9 + 0x20c) != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)((int)puVar9 + 0x20c) = 0;
              }
              if (*(int *)((int)puVar9 + 0x21c) != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)((int)puVar9 + 0x21c) = 0;
              }
              if ((int)puVar9[0x44] != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)(puVar9 + 0x44) = 0;
              }
              if (*(int *)((int)puVar9 + 0x224) != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)((int)puVar9 + 0x224) = 0;
              }
              *(undefined4 *)((int)puVar9 + 0x1fc) = 0;
              *(undefined4 *)(puVar9 + 0x42) = 0;
              *(undefined4 *)((int)puVar9 + 0x214) = 0;
              *(undefined4 *)(puVar9 + 0x43) = 0;
              if ((int)puVar9[0x45] != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)(puVar9 + 0x45) = 0;
              }
              uVar25 = puVar6[0x24];
              uVar22 = puVar6[0x25];
              uVar5 = puVar6[0x26];
              uVar21 = puVar6[0x27];
              *(uint *)((int)puVar9 + 0x144) = puVar6[0x23];
              *(uint *)(puVar9 + 0x29) = uVar25;
              *(uint *)((int)puVar9 + 0x14c) = uVar22;
              *(uint *)(puVar9 + 0x2a) = uVar5;
              *(uint *)((int)puVar9 + 0x154) = uVar21;
              *(undefined4 *)((int)puVar9 + 0x22c) = 0;
              *(undefined1 *)((int)puVar9 + 0x23c) = 0;
              *(undefined4 *)(puVar9 + 0x48) = 0;
              *(int *)(puVar9 + 0x2b) = (int)uVar37;
              FUN_ram_4008597e((int)puVar9 + 0x144);
              *(undefined4 *)(puVar9 + 0x32) = 0;
              *(undefined4 *)((int)puVar9 + 0x194) = 0;
              FUN_ram_4009372e(puVar9 + 0x2e,1,(int)puVar9 + 0x17c,puVar9 + 0x32);
              uVar25 = puVar6[0x29];
              *(uint *)(puVar9 + 0x33) = puVar6[0x28];
              *(uint *)((int)puVar9 + 0x19c) = uVar25;
              if ((int)puVar9[0x34] != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)(puVar9 + 0x34) = 0;
              }
              if ((int)puVar9[0x35] != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)(puVar9 + 0x35) = 0;
              }
              uVar25 = puVar6[0x29];
              *(undefined4 *)((int)puVar9 + 0x1a4) = 0;
              *(undefined4 *)((int)puVar9 + 0x1ac) = 0;
              if (uVar25 != 0) {
                piVar29 = (int *)puVar6[0x28];
                piVar10 = piVar29 + uVar25 * 7;
                uVar25 = 1;
                do {
                  if (*piVar29 == 0) {
                    uVar22 = (uint)*(ushort *)((int)piVar29 + 10);
                    if ((uint)*(ushort *)((int)piVar29 + 10) < (uint)*(ushort *)(piVar29 + 2)) {
                      uVar22 = (uint)*(ushort *)(piVar29 + 2);
                    }
                    if (uVar25 < uVar22) {
                      uVar25 = uVar22;
                    }
                  }
                  piVar29 = piVar29 + 7;
                } while (piVar10 != piVar29);
                iVar32 = FUN_ram_40002f1a(1,uVar25 << 2);
                *(int *)(puVar9 + 0x34) = iVar32;
                iVar33 = FUN_ram_40002f1a(1,uVar25 << 2);
                *(int *)(puVar9 + 0x35) = iVar33;
                if ((iVar32 == 0) || (iVar33 == 0)) {
                  *(undefined4 *)(puVar9 + 0x34) = 0;
                  *(undefined4 *)(puVar9 + 0x35) = 0;
                  *(undefined4 *)(puVar9 + 0x33) = 0;
                  *(undefined4 *)((int)puVar9 + 0x19c) = 0;
                  if ((int)puVar9[0x36] != 0) {
                    FUN_ram_40002f3a();
                    *(undefined4 *)(puVar9 + 0x36) = 0;
                  }
                  *(undefined4 *)((int)puVar9 + 0x1b4) = 0;
                  if ((int)puVar9[0x37] != 0) {
                    FUN_ram_40002f3a();
                    *(undefined4 *)(puVar9 + 0x37) = 0;
                  }
                  *(undefined4 *)((int)puVar9 + 0x1bc) = 0;
                  if (*(int *)((int)puVar9 + 0x1c4) != 0) {
                    FUN_ram_40002f3a();
                    *(undefined4 *)((int)puVar9 + 0x1c4) = 0;
                  }
                  if ((int)puVar9[0x39] != 0) {
                    FUN_ram_40002f3a();
                    *(undefined4 *)(puVar9 + 0x39) = 0;
                  }
                  if (*(int *)((int)puVar9 + 0x1cc) != 0) {
                    FUN_ram_40002f3a();
                    *(undefined4 *)((int)puVar9 + 0x1cc) = 0;
                  }
                  if ((int)puVar9[0x3a] != 0) {
                    FUN_ram_40002f3a();
                    *(undefined4 *)(puVar9 + 0x3a) = 0;
                  }
                  if ((int)puVar9[0x3c] != 0) {
                    FUN_ram_40002f3a();
                    *(undefined4 *)(puVar9 + 0x3c) = 0;
                  }
                  if (*(int *)((int)puVar9 + 0x1e4) != 0) {
                    FUN_ram_40002f3a();
                    *(undefined4 *)((int)puVar9 + 0x1e4) = 0;
                  }
                  if ((int)puVar9[0x3d] != 0) {
                    FUN_ram_40002f3a();
                    *(undefined4 *)(puVar9 + 0x3d) = 0;
                  }
                  *(undefined4 *)(puVar9 + 0x38) = 0;
                  *(undefined4 *)((int)puVar9 + 0x1d4) = 0;
                  *(undefined4 *)(puVar9 + 0x3b) = 0;
                  *(undefined4 *)((int)puVar9 + 0x1dc) = 0;
                  if (*(int *)((int)puVar9 + 0x1ec) != 0) {
                    FUN_ram_40002f3a();
                    *(undefined4 *)((int)puVar9 + 0x1ec) = 0;
                  }
                  *(undefined4 *)(puVar9 + 0x3e) = 0;
                  if (*(int *)((int)puVar9 + 500) != 0) {
                    FUN_ram_40002f3a();
                    *(undefined4 *)((int)puVar9 + 500) = 0;
                  }
                  *(undefined4 *)(puVar9 + 0x3f) = 0;
                  if ((int)puVar9[0x40] != 0) {
                    FUN_ram_40002f3a();
                    *(undefined4 *)(puVar9 + 0x40) = 0;
                  }
                  if (*(int *)((int)puVar9 + 0x204) != 0) {
                    FUN_ram_40002f3a();
                    *(undefined4 *)((int)puVar9 + 0x204) = 0;
                  }
                  if ((int)puVar9[0x41] != 0) {
                    FUN_ram_40002f3a();
                    *(undefined4 *)(puVar9 + 0x41) = 0;
                  }
                  if (*(int *)((int)puVar9 + 0x20c) != 0) {
                    FUN_ram_40002f3a();
                    *(undefined4 *)((int)puVar9 + 0x20c) = 0;
                  }
                  if (*(int *)((int)puVar9 + 0x21c) != 0) {
                    FUN_ram_40002f3a();
                    *(undefined4 *)((int)puVar9 + 0x21c) = 0;
                  }
                  if ((int)puVar9[0x44] != 0) {
                    FUN_ram_40002f3a();
                    *(undefined4 *)(puVar9 + 0x44) = 0;
                  }
                  if (*(int *)((int)puVar9 + 0x224) != 0) {
                    FUN_ram_40002f3a();
                    *(undefined4 *)((int)puVar9 + 0x224) = 0;
                  }
                  *(undefined4 *)((int)puVar9 + 0x1fc) = 0;
                  *(undefined4 *)(puVar9 + 0x42) = 0;
                  *(undefined4 *)((int)puVar9 + 0x214) = 0;
                  *(undefined4 *)(puVar9 + 0x43) = 0;
                  if ((int)puVar9[0x45] != 0) {
                    FUN_ram_40002f3a();
                    *(undefined4 *)(puVar9 + 0x45) = 0;
                  }
                  *(undefined4 *)((int)puVar9 + 0x22c) = 0;
                  *(undefined1 *)((int)puVar9 + 0x23c) = 0;
                  *(undefined4 *)(puVar9 + 0x48) = 0;
                  iVar32 = -3;
                  goto LAB_ram_400888be;
                }
                *(uint *)((int)puVar9 + 0x1a4) = uVar25;
                *(uint *)((int)puVar9 + 0x1ac) = uVar25;
              }
              uVar25 = puVar6[0x45];
              uVar22 = puVar6[0x46];
              *(uint *)(puVar9 + 0x46) = puVar6[0x44];
              *(uint *)((int)puVar9 + 0x234) = uVar25;
              *(uint *)(puVar9 + 0x47) = uVar22;
              iVar32 = FUN_ram_40086e74(uVar37 & 0xffffffff,puVar9 + 0x36,puVar6 + 0x2a);
              if ((iVar32 != 0) ||
                 (iVar32 = FUN_ram_40086e74(uVar37 & 0xffffffff,(int)puVar9 + 0x1ec,puVar6 + 0x37),
                 iVar32 != 0)) {
                if ((int)puVar9[0x34] != 0) {
                  FUN_ram_40002f3a();
                }
                *(undefined4 *)(puVar9 + 0x34) = 0;
                *(undefined4 *)((int)puVar9 + 0x1a4) = 0;
                if ((int)puVar9[0x35] != 0) {
                  FUN_ram_40002f3a();
                }
                *(undefined4 *)(puVar9 + 0x35) = 0;
                *(undefined4 *)((int)puVar9 + 0x1ac) = 0;
                *(undefined4 *)(puVar9 + 0x33) = 0;
                *(undefined4 *)((int)puVar9 + 0x19c) = 0;
                if ((int)puVar9[0x36] != 0) {
                  FUN_ram_40002f3a();
                  *(undefined4 *)(puVar9 + 0x36) = 0;
                }
                *(undefined4 *)((int)puVar9 + 0x1b4) = 0;
                if ((int)puVar9[0x37] != 0) {
                  FUN_ram_40002f3a();
                  *(undefined4 *)(puVar9 + 0x37) = 0;
                }
                *(undefined4 *)((int)puVar9 + 0x1bc) = 0;
                if (*(int *)((int)puVar9 + 0x1c4) != 0) {
                  FUN_ram_40002f3a();
                  *(undefined4 *)((int)puVar9 + 0x1c4) = 0;
                }
                if ((int)puVar9[0x39] != 0) {
                  FUN_ram_40002f3a();
                  *(undefined4 *)(puVar9 + 0x39) = 0;
                }
                if (*(int *)((int)puVar9 + 0x1cc) != 0) {
                  FUN_ram_40002f3a();
                  *(undefined4 *)((int)puVar9 + 0x1cc) = 0;
                }
                if ((int)puVar9[0x3a] != 0) {
                  FUN_ram_40002f3a();
                  *(undefined4 *)(puVar9 + 0x3a) = 0;
                }
                if ((int)puVar9[0x3c] != 0) {
                  FUN_ram_40002f3a();
                  *(undefined4 *)(puVar9 + 0x3c) = 0;
                }
                if (*(int *)((int)puVar9 + 0x1e4) != 0) {
                  FUN_ram_40002f3a();
                  *(undefined4 *)((int)puVar9 + 0x1e4) = 0;
                }
                if ((int)puVar9[0x3d] != 0) {
                  FUN_ram_40002f3a();
                  *(undefined4 *)(puVar9 + 0x3d) = 0;
                }
                *(undefined4 *)(puVar9 + 0x38) = 0;
                *(undefined4 *)((int)puVar9 + 0x1d4) = 0;
                *(undefined4 *)(puVar9 + 0x3b) = 0;
                *(undefined4 *)((int)puVar9 + 0x1dc) = 0;
                if (*(int *)((int)puVar9 + 0x1ec) != 0) {
                  FUN_ram_40002f3a();
                  *(undefined4 *)((int)puVar9 + 0x1ec) = 0;
                }
                *(undefined4 *)(puVar9 + 0x3e) = 0;
                if (*(int *)((int)puVar9 + 500) != 0) {
                  FUN_ram_40002f3a();
                  *(undefined4 *)((int)puVar9 + 500) = 0;
                }
                *(undefined4 *)(puVar9 + 0x3f) = 0;
                if ((int)puVar9[0x40] != 0) {
                  FUN_ram_40002f3a();
                  *(undefined4 *)(puVar9 + 0x40) = 0;
                }
                if (*(int *)((int)puVar9 + 0x204) != 0) {
                  FUN_ram_40002f3a();
                  *(undefined4 *)((int)puVar9 + 0x204) = 0;
                }
                if ((int)puVar9[0x41] != 0) {
                  FUN_ram_40002f3a();
                  *(undefined4 *)(puVar9 + 0x41) = 0;
                }
                if (*(int *)((int)puVar9 + 0x20c) != 0) {
                  FUN_ram_40002f3a();
                  *(undefined4 *)((int)puVar9 + 0x20c) = 0;
                }
                if (*(int *)((int)puVar9 + 0x21c) != 0) {
                  FUN_ram_40002f3a();
                  *(undefined4 *)((int)puVar9 + 0x21c) = 0;
                }
                if ((int)puVar9[0x44] != 0) {
                  FUN_ram_40002f3a();
                  *(undefined4 *)(puVar9 + 0x44) = 0;
                }
                if (*(int *)((int)puVar9 + 0x224) != 0) {
                  FUN_ram_40002f3a();
                  *(undefined4 *)((int)puVar9 + 0x224) = 0;
                }
                *(undefined4 *)((int)puVar9 + 0x1fc) = 0;
                *(undefined4 *)(puVar9 + 0x42) = 0;
                *(undefined4 *)((int)puVar9 + 0x214) = 0;
                *(undefined4 *)(puVar9 + 0x43) = 0;
                if ((int)puVar9[0x45] != 0) {
                  FUN_ram_40002f3a();
                  *(undefined4 *)(puVar9 + 0x45) = 0;
                }
                *(undefined4 *)((int)puVar9 + 0x22c) = 0;
                *(undefined1 *)((int)puVar9 + 0x23c) = 0;
                *(undefined4 *)(puVar9 + 0x48) = 0;
                goto LAB_ram_400888be;
              }
              *(undefined4 *)((int)puVar9 + 0x22c) = 1;
              iVar32 = FUN_ram_40002f1a(1,4);
              *(int *)(puVar9 + 0x45) = iVar32;
              if (iVar32 == 0) {
                FUN_ram_40086954((int)puVar9 + 0x144);
                goto LAB_ram_40089cb2;
              }
              *(undefined1 *)((int)puVar9 + 0x23c) = 0;
              *(undefined4 *)(puVar9 + 0x48) = 0;
              uVar37 = *puVar9;
              if ((int)puVar9[0xc9] != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)(puVar9 + 0xc9) = 0;
              }
              if (*(int *)((int)puVar9 + 0x64c) != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)((int)puVar9 + 0x64c) = 0;
              }
              if ((int)puVar9[0xca] != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)(puVar9 + 0xca) = 0;
              }
              if (*(int *)((int)puVar9 + 0x654) != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)((int)puVar9 + 0x654) = 0;
              }
              if (*(int *)((int)puVar9 + 0x664) != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)((int)puVar9 + 0x664) = 0;
              }
              if ((int)puVar9[0xcd] != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)(puVar9 + 0xcd) = 0;
              }
              if (*(int *)((int)puVar9 + 0x66c) != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)((int)puVar9 + 0x66c) = 0;
              }
              *(undefined4 *)((int)puVar9 + 0x644) = 0;
              *(undefined4 *)(puVar9 + 0xcb) = 0;
              *(undefined4 *)((int)puVar9 + 0x65c) = 0;
              *(undefined4 *)(puVar9 + 0xcc) = 0;
              if ((int)puVar9[0xc9] != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)(puVar9 + 0xc9) = 0;
              }
              if (*(int *)((int)puVar9 + 0x64c) != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)((int)puVar9 + 0x64c) = 0;
              }
              if ((int)puVar9[0xca] != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)(puVar9 + 0xca) = 0;
              }
              if (*(int *)((int)puVar9 + 0x654) != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)((int)puVar9 + 0x654) = 0;
              }
              if (*(int *)((int)puVar9 + 0x664) != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)((int)puVar9 + 0x664) = 0;
              }
              if ((int)puVar9[0xcd] != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)(puVar9 + 0xcd) = 0;
              }
              if (*(int *)((int)puVar9 + 0x66c) != 0) {
                FUN_ram_40002f3a();
                *(undefined4 *)((int)puVar9 + 0x66c) = 0;
              }
              uVar2 = *(ushort *)((int)puVar6 + 0x11e);
              uVar25 = (uint)uVar2;
              *(undefined4 *)((int)puVar9 + 0x644) = 0;
              *(undefined4 *)(puVar9 + 0xcb) = 0;
              *(undefined4 *)((int)puVar9 + 0x65c) = 0;
              *(undefined4 *)(puVar9 + 0xcc) = 0;
              if (uVar25 == 0) {
LAB_ram_4008921e:
                uVar25 = puVar6[0x52];
                uVar22 = puVar6[0x53];
                uVar5 = puVar6[0x54];
                uVar21 = puVar6[0x50];
                *(uint *)((int)puVar9 + 0x674) = puVar6[0x51];
                *(uint *)(puVar9 + 0xcf) = uVar25;
                *(uint *)((int)puVar9 + 0x67c) = uVar22;
                *(uint *)(puVar9 + 0xd0) = uVar5;
                *(uint *)(puVar9 + 0xce) = uVar21;
                *(int *)((int)puVar9 + 0x684) = (int)uVar37;
                FUN_ram_4008597e(puVar9 + 0xce);
                *(undefined4 *)((int)puVar9 + 0x6bc) = 0;
                *(undefined4 *)(puVar9 + 0xd8) = 0;
                FUN_ram_4009372e((int)puVar9 + 0x69c,1,puVar9 + 0xd5,(int)puVar9 + 0x6bc);
                uVar25 = puVar6[0x58];
                uVar22 = puVar6[0x59];
                uVar5 = puVar6[0x56];
                uVar21 = puVar6[0x57];
                *(uint *)((int)puVar9 + 0x6c4) = puVar6[0x55];
                *(uint *)(puVar9 + 0xda) = uVar25;
                *(uint *)((int)puVar9 + 0x6d4) = uVar22;
                *(uint *)(puVar9 + 0xd9) = uVar5;
                *(uint *)((int)puVar9 + 0x6cc) = uVar21;
                *(int *)(puVar9 + 0xdb) = (int)uVar37;
                FUN_ram_4008597e((int)puVar9 + 0x6c4);
                *(undefined4 *)(puVar9 + 0xe2) = 0;
                *(undefined4 *)((int)puVar9 + 0x714) = 0;
                FUN_ram_4009372e(puVar9 + 0xde,1,(int)puVar9 + 0x6fc,puVar9 + 0xe2);
                uVar31 = puVar6[1];
                uVar30 = puVar6[2];
                uVar25 = puVar6[3];
                uVar22 = puVar6[4];
                uVar5 = puVar6[5];
                uVar21 = puVar6[6];
                uVar26 = puVar6[7];
                uVar38 = *(undefined8 *)(puVar6 + 9);
                iVar32 = *(int *)((int)puVar9 + 4);
                *(uint *)(puVar9 + 0xe3) = puVar6[0x5a];
                *param_1 = (int)puVar6;
                param_1[1] = (int)puVar9;
                *(undefined1 *)(param_1 + 0x11) = 1;
                param_1[0x10] = (int)uVar38;
                param_1[9] = uVar31;
                param_1[10] = uVar30;
                param_1[0xb] = uVar25;
                param_1[0xc] = uVar22;
                param_1[0xd] = uVar5;
                param_1[0xe] = uVar21;
                param_1[0xf] = uVar26;
                param_1[2] = uVar31;
                param_1[3] = uVar30;
                param_1[4] = uVar25;
                param_1[5] = uVar22;
                param_1[6] = uVar5;
                param_1[7] = uVar21;
                param_1[8] = uVar26;
                if (iVar32 != 0) {
                  uVar25 = (uint)puVar9[1];
                  iVar33 = 0;
                  uVar22 = 0;
                  if (uVar25 != 0) {
                    do {
                      piVar10 = (int *)(iVar32 + iVar33);
                      if (piVar10 != (int *)0x0) {
                        iVar32 = *(int *)(iVar32 + iVar33);
                        if ((iVar32 != 0) && (uVar25 = piVar10[1], uVar25 != 0)) {
                          iVar19 = 0;
                          uVar5 = 0;
                          do {
                            iVar18 = iVar32 + iVar19;
                            while (iVar18 != 0) {
                              *(undefined4 *)(iVar18 + 0x4c) = 0;
                              *(undefined4 *)(iVar18 + 0x50) = 0;
                              FUN_ram_4009372e(iVar18 + 0x2c,1,iVar18 + 0x38,iVar18 + 0x4c);
                              uVar25 = piVar10[1];
                              uVar5 = uVar5 + 1;
                              iVar19 = iVar19 + 0x54;
                              if (uVar25 <= uVar5) goto LAB_ram_400893ac;
                              iVar32 = *piVar10;
                              iVar18 = iVar32 + iVar19;
                            }
                            uVar5 = uVar5 + 1;
                            iVar19 = iVar19 + 0x54;
                          } while (uVar5 < uVar25);
                        }
LAB_ram_400893ac:
                        iVar32 = piVar10[2];
                        if ((iVar32 != 0) && (uVar25 = piVar10[3], uVar25 != 0)) {
                          iVar19 = 0;
                          uVar5 = 0;
                          do {
                            iVar18 = iVar32 + iVar19;
                            while (iVar18 != 0) {
                              *(undefined4 *)(iVar18 + 0x4c) = 0;
                              *(undefined4 *)(iVar18 + 0x50) = 0;
                              FUN_ram_4009372e(iVar18 + 0x2c,1,iVar18 + 0x38,iVar18 + 0x4c);
                              uVar25 = piVar10[3];
                              uVar5 = uVar5 + 1;
                              iVar19 = iVar19 + 0x54;
                              if (uVar25 <= uVar5) goto LAB_ram_40089410;
                              iVar32 = piVar10[2];
                              iVar18 = iVar32 + iVar19;
                            }
                            uVar5 = uVar5 + 1;
                            iVar19 = iVar19 + 0x54;
                          } while (uVar5 < uVar25);
                        }
LAB_ram_40089410:
                        if (piVar10[0xc] != 0) {
                          memset(piVar10[0xc],0,
                                           (uint)*(ushort *)((int)piVar10 + 0x12) << 2);
                        }
                        uVar25 = (uint)puVar9[1];
                      }
                      uVar22 = uVar22 + 1;
                      iVar33 = iVar33 + 0x3c;
                      if (uVar25 <= uVar22) break;
                      iVar32 = *(int *)((int)puVar9 + 4);
                    } while( true );
                  }
                  *(undefined2 *)((int)puVar9 + 0x44) = 0;
                  *(undefined4 *)(puVar9 + 9) = 0;
                }
                iVar32 = (int)puVar9[10];
                if ((iVar32 != 0) && (uVar25 = *(uint *)((int)puVar9 + 0x54), uVar25 != 0)) {
                  iVar33 = 0;
                  uVar22 = 0;
                  do {
                    iVar19 = iVar32 + iVar33;
                    while (iVar19 != 0) {
                      *(undefined4 *)(iVar19 + 0x4c) = 0;
                      *(undefined4 *)(iVar19 + 0x50) = 0;
                      FUN_ram_4009372e(iVar19 + 0x2c,1,iVar19 + 0x38,iVar19 + 0x4c);
                      uVar25 = *(uint *)((int)puVar9 + 0x54);
                      uVar22 = uVar22 + 1;
                      iVar33 = iVar33 + 0x54;
                      if (uVar25 <= uVar22) goto LAB_ram_40089498;
                      iVar32 = (int)puVar9[10];
                      iVar19 = iVar32 + iVar33;
                    }
                    uVar22 = uVar22 + 1;
                    iVar33 = iVar33 + 0x54;
                  } while (uVar22 < uVar25);
                }
LAB_ram_40089498:
                *(undefined1 *)(puVar9 + 0x10) = 0;
                *(undefined4 *)((int)puVar9 + 0xdc) = 0;
                *(undefined4 *)(puVar9 + 0x1c) = 0;
                FUN_ram_4009372e((int)puVar9 + 0xbc,1,puVar9 + 0x19,(int)puVar9 + 0xdc);
                *(undefined4 *)(puVar9 + 0x26) = 0;
                *(undefined4 *)((int)puVar9 + 0x134) = 0;
                FUN_ram_4009372e(puVar9 + 0x22,1,(int)puVar9 + 0x11c,puVar9 + 0x26);
                *(undefined1 *)((int)puVar9 + 0x13c) = 0;
                *(undefined4 *)(puVar9 + 0x32) = 0;
                *(undefined4 *)((int)puVar9 + 0x194) = 0;
                FUN_ram_4009372e(puVar9 + 0x2e,1,(int)puVar9 + 0x17c,puVar9 + 0x32);
                iVar32 = (int)puVar9[0x36];
                if ((iVar32 != 0) && (uVar25 = *(uint *)((int)puVar9 + 0x1b4), uVar25 != 0)) {
                  iVar33 = 0;
                  uVar22 = 0;
                  do {
                    iVar19 = iVar32 + iVar33;
                    while (iVar19 != 0) {
                      *(undefined4 *)(iVar19 + 0x4c) = 0;
                      *(undefined4 *)(iVar19 + 0x50) = 0;
                      FUN_ram_4009372e(iVar19 + 0x2c,1,iVar19 + 0x38,iVar19 + 0x4c);
                      uVar25 = *(uint *)((int)puVar9 + 0x1b4);
                      uVar22 = uVar22 + 1;
                      iVar33 = iVar33 + 0x54;
                      if (uVar25 <= uVar22) goto LAB_ram_40089540;
                      iVar32 = (int)puVar9[0x36];
                      iVar19 = iVar32 + iVar33;
                    }
                    uVar22 = uVar22 + 1;
                    iVar33 = iVar33 + 0x54;
                  } while (uVar22 < uVar25);
                }
LAB_ram_40089540:
                iVar32 = (int)puVar9[0x37];
                if ((iVar32 != 0) && (uVar25 = *(uint *)((int)puVar9 + 0x1bc), uVar25 != 0)) {
                  iVar33 = 0;
                  uVar22 = 0;
                  do {
                    iVar19 = iVar32 + iVar33;
                    while (iVar19 != 0) {
                      *(undefined4 *)(iVar19 + 0x4c) = 0;
                      *(undefined4 *)(iVar19 + 0x50) = 0;
                      FUN_ram_4009372e(iVar19 + 0x2c,1,iVar19 + 0x38,iVar19 + 0x4c);
                      uVar25 = *(uint *)((int)puVar9 + 0x1bc);
                      uVar22 = uVar22 + 1;
                      iVar33 = iVar33 + 0x54;
                      if (uVar25 <= uVar22) goto LAB_ram_400895a2;
                      iVar32 = (int)puVar9[0x37];
                      iVar19 = iVar32 + iVar33;
                    }
                    uVar22 = uVar22 + 1;
                    iVar33 = iVar33 + 0x54;
                  } while (uVar22 < uVar25);
                }
LAB_ram_400895a2:
                if ((int)puVar9[0x3c] != 0) {
                  memset((int)puVar9[0x3c],0,(uint)*(ushort *)((int)puVar9 + 0x1c2) << 2);
                }
                iVar32 = *(int *)((int)puVar9 + 0x1ec);
                if (iVar32 != 0) {
                  uVar22 = (uint)puVar9[0x3e];
                  iVar33 = 0;
                  uVar25 = 0;
                  if (uVar22 != 0) {
                    do {
                      iVar19 = iVar32 + iVar33;
                      while (iVar19 != 0) {
                        *(undefined4 *)(iVar19 + 0x4c) = 0;
                        *(undefined4 *)(iVar19 + 0x50) = 0;
                        FUN_ram_4009372e(iVar19 + 0x2c,1,iVar19 + 0x38,iVar19 + 0x4c);
                        uVar22 = (uint)puVar9[0x3e];
                        uVar25 = uVar25 + 1;
                        iVar33 = iVar33 + 0x54;
                        if (uVar22 <= uVar25) goto LAB_ram_40089616;
                        iVar32 = *(int *)((int)puVar9 + 0x1ec);
                        iVar19 = iVar32 + iVar33;
                      }
                      uVar25 = uVar25 + 1;
                      iVar33 = iVar33 + 0x54;
                    } while (uVar25 < uVar22);
                  }
                }
LAB_ram_40089616:
                iVar32 = *(int *)((int)puVar9 + 500);
                if ((iVar32 != 0) && (uVar25 = (uint)puVar9[0x3f], uVar25 != 0)) {
                  iVar33 = 0;
                  uVar22 = 0;
                  do {
                    iVar19 = iVar32 + iVar33;
                    while (iVar19 != 0) {
                      *(undefined4 *)(iVar19 + 0x4c) = 0;
                      *(undefined4 *)(iVar19 + 0x50) = 0;
                      FUN_ram_4009372e(iVar19 + 0x2c,1,iVar19 + 0x38,iVar19 + 0x4c);
                      uVar25 = (uint)puVar9[0x3f];
                      uVar22 = uVar22 + 1;
                      iVar33 = iVar33 + 0x54;
                      if (uVar25 <= uVar22) goto LAB_ram_40089678;
                      iVar32 = *(int *)((int)puVar9 + 500);
                      iVar19 = iVar32 + iVar33;
                    }
                    uVar22 = uVar22 + 1;
                    iVar33 = iVar33 + 0x54;
                  } while (uVar22 < uVar25);
                }
LAB_ram_40089678:
                if (*(int *)((int)puVar9 + 0x21c) != 0) {
                  memset(*(int *)((int)puVar9 + 0x21c),0,
                                   (uint)*(ushort *)((int)puVar9 + 0x1fe) << 2);
                }
                *(undefined1 *)((int)puVar9 + 0x23c) = 0;
                if (*(int *)((int)puVar9 + 0x664) != 0) {
                  memset(*(int *)((int)puVar9 + 0x664),0,
                                   (uint)*(ushort *)((int)puVar9 + 0x646) << 2);
                }
                *(undefined4 *)((int)puVar9 + 0x6bc) = 0;
                *(undefined4 *)(puVar9 + 0xd8) = 0;
                FUN_ram_4009372e((int)puVar9 + 0x69c,1,puVar9 + 0xd5,(int)puVar9 + 0x6bc);
                *(undefined4 *)(puVar9 + 0xe2) = 0;
                *(undefined4 *)((int)puVar9 + 0x714) = 0;
                FUN_ram_4009372e(puVar9 + 0xde,1,(int)puVar9 + 0x6fc,puVar9 + 0xe2);
                return 0;
              }
              uVar3 = (ushort)puVar6[0x47];
              if (uVar3 == 0) goto LAB_ram_4008921e;
              iVar32 = uVar3 * uVar25;
              if (iVar32 * 0xc == 0) {
                iVar33 = 0;
              }
              else {
                iVar33 = FUN_ram_40002f2c();
              }
              *(int *)(puVar9 + 0xc9) = iVar33;
              iVar19 = uVar25 * 0xc;
              if (uVar25 * uVar25 * 0xc == 0) {
                *(undefined4 *)((int)puVar9 + 0x64c) = 0;
                uVar20 = FUN_ram_40002f2c(iVar19);
                *(undefined4 *)(puVar9 + 0xca) = uVar20;
                uVar20 = FUN_ram_40002f2c(iVar19);
                *(undefined4 *)((int)puVar9 + 0x654) = uVar20;
                uVar20 = FUN_ram_40002f1a(1,uVar25 << 2);
                *(undefined4 *)((int)puVar9 + 0x664) = uVar20;
                uVar20 = FUN_ram_40002f1a(1,iVar19);
                *(undefined4 *)(puVar9 + 0xcd) = uVar20;
                uVar20 = FUN_ram_40002f1a(1,iVar19);
                *(undefined4 *)((int)puVar9 + 0x66c) = uVar20;
              }
              else {
                iVar18 = FUN_ram_40002f2c();
                *(int *)((int)puVar9 + 0x64c) = iVar18;
                iVar34 = FUN_ram_40002f2c(iVar19);
                *(int *)(puVar9 + 0xca) = iVar34;
                iVar12 = FUN_ram_40002f2c(iVar19);
                *(int *)((int)puVar9 + 0x654) = iVar12;
                iVar13 = FUN_ram_40002f1a(1,uVar25 << 2);
                *(int *)((int)puVar9 + 0x664) = iVar13;
                iVar14 = FUN_ram_40002f1a(1,iVar19);
                *(int *)(puVar9 + 0xcd) = iVar14;
                iVar19 = FUN_ram_40002f1a(1,iVar19);
                *(int *)((int)puVar9 + 0x66c) = iVar19;
                if ((((iVar33 != 0) && (iVar18 != 0)) && (iVar34 != 0)) &&
                   (((iVar12 != 0 && (iVar13 != 0)) && ((iVar14 != 0 && (iVar19 != 0)))))) {
                  FUN_ram_4000304c(iVar33,puVar6[0x48],puVar6[0x49] << 2);
                  FUN_ram_4000304c(iVar18,puVar6[0x4a],puVar6[0x4b] << 2);
                  FUN_ram_4000304c(iVar34,puVar6[0x4c],puVar6[0x4d] << 2);
                  FUN_ram_4000304c(iVar12,puVar6[0x4e],puVar6[0x4f] << 2);
                  *(ushort *)((int)puVar9 + 0x644) = uVar3;
                  *(ushort *)((int)puVar9 + 0x646) = uVar2;
                  *(int *)(puVar9 + 0xcb) = iVar32 * 3;
                  *(uint *)((int)puVar9 + 0x65c) = uVar25 * uVar25 * 3;
                  *(uint *)(puVar9 + 0xcc) = uVar25 * 3;
                  goto LAB_ram_4008921e;
                }
              }
              FUN_ram_400858c6((int)puVar9 + 0x644);
            }
            else {
              if ((uVar25 >> 0x1e == 0) && ((uVar25 & 0x3fffffff) != 0)) {
                iVar32 = FUN_ram_40002f1a(1);
                *(int *)(puVar9 + 0xe) = iVar32;
                if (iVar32 != 0) goto LAB_ram_40088c9a;
              }
              else {
                *(undefined4 *)(puVar9 + 0xe) = 0;
              }
              FUN_ram_40085d3a(puVar9 + 10);
            }
          }
          else if (((int)((ulonglong)uVar25 * 0x54 >> 0x20) == 0) &&
                  (uVar22 = 0, uVar25 * 0x54 != 0)) {
            puVar11 = (undefined4 *)puVar6[0x12];
            puVar17 = (undefined4 *)FUN_ram_40002f1a(1);
            puVar8 = puVar17;
            if (puVar17 != (undefined4 *)0x0) {
              do {
                uVar22 = uVar22 + 1;
                if (puVar11 != (undefined4 *)0x0) {
                  uVar24 = *puVar11;
                  puVar8[1] = puVar11[1];
                  uVar20 = puVar11[2];
                  *puVar8 = uVar24;
                  puVar8[2] = uVar20;
                  puVar8[3] = puVar11[3];
                  uVar20 = puVar11[4];
                  puVar8[5] = (int)uVar37;
                  puVar8[4] = uVar20;
                  FUN_ram_4008597e(puVar8);
                  puVar8[0x13] = 0;
                  puVar8[0x14] = 0;
                  FUN_ram_4009372e(puVar8 + 0xb,1,puVar8 + 0xe,puVar8 + 0x13);
                }
                puVar11 = puVar11 + 5;
                puVar8 = puVar8 + 0x15;
              } while (uVar25 != uVar22);
              if ((int)puVar9[10] != 0) {
                FUN_ram_40002f3a();
              }
              *(undefined4 **)(puVar9 + 10) = puVar17;
              *(uint *)((int)puVar9 + 0x54) = uVar25;
              goto LAB_ram_40088be0;
            }
          }
LAB_ram_40089736:
          FUN_ram_40086ad0(puVar9);
          FUN_ram_40002f3a(puVar9);
          iVar32 = -3;
          goto LAB_ram_400876fa;
        }
        uVar37 = *(ulonglong *)(puVar6 + 0xb);
        uVar38 = *(undefined8 *)(puVar6 + 0xc);
        uVar40 = *(ulonglong *)(puVar6 + 0xd);
        *(undefined8 *)((int)puVar9 + 0x34) = *(undefined8 *)(puVar6 + 10);
        puVar9[7] = uVar37;
        *(undefined8 *)((int)puVar9 + 0x3c) = uVar38;
        puVar9[8] = uVar40;
        if (((int)((ulonglong)uVar25 * 0x3c >> 0x20) != 0) || (uStack_90 = 0, uVar25 * 0x3c == 0)) {
          *(undefined4 *)((int)puVar9 + 4) = 0;
          iVar32 = -3;
          goto LAB_ram_400888be;
        }
        piVar10 = (int *)FUN_ram_40002f1a(1);
        *(int **)((int)puVar9 + 4) = piVar10;
        if (piVar10 != (int *)0x0) {
          puVar8 = (undefined4 *)puVar6[0x10];
          *(uint *)(puVar9 + 1) = uVar25;
          iVar33 = 0x34;
          uVar25 = 0;
          iVar32 = 0x3c;
LAB_ram_400883cc:
          if (*piVar10 != 0) {
            FUN_ram_40002f3a();
            *piVar10 = 0;
          }
          piVar10[1] = 0;
          if (piVar10[2] != 0) {
            FUN_ram_40002f3a();
            piVar10[2] = 0;
          }
          piVar10[3] = 0;
          if (piVar10[5] != 0) {
            FUN_ram_40002f3a();
            piVar10[5] = 0;
          }
          if (piVar10[6] != 0) {
            FUN_ram_40002f3a();
            piVar10[6] = 0;
          }
          if (piVar10[7] != 0) {
            FUN_ram_40002f3a();
            piVar10[7] = 0;
          }
          if (piVar10[8] != 0) {
            FUN_ram_40002f3a();
            piVar10[8] = 0;
          }
          if (piVar10[0xc] != 0) {
            FUN_ram_40002f3a();
            piVar10[0xc] = 0;
          }
          if (piVar10[0xd] != 0) {
            FUN_ram_40002f3a();
            piVar10[0xd] = 0;
          }
          if (piVar10[0xe] != 0) {
            FUN_ram_40002f3a();
            piVar10[0xe] = 0;
          }
          piVar10[4] = 0;
          piVar10[9] = 0;
          piVar10[10] = 0;
          piVar10[0xb] = 0;
          if (puVar8 == (undefined4 *)0x0) goto LAB_ram_40088778;
          uVar22 = puVar8[1];
          if (uVar22 != 0) {
            if (((int)((ulonglong)uVar22 * 0x54 >> 0x20) == 0) && (uVar5 = 0, uVar22 * 0x54 != 0)) {
              puVar35 = (undefined4 *)*puVar8;
              puVar11 = (undefined4 *)FUN_ram_40002f1a(1);
              puVar17 = puVar11;
              if (puVar11 != (undefined4 *)0x0) {
                do {
                  uVar5 = uVar5 + 1;
                  if (puVar35 != (undefined4 *)0x0) {
                    uVar24 = *puVar35;
                    puVar17[1] = puVar35[1];
                    uVar20 = puVar35[2];
                    *puVar17 = uVar24;
                    puVar17[2] = uVar20;
                    puVar17[3] = puVar35[3];
                    uVar20 = puVar35[4];
                    puVar17[5] = fVar4;
                    puVar17[4] = uVar20;
                    FUN_ram_4008597e(puVar17);
                    puVar17[0x13] = 0;
                    puVar17[0x14] = 0;
                    FUN_ram_4009372e(puVar17 + 0xb,1,puVar17 + 0xe,puVar17 + 0x13);
                  }
                  puVar35 = puVar35 + 5;
                  puVar17 = puVar17 + 0x15;
                } while (uVar5 != uVar22);
                if (*piVar10 != 0) {
                  FUN_ram_40002f3a();
                }
                piVar10[1] = uVar22;
                uVar22 = puVar8[3];
                *piVar10 = (int)puVar11;
                goto joined_r0x400889d6;
              }
            }
LAB_ram_400896cc:
            iVar19 = *(int *)((int)puVar9 + 4);
            iVar32 = -3;
            goto LAB_ram_4008879c;
          }
          if (*piVar10 != 0) {
            FUN_ram_40002f3a();
            *piVar10 = 0;
          }
          uVar22 = puVar8[3];
          piVar10[1] = 0;
joined_r0x400889d6:
          if (uVar22 != 0) {
            if (((int)((ulonglong)uVar22 * 0x54 >> 0x20) == 0) && (uVar5 = 0, uVar22 * 0x54 != 0)) {
              puVar35 = (undefined4 *)puVar8[2];
              puVar11 = (undefined4 *)FUN_ram_40002f1a(1);
              puVar17 = puVar11;
              if (puVar11 != (undefined4 *)0x0) {
                do {
                  uVar5 = uVar5 + 1;
                  if (puVar35 != (undefined4 *)0x0) {
                    uVar24 = *puVar35;
                    puVar17[1] = puVar35[1];
                    uVar20 = puVar35[2];
                    *puVar17 = uVar24;
                    puVar17[2] = uVar20;
                    puVar17[3] = puVar35[3];
                    uVar20 = puVar35[4];
                    puVar17[5] = fVar4;
                    puVar17[4] = uVar20;
                    FUN_ram_4008597e(puVar17);
                    puVar17[0x13] = 0;
                    puVar17[0x14] = 0;
                    FUN_ram_4009372e(puVar17 + 0xb,1,puVar17 + 0xe,puVar17 + 0x13);
                  }
                  puVar35 = puVar35 + 5;
                  puVar17 = puVar17 + 0x15;
                } while (uVar5 != uVar22);
                if (piVar10[2] != 0) {
                  FUN_ram_40002f3a();
                }
                piVar10[3] = uVar22;
                piVar10[2] = (int)puVar11;
                goto LAB_ram_400885b4;
              }
            }
            goto LAB_ram_400896cc;
          }
          if (piVar10[2] != 0) {
            FUN_ram_40002f3a();
            piVar10[2] = 0;
          }
          piVar10[3] = 0;
LAB_ram_400885b4:
          if (piVar10[5] != 0) {
            FUN_ram_40002f3a();
            piVar10[5] = 0;
          }
          if (piVar10[6] != 0) {
            FUN_ram_40002f3a();
            piVar10[6] = 0;
          }
          if (piVar10[7] != 0) {
            FUN_ram_40002f3a();
            piVar10[7] = 0;
          }
          if (piVar10[8] != 0) {
            FUN_ram_40002f3a();
            piVar10[8] = 0;
          }
          if (piVar10[0xc] != 0) {
            FUN_ram_40002f3a();
            piVar10[0xc] = 0;
          }
          if (piVar10[0xd] != 0) {
            FUN_ram_40002f3a();
            piVar10[0xd] = 0;
          }
          if (piVar10[0xe] != 0) {
            FUN_ram_40002f3a();
            piVar10[0xe] = 0;
          }
          piVar10[4] = 0;
          uVar2 = *(ushort *)((int)puVar8 + 0x12);
          uVar22 = (uint)uVar2;
          piVar10[9] = 0;
          piVar10[10] = 0;
          piVar10[0xb] = 0;
          if (uVar22 != 0) {
            uVar3 = *(ushort *)(puVar8 + 4);
            if (uVar3 != 0) {
              iVar19 = uVar3 * uVar22;
              if (iVar19 * 0xc == 0) {
                iVar18 = 0;
              }
              else {
                iVar18 = FUN_ram_40002f2c();
              }
              piVar10[5] = iVar18;
              iVar34 = uVar22 * 0xc;
              if ((uVar22 * uVar22 * 3 & 0x3fffffff) == 0) {
                piVar10[6] = 0;
                iVar32 = FUN_ram_40002f2c(iVar34);
                piVar10[7] = iVar32;
                iVar32 = FUN_ram_40002f2c(iVar34);
                piVar10[8] = iVar32;
                iVar32 = FUN_ram_40002f1a(1,uVar22 << 2);
                piVar10[0xc] = iVar32;
                iVar32 = FUN_ram_40002f1a(1,iVar34);
                piVar10[0xd] = iVar32;
                iVar32 = FUN_ram_40002f1a(1,iVar34);
                piVar10[0xe] = iVar32;
              }
              else {
                iVar12 = FUN_ram_40002f2c();
                piVar10[6] = iVar12;
                iVar13 = FUN_ram_40002f2c(iVar34);
                piVar10[7] = iVar13;
                iVar14 = FUN_ram_40002f2c(iVar34);
                piVar10[8] = iVar14;
                iVar15 = FUN_ram_40002f1a(1,uVar22 << 2);
                piVar10[0xc] = iVar15;
                iVar16 = FUN_ram_40002f1a(1,iVar34);
                piVar10[0xd] = iVar16;
                iVar34 = FUN_ram_40002f1a(1,iVar34);
                piVar10[0xe] = iVar34;
                if ((((((iVar18 != 0) && (iVar12 != 0)) && (iVar13 != 0)) &&
                     ((iVar14 != 0 && (iVar15 != 0)))) && (iVar16 != 0)) && (iVar34 != 0)) {
                  FUN_ram_4000304c(iVar18,puVar8[5],puVar8[6] << 2);
                  FUN_ram_4000304c(iVar12,puVar8[7],puVar8[8] << 2);
                  FUN_ram_4000304c(iVar13,puVar8[9],puVar8[10] << 2);
                  FUN_ram_4000304c(iVar14,puVar8[0xb],puVar8[0xc] << 2);
                  *(ushort *)((int)piVar10 + 0x12) = uVar2;
                  piVar10[9] = iVar19 * 3;
                  *(ushort *)(piVar10 + 4) = uVar3;
                  piVar10[10] = uVar22 * uVar22 * 3;
                  piVar10[0xb] = uVar22 * 3;
                  goto LAB_ram_40088778;
                }
              }
              FUN_ram_400858c6(piVar10 + 4);
              iVar19 = *(int *)((int)puVar9 + 4);
              iVar32 = -3;
              goto LAB_ram_4008879c;
            }
          }
LAB_ram_40088778:
          uVar25 = uVar25 + 1;
          if (uVar25 < puVar6[0x11]) goto code_r0x40088780;
          uVar25 = puVar6[0xf];
          *(uint *)((int)puVar9 + 0xc) = puVar6[0xe];
          *(uint *)(puVar9 + 2) = uVar25;
          if (*(int *)((int)puVar9 + 0x14) != 0) {
            FUN_ram_40002f3a();
            *(undefined4 *)((int)puVar9 + 0x14) = 0;
          }
          if (*(int *)((int)puVar9 + 0x1c) != 0) {
            FUN_ram_40002f3a();
            *(undefined4 *)((int)puVar9 + 0x1c) = 0;
          }
          uVar25 = puVar6[0xf];
          *(undefined4 *)(puVar9 + 3) = 0;
          *(undefined4 *)(puVar9 + 4) = 0;
          if (uVar25 != 0) {
            piVar29 = (int *)puVar6[0xe];
            piVar10 = piVar29 + uVar25 * 7;
            uVar25 = 1;
            do {
              if (*piVar29 == 0) {
                uVar22 = (uint)*(ushort *)((int)piVar29 + 10);
                if ((uint)*(ushort *)((int)piVar29 + 10) < (uint)*(ushort *)(piVar29 + 2)) {
                  uVar22 = (uint)*(ushort *)(piVar29 + 2);
                }
                if (uVar25 < uVar22) {
                  uVar25 = uVar22;
                }
              }
              piVar29 = piVar29 + 7;
            } while (piVar10 != piVar29);
            iVar32 = FUN_ram_40002f1a(1,uVar25 << 2);
            *(int *)((int)puVar9 + 0x14) = iVar32;
            iVar33 = FUN_ram_40002f1a(1,uVar25 << 2);
            *(int *)((int)puVar9 + 0x1c) = iVar33;
            if ((iVar32 == 0) || (iVar33 == 0)) {
              *(undefined4 *)((int)puVar9 + 0x14) = 0;
              *(undefined4 *)((int)puVar9 + 0x1c) = 0;
              iVar32 = -3;
              FUN_ram_400864c8((int)puVar9 + 4);
              goto LAB_ram_400888be;
            }
            *(uint *)(puVar9 + 3) = uVar25;
            *(uint *)(puVar9 + 4) = uVar25;
          }
          uVar25 = puVar6[0x11];
          *(uint *)(puVar9 + 5) = uVar25 << 1;
          if (((uVar25 << 1 == 0) || ((uVar25 & 0x7fffffff) >> 0x1d != 0)) ||
             ((uVar25 & 0x1fffffff) == 0)) {
            iVar32 = 0;
          }
          else {
            iVar32 = FUN_ram_40002f1a(1);
          }
          *(int *)((int)puVar9 + 0x24) = iVar32;
          if (((uVar25 == 0) || (uVar25 >> 0x1e != 0)) || (iVar33 = uVar25 << 2, iVar33 == 0)) {
            *(undefined4 *)((int)puVar9 + 0x2c) = 0;
            *(undefined4 *)(puVar9 + 6) = 0;
LAB_ram_40089764:
            FUN_ram_400864c8((int)puVar9 + 4);
            iVar32 = -3;
            goto LAB_ram_400888be;
          }
          iVar19 = FUN_ram_40002f1a(1,iVar33);
          *(int *)((int)puVar9 + 0x2c) = iVar19;
          iVar33 = FUN_ram_40002f1a(1,iVar33);
          *(int *)(puVar9 + 6) = iVar33;
          if (((iVar32 == 0) || (iVar19 == 0)) || (iVar33 == 0)) goto LAB_ram_40089764;
          *(undefined2 *)((int)puVar9 + 0x44) = 0;
          *(undefined4 *)(puVar9 + 9) = 0;
          *(undefined4 *)((int)puVar9 + 0x4c) = 0;
          goto LAB_ram_40088aea;
        }
LAB_ram_40089cb2:
        iVar32 = -3;
        goto LAB_ram_400888be;
      }
    }
  }
  iVar32 = -2;
  goto LAB_ram_400876fa;
code_r0x40088780:
  iVar19 = *(int *)((int)puVar9 + 4);
  piVar10 = (int *)(iVar19 + iVar32);
  puVar8 = (undefined4 *)(puVar6[0x10] + iVar33);
  iVar32 = iVar32 + 0x3c;
  iVar33 = iVar33 + 0x34;
  if (piVar10 == (int *)0x0) goto code_r0x40088798;
  goto LAB_ram_400883cc;
code_r0x40088798:
  iVar32 = -1;
LAB_ram_4008879c:
  if (iVar19 != 0) {
    uVar25 = (uint)puVar9[1];
    if (uVar25 != 0) {
      iVar33 = 0;
      do {
        puVar8 = (undefined4 *)(iVar19 + iVar33);
        if (puVar8 != (undefined4 *)0x0) {
          if (*(int *)(iVar19 + iVar33) != 0) {
            FUN_ram_40002f3a();
            *puVar8 = 0;
          }
          puVar8[1] = 0;
          if (puVar8[2] != 0) {
            FUN_ram_40002f3a();
            puVar8[2] = 0;
          }
          puVar8[3] = 0;
          if (puVar8[5] != 0) {
            FUN_ram_40002f3a();
            puVar8[5] = 0;
          }
          if (puVar8[6] != 0) {
            FUN_ram_40002f3a();
            puVar8[6] = 0;
          }
          if (puVar8[7] != 0) {
            FUN_ram_40002f3a();
            puVar8[7] = 0;
          }
          if (puVar8[8] != 0) {
            FUN_ram_40002f3a();
            puVar8[8] = 0;
          }
          if (puVar8[0xc] != 0) {
            FUN_ram_40002f3a();
            puVar8[0xc] = 0;
          }
          if (puVar8[0xd] != 0) {
            FUN_ram_40002f3a();
            puVar8[0xd] = 0;
          }
          if (puVar8[0xe] != 0) {
            FUN_ram_40002f3a();
            puVar8[0xe] = 0;
          }
          uVar25 = (uint)puVar9[1];
          iVar19 = *(int *)((int)puVar9 + 4);
          puVar8[4] = 0;
          puVar8[9] = 0;
          puVar8[10] = 0;
          puVar8[0xb] = 0;
        }
        iVar33 = iVar33 + 0x3c;
        uStack_90 = uStack_90 + 1;
      } while (uStack_90 < uVar25);
      if (iVar19 == 0) goto LAB_ram_4008885e;
    }
    FUN_ram_40002f3a();
    *(undefined4 *)((int)puVar9 + 4) = 0;
  }
LAB_ram_4008885e:
  *(undefined4 *)(puVar9 + 1) = 0;
  if (*(int *)((int)puVar9 + 0x14) != 0) {
    FUN_ram_40002f3a();
  }
  *(undefined4 *)((int)puVar9 + 0x14) = 0;
  *(undefined4 *)(puVar9 + 3) = 0;
  if (*(int *)((int)puVar9 + 0x1c) != 0) {
    FUN_ram_40002f3a();
  }
  *(undefined4 *)((int)puVar9 + 0x1c) = 0;
  *(undefined4 *)(puVar9 + 4) = 0;
  *(undefined4 *)((int)puVar9 + 0xc) = 0;
  *(undefined4 *)(puVar9 + 2) = 0;
  if (*(int *)((int)puVar9 + 0x24) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)((int)puVar9 + 0x24) = 0;
  }
  *(undefined4 *)(puVar9 + 5) = 0;
  if (*(int *)((int)puVar9 + 0x2c) != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)((int)puVar9 + 0x2c) = 0;
  }
  if ((int)puVar9[6] != 0) {
    FUN_ram_40002f3a();
    *(undefined4 *)(puVar9 + 6) = 0;
  }
  *(undefined2 *)((int)puVar9 + 0x44) = 0;
  *(undefined4 *)(puVar9 + 9) = 0;
  *(undefined4 *)((int)puVar9 + 0x4c) = 0;
LAB_ram_400888be:
  FUN_ram_40086ad0(puVar9);
  FUN_ram_40002f3a(puVar9);
LAB_ram_400876fa:
  FUN_ram_40085da8(puVar6);
  FUN_ram_40002f3a(puVar6);
  return iVar32;
}


