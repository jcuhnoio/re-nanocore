/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40069000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4006904e.
 * REA evidence: ev_61e98acccc70fb8075d77c567e0496c9d6a4305032f83c5d2e0de8b0136f165a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006904e(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_4006f2d6(param_1 + 0x60d4);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4006905e.
 * REA evidence: ev_c2a30ae5c6cdaeba67dc37f7aa6d1382c2c7acafa9da59bbc14d2c7c42a50be6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4006905e(uint param_1)

{
  return param_1 & -(uint)(param_1 < 0xc);
}


/* NanoCore 1.10, address 0x4006906a.
 * REA evidence: ev_9d5ba74a17ace420391120e6bbaef1b660c442cf8c606447dc2a3beefce49253
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4006906a(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0xc) && (param_1 != 8)) {
    uVar1 = 4;
    if ((param_1 != 9) && (uVar1 = 5, 1 < (param_1 - 10 & 0xff))) {
      uVar1 = 3;
      if ((param_1 - 5 & 0xff) < 3) {
        uVar1 = 1;
      }
      return uVar1;
    }
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x400690a8.
 * REA evidence: ev_9773808e38402e0ca5dad22ee178ece7c11d2083b6b4a5c73d05ec0a707fd2e6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400690a8(ulonglong *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  if ((param_1 == (ulonglong *)0x0) || (param_2 == 0)) {
    return;
  }
  if (0xb < param_3) {
    FUN_ram_40071742();
    return;
  }
  if (param_3 != 8) {
    if (param_3 == 9) {
      memset(param_1,0,param_2 << 2);
      *param_1 = (ulonglong)DAT_ram_400985bc;
      if (param_2 == 1) {
        return;
      }
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_400930d8;
      if (param_2 != 2) {
        param_1[1] = (ulonglong)DAT_ram_400985c0;
      }
      if (param_2 < 4) {
        return;
      }
      *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_4009287c;
      return;
    }
    if (param_3 == 10) {
      memset(param_1,0,param_2 << 2);
      uVar1 = (ulonglong)DAT_ram_40092864;
      *param_1 = uVar1;
      if (param_2 != 1) {
        *(ulonglong *)((int)param_1 + 4) = uVar1;
        if (param_2 != 2) {
          param_1[1] = (ulonglong)DAT_ram_400985c4;
        }
        if (3 < param_2) {
          *(undefined4 *)((int)param_1 + 0xc) = 0;
        }
      }
      if (param_2 < 5) {
        return;
      }
      param_1[2] = (ulonglong)DAT_ram_4009287c;
      return;
    }
    if (param_3 == 0xb) {
      FUN_ram_4006f3ae();
      return;
    }
    if (2 < (param_3 - 5 & 0xff)) {
      FUN_ram_40071742();
      return;
    }
  }
  memset(param_1,0,param_2 << 2);
  *param_1 = CONCAT44(_DAT_ram_40092868,DAT_ram_40092864);
  if ((param_2 != 1) &&
     (*(ulonglong *)((int)param_1 + 4) = CONCAT44(_DAT_ram_40092868,DAT_ram_40092864), param_2 != 2)
     ) {
    param_1[1] = (ulonglong)DAT_ram_4009281c;
  }
  return;
}


