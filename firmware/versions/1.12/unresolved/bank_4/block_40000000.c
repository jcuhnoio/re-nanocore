/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40000000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40000004.
 * REA evidence: ev_6f2263682a6d67d28c4786b981731f529a135074b08b466903f11df6a4d6e1b4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40000004(void)

{
  undefined4 *puVar1;
  
  _mtvec = 0x40000583;
  _DAT_csreg_0307 = &PTR_LAB_ram_40000580_ram_3004a180;
  mscratch = 0x3004d640;
  thunk_FUN_ram_4003f1d0();
  thunk_FUN_ram_4003fe86();
  thunk_FUN_ram_4003febe();
  puVar1 = (undefined4 *)&DAT_ram_3004c640;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 < (undefined4 *)0x3008e444);
  FUN_ram_400073ac();
  FUN_ram_4003ff44();
  FUN_ram_400044b4();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* NanoCore 1.12, address 0x400000b2.
 * REA evidence: ev_58fdc9098d87305829f542d6a1d181f92db1568d6b8d9ccb740f48d637b862fa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400000b2(undefined4 param_1)

{
  _DAT_ram_3004dfa0 = param_1;
  _DAT_ram_3004df9c = 0;
  _DAT_ram_3004dfa4 = 1;
  DAT_csreg_07e1 = DAT_csreg_07e1 | 0x10000;
  DAT_ram_2080100c = DAT_ram_2080100c | 1;
  fence();
  fence();
  custom0();
  mstatus = mstatus | 8;
  return;
}


/* NanoCore 1.12, address 0x4000010a.
 * REA evidence: ev_8b240ce9d84ca3ce91e449ddd022d75260388289182f1c41dcf1be41e9bb9339
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000010a(undefined4 param_1,undefined4 param_2)

{
  if (_DAT_ram_3004dfa4 != 1) {
    _DAT_ram_3004dfa4 = 1;
    _DAT_ram_3004df9c = param_1;
  }
  _DAT_ram_3004dfa0 = param_2;
  DAT_ram_2080100c = DAT_ram_2080100c | 1;
  fence();
  fence();
  custom0();
  return;
}


/* NanoCore 1.12, address 0x400002f4.
 * REA evidence: ev_5b7cdb14bd6d353fef484c761f31ebaf76bd0a5b191817c2a657885d3d7a9385
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


/* NanoCore 1.12, address 0x400002fa.
 * REA evidence: ev_eba605e591a01ddd7a16cc7a5fe83ce01fac2e667408bf877da1906a821d54d5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400002fa(undefined4 param_1)

{
  mstatus = param_1;
  return;
}


/* NanoCore 1.12, address 0x40000300.
 * REA evidence: ev_4ea6848e207ad0088649f76c0fca6ad1b0450e42768e6465e37c379c97c12220
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
  
  DAT_ram_3004a310 = param_1;
  DAT_ram_3004a314 = param_2;
  DAT_ram_3004a318 = param_3;
  DAT_ram_3004a31c = param_4;
  DAT_ram_3004a320 = param_5;
  DAT_ram_3004a324 = param_6;
  DAT_ram_3004a328 = param_7;
  DAT_ram_3004a32c = param_8;
  DAT_ram_3004a330 = unaff_s0;
  DAT_ram_3004a334 = unaff_s1;
  DAT_ram_3004a338 = unaff_s2;
  DAT_ram_3004a33c = unaff_s3;
  DAT_ram_3004a340 = unaff_s4;
  DAT_ram_3004a344 = unaff_s5;
  DAT_ram_3004a348 = unaff_s6;
  DAT_ram_3004a34c = unaff_s7;
  DAT_ram_3004a350 = unaff_s8;
  DAT_ram_3004a354 = unaff_s9;
  DAT_ram_3004a358 = unaff_s10;
  DAT_ram_3004a35c = unaff_s11;
  DAT_ram_3004a360 = (undefined1 *)register0x00002008;
  DAT_ram_3004a364 = unaff_retaddr;
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = &DAT_ram_3004a368;
    puVar2 = (undefined4 *)((int)param_2 + 0xff);
    do {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
    } while (param_2 < puVar2);
  }
  FUN_ram_40000004();
  return;
}


/* NanoCore 1.12, address 0x40000658.
 * REA evidence: ev_b98979d2fbeb8db30e5ffd0a64aa4c53a2fae2db465bcdef88cd192886edd343
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40000658(float param_1)

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
      if (((0.0 < param_1 + DAT_ram_400a43e8) &&
          (uVar1 = DAT_ram_4009f590, -1 < (int)in_register_00000100)) &&
         (uVar1 = in_register_00000100, uVar3 != 0)) {
        uVar1 = DAT_ram_4009672c;
      }
    }
    else {
      uVar3 = 0x7fffff >> (uVar2 & 0x1f);
      if (((uVar3 & in_register_00000100) != 0) && (0.0 < param_1 + DAT_ram_400a43e8)) {
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


/* NanoCore 1.12, address 0x40000712.
 * REA evidence: ev_e246aa1b8fec6d26ff9ba02097e279a8e8574c25f5675ddd75f48f08ab2fd59d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_40000712(undefined8 param_1)

{
  uint in_register_00000100;
  uint uVar1;
  float fVar2;
  ulonglong uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if ((in_register_00000100 & 0x7fffffff) < 0x3f490fd9) {
    uVar3 = FUN_ram_40001f08(param_1,0);
    return uVar3;
  }
  if (0x7f7fffff < (in_register_00000100 & 0x7fffffff)) {
    return (ulonglong)(uint)((float)param_1 - (float)param_1);
  }
  uVar1 = FUN_ram_40001bb4(&uStack_18);
  uVar1 = uVar1 & 3;
  if (uVar1 == 1) {
    fVar2 = (float)FUN_ram_400026b6(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14),1);
    uVar3 = (ulonglong)(uint)-fVar2;
  }
  else if (uVar1 == 2) {
    fVar2 = (float)FUN_ram_40001f08(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14));
    uVar3 = (ulonglong)(uint)-fVar2;
  }
  else if (uVar1 == 0) {
    uVar3 = FUN_ram_40001f08(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14));
  }
  else {
    uVar3 = FUN_ram_400026b6(1);
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x4000073a.
 * REA evidence: ev_ae7317d6950b1e80c59c2193c586f2f51ba9622d446317ce58da9ccfc4bfd912
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_4000073a(void)

{
  uint uVar1;
  float fVar2;
  ulonglong uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar1 = FUN_ram_40001bb4(&uStack_18);
  uVar1 = uVar1 & 3;
  if (uVar1 == 1) {
    fVar2 = (float)FUN_ram_400026b6(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14),1);
    uVar3 = (ulonglong)(uint)-fVar2;
  }
  else if (uVar1 == 2) {
    fVar2 = (float)FUN_ram_40001f08(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14));
    uVar3 = (ulonglong)(uint)-fVar2;
  }
  else if (uVar1 == 0) {
    uVar3 = FUN_ram_40001f08(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14));
  }
  else {
    uVar3 = FUN_ram_400026b6(1);
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x4000078c.
 * REA evidence: ev_54df9dfa9f2dbe93cec8632fca3c22ed7b72fa55caa7797ab3418adfb29a865f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4000078c(float param_1)

{
  uint in_register_00000100;
  uint uVar1;
  uint uVar2;
  
  uVar2 = in_register_00000100 & 0x7fffffff;
  uVar1 = (uVar2 >> 0x17) - 0x7f;
  if ((int)uVar1 < 0x17) {
    if ((int)uVar1 < 0) {
      if (((0.0 < param_1 + DAT_ram_400a43e8) && ((int)in_register_00000100 < 0)) && (uVar2 != 0)) {
        in_register_00000100 = DAT_ram_40096728;
      }
    }
    else {
      uVar2 = 0x7fffff >> (uVar1 & 0x1f);
      if (((uVar2 & in_register_00000100) != 0) && (0.0 < param_1 + DAT_ram_400a43e8)) {
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


/* NanoCore 1.12, address 0x40000844.
 * REA evidence: ev_fcc8863140aa00c94c1a683dd55199e822a30779cd68a2d4d531a5b2918ee208
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_40000844(float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_ram_400008c0();
  fVar2 = param_2;
  if (iVar1 != 0) {
    iVar1 = FUN_ram_400008c0(param_2);
    fVar2 = param_1;
    if ((iVar1 != 0) && (fVar2 = param_2, param_2 < param_1)) {
      return param_1;
    }
  }
  return fVar2;
}


/* NanoCore 1.12, address 0x40000882.
 * REA evidence: ev_1adcce7c6e5203c32d28fa6b0ace584dd74cf3fa1c8189511e3128c5e5c274d7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_40000882(float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_ram_400008c0();
  fVar2 = param_2;
  if (iVar1 != 0) {
    iVar1 = FUN_ram_400008c0(param_2);
    fVar2 = param_1;
    if ((iVar1 != 0) && (fVar2 = param_2, param_1 < param_2)) {
      return param_1;
    }
  }
  return fVar2;
}


/* NanoCore 1.12, address 0x400008c0.
 * REA evidence: ev_cf7518c57bf4c1873b72c7d6fbde71c327e2d10a09cf8da190111539903db111
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_400008c0(void)

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


/* NanoCore 1.12, address 0x40000902.
 * REA evidence: ev_0469491f7288744ee11e8f9fdc0d07196139ba61481e3999b398b283f228bbf7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_40000902(float param_1)

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


/* NanoCore 1.12, address 0x40000970.
 * REA evidence: ev_bcf74b38ab4b1ff5c59cc7f65dba84f3b066b7fa2e91e8ba19995d08a8cf9a6c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_40000970(ulonglong param_1)

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


/* NanoCore 1.12, address 0x400009d2.
 * REA evidence: ev_6fa76fed11e0fbc1991a7c59999623d6e54efbce298eda2da0d874d6e5f4afca
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_400009d2(undefined8 param_1)

{
  uint in_register_00000100;
  uint uVar1;
  float fVar2;
  ulonglong uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if ((in_register_00000100 & 0x7fffffff) < 0x3f490fd9) {
    uVar3 = FUN_ram_400026b6(param_1,0,0);
    return uVar3;
  }
  if (0x7f7fffff < (in_register_00000100 & 0x7fffffff)) {
    return (ulonglong)(uint)((float)param_1 - (float)param_1);
  }
  uVar1 = FUN_ram_40001bb4(&uStack_18);
  uVar1 = uVar1 & 3;
  if (uVar1 == 1) {
    uVar3 = FUN_ram_40001f08(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14));
  }
  else if (uVar1 == 2) {
    fVar2 = (float)FUN_ram_400026b6(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14),1);
    uVar3 = (ulonglong)(uint)-fVar2;
  }
  else if (uVar1 == 0) {
    uVar3 = FUN_ram_400026b6(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14),1);
  }
  else {
    fVar2 = (float)FUN_ram_40001f08();
    uVar3 = (ulonglong)(uint)-fVar2;
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x400009fa.
 * REA evidence: ev_a4760040ff435c9e17d41a7936df90382988372d7f61cf4c10cd6089c1dca3de
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_400009fa(void)

{
  uint uVar1;
  float fVar2;
  ulonglong uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar1 = FUN_ram_40001bb4(&uStack_18);
  uVar1 = uVar1 & 3;
  if (uVar1 == 1) {
    uVar3 = FUN_ram_40001f08(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14));
  }
  else if (uVar1 == 2) {
    fVar2 = (float)FUN_ram_400026b6(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14),1);
    uVar3 = (ulonglong)(uint)-fVar2;
  }
  else if (uVar1 == 0) {
    uVar3 = FUN_ram_400026b6(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14),1);
  }
  else {
    fVar2 = (float)FUN_ram_40001f08();
    uVar3 = (ulonglong)(uint)-fVar2;
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x40000a4e.
 * REA evidence: ev_fe6aa7c588c6d28eb87678f55ff171814fb1224effeeb8148afa32f931ad1247
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

ulonglong FUN_ram_40000a4e(undefined8 param_1)

{
  uint in_register_00000100;
  uint uVar1;
  ulonglong uVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if ((in_register_00000100 & 0x7fffffff) < 0x3f490fdb) {
    uVar2 = FUN_ram_4000275c(param_1,0,1);
    return uVar2;
  }
  if (0x7f7fffff < (in_register_00000100 & 0x7fffffff)) {
    return (ulonglong)(uint)((float)param_1 - (float)param_1);
  }
  uVar1 = FUN_ram_40001bb4(&uStack_18);
  uVar2 = FUN_ram_4000275c(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14),
                           (uVar1 & 1) * -2 + 1);
  return uVar2;
}


/* NanoCore 1.12, address 0x40000a76.
 * REA evidence: ev_02a50098af6f309984774c568bcdd41cd7d01c85d875c7694182ca8e3d9807df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40000a76(void)

{
  uint uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar1 = FUN_ram_40001bb4(&uStack_18);
  FUN_ram_4000275c(CONCAT44(uStack_14,uStack_18),CONCAT44(uStack_10,uStack_14),(uVar1 & 1) * -2 + 1)
  ;
  return;
}


/* NanoCore 1.12, address 0x40000aa2.
 * REA evidence: ev_7911e9b19a80f1b4dcd9c1540bde2bf3d51e8f7b975dd6f850318a2788c328e0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_40000aa2(float param_1)

{
  float in_register_00000100;
  float fVar1;
  float fVar2;
  
  fVar1 = ABS(in_register_00000100);
  if ((uint)fVar1 < 0x7f800000) {
    fVar2 = DAT_ram_4009672c;
    if ((uint)fVar1 < 0x41b00000) {
      if ((uint)fVar1 < 0x24000000) {
        return (in_register_00000100 + DAT_ram_4009672c) * in_register_00000100;
      }
      if ((uint)fVar1 < 0x3f800000) {
        fVar1 = (float)FUN_ram_40002c60();
        fVar1 = (float)FUN_ram_40002970(fVar1 * DAT_ram_40096744);
        fVar2 = -fVar1 / (fVar1 + (float)PTR_entry_ram_40096740);
        if (-1 < (int)in_register_00000100) {
          return fVar2;
        }
        goto LAB_ram_40000b20;
      }
      fVar1 = (float)FUN_ram_40002c60();
      fVar1 = (float)FUN_ram_40002970(fVar1 + fVar1);
      fVar2 = DAT_ram_4009672c -
              (float)PTR_entry_ram_40096740 / (fVar1 + (float)PTR_entry_ram_40096740);
    }
    if ((int)in_register_00000100 < 0) {
LAB_ram_40000b20:
      return -fVar2;
    }
  }
  else {
    if ((int)in_register_00000100 < 0) {
      return DAT_ram_4009672c / param_1 - DAT_ram_4009672c;
    }
    fVar2 = DAT_ram_4009672c / param_1 + DAT_ram_4009672c;
  }
  return fVar2;
}


/* NanoCore 1.12, address 0x40000b8a.
 * REA evidence: ev_748f4b2c4b0ebd1ee5b1a4326f22a5be01aee1f7f8fa388122ba9ac01ac7217c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_ram_40000b8a(double param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_ram_40000ec4();
  if ((_DAT_ram_3004d648 != -1) && (param_1 < 0.0)) {
    puVar1 = (undefined4 *)thunk_FUN_ram_40004f70();
    *puVar1 = 0x21;
    return 0x7ff8000000000000;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40000bd8.
 * REA evidence: ev_f230aa8dd58ac8993393aca92747370f8b2f0fcfcfbb2161f71a3d85daa41f10
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40000bd8(float param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_ram_40001066();
  if (_DAT_ram_3004d648 != -1) {
    iVar1 = FUN_ram_40002c74(param_1);
    if (iVar1 != 0) {
      if (DAT_ram_400a43f0 < param_1) {
        puVar2 = (undefined4 *)thunk_FUN_ram_40004f70();
        uVar3 = DAT_ram_400a43ec;
        *puVar2 = 0x22;
      }
      else if (param_1 < DAT_ram_400a43f4) {
        puVar2 = (undefined4 *)thunk_FUN_ram_40004f70();
        uVar3 = 0;
        *puVar2 = 0x22;
      }
    }
  }
  return uVar3;
}


/* NanoCore 1.12, address 0x40000c50.
 * REA evidence: ev_0f1180cb50c0a7b27f481d8f865ab22299e2e1c2cd36e7ab29aa5f474c10c88b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40000c50(undefined4 param_1)

{
  FUN_ram_40000d44(PTR_entry_ram_40096740,param_1);
  return;
}


/* NanoCore 1.12, address 0x40000c5e.
 * REA evidence: ev_97df898aef5d3ec34f4da858ded724e0d88f83853efac295a8ec86ae379f0008
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_ram_40000c5e(float param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_ram_400012a2();
  if ((_DAT_ram_3004d648 != -1) && (param_1 <= 0.0)) {
    if (param_1 != 0.0) {
      puVar1 = (undefined4 *)thunk_FUN_ram_40004f70();
      *puVar1 = 0x21;
      uVar2 = FUN_ram_40002c8c(s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20);
      return uVar2;
    }
    puVar1 = (undefined4 *)thunk_FUN_ram_40004f70();
    uVar2 = (ulonglong)DAT_ram_400a43f8;
    *puVar1 = 0x22;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40000cc4.
 * REA evidence: ev_57248de479395ace4811fbba8e01947edd5b81fd39b5ca7e9b1b6dd1109abcb2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_ram_40000cc4(float param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_ram_400014b2();
  if ((_DAT_ram_3004d648 != -1) && (param_1 <= 0.0)) {
    if (param_1 != 0.0) {
      puVar1 = (undefined4 *)thunk_FUN_ram_40004f70();
      *puVar1 = 0x21;
      uVar2 = FUN_ram_40002c8c(s_Do_not_find_subtype_for_0x_02x_ram_400999ac + 0x20);
      return uVar2;
    }
    puVar1 = (undefined4 *)thunk_FUN_ram_40004f70();
    uVar2 = (ulonglong)DAT_ram_400a43f8;
    *puVar1 = 0x22;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40000d2c.
 * REA evidence: ev_64882f2f85c6e5e54163c681b7064f7d1d5ddf1b3518c3e21f063aabbe156608
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_40000d2c(void)

{
  float fVar1;
  
  fVar1 = (float)FUN_ram_40000c5e();
  return fVar1 / DAT_ram_4009f65c;
}


/* NanoCore 1.12, address 0x40000d44.
 * REA evidence: ev_a0084511d803b5ae24d1e9b86a06e0ad30db727421a657a3306d502b0e1e51e6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40000e64) */
/* WARNING: Removing unreachable block (ram,0x40000de0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_ram_40000d44(float param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)FUN_ram_4000156a();
  if (_DAT_ram_3004d648 != -1) {
    if (param_1 == 0.0) {
      if (param_2 == 0.0) {
        return DAT_ram_4009672c;
      }
      iVar1 = FUN_ram_40002c74(param_2);
      if ((iVar1 != 0) && (param_2 < 0.0)) {
        puVar2 = (undefined4 *)thunk_FUN_ram_40004f70();
        fVar3 = DAT_ram_400a43f8;
        *puVar2 = 0x21;
      }
    }
    else {
      iVar1 = FUN_ram_40002c74();
      if (((iVar1 == 0) && (iVar1 = FUN_ram_40002c74(param_1), iVar1 != 0)) &&
         (iVar1 = FUN_ram_40002c74(param_2), iVar1 != 0)) {
        puVar2 = (undefined4 *)thunk_FUN_ram_40004f70();
        *puVar2 = 0x22;
        fVar3 = DAT_ram_400a43ec;
        if ((param_1 < 0.0) &&
           (fVar4 = (float)FUN_ram_40002c96(param_2), fVar3 = DAT_ram_400a43ec, fVar4 != param_2)) {
          fVar3 = DAT_ram_400a43f8;
        }
      }
      else if (((fVar3 == 0.0) && (iVar1 = FUN_ram_40002c74(param_1), iVar1 != 0)) &&
              (iVar1 = FUN_ram_40002c74(param_2), iVar1 != 0)) {
        puVar2 = (undefined4 *)thunk_FUN_ram_40004f70();
        *puVar2 = 0x22;
        fVar3 = 0.0;
      }
    }
  }
  return fVar3;
}


/* NanoCore 1.12, address 0x40000e74.
 * REA evidence: ev_6b6a28883471ee0db98dfa8cc1bdc8cdbc22d514b8d94d38c55eb3061becf39c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_ram_40000e74(float param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_ram_40001e38();
  if ((_DAT_ram_3004d648 != -1) && (param_1 < 0.0)) {
    puVar1 = (undefined4 *)thunk_FUN_ram_40004f70();
    *puVar1 = 0x21;
    return 0x7fc00000;
  }
  return uVar2;
}


/* NanoCore 1.12, address 0x40000ec4.
 * REA evidence: ev_f037024e871fa1a5ec42329e75ce7ceda9b00fca1d48dcbc2c3b9c50017eecfc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

double FUN_ram_40000ec4(double param_1)

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
    if (-1 < (int)uVar4) goto LAB_ram_40000fea;
    uVar4 = 0;
    uVar2 = 0xffffffff;
    uVar5 = in_register_00000100;
  }
  else {
    iVar6 = (int)uVar8 >> 0x14;
    iVar9 = 0;
    uVar5 = in_register_00000100;
    if (iVar6 != 0) goto LAB_ram_40000ee8;
LAB_ram_40000fea:
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
LAB_ram_40000ee8:
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
LAB_ram_40001016:
        iVar3 = iVar7 - ((int)~(uVar2 + uVar5) >> 0x1f);
      }
      iVar7 = (iVar9 - iVar7) - (uint)(uVar8 < uVar2);
      iVar9 = iVar3;
LAB_ram_40000f80:
      iVar3 = uVar2 + uVar5;
      iVar1 = uVar8 - uVar2;
      uVar4 = uVar4 + uVar5;
      uVar8 = iVar1 * 2;
      iVar1 = iVar7 * 2 - (iVar1 >> 0x1f);
      iVar7 = iVar9;
    }
    else {
      if ((iVar9 == iVar7) && (uVar2 <= uVar8)) {
        if ((int)uVar2 < 0) goto LAB_ram_40001016;
        iVar7 = 0;
        goto LAB_ram_40000f80;
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


