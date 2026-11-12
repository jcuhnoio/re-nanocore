/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40070000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40070e4c.
 * REA evidence: ev_0f04d6288079c611c76d13f0c5405aa8757d797f77f6366f97306c9cbb8ace08
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char FUN_ram_40070e4c(uint param_1)

{
  char cVar1;
  
  if (param_1 < 5) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\0';
    if ((3 < (param_1 - 8 & 0xff)) && (cVar1 = '\x02', param_1 != 0xc)) {
      return -(param_1 != 0x11);
    }
  }
  return cVar1;
}


/* NanoCore 1.12, address 0x40070e82.
 * REA evidence: ev_f7d80afe3e257b6533a6646dad0f291a7c3af31baf2f15598279c0547bc1fb13
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40070e82(uint param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 < 5) || ((param_1 - 8 & 0xff) < 4)) {
    uVar1 = 0;
  }
  else if (param_1 == 0xc) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
    if (param_1 != 0x11) {
      return uVar1;
    }
  }
  return (uint)(param_2 == uVar1);
}


/* NanoCore 1.12, address 0x40070eb8.
 * REA evidence: ev_040b30b6eec6377a6d405a41a384e9f0dc079507ae0d22819c16bf9a83891c25
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_40070eb8(float param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_2 < 5) {
    uVar1 = param_2 - 1 & 0xff;
    fVar5 = DAT_ram_40099f88;
    fVar3 = DAT_ram_4009a368;
    if (uVar1 < 0x11) {
      iVar2 = uVar1 * 4;
      fVar5 = *(float *)(&DAT_ram_4009f808 + iVar2);
      fVar3 = (float)*(undefined8 *)(&DAT_ram_4009f84c + iVar2);
      if ((float)*(undefined8 *)(&DAT_ram_4009f84c + iVar2) <= *(float *)(&DAT_ram_4009f808 + iVar2)
         ) {
        return 0.0;
      }
    }
  }
  else {
    if ((4 < (param_2 - 8 & 0xff)) && (param_2 != 0x11)) {
      return 0.0;
    }
    iVar2 = (param_2 - 1 & 0xff) * 4;
    fVar5 = *(float *)(&DAT_ram_4009f808 + iVar2);
    fVar3 = (float)*(undefined8 *)(&DAT_ram_4009f84c + iVar2);
    if (fVar3 <= fVar5) {
      return 0.0;
    }
    if (param_2 == 10) {
      fVar4 = fVar5;
      if ((fVar5 <= param_1) && (fVar4 = param_1, fVar3 < param_1)) {
        fVar4 = fVar3;
      }
      fVar4 = (float)FUN_ram_40000c5e(fVar4 / fVar5);
      fVar5 = (float)FUN_ram_40000c5e(fVar3 / fVar5);
      fVar4 = fVar4 / fVar5;
      if (fVar4 < 0.0) {
        return 0.0;
      }
      goto LAB_ram_40070efa;
    }
  }
  fVar4 = (param_1 - fVar5) / (fVar3 - fVar5);
  if (fVar4 < 0.0) {
    return 0.0;
  }
LAB_ram_40070efa:
  if (DAT_ram_4009672c < fVar4) {
    fVar4 = DAT_ram_4009672c;
  }
  return fVar4;
}


/* NanoCore 1.12, address 0x40070fd8.
 * REA evidence: ev_bc52e90887ebe1f0a7a4cd04c51ef8e14032fe65a3fd67af9aedb955ce3e56fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40070fd8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    iVar3 = param_1 + 0x44;
    do {
      iVar3 = memset(iVar3,0,0x80);
      fence();
      iVar3 = iVar3 + 0x80;
    } while (iVar3 != param_1 + 0x1fc4);
    memset(param_1 + 0x1fc4,0,0x80);
    fence();
    uVar4 = (ulonglong)DAT_ram_4009f76c;
    *(ulonglong *)(param_1 + 0x14) = (ulonglong)DAT_ram_4009f770;
    *(ulonglong *)(param_1 + 0x10) = uVar4;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    memset(param_1 + 0x208c,0,0x20);
    memset(param_1 + 0x20ac,0,0x20);
    uVar4 = (ulonglong)DAT_ram_4009672c;
    *(undefined4 *)(param_1 + 0x20cc) = 0;
    *(undefined4 *)(param_1 + 0x2084) = 0;
    *(undefined4 *)(param_1 + 0x20d0) = 0;
    *(undefined4 *)(param_1 + 0x2088) = 0;
    *(undefined4 *)(param_1 + 0x2048) = 0;
    *(ulonglong *)(param_1 + 0x204c) = uVar4;
    iVar3 = param_1 + 0x3120;
    do {
      iVar3 = memset(iVar3,0,0x80);
      fence();
      iVar3 = iVar3 + 0x80;
    } while (iVar3 != param_1 + 0x40a0);
    memset(param_1 + 0x40a0,0,0x80);
    uVar1 = DAT_ram_4009672c;
    fence();
    *(undefined4 *)(param_1 + 0x4120) = 0;
    *(undefined4 *)(param_1 + 0x4128) = 0;
    *(undefined4 *)(param_1 + 0x4130) = 0;
    *(undefined4 *)(param_1 + 0x4124) = 0;
    *(undefined4 *)(param_1 + 0x412c) = 0;
    *(undefined4 *)(param_1 + 0x4134) = 0;
    *(undefined4 *)(param_1 + 0x2118) = 0;
    *(undefined4 *)(param_1 + 0x20d8) = 0;
    *(uint *)(param_1 + 0x20dc) = uVar1;
    *(undefined4 *)(param_1 + 0x2110) = 0;
    *(undefined4 *)(param_1 + 0x2114) = 0;
    *(undefined4 *)(param_1 + 0x4138) = 0;
    *(uint *)(param_1 + 0x4178) = uVar1;
    *(undefined4 *)(param_1 + 0x4140) = 0;
    *(uint *)(param_1 + 0x4144) = uVar1;
    iVar3 = param_1 + 0x41dc;
    do {
      iVar3 = memset(iVar3,0,0x80);
      fence();
      iVar3 = iVar3 + 0x80;
    } while (iVar3 != param_1 + 0x1415c);
    memset(param_1 + 0x1415c,0,0x80);
    uVar2 = DAT_ram_4009f774;
    fence();
    *(uint *)(param_1 + 0x4194) = DAT_ram_4009672c;
    *(undefined4 *)(param_1 + 0x4180) = 0;
    *(undefined1 *)(param_1 + 0x4184) = 0;
    *(undefined2 *)(param_1 + 0x4186) = 0;
    *(undefined4 *)(param_1 + 0x4188) = 0;
    *(undefined4 *)(param_1 + 0x4190) = 0;
    *(undefined4 *)(param_1 + 0x141dc) = uVar2;
    memset(param_1 + 0x141e0,0,0x20);
    memset(param_1 + 0x14200,0,0x20);
    *(undefined1 *)(param_1 + 0x14220) = 0;
    *(undefined1 *)(param_1 + 0x14221) = 0;
    *(undefined1 *)(param_1 + 0x14222) = 0;
    *(undefined1 *)(param_1 + 0x14223) = 0;
    *(undefined1 *)(param_1 + 0x14224) = 0;
    *(undefined1 *)(param_1 + 0x14225) = 0;
    *(undefined1 *)(param_1 + 0x14226) = 0;
    *(undefined1 *)(param_1 + 0x14227) = 0;
    memset(param_1 + 0x14228,0,0x20);
    *(undefined2 *)(param_1 + 0x142a8) = 0;
    *(undefined1 *)(param_1 + 0x142aa) = 0;
    FUN_ram_40071d38(param_1 + 0x142ac);
    FUN_ram_40074d8c(param_1 + 0x142c8);
    FUN_ram_40072570(param_1 + 0x172d4);
    return;
  }
  return;
}


