/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4007f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4007fba4.
 * REA evidence: ev_0949856ce5cc64aecddd224d2c31ebf02bae69d7b21052620b134fabae642100
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007fba4(uint param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_2 != (ulonglong *)0x0) {
    puVar2 = param_2;
    do {
      iVar1 = memset(puVar2,0,0x80);
      fence();
      puVar2 = (ulonglong *)(iVar1 + 0x80);
    } while (param_2 + 0x69b0 != puVar2);
    memset(param_2 + 0x69b0,0,0x3c);
    fence();
    uVar3 = (ulonglong)DAT_ram_400a0fd0;
    uVar4 = (ulonglong)DAT_ram_4009f080;
    uVar5 = (ulonglong)DAT_ram_40099f70;
    uVar6 = (ulonglong)DAT_ram_4009f9e4;
    uVar7 = (ulonglong)DAT_ram_4009672c;
    *(undefined1 *)(param_2 + 4) = 0;
    *(undefined1 *)(param_2 + 3) = 1;
    *(undefined **)((int)param_2 + 0x24) = &sedeleg;
    *param_2 = (ulonglong)param_1;
    *(ulonglong *)((int)param_2 + 4) = uVar3;
    param_2[1] = uVar4;
    *(undefined4 *)((int)param_2 + 0xc) = 0;
    param_2[2] = uVar5;
    *(ulonglong *)((int)param_2 + 0x14) = uVar6;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar7;
    FUN_ram_4007eae0(param_2);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4007fc48.
 * REA evidence: ev_ca92deb6ccd752eaa1e879670e2333101cdf459fa39e987b71631396b79f470e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007fc48(int param_1,undefined4 *param_2)

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


/* NanoCore 1.12, address 0x4007fc84.
 * REA evidence: ev_3d236f9bad5575ac244fd118e117f3b8388d6f25ce3492c3cf3002126e189c2d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007fc84(int param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  puVar7 = (ushort *)(param_1 + 0x48);
  puVar6 = (ushort *)(param_1 + 0x2048);
  do {
    if (*puVar6 != 0) {
      uVar4 = (uint)*puVar6 * 4;
      puVar3 = puVar7;
      if (0x80 < uVar4) {
        uVar9 = uVar4 - 0x81 >> 7;
        do {
          iVar1 = memset(puVar3,0,0x80);
          fence();
          puVar3 = (ushort *)(iVar1 + 0x80);
        } while (puVar3 != puVar7 + (uVar9 + 1) * 0x40);
        uVar4 = (uVar4 - 0x80) + uVar9 * -0x80;
        puVar3 = puVar7 + (uVar9 + 1) * 0x40;
      }
      memset(puVar3,0,uVar4);
      fence();
    }
    puVar6[4] = 0;
    puVar7 = puVar7 + 0x400;
    puVar6 = puVar6 + 1;
  } while (puVar7 != (ushort *)(param_1 + 0x2048));
  puVar7 = (ushort *)(param_1 + 0x2058);
  puVar6 = (ushort *)(param_1 + 0x5058);
  do {
    if (*puVar6 != 0) {
      uVar4 = (uint)*puVar6 * 4;
      puVar3 = puVar7;
      if (0x80 < uVar4) {
        uVar9 = uVar4 - 0x81 >> 7;
        do {
          iVar1 = memset(puVar3,0,0x80);
          fence();
          puVar3 = (ushort *)(iVar1 + 0x80);
        } while (puVar3 != puVar7 + (uVar9 + 1) * 0x40);
        uVar4 = (uVar4 - 0x80) + uVar9 * -0x80;
        puVar3 = puVar7 + (uVar9 + 1) * 0x40;
      }
      memset(puVar3,0,uVar4);
      fence();
    }
    puVar6[3] = 0;
    puVar7 = puVar7 + 0x800;
    puVar6 = puVar6 + 1;
  } while (puVar7 != (ushort *)(param_1 + 0x5058));
  puVar8 = (undefined4 *)(param_1 + 0x30ca8);
  iVar10 = param_1 + 0x5064;
  iVar1 = 0;
  while (*(ushort *)(param_1 + 0x30c64) != 0) {
    uVar4 = (uint)*(ushort *)(param_1 + 0x30c64) * 4;
    iVar5 = iVar10;
    if (0x80 < uVar4) {
      uVar9 = uVar4 - 0x81 >> 7;
      iVar5 = (uVar9 + 1) * 0x80 + iVar10;
      iVar2 = iVar10;
      do {
        iVar2 = memset(iVar2,0,0x80);
        fence();
        iVar2 = iVar2 + 0x80;
      } while (iVar2 != iVar5);
      uVar4 = (uVar4 - 0x80) + uVar9 * -0x80;
    }
    memset(iVar5,0,uVar4);
    fence();
    *puVar8 = 0;
    iVar1 = iVar1 + 1;
    if (iVar1 == 8) goto LAB_ram_4007fde2;
    puVar8 = puVar8 + 1;
    iVar10 = iVar10 + 0x5780;
  }
  *puVar8 = 0;
  if (iVar1 + 1 != 8) {
    memset(param_1 + (iVar1 + 0xc32b) * 4,0,(8 - (iVar1 + 1)) * 4);
  }
LAB_ram_4007fde2:
  *(undefined2 *)(param_1 + 0x30c66) = 0;
  iVar1 = param_1 + 0x30db8;
  do {
    iVar1 = memset(iVar1,0,0x80);
    fence();
    iVar1 = iVar1 + 0x80;
  } while (iVar1 != param_1 + 0x34d38);
  memset(param_1 + 0x34d38,0,0x80);
  fence();
  *(undefined2 *)(param_1 + 0x34db8) = 0;
  *(undefined2 *)(param_1 + 0x30daa) = 0;
  return;
}


/* NanoCore 1.12, address 0x4007fec8.
 * REA evidence: ev_eb34593b6ae4f4c5ffaa06964bbbdbb37509c67a7389c92ba66673d30d1db095
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007fec8(int param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined2 uVar8;
  float *pfVar9;
  ulonglong *puVar10;
  uint uVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 unaff_fs11;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float afStack_c0 [4];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  if ((((param_1 != 0) && (param_2 != (float *)0x0)) && (param_3 != (float *)0x0)) &&
     (param_4 != (float *)0x0)) {
    uStack_a0 = (undefined4)unaff_fs11;
    uStack_9c = (undefined4)((ulonglong)unaff_fs11 >> 0x20);
    if (*(char *)(param_1 + 0x24) != '\0') {
      FUN_ram_4007eae0();
    }
    fVar5 = DAT_ram_400a0fe0;
    fVar4 = DAT_ram_4009f95c;
    fVar3 = DAT_ram_4009a644;
    fVar2 = DAT_ram_4009a374;
    fVar1 = DAT_ram_4009672c;
    if (param_5 != 0) {
      pfVar17 = param_2 + param_5;
      fVar34 = DAT_ram_40099f6c;
      fVar33 = DAT_ram_40099f40;
      fVar36 = DAT_ram_400a0fd8;
      fVar35 = DAT_ram_400a0fdc;
      fVar30 = DAT_ram_40099f34;
      fVar29 = DAT_ram_400a0fd4;
      do {
        uVar14 = (uint)*(ushort *)(param_1 + 0x34dba);
        fVar23 = *param_2;
        if (uVar14 != 0) {
          uVar11 = (uint)*(ushort *)(param_1 + 0x34db8);
          if (uVar11 < 0x1000) {
            uVar14 = uVar11 - uVar14;
            uVar8 = (undefined2)(uVar11 + 1);
            if ((int)uVar14 < 0) {
              uVar14 = uVar14 + 0x1000;
            }
            uVar28 = *(undefined8 *)(param_1 + ((uVar14 & 0xffff) + 0xc36c) * 4 + 8);
            *(ulonglong *)(param_1 + (uVar11 + 0xc36c) * 4 + 8) = (ulonglong)(uint)fVar23;
            fVar23 = (float)uVar28;
            if ((uVar11 + 1 & 0xffff) == 0x1000) {
              uVar8 = 0;
            }
          }
          else {
            uVar28 = *(undefined8 *)(param_1 + ((0x1000 - uVar14 & 0xffff) + 0xc36c) * 4 + 8);
            *(float *)(param_1 + 0x30db8) = fVar23;
            uVar8 = 1;
            fVar23 = (float)uVar28;
          }
          *(undefined2 *)(param_1 + 0x34db8) = uVar8;
        }
        fVar32 = *(float *)(param_1 + 0x3c);
        uVar14 = (uint)*(ushort *)(param_1 + 0x2048);
        *(float *)(param_1 + 0x3c) = fVar23;
        fVar32 = ((fVar23 + *(float *)(param_1 + 0x38)) - fVar32) * *(float *)(param_1 + 0x34);
        fVar23 = fVar32 * (fVar1 - *(float *)(param_1 + 0x40)) +
                 *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x44);
        *(float *)(param_1 + 0x38) = fVar32;
        *(float *)(param_1 + 0x44) = fVar23;
        fVar32 = fVar23;
        if (uVar14 != 0) {
          uVar11 = (uint)*(ushort *)(param_1 + 0x2050);
          if (uVar11 < uVar14) {
            uVar12 = uVar11 + 1 & 0xffff;
            puVar10 = (ulonglong *)(param_1 + 0x48 + uVar11 * 4);
          }
          else {
            uVar12 = 1;
            puVar10 = (ulonglong *)(param_1 + 0x48);
          }
          fVar32 = fVar23 * fVar29 + (float)*puVar10;
          *puVar10 = (ulonglong)(uint)(fVar32 * fVar3 + fVar23);
          *(ushort *)(param_1 + 0x2050) = (ushort)uVar12 & -(ushort)(uVar12 < uVar14);
        }
        uVar14 = (uint)*(ushort *)(param_1 + 0x204a);
        fVar23 = fVar32;
        if (uVar14 != 0) {
          uVar11 = (uint)*(ushort *)(param_1 + 0x2052);
          if (uVar11 < uVar14) {
            uVar12 = uVar11 + 1 & 0xffff;
            puVar10 = (ulonglong *)(param_1 + 0x848 + uVar11 * 4);
          }
          else {
            uVar12 = 1;
            puVar10 = (ulonglong *)(param_1 + 0x848);
          }
          fVar23 = fVar32 * fVar29 + (float)*puVar10;
          *puVar10 = (ulonglong)(uint)(fVar23 * fVar3 + fVar32);
          *(ushort *)(param_1 + 0x2052) = (ushort)uVar12 & -(ushort)(uVar12 < uVar14);
        }
        uVar14 = (uint)*(ushort *)(param_1 + 0x204c);
        fVar32 = fVar23;
        if (uVar14 != 0) {
          uVar11 = (uint)*(ushort *)(param_1 + 0x2054);
          if (uVar11 < uVar14) {
            uVar12 = uVar11 + 1 & 0xffff;
            puVar10 = (ulonglong *)(param_1 + 0x1048 + uVar11 * 4);
          }
          else {
            uVar12 = 1;
            puVar10 = (ulonglong *)(param_1 + 0x1048);
          }
          fVar32 = fVar23 * fVar36 + (float)*puVar10;
          *puVar10 = (ulonglong)(uint)(fVar32 * fVar35 + fVar23);
          *(ushort *)(param_1 + 0x2054) = (ushort)uVar12 & -(ushort)(uVar12 < uVar14);
        }
        uVar14 = (uint)*(ushort *)(param_1 + 0x204e);
        fVar23 = fVar32;
        if (uVar14 != 0) {
          uVar11 = (uint)*(ushort *)(param_1 + 0x2056);
          if (uVar11 < uVar14) {
            uVar12 = uVar11 + 1 & 0xffff;
            puVar10 = (ulonglong *)(param_1 + 0x1848 + uVar11 * 4);
          }
          else {
            uVar12 = 1;
            puVar10 = (ulonglong *)(param_1 + 0x1848);
          }
          fVar23 = fVar32 * DAT_ram_400a0fd8 + (float)*puVar10;
          *puVar10 = (ulonglong)(uint)(fVar23 * DAT_ram_400a0fdc + fVar32);
          *(ushort *)(param_1 + 0x2056) = (ushort)uVar12 & -(ushort)(uVar12 < uVar14);
        }
        uVar21 = (ulonglong)(uint)fVar23;
        uVar14 = (uint)*(ushort *)(param_1 + 0x5058);
        fVar32 = fVar23;
        if (uVar14 != 0) {
          uVar11 = (uint)*(ushort *)(param_1 + 0x505e);
          if (uVar11 < uVar14) {
            uVar12 = uVar11 + 1 & 0xffff;
            pfVar9 = (float *)(param_1 + 0x2058) + uVar11;
          }
          else {
            uVar12 = 1;
            pfVar9 = (float *)(param_1 + 0x2058);
          }
          fVar32 = *pfVar9;
          *(ulonglong *)pfVar9 = uVar21;
          *(ushort *)(param_1 + 0x505e) = (ushort)uVar12 & -(ushort)(uVar12 < uVar14);
        }
        uVar14 = (uint)*(ushort *)(param_1 + 0x505a);
        fVar26 = fVar23;
        if (uVar14 != 0) {
          uVar11 = (uint)*(ushort *)(param_1 + 0x5060);
          if (uVar11 < uVar14) {
            uVar12 = uVar11 + 1 & 0xffff;
            puVar10 = (ulonglong *)(param_1 + 0x3058 + uVar11 * 4);
          }
          else {
            uVar12 = 1;
            puVar10 = (ulonglong *)(param_1 + 0x3058);
          }
          fVar26 = (float)*puVar10;
          *puVar10 = uVar21;
          *(ushort *)(param_1 + 0x5060) = (ushort)uVar12 & -(ushort)(uVar12 < uVar14);
        }
        uVar14 = (uint)*(ushort *)(param_1 + 0x505c);
        fVar27 = fVar23;
        if (uVar14 != 0) {
          uVar11 = (uint)*(ushort *)(param_1 + 0x5062);
          if (uVar11 < uVar14) {
            uVar12 = uVar11 + 1 & 0xffff;
            puVar10 = (ulonglong *)(param_1 + 0x4058 + uVar11 * 4);
          }
          else {
            uVar12 = 1;
            puVar10 = (ulonglong *)(param_1 + 0x4058);
          }
          fVar27 = (float)*puVar10;
          *puVar10 = uVar21;
          *(ushort *)(param_1 + 0x5062) = (ushort)uVar12 & -(ushort)(uVar12 < uVar14);
        }
        fVar32 = fVar27 * fVar30 + fVar26 * fVar33 + fVar32 * fVar34 + 0.0;
        if (*(char *)(param_1 + 0x30da8) == '\0') {
          uVar11 = (uint)*(ushort *)(param_1 + 0x30c66);
          uVar14 = (uint)*(ushort *)(param_1 + 0x30c64);
          uVar12 = uVar11 - (int)*(float *)(param_1 + 0x30c68);
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 + uVar14;
          }
          fVar26 = *(float *)(param_1 + 0x30dac);
          fVar24 = fVar1 - fVar26;
          fVar27 = (float)*(undefined8 *)(param_1 + ((uVar12 & 0xffff) + 0x1418) * 4 + 4) * fVar24 +
                   fVar26 * *(float *)(param_1 + 0x30ca8);
          uVar12 = uVar11 - (int)*(float *)(param_1 + 0x30c6c);
          *(float *)(param_1 + 0x30ca8) = fVar27;
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 + uVar14;
          }
          fVar31 = fVar24 * (float)*(undefined8 *)(param_1 + ((uVar12 & 0xffff) + 0x29f8) * 4 + 4) +
                   fVar26 * *(float *)(param_1 + 0x30cac);
          uVar12 = uVar11 - (int)*(float *)(param_1 + 0x30c70);
          *(float *)(param_1 + 0x30cac) = fVar31;
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 + uVar14;
          }
          fVar25 = fVar24 * *(float *)(param_1 + ((uVar12 & 0xffff) + 0x3fd8) * 4 + 4) +
                   fVar26 * *(float *)(param_1 + 0x30cb0);
          uVar12 = uVar11 - (int)*(float *)(param_1 + 0x30c74);
          *(float *)(param_1 + 0x30cb0) = fVar25;
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 + uVar14;
          }
          fVar22 = fVar24 * *(float *)(param_1 + ((uVar12 & 0xffff) + 0x55b8) * 4 + 4) +
                   fVar26 * *(float *)(param_1 + 0x30cb4);
          uVar12 = uVar11 - (int)*(float *)(param_1 + 0x30c78);
          *(float *)(param_1 + 0x30cb4) = fVar22;
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 + uVar14;
          }
          fVar20 = fVar24 * *(float *)(param_1 + ((uVar12 & 0xffff) + 0x6b98) * 4 + 4) +
                   fVar26 * *(float *)(param_1 + 0x30cb8);
          uVar12 = uVar11 - (int)*(float *)(param_1 + 0x30c7c);
          *(float *)(param_1 + 0x30cb8) = fVar20;
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 + uVar14;
          }
          fVar19 = fVar24 * *(float *)(param_1 + ((uVar12 & 0xffff) + 0x8178) * 4 + 4) +
                   fVar26 * *(float *)(param_1 + 0x30cbc);
          uVar12 = uVar11 - (int)*(float *)(param_1 + 0x30c80);
          *(float *)(param_1 + 0x30cbc) = fVar19;
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 + uVar14;
          }
          fVar18 = fVar24 * *(float *)(param_1 + ((uVar12 & 0xffff) + 0x9758) * 4 + 4) +
                   fVar26 * *(float *)(param_1 + 0x30cc0);
          uVar12 = uVar11 - (int)*(float *)(param_1 + 0x30c84);
          *(float *)(param_1 + 0x30cc0) = fVar18;
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 + uVar14;
          }
          fVar24 = fVar24 * (float)*(undefined8 *)(param_1 + ((uVar12 & 0xffff) + 0xad38) * 4 + 4) +
                   fVar26 * *(float *)(param_1 + 0x30cc4);
          fVar26 = fVar27 + 0.0 + fVar31 + fVar25 + fVar22 + fVar20 + fVar19 + fVar18 + fVar24;
          *(float *)(param_1 + 0x30cc4) = fVar24;
        }
        else {
          uVar13 = *(short *)(param_1 + 0x30daa) + 1;
          if (0x3ff < uVar13) {
            *(undefined2 *)(param_1 + 0x30daa) = 0;
          }
          else {
            *(ushort *)(param_1 + 0x30daa) = uVar13;
          }
          fVar26 = 0.0;
          puVar16 = (undefined8 *)(param_1 + 0x5064);
          puVar7 = (undefined8 *)(param_1 + 0x30c68);
          pfVar9 = afStack_c0;
          do {
            fVar27 = *(float *)(puVar7 + 0x18);
            fVar24 = *(float *)(param_1 + 0x30db0);
            fVar31 = fVar27 * *(float *)(puVar7 + 0x24) +
                     *(float *)(puVar7 + 0x1c) * *(float *)(puVar7 + 0x20);
            fVar25 = *(float *)(puVar7 + 0x1c) * *(float *)(puVar7 + 0x24) -
                     fVar27 * *(float *)(puVar7 + 0x20);
            if (0x3ff < uVar13) {
              fVar22 = fVar31 * fVar31 + fVar25 * fVar25;
              if (0.0 < fVar22 != 0) {
                if ((0.0 < fVar22) < 0x100 && fVar22 < 0.0) {
                  fVar22 = (float)FUN_ram_40000e74();
                  fVar34 = DAT_ram_40099f6c;
                  fVar33 = DAT_ram_40099f40;
                  fVar36 = DAT_ram_400a0fd8;
                  fVar35 = DAT_ram_400a0fdc;
                  fVar30 = DAT_ram_40099f34;
                  fVar29 = DAT_ram_400a0fd4;
                }
                else {
                  fVar22 = SQRT(fVar22);
                }
                fVar31 = fVar31 * (fVar1 / fVar22);
                fVar25 = fVar25 * (fVar1 / fVar22);
              }
            }
            uVar14 = (uint)*(ushort *)(param_1 + 0x30c64);
            *(float *)(puVar7 + 0x18) = fVar31;
            *(float *)(puVar7 + 0x1c) = fVar25;
            uVar11 = (uint)*(ushort *)(param_1 + 0x30c66);
            fVar31 = 0.0;
            if (1 < uVar14) {
              fVar31 = (float)uVar14;
              fVar27 = (float)uVar11 - (fVar27 * fVar24 + (float)*puVar7);
              if (fVar27 < 0.0) {
                fVar27 = fVar27 + fVar31;
              }
              if (fVar31 <= fVar27) {
                fVar27 = fVar27 - fVar31;
              }
              uVar12 = (uint)fVar27;
              puVar6 = (undefined8 *)((int)puVar16 + (uVar12 + 1 & 0xffff) * 4);
              if ((int)uVar14 <= (int)(uVar12 + 1)) {
                puVar6 = puVar16;
              }
              fVar31 = (float)*(undefined8 *)((int)puVar16 + (uVar12 & 0xffff) * 4) *
                       (fVar1 - (fVar27 - (float)(int)uVar12)) +
                       (fVar27 - (float)(int)uVar12) * (float)*puVar6;
            }
            puVar6 = (undefined8 *)((int)puVar7 + 4);
            puVar16 = puVar16 + 0xaf0;
            fVar27 = (fVar1 - *(float *)(param_1 + 0x30dac)) * fVar31 +
                     *(float *)(param_1 + 0x30dac) * (float)puVar7[8];
            puVar7[8] = (ulonglong)(uint)fVar27;
            *pfVar9 = fVar27;
            fVar26 = fVar26 + fVar27;
            puVar7 = puVar6;
            pfVar9 = pfVar9 + 1;
            fVar27 = afStack_c0[0];
            fVar31 = afStack_c0[1];
            fVar25 = afStack_c0[2];
            fVar22 = afStack_c0[3];
            fVar20 = fStack_b0;
            fVar19 = fStack_ac;
            fVar18 = fStack_a8;
            fVar24 = fStack_a4;
          } while (puVar6 != (undefined8 *)(param_1 + 0x30c88));
        }
        iVar15 = param_1 + uVar11 * 4;
        *(ulonglong *)(iVar15 + 0x5064) =
             (ulonglong)
             (uint)(fVar23 * fVar5 + (-(fVar26 * fVar2) + fVar27) * *(float *)(param_1 + 0x30c88));
        *(float *)(iVar15 + 0xa7e4) =
             -(fVar23 * fVar5) + (-(fVar26 * fVar2) + fVar31) * *(float *)(param_1 + 0x30c8c);
        *(float *)(iVar15 + 0xff64) =
             fVar23 * fVar5 + (-(fVar26 * fVar2) + fVar25) * *(float *)(param_1 + 0x30c90);
        *(float *)(iVar15 + 0x156e4) =
             -(fVar23 * fVar5) + (-(fVar26 * fVar2) + fVar22) * *(float *)(param_1 + 0x30c94);
        *(float *)(iVar15 + 0x1ae64) =
             fVar23 * fVar5 + (-(fVar26 * fVar2) + fVar20) * *(float *)(param_1 + 0x30c98);
        *(float *)(iVar15 + 0x205e4) =
             -(fVar23 * fVar5) + (-(fVar26 * fVar2) + fVar19) * *(float *)(param_1 + 0x30c9c);
        *(float *)(iVar15 + 0x25d64) =
             fVar23 * fVar5 + (-(fVar26 * fVar2) + fVar18) * *(float *)(param_1 + 0x30ca0);
        *(float *)(iVar15 + 0x2b4e4) =
             -(fVar23 * fVar5) + (-(fVar26 * fVar2) + fVar24) * *(float *)(param_1 + 0x30ca4);
        fVar23 = *(float *)(param_1 + 0x30db4);
        if ((uVar11 + 1 & 0xffff) < uVar14) {
          *(short *)(param_1 + 0x30c66) = (short)((uVar11 + 1) * 0x10000 >> 0x10);
        }
        else {
          *(undefined2 *)(param_1 + 0x30c66) = 0;
        }
        param_2 = param_2 + 1;
        *param_3 = (((((((fVar27 + fVar31) - fVar25) - fVar22) + fVar20 + fVar19) - fVar18) - fVar24
                    ) * fVar4 + fVar32) * fVar23;
        *param_4 = ((((((((fVar27 - fVar31) + fVar25) - fVar22) - fVar20) + fVar19) - fVar18) +
                    fVar24) * fVar4 + fVar32) * fVar23;
        param_4 = param_4 + 1;
        param_3 = param_3 + 1;
      } while (param_2 != pfVar17);
    }
    return;
  }
  return;
}


