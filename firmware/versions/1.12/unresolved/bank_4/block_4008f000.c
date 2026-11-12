/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4008f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4008f0e8.
 * REA evidence: ev_f07013748d4c8cf41bb65fd6424e610960096fb1f761da3a24c1c7b6b09266b3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4008f0e8(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 *param_4,
                undefined1 *param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (_DAT_ram_3008b940 == 0) {
    iVar2 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_4008f0fe;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_4008f0fe;
  }
  else {
LAB_ram_4008f0fe:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
  }
  uVar6 = (uint)*param_2;
  if (0x1d < uVar6) goto LAB_ram_4008f244;
  iVar2 = FUN_ram_40094cd0();
  if ((((DAT_ram_3008b910 == '\0') && (iVar2 != 0)) && (*(code **)(iVar2 + 8) != (code *)0x0)) &&
     (iVar2 = (**(code **)(iVar2 + 8))(), iVar2 != 0)) {
    if (((DAT_ram_3008b908 != '\0') && (_DAT_ram_3008b070 == 0x53415442)) &&
       (_DAT_ram_3008b074 == 4)) {
LAB_ram_4008f16a:
      iVar2 = uVar6 * 0x20;
      uVar1 = *(ushort *)(&DAT_ram_3008b550 + iVar2);
      if ((((uVar1 & 1) != 0) && ((uVar1 & 0xfffc) == 0 && uVar1 >> 1 == 0)) &&
         ((uVar5 = *(uint *)(&DAT_ram_3008b548 + iVar2), uVar5 - 1 < 0x1000 &&
          (*(int *)(&DAT_ram_3008b54c + iVar2) - 1U < 0xfffffffe)))) {
        uVar7 = (uint)*(ushort *)(param_2 + 1);
        if (uVar7 <= (uVar5 & 0xffff)) {
          uVar4 = (uint)param_2[3];
          if (uVar4 == 0) {
            uVar4 = 1;
          }
          if (200 < uVar4) {
            uVar4 = 200;
          }
          DAT_ram_3008b97c = (undefined1)(uVar5 >> 8);
          if (uVar5 < uVar7 + uVar4) {
            _DAT_ram_3008b978 =
                 uVar6 | (uVar7 & 0xff) << 8 | (uint)param_2[2] << 0x10 | uVar5 << 0x18;
            uVar4 = (uVar5 & 0xffff) - uVar7 & 0xffff;
            uVar5 = 0;
            if (uVar4 != 0) goto LAB_ram_4008f460;
          }
          else {
            _DAT_ram_3008b978 =
                 uVar6 | (uVar7 & 0xff) << 8 | (uint)param_2[2] << 0x10 | uVar5 << 0x18;
LAB_ram_4008f460:
            iVar2 = FUN_ram_40094cd0();
            if ((((DAT_ram_3008b910 != '\0') || (iVar2 == 0)) ||
                (*(code **)(iVar2 + 0x28) == (code *)0x0)) ||
               (uVar6 = (**(code **)(iVar2 + 0x28))(1,uVar6,uVar7,0x3008b97d,uVar4), uVar5 = uVar4,
               uVar4 != uVar6)) goto LAB_ram_4008f2a2;
          }
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = &DAT_ram_3008b978;
            param_4[1] = uVar5 + 5;
          }
          *param_5 = 0;
          goto LAB_ram_4008f24a;
        }
      }
LAB_ram_4008f244:
      *param_5 = 3;
      goto LAB_ram_4008f24a;
    }
    memset(&DAT_ram_3008b070,0xff,0x898);
    iVar2 = FUN_ram_40094cd0();
    iVar3 = FUN_ram_40094cd0();
    if (((DAT_ram_3008b910 == '\0') && (iVar3 != 0)) &&
       ((*(code **)(iVar3 + 8) != (code *)0x0 &&
        (((iVar3 = (**(code **)(iVar3 + 8))(), iVar3 != 0 && (iVar2 != 0)) &&
         (*(code **)(iVar2 + 0xc) != (code *)0x0)))))) {
      iVar2 = (**(code **)(iVar2 + 0xc))(&DAT_ram_3008b070);
      if (iVar2 == 1) {
        if ((_DAT_ram_3008b070 == 0x53415442) && (_DAT_ram_3008b074 == 4)) goto LAB_ram_4008f42c;
      }
      else if (iVar2 == 2) {
        memset(&DAT_ram_3008b070,0xff,0x898);
        _DAT_ram_3008b070 = 0x53415442;
        _DAT_ram_3008b074 = 4;
        _DAT_ram_3008b07a = 0;
        iVar2 = 0x3008b094;
        do {
          *(undefined2 *)(iVar2 + -4) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          *(undefined4 *)(iVar2 + -8) = 0;
          iVar3 = memset(iVar2,0,0x10);
          iVar2 = iVar3 + 0x20;
          *(undefined4 *)(iVar3 + 0x10) = DAT_ram_400a13d8;
        } while (iVar2 != 0x3008b554);
        iVar2 = 0x3008b554;
        do {
          *(undefined2 *)(iVar2 + -4) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          *(undefined4 *)(iVar2 + -8) = 0;
          iVar3 = memset(iVar2,0,0x10);
          iVar2 = iVar3 + 0x20;
          *(undefined4 *)(iVar3 + 0x10) = DAT_ram_400a13d8;
        } while (iVar2 != 0x3008b914);
        iVar2 = FUN_ram_40094cd0();
        if ((((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) ||
            ((iVar3 = FUN_ram_40094cd0(), DAT_ram_3008b910 != '\0' ||
             ((((iVar3 == 0 || (*(code **)(iVar3 + 8) == (code *)0x0)) ||
               (iVar3 = (**(code **)(iVar3 + 8))(), iVar3 == 0)) ||
              ((iVar2 == 0 || (*(code **)(iVar2 + 0x10) == (code *)0x0)))))))) ||
           (iVar2 = (**(code **)(iVar2 + 0x10))(&DAT_ram_3008b070), iVar2 == 0))
        goto LAB_ram_4008f2a2;
LAB_ram_4008f42c:
        DAT_ram_3008b908 = '\x01';
        goto LAB_ram_4008f16a;
      }
    }
    memset(&DAT_ram_3008b070,0xff,0x898);
    DAT_ram_3008b908 = '\0';
  }
LAB_ram_4008f2a2:
  *param_5 = 4;
LAB_ram_4008f24a:
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
  }
  return 1;
}


/* NanoCore 1.12, address 0x4008f4a6.
 * REA evidence: ev_c4f64f8fe1ed57a288f847f7e30c7f6e0bd653df5e2beb29e424a5dface633cc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4008f4a6(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 *param_4,
                undefined1 *param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (_DAT_ram_3008b940 == 0) {
    iVar3 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_4008f4d4;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_4008f4d4;
  }
  else {
LAB_ram_4008f4d4:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
  }
  bVar1 = *param_2;
  uVar2 = (uint)bVar1;
  if (0x1d < uVar2) {
    *param_5 = 3;
    goto joined_r0x4008f6f8;
  }
  iVar3 = FUN_ram_40094cd0();
  if ((((DAT_ram_3008b910 == '\0') && (iVar3 != 0)) && (*(code **)(iVar3 + 8) != (code *)0x0)) &&
     (iVar3 = (**(code **)(iVar3 + 8))(), iVar3 != 0)) {
    if (((DAT_ram_3008b908 == '\0') || (_DAT_ram_3008b070 != 0x53415442)) ||
       (_DAT_ram_3008b074 != 4)) {
      memset(&DAT_ram_3008b070,0xff,0x898);
      iVar3 = FUN_ram_40094cd0();
      iVar5 = FUN_ram_40094cd0();
      if (((DAT_ram_3008b910 != '\0') || (iVar5 == 0)) ||
         ((*(code **)(iVar5 + 8) == (code *)0x0 ||
          (((iVar5 = (**(code **)(iVar5 + 8))(), iVar5 == 0 || (iVar3 == 0)) ||
           (*(code **)(iVar3 + 0xc) == (code *)0x0)))))) {
LAB_ram_4008f6d0:
        memset(&DAT_ram_3008b070,0xff,0x898);
        DAT_ram_3008b908 = '\0';
        goto LAB_ram_4008f6ee;
      }
      iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008b070);
      if (iVar3 == 1) {
        if ((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) goto LAB_ram_4008f6d0;
      }
      else {
        if (iVar3 != 2) goto LAB_ram_4008f6d0;
        memset(&DAT_ram_3008b070,0xff,0x898);
        _DAT_ram_3008b070 = 0x53415442;
        _DAT_ram_3008b074 = 4;
        _DAT_ram_3008b07a = 0;
        iVar3 = 0x3008b094;
        do {
          *(undefined2 *)(iVar3 + -4) = 0;
          *(undefined4 *)(iVar3 + -0xc) = 0;
          *(undefined4 *)(iVar3 + -8) = 0;
          iVar5 = memset(iVar3,0,0x10);
          iVar3 = iVar5 + 0x20;
          *(undefined4 *)(iVar5 + 0x10) = DAT_ram_400a13d8;
        } while (iVar3 != 0x3008b554);
        iVar3 = 0x3008b554;
        do {
          *(undefined2 *)(iVar3 + -4) = 0;
          *(undefined4 *)(iVar3 + -0xc) = 0;
          *(undefined4 *)(iVar3 + -8) = 0;
          iVar5 = memset(iVar3,0,0x10);
          iVar3 = iVar5 + 0x20;
          *(undefined4 *)(iVar5 + 0x10) = DAT_ram_400a13d8;
        } while (iVar3 != 0x3008b914);
        iVar3 = FUN_ram_40094cd0();
        if (((((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) ||
             ((iVar5 = FUN_ram_40094cd0(), DAT_ram_3008b910 != '\0' ||
              (((iVar5 == 0 || (*(code **)(iVar5 + 8) == (code *)0x0)) ||
               (iVar5 = (**(code **)(iVar5 + 8))(), iVar5 == 0)))))) ||
            ((iVar3 == 0 || (*(code **)(iVar3 + 0x10) == (code *)0x0)))) ||
           (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008b070), iVar3 == 0))
        goto LAB_ram_4008f6ee;
      }
      DAT_ram_3008b908 = '\x01';
    }
    iVar3 = uVar2 * 0x20;
    uVar4 = *(uint *)(&DAT_ram_3008b550 + iVar3);
    iVar6 = *(int *)(&DAT_ram_3008b548 + iVar3);
    uStack_44 = *(uint *)(iVar3 + 0x3008b554);
    iVar5 = *(int *)(&DAT_ram_3008b54c + iVar3);
    uStack_40 = *(undefined4 *)(iVar3 + 0x3008b558);
    uStack_3c = *(undefined4 *)(iVar3 + 0x3008b55c);
    uStack_38 = *(undefined4 *)(iVar3 + 0x3008b560);
    uStack_34 = *(undefined4 *)(iVar3 + 0x3008b564);
    sVar7 = 0;
    if ((((uVar4 & 1) != 0) && (sVar7 = 0, (uVar4 & 0xffff) >> 1 == 0 && (uVar4 & 0xfffc) == 0)) &&
       ((iVar6 - 1U < 0x1000 && ((iVar5 - 1U < 0xfffffffe && (sVar7 = 1, (uStack_44 & 0xff) == 0))))
       )) {
      FUN_ram_40005520(&uStack_44,0x10,s__02u_Slot_ram_400a13cc,uVar2 + 1);
    }
    DAT_ram_3008b95b = (undefined1)iVar6;
    DAT_ram_3008b963 = (undefined1)uStack_34;
    DAT_ram_3008b95a = (_DAT_ram_3008b078 & 0xff) < 0x1e && uVar2 == _DAT_ram_3008b078;
    _DAT_ram_3008b958 = (ushort)bVar1 | sVar7 << 8;
    DAT_ram_3008b964 = uStack_34._1_1_;
    DAT_ram_3008b965 = uStack_34._2_1_;
    _DAT_ram_3008b966 = (undefined2)uStack_44;
    DAT_ram_3008b95c = (undefined1)((uint)iVar6 >> 8);
    _DAT_ram_3008b968 = uStack_44._2_2_;
    DAT_ram_3008b95d = (undefined1)((uint)iVar6 >> 0x10);
    DAT_ram_3008b95e = (undefined1)((uint)iVar6 >> 0x18);
    _DAT_ram_3008b96a = (undefined2)uStack_40;
    DAT_ram_3008b95f = (undefined1)iVar5;
    DAT_ram_3008b960 = (undefined1)((uint)iVar5 >> 8);
    _DAT_ram_3008b96c = uStack_40._2_2_;
    DAT_ram_3008b961 = (undefined1)((uint)iVar5 >> 0x10);
    DAT_ram_3008b962 = (undefined1)((uint)iVar5 >> 0x18);
    _DAT_ram_3008b96e = (undefined2)uStack_3c;
    _DAT_ram_3008b970 = uStack_3c._2_2_;
    _DAT_ram_3008b972 = (undefined2)uStack_38;
    _DAT_ram_3008b974 = uStack_38._2_2_;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = &DAT_ram_3008b958;
      param_4[1] = 0x1e;
    }
    *param_5 = 0;
  }
  else {
LAB_ram_4008f6ee:
    *param_5 = 4;
  }
joined_r0x4008f6f8:
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
  }
  return 1;
}


/* NanoCore 1.12, address 0x4008f8ac.
 * REA evidence: ev_cfb60cfb41ff64003a0830c5952cad23961e84bb20becf1ed3944434a3d5f322
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4008f8ac(undefined4 param_1,byte *param_2,uint param_3,undefined4 *param_4,
                undefined1 *param_5)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_5 == (undefined1 *)0x0) {
    return 0;
  }
  if ((param_2 == (byte *)0x0) || (param_3 < 4)) {
    *param_5 = 1;
    return 1;
  }
  if (_DAT_ram_3008b940 == 0) {
    iVar2 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_4008f90e;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_4008f90e;
  }
  else {
LAB_ram_4008f90e:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
  }
  uVar6 = (uint)*param_2;
  if (0x25 < uVar6) goto LAB_ram_4008fabc;
  iVar2 = FUN_ram_40094cd0();
  if ((((DAT_ram_3008b910 == '\0') && (iVar2 != 0)) && (*(code **)(iVar2 + 8) != (code *)0x0)) &&
     (iVar2 = (**(code **)(iVar2 + 8))(), iVar2 != 0)) {
    if (((DAT_ram_3008b908 != '\0') && (_DAT_ram_3008b070 == 0x53415442)) &&
       (_DAT_ram_3008b074 == 4)) {
LAB_ram_4008f97c:
      iVar2 = uVar6 * 0x20;
      uVar1 = *(ushort *)(&DAT_ram_3008b090 + iVar2);
      if (((uVar1 & 1) != 0) && ((uVar1 & 0xfffc) == 0)) {
        if (uVar1 >> 1 == 0) {
          pcVar3 = (char *)FUN_ram_40094cd0();
          if (((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) &&
             (uVar8 = *(uint *)(&DAT_ram_3008b088 + iVar2), uVar8 - 1 < 0x3000)) {
LAB_ram_4008f9fc:
            if (*(int *)(&DAT_ram_3008b08c + iVar2) - 1U < 0xfffffffe) {
              uVar7 = (uint)*(ushort *)(param_2 + 1);
              if (uVar7 <= (uVar8 & 0xffff)) {
                uVar5 = (uint)param_2[3];
                if (uVar5 == 0) {
                  uVar5 = 1;
                }
                if (200 < uVar5) {
                  uVar5 = 200;
                }
                DAT_ram_3008b97c = (undefined1)(uVar8 >> 8);
                if (uVar8 < uVar7 + uVar5) {
                  _DAT_ram_3008b978 =
                       uVar6 | (uVar7 & 0xff) << 8 | (uint)param_2[2] << 0x10 | uVar8 << 0x18;
                  uVar5 = (uVar8 & 0xffff) - uVar7 & 0xffff;
                  uVar8 = uVar1 & 0xfffffffc;
                  if (uVar5 != 0) goto LAB_ram_4008fcd8;
                }
                else {
                  _DAT_ram_3008b978 =
                       uVar6 | (uVar7 & 0xff) << 8 | (uint)param_2[2] << 0x10 | uVar8 << 0x18;
LAB_ram_4008fcd8:
                  iVar2 = FUN_ram_40094cd0();
                  if (((DAT_ram_3008b910 != '\0') || (iVar2 == 0)) ||
                     ((*(code **)(iVar2 + 0x28) == (code *)0x0 ||
                      (uVar6 = (**(code **)(iVar2 + 0x28))(0,uVar6,uVar7,0x3008b97d,uVar5),
                      uVar8 = uVar5, uVar5 != uVar6)))) goto LAB_ram_4008fb1a;
                }
                if (param_4 != (undefined4 *)0x0) {
                  *param_4 = &DAT_ram_3008b978;
                  param_4[1] = uVar8 + 5;
                }
                *param_5 = 0;
                goto LAB_ram_4008fac2;
              }
            }
          }
        }
        else {
          pcVar3 = (char *)FUN_ram_40094cd0();
          if (((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) &&
             (uVar8 = *(uint *)(&DAT_ram_3008b088 + iVar2), 0x3b < uVar8)) {
            pcVar3 = (char *)FUN_ram_40094cd0();
            uVar7 = 0x3000;
            if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
              uVar7 = 0x303c;
            }
            if (((uVar8 <= uVar7) && ((ushort)(*(short *)(iVar2 + 0x3008b092) - 1U) < 0x3000)) &&
               (uVar8 = *(uint *)(&DAT_ram_3008b088 + iVar2),
               uVar8 == (ushort)(*(short *)(iVar2 + 0x3008b092) + 0x3c))) goto LAB_ram_4008f9fc;
          }
        }
      }
LAB_ram_4008fabc:
      *param_5 = 3;
      goto LAB_ram_4008fac2;
    }
    memset(&DAT_ram_3008b070,0xff,0x898);
    iVar2 = FUN_ram_40094cd0();
    iVar4 = FUN_ram_40094cd0();
    if (((DAT_ram_3008b910 == '\0') && (iVar4 != 0)) &&
       ((*(code **)(iVar4 + 8) != (code *)0x0 &&
        (((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0 && (iVar2 != 0)) &&
         (*(code **)(iVar2 + 0xc) != (code *)0x0)))))) {
      iVar2 = (**(code **)(iVar2 + 0xc))(&DAT_ram_3008b070);
      if (iVar2 == 1) {
        if ((_DAT_ram_3008b070 == 0x53415442) && (_DAT_ram_3008b074 == 4)) goto LAB_ram_4008fca4;
      }
      else if (iVar2 == 2) {
        memset(&DAT_ram_3008b070,0xff,0x898);
        _DAT_ram_3008b070 = 0x53415442;
        _DAT_ram_3008b074 = 4;
        _DAT_ram_3008b07a = 0;
        iVar2 = 0x3008b094;
        do {
          *(undefined2 *)(iVar2 + -4) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          *(undefined4 *)(iVar2 + -8) = 0;
          iVar4 = memset(iVar2,0,0x10);
          iVar2 = iVar4 + 0x20;
          *(undefined4 *)(iVar4 + 0x10) = DAT_ram_400a13d8;
        } while (iVar2 != 0x3008b554);
        iVar2 = 0x3008b554;
        do {
          *(undefined2 *)(iVar2 + -4) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          *(undefined4 *)(iVar2 + -8) = 0;
          iVar4 = memset(iVar2,0,0x10);
          iVar2 = iVar4 + 0x20;
          *(undefined4 *)(iVar4 + 0x10) = DAT_ram_400a13d8;
        } while (iVar2 != 0x3008b914);
        iVar2 = FUN_ram_40094cd0();
        if (((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) ||
           ((iVar4 = FUN_ram_40094cd0(), DAT_ram_3008b910 != '\0' ||
            (((((iVar4 == 0 || (*(code **)(iVar4 + 8) == (code *)0x0)) ||
               (iVar4 = (**(code **)(iVar4 + 8))(), iVar4 == 0)) ||
              ((iVar2 == 0 || (*(code **)(iVar2 + 0x10) == (code *)0x0)))) ||
             (iVar2 = (**(code **)(iVar2 + 0x10))(&DAT_ram_3008b070), iVar2 == 0))))))
        goto LAB_ram_4008fb1a;
LAB_ram_4008fca4:
        DAT_ram_3008b908 = '\x01';
        goto LAB_ram_4008f97c;
      }
    }
    memset(&DAT_ram_3008b070,0xff,0x898);
    DAT_ram_3008b908 = '\0';
  }
LAB_ram_4008fb1a:
  *param_5 = 4;
LAB_ram_4008fac2:
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
  }
  return 1;
}


/* NanoCore 1.12, address 0x4008fd1e.
 * REA evidence: ev_a7c8ec78522640efb96f37f87bdadd9e04d3db08184c82f0310e4600a7be0073
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4008fd1e(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 *param_4,
                undefined1 *param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (_DAT_ram_3008b940 == 0) {
    iVar3 = FUN_ram_40004988(0x3008b914,&DAT_ram_400a13a0,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b940 = 1;
      goto LAB_ram_4008fd4c;
    }
    if (_DAT_ram_3008b940 != 0) goto LAB_ram_4008fd4c;
  }
  else {
LAB_ram_4008fd4c:
    FUN_ram_40004a22(0x3008b914,0xffffffff);
  }
  bVar1 = *param_2;
  uVar2 = (uint)bVar1;
  if (0x25 < uVar2) {
    *param_5 = 3;
    goto joined_r0x4008ffac;
  }
  iVar3 = FUN_ram_40094cd0();
  if ((((DAT_ram_3008b910 != '\0') || (iVar3 == 0)) || (*(code **)(iVar3 + 8) == (code *)0x0)) ||
     (iVar3 = (**(code **)(iVar3 + 8))(), iVar3 == 0)) {
LAB_ram_4008ffa2:
    *param_5 = 4;
    goto joined_r0x4008ffac;
  }
  if (((DAT_ram_3008b908 == '\0') || (_DAT_ram_3008b070 != 0x53415442)) || (_DAT_ram_3008b074 != 4))
  {
    memset(&DAT_ram_3008b070,0xff,0x898);
    iVar3 = FUN_ram_40094cd0();
    iVar7 = FUN_ram_40094cd0();
    if (((DAT_ram_3008b910 != '\0') || (iVar7 == 0)) ||
       ((*(code **)(iVar7 + 8) == (code *)0x0 ||
        (((iVar7 = (**(code **)(iVar7 + 8))(), iVar7 == 0 || (iVar3 == 0)) ||
         (*(code **)(iVar3 + 0xc) == (code *)0x0)))))) {
LAB_ram_4008ff84:
      memset(&DAT_ram_3008b070,0xff,0x898);
      DAT_ram_3008b908 = '\0';
      goto LAB_ram_4008ffa2;
    }
    iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008b070);
    if (iVar3 == 1) {
      if ((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) goto LAB_ram_4008ff84;
    }
    else {
      if (iVar3 != 2) goto LAB_ram_4008ff84;
      memset(&DAT_ram_3008b070,0xff,0x898);
      _DAT_ram_3008b070 = 0x53415442;
      _DAT_ram_3008b074 = 4;
      _DAT_ram_3008b07a = 0;
      iVar3 = 0x3008b094;
      do {
        *(undefined2 *)(iVar3 + -4) = 0;
        *(undefined4 *)(iVar3 + -0xc) = 0;
        *(undefined4 *)(iVar3 + -8) = 0;
        iVar7 = memset(iVar3,0,0x10);
        iVar3 = iVar7 + 0x20;
        *(undefined4 *)(iVar7 + 0x10) = DAT_ram_400a13d8;
      } while (iVar3 != 0x3008b554);
      iVar3 = 0x3008b554;
      do {
        *(undefined2 *)(iVar3 + -4) = 0;
        *(undefined4 *)(iVar3 + -0xc) = 0;
        *(undefined4 *)(iVar3 + -8) = 0;
        iVar7 = memset(iVar3,0,0x10);
        iVar3 = iVar7 + 0x20;
        *(undefined4 *)(iVar7 + 0x10) = DAT_ram_400a13d8;
      } while (iVar3 != 0x3008b914);
      iVar3 = FUN_ram_40094cd0();
      if (((_DAT_ram_3008b070 != 0x53415442) || (_DAT_ram_3008b074 != 4)) ||
         ((iVar7 = FUN_ram_40094cd0(), DAT_ram_3008b910 != '\0' ||
          (((((iVar7 == 0 || (*(code **)(iVar7 + 8) == (code *)0x0)) ||
             (iVar7 = (**(code **)(iVar7 + 8))(), iVar7 == 0)) ||
            ((iVar3 == 0 || (*(code **)(iVar3 + 0x10) == (code *)0x0)))) ||
           (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008b070), iVar3 == 0))))))
      goto LAB_ram_4008ffa2;
    }
    DAT_ram_3008b908 = '\x01';
  }
  iVar3 = uVar2 * 0x20;
  uVar5 = *(uint *)(&DAT_ram_3008b090 + iVar3);
  uVar8 = *(uint *)(&DAT_ram_3008b088 + iVar3);
  iVar7 = *(int *)(&DAT_ram_3008b08c + iVar3);
  uStack_44 = *(uint *)(iVar3 + 0x3008b094);
  uStack_40 = *(undefined4 *)(iVar3 + 0x3008b098);
  uStack_3c = *(undefined4 *)(iVar3 + 0x3008b09c);
  uStack_38 = *(undefined4 *)(iVar3 + 0x3008b0a0);
  uStack_34 = *(undefined4 *)(iVar3 + 0x3008b0a4);
  uVar6 = uVar8;
  if (((uVar5 & 1) == 0) || ((uVar5 & 0xfffc) != 0)) {
    sVar9 = 0;
  }
  else if ((uVar5 & 0xffff) >> 1 == 0) {
    pcVar4 = (char *)FUN_ram_40094cd0();
    if (((pcVar4 == (char *)0x0) || (sVar9 = 0, *pcVar4 == '\0')) && (sVar9 = 0, uVar8 - 1 < 0x3000)
       ) {
LAB_ram_4009016c:
      sVar9 = 0;
      if ((iVar7 - 1U < 0xfffffffe) && (sVar9 = 1, (uStack_44 & 0xff) == 0)) {
        FUN_ram_40005520(&uStack_44,0x10,s__02u_Slot_ram_400a13cc,uVar2 + 1);
        uVar6 = uVar8;
      }
    }
  }
  else {
    pcVar4 = (char *)FUN_ram_40094cd0();
    if (((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) || (uVar8 < 0x3c)) {
      sVar9 = 0;
    }
    else {
      pcVar4 = (char *)FUN_ram_40094cd0();
      uVar6 = 0x3000;
      if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
        uVar6 = 0x303c;
      }
      if (((uVar8 <= uVar6) && (((uVar5 >> 0x10) - 1 & 0xffff) < 0x3000)) &&
         (uVar6 = (uVar5 >> 0x10) + 0x3c & 0xffff, uVar6 == uVar8)) goto LAB_ram_4009016c;
      sVar9 = 0;
      uVar6 = uVar8;
    }
  }
  DAT_ram_3008b95a = (_DAT_ram_3008b076 & 0xff) < 0x26 && uVar2 == _DAT_ram_3008b076;
  DAT_ram_3008b962 = (undefined1)((uint)iVar7 >> 0x18);
  _DAT_ram_3008b958 = (ushort)bVar1 | sVar9 << 8;
  DAT_ram_3008b963 = (undefined1)uStack_34;
  DAT_ram_3008b964 = uStack_34._1_1_;
  DAT_ram_3008b965 = uStack_34._2_1_;
  _DAT_ram_3008b966 = (undefined2)uStack_44;
  DAT_ram_3008b95b = (undefined1)uVar6;
  DAT_ram_3008b95c = (undefined1)(uVar6 >> 8);
  _DAT_ram_3008b968 = uStack_44._2_2_;
  DAT_ram_3008b95d = (undefined1)(uVar6 >> 0x10);
  DAT_ram_3008b95e = (undefined1)(uVar6 >> 0x18);
  _DAT_ram_3008b96a = (undefined2)uStack_40;
  DAT_ram_3008b95f = (undefined1)iVar7;
  DAT_ram_3008b960 = (undefined1)((uint)iVar7 >> 8);
  _DAT_ram_3008b96c = uStack_40._2_2_;
  DAT_ram_3008b961 = (undefined1)((uint)iVar7 >> 0x10);
  _DAT_ram_3008b96e = (undefined2)uStack_3c;
  _DAT_ram_3008b970 = uStack_3c._2_2_;
  _DAT_ram_3008b972 = (undefined2)uStack_38;
  _DAT_ram_3008b974 = uStack_38._2_2_;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = &DAT_ram_3008b958;
    param_4[1] = 0x1e;
  }
  *param_5 = 0;
joined_r0x4008ffac:
  if (_DAT_ram_3008b940 != 0) {
    FUN_ram_40004b14(0x3008b914);
  }
  return 1;
}


