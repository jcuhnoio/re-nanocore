/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40069000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40069066.
 * REA evidence: ev_751bfd0ab794e2f13481a014b85ce0c7e2ddd8e2fe5c95a50acf30a9d9655716
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40069066(float param_1,float *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float in_register_00000100;
  uint uVar11;
  undefined2 uVar12;
  uint uVar13;
  uint uVar14;
  undefined2 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float fVar24;
  
  if (param_2 == (float *)0x0) {
    return;
  }
  memset(param_2,0,0x2148);
  fVar24 = DAT_ram_4009672c;
  fVar20 = DAT_ram_4009f538;
  fVar16 = DAT_ram_4009678c;
  if (DAT_ram_4009672c < param_1) {
    fVar20 = DAT_ram_40096728 / (param_1 * DAT_ram_4009f53c);
    fVar16 = param_1;
  }
  *(ulonglong *)param_2 = (ulonglong)(uint)fVar16;
  uVar21 = FUN_ram_40000bd8(fVar20);
  fVar20 = *param_2;
  uVar23 = (ulonglong)(uint)DAT_ram_40096728;
  uVar22 = (ulonglong)DAT_ram_40096754;
  *(undefined8 *)(param_2 + 0x19) = uVar21;
  *(undefined1 *)(param_2 + 1) = 0;
  *(ulonglong *)(param_2 + 2) = uVar23;
  *(ulonglong *)(param_2 + 3) = uVar23;
  *(ulonglong *)(param_2 + 4) = uVar23;
  *(ulonglong *)(param_2 + 5) = uVar23;
  *(ulonglong *)(param_2 + 0x12) = uVar22;
  if (fVar20 <= fVar24) {
    uVar12 = 0x2c;
    fVar20 = DAT_ram_4009678c;
    fVar16 = DAT_ram_4009f518;
    fVar19 = DAT_ram_4009f514;
    fVar17 = DAT_ram_4009f510;
  }
  else {
    fVar16 = fVar20 / DAT_ram_40099f28 + DAT_ram_4009675c;
    uVar14 = (uint)(-1 < (int)fVar16) * (int)fVar16;
    uVar11 = 1;
    if (uVar14 != 0) {
      uVar11 = uVar14;
    }
    uVar13 = 0xffff;
    if (uVar14 < 0x10000) {
      uVar13 = uVar11;
    }
    uVar12 = (undefined2)uVar13;
    fVar16 = (float)(uVar13 & 0xffff) / fVar20;
    fVar19 = -fVar16;
    fVar17 = fVar19 / DAT_ram_4009f1d0;
  }
  *(undefined2 *)(param_2 + 0x834) = uVar12;
  fVar17 = (float)FUN_ram_40000bd8(fVar17);
  fVar1 = DAT_ram_4009f268;
  param_2[0x838] = fVar17;
  fVar17 = fVar19 / fVar1;
  fVar18 = (float)FUN_ram_40000bd8(fVar17);
  fVar3 = DAT_ram_4009f0ac;
  param_2[0x839] = fVar18;
  fVar18 = (float)FUN_ram_40000bd8(fVar19 / fVar3);
  param_2[0x83a] = fVar18;
  fVar17 = (float)FUN_ram_40000bd8(fVar17);
  fVar5 = DAT_ram_4009f378;
  param_2[0x83b] = fVar17;
  fVar17 = (float)FUN_ram_40000bd8(fVar19 / fVar5);
  fVar4 = DAT_ram_4009f258;
  param_2[0x83c] = fVar17;
  fVar17 = (float)FUN_ram_40000bd8(fVar19 / fVar4);
  param_2[0x83d] = fVar17;
  fVar17 = (float)FUN_ram_40000bd8(fVar19);
  fVar6 = DAT_ram_4009f51c;
  param_2[0x83e] = fVar17;
  fVar17 = (float)FUN_ram_40000bd8(fVar19 / fVar6);
  fVar7 = DAT_ram_4009f520;
  param_2[0x83f] = fVar17;
  fVar19 = (float)FUN_ram_40000bd8(fVar19 / fVar7);
  fVar17 = DAT_ram_4009f4ec;
  param_2[0x840] = fVar19;
  fVar9 = DAT_ram_4009f528;
  fVar8 = DAT_ram_4009f524;
  fVar18 = DAT_ram_40099f90;
  fVar19 = fVar17 / fVar16;
  uVar12 = 0;
  if (0.0 <= fVar19) {
    fVar19 = fVar19 + DAT_ram_4009675c;
    uVar14 = (uint)(-1 < (int)fVar19) * (int)fVar19;
    if (0xffff < uVar14) {
      uVar14 = 0xffff;
    }
    uVar12 = (undefined2)uVar14;
  }
  uVar15 = 0;
  if (0.0 <= DAT_ram_40099f90 / fVar16) {
    fVar16 = DAT_ram_40099f90 / fVar16 + DAT_ram_4009675c;
    uVar14 = (uint)(-1 < (int)fVar16) * (int)fVar16;
    if (0xffff < uVar14) {
      uVar14 = 0xffff;
    }
    uVar15 = (undefined2)uVar14;
  }
  fVar16 = DAT_ram_4009f528 / fVar20;
  *(undefined2 *)(param_2 + 0x835) = uVar15;
  *(undefined2 *)((int)param_2 + 0x20d2) = uVar12;
  param_2[0x841] = fVar8;
  param_2[0x842] = 0.0;
  fVar19 = (float)FUN_ram_40000bd8(fVar16);
  fVar16 = DAT_ram_4009f52c;
  param_2[0x836] = fVar19;
  fVar20 = (float)FUN_ram_40000bd8(fVar16 / fVar20);
  param_2[0x837] = fVar20;
  FUN_ram_4006010e(*(undefined8 *)param_2,param_2 + 0x81e,2);
  if (*(short *)(param_2 + 0x834) == 0) {
    fVar20 = *param_2;
    if (fVar20 <= fVar24) {
      uVar12 = 0x2c;
      fVar24 = DAT_ram_4009f518;
      fVar19 = DAT_ram_4009f514;
      fVar20 = DAT_ram_4009f510;
    }
    else {
      fVar24 = fVar20 / DAT_ram_40099f28 + DAT_ram_4009675c;
      uVar14 = (uint)(-1 < (int)fVar24) * (int)fVar24;
      uVar11 = 1;
      if (uVar14 != 0) {
        uVar11 = uVar14;
      }
      uVar13 = 0xffff;
      if (uVar14 < 0x10000) {
        uVar13 = uVar11;
      }
      uVar12 = (undefined2)uVar13;
      fVar24 = (float)(uVar13 & 0xffff) / fVar20;
      fVar19 = -fVar24;
      in_register_00000100 = fVar20;
      fVar20 = fVar19 / DAT_ram_4009f1d0;
    }
    *(undefined2 *)(param_2 + 0x834) = uVar12;
    fVar20 = (float)FUN_ram_40000bd8(fVar20);
    param_2[0x838] = fVar20;
    fVar1 = fVar19 / fVar1;
    fVar20 = (float)FUN_ram_40000bd8(fVar1);
    param_2[0x839] = fVar20;
    fVar20 = (float)FUN_ram_40000bd8(fVar19 / fVar3);
    param_2[0x83a] = fVar20;
    fVar20 = (float)FUN_ram_40000bd8(fVar1);
    param_2[0x83b] = fVar20;
    fVar20 = (float)FUN_ram_40000bd8(fVar19 / fVar5);
    param_2[0x83c] = fVar20;
    fVar20 = (float)FUN_ram_40000bd8(fVar19 / fVar4);
    param_2[0x83d] = fVar20;
    fVar20 = (float)FUN_ram_40000bd8(fVar19);
    param_2[0x83e] = fVar20;
    fVar20 = (float)FUN_ram_40000bd8(fVar19 / fVar6);
    param_2[0x83f] = fVar20;
    fVar20 = (float)FUN_ram_40000bd8(fVar19 / fVar7);
    fVar17 = fVar17 / fVar24;
    param_2[0x840] = fVar20;
    fVar20 = DAT_ram_4009f524;
    uVar12 = 0;
    if (0.0 <= fVar17) {
      fVar17 = fVar17 + DAT_ram_4009675c;
      uVar14 = (uint)(-1 < (int)fVar17) * (int)fVar17;
      if (0xffff < uVar14) {
        uVar14 = 0xffff;
      }
      uVar12 = (undefined2)uVar14;
    }
    uVar15 = 0;
    if (0.0 <= fVar18 / fVar24) {
      fVar24 = fVar18 / fVar24 + DAT_ram_4009675c;
      uVar14 = (uint)(-1 < (int)fVar24) * (int)fVar24;
      if (0xffff < uVar14) {
        uVar14 = 0xffff;
      }
      uVar15 = (undefined2)uVar14;
    }
    *(undefined2 *)((int)param_2 + 0x20d2) = uVar12;
    *(undefined2 *)(param_2 + 0x835) = uVar15;
    param_2[0x841] = fVar20;
    param_2[0x842] = 0.0;
    fVar20 = (float)FUN_ram_40000bd8(fVar9 / in_register_00000100);
    param_2[0x836] = fVar20;
    fVar20 = (float)FUN_ram_40000bd8(fVar16 / in_register_00000100);
    param_2[0x837] = fVar20;
  }
  uVar10 = DAT_ram_4009f530;
  uVar2 = DAT_ram_40099f38;
  uVar22 = (ulonglong)DAT_ram_4009f098;
  *(ulonglong *)(param_2 + 0x13) = uVar22;
  fVar24 = DAT_ram_4009f290;
  *(ulonglong *)(param_2 + 0x14) = uVar22;
  param_2[0x1c] = fVar24;
  *(undefined1 *)((int)param_2 + 0x46) = 0;
  param_2[0x1a] = 0.0;
  param_2[0x1b] = 0.0;
  *(undefined2 *)(param_2 + 0x1d) = 0;
  uVar21 = FUN_ram_40000d44(uVar2,uVar10);
  fVar16 = DAT_ram_4009a330;
  uVar22 = (ulonglong)DAT_ram_4009f534;
  fVar20 = param_2[0x841];
  *(ulonglong *)(param_2 + 0x15) = uVar22;
  *(undefined8 *)(param_2 + 0x17) = uVar21;
  *(ulonglong *)(param_2 + 0x16) = uVar22;
  *(undefined8 *)(param_2 + 0x18) = uVar21;
  *(undefined1 *)(param_2 + 0x84e) = 0;
  param_2[0x84b] = fVar24;
  param_2[0x843] = 0.0;
  param_2[0x844] = 0.0;
  param_2[0x845] = 0.0;
  param_2[0x846] = 0.0;
  param_2[0x847] = 0.0;
  param_2[0x848] = fVar16;
  param_2[0x849] = 0.0;
  param_2[0x84a] = 0.0;
  param_2[0x84d] = 0.0;
  param_2[0x84f] = fVar20;
  param_2[0x850] = fVar20;
  param_2[0x851] = fVar20;
  *(undefined2 *)(param_2 + 0x84c) = 0;
  FUN_ram_4005ff48(param_2 + 0x81e);
  return;
}


/* NanoCore 1.12, address 0x40069592.
 * REA evidence: ev_9e0f0f0b79b5b0a835831dfae848043d2bac15e3dcf8bb229e40d8769a4c27c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40069592(ulonglong *param_1,int param_2)

{
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_40099f94;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009a584;
    }
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x400695d2.
 * REA evidence: ev_0351dd2f12b629b4cde64313ba3f059effd482bfca203ddeca34fdb0c66183a0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400695d2(uint param_1)

{
  return param_1 & -(uint)(param_1 < 4);
}


/* NanoCore 1.12, address 0x400695de.
 * REA evidence: ev_90400e8180c0fc6ed5ea165cd9b23562913aa9f7e68b6ecdc1d17990a78c6c23
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400695de(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 < 4) {
    uVar2 = 6;
    if (param_1 != 3) {
      uVar2 = 2;
    }
    uVar1 = 7;
    if (param_1 != 2) {
      uVar1 = uVar2;
    }
    return uVar1;
  }
  return 2;
}


/* NanoCore 1.12, address 0x40069600.
 * REA evidence: ev_cf50368ccd112992e47a244ff3d9ab3b995007a39c0594dce176f19494c8ede3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40069600(ulonglong *param_1,uint param_2,uint param_3)

{
  if ((param_1 == (ulonglong *)0x0) || (param_2 == 0)) {
    return;
  }
  if (param_3 < 4) {
    memset(param_1,0,param_2 << 2);
    if (param_3 == 1) {
      *param_1 = (ulonglong)DAT_ram_4009675c;
      if (param_2 == 1) {
        return;
      }
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009f540;
      return;
    }
    if (param_3 == 3) {
      *param_1 = (ulonglong)DAT_ram_4009f544;
      if (param_2 != 1) {
        *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009f548;
        if (param_2 != 2) {
          *(undefined4 *)(param_1 + 1) = 0;
        }
        if (3 < param_2) {
          *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_40099f6c;
        }
      }
      if (4 < param_2) {
        param_1[2] = (ulonglong)DAT_ram_40099f88;
      }
      if (param_2 < 6) {
        return;
      }
      *(ulonglong *)((int)param_1 + 0x14) = (ulonglong)DAT_ram_4009675c;
      return;
    }
    *param_1 = (ulonglong)DAT_ram_40099f94;
    if (param_3 != 0) {
      if (param_3 != 2) {
        return;
      }
      if (param_2 != 1) {
        *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009f544;
        if (param_2 != 2) {
          param_1[1] = (ulonglong)DAT_ram_4009f548;
        }
        if (3 < param_2) {
          *(undefined4 *)((int)param_1 + 0xc) = 0;
        }
      }
      if (4 < param_2) {
        param_1[2] = (ulonglong)DAT_ram_40099f6c;
      }
      if (5 < param_2) {
        *(ulonglong *)((int)param_1 + 0x14) = (ulonglong)DAT_ram_40099f88;
      }
      if (param_2 < 7) {
        return;
      }
      param_1[3] = (ulonglong)DAT_ram_4009675c;
      return;
    }
  }
  else {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_40099f94;
  }
  if (param_2 != 1) {
    *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009a584;
  }
  return;
}


/* NanoCore 1.12, address 0x40069738.
 * REA evidence: ev_70d5f0b48fbf28ef55ca61f8296a4c3017193dbbc173fde87a6ffc51f4c3350c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_ram_40069738(ulonglong param_1,float *param_2,float *param_3,float *param_4,
                          float *param_5,float *param_6,int param_7,float *param_8,uint param_9,
                          char param_10,int param_11)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  float in_register_00000100;
  float *pfVar4;
  char cVar5;
  ushort uVar6;
  float fVar7;
  bool bVar8;
  float fVar9;
  ushort uVar10;
  undefined2 uVar11;
  ushort uVar13;
  short sVar14;
  short sVar15;
  float fVar16;
  uint uVar17;
  float *pfVar18;
  int iVar19;
  uint uVar20;
  undefined2 uVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  ulonglong uVar36;
  float fVar37;
  ulonglong uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  uint uVar12;
  
  if (param_2 == (float *)0x0) {
    return param_1;
  }
  if (param_3 == (float *)0x0) {
    return param_1;
  }
  if (param_5 == (float *)0x0) {
    return param_1;
  }
  if (param_7 == 0) {
    return param_1;
  }
  if (param_11 != 0) {
    *(bool *)param_11 = param_10 != '\0';
  }
  bVar8 = param_10 != '\0' && (param_4 != (float *)0x0 && param_6 != (float *)0x0);
  uVar20 = (uint)*(byte *)(param_2 + 1);
  fVar23 = DAT_ram_4009672c;
  if (param_9 < 4) {
    if (param_9 != uVar20) goto LAB_ram_4006a112;
LAB_ram_400697c4:
    fVar27 = DAT_ram_4009f094;
    if (uVar20 == 1) {
      if (param_8 == (float *)0x0) {
        if (DAT_ram_4009f094 < ABS(DAT_ram_4009675c - (float)*(undefined8 *)(param_2 + 4))) {
          uVar36 = (ulonglong)DAT_ram_4009f540;
          *(ulonglong *)(param_2 + 4) = (ulonglong)(uint)DAT_ram_4009675c;
          fVar26 = 0.0;
LAB_ram_40069c6a:
          param_2[0x842] = fVar26;
        }
        else {
          uVar36 = (ulonglong)DAT_ram_4009f540;
        }
      }
      else {
        fVar31 = *param_8;
        uVar22 = (ulonglong)(uint)fVar31;
        if (0.0 <= fVar31) {
          if (fVar23 < fVar31) {
            uVar22 = (ulonglong)(uint)fVar23;
          }
        }
        else {
          uVar22 = 0;
        }
        fVar31 = param_8[1];
        uVar36 = (ulonglong)(uint)fVar31;
        if (0.0 <= fVar31) {
          if (fVar23 < fVar31) {
            uVar36 = (ulonglong)(uint)fVar23;
          }
        }
        else {
          uVar36 = 0;
        }
        fVar31 = (float)uVar22;
        if (DAT_ram_4009f094 < ABS(fVar31 - (float)*(undefined8 *)(param_2 + 4))) {
          *(ulonglong *)(param_2 + 4) = uVar22;
          fVar26 = DAT_ram_4009b12c;
          if ((0.0 <= fVar31) && (fVar26 = DAT_ram_40099f60, fVar31 <= fVar23)) {
            fVar26 = fVar31 * DAT_ram_4009a330 + DAT_ram_4009b12c;
          }
          goto LAB_ram_40069c6a;
        }
      }
      fVar26 = DAT_ram_4009b130;
      fVar31 = DAT_ram_40099f50;
      fVar29 = (float)uVar36;
      uVar6 = *(ushort *)(param_2 + 0x834);
      if (ABS(fVar29 - (float)*(undefined8 *)(param_2 + 5)) <= fVar27) goto LAB_ram_40069cf4;
      fVar27 = (float)*(undefined8 *)param_2;
      if ((float)*(undefined8 *)param_2 <= fVar23) {
        fVar27 = DAT_ram_4009678c;
      }
      fVar25 = fVar23;
      if (uVar6 != 0) {
        fVar25 = (float)uVar6;
      }
      fVar24 = DAT_ram_4009f55c;
      if ((fVar29 < 0.0) || (fVar24 = DAT_ram_4009f560, fVar23 < fVar29)) {
        *(ulonglong *)(param_2 + 5) = uVar36;
LAB_ram_4006b0b8:
        if (fVar24 < DAT_ram_4009f54c) {
          fVar24 = DAT_ram_4009f54c;
        }
        param_1 = FUN_ram_40000bd8(-(fVar25 / fVar27) / fVar24);
        uVar6 = *(ushort *)(param_2 + 0x834);
      }
      else {
        *(ulonglong *)(param_2 + 5) = uVar36;
        param_1 = 0;
        fVar24 = (fVar29 * fVar26 + fVar31) / DAT_ram_4009f564;
        if (0.0 < fVar24) {
          fVar24 = fVar24 * DAT_ram_4009f0ac;
          goto LAB_ram_4006b0b8;
        }
      }
      param_2[0x840] = (float)param_1;
LAB_ram_40069cf4:
      fVar30 = DAT_ram_4009f098;
      fVar40 = DAT_ram_40099f60;
      fVar24 = DAT_ram_40099f38;
      fVar25 = DAT_ram_40099f30;
      fVar31 = param_2[0x843];
      fVar26 = param_2[0x844];
      fVar27 = param_2[0x849];
      fVar29 = param_2[0x84a];
      uVar13 = *(ushort *)(param_2 + 0x84b);
      uVar10 = *(ushort *)(param_2 + 0x84c);
      if (uVar6 == 0) {
        uVar6 = 1;
      }
      iVar19 = 0;
      do {
        fVar34 = (float)*(undefined8 *)((int)param_3 + iVar19);
        fVar33 = fVar34;
        if ((bVar8) && (param_4 != (float *)0x0)) {
          fVar33 = (fVar34 + (float)*(undefined8 *)((int)param_4 + iVar19)) * DAT_ram_4009675c;
        }
        fVar31 = (fVar23 - param_2[0x836]) * fVar33 + param_2[0x836] * fVar31;
        fVar26 = (fVar33 - fVar31) * (fVar23 - param_2[0x837]) + param_2[0x837] * fVar26;
        fVar33 = fVar26 * fVar26;
        fVar27 = fVar27 + fVar33;
        if (fVar29 < fVar33) {
          fVar29 = fVar33;
        }
        uVar13 = uVar13 + 1;
        fVar33 = (float)uVar10 * (fVar23 / (float)uVar6);
        if (fVar23 < fVar33) {
          fVar33 = fVar23;
        }
        if (uVar10 < uVar6) {
          uVar10 = uVar10 + 1;
        }
        fVar33 = (param_2[0x851] - param_2[0x850]) * fVar33 + param_2[0x850];
        *(ulonglong *)((int)param_5 + iVar19) = (ulonglong)(uint)(fVar33 * fVar34);
        if (((bVar8) && (param_4 != (float *)0x0)) && (param_6 != (float *)0x0)) {
          *(ulonglong *)((int)param_6 + iVar19) =
               (ulonglong)(uint)((float)*(undefined8 *)((int)param_4 + iVar19) * fVar33);
        }
        if (uVar6 <= uVar13) {
          fVar33 = fVar27 / (float)uVar13;
          if (fVar27 / (float)uVar13 < fVar30) {
            fVar33 = fVar30;
          }
          if (fVar29 < fVar30) {
            fVar29 = fVar30;
          }
          if (fVar33 <= param_2[0x845]) {
            fVar27 = param_2[0x839];
          }
          else {
            fVar27 = param_2[0x838];
          }
          fVar27 = param_2[0x845] * fVar27 + (fVar23 - fVar27) * fVar33;
          param_2[0x845] = fVar27;
          if (fVar29 <= param_2[0x846]) {
            fVar34 = param_2[0x83b];
          }
          else {
            fVar34 = param_2[0x83a];
          }
          param_2[0x846] = param_2[0x846] * fVar34 + (fVar23 - fVar34) * fVar29;
          if (fVar27 < fVar30) {
            fVar27 = fVar30;
          }
          fVar27 = (float)FUN_ram_40000cc4(fVar27);
          fVar27 = fVar27 * fVar24;
          fVar34 = param_2[0x846];
          if (param_2[0x846] < fVar30) {
            fVar34 = fVar30;
          }
          fVar28 = (float)FUN_ram_40000cc4(fVar34);
          fVar35 = DAT_ram_4009f568._4_4_;
          fVar34 = param_2[0x847];
          fVar28 = fVar28 * fVar24;
          if ((0.0 < fVar34) || (fVar33 <= (float)DAT_ram_4009f568)) {
LAB_ram_4006aa0c:
            bVar2 = 0;
          }
          else {
            param_2[0x847] = fVar33;
            param_2[0x84d] = 0.0;
            if ((fVar27 <= fVar35) && (fVar34 = fVar33, fVar28 <= DAT_ram_4009f570))
            goto LAB_ram_4006aa0c;
            fVar34 = param_2[0x845] * DAT_ram_4009f574;
            if (param_2[0x845] * DAT_ram_4009f574 < fVar30) {
              fVar34 = fVar30;
            }
            param_2[0x847] = fVar34;
            bVar2 = 1;
          }
          if (fVar34 < fVar30) {
            fVar34 = fVar30;
          }
          param_1 = FUN_ram_40000cc4(fVar34);
          fVar34 = (float)param_1 * fVar24;
          cVar5 = *(char *)(param_2 + 0x84e);
          fVar7 = param_2[0x84d];
          bVar1 = (fVar34 + param_2[0x848] + fVar24) - param_2[0x842] < fVar28;
          fVar35 = fVar23;
          if (((fVar34 + fVar40) - param_2[0x842]) + fVar25 < fVar27) {
            fVar9 = (float)(uint)*(ushort *)(param_2 + 0x835);
            bVar1 = true;
            if ((uint)fVar9 <= (uint)fVar7) goto LAB_ram_4006ae20;
LAB_ram_4006ac0a:
            sVar15 = *(short *)((int)param_2 + 0x20d2);
            cVar5 = '\x01';
          }
          else {
            fVar9 = (float)(uint)*(ushort *)(param_2 + 0x835);
            if ((uint)fVar7 < (uint)fVar9) {
              if ((bool)(bVar2 | bVar1)) goto LAB_ram_4006ac0a;
              fVar34 = param_2[0x847];
              if (0.0 < fVar34) {
LAB_ram_4006aa82:
                if (param_2[0x845] <= fVar34) {
                  fVar7 = param_2[0x83d];
                }
                else {
                  fVar7 = param_2[0x83c];
                }
                param_2[0x847] = fVar7 * fVar34 + (fVar23 - fVar7) * param_2[0x845];
                fVar29 = (float)FUN_ram_40000cc4(fVar29 / fVar33);
                fVar29 = fVar29 * fVar24;
                fVar33 = fVar40;
                if ((fVar40 <= fVar29) && (fVar33 = fVar29, (float)_DAT_ram_4009b1a4 < fVar29)) {
                  fVar33 = (float)_DAT_ram_4009b1a4;
                }
                param_2[0x848] =
                     param_2[0x83e] * param_2[0x848] + (fVar23 - param_2[0x83e]) * fVar33;
                fVar29 = param_2[0x847];
                if (param_2[0x847] < fVar30) {
                  fVar29 = fVar30;
                }
                param_1 = FUN_ram_40000cc4(fVar29);
                fVar29 = (float)param_1 * fVar24;
                fVar16 = fVar29 + fVar25;
                if (fVar27 <= ((fVar29 + fVar40) - param_2[0x842]) + fVar25) {
                  fVar7 = param_2[0x84d];
                  fVar9 = (float)(uint)*(ushort *)(param_2 + 0x835);
                  bVar1 = (fVar29 + param_2[0x848] + fVar24) - param_2[0x842] < fVar28;
                  goto LAB_ram_4006ab40;
                }
                fVar7 = param_2[0x84d];
                if (((uint)fVar7 < (uint)*(ushort *)(param_2 + 0x835)) || (cVar5 == '\0'))
                goto LAB_ram_4006ac0a;
                sVar14 = *(short *)((int)param_2 + 0x212e);
                goto LAB_ram_4006b008;
              }
              sVar14 = *(short *)((int)param_2 + 0x212e);
LAB_ram_4006abf8:
              if (cVar5 == '\0') {
                sVar15 = 0;
                goto LAB_ram_4006ab52;
              }
LAB_ram_4006afe4:
              sVar15 = 0;
              if (sVar14 != 0) {
                sVar15 = sVar14 + -1;
                goto LAB_ram_4006ab5c;
              }
            }
            else {
LAB_ram_4006ae20:
              fVar16 = fVar34 + fVar25;
              if (fVar28 <= fVar34 + param_2[0x848] + fVar40) {
                if ((fVar27 <= fVar34 + (float)_DAT_ram_4009f060) &&
                   (fVar34 = param_2[0x847], 0.0 < fVar34)) goto LAB_ram_4006aa82;
LAB_ram_4006ab40:
                sVar14 = *(short *)((int)param_2 + 0x212e);
                if ((uint)fVar7 < (uint)fVar9) {
                  if (!(bool)(bVar2 | bVar1)) goto LAB_ram_4006abf8;
                  goto LAB_ram_4006ac0a;
                }
              }
              else {
                sVar14 = *(short *)((int)param_2 + 0x212e);
              }
              if (cVar5 != '\0') {
LAB_ram_4006b008:
                if (fVar16 <= fVar27) {
                  sVar15 = *(short *)((int)param_2 + 0x20d2);
                  goto LAB_ram_4006ab5c;
                }
                goto LAB_ram_4006afe4;
              }
              sVar15 = sVar14;
              if (bVar1) goto LAB_ram_4006ac0a;
            }
LAB_ram_4006ab52:
            cVar5 = '\0';
            fVar35 = param_2[0x841];
          }
LAB_ram_4006ab5c:
          fVar33 = param_2[0x84f];
          if (fVar35 <= fVar33) {
            fVar34 = param_2[0x840];
          }
          else {
            fVar34 = param_2[0x83f];
          }
          param_2[0x850] = fVar33;
          fVar29 = 0.0;
          *(short *)((int)param_2 + 0x212e) = sVar15;
          fVar27 = 0.0;
          *(undefined2 *)(param_2 + 0x84c) = 0;
          fVar33 = fVar33 * fVar34 + (fVar23 - fVar34) * fVar35;
          *(char *)(param_2 + 0x84e) = cVar5;
          param_2[0x84d] = (float)((int)fVar7 + 1);
          uVar10 = 0;
          uVar13 = 0;
          param_2[0x851] = fVar33;
          param_2[0x84f] = fVar33;
        }
        iVar19 = iVar19 + 4;
        if (param_7 << 2 == iVar19) {
          param_2[0x843] = fVar31;
          param_2[0x844] = fVar26;
          param_2[0x849] = fVar27;
          param_2[0x84a] = fVar29;
          *(ushort *)(param_2 + 0x84b) = uVar13;
          *(ushort *)(param_2 + 0x84c) = uVar10;
          return param_1;
        }
      } while( true );
    }
    if (uVar20 != 3) goto LAB_ram_400697d0;
    if (param_8 == (float *)0x0) {
      fVar31 = 0.0;
      fVar27 = DAT_ram_4009f548;
      fVar26 = DAT_ram_40099f6c;
      fVar29 = DAT_ram_40099f88;
      fVar25 = DAT_ram_4009675c;
      fVar24 = DAT_ram_40099f5c;
LAB_ram_4006ae78:
      fVar40 = fVar27 * DAT_ram_4009b134 + fVar23;
    }
    else {
      fVar40 = *param_8;
      if (fVar40 < 0.0) {
        fVar40 = 0.0;
      }
      else if (fVar23 < fVar40) {
        fVar40 = fVar23;
      }
      fVar27 = param_8[1];
      if (fVar27 < 0.0) {
        fVar27 = 0.0;
      }
      else if (fVar23 < fVar27) {
        fVar27 = fVar23;
      }
      fVar31 = param_8[2];
      if (fVar31 < 0.0) {
        fVar31 = 0.0;
      }
      else if (fVar23 < fVar31) {
        fVar31 = fVar23;
      }
      fVar26 = param_8[3];
      if (fVar26 < 0.0) {
        fVar26 = 0.0;
      }
      else if (fVar23 < fVar26) {
        fVar26 = fVar23;
      }
      fVar29 = param_8[4];
      if (fVar29 < 0.0) {
        fVar29 = 0.0;
      }
      else if (fVar23 < fVar29) {
        fVar29 = fVar23;
      }
      fVar25 = param_8[5];
      if (fVar25 < 0.0) {
        fVar25 = 0.0;
      }
      else if (fVar23 < fVar25) {
        fVar25 = fVar23;
      }
      fVar24 = DAT_ram_4009a568;
      if ((0.0 <= fVar40) && (fVar24 = 0.0, fVar40 <= fVar23)) {
        fVar24 = fVar40 * DAT_ram_4009a564 + DAT_ram_4009a568;
      }
      fVar40 = fVar23;
      if ((0.0 <= fVar27) && (fVar40 = DAT_ram_40099f50, fVar27 <= fVar23)) goto LAB_ram_4006ae78;
    }
    fVar27 = 0.0;
    if ((0.0 <= fVar31) && (fVar27 = DAT_ram_4009a328, fVar31 <= fVar23)) {
      fVar27 = fVar31 * DAT_ram_4009a328 + 0.0;
    }
    fVar31 = 0.0;
    if ((0.0 <= fVar26) && (fVar31 = DAT_ram_4009b128, fVar26 <= fVar23)) {
      fVar31 = fVar26 * DAT_ram_4009b128 + 0.0;
    }
    fVar26 = 0.0;
    if ((0.0 <= fVar29) && (fVar26 = DAT_ram_40099f28, fVar29 <= fVar23)) {
      fVar26 = fVar29 * DAT_ram_40099f28 + 0.0;
    }
    fVar29 = DAT_ram_4009a324;
    if ((0.0 <= fVar25) && (fVar29 = DAT_ram_4009a328, fVar25 <= fVar23)) {
      fVar29 = fVar25 * DAT_ram_4009b138 + DAT_ram_4009a324;
    }
    FUN_ram_4005ff6c(fVar24,fVar40,fVar27,fVar31,fVar26,fVar29,param_2 + 0x81e);
    if (param_10 == '\0' || (param_4 == (float *)0x0 || param_6 == (float *)0x0)) {
      param_4 = (float *)0x0;
      param_6 = (float *)0x0;
    }
    goto LAB_ram_40069bb6;
  }
  if (uVar20 != 0) {
    param_9 = 0;
LAB_ram_4006a112:
    uVar22 = (ulonglong)DAT_ram_40096728;
    *(char *)(param_2 + 1) = (char)param_9;
    *(ulonglong *)(param_2 + 2) = uVar22;
    *(ulonglong *)(param_2 + 3) = uVar22;
    *(ulonglong *)(param_2 + 4) = uVar22;
    *(ulonglong *)(param_2 + 5) = uVar22;
    fVar23 = DAT_ram_4009672c;
    if (*(short *)(param_2 + 0x834) == 0) {
      fVar27 = *param_2;
      if (fVar27 <= DAT_ram_4009672c) {
        uVar11 = 0x2c;
        fVar27 = DAT_ram_4009678c;
        fVar31 = DAT_ram_4009f518;
        fVar26 = DAT_ram_4009f514;
        fVar29 = DAT_ram_4009f510;
      }
      else {
        fVar31 = fVar27 / DAT_ram_40099f28 + DAT_ram_4009675c;
        uVar20 = (uint)(-1 < (int)fVar31) * (int)fVar31;
        uVar17 = 1;
        if (uVar20 != 0) {
          uVar17 = uVar20;
        }
        uVar12 = 0xffff;
        if (uVar20 < 0x10000) {
          uVar12 = uVar17;
        }
        uVar11 = (undefined2)uVar12;
        fVar31 = (float)(uVar12 & 0xffff) / fVar27;
        fVar26 = -fVar31;
        fVar29 = fVar26 / DAT_ram_4009f1d0;
      }
      *(undefined2 *)(param_2 + 0x834) = uVar11;
      fVar29 = (float)FUN_ram_40000bd8(fVar29);
      fVar25 = DAT_ram_4009f268;
      param_2[0x838] = fVar29;
      fVar24 = (float)FUN_ram_40000bd8(fVar26 / fVar25);
      fVar29 = DAT_ram_4009f0ac;
      param_2[0x839] = fVar24;
      fVar29 = (float)FUN_ram_40000bd8(fVar26 / fVar29);
      param_2[0x83a] = fVar29;
      fVar25 = (float)FUN_ram_40000bd8(fVar26 / fVar25);
      fVar29 = DAT_ram_4009f378;
      param_2[0x83b] = fVar25;
      fVar25 = (float)FUN_ram_40000bd8(fVar26 / fVar29);
      fVar29 = DAT_ram_4009f258;
      param_2[0x83c] = fVar25;
      fVar29 = (float)FUN_ram_40000bd8(fVar26 / fVar29);
      param_2[0x83d] = fVar29;
      fVar25 = (float)FUN_ram_40000bd8(fVar26);
      fVar29 = DAT_ram_4009f51c;
      param_2[0x83e] = fVar25;
      fVar25 = (float)FUN_ram_40000bd8(fVar26 / fVar29);
      fVar29 = DAT_ram_4009f520;
      param_2[0x83f] = fVar25;
      fVar29 = (float)FUN_ram_40000bd8(fVar26 / fVar29);
      fVar26 = DAT_ram_4009f4ec;
      param_2[0x840] = fVar29;
      fVar29 = DAT_ram_4009f524;
      uVar11 = 0;
      if (0.0 <= fVar26 / fVar31) {
        fVar26 = fVar26 / fVar31 + DAT_ram_4009675c;
        uVar20 = (uint)(-1 < (int)fVar26) * (int)fVar26;
        if (0xffff < uVar20) {
          uVar20 = 0xffff;
        }
        uVar11 = (undefined2)uVar20;
      }
      uVar21 = 0;
      if (0.0 <= DAT_ram_40099f90 / fVar31) {
        fVar31 = DAT_ram_40099f90 / fVar31 + DAT_ram_4009675c;
        uVar20 = (uint)(-1 < (int)fVar31) * (int)fVar31;
        if (0xffff < uVar20) {
          uVar20 = 0xffff;
        }
        uVar21 = (undefined2)uVar20;
      }
      fVar31 = DAT_ram_4009f528 / fVar27;
      *(undefined2 *)((int)param_2 + 0x20d2) = uVar11;
      param_2[0x841] = fVar29;
      *(undefined2 *)(param_2 + 0x835) = uVar21;
      param_2[0x842] = 0.0;
      fVar26 = (float)FUN_ram_40000bd8(fVar31);
      fVar31 = DAT_ram_4009f52c;
      param_2[0x836] = fVar26;
      fVar27 = (float)FUN_ram_40000bd8(fVar31 / fVar27);
      param_2[0x837] = fVar27;
    }
    uVar3 = DAT_ram_4009f530;
    fVar27 = DAT_ram_40099f38;
    uVar22 = (ulonglong)(uint)DAT_ram_4009f098;
    *(ulonglong *)(param_2 + 0x13) = uVar22;
    fVar26 = DAT_ram_4009f290;
    *(ulonglong *)(param_2 + 0x14) = uVar22;
    param_2[0x1c] = fVar26;
    *(undefined1 *)((int)param_2 + 0x46) = 0;
    param_2[0x1a] = 0.0;
    param_2[0x1b] = 0.0;
    *(undefined2 *)(param_2 + 0x1d) = 0;
    uVar32 = FUN_ram_40000d44(fVar27,uVar3);
    fVar31 = DAT_ram_4009a330;
    uVar22 = (ulonglong)DAT_ram_4009f534;
    fVar27 = param_2[0x841];
    *(ulonglong *)(param_2 + 0x15) = uVar22;
    *(undefined8 *)(param_2 + 0x17) = uVar32;
    *(ulonglong *)(param_2 + 0x16) = uVar22;
    *(undefined8 *)(param_2 + 0x18) = uVar32;
    param_2[0x84b] = fVar26;
    param_2[0x843] = 0.0;
    param_2[0x844] = 0.0;
    param_2[0x845] = 0.0;
    param_2[0x846] = 0.0;
    param_2[0x847] = 0.0;
    param_2[0x848] = fVar31;
    param_2[0x849] = 0.0;
    param_2[0x84a] = 0.0;
    param_2[0x84d] = 0.0;
    *(undefined1 *)(param_2 + 0x84e) = 0;
    param_2[0x84f] = fVar27;
    param_2[0x850] = fVar27;
    param_2[0x851] = fVar27;
    *(undefined2 *)(param_2 + 0x84c) = 0;
    param_1 = FUN_ram_4005ff48(param_2 + 0x81e);
    uVar20 = param_9;
    goto LAB_ram_400697c4;
  }
LAB_ram_400697d0:
  fVar27 = DAT_ram_40099f38;
  fVar31 = DAT_ram_4009a4f4;
  if (param_8 == (float *)0x0) {
    uVar38 = (ulonglong)DAT_ram_40099f94;
    uVar22 = (ulonglong)DAT_ram_4009f550;
    uVar36 = (ulonglong)DAT_ram_4009a584;
  }
  else {
    fVar26 = *param_8;
    uVar38 = (ulonglong)(uint)fVar26;
    if (fVar26 < 0.0) {
      uVar22 = (ulonglong)(uint)DAT_ram_4009a334;
      uVar38 = 0;
    }
    else if (fVar23 < fVar26) {
      uVar22 = 0;
      uVar38 = (ulonglong)(uint)fVar23;
    }
    else {
      uVar22 = (ulonglong)(uint)(fVar26 * DAT_ram_40096780 + DAT_ram_4009a334);
    }
    if (uVar20 == 0) {
      fVar31 = param_8[1];
      uVar36 = (ulonglong)(uint)fVar31;
      if (fVar31 < 0.0) {
        uVar36 = 0;
        fVar31 = DAT_ram_40099f7c;
      }
      else if (fVar23 < fVar31) {
        uVar36 = (ulonglong)(uint)fVar23;
        fVar31 = DAT_ram_40096780;
      }
      else {
        fVar31 = fVar31 * DAT_ram_4009a364 + DAT_ram_40099f7c;
      }
    }
    else {
      uVar36 = (ulonglong)DAT_ram_4009a584;
    }
  }
  fVar26 = *param_2;
  fVar29 = (float)uVar22;
  if ((DAT_ram_4009f094 < ABS((float)uVar38 - (float)*(undefined8 *)(param_2 + 2))) ||
     (DAT_ram_4009f094 < ABS((float)uVar36 - (float)*(undefined8 *)(param_2 + 3)))) {
    *(ulonglong *)(param_2 + 2) = uVar38;
    *(ulonglong *)(param_2 + 3) = uVar36;
    fVar25 = DAT_ram_40099f38;
    fVar27 = DAT_ram_4009678c;
    fVar24 = DAT_ram_4009f554;
    if (fVar23 < fVar26) {
      fVar27 = fVar26;
      fVar24 = fVar23 / fVar26;
    }
    *(ulonglong *)(param_2 + 6) = uVar22;
    uVar32 = FUN_ram_40000d44(fVar25,fVar29 / fVar25);
    *(undefined8 *)(param_2 + 7) = uVar32;
    fVar40 = DAT_ram_40099f28;
    fVar26 = DAT_ram_4009675c;
    uVar36 = (ulonglong)(uint)fVar23;
    fVar30 = (float)*(undefined8 *)(param_2 + 0x19);
    if (0.0 <= fVar30) {
      if (DAT_ram_4009f578 < fVar30) {
        uVar36 = (ulonglong)DAT_ram_4009f558;
      }
      else {
        uVar36 = (ulonglong)(uint)(fVar23 - fVar30);
      }
    }
    fVar30 = fVar27 * DAT_ram_4009a4f4;
    *(ulonglong *)(param_2 + 0xc) = uVar36;
    fVar30 = (float)FUN_ram_40000d44(fVar26,fVar40 / fVar30);
    *(ulonglong *)(param_2 + 8) = (ulonglong)(uint)fVar30;
    *(ulonglong *)(param_2 + 9) = (ulonglong)(uint)(fVar23 - fVar30);
    uVar36 = FUN_ram_40000d44(fVar26,fVar40 / (fVar27 * fVar31));
    fVar31 = DAT_ram_40099f78;
    *(ulonglong *)(param_2 + 10) = uVar36;
    param_2[0xb] = fVar23 - (float)uVar36;
    fVar40 = DAT_ram_4009f370;
    fVar26 = DAT_ram_40099f6c;
    if (fVar31 < fVar29) {
      fVar33 = (fVar31 - fVar29) * DAT_ram_4009f57c * (fVar31 - fVar29);
      fVar30 = fVar33 / DAT_ram_40099f6c;
      param_2[0xd] = fVar33;
      *(ulonglong *)(param_2 + 0xf) = (ulonglong)(uint)(fVar30 * fVar24);
      param_2[0xe] = (-fVar33 / fVar40) * fVar24;
      if (0.0 <= fVar33) {
        uVar38 = 0;
      }
      else {
        uVar38 = (ulonglong)(uint)(DAT_ram_4009f580 / (0.0 - fVar33));
      }
    }
    else {
      uVar38 = 0;
      fVar33 = 0.0;
      fVar40 = fVar24 * DAT_ram_4009f590;
      param_2[0xd] = 0.0;
      param_2[0xe] = 0.0;
      *(ulonglong *)(param_2 + 0xe) = (ulonglong)(uint)fVar40;
      param_2[0xf] = fVar24 * 0.0;
    }
    fVar27 = fVar27 * fVar26;
    *(ulonglong *)(param_2 + 0x10) = uVar38;
    uVar17 = (uint)(-1 < (int)fVar27) * (int)fVar27;
    uVar17 = uVar17 + ((float)uVar17 < fVar27);
    uVar12 = 1;
    if (uVar17 != 0) {
      uVar12 = uVar17;
    }
    uVar11 = (short)uVar12;
    if (0xffff < uVar17) {
      uVar11 = 0xffff;
    }
    *(undefined2 *)(param_2 + 0x11) = uVar11;
    fVar26 = DAT_ram_4009f584;
    fVar27 = DAT_ram_4009f57c;
    if ((*(char *)((int)param_2 + 0x46) == '\0') ||
       (DAT_ram_40096750 < ABS((float)*(undefined8 *)(param_2 + 0x12) - fVar29))) {
      pfVar4 = param_2 + 0x41e;
      do {
        while (fVar31 < fVar29) {
          fVar24 = fVar31 - fVar29;
          pfVar18 = pfVar4 + 1;
          fVar31 = fVar31 + fVar26;
          *pfVar4 = fVar24 * fVar27 * fVar24;
          pfVar4 = pfVar18;
          if (pfVar18 == param_2 + 0x81e) goto LAB_ram_4006a0b2;
        }
        *pfVar4 = 0.0;
        pfVar4 = pfVar4 + 1;
        fVar31 = fVar31 + fVar26;
      } while (param_2 + 0x81e != pfVar4);
LAB_ram_4006a0b2:
      if (fVar33 < 0.0) {
        fVar31 = (float)FUN_ram_40000d44(fVar25,-((0.0 - fVar33) / DAT_ram_4009f580) / fVar25);
        pfVar4 = param_2 + 0x41d;
        fVar27 = fVar23;
        do {
          *(ulonglong *)pfVar4 = (ulonglong)(uint)fVar27;
          pfVar4 = pfVar4 + -1;
          fVar27 = fVar27 * fVar31;
        } while (param_2 + 0x1d != pfVar4);
LAB_ram_4006ac58:
        uVar36 = *(ulonglong *)(param_2 + 10);
        *(ulonglong *)(param_2 + 0x41d) = (ulonglong)(uint)DAT_ram_4009672c;
      }
      else {
        uVar38 = (ulonglong)(uint)DAT_ram_4009672c;
        pfVar4 = param_2 + 0x1e;
        do {
          *(ulonglong *)pfVar4 = uVar38;
          pfVar4 = pfVar4 + 1;
        } while (param_2 + 0x41e != pfVar4);
      }
      goto LAB_ram_4006a0dc;
    }
LAB_ram_4006a0ec:
    fVar26 = *param_2;
  }
  else if (*(char *)((int)param_2 + 0x46) == '\0') {
    fVar25 = DAT_ram_4009678c;
    fVar24 = DAT_ram_4009f554;
    if (fVar23 < fVar26) {
      fVar25 = fVar26;
      fVar24 = fVar23 / fVar26;
    }
    *(ulonglong *)(param_2 + 6) = uVar22;
    uVar32 = FUN_ram_40000d44(fVar27,fVar29 / fVar27);
    *(undefined8 *)(param_2 + 7) = uVar32;
    fVar40 = DAT_ram_40099f28;
    fVar26 = DAT_ram_4009675c;
    uVar36 = (ulonglong)(uint)fVar23;
    fVar30 = (float)*(undefined8 *)(param_2 + 0x19);
    if (0.0 <= fVar30) {
      if (DAT_ram_4009f578 < fVar30) {
        uVar36 = (ulonglong)DAT_ram_4009f558;
      }
      else {
        uVar36 = (ulonglong)(uint)(fVar23 - fVar30);
      }
    }
    fVar30 = fVar25 * DAT_ram_4009a4f4;
    *(ulonglong *)(param_2 + 0xc) = uVar36;
    fVar30 = (float)FUN_ram_40000d44(fVar26,fVar40 / fVar30);
    *(ulonglong *)(param_2 + 8) = (ulonglong)(uint)fVar30;
    *(ulonglong *)(param_2 + 9) = (ulonglong)(uint)(fVar23 - fVar30);
    uVar36 = FUN_ram_40000d44(fVar26,fVar40 / (fVar25 * fVar31));
    fVar31 = DAT_ram_40099f78;
    *(ulonglong *)(param_2 + 10) = uVar36;
    param_2[0xb] = fVar23 - (float)uVar36;
    fVar40 = DAT_ram_4009f370;
    fVar26 = DAT_ram_40099f6c;
    if (fVar31 < fVar29) {
      fVar33 = (fVar31 - fVar29) * DAT_ram_4009f57c * (fVar31 - fVar29);
      fVar30 = fVar33 / DAT_ram_40099f6c;
      param_2[0xd] = fVar33;
      *(ulonglong *)(param_2 + 0xf) = (ulonglong)(uint)(fVar30 * fVar24);
      param_2[0xe] = (-fVar33 / fVar40) * fVar24;
      if (0.0 <= fVar33) {
        uVar38 = 0;
      }
      else {
        uVar38 = (ulonglong)(uint)(DAT_ram_4009f580 / (0.0 - fVar33));
      }
    }
    else {
      uVar38 = 0;
      fVar33 = 0.0;
      fVar40 = fVar24 * DAT_ram_4009f590;
      param_2[0xd] = 0.0;
      param_2[0xe] = 0.0;
      *(ulonglong *)(param_2 + 0xe) = (ulonglong)(uint)fVar40;
      param_2[0xf] = fVar24 * 0.0;
    }
    fVar25 = fVar25 * fVar26;
    *(ulonglong *)(param_2 + 0x10) = uVar38;
    uVar17 = (uint)(-1 < (int)fVar25) * (int)fVar25;
    uVar17 = uVar17 + ((float)uVar17 < fVar25);
    uVar12 = 1;
    if (uVar17 != 0) {
      uVar12 = uVar17;
    }
    uVar11 = (undefined2)uVar12;
    if (0xffff < uVar17) {
      uVar11 = 0xffff;
    }
    *(undefined2 *)(param_2 + 0x11) = uVar11;
    fVar25 = DAT_ram_4009f584;
    fVar26 = DAT_ram_4009f57c;
    if ((*(char *)((int)param_2 + 0x46) != '\0') &&
       (ABS((float)*(undefined8 *)(param_2 + 0x12) - fVar29) <= DAT_ram_40096750))
    goto LAB_ram_4006a0ec;
    pfVar4 = param_2 + 0x41e;
    do {
      while (fVar31 < fVar29) {
        fVar24 = fVar31 - fVar29;
        pfVar18 = pfVar4 + 1;
        fVar31 = fVar31 + fVar25;
        *pfVar4 = fVar24 * fVar26 * fVar24;
        pfVar4 = pfVar18;
        if (pfVar18 == param_2 + 0x81e) goto LAB_ram_4006adc0;
      }
      *pfVar4 = 0.0;
      pfVar4 = pfVar4 + 1;
      fVar31 = fVar31 + fVar25;
    } while (param_2 + 0x81e != pfVar4);
LAB_ram_4006adc0:
    if (fVar33 < 0.0) {
      fVar31 = (float)FUN_ram_40000d44(fVar27,-((0.0 - fVar33) / DAT_ram_4009f580) / fVar27);
      pfVar4 = param_2 + 0x41d;
      fVar27 = fVar23;
      do {
        *(ulonglong *)pfVar4 = (ulonglong)(uint)fVar27;
        pfVar4 = pfVar4 + -1;
        fVar27 = fVar27 * fVar31;
      } while (param_2 + 0x1d != pfVar4);
      goto LAB_ram_4006ac58;
    }
    uVar38 = (ulonglong)(uint)DAT_ram_4009672c;
    pfVar4 = param_2 + 0x1e;
    do {
      *(ulonglong *)pfVar4 = uVar38;
      pfVar4 = pfVar4 + 1;
    } while (param_2 + 0x41e != pfVar4);
LAB_ram_4006a0dc:
    fVar26 = *param_2;
    *(undefined1 *)((int)param_2 + 0x46) = 1;
    *(ulonglong *)(param_2 + 0x12) = uVar22;
  }
  else {
    uVar36 = *(ulonglong *)(param_2 + 10);
  }
  fVar7 = DAT_ram_4009f58c;
  fVar35 = DAT_ram_4009f588;
  fVar28 = DAT_ram_4009f580;
  fVar34 = DAT_ram_4009f098;
  fVar33 = DAT_ram_40099f28;
  fVar30 = DAT_ram_40096778;
  fVar40 = DAT_ram_4009675c;
  uVar38 = *(ulonglong *)(param_2 + 0x15);
  uVar22 = *(ulonglong *)(param_2 + 0x17);
  uVar6 = *(ushort *)(param_2 + 0x1c);
  cVar5 = *(char *)(param_2 + 0x1d);
  fVar24 = param_2[8];
  fVar25 = param_2[9];
  fVar27 = param_2[0xc];
  fVar31 = param_2[0xd];
  uVar32 = *(undefined8 *)(param_2 + 0xe);
  fVar29 = param_2[0xf];
  fVar9 = DAT_ram_4009f554;
  if (fVar23 < fVar26) {
    fVar9 = fVar23 / fVar26;
  }
  pfVar18 = param_3 + param_7;
  fVar26 = param_2[0x13];
  pfVar4 = param_5;
  do {
    fVar37 = (float)*(undefined8 *)param_3;
    fVar16 = fVar23;
    if (fVar37 * fVar37 <= fVar26) {
      if (fVar34 <= in_register_00000100) goto LAB_ram_40069916;
LAB_ram_40069f0c:
      fVar39 = param_2[0x41e];
      if (cVar5 != '\x01') goto LAB_ram_40069996;
LAB_ram_40069f14:
      if (fVar39 < 0.0) {
        if (uVar6 == 0xffff) {
          uVar38 = 0;
          cVar5 = '\0';
        }
        else {
          uVar6 = uVar6 + 1;
          uVar38 = 0;
          cVar5 = uVar6 < *(ushort *)(param_2 + 0x11);
        }
      }
      else {
        uVar38 = 0;
        uVar6 = 0;
      }
    }
    else {
      if (in_register_00000100 < fVar34) goto LAB_ram_40069f0c;
LAB_ram_40069916:
      if (fVar33 < in_register_00000100) {
LAB_ram_40069f2e:
        fVar39 = param_2[0x81d];
      }
      else {
        if (in_register_00000100 <= fVar34) goto LAB_ram_40069f0c;
        if (fVar23 <= in_register_00000100) goto LAB_ram_40069f2e;
        fVar26 = ((float)((uint)in_register_00000100 & 0x7fffff) * fVar30 +
                  (float)(int)(((uint)ABS(in_register_00000100) >> 0x17) - 0x7f) + fVar35) * fVar7 *
                 fVar28;
        if (fVar26 < 0.0) goto LAB_ram_40069f0c;
        if (fVar28 < fVar26) goto LAB_ram_40069f2e;
        if (fVar26 <= 0.0) goto LAB_ram_40069f0c;
        if (fVar28 <= fVar26) goto LAB_ram_40069f2e;
        uVar17 = (uint)(-1 < (int)fVar26) * (int)fVar26;
        fVar39 = param_2[uVar17 + 0x41e];
        fVar39 = (fVar26 - (float)uVar17) * ((param_2 + uVar17 + 0x41e)[1] - fVar39) + fVar39;
      }
      if (cVar5 == '\x01') goto LAB_ram_40069f14;
LAB_ram_40069996:
      fVar26 = (float)uVar38;
      if (fVar39 <= fVar26) {
        if (fVar39 < fVar26) {
          fVar39 = (fVar39 - fVar26) * fVar40;
          fVar41 = fVar29;
          if ((fVar29 <= fVar39) && (fVar41 = fVar39, 0.0 < fVar39)) {
            fVar41 = 0.0;
          }
          uVar38 = (ulonglong)(uint)(fVar26 + fVar41);
          if (fVar26 + fVar41 < fVar31) {
            uVar38 = (ulonglong)(uint)fVar31;
          }
        }
      }
      else {
        fVar39 = (fVar39 - fVar26) * fVar40;
        if (fVar39 < 0.0) {
          fVar39 = 0.0;
        }
        else if ((float)uVar32 < fVar39) {
          fVar39 = (float)uVar32;
        }
        uVar38 = (ulonglong)(uint)(fVar26 + fVar39);
        if (0.0 <= fVar26 + fVar39) {
          uVar38 = 0;
          cVar5 = '\x01';
          uVar6 = 0;
          goto LAB_ram_400699d0;
        }
      }
      fVar26 = (float)uVar38;
      if (fVar26 < 0.0) {
        if ((fVar26 <= (float)*(undefined8 *)(param_2 + 0xd)) ||
           (fVar26 = (fVar26 - (float)*(undefined8 *)(param_2 + 0xd)) * param_2[0x10], fVar26 <= 0.0
           )) {
          fVar16 = (float)*(undefined8 *)(param_2 + 0x1e);
        }
        else if (fVar28 <= fVar26) {
          fVar16 = param_2[0x41d];
        }
        else {
          uVar17 = (uint)(-1 < (int)fVar26) * (int)fVar26;
          fVar16 = param_2[uVar17 + 0x1e];
          fVar16 = (fVar26 - (float)uVar17) * ((param_2 + uVar17 + 0x1e)[1] - fVar16) + fVar16;
        }
      }
    }
LAB_ram_400699d0:
    param_3 = param_3 + 1;
    fVar26 = fVar27 * (fVar16 - (float)uVar22) + (float)uVar22;
    uVar22 = (ulonglong)(uint)fVar26;
    *pfVar4 = fVar37 * fVar26;
    fVar26 = in_register_00000100;
    pfVar4 = pfVar4 + 1;
  } while (pfVar18 != param_3);
  param_2[0x13] = in_register_00000100;
  *(ulonglong *)(param_2 + 0x15) = uVar38;
  *(ulonglong *)(param_2 + 0x17) = uVar22;
  *(char *)(param_2 + 0x1d) = cVar5;
  *(ushort *)(param_2 + 0x1c) = uVar6;
  param_2[0x1a] = (float)uVar6 * fVar9;
  fVar30 = DAT_ram_4009f58c;
  fVar40 = DAT_ram_4009f588;
  fVar29 = DAT_ram_4009f580;
  fVar26 = DAT_ram_40099f28;
  fVar31 = DAT_ram_40096778;
  fVar27 = DAT_ram_4009675c;
  if (bVar8) {
    uVar38 = *(ulonglong *)(param_2 + 0x16);
    uVar22 = *(ulonglong *)(param_2 + 0x18);
    uVar6 = *(ushort *)((int)param_2 + 0x72);
    cVar5 = *(char *)((int)param_2 + 0x75);
    fVar24 = param_2[10];
    fVar25 = param_2[0xb];
    fVar33 = param_2[0xc];
    fVar28 = param_2[0xd];
    fVar35 = param_2[0xe];
    fVar7 = param_2[0xf];
    fVar9 = DAT_ram_4009f554;
    if (fVar23 < *param_2) {
      fVar9 = fVar23 / *param_2;
    }
    pfVar18 = param_4 + param_7;
    pfVar4 = param_6;
    fVar16 = param_2[0x14];
    do {
      fVar37 = *param_4;
      uVar36 = (ulonglong)(uint)fVar16;
      fVar39 = fVar23;
      if (fVar37 * fVar37 <= fVar16) {
        if (fVar34 <= in_register_00000100) goto LAB_ram_4006a300;
LAB_ram_4006a460:
        fVar41 = param_2[0x41e];
        if (cVar5 != '\x01') goto LAB_ram_4006a37e;
LAB_ram_4006a468:
        if (fVar41 < 0.0) {
          if (uVar6 == 0xffff) {
            uVar38 = 0;
            cVar5 = '\0';
          }
          else {
            uVar6 = uVar6 + 1;
            uVar38 = 0;
            cVar5 = uVar6 < *(ushort *)(param_2 + 0x11);
          }
        }
        else {
          uVar38 = 0;
          uVar6 = 0;
        }
      }
      else {
        if (in_register_00000100 < fVar34) goto LAB_ram_4006a460;
LAB_ram_4006a300:
        if (fVar26 < in_register_00000100) {
LAB_ram_4006a4a2:
          fVar41 = param_2[0x81d];
        }
        else {
          if (in_register_00000100 <= fVar34) goto LAB_ram_4006a460;
          if (fVar23 <= in_register_00000100) goto LAB_ram_4006a4a2;
          fVar16 = (float)(int)(((uint)ABS(in_register_00000100) >> 0x17) - 0x7f);
          uVar36 = (ulonglong)(uint)fVar16;
          fVar16 = ((float)((uint)in_register_00000100 & 0x7fffff) * fVar31 + fVar16 + fVar40) *
                   fVar30 * fVar29;
          if (fVar16 < 0.0) goto LAB_ram_4006a460;
          if (fVar29 < fVar16) goto LAB_ram_4006a4a2;
          if (fVar16 <= 0.0) goto LAB_ram_4006a460;
          if (fVar29 <= fVar16) goto LAB_ram_4006a4a2;
          uVar17 = (uint)(-1 < (int)fVar16) * (int)fVar16;
          fVar41 = param_2[uVar17 + 0x41e];
          fVar42 = (float)*(undefined8 *)(param_2 + uVar17 + 0x41e + 1) - fVar41;
          uVar36 = (ulonglong)(uint)fVar42;
          fVar41 = (fVar16 - (float)uVar17) * fVar42 + fVar41;
        }
        if (cVar5 == '\x01') goto LAB_ram_4006a468;
LAB_ram_4006a37e:
        fVar16 = (float)uVar38;
        if (fVar41 <= fVar16) {
          if (fVar41 < fVar16) {
            fVar41 = (fVar41 - fVar16) * fVar27;
            fVar42 = fVar7;
            if ((fVar7 <= fVar41) && (fVar42 = fVar41, 0.0 < fVar41)) {
              fVar42 = 0.0;
            }
            uVar38 = (ulonglong)(uint)(fVar16 + fVar42);
            if (fVar16 + fVar42 < fVar28) {
              uVar38 = (ulonglong)(uint)fVar28;
            }
          }
        }
        else {
          fVar41 = (fVar41 - fVar16) * fVar27;
          if (fVar41 < 0.0) {
            fVar41 = 0.0;
          }
          else if (fVar35 < fVar41) {
            fVar41 = fVar35;
          }
          uVar38 = (ulonglong)(uint)(fVar16 + fVar41);
          if (0.0 <= fVar16 + fVar41) {
            uVar38 = 0;
            uVar6 = 0;
            cVar5 = '\x01';
            goto LAB_ram_4006a3b4;
          }
        }
        fVar16 = (float)uVar38;
        if (fVar16 < 0.0) {
          if ((float)*(undefined8 *)(param_2 + 0xd) < fVar16) {
            uVar36 = *(ulonglong *)(param_2 + 0x10);
            fVar16 = (fVar16 - (float)*(undefined8 *)(param_2 + 0xd)) * (float)uVar36;
            if (0.0 < fVar16) {
              if (fVar29 <= fVar16) {
                fVar39 = param_2[0x41d];
              }
              else {
                uVar17 = (uint)(-1 < (int)fVar16) * (int)fVar16;
                fVar39 = param_2[uVar17 + 0x1e];
                fVar41 = (float)*(undefined8 *)(param_2 + uVar17 + 0x1e + 1) - fVar39;
                uVar36 = (ulonglong)(uint)fVar41;
                fVar39 = (fVar16 - (float)uVar17) * fVar41 + fVar39;
              }
              goto LAB_ram_4006a3b4;
            }
          }
          fVar39 = (float)*(undefined8 *)(param_2 + 0x1e);
        }
      }
LAB_ram_4006a3b4:
      param_4 = param_4 + 1;
      fVar16 = fVar33 * (fVar39 - (float)uVar22) + (float)uVar22;
      uVar22 = (ulonglong)(uint)fVar16;
      *pfVar4 = fVar37 * fVar16;
      pfVar4 = pfVar4 + 1;
      fVar16 = in_register_00000100;
    } while (pfVar18 != param_4);
    param_2[0x14] = in_register_00000100;
    *(ulonglong *)(param_2 + 0x16) = uVar38;
    *(ulonglong *)(param_2 + 0x18) = uVar22;
    *(char *)((int)param_2 + 0x75) = cVar5;
    *(ushort *)((int)param_2 + 0x72) = uVar6;
    *(ulonglong *)(param_2 + 0x1b) = (ulonglong)(uint)((float)uVar6 * fVar9);
  }
  if (uVar20 != 2) {
    return uVar36;
  }
  if (param_8 == (float *)0x0) {
    fVar31 = 0.0;
    fVar27 = DAT_ram_4009f548;
    fVar26 = DAT_ram_40099f6c;
    fVar29 = DAT_ram_40099f88;
    fVar40 = DAT_ram_4009675c;
    fVar30 = DAT_ram_40099f5c;
LAB_ram_4006a744:
    fVar33 = fVar27 * DAT_ram_4009b134 + fVar23;
  }
  else {
    fVar33 = param_8[1];
    if (0.0 <= fVar33) {
      if (fVar23 < fVar33) {
        fVar33 = fVar23;
      }
    }
    else {
      fVar33 = 0.0;
    }
    fVar27 = param_8[2];
    if (0.0 <= fVar27) {
      if (fVar23 < fVar27) {
        fVar27 = fVar23;
      }
    }
    else {
      fVar27 = 0.0;
    }
    fVar31 = param_8[3];
    if (0.0 <= fVar31) {
      if (fVar23 < fVar31) {
        fVar31 = fVar23;
      }
    }
    else {
      fVar31 = 0.0;
    }
    fVar26 = param_8[4];
    if (0.0 <= fVar26) {
      if (fVar23 < fVar26) {
        fVar26 = fVar23;
      }
    }
    else {
      fVar26 = 0.0;
    }
    fVar29 = param_8[5];
    if (0.0 <= fVar29) {
      if (fVar23 < fVar29) {
        fVar29 = fVar23;
      }
    }
    else {
      fVar29 = 0.0;
    }
    fVar40 = param_8[6];
    if (0.0 <= fVar40) {
      if (fVar23 < fVar40) {
        fVar40 = fVar23;
      }
    }
    else {
      fVar40 = 0.0;
    }
    fVar30 = DAT_ram_4009a568;
    if ((0.0 <= fVar33) && (fVar30 = 0.0, fVar33 <= fVar23)) {
      fVar30 = fVar33 * DAT_ram_4009a564 + DAT_ram_4009a568;
    }
    fVar33 = fVar23;
    if ((0.0 <= fVar27) && (fVar33 = DAT_ram_40099f50, fVar27 <= fVar23)) goto LAB_ram_4006a744;
  }
  fVar27 = 0.0;
  if ((0.0 <= fVar31) && (fVar27 = DAT_ram_4009a328, fVar31 <= fVar23)) {
    fVar27 = fVar31 * DAT_ram_4009a328 + 0.0;
  }
  fVar31 = 0.0;
  if ((0.0 <= fVar26) && (fVar31 = DAT_ram_4009b128, fVar26 <= fVar23)) {
    fVar31 = fVar26 * DAT_ram_4009b128 + 0.0;
  }
  fVar26 = 0.0;
  if ((0.0 <= fVar29) && (fVar26 = DAT_ram_40099f28, fVar29 <= fVar23)) {
    fVar26 = fVar29 * DAT_ram_40099f28 + 0.0;
  }
  fVar29 = DAT_ram_4009a324;
  if ((0.0 <= fVar40) && (fVar29 = DAT_ram_4009a328, fVar40 <= fVar23)) {
    fVar29 = fVar40 * DAT_ram_4009b138 + DAT_ram_4009a324;
  }
  FUN_ram_4005ff6c(fVar30,fVar33,fVar27,fVar31,fVar26,fVar29,fVar24,fVar25,param_2 + 0x81e);
  param_4 = (float *)((uint)param_6 & -(uint)bVar8);
  param_3 = param_5;
  param_6 = param_4;
LAB_ram_40069bb6:
  uVar22 = FUN_ram_40060284(param_2 + 0x81e,param_3,param_4,param_5,param_6,param_7,bVar8,param_11);
  return uVar22;
}


