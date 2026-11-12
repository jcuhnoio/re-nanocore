/* NanoCore 1.10 analysis module: unresolved/bank_4/block_40033000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4003303e.
 * REA evidence: ev_3a1ae583f818a90366cf9ce74cf2c1b4bb5d2de6432809b02bcd020967ade727
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003303e(int param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 * 4;
  iVar1 = param_2 + 4;
  do {
    if (*(int *)(param_1 + 0x18 + param_2 * 0x5c) != 0) {
      return 0;
    }
    param_2 = param_2 + 1;
  } while (param_2 != iVar1);
  return 1;
}


/* NanoCore 1.10, address 0x40033062.
 * REA evidence: ev_0658a16e9d3c8007733bc3c765d30050e4a6079bc5860695052b4bbfb201df94
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40033062(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_ram_40038330(*param_1,param_3,0);
  iVar1 = FUN_ram_4003303e(param_1,param_2);
  if (iVar1 != 0) {
    FUN_ram_4003831e(*param_1,0);
  }
  return 0;
}


/* NanoCore 1.10, address 0x40033096.
 * REA evidence: ev_bf72d447876393bb7035e7d43f9edc820b4cc3ca27e1561f0ba63575746c4b4e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40033096(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  
  uVar10 = *(uint *)(param_2 + 0x54);
  uVar7 = *(undefined4 *)(param_2 + 0x38);
  uVar8 = *(undefined4 *)(param_2 + 0x3c);
  iVar9 = *(int *)(param_2 + 0x2c);
  iVar6 = *(int *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  iVar1 = *(int *)(param_2 + 0x40);
  iVar2 = *(int *)(param_2 + 0x44);
  iVar3 = *(int *)(param_2 + 0x48);
  if (uVar10 < 10) {
    if (uVar10 < 8) {
      if (iVar1 == 0) goto LAB_ram_40033122;
      iVar1 = iVar9 * iVar3 + iVar2 * 4;
    }
    else {
      if (iVar1 == 0) goto LAB_ram_40033122;
      iVar1 = iVar9 * iVar3 + iVar2 * 3;
    }
  }
  else {
    if (9 < uVar10 - 10) {
      return 0xffffffea;
    }
    if (iVar1 == 0) goto LAB_ram_40033122;
    iVar1 = iVar9 * iVar3 + iVar2 * 2;
  }
  iVar6 = iVar6 + iVar1;
  uVar7 = *(undefined4 *)(param_2 + 0x4c);
  uVar8 = *(undefined4 *)(param_2 + 0x50);
LAB_ram_40033122:
  iVar1 = FUN_ram_4003303e(param_1,*(undefined4 *)(param_2 + 4));
  if (iVar1 != 0) {
    FUN_ram_4003828a(*param_1,uVar10);
    FUN_ram_4003831e(*param_1,1);
  }
  FUN_ram_400382c4(*param_1,uVar7,uVar8,uVar4,uVar5,iVar9,iVar6,*(undefined4 *)(param_2 + 8));
  FUN_ram_40038330(*param_1,*(undefined4 *)(param_2 + 8),1);
  return 0;
}


/* NanoCore 1.10, address 0x4003316e.
 * REA evidence: ev_7c67ac368eab108b062a2b041d93fe6acf70ba97339fa419d22a729fdcec808e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003316e(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  if ((((*param_2 == 0x32) && (param_2[1] == 0x32)) && (param_2[2] == 0x32)) && (param_2[3] == 0x32)
     ) {
    FUN_ram_4003818a();
    return;
  }
  FUN_ram_400381e4(*param_1,param_3);
  return;
}


/* NanoCore 1.10, address 0x40033198.
 * REA evidence: ev_b5a1e634833da7792b473074a4711b12e31963884669bac7eb8eca541d34fc23
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int * FUN_ram_40033198(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_ram_30046930;
  do {
    if (*piVar1 == param_1) {
      return piVar1;
    }
    piVar1 = piVar1 + 2;
  } while (piVar1 != &DAT_ram_30046a50);
  return (int *)0x0;
}


/* NanoCore 1.10, address 0x400331ba.
 * REA evidence: ev_121cd3ac7552dec957857bc404eacbe910e829866384892f990848c98049e7cd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400331ba(int param_1,int param_2)

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


/* NanoCore 1.10, address 0x4003322c.
 * REA evidence: ev_17f0e70d2d2a9f3b8ec6a493e11420360c1e9b22692b9704fe25d45c5e08ecf0
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003322c(undefined4 *param_1,int param_2)

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
  iVar2 = FUN_ram_40033198(uVar4);
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
          goto LAB_ram_40033300;
        }
      }
      else if (iVar16 != 0) {
        iVar6 = iVar2 * iVar6 + iVar14 * 3;
LAB_ram_40033300:
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
        goto LAB_ram_40033300;
      }
    }
    FUN_ram_4003809a(*param_1,uVar10,uVar13,uVar4,iVar2,*(undefined4 *)(param_2 + 0x30),iVar7,
                     *(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),
                     *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18));
    goto LAB_ram_4003331e;
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
LAB_ram_400334ca:
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
        if (uVar11 == 0) goto LAB_ram_400333d0;
        uVar11 = uVar1 & 0x3e;
        uVar4 = uVar15 & 0x1e;
        uVar15 = uVar15 & 0x3f;
LAB_ram_4003347c:
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
          goto LAB_ram_4003347c;
        }
LAB_ram_400333d0:
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
      if (uVar11 == 0) goto LAB_ram_400334ca;
      uVar11 = uVar1 & 0x7e;
      uVar4 = uVar15 & 0xf;
      uVar13 = uVar9;
      uVar15 = uVar4;
    }
    uVar10 = uVar5 >> 1;
    FUN_ram_4003809a(*param_1,uVar5 & 0xfffffffe,uVar9);
    FUN_ram_4003814a(*param_1,uVar11,uVar4,uVar11,uVar15);
    if ((param_1[0x1c] & 3) != uVar12) {
      FUN_ram_4003316e(param_1,param_1 + 0xcc,uVar12);
    }
    FUN_ram_40038346(*param_1,uVar5 & 0xfffffffe,uVar9,uVar3,uVar8,0);
    goto LAB_ram_40033432;
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
    FUN_ram_4003809a(*param_1,uVar15 & 0xfffffffe,uVar13,uVar4,*(int *)(param_2 + 0x2c),
                     *(undefined4 *)(param_2 + 0x30),iVar2,*(undefined4 *)(param_2 + 0x24),
                     *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x14),
                     *(undefined4 *)(param_2 + 0x18));
    uVar10 = uVar15 >> 1;
    if ((param_1[0x1c] & 3) != uVar5) {
      FUN_ram_4003316e(param_1,param_1 + 0xcc,uVar5);
    }
    FUN_ram_40038346(*param_1,uVar15 & 0xfffffffe,uVar13,uVar3,uVar8,0);
    goto LAB_ram_40033432;
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
LAB_ram_40033570:
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
    if (iVar7 == 0) goto LAB_ram_40033570;
    uVar5 = uVar5 & 0xfffffffe;
    uVar15 = uVar15 & 0xfffffffe;
    break;
  case 0x23:
    if (iVar7 == 0) {
LAB_ram_40033626:
      uVar5 = uVar10 & 0xfffffffe;
      uVar15 = uVar13;
    }
    else {
      uVar5 = uVar5 & 0xfffffffe;
    }
    goto LAB_ram_4003364a;
  case 0x24:
  case 0x25:
    if (iVar7 == 0) goto LAB_ram_40033626;
    uVar5 = uVar5 & 0xfffffffe;
LAB_ram_4003364a:
    uVar10 = uVar5 >> 1;
    uVar13 = uVar15;
    goto LAB_ram_400335a4;
  default:
    goto LAB_ram_40033256;
  case 0x2a:
    uVar4 = uVar10;
    uVar1 = uVar13;
    if (iVar7 != 0) {
      uVar4 = uVar5;
      uVar1 = uVar15;
    }
    goto LAB_ram_400335d6;
  case 0x2b:
    if (iVar7 == 0) {
      uVar5 = uVar10;
      uVar15 = uVar13;
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
    }
    goto LAB_ram_400335a4;
  }
  uVar10 = uVar5 >> 1;
  uVar13 = uVar15 >> 1;
LAB_ram_400335a4:
  iVar2 = 2;
  uVar4 = uVar5;
  uVar1 = uVar15;
LAB_ram_400335d6:
  FUN_ram_4003809a(*param_1,uVar4,uVar1);
  if (iVar6 == 0) {
LAB_ram_4003331e:
    uVar3 = 0;
  }
  else {
    if ((param_1[0x1c] & 3) != (uVar9 & 3)) {
      FUN_ram_4003316e(param_1,param_1 + 0xcc);
    }
    FUN_ram_40038346(*param_1,uVar4,uVar1,uVar3,uVar8,0);
    if (iVar2 == 2) {
LAB_ram_40033432:
      FUN_ram_40038346(*param_1,uVar10,uVar13,uVar3,uVar8,1);
    }
    uVar3 = 1;
  }
  FUN_ram_400383fa(*param_1,uVar3);
  FUN_ram_40038178(*param_1,1);
LAB_ram_40033256:
  return 0;
}


/* NanoCore 1.10, address 0x4003373c.
 * REA evidence: ev_94cd5b02950e9f4c1bd835111f0f7b1651bea6059939398e3d60f8cdd96fb688
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4003373c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x40033742. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(*param_1 + 0x10) + 0x14))();
  return;
}


/* NanoCore 1.10, address 0x4003383e.
 * REA evidence: ev_21931b55165f63707de818397d905519d2bc04ae9b5accde4417f08b8a80b401
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4003383e(int *param_1)

{
  int iVar1;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  memset(&uStack_6c,0,0x5c);
  if ((char)param_1[0x17] == '\0') {
    iVar1 = *param_1;
    FUN_ram_40033bec(param_1,1);
    uStack_68 = 1;
    uStack_64 = 0;
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x18))(&uStack_6c);
    uStack_6c = 1;
    (**(code **)(*(int *)(iVar1 + 0x10) + 0x1c))(&uStack_6c);
    FUN_ram_40033cf2(param_1,1);
    *(undefined1 *)(param_1 + 0x17) = 1;
  }
  return 0;
}


/* NanoCore 1.10, address 0x400338c8.
 * REA evidence: ev_bb86f016edb09a6690b4ab00045a4d80d2b14b32325dd71c4e59f6b1f261fb67
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined * FUN_ram_400338c8(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 == *(int *)(PTR_PTR_ram_30046d70 + 4)) {
    iVar2 = 0;
  }
  else {
    if (param_1 != *(int *)(PTR_PTR_ram_30046d74 + 4)) {
      return (undefined *)0x0;
    }
    iVar2 = 1;
  }
  if ((((&PTR_PTR_ram_30046d70)[iVar2] != (undefined *)0x0) &&
      (pcVar3 = *(code **)((&PTR_PTR_ram_30046d70)[iVar2] + 8), pcVar3 != (code *)0x0)) &&
     (iVar1 = (*pcVar3)(), iVar1 == 0)) {
    return (&PTR_PTR_ram_30046d70)[iVar2];
  }
  return (undefined *)0x0;
}


/* NanoCore 1.10, address 0x40033912.
 * REA evidence: ev_6d5507a120bf5df8a9723a631c66ea98a7e53d7bae565856afecddab8ee7c487
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400339ae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40033912(void)

{
  size_t __n;
  int *__s;
  int iVar1;
  void *__s_00;
  uint uVar2;
  
  if (DAT_ram_3007b800 != '\0') {
    return 0;
  }
  __s = (int *)FUN_ram_40005666(0x7c);
  if (__s == (int *)0x0) {
    return -0xc;
  }
  memset(__s,0,0x7c);
  iVar1 = FUN_ram_400338c8(0);
  *__s = iVar1;
  if (iVar1 != 0) {
    iVar1 = FUN_ram_400338c8(4);
    __s[1] = iVar1;
    if (iVar1 != 0) {
      iVar1 = FUN_ram_40033eec(4);
      __s[2] = iVar1;
      if (iVar1 != 0) {
        FUN_ram_40033da8(__s);
        FUN_ram_40033e18(__s);
        FUN_ram_40033e4a(__s);
        __n = __s[0x1d] * 4;
        __s_00 = (void *)FUN_ram_4003dfbc(__n,0x20,1,FUN_ram_4003e050);
        __s[0x19] = (int)__s_00;
        if (__s_00 == (void *)0x0) {
          iVar1 = -0xc;
        }
        else {
          memset(__s_00,0,__n);
          uVar2 = (__s[0x19] & 0x1fU) + __n;
          if ((uVar2 & 0x1f) != 0) {
            uVar2 = uVar2 + (0x20 - (int)uVar2 % 0x20);
          }
          fence();
          custom0();
          for (; 0 < (int)uVar2; uVar2 = uVar2 - 0x20) {
            custom0();
          }
          fence();
          custom0();
          FUN_ram_40033e88(__s,__n);
          __s[0xb] = 7;
          __s[0x10] = 0;
          __s[0x11] = 0;
          __s[0x12] = 0;
          __s[0x13] = 0;
          __s[0x14] = 0;
          __s[0x15] = (int)FUN_ram_40033b74;
          __s[0x16] = (int)__s;
          iVar1 = FUN_ram_4000447c(__s + 4,&DAT_ram_40095754,3);
          if (iVar1 == 0) {
            *(undefined1 *)(__s + 0x17) = 0;
            DAT_ram_3007b800 = 1;
            _DAT_ram_3007b804 = __s;
            FUN_ram_40033bec(__s,1);
            FUN_ram_40033c1e(__s);
            FUN_ram_40033c48(__s);
            return 0;
          }
        }
        goto LAB_ram_40033a48;
      }
    }
  }
  iVar1 = -0x16;
LAB_ram_40033a48:
  FUN_ram_40002f4a(__s);
  return iVar1;
}


/* NanoCore 1.10, address 0x40033a54.
 * REA evidence: ev_95a82be0502137f225a63e8fd2177fb6b8a8684828de979cd62d5b90cf745883
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40033a54(int *param_1,int *param_2)

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
      if (iVar3 != 0x5a) goto LAB_ram_40033b10;
      uStack_24 = 1;
    }
    FUN_ram_40039834(0,0x4703,&uStack_c8);
  }
LAB_ram_40033b10:
  (**(code **)(*(int *)(iVar4 + 0x10) + 0x1c))(&uStack_124);
  return 0;
}


/* NanoCore 1.10, address 0x40033b74.
 * REA evidence: ev_c548af516936d9190eb17939945fdca908df0a9ff65800b455a3599b6d6ea0bb
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40033b74(undefined4 param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = _DAT_ram_3007b804;
  if (_DAT_ram_3007b804 == 0) {
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
  piVar3 = &DAT_ram_30046a50;
  while ((*piVar3 != param_2 || ((code *)piVar3[1] == (code *)0x0))) {
    piVar3 = piVar3 + 10;
    if (*piVar3 == 0xffff) {
      return 0xffffffea;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x40033b66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)piVar3[1])(_DAT_ram_3007b804,param_3);
  return uVar2;
}


/* NanoCore 1.10, address 0x40033bec.
 * REA evidence: ev_242dfe319d1e8040a134cda520c2f3ebd979fa3a62b8e55ec96d0db9ea96872c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40033bec(int *param_1,int param_2)

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
                    /* WARNING: Could not recover jumptable at 0x40033c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* NanoCore 1.10, address 0x40033c1e.
 * REA evidence: ev_c919233c610b8fdff81afadfb4d42b4eb8f3f5efba4e5a3e72fabc5ecf7d04e9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40033c1e(int *param_1)

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


/* NanoCore 1.10, address 0x40033c48.
 * REA evidence: ev_9a1cc05a57d63c0a7eeca766c52c80920662ca7cc8b9758662e586b8b90d871b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40033c48(int *param_1)

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
        goto LAB_ram_40033c94;
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
LAB_ram_40033c94:
  uStack_18 = 0xe;
  uStack_2c = 0;
  uStack_14 = 0;
  (**(code **)(*(int *)(iVar1 + 0x10) + 0x1c))(&uStack_6c);
  return;
}


/* NanoCore 1.10, address 0x40033cf2.
 * REA evidence: ev_f47d133be69f5de7adf3475b82410182e76a323ba39eaa1912c3578492e37fa1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40033d82) */

void FUN_ram_40033cf2(int param_1,int param_2)

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
                    /* WARNING: Could not recover jumptable at 0x40033da6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar1[3])();
    return;
  }
  (*(code *)*puVar1)();
  (*(code *)puVar1[1])(iVar4);
  iVar4 = FUN_ram_4000305c(auStack_24,&PTR_DAT_ram_40095788_ram_40091a98,0x14);
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
  FUN_ram_40031b48(s__s_type___s_pclk___d_Mhz_h___d_v_ram_400957a0,*puVar1,
                   *(undefined4 *)(iVar4 + puVar1[0xd] * 4),*puVar2 / 1000000,puVar2[1],puVar2[5],
                   uVar3);
  return;
}


/* NanoCore 1.10, address 0x40033da8.
 * REA evidence: ev_be9c8d530028b853003f053ebd6ceb89c557d784e48491af26571656ab139c95
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40033da8(int *param_1,undefined4 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x40033e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(iVar6 + 0x10))(iVar2,iVar1,uVar3,1);
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x40033e18.
 * REA evidence: ev_cf47b2f29dc4e32595d55163877752d0032b709a573127197da8042f07cddb7d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40033e18(int param_1)

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


/* NanoCore 1.10, address 0x40033e4a.
 * REA evidence: ev_41844e7bca0ff1586d319f3da9198eedd4366a8cffcf78d2a44842f6e206cfd7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40033e4a(int *param_1)

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


/* NanoCore 1.10, address 0x40033e88.
 * REA evidence: ev_12b79b921e12321e18a8624aeea23a87b05e60679e05f49b2819353c58f10ec2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40033eb6) */

void FUN_ram_40033e88(int param_1,size_t param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  memset(*(void **)(param_1 + 100),0,param_2);
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


/* NanoCore 1.10, address 0x40033eec.
 * REA evidence: ev_d3a93cffaca311682ff82e713945d22f28683d751ed98a6d2cab7a2cf16339f3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined ** FUN_ram_40033eec(int param_1)

{
  if (param_1 != DAT_ram_30046dac) {
    return (undefined **)0x0;
  }
  return &PTR_s_panel_st7789_ram_400957d8_ram_30046d78;
}


/* NanoCore 1.10, address 0x40033f02.
 * REA evidence: ev_0b46d6ca52c7cf72539c5fc01d30927f2519d80f9f135bb00ba9bf11ccfad8a2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40033f02(int param_1,int param_2)

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
  FUN_ram_4003f052(param_2 * 1000);
  return;
}


/* NanoCore 1.10, address 0x40033f38.
 * REA evidence: ev_ed50255f471f798e50c5d5dc7f18de00b89b6b27431277586b7cc678ed89ec0d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40033f38(int param_1,int param_2)

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
  FUN_ram_4003f052(param_2 * 1000);
  return;
}


/* NanoCore 1.10, address 0x40033f6e.
 * REA evidence: ev_dd68acc710cd030bcf865428d700d4361df92e658b2fd0b97395079f7a6515f4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40033f6e(int param_1,int param_2)

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
  FUN_ram_4003f052(param_2 * 1000);
  return;
}


/* NanoCore 1.10, address 0x40033fa4.
 * REA evidence: ev_5048edce3aba51201c9397155b1162fd9b1f3d50b1e31254fd0836928db3a881
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40033fa4(int param_1,int param_2)

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
  FUN_ram_4003f052(param_2 * 1000);
  return;
}


/* NanoCore 1.10, address 0x40033fda.
 * REA evidence: ev_baee047e2c9a41e5f96a8042ae36b64c07a4b144176047d6e440219c2cedd4d4
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40033ff0) */
/* WARNING: Removing unreachable block (ram,0x40033ff4) */

void FUN_ram_40033fda(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_4003a7fc(s_PD_17_ram_400957d0);
  FUN_ram_4003ab2c(iVar1 / 0x20);
  FUN_ram_4003a87c(iVar1 / 0x20,iVar1 % 0x20);
  return;
}


