/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40065000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40065826.
 * REA evidence: ev_66bcf2e0b25ea89a4b14c73b6a1fa389d16d6db39060cd82be15e093687dc598
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_40065826(uint param_1,int param_2)

{
  bool bVar1;
  
  if (7 < param_1) {
    return param_2 == 0;
  }
  bVar1 = true;
  if (param_2 != 0) {
    bVar1 = false;
    if (param_1 == 7) {
      bVar1 = param_2 == 3;
    }
  }
  return bVar1;
}


/* NanoCore 1.11, address 0x40065848.
 * REA evidence: ev_139031a5c6d0014487a6f2a499466c3a19bb7b931eee7c8c5a267d3c7c818421
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined * FUN_ram_40065848(float param_1,int param_2)

{
  undefined *puVar1;
  float fVar2;
  
  fVar2 = DAT_ram_40096024;
  puVar1 = DAT_ram_40094604;
  if (((param_2 - 1U & 0xff) < 7) &&
     (fVar2 = DAT_ram_40096028, puVar1 = PTR_entry_ram_40094618, param_2 != 5)) {
    puVar1 = (undefined *)((param_1 - DAT_ram_40094ee0) / DAT_ram_40096020);
  }
  else {
    puVar1 = (undefined *)((param_1 - (float)puVar1) / fVar2);
  }
  if (0.0 <= (float)puVar1) {
    if ((float)puVar1 <= (float)DAT_ram_40094604) {
      return puVar1;
    }
    return DAT_ram_40094604;
  }
  return (undefined *)0x0;
}


/* NanoCore 1.11, address 0x400658ce.
 * REA evidence: ev_0d93b201a3ef32adbc4f4c1c9c7da7c0f20f1d0ba37989aba182861634a80385
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_400658ce(float param_1)

{
  float fVar1;
  
  fVar1 = (param_1 - DAT_ram_40094ec4) / DAT_ram_4009602c;
  if (fVar1 < 0.0) {
    return 0.0;
  }
  if (fVar1 <= DAT_ram_40094604) {
    return fVar1;
  }
  return DAT_ram_40094604;
}


/* NanoCore 1.11, address 0x4006590c.
 * REA evidence: ev_022097fd271220bd043e476d42664b4503eafb584cd4a879c66301c9999e2da2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4006590c(uint param_1)

{
  return param_1 & -(uint)(param_1 < 8);
}


/* NanoCore 1.11, address 0x40065918.
 * REA evidence: ev_e19d7cd68200987491c15354cb7b5a5db51ab34c6ce339538978258dbaa6e9fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char FUN_ram_40065918(uint param_1)

{
  char cVar1;
  
  if (7 < param_1) {
    return '\x04';
  }
  if (param_1 != 4) {
    cVar1 = '\x05';
    if (param_1 < 5) {
      cVar1 = (param_1 != 1) + '\x03';
    }
    return cVar1;
  }
  return '\x03';
}


/* NanoCore 1.11, address 0x40065944.
 * REA evidence: ev_ddcfe5328442cea7b8634aa9097140ae692dc98fe638f40c83e89513b9c4945f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40065944(undefined4 *param_1,uint param_2,uint param_3)

{
  if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) {
    return;
  }
  if (param_3 < 8) {
    memset(param_1,0,param_2 << 2);
    if (param_3 == 1) {
      *param_1 = DAT_ram_4009a178;
      if (param_2 == 1) {
        return;
      }
      param_1[1] = DAT_ram_4009a17c;
      if (param_2 != 2) {
        param_1[2] = DAT_ram_4009a180;
      }
LAB_ram_40065a00:
      if (param_2 < 4) {
        return;
      }
      param_1[3] = 0;
      return;
    }
    if (param_3 == 2) {
      *param_1 = DAT_ram_4009a184;
      if (param_2 != 1) {
        param_1[1] = DAT_ram_4009a188;
        if (param_2 != 2) {
          param_1[2] = DAT_ram_4009a110;
        }
        if (3 < param_2) {
          param_1[3] = DAT_ram_40099fb8;
        }
      }
      goto LAB_ram_400659b0;
    }
    if (param_3 == 3) {
      *param_1 = DAT_ram_4009a128;
      if (param_2 != 1) {
        param_1[1] = DAT_ram_4009a12c;
        if (param_2 != 2) {
          param_1[2] = DAT_ram_40094604;
        }
        if (3 < param_2) {
          param_1[3] = DAT_ram_4009a130;
        }
      }
      goto LAB_ram_400659b0;
    }
    if (param_3 == 4) {
      *param_1 = DAT_ram_4009a1a0;
      if (param_2 == 1) {
        return;
      }
      param_1[1] = DAT_ram_4009a1a4;
      if (param_2 != 2) {
        param_1[2] = DAT_ram_40094634;
      }
      goto LAB_ram_40065a00;
    }
    if (param_3 == 5) {
      *param_1 = _DAT_ram_4009a210;
      if (param_2 != 1) {
        param_1[1] = DAT_ram_4009a1a8;
        if (param_2 != 2) {
          param_1[2] = DAT_ram_4009a1ac;
        }
        if (3 < param_2) {
          param_1[3] = DAT_ram_40096018;
        }
      }
    }
    else {
      if (param_3 == 6) {
        *param_1 = DAT_ram_4009a1c0;
        if (param_2 != 1) {
          param_1[1] = DAT_ram_4009a1c4;
          if (param_2 != 2) {
            param_1[2] = DAT_ram_4009a1c8;
          }
          if (3 < param_2) {
            param_1[3] = DAT_ram_4009a130;
          }
        }
        if (4 < param_2) {
          param_1[4] = DAT_ram_4009a130;
        }
        goto LAB_ram_40065a7c;
      }
      if (param_3 != 7) goto LAB_ram_4006596e;
      *param_1 = DAT_ram_4009a1d4;
      if (param_2 != 1) {
        param_1[1] = DAT_ram_40099fb8;
        if (param_2 != 2) {
          param_1[2] = DAT_ram_4009a1cc;
        }
        if (3 < param_2) {
          param_1[3] = DAT_ram_4009a1d0;
        }
      }
    }
    if (4 < param_2) {
      param_1[4] = DAT_ram_4009a1b4;
    }
LAB_ram_40065a7c:
    if (param_2 < 6) {
      return;
    }
    param_1[5] = 0;
    return;
  }
  memset(param_1,0,param_2 << 2);
LAB_ram_4006596e:
  *param_1 = DAT_ram_4009a1dc;
  if (param_2 != 1) {
    param_1[1] = DAT_ram_4009a1e0;
    if (param_2 != 2) {
      param_1[2] = DAT_ram_4009601c;
    }
    if (3 < param_2) {
      param_1[3] = DAT_ram_4009a1b4;
    }
  }
LAB_ram_400659b0:
  if (4 < param_2) {
    param_1[4] = 0;
  }
  return;
}


/* NanoCore 1.11, address 0x40065bd4.
 * REA evidence: ev_35263974641af8683c5dc04ba022d2c2c84d259fccb7d1fc29dc2737bbfe3472
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40065bd4(ulonglong *param_1,uint param_2)

{
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_4009a1dc;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009a1e0;
      if (param_2 != 2) {
        param_1[1] = (ulonglong)DAT_ram_4009601c;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_4009a1b4;
      }
    }
    if (4 < param_2) {
      *(undefined4 *)(param_1 + 2) = 0;
    }
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40065c3e.
 * REA evidence: ev_73be0754ddf9c3df4368cc7b8a22eb10747db39e0cf428a6d22bb4e1c0a12710
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40065c3e(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if ((*(int *)((int)param_1 + 4) != 0) && (*(int *)(param_1 + 1) != 0)) {
    memset(*(int *)((int)param_1 + 4),0,*(int *)(param_1 + 1) << 2);
  }
  uVar5 = _DAT_ram_40094604;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((int)param_1 + 0x2c) = uVar5;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x3a) = 1;
  if ((*(int *)(param_1 + 2) != 0) && (*(int *)((int)param_1 + 0x14) != 0)) {
    memset(*(int *)(param_1 + 2),0,*(int *)((int)param_1 + 0x14) << 2);
  }
  uVar5 = _DAT_ram_40094604;
  *(undefined4 *)(param_1 + 0x1e) = 0x12345678;
  *(undefined4 *)((int)param_1 + 0x184) = 0x87654321;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((int)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x84) = 0;
  *(undefined4 *)((int)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((int)param_1 + 0xcc) = 0;
  *(undefined4 *)((int)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((int)param_1 + 0xec) = 0;
  *(undefined4 *)((int)param_1 + 0xf4) = 0;
  uVar4 = (undefined4)uVar5;
  *(undefined4 *)(param_1 + 0x1f) = uVar4;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((int)param_1 + 0x114) = uVar4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((int)param_1 + 0x144) = 0;
  *(undefined4 *)((int)param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((int)param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x31) = uVar4;
  *(undefined4 *)((int)param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)((int)param_1 + 0x194) = uVar4;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((int)param_1 + 0x19c) = 0;
  fVar3 = DAT_ram_40094e80;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(undefined4 *)((int)param_1 + 0x1a4) = 0;
  fVar2 = (float)*param_1;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((int)param_1 + 0x1ac) = uVar4;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined4 *)((int)param_1 + 0x1bc) = uVar4;
  uVar4 = DAT_ram_4009a174;
  if (fVar3 <= fVar2) {
    fVar3 = DAT_ram_400952c4;
    if (fVar2 * DAT_ram_4009a10c < DAT_ram_400952c4) {
      fVar3 = fVar2 * DAT_ram_4009a10c;
    }
    fVar3 = (fVar3 / fVar2) * DAT_ram_40099f94;
    uVar4 = FUN_ram_400009d2(fVar3);
    uVar5 = FUN_ram_40000712(fVar3);
  }
  uVar1 = _DAT_ram_40094604;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(int *)((int)param_1 + 0x1c4) = (int)uVar5;
  *(int *)(param_1 + 0x39) = (int)uVar1;
  *(undefined4 *)((int)param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((int)param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)((int)param_1 + 0x224) = 0;
  if (*(short *)((int)param_1 + 0x20e) == 0) {
    *(undefined2 *)((int)param_1 + 0x20e) = 0x44;
  }
  if (*(short *)((int)param_1 + 0x20c) == 0) {
    *(undefined2 *)((int)param_1 + 0x20c) = 0x40;
  }
  if ((*(int *)((int)param_1 + 0x214) != 0) && (*(ushort *)(param_1 + 0x43) != 0)) {
    memset(*(int *)((int)param_1 + 0x214),0,(uint)*(ushort *)(param_1 + 0x43) << 2);
  }
  uVar6 = (ulonglong)DAT_ram_40094600;
  *(undefined1 *)((int)param_1 + 0x236) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(ulonglong *)((int)param_1 + 0x3c) = uVar6;
  param_1[8] = uVar6;
  *(ulonglong *)((int)param_1 + 0x44) = uVar6;
  param_1[9] = uVar6;
  *(ulonglong *)((int)param_1 + 0x4c) = uVar6;
  param_1[10] = uVar6;
  *(undefined2 *)((int)param_1 + 0x22e) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined2 *)((int)param_1 + 0x234) = 0;
  return;
}


/* NanoCore 1.11, address 0x40065e4a.
 * REA evidence: ev_638f237d3d8e4c8c10ee3c358f4b5382fc32d3c161e1baea87836116dd2da91a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40065e4a(float param_1,ulonglong *param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8)

{
  bool bVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float in_register_00000100;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
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
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  ulonglong uVar29;
  float fVar30;
  float fVar31;
  float local_a0;
  float local_9c [3];
  
  if (param_2 == (ulonglong *)0x0) {
    return;
  }
  pfVar11 = &local_a0;
  memset(param_2,0,0x238);
  fVar3 = DAT_ram_40094e80;
  fVar27 = DAT_ram_40094604;
  fVar30 = DAT_ram_4009a218;
  fVar22 = DAT_ram_4009a214;
  fVar23 = DAT_ram_40094664;
  if (DAT_ram_40094e80 < param_1) {
    fVar22 = (float)FUN_ram_40000844(DAT_ram_40094604,param_1 * DAT_ram_400952c0);
    fVar23 = (float)FUN_ram_40000844(fVar27,param_1 * DAT_ram_4009a24c);
    fVar30 = fVar27 / fVar22;
    fVar22 = fVar27 / fVar23;
    fVar23 = param_1;
  }
  fVar20 = DAT_ram_40094600;
  uVar29 = (ulonglong)(uint)DAT_ram_40094600;
  uVar26 = (ulonglong)DAT_ram_40094ec4;
  uVar6 = 0xffff;
  if (param_8 < 0x10000) {
    uVar6 = param_8;
  }
  *param_2 = (ulonglong)(uint)fVar23;
  *(float *)(param_2 + 6) = fVar30;
  *(ulonglong *)((int)param_2 + 0x34) = (ulonglong)(uint)fVar22;
  *(undefined4 *)((int)param_2 + 4) = param_3;
  *(undefined4 *)(param_2 + 1) = param_4;
  *(undefined4 *)(param_2 + 2) = param_5;
  *(undefined4 *)((int)param_2 + 0x14) = param_6;
  *(ulonglong *)((int)param_2 + 0x1c) = uVar26;
  *(undefined4 *)((int)param_2 + 0x214) = param_7;
  *(short *)(param_2 + 0x43) = (short)uVar6;
  *(ulonglong *)((int)param_2 + 0x3c) = uVar29;
  param_2[8] = uVar29;
  *(ulonglong *)((int)param_2 + 0x44) = uVar29;
  param_2[9] = uVar29;
  *(ulonglong *)((int)param_2 + 0x4c) = uVar29;
  param_2[10] = uVar29;
  uVar13 = DAT_ram_400954c0;
  puVar2 = PTR_entry_ram_40094618;
  fVar22 = DAT_ram_4009a21c;
  fVar30 = DAT_ram_40094664;
  if (fVar27 <= fVar23) {
    fVar22 = fVar20 / (fVar23 * DAT_ram_4009a250);
    fVar30 = fVar23;
  }
  *(float *)(param_2 + 0x1a) = fVar30;
  *(undefined **)((int)param_2 + 0xd4) = puVar2;
  *(undefined4 *)(param_2 + 0x1b) = uVar13;
  uVar13 = FUN_ram_40000bd8(fVar22);
  fVar24 = DAT_ram_40094600;
  uVar14 = FUN_ram_40000bd8(DAT_ram_40094600 / (fVar30 * DAT_ram_4009a254));
  fVar23 = DAT_ram_4009a16c;
  fVar30 = DAT_ram_40099f94;
  fVar4 = DAT_ram_400952c4;
  fVar12 = (float)*param_2;
  fVar22 = DAT_ram_400952c4 / fVar12;
  *(undefined4 *)(param_2 + 0x1c) = uVar14;
  *(undefined4 *)((int)param_2 + 0xdc) = uVar13;
  *(undefined4 *)((int)param_2 + 0xe4) = 0;
  *(float *)(param_2 + 0x21) = fVar12 * fVar23;
  fVar22 = fVar22 * fVar30;
  uVar13 = FUN_ram_400009d2(fVar22);
  *(undefined4 *)((int)param_2 + 0xfc) = uVar13;
  uVar13 = FUN_ram_40000712(fVar22);
  fVar23 = DAT_ram_4009a10c;
  fVar18 = DAT_ram_40095288;
  *(undefined4 *)(param_2 + 0x20) = uVar13;
  fVar15 = DAT_ram_4009a0f8;
  fVar19 = DAT_ram_4009a0f4;
  uVar13 = DAT_ram_4009a0ec;
  fVar21 = DAT_ram_40094ea8;
  fVar22 = fVar12 * fVar23;
  fVar20 = fVar22;
  if (fVar18 <= fVar22) {
    fVar20 = fVar18;
  }
  if (fVar22 < DAT_ram_40094ea8) {
    if (fVar27 <= fVar12) {
      fVar18 = fVar27;
      fVar19 = fVar12;
      if (fVar27 <= fVar22) {
        fVar18 = fVar22;
      }
      goto LAB_ram_40066018;
    }
    fVar17 = DAT_ram_4009a0dc._4_4_;
    fVar18 = fVar22;
    fVar16 = DAT_ram_40094664;
    if (fVar27 <= fVar22) goto LAB_ram_4006600e;
    *(undefined4 *)(param_2 + 0x13) = DAT_ram_4009a0ec;
    *(float *)((int)param_2 + 0x9c) = fVar15;
    *(undefined4 *)(param_2 + 0x14) = uVar13;
    *(float *)((int)param_2 + 0xa4) = fVar15;
    *(float *)(param_2 + 0x15) = fVar19;
LAB_ram_40066936:
    if (fVar20 < fVar27) {
      fVar19 = 0.0;
      fVar15 = DAT_ram_4009a0f8;
      fVar18 = DAT_ram_4009a0f4;
      fVar22 = 0.0;
    }
    else {
      fVar31 = DAT_ram_40094634;
      fVar17 = fVar20;
      fVar19 = DAT_ram_4009a108;
      fVar15 = DAT_ram_4009a100;
      fVar18 = DAT_ram_4009a0fc;
      fVar16 = in_register_00000100;
      fVar25 = DAT_ram_40094664;
      fVar22 = DAT_ram_4009a104;
      if (fVar20 <= DAT_ram_4009a0dc._4_4_) goto LAB_ram_400660be;
    }
  }
  else {
    fVar17 = fVar22;
    fVar18 = DAT_ram_40094ea8;
    fVar19 = DAT_ram_40094664;
    fVar16 = fVar12;
    if (fVar27 <= fVar12) {
LAB_ram_4006600e:
      fVar19 = fVar16;
      if (fVar17 < fVar18) {
        fVar18 = fVar17;
      }
    }
LAB_ram_40066018:
    fVar18 = (fVar18 / fVar19) * fVar30;
    fVar15 = (float)FUN_ram_40000712(fVar18);
    fVar16 = (float)FUN_ram_400009d2(fVar18);
    fVar31 = DAT_ram_40094634;
    fVar19 = (fVar15 + fVar27) * DAT_ram_40094634;
    fVar17 = -(fVar15 + fVar27);
    fVar15 = fVar15 * DAT_ram_4009461c;
    fVar18 = fVar16 / DAT_ram_40099f4c + fVar27;
    fVar16 = fVar27 - fVar16 / DAT_ram_40099f4c;
    if (fVar18 != 0.0) {
      fVar18 = fVar27 / fVar18;
      fVar19 = fVar19 * fVar18;
      fVar17 = fVar17 * fVar18;
      fVar15 = fVar15 * fVar18;
      fVar16 = fVar16 * fVar18;
    }
    *(float *)(param_2 + 0x13) = fVar19;
    *(float *)((int)param_2 + 0x9c) = fVar17;
    *(float *)(param_2 + 0x14) = fVar19;
    *(float *)((int)param_2 + 0xa4) = fVar15;
    *(float *)(param_2 + 0x15) = fVar16;
    if (fVar12 < fVar27) goto LAB_ram_40066936;
    fVar17 = fVar27;
    fVar16 = in_register_00000100;
    fVar25 = fVar12;
    if ((fVar27 <= fVar20) && (fVar17 = fVar20, fVar22 < fVar20)) {
      fVar17 = fVar22;
    }
LAB_ram_400660be:
    fVar22 = (fVar17 / fVar25) * fVar30;
    in_register_00000100 = fVar16;
    fVar17 = (float)FUN_ram_40000712(fVar22);
    fVar18 = (float)FUN_ram_400009d2(fVar22);
    fVar22 = fVar27 - fVar17;
    fVar20 = fVar18 / fVar16 + fVar27;
    fVar18 = fVar27 - fVar18 / fVar16;
    fVar19 = fVar22 * fVar31;
    fVar15 = fVar17 * fVar16;
    if (fVar20 != 0.0) {
      fVar20 = fVar27 / fVar20;
      fVar19 = fVar22 * fVar31 * fVar20;
      fVar15 = fVar17 * fVar16 * fVar20;
      fVar18 = fVar18 * fVar20;
      fVar22 = fVar22 * fVar20;
    }
  }
  fVar20 = DAT_ram_40094604;
  bVar1 = DAT_ram_40094604 <= fVar12;
  *(float *)((int)param_2 + 0xb4) = fVar19;
  *(float *)(param_2 + 0x17) = fVar22;
  *(float *)((int)param_2 + 0xbc) = fVar19;
  *(float *)(param_2 + 0x18) = fVar15;
  *(float *)((int)param_2 + 0xc4) = fVar18;
  *(float *)((int)param_2 + 0x114) = fVar20;
  *(undefined4 *)(param_2 + 0x23) = *(undefined4 *)((int)param_2 + 0x104);
  *(undefined4 *)((int)param_2 + 0x11c) = *(undefined4 *)((int)param_2 + 0x10c);
  *(int *)(param_2 + 0x24) = (int)param_2[0x22];
  *(float *)((int)param_2 + 0x124) = fVar20;
  *(undefined1 *)(param_2 + 0x25) = 1;
  uVar13 = DAT_ram_400952d4;
  puVar2 = PTR_entry_ram_40094618;
  fVar22 = DAT_ram_4009a21c;
  fVar20 = DAT_ram_40094664;
  if (bVar1) {
    fVar22 = fVar24 / (fVar12 * DAT_ram_4009a250);
    fVar20 = fVar12;
  }
  *(float *)((int)param_2 + 0x164) = fVar20;
  *(undefined **)(param_2 + 0x2d) = puVar2;
  *(undefined4 *)((int)param_2 + 0x16c) = uVar13;
  uVar13 = FUN_ram_40000bd8(fVar22);
  uVar14 = FUN_ram_40000bd8(fVar24 / (fVar20 * DAT_ram_4009a258));
  *(undefined4 *)(param_2 + 0x2e) = uVar13;
  *(undefined4 *)((int)param_2 + 0x174) = uVar14;
  fVar17 = (float)*param_2;
  *(undefined4 *)(param_2 + 0x2f) = 0;
  fVar20 = DAT_ram_4009a0f8;
  fVar22 = DAT_ram_4009a0f4;
  uVar13 = DAT_ram_4009a0ec;
  fVar18 = DAT_ram_4009a114;
  fVar19 = DAT_ram_40094664;
  fVar15 = DAT_ram_40094664;
  fVar12 = fVar21;
  if (fVar17 < fVar3) {
LAB_ram_40066860:
    fVar22 = (fVar12 / fVar15) * fVar30;
    fVar15 = (float)FUN_ram_40000712(fVar22);
    fVar16 = (float)FUN_ram_400009d2(fVar22);
    fVar12 = (fVar15 + fVar27) * DAT_ram_40094634;
    fVar20 = fVar15 * DAT_ram_4009461c;
    fVar25 = -(fVar15 + fVar27);
    fVar22 = fVar16 / DAT_ram_40099f4c + fVar27;
    fVar28 = fVar27 - fVar16 / DAT_ram_40099f4c;
    if (fVar22 != 0.0) {
LAB_ram_400669c0:
      fVar22 = fVar27 / fVar22;
      fVar12 = fVar12 * fVar22;
      fVar25 = fVar25 * fVar22;
      fVar20 = fVar20 * fVar22;
      fVar28 = fVar28 * fVar22;
    }
    *(float *)((int)param_2 + 300) = fVar12;
    *(float *)(param_2 + 0x26) = fVar25;
    *(float *)((int)param_2 + 0x134) = fVar12;
    *(float *)(param_2 + 0x27) = fVar20;
    *(float *)((int)param_2 + 0x13c) = fVar28;
    if (fVar19 < fVar27) goto LAB_ram_4006621e;
    fVar22 = fVar27;
    if ((fVar27 <= fVar18) && (fVar22 = fVar18, fVar19 * fVar23 < fVar18)) {
      fVar22 = fVar19 * fVar23;
    }
LAB_ram_4006623e:
    fVar22 = (fVar22 / fVar19) * fVar30;
    fVar19 = (float)FUN_ram_40000712(fVar22);
    fVar20 = (float)FUN_ram_400009d2(fVar22);
    fVar18 = fVar27 - fVar19;
    fVar22 = fVar20 / DAT_ram_40099f4c + fVar27;
    fVar20 = fVar27 - fVar20 / DAT_ram_40099f4c;
    fVar15 = fVar19 * DAT_ram_4009461c;
    fVar12 = fVar18;
    fVar16 = fVar18 * DAT_ram_40094634;
    if (fVar22 != 0.0) {
      fVar22 = fVar27 / fVar22;
      fVar15 = fVar19 * DAT_ram_4009461c * fVar22;
      fVar20 = fVar20 * fVar22;
      fVar12 = fVar18 * fVar22;
      fVar16 = fVar18 * DAT_ram_40094634 * fVar22;
    }
  }
  else {
    fVar16 = fVar17 * fVar23;
    fVar19 = fVar17;
    fVar15 = fVar17;
    fVar31 = fVar16;
    if (DAT_ram_4009a114 <= fVar16) {
      if (fVar16 < fVar21) goto LAB_ram_400661e2;
LAB_ram_40066984:
      fVar20 = DAT_ram_4009a224;
      fVar22 = DAT_ram_4009a228;
      fVar12 = DAT_ram_4009a230;
      fVar25 = DAT_ram_4009a22c;
      fVar28 = DAT_ram_4009a220;
      fVar16 = fVar21;
      if (fVar27 <= fVar17) goto LAB_ram_40066b50;
      goto LAB_ram_400669c0;
    }
    fVar18 = fVar16;
    if (fVar21 <= fVar16) goto LAB_ram_40066984;
LAB_ram_400661e2:
    if (fVar27 <= fVar17) {
      fVar12 = fVar27;
      if (fVar16 < fVar27) goto LAB_ram_40066860;
LAB_ram_40066b50:
      fVar12 = fVar31;
      if (fVar16 <= fVar31) {
        fVar12 = fVar16;
      }
      goto LAB_ram_40066860;
    }
    fVar15 = DAT_ram_40094664;
    fVar31 = DAT_ram_4009a0dc._4_4_;
    if (fVar27 <= fVar16) goto LAB_ram_40066b50;
    *(undefined4 *)((int)param_2 + 300) = DAT_ram_4009a0ec;
    *(float *)(param_2 + 0x26) = fVar20;
    *(undefined4 *)((int)param_2 + 0x134) = uVar13;
    *(float *)(param_2 + 0x27) = fVar20;
    *(float *)((int)param_2 + 0x13c) = fVar22;
LAB_ram_4006621e:
    if (fVar18 < fVar27) {
      fVar15 = DAT_ram_4009a0f8;
      fVar20 = DAT_ram_4009a0f4;
      fVar12 = 0.0;
      fVar16 = 0.0;
    }
    else {
      fVar22 = fVar18;
      fVar19 = DAT_ram_40094664;
      fVar15 = DAT_ram_4009a100;
      fVar20 = DAT_ram_4009a0fc;
      fVar12 = DAT_ram_4009a104;
      fVar16 = DAT_ram_4009a108;
      if (fVar18 <= DAT_ram_4009a0dc._4_4_) goto LAB_ram_4006623e;
    }
  }
  *(float *)(param_2 + 0x29) = fVar16;
  *(float *)((int)param_2 + 0x14c) = fVar12;
  *(float *)(param_2 + 0x2a) = fVar16;
  *(float *)((int)param_2 + 0x154) = fVar15;
  *(float *)(param_2 + 0x2b) = fVar20;
  fVar22 = DAT_ram_4009a234;
  fVar18 = DAT_ram_40094664;
  fVar20 = DAT_ram_40094604;
  if (fVar17 < fVar3) {
    *(undefined4 *)(param_2 + 0x38) = DAT_ram_4009a27c;
    *(float *)((int)param_2 + 0x1c4) = fVar20;
  }
  else {
    fVar22 = fVar17 * fVar23;
    if (DAT_ram_40094634 <= fVar17 * fVar23) {
      fVar22 = DAT_ram_40094634;
    }
    fVar22 = (fVar22 / fVar17) * fVar30;
    uVar13 = FUN_ram_400009d2(fVar22);
    *(undefined4 *)(param_2 + 0x38) = uVar13;
    uVar13 = FUN_ram_40000712(fVar22);
    fVar22 = DAT_ram_4009a1f8;
    *(undefined4 *)((int)param_2 + 0x1c4) = uVar13;
    fVar22 = fVar24 / (fVar17 * fVar22);
    fVar18 = fVar17;
  }
  uVar13 = FUN_ram_40000bd8(fVar22);
  uVar14 = FUN_ram_40000bd8(fVar24 / (fVar18 * DAT_ram_40095454));
  fVar20 = DAT_ram_4009a25c;
  fVar22 = DAT_ram_40094604;
  *(undefined4 *)((int)param_2 + 0x1cc) = uVar13;
  *(undefined4 *)(param_2 + 0x3a) = uVar14;
  *(float *)(param_2 + 0x39) = fVar22;
  uVar13 = FUN_ram_40000bd8(fVar20 / (float)*param_2);
  *(undefined4 *)((int)param_2 + 500) = uVar13;
  if (*(int *)((int)param_2 + 0x214) == 0) {
    fVar22 = (float)*param_2;
LAB_ram_40066a10:
    *(undefined4 *)((int)param_2 + 0x20c) = DAT_ram_4009a170;
LAB_ram_40066a1e:
    fVar20 = 0.0;
    uVar13 = 0;
    fVar24 = fVar27;
  }
  else {
    fVar22 = (float)*param_2;
    if ((ushort)param_2[0x43] < 0x44) goto LAB_ram_40066a10;
    fVar20 = DAT_ram_4009a238;
    if (fVar3 <= fVar22) {
      fVar20 = fVar22 * in_register_00000100;
    }
    uVar6 = FUN_ram_40000902(fVar20);
    uVar8 = (uint)(ushort)param_2[0x43];
    if ((int)uVar6 < 0x40) {
      uVar6 = 0x40;
    }
    if ((int)uVar6 < (int)(uVar8 - 3)) {
      uVar10 = uVar6 + 4;
      if ((int)uVar8 < (int)(uVar6 + 4)) {
        uVar10 = uVar8;
      }
      uVar10 = uVar10 & 0xffff;
    }
    else {
      uVar6 = uVar8 - 4;
      uVar10 = uVar8;
    }
    uVar9 = uVar6 & 0xffff;
    if ((uVar9 != *(ushort *)((int)param_2 + 0x20c)) ||
       (*(ushort *)((int)param_2 + 0x20e) != uVar10)) {
      *(uint *)((int)param_2 + 0x20c) = uVar10 << 0x10 | uVar6 & 0xffff;
      if ((*(int *)((int)param_2 + 0x214) != 0) && (uVar8 != 0)) {
        memset(*(int *)((int)param_2 + 0x214),0,uVar8 << 2);
        uVar9 = (uint)*(ushort *)((int)param_2 + 0x20c);
      }
      *(undefined2 *)(param_2 + 0x42) = 0;
      *(undefined4 *)((int)param_2 + 0x1fc) = 0;
      *(undefined4 *)(param_2 + 0x3f) = 0;
    }
    fVar22 = (float)*param_2;
    if (uVar9 == 0) goto LAB_ram_40066a1e;
    fVar18 = 0.0 / (float)uVar9;
    fVar20 = DAT_ram_4009a158;
    uVar13 = DAT_ram_4009a154;
    fVar24 = DAT_ram_4009a150;
    if ((DAT_ram_4009a158 <= fVar18) &&
       (fVar20 = fVar23, uVar13 = DAT_ram_4009a15c, fVar18 <= fVar23)) {
      uVar13 = FUN_ram_400009d2(fVar18 * fVar30);
      fVar24 = (float)FUN_ram_40000712(fVar18 * fVar30);
      fVar20 = fVar18;
    }
  }
  *(float *)(param_2 + 0x40) = fVar20;
  *(undefined4 *)((int)param_2 + 0x204) = uVar13;
  *(float *)(param_2 + 0x41) = fVar24;
  fVar20 = DAT_ram_40099fa4;
  if (((int)param_2[2] != 0) && (0xf < *(uint *)((int)param_2 + 0x14))) {
    if (fVar22 < fVar3) {
      fVar22 = DAT_ram_40094664;
    }
    local_a0 = DAT_ram_4009a260;
    local_9c[0] = (float)DAT_ram_4009a264;
    local_9c[1] = (float)DAT_ram_4009a268;
    local_9c[2] = (float)DAT_ram_4009a26c;
    puVar5 = (undefined2 *)((int)param_2 + 0x22e);
    uVar6 = 0;
    do {
      iVar7 = FUN_ram_40000902(*pfVar11 * fVar20 * fVar22);
      if (0 < iVar7) goto LAB_ram_40066494;
      while( true ) {
        iVar7 = 1;
LAB_ram_40066494:
        uVar10 = *(uint *)((int)param_2 + 0x14);
        *puVar5 = 0;
        uVar8 = iVar7 + uVar6;
        if (uVar10 < iVar7 + uVar6) break;
        while( true ) {
          uVar6 = uVar8;
          puVar5[-4] = (short)iVar7;
          puVar5 = puVar5 + 1;
          pfVar11 = pfVar11 + 1;
          if ((undefined2 *)((int)param_2 + 0x236) == puVar5) goto LAB_ram_400664e0;
          iVar7 = FUN_ram_40000902(*pfVar11 * fVar20 * fVar22);
          if (iVar7 < 1) break;
          uVar10 = *(uint *)((int)param_2 + 0x14);
          *puVar5 = 0;
          uVar8 = iVar7 + uVar6;
          if (uVar10 < iVar7 + uVar6) goto LAB_ram_400664d2;
        }
      }
LAB_ram_400664d2:
      puVar5[-4] = 0;
      puVar5 = puVar5 + 1;
      pfVar11 = pfVar11 + 1;
    } while ((undefined2 *)((int)param_2 + 0x236) != puVar5);
LAB_ram_400664e0:
    if (uVar6 == 0) {
      fVar22 = (float)*param_2;
    }
    else {
      memset((int)param_2[2],0,uVar6 << 2);
      fVar22 = (float)*param_2;
    }
  }
  fVar20 = DAT_ram_4009a23c;
  if (fVar27 <= fVar22) {
    if (fVar21 <= fVar22 * fVar23) {
      fVar20 = DAT_ram_4009a270 / fVar22;
    }
    else {
      fVar20 = (fVar22 * fVar23 * DAT_ram_40099fac) / fVar22;
    }
  }
  uVar13 = FUN_ram_40000bd8(fVar20);
  *(undefined4 *)((int)param_2 + 0x94) = uVar13;
  uVar13 = DAT_ram_40094ee8;
  fVar22 = DAT_ram_40094604;
  fVar20 = (float)*param_2;
  if (fVar20 <= fVar3) {
    uVar26 = (ulonglong)(uint)DAT_ram_40094604;
    uVar29 = (ulonglong)DAT_ram_40094ec4;
    bVar1 = (float)*(undefined8 *)((int)param_2 + 0x3c) == DAT_ram_4009a1dc;
    *(float *)(param_2 + 0x11) = DAT_ram_40094604;
    *(undefined4 *)((int)param_2 + 0x8c) = uVar13;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar29;
    fVar20 = DAT_ram_40094664;
    if (bVar1) goto LAB_ram_40066582;
    uVar6 = (uint)param_2[1];
    if (1 < uVar6) {
      uVar26 = (ulonglong)DAT_ram_4009a240;
      goto LAB_ram_40066566;
    }
LAB_ram_40066576:
    uVar29 = (ulonglong)(uint)DAT_ram_4009a1dc;
    *(ulonglong *)((int)param_2 + 100) = uVar26;
    *(ulonglong *)((int)param_2 + 0x3c) = uVar29;
  }
  else {
    uVar26 = (ulonglong)DAT_ram_40094ec4;
    bVar1 = (float)*(undefined8 *)((int)param_2 + 0x3c) != DAT_ram_4009a1dc;
    *(float *)(param_2 + 0x11) = DAT_ram_40094604;
    *(undefined4 *)((int)param_2 + 0x8c) = uVar13;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar26;
    if (bVar1) {
      uVar6 = (uint)param_2[1];
      uVar26 = (ulonglong)(uint)(fVar20 * DAT_ram_4009a274);
      if (fVar22 <= fVar20 * DAT_ram_4009a274) {
        if (1 < uVar6) goto LAB_ram_40066566;
      }
      else {
        uVar26 = (ulonglong)(uint)fVar22;
        if (uVar6 < 2) goto LAB_ram_40066576;
LAB_ram_40066566:
        fVar22 = (float)(uVar6 - 2);
      }
      if (fVar22 < (float)uVar26) {
        uVar26 = (ulonglong)(uint)fVar22;
      }
      goto LAB_ram_40066576;
    }
  }
LAB_ram_40066582:
  if ((float)param_2[8] != DAT_ram_4009a1e0) {
    uVar26 = (ulonglong)DAT_ram_4009a278;
    param_2[8] = (ulonglong)(uint)DAT_ram_4009a1e0;
    param_2[0xd] = uVar26;
  }
  if ((float)*(undefined8 *)((int)param_2 + 0x44) == DAT_ram_4009601c) goto LAB_ram_400665f4;
  fVar22 = fVar20 * fVar23;
  if (fVar22 < DAT_ram_4009a244) {
    if (fVar20 < fVar27) {
      fVar24 = DAT_ram_4009a0dc._4_4_;
      fVar20 = DAT_ram_40094664;
      if (fVar27 <= fVar22) goto LAB_ram_400665ca;
    }
    else if (fVar27 <= fVar22) goto LAB_ram_40066c04;
    fVar21 = DAT_ram_40099fac / fVar20;
  }
  else {
    fVar24 = fVar22;
    fVar22 = DAT_ram_4009a244;
    fVar21 = DAT_ram_4009a248;
    if (fVar27 <= fVar20) {
LAB_ram_400665ca:
      if (fVar22 <= fVar24) {
LAB_ram_40066c04:
        fVar21 = (fVar22 * DAT_ram_40099fac) / fVar20;
      }
      else {
        fVar21 = (fVar24 * DAT_ram_40099fac) / fVar20;
      }
    }
  }
  uVar13 = FUN_ram_40000bd8(fVar21);
  uVar26 = (ulonglong)(uint)DAT_ram_4009601c;
  *(undefined4 *)(param_2 + 0x12) = uVar13;
  *(ulonglong *)((int)param_2 + 0x44) = uVar26;
LAB_ram_400665f4:
  if ((float)param_2[9] == DAT_ram_4009a1b4) {
    uVar26 = *(ulonglong *)((int)param_2 + 0x6c);
  }
  else {
    uVar26 = (ulonglong)(uint)DAT_ram_4009a1b4;
    *(ulonglong *)((int)param_2 + 0x6c) = (ulonglong)(uint)DAT_ram_4009a1b4;
  }
  if ((float)*(undefined8 *)((int)param_2 + 0x4c) == fVar27) {
    fVar27 = (float)param_2[0xe];
  }
  else {
    param_2[0xe] = (ulonglong)(uint)fVar27;
  }
  *(undefined8 *)((int)param_2 + 0x74) = *(undefined8 *)((int)param_2 + 100);
  param_2[0xf] = param_2[0xd];
  *(ulonglong *)((int)param_2 + 0x7c) = uVar26;
  *(float *)(param_2 + 0x10) = fVar27;
  if ((*(int *)((int)param_2 + 4) != 0) && ((int)param_2[1] != 0)) {
    memset(*(int *)((int)param_2 + 4),0,(int)param_2[1] << 2);
  }
  uVar26 = (ulonglong)(uint)DAT_ram_40094604;
  *(undefined4 *)((int)param_2 + 0xc) = 0;
  *(undefined4 *)((int)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(ulonglong *)((int)param_2 + 0x2c) = uVar26;
  *(undefined2 *)(param_2 + 7) = 0;
  *(undefined1 *)((int)param_2 + 0x3a) = 1;
  if (((int)param_2[2] != 0) && (*(int *)((int)param_2 + 0x14) != 0)) {
    memset((int)param_2[2],0,*(int *)((int)param_2 + 0x14) << 2);
  }
  fVar22 = DAT_ram_40094604;
  *(undefined4 *)(param_2 + 0x1e) = 0x12345678;
  *(undefined4 *)((int)param_2 + 0x184) = 0x87654321;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((int)param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0xb) = 0;
  *(undefined4 *)((int)param_2 + 0x5c) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined1 *)((int)param_2 + 0x84) = 0;
  *(undefined4 *)((int)param_2 + 0xac) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0;
  *(undefined4 *)(param_2 + 0x19) = 0;
  *(undefined4 *)((int)param_2 + 0xcc) = 0;
  *(undefined4 *)((int)param_2 + 0xe4) = 0;
  *(undefined4 *)(param_2 + 0x1d) = 0;
  *(undefined4 *)((int)param_2 + 0xec) = 0;
  *(undefined4 *)((int)param_2 + 0xf4) = 0;
  *(float *)(param_2 + 0x1f) = fVar22;
  *(undefined1 *)(param_2 + 0x25) = 0;
  *(float *)((int)param_2 + 0x114) = fVar22;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)((int)param_2 + 0x144) = 0;
  *(undefined4 *)((int)param_2 + 0x15c) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x2f) = 0;
  *(undefined4 *)((int)param_2 + 0x17c) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(float *)(param_2 + 0x31) = fVar22;
  *(undefined4 *)((int)param_2 + 0x18c) = 0;
  *(undefined4 *)(param_2 + 0x32) = 0;
  *(float *)((int)param_2 + 0x194) = fVar22;
  *(undefined4 *)(param_2 + 0x33) = 0;
  *(undefined4 *)((int)param_2 + 0x19c) = 0;
  *(float *)(param_2 + 0x34) = fVar22;
  *(undefined4 *)((int)param_2 + 0x1a4) = 0;
  fVar27 = (float)*param_2;
  *(undefined4 *)(param_2 + 0x35) = 0;
  *(float *)((int)param_2 + 0x1ac) = fVar22;
  *(undefined4 *)(param_2 + 0x36) = 0;
  *(undefined4 *)((int)param_2 + 0x1b4) = 0;
  *(undefined4 *)(param_2 + 0x37) = 0;
  *(float *)((int)param_2 + 0x1bc) = fVar22;
  uVar13 = DAT_ram_4009a174;
  if (fVar3 <= fVar27) {
    fVar23 = fVar27 * fVar23;
    if (fVar4 <= fVar23) {
      fVar23 = fVar4;
    }
    fVar30 = (fVar23 / fVar27) * fVar30;
    uVar13 = FUN_ram_400009d2(fVar30);
    fVar22 = (float)FUN_ram_40000712(fVar30);
  }
  fVar23 = DAT_ram_40094604;
  *(undefined4 *)(param_2 + 0x38) = uVar13;
  *(float *)((int)param_2 + 0x1c4) = fVar22;
  *(float *)(param_2 + 0x39) = fVar23;
  *(undefined4 *)((int)param_2 + 0x1d4) = 0;
  *(undefined4 *)(param_2 + 0x3b) = 0;
  *(undefined4 *)((int)param_2 + 0x21c) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(undefined1 *)((int)param_2 + 0x224) = 0;
  if (*(short *)((int)param_2 + 0x20e) == 0) {
    *(undefined2 *)((int)param_2 + 0x20e) = 0x44;
  }
  if (*(short *)((int)param_2 + 0x20c) == 0) {
    *(undefined2 *)((int)param_2 + 0x20c) = 0x40;
  }
  if ((*(int *)((int)param_2 + 0x214) != 0) && ((ushort)param_2[0x43] != 0)) {
    memset(*(int *)((int)param_2 + 0x214),0,(uint)(ushort)param_2[0x43] << 2);
  }
  uVar26 = (ulonglong)(uint)DAT_ram_40094600;
  *(undefined1 *)((int)param_2 + 0x236) = 0;
  *(undefined2 *)(param_2 + 0x42) = 0;
  *(undefined4 *)((int)param_2 + 0x1fc) = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  *(ulonglong *)((int)param_2 + 0x3c) = uVar26;
  param_2[8] = uVar26;
  *(ulonglong *)((int)param_2 + 0x44) = uVar26;
  param_2[9] = uVar26;
  *(ulonglong *)((int)param_2 + 0x4c) = uVar26;
  param_2[10] = uVar26;
  *(undefined2 *)((int)param_2 + 0x22e) = 0;
  *(undefined4 *)(param_2 + 0x46) = 0;
  *(undefined2 *)((int)param_2 + 0x234) = 0;
  return;
}


