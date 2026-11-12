/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4008e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4008e11c.
 * REA evidence: ev_8e4c3c3d6f87b01b6ab20525d4958fe079c860a24b35d4c2e3791d5334ed3031
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008e11c(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  uint *puVar10;
  
  if (_DAT_ram_3008a534 == 0) {
    iVar3 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar3 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_4008e14e;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_4008e14e;
    if (param_1 == 0) {
      return 0xffffffff;
    }
LAB_ram_4008e160:
    if ((((param_3 != (undefined4 *)0x0) &&
         (puVar2 = (undefined4 *)FUN_ram_4009048c(), puVar2 != (undefined4 *)0x0)) &&
        ((code *)*puVar2 != (code *)0x0)) && (iVar3 = (*(code *)*puVar2)(), iVar3 != 0)) {
      if (((DAT_ram_3008a500 == '\0') || (_DAT_ram_30089c68 != 0x53415442)) ||
         (_DAT_ram_30089c6c != 4)) {
        memset(&DAT_ram_30089c68,0xff,0x898);
        iVar3 = FUN_ram_4009048c();
        puVar2 = (undefined4 *)FUN_ram_4009048c();
        if (((puVar2 != (undefined4 *)0x0) && ((code *)*puVar2 != (code *)0x0)) &&
           ((iVar4 = (*(code *)*puVar2)(), iVar4 != 0 &&
            ((iVar3 != 0 && (*(code **)(iVar3 + 4) != (code *)0x0)))))) {
          iVar3 = (**(code **)(iVar3 + 4))(&DAT_ram_30089c68);
          if (iVar3 == 1) {
            if ((_DAT_ram_30089c68 == 0x53415442) && (_DAT_ram_30089c6c == 4)) {
LAB_ram_4008e4e0:
              uVar9 = (uint)DAT_ram_30089c70;
              DAT_ram_3008a500 = '\x01';
              if (uVar9 < 0x1e) {
                if (_DAT_ram_30089c68 == 0x53415442) goto LAB_ram_4008e398;
                goto LAB_ram_4008e3a2;
              }
              goto LAB_ram_4008e5b6;
            }
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
            if ((((_DAT_ram_30089c68 == 0x53415442) && (_DAT_ram_30089c6c == 4)) &&
                (puVar2 = (undefined4 *)FUN_ram_4009048c(), puVar2 != (undefined4 *)0x0)) &&
               ((((code *)*puVar2 != (code *)0x0 && (iVar4 = (*(code *)*puVar2)(), iVar4 != 0)) &&
                ((iVar3 != 0 &&
                 ((*(code **)(iVar3 + 8) != (code *)0x0 &&
                  (iVar3 = (**(code **)(iVar3 + 8))(&DAT_ram_30089c68), iVar3 != 0))))))))
            goto LAB_ram_4008e4e0;
            goto LAB_ram_4008e2e4;
          }
        }
        memset(&DAT_ram_30089c68,0xff,0x898);
        uVar1 = 0xfffffffe;
        DAT_ram_3008a500 = '\0';
      }
      else {
        uVar9 = (uint)DAT_ram_30089c70;
        if (uVar9 < 0x1e) {
LAB_ram_4008e398:
          if (_DAT_ram_30089c6c == 4) {
LAB_ram_4008e524:
            iVar3 = uVar9 * 0x20;
            if (((((*(ushort *)(&DAT_ram_3008a148 + iVar3) & 1) != 0) &&
                 (uVar7 = *(uint *)(&DAT_ram_3008a140 + iVar3), uVar7 - 1 < 0x1000)) &&
                (*(int *)(&DAT_ram_3008a144 + iVar3) - 1U < 0xfffffffe)) && (uVar7 <= param_2)) {
              iVar4 = FUN_ram_4009048c();
              if ((iVar4 == 0) || (*(code **)(iVar4 + 0x20) == (code *)0x0)) {
                iVar4 = -1;
              }
              else {
                iVar4 = (**(code **)(iVar4 + 0x20))(1,uVar9,0,param_1,uVar7);
              }
              if ((*(int *)(&DAT_ram_3008a140 + iVar3) == iVar4) &&
                 (iVar4 = FUN_ram_4000755e(0,param_1,iVar4),
                 iVar4 == *(int *)(&DAT_ram_3008a144 + iVar3))) {
                uVar1 = 0;
                *param_3 = *(undefined4 *)(&DAT_ram_3008a140 + iVar3);
                goto joined_r0x4008e2ea;
              }
            }
          }
          else {
LAB_ram_4008e3a2:
            memset(&DAT_ram_30089c68,0xff,0x898);
            iVar3 = FUN_ram_4009048c();
            puVar2 = (undefined4 *)FUN_ram_4009048c();
            if ((((puVar2 != (undefined4 *)0x0) && ((code *)*puVar2 != (code *)0x0)) &&
                (iVar4 = (*(code *)*puVar2)(), iVar4 != 0)) &&
               ((iVar3 != 0 && (*(code **)(iVar3 + 4) != (code *)0x0)))) {
              iVar3 = (**(code **)(iVar3 + 4))(&DAT_ram_30089c68);
              if (iVar3 == 1) {
                if ((_DAT_ram_30089c68 == 0x53415442) && (_DAT_ram_30089c6c == 4))
                goto LAB_ram_4008e51e;
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
                if ((((((_DAT_ram_30089c68 != 0x53415442) || (_DAT_ram_30089c6c != 4)) ||
                      (puVar2 = (undefined4 *)FUN_ram_4009048c(), puVar2 == (undefined4 *)0x0)) ||
                     (((code *)*puVar2 == (code *)0x0 || (iVar4 = (*(code *)*puVar2)(), iVar4 == 0))
                     )) || (iVar3 == 0)) ||
                   ((*(code **)(iVar3 + 8) == (code *)0x0 ||
                    (iVar3 = (**(code **)(iVar3 + 8))(&DAT_ram_30089c68), iVar3 == 0))))
                goto LAB_ram_4008e5b6;
LAB_ram_4008e51e:
                DAT_ram_3008a500 = '\x01';
                goto LAB_ram_4008e524;
              }
            }
            memset(&DAT_ram_30089c68,0xff,0x898);
            DAT_ram_3008a500 = '\0';
          }
        }
LAB_ram_4008e5b6:
        puVar10 = (uint *)&DAT_ram_3008a140;
        uVar9 = 0;
        do {
          if (((DAT_ram_3008a500 == '\0') || (_DAT_ram_30089c68 != 0x53415442)) ||
             (_DAT_ram_30089c6c != 4)) {
            memset(&DAT_ram_30089c68,0xff,0x898);
            iVar3 = FUN_ram_4009048c();
            puVar2 = (undefined4 *)FUN_ram_4009048c();
            if (((puVar2 != (undefined4 *)0x0) && ((code *)*puVar2 != (code *)0x0)) &&
               ((iVar4 = (*(code *)*puVar2)(), iVar4 != 0 &&
                ((iVar3 != 0 && (*(code **)(iVar3 + 4) != (code *)0x0)))))) {
              iVar3 = (**(code **)(iVar3 + 4))(&DAT_ram_30089c68);
              if (iVar3 == 1) {
                if ((_DAT_ram_30089c68 == 0x53415442) && (_DAT_ram_30089c6c == 4)) {
LAB_ram_4008e732:
                  DAT_ram_3008a500 = '\x01';
                  goto LAB_ram_4008e738;
                }
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
                if (((((_DAT_ram_30089c68 == 0x53415442) && (_DAT_ram_30089c6c == 4)) &&
                     (puVar2 = (undefined4 *)FUN_ram_4009048c(), puVar2 != (undefined4 *)0x0)) &&
                    (((code *)*puVar2 != (code *)0x0 && (iVar4 = (*(code *)*puVar2)(), iVar4 != 0)))
                    ) && ((iVar3 != 0 &&
                          ((*(code **)(iVar3 + 8) != (code *)0x0 &&
                           (iVar3 = (**(code **)(iVar3 + 8))(&DAT_ram_30089c68), iVar3 != 0))))))
                goto LAB_ram_4008e732;
                goto LAB_ram_4008e70c;
              }
            }
            memset(&DAT_ram_30089c68,0xff,0x898);
            DAT_ram_3008a500 = '\0';
          }
          else {
LAB_ram_4008e738:
            if (((((puVar10[2] & 1) != 0) && (uVar7 = *puVar10, uVar7 - 1 < 0x1000)) &&
                (puVar10[1] - 1 < 0xfffffffe)) && (uVar7 <= param_2)) {
              iVar3 = FUN_ram_4009048c();
              if ((iVar3 == 0) || (*(code **)(iVar3 + 0x20) == (code *)0x0)) {
                uVar7 = 0xffffffff;
              }
              else {
                uVar7 = (**(code **)(iVar3 + 0x20))(1,uVar9 & 0xff,0,param_1,uVar7);
              }
              if ((*puVar10 == uVar7) &&
                 (uVar7 = FUN_ram_4000755e(0,param_1,uVar7), piVar6 = _DAT_ram_3008a504,
                 uVar7 == puVar10[1])) {
                *param_3 = *(undefined4 *)(&DAT_ram_3008a140 + uVar9 * 0x20);
                if ((piVar6 == (int *)0x0) &&
                   (piVar6 = (int *)FUN_ram_4002c39e(0x898), _DAT_ram_3008a504 = piVar6,
                   piVar6 == (int *)0x0)) {
                  iVar3 = *(int *)(gp + -8);
                }
                else {
                  FUN_ram_4000305c(piVar6,&DAT_ram_30089c68,0x898);
                  *(char *)(piVar6 + 2) = (char)uVar9;
                  *(undefined1 *)((int)piVar6 + 9) = 0;
                  iVar3 = FUN_ram_4009048c();
                  if ((((*piVar6 == 0x53415442) && ((short)piVar6[1] == 4)) &&
                      (puVar2 = (undefined4 *)FUN_ram_4009048c(), puVar2 != (undefined4 *)0x0)) &&
                     (((((code *)*puVar2 != (code *)0x0 &&
                        (iVar4 = (*(code *)*puVar2)(), iVar4 != 0)) && (iVar3 != 0)) &&
                      ((*(code **)(iVar3 + 8) != (code *)0x0 &&
                       (iVar3 = (**(code **)(iVar3 + 8))(piVar6), iVar3 != 0)))))) {
                    DAT_ram_3008a500 = '\x01';
                    FUN_ram_4000305c(&DAT_ram_30089c68,_DAT_ram_3008a504,0x898);
                  }
                  iVar3 = *(int *)(gp + -8);
                }
                if (iVar3 == -1) {
                  *(undefined4 *)(gp + -8) = 1;
                  uVar1 = 0;
                }
                else {
                  uVar1 = 0;
                  *(int *)(gp + -8) = *(int *)(gp + -8) + 1;
                }
                goto joined_r0x4008e2ea;
              }
            }
          }
LAB_ram_4008e70c:
          uVar9 = uVar9 + 1;
          puVar10 = puVar10 + 8;
        } while (uVar9 != 0x1e);
LAB_ram_4008e2e4:
        uVar1 = 0xfffffffe;
      }
      goto joined_r0x4008e2ea;
    }
  }
  else {
LAB_ram_4008e14e:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
    if (param_1 != 0) goto LAB_ram_4008e160;
  }
  uVar1 = 0xffffffff;
joined_r0x4008e2ea:
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4008e8a2.
 * REA evidence: ev_251771d8c57051587478c21e086c789bcf12f46bee4317ffdd8eea6a2d146ad1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4008e8a2(void)

{
  return *(undefined4 *)(gp + -0xc);
}


/* NanoCore 1.10, address 0x4008e8a8.
 * REA evidence: ev_d2b0794bdd4f1ef95df58573e1d78d54e004d2c3a2e002a47e7662eb45611d8c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4008e8a8(void)

{
  return *(undefined4 *)(gp + -8);
}


/* NanoCore 1.10, address 0x4008e8b0.
 * REA evidence: ev_55a22e1d57fabf4de6028daa5fda9b6d0d0c6a115ab87260bfcba71e1ba259bd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008e8b0(uint param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (_DAT_ram_3008a534 == 0) {
    iVar2 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar2 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_4008e8d4;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_4008e8d4;
    if (0x25 < param_1) {
      return 0;
    }
LAB_ram_4008e912:
    if (param_2 != 0) {
      if (((DAT_ram_3008a500 == '\0') || (_DAT_ram_30089c68 != 0x53415442)) ||
         (_DAT_ram_30089c6c != 4)) {
        memset(&DAT_ram_30089c68,0xff,0x898);
        iVar2 = FUN_ram_4009048c();
        puVar3 = (undefined4 *)FUN_ram_4009048c();
        if (((puVar3 != (undefined4 *)0x0) && ((code *)*puVar3 != (code *)0x0)) &&
           ((iVar4 = (*(code *)*puVar3)(), iVar4 != 0 &&
            ((iVar2 != 0 && (*(code **)(iVar2 + 4) != (code *)0x0)))))) {
          iVar2 = (**(code **)(iVar2 + 4))(&DAT_ram_30089c68);
          if (iVar2 == 1) {
            if ((_DAT_ram_30089c68 == 0x53415442) && (_DAT_ram_30089c6c == 4)) {
LAB_ram_4008e9a2:
              DAT_ram_3008a500 = '\x01';
              goto LAB_ram_4008ea06;
            }
          }
          else if (iVar2 == 2) {
            memset(&DAT_ram_30089c68,0xff,0x898);
            _DAT_ram_30089c68 = 0x53415442;
            _DAT_ram_30089c6c = 4;
            _DAT_ram_30089c72 = 0;
            pvVar6 = (void *)0x30089c8c;
            do {
              *(undefined2 *)((int)pvVar6 + -4) = 0;
              *(undefined4 *)((int)pvVar6 + -0xc) = 0;
              *(undefined4 *)((int)pvVar6 + -8) = 0;
              pvVar5 = memset(pvVar6,0,0x10);
              pvVar6 = (void *)((int)pvVar5 + 0x20);
              *(undefined4 *)((int)pvVar5 + 0x10) = DAT_ram_400993a8;
            } while (pvVar6 != (void *)0x3008a14c);
            pvVar6 = (void *)0x3008a14c;
            do {
              *(undefined2 *)((int)pvVar6 + -4) = 0;
              *(undefined4 *)((int)pvVar6 + -0xc) = 0;
              *(undefined4 *)((int)pvVar6 + -8) = 0;
              pvVar5 = memset(pvVar6,0,0x10);
              pvVar6 = (void *)((int)pvVar5 + 0x20);
              *(undefined4 *)((int)pvVar5 + 0x10) = DAT_ram_400993a8;
            } while (pvVar6 != (void *)0x3008a50c);
            iVar2 = FUN_ram_4009048c();
            if (((((_DAT_ram_30089c68 != 0x53415442) || (_DAT_ram_30089c6c != 4)) ||
                 (puVar3 = (undefined4 *)FUN_ram_4009048c(), puVar3 == (undefined4 *)0x0)) ||
                (((code *)*puVar3 == (code *)0x0 || (iVar4 = (*(code *)*puVar3)(), iVar4 == 0)))) ||
               ((iVar2 == 0 ||
                ((*(code **)(iVar2 + 8) == (code *)0x0 ||
                 (iVar2 = (**(code **)(iVar2 + 8))(&DAT_ram_30089c68), iVar2 == 0))))))
            goto LAB_ram_4008e8ea;
            goto LAB_ram_4008e9a2;
          }
        }
        memset(&DAT_ram_30089c68,0xff,0x898);
        uVar1 = 0;
        DAT_ram_3008a500 = '\0';
      }
      else {
LAB_ram_4008ea06:
        FUN_ram_4000305c(param_2,&DAT_ram_30089c80 + param_1 * 0x20,0x20);
        uVar1 = 1;
      }
      goto LAB_ram_4008e8ec;
    }
  }
  else {
LAB_ram_4008e8d4:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
    if (param_1 < 0x26) goto LAB_ram_4008e912;
  }
LAB_ram_4008e8ea:
  uVar1 = 0;
LAB_ram_4008e8ec:
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4008eb1e.
 * REA evidence: ev_13c8fabbaebf9b7c98ea1ac98d0cd9fce8f1efca636e98d3ef906ce4adaccd8e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4008eb1e(void)

{
  nc_register_message_listener(0x30,&PTR_LAB_ram_400894a4_ram_400993c8,0);
  nc_register_opcode_handler(0x35,nc_handle_opcode_35);
  nc_register_opcode_handler(0x36,nc_handle_amp_slot_info);
  nc_register_opcode_handler(0x37,nc_handle_opcode_37);
  nc_register_opcode_handler(0x39,nc_handle_amp_read_chunk);
  nc_register_opcode_handler(0x38,nc_handle_opcode_38);
  nc_register_opcode_handler(0x3a,nc_handle_opcode_3a);
  nc_register_opcode_handler(0x3b,nc_handle_opcode_3b);
  nc_register_message_listener(0x50,&PTR_LAB_ram_40089768_ram_400993b0,0);
  nc_register_opcode_handler(0x55,nc_handle_opcode_55);
  nc_register_opcode_handler(0x56,nc_handle_ir_slot_info);
  nc_register_opcode_handler(0x57,nc_handle_opcode_57);
  nc_register_opcode_handler(0x59,nc_handle_opcode_59);
  nc_register_opcode_handler(0x5a,nc_handle_opcode_5a);
  nc_register_opcode_handler(0x5b,nc_handle_opcode_5b);
  return;
}


/* NanoCore 1.10, address 0x4008ec44.
 * REA evidence: ev_573178ecafb19efb0485318472aa665d241c10dd8ff522f7ce48090a1a6a9f8f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4008ec44(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = _DAT_ram_3008aee4;
  if ((_DAT_ram_3008aee4 != 0) && (param_4 != 0)) {
    if (param_1 == 1) {
      iVar2 = FUN_ram_4008d258(param_2);
    }
    else {
      iVar2 = FUN_ram_4008d24c();
    }
    uVar3 = fal_partition_read(iVar1,param_3 + iVar2,param_4,param_5);
    return uVar3;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4008eca2.
 * REA evidence: ev_24845e86847195a41bf5534904588dec23f9069e8f63c50b87b5121157e94663
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008eca2(int param_1,undefined1 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0x3000;
  if (param_1 == 1) {
    uVar1 = 0x1000;
  }
  if ((((_DAT_ram_3008aee4 != 0) && (DAT_ram_3008aef0 == '\0')) &&
      (_DAT_ram_3008aeec == (void *)0x0)) &&
     (((_DAT_ram_3008aee8 == 0 && (param_3 != 0)) &&
      ((param_3 <= uVar1 &&
       (_DAT_ram_3008aeec = (void *)FUN_ram_4002c39e(param_3), _DAT_ram_3008aeec != (void *)0x0)))))
     ) {
    DAT_ram_3008aef2 = 0;
    DAT_ram_3008aef1 = 0;
    DAT_ram_3008aef0 = 1;
    DAT_ram_3008aef3 = param_2;
    _DAT_ram_3008aef4 = param_1;
    _DAT_ram_3008aef8 = param_3;
    memset(_DAT_ram_3008aeec,0,param_3);
    return 0;
  }
  return 0xffffffff;
}


/* NanoCore 1.10, address 0x4008edb2.
 * REA evidence: ev_66c3061855b445e4d66cfdc699dfad487d9006e3205632c377dcd47f0aaf98c6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4008edb2(int param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  if (((_DAT_ram_3008aee4 == 0) || (param_4 == 0)) || (_DAT_ram_3008aeec == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xffffffff;
    if (((DAT_ram_3008aef0 != '\0') && (param_1 == _DAT_ram_3008aef4)) &&
       ((DAT_ram_3008aef3 == param_2 &&
        ((param_3 <= _DAT_ram_3008aef8 && (param_5 <= _DAT_ram_3008aef8 - param_3)))))) {
      FUN_ram_4000305c(param_3 + _DAT_ram_3008aeec,param_4,param_5);
      uVar1 = param_5;
    }
  }
  return uVar1;
}


/* NanoCore 1.10, address 0x4008ee1c.
 * REA evidence: ev_3f3944bf90fc8fa97e2242ff670dac656a01daa909333fc5e3a78ebde063c174
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4008ee1c(void)

{
  bool bVar1;
  
  bVar1 = true;
  if (_DAT_ram_3008aee4 == 0) {
    _DAT_ram_3008aee4 = fal_partition_find(s_presets_ram_40095444);
    if (_DAT_ram_3008aee4 != 0) {
      return 0xa9fff < *(uint *)(_DAT_ram_3008aee4 + 0x38);
    }
    bVar1 = false;
    _DAT_ram_3008aee4 = 0;
  }
  return bVar1;
}


/* NanoCore 1.10, address 0x4008ee62.
 * REA evidence: ev_31c881d0054c93498d531ed7ea0cd54b314484305e347d92519e4f0b216f350b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008ee62(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_140 [268];
  
  if ((((_DAT_ram_3008aeec != 0) && (_DAT_ram_3008aee8 == 0)) && (DAT_ram_3008aef0 != '\0')) &&
     (((param_1 == _DAT_ram_3008aef4 && (uVar10 = (uint)DAT_ram_3008aef3, uVar10 == param_2)) &&
      ((_DAT_ram_3008aef8 == param_3 &&
       (iVar1 = FUN_ram_4000755e(0,_DAT_ram_3008aeec), iVar1 == param_4)))))) {
    if (param_1 == 1) {
      iVar2 = FUN_ram_4008d258(uVar10);
      iVar1 = 0x1000;
      uVar8 = 0x1000;
    }
    else {
      iVar2 = FUN_ram_4008d24c();
      iVar1 = 0x3000;
      uVar8 = 0x3000;
    }
    _DAT_ram_3008aee8 = FUN_ram_4002c39e(uVar8);
    if (_DAT_ram_3008aee8 != 0) {
      iVar3 = fal_partition_read(_DAT_ram_3008aee4,iVar2,_DAT_ram_3008aee8,uVar8);
      if (iVar3 != iVar1) {
        FUN_ram_4002c3f4(_DAT_ram_3008aee8);
        _DAT_ram_3008aee8 = 0;
        return 0xffffffff;
      }
      DAT_ram_3008aef2 = '\x01';
      DAT_ram_3008aef1 = '\x01';
      iVar1 = FUN_ram_40006ff2(_DAT_ram_3008aee4,iVar2,uVar8);
      if ((-1 < iVar1) &&
         (uVar10 = FUN_ram_40006fa8(_DAT_ram_3008aee4,iVar2,_DAT_ram_3008aeec,param_3),
         iVar1 = _DAT_ram_3008aeec, uVar10 == param_3)) {
        iVar3 = 0;
        if (param_3 != 0) {
          if (_DAT_ram_3008aeec == 0) {
            uVar10 = 0;
            do {
              uVar9 = param_3 - uVar10;
              if (0x100 < uVar9) {
                uVar9 = 0x100;
              }
              uVar4 = fal_partition_read(_DAT_ram_3008aee4,iVar2 + uVar10,auStack_140,uVar9);
              uVar10 = uVar10 + uVar4;
              if (uVar4 != uVar9) goto LAB_ram_4008efe4;
              iVar3 = FUN_ram_4000755e(iVar3,auStack_140);
            } while (uVar10 < param_3);
          }
          else {
            uVar10 = 0;
            do {
              uVar9 = param_3 - uVar10;
              if (0x100 < uVar9) {
                uVar9 = 0x100;
              }
              uVar4 = fal_partition_read(_DAT_ram_3008aee4,uVar10 + iVar2,auStack_140,uVar9);
              iVar6 = iVar1 + uVar10;
              uVar10 = uVar10 + uVar4;
              if ((uVar4 != uVar9) ||
                 (iVar6 = FUN_ram_40002ffc(auStack_140,iVar6,uVar4), iVar6 != 0))
              goto LAB_ram_4008efe4;
              iVar3 = FUN_ram_4000755e(iVar3,auStack_140,uVar4);
            } while (uVar10 < param_3);
          }
        }
        if (param_4 == iVar3) {
          return 0;
        }
      }
LAB_ram_4008efe4:
      if ((((DAT_ram_3008aef0 != '\0') && (DAT_ram_3008aef1 != '\0')) && (DAT_ram_3008aef2 != '\0'))
         && (_DAT_ram_3008aee8 != 0)) {
        if (_DAT_ram_3008aef4 == 1) {
          iVar1 = FUN_ram_4008d258(DAT_ram_3008aef3);
        }
        else {
          iVar1 = FUN_ram_4008d24c();
        }
        uVar10 = 0x3000;
        if (_DAT_ram_3008aef4 == 1) {
          uVar10 = 0x1000;
        }
        iVar2 = FUN_ram_4000755e(0,_DAT_ram_3008aee8,uVar10);
        iVar3 = FUN_ram_40006ff2(_DAT_ram_3008aee4,iVar1,uVar10);
        if ((-1 < iVar3) &&
           (uVar9 = FUN_ram_40006fa8(_DAT_ram_3008aee4,iVar1,_DAT_ram_3008aee8,uVar10),
           iVar3 = _DAT_ram_3008aee8, uVar9 == uVar10)) {
          iVar6 = 0;
          if (_DAT_ram_3008aee8 == 0) {
            uVar9 = 0;
            do {
              uVar4 = uVar10 - uVar9;
              if (0x100 < uVar4) {
                uVar4 = 0x100;
              }
              uVar5 = fal_partition_read(_DAT_ram_3008aee4,iVar1 + uVar9,auStack_140,uVar4);
              uVar9 = uVar9 + uVar4;
              if (uVar4 != uVar5) {
                return 0xffffffff;
              }
              iVar6 = FUN_ram_4000755e(iVar6,auStack_140,uVar4);
            } while (uVar9 < uVar10);
          }
          else {
            uVar9 = 0;
            do {
              uVar4 = uVar10 - uVar9;
              if (0x100 < uVar4) {
                uVar4 = 0x100;
              }
              uVar5 = fal_partition_read(_DAT_ram_3008aee4,iVar1 + uVar9,auStack_140,uVar4);
              iVar7 = iVar3 + uVar9;
              uVar9 = uVar9 + uVar5;
              if (uVar5 != uVar4) {
                return 0xffffffff;
              }
              iVar7 = FUN_ram_40002ffc(auStack_140,iVar7,uVar5);
              if (iVar7 != 0) {
                return 0xffffffff;
              }
              iVar6 = FUN_ram_4000755e(iVar6,auStack_140,uVar5);
            } while (uVar9 < uVar10);
          }
          if (iVar2 == iVar6) {
            DAT_ram_3008aef1 = '\0';
          }
        }
      }
    }
  }
  return 0xffffffff;
}


