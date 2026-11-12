/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40066000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4006674c.
 * REA evidence: ev_63068fb31e61c6703ed3ab29a14c7fcb38e4d08c38adb50f536e02a4fb8a66fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006674c(undefined8 *param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  float fVar14;
  
  if (param_1 != (undefined8 *)0x0) {
    if (*(short *)(param_1 + 0x419) == 0) {
      fVar10 = (float)*param_1;
      if (fVar10 <= DAT_ram_4009281c) {
        uVar5 = 0x2c;
        fVar14 = DAT_ram_40098528;
        fVar9 = DAT_ram_40098524;
        fVar1 = DAT_ram_40098520;
        fVar10 = DAT_ram_40092878;
      }
      else {
        fVar14 = fVar10 / DAT_ram_40093094 + DAT_ram_40092864;
        uVar7 = (uint)(-1 < (int)fVar14) * (int)fVar14;
        uVar4 = 1;
        if (uVar7 != 0) {
          uVar4 = uVar7;
        }
        uVar6 = 0xffff;
        if (uVar7 < 0x10000) {
          uVar6 = uVar4;
        }
        uVar5 = (undefined2)uVar6;
        fVar14 = (float)(uVar6 & 0xffff) / fVar10;
        fVar9 = -fVar14;
        fVar1 = fVar9 / DAT_ram_40098208;
      }
      *(undefined2 *)(param_1 + 0x419) = uVar5;
      uVar11 = FUN_ram_40000c0e(fVar1);
      fVar1 = DAT_ram_4009852c;
      *(undefined4 *)(param_1 + 0x41b) = uVar11;
      uVar11 = FUN_ram_40000c0e(fVar9 / fVar1);
      fVar1 = DAT_ram_40098104;
      *(undefined4 *)((int)param_1 + 0x20dc) = uVar11;
      uVar11 = FUN_ram_40000c0e(fVar9 / fVar1);
      fVar1 = DAT_ram_40098530;
      *(undefined4 *)(param_1 + 0x41c) = uVar11;
      uVar11 = FUN_ram_40000c0e(fVar9 / fVar1);
      fVar1 = DAT_ram_40098340;
      *(undefined4 *)((int)param_1 + 0x20e4) = uVar11;
      uVar11 = FUN_ram_40000c0e(fVar9 / fVar1);
      fVar1 = DAT_ram_40098254;
      *(undefined4 *)(param_1 + 0x41d) = uVar11;
      uVar11 = FUN_ram_40000c0e(fVar9 / fVar1);
      *(undefined4 *)((int)param_1 + 0x20ec) = uVar11;
      uVar11 = FUN_ram_40000c0e(fVar9);
      fVar1 = DAT_ram_40098534;
      *(undefined4 *)(param_1 + 0x41e) = uVar11;
      uVar11 = FUN_ram_40000c0e(fVar9 / fVar1);
      fVar1 = DAT_ram_40098538;
      *(undefined4 *)((int)param_1 + 0x20f4) = uVar11;
      uVar11 = FUN_ram_40000c0e(fVar9 / fVar1);
      fVar9 = DAT_ram_4009850c;
      *(undefined4 *)(param_1 + 0x41f) = uVar11;
      uVar11 = DAT_ram_4009853c;
      uVar5 = 0;
      if (0.0 <= fVar9 / fVar14) {
        fVar9 = fVar9 / fVar14 + DAT_ram_40092864;
        uVar7 = (uint)(-1 < (int)fVar9) * (int)fVar9;
        if (0xffff < uVar7) {
          uVar7 = 0xffff;
        }
        uVar5 = (undefined2)uVar7;
      }
      uVar8 = 0;
      if (0.0 <= DAT_ram_400930fc / fVar14) {
        fVar14 = DAT_ram_400930fc / fVar14 + DAT_ram_40092864;
        uVar7 = (uint)(-1 < (int)fVar14) * (int)fVar14;
        if (0xffff < uVar7) {
          uVar7 = 0xffff;
        }
        uVar8 = (undefined2)uVar7;
      }
      fVar14 = DAT_ram_40098540 / fVar10;
      *(undefined2 *)((int)param_1 + 0x20ca) = uVar5;
      *(undefined4 *)((int)param_1 + 0x20fc) = uVar11;
      *(undefined2 *)((int)param_1 + 0x20cc) = uVar8;
      *(undefined4 *)(param_1 + 0x420) = 0;
      uVar11 = FUN_ram_40000c0e(fVar14);
      fVar14 = DAT_ram_40098544;
      *(undefined4 *)(param_1 + 0x41a) = uVar11;
      uVar11 = FUN_ram_40000c0e(fVar14 / fVar10);
      *(undefined4 *)((int)param_1 + 0x20d4) = uVar11;
    }
    uVar2 = DAT_ram_40098548;
    uVar11 = DAT_ram_400930a4;
    uVar13 = (ulonglong)DAT_ram_400980f8;
    *(ulonglong *)((int)param_1 + 0x4c) = uVar13;
    uVar3 = DAT_ram_40098374;
    param_1[10] = uVar13;
    *(undefined4 *)(param_1 + 0xe) = uVar3;
    *(undefined1 *)((int)param_1 + 0x46) = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    *(undefined4 *)((int)param_1 + 0x6c) = 0;
    *(undefined2 *)((int)param_1 + 0x74) = 0;
    uVar12 = FUN_ram_40000d54(uVar11,uVar2);
    uVar13 = (ulonglong)DAT_ram_4009854c;
    uVar11 = *(undefined4 *)((int)param_1 + 0x20fc);
    *(ulonglong *)((int)param_1 + 0x54) = uVar13;
    *(undefined8 *)((int)param_1 + 0x5c) = uVar12;
    param_1[0xb] = uVar13;
    param_1[0xc] = uVar12;
    *(undefined1 *)(param_1 + 0x426) = 0;
    uVar2 = DAT_ram_40093494;
    *(undefined4 *)((int)param_1 + 0x2124) = uVar3;
    *(undefined4 *)((int)param_1 + 0x2104) = 0;
    *(undefined4 *)(param_1 + 0x421) = 0;
    *(undefined4 *)((int)param_1 + 0x210c) = 0;
    *(undefined4 *)(param_1 + 0x422) = 0;
    *(undefined4 *)((int)param_1 + 0x2114) = 0;
    *(undefined4 *)(param_1 + 0x423) = uVar2;
    *(undefined4 *)((int)param_1 + 0x211c) = 0;
    *(undefined4 *)(param_1 + 0x424) = 0;
    *(undefined4 *)((int)param_1 + 0x212c) = 0;
    *(undefined4 *)((int)param_1 + 0x2134) = uVar11;
    *(undefined4 *)(param_1 + 0x427) = uVar11;
    *(undefined4 *)((int)param_1 + 0x213c) = uVar11;
    *(undefined2 *)(param_1 + 0x425) = 0;
    FUN_ram_4005eb38(param_1 + 0x40f);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40066a0e.
 * REA evidence: ev_fdd4b6992660150305ce270765daf1f8580f5983046a67df323726f04c8d28d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40066a0e(float param_1,float *param_2)

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
  memset(param_2,0,0x2140);
  fVar25 = DAT_ram_4009281c;
  fVar21 = DAT_ram_40092878;
  fVar17 = DAT_ram_40098550;
  if (DAT_ram_4009281c < param_1) {
    fVar21 = param_1;
    fVar17 = DAT_ram_40092818 / (param_1 * DAT_ram_40098554);
  }
  *(ulonglong *)param_2 = (ulonglong)(uint)fVar21;
  uVar22 = FUN_ram_40000c0e(fVar17);
  fVar21 = *param_2;
  uVar24 = (ulonglong)(uint)DAT_ram_40092818;
  uVar23 = (ulonglong)DAT_ram_40092844;
  *(undefined8 *)(param_2 + 0x19) = uVar22;
  *(undefined1 *)(param_2 + 1) = 0;
  *(ulonglong *)(param_2 + 2) = uVar24;
  *(ulonglong *)(param_2 + 3) = uVar24;
  *(ulonglong *)(param_2 + 4) = uVar24;
  *(ulonglong *)(param_2 + 5) = uVar24;
  *(ulonglong *)(param_2 + 0x12) = uVar23;
  if (fVar21 <= fVar25) {
    uVar12 = 0x2c;
    fVar21 = DAT_ram_40092878;
    fVar17 = DAT_ram_40098528;
    fVar20 = DAT_ram_40098524;
    fVar19 = DAT_ram_40098520;
  }
  else {
    fVar17 = fVar21 / DAT_ram_40093094 + DAT_ram_40092864;
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
    fVar19 = fVar20 / DAT_ram_40098208;
  }
  *(undefined2 *)(param_2 + 0x832) = uVar12;
  fVar18 = (float)FUN_ram_40000c0e(fVar19);
  fVar19 = DAT_ram_4009852c;
  param_2[0x836] = fVar18;
  fVar16 = in_register_00000100;
  fVar19 = (float)FUN_ram_40000c0e(fVar20 / fVar19);
  fVar2 = DAT_ram_40098104;
  param_2[0x837] = fVar19;
  fVar19 = (float)FUN_ram_40000c0e(fVar20 / fVar2);
  fVar5 = DAT_ram_40098530;
  param_2[0x838] = fVar19;
  fVar19 = (float)FUN_ram_40000c0e(fVar20 / fVar5);
  fVar4 = DAT_ram_40098340;
  param_2[0x839] = fVar19;
  fVar19 = (float)FUN_ram_40000c0e(fVar20 / fVar4);
  fVar3 = DAT_ram_40098254;
  param_2[0x83a] = fVar19;
  fVar19 = (float)FUN_ram_40000c0e(fVar20 / fVar3);
  param_2[0x83b] = fVar19;
  fVar19 = (float)FUN_ram_40000c0e(fVar20);
  fVar6 = DAT_ram_40098534;
  param_2[0x83c] = fVar19;
  fVar19 = (float)FUN_ram_40000c0e(fVar20 / fVar6);
  fVar7 = DAT_ram_40098538;
  param_2[0x83d] = fVar19;
  fVar20 = (float)FUN_ram_40000c0e(fVar20 / fVar7);
  fVar19 = DAT_ram_4009850c;
  param_2[0x83e] = fVar20;
  fVar9 = DAT_ram_40098540;
  fVar8 = DAT_ram_4009853c;
  fVar18 = DAT_ram_400930fc;
  fVar20 = fVar19 / fVar17;
  uVar12 = 0;
  if (0.0 <= fVar20) {
    fVar20 = fVar20 + DAT_ram_40092864;
    uVar14 = (uint)(-1 < (int)fVar20) * (int)fVar20;
    if (0xffff < uVar14) {
      uVar14 = 0xffff;
    }
    uVar12 = (undefined2)uVar14;
  }
  uVar15 = 0;
  if (0.0 <= DAT_ram_400930fc / fVar17) {
    fVar17 = DAT_ram_400930fc / fVar17 + DAT_ram_40092864;
    uVar14 = (uint)(-1 < (int)fVar17) * (int)fVar17;
    if (0xffff < uVar14) {
      uVar14 = 0xffff;
    }
    uVar15 = (undefined2)uVar14;
  }
  fVar17 = DAT_ram_40098540 / fVar21;
  *(undefined2 *)(param_2 + 0x833) = uVar15;
  *(undefined2 *)((int)param_2 + 0x20ca) = uVar12;
  param_2[0x83f] = fVar8;
  param_2[0x840] = 0.0;
  fVar20 = (float)FUN_ram_40000c0e(fVar17);
  fVar17 = DAT_ram_40098544;
  param_2[0x834] = fVar20;
  fVar21 = (float)FUN_ram_40000c0e(fVar17 / fVar21);
  param_2[0x835] = fVar21;
  FUN_ram_4005ecf2(*(undefined8 *)param_2,param_2 + 0x81e,2);
  if (*(short *)(param_2 + 0x832) == 0) {
    fVar21 = *param_2;
    if (fVar21 <= fVar25) {
      uVar12 = 0x2c;
      fVar25 = DAT_ram_40098528;
      fVar20 = DAT_ram_40098524;
      fVar21 = DAT_ram_40098520;
    }
    else {
      fVar25 = fVar21 / DAT_ram_40093094 + DAT_ram_40092864;
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
      fVar21 = fVar20 / DAT_ram_40098208;
    }
    *(undefined2 *)(param_2 + 0x832) = uVar12;
    fVar21 = (float)FUN_ram_40000c0e(fVar21);
    param_2[0x836] = fVar21;
    fVar21 = (float)FUN_ram_40000c0e(fVar20 / in_register_00000100);
    param_2[0x837] = fVar21;
    fVar21 = (float)FUN_ram_40000c0e(fVar20 / fVar2);
    param_2[0x838] = fVar21;
    fVar21 = (float)FUN_ram_40000c0e(fVar20 / fVar5);
    param_2[0x839] = fVar21;
    fVar21 = (float)FUN_ram_40000c0e(fVar20 / fVar4);
    param_2[0x83a] = fVar21;
    fVar21 = (float)FUN_ram_40000c0e(fVar20 / fVar3);
    param_2[0x83b] = fVar21;
    fVar21 = (float)FUN_ram_40000c0e(fVar20);
    param_2[0x83c] = fVar21;
    fVar21 = (float)FUN_ram_40000c0e(fVar20 / fVar6);
    param_2[0x83d] = fVar21;
    fVar21 = (float)FUN_ram_40000c0e(fVar20 / fVar7);
    fVar19 = fVar19 / fVar25;
    param_2[0x83e] = fVar21;
    fVar21 = DAT_ram_4009853c;
    uVar12 = 0;
    if (0.0 <= fVar19) {
      fVar19 = fVar19 + DAT_ram_40092864;
      uVar14 = (uint)(-1 < (int)fVar19) * (int)fVar19;
      if (0xffff < uVar14) {
        uVar14 = 0xffff;
      }
      uVar12 = (undefined2)uVar14;
    }
    uVar15 = 0;
    if (0.0 <= fVar18 / fVar25) {
      fVar25 = fVar18 / fVar25 + DAT_ram_40092864;
      uVar14 = (uint)(-1 < (int)fVar25) * (int)fVar25;
      if (0xffff < uVar14) {
        uVar14 = 0xffff;
      }
      uVar15 = (undefined2)uVar14;
    }
    *(undefined2 *)((int)param_2 + 0x20ca) = uVar12;
    *(undefined2 *)(param_2 + 0x833) = uVar15;
    param_2[0x83f] = fVar21;
    param_2[0x840] = 0.0;
    fVar21 = (float)FUN_ram_40000c0e(fVar9 / fVar16);
    param_2[0x834] = fVar21;
    fVar21 = (float)FUN_ram_40000c0e(fVar17 / fVar16);
    param_2[0x835] = fVar21;
  }
  uVar10 = DAT_ram_40098548;
  uVar1 = DAT_ram_400930a4;
  uVar23 = (ulonglong)DAT_ram_400980f8;
  *(ulonglong *)(param_2 + 0x13) = uVar23;
  fVar25 = DAT_ram_40098374;
  *(ulonglong *)(param_2 + 0x14) = uVar23;
  param_2[0x1c] = fVar25;
  *(undefined1 *)((int)param_2 + 0x46) = 0;
  param_2[0x1a] = 0.0;
  param_2[0x1b] = 0.0;
  *(undefined2 *)(param_2 + 0x1d) = 0;
  uVar22 = FUN_ram_40000d54(uVar1,uVar10);
  fVar17 = DAT_ram_40093494;
  uVar23 = (ulonglong)DAT_ram_4009854c;
  fVar21 = param_2[0x83f];
  *(ulonglong *)(param_2 + 0x15) = uVar23;
  *(undefined8 *)(param_2 + 0x17) = uVar22;
  *(ulonglong *)(param_2 + 0x16) = uVar23;
  *(undefined8 *)(param_2 + 0x18) = uVar22;
  *(undefined1 *)(param_2 + 0x84c) = 0;
  param_2[0x849] = fVar25;
  param_2[0x841] = 0.0;
  param_2[0x842] = 0.0;
  param_2[0x843] = 0.0;
  param_2[0x844] = 0.0;
  param_2[0x845] = 0.0;
  param_2[0x846] = fVar17;
  param_2[0x847] = 0.0;
  param_2[0x848] = 0.0;
  param_2[0x84b] = 0.0;
  param_2[0x84d] = fVar21;
  param_2[0x84e] = fVar21;
  param_2[0x84f] = fVar21;
  *(undefined2 *)(param_2 + 0x84a) = 0;
  FUN_ram_4005eb38(param_2 + 0x81e);
  return;
}


/* NanoCore 1.10, address 0x40066f46.
 * REA evidence: ev_736991f1760cedf4e17678332f8d4e916331906327cb63754c137ec67fe04544
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40066f46(ulonglong *param_1,int param_2)

{
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_40093100;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40093708;
    }
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40066f86.
 * REA evidence: ev_77c3aab268f3bc942f335f0b67530e09bc20936d9ab8bdf0bc3f234987f8f735
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40066f86(uint param_1)

{
  return param_1 & -(uint)(param_1 < 4);
}


/* NanoCore 1.10, address 0x40066f92.
 * REA evidence: ev_81e46c2a1b49d573204f2ba9801668aef90c1fb64e20e4825b7a4adf15fb0100
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40066f92(uint param_1)

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


/* NanoCore 1.10, address 0x40066fb4.
 * REA evidence: ev_6f65f55aa3f5e409c3620f71d169545abfbdb152fcd03eea958e00c677e1fc9e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40066fb4(ulonglong *param_1,uint param_2,uint param_3)

{
  if ((param_1 == (ulonglong *)0x0) || (param_2 == 0)) {
    return;
  }
  if (param_3 < 4) {
    memset(param_1,0,param_2 << 2);
    if (param_3 == 1) {
      *param_1 = (ulonglong)DAT_ram_40092864;
      if (param_2 == 1) {
        return;
      }
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40098558;
      return;
    }
    if (param_3 == 3) {
      *param_1 = (ulonglong)DAT_ram_4009855c;
      if (param_2 != 1) {
        *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40098560;
        if (param_2 != 2) {
          *(undefined4 *)(param_1 + 1) = 0;
        }
        if (3 < param_2) {
          *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_400930d8;
        }
      }
      if (4 < param_2) {
        param_1[2] = (ulonglong)DAT_ram_400930f4;
      }
      if (param_2 < 6) {
        return;
      }
      *(ulonglong *)((int)param_1 + 0x14) = (ulonglong)DAT_ram_40092864;
      return;
    }
    *param_1 = (ulonglong)DAT_ram_40093100;
    if (param_3 != 0) {
      if (param_3 != 2) {
        return;
      }
      if (param_2 != 1) {
        *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009855c;
        if (param_2 != 2) {
          param_1[1] = (ulonglong)DAT_ram_40098560;
        }
        if (3 < param_2) {
          *(undefined4 *)((int)param_1 + 0xc) = 0;
        }
      }
      if (4 < param_2) {
        param_1[2] = (ulonglong)DAT_ram_400930d8;
      }
      if (5 < param_2) {
        *(ulonglong *)((int)param_1 + 0x14) = (ulonglong)DAT_ram_400930f4;
      }
      if (param_2 < 7) {
        return;
      }
      param_1[3] = (ulonglong)DAT_ram_40092864;
      return;
    }
  }
  else {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_40093100;
  }
  if (param_2 != 1) {
    *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40093708;
  }
  return;
}


