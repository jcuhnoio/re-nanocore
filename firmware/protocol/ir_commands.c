/* NanoCore 1.10 analysis module: protocol/ir_commands.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40087706.
 * REA evidence: ev_1aacbdc5aace5711ef5f3eeb837c79f1774528e12006fe0a827c297cd817820e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
nc_handle_opcode_57(undefined4 param_1,byte *param_2,int param_3,undefined4 param_4,
                   undefined1 *param_5)

{
  int iVar1;
  
  if (param_5 == (undefined1 *)0x0) {
    return 0;
  }
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    if (0x1d < *param_2) {
      *param_5 = 3;
      return 1;
    }
    iVar1 = thunk_FUN_ram_4001d41e();
    if (iVar1 == 0) {
      *param_5 = 0;
    }
    else {
      *param_5 = 4;
    }
    return 1;
  }
  *param_5 = 1;
  return 1;
}


/* NanoCore 1.10, address 0x40087b30.
 * REA evidence: ev_9118fd04ae53254c36d968e93755c5d47e74152d4a79168845a63bcb9b4abb8a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 nc_handle_opcode_5a(void)

{
  int iVar1;
  undefined4 *in_a3;
  undefined1 *in_a4;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (in_a4 == (undefined1 *)0x0) {
    return 0;
  }
  if (_DAT_ram_3008a534 == 0) {
    iVar1 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar1 == 0) {
      _DAT_ram_3008a534 = 1;
      FUN_ram_400049d6(0x3008a508,0xffffffff);
      if (DAT_ram_30086c44 == '\0') goto LAB_ram_40087c38;
    }
    else {
      if (_DAT_ram_3008a534 != 0) goto LAB_ram_40087b54;
      if (DAT_ram_30086c44 == '\0') {
        uVar2 = 0;
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        goto LAB_ram_40087bcc;
      }
    }
LAB_ram_40087b76:
    uVar3 = _DAT_ram_30086c4c & 0xff;
    uVar4 = (_DAT_ram_30086c4c & 0xffff) >> 8;
    uVar5 = (_DAT_ram_30086c4c & 0xffffff) >> 0x10;
    uVar2 = _DAT_ram_30086c4c >> 0x18;
  }
  else {
LAB_ram_40087b54:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
    if (DAT_ram_30086c44 != '\0') goto LAB_ram_40087b76;
LAB_ram_40087c38:
    uVar3 = 0;
    uVar5 = 0;
    uVar2 = 0;
    uVar4 = 0;
  }
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
  }
LAB_ram_40087bcc:
  _DAT_ram_3008a640 = uVar3 | uVar4 << 8 | uVar5 << 0x10 | uVar2 << 0x18;
  if (in_a3 != (undefined4 *)0x0) {
    *in_a3 = &DAT_ram_3008a640;
    in_a3[1] = 4;
  }
  *in_a4 = 0;
  return 1;
}


/* NanoCore 1.10, address 0x400883d4.
 * REA evidence: ev_a4e10167b4b27f78a2dd9b7ec91bb1468c652da1f1c4d22692e59c01b1e56552
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
nc_handle_opcode_5b(undefined4 param_1,uint *param_2,uint param_3,undefined4 param_4,
                   undefined1 *param_5)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_5 == (undefined1 *)0x0) {
    return 0;
  }
  if ((param_2 == (uint *)0x0) || (param_3 < 5)) {
    *param_5 = 1;
    return 1;
  }
  if ((DAT_ram_30086c44 == '\0') ||
     (uVar5 = *param_2, DAT_ram_30086c46 != *(char *)((int)param_2 + 3))) {
    *param_5 = 2;
    return 1;
  }
  if (_DAT_ram_3008a534 == 0) {
    iVar4 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar4 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_4008844c;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_4008844c;
    if ((DAT_ram_30086c44 != '\0') && (DAT_ram_30086c45 != '\0')) goto LAB_ram_40088466;
  }
  else {
LAB_ram_4008844c:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
    if ((DAT_ram_30086c44 != '\0') && (DAT_ram_30086c45 != '\0')) {
LAB_ram_40088466:
      cVar1 = DAT_ram_30086c46;
      uVar5 = uVar5 & 0xffffff;
      if (uVar5 == _DAT_ram_30086c4c) {
        iVar4 = param_3 - 4;
        if ((_DAT_ram_30086c48 < iVar4 + uVar5) || (0x1000 < iVar4 + uVar5)) {
          uVar2 = 3;
joined_r0x40088532:
          if (_DAT_ram_3008a534 != 0) {
            FUN_ram_40004ac8(0x3008a508);
          }
          goto LAB_ram_400884ce;
        }
        iVar3 = FUN_ram_4009048c();
        if ((iVar3 != 0) && (*(code **)(iVar3 + 0x1c) != (code *)0x0)) {
          iVar3 = (**(code **)(iVar3 + 0x1c))(1,cVar1,uVar5,param_2 + 1,iVar4);
          if (iVar4 == iVar3) {
            _DAT_ram_30086c4c = iVar4 + _DAT_ram_30086c4c;
            _DAT_ram_30086c50 = FUN_ram_4000755e(_DAT_ram_30086c50,param_2 + 1,iVar4);
            uVar2 = 0;
            goto joined_r0x40088532;
          }
        }
      }
    }
    if (_DAT_ram_3008a534 != 0) {
      FUN_ram_40004ac8(0x3008a508);
      uVar2 = 4;
      goto LAB_ram_400884ce;
    }
  }
  uVar2 = 4;
LAB_ram_400884ce:
  *param_5 = uVar2;
  return 1;
}


/* NanoCore 1.10, address 0x4008a28c.
 * REA evidence: ev_59777ca1a314ea91df7408dc192496bc9dd5629da29ccd007c2e2f475aa34367
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
nc_handle_opcode_59(undefined4 param_1,byte *param_2,uint param_3,undefined4 *param_4,
                   undefined1 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_5 == (undefined1 *)0x0) {
    return 0;
  }
  if ((param_2 == (byte *)0x0) || (param_3 < 4)) {
    *param_5 = 1;
    return 1;
  }
  if (_DAT_ram_3008a534 == 0) {
    iVar2 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar2 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_4008a2e6;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_4008a2e6;
  }
  else {
LAB_ram_4008a2e6:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
  }
  uVar8 = (uint)*param_2;
  if (0x1d < uVar8) goto LAB_ram_4008a40e;
  puVar1 = (undefined4 *)FUN_ram_4009048c();
  if (((puVar1 != (undefined4 *)0x0) && ((code *)*puVar1 != (code *)0x0)) &&
     (iVar2 = (*(code *)*puVar1)(), iVar2 != 0)) {
    if (((DAT_ram_3008a500 != '\0') && (_DAT_ram_30089c68 == 0x53415442)) &&
       (_DAT_ram_30089c6c == 4)) {
LAB_ram_4008a342:
      iVar2 = uVar8 * 0x20;
      if ((((*(ushort *)(&DAT_ram_3008a148 + iVar2) & 1) != 0) &&
          (uVar6 = *(uint *)(&DAT_ram_3008a140 + iVar2), uVar6 - 1 < 0x1000)) &&
         (*(int *)(&DAT_ram_3008a144 + iVar2) - 1U < 0xfffffffe)) {
        uVar9 = (uint)*(ushort *)(param_2 + 1);
        if (uVar9 <= (uVar6 & 0xffff)) {
          uVar5 = (uint)param_2[3];
          if (uVar5 == 0) {
            uVar5 = 1;
          }
          if (200 < uVar5) {
            uVar5 = 200;
          }
          DAT_ram_3008a570 = (undefined1)(uVar6 >> 8);
          if (uVar6 < uVar9 + uVar5) {
            _DAT_ram_3008a56c =
                 uVar8 | (uVar9 & 0xff) << 8 | (uint)param_2[2] << 0x10 | uVar6 << 0x18;
            uVar5 = (uVar6 & 0xffff) - uVar9 & 0xffff;
            uVar6 = 0;
            if (uVar5 != 0) goto LAB_ram_4008a616;
          }
          else {
            _DAT_ram_3008a56c =
                 uVar8 | (uVar9 & 0xff) << 8 | (uint)param_2[2] << 0x10 | uVar6 << 0x18;
LAB_ram_4008a616:
            iVar2 = FUN_ram_4009048c();
            if (((iVar2 == 0) || (*(code **)(iVar2 + 0x20) == (code *)0x0)) ||
               (uVar8 = (**(code **)(iVar2 + 0x20))(1,uVar8,uVar9,0x3008a571,uVar5), uVar6 = uVar5,
               uVar5 != uVar8)) goto LAB_ram_4008a5b6;
          }
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = &DAT_ram_3008a56c;
            param_4[1] = uVar6 + 5;
          }
          *param_5 = 0;
          goto LAB_ram_4008a414;
        }
      }
LAB_ram_4008a40e:
      *param_5 = 3;
      goto LAB_ram_4008a414;
    }
    memset(&DAT_ram_30089c68,0xff,0x898);
    iVar2 = FUN_ram_4009048c();
    puVar1 = (undefined4 *)FUN_ram_4009048c();
    if (((puVar1 != (undefined4 *)0x0) && ((code *)*puVar1 != (code *)0x0)) &&
       ((iVar3 = (*(code *)*puVar1)(), iVar3 != 0 &&
        ((iVar2 != 0 && (*(code **)(iVar2 + 4) != (code *)0x0)))))) {
      iVar2 = (**(code **)(iVar2 + 4))(&DAT_ram_30089c68);
      if (iVar2 == 1) {
        if ((_DAT_ram_30089c68 == 0x53415442) && (_DAT_ram_30089c6c == 4)) goto LAB_ram_4008a56e;
      }
      else if (iVar2 == 2) {
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
        iVar2 = FUN_ram_4009048c();
        if (((((_DAT_ram_30089c68 != 0x53415442) || (_DAT_ram_30089c6c != 4)) ||
             (puVar1 = (undefined4 *)FUN_ram_4009048c(), puVar1 == (undefined4 *)0x0)) ||
            (((code *)*puVar1 == (code *)0x0 || (iVar3 = (*(code *)*puVar1)(), iVar3 == 0)))) ||
           ((iVar2 == 0 ||
            ((*(code **)(iVar2 + 8) == (code *)0x0 ||
             (iVar2 = (**(code **)(iVar2 + 8))(&DAT_ram_30089c68), iVar2 == 0))))))
        goto LAB_ram_4008a5b6;
LAB_ram_4008a56e:
        DAT_ram_3008a500 = '\x01';
        goto LAB_ram_4008a342;
      }
    }
    memset(&DAT_ram_30089c68,0xff,0x898);
    DAT_ram_3008a500 = '\0';
  }
LAB_ram_4008a5b6:
  *param_5 = 4;
LAB_ram_4008a414:
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
  }
  return 1;
}


/* NanoCore 1.10, address 0x4008a9f4.
 * REA evidence: ev_5fa9eef5892943fba9150442d61ef9e75a48efda9a24bd1ba01d8ce09330184a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
nc_handle_ir_slot_info
          (undefined4 param_1,byte *param_2,int param_3,undefined4 *param_4,undefined1 *param_5)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  short sVar9;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (param_5 == (undefined1 *)0x0) {
    return 0;
  }
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    *param_5 = 1;
    return 1;
  }
  if (_DAT_ram_3008a534 == 0) {
    iVar4 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar4 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_4008aa30;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_4008aa30;
  }
  else {
LAB_ram_4008aa30:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
  }
  bVar1 = *param_2;
  uVar2 = (uint)bVar1;
  if (0x1d < uVar2) {
    *param_5 = 3;
    goto joined_r0x4008ad80;
  }
  puVar3 = (undefined4 *)FUN_ram_4009048c();
  if (((puVar3 == (undefined4 *)0x0) || ((code *)*puVar3 == (code *)0x0)) ||
     (iVar4 = (*(code *)*puVar3)(), iVar4 == 0)) {
LAB_ram_4008ad76:
    *param_5 = 4;
  }
  else {
    if (((DAT_ram_3008a500 == '\0') || (_DAT_ram_30089c68 != 0x53415442)) ||
       (_DAT_ram_30089c6c != 4)) {
      memset(&DAT_ram_30089c68,0xff,0x898);
      iVar4 = FUN_ram_4009048c();
      puVar3 = (undefined4 *)FUN_ram_4009048c();
      if (((puVar3 == (undefined4 *)0x0) || ((code *)*puVar3 == (code *)0x0)) ||
         ((iVar6 = (*(code *)*puVar3)(), iVar6 == 0 ||
          ((iVar4 == 0 || (*(code **)(iVar4 + 4) == (code *)0x0)))))) {
LAB_ram_4008ad58:
        memset(&DAT_ram_30089c68,0xff,0x898);
        DAT_ram_3008a500 = '\0';
        goto LAB_ram_4008ad76;
      }
      iVar4 = (**(code **)(iVar4 + 4))(&DAT_ram_30089c68);
      if (iVar4 == 1) {
        if ((_DAT_ram_30089c68 != 0x53415442) || (_DAT_ram_30089c6c != 4)) goto LAB_ram_4008ad58;
      }
      else {
        if (iVar4 != 2) goto LAB_ram_4008ad58;
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
        iVar4 = FUN_ram_4009048c();
        if ((((_DAT_ram_30089c68 != 0x53415442) || (_DAT_ram_30089c6c != 4)) ||
            (puVar3 = (undefined4 *)FUN_ram_4009048c(), puVar3 == (undefined4 *)0x0)) ||
           ((((code *)*puVar3 == (code *)0x0 || (iVar6 = (*(code *)*puVar3)(), iVar6 == 0)) ||
            ((iVar4 == 0 ||
             ((*(code **)(iVar4 + 8) == (code *)0x0 ||
              (iVar4 = (**(code **)(iVar4 + 8))(&DAT_ram_30089c68), iVar4 == 0))))))))
        goto LAB_ram_4008ad76;
      }
      DAT_ram_3008a500 = '\x01';
    }
    iVar4 = uVar2 * 0x20;
    iVar7 = *(int *)(&DAT_ram_3008a140 + iVar4);
    uStack_44 = *(uint *)(iVar4 + 0x3008a14c);
    iVar6 = *(int *)(&DAT_ram_3008a144 + iVar4);
    uStack_40 = *(undefined4 *)(iVar4 + 0x3008a150);
    uStack_3c = *(undefined4 *)(iVar4 + 0x3008a154);
    uStack_38 = *(undefined4 *)(iVar4 + 0x3008a158);
    uStack_34 = *(undefined4 *)(iVar4 + 0x3008a15c);
    sVar9 = 0;
    if (((((*(uint *)(&DAT_ram_3008a148 + iVar4) & 1) != 0) && (sVar9 = 0, iVar7 - 1U < 0x1000)) &&
        (iVar6 - 1U < 0xfffffffe)) && (sVar9 = 1, (uStack_44 & 0xff) == 0)) {
      FUN_ram_400055ea(&uStack_44,0x10,s__02u_Slot_ram_40099378,uVar2 + 1);
    }
    DAT_ram_3008a54e = (_DAT_ram_30089c70 & 0xff) < 0x1e && uVar2 == _DAT_ram_30089c70;
    _DAT_ram_3008a54c = (ushort)bVar1 | sVar9 << 8;
    DAT_ram_3008a557 = (undefined1)uStack_34;
    DAT_ram_3008a558 = uStack_34._1_1_;
    DAT_ram_3008a559 = uStack_34._2_1_;
    _DAT_ram_3008a55a = (undefined2)uStack_44;
    DAT_ram_3008a54f = (undefined1)iVar7;
    _DAT_ram_3008a55c = uStack_44._2_2_;
    DAT_ram_3008a550 = (undefined1)((uint)iVar7 >> 8);
    DAT_ram_3008a551 = (undefined1)((uint)iVar7 >> 0x10);
    _DAT_ram_3008a55e = (undefined2)uStack_40;
    DAT_ram_3008a552 = (undefined1)((uint)iVar7 >> 0x18);
    DAT_ram_3008a553 = (undefined1)iVar6;
    _DAT_ram_3008a560 = uStack_40._2_2_;
    DAT_ram_3008a554 = (undefined1)((uint)iVar6 >> 8);
    DAT_ram_3008a555 = (undefined1)((uint)iVar6 >> 0x10);
    _DAT_ram_3008a562 = (undefined2)uStack_3c;
    DAT_ram_3008a556 = (undefined1)((uint)iVar6 >> 0x18);
    _DAT_ram_3008a564 = uStack_3c._2_2_;
    _DAT_ram_3008a566 = (undefined2)uStack_38;
    _DAT_ram_3008a568 = uStack_38._2_2_;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = &DAT_ram_3008a54c;
      param_4[1] = 0x1e;
    }
    *param_5 = 0;
  }
joined_r0x4008ad80:
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
  }
  return 1;
}


/* NanoCore 1.10, address 0x4008ba94.
 * REA evidence: ev_c92a37dfda38207b606888a04e82e0f86d1b922942b832405d8436a52ae976ae
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
nc_handle_opcode_55(undefined4 param_1,byte *param_2,int param_3,undefined4 param_4,
                   undefined1 *param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  int *piVar8;
  
  if (param_5 == (undefined1 *)0x0) {
    return 0;
  }
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    *param_5 = 1;
    return 1;
  }
  if (_DAT_ram_3008a534 == 0) {
    iVar3 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar3 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_4008bae6;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_4008bae6;
  }
  else {
LAB_ram_4008bae6:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
  }
  if ((((DAT_ram_30086c54 == '\0') &&
       (puVar2 = (undefined4 *)FUN_ram_4009048c(), puVar2 != (undefined4 *)0x0)) &&
      ((code *)*puVar2 != (code *)0x0)) && (iVar3 = (*(code *)*puVar2)(), iVar3 != 0)) {
    bVar1 = *param_2;
    if (0x1d < bVar1) {
      *param_5 = 3;
      goto LAB_ram_4008bb04;
    }
    if (((DAT_ram_3008a500 == '\0') || (_DAT_ram_30089c68 != 0x53415442)) ||
       (_DAT_ram_30089c6c != 4)) {
      memset(&DAT_ram_30089c68,0xff,0x898);
      iVar3 = FUN_ram_4009048c();
      puVar2 = (undefined4 *)FUN_ram_4009048c();
      if (((puVar2 == (undefined4 *)0x0) || ((code *)*puVar2 == (code *)0x0)) ||
         ((iVar5 = (*(code *)*puVar2)(), iVar5 == 0 ||
          ((iVar3 == 0 || (*(code **)(iVar3 + 4) == (code *)0x0)))))) {
LAB_ram_4008bdf8:
        memset(&DAT_ram_30089c68,0xff,0x898);
        DAT_ram_3008a500 = '\0';
        goto LAB_ram_4008bafe;
      }
      iVar3 = (**(code **)(iVar3 + 4))(&DAT_ram_30089c68);
      if (iVar3 == 1) {
        if ((_DAT_ram_30089c68 != 0x53415442) || (_DAT_ram_30089c6c != 4)) goto LAB_ram_4008bdf8;
      }
      else {
        if (iVar3 != 2) goto LAB_ram_4008bdf8;
        memset(&DAT_ram_30089c68,0xff,0x898);
        _DAT_ram_30089c68 = 0x53415442;
        _DAT_ram_30089c6c = 4;
        _DAT_ram_30089c72 = 0;
        pvVar4 = (void *)0x30089c8c;
        do {
          *(undefined2 *)((int)pvVar4 + -4) = 0;
          *(undefined4 *)((int)pvVar4 + -0xc) = 0;
          *(undefined4 *)((int)pvVar4 + -8) = 0;
          pvVar6 = memset(pvVar4,0,0x10);
          pvVar4 = (void *)((int)pvVar6 + 0x20);
          *(undefined4 *)((int)pvVar6 + 0x10) = DAT_ram_400993a8;
        } while (pvVar4 != (void *)0x3008a14c);
        pvVar4 = (void *)0x3008a14c;
        do {
          *(undefined2 *)((int)pvVar4 + -4) = 0;
          *(undefined4 *)((int)pvVar4 + -0xc) = 0;
          *(undefined4 *)((int)pvVar4 + -8) = 0;
          pvVar6 = memset(pvVar4,0,0x10);
          pvVar4 = (void *)((int)pvVar6 + 0x20);
          *(undefined4 *)((int)pvVar6 + 0x10) = DAT_ram_400993a8;
        } while (pvVar4 != (void *)0x3008a50c);
        iVar3 = FUN_ram_4009048c();
        if ((((_DAT_ram_30089c68 != 0x53415442) || (_DAT_ram_30089c6c != 4)) ||
            (puVar2 = (undefined4 *)FUN_ram_4009048c(), puVar2 == (undefined4 *)0x0)) ||
           ((((code *)*puVar2 == (code *)0x0 || (iVar5 = (*(code *)*puVar2)(), iVar5 == 0)) ||
            ((iVar3 == 0 ||
             ((*(code **)(iVar3 + 8) == (code *)0x0 ||
              (iVar3 = (**(code **)(iVar3 + 8))(&DAT_ram_30089c68), iVar3 == 0))))))))
        goto LAB_ram_4008bafe;
      }
      DAT_ram_3008a500 = '\x01';
    }
    if ((_DAT_ram_3008a504 != (int *)0x0) ||
       (_DAT_ram_3008a504 = (int *)FUN_ram_4002c39e(0x898), _DAT_ram_3008a504 != (int *)0x0)) {
      piVar8 = _DAT_ram_3008a504;
      FUN_ram_4000305c(_DAT_ram_3008a504,&DAT_ram_30089c68,0x898);
      pvVar4 = memset(piVar8 + (uint)bVar1 * 8 + 0x139,0,0x10);
      if (param_3 != 1) {
        uVar7 = param_3 - 1;
        if (0xf < uVar7) {
          uVar7 = 0xf;
        }
        FUN_ram_4000305c(pvVar4,param_2 + 1,uVar7);
      }
      iVar3 = FUN_ram_4009048c();
      if ((((*piVar8 == 0x53415442) && ((short)piVar8[1] == 4)) &&
          (puVar2 = (undefined4 *)FUN_ram_4009048c(), puVar2 != (undefined4 *)0x0)) &&
         ((((code *)*puVar2 != (code *)0x0 && (iVar5 = (*(code *)*puVar2)(), iVar5 != 0)) &&
          ((iVar3 != 0 &&
           ((*(code **)(iVar3 + 8) != (code *)0x0 &&
            (iVar3 = (**(code **)(iVar3 + 8))(piVar8), iVar3 != 0)))))))) {
        DAT_ram_3008a500 = '\x01';
        FUN_ram_4000305c(&DAT_ram_30089c68,_DAT_ram_3008a504,0x898);
        piVar8 = (int *)(gp + -8);
        if (*piVar8 == -1) {
          *piVar8 = 1;
          *param_5 = 0;
        }
        else {
          iVar3 = *piVar8;
          *param_5 = 0;
          *piVar8 = iVar3 + 1;
        }
        goto LAB_ram_4008bb04;
      }
    }
  }
LAB_ram_4008bafe:
  *param_5 = 4;
LAB_ram_4008bb04:
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
  }
  return 1;
}


