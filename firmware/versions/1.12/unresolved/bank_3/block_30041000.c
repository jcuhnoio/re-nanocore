/* NanoCore 1.12 analysis module: unresolved/bank_3/block_30041000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x30041060.
 * REA evidence: ev_d37e001e2b17ca72b083030e0574650fc7bedfa5c4bf6c28b9b90c8b40d87a18
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_30041060(ushort *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  
  fVar3 = DAT_ram_4009675c;
  puVar6 = *(undefined8 **)(param_1 + 10);
  iVar4 = *param_1 - 1;
  puVar5 = param_2 + iVar4;
  fVar1 = ((float)*param_2 - (float)param_2[*param_1]) * DAT_ram_4009675c;
  *(ulonglong *)param_3 =
       (ulonglong)(uint)(((float)*param_2 + (float)param_2[*param_1]) * DAT_ram_4009675c);
  *(ulonglong *)(param_3 + 1) = (ulonglong)(uint)fVar1;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    uVar11 = *puVar5;
    fVar9 = (float)param_2[1];
    fVar2 = fVar9 - (float)uVar11;
    fVar8 = (float)*(undefined8 *)((int)puVar5 + 4);
    fVar7 = (float)*(undefined8 *)((int)param_2 + 0xc);
    fVar1 = fVar8 + fVar7;
    fVar12 = (float)puVar6[1];
    fVar10 = (float)*(undefined8 *)((int)puVar6 + 0xc);
    puVar5 = puVar5 + -1;
    param_3[2] = (-(fVar10 * fVar1) + -(fVar12 * fVar2) + (float)uVar11 + fVar9) * fVar3;
    param_3[3] = (-(fVar12 * fVar1) + fVar10 * fVar2 + (fVar7 - fVar8)) * fVar3;
    puVar6 = puVar6 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + 2;
  }
  return;
}


/* NanoCore 1.12, address 0x300410e6.
 * REA evidence: ev_028a0b9ece41e50ec9c499fa8257e3e75d5b9f0e61adc25f4c60d8e56fc72128
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_300410e6(ushort *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *param_1 = param_1[8] >> 1;
  if (param_4 != 0) {
    FUN_ram_30041060();
    FUN_ram_300408dc(param_1,param_3,param_4,1);
    return;
  }
  FUN_ram_300408dc(param_1,param_2,0,1);
  FUN_ram_30040fc4(param_1,param_2,param_3);
  return;
}


/* NanoCore 1.12, address 0x3004113c.
 * REA evidence: ev_81908a74efac7b3d0e0d87fd1d7d43d640fc4433e027cc612599368e86f51887
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_3004113c(int param_1,int param_2,short *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_2 + 1 >> 1;
  do {
    iVar4 = iVar4 + -1;
    puVar2 = (undefined4 *)(param_3[1] + param_1);
    puVar1 = (undefined4 *)(*param_3 + param_1);
    uVar3 = *puVar1;
    *puVar1 = *puVar2;
    *puVar2 = uVar3;
    uVar3 = puVar1[1];
    puVar1[1] = puVar2[1];
    puVar2[1] = uVar3;
    param_3 = param_3 + 2;
  } while (iVar4 != 0);
  return;
}


/* NanoCore 1.12, address 0x30041298.
 * REA evidence: ev_15f01f35b28a12d1f8887aaa243de78fc979ca427d1419a5bffe58c768e3e8db
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_30041298(int param_1,int param_2,uint param_3,float *param_4)

{
  float fVar1;
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
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int iVar31;
  uint uVar32;
  float *pfVar33;
  float *pfVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  float *pfVar38;
  float *pfVar39;
  float *pfVar40;
  float *pfVar41;
  undefined8 *puVar42;
  float *pfVar43;
  float *pfVar44;
  float *pfVar45;
  float *pfVar46;
  undefined8 *puVar47;
  uint uVar48;
  float *pfVar49;
  float *pfVar50;
  uint uVar51;
  undefined4 *puVar52;
  undefined4 *puVar53;
  float *pfVar54;
  float *pfVar55;
  float *pfVar56;
  float *pfVar57;
  float *pfVar58;
  float *pfVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  float *pfVar66;
  float *pfVar67;
  uint uVar68;
  float *pfVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined8 uVar73;
  float fVar74;
  undefined8 uVar75;
  float fVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  float fVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  float fVar82;
  uint uStack_54;
  uint uStack_50;
  int *piStack_44;
  float *pfStack_40;
  uint uStack_3c;
  uint uStack_38;
  
  uStack_50 = (uint)*(ushort *)(param_1 + 0x1a);
  uVar36 = (uint)*(ushort *)(param_1 + 0x10c4);
  uVar68 = (uint)*(ushort *)(param_1 + 0x18);
  uStack_3c = (uint)*(ushort *)(param_1 + 0x10c6);
  fVar82 = *param_4;
  iVar31 = param_1 + 0x14c8;
  if (uVar68 == 0) {
    uStack_50 = 0;
    uVar68 = 1;
  }
  if (uVar36 == 0) {
    uStack_38 = 0;
    uStack_3c = 0;
    uVar36 = 1;
  }
  else {
    uStack_38 = uVar36 - 1;
  }
  uStack_54 = uStack_3c;
  if (param_3 != 0) {
    uVar35 = 0;
    do {
      while( true ) {
        uVar32 = uVar68 - uStack_50;
        if (uVar36 - uStack_54 < uVar68 - uStack_50) {
          uVar32 = uVar36 - uStack_54;
        }
        uVar37 = param_3 - uVar35;
        if (uVar32 <= param_3 - uVar35) {
          uVar37 = uVar32;
        }
        uVar32 = uVar35;
        if (uVar37 != 0) {
          puVar47 = (undefined8 *)(param_1 + (uStack_50 + 7) * 4);
          uVar32 = uVar37 + uVar35;
          puVar42 = (undefined8 *)(uVar35 * 4 + param_2);
          puVar52 = (undefined4 *)(uVar35 * 4 + 0x10c8 + param_1);
          do {
            uVar77 = *puVar42;
            fVar30 = ABS((float)uVar77);
            puVar42 = (undefined8 *)((int)puVar42 + 4);
            if (fVar82 < fVar30) {
              fVar82 = fVar30;
            }
            uVar80 = *puVar47;
            puVar53 = puVar52 + 1;
            *puVar47 = uVar77;
            *puVar52 = (int)uVar80;
            puVar52[(uStack_54 + 0x100) - uVar35] = (int)uVar80;
            puVar52[0x80] = 0;
            puVar47 = (undefined8 *)((int)puVar47 + 4);
            puVar52 = puVar53;
          } while ((undefined4 *)(param_1 + 0x10c8 + uVar32 * 4) != puVar53);
        }
        uStack_50 = uStack_50 + (uVar37 & 0xffff) & 0xffff;
        uStack_50 = -(uint)(uVar68 != uStack_50) & uStack_50;
        uStack_54 = (uVar37 & 0xffff) + uStack_54 & 0xffff;
        uVar35 = uVar32;
        if (uVar36 == uStack_54) break;
        if (param_3 <= uVar32) goto LAB_ram_300413c8;
      }
      uStack_54 = 0;
    } while (uVar32 < param_3);
  }
LAB_ram_300413c8:
  piStack_44 = &DAT_ram_3004122c;
  pfStack_40 = (float *)&DAT_ram_300411c0;
  do {
    uVar65 = 0;
    fVar30 = *pfStack_40;
    fVar1 = pfStack_40[1];
    fVar2 = pfStack_40[2];
    uVar77 = *(undefined8 *)(pfStack_40 + 3);
    uVar80 = *(undefined8 *)(pfStack_40 + 4);
    uVar73 = *(undefined8 *)(pfStack_40 + 5);
    uVar75 = *(undefined8 *)(pfStack_40 + 6);
    uVar78 = *(undefined8 *)(pfStack_40 + 7);
    uVar81 = *(undefined8 *)(pfStack_40 + 8);
    uVar64 = uStack_3c - *piStack_44 & uStack_38;
    uVar63 = uStack_3c - piStack_44[1] & uStack_38;
    uVar62 = uStack_3c - piStack_44[2] & uStack_38;
    uVar61 = uStack_3c - piStack_44[3] & uStack_38;
    uVar60 = uStack_3c - piStack_44[4] & uStack_38;
    uVar37 = uStack_3c - piStack_44[5] & uStack_38;
    uVar32 = uStack_3c - piStack_44[6] & uStack_38;
    uVar35 = uStack_3c - piStack_44[7] & uStack_38;
    uVar68 = uStack_3c - piStack_44[8] & uStack_38;
    if (param_3 != 0) {
      do {
        while( true ) {
          uVar48 = uVar36 - uVar64;
          if (param_3 - uVar65 < uVar36 - uVar64) {
            uVar48 = param_3 - uVar65;
          }
          uVar51 = uVar36 - uVar63;
          if (uVar48 < uVar36 - uVar63) {
            uVar51 = uVar48;
          }
          uVar48 = uVar36 - uVar62;
          if (uVar51 < uVar36 - uVar62) {
            uVar48 = uVar51;
          }
          uVar51 = uVar36 - uVar61;
          if (uVar48 < uVar36 - uVar61) {
            uVar51 = uVar48;
          }
          uVar48 = uVar36 - uVar60;
          if (uVar51 < uVar36 - uVar60) {
            uVar48 = uVar51;
          }
          uVar51 = uVar36 - uVar37;
          if (uVar48 < uVar36 - uVar37) {
            uVar51 = uVar48;
          }
          uVar48 = uVar36 - uVar32;
          if (uVar51 < uVar36 - uVar32) {
            uVar48 = uVar51;
          }
          uVar51 = uVar36 - uVar35;
          if (uVar48 < uVar36 - uVar35) {
            uVar51 = uVar48;
          }
          uVar48 = uVar36 - uVar68;
          if (uVar51 < uVar36 - uVar68) {
            uVar48 = uVar51;
          }
          pfVar33 = (float *)(iVar31 + uVar63 * 4);
          pfVar58 = (float *)(iVar31 + uVar62 * 4);
          pfVar56 = (float *)(iVar31 + uVar61 * 4);
          pfVar38 = (float *)(iVar31 + uVar60 * 4);
          pfVar40 = (float *)(iVar31 + uVar37 * 4);
          pfVar43 = (float *)(iVar31 + uVar32 * 4);
          pfVar45 = (float *)(iVar31 + uVar35 * 4);
          pfVar49 = (float *)(iVar31 + uVar68 * 4);
          pfVar66 = (float *)(param_1 + 0x12c8 + uVar65 * 4);
          pfVar67 = (float *)(iVar31 + uVar64 * 4);
          fVar70 = (float)uVar77;
          fVar71 = (float)uVar80;
          fVar72 = (float)uVar73;
          fVar74 = (float)uVar75;
          fVar76 = (float)uVar78;
          fVar79 = (float)uVar81;
          if (uVar48 < 4) {
            uVar51 = 0;
          }
          else {
            pfVar34 = pfVar33;
            pfVar39 = pfVar38;
            pfVar41 = pfVar40;
            pfVar44 = pfVar43;
            pfVar46 = pfVar45;
            pfVar50 = pfVar49;
            pfVar54 = pfVar66;
            pfVar57 = pfVar56;
            pfVar59 = pfVar58;
            pfVar69 = pfVar67;
            do {
              fVar3 = pfVar69[1];
              fVar4 = pfVar69[2];
              fVar5 = pfVar69[3];
              fVar6 = pfVar34[1];
              fVar7 = pfVar34[2];
              fVar8 = pfVar34[3];
              fVar9 = pfVar59[1];
              fVar10 = pfVar59[2];
              fVar11 = pfVar59[3];
              fVar12 = pfVar57[1];
              fVar13 = pfVar57[2];
              fVar14 = pfVar57[3];
              fVar15 = pfVar39[1];
              fVar16 = pfVar39[2];
              fVar17 = pfVar39[3];
              fVar18 = pfVar41[1];
              fVar19 = pfVar41[2];
              fVar20 = pfVar41[3];
              fVar21 = pfVar44[1];
              fVar22 = pfVar44[2];
              fVar23 = pfVar44[3];
              fVar24 = pfVar46[1];
              fVar25 = pfVar46[2];
              fVar26 = pfVar46[3];
              fVar27 = pfVar50[1];
              fVar28 = pfVar50[2];
              fVar29 = pfVar50[3];
              pfVar55 = pfVar54 + 4;
              *pfVar54 = *pfVar50 * fVar79 +
                         *pfVar46 * fVar76 +
                         *pfVar44 * fVar74 +
                         *pfVar41 * fVar72 +
                         *pfVar39 * fVar71 +
                         *pfVar57 * fVar70 +
                         *pfVar59 * fVar2 + *pfVar34 * fVar1 + *pfVar69 * fVar30 + *pfVar54;
              pfVar54[1] = fVar27 * fVar79 +
                           fVar24 * fVar76 +
                           fVar21 * fVar74 +
                           fVar18 * fVar72 +
                           fVar15 * fVar71 +
                           fVar12 * fVar70 +
                           fVar9 * fVar2 + fVar6 * fVar1 + fVar3 * fVar30 + pfVar54[1];
              pfVar54[2] = fVar28 * fVar79 +
                           fVar25 * fVar76 +
                           fVar22 * fVar74 +
                           fVar19 * fVar72 +
                           fVar16 * fVar71 +
                           fVar13 * fVar70 +
                           fVar10 * fVar2 + fVar7 * fVar1 + fVar4 * fVar30 + pfVar54[2];
              pfVar54[3] = fVar29 * fVar79 +
                           fVar26 * fVar76 +
                           fVar23 * fVar74 +
                           fVar20 * fVar72 +
                           fVar17 * fVar71 +
                           fVar14 * fVar70 +
                           fVar11 * fVar2 + fVar8 * fVar1 + fVar5 * fVar30 + pfVar54[3];
              pfVar69 = pfVar69 + 4;
              pfVar34 = pfVar34 + 4;
              pfVar59 = pfVar59 + 4;
              pfVar57 = pfVar57 + 4;
              pfVar39 = pfVar39 + 4;
              pfVar41 = pfVar41 + 4;
              pfVar44 = pfVar44 + 4;
              pfVar46 = pfVar46 + 4;
              pfVar50 = pfVar50 + 4;
              pfVar54 = pfVar55;
            } while (pfVar66 + (uVar48 - 4 & 0xfffffffc) + 4 != pfVar55);
            uVar51 = (uVar48 - 4 & 0xfffffffc) + 4;
          }
          if (uVar51 < uVar48) {
            pfVar66[uVar51] =
                 pfVar49[uVar51] * fVar79 +
                 pfVar45[uVar51] * fVar76 +
                 fVar74 * pfVar43[uVar51] +
                 pfVar40[uVar51] * fVar72 +
                 fVar71 * pfVar38[uVar51] +
                 fVar70 * pfVar56[uVar51] +
                 pfVar58[uVar51] * fVar2 +
                 fVar1 * pfVar33[uVar51] + pfVar67[uVar51] * fVar30 + pfVar66[uVar51];
            if (uVar51 + 1 < uVar48) {
              pfVar66[uVar51 + 1] =
                   fVar79 * pfVar49[uVar51 + 1] +
                   fVar76 * pfVar45[uVar51 + 1] +
                   fVar74 * pfVar43[uVar51 + 1] +
                   fVar72 * pfVar40[uVar51 + 1] +
                   fVar71 * pfVar38[uVar51 + 1] +
                   fVar70 * pfVar56[uVar51 + 1] +
                   fVar2 * pfVar58[uVar51 + 1] +
                   fVar1 * pfVar33[uVar51 + 1] + fVar30 * pfVar67[uVar51 + 1] + pfVar66[uVar51 + 1];
              if (uVar51 + 2 < uVar48) {
                pfVar66[uVar51 + 2] =
                     fVar79 * pfVar49[uVar51 + 2] +
                     fVar76 * pfVar45[uVar51 + 2] +
                     fVar74 * pfVar43[uVar51 + 2] +
                     fVar72 * pfVar40[uVar51 + 2] +
                     fVar71 * pfVar38[uVar51 + 2] +
                     fVar70 * pfVar56[uVar51 + 2] +
                     fVar2 * pfVar58[uVar51 + 2] +
                     fVar1 * pfVar33[uVar51 + 2] +
                     fVar30 * pfVar67[uVar51 + 2] + pfVar66[uVar51 + 2];
                if (uVar51 + 3 < uVar48) {
                  pfVar66[uVar51 + 3] =
                       pfVar49[uVar51 + 3] * fVar79 +
                       pfVar45[uVar51 + 3] * fVar76 +
                       pfVar43[uVar51 + 3] * fVar74 +
                       pfVar40[uVar51 + 3] * fVar72 +
                       pfVar38[uVar51 + 3] * fVar71 +
                       pfVar56[uVar51 + 3] * fVar70 +
                       pfVar58[uVar51 + 3] * fVar2 +
                       pfVar33[uVar51 + 3] * fVar1 +
                       pfVar67[uVar51 + 3] * fVar30 + pfVar66[uVar51 + 3];
                }
              }
            }
          }
          uVar68 = uVar68 + uVar48;
          uVar65 = uVar65 + uVar48;
          uVar64 = uVar64 + uVar48 & -(uint)(uVar64 + uVar48 != uVar36);
          uVar63 = uVar63 + uVar48 & -(uint)(uVar63 + uVar48 != uVar36);
          uVar62 = uVar62 + uVar48 & -(uint)(uVar62 + uVar48 != uVar36);
          uVar61 = uVar61 + uVar48 & -(uint)(uVar61 + uVar48 != uVar36);
          uVar60 = uVar60 + uVar48 & -(uint)(uVar60 + uVar48 != uVar36);
          uVar37 = uVar37 + uVar48 & -(uint)(uVar37 + uVar48 != uVar36);
          uVar32 = uVar32 + uVar48 & -(uint)(uVar32 + uVar48 != uVar36);
          uVar35 = uVar35 + uVar48 & -(uint)(uVar35 + uVar48 != uVar36);
          if (uVar68 != uVar36) break;
          if (param_3 <= uVar65) goto LAB_ram_3004193e;
          uVar68 = 0;
        }
      } while (uVar65 < param_3);
    }
LAB_ram_3004193e:
    pfStack_40 = pfStack_40 + 9;
    piStack_44 = piStack_44 + 9;
    if (pfStack_40 == (float *)&DAT_ram_3004122c) {
      *(short *)(param_1 + 0x1a) = (short)uStack_50;
      *(short *)(param_1 + 0x10c6) = (short)uStack_54;
      *param_4 = fVar82;
      return;
    }
  } while( true );
}


/* NanoCore 1.12, address 0x300419ae.
 * REA evidence: ev_9d9849d6121083db67d37811c66c590b2af3b2d0b08a803deb51779ed0c8ed30
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_300419ae(int *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  
  iVar10 = *param_1;
  uVar1 = *(ushort *)(param_1 + 1);
  uVar9 = (uint)*(ushort *)((int)param_1 + 6);
  uVar11 = *(undefined8 *)(param_1 + 2);
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      while( true ) {
        uVar8 = uVar1 - uVar9;
        if (param_3 - uVar3 < uVar8) {
          uVar8 = param_3 - uVar3;
        }
        if (uVar8 != 0) {
          pfVar5 = (float *)(uVar3 * 4 + param_2);
          pfVar4 = (float *)(uVar9 * 4 + iVar10);
          pfVar6 = pfVar5;
          do {
            pfVar7 = pfVar6 + 1;
            fVar2 = -((float)uVar11 * (float)*(undefined8 *)pfVar6) + (float)*(undefined8 *)pfVar4;
            *pfVar4 = (float)uVar11 * fVar2 + (float)*(undefined8 *)pfVar6;
            *pfVar6 = fVar2;
            pfVar4 = pfVar4 + 1;
            pfVar6 = pfVar7;
          } while (pfVar5 + uVar8 != pfVar7);
        }
        uVar9 = uVar9 + uVar8 & 0xffff;
        uVar3 = uVar3 + uVar8;
        if (uVar1 != uVar9) break;
        uVar9 = 0;
        if (param_3 <= uVar3) {
          *(undefined2 *)((int)param_1 + 6) = 0;
          return;
        }
      }
    } while (uVar3 < param_3);
  }
  *(short *)((int)param_1 + 6) = (short)uVar9;
  return;
}


