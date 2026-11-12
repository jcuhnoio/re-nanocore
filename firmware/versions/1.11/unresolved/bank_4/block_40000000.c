/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40000000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40000004.
 * REA evidence: ev_3ae0248cbc10e3aeb17cecbf684396b9eee5013316ec7a353e64f930e3bba5d8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40000004(void)

{
  undefined4 *puVar1;
  
  _mtvec = 0x40000583;
  _DAT_csreg_0307 = &PTR_LAB_ram_40000580_ram_30049240;
  mscratch = 0x3004c700;
  thunk_FUN_ram_4003f10e();
  thunk_FUN_ram_4003fdc4();
  thunk_FUN_ram_4003fdfc();
  puVar1 = (undefined4 *)&DAT_ram_3004b700;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 < (undefined4 *)0x3008e3c4);
  FUN_ram_400074b0();
  FUN_ram_4003fe82();
  FUN_ram_40004458();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* NanoCore 1.11, address 0x400000b2.
 * REA evidence: ev_3eeb79a81facaf63cf9c76ed97ddaf9867d6328f364c066f55dcb0be96fbf619
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400000b2(undefined4 param_1)

{
  _DAT_ram_3004d060 = param_1;
  _DAT_ram_3004d05c = 0;
  _DAT_ram_3004d064 = 1;
  DAT_csreg_07e1 = DAT_csreg_07e1 | 0x10000;
  DAT_ram_2080100c = DAT_ram_2080100c | 1;
  fence();
  fence();
  custom0();
  mstatus = mstatus | 8;
  return;
}


/* NanoCore 1.11, address 0x4000010a.
 * REA evidence: ev_68ca13f3c3f4e37fe861af859d46925e1d0bd3e9a4c675ea348062bcf6453caa
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000010a(undefined4 param_1,undefined4 param_2)

{
  if (_DAT_ram_3004d064 != 1) {
    _DAT_ram_3004d064 = 1;
    _DAT_ram_3004d05c = param_1;
  }
  _DAT_ram_3004d060 = param_2;
  DAT_ram_2080100c = DAT_ram_2080100c | 1;
  fence();
  fence();
  custom0();
  return;
}


/* NanoCore 1.11, address 0x400002f4.
 * REA evidence: ev_8dafe1892d80306ff83b9f9bc6952ee233d286f42c22ca4a1bb91775ca0a7d58
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


/* NanoCore 1.11, address 0x400002fa.
 * REA evidence: ev_f7544db762f01a054a86a000faca8c24bcccb4605662a24fe64eaa7780161f11
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400002fa(undefined4 param_1)

{
  mstatus = param_1;
  return;
}


/* NanoCore 1.11, address 0x40000300.
 * REA evidence: ev_9abdb2245aadbc4440c0bdd003779e35cbe383319282fb4371e00f3b68eee507
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
  
  DAT_ram_300493d0 = param_1;
  DAT_ram_300493d4 = param_2;
  DAT_ram_300493d8 = param_3;
  DAT_ram_300493dc = param_4;
  DAT_ram_300493e0 = param_5;
  DAT_ram_300493e4 = param_6;
  DAT_ram_300493e8 = param_7;
  DAT_ram_300493ec = param_8;
  DAT_ram_300493f0 = unaff_s0;
  DAT_ram_300493f4 = unaff_s1;
  DAT_ram_300493f8 = unaff_s2;
  DAT_ram_300493fc = unaff_s3;
  DAT_ram_30049400 = unaff_s4;
  DAT_ram_30049404 = unaff_s5;
  DAT_ram_30049408 = unaff_s6;
  DAT_ram_3004940c = unaff_s7;
  DAT_ram_30049410 = unaff_s8;
  DAT_ram_30049414 = unaff_s9;
  DAT_ram_30049418 = unaff_s10;
  DAT_ram_3004941c = unaff_s11;
  DAT_ram_30049420 = (undefined1 *)register0x00002008;
  DAT_ram_30049424 = unaff_retaddr;
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = &DAT_ram_30049428;
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


/* NanoCore 1.11, address 0x40000658.
 * REA evidence: ev_8055c01a6681078d73e2f8e0309560c7678914af3d34afb949c1c42eabfb6b06
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
      if (((0.0 < param_1 + DAT_ram_4009bdf4) &&
          (uVar1 = DAT_ram_4009a464, -1 < (int)in_register_00000100)) &&
         (uVar1 = in_register_00000100, uVar3 != 0)) {
        uVar1 = DAT_ram_40094604;
      }
    }
    else {
      uVar3 = 0x7fffff >> (uVar2 & 0x1f);
      if (((uVar3 & in_register_00000100) != 0) && (0.0 < param_1 + DAT_ram_4009bdf4)) {
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


/* NanoCore 1.11, address 0x40000712.
 * REA evidence: ev_86fe804fb7b210357f99c1abd7aba72afc28b408564bcb8bfe34c74c1e9a1062
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


/* NanoCore 1.11, address 0x4000073a.
 * REA evidence: ev_596fb976cd22093cebb22c393abc55c98e2569ea4ab8aa62fd810100451959f4
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


/* NanoCore 1.11, address 0x4000078c.
 * REA evidence: ev_fdd3be298584c87d52edd0e9a9ff076455d0006a53cf73634c444f2f752aa7ef
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
      if (((0.0 < param_1 + DAT_ram_4009bdf4) && ((int)in_register_00000100 < 0)) && (uVar2 != 0)) {
        in_register_00000100 = DAT_ram_40094600;
      }
    }
    else {
      uVar2 = 0x7fffff >> (uVar1 & 0x1f);
      if (((uVar2 & in_register_00000100) != 0) && (0.0 < param_1 + DAT_ram_4009bdf4)) {
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


/* NanoCore 1.11, address 0x40000844.
 * REA evidence: ev_4a0204d4d319c4f07e03f52e7b3386cae1be48c9cdd9b36045e458b33a356c93
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


/* NanoCore 1.11, address 0x40000882.
 * REA evidence: ev_d4a0870a1f4e3fdf31e151864b6211b66dc15d9db78d0c3255cd5c997c656e75
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


/* NanoCore 1.11, address 0x400008c0.
 * REA evidence: ev_5ccd8558df7cd91c21c8ca9dd5c610d037a496a2c25767a25a9ac265eac07daa
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


/* NanoCore 1.11, address 0x40000902.
 * REA evidence: ev_0c8559cb5ab77c1e2b26ad55ff29457c2afc2d6d8b8edefaeb97699793e0e284
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


/* NanoCore 1.11, address 0x40000970.
 * REA evidence: ev_4bd24569c05378a093f6b00bcc78d21f4a5abeb8efe91e1b9129bd76ea36aec1
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


/* NanoCore 1.11, address 0x400009d2.
 * REA evidence: ev_6f79daf5ab44e2bca429411fadac51ce8029e9abb3a215fcd70ff4076cc0797e
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


/* NanoCore 1.11, address 0x400009fa.
 * REA evidence: ev_b77b363c9407d0f90d744dd11110260f77a969a13dc071def69fca6feb7228c1
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


/* NanoCore 1.11, address 0x40000a4e.
 * REA evidence: ev_23a095cfbfd0fac59171f2c7b0972a5dfecb74565f817883e16056194f041656
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


/* NanoCore 1.11, address 0x40000a76.
 * REA evidence: ev_caf5dcfa2bf35e99e569fde6cc11e2c2e140fccf3b322cb515f1b7cdd6628b96
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


/* NanoCore 1.11, address 0x40000aa2.
 * REA evidence: ev_f8a18342b871835840bd12b62ad2d2a046d869f4b01d14ea546e00a0e1746655
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
    fVar2 = DAT_ram_40094604;
    if ((uint)fVar1 < 0x41b00000) {
      if ((uint)fVar1 < 0x24000000) {
        return (in_register_00000100 + DAT_ram_40094604) * in_register_00000100;
      }
      if ((uint)fVar1 < 0x3f800000) {
        fVar1 = (float)FUN_ram_40002c60();
        fVar1 = (float)FUN_ram_40002970(fVar1 * DAT_ram_4009461c);
        fVar2 = -fVar1 / (fVar1 + (float)PTR_entry_ram_40094618);
        if (-1 < (int)in_register_00000100) {
          return fVar2;
        }
        goto LAB_ram_40000b20;
      }
      fVar1 = (float)FUN_ram_40002c60();
      fVar1 = (float)FUN_ram_40002970(fVar1 + fVar1);
      fVar2 = DAT_ram_40094604 -
              (float)PTR_entry_ram_40094618 / (fVar1 + (float)PTR_entry_ram_40094618);
    }
    if ((int)in_register_00000100 < 0) {
LAB_ram_40000b20:
      return -fVar2;
    }
  }
  else {
    if ((int)in_register_00000100 < 0) {
      return DAT_ram_40094604 / param_1 - DAT_ram_40094604;
    }
    fVar2 = DAT_ram_40094604 / param_1 + DAT_ram_40094604;
  }
  return fVar2;
}


/* NanoCore 1.11, address 0x40000b8a.
 * REA evidence: ev_28b8212239dd64ecc0b25249018a4ff5c54b3adf210aa8e11865d193a223cef5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_ram_40000b8a(double param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_ram_40000ec4();
  if ((_DAT_ram_3004c708 != -1) && (param_1 < 0.0)) {
    puVar1 = (undefined4 *)thunk_FUN_ram_4000502a();
    *puVar1 = 0x21;
    return 0x7ff8000000000000;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x40000bd8.
 * REA evidence: ev_4bb98d1ff21c1af27ba21df0e9e4eb00a7aa4d4601c7c514b34cb32ca7d07291
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
  if (_DAT_ram_3004c708 != -1) {
    iVar1 = FUN_ram_40002c74(param_1);
    if (iVar1 != 0) {
      if (DAT_ram_4009bdfc < param_1) {
        puVar2 = (undefined4 *)thunk_FUN_ram_4000502a();
        uVar3 = DAT_ram_4009bdf8;
        *puVar2 = 0x22;
      }
      else if (param_1 < DAT_ram_4009be00) {
        puVar2 = (undefined4 *)thunk_FUN_ram_4000502a();
        uVar3 = 0;
        *puVar2 = 0x22;
      }
    }
  }
  return uVar3;
}


/* NanoCore 1.11, address 0x40000c50.
 * REA evidence: ev_7d8f4411886f0433f4e46d63e49b989987c908a33effe83992193e81fbe960be
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40000c50(undefined4 param_1)

{
  FUN_ram_40000d44(PTR_entry_ram_40094618,param_1);
  return;
}


/* NanoCore 1.11, address 0x40000c5e.
 * REA evidence: ev_5c7b1773e47e3451d8f815dc4c1ad73f7e2c9ed2685ea200d4afa782fbbd02cb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_ram_40000c5e(float param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_ram_400012a2();
  if ((_DAT_ram_3004c708 != -1) && (param_1 <= 0.0)) {
    if (param_1 != 0.0) {
      puVar1 = (undefined4 *)thunk_FUN_ram_4000502a();
      *puVar1 = 0x21;
      uVar2 = FUN_ram_40002c8c(s_ep__02x_clear_halt_ram_40094730 + 0x14);
      return uVar2;
    }
    puVar1 = (undefined4 *)thunk_FUN_ram_4000502a();
    uVar2 = (ulonglong)DAT_ram_4009be04;
    *puVar1 = 0x22;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x40000cc4.
 * REA evidence: ev_7569773c363c0ccbffe4425536d9bb3adb186eb2f5cafb03e048060f70af903f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_ram_40000cc4(float param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_ram_400014b2();
  if ((_DAT_ram_3004c708 != -1) && (param_1 <= 0.0)) {
    if (param_1 != 0.0) {
      puVar1 = (undefined4 *)thunk_FUN_ram_4000502a();
      *puVar1 = 0x21;
      uVar2 = FUN_ram_40002c8c(s_ep__02x_clear_halt_ram_40094730 + 0x14);
      return uVar2;
    }
    puVar1 = (undefined4 *)thunk_FUN_ram_4000502a();
    uVar2 = (ulonglong)DAT_ram_4009be04;
    *puVar1 = 0x22;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x40000d2c.
 * REA evidence: ev_7d771c86e1fada74b2acc91001629d33ff2d722326c052baf2867ffd02c6f3df
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

float FUN_ram_40000d2c(void)

{
  float fVar1;
  
  fVar1 = (float)FUN_ram_40000c5e();
  return fVar1 / DAT_ram_4009a530;
}


/* NanoCore 1.11, address 0x40000d44.
 * REA evidence: ev_585b6d7cd40d1b7ac3c790ac013487fa89aa502a478c1566faf43b2c996393d3
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
  if (_DAT_ram_3004c708 != -1) {
    if (param_1 == 0.0) {
      if (param_2 == 0.0) {
        return DAT_ram_40094604;
      }
      iVar1 = FUN_ram_40002c74(param_2);
      if ((iVar1 != 0) && (param_2 < 0.0)) {
        puVar2 = (undefined4 *)thunk_FUN_ram_4000502a();
        fVar3 = DAT_ram_4009be04;
        *puVar2 = 0x21;
      }
    }
    else {
      iVar1 = FUN_ram_40002c74();
      if (((iVar1 == 0) && (iVar1 = FUN_ram_40002c74(param_1), iVar1 != 0)) &&
         (iVar1 = FUN_ram_40002c74(param_2), iVar1 != 0)) {
        puVar2 = (undefined4 *)thunk_FUN_ram_4000502a();
        *puVar2 = 0x22;
        fVar3 = DAT_ram_4009bdf8;
        if ((param_1 < 0.0) &&
           (fVar4 = (float)FUN_ram_40002c96(param_2), fVar3 = DAT_ram_4009bdf8, fVar4 != param_2)) {
          fVar3 = DAT_ram_4009be04;
        }
      }
      else if (((fVar3 == 0.0) && (iVar1 = FUN_ram_40002c74(param_1), iVar1 != 0)) &&
              (iVar1 = FUN_ram_40002c74(param_2), iVar1 != 0)) {
        puVar2 = (undefined4 *)thunk_FUN_ram_4000502a();
        *puVar2 = 0x22;
        fVar3 = 0.0;
      }
    }
  }
  return fVar3;
}


/* NanoCore 1.11, address 0x40000e74.
 * REA evidence: ev_54f2451dc41b1207169024839d5d22d790acd83aa10a9497e199dfa07a6ef05f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_ram_40000e74(float param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_ram_40001e38();
  if ((_DAT_ram_3004c708 != -1) && (param_1 < 0.0)) {
    puVar1 = (undefined4 *)thunk_FUN_ram_4000502a();
    *puVar1 = 0x21;
    return 0x7fc00000;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x40000ec4.
 * REA evidence: ev_72565af0b769825ff386a19115bbabf0d987aa56f5e28e6d23cd63d6ed5a231d
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


