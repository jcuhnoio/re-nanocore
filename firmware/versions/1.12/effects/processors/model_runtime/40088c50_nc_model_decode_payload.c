/* NanoCore 1.12: nc_model_decode_payload at 0x40088c50.
 * Role: Reviewed DSP dispatch/model loading path.
 * REA: ev_3235df841a8e2baa505fcce32e5bf5cf6a85c642103f959e2255cf043a451821
 * Source: analysis/rea-1.12-effects/results/03636-export-0x40088c50.json
 * Decompiled C-like code, not original or buildable source.
 * Float-register/type artifacts and warnings intentionally retained.
 */

/* WARNING: Removing unreachable block (ram,0x4008b540) */
/* WARNING: Removing unreachable block (ram,0x4008b54a) */
/* WARNING: Removing unreachable block (ram,0x4008b558) */
/* WARNING: Removing unreachable block (ram,0x4008b55c) */
/* WARNING: Removing unreachable block (ram,0x4008b562) */
/* WARNING: Removing unreachable block (ram,0x4008b570) */
/* WARNING: Removing unreachable block (ram,0x4008b576) */
/* WARNING: Removing unreachable block (ram,0x4008b57a) */
/* WARNING: Removing unreachable block (ram,0x4008b56c) */
/* WARNING: Removing unreachable block (ram,0x4008b55e) */

int nc_model_decode_payload(undefined4 *param_1,float *param_2,uint param_3)

{
  ushort *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int *piVar11;
  undefined4 *puVar12;
  float *pfVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int iVar19;
  uint uVar20;
  undefined4 *puVar21;
  uint uVar22;
  float *pfVar23;
  uint uVar24;
  code *pcVar25;
  ushort uVar26;
  undefined4 uVar27;
  float *pfVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  int iVar31;
  undefined4 *puVar32;
  uint uVar33;
  undefined4 *puVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  int *piVar40;
  ulonglong uVar41;
  undefined8 uVar42;
  float fVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  uint local_b0;
  undefined4 uStack_9c;
  undefined4 *puStack_94;
  undefined4 *puStack_60;
  float *pfStack_5c;
  uint uStack_58;
  char cStack_54;
  
  if (((param_1 == (undefined4 *)0x0) || (param_2 == (float *)0x0)) || (param_3 == 0)) {
    return -1;
  }
  if (param_1[4] != 0) {
    FUN_ram_40086c10();
    iVar19 = param_1[4];
    if (iVar19 != 0) {
      (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
    }
    param_1[4] = 0;
  }
  if (param_1[3] != 0) {
    FUN_ram_40085be0();
    iVar19 = param_1[3];
    if (iVar19 != 0) {
      (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
    }
    param_1[3] = 0;
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  if ((code *)param_1[1] == (code *)0x0) {
    puVar12 = (undefined4 *)FUN_ram_40002f1a(0x218);
    if (puVar12 == (undefined4 *)0x0) {
      return -3;
    }
LAB_ram_40089d2a:
    pcVar25 = FUN_ram_4008561e;
  }
  else {
    puVar12 = (undefined4 *)(*(code *)param_1[1])(*param_1,0x218);
    if (puVar12 == (undefined4 *)0x0) {
      return -3;
    }
    if (param_1[1] == 0) goto LAB_ram_40089d2a;
    pcVar25 = (code *)param_1[2];
  }
  uVar27 = *param_1;
  puVar21 = puVar12 + 4;
  *puVar12 = pcVar25;
  puVar12[1] = uVar27;
  memset(puVar21,0,0x208);
  puVar12[4] = param_1;
  cStack_54 = '\0';
  puVar12[0xf] = param_1;
  puVar12[0x19] = param_1;
  puVar12[0x2e] = param_1;
  iVar19 = -2;
  puStack_60 = param_1;
  pfStack_5c = param_2;
  uStack_58 = param_3;
  if (param_3 < 4) goto LAB_ram_40088d30;
  pfStack_5c = param_2 + 1;
  uStack_58 = param_3 - 4;
  pfVar28 = pfStack_5c;
  uVar24 = uStack_58;
  if (*param_2 != 52.066666) goto LAB_ram_40089e40;
  if (uStack_58 < 2) goto LAB_ram_40088d30;
  uVar4 = *(ushort *)(param_2 + 1);
  pfVar28 = (float *)((int)param_2 + 6);
  uVar24 = param_3 - 6;
  if ((4 < (ushort)(uVar4 - 1)) || (uVar4 == 4)) goto LAB_ram_40089e40;
  if (uVar24 < 4) {
    cStack_54 = '\x01';
    puVar12[5] = 0;
    pfStack_5c = pfVar28;
    if (uVar24 < 2) goto LAB_ram_4008900a;
LAB_ram_40088df2:
    uVar5 = *(ushort *)pfVar28;
    pfStack_5c = (float *)((int)pfVar28 + 2);
    uVar22 = uVar24 - 2;
    uStack_58 = uVar22;
    if (uVar5 != 0) {
      uVar26 = uVar5 - 1;
      if (uVar22 < 4) {
        cStack_54 = '\x01';
        puVar12[6] = 0;
        if (uVar5 == 1) {
LAB_ram_4008a2a2:
          uVar26 = 1;
          uStack_58 = uVar22;
        }
        else {
LAB_ram_40089e52:
          cStack_54 = '\x01';
          puVar12[7] = 0;
          uStack_58 = uVar22;
          if (uVar26 < 2) {
LAB_ram_40089f8c:
            uVar26 = 2;
          }
          else {
LAB_ram_40089e60:
            cStack_54 = '\x01';
            puVar12[8] = 0;
            if (uVar26 < 3) {
LAB_ram_4008b07c:
              uVar26 = 3;
            }
            else {
LAB_ram_40089e74:
              cStack_54 = '\x01';
              puVar12[9] = 0;
              if (uVar26 < 4) {
                uVar26 = 4;
              }
              else {
LAB_ram_40089e88:
                cStack_54 = '\x01';
                puVar12[10] = 0;
                if (uVar26 < 5) {
LAB_ram_4008b110:
                  uVar26 = 5;
                }
                else {
LAB_ram_40089e9c:
                  cStack_54 = '\x01';
                  puVar12[0xb] = 0;
                  if (uVar26 < 6) {
LAB_ram_4008b238:
                    uVar26 = 6;
                  }
                  else {
LAB_ram_40089eb0:
                    uVar44 = 0;
                    cStack_54 = '\x01';
LAB_ram_40089ebc:
                    *(undefined8 *)(puVar12 + 0xc) = uVar44;
                    uVar26 = 7;
                  }
                }
              }
            }
          }
        }
      }
      else {
        pfStack_5c = (float *)((int)pfVar28 + 6);
        uVar22 = uVar24 - 6;
        *(ulonglong *)(puVar12 + 6) = CONCAT44(param_1,*(undefined4 *)((int)pfVar28 + 2));
        if (uVar5 == 1) goto LAB_ram_4008a2a2;
        if (uVar22 < 4) goto LAB_ram_40089e52;
        fVar43 = *pfStack_5c;
        pfStack_5c = (float *)((int)pfVar28 + 10);
        uStack_58 = uVar24 - 10;
        *(ulonglong *)(puVar12 + 7) = CONCAT44(param_1,fVar43);
        if (uVar5 == 2) goto LAB_ram_40089f8c;
        if (uStack_58 < 4) goto LAB_ram_40089e60;
        fVar43 = *pfStack_5c;
        pfStack_5c = (float *)((int)pfVar28 + 0xe);
        uStack_58 = uVar24 - 0xe;
        *(ulonglong *)(puVar12 + 8) = CONCAT44(param_1,fVar43);
        if (uVar5 == 3) goto LAB_ram_4008b07c;
        if (uStack_58 < 4) goto LAB_ram_40089e74;
        fVar43 = *pfStack_5c;
        pfStack_5c = (float *)((int)pfVar28 + 0x12);
        uStack_58 = uVar24 - 0x12;
        *(ulonglong *)(puVar12 + 9) = CONCAT44(param_1,fVar43);
        if (uVar5 != 4) {
          if (uStack_58 < 4) goto LAB_ram_40089e88;
          uStack_58 = uVar24 - 0x16;
          fVar43 = *pfStack_5c;
          pfStack_5c = (float *)((int)pfVar28 + 0x16);
          *(ulonglong *)(puVar12 + 10) = CONCAT44(param_1,fVar43);
          if (uVar5 != 5) {
            if (uStack_58 < 4) goto LAB_ram_40089e9c;
            pfStack_5c = (float *)((int)pfVar28 + 0x1a);
            uStack_58 = uVar24 - 0x1a;
            *(ulonglong *)(puVar12 + 0xb) = CONCAT44(param_1,*(undefined4 *)((int)pfVar28 + 0x16));
            if (5 < uVar26) {
              if (uStack_58 < 4) goto LAB_ram_40089eb0;
              pfStack_5c = (float *)((int)pfVar28 + 0x1e);
              uStack_58 = uVar24 - 0x1e;
              uVar44 = CONCAT44(param_1,*(undefined4 *)((int)pfVar28 + 0x1a));
              goto LAB_ram_40089ebc;
            }
            goto LAB_ram_4008b238;
          }
          goto LAB_ram_4008b110;
        }
        uVar26 = 4;
      }
      uVar22 = uStack_58;
      if (uVar26 < uVar5) {
        do {
          while (uVar26 = uVar26 + 1, uVar22 < 4) {
            cStack_54 = '\x01';
            if (uVar5 == uVar26) goto LAB_ram_40089ede;
          }
          uVar22 = uVar22 - 4;
          pfStack_5c = pfStack_5c + 1;
          uStack_58 = uVar22;
        } while (uVar5 != uVar26);
      }
    }
LAB_ram_40089ede:
    *(ulonglong *)(puVar12 + 0xe) = CONCAT44(DAT_ram_40096730,DAT_ram_4009672c);
    uVar24 = uVar22;
    if (uVar4 != 1) {
      if (uVar22 < 4) goto LAB_ram_40089416;
      uVar24 = uVar22 - 4;
      puVar12[0xd] = *pfStack_5c;
      pfVar28 = pfStack_5c + 1;
      uStack_58 = uVar24;
      if (uVar24 < 4) goto LAB_ram_4008941a;
      pfVar28 = pfStack_5c + 1;
      pfStack_5c = pfStack_5c + 2;
      uVar24 = uVar22 - 8;
      uVar44 = CONCAT44(param_1,*pfVar28);
      uStack_58 = uVar24;
      goto LAB_ram_40089424;
    }
LAB_ram_40089426:
    if (uVar24 < 2) goto LAB_ram_4008901c;
    uStack_58 = uVar24 - 2;
    uVar22 = (uint)*(ushort *)pfStack_5c;
    pfVar28 = (float *)((int)pfStack_5c + 2);
    if (uStack_58 < 4) goto LAB_ram_4008901e;
    uStack_58 = uVar24 - 6;
    *(ulonglong *)(puVar12 + 0x10) = CONCAT44(param_1,*(undefined4 *)((int)pfStack_5c + 2));
    pfVar28 = (float *)((int)pfStack_5c + 6);
    if (uStack_58 < 4) goto LAB_ram_40089022;
    uStack_58 = uVar24 - 10;
    *(ulonglong *)(puVar12 + 0x11) = CONCAT44(param_1,*(undefined4 *)((int)pfStack_5c + 6));
    pfVar28 = (float *)((int)pfStack_5c + 10);
    if (uStack_58 < 4) goto LAB_ram_40089026;
    uStack_58 = uVar24 - 0xe;
    *(ulonglong *)(puVar12 + 0x12) = CONCAT44(param_1,*(undefined4 *)((int)pfStack_5c + 10));
    pfVar28 = (float *)((int)pfStack_5c + 0xe);
    if (uStack_58 < 4) goto LAB_ram_4008902a;
    puVar1 = (ushort *)((int)pfStack_5c + 0xe);
    pfStack_5c = (float *)((int)pfStack_5c + 0x12);
    uStack_58 = uVar24 - 0x12;
    uVar44 = CONCAT44(param_1,*(undefined4 *)puVar1);
  }
  else {
    pfVar28 = (float *)((int)param_2 + 10);
    uVar24 = param_3 - 10;
    puVar12[5] = *(undefined4 *)((int)param_2 + 6);
    pfStack_5c = pfVar28;
    if (1 < uVar24) goto LAB_ram_40088df2;
LAB_ram_4008900a:
    *(ulonglong *)(puVar12 + 0xe) = CONCAT44(DAT_ram_40096730,DAT_ram_4009672c);
    uStack_58 = uVar24;
    if (uVar4 != 1) {
LAB_ram_40089416:
      puVar12[0xd] = 0;
      pfVar28 = pfStack_5c;
LAB_ram_4008941a:
      pfStack_5c = pfVar28;
      uVar44 = 0;
      cStack_54 = '\x01';
LAB_ram_40089424:
      *(undefined8 *)(puVar12 + 0xe) = uVar44;
      goto LAB_ram_40089426;
    }
LAB_ram_4008901c:
    uVar22 = 0;
    pfVar28 = pfStack_5c;
LAB_ram_4008901e:
    pfStack_5c = pfVar28;
    puVar12[0x10] = 0;
    pfVar28 = pfStack_5c;
LAB_ram_40089022:
    pfStack_5c = pfVar28;
    puVar12[0x11] = 0;
    pfVar28 = pfStack_5c;
LAB_ram_40089026:
    pfStack_5c = pfVar28;
    puVar12[0x12] = 0;
    pfVar28 = pfStack_5c;
LAB_ram_4008902a:
    pfStack_5c = pfVar28;
    uVar44 = 0;
    cStack_54 = '\x01';
  }
  *(undefined8 *)(puVar12 + 0x13) = uVar44;
  iVar19 = FUN_ram_40087bc0(&puStack_60,puVar12 + 0x14);
  if (iVar19 != 0) goto LAB_ram_40088d30;
  if (uVar22 != 0) {
    if ((code *)param_1[1] == (code *)0x0) {
      puVar15 = (undefined4 *)FUN_ram_40002f1a(uVar22 * 0x58 + 0x10);
      if (puVar15 == (undefined4 *)0x0) {
LAB_ram_4008a368:
        puVar12[0x17] = 0;
        iVar19 = -3;
        goto LAB_ram_40088d30;
      }
LAB_ram_4008a112:
      pcVar25 = FUN_ram_4008561e;
    }
    else {
      puVar15 = (undefined4 *)(*(code *)param_1[1])(*param_1);
      if (puVar15 == (undefined4 *)0x0) goto LAB_ram_4008a368;
      if (param_1[1] == 0) goto LAB_ram_4008a112;
      pcVar25 = (code *)param_1[2];
    }
    uVar27 = *param_1;
    puVar34 = puVar15 + 4;
    *puVar15 = pcVar25;
    puVar15[1] = uVar27;
    memset(puVar34,0,uVar22 * 0x58);
    fVar10 = DAT_ram_4009a60c;
    fVar43 = DAT_ram_4009672c;
    puVar12[0x17] = puVar34;
    puVar12[0x18] = uVar22;
    iVar35 = 0x58;
    do {
      puVar15 = puStack_60;
      if (uStack_58 < 2) {
        cStack_54 = '\x01';
LAB_ram_40089ff6:
        puVar34[1] = 0;
        *puVar34 = 0;
        puVar32 = puStack_60;
        if (1 < uStack_58) goto LAB_ram_4008925c;
LAB_ram_4008a004:
        cStack_54 = '\x01';
LAB_ram_4008a008:
        puVar34[2] = 0;
        puVar34[3] = 0;
      }
      else {
        uVar24 = uStack_58 - 2;
        uVar5 = *(ushort *)pfStack_5c;
        pfStack_5c = (float *)((int)pfStack_5c + 2);
        uVar37 = (uint)uVar5;
        uStack_58 = uVar24;
        if (uVar37 == 0) goto LAB_ram_40089ff6;
        iVar19 = uVar37 * 0x18 + 0x10;
        if (puStack_60 == (undefined4 *)0x0) {
          puVar14 = (undefined4 *)FUN_ram_40002f1a(iVar19);
          if (puVar14 == (undefined4 *)0x0) goto LAB_ram_4008a050;
          *puVar14 = FUN_ram_4008561e;
          puVar32 = (undefined4 *)0x0;
          uVar27 = 0;
        }
        else {
          if ((code *)puStack_60[1] == (code *)0x0) {
            puVar14 = (undefined4 *)FUN_ram_40002f1a(iVar19);
            if (puVar14 == (undefined4 *)0x0) goto LAB_ram_4008a050;
            pcVar25 = FUN_ram_4008561e;
            puVar32 = puVar15;
          }
          else {
            puVar14 = (undefined4 *)(*(code *)puStack_60[1])(*puStack_60);
            if (puVar14 == (undefined4 *)0x0) goto LAB_ram_4008a050;
            puVar32 = puStack_60;
            uVar24 = uStack_58;
            if (puVar15[1] == 0) {
              pcVar25 = FUN_ram_4008561e;
            }
            else {
              pcVar25 = (code *)puVar15[2];
            }
          }
          uVar27 = *puVar15;
          *puVar14 = pcVar25;
        }
        puVar14[1] = uVar27;
        piVar11 = (int *)memset(puVar14 + 4,0,uVar37 * 0x18);
        piVar40 = piVar11;
LAB_ram_40089154:
        do {
          *piVar40 = (int)puVar32;
          if (uVar24 == 0) {
            piVar40[1] = 0;
            piVar40[2] = 0;
            uVar20 = uVar24;
LAB_ram_40089f9a:
            piVar40[3] = 0;
            pfVar28 = pfStack_5c;
LAB_ram_40089f9e:
            pfStack_5c = pfVar28;
            piVar40[4] = 0;
            pfVar28 = pfStack_5c;
          }
          else {
            uStack_58 = uVar24 - 1;
            piVar40[1] = (uint)*(byte *)pfStack_5c;
            if (uStack_58 < 4) {
              piVar40[2] = 0;
              uVar20 = uStack_58;
              pfStack_5c = (float *)((int)pfStack_5c + 1);
              goto LAB_ram_40089f9a;
            }
            uVar20 = uVar24 - 5;
            *(ulonglong *)(piVar40 + 2) = CONCAT44(puStack_60,*(undefined4 *)((int)pfStack_5c + 1));
            if (uVar20 < 4) {
              piVar40[3] = 0;
              pfVar28 = (float *)((int)pfStack_5c + 5);
              uStack_58 = uVar20;
              goto LAB_ram_40089f9e;
            }
            uVar20 = uVar24 - 9;
            *(ulonglong *)(piVar40 + 3) = CONCAT44(puStack_60,*(undefined4 *)((int)pfStack_5c + 5));
            pfVar28 = (float *)((int)pfStack_5c + 9);
            uStack_58 = uVar20;
            if (uVar20 < 4) goto LAB_ram_40089f9e;
            uVar20 = uVar24 - 0xd;
            *(ulonglong *)(piVar40 + 4) = CONCAT44(puStack_60,*(undefined4 *)((int)pfStack_5c + 9));
            pfVar28 = (float *)((int)pfStack_5c + 0xd);
            uStack_58 = uVar20;
            if (3 < uVar20) {
              pbVar2 = (byte *)((int)pfStack_5c + 0xd);
              pfStack_5c = (float *)((int)pfStack_5c + 0x11);
              uVar24 = uVar24 - 0x11;
              *(ulonglong *)(piVar40 + 5) = CONCAT44(puStack_60,*(undefined4 *)pbVar2);
              piVar40 = piVar40 + 6;
              uStack_58 = uVar24;
              if (puVar14 + (uVar37 - 1 & 0xffff) * 6 + 10 == piVar40) break;
              goto LAB_ram_40089154;
            }
          }
          pfStack_5c = pfVar28;
          cStack_54 = '\x01';
          piVar40[5] = 0;
          piVar40 = piVar40 + 6;
          uVar24 = uVar20;
        } while (piVar40 != puVar14 + (uVar37 - 1 & 0xffff) * 6 + 10);
        puVar34[1] = uVar37;
        *puVar34 = piVar11;
        puVar15 = puVar32;
        if (uStack_58 < 2) goto LAB_ram_4008a004;
LAB_ram_4008925c:
        uVar24 = uStack_58 - 2;
        uVar5 = *(ushort *)pfStack_5c;
        pfStack_5c = (float *)((int)pfStack_5c + 2);
        uVar37 = (uint)uVar5;
        puVar32 = puVar15;
        uStack_58 = uVar24;
        if (uVar37 == 0) goto LAB_ram_4008a008;
        iVar19 = uVar37 * 0x18 + 0x10;
        if (puVar15 == (undefined4 *)0x0) {
          puVar14 = (undefined4 *)FUN_ram_40002f1a(iVar19);
          if (puVar14 == (undefined4 *)0x0) goto LAB_ram_4008a050;
          *puVar14 = FUN_ram_4008561e;
          puVar32 = (undefined4 *)0x0;
          uVar27 = 0;
        }
        else {
          if ((code *)puVar15[1] == (code *)0x0) {
            puVar14 = (undefined4 *)FUN_ram_40002f1a(iVar19);
            if (puVar14 == (undefined4 *)0x0) goto LAB_ram_4008a050;
            pcVar25 = FUN_ram_4008561e;
          }
          else {
            puVar14 = (undefined4 *)(*(code *)puVar15[1])(*puVar15);
            if (puVar14 == (undefined4 *)0x0) goto LAB_ram_4008a050;
            puVar32 = puStack_60;
            uVar24 = uStack_58;
            if (puVar15[1] == 0) {
              pcVar25 = FUN_ram_4008561e;
            }
            else {
              pcVar25 = (code *)puVar15[2];
            }
          }
          uVar27 = *puVar15;
          *puVar14 = pcVar25;
        }
        puVar14[1] = uVar27;
        piVar11 = (int *)memset(puVar14 + 4,0,uVar37 * 0x18);
        piVar40 = piVar11;
LAB_ram_400892e8:
        do {
          *piVar40 = (int)puVar32;
          if (uVar24 == 0) {
            piVar40[1] = 0;
            piVar40[2] = 0;
            uVar20 = uVar24;
LAB_ram_40089fd8:
            piVar40[3] = 0;
            pfVar28 = pfStack_5c;
LAB_ram_40089fdc:
            pfStack_5c = pfVar28;
            piVar40[4] = 0;
            pfVar28 = pfStack_5c;
          }
          else {
            uStack_58 = uVar24 - 1;
            piVar40[1] = (uint)*(byte *)pfStack_5c;
            if (uStack_58 < 4) {
              piVar40[2] = 0;
              uVar20 = uStack_58;
              pfStack_5c = (float *)((int)pfStack_5c + 1);
              goto LAB_ram_40089fd8;
            }
            uVar20 = uVar24 - 5;
            *(ulonglong *)(piVar40 + 2) = CONCAT44(puStack_60,*(undefined4 *)((int)pfStack_5c + 1));
            if (uVar20 < 4) {
              piVar40[3] = 0;
              pfVar28 = (float *)((int)pfStack_5c + 5);
              uStack_58 = uVar20;
              goto LAB_ram_40089fdc;
            }
            uVar20 = uVar24 - 9;
            *(ulonglong *)(piVar40 + 3) = CONCAT44(puStack_60,*(undefined4 *)((int)pfStack_5c + 5));
            pfVar28 = (float *)((int)pfStack_5c + 9);
            uStack_58 = uVar20;
            if (uVar20 < 4) goto LAB_ram_40089fdc;
            uVar20 = uVar24 - 0xd;
            *(ulonglong *)(piVar40 + 4) = CONCAT44(puStack_60,*(undefined4 *)((int)pfStack_5c + 9));
            pfVar28 = (float *)((int)pfStack_5c + 0xd);
            uStack_58 = uVar20;
            if (3 < uVar20) {
              pbVar2 = (byte *)((int)pfStack_5c + 0xd);
              pfStack_5c = (float *)((int)pfStack_5c + 0x11);
              uVar24 = uVar24 - 0x11;
              *(ulonglong *)(piVar40 + 5) = CONCAT44(puStack_60,*(undefined4 *)pbVar2);
              piVar40 = piVar40 + 6;
              uStack_58 = uVar24;
              if (puVar14 + (uVar37 - 1 & 0xffff) * 6 + 10 == piVar40) break;
              goto LAB_ram_400892e8;
            }
          }
          pfStack_5c = pfVar28;
          cStack_54 = '\x01';
          piVar40[5] = 0;
          piVar40 = piVar40 + 6;
          uVar24 = uVar20;
        } while (piVar40 != puVar14 + (uVar37 - 1 & 0xffff) * 6 + 10);
        puVar34[2] = piVar11;
        puVar34[3] = uVar37;
      }
      if (uVar4 == 5) {
        puVar34[0xe] = puVar32;
        pfVar28 = pfStack_5c;
        uVar24 = uStack_58;
        if (uStack_58 < 2) goto LAB_ram_40089e40;
        uVar24 = uStack_58 - 2;
        uVar5 = *(ushort *)pfStack_5c;
        pfVar28 = (float *)((int)pfStack_5c + 2);
        uVar37 = (uint)uVar5;
        if (((cStack_54 != '\0') || (0x3c < (uVar37 - 4 & 0xffff))) ||
           (uVar20 = (uVar37 + 5 & 0xffff) * 4, uVar24 < uVar20)) goto LAB_ram_40089e40;
        puVar1 = (ushort *)((int)pfStack_5c + 2);
        pfStack_5c = (float *)((int)pfStack_5c + 6);
        uVar24 = uStack_58 - 6;
        puVar34[0x10] = *(undefined4 *)puVar1;
        iVar19 = uVar20 - 4;
        uStack_58 = uVar24;
        if (puVar32 != (undefined4 *)0x0) {
          if ((code *)puVar32[1] == (code *)0x0) {
            puVar15 = (undefined4 *)FUN_ram_40002f1a(iVar19);
            if (puVar15 != (undefined4 *)0x0) {
LAB_ram_4008a340:
              pcVar25 = FUN_ram_4008561e;
              goto LAB_ram_40089de4;
            }
          }
          else {
            puVar15 = (undefined4 *)(*(code *)puVar32[1])(*puVar32);
            if (puVar15 != (undefined4 *)0x0) {
              uVar24 = uStack_58;
              if (puVar32[1] == 0) goto LAB_ram_4008a340;
              pcVar25 = (code *)puVar32[2];
LAB_ram_40089de4:
              uVar27 = *puVar32;
              *puVar15 = pcVar25;
              goto LAB_ram_40089dea;
            }
          }
LAB_ram_4008a2b0:
          puVar34[0x11] = 0;
          iVar19 = -3;
          goto LAB_ram_40088d30;
        }
        puVar15 = (undefined4 *)FUN_ram_40002f1a(iVar19);
        if (puVar15 == (undefined4 *)0x0) goto LAB_ram_4008a2b0;
        *puVar15 = FUN_ram_4008561e;
        uVar27 = 0;
LAB_ram_40089dea:
        puVar15[1] = uVar27;
        pfVar13 = (float *)(puVar15 + 4);
        puVar34[0x11] = pfVar13;
        *(ushort *)(puVar34 + 0xf) = uVar5;
        uVar20 = 0;
        pfVar23 = pfVar13;
        pfVar28 = pfStack_5c;
        do {
          pfStack_5c = pfVar28;
          uVar33 = uVar24;
          uVar24 = uVar33 - 4;
          if (uVar33 < 4) {
            cStack_54 = '\x01';
            *pfVar23 = 0.0;
            uVar24 = uVar20 + 1 & 0xffff;
            pfVar13 = pfVar13 + uVar24;
            pfVar28 = pfStack_5c;
            if (uVar24 != uVar37) {
              do {
                *pfVar13 = 0.0;
                uVar24 = uVar24 + 1 & 0xffff;
                pfVar13 = pfVar13 + 1;
              } while (uVar24 < uVar37);
            }
            goto LAB_ram_40089e2e;
          }
          uVar20 = uVar20 + 1 & 0xffff;
          fVar6 = *pfStack_5c;
          pfVar28 = pfStack_5c + 1;
          *pfVar23 = fVar6;
          if (fVar10 < ABS(fVar6)) goto LAB_ram_40089e40;
          pfVar23 = pfVar23 + 1;
          uStack_58 = uVar24;
        } while (uVar37 != uVar20);
        if (uVar24 < 4) goto LAB_ram_40089e2e;
        fVar6 = *pfVar28;
        uStack_58 = uVar33 - 8;
        puVar34[0x12] = fVar6;
        pfVar28 = pfStack_5c + 2;
        if (uStack_58 < 4) goto LAB_ram_40089e32;
        fVar7 = pfStack_5c[2];
        uStack_58 = uVar33 - 0xc;
        puVar34[0x13] = fVar7;
        pfVar28 = pfStack_5c + 3;
        if (uStack_58 < 4) goto LAB_ram_40089e36;
        fVar8 = pfStack_5c[3];
        uStack_58 = uVar33 - 0x10;
        puVar34[0x14] = fVar8;
        pfVar28 = pfStack_5c + 4;
        if (uStack_58 < 4) goto LAB_ram_40089e3a;
        fVar9 = pfStack_5c[4];
        pfStack_5c = pfStack_5c + 5;
        uStack_58 = uVar33 - 0x14;
        puVar34[0x15] = fVar9;
        pfVar28 = pfStack_5c;
        uVar24 = uStack_58;
        if (((((cStack_54 != '\0') || (0xff < (int)pfStack_5c || fVar10 < ABS((float)puVar34[0x10]))
              ) || ((float)puVar34[0x10] <= 0.0)) ||
            ((fVar10 < ABS(fVar6) || (fVar10 < ABS(fVar7))))) ||
           ((fVar10 < ABS(fVar9) || (fVar8 < 0.0)))) goto LAB_ram_40089e40;
        if (fVar43 <= fVar8) {
          iVar19 = -2;
          goto LAB_ram_40088d30;
        }
      }
      else {
        iVar19 = FUN_ram_40086fe8(&puStack_60,puVar34 + 4);
        if (iVar19 != 0) goto LAB_ram_40088d30;
      }
      if (uVar22 * 0x58 == iVar35) goto LAB_ram_4008951c;
      puVar34 = (undefined4 *)(puVar12[0x17] + iVar35);
      iVar35 = iVar35 + 0x58;
    } while (puVar34 != (undefined4 *)0x0);
    iVar19 = -1;
    goto LAB_ram_40088d30;
  }
LAB_ram_4008951c:
  puVar15 = puStack_60;
  if (1 < uStack_58) {
    uVar24 = uStack_58 - 2;
    uVar5 = *(ushort *)pfStack_5c;
    pfStack_5c = (float *)((int)pfStack_5c + 2);
    uVar22 = (uint)uVar5;
    uStack_58 = uVar24;
    if (uVar22 == 0) goto LAB_ram_40089f64;
    iVar19 = uVar22 * 0x18 + 0x10;
    if (puStack_60 == (undefined4 *)0x0) {
      puVar34 = (undefined4 *)FUN_ram_40002f1a(iVar19);
      if (puVar34 == (undefined4 *)0x0) goto LAB_ram_4008a050;
      *puVar34 = FUN_ram_4008561e;
      puVar32 = (undefined4 *)0x0;
      uVar27 = 0;
LAB_ram_40089586:
      puVar34[1] = uVar27;
      piVar11 = (int *)memset(puVar34 + 4,0,uVar22 * 0x18);
      piVar40 = piVar11;
LAB_ram_400895b4:
      do {
        *piVar40 = (int)puVar32;
        if (uVar24 == 0) {
          piVar40[1] = 0;
          piVar40[2] = 0;
          uVar37 = uVar24;
LAB_ram_4008a024:
          piVar40[3] = 0;
          pfVar28 = pfStack_5c;
LAB_ram_4008a028:
          pfStack_5c = pfVar28;
          piVar40[4] = 0;
          pfVar28 = pfStack_5c;
        }
        else {
          uStack_58 = uVar24 - 1;
          piVar40[1] = (uint)*(byte *)pfStack_5c;
          if (uStack_58 < 4) {
            piVar40[2] = 0;
            uVar37 = uStack_58;
            pfStack_5c = (float *)((int)pfStack_5c + 1);
            goto LAB_ram_4008a024;
          }
          uVar37 = uVar24 - 5;
          *(ulonglong *)(piVar40 + 2) = CONCAT44(puStack_60,*(undefined4 *)((int)pfStack_5c + 1));
          if (uVar37 < 4) {
            piVar40[3] = 0;
            pfVar28 = (float *)((int)pfStack_5c + 5);
            uStack_58 = uVar37;
            goto LAB_ram_4008a028;
          }
          uVar37 = uVar24 - 9;
          *(ulonglong *)(piVar40 + 3) = CONCAT44(puStack_60,*(undefined4 *)((int)pfStack_5c + 5));
          pfVar28 = (float *)((int)pfStack_5c + 9);
          uStack_58 = uVar37;
          if (uVar37 < 4) goto LAB_ram_4008a028;
          uVar37 = uVar24 - 0xd;
          *(ulonglong *)(piVar40 + 4) = CONCAT44(puStack_60,*(undefined4 *)((int)pfStack_5c + 9));
          pfVar28 = (float *)((int)pfStack_5c + 0xd);
          uStack_58 = uVar37;
          if (3 < uVar37) {
            pbVar2 = (byte *)((int)pfStack_5c + 0xd);
            pfStack_5c = (float *)((int)pfStack_5c + 0x11);
            uVar24 = uVar24 - 0x11;
            *(ulonglong *)(piVar40 + 5) = CONCAT44(puStack_60,*(undefined4 *)pbVar2);
            piVar40 = piVar40 + 6;
            uStack_58 = uVar24;
            if (puVar34 + (uVar22 - 1 & 0xffff) * 6 + 10 == piVar40) break;
            goto LAB_ram_400895b4;
          }
        }
        pfStack_5c = pfVar28;
        cStack_54 = '\x01';
        piVar40[5] = 0;
        piVar40 = piVar40 + 6;
        uVar24 = uVar37;
      } while (piVar40 != puVar34 + (uVar22 - 1 & 0xffff) * 6 + 10);
      puVar12[0x1a] = piVar11;
      puVar12[0x1b] = uVar22;
      iVar19 = FUN_ram_40087bc0(&puStack_60,puVar12 + 0x1c);
      goto joined_r0x400896c4;
    }
    if ((code *)puStack_60[1] == (code *)0x0) {
      puVar34 = (undefined4 *)FUN_ram_40002f1a(iVar19);
      if (puVar34 != (undefined4 *)0x0) {
        pcVar25 = FUN_ram_4008561e;
        puVar32 = puVar15;
LAB_ram_4008957e:
        uVar27 = *puVar15;
        *puVar34 = pcVar25;
        goto LAB_ram_40089586;
      }
    }
    else {
      puVar34 = (undefined4 *)(*(code *)puStack_60[1])(*puStack_60);
      if (puVar34 != (undefined4 *)0x0) {
        uVar24 = uStack_58;
        puVar32 = puStack_60;
        if (puVar15[1] == 0) {
          pcVar25 = FUN_ram_4008561e;
        }
        else {
          pcVar25 = (code *)puVar15[2];
        }
        goto LAB_ram_4008957e;
      }
    }
    goto LAB_ram_4008a050;
  }
  cStack_54 = '\x01';
LAB_ram_40089f64:
  puVar12[0x1a] = 0;
  puVar12[0x1b] = 0;
  iVar19 = FUN_ram_40087bc0(&puStack_60,puVar12 + 0x1c);
joined_r0x400896c4:
  if (iVar19 != 0) goto LAB_ram_40088d30;
  puStack_94 = puVar12 + 0x1c;
  if (uStack_58 < 4) {
    puVar12[0x1f] = 0;
    pfVar28 = pfStack_5c;
    uVar24 = uStack_58;
LAB_ram_400896d4:
    uStack_58 = uVar24;
    pfStack_5c = pfVar28;
    fVar43 = 0.0;
    cStack_54 = '\x01';
  }
  else {
    *(ulonglong *)(puVar12 + 0x1f) = CONCAT44(puStack_60,*pfStack_5c);
    pfVar28 = pfStack_5c + 1;
    uVar24 = uStack_58 - 4;
    if (uStack_58 - 4 < 4) goto LAB_ram_400896d4;
    fVar43 = pfStack_5c[1];
    pfStack_5c = pfStack_5c + 2;
    uStack_58 = uStack_58 - 8;
  }
  puVar12[0x20] = fVar43;
  uVar29 = DAT_ram_400a139c;
  uVar27 = DAT_ram_400a1398;
  if (uVar4 < 3) {
    puVar12[0x22] = 0;
    puVar12[0x23] = uVar27;
    uVar3 = DAT_ram_4009f32c;
    fVar43 = DAT_ram_4009672c;
    puVar12[0x24] = uVar29;
    puVar12[0x25] = 0;
    puVar12[0x26] = fVar43;
    puVar12[0x28] = 1;
    puVar12[0x29] = uVar27;
    puVar12[0x2a] = uVar29;
    puVar12[0x2b] = 0;
    puVar12[0x2c] = fVar43;
    puVar12[0x2d] = uVar3;
  }
  else {
    puVar12[0x21] = puStack_60;
    if (uStack_58 == 0) {
      puVar12[0x22] = 0;
      pfVar28 = pfStack_5c;
      uVar24 = uStack_58;
LAB_ram_4008b324:
      uStack_58 = uVar24;
      pfStack_5c = pfVar28;
      puVar12[0x23] = 0;
      pfVar28 = pfStack_5c;
      uVar24 = uStack_58;
LAB_ram_4008b328:
      uStack_58 = uVar24;
      pfStack_5c = pfVar28;
      puVar12[0x24] = 0;
      pfVar28 = pfStack_5c;
      uVar24 = uStack_58;
LAB_ram_4008b32c:
      uStack_58 = uVar24;
      pfStack_5c = pfVar28;
      puVar12[0x25] = 0;
      pfVar28 = pfStack_5c;
      uVar24 = uStack_58;
LAB_ram_4008b330:
      uStack_58 = uVar24;
      pfStack_5c = pfVar28;
      uVar27 = 0;
      cStack_54 = '\x01';
    }
    else {
      puVar12[0x22] = (uint)*(byte *)pfStack_5c;
      pfVar28 = (float *)((int)pfStack_5c + 1);
      uVar24 = uStack_58 - 1;
      if (uStack_58 - 1 < 4) goto LAB_ram_4008b324;
      puVar12[0x23] = *(undefined4 *)((int)pfStack_5c + 1);
      pfVar28 = (float *)((int)pfStack_5c + 5);
      uVar24 = uStack_58 - 5;
      if (uStack_58 - 5 < 4) goto LAB_ram_4008b328;
      puVar12[0x24] = *(undefined4 *)((int)pfStack_5c + 5);
      pfVar28 = (float *)((int)pfStack_5c + 9);
      uVar24 = uStack_58 - 9;
      if (uStack_58 - 9 < 4) goto LAB_ram_4008b32c;
      puVar12[0x25] = *(undefined4 *)((int)pfStack_5c + 9);
      pfVar28 = (float *)((int)pfStack_5c + 0xd);
      uVar24 = uStack_58 - 0xd;
      if (uStack_58 - 0xd < 4) goto LAB_ram_4008b330;
      uVar27 = *(undefined4 *)((int)pfStack_5c + 0xd);
      pfStack_5c = (float *)((int)pfStack_5c + 0x11);
      uStack_58 = uStack_58 - 0x11;
    }
    puVar12[0x26] = uVar27;
    iVar19 = FUN_ram_40085ab2(&puStack_60,puVar12 + 0x27);
    if (iVar19 != 0) goto LAB_ram_40088d30;
    if (uStack_58 < 4) {
      fVar43 = 0.0;
      cStack_54 = '\x01';
    }
    else {
      uStack_58 = uStack_58 - 4;
      fVar43 = *pfStack_5c;
      pfStack_5c = pfStack_5c + 1;
    }
    puVar12[0x2d] = fVar43;
  }
  puVar12[0x2f] = puStack_60;
  if (uStack_58 == 0) {
    puVar12[0x30] = 0;
    pfVar28 = pfStack_5c;
    uVar24 = uStack_58;
LAB_ram_4008a34e:
    uStack_58 = uVar24;
    pfStack_5c = pfVar28;
    puVar12[0x31] = 0;
    pfVar28 = pfStack_5c;
    uVar24 = uStack_58;
LAB_ram_4008a352:
    uStack_58 = uVar24;
    pfStack_5c = pfVar28;
    puVar12[0x32] = 0;
    pfVar28 = pfStack_5c;
    uVar24 = uStack_58;
LAB_ram_4008a356:
    uStack_58 = uVar24;
    pfStack_5c = pfVar28;
    puVar12[0x33] = 0;
    pfVar28 = pfStack_5c;
    uVar24 = uStack_58;
LAB_ram_4008a35a:
    uStack_58 = uVar24;
    pfStack_5c = pfVar28;
    uVar27 = 0;
    cStack_54 = '\x01';
  }
  else {
    puVar12[0x30] = (uint)*(byte *)pfStack_5c;
    pfVar28 = (float *)((int)pfStack_5c + 1);
    uVar24 = uStack_58 - 1;
    if (uStack_58 - 1 < 4) goto LAB_ram_4008a34e;
    puVar12[0x31] = *(undefined4 *)((int)pfStack_5c + 1);
    pfVar28 = (float *)((int)pfStack_5c + 5);
    uVar24 = uStack_58 - 5;
    if (uStack_58 - 5 < 4) goto LAB_ram_4008a352;
    puVar12[0x32] = *(undefined4 *)((int)pfStack_5c + 5);
    pfVar28 = (float *)((int)pfStack_5c + 9);
    uVar24 = uStack_58 - 9;
    if (uStack_58 - 9 < 4) goto LAB_ram_4008a356;
    puVar12[0x33] = *(undefined4 *)((int)pfStack_5c + 9);
    pfVar28 = (float *)((int)pfStack_5c + 0xd);
    uVar24 = uStack_58 - 0xd;
    if (uStack_58 - 0xd < 4) goto LAB_ram_4008a35a;
    uVar27 = *(undefined4 *)((int)pfStack_5c + 0xd);
    pfStack_5c = (float *)((int)pfStack_5c + 0x11);
    uStack_58 = uStack_58 - 0x11;
  }
  puVar12[0x34] = uVar27;
  iVar19 = FUN_ram_40087bc0(&puStack_60,puVar12 + 0x35);
  if (iVar19 != 0) goto LAB_ram_40088d30;
  iVar19 = FUN_ram_40087444(&puStack_60,puVar12 + 0x38,uVar4);
  if (iVar19 != 0) goto LAB_ram_40088d30;
  iVar19 = FUN_ram_40087444(&puStack_60,puVar12 + 0x4e,uVar4);
  if (iVar19 != 0) goto LAB_ram_40088d30;
  if (uStack_58 < 4) {
    fVar43 = 0.0;
    cStack_54 = '\x01';
  }
  else {
    uStack_58 = uStack_58 - 4;
    fVar43 = *pfStack_5c;
    pfStack_5c = pfStack_5c + 1;
  }
  puVar12[100] = fVar43;
  uVar27 = FUN_ram_40085624(&puStack_60);
  puVar12[0x65] = uVar27;
  if (uStack_58 < 4) {
    fVar43 = 0.0;
    cStack_54 = '\x01';
  }
  else {
    uStack_58 = uStack_58 - 4;
    fVar43 = *pfStack_5c;
    pfStack_5c = pfStack_5c + 1;
  }
  puVar12[0x66] = fVar43;
  if (3 < uVar4) {
    FUN_ram_40085624(&puStack_60);
    FUN_ram_40085624(&puStack_60);
    pfVar28 = pfStack_5c;
    uVar24 = uStack_58;
LAB_ram_40089e40:
    uStack_58 = uVar24;
    pfStack_5c = pfVar28;
    iVar19 = -2;
    goto LAB_ram_40088d30;
  }
  iVar19 = FUN_ram_40086fe8(&puStack_60,puVar12 + 0x67);
  if (((iVar19 != 0) || (iVar19 = FUN_ram_40085ab2(&puStack_60,puVar12 + 0x79), iVar19 != 0)) ||
     (iVar19 = FUN_ram_40085ab2(&puStack_60,puVar12 + 0x7f), iVar19 != 0)) goto LAB_ram_40088d30;
  uVar27 = FUN_ram_40085624(&puStack_60);
  puVar12[0x85] = uVar27;
  pfVar28 = pfStack_5c;
  uVar24 = uStack_58;
  if ((cStack_54 != '\0') || (local_b0 = uStack_58, uStack_58 != 0)) goto LAB_ram_40089e40;
  puVar15 = (undefined4 *)puVar12[4];
  if (puVar15 != (undefined4 *)0x0) {
    if ((code *)puVar15[1] == (code *)0x0) {
      puVar34 = (undefined4 *)FUN_ram_40002f1a(0x78c);
      if (puVar34 != (undefined4 *)0x0) {
LAB_ram_4008afc8:
        pcVar25 = FUN_ram_4008561e;
        goto LAB_ram_4008992e;
      }
    }
    else {
      puVar34 = (undefined4 *)(*(code *)puVar15[1])(*puVar15,0x78c);
      if (puVar34 != (undefined4 *)0x0) {
        if (puVar15[1] == 0) goto LAB_ram_4008afc8;
        pcVar25 = (code *)puVar15[2];
LAB_ram_4008992e:
        uVar27 = *puVar15;
        *puVar34 = pcVar25;
        goto LAB_ram_40089934;
      }
    }
LAB_ram_4008a050:
    iVar19 = -3;
    goto LAB_ram_40088d30;
  }
  puVar34 = (undefined4 *)FUN_ram_40002f1a(0x78c);
  if (puVar34 == (undefined4 *)0x0) goto LAB_ram_4008a050;
  *puVar34 = FUN_ram_4008561e;
  uVar27 = 0;
LAB_ram_40089934:
  puVar32 = puVar34 + 4;
  puVar34[1] = uVar27;
  memset(puVar32,0,0x77c);
  puVar15 = puVar34 + 5;
  fVar43 = (float)(uint)puVar12[5];
  puVar14 = (undefined4 *)puVar12[0xf];
  *(ulonglong *)(puVar34 + 4) = (ulonglong)(uint)fVar43;
  FUN_ram_400860c4(puVar15);
  uVar24 = puVar12[0x18];
  if (uVar24 == 0) {
LAB_ram_4008a4c0:
    iVar19 = puVar34[0x18];
    uVar44 = *(undefined8 *)(puVar34 + 4);
    puVar15 = (undefined4 *)puVar12[0x19];
    if (iVar19 != 0) {
      (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
      puVar34[0x18] = 0;
    }
    iVar19 = puVar34[0x1c];
    puVar34[0x19] = 0;
    if (iVar19 != 0) {
      (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
    }
    iVar19 = puVar34[0x1e];
    puVar34[0x1c] = 0;
    puVar34[0x1d] = 0;
    if (iVar19 != 0) {
      (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
    }
    iVar19 = puVar34[0x20];
    puVar34[0x1e] = 0;
    puVar34[0x1f] = 0;
    puVar34[0x1a] = 0;
    puVar34[0x1b] = 0;
    if (iVar19 != 0) {
      (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
      puVar34[0x20] = 0;
    }
    *(undefined1 *)(puVar34 + 0x24) = 0;
    puVar14 = (undefined4 *)puVar12[0x1a];
    puVar34[0x21] = 0;
    puVar34[0x27] = 0;
    puVar34[0x26] = 0;
    puVar34[0x25] = 0;
    uVar24 = puVar12[0x1b];
    if (puVar14 == (undefined4 *)0x0) {
      if (uVar24 != 0) {
        if (((int)((ulonglong)uVar24 * 0x54 >> 0x20) == 0) && (uVar24 * 0x54 - 1 < 0xffffffef)) {
          iVar19 = uVar24 * 0x54 + 0x10;
LAB_ram_4008aff4:
          puVar17 = (undefined4 *)FUN_ram_40002f1a(iVar19);
          if (puVar17 != (undefined4 *)0x0) {
            *puVar17 = FUN_ram_4008561e;
            uVar27 = 0;
            goto LAB_ram_4008a59a;
          }
        }
LAB_ram_4008afa6:
        iVar19 = -3;
        goto LAB_ram_40089d0a;
      }
LAB_ram_4008afac:
      iVar19 = puVar34[0x18];
      if (iVar19 != 0) {
        (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
        puVar34[0x18] = 0;
      }
      puVar34[0x19] = 0;
    }
    else {
      if (uVar24 == 0) goto LAB_ram_4008afac;
      if (((int)((ulonglong)uVar24 * 0x54 >> 0x20) != 0) || (0xffffffee < uVar24 * 0x54 - 1))
      goto LAB_ram_4008afa6;
      puVar18 = (undefined4 *)*puVar14;
      iVar19 = uVar24 * 0x54 + 0x10;
      if (puVar18 == (undefined4 *)0x0) goto LAB_ram_4008aff4;
      if ((code *)puVar18[1] == (code *)0x0) {
        puVar17 = (undefined4 *)FUN_ram_40002f1a(iVar19);
        if (puVar17 == (undefined4 *)0x0) goto LAB_ram_4008afa6;
LAB_ram_4008b0c4:
        pcVar25 = FUN_ram_4008561e;
      }
      else {
        puVar17 = (undefined4 *)(*(code *)puVar18[1])(*puVar18);
        if (puVar17 == (undefined4 *)0x0) goto LAB_ram_4008afa6;
        if (puVar18[1] == 0) goto LAB_ram_4008b0c4;
        pcVar25 = (code *)puVar18[2];
      }
      uVar27 = *puVar18;
      *puVar17 = pcVar25;
LAB_ram_4008a59a:
      puVar38 = puVar17 + 4;
      puVar17[1] = uVar27;
      memset(puVar38,0,uVar24 * 0x54);
      uVar22 = 0;
      puVar18 = puVar38;
      do {
        uVar22 = uVar22 + 1;
        if (puVar14 != (undefined4 *)0x0) {
          uVar29 = puVar14[1];
          puVar18[1] = puVar14[2];
          uVar27 = puVar14[3];
          *puVar18 = uVar29;
          puVar18[2] = uVar27;
          puVar18[3] = puVar14[4];
          uVar27 = puVar14[5];
          puVar18[5] = (int)uVar44;
          puVar18[4] = uVar27;
          FUN_ram_4008566a(puVar18);
          puVar18[0x13] = 0;
          puVar18[0x14] = 0;
          FUN_ram_4009582a(puVar18 + 0xb,1,puVar18 + 0xe,puVar18 + 0x13);
        }
        puVar14 = puVar14 + 6;
        puVar18 = puVar18 + 0x15;
      } while (uVar22 < uVar24);
      iVar19 = puVar34[0x18];
      if (iVar19 != 0) {
        (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
      }
      puVar34[0x18] = puVar38;
      puVar34[0x19] = uVar24;
    }
    iVar19 = FUN_ram_40086a70(puVar34 + 0x1a,puStack_94,3);
    if (iVar19 == 0) {
      uVar27 = puVar12[0x20];
      uVar24 = puVar12[0x1b];
      puVar34[0x22] = (int)*(undefined8 *)(puVar12 + 0x1f);
      puVar34[0x23] = uVar27;
      puVar34[0x21] = uVar24;
      if (uVar24 == 0) {
LAB_ram_4008a6a4:
        *(undefined1 *)(puVar34 + 0x24) = 0;
        uVar27 = puVar12[0x24];
        uVar29 = puVar12[0x25];
        uVar3 = puVar12[0x26];
        uVar30 = puVar12[0x22];
        uVar44 = *(undefined8 *)(puVar34 + 4);
        puVar34[0x29] = puVar12[0x23];
        puVar34[0x2a] = uVar27;
        puVar34[0x2b] = uVar29;
        puVar34[0x2c] = uVar3;
        puVar34[0x28] = uVar30;
        puVar34[0x2d] = (int)uVar44;
        FUN_ram_4008566a(puVar34 + 0x28);
        puVar34[0x3b] = 0;
        puVar34[0x3c] = 0;
        FUN_ram_4009582a(puVar34 + 0x33,1,puVar34 + 0x36,puVar34 + 0x3b);
        uVar27 = puVar12[0x2a];
        uVar29 = puVar12[0x2b];
        uVar3 = puVar12[0x2c];
        uVar30 = puVar12[0x28];
        puVar34[0x3e] = puVar12[0x29];
        puVar34[0x3f] = uVar27;
        puVar34[0x40] = uVar29;
        puVar34[0x41] = uVar3;
        puVar34[0x3d] = uVar30;
        puVar34[0x42] = (int)uVar44;
        FUN_ram_4008566a(puVar34 + 0x3d);
        puVar34[0x50] = 0;
        puVar34[0x51] = 0;
        FUN_ram_4009582a(puVar34 + 0x48,1,puVar34 + 0x4b,puVar34 + 0x50);
        uVar27 = puVar12[0x2d];
        puVar15 = puVar34 + 0x55;
        *(undefined1 *)(puVar34 + 0x53) = 0;
        puVar34[0x52] = uVar27;
        puVar34[0x54] = 0;
        uVar41 = *(ulonglong *)(puVar34 + 4);
        puVar14 = (undefined4 *)puVar12[0x2e];
        FUN_ram_4008681a(puVar15);
        uVar27 = puVar12[0x32];
        uVar29 = puVar12[0x33];
        uVar3 = puVar12[0x34];
        uVar30 = puVar12[0x30];
        puVar34[0x56] = puVar12[0x31];
        puVar34[0x57] = uVar27;
        puVar34[0x58] = uVar29;
        puVar34[0x59] = uVar3;
        puVar34[0x55] = uVar30;
        puVar34[0x5a] = (int)uVar41;
        FUN_ram_4008566a(puVar15);
        puVar34[0x68] = 0;
        puVar34[0x69] = 0;
        FUN_ram_4009582a(puVar34 + 0x60,1,puVar34 + 99,puVar34 + 0x68);
        iVar19 = FUN_ram_40086a70(puVar34 + 0x6a,puVar12 + 0x35,1);
        if (iVar19 == 0) {
          uVar27 = puVar12[0x65];
          uVar29 = puVar12[0x66];
          puVar34[0xa0] = puVar12[100];
          puVar34[0xa1] = uVar27;
          puVar34[0xa2] = uVar29;
          iVar19 = FUN_ram_40088578(uVar41 & 0xffffffff,puVar34 + 0x70,puVar12 + 0x38);
          if ((iVar19 == 0) &&
             (iVar19 = FUN_ram_40088578(uVar41 & 0xffffffff,puVar34 + 0x87,puVar12 + 0x4e),
             iVar19 == 0)) {
            puVar34[0x9f] = 1;
            if (puVar14 == (undefined4 *)0x0) {
              puVar18 = (undefined4 *)FUN_ram_40002f1a(0x14);
              if (puVar18 == (undefined4 *)0x0) goto LAB_ram_4008b3e4;
              *puVar18 = FUN_ram_4008561e;
              uVar27 = 0;
            }
            else {
              if ((code *)puVar14[1] == (code *)0x0) {
                puVar18 = (undefined4 *)FUN_ram_40002f1a(0x14);
                if (puVar18 == (undefined4 *)0x0) goto LAB_ram_4008b3e4;
LAB_ram_4008b40c:
                pcVar25 = FUN_ram_4008561e;
              }
              else {
                puVar18 = (undefined4 *)(*(code *)puVar14[1])(*puVar14,0x14);
                if (puVar18 == (undefined4 *)0x0) {
LAB_ram_4008b3e4:
                  puVar34[0x9e] = 0;
                  FUN_ram_4008681a(puVar15);
                  iVar19 = -3;
                  goto LAB_ram_40089d0a;
                }
                if (puVar14[1] == 0) goto LAB_ram_4008b40c;
                pcVar25 = (code *)puVar14[2];
              }
              uVar27 = *puVar14;
              *puVar18 = pcVar25;
            }
            *(undefined1 *)(puVar18 + 4) = 0;
            *(undefined1 *)((int)puVar18 + 0x11) = 0;
            *(undefined1 *)((int)puVar18 + 0x12) = 0;
            *(undefined1 *)((int)puVar18 + 0x13) = 0;
            puVar18[1] = uVar27;
            puVar34[0x9e] = puVar18 + 4;
            *(undefined1 *)(puVar34 + 0xa3) = 0;
            puVar34[0xa4] = 0;
            uVar44 = *(undefined8 *)(puVar34 + 4);
            FUN_ram_4008556e(puVar34 + 0x1a5);
            iVar19 = puVar34[0x1b0];
            if (iVar19 != 0) {
              (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
              puVar34[0x1b0] = 0;
            }
            puVar34[0x1b7] = 0;
            iVar19 = FUN_ram_40088068(puVar34 + 0x1a5,puVar12 + 0x67);
            if ((iVar19 == 0) &&
               (iVar19 = FUN_ram_400865d8(puVar34 + 0x1b0,puVar12 + 0x71), iVar19 == 0)) {
              uVar27 = puVar12[0x7c];
              uVar29 = puVar12[0x7d];
              uVar3 = puVar12[0x7e];
              uVar30 = puVar12[0x7a];
              puVar34[0x1b9] = puVar12[0x7b];
              puVar34[0x1ba] = uVar27;
              puVar34[0x1bb] = uVar29;
              puVar34[0x1bc] = uVar3;
              puVar34[0x1b8] = uVar30;
              puVar34[0x1bd] = (int)uVar44;
              FUN_ram_4008566a(puVar34 + 0x1b8);
              puVar34[0x1cb] = 0;
              puVar34[0x1cc] = 0;
              FUN_ram_4009582a(puVar34 + 0x1c3,1,puVar34 + 0x1c6,puVar34 + 0x1cb);
              uVar27 = puVar12[0x84];
              uVar29 = puVar12[0x81];
              uVar3 = puVar12[0x82];
              uVar30 = puVar12[0x83];
              puVar34[0x1cd] = puVar12[0x80];
              puVar34[0x1d1] = uVar27;
              puVar34[0x1ce] = uVar29;
              puVar34[0x1cf] = uVar3;
              puVar34[0x1d0] = uVar30;
              puVar34[0x1d2] = (int)uVar44;
              FUN_ram_4008566a(puVar34 + 0x1cd);
              puVar34[0x1e0] = 0;
              puVar34[0x1e1] = 0;
              FUN_ram_4009582a(puVar34 + 0x1d8,1,puVar34 + 0x1db,puVar34 + 0x1e0);
              puVar34[0x1e2] = puVar12[0x85];
              *(undefined1 *)(param_1 + 0x14) = 1;
              param_1[0x13] = (int)*(undefined8 *)(puVar12 + 0xe);
              uVar44 = *(undefined8 *)(puVar12 + 6);
              param_1[3] = puVar21;
              param_1[0xc] = (int)uVar44;
              uVar44 = *(undefined8 *)(puVar12 + 7);
              param_1[4] = puVar32;
              param_1[0xd] = (int)uVar44;
              param_1[0xe] = (int)*(undefined8 *)(puVar12 + 8);
              param_1[0xf] = (int)*(undefined8 *)(puVar12 + 9);
              param_1[0x10] = (int)*(undefined8 *)(puVar12 + 10);
              param_1[0x11] = (int)*(undefined8 *)(puVar12 + 0xb);
              uVar27 = puVar12[0xc];
              param_1[5] = param_1[0xc];
              param_1[0x12] = uVar27;
              param_1[6] = param_1[0xd];
              param_1[7] = param_1[0xe];
              param_1[8] = param_1[0xf];
              param_1[10] = param_1[0x11];
              iVar19 = puVar34[5];
              param_1[9] = param_1[0x10];
              param_1[0xb] = uVar27;
              if (iVar19 != 0) {
                uVar24 = puVar34[6];
                iVar35 = 0;
                uVar22 = 0;
                if (uVar24 != 0) {
                  do {
                    piVar40 = (int *)(iVar19 + iVar35);
                    if (piVar40 != (int *)0x0) {
                      iVar19 = *(int *)(iVar19 + iVar35);
                      if ((iVar19 != 0) && (uVar24 = piVar40[1], uVar24 != 0)) {
                        iVar36 = 0;
                        uVar37 = 0;
                        do {
                          iVar31 = iVar19 + iVar36;
                          while (iVar31 != 0) {
                            *(undefined4 *)(iVar31 + 0x4c) = 0;
                            *(undefined4 *)(iVar31 + 0x50) = 0;
                            FUN_ram_4009582a(iVar31 + 0x2c,1,iVar31 + 0x38,iVar31 + 0x4c);
                            uVar24 = piVar40[1];
                            uVar37 = uVar37 + 1;
                            iVar36 = iVar36 + 0x54;
                            if (uVar24 <= uVar37) goto LAB_ram_4008aa60;
                            iVar19 = *piVar40;
                            iVar31 = iVar19 + iVar36;
                          }
                          uVar37 = uVar37 + 1;
                          iVar36 = iVar36 + 0x54;
                        } while (uVar37 < uVar24);
                      }
LAB_ram_4008aa60:
                      iVar19 = piVar40[2];
                      if ((iVar19 != 0) && (uVar24 = piVar40[3], uVar24 != 0)) {
                        iVar36 = 0;
                        uVar37 = 0;
                        do {
                          iVar31 = iVar19 + iVar36;
                          while (iVar31 != 0) {
                            *(undefined4 *)(iVar31 + 0x4c) = 0;
                            *(undefined4 *)(iVar31 + 0x50) = 0;
                            FUN_ram_4009582a(iVar31 + 0x2c,1,iVar31 + 0x38,iVar31 + 0x4c);
                            uVar24 = piVar40[3];
                            uVar37 = uVar37 + 1;
                            iVar36 = iVar36 + 0x54;
                            if (uVar24 <= uVar37) goto LAB_ram_4008aac4;
                            iVar19 = piVar40[2];
                            iVar31 = iVar19 + iVar36;
                          }
                          uVar37 = uVar37 + 1;
                          iVar36 = iVar36 + 0x54;
                        } while (uVar37 < uVar24);
                      }
LAB_ram_4008aac4:
                      if (piVar40[0xc] != 0) {
                        memset(piVar40[0xc],0,(uint)*(ushort *)((int)piVar40 + 0x12) << 2)
                        ;
                      }
                      uVar24 = puVar34[6];
                      piVar40[0x16] = 0;
                    }
                    uVar22 = uVar22 + 1;
                    iVar35 = iVar35 + 0x5c;
                    if (uVar24 <= uVar22) break;
                    iVar19 = puVar34[5];
                  } while( true );
                }
                *(undefined2 *)(puVar34 + 0x15) = 0;
                puVar34[0x16] = 0;
              }
              iVar19 = puVar34[0x18];
              if ((iVar19 != 0) && (uVar24 = puVar34[0x19], uVar24 != 0)) {
                iVar35 = 0;
                uVar22 = 0;
                do {
                  iVar36 = iVar19 + iVar35;
                  while (iVar36 != 0) {
                    *(undefined4 *)(iVar36 + 0x4c) = 0;
                    *(undefined4 *)(iVar36 + 0x50) = 0;
                    FUN_ram_4009582a(iVar36 + 0x2c,1,iVar36 + 0x38,iVar36 + 0x4c);
                    uVar24 = puVar34[0x19];
                    uVar22 = uVar22 + 1;
                    iVar35 = iVar35 + 0x54;
                    if (uVar24 <= uVar22) goto LAB_ram_4008ab6e;
                    iVar19 = puVar34[0x18];
                    iVar36 = iVar19 + iVar35;
                  }
                  uVar22 = uVar22 + 1;
                  iVar35 = iVar35 + 0x54;
                } while (uVar22 < uVar24);
              }
LAB_ram_4008ab6e:
              *(undefined1 *)(puVar34 + 0x24) = 0;
              puVar34[0x3b] = 0;
              puVar34[0x3c] = 0;
              FUN_ram_4009582a(puVar34 + 0x33,1,puVar34 + 0x36,puVar34 + 0x3b);
              puVar34[0x50] = 0;
              puVar34[0x51] = 0;
              FUN_ram_4009582a(puVar34 + 0x48,1,puVar34 + 0x4b,puVar34 + 0x50);
              *(undefined1 *)(puVar34 + 0x53) = 0;
              puVar34[0x68] = 0;
              puVar34[0x69] = 0;
              FUN_ram_4009582a(puVar34 + 0x60,1,puVar34 + 99,puVar34 + 0x68);
              iVar19 = puVar34[0x70];
              if ((iVar19 != 0) && (uVar24 = puVar34[0x71], uVar24 != 0)) {
                iVar35 = 0;
                uVar22 = 0;
                do {
                  iVar36 = iVar19 + iVar35;
                  while (iVar36 != 0) {
                    *(undefined4 *)(iVar36 + 0x4c) = 0;
                    *(undefined4 *)(iVar36 + 0x50) = 0;
                    FUN_ram_4009582a(iVar36 + 0x2c,1,iVar36 + 0x38,iVar36 + 0x4c);
                    uVar24 = puVar34[0x71];
                    uVar22 = uVar22 + 1;
                    iVar35 = iVar35 + 0x54;
                    if (uVar24 <= uVar22) goto LAB_ram_4008ac14;
                    iVar19 = puVar34[0x70];
                    iVar36 = iVar19 + iVar35;
                  }
                  uVar22 = uVar22 + 1;
                  iVar35 = iVar35 + 0x54;
                } while (uVar22 < uVar24);
              }
LAB_ram_4008ac14:
              iVar19 = puVar34[0x72];
              if ((iVar19 != 0) && (uVar24 = puVar34[0x73], uVar24 != 0)) {
                iVar35 = 0;
                uVar22 = 0;
                do {
                  iVar36 = iVar19 + iVar35;
                  while (iVar36 != 0) {
                    *(undefined4 *)(iVar36 + 0x4c) = 0;
                    *(undefined4 *)(iVar36 + 0x50) = 0;
                    FUN_ram_4009582a(iVar36 + 0x2c,1,iVar36 + 0x38,iVar36 + 0x4c);
                    uVar24 = puVar34[0x73];
                    uVar22 = uVar22 + 1;
                    iVar35 = iVar35 + 0x54;
                    if (uVar24 <= uVar22) goto LAB_ram_4008ac76;
                    iVar19 = puVar34[0x72];
                    iVar36 = iVar19 + iVar35;
                  }
                  uVar22 = uVar22 + 1;
                  iVar35 = iVar35 + 0x54;
                } while (uVar22 < uVar24);
              }
LAB_ram_4008ac76:
              if (puVar34[0x7c] != 0) {
                memset(puVar34[0x7c],0,(uint)*(ushort *)((int)puVar34 + 0x1d2) << 2);
              }
              iVar19 = puVar34[0x87];
              puVar34[0x86] = 0;
              if ((iVar19 != 0) && (uVar24 = puVar34[0x88], uVar24 != 0)) {
                iVar35 = 0;
                uVar22 = 0;
                do {
                  iVar36 = iVar19 + iVar35;
                  while (iVar36 != 0) {
                    *(undefined4 *)(iVar36 + 0x4c) = 0;
                    *(undefined4 *)(iVar36 + 0x50) = 0;
                    FUN_ram_4009582a(iVar36 + 0x2c,1,iVar36 + 0x38,iVar36 + 0x4c);
                    uVar24 = puVar34[0x88];
                    uVar22 = uVar22 + 1;
                    iVar35 = iVar35 + 0x54;
                    if (uVar24 <= uVar22) goto LAB_ram_4008acee;
                    iVar19 = puVar34[0x87];
                    iVar36 = iVar19 + iVar35;
                  }
                  uVar22 = uVar22 + 1;
                  iVar35 = iVar35 + 0x54;
                } while (uVar22 < uVar24);
              }
LAB_ram_4008acee:
              iVar19 = puVar34[0x89];
              if ((iVar19 != 0) && (uVar24 = puVar34[0x8a], uVar24 != 0)) {
                iVar35 = 0;
                do {
                  iVar36 = iVar19 + iVar35;
                  while (iVar36 != 0) {
                    *(undefined4 *)(iVar36 + 0x4c) = 0;
                    *(undefined4 *)(iVar36 + 0x50) = 0;
                    FUN_ram_4009582a(iVar36 + 0x2c,1,iVar36 + 0x38,iVar36 + 0x4c);
                    uVar24 = puVar34[0x8a];
                    iVar35 = iVar35 + 0x54;
                    local_b0 = local_b0 + 1;
                    if (uVar24 <= local_b0) goto LAB_ram_4008ad56;
                    iVar19 = puVar34[0x89];
                    iVar36 = iVar19 + iVar35;
                  }
                  iVar35 = iVar35 + 0x54;
                  local_b0 = local_b0 + 1;
                } while (local_b0 < uVar24);
              }
LAB_ram_4008ad56:
              if (puVar34[0x93] != 0) {
                memset(puVar34[0x93],0,(uint)*(ushort *)((int)puVar34 + 0x22e) << 2);
              }
              puVar34[0x9d] = 0;
              *(undefined1 *)(puVar34 + 0xa3) = 0;
              if (puVar34[0x1ad] != 0) {
                memset(puVar34[0x1ad],0,(uint)*(ushort *)((int)puVar34 + 0x696) << 2);
              }
              puVar34[0x1b7] = 0;
              puVar34[0x1cb] = 0;
              puVar34[0x1cc] = 0;
              FUN_ram_4009582a(puVar34 + 0x1c3,1,puVar34 + 0x1c6,puVar34 + 0x1cb);
              puVar34[0x1e0] = 0;
              puVar34[0x1e1] = 0;
              FUN_ram_4009582a(puVar34 + 0x1d8,1,puVar34 + 0x1db,puVar34 + 0x1e0);
              return 0;
            }
            goto LAB_ram_40089d0a;
          }
        }
        FUN_ram_4008681a(puVar15);
      }
      else {
        if ((uVar24 >> 0x1e == 0) && (iVar19 = uVar24 * 4, iVar19 - 1U < 0xffffffef)) {
          if (puVar15 == (undefined4 *)0x0) {
            puVar14 = (undefined4 *)FUN_ram_40002f1a(iVar19 + 0x10);
            if (puVar14 != (undefined4 *)0x0) {
              *puVar14 = FUN_ram_4008561e;
              uVar27 = 0;
LAB_ram_4008a68e:
              puVar14[1] = uVar27;
              uVar27 = memset(puVar14 + 4,0,iVar19);
              puVar34[0x20] = uVar27;
              goto LAB_ram_4008a6a4;
            }
          }
          else if ((code *)puVar15[1] == (code *)0x0) {
            puVar14 = (undefined4 *)FUN_ram_40002f1a(iVar19 + 0x10);
            if (puVar14 != (undefined4 *)0x0) {
LAB_ram_4008b3c6:
              pcVar25 = FUN_ram_4008561e;
              goto LAB_ram_4008a688;
            }
          }
          else {
            puVar14 = (undefined4 *)(*(code *)puVar15[1])(*puVar15);
            if (puVar14 != (undefined4 *)0x0) {
              if (puVar15[1] == 0) goto LAB_ram_4008b3c6;
              pcVar25 = (code *)puVar15[2];
LAB_ram_4008a688:
              uVar27 = *puVar15;
              *puVar14 = pcVar25;
              goto LAB_ram_4008a68e;
            }
          }
        }
        puVar34[0x20] = 0;
        FUN_ram_40085a26(puVar34 + 0x18);
        iVar19 = -3;
      }
    }
    else {
      iVar35 = puVar34[0x18];
      if (iVar35 != 0) {
        (**(code **)(iVar35 + -0x10))(*(undefined4 *)(iVar35 + -0xc),iVar35 + -0x10);
        puVar34[0x18] = 0;
      }
      iVar35 = puVar34[0x1c];
      puVar34[0x19] = 0;
      if (iVar35 != 0) {
        (**(code **)(iVar35 + -0x10))(*(undefined4 *)(iVar35 + -0xc),iVar35 + -0x10);
      }
      iVar35 = puVar34[0x1e];
      puVar34[0x1c] = 0;
      puVar34[0x1d] = 0;
      if (iVar35 != 0) {
        (**(code **)(iVar35 + -0x10))(*(undefined4 *)(iVar35 + -0xc),iVar35 + -0x10);
      }
      iVar35 = puVar34[0x20];
      puVar34[0x1e] = 0;
      puVar34[0x1f] = 0;
      puVar34[0x1a] = 0;
      puVar34[0x1b] = 0;
      if (iVar35 != 0) {
        (**(code **)(iVar35 + -0x10))(*(undefined4 *)(iVar35 + -0xc),iVar35 + -0x10);
        puVar34[0x20] = 0;
      }
      puVar34[0x21] = 0;
      *(undefined1 *)(puVar34 + 0x24) = 0;
      puVar34[0x27] = 0;
      puVar34[0x26] = 0;
      puVar34[0x25] = 0;
    }
  }
  else {
    uVar44 = *(undefined8 *)(puVar12 + 0x11);
    uVar42 = *(undefined8 *)(puVar12 + 0x12);
    uVar45 = *(undefined8 *)(puVar12 + 0x13);
    *(undefined8 *)(puVar34 + 0x11) = *(undefined8 *)(puVar12 + 0x10);
    *(undefined8 *)(puVar34 + 0x12) = uVar44;
    *(undefined8 *)(puVar34 + 0x13) = uVar42;
    *(undefined8 *)(puVar34 + 0x14) = uVar45;
    if (((int)((ulonglong)uVar24 * 0x5c >> 0x20) == 0) &&
       (iVar19 = uVar24 * 0x5c, iVar19 - 1U < 0xffffffef)) {
      if (puVar14 == (undefined4 *)0x0) {
        puVar18 = (undefined4 *)FUN_ram_40002f1a(iVar19 + 0x10);
        if (puVar18 == (undefined4 *)0x0) goto LAB_ram_4008b038;
        *puVar18 = FUN_ram_4008561e;
        uVar27 = 0;
LAB_ram_400899d0:
        piVar40 = puVar18 + 4;
        puVar18[1] = uVar27;
        memset(piVar40,0,iVar19);
        iVar19 = puVar12[0x18];
        puVar34[5] = piVar40;
        puVar34[6] = iVar19;
        if (iVar19 == 0) {
LAB_ram_4008adcc:
          uVar27 = puVar12[0x16];
          iVar19 = puVar34[9];
          puVar18 = (undefined4 *)puVar12[0x14];
          puVar34[7] = puVar12[0x15];
          puVar34[8] = uVar27;
          if (iVar19 != 0) {
            (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
            puVar34[9] = 0;
          }
          iVar19 = puVar34[0xb];
          if (iVar19 != 0) {
            (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
            puVar34[0xb] = 0;
          }
          iVar19 = puVar12[0x16];
          puVar34[10] = 0;
          puVar34[0xc] = 0;
          if (iVar19 == 0) {
LAB_ram_4008aed0:
            uVar24 = puVar12[0x18];
            puVar34[0xe] = uVar24 << 1;
            if (((uVar24 << 1 == 0) || ((uVar24 & 0x7fffffff) >> 0x1d != 0)) ||
               (iVar19 = uVar24 * 8, 0xffffffee < iVar19 - 1U)) {
              uVar27 = 0;
            }
            else {
              if (puVar14 == (undefined4 *)0x0) {
                puVar18 = (undefined4 *)FUN_ram_40002f1a(iVar19 + 0x10);
                uVar27 = 0;
                if (puVar18 == (undefined4 *)0x0) goto LAB_ram_4008af2c;
                *puVar18 = FUN_ram_4008561e;
                uVar27 = 0;
LAB_ram_4008af18:
                puVar18[1] = uVar27;
                uVar27 = memset(puVar18 + 4,0,iVar19);
              }
              else {
                if ((code *)puVar14[1] == (code *)0x0) {
                  puVar18 = (undefined4 *)FUN_ram_40002f1a(iVar19 + 0x10);
                  uVar27 = 0;
                  if (puVar18 == (undefined4 *)0x0) goto LAB_ram_4008af2c;
                  pcVar25 = FUN_ram_4008561e;
LAB_ram_4008af14:
                  uVar27 = *puVar14;
                  *puVar18 = pcVar25;
                  goto LAB_ram_4008af18;
                }
                puVar18 = (undefined4 *)(*(code *)puVar14[1])(*puVar14);
                uVar27 = 0;
                if (puVar18 != (undefined4 *)0x0) {
                  if (puVar14[1] == 0) {
                    pcVar25 = FUN_ram_4008561e;
                  }
                  else {
                    pcVar25 = (code *)puVar14[2];
                  }
                  goto LAB_ram_4008af14;
                }
              }
              uVar24 = puVar12[0x18];
            }
LAB_ram_4008af2c:
            puVar34[0xd] = uVar27;
            if (uVar24 == 0) {
              puVar34[0xf] = 0;
LAB_ram_4008af8c:
              puVar34[0x10] = 0;
            }
            else {
              uVar22 = uVar24 >> 0x1e;
              if ((uVar22 == 0) && (iVar19 = uVar24 * 4, iVar19 - 1U < 0xffffffef)) {
                if (puVar14 == (undefined4 *)0x0) {
                  puVar18 = (undefined4 *)FUN_ram_40002f1a(iVar19 + 0x10);
                  if (puVar18 == (undefined4 *)0x0) goto LAB_ram_4008a450;
                  *puVar18 = FUN_ram_4008561e;
                  uVar27 = 0;
LAB_ram_4008af6e:
                  puVar18[1] = uVar27;
                  uVar27 = memset(puVar18 + 4,0,iVar19);
                }
                else {
                  if ((code *)puVar14[1] == (code *)0x0) {
                    puVar18 = (undefined4 *)FUN_ram_40002f1a(iVar19 + 0x10);
                    if (puVar18 == (undefined4 *)0x0) goto LAB_ram_4008a450;
                    pcVar25 = FUN_ram_4008561e;
LAB_ram_4008af6a:
                    uVar27 = *puVar14;
                    *puVar18 = pcVar25;
                    goto LAB_ram_4008af6e;
                  }
                  puVar18 = (undefined4 *)(*(code *)puVar14[1])(*puVar14);
                  uVar27 = 0;
                  if (puVar18 != (undefined4 *)0x0) {
                    if (puVar14[1] == 0) {
                      pcVar25 = FUN_ram_4008561e;
                    }
                    else {
                      pcVar25 = (code *)puVar14[2];
                    }
                    goto LAB_ram_4008af6a;
                  }
                }
                uVar24 = puVar12[0x18];
                puVar34[0xf] = uVar27;
                uVar22 = uVar24 >> 0x1e;
                if (uVar24 == 0) goto LAB_ram_4008af8c;
              }
              else {
LAB_ram_4008a450:
                puVar34[0xf] = 0;
              }
              if ((uVar22 != 0) || (iVar19 = uVar24 * 4, 0xffffffee < iVar19 - 1U))
              goto LAB_ram_4008af8c;
              if (puVar14 != (undefined4 *)0x0) {
                if ((code *)puVar14[1] == (code *)0x0) {
                  puVar18 = (undefined4 *)FUN_ram_40002f1a(iVar19 + 0x10);
                  if (puVar18 != (undefined4 *)0x0) {
LAB_ram_4008b2f6:
                    pcVar25 = FUN_ram_4008561e;
                    goto LAB_ram_4008a48c;
                  }
                }
                else {
                  puVar18 = (undefined4 *)(*(code *)puVar14[1])(*puVar14);
                  if (puVar18 != (undefined4 *)0x0) {
                    if (puVar14[1] == 0) goto LAB_ram_4008b2f6;
                    pcVar25 = (code *)puVar14[2];
LAB_ram_4008a48c:
                    uStack_9c = *puVar14;
                    *puVar18 = pcVar25;
                    goto LAB_ram_4008a494;
                  }
                }
                goto LAB_ram_4008af8c;
              }
              puVar18 = (undefined4 *)FUN_ram_40002f1a(iVar19 + 0x10);
              if (puVar18 == (undefined4 *)0x0) goto LAB_ram_4008af8c;
              *puVar18 = FUN_ram_4008561e;
              uStack_9c = 0;
LAB_ram_4008a494:
              puVar18[1] = uStack_9c;
              uVar27 = memset(puVar18 + 4,0,iVar19);
              puVar34[0x10] = uVar27;
              if ((puVar34[0xd] != 0) && (puVar34[0xf] != 0)) {
                *(undefined2 *)(puVar34 + 0x15) = 0;
                puVar34[0x16] = 0;
                puVar34[0x17] = 0;
                goto LAB_ram_4008a4c0;
              }
            }
            iVar19 = -3;
            FUN_ram_400860c4(puVar15);
          }
          else {
            piVar11 = (int *)puVar12[0x15];
            piVar40 = piVar11 + iVar19 * 7;
            uVar24 = 1;
            do {
              if (*piVar11 == 0) {
                uVar22 = (uint)*(ushort *)(piVar11 + 2);
                if ((uint)*(ushort *)(piVar11 + 2) < (uint)*(ushort *)((int)piVar11 + 10)) {
                  uVar22 = (uint)*(ushort *)((int)piVar11 + 10);
                }
                if (uVar24 < uVar22) {
                  uVar24 = uVar22;
                }
              }
              piVar11 = piVar11 + 7;
            } while (piVar40 != piVar11);
            iVar19 = uVar24 * 4;
            iVar35 = iVar19 + 0x10;
            if (puVar18 == (undefined4 *)0x0) {
              puVar18 = (undefined4 *)FUN_ram_40002f1a(iVar35);
              if (puVar18 == (undefined4 *)0x0) {
                puVar34[9] = 0;
              }
              else {
                *puVar18 = FUN_ram_4008561e;
                puVar18[1] = 0;
                uVar27 = memset(puVar18 + 4,0,iVar19);
                puVar34[9] = uVar27;
              }
              puVar17 = (undefined4 *)FUN_ram_40002f1a(iVar35);
              if (puVar17 != (undefined4 *)0x0) {
                *puVar17 = FUN_ram_4008561e;
                uVar27 = 0;
                goto LAB_ram_4008aeae;
              }
            }
            else {
              if ((code *)puVar18[1] == (code *)0x0) {
                puVar17 = (undefined4 *)FUN_ram_40002f1a(iVar35);
                if (puVar17 != (undefined4 *)0x0) goto LAB_ram_4008ae5e;
                puVar34[9] = 0;
LAB_ram_4008b3a2:
                puVar17 = (undefined4 *)FUN_ram_40002f1a(iVar35);
                if (puVar17 == (undefined4 *)0x0) goto LAB_ram_4008b3aa;
LAB_ram_4008b3d2:
                pcVar25 = FUN_ram_4008561e;
              }
              else {
                puVar17 = (undefined4 *)(*(code *)puVar18[1])(*puVar18,iVar35);
                if (puVar17 == (undefined4 *)0x0) {
                  puVar34[9] = 0;
                }
                else {
LAB_ram_4008ae5e:
                  pcVar25 = FUN_ram_4008561e;
                  if (puVar18[1] != 0) {
                    pcVar25 = (code *)puVar18[2];
                  }
                  uVar27 = *puVar18;
                  *puVar17 = pcVar25;
                  puVar17[1] = uVar27;
                  uVar27 = memset(puVar17 + 4,0,iVar19);
                  puVar34[9] = uVar27;
                }
                if ((code *)puVar18[1] == (code *)0x0) goto LAB_ram_4008b3a2;
                puVar17 = (undefined4 *)(*(code *)puVar18[1])(*puVar18,iVar35);
                if (puVar17 == (undefined4 *)0x0) goto LAB_ram_4008b3aa;
                if (puVar18[1] == 0) goto LAB_ram_4008b3d2;
                pcVar25 = (code *)puVar18[2];
              }
              uVar27 = *puVar18;
              *puVar17 = pcVar25;
LAB_ram_4008aeae:
              puVar17[1] = uVar27;
              uVar27 = memset(puVar17 + 4,0,iVar19);
              puVar34[0xb] = uVar27;
              if (puVar34[9] != 0) {
                puVar34[10] = uVar24;
                puVar34[0xc] = uVar24;
                goto LAB_ram_4008aed0;
              }
            }
LAB_ram_4008b3aa:
            puVar34[9] = 0;
            puVar34[0xb] = 0;
            puVar34[10] = 0;
            puVar34[0xc] = 0;
            FUN_ram_400860c4(puVar15);
            iVar19 = -3;
          }
        }
        else {
          puVar18 = (undefined4 *)puVar12[0x17];
          uVar24 = 0;
          iVar36 = 0x58;
          iVar35 = 0x5c;
          do {
            iVar19 = *piVar40;
            if (iVar19 != 0) {
              (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
              *piVar40 = 0;
            }
            iVar19 = piVar40[2];
            piVar40[1] = 0;
            if (iVar19 != 0) {
              (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
              piVar40[2] = 0;
            }
            iVar19 = piVar40[5];
            piVar40[3] = 0;
            if (iVar19 != 0) {
              (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
              piVar40[5] = 0;
            }
            iVar19 = piVar40[6];
            if (iVar19 != 0) {
              (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
              piVar40[6] = 0;
            }
            iVar19 = piVar40[7];
            if (iVar19 != 0) {
              (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
              piVar40[7] = 0;
            }
            iVar19 = piVar40[8];
            if (iVar19 != 0) {
              (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
              piVar40[8] = 0;
            }
            iVar19 = piVar40[0xc];
            if (iVar19 != 0) {
              (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
              piVar40[0xc] = 0;
            }
            iVar19 = piVar40[0xd];
            if (iVar19 != 0) {
              (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
              piVar40[0xd] = 0;
            }
            iVar19 = piVar40[0xe];
            if (iVar19 != 0) {
              (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
              piVar40[0xe] = 0;
            }
            iVar19 = piVar40[0xf];
            piVar40[4] = 0;
            piVar40[9] = 0;
            piVar40[10] = 0;
            piVar40[0xb] = 0;
            if (iVar19 != 0) {
              (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
              piVar40[0xf] = 0;
            }
            piVar40[0x16] = 0;
            if (puVar18 != (undefined4 *)0x0) {
              puVar17 = (undefined4 *)*puVar18;
              uVar22 = puVar18[1];
              if (puVar17 == (undefined4 *)0x0) {
                if (uVar22 == 0) goto LAB_ram_4008a3ac;
                if (((int)((ulonglong)uVar22 * 0x54 >> 0x20) == 0) &&
                   (uVar22 * 0x54 - 1 < 0xffffffef)) {
                  iVar19 = uVar22 * 0x54 + 0x10;
LAB_ram_4008a430:
                  puVar16 = (undefined4 *)FUN_ram_40002f1a(iVar19);
                  if (puVar16 == (undefined4 *)0x0) goto LAB_ram_4008a3a8;
                  *puVar16 = FUN_ram_4008561e;
                  uVar27 = 0;
LAB_ram_40089b62:
                  puVar39 = puVar16 + 4;
                  puVar16[1] = uVar27;
                  memset(puVar39,0,uVar22 * 0x54);
                  uVar37 = 0;
                  puVar38 = puVar39;
                  do {
                    uVar37 = uVar37 + 1;
                    if (puVar17 != (undefined4 *)0x0) {
                      uVar29 = puVar17[1];
                      puVar38[1] = puVar17[2];
                      uVar27 = puVar17[3];
                      *puVar38 = uVar29;
                      puVar38[2] = uVar27;
                      puVar38[3] = puVar17[4];
                      uVar27 = puVar17[5];
                      puVar38[5] = fVar43;
                      puVar38[4] = uVar27;
                      FUN_ram_4008566a(puVar38);
                      puVar38[0x13] = 0;
                      puVar38[0x14] = 0;
                      FUN_ram_4009582a(puVar38 + 0xb,1,puVar38 + 0xe,puVar38 + 0x13);
                    }
                    puVar17 = puVar17 + 6;
                    puVar38 = puVar38 + 0x15;
                  } while (uVar37 < uVar22);
                  iVar19 = *piVar40;
                  if (iVar19 != 0) {
                    (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
                  }
                  puVar17 = (undefined4 *)puVar18[2];
                  piVar40[1] = uVar22;
                  *piVar40 = (int)puVar39;
                  uVar22 = puVar18[3];
                  goto joined_r0x40089bfc;
                }
                goto LAB_ram_4008a3a8;
              }
              if (uVar22 != 0) {
                if (((int)((ulonglong)uVar22 * 0x54 >> 0x20) != 0) ||
                   (0xffffffee < uVar22 * 0x54 - 1)) goto LAB_ram_4008a3a8;
                puVar38 = (undefined4 *)*puVar17;
                iVar19 = uVar22 * 0x54 + 0x10;
                if (puVar38 == (undefined4 *)0x0) goto LAB_ram_4008a430;
                if ((code *)puVar38[1] == (code *)0x0) {
                  puVar16 = (undefined4 *)FUN_ram_40002f1a(iVar19);
                  if (puVar16 != (undefined4 *)0x0) {
                    pcVar25 = FUN_ram_4008561e;
LAB_ram_40089b5c:
                    uVar27 = *puVar38;
                    *puVar16 = pcVar25;
                    goto LAB_ram_40089b62;
                  }
                }
                else {
                  puVar16 = (undefined4 *)(*(code *)puVar38[1])(*puVar38);
                  if (puVar16 != (undefined4 *)0x0) {
                    if (puVar38[1] == 0) {
                      pcVar25 = FUN_ram_4008561e;
                    }
                    else {
                      pcVar25 = (code *)puVar38[2];
                    }
                    goto LAB_ram_40089b5c;
                  }
                }
                goto LAB_ram_4008a3a8;
              }
LAB_ram_4008a3ac:
              iVar19 = *piVar40;
              if (iVar19 != 0) {
                (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
                *piVar40 = 0;
              }
              puVar17 = (undefined4 *)puVar18[2];
              piVar40[1] = 0;
              uVar22 = puVar18[3];
joined_r0x40089bfc:
              if (puVar17 == (undefined4 *)0x0) {
                if (uVar22 != 0) {
                  if (((int)((ulonglong)uVar22 * 0x54 >> 0x20) == 0) &&
                     (uVar22 * 0x54 - 1 < 0xffffffef)) {
                    iVar19 = uVar22 * 0x54 + 0x10;
LAB_ram_4008a3f2:
                    puVar16 = (undefined4 *)FUN_ram_40002f1a(iVar19);
                    if (puVar16 != (undefined4 *)0x0) {
                      *puVar16 = FUN_ram_4008561e;
                      uVar27 = 0;
                      goto LAB_ram_40089c5e;
                    }
                  }
LAB_ram_4008a3a8:
                  iVar19 = -3;
                  goto LAB_ram_40089d04;
                }
LAB_ram_4008aaea:
                iVar19 = piVar40[2];
                if (iVar19 != 0) {
                  (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
                  piVar40[2] = 0;
                }
                piVar40[3] = 0;
              }
              else {
                if (uVar22 == 0) goto LAB_ram_4008aaea;
                if (((int)((ulonglong)uVar22 * 0x54 >> 0x20) != 0) ||
                   (0xffffffee < uVar22 * 0x54 - 1)) goto LAB_ram_4008a3a8;
                puVar38 = (undefined4 *)*puVar17;
                iVar19 = uVar22 * 0x54 + 0x10;
                if (puVar38 == (undefined4 *)0x0) goto LAB_ram_4008a3f2;
                if ((code *)puVar38[1] == (code *)0x0) {
                  puVar16 = (undefined4 *)FUN_ram_40002f1a(iVar19);
                  if (puVar16 == (undefined4 *)0x0) goto LAB_ram_4008a3a8;
                  pcVar25 = FUN_ram_4008561e;
                }
                else {
                  puVar16 = (undefined4 *)(*(code *)puVar38[1])(*puVar38);
                  if (puVar16 == (undefined4 *)0x0) goto LAB_ram_4008a3a8;
                  if (puVar38[1] == 0) {
                    pcVar25 = FUN_ram_4008561e;
                  }
                  else {
                    pcVar25 = (code *)puVar38[2];
                  }
                }
                uVar27 = *puVar38;
                *puVar16 = pcVar25;
LAB_ram_40089c5e:
                puVar39 = puVar16 + 4;
                puVar16[1] = uVar27;
                memset(puVar39,0,uVar22 * 0x54);
                uVar37 = 0;
                puVar38 = puVar39;
                do {
                  uVar37 = uVar37 + 1;
                  if (puVar17 != (undefined4 *)0x0) {
                    uVar29 = puVar17[1];
                    puVar38[1] = puVar17[2];
                    uVar27 = puVar17[3];
                    *puVar38 = uVar29;
                    puVar38[2] = uVar27;
                    puVar38[3] = puVar17[4];
                    uVar27 = puVar17[5];
                    puVar38[5] = fVar43;
                    puVar38[4] = uVar27;
                    FUN_ram_4008566a(puVar38);
                    puVar38[0x13] = 0;
                    puVar38[0x14] = 0;
                    FUN_ram_4009582a(puVar38 + 0xb,1,puVar38 + 0xe,puVar38 + 0x13);
                  }
                  puVar17 = puVar17 + 6;
                  puVar38 = puVar38 + 0x15;
                } while (uVar37 < uVar22);
                iVar19 = piVar40[2];
                if (iVar19 != 0) {
                  (**(code **)(iVar19 + -0x10))(*(undefined4 *)(iVar19 + -0xc),iVar19 + -0x10);
                }
                piVar40[3] = uVar22;
                piVar40[2] = (int)puVar39;
              }
              iVar19 = FUN_ram_40088068(piVar40 + 4,puVar18 + 4);
              if ((iVar19 != 0) ||
                 (iVar19 = FUN_ram_400865d8(piVar40 + 0xf,puVar18 + 0xe), iVar19 != 0))
              goto LAB_ram_40089d04;
            }
            uVar24 = uVar24 + 1;
            if ((uint)puVar12[0x18] <= uVar24) goto LAB_ram_4008adcc;
            piVar40 = (int *)(puVar34[5] + iVar35);
            puVar18 = (undefined4 *)(puVar12[0x17] + iVar36);
            iVar35 = iVar35 + 0x5c;
            iVar36 = iVar36 + 0x58;
          } while (piVar40 != (int *)0x0);
          iVar19 = -1;
LAB_ram_40089d04:
          FUN_ram_400860c4(puVar15);
        }
        goto LAB_ram_40089d0a;
      }
      if ((code *)puVar14[1] == (code *)0x0) {
        puVar18 = (undefined4 *)FUN_ram_40002f1a(iVar19 + 0x10);
        if (puVar18 != (undefined4 *)0x0) {
LAB_ram_4008b070:
          pcVar25 = FUN_ram_4008561e;
LAB_ram_400899ca:
          uVar27 = *puVar14;
          *puVar18 = pcVar25;
          goto LAB_ram_400899d0;
        }
      }
      else {
        puVar18 = (undefined4 *)(*(code *)puVar14[1])(*puVar14);
        if (puVar18 != (undefined4 *)0x0) {
          if (puVar14[1] == 0) goto LAB_ram_4008b070;
          pcVar25 = (code *)puVar14[2];
          goto LAB_ram_400899ca;
        }
      }
    }
LAB_ram_4008b038:
    puVar34[5] = 0;
    iVar19 = -3;
  }
LAB_ram_40089d0a:
  FUN_ram_40086c10(puVar32);
  (*(code *)*puVar34)(puVar34[1],puVar34);
LAB_ram_40088d30:
  FUN_ram_40085be0(puVar21);
  (*(code *)*puVar12)(puVar12[1],puVar12);
  return iVar19;
LAB_ram_40089e2e:
  pfStack_5c = pfVar28;
  puVar34[0x12] = 0;
  pfVar28 = pfStack_5c;
LAB_ram_40089e32:
  pfStack_5c = pfVar28;
  puVar34[0x13] = 0;
  pfVar28 = pfStack_5c;
LAB_ram_40089e36:
  pfStack_5c = pfVar28;
  puVar34[0x14] = 0;
  pfVar28 = pfStack_5c;
LAB_ram_40089e3a:
  pfStack_5c = pfVar28;
  puVar34[0x15] = 0;
  pfVar28 = pfStack_5c;
  uVar24 = uStack_58;
  goto LAB_ram_40089e40;
}

