/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40093000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40093090.
 * REA evidence: ev_47e072794e3052e3a194307e2e408e364a9bc097fd8a08160ea83994eabe7035
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40093090(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 auStack_130 [256];
  
  if (((_DAT_ram_3008c270 != 0) && (param_1 != 0)) && (iVar1 = FUN_ram_4008fc22(), iVar1 != 0)) {
    DAT_ram_3008cb24 = 0;
    _DAT_ram_3008db28 = 0;
    DAT_ram_3008c26c = 0;
    _DAT_ram_3008c268 = 0;
    DAT_ram_3008c26d = 0;
    if (((_DAT_ram_3008c270 != 0) && (0xa9fff < *(uint *)(_DAT_ram_3008c270 + 0x38))) &&
       ((iVar1 = FUN_ram_40006fe6(_DAT_ram_3008c270,0x18000,0x92000), -1 < iVar1 &&
        (_DAT_ram_3008c270 != 0)))) {
      puVar11 = (undefined4 *)&DAT_ram_3008db2c;
      FUN_ram_4000304c(&DAT_ram_3008db2c,param_1,0x898);
      _DAT_ram_3008db38 = 1;
      _DAT_ram_3008db3c = 0;
      _DAT_ram_3008db40 = 0x53413232;
      uVar2 = FUN_ram_40007554(0,&DAT_ram_3008db2c,0x10);
      uVar2 = FUN_ram_40007554(uVar2,&DAT_ram_4009b438,4);
      _DAT_ram_3008db3c = FUN_ram_40007554(uVar2,&DAT_ram_3008db40,0x884);
      puVar3 = (undefined4 *)&DAT_ram_3008cb28;
      memset(&DAT_ram_3008cb28,0xff,0x1000);
      do {
        uVar2 = puVar11[1];
        uVar5 = puVar11[2];
        uVar7 = puVar11[3];
        uVar9 = puVar11[4];
        *puVar3 = *puVar11;
        puVar3[1] = uVar2;
        puVar3[2] = uVar5;
        puVar3[3] = uVar7;
        puVar3[4] = uVar9;
        puVar11 = puVar11 + 5;
        puVar3 = puVar3 + 5;
      } while (puVar11 != (undefined4 *)0x3008e3c4);
      iVar1 = FUN_ram_40006dbe(_DAT_ram_3008c270 + 0x1c);
      if ((iVar1 == 0) || (uVar10 = *(uint *)(iVar1 + 0x20), uVar10 == 0)) {
        uVar8 = 0x1000;
      }
      else {
        if (uVar10 == 0) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = (uVar10 + 0xfff) / uVar10;
        }
        uVar8 = uVar8 * uVar10;
        if (0x1000 < uVar8) {
          return 0;
        }
      }
      iVar1 = FUN_ram_40006fe6(_DAT_ram_3008c270,0x18000,uVar8);
      if ((-1 < iVar1) &&
         (iVar1 = FUN_ram_40006f9c(_DAT_ram_3008c270,0x18000,&DAT_ram_3008cb28,0x1000),
         iVar1 == 0x1000)) {
        uVar10 = 0;
        do {
          uVar8 = 0x1000 - uVar10;
          if (0x100 < uVar8) {
            uVar8 = 0x100;
          }
          uVar4 = FUN_ram_40006f52(_DAT_ram_3008c270,uVar10 + 0x18000,auStack_130,uVar8);
          puVar6 = &DAT_ram_3008cb28 + uVar10;
          uVar10 = uVar10 + uVar4;
          if (uVar4 != uVar8) {
            return 0;
          }
          iVar1 = FUN_ram_40002fec(auStack_130,puVar6);
          if (iVar1 != 0) {
            return 0;
          }
        } while (uVar10 < 0x1000);
        _DAT_ram_3008db28 = 1;
        _DAT_ram_3008cb20 = 0x18000;
        DAT_ram_3008cb24 = 1;
        if (_DAT_ram_3008c270 != 0) {
          FUN_ram_4000304c(&DAT_ram_3008db2c,param_1,0x898);
          _DAT_ram_3008db38 = 2;
          _DAT_ram_3008db3c = 0;
          _DAT_ram_3008db40 = 0x53413232;
          uVar2 = FUN_ram_40007554(0,&DAT_ram_3008db2c,0x10);
          uVar2 = FUN_ram_40007554(uVar2,&DAT_ram_4009b438,4);
          _DAT_ram_3008db3c = FUN_ram_40007554(uVar2,&DAT_ram_3008db40,0x884);
          memset(&DAT_ram_3008cb28,0xff,0x1000);
          puVar11 = (undefined4 *)&DAT_ram_3008db2c;
          puVar3 = (undefined4 *)&DAT_ram_3008cb28;
          do {
            uVar2 = puVar11[1];
            uVar5 = puVar11[2];
            uVar7 = puVar11[3];
            uVar9 = puVar11[4];
            *puVar3 = *puVar11;
            puVar3[1] = uVar2;
            puVar3[2] = uVar5;
            puVar3[3] = uVar7;
            puVar3[4] = uVar9;
            puVar11 = puVar11 + 5;
            puVar3 = puVar3 + 5;
          } while (puVar11 != (undefined4 *)0x3008e3c4);
          iVar1 = FUN_ram_40006dbe(_DAT_ram_3008c270 + 0x1c);
          if ((iVar1 == 0) || (uVar10 = *(uint *)(iVar1 + 0x20), uVar10 == 0)) {
            uVar8 = 0x1000;
          }
          else {
            if (uVar10 == 0) {
              uVar8 = 0xffffffff;
            }
            else {
              uVar8 = (uVar10 + 0xfff) / uVar10;
            }
            uVar8 = uVar8 * uVar10;
            if (0x1000 < uVar8) {
              return 0;
            }
          }
          iVar1 = FUN_ram_40006fe6(_DAT_ram_3008c270,0xa9000,uVar8);
          if ((-1 < iVar1) &&
             (iVar1 = FUN_ram_40006f9c(_DAT_ram_3008c270,0xa9000,&DAT_ram_3008cb28,0x1000),
             iVar1 == 0x1000)) {
            uVar10 = 0;
            while( true ) {
              uVar8 = 0x1000 - uVar10;
              if (0x100 < uVar8) {
                uVar8 = 0x100;
              }
              uVar4 = FUN_ram_40006f52(_DAT_ram_3008c270,uVar10 + 0xa9000,auStack_130,uVar8);
              puVar6 = &DAT_ram_3008cb28 + uVar10;
              uVar10 = uVar10 + uVar4;
              if ((uVar4 != uVar8) || (iVar1 = FUN_ram_40002fec(auStack_130,puVar6), iVar1 != 0))
              break;
              if (0xfff < uVar10) {
                _DAT_ram_3008cb20 = 0xa9000;
                DAT_ram_3008cb24 = 1;
                _DAT_ram_3008db28 = 2;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


/* NanoCore 1.11, address 0x400933f0.
 * REA evidence: ev_0eeb4ec09505dffe6aa492211ff8e319f07c7f027e665ce1d7634d0cf0f1c075
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined * FUN_ram_400933f0(void)

{
  return &DAT_ram_4009b3f8;
}


/* NanoCore 1.11, address 0x400933fc.
 * REA evidence: ev_b08bba930bae55324f0168063256a3476c5c09d0fef639a091e255a6cccb3cc5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400933fc(undefined8 *param_1,undefined8 *param_2,float *param_3,uint param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float *pfVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_4 >> 2;
  puVar2 = param_2;
  puVar3 = param_1;
  pfVar4 = param_3;
  uVar5 = uVar1;
  if (uVar1 != 0) {
    do {
      uVar5 = uVar5 - 1;
      *pfVar4 = (float)*puVar3 + (float)*puVar2;
      pfVar4[1] = *(float *)((int)puVar3 + 4) + *(float *)((int)puVar2 + 4);
      pfVar4[2] = *(float *)(puVar3 + 1) + *(float *)(puVar2 + 1);
      pfVar4[3] = *(float *)((int)puVar3 + 0xc) + *(float *)((int)puVar2 + 0xc);
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 2;
      pfVar4 = pfVar4 + 4;
    } while (uVar5 != 0);
    param_1 = param_1 + uVar1 * 2;
    param_2 = param_2 + uVar1 * 2;
    param_3 = param_3 + uVar1 * 4;
  }
  if ((param_4 & 3) != 0) {
    puVar2 = (undefined8 *)((int)param_1 + (param_4 & 3) * 4);
    do {
      uVar7 = *param_1;
      uVar6 = *param_2;
      param_1 = (undefined8 *)((int)param_1 + 4);
      param_2 = (undefined8 *)((int)param_2 + 4);
      *param_3 = (float)uVar7 + (float)uVar6;
      param_3 = param_3 + 1;
    } while (param_1 != puVar2);
  }
  return;
}


/* NanoCore 1.11, address 0x40093480.
 * REA evidence: ev_fe18b97536c7274eedef443ebb58eb74db494891980692265abb57f438d00dfd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40093480(undefined8 *param_1,undefined8 *param_2,uint param_3,ulonglong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
  uVar4 = param_3 >> 2;
  uVar7 = 0;
  puVar1 = param_2;
  puVar2 = param_1;
  uVar3 = uVar4;
  if (uVar4 != 0) {
    do {
      uVar3 = uVar3 - 1;
      uVar7 = (ulonglong)
              (uint)((float)*(undefined8 *)((int)puVar2 + 0xc) *
                     (float)*(undefined8 *)((int)puVar1 + 0xc) +
                    (float)puVar2[1] * (float)puVar1[1] +
                    (float)*(undefined8 *)((int)puVar2 + 4) *
                    (float)*(undefined8 *)((int)puVar1 + 4) +
                    (float)*puVar2 * (float)*puVar1 + (float)uVar7);
      puVar1 = puVar1 + 2;
      puVar2 = puVar2 + 2;
    } while (uVar3 != 0);
    param_1 = param_1 + uVar4 * 2;
    param_2 = param_2 + uVar4 * 2;
  }
  if ((param_3 & 3) != 0) {
    puVar1 = (undefined8 *)((int)param_1 + (param_3 & 3) * 4);
    do {
      uVar5 = *param_1;
      uVar6 = *param_2;
      param_1 = (undefined8 *)((int)param_1 + 4);
      param_2 = (undefined8 *)((int)param_2 + 4);
      uVar7 = (ulonglong)(uint)((float)uVar5 * (float)uVar6 + (float)uVar7);
    } while (param_1 != puVar1);
  }
  *param_4 = uVar7;
  return;
}


/* NanoCore 1.11, address 0x400934e0.
 * REA evidence: ev_aeffd0fc6c8cf5e7b02afd209244f31c54bdd199496943bb0872c286a6acd868
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400934e0(byte *param_1,float *param_2,float *param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  float *pfVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  
  uVar14 = param_4 >> 4;
  puVar11 = *(undefined8 **)(param_1 + 8);
  puVar10 = *(ulonglong **)(param_1 + 4);
  uVar9 = (uint)*param_1;
  do {
    uVar19 = *puVar11;
    puVar7 = (undefined8 *)((int)puVar11 + 4);
    puVar8 = puVar11 + 1;
    fVar1 = *(float *)((int)puVar11 + 0xc);
    fVar2 = *(float *)(puVar11 + 2);
    uVar22 = *puVar10;
    uVar21 = *(ulonglong *)((int)puVar10 + 4);
    puVar11 = (undefined8 *)((int)puVar11 + 0x14);
    fVar18 = (float)uVar19;
    fVar17 = (float)*puVar7;
    fVar16 = (float)*puVar8;
    pfVar13 = param_3;
    pfVar12 = param_2;
    uVar15 = uVar14;
    if (uVar14 != 0) {
      do {
        fVar3 = *pfVar12;
        fVar5 = fVar18 * fVar3 + (float)uVar22;
        uVar15 = uVar15 - 1;
        *pfVar13 = fVar5;
        fVar20 = pfVar12[1];
        fVar6 = fVar18 * fVar20 + fVar1 * fVar5 + fVar17 * fVar3 + (float)uVar21;
        pfVar13[1] = fVar6;
        fVar4 = pfVar12[2];
        fVar5 = fVar18 * fVar4 + fVar1 * fVar6 + fVar17 * fVar20 + fVar16 * fVar3 + fVar2 * fVar5;
        pfVar13[2] = fVar5;
        fVar3 = pfVar12[3];
        fVar6 = fVar18 * fVar3 + fVar1 * fVar5 + fVar17 * fVar4 + fVar16 * fVar20 + fVar2 * fVar6;
        pfVar13[3] = fVar6;
        fVar20 = pfVar12[4];
        fVar5 = fVar18 * fVar20 + fVar1 * fVar6 + fVar17 * fVar3 + fVar16 * fVar4 + fVar2 * fVar5;
        pfVar13[4] = fVar5;
        fVar4 = pfVar12[5];
        fVar6 = fVar18 * fVar4 + fVar1 * fVar5 + fVar17 * fVar20 + fVar16 * fVar3 + fVar2 * fVar6;
        pfVar13[5] = fVar6;
        fVar3 = pfVar12[6];
        fVar5 = fVar18 * fVar3 + fVar1 * fVar6 + fVar17 * fVar4 + fVar16 * fVar20 + fVar2 * fVar5;
        pfVar13[6] = fVar5;
        fVar20 = pfVar12[7];
        fVar6 = fVar18 * fVar20 + fVar1 * fVar5 + fVar17 * fVar3 + fVar16 * fVar4 + fVar2 * fVar6;
        pfVar13[7] = fVar6;
        fVar4 = pfVar12[8];
        fVar5 = fVar18 * fVar4 + fVar1 * fVar6 + fVar17 * fVar20 + fVar16 * fVar3 + fVar2 * fVar5;
        pfVar13[8] = fVar5;
        fVar3 = pfVar12[9];
        fVar6 = fVar18 * fVar3 + fVar1 * fVar5 + fVar17 * fVar4 + fVar16 * fVar20 + fVar2 * fVar6;
        pfVar13[9] = fVar6;
        fVar20 = pfVar12[10];
        fVar5 = fVar18 * fVar20 + fVar1 * fVar6 + fVar17 * fVar3 + fVar16 * fVar4 + fVar2 * fVar5;
        pfVar13[10] = fVar5;
        fVar4 = pfVar12[0xb];
        fVar6 = fVar18 * fVar4 + fVar1 * fVar5 + fVar17 * fVar20 + fVar16 * fVar3 + fVar2 * fVar6;
        pfVar13[0xb] = fVar6;
        fVar3 = pfVar12[0xc];
        fVar5 = fVar18 * fVar3 + fVar1 * fVar6 + fVar17 * fVar4 + fVar16 * fVar20 + fVar2 * fVar5;
        pfVar13[0xc] = fVar5;
        fVar20 = pfVar12[0xd];
        fVar6 = fVar18 * fVar20 + fVar1 * fVar5 + fVar17 * fVar3 + fVar16 * fVar4 + fVar2 * fVar6;
        pfVar13[0xd] = fVar6;
        fVar4 = pfVar12[0xe];
        fVar5 = fVar18 * fVar4 + fVar1 * fVar6 + fVar17 * fVar20 + fVar16 * fVar3 + fVar2 * fVar5;
        pfVar13[0xe] = fVar5;
        fVar3 = pfVar12[0xf];
        fVar20 = fVar18 * fVar3 + fVar1 * fVar5 + fVar17 * fVar4 + fVar16 * fVar20 + fVar2 * fVar6;
        pfVar13[0xf] = fVar20;
        uVar22 = (ulonglong)(uint)(fVar1 * fVar20 + fVar17 * fVar3 + fVar16 * fVar4 + fVar2 * fVar5)
        ;
        uVar21 = (ulonglong)(uint)(fVar16 * fVar3 + fVar2 * fVar20);
        pfVar12 = pfVar12 + 0x10;
        pfVar13 = pfVar13 + 0x10;
      } while (uVar15 != 0);
      param_2 = param_2 + uVar14 * 0x10;
      pfVar13 = param_3 + uVar14 * 0x10;
    }
    if ((param_4 & 0xf) != 0) {
      pfVar12 = param_2 + (param_4 & 0xf);
      do {
        uVar19 = *(undefined8 *)param_2;
        param_2 = param_2 + 1;
        fVar20 = (float)uVar19;
        fVar3 = fVar18 * fVar20 + (float)uVar22;
        *pfVar13 = fVar3;
        uVar22 = (ulonglong)(uint)(fVar1 * fVar3 + fVar17 * fVar20 + (float)uVar21);
        uVar21 = (ulonglong)(uint)(fVar16 * fVar20 + fVar2 * fVar3);
        pfVar13 = pfVar13 + 1;
      } while (param_2 != pfVar12);
    }
    *puVar10 = uVar22;
    *(ulonglong *)((int)puVar10 + 4) = uVar21;
    uVar9 = uVar9 - 1;
    puVar10 = puVar10 + 1;
    param_2 = param_3;
  } while (uVar9 != 0);
  return;
}


/* NanoCore 1.11, address 0x4009372e.
 * REA evidence: ev_f43424f6a5786f18f6ef3309474a3722b2e709d25a6bf24b1774a88007da7ca2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4009372e(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *param_1 = (char)param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  uVar1 = memset(param_4,0,param_2 << 3);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}


