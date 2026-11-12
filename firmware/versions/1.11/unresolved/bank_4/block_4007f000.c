/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4007f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4007f088.
 * REA evidence: ev_46d8d394ac775db6e40bfcbe28228ca7b1edca6ccc00a92cdc38658549023870
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007f088(uint param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_2 != (ulonglong *)0x0) {
    memset(param_2,0,0x34dbc);
    uVar1 = (ulonglong)DAT_ram_4009af68;
    uVar2 = (ulonglong)DAT_ram_40099f88;
    uVar3 = (ulonglong)DAT_ram_40094ec8;
    uVar4 = (ulonglong)DAT_ram_4009a89c;
    uVar5 = (ulonglong)DAT_ram_40094604;
    *param_2 = (ulonglong)param_1;
    *(undefined1 *)(param_2 + 3) = 1;
    *(undefined **)((int)param_2 + 0x24) = &sedeleg;
    *(ulonglong *)((int)param_2 + 4) = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    *(ulonglong *)((int)param_2 + 0x14) = uVar4;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar5;
    FUN_ram_4007e018(param_2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4007f0f8.
 * REA evidence: ev_b6bc8aaa58f583695a916148e7839f0a0be4ab6597edbec2074f5f5925e3b7b1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007f0f8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar7 = *param_2;
    uVar1 = param_2[1];
    uVar6 = param_2[2];
    uVar5 = param_2[3];
    uVar2 = param_2[4];
    uVar3 = param_2[5];
    uVar4 = param_2[6];
    *(undefined4 *)(param_1 + 0x20) = param_2[7];
    *(undefined4 *)(param_1 + 4) = uVar7;
    *(undefined4 *)(param_1 + 8) = uVar1;
    *(undefined4 *)(param_1 + 0xc) = uVar6;
    *(undefined4 *)(param_1 + 0x10) = uVar5;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  return;
}


/* NanoCore 1.11, address 0x4007f134.
 * REA evidence: ev_22ddae3234c6adb110ca9e61b518a2878608dbe52e784bae6c8ca3d437e2fbd5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007f134(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (*(ushort *)(param_1 + 0x2048) == 0) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x204a);
    *(undefined2 *)(param_1 + 0x2050) = 0;
    if (uVar2 == 0) goto LAB_ram_4007f16a;
LAB_ram_4007f3bc:
    memset(param_1 + 0x848,0,uVar2 << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0x204c);
    *(undefined2 *)(param_1 + 0x2052) = 0;
    if (uVar2 != 0) goto LAB_ram_4007f398;
LAB_ram_4007f17a:
    uVar2 = (uint)*(ushort *)(param_1 + 0x204e);
    *(undefined2 *)(param_1 + 0x2054) = 0;
    if (uVar2 == 0) goto LAB_ram_4007f18c;
LAB_ram_4007f372:
    memset(param_1 + 0x1848,0,uVar2 << 2);
    *(undefined2 *)(param_1 + 0x2056) = 0;
    uVar2 = (uint)*(ushort *)(param_1 + 0x5058);
    if (uVar2 != 0) goto LAB_ram_4007f352;
LAB_ram_4007f1a2:
    uVar2 = (uint)*(ushort *)(param_1 + 0x505a);
    *(undefined2 *)(param_1 + 0x505e) = 0;
    if (uVar2 == 0) goto LAB_ram_4007f1b2;
LAB_ram_4007f330:
    memset(param_1 + 0x3058,0,uVar2 << 2);
    uVar1 = *(ushort *)(param_1 + 0x505c);
    *(undefined2 *)(param_1 + 0x5060) = 0;
  }
  else {
    memset(param_1 + 0x48,0,(uint)*(ushort *)(param_1 + 0x2048) << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0x204a);
    *(undefined2 *)(param_1 + 0x2050) = 0;
    if (uVar2 != 0) goto LAB_ram_4007f3bc;
LAB_ram_4007f16a:
    uVar2 = (uint)*(ushort *)(param_1 + 0x204c);
    *(undefined2 *)(param_1 + 0x2052) = 0;
    if (uVar2 == 0) goto LAB_ram_4007f17a;
LAB_ram_4007f398:
    memset(param_1 + 0x1048,0,uVar2 << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0x204e);
    *(undefined2 *)(param_1 + 0x2054) = 0;
    if (uVar2 != 0) goto LAB_ram_4007f372;
LAB_ram_4007f18c:
    *(undefined2 *)(param_1 + 0x2056) = 0;
    uVar2 = (uint)*(ushort *)(param_1 + 0x5058);
    if (uVar2 == 0) goto LAB_ram_4007f1a2;
LAB_ram_4007f352:
    memset(param_1 + 0x2058,0,uVar2 << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0x505a);
    *(undefined2 *)(param_1 + 0x505e) = 0;
    if (uVar2 != 0) goto LAB_ram_4007f330;
LAB_ram_4007f1b2:
    uVar1 = *(ushort *)(param_1 + 0x505c);
    *(undefined2 *)(param_1 + 0x5060) = 0;
  }
  if (uVar1 != 0) {
    memset(param_1 + 0x4058,0,(uint)uVar1 << 2);
  }
  *(undefined2 *)(param_1 + 0x5062) = 0;
  if (*(ushort *)(param_1 + 0x30c64) == 0) {
    *(undefined4 *)(param_1 + 0x30ca8) = 0;
    iVar3 = 1;
  }
  else {
    memset(param_1 + 0x5064,0,(uint)*(ushort *)(param_1 + 0x30c64) << 2);
    *(undefined4 *)(param_1 + 0x30ca8) = 0;
    if (*(ushort *)(param_1 + 0x30c64) == 0) {
      *(undefined4 *)(param_1 + 0x30cac) = 0;
      iVar3 = 2;
    }
    else {
      memset(param_1 + 0xa7e4,0,(uint)*(ushort *)(param_1 + 0x30c64) << 2);
      *(undefined4 *)(param_1 + 0x30cac) = 0;
      if (*(ushort *)(param_1 + 0x30c64) == 0) {
        *(undefined4 *)(param_1 + 0x30cb0) = 0;
        iVar3 = 3;
      }
      else {
        memset(param_1 + 0xff64,0,(uint)*(ushort *)(param_1 + 0x30c64) << 2);
        *(undefined4 *)(param_1 + 0x30cb0) = 0;
        if (*(ushort *)(param_1 + 0x30c64) == 0) {
          *(undefined4 *)(param_1 + 0x30cb4) = 0;
          iVar3 = 4;
        }
        else {
          memset(param_1 + 0x156e4,0,(uint)*(ushort *)(param_1 + 0x30c64) << 2);
          *(undefined4 *)(param_1 + 0x30cb4) = 0;
          if (*(ushort *)(param_1 + 0x30c64) == 0) {
            *(undefined4 *)(param_1 + 0x30cb8) = 0;
            iVar3 = 5;
          }
          else {
            memset(param_1 + 0x1ae64,0,(uint)*(ushort *)(param_1 + 0x30c64) << 2);
            *(undefined4 *)(param_1 + 0x30cb8) = 0;
            if (*(ushort *)(param_1 + 0x30c64) == 0) {
              *(undefined4 *)(param_1 + 0x30cbc) = 0;
              iVar3 = 6;
            }
            else {
              memset(param_1 + 0x205e4,0,(uint)*(ushort *)(param_1 + 0x30c64) << 2);
              *(undefined4 *)(param_1 + 0x30cbc) = 0;
              if (*(ushort *)(param_1 + 0x30c64) != 0) {
                memset(param_1 + 0x25d64,0,(uint)*(ushort *)(param_1 + 0x30c64) << 2);
                *(undefined4 *)(param_1 + 0x30cc0) = 0;
                if (*(ushort *)(param_1 + 0x30c64) != 0) {
                  memset(param_1 + 0x2b4e4,0,(uint)*(ushort *)(param_1 + 0x30c64) << 2);
                }
                *(undefined4 *)(param_1 + 0x30cc4) = 0;
                goto LAB_ram_4007f1f6;
              }
              *(undefined4 *)(param_1 + 0x30cc0) = 0;
              iVar3 = 7;
            }
          }
        }
      }
    }
  }
  memset(param_1 + (iVar3 + 0xc32a) * 4,0,(8 - iVar3) * 4);
LAB_ram_4007f1f6:
  *(undefined2 *)(param_1 + 0x30c66) = 0;
  memset(param_1 + 0x30db8,0,0x4000);
  *(undefined2 *)(param_1 + 0x34db8) = 0;
  *(undefined2 *)(param_1 + 0x30daa) = 0;
  return;
}


/* NanoCore 1.11, address 0x4007fcb8.
 * REA evidence: ev_c9131e4c0ecbffb711fbc76485a2f7860180bd1f97bca224a9c594ec678b06ff
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4007fcb8(ulonglong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  undefined2 uVar20;
  ushort uVar21;
  int iVar22;
  ulonglong *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  ulonglong *puVar26;
  undefined4 *puVar27;
  ulonglong *puVar28;
  float *pfVar29;
  ulonglong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  ulonglong uVar39;
  float fVar40;
  float fStack_c8;
  int aiStack_c4 [5];
  int aiStack_b0 [4];
  
  fVar32 = DAT_ram_40094e80;
  fVar35 = DAT_ram_40094664;
  uVar30 = *param_1;
  if ((float)uVar30 <= DAT_ram_40094e80) {
    uVar30 = (ulonglong)(uint)DAT_ram_40099f80;
  }
  if (*(char *)((int)param_1 + 0x55) == '\0') {
    if (*(char *)((int)param_1 + 0x56) == '\0') {
      param_1[0xb] = param_1[1];
      *(undefined8 *)((int)param_1 + 0x5c) = *(undefined8 *)((int)param_1 + 0xc);
      param_1[0xc] = param_1[6];
      *(undefined8 *)((int)param_1 + 100) = *(undefined8 *)((int)param_1 + 0x34);
      *(undefined1 *)((int)param_1 + 0x56) = 1;
    }
    goto LAB_ram_4007fd28;
  }
  fVar31 = (float)FUN_ram_40000844(0,*(undefined8 *)((int)param_1 + 0x34));
  fVar3 = DAT_ram_40099fa4;
  fVar2 = DAT_ram_40094634;
  fVar33 = (float)uVar30;
  fVar1 = fVar33 / fVar35;
  fVar31 = fVar31 * DAT_ram_40099fa4 * fVar33;
  if (0.0 <= fVar31) {
    fVar31 = fVar31 + DAT_ram_40094634;
  }
  else {
    fVar31 = fVar31 - DAT_ram_40094634;
  }
  uVar18 = (uint)fVar31;
  uVar16 = (int)~uVar18 >> 0x1f & uVar18;
  if (0x2580 < (int)uVar18) {
    uVar16 = 0x2580;
  }
  if ((uint)*(ushort *)((int)param_1 + 0x329e) != (uVar16 & 0xffff)) {
    *(ushort *)(param_1 + 0x654) = *(ushort *)((int)param_1 + 0x329e);
    *(short *)((int)param_1 + 0x329e) = (short)uVar16;
    if (fVar32 < fVar33) {
      fVar31 = fVar33 * DAT_ram_40099f74;
      if (0.0 <= fVar31) {
        fVar31 = fVar31 + fVar2;
      }
      else {
        fVar31 = fVar31 - fVar2;
      }
      iVar11 = (int)fVar31;
      if (iVar11 < 0x10000) {
        if (iVar11 < 1) {
          uVar20 = 1;
        }
        else {
          uVar20 = (undefined2)iVar11;
        }
      }
      else {
        uVar20 = 0xffff;
      }
    }
    else {
      uVar20 = 0x2d0;
    }
    *(undefined2 *)((int)param_1 + 0x32a4) = uVar20;
    *(undefined2 *)((int)param_1 + 0x32a2) = uVar20;
  }
  fVar31 = fVar1 * DAT_ram_4009afa8;
  if (0.0 <= fVar31) {
    fVar31 = fVar31 + fVar2;
  }
  else {
    fVar31 = fVar31 - fVar2;
  }
  aiStack_c4[1] = (int)fVar31;
  fVar31 = fVar1 * DAT_ram_4009afac;
  if (0.0 <= fVar31) {
    fVar31 = fVar31 + fVar2;
  }
  else {
    fVar31 = fVar31 - fVar2;
  }
  aiStack_b0[0] = (int)fVar31;
  fVar31 = fVar1 * DAT_ram_4009afb0;
  if (0.0 <= fVar31) {
    fVar31 = fVar31 + fVar2;
  }
  else {
    fVar31 = fVar31 - fVar2;
  }
  aiStack_c4[2] = (int)fVar31;
  fVar31 = fVar1 * DAT_ram_4009af00;
  if (0.0 <= fVar31) {
    fVar31 = fVar31 + fVar2;
  }
  else {
    fVar31 = fVar31 - fVar2;
  }
  aiStack_b0[1] = (int)fVar31;
  fVar31 = fVar1 * DAT_ram_4009afb4;
  if (0.0 <= fVar31) {
    fVar31 = fVar31 + fVar2;
  }
  else {
    fVar31 = fVar31 - fVar2;
  }
  aiStack_c4[3] = (int)fVar31;
  fVar31 = fVar1 * DAT_ram_4009afb8;
  if (0.0 <= fVar31) {
    fVar31 = fVar31 + fVar2;
  }
  else {
    fVar31 = fVar31 - fVar2;
  }
  aiStack_b0[2] = (int)fVar31;
  fVar31 = fVar1 * DAT_ram_4009afbc;
  if (0.0 <= fVar31) {
    fVar31 = fVar31 + fVar2;
  }
  else {
    fVar31 = fVar31 - fVar2;
  }
  aiStack_c4[4] = (int)fVar31;
  fVar1 = fVar1 * DAT_ram_4009afc0;
  if (0.0 <= fVar1) {
    fVar1 = fVar1 + fVar2;
  }
  else {
    fVar1 = fVar1 - fVar2;
  }
  aiStack_b0[3] = (int)fVar1;
  memset((int)param_1 + 0xcaac,0,0x20);
  puVar27 = &DAT_ram_4009b004;
  puVar24 = (undefined4 *)((int)param_1 + 0xcabc);
  iVar22 = (int)param_1 + 0xcacc;
  iVar11 = 1;
  puVar25 = puVar27;
  do {
    iVar19 = aiStack_c4[iVar11];
    iVar14 = 800;
    if ((iVar19 < 0x321) && (iVar14 = iVar19, iVar19 < 1)) {
      iVar14 = 1;
    }
    uVar13 = *puVar25;
    *(short *)((int)param_1 + iVar11 * 2 + 0xcaaa) = (short)iVar14;
    *(undefined2 *)((int)param_1 + iVar11 * 2 + 0xcab2) = 0;
    *puVar24 = uVar13;
    iVar22 = memset(iVar22,0,iVar14 << 2);
    iVar11 = iVar11 + 1;
    puVar25 = puVar25 + 1;
    puVar24 = puVar24 + 1;
    iVar22 = iVar22 + 0xc80;
  } while (iVar11 != 5);
  memset((int)param_1 + 0xfccc,0,0x20);
  puVar25 = (undefined4 *)((int)param_1 + 0xfcdc);
  iVar22 = (int)param_1 + 0xfcec;
  iVar11 = 1;
  do {
    iVar19 = aiStack_c4[iVar11 + 4];
    iVar14 = 800;
    if ((iVar19 < 0x321) && (iVar14 = iVar19, iVar19 < 1)) {
      iVar14 = 1;
    }
    uVar13 = *puVar27;
    *(short *)((int)param_1 + iVar11 * 2 + 0xfcca) = (short)iVar14;
    *(undefined2 *)((int)param_1 + iVar11 * 2 + 0xfcd2) = 0;
    *puVar25 = uVar13;
    iVar22 = memset(iVar22,0,iVar14 << 2);
    iVar11 = iVar11 + 1;
    puVar27 = puVar27 + 1;
    puVar25 = puVar25 + 1;
    iVar22 = iVar22 + 0xc80;
  } while (iVar11 != 5);
  memset(param_1 + 0x655,0,0x200);
  fVar40 = DAT_ram_4009a10c;
  fVar1 = DAT_ram_40099fac;
  fVar31 = DAT_ram_40099f80;
  if (fVar33 <= fVar32) {
    param_1[0xd] = (ulonglong)DAT_ram_4009afd8;
    *(undefined4 *)((int)param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
    fVar37 = fVar31;
LAB_ram_40080a02:
    fVar36 = DAT_ram_4009af98;
    if (fVar37 * fVar40 < DAT_ram_40099f6c) {
      fVar36 = fVar37 * fVar40 * fVar1;
    }
    uVar38 = FUN_ram_40000bd8(fVar36 / fVar37);
    *(undefined8 *)((int)param_1 + 0x74) = uVar38;
LAB_ram_40080a28:
    *(undefined4 *)(param_1 + 0xf) = 0;
    fVar40 = DAT_ram_4009afa0;
    fVar37 = DAT_ram_4009af9c;
    if (fVar32 < fVar33) goto LAB_ram_40080036;
LAB_ram_40080a4e:
    aiStack_b0[0] = (int)(fVar37 + fVar2);
    fVar35 = fVar40 * DAT_ram_4009afc8;
    fStack_c8 = _DAT_ram_40095458;
    if (fVar35 < 0.0) goto LAB_ram_40080082;
LAB_ram_40080a70:
    aiStack_b0[1] = (int)(fVar35 + fVar2);
    fVar35 = fVar40 * DAT_ram_4009afcc;
    if (0.0 <= fVar35) goto LAB_ram_40080a92;
LAB_ram_400800a4:
    aiStack_b0[2] = (int)(fVar35 - fVar2);
    fVar40 = fVar40 * (float)DAT_ram_4009afd0;
    if (fVar40 < 0.0) goto LAB_ram_400800c8;
LAB_ram_40080ab6:
    fVar40 = fVar40 + fVar2;
  }
  else {
    if (0.0 < fVar33) {
      fVar31 = DAT_ram_4009afc4;
      if (fVar33 * DAT_ram_4009a10c < DAT_ram_4009af0c) {
        fVar31 = fVar33 * DAT_ram_4009a10c * DAT_ram_40099fac;
      }
      uVar39 = FUN_ram_40000bd8(fVar31 / fVar33);
      *(undefined4 *)((int)param_1 + 0x6c) = 0;
      param_1[0xd] = uVar39;
      param_1[0xe] = 0;
      fVar31 = DAT_ram_40099f80;
      fVar37 = fVar33;
      if (0.0 < fVar33) goto LAB_ram_40080a02;
      goto LAB_ram_40080a28;
    }
    *(undefined8 *)((int)param_1 + 0x6c) = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
LAB_ram_40080036:
    fStack_c8 = _DAT_ram_40095458;
    fVar40 = (fVar33 / fVar35) * DAT_ram_40094edc;
    fVar37 = fVar40 * _DAT_ram_40095458;
    if (0.0 <= fVar37) goto LAB_ram_40080a4e;
    aiStack_b0[0] = (int)(fVar37 - fVar2);
    fVar35 = fVar40 * DAT_ram_4009afc8;
    if (0.0 <= fVar35) goto LAB_ram_40080a70;
LAB_ram_40080082:
    aiStack_b0[1] = (int)(fVar35 - fVar2);
    fVar35 = fVar40 * DAT_ram_4009afcc;
    if (fVar35 < 0.0) goto LAB_ram_400800a4;
LAB_ram_40080a92:
    aiStack_b0[2] = (int)(fVar35 + fVar2);
    fVar40 = fVar40 * (float)DAT_ram_4009afd0;
    if (0.0 <= fVar40) goto LAB_ram_40080ab6;
LAB_ram_400800c8:
    fVar40 = fVar40 - fVar2;
  }
  fVar37 = DAT_ram_4009afcc;
  fVar35 = DAT_ram_4009afc8;
  aiStack_b0[3] = (int)fVar40;
  iVar11 = (int)param_1 + 0x9c;
  _DAT_ram_40095458 = fStack_c8;
  aiStack_c4[0] = iVar11;
  memset((int)param_1 + 0x7c,0,0x20);
  puVar24 = &DAT_ram_4009b014;
  puVar25 = (undefined4 *)((int)param_1 + 0x8c);
  iVar22 = 1;
  do {
    iVar19 = aiStack_c4[iVar22 + 4];
    iVar14 = 800;
    if ((iVar19 < 0x321) && (iVar14 = iVar19, iVar19 < 1)) {
      iVar14 = 1;
    }
    uVar13 = *puVar24;
    *(short *)((int)param_1 + iVar22 * 2 + 0x7a) = (short)iVar14;
    *(undefined2 *)((int)param_1 + iVar22 * 2 + 0x82) = 0;
    *puVar25 = uVar13;
    iVar11 = memset(iVar11,0,iVar14 << 2);
    iVar22 = iVar22 + 1;
    puVar24 = puVar24 + 1;
    puVar25 = puVar25 + 1;
    iVar11 = iVar11 + 0xc80;
  } while (iVar22 != 5);
  if (fVar33 <= fVar32) {
    iVar11 = 0x133d;
  }
  else {
    FUN_ram_40000844(0,fVar33 * DAT_ram_4009afa4);
    fVar32 = (float)FUN_ram_40000658();
    iVar11 = 0x13fe - (int)fVar32;
    if (iVar11 < 1) {
      iVar11 = 1;
    }
  }
  *(float *)((int)param_1 + 0x12eec) = fVar33;
  puVar25 = (undefined4 *)((int)param_1 + 4);
  puVar23 = param_1 + 0x25de;
  do {
    uVar13 = puVar25[1];
    uVar15 = puVar25[2];
    uVar17 = puVar25[3];
    *(undefined4 *)puVar23 = *puVar25;
    *(undefined4 *)((int)puVar23 + 4) = uVar13;
    *(undefined4 *)(puVar23 + 1) = uVar15;
    *(undefined4 *)((int)puVar23 + 0xc) = uVar17;
    uVar13 = DAT_ram_40094ee0;
    puVar25 = puVar25 + 4;
    puVar23 = puVar23 + 2;
  } while (puVar25 != (undefined4 *)((int)param_1 + 0x54));
  fVar33 = (float)FUN_ram_40000844(DAT_ram_40094ee0,(int)param_1[0x25e0]);
  puVar26 = param_1 + 0x2613;
  fVar32 = fVar33 * DAT_ram_4009afd0._4_4_ + DAT_ram_40096018;
  pfVar29 = (float *)((int)&DAT_ram_4009afe0 + 4);
  puVar23 = param_1 + 0x25e8;
  pfVar12 = (float *)(param_1 + 0x25ea);
  puVar28 = puVar26;
  while( true ) {
    fVar40 = fVar32 * *pfVar29 * ((float)uVar30 / fVar31);
    if (fVar40 < 0.0) {
      fVar40 = fVar40 - fVar2;
    }
    else {
      fVar40 = fVar40 + fVar2;
    }
    iVar22 = (int)fVar40;
    if (iVar22 < 1) {
      iVar22 = 1;
    }
    if (iVar11 < iVar22) {
      iVar22 = iVar11;
    }
    *(short *)puVar23 = (short)iVar22;
    *pfVar12 = (float)iVar22;
    memset(puVar28,0,0x5000);
    pfVar29 = pfVar29 + 1;
    puVar28 = puVar28 + 0xa00;
    if (pfVar12 + 1 == (float *)(param_1 + 0x25ee)) break;
    uVar30 = (ulonglong)*(uint *)((int)param_1 + 0x12eec);
    puVar23 = (ulonglong *)((int)puVar23 + 2);
    pfVar12 = pfVar12 + 1;
  }
  fVar32 = *(float *)((int)param_1 + 0x12f1c);
  *(undefined1 *)(param_1 + 0x25ff) = 0;
  *(undefined2 *)((int)param_1 + 0x12ffa) = 0;
  fVar40 = 0.0;
  if ((0.0 <= fVar32) && (fVar40 = DAT_ram_4009afa4, fVar32 <= DAT_ram_40094e88)) {
    fVar40 = fVar32 * fVar3;
  }
  fVar32 = *(float *)((int)param_1 + 0x12eec);
  *(float *)((int)param_1 + 0x12ff4) = fVar32 * fVar40;
  fVar34 = (float)FUN_ram_40000844(0,(int)param_1[0x25e3]);
  uVar10 = DAT_ram_4009ab2c;
  uVar9 = DAT_ram_4009ab28;
  uVar8 = DAT_ram_4009ab20;
  uVar7 = DAT_ram_4009ab1c;
  uVar6 = DAT_ram_4009ab18;
  uVar5 = DAT_ram_4009ab14;
  uVar4 = DAT_ram_4009a7f4;
  uVar17 = DAT_ram_4009a7ec;
  fVar40 = DAT_ram_40094eb0;
  fVar36 = DAT_ram_40094604;
  uVar15 = DAT_ram_40094600;
  if (0.0 < fVar34) {
    fVar34 = (fVar34 * DAT_ram_40099f94) / fVar32;
    *(undefined4 *)((int)param_1 + 0x12fac) = DAT_ram_4009ab24;
    *(float *)((int)param_1 + 0x12f94) = fVar36;
    *(float *)((int)param_1 + 0x12f7c) = fVar36;
    *(undefined4 *)((int)param_1 + 0x12f9c) = uVar4;
    *(undefined4 *)(param_1 + 0x25f4) = uVar5;
    *(undefined4 *)((int)param_1 + 0x12f84) = uVar6;
    *(undefined4 *)((int)param_1 + 0x12fa4) = uVar15;
    *(undefined4 *)(param_1 + 0x25f1) = uVar7;
    *(undefined4 *)(param_1 + 0x25f5) = uVar8;
    *(undefined4 *)((int)param_1 + 0x12f8c) = uVar15;
    *(undefined4 *)(param_1 + 0x25f2) = uVar9;
    *(undefined4 *)(param_1 + 0x25f6) = uVar10;
    *(undefined4 *)(param_1 + 0x25ef) = uVar17;
    *(undefined4 *)(param_1 + 0x25f3) = uVar17;
    *(undefined4 *)(param_1 + 0x25f0) = uVar17;
    *(undefined4 *)((int)param_1 + 0x12f74) = 0;
    uVar15 = FUN_ram_400009d2(fVar34 * fVar40);
    *(undefined4 *)((int)param_1 + 0x12fb4) = uVar15;
    uVar15 = FUN_ram_40000712(fVar34 * fVar40);
    fVar36 = DAT_ram_4009ab30;
    *(undefined4 *)((int)param_1 + 0x12fd4) = uVar15;
    fVar36 = fVar34 * fVar36 * fVar40;
    uVar15 = FUN_ram_400009d2(fVar36);
    *(undefined4 *)(param_1 + 0x25f7) = uVar15;
    uVar15 = FUN_ram_40000712(fVar36);
    fVar36 = DAT_ram_4009ab34;
    *(undefined4 *)(param_1 + 0x25fb) = uVar15;
    fVar36 = fVar34 * fVar36 * fVar40;
    uVar15 = FUN_ram_400009d2(fVar36);
    *(undefined4 *)((int)param_1 + 0x12fbc) = uVar15;
    uVar15 = FUN_ram_40000712(fVar36);
    fVar36 = DAT_ram_4009ab38;
    *(undefined4 *)((int)param_1 + 0x12fdc) = uVar15;
    fVar36 = fVar34 * fVar36 * fVar40;
    uVar15 = FUN_ram_400009d2(fVar36);
    *(undefined4 *)(param_1 + 0x25f8) = uVar15;
    uVar15 = FUN_ram_40000712(fVar36);
    fVar36 = DAT_ram_4009a3dc;
    *(undefined4 *)(param_1 + 0x25fc) = uVar15;
    fVar36 = fVar34 * fVar36 * fVar40;
    uVar15 = FUN_ram_400009d2(fVar36);
    *(undefined4 *)((int)param_1 + 0x12fc4) = uVar15;
    uVar15 = FUN_ram_40000712(fVar36);
    fVar36 = DAT_ram_4009460c;
    *(undefined4 *)((int)param_1 + 0x12fe4) = uVar15;
    fVar36 = fVar34 * fVar36 * fVar40;
    uVar15 = FUN_ram_400009d2(fVar36);
    *(undefined4 *)(param_1 + 0x25f9) = uVar15;
    uVar15 = FUN_ram_40000712(fVar36);
    fVar36 = DAT_ram_4009ab3c;
    *(undefined4 *)(param_1 + 0x25fd) = uVar15;
    fVar36 = fVar34 * fVar36 * fVar40;
    uVar15 = FUN_ram_400009d2(fVar36);
    *(undefined4 *)((int)param_1 + 0x12fcc) = uVar15;
    uVar15 = FUN_ram_40000712(fVar36);
    fVar36 = DAT_ram_4009ab40;
    *(undefined4 *)((int)param_1 + 0x12fec) = uVar15;
    fVar40 = fVar34 * fVar36 * fVar40;
    uVar15 = FUN_ram_400009d2(fVar40);
    *(undefined4 *)(param_1 + 0x25fa) = uVar15;
    uVar15 = FUN_ram_40000712(fVar40);
    *(undefined1 *)(param_1 + 0x25ff) = 1;
    *(undefined4 *)(param_1 + 0x25fe) = uVar15;
  }
  fVar32 = fVar32 / fVar31;
  fVar33 = fVar33 * (float)DAT_ram_40099f5c + fVar2;
  *(undefined2 *)(param_1 + 0x25ee) = 0;
  uVar15 = DAT_ram_4009a170;
  fVar40 = DAT_ram_40094604;
  fVar31 = fVar33 * fStack_c8 * fVar32;
  if (0.0 <= fVar31) {
    fVar31 = fVar31 + fVar2;
  }
  else {
    fVar31 = fVar31 - fVar2;
  }
  aiStack_b0[0] = (int)fVar31;
  if (aiStack_b0[0] < 1) {
    aiStack_b0[0] = 1;
  }
  fVar35 = fVar33 * fVar35 * fVar32;
  if (0.0 <= fVar35) {
    fVar35 = fVar35 + fVar2;
  }
  else {
    fVar35 = fVar35 - fVar2;
  }
  aiStack_b0[1] = (int)fVar35;
  if (aiStack_b0[1] < 1) {
    aiStack_b0[1] = 1;
  }
  fVar35 = fVar33 * fVar37 * fVar32;
  if (0.0 <= fVar35) {
    fVar35 = fVar35 + fVar2;
  }
  else {
    fVar35 = fVar35 - fVar2;
  }
  aiStack_b0[2] = (int)fVar35;
  if (aiStack_b0[2] < 1) {
    aiStack_b0[2] = 1;
  }
  fVar32 = fVar33 * (float)DAT_ram_4009afd0 * fVar32;
  if (0.0 <= fVar32) {
    fVar32 = fVar32 + fVar2;
  }
  else {
    fVar32 = fVar32 - fVar2;
  }
  aiStack_b0[3] = (int)fVar32;
  if (aiStack_b0[3] < 1) {
    aiStack_b0[3] = 1;
  }
  fVar35 = *(float *)((int)param_1 + 0x12f04);
  if (fVar35 < 0.0) {
    fVar32 = 0.0;
  }
  else {
    fVar32 = DAT_ram_4009558c;
    if (fVar35 <= DAT_ram_40094604) {
      fVar32 = fVar35 * DAT_ram_4009558c;
    }
  }
  *(float *)(param_1 + 0x7615) = fVar32;
  *(undefined4 *)(param_1 + 0x7613) = uVar15;
  *(undefined4 *)((int)param_1 + 0x3b09c) = uVar15;
  *(undefined4 *)(param_1 + 0x7614) = uVar15;
  *(undefined4 *)((int)param_1 + 0x3b0a4) = uVar15;
  iVar11 = (int)param_1 + 0x3b0ac;
  iVar22 = 1;
  do {
    iVar19 = aiStack_c4[iVar22 + 4];
    iVar14 = 800;
    if ((iVar19 < 0x321) && (iVar14 = iVar19, iVar19 < 1)) {
      iVar14 = 1;
    }
    *(short *)((int)param_1 + iVar22 * 2 + 0x3b096) = (short)iVar14;
    *(undefined2 *)((int)param_1 + iVar22 * 2 + 0x3b09e) = 0;
    iVar11 = memset(iVar11,0,iVar14 << 2);
    uVar15 = DAT_ram_40094ec4;
    iVar22 = iVar22 + 1;
    iVar11 = iVar11 + 0xc80;
  } while (iVar22 != 5);
  fVar31 = (float)FUN_ram_40000844(DAT_ram_40094ec4,*(undefined4 *)((int)param_1 + 0x12ef4));
  fVar35 = (float)FUN_ram_40000844(uVar13,*(undefined4 *)((int)param_1 + 0x12f0c));
  fVar33 = (float)FUN_ram_40000844(uVar15,fVar31 * fVar35);
  fVar32 = DAT_ram_40099fa8;
  fVar35 = DAT_ram_40099f64;
  uVar13 = DAT_ram_40094e90;
  pfVar12 = (float *)(param_1 + 0x25ea);
  do {
    pfVar29 = pfVar12 + 1;
    fVar37 = ((float)*(undefined8 *)pfVar12 / *(float *)((int)param_1 + 0x12eec)) * fVar32;
    fVar36 = (float)FUN_ram_40000d44(uVar13,fVar37 / fVar31);
    fVar37 = (float)FUN_ram_40000d44(uVar13,fVar37 / fVar33);
    pfVar12[0x2b] = fVar36 * fVar35;
    pfVar12[0x33] = (fVar37 - fVar36) * fVar35;
    pfVar12 = pfVar29;
  } while ((float *)(param_1 + 0x25ee) != pfVar29);
  fVar35 = (float)FUN_ram_40000844(DAT_ram_40095450,(int)param_1[0x25df]);
  uVar15 = FUN_ram_40000bd8((fVar35 * fVar1) / *(float *)((int)param_1 + 0x12eec));
  uVar13 = DAT_ram_40094ea8;
  *(undefined4 *)((int)param_1 + 0x1303c) = uVar15;
  fVar35 = (float)FUN_ram_40000844(uVar13,(int)param_1[0x25e1]);
  uVar13 = FUN_ram_40000bd8((fVar35 * fVar1) / *(float *)((int)param_1 + 0x12eec));
  *(undefined4 *)(param_1 + 0x2608) = uVar13;
  fVar35 = (float)FUN_ram_40000844(0,(int)param_1[0x25de]);
  fVar35 = fVar35 * fVar3 * *(float *)((int)param_1 + 0x12eec);
  if (0.0 <= fVar35) {
    fVar35 = fVar35 + fVar2;
  }
  else {
    fVar35 = fVar35 - fVar2;
  }
  iVar11 = (int)fVar35;
  fVar35 = *(float *)((int)param_1 + 0x12efc);
  uVar21 = (short)~(ushort)((uint)iVar11 >> 0x10) >> 0xf & (ushort)iVar11;
  if (0x2580 < iVar11) {
    uVar21 = 0x2580;
  }
  *(ushort *)((int)param_1 + 0x13086) = uVar21;
  if (fVar35 < 0.0) {
    fVar35 = 0.0;
  }
  else if (fVar40 < fVar35) {
    fVar35 = fVar40;
  }
  *(float *)((int)param_1 + 0x13094) = fVar35;
  fVar35 = *(float *)(param_1 + 0x25e2) * fVar3 * *(float *)((int)param_1 + 0x12eec);
  if (0.0 <= fVar35) {
    fVar35 = fVar35 + fVar2;
  }
  else {
    fVar35 = fVar35 - fVar2;
  }
  fVar35 = (float)FUN_ram_40000844(fVar40,(float)(int)fVar35);
  *(ushort *)((int)param_1 + 0x1308e) = (ushort)(-1 < (int)fVar35) * (short)(int)fVar35;
  *(undefined1 *)((int)param_1 + 0x56) = 1;
  *(undefined1 *)((int)param_1 + 0x55) = 0;
  param_1[0xb] = param_1[1];
  *(undefined8 *)((int)param_1 + 0x5c) = *(undefined8 *)((int)param_1 + 0xc);
  param_1[0xc] = param_1[6];
  *(undefined8 *)((int)param_1 + 100) = *(undefined8 *)((int)param_1 + 0x34);
  memset(param_1 + 0x695,0,0x9604);
  *(undefined2 *)((int)param_1 + 0x329c) = 0;
  *(undefined2 *)(param_1 + 0x654) = *(undefined2 *)((int)param_1 + 0x329e);
  *(undefined2 *)((int)param_1 + 0x32a2) = 0;
  *(undefined2 *)((int)param_1 + 0x32a4) = 0;
  if (*(ushort *)((int)param_1 + 0xcaac) == 0) {
    uVar16 = (uint)*(ushort *)((int)param_1 + 0xcaae);
    *(undefined2 *)((int)param_1 + 0xcab4) = 0;
    if (uVar16 == 0) goto LAB_ram_40080818;
LAB_ram_40080af6:
    memset((int)param_1 + 0xd74c,0,uVar16 << 2);
    uVar16 = (uint)(ushort)param_1[0x1956];
    *(undefined2 *)((int)param_1 + 0xcab6) = 0;
    if (uVar16 != 0) goto LAB_ram_40080b14;
LAB_ram_40080828:
    uVar16 = (uint)*(ushort *)((int)param_1 + 0xcab2);
    *(undefined2 *)(param_1 + 0x1957) = 0;
    if (uVar16 == 0) goto LAB_ram_40080838;
LAB_ram_40080b34:
    memset((int)param_1 + 0xf04c,0,uVar16 << 2);
    *(undefined2 *)((int)param_1 + 0xcaba) = 0;
    uVar21 = *(ushort *)((int)param_1 + 0xfccc);
  }
  else {
    memset((int)param_1 + 0xcacc,0,(uint)*(ushort *)((int)param_1 + 0xcaac) << 2);
    uVar16 = (uint)*(ushort *)((int)param_1 + 0xcaae);
    *(undefined2 *)((int)param_1 + 0xcab4) = 0;
    if (uVar16 != 0) goto LAB_ram_40080af6;
LAB_ram_40080818:
    uVar16 = (uint)(ushort)param_1[0x1956];
    *(undefined2 *)((int)param_1 + 0xcab6) = 0;
    if (uVar16 == 0) goto LAB_ram_40080828;
LAB_ram_40080b14:
    memset((int)param_1 + 0xe3cc,0,uVar16 << 2);
    uVar16 = (uint)*(ushort *)((int)param_1 + 0xcab2);
    *(undefined2 *)(param_1 + 0x1957) = 0;
    if (uVar16 != 0) goto LAB_ram_40080b34;
LAB_ram_40080838:
    *(undefined2 *)((int)param_1 + 0xcaba) = 0;
    uVar21 = *(ushort *)((int)param_1 + 0xfccc);
  }
  if (uVar21 != 0) {
    memset((int)param_1 + 0xfcec,0,(uint)uVar21 << 2);
  }
  *(undefined2 *)((int)param_1 + 0xfcd4) = 0;
  if (*(ushort *)((int)param_1 + 0xfcce) != 0) {
    memset((int)param_1 + 0x1096c,0,(uint)*(ushort *)((int)param_1 + 0xfcce) << 2);
  }
  *(undefined2 *)((int)param_1 + 0xfcd6) = 0;
  if ((ushort)param_1[0x1f9a] != 0) {
    memset((int)param_1 + 0x115ec,0,(uint)(ushort)param_1[0x1f9a] << 2);
  }
  *(undefined2 *)(param_1 + 0x1f9b) = 0;
  if (*(ushort *)((int)param_1 + 0xfcd2) != 0) {
    memset((int)param_1 + 0x1226c,0,(uint)*(ushort *)((int)param_1 + 0xfcd2) << 2);
  }
  *(undefined2 *)((int)param_1 + 0xfcda) = 0;
  memset(param_1 + 0x655,0,0x200);
  if (*(ushort *)((int)param_1 + 0x7c) != 0) {
    memset(aiStack_c4[0],0,(uint)*(ushort *)((int)param_1 + 0x7c) << 2);
  }
  *(undefined2 *)((int)param_1 + 0x84) = 0;
  if (*(ushort *)((int)param_1 + 0x7e) != 0) {
    memset((int)param_1 + 0xd1c,0,(uint)*(ushort *)((int)param_1 + 0x7e) << 2);
  }
  *(undefined2 *)((int)param_1 + 0x86) = 0;
  if ((ushort)param_1[0x10] == 0) {
    uVar21 = *(ushort *)((int)param_1 + 0x82);
    *(undefined2 *)(param_1 + 0x11) = 0;
  }
  else {
    memset((int)param_1 + 0x199c,0,(uint)(ushort)param_1[0x10] << 2);
    uVar21 = *(ushort *)((int)param_1 + 0x82);
    *(undefined2 *)(param_1 + 0x11) = 0;
  }
  if (uVar21 != 0) {
    memset((int)param_1 + 0x261c,0,(uint)uVar21 << 2);
  }
  *(undefined2 *)((int)param_1 + 0x8a) = 0;
  *(undefined4 *)((int)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  puVar25 = (undefined4 *)((int)param_1 + 0x13044);
  do {
    puVar24 = puVar25 + 1;
    memset(puVar26,0,0x5000);
    *puVar25 = 0;
    puVar25[8] = 0;
    puVar26 = puVar26 + 0xa00;
    puVar25 = puVar24;
  } while (puVar24 != (undefined4 *)((int)param_1 + 0x13064));
  *(undefined2 *)(param_1 + 0x25ee) = 0;
  if ((ushort)param_1[0x7613] != 0) {
    memset((int)param_1 + 0x3b0ac,0,(uint)(ushort)param_1[0x7613] << 2);
  }
  *(undefined2 *)(param_1 + 0x7614) = 0;
  if (*(ushort *)((int)param_1 + 0x3b09a) != 0) {
    memset((int)param_1 + 0x3bd2c,0,(uint)*(ushort *)((int)param_1 + 0x3b09a) << 2);
  }
  *(undefined2 *)((int)param_1 + 0x3b0a2) = 0;
  if (*(ushort *)((int)param_1 + 0x3b09c) != 0) {
    memset((int)param_1 + 0x3c9ac,0,(uint)*(ushort *)((int)param_1 + 0x3b09c) << 2);
  }
  *(undefined2 *)((int)param_1 + 0x3b0a4) = 0;
  if (*(ushort *)((int)param_1 + 0x3b09e) != 0) {
    memset((int)param_1 + 0x3d62c,0,(uint)*(ushort *)((int)param_1 + 0x3b09e) << 2);
  }
  *(undefined2 *)((int)param_1 + 0x3b0a6) = 0;
  memset((int)param_1 + 0x3e2ac,0,0x9604);
  *(undefined2 *)((int)param_1 + 0x13084) = 0;
  *(undefined2 *)((int)param_1 + 0x1308a) = 0;
  *(undefined2 *)(param_1 + 0x2611) = *(undefined2 *)((int)param_1 + 0x13086);
  *(undefined2 *)((int)param_1 + 0x1308c) = 0;
  *(undefined2 *)(param_1 + 0x2612) = 0;
LAB_ram_4007fd28:
  *(undefined1 *)((int)param_1 + 0x54) = 0;
  return;
}


