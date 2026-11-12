/* NanoCore 1.12 analysis module: unresolved/bank_4/block_4002a000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x4002a008.
 * REA evidence: ev_13b0cb01930cc31b20fec58b5c0140629f356de3024b3243029c96a04d658866
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_4002a008(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  
  while ((uVar1 = *param_3, uVar1 < param_2 && (DAT_ram_3006d500 != '\0'))) {
    iVar2 = FUN_ram_4000e5e0(param_1 + uVar1 * 2,param_2 - uVar1);
    if (iVar2 == 0) {
      FUN_ram_400064e4(2);
    }
    else {
      *param_3 = *param_3 + iVar2;
    }
  }
  return DAT_ram_3006d500 != '\0' && param_2 <= uVar1;
}


/* NanoCore 1.12, address 0x4002a074.
 * REA evidence: ev_9d467cbba55f9ce04b1cf6af724f06cbd57d36742c2337489d5f5e3224fda2a7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4002a3a8) */
/* WARNING: Removing unreachable block (ram,0x4002a1a8) */
/* WARNING: Removing unreachable block (ram,0x4002a3fc) */
/* WARNING: Removing unreachable block (ram,0x4002a43a) */
/* WARNING: Removing unreachable block (ram,0x4002a442) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002a074(void)

{
  short sVar1;
  float fVar2;
  int iVar3;
  short *psVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  short *psVar19;
  int iVar20;
  ushort uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  undefined8 unaff_fs5;
  undefined8 uVar27;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  char acStack_88 [4];
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  char cStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  uStack_70 = (undefined4)unaff_fs5;
  uStack_6c = (undefined4)((ulonglong)unaff_fs5 >> 0x20);
  memset(acStack_88,0,0x18);
  FUN_ram_40029fae();
  fVar12 = DAT_ram_4009bdc0;
  fVar11 = DAT_ram_4009bdbc;
  fVar10 = DAT_ram_4009bdb8;
  fVar9 = DAT_ram_4009a560;
  fVar8 = DAT_ram_4009a35c;
  do {
    while( true ) {
      while (DAT_ram_3006d500 == '\0') {
        acStack_88[0] = '\0';
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_7c = 0;
        cStack_78 = '\0';
        fStack_74 = 0.0;
        FUN_ram_400064e4(0x32);
      }
      if (acStack_88[0] != '\0') break;
      if ((uStack_84 < 0x401) &&
         (iVar14 = FUN_ram_4002a008(&DAT_ram_3006dbc4,0x400,&uStack_84), iVar14 != 0)) {
        acStack_88[0] = '\x01';
        break;
      }
LAB_ram_4002a106:
      acStack_88[0] = '\0';
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      cStack_78 = '\0';
      fStack_74 = 0.0;
    }
    uVar21 = DAT_ram_3004ad82;
    uVar15 = FUN_ram_4000e658();
    if (uVar15 == 0) {
LAB_ram_4002a3d0:
      uStack_7c = uStack_7c + 1;
      if (9 < uStack_7c) {
        cStack_78 = '\0';
        fStack_74 = 0.0;
LAB_ram_4002a39e:
        FUN_ram_40029fae();
      }
    }
    else {
      uVar17 = 0;
      uVar5 = 0;
      iVar14 = 0;
      do {
        iVar3 = iVar14 * 2;
        iVar20 = iVar14 * 2;
        iVar14 = iVar14 + 1;
        uVar22 = ((uint)*(ushort *)(&DAT_ram_3006dbc4 + iVar20) ^
                 (int)*(short *)(&DAT_ram_3006dbc4 + iVar3) >> 0xf) -
                 ((int)*(short *)(&DAT_ram_3006dbc4 + iVar3) >> 0xf) & 0xffff;
        uVar5 = uVar5 + uVar22;
        if (uVar17 < uVar22) {
          uVar17 = uVar22;
        }
      } while (iVar14 != 0x400);
      if ((uVar17 < 0x78) || ((uint)(uVar5 >> 10) < 0x18)) goto LAB_ram_4002a3d0;
      if (uVar15 < 4000) {
        uVar17 = 2;
LAB_ram_4002a3a6:
        uVar22 = uVar15 / 0x14;
      }
      else {
        uVar17 = uVar15 / 2000;
        uVar22 = 600;
        if (uVar15 < 0x2ef4) goto LAB_ram_4002a3a6;
      }
      if (uVar22 <= uVar17) goto LAB_ram_4002a3d0;
      _DAT_ram_3006d510 = 0;
      uVar5 = 1;
      lVar6 = 0;
      uVar13 = 0;
      do {
        uVar24 = (uint)uVar5;
        psVar19 = (short *)&DAT_ram_3006dbc4;
        uVar7 = 0;
        iVar14 = 0;
        do {
          sVar1 = *psVar19;
          psVar4 = psVar19 + uVar24;
          iVar14 = iVar14 + 1;
          psVar19 = psVar19 + 1;
          uVar7 = (longlong)((int)sVar1 - (int)*psVar4) * (longlong)((int)sVar1 - (int)*psVar4) +
                  uVar7;
        } while (iVar14 != 0x400 - uVar24);
        lVar6 = lVar6 + uVar7;
        if (lVar6 == 0) {
          uVar27 = 0;
        }
        else {
          uVar27 = FUN_ram_40003bf8((int)(uVar5 * uVar7) << 0xc,
                                    (int)((uVar5 * uVar7 & 0xffffffff00000000 |
                                          (uVar7 & 0xffffffff) * (uVar5 & 0xffffffff) & 0xffffffff)
                                         >> 0x14),(int)lVar6,(int)((ulonglong)lVar6 >> 0x20));
          if (((int)((ulonglong)uVar27 >> 0x20) != 0) || (0xffff < (uint)uVar27)) {
            uVar27 = 0xffff;
          }
        }
        *(short *)(&DAT_ram_3006d510 + uVar24 * 2) = (short)uVar27;
        if (uVar13 == 0) {
          uVar23 = uVar13;
          if (((uVar17 <= uVar24) && ((int)((ulonglong)uVar27 >> 0x20) == 0)) &&
             (uVar23 = uVar24, 900 < (uint)uVar27)) {
            uVar23 = 0;
          }
        }
        else {
          uVar23 = uVar24;
          if ((uint)*(ushort *)(&DAT_ram_3006d510 + uVar13 * 2) <= ((uint)uVar27 & 0xffff))
          goto LAB_ram_4002a272;
        }
        uVar5 = uVar5 + 1;
        uVar13 = uVar23;
      } while ((uint)uVar5 <= uVar22);
      if (uVar23 == 0) goto LAB_ram_4002a3d0;
LAB_ram_4002a272:
      fVar25 = (float)uVar13;
      if (uVar13 != 1) {
        if (uVar13 < uVar22) {
          fVar26 = ((float)*(ushort *)(&DAT_ram_3006d510 + uVar13 * 2) *
                    (float)PTR_entry_ram_40096740 -
                   (float)*(ushort *)(&DAT_ram_3006d510 + (uVar13 + 1) * 2)) -
                   (float)*(ushort *)(&DAT_ram_3006d510 + (uVar13 - 1) * 2);
          if (fVar26 != 0.0) {
            fVar25 = fVar25 + ((float)*(ushort *)(&DAT_ram_3006d510 + (uVar13 + 1) * 2) -
                              (float)*(ushort *)(&DAT_ram_3006d510 + (uVar13 - 1) * 2)) /
                              (fVar26 + fVar26);
          }
        }
        if (fVar25 <= 0.0) goto LAB_ram_4002a3d0;
      }
      fVar25 = (float)uVar15 / fVar25;
      if ((fVar25 <= fVar11) || (fVar8 <= fVar25)) goto LAB_ram_4002a3d0;
      uStack_7c = 0;
      if (cStack_78 == '\0') {
        cStack_78 = '\x01';
      }
      else {
        fVar25 = (fVar25 - fStack_74) * DAT_ram_4009b18c + fStack_74;
      }
      fStack_94 = 0.0;
      uStack_90 = 0;
      uStack_8c = 0;
      if (0x1e0 < uVar21) {
        uVar21 = 0x1e0;
      }
      if (uVar21 < 400) {
        uVar21 = 400;
      }
      fVar26 = (fVar12 / (float)uVar21) * fVar25;
      iVar14 = 0;
      if ((DAT_ram_4009bdc4 < fVar26) && (iVar14 = 0x7f, fVar26 < DAT_ram_4009bdc8)) {
        iVar3 = 0x7f;
        iVar14 = 0;
        while (iVar20 = iVar3, 1 < iVar20 - iVar14) {
          iVar18 = (iVar14 + iVar20) / 2;
          iVar3 = iVar18;
          if ((float)*(undefined8 *)((int)&DAT_ram_4009bdcc + iVar18 * 4 + 4) <= fVar26) {
            iVar3 = iVar20;
            iVar14 = iVar18;
          }
        }
        if ((float)*(undefined8 *)((int)&DAT_ram_4009bdcc + iVar20 * 4 + 4) - fVar26 <
            fVar26 - (float)*(undefined8 *)((int)&DAT_ram_4009bdcc + iVar14 * 4 + 4)) {
          iVar14 = iVar20;
        }
      }
      fVar26 = ((float)uVar21 / fVar12) *
               (float)*(undefined8 *)((int)&DAT_ram_4009bdcc + iVar14 * 4 + 4);
      fStack_74 = fVar25;
      if (fVar26 <= 0.0) goto LAB_ram_4002a39e;
      fVar2 = ((fVar25 - fVar26) / fVar26) * (float)DAT_ram_4009bdcc;
      fVar26 = fVar9;
      if ((fVar2 <= fVar9) && (fVar26 = fVar2, fVar2 < fVar10)) {
        fVar26 = fVar10;
      }
      if (fVar26 < 0.0) {
        fVar26 = fVar26 - DAT_ram_4009675c;
      }
      else {
        fVar26 = fVar26 + DAT_ram_4009675c;
      }
      uVar16 = FUN_ram_400002f4();
      uStack_90 = CONCAT22((short)(int)fVar26,
                           CONCAT11((char)((uint)((iVar14 / 0xc + -1) * 0x1000000) >> 0x18),
                                    (char)(iVar14 % 0xc)));
      uStack_8c = CONCAT31(uStack_8c._1_3_,1);
      fStack_94 = fVar25;
      FUN_ram_4000303c(&DAT_ram_3006d504,&fStack_94,0xc);
      FUN_ram_400002fa(uVar16);
    }
    if ((0x100 < uStack_80) || (iVar14 = FUN_ram_4002a008(0x3006d9c4,0x100,&uStack_80), iVar14 == 0)
       ) goto LAB_ram_4002a106;
    FUN_ram_400030f0(&DAT_ram_3006dbc4,0x3006ddc4,0x600);
    FUN_ram_4000303c(0x3006e1c4,0x3006d9c4,0x200);
    uStack_80 = 0;
  } while( true );
}


/* NanoCore 1.12, address 0x4002a4f6.
 * REA evidence: ev_04d56938a3c5fb7e52289791106d267b0179853fbc51ed232d191be6b39c434b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002a4f6(int param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3006d500 = param_1 != 0;
  FUN_ram_400002fa();
  if (param_1 == 0) {
    FUN_ram_40029fae();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002a526.
 * REA evidence: ev_66e8c47f760b2a42e87f6df9c1d4d80a80d9bff9fd677648bf5b90da85a63f3e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002a526(uint param_1)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = 0x1e0;
  if (param_1 < 0x1e1) {
    uVar2 = param_1;
  }
  uVar1 = (undefined2)uVar2;
  if ((uVar2 & 0xffff) < 400) {
    uVar1 = 400;
  }
  FUN_ram_400002f4();
  DAT_ram_3004ad82 = uVar1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.12, address 0x4002a560.
 * REA evidence: ev_4f3e97ebd9ab1a1015284b375eab954c2e4121bba377f312fba41299b1f71aea
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002a560(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_ram_400002f4();
    FUN_ram_4000303c(param_1,&DAT_ram_3006d504,0xc);
    FUN_ram_400002fa(uVar1);
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002a592.
 * REA evidence: ev_0ca918177cb1c52373aeadefd67aa4e7b97f2144f628196ae3142af5cb2c5bce
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002a592(undefined4 *param_1)

{
  return *param_1;
}


/* NanoCore 1.12, address 0x4002a5b0.
 * REA evidence: ev_19fae3e90973033b4b4162e8209f898d986abca42a73ea5ba3aaf313b688150c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002a5b0(uint param_1)

{
  _DAT_ram_30078574 = param_1;
  if (param_1 < _DAT_ram_30078578) {
    _DAT_ram_30078578 = param_1;
  }
  if (_DAT_ram_3007857c < param_1) {
    _DAT_ram_3007857c = param_1;
  }
  return;
}


/* NanoCore 1.12, address 0x4002a5cc.
 * REA evidence: ev_2624c74ea4416124431740696daf8316dacba3293c943918424503a798394257
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002a5cc(void)

{
  _DAT_ram_300788a0 = 0;
  _DAT_ram_300788a2 = 0;
  return;
}


/* NanoCore 1.12, address 0x4002a5de.
 * REA evidence: ev_3e8766ed3af41514623d3e2400087a9553baa33f0a928ba2808880fd6e447920
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4002a5de(void)

{
  undefined4 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = _DAT_ram_300770bc;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.12, address 0x4002a5fe.
 * REA evidence: ev_624ed53214697a52646d409a4e1dc0acb57fed637e803927189271fe5f09bba8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002a5fe(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  FUN_ram_4002bf9e(0x3006e6e4);
  FUN_ram_400002fa(uVar1);
  _DAT_ram_3006e3c4 = 0;
  _DAT_ram_30078500 = 0;
  _DAT_ram_3006e6dc = 0;
  _DAT_ram_3006e6e0 = 0;
  _DAT_ram_300770c4 = 0;
  _DAT_ram_300770c6 = 0;
  _DAT_ram_300770c0 = 0;
  return;
}


/* NanoCore 1.12, address 0x4002a65c.
 * REA evidence: ev_167c0a20506bbd0059bd69edc7886a76e7ddd7da28fe35b0a28b223d1c7fd374
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002a65c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  FUN_ram_400002f4();
  uVar1 = _DAT_ram_30078eb8;
  bVar5 = false;
  uVar4 = _DAT_ram_300796c0;
  for (iVar2 = 0; (uVar3 = uVar1 + iVar2, iVar2 != param_2 && (uVar3 < 0x800)); iVar2 = iVar2 + 1) {
    uVar3 = uVar4 + 1;
    *(undefined1 *)(uVar4 + 0x30078ebc) = *(undefined1 *)(param_1 + iVar2);
    if (0x7ff < uVar3) {
      uVar3 = 0;
    }
    bVar5 = true;
    uVar4 = uVar3;
  }
  if (bVar5) {
    _DAT_ram_30078eb8 = uVar3;
    _DAT_ram_300796c0 = uVar4;
  }
  FUN_ram_400002fa();
  if ((iVar2 != 0) && (uVar1 == 0)) {
    FUN_ram_4002962c();
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x4002a6e4.
 * REA evidence: ev_d5e60f0b5822609235a7cb210997563e900572a90d98ba4ae8816a9cd1d6f9c2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4002a6e4(void)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = _DAT_ram_300770c0;
  bVar2 = false;
  if ((_DAT_ram_3006e3c4 != 0) && (bVar2 = false, _DAT_ram_300770c0 != 0)) {
    uVar3 = FUN_ram_400043ae(0x3c);
    iVar4 = FUN_ram_40004346();
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    bVar2 = (uint)(iVar4 - iVar1) <= uVar3;
  }
  return bVar2;
}


/* NanoCore 1.12, address 0x4002a72c.
 * REA evidence: ev_6fee0d8093eea3000c26acf64768eb59d984c77d785da3d744949b4b18d7fdb7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002a72c(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    memset(param_1,0,param_2);
    _DAT_ram_300770c4 = 0;
    _DAT_ram_300770c6 = 0;
    return;
  }
  _DAT_ram_300770c4 = 0;
  _DAT_ram_300770c6 = 0;
  return;
}


/* NanoCore 1.12, address 0x4002a764.
 * REA evidence: ev_a97b070e3a9bf1b96742918cb3c1ddd68e64d25916f179d73ad32db933616b18
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x4002a836) */
/* WARNING: Removing unreachable block (ram,0x4002a84e) */
/* WARNING: Removing unreachable block (ram,0x4002a7c4) */
/* WARNING: Removing unreachable block (ram,0x4002a7dc) */

void FUN_ram_4002a764(short *param_1,int param_2,short *param_3,int param_4,uint param_5)

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  if ((param_1 == (short *)0x0) || (param_2 == 0)) {
    return;
  }
  if ((param_3 == (short *)0x0) || (param_4 == 0)) {
    memset(param_1,0,param_5 * param_2 * 2);
    return;
  }
  if ((param_5 == 2) && (param_2 == 0x40)) {
    if (param_4 == 0x3f) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      iVar6 = 1;
      psVar1 = param_3;
      do {
        param_1[iVar6 * 2] = (short)(((int)psVar1[2] * (0x3f - iVar6) + *psVar1 * iVar6) / 0x3f);
        (param_1 + 1)[iVar6 * 2] =
             (short)(((int)psVar1[3] * (0x3f - iVar6) + psVar1[1] * iVar6) / 0x3f);
        iVar6 = iVar6 + 1;
        psVar1 = psVar1 + 2;
      } while (iVar6 != 0x3f);
      param_1[0x7e] = param_3[0x7c];
      sVar7 = param_3[0x7d];
    }
    else {
      if (param_4 != 0x41) goto LAB_ram_4002a86a;
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      iVar6 = 1;
      psVar1 = param_3;
      do {
        param_1[iVar6 * 2] = (short)((psVar1[4] * iVar6 + (int)psVar1[2] * (0x3f - iVar6)) / 0x3f);
        (param_1 + 1)[iVar6 * 2] =
             (short)((psVar1[5] * iVar6 + (int)psVar1[3] * (0x3f - iVar6)) / 0x3f);
        iVar6 = iVar6 + 1;
        psVar1 = psVar1 + 2;
      } while (iVar6 != 0x3f);
      param_1[0x7e] = param_3[0x80];
      sVar7 = param_3[0x81];
    }
    param_1[0x7f] = sVar7;
    return;
  }
LAB_ram_4002a86a:
  if (param_2 == param_4) {
    FUN_ram_4000303c(param_1,param_3,param_2 * param_5 * 2);
    return;
  }
  if ((param_4 != 1) && (param_2 != 1)) {
    uVar5 = param_4 - 1;
    uVar2 = param_2 - 1;
    iVar9 = 0;
    uVar8 = 0;
    iVar6 = 0;
    do {
      if (uVar2 == 0) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = uVar8 / uVar2;
      }
      if (uVar4 < uVar5) {
        uVar10 = uVar8;
        if (uVar2 != 0) {
          uVar10 = uVar8 % uVar2;
        }
      }
      else {
        uVar4 = uVar5;
        uVar10 = 0;
      }
      psVar3 = (short *)((int)param_3 + uVar4 * param_5 * 2);
      psVar1 = psVar3;
      if (uVar4 < uVar5) {
        psVar1 = (short *)((int)param_3 + (uVar4 + 1) * param_5 * 2);
      }
      uVar4 = 0;
      do {
        if (uVar2 == 0) {
          sVar7 = -1;
        }
        else {
          sVar7 = (short)((int)((int)psVar1[uVar4] * uVar10 + (int)psVar3[uVar4] * (uVar2 - uVar10))
                         / (int)uVar2);
        }
        param_1[iVar9 + uVar4] = sVar7;
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xff) < param_5);
      iVar6 = iVar6 + 1;
      uVar8 = uVar8 + uVar5;
      iVar9 = iVar9 + param_5;
    } while (param_2 != iVar6);
    return;
  }
  iVar6 = 0;
  do {
    *param_1 = *param_3;
    if (param_5 == 2) {
      param_1[1] = param_3[1];
    }
    iVar6 = iVar6 + 1;
    param_1 = param_1 + param_5;
  } while (param_2 != iVar6);
  return;
}


/* NanoCore 1.12, address 0x4002a8aa.
 * REA evidence: ev_4268be4502fe20ff08866e64e879eefae7dc2e2dddbe325f2b64da0c8cd18790
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4002a8aa(int param_1,int param_2,undefined4 param_3,int param_4,uint param_5,
                     int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int in_t5;
  uint uVar10;
  
  uVar6 = param_4 - 1;
  uVar2 = param_2 - 1;
  iVar9 = 0;
  uVar7 = 0;
  iVar8 = 0;
  do {
    if (uVar2 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = uVar7 / uVar2;
    }
    if (uVar5 < uVar6) {
      uVar10 = uVar7;
      if (uVar2 != 0) {
        uVar10 = uVar7 % uVar2;
      }
    }
    else {
      uVar5 = uVar6;
      uVar10 = 0;
    }
    iVar3 = param_6 + uVar5 * in_t5;
    iVar1 = iVar3;
    if (uVar5 < uVar6) {
      iVar1 = param_6 + (uVar5 + 1) * in_t5;
    }
    uVar5 = 0;
    do {
      if (uVar2 == 0) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = (undefined2)
                ((int)((int)*(short *)(iVar1 + uVar5 * 2) * uVar10 +
                      (int)*(short *)(iVar3 + uVar5 * 2) * (uVar2 - uVar10)) / (int)uVar2);
      }
      *(undefined2 *)(param_1 + iVar9 * 2 + uVar5 * 2) = uVar4;
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xff) < param_5);
    iVar8 = iVar8 + 1;
    uVar7 = uVar7 + uVar6;
    iVar9 = iVar9 + param_5;
  } while (param_2 != iVar8);
  return;
}


/* NanoCore 1.12, address 0x4002a926.
 * REA evidence: ev_ab3b37e8681f7bc89a75f0f24f42a7edd2fa20733292516267d7c65f5da3e779
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_4002a926(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_40004544(param_1,0x203);
  if (((iVar1 == 0) || (iVar1 = FUN_ram_40004544(param_1,0x103), iVar1 == 0)) ||
     (iVar1 = FUN_ram_40004544(param_1,3), iVar1 == 0)) {
    FUN_ram_4000465a(param_1,&LAB_ram_4002a968);
    iVar1 = 0;
  }
  return iVar1;
}


/* NanoCore 1.12, address 0x4002a986.
 * REA evidence: ev_07f34abb72662698f0813422012550b640542045c226184f4af53ec8d5d6b011
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002a986(short *param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = _DAT_ram_3006e6e0;
  if ((param_1 == (short *)0x0) || (param_2 == 0)) {
    return;
  }
  if (1 < _DAT_ram_3006e6e0) {
    iVar6 = _DAT_ram_3006e6e0 - 1;
    uVar3 = param_2 + _DAT_ram_3006e6dc;
    bVar1 = false;
    uVar5 = _DAT_ram_3006e6dc;
    do {
      if (uVar2 <= uVar5) {
        if (!bVar1) {
          _DAT_ram_3006e6e0 = 0;
          return;
        }
        _DAT_ram_3006e6dc = uVar5;
        _DAT_ram_3006e6e0 = 0;
        return;
      }
      if (iVar6 == 0) {
        sVar4 = -1;
      }
      else {
        sVar4 = (short)((int)((int)*param_1 * uVar5) / iVar6);
      }
      *param_1 = sVar4;
      if (param_3 == 2) {
        if (iVar6 == 0) {
          sVar4 = -1;
        }
        else {
          sVar4 = (short)((int)((int)param_1[1] * uVar5) / iVar6);
        }
        param_1[1] = sVar4;
      }
      uVar5 = uVar5 + 1;
      param_1 = param_1 + param_3;
      bVar1 = true;
    } while (uVar5 != uVar3);
    _DAT_ram_3006e6dc = uVar5;
    if (uVar5 < uVar2) {
      return;
    }
  }
  _DAT_ram_3006e6e0 = 0;
  return;
}


/* NanoCore 1.12, address 0x4002aa00.
 * REA evidence: ev_a2cb1b15710c962e3eb012111349d1bd56103c255a1cafa027c13bcbf2ae4c79
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4002aa00(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      return 0;
    }
    uVar1 = FUN_ram_400002f4();
    if (_DAT_ram_30078bac != _DAT_ram_30078ba4) {
      if (_DAT_ram_30078ba8 < param_2) {
        param_2 = (uint)_DAT_ram_30078ba8;
      }
      if (param_2 != 0) {
        FUN_ram_4000303c(param_1,0x300788a4,param_2);
      }
      _DAT_ram_30078ba4 = _DAT_ram_30078bac;
      FUN_ram_400002fa(uVar1);
      return param_2;
    }
    FUN_ram_400002fa();
  }
  return 0;
}


/* NanoCore 1.12, address 0x4002ab5e.
 * REA evidence: ev_873fb861da47bbe3c4211995f8af8e0f6a62714bd5d55a9b826930c5236e1c04
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002ab5e(byte *param_1,uint param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte local_330 [772];
  
  if (((param_1 == (byte *)0x0) || (param_2 == 0)) || ((param_2 & 3) != 0)) {
    return 0;
  }
  pbVar3 = param_1;
  uVar6 = 0;
  cVar4 = DAT_ram_3006e6d8;
LAB_ram_4002abe6:
  uVar7 = (uint)*pbVar3;
  if ((*pbVar3 & 0xf0) != 0) goto switchD_ram_4002ac06_default;
  bVar1 = pbVar3[1];
  switch(uVar7 - 2 & 0xff) {
  case 0:
    if ((bVar1 & 0xfd) == 0xf1) goto LAB_ram_4002ac10;
    goto switchD_ram_4002ac06_default;
  case 1:
    if (bVar1 == 0xf2) goto LAB_ram_4002ac10;
    goto switchD_ram_4002ac06_default;
  case 2:
    if ((cVar4 != '\0') || (bVar1 == 0xf0)) {
      uVar7 = 3;
      cVar4 = '\x01';
      goto LAB_ram_4002ac10;
    }
    goto switchD_ram_4002ac06_default;
  case 3:
    if (cVar4 != '\0') {
      cVar4 = '\0';
      goto LAB_ram_4002acba;
    }
    if (bVar1 != 0xf7) goto switchD_ram_4002ac06_default;
    goto LAB_ram_4002acba;
  case 4:
    if (cVar4 != '\0') {
      cVar4 = '\0';
      goto LAB_ram_4002acc4;
    }
    if (bVar1 != 0xf0) goto switchD_ram_4002ac06_default;
    goto LAB_ram_4002acc4;
  case 5:
    if (cVar4 == '\0') {
      if (bVar1 != 0xf0) goto switchD_ram_4002ac06_default;
    }
    else {
      cVar4 = '\0';
    }
    break;
  case 6:
    if ((bVar1 & 0xf0) != 0x80) goto switchD_ram_4002ac06_default;
    break;
  case 7:
    if ((bVar1 & 0xf0) != 0x90) goto switchD_ram_4002ac06_default;
    break;
  case 8:
    if ((bVar1 & 0xf0) != 0xa0) goto switchD_ram_4002ac06_default;
    break;
  case 9:
    if ((bVar1 & 0xf0) != 0xb0) goto switchD_ram_4002ac06_default;
    break;
  case 10:
    if ((bVar1 & 0xf0) == 0xc0) goto LAB_ram_4002acc4;
    goto switchD_ram_4002ac06_default;
  case 0xb:
    if ((bVar1 & 0xf0) != 0xd0) goto switchD_ram_4002ac06_default;
LAB_ram_4002acc4:
    uVar7 = 2;
    goto LAB_ram_4002ac10;
  case 0xc:
    if ((bVar1 & 0xf0) != 0xe0) goto switchD_ram_4002ac06_default;
    break;
  case 0xd:
    if (bVar1 < 0xf8) goto switchD_ram_4002ac06_default;
LAB_ram_4002acba:
    uVar7 = 1;
    goto LAB_ram_4002ac10;
  default:
    goto switchD_ram_4002ac06_default;
  }
  uVar7 = 3;
LAB_ram_4002ac10:
  uVar8 = uVar7 + uVar6;
  if (0x300 < uVar8) goto switchD_ram_4002ac06_default;
  uVar5 = 0;
  do {
    local_330[uVar5 + uVar6] = pbVar3[uVar5 + 1];
    uVar5 = uVar5 + 1;
  } while ((uVar5 & 0xff) < uVar7);
  pbVar3 = pbVar3 + 4;
  uVar6 = uVar8;
  if (param_2 <= (uint)((int)pbVar3 - (int)param_1)) {
    DAT_ram_3006e6d8 = cVar4;
    if (uVar8 == 0) {
switchD_ram_4002ac06_default:
      uVar2 = 0;
    }
    else {
      FUN_ram_4002a65c(local_330,uVar8);
      if (0x20 < uVar8) {
        uVar8 = 0x20;
      }
      FUN_ram_400112aa(s_CFctrl_usb_midi_ram_4009bfce + 2,local_330,uVar8 & 0xff);
      uVar2 = 1;
    }
    return uVar2;
  }
  goto LAB_ram_4002abe6;
}


/* NanoCore 1.12, address 0x4002ad2a.
 * REA evidence: ev_258f4572f44990b9e788edab762d2ccfebaf42bbc4565d8387aa88220e2ab887
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002ad2a(int param_1)

{
  char cVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar4 = _DAT_ram_30078590;
  if (_DAT_ram_30078588 != 0) {
    if (_DAT_ram_30078590 != 0) {
      uVar6 = FUN_ram_400043ae(2);
      iVar4 = FUN_ram_40004a22(iVar4,uVar6);
      if (iVar4 != 0) {
        return;
      }
    }
    if (param_1 == 0) {
      iVar4 = FUN_ram_4002a6e4();
      if (iVar4 == 0) {
        FUN_ram_40037fd2(5);
      }
    }
    else {
      FUN_ram_40038132(5);
    }
    cVar3 = '\b';
    while (uVar5 = FUN_ram_40004604(_DAT_ram_30078588,0,0x300796c4,0x400), uVar5 != 0) {
      _DAT_ram_30078508 = _DAT_ram_30078508 + uVar5;
      if (DAT_ram_3007859d == '\0') {
        FUN_ram_4002c2f6(0x300770c8,0x300796c4,uVar5);
      }
      else {
        uVar9 = 0;
        do {
          uVar8 = (uint)_DAT_ram_300788a0;
          cVar1 = *(char *)(uVar9 + 0x300796c4);
          if (uVar8 == 0) {
            if (cVar1 == -0x56) {
              _DAT_ram_300788a0 = 1;
LAB_ram_4002ae52:
              DAT_ram_300785a0 = 0xaa;
            }
          }
          else if (uVar8 == 1) {
            if (cVar1 == 'U') {
              _DAT_ram_300788a0 = 2;
              DAT_ram_300785a1 = 0x55;
            }
            else {
              if (cVar1 == -0x56) goto LAB_ram_4002ae52;
LAB_ram_4002ae92:
              FUN_ram_4002a5cc();
            }
          }
          else {
            if (0x2ff < uVar8) goto LAB_ram_4002ae92;
            uVar7 = uVar8 + 1 & 0xffff;
            (&DAT_ram_300785a0)[uVar8] = cVar1;
            _DAT_ram_300788a0 = (ushort)((uVar8 + 1) * 0x10000 >> 0x10);
            if (uVar7 == 4) {
              _DAT_ram_300788a2 = _DAT_ram_300785a2 + 6;
              if (0x2fa < _DAT_ram_300785a2) goto LAB_ram_4002ae92;
            }
            else if ((_DAT_ram_300788a2 != 0) && (uVar7 == _DAT_ram_300788a2)) {
              uVar8 = FUN_ram_4002c1ee(0,&DAT_ram_300785a0,uVar7 - 2);
              uVar2 = _DAT_ram_300788a2;
              uVar7 = (uint)_DAT_ram_300788a2;
              if (uVar8 == *(ushort *)(uVar7 + 0x3007859e)) {
                if ((uVar7 - 1 & 0xffff) < 0x300) {
                  uVar6 = FUN_ram_400002f4();
                  FUN_ram_4000303c(0x300788a4,&DAT_ram_300785a0,uVar7);
                  _DAT_ram_30078ba8 = uVar2;
                  _DAT_ram_30078bac = _DAT_ram_30078bac + 1;
                  FUN_ram_400002fa(uVar6);
                }
              }
              else {
                _DAT_ram_30078560 = _DAT_ram_30078560 + 1;
              }
              goto LAB_ram_4002ae92;
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar5 != uVar9);
      }
      if ((uVar5 < 0x400) || (cVar3 = cVar3 + -1, cVar3 == '\0')) break;
    }
    if (_DAT_ram_30078590 != 0) {
      FUN_ram_40004b14();
      return;
    }
  }
  return;
}


/* NanoCore 1.12, address 0x4002af58.
 * REA evidence: ev_cf4b05724083100eb69c5bc9df139e8c88240ffb02d4b1e8daa8ad7733b5666e
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_4002af58(void)

{
  return 0;
}


/* NanoCore 1.12, address 0x4002af5c.
 * REA evidence: ev_5cee733157ac193e17f721ed5b566d256b6d4a8f6b5e88417710327423b8ef53
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002af5c(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  int *piVar5;
  char cVar6;
  
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    cVar6 = '\x02';
  }
  else {
    cVar6 = '\x01';
    if (cVar1 != '\x05') {
      if (cVar1 == '\x02') {
        _DAT_ram_30078514 = _DAT_ram_30078514 + 1;
        FUN_ram_4002a65c(*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 2));
        uVar4 = *(ushort *)(param_1 + 2);
        if (uVar4 == 0) {
          return;
        }
        if (0x20 < uVar4) {
          uVar4 = 0x20;
        }
        FUN_ram_400112aa(s_uart_rx_ram_4009c018,*(undefined4 *)(param_1 + 8),uVar4 & 0xff);
        return;
      }
      if (cVar1 == '\x03') {
        _DAT_ram_30078518 = _DAT_ram_30078518 + 1;
        iVar2 = FUN_ram_4002ab5e(*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 2));
        if (iVar2 != 0) {
          _DAT_ram_30078514 = _DAT_ram_30078514 + 1;
          return;
        }
        iVar2 = FUN_ram_4002dbd2(*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 2));
        if (iVar2 != 0) {
          return;
        }
        iVar2 = FUN_ram_4002af58(*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 2));
        if (iVar2 != 0) {
          return;
        }
        uVar3 = FUN_ram_400002f4();
        _DAT_ram_3006e6d0 = *(ushort *)(param_1 + 2);
        if (0x300 < _DAT_ram_3006e6d0) {
          _DAT_ram_3006e6d0 = 0x300;
        }
        if (_DAT_ram_3006e6d0 != 0) {
          FUN_ram_4000303c(0x3006e3d0,*(undefined4 *)(param_1 + 8),_DAT_ram_3006e6d0);
        }
        piVar5 = (int *)&DAT_ram_3006e6d4;
      }
      else {
        if (cVar1 != '\x04') {
          return;
        }
        _DAT_ram_3007851c = _DAT_ram_3007851c + 1;
        uVar3 = FUN_ram_400002f4();
        _DAT_ram_30078ba8 = *(ushort *)(param_1 + 2);
        if (0x300 < _DAT_ram_30078ba8) {
          _DAT_ram_30078ba8 = 0x300;
        }
        if (_DAT_ram_30078ba8 != 0) {
          FUN_ram_4000303c(0x300788a4,*(undefined4 *)(param_1 + 8),_DAT_ram_30078ba8);
        }
        piVar5 = (int *)&DAT_ram_30078bac;
      }
      *piVar5 = *piVar5 + 1;
      FUN_ram_400002fa(uVar3);
      return;
    }
  }
  _DAT_ram_30078510 = _DAT_ram_30078510 + 1;
  if ((_DAT_ram_300780f8 == 0) && (*(short *)(param_1 + 2) != 0)) {
    if (DAT_ram_3004ad85 != cVar6) {
      FUN_ram_4002a5fe();
      DAT_ram_3004ad85 = cVar6;
    }
    _DAT_ram_3006e3c4 = 1;
    _DAT_ram_300770c0 = FUN_ram_40004346();
    iVar2 = FUN_ram_4002bfb0(0x3006e6e4,*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 2));
    if (iVar2 == 0) {
      _DAT_ram_30078558 = _DAT_ram_30078558 + 1;
    }
    else {
      _DAT_ram_3007855c = _DAT_ram_3007855c + 1;
    }
  }
  return;
}


