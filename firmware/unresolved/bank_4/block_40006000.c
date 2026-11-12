/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40006000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4000603e.
 * REA evidence: ev_df6f335e2d541a25071e8e03d2c18dac860d29a91bd3e77d5fd3fd0de14e6b5b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000603e(void)

{
  undefined1 *puVar1;
  
  _DAT_ram_300495d8 = 0;
  puVar1 = &DAT_ram_300495e0;
  do {
    *(undefined1 **)(puVar1 + 4) = puVar1;
    *(undefined1 **)puVar1 = puVar1;
    puVar1 = puVar1 + 8;
  } while (puVar1 != &DAT_ram_300496e0);
  _DAT_ram_300496e0 = 0;
  return;
}


/* NanoCore 1.10, address 0x4000606a.
 * REA evidence: ev_ae723697571597fde56c69b749513c4feeecb426040befef833cf1e891611cbf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000606a(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  FUN_ram_400002f4();
  if (_DAT_ram_300495d0 == param_1) {
    *(byte *)(_DAT_ram_300495d0 + 0x3c) = *(byte *)(_DAT_ram_300495d0 + 0x3c) & 0xf8 | 3;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x3c);
    uVar3 = (uint)*(byte *)(param_1 + 0x3d);
    *(byte *)(param_1 + 0x3c) = bVar1 & 0xf8 | 1;
    iVar2 = uVar3 * 8;
    iVar4 = param_1 + 0x1c;
    if ((bVar1 & 8) == 0) {
      iVar6 = *(int *)(&DAT_ram_300495e0 + uVar3 * 8);
      *(int *)(iVar6 + 4) = iVar4;
      *(int *)(param_1 + 0x1c) = iVar6;
      *(int *)(&DAT_ram_300495e0 + uVar3 * 8) = iVar4;
      *(undefined1 **)(param_1 + 0x20) = &DAT_ram_300495e0 + iVar2;
    }
    else {
      piVar5 = *(int **)(&DAT_ram_300495e4 + iVar2);
      *piVar5 = iVar4;
      *(int **)(param_1 + 0x20) = piVar5;
      *(int *)(&DAT_ram_300495e4 + iVar2) = iVar4;
      *(undefined1 **)(param_1 + 0x1c) = &DAT_ram_300495e0 + iVar2;
    }
    _DAT_ram_300496e0 = *(uint *)(param_1 + 0x40) | _DAT_ram_300496e0;
  }
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x400060ee.
 * REA evidence: ev_e4d79a08ad7d26ded1abddf72149f7f510b6ef12b3779777cc8d9a8b94615b83
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400060ee(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_ram_400002f4();
  iVar1 = *(int *)(param_1 + 0x1c);
  piVar2 = *(int **)(param_1 + 0x20);
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  if (*(undefined1 **)(&DAT_ram_300495e0 + (uint)*(byte *)(param_1 + 0x3d) * 8) ==
      &DAT_ram_300495e0 + (uint)*(byte *)(param_1 + 0x3d) * 8) {
    _DAT_ram_300496e0 = ~*(uint *)(param_1 + 0x40) & _DAT_ram_300496e0;
  }
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x40006140.
 * REA evidence: ev_4cf880a11558b839d18adeff040641acd9dfba312cb1aa0472140c149a0ebc94
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006140(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40005738(_DAT_ram_300496e0);
  iVar1 = *(int *)(&DAT_ram_300495e0 + (iVar1 + -1) * 8);
  _DAT_ram_300495d0 = iVar1 + -0x1c;
  FUN_ram_400060ee();
  *(undefined1 *)(iVar1 + 0x20) = 3;
  FUN_ram_400000b2(iVar1 + 8);
  return;
}


/* NanoCore 1.10, address 0x40006182.
 * REA evidence: ev_80467e43cd1ea26c4f59a732584ea32aedfd5206852515f4afe6efcf72549574
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006182(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  
  uVar5 = FUN_ram_400002f4();
  if ((_DAT_ram_300495d8 == 0) && (_DAT_ram_300496e0 != 0)) {
    iVar6 = FUN_ram_40005738();
    iVar3 = _DAT_ram_300495d0;
    uVar7 = iVar6 - 1;
    bVar1 = *(byte *)(_DAT_ram_300495d0 + 0x3c);
    iVar4 = *(int *)(&DAT_ram_300495e0 + uVar7 * 8) + -0x1c;
    bVar2 = false;
    iVar6 = iVar4;
    if ((bVar1 & 7) == 3) {
      iVar6 = _DAT_ram_300495d0;
      if (((uVar7 <= *(byte *)(_DAT_ram_300495d0 + 0x3d)) &&
          (bVar2 = true, iVar6 = iVar4, *(byte *)(_DAT_ram_300495d0 + 0x3d) == uVar7)) &&
         ((bVar1 & 8) == 0)) {
        bVar2 = false;
        iVar6 = _DAT_ram_300495d0;
      }
      *(byte *)(_DAT_ram_300495d0 + 0x3c) = bVar1 & 0xf7;
    }
    if (iVar3 == iVar6) {
      FUN_ram_400060ee(iVar3);
      *(byte *)(_DAT_ram_300495d0 + 0x3c) = *(byte *)(_DAT_ram_300495d0 + 0x3c) & 0xf8 | 3;
    }
    else {
      DAT_ram_300495cc = (undefined1)uVar7;
      _DAT_ram_300495d0 = iVar6;
      if (_DAT_ram_300495d4 != (code *)0x0) {
        (*_DAT_ram_300495d4)(iVar3,iVar6);
      }
      if (bVar2) {
        FUN_ram_4000606a(iVar3);
      }
      FUN_ram_400060ee(iVar6);
      *(byte *)(iVar6 + 0x3c) = *(byte *)(iVar6 + 0x3c) & 0xf8 | 3;
      pcVar8 = *(char **)(iVar6 + 0x30);
      if (((*pcVar8 != '#') || (*(char **)(iVar6 + 0x24) <= pcVar8)) ||
         (pcVar8 + *(int *)(iVar6 + 0x34) < *(char **)(iVar6 + 0x24))) {
        iVar4 = FUN_ram_400002f4();
        do {
        } while (iVar4 != 0);
      }
      if (DAT_ram_300494f8 == '\0') {
        if (_DAT_ram_300495dc != (code *)0x0) {
          (*_DAT_ram_300495dc)(iVar3);
        }
        FUN_ram_4000010a(iVar3 + 0x24,iVar6 + 0x24);
      }
      else {
        FUN_ram_4000010a(iVar3 + 0x24);
      }
    }
  }
  FUN_ram_400002fa(uVar5);
  return;
}


/* NanoCore 1.10, address 0x400062bc.
 * REA evidence: ev_eea87fc3798e31b93061a5c5d12281e85171d2ff946516206fd0d596af12d63d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400062bc(void)

{
  FUN_ram_400002f4();
  _DAT_ram_300495d8 = _DAT_ram_300495d8 + 1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.10, address 0x400062de.
 * REA evidence: ev_87ccb450b7495db879d94602f0727db7add997c81cebae8e05badcb13f2d2f93
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400062de(void)

{
  int iVar1;
  
  FUN_ram_400002f4();
  iVar1 = (_DAT_ram_300495d8 - 1) * 0x10000;
  _DAT_ram_300495d8 = (ushort)((uint)iVar1 >> 0x10);
  if (0 < iVar1 >> 0x10) {
    FUN_ram_400002fa();
    return;
  }
  _DAT_ram_300495d8 = 0;
  FUN_ram_400002fa();
  if (_DAT_ram_300495d0 != 0) {
    FUN_ram_40006182();
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4000632a.
 * REA evidence: ev_37bc4cd1ece53a2fa945a85de0544882ffd562e525fb069264341ad7fd25cd56
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4000632a(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_ram_300495d0;
  uVar2 = FUN_ram_400002f4();
  FUN_ram_400060ee(iVar1);
  FUN_ram_4000675c(iVar1 + 0x54);
  *(undefined1 *)(iVar1 + 0x3c) = 4;
  FUN_ram_40004614(iVar1);
  FUN_ram_400002fa(uVar2);
  FUN_ram_40006182();
  return;
}


/* NanoCore 1.10, address 0x40006366.
 * REA evidence: ev_bcbe50476c54164c628803d4b72c5dee6d32d10874323f5775b61518a5c670f5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_40006366(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined1 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x34) = param_5;
  FUN_ram_4000505c(param_4,0x23,param_5);
  uVar1 = FUN_ram_40006bcc(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                           *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) + -4,FUN_ram_4000632a
                          );
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined1 *)(param_1 + 0x3d) = param_6;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = param_7;
  *(undefined4 *)(param_1 + 0x50) = param_7;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  FUN_ram_4000671a(param_1 + 0x54,param_1,FUN_ram_40006400,param_1,0,0);
  if (_DAT_ram_300496e4 != (code *)0x0) {
    (*_DAT_ram_300496e4)(param_1);
  }
  return 0;
}


/* NanoCore 1.10, address 0x40006400.
 * REA evidence: ev_3247a1e7ae9f4eb9303c3560dd5206cd0b49c93d2465e2d838a08052f79fdd3d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40006400(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = FUN_ram_400002f4();
  iVar2 = *(int *)(param_1 + 0x1c);
  piVar3 = *(int **)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x38) = 0xfffffffe;
  *(int **)(iVar2 + 4) = piVar3;
  *piVar3 = iVar2;
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  FUN_ram_4000606a(param_1);
  FUN_ram_400002fa(uVar1);
  FUN_ram_40006182();
  return;
}


/* NanoCore 1.10, address 0x4000643c.
 * REA evidence: ev_b5b98980a21d904a5a7cddeacfa3983cb40074d19f9dd8fca1547599dd007f59
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000643c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_ram_40005e90(param_1,1,param_2);
  FUN_ram_40006366(param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


/* NanoCore 1.10, address 0x40006472.
 * REA evidence: ev_95c8c4c06c1105d85b6bea0de4075c46f79de12c280f1af5ba9aac24f139465e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006472(void)

{
  return _DAT_ram_300495d0;
}


/* NanoCore 1.10, address 0x4000647c.
 * REA evidence: ev_e9bd5ca6424c7babdfe4e21e6180b4a61eb32557611190e560c7b2c5ce7f54f6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000647c(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x3c) & 7) != 4) {
    if ((*(byte *)(param_1 + 0x3c) & 7) != 0) {
      FUN_ram_400060ee();
    }
    uVar1 = FUN_ram_400002f4();
    FUN_ram_4000675c(param_1 + 0x54);
    *(undefined1 *)(param_1 + 0x3c) = 4;
    FUN_ram_40004614(param_1);
    FUN_ram_400002fa(uVar1);
    return 0;
  }
  return 0;
}


/* NanoCore 1.10, address 0x400064c6.
 * REA evidence: ev_ae1ad4b8cfcf07735644afda6e71a1948dbefd8bb95cda181d5dd46bdf06bf3e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_400064c6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40005f3a(1,param_1);
  if (iVar1 != 0) {
    iVar2 = FUN_ram_40005666(param_4);
    if (iVar2 == 0) {
      FUN_ram_40005fa8(iVar1);
      iVar1 = 0;
    }
    else {
      FUN_ram_40006366(iVar1,param_2,param_3,iVar2,param_4,param_5,param_6);
    }
  }
  return iVar1;
}


/* NanoCore 1.10, address 0x4000651e.
 * REA evidence: ev_3b0a5dd31f7d0daa491cb0f9bca44683527df42f84ceb96b6955dba781cd6676
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 thunk_FUN_ram_4000647c(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x3c) & 7) != 4) {
    if ((*(byte *)(param_1 + 0x3c) & 7) != 0) {
      FUN_ram_400060ee();
    }
    uVar1 = FUN_ram_400002f4();
    FUN_ram_4000675c(param_1 + 0x54);
    *(undefined1 *)(param_1 + 0x3c) = 4;
    FUN_ram_40004614(param_1);
    FUN_ram_400002fa(uVar1);
    return 0;
  }
  return 0;
}


/* NanoCore 1.10, address 0x40006520.
 * REA evidence: ev_d355a42053087e520a353da4c4ea205c25d76afb4c03a5aa785c290f4638dbb9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006520(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x3c) & 5) == 1) {
    uVar1 = FUN_ram_400002f4();
    FUN_ram_400060ee(param_1);
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xf8 | 2;
    FUN_ram_4000686c(param_1 + 0x54);
    FUN_ram_400002fa(uVar1);
    if (_DAT_ram_300496ec != (code *)0x0) {
      (*_DAT_ram_300496ec)(param_1);
    }
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4000657c.
 * REA evidence: ev_1d5aede7d6c09473a25e46d37e5889360075ae7a7101a6f71755e786dc5296e2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000657c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  iVar1 = _DAT_ram_300495d0;
  uStack_14 = param_1;
  uVar2 = FUN_ram_400002f4();
  *(undefined4 *)(iVar1 + 0x38) = 0;
  FUN_ram_40006520(iVar1);
  FUN_ram_400068b6(iVar1 + 0x54,0,&uStack_14);
  FUN_ram_40006792(iVar1 + 0x54);
  FUN_ram_400002fa(uVar2);
  FUN_ram_40006182();
  if (*(int *)(iVar1 + 0x38) == -2) {
    *(undefined4 *)(iVar1 + 0x38) = 0;
  }
  return *(undefined4 *)(iVar1 + 0x38);
}


/* NanoCore 1.10, address 0x400065d2.
 * REA evidence: ev_5a3dfd0e95a9908205d985d58140185f4b568fa2f0ccbdb72cbe80ecbb92ad45
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_ram_4000657c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  iVar1 = _DAT_ram_300495d0;
  uStack_14 = param_1;
  uVar2 = FUN_ram_400002f4();
  *(undefined4 *)(iVar1 + 0x38) = 0;
  FUN_ram_40006520(iVar1);
  FUN_ram_400068b6(iVar1 + 0x54,0,&uStack_14);
  FUN_ram_40006792(iVar1 + 0x54);
  FUN_ram_400002fa(uVar2);
  FUN_ram_40006182();
  if (*(int *)(iVar1 + 0x38) == -2) {
    *(undefined4 *)(iVar1 + 0x38) = 0;
  }
  return *(undefined4 *)(iVar1 + 0x38);
}


/* NanoCore 1.10, address 0x400065d4.
 * REA evidence: ev_88cc77655ce719b8d1440da2700d42ff50cf84e11a29462c889c7187dbfe8aab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_400065d4(void)

{
  FUN_ram_40004362();
  FUN_ram_4000657c();
  return;
}


/* NanoCore 1.10, address 0x400065e2.
 * REA evidence: ev_c164ba5cc7a315e760aeec87b4acaeb86ca4abcf74c407da4c1b844b1cf7baa9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400065e2(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if ((*(byte *)(param_1 + 0x3c) & 7) == 2) {
    uVar1 = FUN_ram_400002f4();
    iVar2 = *(int *)(param_1 + 0x1c);
    piVar3 = *(int **)(param_1 + 0x20);
    *(int **)(iVar2 + 4) = piVar3;
    *piVar3 = iVar2;
    *(int *)(param_1 + 0x20) = param_1 + 0x1c;
    *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
    FUN_ram_4000686c(param_1 + 0x54);
    FUN_ram_4000606a(param_1);
    FUN_ram_400002fa(uVar1);
    if (_DAT_ram_300496e8 != (code *)0x0) {
      (*_DAT_ram_300496e8)(param_1);
    }
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x40006640.
 * REA evidence: ev_d5f61ab953a20b7a74538ed0479c6cbb518056003afb0dca1632f6461898f8e0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006640(int param_1)

{
  *(int *)(param_1 + 0x40) = 1 << (*(byte *)(param_1 + 0x3d) & 0x1f);
  *(undefined1 *)(param_1 + 0x3c) = 2;
  FUN_ram_400065e2();
  if (_DAT_ram_300495d0 != 0) {
    FUN_ram_40006182();
  }
  return 0;
}


/* NanoCore 1.10, address 0x4000666e.
 * REA evidence: ev_8ceac2768ec1732915bda1bd474236ae7f8777baf2d8503f33bc1c12a58430d7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000666e(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    FUN_ram_40005fe4();
    uVar2 = FUN_ram_4000647c(param_1);
    FUN_ram_40006182();
  }
  else {
    if (param_2 == 2) {
      uVar2 = FUN_ram_400002f4();
      if ((*(byte *)(param_1 + 0x3c) & 7) == 1) {
        FUN_ram_400060ee(param_1);
        bVar1 = *param_3;
        *(byte *)(param_1 + 0x3d) = bVar1;
        *(int *)(param_1 + 0x40) = 1 << (bVar1 & 0x1f);
        FUN_ram_4000606a(param_1);
      }
      else {
        bVar1 = *param_3;
        *(byte *)(param_1 + 0x3d) = bVar1;
        *(int *)(param_1 + 0x40) = 1 << (bVar1 & 0x1f);
      }
      FUN_ram_400002fa(uVar2);
    }
    else if (param_2 == 0) {
      uVar2 = FUN_ram_40006640();
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40006708.
 * REA evidence: ev_58b86509758db55802646492524cdebd7650974c8582714a9a72c607a30cfc7b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40006708(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  piVar2 = *(int **)(param_1 + 0x20);
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  return;
}


/* NanoCore 1.10, address 0x4000671a.
 * REA evidence: ev_fc44dad8a7fda81c170fe3146c51322f8e5eedf53a940c365793096619d29a90
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4000671a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,byte param_6)

{
  FUN_ram_40005e90(param_1,10,param_2);
  *(byte *)(param_1 + 0x11) = param_6 & 0xfe;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = param_5;
  *(int *)(param_1 + 0x20) = param_1 + 0x1c;
  *(int *)(param_1 + 0x1c) = param_1 + 0x1c;
  return;
}


/* NanoCore 1.10, address 0x4000675c.
 * REA evidence: ev_9004d7acbec8e4666ec8fd5b3ef9f3635bcaa0796716da4147c3d30adb1b1d36
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4000675c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  FUN_ram_40006708(param_1);
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
  FUN_ram_400002fa(uVar1);
  FUN_ram_40005f04(param_1);
  return 0;
}


/* NanoCore 1.10, address 0x40006792.
 * REA evidence: ev_4f3674b0547b299ba1c01f75c6c5cfd9fb62538b723ed5249edabd7cebbb8abd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006792(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  uVar3 = FUN_ram_400002f4();
  FUN_ram_40006708(param_1);
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
  if (_DAT_ram_300495c4 != (code *)0x0) {
    (*_DAT_ram_300495c4)(param_1);
  }
  iVar4 = FUN_ram_400042fa();
  bVar1 = *(byte *)(param_1 + 0x11);
  iVar4 = iVar4 + *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x30) = iVar4;
  piVar5 = (int *)&DAT_ram_300496f0;
  if ((bVar1 & 4) == 0) {
    piVar5 = (int *)&DAT_ram_300496f8;
  }
  piVar7 = piVar5;
  do {
    piVar6 = piVar7;
    piVar7 = (int *)*piVar6;
    if ((int *)piVar5[1] == piVar6) break;
  } while ((iVar4 == piVar7[5]) || (0x7ffffffe < (uint)(piVar7[5] - iVar4)));
  _DAT_ram_30049990 = _DAT_ram_30049990 + 1;
  piVar7[1] = param_1 + 0x1c;
  *(int **)(param_1 + 0x1c) = piVar7;
  *piVar6 = param_1 + 0x1c;
  *(int **)(param_1 + 0x20) = piVar6;
  *(byte *)(param_1 + 0x11) = bVar1 | 1;
  bVar2 = false;
  if (((bVar1 & 4) != 0) && ((DAT_ram_30046354 == '\x01' && ((DAT_ram_3004973c & 7) == 2)))) {
    FUN_ram_400065e2();
    bVar2 = true;
  }
  FUN_ram_400002fa(uVar3);
  if (bVar2) {
    FUN_ram_40006182();
  }
  return 0;
}


/* NanoCore 1.10, address 0x4000686c.
 * REA evidence: ev_5a5b1a821f7e2d41cfb86d869e8c9bd541dfd718eb43093ae627957bac383b2e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4000686c(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    if (_DAT_ram_300495c0 != (code *)0x0) {
      (*_DAT_ram_300495c0)();
    }
    uVar1 = FUN_ram_400002f4();
    FUN_ram_40006708(param_1);
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
    FUN_ram_400002fa(uVar1);
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x400068b6.
 * REA evidence: ev_faa654560e92577edd1b04aa0fc7f63c2f66eeb4c049e24275c5c92ef059b75a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400068b6(int param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  
  FUN_ram_400002f4();
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x2c) = *param_3;
    goto switchD_ram_400068de_default;
  case 1:
    uVar2 = *(undefined4 *)(param_1 + 0x2c);
    break;
  case 2:
    bVar1 = *(byte *)(param_1 + 0x11) & 0xfd;
    goto LAB_ram_400068fe;
  case 3:
    bVar1 = *(byte *)(param_1 + 0x11) | 2;
LAB_ram_400068fe:
    *(byte *)(param_1 + 0x11) = bVar1;
    goto switchD_ram_400068de_default;
  case 4:
    if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
      *param_3 = 0;
      goto switchD_ram_400068de_default;
    }
    uVar2 = 1;
    break;
  case 5:
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    break;
  default:
    goto switchD_ram_400068de_default;
  }
  *param_3 = uVar2;
switchD_ram_400068de_default:
  FUN_ram_400002fa();
  return 0;
}


/* NanoCore 1.10, address 0x40006924.
 * REA evidence: ev_f7ecdd27efcdfa3512802182c23c72c906877bbc065f6bfeac04d5d08b57c58e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006924(void)

{
  int ****ppppiVar1;
  int iVar2;
  undefined4 uVar3;
  int ***pppiVar4;
  int ***pppiVar5;
  int ****ppppiVar6;
  int ***local_38;
  int ***pppiStack_34;
  
  local_38 = (int ***)&local_38;
  pppiStack_34 = (int ***)&local_38;
  iVar2 = FUN_ram_400042fa();
  uVar3 = FUN_ram_400002f4();
  while ((ppppiVar1 = _DAT_ram_300496f8, _DAT_ram_300496f8 != (int ****)&DAT_ram_300496f8 &&
         (ppppiVar6 = _DAT_ram_300496f8 + -7, (uint)(iVar2 - (int)_DAT_ram_300496f8[5]) < 0x7fffffff
         ))) {
    if (_DAT_ram_30049994 != (code *)0x0) {
      (*_DAT_ram_30049994)(ppppiVar6);
    }
    FUN_ram_40006708(ppppiVar6);
    if ((*(byte *)((int)ppppiVar1 + -0xb) & 2) == 0) {
      *(byte *)((int)ppppiVar1 + -0xb) = *(byte *)((int)ppppiVar1 + -0xb) & 0xfe;
    }
    pppiVar4 = ppppiVar1[3];
    local_38[1] = (int **)ppppiVar1;
    *ppppiVar1 = local_38;
    local_38 = (int ***)ppppiVar1;
    ppppiVar1[1] = (int ***)&local_38;
    (*(code *)ppppiVar1[2])(pppiVar4);
    iVar2 = FUN_ram_400042fa();
    if (_DAT_ram_30049998 != (code *)0x0) {
      (*_DAT_ram_30049998)(ppppiVar6);
    }
    if ((int ****)local_38 != &local_38) {
      pppiVar4 = *ppppiVar1;
      pppiVar5 = ppppiVar1[1];
      pppiVar4[1] = (int **)pppiVar5;
      *pppiVar5 = (int **)pppiVar4;
      ppppiVar1[1] = (int ***)ppppiVar1;
      *ppppiVar1 = (int ***)ppppiVar1;
      if ((*(byte *)((int)ppppiVar1 + -0xb) & 3) == 3) {
        *(byte *)((int)ppppiVar1 + -0xb) = *(byte *)((int)ppppiVar1 + -0xb) & 0xfe;
        FUN_ram_40006792(ppppiVar6);
      }
    }
  }
  FUN_ram_400002fa(uVar3);
  return;
}


/* NanoCore 1.10, address 0x40006a12.
 * REA evidence: ev_22e91fa9dafc2642df7499fc2708afab7dd19384118c59c57dc3c13d07c8d2d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006a12(void)

{
  int ****ppppiVar1;
  undefined4 uVar2;
  int iVar3;
  int ***pppiVar4;
  int ***pppiVar5;
  int ****ppppiVar6;
  int ***local_38;
  int ***pppiStack_34;
  
  local_38 = (int ***)&local_38;
  pppiStack_34 = (int ***)&local_38;
  uVar2 = FUN_ram_400002f4();
  while (ppppiVar1 = _DAT_ram_300496f0, _DAT_ram_300496f0 != (int ****)&DAT_ram_300496f0) {
    iVar3 = FUN_ram_400042fa();
    ppppiVar6 = ppppiVar1 + -7;
    if (0x7ffffffe < (uint)(iVar3 - (int)ppppiVar1[5])) break;
    if (_DAT_ram_30049994 != (code *)0x0) {
      (*_DAT_ram_30049994)(ppppiVar6);
    }
    FUN_ram_40006708(ppppiVar6);
    if ((*(byte *)((int)ppppiVar1 + -0xb) & 2) == 0) {
      *(byte *)((int)ppppiVar1 + -0xb) = *(byte *)((int)ppppiVar1 + -0xb) & 0xfe;
    }
    local_38[1] = (int **)ppppiVar1;
    *ppppiVar1 = local_38;
    ppppiVar1[1] = (int ***)&local_38;
    DAT_ram_30046354 = 0;
    local_38 = (int ***)ppppiVar1;
    FUN_ram_400002fa(uVar2);
    (*(code *)ppppiVar1[2])(ppppiVar1[3]);
    if (_DAT_ram_30049998 != (code *)0x0) {
      (*_DAT_ram_30049998)(ppppiVar6);
    }
    uVar2 = FUN_ram_400002f4();
    DAT_ram_30046354 = 1;
    if ((int ****)local_38 != &local_38) {
      pppiVar4 = *ppppiVar1;
      pppiVar5 = ppppiVar1[1];
      pppiVar4[1] = (int **)pppiVar5;
      *pppiVar5 = (int **)pppiVar4;
      ppppiVar1[1] = (int ***)ppppiVar1;
      *ppppiVar1 = (int ***)ppppiVar1;
      if ((*(byte *)((int)ppppiVar1 + -0xb) & 3) == 3) {
        *(byte *)((int)ppppiVar1 + -0xb) = *(byte *)((int)ppppiVar1 + -0xb) & 0xfe;
        FUN_ram_40006792(ppppiVar6);
      }
    }
  }
  FUN_ram_400002fa(uVar2);
  return;
}


/* NanoCore 1.10, address 0x40006b1c.
 * REA evidence: ev_4b91828255dcfddf94d18f1286e7490a516060db7614a2eba763b10668deb344
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006b1c(void)

{
  int iVar1;
  int iVar2;
  
  do {
    FUN_ram_400002f4();
    if (_DAT_ram_300496f0 == &DAT_ram_300496f0) {
      FUN_ram_400002fa();
      FUN_ram_40006472();
      FUN_ram_40006520();
      FUN_ram_40006182();
    }
    else {
      iVar1 = *(int *)(_DAT_ram_300496f0 + 0x14);
      FUN_ram_400002fa();
      iVar2 = FUN_ram_400042fa();
      if ((uint)(iVar1 - iVar2) < 0x7fffffff) {
        thunk_FUN_ram_4000657c();
      }
    }
    FUN_ram_40006a12();
  } while( true );
}


/* NanoCore 1.10, address 0x40006b70.
 * REA evidence: ev_daaf66518410cc3d00eda94e90d0340266c243446f9f5b992b41e2c5978f19a9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006b70(void)

{
  _DAT_ram_300496fc = &DAT_ram_300496f8;
  _DAT_ram_300496f8 = &DAT_ram_300496f8;
  return;
}


/* NanoCore 1.10, address 0x40006b7e.
 * REA evidence: ev_4f7939bbf3df8bc8def4925b64afdcc0a4c28ee899484fb5c363cb0aba8ff694
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40006b7e(void)

{
  _DAT_ram_300496f4 = &DAT_ram_300496f0;
  _DAT_ram_300496f0 = &DAT_ram_300496f0;
  FUN_ram_4000643c(0x30049700,s_timer_ram_400922cc,FUN_ram_40006b1c,0,0x30049790,0x200,4,10);
  FUN_ram_40006640(0x30049700);
  return;
}


/* NanoCore 1.10, address 0x40006bcc.
 * REA evidence: ev_cd4c01e74ba1f0fda7fac5daad05fc73961daff5c6df9a4a01690b3373158e47
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40006bcc(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(param_3 + 4U & 0xfffffff0);
  for (puVar2 = puVar1 + -0x62; puVar1 != puVar2; puVar2 = puVar2 + 1) {
    *puVar2 = 0xdeadbeef;
  }
  puVar1[-0x61] = param_4;
  puVar1[-0x58] = param_2;
  puVar1[-0x62] = param_1;
  puVar1[-0x60] = 0x7880;
  return;
}


/* NanoCore 1.10, address 0x40006c04.
 * REA evidence: ev_f166f39ce292b661a0106be8d2f0b638d88582cfa15f05b0db9be9997b63dceb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40006c04(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_40005666(param_2);
  if (iVar1 == 0) {
    *param_1 = 0xc;
  }
  return;
}


/* NanoCore 1.10, address 0x40006c20.
 * REA evidence: ev_4069ed8fd4959cb6e289663860bcc1c7c200386ee3c868877df3b3916797987f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40006c20(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_ram_4000569e(param_2,param_3);
  if (iVar1 == 0) {
    *param_1 = 0xc;
  }
  return;
}


/* NanoCore 1.10, address 0x40006c3e.
 * REA evidence: ev_13ee9d32adb0726ab81caee8b920a0ccec7a5119780f879f36dcc4bc7512dcec
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40006c3e(undefined4 param_1,undefined4 param_2)

{
  FUN_ram_400056c4(param_2);
  return;
}


/* NanoCore 1.10, address 0x40006c44.
 * REA evidence: ev_7e5ea39ca1416247d527271d4f3c713fac64ddfc07ff639723ef0e12f96c27fb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 * thunk_FUN_ram_4000503a(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_ram_40004dfe();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40006472(), iVar1 != 0)) {
    puVar2 = (undefined1 *)(iVar1 + 0x38);
  }
  else {
    puVar2 = &DAT_ram_300494fc;
  }
  return puVar2;
}


/* NanoCore 1.10, address 0x40006c48.
 * REA evidence: ev_1838252601eb049dd1424475fd0fb987a05c0bf6bd9d52720ac5930178fc04f0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40006c48(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40006d9a();
  if ((iVar1 < 0) || (iVar1 = FUN_ram_40006e82(), iVar1 < 1)) {
    DAT_ram_300499a8 = '\0';
  }
  else if (DAT_ram_300499a8 == '\0') {
    DAT_ram_300499a8 = '\x01';
  }
  return;
}


/* NanoCore 1.10, address 0x40006c7c.
 * REA evidence: ev_6a90cef9e1440b1f7ee274a167b2de2a2e73363cbfa469cbcaedd781666da0ab
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40006c7c(void)

{
  return DAT_ram_300499a8;
}


/* NanoCore 1.10, address 0x40006c86.
 * REA evidence: ev_f2044bcb5993748262a3849f37f6b2b8bc55a31783a856fa65a6b8a22a1d98c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40006c86(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int aiStack_120 [16];
  int iStack_e0;
  undefined4 uStack_dc;
  
  iVar3 = FUN_ram_40006dcc();
  if (((iVar3 != 0) && (iVar4 = (**(code **)(iVar3 + 0x28))(0,aiStack_120,0x100), 0 < iVar4)) &&
     (aiStack_120[0] == 0x20434941)) {
    if (iStack_e0 == 0) {
      return 0;
    }
    iVar4 = FUN_ram_40002f3c(uStack_dc);
    if (iVar4 == 0) {
      return -5;
    }
    iVar3 = (**(code **)(iVar3 + 0x28))(iStack_e0,iVar4,uStack_dc);
    if (0 < iVar3) {
      pcVar5 = (char *)FUN_ram_4000752a(iVar4);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = s_spi0_0_152k_spl__8k_env__848k_os_ram_400922d4;
      }
      iVar6 = FUN_ram_4000746a(pcVar5);
      iVar2 = 0;
      for (iVar3 = iVar6; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xa8)) {
        iVar2 = iVar2 + 1;
      }
      iVar7 = FUN_ram_40002f3c(iVar2 << 6);
      *param_2 = iVar7;
      iVar7 = iVar7 + 4;
      iVar3 = iVar6;
      while (iVar3 != 0) {
        *(undefined4 *)(iVar7 + -4) = 0x45503130;
        FUN_ram_400033a8(iVar7,iVar3);
        FUN_ram_400033a8(iVar7 + 0x18,param_1);
        *(undefined4 *)(iVar7 + 0x30) = *(undefined4 *)(iVar3 + 0x98);
        puVar1 = (undefined4 *)(iVar3 + 0xa0);
        iVar3 = *(int *)(iVar3 + 0xa8);
        *(undefined4 *)(iVar7 + 0x34) = *puVar1;
        iVar7 = iVar7 + 0x40;
      }
      FUN_ram_40002f4a(iVar4);
      FUN_ram_4000747c(iVar6);
      return iVar2;
    }
  }
  return -1;
}


/* NanoCore 1.10, address 0x40006d9a.
 * REA evidence: ev_67f1765ac2b6b5390f0c520b241d73ab804e49eeac472ca4c5024f0e2537ef8b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40006d9a(void)

{
  if (DAT_ram_300499a9 == '\0') {
    if (PTR_FUN_ram_400072ac_ram_300464fc != (undefined *)0x0) {
      (*(code *)PTR_FUN_ram_400072ac_ram_300464fc)();
    }
    DAT_ram_300499a9 = '\x01';
  }
  return 0;
}


/* NanoCore 1.10, address 0x40006dcc.
 * REA evidence: ev_22784c1c61416127f25e6738e198e2f940c80ca498a2c90c57c9ef41893ca67e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

char * FUN_ram_40006dcc(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_ram_40003488(param_1,s_norflash0_ram_300464d8,0x18);
  if (iVar1 == 0) {
    pcVar2 = s_norflash0_ram_300464d8;
  }
  else {
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}


/* NanoCore 1.10, address 0x40006e0c.
 * REA evidence: ev_86500586b964831c86b08de79ebecfd7752ea49816a5fe997c5371dd201e6b14
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006e0c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (_fal_partition_flash_devices != 0) {
    FUN_ram_400056c4();
  }
  _fal_partition_flash_devices = FUN_ram_40005666(param_2 << 2);
  uVar3 = 0xfffffffe;
  if (_fal_partition_flash_devices != 0) {
    param_1 = param_1 + 0x1c;
    for (iVar1 = 0; param_2 != iVar1; iVar1 = iVar1 + 1) {
      iVar2 = FUN_ram_40006dcc(param_1);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x1c) <= *(int *)(param_1 + 0x18)) {
          _fal_partition_count = 0;
          return 0xffffffff;
        }
        *(int *)(_fal_partition_flash_devices + iVar1 * 4) = iVar2;
      }
      param_1 = param_1 + 0x40;
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* NanoCore 1.10, address 0x40006e82.
 * REA evidence: ev_9d62b5d16ccdf837aa89e3f7f95561bf9a36995e85774f6dddeea688a4095748
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40006e82(void)

{
  int iVar1;
  char *pcStack_14;
  
  if (DAT_ram_300499aa != '\0') {
    return _fal_partition_count;
  }
  _fal_partition_count = FUN_ram_40006c86(s_norflash0_ram_40092324,&pcStack_14);
  if (_fal_partition_count != 0) {
    _fal_partition_table = pcStack_14;
    iVar1 = FUN_ram_40006e0c(pcStack_14,_fal_partition_count);
    if (iVar1 == 0) {
      DAT_ram_300499aa = 1;
      return _fal_partition_count;
    }
  }
  _fal_partition_table = flash_partition_definitions;
  _fal_partition_count = 6;
  iVar1 = FUN_ram_40006e0c(flash_partition_definitions,6);
  if (iVar1 == 0) {
    DAT_ram_300499aa = 1;
    return _fal_partition_count;
  }
  return _fal_partition_count;
}


/* NanoCore 1.10, address 0x40006f4a.
 * REA evidence: ev_b74ffd190dbbab011be25ecd88216fb90bc54e30b6a3aef9505ccafbf9ca5a54
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40006f4a(undefined4 *param_1)

{
  *param_1 = _fal_partition_count;
  return _fal_partition_table;
}


/* NanoCore 1.10, address 0x40006fa8.
 * REA evidence: ev_44fb3380d9c764bb7492feadb6fe9b2008317db140b715294887d6b5581d9373
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40006fa8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((uint)(param_2 + param_4) <= *(uint *)(param_1 + 0x38)) {
    iVar1 = fal_partition_get_flash();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x40006fe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(iVar1 + 0x2c))(param_2 + *(int *)(param_1 + 0x34),param_3,param_4);
      return uVar2;
    }
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x40006ff2.
 * REA evidence: ev_10810dcd7db6071c5c63bfa2dd13a46cde2a5bb78448c191ebed24f96fe25d79
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40006ff2(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((uint)(param_2 + param_3) <= *(uint *)(param_1 + 0x38)) {
    iVar1 = fal_partition_get_flash();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x40007020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(iVar1 + 0x30))(param_2 + *(int *)(param_1 + 0x34),param_3);
      return uVar2;
    }
  }
  return 0xffffffff;
}


