/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40089000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x40089208.
 * REA evidence: ev_9028c87146c2c3403cc3778f6ce10159a465f08e6b5d0f783a83ab5f1b1252a8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40089208(undefined4 *param_1)

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
      goto LAB_ram_4008922e;
    }
    if (_DAT_ram_3008a534 != 0) goto LAB_ram_4008922e;
  }
  else {
LAB_ram_4008922e:
    FUN_ram_400049d6(0x3008a508,0xffffffff);
  }
  memset(param_1,0,0x14);
  puVar2 = (undefined4 *)FUN_ram_4009048c();
  if (((puVar2 == (undefined4 *)0x0) || ((code *)*puVar2 == (code *)0x0)) ||
     (iVar3 = (*(code *)*puVar2)(), iVar3 == 0)) goto LAB_ram_4008944e;
  if (((DAT_ram_3008a500 == '\0') || (_DAT_ram_30089c68 != 0x53415442)) || (_DAT_ram_30089c6c != 4))
  {
    memset(&DAT_ram_30089c68,0xff,0x898);
    iVar3 = FUN_ram_4009048c();
    puVar2 = (undefined4 *)FUN_ram_4009048c();
    if (((puVar2 == (undefined4 *)0x0) || ((code *)*puVar2 == (code *)0x0)) ||
       ((iVar4 = (*(code *)*puVar2)(), iVar4 == 0 ||
        ((iVar3 == 0 || (*(code **)(iVar3 + 4) == (code *)0x0)))))) {
LAB_ram_400893ec:
      memset(&DAT_ram_30089c68,0xff,0x898);
      DAT_ram_3008a500 = '\0';
    }
    else {
      iVar3 = (**(code **)(iVar3 + 4))(&DAT_ram_30089c68);
      if (iVar3 == 1) {
        if ((_DAT_ram_30089c68 != 0x53415442) || (_DAT_ram_30089c6c != 4)) goto LAB_ram_400893ec;
      }
      else {
        if (iVar3 != 2) goto LAB_ram_400893ec;
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
        goto LAB_ram_4008940a;
      }
      DAT_ram_3008a500 = '\x01';
    }
  }
LAB_ram_4008940a:
  *param_1 = 0x1e000;
  iVar3 = FUN_ram_4009048c();
  uVar6 = 0;
  if ((iVar3 != 0) && (*(code **)(iVar3 + 0x34) != (code *)0x0)) {
    uVar6 = (**(code **)(iVar3 + 0x34))();
  }
  uVar7 = _DAT_ram_30089c70;
  if (0x1d < (_DAT_ram_30089c70 & 0xff)) {
    uVar7 = 0xffff;
  }
  *(ushort *)(param_1 + 4) = uVar7;
  uVar1 = _DAT_ram_30086c44;
  param_1[2] = 0x1e;
  param_1[1] = uVar6;
  param_1[3] = 0x1000;
  *(undefined2 *)((int)param_1 + 0x12) = uVar1;
LAB_ram_4008944e:
  if (_DAT_ram_3008a534 != 0) {
    FUN_ram_40004ac8(0x3008a508);
    return;
  }
  return;
}


