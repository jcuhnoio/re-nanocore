/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4008b000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4008b1c8.
 * REA evidence: ev_e55aa36b9932007d24825b76e710796f8b12b610cf455c86eae41abd9555de6b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008b1c8(int param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  int local_40;
  int iStack_3c;
  short sStack_38;
  
  local_40 = 0;
  if (_DAT_ram_3008a534 == 0) {
    iVar3 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar3 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_4008b1fc;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_4008b1fc;
    if (DAT_ram_30089c58 == '\0') {
      return 0xffffffff;
    }
LAB_ram_4008b21a:
    if (((DAT_ram_30089c59 != '\0') && (_DAT_ram_30089c5c == param_1)) &&
       (_DAT_ram_30089c60 == param_1)) {
      if (_DAT_ram_30089c64 != param_2) {
        uVar11 = 0xfffffffe;
        goto joined_r0x4008b644;
      }
      bVar1 = DAT_ram_30089c5a;
      uVar10 = (uint)DAT_ram_30089c5a;
      iVar3 = FUN_ram_40087754(uVar10,param_1,&local_40);
      if ((iVar3 != 0) || (local_40 != param_2)) goto LAB_ram_4008b602;
      if ((uVar10 < 0x26) && (param_1 - 0xcU < 0x2ff5)) {
        iVar3 = FUN_ram_4009048c();
        if (((iVar3 == 0) || (*(code **)(iVar3 + 0x24) == (code *)0x0)) ||
           (iVar3 = (**(code **)(iVar3 + 0x24))(0,uVar10,0,&iStack_3c,0xc), iVar3 != 0xc)) {
          uVar11 = 0xffffffff;
          goto LAB_ram_4008b458;
        }
        if ((iStack_3c != 0x42504444) || (2 < (ushort)(sStack_38 - 1U))) goto LAB_ram_4008b456;
        if (((DAT_ram_3008a500 == '\0') || (_DAT_ram_30089c68 != 0x53415442)) ||
           (_DAT_ram_30089c6c != 4)) {
          memset(&DAT_ram_30089c68,0xff,0x898);
          iVar3 = FUN_ram_4009048c();
          puVar4 = (undefined4 *)FUN_ram_4009048c();
          if (((puVar4 == (undefined4 *)0x0) || ((code *)*puVar4 == (code *)0x0)) ||
             ((iVar5 = (*(code *)*puVar4)(), iVar5 == 0 ||
              ((iVar3 == 0 || (*(code **)(iVar3 + 4) == (code *)0x0)))))) {
LAB_ram_4008b5e4:
            memset(&DAT_ram_30089c68,0xff,0x898);
            DAT_ram_3008a500 = '\0';
            goto LAB_ram_4008b602;
          }
          iVar3 = (**(code **)(iVar3 + 4))(&DAT_ram_30089c68);
          if (iVar3 == 1) {
            if ((_DAT_ram_30089c68 != 0x53415442) || (_DAT_ram_30089c6c != 4))
            goto LAB_ram_4008b5e4;
          }
          else {
            if (iVar3 != 2) goto LAB_ram_4008b5e4;
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
                (((code *)*puVar4 == (code *)0x0 || (iVar5 = (*(code *)*puVar4)(), iVar5 == 0)))) ||
               ((iVar3 == 0 ||
                ((*(code **)(iVar3 + 8) == (code *)0x0 ||
                 (iVar3 = (**(code **)(iVar3 + 8))(&DAT_ram_30089c68), iVar3 == 0))))))
            goto LAB_ram_4008b602;
          }
          DAT_ram_3008a500 = '\x01';
        }
        if ((_DAT_ram_3008a504 == (int *)0x0) &&
           (_DAT_ram_3008a504 = (int *)FUN_ram_4002c39e(0x898), _DAT_ram_3008a504 == (int *)0x0)) {
LAB_ram_4008b602:
          if ((_DAT_ram_30089c58 & 0xff) != 0) {
            uVar2 = DAT_ram_30089c5a;
            iVar3 = FUN_ram_4009048c();
            if ((iVar3 == 0) || (*(code **)(iVar3 + 0x30) == (code *)0x0)) goto LAB_ram_4008b640;
            iVar3 = (**(code **)(iVar3 + 0x30))(0,uVar2);
joined_r0x4008b61c:
            if (iVar3 != 0) goto LAB_ram_4008b640;
          }
          _DAT_ram_30089c58 = 0;
          _DAT_ram_30089c5c = 0;
          _DAT_ram_30089c60 = 0;
          _DAT_ram_30089c64 = 0;
          goto LAB_ram_4008b640;
        }
        FUN_ram_4000305c(_DAT_ram_3008a504,&DAT_ram_30089c68,0x898);
        iVar3 = FUN_ram_4009048c();
        if ((iVar3 == 0) ||
           ((*(code **)(iVar3 + 0x28) == (code *)0x0 ||
            (iVar3 = (**(code **)(iVar3 + 0x28))(0,uVar10,param_1,param_2),
            piVar9 = _DAT_ram_3008a504, iVar3 != 0)))) goto LAB_ram_4008b602;
        iVar3 = uVar10 * 0x20;
        *(char *)((int)_DAT_ram_3008a504 + iVar3 + 0x1f) = (char)((uint)param_2 >> 0x18);
        *(char *)(piVar9 + uVar10 * 8 + 6) = (char)param_1;
        *(char *)((int)piVar9 + iVar3 + 0x19) = (char)((uint)param_1 >> 8);
        *(char *)((int)piVar9 + iVar3 + 0x1a) = (char)((uint)param_1 >> 0x10);
        *(char *)((int)piVar9 + iVar3 + 0x1b) = (char)((uint)param_1 >> 0x18);
        *(char *)(piVar9 + uVar10 * 8 + 7) = (char)param_2;
        *(char *)((int)piVar9 + iVar3 + 0x1d) = (char)((uint)param_2 >> 8);
        *(char *)((int)piVar9 + iVar3 + 0x1e) = (char)((uint)param_2 >> 0x10);
        *(undefined1 *)(piVar9 + uVar10 * 8 + 8) = 1;
        *(undefined1 *)((int)piVar9 + iVar3 + 0x21) = 0;
        if ((param_3 != 0) && (param_4 != 0)) {
          pvVar7 = memset(piVar9 + uVar10 * 8 + 9,0,0x10);
          uVar8 = 0xf;
          if (param_4 < 0x10) {
            uVar8 = param_4;
          }
          FUN_ram_4000305c(pvVar7,param_3,uVar8);
        }
        *(byte *)((int)piVar9 + 6) = bVar1;
        *(undefined1 *)((int)piVar9 + 7) = 0;
        iVar3 = FUN_ram_4009048c();
        if ((((*piVar9 != 0x53415442) || ((short)piVar9[1] != 4)) ||
            (puVar4 = (undefined4 *)FUN_ram_4009048c(), puVar4 == (undefined4 *)0x0)) ||
           ((((code *)*puVar4 == (code *)0x0 || (iVar5 = (*(code *)*puVar4)(), iVar5 == 0)) ||
            ((iVar3 == 0 ||
             ((*(code **)(iVar3 + 8) == (code *)0x0 ||
              (iVar3 = (**(code **)(iVar3 + 8))(piVar9), iVar3 == 0)))))))) {
          iVar3 = FUN_ram_4009048c();
          if ((iVar3 == 0) || (*(code **)(iVar3 + 0x30) == (code *)0x0)) goto LAB_ram_4008b640;
          iVar3 = (**(code **)(iVar3 + 0x30))(0,uVar10);
          goto joined_r0x4008b61c;
        }
        DAT_ram_3008a500 = '\x01';
        FUN_ram_4000305c(&DAT_ram_30089c68,_DAT_ram_3008a504,0x898);
        iVar3 = FUN_ram_4009048c();
        if ((iVar3 != 0) && (*(code **)(iVar3 + 0x2c) != (code *)0x0)) {
          (**(code **)(iVar3 + 0x2c))(0,uVar10);
        }
        piVar9 = (int *)(gp + -0xc);
        uVar11 = 0;
        if (*piVar9 == -1) {
          *piVar9 = 1;
        }
        else {
          *piVar9 = *piVar9 + 1;
        }
      }
      else {
LAB_ram_4008b456:
        uVar11 = 0xfffffffe;
LAB_ram_4008b458:
        if ((_DAT_ram_30089c58 & 0xff) != 0) {
          uVar2 = DAT_ram_30089c5a;
          iVar3 = FUN_ram_4009048c();
          if (((iVar3 == 0) || (*(code **)(iVar3 + 0x30) == (code *)0x0)) ||
             (iVar3 = (**(code **)(iVar3 + 0x30))(0,uVar2), iVar3 != 0)) goto joined_r0x4008b644;
        }
      }
      _DAT_ram_30089c58 = 0;
      _DAT_ram_30089c5c = 0;
      _DAT_ram_30089c60 = 0;
      _DAT_ram_30089c64 = 0;
      goto joined_r0x4008b644;
    }
  }
  else {
LAB_ram_4008b1fc:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
    if (DAT_ram_30089c58 != '\0') goto LAB_ram_4008b21a;
  }
LAB_ram_4008b640:
  uVar11 = 0xffffffff;
joined_r0x4008b644:
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
  }
  return uVar11;
}


/* NanoCore 1.10, address 0x4008bebc.
 * REA evidence: ev_c212cd1b99cb4cfb9201a87de6610953139f320f13c076139d5284b3d4114c36
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008bebc(undefined4 param_1,uint param_2,int param_3,undefined1 *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  void *pvVar9;
  undefined1 uVar10;
  void *pvVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  char *unaff_s4;
  uint uVar15;
  
  if (_DAT_ram_3008a534 == 0) {
    iVar14 = FUN_ram_4000493c(0x3008a508,&DAT_ram_40099370,1);
    if (iVar14 == 0) {
      _DAT_ram_3008a534 = 1;
      goto LAB_ram_4008bed2;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_4008bed2;
    if (*unaff_s4 != '\0') goto LAB_ram_4008bee8;
  }
  else {
LAB_ram_4008bed2:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
    if (*unaff_s4 != '\0') {
LAB_ram_4008bee8:
      if (((unaff_s4[1] != '\0') && (uVar13 = param_2 & 0xffffff, uVar13 == *(uint *)(unaff_s4 + 4))
          ) && (uVar13 == *(uint *)(unaff_s4 + 8))) {
        if (param_3 != *(int *)(unaff_s4 + 0xc)) {
          if ((_DAT_ram_3008a534 == 0) ||
             (FUN_ram_40004ac8(0x3008a508), param_3 != *(int *)(unaff_s4 + 0xc))) {
            *param_4 = 5;
            return 1;
          }
          uVar10 = 3;
          goto LAB_ram_4008c10a;
        }
        bVar1 = unaff_s4[2];
        uVar15 = (uint)bVar1;
        iVar14 = 0;
        uVar6 = 0;
        if (uVar13 - 1 < 0x1000) {
          do {
            uVar3 = uVar13 - uVar6;
            if (0x100 < uVar3) {
              uVar3 = 0x100;
            }
            iVar5 = FUN_ram_4009048c();
            uVar4 = uVar6 + uVar3;
            if (((iVar5 == 0) || (*(code **)(iVar5 + 0x24) == (code *)0x0)) ||
               (uVar6 = (**(code **)(iVar5 + 0x24))(1,uVar15,uVar6), uVar3 != uVar6))
            goto LAB_ram_4008c35a;
            iVar14 = FUN_ram_4000755e(iVar14);
            uVar6 = uVar4;
          } while (uVar4 < uVar13);
          if (param_3 == iVar14) {
            if (((DAT_ram_3008a500 == '\0') || (_DAT_ram_30089c68 != 0x53415442)) ||
               (_DAT_ram_30089c6c != 4)) {
              memset(&DAT_ram_30089c68,0xff,0x898);
              iVar5 = FUN_ram_4009048c();
              puVar7 = (undefined4 *)FUN_ram_4009048c();
              if (((puVar7 != (undefined4 *)0x0) && ((code *)*puVar7 != (code *)0x0)) &&
                 ((iVar8 = (*(code *)*puVar7)(), iVar8 != 0 &&
                  ((iVar5 != 0 && (*(code **)(iVar5 + 4) != (code *)0x0)))))) {
                iVar5 = (**(code **)(iVar5 + 4))(&DAT_ram_30089c68);
                if (iVar5 == 1) {
                  if ((_DAT_ram_30089c68 == 0x53415442) && (_DAT_ram_30089c6c == 4)) {
LAB_ram_4008c132:
                    DAT_ram_3008a500 = '\x01';
                    goto LAB_ram_4008c138;
                  }
                }
                else if (iVar5 == 2) {
                  memset(&DAT_ram_30089c68,0xff,0x898);
                  _DAT_ram_30089c68 = 0x53415442;
                  _DAT_ram_30089c6c = 4;
                  _DAT_ram_30089c72 = 0;
                  pvVar11 = (void *)0x30089c8c;
                  do {
                    *(undefined2 *)((int)pvVar11 + -4) = 0;
                    *(undefined4 *)((int)pvVar11 + -0xc) = 0;
                    *(undefined4 *)((int)pvVar11 + -8) = 0;
                    pvVar9 = memset(pvVar11,0,0x10);
                    pvVar11 = (void *)((int)pvVar9 + 0x20);
                    *(undefined4 *)((int)pvVar9 + 0x10) = DAT_ram_400993a8;
                  } while (pvVar11 != (void *)0x3008a14c);
                  pvVar11 = (void *)0x3008a14c;
                  do {
                    *(undefined2 *)((int)pvVar11 + -4) = 0;
                    *(undefined4 *)((int)pvVar11 + -0xc) = 0;
                    *(undefined4 *)((int)pvVar11 + -8) = 0;
                    pvVar9 = memset(pvVar11,0,0x10);
                    pvVar11 = (void *)((int)pvVar9 + 0x20);
                    *(undefined4 *)((int)pvVar9 + 0x10) = DAT_ram_400993a8;
                  } while (pvVar11 != (void *)0x3008a50c);
                  iVar5 = FUN_ram_4009048c();
                  if ((((((_DAT_ram_30089c68 == 0x53415442) && (_DAT_ram_30089c6c == 4)) &&
                        (puVar7 = (undefined4 *)FUN_ram_4009048c(), puVar7 != (undefined4 *)0x0)) &&
                       (((code *)*puVar7 != (code *)0x0 &&
                        (iVar8 = (*(code *)*puVar7)(), iVar8 != 0)))) && (iVar5 != 0)) &&
                     ((*(code **)(iVar5 + 8) != (code *)0x0 &&
                      (iVar5 = (**(code **)(iVar5 + 8))(&DAT_ram_30089c68), iVar5 != 0))))
                  goto LAB_ram_4008c132;
                  goto LAB_ram_4008c2c6;
                }
              }
              memset(&DAT_ram_30089c68,0xff,0x898);
              DAT_ram_3008a500 = '\0';
            }
            else {
LAB_ram_4008c138:
              if ((_DAT_ram_3008a504 != (int *)0x0) ||
                 (_DAT_ram_3008a504 = (int *)FUN_ram_4002c39e(0x898),
                 _DAT_ram_3008a504 != (int *)0x0)) {
                FUN_ram_4000305c(_DAT_ram_3008a504,&DAT_ram_30089c68,0x898);
                iVar5 = FUN_ram_4009048c();
                if ((iVar5 != 0) &&
                   ((*(code **)(iVar5 + 0x28) != (code *)0x0 &&
                    (iVar5 = (**(code **)(iVar5 + 0x28))(1,uVar15,uVar13,iVar14),
                    piVar12 = _DAT_ram_3008a504, iVar5 == 0)))) {
                  *(char *)((int)_DAT_ram_3008a504 + uVar15 * 0x20 + 0x4df) =
                       (char)((uint)iVar14 >> 0x18);
                  *(char *)(piVar12 + uVar15 * 8 + 0x136) = (char)uVar13;
                  *(char *)((int)piVar12 + uVar15 * 0x20 + 0x4dd) = (char)((uint)iVar14 >> 8);
                  *(char *)((int)piVar12 + uVar15 * 0x20 + 0x4de) = (char)((uint)iVar14 >> 0x10);
                  *(undefined1 *)(piVar12 + uVar15 * 8 + 0x138) = 1;
                  *(char *)((int)piVar12 + uVar15 * 0x20 + 0x4d9) = (char)(param_2 >> 8);
                  *(char *)((int)piVar12 + uVar15 * 0x20 + 0x4da) = (char)(param_2 >> 0x10);
                  *(undefined1 *)((int)piVar12 + uVar15 * 0x20 + 0x4db) = 0;
                  *(char *)(piVar12 + uVar15 * 8 + 0x137) = (char)iVar14;
                  *(undefined1 *)((int)piVar12 + uVar15 * 0x20 + 0x4e1) = 0;
                  *(byte *)(piVar12 + 2) = bVar1;
                  *(undefined1 *)((int)piVar12 + 9) = 0;
                  iVar14 = FUN_ram_4009048c();
                  if ((((*piVar12 == 0x53415442) && ((short)piVar12[1] == 4)) &&
                      (puVar7 = (undefined4 *)FUN_ram_4009048c(), puVar7 != (undefined4 *)0x0)) &&
                     ((((code *)*puVar7 != (code *)0x0 && (iVar5 = (*(code *)*puVar7)(), iVar5 != 0)
                       ) && ((iVar14 != 0 &&
                             ((*(code **)(iVar14 + 8) != (code *)0x0 &&
                              (iVar14 = (**(code **)(iVar14 + 8))(piVar12), iVar14 != 0)))))))) {
                    DAT_ram_3008a500 = '\x01';
                    FUN_ram_4000305c(&DAT_ram_30089c68,_DAT_ram_3008a504,0x898);
                    iVar14 = FUN_ram_4009048c();
                    if ((iVar14 != 0) && (*(code **)(iVar14 + 0x2c) != (code *)0x0)) {
                      (**(code **)(iVar14 + 0x2c))(1,uVar15);
                    }
                    piVar12 = (int *)(gp + -8);
                    if (*piVar12 == -1) {
                      *piVar12 = 1;
                    }
                    else {
                      *piVar12 = *piVar12 + 1;
                    }
                    _DAT_ram_30086c44 = 0;
                    _DAT_ram_30086c48 = 0;
                    _DAT_ram_30086c4c = 0;
                    _DAT_ram_30086c50 = 0;
                    uVar10 = 0;
                    if (_DAT_ram_3008a534 != 0) {
                      FUN_ram_40004ac8(0x3008a508);
                      uVar10 = 0;
                    }
                    goto LAB_ram_4008c10a;
                  }
                  iVar14 = FUN_ram_4009048c();
                  if (((iVar14 == 0) || (*(code **)(iVar14 + 0x30) == (code *)0x0)) ||
                     (iVar14 = (**(code **)(iVar14 + 0x30))(1,uVar15), iVar14 != 0))
                  goto joined_r0x4008c37a;
                  goto LAB_ram_4008c2e8;
                }
              }
            }
LAB_ram_4008c2c6:
            if (*unaff_s4 != '\0') {
              cVar2 = unaff_s4[2];
              iVar14 = FUN_ram_4009048c();
              if ((iVar14 == 0) || (*(code **)(iVar14 + 0x30) == (code *)0x0))
              goto joined_r0x4008c37a;
              iVar14 = (**(code **)(iVar14 + 0x30))(1,cVar2);
              goto joined_r0x4008c374;
            }
          }
          else {
LAB_ram_4008c35a:
            if (*unaff_s4 != '\0') {
              uVar15 = (uint)(byte)unaff_s4[2];
              goto LAB_ram_4008c364;
            }
          }
LAB_ram_4008c2e8:
          _DAT_ram_30086c44 = 0;
          _DAT_ram_30086c48 = 0;
          _DAT_ram_30086c4c = 0;
          _DAT_ram_30086c50 = 0;
        }
        else {
LAB_ram_4008c364:
          iVar14 = FUN_ram_4009048c();
          if ((iVar14 != 0) && (*(code **)(iVar14 + 0x30) != (code *)0x0)) {
            iVar14 = (**(code **)(iVar14 + 0x30))(1,uVar15);
joined_r0x4008c374:
            if (iVar14 == 0) goto LAB_ram_4008c2e8;
          }
        }
      }
    }
joined_r0x4008c37a:
    if (_DAT_ram_3008a534 != 0) {
      FUN_ram_40004ac8(0x3008a508);
    }
  }
  uVar10 = 4;
LAB_ram_4008c10a:
  *param_4 = uVar10;
  return 1;
}


