/* NanoCore 1.11 analysis module: unresolved/bank_4/block_4001d000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4001d12e.
 * REA evidence: ev_b4a45fbd9bca9afebd5b77e76bdd54f7bacfe81fd3cfaaccb6dcdbf2cd6d3995
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001d12e(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined1 uVar17;
  int iVar18;
  float fVar19;
  char local_88 [8];
  char acStack_80 [24];
  undefined1 auStack_68 [24];
  
  uVar12 = (uint)DAT_ram_3006ad4c * 0x50000 >> 0x10;
  if (DAT_ram_3006ad74 <= uVar12) {
    DAT_ram_3006ad4c = 0;
    uVar12 = 0;
  }
  uVar12 = DAT_ram_3006ad74 - uVar12;
  if (5 < (uVar12 & 0xffff)) {
    uVar12 = 5;
  }
  DAT_ram_3006adb4 = (byte)uVar12;
  uVar13 = (uVar12 & 0xff) + 1 & 0xff;
  iVar4 = 0;
  if (uVar13 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)((uVar12 & 0xffff) * -0x28 + 0x140) / (int)uVar13;
  }
  iVar14 = iVar2 + 0x28;
  do {
    iVar5 = *(int *)(&DAT_ram_3006acb8 + iVar4 * 4);
    if (iVar4 < (int)(uint)DAT_ram_3006adb4) {
      *(int *)(iVar4 * 4 + 0x3006aacc) = iVar2;
      *(undefined4 *)(iVar4 * 4 + 0x3006aae0) = 0x74;
      if (iVar5 != 0) {
        FUN_ram_40043aac(iVar5,1);
      }
    }
    else {
      if (iVar5 != 0) {
        FUN_ram_40043fd6(iVar5,1);
      }
      if (*(int *)(&DAT_ram_3006aba8 + iVar4 * 4) != 0) {
        FUN_ram_40043fd6(*(int *)(&DAT_ram_3006aba8 + iVar4 * 4),1);
      }
    }
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + iVar14;
  } while (iVar4 != 5);
  FUN_ram_4000504c(0x3006abfc,0xff,5);
  iVar4 = _DAT_ram_3006aa7c;
  if (_DAT_ram_3006aa7c == 0) {
    uVar17 = 0;
    iVar2 = -1;
    iVar14 = 0xff;
  }
  else {
    iVar2 = FUN_ram_4001a8d0(_DAT_ram_3006aa7c);
    uVar17 = 0;
    if (-1 < iVar2) {
      uVar17 = *(undefined1 *)(iVar2 + 0x3006af14);
    }
    iVar14 = FUN_ram_400251c6(iVar4);
  }
  uVar6 = FUN_ram_4002c3a2();
  uVar7 = FUN_ram_4002c3b0();
  fVar1 = DAT_ram_40094e80;
  puVar16 = (undefined4 *)&DAT_ram_3006ab94;
  puVar15 = (undefined4 *)&DAT_ram_3006aca4;
  iVar5 = 0;
  do {
    iVar8 = FUN_ram_4001b1bc(iVar5);
    iVar18 = iVar5 * 0x20 + 0x3006aaf4;
    iVar3 = iVar5 * 0x20 + 0x3006ac04;
    if (iVar5 < (int)(uint)DAT_ram_3006adb4) {
      fVar19 = 0.0;
      if (-1 < iVar2) {
        fVar19 = (float)*(ushort *)((iVar2 * 0xc + iVar8) * 2 + 0x3006ae54) / fVar1;
      }
      if (((iVar14 == 0xff) ||
          (pcVar9 = (char *)nc_effect_parameter_name(iVar14,uVar17,iVar8,1), pcVar9 == (char *)0x0)) ||
         (pcVar11 = pcVar9, *pcVar9 == '\0')) {
        pcVar9 = (char *)FUN_ram_4002c834(0x74);
        if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) {
          pcVar9 = &DAT_ram_40095268;
        }
        FUN_ram_400055da(local_88,8,pcVar9,iVar8 + 1);
        pcVar9 = local_88;
        pcVar11 = pcVar9;
      }
      for (; *pcVar9 != '\0'; pcVar9 = pcVar9 + 1) {
        if (*pcVar9 == '\n') goto LAB_ram_4001d3d6;
      }
      if (*pcVar11 != '\0') {
        FUN_ram_400055da(acStack_80,0x18,&DAT_ram_4009526c);
        pcVar11 = acStack_80;
      }
LAB_ram_4001d3d6:
      FUN_ram_40017936(*puVar16,0,1);
      FUN_ram_400177a6(*puVar16,iVar18,pcVar11);
      FUN_ram_4001792e(iVar18,uVar6);
      FUN_ram_40017936(*puVar15,0,1);
      FUN_ram_4001c84a(fVar19,iVar4,uVar17,iVar8,auStack_68);
      FUN_ram_400177a6(*puVar15,iVar3,auStack_68);
      uVar10 = uVar7;
    }
    else {
      FUN_ram_40017936(*puVar16,0,0);
      FUN_ram_40017936(*puVar15,0,0);
      FUN_ram_4001792e(iVar18,0);
      uVar10 = 0;
    }
    FUN_ram_4001792e(iVar3,uVar10);
    iVar5 = iVar5 + 1;
    puVar16 = puVar16 + 1;
    puVar15 = puVar15 + 1;
    if (iVar5 == 5) {
      FUN_ram_4001b2b2();
      for (iVar4 = 0; iVar4 < (int)(uint)DAT_ram_3006adb4; iVar4 = iVar4 + 1) {
        if (iVar4 < 5) {
          FUN_ram_4001b3d0(iVar4);
        }
      }
      FUN_ram_4001aa76();
      iVar4 = FUN_ram_4001a816();
      if ((iVar4 <= _DAT_ram_3006ad80) && ((int)(uint)DAT_ram_3006adb4 <= _DAT_ram_3006ad80 - iVar4)
         ) {
        FUN_ram_4001c47e(iVar4 + (uint)DAT_ram_3006adb4 + -1);
        return;
      }
      FUN_ram_4001bad8();
      return;
    }
  } while( true );
}


/* NanoCore 1.11, address 0x4001d458.
 * REA evidence: ev_da9d1587a66dddc6a780da8f14e4e6a87772cc0cdd5917347ddb864c901e2e3c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001d458(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [36];
  
  if (param_1 < 5) {
    if ((((int)param_1 < (int)(uint)DAT_ram_3006adb4) && (_DAT_ram_3006aa7c != 0)) &&
       (iVar1 = FUN_ram_4001a8d0(), -1 < iVar1)) {
      iVar2 = FUN_ram_4001b1bc(param_1);
      FUN_ram_4001c84a((float)*(ushort *)((iVar2 + iVar1 * 0xc) * 2 + 0x3006ae54) / DAT_ram_40094e80
                       ,_DAT_ram_3006aa7c,*(undefined1 *)(iVar1 + 0x3006af14),iVar2,auStack_38);
      FUN_ram_400177a6(*(undefined4 *)(&DAT_ram_3006aca4 + param_1 * 4),param_1 * 0x20 + 0x3006ac04,
                       auStack_38);
      if (param_2 != 0) {
        iVar1 = FUN_ram_4001a816();
        *(bool *)(param_1 + 0x3006abfc) = iVar1 + param_1 == _DAT_ram_3006ad80;
      }
    }
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x4001d526.
 * REA evidence: ev_4f837ad31a1b6231184d991cbd65da5810cf84f64f91dc88773077668eed3dd3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001d526(void)

{
  ushort uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  
  if (_DAT_ram_3006b130 != 0) {
    FUN_ram_4004c61a();
    _DAT_ram_3006b130 = 0;
  }
  fVar2 = DAT_ram_40094e80;
  iVar9 = 0x3006ae54;
  pcVar8 = &DAT_ram_3006b134;
  iVar5 = 0;
  do {
    uVar3 = 0;
    pcVar7 = pcVar8;
    do {
      if (*pcVar7 != '\0') {
        uVar1 = *(ushort *)(iVar9 + uVar3 * 2);
        *pcVar7 = '\0';
        FUN_ram_400231a4((float)uVar1 / fVar2,iVar5);
        FUN_ram_4001b144(iVar5,uVar3 & 0xff);
      }
      uVar3 = uVar3 + 1;
      pcVar7 = pcVar7 + 1;
    } while (uVar3 != 0xc);
    iVar5 = iVar5 + 1;
    iVar9 = iVar9 + 0x18;
    pcVar8 = pcVar8 + 0xc;
  } while (iVar5 != 8);
  uVar3 = (uint)DAT_ram_3006b194;
  if ((uVar3 != 0) && (DAT_ram_3006b194 = 0, DAT_ram_3006aa2a != '\0')) {
    puVar6 = _DAT_ram_3006aa7c;
    if (_DAT_ram_3006aa7c == (undefined *)0x0) {
      puVar6 = &DAT_ram_40095bb8;
    }
    iVar5 = FUN_ram_4001a8d0(puVar6);
    uVar4 = 0;
    if (-1 < iVar5) {
      for (; (int)uVar4 < (int)(uint)DAT_ram_3006adb4; uVar4 = uVar4 + 1) {
        if ((1 << (uVar4 & 0x1f) & uVar3) != 0) {
          FUN_ram_4001d458(uVar4,0);
        }
      }
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4001d622.
 * REA evidence: ev_a3bc6b58816f58c8c863a600a4aa2dd5daca21a81214a7023af3c7307d53217c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001d622(uint param_1,int param_2)

{
  if (param_1 == 0) {
    param_2 = -1;
  }
  if ((DAT_ram_3006aa74 == param_1) && (_DAT_ram_3006aa78 == param_2)) {
    return;
  }
  if (param_1 == 0) {
    FUN_ram_4001d526();
  }
  DAT_ram_3006aa74 = (byte)param_1;
  _DAT_ram_3006aa78 = param_2;
  FUN_ram_4001bad8();
  return;
}


/* NanoCore 1.11, address 0x4001d676.
 * REA evidence: ev_190754e0bdc7ceaa89bb0f2d0b2f8e822601d25ec826c9c050fb2dc51036a1e2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001d676(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (DAT_ram_3006b194 == '\0') {
    puVar1 = &DAT_ram_3006b134;
    do {
      iVar2 = 0;
      do {
        if (puVar1[iVar2] != '\0') goto LAB_ram_4001d6c8;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0xc);
      puVar1 = puVar1 + 0xc;
      if (puVar1 == &DAT_ram_3006b194) {
        if (_DAT_ram_3006b130 == 0) {
          return;
        }
        FUN_ram_4004c61a();
        _DAT_ram_3006b130 = 0;
        return;
      }
    } while( true );
  }
LAB_ram_4001d6c8:
  FUN_ram_4001d526();
  return;
}


/* NanoCore 1.11, address 0x4001d6b2.
 * REA evidence: ev_5a35a6a093454365c50784e75ec2b1cb6cadae2fb86e940a3a76312c30d4ca26
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001d6b2(void)

{
  FUN_ram_4004c61a();
  _DAT_ram_3006b130 = 0;
  return;
}


/* NanoCore 1.11, address 0x4001d6cc.
 * REA evidence: ev_e6307b8e1bb537e84be97e6b269ff20c85a1bc4616da167424fa76c334c70181
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001d6cc(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iStack_50;
  byte bStack_4c;
  int iStack_48;
  undefined4 local_44 [7];
  
  iVar3 = FUN_ram_4000cac6(0,&iStack_50);
  uVar2 = DAT_ram_30049dc0;
  if (iVar3 == 0) {
    if (iStack_50 != _DAT_ram_3006a798) {
      _DAT_ram_3006a798 = iStack_50;
      FUN_ram_4001b904();
      uVar6 = (uint)bStack_4c;
      if ((iStack_48 == 0) && (uVar6 == DAT_ram_30049db8)) {
        DAT_ram_30049db4 = uVar6;
      }
      if (uVar6 == uVar2) {
        DAT_ram_30049dc0 = 0xffffffff;
      }
      else if ((uVar2 < 0x1e) && (*(char *)(uVar2 + 0x3006aa04) != '\0')) {
        DAT_ram_30049dbc = uVar2;
      }
    }
  }
  iVar3 = FUN_ram_4000cac6(2,&iStack_50);
  uVar2 = DAT_ram_30049dd4;
  if (iVar3 == 0) {
    if (iStack_50 != _DAT_ram_3006adb8) {
      _DAT_ram_3006adb8 = iStack_50;
      FUN_ram_4001abb8();
      uVar6 = (uint)bStack_4c;
      if ((iStack_48 == 0) && (uVar6 - 0x1e == DAT_ram_30049dcc)) {
        DAT_ram_30049dc8 = uVar6;
      }
      if (uVar6 == uVar2) {
        DAT_ram_30049dd4 = 0xffffffff;
        iVar3 = FUN_ram_4001a8d0(&DAT_ram_40095018);
        fVar1 = DAT_ram_40094e80;
        local_44[3] = 0;
        local_44[4] = 0;
        if (-1 < iVar3) {
          puVar7 = local_44;
          local_44[0] = DAT_ram_40094634;
          local_44[1] = DAT_ram_40094634;
          local_44[2] = _DAT_ram_40094638;
          uVar2 = 0;
          do {
            uVar6 = uVar2 & 0xff;
            if (iVar3 < 8) {
              iVar4 = FUN_ram_4001b0cc(*puVar7,iVar3);
              *(short *)(iVar3 * 0x18 + 0x3006ae54 + uVar2 * 2) = (short)iVar4;
              FUN_ram_40022f42((float)iVar4 / fVar1,iVar3,uVar6);
            }
            uVar2 = uVar2 + 1;
            FUN_ram_4001b144(iVar3,uVar6);
            puVar7 = puVar7 + 1;
          } while (uVar2 != 3);
          if (((DAT_ram_3006aa2a != '\0') && (_DAT_ram_3006aa7c != 0)) &&
             (iVar3 = FUN_ram_400051f8(_DAT_ram_3006aa7c,&DAT_ram_40095018,0x10), iVar3 == 0)) {
            FUN_ram_4001b2b2();
            for (iVar3 = 0; iVar3 < (int)(uint)DAT_ram_3006adb4; iVar3 = iVar3 + 1) {
              FUN_ram_4001d458(iVar3,1);
            }
          }
        }
      }
      else if ((uVar2 - 0x1e < 8) && (*(char *)(uVar2 + 0x3006ae26) != '\0')) {
        DAT_ram_30049dd0 = uVar2 - 0x1e;
      }
    }
  }
  iVar3 = FUN_ram_4000cac6(1,&iStack_50);
  uVar2 = DAT_ram_30049de4;
  if (iVar3 == 0) {
    if (iStack_50 != _DAT_ram_3006af1c) {
      _DAT_ram_3006af1c = iStack_50;
      FUN_ram_4001ad0e();
      uVar6 = (uint)bStack_4c;
      if ((iStack_48 == 0) && (uVar6 == DAT_ram_30049ddc)) {
        DAT_ram_30049dd8 = uVar6;
      }
      if (uVar6 == uVar2) {
        DAT_ram_30049de4 = 0xffffffff;
      }
      else if ((uVar2 < 0x1e) && (*(char *)(uVar2 + 0x3006b108) != '\0')) {
        DAT_ram_30049de0 = uVar2;
      }
    }
  }
  uVar2 = DAT_ram_30049db8;
  uVar5 = FUN_ram_40091822();
  iVar3 = FUN_ram_4001c41a(uVar5,_DAT_ram_3006aa00,&DAT_ram_30049dbc,0x1e,0x3006aa04,
                           FUN_ram_4001b904);
  if ((iVar3 != 0) && (DAT_ram_30049db8 != uVar2)) {
    uVar2 = FUN_ram_4000bb4a();
    if (uVar2 == (DAT_ram_30049db8 & 0xff)) {
      DAT_ram_30049db4 = DAT_ram_30049db8;
    }
  }
  uVar5 = FUN_ram_40091822();
  FUN_ram_4001c41a(uVar5,_DAT_ram_3006ae40,&DAT_ram_30049dd0,8,0x3006ae44,FUN_ram_4001abb8);
  uVar2 = DAT_ram_30049ddc;
  uVar5 = FUN_ram_40091828();
  iVar3 = FUN_ram_4001c41a(uVar5,_DAT_ram_3006b104,&DAT_ram_30049de0,0x1e,0x3006b108,
                           FUN_ram_4001ad0e);
  if ((iVar3 != 0) && (DAT_ram_30049ddc != uVar2)) {
    DAT_ram_30049dd8 = DAT_ram_30049ddc;
  }
  if ((DAT_ram_3006aa2a != '\0') && (_DAT_ram_3006aa7c != 0)) {
    FUN_ram_4001bd9a();
  }
  return;
}


/* NanoCore 1.11, address 0x4001d9ec.
 * REA evidence: ev_7593fd288e4bd8404a4266bc07ee1c4fd7b1639f04db9e0d34f680ecc1ae7e29
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001d9ec(undefined4 param_1)

{
  FUN_ram_4001c1ce(param_1,0);
  return;
}


/* NanoCore 1.11, address 0x4001d9f2.
 * REA evidence: ev_9da7782e333cb48cfa1f4f05194316435dbe331de53259c65bb8c22e5e912a97
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4001d9f2(int param_1)

{
  int iVar1;
  
  if ((param_1 - 0x1eU & 0xff) < 8) {
    if (DAT_ram_3006adbc == '\0') {
      FUN_ram_4001abb8();
    }
    if (*(char *)(param_1 + 0x3006ae26) == '\0') {
      iVar1 = FUN_ram_40091822();
      if (iVar1 != _DAT_ram_3006ae40) {
        FUN_ram_4001abb8();
      }
      if (*(char *)(param_1 + 0x3006ae26) == '\0') {
        return 0xffffffff;
      }
    }
    iVar1 = FUN_ram_4000be24(param_1);
    if (iVar1 == 0) {
      DAT_ram_30049dd0 = param_1 - 0x1eU;
      DAT_ram_30049dd4 = param_1;
      return 0;
    }
    FUN_ram_4001abb8();
    DAT_ram_30049dd0 = DAT_ram_30049dcc;
  }
  return 0xffffffff;
}


/* NanoCore 1.11, address 0x4001da88.
 * REA evidence: ev_f2672f3b5f0d85546537ea60bd1f735e8868bc1142b6f8a71e65c23d529eda66
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001da88(void)

{
  uint uVar1;
  
  uVar1 = DAT_ram_30049db4;
  if (0x1d < DAT_ram_30049db4) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4001da9a.
 * REA evidence: ev_936d603c843339b9c20675aa8cff98ffc424ab1f53202cd817c941fab3bf24f6
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001da9a(void)

{
  uint uVar1;
  
  uVar1 = DAT_ram_30049dd8;
  if (0x1d < DAT_ram_30049dd8) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4001daac.
 * REA evidence: ev_0a7bf81a659424e08db9198eae60a4a20d22f39740e1fcb05ea6df2d6e560181
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001daac(void)

{
  int iVar1;
  
  iVar1 = DAT_ram_30049dc8;
  if (7 < DAT_ram_30049dc8 - 0x1eU) {
    iVar1 = -1;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4001dac2.
 * REA evidence: ev_0afc20feac98c228f2b0434c55839ef6331355ba5ed6ff007a749189481c8693
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001dac2(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_4000bb4a();
  if (0x1d < uVar1) {
    if (DAT_ram_3006a79c == '\0') {
      FUN_ram_4001b904();
    }
    uVar1 = DAT_ram_30049db8;
    if (0x1d < DAT_ram_30049db8) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4001daf4.
 * REA evidence: ev_c9e758b3c45cf1dbfedd1f94aa6a1453d7b7909c16e8c89c6448e6fbbde05811
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

uint FUN_ram_4001daf4(void)

{
  uint uVar1;
  undefined1 auStack_24 [16];
  ushort uStack_14;
  
  FUN_ram_4008c328(auStack_24);
  uVar1 = (uint)uStack_14;
  if (0x1d < uStack_14) {
    if (DAT_ram_3006af20 == '\0') {
      FUN_ram_4001ad0e();
    }
    uVar1 = DAT_ram_30049ddc;
    if (0x1d < DAT_ram_30049ddc) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* NanoCore 1.11, address 0x4001db2c.
 * REA evidence: ev_a8492ddbfc68ca4aa9462d0a9f13fd84119f6732f246c73642b07be324f03b40
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4001db2c(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4000be5c();
  if (7 < (iVar1 - 0x1eU & 0xff)) {
    if (DAT_ram_3006adbc == '\0') {
      FUN_ram_4001abb8();
    }
    iVar1 = -1;
    if (DAT_ram_30049dcc < 8) {
      iVar1 = DAT_ram_30049dcc + 0x1e;
    }
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x4001db6a.
 * REA evidence: ev_6115014a149c0b6562a3e28b55df13f895a0ff5a800b1e2c08098e7973a22e96
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4001db6a(uint param_1,uint param_2,int param_3)

{
  DAT_ram_30049db4 = 0xffffffff;
  if (param_1 < 0x1e) {
    DAT_ram_30049db4 = param_1;
  }
  DAT_ram_30049dd8 = 0xffffffff;
  if (param_2 < 0x1e) {
    DAT_ram_30049dd8 = param_2;
  }
  DAT_ram_30049dc8 = -1;
  if ((param_3 - 0x1eU & 0xff) < 8) {
    DAT_ram_30049dc8 = param_3;
  }
  return;
}


/* NanoCore 1.11, address 0x4001dbb0.
 * REA evidence: ev_11c68e8492927d0f23a2c3864ba3f84982090aea6a4fc91639ce864310456918
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4001dbb0(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined3 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int aiStack_4c [6];
  
  DAT_ram_3006aa2a = 0;
  _DAT_ram_3006aa70 = 0;
  _DAT_ram_3006aa2c = 0;
  _DAT_ram_3006ada8 = 0;
  _DAT_ram_3006aa7c = 0;
  _DAT_ram_3006ad80 = 0;
  DAT_ram_3006aa74 = 0;
  _DAT_ram_3006aa78 = 0xffffffff;
  DAT_ram_30049dc4 = 0xff;
  _DAT_ram_3006aac0 = 0;
  _DAT_ram_3006ad78 = 0;
  _DAT_ram_3006adb0 = 0;
  _DAT_ram_3006b19c = 0;
  _DAT_ram_3006b198 = 0;
  FUN_ram_4000504c(&DAT_ram_3006aba8,0,0x14);
  FUN_ram_4000504c(0x3006ae54,0,0xc0);
  FUN_ram_4000504c(0x3006ae4c,1,8);
  FUN_ram_4000504c(0x3006af14,0,8);
  DAT_ram_3006af1a = 6;
  FUN_ram_40022d76();
  if (_DAT_ram_3006b200 != 0) {
    FUN_ram_4004c61a();
    _DAT_ram_3006b200 = 0;
  }
  if (_DAT_ram_3006b204 != 0) {
    FUN_ram_4004c61a();
    _DAT_ram_3006b204 = 0;
  }
  if (_DAT_ram_3006b130 != 0) {
    FUN_ram_4004c61a();
    _DAT_ram_3006b130 = 0;
  }
  DAT_ram_30049dc0 = 0xffffffff;
  DAT_ram_30049dd4 = 0xffffffff;
  DAT_ram_30049de4 = 0xffffffff;
  iVar4 = FUN_ram_4000cac6(0,aiStack_4c);
  if (iVar4 == 0) {
    _DAT_ram_3006a798 = aiStack_4c[0];
  }
  iVar4 = FUN_ram_4000cac6(2,aiStack_4c);
  if (iVar4 == 0) {
    _DAT_ram_3006adb8 = aiStack_4c[0];
  }
  iVar4 = FUN_ram_4000cac6(1,aiStack_4c);
  if (iVar4 == 0) {
    _DAT_ram_3006af1c = aiStack_4c[0];
  }
  FUN_ram_4000504c(&DAT_ram_3006b1a0,0,0x60);
  FUN_ram_4000504c(&DAT_ram_3006b134,0,0x60);
  DAT_ram_3006b194 = 0;
  thunk_FUN_ram_40024cf8(0x3006b128);
  FUN_ram_4000504c(0x3006abfc,0xff,5);
  DAT_ram_3006ad4c = 0;
  DAT_ram_3006ad74 = 5;
  DAT_ram_3006adb4 = 5;
  DAT_ram_3006ad7c = 0;
  FUN_ram_40016c5e(0x3006aa30,0x40,s_bg_params_ram_40095270);
  FUN_ram_40016c5e(0x3006ad0c,0x40,s_distortion_ram_4009565c + 8);
  FUN_ram_40016c5e(0x3006accc,0x40,s_bat_off_ram_4009728c + 4);
  FUN_ram_40016c5e(0x3006abbc,0x40,&DAT_ram_40094f94);
  _DAT_ram_3006aa70 = FUN_ram_40043a8c(param_1);
  FUN_ram_40044faa(_DAT_ram_3006aa70,0x140,0xf0);
  FUN_ram_400488f8(_DAT_ram_3006aa70,0xff,0);
  FUN_ram_40048936(_DAT_ram_3006aa70,0,0);
  FUN_ram_40043fd6(_DAT_ram_3006aa70,1);
  _DAT_ram_3006aa2c = FUN_ram_40056f7e(_DAT_ram_3006aa70);
  FUN_ram_40057550(_DAT_ram_3006aa2c,0xb);
  FUN_ram_40044f1c(_DAT_ram_3006aa2c,0,0);
  FUN_ram_40044faa(_DAT_ram_3006aa2c,0x140,0xf0);
  FUN_ram_40043fd6(_DAT_ram_3006aa2c,1);
  FUN_ram_40043aac(_DAT_ram_3006aa2c,0x10);
  FUN_ram_40043aac(_DAT_ram_3006aa2c,2);
  _DAT_ram_3006aac8 = FUN_ram_40056f7e(_DAT_ram_3006aa70);
  FUN_ram_40057550(_DAT_ram_3006aac8,0xb);
  FUN_ram_40044f1c(_DAT_ram_3006aac8,8,8);
  FUN_ram_40044faa(_DAT_ram_3006aac8,0x32,0x32);
  _DAT_ram_3006ad84 = FUN_ram_40057bac(_DAT_ram_3006aa70);
  FUN_ram_4005826c(_DAT_ram_3006ad84,0);
  FUN_ram_400489f6(_DAT_ram_3006ad84,1,0);
  FUN_ram_400487fc(_DAT_ram_3006ad84,0xc1,0);
  FUN_ram_40044faa(_DAT_ram_3006ad84,0x200007d1);
  FUN_ram_40045fc6(_DAT_ram_3006ad84,_DAT_ram_3006aac8,0x14,8,0);
  FUN_ram_4001761e(_DAT_ram_3006aa70,_DAT_ram_3006ad84,&DAT_ram_3006ad88,1);
  piVar1 = (int *)&DAT_ram_3006ad88;
  do {
    if (*piVar1 != 0) {
      FUN_ram_4005826c(*piVar1,0);
      FUN_ram_400487fc(*piVar1,0xc1,0);
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != (int *)&DAT_ram_3006ada8);
  _DAT_ram_3006ada8 = FUN_ram_40043a8c(_DAT_ram_3006aa70);
  FUN_ram_400488f8(_DAT_ram_3006ada8,0,0);
  FUN_ram_40048936(_DAT_ram_3006ada8,0,0);
  FUN_ram_40048946(_DAT_ram_3006ada8,0,0);
  FUN_ram_40048a06(_DAT_ram_3006ada8,0,0);
  FUN_ram_40043aac(_DAT_ram_3006ada8,0x10);
  iVar10 = 0x3006aaf4;
  FUN_ram_40043aac(_DAT_ram_3006ada8,2);
  FUN_ram_40043fd6(_DAT_ram_3006ada8,1);
  FUN_ram_4001aeec();
  iVar12 = 0x3006ac04;
  _DAT_ram_3006aac4 = FUN_ram_40056f7e(_DAT_ram_3006aa70);
  FUN_ram_40057550(_DAT_ram_3006aac4,0xb);
  FUN_ram_40044faa(_DAT_ram_3006aac4,0x2d,0x17);
  FUN_ram_40044f1c(_DAT_ram_3006aac4,0x10b,0x15);
  iVar4 = 0;
  _DAT_ram_3006ad50 = FUN_ram_40057bac(_DAT_ram_3006aa70);
  FUN_ram_4005826c(_DAT_ram_3006ad50,1);
  FUN_ram_40044faa(_DAT_ram_3006ad50,0x200007d1);
  FUN_ram_4004502e(_DAT_ram_3006ad50,5,0,0xfffffff8);
  FUN_ram_4001761e(_DAT_ram_3006aa70,_DAT_ram_3006ad50,0x3006ad54,2);
  puVar2 = (undefined4 *)&DAT_ram_3006aba8;
  puVar6 = (undefined4 *)&DAT_ram_3006ab94;
  puVar7 = (undefined4 *)&DAT_ram_3006aca4;
  puVar8 = (undefined4 *)&DAT_ram_3006acb8;
  do {
    uVar5 = FUN_ram_40056f7e(_DAT_ram_3006aa70);
    *puVar8 = uVar5;
    FUN_ram_40057550(uVar5,9);
    FUN_ram_40056f9e(*puVar8,1);
    iVar9 = iVar4 * 0x3c + 0x14;
    FUN_ram_40044f1c(*puVar8,iVar9,0x74);
    FUN_ram_40044faa(*puVar8,0x28,0x28);
    uVar5 = _DAT_ram_3006aa70;
    *(undefined4 *)(iVar4 * 4 + 0x3006aae0) = 0x74;
    *(int *)(iVar4 * 4 + 0x3006aacc) = iVar9;
    uVar5 = FUN_ram_40057bac(uVar5);
    *puVar6 = uVar5;
    FUN_ram_4005826c(uVar5,0);
    FUN_ram_400489f6(*puVar6,2,0);
    uVar5 = *puVar6;
    uVar3 = FUN_ram_40016c6c();
    FUN_ram_400489b6(uVar5,uVar3,0);
    aiStack_4c[0] = FUN_ram_40047a70(*puVar6,0,0x5a);
    iVar11 = *(int *)(aiStack_4c[0] + 0xc) << 1;
    FUN_ram_40044faa(*puVar6,0x3c,iVar11);
    FUN_ram_40045fc6(*puVar6,*puVar8,0xb,0,0xfffffffe);
    FUN_ram_4001761e(_DAT_ram_3006aa70,*puVar6,iVar10,2);
    iVar4 = iVar4 + 1;
    iVar10 = iVar10 + 0x20;
    uVar5 = FUN_ram_40057bac(_DAT_ram_3006aa70);
    *puVar7 = uVar5;
    FUN_ram_4005826c(uVar5,4);
    FUN_ram_400489f6(*puVar7,2,0);
    uVar5 = *puVar7;
    uVar3 = FUN_ram_40016c6c();
    FUN_ram_400489b6(uVar5,uVar3,0);
    FUN_ram_40044faa(*puVar7,0x48,iVar11);
    FUN_ram_40045fc6(*puVar7,*puVar8,0xe,0,4);
    FUN_ram_4001761e(_DAT_ram_3006aa70,*puVar7,iVar12,2);
    iVar12 = iVar12 + 0x20;
    uVar5 = FUN_ram_40043a8c(_DAT_ram_3006aa70);
    *puVar2 = uVar5;
    FUN_ram_400488f8(uVar5,0,0);
    FUN_ram_40048936(*puVar2,0,0);
    FUN_ram_40048946(*puVar2,0,0);
    FUN_ram_40048a06(*puVar2,0,0);
    FUN_ram_40044f1c(*puVar2,iVar9,0x74);
    FUN_ram_40044faa(*puVar2,0x28,0x28);
    FUN_ram_40043aac(*puVar2,0x10);
    FUN_ram_40043aac(*puVar2,2);
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  } while (iVar4 != 5);
  FUN_ram_4001aa76();
  FUN_ram_4001c75e();
  _DAT_ram_3006b204 = FUN_ram_4004c5b4(FUN_ram_4001d6cc,0xfa,0);
  return;
}


