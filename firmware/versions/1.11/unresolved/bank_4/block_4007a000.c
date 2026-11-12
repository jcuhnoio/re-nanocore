/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4007a000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4007a836.
 * REA evidence: ev_ce458019c8924d855b2fe7b7f3450592511fbc89548253078bc23fad73f9d008
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007a836(float param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_2 != (ulonglong *)0x0) {
    memset(param_2,0,0x2d2e0);
    uVar6 = DAT_ram_4009ae28;
    uVar5 = DAT_ram_4009ae24;
    uVar4 = DAT_ram_4009ae20;
    uVar3 = DAT_ram_4009ae1c;
    uVar2 = DAT_ram_4009ae18;
    uVar1 = DAT_ram_4009ae14;
    *(undefined4 *)((int)param_2 + 4) = DAT_ram_4009ae10;
    *(undefined4 *)(param_2 + 1) = uVar1;
    *(undefined4 *)((int)param_2 + 0xc) = uVar2;
    *(undefined4 *)(param_2 + 2) = uVar3;
    *(undefined4 *)((int)param_2 + 0x14) = uVar4;
    *(undefined4 *)(param_2 + 3) = uVar5;
    *(undefined4 *)((int)param_2 + 0x1c) = uVar6;
    if (param_1 <= 0.0) {
      param_1 = DAT_ram_40099f80;
    }
    *(undefined **)(param_2 + 4) = &sedeleg;
    *param_2 = (ulonglong)(uint)param_1;
    FUN_ram_4007989c(param_2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4007a8ae.
 * REA evidence: ev_d2b1c0f868fe14df40fab57e7d1dc9f8d82be67c1750e1a1b2043a1b69a42600
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007a8ae(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = *param_2;
    uVar6 = param_2[1];
    uVar5 = param_2[2];
    uVar2 = param_2[3];
    uVar3 = param_2[4];
    uVar4 = param_2[5];
    *(undefined4 *)(param_1 + 0x1c) = param_2[6];
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 8) = uVar6;
    *(undefined4 *)(param_1 + 0xc) = uVar5;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}


/* NanoCore 1.11, address 0x4007a8e4.
 * REA evidence: ev_851ed164d3b06cd39307ff0fe5d63a24890656e7d8f487f46bd573bea9def96c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4007a8e4(int param_1)

{
  undefined4 *puVar1;
  int iVar3;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    memset(param_1 + 0x318,0,0x9604);
    *(undefined4 *)(param_1 + 0x24) = 0;
    memset(param_1 + 0x991c,0,0x2c94);
    *(undefined4 *)(param_1 + 0x34) = 0;
    iVar3 = param_1 + 0xc5b0;
    do {
      iVar3 = memset(iVar3,0,0xc80);
      *(undefined4 *)(iVar3 + 0xc84) = 0;
      iVar3 = iVar3 + 0xc8c;
    } while (iVar3 != param_1 + 0xf7e0);
    iVar3 = param_1 + 0xf7e0;
    puVar1 = (undefined4 *)(param_1 + 300);
    do {
      puVar2 = puVar1 + 1;
      iVar3 = memset(iVar3,0,0x3b60);
      *puVar1 = 0;
      puVar1[0x42] = 0;
      puVar1[0x4a] = 0;
      iVar3 = iVar3 + 0x3b60;
      puVar1 = puVar2;
    } while (puVar2 != (undefined4 *)(param_1 + 0x14c));
    *(undefined4 *)(param_1 + 0x280) = 0;
    *(undefined1 *)(param_1 + 0x151) = 0;
    memset(param_1 + 0x154,0,0x20);
    *(undefined4 *)(param_1 + 0x298) = 0;
    *(undefined4 *)(param_1 + 0x29c) = 0;
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x2a4) = 0;
    *(undefined4 *)(param_1 + 0x2c0) = 0;
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    *(undefined4 *)(param_1 + 0x2cc) = 0;
    *(undefined4 *)(param_1 + 0x2e4) = 0;
    *(undefined4 *)(param_1 + 0x2e8) = 0;
    *(undefined4 *)(param_1 + 0x2ec) = 0;
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    *(undefined4 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x30c) = 0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    *(undefined4 *)(param_1 + 0x314) = 0;
    return;
  }
  return;
}


