/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40090000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400900b0.
 * REA evidence: ev_5fbd86590c61cbb1ca17f1b84c6b1f45c0d4b77d6b92945e32a0075c8cf8883e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400900b0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined1 auStack_140 [268];
  
  if (((_DAT_ram_3008aee4 != 0) && (param_1 != 0)) && (iVar2 = FUN_ram_4008d260(), iVar2 != 0)) {
    DAT_ram_3008b798 = 0;
    _DAT_ram_3008c79c = 0;
    DAT_ram_3008aee0 = 0;
    _DAT_ram_3008aedc = 0;
    DAT_ram_3008aee1 = 0;
    if (((_DAT_ram_3008aee4 != 0) && (0xa9fff < *(uint *)(_DAT_ram_3008aee4 + 0x38))) &&
       (iVar2 = FUN_ram_40006ff2(_DAT_ram_3008aee4,0x18000,0x92000), -1 < iVar2)) {
      iVar2 = 0x18000;
      do {
        iVar3 = fal_partition_read(_DAT_ram_3008aee4,iVar2,&DAT_ram_3008b79c,0x1000);
        if (iVar3 != 0x1000) {
          return 0;
        }
        pcVar12 = &DAT_ram_3008b79c;
        do {
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          if (cVar1 != -1) {
            return 0;
          }
        } while (pcVar12 != &DAT_ram_3008c79c);
        iVar2 = iVar2 + 0x1000;
      } while (iVar2 != 0xaa000);
      if (_DAT_ram_3008aee4 != 0) {
        puVar14 = (undefined4 *)&DAT_ram_3008c7a0;
        FUN_ram_4000305c(&DAT_ram_3008c7a0,param_1,0x898);
        _DAT_ram_3008c7ac = 1;
        _DAT_ram_3008c7b0 = 0;
        _DAT_ram_3008c7b4 = 0x53413232;
        uVar4 = FUN_ram_4000755e(0,&DAT_ram_3008c7a0,0x10);
        uVar4 = FUN_ram_4000755e(uVar4,&DAT_ram_40099418,4);
        _DAT_ram_3008c7b0 = FUN_ram_4000755e(uVar4,&DAT_ram_3008c7b4,0x884);
        memset(&DAT_ram_3008b79c,0xff,0x1000);
        puVar11 = (undefined4 *)&DAT_ram_3008b79c;
        do {
          uVar4 = puVar14[1];
          uVar6 = puVar14[2];
          uVar8 = puVar14[3];
          uVar10 = puVar14[4];
          *puVar11 = *puVar14;
          puVar11[1] = uVar4;
          puVar11[2] = uVar6;
          puVar11[3] = uVar8;
          puVar11[4] = uVar10;
          puVar14 = puVar14 + 5;
          puVar11 = puVar11 + 5;
        } while (puVar14 != (undefined4 *)0x3008d038);
        iVar2 = FUN_ram_40006dcc(_DAT_ram_3008aee4 + 0x1c);
        if ((iVar2 == 0) || (uVar13 = *(uint *)(iVar2 + 0x20), uVar13 == 0)) {
          uVar9 = 0x1000;
        }
        else {
          if (uVar13 == 0) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (uVar13 + 0xfff) / uVar13;
          }
          uVar9 = uVar9 * uVar13;
          if (0x1000 < uVar9) {
            return 0;
          }
        }
        iVar2 = FUN_ram_40006ff2(_DAT_ram_3008aee4,0x18000,uVar9);
        if ((-1 < iVar2) &&
           (iVar2 = FUN_ram_40006fa8(_DAT_ram_3008aee4,0x18000,&DAT_ram_3008b79c,0x1000),
           iVar2 == 0x1000)) {
          uVar13 = 0;
          do {
            uVar9 = 0x1000 - uVar13;
            if (0x100 < uVar9) {
              uVar9 = 0x100;
            }
            uVar5 = fal_partition_read(_DAT_ram_3008aee4,uVar13 + 0x18000,auStack_140,uVar9);
            puVar7 = &DAT_ram_3008b79c + uVar13;
            uVar13 = uVar13 + uVar5;
            if (uVar5 != uVar9) {
              return 0;
            }
            iVar2 = FUN_ram_40002ffc(auStack_140,puVar7);
            if (iVar2 != 0) {
              return 0;
            }
          } while (uVar13 < 0x1000);
          _DAT_ram_3008c79c = 1;
          _DAT_ram_3008b794 = 0x18000;
          DAT_ram_3008b798 = 1;
          if (_DAT_ram_3008aee4 != 0) {
            FUN_ram_4000305c(&DAT_ram_3008c7a0,param_1,0x898);
            _DAT_ram_3008c7ac = 2;
            _DAT_ram_3008c7b0 = 0;
            _DAT_ram_3008c7b4 = 0x53413232;
            uVar4 = FUN_ram_4000755e(0,&DAT_ram_3008c7a0,0x10);
            uVar4 = FUN_ram_4000755e(uVar4,&DAT_ram_40099418,4);
            _DAT_ram_3008c7b0 = FUN_ram_4000755e(uVar4,&DAT_ram_3008c7b4,0x884);
            memset(&DAT_ram_3008b79c,0xff,0x1000);
            puVar14 = (undefined4 *)&DAT_ram_3008c7a0;
            puVar11 = (undefined4 *)&DAT_ram_3008b79c;
            do {
              uVar4 = puVar14[1];
              uVar6 = puVar14[2];
              uVar8 = puVar14[3];
              uVar10 = puVar14[4];
              *puVar11 = *puVar14;
              puVar11[1] = uVar4;
              puVar11[2] = uVar6;
              puVar11[3] = uVar8;
              puVar11[4] = uVar10;
              puVar14 = puVar14 + 5;
              puVar11 = puVar11 + 5;
            } while (puVar14 != (undefined4 *)0x3008d038);
            iVar2 = FUN_ram_40006dcc(_DAT_ram_3008aee4 + 0x1c);
            if ((iVar2 == 0) || (uVar13 = *(uint *)(iVar2 + 0x20), uVar13 == 0)) {
              uVar9 = 0x1000;
            }
            else {
              if (uVar13 == 0) {
                uVar9 = 0xffffffff;
              }
              else {
                uVar9 = (uVar13 + 0xfff) / uVar13;
              }
              uVar9 = uVar9 * uVar13;
              if (0x1000 < uVar9) {
                return 0;
              }
            }
            iVar2 = FUN_ram_40006ff2(_DAT_ram_3008aee4,0xa9000,uVar9);
            if ((-1 < iVar2) &&
               (iVar2 = FUN_ram_40006fa8(_DAT_ram_3008aee4,0xa9000,&DAT_ram_3008b79c,0x1000),
               iVar2 == 0x1000)) {
              uVar13 = 0;
              while( true ) {
                uVar9 = 0x1000 - uVar13;
                if (0x100 < uVar9) {
                  uVar9 = 0x100;
                }
                uVar5 = fal_partition_read(_DAT_ram_3008aee4,uVar13 + 0xa9000,auStack_140,uVar9);
                puVar7 = &DAT_ram_3008b79c + uVar13;
                uVar13 = uVar13 + uVar5;
                if ((uVar5 != uVar9) || (iVar2 = FUN_ram_40002ffc(auStack_140,puVar7), iVar2 != 0))
                break;
                if (0xfff < uVar13) {
                  _DAT_ram_3008b794 = 0xa9000;
                  DAT_ram_3008b798 = 1;
                  _DAT_ram_3008c79c = 2;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


/* NanoCore 1.10, address 0x4009048c.
 * REA evidence: ev_bd90c45b4480333a1d6cc525704e9372c757f6a533517b7c1dc836d9235c6533
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined ** FUN_ram_4009048c(void)

{
  return &PTR_FUN_ram_4008ee1c_ram_400993e0;
}


/* NanoCore 1.10, address 0x40090498.
 * REA evidence: ev_708699b2c04a20ad073cd9dfc58fdf052a36b744ded72d7c58361cd95a21d2bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40090498(undefined8 *param_1,undefined8 *param_2,float *param_3,uint param_4)

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


/* NanoCore 1.10, address 0x4009051c.
 * REA evidence: ev_31dbb2d8071d12fe9ce6996b209f4fb0de820d9eda3c64fc1363773c699e49a1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4009051c(undefined8 *param_1,undefined8 *param_2,uint param_3,ulonglong *param_4)

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


/* NanoCore 1.10, address 0x4009057c.
 * REA evidence: ev_dc48838ce014ebe73df540ddea524148dc8ae92682c2b697cab9e840f95cc6f0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4009057c(float param_1,undefined8 *param_2,float *param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = param_4 >> 2;
  uVar2 = uVar4;
  pfVar3 = param_3;
  puVar1 = param_2;
  if (uVar4 != 0) {
    do {
      uVar2 = uVar2 - 1;
      *pfVar3 = (float)*puVar1 * param_1;
      pfVar3[1] = *(float *)((int)puVar1 + 4) * param_1;
      pfVar3[2] = *(float *)(puVar1 + 1) * param_1;
      pfVar3[3] = *(float *)((int)puVar1 + 0xc) * param_1;
      pfVar3 = pfVar3 + 4;
      puVar1 = puVar1 + 2;
    } while (uVar2 != 0);
    param_2 = param_2 + uVar4 * 2;
    param_3 = param_3 + uVar4 * 4;
  }
  if ((param_4 & 3) != 0) {
    puVar1 = (undefined8 *)((int)param_2 + (param_4 & 3) * 4);
    do {
      uVar5 = *param_2;
      param_2 = (undefined8 *)((int)param_2 + 4);
      *param_3 = (float)uVar5 * param_1;
      param_3 = param_3 + 1;
    } while (param_2 != puVar1);
  }
  return;
}


/* NanoCore 1.10, address 0x400905e4.
 * REA evidence: ev_3e768fd98029667f95f3430b5a91904fe1c0420b6acb8fa6f7b76f14be7a5bd7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400905e4(byte *param_1,float *param_2,float *param_3,uint param_4)

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


/* NanoCore 1.10, address 0x40090832.
 * REA evidence: ev_a342259c82a980bdc145e72b895dcaf8541c4d76702a07037ab2f9f90f05595f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40090832(undefined1 *param_1,int param_2,undefined4 param_3,void *param_4)

{
  void *pvVar1;
  
  *param_1 = (char)param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  pvVar1 = memset(param_4,0,param_2 << 3);
  *(void **)(param_1 + 4) = pvVar1;
  return;
}


/* NanoCore 1.10, address 0x40090858.
 * REA evidence: ev_8b09ee7e39359aa71cf05917b426b9be19fe653ae1b0f73ac3a13068e92a9fca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40090858(ushort *param_1,undefined8 *param_2,float *param_3,uint param_4)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
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
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 *puVar38;
  undefined8 *puVar39;
  float *pfVar40;
  undefined8 *puVar41;
  uint uVar42;
  float *pfVar43;
  undefined8 *puVar44;
  float *pfVar45;
  float *pfVar46;
  float *pfVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  float *pfVar50;
  int iVar51;
  uint uVar52;
  uint uVar53;
  undefined4 *puVar54;
  uint uVar55;
  uint uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  ulonglong uVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined8 uVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  
  uVar1 = *param_1;
  uVar56 = (uint)uVar1;
  puVar41 = *(undefined8 **)(param_1 + 2);
  uVar42 = param_4 >> 3;
  pfVar40 = *(float **)(param_1 + 4);
  puVar54 = (undefined4 *)((int)puVar41 + uVar56 * 4 + -4);
  puVar49 = puVar41;
  if (uVar42 != 0) {
    uVar52 = (uint)(uVar1 >> 3);
    pfVar43 = (float *)((int)puVar41 + 0x1c);
    puVar38 = puVar54;
    puVar49 = param_2;
    pfVar50 = param_3;
    uVar55 = uVar42;
    do {
      fVar74 = 0.0;
      *puVar38 = *(undefined4 *)puVar49;
      fVar72 = 0.0;
      fVar68 = 0.0;
      puVar38[1] = *(undefined4 *)((int)puVar49 + 4);
      fVar73 = 0.0;
      fVar67 = 0.0;
      puVar38[2] = *(undefined4 *)(puVar49 + 1);
      puVar38[3] = *(undefined4 *)((int)puVar49 + 0xc);
      puVar38[4] = *(undefined4 *)(puVar49 + 2);
      puVar38[5] = *(undefined4 *)((int)puVar49 + 0x14);
      puVar38[6] = *(undefined4 *)(puVar49 + 3);
      puVar38[7] = *(undefined4 *)((int)puVar49 + 0x1c);
      fVar65 = pfVar43[-7];
      uVar66 = (ulonglong)(uint)pfVar43[-6];
      fVar62 = pfVar43[-5];
      fVar57 = pfVar43[-4];
      fVar58 = pfVar43[-3];
      fVar59 = pfVar43[-2];
      fVar60 = pfVar43[-1];
      fVar69 = 0.0;
      pfVar46 = pfVar40;
      pfVar47 = pfVar43;
      fVar61 = fVar73;
      fVar71 = fVar73;
      if (uVar52 != 0) {
        do {
          fVar2 = *pfVar46;
          fVar3 = *pfVar47;
          fVar4 = pfVar46[1];
          fVar12 = fVar2 * fVar65;
          fVar63 = (float)uVar66;
          fVar13 = fVar2 * fVar62;
          fVar14 = fVar2 * fVar57;
          fVar15 = fVar2 * fVar58;
          fVar16 = fVar2 * fVar59;
          fVar17 = fVar2 * fVar60;
          fVar65 = pfVar47[1];
          fVar18 = fVar4 * fVar62;
          fVar19 = fVar4 * fVar57;
          fVar20 = fVar4 * fVar58;
          fVar21 = fVar4 * fVar59;
          fVar22 = fVar4 * fVar60;
          uVar66 = *(ulonglong *)(pfVar47 + 2);
          fVar5 = pfVar46[2];
          fVar6 = pfVar46[3];
          fVar23 = fVar5 * fVar62;
          fVar24 = fVar5 * fVar57;
          fVar25 = fVar5 * fVar58;
          fVar26 = fVar5 * fVar59;
          fVar27 = fVar5 * fVar60;
          fVar64 = (float)uVar66;
          fVar62 = pfVar47[3];
          fVar28 = fVar6 * fVar57;
          fVar29 = fVar6 * fVar58;
          fVar30 = fVar6 * fVar59;
          fVar31 = fVar6 * fVar60;
          fVar57 = pfVar47[4];
          fVar7 = pfVar46[4];
          fVar8 = pfVar46[5];
          pfVar45 = pfVar46 + 8;
          fVar32 = fVar7 * fVar58;
          fVar33 = fVar7 * fVar59;
          fVar34 = fVar7 * fVar60;
          fVar58 = pfVar47[5];
          fVar35 = fVar8 * fVar59;
          fVar36 = fVar8 * fVar60;
          fVar59 = pfVar47[6];
          fVar9 = pfVar46[6];
          fVar37 = fVar9 * fVar60;
          fVar60 = pfVar47[7];
          fVar10 = pfVar46[7];
          fVar71 = fVar3 * fVar10 +
                   fVar37 + fVar35 + fVar32 + fVar28 + fVar23 + fVar4 * fVar63 + fVar12 + fVar71;
          fVar61 = fVar65 * fVar10 +
                   fVar3 * fVar9 +
                   fVar36 + fVar33 + fVar29 + fVar24 + fVar18 + fVar2 * fVar63 + fVar61;
          fVar73 = fVar64 * fVar10 +
                   fVar65 * fVar9 +
                   fVar3 * fVar8 + fVar34 + fVar30 + fVar25 + fVar19 + fVar13 + fVar73;
          fVar67 = fVar62 * fVar10 +
                   fVar64 * fVar9 +
                   fVar65 * fVar8 + fVar3 * fVar7 + fVar31 + fVar26 + fVar20 + fVar14 + fVar67;
          fVar72 = fVar57 * fVar10 +
                   fVar62 * fVar9 +
                   fVar64 * fVar8 +
                   fVar65 * fVar7 + fVar3 * fVar6 + fVar27 + fVar21 + fVar15 + fVar72;
          fVar68 = fVar58 * fVar10 +
                   fVar57 * fVar9 +
                   fVar62 * fVar8 +
                   fVar64 * fVar7 + fVar65 * fVar6 + fVar3 * fVar5 + fVar22 + fVar16 + fVar68;
          fVar69 = fVar59 * fVar10 +
                   fVar58 * fVar9 +
                   fVar57 * fVar8 +
                   fVar62 * fVar7 +
                   fVar64 * fVar6 + fVar65 * fVar5 + fVar3 * fVar4 + fVar17 + fVar69;
          fVar74 = fVar10 * fVar60 +
                   fVar9 * fVar59 +
                   fVar8 * fVar58 +
                   fVar7 * fVar57 +
                   fVar6 * fVar62 + fVar5 * fVar64 + fVar4 * fVar65 + fVar2 * fVar3 + fVar74;
          pfVar46 = pfVar45;
          pfVar47 = pfVar47 + 8;
        } while (pfVar45 != pfVar40 + uVar52 * 8);
        pfVar47 = pfVar43 + uVar52 * 8;
        pfVar46 = pfVar40 + uVar52 * 8;
      }
      uVar53 = uVar56 & 7;
      if ((uVar1 & 7) != 0) {
        do {
          fVar2 = *pfVar46;
          fVar3 = *pfVar47;
          uVar53 = uVar53 - 1;
          fVar71 = fVar2 * fVar65 + fVar71;
          fVar65 = (float)uVar66;
          fVar61 = fVar2 * fVar65 + fVar61;
          fVar73 = fVar2 * fVar62 + fVar73;
          fVar67 = fVar2 * fVar57 + fVar67;
          fVar72 = fVar2 * fVar58 + fVar72;
          fVar68 = fVar2 * fVar59 + fVar68;
          fVar69 = fVar2 * fVar60 + fVar69;
          fVar74 = fVar2 * fVar3 + fVar74;
          uVar66 = (ulonglong)(uint)fVar62;
          pfVar46 = pfVar46 + 1;
          pfVar47 = pfVar47 + 1;
          fVar62 = fVar57;
          fVar57 = fVar58;
          fVar58 = fVar59;
          fVar59 = fVar60;
          fVar60 = fVar3;
        } while (uVar53 != 0);
      }
      *pfVar50 = fVar71;
      pfVar50[1] = fVar61;
      pfVar50[2] = fVar73;
      pfVar50[3] = fVar67;
      pfVar50[4] = fVar72;
      pfVar50[5] = fVar68;
      pfVar50[6] = fVar69;
      pfVar50[7] = fVar74;
      uVar55 = uVar55 - 1;
      pfVar50 = pfVar50 + 8;
      pfVar43 = pfVar43 + 8;
      puVar38 = puVar38 + 8;
      puVar49 = puVar49 + 4;
    } while (uVar55 != 0);
    param_2 = param_2 + uVar42 * 4;
    puVar54 = puVar54 + uVar42 * 8;
    param_3 = param_3 + uVar42 * 8;
    puVar49 = puVar41 + uVar42 * 4;
  }
  if ((param_4 & 7) != 0) {
    iVar51 = (param_4 & 7) * 4;
    puVar39 = (undefined8 *)((int)param_2 + iVar51);
    puVar44 = puVar49;
    do {
      uVar70 = *param_2;
      param_2 = (undefined8 *)((int)param_2 + 4);
      *puVar54 = (int)uVar70;
      uVar66 = 0;
      pfVar50 = pfVar40;
      puVar48 = puVar44;
      for (uVar42 = uVar56; uVar42 != 0; uVar42 = uVar42 - 1) {
        uVar70 = *puVar48;
        puVar48 = (undefined8 *)((int)puVar48 + 4);
        uVar66 = (ulonglong)(uint)((float)uVar70 * (float)*(undefined8 *)pfVar50 + (float)uVar66);
        pfVar50 = pfVar50 + 1;
      }
      *(ulonglong *)param_3 = uVar66;
      puVar44 = (undefined8 *)((int)puVar44 + 4);
      param_3 = param_3 + 1;
      puVar54 = puVar54 + 1;
    } while (param_2 != puVar39);
    puVar49 = (undefined8 *)((int)puVar49 + iVar51);
  }
  uVar55 = uVar56 - 1 >> 2;
  uVar42 = uVar55;
  puVar44 = puVar41;
  puVar39 = puVar49;
  if (uVar55 != 0) {
    do {
      uVar42 = uVar42 - 1;
      *puVar44 = *puVar39;
      *(undefined4 *)((int)puVar44 + 4) = *(undefined4 *)((int)puVar39 + 4);
      *(undefined4 *)(puVar44 + 1) = *(undefined4 *)(puVar39 + 1);
      *(undefined4 *)((int)puVar44 + 0xc) = *(undefined4 *)((int)puVar39 + 0xc);
      puVar44 = puVar44 + 2;
      puVar39 = puVar39 + 2;
    } while (uVar42 != 0);
    puVar49 = puVar49 + uVar55 * 2;
    puVar41 = puVar41 + uVar55 * 2;
  }
  uVar42 = uVar56 - 1 & 3;
  puVar44 = (undefined8 *)((int)puVar49 + uVar42 * 4);
  if (uVar42 != 0) {
    do {
      uVar11 = *(undefined4 *)puVar49;
      puVar49 = (undefined8 *)((int)puVar49 + 4);
      *(undefined4 *)puVar41 = uVar11;
      puVar41 = (undefined8 *)((int)puVar41 + 4);
    } while (puVar49 != puVar44);
  }
  return;
}


/* NanoCore 1.10, address 0x40090bb0.
 * REA evidence: ev_d762f3e727bbb9fe37e21fcfd7ba23d472379ab0ec93d1ad34c8c2e43aff6361
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40090bb0(ushort *param_1,float *param_2)

{
  ushort uVar1;
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
  float *pfVar12;
  uint uVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  uVar1 = *param_1;
  uVar13 = (uint)(uVar1 >> 1);
  pfVar12 = param_2 + uVar1;
  pfVar15 = param_2 + uVar13;
  pfVar14 = *(float **)(param_1 + 2);
  if (uVar1 >> 3 != 0) {
    pfVar16 = pfVar12 + uVar13;
    pfVar17 = param_2;
    pfVar18 = pfVar12;
    pfVar19 = pfVar14;
    do {
      fVar2 = *pfVar18;
      fVar3 = pfVar18[1];
      fVar4 = pfVar18[3];
      fVar5 = pfVar18[2];
      fVar6 = *pfVar17;
      fVar7 = pfVar17[1];
      uVar22 = *(undefined8 *)(pfVar17 + 2);
      uVar23 = *(undefined8 *)(pfVar17 + 3);
      uVar21 = *(undefined8 *)pfVar16;
      uVar20 = *(undefined8 *)(pfVar16 + 1);
      uVar24 = *(undefined8 *)(pfVar16 + 2);
      uVar25 = *(undefined8 *)(pfVar16 + 3);
      fVar8 = *pfVar15;
      fVar9 = pfVar15[1];
      fVar10 = pfVar15[2];
      fVar11 = pfVar15[3];
      *pfVar17 = fVar6 + fVar2;
      pfVar17[1] = fVar7 + fVar3;
      *(ulonglong *)(pfVar17 + 2) = (ulonglong)(uint)((float)uVar22 + fVar5);
      *(ulonglong *)(pfVar17 + 3) = (ulonglong)(uint)((float)uVar23 + fVar4);
      fVar6 = fVar6 - fVar2;
      fVar7 = fVar7 - fVar3;
      pfVar15[3] = fVar11 + (float)uVar25;
      *pfVar15 = fVar8 + (float)uVar21;
      pfVar15[1] = fVar9 + (float)uVar20;
      pfVar15[2] = fVar10 + (float)uVar24;
      fVar8 = (float)uVar21 - fVar8;
      fVar9 = (float)uVar20 - fVar9;
      fVar2 = pfVar19[1];
      fVar3 = *pfVar19;
      fVar4 = (float)uVar23 - fVar4;
      fVar5 = (float)uVar22 - fVar5;
      fVar11 = (float)uVar25 - fVar11;
      pfVar18[1] = fVar7 * fVar3 - fVar6 * fVar2;
      *pfVar18 = fVar6 * fVar3 + fVar7 * fVar2;
      *(ulonglong *)(pfVar16 + 1) = (ulonglong)(uint)(fVar9 * fVar2 + fVar8 * fVar3);
      *(ulonglong *)pfVar16 = (ulonglong)(uint)(fVar8 * fVar2 - fVar9 * fVar3);
      fVar10 = (float)uVar24 - fVar10;
      fVar2 = pfVar19[3];
      fVar3 = pfVar19[2];
      pfVar17 = pfVar17 + 4;
      pfVar18[2] = fVar5 * fVar3 + fVar4 * fVar2;
      pfVar18[3] = fVar4 * fVar3 - fVar5 * fVar2;
      pfVar16[2] = fVar10 * fVar2 - fVar11 * fVar3;
      pfVar16[3] = fVar11 * fVar2 + fVar10 * fVar3;
      pfVar19 = pfVar19 + 4;
      pfVar15 = pfVar15 + 4;
      pfVar16 = pfVar16 + 4;
      pfVar18 = pfVar18 + 4;
    } while (pfVar17 != param_2 + (uint)(uVar1 >> 3) * 4);
  }
  FUN_ram_40091264(param_2,uVar13,pfVar14,2);
  FUN_ram_40091264(pfVar12,uVar13,*(undefined4 *)(param_1 + 2),2);
  return;
}


/* NanoCore 1.10, address 0x40090d24.
 * REA evidence: ev_88bcf794cc67e10def397af77cd4ec4bec37f205aa715c428ef18ac6351f8832
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40090d24(ushort *param_1,float *param_2)

{
  ushort uVar1;
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
  ushort uVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  uint uVar22;
  float *pfVar23;
  float *pfVar24;
  uint uVar25;
  int iVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  float *pfVar37;
  float *pfVar38;
  uint uVar39;
  float *pfVar40;
  float *pfVar41;
  float *pfVar42;
  float *pfVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  
  uVar1 = *param_1;
  uVar48 = *(undefined8 *)param_2;
  uVar18 = uVar1 >> 1;
  pfVar23 = param_2 + uVar18;
  pfVar32 = pfVar23 + uVar18;
  fVar4 = *pfVar32;
  fVar2 = (float)uVar48 + fVar4;
  pfVar24 = pfVar32 + uVar18;
  fVar47 = (float)*(undefined8 *)pfVar23;
  fVar44 = (float)*(undefined8 *)pfVar24;
  fVar3 = (float)*(undefined8 *)(param_2 + 1) + pfVar32[1];
  iVar26 = *(int *)(param_1 + 2);
  fVar5 = pfVar24[1];
  fVar6 = pfVar23[1];
  fVar46 = (float)*(undefined8 *)(param_2 + 1) - pfVar32[1];
  *param_2 = fVar47 + fVar2 + fVar44;
  fVar4 = (float)uVar48 - fVar4;
  *(ulonglong *)(param_2 + 1) = (ulonglong)(uint)(fVar3 + pfVar23[1] + pfVar24[1]);
  *pfVar23 = (fVar6 + fVar4) - fVar5;
  pfVar23[1] = (fVar46 - fVar47) + fVar44;
  uVar25 = (uint)(uVar1 >> 2);
  *pfVar32 = (fVar2 - fVar47) - fVar44;
  pfVar32[1] = (fVar3 - fVar6) - fVar5;
  *(ulonglong *)pfVar24 = (ulonglong)(uint)((fVar4 - fVar6) + fVar5);
  uVar39 = uVar25 - 2 >> 1;
  *(ulonglong *)(pfVar24 + 1) = (ulonglong)(uint)((fVar47 + fVar46) - fVar44);
  pfVar37 = param_2 + 2;
  pfVar33 = pfVar23 + 2;
  pfVar34 = pfVar32 + 2;
  pfVar19 = pfVar24 + 2;
  pfVar38 = (float *)(iVar26 + 8);
  pfVar36 = (float *)(iVar26 + 0x10);
  pfVar35 = (float *)(iVar26 + 0x18);
  if (uVar39 != 0) {
    pfVar20 = pfVar35;
    pfVar21 = pfVar23 + -1;
    uVar22 = uVar39;
    pfVar27 = pfVar33;
    pfVar28 = pfVar32 + -1;
    pfVar29 = pfVar24 + -1 + uVar18;
    pfVar30 = pfVar19;
    pfVar31 = pfVar24 + -1;
    pfVar40 = pfVar37;
    pfVar41 = pfVar34;
    pfVar42 = pfVar38;
    pfVar43 = pfVar36;
    do {
      fVar47 = *pfVar27;
      fVar7 = *pfVar30;
      fVar2 = *pfVar40 + *pfVar41;
      fVar5 = pfVar30[1];
      fVar3 = pfVar40[1] + pfVar41[1];
      uVar48 = *(undefined8 *)(pfVar27 + 1);
      fVar6 = *pfVar40 - *pfVar41;
      fVar11 = pfVar40[1] - pfVar41[1];
      *pfVar40 = fVar47 + fVar2 + fVar7;
      fVar46 = (float)uVar48;
      fVar4 = (fVar11 - fVar47) + fVar7;
      fVar12 = (fVar46 + fVar6) - fVar5;
      fVar13 = (fVar3 - fVar46) - fVar5;
      fVar5 = (fVar6 - fVar46) + fVar5;
      pfVar40[1] = fVar3 + (float)*(undefined8 *)(pfVar27 + 1) + pfVar30[1];
      fVar8 = *pfVar29;
      fVar3 = *pfVar21 + *pfVar31;
      fVar9 = pfVar29[-1];
      fVar10 = pfVar28[-1];
      fVar45 = (float)*(undefined8 *)pfVar28;
      fVar6 = pfVar21[-1] + pfVar31[-1];
      fVar14 = *pfVar21 - *pfVar31;
      fVar15 = pfVar21[-1] - pfVar31[-1];
      fVar46 = (fVar45 - fVar8) + fVar15;
      *pfVar21 = fVar45 + fVar3 + fVar8;
      fVar44 = (fVar14 - fVar10) + fVar9;
      fVar16 = (fVar6 - fVar10) - fVar9;
      fVar17 = (fVar2 - fVar47) - fVar7;
      fVar7 = (fVar47 + fVar11) - fVar7;
      fVar47 = (fVar3 - fVar45) - fVar8;
      fVar14 = (fVar9 - fVar10) - fVar14;
      pfVar21[-1] = fVar6 + (float)*(undefined8 *)(pfVar28 + -1) + pfVar29[-1];
      fVar2 = pfVar42[1];
      fVar3 = *pfVar42;
      fVar15 = (fVar45 - fVar8) - fVar15;
      pfVar27[1] = fVar4 * fVar3 - fVar12 * fVar2;
      *pfVar27 = fVar12 * fVar3 + fVar4 * fVar2;
      *pfVar28 = fVar44 * fVar2 - fVar46 * fVar3;
      pfVar28[-1] = fVar46 * fVar2 + fVar44 * fVar3;
      fVar2 = pfVar43[1];
      fVar3 = *pfVar43;
      *pfVar41 = fVar17 * fVar3 + fVar13 * fVar2;
      pfVar41[1] = fVar13 * fVar3 - fVar17 * fVar2;
      *pfVar31 = -(fVar47 * fVar3) - fVar16 * fVar2;
      pfVar31[-1] = -(fVar16 * fVar3) + fVar47 * fVar2;
      fVar2 = pfVar20[1];
      fVar3 = *pfVar20;
      uVar22 = uVar22 - 1;
      pfVar30[1] = fVar7 * fVar3 - fVar5 * fVar2;
      *pfVar30 = fVar5 * fVar3 + fVar7 * fVar2;
      *(ulonglong *)pfVar29 = (ulonglong)(uint)(fVar14 * fVar2 - fVar15 * fVar3);
      *(ulonglong *)(pfVar29 + -1) = (ulonglong)(uint)(fVar15 * fVar2 + fVar14 * fVar3);
      pfVar20 = pfVar20 + 6;
      pfVar21 = pfVar21 + -2;
      pfVar27 = pfVar27 + 2;
      pfVar28 = pfVar28 + -2;
      pfVar29 = pfVar29 + -2;
      pfVar30 = pfVar30 + 2;
      pfVar31 = pfVar31 + -2;
      pfVar40 = pfVar40 + 2;
      pfVar41 = pfVar41 + 2;
      pfVar42 = pfVar42 + 2;
      pfVar43 = pfVar43 + 4;
    } while (uVar22 != 0);
    pfVar37 = pfVar37 + uVar39 * 2;
    pfVar38 = pfVar38 + uVar39 * 2;
    pfVar33 = pfVar33 + uVar39 * 2;
    pfVar36 = pfVar36 + uVar39 * 4;
    pfVar34 = pfVar34 + uVar39 * 2;
    pfVar35 = pfVar35 + uVar39 * 6;
    pfVar19 = pfVar19 + uVar39 * 2;
  }
  fVar6 = *pfVar33;
  fVar46 = *pfVar19;
  fVar2 = *pfVar37 + *pfVar34;
  fVar44 = pfVar33[1];
  fVar5 = pfVar19[1];
  fVar3 = pfVar37[1] + pfVar34[1];
  fVar47 = *pfVar37 - *pfVar34;
  fVar7 = pfVar37[1] - pfVar34[1];
  *pfVar37 = fVar6 + fVar2 + fVar46;
  fVar8 = (fVar44 + fVar47) - fVar5;
  fVar4 = (fVar7 - fVar6) + fVar46;
  fVar9 = (fVar2 - fVar6) - fVar46;
  fVar46 = (fVar6 + fVar7) - fVar46;
  fVar6 = (fVar3 - fVar44) - fVar5;
  pfVar37[1] = fVar3 + pfVar33[1] + pfVar19[1];
  fVar2 = pfVar38[1];
  fVar3 = *pfVar38;
  fVar5 = (fVar47 - fVar44) + fVar5;
  pfVar33[1] = fVar4 * fVar3 - fVar8 * fVar2;
  *pfVar33 = fVar8 * fVar3 + fVar4 * fVar2;
  fVar2 = pfVar36[1];
  fVar3 = *pfVar36;
  pfVar34[1] = fVar6 * fVar3 - fVar9 * fVar2;
  *pfVar34 = fVar9 * fVar3 + fVar6 * fVar2;
  fVar2 = pfVar35[1];
  fVar3 = *pfVar35;
  pfVar19[1] = fVar46 * fVar3 - fVar5 * fVar2;
  *pfVar19 = fVar5 * fVar3 + fVar46 * fVar2;
  FUN_ram_40091264(param_2,uVar25,iVar26,4);
  FUN_ram_40091264(pfVar23,uVar25,*(undefined4 *)(param_1 + 2),4);
  FUN_ram_40091264(pfVar32,uVar25,*(undefined4 *)(param_1 + 2),4);
  FUN_ram_40091264(pfVar24,uVar25,*(undefined4 *)(param_1 + 2),4);
  return;
}


