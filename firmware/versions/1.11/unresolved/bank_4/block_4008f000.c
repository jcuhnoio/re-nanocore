/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4008f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4008f310.
 * REA evidence: ev_47f30602c80cdf4612b65b09ac283d75db7d396dbd50f46dc8696ee5ddcd556b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4008f310(undefined4 param_1,byte *param_2,int param_3,undefined4 param_4,undefined1 *param_5
                )

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  if (param_5 == (undefined1 *)0x0) {
    return 0;
  }
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    *param_5 = 1;
    return 1;
  }
  if (_DAT_ram_3008b8c0 == 0) {
    iVar2 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_4008f366;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_4008f366;
  }
  else {
LAB_ram_4008f366:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
  }
  if ((((DAT_ram_30087fd8 == '\0') && (iVar2 = FUN_ram_400933f0(), DAT_ram_3008b890 == '\0')) &&
      (iVar2 != 0)) &&
     ((*(code **)(iVar2 + 8) != (code *)0x0 && (iVar2 = (**(code **)(iVar2 + 8))(), iVar2 != 0)))) {
    bVar1 = *param_2;
    if (0x25 < bVar1) {
      *param_5 = 3;
      goto LAB_ram_4008f384;
    }
    if (((DAT_ram_3008b888 == '\0') || (_DAT_ram_3008aff0 != 0x53415442)) ||
       (_DAT_ram_3008aff4 != 4)) {
      memset(&DAT_ram_3008aff0,0xff,0x898);
      iVar2 = FUN_ram_400933f0();
      iVar4 = FUN_ram_400933f0();
      if (((((DAT_ram_3008b890 != '\0') || (iVar4 == 0)) || (*(code **)(iVar4 + 8) == (code *)0x0))
          || ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 == 0 || (iVar2 == 0)))) ||
         (*(code **)(iVar2 + 0xc) == (code *)0x0)) {
LAB_ram_4008f6a0:
        memset(&DAT_ram_3008aff0,0xff,0x898);
        DAT_ram_3008b888 = '\0';
        goto LAB_ram_4008f37e;
      }
      iVar2 = (**(code **)(iVar2 + 0xc))(&DAT_ram_3008aff0);
      if (iVar2 == 1) {
        if ((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) goto LAB_ram_4008f6a0;
      }
      else {
        if (iVar2 != 2) goto LAB_ram_4008f6a0;
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
        if ((((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) ||
            (iVar4 = FUN_ram_400933f0(), DAT_ram_3008b890 != '\0')) ||
           ((((iVar4 == 0 || (*(code **)(iVar4 + 8) == (code *)0x0)) ||
             ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 == 0 ||
              ((iVar2 == 0 || (*(code **)(iVar2 + 0x10) == (code *)0x0)))))) ||
            (iVar2 = (**(code **)(iVar2 + 0x10))(&DAT_ram_3008aff0), iVar2 == 0))))
        goto LAB_ram_4008f37e;
      }
      DAT_ram_3008b888 = '\x01';
    }
    if ((_DAT_ram_3008b88c != (int *)0x0) ||
       (_DAT_ram_3008b88c = (int *)FUN_ram_4002c2b6(0x898), _DAT_ram_3008b88c != (int *)0x0)) {
      piVar6 = _DAT_ram_3008b88c;
      FUN_ram_4000304c(_DAT_ram_3008b88c,&DAT_ram_3008aff0,0x898);
      uVar3 = memset(piVar6 + (uint)bVar1 * 8 + 9,0,0x10);
      if (param_3 != 1) {
        uVar5 = param_3 - 1;
        if (0xf < uVar5) {
          uVar5 = 0xf;
        }
        FUN_ram_4000304c(uVar3,param_2 + 1,uVar5);
      }
      iVar2 = FUN_ram_400933f0();
      if ((((((*piVar6 == 0x53415442) && ((short)piVar6[1] == 4)) &&
            (iVar4 = FUN_ram_400933f0(), DAT_ram_3008b890 == '\0')) &&
           ((iVar4 != 0 && (*(code **)(iVar4 + 8) != (code *)0x0)))) &&
          ((iVar4 = (**(code **)(iVar4 + 8))(), iVar4 != 0 &&
           ((iVar2 != 0 && (*(code **)(iVar2 + 0x10) != (code *)0x0)))))) &&
         (iVar2 = (**(code **)(iVar2 + 0x10))(piVar6), iVar2 != 0)) {
        DAT_ram_3008b888 = '\x01';
        FUN_ram_4000304c(&DAT_ram_3008aff0,_DAT_ram_3008b88c,0x898);
        piVar6 = (int *)(gp + -0xc);
        if (*piVar6 == -1) {
          *piVar6 = 1;
          *param_5 = 0;
        }
        else {
          iVar2 = *piVar6;
          *param_5 = 0;
          *piVar6 = iVar2 + 1;
        }
        goto LAB_ram_4008f384;
      }
    }
  }
LAB_ram_4008f37e:
  *param_5 = 4;
LAB_ram_4008f384:
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
  }
  return 1;
}


/* NanoCore 1.11, address 0x4008f720.
 * REA evidence: ev_3077f0a9df5b1dfb15d51bc5217c461dbfb53af726242a868badf0441534eaa5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4008f720(void)

{
  return;
}


/* NanoCore 1.11, address 0x4008f73c.
 * REA evidence: ev_5221e4659c979a8bb565d9ecc0e57e71a006d01d7667d9d72d61dffe02223ca1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4008f73c(undefined4 param_1,uint param_2,int param_3,undefined1 *param_4)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  char *unaff_s1;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iStack0000000c;
  
  iStack0000000c = 0;
  if (_DAT_ram_3008b8c0 == 0) {
    iVar5 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar5 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_4008f754;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_4008f754;
    if (*unaff_s1 != '\0') goto LAB_ram_4008f76a;
LAB_ram_4008f97c:
    uVar3 = 4;
  }
  else {
LAB_ram_4008f754:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
    if (*unaff_s1 == '\0') {
joined_r0x4008fbce:
      if (_DAT_ram_3008b8c0 == 0) goto LAB_ram_4008f97c;
    }
    else {
LAB_ram_4008f76a:
      if (((unaff_s1[1] == '\0') || (uVar4 = param_2 & 0xffffff, uVar4 != *(uint *)(unaff_s1 + 4)))
         || (uVar4 != *(uint *)(unaff_s1 + 8))) goto joined_r0x4008fbce;
      if (param_3 != *(int *)(unaff_s1 + 0xc)) {
        if ((_DAT_ram_3008b8c0 == 0) ||
           (FUN_ram_40004ab8(0x3008b894), param_3 != *(int *)(unaff_s1 + 0xc))) {
          *param_4 = 5;
          FUN_ram_4008f720(1);
          return;
        }
        uVar3 = 3;
        goto LAB_ram_4008f948;
      }
      bVar1 = unaff_s1[2];
      uVar8 = (uint)bVar1;
      iVar5 = FUN_ram_40089db8(uVar8,uVar4,&stack0x0000000c);
      if ((iVar5 == 0) && (param_3 == iStack0000000c)) {
        if ((DAT_ram_3008b888 == '\0') ||
           ((_DAT_ram_3008aff0 != 0x53415442 || (_DAT_ram_3008aff4 != 4)))) {
          memset(&DAT_ram_3008aff0,0xff,0x898);
          iVar5 = FUN_ram_400933f0();
          iVar6 = FUN_ram_400933f0();
          if ((DAT_ram_3008b890 != '\0') ||
             ((((iVar6 == 0 || (*(code **)(iVar6 + 8) == (code *)0x0)) ||
               (iVar6 = (**(code **)(iVar6 + 8))(), iVar6 == 0)) ||
              ((iVar5 == 0 || (*(code **)(iVar5 + 0xc) == (code *)0x0)))))) {
LAB_ram_4008fb2c:
            memset(&DAT_ram_3008aff0,0xff,0x898);
            DAT_ram_3008b888 = '\0';
            goto LAB_ram_4008fb4a;
          }
          iVar5 = (**(code **)(iVar5 + 0xc))(&DAT_ram_3008aff0);
          if (iVar5 == 1) {
            if ((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4))
            goto LAB_ram_4008fb2c;
          }
          else {
            if (iVar5 != 2) goto LAB_ram_4008fb2c;
            memset(&DAT_ram_3008aff0,0xff,0x898);
            _DAT_ram_3008aff0 = 0x53415442;
            _DAT_ram_3008aff4 = 4;
            _DAT_ram_3008affa = 0;
            iVar5 = 0x3008b014;
            do {
              *(undefined2 *)(iVar5 + -4) = 0;
              *(undefined4 *)(iVar5 + -0xc) = 0;
              *(undefined4 *)(iVar5 + -8) = 0;
              iVar6 = memset(iVar5,0,0x10);
              iVar5 = iVar6 + 0x20;
              *(undefined4 *)(iVar6 + 0x10) = DAT_ram_4009b3c0;
            } while (iVar5 != 0x3008b4d4);
            iVar5 = 0x3008b4d4;
            do {
              *(undefined2 *)(iVar5 + -4) = 0;
              *(undefined4 *)(iVar5 + -0xc) = 0;
              *(undefined4 *)(iVar5 + -8) = 0;
              iVar6 = memset(iVar5,0,0x10);
              iVar5 = iVar6 + 0x20;
              *(undefined4 *)(iVar6 + 0x10) = DAT_ram_4009b3c0;
            } while (iVar5 != 0x3008b894);
            iVar5 = FUN_ram_400933f0();
            if (((((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) ||
                 (iVar6 = FUN_ram_400933f0(), DAT_ram_3008b890 != '\0')) ||
                (((iVar6 == 0 || (*(code **)(iVar6 + 8) == (code *)0x0)) ||
                 ((iVar6 = (**(code **)(iVar6 + 8))(), iVar6 == 0 ||
                  ((iVar5 == 0 || (*(code **)(iVar5 + 0x10) == (code *)0x0)))))))) ||
               (iVar5 = (**(code **)(iVar5 + 0x10))(&DAT_ram_3008aff0), iVar5 == 0))
            goto LAB_ram_4008fb4a;
          }
          DAT_ram_3008b888 = '\x01';
        }
        if ((_DAT_ram_3008b88c == (int *)0x0) &&
           (_DAT_ram_3008b88c = (int *)FUN_ram_4002c2b6(0x898), _DAT_ram_3008b88c == (int *)0x0))
        goto LAB_ram_4008fb4a;
        FUN_ram_4000304c(_DAT_ram_3008b88c,&DAT_ram_3008aff0,0x898);
        iVar5 = FUN_ram_400933f0();
        if ((iVar5 == 0) ||
           ((*(code **)(iVar5 + 0x30) == (code *)0x0 ||
            (iVar5 = (**(code **)(iVar5 + 0x30))(1,uVar8,uVar4,param_3), piVar7 = _DAT_ram_3008b88c,
            iVar5 != 0)))) goto LAB_ram_4008fb4a;
        *(char *)((int)_DAT_ram_3008b88c + uVar8 * 0x20 + 0x4df) = (char)((uint)param_3 >> 0x18);
        *(char *)(piVar7 + uVar8 * 8 + 0x137) = (char)param_3;
        *(char *)((int)piVar7 + uVar8 * 0x20 + 0x4dd) = (char)((uint)param_3 >> 8);
        *(char *)((int)piVar7 + uVar8 * 0x20 + 0x4de) = (char)((uint)param_3 >> 0x10);
        *(undefined1 *)(piVar7 + uVar8 * 8 + 0x138) = 1;
        *(char *)(piVar7 + uVar8 * 8 + 0x136) = (char)uVar4;
        *(char *)((int)piVar7 + uVar8 * 0x20 + 0x4d9) = (char)(param_2 >> 8);
        *(char *)((int)piVar7 + uVar8 * 0x20 + 0x4da) = (char)(param_2 >> 0x10);
        *(undefined1 *)((int)piVar7 + uVar8 * 0x20 + 0x4db) = 0;
        *(undefined1 *)((int)piVar7 + uVar8 * 0x20 + 0x4e1) = 0;
        *(byte *)(piVar7 + 2) = bVar1;
        *(undefined1 *)((int)piVar7 + 9) = 0;
        iVar5 = FUN_ram_400933f0();
        if ((((*piVar7 == 0x53415442) && ((short)piVar7[1] == 4)) &&
            (iVar6 = FUN_ram_400933f0(), DAT_ram_3008b890 == '\0')) &&
           ((((iVar6 != 0 && (*(code **)(iVar6 + 8) != (code *)0x0)) &&
             ((iVar6 = (**(code **)(iVar6 + 8))(), iVar6 != 0 &&
              ((iVar5 != 0 && (*(code **)(iVar5 + 0x10) != (code *)0x0)))))) &&
            (iVar5 = (**(code **)(iVar5 + 0x10))(piVar7), iVar5 != 0)))) {
          DAT_ram_3008b888 = '\x01';
          FUN_ram_4000304c(&DAT_ram_3008aff0,_DAT_ram_3008b88c,0x898);
          iVar5 = FUN_ram_400933f0();
          if ((iVar5 != 0) && (*(code **)(iVar5 + 0x34) != (code *)0x0)) {
            (**(code **)(iVar5 + 0x34))(1,uVar8);
          }
          piVar7 = (int *)(gp + -8);
          if (*piVar7 == -1) {
            *piVar7 = 1;
          }
          else {
            *piVar7 = *piVar7 + 1;
          }
          _DAT_ram_30087fc4 = 0;
          _DAT_ram_30087fc8 = 0;
          _DAT_ram_30087fcc = 0;
          _DAT_ram_30087fd0 = 0;
          _DAT_ram_30087fd4 = 0;
          uVar3 = 0;
          if (_DAT_ram_3008b8c0 != 0) {
            FUN_ram_40004ab8(0x3008b894);
          }
          goto LAB_ram_4008f948;
        }
        iVar5 = FUN_ram_400933f0();
        if ((iVar5 == 0) || (*(code **)(iVar5 + 0x38) == (code *)0x0)) goto joined_r0x4008fbce;
        iVar5 = (**(code **)(iVar5 + 0x38))(1,uVar8);
joined_r0x4008faf4:
        if (iVar5 != 0) goto joined_r0x4008fbce;
      }
      else {
LAB_ram_4008fb4a:
        if (*unaff_s1 != '\0') {
          cVar2 = unaff_s1[2];
          iVar5 = FUN_ram_400933f0();
          if ((iVar5 == 0) || (*(code **)(iVar5 + 0x38) == (code *)0x0)) goto joined_r0x4008fbce;
          iVar5 = (**(code **)(iVar5 + 0x38))(1,cVar2);
          goto joined_r0x4008faf4;
        }
      }
      _DAT_ram_30087fc4 = 0;
      _DAT_ram_30087fc8 = 0;
      _DAT_ram_30087fcc = 0;
      _DAT_ram_30087fd0 = 0;
      _DAT_ram_30087fd4 = 0;
      if (_DAT_ram_3008b8c0 == 0) {
        uVar3 = 4;
        goto LAB_ram_4008f948;
      }
    }
    FUN_ram_40004ab8(0x3008b894);
    uVar3 = 4;
  }
LAB_ram_4008f948:
  *param_4 = uVar3;
  FUN_ram_4008f720(1);
  return;
}


/* NanoCore 1.11, address 0x4008fbfe.
 * REA evidence: ev_6a5100d88cbe9d6b3edb9e0cb534cfc043c191fef158c40ae5fffbd8df6a3c84
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4008fbfe(int param_1)

{
  return param_1 * 0x3000 + 0x19000;
}


/* NanoCore 1.11, address 0x4008fc0a.
 * REA evidence: ev_ef666f96ae77535b5afbf428103d361e5d0b67034cf5919a585e26fbd0b6ba3c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4008fc0a(int param_1)

{
  return (param_1 + 0x8b) * 0x1000;
}


/* NanoCore 1.11, address 0x4008fc12.
 * REA evidence: ev_ea067abfcf21166d24e165bca6ebf4dd00dbc6cb67ca8f864884170000481cad
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4008fc12(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x3000;
  if (0x25 < param_1) {
    uVar1 = 0;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4008fc22.
 * REA evidence: ev_22c445895d907615ea1f5beffb6bafc75e4b792387f474c0508d76a0e6208892
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4008fc22(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return false;
  }
  if (*param_1 != 0x53415442) {
    return false;
  }
  return (short)param_1[1] == 4;
}


/* NanoCore 1.11, address 0x4008fc6c.
 * REA evidence: ev_93283fb74cfa75f0018054371b1ee6a5aabfeaf9037e9d8073c4f2fadcce2b31
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4008fc6c(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_ram_3008b8c0 == 0) {
    iVar2 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar2 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_4008fc8a;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_4008fc8a;
  }
  else {
LAB_ram_4008fc8a:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
  }
  DAT_ram_3008b890 = '\0';
  if ((_DAT_ram_3008afdc & 0xff) == 0) {
LAB_ram_4008fcc4:
    _DAT_ram_3008afdc = 0;
    _DAT_ram_3008afe0 = 0;
    _DAT_ram_3008afe4 = 0;
    _DAT_ram_3008afe8 = 0;
    _DAT_ram_3008afec = 0;
  }
  else {
    uVar1 = DAT_ram_3008afde;
    iVar2 = FUN_ram_400933f0();
    if (((iVar2 != 0) && (*(code **)(iVar2 + 0x38) != (code *)0x0)) &&
       (iVar2 = (**(code **)(iVar2 + 0x38))(0,uVar1), iVar2 == 0)) goto LAB_ram_4008fcc4;
  }
  if ((_DAT_ram_30087fc4 & 0xff) == 0) {
LAB_ram_4008fd10:
    _DAT_ram_30087fc4 = 0;
    _DAT_ram_30087fc8 = 0;
    _DAT_ram_30087fcc = 0;
    _DAT_ram_30087fd0 = 0;
    _DAT_ram_30087fd4 = 0;
  }
  else {
    uVar1 = DAT_ram_30087fc6;
    iVar2 = FUN_ram_400933f0();
    if (((iVar2 != 0) && (*(code **)(iVar2 + 0x38) != (code *)0x0)) &&
       (iVar2 = (**(code **)(iVar2 + 0x38))(1,uVar1), iVar2 == 0)) goto LAB_ram_4008fd10;
  }
  iVar2 = FUN_ram_400933f0();
  if ((((DAT_ram_3008b890 != '\0') || (iVar2 == 0)) ||
      ((*(code **)(iVar2 + 8) == (code *)0x0 || (iVar2 = (**(code **)(iVar2 + 8))(), iVar2 == 0))))
     || (((DAT_ram_3008b888 != '\0' && (_DAT_ram_3008aff0 == 0x53415442)) &&
         (_DAT_ram_3008aff4 == 4)))) goto LAB_ram_4008fec8;
  memset(&DAT_ram_3008aff0,0xff,0x898);
  iVar2 = FUN_ram_400933f0();
  iVar3 = FUN_ram_400933f0();
  if (((DAT_ram_3008b890 == '\0') && (iVar3 != 0)) &&
     ((*(code **)(iVar3 + 8) != (code *)0x0 &&
      (((iVar3 = (**(code **)(iVar3 + 8))(), iVar3 != 0 && (iVar2 != 0)) &&
       (*(code **)(iVar2 + 0xc) != (code *)0x0)))))) {
    iVar2 = (**(code **)(iVar2 + 0xc))(&DAT_ram_3008aff0);
    if (iVar2 == 1) {
      if ((_DAT_ram_3008aff0 != 0x53415442) || (_DAT_ram_3008aff4 != 4)) goto LAB_ram_4008ff60;
    }
    else {
      if (iVar2 != 2) goto LAB_ram_4008ff60;
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
      goto LAB_ram_4008fec8;
    }
    DAT_ram_3008b888 = '\x01';
  }
  else {
LAB_ram_4008ff60:
    memset(&DAT_ram_3008aff0,0xff,0x898);
    DAT_ram_3008b888 = '\0';
  }
LAB_ram_4008fec8:
  *(undefined4 *)(gp + -0xc) = 1;
  *(undefined4 *)(gp + -8) = 1;
  memset(&DAT_ram_30084f78,0,0x303c);
  iVar2 = _DAT_ram_3008b8c0;
  _DAT_ram_30087fb4 = 0;
  _DAT_ram_30087fb8 = 0;
  _DAT_ram_30087fbc = 0;
  DAT_ram_30087fd8 = 0;
  *(undefined1 *)(gp + -4) = 0xff;
  _DAT_ram_30084f64 = 0;
  _DAT_ram_30084f68 = 0;
  _DAT_ram_30084f6c = 0;
  _DAT_ram_30084f74 = 0;
  _DAT_ram_30084f70 = 1;
  if (iVar2 != 0) {
    FUN_ram_40004ab8(0x3008b894);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4008ffe4.
 * REA evidence: ev_dc355193b0dce9b29e9786d6716ca1acfe780fb5ebd9f15ef0a4fc222763a77c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4008ffe4(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int *piVar8;
  
  if (_DAT_ram_3008b8c0 == 0) {
    iVar4 = FUN_ram_4000492c(0x3008b894,&DAT_ram_4009b388,1);
    if (iVar4 == 0) {
      _DAT_ram_3008b8c0 = 1;
      goto LAB_ram_40090006;
    }
    if (_DAT_ram_3008b8c0 != 0) goto LAB_ram_40090006;
  }
  else {
LAB_ram_40090006:
    FUN_ram_400049c6(0x3008b894,0xffffffff);
  }
  iVar4 = FUN_ram_400933f0();
  if ((((DAT_ram_30087fd8 == '\0') && (iVar4 != 0)) && (*(int *)(iVar4 + 0x14) != 0)) &&
     (((iVar5 = FUN_ram_400933f0(), DAT_ram_3008b890 == '\0' && (iVar5 != 0)) &&
      ((*(code **)(iVar5 + 8) != (code *)0x0 && (iVar5 = (**(code **)(iVar5 + 8))(), iVar5 != 0)))))
     ) {
    if ((_DAT_ram_3008afdc & 0xff) != 0) {
      uVar1 = DAT_ram_3008afde;
      iVar5 = FUN_ram_400933f0();
      if (((iVar5 == 0) || (*(code **)(iVar5 + 0x38) == (code *)0x0)) ||
         (iVar5 = (**(code **)(iVar5 + 0x38))(0,uVar1), iVar5 != 0)) goto LAB_ram_400902ae;
    }
    _DAT_ram_3008afdc = 0;
    _DAT_ram_3008afe0 = 0;
    _DAT_ram_3008afe4 = 0;
    _DAT_ram_3008afe8 = 0;
    _DAT_ram_3008afec = 0;
    if ((_DAT_ram_30087fc4 & 0xff) != 0) {
      uVar1 = DAT_ram_30087fc6;
      iVar5 = FUN_ram_400933f0();
      if (((iVar5 == 0) || (*(code **)(iVar5 + 0x38) == (code *)0x0)) ||
         (iVar5 = (**(code **)(iVar5 + 0x38))(1,uVar1), iVar5 != 0)) goto LAB_ram_400902ae;
    }
    _DAT_ram_30087fc4 = 0;
    _DAT_ram_30087fc8 = 0;
    _DAT_ram_30087fcc = 0;
    _DAT_ram_30087fd0 = 0;
    _DAT_ram_30087fd4 = 0;
    memset(&DAT_ram_30084f78,0,0x303c);
    iVar5 = _DAT_ram_30084f70 + 1;
    _DAT_ram_30084f70 = 1;
    if (iVar5 != 0) {
      _DAT_ram_30084f70 = iVar5;
    }
    _DAT_ram_30087fb4 = 0;
    _DAT_ram_30087fb8 = 0;
    _DAT_ram_30087fbc = 0;
    DAT_ram_30084f64 = 0;
    if ((_DAT_ram_3008b88c != (undefined1 *)0x0) ||
       (_DAT_ram_3008b88c = (undefined1 *)FUN_ram_4002c2b6(0x898),
       _DAT_ram_3008b88c != (undefined1 *)0x0)) {
      puVar2 = _DAT_ram_3008b88c;
      memset(_DAT_ram_3008b88c,0xff,0x898);
      *puVar2 = 0x42;
      puVar2[1] = 0x54;
      puVar2[2] = 0x41;
      puVar2[3] = 0x53;
      puVar2[4] = 4;
      puVar2[5] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar7 = puVar2 + 0x24;
      iVar5 = 0;
      do {
        puVar2[iVar5 * 0x20 + 0x20] = 0;
        puVar2[iVar5 * 0x20 + 0x21] = 0;
        puVar2[iVar5 * 0x20 + 0x18] = 0;
        puVar2[iVar5 * 0x20 + 0x19] = 0;
        puVar2[iVar5 * 0x20 + 0x1a] = 0;
        puVar2[iVar5 * 0x20 + 0x1b] = 0;
        puVar2[iVar5 * 0x20 + 0x1c] = 0;
        puVar2[iVar5 * 0x20 + 0x1d] = 0;
        puVar2[iVar5 * 0x20 + 0x1e] = 0;
        puVar2[iVar5 * 0x20 + 0x1f] = 0;
        iVar6 = memset(puVar7,0,0x10);
        iVar5 = iVar5 + 1;
        *(undefined1 *)(iVar6 + 0x10) = 0x1a;
        *(undefined1 *)(iVar6 + 0x11) = 0x1a;
        *(undefined1 *)(iVar6 + 0x12) = 0;
        *(undefined1 *)(iVar6 + 0x13) = 0;
        puVar7 = (undefined1 *)(iVar6 + 0x20);
      } while (iVar5 != 0x26);
      puVar7 = puVar2 + 0x4e4;
      iVar5 = 0;
      do {
        puVar2[iVar5 * 0x20 + 0x4e0] = 0;
        puVar2[iVar5 * 0x20 + 0x4e1] = 0;
        puVar2[iVar5 * 0x20 + 0x4d8] = 0;
        puVar2[iVar5 * 0x20 + 0x4d9] = 0;
        puVar2[iVar5 * 0x20 + 0x4da] = 0;
        puVar2[iVar5 * 0x20 + 0x4db] = 0;
        puVar2[iVar5 * 0x20 + 0x4dc] = 0;
        puVar2[iVar5 * 0x20 + 0x4dd] = 0;
        puVar2[iVar5 * 0x20 + 0x4de] = 0;
        puVar2[iVar5 * 0x20 + 0x4df] = 0;
        iVar6 = memset(puVar7,0,0x10);
        iVar5 = iVar5 + 1;
        *(undefined1 *)(iVar6 + 0x10) = 0x1a;
        *(undefined1 *)(iVar6 + 0x11) = 0x1a;
        *(undefined1 *)(iVar6 + 0x12) = 0;
        *(undefined1 *)(iVar6 + 0x13) = 0;
        puVar7 = (undefined1 *)(iVar6 + 0x20);
      } while (iVar5 != 0x1e);
      iVar4 = (**(code **)(iVar4 + 0x14))(puVar2);
      if (iVar4 != 0) {
        FUN_ram_4000304c(&DAT_ram_3008aff0,_DAT_ram_3008b88c,0x898);
        piVar8 = (int *)(gp + -0xc);
        iVar4 = 1;
        DAT_ram_3008b888 = 1;
        if (*piVar8 != -1) {
          iVar4 = *piVar8 + 1;
        }
        *piVar8 = iVar4;
        piVar8 = (int *)(gp + -8);
        if (*piVar8 == -1) {
          *piVar8 = 1;
          uVar3 = 0;
        }
        else {
          uVar3 = 0;
          *piVar8 = *piVar8 + 1;
        }
        goto joined_r0x400902b4;
      }
    }
    memset(&DAT_ram_3008aff0,0xff,0x898);
    uVar3 = 0xffffffff;
    DAT_ram_3008b888 = 0;
  }
  else {
LAB_ram_400902ae:
    uVar3 = 0xffffffff;
  }
joined_r0x400902b4:
  if (_DAT_ram_3008b8c0 != 0) {
    FUN_ram_40004ab8(0x3008b894);
  }
  return uVar3;
}


