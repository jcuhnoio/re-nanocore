/* NanoCore 1.12 analysis module: unresolved/bank_4/block_40071000.c
 * C-like decompilation, not buildable original source.
 * See README.rst and manifest.json for provenance and limitations.
 */

/* NanoCore 1.12, address 0x40071ce6.
 * REA evidence: ev_5644bdcb2932f9dfaf67bceac5b3566b0117db4c3c19a10e9781e13fc81394ef
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

undefined1 FUN_ram_40071ce6(uint param_1)

{
  if (param_1 < 0x12) {
    return (&DAT_ram_4009f890)[param_1];
  }
  return 0;
}


/* NanoCore 1.12, address 0x40071d38.
 * REA evidence: ev_252861a2410c2ada8d88d1b58f647a53de17c763688f246e1dc09c581efdef60
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40071d38(int param_1)

{
  ulonglong uVar1;
  
  if (param_1 != 0) {
    uVar1 = (ulonglong)DAT_ram_4009f230;
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


/* NanoCore 1.12, address 0x40071d8a.
 * REA evidence: ev_2f008a2bd8b9eec9a1ccfea562a347d8fabd20b6d717fb634bfa2a15506ebeb3
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40071d8a(float param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  if (param_2 != (ulonglong *)0x0) {
    memset((int)param_2 + 4,0,0x18);
    if (param_1 <= 0.0) {
      param_1 = DAT_ram_4009678c;
    }
    uVar1 = (ulonglong)DAT_ram_4009f230;
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


/* NanoCore 1.12, address 0x40071e10.
 * REA evidence: ev_4245bd07ec3eacbf65554626241635d54cbaa1009dd40f19222b7dbe807ae4b7
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40071e10(ulonglong *param_1,uint param_2)

{
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    memset(param_1,0,param_2 << 2);
    *param_1 = (ulonglong)DAT_ram_4009f8b4;
    if (param_2 != 1) {
      *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009675c;
      if (param_2 != 2) {
        *(undefined4 *)(param_1 + 1) = 0;
      }
      if (3 < param_2) {
        *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_4009f230;
      }
    }
    if (4 < param_2) {
      param_1[2] = (ulonglong)DAT_ram_4009672c;
    }
    return;
  }
  return;
}


/* NanoCore 1.12, address 0x40071e16.
 * REA evidence: ev_a0f6dc1bc775b016ef7221da00007e44aecc11fb7bc5405f3bdddafba3bd8227
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

void FUN_ram_40071e16(ulonglong *param_1,uint param_2)

{
  memset(param_1,0,param_2 << 2);
  *param_1 = (ulonglong)DAT_ram_4009f8b4;
  if (param_2 != 1) {
    *(ulonglong *)((int)param_1 + 4) = (ulonglong)DAT_ram_4009675c;
    if (param_2 != 2) {
      *(undefined4 *)(param_1 + 1) = 0;
    }
    if (3 < param_2) {
      *(ulonglong *)((int)param_1 + 0xc) = (ulonglong)DAT_ram_4009f230;
    }
  }
  if (4 < param_2) {
    param_1[2] = (ulonglong)DAT_ram_4009672c;
  }
  return;
}


/* NanoCore 1.12, address 0x40071e7c.
 * REA evidence: ev_b8319b14dadba02626725ef9379a3501ae5991c75845428fd88a232be6b4aaa9
 * Decompiled C-like analysis; not original or buildable source.
 * All decompiler warnings retained.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40071e7c(float *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
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
  
  puVar3 = DAT_ram_4009672c;
  if (param_7 == (float *)0x0) {
    puStack_a8 = DAT_ram_4009f230;
    puVar30 = (undefined *)0x0;
    puVar28 = DAT_ram_4009f8b4;
    puVar33 = DAT_ram_4009675c;
    puVar29 = DAT_ram_4009672c;
  }
  else {
    puVar28 = (undefined *)*param_7;
    if ((float)puVar28 < 0.0) {
      puVar28 = (undefined *)0x0;
LAB_ram_40072322:
      puVar33 = (undefined *)param_7[1];
      if ((float)puVar33 < 0.0) goto LAB_ram_40071ef6;
LAB_ram_40072332:
      if ((float)puVar33 <= (float)DAT_ram_4009672c) goto LAB_ram_40071efa;
      puStack_a8 = (undefined *)param_7[3];
      puVar33 = DAT_ram_4009672c;
      if ((float)puStack_a8 < 0.0) goto LAB_ram_40072354;
LAB_ram_40071f10:
      if ((float)DAT_ram_4009672c < (float)puStack_a8) {
        puStack_a8 = DAT_ram_4009672c;
      }
      puVar29 = (undefined *)param_7[4];
    }
    else {
      if ((float)puVar28 <= (float)DAT_ram_4009672c) goto LAB_ram_40072322;
      puVar33 = (undefined *)param_7[1];
      puVar28 = DAT_ram_4009672c;
      if (0.0 <= (float)puVar33) goto LAB_ram_40072332;
LAB_ram_40071ef6:
      puVar33 = (undefined *)0x0;
LAB_ram_40071efa:
      puStack_a8 = (undefined *)param_7[3];
      if (0.0 <= (float)puStack_a8) goto LAB_ram_40071f10;
LAB_ram_40072354:
      puVar29 = (undefined *)param_7[4];
      puStack_a8 = (undefined *)0x0;
    }
    if ((float)puVar29 < 0.0) {
      puVar29 = (undefined *)0x0;
      puVar30 = DAT_ram_4009672c;
    }
    else if ((float)DAT_ram_4009672c < (float)puVar29) {
      puVar29 = DAT_ram_4009672c;
      puVar30 = (undefined *)0x0;
    }
    else {
      puVar30 = (undefined *)((float)DAT_ram_4009672c - (float)puVar29);
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
     (fVar31 = DAT_ram_40099f44, (float)puVar28 <= (float)DAT_ram_4009672c)) {
    fVar31 = (float)puVar28 * DAT_ram_40099f44 + 0.0;
  }
  fVar32 = param_1[2];
  uVar18 = *(ulonglong *)(param_1 + 1);
  bVar2 = param_8 != 0 && param_5 != 0;
  fVar26 = DAT_ram_4009f5ac;
  if ((float)puVar33 < 0.0) {
    if (fVar16 <= 0.0) {
      fVar34 = 0.0;
      fVar19 = DAT_ram_4009a340;
    }
    else {
      fVar34 = 0.0;
      fVar26 = fVar16 * DAT_ram_4009b18c;
LAB_ram_40072428:
      fVar19 = fVar34 * DAT_ram_40096780 + DAT_ram_4009a340;
LAB_ram_4007243c:
      if (fVar34 < 0.0) {
        fStack_ac = DAT_ram_4009a348;
        goto LAB_ram_40071ff4;
      }
      if ((float)DAT_ram_4009672c < fVar34) goto LAB_ram_4007244e;
    }
    fStack_ac = fVar34 * DAT_ram_4009b1a0 + DAT_ram_4009a348;
LAB_ram_40072488:
    if (DAT_ram_4009a380 <= fStack_ac) goto LAB_ram_40071ff4;
    fStack_ac = DAT_ram_40099f70;
    puVar28 = PTR_entry_ram_40096740;
    if (fVar19 < DAT_ram_40099f70) goto LAB_ram_4007205a;
    fStack_ac = DAT_ram_4009a380;
    if (DAT_ram_4009f5b0 < fVar19) {
      fStack_ac = DAT_ram_4009f5b0;
      fVar26 = fStack_ac;
      fVar34 = DAT_ram_4009a380;
      goto LAB_ram_4007203c;
    }
LAB_ram_4007201e:
    fVar34 = fStack_ac;
    if (fStack_ac < fVar19) {
LAB_ram_40072028:
      fVar19 = fStack_ac;
      fVar34 = fStack_ac;
    }
    fStack_ac = fVar19;
    fVar19 = DAT_ram_40096748;
    fVar26 = fStack_ac;
    if (DAT_ram_40096748 <= fStack_ac) goto LAB_ram_4007203c;
  }
  else {
    fVar19 = DAT_ram_4009a34c;
    if ((float)DAT_ram_4009672c < (float)puVar33) {
      puVar28 = DAT_ram_4009672c;
      if (0.0 < fVar16) {
        fVar26 = fVar16 * DAT_ram_4009b18c;
LAB_ram_400723ca:
        fStack_ac = (float)puVar28 * DAT_ram_40099f28 + DAT_ram_4009a344;
        goto LAB_ram_40072488;
      }
LAB_ram_40072500:
      fVar19 = (float)puVar28 * DAT_ram_40096780 + DAT_ram_4009a33c;
LAB_ram_40072514:
      if ((float)puVar28 < 0.0) {
LAB_ram_4007244e:
        fStack_ac = DAT_ram_4009a344;
      }
      else {
        if ((float)puVar28 <= (float)DAT_ram_4009672c) goto LAB_ram_400723ca;
        fStack_ac = DAT_ram_4009a350;
      }
    }
    else {
      if (0.0 < fVar16) {
        fVar26 = fVar16 * DAT_ram_4009b18c;
      }
      if ((float)puVar33 <= (float)DAT_ram_4009675c) {
        fVar34 = (float)puVar33 + (float)puVar33;
        if (0.0 <= fVar34) {
          fVar19 = DAT_ram_4009a33c;
          if (fVar34 <= (float)DAT_ram_4009672c) goto LAB_ram_40072428;
          goto LAB_ram_4007243c;
        }
        fStack_ac = DAT_ram_4009a348;
        fVar19 = DAT_ram_4009a340;
      }
      else {
        puVar28 = (undefined *)
                  (((float)puVar33 - (float)DAT_ram_4009675c) +
                  ((float)puVar33 - (float)DAT_ram_4009675c));
        if (0.0 <= (float)puVar28) {
          if ((float)puVar28 <= (float)DAT_ram_4009672c) goto LAB_ram_40072500;
          goto LAB_ram_40072514;
        }
        fStack_ac = DAT_ram_4009a344;
        fVar19 = DAT_ram_4009a33c;
      }
    }
LAB_ram_40071ff4:
    if (fVar26 < fStack_ac) {
      fStack_ac = fVar26;
    }
    if (DAT_ram_40099f70 <= fVar19) {
      if (fStack_ac - (float)DAT_ram_4009672c < fVar19) {
        fVar19 = fStack_ac - (float)DAT_ram_4009672c;
      }
      goto LAB_ram_4007201e;
    }
    fVar26 = DAT_ram_40099f70;
    fVar34 = fStack_ac;
    if (fStack_ac < DAT_ram_40099f70) goto LAB_ram_40072028;
LAB_ram_4007203c:
    fStack_ac = fVar26;
    fVar19 = fVar34;
    if (fStack_ac <= fVar34) {
      fVar19 = fStack_ac;
    }
  }
  puVar28 = (undefined *)(fVar34 / fVar19);
  if (fVar34 / fVar19 < (float)DAT_ram_4009672c) {
    puVar28 = DAT_ram_4009672c;
  }
LAB_ram_4007205a:
  fVar20 = (float)FUN_ram_40000c5e(puVar28);
  fVar11 = DAT_ram_4009f4bc;
  fVar19 = DAT_ram_4009f324._4_4_;
  fVar34 = DAT_ram_4009f310;
  fVar26 = DAT_ram_4009f2d4;
  puVar28 = PTR_entry_ram_40096740;
  uVar14 = 0;
  do {
    uVar15 = param_6 - uVar14;
    if (8 < uVar15) {
      uVar15 = 8;
    }
    fVar21 = (float)FUN_ram_40000bd8(((float)(int)uVar15 * DAT_ram_40096744 * fVar11 *
                                     (float)_DAT_ram_4009b1a4) / fVar16);
    puVar33 = (undefined *)((float)puVar3 - fVar21);
    if ((float)puVar33 < 0.0) {
      puVar33 = (undefined *)0x0;
    }
    else if ((float)puVar3 < (float)puVar33) {
      puVar33 = puVar3;
    }
    fVar21 = (float)FUN_ram_400009d2((float)uVar18 * (float)_DAT_ram_4009f090);
    puVar22 = (undefined *)(fVar21 * (float)_DAT_ram_40099f94 + (float)puStack_a8);
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
    fVar21 = (float)FUN_ram_40000bd8(fVar21);
    fVar21 = (fVar21 * fStack_ac * fVar11) / fVar16;
    if (ABS(fVar21) < (float)_DAT_ram_4009a4f8) {
      fVar21 = fVar21 * fVar21 * fVar21 * fVar26 + fVar21;
    }
    else {
      fVar21 = (float)FUN_ram_40000a4e();
    }
    fVar10 = DAT_ram_4009f32c;
    fVar9 = DAT_ram_4009f324._4_4_;
    fVar8 = DAT_ram_4009f314;
    fVar7 = DAT_ram_4009f310;
    fVar6 = DAT_ram_4009f0b0;
    fVar5 = DAT_ram_4009f060;
    fVar4 = DAT_ram_4009673c;
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
                     (fVar25 * fVar25 * DAT_ram_4009f32c + fVar19);
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


