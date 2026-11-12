/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40088000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40088076.
 * REA evidence: ev_b7afd52df79e035c0e45be42f7b4cbe3eaf6ca56022b3fbcbbc4edc142513e29
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40088076(void)

{
  return;
}


/* NanoCore 1.10, address 0x40088094.
 * REA evidence: ev_604cd1776e3efb179dd77950a0fc8e7fb478264b3e8ee73a599269580d68abd2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40088094(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,
                     undefined1 *param_5)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *unaff_s3;
  
  if (_DAT_ram_3008a534 == 0) {
    iVar3 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar3 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_400880aa;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_400880aa;
    if (*unaff_s3 != '\0') {
      if (unaff_s3[1] == '\0') {
        uVar2 = 4;
        goto LAB_ram_40088126;
      }
      goto LAB_ram_400880c4;
    }
  }
  else {
LAB_ram_400880aa:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
    if ((*unaff_s3 != '\0') && (unaff_s3[1] != '\0')) {
LAB_ram_400880c4:
      param_2 = param_2 & 0xffffff;
      if (param_2 == *(uint *)(unaff_s3 + 8)) {
        if ((*(uint *)(unaff_s3 + 4) < param_4 + param_2) || (0x1000 < param_4 + param_2)) {
          uVar2 = 3;
          iVar3 = _DAT_ram_3008a534;
        }
        else {
          cVar1 = unaff_s3[2];
          iVar3 = FUN_ram_4009048c();
          if ((iVar3 == 0) || (*(code **)(iVar3 + 0x1c) == (code *)0x0)) {
            iVar3 = -1;
          }
          else {
            iVar3 = (**(code **)(iVar3 + 0x1c))(1,cVar1,param_2,param_3,param_4);
          }
          if (param_4 != iVar3) goto LAB_ram_40088132;
          *(int *)(unaff_s3 + 8) = *(int *)(unaff_s3 + 8) + param_4;
          uVar4 = FUN_ram_4000755e(*(undefined4 *)(unaff_s3 + 0xc),param_3,param_4);
          iVar3 = _DAT_ram_3008a534;
          *(undefined4 *)(unaff_s3 + 0xc) = uVar4;
          uVar2 = 0;
        }
        if (iVar3 != 0) {
          FUN_ram_40004ac8(0x3008a508);
        }
        goto LAB_ram_40088126;
      }
    }
LAB_ram_40088132:
    if (_DAT_ram_3008a534 != 0) {
      FUN_ram_40004ac8(0x3008a508);
      uVar2 = 4;
      goto LAB_ram_40088126;
    }
  }
  uVar2 = 4;
LAB_ram_40088126:
  *param_5 = uVar2;
  FUN_ram_40088076(1);
  return;
}


/* NanoCore 1.10, address 0x40088200.
 * REA evidence: ev_d50ecb3cd5e817d03d6c46f9c7d7e306b3472a03f4a6c59d3795e69c588c1189
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40088200(void)

{
  return;
}


/* NanoCore 1.10, address 0x4008821e.
 * REA evidence: ev_4c3250ceed88489737951d3336293ea234de572ee13b27159747bee52a8b37f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4008821e(void)

{
  char cVar1;
  undefined1 *unaff_s0;
  undefined1 uVar2;
  int unaff_s1;
  int iVar3;
  undefined4 uVar4;
  char *unaff_s3;
  int unaff_s4;
  
  if (_DAT_ram_3008a534 == 0) {
    iVar3 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar3 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_4008822e;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_4008822e;
    if (*unaff_s3 != '\0') {
      if (unaff_s3[1] == '\0') {
        uVar2 = 4;
        goto LAB_ram_400882a6;
      }
      goto LAB_ram_40088248;
    }
  }
  else {
LAB_ram_4008822e:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
    if ((*unaff_s3 != '\0') && (unaff_s3[1] != '\0')) {
LAB_ram_40088248:
      if (unaff_s1 == *(int *)(unaff_s3 + 8)) {
        if ((*(uint *)(unaff_s3 + 4) < (uint)(unaff_s4 + unaff_s1)) ||
           (0x3000 < (uint)(unaff_s4 + unaff_s1))) {
          uVar2 = 3;
          iVar3 = _DAT_ram_3008a534;
        }
        else {
          cVar1 = unaff_s3[2];
          iVar3 = FUN_ram_4009048c();
          if ((iVar3 == 0) || (*(code **)(iVar3 + 0x1c) == (code *)0x0)) {
            iVar3 = -1;
          }
          else {
            iVar3 = (**(code **)(iVar3 + 0x1c))(0,cVar1);
          }
          if (unaff_s4 != iVar3) goto LAB_ram_40088332;
          *(int *)(unaff_s3 + 8) = *(int *)(unaff_s3 + 8) + unaff_s4;
          uVar4 = FUN_ram_4000755e(*(undefined4 *)(unaff_s3 + 0xc));
          iVar3 = _DAT_ram_3008a534;
          *(undefined4 *)(unaff_s3 + 0xc) = uVar4;
          uVar2 = 0;
        }
        if (iVar3 != 0) {
          FUN_ram_40004ac8(0x3008a508);
        }
        goto LAB_ram_400882a6;
      }
    }
LAB_ram_40088332:
    if (_DAT_ram_3008a534 != 0) {
      FUN_ram_40004ac8(0x3008a508);
      uVar2 = 4;
      goto LAB_ram_400882a6;
    }
  }
  uVar2 = 4;
LAB_ram_400882a6:
  *unaff_s0 = uVar2;
  FUN_ram_40088200(1);
  return;
}


/* NanoCore 1.10, address 0x4008855c.
 * REA evidence: ev_7da8fe5accc77132d416e07e54826657f139e4b8b65481a3c7f1d47709721c8f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008855c(uint param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (_DAT_ram_3008a534 == 0) {
    iVar3 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar3 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_40088582;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_40088582;
    if (DAT_ram_30086c54 != '\0') {
      return 0xffffffff;
    }
LAB_ram_4008859c:
    if (DAT_ram_30086c44 == '\0') {
      if ((_DAT_ram_30089c58 & 0xff) != 0) {
        uVar1 = DAT_ram_30089c5a;
        iVar3 = FUN_ram_4009048c();
        if (((iVar3 == 0) || (*(code **)(iVar3 + 0x30) == (code *)0x0)) ||
           (iVar3 = (**(code **)(iVar3 + 0x30))(0,uVar1), iVar3 != 0)) goto LAB_ram_400887b4;
        _DAT_ram_30089c58 = 0;
        _DAT_ram_30089c5c = 0;
        _DAT_ram_30089c60 = 0;
        _DAT_ram_30089c64 = 0;
      }
      puVar4 = (undefined4 *)FUN_ram_4009048c();
      if (((puVar4 != (undefined4 *)0x0) && ((code *)*puVar4 != (code *)0x0)) &&
         ((iVar3 = (*(code *)*puVar4)(), iVar3 != 0 && (param_1 < 0x26)))) {
        if (0x2fff < param_2 - 1U) {
          uVar2 = 0xfffffffe;
          goto joined_r0x400887b8;
        }
        if (((DAT_ram_3008a500 == '\0') || (_DAT_ram_30089c68 != 0x53415442)) ||
           (_DAT_ram_30089c6c != 4)) {
          memset(&DAT_ram_30089c68,0xff,0x898);
          iVar3 = FUN_ram_4009048c();
          puVar4 = (undefined4 *)FUN_ram_4009048c();
          if ((((puVar4 != (undefined4 *)0x0) && ((code *)*puVar4 != (code *)0x0)) &&
              (iVar5 = (*(code *)*puVar4)(), iVar5 != 0)) &&
             ((iVar3 != 0 && (*(code **)(iVar3 + 4) != (code *)0x0)))) {
            iVar3 = (**(code **)(iVar3 + 4))(&DAT_ram_30089c68);
            if (iVar3 == 1) {
              if ((_DAT_ram_30089c68 == 0x53415442) && (_DAT_ram_30089c6c == 4))
              goto LAB_ram_40088874;
            }
            else if (iVar3 == 2) {
              memset(&DAT_ram_30089c68,0xff,0x898);
              _DAT_ram_30089c68 = 0x53415442;
              _DAT_ram_30089c6c = 4;
              _DAT_ram_30089c72 = 0;
              pvVar7 = (void *)0x30089c8c;
              do {
                *(undefined2 *)((int)pvVar7 + -4) = 0;
                *(undefined4 *)((int)pvVar7 + -0xc) = 0;
                *(undefined4 *)((int)pvVar7 + -8) = 0;
                pvVar6 = memset(pvVar7,0,0x10);
                pvVar7 = (void *)((int)pvVar6 + 0x20);
                *(undefined4 *)((int)pvVar6 + 0x10) = DAT_ram_400993a8;
              } while (pvVar7 != (void *)0x3008a14c);
              pvVar7 = (void *)0x3008a14c;
              do {
                *(undefined2 *)((int)pvVar7 + -4) = 0;
                *(undefined4 *)((int)pvVar7 + -0xc) = 0;
                *(undefined4 *)((int)pvVar7 + -8) = 0;
                pvVar6 = memset(pvVar7,0,0x10);
                pvVar7 = (void *)((int)pvVar6 + 0x20);
                *(undefined4 *)((int)pvVar6 + 0x10) = DAT_ram_400993a8;
              } while (pvVar7 != (void *)0x3008a50c);
              iVar3 = FUN_ram_4009048c();
              if (((((_DAT_ram_30089c68 != 0x53415442) || (_DAT_ram_30089c6c != 4)) ||
                   (puVar4 = (undefined4 *)FUN_ram_4009048c(), puVar4 == (undefined4 *)0x0)) ||
                  (((code *)*puVar4 == (code *)0x0 || (iVar5 = (*(code *)*puVar4)(), iVar5 == 0))))
                 || ((iVar3 == 0 ||
                     ((*(code **)(iVar3 + 8) == (code *)0x0 ||
                      (iVar3 = (**(code **)(iVar3 + 8))(&DAT_ram_30089c68), iVar3 == 0))))))
              goto LAB_ram_400887b4;
LAB_ram_40088874:
              DAT_ram_3008a500 = '\x01';
              goto LAB_ram_40088646;
            }
          }
          memset(&DAT_ram_30089c68,0xff,0x898);
          uVar2 = 0xffffffff;
          DAT_ram_3008a500 = '\0';
          goto joined_r0x400887b8;
        }
LAB_ram_40088646:
        iVar3 = FUN_ram_4009048c();
        if (((iVar3 != 0) && (*(code **)(iVar3 + 0x18) != (code *)0x0)) &&
           (iVar3 = (**(code **)(iVar3 + 0x18))(0,param_1,param_2), iVar3 == 0)) {
          _DAT_ram_30089c60 = 0;
          _DAT_ram_30089c64 = 0;
          _DAT_ram_30089c58 = (uint)CONCAT12((char)param_1,&sedeleg);
          uVar2 = 0;
          _DAT_ram_30089c5c = param_2;
          goto joined_r0x400887b8;
        }
      }
    }
  }
  else {
LAB_ram_40088582:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
    if (DAT_ram_30086c54 == '\0') goto LAB_ram_4008859c;
  }
LAB_ram_400887b4:
  uVar2 = 0xffffffff;
joined_r0x400887b8:
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
  }
  return uVar2;
}


/* NanoCore 1.10, address 0x40088880.
 * REA evidence: ev_9fe6a3ea3afcaf197ce449bec1b9bffc7240156400f426c47ca2cac9fa497a74
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40088880(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  
  if (_DAT_ram_3008a534 == 0) {
    iVar5 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar5 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_400888a0;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_400888a0;
    if (DAT_ram_30086c54 != '\0') {
      return 0xffffffff;
    }
LAB_ram_400888b8:
    if (param_1 < 0x26) {
      if (((DAT_ram_3008a500 == '\0') || (_DAT_ram_30089c68 != 0x53415442)) ||
         (_DAT_ram_30089c6c != 4)) {
        memset(&DAT_ram_30089c68,0xff,0x898);
        iVar5 = FUN_ram_4009048c();
        puVar2 = (undefined4 *)FUN_ram_4009048c();
        if (((puVar2 != (undefined4 *)0x0) && ((code *)*puVar2 != (code *)0x0)) &&
           ((iVar3 = (*(code *)*puVar2)(), iVar3 != 0 &&
            ((iVar5 != 0 && (*(code **)(iVar5 + 4) != (code *)0x0)))))) {
          iVar5 = (**(code **)(iVar5 + 4))(&DAT_ram_30089c68);
          if (iVar5 == 1) {
            if ((_DAT_ram_30089c68 == 0x53415442) && (_DAT_ram_30089c6c == 4)) {
LAB_ram_40088bd0:
              DAT_ram_3008a500 = '\x01';
              goto LAB_ram_4008890a;
            }
          }
          else if (iVar5 == 2) {
            memset(&DAT_ram_30089c68,0xff,0x898);
            _DAT_ram_30089c68 = 0x53415442;
            _DAT_ram_30089c6c = 4;
            _DAT_ram_30089c72 = 0;
            pvVar7 = (void *)0x30089c8c;
            do {
              *(undefined2 *)((int)pvVar7 + -4) = 0;
              *(undefined4 *)((int)pvVar7 + -0xc) = 0;
              *(undefined4 *)((int)pvVar7 + -8) = 0;
              pvVar4 = memset(pvVar7,0,0x10);
              pvVar7 = (void *)((int)pvVar4 + 0x20);
              *(undefined4 *)((int)pvVar4 + 0x10) = DAT_ram_400993a8;
            } while (pvVar7 != (void *)0x3008a14c);
            pvVar7 = (void *)0x3008a14c;
            do {
              *(undefined2 *)((int)pvVar7 + -4) = 0;
              *(undefined4 *)((int)pvVar7 + -0xc) = 0;
              *(undefined4 *)((int)pvVar7 + -8) = 0;
              pvVar4 = memset(pvVar7,0,0x10);
              pvVar7 = (void *)((int)pvVar4 + 0x20);
              *(undefined4 *)((int)pvVar4 + 0x10) = DAT_ram_400993a8;
            } while (pvVar7 != (void *)0x3008a50c);
            iVar5 = FUN_ram_4009048c();
            if (((((_DAT_ram_30089c68 != 0x53415442) || (_DAT_ram_30089c6c != 4)) ||
                 (puVar2 = (undefined4 *)FUN_ram_4009048c(), puVar2 == (undefined4 *)0x0)) ||
                (((code *)*puVar2 == (code *)0x0 || (iVar3 = (*(code *)*puVar2)(), iVar3 == 0)))) ||
               ((iVar5 == 0 ||
                ((*(code **)(iVar5 + 8) == (code *)0x0 ||
                 (iVar5 = (**(code **)(iVar5 + 8))(&DAT_ram_30089c68), iVar5 == 0))))))
            goto LAB_ram_400888c0;
            goto LAB_ram_40088bd0;
          }
        }
        memset(&DAT_ram_30089c68,0xff,0x898);
        uVar1 = 0xffffffff;
        DAT_ram_3008a500 = '\0';
        goto joined_r0x40088954;
      }
LAB_ram_4008890a:
      iVar5 = param_1 * 0x20;
      uVar1 = 0xfffffffe;
      if ((((*(ushort *)(&DAT_ram_30089c88 + iVar5) & 1) == 0) ||
          (uVar1 = 0xfffffffe, 0x2fff < *(int *)(&DAT_ram_30089c80 + iVar5) - 1U)) ||
         (0xfffffffd < *(int *)(&DAT_ram_30089c84 + iVar5) - 1U)) goto joined_r0x40088954;
      if (DAT_ram_30086c40 != '\0') {
        _DAT_ram_30089c6e = (undefined2)param_1;
LAB_ram_4008893e:
        piVar6 = (int *)(gp + -0xc);
        if (*piVar6 == -1) {
          *piVar6 = 1;
          uVar1 = 0;
        }
        else {
          *piVar6 = *piVar6 + 1;
          uVar1 = 0;
        }
        goto joined_r0x40088954;
      }
      if ((_DAT_ram_3008a504 != (int *)0x0) ||
         (_DAT_ram_3008a504 = (int *)FUN_ram_4002c39e(0x898), _DAT_ram_3008a504 != (int *)0x0)) {
        piVar6 = _DAT_ram_3008a504;
        FUN_ram_4000305c(_DAT_ram_3008a504,&DAT_ram_30089c68,0x898);
        *(char *)((int)piVar6 + 6) = (char)param_1;
        *(undefined1 *)((int)piVar6 + 7) = 0;
        iVar5 = FUN_ram_4009048c();
        if ((((*piVar6 == 0x53415442) &&
             (((short)piVar6[1] == 4 &&
              (puVar2 = (undefined4 *)FUN_ram_4009048c(), puVar2 != (undefined4 *)0x0)))) &&
            ((code *)*puVar2 != (code *)0x0)) &&
           ((((iVar3 = (*(code *)*puVar2)(), iVar3 != 0 && (iVar5 != 0)) &&
             (*(code **)(iVar5 + 8) != (code *)0x0)) &&
            (iVar5 = (**(code **)(iVar5 + 8))(piVar6), iVar5 != 0)))) {
          DAT_ram_3008a500 = '\x01';
          FUN_ram_4000305c(&DAT_ram_30089c68,_DAT_ram_3008a504,0x898);
          goto LAB_ram_4008893e;
        }
      }
    }
  }
  else {
LAB_ram_400888a0:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
    if (DAT_ram_30086c54 == '\0') goto LAB_ram_400888b8;
  }
LAB_ram_400888c0:
  uVar1 = 0xffffffff;
joined_r0x40088954:
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x40088bf0.
 * REA evidence: ev_44f3b2620d882ef906ccf4404ff64aba98a84f8005dad32de1ae86307f5e7b32
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40088bf0(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  
  if (_DAT_ram_3008a534 == 0) {
    iVar5 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar5 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_40088c10;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_40088c10;
    if (DAT_ram_30086c54 != '\0') {
      return 0xffffffff;
    }
LAB_ram_40088c28:
    if (param_1 < 0x1e) {
      if (((DAT_ram_3008a500 == '\0') || (_DAT_ram_30089c68 != 0x53415442)) ||
         (_DAT_ram_30089c6c != 4)) {
        memset(&DAT_ram_30089c68,0xff,0x898);
        iVar5 = FUN_ram_4009048c();
        puVar2 = (undefined4 *)FUN_ram_4009048c();
        if (((puVar2 != (undefined4 *)0x0) && ((code *)*puVar2 != (code *)0x0)) &&
           ((iVar3 = (*(code *)*puVar2)(), iVar3 != 0 &&
            ((iVar5 != 0 && (*(code **)(iVar5 + 4) != (code *)0x0)))))) {
          iVar5 = (**(code **)(iVar5 + 4))(&DAT_ram_30089c68);
          if (iVar5 == 1) {
            if ((_DAT_ram_30089c68 == 0x53415442) && (_DAT_ram_30089c6c == 4)) {
LAB_ram_40088f40:
              DAT_ram_3008a500 = '\x01';
              goto LAB_ram_40088c78;
            }
          }
          else if (iVar5 == 2) {
            memset(&DAT_ram_30089c68,0xff,0x898);
            _DAT_ram_30089c68 = 0x53415442;
            _DAT_ram_30089c6c = 4;
            _DAT_ram_30089c72 = 0;
            pvVar7 = (void *)0x30089c8c;
            do {
              *(undefined2 *)((int)pvVar7 + -4) = 0;
              *(undefined4 *)((int)pvVar7 + -0xc) = 0;
              *(undefined4 *)((int)pvVar7 + -8) = 0;
              pvVar4 = memset(pvVar7,0,0x10);
              pvVar7 = (void *)((int)pvVar4 + 0x20);
              *(undefined4 *)((int)pvVar4 + 0x10) = DAT_ram_400993a8;
            } while (pvVar7 != (void *)0x3008a14c);
            pvVar7 = (void *)0x3008a14c;
            do {
              *(undefined2 *)((int)pvVar7 + -4) = 0;
              *(undefined4 *)((int)pvVar7 + -0xc) = 0;
              *(undefined4 *)((int)pvVar7 + -8) = 0;
              pvVar4 = memset(pvVar7,0,0x10);
              pvVar7 = (void *)((int)pvVar4 + 0x20);
              *(undefined4 *)((int)pvVar4 + 0x10) = DAT_ram_400993a8;
            } while (pvVar7 != (void *)0x3008a50c);
            iVar5 = FUN_ram_4009048c();
            if (((((_DAT_ram_30089c68 != 0x53415442) || (_DAT_ram_30089c6c != 4)) ||
                 (puVar2 = (undefined4 *)FUN_ram_4009048c(), puVar2 == (undefined4 *)0x0)) ||
                (((code *)*puVar2 == (code *)0x0 || (iVar3 = (*(code *)*puVar2)(), iVar3 == 0)))) ||
               ((iVar5 == 0 ||
                ((*(code **)(iVar5 + 8) == (code *)0x0 ||
                 (iVar5 = (**(code **)(iVar5 + 8))(&DAT_ram_30089c68), iVar5 == 0))))))
            goto LAB_ram_40088c2e;
            goto LAB_ram_40088f40;
          }
        }
        memset(&DAT_ram_30089c68,0xff,0x898);
        uVar1 = 0xffffffff;
        DAT_ram_3008a500 = '\0';
        goto joined_r0x40088cc6;
      }
LAB_ram_40088c78:
      iVar5 = param_1 * 0x20;
      uVar1 = 0xfffffffe;
      if ((((*(ushort *)(&DAT_ram_3008a148 + iVar5) & 1) == 0) ||
          (uVar1 = 0xfffffffe, 0xfff < *(int *)(&DAT_ram_3008a140 + iVar5) - 1U)) ||
         (0xfffffffd < *(int *)(&DAT_ram_3008a144 + iVar5) - 1U)) goto joined_r0x40088cc6;
      if (DAT_ram_30086c40 != '\0') {
        _DAT_ram_30089c70 = (undefined2)param_1;
LAB_ram_40088cb0:
        piVar6 = (int *)(gp + -8);
        if (*piVar6 == -1) {
          *piVar6 = 1;
          uVar1 = 0;
        }
        else {
          *piVar6 = *piVar6 + 1;
          uVar1 = 0;
        }
        goto joined_r0x40088cc6;
      }
      if ((_DAT_ram_3008a504 != (int *)0x0) ||
         (_DAT_ram_3008a504 = (int *)FUN_ram_4002c39e(0x898), _DAT_ram_3008a504 != (int *)0x0)) {
        piVar6 = _DAT_ram_3008a504;
        FUN_ram_4000305c(_DAT_ram_3008a504,&DAT_ram_30089c68,0x898);
        *(char *)(piVar6 + 2) = (char)param_1;
        *(undefined1 *)((int)piVar6 + 9) = 0;
        iVar5 = FUN_ram_4009048c();
        if ((((*piVar6 == 0x53415442) &&
             (((short)piVar6[1] == 4 &&
              (puVar2 = (undefined4 *)FUN_ram_4009048c(), puVar2 != (undefined4 *)0x0)))) &&
            ((code *)*puVar2 != (code *)0x0)) &&
           ((((iVar3 = (*(code *)*puVar2)(), iVar3 != 0 && (iVar5 != 0)) &&
             (*(code **)(iVar5 + 8) != (code *)0x0)) &&
            (iVar5 = (**(code **)(iVar5 + 8))(piVar6), iVar5 != 0)))) {
          DAT_ram_3008a500 = '\x01';
          FUN_ram_4000305c(&DAT_ram_30089c68,_DAT_ram_3008a504,0x898);
          goto LAB_ram_40088cb0;
        }
      }
    }
  }
  else {
LAB_ram_40088c10:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
    if (DAT_ram_30086c54 == '\0') goto LAB_ram_40088c28;
  }
LAB_ram_40088c2e:
  uVar1 = 0xffffffff;
joined_r0x40088cc6:
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x40088f60.
 * REA evidence: ev_b44c41375607b3d425a176ae4ce07472c63c3007f2a43cf31e51f26f6d81e34f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40088f60(undefined4 *param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  ushort uVar7;
  void *pvVar8;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (_DAT_ram_3008a534 == 0) {
    iVar3 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar3 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_40088f86;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_40088f86;
  }
  else {
LAB_ram_40088f86:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
  }
  memset(param_1,0,0x14);
  puVar2 = (undefined4 *)FUN_ram_4009048c();
  if (((puVar2 == (undefined4 *)0x0) || ((code *)*puVar2 == (code *)0x0)) ||
     (iVar3 = (*(code *)*puVar2)(), iVar3 == 0)) goto LAB_ram_400891b0;
  if (((DAT_ram_3008a500 == '\0') || (_DAT_ram_30089c68 != 0x53415442)) || (_DAT_ram_30089c6c != 4))
  {
    memset(&DAT_ram_30089c68,0xff,0x898);
    iVar3 = FUN_ram_4009048c();
    puVar2 = (undefined4 *)FUN_ram_4009048c();
    if (((puVar2 != (undefined4 *)0x0) && ((code *)*puVar2 != (code *)0x0)) &&
       ((iVar4 = (*(code *)*puVar2)(), iVar4 != 0 &&
        ((iVar3 != 0 && (*(code **)(iVar3 + 4) != (code *)0x0)))))) {
      iVar3 = (**(code **)(iVar3 + 4))(&DAT_ram_30089c68);
      if (iVar3 == 1) {
        if ((_DAT_ram_30089c68 == 0x53415442) && (_DAT_ram_30089c6c == 4)) goto LAB_ram_400891fc;
      }
      else if (iVar3 == 2) {
        memset(&DAT_ram_30089c68,0xff,0x898);
        _DAT_ram_30089c68 = 0x53415442;
        _DAT_ram_30089c6c = 4;
        _DAT_ram_30089c72 = 0;
        pvVar8 = (void *)0x30089c8c;
        do {
          *(undefined2 *)((int)pvVar8 + -4) = 0;
          *(undefined4 *)((int)pvVar8 + -0xc) = 0;
          *(undefined4 *)((int)pvVar8 + -8) = 0;
          pvVar5 = memset(pvVar8,0,0x10);
          pvVar8 = (void *)((int)pvVar5 + 0x20);
          *(undefined4 *)((int)pvVar5 + 0x10) = DAT_ram_400993a8;
        } while (pvVar8 != (void *)0x3008a14c);
        pvVar8 = (void *)0x3008a14c;
        do {
          *(undefined2 *)((int)pvVar8 + -4) = 0;
          *(undefined4 *)((int)pvVar8 + -0xc) = 0;
          *(undefined4 *)((int)pvVar8 + -8) = 0;
          pvVar5 = memset(pvVar8,0,0x10);
          pvVar8 = (void *)((int)pvVar5 + 0x20);
          *(undefined4 *)((int)pvVar5 + 0x10) = DAT_ram_400993a8;
        } while (pvVar8 != (void *)0x3008a50c);
        iVar3 = FUN_ram_4009048c();
        if (((((_DAT_ram_30089c68 != 0x53415442) || (_DAT_ram_30089c6c != 4)) ||
             (puVar2 = (undefined4 *)FUN_ram_4009048c(), puVar2 == (undefined4 *)0x0)) ||
            (((code *)*puVar2 == (code *)0x0 || (iVar4 = (*(code *)*puVar2)(), iVar4 == 0)))) ||
           ((iVar3 == 0 ||
            ((*(code **)(iVar3 + 8) == (code *)0x0 ||
             (iVar3 = (**(code **)(iVar3 + 8))(&DAT_ram_30089c68), iVar3 == 0))))))
        goto LAB_ram_40089166;
LAB_ram_400891fc:
        DAT_ram_3008a500 = '\x01';
        goto LAB_ram_40089166;
      }
    }
    memset(&DAT_ram_30089c68,0xff,0x898);
    DAT_ram_3008a500 = '\0';
  }
LAB_ram_40089166:
  *param_1 = 0x72000;
  iVar3 = FUN_ram_4009048c();
  uVar6 = 0;
  if ((iVar3 != 0) && (*(code **)(iVar3 + 0x34) != (code *)0x0)) {
    uVar6 = (**(code **)(iVar3 + 0x34))();
  }
  uVar7 = _DAT_ram_30089c6e;
  if (0x25 < (_DAT_ram_30089c6e & 0xff)) {
    uVar7 = 0xffff;
  }
  *(ushort *)(param_1 + 4) = uVar7;
  uVar1 = _DAT_ram_30089c58;
  param_1[2] = 0x26;
  param_1[1] = uVar6;
  param_1[3] = 0x3000;
  *(undefined2 *)((int)param_1 + 0x12) = uVar1;
LAB_ram_400891b0:
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
    return;
  }
  return;
}


