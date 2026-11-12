/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4007c000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4007cb36.
 * REA evidence: ev_692d550ab7b26403d71f4767da1cc78d167298e9cdb4ca019e1b1e6da23a75fa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007cb36(ulonglong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_2 != (ulonglong *)0x0) {
    memset(param_2,0,0x415f4);
    uVar1 = DAT_ram_4009ae88;
    uVar2 = (ulonglong)DAT_ram_4009ae8c;
    uVar3 = (ulonglong)DAT_ram_4009a8a4;
    uVar4 = (ulonglong)DAT_ram_4009a1cc;
    uVar5 = (ulonglong)DAT_ram_40094608;
    uVar6 = (ulonglong)DAT_ram_4009a8a8;
    uVar7 = (ulonglong)DAT_ram_40094604;
    *param_2 = param_1 & 0xffffffff;
    *(undefined **)(param_2 + 6) = &sedeleg;
    *(undefined4 *)((int)param_2 + 4) = uVar1;
    param_2[1] = uVar2;
    *(ulonglong *)((int)param_2 + 0xc) = uVar3;
    param_2[2] = uVar4;
    *(ulonglong *)((int)param_2 + 0x1c) = uVar5;
    param_2[4] = uVar6;
    *(ulonglong *)((int)param_2 + 0x24) = uVar7;
    FUN_ram_4007bc2c(param_2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4007cbb6.
 * REA evidence: ev_74333e99c5b584422a6b0b074eca440918bb1c41ed182e77164d865f26d34f53
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007cbb6(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar10 = *param_2;
    uVar9 = param_2[1];
    uVar8 = param_2[2];
    uVar7 = param_2[3];
    uVar1 = param_2[4];
    uVar6 = param_2[5];
    uVar5 = param_2[6];
    uVar2 = param_2[7];
    uVar3 = param_2[8];
    uVar4 = param_2[9];
    *(undefined4 *)(param_1 + 0x2c) = param_2[10];
    *(undefined4 *)(param_1 + 4) = uVar10;
    *(undefined4 *)(param_1 + 8) = uVar9;
    *(undefined4 *)(param_1 + 0xc) = uVar8;
    *(undefined4 *)(param_1 + 0x10) = uVar7;
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x18) = uVar6;
    *(undefined4 *)(param_1 + 0x1c) = uVar5;
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}


/* NanoCore 1.11, address 0x4007cc0a.
 * REA evidence: ev_5d2fe12ef838cbe57de92189e5069464b8b3c0ddaa03727172f161c15a6b0f61
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_4007cc0a(int param_1)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  
  if (param_1 != 0) {
    if (*(ushort *)(param_1 + 0x3e) == 0) {
      uVar1 = *(ushort *)(param_1 + 0x40);
      *(undefined2 *)(param_1 + 0x46) = 0;
    }
    else {
      memset(param_1 + 0x1a70,0,(uint)*(ushort *)(param_1 + 0x3e) << 2);
      uVar1 = *(ushort *)(param_1 + 0x40);
      *(undefined2 *)(param_1 + 0x46) = 0;
    }
    if (uVar1 == 0) {
      uVar1 = *(ushort *)(param_1 + 0x42);
      *(undefined2 *)(param_1 + 0x48) = 0;
    }
    else {
      memset(param_1 + 0x2270,0,(uint)uVar1 << 2);
      uVar1 = *(ushort *)(param_1 + 0x42);
      *(undefined2 *)(param_1 + 0x48) = 0;
    }
    if (uVar1 == 0) {
      uVar1 = *(ushort *)(param_1 + 0x44);
      *(undefined2 *)(param_1 + 0x4a) = 0;
    }
    else {
      memset(param_1 + 0x2a70,0,(uint)uVar1 << 2);
      uVar1 = *(ushort *)(param_1 + 0x44);
      *(undefined2 *)(param_1 + 0x4a) = 0;
    }
    if (uVar1 == 0) {
      uVar1 = *(ushort *)(param_1 + 0x32);
      *(undefined2 *)(param_1 + 0x4c) = 0;
    }
    else {
      memset(param_1 + 0x3270,0,(uint)uVar1 << 2);
      uVar1 = *(ushort *)(param_1 + 0x32);
      *(undefined2 *)(param_1 + 0x4c) = 0;
    }
    if (uVar1 == 0) {
      uVar1 = *(ushort *)(param_1 + 0x34);
      *(undefined2 *)(param_1 + 0x38) = 0;
    }
    else {
      memset(param_1 + 0x270,0,(uint)uVar1 << 2);
      uVar1 = *(ushort *)(param_1 + 0x34);
      *(undefined2 *)(param_1 + 0x38) = 0;
    }
    if (uVar1 == 0) {
      uVar1 = *(ushort *)(param_1 + 0x36);
      *(undefined2 *)(param_1 + 0x3a) = 0;
    }
    else {
      memset(param_1 + 0xa70,0,(uint)uVar1 << 2);
      uVar1 = *(ushort *)(param_1 + 0x36);
      *(undefined2 *)(param_1 + 0x3a) = 0;
    }
    if (uVar1 == 0) {
      sVar2 = *(short *)(param_1 + 0x4e);
      *(undefined2 *)(param_1 + 0x3c) = 0;
    }
    else {
      memset(param_1 + 0x1270,0,(uint)uVar1 << 2);
      sVar2 = *(short *)(param_1 + 0x4e);
      *(undefined2 *)(param_1 + 0x3c) = 0;
    }
    if (sVar2 == 0) {
      sVar2 = *(short *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0xb0) = 0;
      *(undefined4 *)(param_1 + 0xf0) = 0;
    }
    else {
      memset(param_1 + 0x3a70,0,0x3390);
      sVar2 = *(short *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0xb0) = 0;
      *(undefined4 *)(param_1 + 0xf0) = 0;
    }
    if (sVar2 == 0) {
      sVar2 = *(short *)(param_1 + 0x52);
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(undefined4 *)(param_1 + 0xf4) = 0;
    }
    else {
      memset(param_1 + 0x6e00,0,0x3390);
      sVar2 = *(short *)(param_1 + 0x52);
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(undefined4 *)(param_1 + 0xf4) = 0;
    }
    if (sVar2 == 0) {
      sVar2 = *(short *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
    else {
      memset(param_1 + 0xa190,0,0x3390);
      sVar2 = *(short *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
    if (sVar2 == 0) {
      sVar2 = *(short *)(param_1 + 0x56);
      *(undefined4 *)(param_1 + 0xbc) = 0;
      *(undefined4 *)(param_1 + 0xfc) = 0;
    }
    else {
      memset(param_1 + 0xd520,0,0x3390);
      sVar2 = *(short *)(param_1 + 0x56);
      *(undefined4 *)(param_1 + 0xbc) = 0;
      *(undefined4 *)(param_1 + 0xfc) = 0;
    }
    if (sVar2 == 0) {
      sVar2 = *(short *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
    else {
      memset(param_1 + 0x108b0,0,0x3390);
      sVar2 = *(short *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
    if (sVar2 == 0) {
      sVar2 = *(short *)(param_1 + 0x5a);
      *(undefined4 *)(param_1 + 0xc4) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
    }
    else {
      memset(param_1 + 0x13c40,0,0x3390);
      sVar2 = *(short *)(param_1 + 0x5a);
      *(undefined4 *)(param_1 + 0xc4) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
    }
    if (sVar2 == 0) {
      sVar2 = *(short *)(param_1 + 0x5c);
      *(undefined4 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0x108) = 0;
    }
    else {
      memset(param_1 + 0x16fd0,0,0x3390);
      sVar2 = *(short *)(param_1 + 0x5c);
      *(undefined4 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0x108) = 0;
    }
    if (sVar2 == 0) {
      sVar2 = *(short *)(param_1 + 0x5e);
      *(undefined4 *)(param_1 + 0xcc) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 0;
    }
    else {
      memset(param_1 + 0x1a360,0,0x3390);
      sVar2 = *(short *)(param_1 + 0x5e);
      *(undefined4 *)(param_1 + 0xcc) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 0;
    }
    if (sVar2 == 0) {
      sVar2 = *(short *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0xd0) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    else {
      memset(param_1 + 0x1d6f0,0,0x3390);
      sVar2 = *(short *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0xd0) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    if (sVar2 == 0) {
      sVar2 = *(short *)(param_1 + 0x62);
      *(undefined4 *)(param_1 + 0xd4) = 0;
      *(undefined4 *)(param_1 + 0x114) = 0;
    }
    else {
      memset(param_1 + 0x20a80,0,0x3390);
      sVar2 = *(short *)(param_1 + 0x62);
      *(undefined4 *)(param_1 + 0xd4) = 0;
      *(undefined4 *)(param_1 + 0x114) = 0;
    }
    if (sVar2 == 0) {
      sVar2 = *(short *)(param_1 + 100);
      *(undefined4 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0x118) = 0;
    }
    else {
      memset(param_1 + 0x23e10,0,0x3390);
      sVar2 = *(short *)(param_1 + 100);
      *(undefined4 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0x118) = 0;
    }
    if (sVar2 == 0) {
      sVar2 = *(short *)(param_1 + 0x66);
      *(undefined4 *)(param_1 + 0xdc) = 0;
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
    else {
      memset(param_1 + 0x271a0,0,0x3390);
      sVar2 = *(short *)(param_1 + 0x66);
      *(undefined4 *)(param_1 + 0xdc) = 0;
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
    if (sVar2 == 0) {
      sVar2 = *(short *)(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    else {
      memset(param_1 + 0x2a530,0,0x3390);
      sVar2 = *(short *)(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    if (sVar2 == 0) {
      sVar2 = *(short *)(param_1 + 0x6a);
      *(undefined4 *)(param_1 + 0xe4) = 0;
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
    else {
      memset(param_1 + 0x2d8c0,0,0x3390);
      sVar2 = *(short *)(param_1 + 0x6a);
      *(undefined4 *)(param_1 + 0xe4) = 0;
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
    if (sVar2 == 0) {
      sVar2 = *(short *)(param_1 + 0x6c);
      *(undefined4 *)(param_1 + 0xe8) = 0;
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
    else {
      memset(param_1 + 0x30c50,0,0x3390);
      sVar2 = *(short *)(param_1 + 0x6c);
      *(undefined4 *)(param_1 + 0xe8) = 0;
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
    if (sVar2 != 0) {
      memset(param_1 + 0x33fe0,0,0x3390);
    }
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined2 *)(param_1 + 0x6e) = 0;
    memset(param_1 + 0x37370,0,0xc84);
    *(undefined2 *)(param_1 + 0x130) = 0;
    memset(param_1 + 0x37ff4,0,0x9600);
    uVar3 = DAT_ram_40094604;
    *(undefined2 *)(param_1 + 0x136) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x268) = uVar3;
    return;
  }
  return;
}


