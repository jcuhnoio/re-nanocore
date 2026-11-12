/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40090000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x400903e8.
 * REA evidence: ev_774b6f8bea2c9d4e59a4463e05d7f4cfbc525a295c7a25210545a75be87d6b25
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400903e8(void)

{
  int iVar1;
  
  if (_DAT_ram_3008b8c0 == 0) {
    iVar1 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar1 == 0) {
      _DAT_ram_3008b8c0 = 1;
    }
    else if (_DAT_ram_3008b8c0 == 0) {
      DAT_ram_30087fc0 = 1;
      return;
    }
  }
  FUN_ram_400049c6(0x3008b894,0xffffffff);
  DAT_ram_30087fc0 = 1;
  return;
}


/* NanoCore 1.11, address 0x4009043e.
 * REA evidence: ev_cb077dd7a8b9118e40fc7956c2b0e39007c757c221c7f2204acc9a3865959900
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4009043e(void)

{
  DAT_ram_30087fc0 = 0;
  if (_DAT_ram_3008b8c0 == 0) {
    return;
  }
  FUN_ram_40004ab8(0x3008b894);
  return;
}


/* NanoCore 1.11, address 0x4009045e.
 * REA evidence: ev_bfcf5b408b1a3d5e6b9704a7b8e27732a9193d21bd52f7885a2189534de68094
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4009045e(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (_DAT_ram_3008b8c0 == 0) {
    iVar2 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b8c0 = 1;
    }
    else if (_DAT_ram_3008b8c0 == 0) goto LAB_ram_40090484;
  }
  FUN_ram_400049c6(0x3008b894,0xffffffff);
LAB_ram_40090484:
  iVar2 = FUN_ram_400933f0();
  if ((((((DAT_ram_30087fd8 == '\0' && DAT_ram_3008afdc == '\0') && DAT_ram_30087fc4 == '\0') &&
         DAT_ram_30087fb4 == '\0') && (iVar2 != 0)) && (*(code **)(iVar2 + 0x1c) != (code *)0x0)) &&
     (iVar2 = (**(code **)(iVar2 + 0x1c))(param_1), iVar2 != 0)) {
    DAT_ram_30087fd8 = '\x01';
    uVar1 = 0;
    *(char *)(gp + -4) = (char)param_1;
  }
  else {
    uVar1 = 0xffffffff;
    if (_DAT_ram_3008b8c0 != 0) {
      FUN_ram_40004ab8(0x3008b894);
      return 0xffffffff;
    }
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40090524.
 * REA evidence: ev_f0420c275c01375dd1f2ff2473deddd9b1a65a20f735b7f5f12c4db3454d2c0b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40090524(void)

{
  int iVar1;
  
  if (_DAT_ram_3008b8c0 == 0) {
    iVar1 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar1 == 0) {
      _DAT_ram_3008b8c0 = 1;
    }
    else if (_DAT_ram_3008b8c0 == 0) {
      if (DAT_ram_30087fd8 == '\0') {
        return;
      }
      DAT_ram_30087fd8 = 0;
      *(undefined1 *)(gp + -4) = 0xff;
      return;
    }
  }
  FUN_ram_400049c6(0x3008b894,0xffffffff);
  iVar1 = _DAT_ram_3008b8c0;
  if (DAT_ram_30087fd8 == '\0') {
    DAT_ram_30087fd8 = 0;
  }
  else {
    DAT_ram_30087fd8 = 0;
    *(undefined1 *)(gp + -4) = 0xff;
    if (iVar1 == 0) {
      return;
    }
    FUN_ram_40004ab8(0x3008b894);
  }
  if (_DAT_ram_3008b8c0 == 0) {
    return;
  }
  FUN_ram_40004ab8(0x3008b894);
  return;
}


/* NanoCore 1.11, address 0x400905cc.
 * REA evidence: ev_e87f9bedb764f35314522547719b82a155161aa82d284c9116d8e48c36bf9997
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400905cc(uint param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint auStack_34 [4];
  
  if (_DAT_ram_3008b8c0 == 0) {
    iVar3 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_400905f4;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_400905f4;
    if (param_2 == 0) {
      return 0xffffffff;
    }
LAB_ram_40090606:
    iVar3 = FUN_ram_400933f0();
    if ((((DAT_ram_3008b890 == '\0') && (iVar3 != 0)) && (*(code **)(iVar3 + 8) != (code *)0x0)) &&
       ((iVar3 = (**(code **)(iVar3 + 8))(), iVar3 != 0 && (param_1 < 0x26)))) {
      if ((DAT_ram_3008b888 == '\0') ||
         ((_DAT_ram_3008aff0 != 0x53415442 || (_DAT_ram_3008aff4 != 4)))) {
        memset(&DAT_ram_3008aff0,0xff,0x898);
        iVar3 = FUN_ram_400933f0();
        iVar5 = FUN_ram_400933f0();
        if (((DAT_ram_3008b890 == '\0') &&
            (((iVar5 != 0 && (*(code **)(iVar5 + 8) != (code *)0x0)) &&
             (iVar5 = (**(code **)(iVar5 + 8))(), iVar5 != 0)))) &&
           ((iVar3 != 0 && (*(code **)(iVar3 + 0xc) != (code *)0x0)))) {
          iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008aff0);
          if (iVar3 == 1) {
            if ((_DAT_ram_3008aff0 == 0x53415442) && (_DAT_ram_3008aff4 == 4)) {
LAB_ram_4009097a:
              DAT_ram_3008b888 = '\x01';
              goto LAB_ram_40090662;
            }
          }
          else if (iVar3 == 2) {
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
            if (((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) ||
               ((iVar5 = FUN_ram_400933f0(), DAT_ram_3008b890 != '\0' ||
                (((((iVar5 == 0 || (*(code **)(iVar5 + 8) == (code *)0x0)) ||
                   (iVar5 = (**(code **)(iVar5 + 8))(), iVar5 == 0)) ||
                  ((iVar3 == 0 || (*(code **)(iVar3 + 0x10) == (code *)0x0)))) ||
                 (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008aff0), iVar3 == 0))))))
            goto LAB_ram_40090850;
            goto LAB_ram_4009097a;
          }
        }
        memset(&DAT_ram_3008aff0,0xff,0x898);
        DAT_ram_3008b888 = '\0';
        uVar2 = 0xffffffff;
        goto joined_r0x400908fc;
      }
LAB_ram_40090662:
      iVar3 = param_1 * 0x20;
      uVar1 = *(ushort *)(&DAT_ram_3008b010 + iVar3);
      if (((uVar1 & 1) != 0) && ((uVar1 & 0xfffc) == 0)) {
        if (uVar1 >> 1 == 0) {
          pcVar4 = (char *)FUN_ram_400933f0();
          if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
            uVar7 = *(uint *)(&DAT_ram_3008b008 + iVar3);
            if (0x2fff < uVar7 - 1) {
              uVar2 = 0xfffffffe;
              goto joined_r0x400908fc;
            }
LAB_ram_400906d4:
            if (*(int *)(&DAT_ram_3008b00c + iVar3) - 1U < 0xfffffffe) {
              if ((*(ushort *)(&DAT_ram_3008b010 + iVar3) & 2) != 0) {
                pcVar4 = (char *)FUN_ram_400933f0();
                if ((((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) &&
                    (uVar7 = *(uint *)(&DAT_ram_3008b008 + iVar3), uVar7 < 0x303d)) &&
                   ((ushort)(*(short *)(iVar3 + 0x3008b012) - 1U) < 0x3000)) {
                  iVar5 = FUN_ram_400933f0();
                  if (((DAT_ram_3008b890 == '\0') && (iVar5 != 0)) &&
                     (*(code **)(iVar5 + 0x28) != (code *)0x0)) {
                    iVar5 = (**(code **)(iVar5 + 0x28))(0,param_1,0,&DAT_ram_30084f78,uVar7);
                  }
                  else {
                    iVar5 = -1;
                  }
                  if (iVar5 == *(int *)(&DAT_ram_3008b008 + iVar3)) {
                    iVar5 = FUN_ram_40007554(0,&DAT_ram_30084f78,iVar5);
                    if (iVar5 != *(int *)(&DAT_ram_3008b00c + iVar3)) {
                      memset(&DAT_ram_30084f78,0,0x303c);
                      uVar2 = 0xfffffffe;
                      goto joined_r0x400908fc;
                    }
                    iVar5 = FUN_ram_4008a10c(*(undefined4 *)(&DAT_ram_3008b008 + iVar3),
                                             &DAT_ram_30087fdc,0x3000,auStack_34);
                    memset(&DAT_ram_30084f78,0,0x303c);
                    if (iVar5 == 0) {
                      if (*(ushort *)(iVar3 + 0x3008b012) != auStack_34[0]) {
                        uVar2 = 0xfffffffe;
                        goto joined_r0x400908fc;
                      }
                      goto LAB_ram_4009073e;
                    }
                    goto LAB_ram_4009075a;
                  }
                }
                goto LAB_ram_40090850;
              }
              if (uVar7 < 0x3001) {
                iVar5 = FUN_ram_400933f0();
                if (((DAT_ram_3008b890 == '\0') && (iVar5 != 0)) &&
                   (*(code **)(iVar5 + 0x28) != (code *)0x0)) {
                  iVar5 = (**(code **)(iVar5 + 0x28))(0,param_1,0,&DAT_ram_30087fdc,uVar7);
                }
                else {
                  iVar5 = -1;
                }
                if (iVar5 != *(int *)(&DAT_ram_3008b008 + iVar3)) goto LAB_ram_40090850;
                iVar5 = FUN_ram_40007554(0,&DAT_ram_30087fdc);
                if (iVar5 == *(int *)(&DAT_ram_3008b00c + iVar3)) {
                  auStack_34[0] = *(uint *)(&DAT_ram_3008b008 + iVar3);
LAB_ram_4009073e:
                  if (((0xb < auStack_34[0]) && (_DAT_ram_30087fdc == 0x42504444)) &&
                     ((ushort)(_DAT_ram_30087fe0 - 1U) < 3)) {
                    uVar2 = FUN_ram_40087678(param_2);
                    goto joined_r0x400908fc;
                  }
                }
              }
            }
          }
        }
        else {
          pcVar4 = (char *)FUN_ram_400933f0();
          if (((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) &&
             (uVar7 = *(uint *)(&DAT_ram_3008b008 + iVar3), 0x3b < uVar7)) {
            pcVar4 = (char *)FUN_ram_400933f0();
            uVar6 = 0x3000;
            if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
              uVar6 = 0x303c;
            }
            if (((uVar7 <= uVar6) && ((ushort)(*(short *)(iVar3 + 0x3008b012) - 1U) < 0x3000)) &&
               (uVar7 = (uint)(ushort)(*(short *)(iVar3 + 0x3008b012) + 0x3c),
               *(uint *)(&DAT_ram_3008b008 + iVar3) == uVar7)) goto LAB_ram_400906d4;
          }
        }
      }
LAB_ram_4009075a:
      uVar2 = 0xfffffffe;
      goto joined_r0x400908fc;
    }
  }
  else {
LAB_ram_400905f4:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
    if (param_2 != 0) goto LAB_ram_40090606;
  }
LAB_ram_40090850:
  uVar2 = 0xffffffff;
joined_r0x400908fc:
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x40090a4c.
 * REA evidence: ev_8b37157f7b97132df548b96da23aa49b05cf7488b7f4087c0f5e8a5c0a5ad892
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40090a4c(uint param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_ram_3008b8c0 == 0) {
    iVar2 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_40090a72;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_40090a72;
    if (0x1d < param_1) {
      return 0;
    }
LAB_ram_40090ab0:
    if (param_2 != 0) {
      if (((DAT_ram_3008b888 == '\0') || (_DAT_ram_3008aff0 != 0x53415442)) ||
         (_DAT_ram_3008aff4 != 4)) {
        memset(&DAT_ram_3008aff0,0xff,0x898);
        iVar2 = FUN_ram_400933f0();
        iVar3 = FUN_ram_400933f0();
        if ((((DAT_ram_3008b890 == '\0') && (iVar3 != 0)) &&
            ((*(code **)(iVar3 + 8) != (code *)0x0 &&
             ((iVar3 = (**(code **)(iVar3 + 8))(), iVar3 != 0 && (iVar2 != 0)))))) &&
           (*(code **)(iVar2 + 0xc) != (code *)0x0)) {
          iVar2 = (**(code **)(iVar2 + 0xc))(&DAT_ram_3008aff0);
          if (iVar2 == 1) {
            if ((_DAT_ram_3008aff0 == 0x53415442) && (_DAT_ram_3008aff4 == 4)) {
LAB_ram_40090b70:
              DAT_ram_3008b888 = '\x01';
              goto LAB_ram_40090ae4;
            }
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
            if ((((((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) ||
                  (iVar3 = FUN_ram_400933f0(), DAT_ram_3008b890 != '\0')) ||
                 ((iVar3 == 0 || (*(code **)(iVar3 + 8) == (code *)0x0)))) ||
                ((iVar3 = (**(code **)(iVar3 + 8))(), iVar3 == 0 ||
                 ((iVar2 == 0 || (*(code **)(iVar2 + 0x10) == (code *)0x0)))))) ||
               (iVar2 = (**(code **)(iVar2 + 0x10))(&DAT_ram_3008aff0), iVar2 == 0))
            goto LAB_ram_40090a86;
            goto LAB_ram_40090b70;
          }
        }
        memset(&DAT_ram_3008aff0,0xff,0x898);
        uVar1 = 0;
        DAT_ram_3008b888 = '\0';
      }
      else {
LAB_ram_40090ae4:
        FUN_ram_4000304c(param_2,&DAT_ram_3008b4c8 + param_1 * 0x20,0x20);
        uVar1 = 1;
      }
      goto LAB_ram_40090a88;
    }
  }
  else {
LAB_ram_40090a72:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
    if (param_1 < 0x1e) goto LAB_ram_40090ab0;
  }
LAB_ram_40090a86:
  uVar1 = 0;
LAB_ram_40090a88:
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x40090cd4.
 * REA evidence: ev_3d5ee04eddfb9b91f0975531a1638cf0665fd3c98fcc4d6d91a049927d08987d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40090cd4(uint param_1,int param_2,uint param_3,undefined4 *param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (_DAT_ram_3008b8c0 == 0) {
    iVar3 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_40090d02;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_40090d02;
    if (0x1d < param_1) {
      return 0xffffffff;
    }
LAB_ram_40090d70:
    if ((param_2 != 0) && (param_4 != (undefined4 *)0x0)) {
      if ((DAT_ram_3008b888 == '\0') ||
         ((_DAT_ram_3008aff0 != 0x53415442 || (_DAT_ram_3008aff4 != 4)))) {
        memset(&DAT_ram_3008aff0,0xff,0x898);
        iVar3 = FUN_ram_400933f0();
        iVar4 = FUN_ram_400933f0();
        if ((DAT_ram_3008b890 == '\0') &&
           ((((iVar4 != 0 && (*(code **)(iVar4 + 8) != (code *)0x0)) &&
             (iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0)) &&
            ((iVar3 != 0 && (*(code **)(iVar3 + 0xc) != (code *)0x0)))))) {
          iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008aff0);
          if (iVar3 == 1) {
            if ((_DAT_ram_3008aff0 == 0x53415442) && (_DAT_ram_3008aff4 == 4)) {
LAB_ram_40090fcc:
              DAT_ram_3008b888 = '\x01';
              goto LAB_ram_40090da6;
            }
          }
          else if (iVar3 == 2) {
            memset(&DAT_ram_3008aff0,0xff,0x898);
            _DAT_ram_3008aff0 = 0x53415442;
            _DAT_ram_3008aff4 = 4;
            _DAT_ram_3008affa = 0;
            iVar3 = 0x3008b014;
            do {
              *(undefined2 *)(iVar3 + -4) = 0;
              *(undefined4 *)(iVar3 + -0xc) = 0;
              *(undefined4 *)(iVar3 + -8) = 0;
              iVar4 = memset(iVar3,0,0x10);
              iVar3 = iVar4 + 0x20;
              *(undefined4 *)(iVar4 + 0x10) = DAT_ram_4009b3c0;
            } while (iVar3 != 0x3008b4d4);
            iVar3 = 0x3008b4d4;
            do {
              *(undefined2 *)(iVar3 + -4) = 0;
              *(undefined4 *)(iVar3 + -0xc) = 0;
              *(undefined4 *)(iVar3 + -8) = 0;
              iVar4 = memset(iVar3,0,0x10);
              iVar3 = iVar4 + 0x20;
              *(undefined4 *)(iVar4 + 0x10) = DAT_ram_4009b3c0;
            } while (iVar3 != 0x3008b894);
            iVar3 = FUN_ram_400933f0();
            if (((((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) ||
                 ((iVar4 = FUN_ram_400933f0(), DAT_ram_3008b890 != '\0' ||
                  (((iVar4 == 0 || (*(code **)(iVar4 + 8) == (code *)0x0)) ||
                   (iVar4 = (**(code **)(iVar4 + 8))(), iVar4 == 0)))))) ||
                ((iVar3 == 0 || (*(code **)(iVar3 + 0x10) == (code *)0x0)))) ||
               (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008aff0), iVar3 == 0))
            goto LAB_ram_40090d16;
            goto LAB_ram_40090fcc;
          }
        }
        memset(&DAT_ram_3008aff0,0xff,0x898);
        uVar2 = 0xffffffff;
        DAT_ram_3008b888 = '\0';
        goto LAB_ram_40090d18;
      }
LAB_ram_40090da6:
      iVar3 = param_1 * 0x20;
      uVar1 = *(ushort *)(&DAT_ram_3008b4d0 + iVar3);
      if (((((uVar1 & 1) != 0) && (uVar1 >> 1 == 0 && (uVar1 & 0xfffc) == 0)) &&
          (uVar5 = *(uint *)(&DAT_ram_3008b4c8 + iVar3), uVar5 - 1 < 0x1000)) &&
         ((*(int *)(&DAT_ram_3008b4cc + iVar3) - 1U < 0xfffffffe && (uVar5 <= param_3)))) {
        iVar4 = FUN_ram_400933f0();
        if ((DAT_ram_3008b890 == '\0') &&
           ((iVar4 != 0 && (*(code **)(iVar4 + 0x28) != (code *)0x0)))) {
          iVar4 = (**(code **)(iVar4 + 0x28))(1,param_1,0,param_2,uVar5);
        }
        else {
          iVar4 = -1;
        }
        if (*(int *)(&DAT_ram_3008b4c8 + iVar3) != iVar4) goto LAB_ram_40090d16;
        iVar4 = FUN_ram_40007554(0,param_2);
        if (iVar4 == *(int *)(&DAT_ram_3008b4cc + iVar3)) {
          uVar2 = 0;
          *param_4 = *(undefined4 *)(&DAT_ram_3008b4c8 + iVar3);
          goto LAB_ram_40090d18;
        }
      }
      uVar2 = 0xfffffffe;
      goto LAB_ram_40090d18;
    }
  }
  else {
LAB_ram_40090d02:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
    if (param_1 < 0x1e) goto LAB_ram_40090d70;
  }
LAB_ram_40090d16:
  uVar2 = 0xffffffff;
LAB_ram_40090d18:
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x40090fdc.
 * REA evidence: ev_16edb4bd4f72dcd9945f22341912c6c1a47802c4340da290a08fe0837d55f8d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40090fdc(int param_1,uint param_2,undefined4 *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  
  if (_DAT_ram_3008b8c0 == 0) {
    iVar3 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar3 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_4009100e;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_4009100e;
    if (param_1 == 0) {
      return 0xffffffff;
    }
LAB_ram_40091020:
    if ((((param_3 != (undefined4 *)0x0) && (iVar3 = FUN_ram_400933f0(), DAT_ram_3008b890 == '\0'))
        && (iVar3 != 0)) &&
       ((*(code **)(iVar3 + 8) != (code *)0x0 && (iVar3 = (**(code **)(iVar3 + 8))(), iVar3 != 0))))
    {
      if ((DAT_ram_3008b888 == '\0') ||
         ((_DAT_ram_3008aff0 != 0x53415442 || (_DAT_ram_3008aff4 != 4)))) {
        memset(&DAT_ram_3008aff0,0xff,0x898);
        iVar3 = FUN_ram_400933f0();
        iVar4 = FUN_ram_400933f0();
        if (((DAT_ram_3008b890 == '\0') &&
            (((iVar4 != 0 && (*(code **)(iVar4 + 8) != (code *)0x0)) &&
             (iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0)))) &&
           ((iVar3 != 0 && (*(code **)(iVar3 + 0xc) != (code *)0x0)))) {
          iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008aff0);
          if (iVar3 == 1) {
            if ((_DAT_ram_3008aff0 == 0x53415442) && (_DAT_ram_3008aff4 == 4)) {
LAB_ram_400915b2:
              uVar6 = (uint)DAT_ram_3008aff8;
              DAT_ram_3008b888 = '\x01';
              if (uVar6 < 0x1e) {
                if (_DAT_ram_3008aff0 == 0x53415442) goto LAB_ram_40091774;
                goto LAB_ram_400915da;
              }
              goto LAB_ram_40091088;
            }
          }
          else if (iVar3 == 2) {
            memset(&DAT_ram_3008aff0,0xff,0x898);
            _DAT_ram_3008aff0 = 0x53415442;
            _DAT_ram_3008aff4 = 4;
            _DAT_ram_3008affa = 0;
            iVar3 = 0x3008b014;
            do {
              *(undefined2 *)(iVar3 + -4) = 0;
              *(undefined4 *)(iVar3 + -0xc) = 0;
              *(undefined4 *)(iVar3 + -8) = 0;
              iVar4 = memset(iVar3,0,0x10);
              iVar3 = iVar4 + 0x20;
              *(undefined4 *)(iVar4 + 0x10) = DAT_ram_4009b3c0;
            } while (iVar3 != 0x3008b4d4);
            iVar3 = 0x3008b4d4;
            do {
              *(undefined2 *)(iVar3 + -4) = 0;
              *(undefined4 *)(iVar3 + -0xc) = 0;
              *(undefined4 *)(iVar3 + -8) = 0;
              iVar4 = memset(iVar3,0,0x10);
              iVar3 = iVar4 + 0x20;
              *(undefined4 *)(iVar4 + 0x10) = DAT_ram_4009b3c0;
            } while (iVar3 != 0x3008b894);
            iVar3 = FUN_ram_400933f0();
            if (((((_DAT_ram_3008aff0 == 0x53415442) && (_DAT_ram_3008aff4 == 4)) &&
                 (iVar4 = FUN_ram_400933f0(), DAT_ram_3008b890 == '\0')) &&
                (((iVar4 != 0 && (*(code **)(iVar4 + 8) != (code *)0x0)) &&
                 ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0 &&
                  ((iVar3 != 0 && (*(code **)(iVar3 + 0x10) != (code *)0x0)))))))) &&
               (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008aff0), iVar3 != 0))
            goto LAB_ram_400915b2;
            goto LAB_ram_40091380;
          }
        }
        memset(&DAT_ram_3008aff0,0xff,0x898);
        uVar2 = 0xfffffffe;
        DAT_ram_3008b888 = '\0';
      }
      else {
        uVar6 = (uint)DAT_ram_3008aff8;
        if (uVar6 < 0x1e) {
LAB_ram_40091774:
          if (_DAT_ram_3008aff4 == 4) {
LAB_ram_40091780:
            iVar3 = uVar6 * 0x20;
            uVar1 = *(ushort *)(&DAT_ram_3008b4d0 + iVar3);
            if (((((uVar1 & 1) != 0) && (uVar1 >> 1 == 0 && (uVar1 & 0xfffc) == 0)) &&
                (uVar8 = *(uint *)(&DAT_ram_3008b4c8 + iVar3), uVar8 - 1 < 0x1000)) &&
               ((*(int *)(&DAT_ram_3008b4cc + iVar3) - 1U < 0xfffffffe && (uVar8 <= param_2)))) {
              iVar4 = FUN_ram_400933f0();
              if ((DAT_ram_3008b890 == '\0') &&
                 ((iVar4 != 0 && (*(code **)(iVar4 + 0x28) != (code *)0x0)))) {
                iVar4 = (**(code **)(iVar4 + 0x28))(1,uVar6,0,param_1,uVar8);
              }
              else {
                iVar4 = -1;
              }
              if ((*(int *)(&DAT_ram_3008b4c8 + iVar3) == iVar4) &&
                 (iVar4 = FUN_ram_40007554(0,param_1), iVar4 == *(int *)(&DAT_ram_3008b4cc + iVar3))
                 ) {
                uVar2 = 0;
                *param_3 = *(undefined4 *)(&DAT_ram_3008b4c8 + iVar3);
                goto joined_r0x40091386;
              }
            }
          }
          else {
LAB_ram_400915da:
            memset(&DAT_ram_3008aff0,0xff,0x898);
            iVar3 = FUN_ram_400933f0();
            iVar4 = FUN_ram_400933f0();
            if (((((DAT_ram_3008b890 == '\0') && (iVar4 != 0)) &&
                 (*(code **)(iVar4 + 8) != (code *)0x0)) &&
                ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0 && (iVar3 != 0)))) &&
               (*(code **)(iVar3 + 0xc) != (code *)0x0)) {
              iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008aff0);
              if (iVar3 == 1) {
                if ((_DAT_ram_3008aff0 == 0x53415442) && (_DAT_ram_3008aff4 == 4))
                goto LAB_ram_40091722;
              }
              else if (iVar3 == 2) {
                memset(&DAT_ram_3008aff0,0xff,0x898);
                _DAT_ram_3008aff0 = 0x53415442;
                _DAT_ram_3008aff4 = 4;
                _DAT_ram_3008affa = 0;
                iVar3 = 0x3008b014;
                do {
                  *(undefined2 *)(iVar3 + -4) = 0;
                  *(undefined4 *)(iVar3 + -0xc) = 0;
                  *(undefined4 *)(iVar3 + -8) = 0;
                  iVar4 = memset(iVar3,0,0x10);
                  iVar3 = iVar4 + 0x20;
                  *(undefined4 *)(iVar4 + 0x10) = DAT_ram_4009b3c0;
                } while (iVar3 != 0x3008b4d4);
                iVar3 = 0x3008b4d4;
                do {
                  *(undefined2 *)(iVar3 + -4) = 0;
                  *(undefined4 *)(iVar3 + -0xc) = 0;
                  *(undefined4 *)(iVar3 + -8) = 0;
                  iVar4 = memset(iVar3,0,0x10);
                  iVar3 = iVar4 + 0x20;
                  *(undefined4 *)(iVar4 + 0x10) = DAT_ram_4009b3c0;
                } while (iVar3 != 0x3008b894);
                iVar3 = FUN_ram_400933f0();
                if ((((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) ||
                    (iVar4 = FUN_ram_400933f0(), DAT_ram_3008b890 != '\0')) ||
                   ((((iVar4 == 0 || (*(code **)(iVar4 + 8) == (code *)0x0)) ||
                     ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 == 0 ||
                      ((iVar3 == 0 || (*(code **)(iVar3 + 0x10) == (code *)0x0)))))) ||
                    (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008aff0), iVar3 == 0))))
                goto LAB_ram_40091088;
LAB_ram_40091722:
                DAT_ram_3008b888 = '\x01';
                goto LAB_ram_40091780;
              }
            }
            memset(&DAT_ram_3008aff0,0xff,0x898);
            DAT_ram_3008b888 = '\0';
          }
        }
LAB_ram_40091088:
        puVar7 = (uint *)&DAT_ram_3008b4c8;
        uVar6 = 0;
        do {
          if (((DAT_ram_3008b888 == '\0') || (_DAT_ram_3008aff0 != 0x53415442)) ||
             (_DAT_ram_3008aff4 != 4)) {
            memset(&DAT_ram_3008aff0,0xff,0x898);
            iVar3 = FUN_ram_400933f0();
            iVar4 = FUN_ram_400933f0();
            if ((((DAT_ram_3008b890 == '\0') && (iVar4 != 0)) &&
                ((*(code **)(iVar4 + 8) != (code *)0x0 &&
                 ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0 && (iVar3 != 0)))))) &&
               (*(code **)(iVar3 + 0xc) != (code *)0x0)) {
              iVar3 = (**(code **)(iVar3 + 0xc))(&DAT_ram_3008aff0);
              if (iVar3 == 1) {
                if ((_DAT_ram_3008aff0 == 0x53415442) && (_DAT_ram_3008aff4 == 4)) {
LAB_ram_4009141c:
                  DAT_ram_3008b888 = '\x01';
                  goto LAB_ram_4009142a;
                }
              }
              else if (iVar3 == 2) {
                memset(&DAT_ram_3008aff0,0xff,0x898);
                _DAT_ram_3008aff0 = 0x53415442;
                _DAT_ram_3008aff4 = 4;
                _DAT_ram_3008affa = 0;
                iVar3 = 0x3008b014;
                do {
                  *(undefined2 *)(iVar3 + -4) = 0;
                  *(undefined4 *)(iVar3 + -0xc) = 0;
                  *(undefined4 *)(iVar3 + -8) = 0;
                  iVar4 = memset(iVar3,0,0x10);
                  iVar3 = iVar4 + 0x20;
                  *(undefined4 *)(iVar4 + 0x10) = DAT_ram_4009b3c0;
                } while (iVar3 != 0x3008b4d4);
                iVar3 = 0x3008b4d4;
                do {
                  *(undefined2 *)(iVar3 + -4) = 0;
                  *(undefined4 *)(iVar3 + -0xc) = 0;
                  *(undefined4 *)(iVar3 + -8) = 0;
                  iVar4 = memset(iVar3,0,0x10);
                  iVar3 = iVar4 + 0x20;
                  *(undefined4 *)(iVar4 + 0x10) = DAT_ram_4009b3c0;
                } while (iVar3 != 0x3008b894);
                iVar3 = FUN_ram_400933f0();
                if ((((((_DAT_ram_3008aff0 == 0x53415442) && (_DAT_ram_3008aff4 == 4)) &&
                      (iVar4 = FUN_ram_400933f0(), DAT_ram_3008b890 == '\0')) &&
                     ((iVar4 != 0 && (*(code **)(iVar4 + 8) != (code *)0x0)))) &&
                    ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0 &&
                     ((iVar3 != 0 && (*(code **)(iVar3 + 0x10) != (code *)0x0)))))) &&
                   (iVar3 = (**(code **)(iVar3 + 0x10))(&DAT_ram_3008aff0), iVar3 != 0))
                goto LAB_ram_4009141c;
                goto LAB_ram_400911f4;
              }
            }
            memset(&DAT_ram_3008aff0,0xff,0x898);
            DAT_ram_3008b888 = '\0';
          }
          else {
LAB_ram_4009142a:
            uVar1 = (ushort)puVar7[2];
            if (((((uVar1 & 1) != 0) && (uVar1 >> 1 == 0 && (uVar1 & 0xfffc) == 0)) &&
                (uVar8 = *puVar7, uVar8 - 1 < 0x1000)) &&
               ((puVar7[1] - 1 < 0xfffffffe && (uVar8 <= param_2)))) {
              iVar3 = FUN_ram_400933f0();
              if ((DAT_ram_3008b890 == '\0') &&
                 ((iVar3 != 0 && (*(code **)(iVar3 + 0x28) != (code *)0x0)))) {
                uVar8 = (**(code **)(iVar3 + 0x28))(1,uVar6 & 0xff,0,param_1,uVar8);
              }
              else {
                uVar8 = 0xffffffff;
              }
              if ((*puVar7 == uVar8) &&
                 (uVar8 = FUN_ram_40007554(0,param_1), piVar5 = _DAT_ram_3008b88c,
                 uVar8 == puVar7[1])) {
                *param_3 = *(undefined4 *)(&DAT_ram_3008b4c8 + uVar6 * 0x20);
                if ((piVar5 == (int *)0x0) &&
                   (piVar5 = (int *)FUN_ram_4002c2b6(0x898), _DAT_ram_3008b88c = piVar5,
                   piVar5 == (int *)0x0)) {
                  iVar3 = *(int *)(gp + -8);
                }
                else {
                  FUN_ram_4000304c(piVar5,&DAT_ram_3008aff0,0x898);
                  *(char *)(piVar5 + 2) = (char)uVar6;
                  *(undefined1 *)((int)piVar5 + 9) = 0;
                  iVar3 = FUN_ram_400933f0();
                  if ((((((*piVar5 == 0x53415442) && ((short)piVar5[1] == 4)) &&
                        (iVar4 = FUN_ram_400933f0(), DAT_ram_3008b890 == '\0')) &&
                       (((iVar4 != 0 && (*(code **)(iVar4 + 8) != (code *)0x0)) &&
                        (iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0)))) &&
                      ((iVar3 != 0 && (*(code **)(iVar3 + 0x10) != (code *)0x0)))) &&
                     (iVar3 = (**(code **)(iVar3 + 0x10))(piVar5), iVar3 != 0)) {
                    DAT_ram_3008b888 = '\x01';
                    FUN_ram_4000304c(&DAT_ram_3008aff0,_DAT_ram_3008b88c,0x898);
                  }
                  iVar3 = *(int *)(gp + -8);
                }
                if (iVar3 == -1) {
                  *(undefined4 *)(gp + -8) = 1;
                  uVar2 = 0;
                }
                else {
                  uVar2 = 0;
                  *(int *)(gp + -8) = *(int *)(gp + -8) + 1;
                }
                goto joined_r0x40091386;
              }
            }
          }
LAB_ram_400911f4:
          uVar6 = uVar6 + 1;
          puVar7 = puVar7 + 8;
        } while (uVar6 != 0x1e);
LAB_ram_40091380:
        uVar2 = 0xfffffffe;
      }
      goto joined_r0x40091386;
    }
  }
  else {
LAB_ram_4009100e:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
    if (param_1 != 0) goto LAB_ram_40091020;
  }
  uVar2 = 0xffffffff;
joined_r0x40091386:
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
  }
  return uVar2;
}


