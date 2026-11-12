/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4007b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4007b780.
 * REA evidence: ev_5ac0a77efc797dca8c334af40cf5a5beee7ed511bbb469b7d3084ef5e671af41
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007b780(uint param_1,ulonglong *param_2)

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
    memset(param_2,0,0x478c0);
    uVar7 = DAT_ram_400989dc;
    uVar6 = DAT_ram_40098930;
    uVar5 = DAT_ram_40098264;
    uVar4 = DAT_ram_400980bc;
    uVar3 = DAT_ram_4009424c;
    uVar2 = DAT_ram_400934d8;
    uVar1 = DAT_ram_4009309c;
    uVar13 = (ulonglong)DAT_ram_4009281c;
    uVar8 = (ulonglong)DAT_ram_400989d8;
    uVar9 = (ulonglong)DAT_ram_400941ec;
    uVar10 = (ulonglong)DAT_ram_40098fc0;
    uVar11 = (ulonglong)DAT_ram_4009287c;
    uVar12 = (ulonglong)DAT_ram_4009891c;
    *param_2 = (ulonglong)param_1;
    *(undefined **)(param_2 + 0xb) = &sedeleg;
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
    *(ulonglong *)((int)param_2 + 0x5c) = uVar13;
    FUN_ram_40079e68(param_2);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4007b850.
 * REA evidence: ev_8854a078333b373551b71daffe2fa9828310380a09d1592bce5ff9d029dc4a69
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_4007b850(int param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  
  if (param_1 != 0) {
    memset((void *)(param_1 + 0x34b4),0,0x9604);
    *(undefined2 *)(param_1 + 0x32a8) = 0;
    *(undefined2 *)(param_1 + 0x32ac) = *(undefined2 *)(param_1 + 0x32aa);
    *(undefined2 *)(param_1 + 0x32ae) = 0;
    *(undefined2 *)(param_1 + 0x32b0) = 0;
    if (*(ushort *)(param_1 + 0xcab8) == 0) {
      uVar1 = *(ushort *)(param_1 + 0xcaba);
      *(undefined2 *)(param_1 + 0xcac0) = 0;
    }
    else {
      memset((void *)(param_1 + 0xcad8),0,(uint)*(ushort *)(param_1 + 0xcab8) << 2);
      uVar1 = *(ushort *)(param_1 + 0xcaba);
      *(undefined2 *)(param_1 + 0xcac0) = 0;
    }
    if (uVar1 == 0) {
      uVar1 = *(ushort *)(param_1 + 0xcabc);
      *(undefined2 *)(param_1 + 0xcac2) = 0;
    }
    else {
      memset((void *)(param_1 + 0xd758),0,(uint)uVar1 << 2);
      uVar1 = *(ushort *)(param_1 + 0xcabc);
      *(undefined2 *)(param_1 + 0xcac2) = 0;
    }
    if (uVar1 == 0) {
      uVar1 = *(ushort *)(param_1 + 0xcabe);
      *(undefined2 *)(param_1 + 0xcac4) = 0;
    }
    else {
      memset((void *)(param_1 + 0xe3d8),0,(uint)uVar1 << 2);
      uVar1 = *(ushort *)(param_1 + 0xcabe);
      *(undefined2 *)(param_1 + 0xcac4) = 0;
    }
    if (uVar1 == 0) {
      *(undefined2 *)(param_1 + 0xcac6) = 0;
      uVar1 = *(ushort *)(param_1 + 0xfcd8);
    }
    else {
      memset((void *)(param_1 + 0xf058),0,(uint)uVar1 << 2);
      *(undefined2 *)(param_1 + 0xcac6) = 0;
      uVar1 = *(ushort *)(param_1 + 0xfcd8);
    }
    if (uVar1 == 0) {
      uVar1 = *(ushort *)(param_1 + 0xfcda);
      *(undefined2 *)(param_1 + 0xfce0) = 0;
    }
    else {
      memset((void *)(param_1 + 0xfcf8),0,(uint)uVar1 << 2);
      uVar1 = *(ushort *)(param_1 + 0xfcda);
      *(undefined2 *)(param_1 + 0xfce0) = 0;
    }
    if (uVar1 == 0) {
      uVar1 = *(ushort *)(param_1 + 0xfcdc);
      *(undefined2 *)(param_1 + 0xfce2) = 0;
    }
    else {
      memset((void *)(param_1 + 0x10978),0,(uint)uVar1 << 2);
      uVar1 = *(ushort *)(param_1 + 0xfcdc);
      *(undefined2 *)(param_1 + 0xfce2) = 0;
    }
    if (uVar1 == 0) {
      uVar1 = *(ushort *)(param_1 + 0xfcde);
      *(undefined2 *)(param_1 + 0xfce4) = 0;
    }
    else {
      memset((void *)(param_1 + 0x115f8),0,(uint)uVar1 << 2);
      uVar1 = *(ushort *)(param_1 + 0xfcde);
      *(undefined2 *)(param_1 + 0xfce4) = 0;
    }
    if (uVar1 != 0) {
      memset((void *)(param_1 + 0x12278),0,(uint)uVar1 << 2);
    }
    *(undefined2 *)(param_1 + 0xfce6) = 0;
    memset((void *)(param_1 + 0x32b4),0,0x200);
    if (*(ushort *)(param_1 + 0x88) != 0) {
      memset((void *)(param_1 + 0xa8),0,(uint)*(ushort *)(param_1 + 0x88) << 2);
    }
    *(undefined2 *)(param_1 + 0x90) = 0;
    if (*(ushort *)(param_1 + 0x8a) != 0) {
      memset((void *)(param_1 + 0xd28),0,(uint)*(ushort *)(param_1 + 0x8a) << 2);
    }
    *(undefined2 *)(param_1 + 0x92) = 0;
    if (*(ushort *)(param_1 + 0x8c) != 0) {
      memset((void *)(param_1 + 0x19a8),0,(uint)*(ushort *)(param_1 + 0x8c) << 2);
    }
    *(undefined2 *)(param_1 + 0x94) = 0;
    if (*(ushort *)(param_1 + 0x8e) != 0) {
      memset((void *)(param_1 + 0x2628),0,(uint)*(ushort *)(param_1 + 0x8e) << 2);
    }
    *(undefined2 *)(param_1 + 0x96) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    pvVar4 = (void *)(param_1 + 0x130a8);
    puVar2 = (undefined4 *)(param_1 + 0x13054);
    do {
      puVar3 = puVar2 + 1;
      pvVar4 = memset(pvVar4,0,0x5000);
      *puVar2 = 0;
      puVar2[8] = 0;
      pvVar4 = (void *)((int)pvVar4 + 0x5000);
      puVar2 = puVar3;
    } while ((undefined4 *)(param_1 + 0x13074) != puVar3);
    *(undefined2 *)(param_1 + 0x12f80) = 0;
    if (*(ushort *)(param_1 + 0x3b0a8) != 0) {
      memset((void *)(param_1 + 0x3b0bc),0,(uint)*(ushort *)(param_1 + 0x3b0a8) << 2);
    }
    *(undefined2 *)(param_1 + 0x3b0b0) = 0;
    if (*(ushort *)(param_1 + 0x3b0aa) != 0) {
      memset((void *)(param_1 + 0x3bd3c),0,(uint)*(ushort *)(param_1 + 0x3b0aa) << 2);
    }
    *(undefined2 *)(param_1 + 0x3b0b2) = 0;
    if (*(ushort *)(param_1 + 0x3b0ac) != 0) {
      memset((void *)(param_1 + 0x3c9bc),0,(uint)*(ushort *)(param_1 + 0x3b0ac) << 2);
    }
    *(undefined2 *)(param_1 + 0x3b0b4) = 0;
    if (*(ushort *)(param_1 + 0x3b0ae) != 0) {
      memset((void *)(param_1 + 0x3d63c),0,(uint)*(ushort *)(param_1 + 0x3b0ae) << 2);
    }
    *(undefined2 *)(param_1 + 0x3b0b6) = 0;
    memset((void *)(param_1 + 0x3e2bc),0,0x9604);
    *(undefined2 *)(param_1 + 0x13094) = 0;
    *(undefined2 *)(param_1 + 0x1309a) = 0;
    *(undefined2 *)(param_1 + 0x13098) = *(undefined2 *)(param_1 + 0x13096);
    *(undefined2 *)(param_1 + 0x1309c) = 0;
    *(undefined2 *)(param_1 + 0x130a0) = 0;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4007bbca.
 * REA evidence: ev_f0c8086954399e620f2360bfe20a5abb2e9c3a907b6c0af23c888aac5a2e47b3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007bbca(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_ram_400008b8(DAT_ram_400930d8,param_1);
    *(undefined1 *)(param_2 + 0x58) = 1;
    *(undefined8 *)(param_2 + 8) = uVar1;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4007bbf6.
 * REA evidence: ev_0dc9aa717d9321e86f1e305852641fa9b728965bf168b9de43f6d6ebb592f129
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007bbf6(float param_1,int param_2)

{
  float fVar1;
  
  if (param_2 != 0) {
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    else if (DAT_ram_4009281c < param_1) {
      param_1 = DAT_ram_4009281c;
    }
    fVar1 = (float)FUN_ram_40000d54(DAT_ram_40098fc4,param_1);
    fVar1 = fVar1 * DAT_ram_400934a4;
    *(undefined1 *)(param_2 + 0x58) = 1;
    *(ulonglong *)(param_2 + 0xc) = (ulonglong)(uint)fVar1;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4007bc52.
 * REA evidence: ev_bb81fe0649420a090cab8a5b577f652162c2085556581a834cbd904ddf3aa41b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007bc52(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_ram_400008b8(0,param_1);
    *(undefined1 *)(param_2 + 0x58) = 1;
    *(undefined8 *)(param_2 + 4) = uVar1;
    *(undefined8 *)(param_2 + 0x34) = uVar1;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4007bc7c.
 * REA evidence: ev_e3d64a59768efbcf85f0c61f042121a985247e4bd714c36ac3e8274bbe0eeddd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007bc7c(undefined4 param_1,undefined4 param_2,int param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar1 = FUN_ram_400008b8(0,param_1);
    *(ulonglong *)(param_3 + 0x30) = uVar1 & 0xffffffff;
    uVar2 = FUN_ram_400008b8(0,param_2);
    *(undefined1 *)(param_3 + 0x58) = 1;
    *(undefined8 *)(param_3 + 0x2c) = uVar2;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4007bcbe.
 * REA evidence: ev_0fc2fdea4c0c64e1569cc1da0e11c3ecdec52d7c7280767279aa6f85cf4ef5a1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007bcbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    if ((float)param_1 < 0.0) {
      *(undefined8 *)(param_2 + 0x5c) = 0;
    }
    else if (DAT_ram_4009281c < (float)param_1) {
      *(ulonglong *)(param_2 + 0x5c) = (ulonglong)(uint)DAT_ram_4009281c;
    }
    else {
      *(undefined8 *)(param_2 + 0x5c) = param_1;
    }
  }
  return;
}


/* NanoCore 1.10, address 0x4007bcec.
 * REA evidence: ev_b56eb3b3d3b7fa07db610105860c4d9161f164bf79250a4ec130e387de10e580
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007bcec(int param_1,int param_2)

{
  if (param_1 != 0) {
    *(bool *)(param_1 + 0x54) = param_2 != 0;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return;
}


/* NanoCore 1.10, address 0x4007bd00.
 * REA evidence: ev_f8a4e676165e11d04bb28427e2e241ae3ddb3aef2f05f333318b0a26ae15538e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007bd00(float *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  char cVar14;
  ushort uVar15;
  undefined2 uVar16;
  uint uVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined *puVar31;
  float fVar32;
  float fVar33;
  
  fVar32 = DAT_ram_40093094;
  fVar28 = *param_1;
  if (*param_1 <= DAT_ram_40093094) {
    fVar28 = DAT_ram_400980e0;
  }
  cVar1 = *(char *)((int)param_1 + 0x45);
  *param_1 = fVar28;
  fVar27 = DAT_ram_4009900c;
  fVar25 = DAT_ram_400980f4;
  fVar5 = DAT_ram_40092864;
  fVar29 = DAT_ram_4009281c;
  if (cVar1 != '\0') {
    param_1[0x12209] = 0.0;
    iVar13 = 1;
    pfVar18 = param_1 + 0x1220a;
    do {
      fVar29 = (float)iVar13;
      iVar13 = iVar13 + 1;
      fVar29 = (float)FUN_ram_40000786(fVar29 * fVar27 * fVar25);
      *pfVar18 = -(fVar29 * fVar5) + fVar5;
      fVar29 = DAT_ram_4009281c;
      pfVar18 = pfVar18 + 1;
    } while (iVar13 != 0x401);
    fVar27 = DAT_ram_400930f0;
    if (*(char *)(param_1 + 6) == '\0') {
      fVar27 = DAT_ram_4009281c;
    }
    fVar22 = fVar28 / DAT_ram_40092878;
    iVar13 = 0;
    pfVar18 = param_1 + 0x17;
    do {
      fVar21 = (float)(int)(&DAT_ram_40099018)[iVar13] * fVar22 * fVar27;
      if (0.0 <= fVar21) {
        iVar10 = (int)(fVar21 + fVar5);
        if (0x200 < iVar10) goto LAB_ram_4007d0a0;
LAB_ram_4007c86c:
        if (iVar10 < 1) {
          iVar10 = 1;
        }
      }
      else {
        iVar10 = (int)(fVar21 - fVar5);
        if (iVar10 < 0x201) goto LAB_ram_4007c86c;
LAB_ram_4007d0a0:
        iVar10 = 0x200;
      }
      *(short *)((int)param_1 + iVar13 * 2 + 0x205c) = (short)iVar10;
      *(undefined2 *)((int)param_1 + iVar13 * 2 + 0x2064) = 0;
      pvVar8 = memset(pfVar18,0,iVar10 << 2);
      iVar13 = iVar13 + 1;
      pfVar18 = (float *)((int)pvVar8 + 0x800);
    } while (iVar13 != 4);
    pfVar20 = (float *)&DAT_ram_40099038;
    pfVar18 = param_1 + 0x141b;
    pfVar7 = param_1 + 0x81b;
    do {
      fVar22 = (fVar28 * *pfVar20) / fVar32;
      if (0.0 <= fVar22) {
        fVar22 = fVar22 + fVar5;
      }
      else {
        fVar22 = fVar22 - fVar5;
      }
      iVar13 = (int)fVar22;
      if (iVar13 < 0x401) {
        if (iVar13 < 1) {
          iVar13 = 1;
        }
      }
      else {
        iVar13 = 0x400;
      }
      *(short *)pfVar18 = (short)iVar13;
      *(undefined2 *)((int)pfVar18 + 6) = 0;
      pfVar19 = pfVar7 + 0x400;
      memset(pfVar7,0,iVar13 << 2);
      pfVar20 = pfVar20 + 1;
      pfVar18 = (float *)((int)pfVar18 + 2);
      pfVar7 = pfVar19;
    } while (param_1 + 0x141b != pfVar19);
    pfVar20 = (float *)&DAT_ram_40099028;
    pfVar7 = param_1 + 0x341e;
    pfVar18 = param_1 + 0x141e;
    do {
      fVar22 = (fVar28 * *pfVar20) / fVar32;
      if (0.0 <= fVar22) {
        fVar22 = fVar22 + fVar5;
      }
      else {
        fVar22 = fVar22 - fVar5;
      }
      iVar10 = (int)fVar22;
      iVar13 = 0x800;
      if ((iVar10 < 0x801) && (iVar13 = iVar10, iVar10 < 1)) {
        iVar13 = 1;
      }
      *(short *)pfVar7 = (short)iVar13;
      *(undefined2 *)(pfVar7 + 2) = 0;
      pvVar8 = memset(pfVar18,0,iVar13 << 2);
      pfVar20 = pfVar20 + 1;
      pfVar7 = (float *)((int)pfVar7 + 2);
      pfVar18 = (float *)((int)pvVar8 + 0x2000);
    } while (pfVar20 != (float *)&DAT_ram_40099038);
    fVar22 = (fVar27 * DAT_ram_40093664 * fVar28) / fVar32;
    if (0.0 <= fVar22) {
      fVar22 = fVar22 + fVar5;
    }
    else {
      fVar22 = fVar22 - fVar5;
    }
    uVar17 = (int)fVar22 + (uint)(((int)fVar22 & 1U) == 0);
    if ((int)uVar17 < 1) {
      uVar17 = 1;
    }
    param_1[0xe323] = (float)(int)uVar17;
    if ((uVar17 & 0xffff) == 0) {
      uVar17 = 1;
    }
    fVar22 = (fVar27 * DAT_ram_400930ec * fVar28) / fVar32;
    if (0.0 <= fVar22) {
      fVar22 = fVar22 + fVar5;
    }
    else {
      fVar22 = fVar22 - fVar5;
    }
    uVar9 = (int)fVar22 + (uint)(((int)fVar22 & 1U) == 0);
    if ((int)uVar9 < 1) {
      uVar9 = 1;
    }
    param_1[0xe324] = (float)(int)uVar9;
    if ((uVar9 & 0xffff) < (uVar17 & 0xffff)) {
      uVar9 = uVar17 & 0xffff;
    }
    fVar22 = (fVar27 * DAT_ram_40098ee4 * fVar28) / fVar32;
    if (0.0 <= fVar22) {
      fVar22 = fVar22 + fVar5;
    }
    else {
      fVar22 = fVar22 - fVar5;
    }
    uVar17 = (int)fVar22 + (uint)(((int)fVar22 & 1U) == 0);
    if ((int)uVar17 < 1) {
      uVar17 = 1;
    }
    param_1[0xe325] = (float)(int)uVar17;
    if ((uVar17 & 0xffff) < (uVar9 & 0xffff)) {
      uVar17 = uVar9 & 0xffff;
    }
    fVar22 = (fVar27 * DAT_ram_40098ee8 * fVar28) / fVar32;
    if (0.0 <= fVar22) {
      fVar22 = fVar22 + fVar5;
    }
    else {
      fVar22 = fVar22 - fVar5;
    }
    uVar9 = (int)fVar22 + (uint)(((int)fVar22 & 1U) == 0);
    if ((int)uVar9 < 1) {
      uVar9 = 1;
    }
    param_1[0xe326] = (float)(int)uVar9;
    if ((uVar9 & 0xffff) < (uVar17 & 0xffff)) {
      uVar9 = uVar17 & 0xffff;
    }
    fVar22 = (fVar27 * DAT_ram_40098eec * fVar28) / fVar32;
    if (0.0 <= fVar22) {
      fVar22 = fVar22 + fVar5;
    }
    else {
      fVar22 = fVar22 - fVar5;
    }
    uVar17 = (int)fVar22 + (uint)(((int)fVar22 & 1U) == 0);
    if ((int)uVar17 < 1) {
      uVar17 = 1;
    }
    param_1[0xe327] = (float)(int)uVar17;
    if ((uVar17 & 0xffff) < (uVar9 & 0xffff)) {
      uVar17 = uVar9 & 0xffff;
    }
    fVar22 = (fVar27 * DAT_ram_400934e8 * fVar28) / fVar32;
    if (0.0 <= fVar22) {
      fVar22 = fVar22 + fVar5;
    }
    else {
      fVar22 = fVar22 - fVar5;
    }
    uVar9 = (int)fVar22 + (uint)(((int)fVar22 & 1U) == 0);
    if ((int)uVar9 < 1) {
      uVar9 = 1;
    }
    param_1[0xe328] = (float)(int)uVar9;
    if ((uVar9 & 0xffff) < (uVar17 & 0xffff)) {
      uVar9 = uVar17 & 0xffff;
    }
    fVar22 = (fVar27 * DAT_ram_40098ef0 * fVar28) / fVar32;
    if (0.0 <= fVar22) {
      fVar22 = fVar22 + fVar5;
    }
    else {
      fVar22 = fVar22 - fVar5;
    }
    uVar17 = (int)fVar22 + (uint)(((int)fVar22 & 1U) == 0);
    if ((int)uVar17 < 1) {
      uVar17 = 1;
    }
    param_1[0xe329] = (float)(int)uVar17;
    if ((uVar17 & 0xffff) < (uVar9 & 0xffff)) {
      uVar17 = uVar9 & 0xffff;
    }
    fVar27 = (fVar27 * DAT_ram_40094224 * fVar28) / fVar32;
    if (0.0 <= fVar27) {
      fVar27 = fVar27 + fVar5;
    }
    else {
      fVar27 = fVar27 - fVar5;
    }
    uVar9 = (int)fVar27 + (uint)(((int)fVar27 & 1U) == 0);
    if ((int)uVar9 < 1) {
      uVar9 = 1;
    }
    param_1[0xe32a] = (float)(int)uVar9;
    if ((uVar9 & 0xffff) < (uVar17 & 0xffff)) {
      uVar9 = uVar17 & 0xffff;
    }
    uVar9 = uVar9 + 0x40;
    if ((uVar9 & 0xffff) == 0) {
      uVar9 = 1;
    }
    uVar16 = (short)uVar9;
    if (0x15e0 < (uVar9 & 0xffff)) {
      uVar16 = 0x15e0;
    }
    *(undefined2 *)(param_1 + 0xe322) = uVar16;
    memset(param_1 + 0xe333,0,0x20);
    fVar23 = DAT_ram_40099010;
    fVar21 = DAT_ram_400980f0;
    fVar22 = DAT_ram_400930fc;
    uVar9 = (int)param_1[8] * 0x19660d + 0x3c6ef35f;
    uVar17 = uVar9 * 0x19660d + 0x3c6ef35f;
    uVar11 = uVar17 * 0x19660d + 0x3c6ef35f;
    fVar27 = (float)(uVar17 >> 8) * DAT_ram_400980f0;
    param_1[0xe34b] = (float)(uVar9 >> 8) * DAT_ram_400980f0 * DAT_ram_400930fc + DAT_ram_40099010;
    uVar17 = uVar11 * 0x19660d + 0x3c6ef35f;
    param_1[0xe33b] = fVar27 * fVar25;
    uVar12 = uVar17 * 0x19660d + 0x3c6ef35f;
    param_1[0xe34c] = (float)(uVar11 >> 8) * fVar21 * fVar22 + fVar23;
    uVar9 = uVar12 * 0x19660d + 0x3c6ef35f;
    param_1[0xe33c] = (float)(uVar17 >> 8) * fVar21 * fVar25;
    uVar11 = uVar9 * 0x19660d + 0x3c6ef35f;
    param_1[0xe34d] = (float)(uVar12 >> 8) * fVar21 * fVar22 + fVar23;
    uVar17 = uVar11 * 0x19660d + 0x3c6ef35f;
    param_1[0xe33d] = (float)(uVar9 >> 8) * fVar21 * fVar25;
    uVar12 = uVar17 * 0x19660d + 0x3c6ef35f;
    param_1[0xe34e] = (float)(uVar11 >> 8) * fVar21 * fVar22 + fVar23;
    uVar9 = uVar12 * 0x19660d + 0x3c6ef35f;
    param_1[0xe33e] = (float)(uVar17 >> 8) * fVar21 * fVar25;
    uVar11 = uVar9 * 0x19660d + 0x3c6ef35f;
    param_1[0xe34f] = (float)(uVar12 >> 8) * fVar21 * fVar22 + fVar23;
    uVar17 = uVar11 * 0x19660d + 0x3c6ef35f;
    param_1[0xe33f] = (float)(uVar9 >> 8) * fVar21 * fVar25;
    uVar12 = uVar17 * 0x19660d + 0x3c6ef35f;
    param_1[0xe350] = (float)(uVar11 >> 8) * fVar21 * fVar22 + fVar23;
    uVar9 = uVar12 * 0x19660d + 0x3c6ef35f;
    param_1[0xe340] = (float)(uVar17 >> 8) * fVar21 * fVar25;
    uVar17 = uVar9 * 0x19660d + 0x3c6ef35f;
    param_1[0xe351] = (float)(uVar12 >> 8) * fVar21 * fVar22 + fVar23;
    fVar27 = (float)(uVar17 * 0x19660d + 0x3c6ef35f);
    param_1[0xe341] = (float)(uVar9 >> 8) * fVar21 * fVar25;
    param_1[0xe352] = (float)(uVar17 >> 8) * fVar21 * fVar22 + fVar23;
    param_1[0xe342] = (float)((uint)fVar27 >> 8) * fVar21 * fVar25;
    param_1[0x1260a] = fVar27;
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
      iVar13 = 1;
LAB_ram_4007cf5e:
      memset(param_1 + iVar13 + 0xe333,0,(8 - iVar13) * 4);
    }
    else {
      memset(param_1 + 0x3422,0,(uint)*(ushort *)(param_1 + 0xe322) << 2);
      param_1[0xe333] = 0.0;
      if (*(ushort *)(param_1 + 0xe322) == 0) {
        param_1[0xe334] = 0.0;
        iVar13 = 2;
        goto LAB_ram_4007cf5e;
      }
      memset(param_1 + 0x4a02,0,(uint)*(ushort *)(param_1 + 0xe322) << 2);
      param_1[0xe334] = 0.0;
      if (*(ushort *)(param_1 + 0xe322) == 0) {
        param_1[0xe335] = 0.0;
        iVar13 = 3;
        goto LAB_ram_4007cf5e;
      }
      memset(param_1 + 0x5fe2,0,(uint)*(ushort *)(param_1 + 0xe322) << 2);
      param_1[0xe335] = 0.0;
      if (*(ushort *)(param_1 + 0xe322) == 0) {
        param_1[0xe336] = 0.0;
        iVar13 = 4;
        goto LAB_ram_4007cf5e;
      }
      memset(param_1 + 0x75c2,0,(uint)*(ushort *)(param_1 + 0xe322) << 2);
      param_1[0xe336] = 0.0;
      if (*(ushort *)(param_1 + 0xe322) == 0) {
        param_1[0xe337] = 0.0;
        iVar13 = 5;
        goto LAB_ram_4007cf5e;
      }
      memset(param_1 + 0x8ba2,0,(uint)*(ushort *)(param_1 + 0xe322) << 2);
      param_1[0xe337] = 0.0;
      if (*(ushort *)(param_1 + 0xe322) == 0) {
        param_1[0xe338] = 0.0;
        iVar13 = 6;
        goto LAB_ram_4007cf5e;
      }
      memset(param_1 + 0xa182,0,(uint)*(ushort *)(param_1 + 0xe322) << 2);
      param_1[0xe338] = 0.0;
      if (*(ushort *)(param_1 + 0xe322) == 0) {
        param_1[0xe339] = 0.0;
        iVar13 = 7;
        goto LAB_ram_4007cf5e;
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
  fVar22 = (float)FUN_ram_400008b8(DAT_ram_400930f4,param_1[1] * DAT_ram_40098f34);
  fVar27 = DAT_ram_4009286c;
  fVar25 = param_1[3];
  if (fVar25 < 0.0) {
    fVar25 = 0.0;
LAB_ram_4007bda0:
    fVar21 = param_1[4];
    if (0.0 <= fVar21) goto LAB_ram_4007bdb0;
LAB_ram_4007c15e:
    fVar21 = 0.0;
  }
  else {
    if (fVar25 <= fVar29) goto LAB_ram_4007bda0;
    fVar21 = param_1[4];
    fVar25 = fVar29;
    if (fVar21 < 0.0) goto LAB_ram_4007c15e;
LAB_ram_4007bdb0:
    if (DAT_ram_4009286c < fVar21) {
      fVar23 = param_1[5];
      cVar2 = *(char *)(param_1 + 9);
      fVar21 = DAT_ram_4009286c;
      goto joined_r0x4007bdd4;
    }
  }
  fVar23 = param_1[5];
  cVar2 = *(char *)(param_1 + 9);
joined_r0x4007bdd4:
  fVar24 = DAT_ram_40098edc;
  if ((DAT_ram_400934b8 <= fVar23) && (fVar24 = DAT_ram_40098ed8, fVar23 <= DAT_ram_400930a4)) {
    fVar23 = (float)FUN_ram_40000d54(DAT_ram_400930a4,-fVar23 / DAT_ram_400930b0);
    fVar23 = fVar23 * DAT_ram_400930dc;
    fVar24 = DAT_ram_40098ed8;
    if ((DAT_ram_4009424c <= fVar23) && (fVar24 = DAT_ram_40098ee0, fVar23 <= DAT_ram_40098f38)) {
      fVar24 = fVar23 * DAT_ram_4009810c;
    }
  }
  fVar6 = DAT_ram_4009824c;
  fVar33 = DAT_ram_4009810c;
  fVar23 = fVar25 * DAT_ram_40098f3c + DAT_ram_400934f0;
  fVar4 = fVar28 * DAT_ram_4009824c;
  fVar26 = DAT_ram_400934bc;
  if ((DAT_ram_400934bc <= fVar23) && (fVar26 = fVar23, fVar4 < fVar23)) {
    fVar26 = fVar4;
  }
  fVar25 = fVar25 * DAT_ram_40098f40 + DAT_ram_40098f44;
  fVar23 = DAT_ram_400934c0;
  if ((DAT_ram_400934c0 <= fVar25) && (fVar23 = fVar25, fVar4 < fVar25)) {
    fVar23 = fVar4;
  }
  fVar25 = (float)FUN_ram_40000c0e(fVar24 / fVar28);
  param_1[0x12] = fVar25;
  fVar25 = (float)FUN_ram_40000c0e((fVar26 * fVar33) / fVar28);
  param_1[0x15] = fVar25;
  fVar26 = (float)FUN_ram_40000c0e((fVar23 * fVar33) / fVar28);
  fVar24 = DAT_ram_40098f48;
  fVar23 = DAT_ram_40098288;
  fVar25 = DAT_ram_400930d8;
  param_1[0xe374] = fVar26;
  fVar25 = (fVar21 / fVar27) * fVar23 + fVar25;
  param_1[0xe375] = (fVar21 / fVar27) * fVar24;
  fVar23 = DAT_ram_40098108;
  fVar21 = DAT_ram_400930a4;
  fVar27 = DAT_ram_4009281c;
  if (cVar2 == '\0') {
    pfVar18 = param_1 + 0xe323;
    do {
      pfVar7 = pfVar18 + 1;
      uVar30 = FUN_ram_40000d54(fVar21,((float)*(undefined8 *)pfVar18 * fVar23) / (fVar28 * fVar22))
      ;
      *(undefined8 *)(pfVar18 + 8) = uVar30;
      pfVar18 = pfVar7;
    } while (param_1 + 0xe32b != pfVar7);
  }
  else {
    param_1[0xe32b] = DAT_ram_4009281c;
    param_1[0xe32c] = fVar27;
    param_1[0xe32d] = fVar27;
    param_1[0xe32e] = fVar27;
    param_1[0xe32f] = fVar27;
    param_1[0xe330] = fVar27;
    param_1[0xe331] = fVar27;
    param_1[0xe332] = fVar27;
  }
  fVar27 = DAT_ram_400980f4;
  cVar3 = *(char *)(param_1 + 0xe373);
  if ((fVar25 <= 0.0) || (param_1[0xe375] <= 0.0)) {
    memset(param_1 + 0xe343,0,0x20);
    memset(param_1 + 0xe353,0,0x20);
    fVar25 = DAT_ram_4009281c;
    param_1[0xe35b] = DAT_ram_4009281c;
    param_1[0xe35c] = fVar25;
    param_1[0xe35d] = fVar25;
    param_1[0xe35e] = fVar25;
    param_1[0xe35f] = fVar25;
    param_1[0xe360] = fVar25;
    param_1[0xe361] = fVar25;
    param_1[0xe362] = fVar25;
    memset(param_1 + 0xe363,0,0x20);
    cVar14 = '\0';
    param_1[0xe36b] = fVar25;
    param_1[0xe36c] = fVar25;
    param_1[0xe36d] = fVar25;
    param_1[0xe36e] = fVar25;
    param_1[0xe36f] = fVar25;
    param_1[0xe370] = fVar25;
    param_1[0xe371] = fVar25;
    param_1[0xe372] = fVar25;
    *(undefined1 *)(param_1 + 0xe373) = 0;
  }
  else {
    fVar21 = *param_1;
    fVar22 = ((param_1[0xe34b] + fVar29) * fVar25 * DAT_ram_400980f4) / fVar21;
    param_1[0xe343] = fVar22;
    if ((cVar1 == '\0') && (cVar3 != '\0')) {
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe363] = fVar23;
      fVar22 = (float)FUN_ram_40000786(fVar22);
      param_1[0xe36b] = fVar22;
      fVar22 = ((param_1[0xe34c] + fVar29) * fVar25 * fVar27) / fVar21;
      param_1[0xe344] = fVar22;
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe364] = fVar23;
      fVar22 = (float)FUN_ram_40000786(fVar22);
      param_1[0xe36c] = fVar22;
      fVar22 = ((param_1[0xe34d] + fVar29) * fVar25 * fVar27) / fVar21;
      param_1[0xe345] = fVar22;
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe365] = fVar23;
      fVar22 = (float)FUN_ram_40000786(fVar22);
      param_1[0xe36d] = fVar22;
      fVar22 = ((param_1[0xe34e] + fVar29) * fVar25 * fVar27) / fVar21;
      param_1[0xe346] = fVar22;
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe366] = fVar23;
      fVar22 = (float)FUN_ram_40000786(fVar22);
      param_1[0xe36e] = fVar22;
      fVar22 = ((param_1[0xe34f] + fVar29) * fVar25 * fVar27) / fVar21;
      param_1[0xe347] = fVar22;
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe367] = fVar23;
      fVar22 = (float)FUN_ram_40000786(fVar22);
      param_1[0xe36f] = fVar22;
      fVar22 = ((param_1[0xe350] + fVar29) * fVar25 * fVar27) / fVar21;
      param_1[0xe348] = fVar22;
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe368] = fVar23;
      fVar22 = (float)FUN_ram_40000786(fVar22);
      param_1[0xe370] = fVar22;
      fVar22 = ((param_1[0xe351] + fVar29) * fVar25 * fVar27) / fVar21;
      param_1[0xe349] = fVar22;
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe369] = fVar23;
      fVar22 = (float)FUN_ram_40000786(fVar22);
      param_1[0xe371] = fVar22;
      fVar21 = ((param_1[0xe352] + fVar29) * fVar25 * fVar27) / fVar21;
      param_1[0xe34a] = fVar21;
      fVar25 = (float)FUN_ram_40000a08(fVar21);
      param_1[0xe36a] = fVar25;
      fVar25 = (float)FUN_ram_40000786(fVar21);
      param_1[0xe372] = fVar25;
    }
    else {
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe363] = fVar23;
      fVar23 = (float)FUN_ram_40000786(fVar22);
      fVar22 = param_1[0xe33b];
      param_1[0xe36b] = fVar23;
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe353] = fVar23;
      fVar22 = (float)FUN_ram_40000786(fVar22);
      param_1[0xe35b] = fVar22;
      fVar22 = ((param_1[0xe34c] + fVar29) * fVar25 * fVar27) / fVar21;
      param_1[0xe344] = fVar22;
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe364] = fVar23;
      fVar23 = (float)FUN_ram_40000786(fVar22);
      fVar22 = param_1[0xe33c];
      param_1[0xe36c] = fVar23;
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe354] = fVar23;
      fVar22 = (float)FUN_ram_40000786(fVar22);
      param_1[0xe35c] = fVar22;
      fVar22 = ((param_1[0xe34d] + fVar29) * fVar25 * fVar27) / fVar21;
      param_1[0xe345] = fVar22;
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe365] = fVar23;
      fVar23 = (float)FUN_ram_40000786(fVar22);
      fVar22 = param_1[0xe33d];
      param_1[0xe36d] = fVar23;
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe355] = fVar23;
      fVar22 = (float)FUN_ram_40000786(fVar22);
      param_1[0xe35d] = fVar22;
      fVar22 = ((param_1[0xe34e] + fVar29) * fVar25 * fVar27) / fVar21;
      param_1[0xe346] = fVar22;
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe366] = fVar23;
      fVar23 = (float)FUN_ram_40000786(fVar22);
      fVar22 = param_1[0xe33e];
      param_1[0xe36e] = fVar23;
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe356] = fVar23;
      fVar22 = (float)FUN_ram_40000786(fVar22);
      param_1[0xe35e] = fVar22;
      fVar22 = ((param_1[0xe34f] + fVar29) * fVar25 * fVar27) / fVar21;
      param_1[0xe347] = fVar22;
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe367] = fVar23;
      fVar23 = (float)FUN_ram_40000786(fVar22);
      fVar22 = param_1[0xe33f];
      param_1[0xe36f] = fVar23;
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe357] = fVar23;
      fVar22 = (float)FUN_ram_40000786(fVar22);
      param_1[0xe35f] = fVar22;
      fVar22 = ((param_1[0xe350] + fVar29) * fVar25 * fVar27) / fVar21;
      param_1[0xe348] = fVar22;
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe368] = fVar23;
      fVar23 = (float)FUN_ram_40000786(fVar22);
      fVar22 = param_1[0xe340];
      param_1[0xe370] = fVar23;
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe358] = fVar23;
      fVar22 = (float)FUN_ram_40000786(fVar22);
      param_1[0xe360] = fVar22;
      fVar22 = ((param_1[0xe351] + fVar29) * fVar25 * fVar27) / fVar21;
      param_1[0xe349] = fVar22;
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe369] = fVar23;
      fVar23 = (float)FUN_ram_40000786(fVar22);
      fVar22 = param_1[0xe341];
      param_1[0xe371] = fVar23;
      fVar23 = (float)FUN_ram_40000a08(fVar22);
      param_1[0xe359] = fVar23;
      fVar22 = (float)FUN_ram_40000786(fVar22);
      param_1[0xe361] = fVar22;
      fVar21 = ((param_1[0xe352] + fVar29) * fVar25 * fVar27) / fVar21;
      param_1[0xe34a] = fVar21;
      fVar25 = (float)FUN_ram_40000a08(fVar21);
      param_1[0xe36a] = fVar25;
      fVar27 = (float)FUN_ram_40000786(fVar21);
      fVar25 = param_1[0xe342];
      param_1[0xe372] = fVar27;
      fVar27 = (float)FUN_ram_40000a08(fVar25);
      param_1[0xe35a] = fVar27;
      fVar25 = (float)FUN_ram_40000786(fVar25);
      param_1[0xe362] = fVar25;
    }
    *(undefined1 *)(param_1 + 0xe373) = 1;
    cVar14 = '\x01';
  }
  if ((cVar1 != '\0') || (cVar14 != cVar3)) {
    *(undefined2 *)((int)param_1 + 0x38dce) = 0;
  }
  if (cVar2 != '\0') {
    param_1[0xe374] = 0.0;
  }
  fVar25 = param_1[2];
  if (fVar25 < 0.0) {
    fVar25 = 0.0;
  }
  else if (DAT_ram_400934dc < fVar25) {
    fVar25 = DAT_ram_400934dc;
  }
  fVar25 = (fVar28 * fVar25) / fVar32;
  if (0.0 <= fVar25) {
    fVar25 = fVar25 + fVar5;
  }
  else {
    fVar25 = fVar25 - fVar5;
  }
  iVar13 = (int)fVar25;
  fVar25 = param_1[7];
  uVar15 = (short)~(ushort)((uint)iVar13 >> 0x10) >> 0xf & (ushort)iVar13;
  if (6000 < iVar13) {
    uVar15 = 6000;
  }
  *(ushort *)((int)param_1 + 0x3eba6) = uVar15;
  if (fVar25 < 0.0) {
    fVar25 = 0.0;
  }
  else if (fVar29 < fVar25) {
    fVar25 = fVar29;
  }
  fVar27 = param_1[0xc];
  param_1[0xe376] = fVar25;
  if (fVar27 < 0.0) {
    fVar25 = param_1[0xb];
    param_1[0xe377] = 0.0;
  }
  else {
    if (DAT_ram_400930a4 < fVar27) {
      fVar27 = DAT_ram_400930a4;
    }
    fVar25 = param_1[0xb];
    param_1[0xe377] = fVar27;
  }
  if (0.0 <= fVar25) {
    if (fVar29 < fVar25) {
      fVar25 = fVar29;
    }
  }
  else {
    fVar25 = 0.0;
  }
  fVar27 = param_1[0xd];
  param_1[0xe378] = fVar25;
  fVar25 = fVar33;
  if (fVar29 <= fVar27) {
    if (fVar4 < fVar27) {
      fVar25 = fVar4 * fVar33;
    }
    else {
      fVar25 = fVar27 * fVar33;
    }
  }
  fVar25 = (float)FUN_ram_40000c0e(fVar25 / fVar28);
  param_1[0x12201] = fVar25;
  fVar25 = param_1[0xe];
  fVar27 = fVar33;
  if (fVar29 <= fVar25) {
    if (fVar4 < fVar25) {
      fVar27 = fVar4 * fVar33;
    }
    else {
      fVar27 = fVar25 * fVar33;
    }
  }
  fVar25 = (float)FUN_ram_40000c0e(fVar27 / fVar28);
  param_1[0x12204] = fVar25;
  fVar25 = param_1[0xf];
  if (fVar29 <= fVar25) {
    if (fVar4 < fVar25) {
      fVar33 = fVar4 * fVar33;
    }
    else {
      fVar33 = fVar25 * fVar33;
    }
  }
  fVar28 = (float)FUN_ram_40000c0e(fVar33 / fVar28);
  param_1[0x12206] = fVar28;
  if (*(char *)((int)param_1 + 0x25) == '\0') {
    *(undefined1 *)(param_1 + 0x12200) = 0;
  }
  else {
    fVar28 = param_1[10];
    puVar31 = DAT_ram_40092834;
    if ((DAT_ram_400934e4 <= fVar28) &&
       (puVar31 = PTR_firmware_entry_ram_40092830, fVar28 <= DAT_ram_400934e0)) {
      puVar31 = (undefined *)(fVar28 / DAT_ram_40093494);
    }
    fVar28 = (float)FUN_ram_40000d54(PTR_firmware_entry_ram_40092830,puVar31);
    fVar25 = (float)FUN_ram_400008b8(0,param_1[0x10]);
    if ((((cVar1 != '\0') || (*(char *)(param_1 + 0x12200) == '\0')) ||
        (DAT_ram_40092838 < ABS(fVar28 - param_1[0x121fe]))) ||
       (DAT_ram_40098104 < ABS(fVar25 - param_1[0x121ff]))) {
      param_1[0x121fe] = fVar28;
      param_1[0x121ff] = fVar25;
      fVar32 = (fVar25 * *param_1) / fVar32;
      if (0.0 <= fVar32) {
        fVar32 = fVar32 + fVar5;
      }
      else {
        fVar32 = fVar32 - fVar5;
      }
      uVar17 = (int)fVar32;
      if (0x270c < (int)fVar32) {
        uVar17 = 0x270c;
      }
      if ((int)uVar17 < 0x40) {
        uVar17 = 0x40;
      }
      uVar9 = (uVar17 & 0xffff) + 4;
      *(short *)(param_1 + 0x121fb) = (short)uVar17;
      *(short *)(param_1 + 0x121fa) = (short)(uVar9 * 0x10000 >> 0x10);
      memset(param_1 + 0xfaea,0,(uVar9 & 0xffff) << 2);
      *(undefined2 *)((int)param_1 + 0x487ea) = 0;
      param_1[0x121fc] = 0.0;
      fVar32 = 0.0;
      if (((*(ushort *)(param_1 + 0x121fb) == 0) ||
          (fVar28 = (fVar28 - fVar29) / (float)*(ushort *)(param_1 + 0x121fb),
          fVar32 = DAT_ram_4009831c, fVar28 < DAT_ram_4009831c)) ||
         (fVar32 = fVar28, fVar28 <= fVar6)) {
        param_1[0x121fd] = fVar32;
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


