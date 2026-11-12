/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4008d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4008d830.
 * REA evidence: ev_23a51634e473ecc4cb595834f07f9853ebb2f437d5b283f7c325979afb151772
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4008d830(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 *param_4,
                undefined1 *param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (_DAT_ram_3008b8c0 == 0) {
    iVar2 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_4008d846;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_4008d846;
  }
  else {
LAB_ram_4008d846:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
  }
  uVar6 = (uint)*param_2;
  if (0x1d < uVar6) goto LAB_ram_4008d98c;
  iVar2 = FUN_ram_400933f0();
  if ((((DAT_ram_3008b890 == '\0') && (iVar2 != 0)) && (*(code **)(iVar2 + 8) != (code *)0x0)) &&
     (iVar2 = (**(code **)(iVar2 + 8))(), iVar2 != 0)) {
    if (((DAT_ram_3008b888 != '\0') && (_DAT_ram_3008aff0 == 0x53415442)) &&
       (_DAT_ram_3008aff4 == 4)) {
LAB_ram_4008d8b2:
      iVar2 = uVar6 * 0x20;
      uVar1 = *(ushort *)(&DAT_ram_3008b4d0 + iVar2);
      if ((((uVar1 & 1) != 0) && ((uVar1 & 0xfffc) == 0 && uVar1 >> 1 == 0)) &&
         ((uVar5 = *(uint *)(&DAT_ram_3008b4c8 + iVar2), uVar5 - 1 < 0x1000 &&
          (*(int *)(&DAT_ram_3008b4cc + iVar2) - 1U < 0xfffffffe)))) {
        uVar7 = (uint)*(ushort *)(param_2 + 1);
        if (uVar7 <= (uVar5 & 0xffff)) {
          uVar4 = (uint)param_2[3];
          if (uVar4 == 0) {
            uVar4 = 1;
          }
          if (200 < uVar4) {
            uVar4 = 200;
          }
          DAT_ram_3008b8fc = (undefined1)(uVar5 >> 8);
          if (uVar5 < uVar7 + uVar4) {
            _DAT_ram_3008b8f8 =
                 uVar6 | (uVar7 & 0xff) << 8 | (uint)param_2[2] << 0x10 | uVar5 << 0x18;
            uVar4 = (uVar5 & 0xffff) - uVar7 & 0xffff;
            uVar5 = 0;
            if (uVar4 != 0) goto LAB_ram_4008dba8;
          }
          else {
            _DAT_ram_3008b8f8 =
                 uVar6 | (uVar7 & 0xff) << 8 | (uint)param_2[2] << 0x10 | uVar5 << 0x18;
LAB_ram_4008dba8:
            iVar2 = FUN_ram_400933f0();
            if ((((DAT_ram_3008b890 != '\0') || (iVar2 == 0)) ||
                (*(code **)(iVar2 + 0x28) == (code *)0x0)) ||
               (uVar6 = (**(code **)(iVar2 + 0x28))(1,uVar6,uVar7,0x3008b8fd,uVar4), uVar5 = uVar4,
               uVar4 != uVar6)) goto LAB_ram_4008d9ea;
          }
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = &DAT_ram_3008b8f8;
            param_4[1] = uVar5 + 5;
          }
          *param_5 = 0;
          goto LAB_ram_4008d992;
        }
      }
LAB_ram_4008d98c:
      *param_5 = 3;
      goto LAB_ram_4008d992;
    }
    memset(&DAT_ram_3008aff0,0xff,0x898);
    iVar2 = FUN_ram_400933f0();
    iVar3 = FUN_ram_400933f0();
    if (((DAT_ram_3008b890 == '\0') && (iVar3 != 0)) &&
       ((*(code **)(iVar3 + 8) != (code *)0x0 &&
        (((iVar3 = (**(code **)(iVar3 + 8))(), iVar3 != 0 && (iVar2 != 0)) &&
         (*(code **)(iVar2 + 0xc) != (code *)0x0)))))) {
      iVar2 = (**(code **)(iVar2 + 0xc))(&DAT_ram_3008aff0);
      if (iVar2 == 1) {
        if ((_DAT_ram_3008aff0 == 0x53415442) && (_DAT_ram_3008aff4 == 4)) goto LAB_ram_4008db74;
      }
      else if (iVar2 == 2) {
        memset(&DAT_ram_3008aff0,0xff,0x898);
        _DAT_ram_3008aff0 = 0x53415442;
        _DAT_ram_3008aff4 = 4;
        _DAT_ram_3008affa = 0;
        iVar2 = 0x3008b014;
        do {
          *(undefined2 *)(iVar2 + -4) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          *(undefined4 *)(iVar2 + -8) = 0;
          iVar3 = memset(iVar2,0,0x10);
          iVar2 = iVar3 + 0x20;
          *(undefined4 *)(iVar3 + 0x10) = DAT_ram_4009b3c0;
        } while (iVar2 != 0x3008b4d4);
        iVar2 = 0x3008b4d4;
        do {
          *(undefined2 *)(iVar2 + -4) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          *(undefined4 *)(iVar2 + -8) = 0;
          iVar3 = memset(iVar2,0,0x10);
          iVar2 = iVar3 + 0x20;
          *(undefined4 *)(iVar3 + 0x10) = DAT_ram_4009b3c0;
        } while (iVar2 != 0x3008b894);
        iVar2 = FUN_ram_400933f0();
        if ((((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) ||
            ((iVar3 = FUN_ram_400933f0(), DAT_ram_3008b890 != '\0' ||
             ((((iVar3 == 0 || (*(code **)(iVar3 + 8) == (code *)0x0)) ||
               (iVar3 = (**(code **)(iVar3 + 8))(), iVar3 == 0)) ||
              ((iVar2 == 0 || (*(code **)(iVar2 + 0x10) == (code *)0x0)))))))) ||
           (iVar2 = (**(code **)(iVar2 + 0x10))(&DAT_ram_3008aff0), iVar2 == 0))
        goto LAB_ram_4008d9ea;
LAB_ram_4008db74:
        DAT_ram_3008b888 = '\x01';
        goto LAB_ram_4008d8b2;
      }
    }
    memset(&DAT_ram_3008aff0,0xff,0x898);
    DAT_ram_3008b888 = '\0';
  }
LAB_ram_4008d9ea:
  *param_5 = 4;
LAB_ram_4008d992:
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
  }
  return 1;
}


/* NanoCore 1.11, address 0x4008dbee.
 * REA evidence: ev_949b8057acd0e4e1624c17c246ca8ad4489bb0308773da6571e6e7185b9272c9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4008dbee(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 *param_4,
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
  
  if (_DAT_ram_3008b8c0 == 0) {
    iVar3 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_4008dc1c;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_4008dc1c;
  }
  else {
LAB_ram_4008dc1c:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
  }
  bVar1 = *param_2;
  uVar2 = (uint)bVar1;
  if (0x1d < uVar2) {
    *param_5 = 3;
    goto joined_r0x4008de40;
  }
  iVar3 = FUN_ram_400933f0();
  if ((((DAT_ram_3008b890 == '\0') && (iVar3 != 0)) && (*(code **)(iVar3 + 8) != (code *)0x0)) &&
     (iVar3 = (**(code **)(iVar3 + 8))(), iVar3 != 0)) {
    if (((DAT_ram_3008b888 == '\0') || (_DAT_ram_3008aff0 != 0x53415442)) ||
       (_DAT_ram_3008aff4 != 4)) {
      memset(&DAT_ram_3008aff0,0xff,0x898);
      iVar3 = FUN_ram_400933f0();
      iVar5 = FUN_ram_400933f0();
      if (((DAT_ram_3008b890 != '\0') || (iVar5 == 0)) ||
         ((*(code **)(iVar5 + 8) == (code *)0x0 ||
          (((iVar5 = (**(code **)(iVar5 + 8))(), iVar5 == 0 || (iVar3 == 0)) ||
           (*(code **)(iVar3 + 0xc) == (code *)0x0)))))) {
LAB_ram_4008de18:
        memset(&DAT_ram_3008aff0,0xff,0x898);
        DAT_ram_3008b888 = '\0';
        goto LAB_ram_4008de36;
      }
      iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008aff0);
      if (iVar3 == 1) {
        if ((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) goto LAB_ram_4008de18;
      }
      else {
        if (iVar3 != 2) goto LAB_ram_4008de18;
        memset(&DAT_ram_3008aff0,0xff,0x898);
        _DAT_ram_3008aff0 = 0x53415442;
        _DAT_ram_3008aff4 = 4;
        _DAT_ram_3008affa = 0;
        iVar3 = 0x3008b014;
        do {
          *(undefined2 *)(iVar3 + -4) = 0;
          *(undefined4 *)(iVar3 + -0xc) = 0;
          *(undefined4 *)(iVar3 + -8) = 0;
          iVar5 = memset(iVar3,0,0x10);
          iVar3 = iVar5 + 0x20;
          *(undefined4 *)(iVar5 + 0x10) = DAT_ram_4009b3c0;
        } while (iVar3 != 0x3008b4d4);
        iVar3 = 0x3008b4d4;
        do {
          *(undefined2 *)(iVar3 + -4) = 0;
          *(undefined4 *)(iVar3 + -0xc) = 0;
          *(undefined4 *)(iVar3 + -8) = 0;
          iVar5 = memset(iVar3,0,0x10);
          iVar3 = iVar5 + 0x20;
          *(undefined4 *)(iVar5 + 0x10) = DAT_ram_4009b3c0;
        } while (iVar3 != 0x3008b894);
        iVar3 = FUN_ram_400933f0();
        if (((((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) ||
             ((iVar5 = FUN_ram_400933f0(), DAT_ram_3008b890 != '\0' ||
              (((iVar5 == 0 || (*(code **)(iVar5 + 8) == (code *)0x0)) ||
               (iVar5 = (**(code **)(iVar5 + 8))(), iVar5 == 0)))))) ||
            ((iVar3 == 0 || (*(code **)(iVar3 + 0x10) == (code *)0x0)))) ||
           (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008aff0), iVar3 == 0))
        goto LAB_ram_4008de36;
      }
      DAT_ram_3008b888 = '\x01';
    }
    iVar3 = uVar2 * 0x20;
    uVar4 = *(uint *)(&DAT_ram_3008b4d0 + iVar3);
    iVar6 = *(int *)(&DAT_ram_3008b4c8 + iVar3);
    uStack_44 = *(uint *)(iVar3 + 0x3008b4d4);
    iVar5 = *(int *)(&DAT_ram_3008b4cc + iVar3);
    uStack_40 = *(undefined4 *)(iVar3 + 0x3008b4d8);
    uStack_3c = *(undefined4 *)(iVar3 + 0x3008b4dc);
    uStack_38 = *(undefined4 *)(iVar3 + 0x3008b4e0);
    uStack_34 = *(undefined4 *)(iVar3 + 0x3008b4e4);
    sVar7 = 0;
    if ((((uVar4 & 1) != 0) && (sVar7 = 0, (uVar4 & 0xffff) >> 1 == 0 && (uVar4 & 0xfffc) == 0)) &&
       ((iVar6 - 1U < 0x1000 && ((iVar5 - 1U < 0xfffffffe && (sVar7 = 1, (uStack_44 & 0xff) == 0))))
       )) {
      FUN_ram_400055da(&uStack_44,0x10,s__02u_Slot_ram_4009b3b4,uVar2 + 1);
    }
    DAT_ram_3008b8db = (undefined1)iVar6;
    DAT_ram_3008b8e3 = (undefined1)uStack_34;
    DAT_ram_3008b8da = (_DAT_ram_3008aff8 & 0xff) < 0x1e && uVar2 == _DAT_ram_3008aff8;
    _DAT_ram_3008b8d8 = (ushort)bVar1 | sVar7 << 8;
    DAT_ram_3008b8e4 = uStack_34._1_1_;
    DAT_ram_3008b8e5 = uStack_34._2_1_;
    _DAT_ram_3008b8e6 = (undefined2)uStack_44;
    DAT_ram_3008b8dc = (undefined1)((uint)iVar6 >> 8);
    _DAT_ram_3008b8e8 = uStack_44._2_2_;
    DAT_ram_3008b8dd = (undefined1)((uint)iVar6 >> 0x10);
    DAT_ram_3008b8de = (undefined1)((uint)iVar6 >> 0x18);
    _DAT_ram_3008b8ea = (undefined2)uStack_40;
    DAT_ram_3008b8df = (undefined1)iVar5;
    DAT_ram_3008b8e0 = (undefined1)((uint)iVar5 >> 8);
    _DAT_ram_3008b8ec = uStack_40._2_2_;
    DAT_ram_3008b8e1 = (undefined1)((uint)iVar5 >> 0x10);
    DAT_ram_3008b8e2 = (undefined1)((uint)iVar5 >> 0x18);
    _DAT_ram_3008b8ee = (undefined2)uStack_3c;
    _DAT_ram_3008b8f0 = uStack_3c._2_2_;
    _DAT_ram_3008b8f2 = (undefined2)uStack_38;
    _DAT_ram_3008b8f4 = uStack_38._2_2_;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = &DAT_ram_3008b8d8;
      param_4[1] = 0x1e;
    }
    *param_5 = 0;
  }
  else {
LAB_ram_4008de36:
    *param_5 = 4;
  }
joined_r0x4008de40:
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
  }
  return 1;
}


/* NanoCore 1.11, address 0x4008dff4.
 * REA evidence: ev_a601f86b33818809389a93e30ee08c23964ad960cae4529f70e9a00583ff1e0f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4008dff4(undefined4 param_1,byte *param_2,uint param_3,undefined4 *param_4,
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
  if (_DAT_ram_3008b8c0 == 0) {
    iVar2 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_4008e056;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_4008e056;
  }
  else {
LAB_ram_4008e056:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
  }
  uVar6 = (uint)*param_2;
  if (0x25 < uVar6) goto LAB_ram_4008e204;
  iVar2 = FUN_ram_400933f0();
  if ((((DAT_ram_3008b890 == '\0') && (iVar2 != 0)) && (*(code **)(iVar2 + 8) != (code *)0x0)) &&
     (iVar2 = (**(code **)(iVar2 + 8))(), iVar2 != 0)) {
    if (((DAT_ram_3008b888 != '\0') && (_DAT_ram_3008aff0 == 0x53415442)) &&
       (_DAT_ram_3008aff4 == 4)) {
LAB_ram_4008e0c4:
      iVar2 = uVar6 * 0x20;
      uVar1 = *(ushort *)(&DAT_ram_3008b010 + iVar2);
      if (((uVar1 & 1) != 0) && ((uVar1 & 0xfffc) == 0)) {
        if (uVar1 >> 1 == 0) {
          pcVar3 = (char *)FUN_ram_400933f0();
          if (((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) &&
             (uVar8 = *(uint *)(&DAT_ram_3008b008 + iVar2), uVar8 - 1 < 0x3000)) {
LAB_ram_4008e144:
            if (*(int *)(&DAT_ram_3008b00c + iVar2) - 1U < 0xfffffffe) {
              uVar7 = (uint)*(ushort *)(param_2 + 1);
              if (uVar7 <= (uVar8 & 0xffff)) {
                uVar5 = (uint)param_2[3];
                if (uVar5 == 0) {
                  uVar5 = 1;
                }
                if (200 < uVar5) {
                  uVar5 = 200;
                }
                DAT_ram_3008b8fc = (undefined1)(uVar8 >> 8);
                if (uVar8 < uVar7 + uVar5) {
                  _DAT_ram_3008b8f8 =
                       uVar6 | (uVar7 & 0xff) << 8 | (uint)param_2[2] << 0x10 | uVar8 << 0x18;
                  uVar5 = (uVar8 & 0xffff) - uVar7 & 0xffff;
                  uVar8 = uVar1 & 0xfffffffc;
                  if (uVar5 != 0) goto LAB_ram_4008e420;
                }
                else {
                  _DAT_ram_3008b8f8 =
                       uVar6 | (uVar7 & 0xff) << 8 | (uint)param_2[2] << 0x10 | uVar8 << 0x18;
LAB_ram_4008e420:
                  iVar2 = FUN_ram_400933f0();
                  if (((DAT_ram_3008b890 != '\0') || (iVar2 == 0)) ||
                     ((*(code **)(iVar2 + 0x28) == (code *)0x0 ||
                      (uVar6 = (**(code **)(iVar2 + 0x28))(0,uVar6,uVar7,0x3008b8fd,uVar5),
                      uVar8 = uVar5, uVar5 != uVar6)))) goto LAB_ram_4008e262;
                }
                if (param_4 != (undefined4 *)0x0) {
                  *param_4 = &DAT_ram_3008b8f8;
                  param_4[1] = uVar8 + 5;
                }
                *param_5 = 0;
                goto LAB_ram_4008e20a;
              }
            }
          }
        }
        else {
          pcVar3 = (char *)FUN_ram_400933f0();
          if (((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) &&
             (uVar8 = *(uint *)(&DAT_ram_3008b008 + iVar2), 0x3b < uVar8)) {
            pcVar3 = (char *)FUN_ram_400933f0();
            uVar7 = 0x3000;
            if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
              uVar7 = 0x303c;
            }
            if (((uVar8 <= uVar7) && ((ushort)(*(short *)(iVar2 + 0x3008b012) - 1U) < 0x3000)) &&
               (uVar8 = *(uint *)(&DAT_ram_3008b008 + iVar2),
               uVar8 == (ushort)(*(short *)(iVar2 + 0x3008b012) + 0x3c))) goto LAB_ram_4008e144;
          }
        }
      }
LAB_ram_4008e204:
      *param_5 = 3;
      goto LAB_ram_4008e20a;
    }
    memset(&DAT_ram_3008aff0,0xff,0x898);
    iVar2 = FUN_ram_400933f0();
    iVar4 = FUN_ram_400933f0();
    if (((DAT_ram_3008b890 == '\0') && (iVar4 != 0)) &&
       ((*(code **)(iVar4 + 8) != (code *)0x0 &&
        (((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0 && (iVar2 != 0)) &&
         (*(code **)(iVar2 + 0xc) != (code *)0x0)))))) {
      iVar2 = (**(code **)(iVar2 + 0xc))(&DAT_ram_3008aff0);
      if (iVar2 == 1) {
        if ((_DAT_ram_3008aff0 == 0x53415442) && (_DAT_ram_3008aff4 == 4)) goto LAB_ram_4008e3ec;
      }
      else if (iVar2 == 2) {
        memset(&DAT_ram_3008aff0,0xff,0x898);
        _DAT_ram_3008aff0 = 0x53415442;
        _DAT_ram_3008aff4 = 4;
        _DAT_ram_3008affa = 0;
        iVar2 = 0x3008b014;
        do {
          *(undefined2 *)(iVar2 + -4) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          *(undefined4 *)(iVar2 + -8) = 0;
          iVar4 = memset(iVar2,0,0x10);
          iVar2 = iVar4 + 0x20;
          *(undefined4 *)(iVar4 + 0x10) = DAT_ram_4009b3c0;
        } while (iVar2 != 0x3008b4d4);
        iVar2 = 0x3008b4d4;
        do {
          *(undefined2 *)(iVar2 + -4) = 0;
          *(undefined4 *)(iVar2 + -0xc) = 0;
          *(undefined4 *)(iVar2 + -8) = 0;
          iVar4 = memset(iVar2,0,0x10);
          iVar2 = iVar4 + 0x20;
          *(undefined4 *)(iVar4 + 0x10) = DAT_ram_4009b3c0;
        } while (iVar2 != 0x3008b894);
        iVar2 = FUN_ram_400933f0();
        if (((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) ||
           ((iVar4 = FUN_ram_400933f0(), DAT_ram_3008b890 != '\0' ||
            (((((iVar4 == 0 || (*(code **)(iVar4 + 8) == (code *)0x0)) ||
               (iVar4 = (**(code **)(iVar4 + 8))(), iVar4 == 0)) ||
              ((iVar2 == 0 || (*(code **)(iVar2 + 0x10) == (code *)0x0)))) ||
             (iVar2 = (**(code **)(iVar2 + 0x10))(&DAT_ram_3008aff0), iVar2 == 0))))))
        goto LAB_ram_4008e262;
LAB_ram_4008e3ec:
        DAT_ram_3008b888 = '\x01';
        goto LAB_ram_4008e0c4;
      }
    }
    memset(&DAT_ram_3008aff0,0xff,0x898);
    DAT_ram_3008b888 = '\0';
  }
LAB_ram_4008e262:
  *param_5 = 4;
LAB_ram_4008e20a:
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
  }
  return 1;
}


