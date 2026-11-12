/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40079000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40079238.
 * REA evidence: ev_6a99bee20f2c8c235e259c866202269ff41b59f4cd074a507f3079673dec4411
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40079238(uint param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_2 != (ulonglong *)0x0) {
    memset(param_2,0,0x34dbc);
    uVar1 = (ulonglong)DAT_ram_40098f4c;
    uVar2 = (ulonglong)DAT_ram_400980e8;
    uVar3 = (ulonglong)DAT_ram_400930dc;
    uVar4 = (ulonglong)DAT_ram_400989d4;
    uVar5 = (ulonglong)DAT_ram_4009281c;
    *param_2 = (ulonglong)param_1;
    *(undefined1 *)(param_2 + 3) = 1;
    *(undefined **)((int)param_2 + 0x24) = &sedeleg;
    *(ulonglong *)((int)param_2 + 4) = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    *(ulonglong *)((int)param_2 + 0x14) = uVar4;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar5;
    FUN_ram_400781c8(param_2);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x400792a8.
 * REA evidence: ev_819b9cf444a7a19d2e35aebebb02ef2b16efecf971b77b7957e58f65d2f02971
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400792a8(int param_1,undefined4 *param_2)

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


/* NanoCore 1.10, address 0x400792e4.
 * REA evidence: ev_70a29a3b5851486d91cfcb1640d22445aebdb25014c77a45957190a150133d04
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400792e4(int param_1)

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
    if (uVar2 == 0) goto LAB_ram_4007931a;
LAB_ram_4007956c:
    memset((void *)(param_1 + 0x848),0,uVar2 << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0x204c);
    *(undefined2 *)(param_1 + 0x2052) = 0;
    if (uVar2 != 0) goto LAB_ram_40079548;
LAB_ram_4007932a:
    uVar2 = (uint)*(ushort *)(param_1 + 0x204e);
    *(undefined2 *)(param_1 + 0x2054) = 0;
    if (uVar2 == 0) goto LAB_ram_4007933c;
LAB_ram_40079522:
    memset((void *)(param_1 + 0x1848),0,uVar2 << 2);
    *(undefined2 *)(param_1 + 0x2056) = 0;
    uVar2 = (uint)*(ushort *)(param_1 + 0x5058);
    if (uVar2 != 0) goto LAB_ram_40079502;
LAB_ram_40079352:
    uVar2 = (uint)*(ushort *)(param_1 + 0x505a);
    *(undefined2 *)(param_1 + 0x505e) = 0;
    if (uVar2 == 0) goto LAB_ram_40079362;
LAB_ram_400794e0:
    memset((void *)(param_1 + 0x3058),0,uVar2 << 2);
    uVar1 = *(ushort *)(param_1 + 0x505c);
    *(undefined2 *)(param_1 + 0x5060) = 0;
  }
  else {
    memset((void *)(param_1 + 0x48),0,(uint)*(ushort *)(param_1 + 0x2048) << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0x204a);
    *(undefined2 *)(param_1 + 0x2050) = 0;
    if (uVar2 != 0) goto LAB_ram_4007956c;
LAB_ram_4007931a:
    uVar2 = (uint)*(ushort *)(param_1 + 0x204c);
    *(undefined2 *)(param_1 + 0x2052) = 0;
    if (uVar2 == 0) goto LAB_ram_4007932a;
LAB_ram_40079548:
    memset((void *)(param_1 + 0x1048),0,uVar2 << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0x204e);
    *(undefined2 *)(param_1 + 0x2054) = 0;
    if (uVar2 != 0) goto LAB_ram_40079522;
LAB_ram_4007933c:
    *(undefined2 *)(param_1 + 0x2056) = 0;
    uVar2 = (uint)*(ushort *)(param_1 + 0x5058);
    if (uVar2 == 0) goto LAB_ram_40079352;
LAB_ram_40079502:
    memset((void *)(param_1 + 0x2058),0,uVar2 << 2);
    uVar2 = (uint)*(ushort *)(param_1 + 0x505a);
    *(undefined2 *)(param_1 + 0x505e) = 0;
    if (uVar2 != 0) goto LAB_ram_400794e0;
LAB_ram_40079362:
    uVar1 = *(ushort *)(param_1 + 0x505c);
    *(undefined2 *)(param_1 + 0x5060) = 0;
  }
  if (uVar1 != 0) {
    memset((void *)(param_1 + 0x4058),0,(uint)uVar1 << 2);
  }
  *(undefined2 *)(param_1 + 0x5062) = 0;
  if (*(ushort *)(param_1 + 0x30c64) == 0) {
    *(undefined4 *)(param_1 + 0x30ca8) = 0;
    iVar3 = 1;
  }
  else {
    memset((void *)(param_1 + 0x5064),0,(uint)*(ushort *)(param_1 + 0x30c64) << 2);
    *(undefined4 *)(param_1 + 0x30ca8) = 0;
    if (*(ushort *)(param_1 + 0x30c64) == 0) {
      *(undefined4 *)(param_1 + 0x30cac) = 0;
      iVar3 = 2;
    }
    else {
      memset((void *)(param_1 + 0xa7e4),0,(uint)*(ushort *)(param_1 + 0x30c64) << 2);
      *(undefined4 *)(param_1 + 0x30cac) = 0;
      if (*(ushort *)(param_1 + 0x30c64) == 0) {
        *(undefined4 *)(param_1 + 0x30cb0) = 0;
        iVar3 = 3;
      }
      else {
        memset((void *)(param_1 + 0xff64),0,(uint)*(ushort *)(param_1 + 0x30c64) << 2);
        *(undefined4 *)(param_1 + 0x30cb0) = 0;
        if (*(ushort *)(param_1 + 0x30c64) == 0) {
          *(undefined4 *)(param_1 + 0x30cb4) = 0;
          iVar3 = 4;
        }
        else {
          memset((void *)(param_1 + 0x156e4),0,(uint)*(ushort *)(param_1 + 0x30c64) << 2);
          *(undefined4 *)(param_1 + 0x30cb4) = 0;
          if (*(ushort *)(param_1 + 0x30c64) == 0) {
            *(undefined4 *)(param_1 + 0x30cb8) = 0;
            iVar3 = 5;
          }
          else {
            memset((void *)(param_1 + 0x1ae64),0,(uint)*(ushort *)(param_1 + 0x30c64) << 2);
            *(undefined4 *)(param_1 + 0x30cb8) = 0;
            if (*(ushort *)(param_1 + 0x30c64) == 0) {
              *(undefined4 *)(param_1 + 0x30cbc) = 0;
              iVar3 = 6;
            }
            else {
              memset((void *)(param_1 + 0x205e4),0,(uint)*(ushort *)(param_1 + 0x30c64) << 2);
              *(undefined4 *)(param_1 + 0x30cbc) = 0;
              if (*(ushort *)(param_1 + 0x30c64) != 0) {
                memset((void *)(param_1 + 0x25d64),0,(uint)*(ushort *)(param_1 + 0x30c64) << 2);
                *(undefined4 *)(param_1 + 0x30cc0) = 0;
                if (*(ushort *)(param_1 + 0x30c64) != 0) {
                  memset((void *)(param_1 + 0x2b4e4),0,(uint)*(ushort *)(param_1 + 0x30c64) << 2);
                }
                *(undefined4 *)(param_1 + 0x30cc4) = 0;
                goto LAB_ram_400793a6;
              }
              *(undefined4 *)(param_1 + 0x30cc0) = 0;
              iVar3 = 7;
            }
          }
        }
      }
    }
  }
  memset((void *)(param_1 + (iVar3 + 0xc32a) * 4),0,(8 - iVar3) * 4);
LAB_ram_400793a6:
  *(undefined2 *)(param_1 + 0x30c66) = 0;
  memset((void *)(param_1 + 0x30db8),0,0x4000);
  *(undefined2 *)(param_1 + 0x34db8) = 0;
  *(undefined2 *)(param_1 + 0x30daa) = 0;
  return;
}


/* NanoCore 1.10, address 0x40079e68.
 * REA evidence: ev_a624e796c8405cf4ad9ddfb8c3cf8d550242c2b7820212431c663e6cf2683ce8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40079e68(ulonglong *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  int iVar11;
  float *pfVar12;
  void *pvVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  undefined2 uVar21;
  ushort uVar22;
  ulonglong *puVar23;
  ulonglong *puVar24;
  ulonglong *__s;
  undefined4 *puVar25;
  undefined4 *puVar26;
  float *pfVar27;
  ulonglong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  ulonglong uVar38;
  int aiStack_c0 [4];
  int aiStack_b0 [4];
  
  fVar30 = DAT_ram_40093094;
  fVar33 = DAT_ram_40092878;
  uVar28 = *param_1;
  if ((float)uVar28 <= DAT_ram_40093094) {
    uVar28 = (ulonglong)(uint)DAT_ram_400980e0;
  }
  if (*(char *)((int)param_1 + 0x59) == '\0') {
    if (*(char *)((int)param_1 + 0x5a) == '\0') {
      param_1[0xc] = param_1[1];
      *(undefined8 *)((int)param_1 + 100) = *(undefined8 *)((int)param_1 + 0xc);
      param_1[0xd] = param_1[6];
      *(undefined8 *)((int)param_1 + 0x6c) = *(undefined8 *)((int)param_1 + 0x34);
      *(undefined1 *)((int)param_1 + 0x5a) = 1;
    }
    goto LAB_ram_40079ed8;
  }
  fVar29 = (float)FUN_ram_400008b8(0,*(undefined8 *)((int)param_1 + 0x34));
  fVar2 = DAT_ram_40098104;
  fVar1 = DAT_ram_40092864;
  fVar34 = (float)uVar28;
  fVar31 = fVar34 / fVar33;
  fVar29 = fVar29 * DAT_ram_40098104 * fVar34;
  if (0.0 <= fVar29) {
    fVar29 = fVar29 + DAT_ram_40092864;
  }
  else {
    fVar29 = fVar29 - DAT_ram_40092864;
  }
  uVar19 = (uint)fVar29;
  uVar17 = (int)~uVar19 >> 0x1f & uVar19;
  if (0x2580 < (int)uVar19) {
    uVar17 = 0x2580;
  }
  if ((uint)*(ushort *)((int)param_1 + 0x32aa) != (uVar17 & 0xffff)) {
    *(ushort *)((int)param_1 + 0x32ac) = *(ushort *)((int)param_1 + 0x32aa);
    *(short *)((int)param_1 + 0x32aa) = (short)uVar17;
    if (fVar30 < fVar34) {
      fVar29 = fVar34 * DAT_ram_400980d4;
      if (0.0 <= fVar29) {
        fVar29 = fVar29 + fVar1;
      }
      else {
        fVar29 = fVar29 - fVar1;
      }
      iVar11 = (int)fVar29;
      if (iVar11 < 0x10000) {
        if (iVar11 < 1) {
          uVar21 = 1;
        }
        else {
          uVar21 = (undefined2)iVar11;
        }
      }
      else {
        uVar21 = 0xffff;
      }
    }
    else {
      uVar21 = 0x2d0;
    }
    *(undefined2 *)(param_1 + 0x656) = uVar21;
    *(undefined2 *)((int)param_1 + 0x32ae) = uVar21;
  }
  fVar29 = fVar31 * DAT_ram_40098f8c;
  if (0.0 <= fVar29) {
    fVar29 = fVar29 + fVar1;
  }
  else {
    fVar29 = fVar29 - fVar1;
  }
  aiStack_c0[0] = (int)fVar29;
  fVar29 = fVar31 * DAT_ram_40098f90;
  if (0.0 <= fVar29) {
    fVar29 = fVar29 + fVar1;
  }
  else {
    fVar29 = fVar29 - fVar1;
  }
  aiStack_b0[0] = (int)fVar29;
  fVar29 = fVar31 * DAT_ram_40098f94;
  if (0.0 <= fVar29) {
    fVar29 = fVar29 + fVar1;
  }
  else {
    fVar29 = fVar29 - fVar1;
  }
  aiStack_c0[1] = (int)fVar29;
  fVar29 = fVar31 * DAT_ram_40098ee4;
  if (0.0 <= fVar29) {
    fVar29 = fVar29 + fVar1;
  }
  else {
    fVar29 = fVar29 - fVar1;
  }
  aiStack_b0[1] = (int)fVar29;
  fVar29 = fVar31 * DAT_ram_40098f98;
  if (0.0 <= fVar29) {
    fVar29 = fVar29 + fVar1;
  }
  else {
    fVar29 = fVar29 - fVar1;
  }
  aiStack_c0[2] = (int)fVar29;
  fVar29 = fVar31 * DAT_ram_40098f9c;
  if (0.0 <= fVar29) {
    fVar29 = fVar29 + fVar1;
  }
  else {
    fVar29 = fVar29 - fVar1;
  }
  aiStack_b0[2] = (int)fVar29;
  fVar29 = fVar31 * DAT_ram_40098fa0;
  if (0.0 <= fVar29) {
    fVar29 = fVar29 + fVar1;
  }
  else {
    fVar29 = fVar29 - fVar1;
  }
  aiStack_c0[3] = (int)fVar29;
  fVar31 = fVar31 * DAT_ram_40098fa4;
  if (0.0 <= fVar31) {
    fVar31 = fVar31 + fVar1;
  }
  else {
    fVar31 = fVar31 - fVar1;
  }
  aiStack_b0[3] = (int)fVar31;
  memset(param_1 + 0x1957,0,0x20);
  puVar25 = &DAT_ram_40098fec;
  puVar24 = param_1 + 0x1959;
  puVar23 = param_1 + 0x195b;
  iVar11 = 1;
  puVar26 = puVar25;
  do {
    iVar20 = aiStack_c0[iVar11 + -1];
    iVar15 = 800;
    if ((iVar20 < 0x321) && (iVar15 = iVar20, iVar20 < 1)) {
      iVar15 = 1;
    }
    uVar14 = *puVar26;
    *(short *)((int)param_1 + iVar11 * 2 + 0xcab6) = (short)iVar15;
    *(undefined2 *)((int)param_1 + iVar11 * 2 + 0xcabe) = 0;
    *(undefined4 *)puVar24 = uVar14;
    pvVar13 = memset(puVar23,0,iVar15 << 2);
    iVar11 = iVar11 + 1;
    puVar26 = puVar26 + 1;
    puVar24 = (ulonglong *)((int)puVar24 + 4);
    puVar23 = (ulonglong *)((int)pvVar13 + 0xc80);
  } while (iVar11 != 5);
  memset(param_1 + 0x1f9b,0,0x20);
  puVar24 = param_1 + 0x1f9d;
  puVar23 = param_1 + 0x1f9f;
  iVar11 = 1;
  do {
    iVar20 = aiStack_c0[iVar11 + 3];
    iVar15 = 800;
    if ((iVar20 < 0x321) && (iVar15 = iVar20, iVar20 < 1)) {
      iVar15 = 1;
    }
    uVar14 = *puVar25;
    *(short *)((int)param_1 + iVar11 * 2 + 0xfcd6) = (short)iVar15;
    *(undefined2 *)((int)param_1 + iVar11 * 2 + 0xfcde) = 0;
    *(undefined4 *)puVar24 = uVar14;
    pvVar13 = memset(puVar23,0,iVar15 << 2);
    iVar11 = iVar11 + 1;
    puVar25 = puVar25 + 1;
    puVar24 = (ulonglong *)((int)puVar24 + 4);
    puVar23 = (ulonglong *)((int)pvVar13 + 0xc80);
  } while (iVar11 != 5);
  memset((void *)((int)param_1 + 0x32b4),0,0x200);
  fVar31 = DAT_ram_40098f7c;
  fVar29 = DAT_ram_400980e0;
  if (fVar34 <= fVar30) {
    param_1[0xe] = (ulonglong)DAT_ram_40098fbc;
    *(undefined4 *)((int)param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
    *(undefined **)((int)param_1 + 0x84) = &sedeleg;
    fVar36 = fVar29;
LAB_ram_4007abec:
    uVar37 = FUN_ram_40000c0e(fVar31 / fVar36);
    *(undefined8 *)((int)param_1 + 0x7c) = uVar37;
LAB_ram_4007abf6:
    *(undefined4 *)(param_1 + 0x10) = 0;
    fVar31 = DAT_ram_40098f84;
    fVar36 = DAT_ram_40098f80;
    if (fVar30 < fVar34) goto LAB_ram_4007a1ee;
LAB_ram_4007ac1a:
    aiStack_b0[0] = (int)(fVar36 + fVar1);
    fVar33 = fVar31 * DAT_ram_40098fac;
    if (fVar33 < 0.0) goto LAB_ram_4007a238;
LAB_ram_4007ac3c:
    aiStack_b0[1] = (int)(fVar33 + fVar1);
    fVar33 = fVar31 * DAT_ram_40098fb0;
    if (0.0 <= fVar33) goto LAB_ram_4007ac5e;
LAB_ram_4007a25a:
    fVar31 = fVar31 * DAT_ram_40098fb4;
    aiStack_b0[2] = (int)(fVar33 - fVar1);
    if (fVar31 < 0.0) goto LAB_ram_4007a27c;
LAB_ram_4007ac80:
    fVar31 = fVar31 + fVar1;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x84) = 1;
    fVar35 = DAT_ram_4009824c;
    fVar29 = DAT_ram_400980e0;
    if (0.0 < fVar34) {
      fVar29 = DAT_ram_40098fa8;
      if (fVar34 * DAT_ram_4009824c < DAT_ram_40098ef0) {
        fVar29 = fVar34 * DAT_ram_4009824c * DAT_ram_4009810c;
      }
      uVar38 = FUN_ram_40000c0e(fVar29 / fVar34);
      param_1[0xe] = uVar38;
      *(undefined8 *)((int)param_1 + 0x74) = 0;
      param_1[0xf] = 0;
      *(undefined1 *)((int)param_1 + 0x85) = 1;
      fVar29 = DAT_ram_400980e0;
      if (0.0 < fVar34) {
        fVar36 = fVar34;
        fVar31 = DAT_ram_40098f7c;
        if (fVar34 * fVar35 < DAT_ram_400980cc) {
          fVar31 = fVar34 * fVar35 * DAT_ram_4009810c;
        }
        goto LAB_ram_4007abec;
      }
      goto LAB_ram_4007abf6;
    }
    *(undefined4 *)((int)param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
    *(undefined1 *)((int)param_1 + 0x85) = 1;
    *(undefined4 *)(param_1 + 0x10) = 0;
LAB_ram_4007a1ee:
    fVar31 = (fVar34 / fVar33) * DAT_ram_400930f0;
    fVar36 = fVar31 * _DAT_ram_4009366c;
    if (0.0 <= fVar36) goto LAB_ram_4007ac1a;
    aiStack_b0[0] = (int)(fVar36 - fVar1);
    fVar33 = fVar31 * DAT_ram_40098fac;
    if (0.0 <= fVar33) goto LAB_ram_4007ac3c;
LAB_ram_4007a238:
    aiStack_b0[1] = (int)(fVar33 - fVar1);
    fVar33 = fVar31 * DAT_ram_40098fb0;
    if (fVar33 < 0.0) goto LAB_ram_4007a25a;
LAB_ram_4007ac5e:
    fVar31 = fVar31 * DAT_ram_40098fb4;
    aiStack_b0[2] = (int)(fVar33 + fVar1);
    if (0.0 <= fVar31) goto LAB_ram_4007ac80;
LAB_ram_4007a27c:
    fVar31 = fVar31 - fVar1;
  }
  fVar10 = DAT_ram_40098fb4;
  fVar35 = DAT_ram_40098fb0;
  fVar36 = DAT_ram_40098fac;
  fVar33 = _DAT_ram_4009366c;
  aiStack_b0[3] = (int)fVar31;
  memset(param_1 + 0x11,0,0x20);
  puVar26 = &DAT_ram_40098ffc;
  puVar24 = param_1 + 0x13;
  iVar11 = 1;
  puVar23 = param_1 + 0x15;
  do {
    iVar20 = aiStack_c0[iVar11 + 3];
    iVar15 = 800;
    if ((iVar20 < 0x321) && (iVar15 = iVar20, iVar20 < 1)) {
      iVar15 = 1;
    }
    uVar14 = *puVar26;
    *(short *)((int)param_1 + iVar11 * 2 + 0x86) = (short)iVar15;
    *(undefined2 *)((int)param_1 + iVar11 * 2 + 0x8e) = 0;
    *(undefined4 *)puVar24 = uVar14;
    pvVar13 = memset(puVar23,0,iVar15 << 2);
    iVar11 = iVar11 + 1;
    puVar26 = puVar26 + 1;
    puVar24 = (ulonglong *)((int)puVar24 + 4);
    puVar23 = (ulonglong *)((int)pvVar13 + 0xc80);
  } while (iVar11 != 5);
  if (fVar34 <= fVar30) {
    iVar11 = 0x133d;
  }
  else {
    FUN_ram_400008b8(0,fVar34 * DAT_ram_40098f88);
    fVar30 = (float)FUN_ram_400006cc();
    iVar11 = 0x13fe - (int)fVar30;
    if (iVar11 < 1) {
      iVar11 = 1;
    }
  }
  *(float *)(param_1 + 0x25df) = fVar34;
  puVar26 = (undefined4 *)((int)param_1 + 4);
  puVar25 = (undefined4 *)((int)param_1 + 0x12efc);
  do {
    uVar14 = puVar26[1];
    uVar16 = puVar26[2];
    uVar18 = puVar26[3];
    *puVar25 = *puVar26;
    puVar25[1] = uVar14;
    puVar25[2] = uVar16;
    puVar25[3] = uVar18;
    uVar14 = DAT_ram_400930f4;
    puVar26 = puVar26 + 4;
    puVar25 = puVar25 + 4;
  } while (puVar26 != (undefined4 *)((int)param_1 + 0x54));
  *puVar25 = *puVar26;
  fVar31 = (float)FUN_ram_400008b8(uVar14,*(undefined4 *)((int)param_1 + 0x12f0c));
  __s = param_1 + 0x2615;
  fVar30 = fVar31 * DAT_ram_40098fb8 + DAT_ram_400941ec;
  pfVar27 = (float *)&DAT_ram_40098fcc;
  puVar23 = param_1 + 0x25ea;
  pfVar12 = (float *)(param_1 + 0x25ec);
  puVar24 = __s;
  while( true ) {
    fVar34 = fVar30 * *pfVar27 * ((float)uVar28 / fVar29);
    if (fVar34 < 0.0) {
      fVar34 = fVar34 - fVar1;
    }
    else {
      fVar34 = fVar34 + fVar1;
    }
    iVar15 = (int)fVar34;
    if (iVar15 < 1) {
      iVar15 = 1;
    }
    if (iVar11 < iVar15) {
      iVar15 = iVar11;
    }
    *(short *)puVar23 = (short)iVar15;
    *pfVar12 = (float)iVar15;
    memset(puVar24,0,0x5000);
    pfVar27 = pfVar27 + 1;
    puVar24 = puVar24 + 0xa00;
    if (pfVar12 + 1 == (float *)(param_1 + 0x25f0)) break;
    uVar28 = (ulonglong)(uint)param_1[0x25df];
    puVar23 = (ulonglong *)((int)puVar23 + 2);
    pfVar12 = pfVar12 + 1;
  }
  fVar30 = *(float *)(param_1 + 0x25e5);
  *(undefined1 *)(param_1 + 0x2601) = 0;
  *(undefined2 *)((int)param_1 + 0x1300a) = 0;
  fVar34 = 0.0;
  if ((0.0 <= fVar30) && (fVar34 = DAT_ram_40098f88, fVar30 <= DAT_ram_4009309c)) {
    fVar34 = fVar30 * fVar2;
  }
  fVar30 = *(float *)(param_1 + 0x25df);
  *(float *)((int)param_1 + 0x13004) = fVar30 * fVar34;
  fVar32 = (float)FUN_ram_400008b8(0,*(undefined4 *)((int)param_1 + 0x12f24));
  uVar9 = DAT_ram_40098b0c;
  uVar8 = DAT_ram_40098b08;
  uVar7 = DAT_ram_40098b00;
  uVar6 = DAT_ram_40098afc;
  uVar5 = DAT_ram_40098af8;
  uVar4 = DAT_ram_40098af4;
  uVar3 = DAT_ram_400988f8;
  uVar18 = DAT_ram_400988f0;
  fVar34 = DAT_ram_4009281c;
  uVar16 = DAT_ram_40092818;
  if (0.0 < fVar32) {
    fVar32 = (fVar32 * DAT_ram_400980f4) / fVar30;
    *(undefined4 *)((int)param_1 + 0x12fbc) = DAT_ram_40098b04;
    *(float *)((int)param_1 + 0x12fa4) = fVar34;
    *(float *)((int)param_1 + 0x12f8c) = fVar34;
    *(undefined4 *)((int)param_1 + 0x12fac) = uVar3;
    *(undefined4 *)(param_1 + 0x25f6) = uVar4;
    *(undefined4 *)((int)param_1 + 0x12f94) = uVar5;
    *(undefined4 *)((int)param_1 + 0x12fb4) = uVar16;
    *(undefined4 *)(param_1 + 0x25f3) = uVar6;
    *(undefined4 *)(param_1 + 0x25f7) = uVar7;
    *(undefined4 *)((int)param_1 + 0x12f9c) = uVar16;
    *(undefined4 *)(param_1 + 0x25f4) = uVar8;
    *(undefined4 *)(param_1 + 0x25f8) = uVar9;
    *(undefined4 *)(param_1 + 0x25f1) = uVar18;
    *(undefined4 *)(param_1 + 0x25f5) = uVar18;
    *(undefined4 *)(param_1 + 0x25f2) = uVar18;
    *(undefined4 *)((int)param_1 + 0x12f84) = 0;
    uVar16 = FUN_ram_40000a08(fVar32);
    *(undefined4 *)((int)param_1 + 0x12fc4) = uVar16;
    uVar16 = FUN_ram_40000786(fVar32);
    fVar34 = DAT_ram_40098b10;
    *(undefined4 *)((int)param_1 + 0x12fe4) = uVar16;
    uVar16 = FUN_ram_40000a08(fVar32 * fVar34);
    *(undefined4 *)(param_1 + 0x25f9) = uVar16;
    uVar16 = FUN_ram_40000786(fVar32 * fVar34);
    fVar34 = DAT_ram_40098b14;
    *(undefined4 *)(param_1 + 0x25fd) = uVar16;
    uVar16 = FUN_ram_40000a08(fVar32 * fVar34);
    *(undefined4 *)((int)param_1 + 0x12fcc) = uVar16;
    uVar16 = FUN_ram_40000786(fVar32 * fVar34);
    fVar34 = DAT_ram_40098b18;
    *(undefined4 *)((int)param_1 + 0x12fec) = uVar16;
    uVar16 = FUN_ram_40000a08(fVar32 * fVar34);
    *(undefined4 *)(param_1 + 0x25fa) = uVar16;
    uVar16 = FUN_ram_40000786(fVar32 * fVar34);
    fVar34 = DAT_ram_4009851c;
    *(undefined4 *)(param_1 + 0x25fe) = uVar16;
    uVar16 = FUN_ram_40000a08(fVar32 * fVar34);
    *(undefined4 *)((int)param_1 + 0x12fd4) = uVar16;
    uVar16 = FUN_ram_40000786(fVar32 * fVar34);
    fVar34 = DAT_ram_40092824;
    *(undefined4 *)((int)param_1 + 0x12ff4) = uVar16;
    uVar16 = FUN_ram_40000a08(fVar32 * fVar34);
    *(undefined4 *)(param_1 + 0x25fb) = uVar16;
    uVar16 = FUN_ram_40000786(fVar32 * fVar34);
    fVar34 = DAT_ram_40098b1c;
    *(undefined4 *)(param_1 + 0x25ff) = uVar16;
    uVar16 = FUN_ram_40000a08(fVar32 * fVar34);
    *(undefined4 *)((int)param_1 + 0x12fdc) = uVar16;
    uVar16 = FUN_ram_40000786(fVar32 * fVar34);
    fVar34 = DAT_ram_40098b20;
    *(undefined4 *)((int)param_1 + 0x12ffc) = uVar16;
    uVar16 = FUN_ram_40000a08(fVar32 * fVar34);
    *(undefined4 *)(param_1 + 0x25fc) = uVar16;
    uVar16 = FUN_ram_40000786(fVar32 * fVar34);
    *(undefined1 *)(param_1 + 0x2601) = 1;
    *(undefined4 *)(param_1 + 0x2600) = uVar16;
  }
  fVar30 = fVar30 / fVar29;
  fVar29 = fVar31 * DAT_ram_400980bc + fVar1;
  *(undefined2 *)(param_1 + 0x25f0) = 0;
  uVar16 = DAT_ram_40098374;
  fVar31 = DAT_ram_4009281c;
  fVar33 = fVar29 * fVar33 * fVar30;
  if (0.0 <= fVar33) {
    fVar33 = fVar33 + fVar1;
  }
  else {
    fVar33 = fVar33 - fVar1;
  }
  aiStack_b0[0] = (int)fVar33;
  if (aiStack_b0[0] < 1) {
    aiStack_b0[0] = 1;
  }
  fVar33 = fVar29 * fVar36 * fVar30;
  if (0.0 <= fVar33) {
    fVar33 = fVar33 + fVar1;
  }
  else {
    fVar33 = fVar33 - fVar1;
  }
  aiStack_b0[1] = (int)fVar33;
  if (aiStack_b0[1] < 1) {
    aiStack_b0[1] = 1;
  }
  fVar33 = fVar29 * fVar35 * fVar30;
  if (0.0 <= fVar33) {
    fVar33 = fVar33 + fVar1;
  }
  else {
    fVar33 = fVar33 - fVar1;
  }
  aiStack_b0[2] = (int)fVar33;
  if (aiStack_b0[2] < 1) {
    aiStack_b0[2] = 1;
  }
  fVar30 = fVar29 * fVar10 * fVar30;
  if (0.0 <= fVar30) {
    fVar30 = fVar30 + fVar1;
  }
  else {
    fVar30 = fVar30 - fVar1;
  }
  aiStack_b0[3] = (int)fVar30;
  if (aiStack_b0[3] < 1) {
    aiStack_b0[3] = 1;
  }
  fVar33 = *(float *)(param_1 + 0x25e2);
  if (fVar33 < 0.0) {
    fVar30 = 0.0;
  }
  else {
    fVar30 = DAT_ram_400937b0;
    if (fVar33 <= DAT_ram_4009281c) {
      fVar30 = fVar33 * DAT_ram_400937b0;
    }
  }
  *(float *)(param_1 + 0x7617) = fVar30;
  *(undefined4 *)(param_1 + 0x7615) = uVar16;
  *(undefined4 *)((int)param_1 + 0x3b0ac) = uVar16;
  *(undefined4 *)(param_1 + 0x7616) = uVar16;
  *(undefined4 *)((int)param_1 + 0x3b0b4) = uVar16;
  pvVar13 = (void *)((int)param_1 + 0x3b0bc);
  iVar11 = 1;
  do {
    iVar20 = aiStack_c0[iVar11 + 3];
    iVar15 = 800;
    if ((iVar20 < 0x321) && (iVar15 = iVar20, iVar20 < 1)) {
      iVar15 = 1;
    }
    *(short *)((int)param_1 + iVar11 * 2 + 0x3b0a6) = (short)iVar15;
    *(undefined2 *)((int)param_1 + iVar11 * 2 + 0x3b0ae) = 0;
    pvVar13 = memset(pvVar13,0,iVar15 << 2);
    fVar33 = DAT_ram_400980c8;
    uVar16 = DAT_ram_400930d8;
    iVar11 = iVar11 + 1;
    pvVar13 = (void *)((int)pvVar13 + 0xc80);
  } while (iVar11 != 5);
  if (*(char *)((int)param_1 + 0x12f4c) == '\0') {
    fVar29 = (float)FUN_ram_400008b8(DAT_ram_400930d8,(int)param_1[0x25e0]);
    fVar33 = (float)FUN_ram_400008b8(uVar14,(int)param_1[0x25e3]);
    fVar34 = (float)FUN_ram_400008b8(uVar16,fVar29 * fVar33);
    fVar30 = DAT_ram_40098108;
    fVar33 = DAT_ram_400980c8;
    uVar14 = DAT_ram_400930a4;
    pfVar12 = (float *)(param_1 + 0x25ec);
    do {
      pfVar27 = pfVar12 + 1;
      fVar36 = ((float)*(undefined8 *)pfVar12 / *(float *)(param_1 + 0x25df)) * fVar30;
      fVar35 = (float)FUN_ram_40000d54(uVar14,fVar36 / fVar29);
      fVar36 = (float)FUN_ram_40000d54(uVar14,fVar36 / fVar34);
      pfVar12[0x2b] = fVar35 * fVar33;
      pfVar12[0x33] = (fVar36 - fVar35) * fVar33;
      pfVar12 = pfVar27;
    } while ((float *)(param_1 + 0x25f0) != pfVar27);
    fVar33 = *(float *)(param_1 + 0x25df);
    if (*(char *)((int)param_1 + 0x12f4c) != '\0') goto LAB_ram_4007ab6c;
    fVar29 = (float)FUN_ram_400008b8(DAT_ram_40093664,*(undefined4 *)((int)param_1 + 0x12f04));
    fVar30 = DAT_ram_4009810c;
    uVar16 = FUN_ram_40000c0e((fVar29 * DAT_ram_4009810c) / fVar33);
    uVar14 = DAT_ram_400930bc;
    *(undefined4 *)((int)param_1 + 0x1304c) = uVar16;
    fVar33 = (float)FUN_ram_400008b8(uVar14,*(undefined4 *)((int)param_1 + 0x12f14));
    uVar14 = FUN_ram_40000c0e((fVar33 * fVar30) / *(float *)(param_1 + 0x25df));
    fVar33 = *(float *)(param_1 + 0x25df);
    *(undefined4 *)(param_1 + 0x260a) = uVar14;
  }
  else {
    *(float *)((int)param_1 + 0x1300c) = DAT_ram_400980c8;
    *(float *)(param_1 + 0x2602) = fVar33;
    *(float *)((int)param_1 + 0x13014) = fVar33;
    *(float *)(param_1 + 0x2603) = fVar33;
    *(float *)((int)param_1 + 0x1301c) = fVar33;
    *(float *)(param_1 + 0x2604) = fVar33;
    *(float *)((int)param_1 + 0x13024) = fVar33;
    *(float *)(param_1 + 0x2605) = fVar33;
    memset((void *)((int)param_1 + 0x1302c),0,0x20);
    fVar33 = *(float *)(param_1 + 0x25df);
LAB_ram_4007ab6c:
    *(undefined4 *)((int)param_1 + 0x1304c) = 0;
    *(undefined4 *)(param_1 + 0x260a) = 0;
  }
  fVar30 = (float)FUN_ram_400008b8(0,*(undefined4 *)((int)param_1 + 0x12efc));
  fVar30 = fVar30 * fVar2 * fVar33;
  if (0.0 <= fVar30) {
    fVar30 = fVar30 + fVar1;
  }
  else {
    fVar30 = fVar30 - fVar1;
  }
  iVar11 = (int)fVar30;
  fVar30 = *(float *)(param_1 + 0x25e1);
  uVar22 = (short)~(ushort)((uint)iVar11 >> 0x10) >> 0xf & (ushort)iVar11;
  if (0x2580 < iVar11) {
    uVar22 = 0x2580;
  }
  *(ushort *)((int)param_1 + 0x13096) = uVar22;
  if (fVar30 < 0.0) {
    fVar30 = 0.0;
  }
  else if (fVar31 < fVar30) {
    fVar30 = fVar31;
  }
  *(float *)((int)param_1 + 0x130a4) = fVar30;
  fVar33 = *(float *)((int)param_1 + 0x12f1c) * fVar2 * fVar33;
  if (0.0 <= fVar33) {
    fVar33 = fVar33 + fVar1;
  }
  else {
    fVar33 = fVar33 - fVar1;
  }
  fVar33 = (float)FUN_ram_400008b8(fVar31,(float)(int)fVar33);
  *(ushort *)((int)param_1 + 0x1309e) = (ushort)(-1 < (int)fVar33) * (short)(int)fVar33;
  *(undefined1 *)((int)param_1 + 0x5a) = 1;
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  param_1[0xc] = param_1[1];
  *(undefined8 *)((int)param_1 + 100) = *(undefined8 *)((int)param_1 + 0xc);
  param_1[0xd] = param_1[6];
  *(undefined8 *)((int)param_1 + 0x6c) = *(undefined8 *)((int)param_1 + 0x34);
  memset((void *)((int)param_1 + 0x34b4),0,0x9604);
  *(undefined2 *)(param_1 + 0x655) = 0;
  *(undefined2 *)((int)param_1 + 0x32ac) = *(undefined2 *)((int)param_1 + 0x32aa);
  *(undefined2 *)((int)param_1 + 0x32ae) = 0;
  *(undefined2 *)(param_1 + 0x656) = 0;
  if ((ushort)param_1[0x1957] == 0) {
    uVar17 = (uint)*(ushort *)((int)param_1 + 0xcaba);
    *(undefined2 *)(param_1 + 0x1958) = 0;
    if (uVar17 == 0) goto LAB_ram_4007a9b8;
LAB_ram_4007acc0:
    memset(param_1 + 0x1aeb,0,uVar17 << 2);
    uVar17 = (uint)*(ushort *)((int)param_1 + 0xcabc);
    *(undefined2 *)((int)param_1 + 0xcac2) = 0;
    if (uVar17 != 0) goto LAB_ram_4007acde;
LAB_ram_4007a9c8:
    uVar17 = (uint)*(ushort *)((int)param_1 + 0xcabe);
    *(undefined2 *)((int)param_1 + 0xcac4) = 0;
    if (uVar17 == 0) goto LAB_ram_4007a9d8;
LAB_ram_4007acfe:
    memset(param_1 + 0x1e0b,0,uVar17 << 2);
    *(undefined2 *)((int)param_1 + 0xcac6) = 0;
    uVar22 = (ushort)param_1[0x1f9b];
  }
  else {
    memset(param_1 + 0x195b,0,(uint)(ushort)param_1[0x1957] << 2);
    uVar17 = (uint)*(ushort *)((int)param_1 + 0xcaba);
    *(undefined2 *)(param_1 + 0x1958) = 0;
    if (uVar17 != 0) goto LAB_ram_4007acc0;
LAB_ram_4007a9b8:
    uVar17 = (uint)*(ushort *)((int)param_1 + 0xcabc);
    *(undefined2 *)((int)param_1 + 0xcac2) = 0;
    if (uVar17 == 0) goto LAB_ram_4007a9c8;
LAB_ram_4007acde:
    memset(param_1 + 0x1c7b,0,uVar17 << 2);
    uVar17 = (uint)*(ushort *)((int)param_1 + 0xcabe);
    *(undefined2 *)((int)param_1 + 0xcac4) = 0;
    if (uVar17 != 0) goto LAB_ram_4007acfe;
LAB_ram_4007a9d8:
    *(undefined2 *)((int)param_1 + 0xcac6) = 0;
    uVar22 = (ushort)param_1[0x1f9b];
  }
  if (uVar22 != 0) {
    memset(param_1 + 0x1f9f,0,(uint)uVar22 << 2);
  }
  *(undefined2 *)(param_1 + 0x1f9c) = 0;
  if (*(ushort *)((int)param_1 + 0xfcda) != 0) {
    memset(param_1 + 0x212f,0,(uint)*(ushort *)((int)param_1 + 0xfcda) << 2);
  }
  *(undefined2 *)((int)param_1 + 0xfce2) = 0;
  if (*(ushort *)((int)param_1 + 0xfcdc) != 0) {
    memset(param_1 + 0x22bf,0,(uint)*(ushort *)((int)param_1 + 0xfcdc) << 2);
  }
  *(undefined2 *)((int)param_1 + 0xfce4) = 0;
  if (*(ushort *)((int)param_1 + 0xfcde) != 0) {
    memset(param_1 + 0x244f,0,(uint)*(ushort *)((int)param_1 + 0xfcde) << 2);
  }
  *(undefined2 *)((int)param_1 + 0xfce6) = 0;
  memset((void *)((int)param_1 + 0x32b4),0,0x200);
  if ((ushort)param_1[0x11] != 0) {
    memset(param_1 + 0x15,0,(uint)(ushort)param_1[0x11] << 2);
  }
  *(undefined2 *)(param_1 + 0x12) = 0;
  if (*(ushort *)((int)param_1 + 0x8a) != 0) {
    memset(param_1 + 0x1a5,0,(uint)*(ushort *)((int)param_1 + 0x8a) << 2);
  }
  *(undefined2 *)((int)param_1 + 0x92) = 0;
  if (*(ushort *)((int)param_1 + 0x8c) != 0) {
    memset(param_1 + 0x335,0,(uint)*(ushort *)((int)param_1 + 0x8c) << 2);
  }
  *(undefined2 *)((int)param_1 + 0x94) = 0;
  if (*(ushort *)((int)param_1 + 0x8e) != 0) {
    memset(param_1 + 0x4c5,0,(uint)*(ushort *)((int)param_1 + 0x8e) << 2);
  }
  *(undefined2 *)((int)param_1 + 0x96) = 0;
  *(undefined4 *)((int)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  puVar26 = (undefined4 *)((int)param_1 + 0x13054);
  do {
    puVar25 = puVar26 + 1;
    memset(__s,0,0x5000);
    *puVar26 = 0;
    puVar26[8] = 0;
    __s = __s + 0xa00;
    puVar26 = puVar25;
  } while (puVar25 != (undefined4 *)((int)param_1 + 0x13074));
  *(undefined2 *)(param_1 + 0x25f0) = 0;
  if ((ushort)param_1[0x7615] != 0) {
    memset((void *)((int)param_1 + 0x3b0bc),0,(uint)(ushort)param_1[0x7615] << 2);
  }
  *(undefined2 *)(param_1 + 0x7616) = 0;
  if (*(ushort *)((int)param_1 + 0x3b0aa) != 0) {
    memset((void *)((int)param_1 + 0x3bd3c),0,(uint)*(ushort *)((int)param_1 + 0x3b0aa) << 2);
  }
  *(undefined2 *)((int)param_1 + 0x3b0b2) = 0;
  if (*(ushort *)((int)param_1 + 0x3b0ac) != 0) {
    memset((void *)((int)param_1 + 0x3c9bc),0,(uint)*(ushort *)((int)param_1 + 0x3b0ac) << 2);
  }
  *(undefined2 *)((int)param_1 + 0x3b0b4) = 0;
  if (*(ushort *)((int)param_1 + 0x3b0ae) != 0) {
    memset((void *)((int)param_1 + 0x3d63c),0,(uint)*(ushort *)((int)param_1 + 0x3b0ae) << 2);
  }
  *(undefined2 *)((int)param_1 + 0x3b0b6) = 0;
  memset((void *)((int)param_1 + 0x3e2bc),0,0x9604);
  *(undefined2 *)((int)param_1 + 0x13094) = 0;
  *(undefined2 *)((int)param_1 + 0x1309a) = 0;
  *(undefined2 *)(param_1 + 0x2613) = *(undefined2 *)((int)param_1 + 0x13096);
  *(undefined2 *)((int)param_1 + 0x1309c) = 0;
  *(undefined2 *)(param_1 + 0x2614) = 0;
LAB_ram_40079ed8:
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}


