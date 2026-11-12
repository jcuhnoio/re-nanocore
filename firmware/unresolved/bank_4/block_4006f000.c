/* NanoCore 1.10 analysis module: unresolved/bank_4/block_4006f000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.10, address 0x4006f2d6.
 * REA evidence: ev_3c787c48ef718fcacb67329dae8994f450156f02aa6d6daeeb1c06c2995adf32
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006f2d6(int param_1)

{
  ulonglong uVar1;
  
  if (param_1 != 0) {
    uVar1 = (ulonglong)DAT_ram_40098288;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    *(ulonglong *)(param_1 + 8) = uVar1;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x11) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
    *(undefined1 *)(param_1 + 0x16) = 0;
    *(undefined1 *)(param_1 + 0x17) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x19) = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    *(undefined1 *)(param_1 + 0x1b) = 0;
  }
  return;
}


/* NanoCore 1.10, address 0x4006f328.
 * REA evidence: ev_65525cc27adce4e639d9d93d7aeb3daebd835b76313c8a17b4a01c90bf6e29f5
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006f328(float param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  if (param_2 != (ulonglong *)0x0) {
    memset((void *)((int)param_2 + 4),0,0x18);
    if (param_1 <= 0.0) {
      param_1 = DAT_ram_40092878;
    }
    uVar1 = (ulonglong)DAT_ram_40098288;
    *(undefined1 *)((int)param_2 + 0xc) = 0;
    *(undefined1 *)((int)param_2 + 0xd) = 0;
    *(undefined1 *)((int)param_2 + 0xe) = 0;
    *(undefined1 *)((int)param_2 + 0xf) = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    *(undefined1 *)((int)param_2 + 0x11) = 0;
    *(undefined1 *)((int)param_2 + 0x12) = 0;
    *(undefined1 *)((int)param_2 + 0x13) = 0;
    *(undefined1 *)((int)param_2 + 0x14) = 0;
    *(undefined1 *)((int)param_2 + 0x15) = 0;
    *(undefined1 *)((int)param_2 + 0x16) = 0;
    *(undefined1 *)((int)param_2 + 0x17) = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    *(undefined1 *)((int)param_2 + 0x19) = 0;
    *(undefined1 *)((int)param_2 + 0x1a) = 0;
    *(undefined1 *)((int)param_2 + 0x1b) = 0;
    *param_2 = (ulonglong)(uint)param_1;
    param_2[1] = uVar1;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4006f3ae.
 * REA evidence: ev_14b150c62b20bddcc0e029fe281de76fde578d408d7bbeef761a6a5e26533ae7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006f3ae(ulonglong *param_1,uint param_2)

{
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_400988c0;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40092864;
      if (param_2 != 2) {
        *(undefined4 *)(param_1 + 1) = 0;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_40098288;
      }
    }
    if (4 < param_2) {
      param_1[2] = (ulonglong)DAT_ram_4009281c;
    }
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4006f418.
 * REA evidence: ev_2f4a42bd3bc9279d6f27fed4f1ffb62f864ef650cd64f328b6bb0f89e1cc67a2
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4006f418(float *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                     float *param_7,int param_8)

{
  float fVar1;
  bool bVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_register_00000100;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  float fVar31;
  float fVar32;
  undefined *puVar33;
  float fVar34;
  float fStack_ac;
  undefined *puStack_a8;
  
  puVar3 = DAT_ram_4009281c;
  if (param_7 == (float *)0x0) {
    puStack_a8 = DAT_ram_40098288;
    puVar30 = (undefined *)0x0;
    puVar28 = DAT_ram_400988c0;
    puVar33 = DAT_ram_40092864;
    puVar29 = DAT_ram_4009281c;
  }
  else {
    puVar28 = (undefined *)*param_7;
    if ((float)puVar28 < 0.0) {
      puVar28 = (undefined *)0x0;
LAB_ram_4006f8be:
      puVar33 = (undefined *)param_7[1];
      if ((float)puVar33 < 0.0) goto LAB_ram_4006f492;
LAB_ram_4006f8ce:
      if ((float)puVar33 <= (float)DAT_ram_4009281c) goto LAB_ram_4006f496;
      puStack_a8 = (undefined *)param_7[3];
      puVar33 = DAT_ram_4009281c;
      if ((float)puStack_a8 < 0.0) goto LAB_ram_4006f8f0;
LAB_ram_4006f4ac:
      if ((float)DAT_ram_4009281c < (float)puStack_a8) {
        puStack_a8 = DAT_ram_4009281c;
      }
      puVar29 = (undefined *)param_7[4];
    }
    else {
      if ((float)puVar28 <= (float)DAT_ram_4009281c) goto LAB_ram_4006f8be;
      puVar33 = (undefined *)param_7[1];
      puVar28 = DAT_ram_4009281c;
      if (0.0 <= (float)puVar33) goto LAB_ram_4006f8ce;
LAB_ram_4006f492:
      puVar33 = (undefined *)0x0;
LAB_ram_4006f496:
      puStack_a8 = (undefined *)param_7[3];
      if (0.0 <= (float)puStack_a8) goto LAB_ram_4006f4ac;
LAB_ram_4006f8f0:
      puVar29 = (undefined *)param_7[4];
      puStack_a8 = (undefined *)0x0;
    }
    if ((float)puVar29 < 0.0) {
      puVar29 = (undefined *)0x0;
      puVar30 = DAT_ram_4009281c;
    }
    else if ((float)DAT_ram_4009281c < (float)puVar29) {
      puVar29 = DAT_ram_4009281c;
      puVar30 = (undefined *)0x0;
    }
    else {
      puVar30 = (undefined *)((float)DAT_ram_4009281c - (float)puVar29);
    }
  }
  if (param_1 == (float *)0x0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  if (param_6 == 0) {
    return;
  }
  fVar16 = *param_1;
  if (*param_1 <= 0.0) {
    fVar16 = in_register_00000100;
  }
  fVar31 = 0.0;
  if ((0.0 <= (float)puVar28) &&
     (fVar31 = DAT_ram_400930b0, (float)puVar28 <= (float)DAT_ram_4009281c)) {
    fVar31 = (float)puVar28 * DAT_ram_400930b0 + 0.0;
  }
  fVar32 = param_1[2];
  uVar18 = *(ulonglong *)(param_1 + 1);
  bVar2 = param_8 != 0 && param_5 != 0;
  fVar26 = DAT_ram_400985d4;
  if ((float)puVar33 < 0.0) {
    if (fVar16 <= 0.0) {
      fVar34 = 0.0;
      fVar19 = DAT_ram_400934a4;
    }
    else {
      fVar34 = 0.0;
      fVar26 = fVar16 * DAT_ram_40094234;
LAB_ram_4006f9c4:
      fVar19 = fVar34 * DAT_ram_4009286c + DAT_ram_400934a4;
LAB_ram_4006f9d8:
      if (fVar34 < 0.0) {
        fStack_ac = DAT_ram_400934ac;
        goto LAB_ram_4006f590;
      }
      if ((float)DAT_ram_4009281c < fVar34) goto LAB_ram_4006f9ea;
    }
    fStack_ac = fVar34 * DAT_ram_400934f0 + DAT_ram_400934ac;
LAB_ram_4006fa24:
    if (DAT_ram_400934e8 <= fStack_ac) goto LAB_ram_4006f590;
    fStack_ac = DAT_ram_400930dc;
    puVar28 = PTR_firmware_entry_ram_40092830;
    if (fVar19 < DAT_ram_400930dc) goto LAB_ram_4006f5f6;
    fStack_ac = DAT_ram_400934e8;
    if (DAT_ram_400985d8 < fVar19) {
      fStack_ac = DAT_ram_400985d8;
      fVar26 = fStack_ac;
      fVar34 = DAT_ram_400934e8;
      goto LAB_ram_4006f5d8;
    }
LAB_ram_4006f5ba:
    fVar34 = fStack_ac;
    if (fStack_ac < fVar19) {
LAB_ram_4006f5c4:
      fVar19 = fStack_ac;
      fVar34 = fStack_ac;
    }
    fStack_ac = fVar19;
    fVar19 = DAT_ram_40092838;
    fVar26 = fStack_ac;
    if (DAT_ram_40092838 <= fStack_ac) goto LAB_ram_4006f5d8;
  }
  else {
    fVar19 = DAT_ram_400934b0;
    if ((float)DAT_ram_4009281c < (float)puVar33) {
      puVar28 = DAT_ram_4009281c;
      if (0.0 < fVar16) {
        fVar26 = fVar16 * DAT_ram_40094234;
LAB_ram_4006f966:
        fStack_ac = (float)puVar28 * DAT_ram_40093094 + DAT_ram_400934a8;
        goto LAB_ram_4006fa24;
      }
LAB_ram_4006fa9c:
      fVar19 = (float)puVar28 * DAT_ram_4009286c + DAT_ram_400934a0;
LAB_ram_4006fab0:
      if ((float)puVar28 < 0.0) {
LAB_ram_4006f9ea:
        fStack_ac = DAT_ram_400934a8;
      }
      else {
        if ((float)puVar28 <= (float)DAT_ram_4009281c) goto LAB_ram_4006f966;
        fStack_ac = DAT_ram_400934b4;
      }
    }
    else {
      if (0.0 < fVar16) {
        fVar26 = fVar16 * DAT_ram_40094234;
      }
      if ((float)puVar33 <= (float)DAT_ram_40092864) {
        fVar34 = (float)puVar33 + (float)puVar33;
        if (0.0 <= fVar34) {
          fVar19 = DAT_ram_400934a0;
          if (fVar34 <= (float)DAT_ram_4009281c) goto LAB_ram_4006f9c4;
          goto LAB_ram_4006f9d8;
        }
        fStack_ac = DAT_ram_400934ac;
        fVar19 = DAT_ram_400934a4;
      }
      else {
        puVar28 = (undefined *)
                  (((float)puVar33 - (float)DAT_ram_40092864) +
                  ((float)puVar33 - (float)DAT_ram_40092864));
        if (0.0 <= (float)puVar28) {
          if ((float)puVar28 <= (float)DAT_ram_4009281c) goto LAB_ram_4006fa9c;
          goto LAB_ram_4006fab0;
        }
        fStack_ac = DAT_ram_400934a8;
        fVar19 = DAT_ram_400934a0;
      }
    }
LAB_ram_4006f590:
    if (fVar26 < fStack_ac) {
      fStack_ac = fVar26;
    }
    if (DAT_ram_400930dc <= fVar19) {
      if (fStack_ac - (float)DAT_ram_4009281c < fVar19) {
        fVar19 = fStack_ac - (float)DAT_ram_4009281c;
      }
      goto LAB_ram_4006f5ba;
    }
    fVar26 = DAT_ram_400930dc;
    fVar34 = fStack_ac;
    if (fStack_ac < DAT_ram_400930dc) goto LAB_ram_4006f5c4;
LAB_ram_4006f5d8:
    fStack_ac = fVar26;
    fVar19 = fVar34;
    if (fStack_ac <= fVar34) {
      fVar19 = fStack_ac;
    }
  }
  puVar28 = (undefined *)(fVar34 / fVar19);
  if (fVar34 / fVar19 < (float)DAT_ram_4009281c) {
    puVar28 = DAT_ram_4009281c;
  }
LAB_ram_4006f5f6:
  fVar20 = (float)FUN_ram_40000c86(puVar28);
  fVar11 = DAT_ram_400984dc;
  fVar19 = DAT_ram_400983a4._4_4_;
  fVar34 = DAT_ram_40098388;
  fVar26 = DAT_ram_400982d0;
  puVar28 = PTR_firmware_entry_ram_40092830;
  uVar14 = 0;
  do {
    uVar15 = param_6 - uVar14;
    if (8 < uVar15) {
      uVar15 = 8;
    }
    fVar21 = (float)FUN_ram_40000c0e(((float)(int)uVar15 * DAT_ram_40092834 * fVar11 *
                                     (float)_DAT_ram_4009424c) / fVar16);
    puVar33 = (undefined *)((float)puVar3 - fVar21);
    if ((float)puVar33 < 0.0) {
      puVar33 = (undefined *)0x0;
    }
    else if ((float)puVar3 < (float)puVar33) {
      puVar33 = puVar3;
    }
    fVar21 = (float)FUN_ram_40000a08((float)uVar18 * (float)_DAT_ram_400980f4);
    puVar22 = (undefined *)(fVar21 * (float)_DAT_ram_40093100 + (float)puStack_a8);
    if ((float)puVar22 < 0.0) {
      puVar22 = (undefined *)0x0;
    }
    else if ((float)puVar3 < (float)puVar22) {
      puVar22 = puVar3;
    }
    fVar32 = ((float)puVar22 - fVar32) * (float)puVar33 + fVar32;
    if (fVar32 < 0.0) {
      fVar21 = fVar20 * 0.0;
    }
    else {
      fVar21 = fVar20;
      if (fVar32 <= (float)puVar3) {
        fVar21 = fVar20 * fVar32;
      }
    }
    fVar21 = (float)FUN_ram_40000c0e(fVar21);
    fVar21 = (fVar21 * fStack_ac * fVar11) / fVar16;
    if (ABS(fVar21) < (float)_DAT_ram_40093668) {
      fVar21 = fVar21 * fVar21 * fVar21 * fVar26 + fVar21;
    }
    else {
      fVar21 = (float)FUN_ram_40000a84();
    }
    fVar10 = (float)DAT_ram_400983ac;
    fVar9 = DAT_ram_400983a4._4_4_;
    fVar8 = DAT_ram_4009838c;
    fVar7 = DAT_ram_40098388;
    fVar6 = DAT_ram_40098108;
    fVar5 = DAT_ram_400980bc;
    fVar4 = DAT_ram_4009282c;
    fVar1 = (float)puVar3 / ((fVar21 + fVar26) * fVar21 + (float)puVar3);
    if (param_6 != uVar14) {
      uVar12 = 0;
      iVar13 = uVar14 << 2;
      do {
        fVar27 = (float)*(undefined8 *)(param_2 + iVar13);
        fVar17 = fVar27;
        if ((bVar2) && (param_3 != 0)) {
          fVar17 = *(float *)(param_3 + iVar13);
        }
        fVar23 = fVar27 * fVar5;
        fVar25 = fVar7;
        if ((fVar23 <= fVar4) && (fVar25 = fVar8, fVar6 <= fVar23)) {
          fVar25 = ((fVar23 * fVar23 + fVar9) * fVar23) / (fVar23 * fVar23 * fVar10 + fVar9);
        }
        fVar24 = (float)*(undefined8 *)(param_1 + 5);
        fVar23 = (float)*(undefined8 *)(param_1 + 3);
        fVar25 = (-(fVar23 * fVar26) + (fVar25 - fVar24)) * fVar1 * fVar21 + fVar23;
        *(ulonglong *)(param_1 + 3) = (ulonglong)(uint)(fVar25 * (float)puVar28 - fVar23);
        *(ulonglong *)(param_1 + 5) =
             (ulonglong)(uint)((fVar25 * fVar21 + fVar24) * (float)puVar28 - fVar24);
        *(ulonglong *)(param_4 + iVar13) =
             (ulonglong)(uint)(fVar27 * (float)puVar30 + (float)puVar29 * fVar25);
        if (bVar2) {
          fVar25 = fVar17 * fVar5;
          fVar27 = fVar34;
          if ((fVar25 <= fVar4) && (fVar27 = in_register_00000100, in_register_00000100 <= fVar25))
          {
            fVar27 = ((fVar25 * fVar25 + fVar19) * fVar25) /
                     (fVar25 * fVar25 * (float)DAT_ram_400983ac + fVar19);
          }
          fVar23 = (float)*(undefined8 *)(param_1 + 6);
          fVar25 = (float)*(undefined8 *)(param_1 + 4);
          fVar27 = (-(fVar25 * fVar26) + (fVar27 - fVar23)) * fVar1 * fVar21 + fVar25;
          *(ulonglong *)(param_1 + 4) = (ulonglong)(uint)(fVar27 * (float)puVar28 - fVar25);
          *(ulonglong *)(param_1 + 6) =
               (ulonglong)(uint)((fVar27 * fVar21 + fVar23) * (float)puVar28 - fVar23);
          *(float *)(param_5 + iVar13) = fVar17 * (float)puVar30 + (float)puVar29 * fVar27;
        }
        fVar17 = (float)uVar18 + fVar31 / fVar16;
        if ((float)puVar3 <= fVar17) {
          fVar17 = fVar17 - (float)puVar3;
        }
        uVar18 = (ulonglong)(uint)fVar17;
        uVar12 = uVar12 + 1;
        iVar13 = iVar13 + 4;
      } while (uVar12 < uVar15);
    }
    uVar14 = uVar14 + uVar15;
  } while (uVar14 < param_6);
  param_1[2] = fVar32;
  *(ulonglong *)(param_1 + 1) = uVar18;
  return;
}


/* NanoCore 1.10, address 0x4006fb0c.
 * REA evidence: ev_6bfdca3e5a503834fba9f0a2901c2990e0174ff350dbc3a0d6130a24cf5ad1fd
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006fb0c(int param_1)

{
  if (param_1 != 0) {
    memset((void *)(param_1 + 4),0,0x2000);
    *(undefined1 *)(param_1 + 0x200c) = 0;
    *(undefined1 *)(param_1 + 0x200d) = 0;
    *(undefined1 *)(param_1 + 0x200e) = 0;
    *(undefined1 *)(param_1 + 0x200f) = 0;
    *(undefined1 *)(param_1 + 0x2010) = 0;
    *(undefined1 *)(param_1 + 0x2011) = 0;
    *(undefined1 *)(param_1 + 0x2012) = 0;
    *(undefined1 *)(param_1 + 0x2013) = 0;
    *(undefined4 *)(param_1 + 0x2004) = 0;
    *(undefined4 *)(param_1 + 0x2008) = 0;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4006fb60.
 * REA evidence: ev_5c9ee685c769a41277583a6ab6a1f11947c359a8aa703d639cc137e5b966f20b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006fb60(float param_1,ulonglong *param_2)

{
  if (param_2 != (ulonglong *)0x0) {
    memset(param_2,0,0x2018);
    if (param_1 <= DAT_ram_40093094) {
      param_1 = DAT_ram_40092878;
    }
    *param_2 = (ulonglong)(uint)param_1;
    *(undefined1 *)((int)param_2 + 0x2014) = 0xff;
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4006fbaa.
 * REA evidence: ev_fbac196b4c8bf55737d2b70ae99559a834abcc594f14a90322b0b38f44fbc79b
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006fbaa(ulonglong *param_1,int param_2,int param_3)

{
  if (param_1 != (ulonglong *)0x0) {
    memset(param_1,0,param_2 << 2);
    if (param_3 == 0x11) {
      if ((((param_2 != 0) && (*param_1 = (ulonglong)DAT_ram_400988c4, param_2 != 1)) &&
          (*(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_400941ec, param_2 != 2)) &&
         (((param_1[1] = (ulonglong)DAT_ram_400988c8, param_2 != 3 &&
           (*(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_400988cc, param_2 != 4)) &&
          ((*(undefined4 *)(param_1 + 2) = 0, param_2 != 5 &&
           ((*(ulonglong *)((int)param_1 + 0x14) = (ulonglong)DAT_ram_40098288, param_2 != 6 &&
            (param_1[3] = (ulonglong)DAT_ram_400988d0, param_2 != 7)))))))) {
        *(ulonglong *)((int)param_1 + 0x1c) = (ulonglong)DAT_ram_400988d4;
      }
    }
    else if ((((param_3 == 0xb) && (param_2 != 0)) &&
             (*param_1 = (ulonglong)DAT_ram_400980ec, param_2 != 1)) &&
            ((*(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_40094234, param_2 != 2 &&
             (param_1[1] = (ulonglong)DAT_ram_400930fc, param_2 != 3)))) {
      *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_40092864;
    }
    return;
  }
  return;
}


/* NanoCore 1.10, address 0x4006fc98.
 * REA evidence: ev_7d302f99eeac685c14bed66441b4c55455bbb74aaedfe6be13f089bd05e5e7d1
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_4006fc98(float *param_1,float *param_2,undefined8 *param_3,float *param_4,
                     float *param_5,int param_6,float *param_7,uint param_8,char param_9,
                     char *param_10)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_register_00000100;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  char cVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  if (param_1 == (float *)0x0) {
    return;
  }
  if (param_2 == (float *)0x0) {
    return;
  }
  if (param_4 == (float *)0x0) {
    return;
  }
  if (param_6 == 0) {
    return;
  }
  if (*(byte *)(param_1 + 0x805) != param_8) {
    memset(param_1 + 1,0,0x2000);
    *(undefined1 *)(param_1 + 0x803) = 0;
    *(undefined1 *)((int)param_1 + 0x200d) = 0;
    *(undefined1 *)((int)param_1 + 0x200e) = 0;
    *(undefined1 *)((int)param_1 + 0x200f) = 0;
    *(undefined1 *)(param_1 + 0x804) = 0;
    *(undefined1 *)((int)param_1 + 0x2011) = 0;
    *(undefined1 *)((int)param_1 + 0x2012) = 0;
    *(undefined1 *)((int)param_1 + 0x2013) = 0;
    param_1[0x801] = 0.0;
    param_1[0x802] = 0.0;
    *(char *)(param_1 + 0x805) = (char)param_8;
  }
  if (param_10 != (char *)0x0) {
    cVar13 = '\x01';
    if (param_5 == (float *)0x0) {
      cVar13 = param_9;
    }
    *param_10 = cVar13;
  }
  fVar32 = DAT_ram_40098924;
  fVar3 = DAT_ram_40098920;
  fVar22 = DAT_ram_4009309c;
  fVar28 = DAT_ram_40092864;
  fVar16 = DAT_ram_4009281c;
  if (param_8 != 0xb) {
    if (param_8 != 0x11) {
      return;
    }
    fVar33 = param_1[0x802];
    fVar14 = param_1[0x801];
    if (param_7 == (float *)0x0) {
      fVar27 = DAT_ram_40098930 / (float)*(undefined8 *)param_1;
      fVar21 = DAT_ram_4009890c;
      fVar19 = DAT_ram_40098908;
      fVar31 = DAT_ram_40098288;
      fVar30 = DAT_ram_400988d4;
    }
    else {
      fVar31 = *param_7;
      fVar27 = DAT_ram_400930d8;
      if ((0.0 <= fVar31) && (fVar27 = DAT_ram_400930a4, fVar31 <= DAT_ram_4009281c)) {
        fVar27 = fVar31 * DAT_ram_40094208 + DAT_ram_400930d8;
      }
      fVar31 = param_7[1];
      fVar21 = 0.0;
      if ((0.0 <= fVar31) && (fVar21 = DAT_ram_4009891c, fVar31 <= DAT_ram_4009281c)) {
        fVar21 = fVar31 * DAT_ram_4009891c + 0.0;
      }
      fVar31 = param_7[3];
      fVar19 = DAT_ram_40098764;
      if ((0.0 <= fVar31) && (fVar19 = DAT_ram_40092820, fVar31 <= DAT_ram_4009281c)) {
        fVar19 = fVar31 * DAT_ram_40098778 + DAT_ram_40098764;
      }
      fVar31 = param_7[5];
      if (fVar31 < 0.0) {
        fVar31 = 0.0;
      }
      else if (DAT_ram_4009281c < fVar31) {
        fVar31 = DAT_ram_4009281c;
      }
      fVar27 = fVar27 / (float)*(undefined8 *)param_1;
      fVar30 = param_7[7];
      if ((fVar30 < 0.0) || (DAT_ram_4009281c < fVar30)) {
        fVar30 = 0.0;
      }
      else if (DAT_ram_4009281c <= fVar30) {
        fVar30 = 0.0;
      }
    }
    bVar1 = param_5 != (float *)0x0;
    iVar10 = 0;
    puVar12 = param_3;
    do {
      fVar15 = (float)iVar10 * fVar27 + fVar30 + fVar33;
      if (fVar16 <= fVar15) {
        fVar15 = fVar15 - fVar16;
      }
      if (fVar16 <= fVar15) {
        fVar15 = fVar15 - fVar16;
      }
      fVar23 = (float)(uint)fVar14;
      fVar15 = fVar3 / ((-(ABS(fVar15 - fVar28) * fVar22) + fVar16) * fVar21 + fVar16);
      if (param_3 == (undefined8 *)0x0) {
        if (param_9 == '\0') {
          fVar23 = fVar23 - fVar15;
          uVar29 = *(undefined8 *)param_2;
          uVar17 = (int)fVar23 - (uint)(fVar23 < (float)(int)fVar23);
          uVar9 = uVar17 & 0x3ff;
          uVar11 = uVar9 + 1 & 0x3ff;
          fVar23 = fVar23 - (float)(int)uVar17;
          fVar15 = (param_1[uVar11 + 1] - param_1[uVar9 + 1]) * fVar23 + param_1[uVar9 + 1];
          param_1[(int)fVar14 + 1] = fVar19 * fVar15 + (float)uVar29;
          *param_4 = ((fVar16 - fVar31) * (float)uVar29 + fVar31 * fVar15) * fVar32;
          if (bVar1) {
            uVar29 = *(undefined8 *)param_2;
            fVar15 = ((float)*(undefined8 *)(param_1 + uVar11 + 0x401) - param_1[uVar9 + 0x401]) *
                     fVar23 + param_1[uVar9 + 0x401];
            param_1[(int)fVar14 + 0x401] = fVar15 * fVar19 + (float)uVar29;
            *param_5 = ((float)uVar29 * (fVar16 - fVar31) + fVar31 * fVar15) * fVar32;
          }
        }
        else {
          fVar23 = fVar23 - fVar15;
          uVar29 = *(undefined8 *)param_2;
          uVar17 = (int)fVar23 - (uint)(fVar23 < (float)(int)fVar23);
          uVar9 = uVar17 & 0x3ff;
          uVar11 = uVar9 + 1 & 0x3ff;
          fVar23 = fVar23 - (float)(int)uVar17;
          fVar15 = (param_1[uVar11 + 1] - param_1[uVar9 + 1]) * fVar23 + param_1[uVar9 + 1];
          (param_1 + (int)fVar14)[1] = fVar19 * fVar15 + (float)uVar29;
          *param_4 = ((fVar16 - fVar31) * (float)uVar29 + fVar31 * fVar15) * fVar32;
          if (bVar1) {
            fVar15 = param_1[uVar9 + 0x401];
            fVar25 = (float)*(undefined8 *)(param_1 + uVar11 + 0x401);
            fVar24 = (float)*(undefined8 *)param_2;
            goto LAB_ram_4007025c;
          }
        }
      }
      else if (param_9 == '\0') {
        fVar23 = fVar23 - fVar15;
        uVar29 = *(undefined8 *)param_2;
        uVar17 = (int)fVar23 - (uint)(fVar23 < (float)(int)fVar23);
        uVar9 = uVar17 & 0x3ff;
        uVar11 = uVar9 + 1 & 0x3ff;
        fVar23 = fVar23 - (float)(int)uVar17;
        fVar15 = (param_1[uVar11 + 1] - param_1[uVar9 + 1]) * fVar23 + param_1[uVar9 + 1];
        param_1[(int)fVar14 + 1] = fVar19 * fVar15 + (float)uVar29;
        *param_4 = ((fVar16 - fVar31) * (float)uVar29 + fVar31 * fVar15) * fVar32;
        if (bVar1) {
          uVar29 = *(undefined8 *)param_2;
          fVar15 = fVar23 * ((float)*(undefined8 *)(param_1 + uVar11 + 0x401) -
                            param_1[uVar9 + 0x401]) + param_1[uVar9 + 0x401];
          param_1[(int)fVar14 + 0x401] = fVar19 * fVar15 + (float)uVar29;
          *param_5 = ((float)uVar29 * (fVar16 - fVar31) + fVar31 * fVar15) * fVar32;
        }
      }
      else {
        fVar23 = fVar23 - fVar15;
        uVar29 = *(undefined8 *)param_2;
        uVar17 = (int)fVar23 - (uint)(fVar23 < (float)(int)fVar23);
        uVar9 = uVar17 & 0x3ff;
        uVar11 = uVar9 + 1 & 0x3ff;
        fVar23 = fVar23 - (float)(int)uVar17;
        fVar15 = (param_1[uVar11 + 1] - param_1[uVar9 + 1]) * fVar23 + param_1[uVar9 + 1];
        (param_1 + (int)fVar14)[1] = fVar19 * fVar15 + (float)uVar29;
        *param_4 = ((fVar16 - fVar31) * (float)uVar29 + fVar31 * fVar15) * fVar32;
        if (bVar1) {
          fVar15 = param_1[uVar9 + 0x401];
          fVar25 = (float)*(undefined8 *)(param_1 + uVar11 + 0x401);
          fVar24 = (float)*puVar12;
LAB_ram_4007025c:
          fVar15 = fVar23 * (fVar25 - fVar15) + fVar15;
          (param_1 + (int)fVar14)[0x401] = fVar19 * fVar15 + fVar24;
          *param_5 = ((fVar16 - fVar31) * fVar24 + fVar31 * fVar15) * fVar32;
        }
      }
      iVar10 = iVar10 + 1;
      fVar14 = (float)((int)fVar14 + 1U & 0x3ff);
      param_2 = param_2 + 1;
      param_5 = param_5 + 1;
      puVar12 = (undefined8 *)((int)puVar12 + 4);
      param_4 = param_4 + 1;
      if (param_6 == iVar10) {
        for (fVar33 = (float)param_6 * fVar27 + fVar33; fVar16 <= fVar33; fVar33 = fVar33 - fVar16)
        {
        }
        param_1[0x801] = fVar14;
        *(ulonglong *)(param_1 + 0x802) = (ulonglong)(uint)fVar33;
        return;
      }
    } while( true );
  }
  fVar3 = *param_1;
  fVar27 = DAT_ram_400988f0;
  fVar33 = DAT_ram_400930e8;
  fVar22 = DAT_ram_400988ec;
  fVar14 = DAT_ram_400980f4;
  fVar31 = DAT_ram_400988e0;
  fVar30 = DAT_ram_400988dc;
  fVar21 = DAT_ram_400980c8;
  fVar32 = DAT_ram_400988f4;
  fVar19 = DAT_ram_400988e8;
  fVar28 = in_register_00000100;
  if (param_7 != (float *)0x0) {
    fVar28 = *param_7;
    fVar22 = DAT_ram_400988d8;
    fVar32 = DAT_ram_400930d8;
    if ((0.0 <= fVar28) &&
       (fVar22 = DAT_ram_40098918, fVar32 = DAT_ram_400930e8, fVar28 <= DAT_ram_4009281c)) {
      fVar32 = fVar28 * DAT_ram_40094204 + DAT_ram_400930d8;
      fVar28 = (float)FUN_ram_400008b8(DAT_ram_400934d4,fVar32 * DAT_ram_40098928 + DAT_ram_4009892c
                                      );
      fVar22 = fVar28 * DAT_ram_400980f4;
    }
    fVar14 = DAT_ram_400980f4;
    fVar33 = DAT_ram_400930e8;
    fVar28 = param_7[1];
    if (fVar28 < 0.0) {
      fVar31 = 0.0;
      fVar19 = 0.0;
    }
    else {
      fVar31 = DAT_ram_40093098;
      fVar19 = DAT_ram_400930e8;
      if (fVar28 <= fVar16) {
        fVar31 = fVar28 * DAT_ram_40093098;
        fVar19 = fVar28 * DAT_ram_400930e8;
      }
    }
    fVar28 = param_7[2];
    if (fVar28 < 0.0) {
      fVar30 = 0.0;
    }
    else {
      fVar30 = DAT_ram_40098910;
      if (fVar28 <= fVar16) {
        fVar30 = fVar28 * DAT_ram_40098910;
      }
    }
    fVar15 = param_7[3];
    fVar27 = fVar16;
    fVar21 = 0.0;
    fVar28 = in_register_00000100;
    if ((0.0 <= fVar15) && (fVar27 = DAT_ram_400988f8, fVar21 = DAT_ram_40092864, fVar15 <= fVar16))
    {
      fVar15 = fVar15 * DAT_ram_400985f4._4_4_;
      fVar27 = (float)FUN_ram_40000786(fVar15);
      fVar16 = (float)FUN_ram_40000a08(fVar15);
      fVar21 = fVar16 * DAT_ram_40092864;
    }
  }
  fVar16 = param_1[0x802];
  fVar15 = param_1[0x801];
  fVar22 = fVar22 / fVar3;
  if ((fVar16 == 0.0) && (fVar15 == 0.0)) {
    fVar23 = DAT_ram_40098900;
    fVar24 = DAT_ram_400988fc;
    if (fVar32 <= DAT_ram_4009891c) goto LAB_ram_4006ff68;
    if (fVar32 < (float)PTR_firmware_entry_ram_40092830) {
      fVar16 = fVar28;
    }
  }
  fVar23 = (float)FUN_ram_40000a08(fVar16);
  fVar24 = (float)FUN_ram_40000786(fVar16);
  fVar28 = fVar16;
LAB_ram_4006ff68:
  fVar25 = (float)FUN_ram_40000a08(fVar22);
  fVar26 = (float)FUN_ram_40000786(fVar22);
  fVar32 = DAT_ram_40098104;
  fVar16 = DAT_ram_400930a4;
  iVar10 = 0;
  do {
    fVar2 = (float)(uint)fVar15;
    uVar29 = *(undefined8 *)param_2;
    fVar7 = -(fVar3 * (fVar23 * fVar19 + fVar16) * fVar32) + fVar2;
    fVar8 = -(fVar3 * (fVar24 * fVar19 + fVar16) * fVar32) + fVar2;
    uVar9 = (int)fVar7 - (uint)(fVar7 < (float)(int)fVar7);
    uVar11 = (int)fVar8 - (uint)(fVar8 < (float)(int)fVar8);
    uVar18 = uVar9 & 0x3ff;
    uVar17 = uVar11 & 0x3ff;
    fVar20 = param_1[uVar18 + 1];
    fVar4 = param_1[uVar17 + 1];
    fVar5 = param_1[(uVar18 + 1 & 0x3ff) + 1];
    fVar6 = param_1[(uVar17 + 1 & 0x3ff) + 1];
    param_1[(int)fVar15 + 1] = param_1[0x803] * in_register_00000100 + (float)uVar29;
    fVar20 = (fVar7 - (float)(int)uVar9) * (fVar5 - fVar20) + fVar20;
    *(ulonglong *)(param_1 + 0x803) = (ulonglong)(uint)fVar20;
    *(float *)((int)param_4 + iVar10) =
         (float)uVar29 * fVar27 +
         (fVar20 + (fVar8 - (float)(int)uVar11) * (fVar6 - fVar4) + fVar4) * fVar21;
    if ((param_9 == '\0') || (param_3 == (undefined8 *)0x0)) {
      fVar20 = *param_2;
    }
    else {
      fVar20 = *(float *)((int)param_3 + iVar10);
    }
    fVar4 = -(fVar3 * (fVar24 * fVar31 + fVar33) * fVar32) + fVar2;
    fVar2 = -(fVar3 * (fVar23 * fVar31 + fVar33) * fVar32) + fVar2;
    uVar17 = (int)fVar4 - (uint)(fVar4 < (float)(int)fVar4);
    uVar18 = uVar17 & 0x3ff;
    uVar9 = (int)fVar2 - (uint)(fVar2 < (float)(int)fVar2);
    uVar11 = uVar9 & 0x3ff;
    fVar5 = (fVar4 - (float)(int)uVar17) *
            ((float)*(undefined8 *)(param_1 + (uVar18 + 1 & 0x3ff) + 0x401) -
            param_1[uVar18 + 0x401]) + param_1[uVar18 + 0x401];
    fVar4 = param_1[uVar11 + 0x401];
    uVar29 = *(undefined8 *)(param_1 + (uVar11 + 1 & 0x3ff) + 0x401);
    param_1[(int)fVar15 + 0x401] = (float)*(undefined8 *)(param_1 + 0x804) * fVar30 + fVar20;
    *(ulonglong *)(param_1 + 0x804) = (ulonglong)(uint)fVar5;
    if (param_5 != (float *)0x0) {
      *(ulonglong *)((int)param_5 + iVar10) =
           (ulonglong)
           (uint)(fVar20 * fVar27 +
                 ((fVar2 - (float)(int)uVar9) * ((float)uVar29 - fVar4) + fVar4 + fVar5) * fVar21);
    }
    fVar2 = fVar25 * fVar23;
    iVar10 = iVar10 + 4;
    fVar15 = (float)((int)fVar15 + 1U & 0x3ff);
    fVar23 = fVar26 * fVar23 + fVar25 * fVar24;
    fVar24 = fVar26 * fVar24 - fVar2;
    param_2 = param_2 + 1;
  } while (iVar10 != param_6 << 2);
  for (fVar28 = fVar22 * (float)param_6 + fVar28; fVar14 <= fVar28; fVar28 = fVar28 - fVar14) {
  }
  for (; fVar28 < 0.0; fVar28 = fVar28 + fVar14) {
  }
  param_1[0x801] = fVar15;
  *(ulonglong *)(param_1 + 0x802) = (ulonglong)(uint)fVar28;
  return;
}


