/* NanoCore 1.11 analysis module: unresolved/bank_4/block_40029000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.11, address 0x4002900a.
 * REA evidence: ev_7129fbfdbd0deec7df2ba91ceb82b8e6ec41b2d04eca4fd037e8b008c2443425
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002900a(undefined4 param_1)

{
  FUN_ram_400002f4();
  _DAT_ram_3006cd60 = param_1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x40029028.
 * REA evidence: ev_5753e1bac376ffe0b5abd58cf2021d0eae25f03d833f279d093a8366eef86fbd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40029028(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_ram_400042ea();
    uVar2 = FUN_ram_400002f4();
    FUN_ram_40028d48(param_1,uVar1);
    FUN_ram_400002fa(uVar2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40029058.
 * REA evidence: ev_a082decf5feb44745961d95efb0e318bc1c9b2753dd7fb413fd11c2003728cf7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029058(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_ram_400042ea();
    uVar2 = FUN_ram_400002f4();
    FUN_ram_40028d48(param_1,uVar1);
    _DAT_ram_3006cd5c = param_1 | _DAT_ram_3006cd5c;
    FUN_ram_400002fa(uVar2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40029096.
 * REA evidence: ev_2b59bd607819a176c062421508c113a3a653ec7fc36a0b8cc6400c1e90ba658d
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029096(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_ram_400042ea();
    FUN_ram_400002f4();
    uVar2 = 0;
    do {
      if ((1 << (uVar2 & 0x1f) & param_1) != 0) {
        *(undefined4 *)(uVar2 * 4 + 0x3006ccd4) = uVar1;
        *(undefined4 *)(uVar2 * 4 + 0x3006cc48) = uVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 0x20);
    _DAT_ram_3006ccd0 = _DAT_ram_3006ccd0 | param_1;
    _DAT_ram_3006cc44 = param_1 | _DAT_ram_3006cc44;
    FUN_ram_400002fa();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40029104.
 * REA evidence: ev_bb2bf02a1f4d8d5e82e38efc15d0751e533f20c8f705c774ca8a64b5b9df7900
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029104(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_ram_400042ea();
    uVar2 = FUN_ram_400002f4();
    _DAT_ram_3006ccd0 = ~param_1 & _DAT_ram_3006ccd0;
    FUN_ram_40028d48(param_1,uVar1);
    FUN_ram_400002fa(uVar2);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40029146.
 * REA evidence: ev_a29c83c4c012d1c5212b9da643dd0d0e813252c8640330d8fd2597bf29ba1b81
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029146(void)

{
  FUN_ram_400002f4();
  _DAT_ram_3006cccc = 1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x40029160.
 * REA evidence: ev_61325d242aacadb3337e77808343b76614448d3e975d4c5e63964e037b02705a
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40029160(void)

{
  FUN_ram_4003f100();
  FUN_ram_4003ec0e(1);
  FUN_ram_400065c6(0x32);
  mstatus = mstatus & 0xfffffff7;
  FUN_ram_40028d7a();
  FUN_ram_40028da4(1000);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* NanoCore 1.11, address 0x40029192.
 * REA evidence: ev_336bba78d16f2fef297727dce1d2a25c82db4fba7650e8aa82a7afadb19080bf
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029192(void)

{
  int iVar1;
  
  _DAT_ram_3006cd58 = 0;
  _DAT_ram_3006ccc8 = 0;
  _DAT_ram_3006d1fc = 0;
  _DAT_ram_3006cccc = 0;
  _DAT_ram_3006cd60 = 0;
  _DAT_ram_3006cd5c = 0;
  _DAT_ram_3006cc44 = 0;
  _DAT_ram_3006ccd0 = 0;
  _DAT_ram_3006cd64 = 0;
  _DAT_ram_3006d1f8 = 0;
  DAT_ram_30049e3d = 0xff;
  iVar1 = 0;
  do {
    *(undefined4 *)(iVar1 * 4 + 0x3006cc48) = 0;
    *(undefined4 *)(iVar1 * 4 + 0x3006ccd4) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x20);
  _DAT_ram_3006cd54 = FUN_ram_400042ea();
  FUN_ram_4003fcb6();
  FUN_ram_4003fcd2();
  FUN_ram_4003fd22();
  iVar1 = FUN_ram_40028d7a();
  if (iVar1 == 0) {
    FUN_ram_40028da4(60000);
    iVar1 = FUN_ram_4000642e(0x3006cd68,s_sys_recover_ram_40096b04,FUN_ram_40028f22,0,0x3006cdf8,
                             0x400,8,10);
    if ((iVar1 == 0) && (iVar1 = FUN_ram_40006632(0x3006cd68), iVar1 == 0)) {
      _DAT_ram_30080c08 = FUN_ram_40028dd4;
      _DAT_ram_3006d1fc = 1;
    }
  }
  return;
}


/* NanoCore 1.11, address 0x4002929a.
 * REA evidence: ev_c5fab0c787f8daeb6ec517d1788de2d08259a0549c150ad84216a1161c913623
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002929a(void)

{
  FUN_ram_400002f4();
  DAT_ram_3006d20c = 0;
  _DAT_ram_3006d204 = 0;
  DAT_ram_3006d208 = 0;
  DAT_ram_3006d209 = 0;
  _DAT_ram_3006d20a = 0;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x400292c6.
 * REA evidence: ev_c47497a262d894b04e66d136d3d88093d5d0fdd0af559daf86e73d834c79fa60
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400292c6(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_400064b8(s_tuner_ram_4009504c,FUN_ram_40029360,0,0x1000,0x12,10);
  if (iVar1 != 0) {
    FUN_ram_40006632();
  }
  return 0;
}


/* NanoCore 1.11, address 0x400292f4.
 * REA evidence: ev_765ac57f6d5013b81a205639f216513d3a2c9cc4eede53839b8e3f41dc5bc014
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

bool FUN_ram_400292f4(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  
  while ((uVar1 = *param_3, uVar1 < param_2 && (DAT_ram_3006d200 != '\0'))) {
    iVar2 = FUN_ram_4000df28(param_1 + uVar1 * 2,param_2 - uVar1);
    if (iVar2 == 0) {
      FUN_ram_400065c6(2);
    }
    else {
      *param_3 = *param_3 + iVar2;
    }
  }
  return DAT_ram_3006d200 != '\0' && param_2 <= uVar1;
}


/* NanoCore 1.11, address 0x40029360.
 * REA evidence: ev_64fc6f70e932a1162cafa0e979d8412b59331750860788f27c76b6a36ff84a90
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x400294a6) */
/* WARNING: Removing unreachable block (ram,0x40029498) */
/* WARNING: Removing unreachable block (ram,0x4002970c) */
/* WARNING: Removing unreachable block (ram,0x4002974a) */
/* WARNING: Removing unreachable block (ram,0x40029752) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029360(void)

{
  short sVar1;
  uint *puVar2;
  float fVar3;
  int iVar4;
  short *psVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined2 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined1 *puVar18;
  int iVar19;
  undefined4 *puVar20;
  short *psVar21;
  int iVar22;
  ushort uVar23;
  uint uVar24;
  uint uVar25;
  undefined4 *puVar26;
  float fVar27;
  float fVar28;
  undefined8 unaff_fs5;
  undefined8 uVar29;
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
  FUN_ram_4002929a();
  fVar12 = DAT_ram_40096b18;
  fVar11 = DAT_ram_40096b14;
  fVar10 = DAT_ram_40096b10;
  fVar9 = DAT_ram_400954bc;
  fVar8 = DAT_ram_400952ac;
LAB_ram_400293be:
  while (DAT_ram_3006d200 == '\0') {
    acStack_88[0] = '\0';
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    cStack_78 = '\0';
    fStack_74 = 0.0;
    FUN_ram_400065c6(0x32);
  }
  if (acStack_88[0] != '\0') {
LAB_ram_4002941e:
    uVar23 = DAT_ram_30049e3e;
    uVar15 = FUN_ram_4000dfa0();
    if (uVar15 != 0) {
      uVar16 = 0;
      uVar6 = 0;
      iVar14 = 0;
      do {
        iVar4 = iVar14 * 2;
        iVar22 = iVar14 * 2;
        iVar14 = iVar14 + 1;
        uVar24 = ((int)*(short *)(&DAT_ram_3006eb90 + iVar4) >> 0xf ^
                 (uint)*(ushort *)(&DAT_ram_3006eb90 + iVar22)) -
                 ((int)*(short *)(&DAT_ram_3006eb90 + iVar4) >> 0xf) & 0xffff;
        uVar6 = uVar6 + uVar24;
        if (uVar16 < uVar24) {
          uVar16 = uVar24;
        }
      } while (iVar14 != 0x400);
      if ((0x77 < uVar16) && (0x17 < (uint)(uVar6 >> 10))) {
        if (uVar15 < 4000) {
          uVar16 = 2;
LAB_ram_400294a4:
          uVar24 = uVar15 / 0x14;
        }
        else {
          uVar16 = uVar15 / 2000;
          uVar24 = 600;
          if (uVar15 < 0x2ef4) goto LAB_ram_400294a4;
        }
        if (uVar16 < uVar24) {
          puVar26 = (undefined4 *)&DAT_ram_3006d6c8;
          uVar25 = 0;
          puVar20 = puVar26;
          do {
            *puVar20 = 0;
            puVar20[1] = 0;
            uVar25 = uVar25 + 1;
            puVar20 = puVar20 + 2;
          } while (uVar25 <= uVar24);
          puVar18 = &DAT_ram_3006d6c8;
          uVar25 = 1;
          do {
            psVar21 = (short *)&DAT_ram_3006eb90;
            lVar7 = 0;
            iVar14 = 0;
            do {
              sVar1 = *psVar21;
              psVar5 = psVar21 + uVar25;
              iVar14 = iVar14 + 1;
              psVar21 = psVar21 + 1;
              lVar7 = (longlong)((int)sVar1 - (int)*psVar5) * (longlong)((int)sVar1 - (int)*psVar5)
                      + lVar7;
            } while (iVar14 != 0x400 - uVar25);
            *(longlong *)(puVar18 + 8) = lVar7;
            uVar25 = uVar25 + 1;
            puVar18 = puVar18 + 8;
          } while (uVar25 <= uVar24);
          _DAT_ram_3006d210 = 0;
          uVar6 = 1;
          lVar7 = 0;
          do {
            puVar2 = puVar26 + 2;
            uVar13 = 0;
            lVar7 = lVar7 + *(longlong *)puVar2;
            if (lVar7 != 0) {
              uVar29 = FUN_ram_40003b9c((int)(uVar6 * *(longlong *)puVar2) << 0xc,
                                        (int)((uVar6 * *(longlong *)puVar2 & 0xffffffff00000000 |
                                              (ulonglong)*puVar2 * (uVar6 & 0xffffffff) & 0xffffffff
                                              ) >> 0x14),(int)lVar7,(int)((ulonglong)lVar7 >> 0x20))
              ;
              if (((int)((ulonglong)uVar29 >> 0x20) != 0) ||
                 (uVar25 = (uint)uVar29, 0xffff < (uint)uVar29)) {
                uVar25 = 0xffff;
              }
              uVar13 = (undefined2)uVar25;
            }
            *(undefined2 *)(&DAT_ram_3006d210 + (int)uVar6 * 2) = uVar13;
            uVar6 = uVar6 + 1;
            puVar26 = puVar26 + 2;
          } while ((uint)uVar6 <= uVar24);
          do {
            uVar25 = uVar16 + 1;
            if (*(undefined **)(&DAT_ram_3006d210 + uVar16 * 2) < &mdbound) goto LAB_ram_4002959a;
            uVar16 = uVar25;
          } while (uVar25 <= uVar24);
        }
      }
    }
    goto LAB_ram_400296e0;
  }
  if ((uStack_84 < 0x401) &&
     (iVar14 = FUN_ram_400292f4(&DAT_ram_3006eb90,0x400,&uStack_84), iVar14 != 0)) {
    acStack_88[0] = '\x01';
    goto LAB_ram_4002941e;
  }
  goto LAB_ram_400293f2;
  while (*(ushort *)(&DAT_ram_3006d210 + uVar16 * 2) < *(ushort *)(uVar16 * 2 + 0x3006d20e)) {
LAB_ram_4002959a:
    uVar25 = uVar16;
    uVar16 = uVar25 + 1;
    if (uVar24 < uVar16) break;
  }
  fVar27 = (float)(int)uVar25;
  if (uVar25 < uVar24) {
    fVar28 = ((float)*(ushort *)(&DAT_ram_3006d210 + uVar25 * 2) * (float)PTR_entry_ram_40094618 -
             (float)*(ushort *)(&DAT_ram_3006d210 + uVar16 * 2)) -
             (float)*(ushort *)(&DAT_ram_3006d210 + (uVar25 - 1) * 2);
    if (fVar28 != 0.0) {
      fVar27 = fVar27 + ((float)*(ushort *)(&DAT_ram_3006d210 + uVar16 * 2) -
                        (float)*(ushort *)(&DAT_ram_3006d210 + (uVar25 - 1) * 2)) /
                        (fVar28 + fVar28);
    }
  }
  if (((fVar27 <= 0.0) || (fVar27 = (float)uVar15 / fVar27, fVar27 <= fVar11)) || (fVar8 <= fVar27))
  {
LAB_ram_400296e0:
    uStack_7c = uStack_7c + 1;
    if (uStack_7c < 10) goto LAB_ram_400297a6;
    cStack_78 = '\0';
    fStack_74 = 0.0;
  }
  else {
    uStack_7c = 0;
    if (cStack_78 == '\0') {
      cStack_78 = '\x01';
    }
    else {
      fVar27 = (fVar27 - fStack_74) * DAT_ram_4009605c + fStack_74;
    }
    fStack_94 = 0.0;
    uStack_90 = 0;
    uStack_8c = 0;
    if (0x1e0 < uVar23) {
      uVar23 = 0x1e0;
    }
    if (uVar23 < 400) {
      uVar23 = 400;
    }
    fVar28 = (fVar12 / (float)uVar23) * fVar27;
    iVar14 = 0;
    if ((DAT_ram_40096b1c < fVar28) && (iVar14 = 0x7f, fVar28 < DAT_ram_40096b20)) {
      iVar4 = 0x7f;
      iVar14 = 0;
      while (iVar22 = iVar4, 1 < iVar22 - iVar14) {
        iVar19 = (iVar14 + iVar22) / 2;
        iVar4 = iVar19;
        if ((float)*(undefined8 *)((int)&DAT_ram_40096b24 + iVar19 * 4 + 4) <= fVar28) {
          iVar4 = iVar22;
          iVar14 = iVar19;
        }
      }
      if ((float)*(undefined8 *)((int)&DAT_ram_40096b24 + iVar22 * 4 + 4) - fVar28 <
          fVar28 - (float)*(undefined8 *)((int)&DAT_ram_40096b24 + iVar14 * 4 + 4)) {
        iVar14 = iVar22;
      }
    }
    fVar28 = ((float)uVar23 / fVar12) *
             (float)*(undefined8 *)((int)&DAT_ram_40096b24 + iVar14 * 4 + 4);
    fStack_74 = fVar27;
    if (0.0 < fVar28) {
      fVar3 = ((fVar27 - fVar28) / fVar28) * (float)DAT_ram_40096b24;
      fVar28 = fVar9;
      if ((fVar3 <= fVar9) && (fVar28 = fVar3, fVar3 < fVar10)) {
        fVar28 = fVar10;
      }
      if (fVar28 < 0.0) {
        fVar28 = fVar28 - DAT_ram_40094634;
      }
      else {
        fVar28 = fVar28 + DAT_ram_40094634;
      }
      uVar17 = FUN_ram_400002f4();
      uStack_90 = CONCAT22((short)(int)fVar28,
                           CONCAT11((char)((uint)((iVar14 / 0xc + -1) * 0x1000000) >> 0x18),
                                    (char)(iVar14 % 0xc)));
      uStack_8c = CONCAT31(uStack_8c._1_3_,1);
      fStack_94 = fVar27;
      FUN_ram_4000304c(&DAT_ram_3006d204,&fStack_94,0xc);
      FUN_ram_400002fa(uVar17);
      goto LAB_ram_400297a6;
    }
  }
  FUN_ram_4002929a();
LAB_ram_400297a6:
  if ((uStack_80 < 0x101) && (iVar14 = FUN_ram_400292f4(0x3006e990,0x100,&uStack_80), iVar14 != 0))
  {
    FUN_ram_40003100(&DAT_ram_3006eb90,0x3006ed90,0x600);
    FUN_ram_4000304c(0x3006f190,0x3006e990,0x200);
    uStack_80 = 0;
  }
  else {
LAB_ram_400293f2:
    acStack_88[0] = '\0';
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    cStack_78 = '\0';
    fStack_74 = 0.0;
  }
  goto LAB_ram_400293be;
}


/* NanoCore 1.11, address 0x40029806.
 * REA evidence: ev_70f6c6804ffa1a6d3efe0cc43abcf3eaa170ec8ba0fe4824b4f594de95e5ef39
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40029806(int param_1)

{
  FUN_ram_400002f4();
  DAT_ram_3006d200 = param_1 != 0;
  FUN_ram_400002fa();
  if (param_1 == 0) {
    FUN_ram_4002929a();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x40029836.
 * REA evidence: ev_9239a10da559fffdca392ad75917722bde530fd88f779e6adbba4291af5ddad7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40029836(uint param_1)

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
  DAT_ram_30049e3e = uVar1;
  FUN_ram_400002fa();
  return;
}


/* NanoCore 1.11, address 0x40029870.
 * REA evidence: ev_7bb0460cb2879eba42f39f49f984cafc16a999d6b4bc9d60310a5d5bf924b89c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40029870(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_ram_400002f4();
    FUN_ram_4000304c(param_1,&DAT_ram_3006d204,0xc);
    FUN_ram_400002fa(uVar1);
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400298a2.
 * REA evidence: ev_125f65c030278603fad07be4c2c71d92ab30cc4f13a73ebb89f26785894fb513
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_400298a2(undefined4 *param_1)

{
  return *param_1;
}


/* NanoCore 1.11, address 0x400298c0.
 * REA evidence: ev_2cff4f5b9cd0c88a39d75e808e6ce6f46a9a26dc517d9b2df1cceec0dcb0139b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400298c0(uint param_1)

{
  _DAT_ram_30079540 = param_1;
  if (param_1 < _DAT_ram_30079544) {
    _DAT_ram_30079544 = param_1;
  }
  if (_DAT_ram_30079548 < param_1) {
    _DAT_ram_30079548 = param_1;
  }
  return;
}


/* NanoCore 1.11, address 0x400298dc.
 * REA evidence: ev_de3a953e4f140c62f320dd4f641831777201348f39b867607fbd5b02d4b0af92
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_400298dc(void)

{
  _DAT_ram_3007986c = 0;
  _DAT_ram_3007986e = 0;
  return;
}


/* NanoCore 1.11, address 0x400298ee.
 * REA evidence: ev_467e14f8c1d4fb69e3e00aa780263419ae5ccac40fce268111c190e1acbbcb04
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_400298ee(void)

{
  undefined4 uVar1;
  
  FUN_ram_400002f4();
  uVar1 = _DAT_ram_30078088;
  FUN_ram_400002fa();
  return uVar1;
}


/* NanoCore 1.11, address 0x4002990e.
 * REA evidence: ev_86d75b56901ea8fe5c65cd11ca835b5b60ac52d55f8a731d9a95727827d8c9ba
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002990e(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ram_400002f4();
  FUN_ram_4002b21c(0x3006f6b0);
  FUN_ram_400002fa(uVar1);
  _DAT_ram_3006f390 = 0;
  _DAT_ram_300794cc = 0;
  _DAT_ram_3006f6a8 = 0;
  _DAT_ram_3006f6ac = 0;
  _DAT_ram_30078090 = 0;
  _DAT_ram_30078092 = 0;
  _DAT_ram_3007808c = 0;
  return;
}


/* NanoCore 1.11, address 0x4002996c.
 * REA evidence: ev_1585c39b27e80b453622ca1fc54babc2e34cca764e497733f0914d136d944c1b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4002996c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  FUN_ram_400002f4();
  uVar1 = _DAT_ram_30079e84;
  bVar5 = false;
  uVar4 = _DAT_ram_3007a68c;
  for (iVar2 = 0; (uVar3 = uVar1 + iVar2, iVar2 != param_2 && (uVar3 < 0x800)); iVar2 = iVar2 + 1) {
    uVar3 = uVar4 + 1;
    *(undefined1 *)(uVar4 + 0x30079e88) = *(undefined1 *)(param_1 + iVar2);
    if (0x7ff < uVar3) {
      uVar3 = 0;
    }
    bVar5 = true;
    uVar4 = uVar3;
  }
  if (bVar5) {
    _DAT_ram_30079e84 = uVar3;
    _DAT_ram_3007a68c = uVar4;
  }
  FUN_ram_400002fa();
  if ((iVar2 != 0) && (uVar1 == 0)) {
    FUN_ram_40028918();
    return;
  }
  return;
}


/* NanoCore 1.11, address 0x400299f4.
 * REA evidence: ev_61194ce3d09f19d410e2d37e42cbd161ffc9ad80e0c0c8bc0f9e1664a7a26461
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_400299f4(void)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = _DAT_ram_3007808c;
  bVar2 = false;
  if ((_DAT_ram_3006f390 != 0) && (bVar2 = false, _DAT_ram_3007808c != 0)) {
    uVar3 = FUN_ram_40004352(0x3c);
    iVar4 = FUN_ram_400042ea();
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    bVar2 = (uint)(iVar4 - iVar1) <= uVar3;
  }
  return bVar2;
}


/* NanoCore 1.11, address 0x40029a3c.
 * REA evidence: ev_122cd065ce89f61a6733461332219f1dcc92f4c4dbc1be12cb84f6f9698d28e3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029a3c(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    memset(param_1,0,param_2);
    _DAT_ram_30078090 = 0;
    _DAT_ram_30078092 = 0;
    return;
  }
  _DAT_ram_30078090 = 0;
  _DAT_ram_30078092 = 0;
  return;
}


/* NanoCore 1.11, address 0x40029a74.
 * REA evidence: ev_9d4422f5e28bd83833fbcdf7128b0135433d2ae9ede389172e5c858f3cfdc56b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Removing unreachable block (ram,0x40029b46) */
/* WARNING: Removing unreachable block (ram,0x40029b5e) */
/* WARNING: Removing unreachable block (ram,0x40029ad4) */
/* WARNING: Removing unreachable block (ram,0x40029aec) */

void FUN_ram_40029a74(short *param_1,int param_2,short *param_3,int param_4,uint param_5)

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
      if (param_4 != 0x41) goto LAB_ram_40029b7a;
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
LAB_ram_40029b7a:
  if (param_2 == param_4) {
    FUN_ram_4000304c(param_1,param_3,param_2 * param_5 * 2);
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


/* NanoCore 1.11, address 0x40029bba.
 * REA evidence: ev_c0e6535f5c0a06f9cc850579932b936eeffa210932f77e6d39d71a78ffcdc4c7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40029bba(int param_1,int param_2,undefined4 param_3,int param_4,uint param_5,
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


/* NanoCore 1.11, address 0x40029c36.
 * REA evidence: ev_22d7be9a92c10830e3c3565db09c6127507c82724ada902588dd276fffc4c9ac
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

int FUN_ram_40029c36(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_400044e8(param_1,0x203);
  if (((iVar1 == 0) || (iVar1 = FUN_ram_400044e8(param_1,0x103), iVar1 == 0)) ||
     (iVar1 = FUN_ram_400044e8(param_1,3), iVar1 == 0)) {
    FUN_ram_400045fe(param_1,&LAB_ram_40029c78);
    iVar1 = 0;
  }
  return iVar1;
}


/* NanoCore 1.11, address 0x40029c96.
 * REA evidence: ev_00354d8ac26f31c2e791733f661f5d510f05c7c5ddd8f06f09960a96298d4f84
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40029c96(short *param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = _DAT_ram_3006f6ac;
  if ((param_1 == (short *)0x0) || (param_2 == 0)) {
    return;
  }
  if (1 < _DAT_ram_3006f6ac) {
    iVar6 = _DAT_ram_3006f6ac - 1;
    uVar3 = param_2 + _DAT_ram_3006f6a8;
    bVar1 = false;
    uVar5 = _DAT_ram_3006f6a8;
    do {
      if (uVar2 <= uVar5) {
        if (!bVar1) {
          _DAT_ram_3006f6ac = 0;
          return;
        }
        _DAT_ram_3006f6a8 = uVar5;
        _DAT_ram_3006f6ac = 0;
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
    _DAT_ram_3006f6a8 = uVar5;
    if (uVar5 < uVar2) {
      return;
    }
  }
  _DAT_ram_3006f6ac = 0;
  return;
}


/* NanoCore 1.11, address 0x40029d10.
 * REA evidence: ev_242c0a89fa44ab7d1e7e60d78befacdc04b6eee784ca86ee5e412d7514db15e8
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_40029d10(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      return 0;
    }
    uVar1 = FUN_ram_400002f4();
    if (_DAT_ram_30079b78 != _DAT_ram_30079b70) {
      if (_DAT_ram_30079b74 < param_2) {
        param_2 = (uint)_DAT_ram_30079b74;
      }
      if (param_2 != 0) {
        FUN_ram_4000304c(param_1,0x30079870,param_2);
      }
      _DAT_ram_30079b70 = _DAT_ram_30079b78;
      FUN_ram_400002fa(uVar1);
      return param_2;
    }
    FUN_ram_400002fa();
  }
  return 0;
}


/* NanoCore 1.11, address 0x40029e6e.
 * REA evidence: ev_98dae35f31acf137740d7f33c21121d9dd7a1a61469c35882795f3b110f34b1c
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined4 FUN_ram_40029e6e(byte *param_1,uint param_2)

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
  cVar4 = DAT_ram_3006f6a4;
LAB_ram_40029ef6:
  uVar7 = (uint)*pbVar3;
  if ((*pbVar3 & 0xf0) != 0) goto switchD_ram_40029f16_default;
  bVar1 = pbVar3[1];
  switch(uVar7 - 2 & 0xff) {
  case 0:
    if ((bVar1 & 0xfd) == 0xf1) goto LAB_ram_40029f20;
    goto switchD_ram_40029f16_default;
  case 1:
    if (bVar1 == 0xf2) goto LAB_ram_40029f20;
    goto switchD_ram_40029f16_default;
  case 2:
    if ((cVar4 != '\0') || (bVar1 == 0xf0)) {
      uVar7 = 3;
      cVar4 = '\x01';
      goto LAB_ram_40029f20;
    }
    goto switchD_ram_40029f16_default;
  case 3:
    if (cVar4 != '\0') {
      cVar4 = '\0';
      goto LAB_ram_40029fca;
    }
    if (bVar1 != 0xf7) goto switchD_ram_40029f16_default;
    goto LAB_ram_40029fca;
  case 4:
    if (cVar4 != '\0') {
      cVar4 = '\0';
      goto LAB_ram_40029fd4;
    }
    if (bVar1 != 0xf0) goto switchD_ram_40029f16_default;
    goto LAB_ram_40029fd4;
  case 5:
    if (cVar4 == '\0') {
      if (bVar1 != 0xf0) goto switchD_ram_40029f16_default;
    }
    else {
      cVar4 = '\0';
    }
    break;
  case 6:
    if ((bVar1 & 0xf0) != 0x80) goto switchD_ram_40029f16_default;
    break;
  case 7:
    if ((bVar1 & 0xf0) != 0x90) goto switchD_ram_40029f16_default;
    break;
  case 8:
    if ((bVar1 & 0xf0) != 0xa0) goto switchD_ram_40029f16_default;
    break;
  case 9:
    if ((bVar1 & 0xf0) != 0xb0) goto switchD_ram_40029f16_default;
    break;
  case 10:
    if ((bVar1 & 0xf0) == 0xc0) goto LAB_ram_40029fd4;
    goto switchD_ram_40029f16_default;
  case 0xb:
    if ((bVar1 & 0xf0) != 0xd0) goto switchD_ram_40029f16_default;
LAB_ram_40029fd4:
    uVar7 = 2;
    goto LAB_ram_40029f20;
  case 0xc:
    if ((bVar1 & 0xf0) != 0xe0) goto switchD_ram_40029f16_default;
    break;
  case 0xd:
    if (bVar1 < 0xf8) goto switchD_ram_40029f16_default;
LAB_ram_40029fca:
    uVar7 = 1;
    goto LAB_ram_40029f20;
  default:
    goto switchD_ram_40029f16_default;
  }
  uVar7 = 3;
LAB_ram_40029f20:
  uVar8 = uVar7 + uVar6;
  if (0x300 < uVar8) goto switchD_ram_40029f16_default;
  uVar5 = 0;
  do {
    local_330[uVar5 + uVar6] = pbVar3[uVar5 + 1];
    uVar5 = uVar5 + 1;
  } while ((uVar5 & 0xff) < uVar7);
  pbVar3 = pbVar3 + 4;
  uVar6 = uVar8;
  if (param_2 <= (uint)((int)pbVar3 - (int)param_1)) {
    DAT_ram_3006f6a4 = cVar4;
    if (uVar8 == 0) {
switchD_ram_40029f16_default:
      uVar2 = 0;
    }
    else {
      FUN_ram_4002996c(local_330,uVar8);
      if (0x20 < uVar8) {
        uVar8 = 0x20;
      }
      FUN_ram_40010b9e(s_CFctrl_usb_midi_ram_40096d26 + 2,local_330,uVar8 & 0xff);
      uVar2 = 1;
    }
    return uVar2;
  }
  goto LAB_ram_40029ef6;
}


