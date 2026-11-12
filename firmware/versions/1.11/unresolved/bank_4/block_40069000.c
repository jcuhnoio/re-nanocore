/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40069000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40069026.
 * REA evidence: ev_abf221fa3c8bfe6d77ad1922ed0e5c8d5036c9ce95263c7e1167b7192df08e8c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40069026(float param_1,float *param_2)

{
  undefined4 uVar1;
  float fVar2;
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
  float fVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  float fVar25;
  
  if (param_2 == (float *)0x0) {
    return;
  }
  memset(param_2,0,0x2148);
  fVar25 = DAT_ram_40094604;
  fVar21 = DAT_ram_4009a41c;
  fVar17 = DAT_ram_40094664;
  if (DAT_ram_40094604 < param_1) {
    fVar21 = DAT_ram_40094600 / (param_1 * DAT_ram_4009a420);
    fVar17 = param_1;
  }
  *(ulonglong *)param_2 = (ulonglong)(uint)fVar17;
  uVar22 = FUN_ram_40000bd8(fVar21);
  fVar21 = *param_2;
  uVar24 = (ulonglong)(uint)DAT_ram_40094600;
  uVar23 = (ulonglong)DAT_ram_4009462c;
  *(undefined8 *)(param_2 + 0x19) = uVar22;
  *(undefined1 *)(param_2 + 1) = 0;
  *(ulonglong *)(param_2 + 2) = uVar24;
  *(ulonglong *)(param_2 + 3) = uVar24;
  *(ulonglong *)(param_2 + 4) = uVar24;
  *(ulonglong *)(param_2 + 5) = uVar24;
  *(ulonglong *)(param_2 + 0x12) = uVar23;
  if (fVar21 <= fVar25) {
    uVar12 = 0x2c;
    fVar21 = DAT_ram_40094664;
    fVar17 = DAT_ram_4009a3f8;
    fVar20 = DAT_ram_4009a3f4;
    fVar19 = DAT_ram_4009a3f0;
  }
  else {
    fVar17 = fVar21 / DAT_ram_40094e80 + DAT_ram_40094634;
    uVar14 = (uint)(-1 < (int)fVar17) * (int)fVar17;
    uVar11 = 1;
    if (uVar14 != 0) {
      uVar11 = uVar14;
    }
    uVar13 = 0xffff;
    if (uVar14 < 0x10000) {
      uVar13 = uVar11;
    }
    uVar12 = (undefined2)uVar13;
    fVar17 = (float)(uVar13 & 0xffff) / fVar21;
    fVar20 = -fVar17;
    fVar19 = fVar20 / DAT_ram_4009a0b0;
  }
  *(undefined2 *)(param_2 + 0x834) = uVar12;
  fVar18 = (float)FUN_ram_40000bd8(fVar19);
  fVar19 = DAT_ram_4009a3fc;
  param_2[0x838] = fVar18;
  fVar16 = in_register_00000100;
  fVar19 = (float)FUN_ram_40000bd8(fVar20 / fVar19);
  fVar2 = DAT_ram_40099fa4;
  param_2[0x839] = fVar19;
  fVar19 = (float)FUN_ram_40000bd8(fVar20 / fVar2);
  fVar4 = DAT_ram_4009a148;
  param_2[0x83a] = fVar19;
  fVar19 = (float)FUN_ram_40000bd8(fVar20 / fVar4);
  fVar5 = DAT_ram_4009a258;
  param_2[0x83b] = fVar19;
  fVar19 = (float)FUN_ram_40000bd8(fVar20 / fVar5);
  fVar3 = DAT_ram_4009a138;
  param_2[0x83c] = fVar19;
  fVar19 = (float)FUN_ram_40000bd8(fVar20 / fVar3);
  param_2[0x83d] = fVar19;
  fVar19 = (float)FUN_ram_40000bd8(fVar20);
  fVar6 = DAT_ram_4009a400;
  param_2[0x83e] = fVar19;
  fVar19 = (float)FUN_ram_40000bd8(fVar20 / fVar6);
  fVar7 = DAT_ram_4009a404;
  param_2[0x83f] = fVar19;
  fVar20 = (float)FUN_ram_40000bd8(fVar20 / fVar7);
  fVar19 = DAT_ram_4009a3cc;
  param_2[0x840] = fVar20;
  fVar9 = DAT_ram_4009a40c;
  fVar8 = DAT_ram_4009a408;
  fVar18 = DAT_ram_40094ee8;
  fVar20 = fVar19 / fVar17;
  uVar12 = 0;
  if (0.0 <= fVar20) {
    fVar20 = fVar20 + DAT_ram_40094634;
    uVar14 = (uint)(-1 < (int)fVar20) * (int)fVar20;
    if (0xffff < uVar14) {
      uVar14 = 0xffff;
    }
    uVar12 = (undefined2)uVar14;
  }
  uVar15 = 0;
  if (0.0 <= DAT_ram_40094ee8 / fVar17) {
    fVar17 = DAT_ram_40094ee8 / fVar17 + DAT_ram_40094634;
    uVar14 = (uint)(-1 < (int)fVar17) * (int)fVar17;
    if (0xffff < uVar14) {
      uVar14 = 0xffff;
    }
    uVar15 = (undefined2)uVar14;
  }
  fVar17 = DAT_ram_4009a40c / fVar21;
  *(undefined2 *)(param_2 + 0x835) = uVar15;
  *(undefined2 *)((int)param_2 + 0x20d2) = uVar12;
  param_2[0x841] = fVar8;
  param_2[0x842] = 0.0;
  fVar20 = (float)FUN_ram_40000bd8(fVar17);
  fVar17 = DAT_ram_4009a410;
  param_2[0x836] = fVar20;
  fVar21 = (float)FUN_ram_40000bd8(fVar17 / fVar21);
  param_2[0x837] = fVar21;
  FUN_ram_40060322(*(undefined8 *)param_2,param_2 + 0x81e,2);
  if (*(short *)(param_2 + 0x834) == 0) {
    fVar21 = *param_2;
    if (fVar21 <= fVar25) {
      uVar12 = 0x2c;
      fVar25 = DAT_ram_4009a3f8;
      fVar20 = DAT_ram_4009a3f4;
      fVar21 = DAT_ram_4009a3f0;
    }
    else {
      fVar25 = fVar21 / DAT_ram_40094e80 + DAT_ram_40094634;
      uVar14 = (uint)(-1 < (int)fVar25) * (int)fVar25;
      uVar11 = 1;
      if (uVar14 != 0) {
        uVar11 = uVar14;
      }
      uVar13 = 0xffff;
      if (uVar14 < 0x10000) {
        uVar13 = uVar11;
      }
      uVar12 = (undefined2)uVar13;
      fVar25 = (float)(uVar13 & 0xffff) / fVar21;
      fVar20 = -fVar25;
      fVar16 = fVar21;
      fVar21 = fVar20 / DAT_ram_4009a0b0;
    }
    *(undefined2 *)(param_2 + 0x834) = uVar12;
    fVar21 = (float)FUN_ram_40000bd8(fVar21);
    param_2[0x838] = fVar21;
    fVar21 = (float)FUN_ram_40000bd8(fVar20 / in_register_00000100);
    param_2[0x839] = fVar21;
    fVar21 = (float)FUN_ram_40000bd8(fVar20 / fVar2);
    param_2[0x83a] = fVar21;
    fVar21 = (float)FUN_ram_40000bd8(fVar20 / fVar4);
    param_2[0x83b] = fVar21;
    fVar21 = (float)FUN_ram_40000bd8(fVar20 / fVar5);
    param_2[0x83c] = fVar21;
    fVar21 = (float)FUN_ram_40000bd8(fVar20 / fVar3);
    param_2[0x83d] = fVar21;
    fVar21 = (float)FUN_ram_40000bd8(fVar20);
    param_2[0x83e] = fVar21;
    fVar21 = (float)FUN_ram_40000bd8(fVar20 / fVar6);
    param_2[0x83f] = fVar21;
    fVar21 = (float)FUN_ram_40000bd8(fVar20 / fVar7);
    fVar19 = fVar19 / fVar25;
    param_2[0x840] = fVar21;
    fVar21 = DAT_ram_4009a408;
    uVar12 = 0;
    if (0.0 <= fVar19) {
      fVar19 = fVar19 + DAT_ram_40094634;
      uVar14 = (uint)(-1 < (int)fVar19) * (int)fVar19;
      if (0xffff < uVar14) {
        uVar14 = 0xffff;
      }
      uVar12 = (undefined2)uVar14;
    }
    uVar15 = 0;
    if (0.0 <= fVar18 / fVar25) {
      fVar25 = fVar18 / fVar25 + DAT_ram_40094634;
      uVar14 = (uint)(-1 < (int)fVar25) * (int)fVar25;
      if (0xffff < uVar14) {
        uVar14 = 0xffff;
      }
      uVar15 = (undefined2)uVar14;
    }
    *(undefined2 *)((int)param_2 + 0x20d2) = uVar12;
    *(undefined2 *)(param_2 + 0x835) = uVar15;
    param_2[0x841] = fVar21;
    param_2[0x842] = 0.0;
    fVar21 = (float)FUN_ram_40000bd8(fVar9 / fVar16);
    param_2[0x836] = fVar21;
    fVar21 = (float)FUN_ram_40000bd8(fVar17 / fVar16);
    param_2[0x837] = fVar21;
  }
  uVar10 = DAT_ram_4009a414;
  uVar1 = DAT_ram_40094e90;
  uVar23 = (ulonglong)DAT_ram_40099f9c;
  *(ulonglong *)(param_2 + 0x13) = uVar23;
  fVar25 = DAT_ram_4009a170;
  *(ulonglong *)(param_2 + 0x14) = uVar23;
  param_2[0x1c] = fVar25;
  *(undefined1 *)((int)param_2 + 0x46) = 0;
  param_2[0x1a] = 0.0;
  param_2[0x1b] = 0.0;
  *(undefined2 *)(param_2 + 0x1d) = 0;
  uVar22 = FUN_ram_40000d44(uVar1,uVar10);
  fVar17 = DAT_ram_40095280;
  uVar23 = (ulonglong)DAT_ram_4009a418;
  fVar21 = param_2[0x841];
  *(ulonglong *)(param_2 + 0x15) = uVar23;
  *(undefined8 *)(param_2 + 0x17) = uVar22;
  *(ulonglong *)(param_2 + 0x16) = uVar23;
  *(undefined8 *)(param_2 + 0x18) = uVar22;
  *(undefined1 *)(param_2 + 0x84e) = 0;
  param_2[0x84b] = fVar25;
  param_2[0x843] = 0.0;
  param_2[0x844] = 0.0;
  param_2[0x845] = 0.0;
  param_2[0x846] = 0.0;
  param_2[0x847] = 0.0;
  param_2[0x848] = fVar17;
  param_2[0x849] = 0.0;
  param_2[0x84a] = 0.0;
  param_2[0x84d] = 0.0;
  param_2[0x84f] = fVar21;
  param_2[0x850] = fVar21;
  param_2[0x851] = fVar21;
  *(undefined2 *)(param_2 + 0x84c) = 0;
  FUN_ram_4006015c(param_2 + 0x81e);
  return;
}


/* NanoCore 1.11, address 0x4006955e.
 * REA evidence: ev_07f4fcbc8009219720ef2c74d433153ebea76f01e3a94dc8218cd0eeb0c22d6e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006955e(ulonglong *param_1,int param_2)

{
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_40094eec;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_400954e0;
    }
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4006959e.
 * REA evidence: ev_b63f0d4011c562d3e1277efe432fb85f88a72e88833667a3e1255b8c3f6c3771
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4006959e(uint param_1)

{
  return param_1 & -(uint)(param_1 < 4);
}


/* NanoCore 1.11, address 0x400695aa.
 * REA evidence: ev_e9e24ef5c82b31e4064f033bc7199e7242520de4c9ebc2db5192b2eddac6a496
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400695aa(uint param_1)

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


/* NanoCore 1.11, address 0x400695cc.
 * REA evidence: ev_4ca3acc21ba6f662f2258161cec99539d354147015d5a1dee62ec5cc41cc9b77
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400695cc(ulonglong *param_1,uint param_2,uint param_3)

{
  if ((param_1 == (ulonglong *)0x0) || (param_2 == 0)) {
    return;
  }
  if (param_3 < 4) {
    memset(param_1,0,param_2 << 2);
    if (param_3 == 1) {
      *param_1 = (ulonglong)DAT_ram_40094634;
      if (param_2 == 1) {
        return;
      }
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009a424;
      return;
    }
    if (param_3 == 3) {
      *param_1 = (ulonglong)DAT_ram_4009a428;
      if (param_2 != 1) {
        *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009a42c;
        if (param_2 != 2) {
          *(undefined4 *)(param_1 + 1) = 0;
        }
        if (3 < param_2) {
          *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_40094ec4;
        }
      }
      if (4 < param_2) {
        param_1[2] = (ulonglong)DAT_ram_40094ee0;
      }
      if (param_2 < 6) {
        return;
      }
      *(ulonglong *)((int)param_1 + 0x14) = (ulonglong)DAT_ram_40094634;
      return;
    }
    *param_1 = (ulonglong)DAT_ram_40094eec;
    if (param_3 != 0) {
      if (param_3 != 2) {
        return;
      }
      if (param_2 != 1) {
        *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009a428;
        if (param_2 != 2) {
          param_1[1] = (ulonglong)DAT_ram_4009a42c;
        }
        if (3 < param_2) {
          *(undefined4 *)((int)param_1 + 0xc) = 0;
        }
      }
      if (4 < param_2) {
        param_1[2] = (ulonglong)DAT_ram_40094ec4;
      }
      if (5 < param_2) {
        *(ulonglong *)((int)param_1 + 0x14) = (ulonglong)DAT_ram_40094ee0;
      }
      if (param_2 < 7) {
        return;
      }
      param_1[3] = (ulonglong)DAT_ram_40094634;
      return;
    }
  }
  else {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_40094eec;
  }
  if (param_2 != 1) {
    *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_400954e0;
  }
  return;
}


/* NanoCore 1.11, address 0x40069704.
 * REA evidence: ev_568a16c2d840287138bd4a1b5c08759e972f2ff5b263a16dd127759c84292443
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_ram_40069704(ulonglong param_1,float *param_2,float *param_3,float *param_4,
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
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  ulonglong uVar35;
  float fVar36;
  ulonglong uVar37;
  float fVar38;
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
  fVar23 = DAT_ram_40094604;
  if (param_9 < 4) {
    if (param_9 != uVar20) goto LAB_ram_4006a0d2;
LAB_ram_40069790:
    fVar26 = DAT_ram_40099f98;
    if (uVar20 == 1) {
      if (param_8 == (float *)0x0) {
        if (DAT_ram_40099f98 < ABS(DAT_ram_40094634 - (float)*(undefined8 *)(param_2 + 4))) {
          uVar35 = (ulonglong)DAT_ram_4009a424;
          *(ulonglong *)(param_2 + 4) = (ulonglong)(uint)DAT_ram_40094634;
          fVar25 = 0.0;
LAB_ram_40069c36:
          param_2[0x842] = fVar25;
        }
        else {
          uVar35 = (ulonglong)DAT_ram_4009a424;
        }
      }
      else {
        fVar30 = *param_8;
        uVar22 = (ulonglong)(uint)fVar30;
        if (0.0 <= fVar30) {
          if (fVar23 < fVar30) {
            uVar22 = (ulonglong)(uint)fVar23;
          }
        }
        else {
          uVar22 = 0;
        }
        fVar30 = param_8[1];
        uVar35 = (ulonglong)(uint)fVar30;
        if (0.0 <= fVar30) {
          if (fVar23 < fVar30) {
            uVar35 = (ulonglong)(uint)fVar23;
          }
        }
        else {
          uVar35 = 0;
        }
        fVar30 = (float)uVar22;
        if (DAT_ram_40099f98 < ABS(fVar30 - (float)*(undefined8 *)(param_2 + 4))) {
          *(ulonglong *)(param_2 + 4) = uVar22;
          fVar25 = DAT_ram_40096000;
          if ((0.0 <= fVar30) && (fVar25 = DAT_ram_40094eb8, fVar30 <= fVar23)) {
            fVar25 = fVar30 * DAT_ram_40095280 + DAT_ram_40096000;
          }
          goto LAB_ram_40069c36;
        }
      }
      fVar25 = DAT_ram_40096004;
      fVar30 = DAT_ram_40094ea8;
      fVar28 = (float)uVar35;
      uVar6 = *(ushort *)(param_2 + 0x834);
      if (ABS(fVar28 - (float)*(undefined8 *)(param_2 + 5)) <= fVar26) goto LAB_ram_40069cb4;
      fVar26 = (float)*(undefined8 *)param_2;
      if ((float)*(undefined8 *)param_2 <= fVar23) {
        fVar26 = DAT_ram_40094664;
      }
      fVar24 = fVar23;
      if (uVar6 != 0) {
        fVar24 = (float)uVar6;
      }
      fVar42 = DAT_ram_4009a148;
      if ((fVar28 < 0.0) || (fVar42 = DAT_ram_40094ee8, fVar23 < fVar28)) {
        *(ulonglong *)(param_2 + 5) = uVar35;
LAB_ram_4006b042:
        if (fVar42 < DAT_ram_4009a430) {
          fVar42 = DAT_ram_4009a430;
        }
        param_1 = FUN_ram_40000bd8(-(fVar24 / fVar26) / fVar42);
        uVar6 = *(ushort *)(param_2 + 0x834);
      }
      else {
        *(ulonglong *)(param_2 + 5) = uVar35;
        param_1 = 0;
        fVar30 = fVar28 * fVar25 + fVar30;
        if (0.0 < fVar30) {
          fVar42 = fVar30 * DAT_ram_40099fa4;
          goto LAB_ram_4006b042;
        }
      }
      param_2[0x839] = (float)param_1;
LAB_ram_40069cb4:
      fVar29 = DAT_ram_40099f9c;
      fVar39 = DAT_ram_40094eb8;
      fVar42 = DAT_ram_40094e90;
      fVar24 = DAT_ram_40094e88;
      fVar30 = param_2[0x843];
      fVar25 = param_2[0x844];
      fVar26 = param_2[0x849];
      fVar28 = param_2[0x84a];
      uVar13 = *(ushort *)(param_2 + 0x84b);
      uVar10 = *(ushort *)(param_2 + 0x84c);
      if (uVar6 == 0) {
        uVar6 = 1;
      }
      iVar19 = 0;
      do {
        fVar33 = (float)*(undefined8 *)((int)param_3 + iVar19);
        fVar32 = fVar33;
        if ((bVar8) && (param_4 != (float *)0x0)) {
          fVar32 = (fVar33 + (float)*(undefined8 *)((int)param_4 + iVar19)) * DAT_ram_40094634;
        }
        fVar30 = (fVar23 - param_2[0x836]) * fVar32 + param_2[0x836] * fVar30;
        fVar25 = (fVar32 - fVar30) * (fVar23 - param_2[0x837]) + param_2[0x837] * fVar25;
        fVar32 = fVar25 * fVar25;
        fVar26 = fVar26 + fVar32;
        if (fVar28 < fVar32) {
          fVar28 = fVar32;
        }
        uVar13 = uVar13 + 1;
        fVar32 = (float)uVar10 * (fVar23 / (float)uVar6);
        if (fVar23 < fVar32) {
          fVar32 = fVar23;
        }
        if (uVar10 < uVar6) {
          uVar10 = uVar10 + 1;
        }
        fVar32 = (param_2[0x851] - param_2[0x850]) * fVar32 + param_2[0x850];
        *(ulonglong *)((int)param_5 + iVar19) = (ulonglong)(uint)(fVar32 * fVar33);
        if (((bVar8) && (param_4 != (float *)0x0)) && (param_6 != (float *)0x0)) {
          *(ulonglong *)((int)param_6 + iVar19) =
               (ulonglong)(uint)((float)*(undefined8 *)((int)param_4 + iVar19) * fVar32);
        }
        if (uVar6 <= uVar13) {
          fVar32 = fVar26 / (float)uVar13;
          if (fVar26 / (float)uVar13 < fVar29) {
            fVar32 = fVar29;
          }
          if (fVar28 < fVar29) {
            fVar28 = fVar29;
          }
          if (fVar32 <= param_2[0x845]) {
            fVar26 = param_2[0x839];
          }
          else {
            fVar26 = param_2[0x838];
          }
          fVar26 = param_2[0x845] * fVar26 + (fVar23 - fVar26) * fVar32;
          param_2[0x845] = fVar26;
          if (fVar28 <= param_2[0x846]) {
            fVar33 = param_2[0x83b];
          }
          else {
            fVar33 = param_2[0x83a];
          }
          param_2[0x846] = param_2[0x846] * fVar33 + (fVar23 - fVar33) * fVar28;
          if (fVar26 < fVar29) {
            fVar26 = fVar29;
          }
          fVar26 = (float)FUN_ram_40000cc4(fVar26);
          fVar26 = fVar26 * fVar42;
          fVar33 = param_2[0x846];
          if (param_2[0x846] < fVar29) {
            fVar33 = fVar29;
          }
          fVar27 = (float)FUN_ram_40000cc4(fVar33);
          fVar27 = fVar27 * fVar42;
          fVar33 = param_2[0x847];
          if ((param_2[0x84d] != 0.0) || (0.0 < fVar33)) {
            bVar2 = 0;
          }
          else {
            fVar33 = param_2[0x845];
            if (((float)DAT_ram_4009a440 < fVar26) || (DAT_ram_4009a440._4_4_ < fVar27)) {
              fVar33 = fVar33 * DAT_ram_4009a448;
              if (fVar33 < fVar29) {
                fVar33 = fVar29;
              }
              param_2[0x847] = fVar33;
              bVar2 = 1;
            }
            else {
              param_2[0x847] = fVar33;
              bVar2 = 0;
            }
          }
          if (fVar33 < fVar29) {
            fVar33 = fVar29;
          }
          param_1 = FUN_ram_40000cc4(fVar33);
          fVar33 = (float)param_1 * fVar42;
          cVar5 = *(char *)(param_2 + 0x84e);
          fVar7 = param_2[0x84d];
          bVar1 = (fVar33 + param_2[0x848] + fVar42) - param_2[0x842] < fVar27;
          fVar34 = fVar23;
          if (((fVar33 + fVar39) - param_2[0x842]) + fVar24 < fVar26) {
            fVar9 = (float)(uint)*(ushort *)(param_2 + 0x835);
            bVar1 = true;
            if ((uint)fVar9 <= (uint)fVar7) goto LAB_ram_4006adba;
LAB_ram_4006adda:
            sVar14 = *(short *)((int)param_2 + 0x20d2);
            cVar5 = '\x01';
          }
          else {
            fVar9 = (float)(uint)*(ushort *)(param_2 + 0x835);
            if ((uint)fVar7 < (uint)fVar9) {
              if ((bool)(bVar2 | bVar1)) goto LAB_ram_4006adda;
LAB_ram_4006aa34:
              if (param_2[0x845] <= param_2[0x847]) {
                fVar33 = param_2[0x83d];
              }
              else {
                fVar33 = param_2[0x83c];
              }
              param_2[0x847] = param_2[0x847] * fVar33 + (fVar23 - fVar33) * param_2[0x845];
              fVar28 = (float)FUN_ram_40000cc4(fVar28 / fVar32);
              fVar28 = fVar28 * fVar42;
              fVar32 = fVar39;
              if ((fVar39 <= fVar28) && (fVar32 = fVar28, (float)DAT_ram_40096074 < fVar28)) {
                fVar32 = (float)DAT_ram_40096074;
              }
              param_2[0x848] = param_2[0x83e] * param_2[0x848] + (fVar23 - param_2[0x83e]) * fVar32;
              fVar28 = param_2[0x847];
              if (param_2[0x847] < fVar29) {
                fVar28 = fVar29;
              }
              param_1 = FUN_ram_40000cc4(fVar28);
              fVar28 = (float)param_1 * fVar42;
              fVar16 = fVar28 + fVar24;
              if (((fVar28 + fVar39) - param_2[0x842]) + fVar24 < fVar26) {
                fVar7 = param_2[0x84d];
                if (((uint)fVar7 < (uint)*(ushort *)(param_2 + 0x835)) || (cVar5 == '\0'))
                goto LAB_ram_4006adda;
                sVar15 = *(short *)((int)param_2 + 0x212e);
                goto LAB_ram_4006afec;
              }
              fVar7 = param_2[0x84d];
              fVar9 = (float)(uint)*(ushort *)(param_2 + 0x835);
              bVar1 = (fVar28 + param_2[0x848] + fVar42) - param_2[0x842] < fVar27;
LAB_ram_4006aaf6:
              sVar15 = *(short *)((int)param_2 + 0x212e);
              if ((uint)fVar9 <= (uint)fVar7) goto LAB_ram_4006add2;
              if ((bool)(bVar2 | bVar1)) goto LAB_ram_4006adda;
              if (cVar5 == '\0') {
                sVar14 = 0;
                goto LAB_ram_4006ab14;
              }
LAB_ram_4006b018:
              sVar14 = 0;
              if (sVar15 != 0) {
                sVar14 = sVar15 + -1;
                goto LAB_ram_4006ab1e;
              }
            }
            else {
LAB_ram_4006adba:
              fVar16 = fVar33 + fVar24;
              if (fVar27 <= fVar33 + param_2[0x848] + fVar39) {
                if (fVar26 <= fVar33 + (float)DAT_ram_40099f5c) goto LAB_ram_4006aa34;
                goto LAB_ram_4006aaf6;
              }
              sVar15 = *(short *)((int)param_2 + 0x212e);
LAB_ram_4006add2:
              if (cVar5 != '\0') {
LAB_ram_4006afec:
                if (fVar16 <= fVar26) {
                  sVar14 = *(short *)((int)param_2 + 0x20d2);
                  goto LAB_ram_4006ab1e;
                }
                goto LAB_ram_4006b018;
              }
              sVar14 = sVar15;
              if (bVar1) goto LAB_ram_4006adda;
            }
LAB_ram_4006ab14:
            cVar5 = '\0';
            fVar34 = param_2[0x841];
          }
LAB_ram_4006ab1e:
          fVar32 = param_2[0x84f];
          if (fVar34 <= fVar32) {
            fVar33 = param_2[0x840];
          }
          else {
            fVar33 = param_2[0x83f];
          }
          param_2[0x850] = fVar32;
          fVar28 = 0.0;
          *(short *)((int)param_2 + 0x212e) = sVar14;
          fVar26 = 0.0;
          *(undefined2 *)(param_2 + 0x84c) = 0;
          fVar32 = fVar32 * fVar33 + (fVar23 - fVar33) * fVar34;
          *(char *)(param_2 + 0x84e) = cVar5;
          param_2[0x84d] = (float)((int)fVar7 + 1);
          uVar10 = 0;
          uVar13 = 0;
          param_2[0x851] = fVar32;
          param_2[0x84f] = fVar32;
        }
        iVar19 = iVar19 + 4;
        if (param_7 << 2 == iVar19) {
          param_2[0x843] = fVar30;
          param_2[0x844] = fVar25;
          param_2[0x849] = fVar26;
          param_2[0x84a] = fVar28;
          *(ushort *)(param_2 + 0x84b) = uVar13;
          *(ushort *)(param_2 + 0x84c) = uVar10;
          return param_1;
        }
      } while( true );
    }
    if (uVar20 != 3) goto LAB_ram_4006979c;
    if (param_8 == (float *)0x0) {
      fVar30 = 0.0;
      fVar26 = DAT_ram_4009a42c;
      fVar25 = DAT_ram_40094ec4;
      fVar28 = DAT_ram_40094ee0;
      fVar24 = DAT_ram_40094634;
      fVar42 = DAT_ram_40094eb4;
LAB_ram_4006ae1c:
      fVar39 = fVar26 * DAT_ram_40096008 + fVar23;
    }
    else {
      fVar39 = *param_8;
      if (fVar39 < 0.0) {
        fVar39 = 0.0;
      }
      else if (fVar23 < fVar39) {
        fVar39 = fVar23;
      }
      fVar26 = param_8[1];
      if (fVar26 < 0.0) {
        fVar26 = 0.0;
      }
      else if (fVar23 < fVar26) {
        fVar26 = fVar23;
      }
      fVar30 = param_8[2];
      if (fVar30 < 0.0) {
        fVar30 = 0.0;
      }
      else if (fVar23 < fVar30) {
        fVar30 = fVar23;
      }
      fVar25 = param_8[3];
      if (fVar25 < 0.0) {
        fVar25 = 0.0;
      }
      else if (fVar23 < fVar25) {
        fVar25 = fVar23;
      }
      fVar28 = param_8[4];
      if (fVar28 < 0.0) {
        fVar28 = 0.0;
      }
      else if (fVar23 < fVar28) {
        fVar28 = fVar23;
      }
      fVar24 = param_8[5];
      if (fVar24 < 0.0) {
        fVar24 = 0.0;
      }
      else if (fVar23 < fVar24) {
        fVar24 = fVar23;
      }
      fVar42 = DAT_ram_400954c4;
      if ((0.0 <= fVar39) && (fVar42 = 0.0, fVar39 <= fVar23)) {
        fVar42 = fVar39 * DAT_ram_400954c0 + DAT_ram_400954c4;
      }
      fVar39 = fVar23;
      if ((0.0 <= fVar26) && (fVar39 = DAT_ram_40094ea8, fVar26 <= fVar23)) goto LAB_ram_4006ae1c;
    }
    fVar26 = 0.0;
    if ((0.0 <= fVar30) && (fVar26 = DAT_ram_400952cc, fVar30 <= fVar23)) {
      fVar26 = fVar30 * DAT_ram_400952cc + 0.0;
    }
    fVar30 = 0.0;
    if ((0.0 <= fVar25) && (fVar30 = DAT_ram_4009600c, fVar25 <= fVar23)) {
      fVar30 = fVar25 * DAT_ram_4009600c + 0.0;
    }
    fVar25 = 0.0;
    if ((0.0 <= fVar28) && (fVar25 = DAT_ram_40094e80, fVar28 <= fVar23)) {
      fVar25 = fVar28 * DAT_ram_40094e80 + 0.0;
    }
    fVar28 = DAT_ram_400952d0;
    if ((0.0 <= fVar24) && (fVar28 = DAT_ram_400952cc, fVar24 <= fVar23)) {
      fVar28 = fVar24 * DAT_ram_40096010 + DAT_ram_400952d0;
    }
    FUN_ram_40060180(fVar42,fVar39,fVar26,fVar30,fVar25,fVar28,param_2 + 0x81e);
    if (param_10 == '\0' || (param_4 == (float *)0x0 || param_6 == (float *)0x0)) {
      param_4 = (float *)0x0;
      param_6 = (float *)0x0;
    }
    goto LAB_ram_40069b82;
  }
  if (uVar20 != 0) {
    param_9 = 0;
LAB_ram_4006a0d2:
    uVar22 = (ulonglong)DAT_ram_40094600;
    *(char *)(param_2 + 1) = (char)param_9;
    *(ulonglong *)(param_2 + 2) = uVar22;
    *(ulonglong *)(param_2 + 3) = uVar22;
    *(ulonglong *)(param_2 + 4) = uVar22;
    *(ulonglong *)(param_2 + 5) = uVar22;
    fVar23 = DAT_ram_40094604;
    if (*(short *)(param_2 + 0x834) == 0) {
      fVar26 = *param_2;
      if (fVar26 <= DAT_ram_40094604) {
        uVar11 = 0x2c;
        fVar26 = DAT_ram_40094664;
        fVar30 = DAT_ram_4009a3f8;
        fVar25 = DAT_ram_4009a3f4;
        fVar28 = DAT_ram_4009a3f0;
      }
      else {
        fVar30 = fVar26 / DAT_ram_40094e80 + DAT_ram_40094634;
        uVar20 = (uint)(-1 < (int)fVar30) * (int)fVar30;
        uVar17 = 1;
        if (uVar20 != 0) {
          uVar17 = uVar20;
        }
        uVar12 = 0xffff;
        if (uVar20 < 0x10000) {
          uVar12 = uVar17;
        }
        uVar11 = (undefined2)uVar12;
        fVar30 = (float)(uVar12 & 0xffff) / fVar26;
        fVar25 = -fVar30;
        fVar28 = fVar25 / DAT_ram_4009a0b0;
      }
      *(undefined2 *)(param_2 + 0x834) = uVar11;
      fVar24 = (float)FUN_ram_40000bd8(fVar28);
      fVar28 = DAT_ram_4009a3fc;
      param_2[0x838] = fVar24;
      fVar24 = (float)FUN_ram_40000bd8(fVar25 / fVar28);
      fVar28 = DAT_ram_40099fa4;
      param_2[0x839] = fVar24;
      fVar24 = (float)FUN_ram_40000bd8(fVar25 / fVar28);
      fVar28 = DAT_ram_4009a148;
      param_2[0x83a] = fVar24;
      fVar24 = (float)FUN_ram_40000bd8(fVar25 / fVar28);
      fVar28 = DAT_ram_4009a258;
      param_2[0x83b] = fVar24;
      fVar24 = (float)FUN_ram_40000bd8(fVar25 / fVar28);
      fVar28 = DAT_ram_4009a138;
      param_2[0x83c] = fVar24;
      fVar28 = (float)FUN_ram_40000bd8(fVar25 / fVar28);
      param_2[0x83d] = fVar28;
      fVar24 = (float)FUN_ram_40000bd8(fVar25);
      fVar28 = DAT_ram_4009a400;
      param_2[0x83e] = fVar24;
      fVar24 = (float)FUN_ram_40000bd8(fVar25 / fVar28);
      fVar28 = DAT_ram_4009a404;
      param_2[0x83f] = fVar24;
      fVar28 = (float)FUN_ram_40000bd8(fVar25 / fVar28);
      fVar25 = DAT_ram_4009a3cc;
      param_2[0x840] = fVar28;
      fVar28 = DAT_ram_4009a408;
      uVar11 = 0;
      if (0.0 <= fVar25 / fVar30) {
        fVar25 = fVar25 / fVar30 + DAT_ram_40094634;
        uVar20 = (uint)(-1 < (int)fVar25) * (int)fVar25;
        if (0xffff < uVar20) {
          uVar20 = 0xffff;
        }
        uVar11 = (undefined2)uVar20;
      }
      uVar21 = 0;
      if (0.0 <= DAT_ram_40094ee8 / fVar30) {
        fVar30 = DAT_ram_40094ee8 / fVar30 + DAT_ram_40094634;
        uVar20 = (uint)(-1 < (int)fVar30) * (int)fVar30;
        if (0xffff < uVar20) {
          uVar20 = 0xffff;
        }
        uVar21 = (undefined2)uVar20;
      }
      fVar30 = DAT_ram_4009a40c / fVar26;
      *(undefined2 *)((int)param_2 + 0x20d2) = uVar11;
      param_2[0x841] = fVar28;
      *(undefined2 *)(param_2 + 0x835) = uVar21;
      param_2[0x842] = 0.0;
      fVar25 = (float)FUN_ram_40000bd8(fVar30);
      fVar30 = DAT_ram_4009a410;
      param_2[0x836] = fVar25;
      fVar26 = (float)FUN_ram_40000bd8(fVar30 / fVar26);
      param_2[0x837] = fVar26;
    }
    uVar3 = DAT_ram_4009a414;
    fVar26 = DAT_ram_40094e90;
    uVar22 = (ulonglong)(uint)DAT_ram_40099f9c;
    *(ulonglong *)(param_2 + 0x13) = uVar22;
    fVar25 = DAT_ram_4009a170;
    *(ulonglong *)(param_2 + 0x14) = uVar22;
    param_2[0x1c] = fVar25;
    *(undefined1 *)((int)param_2 + 0x46) = 0;
    param_2[0x1a] = 0.0;
    param_2[0x1b] = 0.0;
    *(undefined2 *)(param_2 + 0x1d) = 0;
    uVar31 = FUN_ram_40000d44(fVar26,uVar3);
    fVar30 = DAT_ram_40095280;
    uVar22 = (ulonglong)DAT_ram_4009a418;
    fVar26 = param_2[0x841];
    *(ulonglong *)(param_2 + 0x15) = uVar22;
    *(undefined8 *)(param_2 + 0x17) = uVar31;
    *(ulonglong *)(param_2 + 0x16) = uVar22;
    *(undefined8 *)(param_2 + 0x18) = uVar31;
    param_2[0x84b] = fVar25;
    param_2[0x843] = 0.0;
    param_2[0x844] = 0.0;
    param_2[0x845] = 0.0;
    param_2[0x846] = 0.0;
    param_2[0x847] = 0.0;
    param_2[0x848] = fVar30;
    param_2[0x849] = 0.0;
    param_2[0x84a] = 0.0;
    param_2[0x84d] = 0.0;
    *(undefined1 *)(param_2 + 0x84e) = 0;
    param_2[0x84f] = fVar26;
    param_2[0x850] = fVar26;
    param_2[0x851] = fVar26;
    *(undefined2 *)(param_2 + 0x84c) = 0;
    param_1 = FUN_ram_4006015c(param_2 + 0x81e);
    uVar20 = param_9;
    goto LAB_ram_40069790;
  }
LAB_ram_4006979c:
  fVar26 = DAT_ram_40094e90;
  fVar30 = DAT_ram_40095450;
  if (param_8 == (float *)0x0) {
    uVar37 = (ulonglong)DAT_ram_40094eec;
    uVar22 = (ulonglong)DAT_ram_4009a434;
    uVar35 = (ulonglong)DAT_ram_400954e0;
  }
  else {
    fVar25 = *param_8;
    uVar37 = (ulonglong)(uint)fVar25;
    if (fVar25 < 0.0) {
      uVar22 = (ulonglong)(uint)DAT_ram_40095284;
      uVar37 = 0;
    }
    else if (fVar23 < fVar25) {
      uVar22 = 0;
      uVar37 = (ulonglong)(uint)fVar23;
    }
    else {
      uVar22 = (ulonglong)(uint)(fVar25 * DAT_ram_40094658 + DAT_ram_40095284);
    }
    if (uVar20 == 0) {
      fVar30 = param_8[1];
      uVar35 = (ulonglong)(uint)fVar30;
      if (fVar30 < 0.0) {
        uVar35 = 0;
        fVar30 = DAT_ram_40094ed4;
      }
      else if (fVar23 < fVar30) {
        uVar35 = (ulonglong)(uint)fVar23;
        fVar30 = DAT_ram_40094658;
      }
      else {
        fVar30 = fVar30 * DAT_ram_400952b4 + DAT_ram_40094ed4;
      }
    }
    else {
      uVar35 = (ulonglong)DAT_ram_400954e0;
    }
  }
  fVar25 = *param_2;
  fVar28 = (float)uVar22;
  if ((DAT_ram_40099f98 < ABS((float)uVar37 - (float)*(undefined8 *)(param_2 + 2))) ||
     (DAT_ram_40099f98 < ABS((float)uVar35 - (float)*(undefined8 *)(param_2 + 3)))) {
    *(ulonglong *)(param_2 + 2) = uVar37;
    *(ulonglong *)(param_2 + 3) = uVar35;
    fVar24 = DAT_ram_40094e90;
    fVar26 = DAT_ram_40094664;
    fVar42 = DAT_ram_4009a438;
    if (fVar23 < fVar25) {
      fVar26 = fVar25;
      fVar42 = fVar23 / fVar25;
    }
    *(ulonglong *)(param_2 + 6) = uVar22;
    uVar31 = FUN_ram_40000d44(fVar24,fVar28 / fVar24);
    *(undefined8 *)(param_2 + 7) = uVar31;
    fVar39 = DAT_ram_40094e80;
    fVar25 = DAT_ram_40094634;
    uVar35 = (ulonglong)(uint)fVar23;
    fVar29 = (float)*(undefined8 *)(param_2 + 0x19);
    if (0.0 <= fVar29) {
      if (DAT_ram_4009a44c < fVar29) {
        uVar35 = (ulonglong)DAT_ram_4009a43c;
      }
      else {
        uVar35 = (ulonglong)(uint)(fVar23 - fVar29);
      }
    }
    fVar29 = fVar26 * DAT_ram_40095450;
    *(ulonglong *)(param_2 + 0xc) = uVar35;
    fVar29 = (float)FUN_ram_40000d44(fVar25,fVar39 / fVar29);
    *(ulonglong *)(param_2 + 8) = (ulonglong)(uint)fVar29;
    *(ulonglong *)(param_2 + 9) = (ulonglong)(uint)(fVar23 - fVar29);
    uVar35 = FUN_ram_40000d44(fVar25,fVar39 / (fVar26 * fVar30));
    fVar30 = DAT_ram_40094ed0;
    *(ulonglong *)(param_2 + 10) = uVar35;
    param_2[0xb] = fVar23 - (float)uVar35;
    fVar39 = DAT_ram_4009a250;
    fVar25 = DAT_ram_40094ec4;
    if (fVar30 < fVar28) {
      fVar32 = (fVar30 - fVar28) * DAT_ram_4009a450 * (fVar30 - fVar28);
      fVar29 = fVar32 / DAT_ram_40094ec4;
      param_2[0xd] = fVar32;
      *(ulonglong *)(param_2 + 0xf) = (ulonglong)(uint)(fVar29 * fVar42);
      param_2[0xe] = (-fVar32 / fVar39) * fVar42;
      if (0.0 <= fVar32) {
        uVar37 = 0;
      }
      else {
        uVar37 = (ulonglong)(uint)(DAT_ram_4009a454 / (0.0 - fVar32));
      }
    }
    else {
      uVar37 = 0;
      fVar32 = 0.0;
      fVar39 = fVar42 * DAT_ram_4009a464;
      param_2[0xd] = 0.0;
      param_2[0xe] = 0.0;
      *(ulonglong *)(param_2 + 0xe) = (ulonglong)(uint)fVar39;
      param_2[0xf] = fVar42 * 0.0;
    }
    fVar26 = fVar26 * fVar25;
    *(ulonglong *)(param_2 + 0x10) = uVar37;
    uVar17 = (uint)(-1 < (int)fVar26) * (int)fVar26;
    uVar17 = uVar17 + ((float)uVar17 < fVar26);
    uVar12 = 1;
    if (uVar17 != 0) {
      uVar12 = uVar17;
    }
    uVar11 = (short)uVar12;
    if (0xffff < uVar17) {
      uVar11 = 0xffff;
    }
    *(undefined2 *)(param_2 + 0x11) = uVar11;
    fVar25 = DAT_ram_4009a458;
    fVar26 = DAT_ram_4009a450;
    if ((*(char *)((int)param_2 + 0x46) == '\0') ||
       (DAT_ram_40094628 < ABS((float)*(undefined8 *)(param_2 + 0x12) - fVar28))) {
      pfVar4 = param_2 + 0x41e;
      do {
        while (fVar30 < fVar28) {
          fVar42 = fVar30 - fVar28;
          pfVar18 = pfVar4 + 1;
          fVar30 = fVar30 + fVar25;
          *pfVar4 = fVar42 * fVar26 * fVar42;
          pfVar4 = pfVar18;
          if (pfVar18 == param_2 + 0x81e) goto LAB_ram_4006a072;
        }
        *pfVar4 = 0.0;
        pfVar4 = pfVar4 + 1;
        fVar30 = fVar30 + fVar25;
      } while (param_2 + 0x81e != pfVar4);
LAB_ram_4006a072:
      if (fVar32 < 0.0) {
        fVar30 = (float)FUN_ram_40000d44(fVar24,-((0.0 - fVar32) / DAT_ram_4009a454) / fVar24);
        pfVar4 = param_2 + 0x41d;
        fVar26 = fVar23;
        do {
          *(ulonglong *)pfVar4 = (ulonglong)(uint)fVar26;
          pfVar4 = pfVar4 + -1;
          fVar26 = fVar26 * fVar30;
        } while (param_2 + 0x1d != pfVar4);
LAB_ram_4006abdc:
        uVar35 = *(ulonglong *)(param_2 + 10);
        *(ulonglong *)(param_2 + 0x41d) = (ulonglong)(uint)DAT_ram_40094604;
      }
      else {
        uVar37 = (ulonglong)(uint)DAT_ram_40094604;
        pfVar4 = param_2 + 0x1e;
        do {
          *(ulonglong *)pfVar4 = uVar37;
          pfVar4 = pfVar4 + 1;
        } while (param_2 + 0x41e != pfVar4);
      }
      goto LAB_ram_4006a09c;
    }
LAB_ram_4006a0ac:
    fVar25 = *param_2;
  }
  else if (*(char *)((int)param_2 + 0x46) == '\0') {
    fVar24 = DAT_ram_40094664;
    fVar42 = DAT_ram_4009a438;
    if (fVar23 < fVar25) {
      fVar24 = fVar25;
      fVar42 = fVar23 / fVar25;
    }
    *(ulonglong *)(param_2 + 6) = uVar22;
    uVar31 = FUN_ram_40000d44(fVar26,fVar28 / fVar26);
    *(undefined8 *)(param_2 + 7) = uVar31;
    fVar39 = DAT_ram_40094e80;
    fVar25 = DAT_ram_40094634;
    uVar35 = (ulonglong)(uint)fVar23;
    fVar29 = (float)*(undefined8 *)(param_2 + 0x19);
    if (0.0 <= fVar29) {
      if (DAT_ram_4009a44c < fVar29) {
        uVar35 = (ulonglong)DAT_ram_4009a43c;
      }
      else {
        uVar35 = (ulonglong)(uint)(fVar23 - fVar29);
      }
    }
    fVar29 = fVar24 * DAT_ram_40095450;
    *(ulonglong *)(param_2 + 0xc) = uVar35;
    fVar29 = (float)FUN_ram_40000d44(fVar25,fVar39 / fVar29);
    *(ulonglong *)(param_2 + 8) = (ulonglong)(uint)fVar29;
    *(ulonglong *)(param_2 + 9) = (ulonglong)(uint)(fVar23 - fVar29);
    uVar35 = FUN_ram_40000d44(fVar25,fVar39 / (fVar24 * fVar30));
    fVar30 = DAT_ram_40094ed0;
    *(ulonglong *)(param_2 + 10) = uVar35;
    param_2[0xb] = fVar23 - (float)uVar35;
    fVar39 = DAT_ram_4009a250;
    fVar25 = DAT_ram_40094ec4;
    if (fVar30 < fVar28) {
      fVar32 = (fVar30 - fVar28) * DAT_ram_4009a450 * (fVar30 - fVar28);
      fVar29 = fVar32 / DAT_ram_40094ec4;
      param_2[0xd] = fVar32;
      *(ulonglong *)(param_2 + 0xf) = (ulonglong)(uint)(fVar29 * fVar42);
      param_2[0xe] = (-fVar32 / fVar39) * fVar42;
      if (0.0 <= fVar32) {
        uVar37 = 0;
      }
      else {
        uVar37 = (ulonglong)(uint)(DAT_ram_4009a454 / (0.0 - fVar32));
      }
    }
    else {
      uVar37 = 0;
      fVar32 = 0.0;
      fVar39 = fVar42 * DAT_ram_4009a464;
      param_2[0xd] = 0.0;
      param_2[0xe] = 0.0;
      *(ulonglong *)(param_2 + 0xe) = (ulonglong)(uint)fVar39;
      param_2[0xf] = fVar42 * 0.0;
    }
    fVar24 = fVar24 * fVar25;
    *(ulonglong *)(param_2 + 0x10) = uVar37;
    uVar17 = (uint)(-1 < (int)fVar24) * (int)fVar24;
    uVar17 = uVar17 + ((float)uVar17 < fVar24);
    uVar12 = 1;
    if (uVar17 != 0) {
      uVar12 = uVar17;
    }
    uVar11 = (undefined2)uVar12;
    if (0xffff < uVar17) {
      uVar11 = 0xffff;
    }
    *(undefined2 *)(param_2 + 0x11) = uVar11;
    fVar24 = DAT_ram_4009a458;
    fVar25 = DAT_ram_4009a450;
    if ((*(char *)((int)param_2 + 0x46) != '\0') &&
       (ABS((float)*(undefined8 *)(param_2 + 0x12) - fVar28) <= DAT_ram_40094628))
    goto LAB_ram_4006a0ac;
    pfVar4 = param_2 + 0x41e;
    do {
      while (fVar30 < fVar28) {
        fVar42 = fVar30 - fVar28;
        pfVar18 = pfVar4 + 1;
        fVar30 = fVar30 + fVar24;
        *pfVar4 = fVar42 * fVar25 * fVar42;
        pfVar4 = pfVar18;
        if (pfVar18 == param_2 + 0x81e) goto LAB_ram_4006ad44;
      }
      *pfVar4 = 0.0;
      pfVar4 = pfVar4 + 1;
      fVar30 = fVar30 + fVar24;
    } while (param_2 + 0x81e != pfVar4);
LAB_ram_4006ad44:
    if (fVar32 < 0.0) {
      fVar30 = (float)FUN_ram_40000d44(fVar26,-((0.0 - fVar32) / DAT_ram_4009a454) / fVar26);
      pfVar4 = param_2 + 0x41d;
      fVar26 = fVar23;
      do {
        *(ulonglong *)pfVar4 = (ulonglong)(uint)fVar26;
        pfVar4 = pfVar4 + -1;
        fVar26 = fVar26 * fVar30;
      } while (param_2 + 0x1d != pfVar4);
      goto LAB_ram_4006abdc;
    }
    uVar37 = (ulonglong)(uint)DAT_ram_40094604;
    pfVar4 = param_2 + 0x1e;
    do {
      *(ulonglong *)pfVar4 = uVar37;
      pfVar4 = pfVar4 + 1;
    } while (param_2 + 0x41e != pfVar4);
LAB_ram_4006a09c:
    fVar25 = *param_2;
    *(undefined1 *)((int)param_2 + 0x46) = 1;
    *(ulonglong *)(param_2 + 0x12) = uVar22;
  }
  else {
    uVar35 = *(ulonglong *)(param_2 + 10);
  }
  fVar7 = DAT_ram_4009a460;
  fVar34 = DAT_ram_4009a45c;
  fVar27 = DAT_ram_4009a454;
  fVar33 = DAT_ram_40099f9c;
  fVar32 = DAT_ram_40094e80;
  fVar29 = DAT_ram_40094650;
  fVar39 = DAT_ram_40094634;
  uVar37 = *(ulonglong *)(param_2 + 0x15);
  uVar22 = *(ulonglong *)(param_2 + 0x17);
  uVar6 = *(ushort *)(param_2 + 0x1c);
  cVar5 = *(char *)(param_2 + 0x1d);
  fVar42 = param_2[8];
  fVar24 = param_2[9];
  fVar26 = param_2[0xc];
  fVar30 = param_2[0xd];
  uVar31 = *(undefined8 *)(param_2 + 0xe);
  fVar28 = param_2[0xf];
  fVar9 = DAT_ram_4009a438;
  if (fVar23 < fVar25) {
    fVar9 = fVar23 / fVar25;
  }
  pfVar18 = param_3 + param_7;
  fVar25 = param_2[0x13];
  pfVar4 = param_5;
  do {
    fVar36 = (float)*(undefined8 *)param_3;
    fVar16 = fVar23;
    if (fVar36 * fVar36 <= fVar25) {
      if (fVar33 <= in_register_00000100) goto LAB_ram_400698e2;
LAB_ram_40069ecc:
      fVar38 = param_2[0x41e];
      if (cVar5 != '\x01') goto LAB_ram_40069962;
LAB_ram_40069ed4:
      if (fVar38 < 0.0) {
        if (uVar6 == 0xffff) {
          uVar37 = 0;
          cVar5 = '\0';
        }
        else {
          uVar6 = uVar6 + 1;
          uVar37 = 0;
          cVar5 = uVar6 < *(ushort *)(param_2 + 0x11);
        }
      }
      else {
        uVar37 = 0;
        uVar6 = 0;
      }
    }
    else {
      if (in_register_00000100 < fVar33) goto LAB_ram_40069ecc;
LAB_ram_400698e2:
      if (fVar32 < in_register_00000100) {
LAB_ram_40069eee:
        fVar38 = param_2[0x81d];
      }
      else {
        if (in_register_00000100 <= fVar33) goto LAB_ram_40069ecc;
        if (fVar23 <= in_register_00000100) goto LAB_ram_40069eee;
        fVar25 = ((float)((uint)in_register_00000100 & 0x7fffff) * fVar29 +
                  (float)(int)(((uint)ABS(in_register_00000100) >> 0x17) - 0x7f) + fVar34) * fVar7 *
                 fVar27;
        if (fVar25 < 0.0) goto LAB_ram_40069ecc;
        if (fVar27 < fVar25) goto LAB_ram_40069eee;
        if (fVar25 <= 0.0) goto LAB_ram_40069ecc;
        if (fVar27 <= fVar25) goto LAB_ram_40069eee;
        uVar17 = (uint)(-1 < (int)fVar25) * (int)fVar25;
        fVar38 = param_2[uVar17 + 0x41e];
        fVar38 = (fVar25 - (float)uVar17) * ((param_2 + uVar17 + 0x41e)[1] - fVar38) + fVar38;
      }
      if (cVar5 == '\x01') goto LAB_ram_40069ed4;
LAB_ram_40069962:
      fVar25 = (float)uVar37;
      if (fVar38 <= fVar25) {
        if (fVar38 < fVar25) {
          fVar38 = (fVar38 - fVar25) * fVar39;
          fVar40 = fVar28;
          if ((fVar28 <= fVar38) && (fVar40 = fVar38, 0.0 < fVar38)) {
            fVar40 = 0.0;
          }
          uVar37 = (ulonglong)(uint)(fVar25 + fVar40);
          if (fVar25 + fVar40 < fVar30) {
            uVar37 = (ulonglong)(uint)fVar30;
          }
        }
      }
      else {
        fVar38 = (fVar38 - fVar25) * fVar39;
        if (fVar38 < 0.0) {
          fVar38 = 0.0;
        }
        else if ((float)uVar31 < fVar38) {
          fVar38 = (float)uVar31;
        }
        uVar37 = (ulonglong)(uint)(fVar25 + fVar38);
        if (0.0 <= fVar25 + fVar38) {
          uVar37 = 0;
          cVar5 = '\x01';
          uVar6 = 0;
          goto LAB_ram_4006999c;
        }
      }
      fVar25 = (float)uVar37;
      if (fVar25 < 0.0) {
        if ((fVar25 <= (float)*(undefined8 *)(param_2 + 0xd)) ||
           (fVar25 = (fVar25 - (float)*(undefined8 *)(param_2 + 0xd)) * param_2[0x10], fVar25 <= 0.0
           )) {
          fVar16 = (float)*(undefined8 *)(param_2 + 0x1e);
        }
        else if (fVar27 <= fVar25) {
          fVar16 = param_2[0x41d];
        }
        else {
          uVar17 = (uint)(-1 < (int)fVar25) * (int)fVar25;
          fVar16 = param_2[uVar17 + 0x1e];
          fVar16 = (fVar25 - (float)uVar17) * ((param_2 + uVar17 + 0x1e)[1] - fVar16) + fVar16;
        }
      }
    }
LAB_ram_4006999c:
    param_3 = param_3 + 1;
    fVar25 = fVar26 * (fVar16 - (float)uVar22) + (float)uVar22;
    uVar22 = (ulonglong)(uint)fVar25;
    *pfVar4 = fVar36 * fVar25;
    fVar25 = in_register_00000100;
    pfVar4 = pfVar4 + 1;
  } while (pfVar18 != param_3);
  param_2[0x13] = in_register_00000100;
  *(ulonglong *)(param_2 + 0x15) = uVar37;
  *(ulonglong *)(param_2 + 0x17) = uVar22;
  *(char *)(param_2 + 0x1d) = cVar5;
  *(ushort *)(param_2 + 0x1c) = uVar6;
  param_2[0x1a] = (float)uVar6 * fVar9;
  fVar29 = DAT_ram_4009a460;
  fVar39 = DAT_ram_4009a45c;
  fVar28 = DAT_ram_4009a454;
  fVar25 = DAT_ram_40094e80;
  fVar30 = DAT_ram_40094650;
  fVar26 = DAT_ram_40094634;
  if (bVar8) {
    uVar37 = *(ulonglong *)(param_2 + 0x16);
    uVar22 = *(ulonglong *)(param_2 + 0x18);
    uVar6 = *(ushort *)((int)param_2 + 0x72);
    cVar5 = *(char *)((int)param_2 + 0x75);
    fVar42 = param_2[10];
    fVar24 = param_2[0xb];
    fVar32 = param_2[0xc];
    fVar27 = param_2[0xd];
    fVar34 = param_2[0xe];
    fVar7 = param_2[0xf];
    fVar9 = DAT_ram_4009a438;
    if (fVar23 < *param_2) {
      fVar9 = fVar23 / *param_2;
    }
    pfVar18 = param_4 + param_7;
    pfVar4 = param_6;
    fVar16 = param_2[0x14];
    do {
      fVar36 = *param_4;
      uVar35 = (ulonglong)(uint)fVar16;
      fVar38 = fVar23;
      if (fVar36 * fVar36 <= fVar16) {
        if (fVar33 <= in_register_00000100) goto LAB_ram_4006a2c0;
LAB_ram_4006a420:
        fVar40 = param_2[0x41e];
        if (cVar5 != '\x01') goto LAB_ram_4006a33e;
LAB_ram_4006a428:
        if (fVar40 < 0.0) {
          if (uVar6 == 0xffff) {
            uVar37 = 0;
            cVar5 = '\0';
          }
          else {
            uVar6 = uVar6 + 1;
            uVar37 = 0;
            cVar5 = uVar6 < *(ushort *)(param_2 + 0x11);
          }
        }
        else {
          uVar37 = 0;
          uVar6 = 0;
        }
      }
      else {
        if (in_register_00000100 < fVar33) goto LAB_ram_4006a420;
LAB_ram_4006a2c0:
        if (fVar25 < in_register_00000100) {
LAB_ram_4006a462:
          fVar40 = param_2[0x81d];
        }
        else {
          if (in_register_00000100 <= fVar33) goto LAB_ram_4006a420;
          if (fVar23 <= in_register_00000100) goto LAB_ram_4006a462;
          fVar16 = (float)(int)(((uint)ABS(in_register_00000100) >> 0x17) - 0x7f);
          uVar35 = (ulonglong)(uint)fVar16;
          fVar16 = ((float)((uint)in_register_00000100 & 0x7fffff) * fVar30 + fVar16 + fVar39) *
                   fVar29 * fVar28;
          if (fVar16 < 0.0) goto LAB_ram_4006a420;
          if (fVar28 < fVar16) goto LAB_ram_4006a462;
          if (fVar16 <= 0.0) goto LAB_ram_4006a420;
          if (fVar28 <= fVar16) goto LAB_ram_4006a462;
          uVar17 = (uint)(-1 < (int)fVar16) * (int)fVar16;
          fVar40 = param_2[uVar17 + 0x41e];
          fVar41 = (float)*(undefined8 *)(param_2 + uVar17 + 0x41e + 1) - fVar40;
          uVar35 = (ulonglong)(uint)fVar41;
          fVar40 = (fVar16 - (float)uVar17) * fVar41 + fVar40;
        }
        if (cVar5 == '\x01') goto LAB_ram_4006a428;
LAB_ram_4006a33e:
        fVar16 = (float)uVar37;
        if (fVar40 <= fVar16) {
          if (fVar40 < fVar16) {
            fVar40 = (fVar40 - fVar16) * fVar26;
            fVar41 = fVar7;
            if ((fVar7 <= fVar40) && (fVar41 = fVar40, 0.0 < fVar40)) {
              fVar41 = 0.0;
            }
            uVar37 = (ulonglong)(uint)(fVar16 + fVar41);
            if (fVar16 + fVar41 < fVar27) {
              uVar37 = (ulonglong)(uint)fVar27;
            }
          }
        }
        else {
          fVar40 = (fVar40 - fVar16) * fVar26;
          if (fVar40 < 0.0) {
            fVar40 = 0.0;
          }
          else if (fVar34 < fVar40) {
            fVar40 = fVar34;
          }
          uVar37 = (ulonglong)(uint)(fVar16 + fVar40);
          if (0.0 <= fVar16 + fVar40) {
            uVar37 = 0;
            uVar6 = 0;
            cVar5 = '\x01';
            goto LAB_ram_4006a374;
          }
        }
        fVar16 = (float)uVar37;
        if (fVar16 < 0.0) {
          if ((float)*(undefined8 *)(param_2 + 0xd) < fVar16) {
            uVar35 = *(ulonglong *)(param_2 + 0x10);
            fVar16 = (fVar16 - (float)*(undefined8 *)(param_2 + 0xd)) * (float)uVar35;
            if (0.0 < fVar16) {
              if (fVar28 <= fVar16) {
                fVar38 = param_2[0x41d];
              }
              else {
                uVar17 = (uint)(-1 < (int)fVar16) * (int)fVar16;
                fVar38 = param_2[uVar17 + 0x1e];
                fVar40 = (float)*(undefined8 *)(param_2 + uVar17 + 0x1e + 1) - fVar38;
                uVar35 = (ulonglong)(uint)fVar40;
                fVar38 = (fVar16 - (float)uVar17) * fVar40 + fVar38;
              }
              goto LAB_ram_4006a374;
            }
          }
          fVar38 = (float)*(undefined8 *)(param_2 + 0x1e);
        }
      }
LAB_ram_4006a374:
      param_4 = param_4 + 1;
      fVar16 = fVar32 * (fVar38 - (float)uVar22) + (float)uVar22;
      uVar22 = (ulonglong)(uint)fVar16;
      *pfVar4 = fVar36 * fVar16;
      pfVar4 = pfVar4 + 1;
      fVar16 = in_register_00000100;
    } while (pfVar18 != param_4);
    param_2[0x14] = in_register_00000100;
    *(ulonglong *)(param_2 + 0x16) = uVar37;
    *(ulonglong *)(param_2 + 0x18) = uVar22;
    *(char *)((int)param_2 + 0x75) = cVar5;
    *(ushort *)((int)param_2 + 0x72) = uVar6;
    *(ulonglong *)(param_2 + 0x1b) = (ulonglong)(uint)((float)uVar6 * fVar9);
  }
  if (uVar20 != 2) {
    return uVar35;
  }
  if (param_8 == (float *)0x0) {
    fVar30 = 0.0;
    fVar26 = DAT_ram_4009a42c;
    fVar25 = DAT_ram_40094ec4;
    fVar28 = DAT_ram_40094ee0;
    fVar39 = DAT_ram_40094634;
    fVar29 = DAT_ram_40094eb4;
LAB_ram_4006a704:
    fVar32 = fVar26 * DAT_ram_40096008 + fVar23;
  }
  else {
    fVar32 = param_8[1];
    if (0.0 <= fVar32) {
      if (fVar23 < fVar32) {
        fVar32 = fVar23;
      }
    }
    else {
      fVar32 = 0.0;
    }
    fVar26 = param_8[2];
    if (0.0 <= fVar26) {
      if (fVar23 < fVar26) {
        fVar26 = fVar23;
      }
    }
    else {
      fVar26 = 0.0;
    }
    fVar30 = param_8[3];
    if (0.0 <= fVar30) {
      if (fVar23 < fVar30) {
        fVar30 = fVar23;
      }
    }
    else {
      fVar30 = 0.0;
    }
    fVar25 = param_8[4];
    if (0.0 <= fVar25) {
      if (fVar23 < fVar25) {
        fVar25 = fVar23;
      }
    }
    else {
      fVar25 = 0.0;
    }
    fVar28 = param_8[5];
    if (0.0 <= fVar28) {
      if (fVar23 < fVar28) {
        fVar28 = fVar23;
      }
    }
    else {
      fVar28 = 0.0;
    }
    fVar39 = param_8[6];
    if (0.0 <= fVar39) {
      if (fVar23 < fVar39) {
        fVar39 = fVar23;
      }
    }
    else {
      fVar39 = 0.0;
    }
    fVar29 = DAT_ram_400954c4;
    if ((0.0 <= fVar32) && (fVar29 = 0.0, fVar32 <= fVar23)) {
      fVar29 = fVar32 * DAT_ram_400954c0 + DAT_ram_400954c4;
    }
    fVar32 = fVar23;
    if ((0.0 <= fVar26) && (fVar32 = DAT_ram_40094ea8, fVar26 <= fVar23)) goto LAB_ram_4006a704;
  }
  fVar26 = 0.0;
  if ((0.0 <= fVar30) && (fVar26 = DAT_ram_400952cc, fVar30 <= fVar23)) {
    fVar26 = fVar30 * DAT_ram_400952cc + 0.0;
  }
  fVar30 = 0.0;
  if ((0.0 <= fVar25) && (fVar30 = DAT_ram_4009600c, fVar25 <= fVar23)) {
    fVar30 = fVar25 * DAT_ram_4009600c + 0.0;
  }
  fVar25 = 0.0;
  if ((0.0 <= fVar28) && (fVar25 = DAT_ram_40094e80, fVar28 <= fVar23)) {
    fVar25 = fVar28 * DAT_ram_40094e80 + 0.0;
  }
  fVar28 = DAT_ram_400952d0;
  if ((0.0 <= fVar39) && (fVar28 = DAT_ram_400952cc, fVar39 <= fVar23)) {
    fVar28 = fVar39 * DAT_ram_40096010 + DAT_ram_400952d0;
  }
  FUN_ram_40060180(fVar29,fVar32,fVar26,fVar30,fVar25,fVar28,fVar42,fVar24,param_2 + 0x81e);
  param_4 = (float *)((uint)param_6 & -(uint)bVar8);
  param_3 = param_5;
  param_6 = param_4;
LAB_ram_40069b82:
  uVar22 = FUN_ram_40060498(param_2 + 0x81e,param_3,param_4,param_5,param_6,param_7,bVar8,param_11);
  return uVar22;
}


