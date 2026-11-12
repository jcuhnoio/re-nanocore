/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40081000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40081558.
 * REA evidence: ev_162aaf46a10ad5846c70d17d204e227bc5ac5505b425f195abe9b0a54f8b0dd3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40081558(ulonglong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  if (param_2 != (ulonglong *)0x0) {
    memset(param_2,0,0x478b0);
    uVar7 = DAT_ram_4009a8a4;
    uVar6 = DAT_ram_4009a828;
    uVar5 = DAT_ram_4009a0e8;
    uVar4 = (undefined4)DAT_ram_40099f5c;
    uVar3 = (undefined4)DAT_ram_40096074;
    uVar2 = DAT_ram_400952c4;
    uVar1 = DAT_ram_40094e88;
    uVar13 = (ulonglong)DAT_ram_40094604;
    uVar8 = (ulonglong)DAT_ram_4009a8a0;
    uVar9 = (ulonglong)DAT_ram_40096018;
    uVar10 = (ulonglong)DAT_ram_4009afdc;
    uVar11 = (ulonglong)_DAT_ram_40094638;
    uVar12 = (ulonglong)DAT_ram_4009a7ac;
    *param_2 = param_1 & 0xffffffff;
    *(undefined **)((int)param_2 + 0x54) = &sedeleg;
    *(undefined4 *)(param_2 + 1) = uVar1;
    *(undefined4 *)((int)param_2 + 0xc) = uVar5;
    param_2[2] = uVar13;
    *(undefined4 *)((int)param_2 + 0x14) = uVar4;
    param_2[3] = uVar13;
    *(undefined4 *)((int)param_2 + 0x1c) = uVar7;
    *(undefined4 *)(param_2 + 4) = uVar6;
    *(undefined4 *)((int)param_2 + 0x24) = uVar3;
    *(undefined4 *)(param_2 + 5) = uVar2;
    *(ulonglong *)((int)param_2 + 0x2c) = uVar8;
    param_2[6] = uVar9;
    *(ulonglong *)((int)param_2 + 0x34) = uVar10;
    param_2[7] = uVar13;
    param_2[9] = uVar13;
    *(ulonglong *)((int)param_2 + 0x4c) = uVar11;
    param_2[10] = uVar12;
    FUN_ram_4007fcb8(param_2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40081628.
 * REA evidence: ev_45aac7b7897e0db262ab067cd8188c7a548cc25255be9eaf238b8671208b176e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_40081628(int param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_1 != 0) {
    memset(param_1 + 0x34a8,0,0x9604);
    *(undefined2 *)(param_1 + 0x329c) = 0;
    *(undefined2 *)(param_1 + 0x32a0) = *(undefined2 *)(param_1 + 0x329e);
    *(undefined2 *)(param_1 + 0x32a2) = 0;
    *(undefined2 *)(param_1 + 0x32a4) = 0;
    if (*(ushort *)(param_1 + 0xcaac) == 0) {
      uVar1 = *(ushort *)(param_1 + 0xcaae);
      *(undefined2 *)(param_1 + 0xcab4) = 0;
    }
    else {
      memset(param_1 + 0xcacc,0,(uint)*(ushort *)(param_1 + 0xcaac) << 2);
      uVar1 = *(ushort *)(param_1 + 0xcaae);
      *(undefined2 *)(param_1 + 0xcab4) = 0;
    }
    if (uVar1 == 0) {
      uVar1 = *(ushort *)(param_1 + 0xcab0);
      *(undefined2 *)(param_1 + 0xcab6) = 0;
    }
    else {
      memset(param_1 + 0xd74c,0,(uint)uVar1 << 2);
      uVar1 = *(ushort *)(param_1 + 0xcab0);
      *(undefined2 *)(param_1 + 0xcab6) = 0;
    }
    if (uVar1 == 0) {
      uVar1 = *(ushort *)(param_1 + 0xcab2);
      *(undefined2 *)(param_1 + 0xcab8) = 0;
    }
    else {
      memset(param_1 + 0xe3cc,0,(uint)uVar1 << 2);
      uVar1 = *(ushort *)(param_1 + 0xcab2);
      *(undefined2 *)(param_1 + 0xcab8) = 0;
    }
    if (uVar1 == 0) {
      *(undefined2 *)(param_1 + 0xcaba) = 0;
      uVar1 = *(ushort *)(param_1 + 0xfccc);
    }
    else {
      memset(param_1 + 0xf04c,0,(uint)uVar1 << 2);
      *(undefined2 *)(param_1 + 0xcaba) = 0;
      uVar1 = *(ushort *)(param_1 + 0xfccc);
    }
    if (uVar1 == 0) {
      uVar1 = *(ushort *)(param_1 + 0xfcce);
      *(undefined2 *)(param_1 + 0xfcd4) = 0;
    }
    else {
      memset(param_1 + 0xfcec,0,(uint)uVar1 << 2);
      uVar1 = *(ushort *)(param_1 + 0xfcce);
      *(undefined2 *)(param_1 + 0xfcd4) = 0;
    }
    if (uVar1 == 0) {
      uVar1 = *(ushort *)(param_1 + 0xfcd0);
      *(undefined2 *)(param_1 + 0xfcd6) = 0;
    }
    else {
      memset(param_1 + 0x1096c,0,(uint)uVar1 << 2);
      uVar1 = *(ushort *)(param_1 + 0xfcd0);
      *(undefined2 *)(param_1 + 0xfcd6) = 0;
    }
    if (uVar1 == 0) {
      uVar1 = *(ushort *)(param_1 + 0xfcd2);
      *(undefined2 *)(param_1 + 0xfcd8) = 0;
    }
    else {
      memset(param_1 + 0x115ec,0,(uint)uVar1 << 2);
      uVar1 = *(ushort *)(param_1 + 0xfcd2);
      *(undefined2 *)(param_1 + 0xfcd8) = 0;
    }
    if (uVar1 != 0) {
      memset(param_1 + 0x1226c,0,(uint)uVar1 << 2);
    }
    *(undefined2 *)(param_1 + 0xfcda) = 0;
    memset(param_1 + 0x32a8,0,0x200);
    if (*(ushort *)(param_1 + 0x7c) != 0) {
      memset(param_1 + 0x9c,0,(uint)*(ushort *)(param_1 + 0x7c) << 2);
    }
    *(undefined2 *)(param_1 + 0x84) = 0;
    if (*(ushort *)(param_1 + 0x7e) != 0) {
      memset(param_1 + 0xd1c,0,(uint)*(ushort *)(param_1 + 0x7e) << 2);
    }
    *(undefined2 *)(param_1 + 0x86) = 0;
    if (*(ushort *)(param_1 + 0x80) != 0) {
      memset(param_1 + 0x199c,0,(uint)*(ushort *)(param_1 + 0x80) << 2);
    }
    *(undefined2 *)(param_1 + 0x88) = 0;
    if (*(ushort *)(param_1 + 0x82) != 0) {
      memset(param_1 + 0x261c,0,(uint)*(ushort *)(param_1 + 0x82) << 2);
    }
    *(undefined2 *)(param_1 + 0x8a) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    iVar4 = param_1 + 0x13098;
    puVar2 = (undefined4 *)(param_1 + 0x13044);
    do {
      puVar3 = puVar2 + 1;
      iVar4 = memset(iVar4,0,0x5000);
      *puVar2 = 0;
      puVar2[8] = 0;
      iVar4 = iVar4 + 0x5000;
      puVar2 = puVar3;
    } while ((undefined4 *)(param_1 + 0x13064) != puVar3);
    *(undefined2 *)(param_1 + 0x12f70) = 0;
    if (*(ushort *)(param_1 + 0x3b098) != 0) {
      memset(param_1 + 0x3b0ac,0,(uint)*(ushort *)(param_1 + 0x3b098) << 2);
    }
    *(undefined2 *)(param_1 + 0x3b0a0) = 0;
    if (*(ushort *)(param_1 + 0x3b09a) != 0) {
      memset(param_1 + 0x3bd2c,0,(uint)*(ushort *)(param_1 + 0x3b09a) << 2);
    }
    *(undefined2 *)(param_1 + 0x3b0a2) = 0;
    if (*(ushort *)(param_1 + 0x3b09c) != 0) {
      memset(param_1 + 0x3c9ac,0,(uint)*(ushort *)(param_1 + 0x3b09c) << 2);
    }
    *(undefined2 *)(param_1 + 0x3b0a4) = 0;
    if (*(ushort *)(param_1 + 0x3b09e) != 0) {
      memset(param_1 + 0x3d62c,0,(uint)*(ushort *)(param_1 + 0x3b09e) << 2);
    }
    *(undefined2 *)(param_1 + 0x3b0a6) = 0;
    memset(param_1 + 0x3e2ac,0,0x9604);
    *(undefined2 *)(param_1 + 0x13084) = 0;
    *(undefined2 *)(param_1 + 0x1308a) = 0;
    *(undefined2 *)(param_1 + 0x13088) = *(undefined2 *)(param_1 + 0x13086);
    *(undefined2 *)(param_1 + 0x1308c) = 0;
    *(undefined2 *)(param_1 + 0x13090) = 0;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400819a2.
 * REA evidence: ev_cec8725fdb4c27c6fbe0bd85b3b50594e2aaa1f3609a6a091678b30cf6f3b069
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400819a2(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_ram_40000844(DAT_ram_40094ec4,param_1);
    *(undefined1 *)(param_2 + 0x54) = 1;
    *(undefined8 *)(param_2 + 8) = uVar1;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400819ce.
 * REA evidence: ev_1219e20a0a6b5047de13d91d5a9c57e1ccae3831215442235c52c6a08fbfa03c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400819ce(float param_1,int param_2)

{
  float fVar1;
  
  if (param_2 != 0) {
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    else if (DAT_ram_40094604 < param_1) {
      param_1 = DAT_ram_40094604;
    }
    fVar1 = (float)FUN_ram_40000d44(DAT_ram_4009a994,param_1);
    fVar1 = fVar1 * DAT_ram_40095290;
    *(undefined1 *)(param_2 + 0x54) = 1;
    *(ulonglong *)(param_2 + 0xc) = (ulonglong)(uint)fVar1;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40081a2a.
 * REA evidence: ev_54375fd6a8a9c10c88df3566f159ce70d3ca5dd24922bb6238f7becb4159846a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40081a2a(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_ram_40000844(0,param_1);
    *(undefined1 *)(param_2 + 0x54) = 1;
    *(undefined8 *)(param_2 + 4) = uVar1;
    *(undefined8 *)(param_2 + 0x34) = uVar1;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40081a54.
 * REA evidence: ev_9eb8867cd87f49eb37af0302be49cd2bbcf2699f3b95e1e09d9f5746d4b94f42
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40081a54(undefined4 param_1,undefined4 param_2,int param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar1 = FUN_ram_40000844(0,param_1);
    *(ulonglong *)(param_3 + 0x30) = uVar1 & 0xffffffff;
    uVar2 = FUN_ram_40000844(0,param_2);
    *(undefined1 *)(param_3 + 0x54) = 1;
    *(undefined8 *)(param_3 + 0x2c) = uVar2;
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40081a98.
 * REA evidence: ev_a3458f0836393a525b41891ee305689f7d92dded75fce1308cf62aa83bdf97ec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40081a98(float *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  ushort uVar14;
  undefined2 uVar15;
  uint uVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined *puVar30;
  float fVar31;
  float fVar32;
  
  fVar31 = DAT_ram_40094e80;
  fVar27 = *param_1;
  if (*param_1 <= DAT_ram_40094e80) {
    fVar27 = DAT_ram_40099f80;
  }
  cVar1 = *(char *)((int)param_1 + 0x45);
  *param_1 = fVar27;
  fVar26 = DAT_ram_4009b024;
  fVar24 = DAT_ram_40099f94;
  fVar5 = DAT_ram_40094634;
  fVar28 = DAT_ram_40094604;
  if (cVar1 != '\0') {
    param_1[0x12209] = 0.0;
    iVar12 = 1;
    pfVar17 = param_1 + 0x1220a;
    do {
      fVar28 = (float)iVar12;
      iVar12 = iVar12 + 1;
      fVar28 = (float)FUN_ram_40000712(fVar28 * fVar26 * fVar24);
      *pfVar17 = -(fVar28 * fVar5) + fVar5;
      fVar28 = DAT_ram_40094604;
      pfVar17 = pfVar17 + 1;
    } while (iVar12 != 0x401);
    fVar26 = DAT_ram_40094edc;
    if (*(char *)(param_1 + 6) == '\0') {
      fVar26 = DAT_ram_40094604;
    }
    fVar21 = fVar27 / DAT_ram_40094664;
    iVar12 = 0;
    pfVar17 = param_1 + 0x17;
    do {
      fVar20 = (float)(int)(&DAT_ram_4009b030)[iVar12] * fVar21 * fVar26;
      if (0.0 <= fVar20) {
        iVar9 = (int)(fVar20 + fVar5);
        if (0x200 < iVar9) goto LAB_ram_40082e38;
LAB_ram_40082604:
        if (iVar9 < 1) {
          iVar9 = 1;
        }
      }
      else {
        iVar9 = (int)(fVar20 - fVar5);
        if (iVar9 < 0x201) goto LAB_ram_40082604;
LAB_ram_40082e38:
        iVar9 = 0x200;
      }
      *(short *)((int)param_1 + iVar12 * 2 + 0x205c) = (short)iVar9;
      *(undefined2 *)((int)param_1 + iVar12 * 2 + 0x2064) = 0;
      iVar9 = memset(pfVar17,0,iVar9 << 2);
      iVar12 = iVar12 + 1;
      pfVar17 = (float *)(iVar9 + 0x800);
    } while (iVar12 != 4);
    pfVar19 = (float *)&DAT_ram_4009b050;
    pfVar17 = param_1 + 0x141b;
    pfVar7 = param_1 + 0x81b;
    do {
      fVar21 = (fVar27 * *pfVar19) / fVar31;
      if (0.0 <= fVar21) {
        fVar21 = fVar21 + fVar5;
      }
      else {
        fVar21 = fVar21 - fVar5;
      }
      iVar12 = (int)fVar21;
      if (iVar12 < 0x401) {
        if (iVar12 < 1) {
          iVar12 = 1;
        }
      }
      else {
        iVar12 = 0x400;
      }
      *(short *)pfVar17 = (short)iVar12;
      *(undefined2 *)((int)pfVar17 + 6) = 0;
      pfVar18 = pfVar7 + 0x400;
      memset(pfVar7,0,iVar12 << 2);
      pfVar19 = pfVar19 + 1;
      pfVar17 = (float *)((int)pfVar17 + 2);
      pfVar7 = pfVar18;
    } while (param_1 + 0x141b != pfVar18);
    pfVar19 = (float *)&DAT_ram_4009b040;
    pfVar7 = param_1 + 0x341e;
    pfVar17 = param_1 + 0x141e;
    do {
      fVar21 = (fVar27 * *pfVar19) / fVar31;
      if (0.0 <= fVar21) {
        fVar21 = fVar21 + fVar5;
      }
      else {
        fVar21 = fVar21 - fVar5;
      }
      iVar9 = (int)fVar21;
      iVar12 = 0x800;
      if ((iVar9 < 0x801) && (iVar12 = iVar9, iVar9 < 1)) {
        iVar12 = 1;
      }
      *(short *)pfVar7 = (short)iVar12;
      *(undefined2 *)(pfVar7 + 2) = 0;
      iVar12 = memset(pfVar17,0,iVar12 << 2);
      pfVar19 = pfVar19 + 1;
      pfVar7 = (float *)((int)pfVar7 + 2);
      pfVar17 = (float *)(iVar12 + 0x2000);
    } while (pfVar19 != (float *)&DAT_ram_4009b050);
    fVar21 = (fVar26 * DAT_ram_40095450 * fVar27) / fVar31;
    if (0.0 <= fVar21) {
      fVar21 = fVar21 + fVar5;
    }
    else {
      fVar21 = fVar21 - fVar5;
    }
    uVar16 = (int)fVar21 + (uint)(((int)fVar21 & 1U) == 0);
    if ((int)uVar16 < 1) {
      uVar16 = 1;
    }
    param_1[0xe323] = (float)(int)uVar16;
    if ((uVar16 & 0xffff) == 0) {
      uVar16 = 1;
    }
    fVar21 = (fVar26 * DAT_ram_40094ed8 * fVar27) / fVar31;
    if (0.0 <= fVar21) {
      fVar21 = fVar21 + fVar5;
    }
    else {
      fVar21 = fVar21 - fVar5;
    }
    uVar8 = (int)fVar21 + (uint)(((int)fVar21 & 1U) == 0);
    if ((int)uVar8 < 1) {
      uVar8 = 1;
    }
    param_1[0xe324] = (float)(int)uVar8;
    if ((uVar8 & 0xffff) < (uVar16 & 0xffff)) {
      uVar8 = uVar16 & 0xffff;
    }
    fVar21 = (fVar26 * DAT_ram_4009af00 * fVar27) / fVar31;
    if (0.0 <= fVar21) {
      fVar21 = fVar21 + fVar5;
    }
    else {
      fVar21 = fVar21 - fVar5;
    }
    uVar16 = (int)fVar21 + (uint)(((int)fVar21 & 1U) == 0);
    if ((int)uVar16 < 1) {
      uVar16 = 1;
    }
    param_1[0xe325] = (float)(int)uVar16;
    if ((uVar16 & 0xffff) < (uVar8 & 0xffff)) {
      uVar16 = uVar8 & 0xffff;
    }
    fVar21 = (fVar26 * DAT_ram_4009af04 * fVar27) / fVar31;
    if (0.0 <= fVar21) {
      fVar21 = fVar21 + fVar5;
    }
    else {
      fVar21 = fVar21 - fVar5;
    }
    uVar8 = (int)fVar21 + (uint)(((int)fVar21 & 1U) == 0);
    if ((int)uVar8 < 1) {
      uVar8 = 1;
    }
    param_1[0xe326] = (float)(int)uVar8;
    if ((uVar8 & 0xffff) < (uVar16 & 0xffff)) {
      uVar8 = uVar16 & 0xffff;
    }
    fVar21 = (fVar26 * DAT_ram_4009af08 * fVar27) / fVar31;
    if (0.0 <= fVar21) {
      fVar21 = fVar21 + fVar5;
    }
    else {
      fVar21 = fVar21 - fVar5;
    }
    uVar16 = (int)fVar21 + (uint)(((int)fVar21 & 1U) == 0);
    if ((int)uVar16 < 1) {
      uVar16 = 1;
    }
    param_1[0xe327] = (float)(int)uVar16;
    if ((uVar16 & 0xffff) < (uVar8 & 0xffff)) {
      uVar16 = uVar8 & 0xffff;
    }
    fVar21 = (fVar26 * DAT_ram_400952d4 * fVar27) / fVar31;
    if (0.0 <= fVar21) {
      fVar21 = fVar21 + fVar5;
    }
    else {
      fVar21 = fVar21 - fVar5;
    }
    uVar8 = (int)fVar21 + (uint)(((int)fVar21 & 1U) == 0);
    if ((int)uVar8 < 1) {
      uVar8 = 1;
    }
    param_1[0xe328] = (float)(int)uVar8;
    if ((uVar8 & 0xffff) < (uVar16 & 0xffff)) {
      uVar8 = uVar16 & 0xffff;
    }
    fVar21 = (fVar26 * DAT_ram_4009af0c * fVar27) / fVar31;
    if (0.0 <= fVar21) {
      fVar21 = fVar21 + fVar5;
    }
    else {
      fVar21 = fVar21 - fVar5;
    }
    uVar16 = (int)fVar21 + (uint)(((int)fVar21 & 1U) == 0);
    if ((int)uVar16 < 1) {
      uVar16 = 1;
    }
    param_1[0xe329] = (float)(int)uVar16;
    if ((uVar16 & 0xffff) < (uVar8 & 0xffff)) {
      uVar16 = uVar8 & 0xffff;
    }
    fVar26 = (fVar26 * DAT_ram_4009604c * fVar27) / fVar31;
    if (0.0 <= fVar26) {
      fVar26 = fVar26 + fVar5;
    }
    else {
      fVar26 = fVar26 - fVar5;
    }
    uVar8 = (int)fVar26 + (uint)(((int)fVar26 & 1U) == 0);
    if ((int)uVar8 < 1) {
      uVar8 = 1;
    }
    param_1[0xe32a] = (float)(int)uVar8;
    if ((uVar8 & 0xffff) < (uVar16 & 0xffff)) {
      uVar8 = uVar16 & 0xffff;
    }
    uVar8 = uVar8 + 0x40;
    if ((uVar8 & 0xffff) == 0) {
      uVar8 = 1;
    }
    uVar15 = (short)uVar8;
    if (0x15e0 < (uVar8 & 0xffff)) {
      uVar15 = 0x15e0;
    }
    *(undefined2 *)(param_1 + 0xe322) = uVar15;
    memset(param_1 + 0xe333,0,0x20);
    fVar22 = DAT_ram_4009b028;
    fVar20 = DAT_ram_40099f90;
    fVar21 = DAT_ram_40094ee8;
    uVar8 = (int)param_1[8] * 0x19660d + 0x3c6ef35f;
    uVar16 = uVar8 * 0x19660d + 0x3c6ef35f;
    uVar10 = uVar16 * 0x19660d + 0x3c6ef35f;
    fVar26 = (float)(uVar16 >> 8) * DAT_ram_40099f90;
    param_1[0xe34b] = (float)(uVar8 >> 8) * DAT_ram_40099f90 * DAT_ram_40094ee8 + DAT_ram_4009b028;
    uVar16 = uVar10 * 0x19660d + 0x3c6ef35f;
    param_1[0xe33b] = fVar26 * fVar24;
    uVar11 = uVar16 * 0x19660d + 0x3c6ef35f;
    param_1[0xe34c] = (float)(uVar10 >> 8) * fVar20 * fVar21 + fVar22;
    uVar8 = uVar11 * 0x19660d + 0x3c6ef35f;
    param_1[0xe33c] = (float)(uVar16 >> 8) * fVar20 * fVar24;
    uVar10 = uVar8 * 0x19660d + 0x3c6ef35f;
    param_1[0xe34d] = (float)(uVar11 >> 8) * fVar20 * fVar21 + fVar22;
    uVar16 = uVar10 * 0x19660d + 0x3c6ef35f;
    param_1[0xe33d] = (float)(uVar8 >> 8) * fVar20 * fVar24;
    uVar11 = uVar16 * 0x19660d + 0x3c6ef35f;
    param_1[0xe34e] = (float)(uVar10 >> 8) * fVar20 * fVar21 + fVar22;
    uVar8 = uVar11 * 0x19660d + 0x3c6ef35f;
    param_1[0xe33e] = (float)(uVar16 >> 8) * fVar20 * fVar24;
    uVar10 = uVar8 * 0x19660d + 0x3c6ef35f;
    param_1[0xe34f] = (float)(uVar11 >> 8) * fVar20 * fVar21 + fVar22;
    uVar16 = uVar10 * 0x19660d + 0x3c6ef35f;
    param_1[0xe33f] = (float)(uVar8 >> 8) * fVar20 * fVar24;
    uVar11 = uVar16 * 0x19660d + 0x3c6ef35f;
    param_1[0xe350] = (float)(uVar10 >> 8) * fVar20 * fVar21 + fVar22;
    uVar8 = uVar11 * 0x19660d + 0x3c6ef35f;
    param_1[0xe340] = (float)(uVar16 >> 8) * fVar20 * fVar24;
    uVar16 = uVar8 * 0x19660d + 0x3c6ef35f;
    param_1[0xe351] = (float)(uVar11 >> 8) * fVar20 * fVar21 + fVar22;
    fVar26 = (float)(uVar16 * 0x19660d + 0x3c6ef35f);
    param_1[0xe341] = (float)(uVar8 >> 8) * fVar20 * fVar24;
    param_1[0xe352] = (float)(uVar16 >> 8) * fVar20 * fVar21 + fVar22;
    param_1[0xe342] = (float)((uint)fVar26 >> 8) * fVar20 * fVar24;
    param_1[0x1260a] = fVar26;
    *(undefined1 *)((int)param_1 + 0x45) = 0;
    param_1[0x13] = 0.0;
    param_1[0x14] = 0.0;
    param_1[0x16] = 0.0;
    if (*(ushort *)(param_1 + 0x817) != 0) {
      memset(param_1 + 0x17,0,(uint)*(ushort *)(param_1 + 0x817) << 2);
    }
    *(undefined2 *)(param_1 + 0x819) = 0;
    if (*(ushort *)((int)param_1 + 0x205e) != 0) {
      memset(param_1 + 0x217,0,(uint)*(ushort *)((int)param_1 + 0x205e) << 2);
    }
    *(undefined2 *)((int)param_1 + 0x2066) = 0;
    if (*(ushort *)(param_1 + 0x818) != 0) {
      memset(param_1 + 0x417,0,(uint)*(ushort *)(param_1 + 0x818) << 2);
    }
    *(undefined2 *)(param_1 + 0x81a) = 0;
    if (*(ushort *)((int)param_1 + 0x2062) != 0) {
      memset(param_1 + 0x617,0,(uint)*(ushort *)((int)param_1 + 0x2062) << 2);
    }
    *(undefined2 *)((int)param_1 + 0x206a) = 0;
    if (*(ushort *)(param_1 + 0x141b) != 0) {
      memset(param_1 + 0x81b,0,(uint)*(ushort *)(param_1 + 0x141b) << 2);
    }
    *(undefined2 *)((int)param_1 + 0x5072) = 0;
    if (*(ushort *)((int)param_1 + 0x506e) != 0) {
      memset(param_1 + 0xc1b,0,(uint)*(ushort *)((int)param_1 + 0x506e) << 2);
    }
    *(undefined2 *)(param_1 + 0x141d) = 0;
    if (*(ushort *)(param_1 + 0x141c) != 0) {
      memset(param_1 + 0x101b,0,(uint)*(ushort *)(param_1 + 0x141c) << 2);
    }
    *(undefined2 *)((int)param_1 + 0x5076) = 0;
    if (*(ushort *)(param_1 + 0x341e) != 0) {
      memset(param_1 + 0x141e,0,(uint)*(ushort *)(param_1 + 0x341e) << 2);
    }
    *(undefined2 *)(param_1 + 0x3420) = 0;
    if (*(ushort *)((int)param_1 + 0xd07a) != 0) {
      memset(param_1 + 0x1c1e,0,(uint)*(ushort *)((int)param_1 + 0xd07a) << 2);
    }
    *(undefined2 *)((int)param_1 + 0xd082) = 0;
    if (*(ushort *)(param_1 + 0x341f) != 0) {
      memset(param_1 + 0x241e,0,(uint)*(ushort *)(param_1 + 0x341f) << 2);
    }
    *(undefined2 *)(param_1 + 0x3421) = 0;
    if (*(ushort *)((int)param_1 + 0xd07e) != 0) {
      memset(param_1 + 0x2c1e,0,(uint)*(ushort *)((int)param_1 + 0xd07e) << 2);
    }
    *(undefined2 *)((int)param_1 + 0xd086) = 0;
    if (*(ushort *)(param_1 + 0xe322) == 0) {
      param_1[0xe333] = 0.0;
      iVar12 = 1;
LAB_ram_40082cf6:
      memset(param_1 + iVar12 + 0xe333,0,(8 - iVar12) * 4);
    }
    else {
      memset(param_1 + 0x3422,0,(uint)*(ushort *)(param_1 + 0xe322) << 2);
      param_1[0xe333] = 0.0;
      if (*(ushort *)(param_1 + 0xe322) == 0) {
        param_1[0xe334] = 0.0;
        iVar12 = 2;
        goto LAB_ram_40082cf6;
      }
      memset(param_1 + 0x4a02,0,(uint)*(ushort *)(param_1 + 0xe322) << 2);
      param_1[0xe334] = 0.0;
      if (*(ushort *)(param_1 + 0xe322) == 0) {
        param_1[0xe335] = 0.0;
        iVar12 = 3;
        goto LAB_ram_40082cf6;
      }
      memset(param_1 + 0x5fe2,0,(uint)*(ushort *)(param_1 + 0xe322) << 2);
      param_1[0xe335] = 0.0;
      if (*(ushort *)(param_1 + 0xe322) == 0) {
        param_1[0xe336] = 0.0;
        iVar12 = 4;
        goto LAB_ram_40082cf6;
      }
      memset(param_1 + 0x75c2,0,(uint)*(ushort *)(param_1 + 0xe322) << 2);
      param_1[0xe336] = 0.0;
      if (*(ushort *)(param_1 + 0xe322) == 0) {
        param_1[0xe337] = 0.0;
        iVar12 = 5;
        goto LAB_ram_40082cf6;
      }
      memset(param_1 + 0x8ba2,0,(uint)*(ushort *)(param_1 + 0xe322) << 2);
      param_1[0xe337] = 0.0;
      if (*(ushort *)(param_1 + 0xe322) == 0) {
        param_1[0xe338] = 0.0;
        iVar12 = 6;
        goto LAB_ram_40082cf6;
      }
      memset(param_1 + 0xa182,0,(uint)*(ushort *)(param_1 + 0xe322) << 2);
      param_1[0xe338] = 0.0;
      if (*(ushort *)(param_1 + 0xe322) == 0) {
        param_1[0xe339] = 0.0;
        iVar12 = 7;
        goto LAB_ram_40082cf6;
      }
      memset(param_1 + 0xb762,0,(uint)*(ushort *)(param_1 + 0xe322) << 2);
      param_1[0xe339] = 0.0;
      if (*(ushort *)(param_1 + 0xe322) != 0) {
        memset(param_1 + 0xcd42,0,(uint)*(ushort *)(param_1 + 0xe322) << 2);
      }
      param_1[0xe33a] = 0.0;
    }
    *(undefined2 *)((int)param_1 + 0x38c8a) = 0;
    memset(param_1 + 0xe379,0,24000);
    *(undefined2 *)(param_1 + 0xfae9) = 0;
    if (*(ushort *)(param_1 + 0x121fa) == 0) {
      memset(param_1 + 0xfaea,0,40000);
    }
    else {
      memset(param_1 + 0xfaea,0,(uint)*(ushort *)(param_1 + 0x121fa) << 2);
    }
    *(undefined2 *)((int)param_1 + 0x487ea) = 0;
    param_1[0x121fc] = 0.0;
    param_1[0x12202] = 0.0;
    param_1[0x12203] = 0.0;
    param_1[0x12205] = 0.0;
    param_1[0x12207] = 0.0;
    param_1[0x12208] = 0.0;
    *(undefined2 *)((int)param_1 + 0x38dce) = 0;
  }
  fVar21 = (float)FUN_ram_40000844(DAT_ram_40094ee0,param_1[1] * DAT_ram_4009af50);
  fVar26 = DAT_ram_40094658;
  fVar24 = param_1[3];
  if (fVar24 < 0.0) {
    fVar24 = 0.0;
LAB_ram_40081b38:
    fVar20 = param_1[4];
    if (0.0 <= fVar20) goto LAB_ram_40081b48;
LAB_ram_40081ef6:
    fVar20 = 0.0;
  }
  else {
    if (fVar24 <= fVar28) goto LAB_ram_40081b38;
    fVar20 = param_1[4];
    fVar24 = fVar28;
    if (fVar20 < 0.0) goto LAB_ram_40081ef6;
LAB_ram_40081b48:
    if (DAT_ram_40094658 < fVar20) {
      fVar22 = param_1[5];
      cVar2 = *(char *)(param_1 + 9);
      fVar20 = DAT_ram_40094658;
      goto joined_r0x40081b6c;
    }
  }
  fVar22 = param_1[5];
  cVar2 = *(char *)(param_1 + 9);
joined_r0x40081b6c:
  fVar23 = DAT_ram_4009aef8;
  if ((DAT_ram_400952a4 <= fVar22) && (fVar23 = DAT_ram_4009aef4, fVar22 <= DAT_ram_40094e90)) {
    fVar22 = (float)FUN_ram_40000d44(DAT_ram_40094e90,-fVar22 / DAT_ram_40094e9c);
    fVar22 = fVar22 * DAT_ram_40094ec8;
    fVar23 = DAT_ram_4009aef4;
    if (((float)DAT_ram_40096074 <= fVar22) &&
       (fVar23 = DAT_ram_4009aefc, fVar22 <= DAT_ram_4009af54)) {
      fVar23 = fVar22 * DAT_ram_40099fac;
    }
  }
  fVar6 = DAT_ram_4009a10c;
  fVar32 = DAT_ram_40099fac;
  fVar22 = fVar24 * DAT_ram_4009af58 + DAT_ram_400952dc;
  fVar4 = fVar27 * DAT_ram_4009a10c;
  fVar25 = DAT_ram_400952a8;
  if ((DAT_ram_400952a8 <= fVar22) && (fVar25 = fVar22, fVar4 < fVar22)) {
    fVar25 = fVar4;
  }
  fVar24 = fVar24 * DAT_ram_4009af5c + DAT_ram_4009af60;
  fVar22 = DAT_ram_400952ac;
  if ((DAT_ram_400952ac <= fVar24) && (fVar22 = fVar24, fVar4 < fVar24)) {
    fVar22 = fVar4;
  }
  fVar24 = (float)FUN_ram_40000bd8(fVar23 / fVar27);
  param_1[0x12] = fVar24;
  fVar24 = (float)FUN_ram_40000bd8((fVar25 * fVar32) / fVar27);
  param_1[0x15] = fVar24;
  fVar25 = (float)FUN_ram_40000bd8((fVar22 * fVar32) / fVar27);
  fVar23 = DAT_ram_4009af64;
  fVar22 = DAT_ram_4009a110;
  fVar24 = DAT_ram_40094ec4;
  param_1[0xe374] = fVar25;
  fVar24 = (fVar20 / fVar26) * fVar22 + fVar24;
  param_1[0xe375] = (fVar20 / fVar26) * fVar23;
  fVar22 = DAT_ram_40099fa8;
  fVar20 = DAT_ram_40094e90;
  fVar26 = DAT_ram_40094604;
  if (cVar2 == '\0') {
    pfVar17 = param_1 + 0xe323;
    do {
      pfVar7 = pfVar17 + 1;
      uVar29 = FUN_ram_40000d44(fVar20,((float)*(undefined8 *)pfVar17 * fVar22) / (fVar27 * fVar21))
      ;
      *(undefined8 *)(pfVar17 + 8) = uVar29;
      pfVar17 = pfVar7;
    } while (param_1 + 0xe32b != pfVar7);
  }
  else {
    param_1[0xe32b] = DAT_ram_40094604;
    param_1[0xe32c] = fVar26;
    param_1[0xe32d] = fVar26;
    param_1[0xe32e] = fVar26;
    param_1[0xe32f] = fVar26;
    param_1[0xe330] = fVar26;
    param_1[0xe331] = fVar26;
    param_1[0xe332] = fVar26;
  }
  fVar26 = DAT_ram_40099f94;
  cVar3 = *(char *)(param_1 + 0xe373);
  if ((fVar24 <= 0.0) || (param_1[0xe375] <= 0.0)) {
    memset(param_1 + 0xe343,0,0x20);
    memset(param_1 + 0xe353,0,0x20);
    fVar24 = DAT_ram_40094604;
    param_1[0xe35b] = DAT_ram_40094604;
    param_1[0xe35c] = fVar24;
    param_1[0xe35d] = fVar24;
    param_1[0xe35e] = fVar24;
    param_1[0xe35f] = fVar24;
    param_1[0xe360] = fVar24;
    param_1[0xe361] = fVar24;
    param_1[0xe362] = fVar24;
    memset(param_1 + 0xe363,0,0x20);
    cVar13 = '\0';
    param_1[0xe36b] = fVar24;
    param_1[0xe36c] = fVar24;
    param_1[0xe36d] = fVar24;
    param_1[0xe36e] = fVar24;
    param_1[0xe36f] = fVar24;
    param_1[0xe370] = fVar24;
    param_1[0xe371] = fVar24;
    param_1[0xe372] = fVar24;
    *(undefined1 *)(param_1 + 0xe373) = 0;
  }
  else {
    fVar20 = *param_1;
    fVar21 = ((param_1[0xe34b] + fVar28) * fVar24 * DAT_ram_40099f94) / fVar20;
    param_1[0xe343] = fVar21;
    if ((cVar1 == '\0') && (cVar3 != '\0')) {
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe363] = fVar22;
      fVar21 = (float)FUN_ram_40000712(fVar21);
      param_1[0xe36b] = fVar21;
      fVar21 = ((param_1[0xe34c] + fVar28) * fVar24 * fVar26) / fVar20;
      param_1[0xe344] = fVar21;
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe364] = fVar22;
      fVar21 = (float)FUN_ram_40000712(fVar21);
      param_1[0xe36c] = fVar21;
      fVar21 = ((param_1[0xe34d] + fVar28) * fVar24 * fVar26) / fVar20;
      param_1[0xe345] = fVar21;
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe365] = fVar22;
      fVar21 = (float)FUN_ram_40000712(fVar21);
      param_1[0xe36d] = fVar21;
      fVar21 = ((param_1[0xe34e] + fVar28) * fVar24 * fVar26) / fVar20;
      param_1[0xe346] = fVar21;
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe366] = fVar22;
      fVar21 = (float)FUN_ram_40000712(fVar21);
      param_1[0xe36e] = fVar21;
      fVar21 = ((param_1[0xe34f] + fVar28) * fVar24 * fVar26) / fVar20;
      param_1[0xe347] = fVar21;
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe367] = fVar22;
      fVar21 = (float)FUN_ram_40000712(fVar21);
      param_1[0xe36f] = fVar21;
      fVar21 = ((param_1[0xe350] + fVar28) * fVar24 * fVar26) / fVar20;
      param_1[0xe348] = fVar21;
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe368] = fVar22;
      fVar21 = (float)FUN_ram_40000712(fVar21);
      param_1[0xe370] = fVar21;
      fVar21 = ((param_1[0xe351] + fVar28) * fVar24 * fVar26) / fVar20;
      param_1[0xe349] = fVar21;
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe369] = fVar22;
      fVar21 = (float)FUN_ram_40000712(fVar21);
      param_1[0xe371] = fVar21;
      fVar20 = ((param_1[0xe352] + fVar28) * fVar24 * fVar26) / fVar20;
      param_1[0xe34a] = fVar20;
      fVar24 = (float)FUN_ram_400009d2(fVar20);
      param_1[0xe36a] = fVar24;
      fVar24 = (float)FUN_ram_40000712(fVar20);
      param_1[0xe372] = fVar24;
    }
    else {
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe363] = fVar22;
      fVar22 = (float)FUN_ram_40000712(fVar21);
      fVar21 = param_1[0xe33b];
      param_1[0xe36b] = fVar22;
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe353] = fVar22;
      fVar21 = (float)FUN_ram_40000712(fVar21);
      param_1[0xe35b] = fVar21;
      fVar21 = ((param_1[0xe34c] + fVar28) * fVar24 * fVar26) / fVar20;
      param_1[0xe344] = fVar21;
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe364] = fVar22;
      fVar22 = (float)FUN_ram_40000712(fVar21);
      fVar21 = param_1[0xe33c];
      param_1[0xe36c] = fVar22;
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe354] = fVar22;
      fVar21 = (float)FUN_ram_40000712(fVar21);
      param_1[0xe35c] = fVar21;
      fVar21 = ((param_1[0xe34d] + fVar28) * fVar24 * fVar26) / fVar20;
      param_1[0xe345] = fVar21;
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe365] = fVar22;
      fVar22 = (float)FUN_ram_40000712(fVar21);
      fVar21 = param_1[0xe33d];
      param_1[0xe36d] = fVar22;
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe355] = fVar22;
      fVar21 = (float)FUN_ram_40000712(fVar21);
      param_1[0xe35d] = fVar21;
      fVar21 = ((param_1[0xe34e] + fVar28) * fVar24 * fVar26) / fVar20;
      param_1[0xe346] = fVar21;
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe366] = fVar22;
      fVar22 = (float)FUN_ram_40000712(fVar21);
      fVar21 = param_1[0xe33e];
      param_1[0xe36e] = fVar22;
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe356] = fVar22;
      fVar21 = (float)FUN_ram_40000712(fVar21);
      param_1[0xe35e] = fVar21;
      fVar21 = ((param_1[0xe34f] + fVar28) * fVar24 * fVar26) / fVar20;
      param_1[0xe347] = fVar21;
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe367] = fVar22;
      fVar22 = (float)FUN_ram_40000712(fVar21);
      fVar21 = param_1[0xe33f];
      param_1[0xe36f] = fVar22;
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe357] = fVar22;
      fVar21 = (float)FUN_ram_40000712(fVar21);
      param_1[0xe35f] = fVar21;
      fVar21 = ((param_1[0xe350] + fVar28) * fVar24 * fVar26) / fVar20;
      param_1[0xe348] = fVar21;
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe368] = fVar22;
      fVar22 = (float)FUN_ram_40000712(fVar21);
      fVar21 = param_1[0xe340];
      param_1[0xe370] = fVar22;
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe358] = fVar22;
      fVar21 = (float)FUN_ram_40000712(fVar21);
      param_1[0xe360] = fVar21;
      fVar21 = ((param_1[0xe351] + fVar28) * fVar24 * fVar26) / fVar20;
      param_1[0xe349] = fVar21;
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe369] = fVar22;
      fVar22 = (float)FUN_ram_40000712(fVar21);
      fVar21 = param_1[0xe341];
      param_1[0xe371] = fVar22;
      fVar22 = (float)FUN_ram_400009d2(fVar21);
      param_1[0xe359] = fVar22;
      fVar21 = (float)FUN_ram_40000712(fVar21);
      param_1[0xe361] = fVar21;
      fVar20 = ((param_1[0xe352] + fVar28) * fVar24 * fVar26) / fVar20;
      param_1[0xe34a] = fVar20;
      fVar24 = (float)FUN_ram_400009d2(fVar20);
      param_1[0xe36a] = fVar24;
      fVar26 = (float)FUN_ram_40000712(fVar20);
      fVar24 = param_1[0xe342];
      param_1[0xe372] = fVar26;
      fVar26 = (float)FUN_ram_400009d2(fVar24);
      param_1[0xe35a] = fVar26;
      fVar24 = (float)FUN_ram_40000712(fVar24);
      param_1[0xe362] = fVar24;
    }
    *(undefined1 *)(param_1 + 0xe373) = 1;
    cVar13 = '\x01';
  }
  if ((cVar1 != '\0') || (cVar13 != cVar3)) {
    *(undefined2 *)((int)param_1 + 0x38dce) = 0;
  }
  if (cVar2 != '\0') {
    param_1[0xe374] = 0.0;
  }
  fVar24 = param_1[2];
  if (fVar24 < 0.0) {
    fVar24 = 0.0;
  }
  else if (DAT_ram_400952c8 < fVar24) {
    fVar24 = DAT_ram_400952c8;
  }
  fVar24 = (fVar27 * fVar24) / fVar31;
  if (0.0 <= fVar24) {
    fVar24 = fVar24 + fVar5;
  }
  else {
    fVar24 = fVar24 - fVar5;
  }
  iVar12 = (int)fVar24;
  fVar24 = param_1[7];
  uVar14 = (short)~(ushort)((uint)iVar12 >> 0x10) >> 0xf & (ushort)iVar12;
  if (6000 < iVar12) {
    uVar14 = 6000;
  }
  *(ushort *)((int)param_1 + 0x3eba6) = uVar14;
  if (fVar24 < 0.0) {
    fVar24 = 0.0;
  }
  else if (fVar28 < fVar24) {
    fVar24 = fVar28;
  }
  fVar26 = param_1[0xc];
  param_1[0xe376] = fVar24;
  if (fVar26 < 0.0) {
    fVar24 = param_1[0xb];
    param_1[0xe377] = 0.0;
  }
  else {
    if (DAT_ram_40094e90 < fVar26) {
      fVar26 = DAT_ram_40094e90;
    }
    fVar24 = param_1[0xb];
    param_1[0xe377] = fVar26;
  }
  if (0.0 <= fVar24) {
    if (fVar28 < fVar24) {
      fVar24 = fVar28;
    }
  }
  else {
    fVar24 = 0.0;
  }
  fVar26 = param_1[0xd];
  param_1[0xe378] = fVar24;
  fVar24 = fVar32;
  if (fVar28 <= fVar26) {
    if (fVar4 < fVar26) {
      fVar24 = fVar4 * fVar32;
    }
    else {
      fVar24 = fVar26 * fVar32;
    }
  }
  fVar24 = (float)FUN_ram_40000bd8(fVar24 / fVar27);
  param_1[0x12201] = fVar24;
  fVar24 = param_1[0xe];
  fVar26 = fVar32;
  if (fVar28 <= fVar24) {
    if (fVar4 < fVar24) {
      fVar26 = fVar4 * fVar32;
    }
    else {
      fVar26 = fVar24 * fVar32;
    }
  }
  fVar24 = (float)FUN_ram_40000bd8(fVar26 / fVar27);
  param_1[0x12204] = fVar24;
  fVar24 = param_1[0xf];
  if (fVar28 <= fVar24) {
    if (fVar4 < fVar24) {
      fVar32 = fVar4 * fVar32;
    }
    else {
      fVar32 = fVar24 * fVar32;
    }
  }
  fVar27 = (float)FUN_ram_40000bd8(fVar32 / fVar27);
  param_1[0x12206] = fVar27;
  if (*(char *)((int)param_1 + 0x25) == '\0') {
    *(undefined1 *)(param_1 + 0x12200) = 0;
  }
  else {
    fVar27 = param_1[10];
    puVar30 = DAT_ram_4009461c;
    if ((DAT_ram_400952d0 <= fVar27) &&
       (puVar30 = PTR_entry_ram_40094618, fVar27 <= DAT_ram_400952cc)) {
      puVar30 = (undefined *)(fVar27 / DAT_ram_40095280);
    }
    fVar27 = (float)FUN_ram_40000d44(PTR_entry_ram_40094618,puVar30);
    fVar24 = (float)FUN_ram_40000844(0,param_1[0x10]);
    if ((((cVar1 != '\0') || (*(char *)(param_1 + 0x12200) == '\0')) ||
        (DAT_ram_40094620 < ABS(fVar27 - param_1[0x121fe]))) ||
       (DAT_ram_40099fa4 < ABS(fVar24 - param_1[0x121ff]))) {
      param_1[0x121fe] = fVar27;
      param_1[0x121ff] = fVar24;
      fVar31 = (fVar24 * *param_1) / fVar31;
      if (0.0 <= fVar31) {
        fVar31 = fVar31 + fVar5;
      }
      else {
        fVar31 = fVar31 - fVar5;
      }
      uVar16 = (int)fVar31;
      if (0x270c < (int)fVar31) {
        uVar16 = 0x270c;
      }
      if ((int)uVar16 < 0x40) {
        uVar16 = 0x40;
      }
      uVar8 = (uVar16 & 0xffff) + 4;
      *(short *)(param_1 + 0x121fb) = (short)uVar16;
      *(short *)(param_1 + 0x121fa) = (short)(uVar8 * 0x10000 >> 0x10);
      memset(param_1 + 0xfaea,0,(uVar8 & 0xffff) << 2);
      *(undefined2 *)((int)param_1 + 0x487ea) = 0;
      param_1[0x121fc] = 0.0;
      fVar31 = 0.0;
      if (((*(ushort *)(param_1 + 0x121fb) == 0) ||
          (fVar27 = (fVar27 - fVar28) / (float)*(ushort *)(param_1 + 0x121fb),
          fVar31 = DAT_ram_4009a158, fVar27 < DAT_ram_4009a158)) ||
         (fVar31 = fVar27, fVar27 <= fVar6)) {
        param_1[0x121fd] = fVar31;
        *(undefined1 *)(param_1 + 0x12200) = 1;
      }
      else {
        param_1[0x121fd] = fVar6;
        *(undefined1 *)(param_1 + 0x12200) = 1;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  return;
}


