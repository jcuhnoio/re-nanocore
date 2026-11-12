/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40034000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x40034040.
 * REA evidence: ev_61d7f41e184c844159a24de99703cfe85abd8f27e497eaf07732fdc54757e861
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40034040(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  if ((((*param_2 == 0x32) && (param_2[1] == 0x32)) && (param_2[2] == 0x32)) && (param_2[3] == 0x32)
     ) {
    FUN_ram_4003905c();
    return;
  }
  FUN_ram_400390b6(*param_1,param_3);
  return;
}


/* NanoCore 1.11, address 0x4003406a.
 * REA evidence: ev_d0a34206b9a7e600690b5c34591d6d7c6c42c963d0d6f85dcfb8adb55781d6e7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int * FUN_ram_4003406a(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_ram_30049fe8;
  do {
    if (*piVar1 == param_1) {
      return piVar1;
    }
    piVar1 = piVar1 + 2;
  } while (piVar1 != &DAT_ram_3004a108);
  return (int *)0x0;
}


/* NanoCore 1.11, address 0x4003408c.
 * REA evidence: ev_da6a51fbff3fb8dbb524971b4526f24e404d8e51954762791d7e07a008a240d9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003408c(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = *(uint *)(param_2 + 0x14);
  uVar5 = *(uint *)(*(int *)(param_1 + 0x438) + 4);
  if (uVar8 < uVar5) {
    uVar7 = *(uint *)(param_2 + 0x18);
    uVar6 = *(uint *)(*(int *)(param_1 + 0x438) + 0x14);
    uVar2 = 0;
    if (uVar7 < uVar6) {
      if (*(int *)(param_2 + 0x40) != 0) {
        uVar3 = *(uint *)(param_2 + 0x38);
        uVar9 = *(uint *)(param_2 + 0x44);
        if (uVar3 <= uVar9) {
          return 0;
        }
        uVar4 = *(uint *)(param_2 + 0x3c);
        uVar1 = *(uint *)(param_2 + 0x48);
        if (uVar4 <= uVar1) {
          return 0;
        }
        if (uVar3 < *(int *)(param_2 + 0x4c) + uVar9) {
          *(uint *)(param_2 + 0x4c) = uVar3 - uVar9;
        }
        if (uVar4 < *(int *)(param_2 + 0x50) + uVar1) {
          *(uint *)(param_2 + 0x50) = uVar4 - uVar1;
        }
      }
      if (uVar5 < *(int *)(param_2 + 0xc) + uVar8) {
        *(uint *)(param_2 + 0xc) = uVar5 - uVar8;
      }
      uVar2 = 1;
      if (uVar6 < *(int *)(param_2 + 0x10) + uVar7) {
        *(uint *)(param_2 + 0x10) = uVar6 - uVar7;
        return uVar2;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* NanoCore 1.11, address 0x400340fe.
 * REA evidence: ev_c882dd2765969fa4d03b72977240990344133e4f5e3438527125830dc6f21add
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400340fe(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  
  uVar4 = *(uint *)(param_2 + 0x54);
  if (*(int *)(param_2 + 0x1c) != 1) {
    return 0xffffffea;
  }
  uVar10 = *(uint *)(param_2 + 0x38);
  uVar13 = *(uint *)(param_2 + 0x3c);
  if (*(int *)(param_2 + 0xc) == 0) {
    *(uint *)(param_2 + 0xc) = uVar10;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    *(uint *)(param_2 + 0x10) = uVar13;
  }
  iVar2 = FUN_ram_4003406a(uVar4);
  if (iVar2 == 0) {
    return 0xffffffea;
  }
  uVar5 = *(uint *)(iVar2 + 4);
  if ((uVar5 & 1) != 0) {
    iVar2 = *(int *)(param_2 + 0x2c);
    iVar16 = *(int *)(param_2 + 0x40);
    iVar14 = *(int *)(param_2 + 0x44);
    iVar6 = *(int *)(param_2 + 0x48);
    iVar7 = *(int *)(param_2 + 0x20);
    if (uVar4 < 10) {
      if (uVar4 < 8) {
        if (iVar16 != 0) {
          iVar6 = iVar2 * iVar6 + iVar14 * 4;
          goto LAB_ram_400341d2;
        }
      }
      else if (iVar16 != 0) {
        iVar6 = iVar2 * iVar6 + iVar14 * 3;
LAB_ram_400341d2:
        iVar7 = iVar7 + iVar6;
        uVar10 = *(uint *)(param_2 + 0x4c);
        uVar13 = *(uint *)(param_2 + 0x50);
      }
    }
    else {
      if (9 < uVar4 - 10) {
        return 0;
      }
      if (iVar16 != 0) {
        iVar6 = iVar2 * iVar6 + iVar14 * 2;
        goto LAB_ram_400341d2;
      }
    }
    FUN_ram_40038f6c(*param_1,uVar10,uVar13,uVar4,iVar2,*(undefined4 *)(param_2 + 0x30),iVar7,
                     *(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),
                     *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18));
    goto LAB_ram_400341f0;
  }
  if ((uVar5 & 4) != 0) {
    uVar11 = *(uint *)(param_2 + 0x40);
    uVar1 = *(uint *)(param_2 + 0x44);
    uVar15 = *(uint *)(param_2 + 0x48);
    uVar5 = *(uint *)(param_2 + 0x4c);
    uVar9 = *(uint *)(param_2 + 0x50);
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    uVar8 = *(undefined4 *)(param_2 + 0x10);
    uVar12 = *(uint *)(param_2 + 0x58) & 3;
    if (uVar4 == 0x32) {
      if (uVar11 == 0) {
LAB_ram_4003439c:
        uVar4 = 0;
        uVar9 = uVar13;
        uVar15 = uVar4;
        uVar5 = uVar10;
      }
      else {
        uVar11 = uVar1 & 0x3e;
        uVar4 = uVar15 & 0x1f;
        uVar13 = uVar9;
        uVar15 = uVar4;
      }
    }
    else if (uVar4 < 0x33) {
      if (uVar4 == 0x30) {
        if (uVar11 == 0) goto LAB_ram_400342a2;
        uVar11 = uVar1 & 0x3e;
        uVar4 = uVar15 & 0x1e;
        uVar15 = uVar15 & 0x3f;
LAB_ram_4003434e:
        uVar15 = uVar15 >> 1;
        uVar13 = uVar9;
        uVar10 = uVar5;
      }
      else {
        if (uVar4 != 0x31) {
          return 0;
        }
        if (uVar11 != 0) {
          uVar11 = uVar1 & 0x7e;
          uVar4 = uVar15 & 0xe;
          uVar15 = uVar15 & 0x1f;
          goto LAB_ram_4003434e;
        }
LAB_ram_400342a2:
        uVar15 = 0;
        uVar4 = 0;
      }
      uVar9 = uVar13 & 0xfffffffe;
      uVar13 = uVar13 >> 1;
      uVar5 = uVar10;
    }
    else {
      if (uVar4 != 0x33) {
        return 0;
      }
      if (uVar11 == 0) goto LAB_ram_4003439c;
      uVar11 = uVar1 & 0x7e;
      uVar4 = uVar15 & 0xf;
      uVar13 = uVar9;
      uVar15 = uVar4;
    }
    uVar10 = uVar5 >> 1;
    FUN_ram_40038f6c(*param_1,uVar5 & 0xfffffffe,uVar9);
    FUN_ram_4003901c(*param_1,uVar11,uVar4,uVar11,uVar15);
    if ((param_1[0x1c] & 3) != uVar12) {
      FUN_ram_40034040(param_1,param_1 + 0xcc,uVar12);
    }
    FUN_ram_40039218(*param_1,uVar5 & 0xfffffffe,uVar9,uVar3,uVar8,0);
    goto LAB_ram_40034304;
  }
  if ((uVar5 & 8) == 0) {
    if ((uVar5 & 0x10) == 0) {
      return 0;
    }
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    uVar8 = *(undefined4 *)(param_2 + 0x10);
    iVar2 = *(int *)(param_2 + 0x20);
    uVar5 = *(uint *)(param_2 + 0x58) & 3;
    if (3 < uVar4 - 0x26) {
      return 0;
    }
    uVar15 = uVar10;
    if (*(int *)(param_2 + 0x40) != 0) {
      iVar2 = iVar2 + *(int *)(param_2 + 0x48) * *(int *)(param_2 + 0x2c) +
              (*(uint *)(param_2 + 0x44) & 0x7ffffffe) * 2;
      uVar13 = *(uint *)(param_2 + 0x50);
      uVar15 = *(uint *)(param_2 + 0x4c);
    }
    FUN_ram_40038f6c(*param_1,uVar15 & 0xfffffffe,uVar13,uVar4,*(int *)(param_2 + 0x2c),
                     *(undefined4 *)(param_2 + 0x30),iVar2,*(undefined4 *)(param_2 + 0x24),
                     *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x14),
                     *(undefined4 *)(param_2 + 0x18));
    uVar10 = uVar15 >> 1;
    if ((param_1[0x1c] & 3) != uVar5) {
      FUN_ram_40034040(param_1,param_1 + 0xcc,uVar5);
    }
    FUN_ram_40039218(*param_1,uVar15 & 0xfffffffe,uVar13,uVar3,uVar8,0);
    goto LAB_ram_40034304;
  }
  iVar7 = *(int *)(param_2 + 0x40);
  uVar5 = *(uint *)(param_2 + 0x4c);
  uVar15 = *(uint *)(param_2 + 0x50);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar8 = *(undefined4 *)(param_2 + 0x10);
  uVar9 = *(uint *)(param_2 + 0x58);
  iVar2 = 1;
  iVar6 = iVar2;
  switch(uVar4) {
  case 0x20:
    if (iVar7 == 0) {
LAB_ram_40034442:
      uVar5 = uVar10 & 0xfffffffe;
      uVar15 = uVar13 & 0xfffffffe;
    }
    else {
      uVar5 = uVar5 & 0xfffffffe;
      uVar15 = uVar15 & 0xfffffffe;
    }
    break;
  case 0x21:
  case 0x22:
    if (iVar7 == 0) goto LAB_ram_40034442;
    uVar5 = uVar5 & 0xfffffffe;
    uVar15 = uVar15 & 0xfffffffe;
    break;
  case 0x23:
    if (iVar7 == 0) {
LAB_ram_400344f8:
      uVar5 = uVar10 & 0xfffffffe;
      uVar15 = uVar13;
    }
    else {
      uVar5 = uVar5 & 0xfffffffe;
    }
    goto LAB_ram_4003451c;
  case 0x24:
  case 0x25:
    if (iVar7 == 0) goto LAB_ram_400344f8;
    uVar5 = uVar5 & 0xfffffffe;
LAB_ram_4003451c:
    uVar10 = uVar5 >> 1;
    uVar13 = uVar15;
    goto LAB_ram_40034476;
  default:
    goto LAB_ram_40034128;
  case 0x2a:
    uVar4 = uVar10;
    uVar1 = uVar13;
    if (iVar7 != 0) {
      uVar4 = uVar5;
      uVar1 = uVar15;
    }
    goto LAB_ram_400344a8;
  case 0x2b:
    if (iVar7 == 0) {
      uVar5 = uVar10;
      uVar15 = uVar13;
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
    }
    goto LAB_ram_40034476;
  }
  uVar10 = uVar5 >> 1;
  uVar13 = uVar15 >> 1;
LAB_ram_40034476:
  iVar2 = 2;
  uVar4 = uVar5;
  uVar1 = uVar15;
LAB_ram_400344a8:
  FUN_ram_40038f6c(*param_1,uVar4,uVar1);
  if (iVar6 == 0) {
LAB_ram_400341f0:
    uVar3 = 0;
  }
  else {
    if ((param_1[0x1c] & 3) != (uVar9 & 3)) {
      FUN_ram_40034040(param_1,param_1 + 0xcc);
    }
    FUN_ram_40039218(*param_1,uVar4,uVar1,uVar3,uVar8,0);
    if (iVar2 == 2) {
LAB_ram_40034304:
      FUN_ram_40039218(*param_1,uVar10,uVar13,uVar3,uVar8,1);
    }
    uVar3 = 1;
  }
  FUN_ram_400392cc(*param_1,uVar3);
  FUN_ram_4003904a(*param_1,1);
LAB_ram_40034128:
  return 0;
}


/* NanoCore 1.11, address 0x4003460e.
 * REA evidence: ev_e3d0b72a3875bad02e70864cfdf753f78f312966ebf273504230fb32d10a5281
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003460e(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x40034614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(*param_1 + 0x10) + 0x14))();
  return;
}


/* NanoCore 1.11, address 0x40034710.
 * REA evidence: ev_879e1d170579ab380ba6d716ebd86ef8526540c743093bc08847421d821a5f85
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40034710(int *param_1)

{
  int iVar1;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  memset(&uStack_6c,0,0x5c);
  if ((char)param_1[0x17] == '\0') {
    iVar1 = *param_1;
    FUN_ram_40034abe(param_1,1);
    uStack_68 = 1;
    uStack_64 = 0;
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x18))(&uStack_6c);
    uStack_6c = 1;
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x1c))(&uStack_6c);
    FUN_ram_40034bc4(param_1,1);
    *(undefined1 *)(param_1 + 0x17) = 1;
  }
  return 0;
}


/* NanoCore 1.11, address 0x4003479a.
 * REA evidence: ev_eb50275e557a31d2c84bf5e481de20472b81a22e4e36cc8da6c08d16e81c7226
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined * FUN_ram_4003479a(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 == *(int *)(PTR_PTR_ram_3004a428 + 4)) {
    iVar2 = 0;
  }
  else {
    if (param_1 != *(int *)(PTR_PTR_ram_3004a42c + 4)) {
      return (undefined *)0x0;
    }
    iVar2 = 1;
  }
  if ((((&PTR_PTR_ram_3004a428)[iVar2] != (undefined *)0x0) &&
      (pcVar3 = *(code **)((&PTR_PTR_ram_3004a428)[iVar2] + 8), pcVar3 != (code *)0x0)) &&
     (iVar1 = (*pcVar3)(), iVar1 == 0)) {
    return (&PTR_PTR_ram_3004a428)[iVar2];
  }
  return (undefined *)0x0;
}


/* NanoCore 1.11, address 0x400347e4.
 * REA evidence: ev_507571fa97c6116459f16337724f97199d608a9123fdc98933ce61cbce48744c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40034880) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_400347e4(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (DAT_ram_3007cb8c != '\0') {
    return 0;
  }
  piVar1 = (int *)FUN_ram_40005656(0x7c);
  if (piVar1 == (int *)0x0) {
    return -0xc;
  }
  memset(piVar1,0,0x7c);
  iVar2 = FUN_ram_4003479a(0);
  *piVar1 = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_ram_4003479a(4);
    piVar1[1] = iVar2;
    if (iVar2 != 0) {
      iVar2 = FUN_ram_40034dbe(4);
      piVar1[2] = iVar2;
      if (iVar2 != 0) {
        FUN_ram_40034c7a(piVar1);
        FUN_ram_40034cea(piVar1);
        FUN_ram_40034d1c(piVar1);
        iVar2 = piVar1[0x1d] * 4;
        iVar3 = FUN_ram_4003eee0(iVar2,0x20,1,FUN_ram_4003ef74);
        piVar1[0x19] = iVar3;
        if (iVar3 == 0) {
          iVar2 = -0xc;
        }
        else {
          memset(iVar3,0,iVar2);
          uVar4 = (piVar1[0x19] & 0x1fU) + iVar2;
          if ((uVar4 & 0x1f) != 0) {
            uVar4 = uVar4 + (0x20 - (int)uVar4 % 0x20);
          }
          fence();
          custom0();
          for (; 0 < (int)uVar4; uVar4 = uVar4 - 0x20) {
            custom0();
          }
          fence();
          custom0();
          FUN_ram_40034d5a(piVar1,iVar2);
          piVar1[0xb] = 7;
          piVar1[0x10] = 0;
          piVar1[0x11] = 0;
          piVar1[0x12] = 0;
          piVar1[0x13] = 0;
          piVar1[0x14] = 0;
          piVar1[0x15] = (int)FUN_ram_40034a46;
          piVar1[0x16] = (int)piVar1;
          iVar2 = FUN_ram_4000446c(piVar1 + 4,&DAT_ram_400975d0,3);
          if (iVar2 == 0) {
            *(undefined1 *)(piVar1 + 0x17) = 0;
            DAT_ram_3007cb8c = 1;
            _DAT_ram_3007cb90 = piVar1;
            FUN_ram_40034abe(piVar1,1);
            FUN_ram_40034af0(piVar1);
            FUN_ram_40034b1a(piVar1);
            return 0;
          }
        }
        goto LAB_ram_4003491a;
      }
    }
  }
  iVar2 = -0x16;
LAB_ram_4003491a:
  FUN_ram_40002f3a(piVar1);
  return iVar2;
}


/* NanoCore 1.11, address 0x40034926.
 * REA evidence: ev_aba8fe482dba80714f2242678391064c21d46333481873ce4ca95a261de0a845
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40034926(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int iStack_104;
  undefined4 uStack_f8;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined1 auStack_c0 [8];
  int iStack_b8;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_90;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 uStack_78;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_50;
  undefined4 uStack_24;
  
  iVar2 = *param_2;
  memset(&uStack_124,0,0x5c);
  iVar4 = *param_1;
  uStack_120 = 1;
  (**(code **)(*(int *)(iVar4 + 0x10) + 0x18))(&uStack_124);
  uStack_124 = 1;
  iVar2 = param_1[0x19] + iVar2 * param_1[0x1d];
  iVar3 = param_1[0x18];
  iStack_104 = iVar2;
  if (iVar3 != 0) {
    iVar1 = iVar2 + param_1[0x1d] * 2;
    iStack_104 = iVar1;
    memset(auStack_c0,0,0xa0);
    iStack_b8 = param_1[0x1c];
    uStack_c8 = 1;
    iStack_ac = param_1[0x1a];
    uStack_78 = uStack_f8;
    iStack_a8 = param_1[0x1b];
    uStack_6c = uStack_ec;
    uStack_88 = 1;
    uStack_90 = uStack_d0;
    uStack_50 = uStack_d0;
    uStack_68 = uStack_e8;
    iStack_c4 = iVar2;
    iStack_84 = iVar1;
    if (iVar3 == 0xb4) {
      uStack_24 = 2;
    }
    else if (iVar3 == 0x10e) {
      uStack_24 = 3;
    }
    else {
      if (iVar3 != 0x5a) goto LAB_ram_400349e2;
      uStack_24 = 1;
    }
    FUN_ram_4003a758(0,0x4703,&uStack_c8);
  }
LAB_ram_400349e2:
  (**(code **)(*(int *)(iVar4 + 0x10) + 0x1c))(&uStack_124);
  return 0;
}


/* NanoCore 1.11, address 0x40034a46.
 * REA evidence: ev_c58c84c563fd0d22a70c0eddcbb54d9c7016faa4022663f6362da23bd7d5e398
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40034a46(undefined4 param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = _DAT_ram_3007cb90;
  if (_DAT_ram_3007cb90 == 0) {
    return 10;
  }
  switch(param_2) {
  case 0x701:
    param_2 = 0x4663;
    break;
  case 0x702:
    param_2 = 0x4664;
    break;
  case 0x703:
    *param_3 = 0xe;
    param_3[1] = (char)*(undefined4 *)(iVar1 + 0x78);
    *(short *)(param_3 + 2) = (short)*(undefined4 *)(iVar1 + 0x70);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(iVar1 + 100);
    *(short *)(param_3 + 4) = (short)*(undefined4 *)(iVar1 + 0x68);
    uVar2 = *(undefined4 *)(iVar1 + 0x74);
    *(short *)(param_3 + 6) = (short)*(undefined4 *)(iVar1 + 0x6c);
    *(undefined4 *)(param_3 + 0xc) = uVar2;
    return 0;
  case 0x70a:
    param_2 = 0x4643;
    break;
  case 0x70b:
    param_2 = 0x4620;
  }
  piVar3 = &DAT_ram_3004a108;
  while ((*piVar3 != param_2 || ((code *)piVar3[1] == (code *)0x0))) {
    piVar3 = piVar3 + 10;
    if (*piVar3 == 0xffff) {
      return 0xffffffea;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x40034a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)piVar3[1])(_DAT_ram_3007cb90,param_3);
  return uVar2;
}


/* NanoCore 1.11, address 0x40034abe.
 * REA evidence: ev_e4f21dde49c0506b46d33dc7228b9f0ee8860865856005f0a9513e84eb5bd11a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40034abe(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  if (param_2 == 1) {
    (**(code **)(*(int *)(iVar1 + 0x10) + 4))();
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar2 + 0x10) + 4);
  }
  else {
    (**(code **)(*(int *)(iVar2 + 0x10) + 8))();
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar1 + 0x10) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x40034ae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* NanoCore 1.11, address 0x40034af0.
 * REA evidence: ev_533b47e572ced87770728bcefe24f90281eb1bff5d40d6ef80f8f85b5378969b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40034af0(int *param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = *param_1;
  local_20 = 1;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  (**(code **)(*(int *)(iVar1 + 0x10) + 0x24))(&local_20);
  (**(code **)(*(int *)(iVar1 + 0x10) + 0x28))(&local_20);
  return;
}


/* NanoCore 1.11, address 0x40034b1a.
 * REA evidence: ev_69486987023320bce4a565b94c0ff6d32b7efc612b32002c21b9256ad9272c2f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40034b1a(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_4c;
  uint uStack_40;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = *param_1;
  memset(&uStack_6c,0,0x5c);
  uStack_68 = 1;
  (**(code **)(*(int *)(iVar1 + 0x10) + 0x18))(&uStack_6c);
  uVar3 = param_1[0x18];
  uStack_6c = 1;
  if (uVar3 == 0xb4) {
    iStack_4c = param_1[0x19] + param_1[0x1d] * 2;
    iStack_34 = param_1[0x1a];
    iStack_30 = param_1[0x1b];
    uStack_40 = param_1[0x1c];
  }
  else {
    if (uVar3 < 0xb5) {
      uVar2 = 0x5a;
      if (uVar3 == 0) {
        iStack_34 = param_1[0x1a];
        iStack_30 = param_1[0x1b];
        uStack_40 = param_1[0x1c];
        iStack_4c = param_1[0x19];
        goto LAB_ram_40034b66;
      }
    }
    else {
      uVar2 = 0x10e;
    }
    if (uVar3 != uVar2) {
      return;
    }
    iStack_34 = param_1[0x1b];
    iStack_4c = param_1[0x19] + param_1[0x1d] * 2;
    iStack_30 = param_1[0x1a];
    uStack_40 = ((uint)(iStack_34 * param_1[0x1e]) >> 3) + 7 & 0xfffffff8;
  }
LAB_ram_40034b66:
  uStack_18 = 0xe;
  uStack_2c = 0;
  uStack_14 = 0;
  (**(code **)(*(int *)(iVar1 + 0x10) + 0x1c))(&uStack_6c);
  return;
}


/* NanoCore 1.11, address 0x40034bc4.
 * REA evidence: ev_44c6c7acfd7ba4148bf9492f4e9ec7199d62a38e917dab374c6931100c07f13d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40034c54) */

void FUN_ram_40034bc4(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_24 [20];
  
  iVar4 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0xc) == 0) {
    puVar1 = *(undefined4 **)(iVar4 + 4);
  }
  else {
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xc) + 8);
  }
  if (param_2 != 1) {
    (*(code *)puVar1[2])(iVar4);
                    /* WARNING: Could not recover jumptable at 0x40034c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar1[3])();
    return;
  }
  (*(code *)*puVar1)();
  (*(code *)puVar1[1])(iVar4);
  iVar4 = FUN_ram_4000304c(auStack_24,&PTR_DAT_ram_40097604_ram_40093858,0x14);
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (*(int *)(param_1 + 0xc) == 0) {
    puVar2 = (uint *)puVar1[8];
  }
  else {
    puVar2 = *(uint **)(*(int *)(param_1 + 0xc) + 4);
  }
  uVar3 = (puVar2[7] + puVar2[5] + puVar2[6] + puVar2[8]) *
          (puVar2[4] + puVar2[3] + puVar2[1] + puVar2[2]);
  if (uVar3 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *puVar2 / uVar3;
  }
  FUN_ram_40032a1a(s__s_type___s_pclk___d_Mhz_h___d_v_ram_4009761c,*puVar1,
                   *(undefined4 *)(iVar4 + puVar1[0xd] * 4),*puVar2 / 1000000,puVar2[1],puVar2[5],
                   uVar3);
  return;
}


/* NanoCore 1.11, address 0x40034c7a.
 * REA evidence: ev_ae226a2ad6fac1ff5b9a977ab78e6c43554acb98fd43d01dc6c5b1082ea199d0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40034c7a(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = CONCAT44(param_2,param_1);
  iVar2 = param_1[2];
  iVar1 = *(int *)(iVar2 + 0x28);
  iVar6 = *param_1;
  iVar5 = param_1[1];
  if (iVar1 != 0) {
    if (*(int *)(iVar2 + 0x2c) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + *(int *)(iVar2 + 0x30) * 0x10;
      param_1[3] = iVar1;
    }
  }
  pcVar4 = *(code **)(*(int *)(iVar5 + 0x10) + 0x14);
  if (pcVar4 != (code *)0x0) {
    uVar7 = (*pcVar4)(iVar2,iVar1);
  }
  uVar3 = 0x18;
  pcVar4 = *(code **)(*(int *)(iVar5 + 0x10) + 0x18);
  if (pcVar4 != (code *)0x0) {
    uVar3 = (*pcVar4)((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x18);
  }
  if ((code *)**(undefined4 **)(iVar6 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x40034cd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(iVar6 + 0x10))(iVar2,iVar1,uVar3,1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40034cea.
 * REA evidence: ev_e3d7e8f20113a0c1dbeb10a38ba81d0aadd310097ae489d97a6856efbf285027
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40034cea(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x60) = 0x5a;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x20);
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  }
  uVar1 = *(uint *)(iVar2 + 0x14);
  iVar2 = *(int *)(iVar2 + 4);
  uVar3 = (uVar1 & 0xfffffff) * 2 + 7 & 0xfffffff8;
  *(uint *)(param_1 + 0x70) = uVar3;
  *(uint *)(param_1 + 0x68) = uVar1;
  *(int *)(param_1 + 0x6c) = iVar2;
  *(undefined4 *)(param_1 + 0x78) = 0x10;
  *(uint *)(param_1 + 0x74) = uVar3 * iVar2;
  return;
}


/* NanoCore 1.11, address 0x40034d1c.
 * REA evidence: ev_5de5c2a0028f036d81fee5be3839c3c30ba7040d0785b729f91d1868c1dacbfd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40034d1c(int *param_1)

{
  int iVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = *(int *)(param_1[1] + 0x10);
  uStack_28 = *(undefined4 *)(iVar1 + 0xc);
  uStack_24 = *(undefined4 *)(iVar1 + 0x10);
  uStack_20 = *(undefined4 *)(iVar1 + 0x20);
  uStack_1c = *(undefined4 *)(iVar1 + 0x1c);
  uStack_18 = *(undefined4 *)(*(int *)(*param_1 + 0x10) + 0xc);
  uStack_14 = *(undefined4 *)(*(int *)(*param_1 + 0x10) + 0x10);
  if (param_1[3] == 0) {
    iVar1 = *(int *)(param_1[2] + 4);
  }
  else {
    iVar1 = *(int *)(param_1[3] + 8);
  }
  (**(code **)(iVar1 + 0x10))(param_1[2],&uStack_28);
  return;
}


/* NanoCore 1.11, address 0x40034d5a.
 * REA evidence: ev_2edb350505ed3294ecec14fabdac818a84a3f3e64cdc1bcaa9344ce873a8bd37
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40034d88) */

void FUN_ram_40034d5a(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  memset(*(undefined4 *)(param_1 + 100),0,param_2);
  uVar1 = (*(uint *)(param_1 + 100) & 0x1f) + param_2;
  if ((uVar1 & 0x1f) != 0) {
    uVar1 = uVar1 + (0x20 - (int)uVar1 % 0x20);
  }
  fence();
  custom0();
  for (; 0 < (int)uVar1; uVar1 = uVar1 - 0x20) {
    custom0();
  }
  fence();
  custom0();
  return;
}


/* NanoCore 1.11, address 0x40034dbe.
 * REA evidence: ev_d98b7d5c0bb8cc1bbf1b613782b9d05ca809c286965832cf81011abf60453b5c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined ** FUN_ram_40034dbe(int param_1)

{
  if (param_1 != DAT_ram_3004a464) {
    return (undefined **)0x0;
  }
  return &PTR_s_panel_st7789_ram_40097654_ram_3004a430;
}


/* NanoCore 1.11, address 0x40034dd4.
 * REA evidence: ev_29707c9fcbfeebc903058bdf8fe74e9bda21b6870a2ec010b99f87054e21a60a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40034dd4(int param_1,int param_2)

{
  if ((param_1 == 0) || (*(code **)(param_1 + 8) == (code *)0x0)) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    (**(code **)(param_1 + 8))();
    if (param_2 == 0) {
      return;
    }
  }
  FUN_ram_4003ff8a(param_2 * 1000);
  return;
}


/* NanoCore 1.11, address 0x40034e0a.
 * REA evidence: ev_241e72e3c429d61eb85f5627f6a86591e7d255a46aaca420aa23ba47db23137f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40034e0a(int param_1,int param_2)

{
  if ((param_1 == 0) || (*(code **)(param_1 + 0xc) == (code *)0x0)) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    (**(code **)(param_1 + 0xc))();
    if (param_2 == 0) {
      return;
    }
  }
  FUN_ram_4003ff8a(param_2 * 1000);
  return;
}


/* NanoCore 1.11, address 0x40034e40.
 * REA evidence: ev_f7433d53eade0881e81003944dbb950abe1f4e82434190d7ee3366230e739006
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40034e40(int param_1,int param_2)

{
  if ((param_1 == 0) || (*(code **)(param_1 + 0x18) == (code *)0x0)) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    (**(code **)(param_1 + 0x18))();
    if (param_2 == 0) {
      return;
    }
  }
  FUN_ram_4003ff8a(param_2 * 1000);
  return;
}


/* NanoCore 1.11, address 0x40034e76.
 * REA evidence: ev_be92f87f34c0c711fa1292cb73598106a75896c87dced85b9b394e90a596a081
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40034e76(int param_1,int param_2)

{
  if ((param_1 == 0) || (*(code **)(param_1 + 0x1c) == (code *)0x0)) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    (**(code **)(param_1 + 0x1c))();
    if (param_2 == 0) {
      return;
    }
  }
  FUN_ram_4003ff8a(param_2 * 1000);
  return;
}


/* NanoCore 1.11, address 0x40034eac.
 * REA evidence: ev_1123183c0d72dd5f46dc6e75b447503c4ebab2c6ea395bc4d23a67daee3c0199
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40034ec2) */
/* WARNING: Removing unreachable block (ram,0x40034ec6) */

void FUN_ram_40034eac(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003b720(s_PD_17_ram_4009764c);
  FUN_ram_4003ba50(iVar1 / 0x20);
  FUN_ram_4003b7a0(iVar1 / 0x20,iVar1 % 0x20);
  return;
}


/* NanoCore 1.11, address 0x40034ee0.
 * REA evidence: ev_f94d9647f4feef6adde7a790275c6bab67d533479a8f730eec5d00149edb761f
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40034ef4) */
/* WARNING: Removing unreachable block (ram,0x40034efc) */

void FUN_ram_40034ee0(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003b720(s_PD_17_ram_4009764c);
  FUN_ram_4003b7ce(iVar1 / 0x20,iVar1 % 0x20);
  return;
}


/* NanoCore 1.11, address 0x40034f08.
 * REA evidence: ev_f2edba6d438ae3cb847cdfacfc2ce63f8304a61ff253e3088ed65c695455ef3e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40034f08(undefined4 param_1)

{
  FUN_ram_40034ee0(param_1,0);
  FUN_ram_40034e0a(param_1,0);
  FUN_ram_40034e76(param_1,0);
  return 0;
}


/* NanoCore 1.11, address 0x40034f48.
 * REA evidence: ev_60d2b0350509446bd319652c199aee032255b630317bdb8dba8aae44443c086c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40034f48(int *param_1,int param_2)

{
  uint uVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    uVar1 = FUN_ram_4003b720(param_2);
    if (-1 < (int)uVar1) {
      *param_1 = (int)uVar1 >> 5;
      param_1[1] = uVar1 & 0x1f;
      FUN_ram_4003ba50();
      return;
    }
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40034f7c.
 * REA evidence: ev_b2b598d3bd57655a9969555fbb4b45d6b0c9fd1102c90738184fa40fdc6e6be3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40034f7c(undefined4 *param_1,int param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (param_2 != 0) {
    FUN_ram_4003b7ce();
    return;
  }
  FUN_ram_4003b7a0(*param_1,param_1[1]);
  return;
}


/* NanoCore 1.11, address 0x40034f92.
 * REA evidence: ev_4b985de1a1c76656caf1fd375a52da724ffcec76adfecdbf3a54d81e7566d38d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4
FUN_ram_40034f92(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_a4;
  undefined4 extraout_a4_00;
  int iVar5;
  int iVar6;
  
  if (param_2 != (int *)0x0) {
    uVar3 = 0;
    while (uVar3 < (uint)param_2[1]) {
      iVar5 = *param_2;
      iVar6 = uVar3 + 2;
      uVar1 = (uint)*(byte *)(uVar3 + iVar5 + 1);
      iVar2 = iVar5 + iVar6;
      if ((*(char *)(iVar5 + uVar3) == '\0') && (uVar1 == 1)) {
        FUN_ram_4003ff8a((uint)*(byte *)(iVar5 + iVar6) * 1000);
        param_5 = extraout_a4;
      }
      else {
        uVar4 = uVar1;
        if (uVar1 == 0) {
          uVar4 = 0;
          iVar2 = 0;
        }
        (**(code **)(param_1 + 0x10))
                  (*(char *)(iVar5 + uVar3),0,iVar2,uVar4,param_5,*(code **)(param_1 + 0x10));
        param_5 = extraout_a4_00;
      }
      uVar3 = uVar1 + iVar6;
    }
    return 0;
  }
  return 0xffffffff;
}


