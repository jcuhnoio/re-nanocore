/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40000000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400000b2.
 * REA evidence: ev_d37173f2c32da7889ddddf944b13c774221cea2f130819d85e833e2198c9bc8a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400000b2(undefined4 param_1)

{
  _DAT_ram_300499a0 = param_1;
  _DAT_ram_3004999c = 0;
  _DAT_ram_300499a4 = 1;
  DAT_csreg_07e1 = DAT_csreg_07e1 | 0x10000;
  DAT_ram_2080100c = DAT_ram_2080100c | 1;
  fence();
  fence();
  custom0();
  mstatus = mstatus | 8;
  return;
}


/* NanoCore 1.10, address 0x4000010a.
 * REA evidence: ev_e61133de26de84736fef8c9ab735ec5189352eda13497f7eaa619f2dcd5e91fc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000010a(undefined4 param_1,undefined4 param_2)

{
  if (_DAT_ram_300499a4 != 1) {
    _DAT_ram_300499a4 = 1;
    _DAT_ram_3004999c = param_1;
  }
  _DAT_ram_300499a0 = param_2;
  DAT_ram_2080100c = DAT_ram_2080100c | 1;
  fence();
  fence();
  custom0();
  return;
}


/* NanoCore 1.10, address 0x400002f4.
 * REA evidence: ev_1c87d328d622d09e5a93d7994a0a69c8bf81a61342c640642e8933525109ec34
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400002f4(void)

{
  uint uVar1;
  
  uVar1 = mstatus;
  mstatus = mstatus & 0xfffffff7;
  return uVar1;
}


/* NanoCore 1.10, address 0x400002fa.
 * REA evidence: ev_49743b0f1b7d05e96e8a383ee86b79c60c4774263e91a4f318531864e2fa6a42
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400002fa(undefined4 param_1)

{
  mstatus = param_1;
  return;
}


/* NanoCore 1.10, address 0x40000300.
 * REA evidence: ev_20afb42180a87a15ab6299b20dcbb2bfa6b742babc2f9abd6679fe89752f9b93
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40000300(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 unaff_retaddr;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  undefined4 unaff_s5;
  undefined4 unaff_s6;
  undefined4 unaff_s7;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  
  DAT_ram_30045d10 = param_1;
  DAT_ram_30045d14 = param_2;
  DAT_ram_30045d18 = param_3;
  DAT_ram_30045d1c = param_4;
  DAT_ram_30045d20 = param_5;
  DAT_ram_30045d24 = param_6;
  DAT_ram_30045d28 = param_7;
  DAT_ram_30045d2c = param_8;
  DAT_ram_30045d30 = unaff_s0;
  DAT_ram_30045d34 = unaff_s1;
  DAT_ram_30045d38 = unaff_s2;
  DAT_ram_30045d3c = unaff_s3;
  DAT_ram_30045d40 = unaff_s4;
  DAT_ram_30045d44 = unaff_s5;
  DAT_ram_30045d48 = unaff_s6;
  DAT_ram_30045d4c = unaff_s7;
  DAT_ram_30045d50 = unaff_s8;
  DAT_ram_30045d54 = unaff_s9;
  DAT_ram_30045d58 = unaff_s10;
  DAT_ram_30045d5c = unaff_s11;
  DAT_ram_30045d60 = (undefined1 *)register0x00002008;
  DAT_ram_30045d64 = unaff_retaddr;
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = &DAT_ram_30045d68;
    puVar2 = (undefined4 *)((int)param_2 + 0xff);
    do {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
    } while (param_2 < puVar2);
  }
  runtime_startup();
  return;
}


/* NanoCore 1.10, address 0x40000658.
 * REA evidence: ev_bf16575889e8567bc7b28f677bb0ee5bb2708fe6ab668951c170f37cedb99dbe
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40000658(int param_1,int param_2,short *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_2 + 1 >> 1;
  do {
    iVar4 = iVar4 + -1;
    puVar2 = (undefined4 *)(param_3[1] + param_1);
    puVar1 = (undefined4 *)(*param_3 + param_1);
    uVar3 = *puVar1;
    *puVar1 = *puVar2;
    *puVar2 = uVar3;
    uVar3 = puVar1[1];
    puVar1[1] = puVar2[1];
    puVar2[1] = uVar3;
    param_3 = param_3 + 2;
  } while (iVar4 != 0);
  return;
}


/* NanoCore 1.10, address 0x400006cc.
 * REA evidence: ev_22e4a1018505357d1676a6da5599b23f814f567d24927dbe54c71ca498bbf8f7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_400006cc(float param_1)

{
  uint in_register_00000100;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = in_register_00000100 & 0x7fffffff;
  uVar2 = (uVar3 >> 0x17) - 0x7f;
  uVar1 = in_register_00000100;
  if ((int)uVar2 < 0x17) {
    if ((int)uVar2 < 0) {
      if (((0.0 < param_1 + DAT_ram_40099dd4) &&
          (uVar1 = DAT_ram_40098598, -1 < (int)in_register_00000100)) &&
         (uVar1 = in_register_00000100, uVar3 != 0)) {
        uVar1 = DAT_ram_4009281c;
      }
    }
    else {
      uVar3 = 0x7fffff >> (uVar2 & 0x1f);
      if (((uVar3 & in_register_00000100) != 0) && (0.0 < param_1 + DAT_ram_40099dd4)) {
        if (0 < (int)in_register_00000100) {
          in_register_00000100 = (0x800000 >> (uVar2 & 0x1f)) + in_register_00000100;
        }
        uVar1 = ~uVar3 & in_register_00000100;
      }
    }
  }
  else if (0x7f7fffff < uVar3) {
    return in_register_00000100;
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x40000786.
 * REA evidence: ev_552f7bdc20e08babe18fd50d2531b0aba96b59e3fc827995a4e90ac7f0fd9a5b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_40000786(undefined8 param_1)

{
  uint in_register_00000100;
  uint uVar1;
  float fVar2;
  ulonglong uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if ((in_register_00000100 & 0x7fffffff) < 0x3f490fd9) {
    uVar3 = FUN_ram_40001f18(param_1,0);
    return uVar3;
  }
  if (0x7f7fffff < (in_register_00000100 & 0x7fffffff)) {
    return (ulonglong)(uint)((float)param_1 - (float)param_1);
  }
  uVar1 = FUN_ram_40001bc4(&uStack_18);
  uVar1 = uVar1 & 3;
  if (uVar1 == 1) {
    fVar2 = (float)FUN_ram_400026c6(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14),1);
    uVar3 = (ulonglong)(uint)-fVar2;
  }
  else if (uVar1 == 2) {
    fVar2 = (float)FUN_ram_40001f18(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14));
    uVar3 = (ulonglong)(uint)-fVar2;
  }
  else if (uVar1 == 0) {
    uVar3 = FUN_ram_40001f18(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14));
  }
  else {
    uVar3 = FUN_ram_400026c6(1);
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x40000800.
 * REA evidence: ev_92224c4b4e44f7c1f5139fed4dca2b5918df27e78f7c915da097e263f2f8b577
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40000800(float param_1)

{
  uint in_register_00000100;
  uint uVar1;
  uint uVar2;
  
  uVar2 = in_register_00000100 & 0x7fffffff;
  uVar1 = (uVar2 >> 0x17) - 0x7f;
  if ((int)uVar1 < 0x17) {
    if ((int)uVar1 < 0) {
      if (((0.0 < param_1 + DAT_ram_40099dd4) && ((int)in_register_00000100 < 0)) && (uVar2 != 0)) {
        in_register_00000100 = DAT_ram_40092818;
      }
    }
    else {
      uVar2 = 0x7fffff >> (uVar1 & 0x1f);
      if (((uVar2 & in_register_00000100) != 0) && (0.0 < param_1 + DAT_ram_40099dd4)) {
        if ((int)in_register_00000100 < 0) {
          in_register_00000100 = (0x800000 >> (uVar1 & 0x1f)) + in_register_00000100;
        }
        in_register_00000100 = ~uVar2 & in_register_00000100;
      }
    }
  }
  else if (0x7f7fffff < uVar2) {
    return in_register_00000100;
  }
  return in_register_00000100;
}


/* NanoCore 1.10, address 0x400008b8.
 * REA evidence: ev_120b3bd19c2d3e13916c0ace75a10dae6b928d514c96e09ea9d6d544f90eae6d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_400008b8(float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_ram_400008f6();
  fVar2 = param_2;
  if (iVar1 != 0) {
    iVar1 = FUN_ram_400008f6(param_2);
    fVar2 = param_1;
    if ((iVar1 != 0) && (fVar2 = param_2, param_2 < param_1)) {
      return param_1;
    }
  }
  return fVar2;
}


/* NanoCore 1.10, address 0x400008f6.
 * REA evidence: ev_dfd3904347e5e281c97c6a965e4d471d2216e29ce965e8b4b0725b56f8a963ee
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_400008f6(void)

{
  uint in_register_00000100;
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = in_register_00000100 & 0x7fffffff;
  uVar1 = 2;
  if ((uVar2 != 0) && (uVar1 = 4, 0x7effffff < uVar2 - 0x800000)) {
    uVar1 = 3;
    if (0x7ffffe < uVar2 - 1) {
      uVar1 = uVar2 == 0x7f800000;
    }
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x40000938.
 * REA evidence: ev_f1ca704ff9733c261ed51eb028acfab58d9ddd6ed2d4744d1c41fc5191556ad8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40000938(float param_1)

{
  uint in_register_00000100;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (in_register_00000100 & 0x7fffffff) >> 0x17;
  uVar2 = uVar4 - 0x7f;
  uVar1 = (int)in_register_00000100 >> 0x1f | 1;
  if (0x1e < (int)uVar2) {
    return (int)param_1;
  }
  if (-1 < (int)uVar2) {
    uVar3 = in_register_00000100 & 0x7fffff | 0x800000;
    if (0x16 < (int)uVar2) {
      return uVar1 * (uVar3 << (uVar4 - 0x96 & 0x1f));
    }
    return uVar1 * ((0x400000 >> (uVar2 & 0x1f)) + uVar3 >> (0x17 - uVar2 & 0x1f));
  }
  return uVar1 & -(uint)(uVar4 == 0x7e);
}


/* NanoCore 1.10, address 0x400009a6.
 * REA evidence: ev_eccba6edd62fc6a1f040eb0626eaaa8f56c50a391e8ad67a73e9c42fb4e1ada6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_400009a6(ulonglong param_1)

{
  uint in_register_00000100;
  uint uVar1;
  uint uVar2;
  
  uVar2 = ((in_register_00000100 & 0x7fffffff) >> 0x17) - 0x7f;
  if ((int)uVar2 < 0x17) {
    if ((int)uVar2 < 0) {
      uVar1 = in_register_00000100 & 0x80000000;
      if (uVar2 == 0xffffffff) {
        uVar1 = in_register_00000100 & 0x80000000 | 0x3f800000;
      }
      param_1 = (ulonglong)uVar1;
    }
    else {
      uVar1 = 0x7fffff >> (uVar2 & 0x1f);
      if ((uVar1 & in_register_00000100) != 0) {
        param_1 = (ulonglong)((0x400000 >> (uVar2 & 0x1f)) + in_register_00000100 & ~uVar1);
      }
    }
  }
  else if (uVar2 == 0x80) {
    return (ulonglong)(uint)((float)param_1 + (float)param_1);
  }
  return param_1;
}


/* NanoCore 1.10, address 0x40000a08.
 * REA evidence: ev_bd757c7bf5536bf71d6b067dcff4a90c7de57a66b6bb6d9e08924fb473866b93
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_40000a08(undefined8 param_1)

{
  uint in_register_00000100;
  uint uVar1;
  float fVar2;
  ulonglong uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if ((in_register_00000100 & 0x7fffffff) < 0x3f490fd9) {
    uVar3 = FUN_ram_400026c6(param_1,0,0);
    return uVar3;
  }
  if (0x7f7fffff < (in_register_00000100 & 0x7fffffff)) {
    return (ulonglong)(uint)((float)param_1 - (float)param_1);
  }
  uVar1 = FUN_ram_40001bc4(&uStack_18);
  uVar1 = uVar1 & 3;
  if (uVar1 == 1) {
    uVar3 = FUN_ram_40001f18(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14));
  }
  else if (uVar1 == 2) {
    fVar2 = (float)FUN_ram_400026c6(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14),1);
    uVar3 = (ulonglong)(uint)-fVar2;
  }
  else if (uVar1 == 0) {
    uVar3 = FUN_ram_400026c6(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14),1);
  }
  else {
    fVar2 = (float)FUN_ram_40001f18();
    uVar3 = (ulonglong)(uint)-fVar2;
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x40000a84.
 * REA evidence: ev_226ecee20e3fe565db3874e55f9019012befe0bf3ff6c388d8c65c534c381db4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_40000a84(undefined8 param_1)

{
  uint in_register_00000100;
  uint uVar1;
  ulonglong uVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if ((in_register_00000100 & 0x7fffffff) < 0x3f490fdb) {
    uVar2 = FUN_ram_4000276c(param_1,0,1);
    return uVar2;
  }
  if (0x7f7fffff < (in_register_00000100 & 0x7fffffff)) {
    return (ulonglong)(uint)((float)param_1 - (float)param_1);
  }
  uVar1 = FUN_ram_40001bc4(&uStack_18);
  uVar2 = FUN_ram_4000276c(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14),
                           (uVar1 & 1) * -2 + 1);
  return uVar2;
}


/* NanoCore 1.10, address 0x40000aac.
 * REA evidence: ev_9347fa96053b32c4142b7197d23f0892e58915c8d6cfcf263d78fe23050a00f8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40000aac(void)

{
  uint uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar1 = FUN_ram_40001bc4(&uStack_18);
  FUN_ram_4000276c(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14),(uVar1 & 1) * -2 + 1)
  ;
  return;
}


/* NanoCore 1.10, address 0x40000ad8.
 * REA evidence: ev_56490246ad89a085fb37edb477f49f7f9fba6820a4faac2e9b2635c6d9818a53
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_40000ad8(float param_1)

{
  float in_register_00000100;
  float fVar1;
  float fVar2;
  
  fVar1 = ABS(in_register_00000100);
  if ((uint)fVar1 < 0x7f800000) {
    fVar2 = DAT_ram_4009281c;
    if ((uint)fVar1 < 0x41b00000) {
      if ((uint)fVar1 < 0x24000000) {
        return (in_register_00000100 + DAT_ram_4009281c) * in_register_00000100;
      }
      if ((uint)fVar1 < 0x3f800000) {
        fVar1 = (float)FUN_ram_40002c70();
        fVar1 = (float)FUN_ram_40002980(fVar1 * DAT_ram_40092834);
        fVar2 = -fVar1 / (fVar1 + (float)PTR_firmware_entry_ram_40092830);
        if (-1 < (int)in_register_00000100) {
          return fVar2;
        }
        goto LAB_ram_40000b56;
      }
      fVar1 = (float)FUN_ram_40002c70();
      fVar1 = (float)FUN_ram_40002980(fVar1 + fVar1);
      fVar2 = DAT_ram_4009281c -
              (float)PTR_firmware_entry_ram_40092830 /
              (fVar1 + (float)PTR_firmware_entry_ram_40092830);
    }
    if ((int)in_register_00000100 < 0) {
LAB_ram_40000b56:
      return -fVar2;
    }
  }
  else {
    if ((int)in_register_00000100 < 0) {
      return DAT_ram_4009281c / param_1 - DAT_ram_4009281c;
    }
    fVar2 = DAT_ram_4009281c / param_1 + DAT_ram_4009281c;
  }
  return fVar2;
}


/* NanoCore 1.10, address 0x40000bc0.
 * REA evidence: ev_72a859b2b7077cca0eddb604b2d528c4fa1cf425f21abbfaaf73d786ff4b4578
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_ram_40000bc0(double param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_ram_40000ed4();
  if ((_DAT_ram_30049048 != -1) && (param_1 < 0.0)) {
    puVar1 = (undefined4 *)thunk_FUN_ram_4000503a();
    *puVar1 = 0x21;
    return 0x7ff8000000000000;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40000c0e.
 * REA evidence: ev_f8167d7dd695a56aabc07341b3e865b60fd2867a2b339cfe8c8e47da88a0423d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40000c0e(float param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_ram_40001076();
  if (_DAT_ram_30049048 != -1) {
    iVar1 = FUN_ram_40002c84(param_1);
    if (iVar1 != 0) {
      if (DAT_ram_40099ddc < param_1) {
        puVar2 = (undefined4 *)thunk_FUN_ram_4000503a();
        uVar3 = DAT_ram_40099dd8;
        *puVar2 = 0x22;
      }
      else if (param_1 < DAT_ram_40099de0) {
        puVar2 = (undefined4 *)thunk_FUN_ram_4000503a();
        uVar3 = 0;
        *puVar2 = 0x22;
      }
    }
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x40000c86.
 * REA evidence: ev_3aa42c976822c4f03f8bcfe5af1a57c4ef56a49a01b6332dc7fa2d436056f18e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_ram_40000c86(float param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_ram_400012b2();
  if ((_DAT_ram_30049048 != -1) && (param_1 <= 0.0)) {
    if (param_1 != 0.0) {
      puVar1 = (undefined4 *)thunk_FUN_ram_4000503a();
      *puVar1 = 0x21;
      uVar2 = FUN_ram_40002c9c(s_ep__02x_clear_halt_ram_40092960 + 0x14);
      return uVar2;
    }
    puVar1 = (undefined4 *)thunk_FUN_ram_4000503a();
    uVar2 = (ulonglong)DAT_ram_40099de4;
    *puVar1 = 0x22;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40000cec.
 * REA evidence: ev_0e7a9c439699dcd3f9538fd3230cc72f47a4c0de108ceb92ebca8412048d85a9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_ram_40000cec(float param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_ram_400014c2();
  if ((_DAT_ram_30049048 != -1) && (param_1 <= 0.0)) {
    if (param_1 != 0.0) {
      puVar1 = (undefined4 *)thunk_FUN_ram_4000503a();
      *puVar1 = 0x21;
      uVar2 = FUN_ram_40002c9c(s_ep__02x_clear_halt_ram_40092960 + 0x14);
      return uVar2;
    }
    puVar1 = (undefined4 *)thunk_FUN_ram_4000503a();
    uVar2 = (ulonglong)DAT_ram_40099de4;
    *puVar1 = 0x22;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40000d54.
 * REA evidence: ev_9c7ca51216af30fdf1cbbfd15430a4872e53f4ca6e26e88fd2c56bece6abe3a0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40000e74) */
/* WARNING: Removing unreachable block (ram,0x40000df0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_ram_40000d54(float param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)FUN_ram_4000157a();
  if (_DAT_ram_30049048 != -1) {
    if (param_1 == 0.0) {
      if (param_2 == 0.0) {
        return DAT_ram_4009281c;
      }
      iVar1 = FUN_ram_40002c84(param_2);
      if ((iVar1 != 0) && (param_2 < 0.0)) {
        puVar2 = (undefined4 *)thunk_FUN_ram_4000503a();
        fVar3 = DAT_ram_40099de4;
        *puVar2 = 0x21;
      }
    }
    else {
      iVar1 = FUN_ram_40002c84();
      if (((iVar1 == 0) && (iVar1 = FUN_ram_40002c84(param_1), iVar1 != 0)) &&
         (iVar1 = FUN_ram_40002c84(param_2), iVar1 != 0)) {
        puVar2 = (undefined4 *)thunk_FUN_ram_4000503a();
        *puVar2 = 0x22;
        fVar3 = DAT_ram_40099dd8;
        if ((param_1 < 0.0) &&
           (fVar4 = (float)FUN_ram_40002ca6(param_2), fVar3 = DAT_ram_40099dd8, fVar4 != param_2)) {
          fVar3 = DAT_ram_40099de4;
        }
      }
      else if (((fVar3 == 0.0) && (iVar1 = FUN_ram_40002c84(param_1), iVar1 != 0)) &&
              (iVar1 = FUN_ram_40002c84(param_2), iVar1 != 0)) {
        puVar2 = (undefined4 *)thunk_FUN_ram_4000503a();
        *puVar2 = 0x22;
        fVar3 = 0.0;
      }
    }
  }
  return fVar3;
}


/* NanoCore 1.10, address 0x40000e84.
 * REA evidence: ev_11ecf481b0fde73de8978eab934835c9479f09148b32a850fe7e9b14d1181ca3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_ram_40000e84(float param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_ram_40001e48();
  if ((_DAT_ram_30049048 != -1) && (param_1 < 0.0)) {
    puVar1 = (undefined4 *)thunk_FUN_ram_4000503a();
    *puVar1 = 0x21;
    return 0x7fc00000;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40000ed4.
 * REA evidence: ev_61d3099f796340664009f5ad2901617e4a8d6fbacb669485ade9259ccc023628
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

double FUN_ram_40000ed4(double param_1)

{
  uint in_register_00000100;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar8 = (uint)((ulonglong)param_1 >> 0x20);
  if ((uVar8 & 0x7ff00000) == 0x7ff00000) {
    return param_1 * param_1 + param_1;
  }
  if ((int)uVar8 < 1) {
    if (((ulonglong)param_1 & 0x7fffffff00000000) == 0 && in_register_00000100 == 0) {
      return param_1;
    }
    iVar9 = 0;
    if (uVar8 != 0) {
      return (param_1 - param_1) / (param_1 - param_1);
    }
    do {
      uVar4 = in_register_00000100;
      uVar8 = uVar4 >> 0xb;
      iVar9 = iVar9 + -0x15;
      in_register_00000100 = uVar4 << 0x15;
    } while (uVar8 == 0);
    if (-1 < (int)uVar4) goto LAB_ram_40000ffa;
    uVar4 = 0;
    uVar2 = 0xffffffff;
    uVar5 = in_register_00000100;
  }
  else {
    iVar6 = (int)uVar8 >> 0x14;
    iVar9 = 0;
    uVar5 = in_register_00000100;
    if (iVar6 != 0) goto LAB_ram_40000ef8;
LAB_ram_40000ffa:
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar8 = uVar8 << 1;
      uVar5 = uVar2 + 1;
    } while ((uVar8 & 0x100000) == 0);
    uVar4 = 0x20 - uVar5;
    uVar5 = in_register_00000100 << (uVar5 & 0x1f);
  }
  iVar6 = iVar9 - uVar2;
  uVar8 = in_register_00000100 >> (uVar4 & 0x1f) | uVar8;
LAB_ram_40000ef8:
  iVar9 = (uVar8 & 0xfffff | 0x100000) * 2 - ((int)uVar5 >> 0x1f);
  uVar8 = uVar5 << 1;
  if ((iVar6 - 0x3ffU & 1) != 0) {
    iVar9 = iVar9 * 2 - ((int)uVar8 >> 0x1f);
    uVar8 = uVar5 << 2;
  }
  iVar3 = 0x16;
  iVar11 = 0;
  iVar7 = 0;
  uVar4 = 0x200000;
  do {
    iVar1 = iVar7 + uVar4;
    iVar3 = iVar3 + -1;
    if (iVar1 <= iVar9) {
      iVar7 = iVar1 + uVar4;
      iVar9 = iVar9 - iVar1;
      iVar11 = iVar11 + uVar4;
    }
    iVar9 = iVar9 * 2 - ((int)uVar8 >> 0x1f);
    uVar8 = uVar8 << 1;
    uVar4 = uVar4 >> 1;
  } while (iVar3 != 0);
  uVar4 = 0;
  uVar5 = 0x80000000;
  iVar3 = 0;
  iVar1 = 0x20;
  do {
    iVar10 = iVar1;
    uVar2 = uVar5 + iVar3;
    if (iVar7 < iVar9) {
      iVar3 = iVar7;
      if ((int)uVar2 < 0) {
LAB_ram_40001026:
        iVar3 = iVar7 - ((int)~(uVar2 + uVar5) >> 0x1f);
      }
      iVar7 = (iVar9 - iVar7) - (uint)(uVar8 < uVar2);
      iVar9 = iVar3;
LAB_ram_40000f90:
      iVar3 = uVar2 + uVar5;
      iVar1 = uVar8 - uVar2;
      uVar4 = uVar4 + uVar5;
      uVar8 = iVar1 * 2;
      iVar1 = iVar7 * 2 - (iVar1 >> 0x1f);
      iVar7 = iVar9;
    }
    else {
      if ((iVar9 == iVar7) && (uVar2 <= uVar8)) {
        if ((int)uVar2 < 0) goto LAB_ram_40001026;
        iVar7 = 0;
        goto LAB_ram_40000f90;
      }
      iVar1 = (int)uVar8 >> 0x1f;
      uVar8 = uVar8 << 1;
      iVar1 = iVar9 * 2 - iVar1;
    }
    iVar9 = iVar1;
    uVar5 = uVar5 >> 1;
    iVar1 = iVar10 + -1;
    if (iVar1 == 0) {
      uVar5 = iVar10 - 1;
      if (iVar9 == 0 && uVar8 == 0) {
        uVar5 = uVar4 >> 1;
      }
      else if (uVar4 == 0xffffffff) {
        iVar11 = iVar11 + 1;
      }
      else {
        uVar5 = uVar4 + 1 >> 1;
      }
      return (double)CONCAT44(((int)(iVar6 - 0x3ffU) >> 1) * 0x100000 + (iVar11 >> 1) + 0x3fe00000,
                              iVar11 << 0x1f | uVar5);
    }
  } while( true );
}


