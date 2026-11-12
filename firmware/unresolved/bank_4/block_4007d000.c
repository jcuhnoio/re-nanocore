/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4007d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4007d2c2.
 * REA evidence: ev_eafcd20223f62d2bf310ee1acf2224947e1ee8591833a631ee94a69e60fd74cd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007d2c2(uint param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  if (param_2 != (ulonglong *)0x0) {
    memset(param_2,0,0x4982c);
    uVar6 = DAT_ram_40098f4c;
    uVar5 = DAT_ram_40098a00;
    uVar4 = DAT_ram_400989d4;
    uVar3 = DAT_ram_40093494;
    uVar2 = DAT_ram_4009286c;
    uVar1 = DAT_ram_4009281c;
    uVar7 = (ulonglong)DAT_ram_40093108;
    uVar8 = (ulonglong)DAT_ram_400930a4;
    uVar9 = (ulonglong)DAT_ram_400989e4;
    uVar10 = (ulonglong)DAT_ram_400934ec;
    uVar11 = (ulonglong)DAT_ram_4009839c;
    uVar12 = (ulonglong)DAT_ram_400934dc;
    *param_2 = (ulonglong)param_1;
    *(undefined1 *)(param_2 + 3) = 1;
    *(undefined1 *)((int)param_2 + 0x25) = 1;
    *(undefined **)((int)param_2 + 0x44) = &sedeleg;
    *(undefined4 *)((int)param_2 + 4) = uVar6;
    *(undefined4 *)((int)param_2 + 0xc) = uVar5;
    *(undefined4 *)(param_2 + 2) = uVar2;
    *(undefined4 *)((int)param_2 + 0x14) = uVar4;
    *(undefined4 *)((int)param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 5) = uVar3;
    *(ulonglong *)((int)param_2 + 0x2c) = uVar7;
    param_2[6] = uVar8;
    *(ulonglong *)((int)param_2 + 0x34) = uVar9;
    param_2[7] = uVar10;
    *(ulonglong *)((int)param_2 + 0x3c) = uVar11;
    param_2[8] = uVar12;
    FUN_ram_4007bd00(param_2);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4007d388.
 * REA evidence: ev_99124e4dd6db5e98cffea80053d3e060fb16626b9f96589b78c95ff6b343d6c4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007d388(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    if ((*(char *)(param_1 + 0x18) != *(char *)(param_2 + 5)) ||
       (*(int *)(param_1 + 0x20) != param_2[7])) {
      *(undefined1 *)(param_1 + 0x45) = 1;
    }
    puVar4 = (undefined4 *)(param_1 + 4);
    puVar5 = param_2 + 0x10;
    do {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *puVar4 = *param_2;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      param_2 = param_2 + 4;
      puVar4 = puVar4 + 4;
    } while (param_2 != puVar5);
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  return;
}


/* NanoCore 1.10, address 0x4007d3d4.
 * REA evidence: ev_af97ce5bd068bcf10ffac3e094114bbf1fd7e6d605bacc00338b94b1caf7177e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007d3d4(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(ushort *)(param_1 + 0x205c) == 0) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x205e);
    *(undefined2 *)(param_1 + 0x2064) = 0;
    if (uVar2 == 0) goto LAB_ram_4007d40a;
LAB_ram_4007d78e:
    memset((void *)(param_1 + 0x85c),0,uVar2 << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0x2060);
    *(undefined2 *)(param_1 + 0x2066) = 0;
    if (uVar2 != 0) goto LAB_ram_4007d76a;
LAB_ram_4007d41a:
    uVar2 = (uint)*(ushort *)(param_1 + 0x2062);
    *(undefined2 *)(param_1 + 0x2068) = 0;
    if (uVar2 == 0) goto LAB_ram_4007d42c;
LAB_ram_4007d744:
    memset((void *)(param_1 + 0x185c),0,uVar2 << 2);
    *(undefined2 *)(param_1 + 0x206a) = 0;
    uVar2 = (uint)*(ushort *)(param_1 + 0x506c);
    if (uVar2 != 0) goto LAB_ram_4007d724;
LAB_ram_4007d442:
    uVar2 = (uint)*(ushort *)(param_1 + 0x506e);
    *(undefined2 *)(param_1 + 0x5072) = 0;
    if (uVar2 == 0) goto LAB_ram_4007d452;
LAB_ram_4007d702:
    memset((void *)(param_1 + 0x306c),0,uVar2 << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0x5070);
    *(undefined2 *)(param_1 + 0x5074) = 0;
    if (uVar2 != 0) goto LAB_ram_4007d6da;
LAB_ram_4007d462:
    *(undefined2 *)(param_1 + 0x5076) = 0;
    uVar2 = (uint)*(ushort *)(param_1 + 0xd078);
    if (uVar2 == 0) goto LAB_ram_4007d478;
LAB_ram_4007d6ba:
    memset((void *)(param_1 + 0x5078),0,uVar2 << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0xd07a);
    *(undefined2 *)(param_1 + 0xd080) = 0;
    if (uVar2 != 0) goto LAB_ram_4007d698;
LAB_ram_4007d488:
    uVar2 = (uint)*(ushort *)(param_1 + 0xd07c);
    *(undefined2 *)(param_1 + 0xd082) = 0;
    if (uVar2 == 0) goto LAB_ram_4007d498;
LAB_ram_4007d676:
    memset((void *)(param_1 + 0x9078),0,uVar2 << 2);
    uVar1 = *(ushort *)(param_1 + 0xd07e);
    *(undefined2 *)(param_1 + 0xd084) = 0;
  }
  else {
    memset((void *)(param_1 + 0x5c),0,(uint)*(ushort *)(param_1 + 0x205c) << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0x205e);
    *(undefined2 *)(param_1 + 0x2064) = 0;
    if (uVar2 != 0) goto LAB_ram_4007d78e;
LAB_ram_4007d40a:
    uVar2 = (uint)*(ushort *)(param_1 + 0x2060);
    *(undefined2 *)(param_1 + 0x2066) = 0;
    if (uVar2 == 0) goto LAB_ram_4007d41a;
LAB_ram_4007d76a:
    memset((void *)(param_1 + 0x105c),0,uVar2 << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0x2062);
    *(undefined2 *)(param_1 + 0x2068) = 0;
    if (uVar2 != 0) goto LAB_ram_4007d744;
LAB_ram_4007d42c:
    *(undefined2 *)(param_1 + 0x206a) = 0;
    uVar2 = (uint)*(ushort *)(param_1 + 0x506c);
    if (uVar2 == 0) goto LAB_ram_4007d442;
LAB_ram_4007d724:
    memset((void *)(param_1 + 0x206c),0,uVar2 << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0x506e);
    *(undefined2 *)(param_1 + 0x5072) = 0;
    if (uVar2 != 0) goto LAB_ram_4007d702;
LAB_ram_4007d452:
    uVar2 = (uint)*(ushort *)(param_1 + 0x5070);
    *(undefined2 *)(param_1 + 0x5074) = 0;
    if (uVar2 == 0) goto LAB_ram_4007d462;
LAB_ram_4007d6da:
    memset((void *)(param_1 + 0x406c),0,uVar2 << 2);
    *(undefined2 *)(param_1 + 0x5076) = 0;
    uVar2 = (uint)*(ushort *)(param_1 + 0xd078);
    if (uVar2 != 0) goto LAB_ram_4007d6ba;
LAB_ram_4007d478:
    uVar2 = (uint)*(ushort *)(param_1 + 0xd07a);
    *(undefined2 *)(param_1 + 0xd080) = 0;
    if (uVar2 == 0) goto LAB_ram_4007d488;
LAB_ram_4007d698:
    memset((void *)(param_1 + 0x7078),0,uVar2 << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0xd07c);
    *(undefined2 *)(param_1 + 0xd082) = 0;
    if (uVar2 != 0) goto LAB_ram_4007d676;
LAB_ram_4007d498:
    uVar1 = *(ushort *)(param_1 + 0xd07e);
    *(undefined2 *)(param_1 + 0xd084) = 0;
  }
  if (uVar1 != 0) {
    memset((void *)(param_1 + 0xb078),0,(uint)uVar1 << 2);
  }
  *(undefined2 *)(param_1 + 0xd086) = 0;
  if (*(ushort *)(param_1 + 0x38c88) == 0) {
    *(undefined4 *)(param_1 + 0x38ccc) = 0;
    iVar3 = 1;
  }
  else {
    memset((void *)(param_1 + 0xd088),0,(uint)*(ushort *)(param_1 + 0x38c88) << 2);
    *(undefined4 *)(param_1 + 0x38ccc) = 0;
    if (*(ushort *)(param_1 + 0x38c88) == 0) {
      *(undefined4 *)(param_1 + 0x38cd0) = 0;
      iVar3 = 2;
    }
    else {
      memset((void *)(param_1 + 0x12808),0,(uint)*(ushort *)(param_1 + 0x38c88) << 2);
      *(undefined4 *)(param_1 + 0x38cd0) = 0;
      if (*(ushort *)(param_1 + 0x38c88) == 0) {
        *(undefined4 *)(param_1 + 0x38cd4) = 0;
        iVar3 = 3;
      }
      else {
        memset((void *)(param_1 + 0x17f88),0,(uint)*(ushort *)(param_1 + 0x38c88) << 2);
        *(undefined4 *)(param_1 + 0x38cd4) = 0;
        if (*(ushort *)(param_1 + 0x38c88) == 0) {
          *(undefined4 *)(param_1 + 0x38cd8) = 0;
          iVar3 = 4;
        }
        else {
          memset((void *)(param_1 + 0x1d708),0,(uint)*(ushort *)(param_1 + 0x38c88) << 2);
          *(undefined4 *)(param_1 + 0x38cd8) = 0;
          if (*(ushort *)(param_1 + 0x38c88) == 0) {
            *(undefined4 *)(param_1 + 0x38cdc) = 0;
            iVar3 = 5;
          }
          else {
            memset((void *)(param_1 + 0x22e88),0,(uint)*(ushort *)(param_1 + 0x38c88) << 2);
            *(undefined4 *)(param_1 + 0x38cdc) = 0;
            if (*(ushort *)(param_1 + 0x38c88) == 0) {
              *(undefined4 *)(param_1 + 0x38ce0) = 0;
              iVar3 = 6;
            }
            else {
              memset((void *)(param_1 + 0x28608),0,(uint)*(ushort *)(param_1 + 0x38c88) << 2);
              *(undefined4 *)(param_1 + 0x38ce0) = 0;
              if (*(ushort *)(param_1 + 0x38c88) != 0) {
                memset((void *)(param_1 + 0x2dd88),0,(uint)*(ushort *)(param_1 + 0x38c88) << 2);
                *(undefined4 *)(param_1 + 0x38ce4) = 0;
                if (*(ushort *)(param_1 + 0x38c88) != 0) {
                  memset((void *)(param_1 + 0x33508),0,(uint)*(ushort *)(param_1 + 0x38c88) << 2);
                }
                *(undefined4 *)(param_1 + 0x38ce8) = 0;
                goto LAB_ram_4007d4dc;
              }
              *(undefined4 *)(param_1 + 0x38ce4) = 0;
              iVar3 = 7;
            }
          }
        }
      }
    }
  }
  memset((void *)(param_1 + (iVar3 + 0xe333) * 4),0,(8 - iVar3) * 4);
LAB_ram_4007d4dc:
  *(undefined2 *)(param_1 + 0x38c8a) = 0;
  memset((void *)(param_1 + 0x38de4),0,24000);
  *(undefined2 *)(param_1 + 0x3eba4) = 0;
  if (*(ushort *)(param_1 + 0x487e8) == 0) {
    memset((void *)(param_1 + 0x3eba8),0,40000);
  }
  else {
    memset((void *)(param_1 + 0x3eba8),0,(uint)*(ushort *)(param_1 + 0x487e8) << 2);
  }
  *(undefined2 *)(param_1 + 0x487ea) = 0;
  *(undefined4 *)(param_1 + 0x487f0) = 0;
  *(undefined4 *)(param_1 + 0x48808) = 0;
  *(undefined4 *)(param_1 + 0x4880c) = 0;
  *(undefined4 *)(param_1 + 0x48814) = 0;
  *(undefined4 *)(param_1 + 0x4881c) = 0;
  *(undefined4 *)(param_1 + 0x48820) = 0;
  *(undefined2 *)(param_1 + 0x38dce) = 0;
  return;
}


/* NanoCore 1.10, address 0x4007d7e6.
 * REA evidence: ev_3654cf0692d7ea7516f2b7d6faa9d05220d7cfe5c95e6765a67e1b6b617114c7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007d7e6(undefined8 *param_1)

{
  ushort uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  
  fVar2 = DAT_ram_40098104;
  fVar16 = DAT_ram_40092864;
  fVar12 = (float)*param_1;
  if ((float)*param_1 <= DAT_ram_40093094) {
    fVar12 = DAT_ram_400980e0;
  }
  fVar13 = (float)*(undefined8 *)((int)param_1 + 4);
  fVar15 = DAT_ram_40099044;
  fVar14 = DAT_ram_400934f0;
  if ((DAT_ram_400934f0 <= fVar13) &&
     (fVar15 = DAT_ram_40099048, fVar14 = DAT_ram_400934ec, fVar13 <= DAT_ram_400934ec)) {
    fVar15 = fVar13 + fVar13;
    fVar14 = fVar13;
  }
  fVar13 = (float)param_1[1] * DAT_ram_40098104 * fVar12;
  if (0.0 <= fVar13) {
    fVar13 = fVar13 + DAT_ram_40092864;
  }
  else {
    fVar13 = fVar13 - DAT_ram_40092864;
  }
  fVar22 = (float)*(undefined8 *)((int)param_1 + 0xc) * DAT_ram_40098104 * fVar12;
  if (0.0 <= fVar22) {
    fVar22 = fVar22 + DAT_ram_40092864;
    fVar19 = (float)*(undefined8 *)((int)param_1 + 0x34);
  }
  else {
    fVar22 = fVar22 - DAT_ram_40092864;
    fVar19 = (float)*(undefined8 *)((int)param_1 + 0x34);
  }
  fVar19 = fVar19 * DAT_ram_40098104 * fVar12;
  if (0.0 <= fVar19) {
    fVar19 = fVar19 + DAT_ram_40092864;
  }
  else {
    fVar19 = fVar19 - DAT_ram_40092864;
  }
  if (0.0 <= fVar12 / fVar15) {
    fVar15 = fVar12 / fVar15 + DAT_ram_40092864;
    uVar1 = *(ushort *)((int)param_1 + 0x2e);
    uVar9 = (uint)(*(ushort *)((int)param_1 + 0x2c) >> 1);
    if (*(ushort *)((int)param_1 + 0x2c) < 2) {
      uVar9 = 1;
    }
  }
  else {
    fVar15 = fVar12 / fVar15 - DAT_ram_40092864;
    uVar1 = *(ushort *)((int)param_1 + 0x2e);
    uVar9 = (uint)(*(ushort *)((int)param_1 + 0x2c) >> 1);
    if (*(ushort *)((int)param_1 + 0x2c) < 2) {
      uVar9 = 1;
    }
  }
  iVar3 = (int)fVar15;
  if (uVar1 < 2) {
    uVar11 = 2;
    uVar10 = 1;
  }
  else {
    uVar10 = (uint)(uVar1 >> 1);
    uVar11 = uVar10 << 1;
  }
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  if (*(ushort *)((int)param_1 + 0x29c) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x55);
    uVar6 = (uint)*(ushort *)(param_1 + 0x54);
  }
  else {
    uVar6 = (int)fVar13 & ~(int)fVar13 >> 0x1f;
    uVar7 = *(ushort *)((int)param_1 + 0x29c) - 1;
    if ((int)uVar6 < (int)uVar7) {
      uVar7 = uVar6;
    }
    uVar6 = uVar7 & 0xffff;
    uVar1 = *(ushort *)(param_1 + 0x55);
    *(short *)(param_1 + 0x54) = (short)uVar7;
  }
  if (uVar1 == 0) {
    uVar5 = (uint)*(ushort *)((int)param_1 + 0x2ac);
  }
  else {
    uVar5 = (int)fVar22 & ~(int)fVar22 >> 0x1f;
    uVar7 = uVar1 - 1;
    if ((int)uVar5 < (int)uVar7) {
      uVar7 = uVar5;
    }
    uVar5 = uVar7 & 0xffff;
    *(short *)((int)param_1 + 0x2ac) = (short)uVar7;
  }
  if (*(ushort *)((int)param_1 + 0x304) != 0) {
    uVar4 = (int)fVar19 & ~(int)fVar19 >> 0x1f;
    uVar7 = *(ushort *)((int)param_1 + 0x304) - 1;
    if ((int)uVar4 < (int)uVar7) {
      uVar7 = uVar4;
    }
    *(short *)(param_1 + 0x61) = (short)uVar7;
  }
  *(float *)(param_1 + 0x62) = (float)uVar6;
  *(float *)((int)param_1 + 0x314) = (float)uVar5;
  fVar15 = (float)FUN_ram_400008b8(0,(float)*(undefined8 *)((int)param_1 + 0x3c) * fVar2 * fVar12);
  *(float *)(param_1 + 99) = fVar15;
  if ((fVar15 <= 0.0) || ((float)param_1[8] <= 0.0)) {
    fVar16 = *(float *)(param_1 + 3);
    *(undefined1 *)((int)param_1 + 0x30c) = 0;
  }
  else {
    fVar13 = (float)uVar6 + fVar15;
    *(undefined1 *)((int)param_1 + 0x30c) = 1;
    if (0.0 <= fVar13) {
      fVar13 = fVar13 + fVar16;
    }
    else {
      fVar13 = fVar13 - fVar16;
    }
    fVar15 = (float)uVar5 + fVar15;
    if (0.0 <= fVar15) {
      fVar15 = fVar15 + fVar16;
    }
    else {
      fVar15 = fVar15 - fVar16;
    }
    if ((*(void **)(param_1 + 0x56) != (void *)0x0) &&
       (uVar6 = (uint)*(ushort *)((int)param_1 + 0x2b4), uVar6 != 0)) {
      uVar7 = (int)fVar13 + 4;
      if ((uVar7 & 0xffff) < 4) {
        uVar7 = 4;
      }
      if ((uVar7 & 0xffff) < uVar6) {
        uVar6 = uVar7;
      }
      *(short *)((int)param_1 + 0x2b6) = (short)uVar6;
      *(undefined2 *)(param_1 + 0x57) = 0;
      memset(*(void **)(param_1 + 0x56),0,(uVar6 & 0xffff) << 2);
    }
    if ((*(void **)((int)param_1 + 700) != (void *)0x0) &&
       (uVar6 = (uint)*(ushort *)(param_1 + 0x58), uVar6 != 0)) {
      uVar7 = (int)fVar15 + 4;
      if ((uVar7 & 0xffff) < 4) {
        uVar7 = 4;
      }
      if ((uVar7 & 0xffff) < uVar6) {
        uVar6 = uVar7;
      }
      *(short *)((int)param_1 + 0x2c2) = (short)uVar6;
      *(undefined2 *)((int)param_1 + 0x2c4) = 0;
      memset(*(void **)((int)param_1 + 700),0,(uVar6 & 0xffff) << 2);
    }
    fVar15 = *(float *)(param_1 + 8);
    fVar16 = (float)FUN_ram_400008b8(0,fVar15);
    fVar13 = DAT_ram_400980f4;
    uVar18 = *(undefined4 *)(param_1 + 0x59);
    fVar16 = (fVar16 * DAT_ram_400980f4) / fVar12;
    *(float *)((int)param_1 + 0x2cc) = fVar16;
    uVar17 = FUN_ram_40000a08(uVar18);
    *(undefined4 *)(param_1 + 0x5a) = uVar17;
    uVar18 = FUN_ram_40000786(uVar18);
    *(undefined4 *)((int)param_1 + 0x2d4) = uVar18;
    uVar18 = FUN_ram_40000a08(fVar16);
    *(undefined4 *)(param_1 + 0x5b) = uVar18;
    uVar18 = FUN_ram_40000786(fVar16);
    *(undefined4 *)((int)param_1 + 0x2dc) = uVar18;
    *(undefined2 *)(param_1 + 0x5c) = 0;
    fVar16 = (float)FUN_ram_400008b8(0,*(undefined8 *)((int)param_1 + 0x44));
    fVar16 = (float)FUN_ram_400008b8(0,fVar16 * fVar15);
    uVar18 = *(undefined4 *)((int)param_1 + 0x2e4);
    fVar16 = (fVar16 * fVar13) / fVar12;
    *(float *)(param_1 + 0x5d) = fVar16;
    uVar17 = FUN_ram_40000a08(uVar18);
    *(undefined4 *)((int)param_1 + 0x2ec) = uVar17;
    uVar18 = FUN_ram_40000786(uVar18);
    *(undefined4 *)(param_1 + 0x5e) = uVar18;
    uVar18 = FUN_ram_40000a08(fVar16);
    *(undefined4 *)((int)param_1 + 0x2f4) = uVar18;
    uVar18 = FUN_ram_40000786(fVar16);
    fVar16 = *(float *)(param_1 + 3);
    *(undefined2 *)((int)param_1 + 0x2fc) = 0;
    *(undefined4 *)(param_1 + 0x5f) = uVar18;
  }
  if (fVar16 <= 0.0) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    *(undefined4 *)((int)param_1 + 0x5c) = 0;
  }
  else {
    fVar19 = (float)FUN_ram_400008b8(0,*(undefined8 *)((int)param_1 + 0x1c));
    uVar18 = DAT_ram_400930a4;
    fVar13 = DAT_ram_40092838;
    fVar15 = (float)*(ushort *)((int)param_1 + 0x2ac) / fVar12;
    fVar22 = fVar16;
    if (fVar16 <= fVar2) {
      fVar22 = fVar2;
    }
    fVar21 = DAT_ram_4009904c;
    if (DAT_ram_40092838 < (float)*(ushort *)(param_1 + 0x54) / fVar12) {
      fVar21 = ((float)*(ushort *)(param_1 + 0x54) / fVar12) * DAT_ram_40098108;
    }
    uVar20 = FUN_ram_40000d54(DAT_ram_400930a4,fVar21 / fVar22);
    param_1[0xb] = uVar20;
    fVar22 = fVar16 * fVar19;
    if (fVar16 * fVar19 <= fVar2) {
      fVar22 = fVar2;
    }
    fVar16 = DAT_ram_4009904c;
    if (fVar13 < fVar15) {
      fVar16 = fVar15 * DAT_ram_40098108;
    }
    uVar20 = FUN_ram_40000d54(uVar18,fVar16 / fVar22);
    *(undefined8 *)((int)param_1 + 0x5c) = uVar20;
  }
  iVar3 = iVar3 * 2;
  if ((int)(uint)*(ushort *)((int)param_1 + 0x15c) < (int)(iVar3 * uVar9)) {
    if (iVar3 == 0) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = (int)(uint)*(ushort *)((int)param_1 + 0x15c) / iVar3;
    }
    if (uVar9 == 0) {
      uVar9 = 1;
      iVar3 = 1;
    }
  }
  iVar8 = *(int *)(param_1 + 0x2b);
  *(float *)((int)param_1 + 0x14c) = -ABS((float)*(undefined8 *)((int)param_1 + 0x24));
  *(int *)(param_1 + 0x2a) = iVar3;
  *(uint *)((int)param_1 + 0x154) = uVar9;
  if (iVar3 <= iVar8) {
    if (iVar3 != 0) {
      iVar8 = iVar8 % iVar3;
    }
    *(int *)(param_1 + 0x2b) = iVar8;
  }
  uVar9 = (uint)*(ushort *)(param_1 + 0x4f);
  iVar3 = 2;
  if ((uVar9 < uVar11) && (uVar10 = (int)uVar9 >> 1, uVar9 < 2)) {
    uVar10 = 1;
    iVar3 = 1;
  }
  iVar8 = *(int *)((int)param_1 + 0x274);
  *(int *)(param_1 + 0x4d) = (int)param_1[5];
  *(int *)((int)param_1 + 0x26c) = iVar3;
  *(uint *)(param_1 + 0x4e) = uVar10;
  if (iVar3 <= iVar8) {
    if (iVar3 != 0) {
      iVar8 = iVar8 % iVar3;
    }
    *(int *)((int)param_1 + 0x274) = iVar8;
  }
  uVar18 = FUN_ram_40000c0e((fVar14 * DAT_ram_4009810c) / fVar12);
  fVar16 = DAT_ram_40099050;
  *(undefined4 *)((int)param_1 + 0x31c) = uVar18;
  uVar18 = FUN_ram_40000c0e(fVar16 / fVar12);
  *(undefined1 *)((int)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x72) = uVar18;
  return;
}


/* NanoCore 1.10, address 0x4007dd56.
 * REA evidence: ev_dd791a1c16d8b81b04f065b4ecae7616e26f20db70e9c107ef9ccb47a2ff66ce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007dd56(float param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  if (param_2 != (ulonglong *)0x0) {
    memset(param_2,0,0x1d420);
    uVar8 = DAT_ram_40099078;
    uVar7 = DAT_ram_4009906c;
    uVar6 = DAT_ram_40099068;
    uVar5 = DAT_ram_40099064;
    uVar4 = DAT_ram_40099060;
    uVar3 = DAT_ram_4009905c;
    uVar2 = DAT_ram_40099058;
    uVar1 = DAT_ram_400989ec;
    if (param_1 <= DAT_ram_40093094) {
      param_1 = DAT_ram_400980e0;
    }
    uVar9 = (ulonglong)DAT_ram_40099070;
    uVar10 = (ulonglong)DAT_ram_40099074;
    uVar11 = (ulonglong)DAT_ram_4009907c;
    uVar13 = (ulonglong)DAT_ram_40099084;
    uVar14 = (ulonglong)DAT_ram_40099088;
    uVar12 = (ulonglong)DAT_ram_40099080;
    *(undefined4 *)((int)param_2 + 4) = DAT_ram_40099054;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined4 *)((int)param_2 + 0xc) = uVar3;
    *(undefined4 *)(param_2 + 2) = uVar4;
    *(undefined4 *)((int)param_2 + 0x14) = uVar5;
    *(undefined4 *)(param_2 + 3) = uVar6;
    *(undefined4 *)((int)param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 4) = uVar7;
    *(ulonglong *)((int)param_2 + 0x24) = uVar9;
    param_2[5] = uVar10;
    *(ulonglong *)((int)param_2 + 0x34) = uVar11;
    *(undefined4 *)((int)param_2 + 0x2c) = uVar8;
    *(ulonglong *)((int)param_2 + 0x3c) = uVar13;
    param_2[8] = uVar14;
    *param_2 = (ulonglong)(uint)param_1;
    *(undefined1 *)(param_2 + 6) = 1;
    param_2[7] = uVar12;
    uVar9 = (ulonglong)DAT_ram_4009281c;
    uVar10 = (ulonglong)DAT_ram_400930fc;
    *(ulonglong *)((int)param_2 + 0x44) = (ulonglong)DAT_ram_400989f0;
    param_2[9] = uVar9;
    param_2[10] = uVar10;
    *(undefined2 *)((int)param_2 + 0x29c) = 0x1001;
    *(void **)(param_2 + 0x53) = (void *)((int)param_2 + 0x40c);
    memset((void *)((int)param_2 + 0x40c),0,0x4004);
    *(undefined2 *)(param_2 + 0x55) = 0x801;
    *(ulonglong **)((int)param_2 + 0x2a4) = param_2 + 0x882;
    memset(param_2 + 0x882,0,0x2004);
    *(undefined2 *)((int)param_2 + 0x304) = 0x401;
    *(void **)(param_2 + 0x60) = (void *)((int)param_2 + 0x6414);
    memset((void *)((int)param_2 + 0x6414),0,0x1004);
    uVar1 = DAT_ram_4009908c;
    *(undefined4 *)((int)param_2 + 0x2b4) = DAT_ram_4009908c;
    *(ulonglong **)(param_2 + 0x56) = param_2 + 0xe83;
    memset(param_2 + 0xe83,0,0x4000);
    *(undefined4 *)(param_2 + 0x58) = uVar1;
    *(ulonglong **)((int)param_2 + 700) = param_2 + 0x1683;
    memset(param_2 + 0x1683,0,0x4000);
    *(undefined4 *)(param_2 + 0x2a) = 1;
    *(undefined4 *)((int)param_2 + 0x154) = 1;
    *(undefined2 *)((int)param_2 + 0x15c) = 0x1800;
    *(ulonglong **)(param_2 + 0x2c) = param_2 + 0x1e83;
    memset(param_2 + 0x1e83,0,0x6000);
    *(undefined4 *)((int)param_2 + 0x26c) = 1;
    *(undefined4 *)(param_2 + 0x4e) = 1;
    *(void **)((int)param_2 + 0x27c) = (void *)((int)param_2 + 0x1b41c);
    *(undefined2 *)(param_2 + 0x4f) = 0x400;
    memset((void *)((int)param_2 + 0x1b41c),0,0x1000);
    *(undefined1 *)((int)param_2 + 0x54) = 1;
    FUN_ram_4007d7e6(param_2);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4007df5a.
 * REA evidence: ev_a08d836671bcea60da2a2f43c4a317fee54b3aec3f0638755f1058e2114e119d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007df5a(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    puVar4 = (undefined4 *)(param_1 + 4);
    puVar5 = param_2 + 0x14;
    do {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *puVar4 = *param_2;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      param_2 = param_2 + 4;
      puVar4 = puVar4 + 4;
    } while (param_2 != puVar5);
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
  return;
}


/* NanoCore 1.10, address 0x4007df8a.
 * REA evidence: ev_fb45b5f4fb4412a7a29f337a57bd181cfa1059f06ea29f7c24cc9e49a04b7c93
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007df8a(int param_1)

{
  undefined4 uVar1;
  void *__s;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1 != 0) {
    if ((*(void **)(param_1 + 0x298) == (void *)0x0) || (*(ushort *)(param_1 + 0x29c) == 0)) {
      __s = *(void **)(param_1 + 0x2a4);
    }
    else {
      memset(*(void **)(param_1 + 0x298),0,(uint)*(ushort *)(param_1 + 0x29c) << 2);
      __s = *(void **)(param_1 + 0x2a4);
      *(undefined2 *)(param_1 + 0x29e) = 0;
    }
    if ((__s != (void *)0x0) && (*(ushort *)(param_1 + 0x2a8) != 0)) {
      memset(__s,0,(uint)*(ushort *)(param_1 + 0x2a8) << 2);
      *(undefined2 *)(param_1 + 0x2aa) = 0;
    }
    if ((*(void **)(param_1 + 0x300) != (void *)0x0) && (*(ushort *)(param_1 + 0x304) != 0)) {
      memset(*(void **)(param_1 + 0x300),0,(uint)*(ushort *)(param_1 + 0x304) << 2);
      *(undefined2 *)(param_1 + 0x306) = 0;
    }
    if ((*(void **)(param_1 + 0x2b0) != (void *)0x0) && (*(ushort *)(param_1 + 0x2b6) != 0)) {
      memset(*(void **)(param_1 + 0x2b0),0,(uint)*(ushort *)(param_1 + 0x2b6) << 2);
      *(undefined2 *)(param_1 + 0x2b8) = 0;
    }
    if ((*(void **)(param_1 + 700) != (void *)0x0) && (*(ushort *)(param_1 + 0x2c2) != 0)) {
      memset(*(void **)(param_1 + 700),0,(uint)*(ushort *)(param_1 + 0x2c2) << 2);
      *(undefined2 *)(param_1 + 0x2c4) = 0;
    }
    if (*(void **)(param_1 + 0x160) != (void *)0x0) {
      memset(*(void **)(param_1 + 0x160),0,(uint)*(ushort *)(param_1 + 0x15c) << 2);
    }
    *(undefined4 *)(param_1 + 0x158) = 0;
    if (*(void **)(param_1 + 0x27c) != (void *)0x0) {
      memset(*(void **)(param_1 + 0x27c),0,(uint)*(ushort *)(param_1 + 0x278) << 2);
    }
    uVar2 = DAT_ram_4009281c;
    uVar4 = *(undefined4 *)(param_1 + 0x2cc);
    *(undefined4 *)(param_1 + 0x2e4) = DAT_ram_40092824;
    *(undefined4 *)(param_1 + 0x2d4) = uVar2;
    *(undefined4 *)(param_1 + 0x274) = 0;
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    uVar2 = FUN_ram_40000a08(uVar4);
    *(undefined4 *)(param_1 + 0x2d8) = uVar2;
    uVar3 = FUN_ram_40000786(uVar4);
    uVar1 = DAT_ram_40099094;
    uVar2 = DAT_ram_40099090;
    uVar4 = *(undefined4 *)(param_1 + 0x2e8);
    *(undefined4 *)(param_1 + 0x2dc) = uVar3;
    *(undefined4 *)(param_1 + 0x2ec) = uVar2;
    *(undefined4 *)(param_1 + 0x2f0) = uVar1;
    *(undefined2 *)(param_1 + 0x2e0) = 0;
    uVar2 = FUN_ram_40000a08(uVar4);
    *(undefined4 *)(param_1 + 0x2f4) = uVar2;
    uVar4 = FUN_ram_40000786(uVar4);
    *(undefined2 *)(param_1 + 0x2fc) = 0;
    *(undefined4 *)(param_1 + 0x330) = 0;
    *(undefined4 *)(param_1 + 0x2f8) = uVar4;
    *(undefined4 *)(param_1 + 0x3a4) = 0;
    *(undefined4 *)(param_1 + 0x404) = 0;
    *(undefined4 *)(param_1 + 0x408) = 0;
    return;
  }
  return;
}


