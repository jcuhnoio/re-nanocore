/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4008e000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4008e466.
 * REA evidence: ev_d128f5238ee0af92e13a2b19e6a56005c2f5f20d0fe9ed33129063ee525c03ea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4008e466(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 *param_4,
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
  
  if (_DAT_ram_3008b8c0 == 0) {
    iVar3 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_4008e494;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_4008e494;
  }
  else {
LAB_ram_4008e494:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
  }
  bVar1 = *param_2;
  uVar2 = (uint)bVar1;
  if (0x25 < uVar2) {
    *param_5 = 3;
    goto joined_r0x4008e6f4;
  }
  iVar3 = FUN_ram_400933f0();
  if ((((DAT_ram_3008b890 != '\0') || (iVar3 == 0)) || (*(code **)(iVar3 + 8) == (code *)0x0)) ||
     (iVar3 = (**(code **)(iVar3 + 8))(), iVar3 == 0)) {
LAB_ram_4008e6ea:
    *param_5 = 4;
    goto joined_r0x4008e6f4;
  }
  if (((DAT_ram_3008b888 == '\0') || (_DAT_ram_3008aff0 != 0x53415442)) || (_DAT_ram_3008aff4 != 4))
  {
    memset(&DAT_ram_3008aff0,0xff,0x898);
    iVar3 = FUN_ram_400933f0();
    iVar7 = FUN_ram_400933f0();
    if (((DAT_ram_3008b890 != '\0') || (iVar7 == 0)) ||
       ((*(code **)(iVar7 + 8) == (code *)0x0 ||
        (((iVar7 = (**(code **)(iVar7 + 8))(), iVar7 == 0 || (iVar3 == 0)) ||
         (*(code **)(iVar3 + 0xc) == (code *)0x0)))))) {
LAB_ram_4008e6cc:
      memset(&DAT_ram_3008aff0,0xff,0x898);
      DAT_ram_3008b888 = '\0';
      goto LAB_ram_4008e6ea;
    }
    iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008aff0);
    if (iVar3 == 1) {
      if ((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) goto LAB_ram_4008e6cc;
    }
    else {
      if (iVar3 != 2) goto LAB_ram_4008e6cc;
      memset(&DAT_ram_3008aff0,0xff,0x898);
      _DAT_ram_3008aff0 = 0x53415442;
      _DAT_ram_3008aff4 = 4;
      _DAT_ram_3008affa = 0;
      iVar3 = 0x3008b014;
      do {
        *(undefined2 *)(iVar3 + -4) = 0;
        *(undefined4 *)(iVar3 + -0xc) = 0;
        *(undefined4 *)(iVar3 + -8) = 0;
        iVar7 = memset(iVar3,0,0x10);
        iVar3 = iVar7 + 0x20;
        *(undefined4 *)(iVar7 + 0x10) = DAT_ram_4009b3c0;
      } while (iVar3 != 0x3008b4d4);
      iVar3 = 0x3008b4d4;
      do {
        *(undefined2 *)(iVar3 + -4) = 0;
        *(undefined4 *)(iVar3 + -0xc) = 0;
        *(undefined4 *)(iVar3 + -8) = 0;
        iVar7 = memset(iVar3,0,0x10);
        iVar3 = iVar7 + 0x20;
        *(undefined4 *)(iVar7 + 0x10) = DAT_ram_4009b3c0;
      } while (iVar3 != 0x3008b894);
      iVar3 = FUN_ram_400933f0();
      if (((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) ||
         ((iVar7 = FUN_ram_400933f0(), DAT_ram_3008b890 != '\0' ||
          (((((iVar7 == 0 || (*(code **)(iVar7 + 8) == (code *)0x0)) ||
             (iVar7 = (**(code **)(iVar7 + 8))(), iVar7 == 0)) ||
            ((iVar3 == 0 || (*(code **)(iVar3 + 0x10) == (code *)0x0)))) ||
           (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008aff0), iVar3 == 0))))))
      goto LAB_ram_4008e6ea;
    }
    DAT_ram_3008b888 = '\x01';
  }
  iVar3 = uVar2 * 0x20;
  uVar5 = *(uint *)(&DAT_ram_3008b010 + iVar3);
  uVar8 = *(uint *)(&DAT_ram_3008b008 + iVar3);
  iVar7 = *(int *)(&DAT_ram_3008b00c + iVar3);
  uStack_44 = *(uint *)(iVar3 + 0x3008b014);
  uStack_40 = *(undefined4 *)(iVar3 + 0x3008b018);
  uStack_3c = *(undefined4 *)(iVar3 + 0x3008b01c);
  uStack_38 = *(undefined4 *)(iVar3 + 0x3008b020);
  uStack_34 = *(undefined4 *)(iVar3 + 0x3008b024);
  uVar6 = uVar8;
  if (((uVar5 & 1) == 0) || ((uVar5 & 0xfffc) != 0)) {
    sVar9 = 0;
  }
  else if ((uVar5 & 0xffff) >> 1 == 0) {
    pcVar4 = (char *)FUN_ram_400933f0();
    if (((pcVar4 == (char *)0x0) || (sVar9 = 0, *pcVar4 == '\0')) && (sVar9 = 0, uVar8 - 1 < 0x3000)
       ) {
LAB_ram_4008e8b4:
      sVar9 = 0;
      if ((iVar7 - 1U < 0xfffffffe) && (sVar9 = 1, (uStack_44 & 0xff) == 0)) {
        FUN_ram_400055da(&uStack_44,0x10,s__02u_Slot_ram_4009b3b4,uVar2 + 1);
        uVar6 = uVar8;
      }
    }
  }
  else {
    pcVar4 = (char *)FUN_ram_400933f0();
    if (((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) || (uVar8 < 0x3c)) {
      sVar9 = 0;
    }
    else {
      pcVar4 = (char *)FUN_ram_400933f0();
      uVar6 = 0x3000;
      if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
        uVar6 = 0x303c;
      }
      if (((uVar8 <= uVar6) && (((uVar5 >> 0x10) - 1 & 0xffff) < 0x3000)) &&
         (uVar6 = (uVar5 >> 0x10) + 0x3c & 0xffff, uVar6 == uVar8)) goto LAB_ram_4008e8b4;
      sVar9 = 0;
      uVar6 = uVar8;
    }
  }
  DAT_ram_3008b8da = (_DAT_ram_3008aff6 & 0xff) < 0x26 && uVar2 == _DAT_ram_3008aff6;
  DAT_ram_3008b8e2 = (undefined1)((uint)iVar7 >> 0x18);
  _DAT_ram_3008b8d8 = (ushort)bVar1 | sVar9 << 8;
  DAT_ram_3008b8e3 = (undefined1)uStack_34;
  DAT_ram_3008b8e4 = uStack_34._1_1_;
  DAT_ram_3008b8e5 = uStack_34._2_1_;
  _DAT_ram_3008b8e6 = (undefined2)uStack_44;
  DAT_ram_3008b8db = (undefined1)uVar6;
  DAT_ram_3008b8dc = (undefined1)(uVar6 >> 8);
  _DAT_ram_3008b8e8 = uStack_44._2_2_;
  DAT_ram_3008b8dd = (undefined1)(uVar6 >> 0x10);
  DAT_ram_3008b8de = (undefined1)(uVar6 >> 0x18);
  _DAT_ram_3008b8ea = (undefined2)uStack_40;
  DAT_ram_3008b8df = (undefined1)iVar7;
  DAT_ram_3008b8e0 = (undefined1)((uint)iVar7 >> 8);
  _DAT_ram_3008b8ec = uStack_40._2_2_;
  DAT_ram_3008b8e1 = (undefined1)((uint)iVar7 >> 0x10);
  _DAT_ram_3008b8ee = (undefined2)uStack_3c;
  _DAT_ram_3008b8f0 = uStack_3c._2_2_;
  _DAT_ram_3008b8f2 = (undefined2)uStack_38;
  _DAT_ram_3008b8f4 = uStack_38._2_2_;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = &DAT_ram_3008b8d8;
    param_4[1] = 0x1e;
  }
  *param_5 = 0;
joined_r0x4008e6f4:
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
  }
  return 1;
}


/* NanoCore 1.11, address 0x4008e8f4.
 * REA evidence: ev_33324565247dd54a7e4dd1ebfb21d9b1d2e23eb415c3b81555cb695dc8bf52f1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008e8f4(uint param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int iStack_50;
  int iStack_4c;
  short sStack_48;
  
  iStack_50 = 0;
  if (_DAT_ram_3008b8c0 == 0) {
    iVar3 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_4008e92a;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_4008e92a;
    if (DAT_ram_3008afdc == '\0') {
      return 0xffffffff;
    }
LAB_ram_4008e948:
    if (((DAT_ram_3008afdd != '\0') && (_DAT_ram_3008afe0 == param_1)) &&
       (_DAT_ram_3008afe4 == param_1)) {
      if (_DAT_ram_3008afe8 != param_2) {
        uVar9 = 0xfffffffe;
        goto joined_r0x4008ede8;
      }
      bVar1 = DAT_ram_3008afde;
      uVar8 = (uint)DAT_ram_3008afde;
      iVar3 = FUN_ram_40089e64(uVar8,param_1,&iStack_50);
      if ((iVar3 != 0) || (iStack_50 != param_2)) goto LAB_ram_4008ed9e;
      if ((uVar8 < 0x26) && (param_1 != 0)) {
        pcVar4 = (char *)FUN_ram_400933f0();
        if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
          if (param_1 - 0xc < 0x2ff5) {
            iVar3 = FUN_ram_400933f0();
            if (((iVar3 == 0) || (*(code **)(iVar3 + 0x2c) == (code *)0x0)) ||
               (iVar3 = (**(code **)(iVar3 + 0x2c))(0,uVar8,0,&iStack_4c,0xc), iVar3 != 0xc))
            goto LAB_ram_4008ee62;
            if ((iStack_4c == 0x42504444) && ((ushort)(sStack_48 - 1U) < 3)) goto LAB_ram_4008e9de;
          }
          goto LAB_ram_4008ebde;
        }
        iStack_4c = 0;
        if (((0x303c < param_1) || (iVar3 = FUN_ram_400933f0(), iVar3 == 0)) ||
           ((*(code **)(iVar3 + 0x2c) == (code *)0x0 ||
            (uVar5 = (**(code **)(iVar3 + 0x2c))(0,uVar8,0,&DAT_ram_30084f78,param_1),
            param_1 != uVar5)))) {
LAB_ram_4008ee62:
          uVar9 = 0xffffffff;
          goto LAB_ram_4008ebe0;
        }
        iVar3 = FUN_ram_4008a10c(uVar5,&DAT_ram_30087fdc,0x3000,&iStack_4c);
        if ((((iVar3 != 0) || (iVar3 = iStack_4c, 0x2ff4 < iStack_4c - 0xcU)) ||
            (_DAT_ram_30087fdc != 0x42504444)) || (2 < (ushort)(_DAT_ram_30087fe0 - 1U))) {
          memset(&DAT_ram_30084f78,0,0x303c);
          memset(&DAT_ram_30087fdc,0,0x3000);
          uVar9 = 0xfffffffe;
          goto LAB_ram_4008ebe0;
        }
        memset(&DAT_ram_30084f78,0,0x303c);
        memset(&DAT_ram_30087fdc,0,0x3000);
        _DAT_ram_3008afec = iVar3;
LAB_ram_4008e9de:
        if (((DAT_ram_3008b888 == '\0') || (_DAT_ram_3008aff0 != 0x53415442)) ||
           (_DAT_ram_3008aff4 != 4)) {
          memset(&DAT_ram_3008aff0,0xff,0x898);
          iVar3 = FUN_ram_400933f0();
          iVar6 = FUN_ram_400933f0();
          if (((((DAT_ram_3008b890 != '\0') || (iVar6 == 0)) ||
               (*(code **)(iVar6 + 8) == (code *)0x0)) ||
              ((iVar6 = (**(code **)(iVar6 + 8))(), iVar6 == 0 || (iVar3 == 0)))) ||
             (*(code **)(iVar3 + 0xc) == (code *)0x0)) {
LAB_ram_4008ed80:
            memset(&DAT_ram_3008aff0,0xff,0x898);
            DAT_ram_3008b888 = '\0';
            goto LAB_ram_4008ed9e;
          }
          iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008aff0);
          if (iVar3 == 1) {
            if ((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4))
            goto LAB_ram_4008ed80;
          }
          else {
            if (iVar3 != 2) goto LAB_ram_4008ed80;
            memset(&DAT_ram_3008aff0,0xff,0x898);
            _DAT_ram_3008aff0 = 0x53415442;
            _DAT_ram_3008aff4 = 4;
            _DAT_ram_3008affa = 0;
            iVar3 = 0x3008b014;
            do {
              *(undefined2 *)(iVar3 + -4) = 0;
              *(undefined4 *)(iVar3 + -0xc) = 0;
              *(undefined4 *)(iVar3 + -8) = 0;
              iVar6 = memset(iVar3,0,0x10);
              iVar3 = iVar6 + 0x20;
              *(undefined4 *)(iVar6 + 0x10) = DAT_ram_4009b3c0;
            } while (iVar3 != 0x3008b4d4);
            iVar3 = 0x3008b4d4;
            do {
              *(undefined2 *)(iVar3 + -4) = 0;
              *(undefined4 *)(iVar3 + -0xc) = 0;
              *(undefined4 *)(iVar3 + -8) = 0;
              iVar6 = memset(iVar3,0,0x10);
              iVar3 = iVar6 + 0x20;
              *(undefined4 *)(iVar6 + 0x10) = DAT_ram_4009b3c0;
            } while (iVar3 != 0x3008b894);
            iVar3 = FUN_ram_400933f0();
            if ((((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) ||
                (iVar6 = FUN_ram_400933f0(), DAT_ram_3008b890 != '\0')) ||
               ((((iVar6 == 0 || (*(code **)(iVar6 + 8) == (code *)0x0)) ||
                 ((iVar6 = (**(code **)(iVar6 + 8))(), iVar6 == 0 ||
                  ((iVar3 == 0 || (*(code **)(iVar3 + 0x10) == (code *)0x0)))))) ||
                (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008aff0), iVar3 == 0))))
            goto LAB_ram_4008ed9e;
          }
          DAT_ram_3008b888 = '\x01';
        }
        if ((_DAT_ram_3008b88c == (int *)0x0) &&
           (_DAT_ram_3008b88c = (int *)FUN_ram_4002c2b6(0x898), _DAT_ram_3008b88c == (int *)0x0)) {
LAB_ram_4008ed9e:
          if ((_DAT_ram_3008afdc & 0xff) != 0) {
            uVar2 = DAT_ram_3008afde;
            iVar3 = FUN_ram_400933f0();
            if ((iVar3 == 0) || (*(code **)(iVar3 + 0x38) == (code *)0x0)) goto LAB_ram_4008ede4;
            iVar3 = (**(code **)(iVar3 + 0x38))(0,uVar2);
joined_r0x4008edb8:
            if (iVar3 != 0) goto LAB_ram_4008ede4;
          }
          _DAT_ram_3008afdc = 0;
          _DAT_ram_3008afe0 = 0;
          _DAT_ram_3008afe4 = 0;
          _DAT_ram_3008afe8 = 0;
          _DAT_ram_3008afec = 0;
          goto LAB_ram_4008ede4;
        }
        FUN_ram_4000304c(_DAT_ram_3008b88c,&DAT_ram_3008aff0,0x898);
        iVar3 = FUN_ram_400933f0();
        if ((iVar3 == 0) ||
           ((*(code **)(iVar3 + 0x30) == (code *)0x0 ||
            (iVar3 = (**(code **)(iVar3 + 0x30))(0,uVar8,param_1,param_2),
            piVar7 = _DAT_ram_3008b88c, iVar3 != 0)))) goto LAB_ram_4008ed9e;
        iVar6 = uVar8 * 0x20;
        *(char *)(_DAT_ram_3008b88c + uVar8 * 8 + 6) = (char)param_1;
        *(char *)((int)piVar7 + iVar6 + 0x19) = (char)(param_1 >> 8);
        *(char *)((int)piVar7 + iVar6 + 0x1a) = (char)(param_1 >> 0x10);
        *(char *)((int)piVar7 + iVar6 + 0x1b) = (char)(param_1 >> 0x18);
        *(char *)(piVar7 + uVar8 * 8 + 7) = (char)param_2;
        *(char *)((int)piVar7 + iVar6 + 0x1d) = (char)((uint)param_2 >> 8);
        *(char *)((int)piVar7 + iVar6 + 0x1e) = (char)((uint)param_2 >> 0x10);
        *(char *)((int)piVar7 + iVar6 + 0x1f) = (char)((uint)param_2 >> 0x18);
        pcVar4 = (char *)FUN_ram_400933f0();
        iVar3 = _DAT_ram_3008afec;
        if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
          *(undefined1 *)(piVar7 + uVar8 * 8 + 8) = 1;
          *(undefined1 *)((int)piVar7 + iVar6 + 0x21) = 0;
          *(undefined1 *)((int)piVar7 + iVar6 + 0x22) = 0xff;
          *(undefined1 *)((int)piVar7 + iVar6 + 0x23) = 0xff;
        }
        else {
          if (0xfffe < _DAT_ram_3008afec - 1U) goto LAB_ram_4008ed9e;
          *(undefined1 *)(piVar7 + uVar8 * 8 + 8) = 3;
          *(undefined1 *)((int)piVar7 + iVar6 + 0x21) = 0;
          *(char *)((int)piVar7 + iVar6 + 0x22) = (char)iVar3;
          *(char *)((int)piVar7 + iVar6 + 0x23) = (char)((uint)iVar3 >> 8);
        }
        if ((param_3 != 0) && (param_4 != 0)) {
          memset(piVar7 + uVar8 * 8 + 9,0,0x10);
          uVar5 = 0xf;
          if (param_4 < 0x10) {
            uVar5 = param_4;
          }
          FUN_ram_4000304c(piVar7 + uVar8 * 8 + 9,param_3,uVar5);
        }
        piVar7 = _DAT_ram_3008b88c;
        *(byte *)((int)_DAT_ram_3008b88c + 6) = bVar1;
        *(undefined1 *)((int)piVar7 + 7) = 0;
        iVar3 = FUN_ram_400933f0();
        if ((((((*piVar7 != 0x53415442) || ((short)piVar7[1] != 4)) ||
              (iVar6 = FUN_ram_400933f0(), DAT_ram_3008b890 != '\0')) ||
             ((iVar6 == 0 || (*(code **)(iVar6 + 8) == (code *)0x0)))) ||
            ((iVar6 = (**(code **)(iVar6 + 8))(), iVar6 == 0 ||
             ((iVar3 == 0 || (*(code **)(iVar3 + 0x10) == (code *)0x0)))))) ||
           (iVar3 = (**(code **)(iVar3 + 0x10))(piVar7), iVar3 == 0)) {
          iVar3 = FUN_ram_400933f0();
          if ((iVar3 == 0) || (*(code **)(iVar3 + 0x38) == (code *)0x0)) goto LAB_ram_4008ede4;
          iVar3 = (**(code **)(iVar3 + 0x38))(0,uVar8);
          goto joined_r0x4008edb8;
        }
        DAT_ram_3008b888 = '\x01';
        FUN_ram_4000304c(&DAT_ram_3008aff0,_DAT_ram_3008b88c,0x898);
        iVar3 = FUN_ram_400933f0();
        if ((iVar3 != 0) && (*(code **)(iVar3 + 0x34) != (code *)0x0)) {
          (**(code **)(iVar3 + 0x34))(0,uVar8);
        }
        piVar7 = (int *)(gp + -0xc);
        uVar9 = 0;
        if (*piVar7 == -1) {
          *piVar7 = 1;
        }
        else {
          *piVar7 = *piVar7 + 1;
        }
      }
      else {
LAB_ram_4008ebde:
        uVar9 = 0xfffffffe;
LAB_ram_4008ebe0:
        if ((_DAT_ram_3008afdc & 0xff) != 0) {
          uVar2 = DAT_ram_3008afde;
          iVar3 = FUN_ram_400933f0();
          if (((iVar3 == 0) || (*(code **)(iVar3 + 0x38) == (code *)0x0)) ||
             (iVar3 = (**(code **)(iVar3 + 0x38))(0,uVar2), iVar3 != 0)) goto joined_r0x4008ede8;
        }
      }
      _DAT_ram_3008afdc = 0;
      _DAT_ram_3008afe0 = 0;
      _DAT_ram_3008afe4 = 0;
      _DAT_ram_3008afe8 = 0;
      _DAT_ram_3008afec = 0;
      goto joined_r0x4008ede8;
    }
  }
  else {
LAB_ram_4008e92a:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
    if (DAT_ram_3008afdc != '\0') goto LAB_ram_4008e948;
  }
LAB_ram_4008ede4:
  uVar9 = 0xffffffff;
joined_r0x4008ede8:
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
  }
  return uVar9;
}


/* NanoCore 1.11, address 0x4008ef68.
 * REA evidence: ev_27497bac87cb2c3df89fc1387a70e6bdb73bcaaac3df2da4b1b47c9e6dc9e508
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008ef68(undefined4 param_1,uint param_2,int param_3,undefined1 *param_4)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uStack_34;
  
  uVar1 = param_2 & 0xffffff;
  if (param_4 == (undefined1 *)0x0) {
    return 0;
  }
  uVar7 = param_2 >> 0x18;
  bVar6 = (byte)(param_2 >> 0x18);
  if (DAT_ram_30084f64 == '\0') {
    if (DAT_ram_30087fb5 != '\0') {
joined_r0x4008f032:
      if ((_DAT_ram_30087fb4 & 0xff) == 0) goto LAB_ram_4008f034;
LAB_ram_4008f07a:
      if ((_DAT_ram_30087fb4 >> 0x10 & 0xff) != uVar7) goto LAB_ram_4008f034;
      uStack_34 = 0;
      if ((_DAT_ram_30087fbc != _DAT_ram_30087fb8) || (uVar1 != _DAT_ram_30087fbc)) {
        *param_4 = 1;
        goto LAB_ram_4008efd6;
      }
      iVar2 = FUN_ram_40007554(0,&DAT_ram_30084f78,uVar1);
      if (param_3 == iVar2) {
        pcVar3 = (char *)FUN_ram_400933f0();
        if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
          iVar2 = FUN_ram_4008a10c(uVar1,&DAT_ram_30087fdc,0x3000,&uStack_34);
          if (iVar2 != 0) {
            uVar5 = 1;
            if (iVar2 == -3) {
              uVar5 = 3;
            }
            if (iVar2 == -2) {
              uVar5 = 5;
            }
LAB_ram_4008f1be:
            *param_4 = uVar5;
            memset(&DAT_ram_30087fdc,0,0x3000);
            FUN_ram_40089d86();
            return 1;
          }
          if ((((0x25 < uVar7) || (0x2ff4 < uStack_34 - 0xc)) || (_DAT_ram_30087fdc != 0x42504444))
             || (2 < (ushort)(_DAT_ram_30087fe0 - 1U))) {
            *param_4 = 5;
            memset(&DAT_ram_30087fdc,0,0x3000);
            FUN_ram_40089d86();
            return 1;
          }
          uVar4 = FUN_ram_40007554(0,&DAT_ram_30087fdc);
          iVar2 = FUN_ram_4008b7dc(uVar7,uStack_34);
          if (iVar2 != 0) {
            uVar5 = 3;
            if (iVar2 != -2) {
              uVar5 = 4;
            }
            *param_4 = uVar5;
            memset(&DAT_ram_30087fdc,0,0x3000);
            FUN_ram_40089d86();
            return 1;
          }
          uVar7 = 0;
          if (uStack_34 != 0) {
            do {
              uVar8 = uStack_34 - uVar7;
              if (0x100 < uVar8) {
                uVar8 = 0x100;
              }
              iVar2 = FUN_ram_4008aa8a(uVar7,&DAT_ram_30087fdc + uVar7,uVar8);
              uVar7 = uVar7 + uVar8;
              if (iVar2 != 0) {
                FUN_ram_4008a04c();
                uVar5 = 3;
                if (iVar2 != -2) {
                  uVar5 = 4;
                }
                goto LAB_ram_4008f1be;
              }
            } while (uVar7 < uStack_34);
          }
          iVar2 = FUN_ram_4008e8f4(uStack_34,uVar4,0,0);
          if (iVar2 == -2) {
            *param_4 = 5;
          }
          else if (iVar2 == 0) {
            *param_4 = 0;
            _DAT_ram_30084f74 = _DAT_ram_30084f70;
            DAT_ram_30084f64 = '\x01';
            DAT_ram_30084f65 = bVar6;
            _DAT_ram_30084f68 = uVar1;
            _DAT_ram_30084f6c = param_3;
          }
          else {
            *param_4 = 4;
          }
          memset(&DAT_ram_30087fdc,0,0x3000);
          goto LAB_ram_4008f16c;
        }
        iVar2 = FUN_ram_4008b7dc(uVar7,uVar1);
        if (iVar2 == 0) {
          uVar7 = 0;
          if (uVar1 != 0) {
            do {
              uVar8 = uVar1 - uVar7;
              if (0x100 < uVar8) {
                uVar8 = 0x100;
              }
              iVar2 = FUN_ram_4008aa8a(uVar7,&DAT_ram_30084f78 + uVar7,uVar8);
              uVar7 = uVar7 + uVar8;
              if (iVar2 != 0) {
                FUN_ram_4008a04c();
                goto LAB_ram_4008f160;
              }
            } while (uVar7 < uVar1);
          }
          iVar2 = FUN_ram_4008e8f4(uVar1,param_3,0,0);
          if (iVar2 == -2) goto LAB_ram_4008f296;
          if (iVar2 == 0) {
            *param_4 = 0;
            _DAT_ram_30084f74 = _DAT_ram_30084f70;
            DAT_ram_30084f64 = '\x01';
            DAT_ram_30084f65 = bVar6;
            _DAT_ram_30084f68 = uVar1;
            _DAT_ram_30084f6c = param_3;
            goto LAB_ram_4008f16c;
          }
        }
        else {
LAB_ram_4008f160:
          if (iVar2 == -2) {
LAB_ram_4008f296:
            *param_4 = 5;
            goto LAB_ram_4008f16c;
          }
        }
        *param_4 = 4;
LAB_ram_4008f16c:
        FUN_ram_40089d86();
        return 1;
      }
LAB_ram_4008f0cc:
      *param_4 = 5;
      goto LAB_ram_4008efd6;
    }
LAB_ram_4008f034:
    if (DAT_ram_3008afdc != '\0') goto LAB_ram_4008f042;
  }
  else if (DAT_ram_3008afdc == '\0') {
    if (DAT_ram_30087fb4 == '\0') {
      if (((_DAT_ram_30084f74 == _DAT_ram_30084f70) && (DAT_ram_30084f65 == uVar7)) &&
         ((uVar1 == _DAT_ram_30084f68 && (param_3 == _DAT_ram_30084f6c)))) {
        *param_4 = 0;
        return 1;
      }
    }
    else if (DAT_ram_30087fb5 != '\0') goto LAB_ram_4008f07a;
  }
  else {
    if (DAT_ram_30087fb5 != '\0') goto joined_r0x4008f032;
LAB_ram_4008f042:
    if (DAT_ram_3008afde == uVar7) {
      iVar2 = FUN_ram_4008e8f4(uVar1,param_3,0,0);
      if (iVar2 != -2) {
        if (iVar2 == 0) {
          *param_4 = 0;
          _DAT_ram_30084f74 = _DAT_ram_30084f70;
          DAT_ram_30084f64 = '\x01';
          DAT_ram_30084f65 = bVar6;
          _DAT_ram_30084f68 = uVar1;
          _DAT_ram_30084f6c = param_3;
        }
        else {
          *param_4 = 4;
        }
        goto LAB_ram_4008efd6;
      }
      if (param_3 == _DAT_ram_3008afe8) {
        *param_4 = 3;
        goto LAB_ram_4008efd6;
      }
      goto LAB_ram_4008f0cc;
    }
  }
  *param_4 = 2;
LAB_ram_4008efd6:
  memset(&DAT_ram_30084f78,0,0x303c);
  _DAT_ram_30087fbc = 0;
  _DAT_ram_30087fb8 = 0;
  _DAT_ram_30087fb4 = 0;
  return 1;
}


