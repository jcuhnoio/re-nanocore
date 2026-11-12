/* NanoCore 1.10 analysis module: protocol/amp_commands.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x400876b6.
 * REA evidence: ev_1031761e74e833234ae88e7e325c60ddca2f921f46cf141440e4441438387cef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
nc_handle_opcode_37(undefined4 param_1,byte *param_2,int param_3,undefined4 param_4,
                   undefined1 *param_5)

{
  int iVar1;
  
  if (param_5 == (undefined1 *)0x0) {
    return 0;
  }
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    if (0x25 < *param_2) {
      *param_5 = 3;
      return 1;
    }
    iVar1 = FUN_ram_4001955c();
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


/* NanoCore 1.10, address 0x40087844.
 * REA evidence: ev_b4257fed4c7a57830d08cd5f88a996fd1ddb08c2581b37614114f53ccce3ba99
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
nc_handle_opcode_3a(undefined4 param_1,uint3 *param_2,uint param_3,undefined4 param_4,
                   undefined1 *param_5)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint3 *puVar6;
  
  if (param_5 == (undefined1 *)0x0) {
    return 0;
  }
  if ((param_2 == (uint3 *)0x0) || (param_3 < 5)) goto LAB_ram_40087864;
  cVar1 = *(char *)((int)param_2 + 3);
  puVar6 = param_2 + 1;
  param_3 = param_3 - 4;
  uVar4 = (uint)*param_2;
  if ((DAT_ram_30086c34 != '\0') && (DAT_ram_30086c36 == cVar1)) {
    if (DAT_ram_30086c35 != '\0') {
      if (~param_3 < uVar4) goto LAB_ram_40087864;
LAB_ram_40087a12:
      if (((uVar4 == _DAT_ram_30086c3c) && (uVar5 = param_3 + uVar4, uVar5 <= _DAT_ram_30086c38)) &&
         (uVar5 < 0x303d)) {
        FUN_ram_4000305c(&DAT_ram_30083bf8 + uVar4,puVar6,param_3);
        _DAT_ram_30086c3c = uVar5;
        *param_5 = 0;
        return 1;
      }
LAB_ram_40087864:
      *param_5 = 1;
      return 1;
    }
    if ((uVar4 == 0 && _DAT_ram_30086c3c == 0) && (0x1b < param_3)) {
      if (*(int *)(param_2 + 1) == 0x46504153) {
        DAT_ram_30086c35 = '\x01';
        FUN_ram_40087a78();
        if (DAT_ram_30086c35 != '\0') goto LAB_ram_40087a12;
      }
      else {
        DAT_ram_30086c34 = '\0';
      }
    }
  }
  if ((DAT_ram_30089c58 == '\0') || (DAT_ram_30089c5a != cVar1)) {
    *param_5 = 2;
    return 1;
  }
  if (_DAT_ram_3008a534 == 0) {
    iVar3 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar3 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_400878dc;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_400878dc;
    if ((DAT_ram_30089c58 != '\0') && (DAT_ram_30089c59 != '\0')) goto LAB_ram_400878fa;
  }
  else {
LAB_ram_400878dc:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
    if ((DAT_ram_30089c58 != '\0') && (DAT_ram_30089c59 != '\0')) {
LAB_ram_400878fa:
      cVar1 = DAT_ram_30089c5a;
      if (uVar4 == _DAT_ram_30089c60) {
        if ((_DAT_ram_30089c5c < param_3 + uVar4) || (0x3000 < param_3 + uVar4)) {
          uVar2 = 3;
        }
        else {
          iVar3 = FUN_ram_4009048c();
          if (((iVar3 == 0) || (*(code **)(iVar3 + 0x1c) == (code *)0x0)) ||
             (uVar4 = (**(code **)(iVar3 + 0x1c))(0,cVar1,uVar4,puVar6,param_3), param_3 != uVar4))
          goto LAB_ram_40087a4e;
          _DAT_ram_30089c60 = param_3 + _DAT_ram_30089c60;
          _DAT_ram_30089c64 = FUN_ram_4000755e(_DAT_ram_30089c64,puVar6,param_3);
          uVar2 = 0;
        }
        if (_DAT_ram_3008a534 != 0) {
          FUN_ram_40004ac8(0x3008a508);
        }
        goto LAB_ram_40087958;
      }
    }
LAB_ram_40087a4e:
    if (_DAT_ram_3008a534 != 0) {
      FUN_ram_40004ac8(0x3008a508);
      uVar2 = 4;
      goto LAB_ram_40087958;
    }
  }
  uVar2 = 4;
LAB_ram_40087958:
  *param_5 = uVar2;
  return 1;
}


/* NanoCore 1.10, address 0x40087c44.
 * REA evidence: ev_65dee4175c38e4f7f22031ee16ec786948aba3b4ebcc1a4f95225d00de1af99c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 nc_handle_opcode_38(void)

{
  int iVar1;
  undefined4 *in_a3;
  undefined1 *in_a4;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (in_a4 == (undefined1 *)0x0) {
    return 0;
  }
  if (_DAT_ram_3008a534 == 0) {
    iVar1 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar1 == 0) {
      _DAT_ram_3008a534 = 1;
    }
    else if (_DAT_ram_3008a534 == 0) goto LAB_ram_40087c7a;
  }
  FUN_ram_400049d6(0x3008a508,0xffffffff);
LAB_ram_40087c7a:
  puVar2 = &DAT_ram_30086c34;
  if ((DAT_ram_30086c34 == '\0') && (puVar2 = &DAT_ram_30089c58, DAT_ram_30089c58 == '\0')) {
    uVar3 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = *(uint *)(puVar2 + 8);
    uVar4 = uVar3 & 0xff;
    uVar6 = (uVar3 & 0xffff) >> 8;
    uVar5 = (uVar3 & 0xffffff) >> 0x10;
    uVar3 = uVar3 >> 0x18;
  }
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
  }
  _DAT_ram_3008a63c = uVar4 | uVar6 << 8 | uVar5 << 0x10 | uVar3 << 0x18;
  if (in_a3 != (undefined4 *)0x0) {
    *in_a3 = &DAT_ram_3008a63c;
    in_a3[1] = 4;
  }
  *in_a4 = 0;
  return 1;
}


/* NanoCore 1.10, address 0x4008a640.
 * REA evidence: ev_a6295460a231a9a319a8feb7975a0e9436945c3bbf0409960e07511c54e12fdc
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
nc_handle_amp_read_chunk
          (undefined4 param_1,byte *param_2,uint param_3,undefined4 *param_4,undefined1 *param_5)

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
      goto LAB_ram_4008a69a;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_4008a69a;
  }
  else {
LAB_ram_4008a69a:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
  }
  uVar8 = (uint)*param_2;
  if (0x25 < uVar8) goto LAB_ram_4008a7c4;
  puVar1 = (undefined4 *)FUN_ram_4009048c();
  if (((puVar1 != (undefined4 *)0x0) && ((code *)*puVar1 != (code *)0x0)) &&
     (iVar2 = (*(code *)*puVar1)(), iVar2 != 0)) {
    if (((DAT_ram_3008a500 != '\0') && (_DAT_ram_30089c68 == 0x53415442)) &&
       (_DAT_ram_30089c6c == 4)) {
LAB_ram_4008a6f8:
      iVar2 = uVar8 * 0x20;
      if ((((*(ushort *)(&DAT_ram_30089c88 + iVar2) & 1) != 0) &&
          (uVar6 = *(uint *)(&DAT_ram_30089c80 + iVar2), uVar6 - 1 < 0x3000)) &&
         (*(int *)(&DAT_ram_30089c84 + iVar2) - 1U < 0xfffffffe)) {
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
            if (uVar5 != 0) goto LAB_ram_4008a9ce;
          }
          else {
            _DAT_ram_3008a56c =
                 uVar8 | (uVar9 & 0xff) << 8 | (uint)param_2[2] << 0x10 | uVar6 << 0x18;
LAB_ram_4008a9ce:
            iVar2 = FUN_ram_4009048c();
            if (((iVar2 == 0) || (*(code **)(iVar2 + 0x20) == (code *)0x0)) ||
               (uVar8 = (**(code **)(iVar2 + 0x20))(0,uVar8,uVar9,0x3008a571,uVar5), uVar6 = uVar5,
               uVar5 != uVar8)) goto LAB_ram_4008a96e;
          }
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = &DAT_ram_3008a56c;
            param_4[1] = uVar6 + 5;
          }
          *param_5 = 0;
          goto LAB_ram_4008a7ca;
        }
      }
LAB_ram_4008a7c4:
      *param_5 = 3;
      goto LAB_ram_4008a7ca;
    }
    memset(&DAT_ram_30089c68,0xff,0x898);
    iVar2 = FUN_ram_4009048c();
    puVar1 = (undefined4 *)FUN_ram_4009048c();
    if (((puVar1 != (undefined4 *)0x0) && ((code *)*puVar1 != (code *)0x0)) &&
       ((iVar3 = (*(code *)*puVar1)(), iVar3 != 0 &&
        ((iVar2 != 0 && (*(code **)(iVar2 + 4) != (code *)0x0)))))) {
      iVar2 = (**(code **)(iVar2 + 4))(&DAT_ram_30089c68);
      if (iVar2 == 1) {
        if ((_DAT_ram_30089c68 == 0x53415442) && (_DAT_ram_30089c6c == 4)) goto LAB_ram_4008a926;
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
        goto LAB_ram_4008a96e;
LAB_ram_4008a926:
        DAT_ram_3008a500 = '\x01';
        goto LAB_ram_4008a6f8;
      }
    }
    memset(&DAT_ram_30089c68,0xff,0x898);
    DAT_ram_3008a500 = '\0';
  }
LAB_ram_4008a96e:
  *param_5 = 4;
LAB_ram_4008a7ca:
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
  }
  return 1;
}


/* NanoCore 1.10, address 0x4008addc.
 * REA evidence: ev_1dfcf981620925a1619d1ee76fe3495cc8e412d128812d93dfc47f4f0ee40d23
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
nc_handle_amp_slot_info
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
      goto LAB_ram_4008ae18;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_4008ae18;
  }
  else {
LAB_ram_4008ae18:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
  }
  bVar1 = *param_2;
  uVar2 = (uint)bVar1;
  if (0x25 < uVar2) {
    *param_5 = 3;
    goto joined_r0x4008b16c;
  }
  puVar3 = (undefined4 *)FUN_ram_4009048c();
  if (((puVar3 == (undefined4 *)0x0) || ((code *)*puVar3 == (code *)0x0)) ||
     (iVar4 = (*(code *)*puVar3)(), iVar4 == 0)) {
LAB_ram_4008b162:
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
LAB_ram_4008b144:
        memset(&DAT_ram_30089c68,0xff,0x898);
        DAT_ram_3008a500 = '\0';
        goto LAB_ram_4008b162;
      }
      iVar4 = (**(code **)(iVar4 + 4))(&DAT_ram_30089c68);
      if (iVar4 == 1) {
        if ((_DAT_ram_30089c68 != 0x53415442) || (_DAT_ram_30089c6c != 4)) goto LAB_ram_4008b144;
      }
      else {
        if (iVar4 != 2) goto LAB_ram_4008b144;
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
        goto LAB_ram_4008b162;
      }
      DAT_ram_3008a500 = '\x01';
    }
    iVar4 = uVar2 * 0x20;
    iVar7 = *(int *)(&DAT_ram_30089c80 + iVar4);
    uStack_44 = *(uint *)(iVar4 + 0x30089c8c);
    iVar6 = *(int *)(&DAT_ram_30089c84 + iVar4);
    uStack_40 = *(undefined4 *)(iVar4 + 0x30089c90);
    uStack_3c = *(undefined4 *)(iVar4 + 0x30089c94);
    uStack_38 = *(undefined4 *)(iVar4 + 0x30089c98);
    uStack_34 = *(undefined4 *)(iVar4 + 0x30089c9c);
    sVar9 = 0;
    if (((((*(uint *)(&DAT_ram_30089c88 + iVar4) & 1) != 0) && (sVar9 = 0, iVar7 - 1U < 0x3000)) &&
        (iVar6 - 1U < 0xfffffffe)) && (sVar9 = 1, (uStack_44 & 0xff) == 0)) {
      FUN_ram_400055ea(&uStack_44,0x10,s__02u_Slot_ram_40099378,uVar2 + 1);
    }
    DAT_ram_3008a54e = (_DAT_ram_30089c6e & 0xff) < 0x26 && uVar2 == _DAT_ram_30089c6e;
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
joined_r0x4008b16c:
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
  }
  return 1;
}


/* NanoCore 1.10, address 0x4008b6ec.
 * REA evidence: ev_55226348a4b89423582234a09aa691dc2f487833bc2116f8729766e048356692
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
nc_handle_opcode_35(undefined4 param_1,byte *param_2,int param_3,undefined4 param_4,
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
      goto LAB_ram_4008b73e;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_4008b73e;
  }
  else {
LAB_ram_4008b73e:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
  }
  if ((((DAT_ram_30086c54 == '\0') &&
       (puVar2 = (undefined4 *)FUN_ram_4009048c(), puVar2 != (undefined4 *)0x0)) &&
      ((code *)*puVar2 != (code *)0x0)) && (iVar3 = (*(code *)*puVar2)(), iVar3 != 0)) {
    bVar1 = *param_2;
    if (0x25 < bVar1) {
      *param_5 = 3;
      goto LAB_ram_4008b75c;
    }
    if (((DAT_ram_3008a500 == '\0') || (_DAT_ram_30089c68 != 0x53415442)) ||
       (_DAT_ram_30089c6c != 4)) {
      memset(&DAT_ram_30089c68,0xff,0x898);
      iVar3 = FUN_ram_4009048c();
      puVar2 = (undefined4 *)FUN_ram_4009048c();
      if (((puVar2 == (undefined4 *)0x0) || ((code *)*puVar2 == (code *)0x0)) ||
         ((iVar5 = (*(code *)*puVar2)(), iVar5 == 0 ||
          ((iVar3 == 0 || (*(code **)(iVar3 + 4) == (code *)0x0)))))) {
LAB_ram_4008ba54:
        memset(&DAT_ram_30089c68,0xff,0x898);
        DAT_ram_3008a500 = '\0';
        goto LAB_ram_4008b756;
      }
      iVar3 = (**(code **)(iVar3 + 4))(&DAT_ram_30089c68);
      if (iVar3 == 1) {
        if ((_DAT_ram_30089c68 != 0x53415442) || (_DAT_ram_30089c6c != 4)) goto LAB_ram_4008ba54;
      }
      else {
        if (iVar3 != 2) goto LAB_ram_4008ba54;
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
        goto LAB_ram_4008b756;
      }
      DAT_ram_3008a500 = '\x01';
    }
    if ((_DAT_ram_3008a504 != (int *)0x0) ||
       (_DAT_ram_3008a504 = (int *)FUN_ram_4002c39e(0x898), _DAT_ram_3008a504 != (int *)0x0)) {
      piVar8 = _DAT_ram_3008a504;
      FUN_ram_4000305c(_DAT_ram_3008a504,&DAT_ram_30089c68,0x898);
      pvVar4 = memset(piVar8 + (uint)bVar1 * 8 + 9,0,0x10);
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
        piVar8 = (int *)(gp + -0xc);
        if (*piVar8 == -1) {
          *piVar8 = 1;
          *param_5 = 0;
        }
        else {
          iVar3 = *piVar8;
          *param_5 = 0;
          *piVar8 = iVar3 + 1;
        }
        goto LAB_ram_4008b75c;
      }
    }
  }
LAB_ram_4008b756:
  *param_5 = 4;
LAB_ram_4008b75c:
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
  }
  return 1;
}


/* NanoCore 1.10, address 0x4008d91c.
 * REA evidence: ev_27d6c6c455fc5d8e7eb9e53eb69607ff1038eb2077194e58307cf6dea1aa7a33
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
nc_handle_opcode_3b(undefined4 param_1,char *param_2,int param_3,undefined4 *param_4,char *param_5)

{
  int iVar1;
  
  if (param_5 == (char *)0x0) {
    return 0;
  }
  if ((param_2 != (char *)0x0) && (param_3 == 4)) {
    if ((((*param_2 == DAT_ram_400993dc) && (param_2[1] == DAT_ram_400993dd)) &&
        (param_2[2] == DAT_ram_400993de)) && (param_2[3] == DAT_ram_400993df)) {
      iVar1 = FUN_ram_4008d5e8();
      if (iVar1 != 0) {
        *param_5 = (iVar1 != -2) + '\x03';
        return 1;
      }
      *param_5 = '\0';
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = &DAT_ram_400993dc;
        param_4[1] = 4;
      }
    }
    else {
      *param_5 = '\x01';
    }
    return 1;
  }
  *param_5 = '\x01';
  return 1;
}


